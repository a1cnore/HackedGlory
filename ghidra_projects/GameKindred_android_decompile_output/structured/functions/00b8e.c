// functions/00b8e — 16 functions
#include "libGameKindred.h"




void FUN_00b8e4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474(param_3);
  uVar1 = FUN_0091ed5c(param_3,uVar1,0x1234);
  FUN_00b8dd44(param_1,param_2,uVar1,param_4,param_5 & 1);
  return;
}




void FUN_00b8e544(long param_1,short param_2,uint param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    do {
      if ((*(int *)((long)plVar1 + 0x84) << 1) >> 0x10 == (int)param_2) {
                    /* WARNING: Could not recover jumptable at 0x00b8e578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x168))(plVar1,param_3 & 1);
        return;
      }
      plVar1 = (long *)plVar1[6];
    } while (plVar1 != (long *)0x0);
  }
  return;
}




void FUN_00b8e57c(long param_1,short param_2,uint param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    do {
      if ((*(int *)((long)plVar1 + 0x84) << 1) >> 0x10 == (int)param_2) {
                    /* WARNING: Could not recover jumptable at 0x00b8e5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x158))(plVar1,param_3 & 1);
        return;
      }
      plVar1 = (long *)plVar1[6];
    } while (plVar1 != (long *)0x0);
  }
  return;
}




void FUN_00b8e5b4(long param_1,byte *param_2)

{
  ulong uVar1;
  
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    uVar1 = (ulong)(*param_2 >> 1);
    if ((*param_2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b8e5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x88) + 0x160))();
      return;
    }
  }
  return;
}




void FUN_00b8e5e4(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00b8e5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))(param_2,1);
  return;
}




void FUN_00b8e5f8(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00b8e608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))(param_2,0);
  return;
}




void FUN_00b8e60c(void *param_1)

{
  FUN_00f01868();
  operator_delete(param_1);
  return;
}




void FUN_00b8e630(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  
  FUN_00b89cd8();
  *param_1 = (long)&PTR_FUN_027e8528;
  FUN_00f13ca4(param_1 + 0x19);
  plVar1 = param_1 + 0x30;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x4e;
  FUN_00f0e4a8(plVar2);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfc;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) | 2;
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_1 + 0x204);
  if ((uVar3 & 0x7f80) == 0x5280) {
    return;
  }
  *(uint *)((long)param_1 + 0x204) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5280;
  FUN_0091ada4(plVar1);
  return;
}




void FUN_00b8e790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e8528;
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  param_1[0x30] = &PTR_FUN_028266f0;
  param_1[0x47] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4a);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b8e818(void *param_1)

{
  FUN_00b8e790();
  operator_delete(param_1);
  return;
}




void FUN_00b8e83c(long *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b8e848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))();
    return;
  }
  return;
}




void FUN_00b8e850(void)

{
  return;
}




void FUN_00b8e854(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b8e85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b8e860(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  float local_4c;
  float local_48;
  float local_44;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar4 & 1,&local_44,&local_48,&local_4c);
  lVar1 = param_1 + 0x270;
  FUN_00f13f08(0x41f00000,local_48,lVar1);
  if ((*(float *)(param_1 + 0x2b0) != local_4c) || (*(float *)(param_1 + 0x2b4) != 0.0)) {
    *(float *)(param_1 + 0x2b0) = local_4c;
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_0091ada4(lVar1);
  }
  local_40 = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x270) + 0x28))(lVar1,&local_40);
  plVar2 = (long *)(param_1 + 0x180);
  FUN_00f13f08(local_44 - local_4c,0x43480000,plVar2);
  if ((*(float *)(param_1 + 0x1c0) != local_4c) || (*(float *)(param_1 + 0x1c4) != local_48)) {
    *(float *)(param_1 + 0x1c0) = local_4c;
    *(float *)(param_1 + 0x1c4) = local_48;
    FUN_0091ada4(plVar2);
  }
  local_40 = 0x3f80000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_40);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8e994(undefined8 *param_1)

{
  FUN_00b8e630();
  FUN_00e83560(param_1 + 0x6d);
  FUN_00948cd8(param_1 + 0x70);
  param_1[0x73] = &PTR_FUN_027e9018;
  FUN_00cb9b34(param_1 + 0x74);
  *param_1 = &PTR_FUN_027e86a8;
  param_1[0x6d] = &PTR_FUN_027e88c0;
  param_1[0x70] = &PTR_FUN_027e88f0;
  param_1[0x78] = 0;
  param_1[0x74] = &PTR_FUN_027e8ce8;
  param_1[0x73] = &PTR_FUN_027e8c88;
  param_1[0x77] = &PTR_FUN_027e8d10;
  FUN_00f13ca4(param_1 + 0x79);
  FUN_00f0e4a8(param_1 + 0x90);
  FUN_00f0e4a8(param_1 + 0xae);
  FUN_00f0d160(param_1 + 0xcc);
  FUN_00f0d160(param_1 + 0xf2);
  FUN_00ab6c24(param_1 + 0x118,0);
  FUN_00ab6c24(param_1 + 0x3d0,0);
  FUN_00f11234(param_1 + 0x688);
  FUN_00f0d160(param_1 + 0x6bc);
  FUN_00f11234(param_1 + 0x6e2);
  FUN_00ecfd6c(param_1 + 0x716,0);
  FUN_00f13ca4(param_1 + 0x7bd);
  FUN_00f0e4a8(param_1 + 0x7d4);
  FUN_00f0e4a8(param_1 + 0x7f2);
  FUN_00f0e4a8(param_1 + 0x810);
  FUN_00f0d160(param_1 + 0x82e);
  FUN_00f0d160(param_1 + 0x854);
  FUN_00f017e8(param_1 + 0x87a);
  param_1[0x87a] = &PTR_FUN_027c1f80;
  FUN_00b08d84(param_1 + 0x88b);
  FUN_00f0d160(param_1 + 0x8d9);
  FUN_00f0e4a8(param_1 + 0x8ff);
  FUN_00b99b6c(param_1 + 0x91d);
  FUN_00f017e8(param_1 + 0x9dc);
  param_1[0x9dc] = &PTR_FUN_027c1f80;
  FUN_00b08d84(param_1 + 0x9ed);
  FUN_00f0d160(param_1 + 0xa3b);
  FUN_00f0e4a8(param_1 + 0xa61);
  FUN_00b99b6c(param_1 + 0xa7f);
  FUN_00f017e8(param_1 + 0xb3e);
  param_1[0xb3e] = &PTR_FUN_027c1f80;
  FUN_00b08d84(param_1 + 0xb4f);
  FUN_00f0d160(param_1 + 0xb9d);
  FUN_00f0e4a8(param_1 + 0xbc3);
  FUN_00b99b6c(param_1 + 0xbe1);
  FUN_00f017e8(param_1 + 0xca0);
  param_1[0xca0] = &PTR_FUN_027c1f80;
  FUN_00b08d84(param_1 + 0xcb1);
  FUN_00f0d160(param_1 + 0xcff);
  FUN_00f0e4a8(param_1 + 0xd25);
  FUN_00b99b6c(param_1 + 0xd43);
  FUN_00f017e8(param_1 + 0xe02);
  param_1[0xe02] = &PTR_FUN_027c1f80;
  FUN_00b08d84(param_1 + 0xe13);
  FUN_00f0d160(param_1 + 0xe61);
  FUN_00f0e4a8(param_1 + 0xe87);
  FUN_00b99b6c(param_1 + 0xea5);
  FUN_00f017e8(param_1 + 0xf64);
  param_1[0xf64] = &PTR_FUN_027c1f80;
  FUN_00b08d84(param_1 + 0xf75);
  FUN_00f0d160(param_1 + 0xfc3);
  FUN_00f0e4a8(param_1 + 0xfe9);
  FUN_00b99b6c(param_1 + 0x1007);
  FUN_00f017e8(param_1 + 0x10c6);
  param_1[0x10c6] = &PTR_FUN_027c1f80;
  FUN_00b08d84(param_1 + 0x10d7);
  FUN_00f0d160(param_1 + 0x1125);
  FUN_00f0e4a8(param_1 + 0x114b);
  FUN_00b99b6c(param_1 + 0x1169);
  FUN_00b15e58(param_1 + 0x1228,0);
  FUN_00f0e4a8(param_1 + 0x12d7);
  FUN_00f0d160(param_1 + 0x12f5);
  FUN_00f017e8(param_1 + 0x131b);
  param_1[0x131b] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x132c);
  FUN_00f017e8(param_1 + 0x134a);
  param_1[0x134a] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x135b);
  FUN_00f0d160(param_1 + 0x1379);
  FUN_00abaee8(param_1 + 0x139f,0);
  FUN_00abaee8(param_1 + 0x145e,0);
  FUN_00abaee8(param_1 + 0x151d,0);
  FUN_00abaee8(param_1 + 0x15dc,0);
  FUN_00f0d160(param_1 + 0x169b);
  FUN_00ac7e14(param_1 + 0x16c1);
  FUN_00ac05a8(param_1 + 0x1be8,param_1 + 0x73);
  memset(param_1 + 0x2408,0,0x78);
  FUN_00f017e8(param_1 + 0x2417);
  param_1[0x2417] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x2428);
  FUN_00f0d160(param_1 + 0x2446);
  FUN_00b27c04(param_1 + 0x246c,0);
  FUN_00b27c04(param_1 + 0x2489,0);
  param_1[0x24b4] = 0;
  param_1[0x24b3] = 0;
  memset(param_1 + 0x24a6,0,100);
  *(undefined4 *)(param_1 + 0x24b5) = 0xffffffff;
  FUN_00aa1380(param_1 + 0x24b6);
  FUN_00e70510(param_1 + 0x24b7);
  FUN_008fcdb8(param_1 + 0x24b9,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x24bc,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x24bf,&DAT_0320ffa8);
  thunk_FUN_00e7051c(param_1 + 0x24c2,&DAT_03210450);
  FUN_008fcdb8(param_1 + 0x24c4,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x24c7,&DAT_0320ffa8);
  param_1[0x24ca] = 0x43840000443e0000;
  param_1[0x24cc] = 0;
  param_1[0x24cb] = 0xa0000001e;
  *(undefined2 *)((long)param_1 + 0x12669) = 0;
  *(undefined8 *)((long)param_1 + 0x1266b) = 0x1010101;
  *(undefined2 *)((long)param_1 + 0x12673) = 1;
  FUN_00b8ef60(param_1);
  FUN_00915ec0(param_1 + 0x77);
  return;
}




void FUN_00b8ef60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
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
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  float *pfVar40;
  uint *puVar41;
  char *pcVar42;
  undefined4 uVar43;
  long lVar44;
  undefined8 uVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  long lVar49;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  long *plStack_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long local_a0;
  
  lVar44 = tpidr_el0;
  local_a0 = *(long *)(lVar44 + 0x28);
  plVar1 = param_1 + 0x79;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x90;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar5 = param_1 + 0x131b;
  FUN_00f023ec(plVar1,plVar5,1);
  plVar6 = param_1 + 0x132c;
  FUN_00f023ec(plVar5,plVar6,1);
  plVar7 = param_1 + 0x134a;
  FUN_00f023ec(plVar5,plVar7,1);
  plVar8 = param_1 + 0x1be8;
  FUN_00f023ec(plVar7,plVar8,1);
  plVar9 = param_1 + 0x135b;
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f023ec(plVar7,param_1 + 0x1379,1);
  FUN_00f023ec(plVar7,param_1 + 0x139f,1);
  FUN_00f023ec(plVar7,param_1 + 0x145e,1);
  FUN_00f023ec(plVar7,param_1 + 0x151d,1);
  FUN_00f023ec(plVar7,param_1 + 0x15dc,1);
  FUN_00f023ec(plVar7,param_1 + 0x169b,1);
  plVar5 = param_1 + 0x2417;
  FUN_00f023ec(plVar7,plVar5,1);
  plVar10 = param_1 + 0x2428;
  FUN_00f023ec(plVar5,plVar10,1);
  plVar11 = param_1 + 0x2446;
  FUN_00f023ec(plVar5,plVar11,1);
  plVar12 = param_1 + 0x16c1;
  FUN_00f023ec(plVar7,plVar12,1);
  plVar13 = param_1 + 0x688;
  FUN_00f023ec(plVar1,plVar13,1);
  plVar14 = param_1 + 0x6bc;
  FUN_00f023ec(plVar13,plVar14,1);
  plVar15 = param_1 + 0x6e2;
  FUN_00f023ec(plVar13,plVar15,1);
  plVar16 = param_1 + 0x716;
  FUN_00f023ec(plVar15,plVar16,1);
  FUN_00ed026c(plVar16,param_1 + 0x87a,1);
  FUN_00ed026c(plVar16,param_1 + 0x9dc,1);
  FUN_00ed026c(plVar16,param_1 + 0xb3e,1);
  FUN_00ed026c(plVar16,param_1 + 0xca0,1);
  FUN_00ed026c(plVar16,param_1 + 0xe02,1);
  FUN_00ed026c(plVar16,param_1 + 0xf64,1);
  FUN_00ed026c(plVar16,param_1 + 0x10c6,1);
  FUN_00ed026c(plVar16,param_1 + 0x88b,1);
  FUN_00ed026c(plVar16,param_1 + 0x9ed,1);
  plVar17 = param_1 + 0xb4f;
  FUN_00ed026c(plVar16,plVar17,1);
  plVar18 = param_1 + 0xe13;
  FUN_00ed026c(plVar16,plVar18,1);
  plVar19 = param_1 + 0xf75;
  FUN_00ed026c(plVar16,plVar19,1);
  plVar20 = param_1 + 0xcb1;
  FUN_00ed026c(plVar16,plVar20,1);
  plVar21 = param_1 + 0x10d7;
  FUN_00ed026c(plVar16,plVar21,1);
  plVar22 = param_1 + 0x82e;
  FUN_00ed026c(plVar16,plVar22,1);
  plVar23 = param_1 + 0x854;
  FUN_00ed026c(plVar16,plVar23,1);
  plVar24 = param_1 + 0x8d9;
  FUN_00ed026c(plVar16,plVar24,1);
  FUN_00ed026c(plVar16,param_1 + 0x91d,1);
  plVar25 = param_1 + 0xa3b;
  FUN_00ed026c(plVar16,plVar25,1);
  FUN_00ed026c(plVar16,param_1 + 0xa7f,1);
  plVar26 = param_1 + 0xa61;
  FUN_00ed026c(plVar16,plVar26,1);
  plVar27 = param_1 + 0xb9d;
  FUN_00ed026c(plVar16,plVar27,1);
  FUN_00ed026c(plVar16,param_1 + 0xbe1,1);
  plVar28 = param_1 + 0xbc3;
  FUN_00ed026c(plVar16,plVar28,1);
  plVar29 = param_1 + 0xe61;
  FUN_00ed026c(plVar16,plVar29,1);
  plVar30 = param_1 + 0xe87;
  FUN_00ed026c(plVar16,plVar30,1);
  FUN_00ed026c(plVar16,param_1 + 0xea5,1);
  plVar31 = param_1 + 0xfc3;
  FUN_00ed026c(plVar16,plVar31,1);
  plVar32 = param_1 + 0xfe9;
  FUN_00ed026c(plVar16,plVar32,1);
  FUN_00ed026c(plVar16,param_1 + 0x1007,1);
  plVar33 = param_1 + 0xcff;
  FUN_00ed026c(plVar16,plVar33,1);
  FUN_00ed026c(plVar16,param_1 + 0xd43,1);
  plVar34 = param_1 + 0xd25;
  FUN_00ed026c(plVar16,plVar34,1);
  plVar35 = param_1 + 0x1125;
  FUN_00ed026c(plVar16,plVar35,1);
  FUN_00ed026c(plVar16,param_1 + 0x1169,1);
  plVar36 = param_1 + 0x114b;
  FUN_00ed026c(plVar16,plVar36,1);
  FUN_00ed026c(plVar16,param_1 + 0x1228,1);
  FUN_00ed026c(plVar16,param_1 + 0x12d7,1);
  FUN_00ed026c(plVar16,param_1 + 0x12f5,1);
  FUN_00ed026c(plVar16,param_1 + 0x2489,1);
  FUN_00f023ec(plVar1,param_1 + 0x7bd,1);
  plVar5 = param_1 + 0x118;
  FUN_00f023ec(plVar1,plVar5,1);
  plVar37 = param_1 + 0x3d0;
  FUN_00f023ec(plVar1,plVar37,1);
  plVar38 = param_1 + 0x7f2;
  FUN_00f023ec(plVar1,plVar38,1);
  plVar39 = param_1 + 0x810;
  FUN_00f023ec(plVar1,plVar39,1);
  FUN_00f023ec(plVar1,param_1 + 0x246c,1);
  plVar1 = param_1 + 0xae;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar7 = param_1 + 0xcc;
  FUN_00f023ec(plVar1,plVar7,1);
  *(uint *)((long)param_1 + 0x504) = *(uint *)((long)param_1 + 0x504) | 0x10;
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xff362626);
  FUN_00f0e670(plVar2,&local_d0,2);
  uVar46 = *(uint *)((long)param_1 + 0x504);
  if ((uVar46 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x504) = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x2600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7fa,2);
  uVar46 = *(uint *)((long)param_1 + 0x5f4);
  if ((uVar46 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x5f4) = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar1);
  }
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_FRIENDS_TITLE",0);
  FUN_00f0d75c(param_1 + 0xf2,uVar45);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_BROADCAST_PRESENCE",0);
  FUN_00ab703c(0x41a00000,0x43480000,0x43fa0000,plVar5,0,uVar45,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00f0d92c(param_1 + 0x1fc,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xff404040);
  FUN_00ab7588(0x3f800000,plVar5,&local_d0);
  FUN_00ab7538(0x3f000000,plVar5,&DAT_01bee7fa);
  local_b8 = 0;
  local_b0 = 0;
  uVar43 = DAT_03210c64;
  local_d0 = thunk_FUN_00b9fd14;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x119,&local_d0);
  FUN_00ab7628(0x42a5999a,plVar5);
  *(uint *)((long)param_1 + 0x944) = *(uint *)((long)param_1 + 0x944) & 0xfffffffb;
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND",0);
  FUN_00ab703c(0x41a00000,0x43480000,0x43fa0000,plVar37,0,uVar45,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00f0d92c(param_1 + 0x4b4,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xff404040);
  FUN_00ab7588(0x3f800000,plVar37,&local_d0);
  FUN_00ab7538(0x3f000000,plVar37,&DAT_01bee7fa);
  local_d0 = thunk_FUN_00b9fdb0;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x3d1,&local_d0);
  FUN_00ab7628(0x42a5999a,plVar37);
  fVar47 = (float)FUN_00f13e54(plVar37);
  fVar48 = (float)FUN_00f13e54(plVar5);
  pfVar40 = (float *)(param_1 + 0x24ca);
  if (fVar47 <= fVar48) {
    fVar47 = fVar48;
  }
  fVar48 = fVar47 + -20.0;
  if (*pfVar40 + -150.0 <= fVar47 + -20.0) {
    fVar48 = *pfVar40 + -150.0;
  }
  FUN_00ab75d0(0x41a00000,fVar48,fVar48,plVar37);
  FUN_00ab75d0(0x41a00000,fVar48,fVar48,plVar5);
  FUN_00f0e548(plVar38,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0x80d) = *(byte *)(param_1 + 0x80d) | 2;
  FUN_00f0e670(plVar38,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar39,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar39,&local_d0,2);
  FUN_00f112f0(plVar13,0);
  *(uint *)((long)param_1 + 0x3e6c) = *(uint *)((long)param_1 + 0x3e6c) | 0x10;
  FUN_00f112f0(plVar15,1);
  FUN_00ed0680(plVar16,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed04d8(plVar16,0,1);
  FUN_00ed0578(0,0,plVar16);
  FUN_00ed0650(0x3e800000,0x3f800000,plVar16);
  local_a8 = DAT_03210f60;
  local_d0 = thunk_FUN_00b9fe74;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  FUN_009693a0(param_1 + 0x717,&local_d0);
  local_d0 = thunk_FUN_00b9fe74;
  local_a8 = DAT_03210f8c;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  FUN_009693a0(param_1 + 0x717,&local_d0);
  FUN_00f0d7fc(plVar14,&DAT_01bee7f6);
  FUN_00f0db24(0x40800000,plVar14);
  uVar45 = FUN_00e6ce7c("MENU_NEWSFEED_PULLTOREFRESH",0);
  FUN_00f0d75c(plVar14,uVar45);
  if ((*(float *)(param_1 + 0x6c5) != 0.66) || (*(float *)((long)param_1 + 0x362c) != 0.66)) {
    param_1[0x6c5] = 0x3f28f5c33f28f5c3;
    FUN_0091ada4(plVar14);
  }
  FUN_00f0d7fc(plVar22,&DAT_01bee7fa);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_SAD_AND_EMPTY",0);
  FUN_00f0d75c(plVar22,uVar45);
  *(uint *)((long)param_1 + 0x41f4) = *(uint *)((long)param_1 + 0x41f4) & 0xfffffffb;
  FUN_00f0dac8(plVar22,3);
  FUN_00f0d7fc(plVar23,&DAT_01bee7fa);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_HOW_TO_ADD",0);
  FUN_00f0d75c(plVar23,uVar45);
  *(uint *)((long)param_1 + 0x4324) = *(uint *)((long)param_1 + 0x4324) & 0xfffffffb;
  FUN_00f0dac8(plVar23,3);
  *(uint *)((long)param_1 + 0x44dc) = *(uint *)((long)param_1 + 0x44dc) | 0x10;
  FUN_00f0d92c(plVar24,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_00f0d75c(plVar24,uVar45);
  plVar1 = param_1 + 0x8ff;
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar1,&local_d0,2);
  puVar41 = (uint *)((long)param_1 + 0x487c);
  uVar46 = *puVar41;
  if ((uVar46 & 0x7f80) != 0x1300) {
    *puVar41 = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x1300;
    FUN_0091ada4(plVar1);
    uVar46 = *puVar41;
  }
  *puVar41 = uVar46 & 0xfffffffb;
  FUN_00f13f08(*pfVar40,0x42b00000,param_1 + 0x88b);
  local_d0 = FUN_00b99c08;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x88c,&local_d0);
  local_d0 = FUN_00b99c08;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x91e,&local_d0);
  pcVar3 = "arrow_down";
  pcVar4 = "arrow_right";
  if ((char)param_1[0x24cd] != '\0') {
    pcVar4 = pcVar3;
  }
  FUN_00f0e578(param_1 + 0x9b8,pcVar4);
  *(uint *)((long)param_1 + 0x4fec) = *(uint *)((long)param_1 + 0x4fec) | 0x10;
  FUN_00f0d92c(plVar25,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_REQUESTS_TITLE",0);
  FUN_00f0d75c(plVar25,uVar45);
  FUN_00f0e548(plVar26,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar26,&local_d0,2);
  puVar41 = (uint *)((long)param_1 + 0x538c);
  uVar46 = *puVar41;
  if ((uVar46 & 0x7f80) != 0x1300) {
    *puVar41 = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x1300;
    FUN_0091ada4(plVar26);
    uVar46 = *puVar41;
  }
  *puVar41 = uVar46 & 0xfffffffb;
  FUN_00f13f08(*pfVar40,0x42b00000,param_1 + 0x9ed);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 1;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x9ee,&local_d0);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 1;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0xa80,&local_d0);
  pcVar4 = "arrow_right";
  if (*(char *)((long)param_1 + 0x12669) != '\0') {
    pcVar4 = pcVar3;
  }
  FUN_00f0e578(param_1 + 0xb1a,pcVar4);
  *(uint *)((long)param_1 + 0x5afc) = *(uint *)((long)param_1 + 0x5afc) | 0x10;
  FUN_00b0914c(plVar17,1);
  FUN_00f0d92c(plVar27,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_CONVERSATIONS_TITLE",0);
  FUN_00f0d75c(plVar27,uVar45);
  FUN_00f0e548(plVar28,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar28,&local_d0,2);
  puVar41 = (uint *)((long)param_1 + 0x5e9c);
  uVar46 = *puVar41;
  if ((uVar46 & 0x7f80) != 0x1300) {
    *puVar41 = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x1300;
    FUN_0091ada4(plVar28);
    uVar46 = *puVar41;
  }
  *puVar41 = uVar46 & 0xfffffffb;
  FUN_00f13f08(*pfVar40,0x42b00000,plVar17);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 2;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0xb50,&local_d0);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 2;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0xbe2,&local_d0);
  pcVar4 = "arrow_right";
  pcVar42 = pcVar4;
  if (*(char *)((long)param_1 + 0x1266b) != '\0') {
    pcVar42 = pcVar3;
  }
  FUN_00f0e578(param_1 + 0xc7c,pcVar42);
  *(uint *)((long)param_1 + 0x7c2c) = *(uint *)((long)param_1 + 0x7c2c) | 0x10;
  FUN_00b0914c(plVar19,1);
  FUN_00f0d92c(plVar31,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar45 = FUN_00e6ce7c("MENU_TEAM_TITLE",0);
  FUN_00f0d75c(plVar31,uVar45);
  FUN_00f0e548(plVar32,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar32,&local_d0,2);
  puVar41 = (uint *)((long)param_1 + 0x7fcc);
  uVar46 = *puVar41;
  if ((uVar46 & 0x7f80) != 0x1300) {
    *puVar41 = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x1300;
    FUN_0091ada4(plVar32);
    uVar46 = *puVar41;
  }
  *puVar41 = uVar46 & 0xfffffffb;
  FUN_00f13f08(*pfVar40,0x42300000,plVar19);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 6;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0xf76,&local_d0);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 6;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x1008,&local_d0);
  pcVar42 = pcVar4;
  if (*(char *)((long)param_1 + 0x1266d) != '\0') {
    pcVar42 = pcVar3;
  }
  FUN_00f0e578(param_1 + 0x10a2,pcVar42);
  *(uint *)((long)param_1 + 0x711c) = *(uint *)((long)param_1 + 0x711c) | 0x10;
  FUN_00b0914c(plVar18,1);
  FUN_00f0d92c(plVar29,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar45 = FUN_00e6ce7c("MENU_GUILD_TITLE",0);
  FUN_00f0d75c(plVar29,uVar45);
  FUN_00f0e548(plVar30,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar30,&local_d0,2);
  puVar41 = (uint *)((long)param_1 + 0x74bc);
  uVar46 = *puVar41;
  if ((uVar46 & 0x7f80) != 0x1300) {
    *puVar41 = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x1300;
    FUN_0091ada4(plVar30);
    uVar46 = *puVar41;
  }
  *puVar41 = uVar46 & 0xfffffffb;
  FUN_00f13f08(*pfVar40,0x42b00000,plVar18);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 5;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0xe14,&local_d0);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 5;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0xea6,&local_d0);
  pcVar42 = pcVar4;
  if (*(char *)((long)param_1 + 0x1266c) != '\0') {
    pcVar42 = pcVar3;
  }
  FUN_00f0e578(param_1 + 0xf40,pcVar42);
  *(uint *)((long)param_1 + 0x660c) = *(uint *)((long)param_1 + 0x660c) | 0x10;
  FUN_00b0914c(plVar20,1);
  FUN_00f0d92c(plVar33,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_00f0d75c(plVar33,uVar45);
  FUN_00f0e548(plVar34,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar34,&local_d0,2);
  puVar41 = (uint *)((long)param_1 + 0x69ac);
  uVar46 = *puVar41;
  if ((uVar46 & 0x7f80) != 0x1300) {
    *puVar41 = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x1300;
    FUN_0091ada4(plVar34);
    uVar46 = *puVar41;
  }
  *puVar41 = uVar46 & 0xfffffffb;
  FUN_00f13f08(*pfVar40,0x42b00000,plVar20);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 3;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0xcb2,&local_d0);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 3;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0xd44,&local_d0);
  if (*(char *)((long)param_1 + 0x1266e) != '\0') {
    pcVar4 = pcVar3;
  }
  FUN_00f0e578(param_1 + 0xdde,pcVar4);
  *(uint *)((long)param_1 + 0x873c) = *(uint *)((long)param_1 + 0x873c) | 0x10;
  FUN_00b0914c(plVar21,1);
  FUN_00f0d92c(plVar35,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_00f0d75c(plVar35,uVar45);
  FUN_00f0e548(plVar36,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar36,&local_d0,2);
  puVar41 = (uint *)((long)param_1 + 0x8adc);
  uVar46 = *puVar41;
  if ((uVar46 & 0x7f80) != 0x1300) {
    *puVar41 = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x1300;
    FUN_0091ada4(plVar36);
    uVar46 = *puVar41;
  }
  *puVar41 = uVar46 & 0xfffffffb;
  FUN_00f0e548(param_1 + 0x12d7,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_chat_bubble");
  FUN_00f0d92c(param_1 + 0x12f5,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7f6);
  FUN_00f13f08(*pfVar40,0x42b00000,plVar21);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 4;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x10d8,&local_d0);
  local_d0 = FUN_00b99c08;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 4;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x116a,&local_d0);
  pcVar4 = "arrow_right";
  if (*(char *)((long)param_1 + 0x1266f) != '\0') {
    pcVar4 = pcVar3;
  }
  FUN_00f0e578(param_1 + 0x1204,pcVar4);
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  uVar46 = *(uint *)((long)param_1 + 0x99e4);
  if ((uVar46 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x99e4) = uVar46 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar6);
  }
  *(uint *)((long)param_1 + 0x9ad4) = *(uint *)((long)param_1 + 0x9ad4) & 0xfffffffb;
  FUN_00f0d92c(param_1 + 0x1379,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00f0e578(param_1 + 0x143a,"generic_star_outline");
  *(uint *)((long)param_1 + 0xa074) = *(uint *)((long)param_1 + 0xa074) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xa164) = *(uint *)((long)param_1 + 0xa164) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,param_1 + 0x139f);
  lVar49 = NEON_fmov(0xc1200000,4);
  param_1[0x13aa] = lVar49;
  local_d0 = thunk_FUN_00b9ff4c;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x13a0,&local_d0);
  FUN_00f0e578(param_1 + 0x14f9,"generic_x");
  *(uint *)((long)param_1 + 0xa66c) = *(uint *)((long)param_1 + 0xa66c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xa75c) = *(uint *)((long)param_1 + 0xa75c) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,param_1 + 0x145e);
  param_1[0x1469] = lVar49;
  local_d0 = thunk_FUN_00ba01c4;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x145f,&local_d0);
  FUN_00f0e578(param_1 + 0x15b8,"generic_guild_outline");
  *(uint *)((long)param_1 + 0xac64) = *(uint *)((long)param_1 + 0xac64) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xad54) = *(uint *)((long)param_1 + 0xad54) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,param_1 + 0x151d);
  param_1[0x1528] = lVar49;
  local_d0 = thunk_FUN_00ba0544;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x151e,&local_d0);
  *(uint *)((long)param_1 + 0xa96c) = *(uint *)((long)param_1 + 0xa96c) & 0xfffffffb;
  FUN_00f0e578(param_1 + 0x1677,"generic_team_outline");
  *(uint *)((long)param_1 + 0xb25c) = *(uint *)((long)param_1 + 0xb25c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xb34c) = *(uint *)((long)param_1 + 0xb34c) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,param_1 + 0x15dc);
  param_1[0x15e7] = lVar49;
  local_d0 = thunk_FUN_00ba0a68;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  local_a8 = uVar43;
  FUN_009693a0(param_1 + 0x15dd,&local_d0);
  *(uint *)((long)param_1 + 0xaf64) = *(uint *)((long)param_1 + 0xaf64) & 0xfffffffb;
  FUN_00f0d92c(param_1 + 0x169b,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  *(uint *)((long)param_1 + 0x1213c) = *(uint *)((long)param_1 + 0x1213c) & 0xfffffffb;
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar46 = *(uint *)((long)param_1 + 0x121c4);
  if ((uVar46 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x121c4) = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x3900;
    FUN_0091ada4(plVar10);
  }
  FUN_00f0d92c(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_STAR_BALLOON",0);
  FUN_00f0d75c(plVar11,uVar45);
  FUN_00f0dac8(plVar11,0);
  local_e0 = 0;
  uStack_d8 = 0;
  uVar45 = FUN_00e6ce7c("MENU_GUILD_CHANNEL_NOTIFICATION_LEVEL_ALL",0);
  FUN_0090ea30(&local_e0,uVar45);
  uVar45 = FUN_00e6ce7c("MENU_GUILD_CHANNEL_NOTIFICATION_LEVEL_THROTTLED",0);
  FUN_0090ea30(&local_e0,uVar45);
  uVar45 = FUN_00e6ce7c("MENU_GUILD_CHANNEL_NOTIFICATION_LEVEL_NONE",0);
  FUN_0090ea30(&local_e0,uVar45);
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_008fa54c(&local_d0,PTR_s_all_02be9d20);
  FUN_0096204c(&local_f0,&local_d0);
  if (((ulong)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  FUN_008fa54c(&local_d0,PTR_s_throttled_02be9d28);
  FUN_0096204c(&local_f0,&local_d0);
  if (((ulong)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  FUN_008fa54c(&local_d0,PTR_s_off_02be9d30);
  FUN_0096204c(&local_f0,&local_d0);
  if (((ulong)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  FUN_00ac876c(*pfVar40 * 0.6,*pfVar40 * 0.6,0,0x3f800000,0x3f800000,plVar12,&local_e0,&local_f0,1,1
               ,0);
  FUN_00aca914(plVar12,1,1);
  local_a8 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_d0 = thunk_FUN_00ba1148;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  FUN_009693a0(param_1 + 0x16c2,&local_d0);
  *(uint *)((long)param_1 + 0xb68c) = *(uint *)((long)param_1 + 0xb68c) & 0xfffffffb;
  uVar45 = FUN_00cb9378();
  FUN_00ac9b64(plVar12,uVar45,1,1);
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar9,&local_d0,2);
  uVar46 = *(uint *)((long)param_1 + 0x9b5c);
  if ((uVar46 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x9b5c) = uVar46 & 0xffff8000 | uVar46 & 0x7f | 0x1300;
    FUN_0091ada4(plVar9);
  }
  FUN_00ac1b34(plVar8,&DAT_0320ffa8);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_CHAT_CONNECTING",0);
  FUN_00ac1e58(plVar8,uVar45);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_CHAT_ERROR_CONNECTING",0);
  FUN_00ac1e64(plVar8,uVar45);
  FUN_008fa54c(&local_d0,&DAT_01bb74bb);
  FUN_008fce60(param_1 + 0x23fc,&local_d0);
  if (((ulong)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  local_a8 = FUN_00f048a4("UI::EVENT_MENU_FRIENDS_SELECTED");
  local_d0 = FUN_00b99c24;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  plStack_c8 = param_1;
  FUN_009693a0(param_1 + 1,&local_d0);
  FUN_00f0dac8(plVar7,3);
  uVar45 = FUN_00e6ce7c("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
  FUN_00f0d75c(plVar7,uVar45);
  FUN_00f0d7fc(plVar7,&DAT_01bee7f6);
  FUN_00f01a4c(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x150))(param_1);
  FUN_00951534(&local_f0,1);
  FUN_0090eb54(&local_e0,1);
  if (*(long *)(lVar44 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

