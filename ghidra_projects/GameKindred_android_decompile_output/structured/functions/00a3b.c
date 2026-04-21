// functions/00a3b — 22 functions
#include "libGameKindred.h"




void FUN_00a3b044(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ca188;
  FUN_00a4c940(param_1 + 0x151);
  FUN_00a4c940(param_1 + 0x107);
  if ((void *)param_1[0x106] != (void *)0x0) {
    operator_delete__((void *)param_1[0x106]);
    param_1[0x106] = 0;
    param_1[0x105] = 0;
  }
  if ((void *)param_1[0x102] != (void *)0x0) {
    operator_delete__((void *)param_1[0x102]);
    param_1[0x102] = 0;
    param_1[0x101] = 0;
  }
  if ((void *)param_1[0x100] != (void *)0x0) {
    operator_delete__((void *)param_1[0x100]);
    param_1[0x100] = 0;
    param_1[0xff] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xd9);
  FUN_00f0d3a4(param_1 + 0xb3);
  FUN_00f01868(param_1 + 0xa2);
  FUN_00f13d08(param_1 + 0x8b);
  FUN_00f0d3a4(param_1 + 0x65);
  param_1[0x47] = &PTR_FUN_028266f0;
  param_1[0x5e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x61);
  FUN_00f13d08(param_1 + 0x47);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a3b130(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cce50;
  param_1[0x70c] = &PTR_FUN_027c9b08;
  FUN_00f0d3a4(param_1 + 0x73b);
  param_1[0x71d] = &PTR_FUN_028266f0;
  param_1[0x734] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x737);
  FUN_00f13d08(param_1 + 0x71d);
  FUN_00f01868(param_1 + 0x70c);
  param_1[0x6b6] = &PTR_FUN_027c9b08;
  FUN_00f0d3a4(param_1 + 0x6e5);
  param_1[0x6c7] = &PTR_FUN_028266f0;
  param_1[0x6de] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6e1);
  FUN_00f13d08(param_1 + 0x6c7);
  FUN_00f01868(param_1 + 0x6b6);
  param_1[0x660] = &PTR_FUN_027c9b08;
  FUN_00f0d3a4(param_1 + 0x68f);
  param_1[0x671] = &PTR_FUN_028266f0;
  param_1[0x688] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68b);
  FUN_00f13d08(param_1 + 0x671);
  FUN_00f01868(param_1 + 0x660);
  param_1[0x60a] = &PTR_FUN_027c9b08;
  FUN_00f0d3a4(param_1 + 0x639);
  param_1[0x61b] = &PTR_FUN_028266f0;
  param_1[0x632] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x635);
  FUN_00f13d08(param_1 + 0x61b);
  FUN_00f01868(param_1 + 0x60a);
  FUN_00f01868(param_1 + 0x5f9);
  FUN_00f01868(param_1 + 0x5e8);
  FUN_00a51214(param_1 + 0xe9);
  FUN_00a29250(param_1 + 0xc9);
  FUN_00a29250(param_1 + 0xa9);
  FUN_00a29250(param_1 + 0x89);
  FUN_00a29250(param_1 + 0x69);
  FUN_00a29250(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a3b2f4(void *param_1)

{
  FUN_00a3a720();
  operator_delete(param_1);
  return;
}




void FUN_00a3b318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a3f960(param_1,param_4);
  return;
}




void FUN_00a3b320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a3f9dc(param_1,param_4);
  return;
}




void FUN_00a3b328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a3fa58(param_1,param_4);
  return;
}




void FUN_00a3b330(void)

{
  FUN_0091ab88(1,0);
  FUN_009bbfb0();
  FUN_009bd6fc();
  return;
}




void FUN_00a3b354(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x16;
  local_38 = &PTR_FUN_027c8548;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3b3b8(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03132398,0);
  FUN_00f04760(param_1,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3b420(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313239c,0);
  FUN_00f04760(param_1,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00a3b488(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_0093dbe8();
  bVar1 = false;
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00a3bb40(0);
    bVar1 = false;
    if ((uVar3 & 1) != 0) {
      iVar2 = FUN_0092f28c(0);
      bVar1 = iVar2 == 0;
    }
  }
  return bVar1;
}




void FUN_00a3b4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a3fad4(param_1,param_4);
  return;
}




void FUN_00a3b4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a3fc28(param_1,param_4);
  return;
}




void FUN_00a3b4d8(long param_1)

{
  FUN_00b89d24(0x3e800000,param_1 + 0x1d1c8,0,4,1);
  return;
}




void FUN_00a3b4f8(long param_1)

{
  byte *pbVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  
  iVar6 = FUN_00a1bb34();
  pbVar1 = (byte *)(param_1 + 0x22a68);
  lVar11 = param_1 + 0x21b50;
  *pbVar1 = *pbVar1 & 0xef | (iVar6 == 2) << 4;
  FUN_00bbf3ac(lVar11);
  lVar2 = param_1 + 0x21b70;
  FUN_00bbf3ac(lVar2,*pbVar1 >> 4 & 1);
  FUN_00bbf3ac(param_1 + 0x21c58,*pbVar1 >> 4 & 1);
  if ((*pbVar1 >> 4 & 1) == 0) {
    uVar8 = 0;
    bVar5 = true;
  }
  else {
    iVar6 = FUN_009f1f94(0x21);
    uVar8 = (uint)(iVar6 == 0) << 2;
    bVar5 = (*pbVar1 & 0x10) == 0;
  }
  *(uint *)(param_1 + 0x21f94) = *(uint *)(param_1 + 0x21f94) & 0xfffffffb | uVar8;
  if (bVar5) {
    uVar8 = 0;
    uVar13 = 0;
  }
  else {
    iVar6 = FUN_009f1f94(0x21);
    uVar13 = (uint)(iVar6 == 0) << 2;
    uVar8 = *pbVar1 & 0x10;
  }
  puVar3 = (uint *)(param_1 + 0x2223c);
  puVar4 = (uint *)(param_1 + 0x21cfc);
  *puVar3 = *puVar3 & 0xfffffffb | uVar13;
  *puVar4 = *puVar4 & 0xfffffffb | uVar8 >> 2;
  FUN_00c8658c(param_1 + 0x22750,uVar8 != 0);
  FUN_00c869ac(param_1 + 0x228e0,*pbVar1 >> 4 & 1);
  uVar8 = *pbVar1 & 0x10;
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xffffffef | uVar8;
  *(uint *)(param_1 + 0x224e4) = *(uint *)(param_1 + 0x224e4) & 0xffffffef | uVar8;
  *(uint *)(param_1 + 0x2259c) = *(uint *)(param_1 + 0x2259c) & 0xffffffef | uVar8;
  *(uint *)(param_1 + 0x22654) = *(uint *)(param_1 + 0x22654) & 0xffffffef | uVar8;
  if ((*pbVar1 >> 4 & 1) == 0) {
    return;
  }
  lVar9 = FUN_00a114dc();
  if (lVar9 != 0) {
    lVar10 = FUN_00a1f274();
    lVar9 = 0;
    if (lVar10 != 0) {
      lVar9 = lVar10 + 0x28;
    }
    FUN_00bbf434(lVar11,lVar9);
    lVar10 = FUN_00a1f28c();
    lVar9 = 0;
    if (lVar10 != 0) {
      lVar9 = lVar10 + 0x28;
    }
    FUN_00bbf434(lVar2,lVar9);
    lVar10 = FUN_00a1f2a4();
    lVar9 = 0;
    if (lVar10 != 0) {
      lVar9 = lVar10 + 0x28;
    }
    FUN_00bbf434(param_1 + 0x21c58,lVar9);
  }
  iVar6 = FUN_009f1f94(0xc);
  FUN_00bbf404(lVar11,iVar6 == 1);
  iVar6 = FUN_009f1f94(0xc);
  FUN_00bbf410(lVar11,iVar6 != 2);
  FUN_00bbf3f8(lVar11,1);
  FUN_00bbf41c(lVar11,1);
  lVar11 = FUN_00c0663c(*(undefined8 *)(param_1 + 0x21b58));
  uVar7 = FUN_00e6a474("HUD_movement_joystick");
  uVar8 = FUN_0091ed5c("HUD_movement_joystick",uVar7,0x1234);
  *(uint *)(lVar11 + 0x84) =
       *(uint *)(lVar11 + 0x84) & 0x80000000 |
       *(uint *)(lVar11 + 0x84) & 0x7fff | (uVar8 & 0xffff) << 0xf;
  FUN_00bbf410(lVar2,1);
  FUN_00bbf41c(lVar2,1);
  *(uint *)(*(long *)(param_1 + 0x21b78) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x21b78) + 0x84) & 0xfffffffb;
  uVar7 = FUN_00e6a474("HUD_attack_joystick");
  uVar8 = FUN_0091ed5c("HUD_attack_joystick",uVar7,0x1234);
  *puVar4 = *puVar4 & 0x80000000 | *puVar4 & 0x7fff | (uVar8 & 0xffff) << 0xf;
  uVar12 = FUN_00a1f2a4();
  FUN_00c81a3c(param_1 + 0x21f10,uVar12,0);
  uVar12 = FUN_00a1f2a4();
  FUN_00c81a3c(param_1 + 0x221b8,uVar12,1);
  uVar7 = FUN_00e6a474("HUD_attack_structure_joystick");
  uVar8 = FUN_0091ed5c("HUD_attack_structure_joystick",uVar7,0x1234);
  *puVar3 = *puVar3 & 0x80000000 | *puVar3 & 0x7fff | (uVar8 & 0xffff) << 0xf;
  FUN_00a3ee28(param_1);
  return;
}




void FUN_00a3b8a4(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  long local_88;
  undefined4 local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00a2dcd4(param_1 + 0x2c8,param_2,0,0);
  FUN_00c86430(param_1 + 0x22750,param_2);
  FUN_00c869a4(param_1 + 0x228e0,param_2);
  FUN_00a43bcc(param_1 + 0x19a68,param_2);
  FUN_00a6ebd4(param_1 + 0x8878,param_2);
  lVar1 = param_2 + 0x28;
  local_50 = *(undefined4 *)(param_2 + 0x30);
  local_58 = lVar1;
  FUN_00a3169c(param_1 + 0x15640,&local_58);
  FUN_00a37e68(param_1 + 0xc460,param_2,0,0);
  FUN_00a58ddc(param_1 + 0x13628,param_2);
  local_60 = *(undefined4 *)(param_2 + 0x30);
  local_68 = lVar1;
  FUN_00a4c318(param_1 + 0x10a48,&local_68);
  local_70 = *(undefined4 *)(param_2 + 0x30);
  local_78 = lVar1;
  FUN_00bbd684(param_1 + 0x15610,&local_78);
  FUN_00a66c98(param_1 + 0x15c40,param_2);
  FUN_00a49df8(param_1 + 0xf430,param_2);
  uVar6 = FUN_00e80f58();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00e829e0();
    FUN_008fcdb8(local_a0,lVar7 + 0xa8);
    FUN_00d55870(param_2);
    FUN_0090d990(local_b8);
    FUN_00bbc98c(param_1 + 0x8840,local_b8);
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
  }
  lVar7 = *(long *)(param_1 + 0x8848);
  uVar4 = FUN_00a3bb40();
  uVar2 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar2 & 0xfffffff8 | uVar2 & 3 | (uVar4 & 1) << 2;
  FUN_00ceace8();
  uVar6 = FUN_00ceb0bc();
  local_80 = *(undefined4 *)(param_2 + 0x30);
  lVar7 = param_1 + 0xfd68;
  local_88 = lVar1;
  FUN_00a49094(lVar7,&local_88);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_0093d820();
    if ((uVar6 & 1) != 0) {
      FUN_00a49104(lVar7,1);
    }
  }
  else {
    FUN_00a490f4(lVar7);
    lVar1 = param_1 + 0x13fc0;
    FUN_00a36348(lVar1,1);
    uVar5 = FUN_00d55870(param_2);
    FUN_00a36250(lVar1,uVar5);
    puVar8 = (undefined4 *)FUN_00d70a78();
    FUN_00a36264(*puVar8,puVar8[0x3e],lVar1,1);
  }
  *(byte *)(param_1 + 0x22a68) = *(byte *)(param_1 + 0x22a68) | 1;
  FUN_00a3bbac(param_1);
  FUN_00a3bbac(param_1);
  FUN_00a3bbf0(param_1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00a3bb40(void)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0093dbe8();
  bVar1 = false;
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00e80f58(0);
    bVar1 = false;
    if ((uVar2 & 1) != 0) {
      FUN_00ceace8(0);
      uVar2 = FUN_00ceae88();
      bVar1 = false;
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_009f1f70(0xf);
        bVar1 = false;
        if ((uVar2 & 1) != 0) {
          lVar3 = FUN_00940c1c(0);
          bVar1 = *(char *)(lVar3 + 0xc) != '\0';
        }
      }
    }
  }
  return bVar1;
}




void thunk_FUN_00a3bbac(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = FUN_00a1bd10();
  if ((uVar1 & 1) == 0) {
    pcVar2 = "hud_follow_cam_on";
  }
  else {
    pcVar2 = "hud_follow_cam_off";
  }
  FUN_00f0e578(param_1 + 0xf880,pcVar2);
  return;
}




void FUN_00a3bbac(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = FUN_00a1bd10();
  if ((uVar1 & 1) == 0) {
    pcVar2 = "hud_follow_cam_on";
  }
  else {
    pcVar2 = "hud_follow_cam_off";
  }
  FUN_00f0e578(param_1 + 0xf880,pcVar2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a3bbf0(long param_1)

{
  byte *pbVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  uint *puVar24;
  long lVar25;
  float *pfVar26;
  long lVar27;
  uint *puVar28;
  long lVar29;
  undefined3 *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int *piVar34;
  long lVar35;
  byte bVar36;
  uint uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  float *pfVar48;
  byte bVar49;
  uint uVar50;
  int iVar51;
  long *plVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float *local_120;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  float local_bc;
  int local_b8;
  int local_b4;
  long local_b0;
  
  lVar35 = tpidr_el0;
  local_b0 = *(long *)(lVar35 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x22a68);
  if ((*pbVar1 & 1) == 0) goto LAB_00a3e430;
  FUN_00967268(&local_b4,0,&local_b8,0);
  FUN_00f00298(&local_bc,&local_c0);
  FUN_00f0025c(&uStack_c4,&local_c8);
  uVar38 = FUN_00f00438("root-layer");
  FUN_00f13f08(local_bc,local_c0,param_1);
  uVar37 = FUN_00a3e47c(param_1);
  lVar2 = param_1 + 0xfd68;
  FUN_00a4917c();
  pfVar3 = (float *)(param_1 + 0x199e0);
  pfVar4 = (float *)(param_1 + 0x199e4);
  pfVar5 = (float *)(param_1 + 0x1f0a4);
  pfVar6 = (float *)(param_1 + 0x1f5ec);
  fVar71 = *pfVar3;
  fVar75 = *pfVar4;
  fVar74 = *(float *)(param_1 + 0x1f0a0);
  fVar53 = *pfVar5;
  fVar54 = *(float *)(param_1 + 0x1f5e8);
  pfVar7 = (float *)(param_1 + 0x1f6b4);
  fVar55 = *pfVar6;
  fVar56 = *(float *)(param_1 + 0x1f6b0);
  pfVar8 = (float *)(param_1 + 0x1f77c);
  fVar57 = *pfVar7;
  fVar58 = *(float *)(param_1 + 0x1f778);
  lVar9 = param_1 + 0x1f060;
  pfVar10 = (float *)(param_1 + 0x21ac8);
  fVar59 = *pfVar8;
  pfVar11 = (float *)(param_1 + 0x21acc);
  fVar60 = *pfVar10;
  fVar61 = *pfVar11;
  pfVar12 = (float *)(param_1 + 0x21bd0);
  pfVar13 = (float *)(param_1 + 0x21bd4);
  fVar62 = *pfVar12;
  pfVar14 = (float *)(param_1 + 0x226c8);
  fVar63 = *pfVar13;
  fVar64 = *pfVar14;
  pfVar15 = (float *)(param_1 + 0x226cc);
  fVar73 = *pfVar15;
  if ((fVar71 != DAT_03218ef8) || (fVar67 = fVar74, fVar75 != _DAT_03218efc)) {
    *(ulong *)pfVar3 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4();
    fVar67 = *(float *)(param_1 + 0x1f0a0);
  }
  local_120 = (float *)(param_1 + 0x1f0a0);
  if ((fVar67 != DAT_03218ef8) || (*pfVar5 != _DAT_03218efc)) {
    *(ulong *)local_120 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar9);
  }
  pfVar16 = (float *)(param_1 + 0x1f5e8);
  if ((*pfVar16 != DAT_03218ef8) || (*pfVar6 != _DAT_03218efc)) {
    *(ulong *)pfVar16 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0x1f5a8);
  }
  pfVar17 = (float *)(param_1 + 0x1f6b0);
  lVar18 = param_1 + 0x1f738;
  if ((*pfVar17 != DAT_03218ef8) || (*pfVar7 != _DAT_03218efc)) {
    *(ulong *)pfVar17 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0x1f670);
  }
  pfVar19 = (float *)(param_1 + 0x1f778);
  if ((*pfVar19 != DAT_03218ef8) || (*pfVar8 != _DAT_03218efc)) {
    *(ulong *)pfVar19 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar18);
  }
  FUN_00f13f08(local_bc,local_c0,lVar9);
  FUN_00f13f08(uStack_c4,local_c8,param_1 + 0xb8);
  FUN_00f07940(0,0,param_1 + 0xb8,0,uVar38,0);
  uVar39 = FUN_00bbf3e0(param_1 + 0x21b50);
  FUN_00f07a18(0x44048000,0xc3b90000,uVar39,3);
  FUN_00c06e84(*(undefined8 *)(param_1 + 0x21b58));
  FUN_00a3e4c8(param_1);
  FUN_00c07334(0x447a0000,*(undefined8 *)(param_1 + 0x21b78));
  uVar39 = FUN_00bbf3c8(param_1 + 0x21b70);
  FUN_00f13f08(local_bc * 0.5,local_c0);
  FUN_00f07940(0,0,uVar39,1,param_1,1);
  uVar39 = FUN_00bbf3e0(param_1 + 0x21b70);
  FUN_00f07a18(0xc3eb0000,0x43e10000,uVar39,1);
  lVar45 = param_1 + 0x21c78;
  FUN_00f13f08(0x43a00000,0x43a00000,lVar45);
  FUN_00f07940(0xc2f00000,0xc2a00000,lVar45,2,param_1,2);
  lVar43 = param_1 + 0x21c58;
  uVar39 = FUN_00bbf3c8(lVar43);
  FUN_00f13f08(0x43a00000,0x43a00000);
  FUN_00f07940(0,0,uVar39,8,lVar45,8);
  uVar40 = FUN_00bbf3e0(lVar43);
  FUN_00f07940(0,0,uVar40,8,uVar39,8);
  FUN_00f07940(0,0,*(undefined8 *)(param_1 + 0x21c60),0,param_1,0);
  lVar20 = param_1 + 0x21f10;
  FUN_00f13f08(0x43080000,0x43080000,lVar20);
  lVar46 = param_1 + 0x221b8;
  FUN_00f13f08(0x43080000,0x43080000,lVar46);
  FUN_00c81a84(lVar20);
  FUN_00c81a84(lVar46);
  uVar39 = FUN_00bbf3c8(lVar43);
  FUN_00f07940(0xc2a00000,0,lVar20,8,uVar39,3);
  uVar39 = FUN_00bbf3c8(lVar43);
  FUN_00f07940(0x41200000,0xc2100000,lVar46,8,uVar39,1);
  lVar43 = param_1 + 0x22750;
  FUN_00c865f0(lVar43);
  uVar69 = 0;
  FUN_00f07940(0,lVar43,2,lVar45,2);
  uVar39 = FUN_00c86754(lVar43,0);
  uVar65 = FUN_00f080a0(uVar39,0,uVar38,2);
  local_d0 = CONCAT44(uVar69,uVar65);
  FUN_00f13f18(param_1 + 0x22460,&local_d0);
  uVar39 = FUN_00c86754(lVar43,1);
  uVar65 = FUN_00f080a0(uVar39,0,uVar38,2);
  local_d0 = CONCAT44(uVar69,uVar65);
  FUN_00f13f18(param_1 + 0x22518,&local_d0);
  uVar39 = FUN_00c86754(lVar43,2);
  uVar65 = FUN_00f080a0(uVar39,0,uVar38,2);
  local_d0 = CONCAT44(uVar69,uVar65);
  FUN_00f13f18(param_1 + 0x225d0,&local_d0);
  FUN_00f07940(0,0,param_1 + 0x22460,2,uVar38,2);
  FUN_00f07940(0,0,param_1 + 0x22518,2,uVar38,2);
  FUN_00f07940(0,0,param_1 + 0x225d0,2,uVar38,2);
  lVar20 = param_1 + 0x10a48;
  FUN_00a4b9a0(lVar20);
  if ((*(float *)(param_1 + 0x10a98) != 1.0) || (*(float *)(param_1 + 0x10a9c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x10a98) = 0x3f800000;
    FUN_0091ada4(lVar20);
  }
  local_d0 = 0x42a0000043e90000;
  FUN_00f13f18(lVar20,&local_d0);
  if ((*(float *)(param_1 + 0x10a90) != 1.5) || (*(float *)(param_1 + 0x10a94) != 1.5)) {
    uVar39 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x10a90) = uVar39;
    FUN_0091ada4(lVar20);
  }
  uVar41 = FUN_0093d96c();
  fVar67 = 30.0;
  if ((uVar41 & 1) == 0) {
    fVar67 = 40.0;
  }
  uVar41 = FUN_0093d96c();
  fVar68 = 75.0;
  if ((uVar41 & 1) == 0) {
    fVar68 = 65.0;
  }
  fVar66 = (float)FUN_00f01c20(lVar20);
  fVar72 = (float)local_b8;
  fVar66 = fVar67 + fVar66 + fVar72;
  FUN_00f01c20(lVar20);
  fVar67 = (fVar72 + 10.0) - fVar68;
  fVar66 = fVar66 - fVar68;
  if (fVar67 <= 0.0) {
    fVar67 = 0.0;
  }
  lVar46 = param_1 + 0x1f128;
  FUN_00f10644(fVar68,fVar66,0,0,fVar67,fVar68);
  lVar21 = param_1 + 0x1f278;
  FUN_00f10644(fVar68,fVar66,0,0,fVar67,fVar68,lVar21);
  uVar50 = *(uint *)(param_1 + 0x1f1ac);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f1ac) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar46);
  }
  uVar50 = *(uint *)(param_1 + 0x1f2fc);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f2fc) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar21);
  }
  FUN_00f07a18(0,0xc0c00000,lVar20,1);
  FUN_00f07940(0,0xc0c00000,lVar46,1,uVar38,1);
  fVar67 = 0.0;
  FUN_00f07940(0,lVar21,8,lVar46,8);
  lVar21 = param_1 + 0x13628;
  FUN_00a58df0(lVar21);
  pfVar48 = (float *)(param_1 + 0x13670);
  pfVar22 = (float *)(param_1 + 0x13674);
  if ((*pfVar48 != 1.5) || (*pfVar22 != 1.5)) {
    uVar39 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)pfVar48 = uVar39;
    FUN_0091ada4(lVar21);
  }
  fVar68 = (float)FUN_00f01c20(lVar21);
  local_d0._4_4_ = fVar67 + 0.0;
  piVar34 = &local_b4;
  if ((uVar37 & 1) == 0) {
    piVar34 = &local_b8;
  }
  lVar44 = param_1 + 0x1f3c8;
  local_d0._0_4_ = fVar68 + -2.0 + (float)*piVar34;
  FUN_00f13f18(lVar44,&local_d0);
  lVar23 = param_1 + 0x1f4b8;
  FUN_00f13f08(local_d0._4_4_,local_d0._4_4_,lVar23);
  uVar50 = *(uint *)(param_1 + 0x136ac);
  if ((uVar50 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x136ac) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x5f80;
    FUN_0091ada4(lVar21);
  }
  uVar50 = *(uint *)(param_1 + 0x1f44c);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f44c) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar44);
  }
  uVar50 = *(uint *)(param_1 + 0x1f53c);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f53c) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar23);
  }
  if (((uVar37 & 1) == 0) || ((*pbVar1 >> 4 & 1) != 0)) {
    FUN_00f07940(0,0,lVar44,0,uVar38,0);
    FUN_00f07b18(0,lVar23,3,lVar44,1);
    FUN_00f07b18(0,lVar23,5,lVar44,5);
    *(byte *)(param_1 + 0x1f590) = *(byte *)(param_1 + 0x1f590) | 1;
    fVar67 = (float)local_b4 * 0.5 + 40.0;
  }
  else {
    FUN_00f07b18(0,lVar44,0,lVar46,2);
    FUN_00f07b18(0,lVar44,1,lVar46,1);
    FUN_00f07b18(0x80000000,lVar23,1,lVar44,3);
    FUN_00f07b18(0,lVar23,5,lVar44,5);
    *(byte *)(param_1 + 0x1f590) = *(byte *)(param_1 + 0x1f590) & 0xfe;
    fVar67 = (float)local_b8 * -0.5;
  }
  fVar68 = 0.0;
  FUN_00f07940(fVar67,lVar21,8,lVar44,8);
  lVar23 = param_1 + 0xf430;
  uVar65 = FUN_00a49fe0(lVar23);
  local_d0 = CONCAT44(fVar68,uVar65);
  FUN_00f13f18(lVar23,&local_d0);
  fVar67 = (float)FUN_00a3e5c0(param_1);
  if ((*(float *)(param_1 + 0xf478) != fVar67) || (*(float *)(param_1 + 0xf47c) != fVar68)) {
    *(float *)(param_1 + 0xf478) = fVar67;
    *(float *)(param_1 + 0xf47c) = fVar68;
    FUN_0091ada4(lVar23);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    if ((uVar37 & 1) == 0) {
      FUN_00f07b18(0x41200000,lVar23,0,lVar46,2);
      uVar70 = 0xc1200000;
      uVar39 = 1;
      uVar40 = 1;
      goto LAB_00a3c91c;
    }
    fVar68 = 10.0;
    FUN_00f07940(lVar23,0,param_1,0);
  }
  else {
    uVar70 = 0x41200000;
    FUN_00f07b18(0x41200000,lVar23,0,lVar44,2);
    uVar39 = 3;
    uVar40 = 3;
LAB_00a3c91c:
    FUN_00f07b18(uVar70,lVar23,uVar39,param_1,uVar40);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    uVar41 = FUN_009f1f70(8);
    puVar24 = (uint *)(param_1 + 0xf904);
    uVar50 = *puVar24;
    lVar25 = param_1 + 0xf880;
    if ((uVar41 & 1) == 0) {
      *puVar24 = uVar50 & 0xfffffffb;
    }
    else {
      *puVar24 = uVar50 | 4;
      if ((uVar50 & 0x7f80) != 0x5f80) {
        *puVar24 = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x5f84;
        FUN_0091ada4(lVar25);
      }
      pfVar26 = (float *)(param_1 + 0xf8c8);
      fVar68 = *pfVar26;
      if ((fVar68 != 1.35) || (fVar68 = *(float *)(param_1 + 0xf8cc), fVar68 != 1.35)) {
        pfVar26[0] = 1.35;
        pfVar26[1] = 1.35;
        FUN_0091ada4(lVar25);
      }
      if ((*(float *)(param_1 + 0xf8d0) != 0.5) || (*(float *)(param_1 + 0xf8d4) != 0.5)) {
        *(undefined8 *)(param_1 + 0xf8d0) = 0x3f0000003f000000;
        FUN_0091ada4(lVar25);
      }
    }
    lVar27 = param_1 + 0xfa78;
    uVar65 = FUN_00f0eaf4(lVar27);
    local_d0 = CONCAT44(fVar68,uVar65);
    FUN_00f13f18(lVar27,&local_d0);
    pfVar26 = (float *)(param_1 + 0xfac0);
    if ((*pfVar26 != 1.35) || (*(float *)(param_1 + 0xfac4) != 1.35)) {
      pfVar26[0] = 1.35;
      pfVar26[1] = 1.35;
      FUN_0091ada4(lVar27);
    }
    if ((*(float *)(param_1 + 0xfac8) != 0.5) || (*(float *)(param_1 + 0xfacc) != 0.5)) {
      *(undefined8 *)(param_1 + 0xfac8) = 0x3f0000003f000000;
      FUN_0091ada4(lVar27);
    }
    lVar47 = param_1 + 0xfc68;
    uVar65 = FUN_00f0eaf4(lVar47);
    local_d0 = CONCAT44(fVar68,uVar65);
    FUN_00f13f18(lVar47,&local_d0);
    pfVar26 = (float *)(param_1 + 0xfcb0);
    if ((*pfVar26 != 1.35) || (*(float *)(param_1 + 0xfcb4) != 1.35)) {
      pfVar26[0] = 1.35;
      pfVar26[1] = 1.35;
      FUN_0091ada4(lVar47);
    }
    if ((*(float *)(param_1 + 0xfcb8) != 0.5) || (*(float *)(param_1 + 0xfcbc) != 0.5)) {
      *(undefined8 *)(param_1 + 0xfcb8) = 0x3f0000003f000000;
      FUN_0091ada4(lVar47);
    }
    uVar41 = FUN_009f1f70(7);
    puVar28 = (uint *)(param_1 + 0xf7fc);
    lVar29 = param_1 + 0xf778;
    if ((uVar41 & 1) == 0) {
      *puVar28 = *puVar28 & 0xfffffffb;
    }
    else {
      *puVar28 = *puVar28 | 4;
      uVar65 = FUN_00f0eaf4(lVar29);
      local_d0 = CONCAT44(fVar68,uVar65);
      FUN_00f13f18(lVar29,&local_d0);
      uVar50 = *puVar28;
      if ((uVar50 & 0x7f80) != 0x5f80) {
        *puVar28 = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x5f80;
        FUN_0091ada4(lVar29);
      }
      pfVar26 = (float *)(param_1 + 0xf7c0);
      if ((*pfVar26 != 1.35) || (*(float *)(param_1 + 0xf7c4) != 1.35)) {
        pfVar26[0] = 1.35;
        pfVar26[1] = 1.35;
        FUN_0091ada4(lVar29);
      }
      if ((*(float *)(param_1 + 0xf7c8) != 0.5) || (*(float *)(param_1 + 0xf7cc) != 0.5)) {
        *(undefined8 *)(param_1 + 0xf7c8) = 0x3f0000003f000000;
        FUN_0091ada4(lVar29);
      }
    }
    FUN_00f07b18(0x41400000,lVar27,0,lVar44,2);
    if ((uVar37 & 1) == 0) {
      FUN_00f07b18(0x41400000,lVar27,3,param_1,3);
      FUN_00f07b18(0x41a00000,lVar47,3,lVar27,1);
      FUN_00f07b18(0,lVar47,5,lVar27,5);
      if ((*(byte *)puVar24 >> 2 & 1) != 0) {
        FUN_00f07b18(0x41a00000,lVar25,3,lVar47,1);
        FUN_00f07b18(0,lVar25,5,lVar47,5);
        lVar47 = lVar25;
      }
      if ((*(byte *)puVar28 >> 2 & 1) != 0) {
        FUN_00f07b18(0x41a00000,lVar29,3,lVar47,1);
        FUN_00f07b18(0,lVar29,5,lVar47,5);
        lVar47 = lVar29;
      }
    }
    else {
      FUN_00f07b18(0xc1400000,lVar27,1,param_1,1);
      lVar44 = lVar27;
      if ((*(byte *)(param_1 + 0xfcec) >> 2 & 1) != 0) {
        FUN_00f07b18(0xc1a00000,lVar47,1,lVar27,3);
        FUN_00f07b18(0,lVar47,5,lVar27,5);
        lVar44 = lVar47;
      }
      if ((*(byte *)puVar24 >> 2 & 1) != 0) {
        FUN_00f07b18(0xc1a00000,lVar25,1,lVar44,3);
        FUN_00f07b18(0,lVar25,5,lVar44,5);
        lVar44 = lVar25;
      }
      lVar47 = lVar44;
      if ((*(byte *)puVar28 >> 2 & 1) != 0) {
        FUN_00f07b18(0xc1a00000,lVar29,1,lVar44,3);
        FUN_00f07b18(0,lVar29,5,lVar44,5);
        lVar47 = lVar29;
      }
    }
    FUN_00f07b18(0x41a00000,param_1 + 0xf988,0,lVar27,2);
    FUN_00f07b18(0,param_1 + 0xf988,1,lVar27,1);
    uVar65 = FUN_00f0e700(lVar27);
    local_d0 = CONCAT44(fVar68,uVar65);
    FUN_00f13f18(param_1 + 0xfb78,&local_d0);
    FUN_00f07940(0,0,param_1 + 0xfb78,8,lVar27,8);
  }
  else {
    lVar44 = param_1 + 0xfa78;
    *(uint *)(param_1 + 0xf904) = *(uint *)(param_1 + 0xf904) & 0xfffffffb;
    uVar65 = 0x43280000;
    FUN_00f13f08(0x43280000,0x43280000,lVar44);
    if ((*(float *)(param_1 + 0xfac0) != 1.0) || (*(float *)(param_1 + 0xfac4) != 1.0)) {
      uVar39 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0xfac0) = uVar39;
      FUN_0091ada4(lVar44);
    }
    lVar47 = param_1 + 0xfc68;
    FUN_00f13f08(0x43280000,lVar47);
    if ((*(float *)(param_1 + 0xfcb0) != 1.0) || (*(float *)(param_1 + 0xfcb4) != 1.0)) {
      uVar39 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0xfcb0) = uVar39;
      FUN_0091ada4(lVar47);
    }
    uVar41 = FUN_009f1f70(7);
    puVar24 = (uint *)(param_1 + 0xf7fc);
    lVar25 = param_1 + 0xf778;
    if ((uVar41 & 1) == 0) {
      *puVar24 = *puVar24 & 0xfffffffb;
    }
    else {
      *puVar24 = *puVar24 | 4;
      uVar69 = FUN_00f0e700(lVar44);
      local_d0 = CONCAT44(uVar65,uVar69);
      FUN_00f13f18(lVar25,&local_d0);
      if ((*(float *)(param_1 + 0xf7c0) != 1.0) || (*(float *)(param_1 + 0xf7c4) != 1.0)) {
        uVar39 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0xf7c0) = uVar39;
        FUN_0091ada4(lVar25);
      }
    }
    FUN_00f07b18(0x41200000,lVar44,0,lVar23,2);
    FUN_00f07b18(0,lVar44,3,lVar23,3);
    FUN_00f07b18(0x41200000,lVar25,0,lVar44,2);
    FUN_00f07b18(0,lVar25,3,lVar44,3);
    uVar41 = FUN_009f1f70(7);
    if ((uVar41 & 1) == 0) {
      lVar25 = lVar44;
    }
    FUN_00f07b18(0x41200000,lVar47,0,lVar25,2);
    FUN_00f07b18(0,lVar47,3,lVar25,3);
    lVar47 = 0;
  }
  if ((*pbVar1 >> 3 & 1) == 0) {
    uVar41 = FUN_00f02540(param_1 + 0xf988);
    if ((uVar41 & 1) != 0) {
      FUN_00f07a18(0,0,param_1 + 0xf988,0);
    }
  }
  lVar44 = param_1 + 0x157d8;
  FUN_00a71f18(lVar44);
  if ((*(float *)(param_1 + 0x15820) != 1.5) || (*(float *)(param_1 + 0x15824) != 1.5)) {
    uVar39 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x15820) = uVar39;
    FUN_0091ada4(lVar44);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    if (lVar47 != 0 && ((uVar37 ^ 0xffffffff) & 1) == 0) {
      uVar65 = 0xc1a00000;
      uVar39 = 1;
      uVar40 = 3;
LAB_00a3d124:
      FUN_00f07b18(uVar65,lVar44,uVar39,lVar47,uVar40);
      uVar39 = 5;
      uVar40 = 5;
      goto LAB_00a3d138;
    }
    if (lVar47 != 0) {
      uVar65 = 0x41a00000;
      uVar39 = 3;
      uVar40 = 1;
      goto LAB_00a3d124;
    }
  }
  else {
    lVar47 = param_1 + 0x8bc0;
    FUN_00f07b18(0x41200000,lVar44,0,lVar47,2);
    uVar39 = 1;
    uVar40 = 1;
LAB_00a3d138:
    FUN_00f07b18(0,lVar44,uVar39,lVar47,uVar40);
  }
  lVar44 = param_1 + 0x15640;
  FUN_00a33210(lVar44);
  if ((*pbVar1 >> 4 & 1) == 0) {
    FUN_00a3171c(lVar44,0);
    FUN_00f07b18(0,lVar44,1,uVar38,1);
    if ((uVar37 & 1) == 0) {
      uVar65 = 0x42000000;
      uVar39 = 2;
      lVar47 = lVar23;
    }
    else {
      if ((*(byte *)(param_1 + 0x1fc1c) >> 2 & 1) == 0) {
        uVar41 = FUN_00f02540(param_1 + 0xf988);
        if ((uVar41 & 1) != 0) {
          uVar65 = 0x42000000;
          uVar39 = 2;
          lVar47 = param_1 + 0xf988;
          goto LAB_00a3d25c;
        }
        lVar47 = 0xfa78;
      }
      else {
        lVar47 = 0x1fb98;
      }
      uVar65 = 0x42000000;
      uVar39 = 2;
      lVar47 = param_1 + lVar47;
    }
  }
  else {
    FUN_00a3171c(lVar44,1);
    lVar47 = param_1 + 0xfa78;
    FUN_00f07b18(0x42000000,lVar44,3,lVar47,1);
    uVar65 = 0;
    uVar39 = 0;
  }
LAB_00a3d25c:
  FUN_00f07b18(uVar65,lVar44,0,lVar47,uVar39);
  bVar49 = *pbVar1;
  lVar44 = param_1 + 0x2c8;
  if ((bVar49 >> 4 & 1) == 0) {
    *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) | 4;
    FUN_00a2f0b0(lVar44);
    uVar41 = FUN_0092ead0(local_bc,local_c0);
    fVar67 = 1.25;
    if ((uVar41 & 1) == 0) {
      fVar67 = 1.38;
    }
    local_d0 = 0x4341f3b643fc8d1b;
    FUN_00f13f18(lVar44,&local_d0);
    if ((*(float *)(param_1 + 0x310) != fVar67) || (*(float *)(param_1 + 0x314) != fVar67)) {
      *(float *)(param_1 + 0x310) = fVar67;
      *(float *)(param_1 + 0x314) = fVar67;
      FUN_0091ada4(lVar44);
    }
    FUN_00a2f0b0(lVar44);
    FUN_00f13238(param_1 + 0x170);
    FUN_00f07940(0,0,param_1 + 0x170,6,uVar38,6);
    bVar49 = *pbVar1;
  }
  else {
    *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) & 0xfffffffb;
  }
  uVar38 = *(undefined8 *)(param_1 + 0x8848);
  if ((bVar49 >> 4 & 1) == 0) {
    uVar41 = 0x43fa0000;
    FUN_00f13f08(0x44480000,uVar38);
    FUN_00f07b18(0x43820000,uVar38,3,param_1,3);
    uVar65 = 0xc2700000;
    uVar39 = 2;
  }
  else {
    uVar41 = 0x43890000;
    FUN_00f13f08(0x44480000,uVar38);
    FUN_00f07b18(0x41f00000,uVar38,3,lVar23,1);
    uVar65 = 0x41800000;
    uVar39 = 0;
    lVar44 = lVar23;
  }
  FUN_00f07b18(uVar65,uVar38,uVar39,lVar44,0);
  uVar42 = FUN_0092e750();
  bVar49 = 0;
  if ((uVar42 & 1) != 0) {
    bVar49 = 0;
    if ((*pbVar1 >> 4 & 1) == 0) {
      bVar49 = (*pbVar1 >> 4 ^ 0xff) & 1;
    }
  }
  lVar44 = param_1 + 0x19a68;
  FUN_00a44298(lVar44,bVar49 ^ 1);
  FUN_00a44354(lVar44);
  if (bVar49 == 0) {
    if ((*pbVar1 >> 4 & 1) == 0) {
      local_d0._4_4_ = 213.0;
      fVar67 = (float)FUN_00f080a0(param_1,3,param_1 + 0x170,3);
      local_d0 = CONCAT44(local_d0._4_4_,fVar67 + -20.0);
      FUN_00f13f18(lVar44,&local_d0);
      uVar41 = 0xc1200000;
      FUN_00f07a18(0x41200000,lVar44,3);
      goto LAB_00a3d564;
    }
    local_d0 = 0x4355000044ac8000;
    FUN_00f13f18(lVar44,&local_d0);
    FUN_00f07b18(0xc3ff0000,lVar44,1,lVar45,3);
    FUN_00f07b18(0,lVar44,2,lVar45,2);
    FUN_00a442cc(lVar44,1);
  }
  else {
    local_d0 = CONCAT44(local_d0._4_4_,0x43550000);
    lVar45 = lVar23;
    if ((uVar37 & 1) == 0) {
      lVar45 = param_1 + 0xf778;
    }
    FUN_00f080a0(lVar45,3,param_1,3);
    local_d0 = CONCAT44((float)uVar41 + -20.0,(float)local_d0);
    FUN_00f13f18(lVar44,&local_d0);
    if ((uVar37 & 1) == 0) {
      lVar45 = param_1 + 0xfa78;
      FUN_00f07b18(0x41200000,lVar44,0,lVar45,2);
    }
    else {
      FUN_00f07b18(0x41200000,lVar44,0,lVar23,2);
      lVar45 = lVar23;
    }
    FUN_00f07b18(0,lVar44,3,lVar45,3);
LAB_00a3d564:
    FUN_00a442cc(lVar44,0);
    FUN_00a442dc(lVar44,0);
  }
  lVar45 = param_1 + 0xc460;
  FUN_00a3863c(lVar45);
  bVar36 = FUN_0092e750();
  bVar49 = *pbVar1;
  lVar47 = lVar44;
  if (((bVar49 >> 4 & 1) == 0) && ((bVar36 & (bVar49 & 0x10) == 0) == 0)) {
    local_d0 = CONCAT44(local_d0._4_4_,0x42c00000);
    lVar25 = lVar23;
    if ((uVar37 & 1) == 0) {
      lVar25 = param_1 + 0xf778;
    }
    FUN_00f080a0(lVar25,3,lVar44,0);
    local_d0 = CONCAT44((float)uVar41 + -20.0,(float)local_d0);
    FUN_00f13f18(lVar45,&local_d0);
    if ((*pbVar1 >> 4 & 1) == 0) {
      FUN_00f07b18(0xc1200000,lVar45,2,lVar44,0);
      uVar38 = 3;
      uVar39 = 3;
      uVar65 = 0;
    }
    else {
      FUN_00f07b18(0x41200000,lVar45,3,param_1 + 0xfa78,1);
      uVar65 = 0;
      uVar38 = 0;
      uVar39 = 0;
      lVar47 = param_1 + 0xfa78;
    }
  }
  else {
    if ((bVar49 >> 4 & 1) == 0) {
      fVar67 = (float)FUN_00f080a0(lVar44,2,param_1 + 0x170,3);
      fVar68 = -20.0;
    }
    else {
      fVar67 = (float)FUN_00f13e54(lVar44);
      fVar68 = -62.0;
    }
    uVar41 = (ulong)(uint)fVar68;
    local_d0 = CONCAT44(0x42c00000,fVar67 + fVar68);
    FUN_00f13f18(lVar45,&local_d0);
    if ((*pbVar1 >> 4 & 1) == 0) {
      FUN_00f07b18(0x41200000,lVar45,3,lVar44,1);
      uVar38 = 2;
      uVar39 = 2;
      uVar65 = 0;
      lVar47 = param_1;
    }
    else {
      FUN_00f07b18(0xc1000000,lVar45,2,lVar44,0);
      uVar65 = 0xc2780000;
      uVar38 = 1;
      uVar39 = 1;
    }
  }
  FUN_00f07b18(uVar65,lVar45,uVar38,lVar47,uVar39);
  puVar30 = (undefined3 *)(param_1 + 0xc3a0);
  lVar47 = param_1 + 0x8878;
  if ((*pbVar1 >> 4 & 1) == 0) {
    *(short *)puVar30 = (short)*puVar30;
    *(byte *)(param_1 + 0xc3a2) = *(byte *)(param_1 + 0xc3a2) | 1;
    if ((*(float *)(param_1 + 0x88c8) != 1.0) || (*(float *)(param_1 + 0x88cc) != 1.0)) {
      uVar38 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0x88c8) = uVar38;
      FUN_0091ada4(lVar47);
    }
    fVar67 = local_bc;
    fVar68 = (float)FUN_00f01c20(param_1 + 0x170);
    fVar66 = -40.0;
    FUN_00f01c20(param_1 + 0x170);
    FUN_00f13f08(((fVar67 - fVar68) + -40.0) * 0.5 + -40.0,fVar66 * 0.9,lVar47);
    fVar67 = (float)FUN_00f13e54(lVar47);
    fVar68 = 30.0;
    FUN_00f13e54(lVar47);
    fVar66 = fVar67 + 30.0 + -65.0;
    fVar67 = fVar68 + 10.0 + -65.0;
    if (fVar67 <= 0.0) {
      fVar67 = 0.0;
    }
    FUN_00f10644(0x42820000,fVar66,0,0x42820000,fVar67,0,param_1 + 0x1f800);
    FUN_00f10644(0x42820000,fVar66,0,0x42820000,fVar67,0,param_1 + 0x1f950);
    uVar50 = *(uint *)(param_1 + 0x1f884);
    if ((uVar50 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x1f884) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
      FUN_0091ada4(param_1 + 0x1f800);
    }
    uVar50 = *(uint *)(param_1 + 0x1f9d4);
    if ((uVar50 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x1f9d4) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
      FUN_0091ada4(param_1 + 0x1f950);
    }
    FUN_00f13f08(local_bc,local_c0,lVar18);
    uVar41 = 0xc1200000;
    FUN_00f07a18(lVar47,2);
    FUN_00a6f3a4(lVar47);
  }
  else {
    *(short *)puVar30 = (short)*puVar30;
    lVar25 = param_1 + 0xfa78;
    lVar27 = param_1 + 0x8bc0;
    *(byte *)(param_1 + 0xc3a2) = *(byte *)(param_1 + 0xc3a2) & 0xfe;
    uVar65 = FUN_00f0e700(lVar25);
    local_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar27,&local_d0);
    lVar29 = param_1 + 0x8cc0;
    uVar65 = FUN_00f0e700(lVar25);
    local_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar29,&local_d0);
    lVar31 = param_1 + 0x8ec0;
    uVar65 = FUN_00f0e700(lVar25);
    local_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar31,&local_d0);
    lVar32 = param_1 + 0x8ac0;
    uVar65 = FUN_00f0e700(lVar25);
    local_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar32,&local_d0);
    lVar33 = param_1 + 0x8fc0;
    FUN_00f0e700(lVar25);
    FUN_00a52010(lVar33);
    FUN_00f07b18(0x41a00000,lVar27,0,lVar46,2);
    FUN_00f07b18(0xc1200000,lVar27,1,param_1,1);
    FUN_00f07b18(0xc1200000,lVar29,1,lVar27,3);
    FUN_00f07b18(0,lVar29,5,lVar27,5);
    FUN_00f07b18(0x41200000,lVar31,0,param_1 + 0xfc68,2);
    FUN_00f07b18(0,lVar31,3,param_1 + 0xfc68,3);
    FUN_00f07b18(0x41200000,lVar32,0,lVar31,2);
    FUN_00f07b18(0,lVar32,3,lVar31,3);
    FUN_00f07b18(0x41200000,param_1 + 0xf988,0,lVar32,2);
    FUN_00f07b18(0,param_1 + 0xf988,3,lVar32,3);
    *(byte *)(param_1 + 0xb7b5) = *(byte *)(param_1 + 0xb7b5) & 0xbf;
    *(undefined4 *)(param_1 + 0xb7b0) = 0x43af0000;
    FUN_00a51df8(lVar33);
    FUN_00f07b18(0xc2c80000,lVar33,1,lVar29,3);
    FUN_00f07b18(0,lVar33,5,lVar29,5);
  }
  if ((*pbVar1 >> 4 & 1) != 0) {
    lVar46 = param_1 + 0x228e0;
    FUN_00c86a2c(lVar46);
    FUN_00f07b18(0xc1a00000,lVar46,2,lVar43,0);
    FUN_00f07b18(0xc2f00000,lVar46,1,param_1,1);
  }
  uVar50 = 0;
  do {
    uVar38 = FUN_00c86764(lVar43,uVar50);
    FUN_00f07b18(-((float)uVar50 * 80.0 + 196.0),uVar38,2,lVar43,0);
    FUN_00f07b18(0xc3340000,uVar38,1,lVar43,1);
    uVar50 = uVar50 + 1;
  } while (uVar50 != 3);
  iVar51 = 0;
  do {
    uVar38 = FUN_00a45a44(lVar44,iVar51);
    FUN_00f07b18(0xc3440000,uVar38,2,lVar43,0);
    FUN_00f07b18(0xc3340000,uVar38,1,lVar43,1);
    fVar67 = (float)uVar41;
    iVar51 = iVar51 + 1;
  } while (iVar51 != 6);
  lVar43 = param_1 + 0x228e0;
  uVar41 = FUN_00c86b44(lVar43);
  if ((uVar41 & 1) != 0) {
    uVar38 = FUN_00c86bac(lVar43);
    FUN_00f07b18(0xc3dc0000,uVar38,1,param_1 + 0x8bc0,3);
    FUN_00f07b18(0,uVar38,0,param_1 + 0x8bc0,0);
  }
  uVar41 = FUN_00c86b54(lVar43);
  if ((uVar41 & 1) != 0) {
    uVar38 = FUN_00c86bc4(lVar43);
    FUN_00f07b18(0xc3dc0000,uVar38,1,param_1 + 0x8bc0,3);
    FUN_00f07b18(0,uVar38,0,param_1 + 0x8bc0,0);
  }
  lVar43 = param_1 + 0x13fc0;
  uVar41 = FUN_00f02540(lVar43);
  if ((uVar41 & 1) != 0) {
    local_d0 = 0x42e00000442a0000;
    FUN_00f13f18(lVar43,&local_d0);
    FUN_00a35f34(lVar43);
    fVar67 = 0.0;
    FUN_00f07940(0,lVar43,4,param_1,4);
  }
  uVar41 = FUN_00f02540(lVar2);
  if ((uVar41 & 1) != 0) {
    uVar41 = FUN_0093d96c();
    fVar67 = 220.0;
    fVar68 = 220.0;
    if ((uVar41 & 1) == 0) {
      fVar68 = 120.0;
    }
    uVar41 = FUN_00a496b0(lVar2);
    if ((uVar41 & 1) == 0) {
      uVar41 = FUN_00a496a4(lVar2);
      if ((uVar41 & 1) == 0) {
        if ((*(float *)(param_1 + 0xfdb8) != 0.0) || (*(float *)(param_1 + 0xfdbc) != 0.0)) {
          *(undefined4 *)(param_1 + 0xfdbc) = 0;
          *(undefined4 *)(param_1 + 0xfdb8) = 0;
          FUN_0091ada4(lVar2);
        }
        if ((*(float *)(param_1 + 0xfdb0) != *pfVar48) || (*(float *)(param_1 + 0xfdb4) != *pfVar22)
           ) {
          *(float *)(param_1 + 0xfdb0) = *pfVar48;
          *(float *)(param_1 + 0xfdb4) = *pfVar22;
          FUN_0091ada4(lVar2);
        }
        FUN_00f13f08(fVar68,0x42240000,lVar2);
        fVar66 = *(float *)(param_1 + 0x13668);
        fVar68 = (float)FUN_00f01c20(lVar21);
        pfVar48 = (float *)(param_1 + 0xfda8);
        fVar72 = *pfVar48;
        fVar67 = *(float *)(param_1 + 0x1366c);
        fVar66 = fVar66 + fVar68;
        lVar43 = 0xfdac;
      }
      else {
        uVar50 = *(uint *)(param_1 + 0xfdec);
        if ((uVar50 >> 2 & 1) == 0) {
          *(uint *)(param_1 + 0xfdec) = uVar50 | 4;
        }
        if ((*(float *)(param_1 + 0xfdb8) != 0.5) || (*(float *)(param_1 + 0xfdbc) != 0.0)) {
          *(undefined8 *)(param_1 + 0xfdb8) = 0x3f000000;
          FUN_0091ada4(lVar2);
        }
        if ((*(float *)(param_1 + 0xfda8) != local_bc * 0.5) ||
           (*(float *)(param_1 + 0xfdac) != 10.0)) {
          *(float *)(param_1 + 0xfda8) = local_bc * 0.5;
          *(float *)(param_1 + 0xfdac) = 10.0;
          FUN_0091ada4(lVar2);
        }
        FUN_00f13f08(fVar68 + 600.0,0x42b60000,lVar2);
        fVar67 = *pfVar22;
        lVar43 = 0xfdb4;
        fVar66 = *pfVar48;
        pfVar48 = (float *)(param_1 + 0xfdb0);
        fVar72 = *pfVar48;
      }
      if ((fVar72 != fVar66) || (*(float *)(param_1 + lVar43) != fVar67)) {
        *pfVar48 = fVar66;
        *(float *)(param_1 + lVar43) = fVar67;
        FUN_0091ada4(lVar2);
      }
    }
    else {
      *(uint *)(param_1 + 0xfdec) = *(uint *)(param_1 + 0xfdec) & 0xfffffffb;
    }
  }
  plVar52 = *(long **)(param_1 + 0x15618);
  fVar68 = (float)FUN_00a4c16c(lVar20);
  lVar43 = FUN_00965ecc(param_1);
  fVar68 = (fVar68 - (float)*(undefined8 *)(lVar43 + 8)) / (float)*(undefined8 *)(lVar43 + 0x10);
  fVar67 = (fVar67 - (float)((ulong)*(undefined8 *)(lVar43 + 8) >> 0x20)) /
           (float)((ulong)*(undefined8 *)(lVar43 + 0x10) >> 0x20);
  if ((*(float *)(plVar52 + 8) != fVar68) || (*(float *)((long)plVar52 + 0x44) != fVar67)) {
    plVar52[8] = CONCAT44(fVar67,fVar68);
    FUN_0091ada4(plVar52);
  }
  local_d0 = 0x3f800000;
  (**(code **)(*plVar52 + 0x28))(plVar52,&local_d0);
  (**(code **)(*plVar52 + 0x90))(plVar52);
  fVar68 = (float)FUN_00f01c20(lVar47);
  FUN_00ceace8();
  uVar41 = FUN_00ceaf74();
  fVar66 = -50.0;
  fVar67 = 1.0;
  if ((uVar41 & 1) == 0) {
    fVar67 = 0.8;
  }
  lVar43 = param_1 + 0xc3a8;
  FUN_00a6fa98(lVar47);
  FUN_00f13f08(fVar68 * fVar67 + -50.0,fVar66 + -20.0,lVar43);
  if ((*(float *)(param_1 + 0xc3f8) != *(float *)(param_1 + 0x88c8)) ||
     (*(float *)(param_1 + 0xc3fc) != *(float *)(param_1 + 0x88cc))) {
    *(float *)(param_1 + 0xc3f8) = *(float *)(param_1 + 0x88c8);
    *(float *)(param_1 + 0xc3fc) = *(float *)(param_1 + 0x88cc);
    FUN_0091ada4(lVar43);
  }
  uVar38 = NEON_fmov(0x41200000,4);
  fVar67 = (float)*(undefined8 *)(param_1 + 35000) + (float)uVar38;
  fVar68 = (float)((ulong)*(undefined8 *)(param_1 + 35000) >> 0x20) + (float)((ulong)uVar38 >> 0x20)
  ;
  if ((*(float *)(param_1 + 0xc3e8) != fVar67) || (*(float *)(param_1 + 0xc3ec) != fVar68)) {
    *(ulong *)(param_1 + 0xc3e8) = CONCAT44(fVar68,fVar67);
    FUN_0091ada4(lVar43);
  }
  lVar43 = param_1 + 0x15c40;
  if ((*pbVar1 >> 4 & 1) == 0) {
    lVar46 = param_1 + 0x8bc0;
    FUN_00f07b18(0xc1200000,lVar43,2,lVar46,0);
    uVar38 = 4;
    uVar39 = 4;
  }
  else {
    lVar46 = param_1 + 0xfa78;
    FUN_00f07b18(0x41200000,lVar43,3,lVar46,1);
    uVar38 = 0;
    uVar39 = 0;
  }
  FUN_00f07b18(0,lVar43,uVar38,lVar46,uVar39);
  uVar50 = *(uint *)(param_1 + 0x1fc1c);
  lVar43 = param_1 + 0x1fb98;
  if ((uVar50 & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x1fc1c) = uVar50 & 0xffff807f | 0x3f80;
    FUN_0091ada4(lVar43);
  }
  if ((*(byte *)(param_1 + 0x1f0e4) >> 2 & 1) == 0) {
    uVar65 = 0x428c0000;
    fVar67 = -20.0;
    uVar38 = 1;
LAB_00a3e248:
    FUN_00f07a18(fVar67,uVar65,lVar43,uVar38);
  }
  else {
    if ((*pbVar1 >> 4 & 1) != 0) {
      fVar67 = (float)(**(code **)(*(long *)(param_1 + 0x8ac0) + 0x50))();
      fVar67 = fVar67 + 20.0;
      uVar65 = 0xc1200000;
      uVar38 = 3;
      goto LAB_00a3e248;
    }
    uVar65 = 3;
    if ((uVar37 & 1) != 0) {
      uVar65 = 1;
    }
    FUN_00f07b18(0x41200000,lVar43,0,param_1 + 0xfa78,2);
    FUN_00f07b18(0,lVar43,uVar65,param_1 + 0xfa78,uVar65);
  }
  FUN_00a3863c(lVar45);
  FUN_00a44354(lVar44);
  FUN_00a4917c(lVar2);
  FUN_00a49f5c(lVar23);
  FUN_00a58df0(lVar21);
  FUN_00a4b9a0(lVar20);
  if ((*pfVar3 != fVar71) || (*pfVar4 != fVar75)) {
    *pfVar3 = fVar71;
    *pfVar4 = fVar75;
    FUN_0091ada4(param_1 + 0x199a0);
  }
  if ((*local_120 != fVar74) || (*pfVar5 != fVar53)) {
    *(float *)(param_1 + 0x1f0a0) = fVar74;
    *pfVar5 = fVar53;
    FUN_0091ada4(lVar9);
  }
  if ((*pfVar16 != fVar54) || (*pfVar6 != fVar55)) {
    *(float *)(param_1 + 0x1f5e8) = fVar54;
    *pfVar6 = fVar55;
    FUN_0091ada4(param_1 + 0x1f5a8);
  }
  if ((*pfVar17 != fVar56) || (*pfVar7 != fVar57)) {
    *(float *)(param_1 + 0x1f6b0) = fVar56;
    *pfVar7 = fVar57;
    FUN_0091ada4(param_1 + 0x1f670);
  }
  if ((*pfVar19 != fVar58) || (*pfVar8 != fVar59)) {
    *(float *)(param_1 + 0x1f778) = fVar58;
    *pfVar8 = fVar59;
    FUN_0091ada4(lVar18);
  }
  if ((*pfVar10 != fVar60) || (*pfVar11 != fVar61)) {
    *pfVar10 = fVar60;
    *pfVar11 = fVar61;
    FUN_0091ada4(param_1 + 0x21a88);
  }
  if ((*pfVar12 != fVar62) || (*pfVar13 != fVar63)) {
    *pfVar12 = fVar62;
    *pfVar13 = fVar63;
    FUN_0091ada4(param_1 + 0x21b90);
  }
  if ((*pfVar14 != fVar64) || (*pfVar15 != fVar73)) {
    *pfVar14 = fVar64;
    *pfVar15 = fVar73;
    FUN_0091ada4(param_1 + 0x22688);
  }
LAB_00a3e430:
  if (*(long *)(lVar35 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00a3bbf0(long param_1)

{
  byte *pbVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  uint *puVar24;
  long lVar25;
  float *pfVar26;
  long lVar27;
  uint *puVar28;
  long lVar29;
  undefined3 *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int *piVar34;
  long lVar35;
  byte bVar36;
  uint uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  float *pfVar48;
  byte bVar49;
  uint uVar50;
  int iVar51;
  long *plVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float *pfStack_120;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  int iStack_b8;
  int iStack_b4;
  long lStack_b0;
  
  lVar35 = tpidr_el0;
  lStack_b0 = *(long *)(lVar35 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x22a68);
  if ((*pbVar1 & 1) == 0) goto LAB_00a3e430;
  FUN_00967268(&iStack_b4,0,&iStack_b8,0);
  FUN_00f00298(&fStack_bc,&uStack_c0);
  FUN_00f0025c(&uStack_c4,&uStack_c8);
  uVar38 = FUN_00f00438("root-layer");
  FUN_00f13f08(fStack_bc,uStack_c0,param_1);
  uVar37 = FUN_00a3e47c(param_1);
  lVar2 = param_1 + 0xfd68;
  FUN_00a4917c();
  pfVar3 = (float *)(param_1 + 0x199e0);
  pfVar4 = (float *)(param_1 + 0x199e4);
  pfVar5 = (float *)(param_1 + 0x1f0a4);
  pfVar6 = (float *)(param_1 + 0x1f5ec);
  fVar71 = *pfVar3;
  fVar75 = *pfVar4;
  fVar74 = *(float *)(param_1 + 0x1f0a0);
  fVar53 = *pfVar5;
  fVar54 = *(float *)(param_1 + 0x1f5e8);
  pfVar7 = (float *)(param_1 + 0x1f6b4);
  fVar55 = *pfVar6;
  fVar56 = *(float *)(param_1 + 0x1f6b0);
  pfVar8 = (float *)(param_1 + 0x1f77c);
  fVar57 = *pfVar7;
  fVar58 = *(float *)(param_1 + 0x1f778);
  lVar9 = param_1 + 0x1f060;
  pfVar10 = (float *)(param_1 + 0x21ac8);
  fVar59 = *pfVar8;
  pfVar11 = (float *)(param_1 + 0x21acc);
  fVar60 = *pfVar10;
  fVar61 = *pfVar11;
  pfVar12 = (float *)(param_1 + 0x21bd0);
  pfVar13 = (float *)(param_1 + 0x21bd4);
  fVar62 = *pfVar12;
  pfVar14 = (float *)(param_1 + 0x226c8);
  fVar63 = *pfVar13;
  fVar64 = *pfVar14;
  pfVar15 = (float *)(param_1 + 0x226cc);
  fVar73 = *pfVar15;
  if ((fVar71 != DAT_03218ef8) || (fVar67 = fVar74, fVar75 != _DAT_03218efc)) {
    *(ulong *)pfVar3 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4();
    fVar67 = *(float *)(param_1 + 0x1f0a0);
  }
  pfStack_120 = (float *)(param_1 + 0x1f0a0);
  if ((fVar67 != DAT_03218ef8) || (*pfVar5 != _DAT_03218efc)) {
    *(ulong *)pfStack_120 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar9);
  }
  pfVar16 = (float *)(param_1 + 0x1f5e8);
  if ((*pfVar16 != DAT_03218ef8) || (*pfVar6 != _DAT_03218efc)) {
    *(ulong *)pfVar16 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0x1f5a8);
  }
  pfVar17 = (float *)(param_1 + 0x1f6b0);
  lVar18 = param_1 + 0x1f738;
  if ((*pfVar17 != DAT_03218ef8) || (*pfVar7 != _DAT_03218efc)) {
    *(ulong *)pfVar17 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0x1f670);
  }
  pfVar19 = (float *)(param_1 + 0x1f778);
  if ((*pfVar19 != DAT_03218ef8) || (*pfVar8 != _DAT_03218efc)) {
    *(ulong *)pfVar19 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar18);
  }
  FUN_00f13f08(fStack_bc,uStack_c0,lVar9);
  FUN_00f13f08(uStack_c4,uStack_c8,param_1 + 0xb8);
  FUN_00f07940(0,0,param_1 + 0xb8,0,uVar38,0);
  uVar39 = FUN_00bbf3e0(param_1 + 0x21b50);
  FUN_00f07a18(0x44048000,0xc3b90000,uVar39,3);
  FUN_00c06e84(*(undefined8 *)(param_1 + 0x21b58));
  FUN_00a3e4c8(param_1);
  FUN_00c07334(0x447a0000,*(undefined8 *)(param_1 + 0x21b78));
  uVar39 = FUN_00bbf3c8(param_1 + 0x21b70);
  FUN_00f13f08(fStack_bc * 0.5,uStack_c0);
  FUN_00f07940(0,0,uVar39,1,param_1,1);
  uVar39 = FUN_00bbf3e0(param_1 + 0x21b70);
  FUN_00f07a18(0xc3eb0000,0x43e10000,uVar39,1);
  lVar45 = param_1 + 0x21c78;
  FUN_00f13f08(0x43a00000,0x43a00000,lVar45);
  FUN_00f07940(0xc2f00000,0xc2a00000,lVar45,2,param_1,2);
  lVar43 = param_1 + 0x21c58;
  uVar39 = FUN_00bbf3c8(lVar43);
  FUN_00f13f08(0x43a00000,0x43a00000);
  FUN_00f07940(0,0,uVar39,8,lVar45,8);
  uVar40 = FUN_00bbf3e0(lVar43);
  FUN_00f07940(0,0,uVar40,8,uVar39,8);
  FUN_00f07940(0,0,*(undefined8 *)(param_1 + 0x21c60),0,param_1,0);
  lVar20 = param_1 + 0x21f10;
  FUN_00f13f08(0x43080000,0x43080000,lVar20);
  lVar46 = param_1 + 0x221b8;
  FUN_00f13f08(0x43080000,0x43080000,lVar46);
  FUN_00c81a84(lVar20);
  FUN_00c81a84(lVar46);
  uVar39 = FUN_00bbf3c8(lVar43);
  FUN_00f07940(0xc2a00000,0,lVar20,8,uVar39,3);
  uVar39 = FUN_00bbf3c8(lVar43);
  FUN_00f07940(0x41200000,0xc2100000,lVar46,8,uVar39,1);
  lVar43 = param_1 + 0x22750;
  FUN_00c865f0(lVar43);
  uVar69 = 0;
  FUN_00f07940(0,lVar43,2,lVar45,2);
  uVar39 = FUN_00c86754(lVar43,0);
  uVar65 = FUN_00f080a0(uVar39,0,uVar38,2);
  uStack_d0 = CONCAT44(uVar69,uVar65);
  FUN_00f13f18(param_1 + 0x22460,&uStack_d0);
  uVar39 = FUN_00c86754(lVar43,1);
  uVar65 = FUN_00f080a0(uVar39,0,uVar38,2);
  uStack_d0 = CONCAT44(uVar69,uVar65);
  FUN_00f13f18(param_1 + 0x22518,&uStack_d0);
  uVar39 = FUN_00c86754(lVar43,2);
  uVar65 = FUN_00f080a0(uVar39,0,uVar38,2);
  uStack_d0 = CONCAT44(uVar69,uVar65);
  FUN_00f13f18(param_1 + 0x225d0,&uStack_d0);
  FUN_00f07940(0,0,param_1 + 0x22460,2,uVar38,2);
  FUN_00f07940(0,0,param_1 + 0x22518,2,uVar38,2);
  FUN_00f07940(0,0,param_1 + 0x225d0,2,uVar38,2);
  lVar20 = param_1 + 0x10a48;
  FUN_00a4b9a0(lVar20);
  if ((*(float *)(param_1 + 0x10a98) != 1.0) || (*(float *)(param_1 + 0x10a9c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x10a98) = 0x3f800000;
    FUN_0091ada4(lVar20);
  }
  uStack_d0 = 0x42a0000043e90000;
  FUN_00f13f18(lVar20,&uStack_d0);
  if ((*(float *)(param_1 + 0x10a90) != 1.5) || (*(float *)(param_1 + 0x10a94) != 1.5)) {
    uVar39 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x10a90) = uVar39;
    FUN_0091ada4(lVar20);
  }
  uVar41 = FUN_0093d96c();
  fVar67 = 30.0;
  if ((uVar41 & 1) == 0) {
    fVar67 = 40.0;
  }
  uVar41 = FUN_0093d96c();
  fVar68 = 75.0;
  if ((uVar41 & 1) == 0) {
    fVar68 = 65.0;
  }
  fVar66 = (float)FUN_00f01c20(lVar20);
  fVar72 = (float)iStack_b8;
  fVar66 = fVar67 + fVar66 + fVar72;
  FUN_00f01c20(lVar20);
  fVar67 = (fVar72 + 10.0) - fVar68;
  fVar66 = fVar66 - fVar68;
  if (fVar67 <= 0.0) {
    fVar67 = 0.0;
  }
  lVar46 = param_1 + 0x1f128;
  FUN_00f10644(fVar68,fVar66,0,0,fVar67,fVar68);
  lVar21 = param_1 + 0x1f278;
  FUN_00f10644(fVar68,fVar66,0,0,fVar67,fVar68,lVar21);
  uVar50 = *(uint *)(param_1 + 0x1f1ac);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f1ac) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar46);
  }
  uVar50 = *(uint *)(param_1 + 0x1f2fc);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f2fc) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar21);
  }
  FUN_00f07a18(0,0xc0c00000,lVar20,1);
  FUN_00f07940(0,0xc0c00000,lVar46,1,uVar38,1);
  fVar67 = 0.0;
  FUN_00f07940(0,lVar21,8,lVar46,8);
  lVar21 = param_1 + 0x13628;
  FUN_00a58df0(lVar21);
  pfVar48 = (float *)(param_1 + 0x13670);
  pfVar22 = (float *)(param_1 + 0x13674);
  if ((*pfVar48 != 1.5) || (*pfVar22 != 1.5)) {
    uVar39 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)pfVar48 = uVar39;
    FUN_0091ada4(lVar21);
  }
  fVar68 = (float)FUN_00f01c20(lVar21);
  uStack_d0._4_4_ = fVar67 + 0.0;
  piVar34 = &iStack_b4;
  if ((uVar37 & 1) == 0) {
    piVar34 = &iStack_b8;
  }
  lVar44 = param_1 + 0x1f3c8;
  uStack_d0._0_4_ = fVar68 + -2.0 + (float)*piVar34;
  FUN_00f13f18(lVar44,&uStack_d0);
  lVar23 = param_1 + 0x1f4b8;
  FUN_00f13f08(uStack_d0._4_4_,uStack_d0._4_4_,lVar23);
  uVar50 = *(uint *)(param_1 + 0x136ac);
  if ((uVar50 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x136ac) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x5f80;
    FUN_0091ada4(lVar21);
  }
  uVar50 = *(uint *)(param_1 + 0x1f44c);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f44c) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar44);
  }
  uVar50 = *(uint *)(param_1 + 0x1f53c);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f53c) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar23);
  }
  if (((uVar37 & 1) == 0) || ((*pbVar1 >> 4 & 1) != 0)) {
    FUN_00f07940(0,0,lVar44,0,uVar38,0);
    FUN_00f07b18(0,lVar23,3,lVar44,1);
    FUN_00f07b18(0,lVar23,5,lVar44,5);
    *(byte *)(param_1 + 0x1f590) = *(byte *)(param_1 + 0x1f590) | 1;
    fVar67 = (float)iStack_b4 * 0.5 + 40.0;
  }
  else {
    FUN_00f07b18(0,lVar44,0,lVar46,2);
    FUN_00f07b18(0,lVar44,1,lVar46,1);
    FUN_00f07b18(0x80000000,lVar23,1,lVar44,3);
    FUN_00f07b18(0,lVar23,5,lVar44,5);
    *(byte *)(param_1 + 0x1f590) = *(byte *)(param_1 + 0x1f590) & 0xfe;
    fVar67 = (float)iStack_b8 * -0.5;
  }
  fVar68 = 0.0;
  FUN_00f07940(fVar67,lVar21,8,lVar44,8);
  lVar23 = param_1 + 0xf430;
  uVar65 = FUN_00a49fe0(lVar23);
  uStack_d0 = CONCAT44(fVar68,uVar65);
  FUN_00f13f18(lVar23,&uStack_d0);
  fVar67 = (float)FUN_00a3e5c0(param_1);
  if ((*(float *)(param_1 + 0xf478) != fVar67) || (*(float *)(param_1 + 0xf47c) != fVar68)) {
    *(float *)(param_1 + 0xf478) = fVar67;
    *(float *)(param_1 + 0xf47c) = fVar68;
    FUN_0091ada4(lVar23);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    if ((uVar37 & 1) == 0) {
      FUN_00f07b18(0x41200000,lVar23,0,lVar46,2);
      uVar70 = 0xc1200000;
      uVar39 = 1;
      uVar40 = 1;
      goto LAB_00a3c91c;
    }
    fVar68 = 10.0;
    FUN_00f07940(lVar23,0,param_1,0);
  }
  else {
    uVar70 = 0x41200000;
    FUN_00f07b18(0x41200000,lVar23,0,lVar44,2);
    uVar39 = 3;
    uVar40 = 3;
LAB_00a3c91c:
    FUN_00f07b18(uVar70,lVar23,uVar39,param_1,uVar40);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    uVar41 = FUN_009f1f70(8);
    puVar24 = (uint *)(param_1 + 0xf904);
    uVar50 = *puVar24;
    lVar25 = param_1 + 0xf880;
    if ((uVar41 & 1) == 0) {
      *puVar24 = uVar50 & 0xfffffffb;
    }
    else {
      *puVar24 = uVar50 | 4;
      if ((uVar50 & 0x7f80) != 0x5f80) {
        *puVar24 = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x5f84;
        FUN_0091ada4(lVar25);
      }
      pfVar26 = (float *)(param_1 + 0xf8c8);
      fVar68 = *pfVar26;
      if ((fVar68 != 1.35) || (fVar68 = *(float *)(param_1 + 0xf8cc), fVar68 != 1.35)) {
        pfVar26[0] = 1.35;
        pfVar26[1] = 1.35;
        FUN_0091ada4(lVar25);
      }
      if ((*(float *)(param_1 + 0xf8d0) != 0.5) || (*(float *)(param_1 + 0xf8d4) != 0.5)) {
        *(undefined8 *)(param_1 + 0xf8d0) = 0x3f0000003f000000;
        FUN_0091ada4(lVar25);
      }
    }
    lVar27 = param_1 + 0xfa78;
    uVar65 = FUN_00f0eaf4(lVar27);
    uStack_d0 = CONCAT44(fVar68,uVar65);
    FUN_00f13f18(lVar27,&uStack_d0);
    pfVar26 = (float *)(param_1 + 0xfac0);
    if ((*pfVar26 != 1.35) || (*(float *)(param_1 + 0xfac4) != 1.35)) {
      pfVar26[0] = 1.35;
      pfVar26[1] = 1.35;
      FUN_0091ada4(lVar27);
    }
    if ((*(float *)(param_1 + 0xfac8) != 0.5) || (*(float *)(param_1 + 0xfacc) != 0.5)) {
      *(undefined8 *)(param_1 + 0xfac8) = 0x3f0000003f000000;
      FUN_0091ada4(lVar27);
    }
    lVar47 = param_1 + 0xfc68;
    uVar65 = FUN_00f0eaf4(lVar47);
    uStack_d0 = CONCAT44(fVar68,uVar65);
    FUN_00f13f18(lVar47,&uStack_d0);
    pfVar26 = (float *)(param_1 + 0xfcb0);
    if ((*pfVar26 != 1.35) || (*(float *)(param_1 + 0xfcb4) != 1.35)) {
      pfVar26[0] = 1.35;
      pfVar26[1] = 1.35;
      FUN_0091ada4(lVar47);
    }
    if ((*(float *)(param_1 + 0xfcb8) != 0.5) || (*(float *)(param_1 + 0xfcbc) != 0.5)) {
      *(undefined8 *)(param_1 + 0xfcb8) = 0x3f0000003f000000;
      FUN_0091ada4(lVar47);
    }
    uVar41 = FUN_009f1f70(7);
    puVar28 = (uint *)(param_1 + 0xf7fc);
    lVar29 = param_1 + 0xf778;
    if ((uVar41 & 1) == 0) {
      *puVar28 = *puVar28 & 0xfffffffb;
    }
    else {
      *puVar28 = *puVar28 | 4;
      uVar65 = FUN_00f0eaf4(lVar29);
      uStack_d0 = CONCAT44(fVar68,uVar65);
      FUN_00f13f18(lVar29,&uStack_d0);
      uVar50 = *puVar28;
      if ((uVar50 & 0x7f80) != 0x5f80) {
        *puVar28 = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x5f80;
        FUN_0091ada4(lVar29);
      }
      pfVar26 = (float *)(param_1 + 0xf7c0);
      if ((*pfVar26 != 1.35) || (*(float *)(param_1 + 0xf7c4) != 1.35)) {
        pfVar26[0] = 1.35;
        pfVar26[1] = 1.35;
        FUN_0091ada4(lVar29);
      }
      if ((*(float *)(param_1 + 0xf7c8) != 0.5) || (*(float *)(param_1 + 0xf7cc) != 0.5)) {
        *(undefined8 *)(param_1 + 0xf7c8) = 0x3f0000003f000000;
        FUN_0091ada4(lVar29);
      }
    }
    FUN_00f07b18(0x41400000,lVar27,0,lVar44,2);
    if ((uVar37 & 1) == 0) {
      FUN_00f07b18(0x41400000,lVar27,3,param_1,3);
      FUN_00f07b18(0x41a00000,lVar47,3,lVar27,1);
      FUN_00f07b18(0,lVar47,5,lVar27,5);
      if ((*(byte *)puVar24 >> 2 & 1) != 0) {
        FUN_00f07b18(0x41a00000,lVar25,3,lVar47,1);
        FUN_00f07b18(0,lVar25,5,lVar47,5);
        lVar47 = lVar25;
      }
      if ((*(byte *)puVar28 >> 2 & 1) != 0) {
        FUN_00f07b18(0x41a00000,lVar29,3,lVar47,1);
        FUN_00f07b18(0,lVar29,5,lVar47,5);
        lVar47 = lVar29;
      }
    }
    else {
      FUN_00f07b18(0xc1400000,lVar27,1,param_1,1);
      lVar44 = lVar27;
      if ((*(byte *)(param_1 + 0xfcec) >> 2 & 1) != 0) {
        FUN_00f07b18(0xc1a00000,lVar47,1,lVar27,3);
        FUN_00f07b18(0,lVar47,5,lVar27,5);
        lVar44 = lVar47;
      }
      if ((*(byte *)puVar24 >> 2 & 1) != 0) {
        FUN_00f07b18(0xc1a00000,lVar25,1,lVar44,3);
        FUN_00f07b18(0,lVar25,5,lVar44,5);
        lVar44 = lVar25;
      }
      lVar47 = lVar44;
      if ((*(byte *)puVar28 >> 2 & 1) != 0) {
        FUN_00f07b18(0xc1a00000,lVar29,1,lVar44,3);
        FUN_00f07b18(0,lVar29,5,lVar44,5);
        lVar47 = lVar29;
      }
    }
    FUN_00f07b18(0x41a00000,param_1 + 0xf988,0,lVar27,2);
    FUN_00f07b18(0,param_1 + 0xf988,1,lVar27,1);
    uVar65 = FUN_00f0e700(lVar27);
    uStack_d0 = CONCAT44(fVar68,uVar65);
    FUN_00f13f18(param_1 + 0xfb78,&uStack_d0);
    FUN_00f07940(0,0,param_1 + 0xfb78,8,lVar27,8);
  }
  else {
    lVar44 = param_1 + 0xfa78;
    *(uint *)(param_1 + 0xf904) = *(uint *)(param_1 + 0xf904) & 0xfffffffb;
    uVar65 = 0x43280000;
    FUN_00f13f08(0x43280000,0x43280000,lVar44);
    if ((*(float *)(param_1 + 0xfac0) != 1.0) || (*(float *)(param_1 + 0xfac4) != 1.0)) {
      uVar39 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0xfac0) = uVar39;
      FUN_0091ada4(lVar44);
    }
    lVar47 = param_1 + 0xfc68;
    FUN_00f13f08(0x43280000,lVar47);
    if ((*(float *)(param_1 + 0xfcb0) != 1.0) || (*(float *)(param_1 + 0xfcb4) != 1.0)) {
      uVar39 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0xfcb0) = uVar39;
      FUN_0091ada4(lVar47);
    }
    uVar41 = FUN_009f1f70(7);
    puVar24 = (uint *)(param_1 + 0xf7fc);
    lVar25 = param_1 + 0xf778;
    if ((uVar41 & 1) == 0) {
      *puVar24 = *puVar24 & 0xfffffffb;
    }
    else {
      *puVar24 = *puVar24 | 4;
      uVar69 = FUN_00f0e700(lVar44);
      uStack_d0 = CONCAT44(uVar65,uVar69);
      FUN_00f13f18(lVar25,&uStack_d0);
      if ((*(float *)(param_1 + 0xf7c0) != 1.0) || (*(float *)(param_1 + 0xf7c4) != 1.0)) {
        uVar39 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0xf7c0) = uVar39;
        FUN_0091ada4(lVar25);
      }
    }
    FUN_00f07b18(0x41200000,lVar44,0,lVar23,2);
    FUN_00f07b18(0,lVar44,3,lVar23,3);
    FUN_00f07b18(0x41200000,lVar25,0,lVar44,2);
    FUN_00f07b18(0,lVar25,3,lVar44,3);
    uVar41 = FUN_009f1f70(7);
    if ((uVar41 & 1) == 0) {
      lVar25 = lVar44;
    }
    FUN_00f07b18(0x41200000,lVar47,0,lVar25,2);
    FUN_00f07b18(0,lVar47,3,lVar25,3);
    lVar47 = 0;
  }
  if ((*pbVar1 >> 3 & 1) == 0) {
    uVar41 = FUN_00f02540(param_1 + 0xf988);
    if ((uVar41 & 1) != 0) {
      FUN_00f07a18(0,0,param_1 + 0xf988,0);
    }
  }
  lVar44 = param_1 + 0x157d8;
  FUN_00a71f18(lVar44);
  if ((*(float *)(param_1 + 0x15820) != 1.5) || (*(float *)(param_1 + 0x15824) != 1.5)) {
    uVar39 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x15820) = uVar39;
    FUN_0091ada4(lVar44);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    if (lVar47 != 0 && ((uVar37 ^ 0xffffffff) & 1) == 0) {
      uVar65 = 0xc1a00000;
      uVar39 = 1;
      uVar40 = 3;
LAB_00a3d124:
      FUN_00f07b18(uVar65,lVar44,uVar39,lVar47,uVar40);
      uVar39 = 5;
      uVar40 = 5;
      goto LAB_00a3d138;
    }
    if (lVar47 != 0) {
      uVar65 = 0x41a00000;
      uVar39 = 3;
      uVar40 = 1;
      goto LAB_00a3d124;
    }
  }
  else {
    lVar47 = param_1 + 0x8bc0;
    FUN_00f07b18(0x41200000,lVar44,0,lVar47,2);
    uVar39 = 1;
    uVar40 = 1;
LAB_00a3d138:
    FUN_00f07b18(0,lVar44,uVar39,lVar47,uVar40);
  }
  lVar44 = param_1 + 0x15640;
  FUN_00a33210(lVar44);
  if ((*pbVar1 >> 4 & 1) == 0) {
    FUN_00a3171c(lVar44,0);
    FUN_00f07b18(0,lVar44,1,uVar38,1);
    if ((uVar37 & 1) == 0) {
      uVar65 = 0x42000000;
      uVar39 = 2;
      lVar47 = lVar23;
    }
    else {
      if ((*(byte *)(param_1 + 0x1fc1c) >> 2 & 1) == 0) {
        uVar41 = FUN_00f02540(param_1 + 0xf988);
        if ((uVar41 & 1) != 0) {
          uVar65 = 0x42000000;
          uVar39 = 2;
          lVar47 = param_1 + 0xf988;
          goto LAB_00a3d25c;
        }
        lVar47 = 0xfa78;
      }
      else {
        lVar47 = 0x1fb98;
      }
      uVar65 = 0x42000000;
      uVar39 = 2;
      lVar47 = param_1 + lVar47;
    }
  }
  else {
    FUN_00a3171c(lVar44,1);
    lVar47 = param_1 + 0xfa78;
    FUN_00f07b18(0x42000000,lVar44,3,lVar47,1);
    uVar65 = 0;
    uVar39 = 0;
  }
LAB_00a3d25c:
  FUN_00f07b18(uVar65,lVar44,0,lVar47,uVar39);
  bVar49 = *pbVar1;
  lVar44 = param_1 + 0x2c8;
  if ((bVar49 >> 4 & 1) == 0) {
    *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) | 4;
    FUN_00a2f0b0(lVar44);
    uVar41 = FUN_0092ead0(fStack_bc,uStack_c0);
    fVar67 = 1.25;
    if ((uVar41 & 1) == 0) {
      fVar67 = 1.38;
    }
    uStack_d0 = 0x4341f3b643fc8d1b;
    FUN_00f13f18(lVar44,&uStack_d0);
    if ((*(float *)(param_1 + 0x310) != fVar67) || (*(float *)(param_1 + 0x314) != fVar67)) {
      *(float *)(param_1 + 0x310) = fVar67;
      *(float *)(param_1 + 0x314) = fVar67;
      FUN_0091ada4(lVar44);
    }
    FUN_00a2f0b0(lVar44);
    FUN_00f13238(param_1 + 0x170);
    FUN_00f07940(0,0,param_1 + 0x170,6,uVar38,6);
    bVar49 = *pbVar1;
  }
  else {
    *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) & 0xfffffffb;
  }
  uVar38 = *(undefined8 *)(param_1 + 0x8848);
  if ((bVar49 >> 4 & 1) == 0) {
    uVar41 = 0x43fa0000;
    FUN_00f13f08(0x44480000,uVar38);
    FUN_00f07b18(0x43820000,uVar38,3,param_1,3);
    uVar65 = 0xc2700000;
    uVar39 = 2;
  }
  else {
    uVar41 = 0x43890000;
    FUN_00f13f08(0x44480000,uVar38);
    FUN_00f07b18(0x41f00000,uVar38,3,lVar23,1);
    uVar65 = 0x41800000;
    uVar39 = 0;
    lVar44 = lVar23;
  }
  FUN_00f07b18(uVar65,uVar38,uVar39,lVar44,0);
  uVar42 = FUN_0092e750();
  bVar49 = 0;
  if ((uVar42 & 1) != 0) {
    bVar49 = 0;
    if ((*pbVar1 >> 4 & 1) == 0) {
      bVar49 = (*pbVar1 >> 4 ^ 0xff) & 1;
    }
  }
  lVar44 = param_1 + 0x19a68;
  FUN_00a44298(lVar44,bVar49 ^ 1);
  FUN_00a44354(lVar44);
  if (bVar49 == 0) {
    if ((*pbVar1 >> 4 & 1) == 0) {
      uStack_d0._4_4_ = 213.0;
      fVar67 = (float)FUN_00f080a0(param_1,3,param_1 + 0x170,3);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,fVar67 + -20.0);
      FUN_00f13f18(lVar44,&uStack_d0);
      uVar41 = 0xc1200000;
      FUN_00f07a18(0x41200000,lVar44,3);
      goto LAB_00a3d564;
    }
    uStack_d0 = 0x4355000044ac8000;
    FUN_00f13f18(lVar44,&uStack_d0);
    FUN_00f07b18(0xc3ff0000,lVar44,1,lVar45,3);
    FUN_00f07b18(0,lVar44,2,lVar45,2);
    FUN_00a442cc(lVar44,1);
  }
  else {
    uStack_d0 = CONCAT44(uStack_d0._4_4_,0x43550000);
    lVar45 = lVar23;
    if ((uVar37 & 1) == 0) {
      lVar45 = param_1 + 0xf778;
    }
    FUN_00f080a0(lVar45,3,param_1,3);
    uStack_d0 = CONCAT44((float)uVar41 + -20.0,(float)uStack_d0);
    FUN_00f13f18(lVar44,&uStack_d0);
    if ((uVar37 & 1) == 0) {
      lVar45 = param_1 + 0xfa78;
      FUN_00f07b18(0x41200000,lVar44,0,lVar45,2);
    }
    else {
      FUN_00f07b18(0x41200000,lVar44,0,lVar23,2);
      lVar45 = lVar23;
    }
    FUN_00f07b18(0,lVar44,3,lVar45,3);
LAB_00a3d564:
    FUN_00a442cc(lVar44,0);
    FUN_00a442dc(lVar44,0);
  }
  lVar45 = param_1 + 0xc460;
  FUN_00a3863c(lVar45);
  bVar36 = FUN_0092e750();
  bVar49 = *pbVar1;
  lVar47 = lVar44;
  if (((bVar49 >> 4 & 1) == 0) && ((bVar36 & (bVar49 & 0x10) == 0) == 0)) {
    uStack_d0 = CONCAT44(uStack_d0._4_4_,0x42c00000);
    lVar25 = lVar23;
    if ((uVar37 & 1) == 0) {
      lVar25 = param_1 + 0xf778;
    }
    FUN_00f080a0(lVar25,3,lVar44,0);
    uStack_d0 = CONCAT44((float)uVar41 + -20.0,(float)uStack_d0);
    FUN_00f13f18(lVar45,&uStack_d0);
    if ((*pbVar1 >> 4 & 1) == 0) {
      FUN_00f07b18(0xc1200000,lVar45,2,lVar44,0);
      uVar38 = 3;
      uVar39 = 3;
      uVar65 = 0;
    }
    else {
      FUN_00f07b18(0x41200000,lVar45,3,param_1 + 0xfa78,1);
      uVar65 = 0;
      uVar38 = 0;
      uVar39 = 0;
      lVar47 = param_1 + 0xfa78;
    }
  }
  else {
    if ((bVar49 >> 4 & 1) == 0) {
      fVar67 = (float)FUN_00f080a0(lVar44,2,param_1 + 0x170,3);
      fVar68 = -20.0;
    }
    else {
      fVar67 = (float)FUN_00f13e54(lVar44);
      fVar68 = -62.0;
    }
    uVar41 = (ulong)(uint)fVar68;
    uStack_d0 = CONCAT44(0x42c00000,fVar67 + fVar68);
    FUN_00f13f18(lVar45,&uStack_d0);
    if ((*pbVar1 >> 4 & 1) == 0) {
      FUN_00f07b18(0x41200000,lVar45,3,lVar44,1);
      uVar38 = 2;
      uVar39 = 2;
      uVar65 = 0;
      lVar47 = param_1;
    }
    else {
      FUN_00f07b18(0xc1000000,lVar45,2,lVar44,0);
      uVar65 = 0xc2780000;
      uVar38 = 1;
      uVar39 = 1;
    }
  }
  FUN_00f07b18(uVar65,lVar45,uVar38,lVar47,uVar39);
  puVar30 = (undefined3 *)(param_1 + 0xc3a0);
  lVar47 = param_1 + 0x8878;
  if ((*pbVar1 >> 4 & 1) == 0) {
    *(short *)puVar30 = (short)*puVar30;
    *(byte *)(param_1 + 0xc3a2) = *(byte *)(param_1 + 0xc3a2) | 1;
    if ((*(float *)(param_1 + 0x88c8) != 1.0) || (*(float *)(param_1 + 0x88cc) != 1.0)) {
      uVar38 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0x88c8) = uVar38;
      FUN_0091ada4(lVar47);
    }
    fVar67 = fStack_bc;
    fVar68 = (float)FUN_00f01c20(param_1 + 0x170);
    fVar66 = -40.0;
    FUN_00f01c20(param_1 + 0x170);
    FUN_00f13f08(((fVar67 - fVar68) + -40.0) * 0.5 + -40.0,fVar66 * 0.9,lVar47);
    fVar67 = (float)FUN_00f13e54(lVar47);
    fVar68 = 30.0;
    FUN_00f13e54(lVar47);
    fVar66 = fVar67 + 30.0 + -65.0;
    fVar67 = fVar68 + 10.0 + -65.0;
    if (fVar67 <= 0.0) {
      fVar67 = 0.0;
    }
    FUN_00f10644(0x42820000,fVar66,0,0x42820000,fVar67,0,param_1 + 0x1f800);
    FUN_00f10644(0x42820000,fVar66,0,0x42820000,fVar67,0,param_1 + 0x1f950);
    uVar50 = *(uint *)(param_1 + 0x1f884);
    if ((uVar50 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x1f884) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
      FUN_0091ada4(param_1 + 0x1f800);
    }
    uVar50 = *(uint *)(param_1 + 0x1f9d4);
    if ((uVar50 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x1f9d4) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
      FUN_0091ada4(param_1 + 0x1f950);
    }
    FUN_00f13f08(fStack_bc,uStack_c0,lVar18);
    uVar41 = 0xc1200000;
    FUN_00f07a18(lVar47,2);
    FUN_00a6f3a4(lVar47);
  }
  else {
    *(short *)puVar30 = (short)*puVar30;
    lVar25 = param_1 + 0xfa78;
    lVar27 = param_1 + 0x8bc0;
    *(byte *)(param_1 + 0xc3a2) = *(byte *)(param_1 + 0xc3a2) & 0xfe;
    uVar65 = FUN_00f0e700(lVar25);
    uStack_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar27,&uStack_d0);
    lVar29 = param_1 + 0x8cc0;
    uVar65 = FUN_00f0e700(lVar25);
    uStack_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar29,&uStack_d0);
    lVar31 = param_1 + 0x8ec0;
    uVar65 = FUN_00f0e700(lVar25);
    uStack_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar31,&uStack_d0);
    lVar32 = param_1 + 0x8ac0;
    uVar65 = FUN_00f0e700(lVar25);
    uStack_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar32,&uStack_d0);
    lVar33 = param_1 + 0x8fc0;
    FUN_00f0e700(lVar25);
    FUN_00a52010(lVar33);
    FUN_00f07b18(0x41a00000,lVar27,0,lVar46,2);
    FUN_00f07b18(0xc1200000,lVar27,1,param_1,1);
    FUN_00f07b18(0xc1200000,lVar29,1,lVar27,3);
    FUN_00f07b18(0,lVar29,5,lVar27,5);
    FUN_00f07b18(0x41200000,lVar31,0,param_1 + 0xfc68,2);
    FUN_00f07b18(0,lVar31,3,param_1 + 0xfc68,3);
    FUN_00f07b18(0x41200000,lVar32,0,lVar31,2);
    FUN_00f07b18(0,lVar32,3,lVar31,3);
    FUN_00f07b18(0x41200000,param_1 + 0xf988,0,lVar32,2);
    FUN_00f07b18(0,param_1 + 0xf988,3,lVar32,3);
    *(byte *)(param_1 + 0xb7b5) = *(byte *)(param_1 + 0xb7b5) & 0xbf;
    *(undefined4 *)(param_1 + 0xb7b0) = 0x43af0000;
    FUN_00a51df8(lVar33);
    FUN_00f07b18(0xc2c80000,lVar33,1,lVar29,3);
    FUN_00f07b18(0,lVar33,5,lVar29,5);
  }
  if ((*pbVar1 >> 4 & 1) != 0) {
    lVar46 = param_1 + 0x228e0;
    FUN_00c86a2c(lVar46);
    FUN_00f07b18(0xc1a00000,lVar46,2,lVar43,0);
    FUN_00f07b18(0xc2f00000,lVar46,1,param_1,1);
  }
  uVar50 = 0;
  do {
    uVar38 = FUN_00c86764(lVar43,uVar50);
    FUN_00f07b18(-((float)uVar50 * 80.0 + 196.0),uVar38,2,lVar43,0);
    FUN_00f07b18(0xc3340000,uVar38,1,lVar43,1);
    uVar50 = uVar50 + 1;
  } while (uVar50 != 3);
  iVar51 = 0;
  do {
    uVar38 = FUN_00a45a44(lVar44,iVar51);
    FUN_00f07b18(0xc3440000,uVar38,2,lVar43,0);
    FUN_00f07b18(0xc3340000,uVar38,1,lVar43,1);
    fVar67 = (float)uVar41;
    iVar51 = iVar51 + 1;
  } while (iVar51 != 6);
  lVar43 = param_1 + 0x228e0;
  uVar41 = FUN_00c86b44(lVar43);
  if ((uVar41 & 1) != 0) {
    uVar38 = FUN_00c86bac(lVar43);
    FUN_00f07b18(0xc3dc0000,uVar38,1,param_1 + 0x8bc0,3);
    FUN_00f07b18(0,uVar38,0,param_1 + 0x8bc0,0);
  }
  uVar41 = FUN_00c86b54(lVar43);
  if ((uVar41 & 1) != 0) {
    uVar38 = FUN_00c86bc4(lVar43);
    FUN_00f07b18(0xc3dc0000,uVar38,1,param_1 + 0x8bc0,3);
    FUN_00f07b18(0,uVar38,0,param_1 + 0x8bc0,0);
  }
  lVar43 = param_1 + 0x13fc0;
  uVar41 = FUN_00f02540(lVar43);
  if ((uVar41 & 1) != 0) {
    uStack_d0 = 0x42e00000442a0000;
    FUN_00f13f18(lVar43,&uStack_d0);
    FUN_00a35f34(lVar43);
    fVar67 = 0.0;
    FUN_00f07940(0,lVar43,4,param_1,4);
  }
  uVar41 = FUN_00f02540(lVar2);
  if ((uVar41 & 1) != 0) {
    uVar41 = FUN_0093d96c();
    fVar67 = 220.0;
    fVar68 = 220.0;
    if ((uVar41 & 1) == 0) {
      fVar68 = 120.0;
    }
    uVar41 = FUN_00a496b0(lVar2);
    if ((uVar41 & 1) == 0) {
      uVar41 = FUN_00a496a4(lVar2);
      if ((uVar41 & 1) == 0) {
        if ((*(float *)(param_1 + 0xfdb8) != 0.0) || (*(float *)(param_1 + 0xfdbc) != 0.0)) {
          *(undefined4 *)(param_1 + 0xfdbc) = 0;
          *(undefined4 *)(param_1 + 0xfdb8) = 0;
          FUN_0091ada4(lVar2);
        }
        if ((*(float *)(param_1 + 0xfdb0) != *pfVar48) || (*(float *)(param_1 + 0xfdb4) != *pfVar22)
           ) {
          *(float *)(param_1 + 0xfdb0) = *pfVar48;
          *(float *)(param_1 + 0xfdb4) = *pfVar22;
          FUN_0091ada4(lVar2);
        }
        FUN_00f13f08(fVar68,0x42240000,lVar2);
        fVar66 = *(float *)(param_1 + 0x13668);
        fVar68 = (float)FUN_00f01c20(lVar21);
        pfVar48 = (float *)(param_1 + 0xfda8);
        fVar72 = *pfVar48;
        fVar67 = *(float *)(param_1 + 0x1366c);
        fVar66 = fVar66 + fVar68;
        lVar43 = 0xfdac;
      }
      else {
        uVar50 = *(uint *)(param_1 + 0xfdec);
        if ((uVar50 >> 2 & 1) == 0) {
          *(uint *)(param_1 + 0xfdec) = uVar50 | 4;
        }
        if ((*(float *)(param_1 + 0xfdb8) != 0.5) || (*(float *)(param_1 + 0xfdbc) != 0.0)) {
          *(undefined8 *)(param_1 + 0xfdb8) = 0x3f000000;
          FUN_0091ada4(lVar2);
        }
        if ((*(float *)(param_1 + 0xfda8) != fStack_bc * 0.5) ||
           (*(float *)(param_1 + 0xfdac) != 10.0)) {
          *(float *)(param_1 + 0xfda8) = fStack_bc * 0.5;
          *(float *)(param_1 + 0xfdac) = 10.0;
          FUN_0091ada4(lVar2);
        }
        FUN_00f13f08(fVar68 + 600.0,0x42b60000,lVar2);
        fVar67 = *pfVar22;
        lVar43 = 0xfdb4;
        fVar66 = *pfVar48;
        pfVar48 = (float *)(param_1 + 0xfdb0);
        fVar72 = *pfVar48;
      }
      if ((fVar72 != fVar66) || (*(float *)(param_1 + lVar43) != fVar67)) {
        *pfVar48 = fVar66;
        *(float *)(param_1 + lVar43) = fVar67;
        FUN_0091ada4(lVar2);
      }
    }
    else {
      *(uint *)(param_1 + 0xfdec) = *(uint *)(param_1 + 0xfdec) & 0xfffffffb;
    }
  }
  plVar52 = *(long **)(param_1 + 0x15618);
  fVar68 = (float)FUN_00a4c16c(lVar20);
  lVar43 = FUN_00965ecc(param_1);
  fVar68 = (fVar68 - (float)*(undefined8 *)(lVar43 + 8)) / (float)*(undefined8 *)(lVar43 + 0x10);
  fVar67 = (fVar67 - (float)((ulong)*(undefined8 *)(lVar43 + 8) >> 0x20)) /
           (float)((ulong)*(undefined8 *)(lVar43 + 0x10) >> 0x20);
  if ((*(float *)(plVar52 + 8) != fVar68) || (*(float *)((long)plVar52 + 0x44) != fVar67)) {
    plVar52[8] = CONCAT44(fVar67,fVar68);
    FUN_0091ada4(plVar52);
  }
  uStack_d0 = 0x3f800000;
  (**(code **)(*plVar52 + 0x28))(plVar52,&uStack_d0);
  (**(code **)(*plVar52 + 0x90))(plVar52);
  fVar68 = (float)FUN_00f01c20(lVar47);
  FUN_00ceace8();
  uVar41 = FUN_00ceaf74();
  fVar66 = -50.0;
  fVar67 = 1.0;
  if ((uVar41 & 1) == 0) {
    fVar67 = 0.8;
  }
  lVar43 = param_1 + 0xc3a8;
  FUN_00a6fa98(lVar47);
  FUN_00f13f08(fVar68 * fVar67 + -50.0,fVar66 + -20.0,lVar43);
  if ((*(float *)(param_1 + 0xc3f8) != *(float *)(param_1 + 0x88c8)) ||
     (*(float *)(param_1 + 0xc3fc) != *(float *)(param_1 + 0x88cc))) {
    *(float *)(param_1 + 0xc3f8) = *(float *)(param_1 + 0x88c8);
    *(float *)(param_1 + 0xc3fc) = *(float *)(param_1 + 0x88cc);
    FUN_0091ada4(lVar43);
  }
  uVar38 = NEON_fmov(0x41200000,4);
  fVar67 = (float)*(undefined8 *)(param_1 + 35000) + (float)uVar38;
  fVar68 = (float)((ulong)*(undefined8 *)(param_1 + 35000) >> 0x20) + (float)((ulong)uVar38 >> 0x20)
  ;
  if ((*(float *)(param_1 + 0xc3e8) != fVar67) || (*(float *)(param_1 + 0xc3ec) != fVar68)) {
    *(ulong *)(param_1 + 0xc3e8) = CONCAT44(fVar68,fVar67);
    FUN_0091ada4(lVar43);
  }
  lVar43 = param_1 + 0x15c40;
  if ((*pbVar1 >> 4 & 1) == 0) {
    lVar46 = param_1 + 0x8bc0;
    FUN_00f07b18(0xc1200000,lVar43,2,lVar46,0);
    uVar38 = 4;
    uVar39 = 4;
  }
  else {
    lVar46 = param_1 + 0xfa78;
    FUN_00f07b18(0x41200000,lVar43,3,lVar46,1);
    uVar38 = 0;
    uVar39 = 0;
  }
  FUN_00f07b18(0,lVar43,uVar38,lVar46,uVar39);
  uVar50 = *(uint *)(param_1 + 0x1fc1c);
  lVar43 = param_1 + 0x1fb98;
  if ((uVar50 & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x1fc1c) = uVar50 & 0xffff807f | 0x3f80;
    FUN_0091ada4(lVar43);
  }
  if ((*(byte *)(param_1 + 0x1f0e4) >> 2 & 1) == 0) {
    uVar65 = 0x428c0000;
    fVar67 = -20.0;
    uVar38 = 1;
LAB_00a3e248:
    FUN_00f07a18(fVar67,uVar65,lVar43,uVar38);
  }
  else {
    if ((*pbVar1 >> 4 & 1) != 0) {
      fVar67 = (float)(**(code **)(*(long *)(param_1 + 0x8ac0) + 0x50))();
      fVar67 = fVar67 + 20.0;
      uVar65 = 0xc1200000;
      uVar38 = 3;
      goto LAB_00a3e248;
    }
    uVar65 = 3;
    if ((uVar37 & 1) != 0) {
      uVar65 = 1;
    }
    FUN_00f07b18(0x41200000,lVar43,0,param_1 + 0xfa78,2);
    FUN_00f07b18(0,lVar43,uVar65,param_1 + 0xfa78,uVar65);
  }
  FUN_00a3863c(lVar45);
  FUN_00a44354(lVar44);
  FUN_00a4917c(lVar2);
  FUN_00a49f5c(lVar23);
  FUN_00a58df0(lVar21);
  FUN_00a4b9a0(lVar20);
  if ((*pfVar3 != fVar71) || (*pfVar4 != fVar75)) {
    *pfVar3 = fVar71;
    *pfVar4 = fVar75;
    FUN_0091ada4(param_1 + 0x199a0);
  }
  if ((*pfStack_120 != fVar74) || (*pfVar5 != fVar53)) {
    *(float *)(param_1 + 0x1f0a0) = fVar74;
    *pfVar5 = fVar53;
    FUN_0091ada4(lVar9);
  }
  if ((*pfVar16 != fVar54) || (*pfVar6 != fVar55)) {
    *(float *)(param_1 + 0x1f5e8) = fVar54;
    *pfVar6 = fVar55;
    FUN_0091ada4(param_1 + 0x1f5a8);
  }
  if ((*pfVar17 != fVar56) || (*pfVar7 != fVar57)) {
    *(float *)(param_1 + 0x1f6b0) = fVar56;
    *pfVar7 = fVar57;
    FUN_0091ada4(param_1 + 0x1f670);
  }
  if ((*pfVar19 != fVar58) || (*pfVar8 != fVar59)) {
    *(float *)(param_1 + 0x1f778) = fVar58;
    *pfVar8 = fVar59;
    FUN_0091ada4(lVar18);
  }
  if ((*pfVar10 != fVar60) || (*pfVar11 != fVar61)) {
    *pfVar10 = fVar60;
    *pfVar11 = fVar61;
    FUN_0091ada4(param_1 + 0x21a88);
  }
  if ((*pfVar12 != fVar62) || (*pfVar13 != fVar63)) {
    *pfVar12 = fVar62;
    *pfVar13 = fVar63;
    FUN_0091ada4(param_1 + 0x21b90);
  }
  if ((*pfVar14 != fVar64) || (*pfVar15 != fVar73)) {
    *pfVar14 = fVar64;
    *pfVar15 = fVar73;
    FUN_0091ada4(param_1 + 0x22688);
  }
LAB_00a3e430:
  if (*(long *)(lVar35 + 0x28) == lStack_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00a3bbf0(long param_1)

{
  byte *pbVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  uint *puVar24;
  long lVar25;
  float *pfVar26;
  long lVar27;
  uint *puVar28;
  long lVar29;
  undefined3 *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int *piVar34;
  long lVar35;
  byte bVar36;
  uint uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  float *pfVar48;
  byte bVar49;
  uint uVar50;
  int iVar51;
  long *plVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float *pfStack_120;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  int iStack_b8;
  int iStack_b4;
  long lStack_b0;
  
  lVar35 = tpidr_el0;
  lStack_b0 = *(long *)(lVar35 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x22a68);
  if ((*pbVar1 & 1) == 0) goto LAB_00a3e430;
  FUN_00967268(&iStack_b4,0,&iStack_b8,0);
  FUN_00f00298(&fStack_bc,&uStack_c0);
  FUN_00f0025c(&uStack_c4,&uStack_c8);
  uVar38 = FUN_00f00438("root-layer");
  FUN_00f13f08(fStack_bc,uStack_c0,param_1);
  uVar37 = FUN_00a3e47c(param_1);
  lVar2 = param_1 + 0xfd68;
  FUN_00a4917c();
  pfVar3 = (float *)(param_1 + 0x199e0);
  pfVar4 = (float *)(param_1 + 0x199e4);
  pfVar5 = (float *)(param_1 + 0x1f0a4);
  pfVar6 = (float *)(param_1 + 0x1f5ec);
  fVar71 = *pfVar3;
  fVar75 = *pfVar4;
  fVar74 = *(float *)(param_1 + 0x1f0a0);
  fVar53 = *pfVar5;
  fVar54 = *(float *)(param_1 + 0x1f5e8);
  pfVar7 = (float *)(param_1 + 0x1f6b4);
  fVar55 = *pfVar6;
  fVar56 = *(float *)(param_1 + 0x1f6b0);
  pfVar8 = (float *)(param_1 + 0x1f77c);
  fVar57 = *pfVar7;
  fVar58 = *(float *)(param_1 + 0x1f778);
  lVar9 = param_1 + 0x1f060;
  pfVar10 = (float *)(param_1 + 0x21ac8);
  fVar59 = *pfVar8;
  pfVar11 = (float *)(param_1 + 0x21acc);
  fVar60 = *pfVar10;
  fVar61 = *pfVar11;
  pfVar12 = (float *)(param_1 + 0x21bd0);
  pfVar13 = (float *)(param_1 + 0x21bd4);
  fVar62 = *pfVar12;
  pfVar14 = (float *)(param_1 + 0x226c8);
  fVar63 = *pfVar13;
  fVar64 = *pfVar14;
  pfVar15 = (float *)(param_1 + 0x226cc);
  fVar73 = *pfVar15;
  if ((fVar71 != DAT_03218ef8) || (fVar67 = fVar74, fVar75 != _DAT_03218efc)) {
    *(ulong *)pfVar3 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4();
    fVar67 = *(float *)(param_1 + 0x1f0a0);
  }
  pfStack_120 = (float *)(param_1 + 0x1f0a0);
  if ((fVar67 != DAT_03218ef8) || (*pfVar5 != _DAT_03218efc)) {
    *(ulong *)pfStack_120 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar9);
  }
  pfVar16 = (float *)(param_1 + 0x1f5e8);
  if ((*pfVar16 != DAT_03218ef8) || (*pfVar6 != _DAT_03218efc)) {
    *(ulong *)pfVar16 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0x1f5a8);
  }
  pfVar17 = (float *)(param_1 + 0x1f6b0);
  lVar18 = param_1 + 0x1f738;
  if ((*pfVar17 != DAT_03218ef8) || (*pfVar7 != _DAT_03218efc)) {
    *(ulong *)pfVar17 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0x1f670);
  }
  pfVar19 = (float *)(param_1 + 0x1f778);
  if ((*pfVar19 != DAT_03218ef8) || (*pfVar8 != _DAT_03218efc)) {
    *(ulong *)pfVar19 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar18);
  }
  FUN_00f13f08(fStack_bc,uStack_c0,lVar9);
  FUN_00f13f08(uStack_c4,uStack_c8,param_1 + 0xb8);
  FUN_00f07940(0,0,param_1 + 0xb8,0,uVar38,0);
  uVar39 = FUN_00bbf3e0(param_1 + 0x21b50);
  FUN_00f07a18(0x44048000,0xc3b90000,uVar39,3);
  FUN_00c06e84(*(undefined8 *)(param_1 + 0x21b58));
  FUN_00a3e4c8(param_1);
  FUN_00c07334(0x447a0000,*(undefined8 *)(param_1 + 0x21b78));
  uVar39 = FUN_00bbf3c8(param_1 + 0x21b70);
  FUN_00f13f08(fStack_bc * 0.5,uStack_c0);
  FUN_00f07940(0,0,uVar39,1,param_1,1);
  uVar39 = FUN_00bbf3e0(param_1 + 0x21b70);
  FUN_00f07a18(0xc3eb0000,0x43e10000,uVar39,1);
  lVar45 = param_1 + 0x21c78;
  FUN_00f13f08(0x43a00000,0x43a00000,lVar45);
  FUN_00f07940(0xc2f00000,0xc2a00000,lVar45,2,param_1,2);
  lVar43 = param_1 + 0x21c58;
  uVar39 = FUN_00bbf3c8(lVar43);
  FUN_00f13f08(0x43a00000,0x43a00000);
  FUN_00f07940(0,0,uVar39,8,lVar45,8);
  uVar40 = FUN_00bbf3e0(lVar43);
  FUN_00f07940(0,0,uVar40,8,uVar39,8);
  FUN_00f07940(0,0,*(undefined8 *)(param_1 + 0x21c60),0,param_1,0);
  lVar20 = param_1 + 0x21f10;
  FUN_00f13f08(0x43080000,0x43080000,lVar20);
  lVar46 = param_1 + 0x221b8;
  FUN_00f13f08(0x43080000,0x43080000,lVar46);
  FUN_00c81a84(lVar20);
  FUN_00c81a84(lVar46);
  uVar39 = FUN_00bbf3c8(lVar43);
  FUN_00f07940(0xc2a00000,0,lVar20,8,uVar39,3);
  uVar39 = FUN_00bbf3c8(lVar43);
  FUN_00f07940(0x41200000,0xc2100000,lVar46,8,uVar39,1);
  lVar43 = param_1 + 0x22750;
  FUN_00c865f0(lVar43);
  uVar69 = 0;
  FUN_00f07940(0,lVar43,2,lVar45,2);
  uVar39 = FUN_00c86754(lVar43,0);
  uVar65 = FUN_00f080a0(uVar39,0,uVar38,2);
  uStack_d0 = CONCAT44(uVar69,uVar65);
  FUN_00f13f18(param_1 + 0x22460,&uStack_d0);
  uVar39 = FUN_00c86754(lVar43,1);
  uVar65 = FUN_00f080a0(uVar39,0,uVar38,2);
  uStack_d0 = CONCAT44(uVar69,uVar65);
  FUN_00f13f18(param_1 + 0x22518,&uStack_d0);
  uVar39 = FUN_00c86754(lVar43,2);
  uVar65 = FUN_00f080a0(uVar39,0,uVar38,2);
  uStack_d0 = CONCAT44(uVar69,uVar65);
  FUN_00f13f18(param_1 + 0x225d0,&uStack_d0);
  FUN_00f07940(0,0,param_1 + 0x22460,2,uVar38,2);
  FUN_00f07940(0,0,param_1 + 0x22518,2,uVar38,2);
  FUN_00f07940(0,0,param_1 + 0x225d0,2,uVar38,2);
  lVar20 = param_1 + 0x10a48;
  FUN_00a4b9a0(lVar20);
  if ((*(float *)(param_1 + 0x10a98) != 1.0) || (*(float *)(param_1 + 0x10a9c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x10a98) = 0x3f800000;
    FUN_0091ada4(lVar20);
  }
  uStack_d0 = 0x42a0000043e90000;
  FUN_00f13f18(lVar20,&uStack_d0);
  if ((*(float *)(param_1 + 0x10a90) != 1.5) || (*(float *)(param_1 + 0x10a94) != 1.5)) {
    uVar39 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x10a90) = uVar39;
    FUN_0091ada4(lVar20);
  }
  uVar41 = FUN_0093d96c();
  fVar67 = 30.0;
  if ((uVar41 & 1) == 0) {
    fVar67 = 40.0;
  }
  uVar41 = FUN_0093d96c();
  fVar68 = 75.0;
  if ((uVar41 & 1) == 0) {
    fVar68 = 65.0;
  }
  fVar66 = (float)FUN_00f01c20(lVar20);
  fVar72 = (float)iStack_b8;
  fVar66 = fVar67 + fVar66 + fVar72;
  FUN_00f01c20(lVar20);
  fVar67 = (fVar72 + 10.0) - fVar68;
  fVar66 = fVar66 - fVar68;
  if (fVar67 <= 0.0) {
    fVar67 = 0.0;
  }
  lVar46 = param_1 + 0x1f128;
  FUN_00f10644(fVar68,fVar66,0,0,fVar67,fVar68);
  lVar21 = param_1 + 0x1f278;
  FUN_00f10644(fVar68,fVar66,0,0,fVar67,fVar68,lVar21);
  uVar50 = *(uint *)(param_1 + 0x1f1ac);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f1ac) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar46);
  }
  uVar50 = *(uint *)(param_1 + 0x1f2fc);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f2fc) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar21);
  }
  FUN_00f07a18(0,0xc0c00000,lVar20,1);
  FUN_00f07940(0,0xc0c00000,lVar46,1,uVar38,1);
  fVar67 = 0.0;
  FUN_00f07940(0,lVar21,8,lVar46,8);
  lVar21 = param_1 + 0x13628;
  FUN_00a58df0(lVar21);
  pfVar48 = (float *)(param_1 + 0x13670);
  pfVar22 = (float *)(param_1 + 0x13674);
  if ((*pfVar48 != 1.5) || (*pfVar22 != 1.5)) {
    uVar39 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)pfVar48 = uVar39;
    FUN_0091ada4(lVar21);
  }
  fVar68 = (float)FUN_00f01c20(lVar21);
  uStack_d0._4_4_ = fVar67 + 0.0;
  piVar34 = &iStack_b4;
  if ((uVar37 & 1) == 0) {
    piVar34 = &iStack_b8;
  }
  lVar44 = param_1 + 0x1f3c8;
  uStack_d0._0_4_ = fVar68 + -2.0 + (float)*piVar34;
  FUN_00f13f18(lVar44,&uStack_d0);
  lVar23 = param_1 + 0x1f4b8;
  FUN_00f13f08(uStack_d0._4_4_,uStack_d0._4_4_,lVar23);
  uVar50 = *(uint *)(param_1 + 0x136ac);
  if ((uVar50 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x136ac) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x5f80;
    FUN_0091ada4(lVar21);
  }
  uVar50 = *(uint *)(param_1 + 0x1f44c);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f44c) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar44);
  }
  uVar50 = *(uint *)(param_1 + 0x1f53c);
  if ((uVar50 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f53c) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
    FUN_0091ada4(lVar23);
  }
  if (((uVar37 & 1) == 0) || ((*pbVar1 >> 4 & 1) != 0)) {
    FUN_00f07940(0,0,lVar44,0,uVar38,0);
    FUN_00f07b18(0,lVar23,3,lVar44,1);
    FUN_00f07b18(0,lVar23,5,lVar44,5);
    *(byte *)(param_1 + 0x1f590) = *(byte *)(param_1 + 0x1f590) | 1;
    fVar67 = (float)iStack_b4 * 0.5 + 40.0;
  }
  else {
    FUN_00f07b18(0,lVar44,0,lVar46,2);
    FUN_00f07b18(0,lVar44,1,lVar46,1);
    FUN_00f07b18(0x80000000,lVar23,1,lVar44,3);
    FUN_00f07b18(0,lVar23,5,lVar44,5);
    *(byte *)(param_1 + 0x1f590) = *(byte *)(param_1 + 0x1f590) & 0xfe;
    fVar67 = (float)iStack_b8 * -0.5;
  }
  fVar68 = 0.0;
  FUN_00f07940(fVar67,lVar21,8,lVar44,8);
  lVar23 = param_1 + 0xf430;
  uVar65 = FUN_00a49fe0(lVar23);
  uStack_d0 = CONCAT44(fVar68,uVar65);
  FUN_00f13f18(lVar23,&uStack_d0);
  fVar67 = (float)FUN_00a3e5c0(param_1);
  if ((*(float *)(param_1 + 0xf478) != fVar67) || (*(float *)(param_1 + 0xf47c) != fVar68)) {
    *(float *)(param_1 + 0xf478) = fVar67;
    *(float *)(param_1 + 0xf47c) = fVar68;
    FUN_0091ada4(lVar23);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    if ((uVar37 & 1) == 0) {
      FUN_00f07b18(0x41200000,lVar23,0,lVar46,2);
      uVar70 = 0xc1200000;
      uVar39 = 1;
      uVar40 = 1;
      goto LAB_00a3c91c;
    }
    fVar68 = 10.0;
    FUN_00f07940(lVar23,0,param_1,0);
  }
  else {
    uVar70 = 0x41200000;
    FUN_00f07b18(0x41200000,lVar23,0,lVar44,2);
    uVar39 = 3;
    uVar40 = 3;
LAB_00a3c91c:
    FUN_00f07b18(uVar70,lVar23,uVar39,param_1,uVar40);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    uVar41 = FUN_009f1f70(8);
    puVar24 = (uint *)(param_1 + 0xf904);
    uVar50 = *puVar24;
    lVar25 = param_1 + 0xf880;
    if ((uVar41 & 1) == 0) {
      *puVar24 = uVar50 & 0xfffffffb;
    }
    else {
      *puVar24 = uVar50 | 4;
      if ((uVar50 & 0x7f80) != 0x5f80) {
        *puVar24 = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x5f84;
        FUN_0091ada4(lVar25);
      }
      pfVar26 = (float *)(param_1 + 0xf8c8);
      fVar68 = *pfVar26;
      if ((fVar68 != 1.35) || (fVar68 = *(float *)(param_1 + 0xf8cc), fVar68 != 1.35)) {
        pfVar26[0] = 1.35;
        pfVar26[1] = 1.35;
        FUN_0091ada4(lVar25);
      }
      if ((*(float *)(param_1 + 0xf8d0) != 0.5) || (*(float *)(param_1 + 0xf8d4) != 0.5)) {
        *(undefined8 *)(param_1 + 0xf8d0) = 0x3f0000003f000000;
        FUN_0091ada4(lVar25);
      }
    }
    lVar27 = param_1 + 0xfa78;
    uVar65 = FUN_00f0eaf4(lVar27);
    uStack_d0 = CONCAT44(fVar68,uVar65);
    FUN_00f13f18(lVar27,&uStack_d0);
    pfVar26 = (float *)(param_1 + 0xfac0);
    if ((*pfVar26 != 1.35) || (*(float *)(param_1 + 0xfac4) != 1.35)) {
      pfVar26[0] = 1.35;
      pfVar26[1] = 1.35;
      FUN_0091ada4(lVar27);
    }
    if ((*(float *)(param_1 + 0xfac8) != 0.5) || (*(float *)(param_1 + 0xfacc) != 0.5)) {
      *(undefined8 *)(param_1 + 0xfac8) = 0x3f0000003f000000;
      FUN_0091ada4(lVar27);
    }
    lVar47 = param_1 + 0xfc68;
    uVar65 = FUN_00f0eaf4(lVar47);
    uStack_d0 = CONCAT44(fVar68,uVar65);
    FUN_00f13f18(lVar47,&uStack_d0);
    pfVar26 = (float *)(param_1 + 0xfcb0);
    if ((*pfVar26 != 1.35) || (*(float *)(param_1 + 0xfcb4) != 1.35)) {
      pfVar26[0] = 1.35;
      pfVar26[1] = 1.35;
      FUN_0091ada4(lVar47);
    }
    if ((*(float *)(param_1 + 0xfcb8) != 0.5) || (*(float *)(param_1 + 0xfcbc) != 0.5)) {
      *(undefined8 *)(param_1 + 0xfcb8) = 0x3f0000003f000000;
      FUN_0091ada4(lVar47);
    }
    uVar41 = FUN_009f1f70(7);
    puVar28 = (uint *)(param_1 + 0xf7fc);
    lVar29 = param_1 + 0xf778;
    if ((uVar41 & 1) == 0) {
      *puVar28 = *puVar28 & 0xfffffffb;
    }
    else {
      *puVar28 = *puVar28 | 4;
      uVar65 = FUN_00f0eaf4(lVar29);
      uStack_d0 = CONCAT44(fVar68,uVar65);
      FUN_00f13f18(lVar29,&uStack_d0);
      uVar50 = *puVar28;
      if ((uVar50 & 0x7f80) != 0x5f80) {
        *puVar28 = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x5f80;
        FUN_0091ada4(lVar29);
      }
      pfVar26 = (float *)(param_1 + 0xf7c0);
      if ((*pfVar26 != 1.35) || (*(float *)(param_1 + 0xf7c4) != 1.35)) {
        pfVar26[0] = 1.35;
        pfVar26[1] = 1.35;
        FUN_0091ada4(lVar29);
      }
      if ((*(float *)(param_1 + 0xf7c8) != 0.5) || (*(float *)(param_1 + 0xf7cc) != 0.5)) {
        *(undefined8 *)(param_1 + 0xf7c8) = 0x3f0000003f000000;
        FUN_0091ada4(lVar29);
      }
    }
    FUN_00f07b18(0x41400000,lVar27,0,lVar44,2);
    if ((uVar37 & 1) == 0) {
      FUN_00f07b18(0x41400000,lVar27,3,param_1,3);
      FUN_00f07b18(0x41a00000,lVar47,3,lVar27,1);
      FUN_00f07b18(0,lVar47,5,lVar27,5);
      if ((*(byte *)puVar24 >> 2 & 1) != 0) {
        FUN_00f07b18(0x41a00000,lVar25,3,lVar47,1);
        FUN_00f07b18(0,lVar25,5,lVar47,5);
        lVar47 = lVar25;
      }
      if ((*(byte *)puVar28 >> 2 & 1) != 0) {
        FUN_00f07b18(0x41a00000,lVar29,3,lVar47,1);
        FUN_00f07b18(0,lVar29,5,lVar47,5);
        lVar47 = lVar29;
      }
    }
    else {
      FUN_00f07b18(0xc1400000,lVar27,1,param_1,1);
      lVar44 = lVar27;
      if ((*(byte *)(param_1 + 0xfcec) >> 2 & 1) != 0) {
        FUN_00f07b18(0xc1a00000,lVar47,1,lVar27,3);
        FUN_00f07b18(0,lVar47,5,lVar27,5);
        lVar44 = lVar47;
      }
      if ((*(byte *)puVar24 >> 2 & 1) != 0) {
        FUN_00f07b18(0xc1a00000,lVar25,1,lVar44,3);
        FUN_00f07b18(0,lVar25,5,lVar44,5);
        lVar44 = lVar25;
      }
      lVar47 = lVar44;
      if ((*(byte *)puVar28 >> 2 & 1) != 0) {
        FUN_00f07b18(0xc1a00000,lVar29,1,lVar44,3);
        FUN_00f07b18(0,lVar29,5,lVar44,5);
        lVar47 = lVar29;
      }
    }
    FUN_00f07b18(0x41a00000,param_1 + 0xf988,0,lVar27,2);
    FUN_00f07b18(0,param_1 + 0xf988,1,lVar27,1);
    uVar65 = FUN_00f0e700(lVar27);
    uStack_d0 = CONCAT44(fVar68,uVar65);
    FUN_00f13f18(param_1 + 0xfb78,&uStack_d0);
    FUN_00f07940(0,0,param_1 + 0xfb78,8,lVar27,8);
  }
  else {
    lVar44 = param_1 + 0xfa78;
    *(uint *)(param_1 + 0xf904) = *(uint *)(param_1 + 0xf904) & 0xfffffffb;
    uVar65 = 0x43280000;
    FUN_00f13f08(0x43280000,0x43280000,lVar44);
    if ((*(float *)(param_1 + 0xfac0) != 1.0) || (*(float *)(param_1 + 0xfac4) != 1.0)) {
      uVar39 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0xfac0) = uVar39;
      FUN_0091ada4(lVar44);
    }
    lVar47 = param_1 + 0xfc68;
    FUN_00f13f08(0x43280000,lVar47);
    if ((*(float *)(param_1 + 0xfcb0) != 1.0) || (*(float *)(param_1 + 0xfcb4) != 1.0)) {
      uVar39 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0xfcb0) = uVar39;
      FUN_0091ada4(lVar47);
    }
    uVar41 = FUN_009f1f70(7);
    puVar24 = (uint *)(param_1 + 0xf7fc);
    lVar25 = param_1 + 0xf778;
    if ((uVar41 & 1) == 0) {
      *puVar24 = *puVar24 & 0xfffffffb;
    }
    else {
      *puVar24 = *puVar24 | 4;
      uVar69 = FUN_00f0e700(lVar44);
      uStack_d0 = CONCAT44(uVar65,uVar69);
      FUN_00f13f18(lVar25,&uStack_d0);
      if ((*(float *)(param_1 + 0xf7c0) != 1.0) || (*(float *)(param_1 + 0xf7c4) != 1.0)) {
        uVar39 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0xf7c0) = uVar39;
        FUN_0091ada4(lVar25);
      }
    }
    FUN_00f07b18(0x41200000,lVar44,0,lVar23,2);
    FUN_00f07b18(0,lVar44,3,lVar23,3);
    FUN_00f07b18(0x41200000,lVar25,0,lVar44,2);
    FUN_00f07b18(0,lVar25,3,lVar44,3);
    uVar41 = FUN_009f1f70(7);
    if ((uVar41 & 1) == 0) {
      lVar25 = lVar44;
    }
    FUN_00f07b18(0x41200000,lVar47,0,lVar25,2);
    FUN_00f07b18(0,lVar47,3,lVar25,3);
    lVar47 = 0;
  }
  if ((*pbVar1 >> 3 & 1) == 0) {
    uVar41 = FUN_00f02540(param_1 + 0xf988);
    if ((uVar41 & 1) != 0) {
      FUN_00f07a18(0,0,param_1 + 0xf988,0);
    }
  }
  lVar44 = param_1 + 0x157d8;
  FUN_00a71f18(lVar44);
  if ((*(float *)(param_1 + 0x15820) != 1.5) || (*(float *)(param_1 + 0x15824) != 1.5)) {
    uVar39 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x15820) = uVar39;
    FUN_0091ada4(lVar44);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    if (lVar47 != 0 && ((uVar37 ^ 0xffffffff) & 1) == 0) {
      uVar65 = 0xc1a00000;
      uVar39 = 1;
      uVar40 = 3;
LAB_00a3d124:
      FUN_00f07b18(uVar65,lVar44,uVar39,lVar47,uVar40);
      uVar39 = 5;
      uVar40 = 5;
      goto LAB_00a3d138;
    }
    if (lVar47 != 0) {
      uVar65 = 0x41a00000;
      uVar39 = 3;
      uVar40 = 1;
      goto LAB_00a3d124;
    }
  }
  else {
    lVar47 = param_1 + 0x8bc0;
    FUN_00f07b18(0x41200000,lVar44,0,lVar47,2);
    uVar39 = 1;
    uVar40 = 1;
LAB_00a3d138:
    FUN_00f07b18(0,lVar44,uVar39,lVar47,uVar40);
  }
  lVar44 = param_1 + 0x15640;
  FUN_00a33210(lVar44);
  if ((*pbVar1 >> 4 & 1) == 0) {
    FUN_00a3171c(lVar44,0);
    FUN_00f07b18(0,lVar44,1,uVar38,1);
    if ((uVar37 & 1) == 0) {
      uVar65 = 0x42000000;
      uVar39 = 2;
      lVar47 = lVar23;
    }
    else {
      if ((*(byte *)(param_1 + 0x1fc1c) >> 2 & 1) == 0) {
        uVar41 = FUN_00f02540(param_1 + 0xf988);
        if ((uVar41 & 1) != 0) {
          uVar65 = 0x42000000;
          uVar39 = 2;
          lVar47 = param_1 + 0xf988;
          goto LAB_00a3d25c;
        }
        lVar47 = 0xfa78;
      }
      else {
        lVar47 = 0x1fb98;
      }
      uVar65 = 0x42000000;
      uVar39 = 2;
      lVar47 = param_1 + lVar47;
    }
  }
  else {
    FUN_00a3171c(lVar44,1);
    lVar47 = param_1 + 0xfa78;
    FUN_00f07b18(0x42000000,lVar44,3,lVar47,1);
    uVar65 = 0;
    uVar39 = 0;
  }
LAB_00a3d25c:
  FUN_00f07b18(uVar65,lVar44,0,lVar47,uVar39);
  bVar49 = *pbVar1;
  lVar44 = param_1 + 0x2c8;
  if ((bVar49 >> 4 & 1) == 0) {
    *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) | 4;
    FUN_00a2f0b0(lVar44);
    uVar41 = FUN_0092ead0(fStack_bc,uStack_c0);
    fVar67 = 1.25;
    if ((uVar41 & 1) == 0) {
      fVar67 = 1.38;
    }
    uStack_d0 = 0x4341f3b643fc8d1b;
    FUN_00f13f18(lVar44,&uStack_d0);
    if ((*(float *)(param_1 + 0x310) != fVar67) || (*(float *)(param_1 + 0x314) != fVar67)) {
      *(float *)(param_1 + 0x310) = fVar67;
      *(float *)(param_1 + 0x314) = fVar67;
      FUN_0091ada4(lVar44);
    }
    FUN_00a2f0b0(lVar44);
    FUN_00f13238(param_1 + 0x170);
    FUN_00f07940(0,0,param_1 + 0x170,6,uVar38,6);
    bVar49 = *pbVar1;
  }
  else {
    *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) & 0xfffffffb;
  }
  uVar38 = *(undefined8 *)(param_1 + 0x8848);
  if ((bVar49 >> 4 & 1) == 0) {
    uVar41 = 0x43fa0000;
    FUN_00f13f08(0x44480000,uVar38);
    FUN_00f07b18(0x43820000,uVar38,3,param_1,3);
    uVar65 = 0xc2700000;
    uVar39 = 2;
  }
  else {
    uVar41 = 0x43890000;
    FUN_00f13f08(0x44480000,uVar38);
    FUN_00f07b18(0x41f00000,uVar38,3,lVar23,1);
    uVar65 = 0x41800000;
    uVar39 = 0;
    lVar44 = lVar23;
  }
  FUN_00f07b18(uVar65,uVar38,uVar39,lVar44,0);
  uVar42 = FUN_0092e750();
  bVar49 = 0;
  if ((uVar42 & 1) != 0) {
    bVar49 = 0;
    if ((*pbVar1 >> 4 & 1) == 0) {
      bVar49 = (*pbVar1 >> 4 ^ 0xff) & 1;
    }
  }
  lVar44 = param_1 + 0x19a68;
  FUN_00a44298(lVar44,bVar49 ^ 1);
  FUN_00a44354(lVar44);
  if (bVar49 == 0) {
    if ((*pbVar1 >> 4 & 1) == 0) {
      uStack_d0._4_4_ = 213.0;
      fVar67 = (float)FUN_00f080a0(param_1,3,param_1 + 0x170,3);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,fVar67 + -20.0);
      FUN_00f13f18(lVar44,&uStack_d0);
      uVar41 = 0xc1200000;
      FUN_00f07a18(0x41200000,lVar44,3);
      goto LAB_00a3d564;
    }
    uStack_d0 = 0x4355000044ac8000;
    FUN_00f13f18(lVar44,&uStack_d0);
    FUN_00f07b18(0xc3ff0000,lVar44,1,lVar45,3);
    FUN_00f07b18(0,lVar44,2,lVar45,2);
    FUN_00a442cc(lVar44,1);
  }
  else {
    uStack_d0 = CONCAT44(uStack_d0._4_4_,0x43550000);
    lVar45 = lVar23;
    if ((uVar37 & 1) == 0) {
      lVar45 = param_1 + 0xf778;
    }
    FUN_00f080a0(lVar45,3,param_1,3);
    uStack_d0 = CONCAT44((float)uVar41 + -20.0,(float)uStack_d0);
    FUN_00f13f18(lVar44,&uStack_d0);
    if ((uVar37 & 1) == 0) {
      lVar45 = param_1 + 0xfa78;
      FUN_00f07b18(0x41200000,lVar44,0,lVar45,2);
    }
    else {
      FUN_00f07b18(0x41200000,lVar44,0,lVar23,2);
      lVar45 = lVar23;
    }
    FUN_00f07b18(0,lVar44,3,lVar45,3);
LAB_00a3d564:
    FUN_00a442cc(lVar44,0);
    FUN_00a442dc(lVar44,0);
  }
  lVar45 = param_1 + 0xc460;
  FUN_00a3863c(lVar45);
  bVar36 = FUN_0092e750();
  bVar49 = *pbVar1;
  lVar47 = lVar44;
  if (((bVar49 >> 4 & 1) == 0) && ((bVar36 & (bVar49 & 0x10) == 0) == 0)) {
    uStack_d0 = CONCAT44(uStack_d0._4_4_,0x42c00000);
    lVar25 = lVar23;
    if ((uVar37 & 1) == 0) {
      lVar25 = param_1 + 0xf778;
    }
    FUN_00f080a0(lVar25,3,lVar44,0);
    uStack_d0 = CONCAT44((float)uVar41 + -20.0,(float)uStack_d0);
    FUN_00f13f18(lVar45,&uStack_d0);
    if ((*pbVar1 >> 4 & 1) == 0) {
      FUN_00f07b18(0xc1200000,lVar45,2,lVar44,0);
      uVar38 = 3;
      uVar39 = 3;
      uVar65 = 0;
    }
    else {
      FUN_00f07b18(0x41200000,lVar45,3,param_1 + 0xfa78,1);
      uVar65 = 0;
      uVar38 = 0;
      uVar39 = 0;
      lVar47 = param_1 + 0xfa78;
    }
  }
  else {
    if ((bVar49 >> 4 & 1) == 0) {
      fVar67 = (float)FUN_00f080a0(lVar44,2,param_1 + 0x170,3);
      fVar68 = -20.0;
    }
    else {
      fVar67 = (float)FUN_00f13e54(lVar44);
      fVar68 = -62.0;
    }
    uVar41 = (ulong)(uint)fVar68;
    uStack_d0 = CONCAT44(0x42c00000,fVar67 + fVar68);
    FUN_00f13f18(lVar45,&uStack_d0);
    if ((*pbVar1 >> 4 & 1) == 0) {
      FUN_00f07b18(0x41200000,lVar45,3,lVar44,1);
      uVar38 = 2;
      uVar39 = 2;
      uVar65 = 0;
      lVar47 = param_1;
    }
    else {
      FUN_00f07b18(0xc1000000,lVar45,2,lVar44,0);
      uVar65 = 0xc2780000;
      uVar38 = 1;
      uVar39 = 1;
    }
  }
  FUN_00f07b18(uVar65,lVar45,uVar38,lVar47,uVar39);
  puVar30 = (undefined3 *)(param_1 + 0xc3a0);
  lVar47 = param_1 + 0x8878;
  if ((*pbVar1 >> 4 & 1) == 0) {
    *(short *)puVar30 = (short)*puVar30;
    *(byte *)(param_1 + 0xc3a2) = *(byte *)(param_1 + 0xc3a2) | 1;
    if ((*(float *)(param_1 + 0x88c8) != 1.0) || (*(float *)(param_1 + 0x88cc) != 1.0)) {
      uVar38 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0x88c8) = uVar38;
      FUN_0091ada4(lVar47);
    }
    fVar67 = fStack_bc;
    fVar68 = (float)FUN_00f01c20(param_1 + 0x170);
    fVar66 = -40.0;
    FUN_00f01c20(param_1 + 0x170);
    FUN_00f13f08(((fVar67 - fVar68) + -40.0) * 0.5 + -40.0,fVar66 * 0.9,lVar47);
    fVar67 = (float)FUN_00f13e54(lVar47);
    fVar68 = 30.0;
    FUN_00f13e54(lVar47);
    fVar66 = fVar67 + 30.0 + -65.0;
    fVar67 = fVar68 + 10.0 + -65.0;
    if (fVar67 <= 0.0) {
      fVar67 = 0.0;
    }
    FUN_00f10644(0x42820000,fVar66,0,0x42820000,fVar67,0,param_1 + 0x1f800);
    FUN_00f10644(0x42820000,fVar66,0,0x42820000,fVar67,0,param_1 + 0x1f950);
    uVar50 = *(uint *)(param_1 + 0x1f884);
    if ((uVar50 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x1f884) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
      FUN_0091ada4(param_1 + 0x1f800);
    }
    uVar50 = *(uint *)(param_1 + 0x1f9d4);
    if ((uVar50 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x1f9d4) = uVar50 & 0xffff8000 | uVar50 & 0x7f | 0x2600;
      FUN_0091ada4(param_1 + 0x1f950);
    }
    FUN_00f13f08(fStack_bc,uStack_c0,lVar18);
    uVar41 = 0xc1200000;
    FUN_00f07a18(lVar47,2);
    FUN_00a6f3a4(lVar47);
  }
  else {
    *(short *)puVar30 = (short)*puVar30;
    lVar25 = param_1 + 0xfa78;
    lVar27 = param_1 + 0x8bc0;
    *(byte *)(param_1 + 0xc3a2) = *(byte *)(param_1 + 0xc3a2) & 0xfe;
    uVar65 = FUN_00f0e700(lVar25);
    uStack_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar27,&uStack_d0);
    lVar29 = param_1 + 0x8cc0;
    uVar65 = FUN_00f0e700(lVar25);
    uStack_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar29,&uStack_d0);
    lVar31 = param_1 + 0x8ec0;
    uVar65 = FUN_00f0e700(lVar25);
    uStack_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar31,&uStack_d0);
    lVar32 = param_1 + 0x8ac0;
    uVar65 = FUN_00f0e700(lVar25);
    uStack_d0 = CONCAT44((int)uVar41,uVar65);
    FUN_00f13f18(lVar32,&uStack_d0);
    lVar33 = param_1 + 0x8fc0;
    FUN_00f0e700(lVar25);
    FUN_00a52010(lVar33);
    FUN_00f07b18(0x41a00000,lVar27,0,lVar46,2);
    FUN_00f07b18(0xc1200000,lVar27,1,param_1,1);
    FUN_00f07b18(0xc1200000,lVar29,1,lVar27,3);
    FUN_00f07b18(0,lVar29,5,lVar27,5);
    FUN_00f07b18(0x41200000,lVar31,0,param_1 + 0xfc68,2);
    FUN_00f07b18(0,lVar31,3,param_1 + 0xfc68,3);
    FUN_00f07b18(0x41200000,lVar32,0,lVar31,2);
    FUN_00f07b18(0,lVar32,3,lVar31,3);
    FUN_00f07b18(0x41200000,param_1 + 0xf988,0,lVar32,2);
    FUN_00f07b18(0,param_1 + 0xf988,3,lVar32,3);
    *(byte *)(param_1 + 0xb7b5) = *(byte *)(param_1 + 0xb7b5) & 0xbf;
    *(undefined4 *)(param_1 + 0xb7b0) = 0x43af0000;
    FUN_00a51df8(lVar33);
    FUN_00f07b18(0xc2c80000,lVar33,1,lVar29,3);
    FUN_00f07b18(0,lVar33,5,lVar29,5);
  }
  if ((*pbVar1 >> 4 & 1) != 0) {
    lVar46 = param_1 + 0x228e0;
    FUN_00c86a2c(lVar46);
    FUN_00f07b18(0xc1a00000,lVar46,2,lVar43,0);
    FUN_00f07b18(0xc2f00000,lVar46,1,param_1,1);
  }
  uVar50 = 0;
  do {
    uVar38 = FUN_00c86764(lVar43,uVar50);
    FUN_00f07b18(-((float)uVar50 * 80.0 + 196.0),uVar38,2,lVar43,0);
    FUN_00f07b18(0xc3340000,uVar38,1,lVar43,1);
    uVar50 = uVar50 + 1;
  } while (uVar50 != 3);
  iVar51 = 0;
  do {
    uVar38 = FUN_00a45a44(lVar44,iVar51);
    FUN_00f07b18(0xc3440000,uVar38,2,lVar43,0);
    FUN_00f07b18(0xc3340000,uVar38,1,lVar43,1);
    fVar67 = (float)uVar41;
    iVar51 = iVar51 + 1;
  } while (iVar51 != 6);
  lVar43 = param_1 + 0x228e0;
  uVar41 = FUN_00c86b44(lVar43);
  if ((uVar41 & 1) != 0) {
    uVar38 = FUN_00c86bac(lVar43);
    FUN_00f07b18(0xc3dc0000,uVar38,1,param_1 + 0x8bc0,3);
    FUN_00f07b18(0,uVar38,0,param_1 + 0x8bc0,0);
  }
  uVar41 = FUN_00c86b54(lVar43);
  if ((uVar41 & 1) != 0) {
    uVar38 = FUN_00c86bc4(lVar43);
    FUN_00f07b18(0xc3dc0000,uVar38,1,param_1 + 0x8bc0,3);
    FUN_00f07b18(0,uVar38,0,param_1 + 0x8bc0,0);
  }
  lVar43 = param_1 + 0x13fc0;
  uVar41 = FUN_00f02540(lVar43);
  if ((uVar41 & 1) != 0) {
    uStack_d0 = 0x42e00000442a0000;
    FUN_00f13f18(lVar43,&uStack_d0);
    FUN_00a35f34(lVar43);
    fVar67 = 0.0;
    FUN_00f07940(0,lVar43,4,param_1,4);
  }
  uVar41 = FUN_00f02540(lVar2);
  if ((uVar41 & 1) != 0) {
    uVar41 = FUN_0093d96c();
    fVar67 = 220.0;
    fVar68 = 220.0;
    if ((uVar41 & 1) == 0) {
      fVar68 = 120.0;
    }
    uVar41 = FUN_00a496b0(lVar2);
    if ((uVar41 & 1) == 0) {
      uVar41 = FUN_00a496a4(lVar2);
      if ((uVar41 & 1) == 0) {
        if ((*(float *)(param_1 + 0xfdb8) != 0.0) || (*(float *)(param_1 + 0xfdbc) != 0.0)) {
          *(undefined4 *)(param_1 + 0xfdbc) = 0;
          *(undefined4 *)(param_1 + 0xfdb8) = 0;
          FUN_0091ada4(lVar2);
        }
        if ((*(float *)(param_1 + 0xfdb0) != *pfVar48) || (*(float *)(param_1 + 0xfdb4) != *pfVar22)
           ) {
          *(float *)(param_1 + 0xfdb0) = *pfVar48;
          *(float *)(param_1 + 0xfdb4) = *pfVar22;
          FUN_0091ada4(lVar2);
        }
        FUN_00f13f08(fVar68,0x42240000,lVar2);
        fVar66 = *(float *)(param_1 + 0x13668);
        fVar68 = (float)FUN_00f01c20(lVar21);
        pfVar48 = (float *)(param_1 + 0xfda8);
        fVar72 = *pfVar48;
        fVar67 = *(float *)(param_1 + 0x1366c);
        fVar66 = fVar66 + fVar68;
        lVar43 = 0xfdac;
      }
      else {
        uVar50 = *(uint *)(param_1 + 0xfdec);
        if ((uVar50 >> 2 & 1) == 0) {
          *(uint *)(param_1 + 0xfdec) = uVar50 | 4;
        }
        if ((*(float *)(param_1 + 0xfdb8) != 0.5) || (*(float *)(param_1 + 0xfdbc) != 0.0)) {
          *(undefined8 *)(param_1 + 0xfdb8) = 0x3f000000;
          FUN_0091ada4(lVar2);
        }
        if ((*(float *)(param_1 + 0xfda8) != fStack_bc * 0.5) ||
           (*(float *)(param_1 + 0xfdac) != 10.0)) {
          *(float *)(param_1 + 0xfda8) = fStack_bc * 0.5;
          *(float *)(param_1 + 0xfdac) = 10.0;
          FUN_0091ada4(lVar2);
        }
        FUN_00f13f08(fVar68 + 600.0,0x42b60000,lVar2);
        fVar67 = *pfVar22;
        lVar43 = 0xfdb4;
        fVar66 = *pfVar48;
        pfVar48 = (float *)(param_1 + 0xfdb0);
        fVar72 = *pfVar48;
      }
      if ((fVar72 != fVar66) || (*(float *)(param_1 + lVar43) != fVar67)) {
        *pfVar48 = fVar66;
        *(float *)(param_1 + lVar43) = fVar67;
        FUN_0091ada4(lVar2);
      }
    }
    else {
      *(uint *)(param_1 + 0xfdec) = *(uint *)(param_1 + 0xfdec) & 0xfffffffb;
    }
  }
  plVar52 = *(long **)(param_1 + 0x15618);
  fVar68 = (float)FUN_00a4c16c(lVar20);
  lVar43 = FUN_00965ecc(param_1);
  fVar68 = (fVar68 - (float)*(undefined8 *)(lVar43 + 8)) / (float)*(undefined8 *)(lVar43 + 0x10);
  fVar67 = (fVar67 - (float)((ulong)*(undefined8 *)(lVar43 + 8) >> 0x20)) /
           (float)((ulong)*(undefined8 *)(lVar43 + 0x10) >> 0x20);
  if ((*(float *)(plVar52 + 8) != fVar68) || (*(float *)((long)plVar52 + 0x44) != fVar67)) {
    plVar52[8] = CONCAT44(fVar67,fVar68);
    FUN_0091ada4(plVar52);
  }
  uStack_d0 = 0x3f800000;
  (**(code **)(*plVar52 + 0x28))(plVar52,&uStack_d0);
  (**(code **)(*plVar52 + 0x90))(plVar52);
  fVar68 = (float)FUN_00f01c20(lVar47);
  FUN_00ceace8();
  uVar41 = FUN_00ceaf74();
  fVar66 = -50.0;
  fVar67 = 1.0;
  if ((uVar41 & 1) == 0) {
    fVar67 = 0.8;
  }
  lVar43 = param_1 + 0xc3a8;
  FUN_00a6fa98(lVar47);
  FUN_00f13f08(fVar68 * fVar67 + -50.0,fVar66 + -20.0,lVar43);
  if ((*(float *)(param_1 + 0xc3f8) != *(float *)(param_1 + 0x88c8)) ||
     (*(float *)(param_1 + 0xc3fc) != *(float *)(param_1 + 0x88cc))) {
    *(float *)(param_1 + 0xc3f8) = *(float *)(param_1 + 0x88c8);
    *(float *)(param_1 + 0xc3fc) = *(float *)(param_1 + 0x88cc);
    FUN_0091ada4(lVar43);
  }
  uVar38 = NEON_fmov(0x41200000,4);
  fVar67 = (float)*(undefined8 *)(param_1 + 35000) + (float)uVar38;
  fVar68 = (float)((ulong)*(undefined8 *)(param_1 + 35000) >> 0x20) + (float)((ulong)uVar38 >> 0x20)
  ;
  if ((*(float *)(param_1 + 0xc3e8) != fVar67) || (*(float *)(param_1 + 0xc3ec) != fVar68)) {
    *(ulong *)(param_1 + 0xc3e8) = CONCAT44(fVar68,fVar67);
    FUN_0091ada4(lVar43);
  }
  lVar43 = param_1 + 0x15c40;
  if ((*pbVar1 >> 4 & 1) == 0) {
    lVar46 = param_1 + 0x8bc0;
    FUN_00f07b18(0xc1200000,lVar43,2,lVar46,0);
    uVar38 = 4;
    uVar39 = 4;
  }
  else {
    lVar46 = param_1 + 0xfa78;
    FUN_00f07b18(0x41200000,lVar43,3,lVar46,1);
    uVar38 = 0;
    uVar39 = 0;
  }
  FUN_00f07b18(0,lVar43,uVar38,lVar46,uVar39);
  uVar50 = *(uint *)(param_1 + 0x1fc1c);
  lVar43 = param_1 + 0x1fb98;
  if ((uVar50 & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x1fc1c) = uVar50 & 0xffff807f | 0x3f80;
    FUN_0091ada4(lVar43);
  }
  if ((*(byte *)(param_1 + 0x1f0e4) >> 2 & 1) == 0) {
    uVar65 = 0x428c0000;
    fVar67 = -20.0;
    uVar38 = 1;
LAB_00a3e248:
    FUN_00f07a18(fVar67,uVar65,lVar43,uVar38);
  }
  else {
    if ((*pbVar1 >> 4 & 1) != 0) {
      fVar67 = (float)(**(code **)(*(long *)(param_1 + 0x8ac0) + 0x50))();
      fVar67 = fVar67 + 20.0;
      uVar65 = 0xc1200000;
      uVar38 = 3;
      goto LAB_00a3e248;
    }
    uVar65 = 3;
    if ((uVar37 & 1) != 0) {
      uVar65 = 1;
    }
    FUN_00f07b18(0x41200000,lVar43,0,param_1 + 0xfa78,2);
    FUN_00f07b18(0,lVar43,uVar65,param_1 + 0xfa78,uVar65);
  }
  FUN_00a3863c(lVar45);
  FUN_00a44354(lVar44);
  FUN_00a4917c(lVar2);
  FUN_00a49f5c(lVar23);
  FUN_00a58df0(lVar21);
  FUN_00a4b9a0(lVar20);
  if ((*pfVar3 != fVar71) || (*pfVar4 != fVar75)) {
    *pfVar3 = fVar71;
    *pfVar4 = fVar75;
    FUN_0091ada4(param_1 + 0x199a0);
  }
  if ((*pfStack_120 != fVar74) || (*pfVar5 != fVar53)) {
    *(float *)(param_1 + 0x1f0a0) = fVar74;
    *pfVar5 = fVar53;
    FUN_0091ada4(lVar9);
  }
  if ((*pfVar16 != fVar54) || (*pfVar6 != fVar55)) {
    *(float *)(param_1 + 0x1f5e8) = fVar54;
    *pfVar6 = fVar55;
    FUN_0091ada4(param_1 + 0x1f5a8);
  }
  if ((*pfVar17 != fVar56) || (*pfVar7 != fVar57)) {
    *(float *)(param_1 + 0x1f6b0) = fVar56;
    *pfVar7 = fVar57;
    FUN_0091ada4(param_1 + 0x1f670);
  }
  if ((*pfVar19 != fVar58) || (*pfVar8 != fVar59)) {
    *(float *)(param_1 + 0x1f778) = fVar58;
    *pfVar8 = fVar59;
    FUN_0091ada4(lVar18);
  }
  if ((*pfVar10 != fVar60) || (*pfVar11 != fVar61)) {
    *pfVar10 = fVar60;
    *pfVar11 = fVar61;
    FUN_0091ada4(param_1 + 0x21a88);
  }
  if ((*pfVar12 != fVar62) || (*pfVar13 != fVar63)) {
    *pfVar12 = fVar62;
    *pfVar13 = fVar63;
    FUN_0091ada4(param_1 + 0x21b90);
  }
  if ((*pfVar14 != fVar64) || (*pfVar15 != fVar73)) {
    *pfVar14 = fVar64;
    *pfVar15 = fVar73;
    FUN_0091ada4(param_1 + 0x22688);
  }
LAB_00a3e430:
  if (*(long *)(lVar35 + 0x28) == lStack_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

