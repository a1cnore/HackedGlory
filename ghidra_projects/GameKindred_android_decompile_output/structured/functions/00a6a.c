// functions/00a6a — 15 functions
#include "libGameKindred.h"




void FUN_00a6a070(undefined8 param_1)

{
  FUN_00a69b14(param_1,3);
  return;
}




void FUN_00a6a078(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xb40) = param_1;
  *(undefined4 *)(param_3 + 0xb44) = param_2;
  return;
}




void FUN_00a6a084(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined8 local_50 [2];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(auStack_3c,auStack_40);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xb40),*(undefined4 *)(param_1 + 0xb44),param_1);
  fVar4 = *(float *)(param_1 + 0xb40);
  fVar5 = *(float *)(param_1 + 0xb44);
  if ((*(float *)(param_1 + 0x120) != fVar4 * 0.5) || (*(float *)(param_1 + 0x124) != fVar5 * 0.5))
  {
    *(float *)(param_1 + 0x120) = fVar4 * 0.5;
    *(float *)(param_1 + 0x124) = fVar5 * 0.5;
    FUN_0091ada4(param_1 + 0xe0);
    fVar4 = *(float *)(param_1 + 0xb40);
    fVar5 = *(float *)(param_1 + 0xb44);
  }
  if ((*(float *)(param_1 + 0x1a8) != fVar4 * -0.5) || (*(float *)(param_1 + 0x1ac) != fVar5 * -0.5)
     ) {
    *(float *)(param_1 + 0x1a8) = fVar4 * -0.5;
    *(float *)(param_1 + 0x1ac) = fVar5 * -0.5;
    FUN_0091ada4(param_1 + 0x168);
    fVar4 = *(float *)(param_1 + 0xb40);
    fVar5 = *(float *)(param_1 + 0xb44);
  }
  FUN_00f13f08(fVar4 + 80.0,fVar5 + 80.0,param_1 + 0x1f0);
  fVar5 = *(float *)(param_1 + 0xb44);
  fVar4 = *(float *)(param_1 + 0xb40) * 0.5;
  if ((*(float *)(param_1 + 0x230) != fVar4) || (*(float *)(param_1 + 0x234) != fVar5 * 0.5)) {
    *(float *)(param_1 + 0x230) = fVar4;
    *(float *)(param_1 + 0x234) = fVar5 * 0.5;
    FUN_0091ada4(param_1 + 0x1f0);
    fVar5 = *(float *)(param_1 + 0xb44);
    fVar4 = *(float *)(param_1 + 0xb40) * 0.5;
  }
  lVar1 = param_1 + 0x728;
  if ((*(float *)(param_1 + 0x768) != fVar4) || (*(float *)(param_1 + 0x76c) != fVar5 * 0.15)) {
    *(float *)(param_1 + 0x768) = fVar4;
    *(float *)(param_1 + 0x76c) = fVar5 * 0.15;
    FUN_0091ada4(lVar1);
  }
  local_50[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x728) + 0x28))(lVar1,local_50);
  FUN_00f0d378(lVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0dac8(lVar1,3);
  FUN_00f0dad0(*(float *)(param_1 + 0xb40) * 0.85,lVar1,1);
  plVar3 = *(long **)(param_1 + 0xd8);
  if (plVar3 != (long *)0x0) {
    fVar4 = (float)*(undefined8 *)(param_1 + 0xb40) * 0.5;
    fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0xb40) >> 0x20) * 0.5;
    if ((*(float *)(plVar3 + 8) != fVar4) || (*(float *)((long)plVar3 + 0x44) != fVar5)) {
      plVar3[8] = CONCAT44(fVar5,fVar4);
      FUN_0091ada4(plVar3);
    }
    local_50[0] = 0x3f0000003f000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,local_50);
    fVar4 = *(float *)(param_1 + 0xb40) * 0.95;
    FUN_00c9ebd0(fVar4,fVar4,*(undefined8 *)(param_1 + 0xd8));
  }
  FUN_00f0d378(param_1 + 0xa10,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  plVar3 = (long *)(param_1 + 0x858);
  FUN_00f0bc10(0,0x3f000000,0x41200000,local_50);
  FUN_00f0c168(plVar3,local_50);
  (**(code **)(*(long *)(param_1 + 0x858) + 0x90))(plVar3);
  FUN_00f0c030(0x3f000000,plVar3,0);
  fVar4 = (float)*(undefined8 *)(param_1 + 0xb40) * 0.5;
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0xb40) >> 0x20) * 0.85;
  if ((*(float *)(param_1 + 0x898) != fVar4) || (*(float *)(param_1 + 0x89c) != fVar5)) {
    *(ulong *)(param_1 + 0x898) = CONCAT44(fVar5,fVar4);
    FUN_0091ada4(plVar3);
  }
  local_50[0] = 0x3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,local_50);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6a384(undefined1 param_1 [16],undefined8 param_2,long param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined1 local_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x3f8;
  *(byte *)(param_3 + 0xd4) = param_4 & 1;
  if ((param_4 & 1) == 0) {
    pcVar8 = "build_talent_chooser_frame_off_bottom_corners";
    pcVar9 = "build_talent_chooser_frame_off_bottom_edge";
    pcVar10 = "build_talent_chooser_frame_off_vertical_edges";
    pcVar5 = "build_talent_chooser_frame_off_top_corners";
    pcVar7 = "build_talent_chooser_frame_off_top_edge";
  }
  else {
    pcVar8 = "build_talent_chooser_frame_on_bottom_corners";
    pcVar9 = "build_talent_chooser_frame_on_bottom_edge";
    pcVar10 = "build_talent_chooser_frame_on_vertical_edges";
    pcVar5 = "build_talent_chooser_frame_on_top_corners";
    pcVar7 = "build_talent_chooser_frame_on_top_edge";
  }
  FUN_00f0ff74(lVar1,pcVar5,0,0,0,pcVar7,0,0,0,pcVar5,1,0,0,pcVar10,0,0,0,0,0,0,0,pcVar10,1,0,0,
               pcVar8,0,0,0,pcVar9,0,0,0,pcVar8,1,0,0);
  uVar12 = FUN_00f10374(lVar1,0);
  FUN_00f10644((int)uVar12,0,uVar12,param_2,0,param_2,param_3 + 0x2a8);
  if ((param_4 & 1) == 0) {
    uVar11 = 0x3ecccccd;
    puVar6 = &DAT_01bee7f6;
  }
  else {
    puVar4 = (uint *)FUN_00f10618(lVar1);
    uVar2 = *puVar4;
    puVar6 = (undefined4 *)&local_4c;
    uStack_49 = (undefined1)(uVar2 >> 0x18);
    _local_4c = CONCAT12((char)(int)((float)(uVar2 >> 0x10 & 0xff) * 0.25),
                         CONCAT11((char)(int)((float)(uVar2 >> 8 & 0xff) * 0.25),
                                  (char)(int)((float)(uVar2 & 0xff) * 0.25)));
    uVar11 = 0x3f400000;
  }
  FUN_00b132e8(uVar11,param_3 + 0x1f0,puVar6);
  uVar11 = 0x3f866666;
  if ((param_4 & 1) == 0) {
    uVar11 = 0x3f800000;
  }
  uVar12 = FUN_00eff63c(uVar11,uVar11,0x3e19999a,FUN_0091aa80);
  FUN_00f01980(param_3 + 0xe0);
  FUN_00f022a0(param_3 + 0xe0,uVar12);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6a610(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
  }
  else {
    FUN_00a6a658(param_1);
  }
  FUN_00a6a75c(param_1);
  return;
}




void FUN_00a6a658(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = 0;
  if (param_1[0x1b] == 0) {
    if (param_1[0x18] == 0) {
      uVar3 = 0;
    }
    else {
      pvVar4 = operator_new(0x610);
      FUN_00c9e7a8(pvVar4,1);
      param_1[0x1b] = (long)pvVar4;
      FUN_00f023ec(param_1 + 0xd4,pvVar4,1);
      lVar5 = FUN_00d7ade4(param_1[0x18]);
      FUN_00e6a8a8(auStack_b8,PTR_s_build___HUDPartsHero__s_png_02be3470,
                   *(undefined8 *)(param_1[0x17] + 0x20));
      uVar1 = *(int *)(lVar5 + 0x18) - 1;
      if (uVar1 < 3) {
        puVar6 = (&PTR_s_rare_027ccce0)[(int)uVar1];
      }
      else {
        puVar6 = &DAT_01e277f2;
      }
      FUN_00c9ef0c(param_1[0x1b],auStack_b8,*(undefined8 *)(lVar5 + 0x10),puVar6);
      (**(code **)(*param_1 + 0x90))(param_1);
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00a6a75c(long param_1)

{
  if (*(int *)(param_1 + 0xd0) - 3U < 2) {
    return;
  }
  FUN_00a69abc(param_1,*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200),
               *(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xcc));
  return;
}




bool FUN_00a6a77c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0xc0) != 0) && (uVar2 = FUN_00d7ae40(), (uVar2 & 1) == 0)) {
    return false;
  }
  if (*(int *)(param_1 + 0xcc) == 0) {
    bVar1 = *(long *)(param_1 + 0xc0) == 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




undefined1 FUN_00a6a7cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd4);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6a7d4(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00f017e8();
  plVar1 = param_2 + 0x11;
  *param_2 = (long)&PTR_FUN_027cca88;
  FUN_00f0d160(plVar1);
  plVar2 = param_2 + 0x37;
  FUN_00f0d160(plVar2);
  param_2[0x5d] = _DAT_03218ef8;
  (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
  (**(code **)(*param_2 + 0x78))(param_2,plVar2,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  local_68 = CONCAT44(local_68._4_4_,0xffc0c0c0);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&local_68);
  FUN_00e70510(&local_68);
  FUN_00cb1d0c(param_1,param_4,&local_68,0);
  FUN_00f0d75c(plVar1,&local_68);
  FUN_00f0d75c(plVar2,param_5);
  (**(code **)(*param_2 + 0xe8))(param_2);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6a934(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x5d) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00a6a940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe8))();
  return;
}




undefined4 FUN_00a6a944(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2e8);
}




void FUN_00a6a950(undefined1 param_1 [16],float param_2,long *param_3)

{
  undefined4 uVar1;
  
  FUN_00f0d4e0(param_3 + 0x11);
  if (*(float *)((long)param_3 + 0x1fc) != param_2 + 2.0) {
    *(float *)((long)param_3 + 0x1fc) = param_2 + 2.0;
    FUN_0091ada4(param_3 + 0x37);
  }
  uVar1 = 0;
  FUN_00f0db64((int)param_3[0x5d],0,0x3f800000,param_3 + 0x11);
  FUN_00f0dad0((int)param_3[0x5d],param_3 + 0x37,1);
  (**(code **)(*param_3 + 0x58))(param_3,0,0,1,1);
  *(undefined4 *)((long)param_3 + 0x2ec) = uVar1;
  return;
}




void FUN_00a6a9ec(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  FUN_00b89cd8();
  *param_1 = &PTR_FUN_027ccb88;
  FUN_00f13ca4(param_1 + 0x19);
  FUN_00f13ca4(param_1 + 0x30);
  FUN_00b89cd8(param_1 + 0x47);
  FUN_00c83504(param_1 + 0x60);
  FUN_00f017e8(param_1 + 0xd1);
  param_1[0xd1] = &PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0xe2);
  FUN_00f11234(param_1 + 0x108);
  FUN_00ecfd6c(param_1 + 0x13c,0);
  FUN_00f0bdbc(param_1 + 0x1e3,0);
  param_1[0x1fd] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1e3] = &PTR_FUN_027c3260;
  FUN_00f017e8(param_1 + 0x1fe);
  param_1[0x1fe] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x20f);
  FUN_00f0e4a8(param_1 + 0x22d);
  FUN_00f0e4a8(param_1 + 0x24b);
  FUN_00f0e4a8(param_1 + 0x269);
  FUN_00f017e8(param_1 + 0x287);
  param_1[0x287] = &PTR_FUN_027c1f80;
  FUN_00f11234(param_1 + 0x298);
  FUN_00ecfd6c(param_1 + 0x2cc,0);
  FUN_00f0d160(param_1 + 0x373);
  FUN_00f0bdbc(param_1 + 0x399,1);
  param_1[0x3b3] = 0;
  param_1[0x3b2] = 0;
  param_1[0x399] = &PTR_FUN_027ccd08;
  FUN_00f0d160(param_1 + 0x3b4);
  FUN_00ab6c24(param_1 + 0x3da,1);
  param_1[0x692] = 0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x694) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x693) = uVar1;
  uVar1 = FUN_00e6a474("HUD_TalentSelector");
  uVar2 = FUN_0091ed5c("HUD_TalentSelector",uVar1,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  FUN_00a6ab98(param_1);
  return;
}




void FUN_00a6ab98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x47,1);
  FUN_00f023ec(param_1 + 0x47,param_1 + 0x60,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x30,1);
  plVar1 = param_1 + 0xd1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x108;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar3 = param_1 + 0x13c;
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00ed026c(plVar3,param_1 + 0x1e3,1);
  plVar4 = param_1 + 0x1fe;
  FUN_00f023ec(plVar1,plVar4,1);
  plVar5 = param_1 + 0x20f;
  FUN_00f023ec(plVar4,plVar5,1);
  plVar6 = param_1 + 0x22d;
  FUN_00f023ec(plVar4,plVar6,1);
  plVar7 = param_1 + 0x24b;
  FUN_00f023ec(plVar4,plVar7,1);
  plVar8 = param_1 + 0x269;
  FUN_00f023ec(plVar4,plVar8,1);
  plVar1 = param_1 + 0x287;
  FUN_00f023ec(plVar4,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x298,1);
  plVar4 = param_1 + 0x2cc;
  FUN_00f023ec(param_1 + 0x298,plVar4,1);
  FUN_00ed026c(plVar4,param_1 + 0x373,1);
  FUN_00ed026c(plVar4,param_1 + 0x3b4,1);
  FUN_00ed026c(plVar4,param_1 + 0x399,1);
  FUN_00f023ec(plVar1,param_1 + 0x3da,1);
  plVar1 = param_1 + 0xe2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) | 0x10;
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce0);
  uVar11 = FUN_00e6ce7c("HUD_TALENT_SELECTOR_TITLE",0);
  FUN_00f0d75c(plVar1,uVar11);
  *(uint *)((long)param_1 + 0x794) = *(uint *)((long)param_1 + 0x794) | 0x10;
  FUN_00f112f0(plVar2,1);
  FUN_00ed04d8(plVar3,1,0);
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_horizontal");
  *(byte *)(param_1 + 0x22a) = *(byte *)(param_1 + 0x22a) | 1;
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  uVar9 = *(uint *)((long)param_1 + 0x10fc);
  if ((uVar9 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x10fc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x5900;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_vertical");
  FUN_00f0e548(plVar8,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_vertical");
  *(byte *)(param_1 + 0x266) = *(byte *)(param_1 + 0x266) | 2;
  uVar9 = *(uint *)((long)param_1 + 0x12dc);
  if ((uVar9 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x12dc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
    FUN_0091ada4(plVar7);
  }
  uVar9 = *(uint *)((long)param_1 + 0x13cc);
  if ((uVar9 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x13cc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
    FUN_0091ada4(plVar8);
  }
  uVar9 = *(uint *)((long)param_1 + 0x1c1c);
  *(uint *)((long)param_1 + 0x16e4) = *(uint *)((long)param_1 + 0x16e4) & 0xfffffffb;
  if ((uVar9 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1c1c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
    FUN_0091ada4(param_1 + 0x373);
  }
  uVar9 = *(uint *)((long)param_1 + 0x1e24);
  if ((uVar9 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1e24) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
    FUN_0091ada4(param_1 + 0x3b4);
  }
  uVar11 = FUN_00e6ce7c("HUD_PATH_SELECTOR_SELECT",0);
  FUN_00ab703c(0x42800000,0,0x44480000,param_1 + 0x3da,0,uVar11,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_70 = DAT_03210c64;
  local_98 = thunk_FUN_00a6c6ec;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x3db,&local_98);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

