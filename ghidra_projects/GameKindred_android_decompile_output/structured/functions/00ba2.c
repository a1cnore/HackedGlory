// functions/00ba2 — 3 functions
#include "libGameKindred.h"




void FUN_00ba2038(uint *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *param_1;
  iVar4 = (int)((ulong)(param_3 - param_2) >> 4);
  if (uVar3 != iVar4 * -0x33333333) {
    lVar6 = *(long *)(param_1 + 2) + (ulong)uVar3 * 0x50;
    lVar2 = lVar6 - param_3;
    lVar5 = param_2;
    if (lVar2 != 0) {
      do {
        FUN_008fce60(lVar5,param_3);
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_3 + 0x18);
        FUN_008fce60(lVar5 + 0x20,param_3 + 0x20);
        FUN_00ba2188(lVar5 + 0x38,param_3 + 0x38);
        *(undefined1 *)(lVar5 + 0x4c) = *(undefined1 *)(param_3 + 0x4c);
        puVar1 = (undefined4 *)(param_3 + 0x48);
        param_3 = param_3 + 0x50;
        *(undefined4 *)(lVar5 + 0x48) = *puVar1;
        lVar5 = lVar5 + 0x50;
      } while (param_3 != lVar6);
      uVar3 = *param_1;
      lVar6 = *(long *)(param_1 + 2) + (ulong)uVar3 * 0x50;
    }
    param_2 = param_2 + ((lVar2 >> 4) * -0x3333333333333333 & 0xffffffffU) * 0x50;
    if (param_2 != lVar6) {
      do {
        FUN_00ba1488(param_2 + 0x38,1);
        if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x30));
        }
        FUN_0099cedc(param_2);
        param_2 = param_2 + 0x50;
      } while (lVar6 != param_2);
      uVar3 = *param_1;
    }
    *param_1 = uVar3 + iVar4 * 0x33333333;
    return;
  }
  FUN_00b9fc80(param_1,1);
  return;
}




void FUN_00ba2188(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 != param_2) {
    FUN_00ba1488(param_1,1);
    FUN_00ba1954(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar7 = *(long *)(param_2 + 2);
      lVar8 = *(long *)(param_1 + 2);
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(lVar8 + lVar6);
        lVar2 = lVar7 + lVar6;
        *puVar1 = &PTR_FUN_02825520;
        FUN_00ba1af4(puVar1 + 1,lVar2 + 8);
        uVar5 = *(undefined8 *)(lVar2 + 0x18);
        *puVar1 = &PTR_FUN_028253d8;
        puVar1[3] = uVar5;
        memcpy(puVar1 + 4,(void *)(lVar2 + 0x20),0x68);
        *puVar1 = &PTR_FUN_028284a0;
        uVar5 = *(undefined8 *)(lVar2 + 0xa5);
        *(undefined8 *)((long)puVar1 + 0xad) = *(undefined8 *)(lVar2 + 0xad);
        *(undefined8 *)((long)puVar1 + 0xa5) = uVar5;
        uVar5 = *(undefined8 *)(lVar2 + 0x98);
        puVar1[0x14] = *(undefined8 *)(lVar2 + 0xa0);
        puVar1[0x13] = uVar5;
        uVar9 = *(undefined8 *)(lVar2 + 0x90);
        uVar5 = *(undefined8 *)(lVar2 + 0x88);
        *puVar1 = &PTR_FUN_027e8d50;
        puVar1[0x12] = uVar9;
        puVar1[0x11] = uVar5;
        thunk_FUN_00e7051c(puVar1 + 0x17,lVar2 + 0xb8);
        thunk_FUN_00e7051c(puVar1 + 0x19,lVar2 + 200);
        FUN_008fcdb8(puVar1 + 0x1b,lVar2 + 0xd8);
        lVar6 = lVar6 + 0xf8;
        *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)(lVar2 + 0xf0);
      } while ((ulong)uVar3 * 0xf8 - lVar6 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_00ba22d8(long *param_1)

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
  uint *puVar41;
  uint *puVar42;
  float *pfVar43;
  undefined **ppuVar44;
  undefined **ppuVar45;
  undefined4 uVar46;
  long lVar47;
  bool bVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  long lVar54;
  float fVar55;
  float fVar56;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  
  lVar47 = tpidr_el0;
  local_b0 = *(long *)(lVar47 + 0x28);
  FUN_00b8e630();
  FUN_00948cd8(param_1 + 0x6d);
  *param_1 = (long)&PTR_FUN_027e9078;
  param_1[0x6d] = (long)&PTR_FUN_027e9238;
  FUN_00b48dbc();
  plVar1 = param_1 + 0xca60;
  FUN_00f13ca4();
  plVar2 = param_1 + 0xca77;
  FUN_00f0e4a8();
  FUN_00bd0248(param_1 + 0xca95);
  FUN_00f13ca4(param_1 + 0xcaad);
  plVar3 = param_1 + 0xcac4;
  FUN_00f017e8(plVar3);
  *plVar3 = (long)&PTR_FUN_027c1f80;
  plVar4 = param_1 + 0xcad5;
  FUN_00f017e8(plVar4);
  *plVar4 = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(param_1 + 0xcae6);
  param_1[0xcae6] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0xcaf7);
  FUN_00ab6c24(param_1 + 0xcb1d,0);
  FUN_00f0e4a8(param_1 + 0xcdd5);
  FUN_00f0e4a8(param_1 + 0xcdf3);
  FUN_00f0d160(param_1 + 0xce11);
  FUN_00f0e4a8(param_1 + 0xce37);
  FUN_00f13ca4(param_1 + 0xce55);
  FUN_00ecfd6c(param_1 + 0xce6c,0);
  FUN_00f0e4a8(param_1 + 0xcf13);
  param_1[0xcf32] = 0;
  param_1[0xcf31] = 0;
  FUN_00ba9ab8(param_1 + 0xcf33);
  plVar5 = param_1 + 0xd287;
  FUN_00f017e8(plVar5);
  *plVar5 = (long)&PTR_FUN_027c1f80;
  plVar6 = param_1 + 0xd298;
  FUN_00f017e8(plVar6);
  plVar7 = param_1 + 0xd2a9;
  *plVar6 = (long)&PTR_FUN_027c1f80;
  FUN_00ecfd6c(plVar7,0);
  plVar8 = param_1 + 0xd350;
  FUN_00f017e8(plVar8);
  plVar9 = param_1 + 0xd361;
  *plVar8 = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar10 = param_1 + 0xd37f;
  FUN_00f0e4a8();
  plVar11 = param_1 + 0xd39d;
  FUN_00f0d160();
  plVar12 = param_1 + 0xd3c3;
  FUN_00f0e4a8();
  plVar13 = param_1 + 0xd3e1;
  FUN_00f0e4a8();
  plVar14 = param_1 + 0xd3ff;
  FUN_00f017e8(plVar14);
  plVar15 = param_1 + 0xd410;
  *plVar14 = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar16 = param_1 + 0xd45c;
  FUN_00abbf0c();
  plVar17 = param_1 + 0xd7fb;
  FUN_00abbf0c();
  plVar18 = param_1 + 0xdb9a;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar19 = param_1 + 0xdbe6;
  FUN_00abbf0c();
  plVar20 = param_1 + 0xdf85;
  FUN_00abbf0c();
  plVar21 = param_1 + 0xe324;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar22 = param_1 + 0xe370;
  FUN_00abbf0c();
  plVar23 = param_1 + 0xe70f;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar24 = param_1 + 0xe75b;
  FUN_00f13ca4(plVar24);
  plVar25 = param_1 + 0xe772;
  FUN_00f0e4a8();
  plVar26 = param_1 + 0xe790;
  FUN_00f0d160();
  plVar27 = param_1 + 0xe7b6;
  FUN_00f13ca4(plVar27);
  plVar28 = param_1 + 0xe7cd;
  FUN_00f0e4a8();
  plVar29 = param_1 + 0xe7eb;
  FUN_00f0d160();
  plVar30 = param_1 + 0xe811;
  FUN_00f017e8(plVar30);
  plVar31 = param_1 + 0xe822;
  *plVar30 = (long)&PTR_FUN_027c1f80;
  FUN_00ab6c24(plVar31,0);
  plVar32 = param_1 + 0xeada;
  FUN_00ab6c24(plVar32,0);
  plVar33 = param_1 + 0xed92;
  FUN_00ab6c24(plVar33,0);
  plVar34 = param_1 + 0xf04a;
  FUN_00f13ca4(plVar34);
  plVar35 = param_1 + 0xf061;
  FUN_00f0d160();
  plVar36 = param_1 + 0xf087;
  FUN_00f0e4a8(plVar36);
  plVar37 = param_1 + 0xf0a5;
  FUN_00ab6c24(plVar37,0);
  plVar38 = param_1 + 0xf35d;
  FUN_00f13ca4(plVar38);
  plVar39 = param_1 + 0xf374;
  FUN_00f0d160();
  plVar40 = param_1 + 0xf39a;
  FUN_00f0e4a8();
  FUN_00b1ec58(param_1 + 0xf3b8,0);
  FUN_00b27c04(param_1 + 0xf444,0);
  FUN_008fcdb8(param_1 + 0xf462,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0xf465,&DAT_0320ffa8);
  FUN_00e70510(param_1 + 0xf468);
  *(undefined8 *)((long)param_1 + 0x7a356) = 0;
  param_1[0xf46a] = 0;
  FUN_00f01a4c(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,param_1[0xca96],1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar6,plVar8,1);
  FUN_00f023ec(plVar8,plVar7,1);
  FUN_00ed026c(plVar7,plVar9,1);
  FUN_00ed026c(plVar7,plVar10,1);
  FUN_00ed026c(plVar7,plVar11,1);
  FUN_00ed026c(plVar7,plVar12,1);
  FUN_00ed026c(plVar7,plVar13,1);
  FUN_00ed026c(plVar7,plVar14,1);
  FUN_00f023ec(plVar14,plVar15,1);
  FUN_00f023ec(plVar14,param_1 + 0xd436,1);
  FUN_00f023ec(plVar14,plVar16,1);
  FUN_00f023ec(plVar14,plVar17,1);
  FUN_00f023ec(plVar14,plVar18,1);
  FUN_00f023ec(plVar14,param_1 + 0xdbc0,1);
  FUN_00f023ec(plVar14,plVar19,1);
  FUN_00f023ec(plVar14,plVar20,1);
  FUN_00f023ec(plVar14,plVar21,1);
  FUN_00f023ec(plVar14,param_1 + 0xe34a,1);
  FUN_00f023ec(plVar14,plVar22,1);
  FUN_00f023ec(plVar14,plVar23,1);
  FUN_00f023ec(plVar14,param_1 + 0xe735,1);
  FUN_00f023ec(plVar14,plVar24,1);
  FUN_00f023ec(plVar24,plVar25,1);
  FUN_00f023ec(plVar24,plVar26,1);
  FUN_00f023ec(plVar14,plVar27,1);
  FUN_00f023ec(plVar27,plVar28,1);
  FUN_00f023ec(plVar27,plVar29,1);
  FUN_00f023ec(plVar14,plVar30,1);
  FUN_00f023ec(plVar30,plVar31,1);
  FUN_00f023ec(plVar30,plVar32,1);
  FUN_00f023ec(plVar30,plVar33,1);
  FUN_00f023ec(plVar33,plVar34,1);
  FUN_00f023ec(plVar34,plVar36,1);
  FUN_00f023ec(plVar34,plVar35,1);
  FUN_00f023ec(plVar30,plVar37,1);
  FUN_00f023ec(plVar37,plVar38,1);
  FUN_00f023ec(plVar38,plVar40,1);
  FUN_00f023ec(plVar38,plVar39,1);
  FUN_00f023ec(plVar1,param_1 + 0xf444,1);
  FUN_00f023ec(plVar1,param_1 + 0x70,1);
  uVar49 = FUN_0092ea9c();
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  puVar41 = (uint *)((long)param_1 + 0x6543c);
  uVar51 = *puVar41;
  if ((uVar51 & 0x7f80) != 0x2600) {
    *puVar41 = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_0091ada4(plVar2);
    uVar51 = *puVar41;
  }
  *puVar41 = uVar51 | 0x10;
  puVar41 = (uint *)((long)param_1 + 0x69544);
  if ((*puVar41 & 0x7f80) != 0) {
    *puVar41 = *puVar41 & 0xffff807f;
    FUN_0091ada4(plVar6);
  }
  FUN_00ed04d8(plVar7,0,1);
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  puVar42 = (uint *)((long)param_1 + 0x69b8c);
  uVar51 = *puVar42;
  if ((uVar51 & 0x7f80) != 0x3f80) {
    *puVar42 = uVar51 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar9);
    uVar51 = *puVar42;
  }
  *puVar42 = uVar51 | 0x10;
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_guild_outline");
  fVar55 = *(float *)(param_1 + 0xd388);
  if ((fVar55 != 1.5) || (fVar55 = *(float *)((long)param_1 + 0x69c44), fVar55 != 1.5)) {
    lVar54 = NEON_fmov(0x3fc00000,4);
    param_1[0xd388] = lVar54;
    FUN_0091ada4(plVar10);
  }
  uVar51 = *(uint *)((long)param_1 + 0x69c7c);
  if ((uVar51 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x69c7c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x1980;
    FUN_0091ada4(plVar10);
  }
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TEAM_HEADER",0);
  FUN_00f0d75c(plVar11,uVar50);
  ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar49 & 1) == 0) {
    ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  }
  FUN_00f0d378(plVar11,*ppuVar45);
  uVar51 = *(uint *)((long)param_1 + 0x69d6c);
  if ((uVar51 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x69d6c) = uVar51 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  puVar42 = (uint *)((long)param_1 + 0x69e9c);
  uVar51 = *puVar42;
  if ((uVar51 & 0x7f80) != 0x2600) {
    *puVar42 = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_0091ada4(plVar12);
    uVar51 = *puVar42;
  }
  *puVar42 = uVar51 | 0x10;
  FUN_00f0e548(plVar13,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar13,&DAT_01bee7f6,2);
  puVar42 = (uint *)((long)param_1 + 0x69f8c);
  uVar51 = *puVar42;
  if ((uVar51 & 0x7f80) != 0x2600) {
    *puVar42 = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_0091ada4(plVar13);
    uVar51 = *puVar42;
  }
  *puVar42 = uVar51 | 0x10;
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB",0);
  FUN_00f0d75c(param_1 + 0xd436,uVar50);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TAG_FIELD_BLURB",0);
  FUN_00f0d75c(param_1 + 0xdbc0,uVar50);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD_BLURB",0);
  FUN_00f0d75c(param_1 + 0xe34a,uVar50);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TYPE_FIELD_BLURB",0);
  FUN_00f0d75c(param_1 + 0xe735,uVar50);
  ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar49 & 1) == 0) {
    ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d92c(plVar15,*ppuVar45,&DAT_01bee7fa);
  uVar51 = *(uint *)((long)param_1 + 0x6a104);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x6a104) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_0091ada4(plVar15);
  }
  FUN_00e705c8(&local_e0,"1");
  FUN_00f0d75c(plVar15,&local_e0);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (void *)0x0;
  }
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_NAME_FIELD",0);
  FUN_00abc73c(plVar16,uVar50);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_00ce1e34(plVar16,uVar50,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar16,1);
  FUN_00abced0(plVar16,1,3);
  FUN_00abcee4(plVar16,1,0x10);
  FUN_00abcf28(plVar16,0);
  uVar52 = DAT_03210fac;
  local_e0 = thunk_FUN_00ba8e5c;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xd45d,&local_e0);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_00abc73c(plVar17,uVar50);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_00ce1e34(plVar17,uVar50,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar17,1);
  FUN_00abced0(plVar17,1,3);
  FUN_00abcee4(plVar17,1,0x10);
  FUN_00abcf28(plVar17,0);
  local_e0 = thunk_FUN_00ba8e5c;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xd7fc,&local_e0);
  ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar49 & 1) == 0) {
    ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d92c(plVar18,*ppuVar45,&DAT_01bee7fa);
  uVar51 = *(uint *)((long)param_1 + 0x6dd54);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x6dd54) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_0091ada4(plVar18);
  }
  FUN_00e705c8(&local_e0,"2");
  FUN_00f0d75c(plVar18,&local_e0);
  if (local_d8 != (long *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
  }
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TAG_FIELD",0);
  FUN_00abc73c(plVar19,uVar50);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_00ce1e34(plVar19,uVar50,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar19,1);
  FUN_00abced0(plVar19,1,2);
  FUN_00abcee4(plVar19,1,4);
  FUN_00abcf28(plVar19,0);
  local_e0 = thunk_FUN_00ba8ec8;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xdbe7,&local_e0);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_00abc73c(plVar20,uVar50);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_00ce1e34(plVar20,uVar50,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar20,1);
  FUN_00abced0(plVar20,1,2);
  FUN_00abcee4(plVar20,1,4);
  FUN_00abcf28(plVar20,0);
  local_e0 = thunk_FUN_00ba8ec8;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xdf86,&local_e0);
  ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar49 & 1) == 0) {
    ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d92c(plVar21,*ppuVar45,&DAT_01bee7fa);
  uVar51 = *(uint *)((long)param_1 + 0x719a4);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x719a4) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_0091ada4(plVar21);
  }
  FUN_00e705c8(&local_e0,"3");
  FUN_00f0d75c(plVar21,&local_e0);
  if (local_d8 != (long *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
  }
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_00abc73c(plVar22,uVar50);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_MOTTO_CAPTION",0);
  FUN_00ce1e34(plVar22,uVar50,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcf28(plVar22,0);
  FUN_00b037f8(plVar22,0);
  FUN_00abcee4(plVar22,1,0x8c);
  FUN_00abcec0(plVar22,0);
  local_e0 = thunk_FUN_00ba8f34;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xe371,&local_e0);
  ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar49 & 1) == 0) {
    ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d92c(plVar23,*ppuVar45,&DAT_01bee7fa);
  uVar51 = *(uint *)((long)param_1 + 0x738fc);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x738fc) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_0091ada4(plVar23);
  }
  FUN_00e705c8(&local_e0,"4");
  FUN_00f0d75c(plVar23,&local_e0);
  if (local_d8 != (long *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
  }
  FUN_00f0e548(plVar25,PTR_s_build___MenuPartsCommon_tga_02be3530,"checkbox_filled");
  bVar48 = (uVar49 & 1) == 0;
  ppuVar45 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if (bVar48) {
    ppuVar45 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if (bVar48) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d92c(plVar26,*ppuVar45,&DAT_01bee7fa);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_00f0d75c(plVar26,uVar50);
  uVar52 = FUN_00f01c54(plVar24,0,0,1,1);
  local_e0 = (code *)CONCAT44(fVar55,uVar52);
  FUN_00f13f18(plVar24,&local_e0);
  uVar52 = DAT_03210f58;
  *(uint *)((long)param_1 + 0x73b5c) = *(uint *)((long)param_1 + 0x73b5c) | 0x10;
  local_e0 = FUN_00ba3f7c;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xe75c,&local_e0);
  local_e0 = FUN_00ba3f7c;
  uVar46 = DAT_03210f84;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar46;
  FUN_009693a0(param_1 + 0xe75c,&local_e0);
  FUN_00f0e548(plVar28,PTR_s_build___MenuPartsCommon_tga_02be3530,"checkbox_filled");
  FUN_00f0d92c(plVar29,*ppuVar45,&DAT_01bee7fa);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_00f0d75c(plVar29,uVar50);
  uVar53 = FUN_00f01c54(plVar27,0,0,1,1);
  local_e0 = (code *)CONCAT44(fVar55,uVar53);
  FUN_00f13f18(plVar27,&local_e0);
  *(uint *)((long)param_1 + 0x73e34) = *(uint *)((long)param_1 + 0x73e34) | 0x10;
  local_e0 = FUN_00ba3f7c;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xe7b7,&local_e0);
  local_e0 = FUN_00ba3f7c;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_d8 = param_1;
  local_b8 = uVar46;
  FUN_009693a0(param_1 + 0xe7b7,&local_e0);
  uVar50 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x438c0000,plVar31,0,uVar50,&DAT_01bee7fa,&DAT_03218ef8,0);
  uVar52 = DAT_03210c64;
  local_e0 = thunk_FUN_00ba90bc;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xe823,&local_e0);
  FUN_00b0914c(plVar31,1);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_RENAME_TEAM",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar32,0,uVar50,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_e0 = FUN_00ba3f8c;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xeadb,&local_e0);
  FUN_00b09454(plVar32,0);
  FUN_00b0914c(plVar32,1);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_00ab703c(0x42480000,0x43480000,0x449c4000,plVar33,0,uVar50,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_e0 = FUN_00ba3f8c;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xed93,&local_e0);
  FUN_00f0d378(param_1 + 0xee76,*ppuVar44);
  FUN_00b09144(0x3f000000,plVar33);
  if ((*(float *)(param_1 + 0xed9c) != 0.5) || (*(float *)((long)param_1 + 0x76ce4) != 0.5)) {
    param_1[0xed9c] = 0x3f0000003f000000;
    FUN_0091ada4(plVar33);
  }
  FUN_00ab74fc(0,0x41f00000,plVar33);
  FUN_00ab7628(0x43133333,plVar33);
  FUN_00b0914c(plVar33,1);
  FUN_00b09454(plVar33,0);
  FUN_00f0e548(plVar36,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  pfVar43 = (float *)(param_1 + 0xf08f);
  if ((*pfVar43 != 0.0) || (*(float *)((long)param_1 + 0x7847c) != 3.0)) {
    pfVar43[0] = 0.0;
    pfVar43[1] = 3.0;
    FUN_0091ada4(plVar36);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar36 + 0x28))(plVar36,&local_e0);
  pfVar43 = (float *)(param_1 + 0xf090);
  if ((*pfVar43 != 0.9) || (*(float *)((long)param_1 + 0x78484) != 0.9)) {
    pfVar43[0] = 0.9;
    pfVar43[1] = 0.9;
    FUN_0091ada4(plVar36);
  }
  ppuVar45 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar49 & 1) == 0) {
    ppuVar45 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d378(plVar35,*ppuVar45);
  fVar55 = (float)FUN_00f0e700(plVar36);
  fVar56 = *(float *)((long)param_1 + 0x7847c) + -3.0;
  if ((*(float *)(param_1 + 0xf069) != fVar55) || (*(float *)((long)param_1 + 0x7834c) != fVar56)) {
    *(float *)(param_1 + 0xf069) = fVar55;
    *(float *)((long)param_1 + 0x7834c) = fVar56;
    FUN_0091ada4(plVar35);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar35 + 0x28))(plVar35,&local_e0);
  fVar55 = (float)FUN_00f01c54(plVar34,0,0,1,1);
  FUN_00f01c54(plVar34,0,0,1,1);
  fVar56 = fVar56 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xf052) != fVar55 * -0.5) ||
     (*(float *)((long)param_1 + 0x78294) != fVar56)) {
    *(float *)(param_1 + 0xf052) = fVar55 * -0.5;
    *(float *)((long)param_1 + 0x78294) = fVar56;
    FUN_0091ada4(plVar34);
  }
  local_e0 = (code *)0x0;
  (**(code **)(*plVar34 + 0x28))(plVar34,&local_e0);
  uVar50 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_00ab703c(0x42480000,0x43480000,0x449c4000,plVar37,0,uVar50,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_e0 = FUN_00ba3f8c;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar52;
  FUN_009693a0(param_1 + 0xf0a6,&local_e0);
  ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar49 & 1) == 0) {
    ppuVar45 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d378(param_1 + 0xf189,*ppuVar45);
  FUN_00b09144(0x3f000000,plVar37);
  if ((*(float *)(param_1 + 0xf0af) != 0.5) || (*(float *)((long)param_1 + 0x7857c) != 0.5)) {
    param_1[0xf0af] = 0x3f0000003f000000;
    FUN_0091ada4(plVar37);
  }
  FUN_00ab74fc(0,0x41f00000,plVar37);
  FUN_00ab7628(0x43133333,plVar37);
  FUN_00b0914c(plVar37,1);
  FUN_00b09454(plVar37,0);
  FUN_00f0e548(plVar40,PTR_s_build___MenuPartsCommon_tga_02be3530,"ice_icon_small");
  pfVar43 = (float *)(param_1 + 0xf3a2);
  if ((*pfVar43 != 0.0) || (*(float *)((long)param_1 + 0x79d14) != 3.0)) {
    pfVar43[0] = 0.0;
    pfVar43[1] = 3.0;
    FUN_0091ada4(plVar40);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar40 + 0x28))(plVar40,&local_e0);
  pfVar43 = (float *)(param_1 + 0xf3a3);
  if ((*pfVar43 != 0.9) || (*(float *)((long)param_1 + 0x79d1c) != 0.9)) {
    pfVar43[0] = 0.9;
    pfVar43[1] = 0.9;
    FUN_0091ada4(plVar40);
  }
  ppuVar45 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar49 & 1) == 0) {
    ppuVar45 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d378(plVar39,*ppuVar45);
  fVar55 = (float)FUN_00f0e700(plVar40);
  fVar56 = *(float *)((long)param_1 + 0x79d14) + -3.0;
  if ((*(float *)(param_1 + 0xf37c) != fVar55) || (*(float *)((long)param_1 + 0x79be4) != fVar56)) {
    *(float *)(param_1 + 0xf37c) = fVar55;
    *(float *)((long)param_1 + 0x79be4) = fVar56;
    FUN_0091ada4(plVar39);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar39 + 0x28))(plVar39,&local_e0);
  fVar55 = (float)FUN_00f01c54(plVar38,0,0,1,1);
  fVar56 = -0.5;
  FUN_00f01c54(plVar38,0,0,1,1);
  fVar56 = fVar56 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xf365) != fVar55 * -0.5) ||
     (*(float *)((long)param_1 + 0x79b2c) != fVar56)) {
    *(float *)(param_1 + 0xf365) = fVar55 * -0.5;
    *(float *)((long)param_1 + 0x79b2c) = fVar56;
    FUN_0091ada4(plVar38);
  }
  local_e0 = (code *)0x0;
  (**(code **)(*plVar38 + 0x28))(plVar38,&local_e0);
  local_b8 = DAT_03210f60;
  local_e0 = thunk_FUN_00ba94ac;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  FUN_009693a0(param_1 + 0xf3ca,&local_e0);
  local_e0 = thunk_FUN_00ba94ac;
  local_b8 = DAT_03210f8c;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  FUN_009693a0(param_1 + 0xf3ca,&local_e0);
  *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) & 0xfffffffb;
  FUN_00b4ae20(param_1 + 0x70,0);
  FUN_00f0e578(plVar25,"checkbox_filled");
  FUN_00f0e578(plVar28,"checkbox_empty");
  *(undefined4 *)(param_1 + 0xf461) = 0;
  FUN_00ba400c(param_1);
  *puVar41 = *puVar41 & 0xfffffffb;
  FUN_00ba4198(0,param_1,1,0,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  if (*(long *)(lVar47 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

