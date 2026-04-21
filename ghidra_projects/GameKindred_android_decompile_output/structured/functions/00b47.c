// functions/00b47 — 10 functions
#include "libGameKindred.h"




void thunk_FUN_00b47cd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_150;
  void *pvStack_148;
  undefined8 uStack_140;
  void *pvStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [16];
  long lStack_118;
  code *pcStack_110;
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
  uVar2 = FUN_00e6ce7c("MAIN_SEASON_GUILD_REWARDS_GENERIC_TOOLTIP",0);
  thunk_FUN_00e7051c(&uStack_140,uVar2);
  FUN_00e705c8(&uStack_80,"[SEASON_NAME]");
  FUN_00cb488c(&uStack_150,0,0,0);
  FUN_00e71248(&uStack_140,0,&uStack_80,&uStack_150);
  if (pvStack_148 != (void *)0x0) {
    operator_delete__(pvStack_148);
    uStack_150 = 0;
    pvStack_148 = (void *)0x0;
  }
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    uStack_80 = 0;
    pvStack_78 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&uStack_80,&uStack_140);
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
  lStack_100 = param_1 + 0xe340;
  uStack_88 = 2;
  uStack_a0 = 0x3dcccccd;
  uVar3 = FUN_0092ea9c();
  uStack_9c = 0x447a0000;
  if ((uVar3 & 1) == 0) {
    uStack_9c = 0x44480000;
  }
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_MORE_INFO",0);
  FUN_00910394(&uStack_e0,uVar2);
  pcStack_110 = FUN_00b47f08;
  lStack_118 = param_1;
  FUN_008fa54c(&uStack_80,"guildRewardsSeasonLabel");
  FUN_00b28094(param_1 + 0x11868,&uStack_80,&ppuStack_130);
  if ((uStack_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,bStack_70));
  }
  if (pvStack_138 != (void *)0x0) {
    operator_delete__(pvStack_138);
    uStack_140 = 0;
    pvStack_138 = (void *)0x0;
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




void FUN_00b47014(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  undefined4 local_60;
  float local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0xdd80;
  FUN_00ed0470(lVar1,1,0,1,1);
  fVar7 = param_2;
  FUN_00f01980(lVar1);
  iVar2 = *(int *)(param_3 + 0x11978);
  FUN_00f13e54(param_3 + 0xdbe0);
  fVar7 = fVar7 - param_2;
  if (iVar2 < 0x1c) {
    if (*(float *)(param_3 + 0xddc4) != fVar7) {
      *(float *)(param_3 + 0xddc4) = fVar7;
      FUN_0091ada4(lVar1);
    }
  }
  else {
    fVar8 = 800.0;
    if (*(float *)(param_3 + 0xddc4) != fVar7 + 800.0) {
      *(float *)(param_3 + 0xddc4) = fVar7 + 800.0;
      FUN_0091ada4(lVar1);
    }
    fVar7 = *(float *)(param_3 + 0xe75c);
    FUN_00f13e54(param_3 + 0xdbe0);
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    local_5c = fVar8 * 0.3333 - fVar7;
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdc08(puVar6);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    local_60 = 0;
    FUN_00efdc50(puVar6,&local_60);
    FUN_00efcac4((float)(*(int *)(param_3 + 0x11978) / 10) * 0.1 + 0.2,puVar6);
    FUN_00efcb24(puVar6,FUN_0091aa80);
    FUN_00f022a0(lVar1,puVar6);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b47234(void)

{
  return;
}




void FUN_00b47238(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b47240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b47244(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b4724c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b47250(long param_1)

{
  long *plVar1;
  float *pfVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  long local_98;
  
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  uVar7 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar7 & 1,&local_a4,&local_a8,&local_ac);
  uVar8 = FUN_0092ea9c();
  fVar15 = local_a4 - local_ac;
  fVar16 = fVar15 * 0.8;
  plVar9 = (long *)(param_1 + 0xdbe0);
  fVar13 = (fVar15 - fVar16) * 0.5;
  fVar11 = 300.0;
  if ((uVar8 & 1) == 0) {
    fVar11 = 180.0;
  }
  pfVar2 = (float *)(param_1 + 0xdc24);
  if ((*(float *)(param_1 + 0xdc20) != fVar13) || (*pfVar2 != fVar11)) {
    *(float *)(param_1 + 0xdc20) = fVar13;
    *pfVar2 = fVar11;
    FUN_0091ada4(plVar9);
  }
  local_a0 = 0;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_a0);
  fVar13 = local_a8 - *pfVar2;
  FUN_00f13f08(fVar15,plVar9);
  plVar9 = (long *)(param_1 + 0xd890);
  FUN_00f0dad0(fVar16 + -40.0,plVar9,1);
  fVar17 = fVar16 * 0.5;
  FUN_00f01c20(plVar9);
  fVar11 = fVar13 * 0.5;
  if ((*(float *)(param_1 + 0xd8d0) != fVar17) ||
     (fVar13 = *(float *)(param_1 + 0xd8d4), fVar13 != fVar11)) {
    *(float *)(param_1 + 0xd8d0) = fVar17;
    *(float *)(param_1 + 0xd8d4) = fVar11;
    FUN_0091ada4(plVar9);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_a0);
  plVar3 = (long *)(param_1 + 0xd9c0);
  FUN_00f0dad0(fVar16 + -80.0,plVar3,1);
  FUN_00f01c20(plVar9);
  fVar11 = fVar13;
  FUN_00f01c20(plVar3);
  fVar14 = *(float *)(param_1 + 0xda00);
  fVar11 = fVar13 + fVar11 * 0.5 + 5.0;
  pfVar4 = (float *)(param_1 + 0xda04);
  if ((fVar14 != fVar17) || (fVar14 = *pfVar4, fVar14 != fVar11)) {
    *(float *)(param_1 + 0xda00) = fVar17;
    *pfVar4 = fVar11;
    FUN_0091ada4(plVar3);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_a0);
  fVar11 = *pfVar4;
  FUN_00f01c20(plVar3);
  plVar9 = (long *)(param_1 + 0xc418);
  fVar11 = fVar11 + fVar14 * 0.5 + 20.0;
  FUN_00b47838(fVar16,plVar9);
  if ((*(float *)(param_1 + 0xc458) != 0.0) || (*(float *)(param_1 + 0xc45c) != fVar11)) {
    *(float *)(param_1 + 0xc458) = 0.0;
    *(float *)(param_1 + 0xc45c) = fVar11;
    FUN_0091ada4(plVar9);
  }
  local_a0 = 0;
  plVar1 = (long *)(param_1 + 200);
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_a0);
  plVar9 = (long *)(param_1 + 200);
  lVar10 = 10;
  do {
    FUN_00b47838(fVar16,plVar9);
    (**(code **)(*plVar1 + 0x60))(plVar1,0,0,1,1);
    fVar14 = fVar14 * (float)((int)lVar10 + -1);
    fVar13 = fVar11 + 150.0 + fVar14;
    if ((*(float *)(plVar9 + 8) != 0.0) ||
       (fVar14 = *(float *)((long)plVar9 + 0x44), fVar14 != fVar13)) {
      *(undefined4 *)(plVar9 + 8) = 0;
      *(float *)((long)plVar9 + 0x44) = fVar13;
      FUN_0091ada4(plVar9);
    }
    local_a0 = 0;
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_a0);
    lVar10 = lVar10 + -1;
    plVar9 = plVar9 + 0x271;
  } while (lVar10 != 0);
  fVar11 = *pfVar4;
  FUN_00f01c20(plVar3);
  fVar11 = fVar11 + fVar14 * 0.5 + 20.0;
  plVar9 = (long *)(param_1 + 0xd7a0);
  FUN_00f13f08(fVar16,*pfVar2 + fVar11,plVar9);
  pfVar4 = (float *)(param_1 + 0xd7e0);
  pfVar5 = (float *)(param_1 + 0xd7e4);
  if ((*pfVar4 != fVar17) || (*pfVar5 != fVar11)) {
    *pfVar4 = fVar17;
    *pfVar5 = fVar11;
    FUN_0091ada4(plVar9);
  }
  local_a0 = 0x3f8000003f000000;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_a0);
  plVar3 = (long *)(param_1 + 0xdaf0);
  FUN_00f13f18(plVar3,&DAT_03218ef8);
  lVar10 = param_1 + 0xdd80;
  uVar12 = FUN_00ed0470(lVar10,1,0,1,1);
  FUN_00ed0470(lVar10,1,0,1,1);
  FUN_00ed02d8(uVar12,lVar10);
  FUN_00f13f08(fVar16,fVar11 + *pfVar2 + fVar11 + *pfVar2,plVar9);
  if ((*pfVar4 != fVar17) || (*pfVar5 != fVar11)) {
    *pfVar4 = fVar17;
    *pfVar5 = fVar11;
    FUN_0091ada4(plVar9);
  }
  local_a0 = 0x3f8000003f000000;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_a0);
  fVar13 = 240.0;
  FUN_00f13f08(fVar16,plVar3);
  fVar11 = *(float *)(param_1 + 0x10c);
  (**(code **)(*(long *)(param_1 + 200) + 0x60))(plVar1,0,0,1,1);
  fVar11 = fVar11 + fVar13;
  if ((*(float *)(param_1 + 0xdb30) != fVar17) ||
     (fVar13 = *(float *)(param_1 + 0xdb34), fVar13 != fVar11)) {
    *(float *)(param_1 + 0xdb30) = fVar17;
    *(float *)(param_1 + 0xdb34) = fVar11;
    FUN_0091ada4(plVar3);
  }
  local_a0 = 0x3f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_a0);
  fVar11 = DAT_02be3670;
  FUN_00f01c54(param_1 + 0xe2b8,0,0,1,1);
  fVar11 = fVar11 + fVar13 * 0.5 + -16.0;
  if ((*(float *)(param_1 + 0xe2f8) != fVar15 + -48.0) || (*(float *)(param_1 + 0xe2fc) != fVar11))
  {
    *(float *)(param_1 + 0xe2f8) = fVar15 + -48.0;
    *(float *)(param_1 + 0xe2fc) = fVar11;
    FUN_0091ada4(param_1 + 0xe2b8);
  }
  if (*(long *)(lVar6 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b47838(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  fVar9 = 0.35;
  plVar6 = (long *)(param_2 + 0x178);
  *(float *)(param_2 + 0x1380) = param_1;
  fVar11 = param_1 * 0.35;
  (**(code **)(*(long *)(param_2 + 0x178) + 0x48))(plVar6);
  fVar13 = fVar9 * 0.6 * 0.5;
  lVar7 = 9;
  do {
    fVar8 = fVar13 + 10.0 + (fVar9 * 0.6 + 2.0) * (float)((int)lVar7 + -1);
    if ((*(float *)(plVar6 + 8) != fVar11 + -10.0) || (*(float *)((long)plVar6 + 0x44) != fVar8)) {
      *(float *)(plVar6 + 8) = fVar11 + -10.0;
      *(float *)((long)plVar6 + 0x44) = fVar8;
      FUN_0091ada4(plVar6);
    }
    local_90 = 0x3f0000003f800000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_90);
    lVar7 = lVar7 + -1;
    plVar6 = plVar6 + 0x26;
  } while (lVar7 != 0);
  lVar7 = param_2 + 0xc28;
  fVar8 = 0.0;
  FUN_00f0db64(fVar11 + -20.0,0,0x3f800000,lVar7);
  FUN_00f01c20(lVar7);
  fVar8 = fVar8 * 0.5;
  fVar9 = fVar13 + *(float *)(param_2 + 0x1bc) + fVar8 + 2.0;
  if ((*(float *)(param_2 + 0xc68) != fVar11) ||
     (fVar8 = *(float *)(param_2 + 0xc6c), fVar8 != fVar9)) {
    *(float *)(param_2 + 0xc68) = fVar11;
    *(float *)(param_2 + 0xc6c) = fVar9;
    FUN_0091ada4(lVar7);
  }
  local_90 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_2 + 0xc28) + 0x28))(lVar7,&local_90);
  fVar13 = *(float *)(param_2 + 0xc6c);
  FUN_00f01c20(lVar7);
  lVar7 = param_2 + 0xe10;
  fVar9 = fVar8;
  fVar11 = (float)FUN_00f0eac0(lVar7);
  FUN_00f0eac0(lVar7);
  if ((*(float *)(param_2 + 0xe50) != fVar11 * 0.5) || (*(float *)(param_2 + 0xe54) != fVar9 * 0.5))
  {
    *(float *)(param_2 + 0xe50) = fVar11 * 0.5;
    *(float *)(param_2 + 0xe54) = fVar9 * 0.5;
    FUN_0091ada4(lVar7);
  }
  local_90 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_2 + 0xe10) + 0x28))(lVar7,&local_90);
  fVar11 = *(float *)(param_2 + 0xe50);
  fVar9 = (float)FUN_00f0eac0(lVar7);
  fVar9 = fVar11 + fVar9 * 0.5 + 10.0;
  if ((*(float *)(param_2 + 0xf40) != fVar9) ||
     (*(float *)(param_2 + 0xf44) != *(float *)(param_2 + 0xe54))) {
    *(float *)(param_2 + 0xf40) = fVar9;
    *(float *)(param_2 + 0xf44) = *(float *)(param_2 + 0xe54);
    FUN_0091ada4(param_2 + 0xf00);
  }
  local_90 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_2 + 0xf00) + 0x28))(param_2 + 0xf00,&local_90);
  fVar10 = *(float *)(param_2 + 0xe50);
  fVar12 = *(float *)(param_2 + 0xe54);
  lVar1 = param_2 + 0x1030;
  FUN_00f0eac0(lVar7);
  fVar11 = 10.0;
  FUN_00f0eac0(lVar1);
  fVar9 = fVar11 * 0.5 + fVar12 + fVar9 * 0.5 + 10.0;
  if ((*(float *)(param_2 + 0x1070) != fVar10) || (*(float *)(param_2 + 0x1074) != fVar9)) {
    *(float *)(param_2 + 0x1070) = fVar10;
    *(float *)(param_2 + 0x1074) = fVar9;
    FUN_0091ada4(lVar1);
  }
  local_90 = 0x3f0000003f000000;
  fVar13 = fVar13 + fVar8 * 0.5;
  fVar8 = param_1 * 0.75;
  (**(code **)(*(long *)(param_2 + 0x1030) + 0x28))(lVar1,&local_90);
  fVar11 = *(float *)(param_2 + 0x1070);
  fVar9 = (float)FUN_00f0eac0(lVar1);
  fVar9 = fVar11 + fVar9 * 0.5 + 10.0;
  if ((*(float *)(param_2 + 0x1160) != fVar9) ||
     (*(float *)(param_2 + 0x1164) != *(float *)(param_2 + 0x1074))) {
    *(float *)(param_2 + 0x1160) = fVar9;
    *(float *)(param_2 + 0x1164) = *(float *)(param_2 + 0x1074);
    FUN_0091ada4(param_2 + 0x1120);
  }
  local_90 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_2 + 0x1120) + 0x28))(param_2 + 0x1120,&local_90);
  lVar2 = param_2 + 0x1250;
  FUN_00f0dad0((param_1 - fVar8) + -20.0,lVar2,1);
  bVar5 = (*(uint *)(param_2 + 0x10b4) & 4) != 0;
  lVar3 = 0xe54;
  if (bVar5) {
    lVar3 = 0x1074;
  }
  fVar11 = *(float *)(param_2 + lVar3);
  if (bVar5) {
    lVar7 = lVar1;
  }
  FUN_00f0eac0(lVar7);
  fVar11 = fVar11 + fVar9 * 0.5;
  fVar9 = fVar11 + 10.0;
  if ((*(float *)(param_2 + 0x1290) != 0.0) ||
     (fVar11 = *(float *)(param_2 + 0x1294), fVar11 != fVar9)) {
    *(undefined4 *)(param_2 + 0x1290) = 0;
    *(float *)(param_2 + 0x1294) = fVar9;
    FUN_0091ada4(lVar2);
  }
  local_90 = 0;
  (**(code **)(*(long *)(param_2 + 0x1250) + 0x28))(lVar2,&local_90);
  lVar7 = param_2 + 0xd58;
  FUN_00f01c54(lVar7,1,1,1,1);
  FUN_00f13f08(lVar7);
  FUN_00f13e54(lVar7);
  fVar9 = fVar13 * 0.5 + fVar11 * -0.5;
  if ((*(float *)(param_2 + 0xd98) != fVar8) || (*(float *)(param_2 + 0xd9c) != fVar9)) {
    *(float *)(param_2 + 0xd98) = fVar8;
    *(float *)(param_2 + 0xd9c) = fVar9;
    FUN_0091ada4(lVar7);
  }
  local_90 = 0;
  (**(code **)(*(long *)(param_2 + 0xd58) + 0x28))(lVar7,&local_90);
  *(uint *)(param_2 + 0xddc) = *(uint *)(param_2 + 0xddc) | 0x10;
  FUN_00f13f08(param_1,fVar13 + 10.0,param_2 + 0x88);
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b47cd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined **local_130;
  undefined1 auStack_128 [16];
  long local_118;
  code *pcStack_110;
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
  uVar2 = FUN_00e6ce7c("MAIN_SEASON_GUILD_REWARDS_GENERIC_TOOLTIP",0);
  thunk_FUN_00e7051c(&local_140,uVar2);
  FUN_00e705c8(&local_80,"[SEASON_NAME]");
  FUN_00cb488c(&local_150,0,0,0);
  FUN_00e71248(&local_140,0,&local_80,&local_150);
  if (local_148 != (void *)0x0) {
    operator_delete__(local_148);
    local_150 = 0;
    local_148 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&local_80,&local_140);
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
  local_100 = param_1 + 0xe340;
  local_88 = 2;
  local_a0 = 0x3dcccccd;
  uVar3 = FUN_0092ea9c();
  local_9c = 0x447a0000;
  if ((uVar3 & 1) == 0) {
    local_9c = 0x44480000;
  }
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_MORE_INFO",0);
  FUN_00910394(&local_e0,uVar2);
  pcStack_110 = FUN_00b47f08;
  local_118 = param_1;
  FUN_008fa54c(&local_80,"guildRewardsSeasonLabel");
  FUN_00b28094(param_1 + 0x11868,&local_80,&local_130);
  if ((local_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,local_70));
  }
  if (local_138 != (void *)0x0) {
    operator_delete__(local_138);
    local_140 = 0;
    local_138 = (void *)0x0;
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




void FUN_00b47f08(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5454("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_00b47f30(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  undefined **local_140;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  void *local_d0;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined4 local_98;
  ulong local_90;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  void *local_70;
  undefined4 local_68;
  undefined8 local_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((-1 < (int)param_3) || (param_3 < *(uint *)(param_1 + 0x11968))) {
    FUN_00b26098(&local_140);
    thunk_FUN_00e7051c(&local_90,
                       *(long *)(*(long *)(param_1 + 0x11970) + (ulong)param_3 * 8) + 0x3138);
    FUN_008fcdb8(&local_80,&DAT_0320ffa8);
    local_68 = 1;
    local_64 = 0;
    FUN_009c82b4(auStack_138,&local_90);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    lVar3 = *(long *)(param_1 + 0x11970);
    local_110 = *(undefined8 *)(lVar3 + (ulong)param_3 * 8);
    local_98 = 0;
    local_b0 = 0x3f000000;
    local_a8 = 1;
    plVar2 = *(long **)(lVar3 + (ulong)param_3 * 8);
    if ((char)plVar2[0x629] == '\0') {
      local_c0 = (float)(**(code **)(*plVar2 + 0x58))(plVar2,0,0,1,1);
      local_c0 = local_c0 * -0.5;
      fVar4 = 8.0;
    }
    else {
      local_c0 = (float)(**(code **)(*plVar2 + 0x60))(plVar2,0,0,1,1);
      local_c0 = local_c0 * 0.5;
      fVar4 = 10.0;
    }
    local_c0 = local_c0 + fVar4;
    local_bc = 0;
    FUN_008fa54c(&local_90,"nearestGuildTagName");
    FUN_0093de70(&local_90,param_3);
    FUN_00b28094(param_1 + 0x11868,&local_90,&local_140);
    if ((local_90 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_7f,local_80));
    }
    local_140 = &PTR_FUN_027de7f0;
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_f0 = 0;
      local_e8 = (void *)0x0;
    }
    FUN_009c8464(auStack_138,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

