// functions/00c24 — 50 functions
#include "libGameKindred.h"




void FUN_00c24018(void *param_1)

{
  FUN_00c23c78();
  operator_delete(param_1);
  return;
}




void FUN_00c2403c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  int local_44;
  undefined2 local_40 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_3 + 0x48))();
  FUN_00f13f08(uVar2,param_2 * 0.6,param_3 + 0x55);
  FUN_00f07b18(0,param_3 + 0x55,2,param_3,2);
  FUN_00967388(0,0,0,&local_44);
  FUN_00f13f68(param_3 + 0x1b3,(ulong)(local_44 + 0xfa) << 0x20);
  local_40[0] = 3;
  FUN_00f14070(param_3 + 0x1b3,local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c24104(void)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&uStack_2c,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_2c,local_30);
}




void FUN_00c24154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c24160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  return;
}




void FUN_00c24164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c24170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x40))();
  return;
}




void FUN_00c24174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c24180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x48))();
  return;
}




void FUN_00c24184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c24190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x50))();
  return;
}




void FUN_00c24194(void)

{
  return;
}




void FUN_00c24198(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  FUN_00f13f08(param_1 + 0x1c);
  FUN_00f0826c(uVar1,param_1 + 0x6c);
  FUN_00f07940(0,0,param_1 + 0x6c,4,param_1 + 0x1c,4);
  FUN_00f07a78(0,0,param_1,0);
  return;
}




void FUN_00c2421c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x6ee8;
  uVar3 = FUN_00f025e0(lVar1);
  FUN_00f023ec(lVar1,param_2,1);
  FUN_00f13f68(param_2,0xbe00000000);
  local_78 = (code *)CONCAT62(local_78._2_6_,0x55);
  FUN_00f14070(param_2,&local_78);
  plVar4 = (long *)FUN_00f14058(lVar1);
  (**(code **)(*plVar4 + 0x68))(plVar4,param_2,0,2);
  plVar4 = (long *)FUN_00f14058(lVar1);
  (**(code **)(*plVar4 + 0x70))(plVar4,0xf);
  local_50 = DAT_03210c64;
  local_78 = FUN_00c24324;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  local_58 = uVar3 & 0xffffffff;
  FUN_009693a0(param_2 + 8,&local_78);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c24324(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00c24334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))(*(long **)(param_1 + 0xd8),in_x4);
  return;
}




void FUN_00c24338(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined2 local_40 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = param_1 + 0x6fa0;
  FUN_00f023ec(param_1,param_2,1);
  FUN_00f13f68(param_2,0xbe00000000);
  local_40[0] = 0x55;
  FUN_00f14070(param_2,local_40);
  plVar2 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar2 + 0x68))(plVar2,param_2,0,2);
  plVar2 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar2 + 0x70))(plVar2,0xf);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c243f0(long param_1)

{
  FUN_00f025e0(param_1 + 0x6ee8);
  return;
}




void FUN_00c243fc(long *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_4c,auStack_50);
  if ((param_4 & 1) != 0) {
    (**(code **)(param_1[0x1e8] + 0x78))(param_1 + 0x1e8,param_2,1);
    plVar2 = (long *)FUN_00f14058(param_1 + 0x1e8);
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
  }
  if ((param_3 & 1) != 0) {
    FUN_00967388(&uStack_54,0,&local_58,&local_5c);
    FUN_00c195bc(param_2,uStack_54,0,local_58,local_5c);
    FUN_00f023ec(param_1 + 0x55,param_2,1);
    plVar2 = (long *)FUN_00f14058(param_1 + 0x55);
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c24508(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_00f07940(0,0,param_2,8,param_1,8);
  return;
}




void FUN_00c24550(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x65a0);
  while ((long *)(param_1 + 0x65a8) != plVar4) {
    if (plVar4[5] != 0) {
      FUN_00aa9984();
    }
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar2 = plVar4 + 2;
      bVar1 = *(long **)*plVar2 != plVar4;
      plVar4 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar4 = (long *)*plVar2;
        } while (*plVar4 != lVar3);
      }
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}




void FUN_00c245d8(long param_1)

{
  *(uint *)(param_1 + 0x32c) = *(uint *)(param_1 + 0x32c) & 0xfffffffb;
  FUN_00aae738(param_1 + 0xd98,1);
  return;
}




void FUN_00c245f4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if ((param_3 & 1) == 0) {
    FUN_00aaa958(param_1 + 0x65b8);
    lVar1 = 0x6a50;
  }
  else {
    FUN_00aaa958(param_1 + 0x6a50);
    lVar1 = 0x65b8;
  }
  FUN_00aaa958(param_1 + lVar1,0xffffffff);
  return;
}




void FUN_00c24640(long param_1,uint param_2,uint param_3)

{
  if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
    FUN_00aa87f8();
    FUN_00aa87f8(param_1 + 0xa40);
    return;
  }
  FUN_00aa8b04(param_1 + 0x450,param_2 & 1);
  FUN_00aa8b04(param_1 + 0xa40,param_3 & 1);
  return;
}




void FUN_00c24690(long param_1)

{
  FUN_00aaccbc(param_1 + 0x44d8);
  return;
}




void FUN_00c2469c(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c25018;
  local_38 = param_1;
  FUN_00f02e98(0x40000000,&local_38,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_00c246fc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00f1357c();
  FUN_00f13b88(plVar1,param_3);
  (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
  plVar2 = operator_new(0xb8);
  FUN_00f13ca4();
  *(uint *)((long)plVar2 + 0x84) = *(uint *)((long)plVar2 + 0x84) | 0x20;
  (**(code **)(*plVar2 + 0x78))(plVar2,param_2,1);
  FUN_00f13fd8(plVar2,plVar1);
  return plVar2;
}




void FUN_00c2478c(long param_1)

{
  FUN_00aaccbc(param_1 + 0x44d8);
  return;
}




void FUN_00c24798(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte local_b0 [16];
  void *local_a0;
  uint local_94;
  undefined1 auStack_90 [8];
  code *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00d6eb50();
  local_94 = FUN_00d6e9d4(uVar6,*param_2);
  FUN_00cae2c8(local_b0);
  uVar6 = FUN_00e6ce7c(param_2[3],0);
  uVar3 = FUN_00cea0fc(param_2);
  lVar7 = FUN_00ceace8();
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00ceace8();
    uVar8 = FUN_00ceaf34();
    uVar4 = 0;
    if ((uVar8 & 1) != 0) {
      FUN_00ceace8();
      uVar8 = FUN_00ceaef4();
      uVar4 = 0;
      if ((uVar8 & 1) != 0) {
        uVar4 = FUN_0093d808();
        uVar4 = uVar4 ^ 1;
      }
    }
  }
  uVar10 = *param_2;
  pvVar1 = (void *)((ulong)local_b0 | 1);
  if ((local_b0[0] & 1) != 0) {
    pvVar1 = local_a0;
  }
  lVar7 = FUN_00ceace8();
  uVar5 = 0;
  if (lVar7 != 0) {
    FUN_00ceace8();
    uVar5 = FUN_00ceb05c();
  }
  lVar7 = FUN_00aaccf4(param_1 + 0x44d8,uVar10,pvVar1,uVar6,uVar3,uVar5 & 1,uVar4 & 1);
  local_68 = (ulong)local_94;
  local_60 = DAT_03210c64;
  local_88 = FUN_00c2492c;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  FUN_009693a0(lVar7 + 8,&local_88);
  local_88 = (code *)&local_94;
  lVar9 = FUN_00c24ef0(param_1 + 0x65a0,&local_94,&DAT_01bbc331,&local_88,auStack_90);
  *(long *)(lVar9 + 0x28) = lVar7;
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2492c(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00c2493c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))(*(undefined8 **)(param_1 + 0xd8),in_x4);
  return;
}




void FUN_00c24940(long param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined4 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &local_3c;
  local_3c = param_2;
  lVar2 = FUN_00c24ef0(param_1 + 0x65a0,&local_3c,&DAT_01bbc331,&local_30,auStack_38);
  if (*(long *)(lVar2 + 0x28) != 0) {
    FUN_00aa9ccc(*(long *)(lVar2 + 0x28),param_3 & 1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c249c0(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined4 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &local_3c;
  local_3c = param_2;
  lVar2 = FUN_00c24ef0(param_1 + 0x65a0,&local_3c,&DAT_01bbc331,&local_30,auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(lVar2 + 0x28));
}




void FUN_00c24a30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00f01980(param_2);
  uVar2 = FUN_00efee28(0,0x3e4ccccd,0);
  FUN_00f022a0(param_2,uVar2);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f022a0(param_2,puVar4);
  return;
}




void FUN_00c24b20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00f01980(param_2);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f022a0(param_2,puVar4);
  uVar2 = FUN_00efee28(0x3f800000,0x3e4ccccd,0);
  FUN_00f022a0(param_2,uVar2);
  return;
}




void FUN_00c24c10(long param_1)

{
  FUN_00aacb8c(param_1 + 0x44d8);
  return;
}




void FUN_00c24c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c24c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))(*(undefined8 **)(param_1 + 0xd8),param_3);
  return;
}




void FUN_00c24c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c24c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  return;
}




void FUN_00c24c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c24c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x58))();
  return;
}




void FUN_00c24c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c24c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x40))();
  return;
}




void FUN_00c24c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c24c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x50))();
  return;
}




void FUN_00c24c70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c24c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))(*(long **)(param_1 + 0xd8),param_3);
  return;
}




void FUN_00c24c84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c24cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,uVar1);
  return;
}




void FUN_00c24cb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c24ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar1);
  return;
}




void FUN_00c24cec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c24d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
  return;
}




void FUN_00c24d20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c24d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,uVar1);
  return;
}




void FUN_00c24d54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c24d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,uVar1);
  return;
}




void FUN_00c24d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c24d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x48))();
  return;
}




void FUN_00c24d98(long param_1,uint param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint local_4c;
  undefined1 auStack_48 [8];
  uint *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(ushort *)(param_4 + 9) != 0xffff) && (*(char *)(param_4 + 3) != '\0')) {
    local_40 = &local_4c;
    local_4c = (uint)*(ushort *)(param_4 + 9);
    lVar2 = FUN_00c24ef0(param_1 + 0x65a0,&local_4c,&DAT_01bbc331,&local_40,auStack_48);
    if ((param_3 & 1) == 0) {
      FUN_00aa9bf8(*(undefined8 *)(lVar2 + 0x28),param_2 & 1);
    }
    else {
      FUN_00aa9be8();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c24e4c(long param_1,uint param_2,ulong param_3,uint param_4,uint param_5)

{
  param_1 = param_1 + 0xff8;
  if ((param_3 & 1) != 0) {
    FUN_00aac01c(param_1,param_2 & 1,param_4 & 1);
    return;
  }
  if ((param_5 & 1) != 0) {
    FUN_00aac0ec(param_1,param_2 & 1);
    return;
  }
  FUN_00aabfa0(param_1);
  return;
}




void FUN_00c24e70(long param_1)

{
  FUN_00aab2b8(param_1 + 0x5cb0);
  return;
}




void FUN_00c24e7c(long param_1)

{
  FUN_00aab1c4(param_1 + 0x5cb0);
  return;
}




void FUN_00c24e88(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    FUN_00aaa8cc(param_1 + 0x6a50);
    return;
  }
  FUN_00aaa8cc(param_1 + 0x65b8);
  return;
}




void FUN_00c24ea4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00c24ea4(param_1,*param_2);
    FUN_00c24ea4(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_00c24ef0(long param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar4 = (undefined8 *)(param_1 + 8);
  puVar5 = puVar4;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar5 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar4 = puVar3, *param_2 < *(uint *)(puVar4 + 4)) {
        puVar3 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_00c24f68;
      }
      if (*param_2 <= *(uint *)(puVar4 + 4)) break;
      puVar5 = puVar4 + 1;
      puVar3 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
LAB_00c24f68:
  pvVar6 = (void *)*puVar5;
  bVar1 = pvVar6 == (void *)0x0;
  if (bVar1) {
    pvVar6 = operator_new(0x30);
    uVar2 = *(undefined4 *)*param_4;
    *(undefined8 *)((long)pvVar6 + 0x28) = 0;
    *(undefined4 *)((long)pvVar6 + 0x20) = uVar2;
    FUN_00c24fc4(param_1,puVar4,puVar5,pvVar6);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar6;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_00c24fc4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}

