// functions/00c28 — 10 functions
#include "libGameKindred.h"




void FUN_00c2839c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_00c28dd4(param_1,uVar1);
  return;
}




uint FUN_00c283c8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_009e5b74();
  if ((uVar1 & 1) == 0) {
    FUN_00abc610(param_2,1);
    uVar2 = FUN_00e6ce7c("FORM_ERROR_CHINA_ID",0);
    FUN_00abce78(param_2,uVar2);
  }
  return uVar1 & 1;
}




void thunk_FUN_00c28e5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uStack_e0;
  void *pvStack_d8;
  void *pvStack_d0;
  ulong auStack_c8 [2];
  void *pvStack_b8;
  undefined8 uStack_b0;
  void *pvStack_a8;
  byte abStack_a0 [16];
  void *pvStack_90;
  byte abStack_88 [16];
  void *pvStack_78;
  byte abStack_70 [16];
  void *pvStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  auStack_c8[0] = 0;
  auStack_c8[1] = 0;
  pvStack_b8 = (void *)0x0;
  FUN_00e70510(&uStack_b0);
  memset(abStack_a0,0,0x48);
  if (*(int *)(param_1 + 0x12c00) == 0) {
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x4ae8) & 1) * 0x130 + 0x4958);
    FUN_00e70a24(uVar2,auStack_c8);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x10f8) & 1) * 0x130 + 0xf68);
    FUN_00910394(&uStack_b0,uVar2);
    uVar2 = FUN_00f08be8(param_1 + 0x2a80 + ((ulong)*(byte *)(param_1 + 0x2df0) & 1) * 0x130 + 0x1e0
                        );
    FUN_00e71810(&uStack_e0,uVar2,6,8);
    FUN_00e70a24(&uStack_e0,abStack_a0);
    if (pvStack_d8 != (void *)0x0) {
      operator_delete__(pvStack_d8);
      uStack_e0 = 0;
      pvStack_d8 = (void *)0x0;
    }
    uVar2 = FUN_00f08be8(param_1 + 0x2a80 + ((ulong)*(byte *)(param_1 + 0x2df0) & 1) * 0x130 + 0x1e0
                        );
    FUN_00e70a24(uVar2,abStack_88);
    FUN_008fa54c(&uStack_e0,&DAT_01b9512b);
    FUN_008fce60(abStack_70,&uStack_e0);
    if ((uStack_e0 & 1) != 0) {
      operator_delete(pvStack_d0);
    }
  }
  else {
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xa338) & 1) * 0x130 + 0xa1a8);
    FUN_00e70a24(uVar2,auStack_c8);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6948) & 1) * 0x130 + 0x67b8);
    FUN_00910394(&uStack_b0,uVar2);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xfcb8) & 1) * 0x130 + 0xfb28);
    thunk_FUN_00e7051c(&uStack_e0,uVar2);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xdfc0) & 1) * 0x130 + 0xde30);
    FUN_00e70c34(&uStack_e0,uVar2);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xc2c8) & 1) * 0x130 + 0xc138);
    FUN_00e70c34(&uStack_e0,uVar2);
    FUN_00e70a24(&uStack_e0,abStack_a0);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x8640) & 1) * 0x130 + 0x84b0);
    FUN_00e70a24(uVar2,abStack_88);
    FUN_008fce60(abStack_70,&DAT_0320ffa8);
    if (pvStack_d8 != (void *)0x0) {
      operator_delete__(pvStack_d8);
      uStack_e0 = 0;
      pvStack_d8 = (void *)0x0;
    }
  }
  (**(code **)**(undefined8 **)(param_1 + 0x148))(*(undefined8 **)(param_1 + 0x148),auStack_c8);
  if ((abStack_70[0] & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if ((abStack_88[0] & 1) != 0) {
    operator_delete(pvStack_78);
  }
  if ((abStack_a0[0] & 1) != 0) {
    operator_delete(pvStack_90);
  }
  if (pvStack_a8 != (void *)0x0) {
    operator_delete__(pvStack_a8);
    uStack_b0 = 0;
    pvStack_a8 = (void *)0x0;
  }
  if ((auStack_c8[0] & 1) != 0) {
    operator_delete(pvStack_b8);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c28420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f9240;
  FUN_009c7fa8(param_1 + 0x22c8);
  param_1[0x1f29] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x22c2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22c2]);
    param_1[0x22c2] = 0;
    param_1[0x22c1] = 0;
  }
  if ((void *)param_1[0x22c0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22c0]);
    param_1[0x22c0] = 0;
    param_1[0x22bf] = 0;
  }
  if ((void *)param_1[0x22be] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22be]);
    param_1[0x22be] = 0;
    param_1[0x22bd] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x2297);
  FUN_00f13d08(param_1 + 0x227c);
  FUN_00f13d08(param_1 + 0x2261);
  FUN_009c7fa8(param_1 + 0x1fa9);
  FUN_00abd150(param_1 + 0x1f29);
  param_1[0x1b8a] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x1f23] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f23]);
    param_1[0x1f23] = 0;
    param_1[0x1f22] = 0;
  }
  if ((void *)param_1[0x1f21] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f21]);
    param_1[0x1f21] = 0;
    param_1[0x1f20] = 0;
  }
  if ((void *)param_1[0x1f1f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f1f]);
    param_1[0x1f1f] = 0;
    param_1[0x1f1e] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1ef8);
  FUN_00f13d08(param_1 + 0x1edd);
  FUN_00f13d08(param_1 + 0x1ec2);
  FUN_009c7fa8(param_1 + 0x1c0a);
  FUN_00abd150(param_1 + 0x1b8a);
  param_1[0x17eb] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x1b84] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b84]);
    param_1[0x1b84] = 0;
    param_1[0x1b83] = 0;
  }
  if ((void *)param_1[0x1b82] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b82]);
    param_1[0x1b82] = 0;
    param_1[0x1b81] = 0;
  }
  if ((void *)param_1[0x1b80] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b80]);
    param_1[0x1b80] = 0;
    param_1[0x1b7f] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1b59);
  FUN_00f13d08(param_1 + 0x1b3e);
  FUN_00f13d08(param_1 + 0x1b23);
  FUN_009c7fa8(param_1 + 0x186b);
  FUN_00abd150(param_1 + 0x17eb);
  param_1[0x17be] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17d5);
  FUN_00f13d08(param_1 + 0x17be);
  FUN_00f0d3a4(param_1 + 0x1798);
  param_1[0x13f9] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x1792] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1792]);
    param_1[0x1792] = 0;
    param_1[0x1791] = 0;
  }
  if ((void *)param_1[0x1790] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1790]);
    param_1[0x1790] = 0;
    param_1[0x178f] = 0;
  }
  if ((void *)param_1[0x178e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x178e]);
    param_1[0x178e] = 0;
    param_1[0x178d] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1767);
  FUN_00f13d08(param_1 + 0x174c);
  FUN_00f13d08(param_1 + 0x1731);
  FUN_009c7fa8(param_1 + 0x1479);
  FUN_00abd150(param_1 + 0x13f9);
  param_1[0x105a] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x13f3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x13f3]);
    param_1[0x13f3] = 0;
    param_1[0x13f2] = 0;
  }
  if ((void *)param_1[0x13f1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x13f1]);
    param_1[0x13f1] = 0;
    param_1[0x13f0] = 0;
  }
  if ((void *)param_1[0x13ef] != (void *)0x0) {
    operator_delete__((void *)param_1[0x13ef]);
    param_1[0x13ef] = 0;
    param_1[0x13ee] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x13c8);
  FUN_00f13d08(param_1 + 0x13ad);
  FUN_00f13d08(param_1 + 0x1392);
  FUN_009c7fa8(param_1 + 0x10da);
  FUN_00abd150(param_1 + 0x105a);
  param_1[0xcbb] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x1054] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1054]);
    param_1[0x1054] = 0;
    param_1[0x1053] = 0;
  }
  if ((void *)param_1[0x1052] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1052]);
    param_1[0x1052] = 0;
    param_1[0x1051] = 0;
  }
  if ((void *)param_1[0x1050] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1050]);
    param_1[0x1050] = 0;
    param_1[0x104f] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1029);
  FUN_00f13d08(param_1 + 0x100e);
  FUN_00f13d08(param_1 + 0xff3);
  FUN_009c7fa8(param_1 + 0xd3b);
  FUN_00abd150(param_1 + 0xcbb);
  param_1[0xc8e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xca5);
  FUN_00f13d08(param_1 + 0xc8e);
  param_1[0x8ef] = &PTR_FUN_027d5508;
  if ((void *)param_1[0xc88] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc88]);
    param_1[0xc88] = 0;
    param_1[0xc87] = 0;
  }
  if ((void *)param_1[0xc86] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc86]);
    param_1[0xc86] = 0;
    param_1[0xc85] = 0;
  }
  if ((void *)param_1[0xc84] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc84]);
    param_1[0xc84] = 0;
    param_1[0xc83] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xc5d);
  FUN_00f13d08(param_1 + 0xc42);
  FUN_00f13d08(param_1 + 0xc27);
  FUN_009c7fa8(param_1 + 0x96f);
  FUN_00abd150(param_1 + 0x8ef);
  param_1[0x550] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x8e9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8e9]);
    param_1[0x8e9] = 0;
    param_1[0x8e8] = 0;
  }
  if ((void *)param_1[0x8e7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8e7]);
    param_1[0x8e7] = 0;
    param_1[0x8e6] = 0;
  }
  if ((void *)param_1[0x8e5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8e5]);
    param_1[0x8e5] = 0;
    param_1[0x8e4] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x8be);
  FUN_00f13d08(param_1 + 0x8a3);
  FUN_00f13d08(param_1 + 0x888);
  FUN_009c7fa8(param_1 + 0x5d0);
  FUN_00abd150(param_1 + 0x550);
  param_1[0x1b1] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x54a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x54a]);
    param_1[0x54a] = 0;
    param_1[0x549] = 0;
  }
  if ((void *)param_1[0x548] != (void *)0x0) {
    operator_delete__((void *)param_1[0x548]);
    param_1[0x548] = 0;
    param_1[0x547] = 0;
  }
  if ((void *)param_1[0x546] != (void *)0x0) {
    operator_delete__((void *)param_1[0x546]);
    param_1[0x546] = 0;
    param_1[0x545] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x51f);
  FUN_00f13d08(param_1 + 0x504);
  FUN_00f13d08(param_1 + 0x4e9);
  FUN_009c7fa8(param_1 + 0x231);
  FUN_00abd150(param_1 + 0x1b1);
  param_1[0x184] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x19b);
  FUN_00f13d08(param_1 + 0x184);
  FUN_00b1f8e8(param_1 + 0x2a);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c28a5c(void *param_1)

{
  FUN_00c28420();
  operator_delete(param_1);
  return;
}




void FUN_00c28a80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c("MENU_PROFILE_GOVERNMENT_ID_POPUP_TITLE",0);
  FUN_00910394(param_1 + 2,uVar1);
  *(undefined4 *)((long)param_1 + 100) = 0;
  *param_1 = 0x44b5400044bb8000;
  FUN_00aff91c(param_1,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_02be9c00);
  *(undefined4 *)((long)param_1 + 0x5c) = DAT_02be9c00;
  *(undefined4 *)(param_1 + 0xc) = 0xffffd18a;
  return;
}




void FUN_00c28afc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_00abc380(0x44750000,0xbf800000,param_1 + 0xd88);
  FUN_00abc380(0x44750000,0xbf800000,param_1 + 0x2a80);
  FUN_00abc380(0x44750000,0xbf800000,param_1 + 0x4778);
  FUN_00abc380(0x44750000,0xbf800000,param_1 + 0x65d8);
  FUN_00abc380(0x44750000,0xbf800000,param_1 + 0x82d0);
  FUN_00abc380(0x44750000,0xbf800000,param_1 + 0x9fc8);
  lVar1 = param_1 + 0x150;
  FUN_00f07940(0,0x42a00000,lVar1,4,param_1,4);
  lVar3 = param_1 + 0xc20;
  FUN_00f0c4fc(0x42a00000,lVar3,1,4);
  FUN_00f1340c(lVar3,0);
  FUN_00f0c584(lVar3);
  FUN_00f07b18(0x42c80000,lVar3,0,lVar1,2);
  FUN_00f07b18(0,lVar3,4,lVar1,4);
  *(uint *)(param_1 + 0xca4) = *(uint *)(param_1 + 0xca4) | 0x10;
  FUN_00abc380(0x438a0000,0xbf800000,param_1 + 0xbf58);
  FUN_00abc380(0x438a0000,0xbf800000,param_1 + 0xdc50);
  FUN_00abc380(0x43b80000,0xbf800000,param_1 + 0xf948);
  if ((*(float *)(param_1 + 0xbd10) != 0.0) || (*(float *)(param_1 + 0xbd14) != 1.0)) {
    *(undefined8 *)(param_1 + 0xbd10) = 0x3f80000000000000;
    FUN_0091ada4(param_1 + 0xbcc0);
  }
  lVar2 = param_1 + 0xbdf0;
  FUN_00f0c4fc(0x41f00000,lVar2,3,0);
  FUN_00f1340c(lVar2,0);
  FUN_00f0c584(lVar2);
  lVar2 = param_1 + 0x6470;
  FUN_00f0c4fc(0x42a00000,lVar2,1,3);
  FUN_00f1340c(lVar2,0);
  FUN_00f0c584(lVar2);
  FUN_00f07b18(0x42c80000,lVar2,0,lVar1,2);
  FUN_00f07b18(0,lVar2,4,lVar1,4);
  *(uint *)(param_1 + 0x64f4) = *(uint *)(param_1 + 0x64f4) | 0x10;
  lVar1 = param_1 + 0x11640;
  if ((*(byte *)(param_1 + 0xca4) >> 2 & 1) == 0) {
    FUN_00f07b18(0x42a00000,lVar1,0,lVar2,2);
    lVar3 = lVar2;
  }
  else {
    FUN_00f07b18(0x42a00000,lVar1,0,lVar3,2);
  }
  FUN_00f07b18(0,lVar1,4,lVar3,4);
  return;
}




void FUN_00c28dd4(long *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    *(uint *)((long)param_1 + 0xca4) = *(uint *)((long)param_1 + 0xca4) & 0xfffffffb;
    uVar1 = *(uint *)((long)param_1 + 0x64f4) | 4;
  }
  else {
    if (param_2 != 0) goto LAB_00c28e18;
    *(uint *)((long)param_1 + 0xca4) = *(uint *)((long)param_1 + 0xca4) | 4;
    uVar1 = *(uint *)((long)param_1 + 0x64f4) & 0xfffffffb;
  }
  *(uint *)((long)param_1 + 0x64f4) = uVar1;
LAB_00c28e18:
  *(int *)(param_1 + 0x2580) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c28e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00c28e30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00c28dd4(param_1,uVar1);
  return;
}




void FUN_00c28e5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong local_e0;
  void *local_d8;
  void *local_d0;
  ulong local_c8 [2];
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_b8 = (void *)0x0;
  FUN_00e70510(&local_b0);
  memset(local_a0,0,0x48);
  if (*(int *)(param_1 + 0x12c00) == 0) {
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x4ae8) & 1) * 0x130 + 0x4958);
    FUN_00e70a24(uVar2,local_c8);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x10f8) & 1) * 0x130 + 0xf68);
    FUN_00910394(&local_b0,uVar2);
    uVar2 = FUN_00f08be8(param_1 + 0x2a80 + ((ulong)*(byte *)(param_1 + 0x2df0) & 1) * 0x130 + 0x1e0
                        );
    FUN_00e71810(&local_e0,uVar2,6,8);
    FUN_00e70a24(&local_e0,local_a0);
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
      local_e0 = 0;
      local_d8 = (void *)0x0;
    }
    uVar2 = FUN_00f08be8(param_1 + 0x2a80 + ((ulong)*(byte *)(param_1 + 0x2df0) & 1) * 0x130 + 0x1e0
                        );
    FUN_00e70a24(uVar2,local_88);
    FUN_008fa54c(&local_e0,&DAT_01b9512b);
    FUN_008fce60(local_70,&local_e0);
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
  }
  else {
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xa338) & 1) * 0x130 + 0xa1a8);
    FUN_00e70a24(uVar2,local_c8);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6948) & 1) * 0x130 + 0x67b8);
    FUN_00910394(&local_b0,uVar2);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xfcb8) & 1) * 0x130 + 0xfb28);
    thunk_FUN_00e7051c(&local_e0,uVar2);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xdfc0) & 1) * 0x130 + 0xde30);
    FUN_00e70c34(&local_e0,uVar2);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xc2c8) & 1) * 0x130 + 0xc138);
    FUN_00e70c34(&local_e0,uVar2);
    FUN_00e70a24(&local_e0,local_a0);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x8640) & 1) * 0x130 + 0x84b0);
    FUN_00e70a24(uVar2,local_88);
    FUN_008fce60(local_70,&DAT_0320ffa8);
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
      local_e0 = 0;
      local_d8 = (void *)0x0;
    }
  }
  (**(code **)**(undefined8 **)(param_1 + 0x148))(*(undefined8 **)(param_1 + 0x148),local_c8);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if ((local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

