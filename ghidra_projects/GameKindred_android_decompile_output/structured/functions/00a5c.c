// functions/00a5c — 14 functions
#include "libGameKindred.h"




void FUN_00a5c464(long param_1)

{
  FUN_00b094f8(param_1 + 0x1fd8,0);
  return;
}




void FUN_00a5c49c(void)

{
  return;
}




void FUN_00a5c4a0(long param_1)

{
  FUN_00c00ab8(*(undefined8 *)(param_1 + 0x1f10));
  return;
}




void FUN_00a5c4a8(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,0xffffffff,0);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5c518(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027cc100;
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar1,param_1);
  if ((void *)param_1[0x548] != (void *)0x0) {
    operator_delete__((void *)param_1[0x548]);
    param_1[0x548] = 0;
    param_1[0x547] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x520);
  param_1[0x502] = &PTR_FUN_028266f0;
  param_1[0x519] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51c);
  FUN_00f13d08(param_1 + 0x502);
  param_1[0x3fb] = &PTR_FUN_027ca918;
  FUN_00f0d3a4(param_1 + 0x4da);
  param_1[0x4ba] = &PTR_FUN_028266f0;
  param_1[0x4d1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4d4);
  FUN_00f13d08(param_1 + 0x4ba);
  param_1[0x496] = &PTR_FUN_028266f0;
  param_1[0x4ad] = &PTR_FUN_02826850;
  param_1[0x3fb] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x4b0);
  FUN_00f13d08(param_1 + 0x496);
  param_1[0x478] = &PTR_FUN_028266f0;
  param_1[0x48f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x492);
  FUN_00f13d08(param_1 + 0x478);
  param_1[0x45a] = &PTR_FUN_028266f0;
  param_1[0x471] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x474);
  FUN_00f13d08(param_1 + 0x45a);
  FUN_00f01868(param_1 + 0x449);
  FUN_009c825c(param_1 + 0x3fb);
  FUN_00f13d08(param_1 + 0x3e4);
  param_1[0x3e1] = &DAT_027cc248;
  if ((long *)param_1[0x3e2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3e2] + 8))();
  }
  param_1[0x3e2] = 0;
  lVar2 = 0;
  param_1[0x372] = &PTR_FUN_027db530;
  do {
    FUN_00f0d3a4((long)param_1 + lVar2 + 0x1dd0);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x260);
  FUN_00f01868(param_1 + 899);
  FUN_00f01868(param_1 + 0x372);
  param_1[0x354] = &PTR_FUN_028266f0;
  param_1[0x36b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x36e);
  FUN_00f13d08(param_1 + 0x354);
  FUN_00f0d3a4(param_1 + 0x32e);
  FUN_00f13d08(param_1 + 0x317);
  FUN_009c7fa8(param_1 + 0x5f);
  param_1[0x34] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x4b);
  FUN_00f13d08(param_1 + 0x34);
  FUN_00f13d08(param_1 + 0x1b);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a5c78c(void *param_1)

{
  FUN_00a5c518();
  operator_delete(param_1);
  return;
}




void FUN_00a5c7b0(long *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  
  param_1[0x19] = param_2 + 0x28;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  param_1[0x17] = param_3;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  if ((int)param_1[0x546] != 0) {
    *(undefined4 *)(param_1 + 0x546) = 0;
    FUN_00a5cfe4(param_1);
  }
  FUN_00bbd940(param_1 + 0x3e1);
                    /* WARNING: Could not recover jumptable at 0x00a5c808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00a5c80c(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x2a30) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x2a30) = param_2;
  FUN_00a5cfe4();
  return;
}




void FUN_00a5c824(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0xd8,param_2 & 1,param_3,param_4 & 1);
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    FUN_00bbda90(param_1 + 0x1f08,0xffff);
  }
  FUN_00c00b18(*(undefined8 *)(param_1 + 0x1f10),0);
  return;
}




void FUN_00a5c87c(long param_1)

{
  *(undefined4 *)(param_1 + 0x2a48) = 0xbf800000;
  return;
}




void FUN_00a5c888(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(auStack_4c,auStack_50);
  plVar5 = *(long **)(param_2 + 200);
  if (plVar5 == (long *)0x0) goto LAB_00a5ca28;
  if (*(int *)(param_2 + 0xd0) != (int)plVar5[1]) {
    *(undefined8 *)(param_2 + 200) = 0;
    *(undefined4 *)(param_2 + 0xd0) = DAT_03214ce8;
    goto LAB_00a5ca28;
  }
  lVar6 = (**(code **)(*plVar5 + 0x10))();
  if (lVar6 == 0) goto LAB_00a5ca28;
  fVar8 = *(float *)(param_2 + 0x2a48);
  fVar12 = *(float *)(*(long *)(lVar6 + 0x40) + 800);
  fVar10 = fVar12;
  if (fVar8 == -1.0) {
    *(float *)(param_2 + 0x2a48) = fVar12;
    *(undefined4 *)(param_2 + 0x2a4c) = 0xbf800000;
  }
  else if (fVar8 != fVar12) {
    fVar10 = *(float *)(param_2 + 0x2a4c);
    fVar11 = 0.0;
    if (fVar10 < 0.0) {
LAB_00a5cab0:
      *(float *)(param_2 + 0x2a4c) = fVar11;
    }
    else {
      fVar11 = fVar10;
      if (fVar10 < 1.0) {
        fVar11 = param_1 / 0.3 + fVar10;
        goto LAB_00a5cab0;
      }
    }
    fVar10 = (float)NEON_fminnm(fVar11,0x3f800000);
    fVar10 = fVar12 * fVar10 + fVar8 * (1.0 - fVar10);
    if (1.0 <= fVar11) {
      *(float *)(param_2 + 0x2a48) = fVar12;
      *(undefined4 *)(param_2 + 0x2a4c) = 0xbf800000;
    }
  }
  lVar6 = param_2 + 0x2a38;
  FUN_00e70e18(lVar6,&DAT_01bb6d43,(int)fVar10);
  lVar1 = param_2 + 0x2900;
  FUN_00f0d75c(lVar1,lVar6);
  uVar3 = FUN_00e70b14(lVar6);
  FUN_00f07b18((float)uVar3 * -40.0 + -12.0,lVar1,3,param_2,1);
  FUN_00f07b18(0xc1400000,param_2 + 0x2810,1,lVar1,3);
  FUN_00f07b18(0,param_2 + 0x2810,5,lVar1,5);
  if ((*(int *)(param_2 + 0x2a30) == 0) && (*(long *)(param_2 + 0xc0) != 0)) {
    uVar3 = 0;
    if ((float)*(int *)(param_2 + 0x2a54) <= fVar12) {
      uVar3 = FUN_00a60ea8();
    }
    FUN_00ceace8();
    uVar7 = FUN_00ceaf8c();
    if ((uVar7 & 1) != 0) {
      uVar4 = FUN_00a60a58(*(undefined8 *)(param_2 + 0xc0));
      uVar3 = uVar3 & uVar4;
      *(uint *)(param_2 + 0x37c) =
           *(uint *)(param_2 + 0x37c) & 0xfffffff8 |
           *(uint *)(param_2 + 0x37c) & 3 | (uVar3 & 1) << 2;
    }
    FUN_00a5caf4(param_2,*(undefined4 *)(param_2 + 0x2a54),uVar3 & 1);
  }
LAB_00a5ca28:
  lVar6 = FUN_00a1ae38();
  if (lVar6 == 0) {
    uVar9 = 0;
  }
  else {
    FUN_00a1ae38();
    uVar9 = FUN_00a1b610();
  }
  FUN_00abb6ac(uVar9,param_2 + 0x1fd8);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a5caf4(undefined1 param_1 [16],undefined4 param_2,long param_3,uint param_4,ulong param_5
                 )

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar2 = (param_4 >> 0x1d ^ 0xffffffff) & 4;
  uVar4 = *(uint *)(param_3 + 0x37c) & 0xfffffffb | uVar2;
  *(uint *)(param_3 + 0x37c) = uVar4;
  *(uint *)(param_3 + 0x193c) = *(uint *)(param_3 + 0x193c) & 0xfffffffb | uVar2;
  if (*(uint *)(param_3 + 0x2a54) != param_4) {
    if (-1 < (int)param_4) {
      plVar1 = (long *)(param_3 + 0x18b8);
      FUN_00e70510(&local_60);
      FUN_00e70e18(&local_60,&DAT_01bb6d43,param_4);
      FUN_00f0d75c(param_3 + 0x1970,&local_60);
      uVar5 = FUN_00f01c54(plVar1,0,0,1,1);
      local_50 = CONCAT44(param_2,uVar5);
      FUN_00f13f18(plVar1,&local_50);
      fVar6 = (float)FUN_00f13e54(plVar1);
      if ((*(float *)(param_3 + 0x18f8) != fVar6 * -0.5) || (*(float *)(param_3 + 0x18fc) != 25.0))
      {
        *(float *)(param_3 + 0x18f8) = fVar6 * -0.5;
        *(undefined4 *)(param_3 + 0x18fc) = 0x41c80000;
        FUN_0091ada4(plVar1);
      }
      local_50 = 0x3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_50);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
        local_60 = 0;
        local_58 = (void *)0x0;
      }
      uVar4 = *(uint *)(param_3 + 0x37c);
    }
    *(uint *)(param_3 + 0x2a54) = param_4;
  }
  uVar2 = uVar4 >> 7 & 0xff;
  if ((param_5 & 1) == 0) {
    if (uVar2 == 0x4c) goto LAB_00a5cc64;
    uVar4 = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x2600;
  }
  else {
    if (uVar2 == 0xff) goto LAB_00a5cc64;
    uVar4 = uVar4 | 0x7f80;
  }
  *(uint *)(param_3 + 0x37c) = uVar4;
  FUN_0091ada4(param_3 + 0x2f8);
LAB_00a5cc64:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5cc90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar1 = param_1 + 0x1aa0;
  if ((*(float *)(param_1 + 0x1ae0) != 0.0) || (*(float *)(param_1 + 0x1ae4) != 12.0)) {
    *(undefined8 *)(param_1 + 0x1ae0) = 0x4140000000000000;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x1aa0) + 0x28))(lVar1,&local_50);
  if ((*(float *)(param_1 + 0x1ae8) != 0.9) || (*(float *)(param_1 + 0x1aec) != 0.9)) {
    *(undefined8 *)(param_1 + 0x1ae8) = 0x3f6666663f666666;
    FUN_0091ada4(lVar1);
  }
  fVar6 = (float)FUN_00f0e700(lVar1);
  fVar7 = *(float *)(param_1 + 0x1ae4) + -3.0;
  if ((*(float *)(param_1 + 0x19b0) != fVar6) || (*(float *)(param_1 + 0x19b4) != fVar7)) {
    *(float *)(param_1 + 0x19b0) = fVar6;
    *(float *)(param_1 + 0x19b4) = fVar7;
    FUN_0091ada4(param_1 + 0x1970);
  }
  local_50 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x1970) + 0x28))(param_1 + 0x1970,&local_50);
  lVar1 = param_1 + 0x2f8;
  *(uint *)(param_1 + 0x193c) = *(uint *)(param_1 + 0x193c) & 0xffffffbf;
  FUN_00ab7628(0x4307cccd,lVar1);
  lVar2 = param_1 + 0x1b90;
  FUN_00b035dc(lVar2,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f13e54(lVar1);
  FUN_00b03710(lVar2);
  FUN_00b036e0(lVar2,1);
  *(uint *)(param_1 + 0x1c14) = *(uint *)(param_1 + 0x1c14) & 0xffffffbf;
  FUN_00f07940(0,0,lVar2,5,lVar1,5);
  lVar2 = param_1 + 0x1f20;
  FUN_00f13f08(0x42dc0000,0x42dc0000,lVar2);
  lVar3 = param_1 + 0x1fd8;
  fVar7 = 0.0;
  FUN_00f07940(0,lVar3,8,lVar2,8);
  *(uint *)(param_1 + 0x205c) = *(uint *)(param_1 + 0x205c) & 0xffffffbf;
  FUN_00f07b18(0xc2480000,lVar2,1,lVar1,3);
  FUN_00f07b18(0,lVar2,5,lVar1,5);
  (**(code **)(**(long **)(param_1 + 0x1f10) + 0x90))();
  uVar5 = *(undefined8 *)(param_1 + 0x1f10);
  FUN_00f07b18(0xc1400000,uVar5,2,lVar3,0);
  FUN_00f07b18(0,uVar5,4,lVar3,4);
  lVar1 = param_1 + 0x1a0;
  *(uint *)(*(long *)(param_1 + 0x1f10) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1f10) + 0x84) & 0xffffffbf;
  FUN_00f13238(lVar1);
  fVar6 = (float)FUN_00f13e54(lVar1);
  local_50 = CONCAT44(fVar7 + 8.0,fVar6 + 8.0);
  FUN_00f13f18(param_1,&local_50);
  FUN_00f07940(0,0,lVar1,8,param_1,8);
  *(uint *)(param_1 + 0x2984) = *(uint *)(param_1 + 0x2984) & 0xffffffbf;
  lVar1 = param_1 + 0x2900;
  FUN_00f0d378(lVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd8);
  *(uint *)(param_1 + 0x2894) = *(uint *)(param_1 + 0x2894) & 0xffffffbf;
  FUN_00f07b18(0x41400000,lVar1,0,param_1,2);
  FUN_00f07b18(0,param_1 + 0x2810,5,lVar1,5);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5cfe4(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  int iVar11;
  float fVar12;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar11 = (int)param_1[0x546];
  if (iVar11 == 4) {
    uVar5 = FUN_00e6ce7c("HUD_STORE_INVENTORY_FULL",0);
    FUN_00b02c3c(param_1 + 0x372,uVar5,0);
  }
  else {
    if (iVar11 == 3) {
      uVar5 = FUN_00e6ce7c("HUD_STORE_NOT_NEAR_SHOP",0);
      FUN_00b02c3c(param_1 + 0x372,uVar5,0);
      *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffb;
      *(uint *)((long)param_1 + 0x205c) = *(uint *)((long)param_1 + 0x205c) | 4;
      goto LAB_00a5d0f0;
    }
    if (iVar11 != 5) {
      FUN_00b02c3c(param_1 + 0x372,&DAT_03210450,0);
      plVar6 = (long *)param_1[0x19];
      if (plVar6 == (long *)0x0) {
        lVar7 = 0;
      }
      else if ((int)param_1[0x1a] == (int)plVar6[1]) {
        lVar7 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        param_1[0x19] = 0;
        lVar7 = 0;
        *(undefined4 *)(param_1 + 0x1a) = DAT_03214ce8;
      }
      uVar5 = FUN_00d9eae0(lVar7);
      iVar11 = (int)param_1[0x546];
      if (iVar11 == 1) {
        uVar8 = FUN_00d73574(uVar5,(int)param_1[0x54a]);
        plVar6 = param_1 + 0x54a;
        if ((uVar8 & 1) == 0) {
          plVar6 = (long *)&DAT_01bc8f94;
        }
        if ((int)*plVar6 == -1) {
          iVar11 = (int)param_1[0x546];
          goto LAB_00a5d2c0;
        }
        uVar9 = FUN_00e6ce7c("HUD_STORE_ITEMSELL",0);
        FUN_00ab7498(param_1 + 0x5f,uVar9);
        lVar7 = FUN_00d73214(uVar5,(int)param_1[0x54a]);
        FUN_00a5caf4(param_1,*(undefined4 *)(lVar7 + 0x40),1);
      }
      else {
        if (iVar11 != 0) {
LAB_00a5d2c0:
          if (iVar11 == 2) {
            *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffb;
            *(uint *)((long)param_1 + 0x205c) = *(uint *)((long)param_1 + 0x205c) & 0xfffffffb;
            FUN_00c00b18(param_1[0x3e2],0);
          }
          goto LAB_00a5d0f0;
        }
        if (param_1[0x18] == 0) goto LAB_00a5d0f0;
        fVar12 = *(float *)(*(long *)(lVar7 + 0x40) + 800);
        local_78 = 0xffffffff;
        local_3c = 0;
        local_44 = 0;
        uStack_4c = 0;
        local_54 = 0;
        local_7c = 0;
        uStack_5c = 0;
        local_64 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        lVar7 = param_1[0x17];
        uVar2 = FUN_00a60ab4();
        uVar3 = FUN_00d74500(lVar7,uVar2,(int)fVar12,&local_7c,&local_78,&local_80,1);
        FUN_00ceace8();
        uVar8 = FUN_00ceaf8c();
        if ((uVar8 & 1) != 0) {
          uVar4 = FUN_00a60a58(param_1[0x18]);
          uVar3 = uVar3 & uVar4;
          *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffb;
          *(uint *)((long)param_1 + 0x205c) = *(uint *)((long)param_1 + 0x205c) & 0xfffffffb;
        }
        FUN_00a5caf4(param_1,local_7c,uVar3 & 1);
        if (local_80 == 0) {
          pcVar10 = "HUD_STORE_ITEMBUY";
        }
        else {
          pcVar10 = "HUD_STORE_ITEMUPGRADE";
        }
        uVar5 = FUN_00e6ce7c(pcVar10,0);
        FUN_00ab7498(param_1 + 0x5f,uVar5);
      }
      *(uint *)((long)param_1 + 0x205c) = *(uint *)((long)param_1 + 0x205c) | 4;
      goto LAB_00a5d0f0;
    }
    FUN_00e705c8(&local_78,"ITEM CATEGORY FULL :o");
    FUN_00b02c3c(param_1 + 0x372,&local_78,0);
    if ((void *)CONCAT44(uStack_6c,uStack_70) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(uStack_6c,uStack_70));
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
    }
  }
  *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x193c) = *(uint *)((long)param_1 + 0x193c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x205c) = *(uint *)((long)param_1 + 0x205c) | 4;
LAB_00a5d0f0:
  FUN_00f048e0(&local_78,DAT_03133768,0);
  FUN_00f04760(param_1,&local_78,0);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

