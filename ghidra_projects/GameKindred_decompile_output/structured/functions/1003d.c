// functions/1003d — 434 functions
#include "GameKindred.h"




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




void thunk_FUN_1003d21e8(void)

{
  FUN_1003d21e8();
  return;
}




float FUN_1003d0044(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x5c4);
}




undefined4 FUN_1003d00a8(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




undefined4 FUN_1003d00bc(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  uVar2 = FUN_1003a47d0(lVar4,PTR_s_Buff_Caine_AmmoPerk_10185b6b0);
  if ((uVar2 & 1) == 0) {
    iVar1 = FUN_1003a47d0(lVar4,PTR_s_Buff_Caine_AmmoPerkTalent_10185b6a8);
    uVar3 = 0;
    if (iVar1 == 0) {
      uVar3 = 0x400;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1003d0134(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar2 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined8 *)(lVar2 + 8) = param_1;
  lVar1 = lVar1 + 0xb0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0xc2;
  FUN_1003d266c(lVar2,"HipAttack");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Caine_A_Attack");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d0044(*(undefined4 *)(lVar2 + 0x5d8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_10000dbb0();
  FUN_1003a985c(lVar1,lVar2);
  FUN_1003a4e5c(&local_50,param_1);
  *(undefined4 *)(lVar2 + 0x10) = local_50._0_4_;
  *(undefined4 *)(lVar2 + 0x14) = 0xffffffff;
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) & 0xfe;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Caine_AmmoControl_10185b6b8);
  local_50 = FUN_1003d00a8;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  return local_40;
}




void FUN_1003d02c4(long param_1,int *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  
  plVar5 = (long *)(param_1 + 0x10);
  plVar4 = plVar5;
  do {
    lVar1 = *plVar4;
    plVar4 = (long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  uVar2 = FUN_1003a47d0(lVar1,PTR_s_Buff_Caine_Talent_TalentC_10185b6a0);
  if ((uVar2 & 1) == 0) {
    do {
      lVar1 = *plVar5;
      plVar5 = (long *)(lVar1 + 0x10);
    } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
    uVar3 = 5;
  }
  else {
    do {
      lVar1 = *plVar5;
      plVar5 = (long *)(lVar1 + 0x10);
    } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
    uVar3 = 6;
  }
  fVar6 = (float)FUN_1003dfe60(lVar1,1,uVar3,0x19,0);
  *param_2 = (int)fVar6;
  return;
}




void FUN_1003d0378(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




undefined8 FUN_1003d038c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar1 + 0x18) = FUN_1003c5148;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Warhawk_Basic_Attack_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Warhawk_Basic_Attack_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Warhawk_Basic_Attack_3");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d04f8(*(undefined4 *)(lVar1 + 0x618));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  FUN_1003d266c(lVar1,param_3);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




float FUN_1003d04f8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x614);
}




void FUN_1003d055c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,2,0x19,0);
  return;
}




void FUN_1003d0570(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003d0584(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f6c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_1003d05b8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f6c;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




undefined4 FUN_1003d05ec(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




undefined8 FUN_1003d0600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  uVar8 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar8);
  plVar9 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_60,plVar9);
  (**(code **)(*plVar9 + 0x58))(plVar9,param_1);
  plVar9 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_60,plVar9);
  bVar7 = (int)param_3 != 2;
  ppuVar1 = &PTR_s_Sound_Miho_Crit_Attack_01_10185b740;
  if (bVar7) {
    ppuVar1 = &PTR_s_Sound_Miho_Default_Attack_01_10185b728;
  }
  ppuVar2 = &PTR_s_Sound_Miho_Crit_Attack_02_10185b748;
  if (bVar7) {
    ppuVar2 = &PTR_s_Sound_Miho_Default_Attack_02_10185b730;
  }
  ppuVar3 = &PTR_s_Sound_Miho_Crit_Attack_03_10185b750;
  if (bVar7) {
    ppuVar3 = &PTR_s_Sound_Miho_Default_Attack_03_10185b738;
  }
  ppuVar4 = &PTR_s_Sound_Miho_Crit_Impact_01_10185b770;
  if (bVar7) {
    ppuVar4 = &PTR_s_Sound_Miho_Default_Impact_01_10185b758;
  }
  ppuVar5 = &PTR_s_Sound_Miho_Crit_Impact_02_10185b778;
  if (bVar7) {
    ppuVar5 = &PTR_s_Sound_Miho_Default_Impact_02_10185b760;
  }
  ppuVar6 = &PTR_s_Sound_Miho_Crit_Impact_03_10185b780;
  if (bVar7) {
    ppuVar6 = &PTR_s_Sound_Miho_Default_Impact_03_10185b768;
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x58))(plVar9,*ppuVar1);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,*ppuVar2);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,*ppuVar3);
  uVar8 = FUN_1010a1520();
  lVar10 = FUN_1010a0e0c(uVar8,0,"*KindredSoundBalance*",0);
  FUN_1003d0900(*(undefined4 *)(lVar10 + 0x63c));
  (**(code **)(*plVar9 + 0x28))(plVar9);
  plVar9 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar9);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x68))(plVar9,"Bone_Sword");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,"Effect_Miho_Sword");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x78))(plVar9,1);
  plVar9 = (long *)(**(code **)(*plVar9 + 0xb0))(plVar9,0);
  local_70[0] = 0x3ee66666;
  local_68 = 1;
  (**(code **)(*plVar9 + 0x60))(plVar9,local_70);
  lVar10 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar10);
  *(code **)(lVar10 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar10 + 0x18) = FUN_1003c5148;
  plVar9 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_60,plVar9);
  (**(code **)(*plVar9 + 0x58))(plVar9,param_3);
  plVar9 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_60,plVar9);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x58))(plVar9,*ppuVar4);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,*ppuVar5);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,*ppuVar6);
  uVar8 = FUN_1010a1520();
  lVar10 = FUN_1010a0e0c(uVar8,0,"*KindredSoundBalance*",0);
  FUN_1003d0900(*(undefined4 *)(lVar10 + 0x63c));
  (**(code **)(*plVar9 + 0x28))(plVar9);
  plVar9 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar9);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x58))(plVar9);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,param_2);
  (**(code **)(*plVar9 + 0x78))(plVar9,0);
  uVar8 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar8);
  return local_60;
}




float FUN_1003d0900(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x638);
}




void FUN_1003d0964(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  *param_4 = *(undefined4 *)(param_1 + 0x250);
  fVar1 = *(float *)(param_1 + 0x254);
  param_4[1] = fVar1;
  param_4[2] = *(undefined4 *)(param_1 + 600);
  param_4[1] = *(float *)(param_1 + 0x2ec) + fVar1;
  return;
}




void FUN_1003d09b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(lVar1 + 0x250);
  fVar3 = *(float *)(lVar1 + 0x254);
  fVar7 = *(float *)(lVar1 + 600);
  fVar4 = *(float *)(lVar1 + 0x2ec);
  fVar5 = *(float *)(lVar1 + 0x248);
  fVar8 = (float)*(undefined8 *)(lVar1 + 0x240);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar1 + 0x240) >> 0x20);
  fVar6 = fVar8 * fVar8 + fVar9 * fVar9 + fVar5 * fVar5;
  if (1e-08 <= fVar6) {
    fVar6 = SQRT(fVar6);
    fVar8 = fVar8 / fVar6;
    fVar9 = fVar9 / fVar6;
    fVar5 = fVar5 / fVar6;
  }
  else {
    fVar8 = 1.0;
    fVar9 = 0.0;
    fVar5 = 0.0;
  }
  fVar6 = (float)FUN_10045f34c(param_1 + 0x220);
  *param_4 = CONCAT44(fVar4 + fVar3 + fVar9 * fVar6,fVar2 + fVar8 * fVar6);
  *(float *)(param_4 + 1) = fVar7 + fVar5 * fVar6;
  return;
}




void FUN_1003d0a94(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_710 [2];
  undefined **local_708;
  long lStack_700;
  byte local_6f8;
  undefined8 local_6f4;
  undefined4 local_6ec;
  undefined4 uStack_6e8;
  undefined4 local_6e4;
  undefined4 uStack_6e0;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined4 local_6c8;
  undefined1 local_6c4;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined2 local_6b0;
  byte local_6ae;
  undefined4 local_6ac;
  undefined4 uStack_6a8;
  undefined8 local_6a4;
  undefined1 local_69c;
  long local_698 [200];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar5 = *(long *)(lVar5 + 0x10);
    }
    plVar2 = *(long **)(param_1 + 0x1c8);
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
        if (lVar3 != 0) {
          FUN_1003a4e5c(local_710,PTR_s_Buff_Ishtar_Minion_PFX_10185b7b8);
          local_6f4 = 0;
          local_6e4 = 0;
          uStack_6e0 = 0;
          local_6ec = 0;
          uStack_6e8 = 0;
          local_6dc = 0;
          uStack_6d0 = 0xbf800000c0000000;
          local_6d8 = 0xbf800000bf800000;
          local_6c8 = 0x3f800000;
          local_6c4 = 0xff;
          uStack_6b8 = 0xffffffff00000000;
          local_6c0 = 0xffffffff00000000;
          local_6f8 = local_6f8 & 0xfc | 1;
          lVar3 = FUN_1003e10f0();
          local_6ac = local_710[0];
          uStack_6a8 = 0xffffffff;
          local_6a4 = 0;
          local_69c = 0;
          local_708 = &PTR_FUN_1014999d0;
          local_6ae = local_6ae & 0xe0 | *(byte *)(lVar3 + 0xe5) | 0x14;
          uStack_6e8 = 0x1402860;
          local_6e4 = 1;
          local_6b0 = 0x5110;
          lStack_700 = lVar5;
          uVar1 = FUN_1003a6ce4(&local_708,local_698,200,0);
          if (uVar1 != 0) {
            uVar6 = (ulong)uVar1;
            plVar2 = local_698;
            do {
              lVar5 = *plVar2;
              plVar4 = *(long **)(param_1 + 0x1c8);
              if (plVar4 == (long *)0x0) {
                lVar3 = 0;
              }
              else if (*(int *)(param_1 + 0x1d0) == (int)plVar4[1]) {
                lVar3 = (**(code **)(*plVar4 + 0x10))();
              }
              else {
                lVar3 = 0;
                *(undefined8 *)(param_1 + 0x1c8) = 0;
                *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
              }
              fVar7 = *(float *)(lVar5 + 0x250) - *(float *)(lVar3 + 0x250);
              fVar8 = (*(float *)(lVar5 + 0x2ec) + *(float *)(lVar5 + 0x254)) -
                      (*(float *)(lVar3 + 0x254) + *(float *)(lVar3 + 0x2ec));
              fVar9 = *(float *)(lVar5 + 600) - *(float *)(lVar3 + 600);
              if (SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8) <= 9.0) {
                FUN_100101b14(*plVar2,0);
              }
              plVar2 = plVar2 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x1c8) = 0;
        *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




float FUN_1003d0cf8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x638);
}




float FUN_1003d0d5c(void)

{
  int iVar1;
  
  iVar1 = _rand();
  return (float)iVar1 * 9.313226e-10 + 1.0;
}




void FUN_1003d0d84(undefined8 param_1)

{
  FUN_1003e00a8(param_1,1,9,9,1);
  return;
}




undefined8 FUN_1003d0d98(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dab8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar1 = *(long *)(lVar1 + 0x50);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x68) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return 0;
  }
  if (*(short *)(lVar1 + uVar2 * 0x38 + 0x70) != 2) {
    return 0;
  }
  return 2;
}




void FUN_1003d0e24(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




void FUN_1003d0e38(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,1,0x19,0);
  return;
}




undefined8 FUN_1003d0e4c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar1 + 0x18) = FUN_1003c5148;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Viola_Basic_Attack_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Viola_Basic_Attack_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Viola_Basic_Attack_03");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6a4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  FUN_1003d266c(lVar1,param_3);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




float FUN_1003d0fb8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x6a0);
}




undefined8 FUN_1003d101c(void)

{
  return 0x400;
}




void FUN_1003d1024(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,1,0x19,0);
  return;
}




undefined8 FUN_1003d1038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar6 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar6);
  plVar7 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar7);
  (**(code **)(*plVar7 + 0x58))(plVar7,param_1);
  plVar7 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar7);
  bVar5 = (int)param_3 != 2;
  ppuVar1 = &PTR_s_Sound_Amael_Crit_Attack_01_10185b8e8;
  if (bVar5) {
    ppuVar1 = &PTR_s_Sound_Amael_Basic_Attack_1_10185b8d8;
  }
  ppuVar2 = &PTR_s_Sound_Amael_Crit_Attack_02_10185b8f0;
  if (bVar5) {
    ppuVar2 = &PTR_s_Sound_Amael_Basic_Attack_2_10185b8e0;
  }
  ppuVar3 = &PTR_s_Sound_Amael_Crit_Attack_Hit_01_10185b908;
  if (bVar5) {
    ppuVar3 = &PTR_s_Sound_Amael_Basic_Attack_Hit_01_10185b8f8;
  }
  ppuVar4 = &PTR_s_Sound_Amael_Crit_Attack_Hit_02_10185b910;
  if (bVar5) {
    ppuVar4 = &PTR_s_Sound_Amael_Basic_Attack_Hit_02_10185b900;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7,*ppuVar1);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,*ppuVar2);
  uVar6 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar8 + 0x754));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  lVar8 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar8);
  *(code **)(lVar8 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar8 + 0x18) = FUN_1003c5148;
  plVar7 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7);
  (**(code **)(*plVar7 + 0x48))(plVar7,param_2);
  plVar7 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7,*ppuVar3);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,*ppuVar4);
  uVar6 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar8 + 0x754));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  plVar7 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_50,plVar7);
  (**(code **)(*plVar7 + 0x58))(plVar7,param_3);
  uVar6 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar6);
  return local_50;
}




float FUN_1003d1264(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x750);
}




void FUN_1003d12c8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  *param_4 = *(undefined4 *)(param_1 + 0x250);
  fVar1 = *(float *)(param_1 + 0x254);
  param_4[1] = fVar1;
  param_4[2] = *(undefined4 *)(param_1 + 600);
  param_4[1] = *(float *)(param_1 + 0x2ec) + fVar1;
  return;
}




void FUN_1003d1314(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(lVar1 + 0x250);
  fVar3 = *(float *)(lVar1 + 0x254);
  fVar7 = *(float *)(lVar1 + 600);
  fVar4 = *(float *)(lVar1 + 0x2ec);
  fVar5 = *(float *)(lVar1 + 0x248);
  fVar8 = (float)*(undefined8 *)(lVar1 + 0x240);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar1 + 0x240) >> 0x20);
  fVar6 = fVar8 * fVar8 + fVar9 * fVar9 + fVar5 * fVar5;
  if (1e-08 <= fVar6) {
    fVar6 = SQRT(fVar6);
    fVar8 = fVar8 / fVar6;
    fVar9 = fVar9 / fVar6;
    fVar5 = fVar5 / fVar6;
  }
  else {
    fVar8 = 1.0;
    fVar9 = 0.0;
    fVar5 = 0.0;
  }
  fVar6 = (float)FUN_10045f34c(param_1 + 0x220);
  *param_4 = CONCAT44(fVar4 + fVar3 + fVar9 * fVar6,fVar2 + fVar8 * fVar6);
  *(float *)(param_4 + 1) = fVar7 + fVar5 * fVar6;
  return;
}




void FUN_1003d13f8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  
  if (DAT_101d23a38 != '\0') {
    lVar4 = *(long *)(param_1 + 0x10);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    lVar6 = *(long *)(param_1 + 0x60);
    if (lVar6 != 0) {
      uVar5 = 0;
      do {
        uVar3 = FUN_10045fb10(lVar6);
        if (uVar3 <= uVar5) {
          return;
        }
        lVar6 = FUN_10045fa7c(lVar6,uVar5);
        puVar2 = PTR_s_Buff_Amael_EmpowerMeter_10185b918;
        if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x2f4) & 1) != 0)) {
          uVar1 = *(undefined4 *)(lVar4 + 0x260);
          local_5c = FUN_1003df710(lVar4,3,1);
          local_80 = 0;
          uStack_78 = 0;
          local_70 = 0;
          local_88 = &PTR_FUN_101496b18;
          local_64 = DAT_1018589d8;
          local_58 = 1;
          local_40 = 0;
          local_4c = 0;
          local_54 = 0;
          local_38 = DAT_101dc0b88;
          DAT_1018589d8 = DAT_1018589d8 + 1;
          local_6c = uVar1;
          uStack_68 = uVar1;
          local_60 = FUN_1003d4e0c(puVar2);
          FUN_10049639c(&local_88,&DAT_101e47d30);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = *(long *)(param_1 + 0x60);
      } while (lVar6 != 0);
    }
  }
  return;
}




undefined1  [16] FUN_1003d1528(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  int local_50 [2];
  int local_48 [2];
  int local_40 [2];
  undefined4 local_38 [2];
  undefined1 auVar8 [16];
  
  lVar3 = *(long *)(param_1 + 0x10);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  lVar4 = *(long *)(lVar3 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  FUN_1003a4e5c(local_40,PTR_s_Buff_Amael_A_Charging_10185b920);
  lVar1 = *(long *)(lVar4 + 0x28);
  lVar2 = lVar1;
  while( true ) {
    fVar5 = 0.0;
    if (lVar2 == 0) goto LAB_1003d1674;
    if ((*(int *)(lVar2 + 0x314) == local_40[0]) && (*(int *)(lVar2 + 0x310) == 0)) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  for (; *(int *)(lVar1 + 0x30c) != *(int *)(lVar2 + 0x30c); lVar1 = *(long *)(lVar1 + 0x350)) {
  }
  fVar7 = *(float *)(lVar1 + 0x318);
  fVar5 = (float)FUN_1003dfe60(lVar3,0,3,0x19,0);
  FUN_1003a4e5c(local_48,PTR_s_Buff_Amael_Talent_TalentA_10185b928);
  lVar2 = *(long *)(lVar4 + 0x28);
  do {
    if (lVar2 == 0) {
LAB_1003d1668:
      fVar5 = 1.0 - fVar7 / fVar5;
LAB_1003d1674:
      fVar7 = (float)FUN_1003dfe60(lVar3,0,5,0x19,0);
      FUN_1003a4e5c(local_50,PTR_s_Buff_Amael_A_Charged_10185b930);
      lVar4 = *(long *)(lVar4 + 0x28);
      while( true ) {
        if (lVar4 == 0) {
          return ZEXT416((uint)(fVar7 * fVar5));
        }
        if ((*(int *)(lVar4 + 0x314) == local_50[0]) && (*(int *)(lVar4 + 0x310) == 0)) break;
        lVar4 = *(long *)(lVar4 + 0x350);
      }
      FUN_1003dfe60(lVar3,0,5,0x19,0);
      auVar8._4_4_ = extraout_var;
      auVar8._0_4_ = extraout_s0;
      auVar8._8_8_ = extraout_var_00;
      return auVar8;
    }
    if ((*(int *)(lVar2 + 0x314) == local_48[0]) && (*(int *)(lVar2 + 0x310) == 0)) {
      local_38[0] = DAT_101d90ff0;
      fVar6 = (float)FUN_1003dfee8(lVar3,local_38,0,9);
      fVar5 = fVar6 * fVar5;
      goto LAB_1003d1668;
    }
    lVar2 = *(long *)(lVar2 + 0x350);
  } while( true );
}




undefined1  [16] FUN_1003d1708(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  int local_40 [2];
  undefined4 local_38 [2];
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  lVar2 = *(long *)(lVar1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  auVar5 = FUN_1003dfe60(lVar1,1,5,0x19,0);
  uVar7 = auVar5._8_8_;
  uVar6 = auVar5._0_8_;
  FUN_1003a4e5c(local_40,PTR_s_Buff_Amael_Talent_TalentB_10185b938);
  lVar2 = *(long *)(lVar2 + 0x28);
  do {
    if (lVar2 == 0) {
LAB_1003d1804:
      auVar5._8_8_ = uVar7;
      auVar5._0_8_ = uVar6;
      return auVar5;
    }
    if ((*(int *)(lVar2 + 0x314) == local_40[0]) && (*(int *)(lVar2 + 0x310) == 0)) {
      local_38[0] = DAT_101d90ff8;
      fVar3 = (float)FUN_1003dfee8(lVar1,local_38,1,9);
      fVar4 = (float)FUN_1003dfe60(lVar1,1,5,0x19,0);
      uVar6 = (ulong)(uint)(fVar4 + fVar3);
      uVar7 = 0;
      goto LAB_1003d1804;
    }
    lVar2 = *(long *)(lVar2 + 0x350);
  } while( true );
}




void FUN_1003d181c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ff8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1003d1850(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_1003d1864(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,7,0x19,0);
  return;
}




void FUN_1003d1878(undefined8 param_1)

{
  FUN_1003df710(param_1,2,1);
  return;
}




void FUN_1003d1884(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1003d1898(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_1003d18ac(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,6,0x19,0);
  return;
}




bool FUN_1003d18c0(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x1c8);
  bVar1 = false;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      bVar1 = false;
      if (lVar3 != 0) {
        bVar1 = ((*(ushort *)(lVar3 + 0x2f8) ^ 0xffff) & 0x23) == 0;
      }
    }
    else {
      bVar1 = false;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return bVar1;
}




void FUN_1003d1928(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_4 = 0x40a00000;
  *param_3 = 0x40c00000;
  return;
}




undefined8
FUN_1003d193c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,param_3);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_60[0] = 0x3e4ccccd;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_60);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Karas_Basic_Attack_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Karas_Basic_Attack_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Karas_Basic_Attack_3");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1b2c(*(undefined4 *)(lVar1 + 0x6e0));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  FUN_1003d266c(lVar1,param_4);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




float FUN_1003d1b2c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x6dc);
}




void FUN_1003d1b90(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




undefined8 FUN_1003d1ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar6 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar6);
  plVar7 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7,param_1);
  (**(code **)(*plVar7 + 0x18))(plVar7,"AttackToIdleCombat");
  plVar7 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar7);
  bVar5 = (int)param_3 != 2;
  ppuVar1 = &PTR_s_Sound_Shin_Crit_Attack_1_10185b988;
  if (bVar5) {
    ppuVar1 = &PTR_s_Sound_Shin_Basic_Attack_1_10185b970;
  }
  ppuVar2 = &PTR_s_Sound_Shin_Crit_Attack_2_10185b990;
  if (bVar5) {
    ppuVar2 = &PTR_s_Sound_Shin_Basic_Attack_2_10185b978;
  }
  ppuVar3 = &PTR_s_Sound_Shin_Crit_Attack_Impact_1_10185b9a8;
  if (bVar5) {
    ppuVar3 = &PTR_s_Sound_Shin_Attack_Impact_1_10185b998;
  }
  ppuVar4 = &PTR_s_Sound_Shin_Crit_Attack_Impact_1_10185b9b0;
  if (bVar5) {
    ppuVar4 = &PTR_s_Sound_Shin_Attack_Impact_2_10185b9a0;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7,*ppuVar1);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,*ppuVar2);
  uVar6 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar8 + 0x708));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  lVar8 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar8);
  *(code **)(lVar8 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar8 + 0x18) = FUN_1003c5148;
  plVar7 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7);
  (**(code **)(*plVar7 + 0x48))(plVar7,param_2);
  plVar7 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7,*ppuVar3);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,*ppuVar4);
  uVar6 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar8 + 0x708));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  plVar7 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_50,plVar7);
  (**(code **)(*plVar7 + 0x58))(plVar7,param_3);
  uVar6 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar6);
  return local_50;
}




float FUN_1003d1de4(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x704);
}




void FUN_1003d1e48(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  *param_4 = *(undefined4 *)(param_1 + 0x250);
  fVar1 = *(float *)(param_1 + 0x254);
  param_4[1] = fVar1;
  param_4[2] = *(undefined4 *)(param_1 + 600);
  param_4[1] = *(float *)(param_1 + 0x2ec) + fVar1;
  return;
}




void FUN_1003d1e94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(lVar1 + 0x250);
  fVar3 = *(float *)(lVar1 + 0x254);
  fVar7 = *(float *)(lVar1 + 600);
  fVar4 = *(float *)(lVar1 + 0x2ec);
  fVar5 = *(float *)(lVar1 + 0x248);
  fVar8 = (float)*(undefined8 *)(lVar1 + 0x240);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar1 + 0x240) >> 0x20);
  fVar6 = fVar8 * fVar8 + fVar9 * fVar9 + fVar5 * fVar5;
  if (1e-08 <= fVar6) {
    fVar6 = SQRT(fVar6);
    fVar8 = fVar8 / fVar6;
    fVar9 = fVar9 / fVar6;
    fVar5 = fVar5 / fVar6;
  }
  else {
    fVar8 = 1.0;
    fVar9 = 0.0;
    fVar5 = 0.0;
  }
  fVar6 = (float)FUN_10045f34c(param_1 + 0x220);
  *param_4 = CONCAT44(fVar4 + fVar3 + fVar9 * fVar6,fVar2 + fVar8 * fVar6);
  *(float *)(param_4 + 1) = fVar7 + fVar5 * fVar6;
  return;
}




void FUN_1003d1f78(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_1003d1f8c(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = DAT_10184dd68;
  lVar3 = *(long *)(param_1 + 0x10);
  iVar4 = *(int *)(*(long *)(lVar3 + 8) + 0xa4);
  lVar5 = lVar3;
  iVar1 = iVar4;
  while (iVar1 != DAT_10184dd68) {
    lVar5 = *(long *)(lVar5 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
  }
  *param_2 = *(undefined4 *)(lVar5 + 0x250);
  fVar6 = *(float *)(lVar5 + 0x254);
  param_2[1] = fVar6;
  uVar7 = *(undefined4 *)(lVar5 + 600);
  param_2[1] = *(float *)(lVar5 + 0x2ec) + fVar6;
  param_2[2] = uVar7;
  while (iVar4 != iVar2) {
    lVar3 = *(long *)(lVar3 + 0x10);
    iVar4 = *(int *)(*(long *)(lVar3 + 8) + 0xa4);
  }
  fVar6 = *(float *)(lVar3 + 0x240);
  fVar9 = *(float *)(lVar3 + 0x248);
  fVar8 = fVar6 * fVar6 + *(float *)(lVar3 + 0x244) * *(float *)(lVar3 + 0x244) + fVar9 * fVar9;
  if (1e-08 <= fVar8) {
    fVar8 = SQRT(fVar8);
    fVar6 = fVar6 / fVar8;
    fVar9 = fVar9 / fVar8;
  }
  else {
    fVar6 = 1.0;
    fVar9 = 0.0;
  }
  uVar7 = _atan2f(fVar9,fVar6);
  *param_3 = uVar7;
  return;
}




void FUN_1003d206c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,6,2,0x19,0);
  return;
}




undefined8
FUN_1003d2080(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,param_3);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_60[0] = 0x3e4ccccd;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_60);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  FUN_1003d266c(lVar1,param_4);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




void FUN_1003d21e8(void)

{
  return;
}




void FUN_1003d21ec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d21f0);
  (*pcVar1)();
}




void FUN_1003d21f0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d21f4);
  (*pcVar1)();
}




undefined8 FUN_1003d21f4(void)

{
  return 1;
}




undefined8 FUN_1003d21fc(void)

{
  return 0;
}




undefined8 FUN_1003d2204(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_1003d220c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014967e8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0xff;
  return;
}




void FUN_1003d2230(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_50 [2];
  
  if (DAT_101d23a38 != '\0') {
    lVar4 = *(long *)(param_2 + 0x10);
    while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68) {
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    lVar5 = *(long *)(lVar4 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      if (*(code **)(param_1 + 0x28) == (code *)0x0) {
        uVar3 = (ulong)*(byte *)(param_1 + 0x38);
      }
      else {
        uVar3 = (**(code **)(param_1 + 0x28))(param_2);
      }
    }
    else {
      FUN_1003a4e5c(local_50);
      uVar3 = FUN_1003e2b0c(lVar5,local_50[0] & 0xffffffff);
    }
    uVar1 = *(uint *)(*(long *)(*(long *)(lVar5 + (uVar3 & 0xffffffff) * 8 + 0x50) + 0x38) + 0x80);
    if (uVar1 < 3) {
      local_50[0] = 0;
      (**(code **)(param_1 + 0x10))(param_2,local_50);
      if ((local_50[0] != 0) &&
         ((*(code **)(param_1 + 0x20) == (code *)0x0 ||
          (iVar2 = (**(code **)(param_1 + 0x20))(param_2,local_50[0],0), iVar2 != 0)))) {
        FUN_100101b14(lVar4,uVar3,local_50[0]);
      }
    }
    else if (uVar1 == 3) {
      (**(code **)(param_1 + 0x18))(param_2,local_50);
      if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
         (iVar2 = (**(code **)(param_1 + 0x20))(param_2,0,local_50), iVar2 != 0)) {
        FUN_100101b1c(lVar4,uVar3,local_50);
      }
    }
    else if ((uVar1 == 4) &&
            ((*(code **)(param_1 + 0x20) == (code *)0x0 ||
             (iVar2 = (**(code **)(param_1 + 0x20))(param_2,0,0), iVar2 != 0)))) {
      FUN_100101b0c(lVar4,uVar3);
      return;
    }
  }
  return;
}




void FUN_1003d23e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101496848;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}




void FUN_1003d23f8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_2 + 0x1c8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_2 + 0x1d0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if ((lVar2 != 0) &&
         ((*(char *)(param_1 + 0x10) != '\0' || ((*(byte *)(lVar2 + 0x2f9) & 1) == 0)))) {
        FUN_1003b4bec(param_2);
        return;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x1c8) = 0;
      *(undefined4 *)(param_2 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1003d2478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014968a8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return;
}




void FUN_1003d2490(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  int iStack_48;
  float local_44;
  
  if (DAT_101d23a38 != '\0') {
    lVar6 = *(long *)(param_2 + 0x10);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    lVar7 = *(long *)(lVar6 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    FUN_1003a4e5c(&local_68,*(undefined8 *)(param_1 + 0x10));
    lVar3 = *(long *)(lVar7 + 0x28);
    for (lVar7 = lVar3; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x350)) {
      if ((*(int *)(lVar7 + 0x314) == (int)local_68) && (*(int *)(lVar7 + 0x310) == 0)) {
        iVar1 = *(int *)(lVar7 + 0x30c);
        iVar5 = *(int *)(lVar3 + 0x30c);
        lVar7 = lVar3;
        iVar2 = iVar5;
        while (iVar2 != iVar1) {
          lVar7 = *(long *)(lVar7 + 0x350);
          iVar2 = *(int *)(lVar7 + 0x30c);
        }
        if (*(int *)(lVar7 + 0x308) != *(int *)(lVar6 + 0x260)) {
          return;
        }
        while (iVar5 != iVar1) {
          lVar3 = *(long *)(lVar3 + 0x350);
          iVar5 = *(int *)(lVar3 + 0x30c);
        }
        fVar8 = *(float *)(lVar3 + 0x318);
        pcVar4 = *(code **)(param_1 + 0x18);
        if ((pcVar4 == (code *)0x0) &&
           (pcVar4 = *(code **)(param_1 + 0x20), param_2 = lVar6, pcVar4 == (code *)0x0)) {
          local_44 = 0.0;
        }
        else {
          local_44 = (float)(*pcVar4)(param_2);
        }
        if (local_44 <= fVar8) {
          return;
        }
        local_4c = *(undefined4 *)(lVar6 + 0x260);
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_68 = &PTR_FUN_101497250;
        iStack_48 = iVar1;
        FUN_100496b60(&local_68,&DAT_101e47d30);
        return;
      }
    }
  }
  return;
}




void FUN_1003d2610(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_101497250;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  return;
}




void FUN_1003d2630(void)

{
  return;
}




undefined8 FUN_1003d2634(void)

{
  return 1;
}




void FUN_1003d263c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101496908;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xee;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x29) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  return;
}




void FUN_1003d266c(long param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  
  if ((param_2 != (char *)0x0) && (uVar3 = FUN_1004d2538(param_2), (uVar3 & 1) == 0)) {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
    *(uint *)(param_1 + 0x14) = uVar2;
  }
  return;
}




void FUN_1003d26d0(undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4,
                  long param_5)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_120;
  float fStack_11c;
  undefined4 local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  uint local_f4;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  float local_ec;
  float fStack_e8;
  undefined4 local_e4;
  float fStack_e0;
  float fStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  float local_ac [3];
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  lVar5 = *(long *)(param_5 + 0x10);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  local_ac[0] = 0.0;
  if (*(code **)(param_4 + 0x28) == (code *)0x0) {
    fVar8 = *(float *)(param_4 + 0x40);
    param_2 = ABS(fVar8);
    param_3 = 0x3c23d70a;
    fVar18 = fVar8;
    if (0.01 <= param_2) goto LAB_1003d277c;
    bVar2 = false;
  }
  else {
    fVar8 = (float)(**(code **)(param_4 + 0x28))(param_5,local_ac);
    fVar18 = local_ac[0];
LAB_1003d277c:
    local_ac[0] = fVar18;
    bVar2 = true;
  }
  if (*(code **)(param_4 + 0x18) != (code *)0x0) {
    (**(code **)(param_4 + 0x18))(param_5,lVar5,param_4 + 0x10,&local_110);
    fVar8 = (float)FUN_1003d266c(param_4,local_110);
  }
  local_b0 = 0;
  if (*(code **)(param_4 + 0x38) != (code *)0x0) {
    fVar8 = (float)(**(code **)(param_4 + 0x38))(param_5,&local_b0);
  }
  uVar6 = *(uint *)(param_5 + 0x238) >> 3 & 7;
  if (uVar6 == 0) {
    if (*(char *)(param_4 + 0x30) != '\0') {
      lVar7 = *(long *)(param_5 + 0x60);
      if (lVar7 == 0) {
        return;
      }
      uVar6 = 0;
      do {
        uVar3 = FUN_10045fb10(lVar7);
        if (uVar3 <= uVar6) {
          return;
        }
        lVar7 = FUN_10045fa7c(lVar7,uVar6);
        if (lVar7 != 0) {
          if (!bVar2) {
            local_ef = *(undefined1 *)(lVar5 + 0x300);
            local_ee = *(undefined1 *)(lVar7 + 0x300);
            local_ec = 0.0;
            fStack_e8 = 0.0;
            local_e4 = 0;
            local_d8 = *(undefined4 *)(param_4 + 0x10);
            local_d4 = *(undefined4 *)(param_4 + 0x14);
            local_bc = DAT_1018589d8;
          }
          else {
            local_ec = (float)FUN_1003d3134(local_ac[0],param_4,lVar7,lVar5);
            local_ef = *(undefined1 *)(lVar5 + 0x300);
            local_ee = 0;
            local_d8 = *(undefined4 *)(param_4 + 0x10);
            local_d4 = *(undefined4 *)(param_4 + 0x14);
            fStack_e8 = param_2;
            local_e4 = param_3;
            local_bc = DAT_1018589d8;
          }
          DAT_1018589d8 = local_bc + 1;
          fStack_dc = 0.0;
          fStack_e0 = 0.0;
          local_f4 = (uint)bVar2;
          local_f8 = 0;
          uStack_100 = 0;
          local_108 = 0;
          local_110 = &PTR_FUN_101497058;
          local_f0 = local_ef;
          local_b8 = local_b0;
          FUN_1004966e0(&local_110,&DAT_101e47d30);
        }
        uVar6 = uVar6 + 1;
        lVar7 = *(long *)(param_5 + 0x60);
      } while (lVar7 != 0);
      return;
    }
    if (*(int *)(param_4 + 0x34) == 3) goto switchD_1003d2b90_caseD_3;
    if (*(int *)(param_4 + 0x34) == 0) {
      local_120 = *(float *)(param_5 + 0x1d8);
      fStack_11c = *(float *)(param_5 + 0x1dc);
      local_118 = *(undefined4 *)(param_5 + 0x1e0);
      fVar8 = local_120;
      param_2 = fStack_11c;
      param_3 = local_118;
    }
LAB_1003d2ce8:
    local_120 = (float)FUN_1003d3244(fVar8,param_4,lVar5);
    local_f0 = *(undefined1 *)(lVar5 + 0x300);
    local_f4 = 1;
    local_ee = 0;
    local_d8 = *(undefined4 *)(param_4 + 0x10);
    local_d4 = *(undefined4 *)(param_4 + 0x14);
    local_bc = DAT_1018589d8;
    fStack_11c = param_2;
    local_118 = param_3;
    local_ef = local_f0;
    local_ec = local_120;
    fStack_e8 = param_2;
    local_e4 = param_3;
LAB_1003d2d60:
    DAT_1018589d8 = local_bc + 1;
    fStack_e0 = 0.0;
    fStack_dc = 0.0;
  }
  else {
    if (uVar6 != 2) {
      if (uVar6 != 1) {
        return;
      }
      if (*(char *)(param_4 + 0x30) != '\0') {
        lVar7 = *(long *)(param_5 + 0x60);
        if (lVar7 == 0) {
          return;
        }
        uVar6 = 0;
        do {
          uVar3 = FUN_10045fb10(lVar7);
          if (uVar3 <= uVar6) {
            return;
          }
          lVar7 = FUN_10045fa7c(lVar7,uVar6);
          if (lVar7 != 0) {
            if (!bVar2) {
              local_ef = *(undefined1 *)(lVar5 + 0x300);
              local_ee = *(undefined1 *)(lVar7 + 0x300);
              local_ec = 0.0;
              fStack_e8 = 0.0;
              local_e4 = 0;
              local_d8 = *(undefined4 *)(param_4 + 0x10);
              local_d4 = *(undefined4 *)(param_4 + 0x14);
              local_bc = DAT_1018589d8;
            }
            else {
              local_ec = (float)FUN_1003d3134(local_ac[0],param_4,lVar7,lVar5);
              local_ef = *(undefined1 *)(lVar5 + 0x300);
              local_ee = 0;
              local_d8 = *(undefined4 *)(param_4 + 0x10);
              local_d4 = *(undefined4 *)(param_4 + 0x14);
              fStack_e8 = param_2;
              local_e4 = param_3;
              local_bc = DAT_1018589d8;
            }
            DAT_1018589d8 = local_bc + 1;
            fStack_dc = 0.0;
            fStack_e0 = 0.0;
            local_f4 = (uint)bVar2;
            local_f8 = 0;
            uStack_100 = 0;
            local_108 = 0;
            local_110 = &PTR_FUN_101497058;
            local_f0 = local_ef;
            local_b8 = local_b0;
            FUN_1004966e0(&local_110,&DAT_101e47d30);
          }
          uVar6 = uVar6 + 1;
          lVar7 = *(long *)(param_5 + 0x60);
        } while (lVar7 != 0);
        return;
      }
      switch(*(undefined4 *)(param_4 + 0x34)) {
      case 1:
        goto switchD_1003d2b90_caseD_1;
      case 2:
        goto switchD_1003d2b90_caseD_2;
      case 3:
        goto switchD_1003d2b90_caseD_3;
      case 4:
        plVar4 = *(long **)(param_5 + 0x1c8);
        if (plVar4 == (long *)0x0) {
          return;
        }
        if (*(int *)(param_5 + 0x1d0) != (int)plVar4[1]) {
LAB_1003d307c:
          *(undefined8 *)(param_5 + 0x1c8) = 0;
          *(undefined4 *)(param_5 + 0x1d0) = DAT_101dc0b88;
          return;
        }
        lVar7 = (**(code **)(*plVar4 + 0x10))();
        if (lVar7 == 0) {
          return;
        }
        if (bVar2) {
          local_ec = (float)FUN_1003d3134(local_ac[0],param_4,lVar5,lVar7);
          local_f0 = *(undefined1 *)(lVar5 + 0x300);
          local_ef = *(undefined1 *)(lVar7 + 0x300);
          local_f4 = 1;
          fStack_e0 = 0.0;
          fStack_dc = 0.0;
          local_d8 = *(undefined4 *)(param_4 + 0x10);
          local_d4 = *(undefined4 *)(param_4 + 0x14);
          local_bc = DAT_1018589d8;
          fStack_e8 = param_2;
          local_e4 = param_3;
          goto LAB_1003d3038;
        }
        local_f0 = *(undefined1 *)(lVar5 + 0x300);
        local_ef = *(undefined1 *)(lVar7 + 0x300);
        local_ee = local_f0;
LAB_1003d3118:
        local_f4 = 0;
        local_e4 = 0;
        local_ec = 0.0;
        fStack_e8 = 0.0;
        local_d8 = *(undefined4 *)(param_4 + 0x10);
        local_d4 = *(undefined4 *)(param_4 + 0x14);
        local_bc = DAT_1018589d8;
        break;
      default:
        plVar4 = *(long **)(param_5 + 0x1c8);
        if (plVar4 == (long *)0x0) {
          return;
        }
        if (*(int *)(param_5 + 0x1d0) != (int)plVar4[1]) goto LAB_1003d307c;
        lVar7 = (**(code **)(*plVar4 + 0x10))();
        if (lVar7 == 0) {
          return;
        }
        if (!bVar2) {
          local_f0 = *(undefined1 *)(lVar5 + 0x300);
          local_ee = *(undefined1 *)(lVar7 + 0x300);
          local_ef = local_f0;
          goto LAB_1003d3118;
        }
        local_ec = (float)FUN_1003d3134(local_ac[0],param_4,lVar7,lVar5);
        local_f0 = *(undefined1 *)(lVar5 + 0x300);
        local_f4 = 1;
        fStack_e0 = 0.0;
        fStack_dc = 0.0;
        local_d8 = *(undefined4 *)(param_4 + 0x10);
        local_d4 = *(undefined4 *)(param_4 + 0x14);
        local_ef = local_f0;
        fStack_e8 = param_2;
        local_e4 = param_3;
        local_bc = DAT_1018589d8;
        goto LAB_1003d3038;
      }
      goto LAB_1003d2d60;
    }
    if (*(char *)(param_4 + 0x30) != '\0') {
      lVar7 = *(long *)(param_5 + 0x60);
      if (lVar7 == 0) {
        return;
      }
      uVar6 = 0;
      do {
        uVar3 = FUN_10045fb10(lVar7);
        if (uVar3 <= uVar6) {
          return;
        }
        lVar7 = FUN_10045fa7c(lVar7,uVar6);
        if (lVar7 != 0) {
          if (!bVar2) {
            local_ef = *(undefined1 *)(lVar5 + 0x300);
            local_ee = *(undefined1 *)(lVar7 + 0x300);
            local_ec = 0.0;
            fStack_e8 = 0.0;
            local_e4 = 0;
            local_d8 = *(undefined4 *)(param_4 + 0x10);
            local_d4 = *(undefined4 *)(param_4 + 0x14);
            local_bc = DAT_1018589d8;
          }
          else {
            local_ec = (float)FUN_1003d3134(local_ac[0],param_4,lVar7,lVar5);
            local_ef = *(undefined1 *)(lVar5 + 0x300);
            local_ee = 0;
            local_d8 = *(undefined4 *)(param_4 + 0x10);
            local_d4 = *(undefined4 *)(param_4 + 0x14);
            fStack_e8 = param_2;
            local_e4 = param_3;
            local_bc = DAT_1018589d8;
          }
          DAT_1018589d8 = local_bc + 1;
          fStack_dc = 0.0;
          fStack_e0 = 0.0;
          local_f4 = (uint)bVar2;
          local_f8 = 0;
          uStack_100 = 0;
          local_108 = 0;
          local_110 = &PTR_FUN_101497058;
          local_f0 = local_ef;
          local_b8 = local_b0;
          FUN_1004966e0(&local_110,&DAT_101e47d30);
        }
        uVar6 = uVar6 + 1;
        lVar7 = *(long *)(param_5 + 0x60);
      } while (lVar7 != 0);
      return;
    }
    iVar1 = *(int *)(param_4 + 0x14);
    if ((iVar1 != -0x7ee3623b) && (iVar1 != 0)) {
      FUN_1003ab468(lVar5,(int *)(param_4 + 0x14),&local_110);
    }
    switch(*(undefined4 *)(param_4 + 0x34)) {
    case 0:
      fVar8 = *(float *)(param_5 + 0x1d8);
      param_2 = *(float *)(param_5 + 0x1dc);
      param_3 = *(undefined4 *)(param_5 + 0x1e0);
      goto LAB_1003d2ce8;
    case 1:
switchD_1003d2b90_caseD_1:
      fVar16 = *(float *)(lVar5 + 0x250);
      fVar9 = *(float *)(lVar5 + 0x254);
      fVar17 = *(float *)(lVar5 + 600);
      fVar10 = *(float *)(lVar5 + 0x2ec);
      fVar11 = *(float *)(lVar5 + 0x240);
      fVar12 = *(float *)(lVar5 + 0x248);
      fVar14 = fVar11 * fVar11 + fVar12 * fVar12;
      fVar8 = (float)DAT_101873a50;
      fVar18 = DAT_101873a50._4_4_;
      if (1.1920929e-06 <= fVar14) {
        fVar14 = SQRT(fVar14);
        fVar8 = fVar11 / fVar14;
        fVar18 = fVar12 / fVar14;
      }
      fVar14 = *(float *)(param_5 + 0x1d8) - fVar16;
      fVar13 = *(float *)(param_5 + 0x1e0) - fVar17;
      fVar15 = fVar14 * fVar14 + fVar13 * fVar13;
      fVar11 = (float)DAT_101873a50;
      fVar12 = DAT_101873a50._4_4_;
      if (1e-08 <= fVar15) {
        fVar15 = SQRT(fVar15);
        fVar11 = fVar14 / fVar15;
        fVar12 = fVar13 / fVar15;
      }
      fVar13 = 3.1415927;
      fVar14 = (float)___sincosf_stret(local_ac[0] * 0.0055555557 * 3.1415927);
      local_f0 = *(undefined1 *)(lVar5 + 0x300);
      fStack_e0 = fVar13 * fVar11 - fVar14 * fVar12;
      fStack_dc = fVar14 * fVar11 + fVar12 * fVar13;
      local_f4 = 2;
      fStack_e8 = 0.0;
      local_e4 = 0;
      local_ec = 0.0;
      local_d8 = *(undefined4 *)(param_4 + 0x10);
      local_d4 = *(undefined4 *)(param_4 + 0x14);
      local_ef = local_f0;
      local_d0 = fVar16;
      fStack_cc = fVar10 + fVar9;
      local_c8 = fVar17;
      fStack_c4 = fVar8;
      local_c0 = fVar18;
      local_bc = DAT_1018589d8;
LAB_1003d3038:
      DAT_1018589d8 = local_bc + 1;
      local_ee = 0;
      break;
    case 2:
switchD_1003d2b90_caseD_2:
      fVar16 = *(float *)(lVar5 + 0x250);
      fVar9 = *(float *)(lVar5 + 0x254);
      fVar17 = *(float *)(lVar5 + 600);
      fVar11 = *(float *)(lVar5 + 0x2ec);
      fVar10 = *(float *)(lVar5 + 0x240);
      fVar12 = *(float *)(lVar5 + 0x248);
      fVar14 = fVar10 * fVar10 + fVar12 * fVar12;
      fVar8 = (float)DAT_101873a50;
      fVar18 = DAT_101873a50._4_4_;
      if (1.1920929e-06 <= fVar14) {
        fVar14 = SQRT(fVar14);
        fVar8 = fVar10 / fVar14;
        fVar18 = fVar12 / fVar14;
      }
      fVar12 = 3.1415927;
      fVar10 = (float)___sincosf_stret(local_ac[0] * 0.0055555557 * 3.1415927);
      local_f0 = *(undefined1 *)(lVar5 + 0x300);
      fStack_e0 = fVar12 * fVar8 - fVar10 * fVar18;
      fStack_dc = fVar10 * fVar8 + fVar18 * fVar12;
      local_f4 = 2;
      local_ee = 0;
      fStack_e8 = 0.0;
      local_e4 = 0;
      local_ec = 0.0;
      local_d8 = *(undefined4 *)(param_4 + 0x10);
      local_d4 = *(undefined4 *)(param_4 + 0x14);
      local_bc = DAT_1018589d8;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_ef = local_f0;
      local_d0 = fVar16;
      fStack_cc = fVar11 + fVar9;
      local_c8 = fVar17;
      fStack_c4 = fVar8;
      local_c0 = fVar18;
      break;
    case 3:
switchD_1003d2b90_caseD_3:
      (**(code **)(param_4 + 0x20))(param_5,&local_120);
      fVar8 = local_120;
      param_2 = fStack_11c;
      param_3 = local_118;
      goto LAB_1003d2ce8;
    default:
      goto switchD_1003d2cbc_default;
    }
  }
  local_f8 = 0;
  uStack_100 = 0;
  local_108 = 0;
  local_110 = &PTR_FUN_101497058;
  local_b8 = local_b0;
  FUN_1004966e0(&local_110,&DAT_101e47d30);
switchD_1003d2cbc_default:
  return;
}




void FUN_1003d3134(float param_1,undefined8 param_2,long param_3,long param_4)

{
  if (0.01 <= ABS(param_1)) {
    FUN_1003d3284(*(undefined4 *)(param_3 + 0x250),
                  *(float *)(param_3 + 0x2ec) + *(float *)(param_3 + 0x254),
                  *(undefined4 *)(param_3 + 600),*(undefined4 *)(param_4 + 0x250),
                  *(float *)(param_4 + 0x2ec) + *(float *)(param_4 + 0x254),
                  *(undefined4 *)(param_4 + 600));
  }
  return;
}




void FUN_1003d3188(undefined4 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_101497058;
  *(undefined4 *)((long)param_2 + 0x1c) = 1;
  *(undefined1 *)(param_2 + 4) = param_3;
  *(undefined1 *)((long)param_2 + 0x21) = param_4;
  *(undefined1 *)((long)param_2 + 0x22) = 0;
  uVar1 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)((long)param_2 + 0x24) = *param_5;
  *(undefined4 *)((long)param_2 + 0x2c) = uVar1;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = param_6;
  *(undefined4 *)((long)param_2 + 0x3c) = *param_7;
  *(undefined4 *)((long)param_2 + 0x54) = param_8;
  *(undefined4 *)(param_2 + 0xb) = param_1;
  return;
}




void FUN_1003d31dc(undefined4 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined4 *param_9,undefined4 param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_101497058;
  *(undefined4 *)((long)param_2 + 0x1c) = 2;
  *(undefined1 *)(param_2 + 4) = param_3;
  *(undefined1 *)((long)param_2 + 0x21) = param_4;
  *(undefined1 *)((long)param_2 + 0x22) = 0;
  param_2[5] = 0;
  *(undefined4 *)((long)param_2 + 0x24) = 0;
  param_2[6] = *param_5;
  uVar1 = *param_9;
  *(undefined4 *)(param_2 + 7) = param_6;
  *(undefined4 *)((long)param_2 + 0x3c) = uVar1;
  uVar2 = *param_7;
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_7 + 1);
  param_2[8] = uVar2;
  *(undefined8 *)((long)param_2 + 0x4c) = *param_8;
  *(undefined4 *)((long)param_2 + 0x54) = param_10;
  *(undefined4 *)(param_2 + 0xb) = param_1;
  return;
}




void FUN_1003d3244(void)

{
  float in_s3;
  
  if (0.01 <= ABS(in_s3)) {
    FUN_1003d3284();
  }
  return;
}




float FUN_1003d3284(float param_1,undefined1 param_2 [16],float param_3,float param_4,
                   undefined1 param_5 [16],float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  
  if (0.01 <= ABS(param_7)) {
    fVar1 = (float)_atan2f(param_3 - param_6,param_1 - param_4);
    fVar2 = 3.1415927;
    fVar1 = (float)___sincosf_stret(fVar1 + param_7 * -0.0055555557 * 3.1415927);
    fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
    if (1e-08 <= fVar1) {
      fVar2 = fVar2 / SQRT(fVar1);
    }
    else {
      fVar2 = 1.0;
    }
    param_1 = param_4 + fVar2 * 12.5;
  }
  return param_1;
}




void FUN_1003d3340(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_101496968;
  return;
}




void FUN_1003d3354(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  int local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((DAT_101d23a38 != '\0') && (lVar6 = *(long *)(param_2 + 0x60), lVar6 != 0)) {
    uVar5 = 0;
    do {
      uVar1 = FUN_10045fb10(lVar6);
      if (uVar1 <= uVar5) {
        return;
      }
      lVar3 = FUN_10045fa7c(lVar6,uVar5);
      lVar6 = *(long *)(lVar3 + 0x18);
      while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8))) {
        lVar6 = *(long *)(lVar6 + 0x20);
      }
      FUN_1003a4e5c(&local_b8,*(undefined8 *)(param_1 + 0x10));
      lVar4 = *(long *)(lVar6 + 0x28);
      lVar6 = param_2;
      if (lVar4 != 0) {
        do {
          if ((*(int *)(lVar4 + 0x314) == (int)local_b8) && (*(int *)(lVar4 + 0x310) == 0)) {
            uStack_98 = *(undefined4 *)(lVar4 + 0x30c);
            local_9c = *(undefined4 *)(lVar3 + 0x260);
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = 0;
            local_b8 = &PTR_FUN_101496cd8;
            FUN_100496580(&local_b8,&DAT_101e47d30);
            goto LAB_1003d34f8;
          }
          lVar4 = *(long *)(lVar4 + 0x350);
        } while (lVar4 != 0);
      }
      do {
        lVar6 = *(long *)(lVar6 + 0x10);
      } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68);
      local_9c = *(undefined4 *)(lVar6 + 0x260);
      uStack_98 = *(undefined4 *)(lVar3 + 0x260);
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_b8 = &PTR_FUN_101496b18;
      local_94 = DAT_1018589d8;
      local_90 = 0xbf80000000000000;
      local_88 = 1;
      local_70 = 0;
      local_84 = 0;
      uStack_7c = 0;
      local_68 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uVar2 = FUN_1003d4e0c(*(undefined8 *)(param_1 + 0x10));
      local_90 = CONCAT44(local_90._4_4_,uVar2);
      (*(code *)local_b8[4])(&local_b8,&DAT_101e47d30);
LAB_1003d34f8:
      uVar5 = uVar5 + 1;
      lVar6 = *(long *)(param_2 + 0x60);
    } while (lVar6 != 0);
  }
  return;
}




float FUN_1003d3524(undefined8 param_1,long param_2)

{
  float fVar1;
  
  do {
    param_2 = *(long *)(param_2 + 0x10);
  } while (*(int *)(*(long *)(param_2 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003d3580();
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  else {
    FUN_1010a1cd4();
  }
  return fVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1003d3580(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0.0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0.0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_101867370) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return *(float *)(lVar1 + 0x4c) - *(float *)(lVar1 + 0x50);
}




bool FUN_1003d35e8(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  return fVar1 <= 0.0;
}




void FUN_1003d360c(void)

{
  return;
}




void FUN_1003d3610(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014969c8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 6) = param_3;
  *(undefined4 *)((long)param_1 + 0x34) = 3;
  return;
}




void FUN_1003d3644(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014969c8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  uVar1 = *param_4;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_1 + 6) = param_5;
  *(undefined4 *)((long)param_1 + 0x34) = 2;
  return;
}




void FUN_1003d367c(long param_1)

{
  uint uVar1;
  long lVar2;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  undefined1 local_24;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 != 0) {
    switch(*(undefined4 *)(param_1 + 0x34)) {
    case 0:
    case 3:
      uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
      local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
      uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
      local_30 = CONCAT31(local_30._1_3_,*(undefined1 *)(param_1 + 0x30));
      FUN_1003498a4(&local_38,0);
      break;
    case 1:
      uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
      local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
      uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
      local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x2c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x2c) & 0xff00ff) << 8;
      uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
      local_28 = CONCAT31(local_28._1_3_,*(undefined1 *)(param_1 + 0x30));
      FUN_1003499a4(&local_38,0);
      break;
    case 2:
      local_24 = *(undefined1 *)(param_1 + 0x30);
      uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
      local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
      uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
      local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
      uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x2c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x2c) & 0xff00ff) << 8;
      local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
      FUN_100349aa4(&local_38,0);
    }
  }
  return;
}




void FUN_1003d3774(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (DAT_101d23a38 == '\0' && lVar1 != 0) {
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f;
    if ((int)uVar4 != 0x1f) {
      uVar3 = (uint)*(ushort *)(lVar1 + uVar4 * 0x38 + 0x90);
      if (uVar3 - 3 < 2) {
        return;
      }
      if ((uVar3 == 2) &&
         (*(char *)(*(long *)(*(long *)(*(long *)(lVar1 + 0x58) +
                                        (ulong)*(byte *)(param_1 + 0x30) * 8 + 0x50) + 0x38) + 0x7d)
          != '\0')) {
        local_28 = *(undefined4 *)(lVar1 + 600);
        local_30 = CONCAT44(*(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254),
                            *(undefined4 *)(lVar1 + 0x250));
        FUN_1003b9ed0(lVar1,&local_30,1,0,1);
      }
    }
    if (*(int *)(param_1 + 0x20) == -1) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_100345d90();
    }
    switch(*(undefined4 *)(param_1 + 0x34)) {
    case 0:
      local_30 = 0;
      local_28 = DAT_101dc0b88;
      if (lVar2 != 0) {
        local_30 = lVar2 + 0x28;
        local_28 = *(undefined4 *)(lVar2 + 0x30);
      }
      FUN_1003d3918(lVar1,*(undefined1 *)(param_1 + 0x30),&local_30);
      break;
    case 1:
      FUN_1003d3c40(lVar1,*(undefined1 *)(param_1 + 0x30),param_1 + 0x24);
      break;
    case 2:
      local_30 = 0;
      local_28 = DAT_101dc0b88;
      if (lVar2 != 0) {
        local_30 = lVar2 + 0x28;
        local_28 = *(undefined4 *)(lVar2 + 0x30);
      }
      FUN_1003d3de8(lVar1,*(undefined1 *)(param_1 + 0x30),&local_30,param_1 + 0x24);
      break;
    case 3:
      FUN_1003d3ffc(lVar1,*(undefined1 *)(param_1 + 0x30));
    }
  }
  return;
}




void FUN_1003d3918(long param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = param_2 & 0xffffffff;
  lVar4 = *(long *)(*(long *)(param_1 + 0x58) + (param_2 & 0xffffffff) * 8 + 0x50);
  if ((lVar4 != 0) && (*(char *)(*(long *)(lVar4 + 0x38) + 0x60) != '\0')) {
    FUN_100460d9c();
  }
  uVar5 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  if (((((int)uVar5 == 0x1f) || (*(short *)(param_1 + uVar5 * 0x38 + 0x90) != 5)) &&
      (*(char *)(*(long *)(*(long *)(*(long *)(param_1 + 0x58) + uVar7 * 8 + 0x50) + 0x38) + 0x7d)
       != '\0')) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_100464374(param_1);
  }
  FUN_10045fd94(*(undefined8 *)(*(long *)(param_1 + 0x58) + uVar7 * 8 + 0x50));
  FUN_100461244(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  FUN_100460c8c(*(long *)(param_1 + 0x58),
                *(undefined8 *)(*(long *)(param_1 + 0x58) + uVar7 * 8 + 0x50));
  uVar8 = 0x10000;
  lVar4 = param_1;
LAB_1003d39e8:
  do {
    do {
      lVar6 = lVar4;
      if ((lVar6 != param_1) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0x295f0542), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar6);
      }
      if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar4 = *(long *)(lVar6 + 0x18), lVar4 != 0)) {
        uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
        goto LAB_1003d39e8;
      }
      if ((uVar8 & 0xffff) == 0) goto LAB_1003d3a88;
      lVar4 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) break;
    uVar8 = uVar1 | uVar8 & 0xffff0000;
    while (lVar4 = *(long *)(lVar6 + 0x20), lVar4 == 0) {
      if ((uVar8 - 1 & 0xffff) == 0) goto LAB_1003d3a88;
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
      if (lVar6 == 0) goto LAB_1003d3a88;
    }
  } while( true );
LAB_1003d3a88:
  if (*(char *)(*(long *)(*(long *)(*(long *)(param_1 + 0x58) + uVar7 * 8 + 0x50) + 0x38) + 0x8a) ==
      '\0') {
LAB_1003d3b9c:
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + uVar7 * 8 + 0x50) + 0x38);
    if (lVar4 == 0) {
      return;
    }
    plVar2 = (long *)*param_3;
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
    }
    else if ((int)param_3[1] == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      uVar3 = 0;
      *param_3 = 0;
      *(undefined4 *)(param_3 + 1) = DAT_101dc0b88;
    }
    FUN_1004643d4(param_1,lVar4,uVar3,0);
    return;
  }
  FUN_100464490(param_1);
  plVar2 = (long *)*param_3;
  if (plVar2 != (long *)0x0) {
    if ((int)param_3[1] == (int)plVar2[1]) {
      (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *param_3 = 0;
      *(undefined4 *)(param_3 + 1) = DAT_101dc0b88;
    }
  }
  uVar8 = 0x10000;
  lVar4 = param_1;
LAB_1003d3afc:
  do {
    do {
      lVar6 = lVar4;
      if ((lVar6 != param_1) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0x11a60336), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar6);
      }
      if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar4 = *(long *)(lVar6 + 0x18), lVar4 != 0)) {
        uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
        goto LAB_1003d3afc;
      }
      if ((uVar8 & 0xffff) == 0) goto LAB_1003d3b9c;
      lVar4 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) goto LAB_1003d3b9c;
    uVar8 = uVar1 | uVar8 & 0xffff0000;
    while (lVar4 = *(long *)(lVar6 + 0x20), lVar4 == 0) {
      if ((uVar8 - 1 & 0xffff) == 0) goto LAB_1003d3b9c;
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
      if (lVar6 == 0) goto LAB_1003d3b9c;
    }
  } while( true );
}




void FUN_1003d3c40(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = param_2 & 0xffffffff;
  lVar2 = *(long *)(*(long *)(param_1 + 0x58) + (param_2 & 0xffffffff) * 8 + 0x50);
  if ((lVar2 != 0) && (*(char *)(*(long *)(lVar2 + 0x38) + 0x60) != '\0')) {
    FUN_100460d9c(*(long *)(param_1 + 0x58));
    lVar2 = *(long *)(*(long *)(param_1 + 0x58) + uVar4 * 8 + 0x50);
  }
  if ((*(char *)(*(long *)(lVar2 + 0x38) + 0x7d) != '\0') && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_100464374(param_1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x58) + uVar4 * 8 + 0x50);
  }
  FUN_10045fd94(lVar2);
  FUN_100461284(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  FUN_100460c8c(*(long *)(param_1 + 0x58),
                *(undefined8 *)(*(long *)(param_1 + 0x58) + uVar4 * 8 + 0x50));
  uVar5 = 0x10000;
  lVar2 = param_1;
LAB_1003d3cf0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x295f0542), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003d3cf0;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_1003d3d90;
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_1003d3d90:
      lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + uVar4 * 8 + 0x50) + 0x38);
      if (lVar2 == 0) {
        return;
      }
      FUN_1004643d4(param_1,lVar2,0,param_3);
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_1003d3d90;
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar3 == 0) goto LAB_1003d3d90;
    }
  } while( true );
}




void FUN_1003d3de8(long param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar6 = param_2 & 0xffffffff;
  lVar2 = *(long *)(*(long *)(param_1 + 0x58) + (param_2 & 0xffffffff) * 8 + 0x50);
  if ((lVar2 != 0) && (*(char *)(*(long *)(lVar2 + 0x38) + 0x60) != '\0')) {
    FUN_100460d9c(*(long *)(param_1 + 0x58));
    lVar2 = *(long *)(*(long *)(param_1 + 0x58) + uVar6 * 8 + 0x50);
  }
  if ((*(char *)(*(long *)(lVar2 + 0x38) + 0x7d) != '\0') && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_100464374(param_1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x58) + uVar6 * 8 + 0x50);
  }
  FUN_10045fd94(lVar2);
  FUN_100461244(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  FUN_100461284(*(undefined8 *)(param_1 + 0x58),param_2,param_4);
  FUN_100460c8c(*(long *)(param_1 + 0x58),
                *(undefined8 *)(*(long *)(param_1 + 0x58) + uVar6 * 8 + 0x50));
  uVar7 = 0x10000;
  lVar2 = param_1;
LAB_1003d3eb0:
  do {
    do {
      lVar5 = lVar2;
      if ((lVar5 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar5 + 8),0x295f0542), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar5);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar2 = *(long *)(lVar5 + 0x18), lVar2 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_1003d3eb0;
      }
      if ((uVar7 & 0xffff) == 0) goto LAB_1003d3f50;
      lVar2 = *(long *)(lVar5 + 0x20);
    } while (*(long *)(lVar5 + 0x20) != 0);
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((lVar5 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) {
LAB_1003d3f50:
      lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + uVar6 * 8 + 0x50) + 0x38);
      if (lVar2 == 0) {
        return;
      }
      plVar3 = (long *)*param_3;
      if (plVar3 == (long *)0x0) {
        uVar4 = 0;
      }
      else if ((int)param_3[1] == (int)plVar3[1]) {
        uVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        uVar4 = 0;
        *param_3 = 0;
        *(undefined4 *)(param_3 + 1) = DAT_101dc0b88;
      }
      FUN_1004643d4(param_1,lVar2,uVar4,param_4);
      return;
    }
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar2 = *(long *)(lVar5 + 0x20), lVar2 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) goto LAB_1003d3f50;
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar5 == 0) goto LAB_1003d3f50;
    }
  } while( true );
}




void FUN_1003d3ffc(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = param_2 & 0xffffffff;
  lVar2 = *(long *)(*(long *)(param_1 + 0x58) + (param_2 & 0xffffffff) * 8 + 0x50);
  if ((lVar2 != 0) && (*(char *)(*(long *)(lVar2 + 0x38) + 0x60) != '\0')) {
    FUN_100460d9c();
  }
  uVar3 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  if (((((int)uVar3 == 0x1f) || (*(short *)(param_1 + uVar3 * 0x38 + 0x90) != 5)) &&
      (*(char *)(*(long *)(*(long *)(*(long *)(param_1 + 0x58) + uVar5 * 8 + 0x50) + 0x38) + 0x7d)
       != '\0')) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_100464374(param_1);
  }
  FUN_10045fd94(*(undefined8 *)(*(long *)(param_1 + 0x58) + uVar5 * 8 + 0x50));
  FUN_100460c8c(*(long *)(param_1 + 0x58),
                *(undefined8 *)(*(long *)(param_1 + 0x58) + uVar5 * 8 + 0x50));
  uVar6 = 0x10000;
  lVar2 = param_1;
LAB_1003d40b8:
  do {
    do {
      lVar4 = lVar2;
      if ((lVar4 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x295f0542), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar4);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar2 = *(long *)(lVar4 + 0x18), lVar2 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_1003d40b8;
      }
      if ((uVar6 & 0xffff) == 0) goto LAB_1003d4158;
      lVar2 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) {
LAB_1003d4158:
      lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + uVar5 * 8 + 0x50) + 0x38);
      if (lVar2 == 0) {
        return;
      }
      FUN_1004643d4(param_1,lVar2,0,0);
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar2 = *(long *)(lVar4 + 0x20), lVar2 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) goto LAB_1003d4158;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_1003d4158;
    }
  } while( true );
}




void FUN_1003d41b0(undefined8 *param_1,undefined1 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496a00;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xffffffffffffffff;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 6) = param_2;
  *(undefined4 *)((long)param_1 + 0x34) = 3;
  return;
}




void FUN_1003d41e4(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496a00;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = param_2;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 6) = param_3;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return;
}




void FUN_1003d4214(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496a00;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xffffffffffffffff;
  uVar1 = *param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_1 + 6) = param_3;
  *(undefined4 *)((long)param_1 + 0x34) = 1;
  return;
}




void FUN_1003d4250(long param_1)

{
  uint uVar1;
  long lVar2;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined1 local_28;
  
  if (DAT_101d23a38 == '\0') {
    FUN_10034ee90();
    lVar2 = FUN_100345d90();
    if (lVar2 != 0) {
      switch(*(undefined4 *)(param_1 + 0x34)) {
      case 0:
      case 3:
        uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
        local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
        local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)(param_1 + 0x30));
        FUN_1003495a4(&local_38,0);
        break;
      case 1:
        uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
        local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
        local_34 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar1 = (*(uint *)(param_1 + 0x2c) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x2c) & 0xff00ff) << 8;
        local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
        local_2c = CONCAT31(local_2c._1_3_,*(undefined1 *)(param_1 + 0x30));
        FUN_1003496a4(&local_38,0);
        break;
      case 2:
        local_28 = *(undefined1 *)(param_1 + 0x30);
        uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
        local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
        local_34 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
        local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar1 = (*(uint *)(param_1 + 0x2c) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x2c) & 0xff00ff) << 8;
        local_2c = uVar1 >> 0x10 | uVar1 << 0x10;
        FUN_1003497a4(&local_38,0);
      }
    }
  }
  return;
}




void FUN_1003d4340(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((DAT_101d23a38 == '\0') ||
     (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar2 == 0)) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = lVar2;
LAB_1003d439c:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != lVar2) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x838a09c6), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003d439c;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_1003d4444;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_1003d4444:
      if ((*(byte *)(lVar2 + 0x2f4) >> 1 & 1) == 0) {
        return;
      }
      FUN_10003224c(*(undefined4 *)(lVar2 + 0x260));
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_1003d4444;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_1003d4444;
    }
  } while( true );
}




void FUN_1003d4490(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint local_28 [2];
  
  if ((((DAT_101d23a38 != '\0') &&
       (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar2 != 0)) &&
      (uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 != 0x1f)) &&
     (*(short *)(lVar2 + uVar3 * 0x38 + 0x90) == 3)) {
    FUN_10046211c(lVar2 + 0x88,4,0,0);
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_28[0] = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100347060(local_28,0);
  }
  return;
}




void FUN_1003d451c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((((DAT_101d23a38 == '\0') &&
       (lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar1 != 0)) &&
      (uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar2 != 0x1f)) &&
     (*(short *)(lVar1 + uVar2 * 0x38 + 0x90) == 3)) {
    FUN_10046211c(lVar1 + 0x88,4,0,0);
    return;
  }
  return;
}




void FUN_1003d4580(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496a70;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003d459c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint local_28;
  uint uStack_24;
  
  if (((DAT_101d23a38 != '\0') &&
      (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar2 != 0)) &&
     ((uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 == 0x1f ||
      (1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3)))) {
    FUN_1003d4620();
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100346f68(&local_28,0);
  }
  return;
}




void FUN_1003d4620(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long local_298 [70];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10046211c(param_1 + 0x88,3,0,0);
  uVar2 = FUN_1010a1958(local_298,0x46,DAT_10184e3d0,0);
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      lVar6 = local_298[uVar5];
      if (lVar6 != 0) {
        uVar7 = 0xffff0000;
        lVar3 = lVar6;
LAB_1003d46a0:
        do {
          do {
            lVar4 = lVar3;
            if ((lVar4 != lVar6) &&
               (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x199203e9), lVar3 != 0)) {
              (**(code **)(lVar3 + 8))(lVar4);
            }
            if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0))
            {
              uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
              goto LAB_1003d46a0;
            }
            if ((uVar7 & 0xffff) == 0) goto LAB_1003d4740;
            lVar3 = *(long *)(lVar4 + 0x20);
          } while (*(long *)(lVar4 + 0x20) != 0);
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((lVar4 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
          uVar7 = uVar1 | uVar7 & 0xffff0000;
          while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
            if ((uVar7 - 1 & 0xffff) == 0) goto LAB_1003d4740;
            lVar4 = *(long *)(lVar4 + 0x10);
            uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
            if (lVar4 == 0) goto LAB_1003d4740;
          }
        } while( true );
      }
LAB_1003d4740:
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
  }
  if (param_1 == 0) {
LAB_1003d47f8:
    if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
  uVar2 = 0x10000;
  lVar6 = param_1;
LAB_1003d4758:
  do {
    do {
      lVar3 = lVar6;
      if ((lVar3 != param_1) &&
         (lVar6 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x199203e9), lVar6 != 0)) {
        (**(code **)(lVar6 + 8))(lVar3);
      }
      if (((uVar2 & 0xffff) < uVar2 >> 0x10) && (lVar6 = *(long *)(lVar3 + 0x18), lVar6 != 0)) {
        uVar2 = uVar2 & 0xffff0000 | uVar2 + 1 & 0xffff;
        goto LAB_1003d4758;
      }
      if ((uVar2 & 0xffff) == 0) goto LAB_1003d47f8;
      lVar6 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 == 0) || (uVar7 = uVar2 - 1 & 0xffff, uVar7 == 0)) goto LAB_1003d47f8;
    uVar2 = uVar7 | uVar2 & 0xffff0000;
    while (lVar6 = *(long *)(lVar3 + 0x20), lVar6 == 0) {
      if ((uVar2 - 1 & 0xffff) == 0) goto LAB_1003d47f8;
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar2 = uVar2 & 0xffff0000 | uVar2 - 1 & 0xffff;
      if (lVar3 == 0) goto LAB_1003d47f8;
    }
  } while( true );
}




void FUN_1003d4834(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (((DAT_101d23a38 == '\0') &&
      (lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar1 != 0)) &&
     ((uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar2 == 0x1f ||
      (1 < *(ushort *)(lVar1 + uVar2 * 0x38 + 0x90) - 3)))) {
    FUN_1003d4620(lVar1);
    FUN_10002c12c(lVar1,*(undefined4 *)(param_1 + 0x20));
    if (DAT_101d23a39 != '\0') {
      FUN_10004daac();
      return;
    }
    FUN_1000366a8(lVar1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_1003d48d4(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496aa8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = uVar1;
  return;
}




void FUN_1003d4900(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100347154(&local_20,0);
  return;
}




void FUN_1003d4944(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  FUN_1003d496c(uVar1,param_1 + 0x20);
  return;
}




void FUN_1003d496c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  float local_5c;
  undefined4 uStack_58;
  
  uStack_58 = *(undefined4 *)(param_1 + 600);
  local_5c = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  local_60 = *(undefined4 *)(param_1 + 0x250);
  local_70 = 0;
  local_68 = 0x3f800000;
  FUN_1003d90d4(param_1,param_2,&local_70);
  uVar5 = 0xffff0000;
  lVar3 = param_1;
LAB_1003d49d8:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x1ab4042d), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003d49d8;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_1003d4a78;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_1003d4a78:
      lVar3 = *(long *)(param_1 + 0x40);
      fVar6 = *(float *)(lVar3 + 0x38) +
              *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
      NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
      fVar6 = DAT_101e94260;
      if (DAT_101e94260 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = (float)NEON_fminnm(fVar6,DAT_101e94260);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)(lVar3 + 0x308) = fVar6;
      fVar6 = *(float *)(lVar3 + 0x40) +
              *(float *)(lVar3 + 0xf4) * (*(float *)(lVar3 + 0x25c) + 1.0);
      NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar3 + 0x1a8),DAT_101e94328);
      fVar6 = DAT_101e94268;
      if (DAT_101e94268 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = (float)NEON_fminnm(fVar6,DAT_101e94268);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)(lVar3 + 0x310) = fVar6;
      *(undefined8 *)(param_1 + 0x2c0) = 0xffffffffffffffff;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_100464c9c();
      }
      FUN_1003d88bc(param_1);
      FUN_10046211c(param_1 + 0x88,1,0,0);
      if (*(long **)(param_1 + 0x50) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x50) + 0x30))();
      }
      puVar2 = PTR_s_onActorRespawnName_10185d680;
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x28), lVar3 != 0)) {
        do {
          FUN_10046a360(lVar3,puVar2);
          lVar3 = *(long *)(lVar3 + 0x350);
        } while (lVar3 != 0);
        for (lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x28); lVar3 != 0;
            lVar3 = *(long *)(lVar3 + 0x350)) {
          FUN_10046a308(lVar3);
        }
      }
      uVar5 = 0x10000;
      lVar3 = param_1;
LAB_1003d4ba0:
      do {
        do {
          lVar4 = lVar3;
          if ((lVar4 != param_1) &&
             (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x163803be), lVar3 != 0)) {
            (**(code **)(lVar3 + 8))(lVar4);
          }
          if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
            uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
            goto LAB_1003d4ba0;
          }
          if ((uVar5 & 0xffff) == 0) {
            return;
          }
          lVar3 = *(long *)(lVar4 + 0x20);
        } while (*(long *)(lVar4 + 0x20) != 0);
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
          return;
        }
        uVar5 = uVar1 | uVar5 & 0xffff0000;
        while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
          if ((uVar5 - 1 & 0xffff) == 0) {
            return;
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
          if (lVar4 == 0) {
            return;
          }
        }
      } while( true );
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_1003d4a78;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_1003d4a78;
    }
  } while( true );
}




void FUN_1003d4c58(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496ae0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_1003d4c74(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint local_28 [2];
  
  if (((DAT_101d23a38 != '\0') &&
      (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar2 != 0)) &&
     ((uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 == 0x1f ||
      (1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3)))) {
    FUN_1003d4cf4();
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_28[0] = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100346e74(local_28,0);
  }
  return;
}




void FUN_1003d4cf4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  *(byte *)(param_1 + 0x303) = *(byte *)(param_1 + 0x303) | 4;
  lVar2 = *(long *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0xe8) + *(float *)(lVar2 + 0x19c) * (*(float *)(lVar2 + 0x304) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x250),DAT_101e943d0);
  FUN_1003dbb54(DAT_101e94310,DAT_101e94310,DAT_101e943d0,0x3f800000,param_1,1);
  puVar1 = PTR_s_onActorUndeadName_10185d750;
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x28), lVar2 != 0)) {
    do {
      FUN_10046a360(lVar2,puVar1);
      lVar2 = *(long *)(lVar2 + 0x350);
    } while (lVar2 != 0);
    for (lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x28); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x350)) {
      FUN_100469f78(lVar2);
    }
  }
  return;
}




void FUN_1003d4db4(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (((DAT_101d23a38 == '\0') &&
      (lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar1 != 0)) &&
     ((uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar2 == 0x1f ||
      (1 < *(ushort *)(lVar1 + uVar2 * 0x38 + 0x90) - 3)))) {
    FUN_1003d4cf4();
    return;
  }
  return;
}




long FUN_1003d4e0c(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar2 = FUN_1010a1520();
  puVar3 = (undefined8 *)FUN_1010a0e0c(uVar2,0,"*KindredBuffs*",0);
  puVar3 = (undefined8 *)*puVar3;
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    do {
      iVar1 = _strcmp((char *)*puVar4,param_1);
      if (iVar1 == 0) {
        return lVar5;
      }
      puVar4 = (undefined8 *)puVar3[lVar5 + 1];
      lVar5 = lVar5 + 1;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_1003d4e80(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_48;
  undefined8 local_40;
  ushort local_38;
  uint local_36;
  ushort local_32;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 local_24;
  
  lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x20));
  if (lVar4 == 0 || DAT_101d23a38 == '\0') {
    return;
  }
  lVar5 = FUN_1003d5224(lVar4,*(undefined4 *)(param_1 + 0x28));
  lVar4 = 0;
  if (lVar5 != 0) {
    lVar4 = lVar5 + 0x28;
  }
  puVar1 = &DAT_101dc0b88;
  if (lVar5 != 0) {
    puVar1 = (undefined4 *)(lVar4 + 8);
  }
  uVar2 = *puVar1;
  *(long *)(param_1 + 0x48) = lVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar6 = FUN_1010a1520();
  plVar7 = (long *)FUN_1010a0e0c(uVar6,0,"*KindredBuffs*",0);
  if (*(int *)(*(long *)(*plVar7 + (ulong)*(uint *)(param_1 + 0x28) * 8) + 0x3c) == 0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar7[1]) {
      lVar4 = (**(code **)(*plVar7 + 0x10))();
      if (lVar4 != 0) {
        uVar8 = *(uint *)(param_1 + 0x28);
        uVar6 = FUN_1010a1520();
        plVar7 = (long *)FUN_1010a0e0c(uVar6,0,"*KindredBuffs*",0);
        if (*(char *)(*(long *)(*plVar7 + (ulong)uVar8 * 8) + 0x2a) == '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20)) {
          return;
        }
        lVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
        uStack_28 = *(undefined2 *)(lVar4 + 0x44);
        local_40 = 0;
        local_38 = 0;
        local_36 = 0;
        local_32 = 0;
        uStack_30 = 0;
        local_48 = &PTR_FUN_101497790;
        local_2c = (undefined2)*(undefined4 *)(param_1 + 0x20);
        uStack_2a = (undefined2)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
        uStack_26 = 0;
        local_24 = 0xffffffff;
        FUN_100496dac(&local_48,&DAT_101e47d30);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x30);
  if ((((uVar8 == 1) && (*(float *)(param_1 + 0x34) == 0.0)) && (*(float *)(param_1 + 0x38) == 0.0))
     && ((*(int *)(param_1 + 0x3c) == 0 && (*(int *)(param_1 + 0x40) == 0)))) {
    uVar9 = *(uint *)(param_1 + 0x2c);
    uVar8 = uVar9 >> 0x10 & 0x8000;
    uVar10 = uVar9 >> 0x17 & 0xff;
    if (uVar10 == 0) goto LAB_1003d51e8;
    if (uVar10 == 0xff) {
      uVar8 = uVar8 | (uVar9 & 0x7fffff) != 0;
    }
    else {
      uVar10 = (uVar9 >> 0x17) * 0x1000000 + 0x81000000;
      if ((int)uVar10 < -0xe000000) {
        if ((int)uVar10 < -0x18000000) {
          uVar9 = 0;
        }
        else {
          uVar9 = (0x400U >> (ulong)(-((int)uVar10 >> 0x18) - 0xeU & 0x1f)) +
                  ((uVar9 & 0x7fffff) >> (ulong)(~((int)uVar10 >> 0x18) & 0x1f)) & 0x3ff;
        }
        uVar8 = uVar9 | uVar8;
        goto LAB_1003d51e8;
      }
      if ((int)uVar10 < 0xf000001) {
        uVar8 = uVar8 | uVar9 >> 0xd & 0x3ff | (uVar10 >> 0xe) + 0x3c00 & 0x7c00;
        goto LAB_1003d51e8;
      }
    }
    uVar8 = uVar8 | 0x7c00;
LAB_1003d51e8:
    uVar9 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
             (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    local_48 = (undefined **)CONCAT44(uVar9 >> 0x10 | uVar9 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10)
    ;
    uVar9 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_40._0_6_ =
         CONCAT42(uVar9 >> 0x10 | uVar9 << 0x10,
                  (ushort)(uVar8 >> 8) | (ushort)((uVar8 & 0xff00ff) << 8));
    local_40 = CONCAT26((ushort)(*(uint *)(param_1 + 0x28) >> 8) & 0xff |
                        (ushort)((*(uint *)(param_1 + 0x28) & 0xff00ff) << 8),(undefined6)local_40);
    FUN_10034724c(&local_48,0);
    return;
  }
  uVar10 = *(uint *)(param_1 + 0x2c);
  uVar9 = uVar10 >> 0x10 & 0x8000;
  uVar3 = uVar10 >> 0x17 & 0xff;
  if (uVar3 == 0) goto LAB_1003d50b4;
  if (uVar3 == 0xff) {
    uVar9 = uVar9 | (uVar10 & 0x7fffff) != 0;
  }
  else {
    uVar3 = (uVar10 >> 0x17) * 0x1000000 + 0x81000000;
    if ((int)uVar3 < -0xe000000) {
      if ((int)uVar3 < -0x18000000) {
        uVar10 = 0;
      }
      else {
        uVar10 = (0x400U >> (ulong)(-((int)uVar3 >> 0x18) - 0xeU & 0x1f)) +
                 ((uVar10 & 0x7fffff) >> (ulong)(~((int)uVar3 >> 0x18) & 0x1f)) & 0x3ff;
      }
      uVar9 = uVar10 | uVar9;
      goto LAB_1003d50b4;
    }
    if ((int)uVar3 < 0xf000001) {
      uVar9 = uVar9 | uVar10 >> 0xd & 0x3ff | (uVar3 >> 0xe) + 0x3c00 & 0x7c00;
      goto LAB_1003d50b4;
    }
  }
  uVar9 = uVar9 | 0x7c00;
LAB_1003d50b4:
  uVar10 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
           (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  uVar3 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  local_48 = (undefined **)CONCAT44(uVar10 >> 0x10 | uVar10 << 0x10,uVar3 >> 0x10 | uVar3 << 0x10);
  uVar10 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
           (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_40._0_6_ =
       CONCAT42(uVar10 >> 0x10 | uVar10 << 0x10,
                (ushort)(uVar9 >> 8) | (ushort)((uVar9 & 0xff00ff) << 8));
  local_40 = CONCAT26((ushort)(*(uint *)(param_1 + 0x28) >> 8) & 0xff |
                      (ushort)((*(uint *)(param_1 + 0x28) & 0xff00ff) << 8),(undefined6)local_40);
  local_38 = (ushort)(uVar8 >> 8) & 0xff | (ushort)((uVar8 & 0xff00ff) << 8);
  uVar8 = (*(uint *)(param_1 + 0x34) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x34) & 0xff00ff) << 8;
  local_36 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = *(uint *)(param_1 + 0x38) & 0xff00ff00;
  uVar9 = *(uint *)(param_1 + 0x38) & 0xff00ff;
  local_32 = (ushort)(byte)(uVar8 >> 0x18) | (ushort)(uVar9 >> 8);
  uStack_30 = (undefined1)(uVar8 >> 8);
  uStack_2f = (undefined1)uVar9;
  uVar8 = (*(uint *)(param_1 + 0x3c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x3c) & 0xff00ff) << 8;
  uStack_2e = (undefined2)(uVar8 >> 0x10);
  local_2c = (undefined2)uVar8;
  uVar8 = (*(uint *)(param_1 + 0x40) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x40) & 0xff00ff) << 8;
  uStack_2a = (undefined2)(uVar8 >> 0x10);
  uStack_28 = (undefined2)uVar8;
  FUN_100347344(&local_48,0);
  return;
}




undefined8 FUN_1003d5224(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 local_148 [32];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_1010a1520();
  plVar4 = (long *)FUN_1010a0e0c(uVar3,0,"*KindredBuffs*",0);
  uVar3 = *(undefined8 *)(*plVar4 + (param_2 & 0xffffffff) * 8);
  uVar1 = FUN_1010a0218(param_1,local_148,0x20,DAT_1018673b0);
  if (uVar1 != 0) {
    uVar6 = (ulong)uVar1;
    puVar7 = local_148;
    do {
      uVar5 = *puVar7;
      iVar2 = FUN_10046aafc(uVar5,uVar3);
      if (iVar2 != 0) goto LAB_1003d52bc;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar5 = 0;
LAB_1003d52bc:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003d52f4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497790;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_1003d5314(void)

{
  return;
}




void FUN_1003d5318(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    uVar2 = FUN_1010a1520();
    plVar3 = (long *)FUN_1010a0e0c(uVar2,0,"*KindredBuffs*",0);
    lVar6 = *(long *)(*plVar3 + (ulong)*(uint *)(param_1 + 0x28) * 8);
    if ((DAT_101d23a38 != '\0') && (plVar3 = *(long **)(param_1 + 0x48), plVar3 != (long *)0x0)) {
      if (*(int *)(param_1 + 0x50) == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
        if (lVar4 != 0) {
          uVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
          lVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
          if (*(code **)(lVar4 + 0x38) == (code *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001003d53d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x38))(*(undefined4 *)(param_1 + 0x2c),uVar2,lVar1,lVar6);
          return;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
      }
    }
    if ((((*(char *)(lVar6 + 0x2c) != '\0') || ((*(byte *)(lVar1 + 0x2f5) >> 4 & 1) == 0)) &&
        ((*(char *)(lVar6 + 0x2d) != '\0' || ((*(byte *)(lVar1 + 0x2f4) >> 2 & 1) == 0)))) &&
       (((*(char *)(lVar6 + 0x24) == '\0' ||
         (uVar5 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar5 == 0x1f)) ||
        (1 < *(ushort *)(lVar1 + uVar5 * 0x38 + 0x90) - 3)))) {
      uVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
      FUN_1003b093c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x34),
                    *(undefined4 *)(param_1 + 0x38),lVar1,uVar2,lVar6,
                    *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
      return;
    }
  }
  return;
}




void FUN_1003d5484(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  int iStack_14;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
    iStack_14 = (uint)*(byte *)(param_1 + 0x28) << 0x18;
    FUN_100348f54(&local_20,0);
  }
  return;
}




void FUN_1003d54d8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_1003c5d84(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}




void FUN_1003d5510(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
  *param_3 = &PTR_FUN_101496b88;
  *(undefined4 *)((long)param_3 + 0x1c) = param_4;
  *(undefined4 *)(param_3 + 4) = param_1;
  *(undefined4 *)((long)param_3 + 0x24) = param_2;
  *(undefined4 *)(param_3 + 5) = param_5;
  *(undefined4 *)((long)param_3 + 0x2c) = 0;
  uVar1 = *param_6;
  *(undefined4 *)(param_3 + 7) = *(undefined4 *)(param_6 + 1);
  param_3[6] = uVar1;
  return;
}




void FUN_1003d5544(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_1003d554c(long param_1)

{
  if (DAT_101d23a38 != '\0') {
    FUN_10034914c(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                  *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x28),param_1 + 0x30,
                  *(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}




void FUN_1003d5574(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    uVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x28));
    FUN_1003d55c8(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),lVar1,uVar2,
                  param_1 + 0x30,*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}




void FUN_1003d55c8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(param_3 + 0x48) != 0) {
    FUN_100463dac();
    for (lVar2 = *(long *)(*(long *)(param_3 + 0x48) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_101867350) {
        return;
      }
    }
    lVar2 = FUN_1010a0298();
    uVar1 = DAT_101dc0b88;
    if (lVar2 != 0) {
      if (param_4 == 0) {
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined4 *)(lVar2 + 0x30) = uVar1;
        uVar1 = *(undefined4 *)(param_5 + 1);
        *(undefined8 *)(lVar2 + 0x44) = *param_5;
        *(undefined4 *)(lVar2 + 0x4c) = uVar1;
      }
      else {
        uVar1 = *(undefined4 *)(param_4 + 0x30);
        *(long *)(lVar2 + 0x28) = param_4 + 0x28;
        *(undefined4 *)(lVar2 + 0x30) = uVar1;
        *(undefined4 *)(lVar2 + 0x38) = param_6;
        FUN_1004683e4(lVar2);
      }
      FUN_10046835c(param_1,param_2,lVar2);
      return;
    }
  }
  return;
}




void FUN_1003d56b4(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_101496bc0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_1;
  uVar1 = *param_4;
  *(undefined4 *)((long)param_2 + 0x2c) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((long)param_2 + 0x24) = uVar1;
  *(undefined1 *)(param_2 + 6) = param_5;
  return;
}




void FUN_1003d56e8(long param_1)

{
  uint uVar1;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  undefined1 local_14;
  
  if (DAT_101d23a38 != '\0') {
    local_14 = *(undefined1 *)(param_1 + 0x30);
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
    uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x2c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x2c) & 0xff00ff) << 8;
    local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_10034904c(&local_28,0);
  }
  return;
}




void FUN_1003d574c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_1003d578c(*(undefined4 *)(param_1 + 0x20),lVar1,param_1 + 0x24,
                  *(undefined1 *)(param_1 + 0x30));
    return;
  }
  return;
}




long FUN_1003d578c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(long *)(param_2 + 0x48) == 0) {
    lVar1 = 0;
  }
  else {
    local_40 = *param_3;
    local_38 = *(undefined4 *)(param_3 + 1);
    lVar1 = FUN_100463a4c();
    if (lVar1 != 0) {
      FUN_100463b74(param_1,lVar1,&local_40,param_4);
    }
  }
  return lVar1;
}




void FUN_1003d5800(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496bf8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003d581c(long param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034bcbc(&local_18,0);
  return;
}




void FUN_1003d5850(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long local_6b0 [200];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x20));
  if (lVar3 != 0 && lVar4 != 0) {
    FUN_1010a1958(local_6b0,1,DAT_10184dac8,0);
    if (local_6b0[0] != 0) {
      uVar2 = 0xffff0000;
      lVar3 = local_6b0[0];
LAB_1003d58d0:
      do {
        do {
          lVar4 = lVar3;
          if ((lVar4 != local_6b0[0]) &&
             (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x1b0a0423), lVar3 != 0)) {
            (**(code **)(lVar3 + 8))(lVar4);
          }
          if (((uVar2 & 0xffff) < uVar2 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
            uVar2 = uVar2 & 0xffff0000 | uVar2 + 1 & 0xffff;
            goto LAB_1003d58d0;
          }
          if ((uVar2 & 0xffff) == 0) goto LAB_1003d5970;
          lVar3 = *(long *)(lVar4 + 0x20);
        } while (*(long *)(lVar4 + 0x20) != 0);
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((lVar4 == 0) || (uVar7 = uVar2 - 1 & 0xffff, uVar7 == 0)) break;
        uVar2 = uVar7 | uVar2 & 0xffff0000;
        while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
          if ((uVar2 - 1 & 0xffff) == 0) goto LAB_1003d5970;
          lVar4 = *(long *)(lVar4 + 0x10);
          uVar2 = uVar2 & 0xffff0000 | uVar2 - 1 & 0xffff;
          if (lVar4 == 0) goto LAB_1003d5970;
        }
      } while( true );
    }
LAB_1003d5970:
    uVar2 = FUN_1010a1958(local_6b0,200,DAT_10184dd68,0);
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        lVar3 = local_6b0[uVar6];
        if (lVar3 != 0) {
          uVar7 = 0xffff0000;
          lVar4 = lVar3;
LAB_1003d59a8:
          do {
            do {
              lVar5 = lVar4;
              if ((lVar5 != lVar3) &&
                 (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar5 + 8),0x1b0a0423), lVar4 != 0)) {
                (**(code **)(lVar4 + 8))(lVar5);
              }
              if (((uVar7 & 0xffff) < uVar7 >> 0x10) &&
                 (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
                uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
                goto LAB_1003d59a8;
              }
              if ((uVar7 & 0xffff) == 0) goto LAB_1003d5a48;
              lVar4 = *(long *)(lVar5 + 0x20);
            } while (*(long *)(lVar5 + 0x20) != 0);
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((lVar5 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
            uVar7 = uVar1 | uVar7 & 0xffff0000;
            while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
              if ((uVar7 - 1 & 0xffff) == 0) goto LAB_1003d5a48;
              lVar5 = *(long *)(lVar5 + 0x10);
              uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
              if (lVar5 == 0) goto LAB_1003d5a48;
            }
          } while( true );
        }
LAB_1003d5a48:
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003d5a90(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496c30;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}




void FUN_1003d5aac(long param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  if (DAT_101d23a38 == '\0') {
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_10034a088(&local_18,0);
  }
  return;
}




void FUN_1003d5aec(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((DAT_101d23a38 == '\0') ||
     (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x20)), lVar2 == 0)) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = lVar2;
LAB_1003d5b30:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != lVar2) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0xe6702e0), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003d5b30;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003d5be8(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  undefined2 local_18;
  
  local_18 = *(undefined2 *)(param_1 + 0x24);
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034a6a4(&local_20,0);
  return;
}




void FUN_1003d5c24(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar1 != 0) &&
     ((uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar2 == 0x1f ||
      (1 < *(ushort *)(lVar1 + uVar2 * 0x38 + 0x90) - 3)))) {
    FUN_1003be0a4(lVar1,*(undefined4 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x24),
                  *(undefined1 *)(param_1 + 0x25));
    return;
  }
  return;
}




void FUN_1003d5c8c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496ca0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = uVar1;
  return;
}




void FUN_1003d5cb8(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
    uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_1003492ac(&local_20,0);
  }
  return;
}




void FUN_1003d5d08(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x48) != 0)) {
    for (lVar2 = *(long *)(*(long *)(lVar1 + 0x48) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_101867350) {
        FUN_1003d5d80(lVar1);
        FUN_1003d5db8(lVar1,param_1 + 0x20);
        return;
      }
    }
  }
  return;
}




void FUN_1003d5d80(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_101867350) {
        FUN_100463ec4();
        return;
      }
    }
  }
  return;
}




void FUN_1003d5db8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 local_20;
  float fStack_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)((long)param_2 + 4);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 1);
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar1 != (long *)0x0) {
    if (*(float *)(param_1 + 0x2ec) <= 0.0) {
                    /* WARNING: Could not recover jumptable at 0x0001003d5e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x168))();
      return;
    }
    local_18 = *(undefined4 *)(param_2 + 1);
    fStack_1c = (float)((ulong)*param_2 >> 0x20);
    _local_20 = CONCAT44(fStack_1c + *(float *)(param_1 + 0x2ec),(int)*param_2);
    (**(code **)(*plVar1 + 0x168))(plVar1,&local_20);
  }
  return;
}




void FUN_1003d5e40(long param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100347a48(&local_18,0);
  }
  return;
}




void FUN_1003d5e80(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar1 != 0) && (lVar1 = *(long *)(*(long *)(lVar1 + 0x60) + 0x28), lVar1 != 0)) {
    do {
      if (*(int *)(lVar1 + 0x30c) == *(int *)(param_1 + 0x20)) {
        FUN_1004694d8();
        return;
      }
      lVar1 = *(long *)(lVar1 + 0x350);
    } while (lVar1 != 0);
  }
  return;
}




void FUN_1003d5ed8(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496d10;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003d5ef4(long param_1)

{
  uint uVar1;
  long lVar2;
  uint local_28;
  uint uStack_24;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 != 0) {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100349d9c(&local_28,0);
  }
  return;
}




void FUN_1003d5f40(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar3 != 0 && DAT_101d23a38 != '\0') {
    lVar4 = *(long *)(lVar3 + 0x58);
    uVar2 = *(uint *)(param_1 + 0x20);
    lVar3 = 0x114;
    do {
      lVar1 = lVar4 + lVar3;
      uVar6 = *(ulong *)(lVar1 + -4);
      uVar5 = *(ulong *)(lVar1 + -0xc);
      if ((bool)(((ushort)uVar5 & 0x7fff) == uVar2 & ~((uVar5 & 0x40000000) == 0))) {
        *(uint *)(lVar1 + -0xc) = (uint)uVar5 & 0x3fffffff;
      }
      if ((bool)(((ushort)(uVar5 >> 0x20) & 0x7fff) == uVar2 & ~((uVar5 & 0x4000000000000000) == 0))
         ) {
        *(uint *)(lVar4 + lVar3 + -8) = (uint)(uVar5 >> 0x20) & 0x3fffffff;
      }
      if ((bool)(((ushort)uVar6 & 0x7fff) == uVar2 & ~((uVar6 & 0x40000000) == 0))) {
        *(uint *)(lVar4 + lVar3 + -4) = (uint)uVar6 & 0x3fffffff;
      }
      if ((bool)(((ushort)(uVar6 >> 0x20) & 0x7fff) == uVar2 & ~((uVar6 >> 0x38 & 0x40) == 0))) {
        *(uint *)(lVar4 + lVar3) = (uint)(uVar6 >> 0x20) & 0x3fffffff;
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0x164);
  }
  return;
}




void FUN_1003d6014(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496d48;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_1003d6034(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  short local_18;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
    local_18 = (ushort)*(byte *)(param_1 + 0x24) << 8;
    FUN_10034b124(&local_20,0);
  }
  return;
}




void FUN_1003d6080(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (DAT_101d23a38 == '\0' && lVar1 != 0) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184e000) {
        FUN_1003d60f4(lVar1,*(undefined4 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x24));
        return;
      }
    }
  }
  return;
}




void FUN_1003d60f4(long param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  uVar5 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar5 == 0) {
    return;
  }
  plVar8 = (long *)(param_1 + 0x38);
  while ((lVar9 = *plVar8, lVar9 == 0 || (*(int *)(lVar9 + 0x4c) != param_2))) {
    plVar8 = plVar8 + 1;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) {
      return;
    }
  }
  FUN_10046ddec(lVar9);
  if (-1 < *(int *)(lVar9 + 0x50)) {
    return;
  }
  FUN_10046d75c(lVar9,param_3);
  uVar2 = *(ushort *)(param_1 + 0xdc);
  uVar10 = uVar2 & 0xff00 | uVar2 - 1 & 0xff;
  uVar5 = (ulong)uVar10;
  uVar4 = (ushort)uVar10;
  *(ushort *)(param_1 + 0xdc) = uVar4;
  if ((uVar2 & 0x7f00) != 0) {
    uVar7 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar7 * 8) == lVar9) {
        *(undefined8 *)(param_1 + 0x38 + uVar7 * 8) = 0;
        uVar5 = (ulong)*(ushort *)(param_1 + 0xdc);
      }
      uVar4 = (ushort)uVar5;
      uVar7 = uVar7 + 1;
      uVar10 = (uint)uVar5 >> 8 & 0x7f;
    } while (uVar7 < uVar10);
    if (uVar10 != 0) {
      plVar8 = (long *)(param_1 + 0x88);
      uVar5 = uVar5 >> 8 & 0x7f;
      do {
        if (*plVar8 == 0) {
          *plVar8 = lVar9;
          uVar4 = *(ushort *)(param_1 + 0xdc);
          break;
        }
        plVar8 = plVar8 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  *(ushort *)(param_1 + 0xdc) = uVar4 | 0x8000;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  uVar10 = 0x10000;
  lVar3 = lVar9;
LAB_1003d6218:
  do {
    do {
      lVar6 = lVar3;
      if ((lVar6 != lVar9) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0x3bb20643), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar6);
      }
      if (((uVar10 & 0xffff) < uVar10 >> 0x10) && (lVar3 = *(long *)(lVar6 + 0x18), lVar3 != 0)) {
        uVar10 = uVar10 & 0xffff0000 | uVar10 + 1 & 0xffff;
        goto LAB_1003d6218;
      }
      if ((uVar10 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      return;
    }
    uVar1 = uVar10 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar10 = uVar1 | uVar10 & 0xffff0000;
    while (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0) {
      if ((uVar10 - 1 & 0xffff) == 0) {
        return;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar10 = uVar10 & 0xffff0000 | uVar10 - 1 & 0xffff;
      if (lVar6 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003d62b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  param_7[1] = 0;
  param_7[2] = 0;
  *(undefined1 *)(param_7 + 3) = 0;
  *param_7 = &PTR_FUN_101496d80;
  *(undefined4 *)((long)param_7 + 0x1c) = param_8;
  *(undefined4 *)(param_7 + 4) = param_9;
  *(undefined4 *)((long)param_7 + 0x24) = param_1;
  *(undefined4 *)(param_7 + 5) = param_2;
  *(undefined4 *)((long)param_7 + 0x2c) = param_3;
  *(undefined4 *)(param_7 + 8) = 0xffffffff;
  *(undefined4 *)((long)param_7 + 0x44) = param_4;
  *(undefined4 *)(param_7 + 9) = param_10;
  *(undefined4 *)((long)param_7 + 0x4c) = param_5;
  *(undefined4 *)(param_7 + 10) = param_6;
  *(undefined1 *)((long)param_7 + 0x54) = 0;
  return;
}




void FUN_1003d62f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined1 *)(param_4 + 3) = 0;
  *param_4 = &PTR_FUN_101496d80;
  *(undefined4 *)((long)param_4 + 0x1c) = param_5;
  *(undefined4 *)(param_4 + 4) = param_6;
  *(undefined8 *)((long)param_4 + 0x24) = 0x80000000800000;
  *(undefined4 *)((long)param_4 + 0x2c) = 0x800000;
  uVar1 = DAT_101dc1cb8;
  param_4[6] = DAT_101dc1cb8;
  param_4[7] = uVar1;
  *(undefined4 *)(param_4 + 8) = param_7;
  *(undefined4 *)((long)param_4 + 0x44) = param_1;
  *(undefined4 *)(param_4 + 9) = param_8;
  *(undefined4 *)((long)param_4 + 0x4c) = param_2;
  *(undefined4 *)(param_4 + 10) = param_3;
  *(undefined1 *)((long)param_4 + 0x54) = 0;
  return;
}




void FUN_1003d634c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496d80;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[6] = *param_4;
  param_1[7] = *param_5;
  *(undefined1 *)((long)param_1 + 0x54) = 1;
  return;
}




void FUN_1003d6380(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  undefined1 local_14;
  
  if (*(char *)(param_1 + 0x54) != '\0') {
    FUN_100348420(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),param_1 + 0x30,
                  param_1 + 0x38);
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar3 == 0xffffffff) {
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x2c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x2c) & 0xff00ff) << 8;
    uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x44) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x44) & 0xff00ff) << 8;
    local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x4c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x4c) & 0xff00ff) << 8;
    uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x50) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x50) & 0xff00ff) << 8;
    local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
    local_14 = (undefined1)*(undefined4 *)(param_1 + 0x48);
    FUN_100348220(&local_30,0);
  }
  else {
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x44) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x44) & 0xff00ff) << 8;
    uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x4c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x4c) & 0xff00ff) << 8;
    local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x50) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x50) & 0xff00ff) << 8;
    uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
    local_18 = CONCAT31(local_18._1_3_,(char)*(undefined4 *)(param_1 + 0x48));
    FUN_100348320(&local_30,0);
  }
  return;
}




void FUN_1003d6458(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_58;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x54) == '\0') {
    if (*(int *)(param_1 + 0x40) != -1) {
      lVar4 = FUN_100345d90();
      if (lVar4 == 0) {
        return;
      }
      lVar3 = FUN_1010a0298(lVar4,DAT_10184e3b8);
      if (lVar3 == 0) {
        return;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x44);
      bVar1 = *(byte *)(param_1 + 0x48);
      *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
      uVar6 = *(undefined4 *)(lVar2 + 0x30);
      *(long *)(lVar3 + 0x30) = lVar2 + 0x28;
      *(undefined4 *)(lVar3 + 0x38) = uVar6;
      uVar6 = *(undefined4 *)(lVar4 + 0x30);
      *(long *)(lVar3 + 0x40) = lVar4 + 0x28;
      *(undefined4 *)(lVar3 + 0x48) = uVar6;
      FUN_100472e70();
      *(undefined4 *)(lVar3 + 0x5c) = uVar7;
      *(byte *)(lVar3 + 0x78) = *(byte *)(lVar3 + 0x78) & 0xfc | bVar1 & 3;
      goto LAB_1003d64f4;
    }
    FUN_1010a1958(&local_58,1,DAT_10184dac8,0);
    lVar3 = FUN_1010a0298(local_58,DAT_10184e3b8);
    if (lVar3 != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x44);
      bVar1 = *(byte *)(param_1 + 0x48);
      *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
      uVar6 = *(undefined4 *)(lVar2 + 0x30);
      *(long *)(lVar3 + 0x30) = lVar2 + 0x28;
      *(undefined4 *)(lVar3 + 0x38) = uVar6;
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(param_1 + 0x24);
      *(undefined4 *)(lVar3 + 0x58) = uVar6;
      *(undefined4 *)(lVar3 + 0x5c) = uVar7;
      *(byte *)(lVar3 + 0x78) = *(byte *)(lVar3 + 0x78) & 0xfc | bVar1 & 3;
    }
  }
  else {
    FUN_1010a1958(&local_58,1,DAT_10184dac8,0);
    lVar3 = FUN_1010a0298(local_58,DAT_10184e3b8);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
      uVar6 = *(undefined4 *)(lVar2 + 0x30);
      *(long *)(lVar3 + 0x30) = lVar2 + 0x28;
      *(undefined4 *)(lVar3 + 0x38) = uVar6;
      *(byte *)(lVar3 + 0x78) = *(byte *)(lVar3 + 0x78) | 4;
      *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(param_1 + 0x38);
    }
  }
  if (lVar3 == 0) {
    return;
  }
LAB_1003d64f4:
  if (((*(char *)(param_1 + 0x54) == '\0') && (fVar5 = *(float *)(param_1 + 0x4c), 0.0 <= fVar5)) &&
     (fVar5 < 6.2831855)) {
    uVar6 = *(undefined4 *)(param_1 + 0x50);
    *(float *)(lVar3 + 0x70) = fVar5;
    *(undefined4 *)(lVar3 + 0x74) = uVar6;
  }
  return;
}




void FUN_1003d6630(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100347c38(&local_20,0);
  return;
}




void FUN_1003d6670(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_1004656e0(*(undefined8 *)(lVar1 + 0x60),*(undefined4 *)(param_1 + 0x20),
                  *(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}




void FUN_1003d66ac(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496df0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_1003d66c8(long param_1)

{
  uint uVar1;
  uint local_18 [2];
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100348570(local_18,0);
  return;
}




void FUN_1003d66f8(long param_1)

{
  FUN_1003d6710(*(undefined4 *)(param_1 + 0x1c));
  FUN_1010a01dc();
  return;
}




void FUN_1003d6710(int param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long local_638 [192];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_638,0xc0,DAT_10184e3b8,0);
  if (0 < (int)uVar1) {
    uVar2 = (ulong)uVar1;
    plVar3 = local_638;
    do {
      lVar4 = *plVar3;
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184e3b8) {
        lVar4 = 0;
      }
      if (*(int *)(lVar4 + 0x28) == param_1) goto LAB_1003d67a0;
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  lVar4 = 0;
LAB_1003d67a0:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(lVar4);
  }
  return;
}




void FUN_1003d67d0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496e28;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = uVar1;
  *(undefined1 *)((long)param_1 + 0x2c) = param_4;
  return;
}




void FUN_1003d6800(long param_1)

{
  uint uVar1;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  undefined1 local_18;
  
  local_18 = *(undefined1 *)(param_1 + 0x2c);
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034aca0(&local_28,0);
  return;
}




void FUN_1003d684c(long param_1)

{
  long lVar1;
  
  if ((DAT_101d23a38 == '\0') &&
     (lVar1 = FUN_1003d68a8(*(undefined4 *)(param_1 + 0x1c)), lVar1 != 0)) {
    *(undefined4 *)(lVar1 + 0x6c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(lVar1 + 0x70) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(lVar1 + 0x74) = *(undefined4 *)(param_1 + 0x28);
    FUN_1003d693c(lVar1,*(undefined1 *)(param_1 + 0x2c));
    return;
  }
  return;
}




void FUN_1003d68a8(int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_428 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_428,0x80,DAT_10184dec0,0);
  if (uVar1 != 0) {
    uVar3 = (ulong)uVar1;
    plVar4 = local_428;
    do {
      lVar2 = *plVar4;
      if (*(int *)(lVar2 + 0x34) == param_1) goto LAB_1003d6910;
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar2 = 0;
LAB_1003d6910:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar2);
}




void FUN_1003d693c(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar4 = 0x10000;
    lVar2 = param_1;
LAB_1003d696c:
    do {
      do {
        lVar3 = lVar2;
        if ((lVar3 != param_1) &&
           (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x2ffd05a3), lVar2 != 0)) {
          (**(code **)(lVar2 + 8))(lVar3);
        }
        if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
          uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
          goto LAB_1003d696c;
        }
        if ((uVar4 & 0xffff) == 0) goto LAB_1003d6a0c;
        lVar2 = *(long *)(lVar3 + 0x20);
      } while (*(long *)(lVar3 + 0x20) != 0);
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((lVar3 == 0) || (uVar1 = uVar4 - 1 & 0xffff, uVar1 == 0)) break;
      uVar4 = uVar1 | uVar4 & 0xffff0000;
      while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
        if ((uVar4 - 1 & 0xffff) == 0) goto LAB_1003d6a0c;
        lVar3 = *(long *)(lVar3 + 0x10);
        uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
        if (lVar3 == 0) goto LAB_1003d6a0c;
      }
    } while( true );
  }
LAB_1003d6a0c:
  *(undefined1 *)(param_1 + 0xd0) = 1;
  return;
}




void FUN_1003d6a2c(long param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034a5ac(&local_18,0);
  return;
}




void FUN_1003d6a60(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  plVar2 = (long *)(lVar1 + 0x18);
  do {
    lVar3 = *plVar2;
    plVar2 = (long *)(lVar3 + 0x20);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8);
  lVar3 = *(long *)(lVar3 + (ulong)*(uint *)(param_1 + 0x20) * 8 + 0x50);
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x239) & 0x1c) != 0)) &&
     (FUN_1003d6b28(lVar1), DAT_101d23a38 != '\0')) {
    local_3c = *(undefined4 *)(lVar1 + 0x260);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = &PTR_FUN_1014971e0;
    local_38 = 0x1dffffffff;
    local_30 = 0x3f80000000000000;
    local_28 = 0;
    FUN_1004969f4(&local_58,&DAT_101e47d30);
  }
  return;
}




void FUN_1003d6b28(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 local_48 [2];
  
  FUN_1004615f4(*(undefined8 *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x58) + (param_2 & 0xffffffff) * 8 + 0x50);
    pcVar3 = *(char **)(lVar4 + 0x200);
    if (pcVar3 == (char *)0x0) {
      lVar4 = *(long *)(lVar4 + 0x38);
      if (lVar4 == 0) {
        pcVar3 = "<null>";
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
      }
    }
    FUN_1003a4e5c(local_48,pcVar3);
    puVar2 = PTR_s_onAbilityDowngradedName_10185d748;
    lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x28);
    if (lVar4 != 0) {
      do {
        FUN_10046a418(lVar4,puVar2,local_48[0]);
        lVar4 = *(long *)(lVar4 + 0x350);
      } while (lVar4 != 0);
      if (param_1 == 0) {
        return;
      }
    }
  }
  uVar6 = 0xffff0000;
  lVar4 = param_1;
LAB_1003d6bc8:
  do {
    do {
      lVar5 = lVar4;
      if ((lVar5 != param_1) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar5 + 8),0x53fa07ab), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar5);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_1003d6bc8;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar5 + 0x20);
    } while (*(long *)(lVar5 + 0x20) != 0);
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      return;
    }
    uVar1 = uVar6 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar5 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003d6c80(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined2 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_101496e98;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_7;
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  *(undefined4 *)(param_2 + 5) = param_4;
  *(undefined2 *)((long)param_2 + 0x2c) = param_5;
  *(undefined1 *)((long)param_2 + 0x2e) = param_6;
  *(undefined1 *)((long)param_2 + 0x2f) = param_8;
  return;
}




void FUN_1003d6cb0(long param_1)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float local_3c;
  float fStack_38;
  float local_34;
  float local_30;
  uint uStack_2c;
  uint local_28;
  ushort local_24;
  undefined1 local_22;
  undefined1 local_21;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  fVar3 = *(float *)(param_1 + 0x24);
  if (fVar3 < 0.0) {
    FUN_1003463f0(lVar2,&local_30,&local_34,&fStack_38,&local_3c);
    if (((*(char *)(param_1 + 0x2f) == '\0') &&
        ((((uint)*(byte *)(lVar2 + 0x303) << 0x10) >> 0x12 & 1) == 0)) &&
       (fVar3 = *(float *)(*(long *)(lVar2 + 0x40) + 0x308), local_30 + fVar3 <= 0.0)) {
      local_30 = 1.0 - fVar3;
    }
    fVar3 = local_34 + local_30 + fStack_38 + local_3c;
    *(float *)(param_1 + 0x24) = fVar3;
  }
  if (DAT_101d23a38 != '\0') {
    local_21 = *(undefined1 *)(param_1 + 0x2e);
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_30 = (float)(uVar1 >> 0x10 | uVar1 << 0x10);
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = ((uint)fVar3 & 0xff00ff00) >> 8 | ((uint)fVar3 & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    local_24 = *(ushort *)(param_1 + 0x2c) >> 8 | *(ushort *)(param_1 + 0x2c) << 8;
    local_22 = (undefined1)*(undefined4 *)(param_1 + 0x28);
    FUN_100348030(&local_30,0);
  }
  return;
}




void FUN_1003d6dac(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar3 != 0) {
    if ((((uint)*(byte *)(lVar3 + 0x303) << 0x10) >> 0x12 & 1) == 0) {
      fVar9 = *(float *)(*(long *)(lVar3 + 0x40) + 0x308);
    }
    else {
      fVar9 = *(float *)(*(long *)(lVar3 + 0x40) + 0x30c);
    }
    if (0.0 < fVar9) {
      lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x20));
      if (lVar4 == 0) {
        plVar8 = *(long **)(lVar3 + 0x50);
        uVar5 = 0xffffffff;
      }
      else {
        if (*(float *)(param_1 + 0x24) < 0.0) {
          FUN_1003d707c(lVar3,lVar4);
          FUN_1003d71b0(*(undefined4 *)(param_1 + 0x24),lVar4,lVar3);
        }
        plVar8 = *(long **)(lVar3 + 0x50);
        uVar5 = FUN_1003461dc(lVar4);
      }
      lVar6 = FUN_100345d90(uVar5);
      if ((DAT_101d23a39 == '\0') ||
         (((uVar1 = *(uint *)(lVar3 + 0x2f4), (uVar1 & 1) == 0 &&
           ((lVar4 == 0 || ((*(byte *)(lVar4 + 0x2f4) & 1) == 0)))) &&
          ((lVar6 == 0 || ((*(byte *)(lVar6 + 0x2f4) & 1) == 0)))))) {
        uVar1 = 0;
      }
      else {
        lVar4 = *(long *)(lVar3 + 0x40);
        fVar9 = *(float *)(lVar4 + 0x38) +
                *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
        NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
        if ((uVar1 & 1) == 0) {
          if ((uVar1 >> 0xc & 1) == 0) {
            fVar9 = 1.0;
            if ((uVar1 & 4) != 0) {
              fVar9 = 0.054;
            }
          }
          else {
            fVar9 = 0.075;
          }
        }
        else {
          fVar9 = 0.18;
        }
        if (ABS(*(float *)(param_1 + 0x24) / DAT_101e94260) <= fVar9) {
          uVar1 = FUN_100147980();
        }
        else {
          uVar1 = 1;
        }
      }
      FUN_1003463f0(*(undefined4 *)(param_1 + 0x24),lVar3,&local_64,&local_68,&local_6c,&local_70);
      if (local_6c != 0.0) {
        FUN_1003d72ac(local_6c,lVar3,4);
        FUN_1003d7388(local_6c,lVar3,4);
      }
      if (local_70 != 0.0) {
        FUN_1003d72ac(local_70,lVar3,5);
        FUN_1003d7388(local_70,lVar3,5);
      }
      if (local_64 != 0.0) {
        FUN_1003d7388(local_64,lVar3,0);
      }
      if (local_68 != 0.0) {
        FUN_1003d7388(local_68,lVar3,1);
      }
      if ((plVar8 != (long *)0x0) &&
         (((uVar7 = FUN_10034ea2c(*(undefined4 *)(param_1 + 0x1c)), (uVar7 & 1) != 0 ||
           (uVar7 = FUN_10034ea2c(*(undefined4 *)(param_1 + 0x20)), (uVar7 & 1) != 0)) ||
          (uVar2 = FUN_10034ea2c(uVar5), (uVar2 | uVar1) == 1)))) {
        if (0.0 <= *(float *)(param_1 + 0x24)) {
          if (1.0 <= *(float *)(param_1 + 0x24)) {
            (**(code **)(*plVar8 + 0x110))(plVar8);
          }
        }
        else {
          (**(code **)(*plVar8 + 0x118))
                    (local_64 + local_6c + local_68,plVar8,*(undefined4 *)(param_1 + 0x28),
                     *(undefined2 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x2e));
        }
      }
    }
  }
  return;
}




void FUN_1003d707c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(float *)(*(long *)(param_1 + 0x40) + 0x308) <= 0.0) &&
     (*(float *)(*(long *)(param_1 + 0x40) + 0x30c) <= 0.0)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x260);
  *(undefined1 *)(param_1 + 0x2c8) = *(undefined1 *)(param_2 + 0x264);
  FUN_1004654bc(param_1,param_2);
  FUN_100464490(param_1);
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_1003d710c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x22ef04a2), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1003d710c;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003d71b0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  FUN_100464490();
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_1003d71ec:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x22450493), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1003d71ec;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003d72ac(float param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  long local_238 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  if (((DAT_101d23a38 != '\0') &&
      (uVar1 = FUN_1010a0218(param_2,local_238,0x40,DAT_101867410), uVar1 != 0)) && (param_1 != 0.0)
     ) {
    uVar2 = 0;
    param_1 = ABS(param_1);
    do {
      lVar3 = local_238[uVar2];
      if (*(int *)(lVar3 + 0x34) == param_3) {
        fVar4 = *(float *)(lVar3 + 0x38);
        if (param_1 < fVar4) {
          *(float *)(lVar3 + 0x38) = fVar4 - param_1;
          break;
        }
        param_1 = param_1 - fVar4;
        *(undefined4 *)(lVar3 + 0x38) = 0;
      }
      uVar2 = uVar2 + 1;
      if ((uVar1 <= uVar2) || (param_1 <= 0.0)) break;
    } while( true );
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003d7388(undefined4 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined4 local_44;
  
  uVar3 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
  if (((int)uVar3 != 0x1f) &&
     (*(ushort *)(param_2 + uVar3 * 0x38 + 0x90) - 3 < 2 && (param_3 & 0xfffffffd) == 0)) {
    return;
  }
  local_44 = param_1;
  FUN_1004653d8(*(undefined8 *)(param_2 + 0x40),param_3);
  puVar2 = PTR_s_onActorResourcesChangedName_10185d560;
  if ((*(long *)(param_2 + 0x60) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_2 + 0x60) + 0x28), lVar6 != 0)) {
    do {
      FUN_10046a90c(lVar6,puVar2,param_3,&local_44);
      lVar6 = *(long *)(lVar6 + 0x350);
    } while (lVar6 != 0);
    if (param_2 == 0) {
      return;
    }
  }
  uVar5 = 0x10000;
  lVar6 = param_2;
LAB_1003d7428:
  do {
    do {
      lVar4 = lVar6;
      if ((lVar4 != param_2) &&
         (lVar6 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x786f093c), lVar6 != 0)) {
        (**(code **)(lVar6 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar6 = *(long *)(lVar4 + 0x18), lVar6 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003d7428;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar6 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar6 = *(long *)(lVar4 + 0x20), lVar6 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003d74dc(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496ed0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_1003d74f8(long param_1)

{
  uint uVar1;
  uint local_18 [2];
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034bbc8(local_18,0);
  return;
}




void FUN_1003d7528(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_1003d754c();
    return;
  }
  return;
}




void FUN_1003d754c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dea0))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_100464b40();
  return;
}




void FUN_1003d7578(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496f08;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  return;
}




void FUN_1003d75a8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496f08;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




void FUN_1003d75d0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496f08;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  param_1[5] = *param_4;
  *(undefined4 *)(param_1 + 6) = 1;
  return;
}




void FUN_1003d7604(long param_1)

{
  uint uVar1;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  undefined1 local_14;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x2c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x2c) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_14 = (undefined1)*(undefined4 *)(param_1 + 0x30);
  FUN_10034b224(&local_28,0);
  return;
}




void FUN_1003d7658(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  lVar5 = *(long *)(lVar4 + 0x18);
  while( true ) {
    if (lVar5 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184e000) break;
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  uVar6 = (ulong)*(byte *)(lVar5 + 0xdd) & 0x7f;
  if ((int)uVar6 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  plVar8 = (long *)(lVar5 + 0x38);
  while ((*plVar8 == 0 || (*(int *)(*plVar8 + 0x4c) != iVar2))) {
    plVar8 = plVar8 + 1;
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    FUN_1003d7880(lVar5,iVar2,*(undefined4 *)(param_1 + 0x24));
  }
  else if (iVar3 == 1) {
    FUN_1003d78dc(lVar5,iVar2,param_1 + 0x28);
  }
  else if (iVar3 == 2) {
    FUN_1003d782c();
  }
  if (lVar4 == 0) {
    return;
  }
  uVar9 = 0x10000;
  lVar5 = lVar4;
LAB_1003d774c:
  do {
    do {
      lVar7 = lVar5;
      if ((lVar7 != lVar4) &&
         (lVar5 = FUN_1010a0918(*(undefined8 *)(lVar7 + 8),0x295f0542), lVar5 != 0)) {
        (**(code **)(lVar5 + 8))(lVar7);
      }
      if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar5 = *(long *)(lVar7 + 0x18), lVar5 != 0)) {
        uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
        goto LAB_1003d774c;
      }
      if ((uVar9 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      return;
    }
    uVar1 = uVar9 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar9 = uVar1 | uVar9 & 0xffff0000;
    while (lVar5 = *(long *)(lVar7 + 0x20), lVar5 == 0) {
      if ((uVar9 - 1 & 0xffff) == 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
      if (lVar7 == 0) {
        return;
      }
    }
  } while( true );
}




bool FUN_1003d77ec(long param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x38);
    do {
      lVar3 = *plVar2;
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x4c) == param_2)) goto LAB_1003d7820;
      plVar2 = plVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  lVar3 = 0;
LAB_1003d7820:
  return lVar3 != 0;
}




void FUN_1003d782c(long param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x38);
    do {
      lVar3 = *plVar2;
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x4c) == param_2)) goto LAB_1003d786c;
      plVar2 = plVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  lVar3 = 0;
LAB_1003d786c:
  FUN_10046e4ac();
  FUN_10046de28(lVar3);
  return;
}




void FUN_1003d7880(long param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x38);
    do {
      lVar3 = *plVar2;
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x4c) == param_2)) goto LAB_1003d78c4;
      plVar2 = plVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  lVar3 = 0;
LAB_1003d78c4:
  FUN_10046e4ac();
  FUN_10046de7c(lVar3,param_3);
  return;
}




void FUN_1003d78dc(long param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x38);
    do {
      lVar3 = *plVar2;
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x4c) == param_2)) goto LAB_1003d7920;
      plVar2 = plVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  lVar3 = 0;
LAB_1003d7920:
  FUN_10046e4ac();
  FUN_10046df00(lVar3,param_3);
  return;
}




void FUN_1003d7938(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496f40;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined1 *)(param_1 + 4) = param_3;
  *(undefined1 *)((long)param_1 + 0x21) = param_4;
  return;
}




void FUN_1003d795c(long param_1)

{
  uint uVar1;
  uint local_18;
  undefined2 local_14;
  
  local_14 = *(undefined2 *)(param_1 + 0x20);
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034b9d4(&local_18,0);
  return;
}




void FUN_1003d7994(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar2 != 0) &&
     (iVar1 = FUN_1003d7a00(lVar2,*(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21)),
     iVar1 != 0)) {
    if (DAT_101d23a39 != '\0') {
      FUN_10004daec();
      return;
    }
    FUN_100036770(lVar2,*(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21));
    return;
  }
  return;
}




void FUN_1003d7a00(long param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long alStack_448 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  lVar2 = *(long *)(param_1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dea0))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  FUN_1004647ec(lVar2,alStack_448,0x80);
  if (param_2 == 0xff) {
    uVar1 = FUN_1004648c0();
  }
  else {
    uVar1 = *(undefined4 *)(alStack_448[param_2] + 0x40);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    FUN_1003db1c0(param_1,uVar1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003d7ac4(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496f78;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  return;
}




void FUN_1003d7ae4(void)

{
  return;
}




void FUN_1003d7ae8(long param_1)

{
  FUN_1001167b4(*(undefined1 *)(param_1 + 0x19),*(undefined4 *)(param_1 + 0x1c));
  return;
}




undefined8 * FUN_1003d7af8(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint local_28 [2];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496fb0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  if (DAT_101d23a38 != '\0') {
    FUN_1003d7b64(param_1);
    uVar1 = (*(uint *)((long)param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 0x1c) & 0xff00ff) << 8;
    local_28[0] = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100346b88(local_28,0);
  }
  return param_1;
}




void FUN_1003d7b64(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long local_298 [70];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar3 != 0) {
    uVar2 = FUN_1010a1958(local_298,0x46,DAT_10184e3d0,0);
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        lVar7 = local_298[uVar6];
        if (lVar7 != 0) {
          uVar8 = 0xffff0000;
          lVar4 = lVar7;
LAB_1003d7bdc:
          do {
            do {
              lVar5 = lVar4;
              if ((lVar5 != lVar7) &&
                 (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar5 + 8),0x6cf608dd), lVar4 != 0)) {
                (**(code **)(lVar4 + 8))(lVar5);
              }
              if (((uVar8 & 0xffff) < uVar8 >> 0x10) &&
                 (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
                uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
                goto LAB_1003d7bdc;
              }
              if ((uVar8 & 0xffff) == 0) goto LAB_1003d7c7c;
              lVar4 = *(long *)(lVar5 + 0x20);
            } while (*(long *)(lVar5 + 0x20) != 0);
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((lVar5 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) break;
            uVar8 = uVar1 | uVar8 & 0xffff0000;
            while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
              if ((uVar8 - 1 & 0xffff) == 0) goto LAB_1003d7c7c;
              lVar5 = *(long *)(lVar5 + 0x10);
              uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
              if (lVar5 == 0) goto LAB_1003d7c7c;
            }
          } while( true );
        }
LAB_1003d7c7c:
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar2);
    }
    FUN_100101c0c(*(undefined1 *)(lVar3 + 0x300));
    FUN_1010a17e4(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




undefined8 * thunk_FUN_1003d7af8(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint auStack_28 [2];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496fb0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  if (DAT_101d23a38 != '\0') {
    FUN_1003d7b64(param_1);
    uVar1 = (*(uint *)((long)param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 0x1c) & 0xff00ff) << 8;
    auStack_28[0] = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100346b88(auStack_28,0);
  }
  return param_1;
}




void FUN_1003d7cd8(void)

{
  return;
}




void FUN_1003d7cdc(void)

{
  if (DAT_101d23a38 != '\0') {
    return;
  }
  FUN_1003d7b64();
  return;
}




undefined8 *
FUN_1003d7cf0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9,undefined1 param_10 [16],undefined8 param_11,undefined8 param_12,
             long param_13,long param_14,long param_15,undefined4 param_16,undefined8 param_17,
             undefined4 param_18,undefined8 param_19)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496fe8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *(undefined1 *)(param_1 + 5) = param_5;
  *(undefined1 *)((long)param_1 + 0x29) = param_6;
  uVar3 = *param_7;
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_7 + 1);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar3;
  uVar3 = *param_8;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_8 + 1);
  param_1[7] = uVar3;
  FUN_10045c628(param_1 + 9,param_9);
  param_1[0x6c] = param_19;
  *(undefined1 *)(param_1 + 0x6d) = param_10[0];
  *(undefined8 *)((long)param_1 + 0x36c) = param_10._4_8_;
  *(undefined4 *)((long)param_1 + 0x374) = param_10._12_4_;
  *(undefined4 *)(param_1 + 0x72) = param_16;
  param_1[0x73] = param_17;
  *(undefined4 *)(param_1 + 0x74) = param_18;
  param_1[0x75] = param_11;
  *(undefined1 *)(param_1 + 0x76) = (undefined1)param_12;
  *(undefined1 *)((long)param_1 + 0x3b1) = param_12._1_1_;
  if (((param_13 == 0) && (param_14 == 0)) && (param_15 == 0)) {
    param_1[0x6f] = param_1[0x6f] | 0x101010101010101;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    *(byte *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x29) + 0x380) =
         *(byte *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x29) + 0x380) | 1;
  }
  else {
    lVar2 = 0;
    do {
      puVar1 = (undefined1 *)((long)param_1 + lVar2 + 0x388);
      puVar1[-0x10] = *(undefined1 *)(param_13 + lVar2);
      puVar1[-8] = *(undefined1 *)(param_14 + lVar2);
      *puVar1 = *(undefined1 *)(param_15 + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 8);
  }
  return param_1;
}




void FUN_1003d7e78(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1003d7cf0(param_1,param_2,param_3);
  return;
}




void FUN_1003d7ef0(long param_1)

{
  uint uVar1;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = FUN_1010a1938(DAT_10184dd68);
    if (0xb9 < uVar1) {
      FUN_1003d7f9c();
    }
    FUN_100120274(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                  *(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x28),
                  *(undefined1 *)(param_1 + 0x29),param_1 + 0x2c,param_1 + 0x38,param_1 + 0x48,
                  *(undefined1 *)(param_1 + 0x368),(char)*(undefined4 *)(param_1 + 0x370),
                  param_1 + 0x378,param_1 + 0x380,param_1 + 0x388,*(undefined4 *)(param_1 + 0x390));
  }
  return;
}




undefined8 FUN_1003d7f9c(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long alStack_668 [200];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = FUN_1010a1958(alStack_668,200,DAT_10184dd68,0);
  if (iVar1 - 1U != 0) {
    lVar2 = 0;
    uVar3 = (ulong)(iVar1 - 1U);
    do {
      lVar4 = alStack_668[uVar3];
      if ((*(char *)(*(long *)(lVar4 + 0x38) + 0x81) != '\0') &&
         ((lVar2 == 0 || (*(uint *)(lVar4 + 0x260) < *(uint *)(lVar2 + 0x260))))) {
        lVar2 = lVar4;
      }
      uVar3 = uVar3 - 1;
    } while ((int)uVar3 != 0);
    if (lVar2 != 0) {
      *(ushort *)(lVar2 + 0x301) = *(ushort *)(lVar2 + 0x301) | 0x8000;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003d805c(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined **local_340;
  undefined8 uStack_338;
  byte local_330;
  byte local_32f;
  undefined1 local_32e;
  long local_328;
  long local_320 [16];
  long local_2a0 [70];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x24));
  if (lVar4 == 0) {
    local_328 = 0;
    FUN_1010a15e0(**(undefined8 **)
                    (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x1c) * 8),
                  &local_328,1,0);
    lVar4 = local_328;
    *(undefined4 *)(local_328 + 0x260) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(local_328 + 0x300) = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)(local_328 + 0x264) = *(undefined1 *)(param_1 + 0x29);
    iVar2 = *(int *)(local_328 + 0x268);
    *(undefined4 *)(local_328 + 0x268) = *(undefined4 *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      FUN_100345e3c(local_328);
    }
    *(ushort *)(lVar4 + 0x301) =
         *(ushort *)(lVar4 + 0x301) & 0xfc00 | (ushort)*(undefined4 *)(param_1 + 0x370) & 0x3ff;
    lVar5 = FUN_100345d90(*(undefined4 *)(param_1 + 0x390));
    uVar8 = DAT_101dc0b88;
    if (lVar5 == 0) {
      *(undefined8 *)(lVar4 + 0x2d0) = 0;
    }
    else {
      *(long *)(lVar4 + 0x2d0) = lVar5 + 0x28;
      uVar8 = *(undefined4 *)(lVar5 + 0x30);
    }
    *(undefined4 *)(lVar4 + 0x2d8) = uVar8;
    *(undefined8 *)(lVar4 + 0x2a8) = *(undefined8 *)(param_1 + 0x360);
    FUN_1003d84a4(lVar4,*(undefined4 *)(param_1 + 0x36c),param_1 + 0x20,0,param_1 + 0x2c,
                  param_1 + 0x38);
    FUN_1003d881c(lVar4);
    FUN_1003d88bc(lVar4);
    if (*(char *)(param_1 + 0x368) == '\0') {
      FUN_100465410(*(undefined8 *)(lVar4 + 0x40),param_1 + 0x48);
    }
    if (1 < *(uint *)(param_1 + 0x374)) {
      uVar3 = 1;
      do {
        FUN_1003d8948(lVar4,1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x374));
    }
    FUN_1003d90d4(lVar4,param_1 + 0x2c,param_1 + 0x38);
    if ((DAT_101d23a38 != '\0') ||
       (FUN_100101bc8(lVar4,*(undefined1 *)(param_1 + 0x28)), DAT_101d23a38 != '\0')) {
      lVar6 = FUN_1003d926c(lVar4);
      lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + 8);
      if (lVar6 != 0) {
        lVar5 = lVar6;
      }
      FUN_100101a30(lVar4,lVar5,*(undefined4 *)(param_1 + 0x370));
      if (DAT_101d23a38 != '\0') {
        FUN_1010a0298(lVar4,DAT_1018672b0);
      }
    }
    lVar5 = *(long *)(lVar4 + 0x18);
    if (lVar5 != 0) {
LAB_1003d8274:
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dda8) goto code_r0x0001003d8284;
      lVar6 = 0;
      do {
        lVar9 = param_1 + lVar6;
        FUN_1003d932c(lVar5,(uint)lVar6 & 0xff,*(undefined1 *)(lVar9 + 0x378),
                      *(undefined1 *)(lVar9 + 0x380),*(undefined1 *)(lVar9 + 0x388));
        lVar6 = lVar6 + 1;
      } while (lVar6 != 8);
    }
LAB_1003d82bc:
    if (DAT_101d23a38 != '\0') {
      (**(code **)(param_1 + 0x3a8))
                (lVar4,*(undefined1 *)(param_1 + 0x3b0),*(undefined1 *)(param_1 + 0x3b1));
    }
    if (*(code **)(param_1 + 0x398) != (code *)0x0) {
      (**(code **)(param_1 + 0x398))(lVar4,*(undefined4 *)(param_1 + 0x3a0));
    }
    FUN_1003d9534(lVar4);
    uVar3 = FUN_1010a1958(local_2a0,0x46,DAT_10184e3d0,0);
    if (uVar3 != 0) {
      uVar10 = 0;
      do {
        lVar5 = local_2a0[uVar10];
        if (lVar5 != 0) {
          uVar11 = 0xffff0000;
          lVar6 = lVar5;
LAB_1003d832c:
          do {
            do {
              lVar9 = lVar6;
              if ((lVar9 != lVar5) &&
                 (lVar6 = FUN_1010a0918(*(undefined8 *)(lVar9 + 8),0x377a062d), lVar6 != 0)) {
                (**(code **)(lVar6 + 8))(lVar9);
              }
              if (((uVar11 & 0xffff) < uVar11 >> 0x10) &&
                 (lVar6 = *(long *)(lVar9 + 0x18), lVar6 != 0)) {
                uVar11 = uVar11 & 0xffff0000 | uVar11 + 1 & 0xffff;
                goto LAB_1003d832c;
              }
              if ((uVar11 & 0xffff) == 0) goto LAB_1003d83cc;
              lVar6 = *(long *)(lVar9 + 0x20);
            } while (*(long *)(lVar9 + 0x20) != 0);
            lVar9 = *(long *)(lVar9 + 0x10);
            if ((lVar9 == 0) || (uVar1 = uVar11 - 1 & 0xffff, uVar1 == 0)) break;
            uVar11 = uVar1 | uVar11 & 0xffff0000;
            while (lVar6 = *(long *)(lVar9 + 0x20), lVar6 == 0) {
              if ((uVar11 - 1 & 0xffff) == 0) goto LAB_1003d83cc;
              lVar9 = *(long *)(lVar9 + 0x10);
              uVar11 = uVar11 & 0xffff0000 | uVar11 - 1 & 0xffff;
              if (lVar9 == 0) goto LAB_1003d83cc;
            }
          } while( true );
        }
LAB_1003d83cc:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar3);
    }
    local_330 = local_330 | 3;
    local_340 = &PTR_FUN_1014998d0;
    uStack_338 = 0;
    local_32f = local_32f & 0xfe;
    local_32e = 0xff;
    uVar3 = FUN_1003a6ce4(&local_340,local_320,0x10,0);
    if (uVar3 != 0) {
      uVar10 = 0;
      do {
        if (*(long *)(local_320[uVar10] + 0x60) != 0) {
          for (lVar5 = *(long *)(*(long *)(local_320[uVar10] + 0x60) + 0x28); lVar5 != 0;
              lVar5 = *(long *)(lVar5 + 0x350)) {
            FUN_100469f10(lVar5,lVar4);
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar3);
    }
    FUN_1000e5f24(lVar4);
    if ((DAT_101d23a38 != '\0') && ((*(uint *)(lVar4 + 0x2f4) & 0x20002111) != 0)) {
      plVar7 = (long *)FUN_1010a0298(lVar4,DAT_1018672c0);
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x0001003d8284:
  lVar5 = *(long *)(lVar5 + 0x20);
  if (lVar5 == 0) goto LAB_1003d82bc;
  goto LAB_1003d8274;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d84a4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  FUN_100462630();
  lVar3 = FUN_1010a0298(param_1,DAT_101867330);
  *(long *)(param_1 + 0x40) = lVar3;
  *(undefined4 *)(lVar3 + 0xd8) = 0;
  *(ulong *)(lVar3 + 0x348) = *(ulong *)(lVar3 + 0x348) | 0x10000000000;
  FUN_1004631d8(param_1,param_3);
  FUN_1003d8948(param_1,1);
  fVar7 = DAT_101e94268;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x40);
  fVar6 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
  fVar6 = DAT_101e94260;
  if (DAT_101e94260 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar6 = (float)NEON_fminnm(fVar6,DAT_101e94260);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(lVar3 + 0x308) = fVar6;
  fVar6 = *(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0xf4) * (*(float *)(lVar3 + 0x25c) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar3 + 0x1a8),DAT_101e94328);
  fVar6 = fVar7;
  if (fVar7 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar7 = (float)NEON_fminnm(fVar6,fVar7);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(lVar3 + 0x310) = fVar7;
  plVar4 = (long *)FUN_1000209b8(param_1,uVar5);
  *(long **)(param_1 + 0x50) = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x160))(plVar4,param_1 + 0x220);
  }
  FUN_1003d90d4(param_1,param_5,param_6);
  if ((*(uint *)(param_1 + 0x2f4) & 0x22000) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar5 = FUN_1010a0298(param_1,ram0x0001018672a0);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    FUN_1004633d4(uVar5,*(long *)(param_1 + 0x38) + 0x1e0,param_4);
  }
  if (0.0 < *(float *)(*(long *)(param_1 + 0x38) + 0x140)) {
    lVar3 = FUN_1010a0298(param_1,DAT_10184daf8);
    *(undefined4 *)(lVar3 + 0x50) = DAT_101d2c66c;
    *(byte *)(lVar3 + 0x6b) = *(byte *)(lVar3 + 0x6b) & 0xe0 | 0x10;
    *(undefined4 *)(lVar3 + 0x54) = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x140);
    bVar1 = *(byte *)(lVar3 + 0x68);
    *(undefined1 *)(lVar3 + 0x68) = 1;
    FUN_10046c5ac(lVar3,1 - (uint)bVar1);
  }
  uVar5 = FUN_1010a0298(param_1,DAT_10184dab8);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  FUN_10046065c(uVar5,*(long *)(param_1 + 0x38) + 0x88);
  uVar5 = FUN_1010a0298(param_1,DAT_10184daa8);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  if ((*(byte *)(param_1 + 0x2f4) & 1) != 0) {
    uVar5 = FUN_1010a0298(param_1,DAT_10184e000);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    if (*(char *)(DAT_101d23a68 + 0x4f) != '\0') {
      for (lVar3 = *(long *)(param_1 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
        if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dea0) goto LAB_1003d8710;
      }
      lVar3 = FUN_1010a0298(param_1);
      if (lVar3 != 0) {
        FUN_1004634e0(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x90));
      }
    }
LAB_1003d8710:
    lVar3 = FUN_1010a0298(param_1,DAT_10184e150);
    if (*(char *)(DAT_101d23a68 + 0x51) == '\0') {
      iVar2 = FUN_10034ec90(*(undefined4 *)(param_1 + 0x260));
      if ((iVar2 == 0) || (**(long **)(*(long *)(param_1 + 0x38) + 0x198) == 0)) {
        *(undefined4 *)(lVar3 + 0x28) = 0xfe;
      }
      else {
        *(undefined4 *)(lVar3 + 0x28) = 0;
        FUN_1004706bc(lVar3);
      }
    }
    plVar4 = *(long **)(param_1 + 0x50);
    if (((plVar4 != (long *)0x0) && (iVar2 = *(int *)(param_1 + 0x260), iVar2 != -1)) &&
       (DAT_101e47e88 == '\x01')) {
      lVar3 = 8;
      do {
        if (*(int *)(DAT_101e47e80 + lVar3) == iVar2) {
          uVar5 = FUN_10034ede0(iVar2,1);
          (**(code **)(*plVar4 + 0x188))(plVar4,uVar5);
          break;
        }
        lVar3 = lVar3 + 200;
      } while (lVar3 != 0xc88);
    }
  }
  uVar5 = FUN_1010a0298(param_1,DAT_10184dda8);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  if (param_2 < 3) {
    FUN_10046211c(param_1 + 0x88,*(undefined4 *)(&DAT_101159fec + (long)(int)param_2 * 4),0,0);
  }
  FUN_100043908(param_1);
  return;
}




void FUN_1003d881c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_101d23a38 == '\0') {
switchD_1003d8874_caseD_4:
    return;
  }
  lVar1 = FUN_1003e10f0();
  FUN_10046604c(param_1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88));
  switch(**(undefined4 **)(param_1 + 0x38)) {
  case 0:
    puVar2 = (undefined8 *)(lVar1 + 0x100);
    break;
  case 1:
    puVar2 = (undefined8 *)(lVar1 + 0x108);
    break;
  case 2:
    puVar2 = (undefined8 *)(lVar1 + 0x120);
    break;
  case 3:
    puVar2 = (undefined8 *)(lVar1 + 0x118);
    break;
  default:
    goto switchD_1003d8874_caseD_4;
  case 5:
  case 9:
    puVar2 = (undefined8 *)(lVar1 + 0x110);
  }
  FUN_10046604c(param_1,*puVar2);
  return;
}




void FUN_1003d88bc(long param_1)

{
  long lVar1;
  undefined4 local_40;
  float local_3c;
  undefined4 uStack_38;
  long local_30;
  undefined4 local_28;
  
  if ((DAT_101d23a38 != '\0') && (*(char *)(*(long *)(param_1 + 0x38) + 0x80) != '\0')) {
    local_40 = *(undefined4 *)(param_1 + 0x250);
    uStack_38 = *(undefined4 *)(param_1 + 600);
    local_3c = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
    lVar1 = FUN_1010a0298(param_1,DAT_101867380);
    local_30 = lVar1 + 0x28;
    local_28 = *(undefined4 *)(lVar1 + 0x30);
    FUN_10034d3e8(DAT_101e47e78,DAT_101867380,lVar1 + 0x34,&local_30,&local_40);
  }
  return;
}




void FUN_1003d8948(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar5 = DAT_101e943c0;
  fVar14 = DAT_101e94300;
  lVar7 = *(long *)(param_1 + 0x40);
  fVar13 = *(float *)(lVar7 + 0x18c) + *(float *)(lVar7 + 0x18c) * *(float *)(lVar7 + 0x2f4);
  fVar17 = *(float *)(lVar7 + 0x240) + 1.0;
  NEON_fminnm((fVar13 + *(float *)(lVar7 + 0xd8)) * fVar17,DAT_101e943c0);
  uVar8 = (uint)DAT_101e94300;
  if (0xb < uVar8) {
    return;
  }
  uVar1 = 0xc - uVar8;
  if (param_2 <= 0xc - uVar8) {
    uVar1 = param_2;
  }
  fVar12 = (float)(int)uVar1;
  uVar10 = uVar8;
  if (0 < (int)uVar1) {
    fVar15 = *(float *)(lVar7 + 0xd8) + fVar12;
    *(float *)(lVar7 + 0xd8) = fVar15;
    *(ulong *)(lVar7 + 0x348) = *(ulong *)(lVar7 + 0x348) | 0x10000000000;
    NEON_fminnm((fVar13 + fVar15) * fVar17,uVar5);
    uVar10 = (uint)fVar14;
    if (0xb < uVar10) {
      uVar10 = 0xc;
    }
  }
  lVar9 = *(long *)(param_1 + 0x38);
  fVar14 = (float)(int)(uVar10 - 1);
  fVar17 = *(float *)(lVar9 + 0xe0) + fVar14 * *(float *)(lVar9 + 0xe4);
  fVar13 = *(float *)(lVar9 + 0xf0) + fVar14 * *(float *)(lVar9 + 0xf4);
  if (uVar10 - 1 == 0) {
    *(undefined4 *)(lVar7 + 0x50) = 0;
    uVar11 = *(ulong *)(lVar7 + 0x348);
    *(undefined4 *)(lVar7 + 0xd4) = 0;
    *(undefined4 *)(lVar7 + 0x9c) = 0;
    *(undefined8 *)(lVar7 + 0xdc) = 0;
    *(undefined4 *)(lVar7 + 0xac) = 0;
    *(undefined8 *)(lVar7 + 0xcc) = 0;
    *(undefined4 *)(lVar7 + 0xb0) = *(undefined4 *)(lVar9 + 0x188);
    *(undefined4 *)(lVar7 + 0xb4) = *(undefined4 *)(lVar9 + 0x18c);
    fVar15 = *(float *)(lVar7 + 0x16c) + *(float *)(lVar7 + 0x16c) * *(float *)(lVar7 + 0x2d4);
    NEON_fminnm(fVar15 + fVar15 * *(float *)(lVar7 + 0x220),DAT_101e943a0);
    fVar15 = (float)NEON_fminnm(*(undefined4 *)(lVar7 + 0x318),DAT_101e942e0);
    fVar16 = 0.0;
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(lVar7 + 0x318) = fVar15;
    *(undefined8 *)(lVar7 + 0xb8) = 0;
    *(undefined8 *)(lVar7 + 0xc0) = 0;
    *(ulong *)(lVar7 + 0x348) = uVar11 | 0x6efe2000040;
    *(undefined4 *)(lVar7 + 200) = 0;
    fVar18 = *(float *)(lVar7 + 0x198) + *(float *)(lVar7 + 0x198) * *(float *)(lVar7 + 0x300);
    fVar18 = fVar18 + fVar18 * *(float *)(lVar7 + 0x24c);
    fVar19 = (float)NEON_fminnm(fVar18,DAT_101e943cc);
    fVar15 = DAT_101e94308._4_4_;
    if (DAT_101e94308._4_4_ <= fVar19) {
      fVar15 = fVar19;
    }
    fVar15 = (float)NEON_fminnm(*(undefined4 *)(lVar7 + 0x314),fVar15);
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(lVar7 + 0x314) = fVar15;
    *(undefined8 *)(lVar7 + 0x6c) = 0;
    *(undefined8 *)(lVar7 + 0x94) = 0;
    *(undefined8 *)(lVar7 + 0xe4) = 0;
    fVar19 = *(float *)(lVar7 + 0x19c) + *(float *)(lVar7 + 0x19c) * *(float *)(lVar7 + 0x304);
    fVar19 = fVar19 + fVar19 * *(float *)(lVar7 + 0x250);
    fVar20 = (float)NEON_fminnm(fVar19,DAT_101e943d0);
    fVar15 = DAT_101e94310;
    if (DAT_101e94310 <= fVar20) {
      fVar15 = fVar20;
    }
    fVar15 = (float)NEON_fminnm(*(undefined4 *)(lVar7 + 0x30c),fVar15);
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(lVar7 + 0x30c) = fVar15;
    *(undefined4 *)(lVar7 + 0x84) = 0x3f800000;
    *(undefined4 *)(lVar7 + 0x134) = *(undefined4 *)(lVar9 + 0x150);
    uVar5 = DAT_101e943cc;
    fVar15 = DAT_101e94308._4_4_;
    uVar11 = uVar11 | 0x1effe38c6040;
    NEON_fminnm(fVar19,DAT_101e943d0);
    fVar19 = (float)NEON_fminnm(DAT_101e94310,0);
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    *(float *)(lVar7 + 0x30c) = fVar19;
    NEON_fminnm(fVar18,uVar5);
    fVar15 = (float)NEON_fminnm(fVar15,0);
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(lVar7 + 0x314) = fVar15;
    *(undefined8 *)(lVar7 + 0x32c) = 0;
    *(undefined8 *)(lVar7 + 0x33c) = 0;
    *(undefined8 *)(lVar7 + 0x334) = 0;
    *(undefined4 *)(lVar7 + 0x344) = 0;
    fVar24 = *(float *)(lVar7 + 0x308);
    fVar22 = *(float *)(lVar7 + 0x310);
    fVar18 = *(float *)(lVar7 + 0xec) + *(float *)(lVar7 + 0xec) * *(float *)(lVar7 + 0x254);
    fVar19 = *(float *)(lVar7 + 0x1a0) + 1.0;
    fVar21 = *(float *)(lVar7 + 0xf4) + *(float *)(lVar7 + 0xf4) * *(float *)(lVar7 + 0x25c);
    fVar23 = *(float *)(lVar7 + 0x1a8) + 1.0;
    fVar15 = fVar13;
    fVar20 = fVar17;
  }
  else {
    fVar18 = *(float *)(lVar7 + 0xec) + *(float *)(lVar7 + 0xec) * *(float *)(lVar7 + 0x254);
    fVar19 = *(float *)(lVar7 + 0x1a0) + 1.0;
    NEON_fminnm((fVar18 + *(float *)(lVar7 + 0x38)) * fVar19,DAT_101e94320);
    fVar15 = 1.0;
    if (0.0 < DAT_101e94260) {
      fVar15 = *(float *)(lVar7 + 0x308) / DAT_101e94260;
    }
    fVar21 = *(float *)(lVar7 + 0xf4) + *(float *)(lVar7 + 0xf4) * *(float *)(lVar7 + 0x25c);
    fVar23 = *(float *)(lVar7 + 0x1a8) + 1.0;
    fVar22 = (float)NEON_fminnm((fVar21 + *(float *)(lVar7 + 0x40)) * fVar23,DAT_101e94328);
    fVar20 = DAT_101e94268;
    if (DAT_101e94268 <= fVar22) {
      fVar20 = fVar22;
    }
    fVar22 = *(float *)(lVar7 + 0x310);
    fVar16 = fVar22 / fVar20;
    if (fVar20 <= 0.0) {
      fVar16 = 1.0;
    }
    fVar24 = *(float *)(lVar7 + 0x308);
    fVar20 = fVar24 + fVar15 * *(float *)(lVar9 + 0xe4) * fVar12 * fVar19;
    fVar15 = fVar22 + fVar16 * *(float *)(lVar9 + 0xf4) * fVar12 * fVar23;
    fVar16 = *(float *)(lVar7 + 0xd4) +
             *(float *)(lVar7 + 0x188) * (*(float *)(lVar7 + 0x2f0) + 1.0);
    NEON_fminnm(fVar16 + fVar16 * *(float *)(lVar7 + 0x23c),DAT_101e943bc);
    fVar16 = *(float *)(lVar7 + 0x328) - DAT_101e942fc;
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    uVar11 = *(ulong *)(lVar7 + 0x348);
  }
  uVar6 = DAT_101e94328;
  uVar5 = DAT_101e94320;
  fVar4 = DAT_101e94268;
  fVar3 = DAT_101e94260;
  *(float *)(lVar7 + 0x38) = fVar17;
  NEON_fminnm((fVar18 + fVar17) * fVar19,uVar5);
  fVar17 = (float)NEON_fminnm(fVar24,fVar3);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  *(float *)(lVar7 + 0x308) = fVar17;
  *(float *)(lVar7 + 0x40) = fVar13;
  NEON_fminnm((fVar21 + fVar13) * fVar23,uVar6);
  fVar13 = (float)NEON_fminnm(fVar22,fVar4);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  *(float *)(lVar7 + 0x310) = fVar13;
  *(float *)(lVar7 + 0x3c) = *(float *)(lVar9 + 0xe8) + fVar14 * *(float *)(lVar9 + 0xec);
  *(float *)(lVar7 + 0x44) = *(float *)(lVar9 + 0xf8) + fVar14 * *(float *)(lVar9 + 0xfc);
  *(float *)(lVar7 + 0x48) = *(float *)(lVar9 + 0x100) + fVar14 * *(float *)(lVar9 + 0x104);
  *(float *)(lVar7 + 0x4c) = *(float *)(lVar9 + 0x108) + fVar14 * *(float *)(lVar9 + 0x10c);
  *(float *)(lVar7 + 0x54) = *(float *)(lVar9 + 0x110) + fVar14 * *(float *)(lVar9 + 0x114);
  *(float *)(lVar7 + 0x58) = *(float *)(lVar9 + 0x118) + fVar14 * *(float *)(lVar9 + 0x11c);
  *(undefined4 *)(lVar7 + 0x5c) = *(undefined4 *)(lVar9 + 0x120);
  *(undefined4 *)(lVar7 + 0x60) = 0;
  *(undefined4 *)(lVar7 + 100) = *(undefined4 *)(lVar9 + 0x124);
  *(undefined4 *)(lVar7 + 0x68) = 0;
  *(float *)(lVar7 + 0x74) = *(float *)(lVar9 + 300) + fVar14 * *(float *)(lVar9 + 0x130);
  *(undefined4 *)(lVar7 + 0x78) = *(undefined4 *)(lVar9 + 0x128);
  *(undefined4 *)(lVar7 + 0x7c) = *(undefined4 *)(lVar9 + 0x144);
  *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(lVar9 + 0x14c);
  *(float *)(lVar7 + 0x88) = *(float *)(lVar9 + 0x160) + fVar14 * *(float *)(lVar9 + 0x164);
  *(undefined4 *)(lVar7 + 0x90) = *(undefined4 *)(lVar9 + 0x16c);
  *(float *)(lVar7 + 0x8c) = *(float *)(lVar9 + 0x168) + fVar14 * *(float *)(lVar9 + 0x16c);
  *(float *)(lVar7 + 0xa0) = *(float *)(lVar9 + 0x170) + fVar14 * *(float *)(lVar9 + 0x174);
  *(float *)(lVar7 + 0xa4) = *(float *)(lVar9 + 0x178) + fVar14 * *(float *)(lVar9 + 0x17c);
  *(float *)(lVar7 + 0xa8) = *(float *)(lVar9 + 0x180) + fVar14 * *(float *)(lVar9 + 0x184);
  *(ulong *)(lVar7 + 0x348) = uVar11 | 0x1c779fbf;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar14 = *(float *)(lVar7 + 0x38) + *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0);
  NEON_fminnm(fVar14 + fVar14 * *(float *)(lVar7 + 0x1a0),uVar5);
  fVar14 = (float)NEON_fminnm(fVar20,fVar3);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  *(float *)(lVar7 + 0x308) = fVar14;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar14 = *(float *)(lVar7 + 0x40) + *(float *)(lVar7 + 0xf4) * (*(float *)(lVar7 + 0x25c) + 1.0);
  NEON_fminnm(fVar14 + fVar14 * *(float *)(lVar7 + 0x1a8),uVar6);
  fVar14 = (float)NEON_fminnm(fVar15,fVar4);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  *(float *)(lVar7 + 0x310) = fVar14;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  *(float *)(lVar7 + 0x328) = fVar16;
  if (0 < (int)uVar1) {
    fVar14 = *(float *)(lVar9 + 0x154) * (float)(int)(uVar1 - (uVar8 == 0));
    if (0.0 < fVar14) {
      *(float *)(lVar7 + 0x134) = *(float *)(lVar7 + 0x134) + fVar14;
    }
    lVar7 = *(long *)(param_1 + 0x40);
    *(float *)(lVar7 + 0xac) = *(float *)(lVar7 + 0xac) + fVar12;
    *(ulong *)(lVar7 + 0x348) = *(ulong *)(lVar7 + 0x348) | 0x20000000;
  }
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x128))();
  }
  if (*(int *)(param_1 + 0x260) != -1) {
    FUN_100345eec(param_1,uVar10);
  }
  puVar2 = PTR_s_onActorLevelUpName_10185d598;
  if (((DAT_101d23a38 != '\0') && (*(long *)(param_1 + 0x60) != 0)) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x28), lVar7 != 0)) {
    do {
      FUN_10046a360(lVar7,puVar2);
      lVar7 = *(long *)(lVar7 + 0x350);
    } while (lVar7 != 0);
    for (lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x28); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x350)) {
      FUN_10046a0a0(lVar7);
    }
    if (param_1 == 0) {
      return;
    }
  }
  uVar8 = 0x10000;
  lVar7 = param_1;
LAB_1003d8f90:
  do {
    do {
      lVar9 = lVar7;
      if ((lVar9 != param_1) &&
         (lVar7 = FUN_1010a0918(*(undefined8 *)(lVar9 + 8),0x828f09a8), lVar7 != 0)) {
        (**(code **)(lVar7 + 8))(lVar9);
      }
      if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar7 = *(long *)(lVar9 + 0x18), lVar7 != 0)) {
        uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
        goto LAB_1003d8f90;
      }
      if ((uVar8 & 0xffff) == 0) goto LAB_1003d902c;
      lVar7 = *(long *)(lVar9 + 0x20);
    } while (*(long *)(lVar9 + 0x20) != 0);
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((lVar9 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) {
LAB_1003d902c:
      uVar8 = 0x10000;
      lVar7 = param_1;
LAB_1003d9034:
      do {
        do {
          lVar9 = lVar7;
          if ((lVar9 != param_1) &&
             (lVar7 = FUN_1010a0918(*(undefined8 *)(lVar9 + 8),0x15ad039b), lVar7 != 0)) {
            (**(code **)(lVar7 + 8))(lVar9);
          }
          if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar7 = *(long *)(lVar9 + 0x18), lVar7 != 0)) {
            uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
            goto LAB_1003d9034;
          }
          if ((uVar8 & 0xffff) == 0) {
            return;
          }
          lVar7 = *(long *)(lVar9 + 0x20);
        } while (*(long *)(lVar9 + 0x20) != 0);
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        uVar1 = uVar8 - 1 & 0xffff;
        if (uVar1 == 0) {
          return;
        }
        uVar8 = uVar1 | uVar8 & 0xffff0000;
        while (lVar7 = *(long *)(lVar9 + 0x20), lVar7 == 0) {
          if ((uVar8 - 1 & 0xffff) == 0) {
            return;
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
          if (lVar9 == 0) {
            return;
          }
        }
      } while( true );
    }
    uVar8 = uVar1 | uVar8 & 0xffff0000;
    while (lVar7 = *(long *)(lVar9 + 0x20), lVar7 == 0) {
      if ((uVar8 - 1 & 0xffff) == 0) goto LAB_1003d902c;
      lVar9 = *(long *)(lVar9 + 0x10);
      uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
      if (lVar9 == 0) goto LAB_1003d902c;
    }
  } while( true );
}




void FUN_1003d90d4(long param_1,undefined8 *param_2,float *param_3)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  float local_1c;
  undefined8 uStack_18;
  
  fVar2 = param_3[2] * 1.0 - param_3[1] * 0.0;
  fVar3 = *param_3 * 0.0 - param_3[2] * 0.0;
  fVar4 = param_3[1] * 0.0 - *param_3 * 1.0;
  fVar5 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  if (1e-08 <= fVar5) {
    fVar5 = 1.0 / SQRT(fVar5);
    fVar2 = fVar2 * fVar5;
    fVar3 = fVar3 * fVar5;
    fVar4 = fVar4 * fVar5;
  }
  else {
    fVar2 = 1.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
  }
  fVar5 = fVar3 * 0.0 - fVar4 * 1.0;
  fVar6 = fVar4 * 0.0 - fVar2 * 0.0;
  fVar7 = fVar2 * 1.0 - fVar3 * 0.0;
  fVar9 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  if (1e-08 <= fVar9) {
    fVar9 = 1.0 / SQRT(fVar9);
    fVar5 = fVar5 * fVar9;
    fVar6 = fVar6 * fVar9;
    fVar7 = fVar7 * fVar9;
  }
  else {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 1.0;
  }
  fVar9 = *(float *)(param_1 + 0x2e8) + *(float *)(*(long *)(param_1 + 0x38) + 100);
  uVar8 = *param_2;
  uVar10 = *(undefined4 *)(param_2 + 1);
  *(float *)(param_1 + 0x220) = fVar9 * fVar2;
  *(float *)(param_1 + 0x230) = fVar9 * 0.0;
  *(float *)(param_1 + 0x240) = fVar9 * fVar5;
  *(undefined8 *)(param_1 + 0x250) = uVar8;
  *(float *)(param_1 + 0x224) = fVar9 * fVar3;
  *(float *)(param_1 + 0x228) = fVar9 * fVar4;
  *(float *)(param_1 + 0x234) = fVar9 * 1.0;
  *(float *)(param_1 + 0x238) = fVar9 * 0.0;
  *(float *)(param_1 + 0x244) = fVar9 * fVar6;
  *(float *)(param_1 + 0x248) = fVar9 * fVar7;
  *(undefined4 *)(param_1 + 600) = uVar10;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
  uStack_48 = *(undefined8 *)(param_1 + 0x228);
  local_50 = *(undefined8 *)(param_1 + 0x220);
  uStack_38 = *(undefined8 *)(param_1 + 0x238);
  uStack_40 = *(undefined8 *)(param_1 + 0x230);
  uStack_28 = *(undefined8 *)(param_1 + 0x248);
  local_30 = *(undefined8 *)(param_1 + 0x240);
  uStack_18 = *(undefined8 *)(param_1 + 600);
  local_1c = (float)((ulong)*(undefined8 *)(param_1 + 0x250) >> 0x20);
  _uStack_20 = CONCAT44(local_1c + *(float *)(param_1 + 0x2ec),(int)*(undefined8 *)(param_1 + 0x250)
                       );
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x160))(plVar1,&local_50);
  }
  return;
}




undefined8 FUN_1003d926c(long param_1)

{
  char ***pppcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  char **local_48 [2];
  char local_31;
  
  FUN_1000ee4ec(local_48,*(undefined8 *)(DAT_101d23a68 + 8));
  lVar4 = *(long *)(param_1 + 0x38);
  plVar5 = *(long **)(lVar4 + 0x18);
  puVar3 = (undefined8 *)*plVar5;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      pppcVar1 = (char ***)local_48[0];
      if (-1 < local_31) {
        pppcVar1 = local_48;
      }
      iVar2 = _strcmp((char *)*puVar3,(char *)pppcVar1);
      if (iVar2 == 0) {
        puVar3 = (undefined8 *)(*plVar5 + 8);
        goto LAB_1003d92f8;
      }
      puVar3 = (undefined8 *)plVar5[1];
      plVar5 = plVar5 + 1;
    } while (puVar3 != (undefined8 *)0x0);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  iVar2 = FUN_1004d2524(*(undefined8 *)(lVar4 + 0x10));
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
LAB_1003d92f8:
    uVar6 = *puVar3;
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return uVar6;
}




void FUN_1003d932c(long param_1,ulong param_2,uint param_3,undefined1 param_4,undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x5c);
  pbVar8 = (byte *)(param_1 + uVar5 * 0x19 + (param_2 & 0xffffffff) + 0x28);
  bVar3 = *pbVar8;
  if (((bVar3 >> 1 & 1) == 0) || (param_3 == 2)) {
    *pbVar8 = (byte)param_3;
    lVar7 = param_1 + uVar5 * 0x19 + (param_2 & 0xffffffff);
    *(undefined1 *)(lVar7 + 0x30) = param_4;
    *(undefined1 *)(lVar7 + 0x38) = param_5;
    if (bVar3 == 2 || (param_3 & 2) == 0) {
      return;
    }
  }
  else {
    *pbVar8 = (byte)param_3;
    lVar7 = param_1 + uVar5 * 0x19 + (param_2 & 0xffffffff);
    *(undefined1 *)(lVar7 + 0x30) = param_4;
    *(undefined1 *)(lVar7 + 0x38) = param_5;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    iVar2 = *(int *)(*(long *)(lVar7 + 8) + 0xa4);
    if (iVar2 != DAT_10184dd68) {
      lVar7 = 0;
    }
    if ((param_3 >> 1 & 1) == 0) {
      if (iVar2 == DAT_10184dd68) {
        uVar9 = 0x10000;
        lVar4 = lVar7;
LAB_1003d93dc:
        do {
          do {
            lVar6 = lVar4;
            if ((lVar6 != lVar7) &&
               (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0x1f1b047c), lVar4 != 0)) {
              (**(code **)(lVar4 + 8))(lVar6);
            }
            if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar4 = *(long *)(lVar6 + 0x18), lVar4 != 0))
            {
              uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
              goto LAB_1003d93dc;
            }
            if ((uVar9 & 0xffff) == 0) {
              return;
            }
            lVar4 = *(long *)(lVar6 + 0x20);
          } while (*(long *)(lVar6 + 0x20) != 0);
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) {
            return;
          }
          uVar1 = uVar9 - 1 & 0xffff;
          if (uVar1 == 0) {
            return;
          }
          uVar9 = uVar1 | uVar9 & 0xffff0000;
          while (lVar4 = *(long *)(lVar6 + 0x20), lVar4 == 0) {
            if ((uVar9 - 1 & 0xffff) == 0) {
              return;
            }
            lVar6 = *(long *)(lVar6 + 0x10);
            uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
            if (lVar6 == 0) {
              return;
            }
          }
        } while( true );
      }
    }
    else if (iVar2 == DAT_10184dd68) {
      uVar9 = 0x10000;
      lVar4 = lVar7;
LAB_1003d9484:
      do {
        do {
          lVar6 = lVar4;
          if ((lVar6 != lVar7) &&
             (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0x243804e0), lVar4 != 0)) {
            (**(code **)(lVar4 + 8))(lVar6);
          }
          if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar4 = *(long *)(lVar6 + 0x18), lVar4 != 0)) {
            uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
            goto LAB_1003d9484;
          }
          if ((uVar9 & 0xffff) == 0) {
            return;
          }
          lVar4 = *(long *)(lVar6 + 0x20);
        } while (*(long *)(lVar6 + 0x20) != 0);
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        uVar1 = uVar9 - 1 & 0xffff;
        if (uVar1 == 0) {
          return;
        }
        uVar9 = uVar1 | uVar9 & 0xffff0000;
        while (lVar4 = *(long *)(lVar6 + 0x20), lVar4 == 0) {
          if ((uVar9 - 1 & 0xffff) == 0) {
            return;
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
          if (lVar6 == 0) {
            return;
          }
        }
      } while( true );
    }
  }
  return;
}




void FUN_1003d9534(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  
  if ((*(long *)(*(long *)(param_1 + 0x38) + 0x78) != 0) && (iVar1 = FUN_1004d2524(), iVar1 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    FUN_1003a4e5c(local_28,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78));
    uVar2 = FUN_1003e2b0c(uVar3,local_28[0]);
    FUN_100460c8c(*(long *)(param_1 + 0x58),
                  *(undefined8 *)(*(long *)(param_1 + 0x58) + (uVar2 & 0xffffffff) * 8 + 0x50));
    return;
  }
  return;
}




void FUN_1003d95ac(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497020;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = uVar1;
  return;
}




void FUN_1003d95d8(long param_1)

{
  uint uVar1;
  long lVar2;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 != 0) {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
    uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100348e5c(&local_30,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d9634(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar1 != 0) &&
     ((uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar2 == 0x1f ||
      (1 < *(ushort *)(lVar1 + uVar2 * 0x38 + 0x90) - 3)))) {
    for (lVar3 = *(long *)(lVar1 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == ram0x0001018672a0) {
        *(byte *)(lVar3 + 0x818) = *(byte *)(lVar3 + 0x818) & 0xfe;
        if (DAT_101d23a38 != '\0') {
          FUN_100466f74(lVar3);
        }
        FUN_1003c554c(lVar3,param_1 + 0x20,0);
        return;
      }
    }
    local_30 = *(undefined8 *)(lVar1 + 0x250);
    local_28 = *(undefined4 *)(lVar1 + 600);
    FUN_1003d90d4(lVar1,&local_30,param_1 + 0x20);
  }
  return;
}




void FUN_1003d970c(long param_1,long param_2)

{
  *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xfe;
  if (DAT_101d23a38 != '\0') {
    FUN_100466f74();
    return;
  }
  if (param_2 != 0) {
    FUN_1003dd334(0x3e800000);
    return;
  }
  return;
}




void FUN_1003d9738(long param_1)

{
  int iVar1;
  uint uVar2;
  uint local_28;
  uint uStack_24;
  uint local_20;
  ushort local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 2) {
    FUN_10034ab10(*(undefined4 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x20),
                  *(undefined1 *)(param_1 + 0x21),param_1 + 0x40,param_1 + 0x4c,param_1 + 0x30,
                  *(undefined4 *)(param_1 + 0x38),param_1 + 0x3c,*(undefined4 *)(param_1 + 0x54));
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      local_1a = *(undefined2 *)(param_1 + 0x20);
      local_18 = *(undefined1 *)(param_1 + 0x22);
      uVar2 = (*(uint *)(param_1 + 0x54) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x54) & 0xff00ff) << 8;
      local_28 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (*(uint *)(param_1 + 0x3c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x3c) & 0xff00ff) << 8;
      uStack_24 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (*(uint *)(param_1 + 0x58) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x58) & 0xff00ff) << 8;
      local_20 = uVar2 >> 0x10 | uVar2 << 0x10;
      local_1c = *(ushort *)(param_1 + 0x38) >> 8 | *(ushort *)(param_1 + 0x38) << 8;
      FUN_10034a8a4(&local_28,0);
    }
    return;
  }
  FUN_10034a9a4(*(undefined4 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x20),
                *(undefined1 *)(param_1 + 0x21),param_1 + 0x24,*(undefined4 *)(param_1 + 0x38),
                param_1 + 0x3c,*(undefined4 *)(param_1 + 0x54));
  return;
}




void FUN_1003d9810(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  lVar4 = FUN_100101c50(*(undefined1 *)(param_4 + 0x20));
  lVar5 = FUN_100101c50(*(undefined1 *)(param_4 + 0x21));
  if (lVar4 != 0 && lVar5 != 0) {
    iVar1 = *(int *)(param_4 + 0x1c);
    if (iVar1 == 2) {
      lVar6 = FUN_1003d99bc();
      if (lVar6 != 0) {
        if ((DAT_101d23a38 == '\0') &&
           (uVar8 = FUN_10034ea2c(*(undefined4 *)(lVar5 + 0x260)), (uVar8 & 1) == 0)) {
          local_60 = *(undefined4 *)(param_4 + 0x4c);
          param_2 = *(undefined4 *)(param_4 + 0x50);
          local_5c = 0;
          local_58 = param_2;
          FUN_1003d90d4(lVar5,param_4 + 0x40,&local_60);
        }
        uVar2 = *(undefined4 *)(param_4 + 0x38);
        uVar3 = *(undefined4 *)(param_4 + 0x54);
        local_60 = FUN_1003d9b18(lVar5,param_4 + 0x3c);
        local_5c = param_2;
        local_58 = param_3;
        FUN_1003d9c1c(*(undefined4 *)(param_4 + 0x58),lVar6,uVar2,uVar3,lVar4,lVar5,&local_60,
                      param_4 + 0x30);
      }
    }
    else if (iVar1 == 1) {
      lVar6 = FUN_1003d99bc();
      if (lVar6 != 0) {
        uVar2 = *(undefined4 *)(param_4 + 0x38);
        uVar3 = *(undefined4 *)(param_4 + 0x54);
        local_60 = FUN_1003d9b18(lVar5,param_4 + 0x3c);
        local_5c = param_2;
        local_58 = param_3;
        FUN_1003d9b80(*(undefined4 *)(param_4 + 0x58),lVar6,uVar2,uVar3,lVar4,lVar5,&local_60,
                      param_4 + 0x24);
      }
    }
    else if (((iVar1 == 0) && (lVar6 = FUN_100101c50(*(undefined1 *)(param_4 + 0x22)), lVar6 != 0))
            && (lVar7 = FUN_1003d99bc(), lVar7 != 0)) {
      uVar2 = *(undefined4 *)(param_4 + 0x38);
      uVar3 = *(undefined4 *)(param_4 + 0x54);
      local_60 = FUN_1003d9b18(lVar5,param_4 + 0x3c);
      local_5c = param_2;
      local_58 = param_3;
      FUN_1003d99fc(*(undefined4 *)(param_4 + 0x58),lVar7,uVar2,uVar3,lVar4,lVar5,&local_60,lVar6);
    }
  }
  return;
}




void FUN_1003d99bc(void)

{
  undefined8 local_18;
  
  FUN_1010a1958(&local_18,1,DAT_10184dac8,0);
  FUN_1010a0298(local_18,DAT_10184dec0);
  return;
}




void FUN_1003d99fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,float *param_7,long param_8)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_60;
  float local_58;
  
  fVar3 = *(float *)(param_8 + 0x250) - *param_7;
  fVar2 = (*(float *)(param_8 + 0x2ec) + *(float *)(param_8 + 0x254)) - param_7[1];
  local_58 = *(float *)(param_8 + 600) - param_7[2];
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + local_58 * local_58;
  if (1e-08 <= fVar4) {
    fVar4 = 1.0 / SQRT(fVar4);
    local_60 = CONCAT44(fVar2 * fVar4,fVar3 * fVar4);
    local_58 = local_58 * fVar4;
  }
  else {
    local_60 = 0x3f800000;
    local_58 = 0.0;
  }
  uVar1 = *(undefined4 *)(param_8 + 0x30);
  *(long *)(param_2 + 0xd8) = param_8 + 0x28;
  *(undefined4 *)(param_2 + 0xe0) = uVar1;
  *(undefined4 *)(param_2 + 0xe8) = 1;
  FUN_10047467c(param_2);
  FUN_1004740e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_60);
  return;
}




undefined4 FUN_1003d9b18(long param_1,int *param_2)

{
  undefined1 auStack_50 [48];
  undefined4 local_20;
  
  if (*param_2 == -0x7ee3623b || *param_2 == 0) {
    local_20 = *(undefined4 *)(param_1 + 0x250);
  }
  else {
    FUN_1003ab468(param_1,param_2,auStack_50);
  }
  return local_20;
}




void FUN_1003d9b80(long param_1)

{
  undefined8 *in_x6;
  undefined8 uVar1;
  
  uVar1 = *in_x6;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(in_x6 + 1);
  *(undefined8 *)(param_1 + 0xec) = uVar1;
  FUN_1004740e0();
  return;
}




void FUN_1003d9c1c(long param_1)

{
  undefined8 *in_x5;
  float *in_x6;
  float fVar1;
  float fVar2;
  float local_20;
  
  local_20 = *in_x6;
  fVar1 = in_x6[1];
  fVar2 = local_20 * local_20 + fVar1 * fVar1;
  if (1e-08 <= fVar2) {
    fVar2 = SQRT(fVar2);
    local_20 = local_20 / fVar2;
    fVar1 = fVar1 / fVar2;
  }
  else {
    local_20 = 1.0;
    fVar1 = 0.0;
  }
  fVar2 = *(float *)(in_x5 + 1);
  *(ulong *)(param_1 + 0xec) =
       CONCAT44((float)((ulong)*in_x5 >> 0x20) + 0.0,(float)*in_x5 + local_20 * 10000.0);
  *(float *)(param_1 + 0xf4) = fVar2 + fVar1 * 10000.0;
  FUN_1004740e0();
  return;
}




void FUN_1003d9ccc(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497090;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003d9ce8(long param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034a4b4(&local_18,0);
  return;
}




void FUN_1003d9d1c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  lVar4 = *(long *)(lVar3 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  lVar5 = *(long *)(lVar3 + 0x40);
  fVar7 = *(float *)(lVar5 + 0xac) + *(float *)(lVar5 + 0x160) * (*(float *)(lVar5 + 0x2c8) + 1.0);
  NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar5 + 0x214),DAT_101e94394);
  if (0.0 < DAT_101e942d4) {
    fVar7 = *(float *)(lVar5 + 0xd8) + *(float *)(lVar5 + 0x18c) * (*(float *)(lVar5 + 0x2f4) + 1.0)
    ;
    fVar6 = (float)NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar5 + 0x240),DAT_101e943c0);
    fVar7 = DAT_101e94300;
    if (DAT_101e94300 <= fVar6) {
      fVar7 = fVar6;
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    if (*(long *)(lVar4 + (ulong)uVar1 * 8 + 0x50) == 0) {
      fVar6 = 0.0;
    }
    else {
      uVar2 = FUN_10045f5b0();
      fVar6 = (float)uVar2;
    }
    if (fVar6 <= fVar7) {
      FUN_1003d9e58(lVar3,(ulong)uVar1);
      FUN_1003d9ff0(0xbf800000,lVar3,0x1d,0,0xffffffff);
      return;
    }
  }
  return;
}




void FUN_1003d9e44(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_10045f5b0();
    return;
  }
  return;
}




void FUN_1003d9e58(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_48 [2];
  
  FUN_100461490(*(undefined8 *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x58) + (param_2 & 0xffffffff) * 8 + 0x50);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(lVar4 + 0x238) >> 10 & 7;
    }
    pcVar6 = *(char **)(lVar4 + 0x200);
    if (pcVar6 == (char *)0x0) {
      if (*(long *)(lVar4 + 0x38) == 0) {
        pcVar6 = "<null>";
      }
      else {
        pcVar6 = *(char **)(*(long *)(lVar4 + 0x38) + 8);
      }
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x28);
    if (lVar4 != 0) {
      do {
        FUN_10046a0f8(lVar4,pcVar6,uVar5 - 1,uVar5);
        lVar4 = *(long *)(lVar4 + 0x350);
      } while (lVar4 != 0);
    }
    FUN_1003a4e5c(local_48,pcVar6);
    puVar2 = PTR_s_onAbilityUpgradedName_10185d550;
    lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x28);
    if (lVar4 != 0) {
      do {
        FUN_10046a418(lVar4,puVar2,local_48[0]);
        lVar4 = *(long *)(lVar4 + 0x350);
      } while (lVar4 != 0);
      if (param_1 == 0) {
        return;
      }
    }
  }
  uVar5 = 0xffff0000;
  lVar4 = param_1;
LAB_1003d9f38:
  do {
    do {
      lVar3 = lVar4;
      if ((lVar3 != param_1) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x443e06d8), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar3);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar4 = *(long *)(lVar3 + 0x18), lVar4 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003d9f38;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar4 = *(long *)(lVar3 + 0x20), lVar4 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003d9ff0(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined4 local_44;
  
  local_44 = param_1;
  FUN_100465300(*(undefined8 *)(param_2 + 0x40));
  puVar2 = PTR_s_onActorAttributesChangedName_10185d530;
  if ((*(long *)(param_2 + 0x60) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_2 + 0x60) + 0x28), lVar5 != 0)) {
    do {
      FUN_10046a7b8(lVar5,puVar2,param_3,param_4,&local_44);
      lVar5 = *(long *)(lVar5 + 0x350);
    } while (lVar5 != 0);
    if (param_2 == 0) {
      return;
    }
  }
  uVar4 = 0x10000;
  lVar5 = param_2;
LAB_1003da068:
  do {
    do {
      lVar3 = lVar5;
      if ((lVar3 != param_2) &&
         (lVar5 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x828f09a8), lVar5 != 0)) {
        (**(code **)(lVar5 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar5 = *(long *)(lVar3 + 0x18), lVar5 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1003da068;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar5 = *(long *)(lVar3 + 0x20), lVar5 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003da11c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014970c8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  return;
}




void FUN_1003da13c(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034a7a4(&local_20,0);
  return;
}




void FUN_1003da17c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x24));
  if (lVar1 != 0 && DAT_101d23a38 == '\0') {
    FUN_1003da2b0(0,lVar1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),1,1,1);
    if (DAT_101d23a39 == '\0') {
      FUN_1000367dc(lVar1,*(undefined4 *)(param_1 + 0x1c));
      return;
    }
    FUN_10004dacc(lVar1);
    plVar2 = (long *)(DAT_101e94198 + 0x10);
    plVar3 = (long *)*plVar2;
    plVar4 = plVar2;
    if (plVar3 != (long *)0x0) {
      do {
        if (*(uint *)(plVar3 + 4) >= 0xe4cbad13) {
          plVar4 = plVar3;
        }
        plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xe4cbad13];
      } while (plVar3 != (long *)0x0);
      if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xe4cbad14)) && ((int)plVar4[5] != 0)) {
        lVar1 = 0;
        uVar5 = 0;
        do {
          (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
          uVar5 = uVar5 + 1;
          lVar1 = lVar1 + 0x10;
        } while (uVar5 < *(uint *)(plVar4 + 5));
      }
    }
  }
  return;
}




void FUN_1003da2b0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  FUN_100465744(*(undefined8 *)(param_1 + 0x68));
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_1003da2e0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x1eca0469), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1003da2e0;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 == 0) || (uVar1 = uVar4 - 1 & 0xffff, uVar1 == 0)) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




undefined8 FUN_1003da398(void)

{
  return DAT_101e94198;
}




undefined8 *
FUN_1003da3a4(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 *param_10,undefined8 *param_11,undefined8 param_12,
             undefined8 param_13,long param_14,long param_15,long param_16,long param_17,
             long param_18,uint param_19,long param_20,long param_21,long param_22,long param_23,
             undefined8 param_24,undefined4 param_25,undefined8 param_26,undefined1 param_27,
             undefined8 param_28,undefined4 param_29,long param_30,long param_31,long param_32,
             undefined8 param_33,long param_34,long param_35,long param_36,undefined8 param_37,
             undefined8 param_38,undefined4 param_39)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  
  *param_2 = &PTR_FUN_101497100;
  param_2[1] = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_5;
  *(undefined1 *)(param_2 + 5) = param_6;
  *(undefined1 *)((long)param_2 + 0x29) = param_7;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x2c) = param_8;
  *(undefined4 *)(param_2 + 6) = param_9;
  uVar9 = *(undefined4 *)(param_10 + 1);
  *(undefined8 *)((long)param_2 + 0x34) = *param_10;
  *(undefined4 *)((long)param_2 + 0x3c) = uVar9;
  uVar5 = *param_11;
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_11 + 1);
  param_2[8] = uVar5;
  FUN_10045c628(param_2 + 10,param_12);
  uVar4 = 0;
  *(undefined1 *)(param_2 + 0x6d) = (undefined1)param_13;
  *(undefined1 *)((long)param_2 + 0x369) = param_13._1_1_;
  param_2[0x6e] = 0;
  *(undefined4 *)(param_2 + 0x6f) = param_13._4_4_;
  *(undefined4 *)((long)param_2 + 0x37c) = param_1;
  *(undefined4 *)(param_2 + 0x8e) = (undefined4)param_24;
  *(uint *)((long)param_2 + 0x474) = param_19;
  *(undefined4 *)(param_2 + 0x8f) = param_24._4_4_;
  *(undefined4 *)((long)param_2 + 0x47c) = param_25;
  *(undefined4 *)(param_2 + 0x93) = param_37._4_4_;
  *(undefined4 *)((long)param_2 + 0x49c) = (undefined4)param_37;
  param_2[0x94] = param_38;
  *(undefined4 *)(param_2 + 0x95) = param_39;
  param_2[0x96] = param_26;
  *(undefined1 *)(param_2 + 0x97) = param_27;
  param_2[0x98] = param_28;
  *(undefined4 *)(param_2 + 0x99) = param_29;
  *(undefined4 *)((long)param_2 + 0x52c) = (undefined4)param_33;
  lVar6 = 0x380;
  *(undefined4 *)(param_2 + 0xa6) = param_33._4_4_;
  while( true ) {
    if (uVar4 < param_19) {
      puVar7 = (undefined4 *)((long)param_2 + lVar6);
      *puVar7 = *(undefined4 *)(param_14 + uVar4 * 4);
      puVar7[10] = *(undefined4 *)(param_15 + uVar4 * 4);
      puVar7[0x14] = *(undefined4 *)(param_16 + uVar4 * 4);
      uVar10 = *(undefined4 *)(param_17 + uVar4 * 4);
      uVar9 = *(undefined4 *)(param_18 + uVar4 * 4);
    }
    else {
      uVar9 = 0;
      puVar7 = (undefined4 *)((long)param_2 + lVar6);
      *puVar7 = 0xffff;
      puVar7[10] = 0xffffffff;
      puVar7[0x14] = 0;
      uVar10 = 0;
    }
    *(undefined4 *)((long)param_2 + uVar4 * 4 + 0x420) = uVar10;
    *(undefined4 *)((long)param_2 + lVar6 + 0x78) = uVar9;
    if (uVar4 == 9) break;
    param_19 = *(uint *)((long)param_2 + 0x474);
    lVar6 = lVar6 + 4;
    uVar4 = uVar4 + 1;
  }
  uVar4 = 0;
  lVar6 = -0xc;
  do {
    if (uVar4 < *(uint *)(param_2 + 0x8e)) {
      *(undefined4 *)((long)param_2 + lVar6 + 0x454) = *(undefined4 *)(param_21 + uVar4 * 4);
      *(undefined4 *)((long)param_2 + lVar6 + 0x460) = *(undefined4 *)(param_20 + uVar4 * 4);
      *(undefined4 *)((long)param_2 + uVar4 * 4 + 0x460) = *(undefined4 *)(param_22 + uVar4 * 4);
      uVar8 = *(undefined1 *)(param_23 + uVar4);
    }
    else {
      uVar8 = 0;
      *(undefined4 *)((long)param_2 + lVar6 + 0x454) = 0;
      *(undefined4 *)((long)param_2 + lVar6 + 0x460) = 0xffffffff;
      *(undefined4 *)((long)param_2 + uVar4 * 4 + 0x460) = 0;
    }
    *(undefined1 *)((long)param_2 + uVar4 + 0x46c) = uVar8;
    uVar4 = uVar4 + 1;
    lVar6 = lVar6 + 4;
  } while (uVar4 != 3);
  uVar4 = 0;
  uVar2 = *(uint *)(param_2 + 0x99);
  puVar7 = (undefined4 *)((long)param_2 + 0x4cc);
  do {
    if (uVar4 < uVar2) {
      *puVar7 = *(undefined4 *)(param_30 + uVar4 * 4);
      puVar7[8] = *(undefined4 *)(param_31 + uVar4 * 4);
      uVar9 = *(undefined4 *)(param_32 + uVar4 * 4);
    }
    else {
      uVar9 = 0;
      *puVar7 = 0;
      puVar7[8] = 0;
    }
    puVar7[0x10] = uVar9;
    uVar4 = uVar4 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar4 != 8);
  if (((param_34 == 0) && (param_35 == 0)) && (param_36 == 0)) {
    param_2[0x90] = param_2[0x90] | 0x101010101010101;
    param_2[0x91] = 0;
    param_2[0x92] = 0;
    *(byte *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x29) + 0x488) =
         *(byte *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x29) + 0x488) | 1;
  }
  else {
    lVar6 = 0;
    do {
      puVar1 = (undefined1 *)((long)param_2 + lVar6 + 0x490);
      puVar1[-0x10] = *(undefined1 *)(param_34 + lVar6);
      puVar1[-8] = *(undefined1 *)(param_35 + lVar6);
      *puVar1 = *(undefined1 *)(param_36 + lVar6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 8);
  }
  if (DAT_101d23a38 != '\0') {
    local_88 = 0x3e80000000000000;
    local_80 = 0;
    local_8c = *(undefined4 *)(param_2 + 7);
    iVar3 = FUN_10054e07c(*(undefined4 *)(param_2 + 0x93),(undefined8 *)((long)param_2 + 0x34),
                          &local_8c,0,&local_88);
    if (iVar3 != 0) {
      *(undefined4 *)(param_2 + 7) = local_8c;
    }
  }
  return param_2;
}




void FUN_1003da7c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1003da3a4(param_1,param_2,param_3);
  return;
}




void FUN_1003da8c0(long param_1)

{
  if (DAT_101d23a38 != '\0') {
    FUN_10012026c(*(undefined4 *)(param_1 + 0x37c),*(undefined4 *)(param_1 + 0x1c),
                  *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                  *(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29),
                  *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),param_1 + 0x34,
                  param_1 + 0x40,param_1 + 0x50,*(undefined1 *)(param_1 + 0x368),param_1 + 0x380,
                  param_1 + 0x3a8,param_1 + 0x3d0,param_1 + 0x420,param_1 + 0x3f8,
                  *(undefined4 *)(param_1 + 0x474),param_1 + 0x454,param_1 + 0x448,param_1 + 0x460,
                  param_1 + 0x46c,*(undefined4 *)(param_1 + 0x470),*(undefined4 *)(param_1 + 0x47c),
                  param_1 + 0x4cc,param_1 + 0x4ec,param_1 + 0x50c,*(undefined4 *)(param_1 + 0x52c),
                  param_1 + 0x480,param_1 + 0x488,param_1 + 0x490,*(undefined4 *)(param_1 + 0x49c),1
                 );
  }
  return;
}




void FUN_1003daa1c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined8 local_2b0;
  long local_2a8;
  long local_2a0 [70];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar7 = FUN_100345d90(*(undefined4 *)(param_1 + 0x24));
  if (lVar7 != 0) goto LAB_1003db094;
  local_2a8 = 0;
  FUN_1010a15e0(**(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x1c) * 8),
                &local_2a8,1,0);
  lVar7 = local_2a8;
  *(undefined4 *)(local_2a8 + 0x260) = *(undefined4 *)(param_1 + 0x24);
  *(undefined1 *)(local_2a8 + 0x300) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(local_2a8 + 0x264) = *(undefined1 *)(param_1 + 0x29);
  iVar5 = *(int *)(local_2a8 + 0x268);
  *(undefined4 *)(local_2a8 + 0x268) = *(undefined4 *)(param_1 + 0x1c);
  if (iVar5 == 0) {
    FUN_100345e3c(local_2a8);
  }
  *(ushort *)(lVar7 + 0x301) =
       *(ushort *)(lVar7 + 0x301) & 0xfc00 | (ushort)*(undefined4 *)(param_1 + 0x478) & 0x3ff;
  lVar8 = FUN_100345d90(*(undefined4 *)(param_1 + 0x49c));
  uVar11 = DAT_101dc0b88;
  if (lVar8 == 0) {
    *(undefined8 *)(lVar7 + 0x2d0) = 0;
  }
  else {
    *(long *)(lVar7 + 0x2d0) = lVar8 + 0x28;
    uVar11 = *(undefined4 *)(lVar8 + 0x30);
  }
  *(undefined4 *)(lVar7 + 0x2d8) = uVar11;
  if ((*(int *)(param_1 + 0x24) != -1) && (DAT_101e47e88 == '\x01')) {
    lVar8 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar8 + 8) == *(int *)(param_1 + 0x24)) {
        *(undefined4 *)(DAT_101e47e80 + lVar8 + 0x8c) = *(undefined4 *)(param_1 + 0x1c);
        break;
      }
      lVar8 = lVar8 + 200;
    } while (lVar8 != 0xc80);
  }
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_1010a02e4(lVar7);
    *(undefined8 *)(param_1 + 0x4c0) = 0;
  }
  local_2b0 = 0;
  FUN_1010a1958(&local_2b0,1,DAT_10184dac8,0);
  if ((*(uint *)(param_1 + 0x1c) != 0xffff) &&
     (lVar8 = FUN_10034be08(**(undefined8 **)
                              (**(long **)(DAT_101d90978 + 0x40) +
                              (ulong)*(uint *)(param_1 + 0x1c) * 8)), lVar8 != 0)) {
    iVar5 = *(int *)(lVar8 + 0x90);
    iVar3 = *(int *)(lVar8 + 0x94);
    uVar11 = 5;
    if (iVar3 < iVar5 && *(int *)(lVar8 + 0x8c) < iVar5) {
      uVar11 = 1;
    }
    uVar2 = 0;
    if (iVar3 <= iVar5 || iVar3 <= *(int *)(lVar8 + 0x8c)) {
      uVar2 = uVar11;
    }
    *(undefined4 *)(lVar7 + 0x274) = uVar2;
  }
  lVar8 = DAT_101e47e80;
  if (((*(int *)(param_1 + 0x2c) != 0xff) && (iVar5 = *(int *)(param_1 + 0x24), iVar5 != -1)) &&
     (DAT_101e47e88 == '\x01')) {
    lVar12 = 8;
    do {
      if (*(int *)(DAT_101e47e80 + lVar12) == iVar5) {
        lVar12 = 0;
        goto LAB_1003dac2c;
      }
      lVar12 = lVar12 + 200;
    } while (lVar12 != 0xc88);
  }
  goto LAB_1003dac7c;
code_r0x0001003daeb4:
  lVar8 = *(long *)(lVar8 + 0x20);
  if (lVar8 == 0) goto LAB_1003daeec;
  goto LAB_1003daea4;
  while (lVar12 = lVar12 + 200, lVar12 != 0xc80) {
LAB_1003dac2c:
    if (*(int *)(DAT_101e47e80 + lVar12 + 8) == iVar5) {
      *(int *)(DAT_101e47e80 + lVar12 + 0x94) = *(int *)(param_1 + 0x2c);
      break;
    }
  }
  lVar12 = 0;
  do {
    if (*(int *)(lVar8 + lVar12 + 8) == iVar5) {
      *(undefined4 *)(lVar8 + lVar12 + 0x98) = *(undefined4 *)(param_1 + 0x30);
      break;
    }
    lVar12 = lVar12 + 200;
  } while (lVar12 != 0xc80);
LAB_1003dac7c:
  FUN_1003d84a4(lVar7,*(undefined4 *)(param_1 + 0x378),param_1 + 0x20,
                *(undefined4 *)(param_1 + 0x498),param_1 + 0x34,param_1 + 0x40);
  FUN_1003d881c(lVar7);
  if (*(int *)(param_1 + 0x378) == 0) {
    FUN_1003d88bc(lVar7);
  }
  if (*(char *)(param_1 + 0x368) == '\0') {
    FUN_100465410(*(undefined8 *)(lVar7 + 0x40),param_1 + 0x50);
  }
  if (*(long *)(param_1 + 0x4c0) == 0) {
    FUN_1003db0d0(lVar7,*(undefined4 *)(param_1 + 0x4c8),param_1 + 0x4cc,param_1 + 0x4ec,
                  param_1 + 0x50c);
    if (*(int *)(param_1 + 0x52c) != 0) {
      FUN_1003db1c0(lVar7,*(int *)(param_1 + 0x52c),*(undefined4 *)(param_1 + 0x530));
    }
  }
  if (1 < *(uint *)(param_1 + 0x47c)) {
    uVar6 = 1;
    do {
      FUN_1003d8948(lVar7,1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x47c));
  }
  FUN_1003d90d4(lVar7,param_1 + 0x34,param_1 + 0x40);
  if (*(int *)(param_1 + 0x470) != 0) {
    FUN_100460fb4(*(undefined8 *)(lVar7 + 0x58),param_1 + 0x454,param_1 + 0x448,param_1 + 0x460,
                  param_1 + 0x46c);
  }
  if (DAT_101d23a38 == '\0') {
    FUN_100101bc8(lVar7,*(undefined1 *)(param_1 + 0x28));
  }
  if (*(char *)(param_1 + 0x368) == '\0') {
    if (*(int *)(param_1 + 0x474) != 0) {
      uVar13 = 0;
      puVar14 = (undefined4 *)(param_1 + 0x380);
      do {
        FUN_1003da2b0(puVar14[0x28],lVar7,*puVar14,puVar14[10],0,puVar14[0x14],puVar14[0x1e]);
        uVar13 = uVar13 + 1;
        puVar14 = puVar14 + 1;
      } while (uVar13 < *(uint *)(param_1 + 0x474));
    }
LAB_1003dae34:
    if (DAT_101d23a38 != '\0') {
      if (*(char *)(param_1 + 0x369) != '\0') {
        FUN_100101a34(lVar7,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
      }
      lVar8 = *(long *)(param_1 + 0x370);
      if (lVar8 == 0) {
        if (*(char *)(param_1 + 0x369) == '\0') {
          lVar8 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
        }
        else {
          lVar8 = FUN_1003d926c(lVar7);
        }
      }
      FUN_100101a30(lVar7,lVar8,*(undefined4 *)(param_1 + 0x478));
    }
  }
  else if (DAT_101d23a38 != '\0') {
    if (*(int *)(param_1 + 0x474) != 0) {
      uVar13 = 0;
      do {
        lVar8 = *(long *)(lVar7 + 0x18);
        while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184e000))) {
          lVar8 = *(long *)(lVar8 + 0x20);
        }
        lVar12 = param_1 + uVar13 * 4;
        iVar5 = FUN_1003db280(lVar8,*(undefined4 *)(lVar12 + 0x380));
        if (iVar5 != 0) {
          FUN_1003db330(lVar8,*(undefined4 *)(lVar12 + 0x380));
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_1 + 0x474));
    }
    goto LAB_1003dae34;
  }
  FUN_100101a38(lVar7);
  FUN_100101a3c(lVar7);
  lVar8 = *(long *)(lVar7 + 0x18);
  if (lVar8 != 0) {
LAB_1003daea4:
    if (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dda8) goto code_r0x0001003daeb4;
    lVar12 = 0;
    do {
      lVar10 = param_1 + lVar12;
      FUN_1003d932c(lVar8,(uint)lVar12 & 0xff,*(undefined1 *)(lVar10 + 0x480),
                    *(undefined1 *)(lVar10 + 0x488),*(undefined1 *)(lVar10 + 0x490));
      lVar12 = lVar12 + 1;
    } while (lVar12 != 8);
  }
LAB_1003daeec:
  FUN_1010a0298(lVar7,DAT_1018672b0);
  if (((*(byte *)(lVar7 + 0x2f4) & 1) != 0) && (*(int *)(param_1 + 0x378) - 1U < 2)) {
    lVar8 = FUN_1010a0298(lVar7,DAT_10184e110);
    *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(param_1 + 0x37c);
    *(undefined8 *)(lVar8 + 0x30) = 0;
  }
  if (DAT_101d23a38 != '\0') {
    (**(code **)(param_1 + 0x4b0))(lVar7,*(undefined1 *)(param_1 + 0x4b8));
  }
  if (*(code **)(param_1 + 0x4a0) != (code *)0x0) {
    (**(code **)(param_1 + 0x4a0))(lVar7,*(undefined4 *)(param_1 + 0x4a8));
  }
  FUN_1003d9534(lVar7);
  uVar6 = FUN_1010a1958(local_2a0,0x46,DAT_10184e3d0,0);
  if (uVar6 != 0) {
    uVar13 = 0;
    do {
      lVar8 = local_2a0[uVar13];
      if (lVar8 != 0) {
        uVar15 = 0xffff0000;
        lVar12 = lVar8;
LAB_1003daf9c:
        do {
          do {
            lVar10 = lVar12;
            if ((lVar10 != lVar8) &&
               (lVar12 = FUN_1010a0918(*(undefined8 *)(lVar10 + 8),0x377a062d), lVar12 != 0)) {
              (**(code **)(lVar12 + 8))(lVar10);
            }
            if (((uVar15 & 0xffff) < uVar15 >> 0x10) &&
               (lVar12 = *(long *)(lVar10 + 0x18), lVar12 != 0)) {
              uVar15 = uVar15 & 0xffff0000 | uVar15 + 1 & 0xffff;
              goto LAB_1003daf9c;
            }
            if ((uVar15 & 0xffff) == 0) goto LAB_1003db03c;
            lVar12 = *(long *)(lVar10 + 0x20);
          } while (*(long *)(lVar10 + 0x20) != 0);
          lVar10 = *(long *)(lVar10 + 0x10);
          if ((lVar10 == 0) || (uVar1 = uVar15 - 1 & 0xffff, uVar1 == 0)) break;
          uVar15 = uVar1 | uVar15 & 0xffff0000;
          while (lVar12 = *(long *)(lVar10 + 0x20), lVar12 == 0) {
            if ((uVar15 - 1 & 0xffff) == 0) goto LAB_1003db03c;
            lVar10 = *(long *)(lVar10 + 0x10);
            uVar15 = uVar15 & 0xffff0000 | uVar15 - 1 & 0xffff;
            if (lVar10 == 0) goto LAB_1003db03c;
          }
        } while( true );
      }
LAB_1003db03c:
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar6);
  }
  bVar4 = false;
  if (DAT_101d23a38 != '\0') {
    plVar9 = (long *)FUN_1010a0298(lVar7,DAT_1018672c0);
    (**(code **)(*plVar9 + 0x20))();
    bVar4 = DAT_101d23a38 != '\0';
  }
  if (((lVar7 != 0) && (!bVar4)) && (DAT_101d23a39 == '\0')) {
    FUN_1000366c8(*(undefined4 *)(lVar7 + 0x260));
  }
LAB_1003db094:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003db0d0(long param_1,uint param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long local_78 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar1 = *(long *)(param_1 + 0x18);
  do {
    if (lVar1 == 0) {
LAB_1003db190:
      if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dea0) {
      FUN_1004647ec(lVar1,local_78,8);
      if (param_2 != 0) {
        uVar2 = (ulong)param_2;
        plVar3 = local_78;
        do {
          lVar1 = *plVar3;
          if ((lVar1 != 0) && (*(int *)(lVar1 + 0x40) == *param_3)) {
            *(undefined4 *)(lVar1 + 0x50) = *param_4;
            *(bool *)(lVar1 + 0x58) = *param_5 != 0;
          }
          plVar3 = plVar3 + 1;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      goto LAB_1003db190;
    }
    lVar1 = *(long *)(lVar1 + 0x20);
  } while( true );
}




undefined8 FUN_1003db1c0(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dea0))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  iVar1 = FUN_1004648c0();
  if (iVar1 == param_2) {
    FUN_10046493c(lVar4);
    pcVar3 = "NoTalent";
    param_3 = 0;
  }
  else {
    if ((param_2 == 0) || (lVar2 = FUN_1003dff84(lVar4,param_2), *(char *)(lVar2 + 0x58) == '\0')) {
      return 0;
    }
    FUN_1004649e0(lVar4,lVar2);
    pcVar3 = *(char **)(lVar2 + 0x38);
  }
  FUN_100346130(param_1,pcVar3,param_3);
  return 1;
}




undefined8 FUN_1003db280(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (param_2 & 0xffffffff) * 8);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,uVar4,0);
  if ((((*(char *)(lVar2 + 0x34) != '\0') && (*(char *)(lVar2 + 0x19b) != '\0')) &&
      (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) &&
     ((uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 == 0x1f ||
      (1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3)))) {
    return 1;
  }
  uVar1 = FUN_10046e1cc(param_1,param_2);
  return uVar1;
}




void FUN_1003db330(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  int local_4c;
  int iStack_48;
  undefined4 local_44;
  
  uVar7 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  local_4c = (int)param_2;
  if ((int)uVar7 != 0) {
    plVar8 = (long *)(param_1 + 0x38);
    do {
      lVar9 = *plVar8;
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x48) == local_4c)) &&
         (uVar1 = *(uint *)(lVar9 + 0x50),
         (int)(uVar1 & 0xffff) < *(int *)(*(long *)(lVar9 + 0x28) + 0x38))) {
        *(uint *)(lVar9 + 0x50) = uVar1 & 0xffff0000 | uVar1 + 1 & 0xffff;
        lVar9 = *(long *)(param_1 + 0x10);
        if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184dd68) {
          lVar9 = 0;
        }
        local_44 = *(undefined4 *)(lVar9 + 0x260);
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_68 = &PTR_FUN_1014970c8;
        iStack_48 = 0xffffffff;
        FUN_1004976ec(&local_68,&DAT_101e47d30);
        return;
      }
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar10 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (param_2 & 0xffffffff) * 8);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,uVar10,0);
  lVar5 = FUN_1010a0298(param_1,DAT_1018673e0);
  iVar2 = *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xd8) = iVar2 + 1;
  FUN_10046d398(lVar5,lVar4,iVar2,param_2);
  lVar9 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184dd68) {
    lVar9 = 0;
  }
  local_44 = *(undefined4 *)(lVar9 + 0x260);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_1014970c8;
  iStack_48 = iVar2;
  FUN_1004976ec(&local_68,&DAT_101e47d30);
  if ((*(char *)(lVar4 + 0x19d) == '\0') && (iVar2 = FUN_10046e1cc(param_1,param_2), iVar2 != 0)) {
    FUN_10046d4b8(lVar5);
    uVar6 = *(ushort *)(param_1 + 0xdc);
    uVar7 = (ulong)(uVar6 >> 8) & 0x7f;
    if ((int)uVar7 != 0) {
      plVar8 = (long *)(param_1 + 0x38);
      do {
        if (*plVar8 == 0) {
          *plVar8 = lVar5;
          uVar6 = *(ushort *)(param_1 + 0xdc);
          break;
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *(ushort *)(param_1 + 0xdc) = uVar6 & 0xff00 | uVar6 + 1 & 0xff;
  }
  else if (((*(char *)(*(long *)(lVar5 + 0x28) + 0x34) != '\0') &&
           ((*(char *)(lVar4 + 0x19b) != '\0' && (*(long *)(lVar5 + 0x30) != 0)))) &&
          (iVar2 = FUN_10045f640(), iVar2 == 0)) {
    FUN_10046db68(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x260),0);
    FUN_1010a01dc(lVar5);
  }
  return;
}




void FUN_1003db55c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497138;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003db578(long param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100346c7c(&local_18,0);
  return;
}




void FUN_1003db5ac(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_1003d8948(lVar1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_1003db5e4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497170;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined4 *)((long)param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 6) = param_7;
  return;
}




void FUN_1003db608(long param_1)

{
  uint uVar1;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
    uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x2c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x2c) & 0xff00ff) << 8;
    local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x30) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x30) & 0xff00ff) << 8;
    uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100346d74(&local_28,0);
  }
  return;
}




void FUN_1003db668(long param_1)

{
  if (DAT_101d23a38 != '\0') {
    return;
  }
  FUN_10002c100(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  return;
}




void FUN_1003db68c(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  undefined1 local_14;
  
  local_14 = *(undefined1 *)(param_1 + 0x28);
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100348864(&local_20,0);
  return;
}




void FUN_1003db6d4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_10045fb68(*(undefined8 *)
                   (*(long *)(lVar1 + 0x58) + (ulong)*(uint *)(param_1 + 0x20) * 8 + 0x50),
                  *(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x28));
    return;
  }
  return;
}




void FUN_1003db71c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  undefined1 local_24;
  undefined1 local_23;
  char local_22;
  
  if ((DAT_101d23a38 != '\0') &&
     (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar2 != 0)) {
    local_22 = *(char *)(param_1 + 0x30);
    if (local_22 == '\0') {
      fVar4 = 0.0;
    }
    else {
      uVar3 = (ulong)*(uint *)(param_1 + 0x24);
      lVar2 = *(long *)(lVar2 + 0x40) + uVar3 * 4;
      fVar4 = *(float *)(lVar2 + 0x38) +
              *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
      fVar5 = (float)NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar2 + 0x1a0),(&DAT_101e94320)[uVar3]);
      fVar4 = (float)(&DAT_101e94260)[uVar3];
      if ((float)(&DAT_101e94260)[uVar3] <= fVar5) {
        fVar4 = fVar5;
      }
    }
    fVar5 = *(float *)(param_1 + 0x2c);
    if (1.1920929e-07 <= ABS(fVar5 - fVar4)) {
      uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
      local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
      uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = ((uint)fVar5 & 0xff00ff00) >> 8 | ((uint)fVar5 & 0xff00ff) << 8;
      local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
      local_24 = (undefined1)*(undefined4 *)(param_1 + 0x24);
      local_23 = (undefined1)*(undefined4 *)(param_1 + 0x28);
      FUN_100347e30(&local_30,0);
    }
  }
  return;
}




void thunk_FUN_1003db80c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_1003db860();
    return;
  }
  FUN_1003d9ff0(*(undefined4 *)(param_1 + 0x2c),lVar1,*(undefined4 *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_1003db80c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_1003db860();
    return;
  }
  FUN_1003d9ff0(*(undefined4 *)(param_1 + 0x2c),lVar1,*(undefined4 *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_1003db860(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined4 local_44;
  
  local_44 = param_1;
  FUN_100463154(*(undefined8 *)(param_2 + 0x40));
  puVar2 = PTR_s_onActorAttributesChangedName_10185d530;
  if ((*(long *)(param_2 + 0x60) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_2 + 0x60) + 0x28), lVar5 != 0)) {
    do {
      FUN_10046a7b8(lVar5,puVar2,param_3,param_4,&local_44);
      lVar5 = *(long *)(lVar5 + 0x350);
    } while (lVar5 != 0);
    if (param_2 == 0) {
      return;
    }
  }
  uVar4 = 0x10000;
  lVar5 = param_2;
LAB_1003db8d8:
  do {
    do {
      lVar3 = lVar5;
      if ((lVar3 != param_2) &&
         (lVar5 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x828f09a8), lVar5 != 0)) {
        (**(code **)(lVar5 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar5 = *(long *)(lVar3 + 0x18), lVar5 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1003db8d8;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar5 = *(long *)(lVar3 + 0x20), lVar5 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003db98c(long param_1)

{
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}




void FUN_1003db994(long param_1)

{
  *(undefined1 *)(param_1 + 0x2a) = 1;
  return;
}




void FUN_1003db9a0(long param_1)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  uint local_30;
  uint uStack_2c;
  undefined1 local_28;
  char local_27;
  undefined2 local_26;
  
  if ((DAT_101d23a38 != '\0') &&
     (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar2 != 0)) {
    local_27 = *(char *)(param_1 + 0x28);
    if (local_27 == '\0') {
      fVar4 = 0.0;
    }
    else {
      fVar4 = *(float *)(*(long *)(lVar2 + 0x40) + (ulong)*(uint *)(param_1 + 0x20) * 4 + 0x308);
    }
    fVar3 = *(float *)(param_1 + 0x24);
    if (1.1920929e-07 <= ABS(fVar3 - fVar4)) {
      local_26 = *(undefined2 *)(param_1 + 0x29);
      uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
      local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = ((uint)fVar3 & 0xff00ff00) >> 8 | ((uint)fVar3 & 0xff00ff) << 8;
      uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
      local_28 = (undefined1)*(undefined4 *)(param_1 + 0x20);
      FUN_100347f30(&local_30,0);
    }
  }
  return;
}




void FUN_1003dba48(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar3 == 0) {
    return;
  }
  plVar5 = *(long **)(lVar3 + 0x50);
  if ((plVar5 == (long *)0x0) || (*(int *)(param_1 + 0x20) != 6)) goto LAB_1003dbac8;
  if ((*(char *)(param_1 + 0x29) == '\0') ||
     (uVar4 = FUN_10034ea2c(*(undefined4 *)(param_1 + 0x1c)), (uVar4 & 1) == 0)) {
    if (*(char *)(param_1 + 0x2a) == '\0') goto LAB_1003dbac8;
    FUN_10034ee90();
    iVar1 = FUN_10034e738();
    iVar2 = FUN_10034e738(*(undefined4 *)(param_1 + 0x1c));
    if (iVar1 != iVar2) goto LAB_1003dbac8;
  }
  (**(code **)(*plVar5 + 0x120))(*(undefined4 *)(param_1 + 0x24),plVar5);
LAB_1003dbac8:
  FUN_1003dbaec(param_1);
  return;
}




void FUN_1003dbaec(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      FUN_1003dbb54(*(undefined4 *)(param_1 + 0x24));
      return;
    }
    if ((*(int *)(param_1 + 0x20) != 0) || (0.0 < *(float *)(*(long *)(lVar1 + 0x40) + 0x308))) {
      FUN_1003d7388(*(undefined4 *)(param_1 + 0x24));
      return;
    }
  }
  return;
}




void FUN_1003dbb54(float param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float local_44;
  
  fVar6 = param_1;
  if (param_1 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(*(long *)(param_2 + 0x40) + (param_3 & 0xffffffff) * 4 + 0x308) = fVar6;
  local_44 = param_1;
  FUN_100466b84();
  puVar2 = PTR_s_onActorResourcesChangedName_10185d560;
  if ((*(long *)(param_2 + 0x60) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_2 + 0x60) + 0x28), lVar5 != 0)) {
    do {
      FUN_10046a90c(lVar5,puVar2,param_3,&local_44);
      lVar5 = *(long *)(lVar5 + 0x350);
    } while (lVar5 != 0);
    if (param_2 == 0) {
      return;
    }
  }
  uVar4 = 0x10000;
  lVar5 = param_2;
LAB_1003dbbd0:
  do {
    do {
      lVar3 = lVar5;
      if ((lVar3 != param_2) &&
         (lVar5 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x786f093c), lVar5 != 0)) {
        (**(code **)(lVar5 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar5 = *(long *)(lVar3 + 0x18), lVar5 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1003dbbd0;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar5 = *(long *)(lVar3 + 0x20), lVar5 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003dbc84(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100347548(&local_20,0);
  return;
}




void FUN_1003dbcc4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    FUN_1003dbd28(*(undefined4 *)(param_1 + 0x24),lVar1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_1003dbd28(float param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(lVar1 + 0x30c) == param_3) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  *(float *)(lVar1 + 0x318) = param_1;
  if (*(float *)(lVar1 + 0x31c) < param_1) {
    *(float *)(lVar1 + 0x31c) = param_1;
  }
  *(uint *)(lVar1 + 0x340) =
       *(uint *)(lVar1 + 0x340) & 0xfffe0 | (uint)(param_1 < 0.0) << 4 |
       *(uint *)(lVar1 + 0x340) & 0xfff0000f;
  return;
}




void FUN_1003dbd80(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497288;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_1003dbda0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  plVar4 = (long *)(lVar3 + 0x18);
  do {
    lVar3 = *plVar4;
    plVar4 = (long *)(lVar3 + 0x20);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
  lVar3 = *(long *)(lVar3 + 0x28);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    do {
      if (*(uint *)(lVar3 + 0x30c) == uVar1) {
        if (*(int *)(lVar3 + 0x310) != 0) {
          return;
        }
        uVar2 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
        local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
        local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
        FUN_100347648(&local_30,0);
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x350);
    } while (lVar3 != 0);
  }
  return;
}




void FUN_1003dbe44(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x18);
    do {
      lVar1 = *plVar2;
      plVar2 = (long *)(lVar1 + 0x20);
    } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8);
    lVar1 = *(long *)(lVar1 + 0x28);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      do {
        if (*(int *)(lVar3 + 0x30c) == *(int *)(param_1 + 0x20)) {
          if (*(int *)(lVar3 + 0x310) != 0) {
            return;
          }
          do {
            if (*(int *)(lVar1 + 0x30c) == *(int *)(param_1 + 0x20)) {
              FUN_100469de8(lVar1,*(undefined4 *)(param_1 + 0x24));
              return;
            }
            lVar1 = *(long *)(lVar1 + 0x350);
          } while (lVar1 != 0);
          return;
        }
        lVar3 = *(long *)(lVar3 + 0x350);
      } while (lVar3 != 0);
    }
  }
  return;
}




void FUN_1003dbee4(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  plVar4 = (long *)(lVar3 + 0x18);
  do {
    lVar3 = *plVar4;
    plVar4 = (long *)(lVar3 + 0x20);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
  lVar3 = *(long *)(lVar3 + 0x28);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    lVar6 = lVar3;
    do {
      if (*(uint *)(lVar6 + 0x30c) == uVar1) {
        if (*(int *)(lVar6 + 0x310) != 0) {
          return;
        }
        uVar5 = *(uint *)(param_1 + 0x24);
        if (*(char *)(param_1 + 0x28) == '\0') {
          for (; *(uint *)(lVar3 + 0x30c) != uVar1; lVar3 = *(long *)(lVar3 + 0x350)) {
          }
          uVar5 = *(ushort *)(lVar3 + 0x344) + uVar5;
          uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        }
        uVar2 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
        local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar1 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
        FUN_100347748(&local_30,0);
        return;
      }
      lVar6 = *(long *)(lVar6 + 0x350);
    } while (lVar6 != 0);
  }
  return;
}




void FUN_1003dbfb4(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar3 + 0x18);
    do {
      lVar3 = *plVar5;
      plVar5 = (long *)(lVar3 + 0x20);
    } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
    lVar3 = *(long *)(lVar3 + 0x28);
    if (lVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      lVar6 = lVar3;
      do {
        if (*(int *)(lVar6 + 0x30c) == iVar1) {
          if (*(int *)(lVar6 + 0x310) != 0) {
            return;
          }
          uVar4 = *(uint *)(param_1 + 0x24);
          if (*(char *)(param_1 + 0x28) == '\0') {
            iVar2 = *(int *)(lVar3 + 0x30c);
            lVar6 = lVar3;
            while (iVar2 != iVar1) {
              lVar6 = *(long *)(lVar6 + 0x350);
              iVar2 = *(int *)(lVar6 + 0x30c);
            }
            uVar4 = *(ushort *)(lVar6 + 0x344) + uVar4;
            uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
          }
          do {
            if (*(int *)(lVar3 + 0x30c) == iVar1) {
              FUN_100469600(lVar3,uVar4,1);
              return;
            }
            lVar3 = *(long *)(lVar3 + 0x350);
          } while (lVar3 != 0);
          return;
        }
        lVar6 = *(long *)(lVar6 + 0x350);
      } while (lVar6 != 0);
    }
  }
  return;
}




void FUN_1003dc090(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014972f8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  return;
}




void FUN_1003dc0b8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_1003dc0c0(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x20));
  if (lVar3 == 0) {
    return;
  }
  plVar7 = (long *)(lVar3 + 0x18);
  do {
    lVar3 = *plVar7;
    plVar7 = (long *)(lVar3 + 0x20);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
  lVar3 = *(long *)(lVar3 + 0x28);
  if (lVar3 == 0) {
    return;
  }
  lVar8 = lVar3;
  while ((*(int *)(lVar8 + 0x314) != *(int *)(param_1 + 0x1c) || (*(int *)(lVar8 + 0x310) != 0))) {
    lVar8 = *(long *)(lVar8 + 0x350);
    if (lVar8 == 0) {
      return;
    }
  }
  iVar1 = *(int *)(lVar8 + 0x30c);
  if (iVar1 == -1) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 1:
    uVar11 = *(undefined4 *)(param_1 + 0x30);
    do {
      if (*(int *)(lVar3 + 0x30c) == iVar1) break;
      lVar3 = *(long *)(lVar3 + 0x350);
    } while (lVar3 != 0);
    puVar4 = (undefined4 *)
             (**(code **)(*(long *)(lVar3 + 0x168) + 0x10))
                       (lVar3 + 0x168,*(undefined4 *)(param_1 + 0x24));
    *puVar4 = uVar11;
    return;
  case 2:
    uVar11 = *(undefined4 *)(param_1 + 0x24);
    uVar9 = *(undefined4 *)(param_1 + 0x30);
    do {
      if (*(int *)(lVar3 + 0x30c) == iVar1) break;
      lVar3 = *(long *)(lVar3 + 0x350);
    } while (lVar3 != 0);
    break;
  case 3:
    uVar11 = *(undefined4 *)(param_1 + 0x24);
    uVar9 = *(undefined4 *)(param_1 + 0x30);
    do {
      if (*(int *)(lVar3 + 0x30c) == iVar1) break;
      lVar3 = *(long *)(lVar3 + 0x350);
    } while (lVar3 != 0);
    break;
  case 4:
    uVar2 = *(undefined1 *)(param_1 + 0x30);
    do {
      if (*(int *)(lVar3 + 0x30c) == iVar1) break;
      lVar3 = *(long *)(lVar3 + 0x350);
    } while (lVar3 != 0);
    puVar5 = (undefined1 *)
             (**(code **)(*(long *)(lVar3 + 0x168) + 0x10))
                       (lVar3 + 0x168,*(undefined4 *)(param_1 + 0x24));
    *puVar5 = uVar2;
    return;
  case 5:
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar11 = *(undefined4 *)(param_1 + 0x38);
    do {
      if (*(int *)(lVar3 + 0x30c) == iVar1) break;
      lVar3 = *(long *)(lVar3 + 0x350);
    } while (lVar3 != 0);
    puVar6 = (undefined8 *)
             (**(code **)(*(long *)(lVar3 + 0x168) + 0x10))
                       (lVar3 + 0x168,*(undefined4 *)(param_1 + 0x24));
    *puVar6 = uVar10;
    *(undefined4 *)(puVar6 + 1) = uVar11;
    return;
  default:
    return;
  }
  puVar4 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar3 + 0x168,uVar11);
  *puVar4 = uVar9;
  return;
}




void FUN_1003dc26c(long param_1)

{
  uint uVar1;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  undefined1 local_28;
  undefined8 local_27;
  undefined4 local_1f;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
  uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
  local_28 = (undefined1)*(undefined4 *)(param_1 + 0x2c);
  local_27 = *(undefined8 *)(param_1 + 0x30);
  local_1f = *(undefined4 *)(param_1 + 0x38);
  FUN_100347948(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003dc2f4(long param_1)

{
  if (*(char *)(param_1 + 0x3c) != '\0') {
    return;
  }
  FUN_1003dc0c0();
  return;
}




void FUN_1003dc304(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined4 *)(param_2 + 0x2c) = 1;
  return;
}




void FUN_1003dc314(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = 2;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_1003dc320(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = 3;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_1003dc32c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 5;
  return;
}




void FUN_1003dc348(long param_1)

{
  uint uVar1;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  undefined1 local_24;
  
  if (DAT_101d23a38 != '\0') {
    FUN_1003dc3ac();
    local_24 = *(undefined1 *)(param_1 + 0x28);
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100348764(&local_30,0);
  }
  return;
}




void FUN_1003dc3ac(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 local_38 [2];
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    local_38[0] = *(undefined4 *)(param_1 + 0x20);
    lVar1 = FUN_1003dc44c(lVar1,local_38);
    if (lVar1 != 0) {
      fVar3 = *(float *)(param_1 + 0x24);
      if (*(char *)(param_1 + 0x28) == '\0') {
        fVar2 = (float)FUN_10045f284(lVar1);
        fVar3 = fVar2 + fVar3;
      }
      FUN_1003dc4e8(fVar3,lVar1);
      return;
    }
  }
  return;
}




void FUN_1003dc438(void)

{
  if (DAT_101d23a38 != '\0') {
    return;
  }
  FUN_1003dc3ac();
  return;
}




void FUN_1003dc44c(undefined8 param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_25a8 [1200];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a0218(param_1,local_25a8,0x4b0,DAT_10184daf8);
  if (uVar1 != 0) {
    uVar3 = (ulong)uVar1;
    plVar4 = local_25a8;
    do {
      lVar2 = *plVar4;
      if (*(int *)(lVar2 + 0x50) == *param_2) goto LAB_1003dc4b8;
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar2 = 0;
LAB_1003dc4b8:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar2);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003dc4e8(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  
  plVar2 = *(long **)(param_2 + 0x40);
  fVar9 = (float)param_1;
  if (plVar2 == (long *)0x0) {
LAB_1003dc594:
    if (fVar9 <= 0.0) {
      return;
    }
    fVar9 = (float)(int)(*(byte *)(param_2 + 0x6a) - 1);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    FUN_10045fb90(param_2,(int)fVar9);
    FUN_10046c22c(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 0x48) != (int)plVar2[1]) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x48) = DAT_101dc0b88;
    goto LAB_1003dc594;
  }
  lVar3 = (**(code **)(*plVar2 + 0x10))();
  if (lVar3 == 0) goto LAB_1003dc594;
  plVar2 = *(long **)(param_2 + 0x40);
  uVar4 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_2 + 0x48) == (int)plVar2[1]) {
      uVar4 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      uVar4 = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined4 *)(param_2 + 0x48) = DAT_101dc0b88;
    }
  }
  uVar5 = FUN_1010a0324(uVar4);
  if ((uVar5 & 1) != 0) goto LAB_1003dc594;
  if (fVar9 <= 0.0) {
    fVar9 = (float)(*(byte *)(param_2 + 0x6a) + 1);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    FUN_10045fb90(param_2,(int)fVar9);
    FUN_10046c44c(param_2);
    return;
  }
  plVar2 = *(long **)(param_2 + 0x40);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_2 + 0x48) == (int)plVar2[1]) {
      (**(code **)(*plVar2 + 0x10))();
      plVar2 = *(long **)(param_2 + 0x40);
      if (plVar2 == (long *)0x0) {
        lVar3 = 0;
      }
      else if (*(int *)(param_2 + 0x48) == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        lVar3 = 0;
        *(undefined8 *)(param_2 + 0x40) = 0;
        *(undefined4 *)(param_2 + 0x48) = DAT_101dc0b88;
      }
      goto LAB_1003dc6a0;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x48) = DAT_101dc0b88;
  }
  lVar3 = 0;
LAB_1003dc6a0:
  if (fVar9 <= 0.0) {
    (**(code **)(**(long **)(lVar3 + 0x38) + 0x10))();
  }
  else {
    *(float *)(lVar3 + 0x44) = fVar9;
    if (*(float *)(lVar3 + 0x40) < fVar9) {
      *(float *)(lVar3 + 0x40) = fVar9;
    }
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    return;
  }
  uVar8 = 0xffff0000;
  lVar6 = lVar3;
LAB_1003dc700:
  do {
    do {
      lVar7 = lVar6;
      if ((lVar7 != lVar3) &&
         (lVar6 = FUN_1010a0918(*(undefined8 *)(lVar7 + 8),0x4c810744), lVar6 != 0)) {
        (**(code **)(lVar6 + 8))(lVar7);
      }
      if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar6 = *(long *)(lVar7 + 0x18), lVar6 != 0)) {
        uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
        goto LAB_1003dc700;
      }
      if ((uVar8 & 0xffff) == 0) {
        return;
      }
      lVar6 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      return;
    }
    uVar1 = uVar8 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar8 = uVar1 | uVar8 & 0xffff0000;
    while (lVar6 = *(long *)(lVar7 + 0x20), lVar6 == 0) {
      if ((uVar8 - 1 & 0xffff) == 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
      if (lVar7 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003dc7e4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497368;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_1003dc804(long param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined8 local_28;
  
  if (DAT_101d23a38 != '\0') {
    uVar3 = *(uint *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x24) == 1) {
      local_28 = 0;
      FUN_1010a1958(&local_28,1,DAT_10184de50,0);
      piVar2 = (int *)(**(code **)(*(long *)(local_28 + 0x28) + 0x10))
                                ((long *)(local_28 + 0x28),*(undefined4 *)(param_1 + 0x1c));
      uVar3 = *piVar2 + uVar3;
    }
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_28 = CONCAT44(uVar3 >> 0x10 | uVar3 << 0x10,uVar1 >> 0x10 | uVar1 << 0x10);
    FUN_100348128(&local_28,0);
  }
  return;
}




void FUN_1003dc894(long param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long local_2a0 [70];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  local_2a0[0] = 0;
  FUN_1010a1958(local_2a0,1,DAT_10184de50,0);
  piVar3 = (int *)(**(code **)(*(long *)(local_2a0[0] + 0x28) + 0x10))
                            ((long *)(local_2a0[0] + 0x28),*(undefined4 *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x24) == 1) {
    iVar5 = *piVar3 + *(int *)(param_1 + 0x20);
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) goto LAB_1003dc920;
    iVar5 = *(int *)(param_1 + 0x20);
  }
  *piVar3 = iVar5;
LAB_1003dc920:
  uVar2 = FUN_1010a1958(local_2a0,0x46,DAT_10184e3d0,0);
  if (uVar2 != 0) {
    uVar10 = 0;
    do {
      lVar11 = local_2a0[uVar10];
      if (lVar11 != 0) {
        uVar12 = 0xffff0000;
        lVar4 = lVar11;
LAB_1003dc95c:
        do {
          do {
            lVar6 = lVar4;
            if ((lVar6 != lVar11) &&
               (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0x583e07b0), lVar4 != 0)) {
              (**(code **)(lVar4 + 8))(lVar6);
            }
            if (((uVar12 & 0xffff) < uVar12 >> 0x10) &&
               (lVar4 = *(long *)(lVar6 + 0x18), lVar4 != 0)) {
              uVar12 = uVar12 & 0xffff0000 | uVar12 + 1 & 0xffff;
              goto LAB_1003dc95c;
            }
            if ((uVar12 & 0xffff) == 0) goto LAB_1003dc9fc;
            lVar4 = *(long *)(lVar6 + 0x20);
          } while (*(long *)(lVar6 + 0x20) != 0);
          lVar6 = *(long *)(lVar6 + 0x10);
          if ((lVar6 == 0) || (uVar1 = uVar12 - 1 & 0xffff, uVar1 == 0)) break;
          uVar12 = uVar1 | uVar12 & 0xffff0000;
          while (lVar4 = *(long *)(lVar6 + 0x20), lVar4 == 0) {
            if ((uVar12 - 1 & 0xffff) == 0) goto LAB_1003dc9fc;
            lVar6 = *(long *)(lVar6 + 0x10);
            uVar12 = uVar12 & 0xffff0000 | uVar12 - 1 & 0xffff;
            if (lVar6 == 0) goto LAB_1003dc9fc;
          }
        } while( true );
      }
LAB_1003dc9fc:
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar2);
  }
  plVar7 = (long *)(DAT_101e94198 + 0x10);
  plVar8 = (long *)*plVar7;
  plVar9 = plVar7;
  if (plVar8 != (long *)0x0) {
    do {
      if (*(uint *)(plVar8 + 4) >= 0xa1e29b0e) {
        plVar9 = plVar8;
      }
      plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < 0xa1e29b0e];
    } while (plVar8 != (long *)0x0);
    if (((plVar9 != plVar7) && (*(uint *)(plVar9 + 4) < 0xa1e29b0f)) && ((int)plVar9[5] != 0)) {
      lVar11 = 0;
      uVar10 = 0;
      do {
        (*(code *)((undefined8 *)(plVar9[6] + lVar11))[1])(*(undefined8 *)(plVar9[6] + lVar11));
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while (uVar10 < *(uint *)(plVar9 + 5));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1003dcac8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014973a0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_1003dcae8(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100347848(&local_20,0);
  return;
}




void FUN_1003dcb28(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184e000))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    for (plVar2 = (long *)(lVar1 + 0x38);
        (lVar1 = *plVar2, lVar1 == 0 || (*(int *)(lVar1 + 0x4c) != *(int *)(param_1 + 0x20)));
        plVar2 = plVar2 + 1) {
    }
    *(undefined2 *)(lVar1 + 0x50) = *(undefined2 *)(param_1 + 0x24);
  }
  return;
}




void FUN_1003dcba4(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014973d8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined1 *)(param_1 + 4) = param_3;
  *(undefined1 *)((long)param_1 + 0x21) = param_4;
  *(undefined1 *)((long)param_1 + 0x22) = param_5;
  *(undefined1 *)((long)param_1 + 0x23) = param_6;
  return;
}




void FUN_1003dcbd0(long param_1)

{
  uint uVar1;
  uint local_18;
  undefined4 uStack_14;
  
  if (DAT_101d23a38 != '\0') {
    uStack_14 = *(undefined4 *)(param_1 + 0x20);
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100348964(&local_18,0);
  }
  return;
}




void FUN_1003dcc0c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar2 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dda8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  FUN_1003d932c(lVar4,*(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21),
                *(undefined1 *)(param_1 + 0x22),*(undefined1 *)(param_1 + 0x23));
  uVar5 = 0x10000;
  lVar4 = lVar2;
LAB_1003dccb0:
  do {
    do {
      lVar3 = lVar4;
      if ((lVar3 != lVar2) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x554207b0), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar3);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar4 = *(long *)(lVar3 + 0x18), lVar4 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003dccb0;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar4 = *(long *)(lVar3 + 0x20), lVar4 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




bool FUN_1003dcd70(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + (ulong)param_2;
  return (*(byte *)(lVar1 + 0x28) & ((*(byte *)(lVar1 + 0x38) | *(byte *)(lVar1 + 0x30)) ^ 0xff)) ==
         0;
}




void FUN_1003dcd9c(undefined8 *param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497410;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  return;
}




void FUN_1003dcdc8(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 local_30;
  uint local_2f;
  uint local_2b;
  
  lVar2 = FUN_100101c50(*(undefined1 *)(param_1 + 0x19));
  if ((lVar2 != 0) &&
     ((uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 == 0x1f ||
      (1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3)))) {
    local_30 = *(undefined1 *)(param_1 + 0x19);
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_2f = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_2b = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100348a5c(&local_30,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003dce4c(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar2 = FUN_100101c50(*(undefined1 *)(param_1 + 0x19));
  if ((lVar2 != 0) &&
     ((uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 == 0x1f ||
      (1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3)))) {
    local_40 = 0x4120000000000000;
    local_38 = 0;
    for (lVar4 = *(long *)(lVar2 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) {
        bVar1 = *(byte *)(lVar4 + 0x818) >> 3 & 3;
        goto LAB_1003dcee4;
      }
    }
    bVar1 = 0;
LAB_1003dcee4:
    FUN_10054e07c(bVar1,param_1 + 0x1c,param_1 + 0x20,0,&local_40);
    FUN_1003dcf38(lVar2,param_1 + 0x1c,0,0,0);
    if ((*(byte *)(lVar2 + 0x2f4) >> 1 & 1) != 0) {
      FUN_100032250(*(undefined4 *)(lVar2 + 0x260));
    }
  }
  return;
}




void FUN_1003dcf38(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float fStack_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  FUN_1003b9ed0();
  if ((((DAT_101d23a38 != '\0') &&
       (uVar1 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f, (int)uVar1 != 0x1f)) &&
      (*(short *)(param_1 + uVar1 * 0x38 + 0x90) == 5)) && ((param_4 & 1) == 0)) {
    local_30 = *(undefined4 *)(param_1 + 0x250);
    local_28 = *(undefined4 *)(param_1 + 600);
    fStack_2c = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
    local_34 = *(undefined4 *)(param_1 + 0x260);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = &PTR_FUN_101497870;
    local_24 = 0;
    FUN_1004983e0(&local_50,&DAT_101e47d30);
  }
  return;
}




void FUN_1003dcfe4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497448;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  uVar1 = *param_4;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_1 + 6) = param_5;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003dd014(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar2 != 0) &&
     ((uVar4 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar4 == 0x1f ||
      (1 < *(ushort *)(lVar2 + uVar4 * 0x38 + 0x90) - 3)))) {
    FUN_1003dcf38(lVar2,param_1 + 0x24,*(undefined1 *)(param_1 + 0x30),
                  *(undefined1 *)(param_1 + 0x30),1);
    lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x20));
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar2 + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != ram0x0001018672a0))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_1003c5600(lVar2,lVar3,0,0);
    }
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
    uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x2c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x2c) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100348d5c(&local_38,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003dd104(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar1 != 0) &&
     ((uVar3 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar3 == 0x1f ||
      (1 < *(ushort *)(lVar1 + uVar3 * 0x38 + 0x90) - 3)))) {
    if (*(long *)(lVar1 + 0x48) != 0) {
      FUN_1003d970c(*(long *)(lVar1 + 0x48),param_1 + 0x24);
    }
    lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x20));
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar1 + 0x18);
      while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != ram0x0001018672a0))) {
        lVar1 = *(long *)(lVar1 + 0x20);
      }
      FUN_1003c5600(lVar1,lVar2,0,0);
      return;
    }
  }
  return;
}




void FUN_1003dd1b4(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497480;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = uVar1;
  return;
}




void FUN_1003dd1e0(long param_1)

{
  uint uVar1;
  long lVar2;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 != 0) {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_1003494a4(&local_30,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003dd238(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((DAT_101d23a38 == '\0') &&
     (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar2 != 0)) {
    local_40 = 0x4120000000000000;
    local_38 = 0;
    for (lVar4 = *(long *)(lVar2 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) {
        bVar1 = *(byte *)(lVar4 + 0x818) >> 3 & 3;
        goto LAB_1003dd2c8;
      }
    }
    bVar1 = 0;
LAB_1003dd2c8:
    uVar3 = FUN_10054e07c(bVar1,param_1 + 0x20,(float *)(param_1 + 0x24),0,&local_40);
    if ((uVar3 & 1) == 0) {
      *(float *)(param_1 + 0x24) = *(float *)(lVar2 + 0x2ec) + *(float *)(lVar2 + 0x254);
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != ram0x0001018672a0))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    if (*(long *)(lVar2 + 0x18) == 0) {
      FUN_1003dd334(0x3f000000,lVar2,param_1 + 0x20);
    }
  }
  return;
}




void FUN_1003dd334(float param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (param_1 <= 0.0) {
    FUN_1003d5db8(lVar2);
    *(undefined4 *)(param_2 + 0x810) = 0;
    *(undefined8 *)(param_2 + 0x808) = 0;
    *(undefined4 *)(param_2 + 0x814) = 0;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f;
    if ((((int)uVar1 == 0x1f) || (1 < *(ushort *)(lVar2 + uVar1 * 0x38 + 0x90) - 3)) &&
       ((*(byte *)(param_2 + 0x818) & 1) != 0)) {
      FUN_100467520(param_2);
      return;
    }
  }
  else {
    fVar3 = (float)*param_3 - (float)*(undefined8 *)(lVar2 + 0x250);
    fVar4 = (float)((ulong)*param_3 >> 0x20) -
            (float)((ulong)*(undefined8 *)(lVar2 + 0x250) >> 0x20);
    fVar5 = *(float *)(param_3 + 1) - *(float *)(lVar2 + 600);
    if (SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) <= 0.01) {
      *(undefined8 *)(param_2 + 0x808) = 0;
      *(undefined4 *)(param_2 + 0x810) = 0;
      *(undefined4 *)(param_2 + 0x814) = 0;
    }
    else {
      *(ulong *)(param_2 + 0x808) = CONCAT44(fVar4 / param_1,fVar3 / param_1);
      *(float *)(param_2 + 0x810) = fVar5 / param_1;
      *(float *)(param_2 + 0x814) = param_1;
    }
  }
  return;
}




void FUN_1003dd430(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014974b8;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  *(undefined1 *)(param_1 + 5) = param_4;
  return;
}




void FUN_1003dd460(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 local_30;
  uint local_2f;
  uint local_2b;
  uint local_27;
  undefined1 local_23;
  
  lVar2 = FUN_100101c50(*(undefined1 *)(param_1 + 0x19));
  if ((lVar2 != 0) &&
     ((uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 == 0x1f ||
      (1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3)))) {
    local_30 = *(undefined1 *)(param_1 + 0x19);
    local_23 = *(undefined1 *)(param_1 + 0x28);
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_2f = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    local_2b = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_27 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100348b5c(&local_30,0);
  }
  return;
}




void FUN_1003dd4f4(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_100101c50(*(undefined1 *)(param_1 + 0x19));
  if ((lVar1 != 0) &&
     ((uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar2 == 0x1f ||
      (1 < *(ushort *)(lVar1 + uVar2 * 0x38 + 0x90) - 3)))) {
    FUN_1003dcf38(lVar1,param_1 + 0x1c,*(undefined1 *)(param_1 + 0x28),1,1);
    return;
  }
  return;
}




void FUN_1003dd560(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014974f0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *(undefined1 *)(param_1 + 5) = param_5;
  return;
}




void FUN_1003dd584(long param_1)

{
  uint uVar1;
  long lVar2;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  undefined1 local_24;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 != 0) {
    local_24 = *(undefined1 *)(param_1 + 0x28);
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100349c9c(&local_30,0);
  }
  return;
}




void FUN_1003dd5e4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 == 0 || DAT_101d23a38 == '\0') {
    return;
  }
  FUN_1004616c8(*(undefined8 *)(lVar1 + 0x58),*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x28));
  return;
}




void FUN_1003dd634(undefined8 *param_1,undefined1 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497528;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  return;
}




void FUN_1003dd650(long param_1)

{
  if (DAT_101d23a38 != '\0') {
    return;
  }
  FUN_100121e0c(*(undefined1 *)(param_1 + 0x19));
  return;
}




void FUN_1003dd668(long param_1)

{
  if ((*(char *)(DAT_101d23a68 + 0x48) != '\0') &&
     (DAT_1018589c0 = 0x3ff0000000000000, *(char *)(param_1 + 0x19) != '\0')) {
    DAT_1018589c0 = 0;
  }
  return;
}




void FUN_1003dd69c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497560;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_1003dd6bc(long param_1)

{
  uint uVar1;
  uint local_30;
  uint uStack_2c;
  undefined1 local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_1003dd714();
    local_28 = *(undefined1 *)(param_1 + 0x24);
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100348664(&local_30,0);
  }
  return;
}




void FUN_1003dd714(long param_1)

{
  long lVar1;
  undefined4 local_28 [2];
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    local_28[0] = *(undefined4 *)(param_1 + 0x20);
    lVar1 = FUN_1003dc44c(lVar1,local_28);
    if (lVar1 != 0) {
      FUN_1003dd780(lVar1,*(undefined1 *)(param_1 + 0x24));
      return;
    }
  }
  return;
}




void FUN_1003dd76c(void)

{
  if (DAT_101d23a38 != '\0') {
    return;
  }
  FUN_1003dd714();
  return;
}




void FUN_1003dd780(long param_1,undefined1 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x40);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
          }
        }
        uVar4 = FUN_1010a0324(uVar3);
        if ((uVar4 & 1) == 0) {
          lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          *(undefined1 *)(lVar2 + 0x48) = param_2;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1003dd83c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497598;
  uVar1 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((long)param_1 + 0x1c) = *param_4;
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 6) = param_5;
  *(undefined1 *)((long)param_1 + 0x34) = param_6;
  return;
}




void FUN_1003dd86c(long param_1)

{
  uint uVar1;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  local_13 = *(undefined1 *)(param_1 + 0x34);
  uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
  local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x2c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x2c) & 0xff00ff) << 8;
  uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_14 = (undefined1)*(undefined4 *)(param_1 + 0x30);
  FUN_10034b324(&local_28,0);
  return;
}




void FUN_1003dd8c8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined **local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  long local_c8 [16];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 == '\0') {
    FUN_10034ee90();
    lVar2 = FUN_100345d90();
    if (lVar2 != 0) {
      if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
        FUN_1003dda4c(lVar2,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                      param_1 + 0x1c,*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x34)
                     );
        return;
      }
      goto LAB_1003dda48;
    }
  }
  else {
    lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x28));
    if (lVar2 != 0) {
      local_e0 = &PTR_FUN_1014998d0;
      uStack_d8 = 0;
      local_ce = 0xff;
      local_d0 = 0xff;
      uVar1 = FUN_1003a6ce4(&local_e0,local_c8,0x10,0);
      if (uVar1 != 0) {
        uVar4 = (ulong)uVar1;
        plVar5 = local_c8;
        do {
          if (((*(int *)(*plVar5 + 0x260) != *(int *)(param_1 + 0x28)) &&
              (*(char *)(*plVar5 + 0x264) == *(char *)(lVar2 + 0x264))) &&
             (lVar3 = FUN_100345d90(), lVar3 != 0)) {
            FUN_1003dda4c(lVar3,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                          param_1 + 0x1c,*(undefined4 *)(param_1 + 0x30),
                          *(undefined1 *)(param_1 + 0x34));
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (DAT_101d39298 != '\0') {
        FUN_1003ddb58((ulong)*(byte *)(lVar2 + 0x264) * 0xbf8 + 0x101d2d318,
                      *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_1 + 0x1c
                      ,*(undefined4 *)(param_1 + 0x30));
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
LAB_1003dda48:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003dda4c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_1003dda90:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xaf0026c), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1003dda90;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003ddb58(float *param_1,int param_2,undefined8 param_3,float *param_4,int param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_4;
  fVar4 = param_4[1];
  fVar3 = param_4[2];
  if (((int)param_3 != -1) && (lVar1 = FUN_100345d90(param_3), lVar1 != 0)) {
    fVar2 = *(float *)(lVar1 + 0x250);
    fVar3 = *(float *)(lVar1 + 600);
    fVar4 = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
  }
  if (param_5 == 5) {
    *(undefined1 *)(param_1 + 0x14) = 1;
    *param_1 = fVar2;
    param_1[1] = fVar4;
    param_1[2] = fVar3;
    fVar2 = (float)FUN_100032228();
    lVar1 = 0;
    param_1[3] = fVar2;
    param_1[4] = fVar2;
    do {
      *(undefined1 *)((long)param_1 + lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0xc;
    } while (lVar1 != 0x3c);
    lVar1 = 0;
    do {
      if ((*(char *)((long)param_1 + lVar1 + 0x1c) == '\0') ||
         (*(int *)((long)param_1 + lVar1 + 0x14) == param_2)) {
        *(undefined1 *)((long)param_1 + lVar1 + 0x1c) = 1;
        *(int *)((long)param_1 + lVar1 + 0x14) = param_2;
        *(float *)((long)param_1 + lVar1 + 0x18) = fVar2;
      }
      lVar1 = lVar1 + 0xc;
    } while (lVar1 != 0x3c);
  }
  else if ((param_5 == 3) &&
          (fVar2 = (float)*(undefined8 *)(param_4 + 1) - (float)*(undefined8 *)(param_1 + 1),
          fVar3 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20),
          fVar2 * fVar2 + (*param_4 - *param_1) * (*param_4 - *param_1) + fVar3 * fVar3 < 9.0)) {
    fVar2 = (float)FUN_100032228();
    lVar1 = 0;
    param_1[4] = fVar2;
    do {
      if ((*(char *)((long)param_1 + lVar1 + 0x1c) == '\0') ||
         (*(int *)((long)param_1 + lVar1 + 0x14) == param_2)) {
        *(undefined1 *)((long)param_1 + lVar1 + 0x1c) = 1;
        *(int *)((long)param_1 + lVar1 + 0x14) = param_2;
        *(float *)((long)param_1 + lVar1 + 0x18) = fVar2;
      }
      lVar1 = lVar1 + 0xc;
    } while (lVar1 != 0x3c);
  }
  return;
}




void FUN_1003ddcc0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014975d0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003ddcdc(long param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100349ba4(&local_18,0);
  return;
}




void FUN_1003ddd10(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 == 0) {
    return;
  }
  uVar5 = 0xffff0000;
  lVar3 = lVar2;
LAB_1003ddd48:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != lVar2) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x2a7d0549), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003ddd48;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003dde00(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497608;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_1003dde1c(long param_1)

{
  uint uVar1;
  uint local_18 [2];
  
  if (DAT_101d23a38 == '\0') {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100349e94(local_18,0);
  }
  return;
}




void FUN_1003dde58(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((DAT_101d23a38 == '\0') ||
     (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar2 == 0)) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = lVar2;
LAB_1003dde90:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != lVar2) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x24c904dd), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003dde90;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003ddf40(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497640;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  return;
}




void FUN_1003ddf60(long param_1)

{
  uint uVar1;
  long lVar2;
  uint local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  if (DAT_101d23a38 == '\0') {
    lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x24));
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184e000))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    FUN_1003ddfec(lVar2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
    local_24 = (undefined1)*(undefined4 *)(param_1 + 0x1c);
    local_23 = (undefined1)*(undefined4 *)(param_1 + 0x20);
    FUN_100349f88(&local_28,0);
  }
  return;
}




void FUN_1003ddfec(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = param_1 + 0x38;
  uVar4 = *(undefined8 *)(lVar5 + (param_2 & 0xffffffff) * 8);
  *(undefined8 *)(lVar5 + (param_2 & 0xffffffff) * 8) = *(undefined8 *)(lVar5 + (ulong)param_3 * 8);
  *(undefined8 *)(lVar5 + (ulong)param_3 * 8) = uVar4;
  lVar5 = param_1 + 0x88;
  uVar4 = *(undefined8 *)(lVar5 + (param_2 & 0xffffffff) * 8);
  *(undefined8 *)(lVar5 + (param_2 & 0xffffffff) * 8) = *(undefined8 *)(lVar5 + (ulong)param_3 * 8);
  *(undefined8 *)(lVar5 + (ulong)param_3 * 8) = uVar4;
  *(ushort *)(param_1 + 0xdc) = *(ushort *)(param_1 + 0xdc) | 0x8000;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  uVar6 = 0x10000;
  lVar2 = lVar5;
LAB_1003de04c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != lVar5) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x3bb20643), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_1003de04c;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar6 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003de104(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((DAT_101d23a38 == '\0') ||
     (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x24)), lVar2 == 0)) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = lVar2;
LAB_1003de14c:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != lVar2) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x1fe80483), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003de14c;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1003de208(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497678;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}




void FUN_1003de224(long param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  if (DAT_101d23a38 == '\0') {
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_10034a180(&local_18,0);
  }
  return;
}




void FUN_1003de264(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((DAT_101d23a38 == '\0') ||
     (lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x20)), lVar2 == 0)) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = lVar2;
LAB_1003de2a8:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != lVar2) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x11fe0340), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003de2a8;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_1003de360;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_1003de360:
      FUN_10003224c(*(undefined4 *)(lVar2 + 0x260));
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_1003de360;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_1003de360;
    }
  } while( true );
}




void FUN_1003de37c(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,uint param_4,
                  undefined1 param_5,byte *param_6,uint param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014976b0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(char *)(param_1 + 0x14) = (char)param_4;
  *(char *)((long)param_1 + 0xa1) = (char)param_7;
  *(undefined1 *)((long)param_1 + 0xa2) = param_5;
  if (param_4 != 0) {
    uVar1 = (ulong)param_4;
    puVar2 = param_1 + 4;
    do {
      *(undefined4 *)puVar2 = *param_3;
      uVar1 = uVar1 - 1;
      param_3 = param_3 + 1;
      puVar2 = (undefined8 *)((long)puVar2 + 4);
    } while (uVar1 != 0);
  }
  if (param_7 != 0) {
    uVar1 = (ulong)param_7;
    puVar3 = (uint *)(param_1 + 0xe);
    do {
      *puVar3 = (uint)*param_6;
      uVar1 = uVar1 - 1;
      param_6 = param_6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar1 != 0);
  }
  return;
}




void FUN_1003de3dc(long param_1)

{
  FUN_100121df4(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,*(undefined1 *)(param_1 + 0xa0),
                *(undefined1 *)(param_1 + 0xa2),param_1 + 0x70,*(undefined1 *)(param_1 + 0xa1));
  return;
}




void FUN_1003de3fc(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184e150))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    FUN_1003de498(lVar1,param_1 + 0x20,*(undefined1 *)(param_1 + 0xa0),
                  *(undefined1 *)(param_1 + 0xa2),param_1 + 0x70,*(undefined1 *)(param_1 + 0xa1));
    return;
  }
  return;
}




void FUN_1003de46c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184e150))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_1003de498(long param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                  undefined4 *param_5,uint param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined4 *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  *(undefined4 *)(param_1 + 0x28) = 0xff;
  uVar1 = (ulong)param_3;
  if (param_3 == 0) {
LAB_1003de4f0:
    _memset_pattern16((void *)(param_1 + uVar1 * 4 + 0x68),&DAT_101159b60,
                      (uVar1 * -4 + 0x4c & 0x3fffffffc) + 4);
  }
  else {
    puVar3 = (undefined4 *)(param_1 + 0x68);
    uVar5 = uVar1;
    do {
      *puVar3 = *param_2;
      uVar5 = uVar5 - 1;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
    if (param_3 < 0x14) goto LAB_1003de4f0;
  }
  *(undefined4 *)(param_1 + 0xb8) = param_4;
  uVar1 = (ulong)param_6;
  if (param_6 != 0) {
    puVar3 = (undefined4 *)(param_1 + 0xbc);
    uVar5 = uVar1;
    do {
      *puVar3 = *param_5;
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
      param_5 = param_5 + 1;
    } while (uVar5 != 0);
    if (0xb < param_6) goto LAB_1003de560;
  }
  _memset((void *)(param_1 + uVar1 * 4 + 0xbc),0xff,(uVar1 * -4 + 0x2c & 0x3fffffffc) + 4);
LAB_1003de560:
  *(undefined1 *)(param_1 + 0xed) = 1;
  plVar2 = (long *)(DAT_101e94198 + 0x10);
  plVar4 = (long *)*plVar2;
  plVar6 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= 0xb924e89d) {
        plVar6 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < 0xb924e89d];
    } while (plVar4 != (long *)0x0);
    if (((plVar6 != plVar2) && (*(uint *)(plVar6 + 4) < 0xb924e89e)) && ((int)plVar6[5] != 0)) {
      lVar7 = 0;
      uVar1 = 0;
      do {
        (*(code *)((undefined8 *)(plVar6[6] + lVar7))[1])(*(undefined8 *)(plVar6[6] + lVar7));
        uVar1 = uVar1 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar1 < *(uint *)(plVar6 + 5));
    }
  }
  return;
}




void FUN_1003de60c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014976e8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003de628(long param_1)

{
  if (*(char *)(DAT_101d23a68 + 0x51) != '\0') {
    return;
  }
  FUN_100121dfc(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x20));
  return;
}




void FUN_1003de64c(long param_1)

{
  long lVar1;
  
  if ((*(char *)(DAT_101d23a68 + 0x51) == '\0') &&
     (lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c)), lVar1 != 0)) {
    lVar1 = *(long *)(lVar1 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184e150))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    FUN_1003de6bc(lVar1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_1003de6bc(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  
  if (param_2 == 0xfe) {
    *(undefined4 *)(param_1 + 0x28) = 0xfe;
    *(undefined1 *)(param_1 + 0xed) = 1;
    plVar1 = (long *)(DAT_101e94198 + 0x10);
    plVar2 = (long *)*plVar1;
    plVar6 = plVar1;
    if (plVar2 != (long *)0x0) {
      do {
        if (*(uint *)(plVar2 + 4) >= 0xb924e89d) {
          plVar6 = plVar2;
        }
        plVar2 = (long *)plVar2[*(uint *)(plVar2 + 4) < 0xb924e89d];
      } while (plVar2 != (long *)0x0);
      if (((plVar6 != plVar1) && (*(uint *)(plVar6 + 4) < 0xb924e89e)) && ((int)plVar6[5] != 0)) {
        lVar4 = 0;
        uVar5 = 0;
        do {
          (*(code *)((undefined8 *)(plVar6[6] + lVar4))[1])(*(undefined8 *)(plVar6[6] + lVar4));
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x10;
        } while (uVar5 < *(uint *)(plVar6 + 5));
      }
    }
  }
  else {
    plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x198);
    if (*plVar6 != 0) {
      iVar7 = 0;
      do {
        if (iVar7 == param_2) {
          FUN_1004706bc(param_1);
          *(int *)(param_1 + 0x28) = param_2;
          *(undefined1 *)(param_1 + 0xed) = 1;
          plVar2 = (long *)(DAT_101e94198 + 0x10);
          plVar3 = (long *)*plVar2;
          plVar1 = plVar2;
          if (plVar3 != (long *)0x0) {
            do {
              if (*(uint *)(plVar3 + 4) >= 0xb924e89d) {
                plVar1 = plVar3;
              }
              plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xb924e89d];
            } while (plVar3 != (long *)0x0);
            if (((plVar1 != plVar2) && (*(uint *)(plVar1 + 4) < 0xb924e89e)) &&
               ((int)plVar1[5] != 0)) {
              lVar4 = 0;
              uVar5 = 0;
              do {
                (*(code *)((undefined8 *)(plVar1[6] + lVar4))[1])
                          (*(undefined8 *)(plVar1[6] + lVar4));
                uVar5 = uVar5 + 1;
                lVar4 = lVar4 + 0x10;
              } while (uVar5 < *(uint *)(plVar1 + 5));
            }
          }
        }
        plVar6 = plVar6 + 1;
        iVar7 = iVar7 + 1;
      } while (*plVar6 != 0);
    }
  }
  return;
}




void FUN_1003de86c(undefined4 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_101497720;
  *(undefined4 *)((long)param_2 + 0x1c) = param_1;
  return;
}




void FUN_1003de888(long param_1)

{
  FUN_100121f14(*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_1003de890(long param_1)

{
  DAT_1018589c0 = (double)*(float *)(param_1 + 0x1c);
  if (DAT_1018589c0 <= 0.0) {
    DAT_1018589c0 = 0.0;
  }
  return;
}




void FUN_1003de8ac(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497758;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined1 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003de8cc(long param_1)

{
  FUN_100121f1c(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x20));
  return;
}




void FUN_1003de8dc(long param_1)

{
  int iVar1;
  
  if ((DAT_101d23a38 == '\0') &&
     (iVar1 = FUN_10034ea2c(*(undefined4 *)(param_1 + 0x1c)), iVar1 != 0)) {
    DAT_101d23a39 = *(undefined1 *)(param_1 + 0x20);
    FUN_1000153b4(&DAT_101d23a40,&DAT_101d91650);
    return;
  }
  return;
}




void FUN_1003de938(long param_1)

{
  uint uVar1;
  uint local_20;
  ushort local_1c;
  uint local_1a;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
    local_1c = *(ushort *)(param_1 + 0x20) >> 8 | *(ushort *)(param_1 + 0x20) << 8;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_1a = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100347448(&local_20,0);
  }
  return;
}




void FUN_1003de990(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar3 == 0) {
    return;
  }
  if ((DAT_101d23a39 != '\0') && ((*(byte *)(lVar3 + 0x2f4) >> 4 & 1) != 0)) {
    return;
  }
  FUN_1004e313c(auStack_40);
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 < 0x19) {
    uVar4 = FUN_1004e0150((&PTR_s_INGAME_STATUS_TEXT_SLOWED_10149dc60)[(int)uVar2],0);
    FUN_1000153b4(auStack_40,uVar4);
    plVar5 = *(long **)(lVar3 + 0x50);
    if (plVar5 != (long *)0x0) {
      if (*(int *)(param_1 + 0x20) - 0x15U < 3) {
        uVar1 = *(undefined4 *)(param_1 + 0x24);
        pcVar6 = *(code **)(*plVar5 + 0x138);
      }
      else {
        if (*(int *)(param_1 + 0x20) != 0x14) {
          (**(code **)(*plVar5 + 0x130))
                    (*(undefined4 *)(&DAT_101159ff8 + (long)(int)uVar2 * 4),plVar5,auStack_40);
          goto LAB_1003dea8c;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x24);
        pcVar6 = *(code **)(*plVar5 + 0x140);
      }
      (*pcVar6)(plVar5,auStack_40,&DAT_101e48070,uVar1);
    }
  }
LAB_1003dea8c:
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1003dea9c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014977c8;
  return;
}




void FUN_1003deab4(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_100346a90(local_18,0);
  return;
}




void FUN_1003deadc(void)

{
  if (DAT_101d23a38 != '\0' || DAT_101d23a39 != '\0') {
    return;
  }
  FUN_1000367ac();
  return;
}




void FUN_1003deafc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497800;
  return;
}




void FUN_1003deb14(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_100346998(local_18,0);
  return;
}




void FUN_1003deb3c(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long local_8d8 [70];
  long local_6a8 [200];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a39 == '\0') {
    FUN_100036794();
  }
  else {
    FUN_10004db10();
  }
  uVar2 = FUN_1010a1958(local_6a8,200,DAT_10184daa8,0);
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      for (lVar5 = *(long *)(local_6a8[uVar6] + 0x28); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350))
      {
        FUN_10046a248(lVar5);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  uVar2 = FUN_1010a1958(local_8d8,0x46,DAT_10184e3d0,0);
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      lVar5 = local_8d8[uVar6];
      if (lVar5 != 0) {
        uVar7 = 0xffff0000;
        lVar3 = lVar5;
LAB_1003dec0c:
        do {
          do {
            lVar4 = lVar3;
            if ((lVar4 != lVar5) &&
               (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x23ed04d9), lVar3 != 0)) {
              (**(code **)(lVar3 + 8))(lVar4);
            }
            if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0))
            {
              uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
              goto LAB_1003dec0c;
            }
            if ((uVar7 & 0xffff) == 0) goto LAB_1003deca8;
            lVar3 = *(long *)(lVar4 + 0x20);
          } while (*(long *)(lVar4 + 0x20) != 0);
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((lVar4 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
          uVar7 = uVar1 | uVar7 & 0xffff0000;
          while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
            if ((uVar7 - 1 & 0xffff) == 0) goto LAB_1003deca8;
            lVar4 = *(long *)(lVar4 + 0x10);
            uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
            if (lVar4 == 0) goto LAB_1003deca8;
          }
        } while( true );
      }
LAB_1003deca8:
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003decf0(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_101497838;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_1;
  return;
}




void FUN_1003ded10(long param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100347d38(&local_18,0);
  return;
}




void FUN_1003ded44(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0 && DAT_101d23a38 == '\0') {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184e110) {
        *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_1 + 0x20);
        return;
      }
    }
    lVar1 = FUN_1010a0298();
    *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  return;
}




void FUN_1003dedc0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497870;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = uVar1;
  *(undefined1 *)((long)param_1 + 0x2c) = param_4;
  return;
}




void FUN_1003dedf0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  undefined1 local_28;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar2 != 0) &&
     ((uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 == 0x1f ||
      (1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3)))) {
    local_28 = *(undefined1 *)(param_1 + 0x2c);
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
    local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
    uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100348c5c(&local_38,0);
  }
  return;
}




void FUN_1003dee7c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar1 != 0) &&
     ((uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar2 == 0x1f ||
      (1 < *(ushort *)(lVar1 + uVar2 * 0x38 + 0x90) - 3)))) {
    FUN_1003b9ed0(lVar1,param_1 + 0x20,1,*(undefined1 *)(param_1 + 0x2c),1);
    return;
  }
  return;
}




void FUN_1003deee8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014978a8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 5) = param_5;
  return;
}




void FUN_1003def0c(long param_1)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  undefined1 local_18;
  undefined1 local_17;
  
  local_17 = *(undefined1 *)(param_1 + 0x28);
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_18 = (undefined1)*(undefined4 *)(param_1 + 0x20);
  FUN_10034b8d4(&local_20,0);
  return;
}




void FUN_1003def50(long param_1)

{
  long lVar1;
  
  if ((DAT_101d23a38 == '\0') &&
     (lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x24)), lVar1 != 0)) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      lVar1 = *(long *)(*(long *)(lVar1 + 0x58) + (ulong)*(uint *)(param_1 + 0x1c) * 8 + 0x50);
      if (lVar1 == 0) {
        return;
      }
    }
    else {
      lVar1 = *(long *)(*(long *)(lVar1 + 0x68) + (ulong)*(uint *)(param_1 + 0x1c) * 8 + 0x38);
      if (lVar1 == 0) {
        return;
      }
      lVar1 = *(long *)(lVar1 + 0x30);
    }
    *(undefined4 *)(lVar1 + 0x23c) = *(undefined4 *)(param_1 + 0x20);
  }
  return;
}




void FUN_1003defc0(undefined4 param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_1014978e0;
  *(undefined1 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0xb4) = param_1;
  *(undefined4 *)(param_2 + 0x17) = param_8;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  uVar6 = param_5[5];
  uVar5 = param_5[4];
  uVar7 = param_5[6];
  *(undefined8 *)((long)param_2 + 0x5c) = param_5[7];
  *(undefined8 *)((long)param_2 + 0x54) = uVar7;
  *(undefined8 *)((long)param_2 + 0x4c) = uVar6;
  *(undefined8 *)((long)param_2 + 0x44) = uVar5;
  *(undefined8 *)((long)param_2 + 0x3c) = uVar4;
  *(undefined8 *)((long)param_2 + 0x34) = uVar3;
  *(undefined8 *)((long)param_2 + 0x2c) = uVar2;
  *(undefined8 *)((long)param_2 + 0x24) = uVar1;
  uVar1 = *param_6;
  *(undefined8 *)((long)param_2 + 0x6c) = param_6[1];
  *(undefined8 *)((long)param_2 + 100) = uVar1;
  uVar2 = param_7[1];
  uVar1 = *param_7;
  uVar4 = param_7[3];
  uVar3 = param_7[2];
  uVar6 = param_7[5];
  uVar5 = param_7[4];
  uVar7 = param_7[6];
  *(undefined8 *)((long)param_2 + 0xac) = param_7[7];
  *(undefined8 *)((long)param_2 + 0xa4) = uVar7;
  *(undefined8 *)((long)param_2 + 0x9c) = uVar6;
  *(undefined8 *)((long)param_2 + 0x94) = uVar5;
  *(undefined8 *)((long)param_2 + 0x8c) = uVar4;
  *(undefined8 *)((long)param_2 + 0x84) = uVar3;
  *(undefined8 *)((long)param_2 + 0x7c) = uVar2;
  *(undefined8 *)((long)param_2 + 0x74) = uVar1;
  return;
}




void FUN_1003df020(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x20) - 2;
  FUN_100121e04(*(undefined4 *)(param_1 + 0xb4),*(undefined1 *)(param_1 + 0x1c),
                *(uint *)(param_1 + 0x20) & 0xff,param_1 + 0x24,param_1 + 100,param_1 + 0x74,
                *(undefined4 *)(param_1 + 0xb8),0xdU >> (ulong)(uVar1 & 0xf) & (uint)(uVar1 < 4));
  return;
}




void FUN_1003df064(long param_1)

{
  if (DAT_101d23a38 != '\0') {
    return;
  }
  FUN_100116844(param_1 + 0x1c);
  return;
}




void FUN_1003df07c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497918;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = uVar1;
  *(undefined1 *)((long)param_1 + 0x2c) = param_4;
  return;
}




void FUN_1003df0ac(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  char local_28;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 != 0) {
    local_28 = *(char *)(param_1 + 0x2c);
    if (((local_28 != '\0') || (uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 == 0x1f)
        ) || (1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3)) {
      uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
      local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
      uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x24) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x24) & 0xff00ff) << 8;
      local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
      uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
      FUN_1003493a4(&local_38,0);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003df13c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 == 0) {
    return;
  }
  if (((*(char *)(param_1 + 0x2c) == '\0') &&
      (uVar4 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar4 != 0x1f)) &&
     (*(ushort *)(lVar2 + uVar4 * 0x38 + 0x90) - 3 < 2)) {
    return;
  }
  FUN_1003d5db8(lVar2,param_1 + 0x20);
  uVar6 = 0xffff0000;
  lVar3 = lVar2;
LAB_1003df1d4:
  do {
    do {
      lVar5 = lVar3;
      if ((lVar5 != lVar2) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar5 + 8),0x1ab4042d), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar5);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar3 = *(long *)(lVar5 + 0x18), lVar3 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_1003df1d4;
      }
      if ((uVar6 & 0xffff) == 0) goto LAB_1003df274;
      lVar3 = *(long *)(lVar5 + 0x20);
    } while (*(long *)(lVar5 + 0x20) != 0);
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((lVar5 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) {
LAB_1003df274:
      lVar2 = *(long *)(lVar2 + 0x18);
      while( true ) {
        if (lVar2 == 0) {
          return;
        }
        if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) break;
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      *(byte *)(lVar2 + 0x818) = *(byte *)(lVar2 + 0x818) & 0xfe;
      if (DAT_101d23a38 == '\0') {
        return;
      }
      FUN_100466f74();
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar3 = *(long *)(lVar5 + 0x20), lVar3 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) goto LAB_1003df274;
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar5 == 0) goto LAB_1003df274;
    }
  } while( true );
}




void FUN_1003df2d8(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497950;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003df2f4(long param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
    uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_100347b40(&local_18,0);
  }
  return;
}




void FUN_1003df334(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar1 != 0) && (lVar1 = *(long *)(*(long *)(lVar1 + 0x60) + 0x28), lVar1 != 0)) {
    do {
      if (*(int *)(lVar1 + 0x30c) == *(int *)(param_1 + 0x20)) {
        FUN_10046921c();
        return;
      }
      lVar1 = *(long *)(lVar1 + 0x350);
    } while (lVar1 != 0);
  }
  return;
}




void FUN_1003df38c(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101497988;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_1003df3a8(long param_1)

{
  uint uVar1;
  uint local_18 [2];
  
  uVar1 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034bad4(local_18,0);
  return;
}




void FUN_1003df3d8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_1003df3fc();
    return;
  }
  return;
}




void FUN_1003df3fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dea0))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_100464aa8();
  return;
}




bool FUN_1003df428(long param_1)

{
  return *(float *)(param_1 + 0x10) == 0.0;
}




void FUN_1003df438(void)

{
  undefined **ppuVar1;
  ulong uVar2;
  
  if (PTR_s_threat_neutral_10185b9d0 != (undefined *)0x0) {
    uVar2 = 1;
    do {
      FUN_10054d754();
      ppuVar1 = &PTR_s_threat_neutral_10185b9d0 + uVar2;
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (*ppuVar1 != (undefined *)0x0);
  }
  return;
}




void FUN_1003df478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x10;
  if (*(char *)(param_1 + 0x264) != '\x01') {
    lVar1 = 8;
  }
  lVar1 = FUN_10054d878(*(undefined8 *)((long)&PTR_s_threat_neutral_10185b9d0 + lVar1));
  if (lVar1 != 0) {
    FUN_10054d994(*(undefined4 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600),lVar1,
                  FUN_1003df428,param_2,param_3,3);
    return;
  }
  return;
}




float FUN_1003df4f8(float param_1,long param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0x10) + (float)(param_3 - 1U) * *(float *)(param_2 + 0x14);
  if (param_3 == 0 || param_3 - 1U == 0) {
    fVar2 = *(float *)(param_2 + 0x10);
  }
  fVar1 = fVar2 + *(float *)(param_2 + 0x1c);
  if (param_4 == 0) {
    fVar1 = fVar2;
  }
  fVar2 = fVar1 + (float)(param_5 - 1U) * *(float *)(param_2 + 0x18);
  if (param_5 == 0 || param_5 - 1U == 0) {
    fVar2 = fVar1;
  }
  return fVar2 + param_1 * *(float *)(param_2 + 0x2c);
}




float FUN_1003df538(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_3 * param_1 * *(float *)(param_4 + 0x28);
  if (param_1 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar1 = fVar2 + param_2 * *(float *)(param_4 + 0x24);
  if (param_2 <= 0.0) {
    fVar1 = fVar2;
  }
  return fVar1;
}




float FUN_1003df560(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x20) * param_1;
  if (param_1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}




float FUN_1003df578(long param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 8) + (float)(param_2 - 1U) * *(float *)(param_1 + 0xc);
  if (param_2 == 0 || param_2 - 1U == 0) {
    fVar2 = *(float *)(param_1 + 8);
  }
  fVar1 = fVar2 + *(float *)(param_1 + 0x10);
  if (param_3 == 0) {
    fVar1 = fVar2;
  }
  fVar2 = fVar1 + (float)(param_4 - 1U) * *(float *)(param_1 + 0x20);
  if (param_4 == 0 || param_4 - 1U == 0) {
    fVar2 = fVar1;
  }
  return fVar2;
}




undefined4 FUN_1003df5b4(long param_1,int param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  lVar4 = *plVar2;
  if (lVar4 != 0) {
    iVar3 = 0;
    do {
      if (iVar3 == param_2) {
        plVar5 = *(long **)(lVar4 + 0xb0);
        lVar4 = *plVar5;
        iVar1 = param_3;
        if (lVar4 != 0) {
          while( true ) {
            if (iVar1 == 0) {
              return *(undefined4 *)(lVar4 + 8);
            }
            plVar5 = plVar5 + 1;
            lVar4 = *plVar5;
            if (lVar4 == 0) break;
            iVar1 = iVar1 + -1;
          }
        }
      }
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 1;
      lVar4 = *plVar2;
    } while (lVar4 != 0);
  }
  return 0;
}




undefined4 FUN_1003df618(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  plVar2 = *(long **)(param_1 + 0x1a8);
  lVar1 = *plVar2;
  if (lVar1 != 0 && param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      plVar2 = plVar2 + 1;
      lVar1 = *plVar2;
    } while (lVar1 != 0 && param_2 != 0);
  }
  uVar3 = 0;
  if (lVar1 != 0) {
    if (param_3 < 0x10) {
      if (param_3 == 1) {
        return *(undefined4 *)(lVar1 + 8);
      }
      if (param_3 == 2) {
        return *(undefined4 *)(lVar1 + 0xc);
      }
      if (param_3 == 4) {
        return *(undefined4 *)(lVar1 + 0x14);
      }
    }
    else if (param_3 < 0x40) {
      if (param_3 == 0x10) {
        uVar3 = *(undefined4 *)(lVar1 + 0x10);
      }
      else if (param_3 == 0x20) {
        return *(undefined4 *)(lVar1 + 0x18);
      }
    }
    else if ((param_3 == 0x40) || (param_3 == 0x80)) {
      return *(undefined4 *)(lVar1 + 0x1c);
    }
  }
  return uVar3;
}




void FUN_1003df6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010a1520();
  uVar1 = FUN_1010a0e0c(uVar1,0,param_1,0);
  FUN_1003df618(uVar1,param_2,param_3);
  return;
}




void FUN_1003df710(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x228);
  if (*plVar1 != 0 && param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      plVar1 = plVar1 + 1;
    } while (*plVar1 != 0 && param_2 != 0);
  }
  FUN_1003df74c();
  return;
}




/* WARNING: Type propagation algorithm not settling */

float FUN_1003df74c(long param_1,long param_2,uint param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = 0.0;
  if ((param_3 & 1) != 0) {
    fVar2 = *(float *)(param_2 + 8);
  }
  if ((param_3 >> 1 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar4 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
    fVar2 = fVar2 + *(float *)(param_2 + 0xc) * (float)(int)(DAT_101e94300 + -1.0);
  }
  if ((param_3 >> 2 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar4 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
    fVar2 = fVar2 + *(float *)(param_2 + 0x14) * DAT_101e94270;
  }
  if ((param_3 >> 3 & 1) != 0) {
    fVar2 = fVar2 + *(float *)(param_2 + 0x14) * *(float *)(*(long *)(param_1 + 0x40) + 0xfc);
  }
  if ((param_3 >> 4 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar4 = *(float *)(lVar1 + 0x4c) + *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0)
    ;
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x1b4),DAT_101e94334);
    fVar2 = fVar2 + *(float *)(param_2 + 0x10) * DAT_101e94274;
  }
  if ((param_3 >> 5 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar4 = *(float *)(lVar1 + 0x50) + *(float *)(lVar1 + 0x104) * (*(float *)(lVar1 + 0x26c) + 1.0)
    ;
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x1b8),DAT_101e94338);
    fVar2 = fVar2 + *(float *)(param_2 + 0x18) * DAT_101e94278;
  }
  fVar3 = *(float *)(param_2 + 0x1c);
  fVar4 = fVar2;
  if (fVar2 <= fVar3) {
    fVar4 = fVar3;
  }
  if ((param_3 & 0x40) != 0) {
    fVar2 = fVar4;
  }
  fVar4 = (float)NEON_fminnm(fVar2,fVar3);
  if ((param_3 & 0x80) != 0) {
    fVar2 = fVar4;
  }
  return fVar2;
}




void FUN_1003df8d4(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,byte param_7)

{
  undefined4 uVar1;
  
  if ((param_7 & param_2 == 0) != 0) {
    param_2 = 1;
  }
  if (param_2 == 0) {
    *param_6 = 0;
    *param_5 = 0;
    *param_4 = 0;
  }
  else {
    uVar1 = FUN_1003df96c(param_1,param_3,param_2);
    *param_4 = uVar1;
    uVar1 = FUN_1003dfa98(param_1,param_3,param_2);
    *param_5 = uVar1;
    uVar1 = FUN_1003dfbb0(param_1,param_3,param_2);
    *param_6 = uVar1;
  }
  return;
}




float FUN_1003df96c(float param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *(long *)(param_2 + 0x40);
  fVar5 = 0.0;
  if (*(int *)(param_3 + 0x38) == 0) {
    fVar5 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
    fVar5 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
    fVar5 = *(float *)(param_3 + 0x10) + (float)(param_4 - 1U) * *(float *)(param_3 + 0x14);
    if (param_4 == 0 || param_4 - 1U == 0) {
      fVar5 = *(float *)(param_3 + 0x10);
    }
    fVar6 = fVar5 + *(float *)(param_3 + 0x1c);
    if (param_4 != 5) {
      fVar6 = fVar5;
    }
    uVar1 = (int)DAT_101e94300 - 1;
    fVar5 = fVar6 + (float)uVar1 * *(float *)(param_3 + 0x18);
    if ((int)DAT_101e94300 == 0 || uVar1 == 0) {
      fVar5 = fVar6;
    }
    fVar5 = fVar5 + (DAT_101e94260 - *(float *)(lVar2 + 0x38)) * *(float *)(param_3 + 0x2c);
  }
  fVar6 = *(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar2 + 0x1b0),DAT_101e94330);
  fVar6 = DAT_101e94270 - *(float *)(lVar2 + 0x48);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar3 = *(float *)(param_3 + 0x28) * param_1 * DAT_101e94270;
  if (DAT_101e94270 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = fVar3 + *(float *)(param_3 + 0x24) * fVar6;
  if (fVar6 <= 0.0) {
    fVar4 = fVar3;
  }
  return fVar4 + fVar5;
}




float FUN_1003dfa98(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x40);
  fVar3 = 0.0;
  if (*(int *)(param_2 + 0x38) == 1) {
    fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
    NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
    fVar3 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
    fVar3 = *(float *)(param_2 + 0x10) + (float)(param_3 - 1U) * *(float *)(param_2 + 0x14);
    if (param_3 == 0 || param_3 - 1U == 0) {
      fVar3 = *(float *)(param_2 + 0x10);
    }
    fVar4 = fVar3 + *(float *)(param_2 + 0x1c);
    if (param_3 != 5) {
      fVar4 = fVar3;
    }
    uVar1 = (int)DAT_101e94300 - 1;
    fVar3 = fVar4 + (float)uVar1 * *(float *)(param_2 + 0x18);
    if ((int)DAT_101e94300 == 0 || uVar1 == 0) {
      fVar3 = fVar4;
    }
    fVar3 = fVar3 + (DAT_101e94260 - *(float *)(lVar2 + 0x38)) * *(float *)(param_2 + 0x2c);
  }
  fVar4 = *(float *)(lVar2 + 0x4c) + *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0);
  NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar2 + 0x1b4),DAT_101e94334);
  fVar4 = DAT_101e94274 * *(float *)(param_2 + 0x20);
  if (DAT_101e94274 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4 + fVar3;
}




float FUN_1003dfbb0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 0.0;
  if (*(int *)(param_2 + 0x38) == 2) {
    lVar2 = *(long *)(param_1 + 0x40);
    fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
    NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
    fVar3 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
    fVar3 = *(float *)(param_2 + 0x10) + (float)(param_3 - 1U) * *(float *)(param_2 + 0x14);
    if (param_3 == 0 || param_3 - 1U == 0) {
      fVar3 = *(float *)(param_2 + 0x10);
    }
    fVar4 = fVar3 + *(float *)(param_2 + 0x1c);
    if (param_3 != 5) {
      fVar4 = fVar3;
    }
    uVar1 = (int)DAT_101e94300 - 1;
    fVar3 = fVar4 + (float)uVar1 * *(float *)(param_2 + 0x18);
    if ((int)DAT_101e94300 == 0 || uVar1 == 0) {
      fVar3 = fVar4;
    }
    fVar3 = fVar3 + (DAT_101e94260 - *(float *)(lVar2 + 0x38)) * *(float *)(param_2 + 0x2c);
  }
  return fVar3;
}




void FUN_1003dfc78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  FUN_1003dfcb0(lVar1,param_2,*(uint *)(param_1 + 0x238) >> 10 & 7,param_3);
  return;
}




/* WARNING: Type propagation algorithm not settling */

float FUN_1003dfcb0(long param_1,long param_2,int param_3,uint param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = 0.0;
  if ((param_4 & 1) != 0) {
    fVar4 = (float)(param_3 + -1);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar2 = *(float *)(param_2 + 0x10);
    if (param_3 != 5) {
      fVar2 = 0.0;
    }
    fVar2 = *(float *)(param_2 + 8) + fVar4 * *(float *)(param_2 + 0xc) + fVar2;
  }
  if ((param_4 >> 5 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar4 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
    fVar4 = (float)(int)(DAT_101e94300 + -1.0);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x20) * fVar4;
  }
  if ((param_4 >> 1 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar4 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
    fVar2 = fVar2 + *(float *)(param_2 + 0x18) * DAT_101e94270;
  }
  if ((param_4 >> 2 & 1) != 0) {
    fVar2 = fVar2 + *(float *)(param_2 + 0x18) * *(float *)(*(long *)(param_1 + 0x40) + 0xfc);
  }
  if ((param_4 >> 3 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar4 = *(float *)(lVar1 + 0x4c) + *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0)
    ;
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x1b4),DAT_101e94334);
    fVar2 = fVar2 + *(float *)(param_2 + 0x14) * DAT_101e94274;
  }
  if ((param_4 >> 4 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar4 = *(float *)(lVar1 + 0x50) + *(float *)(lVar1 + 0x104) * (*(float *)(lVar1 + 0x26c) + 1.0)
    ;
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x1b8),DAT_101e94338);
    fVar2 = fVar2 + *(float *)(param_2 + 0x1c) * DAT_101e94278;
  }
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = fVar2;
  if (fVar2 <= fVar3) {
    fVar4 = fVar3;
  }
  if ((param_4 & 0x40) != 0) {
    fVar2 = fVar4;
  }
  fVar4 = (float)NEON_fminnm(fVar2,fVar3);
  if ((param_4 & 0x80) != 0) {
    fVar2 = fVar4;
  }
  return fVar2;
}




undefined1  [16]
FUN_1003dfe60(long param_1,ulong param_2,int param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 0x18);
  do {
    lVar4 = *plVar3;
    plVar3 = (long *)(lVar4 + 0x20);
  } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar4 + (param_2 & 0xffffffff) * 8 + 0x50);
  plVar3 = *(long **)(*(long *)(lVar2 + 0x38) + 0xb0);
  lVar4 = *plVar3;
  if (lVar4 != 0 && param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      plVar3 = plVar3 + 1;
      lVar4 = *plVar3;
    } while (lVar4 != 0 && param_3 != 0);
    uVar1 = 0;
    if (lVar2 == 0) goto LAB_1003dfecc;
  }
  uVar1 = *(uint *)(lVar2 + 0x238) >> 10 & 7;
LAB_1003dfecc:
  if ((param_5 == 0) && (uVar1 == 0)) {
    return ZEXT816(0);
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  FUN_1003dfcb0(param_1,lVar4,uVar1);
  auVar5._4_4_ = extraout_var;
  auVar5._0_4_ = extraout_s0;
  auVar5._8_8_ = extraout_var_00;
  return auVar5;
}




void FUN_1003dfee8(long param_1,undefined4 *param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dea0))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar1 = FUN_1003dff84(lVar1,*param_2);
  plVar3 = *(long **)(*(long *)(lVar1 + 0x48) + 0x28);
  lVar2 = *plVar3;
  if (lVar2 != 0 && param_3 != 0) {
    do {
      plVar3 = plVar3 + 1;
      param_3 = param_3 + -1;
      lVar2 = *plVar3;
    } while (lVar2 != 0 && param_3 != 0);
  }
  FUN_1003dfcb0(param_1,lVar2,*(undefined4 *)(lVar1 + 0x50),param_4);
  return;
}




void FUN_1003dff84(undefined8 param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_68 [8];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_100472138(param_1,local_68,8);
  if (uVar1 != 0) {
    uVar3 = (ulong)uVar1;
    plVar4 = local_68;
    do {
      lVar2 = *plVar4;
      if (*(int *)(lVar2 + 0x40) == param_2) goto LAB_1003dffe0;
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar2 = 0;
LAB_1003dffe0:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar2);
}




undefined1  [16]
thunk_FUN_1003dfe60(long param_1,ulong param_2,int param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 0x18);
  do {
    lVar4 = *plVar3;
    plVar3 = (long *)(lVar4 + 0x20);
  } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar4 + (param_2 & 0xffffffff) * 8 + 0x50);
  plVar3 = *(long **)(*(long *)(lVar2 + 0x38) + 0xb0);
  lVar4 = *plVar3;
  if (lVar4 != 0 && param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      plVar3 = plVar3 + 1;
      lVar4 = *plVar3;
    } while (lVar4 != 0 && param_3 != 0);
    uVar1 = 0;
    if (lVar2 == 0) goto LAB_1003dfecc;
  }
  uVar1 = *(uint *)(lVar2 + 0x238) >> 10 & 7;
LAB_1003dfecc:
  if ((param_5 == 0) && (uVar1 == 0)) {
    return ZEXT816(0);
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  FUN_1003dfcb0(param_1,lVar4,uVar1);
  auVar5._4_4_ = extraout_var;
  auVar5._0_4_ = extraout_s0;
  auVar5._8_8_ = extraout_var_00;
  return auVar5;
}




void thunk_FUN_1003df710(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x228);
  if (*plVar1 != 0 && param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      plVar1 = plVar1 + 1;
    } while (*plVar1 != 0 && param_2 != 0);
  }
  FUN_1003df74c();
  return;
}

