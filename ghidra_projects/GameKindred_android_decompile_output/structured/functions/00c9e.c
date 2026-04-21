// functions/00c9e — 17 functions
#include "libGameKindred.h"




void thunk_FUN_00c9e00c(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  
  FUN_00f01980();
  FUN_00af97f4(param_1,1);
  FUN_00af9914(param_1);
  lVar3 = DAT_03210d00;
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x128);
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00a99928(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00a99998(puVar6,param_1,uVar5);
  FUN_00f022a0(param_1,puVar6);
  FUN_00c9d270(0x3e4ccccd,param_1,0);
  FUN_00c9d020(0x3dcccccd,param_1);
  plVar2 = *(long **)(param_1 + 0x6750);
  if (plVar2 != (long *)0x0) {
    piVar1 = (int *)(param_1 + 0x6758);
    if (*piVar1 == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x6750);
        uVar5 = 0;
        if (plVar2 != (long *)0x0) {
          if (*piVar1 == (int)plVar2[1]) {
            uVar5 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x6750) = 0;
            uVar5 = 0;
            *piVar1 = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0x3f000000,uVar5);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6750) = 0;
      *piVar1 = DAT_03214ce8;
    }
  }
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/spoils_cards_flip.mp3",0,0);
  return;
}




void FUN_00c9e00c(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  
  FUN_00f01980();
  FUN_00af97f4(param_1,1);
  FUN_00af9914(param_1);
  lVar3 = DAT_03210d00;
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x128);
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00a99928(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00a99998(puVar6,param_1,uVar5);
  FUN_00f022a0(param_1,puVar6);
  FUN_00c9d270(0x3e4ccccd,param_1,0);
  FUN_00c9d020(0x3dcccccd,param_1);
  plVar2 = *(long **)(param_1 + 0x6750);
  if (plVar2 != (long *)0x0) {
    piVar1 = (int *)(param_1 + 0x6758);
    if (*piVar1 == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x6750);
        uVar5 = 0;
        if (plVar2 != (long *)0x0) {
          if (*piVar1 == (int)plVar2[1]) {
            uVar5 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x6750) = 0;
            uVar5 = 0;
            *piVar1 = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0x3f000000,uVar5);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6750) = 0;
      *piVar1 = DAT_03214ce8;
    }
  }
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/spoils_cards_flip.mp3",0,0);
  return;
}




void FUN_00c9e1c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c9e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x6748) + 8))();
  return;
}




void FUN_00c9e1d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028070d8;
  param_1[0xcca] = &PTR_FUN_028266f0;
  param_1[0xce1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xce4);
  FUN_00f13d08(param_1 + 0xcca);
  param_1[0xcac] = &PTR_FUN_028266f0;
  param_1[0xcc3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xcc6);
  FUN_00f13d08(param_1 + 0xcac);
  FUN_00c9e5dc(param_1 + 0xad8);
  param_1[0xaba] = &PTR_FUN_028266f0;
  param_1[0xad1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xad4);
  FUN_00f13d08(param_1 + 0xaba);
  FUN_00f0a79c(param_1 + 0xab8);
  FUN_00f0a79c(param_1 + 0xab6);
  FUN_00f0a79c(param_1 + 0xab4);
  param_1[0xa96] = &PTR_FUN_028266f0;
  param_1[0xaad] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xab0);
  FUN_00f13d08(param_1 + 0xa96);
  param_1[0xa78] = &PTR_FUN_028266f0;
  param_1[0xa8f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa92);
  FUN_00f13d08(param_1 + 0xa78);
  param_1[0xa5a] = &PTR_FUN_028266f0;
  param_1[0xa71] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa74);
  FUN_00f13d08(param_1 + 0xa5a);
  param_1[0xa3c] = &PTR_FUN_028266f0;
  param_1[0xa53] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa56);
  FUN_00f13d08(param_1 + 0xa3c);
  param_1[0xa1e] = &PTR_FUN_028266f0;
  param_1[0xa35] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa38);
  FUN_00f13d08(param_1 + 0xa1e);
  param_1[0xa00] = &PTR_FUN_028266f0;
  param_1[0xa17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa1a);
  FUN_00f13d08(param_1 + 0xa00);
  param_1[0x9e2] = &PTR_FUN_028266f0;
  param_1[0x9f9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9fc);
  FUN_00f13d08(param_1 + 0x9e2);
  FUN_00f0d3a4(param_1 + 0x9bc);
  FUN_00f0d3a4(param_1 + 0x996);
  FUN_00f0d3a4(param_1 + 0x970);
  FUN_00f0d3a4(param_1 + 0x94a);
  FUN_00f01868(param_1 + 0x939);
  FUN_00f01868(param_1 + 0x928);
  FUN_00f0d3a4(param_1 + 0x902);
  FUN_00f0d3a4(param_1 + 0x8dc);
  FUN_00f0d3a4(param_1 + 0x8b6);
  FUN_00f01868(param_1 + 0x8a5);
  FUN_00f0d3a4(param_1 + 0x87f);
  FUN_00f01868(param_1 + 0x86e);
  param_1[0x490] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x837);
  FUN_00f01868(param_1 + 0x826);
  FUN_00f13d08(param_1 + 0x7f2);
  FUN_00f01868(param_1 + 0x7e1);
  FUN_00f0d3a4(param_1 + 0x7bb);
  FUN_00f0d3a4(param_1 + 0x795);
  param_1[0x777] = &PTR_FUN_028266f0;
  param_1[0x78e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x791);
  FUN_00f13d08(param_1 + 0x777);
  param_1[0x759] = &PTR_FUN_028266f0;
  param_1[0x770] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x773);
  FUN_00f13d08(param_1 + 0x759);
  FUN_00f01868(param_1 + 0x748);
  FUN_009c7fa8(param_1 + 0x490);
  param_1[0xb2] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x459);
  FUN_00f01868(param_1 + 0x448);
  FUN_00f13d08(param_1 + 0x414);
  FUN_00f01868(param_1 + 0x403);
  FUN_00f0d3a4(param_1 + 0x3dd);
  FUN_00f0d3a4(param_1 + 0x3b7);
  param_1[0x399] = &PTR_FUN_028266f0;
  param_1[0x3b0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3b3);
  FUN_00f13d08(param_1 + 0x399);
  param_1[0x37b] = &PTR_FUN_028266f0;
  param_1[0x392] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x395);
  FUN_00f13d08(param_1 + 0x37b);
  FUN_00f01868(param_1 + 0x36a);
  FUN_009c7fa8(param_1 + 0xb2);
  FUN_00afc0a4(param_1 + 0x76);
  FUN_00af8c0c(param_1);
  return;
}




void FUN_00c9e5b8(void *param_1)

{
  FUN_00c9e1d4();
  operator_delete(param_1);
  return;
}




void FUN_00c9e5dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02806f90;
  FUN_00f0d3a4(param_1 + 0x1ae);
  param_1[400] = &PTR_FUN_028266f0;
  param_1[0x1a7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1aa);
  FUN_00f13d08(param_1 + 400);
  FUN_00f0d3a4(param_1 + 0x16a);
  param_1[0x14c] = &PTR_FUN_028266f0;
  param_1[0x163] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x166);
  FUN_00f13d08(param_1 + 0x14c);
  FUN_00f01868(param_1 + 0x13b);
  param_1[0xa5] = &PTR_FUN_027dc928;
  param_1[0x110] = &PTR_FUN_02826f38;
  param_1[0x127] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x12a);
  FUN_00f13d08(param_1 + 0x110);
  param_1[0xe6] = &PTR_FUN_02826f38;
  param_1[0xfd] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x100);
  FUN_00f13d08(param_1 + 0xe6);
  param_1[0xbc] = &PTR_FUN_02826f38;
  param_1[0xd3] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xd6);
  FUN_00f13d08(param_1 + 0xbc);
  FUN_00f13d08(param_1 + 0xa5);
  FUN_00f01868(param_1 + 0x94);
  param_1[0x17] = &PTR_FUN_027d4cc0;
  param_1[0x75] = &PTR_FUN_028266f0;
  param_1[0x8c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8f);
  FUN_00f13d08(param_1 + 0x75);
  param_1[0x57] = &PTR_FUN_028266f0;
  param_1[0x6e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x71);
  FUN_00f13d08(param_1 + 0x57);
  FUN_00f01868(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c9e784(void *param_1)

{
  FUN_00c9e5dc();
  operator_delete(param_1);
  return;
}




void FUN_00c9e7a8(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined *puVar8;
  char *pcVar9;
  long lVar10;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_028072a0;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x28;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x46;
  FUN_00f10d7c(plVar3);
  plVar4 = param_1 + 0x67;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x85;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xa3;
  FUN_00f0e4a8(plVar6);
  *(byte *)(param_1 + 0xc1) = param_2 & 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  if ((param_2 & 1) == 0) {
    FUN_00f023ec(plVar1,plVar2,1);
    FUN_00f023ec(plVar1,plVar3,1);
    FUN_00f023ec(plVar1,plVar5,1);
    FUN_00f023ec(plVar1,plVar6,1);
    FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_shadow");
    if ((*(float *)(param_1 + 0x32) != 0.5) || (*(float *)((long)param_1 + 0x194) != 0.5)) {
      param_1[0x32] = 0x3f0000003f000000;
      FUN_0091ada4(plVar2);
    }
    if ((*(float *)(param_1 + 0x31) != 4.0) || (*(float *)((long)param_1 + 0x18c) != 4.0)) {
      lVar10 = NEON_fmov(0x40800000,4);
      param_1[0x31] = lVar10;
      FUN_0091ada4(plVar2);
    }
    pcVar9 = "generic_large_circle";
    *(uint *)((long)param_1 + 0x1c4) = *(uint *)((long)param_1 + 0x1c4) & 0xffffffbf;
    puVar8 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  else {
    FUN_00f023ec(plVar1,plVar3,1);
    FUN_00f023ec(plVar1,plVar4,1);
    FUN_00f023ec(plVar1,plVar5,1);
    pcVar9 = "circle_button_fill";
    puVar8 = PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  FUN_00f10dc8(plVar3,puVar8,pcVar9);
  FUN_00f0e698(plVar3,0xb);
  if ((*(float *)(param_1 + 0x50) != 0.5) || (*(float *)((long)param_1 + 0x284) != 0.5)) {
    param_1[0x50] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  if ((param_2 & 1) == 0) {
    if ((*(float *)(param_1 + 0x4f) != 2.8) ||
       (puVar8 = PTR_s_build___Talent_Coins_tga_02be3608, *(float *)((long)param_1 + 0x27c) != 2.8))
    {
      param_1[0x4f] = 0x4033333340333333;
      FUN_0091ada4(plVar3);
      puVar8 = PTR_s_build___Talent_Coins_tga_02be3608;
    }
  }
  else {
    FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_frame");
    FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
    uVar7 = *(uint *)((long)param_1 + 0x3bc);
    if ((uVar7 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x3bc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
      FUN_0091ada4(plVar4);
    }
    if ((*(float *)(param_1 + 0x71) != 0.5) || (*(float *)((long)param_1 + 0x38c) != 0.5)) {
      param_1[0x71] = 0x3f0000003f000000;
      FUN_0091ada4(plVar4);
    }
    puVar8 = PTR_s_build___HUDPartsCommon_atlas_02be3440;
    if (*(float *)((long)param_1 + 0x37c) != 2.0) {
      *(undefined4 *)((long)param_1 + 0x37c) = 0x40000000;
      FUN_0091ada4(plVar4);
      puVar8 = PTR_s_build___HUDPartsCommon_atlas_02be3440;
    }
  }
  FUN_00f0e540(plVar5,puVar8);
  if ((*(float *)(param_1 + 0x8f) != 0.5) || (*(float *)((long)param_1 + 0x47c) != 0.5)) {
    param_1[0x8f] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_1 + 0x8e) != 1.0) || (*(float *)((long)param_1 + 0x474) != 1.0)) {
    lVar10 = NEON_fmov(0x3f800000,4);
    param_1[0x8e] = lVar10;
    FUN_0091ada4(plVar5);
  }
  if ((param_2 & 1) == 0) {
    FUN_00f0e540(plVar6,PTR_s_build___Talent_Coins_tga_02be3608);
    if ((*(float *)(param_1 + 0xad) != 0.5) || (*(float *)((long)param_1 + 0x56c) != 0.5)) {
      param_1[0xad] = 0x3f0000003f000000;
      FUN_0091ada4(plVar6);
    }
    if ((*(float *)(param_1 + 0xac) != 3.18) || (*(float *)((long)param_1 + 0x564) != 3.18)) {
      param_1[0xac] = 0x404b851f404b851f;
      FUN_0091ada4(plVar6);
    }
  }
  *(uint *)((long)param_1 + 0x59c) = *(uint *)((long)param_1 + 0x59c) & 0xffffffbf;
  return;
}




void FUN_00c9eb9c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c9eba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c9eba8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c9ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c9ebb4(long param_1)

{
  FUN_00f07940(0,0,param_1 + 0xb8,8,param_1,8);
  return;
}




void FUN_00c9ebd0(float param_1,float param_2,long param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  fVar7 = param_2;
  fVar4 = (float)FUN_00f01c54(param_3 + 0xb8,0,1,0,1);
  lVar1 = param_3 + 0x230;
  fVar6 = fVar7;
  fVar5 = (float)FUN_00f0eaf4(lVar1);
  if ((((((0.0 <= param_1) && (ABS(fVar7) != INFINITY)) && (!NAN(ABS(fVar7)))) &&
       ((0.0 < fVar4 && (0.0 < fVar7)))) &&
      ((ABS(fVar4) != INFINITY && ((!NAN(ABS(fVar4)) && (0.0 < fVar6)))))) &&
     ((0.0 <= param_2 && (0.0 < fVar5)))) {
    fVar5 = 3.0 / *(float *)(param_3 + 0x278);
    fVar8 = 3.0 / *(float *)(param_3 + 0x27c);
    fVar6 = param_1 / fVar4;
    if (fVar5 <= param_1 / fVar4) {
      fVar6 = fVar5;
    }
    fVar5 = param_2 / fVar7;
    if (fVar8 <= param_2 / fVar7) {
      fVar5 = fVar8;
    }
    local_70 = fVar4 * fVar6;
    fVar7 = fVar7 * fVar5;
    fStack_6c = fVar7;
    FUN_00f13f18(param_3,&local_70);
    cVar2 = *(char *)(param_3 + 0x608);
    if ((*(float *)(param_3 + 0x100) != fVar6) || (*(float *)(param_3 + 0x104) != fVar5)) {
      *(float *)(param_3 + 0x100) = fVar6;
      *(float *)(param_3 + 0x104) = fVar5;
      FUN_0091ada4(param_3 + 0xb8);
    }
    if (cVar2 != '\0') {
      fVar6 = (float)FUN_00f0eaf4(lVar1);
      fVar7 = 99.0 / fVar7;
      if ((*(float *)(param_3 + 0x278) != 99.0 / fVar6) || (*(float *)(param_3 + 0x27c) != fVar7)) {
        *(float *)(param_3 + 0x278) = 99.0 / fVar6;
        *(float *)(param_3 + 0x27c) = fVar7;
        FUN_0091ada4(lVar1);
      }
      fVar6 = (float)FUN_00f0eaf4(param_3 + 0x338);
      if ((*(float *)(param_3 + 0x380) != 101.0 / fVar6) ||
         (*(float *)(param_3 + 900) != 101.0 / fVar7)) {
        *(float *)(param_3 + 0x380) = 101.0 / fVar6;
        *(float *)(param_3 + 900) = 101.0 / fVar7;
        FUN_0091ada4(param_3 + 0x338);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9edc4(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x59c) =
       *(uint *)(param_1 + 0x59c) & 0xfffffff8 | *(uint *)(param_1 + 0x59c) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x1c4) =
       *(uint *)(param_1 + 0x1c4) & 0xfffffff8 | *(uint *)(param_1 + 0x1c4) & 3 | (param_2 & 1) << 2
  ;
  FUN_00c9ede4();
  return;
}




void FUN_00c9ede4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x230;
  if ((param_2 & 1) == 0) {
    local_50[0] = 0xff00c000;
    FUN_00f0e670(lVar1,local_50,2);
    FUN_00f0e6bc(0,lVar1);
    local_50[0] = 0xff008000;
    FUN_00f0e670(param_1 + 0x428,local_50,2);
    uVar3 = 0;
  }
  else {
    FUN_00f0e670(lVar1,&DAT_01bee7fa,2);
    uVar3 = 0x3f800000;
    FUN_00f0e6bc(0x3f800000,lVar1);
    FUN_00f0e670(param_1 + 0x428,&DAT_01bee7fa,2);
  }
  FUN_00f0e6bc(uVar3,param_1 + 0x428);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9eedc(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1c4) =
       *(uint *)(param_1 + 0x1c4) & 0xfffffff8 | *(uint *)(param_1 + 0x1c4) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c9eef0(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x59c) =
       *(uint *)(param_1 + 0x59c) & 0xfffffff8 | *(uint *)(param_1 + 0x59c) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x1c4) =
       *(uint *)(param_1 + 0x1c4) & 0xfffffff8 | *(uint *)(param_1 + 0x1c4) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c9ef0c(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar1 = param_3 + 0x46;
  FUN_00f0e628(plVar1);
  if ((char)param_3[0xc1] == '\0') {
    FUN_00f0e6e8(plVar1,0);
  }
  FUN_00f0e548(plVar1,param_4,param_5);
  if ((char)param_3[0xc1] == '\0') {
    pcVar3 = "talent_coin_%s";
  }
  else {
    pcVar3 = "talent_coin_%s_small";
  }
  FUN_00969b40(&local_c8,pcVar3,param_6);
  FUN_00f0e578(param_3 + 0x85,&local_c8);
  if ((char)param_3[0xc1] == '\0') {
    FUN_00e6a8a8(&local_c8,"talent_glow_%s",param_6);
    FUN_00f0e578(param_3 + 0xa3,&local_c8);
  }
  local_c8 = FUN_00f0eaf4(param_3 + 0x85);
  uStack_c4 = param_2;
  FUN_00f13f18(param_3,&local_c8);
  (**(code **)(*param_3 + 0xe8))(param_3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

