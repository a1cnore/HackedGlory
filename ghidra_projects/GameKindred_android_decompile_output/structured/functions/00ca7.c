// functions/00ca7 — 35 functions
#include "libGameKindred.h"




void FUN_00ca7048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_00f0e548(param_1 + 0xb8);
  FUN_00f0d75c(param_1 + 0x1a8,param_4);
  FUN_00f0d75c(param_1 + 0x2d8,param_5);
  FUN_00c938d4(param_1 + 0x408,param_6);
  FUN_00c938d4(param_1 + 0xe50,param_7);
  return;
}




void FUN_00ca70b8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ca70c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00ca70c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  
  plVar1 = param_1 + 0x17;
  FUN_00f07940(0,0,plVar1,4,param_1,4);
  plVar2 = param_1 + 0x35;
  fVar4 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0dad0(fVar4 + -240.0,plVar2,1);
  plVar3 = param_1 + 0x5b;
  fVar4 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0dad0(fVar4 + -240.0,plVar3,1);
  FUN_00f07b18(0xc1f00000,plVar2,0,plVar1,2);
  FUN_00f07b18(0,plVar2,4,plVar1,4);
  FUN_00f07b18(0x41a00000,plVar3,0,plVar2,2);
  FUN_00f07b18(0,plVar3,4,plVar2,4);
  fVar4 = (float)FUN_00f13e54(param_1 + 0x81);
  FUN_00f07940(-20.0 - fVar4 * 0.5,0xc2a00000,param_1 + 0x81,6,param_1,6);
  fVar4 = (float)FUN_00f13e54(param_1 + 0x1ca);
  FUN_00f07940(fVar4 * 0.5 + 20.0,0xc2a00000,param_1 + 0x1ca,6,param_1,6);
  return;
}




void FUN_00ca7230(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313cdbc,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca7298(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313cdc0,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca7300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808800;
  param_1[0x1ca] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x2eb);
  FUN_00c925cc(param_1 + 0x1ca);
  param_1[0x81] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x1a2);
  FUN_00c925cc(param_1 + 0x81);
  FUN_00f0d3a4(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca73b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808800;
  param_1[0x1ca] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x2eb);
  FUN_00c925cc(param_1 + 0x1ca);
  param_1[0x81] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x1a2);
  FUN_00c925cc(param_1 + 0x81);
  FUN_00f0d3a4(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca7470(undefined8 *param_1)

{
  FUN_00ecf178();
  *param_1 = &PTR_FUN_02808950;
  FUN_00f0d160(param_1 + 0x48);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
  return;
}




void FUN_00ca74b4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_1 + 0x48;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0d378(plVar1,param_2);
  FUN_00f0d75c(plVar1,param_3);
  FUN_00f0d9b0(plVar1,1);
  uVar2 = FUN_00f13624();
  FUN_00f15198(uVar2,0x1e);
  FUN_00f15134(uVar2,plVar1);
  FUN_00f15198(uVar2,0x1e);
  FUN_00f13fd8(param_1,uVar2);
  return;
}




void FUN_00ca754c(long *param_1)

{
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02808ab0;
  FUN_00f0d160(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00ca7598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  return;
}




void FUN_00ca759c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0xb8;
  FUN_00f0d378(lVar1);
  FUN_00f0d75c(lVar1,param_3);
  FUN_00f0d9b0(lVar1,0);
  local_40 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x28))(lVar1,&local_40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca7630(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f0d548(param_3 + 0xb8);
  *param_4 = uVar1;
  param_4[1] = param_2;
  return;
}




void FUN_00ca7658(float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  
  lVar1 = param_3 + 0xb8;
  fVar2 = (float)FUN_00f0d548(lVar1);
  if (fVar2 <= param_1) {
    if ((*(float *)(param_3 + 0x100) == 1.0) && (*(float *)(param_3 + 0x104) == 1.0))
    goto LAB_00ca76e4;
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_3 + 0x100) = uVar3;
  }
  else {
    fVar2 = (float)FUN_00f0d548(lVar1);
    param_1 = param_1 / fVar2;
    if ((*(float *)(param_3 + 0x100) == param_1) && (*(float *)(param_3 + 0x104) == param_1))
    goto LAB_00ca76e4;
    *(float *)(param_3 + 0x100) = param_1;
    *(float *)(param_3 + 0x104) = param_1;
  }
  FUN_0091ada4(lVar1);
LAB_00ca76e4:
  if (*(float *)(param_3 + 0xfc) != param_2 * 0.5) {
    *(float *)(param_3 + 0xfc) = param_2 * 0.5;
    FUN_0091ada4(lVar1);
    return;
  }
  return;
}




void FUN_00ca7720(undefined8 *param_1)

{
  FUN_00ecf178();
  *param_1 = &PTR_FUN_02808bf8;
  FUN_00f13ca4(param_1 + 0x48);
  FUN_00f0e4a8(param_1 + 0x5f);
  FUN_00f13ca4(param_1 + 0x7d);
  param_1[0x7d] = &PTR_FUN_02808ab0;
  FUN_00f0d160(param_1 + 0x94);
  (**(code **)(param_1[0x7d] + 0x78))(param_1 + 0x7d,param_1 + 0x94,1);
  FUN_00f14070(param_1,&DAT_03211038);
  return;
}




void FUN_00ca77b4(long param_1)

{
  FUN_00f13f08(param_1 + 0x240);
  return;
}




void FUN_00ca77bc(long param_1)

{
  FUN_00f13db4();
  FUN_00f13db4(param_1 + 0x240);
  return;
}




void FUN_00ca77e0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar1 = param_1 + 0x48;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x5f;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar3 = param_1 + 0x7d;
  FUN_00f023ec(plVar1,plVar3,1);
  lVar6 = FUN_00f13624();
  FUN_00f15198(lVar6,0xf);
  FUN_00f1515c(lVar6,plVar2,0,10);
  FUN_00f15198(lVar6,0xf);
  FUN_00f1515c(lVar6,plVar3,1,10);
  FUN_00f15198(lVar6,0x14);
  *(undefined1 *)(lVar6 + 8) = DAT_02bf25a4;
  FUN_00f13fd8(plVar1,lVar6);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x1c;
  uVar7 = FUN_009c1050();
  puVar8 = PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if (((uVar7 & 1) == 0) &&
     (uVar7 = FUN_009b8d9c(), puVar8 = PTR_s_build___MenuPartsCommon_tga_02be3530, (uVar7 & 1) == 0)
     ) {
    puVar8 = (undefined *)0x0;
  }
  FUN_00f0e548(plVar2,puVar8,param_2);
  FUN_00ca759c(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,param_3);
  uVar4 = DAT_03210c64;
  local_88 = FUN_00ca79a0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  local_60 = uVar4;
  FUN_009693a0(param_1 + 1,&local_88);
  local_88 = FUN_00ca79a0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  local_60 = uVar4;
  FUN_009693a0(param_1 + 1,&local_88);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ca79a0(void)

{
  undefined8 in_x3;
  
  FUN_00f0490c(in_x3);
  return;
}




long FUN_00ca79a8(long param_1)

{
  return param_1 + 0x240;
}




void FUN_00ca79b0(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0xffffffe0 | *(uint *)(param_1 + 0x84) & 0xf | (param_2 & 1) << 4
  ;
  return;
}




void FUN_00ca79c4(undefined8 param_1,undefined8 param_2)

{
  FUN_00f0490c(param_2);
  return;
}




void FUN_00ca79cc(undefined8 *param_1)

{
  FUN_00ecf178();
  *param_1 = &PTR_FUN_02808d58;
  FUN_00ca7720(param_1 + 0x48);
  FUN_00ca7720(param_1 + 0x102);
  FUN_00f14070(param_1,&DAT_03211038);
  return;
}




void FUN_00ca7a18(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x48,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x102,1);
  FUN_00ca77e0(param_1 + 0x48,param_2,param_3);
  FUN_00ca77e0(param_1 + 0x102,param_4,param_5);
  *(uint *)((long)param_1 + 0x2c4) =
       (~param_6 & 1) << 3 | (~param_6 & 1) << 2 | *(uint *)((long)param_1 + 0x2c4) & 0xfffffff3;
  *(uint *)((long)param_1 + 0x894) =
       (param_6 & 1) << 3 | (param_6 & 1) << 2 | *(uint *)((long)param_1 + 0x894) & 0xfffffff3;
                    /* WARNING: Could not recover jumptable at 0x00ca7af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00ca7afc(long *param_1,uint param_2)

{
  *(uint *)((long)param_1 + 0x2c4) =
       (~param_2 & 1) << 3 | (~param_2 & 1) << 2 | *(uint *)((long)param_1 + 0x2c4) & 0xfffffff3;
  *(uint *)((long)param_1 + 0x894) =
       (param_2 & 1) << 3 | (param_2 & 1) << 2 | *(uint *)((long)param_1 + 0x894) & 0xfffffff3;
                    /* WARNING: Could not recover jumptable at 0x00ca7b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_00ca7b44(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2c4) =
       *(uint *)(param_1 + 0x2c4) & 0xffffffe0 |
       *(uint *)(param_1 + 0x2c4) & 0xf | (param_2 & 1) << 4;
  *(uint *)(param_1 + 0x894) =
       *(uint *)(param_1 + 0x894) & 0xffffffe0 |
       *(uint *)(param_1 + 0x894) & 0xf | (param_2 & 1) << 4;
  return;
}




void FUN_00ca7b60(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13f08(param_3 + 0x240);
  FUN_00f13f08(param_1,param_2,param_3 + 0x810);
  return;
}




void FUN_00ca7ba0(long param_1)

{
  FUN_00f13db4();
  FUN_00f13db4(param_1 + 0x240);
  FUN_00f13db4(param_1 + 0x480);
  FUN_00f13db4(param_1 + 0x810);
  FUN_00f13db4(param_1 + 0xa50);
  return;
}




void FUN_00ca7bdc(void)

{
  return;
}




void FUN_00ca7be0(void)

{
  return;
}




void FUN_00ca7be4(undefined8 *param_1)

{
  uint uVar1;
  
  FUN_00f0c714();
  *param_1 = &PTR_thunk_FUN_00f13d08_02809000;
  param_1[0x17] = &PTR_FUN_02809160;
  FUN_00f0c774(param_1,&DAT_01bee7fa);
  uVar1 = *(uint *)((long)param_1 + 0x84);
  if ((uVar1 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x2600;
    FUN_0091ada4(param_1);
  }
  FUN_00f14070(param_1,&DAT_03211038);
  return;
}




void FUN_00ca7c60(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02808eb8;
  plVar1 = param_1 + 0x17;
  uVar2 = FUN_009b8d9c();
  FUN_00b12bd8(plVar1,~uVar2 & 1);
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = (long)(param_1 + 0xae);
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = (long)(param_1 + 0xb1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00b1326c(0x3f800000,plVar1,&DAT_01bee7fa);
  FUN_00b132e8(0x3f800000,plVar1,&DAT_01bee7f6);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  uVar3 = FUN_00f136e0();
  FUN_00f13fd8(param_1,uVar3);
  return;
}




void FUN_00ca7d2c(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_02808eb8;
  plVar4 = (long *)param_1[0xad];
  while (plVar4 != param_1 + 0xae) {
    if ((long *)plVar4[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[5] + 8))();
      plVar4[5] = 0;
    }
    plVar5 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar5 = plVar4 + 2;
      bVar1 = *(long **)*plVar5 != plVar4;
      plVar4 = (long *)*plVar5;
      if (bVar1) {
        do {
          lVar3 = *plVar5;
          plVar5 = (long *)(lVar3 + 0x10);
          plVar4 = (long *)*plVar5;
        } while (*plVar4 != lVar3);
      }
    }
    else {
      do {
        plVar4 = plVar5;
        plVar5 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  FUN_00ca8c6c(param_1 + 0xad,param_1[0xae]);
  plVar4 = param_1 + 0xb1;
  param_1[0xad] = param_1 + 0xae;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  plVar5 = (long *)param_1[0xb0];
  while (plVar5 != plVar4) {
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 8))();
      plVar5[5] = 0;
    }
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar2 = plVar5 + 2;
      bVar1 = *(long **)*plVar2 != plVar5;
      plVar5 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar3);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_00ca8c20(param_1 + 0xb0,param_1[0xb1]);
  param_1[0xb0] = plVar4;
  param_1[0xb2] = 0;
  *plVar4 = 0;
  FUN_00ca8c20(param_1 + 0xb0,0);
  FUN_00ca8c6c(param_1 + 0xad,param_1[0xae]);
  param_1[0x17] = &PTR_FUN_027dc928;
  param_1[0x82] = &PTR_FUN_02826f38;
  param_1[0x99] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[0x58] = &PTR_FUN_02826f38;
  param_1[0x6f] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x72);
  FUN_00f13d08(param_1 + 0x58);
  param_1[0x2e] = &PTR_FUN_02826f38;
  param_1[0x45] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca7f34(void *param_1)

{
  FUN_00ca7d2c();
  operator_delete(param_1);
  return;
}




void FUN_00ca7f58(float param_1,float param_2,long param_3)

{
  FUN_00f13f2c(param_3 + 0xb8,CONCAT44((int)param_2,(int)param_1));
  if ((*(float *)(param_3 + 0xf8) == param_1 * 0.5) && (*(float *)(param_3 + 0xfc) == param_2 * 0.5)
     ) {
    return;
  }
  *(float *)(param_3 + 0xf8) = param_1 * 0.5;
  *(float *)(param_3 + 0xfc) = param_2 * 0.5;
  FUN_0091ada4(param_3 + 0xb8);
  return;
}




void FUN_00ca7fd8(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00f13db4();
  plVar4 = *(long **)(param_1 + 0x568);
  while (plVar4 != (long *)(param_1 + 0x570)) {
    if ((long *)plVar4[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[5] + 0x90))();
    }
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar2 = plVar4 + 2;
      bVar1 = *(long **)*plVar2 != plVar4;
      plVar4 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar4 = (long *)*plVar2;
        } while (*plVar4 != lVar3);
      }
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}

