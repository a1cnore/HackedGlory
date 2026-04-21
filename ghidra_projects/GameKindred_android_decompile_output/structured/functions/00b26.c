// functions/00b26 — 13 functions
#include "libGameKindred.h"




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b26098(undefined8 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_027de7f0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 9) = DAT_03218f38;
  param_1[8] = DAT_03218f30;
  thunk_FUN_00e7051c(param_1 + 10,&DAT_03210450);
  FUN_008fcdb8(param_1 + 0xc,&DAT_0320ffa8);
  param_1[0xf] = 0x41c8000042480000;
  uVar3 = _DAT_03218ef8;
  param_1[0x12] = 0x3f000000;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar3;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)((long)param_1 + 0xa4) = 0x1bf800000;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = uVar3;
  *(undefined4 *)((long)param_1 + 0xac) = 0x1000001;
  uVar1 = FUN_0092ea9c();
  uVar2 = 0x447a0000;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x442f0000;
  }
  *(undefined4 *)((long)param_1 + 0x94) = uVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b26174(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_0092ea9c();
  FUN_009c8464(param_1 + 8,0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x48) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  FUN_00910394(param_1 + 0x50,&DAT_03210450);
  FUN_008fce60(param_1 + 0x60,&DAT_0320ffa8);
  *(undefined8 *)(param_1 + 0x78) = 0x41c8000042480000;
  uVar1 = _DAT_03218ef8;
  uVar3 = 0x447a0000;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0x442f0000;
  }
  *(undefined4 *)(param_1 + 0x90) = 0x3f000000;
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0xa4) = 0x1bf800000;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined8 *)(param_1 + 0x9c) = uVar4;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined2 *)(param_1 + 0xac) = 1;
  return;
}




void FUN_00b2624c(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027de808;
  FUN_00b26098(param_1 + 0x17);
  plVar1 = param_1 + 0x2e;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  FUN_00b16678(plVar1);
  plVar2 = param_1 + 0x1a2;
  FUN_00f017e8(plVar2);
  param_1[0x1a2] = (long)&PTR_FUN_027c1f80;
  param_1[0x1b4] = 0;
  param_1[0x1b3] = 0;
  FUN_008fcdb8(param_1 + 0x1b5,&DAT_0320ffa8);
  plVar3 = param_1 + 0x1b9;
  *(byte *)(param_1 + 0x1b8) = param_2 & 1;
  FUN_00ab6c24(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  if ((*(float *)(param_1 + 0x1c3) != 0.5) || (*(float *)((long)param_1 + 0xe1c) != 0.5)) {
    param_1[0x1c3] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0dac8(param_1 + 0x29d,0);
  uVar4 = *(uint *)((long)param_1 + 0xe4c);
  if ((uVar4 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xe4c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar3);
  }
  FUN_00ab703c(0x42700000,0x42c80000,0x43c80000,plVar3,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  local_50 = DAT_03210c64;
  param_1[0x1c4] = 0x4220000042a00000;
  local_78 = FUN_00b2652c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x1ba,&local_78);
  uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00ab7498(plVar3,uVar6);
  *(uint *)((long)param_1 + 0xe4c) = *(uint *)((long)param_1 + 0xe4c) & 0xfffffffb;
  uVar7 = FUN_0092ea9c();
  fVar8 = 1.5;
  if ((uVar7 & 1) == 0) {
    fVar8 = 1.2;
  }
  if ((*(float *)(param_1 + 0x1c2) != fVar8) || (*(float *)((long)param_1 + 0xe14) != fVar8)) {
    *(float *)(param_1 + 0x1c2) = fVar8;
    *(float *)((long)param_1 + 0xe14) = fVar8;
    FUN_0091ada4(plVar3);
  }
  uVar4 = *(uint *)((long)param_1 + 500);
  if ((uVar4 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 500) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x7280;
    FUN_0091ada4(plVar1);
  }
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
  }
  if ((*(float *)(param_1 + 9) != 0.1) || (*(float *)((long)param_1 + 0x4c) != 0.1)) {
    param_1[9] = 0x3dcccccd3dcccccd;
    FUN_0091ada4(param_1);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2652c(long param_1)

{
  if (*(code **)(param_1 + 0xd8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b2653c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0xd0),0);
    return;
  }
  return;
}




void FUN_00b26544(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027de808;
  FUN_00b272f0();
  FUN_009c7fa8(param_1 + 0x1b9);
  if ((*(byte *)(param_1 + 0x1b5) & 1) != 0) {
    operator_delete((void *)param_1[0x1b7]);
  }
  if ((void *)param_1[0x1b4] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b4]);
    param_1[0x1b4] = 0;
    param_1[0x1b3] = 0;
  }
  FUN_00f01868(param_1 + 0x1a2);
  FUN_00ac51b8(param_1 + 0x2e);
  param_1[0x17] = &PTR_FUN_027de7f0;
  if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
    operator_delete((void *)param_1[0x25]);
  }
  if ((void *)param_1[0x22] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22]);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  FUN_009c8464(param_1 + 0x18,1);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b265f4(void *param_1)

{
  FUN_00b26544();
  operator_delete(param_1);
  return;
}




void FUN_00b26618(long *param_1,undefined8 param_2,long param_3,byte param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  FUN_008fce60(param_1 + 0x1b5);
  FUN_00b121f4(param_1 + 0x18,param_3 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x48);
  lVar3 = *(long *)(param_3 + 0x38);
  param_1[0x1f] = *(long *)(param_3 + 0x40);
  param_1[0x1e] = lVar3;
  lVar3 = *(long *)(param_3 + 0x28);
  param_1[0x1d] = *(long *)(param_3 + 0x30);
  param_1[0x1c] = lVar3;
  lVar3 = *(long *)(param_3 + 0x18);
  param_1[0x1b] = *(long *)(param_3 + 0x20);
  param_1[0x1a] = lVar3;
  FUN_00910394(param_1 + 0x21,param_3 + 0x50);
  FUN_008fce60(param_1 + 0x23,param_3 + 0x60);
  uVar2 = *(ulong *)(param_3 + 0xa8);
  param_1[0x2c] = uVar2;
  lVar3 = *(long *)(param_3 + 0x98);
  param_1[0x2b] = *(long *)(param_3 + 0xa0);
  param_1[0x2a] = lVar3;
  lVar3 = *(long *)(param_3 + 0x88);
  param_1[0x29] = *(long *)(param_3 + 0x90);
  param_1[0x28] = lVar3;
  lVar4 = *(long *)(param_3 + 0x80);
  lVar3 = *(long *)(param_3 + 0x78);
  *(byte *)(param_1 + 0x1b8) = param_4 & 1;
  param_1[0x27] = lVar4;
  param_1[0x26] = lVar3;
  uVar1 = DAT_03210f60;
  if ((uVar2 & 0xff00000000) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
    FUN_00b26764(param_1,uVar1,FUN_00b267b8,param_1);
    FUN_00b26764(param_1,DAT_03210f8c,FUN_00b267b8,param_1);
  }
  FUN_00ab7498(param_1 + 0x1b9,param_1 + 0x21);
  *(uint *)((long)param_1 + 0xe4c) =
       *(uint *)((long)param_1 + 0xe4c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xe4c) & 3 | (uint)(param_1[0x1b] != 0) << 2;
  (**(code **)(*param_1 + 0x138))(param_1);
  FUN_00b267c0(param_1,param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2d) = 2;
  FUN_00b26900(param_1);
  return;
}




void FUN_00b26764(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_0099c2fc((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      lVar3 = lVar3 + -0x30;
      plVar2 = plVar2 + 6;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_00b267b8(undefined8 param_1)

{
  FUN_00b26c0c(param_1,0);
  return;
}




void FUN_00b267c0(long *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = (ulong)*param_2 * 0x38;
    fVar6 = 0.0;
    do {
      local_60 = (long *)0x0;
      uVar1 = *(uint *)(lVar3 + 0x28);
      if (uVar1 < 2) {
        local_60 = (long *)FUN_00b27064(param_1,lVar3);
LAB_00b26850:
        FUN_00f023ec(param_1 + 0x1a2,local_60,1);
        FUN_00adcf84(param_1 + 0x1b3,&local_60);
        fVar5 = *(float *)(local_60 + 8);
        if ((fVar5 != *(float *)(lVar3 + 0x30)) ||
           (fVar5 = *(float *)((long)local_60 + 0x44), fVar5 != fVar6)) {
          *(float *)(local_60 + 8) = *(float *)(lVar3 + 0x30);
          *(float *)((long)local_60 + 0x44) = fVar6;
          FUN_0091ada4();
        }
        (**(code **)(*local_60 + 0x50))();
        fVar6 = fVar6 + fVar5 + *(float *)(lVar3 + 0x2c);
      }
      else {
        if (uVar1 == 2) {
          local_60 = (long *)FUN_00b271cc(param_1);
          goto LAB_00b26850;
        }
        if (uVar1 == 3) {
          local_60 = (long *)FUN_00b27274(param_1,lVar3);
          goto LAB_00b26850;
        }
      }
      lVar4 = lVar4 + -0x38;
      lVar3 = lVar3 + 0x38;
    } while (lVar4 != 0);
  }
  (**(code **)(*param_1 + 0x140))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b26900(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined8 local_60;
  long local_58;
  
  lVar2 = DAT_03210d00;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
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
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_00b26a50;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_00b26a50:
  FUN_00efddc4(0x3f800000,puVar5);
  FUN_00efcac4(0x3e4ccccd,puVar5);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_60 = NEON_fmov(0x3f800000,4);
  FUN_00efe58c(puVar6,&local_60);
  FUN_00efcac4(0x3e4ccccd,puVar6);
  FUN_00efcb24(puVar6,FUN_00ac7950);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,puVar5,puVar6,0);
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,puVar4,puVar7,0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b26c0c(long *param_1,ulong param_2)

{
  size_t __n;
  size_t sVar1;
  void *__s1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  char *__s2;
  ushort uVar6;
  char *pcVar7;
  long lVar8;
  ushort *puVar9;
  void *pvVar10;
  ushort *puVar11;
  ushort *puVar12;
  undefined8 local_60;
  long local_58;
  
  lVar8 = DAT_03210d00;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  uVar4 = 0x3dcccccd;
  if ((param_2 & 1) == 0) {
    uVar4 = 0x3ecccccd;
  }
  if ((ulong)uVar6 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efdd74(puVar9);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar9);
  FUN_00efcac4(uVar4,puVar9);
  FUN_00efcb24(puVar9,FUN_009a7608);
  lVar8 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar11 = (ushort *)0x0;
LAB_00b26ddc:
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efc8e8(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_02825148;
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
    lVar8 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) goto LAB_00b26ddc;
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efe530(puVar12);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  local_60 = 0x3dcccccd3dcccccd;
  FUN_00efe58c(puVar12,&local_60);
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,puVar9,puVar11,puVar12,0);
  bVar2 = *(byte *)(param_1 + 0x23);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = param_1[0x24];
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar10 = (void *)param_1[0x25];
    __s1 = pvVar10;
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)((long)param_1 + 0x119);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)((long)param_1 + 0x119);
        lVar8 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar7 != *__s2) goto LAB_00b26ee0;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00b26f0c;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00b26f0c;
  }
  else {
LAB_00b26ee0:
    if ((bVar2 & 1) == 0) {
      pvVar10 = (void *)((long)param_1 + 0x119);
    }
    else {
      pvVar10 = (void *)param_1[0x25];
    }
  }
  FUN_0093bda8(pvVar10,1);
LAB_00b26f0c:
  FUN_00b26f8c(param_1[4],param_1 + 0x1b5);
  if ((code *)param_1[0x1c] != (code *)0x0) {
    (*(code *)param_1[0x1c])(param_1[0x1a],0);
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  (**(code **)(*param_1 + 0x138))(param_1);
  FUN_00b26174(param_1 + 0x17);
  FUN_008fce60(param_1 + 0x1b5,&DAT_0320ffa8);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b26f8c(long param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_40 = param_2 + 1;
  }
  uVar2 = FUN_00b118a0(param_1 + 0x88,&local_40);
  if ((uVar2 & 1) != 0) {
    local_40 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      local_40 = *(byte **)(param_2 + 0x10);
    }
    FUN_00b11940(param_1 + 0x88,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

