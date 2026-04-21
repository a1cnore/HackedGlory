// functions/00b7e — 13 functions
#include "libGameKindred.h"




void FUN_00b7e2bc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float local_58;
  float local_54;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&local_54,&local_58);
  FUN_00f13f08(local_54,local_58,param_1 + 200);
  lVar1 = param_1 + 0x180;
  if ((*(float *)(param_1 + 0x1c0) != local_54 * 0.5) || (*(float *)(param_1 + 0x1c4) != 0.0)) {
    *(float *)(param_1 + 0x1c0) = local_54 * 0.5;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x180) + 0x28))(lVar1,&local_50);
  FUN_00f13f08(local_54,local_58,lVar1);
  lVar1 = param_1 + 0x238;
  FUN_00f13f08(0x44900000,local_58,lVar1);
  if ((*(float *)(param_1 + 0x278) != 0.0) || (*(float *)(param_1 + 0x27c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x278) = 0;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x238) + 0x28))(lVar1,&local_50);
  lVar1 = param_1 + 0x328;
  if ((*(float *)(param_1 + 0x368) != 0.0) || (*(float *)(param_1 + 0x36c) != local_58 * 0.5)) {
    *(undefined4 *)(param_1 + 0x368) = 0;
    *(float *)(param_1 + 0x36c) = local_58 * 0.5;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x328) + 0x28))(lVar1,&local_50);
  FUN_00f13f08(local_54,local_54,lVar1);
  if ((*(float *)(param_1 + 0x458) != 0.0) || (*(float *)(param_1 + 0x45c) != 576.0)) {
    *(undefined8 *)(param_1 + 0x458) = 0x4410000000000000;
    FUN_0091ada4(param_1 + 0x418);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x418) + 0x28))(param_1 + 0x418,&local_50);
  if ((*(float *)(param_1 + 0x548) != 0.0) || (*(float *)(param_1 + 0x54c) != 576.0)) {
    *(undefined8 *)(param_1 + 0x548) = 0x4410000000000000;
    FUN_0091ada4(param_1 + 0x508);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x508) + 0x28))(param_1 + 0x508,&local_50);
  if ((*(float *)(param_1 + 0x638) != 0.0) || (*(float *)(param_1 + 0x63c) != 205.0)) {
    *(undefined8 *)(param_1 + 0x638) = 0x434d000000000000;
    FUN_0091ada4(param_1 + 0x5f8);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5f8) + 0x28))(param_1 + 0x5f8,&local_50);
  if ((*(float *)(param_1 + 0x768) != 0.0) || (*(float *)(param_1 + 0x76c) != 931.0)) {
    *(undefined8 *)(param_1 + 0x768) = 0x4468c00000000000;
    FUN_0091ada4(param_1 + 0x728);
  }
  local_50 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x728) + 0x28))(param_1 + 0x728,&local_50);
  plVar2 = (long *)(param_1 + 0x858);
  if ((*(float *)(param_1 + 0x898) != 0.0) || (*(float *)(param_1 + 0x89c) != local_58 + -162.0)) {
    *(undefined4 *)(param_1 + 0x898) = 0;
    *(float *)(param_1 + 0x89c) = local_58 + -162.0;
    FUN_0091ada4(plVar2);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7e5e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e79f8;
  FUN_009c7fa8(param_1 + 0x10b);
  FUN_00f0d3a4(param_1 + 0xe5);
  FUN_00f0d3a4(param_1 + 0xbf);
  param_1[0xa1] = &PTR_FUN_028266f0;
  param_1[0xb8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbb);
  FUN_00f13d08(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_028266f0;
  param_1[0x9a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9d);
  FUN_00f13d08(param_1 + 0x83);
  param_1[0x65] = &PTR_FUN_028266f0;
  param_1[0x7c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7f);
  FUN_00f13d08(param_1 + 0x65);
  param_1[0x47] = &PTR_FUN_028266f0;
  param_1[0x5e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x61);
  FUN_00f13d08(param_1 + 0x47);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b7e6c8(void *param_1)

{
  FUN_00b7e5e8();
  operator_delete(param_1);
  return;
}




void FUN_00b7e6ec(void)

{
  return;
}




void FUN_00b7e6f0(void)

{
  return;
}




void FUN_00b7e6f4(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    FUN_00a9dbbc(1);
    FUN_00b09454(param_1 + 0x858,1);
    *(uint *)(param_1 + 0x8dc) = *(uint *)(param_1 + 0x8dc) | 4;
    FUN_00b7e2bc(param_1);
  }
  else {
    FUN_00b09454(param_1 + 0x858,1);
    *(uint *)(param_1 + 0x8dc) = *(uint *)(param_1 + 0x8dc) | 4;
    FUN_00b7e2bc(param_1);
    FUN_00a9dbbc(0);
  }
  FUN_00b7e7ac(param_1,param_2 & 1);
  return;
}




void FUN_00b7e774(long param_1)

{
  FUN_00b09454(param_1 + 0x858,1);
  *(uint *)(param_1 + 0x8dc) = *(uint *)(param_1 + 0x8dc) | 4;
  FUN_00b7e2bc(param_1);
  return;
}




void FUN_00b7e7ac(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_4c,&local_50);
  lVar2 = DAT_03210d00;
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
    FUN_00efe8d0(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  param_1 = param_1 + 0x180;
  if ((param_2 & 1) == 0) {
    local_58 = 0;
    uStack_54 = local_50;
    FUN_00efe91c(puVar4,param_1,&local_58);
    FUN_00efcb24(puVar4,FUN_0091aa80);
    FUN_00f01980(param_1);
    FUN_00f022a0(param_1,puVar4);
  }
  else {
    local_58 = 0x44700000;
    uStack_54 = local_50;
    FUN_00efe91c(puVar4,param_1,&local_58);
    FUN_00efcb24(puVar4,FUN_00a269a4);
    FUN_00f13f08(0,local_50,param_1);
    FUN_00f01980(param_1);
    FUN_00f022a0(param_1,puVar4);
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_sting_deserter_screen.mp3",0,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7e958(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_031341c4,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7e9c4(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_031341c4,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7ea30(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_031341c4,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7ea9c(long *param_1)

{
  FUN_00b89cd8();
  *param_1 = (long)&PTR_FUN_027e7b60;
  FUN_00f13ca4(param_1 + 0x19);
  FUN_00f11234(param_1 + 0x30);
  FUN_00f0e4a8(param_1 + 100);
  FUN_00f0e4a8(param_1 + 0x82);
  FUN_00f0e4a8(param_1 + 0xa0);
  FUN_00f0d160(param_1 + 0xbe);
  FUN_00f017e8(param_1 + 0xe4);
  param_1[0xe4] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0xf5);
  FUN_00f0d160(param_1 + 0x11b);
  FUN_00f0d160(param_1 + 0x141);
  FUN_00f0d160(param_1 + 0x167);
  FUN_00f0d160(param_1 + 0x18d);
  FUN_00f0d160(param_1 + 0x1b3);
  FUN_00f0d160(param_1 + 0x1d9);
  FUN_00f0d160(param_1 + 0x1ff);
  FUN_00f0d160(param_1 + 0x225);
  FUN_00f0d160(param_1 + 0x24b);
  FUN_00f0e4a8(param_1 + 0x271);
  FUN_00f0e4a8(param_1 + 0x28f);
  FUN_00f0e4a8(param_1 + 0x2ad);
  FUN_00f0e4a8(param_1 + 0x2cb);
  FUN_00f0e4a8(param_1 + 0x2e9);
  FUN_00f0d160(param_1 + 0x307);
  FUN_00f0e4a8(param_1 + 0x32d);
  FUN_00f017e8(param_1 + 0x34b);
  param_1[0x34b] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x35c);
  FUN_00f0d160(param_1 + 0x37a);
  FUN_00b09580(param_1 + 0x3a0);
  FUN_00f0d160(param_1 + 0x603);
  FUN_00f0d160(param_1 + 0x629);
  FUN_00f0d160(param_1 + 0x64f);
  FUN_00f0d160(param_1 + 0x675);
  FUN_00f0d160(param_1 + 0x69b);
  FUN_00f0d160(param_1 + 0x6c1);
  FUN_00f0d160(param_1 + 0x6e7);
  FUN_00f0d160(param_1 + 0x70d);
  FUN_00f1306c(param_1 + 0x733);
  FUN_00abaee8(param_1 + 0x75e,0);
  FUN_00f0d160(param_1 + 0x81d);
  FUN_00f0d160(param_1 + 0x843);
  param_1[0x86c] = 0;
  param_1[0x86b] = 0;
  param_1[0x86a] = 0;
  param_1[0x869] = 0;
  FUN_00f017e8(param_1 + 0x86d);
  param_1[0x86d] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x87e);
  FUN_00f0d160(param_1 + 0x89c);
  FUN_00b09580(param_1 + 0x8c2);
  FUN_00afbfb0(param_1 + 0xb25);
  FUN_00f0d160(param_1 + 0xb61);
  FUN_00f0d160(param_1 + 0xb87);
  FUN_00ab6c24(param_1 + 0xbad,0);
  FUN_00f017e8(param_1 + 0xe65);
  param_1[0xe65] = (long)&PTR_FUN_027c1f80;
  FUN_00b2a3e4(param_1 + 0xe76,0);
  FUN_00b1dc5c(param_1 + 0xff6);
  FUN_00b1c70c(param_1 + 0x1164);
  FUN_00f0d160(param_1 + 0x1554);
  FUN_00f0d160(param_1 + 0x157a);
  FUN_00f0d160(param_1 + 0x15a0);
  FUN_00f0d160(param_1 + 0x15c6);
  FUN_00f017e8(param_1 + 0x15ec);
  param_1[0x15ec] = (long)&PTR_FUN_027c1f80;
  FUN_00ac5ab8(param_1 + 0x15fd,0);
  FUN_00af8b20(param_1 + 0x177e);
  FUN_00f0e4a8(param_1 + 0x17f4);
  FUN_00f0d160(param_1 + 0x1812);
  FUN_00f0d160(param_1 + 0x1838);
  FUN_00b09580(param_1 + 0x185e);
  FUN_00f0d160(param_1 + 0x1ac1);
  FUN_00f0d160(param_1 + 0x1ae7);
  FUN_00f0d160(param_1 + 0x1b0d);
  FUN_00f0d160(param_1 + 0x1b33);
  param_1[0x1b59] = 0;
  FUN_00e70510(param_1 + 0x1b5a);
  FUN_00e84dac(param_1 + 0x1b5c);
  param_1[0x1b5c] = (long)&PTR_FUN_027e7ec8;
  param_1[0x1b63] = 0;
  param_1[0x1b62] = 0;
  param_1[0x1b61] = 0;
  param_1[0x1b66] = 0;
  param_1[0x1b65] = 0;
  FUN_00e84dac(param_1 + 0x1b69);
  param_1[0x1b69] = (long)&PTR_FUN_027b99b0;
  param_1[0x1b70] = 0;
  param_1[0x1b6e] = 0;
  param_1[0x1b6f] = 0;
  *(undefined4 *)((long)param_1 + 0xdc34) = 0;
  param_1[0x1b85] = 0;
  param_1[0x1b84] = 0;
  param_1[0x1b83] = 0;
  param_1[0x1b82] = 0;
  *(undefined1 *)((long)param_1 + 0xdc32) = 0;
  *(undefined2 *)(param_1 + 0x1b86) = 0;
  memset(param_1 + 0x1b72,0,0x60);
  param_1[0x1b87] = 0x3f0000003e800000;
  *(undefined4 *)(param_1 + 0x1b88) = 0x3f400000;
  *(undefined8 *)((long)param_1 + 0xdc44) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0xdc4c) = 0;
  param_1[0x1b8f] = 0;
  param_1[0x1b8e] = 0;
  param_1[0x1b8d] = 0;
  param_1[0x1b8c] = 0;
  param_1[0x1b8b] = 0;
  param_1[0x1b8a] = 0;
  *(undefined1 *)(param_1 + 0x1b90) = 0;
  memset(param_1 + 0x1b91,0,0x88);
  param_1[0x1ba9] = 0;
  param_1[0x1ba8] = 0;
  param_1[0x1ba7] = 0;
  param_1[0x1ba6] = 0;
  param_1[0x1ba5] = 0;
  param_1[0x1ba4] = 0;
  *(undefined1 *)(param_1 + 0x1baa) = 0;
  param_1[0x1ba3] = 0;
  param_1[0x1bae] = 0;
  param_1[0x1bad] = 0;
  param_1[0x1bac] = 0;
  param_1[0x1bab] = 0;
  param_1[0x1baf] = 0x3e4ccccd3ecccccd;
  *(undefined8 *)((long)param_1 + 0xdd86) = 0;
  param_1[0x1bb0] = 0;
  FUN_00b7eff4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00b7eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00b7eff4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  float *pfVar32;
  uint uVar33;
  undefined4 uVar34;
  long lVar35;
  float fVar36;
  undefined8 uVar37;
  ulong uVar38;
  long lVar39;
  code *pcVar40;
  code *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar35 = tpidr_el0;
  local_90 = *(long *)(lVar35 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  plVar1 = param_1 + 0x30;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 100;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar3 = param_1 + 0x82;
  FUN_00f023ec(plVar1,plVar3,1);
  plVar4 = param_1 + 0xa0;
  FUN_00f023ec(plVar1,plVar4,1);
  plVar10 = param_1 + 0x15ec;
  FUN_00f023ec(plVar1,plVar10,1);
  plVar11 = param_1 + 0x177e;
  FUN_00f023ec(plVar10,plVar11,1);
  plVar12 = param_1 + 0x17f4;
  FUN_00f023ec(plVar10,plVar12,1);
  plVar13 = param_1 + 0x1812;
  FUN_00f023ec(plVar10,plVar13,1);
  plVar14 = param_1 + 0x1838;
  FUN_00f023ec(plVar10,plVar14,1);
  FUN_00f023ec(plVar10,param_1 + 0x185e,1);
  plVar15 = param_1 + 0x1ac1;
  FUN_00f023ec(plVar10,plVar15,1);
  plVar16 = param_1 + 0x1ae7;
  FUN_00f023ec(plVar10,plVar16,1);
  plVar17 = param_1 + 0x1b0d;
  FUN_00f023ec(plVar10,plVar17,1);
  FUN_00f023ec(plVar10,param_1 + 0x1b33,1);
  FUN_00f023ec(plVar10,param_1 + 0x15fd,1);
  plVar10 = param_1 + 0xbe;
  FUN_00f023ec(plVar1,plVar10,1);
  plVar5 = param_1 + 0xe4;
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar5,param_1 + 0x733,1);
  plVar18 = param_1 + 0x81d;
  FUN_00f133a4(param_1 + 0x733,plVar18,1);
  plVar19 = param_1 + 0x843;
  FUN_00f023ec(plVar5,plVar19,1);
  plVar20 = param_1 + 0x75e;
  FUN_00f023ec(plVar5,plVar20,1);
  plVar6 = param_1 + 0xf5;
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar5,param_1 + 0x11b,1);
  plVar7 = param_1 + 0x141;
  FUN_00f023ec(plVar5,plVar7,1);
  FUN_00f023ec(plVar5,param_1 + 0x167,1);
  plVar8 = param_1 + 0x18d;
  FUN_00f023ec(plVar5,plVar8,1);
  FUN_00f023ec(plVar5,param_1 + 0x1b3,1);
  plVar9 = param_1 + 0x1d9;
  FUN_00f023ec(plVar5,plVar9,1);
  FUN_00f023ec(plVar5,param_1 + 0x1ff,1);
  FUN_00f023ec(plVar5,param_1 + 0x603,1);
  FUN_00f023ec(plVar5,param_1 + 0x675,1);
  FUN_00f023ec(plVar5,param_1 + 0x629,1);
  FUN_00f023ec(plVar5,param_1 + 0x64f,1);
  FUN_00f023ec(plVar5,param_1 + 0x69b,1);
  FUN_00f023ec(plVar5,param_1 + 0x70d,1);
  FUN_00f023ec(plVar5,param_1 + 0x6c1,1);
  FUN_00f023ec(plVar5,param_1 + 0x6e7,1);
  plVar21 = param_1 + 0x225;
  FUN_00f023ec(plVar5,plVar21,1);
  FUN_00f023ec(plVar5,param_1 + 0x24b,1);
  FUN_00f023ec(plVar5,param_1 + 0x307,1);
  FUN_00f023ec(plVar5,param_1 + 0x32d,1);
  FUN_00f023ec(plVar5,param_1 + 0x271,1);
  FUN_00f023ec(plVar5,param_1 + 0x28f,1);
  FUN_00f023ec(plVar5,param_1 + 0x2ad,1);
  FUN_00f023ec(plVar5,param_1 + 0x2cb,1);
  plVar22 = param_1 + 0x2e9;
  FUN_00f023ec(plVar5,plVar22,1);
  plVar23 = param_1 + 0x34b;
  FUN_00f023ec(plVar5,plVar23,1);
  plVar24 = param_1 + 0x35c;
  FUN_00f023ec(plVar23,plVar24,1);
  plVar25 = param_1 + 0x37a;
  FUN_00f023ec(plVar24,plVar25,1);
  FUN_00f023ec(plVar23,param_1 + 0x3a0,1);
  plVar23 = param_1 + 0x86d;
  FUN_00f023ec(plVar1,plVar23,1);
  plVar26 = param_1 + 0x87e;
  FUN_00f023ec(plVar23,plVar26,1);
  plVar27 = param_1 + 0x89c;
  FUN_00f023ec(plVar23,plVar27,1);
  FUN_00f023ec(plVar23,param_1 + 0x8c2,1);
  plVar28 = param_1 + 0xb25;
  FUN_00f023ec(plVar23,plVar28,1);
  plVar29 = param_1 + 0xb61;
  FUN_00f023ec(plVar23,plVar29,1);
  FUN_00f023ec(plVar23,param_1 + 0xb87,1);
  plVar23 = param_1 + 0xe65;
  FUN_00f023ec(plVar1,plVar23,1);
  FUN_00f023ec(plVar23,param_1 + 0xff6,1);
  FUN_00f023ec(plVar23,param_1 + 0x1164,1);
  plVar30 = param_1 + 0x1554;
  FUN_00f023ec(plVar23,plVar30,1);
  FUN_00f023ec(plVar23,param_1 + 0x157a,1);
  plVar31 = param_1 + 0x15a0;
  FUN_00f023ec(plVar23,plVar31,1);
  FUN_00f023ec(plVar23,param_1 + 0x15c6,1);
  FUN_00f023ec(plVar23,param_1 + 0xe76,1);
  FUN_00f023ec(plVar1,param_1 + 0xbad,1);
  FUN_00f112f0(plVar1,0);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar33 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar33 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x3a4) = uVar33 & 0xffff8000 | uVar33 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_brushstroke_vert_l");
  uVar33 = *(uint *)((long)param_1 + 0x584);
  if ((uVar33 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x584) = uVar33 & 0xffff8000 | uVar33 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_brushstroke_vert_r");
  uVar33 = *(uint *)((long)param_1 + 0x494);
  if ((uVar33 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x494) = uVar33 & 0xffff8000 | uVar33 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  FUN_00f0d92c(plVar10,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_TITLE",0);
  FUN_00f0d75c(plVar10,uVar37);
  FUN_00f0d92c(plVar18,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bb698c);
  FUN_00e705c8(&local_c0,&DAT_01b9f8c3);
  FUN_00f0d75c(plVar18,&local_c0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (void *)0x0;
  }
  pfVar32 = (float *)(param_1 + 0x826);
  if ((*pfVar32 != 2.0) || (*(float *)((long)param_1 + 0x4134) != 2.0)) {
    pfVar32[0] = 2.0;
    pfVar32[1] = 2.0;
    FUN_0091ada4(plVar18);
  }
  *(uint *)((long)param_1 + 0x416c) = *(uint *)((long)param_1 + 0x416c) & 0xfffffffb;
  FUN_00f0d92c(plVar19,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bb698c);
  uVar37 = FUN_00e6ce7c("MENU_SPOILS_OF_WAR_ASCENSION_BONUS_PIPS_LABEL",0);
  FUN_00f0d75c(plVar19,uVar37);
  *(uint *)((long)param_1 + 0x429c) = *(uint *)((long)param_1 + 0x429c) & 0xfffffffb;
  FUN_00f0e578(param_1 + 0x7f9,"circle_button_question");
  uVar33 = *(uint *)((long)param_1 + 0x3b74);
  if ((uVar33 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x3b74) = uVar33 & 0xffff8000 | uVar33 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar20);
  }
  FUN_00b09144(0xbf800000,plVar20);
  uVar34 = DAT_03210c64;
  local_c0 = thunk_FUN_00b82de4;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar34;
  FUN_009693a0(param_1 + 0x75f,&local_c0);
  uVar38 = FUN_0092ea9c();
  fVar36 = 0.8;
  if ((uVar38 & 1) == 0) {
    fVar36 = 0.6;
  }
  if ((*(float *)(param_1 + 0x767) != fVar36) || (*(float *)((long)param_1 + 0x3b3c) != fVar36)) {
    *(float *)(param_1 + 0x767) = fVar36;
    *(float *)((long)param_1 + 0x3b3c) = fVar36;
    FUN_0091ada4(plVar20);
  }
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_1ST_WIN_OF_DAY",0);
  FUN_00f0d75c(plVar6,uVar37);
  FUN_00f0d92c(param_1 + 0x11b,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0d92c(param_1 + 0x603,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0d92c(param_1 + 0x69b,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bb698c);
  FUN_00f0d92c(plVar7,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_VICTORY",0);
  FUN_00f0d75c(plVar7,uVar37);
  FUN_00f0d92c(param_1 + 0x167,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0d92c(param_1 + 0x675,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0d92c(param_1 + 0x70d,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bb698c);
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_HARD_FOUGHT",0);
  FUN_00f0d75c(plVar8,uVar37);
  FUN_00f0d92c(param_1 + 0x1b3,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0d92c(param_1 + 0x629,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0d92c(param_1 + 0x6c1,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bb698c);
  FUN_00f0d92c(plVar9,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_KARMA_AWARDED",0);
  FUN_00f0d75c(plVar9,uVar37);
  FUN_00f0d92c(param_1 + 0x1ff,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0d92c(param_1 + 0x64f,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0d92c(param_1 + 0x6e7,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bb698c);
  FUN_00f0d92c(plVar21,PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_TOTAL_GLORY",0);
  FUN_00f0d75c(plVar21,uVar37);
  FUN_00f0d92c(param_1 + 0x24b,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0e548(param_1 + 0x32d,PTR_s_build___MenuPartsCommon_tga_02be3530,"essence_icon_small");
  FUN_00f0d92c(param_1 + 0x307,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0e548(param_1 + 0x271,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  FUN_00f0e548(param_1 + 0x28f,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  FUN_00f0e548(param_1 + 0x2ad,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  FUN_00f0e548(param_1 + 0x2cb,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  FUN_00f0e548(plVar22,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  if ((*(float *)(param_1 + 0x2f2) != 1.2) || (*(float *)((long)param_1 + 0x1794) != 1.2)) {
    param_1[0x2f2] = 0x3f99999a3f99999a;
    FUN_0091ada4(plVar22);
  }
  FUN_00f0e548(plVar24,PTR_s_build___MenuPartsCommon_tga_02be3530,"account_level_shield_small");
  if ((*(float *)(param_1 + 0x366) != 0.5) || (*(float *)((long)param_1 + 0x1b34) != 0.5)) {
    param_1[0x366] = 0x3f0000003f000000;
    FUN_0091ada4(plVar24);
  }
  FUN_00f0d92c(plVar25,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 900) != 0.5) || (*(float *)((long)param_1 + 0x1c24) != 0.7)) {
    param_1[900] = 0x3f3333333f000000;
    FUN_0091ada4(plVar25);
  }
  FUN_00b0b848(0x3fef684c,param_1 + 0x3a0,"xp_bar_current","xp_bar_new");
  uVar37 = FUN_00d6eb50();
  uVar37 = FUN_00d6eb5c(uVar37,"*KindredXPBarEffects*");
  FUN_00afc274(plVar28,uVar37);
  pfVar32 = (float *)(param_1 + 0xb2e);
  if ((*pfVar32 != 1.4) || (*(float *)((long)param_1 + 0x5974) != 1.4)) {
    pfVar32[0] = 1.4;
    pfVar32[1] = 1.4;
    FUN_0091ada4(plVar28);
  }
  FUN_00f0e548(plVar26,PTR_s_build___MenuPartsCommon_tga_02be3530,"account_level_shield_large");
  if ((*(float *)(param_1 + 0x888) != 0.5) || (*(float *)((long)param_1 + 0x4444) != 0.5)) {
    param_1[0x888] = 0x3f0000003f000000;
    FUN_0091ada4(plVar26);
  }
  pfVar32 = (float *)(param_1 + 0x887);
  if ((*pfVar32 != 1.35) || (*(float *)((long)param_1 + 0x443c) != 1.35)) {
    pfVar32[0] = 1.35;
    pfVar32[1] = 1.35;
    FUN_0091ada4(plVar26);
  }
  FUN_00f0e6bc(0,plVar26);
  FUN_00f0d92c(plVar27,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0x8a6) != 0.5) || (*(float *)((long)param_1 + 0x4534) != 0.7)) {
    param_1[0x8a6] = 0x3f3333333f000000;
    FUN_0091ada4(plVar27);
  }
  FUN_00b0b848(0x3fef684c,param_1 + 0x8c2,"xp_bar_current","xp_bar_new");
  local_98 = FUN_00f048a4("UI::EVENT_PROGRESS_BAR_ROLLED_OVER");
  local_c0 = thunk_FUN_00b81220;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(param_1 + 0x8c3,&local_c0);
  FUN_00f0d92c(plVar29,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MENU_LEVEL_UP_REWARD_GAME_MODE_UNLOCKED_LABEL",0);
  FUN_00f0d75c(plVar29,uVar37);
  FUN_00f0db64(0x43ff8000,0,0x3f800000,plVar29);
  FUN_00f0d92c(param_1 + 0xb87,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00b1cb48(0x44480000,0x42580000,param_1 + 0x1164,0,1000,0,0,0,0);
  FUN_00f0d92c(plVar30,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MENU_SPOILS_TEAM_ELO_CHANGE",0);
  FUN_00f0d75c(plVar30,uVar37);
  FUN_00f0d92c(param_1 + 0x157a,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0d92c(plVar31,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MENU_SPOILS_TEAM_VICTORY_COUNT",0);
  FUN_00f0d75c(plVar31,uVar37);
  FUN_00f0d92c(param_1 + 0x15c6,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00b2a6b8(param_1 + 0xe76,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70);
  uVar37 = FUN_00d6eb50();
  uVar37 = FUN_00d6eb5c(uVar37,"*KindredMenuGuildBannerMesh*");
  FUN_00af9124(plVar11,uVar37);
  *(uint *)((long)param_1 + 0xbc74) = *(uint *)((long)param_1 + 0xbc74) & 0xfffffffb;
  FUN_00af9aa0(plVar11,"GUILD_BANNERS");
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  uVar33 = *(uint *)((long)param_1 + 0xc024);
  if ((uVar33 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xc024) = uVar33 & 0xffff8000 | uVar33 & 0x7f | 0x6600;
    FUN_0091ada4(plVar12);
  }
  FUN_00f13f08(0x43960000,0x43820000,plVar12);
  if ((*(float *)(param_1 + 0x17fe) != 0.5) || (*(float *)((long)param_1 + 0xbff4) != 0.5)) {
    param_1[0x17fe] = 0x3f0000003f000000;
    FUN_0091ada4(plVar12);
  }
  FUN_00f0d92c(plVar13,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  FUN_00f0da30(plVar13,1);
  pcVar40 = (code *)NEON_fmov(0x40800000,4);
  local_c0 = pcVar40;
  FUN_00f0da8c(plVar13,&local_c0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xff323232);
  FUN_00f0da80(plVar13,&local_c0);
  FUN_00f0d92c(plVar14,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0x1842) != 0.5) || (*(float *)((long)param_1 + 0xc214) != 0.7)) {
    param_1[0x1842] = 0x3f3333333f000000;
    FUN_0091ada4(plVar14);
  }
  FUN_00f0da30(plVar14,1);
  local_c0 = pcVar40;
  FUN_00f0da8c(plVar14,&local_c0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xff464d4f);
  FUN_00f0da80(plVar14,&local_c0);
  FUN_00b0b848(0x3fef684c,param_1 + 0x185e,"xp_bar_current","xp_bar_new");
  local_98 = FUN_00f048a4("UI::EVENT_PROGRESS_BAR_ROLLED_OVER");
  local_c0 = thunk_FUN_00b81778;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(param_1 + 0x185f,&local_c0);
  FUN_00f0d92c(plVar17,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MENU_SPOILS_GUILD_XP_AWARDED",0);
  FUN_00f0d75c(plVar17,uVar37);
  FUN_00f0db64(0x43ff8000,0,0x3f800000,plVar17);
  FUN_00f0d92c(param_1 + 0x1b33,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0d92c(plVar15,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar37 = FUN_00e6ce7c("MENU_SPOILS_GUILD_LEVELED_UP",0);
  FUN_00f0d75c(plVar15,uVar37);
  FUN_00f0db64(0x43ff8000,0,0x3f800000,plVar15);
  FUN_00f0d92c(plVar16,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0dad0(0x43ff8000,plVar16,1);
  FUN_00ac5da8(param_1 + 0x15fd,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70);
  uVar37 = FUN_00e6ce7c("GENERIC_BUTTON_CONTINUE",0);
  FUN_00ab703c(0x42800000,0x42c80000,0x43c80000,param_1 + 0xbad,0,uVar37,&DAT_01bee7fa,&DAT_03218ef8
               ,0);
  local_c0 = FUN_00b82fe4;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_b8 = param_1;
  local_98 = uVar34;
  FUN_009693a0(param_1 + 0xbae,&local_c0);
  uVar33 = *(uint *)((long)param_1 + 0x7a4);
  lVar39 = NEON_fmov(0x41c00000,4);
  param_1[3000] = lVar39;
  *(uint *)((long)param_1 + 0x7a4) = uVar33 & 0xfffffffb;
  if ((uVar33 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x7a4) = uVar33 & 0xffff807b;
    FUN_0091ada4(plVar5);
  }
  local_98 = FUN_00f048a4("UI::EVENT_MENU_SPOILS_REWATCH_SEASON_REWARDS");
  local_c0 = FUN_00b83018;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(param_1 + 1,&local_c0);
  if (*(long *)(lVar35 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

