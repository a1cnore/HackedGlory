// functions/00c13 — 25 functions
#include "libGameKindred.h"




void thunk_FUN_00c13298(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  FUN_00c0f75c();
  plVar1 = (long *)(param_1 + 0x8d60);
  fVar3 = 0.0;
  FUN_00f13f08(0,plVar1);
  FUN_00f01c54(plVar1,0,0,1,1);
  if ((*(float *)(param_1 + 0x8da0) != 0.0) || (*(float *)(param_1 + 0x8da4) != fVar3 * 0.5)) {
    *(float *)(param_1 + 0x8da0) = 0.0;
    *(float *)(param_1 + 0x8da4) = fVar3 * 0.5;
    FUN_0091ada4(plVar1);
  }
  uStack_40 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_40);
  FUN_00c12cb0(param_1,*(char *)(param_1 + 0x9251) == '\0');
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c133a0(long param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  long *plVar3;
  uint uVar4;
  
  pbVar1 = (byte *)(param_1 + 0x9253);
  uVar4 = *pbVar1 ^ 1;
  *pbVar1 = (byte)uVar4;
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x48))(plVar3,uVar4 != 0);
    uVar4 = (uint)*pbVar1;
  }
  puVar2 = &DAT_01bee7fa;
  if (uVar4 != 0) {
    puVar2 = &DAT_01bee802;
  }
  *(uint *)(param_1 + 0x88cc) = *(uint *)(param_1 + 0x88cc) & 0xfffffffb | (uVar4 & 0x3f) << 2;
  FUN_00f0e670(param_1 + 0x8548,puVar2,2);
  puVar2 = &DAT_01bee7fa;
  if (*pbVar1 != 0) {
    puVar2 = &DAT_01bee802;
  }
  FUN_00f0e670(param_1 + 0x8728,puVar2,2);
  return;
}




void thunk_FUN_00c131dc(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  puVar1 = (uint *)(param_1 + 0x6f94);
  *(uint *)(param_1 + 0x89c4) = *(uint *)(param_1 + 0x89c4) & 0xffffffeb;
  uVar2 = *puVar1;
  param_1 = param_1 + 0x6f10;
  *puVar1 = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *puVar1 = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(param_1);
  }
  uVar3 = FUN_00efee28(0x3f800000,0x3f000000,FUN_0091aa80);
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,uVar3);
  return;
}




void FUN_00c13018(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_3), (uVar2 & 1) == 0)) {
    FUN_00f0490c(param_2);
    return;
  }
  return;
}




void FUN_00c13060(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c13070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_00c13078(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c13088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
    return;
  }
  return;
}




void FUN_00c13090(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_3), (uVar2 & 1) == 0)) {
    FUN_00f0490c(param_2);
    return;
  }
  return;
}




void FUN_00c130d8(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c130e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
    return;
  }
  return;
}




void FUN_00c130f0(long param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  *(uint *)(param_1 + 0x8af4) = *(uint *)(param_1 + 0x8af4) & 0xfffffffb;
  *(uint *)(param_1 + 0x8b7c) = *(uint *)(param_1 + 0x8b7c) & 0xfffffffb;
  puVar1 = (uint *)(param_1 + 0x89c4);
  *(uint *)(param_1 + 0x6f94) = *(uint *)(param_1 + 0x6f94) & 0xfffffffb;
  uVar3 = *puVar1;
  lVar2 = param_1 + 0x8940;
  *puVar1 = uVar3 | 0x14;
  if ((uVar3 & 0x7f80) != 0) {
    *puVar1 = uVar3 & 0xffff807f | 0x14;
    FUN_0091ada4(lVar2);
  }
  uVar4 = FUN_00efee28(0x3f800000,0x3f000000,FUN_0091aa80);
  FUN_00f01980(lVar2);
  FUN_00f022a0(lVar2,uVar4);
  plVar5 = *(long **)(param_1 + 0xb8);
  if (plVar5 != (long *)0x0) {
    uVar4 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c131c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x50))(plVar5,uVar4);
    return;
  }
  return;
}




void FUN_00c131dc(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  puVar1 = (uint *)(param_1 + 0x6f94);
  *(uint *)(param_1 + 0x89c4) = *(uint *)(param_1 + 0x89c4) & 0xffffffeb;
  uVar2 = *puVar1;
  param_1 = param_1 + 0x6f10;
  *puVar1 = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *puVar1 = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(param_1);
  }
  uVar3 = FUN_00efee28(0x3f800000,0x3f000000,FUN_0091aa80);
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,uVar3);
  return;
}




void FUN_00c13264(long param_1)

{
  *(uint *)(param_1 + 0x8af4) = *(uint *)(param_1 + 0x8af4) & 0xfffffffb;
  *(uint *)(param_1 + 0x8b7c) = *(uint *)(param_1 + 0x8b7c) & 0xfffffffb;
  FUN_00c12b3c(param_1,*(char *)(param_1 + 0x9250) == '\0');
  return;
}




void FUN_00c13298(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00c0f75c();
  plVar1 = (long *)(param_1 + 0x8d60);
  fVar3 = 0.0;
  FUN_00f13f08(0,plVar1);
  FUN_00f01c54(plVar1,0,0,1,1);
  if ((*(float *)(param_1 + 0x8da0) != 0.0) || (*(float *)(param_1 + 0x8da4) != fVar3 * 0.5)) {
    *(float *)(param_1 + 0x8da0) = 0.0;
    *(float *)(param_1 + 0x8da4) = fVar3 * 0.5;
    FUN_0091ada4(plVar1);
  }
  local_40 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_40);
  FUN_00c12cb0(param_1,*(char *)(param_1 + 0x9251) == '\0');
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1338c(long param_1)

{
  FUN_00c12a04(param_1,*(char *)(param_1 + 0x9252) == '\0');
  return;
}




void FUN_00c133a0(long param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  long *plVar3;
  uint uVar4;
  
  pbVar1 = (byte *)(param_1 + 0x9253);
  uVar4 = *pbVar1 ^ 1;
  *pbVar1 = (byte)uVar4;
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x48))(plVar3,uVar4 != 0);
    uVar4 = (uint)*pbVar1;
  }
  puVar2 = &DAT_01bee7fa;
  if (uVar4 != 0) {
    puVar2 = &DAT_01bee802;
  }
  *(uint *)(param_1 + 0x88cc) = *(uint *)(param_1 + 0x88cc) & 0xfffffffb | (uVar4 & 0x3f) << 2;
  FUN_00f0e670(param_1 + 0x8548,puVar2,2);
  puVar2 = &DAT_01bee7fa;
  if (*pbVar1 != 0) {
    puVar2 = &DAT_01bee802;
  }
  FUN_00f0e670(param_1 + 0x8728,puVar2,2);
  return;
}




void FUN_00c13450(undefined8 param_1)

{
  FUN_00c12cb0(param_1,0);
  return;
}




void FUN_00c13458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f60b0;
  FUN_00f0d3a4(param_1 + 0x2f4);
  param_1[0x2d6] = &PTR_FUN_028266f0;
  param_1[0x2ed] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2f0);
  FUN_00f13d08(param_1 + 0x2d6);
  param_1[0x2b8] = &PTR_FUN_028266f0;
  param_1[0x2cf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d2);
  FUN_00f13d08(param_1 + 0x2b8);
  FUN_009c7fa8(param_1);
  return;
}




void FUN_00c134f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f60b0;
  FUN_00f0d3a4(param_1 + 0x2f4);
  param_1[0x2d6] = &PTR_FUN_028266f0;
  param_1[0x2ed] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2f0);
  FUN_00f13d08(param_1 + 0x2d6);
  param_1[0x2b8] = &PTR_FUN_028266f0;
  param_1[0x2cf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d2);
  FUN_00f13d08(param_1 + 0x2b8);
  FUN_009c7fa8(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c1359c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00c1361c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00c1369c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027f6390;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_00f0e4a8(param_1 + 0x1a);
  plVar1 = param_1 + 0x38;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x5e;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x84;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0xa2;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0xc0;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xde;
  FUN_00f0e4a8(plVar6);
  param_1[0xfc] = 0;
  uVar7 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  *(undefined2 *)((long)param_1 + 0x7f4) = 0;
  *(undefined4 *)((long)param_1 + 0x7fc) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xfd) = uVar7;
  *(undefined1 *)((long)param_1 + 0x802) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"dialog_bg_small");
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"speech_bubble_top");
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"speech_bubble_mid");
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"speech_bubble_bot");
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68);
  FUN_00f0d7fc(plVar1,&DAT_01bbbdd4);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68);
  FUN_00f0d7fc(plVar2,&DAT_01bbbdd0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return;
}




void FUN_00c138b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  return;
}




void FUN_00c138bc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  float fVar13;
  float local_a8;
  undefined1 auStack_a4 [4];
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 auStack_80 [4];
  float local_7c;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  FUN_00f00298(&local_7c,auStack_80);
  fVar10 = 0.4;
  plVar8 = param_1 + 0x1a;
  fVar13 = local_7c * 0.4;
  local_7c = fVar13;
  FUN_00f0e700(plVar8);
  FUN_00f13f08(fVar13,param_1);
  FUN_00f0eac0(plVar8);
  plVar1 = param_1 + 0x84;
  FUN_00f13f08(local_7c,fVar10 * 0.9,plVar1);
  plVar2 = param_1 + 0xc0;
  fVar10 = (float)FUN_00f0eac0(plVar2);
  plVar3 = param_1 + 0x5e;
  fVar13 = *(float *)(param_1 + 0xc9) * -40.0 + *(float *)(param_1 + 0xc9) * -40.0;
  FUN_00f0dad0(fVar10 + fVar13,plVar3,1);
  plVar4 = param_1 + 0x38;
  FUN_00f0dad0(0x43960000,plVar4,1);
  uVar12 = FUN_00f0e700(plVar2);
  FUN_00f0d548(plVar3);
  plVar5 = param_1 + 0xde;
  fVar10 = fVar13;
  FUN_00f0e700(plVar5);
  plVar6 = param_1 + 0xa2;
  fVar13 = fVar13 - fVar10;
  FUN_00f0e700(plVar6);
  FUN_00f13f08(uVar12,fVar13 + fVar10 * -0.25,plVar2);
  if ((int)param_1[0xfe] == 2) {
    *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) | 1;
    *(byte *)(param_1 + 0xdb) = *(byte *)(param_1 + 0xdb) | 1;
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) | 1;
    *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) | 1;
    FUN_00f07a18(0,0,param_1,1);
    FUN_00f07a18(0x42a00000,0,plVar8,1);
    FUN_00f07940(0xc2a00000,0x41000000,plVar1,2,plVar8,2);
    fVar10 = (float)FUN_00f0eac0(plVar8);
    FUN_00f07940((190.0 - fVar10) + -90.0,0x42a00000,plVar6,1,plVar1,1);
    FUN_00f07940(0,0,plVar2,0,plVar6,3);
    FUN_00f07940(0,0,plVar5,0,plVar2,3);
    uVar11 = 0x42080000;
  }
  else {
    *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) & 0xfe;
    *(byte *)(param_1 + 0xdb) = *(byte *)(param_1 + 0xdb) & 0xfe;
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) & 0xfe;
    *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) & 0xfe;
    FUN_00f07a18(0,0,param_1,0);
    FUN_00f07a18(0xc2a00000,0,plVar8,0);
    FUN_00f07940(0x42a00000,0x41000000,plVar1,3,plVar8,3);
    fVar10 = (float)FUN_00f0eac0(plVar8);
    FUN_00f07940(fVar10 + -190.0,0x42a00000,plVar6,0,plVar1,0);
    FUN_00f07940(0,0,plVar2,0,plVar6,3);
    FUN_00f07940(0,0,plVar5,0,plVar2,3);
    uVar11 = 0x428c0000;
  }
  FUN_00f07940(uVar11,0x428c0000,plVar4,3,plVar6,0);
  FUN_00f07940(0,0,plVar3,0,plVar4,3);
  plVar8 = (long *)FUN_00f00424((long)*(short *)((long)param_1 + 0x7f4));
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x68))(plVar8,&local_88,&local_90);
    (**(code **)(*param_1 + 0x68))(param_1,&local_98,&local_a0);
    if (local_88 <= local_98) {
      local_88 = local_98;
    }
    fVar10 = local_84;
    if (local_84 <= fStack_94) {
      fVar10 = fStack_94;
    }
    if (local_a0 <= local_90) {
      local_90 = local_a0;
    }
    fVar13 = local_8c;
    if (fStack_9c <= local_8c) {
      fVar13 = fStack_9c;
    }
    if (((local_88 < local_90) && (fVar10 < fVar13)) &&
       (0.0 < (local_90 - local_88) * (fVar13 - fVar10))) {
      FUN_00f00238(auStack_a4,&local_a8);
      if (local_a8 - local_8c <= local_84) {
        uVar11 = 0x80000000;
        uVar12 = 2;
        uVar9 = 0;
      }
      else {
        uVar9 = 2;
        uVar11 = 0;
        uVar12 = 0;
      }
      FUN_00f07b18(uVar11,param_1,uVar12,plVar8,uVar9);
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c13d44(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (long)&PTR_FUN_027f64d8;
  param_1[0x19] = 0;
  FUN_00f13ca4(plVar1);
  lVar3 = 0;
  do {
    FUN_00c1369c((long)param_1 + lVar3 + 0x188);
    lVar3 = lVar3 + 0x808;
  } while (lVar3 != 0x1010);
  *(undefined4 *)(param_1 + 0x233) = 0;
  lVar3 = -0x1010;
  do {
    lVar2 = lVar3 + 0x808;
    *(long **)((long)param_1 + lVar3 + 0x1258) = param_1;
    lVar3 = lVar2;
  } while (lVar2 != 0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar4 = param_1 + 0x31;
  lVar3 = 2;
  do {
    FUN_00f023ec(plVar1,plVar4,1);
    lVar3 = lVar3 + -1;
    plVar4 = plVar4 + 0x101;
  } while (lVar3 != 0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return;
}




void FUN_00c13e10(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_027f64d8;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x990) = &PTR_FUN_027f6390;
    *(undefined ***)((long)param_1 + lVar1 + 0x1080) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x1138) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x1150);
    FUN_00f13d08((long)param_1 + lVar1 + 0x1080);
    *(undefined ***)((long)param_1 + lVar1 + 0xf90) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x1048) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x1060);
    FUN_00f13d08((long)param_1 + lVar1 + 0xf90);
    *(undefined ***)((long)param_1 + lVar1 + 0xea0) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xf58) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xf70);
    FUN_00f13d08((long)param_1 + lVar1 + 0xea0);
    *(undefined ***)((long)param_1 + lVar1 + 0xdb0) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xe68) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xe80);
    FUN_00f13d08((long)param_1 + lVar1 + 0xdb0);
    FUN_00f0d3a4((long)param_1 + lVar1 + 0xc80);
    FUN_00f0d3a4((long)param_1 + lVar1 + 0xb50);
    *(undefined ***)((long)param_1 + lVar1 + 0xa60) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xb18) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xb30);
    FUN_00f13d08((long)param_1 + lVar1 + 0xa60);
    FUN_00f13d08((long)param_1 + lVar1 + 0x990);
    lVar1 = lVar1 + -0x808;
  } while (lVar1 != -0x1010);
  FUN_00f13d08(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c13f6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f6390;
  param_1[0xde] = &PTR_FUN_028266f0;
  param_1[0xf5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf8);
  FUN_00f13d08(param_1 + 0xde);
  param_1[0xc0] = &PTR_FUN_028266f0;
  param_1[0xd7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xda);
  FUN_00f13d08(param_1 + 0xc0);
  param_1[0xa2] = &PTR_FUN_028266f0;
  param_1[0xb9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbc);
  FUN_00f13d08(param_1 + 0xa2);
  param_1[0x84] = &PTR_FUN_028266f0;
  param_1[0x9b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9e);
  FUN_00f13d08(param_1 + 0x84);
  FUN_00f0d3a4(param_1 + 0x5e);
  FUN_00f0d3a4(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_028266f0;
  param_1[0x31] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x34);
  FUN_00f13d08(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}

