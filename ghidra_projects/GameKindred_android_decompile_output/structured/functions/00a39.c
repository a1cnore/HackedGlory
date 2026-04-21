// functions/00a39 — 7 functions
#include "libGameKindred.h"




long FUN_00a390b0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  param_1 = param_1 + 0x388;
  do {
    iVar1 = FUN_00a378f8(param_1);
    if (iVar1 == param_2) {
      return param_1;
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x588;
  } while (uVar2 < 8);
  return 0;
}




void FUN_00a39104(long param_1)

{
  long lVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = 0;
  lVar4 = param_1 + 0x338;
  do {
    lVar1 = param_1 + lVar3 * 2;
    if (*(short *)(lVar1 + 0x338) == -1) {
      lVar5 = 0;
      do {
        sVar2 = *(short *)(lVar4 + lVar5 * 2);
        if (sVar2 != -1) {
          *(short *)(lVar1 + 0x338) = sVar2;
          *(undefined2 *)(lVar4 + lVar5 * 2) = 0xffff;
          break;
        }
        lVar5 = lVar5 + 1;
      } while ((uint)((int)lVar3 + (int)lVar5) < 8);
    }
    lVar3 = lVar3 + 1;
    lVar4 = lVar4 + 2;
    if (lVar3 == 8) {
      return;
    }
  } while( true );
}




float FUN_00a39164(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 + -1.0;
  return (fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 1.0) * param_3 + param_2;
}




void FUN_00a39194(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 0x548;
  lVar2 = -0x2c40;
  *param_1 = &PTR_FUN_027c9878;
  do {
    FUN_00a37ad0(puVar1);
    lVar2 = lVar2 + 0x588;
    puVar1 = puVar1 + -0xb1;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x50);
  FUN_00f13d08(param_1 + 0x37);
  FUN_00b27cec(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a39204(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_027c9878;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x2a40) = &PTR_FUN_027c9730;
    FUN_00f0d3a4((long)param_1 + lVar1 + 0x2e78);
    *(undefined ***)((long)param_1 + lVar1 + 0x2d88) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x2e40) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x2e58);
    FUN_00f13d08((long)param_1 + lVar1 + 0x2d88);
    *(undefined ***)((long)param_1 + lVar1 + 0x2c88) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x2d40) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x2d58);
    FUN_00f13d08((long)param_1 + lVar1 + 0x2c88);
    *(undefined ***)((long)param_1 + lVar1 + 0x2b80) = &PTR_FUN_02827290;
    *(undefined ***)((long)param_1 + lVar1 + 0x2c38) = &PTR_FUN_028273f8;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x2c70);
    *(undefined ***)((long)param_1 + lVar1 + 0x2b80) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x2c38) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x2c50);
    FUN_00f13d08((long)param_1 + lVar1 + 0x2b80);
    FUN_00f01868((long)param_1 + lVar1 + 11000);
    FUN_00f13d08((long)param_1 + lVar1 + 0x2a40);
    lVar1 = lVar1 + -0x588;
  } while (lVar1 != -0x2c40);
  FUN_00f13d08(param_1 + 0x50);
  FUN_00f13d08(param_1 + 0x37);
  FUN_00b27cec(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a393b8(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027c99c0;
  FUN_00f13ca4(param_1 + 0x17);
  FUN_00f1306c(param_1 + 0x2e);
  FUN_00a2d0fc(param_1 + 0x59);
  FUN_00bbc8ac(param_1 + 0x1108);
  FUN_00a6e0dc(param_1 + 0x110f);
  FUN_00f13ca4(param_1 + 0x1875);
  FUN_00a37c70(param_1 + 0x188c);
  FUN_00a49c7c(param_1 + 0x1e86);
  FUN_00a72708(param_1 + 0x1eef,1);
  FUN_00a72708(param_1 + 0x1f10,1);
  FUN_00f0e4a8(param_1 + 0x1f31);
  FUN_00a291cc(param_1 + 0x1f4f);
  FUN_00f0e4a8(param_1 + 0x1f6f);
  FUN_00a291cc(param_1 + 0x1f8d);
  FUN_00a48de4(param_1 + 0x1fad);
  FUN_00a4b04c(param_1 + 0x2149);
  FUN_00a589d8(param_1 + 0x26c5);
  FUN_00a496e0(param_1 + 0x27c0);
  FUN_00a35280(param_1 + 0x27f8);
  FUN_00bbd1a0(param_1 + 0x2ac2);
  FUN_00a31368(param_1 + 0x2ac8);
  FUN_00a71b80(param_1 + 0x2afb);
  FUN_00a6654c(param_1 + 0x2b88);
  FUN_00b89cd8(param_1 + 0x3334);
  FUN_00a437dc(param_1 + 0x334d);
  FUN_00a47988(param_1 + 0x3a39);
  FUN_00b89cd8(param_1 + 0x3e0c);
  FUN_00f0fe84(param_1 + 0x3e25);
  FUN_00f0fe84(param_1 + 0x3e4f);
  FUN_00f0e4a8(param_1 + 0x3e79);
  FUN_00f0e4a8(param_1 + 0x3e97);
  FUN_00b89cd8(param_1 + 0x3eb5);
  FUN_00b89cd8(param_1 + 0x3ece);
  FUN_00b89cd8(param_1 + 0x3ee7);
  FUN_00f0fe84(param_1 + 0x3f00);
  FUN_00f0fe84(param_1 + 0x3f2a);
  FUN_00bbf4a8(param_1 + 0x3f54);
  FUN_00b27c04(param_1 + 0x3f56,1);
  FUN_00ab9298(param_1 + 0x3f73,1);
  FUN_00b89cd8(param_1 + 0x4351);
  FUN_00bbf19c(param_1 + 0x436a);
  FUN_00bbf19c(param_1 + 0x436e);
  FUN_00b89cd8(param_1 + 0x4372);
  FUN_00bbf19c(param_1 + 0x438b);
  FUN_00c814ec(param_1 + 0x438f);
  FUN_00c8175c(param_1 + 0x43e2);
  FUN_00c8175c(param_1 + 0x4437);
  FUN_00f13ca4(param_1 + 0x448c);
  FUN_00f13ca4(param_1 + 0x44a3);
  FUN_00f13ca4(param_1 + 0x44ba);
  FUN_00b89cd8(param_1 + 0x44d1);
  FUN_00c86238(param_1 + 0x44ea);
  FUN_00c86780(param_1 + 0x451c);
  *(undefined1 *)(param_1 + 0x454d) = 0x80;
  FUN_00a39818(param_1);
  uVar2 = FUN_009f1f70(5);
  FUN_00a72870(param_1 + 0x1eef,uVar2 & 1);
  uVar3 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar3,param_1,0xe5d47eef,FUN_00a3a624,0);
  uVar3 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar3,param_1,0xf1ccade8,FUN_00a3a650,0);
  uVar3 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar3,param_1,0x461d39a,FUN_00a3a67c,0);
  uVar3 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar3,param_1,0xc8e15bb6,FUN_00a3a6c8,0);
  uVar3 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar3,param_1,0xf6119432,FUN_00a3a6f4,0);
  uVar3 = FUN_009f1f64();
  local_58 = 0;
  pcStack_40 = thunk_FUN_00a3f654;
  puStack_50 = param_1;
  local_48 = param_1;
  FUN_009104f8(uVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a39818(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar11 = tpidr_el0;
  local_80 = *(long *)(lVar11 + 0x28);
  plVar18 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  uVar14 = FUN_00bbf3c8(param_1 + 0x436a);
  FUN_00f023ec(plVar18,uVar14,1);
  uVar14 = FUN_00bbf3c8(param_1 + 0x436e);
  FUN_00f023ec(plVar18,uVar14,1);
  FUN_00f023ec(plVar18,param_1 + 0x448c,1);
  FUN_00f023ec(plVar18,param_1 + 0x44a3,1);
  FUN_00f023ec(plVar18,param_1 + 0x44ba,1);
  uVar14 = FUN_00bbf3c8(param_1 + 0x438b);
  FUN_00f023ec(plVar18,uVar14,1);
  uVar14 = FUN_00bbf3e0(param_1 + 0x436a);
  (**(code **)(*param_1 + 0x78))(param_1,uVar14,1);
  uVar14 = FUN_00bbf3e0(param_1 + 0x436e);
  (**(code **)(*param_1 + 0x78))(param_1,uVar14,1);
  uVar14 = FUN_00bbf3e0(param_1 + 0x438b);
  (**(code **)(*param_1 + 0x78))(param_1,uVar14,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1875,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ac8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1e86,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x334d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3a39,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e,1);
  FUN_00f133a4(param_1 + 0x2e,param_1 + 0x59,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1109],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x188c,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2b88,1);
  plVar18 = param_1 + 0x3e0c;
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  plVar1 = param_1 + 0x3e25;
  FUN_00f023ec(plVar18,plVar1,1);
  plVar2 = param_1 + 0x3e4f;
  FUN_00f023ec(plVar18,plVar2,1);
  FUN_00f023ec(plVar18,param_1 + 0x2149,1);
  plVar18 = param_1 + 0x3eb5;
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  plVar3 = param_1 + 0x3e79;
  FUN_00f023ec(plVar18,plVar3,1);
  plVar4 = param_1 + 0x3e97;
  FUN_00f023ec(plVar18,plVar4,1);
  FUN_00f023ec(plVar18,param_1 + 0x26c5,1);
  plVar18 = param_1 + 0x3ece;
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  plVar5 = param_1 + 0x1eef;
  FUN_00f023ec(plVar18,plVar5,1);
  plVar6 = param_1 + 0x1f10;
  FUN_00f023ec(plVar18,plVar6,1);
  plVar7 = param_1 + 0x1f4f;
  FUN_00f023ec(plVar18,plVar7,1);
  FUN_00f023ec(plVar7,param_1 + 0x1f6f,1);
  FUN_00f023ec(plVar18,param_1 + 0x1f8d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2afb,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3ee7,1);
  FUN_00f023ec(param_1 + 0x3ee7,param_1 + 0x110f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4351,1);
  FUN_00f023ec(param_1 + 0x4351,param_1[0x436b],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x436f],1);
  plVar18 = param_1 + 0x44d1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  FUN_00f023ec(plVar18,param_1 + 0x44ea,1);
  FUN_00f023ec(plVar18,param_1 + 0x451c,1);
  plVar18 = param_1 + 0x4372;
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  FUN_00f023ec(plVar18,param_1 + 0x438f,1);
  FUN_00f023ec(param_1 + 0x438f,param_1[0x438c],1);
  FUN_00f023ec(plVar18,param_1 + 0x43e2,1);
  FUN_00f023ec(plVar18,param_1 + 0x4437,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x3f55],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3f56,1);
  iVar12 = 0;
  do {
    uVar14 = FUN_00c86764(param_1 + 0x44ea,iVar12);
    (**(code **)(*param_1 + 0x78))(param_1,uVar14,1);
    iVar12 = iVar12 + 1;
  } while (iVar12 != 3);
  iVar12 = 0;
  do {
    uVar14 = FUN_00a45a44(param_1 + 0x334d,iVar12);
    (**(code **)(*param_1 + 0x78))(param_1,uVar14,1);
    iVar12 = iVar12 + 1;
  } while (iVar12 != 6);
  FUN_00ceace8();
  uVar15 = FUN_00ceb0bc();
  if ((uVar15 & 1) == 0) {
    lVar16 = *param_1;
    lVar17 = 0xfd68;
  }
  else {
    lVar16 = *param_1;
    lVar17 = 0x13fc0;
  }
  (**(code **)(lVar16 + 0x78))(param_1,(long)param_1 + lVar17,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x27c0,1);
  iVar12 = FUN_0092ec00();
  if (iVar12 == 0xe) {
    FUN_00f0e548(param_1 + 0x1f31,PTR_s_build___HUDPartsFor35_atlas_02be3450,"18_vietnam");
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1f31,1);
  }
  plVar18 = param_1 + 0x18;
  uVar8 = DAT_03210f58;
  local_b0 = FUN_00a3b318;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar8;
  FUN_009693a0(plVar18,&local_b0);
  local_b0 = FUN_00a3b318;
  uVar9 = DAT_03210f84;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar9;
  FUN_009693a0(plVar18,&local_b0);
  local_88 = DAT_03210f5c;
  local_b0 = FUN_00a3b320;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar18,&local_b0);
  local_b0 = FUN_00a3b320;
  local_88 = DAT_03210f88;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar18,&local_b0);
  local_88 = DAT_03210f60;
  local_b0 = FUN_00a3b328;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar18,&local_b0);
  local_b0 = FUN_00a3b328;
  local_88 = DAT_03210f8c;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar18,&local_b0);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x2ac3],1);
  FUN_00bbd5b4(param_1 + 0x2ac2);
  plVar19 = param_1 + 1;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3f73,1);
  FUN_00ceace8();
  uVar13 = FUN_00ceae88();
  *(uint *)((long)param_1 + 0x1fc1c) =
       *(uint *)((long)param_1 + 0x1fc1c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1fc1c) & 3 | (uVar13 & 1) << 2;
  uVar14 = FUN_00e6ce7c("HUD_TUTORIAL_SKIP_LEVEL",0);
  FUN_00ab703c(0x42800000,0x43200000,0x44960000,param_1 + 0x3f73,0,uVar14,&DAT_01bee7fa,
               &DAT_03218ef8,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  local_88 = DAT_03210c90;
  local_b0 = FUN_00a3b330;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x3f74,&local_b0);
  FUN_00f0ff6c(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f10428(plVar1,"9slice_small_fill_corner",0,0,0,"white_background",0,0,0,"white_background",0
               ,0,0,"white_background");
  FUN_00f0ff6c(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f10428(plVar2,"9slice_small_line_corner",0,0,0,"9slice_small_line_edge_top",0,0,0,
               "9slice_small_line_edge_top",0,0,1,0);
  FUN_00f105ec(plVar1,&DAT_01bee7f6,2);
  FUN_00a4c32c(0,param_1 + 0x2149,1,4,1);
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"9slice_small_fill_corner");
  *(byte *)(param_1 + 0x3eb2) = *(byte *)(param_1 + 0x3eb2) | 2;
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  plVar18 = param_1 + 0x3f00;
  FUN_00f0ff6c(plVar18,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f10428(plVar18,"9slice_small_fill_corner",0,0,0,"white_background",0,0,0,"white_background",
               0,0,0,"white_background");
  FUN_00f0ff6c(param_1 + 0x3f2a,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f10428(param_1 + 0x3f2a,"9slice_small_line_corner",0,0,0,"9slice_small_line_edge_top",0,0,0,
               "9slice_small_line_edge_top",0,0,1,0);
  FUN_00f105ec(plVar18,&DAT_01bee7f6,2);
  *(uint *)((long)param_1 + 0xc42c) = *(uint *)((long)param_1 + 0xc42c) | 0x10;
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_zoom");
  uVar10 = DAT_03210c64;
  local_b0 = thunk_FUN_00a3f7bc;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar10;
  FUN_009693a0(param_1 + 0x1ef0,&local_b0);
  *(uint *)((long)param_1 + 0xf7fc) = *(uint *)((long)param_1 + 0xf7fc) | 0x10;
  (**(code **)(*plVar5 + 0x40))(0x41000000,plVar5);
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_follow_cam_on");
  local_b0 = FUN_00a3b354;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar10;
  FUN_009693a0(param_1 + 0x1f11,&local_b0);
  *(uint *)((long)param_1 + 0xf904) = *(uint *)((long)param_1 + 0xf904) | 0x10;
  (**(code **)(*plVar6 + 0x40))(0x41000000,plVar6);
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_icon_settings");
  local_b0 = FUN_00a3b3b8;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar8;
  FUN_009693a0(param_1 + 0x1f50,&local_b0);
  local_b0 = FUN_00a3b3b8;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar9;
  FUN_009693a0(param_1 + 0x1f50,&local_b0);
  *(uint *)((long)param_1 + 0xfafc) = *(uint *)((long)param_1 + 0xfafc) | 0x10;
  FUN_00f0e548(param_1 + 0x1f6f,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  *(uint *)((long)param_1 + 0xfbfc) = *(uint *)((long)param_1 + 0xfbfc) & 0xfffffffb;
  FUN_00f0e548(param_1 + 0x1f8d,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_icon_chat");
  local_b0 = FUN_00a3b420;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar8;
  FUN_009693a0(param_1 + 0x1f8e,&local_b0);
  local_b0 = FUN_00a3b420;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar9;
  FUN_009693a0(param_1 + 0x1f8e,&local_b0);
  *(uint *)((long)param_1 + 0xfcec) = *(uint *)((long)param_1 + 0xfcec) | 0x10;
  uVar13 = FUN_00a3b488();
  *(uint *)((long)param_1 + 0xfcec) =
       *(uint *)((long)param_1 + 0xfcec) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xfcec) & 3 | (uVar13 & 1) << 2;
  local_88 = FUN_00f048a4("EVENT_REQUEST_SHOW_ABILITY_TOOLTIP");
  local_b0 = FUN_00a3b4c4;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar19,&local_b0);
  local_88 = FUN_00f048a4("EVENT_REQUEST_HIDE_ABILITY_TOOLTIP");
  local_b0 = thunk_FUN_00a3fbb0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar19,&local_b0);
  local_88 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP");
  local_b0 = FUN_00a3b4d0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar19,&local_b0);
  local_88 = FUN_00f048a4("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP");
  local_b0 = FUN_00a3b4d8;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar19,&local_b0);
  FUN_00a3b4f8(param_1);
  if (*(long *)(lVar11 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

