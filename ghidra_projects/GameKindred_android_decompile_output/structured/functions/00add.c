// functions/00add — 38 functions
#include "libGameKindred.h"




void FUN_00add00c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x4f94) = param_3;
  *(byte *)(param_1 + 0x4faa) = *(byte *)(param_1 + 0x4faa) | 1;
  *(uint *)(param_1 + 0xeb4) = *(uint *)(param_1 + 0xeb4) & 0xffffffef;
  *(uint *)(param_1 + 0x2474) = *(uint *)(param_1 + 0x2474) & 0xffffffef;
  *(uint *)(param_1 + 0x3a34) = *(uint *)(param_1 + 0x3a34) & 0xffffffef;
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) & 0xffffffef;
  return;
}




void FUN_00add058(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00ecfca4(param_1,param_3);
  *(byte *)(param_1 + 0x4faa) = *(byte *)(param_1 + 0x4faa) | 1;
  *(uint *)(param_1 + 0xeb4) = *(uint *)(param_1 + 0xeb4) & 0xffffffef;
  *(uint *)(param_1 + 0x2474) = *(uint *)(param_1 + 0x2474) & 0xffffffef;
  *(uint *)(param_1 + 0x3a34) = *(uint *)(param_1 + 0x3a34) & 0xffffffef;
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) & 0xffffffef;
  return;
}




void FUN_00add0bc(void)

{
  return;
}




void FUN_00add0c0(void)

{
  return;
}




void FUN_00add0c4(void)

{
  return;
}




void FUN_00add0c8(void)

{
  return;
}




void FUN_00add0cc(void)

{
  return;
}




void FUN_00add0d0(void)

{
  return;
}




void FUN_00add0d4(uint *param_1,uint param_2)

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




void FUN_00add154(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  FUN_00f1306c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_027d8490;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x49;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x67;
  FUN_00f0d160(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"capsule_button_fill_middle");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"capsule_button_fill_left");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar4 = *(uint *)((long)param_1 + 0x1dc);
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1dc) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  uVar4 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2cc) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Light_96_f_02be9c28);
                    /* WARNING: Could not recover jumptable at 0x00add2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00add2c4(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x67);
                    /* WARNING: Could not recover jumptable at 0x00add2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00add2f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x158;
  FUN_00f13f08(0x43480000,0x43820000,lVar1);
  lVar2 = param_1 + 0x248;
  FUN_00f13f08(0x43020000,0x43820000,lVar2);
  FUN_00f07b18(0x80000000,lVar2,1,lVar1,3);
  FUN_00f07b18(0,lVar2,5,lVar1,5);
  FUN_00f07940(0x42500000,0,param_1 + 0x338,8,lVar2,8);
  FUN_00f13238(param_1);
  return;
}




void FUN_00add3b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8490;
  FUN_00f0d3a4(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00add450(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8490;
  FUN_00f0d3a4(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00add4f8(long *param_1)

{
  long lVar1;
  
  FUN_00f017e8();
  *param_1 = (long)&PTR_FUN_027d85e0;
  FUN_00f0e4a8(param_1 + 0x11);
  FUN_00f0e4a8(param_1 + 0x2f);
  FUN_00f0e4a8(param_1 + 0x4d);
  FUN_00f0e4a8(param_1 + 0x6b);
  FUN_00f0e4a8(param_1 + 0x89);
  lVar1 = _DAT_03218ef8;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa9] = 0;
  *(undefined1 *)((long)param_1 + 0x554) = 1;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xa7] = lVar1;
  param_1[0xa8] = lVar1;
  param_1[0xab] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6b,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x89,1);
                    /* WARNING: Could not recover jumptable at 0x00add614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x11,1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00add618(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_027d85e0;
  uVar1 = _DAT_03218ef8;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa7] = uVar1;
  param_1[0xa8] = uVar1;
  param_1[0xa9] = 0;
  if ((*(byte *)(param_1 + 0xab) & 1) != 0) {
    operator_delete((void *)param_1[0xad]);
  }
  param_1[0x89] = &PTR_FUN_028266f0;
  param_1[0xa0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa3);
  FUN_00f13d08(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_028266f0;
  param_1[0x82] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x85);
  FUN_00f13d08(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00add718(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_03218ef8;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x538) = uVar1;
  *(undefined8 *)(param_1 + 0x540) = uVar1;
  return;
}




void FUN_00add738(void *param_1)

{
  FUN_00add618();
  operator_delete(param_1);
  return;
}




void FUN_00add75c(long param_1)

{
  if (*(char *)(param_1 + 0x553) != '\0') {
    FUN_00add76c();
    return;
  }
  return;
}




void FUN_00add76c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar4 = *(long **)(param_1 + 0x548);
  if (plVar4 == (long *)0x0) {
    local_40 = *(ulong *)(param_1 + 0x538);
    local_48 = *(undefined8 *)(param_1 + 0x540);
  }
  else {
    if (*(char *)(param_1 + 0x554) == '\0') {
      (**(code **)(*plVar4 + 0x68))(plVar4,&local_40,&local_48);
    }
    else {
      FUN_00f02170(plVar4,&local_40,&local_48,0,1,1,1);
    }
    lVar5 = FUN_00965ecc(param_1);
    local_40 = CONCAT44((float)(local_40 >> 0x20) /
                        (float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20),
                        (float)local_40 / (float)*(undefined8 *)(lVar5 + 0x10));
    lVar5 = FUN_00965ecc(param_1);
    local_48 = CONCAT44((float)((ulong)local_48 >> 0x20) /
                        (float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20),
                        (float)local_48 / (float)*(undefined8 *)(lVar5 + 0x10));
  }
  FUN_00967388(&local_4c,&local_50,0,0);
  FUN_00f0025c(&local_54,&local_58);
  local_60 = (float)local_48 - (float)local_40;
  local_5c = local_48._4_4_ - local_40._4_4_;
  local_54 = local_54 + (float)local_4c + 20.0;
  local_58 = local_58 + (float)local_50 + 20.0;
  if ((*(float *)(param_1 + 0x1b8) != (float)-local_4c) ||
     (*(float *)(param_1 + 0x1bc) != (float)-local_50)) {
    *(float *)(param_1 + 0x1b8) = (float)-local_4c;
    *(float *)(param_1 + 0x1bc) = (float)-local_50;
    FUN_0091ada4(param_1 + 0x178);
  }
  FUN_00f13f08(local_54,local_40._4_4_,param_1 + 0x178);
  *(uint *)(param_1 + 0x1fc) =
       *(uint *)(param_1 + 0x1fc) & 0xffffffef | (uint)*(byte *)(param_1 + 0x550) << 4;
  if ((*(float *)(param_1 + 0x2a8) != (float)-local_4c) ||
     (*(float *)(param_1 + 0x2ac) != local_48._4_4_ + (float)-local_50)) {
    *(float *)(param_1 + 0x2a8) = (float)-local_4c;
    *(float *)(param_1 + 0x2ac) = local_48._4_4_ + (float)-local_50;
    FUN_0091ada4(param_1 + 0x268);
  }
  FUN_00f13f08(local_54,local_58 - local_48._4_4_,param_1 + 0x268);
  *(uint *)(param_1 + 0x2ec) =
       *(uint *)(param_1 + 0x2ec) & 0xffffffef | (uint)*(byte *)(param_1 + 0x550) << 4;
  if ((*(float *)(param_1 + 0x398) != (float)-local_4c) ||
     (*(float *)(param_1 + 0x39c) != local_40._4_4_ + (float)-local_50)) {
    *(float *)(param_1 + 0x398) = (float)-local_4c;
    *(float *)(param_1 + 0x39c) = local_40._4_4_ + (float)-local_50;
    FUN_0091ada4(param_1 + 0x358);
  }
  fVar6 = local_5c;
  FUN_00f13f08(local_40 & 0xffffffff,local_5c,param_1 + 0x358);
  *(uint *)(param_1 + 0x3dc) =
       *(uint *)(param_1 + 0x3dc) & 0xffffffef | (uint)*(byte *)(param_1 + 0x550) << 4;
  if ((*(float *)(param_1 + 0x488) != (float)local_48 - (float)local_4c) ||
     (*(float *)(param_1 + 0x48c) != local_40._4_4_ + (float)-local_50)) {
    *(float *)(param_1 + 0x488) = (float)local_48 - (float)local_4c;
    *(float *)(param_1 + 0x48c) = local_40._4_4_ + (float)-local_50;
    FUN_0091ada4(param_1 + 0x448);
    fVar6 = local_5c;
  }
  FUN_00f13f08(local_54 - (float)local_48,fVar6,param_1 + 0x448);
  *(uint *)(param_1 + 0x4cc) =
       *(uint *)(param_1 + 0x4cc) & 0xffffffef | (uint)*(byte *)(param_1 + 0x550) << 4;
  FUN_00f13f18(param_1 + 0x88,&local_60);
  if ((*(float *)(param_1 + 200) != (float)local_40) ||
     (*(float *)(param_1 + 0xcc) != local_40._4_4_)) {
    *(ulong *)(param_1 + 200) = local_40;
    FUN_0091ada4(param_1 + 0x88);
  }
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x10c) =
       *(uint *)(param_1 + 0x10c) & 0xfffffffb | ((uint)*(byte *)(param_1 + 0x552) << 2 ^ 4) & 0xfc;
  uVar2 = uVar1 >> 7 & 0xff;
  if (*(char *)(param_1 + 0x551) == '\0') {
    if (uVar2 == 0) goto LAB_00addad0;
    uVar1 = uVar1 & 0xffff807f;
  }
  else {
    if (uVar2 == 0x99) goto LAB_00addad0;
    uVar1 = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x4c80;
  }
  *(uint *)(param_1 + 0x84) = uVar1;
  FUN_0091ada4(param_1);
LAB_00addad0:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00addafc(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if ((param_2 & 1) == 0) {
    ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  puVar2 = *ppuVar1;
  if ((param_2 & 1) == 0) {
    FUN_00f0e548(param_1 + 0x88,puVar2,"generic_keyhole");
  }
  FUN_00f0e670(param_1 + 0x88,&DAT_01bee7f6,2);
  FUN_00f0e548(param_1 + 0x178,puVar2,"white_background");
  FUN_00f0e670(param_1 + 0x178,&DAT_01bee7f6,2);
  FUN_00f0e548(param_1 + 0x268,puVar2,"white_background");
  FUN_00f0e670(param_1 + 0x268,&DAT_01bee7f6,2);
  FUN_00f0e548(param_1 + 0x448,puVar2,"white_background");
  FUN_00f0e670(param_1 + 0x448,&DAT_01bee7f6,2);
  FUN_00f0e548(param_1 + 0x358,puVar2,"white_background");
  FUN_00f0e670(param_1 + 0x358,&DAT_01bee7f6,2);
  return;
}




void FUN_00addc0c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_008fce60(param_1 + 0x558);
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x540) = param_3[1];
  *(undefined8 *)(param_1 + 0x538) = uVar1;
  uVar1 = *(undefined8 *)((long)param_3 + 0xd);
  *(undefined8 *)(param_1 + 0x54d) = *(undefined8 *)((long)param_3 + 0x15);
  *(undefined8 *)(param_1 + 0x545) = uVar1;
  FUN_00add76c(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00addc50(long *param_1)

{
  long lVar1;
  
  FUN_00f11234();
  FUN_00a9a518(param_1 + 0x34);
  FUN_00e83560(param_1 + 0x48);
  param_1[0x4c] = 0;
  *param_1 = (long)&PTR_FUN_027d86e0;
  param_1[0x34] = (long)&PTR_FUN_027d8898;
  param_1[0x48] = (long)&PTR_FUN_027d88f0;
  param_1[0x4b] = (long)&PTR_FUN_027d8920;
  FUN_00f11234(param_1 + 0x4d);
  FUN_00afb904(param_1 + 0x81);
  param_1[0xcc] = 0x4416000044160000;
  lVar1 = _DAT_03218ef8;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 1;
  *(undefined2 *)((long)param_1 + 0x68c) = 0;
  param_1[0xcd] = lVar1;
  *(undefined1 *)((long)param_1 + 0x68e) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x81,1);
  FUN_00f112f0(param_1,1);
  FUN_00addd34(param_1);
  FUN_009307c8(param_1 + 0x4b);
  return;
}




void FUN_00addd34(long param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x35f8);
  FUN_00ae172c();
  FUN_00afbb20(param_1 + 0x408,pvVar2);
  FUN_00f0e6e8((long)pvVar2 + 600,0);
  *(undefined4 *)((long)pvVar2 + 0x3540) = 0xff322213;
  local_40 = 0x3f0000003f000000;
  *(uint *)((long)pvVar2 + 0x79c) = *(uint *)((long)pvVar2 + 0x79c) & 0xfffffffb;
  FUN_00ade140(pvVar2,param_1 + 0x668,&local_40,&DAT_03218ef8,&DAT_03218ef8,param_1 + 0x660);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00addde8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_027d86e0;
  param_1[0x34] = &PTR_FUN_027d8898;
  param_1[0x48] = &PTR_FUN_027d88f0;
  param_1[0x4b] = &PTR_FUN_027d8920;
  uVar1 = FUN_009b8d90();
  FUN_009baadc(uVar1,&DAT_0320ffa8);
  FUN_0090eb54(param_1 + 0xcf,1);
  FUN_00afb98c(param_1 + 0x81);
  FUN_00f13d08(param_1 + 0x4d);
  FUN_0093051c(param_1 + 0x4b);
  FUN_00e835e0(param_1 + 0x48);
  FUN_00a9a5b8(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00adde88(long param_1)

{
  FUN_00addde8(param_1 + -0x1a0);
  return;
}




void FUN_00adde90(long param_1)

{
  FUN_00addde8(param_1 + -0x240);
  return;
}




void FUN_00adde98(long param_1)

{
  FUN_00addde8(param_1 + -600);
  return;
}




void FUN_00addea0(void *param_1)

{
  FUN_00addde8();
  operator_delete(param_1);
  return;
}




void FUN_00addec4(long param_1)

{
  FUN_00addde8((void *)(param_1 + -0x1a0));
  operator_delete((void *)(param_1 + -0x1a0));
  return;
}




void FUN_00addeec(long param_1)

{
  FUN_00addde8((void *)(param_1 + -0x240));
  operator_delete((void *)(param_1 + -0x240));
  return;
}




void FUN_00addf14(long param_1)

{
  FUN_00addde8((void *)(param_1 + -600));
  operator_delete((void *)(param_1 + -600));
  return;
}




void FUN_00addf3c(void)

{
  return;
}




void FUN_00addf40(void)

{
  return;
}




void FUN_00addf44(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0092e8e0();
  if ((uVar1 & 1) != 0) {
    FUN_00a9b70c(param_1 + 0x1a0);
                    /* WARNING: Could not recover jumptable at 0x00addf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x1a0) + 0x18))(param_1 + 0x1a0);
    return;
  }
  return;
}




void FUN_00addf8c(long param_1)

{
  FUN_00a9b70c(param_1 + 0x1a0);
                    /* WARNING: Could not recover jumptable at 0x00addfbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x1a0) + 0x18))(param_1 + 0x1a0);
  return;
}




void FUN_00addfc0(long param_1)

{
  FUN_00a9b054(param_1 + 0x1a0);
  FUN_00afb9e0(param_1 + 0x408);
  return;
}




void FUN_00addfe8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1a0;
  FUN_00a9a708(lVar1);
  FUN_00a9b70c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00ade020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x1a0) + 0x18))(lVar1);
  return;
}

