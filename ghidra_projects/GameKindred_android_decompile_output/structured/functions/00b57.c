// functions/00b57 — 11 functions
#include "libGameKindred.h"




void FUN_00b57430(long *param_1,uint param_2)

{
  FUN_00b7987c(param_1,param_2 & 1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b57464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x198))(param_1);
    return;
  }
  return;
}




long * FUN_00b57474(long param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  short sVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  byte *pbVar9;
  undefined4 uVar10;
  byte local_a8 [16];
  void *local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  long *plStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar5 = operator_new(0xbf0);
  FUN_00b576ac();
  uVar10 = *(undefined4 *)(param_1 + 0x2c68);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x2c64),plVar5);
  pbVar9 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar9 = param_4 + 1;
  }
  FUN_008fa54c(&local_80,pbVar9);
  FUN_00b359a8(plVar5,param_2,&local_80,param_1 + 0x2c48);
  if (((byte)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  (**(code **)(*plVar5 + 0x178))(plVar5);
  FUN_00b3605c(plVar5,param_4);
  pbVar9 = *(byte **)(param_3 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x2c38);
  if ((*param_3 & 1) == 0) {
    pbVar9 = param_3 + 1;
  }
  FUN_00e705c8(&local_90,pbVar9);
  uVar6 = FUN_00e70b04(&local_90);
  if ((uVar6 & 1) != 0) {
    pbVar9 = param_4 + 1;
    if ((*param_4 & 1) != 0) {
      pbVar9 = *(byte **)(param_4 + 0x10);
    }
    uVar7 = FUN_00e6ce7c(pbVar9,0);
    FUN_00910394(&local_90,uVar7);
  }
  FUN_00a9f888(param_1,uVar2,&local_90,plVar5);
  sVar3 = (short)uVar2;
  FUN_009697c8(local_a8,param_1 + 0x2c48,".");
  uVar6 = (ulong)(*param_4 >> 1);
  pbVar9 = param_4 + 1;
  if ((*param_4 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 8);
    pbVar9 = *(byte **)(param_4 + 0x10);
  }
  puVar8 = (ulong *)FUN_0090de84(local_a8,pbVar9,uVar6);
  local_70 = (void *)puVar8[2];
  plStack_78 = (long *)puVar8[1];
  local_80 = *puVar8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  pvVar1 = (void *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pvVar1 = local_70;
  }
  FUN_00a9f170(param_1 + 0x310,(int)sVar3,pvVar1);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_00f01fcc(param_1 + 0x310,1,0,1,1);
  *(undefined4 *)(plVar5 + 0x7b) = uVar10;
  local_80 = CONCAT62(local_80._2_6_,sVar3);
  plStack_78 = plVar5;
  FUN_00b5519c(param_1 + 0x2c38,&local_80);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar5;
}




void FUN_00b576ac(undefined8 *param_1)

{
  FUN_00b2ef90();
  *param_1 = &PTR_thunk_FUN_00b2f254_027e3f68;
  param_1[0x6d] = &PTR_FUN_027e4148;
  return;
}




void FUN_00b576e8(long param_1)

{
  FUN_00b2f254(param_1 + -0x368);
  return;
}




void FUN_00b576f0(void *param_1)

{
  FUN_00b2f254();
  operator_delete(param_1);
  return;
}




void FUN_00b57714(long param_1)

{
  FUN_00b2f254((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_00b57740(undefined8 *param_1)

{
  FUN_00b2ef90();
  *param_1 = &PTR_thunk_FUN_00b2f254_027e4170;
  param_1[0x6d] = &PTR_FUN_027e4350;
  return;
}




void FUN_00b5777c(long param_1)

{
  FUN_00b2f254(param_1 + -0x368);
  return;
}




void FUN_00b57784(void *param_1)

{
  FUN_00b2f254();
  operator_delete(param_1);
  return;
}




void FUN_00b577a8(long param_1)

{
  FUN_00b2f254((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_00b577d4(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
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
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *plVar44;
  long *plVar45;
  long *plVar46;
  long *plVar47;
  long *plVar48;
  long *plVar49;
  long *plVar50;
  byte *pbVar51;
  float *pfVar52;
  uint *puVar53;
  float *pfVar54;
  char *pcVar55;
  undefined4 uVar56;
  uint uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  long lVar63;
  byte bVar64;
  uint uVar65;
  ulong uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined4 uVar69;
  long lVar70;
  long *plVar71;
  long *plVar72;
  long *plVar73;
  long *plVar74;
  float fVar75;
  float fVar76;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_12c [4];
  float local_128;
  char local_124 [4];
  undefined8 local_120;
  undefined8 local_118;
  code *local_e0;
  long *plStack_d8;
  code *local_d0;
  code *local_c8;
  long *local_c0;
  undefined4 local_b8;
  long local_a0;
  
  lVar63 = tpidr_el0;
  local_a0 = *(long *)(lVar63 + 0x28);
  FUN_00a9f290();
  FUN_00948cd8(param_1 + 0x587);
  *param_1 = (long)&PTR_FUN_027e4378;
  param_1[0x587] = (long)&PTR_FUN_027e45c8;
  param_1[0x58c] = (long)&PTR_FUN_027e4a18;
  pcVar3 = (code *)(param_1 + 0x58e);
  param_1[0x58d] = 0;
  param_1[0x58b] = (long)&PTR_FUN_027e49c0;
  param_1[0x58a] = (long)&PTR_FUN_027e4960;
  FUN_00bf16fc();
  plVar4 = param_1 + 0x595;
  FUN_00f0c714();
  plVar73 = param_1 + 0x5b0;
  FUN_00ab6c24(plVar73,0);
  plVar5 = param_1 + 0x868;
  FUN_00ab6c24(plVar5,0);
  plVar6 = param_1 + 0xb20;
  FUN_00f0d160();
  plVar7 = param_1 + 0xb46;
  FUN_00abbf0c();
  FUN_00f13ca4();
  plVar8 = param_1 + 0xefc;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar9 = param_1 + 0xf48;
  FUN_00f017e8();
  plVar10 = param_1 + 0xf59;
  param_1[0xf48] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar11 = param_1 + 0xf77;
  FUN_00f0e4a8();
  FUN_00f13ca4();
  plVar12 = param_1 + 0xfac;
  FUN_00f017e8(plVar12);
  plVar13 = param_1 + 0xfbd;
  param_1[0xfac] = (long)&PTR_FUN_027c1f80;
  FUN_00f11234();
  plVar72 = param_1 + 0xff1;
  FUN_00ecfd6c(plVar72,0);
  FUN_00f0d160();
  FUN_00f0d160();
  plVar14 = param_1 + 0x10e4;
  FUN_00ab6c24(plVar14,0);
  plVar15 = param_1 + 0x139c;
  FUN_00f0d160(plVar15);
  plVar74 = param_1 + 0x13c2;
  lVar70 = 0x1300;
  do {
    FUN_00f0d160(plVar74);
    lVar70 = lVar70 + -0x130;
    plVar74 = plVar74 + 0x26;
  } while (lVar70 != 0);
  plVar74 = param_1 + 0x1622;
  FUN_00ac7e14();
  plVar16 = param_1 + 0x1b49;
  FUN_00ac7e14();
  plVar17 = param_1 + 0x2070;
  FUN_00f0e4a8();
  plVar18 = param_1 + 0x208e;
  FUN_00f0e4a8();
  plVar19 = param_1 + 0x20ac;
  FUN_00f017e8(plVar19);
  plVar20 = param_1 + 0x20bd;
  *plVar19 = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar21 = param_1 + 0x20db;
  FUN_00f0d160();
  plVar22 = param_1 + 0x2101;
  FUN_00ab6c24(plVar22,0);
  plVar23 = param_1 + 0x23b9;
  FUN_00ab6c24(plVar23,0);
  FUN_00f0d160();
  plVar24 = param_1 + 0x2697;
  FUN_00f0e4a8();
  plVar25 = param_1 + 0x26b5;
  FUN_00f13ca4();
  lVar70 = 0x10c30;
  plVar71 = param_1 + 0x26cc;
  do {
    FUN_00ae7080(plVar71);
    lVar70 = lVar70 + -0x1328;
    plVar71 = plVar71 + 0x265;
  } while (lVar70 != 0);
  plVar71 = param_1 + 0x4852;
  FUN_00ae7080();
  plVar26 = param_1 + 0x4ab8;
  param_1[0x4ab7] = 0;
  FUN_00f017e8(plVar26);
  plVar27 = param_1 + 0x4ac9;
  *plVar26 = (long)&PTR_FUN_027c1f80;
  FUN_00b1f530();
  plVar28 = param_1 + 0x4c23;
  FUN_00f0d160();
  plVar29 = param_1 + 0x4c49;
  FUN_00f017e8(plVar29);
  plVar30 = param_1 + 0x4c5a;
  *plVar29 = (long)&PTR_FUN_027c1f80;
  FUN_00f11234(plVar30);
  plVar31 = param_1 + 0x4c8e;
  FUN_00ecfd6c(plVar31,0);
  plVar32 = param_1 + 0x4d35;
  FUN_00f017e8(plVar32);
  plVar33 = param_1 + 0x4d46;
  *plVar32 = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  plVar34 = param_1 + 0x4d6c;
  FUN_00f0d160();
  plVar35 = param_1 + 0x4d92;
  FUN_00f0d160();
  plVar36 = param_1 + 0x4db8;
  FUN_00f0e4a8();
  FUN_00b5efb4();
  plVar37 = param_1 + 0x4e95;
  FUN_00f017e8(plVar37);
  plVar38 = param_1 + 0x4ea6;
  *plVar37 = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  plVar39 = param_1 + 0x4ecc;
  FUN_00f0d160();
  plVar40 = param_1 + 0x4ef2;
  FUN_00f0d160();
  plVar41 = param_1 + 0x4f18;
  FUN_00f0e4a8();
  FUN_00b5efb4();
  plVar42 = param_1 + 0x4ff5;
  FUN_00f017e8(plVar42);
  plVar43 = param_1 + 0x5006;
  *plVar42 = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  plVar44 = param_1 + 0x502c;
  FUN_00f0d160();
  plVar45 = param_1 + 0x5052;
  FUN_00f0d160();
  plVar46 = param_1 + 0x5078;
  FUN_00f0e4a8();
  FUN_00b5efb4();
  plVar47 = param_1 + 0x515b;
  param_1[0x515a] = 0;
  param_1[0x5159] = 0;
  param_1[0x5158] = 0;
  param_1[0x5157] = 0;
  param_1[0x5156] = 0;
  param_1[0x5155] = 0;
  FUN_00f0d160();
  plVar48 = param_1 + 0x5181;
  FUN_00f0d160();
  plVar49 = param_1 + 0x51a7;
  FUN_00f017e8(plVar49);
  plVar50 = param_1 + 0x51b8;
  *plVar49 = (long)&PTR_FUN_027c1f80;
  FUN_00ac05a8(plVar50,param_1 + 0x58a);
  param_1[0x59db] = 0;
  param_1[0x59da] = 0;
  param_1[0x59d9] = 0;
  param_1[23000] = 0;
  FUN_0099ceac(param_1 + 0x59dc,"PARTY.PENDING_CHATS",1);
  param_1[0x59e8] = 0;
  param_1[0x59e7] = 0;
  param_1[0x59e9] = 0;
  param_1[0x59f1] = -0x100000000;
  param_1[0x59f3] = 0x1000000;
  *(undefined4 *)((long)param_1 + 0x2cf94) = 0;
  param_1[0x59f4] = 0x10100010101;
  *(undefined1 *)(param_1 + 0x59f5) = 0;
  pbVar51 = (byte *)((long)param_1 + 0x2cfa5);
  FUN_008fa54c(param_1 + 0x59f6,"*GameMode_HF_Private*");
  param_1[0x59f9] = 0;
  pfVar54 = (float *)(param_1 + 0x5a05);
  pfVar52 = (float *)((long)param_1 + 0x2d02c);
  memset(param_1 + 0x5a02,0,0x48);
  param_1[0x59f0] = -1;
  param_1[0x59ef] = -1;
  param_1[0x59ee] = -1;
  param_1[0x59ed] = -1;
  param_1[0x59ec] = -1;
  param_1[0x59eb] = -1;
  param_1[0x59ea] = -1;
  param_1[0x5a01] = -1;
  param_1[0x59ff] = -1;
  param_1[0x59fe] = -1;
  param_1[0x59fd] = -1;
  param_1[0x59fc] = -1;
  param_1[0x59fb] = -1;
  param_1[0x59fa] = -1;
  param_1[0x5a00] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  FUN_00f023ec(plVar9,plVar10,1);
  FUN_00f023ec(plVar9,param_1 + 0xf95,1);
  FUN_00f023ec(plVar9,plVar26,1);
  FUN_00f023ec(plVar26,plVar11,1);
  FUN_00f023ec(plVar26,plVar29,1);
  FUN_00f023ec(plVar29,plVar30,1);
  FUN_00f023ec(plVar30,plVar31,1);
  FUN_00ed026c(plVar31,plVar37,1);
  FUN_00ed026c(plVar31,plVar42,1);
  FUN_00ed026c(plVar31,plVar32,1);
  FUN_00ed026c(plVar31,plVar38,1);
  FUN_00ed026c(plVar31,plVar39,1);
  FUN_00ed026c(plVar31,plVar40,1);
  FUN_00ed026c(plVar31,param_1 + 0x4f36,1);
  FUN_00ed026c(plVar31,plVar41,1);
  FUN_00ed026c(plVar31,plVar43,1);
  FUN_00ed026c(plVar31,plVar44,1);
  FUN_00ed026c(plVar31,plVar45,1);
  FUN_00ed026c(plVar31,param_1 + 0x5096,1);
  FUN_00ed026c(plVar31,plVar46,1);
  FUN_00ed026c(plVar31,plVar33,1);
  FUN_00ed026c(plVar31,plVar34,1);
  FUN_00ed026c(plVar31,plVar35,1);
  FUN_00ed026c(plVar31,param_1 + 0x4dd6,1);
  FUN_00ed026c(plVar31,plVar36,1);
  FUN_00f023ec(plVar30,plVar47,1);
  FUN_00f023ec(plVar30,plVar48,1);
  FUN_00f023ec(plVar26,plVar49,1);
  FUN_00f023ec(plVar49,plVar50,1);
  FUN_00f023ec(plVar26,plVar27,1);
  FUN_00f023ec(plVar26,plVar28,1);
  FUN_00f023ec(plVar26,plVar18,1);
  FUN_00f023ec(plVar9,plVar12,1);
  FUN_00f023ec(plVar12,param_1 + 0x1098,1);
  FUN_00f023ec(plVar12,param_1 + 0x10be,1);
  FUN_00f023ec(plVar12,plVar14,1);
  FUN_00f023ec(plVar12,plVar22,1);
  FUN_00f023ec(plVar12,plVar23,1);
  FUN_00f023ec(plVar12,plVar13,1);
  FUN_00f023ec(plVar13,plVar72,1);
  FUN_00ed026c(plVar72,plVar25,1);
  plVar72 = param_1 + 0x13c2;
  lVar70 = 0x10;
  do {
    FUN_00f023ec(plVar25,plVar72,1);
    lVar70 = lVar70 + -1;
    plVar72 = plVar72 + 0x26;
  } while (lVar70 != 0);
  FUN_00f023ec(plVar25,plVar15,1);
  FUN_00f023ec(plVar12,param_1 + 0x2671,1);
  FUN_00f023ec(plVar12,plVar19,1);
  FUN_00f023ec(plVar19,plVar20,1);
  FUN_00f023ec(plVar19,plVar21,1);
  FUN_00f023ec(plVar12,plVar17,1);
  FUN_00f023ec(plVar12,plVar16,1);
  FUN_00f023ec(plVar12,plVar74,1);
  FUN_00f023ec(plVar12,plVar71,1);
  FUN_00f023ec(plVar12,plVar8,1);
  FUN_00f023ec(plVar12,param_1 + 0xf22,1);
  FUN_00f023ec(plVar9,plVar4,1);
  FUN_00f023ec(plVar4,plVar73,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,param_1 + 0xee5,1);
  FUN_00f023ec(param_1 + 0xee5,plVar7,1);
  uVar66 = FUN_0092e920();
  if ((uVar66 & 1) != 0) {
    FUN_00f023ec(plVar12,param_1[0x58f],1);
  }
  uVar66 = FUN_0092e920();
  if ((uVar66 & 1) != 0) {
    FUN_00bf1850(pcVar3,0);
  }
  bVar64 = FUN_0092ea9c();
  *pbVar51 = bVar64 & 1;
  FUN_00f00298(&local_128,auStack_12c);
  local_128 = local_128 + -258.0;
  *(uint *)((long)param_1 + 0x2d2c) = *(uint *)((long)param_1 + 0x2d2c) | 4;
  *(uint *)((long)param_1 + 0x7de4) = *(uint *)((long)param_1 + 0x7de4) & 0xfffffffb;
  FUN_0093dbe8();
  *(uint *)((long)param_1 + 0x25644) = *(uint *)((long)param_1 + 0x25644) & 0xfffffffb;
  fVar75 = *(float *)(&DAT_01bb4cf8 + (ulong)(*pbVar51 == 0) * 4);
  fVar76 = *(float *)(&DAT_01bb4d00 + (ulong)(*pbVar51 == 0) * 4);
  *(float *)(param_1 + 0x5a06) = local_128 * fVar75;
  fVar76 = local_128 * fVar75 - fVar76;
  puVar53 = (uint *)((long)param_1 + 0x7b4c);
  *pfVar54 = fVar76;
  *pfVar52 = fVar76;
  *(float *)(param_1 + 0x5a07) = (fVar76 + -30.0) * 0.5;
  *(uint *)((long)param_1 + 0x394) = *(uint *)((long)param_1 + 0x394) & 0xfffffffb;
  *puVar53 = *puVar53 | 0x10;
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_e0 = (code *)CONCAT44(local_e0._4_4_,0xff362626);
  FUN_00f0e670(plVar10,&local_e0,2);
  uVar65 = *puVar53;
  if ((uVar65 & 0x7f80) != 0x2600) {
    *puVar53 = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x2600;
    FUN_0091ada4(plVar10);
  }
  uVar67 = FUN_00e6ce7c("MENU_PLAY_MENU_MODE_PARTY_CTA_BUTTON_TITLE",0);
  FUN_00ab703c(0,*pfVar52,*pfVar52,plVar73,0,uVar67,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00f0d92c(param_1 + 0x694,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00ab7598(0x3ecccccd,plVar73,&DAT_01bee7f6);
  uVar56 = DAT_03210c64;
  local_e0 = thunk_FUN_00b6266c;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar56;
  FUN_009693a0(param_1 + 0x5b1,&local_e0);
  FUN_00b09144(0x40000000,plVar73);
  FUN_00ab7628(0x42f00000,plVar73);
  uVar66 = FUN_0093dbe8();
  if ((uVar66 & 1) != 0) {
    uVar67 = FUN_00e6ce7c("MENU_PLAY_MENU_MODE_PARTY_JOIN_BUTTON_TITLE",0);
    FUN_00ab703c(0,*pfVar52,*pfVar52,plVar5,0,uVar67,&DAT_01bee7fa,&DAT_03218ef8,0);
    FUN_00f0d92c(param_1 + 0x94c,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
    FUN_00ab7598(0x3ecccccd,plVar5,&DAT_01bee7f6);
    local_e0 = thunk_FUN_00b627ac;
    local_c8 = (code *)0x0;
    local_c0 = (long *)0x0;
    local_d0 = (code *)0x0;
    plStack_d8 = param_1;
    local_b8 = uVar56;
    FUN_009693a0(param_1 + 0x869,&local_e0);
    FUN_00b09144(0x40000000,plVar5);
    FUN_00ab7628(0x42f00000,plVar5);
  }
  uVar67 = FUN_00e6ce7c("MENU_PARTY_EXPLANATION",0);
  FUN_00f0d75c(plVar6,uVar67);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  FUN_00f0dac8(plVar6,3);
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar11,&DAT_01bee7f6,2);
  uVar65 = *(uint *)((long)param_1 + 0x7c3c);
  if ((uVar65 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x7c3c) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x2600;
    FUN_0091ada4(plVar11);
  }
  uVar66 = FUN_0093dbe8();
  if ((uVar66 & 1) == 0) {
    uVar67 = FUN_00e6ce7c("MENU_PARTY_CASUAL_MATCH_LABEL",0);
    FUN_00f0d75c(param_1 + 0x1098,uVar67);
  }
  uVar67 = FUN_00e6ce7c("MENU_PARTY_BOT_DIFFICULTY_VERY_EASY_OPTION",0);
  FUN_00f0d75c(param_1 + 0x10be,uVar67);
  *(uint *)((long)param_1 + 0x8674) = *(uint *)((long)param_1 + 0x8674) & 0xfffffffb;
  FUN_00f0e548(plVar17,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  puVar53 = (uint *)((long)param_1 + 0x10404);
  uVar57 = *puVar53;
  uVar65 = uVar57 & 0xfffffffb;
  *puVar53 = uVar65;
  if ((uVar57 & 0x7f80) != 0) {
    *puVar53 = uVar57 & 0xffff807b;
    FUN_0091ada4(plVar17);
    uVar65 = *puVar53;
  }
  uVar58 = DAT_03210f58;
  *puVar53 = uVar65 | 0x10;
  local_e0 = FUN_00b5a054;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar58;
  FUN_009693a0(param_1 + 0x2071,&local_e0);
  local_e0 = FUN_00b5a054;
  uVar59 = DAT_03210f84;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar59;
  FUN_009693a0(param_1 + 0x2071,&local_e0);
  uVar67 = FUN_00d6eb50();
  lVar70 = FUN_00d6eb5c(uVar67,"*GameModePartyDropDown*");
  param_1[0x5a02] = lVar70;
  uVar66 = FUN_0093dbe8();
  if ((uVar66 & 1) == 0) {
    uVar67 = FUN_00e6ce7c("MENU_PARTY_DROPDOWN_HEADER_PUBLIC",0);
    FUN_00aca988(plVar74,0,uVar67);
  }
  uVar65 = FUN_0093dbe8();
  uVar67 = FUN_00e6ce7c("MENU_PARTY_DROPDOWN_HEADER_PRIVATE",0);
  FUN_00aca988(plVar74,~uVar65 & 1,uVar67);
  uVar66 = FUN_0093dbe8();
  uVar69 = 1;
  if ((uVar66 & 1) == 0) {
    uVar69 = 2;
  }
  uVar67 = FUN_00e6ce7c("MENU_PARTY_DROPDOWN_HEADER_PRACTICE",0);
  FUN_00aca988(plVar74,uVar69,uVar67);
  local_b8 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_e0 = thunk_FUN_00b5d9a0;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  FUN_009693a0(param_1 + 0x1623,&local_e0);
  local_b8 = FUN_00f048a4("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_e0 = FUN_00b5a090;
  local_d0 = (void *)0x0;
  local_c8 = (code *)0x0;
  plStack_d8 = param_1;
  local_c0 = plVar74;
  FUN_009693a0(param_1 + 0x1623,&local_e0);
  *(uint *)((long)param_1 + 0xb194) = *(uint *)((long)param_1 + 0xb194) & 0xfffffffb;
  FUN_00aca750(0x3f19999a,0x3f4ccccd,plVar74);
  FUN_00aca7a4(plVar74,0);
  FUN_00aca798(plVar74,0);
  *(uint *)((long)param_1 + 0xcc9c) = *(uint *)((long)param_1 + 0xcc9c) & 0xfffffffb;
  if ((*pbVar51 == 0) && (*(char *)((long)param_1 + 0x2cfa4) != '\0')) {
    FUN_00aca818(plVar74,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  }
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  uVar67 = FUN_00e6ce7c("MENU_PARTY_BOT_DIFFICULTY_VERY_EASY_OPTION",0);
  FUN_0090ea30(&local_140,uVar67);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_BOT_DIFFICULTY_EASY_OPTION",0);
  FUN_0090ea30(&local_140,uVar67);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_BOT_DIFFICULTY_MEDIUM_OPTION",0);
  FUN_0090ea30(&local_140,uVar67);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_BOT_DIFFICULTY_HARD_OPTION",0);
  FUN_0090ea30(&local_140,uVar67);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_BOT_DIFFICULTY_VERY_HARD_OPTION",0);
  FUN_0090ea30(&local_140,uVar67);
  FUN_008fa54c(&local_e0,"very_easy");
  FUN_0096204c(&local_150,&local_e0);
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  FUN_008fa54c(&local_e0,"easy");
  FUN_0096204c(&local_150,&local_e0);
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  FUN_008fa54c(&local_e0,"medium");
  FUN_0096204c(&local_150,&local_e0);
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  FUN_008fa54c(&local_e0,"hard");
  FUN_0096204c(&local_150,&local_e0);
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  FUN_008fa54c(&local_e0,"very_hard");
  FUN_0096204c(&local_150,&local_e0);
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  FUN_00ac876c(*pfVar54,*pfVar54,0,0x3f800000,0x3f8ccccd,plVar16,&local_140,&local_150,1,1,0);
  local_b8 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_e0 = thunk_FUN_00b5d9a0;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  FUN_009693a0(param_1 + 0x1b4a,&local_e0);
  local_b8 = FUN_00f048a4("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_e0 = FUN_00b5a090;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  plStack_d8 = param_1;
  local_c0 = plVar16;
  FUN_009693a0(param_1 + 0x1b4a,&local_e0);
  *(uint *)((long)param_1 + 0xdacc) = *(uint *)((long)param_1 + 0xdacc) & 0xfffffffb;
  FUN_00aca750(0x3f19999a,0x3f4ccccd,plVar16);
  FUN_00aca7a4(plVar16,0);
  FUN_00aca798(plVar16,0);
  *(uint *)((long)param_1 + 0xf5d4) = *(uint *)((long)param_1 + 0xf5d4) & 0xfffffffb;
  FUN_00f112f0(plVar13,1);
  lVar70 = 0;
  plVar74 = param_1 + 0x13c2;
  do {
    local_124[0] = (char)lVar70 + 'A';
    local_124[1] = 0;
    FUN_00e6a8a8(&local_e0,"MENU_PARTY_HEADER_TEAM_%s",local_124);
    FUN_00e6a8a8(&local_120,"Team %s",local_124);
    FUN_00f0d378(plVar74,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38);
    uVar67 = FUN_00e6ce7c(&local_e0,0);
    (**(code **)(*plVar74 + 0x138))(plVar74,uVar67);
    uVar65 = *(uint *)((long)plVar74 + 0x84);
    if ((uVar65 & 0x7f80) != 0x2600) {
      *(uint *)((long)plVar74 + 0x84) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x2600;
      FUN_0091ada4(plVar74);
      uVar65 = *(uint *)((long)plVar74 + 0x84);
    }
    lVar70 = lVar70 + 1;
    *(uint *)((long)plVar74 + 0x84) = uVar65 & 0xfffffffb;
    plVar74 = plVar74 + 0x26;
  } while (lVar70 != 0x10);
  FUN_00f0d378(plVar15,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_HEADER_TEAM_SPECTATOR",0);
  FUN_00f0d75c(plVar15,uVar67);
  puVar53 = (uint *)((long)param_1 + 0x9d64);
  uVar65 = *puVar53;
  if ((uVar65 & 0x7f80) != 0x2600) {
    *puVar53 = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x2600;
    FUN_0091ada4(plVar15);
    uVar65 = *puVar53;
  }
  *puVar53 = uVar65 & 0xfffffffb;
  uVar69 = DAT_03210f8c;
  uVar60 = DAT_03210f88;
  uVar61 = DAT_03210f5c;
  uVar62 = DAT_03210f60;
  plVar74 = (long *)0x0;
  plVar73 = param_1 + 0x26cc;
  do {
    FUN_00ae7fd4(plVar73);
    FUN_00f023ec(plVar25,plVar73,1);
    plVar5 = plVar73 + 0x38;
    local_e0 = FUN_00b5a0a0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    plStack_d8 = param_1;
    local_c0 = plVar74;
    local_b8 = uVar56;
    FUN_009693a0(plVar5,&local_e0);
    local_e0 = FUN_00b5a0a0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    plStack_d8 = param_1;
    local_c0 = plVar74;
    local_b8 = uVar60;
    FUN_009693a0(plVar5,&local_e0);
    local_e0 = FUN_00b5a0a0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    plStack_d8 = param_1;
    local_c0 = plVar74;
    local_b8 = uVar61;
    FUN_009693a0(plVar5,&local_e0);
    plVar5 = plVar73 + 1;
    local_e0 = FUN_00b5a0a8;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    plStack_d8 = param_1;
    local_c0 = plVar74;
    local_b8 = uVar60;
    FUN_009693a0(plVar5,&local_e0);
    local_e0 = FUN_00b5a0a8;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    plStack_d8 = param_1;
    local_c0 = plVar74;
    local_b8 = uVar61;
    FUN_009693a0(plVar5,&local_e0);
    local_e0 = FUN_00b5a0b0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    plStack_d8 = param_1;
    local_c0 = plVar74;
    local_b8 = uVar69;
    FUN_009693a0(plVar5,&local_e0);
    local_e0 = FUN_00b5a0b0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    plStack_d8 = param_1;
    local_c0 = plVar74;
    local_b8 = uVar62;
    FUN_009693a0(plVar5,&local_e0);
    plVar74 = (long *)((long)plVar74 + 1);
    plVar73 = plVar73 + 0x265;
  } while (plVar74 != (long *)0xe);
  if (*(char *)((long)param_1 + 0x2cfa4) != '\0') {
    pfVar54 = (float *)(param_1 + 0x5a07);
  }
  FUN_00ae78e4(*pfVar54,0x42a00000,0,0,plVar71,0);
  FUN_00ae7fd4(plVar71);
  FUN_00ae8058(plVar71,0);
  FUN_00ae806c(plVar71,1);
  FUN_00ae8080(plVar71,0xffffffff);
  FUN_00ae80d0(0x3f000000,plVar71,0xff000000);
  *(uint *)((long)param_1 + 0x24314) = *(uint *)((long)param_1 + 0x24314) & 0xfffffffb;
  FUN_00ae8170(plVar71,1);
  *(uint *)((long)param_1 + 0x24ac4) = *(uint *)((long)param_1 + 0x24ac4) & 0xffffffef;
  local_e0 = FUN_00b5a0a8;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0xffffffff;
  plStack_d8 = param_1;
  local_b8 = uVar60;
  FUN_009693a0(param_1 + 1,&local_e0);
  local_e0 = FUN_00b5a0a8;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0xffffffff;
  plStack_d8 = param_1;
  local_b8 = uVar61;
  FUN_009693a0(param_1 + 1,&local_e0);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_LEAVE_BUTTON",0);
  FUN_00ab703c(0x42800000,0x43080000,0x443e0000,plVar14,0,uVar67,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab7598(0x3ecccccd,plVar14,&DAT_01bee7f6);
  FUN_00f0d92c(param_1 + 0x11c8,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  local_e0 = thunk_FUN_00b61444;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar56;
  FUN_009693a0(param_1 + 0x10e5,&local_e0);
  *(uint *)((long)param_1 + 0x87a4) = *(uint *)((long)param_1 + 0x87a4) | 0x10;
  if ((*pbVar51 != 0) &&
     ((pfVar54 = (float *)(param_1 + 0x10ed), *pfVar54 != 1.2 ||
      (*(float *)((long)param_1 + 0x876c) != 1.2)))) {
    pfVar54[0] = 1.2;
    pfVar54[1] = 1.2;
    FUN_0091ada4(plVar14);
  }
  uVar67 = FUN_00e6ce7c("MENU_PARTY_CASUAL_MATCH_BUTTON",0);
  FUN_00ab703c(0,*pfVar52,*pfVar52,plVar22,0,uVar67,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00f0d92c(param_1 + 0x21e5,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00ab7598(0x3ecccccd,plVar22,&DAT_01bee7f6);
  local_e0 = thunk_FUN_00b62860;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar56;
  FUN_009693a0(param_1 + 0x2102,&local_e0);
  FUN_00b09144(0x40000000,plVar22);
  FUN_00ab7628(0x42f00000,plVar22);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_CASUAL_MATCH_BUTTON",0);
  FUN_00ab7498(plVar22,uVar67);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_CANCEL_QUEUE",0);
  FUN_00ab703c(0x41c00000,*pfVar52,*pfVar52,plVar23,0,uVar67,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00f0d92c(param_1 + 0x249d,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00ab7598(0x3ecccccd,plVar23,&DAT_01bee7f6);
  local_e0 = FUN_00b5a0cc;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar56;
  FUN_009693a0(param_1 + 0x23ba,&local_e0);
  *(uint *)((long)param_1 + 0x11e4c) = *(uint *)((long)param_1 + 0x11e4c) & 0xfffffffb;
  FUN_00b09144(0x40000000,plVar23);
  FUN_00f0d378(param_1 + 0x2671,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  FUN_00f0e548(plVar24,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar24,&DAT_01bee7f6,2);
  uVar65 = *(uint *)((long)param_1 + 0x1353c);
  if ((uVar65 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1353c) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x2600;
    FUN_0091ada4(plVar24);
  }
  *(uint *)((long)param_1 + 0x105e4) = *(uint *)((long)param_1 + 0x105e4) & 0xfffffffb;
  FUN_00f0e548(plVar20,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar65 = *(uint *)((long)param_1 + 0x1066c);
  if ((uVar65 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1066c) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar20);
  }
  FUN_00f0d92c(plVar21,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_DRAG_AND_DROP_INSTRUCTIONS",0);
  FUN_00f0d75c(plVar21,uVar67);
  FUN_00f0dac8(plVar21,0);
  FUN_00f112f0(plVar30,1);
  FUN_00ed0680(plVar31,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed04d8(plVar31,0,1);
  pfVar54 = (float *)(param_1 + 0x4c96);
  if ((*pfVar54 != 48.0) || (*(float *)((long)param_1 + 0x264b4) != 0.0)) {
    pfVar54[0] = 48.0;
    pfVar54[1] = 0.0;
    FUN_0091ada4(plVar31);
  }
  FUN_00f0d92c(plVar38,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("MENU_GUILD_TITLE",0);
  FUN_00f0d75c(plVar38,uVar67);
  FUN_00f0d92c(plVar39,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00f0d75c(plVar39,uVar67);
  uVar65 = *(uint *)((long)param_1 + 0x276e4);
  if ((uVar65 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x276e4) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar39);
  }
  FUN_00f0d92c(plVar40,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00f0d75c(plVar40,uVar67);
  uVar65 = *(uint *)((long)param_1 + 0x27814);
  if ((uVar65 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x27814) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar40);
  }
  FUN_00f0e548(plVar41,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_e0 = (code *)CONCAT44(local_e0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar41,&local_e0,2);
  puVar53 = (uint *)((long)param_1 + 0x27944);
  uVar65 = *puVar53;
  if ((uVar65 & 0x7f80) != 0x1300) {
    *puVar53 = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x1300;
    FUN_0091ada4(plVar41);
    uVar65 = *puVar53;
  }
  *puVar53 = uVar65 & 0xfffffffb;
  local_e0 = FUN_00b5a104;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar56;
  FUN_009693a0(param_1 + 0x4f37,&local_e0);
  pcVar1 = "arrow_down";
  pcVar2 = "arrow_right";
  pcVar55 = pcVar2;
  if ((char)param_1[0x59f4] != '\0') {
    pcVar55 = pcVar1;
  }
  FUN_00f0e578(param_1 + 0x4fd1,pcVar55);
  FUN_00f0d92c(plVar43,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("MENU_TEAM_TITLE",0);
  FUN_00f0d75c(plVar43,uVar67);
  FUN_00f0d92c(plVar44,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00f0d75c(plVar44,uVar67);
  uVar65 = *(uint *)((long)param_1 + 0x281e4);
  if ((uVar65 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x281e4) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar44);
  }
  FUN_00f0d92c(plVar45,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00f0d75c(plVar45,uVar67);
  uVar65 = *(uint *)((long)param_1 + 0x28314);
  if ((uVar65 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x28314) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar45);
  }
  FUN_00f0e548(plVar46,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_e0 = (code *)CONCAT44(local_e0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar46,&local_e0,2);
  puVar53 = (uint *)((long)param_1 + 0x28444);
  uVar65 = *puVar53;
  if ((uVar65 & 0x7f80) != 0x1300) {
    *puVar53 = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x1300;
    FUN_0091ada4(plVar46);
    uVar65 = *puVar53;
  }
  *puVar53 = uVar65 & 0xfffffffb;
  local_e0 = FUN_00b5a104;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x1;
  plStack_d8 = param_1;
  local_b8 = uVar56;
  FUN_009693a0(param_1 + 0x5097,&local_e0);
  pcVar55 = pcVar2;
  if (*(char *)((long)param_1 + 0x2cfa1) != '\0') {
    pcVar55 = pcVar1;
  }
  FUN_00f0e578(param_1 + 0x5131,pcVar55);
  FUN_00f0d92c(plVar33,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_00f0d75c(plVar33,uVar67);
  FUN_00f0d92c(plVar34,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00f0d75c(plVar34,uVar67);
  uVar65 = *(uint *)((long)param_1 + 0x26be4);
  if ((uVar65 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x26be4) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar34);
  }
  FUN_00f0d92c(plVar35,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00f0d75c(plVar35,uVar67);
  uVar65 = *(uint *)((long)param_1 + 0x26d14);
  if ((uVar65 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x26d14) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar35);
  }
  FUN_00f0e548(plVar36,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_e0 = (code *)CONCAT44(local_e0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar36,&local_e0,2);
  puVar53 = (uint *)((long)param_1 + 0x26e44);
  uVar65 = *puVar53;
  if ((uVar65 & 0x7f80) != 0x1300) {
    *puVar53 = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x1300;
    FUN_0091ada4(plVar36);
    uVar65 = *puVar53;
  }
  *puVar53 = uVar65 & 0xfffffffb;
  local_e0 = FUN_00b5a104;
  local_d0 = (void *)0x0;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x2;
  plStack_d8 = param_1;
  local_b8 = uVar56;
  FUN_009693a0(param_1 + 0x4dd7,&local_e0);
  if (*(char *)((long)param_1 + 0x2cfa2) != '\0') {
    pcVar2 = pcVar1;
  }
  FUN_00f0e578(param_1 + 0x4e71,pcVar2);
  *(uint *)((long)param_1 + 0x28b5c) = *(uint *)((long)param_1 + 0x28b5c) & 0xfffffffb;
  FUN_00f0d92c(plVar47,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_INVITES_FULL",0);
  FUN_00f0d75c(plVar47,uVar67);
  pfVar54 = (float *)(param_1 + 0x5163);
  if ((*pfVar54 != 48.0) || (*(float *)((long)param_1 + 0x28b1c) != 0.0)) {
    pfVar54[0] = 48.0;
    pfVar54[1] = 0.0;
    FUN_0091ada4(plVar47);
  }
  *(uint *)((long)param_1 + 0x28c8c) = *(uint *)((long)param_1 + 0x28c8c) & 0xfffffffb;
  uVar67 = FUN_00e6ce7c("MENU_PARTY_SAD_AND_EMPTY",0);
  FUN_00f0d75c(plVar48,uVar67);
  pfVar54 = (float *)(param_1 + 0x5189);
  if ((*pfVar54 != 48.0) || (*(float *)((long)param_1 + 0x28c4c) != 0.0)) {
    pfVar54[0] = 48.0;
    pfVar54[1] = 0.0;
    FUN_0091ada4(plVar48);
  }
  *(uint *)((long)param_1 + 0x28dbc) = *(uint *)((long)param_1 + 0x28dbc) & 0xfffffffb;
  uVar67 = FUN_00e6ce7c("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_00ac1e58(plVar50,uVar67);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_00ac1e64(plVar50,uVar67);
  uVar67 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_00ac1418(plVar50,uVar67,0);
  FUN_008fa54c(&local_e0,&DAT_01bb5071);
  FUN_008fce60(param_1 + 0x59cc,&local_e0);
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  FUN_00ac13a4(plVar50,1);
  lVar70 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar70 + 0x2cf00) = 1;
    lVar70 = lVar70 + 4;
  } while (lVar70 != 0x38);
  FUN_00f0e548(plVar18,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  puVar53 = (uint *)((long)param_1 + 0x104f4);
  uVar57 = *puVar53;
  uVar65 = uVar57 & 0xfffffffb;
  *puVar53 = uVar65;
  if ((uVar57 & 0x7f80) != 0) {
    *puVar53 = uVar57 & 0xffff807b;
    FUN_0091ada4(plVar18);
    uVar65 = *puVar53;
  }
  *puVar53 = uVar65 | 0x10;
  local_e0 = FUN_00b5a054;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar58;
  FUN_009693a0(param_1 + 0x208f,&local_e0);
  local_e0 = FUN_00b5a054;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar59;
  FUN_009693a0(param_1 + 0x208f,&local_e0);
  local_118 = 0;
  local_120 = 0;
  uVar67 = FUN_00e6ce7c("MENU_PARTY_INVITE_HEADER",0);
  FUN_0090ea30(&local_120,uVar67);
  uVar67 = FUN_00e6ce7c("MENU_PARTY_CHAT_HEADER",0);
  FUN_0090ea30(&local_120,uVar67);
  fVar76 = (float)NEON_ucvtf((undefined4)local_120);
  if (fVar76 <= 1.0) {
    fVar76 = 1.0;
  }
  fVar76 = *(float *)((long)param_1 + 0x2d034) / fVar76;
  FUN_00b1fc3c(fVar76,fVar76,0,0x3f800000,
               *(undefined4 *)(&DAT_01bb4d08 + (ulong)(*pbVar51 == 0) * 4),plVar27,&local_120);
  FUN_00b208e0(0x3f4ccccd,plVar27);
  local_b8 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_e0 = FUN_00b5a12c;
  local_c8 = (code *)0x0;
  local_c0 = (long *)0x0;
  local_d0 = (code *)0x0;
  plStack_d8 = param_1;
  FUN_009693a0(param_1 + 0x4aca,&local_e0);
  *(uint *)((long)param_1 + 0x2619c) = *(uint *)((long)param_1 + 0x2619c) & 0xffffffef;
  uVar67 = FUN_00e6ce7c("MENU_PARTY_CHAT_HEADER",0);
  FUN_00f0d75c(plVar28,uVar67);
  FUN_00f0d7fc(plVar28,&DAT_01bee7fa);
  *(uint *)((long)param_1 + 0x2619c) = *(uint *)((long)param_1 + 0x2619c) & 0xfffffffb;
  FUN_00f0c774(plVar4,&DAT_01bee7f6);
  uVar65 = *(uint *)((long)param_1 + 0x2d2c);
  if ((uVar65 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x2d2c) = uVar65 & 0xffff8000 | uVar65 & 0x7f | 0x6600;
    FUN_0091ada4(plVar4);
  }
  uVar66 = FUN_0093dbe8();
  if ((uVar66 & 1) != 0) {
    FUN_00b035dc(plVar7,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
    uVar67 = FUN_00e6ce7c("MENU_PLAY_MENU_MODE_PARTY_JOIN_DEFAULT",0);
    FUN_00abc73c(plVar7,uVar67);
    FUN_00abceac(0xc1200000,plVar7);
    uVar67 = FUN_00e6ce7c("MENU_PLAY_MENU_MODE_PARTY_JOIN__MESSAGE",0);
    uVar68 = FUN_00e6ce7c("MENU_PLAY_MENU_MODE_PARTY_JOIN_FIELD",0);
    FUN_00ce1e34(plVar7,uVar67,uVar68,&DAT_03210450,0,2,0,0,0,1,0,0);
    FUN_00f0d378(plVar8,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
    uVar67 = FUN_00e6ce7c("MENU_PLAY_MENU_MODE_PARTY_JOIN_FIELD",0);
    FUN_00f0d75c(plVar8,uVar67);
    *(uint *)((long)param_1 + 0x7864) = *(uint *)((long)param_1 + 0x7864) & 0xfffffffb;
    FUN_00f0d378(param_1 + 0xf22,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
    *(uint *)((long)param_1 + 0x7994) = *(uint *)((long)param_1 + 0x7994) & 0xfffffffb;
  }
  uVar66 = FUN_0092e920();
  if ((uVar66 & 1) != 0) {
    lVar70 = FUN_009fece0();
    plStack_d8 = (long *)0x0;
    local_c8 = thunk_FUN_00bf1c4c;
    local_e0 = pcVar3;
    local_d0 = pcVar3;
    FUN_009e4694(lVar70 + 0x40,&local_e0);
  }
  FUN_00915ec0(param_1 + 0x58c);
  FUN_0090eb54(&local_120,1);
  FUN_00951534(&local_150,1);
  FUN_0090eb54(&local_140,1);
  if (*(long *)(lVar63 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

