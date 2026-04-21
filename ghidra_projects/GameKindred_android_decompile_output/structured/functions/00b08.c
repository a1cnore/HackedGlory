// functions/00b08 — 17 functions
#include "libGameKindred.h"




void thunk_FUN_00b08b18(long param_1)

{
  ulong uVar1;
  
  if (((*(char *)(param_1 + 0x1cee) != '\0') &&
      (uVar1 = FUN_00f023dc(param_1 + 0x90), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_00f023dc(param_1 + 0x168), (uVar1 & 1) == 0)) {
    FUN_00b07af8(param_1);
    return;
  }
  return;
}




void FUN_00b0828c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 local_88;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  uVar14 = FUN_00f00274();
  uVar15 = FUN_00f00280();
  FUN_00f13f08(uVar14,uVar15,param_1 + 0x90);
  fVar10 = 0.0;
  FUN_00f07a78(0,param_1 + 0x90,0);
  lVar1 = param_1 + 0x168;
  local_80 = (float)FUN_00f13e54(lVar1);
  local_7c = fVar10;
  FUN_00f13f18(param_1 + 0x2b0,&local_80);
  FUN_00f13f18(param_1 + 0x3a0,&local_80);
  pcVar4 = (char *)(param_1 + 0x1ced);
  lVar8 = param_1 + 0x880;
  if (*pcVar4 == '\0') {
    *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x904) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x904) | 4;
    if ((*(float *)(param_1 + 0xa70) != 1.1) || (*(float *)(param_1 + 0xa74) != 1.1)) {
      *(undefined8 *)(param_1 + 0xa70) = 0x3f8ccccd3f8ccccd;
      FUN_0091ada4(param_1 + 0xa28);
    }
    uVar17 = 0x43160000;
    FUN_00f13f08((float)(uint)(int)local_80,lVar8);
    uVar9 = FUN_00f13e54(lVar8);
    local_88 = CONCAT44(uVar17,uVar9);
    FUN_00f13f18(param_1 + 0x938,&local_88);
    FUN_00f13238(param_1 + 0x1818);
    FUN_00f13238(param_1 + 0x1ac8);
    FUN_00f13238(param_1 + 0x1970);
    FUN_00f13f08(local_80,0x40c00000,param_1 + 0x1728);
  }
  FUN_00b07c88(param_1);
  fVar10 = 0.0;
  if (*pcVar4 != '\0') {
    fVar10 = 150.0;
  }
  lVar5 = param_1 + 0x1c20;
  local_88 = CONCAT44((local_7c - (*(float *)(param_1 + 0x1cdc) + *(float *)(param_1 + 0x1cdc))) -
                      fVar10,local_80 -
                             (*(float *)(param_1 + 0x1cd8) + *(float *)(param_1 + 0x1cd8)));
  FUN_00f13f18(lVar5,&local_88);
  if (*pcVar4 == '\0') {
    FUN_00f07940(*(undefined4 *)(param_1 + 0x1cd8),*(undefined4 *)(param_1 + 0x1cdc),lVar5,0,lVar1,0
                );
    uVar14 = 1;
    uVar15 = 1;
    lVar8 = lVar1;
  }
  else {
    lVar2 = param_1 + 0xa28;
    if (*(char *)(param_1 + 0x1cec) == '\0') {
      uVar9 = 0x42580000;
      uVar14 = 7;
      uVar15 = 7;
    }
    else {
      uVar14 = 8;
      uVar15 = 8;
      uVar9 = 0;
    }
    FUN_00f07940(uVar9,0,lVar2,uVar14,lVar8,uVar15);
    FUN_00f07b18(0x41c00000,param_1 + 0x1818,3,lVar2,1);
    FUN_00f07b18(0,param_1 + 0x1818,5,lVar2,5);
    fVar10 = (float)FUN_00f13e54(lVar8);
    fVar11 = (float)FUN_00f0d4e0(lVar2);
    lVar3 = param_1 + 0xb58;
    fVar12 = (float)FUN_00f01c20(lVar3);
    lVar6 = param_1 + 0x1ac8;
    fVar13 = (float)FUN_00f13e54(lVar6);
    FUN_00f07b18((((fVar10 - fVar11) - fVar12) - fVar13) * 0.5,lVar6,3,lVar2,1);
    FUN_00f07b18(0,lVar6,5,lVar2,5);
    FUN_00f07b18(0xc1c00000,param_1 + 0x1970,1,lVar3,3);
    FUN_00f07b18(0,param_1 + 0x1970,5,lVar3,5);
    FUN_00f07940(0,0,param_1 + 0x1728,3,lVar8,3);
    FUN_00f07940(*(undefined4 *)(param_1 + 0x1cd8),*(undefined4 *)(param_1 + 0x1cdc),lVar5,0,lVar8,3
                );
    uVar14 = 5;
    uVar15 = 5;
  }
  uVar18 = 0;
  FUN_00f07940(0,0,param_1 + 0xb58,uVar14,lVar8,uVar15);
  lVar8 = param_1 + 0x490;
  uVar15 = FUN_00f10374(lVar8,0);
  uVar14 = uVar18;
  uVar16 = FUN_00f10374(lVar8,8);
  FUN_00f10644(uVar15,local_80 + -10.0,uVar16,uVar18,local_7c + -20.0,uVar14,lVar8);
  uVar16 = 0;
  FUN_00f07940(0,0,lVar8,8,lVar1,8);
  param_1 = param_1 + 0x730;
  uVar14 = FUN_00f10374(param_1,0);
  uVar15 = FUN_00f10374(param_1,2);
  FUN_00f10644(uVar14,local_80 + -10.0,uVar15,uVar16,local_7c + -20.0,0,param_1);
  FUN_00f07b18(0,param_1,4,lVar1,4);
  FUN_00f07b18(10.0 - (float)uVar16,param_1,0,lVar1,0);
  local_88 = 0x3f0000003f000000;
  FUN_00f0acd4(lVar1,&local_88);
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b08738(long *param_1)

{
  FUN_00f07940(0,0,param_1 + 0x2d,8,param_1 + 0x12,8);
                    /* WARNING: Could not recover jumptable at 0x00b08778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00b0877c(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x1cd8) = *param_2;
  return;
}




void FUN_00b08788(long param_1,uint param_2)

{
  *(char *)(param_1 + 0x1cee) = (char)(param_2 & 1);
  *(uint *)(param_1 + 0xbdc) =
       *(uint *)(param_1 + 0xbdc) & 0xfffffff8 | *(uint *)(param_1 + 0xbdc) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00b087a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x168;
  if ((*(uint *)(param_1 + 0x1ec) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x1b0) != 0.8) || (*(float *)(param_1 + 0x1b4) != 0.8)) {
    *(undefined8 *)(param_1 + 0x1b0) = 0x3f4ccccd3f4ccccd;
    FUN_0091ada4(lVar1);
  }
  FUN_00f07a78(0,0,lVar1,8);
  uVar2 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e99999a,FUN_0091aa80);
  uVar3 = FUN_00efee28(0x3f800000,0x3e99999a,FUN_0091aa80);
  FUN_00efcea4(param_2,uVar2,uVar3,0);
  return;
}




void FUN_00b0888c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = param_1 + 0x168;
  if ((*(uint *)(param_1 + 0x1ec) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x1b0) != 0.05) || (*(float *)(param_1 + 0x1b4) != 0.05)) {
    *(undefined8 *)(param_1 + 0x1b0) = 0x3d4ccccd3d4ccccd;
    FUN_0091ada4(lVar1);
  }
  lVar2 = FUN_00965ecc(*(undefined8 *)(param_1 + 0x188));
  fVar6 = ((float)*(undefined8 *)(param_1 + 0x1ce0) - (float)*(undefined8 *)(lVar2 + 8)) /
          (float)*(undefined8 *)(lVar2 + 0x10);
  fVar7 = ((float)((ulong)*(undefined8 *)(param_1 + 0x1ce0) >> 0x20) -
          (float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20)) /
          (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20);
  if ((*(float *)(param_1 + 0x1a8) != fVar6) || (*(float *)(param_1 + 0x1ac) != fVar7)) {
    *(ulong *)(param_1 + 0x1a8) = CONCAT44(fVar7,fVar6);
    FUN_0091ada4(lVar1);
  }
  uVar3 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e99999a,FUN_0091aa80);
  uVar4 = FUN_00f00438("root-layer");
  FUN_00f079b0(0,0,lVar1,8,uVar4,8);
  uVar4 = FUN_00efef08(FUN_0091aa80);
  uVar5 = FUN_00efee28(0x3f800000,0x3e99999a,FUN_0091aa80);
  FUN_00efcea4(param_2,uVar3,uVar4,uVar5,0);
  return;
}




void FUN_00b089dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00eff63c(0x3f4ccccd,0x3f4ccccd,0x3e99999a,FUN_0091aa80);
  uVar2 = FUN_00efee28(0,0x3e99999a,FUN_0091aa80);
  FUN_00efcea4(param_2,uVar1,uVar2,0);
  return;
}




void FUN_00b08a54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = FUN_00eff63c(0x3c23d70a,0x3c23d70a,0x3e99999a,FUN_0091aa80);
  fVar5 = *(float *)(param_1 + 0x1ce0);
  fVar6 = *(float *)(param_1 + 0x1ce4);
  lVar2 = FUN_00965ecc(*(undefined8 *)(param_1 + 0x188));
  uVar3 = FUN_00efef08((fVar5 - *(float *)(lVar2 + 8)) / *(float *)(lVar2 + 0x10),
                       (fVar6 - *(float *)(lVar2 + 0xc)) / *(float *)(lVar2 + 0x14),0x3e99999a,
                       FUN_0091aa80);
  uVar4 = FUN_00efee28(0,0x3e99999a,FUN_0091aa80);
  FUN_00efcea4(param_2,uVar1,uVar3,uVar4,0);
  return;
}




void FUN_00b08b18(long param_1)

{
  ulong uVar1;
  
  if (((*(char *)(param_1 + 0x1cee) != '\0') &&
      (uVar1 = FUN_00f023dc(param_1 + 0x90), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_00f023dc(param_1 + 0x168), (uVar1 & 1) == 0)) {
    FUN_00b07af8(param_1);
    return;
  }
  return;
}




void FUN_00b08b68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dbdd8;
  FUN_00f13d08(param_1 + 900);
  param_1[0x359] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x370);
  FUN_00f13d08(param_1 + 0x359);
  param_1[0x32e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x345);
  FUN_00f13d08(param_1 + 0x32e);
  param_1[0x303] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x31a);
  FUN_00f13d08(param_1 + 0x303);
  param_1[0x2e5] = &PTR_FUN_028266f0;
  param_1[0x2fc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2ff);
  FUN_00f13d08(param_1 + 0x2e5);
  FUN_00aad654(param_1 + 0x16b);
  FUN_00f0d3a4(param_1 + 0x145);
  param_1[0x127] = &PTR_FUN_028266f0;
  param_1[0x13e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x141);
  FUN_00f13d08(param_1 + 0x127);
  FUN_00f13d08(param_1 + 0x110);
  param_1[0xe6] = &PTR_FUN_02826f38;
  param_1[0xfd] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x100);
  FUN_00f13d08(param_1 + 0xe6);
  param_1[0xbc] = &PTR_FUN_02826f38;
  param_1[0xd3] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xd6);
  FUN_00f13d08(param_1 + 0xbc);
  param_1[0x92] = &PTR_FUN_02826f38;
  param_1[0xa9] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xac);
  FUN_00f13d08(param_1 + 0x92);
  param_1[0x74] = &PTR_FUN_028266f0;
  param_1[0x8b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8e);
  FUN_00f13d08(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_028266f0;
  param_1[0x6d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x70);
  FUN_00f13d08(param_1 + 0x56);
  param_1[0x2d] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x44);
  FUN_00f13d08(param_1 + 0x2d);
  FUN_00f13d08(param_1 + 0x12);
  FUN_00ed3680(param_1);
  return;
}




void FUN_00b08d50(void *param_1)

{
  FUN_00b08b68();
  operator_delete(param_1);
  return;
}




void FUN_00b08d74(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b08d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}




void FUN_00b08d80(void)

{
  return;
}




void FUN_00b08d84(long *param_1)

{
  FUN_00f11234();
  *param_1 = (long)&PTR_FUN_027dbf08;
  FUN_00f017e8(param_1 + 0x34);
  param_1[0x34] = (long)&PTR_FUN_027c1f80;
  FUN_00e70314(param_1 + 0x45);
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f000000;
  *(undefined1 *)((long)param_1 + 0x26c) = 0x11;
  FUN_00f14070(param_1,&DAT_03211038);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x34,1);
  FUN_00b08e40(param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return;
}




void FUN_00b08e40(long param_1)

{
  long lVar1;
  long lVar2;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = DAT_03210f58;
  lVar1 = param_1 + 8;
  local_68 = FUN_00b090dc;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  local_68 = FUN_00b090dc;
  local_40 = DAT_03210f84;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  local_40 = DAT_03210f5c;
  local_68 = FUN_00b0912c;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  local_68 = FUN_00b0912c;
  local_40 = DAT_03210f88;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  local_40 = DAT_03210fa4;
  local_68 = FUN_00b09134;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  local_40 = DAT_03210f60;
  local_68 = FUN_00b0913c;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  local_68 = FUN_00b0913c;
  local_40 = DAT_03210f8c;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b08fc8(long *param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1;
  if ((*(byte *)((long)param_1 + 0x26c) >> 3 & 1) != 0) {
    uVar2 = clock_gettime(1,&local_48);
    plVar3 = (long *)(ulong)uVar2;
    lVar5 = local_48.tv_nsec - param_1[0x46];
    lVar4 = local_48.tv_sec - param_1[0x45];
    if (lVar5 < 0) {
      lVar4 = lVar4 + -1;
      lVar5 = (local_48.tv_nsec + 1000000000) - param_1[0x46];
    }
    if (((double)*(float *)(param_1 + 0x4d) <= (double)(lVar5 + lVar4 * 1000000000) * 1e-09) &&
       ((*(byte *)((long)param_1 + 0x26c) >> 4 & 1) != 0)) {
      *(byte *)((long)param_1 + 0x26c) = *(byte *)((long)param_1 + 0x26c) & 0xf7;
      *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
      plVar3 = (long *)(**(code **)(*param_1 + 0x150))(param_1,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3);
}

