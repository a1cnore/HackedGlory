// functions/00983 — 317 functions
#include "libGameKindred.h"




undefined8 * FUN_00983028(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    FUN_00a7e498(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_00983100(int *param_1,int *param_2,undefined4 *param_3)

{
  if (param_1 != (int *)0x0) {
    *param_1 = DAT_02e3ef40;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = DAT_02e3ef40 * 0xe0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = DAT_02e3ef44;
  }
  return;
}




void FUN_00983160(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00983174(&DAT_02c7ef20);
  return;
}




void FUN_00983174(long param_1,undefined8 *param_2)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  (**(code **)*param_2)(param_2);
  *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) =
       *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + -1;
  psVar1 = (short *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  iVar4 = (int)(param_1 + 0x10);
  if (*psVar1 == -1) {
    sVar3 = (short)((uint)((int)param_2 - iVar4) >> 5) * 0x6db7;
    *(short *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2) = sVar3;
    *psVar1 = sVar3;
  }
  else {
    uVar2 = *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2);
    sVar3 = (short)((uint)((int)param_2 - iVar4) >> 5) * 0x6db7;
    *(short *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2) = sVar3;
    *(short *)(param_1 + 0x10 + (ulong)uVar2 * 0xe0) = sVar3;
  }
  *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
       *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + -1;
  return;
}




void FUN_00983244(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983268(void)

{
  return;
}




long FUN_0098326c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983274(void)

{
  return;
}




void FUN_0098327c(void)

{
  return;
}




void FUN_00983280(void)

{
  return;
}




void FUN_00983284(void)

{
  return;
}




void FUN_00983288(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_009832ac(void)

{
  return;
}




long FUN_009832b0(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009832b8(void)

{
  return;
}




void FUN_009832bc(void)

{
  return;
}




void FUN_009832c0(void)

{
  return;
}




void FUN_009832c4(void)

{
  return;
}




void FUN_009832c8(void)

{
  return;
}




void FUN_009832cc(void)

{
  return;
}




void FUN_009832d0(void)

{
  return;
}




void FUN_009832d4(void)

{
  return;
}




void FUN_009832d8(void)

{
  return;
}




void FUN_009832dc(void)

{
  return;
}




void FUN_009832e0(void)

{
  return;
}




void FUN_009832e4(void)

{
  return;
}




void FUN_009832ec(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983310(void)

{
  return;
}




long FUN_00983314(long param_1)

{
  return param_1 + 0x10;
}




long FUN_0098331c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983324(void)

{
  return;
}




void FUN_0098332c(void)

{
  return;
}




void FUN_00983330(void)

{
  return;
}




void FUN_00983334(void)

{
  return;
}




void FUN_00983338(void)

{
  return;
}




void FUN_0098333c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983360(void)

{
  return;
}




long FUN_00983364(long param_1)

{
  return param_1 + 0x10;
}




long FUN_0098336c(long param_1)

{
  return param_1 + 0x10;
}




long FUN_00983374(long param_1)

{
  return param_1 + 0x10;
}




long FUN_0098337c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983384(void)

{
  return;
}




void FUN_00983388(void)

{
  return;
}




void FUN_0098338c(void)

{
  return;
}




void FUN_00983390(void)

{
  return;
}




void FUN_00983394(void)

{
  return;
}




void FUN_0098339c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_009833c0(void)

{
  return;
}




long FUN_009833c4(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009833cc(void)

{
  return;
}




void FUN_009833d4(void)

{
  return;
}




void FUN_009833d8(void)

{
  return;
}




void FUN_009833dc(void)

{
  return;
}




void FUN_009833e0(void)

{
  return;
}




void FUN_009833e4(void)

{
  return;
}




void FUN_009833e8(void)

{
  return;
}




void FUN_009833ec(void)

{
  return;
}




void FUN_009833f0(void)

{
  return;
}




void FUN_009833f4(void)

{
  return;
}




void FUN_009833f8(void)

{
  return;
}




void FUN_009833fc(void)

{
  return;
}




void FUN_00983404(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983428(void)

{
  return;
}




void FUN_0098342c(void)

{
  return;
}




void FUN_00983430(void)

{
  return;
}




void FUN_00983434(void)

{
  return;
}




void FUN_00983438(void)

{
  return;
}




long FUN_0098343c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983448(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_0098346c(void)

{
  return;
}




long FUN_00983470(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983478(void)

{
  return;
}




void FUN_00983480(void)

{
  return;
}




void FUN_00983484(void)

{
  return;
}




void FUN_00983488(void)

{
  return;
}




void FUN_0098348c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_009834b0(void)

{
  return;
}




long FUN_009834b4(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009834bc(void)

{
  return;
}




void FUN_009834c4(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_009834e8(void)

{
  return;
}




long FUN_009834ec(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009834f4(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009834fc(long param_1)

{
  return param_1 + 0x10;
}




long FUN_00983504(long param_1)

{
  return param_1 + 0x10;
}




long FUN_0098350c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983514(void)

{
  return;
}




void FUN_0098351c(void)

{
  return;
}




void FUN_00983520(void)

{
  return;
}




void FUN_00983524(void)

{
  return;
}




void FUN_00983528(void)

{
  return;
}




void FUN_0098352c(void)

{
  return;
}




void FUN_00983530(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983554(void)

{
  return;
}




undefined8 FUN_0098355c(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = 0;
  plVar4 = (long *)(param_1 + 8);
  while( true ) {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if ((uVar2 & 1) == 0) break;
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 9;
    if (1 < uVar3) {
      return 1;
    }
  }
  return 0;
}




void FUN_009835c0(void)

{
  return;
}




void FUN_009835c4(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_009835e8(void)

{
  return;
}




void FUN_009835ec(void)

{
  return;
}




void FUN_009835f0(void)

{
  return;
}




void FUN_009835f4(void)

{
  return;
}




void FUN_009835fc(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983620(void)

{
  return;
}




long FUN_00983624(long param_1)

{
  return param_1 + 0x10;
}




void FUN_0098362c(void)

{
  return;
}




void FUN_00983634(void)

{
  return;
}




void FUN_00983638(void)

{
  return;
}




void FUN_0098363c(void)

{
  return;
}




void FUN_00983640(void)

{
  return;
}




void FUN_00983644(void)

{
  return;
}




void FUN_00983648(void)

{
  return;
}




void FUN_0098364c(void)

{
  return;
}




void FUN_00983650(void)

{
  return;
}




void FUN_00983654(void)

{
  return;
}




void FUN_00983658(void)

{
  return;
}




void FUN_0098365c(void)

{
  return;
}




void FUN_00983660(void)

{
  return;
}




void FUN_00983664(void)

{
  return;
}




void FUN_00983668(void)

{
  return;
}




void FUN_0098366c(void)

{
  return;
}




void FUN_00983670(void)

{
  return;
}




void FUN_00983674(void)

{
  return;
}




void FUN_00983678(void)

{
  return;
}




void FUN_00983680(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_009836a4(void)

{
  return;
}




long FUN_009836a8(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009836b0(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009836b8(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009836c0(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_009836e4(void)

{
  return;
}




void FUN_009836e8(void)

{
  return;
}




void FUN_009836ec(void)

{
  return;
}




void FUN_009836f0(void)

{
  return;
}




void FUN_009836f4(void)

{
  return;
}




void FUN_009836f8(void)

{
  return;
}




void FUN_009836fc(void)

{
  return;
}




void FUN_00983700(void)

{
  return;
}




void FUN_00983704(void)

{
  return;
}




void FUN_00983708(void)

{
  return;
}




void FUN_0098370c(void)

{
  return;
}




void FUN_00983710(void)

{
  return;
}




void FUN_00983714(void)

{
  return;
}




void FUN_00983718(void)

{
  return;
}




void FUN_0098371c(void)

{
  return;
}




void FUN_00983720(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983748(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_0098376c(void)

{
  return;
}




long FUN_00983770(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983778(void)

{
  return;
}




void FUN_00983780(void)

{
  return;
}




void FUN_00983784(void)

{
  return;
}




void FUN_00983788(void)

{
  return;
}




void FUN_0098378c(void)

{
  return;
}




void FUN_00983790(void)

{
  return;
}




void FUN_00983794(void)

{
  return;
}




void FUN_00983798(void)

{
  return;
}




void FUN_0098379c(void)

{
  return;
}




void FUN_009837a0(void)

{
  return;
}




void FUN_009837a4(void)

{
  return;
}




void FUN_009837a8(void)

{
  return;
}




void FUN_009837ac(void)

{
  return;
}




void FUN_009837b0(void)

{
  return;
}




void FUN_009837b4(void)

{
  return;
}




void FUN_009837b8(void)

{
  return;
}




void FUN_009837bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_90 [24];
  undefined1 local_78;
  ulong local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x1d) != '\0') && (uVar2 = FUN_00ceab48(), (uVar2 & 1) == 0))
  goto LAB_00983944;
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  local_50 = *(ulong *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      (**(code **)(param_1 + 0x30))(param_2,&local_50);
    }
  }
  FUN_00d04aec(auStack_90,*(undefined4 *)(param_3 + 0x260),*(undefined4 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_00d04b90(auStack_90);
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    FUN_00d04d2c(local_50 & 0xffffffff,auStack_90);
    break;
  case 2:
    FUN_00d04d3c(auStack_90,local_50 & 0xffffffff);
    break;
  case 3:
    uVar2 = local_50;
LAB_009838f8:
    uVar2 = uVar2 & 0xffffffff;
    goto LAB_00983908;
  case 4:
    FUN_00d04d54(auStack_90,local_50 & 0xff);
    break;
  case 5:
    FUN_00d04d68(auStack_90,&local_50);
    break;
  case 6:
    uVar2 = FUN_00ceab48();
    if ((uVar2 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
      goto LAB_009838f8;
    }
    uVar2 = 0xffffffff;
LAB_00983908:
    FUN_00d04d48(auStack_90,uVar2);
  }
  uVar2 = FUN_00ceab48();
  if (((uVar2 & 1) == 0) ||
     ((*(char *)(param_1 + 0x1d) == '\0' && (uVar2 = FUN_00ceab48(), (uVar2 & 1) != 0)))) {
    local_78 = 1;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    FUN_00d04b98(auStack_90);
  }
  FUN_00ce20fc(auStack_90);
LAB_00983944:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00983970(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983994(void)

{
  return;
}




long FUN_00983998(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009839a0(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009839a8(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009839b0(void)

{
  return;
}




void FUN_009839b8(void)

{
  return;
}




void FUN_009839bc(void)

{
  return;
}




void FUN_009839c0(void)

{
  return;
}




void FUN_009839c4(void)

{
  return;
}




void FUN_009839c8(void)

{
  return;
}




void FUN_009839cc(void)

{
  return;
}




void FUN_009839d0(void)

{
  return;
}




void FUN_009839d4(void)

{
  return;
}




void FUN_009839d8(void)

{
  return;
}




void FUN_009839dc(void)

{
  return;
}




void FUN_009839e0(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983a04(void)

{
  return;
}




long FUN_00983a08(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983a10(void)

{
  return;
}




void FUN_00983a14(void)

{
  return;
}




void FUN_00983a18(void)

{
  return;
}




void FUN_00983a20(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983a44(void)

{
  return;
}




long FUN_00983a48(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983a50(void)

{
  return;
}




void FUN_00983a58(void)

{
  return;
}




void FUN_00983a5c(void)

{
  return;
}




void FUN_00983a60(void)

{
  return;
}




void FUN_00983a64(void)

{
  return;
}




void FUN_00983a6c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983a90(void)

{
  return;
}




long FUN_00983a94(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983aa0(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983ac4(void)

{
  return;
}




long FUN_00983ac8(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983ad0(void)

{
  return;
}




void FUN_00983ad8(void)

{
  return;
}




void FUN_00983ae0(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983b04(void)

{
  return;
}




long FUN_00983b08(long param_1)

{
  return param_1 + 0x18;
}




undefined4 FUN_00983b10(void)

{
  return 0xffffffff;
}




void FUN_00983b20(long param_1)

{
  FUN_00cfc44c(param_1 + -0x10);
  return;
}




void FUN_00983b28(long param_1)

{
  FUN_00cfc44c((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




undefined4 FUN_00983b50(void)

{
  return 0xffffffff;
}




void FUN_00983b60(void)

{
  return;
}




undefined4 FUN_00983b68(void)

{
  return 0xffffffff;
}




void FUN_00983b78(void)

{
  return;
}




void FUN_00983b7c(void)

{
  return;
}




void FUN_00983b80(void)

{
  return;
}




void FUN_00983b84(void)

{
  return;
}




void FUN_00983b88(void)

{
  return;
}




void FUN_00983b8c(void)

{
  return;
}




void FUN_00983b90(void)

{
  return;
}




void FUN_00983b94(void)

{
  return;
}




void FUN_00983b98(void)

{
  return;
}




void FUN_00983b9c(void)

{
  return;
}




void FUN_00983ba0(void)

{
  return;
}




void FUN_00983ba4(void)

{
  return;
}




void FUN_00983ba8(void)

{
  return;
}




void FUN_00983bac(void)

{
  return;
}




void FUN_00983bb4(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983bd8(void)

{
  return;
}




long FUN_00983bdc(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983be4(void)

{
  return;
}




void FUN_00983bec(void)

{
  return;
}




void FUN_00983bf0(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983c14(void)

{
  return;
}




void FUN_00983c18(void)

{
  return;
}




void FUN_00983c20(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983c44(void)

{
  return;
}




long FUN_00983c48(long param_1)

{
  return param_1 + 0x10;
}




long FUN_00983c50(long param_1)

{
  return param_1 + 0x10;
}




long FUN_00983c58(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983c60(void)

{
  return;
}




void FUN_00983c68(void)

{
  return;
}




void FUN_00983c70(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983c94(void)

{
  return;
}




long FUN_00983c98(long param_1)

{
  return param_1 + 0x10;
}




long FUN_00983ca0(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00983ca8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bdd80;
  DAT_02e3ef50 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00983cc4(void)

{
  return;
}




void FUN_00983ccc(void)

{
  return;
}




void FUN_00983cd0(void)

{
  return;
}




void FUN_00983cd4(void)

{
  return;
}




void FUN_00983cd8(void)

{
  return;
}




void FUN_00983cdc(void)

{
  return;
}




void FUN_00983ce4(void)

{
  return;
}




void FUN_00983ce8(void)

{
  return;
}




void FUN_00983cec(void)

{
  return;
}




void FUN_00983cf0(void)

{
  return;
}




void FUN_00983cf4(void)

{
  return;
}




void FUN_00983cfc(void)

{
  return;
}




void FUN_00983d00(void)

{
  return;
}




void FUN_00983d04(void)

{
  return;
}




void FUN_00983d08(void)

{
  return;
}




void FUN_00983d0c(void)

{
  return;
}




void FUN_00983d10(void)

{
  return;
}




void FUN_00983d14(void)

{
  return;
}




void FUN_00983d18(void)

{
  return;
}




void FUN_00983d1c(void)

{
  return;
}




void FUN_00983d20(void)

{
  return;
}




void FUN_00983d24(void)

{
  return;
}




void FUN_00983d28(void)

{
  return;
}




void FUN_00983d2c(void)

{
  return;
}




void FUN_00983d30(void)

{
  return;
}




void FUN_00983d34(void)

{
  return;
}




void FUN_00983d38(void)

{
  return;
}




void FUN_00983d3c(void)

{
  return;
}




void FUN_00983d40(void)

{
  return;
}




void FUN_00983d44(void)

{
  return;
}




void FUN_00983d48(void)

{
  return;
}




void FUN_00983d4c(void)

{
  return;
}




void FUN_00983d50(void)

{
  return;
}




void FUN_00983d54(void)

{
  return;
}




void FUN_00983d58(void)

{
  return;
}




void FUN_00983d5c(void)

{
  return;
}




void FUN_00983d60(void)

{
  return;
}




void FUN_00983d64(void)

{
  return;
}




void FUN_00983d68(void)

{
  return;
}




void FUN_00983d6c(void)

{
  return;
}




void FUN_00983d70(void)

{
  return;
}




void FUN_00983d74(void)

{
  return;
}




undefined8 FUN_00983d78(void)

{
  return 0;
}




void FUN_00983d84(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983da8(long param_1)

{
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  return;
}




void FUN_00983db8(long param_1)

{
  FUN_00a8426c(param_1 + 0x18);
  return;
}




void FUN_00983dc4(void)

{
  return;
}




void FUN_00983dc8(void)

{
  return;
}




void FUN_00983dcc(void)

{
  return;
}




void FUN_00983dd0(void)

{
  return;
}




void FUN_00983dd4(void)

{
  return;
}




void FUN_00983dd8(void)

{
  return;
}




void FUN_00983ddc(void)

{
  return;
}




void FUN_00983de4(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983e08(long param_1)

{
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  return;
}




void FUN_00983e18(long param_1)

{
  FUN_00a84484(param_1 + 0x18);
  return;
}




void FUN_00983e20(void)

{
  return;
}




void FUN_00983e28(void)

{
  return;
}




void FUN_00983e2c(void)

{
  return;
}




void FUN_00983e30(void)

{
  return;
}




void FUN_00983e34(void)

{
  return;
}




void FUN_00983e38(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00983e5c(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be118;
  uVar1 = *param_4;
  *(undefined1 *)(param_1 + 4) = param_2;
  *(undefined1 *)((long)param_1 + 0x21) = param_3;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
  return;
}




void FUN_00983e88(void)

{
  return;
}




void FUN_00983e8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_008ff584(*(undefined1 *)(param_1 + 0x20));
  lVar2 = FUN_008ff584(*(undefined1 *)(param_1 + 0x21));
  if ((lVar1 != 0) && (lVar2 != 0)) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef58) {
        FUN_00a10ff8(lVar1,lVar2,param_1 + 0x1c);
        return;
      }
    }
  }
  return;
}




void FUN_00983f04(void)

{
  return;
}




void FUN_00983f0c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be118;
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_1 + 0x20);
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00983f84(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x983f88);
  (*pcVar1)();
}




void FUN_00983f88(undefined4 param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
                 undefined4 param_5,byte param_6)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_027be188;
  uVar1 = *param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  *(uint *)(param_2 + 5) = param_3 & 0xff;
  *(undefined4 *)((long)param_2 + 0x2c) = param_5;
  *(undefined8 *)((long)param_2 + 0x1c) = uVar1;
  *(byte *)(param_2 + 6) = param_6 & 1;
  return;
}




void FUN_00983fc0(void)

{
  return;
}




void FUN_00983fc4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_008ff584(*(undefined4 *)(param_1 + 0x28));
  lVar2 = FUN_008ff584(*(undefined4 *)(param_1 + 0x2c));
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_00d57ca8(*(undefined4 *)(param_1 + 0x24),lVar1,lVar2,*(undefined1 *)(param_1 + 0x30));
    return;
  }
  return;
}

