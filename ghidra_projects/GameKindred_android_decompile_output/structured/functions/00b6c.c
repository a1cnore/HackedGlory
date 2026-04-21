// functions/00b6c — 9 functions
#include "libGameKindred.h"




void thunk_FUN_00b6caa0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined **ppuStack_130;
  undefined1 auStack_128 [40];
  long lStack_100;
  undefined8 uStack_e0;
  void *pvStack_d8;
  byte bStack_d0;
  void *pvStack_c0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_88;
  ulong uStack_80;
  void *pvStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  void *pvStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&ppuStack_130);
  uVar2 = FUN_00e6ce7c("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_TOOLTIP",0);
  thunk_FUN_00e7051c(&uStack_80,uVar2);
  FUN_008fcdb8(&bStack_70,&DAT_0320ffa8);
  uStack_58 = 1;
  uStack_54 = 0x41a00000;
  FUN_009c82b4(auStack_128,&uStack_80);
  if ((bStack_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    uStack_80 = 0;
    pvStack_78 = (void *)0x0;
  }
  lStack_100 = param_1 + 0x4150;
  uStack_88 = 2;
  uStack_a0 = 0x3f666666;
  uVar3 = FUN_0092ea9c();
  uStack_9c = 0x44af0000;
  if ((uVar3 & 1) == 0) {
    uStack_9c = 0x447a0000;
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&uStack_80,"skillTierDecayInfo");
  FUN_009badc0(uVar2,&uStack_80,&ppuStack_130);
  if ((uStack_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,bStack_70));
  }
  ppuStack_130 = &PTR_FUN_027de7f0;
  if ((bStack_d0 & 1) != 0) {
    operator_delete(pvStack_c0);
  }
  if (pvStack_d8 != (void *)0x0) {
    operator_delete__(pvStack_d8);
    uStack_e0 = 0;
    pvStack_d8 = (void *)0x0;
  }
  FUN_009c8464(auStack_128,1);
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6c130(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  uVar12 = (**(code **)(*param_3 + 0x48))();
  uVar4 = FUN_0092ea9c();
  FUN_00f13f08(uVar12,param_2 * 0.5,param_3 + 0x19);
  FUN_00f07940(0,0,param_3 + 0x19,6,param_3,6);
  fVar13 = 1000.0;
  plVar1 = param_3 + 0x37;
  fVar15 = (float)uVar12 * 0.5;
  fVar9 = 50.0;
  fVar11 = fVar13;
  if ((uVar4 & 1) == 0) {
    fVar9 = 100.0;
    fVar11 = 800.0;
  }
  FUN_00b1e834(plVar1);
  fVar13 = fVar13 * 0.5;
  fVar9 = fVar9 + fVar13;
  if ((*(float *)(param_3 + 0x6a0) != fVar15) ||
     (fVar13 = *(float *)((long)param_3 + 0x3504), fVar13 != fVar9)) {
    *(float *)(param_3 + 0x6a0) = fVar15;
    *(float *)((long)param_3 + 0x3504) = fVar9;
    FUN_0091ada4(param_3 + 0x698);
  }
  local_90 = 0x3f0000003f000000;
  (**(code **)(param_3[0x698] + 0x28))(param_3 + 0x698,&local_90);
  if (*(char *)((long)param_3 + 0x4c64) == '\0') {
    uVar5 = FUN_00a07558();
    lVar6 = FUN_00a0766c(uVar5,*(undefined4 *)((long)param_3 + 0xc4));
    fVar17 = *(float *)((long)param_3 + 0x3504);
    fVar16 = fVar15 - fVar11 * 0.5;
    FUN_00b1e834(plVar1);
    plVar2 = param_3 + 0x1bc;
    fVar9 = fVar13 * 0.5;
    FUN_00f01c10(plVar2);
    fVar10 = *(float *)(lVar6 + 0x1c);
    if (*(float *)(param_3 + 0x98c) <= 0.0) {
      fVar14 = *(float *)(lVar6 + 0x20);
      iVar7 = 1000;
      iVar8 = 0;
    }
    else {
      if (fVar10 <= 0.0) {
        iVar7 = 1000;
      }
      else {
        iVar7 = (int)(fVar10 / *(float *)(param_3 + 0x98c));
      }
      fVar14 = *(float *)(lVar6 + 0x20);
      iVar8 = (int)fVar10;
    }
    FUN_00b1cb48(fVar11,0x42580000,plVar2,0,iVar7,iVar8,(int)fVar10,(int)fVar14,0);
    fVar9 = fVar17 + fVar9 + fVar13 * 0.5;
    if ((*(float *)(param_3 + 0x1c4) != fVar16) || (*(float *)((long)param_3 + 0xe24) != fVar9)) {
      *(float *)(param_3 + 0x1c4) = fVar16;
      *(float *)((long)param_3 + 0xe24) = fVar9;
      FUN_0091ada4(plVar2);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(param_3[0x1bc] + 0x28))(plVar2,&local_90);
    fVar11 = fVar11 + fVar16 + 78.0;
    if ((*(float *)(param_3 + 0x6c2) != fVar11) || (*(float *)((long)param_3 + 0x3614) != fVar9)) {
      *(float *)(param_3 + 0x6c2) = fVar11;
      *(float *)((long)param_3 + 0x3614) = fVar9;
      FUN_0091ada4(param_3 + 0x6ba);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(param_3[0x6ba] + 0x28))(param_3 + 0x6ba,&local_90);
    fVar11 = 1690.0;
    if ((uVar4 & 1) == 0) {
      fVar11 = 1450.0;
    }
    FUN_00f0dad0(fVar11,param_3 + 0x779,1);
    fVar15 = fVar15 + fVar11 * -0.5;
    if ((*(float *)(param_3 + 0x781) != fVar15) ||
       (*(float *)((long)param_3 + 0x3c0c) != fVar9 + 128.0)) {
      *(float *)(param_3 + 0x781) = fVar15;
      *(float *)((long)param_3 + 0x3c0c) = fVar9 + 128.0;
      FUN_0091ada4(param_3 + 0x779);
    }
  }
  else {
    plVar2 = param_3 + 0x79f;
    FUN_00f0dad0((float)uVar12 * 0.8,plVar2,1);
    if ((*(float *)(param_3 + 0x7a7) != fVar15) ||
       (*(float *)((long)param_3 + 0x3d3c) != param_2 * 0.875)) {
      *(float *)(param_3 + 0x7a7) = fVar15;
      *(float *)((long)param_3 + 0x3d3c) = param_2 * 0.875;
      FUN_0091ada4(plVar2);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_90);
  }
  param_2 = param_2 - *(float *)((long)param_3 + 0x2da4);
  FUN_00f13f08(uVar12,param_2,param_3 + 0x5ac);
  FUN_00f01fcc(param_3 + 0x687,0,0,1,1);
  FUN_00ed02d8(uVar12,param_2 + 70.0,param_3 + 0x5e0);
  FUN_00b1e084(plVar1);
  FUN_00b6c538(param_3);
  if (*(long *)(lVar3 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b6c538(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_70 [2];
  undefined1 auStack_60 [4];
  float local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f00298(&local_5c,auStack_60);
  fVar6 = DAT_031339d4;
  FUN_00f01c20(param_3 + 0x4150);
  fVar7 = 8.0;
  fVar5 = param_2 * 0.5 + 8.0;
  if (*(float *)(param_3 + 0x4194) != fVar5) {
    *(float *)(param_3 + 0x4194) = fVar5;
    FUN_0091ada4(param_3 + 0x4150);
  }
  lVar1 = param_3 + 0x4af8;
  FUN_00f0d4e0(lVar1);
  if (*(float *)(param_3 + 0x4a4c) != fVar7 * 0.5) {
    *(float *)(param_3 + 0x4a4c) = fVar7 * 0.5;
    FUN_0091ada4(param_3 + 0x4a08);
  }
  FUN_00f0d4e0(lVar1);
  if (*(float *)(param_3 + 0x4b3c) != fVar7 * 0.5) {
    *(float *)(param_3 + 0x4b3c) = fVar7 * 0.5;
    FUN_0091ada4(lVar1);
  }
  fVar5 = 0.0;
  lVar1 = param_3 + 0x4940;
  FUN_00f0bc10(0,0,0x41000000,local_70);
  FUN_00f0c168(lVar1,local_70);
  (**(code **)(*(long *)(param_3 + 0x4940) + 0x90))(lVar1);
  FUN_00f01fcc(lVar1,1,0,1,1);
  if (*(float *)(param_3 + 0x4984) != fVar5 * 0.5) {
    *(float *)(param_3 + 0x4984) = fVar5 * 0.5;
    FUN_0091ada4(lVar1);
  }
  lVar1 = param_3 + 0x4748;
  FUN_00f0bc10(0,0,0x41a00000,local_70);
  FUN_00f0c168(lVar1,local_70);
  (**(code **)(*(long *)(param_3 + 0x4748) + 0x90))(lVar1);
  if (*(float *)(param_3 + 0x478c) != 16.0) {
    *(float *)(param_3 + 0x478c) = 16.0;
    FUN_0091ada4(lVar1);
  }
  lVar1 = param_3 + 0x4088;
  FUN_00f0bc10(0x41000000,0,0x41000000,local_70);
  FUN_00f0c168(lVar1,local_70);
  (**(code **)(*(long *)(param_3 + 0x4088) + 0x90))(lVar1);
  lVar2 = param_3 + 0x3f98;
  fVar5 = (float)FUN_00f01c54(lVar1,1,0,1,1);
  fVar7 = 60.0;
  FUN_00f01c54(lVar1,1,0,1,1);
  fVar7 = fVar7 + 16.0;
  FUN_00f13f08(fVar5 + 16.0 + 60.0,lVar2);
  plVar3 = (long *)(param_3 + 0x3f10);
  fVar5 = (float)FUN_00f0e700(lVar2);
  fVar8 = *(float *)(param_3 + 0xe24);
  fVar5 = (local_5c - fVar6) - fVar5;
  FUN_00f0e700(lVar2);
  fVar6 = (fVar8 - fVar7) + -200.0;
  if ((*(float *)(param_3 + 0x3f50) != fVar5) || (*(float *)(param_3 + 0x3f54) != fVar6)) {
    *(float *)(param_3 + 0x3f50) = fVar5;
    *(float *)(param_3 + 0x3f54) = fVar6;
    FUN_0091ada4(plVar3);
  }
  local_70[0] = 0;
  (**(code **)(*plVar3 + 0x28))(plVar3,local_70);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6c82c(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(local_40,
               "http://www.vainglorygame.com/news/understanding-the-autumn-season-skill-tier-compression"
              );
  FUN_009bb46c(uVar2,local_40,&DAT_0320ffa8,0,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6c8b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x4c58) = param_2;
  lVar2 = FUN_00e85318(0);
  local_40 = param_2 - lVar2 & (param_2 - lVar2 >> 0x3f ^ 0xffffffffffffffffU);
  FUN_00b25438(param_1 + 0x4af8,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6c928(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  FUN_00f0d75c(param_1 + 0x3bc8);
  fVar2 = 0.0;
  uVar3 = 0;
  if ((param_3 & 1) == 0) {
    uVar3 = 0x3f800000;
  }
  FUN_00f0d4e0(param_1 + 0x3bc8);
  uVar1 = FUN_00efef08(0,-fVar2,uVar3,FUN_00a36794);
  FUN_00f01980(param_1 + 0x2f00);
  FUN_00f022a0(param_1 + 0x2f00,uVar1);
  return;
}




void FUN_00b6c9b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("PLAYER_PROFILE_SKILLTIER_EXPLANATION_DESCRIPTION",0);
  thunk_FUN_00e7051c(&local_48,uVar2);
  FUN_00e705c8(&local_58,"[SEASON_NAME]");
  FUN_00cb488c(&local_68,0,0,0);
  FUN_00e71248(&local_48,0,&local_58,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00b6c928(param_1,&local_48,0);
  FUN_00f0490c(param_2);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6caa0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined **local_130;
  undefined1 auStack_128 [40];
  long local_100;
  undefined8 local_e0;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_88;
  ulong local_80;
  void *local_78;
  byte local_70;
  undefined7 uStack_6f;
  void *local_60;
  undefined4 local_58;
  undefined8 local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&local_130);
  uVar2 = FUN_00e6ce7c("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_TOOLTIP",0);
  thunk_FUN_00e7051c(&local_80,uVar2);
  FUN_008fcdb8(&local_70,&DAT_0320ffa8);
  local_58 = 1;
  local_54 = 0x41a00000;
  FUN_009c82b4(auStack_128,&local_80);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  local_100 = param_1 + 0x4150;
  local_88 = 2;
  local_a0 = 0x3f666666;
  uVar3 = FUN_0092ea9c();
  local_9c = 0x44af0000;
  if ((uVar3 & 1) == 0) {
    local_9c = 0x447a0000;
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&local_80,"skillTierDecayInfo");
  FUN_009badc0(uVar2,&local_80,&local_130);
  if ((local_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,local_70));
  }
  local_130 = &PTR_FUN_027de7f0;
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = 0;
    local_d8 = (void *)0x0;
  }
  FUN_009c8464(auStack_128,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6cc2c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

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
  float *pfVar17;
  char *pcVar18;
  long lVar19;
  undefined *puVar20;
  uint uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  long *plStack_2c0;
  void *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0 [4];
  undefined1 auStack_290 [16];
  undefined8 local_280;
  void *local_278;
  undefined1 auStack_270 [40];
  undefined1 auStack_248 [296];
  undefined8 local_120;
  long local_80;
  
  lVar19 = tpidr_el0;
  local_80 = *(long *)(lVar19 + 0x28);
  FUN_00f11234();
  FUN_00948cd8(param_3 + 0x34);
  FUN_00e83560(param_3 + 0x37);
  plVar1 = param_3 + 0x3a;
  *param_3 = (long)&PTR_FUN_027e5170;
  param_3[0x34] = (long)&PTR_FUN_027e5320;
  param_3[0x37] = (long)&PTR_FUN_027e56b8;
  FUN_00b30820(plVar1);
  plVar2 = param_3 + 0xfc6;
  FUN_00f017e8(plVar2);
  plVar3 = param_3 + 0xfd7;
  param_3[0xfc6] = (long)&PTR_FUN_027c1f80;
  FUN_00f0ac5c(plVar3);
  FUN_00b1f530();
  plVar4 = param_3 + 0x115d;
  FUN_00b660dc();
  plVar5 = param_3 + 0x2e1f;
  FUN_00b6b124(plVar5,0);
  plVar6 = param_3 + 0x37ac;
  FUN_00b6b124(plVar6,0);
  plVar7 = param_3 + 0x4139;
  FUN_00f1306c(plVar7);
  plVar8 = param_3 + 0x4164;
  FUN_00c939c4(plVar8,0);
  plVar9 = param_3 + 0x42de;
  FUN_00f0d160();
  plVar10 = param_3 + 0x4304;
  FUN_00f0d160(plVar10);
  FUN_00b27c04(param_3 + 0x432a,0);
  plVar11 = param_3 + 0x4347;
  FUN_00f1306c(plVar11);
  plVar12 = param_3 + 0x4372;
  FUN_00c939c4(plVar12,0);
  plVar13 = param_3 + 0x44ec;
  FUN_00f0d160();
  plVar14 = param_3 + 0x4512;
  FUN_00ac5014(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x46ac;
  FUN_00ac7e14();
  plVar16 = param_3 + 0x4bd3;
  FUN_00f0d160(plVar16);
  FUN_00e70510(param_3 + 0x4bfb);
  FUN_00e70510(param_3 + 0x4bfd);
  *(undefined1 *)(param_3 + 0x4bff) = 1;
  *(undefined4 *)((long)param_3 + 0x25ffc) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f0ad88(plVar3,plVar4,1);
  FUN_00f0ad88(plVar3,plVar5,1);
  FUN_00f0ad88(plVar3,plVar6,1);
  FUN_00f0ad88(plVar3,param_3 + 0x1003,1);
  FUN_00f0ad88(plVar3,plVar7,1);
  FUN_00f133a4(plVar7,plVar9,1);
  FUN_00f133a4(plVar7,plVar10,1);
  FUN_00f133a4(plVar7,plVar8,1);
  FUN_00f0ad88(plVar3,plVar11,1);
  FUN_00f133a4(plVar11,plVar12,1);
  FUN_00f133a4(plVar11,plVar13,1);
  FUN_00f133a4(plVar11,plVar14,1);
  FUN_00f0ad88(plVar3,plVar16,1);
  FUN_00f0ad88(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x432a,1);
  FUN_00f112f0(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0x1000] = (long)plVar4;
  param_3[0x1001] = (long)plVar5;
  param_3[0x1002] = (long)plVar6;
  local_2d8 = 0;
  uStack_2d0 = 0;
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_0090ea30(&local_2d8,uVar22);
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_0090ea30(&local_2d8,uVar22);
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_0090ea30(&local_2d8,uVar22);
  FUN_00b89d24(0x3e99999a,plVar4,1,4,1);
  local_2a0[0] = FUN_00f048a4("UI::EVENT_RENAME_PLAYER_HANDLE");
  plVar2 = param_3 + 0x115e;
  local_2c8 = (undefined **)FUN_00b6d98c;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2b8 = (void *)0x0;
  plStack_2c0 = param_3;
  FUN_009693a0(plVar2,&local_2c8);
  local_2a0[0] = DAT_03210f58;
  local_2c8 = (undefined **)FUN_00b6d9c4;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2b8 = (void *)0x0;
  plStack_2c0 = param_3;
  FUN_009693a0(plVar2,&local_2c8);
  local_2a0[0] = DAT_03210f84;
  local_2c8 = (undefined **)FUN_00b6d9c4;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2b8 = (void *)0x0;
  plStack_2c0 = param_3;
  FUN_009693a0(plVar2,&local_2c8);
  FUN_00f0d92c(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&DAT_01bee7fa);
  uVar21 = *(uint *)((long)param_3 + 0x21774);
  if ((uVar21 & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x21774) = uVar21 & 0xffff807f | 0x1f80;
    FUN_0091ada4(plVar9);
  }
  uVar22 = FUN_00e6ce7c("MAIN_PROFILE_LOGOUT",0);
  FUN_00f0d75c(plVar9,uVar22);
  pfVar17 = (float *)(param_3 + 0x42e7);
  if ((*pfVar17 != 0.8) || (*(float *)((long)param_3 + 0x2173c) != 0.8)) {
    pfVar17[0] = 0.8;
    pfVar17[1] = 0.8;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0d92c(plVar10,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&DAT_01bee7fa);
  uVar21 = *(uint *)((long)param_3 + 0x218a4);
  if ((uVar21 & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x218a4) = uVar21 & 0xffff807f | 0x1f80;
    FUN_0091ada4(plVar10);
  }
  pfVar17 = (float *)(param_3 + 0x430d);
  if ((*pfVar17 != 0.8) || (*(float *)((long)param_3 + 0x2186c) != 0.8)) {
    pfVar17[0] = 0.8;
    pfVar17[1] = 0.8;
    FUN_0091ada4(plVar10);
  }
  uVar22 = FUN_00966e38();
  FUN_00f0d75c(plVar10,uVar22);
  FUN_00c9228c(plVar8,0);
  puVar20 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  FUN_008fa54c(&local_2c8,"icon_exit_app");
  FUN_00c93a88(plVar8,puVar20,&local_2c8,&DAT_0320ffa8);
  if (((ulong)local_2c8 & 1) != 0) {
    operator_delete(local_2b8);
  }
  uVar21 = *(uint *)((long)param_3 + 0x20ba4);
  if ((uVar21 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x20ba4) = uVar21 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar8);
  }
  FUN_00ecf8d0(0,plVar8);
  uVar24 = FUN_00f0e700(param_3 + 0x429c);
  local_2c8 = (undefined **)CONCAT44(param_2,uVar24);
  FUN_00f13f18(plVar8,&local_2c8);
  uVar24 = DAT_03210c64;
  local_2c8 = (undefined **)thunk_FUN_00b6ef80;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2b8 = (void *)0x0;
  plStack_2c0 = param_3;
  local_2a0[0] = uVar24;
  FUN_009693a0(param_3 + 0x4165,&local_2c8);
  uVar21 = FUN_0093d888();
  *(uint *)((long)param_3 + 0x21abc) =
       *(uint *)((long)param_3 + 0x21abc) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x21abc) & 3 | (uVar21 & 1) << 2;
  FUN_00c9228c(plVar12,0);
  puVar20 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  FUN_008fa54c(&local_2c8,"icon_video_capture");
  FUN_00c93a88(plVar12,puVar20,&local_2c8,&DAT_0320ffa8);
  if (((ulong)local_2c8 & 1) != 0) {
    operator_delete(local_2b8);
  }
  uVar21 = *(uint *)((long)param_3 + 0x21c14);
  if ((uVar21 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x21c14) = uVar21 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar12);
  }
  FUN_00ecf8d0(0,plVar12);
  uVar25 = FUN_00f0e700(param_3 + 0x44aa);
  local_2c8 = (undefined **)CONCAT44(param_2,uVar25);
  FUN_00f13f18(plVar12,&local_2c8);
  local_2c8 = (undefined **)thunk_FUN_00b6f038;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2b8 = (void *)0x0;
  plStack_2c0 = param_3;
  local_2a0[0] = uVar24;
  FUN_009693a0(param_3 + 0x4373,&local_2c8);
  FUN_00f0d92c(plVar13,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&DAT_01bee7fa);
  uVar21 = *(uint *)((long)param_3 + 0x227e4);
  if ((uVar21 & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x227e4) = uVar21 & 0xffff807f | 0x1f80;
    FUN_0091ada4(plVar13);
  }
  uVar23 = FUN_0093d8f8();
  pcVar18 = "MENU_PROFILE_RECORD_OR_STREAM_LABEL";
  if ((uVar23 & 1) == 0) {
    pcVar18 = "MENU_PROFILE_RECORD_VIDEO_LABEL";
  }
  uVar22 = FUN_00e6ce7c(pcVar18,0);
  FUN_00f0d75c(plVar13,uVar22);
  pfVar17 = (float *)(param_3 + 0x44f5);
  if ((*pfVar17 != 0.8) || (*(float *)((long)param_3 + 0x227ac) != 0.8)) {
    pfVar17[0] = 0.8;
    pfVar17[1] = 0.8;
    FUN_0091ada4(plVar13);
  }
  *(uint *)((long)param_3 + 0x22914) = *(uint *)((long)param_3 + 0x22914) & 0xfffffffb;
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_RECORD_OPTION_LABEL",0);
  FUN_00ac53e4(0x3dcccccd,plVar14,0,uVar22,&DAT_0320ffa8,1,1);
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_STREAM_OPTION_LABEL",0);
  FUN_00ac53e4(0x3dcccccd,plVar14,1,uVar22,&DAT_0320ffa8,1,1);
  FUN_00ac58b8(plVar14,2);
  local_2a0[0] = FUN_00f048a4("EVENT_SELECT_CONTEXT_MENU_ITEM");
  local_2c8 = (undefined **)FUN_00b6d9e0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2b8 = (void *)0x0;
  plStack_2c0 = param_3;
  FUN_009693a0(param_3 + 0x4513,&local_2c8);
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_REGION_DROPDOWN_NA",0);
  FUN_0090ea30(&local_2e8,uVar22);
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_REGION_DROPDOWN_SA",0);
  FUN_0090ea30(&local_2e8,uVar22);
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_REGION_DROPDOWN_EA",0);
  FUN_0090ea30(&local_2e8,uVar22);
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_REGION_DROPDOWN_EU",0);
  FUN_0090ea30(&local_2e8,uVar22);
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_REGION_DROPDOWN_SEA",0);
  FUN_0090ea30(&local_2e8,uVar22);
  FUN_008fa54c(&local_2c8,&DAT_01e3aae1);
  FUN_0096204c(&local_2f8,&local_2c8);
  if (((ulong)local_2c8 & 1) != 0) {
    operator_delete(local_2b8);
  }
  FUN_008fa54c(&local_2c8,&DAT_01e30650);
  FUN_0096204c(&local_2f8,&local_2c8);
  if (((ulong)local_2c8 & 1) != 0) {
    operator_delete(local_2b8);
  }
  FUN_008fa54c(&local_2c8,&DAT_01e3088a);
  FUN_0096204c(&local_2f8,&local_2c8);
  if (((ulong)local_2c8 & 1) != 0) {
    operator_delete(local_2b8);
  }
  FUN_008fa54c(&local_2c8,"EU");
  FUN_0096204c(&local_2f8,&local_2c8);
  if (((ulong)local_2c8 & 1) != 0) {
    operator_delete(local_2b8);
  }
  FUN_008fa54c(&local_2c8,"SEA");
  FUN_0096204c(&local_2f8,&local_2c8);
  if (((ulong)local_2c8 & 1) != 0) {
    operator_delete(local_2b8);
  }
  FUN_00ac876c(0x43160000,0x43c80000,0,0x3f800000,0x3f8ccccd,plVar15,&local_2e8,&local_2f8,1,1,0);
  *(uint *)((long)param_3 + 0x235e4) = *(uint *)((long)param_3 + 0x235e4) | 4;
  FUN_00aca750(0x3f19999a,0x3f4ccccd,plVar15);
  FUN_00aca7a4(plVar15,0);
  FUN_00aca798(plVar15,0);
  *(uint *)((long)param_3 + 0x250ec) = *(uint *)((long)param_3 + 0x250ec) & 0xfffffffb;
  FUN_00f0d92c(plVar16,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  uVar21 = *(uint *)((long)param_3 + 0x25f1c);
  if ((uVar21 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x25f1c) = uVar21 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar16);
  }
  uVar22 = FUN_00e6ce7c("MENU_PROFILE_REGION_DROPDOWN_REGION",0);
  FUN_00f0d75c(plVar16,uVar22);
  FUN_00b6d9e8(param_3,plVar1,0,1);
  local_2c8 = (undefined **)FUN_00b6dc54;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2b8 = (void *)0x0;
  plStack_2c0 = param_3;
  local_2a0[0] = uVar24;
  FUN_009693a0(param_3 + 0x52,&local_2c8);
  *(uint *)((long)param_3 + 0x254) = *(uint *)((long)param_3 + 0x254) & 0xfffffffb;
  FUN_00e6ea58(&DAT_02c7eef8,param_3,0x9d2c9b16,FUN_00b6dc64,0);
  uVar23 = FUN_0093dbe8();
  if ((uVar23 & 1) != 0) {
    FUN_00e84dac(&local_2c8);
    local_2c8 = &PTR_FUN_027bb448;
    memset(local_2a0,0,0x58);
    FUN_00964684(auStack_248);
    local_120 = 0xffffffffffffffff;
    (**(code **)(*param_3 + 0x178))(param_3,&local_2c8);
    local_2c8 = &PTR_FUN_027bb448;
    FUN_009515b0(auStack_248);
    FUN_00951478(auStack_270,1);
    if (local_278 != (void *)0x0) {
      operator_delete__(local_278);
      local_280 = 0;
      local_278 = (void *)0x0;
    }
    FUN_0095132c(auStack_290,1);
    FUN_009512b0(local_2a0,1);
    FUN_00e84dd8(&local_2c8);
  }
  FUN_00951534(&local_2f8,1);
  FUN_0090eb54(&local_2e8,1);
  FUN_0090eb54(&local_2d8,1);
  if (*(long *)(lVar19 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

