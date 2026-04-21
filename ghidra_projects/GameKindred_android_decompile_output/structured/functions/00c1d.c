// functions/00c1d — 25 functions
#include "libGameKindred.h"




void FUN_00c1d06c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f7e98;
  FUN_00ad9b6c(param_1 + 0x34);
  FUN_00b04404(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1d0bc(void *param_1)

{
  FUN_00c1d06c();
  operator_delete(param_1);
  return;
}




void FUN_00c1d0e0(long param_1)

{
  FUN_00f13f08(param_1 + 0x1a0);
  return;
}




void FUN_00c1d0e8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ad9de4(param_1 + 0x1a0,param_4,param_2,param_5,param_3);
  local_40 = param_4;
  FUN_00c1c9c8(param_1 + 0xc0,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1d164(long param_1,undefined8 param_2)

{
  FUN_00ada188(param_1 + 0x1a0,param_2,0);
  return;
}




void FUN_00c1d170(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00c1d194(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x19;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x41c80000;
  *param_1 = (long)&PTR_FUN_027f7fe0;
  FUN_00ca2d70(plVar1);
  plVar2 = param_1 + 0x225;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x24b;
  FUN_00f0e4a8(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar4 = *(uint *)((long)param_1 + 0x12dc);
  if ((uVar4 & 0x7f80) != 0x2b00) {
    *(uint *)((long)param_1 + 0x12dc) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x2b00;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d998(plVar2,1);
  FUN_00f0d7fc(plVar2,&DAT_01bee7fa);
  FUN_00f0dac8(plVar2,0);
  uVar5 = FUN_00e6ce7c("QUEST_PROGRESS_TITLE_ROAD_TO_RANKED",0);
  FUN_00f0d75c(plVar2,uVar5);
  FUN_00ca3130(0,0x42c80000,plVar1);
  FUN_00ca3280(0,plVar1);
  FUN_00ca30d0(plVar1,0);
  FUN_00ca311c(plVar1,0);
  FUN_00f13f08(0x42c80000,0x42960000,plVar1);
  return;
}




void FUN_00c1d350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f7fe0;
  param_1[0x24b] = &PTR_FUN_028266f0;
  param_1[0x262] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x265);
  FUN_00f13d08(param_1 + 0x24b);
  FUN_00f0d3a4(param_1 + 0x225);
  FUN_00c1d3c8(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1d3c8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027f8128;
  FUN_00f0d3a4(param_1 + 0x1e4);
  FUN_00f0d3a4(param_1 + 0x1be);
  lVar1 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1 + 0xcc0);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x260);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xaa0) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xb58) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xb70);
    FUN_00f13d08((long)param_1 + lVar1 + 0xaa0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x1e0);
  FUN_00f0d3a4(param_1 + 0x110);
  param_1[0xf2] = &PTR_FUN_028266f0;
  param_1[0x109] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10c);
  FUN_00f13d08(param_1 + 0xf2);
  param_1[0xd4] = &PTR_FUN_028266f0;
  param_1[0xeb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xee);
  FUN_00f13d08(param_1 + 0xd4);
  FUN_00f13d08(param_1 + 0xbd);
  param_1[0x9f] = &PTR_FUN_028266f0;
  param_1[0xb6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb9);
  FUN_00f13d08(param_1 + 0x9f);
  param_1[0x17] = &PTR_FUN_02807d58;
  FUN_00f13d08(param_1 + 0x6a);
  param_1[0x4c] = &PTR_FUN_028266f0;
  param_1[99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_028266f0;
  param_1[0x45] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1d534(void *param_1)

{
  FUN_00c1d350();
  operator_delete(param_1);
  return;
}




void FUN_00c1d558(long param_1,uint param_2,uint param_3)

{
  param_1 = param_1 + 200;
  FUN_00ca311c(param_1,1);
  FUN_00ca3130(0,(float)param_3,param_1);
  FUN_00ca3280((float)param_2,param_1);
  FUN_00ca3308(param_1);
  return;
}




void FUN_00c1d5b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  
  lVar1 = param_3 + 200;
  uVar3 = param_2;
  FUN_00f13e54(lVar1);
  fVar2 = (float)uVar3;
  FUN_00f0d4e0(param_3 + 0x1128);
  if (1.0 < ABS((float)param_2 -
                (float)(uint)(int)((float)uVar3 + fVar2 +
                                  *(float *)(param_3 + 0xc0) + *(float *)(param_3 + 0xc0)))) {
    FUN_00f13f08(param_1,param_3);
    return;
  }
  FUN_00f13f08(param_1,param_2,param_3 + 0x1258);
  FUN_00f13f08((float)param_1 - (*(float *)(param_3 + 0xc0) + *(float *)(param_3 + 0xc0)),0x42960000
               ,lVar1);
  FUN_00f07940(0,0,param_3 + 0x1258,8,param_3,8);
  FUN_00f07940(0,*(undefined4 *)(param_3 + 0xc0),param_3 + 0x1128,4,param_3,4);
  FUN_00f07940(0,-*(float *)(param_3 + 0xc0),lVar1,6,param_3,6);
  return;
}




int FUN_00c1d6e0(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  
  FUN_00f13e54(param_3 + 200);
  fVar1 = param_2;
  FUN_00f0d4e0(param_3 + 0x1128);
  return (int)(param_2 + fVar1 + *(float *)(param_3 + 0xc0) + *(float *)(param_3 + 0xc0));
}




void FUN_00c1d730(void *param_1)

{
  FUN_00c1d3c8();
  operator_delete(param_1);
  return;
}




void FUN_00c1d758(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined1 local_50 [8];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00f11234();
  plVar1 = param_1 + 0x35;
  param_1[0x34] = 0;
  *param_1 = (long)&PTR_FUN_027f8270;
  FUN_00ed66ec(plVar1);
  plVar2 = param_1 + 0x17a;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x198;
  FUN_00f0e4a8(plVar3);
  param_1[0x1b9] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b6] = 0;
  *(undefined1 *)(param_1 + 0x1ba) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  local_50[0] = 9;
  FUN_00ed5ab0(plVar1,local_50);
  FUN_00f0e548(plVar2,PTR_s_build___SophomoreQuestBackground_02be3650,
               "SophomoreQuestBackground_Default_Top");
  *(uint *)((long)param_1 + 0xc54) = *(uint *)((long)param_1 + 0xc54) & 0xfffffffb;
  FUN_00f0e9c0(plVar2,1);
  FUN_00f112f0(param_1,1);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar4 = *(uint *)((long)param_1 + 0xd44);
  *(byte *)(param_1 + 0x1b3) = *(byte *)(param_1 + 0x1b3) | 2;
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xd44) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_0091ada4(plVar3);
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1d8fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f8270;
  if ((void *)param_1[0x1b9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b9]);
    param_1[0x1b9] = 0;
    param_1[0x1b8] = 0;
  }
  if ((void *)param_1[0x1b7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b7]);
    param_1[0x1b7] = 0;
    param_1[0x1b6] = 0;
  }
  param_1[0x198] = &PTR_FUN_028266f0;
  param_1[0x1af] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b2);
  FUN_00f13d08(param_1 + 0x198);
  param_1[0x17a] = &PTR_FUN_028266f0;
  param_1[0x191] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x194);
  FUN_00f13d08(param_1 + 0x17a);
  thunk_FUN_00ed5534(param_1 + 0x35);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1d9ac(void *param_1)

{
  FUN_00c1d8fc();
  operator_delete(param_1);
  return;
}




void FUN_00c1d9d0(float param_1,float param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined8 local_60;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_4;
  local_50 = param_1;
  fStack_4c = param_2;
  FUN_00ed5664(param_3 + 0x35,param_4,1);
  FUN_00c11e70(param_3 + 0x1b8,&local_50);
  FUN_00c1c9c8(param_3 + 0x1b6,&local_58);
  uVar2 = local_58;
  fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_60 = CONCAT44(param_2 - (fStack_4c + fStack_4c),fVar8 - (local_50 + local_50));
  FUN_00f13f18(uVar2,&local_60);
  if ((int)param_3[0x1b6] != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar4 = param_3[0x1b7];
      lVar5 = param_3[0x1b9];
      lVar3 = *(long *)(lVar4 + uVar7 * 8);
      if (uVar7 == 0) {
        if ((*(float *)(lVar3 + 0x40) != *(float *)(lVar5 + lVar6)) ||
           (*(float *)(lVar3 + 0x44) != *(float *)(lVar5 + 4))) {
          *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(lVar5 + lVar6);
          FUN_0091ada4();
        }
      }
      else {
        if (*(float *)(lVar3 + 0x40) != *(float *)(lVar5 + lVar6)) {
          *(float *)(lVar3 + 0x40) = *(float *)(lVar5 + lVar6);
          FUN_0091ada4();
          lVar4 = param_3[0x1b7];
          lVar3 = *(long *)(lVar4 + uVar7 * 8);
        }
        FUN_00f07b18(0,lVar3,0,*(undefined8 *)(lVar4 + (ulong)((int)uVar7 - 1) * 8),2);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar7 < *(uint *)(param_3 + 0x1b6));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1db24(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = param_2 & 1;
  if (*(byte *)(param_1 + 0x1ba) != uVar2) {
    *(char *)(param_1 + 0x1ba) = (char)uVar2;
    *(uint *)((long)param_1 + 0xd44) =
         *(uint *)((long)param_1 + 0xd44) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0xd44) & 3 | uVar2 << 2;
    if ((param_2 & 1) == 0) {
      local_40[0] = 5;
      FUN_00ed5ab0(param_1 + 0x35,local_40);
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      uVar2 = FUN_00c1dbe8(param_1);
      FUN_00f13f08(uVar3,(float)uVar2,param_1);
    }
    else {
      local_40[0] = 9;
      FUN_00ed5ab0(param_1 + 0x35,local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00c1dbe8(long param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0xdb0) == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar3 = 0.0;
    lVar1 = 0;
    uVar2 = 0;
    fVar4 = *(float *)(*(long *)(param_1 + 0xdc8) + 4) + 0.0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0xdb8) + lVar1) + 0x48))();
      uVar2 = uVar2 + 1;
      fVar4 = fVar4 + fVar3;
      lVar1 = lVar1 + 8;
    } while (uVar2 < *(uint *)(param_1 + 0xdb0));
    fVar4 = fVar4 + *(float *)(*(long *)(param_1 + 0xdc8) + lVar1 + -4);
  }
  return (int)fVar4;
}




void FUN_00c1dc7c(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc54);
  if (((param_2 ^ uVar1 >> 2) & 1) != 0) {
    *(uint *)(param_1 + 0xc54) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
    FUN_00c1dc9c();
    return;
  }
  return;
}




void FUN_00c1dc9c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar12 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar11 = (float)uVar12;
  if ((*(byte *)((long)param_3 + 0xc54) >> 2 & 1) != 0) {
    plVar1 = param_3 + 0x17a;
    FUN_00f0e8cc(plVar1,(int)param_2);
    fVar10 = (float)FUN_00f0e700(plVar1);
    if (fVar10 < fVar11) {
      FUN_00f0e74c(plVar1,(int)fVar11);
    }
    fVar10 = (float)FUN_00f0e700(plVar1);
    if ((*(float *)(param_3 + 0x182) != fVar11 - fVar10) ||
       (*(float *)((long)param_3 + 0xc14) != 0.0)) {
      *(float *)(param_3 + 0x182) = fVar11 - fVar10;
      *(undefined4 *)((long)param_3 + 0xc14) = 0;
      FUN_0091ada4(plVar1);
    }
  }
  local_60 = fVar11;
  fStack_5c = param_2;
  if ((*(float *)(param_3 + 0x3d) != 0.0) || (*(float *)((long)param_3 + 0x1ec) != 0.0)) {
    param_3[0x3d] = 0;
    FUN_0091ada4(param_3 + 0x35);
  }
  FUN_00f13f18(param_3 + 0x35,&local_60);
  if ((int)param_3[0x1b6] != 0) {
    lVar7 = 0;
    uVar8 = 0;
    uVar9 = 0xffffffff;
    do {
      fVar11 = (float)*(undefined8 *)(param_3[0x1b9] + lVar7);
      fVar10 = (float)((ulong)*(undefined8 *)(param_3[0x1b9] + lVar7) >> 0x20);
      local_68 = CONCAT44(fStack_5c - (fVar10 + fVar10),local_60 - (fVar11 + fVar11));
      FUN_00f13f18(*(undefined8 *)(param_3[0x1b7] + lVar7),&local_68);
      lVar5 = param_3[0x1b7];
      pfVar6 = (float *)param_3[0x1b9];
      lVar4 = *(long *)(lVar5 + lVar7);
      if (lVar7 == 0) {
        if ((*(float *)(lVar4 + 0x40) != *pfVar6) || (*(float *)(lVar4 + 0x44) != pfVar6[1])) {
          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)pfVar6;
          FUN_0091ada4();
        }
      }
      else {
        if (*(float *)(lVar4 + 0x40) != *(float *)((long)pfVar6 + lVar7)) {
          *(float *)(lVar4 + 0x40) = *(float *)((long)pfVar6 + lVar7);
          FUN_0091ada4();
          lVar5 = param_3[0x1b7];
          lVar4 = *(long *)(lVar5 + lVar7);
        }
        FUN_00f07b18(0,lVar4,0,*(undefined8 *)(lVar5 + (uVar9 & 0xffffffff) * 8),2);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 < *(uint *)(param_3 + 0x1b6));
  }
  plVar1 = param_3 + 0x198;
  FUN_00f0e700(plVar1);
  FUN_00f13f08(uVar12,plVar1);
  FUN_00f07940(0,0,plVar1,6,param_3,6);
  if (((char)param_3[0x1ba] == '\0') &&
     (uVar3 = FUN_00c1dbe8(param_3), 1.0 < ABS((float)uVar3 - param_2))) {
    FUN_00f13f08(uVar12,param_3);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1deec(long param_1)

{
  if (*(long *)(param_1 + 0xdb8) != 0) {
    *(undefined4 *)(param_1 + 0xdb0) = 0;
  }
  return;
}




void thunk_FUN_00c1dc9c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  long lStack_58;
  
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  uVar12 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar11 = (float)uVar12;
  if ((*(byte *)((long)param_3 + 0xc54) >> 2 & 1) != 0) {
    plVar1 = param_3 + 0x17a;
    FUN_00f0e8cc(plVar1,(int)param_2);
    fVar10 = (float)FUN_00f0e700(plVar1);
    if (fVar10 < fVar11) {
      FUN_00f0e74c(plVar1,(int)fVar11);
    }
    fVar10 = (float)FUN_00f0e700(plVar1);
    if ((*(float *)(param_3 + 0x182) != fVar11 - fVar10) ||
       (*(float *)((long)param_3 + 0xc14) != 0.0)) {
      *(float *)(param_3 + 0x182) = fVar11 - fVar10;
      *(undefined4 *)((long)param_3 + 0xc14) = 0;
      FUN_0091ada4(plVar1);
    }
  }
  fStack_60 = fVar11;
  fStack_5c = param_2;
  if ((*(float *)(param_3 + 0x3d) != 0.0) || (*(float *)((long)param_3 + 0x1ec) != 0.0)) {
    param_3[0x3d] = 0;
    FUN_0091ada4(param_3 + 0x35);
  }
  FUN_00f13f18(param_3 + 0x35,&fStack_60);
  if ((int)param_3[0x1b6] != 0) {
    lVar7 = 0;
    uVar8 = 0;
    uVar9 = 0xffffffff;
    do {
      fVar11 = (float)*(undefined8 *)(param_3[0x1b9] + lVar7);
      fVar10 = (float)((ulong)*(undefined8 *)(param_3[0x1b9] + lVar7) >> 0x20);
      uStack_68 = CONCAT44(fStack_5c - (fVar10 + fVar10),fStack_60 - (fVar11 + fVar11));
      FUN_00f13f18(*(undefined8 *)(param_3[0x1b7] + lVar7),&uStack_68);
      lVar5 = param_3[0x1b7];
      pfVar6 = (float *)param_3[0x1b9];
      lVar4 = *(long *)(lVar5 + lVar7);
      if (lVar7 == 0) {
        if ((*(float *)(lVar4 + 0x40) != *pfVar6) || (*(float *)(lVar4 + 0x44) != pfVar6[1])) {
          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)pfVar6;
          FUN_0091ada4();
        }
      }
      else {
        if (*(float *)(lVar4 + 0x40) != *(float *)((long)pfVar6 + lVar7)) {
          *(float *)(lVar4 + 0x40) = *(float *)((long)pfVar6 + lVar7);
          FUN_0091ada4();
          lVar5 = param_3[0x1b7];
          lVar4 = *(long *)(lVar5 + lVar7);
        }
        FUN_00f07b18(0,lVar4,0,*(undefined8 *)(lVar5 + (uVar9 & 0xffffffff) * 8),2);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 < *(uint *)(param_3 + 0x1b6));
  }
  plVar1 = param_3 + 0x198;
  FUN_00f0e700(plVar1);
  FUN_00f13f08(uVar12,plVar1);
  FUN_00f07940(0,0,plVar1,6,param_3,6);
  if (((char)param_3[0x1ba] == '\0') &&
     (uVar3 = FUN_00c1dbe8(param_3), 1.0 < ABS((float)uVar3 - param_2))) {
    FUN_00f13f08(uVar12,param_3);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1df00(long *param_1)

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
  FUN_00ca4154();
  plVar1 = param_1 + 0x138;
  param_1[0x137] = 0;
  *param_1 = (long)&PTR_FUN_027f83d0;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x149;
  param_1[0x138] = (long)&PTR_FUN_027c1f80;
  FUN_00b25254(plVar2);
  plVar3 = param_1 + 0x175;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x19b;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x1c1;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x1e7;
  FUN_00ca2d70(plVar6);
  plVar7 = param_1 + 0x3f3;
  FUN_00f13ca4(plVar7);
  plVar8 = param_1 + 0x40a;
  FUN_00c93600(plVar8,0);
  plVar9 = param_1 + 0x553;
  FUN_00ca4770(plVar9);
  *(undefined1 *)(param_1 + 0x599) = 0;
  param_1[0x598] = 0;
  param_1[0x597] = 0;
  param_1[0x596] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  local_98 = (code *)CONCAT62(local_98._2_6_,0x37);
  FUN_00f14070(param_1,&local_98);
  plVar1 = param_1 + 0x94;
  (**(code **)(param_1[0x94] + 0x78))(plVar1,plVar4,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar1,plVar5,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar1,plVar6,1);
  (**(code **)(param_1[0x7d] + 0x78))(param_1 + 0x7d,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0d7fc(plVar4,&DAT_01bbc148);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  FUN_00f0d7fc(plVar5,&DAT_01bbc14c);
  FUN_00f0d9b0(plVar5,1);
  FUN_00f0db2c(0xbdcccccd,plVar5);
  FUN_00ca3130(0,0x42c80000,plVar6);
  FUN_00ca3280(0x41c80000,plVar6);
  FUN_00ca30d0(plVar6,0);
  FUN_00ca311c(plVar6,1);
  FUN_00c93864(plVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00c938a4(plVar8,&DAT_01bee7fa);
  local_70 = DAT_03210c64;
  local_98 = FUN_00c1e310;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x40b,&local_98);
  FUN_00c9279c(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00c928a0(0x42480000,0x41400000,plVar8);
  FUN_00ca48d8(plVar9);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  FUN_00f0d998(plVar3,1);
  FUN_00f0d7fc(plVar3,&DAT_01bbc14c);
  FUN_00f0dac8(plVar3,0);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  FUN_00f0d998(plVar2,1);
  FUN_00f0d7fc(plVar2,&DAT_01bbc14c);
  FUN_00f0dac8(plVar2,0);
  uVar11 = FUN_00e6ce7c("MENU_LANDING_PAGE_SIDEBAR_QUEST_TILE_TIME_TO_NEXT_QUEST",0);
  FUN_00b252ac(plVar2,uVar11,1,1);
  local_70 = DAT_03210f8c;
  local_98 = FUN_00c1e334;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  local_98 = FUN_00c1e334;
  local_70 = DAT_03210f60;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

