// functions/1002d — 260 functions
#include "GameKindred.h"




int FUN_1002d0060(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  if (*(int *)(param_3 + 0xdb0) == 0) {
    fVar3 = 0.0;
  }
  else {
    lVar1 = 0;
    uVar2 = 0;
    fVar3 = *(float *)(*(long *)(param_3 + 0xdc8) + 4);
    do {
      (**(code **)(**(long **)(*(long *)(param_3 + 0xdb8) + lVar1) + 0x48))();
      fVar3 = param_2 + fVar3;
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (uVar2 < *(uint *)(param_3 + 0xdb0));
    fVar3 = *(float *)(*(long *)(param_3 + 0xdc8) + lVar1 + -4) + fVar3;
  }
  return (int)fVar3;
}




void FUN_1002d00ec(long param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 != (*(uint *)(param_1 + 0xc54) & 4) >> 2) {
    uVar1 = 4;
    if (param_2 == 0) {
      uVar1 = 0;
    }
    *(uint *)(param_1 + 0xc54) = *(uint *)(param_1 + 0xc54) & 0xfffffffb | uVar1;
    FUN_1002d011c();
    return;
  }
  return;
}




void FUN_1002d011c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_60;
  float local_58;
  float fStack_54;
  
  uVar11 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar12 = (float)uVar11;
  if ((*(byte *)((long)param_3 + 0xc54) >> 2 & 1) != 0) {
    plVar1 = param_3 + 0x17a;
    FUN_100652fd8(plVar1,(int)param_2);
    fVar10 = (float)FUN_100652e60(plVar1);
    if (fVar10 < fVar12) {
      FUN_100652eac(plVar1,(int)fVar12);
    }
    fVar10 = (float)FUN_100652e60(plVar1);
    if ((*(float *)(param_3 + 0x182) != fVar12 - fVar10) ||
       (*(float *)((long)param_3 + 0xc14) != 0.0)) {
      *(float *)(param_3 + 0x182) = fVar12 - fVar10;
      *(undefined4 *)((long)param_3 + 0xc14) = 0;
      FUN_1000200a0(plVar1);
    }
  }
  bVar2 = false;
  if ((*(float *)((long)param_3 + 0x1ec) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)(param_3 + 0x3d)))) {
    bVar2 = *(float *)(param_3 + 0x3d) == 0.0;
  }
  local_58 = fVar12;
  fStack_54 = param_2;
  if (!bVar2) {
    param_3[0x3d] = 0;
    FUN_1000200a0(param_3 + 0x35);
  }
  FUN_10064e48c(param_3 + 0x35,&local_58);
  if ((int)param_3[0x1b6] != 0) {
    lVar7 = 0;
    uVar8 = 0;
    uVar9 = 0xffffffff;
    do {
      local_60 = CONCAT44(fStack_54 +
                          (float)((ulong)*(undefined8 *)(param_3[0x1b9] + lVar7) >> 0x20) * -2.0,
                          local_58 + (float)*(undefined8 *)(param_3[0x1b9] + lVar7) * -2.0);
      FUN_10064e48c(*(undefined8 *)(param_3[0x1b7] + lVar7),&local_60);
      if (lVar7 == 0) {
        lVar4 = *(long *)param_3[0x1b7];
        pfVar6 = (float *)param_3[0x1b9];
        bVar2 = false;
        if ((*(float *)(lVar4 + 0x40) == *pfVar6) &&
           (bVar2 = false, !NAN(*(float *)(lVar4 + 0x44)) && !NAN(pfVar6[1]))) {
          bVar2 = *(float *)(lVar4 + 0x44) == pfVar6[1];
        }
        if (!bVar2) {
          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)pfVar6;
          FUN_1000200a0();
        }
      }
      else {
        lVar5 = param_3[0x1b7];
        lVar4 = *(long *)(lVar5 + lVar7);
        if (*(float *)(lVar4 + 0x40) != *(float *)(param_3[0x1b9] + lVar7)) {
          *(float *)(lVar4 + 0x40) = *(float *)(param_3[0x1b9] + lVar7);
          FUN_1000200a0();
          lVar5 = param_3[0x1b7];
          lVar4 = *(long *)(lVar5 + lVar7);
        }
        FUN_10064e72c(0,lVar4,0,*(undefined8 *)(lVar5 + (uVar9 & 0xffffffff) * 8),2);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 < *(uint *)(param_3 + 0x1b6));
  }
  plVar1 = param_3 + 0x198;
  FUN_100652e60(plVar1);
  FUN_10064e47c(uVar11,plVar1);
  FUN_10064e5ec(0,0,plVar1,6,param_3,6);
  if (((char)param_3[0x1ba] == '\0') &&
     (uVar3 = FUN_1002d0060(param_3), 1.0 < ABS((float)uVar3 - param_2))) {
    FUN_10064e47c(uVar11,param_3);
  }
  return;
}




void FUN_1002d0348(long param_1)

{
  if (*(long *)(param_1 + 0xdb8) != 0) {
    *(undefined4 *)(param_1 + 0xdb0) = 0;
  }
  return;
}




void thunk_FUN_1002d011c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  
  uVar11 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar12 = (float)uVar11;
  if ((*(byte *)((long)param_3 + 0xc54) >> 2 & 1) != 0) {
    plVar1 = param_3 + 0x17a;
    FUN_100652fd8(plVar1,(int)param_2);
    fVar10 = (float)FUN_100652e60(plVar1);
    if (fVar10 < fVar12) {
      FUN_100652eac(plVar1,(int)fVar12);
    }
    fVar10 = (float)FUN_100652e60(plVar1);
    if ((*(float *)(param_3 + 0x182) != fVar12 - fVar10) ||
       (*(float *)((long)param_3 + 0xc14) != 0.0)) {
      *(float *)(param_3 + 0x182) = fVar12 - fVar10;
      *(undefined4 *)((long)param_3 + 0xc14) = 0;
      FUN_1000200a0(plVar1);
    }
  }
  bVar2 = false;
  if ((*(float *)((long)param_3 + 0x1ec) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)(param_3 + 0x3d)))) {
    bVar2 = *(float *)(param_3 + 0x3d) == 0.0;
  }
  fStack_58 = fVar12;
  fStack_54 = param_2;
  if (!bVar2) {
    param_3[0x3d] = 0;
    FUN_1000200a0(param_3 + 0x35);
  }
  FUN_10064e48c(param_3 + 0x35,&fStack_58);
  if ((int)param_3[0x1b6] != 0) {
    lVar7 = 0;
    uVar8 = 0;
    uVar9 = 0xffffffff;
    do {
      uStack_60 = CONCAT44(fStack_54 +
                           (float)((ulong)*(undefined8 *)(param_3[0x1b9] + lVar7) >> 0x20) * -2.0,
                           fStack_58 + (float)*(undefined8 *)(param_3[0x1b9] + lVar7) * -2.0);
      FUN_10064e48c(*(undefined8 *)(param_3[0x1b7] + lVar7),&uStack_60);
      if (lVar7 == 0) {
        lVar4 = *(long *)param_3[0x1b7];
        pfVar6 = (float *)param_3[0x1b9];
        bVar2 = false;
        if ((*(float *)(lVar4 + 0x40) == *pfVar6) &&
           (bVar2 = false, !NAN(*(float *)(lVar4 + 0x44)) && !NAN(pfVar6[1]))) {
          bVar2 = *(float *)(lVar4 + 0x44) == pfVar6[1];
        }
        if (!bVar2) {
          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)pfVar6;
          FUN_1000200a0();
        }
      }
      else {
        lVar5 = param_3[0x1b7];
        lVar4 = *(long *)(lVar5 + lVar7);
        if (*(float *)(lVar4 + 0x40) != *(float *)(param_3[0x1b9] + lVar7)) {
          *(float *)(lVar4 + 0x40) = *(float *)(param_3[0x1b9] + lVar7);
          FUN_1000200a0();
          lVar5 = param_3[0x1b7];
          lVar4 = *(long *)(lVar5 + lVar7);
        }
        FUN_10064e72c(0,lVar4,0,*(undefined8 *)(lVar5 + (uVar9 & 0xffffffff) * 8),2);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 < *(uint *)(param_3 + 0x1b6));
  }
  plVar1 = param_3 + 0x198;
  FUN_100652e60(plVar1);
  FUN_10064e47c(uVar11,plVar1);
  FUN_10064e5ec(0,0,plVar1,6,param_3,6);
  if (((char)param_3[0x1ba] == '\0') &&
     (uVar3 = FUN_1002d0060(param_3), 1.0 < ABS((float)uVar3 - param_2))) {
    FUN_10064e47c(uVar11,param_3);
  }
  return;
}




void FUN_1002d035c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_thunk_FUN_10064e2bc_101487fe8;
  return;
}




void FUN_1002d0380(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_10029bc90();
                    /* WARNING: Could not recover jumptable at 0x0001002d03b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x90))();
    return;
  }
  return;
}




void FUN_1002d03c0(long *param_1,long param_2)

{
  param_1[0x18] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002d03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  return;
}




void FUN_1002d03d8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




long * FUN_1002d03ec(long *param_1)

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
  undefined **ppuVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar20 = (undefined8 *)FUN_10064e20c();
  puVar20[0x17] = 0;
  puVar21 = puVar20 + 0x18;
  *puVar20 = &PTR_thunk_FUN_1002d1220_101488130;
  thunk_FUN_100650e64();
  plVar1 = param_1 + 0x3e;
  thunk_FUN_100650e64();
  plVar2 = param_1 + 100;
  thunk_FUN_100650e64();
  plVar3 = param_1 + 0x8a;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0xa1;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 199;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0xe5;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x103;
  thunk_FUN_100536c60();
  plVar8 = param_1 + 0x199;
  FUN_10064e264(plVar8);
  plVar9 = param_1 + 0x1b0;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_1 + 0x1d6;
  thunk_FUN_100652c08(plVar10);
  plVar11 = param_1 + 500;
  thunk_FUN_100652c08();
  plVar12 = param_1 + 0x212;
  thunk_FUN_100536c60(plVar12);
  FUN_1006421a8();
  param_1[0x2a8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar13 = param_1 + 0x2b9;
  thunk_FUN_1002eca3c(plVar13,0);
  plVar14 = param_1 + 0x402;
  thunk_FUN_1002eca3c(plVar14,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar8,plVar11,1);
  FUN_100642bd8(plVar8,plVar12,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2a8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  FUN_100651594(puVar21,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar22 = FUN_1004e0150("RETRIEVE_CREDENTIALS_HEADER",0);
  FUN_1006513c0(puVar21,uVar22);
  FUN_1006515e0(puVar21,1);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a170);
  uVar22 = FUN_1004e0150("GENERIC_FORM_ERROR_EMPTY",0);
  FUN_1006513c0(plVar1,uVar22);
  *(uint *)((long)param_1 + 0x274) = *(uint *)((long)param_1 + 0x274) & 0xfffffffb;
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar22 = FUN_1004e0150("RETRIEVE_CREDENTIALS_DESCRIPTION",0);
  FUN_1006513c0(plVar2,uVar22);
  FUN_1006515e0(plVar2,1);
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar16 = *(uint *)((long)param_1 + 0x6bc);
  if ((uVar16 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0x6bc) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x1e80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff6c5050);
  FUN_100652dd4(plVar6,&local_90,2);
  if ((*(uint *)((long)param_1 + 0x7ac) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x7ac) = *(uint *)((long)param_1 + 0x7ac) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar6);
  }
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar22 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CAPTION",0);
  FUN_1006513c0(plVar4,uVar22);
  iVar19 = FUN_10012709c();
  ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar19 != 1) {
    ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  FUN_100651594(param_1 + 0x13c,*ppuVar15,&DAT_10115a168);
  uVar22 = FUN_1004e0150("MAIN_PROFILE_LOGIN_TEXTENTRY_EMAIL_MESSAGE",0);
  FUN_10053726c(plVar7,uVar22);
  FUN_100536e94(plVar7,1);
  uVar18 = DAT_101dbd4b4;
  local_68 = DAT_101dbd4b4;
  local_90 = FUN_1002d0bb8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x104,&local_90);
  uVar17 = DAT_101dbd4ac;
  local_68 = DAT_101dbd4ac;
  local_90 = FUN_1002d0bbc;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x104,&local_90);
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar10,&DAT_10115a164,2);
  uVar16 = *(uint *)((long)param_1 + 0xf34);
  if ((uVar16 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0xf34) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x1e80;
    FUN_1000200a0(plVar10);
  }
  FUN_100652cac(plVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff6c5050);
  FUN_100652dd4(plVar11,&local_90,2);
  if ((*(uint *)((long)param_1 + 0x1024) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1024) = *(uint *)((long)param_1 + 0x1024) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar11);
  }
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar22 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_CAPTION",0);
  FUN_1006513c0(plVar9,uVar22);
  iVar19 = FUN_10012709c();
  ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar19 != 1) {
    ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  FUN_100651594(param_1 + 0x24b,*ppuVar15,&DAT_10115a168);
  uVar22 = FUN_1004e0150("MAIN_PROFILE_LOGIN_TEXTENTRY_PASS_MESSAGE",0);
  FUN_10053726c(plVar12,uVar22);
  FUN_100536e94(plVar12,1);
  FUN_1006518fc(param_1 + 0x24b,1);
  local_68 = uVar18;
  local_90 = FUN_1002d0bb8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x213,&local_90);
  local_68 = uVar17;
  local_90 = FUN_1002d0bbc;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x213,&local_90);
  uVar17 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = FUN_1002d0be8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x2ba,&local_90);
  FUN_1002eb970(plVar13,1);
  FUN_1002ecc7c(plVar13,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar22 = FUN_1004e0150("RETRIEVE_CREDENTIALS_BUTTON_CANCEL",0);
  FUN_1002ecce4(plVar13,uVar22);
  FUN_1002ebe0c(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff3f2b2a);
  FUN_1002ebe4c(plVar13,&local_90);
  FUN_1002ebea0(plVar13,1);
  local_68 = uVar17;
  local_90 = thunk_FUN_1002d104c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x403,&local_90);
  FUN_1002eb970(plVar14,1);
  FUN_1002ecc7c(plVar14,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar22 = FUN_1004e0150("RETRIEVE_CREDENTIALS_BUTTON_ACCEPT",0);
  FUN_1002ecce4(plVar14,uVar22);
  FUN_1002ebe0c(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff3f2b2a);
  FUN_1002ebe4c(plVar14,&local_90);
  FUN_1002ebea0(plVar14,1);
  FUN_100530068(plVar14,0);
  return param_1;
}




void FUN_1002d0bb8(void)

{
  return;
}




void FUN_1002d0bbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1002d10e4();
  FUN_100530068(param_1 + 0x2010,uVar1);
  return;
}




void FUN_1002d0be8(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002d0bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void thunk_FUN_1002d104c(long param_1)

{
  undefined8 uVar1;
  void *pvStack_50;
  undefined8 uStack_48;
  long lStack_40;
  void *pvStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    pvStack_38 = (void *)0x0;
    uStack_30 = 0;
    lStack_28 = 0;
    pvStack_50 = (void *)0x0;
    uStack_48 = 0;
    lStack_40 = 0;
    uVar1 = FUN_100655b6c(param_1 + 0xab0);
    FUN_1004e357c(uVar1,&pvStack_38);
    uVar1 = FUN_100655b6c(param_1 + 0x1328);
    FUN_1004e357c(uVar1,&pvStack_50);
    (**(code **)**(undefined8 **)(param_1 + 0xb8))
              (*(undefined8 **)(param_1 + 0xb8),&pvStack_38,&pvStack_50);
    if (lStack_40 < 0) {
      operator_delete(pvStack_50);
    }
    if (lStack_28 < 0) {
      operator_delete(pvStack_38);
    }
  }
  return;
}




long * thunk_FUN_1002d03ec(long *param_1)

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
  undefined **ppuVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar20 = (undefined8 *)FUN_10064e20c();
  puVar20[0x17] = 0;
  puVar21 = puVar20 + 0x18;
  *puVar20 = &PTR_thunk_FUN_1002d1220_101488130;
  thunk_FUN_100650e64();
  plVar1 = param_1 + 0x3e;
  thunk_FUN_100650e64();
  plVar2 = param_1 + 100;
  thunk_FUN_100650e64();
  plVar3 = param_1 + 0x8a;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0xa1;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 199;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0xe5;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x103;
  thunk_FUN_100536c60();
  plVar8 = param_1 + 0x199;
  FUN_10064e264(plVar8);
  plVar9 = param_1 + 0x1b0;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_1 + 0x1d6;
  thunk_FUN_100652c08(plVar10);
  plVar11 = param_1 + 500;
  thunk_FUN_100652c08();
  plVar12 = param_1 + 0x212;
  thunk_FUN_100536c60(plVar12);
  FUN_1006421a8();
  param_1[0x2a8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar13 = param_1 + 0x2b9;
  thunk_FUN_1002eca3c(plVar13,0);
  plVar14 = param_1 + 0x402;
  thunk_FUN_1002eca3c(plVar14,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar8,plVar11,1);
  FUN_100642bd8(plVar8,plVar12,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2a8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  FUN_100651594(puVar21,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar22 = FUN_1004e0150("RETRIEVE_CREDENTIALS_HEADER",0);
  FUN_1006513c0(puVar21,uVar22);
  FUN_1006515e0(puVar21,1);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a170);
  uVar22 = FUN_1004e0150("GENERIC_FORM_ERROR_EMPTY",0);
  FUN_1006513c0(plVar1,uVar22);
  *(uint *)((long)param_1 + 0x274) = *(uint *)((long)param_1 + 0x274) & 0xfffffffb;
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar22 = FUN_1004e0150("RETRIEVE_CREDENTIALS_DESCRIPTION",0);
  FUN_1006513c0(plVar2,uVar22);
  FUN_1006515e0(plVar2,1);
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar16 = *(uint *)((long)param_1 + 0x6bc);
  if ((uVar16 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0x6bc) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x1e80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff6c5050);
  FUN_100652dd4(plVar6,&pcStack_90,2);
  if ((*(uint *)((long)param_1 + 0x7ac) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x7ac) = *(uint *)((long)param_1 + 0x7ac) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar6);
  }
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar22 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CAPTION",0);
  FUN_1006513c0(plVar4,uVar22);
  iVar19 = FUN_10012709c();
  ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar19 != 1) {
    ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  FUN_100651594(param_1 + 0x13c,*ppuVar15,&DAT_10115a168);
  uVar22 = FUN_1004e0150("MAIN_PROFILE_LOGIN_TEXTENTRY_EMAIL_MESSAGE",0);
  FUN_10053726c(plVar7,uVar22);
  FUN_100536e94(plVar7,1);
  uVar18 = DAT_101dbd4b4;
  uStack_68 = DAT_101dbd4b4;
  pcStack_90 = FUN_1002d0bb8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x104,&pcStack_90);
  uVar17 = DAT_101dbd4ac;
  uStack_68 = DAT_101dbd4ac;
  pcStack_90 = FUN_1002d0bbc;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x104,&pcStack_90);
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar10,&DAT_10115a164,2);
  uVar16 = *(uint *)((long)param_1 + 0xf34);
  if ((uVar16 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0xf34) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x1e80;
    FUN_1000200a0(plVar10);
  }
  FUN_100652cac(plVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff6c5050);
  FUN_100652dd4(plVar11,&pcStack_90,2);
  if ((*(uint *)((long)param_1 + 0x1024) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1024) = *(uint *)((long)param_1 + 0x1024) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar11);
  }
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar22 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_CAPTION",0);
  FUN_1006513c0(plVar9,uVar22);
  iVar19 = FUN_10012709c();
  ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar19 != 1) {
    ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  FUN_100651594(param_1 + 0x24b,*ppuVar15,&DAT_10115a168);
  uVar22 = FUN_1004e0150("MAIN_PROFILE_LOGIN_TEXTENTRY_PASS_MESSAGE",0);
  FUN_10053726c(plVar12,uVar22);
  FUN_100536e94(plVar12,1);
  FUN_1006518fc(param_1 + 0x24b,1);
  uStack_68 = uVar18;
  pcStack_90 = FUN_1002d0bb8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x213,&pcStack_90);
  uStack_68 = uVar17;
  pcStack_90 = FUN_1002d0bbc;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x213,&pcStack_90);
  uVar17 = DAT_101d91884;
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002d0be8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x2ba,&pcStack_90);
  FUN_1002eb970(plVar13,1);
  FUN_1002ecc7c(plVar13,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar22 = FUN_1004e0150("RETRIEVE_CREDENTIALS_BUTTON_CANCEL",0);
  FUN_1002ecce4(plVar13,uVar22);
  FUN_1002ebe0c(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff3f2b2a);
  FUN_1002ebe4c(plVar13,&pcStack_90);
  FUN_1002ebea0(plVar13,1);
  uStack_68 = uVar17;
  pcStack_90 = thunk_FUN_1002d104c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x403,&pcStack_90);
  FUN_1002eb970(plVar14,1);
  FUN_1002ecc7c(plVar14,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar22 = FUN_1004e0150("RETRIEVE_CREDENTIALS_BUTTON_ACCEPT",0);
  FUN_1002ecce4(plVar14,uVar22);
  FUN_1002ebe0c(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff3f2b2a);
  FUN_1002ebe4c(plVar14,&pcStack_90);
  FUN_1002ebea0(plVar14,1);
  FUN_100530068(plVar14,0);
  return param_1;
}




void FUN_1002d0c08(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  
  plVar1 = param_1 + 0x8a;
  (**(code **)(*param_1 + 0x48))();
  fVar9 = 120.0;
  fVar8 = fVar9;
  FUN_10064e47c(plVar1);
  fVar7 = (float)FUN_10064e3cc(plVar1);
  fStack_84 = fVar8;
  fVar8 = (float)FUN_100651184(param_1 + 0xa1);
  local_88 = (-50.0 - fVar8) + fVar7;
  FUN_10064e48c(param_1 + 0xe5,&local_88);
  plVar2 = param_1 + 199;
  uVar10 = NEON_fmov(0xc0c00000,4);
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  local_90 = CONCAT44(fStack_84 + fVar11,local_88 + (float)uVar10);
  FUN_10064e48c(plVar2,&local_90);
  FUN_1005371f8(local_88,param_1 + 0x103);
  plVar3 = param_1 + 0x199;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(plVar3);
  fVar8 = (float)FUN_10064e3cc(plVar3);
  local_90._4_4_ = fVar9;
  fVar7 = (float)FUN_100651184();
  local_90._0_4_ = (-50.0 - fVar7) + fVar8;
  FUN_10064e48c(param_1 + 500,&local_90);
  plVar4 = param_1 + 0x1d6;
  local_98 = CONCAT44(local_90._4_4_ + fVar11,(float)local_90 + (float)uVar10);
  FUN_10064e48c(plVar4,&local_98);
  FUN_1005371f8((float)local_90,param_1 + 0x212);
  FUN_10064e48c(param_1 + 0x402,&DAT_101158a88);
  FUN_10064e48c(param_1 + 0x2b9,&DAT_101158a88);
  plVar5 = param_1 + 0x18;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_100651708(plVar5,1);
  plVar6 = param_1 + 100;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_100651708(plVar6,1);
  FUN_10064e5ec(0,0,plVar5,4,param_1,4);
  FUN_10064e5ec(0,0,plVar1,4,plVar5,6);
  FUN_10064e72c(0,plVar1,3,param_1,3);
  FUN_10064e5ec(0,0,param_1 + 0xa1,7,plVar1,7);
  FUN_10064e5ec(0,0,plVar2,5,plVar1,5);
  FUN_10064e5ec(0,0,param_1 + 0xe5,8,plVar2,8);
  FUN_10064e5ec(0,0,param_1 + 0x103,8,plVar2,8);
  FUN_10064e5ec(0,0,param_1 + 0x3e,0,plVar1,3);
  FUN_10064e5ec(0,0,plVar3,4,param_1 + 0x3e,6);
  FUN_10064e72c(0,plVar3,3,param_1,3);
  FUN_10064e5ec(0,0,param_1 + 0x1b0,7,plVar3,7);
  FUN_10064e5ec(0,0,plVar4,5,plVar3,5);
  FUN_10064e5ec(0,0,param_1 + 500,8,plVar4,8);
  FUN_10064e5ec(0,0,param_1 + 0x212,8,plVar4,8);
  FUN_10064e5ec(0,0,plVar6,4,plVar3,6);
  FUN_10064e72c(0,plVar6,4,param_1,4);
  plVar1 = param_1 + 0x2a8;
  FUN_10064e5ec(0,0xc2480000,plVar1,6,param_1,6);
  FUN_10064e5ec(0xc2480000,0,param_1 + 0x2b9,2,plVar1,8);
  FUN_10064e5ec(0x42480000,0,param_1 + 0x402,3,plVar1,8);
  FUN_100537780(param_1 + 0x11a);
  FUN_100537780(param_1 + 0x229);
  return;
}




void FUN_1002d1014(long param_1,undefined8 param_2)

{
  FUN_100530068(param_1 + 0x15c8);
  FUN_100530068(param_1 + 0x2010,param_2);
  return;
}




void FUN_1002d104c(long param_1)

{
  undefined8 uVar1;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    local_50 = (void *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    uVar1 = FUN_100655b6c(param_1 + 0xab0);
    FUN_1004e357c(uVar1,&local_38);
    uVar1 = FUN_100655b6c(param_1 + 0x1328);
    FUN_1004e357c(uVar1,&local_50);
    (**(code **)**(undefined8 **)(param_1 + 0xb8))
              (*(undefined8 **)(param_1 + 0xb8),&local_38,&local_50);
    if (local_40 < 0) {
      operator_delete(local_50);
    }
    if (local_28 < 0) {
      operator_delete(local_38);
    }
  }
  return;
}




uint FUN_1002d10e4(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_1002d1168();
  if ((uVar1 & 1) == 0) {
    FUN_100655b6c(param_1 + 0xab0);
    iVar2 = FUN_1004e3624();
    uVar3 = 4;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x274) = *(uint *)(param_1 + 0x274) & 0xfffffffb | uVar3;
  uVar3 = FUN_1002d11b4(param_1);
  if ((uVar3 & 1) == 0) {
    FUN_100655b6c(param_1 + 0x1328);
    FUN_1004e3624();
  }
  return uVar1 & uVar3;
}




undefined8 FUN_1002d1168(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_100655b6c(param_1 + 0xab0);
  uVar1 = FUN_1004e3624();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_100655b6c(param_1 + 0xab0);
  uVar2 = FUN_1004e36c0(uVar2,param_1 + 0x9d0);
  return uVar2;
}




undefined8 FUN_1002d11b4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_100655b6c(param_1 + 0x1328);
  uVar1 = FUN_1004e3624();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_100655b6c(param_1 + 0x1328);
  uVar2 = FUN_1004e36c0(uVar2,param_1 + 0x1248);
  return uVar2;
}




void thunk_FUN_1002d1220(void)

{
  FUN_1002d1220();
  return;
}




void FUN_1002d120c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002d1220();
  operator_delete(pvVar1);
  return;
}




void FUN_1002d1220(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002d1220_101488130;
  param_1[0x402] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x523);
  FUN_1002ebc50(param_1 + 0x402);
  param_1[0x2b9] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x3da);
  FUN_1002ebc50(param_1 + 0x2b9);
  FUN_10064221c(param_1 + 0x2a8);
  thunk_FUN_100536ddc(param_1 + 0x212);
  param_1[500] = &PTR_FUN_1014a7108;
  param_1[0x20b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20e);
  FUN_10064e2bc(param_1 + 500);
  param_1[0x1d6] = &PTR_FUN_1014a7108;
  param_1[0x1ed] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1f0);
  FUN_10064e2bc(param_1 + 0x1d6);
  thunk_FUN_100651068(param_1 + 0x1b0);
  thunk_FUN_10064e2bc(param_1 + 0x199);
  thunk_FUN_100536ddc(param_1 + 0x103);
  param_1[0xe5] = &PTR_FUN_1014a7108;
  param_1[0xfc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xff);
  FUN_10064e2bc(param_1 + 0xe5);
  param_1[199] = &PTR_FUN_1014a7108;
  param_1[0xde] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe1);
  FUN_10064e2bc(param_1 + 199);
  thunk_FUN_100651068(param_1 + 0xa1);
  thunk_FUN_10064e2bc(param_1 + 0x8a);
  thunk_FUN_100651068(param_1 + 100);
  thunk_FUN_100651068(param_1 + 0x3e);
  thunk_FUN_100651068(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002d137c(void)

{
  DAT_101e44fa8 = 0xff;
  DAT_101e44faa = 0xffff;
  DAT_101e44fac = 0xffff;
  DAT_101e44fb0 = 0x4326000041900000;
  DAT_101e44fb8 = 0x4326000041c00000;
  DAT_101e44fc0 = 0xffbc9c44;
  DAT_101e44fc4 = 0xff1166f2;
  DAT_101e44fc8 = 0xffe0e0e0;
  DAT_101e44fcc = 0xffa0a0a0;
  DAT_101e44fd0 = 0xff8c8c8c;
  DAT_101e44fd4 = 0xff322213;
  DAT_101e44fd8 = 0xff091911;
  DAT_101e44fdc = 0xff170c19;
  DAT_101e44fe0 = 0xff241a14;
  DAT_101e44fe4 = 0xff14171c;
  DAT_101e44fe8 = 0xff221911;
  DAT_101e44fec = 0xff1a1416;
  DAT_101e44ff0 = 0xff121414;
  DAT_101e44ff4 = 0xff1a1809;
  DAT_101e44ff8 = 0xff141414;
  DAT_101e44ffc = 0xff141414;
  DAT_101e45000 = 0xff2929c0;
  DAT_101e45004 = 0xff283082;
  DAT_101e45008 = 0xff5262cc;
  DAT_101e4500c = 0xff283082;
  DAT_101e45010 = 0xff5262cc;
  DAT_101e45014 = 0xff745c42;
  DAT_101e45018 = 0xff184155;
  DAT_101e4501c = 0xff92665e;
  DAT_101e45020 = 0xffbc9c44;
  DAT_101e45024 = 0xffbbae56;
  DAT_101e45028 = 0xff8b7b01;
  DAT_101e4502c = 0xff90b3ef;
  DAT_101e45030 = 0xff728ebe;
  DAT_101e45034 = 0xff19459d;
  DAT_101e45038 = 0xff9d877b;
  DAT_101e4503c = 0xffcbb1a3;
  DAT_101e45040 = 0xff3f6fb5;
  DAT_101e45044 = 0xffc5c5c5;
  DAT_101e45048 = 0xff4fc1f1;
  DAT_101e4504c = 0xff606060;
  DAT_101e45050 = 0xffc5ff7b;
  DAT_101e45054 = 0xff5271eb;
  DAT_101e45058 = 0xfffae076;
  DAT_101e4505c = 0xff3ac8f6;
  DAT_101e45060 = 0xffaaaaaa;
  DAT_101e45064 = 0xffe19400;
  DAT_101e45068 = 0xffe19400;
  DAT_101e4506c = 0xffe550b2;
  DAT_101e45070 = 0xfff22ae8;
  DAT_101e45074 = 0xff005ae1;
  DAT_101e45078 = 0xff1addfa;
  DAT_101e4507c = 0xff2424b3;
  DAT_101e45080 = 0xff2424b3;
  DAT_101e45084 = 0xff646464;
  DAT_101e45088 = 0xff92665e;
  DAT_101e4508c = 0xff646037;
  DAT_101e45090 = 0xffffffff;
  DAT_101e45094 = 0xff1111a1;
  DAT_101e45098 = 0xff321ee1;
  DAT_101e4509c = 0xffc8c8c8;
  DAT_101e450a0 = 0xff321ee1;
  DAT_101e450a4 = 0xff7fe801;
  DAT_101e450a8 = 0xffffffff;
  DAT_101e450ac = 0xff6259b3;
  DAT_101e450b0 = 0xff506e73;
  DAT_101e450b4 = 0xff9dbf86;
  DAT_101e450b8 = 0xffa35244;
  DAT_101e450bc = 0xffca828e;
  DAT_101e450c0 = 0xffa6a6a6;
  DAT_101e450c4 = 0xffa6a6a6;
  DAT_101e450c8 = 0xffffffff;
  DAT_101e450cc = 0xff88ea2f;
  DAT_101e450d0 = 0xff8c8c8c;
  DAT_101e450d4 = 0xffffb400;
  DAT_101e450d8 = 0xffff00ff;
  DAT_101e450dc = 0xff00aded;
  DAT_101e450e0 = 0xff33d3ff;
  DAT_101e450e4 = 0xff7fe801;
  DAT_101e450e8 = 0xff282828;
  DAT_101e450ec = 0xfff0f0f0;
  DAT_101e450f0 = 0xffa4781e;
  DAT_101e450f4 = 0xffa6654b;
  DAT_101e450f8 = 0xff93435b;
  DAT_101e450fc = 0xff387f9c;
  DAT_101e45100 = 0xffa3781e;
  DAT_101e45104 = 0xffffd18a;
  DAT_101e45108 = 0xffff61f7;
  DAT_101e4510c = 0xff5de1f2;
  DAT_101e45110 = 0xff80eaff;
  DAT_101e45114 = 0xff32e00e;
  DAT_101e45118 = 0xff5a3c10;
  DAT_101e4511c = 0xff330b03;
  DAT_101e45120 = 0xff33031d;
  DAT_101e45124 = 0xff032433;
  DAT_101e45128 = 0xff9e8e8d;
  DAT_101e45180 = PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  DAT_101e45168 = PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  DAT_101e45158 = PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
  DAT_101e45160 = PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  DAT_101e451a0 = PTR_s_build___Fonts_Brandon_Bold_190_f_10184e268;
  DAT_101e451a8 = PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  DAT_101e45188 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  DAT_101e45190 = PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  DAT_101e45198 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  DAT_101e4512c = 0xff642450;
  DAT_101e45130 = 0xff00ccff;
  DAT_101e45134 = 0xff3c3632;
  DAT_101e45138 = 0xff000000;
  DAT_101e4513c = 0xffc8c8c8;
  DAT_101e45140 = 0xff6e6a67;
  DAT_101e45144 = 0xfff06ad2;
  DAT_101e45148 = 0xff646062;
  DAT_101e4514c = 0xffd2d2da;
  DAT_101e45170 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  DAT_101e45178 = PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  DAT_101e45150 = 0xff9c9896;
  DAT_101e45154 = 0xffffffff;
  return;
}




long * FUN_1002d1bb8(long *param_1)

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
  undefined **ppuVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined1 auStack_a8 [8];
  void *local_a0;
  code *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  puVar24 = (undefined8 *)FUN_10064e20c();
  puVar24[0x17] = 0;
  *puVar24 = &PTR_thunk_FUN_1002d422c_101488278;
  puVar24 = puVar24 + 0x18;
  thunk_FUN_100650e64(puVar24);
  plVar28 = param_1 + 0x3e;
  thunk_FUN_1002eca3c(plVar28,0);
  FUN_10064e264();
  FUN_10064e264();
  plVar29 = param_1 + 0x1b5;
  thunk_FUN_100184f78(plVar29);
  plVar1 = param_1 + 0x553;
  thunk_FUN_100184f78(plVar1);
  plVar2 = param_1 + 0x8f1;
  thunk_FUN_100184f78();
  plVar3 = param_1 + 0xc8f;
  thunk_FUN_100184f78();
  plVar4 = param_1 + 0x102d;
  FUN_1002d3fc0();
  plVar5 = param_1 + 0x1322;
  FUN_1002d3fc0();
  plVar6 = param_1 + 0x1617;
  FUN_1002d3fc0();
  plVar7 = param_1 + 0x190c;
  thunk_FUN_1002eca3c(plVar7,0);
  plVar8 = param_1 + 0x1a55;
  thunk_FUN_100650e64();
  FUN_10064e264();
  plVar9 = param_1 + 0x1a92;
  thunk_FUN_100650e64();
  plVar10 = param_1 + 0x1ab8;
  thunk_FUN_1001c0c34(plVar10,0);
  plVar11 = param_1 + 0x1b67;
  thunk_FUN_100655644(plVar11);
  lVar30 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar30 + 0xdc90);
    lVar30 = lVar30 + 0x130;
  } while (lVar30 != 0x5f0);
  plVar12 = param_1 + 0x1c50;
  FUN_10064e264();
  plVar13 = param_1 + 0x1c67;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0x1c85;
  thunk_FUN_100652c08();
  plVar15 = param_1 + 0x1ca3;
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0x1cc9;
  thunk_FUN_100650e64();
  plVar17 = param_1 + 0x1cef;
  thunk_FUN_100650e64(plVar17);
  param_1[0x1d16] = 0;
  param_1[0x1d15] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar24,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar28,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x187,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar29,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19e,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  lVar30 = 0;
  do {
    FUN_100655930(plVar11,(long)param_1 + lVar30 + 0xdc90,1);
    lVar30 = lVar30 + 0x130;
  } while (lVar30 != 0x5f0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1a7b,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_100642bd8(plVar12,plVar13,1);
  FUN_100642bd8(plVar12,plVar14,1);
  FUN_100642bd8(plVar12,plVar15,1);
  FUN_100642bd8(plVar12,plVar16,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar17,1);
  iVar23 = FUN_100126c88();
  ppuVar18 = &PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8;
  if (iVar23 == 0) {
    ppuVar18 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  param_1[0x1d15] = (long)*ppuVar18;
  ppuVar18 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar23 == 0) {
    ppuVar18 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  param_1[0x1d16] = (long)*ppuVar18;
  plVar25 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(param_1,plVar25);
  FUN_10064a8b0(plVar25,0x78,0x14,0x78,0x14);
  (**(code **)(*plVar25 + 0x60))(plVar25,puVar24,10);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar28,9);
  (**(code **)(*plVar25 + 0x78))(plVar25,0,0);
  (**(code **)(*plVar25 + 0x60))(plVar25,param_1 + 0x187,10);
  (**(code **)(*plVar25 + 0x78))(plVar25,0,0);
  (**(code **)(*plVar25 + 0x60))(plVar25,param_1 + 0x19e,10);
  (**(code **)(*plVar25 + 0x78))(plVar25,0,0);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar4,10);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar5,10);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar6,10);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar7,10);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar8,9);
  (**(code **)(*plVar25 + 0x60))(plVar25,param_1 + 0x1a7b,0xc);
  FUN_100651038(puVar24,param_1[0x1d16]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_LOGIN_PROMPT",0);
  FUN_1006513c0(puVar24,uVar26);
  FUN_1006515e0(puVar24,1);
  FUN_100651764(0xbda3d70a,puVar24);
  FUN_1002ecc7c(plVar28,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_WHY_COLLECT",0);
  FUN_1002ecce4(plVar28,uVar26);
  FUN_1002ebee0(0x42000000,0x40000000,plVar28);
  uVar20 = DAT_101d91884;
  local_70 = DAT_101d91884;
  local_98 = FUN_1002d2a24;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x3f,&local_98);
  FUN_1001b05dc(plVar29,param_1[0x1d16]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_USER_DEFAULT",0);
  FUN_100185730(plVar29,uVar26);
  FUN_100185e1c(0xc1200000,plVar29);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CAPTION",0);
  uVar27 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_MESSAGE",0);
  FUN_1001afd98(plVar29,uVar26,uVar27,&DAT_101d91650,0,1,0,0,0,1);
  uVar21 = DAT_101dbd4ac;
  local_70 = DAT_101dbd4ac;
  local_98 = FUN_1002d2a34;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x1b6,&local_98);
  uVar22 = DAT_101dbd4b0;
  local_70 = DAT_101dbd4b0;
  local_98 = FUN_1002d2a34;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x1b6,&local_98);
  FUN_1001b05dc(plVar1,param_1[0x1d16]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_USER_CONFIRM_DEFAULT",0);
  FUN_100185730(plVar1,uVar26);
  FUN_100185e1c(0xc1200000,plVar1);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CONF_CAPTION",0);
  uVar27 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CONF_MESSAGE",0);
  FUN_1001afd98(plVar1,uVar26,uVar27,&DAT_101d91650,0,1,0,0,0,1);
  local_70 = uVar21;
  local_98 = FUN_1002d2a34;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x554,&local_98);
  local_70 = uVar22;
  local_98 = FUN_1002d2a34;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x554,&local_98);
  FUN_1001b05dc(plVar2,param_1[0x1d16]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_PASS_DEFAULT",0);
  FUN_100185730(plVar2,uVar26);
  FUN_100185e1c(0xc1200000,plVar2);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_CAPTION",0);
  uVar27 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_MESSAGE",0);
  FUN_1001afd98(plVar2,uVar26,uVar27,&DAT_101d91650,1,0,0,0,0,0);
  local_70 = uVar21;
  local_98 = FUN_1002d2a34;
  local_88 = 0;
  local_80 = 0;
  local_78 = 1;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x8f2,&local_98);
  local_70 = uVar22;
  local_98 = FUN_1002d2a34;
  local_88 = 0;
  local_80 = 0;
  local_78 = 1;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x8f2,&local_98);
  FUN_1001b05dc(plVar3,param_1[0x1d16]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_PASS_CONFIRM_DEFAULT",0);
  FUN_100185730(plVar3,uVar26);
  FUN_100185e1c(0xc1200000,plVar3);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_CONF_CAPTION",0);
  uVar27 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_CONF_MESSAGE",0);
  FUN_1001afd98(plVar3,uVar26,uVar27,&DAT_101d91650,1,0,0,0,0,0);
  local_70 = uVar21;
  local_98 = FUN_1002d2a34;
  local_88 = 0;
  local_80 = 0;
  local_78 = 1;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0xc90,&local_98);
  local_70 = uVar22;
  local_98 = FUN_1002d2a34;
  local_88 = 0;
  local_80 = 0;
  local_78 = 1;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0xc90,&local_98);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_SHARE_EMAIL",0);
  FUN_1002d2a40(plVar4,uVar26);
  FUN_1002d2aa0(plVar4,param_1[0x1d16]);
  local_70 = uVar20;
  local_98 = FUN_1002d2b00;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x102e,&local_98);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_I_AGREE",0);
  FUN_1002d2a40(plVar5,uVar26);
  FUN_1002d2b2c(plVar5,plVar11);
  FUN_1002d2aa0(plVar5,param_1[0x1d16]);
  local_70 = uVar20;
  local_98 = FUN_1002d2c1c;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x1323,&local_98);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_RECEIVE_EMAIL",0);
  FUN_1002d2a40(plVar6,uVar26);
  FUN_1002d2aa0(plVar6,param_1[0x1d16]);
  local_70 = uVar20;
  local_98 = FUN_1002d2c48;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x1618,&local_98);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_SUBMIT",0);
  FUN_1002ecce4(plVar7,uVar26);
  FUN_1002ebee0(0x42900000,0x40c00000,plVar7);
  local_70 = uVar20;
  local_98 = thunk_FUN_1002d3930;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x190d,&local_98);
  FUN_100530068(plVar7,0);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  uVar19 = *(uint *)((long)param_1 + 0xd32c);
  if ((uVar19 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xd32c) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x6600;
    FUN_1000200a0(plVar8);
  }
  FUN_100651038(plVar9,param_1[0x1d15]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_PRIVACY",0);
  FUN_1006513c0(plVar9,uVar26);
  FUN_1006515e0(plVar9,1);
  FUN_100651764(0xbe19999a,plVar9);
  uVar19 = *(uint *)((long)param_1 + 0xd514);
  if ((uVar19 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xd514) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar9);
  }
  if ((*(float *)(param_1 + 0x1ac1) != 1.5) || (*(float *)((long)param_1 + 0xd60c) != 1.5)) {
    lVar30 = NEON_fmov(0x3fc00000,4);
    param_1[0x1ac1] = lVar30;
    FUN_1000200a0(plVar10);
  }
  *(uint *)((long)param_1 + 0xd644) = *(uint *)((long)param_1 + 0xd644) & 0xfffffffb;
  uVar26 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar12,uVar26);
  plVar28 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar28 + 0x68))(plVar28,plVar15,0,0x12);
  (**(code **)(*plVar28 + 0x68))(plVar28,plVar16,0,0x12);
  plVar29 = (long *)FUN_10064e5a0(plVar12);
  (**(code **)(*plVar29 + 0x80))(plVar29,plVar28,1);
  plVar28 = (long *)FUN_10064e5a0(plVar12);
  (**(code **)(*plVar28 + 0x58))(plVar28,plVar14);
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x1c82) = *(byte *)(param_1 + 0x1c82) | 1;
  FUN_100652cac(plVar14,PTR_s_build___Chests_tga_1018549e0,"chest_opulent_closed");
  FUN_100651038(plVar15,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar16,PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_CHESTS_AVAILABLE_LABEL",0);
  thunk_FUN_1004e439c(&local_98,uVar26);
  FUN_1004e313c(auStack_a8);
  FUN_1004e38ac(auStack_a8,"%d");
  FUN_1004e3120(auStack_b8,"[NUM_CHESTS]");
  FUN_1004e3bc4(&local_98,0,auStack_b8,auStack_a8);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  FUN_1006513c0(plVar15,&local_98);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_CHESTS_REGISTER_PLURAL_LABEL",0);
  FUN_1006513c0(plVar16,uVar26);
  FUN_1002d2c78(param_1);
  FUN_100651594(plVar17,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a170);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_90 != (long *)0x0) {
    operator_delete__(local_90);
  }
  return param_1;
}




void FUN_1002d2a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002d2a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_1002d2a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002d3cf8(param_1,param_4,param_5);
  return;
}




void FUN_1002d2a40(undefined1 param_1 [16],float param_2,long param_3)

{
  float local_28;
  float fStack_24;
  
  FUN_1006513c0(param_3 + 0x1670);
  FUN_1006511d0(param_3 + 0x1670);
  local_28 = param_2 * 1.1;
  if (0.0 < local_28) {
    fStack_24 = local_28;
    FUN_10064e48c(param_3 + 0xb8,&local_28);
  }
  return;
}




void FUN_1002d2aa0(undefined1 param_1 [16],float param_2,long param_3)

{
  float local_28;
  float fStack_24;
  
  FUN_100651038(param_3 + 0x1670);
  FUN_1006511d0(param_3 + 0x1670);
  local_28 = param_2 * 1.1;
  if (0.0 < local_28) {
    fStack_24 = local_28;
    FUN_10064e48c(param_3 + 0xb8,&local_28);
  }
  return;
}




void FUN_1002d2b00(long param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x9908);
  *(byte *)(param_1 + 0x9908) = bVar2 ^ 1;
  uVar1 = *(uint *)(param_1 + 0x8aec);
  *(uint *)(param_1 + 0x8aec) = uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)(bVar2 == 0) << 2;
  FUN_1002d3a14();
  return;
}




void FUN_1002d2b2c(undefined1 param_1 [16],float param_2,long *param_3,long *param_4)

{
  long *plVar1;
  float local_38;
  float fStack_34;
  
  (**(code **)(*param_3 + 0x78))(param_3,param_4,1);
  *(uint *)((long)param_3 + 0x16f4) = *(uint *)((long)param_3 + 0x16f4) & 0xfffffffb;
  plVar1 = (long *)FUN_10064e5a0(param_3);
  (**(code **)(*plVar1 + 0x50))();
  plVar1 = (long *)FUN_10064e5a0(param_3);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_3 + 0x17,0,2);
  plVar1 = (long *)FUN_10064e5a0(param_3);
  (**(code **)(*plVar1 + 0x70))(plVar1,0xe);
  plVar1 = (long *)FUN_10064e5a0(param_3);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_4,1,10);
  (**(code **)(*param_4 + 0x48))(param_4);
  local_38 = param_2 * 1.1;
  if (0.0 < local_38) {
    fStack_34 = local_38;
    FUN_10064e48c(param_3 + 0x17,&local_38);
  }
  return;
}




void FUN_1002d2c1c(long param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0xb0b0);
  *(byte *)(param_1 + 0xb0b0) = bVar2 ^ 1;
  uVar1 = *(uint *)(param_1 + 0xa294);
  *(uint *)(param_1 + 0xa294) = uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)(bVar2 == 0) << 2;
  FUN_1002d3a14();
  return;
}




void FUN_1002d2c48(long param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0xc858);
  *(byte *)(param_1 + 0xc858) = bVar2 ^ 1;
  uVar1 = *(uint *)(param_1 + 0xba3c);
  *(uint *)(param_1 + 0xba3c) = uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)(bVar2 == 0) << 2;
  return;
}




void thunk_FUN_1002d3930(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvStack_60;
  undefined8 uStack_58;
  long lStack_50;
  void *pvStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar1 = FUN_1002d3a14();
  if (iVar1 != 0) {
    pvStack_48 = (void *)0x0;
    uStack_40 = 0;
    lStack_38 = 0;
    pvStack_60 = (void *)0x0;
    uStack_58 = 0;
    lStack_50 = 0;
    uVar2 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0xf88);
    FUN_1004e357c(uVar2,&pvStack_48);
    uVar2 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x4af8) & 1) * 0x130 + 0x4968);
    FUN_1004e357c(uVar2,&pvStack_60);
    (**(code **)**(undefined8 **)(param_1 + 0xb8))
              (*(undefined8 **)(param_1 + 0xb8),&pvStack_48,&pvStack_60,
               *(undefined1 *)(param_1 + 0xc858));
    FUN_1002d3494(param_1,1);
    if (lStack_50 < 0) {
      operator_delete(pvStack_60);
    }
    if (lStack_38 < 0) {
      operator_delete(pvStack_48);
    }
  }
  return;
}




void FUN_1002d2c78(void *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined2 local_94;
  undefined2 local_92;
  code *local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar14 = 0;
  plVar13 = (long *)((long)param_1 + 0xe150);
  plVar1 = (long *)((long)param_1 + 0xdef0);
  plVar2 = (long *)((long)param_1 + 0xdc90);
  do {
    FUN_100651038((long)plVar2 + lVar14,*(undefined8 *)((long)param_1 + 0xe8b0));
    lVar14 = lVar14 + 0x130;
  } while (lVar14 != 0x5f0);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_I_AGREE",0);
  uVar11 = FUN_1004e3120(&local_90,"[TERMS_OF_SERVICE]");
  iVar6 = FUN_1002d3d70(uVar11,uVar10,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  iVar7 = FUN_1004d2524("[TERMS_OF_SERVICE]");
  uVar11 = FUN_1004e3120(&local_90,"[PRIVACY_POLICY]");
  iVar8 = FUN_1002d3d70(uVar11,uVar10,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  iVar7 = iVar7 + iVar6;
  iVar9 = FUN_1004d2524("[PRIVACY_POLICY]");
  iVar9 = iVar9 + iVar8;
  iVar3 = iVar6;
  if (iVar8 <= iVar6) {
    iVar3 = iVar8;
  }
  FUN_1004e4154(&local_90,uVar10,0,iVar3);
  (**(code **)(*plVar2 + 0x138))(plVar2,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  *(uint *)((long)param_1 + 0xde44) = *(uint *)((long)param_1 + 0xde44) | 0x10;
  local_90._0_4_ = 0xfffac832;
  FUN_100651460((long)param_1 + 0xddc0,&local_90);
  *(uint *)((long)param_1 + 0xe0a4) = *(uint *)((long)param_1 + 0xe0a4) | 0x10;
  local_90 = (code *)CONCAT44(local_90._4_4_,0xfffac832);
  FUN_100651460((long)param_1 + 0xe020,&local_90);
  if (iVar6 < iVar8) {
    FUN_1004e4154(&local_90,uVar10,iVar7,iVar8 - iVar7);
    (**(code **)(*plVar1 + 0x138))(plVar1,&local_90);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    iVar6 = FUN_1004e3634(uVar10);
    FUN_1004e4154(&local_90,uVar10,iVar9,iVar6 - iVar9);
    (**(code **)(*plVar13 + 0x138))(plVar13,&local_90);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    lVar14 = 1;
    lVar15 = 3;
  }
  else {
    FUN_1004e4154(&local_90,uVar10,iVar9,iVar6 - iVar9);
    (**(code **)(*plVar1 + 0x138))(plVar1,&local_90);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    iVar6 = FUN_1004e3634(uVar10);
    FUN_1004e4154(&local_90,uVar10,iVar7,iVar6 - iVar7);
    (**(code **)(*plVar13 + 0x138))(plVar13,&local_90);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    lVar14 = 3;
    lVar15 = 1;
  }
  plVar13 = (long *)((long)param_1 + lVar14 * 0x130 + 0xdc90);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_TERMS_OF_SERVICE",0);
  (**(code **)(*plVar13 + 0x138))(plVar13,uVar10);
  uVar4 = DAT_101dbd460;
  local_68 = DAT_101dbd460;
  local_90 = FUN_1002d3fa0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar13 + 1,&local_90);
  uVar5 = DAT_101dbd48c;
  local_68 = DAT_101dbd48c;
  local_90 = FUN_1002d3fa0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar13 + 1,&local_90);
  plVar13 = (long *)((long)param_1 + lVar15 * 0x130 + 0xdc90);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_PRIVACY_POLICY",0);
  (**(code **)(*plVar13 + 0x138))(plVar13,uVar10);
  local_68 = uVar4;
  local_90 = FUN_1002d3fb0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar13 + 1,&local_90);
  local_68 = uVar5;
  local_90 = FUN_1002d3fb0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar13 + 1,&local_90);
  lVar14 = (long)param_1 + 0xdd60;
  lVar15 = 4;
  do {
    uVar10 = FUN_100655b6c(lVar14);
    uVar12 = FUN_1004e3624();
    if ((uVar12 & 1) == 0) {
      iVar6 = FUN_1004e3634(uVar10);
      uVar11 = FUN_1004e363c(uVar10,iVar6 + -1);
      iVar6 = FUN_1004e39ec(&DAT_101d91640,0,uVar11,0);
      if (iVar6 != 0) {
        iVar6 = FUN_1004e3634(uVar10);
        local_94 = FUN_1004e363c(uVar10,iVar6 + -1);
        local_92 = 0;
        FUN_1004e33d8(&local_90,&local_94);
        uVar10 = FUN_100655b6c(lVar14 + 0x130);
        FUN_1004e372c(&local_90,uVar10);
        (**(code **)(*(long *)(lVar14 + 0x60) + 0x138))((long *)(lVar14 + 0x60),&local_90);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
      }
    }
    lVar14 = lVar14 + 0x130;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar14 = (long)param_1 + 0xddc0;
  lVar15 = 4;
  do {
    FUN_10064e72c(0,lVar14,3,lVar14 + -0x130,1);
    lVar14 = lVar14 + 0x130;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  FUN_1006557ec((long)param_1 + 0xdb38);
  FUN_10064e5b8((long)param_1 + 0xdb38,&DAT_101dbd510);
  return;
}




long * thunk_FUN_1002d1bb8(long *param_1)

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
  undefined **ppuVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  undefined1 auStack_b8 [8];
  void *pvStack_b0;
  undefined1 auStack_a8 [8];
  void *pvStack_a0;
  code *pcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar24 = (undefined8 *)FUN_10064e20c();
  puVar24[0x17] = 0;
  *puVar24 = &PTR_thunk_FUN_1002d422c_101488278;
  puVar24 = puVar24 + 0x18;
  thunk_FUN_100650e64(puVar24);
  plVar28 = param_1 + 0x3e;
  thunk_FUN_1002eca3c(plVar28,0);
  FUN_10064e264();
  FUN_10064e264();
  plVar29 = param_1 + 0x1b5;
  thunk_FUN_100184f78(plVar29);
  plVar1 = param_1 + 0x553;
  thunk_FUN_100184f78(plVar1);
  plVar2 = param_1 + 0x8f1;
  thunk_FUN_100184f78();
  plVar3 = param_1 + 0xc8f;
  thunk_FUN_100184f78();
  plVar4 = param_1 + 0x102d;
  FUN_1002d3fc0();
  plVar5 = param_1 + 0x1322;
  FUN_1002d3fc0();
  plVar6 = param_1 + 0x1617;
  FUN_1002d3fc0();
  plVar7 = param_1 + 0x190c;
  thunk_FUN_1002eca3c(plVar7,0);
  plVar8 = param_1 + 0x1a55;
  thunk_FUN_100650e64();
  FUN_10064e264();
  plVar9 = param_1 + 0x1a92;
  thunk_FUN_100650e64();
  plVar10 = param_1 + 0x1ab8;
  thunk_FUN_1001c0c34(plVar10,0);
  plVar11 = param_1 + 0x1b67;
  thunk_FUN_100655644(plVar11);
  lVar30 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar30 + 0xdc90);
    lVar30 = lVar30 + 0x130;
  } while (lVar30 != 0x5f0);
  plVar12 = param_1 + 0x1c50;
  FUN_10064e264();
  plVar13 = param_1 + 0x1c67;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0x1c85;
  thunk_FUN_100652c08();
  plVar15 = param_1 + 0x1ca3;
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0x1cc9;
  thunk_FUN_100650e64();
  plVar17 = param_1 + 0x1cef;
  thunk_FUN_100650e64(plVar17);
  param_1[0x1d16] = 0;
  param_1[0x1d15] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar24,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar28,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x187,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar29,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19e,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  lVar30 = 0;
  do {
    FUN_100655930(plVar11,(long)param_1 + lVar30 + 0xdc90,1);
    lVar30 = lVar30 + 0x130;
  } while (lVar30 != 0x5f0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1a7b,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_100642bd8(plVar12,plVar13,1);
  FUN_100642bd8(plVar12,plVar14,1);
  FUN_100642bd8(plVar12,plVar15,1);
  FUN_100642bd8(plVar12,plVar16,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar17,1);
  iVar23 = FUN_100126c88();
  ppuVar18 = &PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8;
  if (iVar23 == 0) {
    ppuVar18 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  param_1[0x1d15] = (long)*ppuVar18;
  ppuVar18 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar23 == 0) {
    ppuVar18 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  param_1[0x1d16] = (long)*ppuVar18;
  plVar25 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(param_1,plVar25);
  FUN_10064a8b0(plVar25,0x78,0x14,0x78,0x14);
  (**(code **)(*plVar25 + 0x60))(plVar25,puVar24,10);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar28,9);
  (**(code **)(*plVar25 + 0x78))(plVar25,0,0);
  (**(code **)(*plVar25 + 0x60))(plVar25,param_1 + 0x187,10);
  (**(code **)(*plVar25 + 0x78))(plVar25,0,0);
  (**(code **)(*plVar25 + 0x60))(plVar25,param_1 + 0x19e,10);
  (**(code **)(*plVar25 + 0x78))(plVar25,0,0);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar4,10);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar5,10);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar6,10);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar7,10);
  (**(code **)(*plVar25 + 0x60))(plVar25,plVar8,9);
  (**(code **)(*plVar25 + 0x60))(plVar25,param_1 + 0x1a7b,0xc);
  FUN_100651038(puVar24,param_1[0x1d16]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_LOGIN_PROMPT",0);
  FUN_1006513c0(puVar24,uVar26);
  FUN_1006515e0(puVar24,1);
  FUN_100651764(0xbda3d70a,puVar24);
  FUN_1002ecc7c(plVar28,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_WHY_COLLECT",0);
  FUN_1002ecce4(plVar28,uVar26);
  FUN_1002ebee0(0x42000000,0x40000000,plVar28);
  uVar20 = DAT_101d91884;
  uStack_70 = DAT_101d91884;
  pcStack_98 = FUN_1002d2a24;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x3f,&pcStack_98);
  FUN_1001b05dc(plVar29,param_1[0x1d16]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_USER_DEFAULT",0);
  FUN_100185730(plVar29,uVar26);
  FUN_100185e1c(0xc1200000,plVar29);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CAPTION",0);
  uVar27 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_MESSAGE",0);
  FUN_1001afd98(plVar29,uVar26,uVar27,&DAT_101d91650,0,1,0,0,0,1);
  uVar21 = DAT_101dbd4ac;
  uStack_70 = DAT_101dbd4ac;
  pcStack_98 = FUN_1002d2a34;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1b6,&pcStack_98);
  uVar22 = DAT_101dbd4b0;
  uStack_70 = DAT_101dbd4b0;
  pcStack_98 = FUN_1002d2a34;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1b6,&pcStack_98);
  FUN_1001b05dc(plVar1,param_1[0x1d16]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_USER_CONFIRM_DEFAULT",0);
  FUN_100185730(plVar1,uVar26);
  FUN_100185e1c(0xc1200000,plVar1);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CONF_CAPTION",0);
  uVar27 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CONF_MESSAGE",0);
  FUN_1001afd98(plVar1,uVar26,uVar27,&DAT_101d91650,0,1,0,0,0,1);
  uStack_70 = uVar21;
  pcStack_98 = FUN_1002d2a34;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x554,&pcStack_98);
  uStack_70 = uVar22;
  pcStack_98 = FUN_1002d2a34;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x554,&pcStack_98);
  FUN_1001b05dc(plVar2,param_1[0x1d16]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_PASS_DEFAULT",0);
  FUN_100185730(plVar2,uVar26);
  FUN_100185e1c(0xc1200000,plVar2);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_CAPTION",0);
  uVar27 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_MESSAGE",0);
  FUN_1001afd98(plVar2,uVar26,uVar27,&DAT_101d91650,1,0,0,0,0,0);
  uStack_70 = uVar21;
  pcStack_98 = FUN_1002d2a34;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 1;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x8f2,&pcStack_98);
  uStack_70 = uVar22;
  pcStack_98 = FUN_1002d2a34;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 1;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x8f2,&pcStack_98);
  FUN_1001b05dc(plVar3,param_1[0x1d16]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_PASS_CONFIRM_DEFAULT",0);
  FUN_100185730(plVar3,uVar26);
  FUN_100185e1c(0xc1200000,plVar3);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_CONF_CAPTION",0);
  uVar27 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_CONF_MESSAGE",0);
  FUN_1001afd98(plVar3,uVar26,uVar27,&DAT_101d91650,1,0,0,0,0,0);
  uStack_70 = uVar21;
  pcStack_98 = FUN_1002d2a34;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 1;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc90,&pcStack_98);
  uStack_70 = uVar22;
  pcStack_98 = FUN_1002d2a34;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 1;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc90,&pcStack_98);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_SHARE_EMAIL",0);
  FUN_1002d2a40(plVar4,uVar26);
  FUN_1002d2aa0(plVar4,param_1[0x1d16]);
  uStack_70 = uVar20;
  pcStack_98 = FUN_1002d2b00;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x102e,&pcStack_98);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_I_AGREE",0);
  FUN_1002d2a40(plVar5,uVar26);
  FUN_1002d2b2c(plVar5,plVar11);
  FUN_1002d2aa0(plVar5,param_1[0x1d16]);
  uStack_70 = uVar20;
  pcStack_98 = FUN_1002d2c1c;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1323,&pcStack_98);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_RECEIVE_EMAIL",0);
  FUN_1002d2a40(plVar6,uVar26);
  FUN_1002d2aa0(plVar6,param_1[0x1d16]);
  uStack_70 = uVar20;
  pcStack_98 = FUN_1002d2c48;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1618,&pcStack_98);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_REG_SUBMIT",0);
  FUN_1002ecce4(plVar7,uVar26);
  FUN_1002ebee0(0x42900000,0x40c00000,plVar7);
  uStack_70 = uVar20;
  pcStack_98 = thunk_FUN_1002d3930;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x190d,&pcStack_98);
  FUN_100530068(plVar7,0);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  uVar19 = *(uint *)((long)param_1 + 0xd32c);
  if ((uVar19 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xd32c) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x6600;
    FUN_1000200a0(plVar8);
  }
  FUN_100651038(plVar9,param_1[0x1d15]);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_SIGNUP_PRIVACY",0);
  FUN_1006513c0(plVar9,uVar26);
  FUN_1006515e0(plVar9,1);
  FUN_100651764(0xbe19999a,plVar9);
  uVar19 = *(uint *)((long)param_1 + 0xd514);
  if ((uVar19 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xd514) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar9);
  }
  if ((*(float *)(param_1 + 0x1ac1) != 1.5) || (*(float *)((long)param_1 + 0xd60c) != 1.5)) {
    lVar30 = NEON_fmov(0x3fc00000,4);
    param_1[0x1ac1] = lVar30;
    FUN_1000200a0(plVar10);
  }
  *(uint *)((long)param_1 + 0xd644) = *(uint *)((long)param_1 + 0xd644) & 0xfffffffb;
  uVar26 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar12,uVar26);
  plVar28 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar28 + 0x68))(plVar28,plVar15,0,0x12);
  (**(code **)(*plVar28 + 0x68))(plVar28,plVar16,0,0x12);
  plVar29 = (long *)FUN_10064e5a0(plVar12);
  (**(code **)(*plVar29 + 0x80))(plVar29,plVar28,1);
  plVar28 = (long *)FUN_10064e5a0(plVar12);
  (**(code **)(*plVar28 + 0x58))(plVar28,plVar14);
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x1c82) = *(byte *)(param_1 + 0x1c82) | 1;
  FUN_100652cac(plVar14,PTR_s_build___Chests_tga_1018549e0,"chest_opulent_closed");
  FUN_100651038(plVar15,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar16,PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_CHESTS_AVAILABLE_LABEL",0);
  thunk_FUN_1004e439c(&pcStack_98,uVar26);
  FUN_1004e313c(auStack_a8);
  FUN_1004e38ac(auStack_a8,"%d");
  FUN_1004e3120(auStack_b8,"[NUM_CHESTS]");
  FUN_1004e3bc4(&pcStack_98,0,auStack_b8,auStack_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete__(pvStack_b0);
  }
  FUN_1006513c0(plVar15,&pcStack_98);
  uVar26 = FUN_1004e0150("MAIN_PROFILE_CHESTS_REGISTER_PLURAL_LABEL",0);
  FUN_1006513c0(plVar16,uVar26);
  FUN_1002d2c78(param_1);
  FUN_100651594(plVar17,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a170);
  if (pvStack_a0 != (void *)0x0) {
    operator_delete__(pvStack_a0);
  }
  if (plStack_90 != (long *)0x0) {
    operator_delete__(plStack_90);
  }
  return param_1;
}




void FUN_1002d3108(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  
  plVar4 = param_3 + 0x1a7b;
  FUN_10064e4dc(plVar4,0);
  local_90._0_2_ = 0x77;
  FUN_10064e5b8(plVar4,&local_90);
  FUN_10064e32c(param_3);
  plVar5 = param_3 + 0x1a92;
  fVar6 = (float)FUN_10064e3cc(plVar4);
  FUN_100651708(fVar6 * 0.5,plVar5,1);
  FUN_100651184(plVar5);
  FUN_10064e4dc(plVar4,(ulong)(uint)(int)param_2 << 0x20);
  local_90._0_2_ = 0;
  FUN_10064e5b8(plVar4,&local_90);
  local_88 = 0;
  plVar1 = param_3 + 0x1b5;
  FUN_1006569f0(plVar1 + ((ulong)*(byte *)(param_3 + 0x223) & 1) * 0x26 + 0x3c,(long)&local_88 + 4,
                &local_88);
  plVar2 = param_3 + 0x187;
  FUN_10064e4dc(plVar2,(ulong)(uint)(int)((float)local_88 * 1.4) << 0x20);
  local_90._0_2_ = 0x37;
  FUN_10064e5b8(plVar2,&local_90);
  plVar3 = param_3 + 0x19e;
  FUN_10064e4dc(plVar3,(ulong)(uint)(int)((float)local_88 * 1.4) << 0x20);
  local_90 = CONCAT22(local_90._2_2_,0x37);
  FUN_10064e5b8(plVar3,&local_90);
  FUN_10064e32c(param_3);
  fVar6 = (float)FUN_10064e3cc(plVar2);
  fVar9 = 0.48;
  fVar6 = fVar6 * 0.48;
  FUN_10064e3cc(plVar2);
  fVar9 = fVar9 * 0.9;
  FUN_1001853c0(fVar6,fVar9,plVar1);
  FUN_1001853c0(fVar6,fVar9,param_3 + 0x8f1);
  FUN_1001853c0(fVar6,fVar9,param_3 + 0x553);
  FUN_1001853c0(fVar6,fVar9,param_3 + 0xc8f);
  FUN_10064e5ec(0,0,plVar1,7,plVar2,7);
  FUN_10064e5ec(0,0,param_3 + 0x8f1,5,plVar2,5);
  FUN_10064e5ec(0,0,param_3 + 0x553,7,plVar3,7);
  uVar7 = 0;
  FUN_10064e5ec(0,param_3 + 0xc8f,5,plVar3,5);
  plVar1 = param_3 + 0x1c50;
  fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_1006531b0(param_3 + 0x1c85);
  FUN_10064e47c(fVar6 * 0.5,plVar1);
  FUN_10064e32c(plVar1);
  local_90 = FUN_10064e3cc(plVar1);
  uStack_8c = uVar7;
  FUN_10064e48c(param_3 + 0x1c67,&local_90);
  FUN_10064e5ec(0,0,param_3 + 0x1c67,8,plVar1,8);
  uVar8 = 0;
  FUN_10064e5ec(0,0,plVar1,2,param_3,2);
  plVar2 = param_3 + 0x1cef;
  FUN_100651700(plVar2,3);
  FUN_10064e3cc(plVar1);
  FUN_100651708(plVar2,1);
  FUN_10064e3cc(plVar1);
  FUN_10065184c(uVar8,0,0x3f800000,plVar2);
  FUN_10064e5ec(0,0,plVar2,8,plVar1,8);
  FUN_10064e5ec(0,0,plVar5,3,plVar4,3);
  FUN_10064e5ec(0,0,param_3 + 0x1ab8,8,param_3 + 0x190c,8);
  return;
}




void FUN_1002d3494(long param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  puVar1 = (uint *)(param_1 + 0xc8e4);
  uVar4 = 4;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0xd644) = *(uint *)(param_1 + 0xd644) & 0xfffffffb | uVar4;
  lVar2 = param_1 + 0xc860;
  FUN_100530068(lVar2,param_2 ^ 1);
  if (((param_2 ^ 1) & 1) == 0) {
    FUN_1001c0e10();
    FUN_1002ecce4(lVar2,&DAT_101d91650);
    uVar4 = *puVar1;
    if ((uVar4 & 0x7f80) == 0x6600) {
      return;
    }
    uVar4 = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
  }
  else {
    FUN_1001c102c(param_1 + 0xd5c0);
    uVar3 = FUN_1004e0150("MAIN_PROFILE_REG_SUBMIT",0);
    FUN_1002ecce4(lVar2,uVar3);
    if ((~*puVar1 & 0x7f80) == 0) {
      return;
    }
    uVar4 = *puVar1 | 0x7f80;
  }
  *puVar1 = uVar4;
  FUN_1000200a0(lVar2);
  return;
}




void FUN_1002d3584(long param_1)

{
  FUN_1006513c0(param_1 + 0xd2a8);
  return;
}




void FUN_1002d3590(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = 4;
  }
  *(uint *)(param_1 + 0x274) = *(uint *)(param_1 + 0x274) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x81ec) = *(uint *)(param_1 + 0x81ec) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0xb13c) = *(uint *)(param_1 + 0xb13c) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0xd45c) = *(uint *)(param_1 + 0xd45c) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0xd514) = *(uint *)(param_1 + 0xd514) & 0xfffffffb | uVar2;
  iVar1 = FUN_100126c88();
  if (iVar1 == 0) {
    if (param_2 == 0) goto LAB_1002d36ac;
  }
  else {
    if (param_2 == 0) {
      *(undefined **)(param_1 + 0xe8b0) = PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
      goto LAB_1002d36ac;
    }
    *(undefined **)(param_1 + 0xe8b0) = PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  if (*(char *)(param_1 + 0xc858) == '\0') {
    *(char *)(param_1 + 0xc858) = '\x01';
    *(uint *)(param_1 + 0xba3c) = *(uint *)(param_1 + 0xba3c) | 4;
  }
  if (*(char *)(param_1 + 0x9908) == '\0') {
    *(char *)(param_1 + 0x9908) = '\x01';
    *(uint *)(param_1 + 0x8aec) = *(uint *)(param_1 + 0x8aec) | 4;
  }
LAB_1002d36ac:
  FUN_100651038(param_1 + 0xc0,*(undefined8 *)(param_1 + 0xe8b0));
  FUN_1001b05dc(param_1 + 0xda8,*(undefined8 *)(param_1 + 0xe8b0));
  FUN_1001b05dc(param_1 + 0x2a98,*(undefined8 *)(param_1 + 0xe8b0));
  FUN_1001b05dc(param_1 + 0x4788,*(undefined8 *)(param_1 + 0xe8b0));
  FUN_1001b05dc(param_1 + 0x6478,*(undefined8 *)(param_1 + 0xe8b0));
  FUN_1002d2aa0(param_1 + 0x8168,*(undefined8 *)(param_1 + 0xe8b0));
  FUN_1002d2aa0(param_1 + 0x9910,*(undefined8 *)(param_1 + 0xe8b0));
  FUN_1002d2aa0(param_1 + 0xb0b8,*(undefined8 *)(param_1 + 0xe8b0));
  lVar4 = 0;
  lVar3 = param_1 + 0xdc90;
  do {
    FUN_100651038(lVar3,*(undefined8 *)(param_1 + 0xe8b0));
    if (lVar4 != 0) {
      FUN_10064e72c(0,lVar3,3,param_1 + (ulong)((int)lVar4 - 1) * 0x130 + 0xdc90,1);
    }
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x130;
  } while (lVar4 != 5);
  FUN_1006557ec(param_1 + 0xdb38);
  return;
}




void FUN_1002d3788(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = param_1 + 0x1cef;
  FUN_1006513c0(plVar1);
  if ((*(uint *)((long)param_1 + 0xe7fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xe7fc) = *(uint *)((long)param_1 + 0xe7fc) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  uVar3 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3f000000,uVar3);
  FUN_10063f130(uVar3,FUN_10001f160);
  FUN_10001f55c();
  FUN_10063f0e8(0x40800000);
  uVar4 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3f000000,uVar4);
  FUN_10063f130(uVar4,FUN_10001f218);
  FUN_100642324(plVar1);
  FUN_100642b7c(plVar1,uVar3);
  plVar1 = param_1 + 0x1c50;
  uVar2 = *(uint *)((long)param_1 + 0xe304);
  if ((~uVar2 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xe304) = uVar2 | 0x7f80;
    FUN_1000200a0(plVar1);
  }
  uVar3 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3f000000,uVar3);
  FUN_10063f130(uVar3,FUN_10001f160);
  FUN_10001f55c();
  FUN_10063f0e8(0x40800000);
  uVar4 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3f000000,uVar4);
  FUN_10063f130(uVar4,FUN_10001f218);
  FUN_100642324(plVar1);
  FUN_100642b7c(plVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001002d392c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002d3930(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  iVar1 = FUN_1002d3a14();
  if (iVar1 != 0) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_38 = 0;
    local_60 = (void *)0x0;
    uStack_58 = 0;
    local_50 = 0;
    uVar2 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0xf88);
    FUN_1004e357c(uVar2,&local_48);
    uVar2 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x4af8) & 1) * 0x130 + 0x4968);
    FUN_1004e357c(uVar2,&local_60);
    (**(code **)**(undefined8 **)(param_1 + 0xb8))
              (*(undefined8 **)(param_1 + 0xb8),&local_48,&local_60,
               *(undefined1 *)(param_1 + 0xc858));
    FUN_1002d3494(param_1,1);
    if (local_50 < 0) {
      operator_delete(local_60);
    }
    if (local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return;
}




byte FUN_1002d3a14(long param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  pbVar2 = (byte *)(param_1 + 0x1118);
  bVar4 = FUN_1002d3e4c();
  if ((bVar4 & 1) == 0) {
    lVar1 = param_1 + 0xda8;
    uVar7 = FUN_100655b6c(lVar1 + ((ulong)*pbVar2 & 1) * 0x130 + 0x1e0);
    lVar3 = param_1 + 0x2a98;
    uVar8 = FUN_100655b6c(lVar3 + ((ulong)*(byte *)(param_1 + 0x2e08) & 1) * 0x130 + 0x1e0);
    iVar6 = FUN_1004e36c0(uVar7,uVar8);
    if ((iVar6 != 0) && (uVar9 = FUN_100185774(lVar3), (uVar9 & 1) == 0)) {
      FUN_100185630(lVar3,1);
      uVar7 = FUN_1004e0150("MAIN_PROFILE_REG_STATUS_FAIL_EMAIL_MISMATCH",0);
      FUN_100185de8(lVar3,uVar7);
    }
    FUN_100655b6c(lVar1 + ((ulong)*pbVar2 & 1) * 0x130 + 0x1e0);
    iVar6 = FUN_1004e3624();
    if (iVar6 != 0) {
      FUN_100185630(lVar1,1);
      uVar7 = FUN_1004e0150("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_100185de8(lVar1,uVar7);
    }
    FUN_100655b6c(lVar3 + ((ulong)*(byte *)(param_1 + 0x2e08) & 1) * 0x130 + 0x1e0);
    iVar6 = FUN_1004e3624();
    if (iVar6 != 0) {
      FUN_100185630(lVar3,1);
      uVar7 = FUN_1004e0150("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_100185de8(lVar3,uVar7);
    }
  }
  bVar5 = FUN_1002d3ef4(param_1);
  if ((bVar5 & 1) == 0) {
    uVar7 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x4af8) & 1) * 0x130 + 0x4968);
    lVar1 = param_1 + 0x6478;
    uVar8 = FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x67e8) & 1) * 0x130 + 0x1e0);
    iVar6 = FUN_1004e36c0(uVar7,uVar8);
    if ((iVar6 != 0) && (uVar9 = FUN_100185774(lVar1), (uVar9 & 1) == 0)) {
      FUN_100185630(lVar1,1);
      uVar7 = FUN_1004e0150("MAIN_PROFILE_REG_STATUS_FAIL_PASSWORD_MISMATCH",0);
      FUN_100185de8(lVar1,uVar7);
    }
    lVar3 = param_1 + 0xda8;
    FUN_100655b6c(lVar3 + ((ulong)*pbVar2 & 1) * 0x130 + 0x1e0);
    iVar6 = FUN_1004e3624();
    if (iVar6 != 0) {
      FUN_100185630(lVar3,1);
      uVar7 = FUN_1004e0150("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_100185de8(lVar3,uVar7);
    }
    FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x67e8) & 1) * 0x130 + 0x1e0);
    iVar6 = FUN_1004e3624();
    if (iVar6 != 0) {
      FUN_100185630(lVar1,1);
      uVar7 = FUN_1004e0150("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_100185de8(lVar1,uVar7);
    }
  }
  if (*(char *)(param_1 + 0x9908) == '\0') {
    bVar5 = 0;
  }
  else {
    bVar5 = *(char *)(param_1 + 0xb0b0) != '\0' & bVar4 & bVar5;
  }
  FUN_100530068(param_1 + 0xc860,bVar5);
  return bVar5;
}




void FUN_1002d3cf8(undefined8 param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  
  if (((param_3 & 1) != 0) &&
     (((uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4e4), (uVar1 & 1) != 0 ||
       (DAT_101dbd4e4 == DAT_101dbd450)) && (param_2[4] != 0)))) {
    FUN_1001b0734(param_2[4],1);
  }
  FUN_1002d3a14(param_1);
  return;
}




uint FUN_1002d3d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_1004e3634(param_2);
  iVar2 = FUN_1004e3634(param_3);
  if (iVar1 + 1 != iVar2) {
    uVar4 = 0;
    do {
      iVar1 = FUN_1004e3634(param_3);
      uVar5 = 0;
      if (iVar1 != 0) {
        do {
          iVar1 = FUN_1004e363c(param_2,uVar4 + uVar5);
          iVar2 = FUN_1004e363c(param_3,uVar5);
          if (iVar1 != iVar2) break;
          uVar5 = uVar5 + 1;
          uVar3 = FUN_1004e3634(param_3);
        } while (uVar5 < uVar3);
      }
      uVar3 = FUN_1004e3634(param_3);
      if (uVar5 == uVar3) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      iVar1 = FUN_1004e3634(param_2);
      iVar2 = FUN_1004e3634(param_3);
    } while (uVar4 < (iVar1 - iVar2) + 1U);
  }
  return 0xffffffff;
}




undefined8 FUN_1002d3e4c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100655b6c(param_1 + 0xda8 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0x1e0);
  uVar1 = FUN_1004e3624();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_100655b6c(param_1 + 0xda8 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0x1e0);
  uVar3 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2e08) & 1) * 0x130 + 0x2c78);
  uVar2 = FUN_1004e3654(uVar2,uVar3);
  return uVar2;
}




undefined8 FUN_1002d3ef4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100655b6c(param_1 + 0x4788 + ((ulong)*(byte *)(param_1 + 0x4af8) & 1) * 0x130 + 0x1e0);
  uVar1 = FUN_1004e3624();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_100655b6c(param_1 + 0x4788 + ((ulong)*(byte *)(param_1 + 0x4af8) & 1) * 0x130 + 0x1e0)
  ;
  uVar3 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x67e8) & 1) * 0x130 + 0x6658);
  uVar2 = FUN_1004e3654(uVar2,uVar3);
  return uVar2;
}




void FUN_1002d3fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002d3fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_1002d3fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002d3fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




long * FUN_1002d3fc0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_1014883c0;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100181304(puVar2,0);
  plVar1 = param_1 + 0x2ce;
  thunk_FUN_100650e64(plVar1);
  *(undefined1 *)(param_1 + 0x2f4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  uVar3 = thunk_FUN_10064dde8();
  FUN_10064e524(param_1,uVar3);
  plVar4 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar4 + 0x68))(plVar4,puVar2,0,2);
  plVar4 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar4 + 0x70))(plVar4,0xe);
  plVar4 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar4 + 0x68))(plVar4,plVar1,1,10);
  local_60 = (code *)CONCAT44(local_60._4_4_,0xffc0c0c0);
  FUN_1001816d4(0,0x42280000,0x42280000,puVar2,2,&DAT_101d91650,&local_60,&DAT_101dc1cb8,0);
  FUN_10064e47c(0x42a00000,0x42a00000,puVar2);
  FUN_100181c68(0x4280cccd,puVar2);
  FUN_100652cdc(param_1 + 0x120,"circle_button_x");
  *(uint *)((long)param_1 + 0x984) = *(uint *)((long)param_1 + 0x984) & 0xfffffffb;
  FUN_1001b495c(0xbf800000,puVar2);
  local_38 = DAT_101d91884;
  local_60 = FUN_1002d417c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_60);
  return param_1;
}




void FUN_1002d417c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100644c34(param_1,param_4,0);
  return;
}




void thunk_FUN_1002d422c(void)

{
  FUN_1002d422c();
  return;
}




void FUN_1002d418c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002d422c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002d41a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014883c0;
  thunk_FUN_100651068(param_1 + 0x2ce);
  FUN_10003bd40(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002d41e4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014883c0;
  thunk_FUN_100651068(param_1 + 0x2ce);
  FUN_10003bd40(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002d422c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1002d422c_101488278;
  thunk_FUN_100651068(param_1 + 0x1cef);
  thunk_FUN_100651068(param_1 + 0x1cc9);
  thunk_FUN_100651068(param_1 + 0x1ca3);
  param_1[0x1c85] = &PTR_FUN_1014a7108;
  param_1[0x1c9c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c9f);
  FUN_10064e2bc(param_1 + 0x1c85);
  param_1[0x1c67] = &PTR_FUN_1014a7108;
  param_1[0x1c7e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c81);
  FUN_10064e2bc(param_1 + 0x1c67);
  thunk_FUN_10064e2bc(param_1 + 0x1c50);
  lVar1 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1 + 0xe150);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x5f0);
  param_1[0x1b67] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1b7e);
  FUN_10064e2bc(param_1 + 0x1b67);
  lVar1 = 0;
  param_1[0x1ab8] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xda38) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xdaf0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xdb08);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xda38);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x1ab8);
  thunk_FUN_100651068(param_1 + 0x1a92);
  thunk_FUN_10064e2bc(param_1 + 0x1a7b);
  thunk_FUN_100651068(param_1 + 0x1a55);
  param_1[0x190c] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x1a2d);
  FUN_1002ebc50(param_1 + 0x190c);
  param_1[0x1617] = &PTR_FUN_1014883c0;
  thunk_FUN_100651068(param_1 + 0x18e5);
  FUN_10003bd40(param_1 + 0x162e);
  FUN_10064e2bc(param_1 + 0x1617);
  param_1[0x1322] = &PTR_FUN_1014883c0;
  thunk_FUN_100651068(param_1 + 0x15f0);
  FUN_10003bd40(param_1 + 0x1339);
  FUN_10064e2bc(param_1 + 0x1322);
  param_1[0x102d] = &PTR_FUN_1014883c0;
  thunk_FUN_100651068(param_1 + 0x12fb);
  FUN_10003bd40(param_1 + 0x1044);
  FUN_10064e2bc(param_1 + 0x102d);
  param_1[0xc8f] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x1027] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1027]);
    param_1[0x1027] = 0;
    param_1[0x1026] = 0;
  }
  if ((void *)param_1[0x1025] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1025]);
    param_1[0x1025] = 0;
    param_1[0x1024] = 0;
  }
  if ((void *)param_1[0x1023] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1023]);
    param_1[0x1023] = 0;
    param_1[0x1022] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xffc);
  FUN_10064e2bc(param_1 + 0xfe1);
  FUN_10064e2bc(param_1 + 0xfc6);
  FUN_10003bd40(param_1 + 0xd0f);
  FUN_100186088(param_1 + 0xc8f);
  param_1[0x8f1] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xc89] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc89]);
    param_1[0xc89] = 0;
    param_1[0xc88] = 0;
  }
  if ((void *)param_1[0xc87] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc87]);
    param_1[0xc87] = 0;
    param_1[0xc86] = 0;
  }
  if ((void *)param_1[0xc85] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc85]);
    param_1[0xc85] = 0;
    param_1[0xc84] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xc5e);
  FUN_10064e2bc(param_1 + 0xc43);
  FUN_10064e2bc(param_1 + 0xc28);
  FUN_10003bd40(param_1 + 0x971);
  FUN_100186088(param_1 + 0x8f1);
  param_1[0x553] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x8eb] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8eb]);
    param_1[0x8eb] = 0;
    param_1[0x8ea] = 0;
  }
  if ((void *)param_1[0x8e9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8e9]);
    param_1[0x8e9] = 0;
    param_1[0x8e8] = 0;
  }
  if ((void *)param_1[0x8e7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8e7]);
    param_1[0x8e7] = 0;
    param_1[0x8e6] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x8c0);
  FUN_10064e2bc(param_1 + 0x8a5);
  FUN_10064e2bc(param_1 + 0x88a);
  FUN_10003bd40(param_1 + 0x5d3);
  FUN_100186088(param_1 + 0x553);
  param_1[0x1b5] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x54d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x54d]);
    param_1[0x54d] = 0;
    param_1[0x54c] = 0;
  }
  if ((void *)param_1[0x54b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x54b]);
    param_1[0x54b] = 0;
    param_1[0x54a] = 0;
  }
  if ((void *)param_1[0x549] != (void *)0x0) {
    operator_delete__((void *)param_1[0x549]);
    param_1[0x549] = 0;
    param_1[0x548] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x522);
  FUN_10064e2bc(param_1 + 0x507);
  FUN_10064e2bc(param_1 + 0x4ec);
  FUN_10003bd40(param_1 + 0x235);
  FUN_100186088(param_1 + 0x1b5);
  thunk_FUN_10064e2bc(param_1 + 0x19e);
  thunk_FUN_10064e2bc(param_1 + 0x187);
  param_1[0x3e] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x15f);
  FUN_1002ebc50(param_1 + 0x3e);
  thunk_FUN_100651068(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_1002d46dc(long *param_1)

{
  long *plVar1;
  float *pfVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  undefined2 local_78 [4];
  undefined2 local_70 [4];
  undefined2 local_68 [4];
  
  pfVar2 = (float *)(param_1 + 0xba9);
  puVar7 = (undefined8 *)FUN_10064e20c();
  puVar7[0x17] = 0;
  *puVar7 = &PTR_thunk_FUN_1002d4a80_101488508;
  thunk_FUN_100652c08(puVar7 + 0x18);
  plVar1 = param_1 + 0x36;
  FUN_1002d4ca0(plVar1);
  plVar3 = param_1 + 0x5c1;
  FUN_1002d4ca0(plVar3);
  plVar11 = param_1 + 0xb4c;
  FUN_10064e264(plVar11);
  plVar4 = param_1 + 0xb63;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xb89;
  FUN_10064e264(plVar5);
  plVar6 = param_1 + 0xba0;
  thunk_FUN_100652c08(plVar6);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7 + 0x18,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_100642bd8(plVar11,plVar6,1);
  FUN_100642bd8(plVar11,plVar4,1);
  FUN_100642bd8(plVar11,plVar5,1);
  uVar8 = thunk_FUN_10064de70();
  FUN_10064e524(param_1,uVar8);
  plVar9 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar9 + 0x58))(plVar9,plVar1);
  (**(code **)(*plVar9 + 0x70))(plVar9,0x46);
  (**(code **)(*plVar9 + 0x58))(plVar9,plVar3);
  plVar10 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar10 + 0x80))(plVar10,plVar9,1);
  plVar9 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar9 + 0x70))(plVar9,0x2d);
  uVar8 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar11,uVar8);
  plVar9 = (long *)FUN_10064e5a0(plVar11);
  (**(code **)(*plVar9 + 0x70))(plVar9,100);
  plVar9 = (long *)FUN_10064e5a0(plVar11);
  (**(code **)(*plVar9 + 0x68))(plVar9,plVar6,1,0x12);
  plVar9 = (long *)FUN_10064e5a0(plVar11);
  (**(code **)(*plVar9 + 0x70))(plVar9,0x14);
  plVar9 = (long *)FUN_10064e5a0(plVar11);
  (**(code **)(*plVar9 + 0x68))(plVar9,plVar5,1,2);
  plVar9 = (long *)FUN_10064e5a0(plVar11);
  (**(code **)(*plVar9 + 0x70))(plVar9,100);
  plVar9 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar9 + 0x68))(plVar9,plVar11,0,2);
  plVar11 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar11 + 0x70))(plVar11,0x2d);
  local_68[0] = 0x77;
  FUN_10064e5b8(plVar3,local_68);
  local_70[0] = 0x77;
  FUN_10064e5b8(plVar1,local_70);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,
                "generic_exclamation_point_circle");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  fVar13 = *pfVar2;
  if ((fVar13 != 2.0) || (fVar13 = *(float *)((long)param_1 + 0x5d4c), fVar13 != 2.0)) {
    pfVar2[0] = 2.0;
    pfVar2[1] = 2.0;
    FUN_1000200a0(plVar6);
  }
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  uVar8 = FUN_1004e0150("MENU_SKILL_RESET_WHERE_TO_FIND",0);
  FUN_1006513c0(plVar4,uVar8);
  FUN_100651460(plVar4,&DAT_10115a164);
  local_78[0] = 0x77;
  FUN_10064e5b8(plVar5,local_78);
  fVar12 = (float)FUN_100651184(plVar4);
  FUN_10064e4dc(plVar5,CONCAT44((int)fVar13,(int)fVar12));
  return param_1;
}




long * thunk_FUN_1002d46dc(long *param_1)

{
  long *plVar1;
  float *pfVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  undefined2 auStack_78 [4];
  undefined2 auStack_70 [4];
  undefined2 auStack_68 [4];
  
  pfVar2 = (float *)(param_1 + 0xba9);
  puVar7 = (undefined8 *)FUN_10064e20c();
  puVar7[0x17] = 0;
  *puVar7 = &PTR_thunk_FUN_1002d4a80_101488508;
  thunk_FUN_100652c08(puVar7 + 0x18);
  plVar1 = param_1 + 0x36;
  FUN_1002d4ca0(plVar1);
  plVar3 = param_1 + 0x5c1;
  FUN_1002d4ca0(plVar3);
  plVar11 = param_1 + 0xb4c;
  FUN_10064e264(plVar11);
  plVar4 = param_1 + 0xb63;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xb89;
  FUN_10064e264(plVar5);
  plVar6 = param_1 + 0xba0;
  thunk_FUN_100652c08(plVar6);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7 + 0x18,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_100642bd8(plVar11,plVar6,1);
  FUN_100642bd8(plVar11,plVar4,1);
  FUN_100642bd8(plVar11,plVar5,1);
  uVar8 = thunk_FUN_10064de70();
  FUN_10064e524(param_1,uVar8);
  plVar9 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar9 + 0x58))(plVar9,plVar1);
  (**(code **)(*plVar9 + 0x70))(plVar9,0x46);
  (**(code **)(*plVar9 + 0x58))(plVar9,plVar3);
  plVar10 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar10 + 0x80))(plVar10,plVar9,1);
  plVar9 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar9 + 0x70))(plVar9,0x2d);
  uVar8 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar11,uVar8);
  plVar9 = (long *)FUN_10064e5a0(plVar11);
  (**(code **)(*plVar9 + 0x70))(plVar9,100);
  plVar9 = (long *)FUN_10064e5a0(plVar11);
  (**(code **)(*plVar9 + 0x68))(plVar9,plVar6,1,0x12);
  plVar9 = (long *)FUN_10064e5a0(plVar11);
  (**(code **)(*plVar9 + 0x70))(plVar9,0x14);
  plVar9 = (long *)FUN_10064e5a0(plVar11);
  (**(code **)(*plVar9 + 0x68))(plVar9,plVar5,1,2);
  plVar9 = (long *)FUN_10064e5a0(plVar11);
  (**(code **)(*plVar9 + 0x70))(plVar9,100);
  plVar9 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar9 + 0x68))(plVar9,plVar11,0,2);
  plVar11 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar11 + 0x70))(plVar11,0x2d);
  auStack_68[0] = 0x77;
  FUN_10064e5b8(plVar3,auStack_68);
  auStack_70[0] = 0x77;
  FUN_10064e5b8(plVar1,auStack_70);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,
                "generic_exclamation_point_circle");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  fVar13 = *pfVar2;
  if ((fVar13 != 2.0) || (fVar13 = *(float *)((long)param_1 + 0x5d4c), fVar13 != 2.0)) {
    pfVar2[0] = 2.0;
    pfVar2[1] = 2.0;
    FUN_1000200a0(plVar6);
  }
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  uVar8 = FUN_1004e0150("MENU_SKILL_RESET_WHERE_TO_FIND",0);
  FUN_1006513c0(plVar4,uVar8);
  FUN_100651460(plVar4,&DAT_10115a164);
  auStack_78[0] = 0x77;
  FUN_10064e5b8(plVar5,auStack_78);
  fVar12 = (float)FUN_100651184(plVar4);
  FUN_10064e4dc(plVar5,CONCAT44((int)fVar13,(int)fVar12));
  return param_1;
}




void FUN_1002d4a80(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002d4a80_101488508;
  param_1[0xba0] = &PTR_FUN_1014a7108;
  param_1[2999] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbba);
  FUN_10064e2bc(param_1 + 0xba0);
  thunk_FUN_10064e2bc(param_1 + 0xb89);
  thunk_FUN_100651068(param_1 + 0xb63);
  thunk_FUN_10064e2bc(param_1 + 0xb4c);
  FUN_1002d5948(param_1 + 0x5c1);
  FUN_1002d5948(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002d5948(void)

{
  FUN_1002d5948();
  return;
}




void thunk_FUN_1002d4a80(void)

{
  FUN_1002d4a80();
  return;
}




void FUN_1002d4b44(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002d4a80();
  operator_delete(pvVar1);
  return;
}




void FUN_1002d4b58(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1b0;
  *(undefined4 *)(param_1 + 0x2df8) = param_2;
  (**(code **)(*(long *)(param_1 + 0x1b0) + 0xe8))(lVar1);
  *(undefined4 *)(param_1 + 0x2dfc) = param_4;
  *(undefined4 *)(param_1 + 0x2e00) = param_5;
  (**(code **)(*(long *)(param_1 + 0x1b0) + 0xe8))(lVar1);
  *(undefined1 *)(param_1 + 0x2e04) = 1;
  (**(code **)(*(long *)(param_1 + 0x1b0) + 0xe8))(lVar1);
  lVar1 = param_1 + 0x2e08;
  *(undefined4 *)(param_1 + 0x5a50) = param_3;
  (**(code **)(*(long *)(param_1 + 0x2e08) + 0xe8))(lVar1);
  *(undefined4 *)(param_1 + 0x5a54) = param_6;
  *(undefined4 *)(param_1 + 0x5a58) = param_7;
  (**(code **)(*(long *)(param_1 + 0x2e08) + 0xe8))(lVar1);
  *(undefined1 *)(param_1 + 0x5a5c) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001002d4c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x2e08) + 0xe8))(lVar1);
  return;
}




void FUN_1002d4c40(long param_1)

{
  undefined4 uVar1;
  
  FUN_10064e32c();
  uVar1 = FUN_10064e3cc(param_1 + 0x5c48);
  FUN_10065179c(uVar1,0,0x3f800000,param_1 + 0x5b18);
  FUN_10064e5ec(0,0,param_1 + 0x5b18,7,param_1 + 0x5c48,7);
  return;
}




long * FUN_1002d4ca0(undefined1 param_1 [16],float param_2,long *param_3)

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
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  float local_78;
  float fStack_74;
  
  puVar14 = (undefined8 *)FUN_10064e20c();
  puVar15 = puVar14 + 0x17;
  *puVar14 = &PTR_thunk_FUN_1002d5948_101488650;
  thunk_FUN_100650e64();
  plVar1 = param_3 + 0x3d;
  thunk_FUN_100655644(plVar1);
  thunk_FUN_10064f204();
  thunk_FUN_1001c73d0();
  plVar2 = param_3 + 0x1ff;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_3 + 0x21d;
  thunk_FUN_1001c6e5c();
  plVar4 = param_3 + 0x297;
  thunk_FUN_100650e64();
  plVar5 = param_3 + 0x2bd;
  thunk_FUN_10064f204(plVar5);
  plVar6 = param_3 + 0x2e6;
  thunk_FUN_1001c73d0(plVar6);
  plVar7 = param_3 + 0x454;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_3 + 0x472;
  thunk_FUN_1001c6e5c(plVar8);
  plVar9 = param_3 + 0x4ec;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_3 + 0x512;
  thunk_FUN_100655644(plVar10);
  plVar11 = param_3 + 0x53d;
  thunk_FUN_100650e64();
  plVar12 = param_3 + 0x563;
  thunk_FUN_100650e64(plVar12);
  param_3[0x589] = -1;
  *(undefined4 *)(param_3 + 0x58a) = 0xffffffff;
  *(undefined1 *)((long)param_3 + 0x2c54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  FUN_100655960(plVar1,plVar5,1);
  FUN_10064f324(plVar5,plVar6,1);
  FUN_100655960(plVar1,param_3 + 0x68,1);
  FUN_10064f324(param_3 + 0x68,param_3 + 0x91,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar7,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar8,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar9,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,puVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar10,1);
  FUN_100655930(plVar10,plVar11,1);
  FUN_100655930(plVar10,plVar12,1);
  FUN_100651038(puVar15,PTR_s_build___Fonts_Brandon_Bold_190_f_10184e268);
  uVar13 = *(uint *)((long)param_3 + 0x13c);
  if ((uVar13 & 0x7f80) != 0x2100) {
    *(uint *)((long)param_3 + 0x13c) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x2100;
    FUN_1000200a0(puVar15);
  }
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  uVar16 = FUN_1004e0150("MENU_SKILL_RESET_STARTING_SKILL_TIER",0);
  FUN_1006513c0(plVar11,uVar16);
  FUN_100651038(plVar12,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1001c7644(plVar6);
  FUN_1001c7644(param_3 + 0x91);
  if ((*(float *)(param_3 + 0x47b) != 1.3) || (*(float *)((long)param_3 + 0x23dc) != 1.3)) {
    param_3[0x47b] = 0x3fa666663fa66666;
    FUN_1000200a0(plVar8);
  }
  if ((*(float *)(param_3 + 0x226) != 1.3) || (*(float *)((long)param_3 + 0x1134) != 1.3)) {
    param_3[0x226] = 0x3fa666663fa66666;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  local_78 = (float)FUN_10064259c(plVar8);
  local_78 = local_78 * 2.9;
  param_2 = param_2 * 2.9;
  fStack_74 = param_2;
  FUN_10064e48c(plVar7,&local_78);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  local_78 = (float)FUN_10064259c(plVar3);
  local_78 = local_78 * 2.9;
  fStack_74 = param_2 * 2.9;
  FUN_10064e48c(plVar2,&local_78);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  uVar16 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar4,uVar16);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  uVar16 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar9,uVar16);
  return param_3;
}




void FUN_1002d510c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float local_68;
  float fStack_64;
  
  FUN_1002d54d8();
  FUN_10064e32c(param_1);
  plVar1 = param_1 + 0x17;
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_10065179c(fVar6 * 0.95,0x3dcccccd,0x3f4ccccd,plVar1);
  FUN_10064e5ec(0,0x430c0000,plVar1,8,param_1,4);
  FUN_10064e72c(0,param_1 + 0x563,0,param_1 + 0x53d,2);
  FUN_10064e72c(0,param_1 + 0x563,4,param_1 + 0x53d,4);
  plVar3 = param_1 + 0x512;
  FUN_1006557ec(plVar3);
  fVar7 = 0.0;
  FUN_10064e5ec(0,plVar3,6,param_1,6);
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064eb7c(plVar1,6,plVar3,4);
  fVar10 = fVar7 + 50.0;
  plVar3 = param_1 + 0x68;
  local_68 = (float)FUN_1001c7e04(param_1 + 0x91);
  fStack_64 = fVar7;
  FUN_10064e48c(plVar3,&local_68);
  fVar7 = 0.5;
  FUN_10064f308(0x3f000000,plVar3);
  FUN_10064f2cc(plVar3);
  if ((*(float *)(param_1 + 0x2ef) != 0.77) || (*(float *)((long)param_1 + 0x177c) != 0.77)) {
    param_1[0x2ef] = 0x3f451eb83f451eb8;
    FUN_1000200a0(param_1 + 0x2e6);
  }
  plVar4 = param_1 + 0x2bd;
  local_68 = (float)FUN_1001c7e04(param_1 + 0x2e6);
  local_68 = local_68 * 0.77;
  fStack_64 = fVar7 * 0.77;
  FUN_10064e48c(plVar4,&local_68);
  FUN_10064f308(0x3f000000,0x3f000000,plVar4);
  FUN_10064f2cc(plVar4);
  fVar7 = (float)FUN_1001c7e04(param_1 + 0x91);
  fVar8 = -0.4;
  FUN_10064e72c(fVar7 * -0.4,plVar4,3,plVar3,1);
  FUN_10064e72c(0xc2480000,plVar4,2,plVar3,2);
  plVar2 = param_1 + 0x3d;
  FUN_1006557ec(plVar2);
  fVar7 = (float)FUN_10064e3cc(plVar2);
  uVar9 = 0;
  fVar6 = (float)NEON_fminnm((fVar6 + -40.0) / fVar7,fVar10 / fVar8);
  if (fVar6 < 1.0) {
    uVar9 = 0;
    bVar5 = false;
    if ((*(float *)(param_1 + 0x46) == fVar6) &&
       (bVar5 = false, !NAN(*(float *)((long)param_1 + 0x234)) && !NAN(fVar6))) {
      bVar5 = *(float *)((long)param_1 + 0x234) == fVar6;
    }
    if (!bVar5) {
      *(float *)(param_1 + 0x46) = fVar6;
      *(float *)((long)param_1 + 0x234) = fVar6;
      uVar9 = 0;
      FUN_1000200a0(plVar2);
    }
  }
  FUN_10064e5ec(0,CONCAT44(uVar9,fVar10 * 0.5 + -50.0),plVar2,8,plVar1,6);
  plVar1 = param_1 + 0x21d;
  uVar9 = 0;
  FUN_10064e5ec(0,0xc2c80000,plVar1,6,plVar3,6);
  plVar3 = param_1 + 0x472;
  FUN_10064e5ec(0,CONCAT44(uVar9,fVar6 * 50.0 + -100.0),plVar3,6,plVar4,6);
  FUN_10064e5ec(0,0,param_1 + 0x454,8,plVar3,8);
  FUN_10064e5ec(0,0,param_1 + 0x1ff,8,plVar1,8);
  FUN_10064e72c(0,param_1 + 0x297,0,plVar1,2);
  FUN_10064e72c(0,param_1 + 0x297,4,plVar1,4);
  FUN_10064e72c(0,param_1 + 0x4ec,0,plVar3,2);
  FUN_10064e72c(0,param_1 + 0x4ec,4,plVar3,4);
  return;
}




void FUN_1002d54d8(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined1 auStack_58 [8];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0x2c54) == '\0') {
    if ((-1 < *(int *)(param_1 + 0x2c50)) && (-1 < *(int *)(param_1 + 0x2c4c))) {
      uVar2 = FUN_1004e0150("MENU_SKILL_RESET_STARTING_SKILL_TIER",0);
      FUN_1006513c0(param_1 + 0x29e8,uVar2);
      uVar2 = FUN_1004e0150("MENU_SKILL_RESET_NEW_SKILL_TIERS",0);
      thunk_FUN_1004e439c(auStack_58,uVar2);
      local_48 = 0;
      uStack_40 = 0;
      FUN_1000f0a34(*(undefined4 *)(param_1 + 0x2c4c));
      FUN_100115aa0(&local_48,"%d");
      FUN_1004e3120(auStack_68,"[SKILL_TIER_5V5]");
      FUN_1004e3120(auStack_78,&local_48);
      FUN_1004e3bc4(auStack_58,0,auStack_68,auStack_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1004e3120(auStack_68,"[SKILL_SUBTIER_5V5]");
      uVar2 = FUN_1000f2ea8(*(undefined4 *)(param_1 + 0x2c4c));
      FUN_1004e3bc4(auStack_58,0,auStack_68,uVar2);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1000f0a34(*(undefined4 *)(param_1 + 0x2c50));
      FUN_100115aa0(&local_48,"%d");
      FUN_1004e3120(auStack_68,"[SKILL_TIER_3V3]");
      FUN_1004e3120(auStack_78,&local_48);
      FUN_1004e3bc4(auStack_58,0,auStack_68,auStack_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1004e3120(auStack_68,"[SKILL_SUBTIER_3V3]");
      iVar4 = *(int *)(param_1 + 0x2c50);
      goto LAB_1002d5764;
    }
    pcVar1 = "MENU_SKILL_RESET_STARTING_SKILL_TIER";
  }
  else {
    pcVar1 = "MENU_SKILL_RESET_MAXIMUM_SKILL_TIER";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1006513c0(param_1 + 0x29e8,uVar2);
  fVar5 = (float)*(int *)(param_1 + 0x2c4c);
  if ((float)*(int *)(param_1 + 0x2c4c) <= (float)*(int *)(param_1 + 0x2c50)) {
    fVar5 = (float)*(int *)(param_1 + 0x2c50);
  }
  iVar4 = (int)fVar5;
  FUN_1000f0a34(iVar4);
  uVar2 = FUN_1004e0150("MENU_SKILL_RESET_OLD_SKILL_TIER",0);
  thunk_FUN_1004e439c(auStack_58,uVar2);
  local_48 = 0;
  uStack_40 = 0;
  FUN_100115aa0(&local_48,"%d");
  FUN_1004e3120(auStack_68,"[SKILL_TIER]");
  FUN_1004e3120(auStack_78,&local_48);
  FUN_1004e3bc4(auStack_58,0,auStack_68,auStack_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  FUN_1004e3120(auStack_68,"[SKILL_SUBTIER]");
LAB_1002d5764:
  uVar2 = FUN_1000f2ea8(iVar4);
  FUN_1004e3bc4(auStack_58,0,auStack_68,uVar2);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  FUN_1006513c0(param_1 + 0x2b18,auStack_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
  }
  FUN_1000f0ec8(auStack_58,*(undefined4 *)(param_1 + 0x2c48),0,0,1);
  FUN_1006513c0(param_1 + 0xb8,auStack_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
  }
  if (*(int *)(param_1 + 0x2c4c) < -1) {
    *(uint *)(param_1 + 0x116c) = *(uint *)(param_1 + 0x116c) & 0xfffffffb;
    *(uint *)(param_1 + 0x50c) = *(uint *)(param_1 + 0x50c) & 0xfffffffb;
    *(uint *)(param_1 + 0x107c) = *(uint *)(param_1 + 0x107c) & 0xfffffffb;
    uVar3 = *(uint *)(param_1 + 0x153c) & 0xfffffffb;
  }
  else {
    FUN_1001c6fd8(param_1 + 0x10e8);
    FUN_1001c7990(param_1 + 0x488,*(undefined4 *)(param_1 + 0x2c4c));
    FUN_1001c7970(param_1 + 0x488,0);
    *(uint *)(param_1 + 0x116c) = *(uint *)(param_1 + 0x116c) | 4;
    *(uint *)(param_1 + 0x50c) = *(uint *)(param_1 + 0x50c) | 4;
    *(uint *)(param_1 + 0x107c) = *(uint *)(param_1 + 0x107c) | 4;
    uVar3 = *(uint *)(param_1 + 0x153c) | 4;
  }
  *(uint *)(param_1 + 0x153c) = uVar3;
  if (*(int *)(param_1 + 0x2c50) < -1) {
    *(uint *)(param_1 + 0x2414) = *(uint *)(param_1 + 0x2414) & 0xfffffffb;
    *(uint *)(param_1 + 0x17b4) = *(uint *)(param_1 + 0x17b4) & 0xfffffffb;
    *(uint *)(param_1 + 0x2324) = *(uint *)(param_1 + 0x2324) & 0xfffffffb;
    uVar3 = *(uint *)(param_1 + 0x27e4) & 0xfffffffb;
  }
  else {
    FUN_1001c6fd8(param_1 + 0x2390);
    FUN_1001c7990(param_1 + 0x1730,*(undefined4 *)(param_1 + 0x2c50));
    FUN_1001c7970(param_1 + 0x1730,0);
    *(uint *)(param_1 + 0x2414) = *(uint *)(param_1 + 0x2414) | 4;
    *(uint *)(param_1 + 0x17b4) = *(uint *)(param_1 + 0x17b4) | 4;
    *(uint *)(param_1 + 0x2324) = *(uint *)(param_1 + 0x2324) | 4;
    uVar3 = *(uint *)(param_1 + 0x27e4) | 4;
  }
  *(uint *)(param_1 + 0x27e4) = uVar3;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1002d5934(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002d5948();
  operator_delete(pvVar1);
  return;
}




void FUN_1002d5948(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002d5948_101488650;
  thunk_FUN_100651068(param_1 + 0x563);
  thunk_FUN_100651068(param_1 + 0x53d);
  param_1[0x512] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x529);
  FUN_10064e2bc(param_1 + 0x512);
  thunk_FUN_100651068(param_1 + 0x4ec);
  FUN_10017d364(param_1 + 0x472);
  param_1[0x454] = &PTR_FUN_1014a7108;
  param_1[0x46b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x46e);
  FUN_10064e2bc(param_1 + 0x454);
  thunk_FUN_1001c768c(param_1 + 0x2e6);
  param_1[0x2bd] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x2d4);
  FUN_10064e2bc(param_1 + 0x2bd);
  thunk_FUN_100651068(param_1 + 0x297);
  FUN_10017d364(param_1 + 0x21d);
  param_1[0x1ff] = &PTR_FUN_1014a7108;
  param_1[0x216] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x219);
  FUN_10064e2bc(param_1 + 0x1ff);
  thunk_FUN_1001c768c(param_1 + 0x91);
  param_1[0x68] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x7f);
  FUN_10064e2bc(param_1 + 0x68);
  param_1[0x3d] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x54);
  FUN_10064e2bc(param_1 + 0x3d);
  thunk_FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_1002d5ac4(long *param_1)

{
  undefined8 *puVar1;
  code *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar1 = (undefined8 *)FUN_10064f204();
  puVar1[0x29] = 0;
  *puVar1 = &PTR_thunk_FUN_1002d5c34_101488798;
  thunk_FUN_10064f204(puVar1 + 0x2a);
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x55) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x2a,1);
  local_28 = DAT_101d23838;
  local_50 = FUN_1002d5b94;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&local_50);
  local_28 = DAT_101d2383c;
  local_50 = FUN_1002d5be4;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&local_50);
  return param_1;
}




void FUN_1002d5b94(long param_1)

{
  undefined1 auStack_40 [32];
  
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  FUN_100644aec(auStack_40,DAT_101d2380c,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002d5be4(long param_1)

{
  undefined1 auStack_40 [32];
  
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  FUN_100644aec(auStack_40,DAT_101d23808,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * thunk_FUN_1002d5ac4(long *param_1)

{
  undefined8 *puVar1;
  code *pcStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = (undefined8 *)FUN_10064f204();
  puVar1[0x29] = 0;
  *puVar1 = &PTR_thunk_FUN_1002d5c34_101488798;
  thunk_FUN_10064f204(puVar1 + 0x2a);
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x55) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x2a,1);
  uStack_28 = DAT_101d23838;
  pcStack_50 = FUN_1002d5b94;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_50);
  uStack_28 = DAT_101d2383c;
  pcStack_50 = FUN_1002d5be4;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_50);
  return param_1;
}




void FUN_1002d5c34(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002d5c34_101488798;
  param_1[0x2a] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x41);
  FUN_10064e2bc(param_1 + 0x2a);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002d5c34(void)

{
  FUN_1002d5c34();
  return;
}




void FUN_1002d5c9c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002d5c34();
  operator_delete(pvVar1);
  return;
}




void FUN_1002d5cb0(long *param_1)

{
  FUN_10064e47c();
                    /* WARNING: Could not recover jumptable at 0x0001002d5cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002d5cdc(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  
  FUN_1002bdf6c(param_1[0x53]);
  uVar2 = 0x10;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1[0x53] + 0x84) = *(uint *)(param_1[0x53] + 0x84) & 0xffffffef | uVar2;
  FUN_1002bdf5c(param_1[0x53],param_3);
  FUN_1002bdf4c(param_1[0x53],param_4);
  FUN_1002bdf54(param_1[0x53],param_5);
  FUN_1002be848(param_1[0x53],(int)param_5 <= (int)param_3);
  FUN_1002be7e0(param_1[0x53]);
  (**(code **)(*(long *)param_1[0x53] + 0x1a8))((long *)param_1[0x53],1);
  (**(code **)(*(long *)param_1[0x53] + 0x148))((long *)param_1[0x53],0);
  (**(code **)(*(long *)param_1[0x53] + 0x198))((long *)param_1[0x53],1);
  (**(code **)(*(long *)param_1[0x53] + 400))((long *)param_1[0x53],1);
  (**(code **)(*(long *)param_1[0x53] + 0x1c0))((long *)param_1[0x53],1);
  FUN_1002d5e68(param_1);
  FUN_1002be7f8(0x3f333333,param_1[0x53]);
  plVar1 = (long *)param_1[0x53];
  if ((*(float *)(plVar1 + 9) != 0.6) || (*(float *)((long)plVar1 + 0x4c) != 0.6)) {
    plVar1[9] = 0x3f19999a3f19999a;
    FUN_1000200a0();
    plVar1 = (long *)param_1[0x53];
  }
  (**(code **)(*plVar1 + 0x1e0))(0x3f19999a);
                    /* WARNING: Could not recover jumptable at 0x0001002d5e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002d5e58(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x298) = param_2;
  FUN_10064f31c(param_1 + 0x150,param_2,1);
  return;
}




void FUN_1002d5e68(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10032834c();
  uVar1 = FUN_100328764(uVar2,*(undefined8 *)(param_1 + 0x2a0));
  FUN_1002be81c(*(undefined8 *)(param_1 + 0x298),uVar1 ^ 1);
  return;
}




void FUN_1002d5e9c(long param_1)

{
  FUN_1002bdf5c(*(undefined8 *)(param_1 + 0x298));
  return;
}




void FUN_1002d5ea4(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = (**(code **)(*param_3 + 0x48))();
  uStack_24 = param_2;
  FUN_10064e48c(param_3 + 0x2a,&local_28);
  FUN_10064e5ec(0,0,param_3[0x53],8,param_3 + 0x2a,8);
  return;
}




void FUN_1002d5f04(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char acStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  *(long *)(param_1 + 0x2a0) = param_2;
  plVar2 = (long *)FUN_10032bff8();
  FUN_1004d2698(acStack_d8,"card_skin_%s");
  lVar7 = *(long *)*plVar2;
  plVar2 = (long *)*plVar2;
  do {
    if (lVar7 == 0) {
LAB_1002d5ff4:
      if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    iVar1 = _strcmp(*(char **)(lVar7 + 8),acStack_d8);
    if (iVar1 == 0) {
      uVar3 = FUN_10032834c();
      uVar4 = FUN_100328708(uVar3,param_2);
      uVar5 = FUN_100328d7c(uVar3);
      uVar6 = FUN_100328e40(uVar3,param_2);
      uVar3 = FUN_100328d84(uVar3,param_2);
      FUN_1002bdddc(*(undefined8 *)(param_1 + 0x298),*plVar2,1,*(undefined4 *)(param_2 + 0x20));
      FUN_1002d5cdc(param_1,uVar4,uVar5,uVar6,uVar3);
      goto LAB_1002d5ff4;
    }
    lVar7 = plVar2[1];
    plVar2 = plVar2 + 1;
  } while( true );
}




void FUN_1002d602c(long param_1)

{
  FUN_1002be7d0(*(undefined8 *)(param_1 + 0x298));
  return;
}




void FUN_1002d6034(long param_1)

{
  undefined1 auStack_40 [32];
  
  *(undefined1 *)(param_1 + 0x2a9) = 0;
  FUN_100644aec(auStack_40,DAT_101d23810,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002d6080(void)

{
  DAT_101e451b0 = 0xff;
  DAT_101e451b2 = 0xffff;
  DAT_101e451b4 = 0xffff;
  DAT_101e451b6 = 0xffbc9c44;
  DAT_101e451ba = 0xff1166f2;
  DAT_101e451be = 0xffe0e0e0;
  DAT_101e451c2 = 0xffa0a0a0;
  DAT_101e451c6 = 0xff8c8c8c;
  DAT_101e451ca = 0xff322213;
  DAT_101e451ce = 0xff091911;
  DAT_101e451d2 = 0xff170c19;
  DAT_101e451d6 = 0xff241a14;
  DAT_101e451da = 0xff14171c;
  DAT_101e451de = 0xff221911;
  DAT_101e451e2 = 0xff1a1416;
  DAT_101e451e6 = 0xff121414;
  DAT_101e451ea = 0xff1a1809;
  DAT_101e451ee = 0xff141414;
  DAT_101e451f2 = 0xff141414;
  DAT_101e451f6 = 0xff2929c0;
  DAT_101e451fa = 0xff283082;
  DAT_101e451fe = 0xff5262cc;
  DAT_101e45202 = 0xff283082;
  DAT_101e45206 = 0xff5262cc;
  DAT_101e4520a = 0xff745c42;
  DAT_101e4520e = 0xff184155;
  DAT_101e45212 = 0xff92665e;
  DAT_101e45216 = 0xffbc9c44;
  DAT_101e4521a = 0xffbbae56;
  DAT_101e4521e = 0xff8b7b01;
  DAT_101e45222 = 0xff90b3ef;
  DAT_101e45226 = 0xff728ebe;
  DAT_101e4522a = 0xff19459d;
  DAT_101e4522e = 0xff9d877b;
  DAT_101e45232 = 0xffcbb1a3;
  DAT_101e45236 = 0xff3f6fb5;
  DAT_101e4523a = 0xffc5c5c5;
  DAT_101e4523e = 0xff4fc1f1;
  DAT_101e45242 = 0xff606060;
  DAT_101e45246 = 0xffc5ff7b;
  DAT_101e4524a = 0xff5271eb;
  DAT_101e4524e = 0xfffae076;
  DAT_101e45252 = 0xff3ac8f6;
  DAT_101e45256 = 0xffaaaaaa;
  DAT_101e4525a = 0xffe19400;
  DAT_101e4525e = 0xffe19400;
  DAT_101e45262 = 0xffe550b2;
  DAT_101e45266 = 0xfff22ae8;
  DAT_101e4526a = 0xff005ae1;
  DAT_101e4526e = 0xff1addfa;
  DAT_101e45272 = 0xff2424b3;
  DAT_101e45276 = 0xff2424b3;
  DAT_101e4527a = 0xff646464;
  DAT_101e4527e = 0xff92665e;
  DAT_101e45282 = 0xff646037;
  DAT_101e4528c = 0xff1111a1;
  DAT_101e45290 = 0xff321ee1;
  DAT_101e45294 = 0xffc8c8c8;
  DAT_101e45298 = 0xff321ee1;
  DAT_101e452a4 = 0xff6259b3;
  DAT_101e452a8 = 0xff506e73;
  DAT_101e452ac = 0xff9dbf86;
  DAT_101e45288 = 0xffffffff;
  DAT_101e452b0 = 0xffa35244;
  DAT_101e4529c = 0xff7fe801;
  DAT_101e452b4 = 0xffca828e;
  DAT_101e452a0 = 0xffffffff;
  DAT_101e452b8 = 0xffa6a6a6;
  DAT_101e452bc = 0xffa6a6a6;
  DAT_101e452c0 = 0xffffffff;
  DAT_101e452c4 = 0xff88ea2f;
  DAT_101e452c8 = 0xff8c8c8c;
  DAT_101e452cc = 0xffffb400;
  DAT_101e452d0 = 0xffff00ff;
  DAT_101e452d4 = 0xff00aded;
  DAT_101e452d8 = 0xff33d3ff;
  DAT_101e452dc = 0xff7fe801;
  DAT_101e452e0 = 0xff282828;
  DAT_101e452e4 = 0xfff0f0f0;
  DAT_101e452e8 = 0xffa4781e;
  DAT_101e452ec = 0xffa6654b;
  DAT_101e452f0 = 0xff93435b;
  DAT_101e452f4 = 0xff387f9c;
  DAT_101e452f8 = 0xffa3781e;
  DAT_101e452fc = 0xffffd18a;
  DAT_101e45300 = 0xffff61f7;
  DAT_101e45304 = 0xff5de1f2;
  DAT_101e45308 = 0xff80eaff;
  DAT_101e4530c = 0xff32e00e;
  DAT_101e45310 = 0xff5a3c10;
  DAT_101e45314 = 0xff330b03;
  DAT_101e45318 = 0xff33031d;
  DAT_101e4531c = 0xff032433;
  DAT_101e45320 = 0xff9e8e8d;
  DAT_101d23808 = FUN_100644a94("UI::EVENT_SHOW_ALL_LOOT_CARD_3D");
  DAT_101d2380c = FUN_100644a94("UI::EVENT_HIDE_ALL_LOOT_CARD_3D");
  DAT_101d23810 = FUN_100644a94("UI::EVENT_UPDATE_BLUEPRINT");
  return;
}




long * FUN_1002d6780(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *puVar2 = &PTR_thunk_FUN_1002d6a94_1014888e8;
  puVar2[0x19] = 0;
  puVar2 = puVar2 + 0x1a;
  thunk_FUN_1005357f4(puVar2);
  plVar1 = param_1 + 0x15f;
  thunk_FUN_100650e64(plVar1);
  param_1[0x186] = 0;
  param_1[0x185] = 0;
  param_1[0x188] = 0;
  param_1[0x187] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100534ad8(puVar2,plVar1,1);
  local_60 = (code *)CONCAT71(local_60._1_7_,9);
  FUN_100534ebc(puVar2,&local_60);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  FUN_100651700(plVar1,3);
  uVar3 = FUN_1004e0150("INVENTORY_NO_BLUEPRINTS_INSTRUCTION",0);
  FUN_1006513c0(plVar1,uVar3);
  local_38 = DAT_101d2380c;
  local_60 = thunk_FUN_1002d6f70;
  plVar1 = param_1 + 1;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101d23808;
  local_60 = thunk_FUN_1002d7068;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101e454b0;
  local_60 = thunk_FUN_1002d6910;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  FUN_1002d6910(param_1);
  return param_1;
}




void thunk_FUN_1002d6f70(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar1 = 0;
    do {
      FUN_1002d6fd0(*(undefined8 *)(*(long *)(param_1 + 200) + uVar1 * 8),0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc0));
  }
  FUN_100536104(0,param_1 + 0xd0);
  FUN_10053610c(0,param_1 + 0xd0);
  return;
}




void thunk_FUN_1002d7068(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar1 = 0;
    do {
      FUN_1002d6fd0(*(undefined8 *)(*(long *)(param_1 + 200) + uVar1 * 8),1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc0));
  }
  FUN_100536114(param_1 + 0xd0);
  return;
}




void thunk_FUN_1002d6910(void)

{
  FUN_1002d6910();
  return;
}




void FUN_1002d6910(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  FUN_10064e48c(param_1,param_1 + 0xc28);
  lVar1 = param_1 + 0xd0;
  FUN_10064e48c(lVar1,param_1 + 0xc28);
  FUN_100651708(*(undefined4 *)(param_1 + 0xc28),param_1 + 0xaf8,1);
  *(uint *)(param_1 + 0xb7c) = *(uint *)(param_1 + 0xb7c) | 4;
  FUN_10064e5ec(0,0,param_1 + 0xaf8,8,lVar1,8);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar7 = 0;
    lVar5 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 200) + uVar7 * 8);
      if ((int)plVar3[0xf9] == 0) {
        puVar4 = (uint *)((long)plVar3 + 0x84);
      }
      else {
        *(undefined4 *)(plVar3 + 0xf8) = *(undefined4 *)(param_1 + 0xc28);
        (**(code **)(*plVar3 + 0x138))();
        lVar6 = *(long *)(*(long *)(param_1 + 200) + uVar7 * 8);
        if (lVar5 == 0) {
          bVar2 = false;
          if ((*(float *)(lVar6 + 0x44) == 0.0) && (bVar2 = false, !NAN(*(float *)(lVar6 + 0x40))))
          {
            bVar2 = *(float *)(lVar6 + 0x40) == 0.0;
          }
          if (!bVar2) {
            *(undefined8 *)(lVar6 + 0x40) = 0;
            FUN_1000200a0(lVar6);
          }
        }
        else {
          FUN_10064e72c(0,lVar6,0,lVar5,2);
          FUN_10064e72c(0,lVar6,3,lVar5,3);
        }
        lVar5 = *(long *)(*(long *)(param_1 + 200) + uVar7 * 8);
        puVar4 = (uint *)(param_1 + 0xb7c);
      }
      *puVar4 = *puVar4 & 0xfffffffb;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0xc0));
  }
  if (*(float *)(param_1 + 0x114) != 0.0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    FUN_1000200a0(lVar1);
    return;
  }
  return;
}




long * thunk_FUN_1002d6780(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *puVar2 = &PTR_thunk_FUN_1002d6a94_1014888e8;
  puVar2[0x19] = 0;
  puVar2 = puVar2 + 0x1a;
  thunk_FUN_1005357f4(puVar2);
  plVar1 = param_1 + 0x15f;
  thunk_FUN_100650e64(plVar1);
  param_1[0x186] = 0;
  param_1[0x185] = 0;
  param_1[0x188] = 0;
  param_1[0x187] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100534ad8(puVar2,plVar1,1);
  pcStack_60 = (code *)CONCAT71(pcStack_60._1_7_,9);
  FUN_100534ebc(puVar2,&pcStack_60);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  FUN_100651700(plVar1,3);
  uVar3 = FUN_1004e0150("INVENTORY_NO_BLUEPRINTS_INSTRUCTION",0);
  FUN_1006513c0(plVar1,uVar3);
  uStack_38 = DAT_101d2380c;
  pcStack_60 = thunk_FUN_1002d6f70;
  plVar1 = param_1 + 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101d23808;
  pcStack_60 = thunk_FUN_1002d7068;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101e454b0;
  pcStack_60 = thunk_FUN_1002d6910;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  FUN_1002d6910(param_1);
  return param_1;
}




void FUN_1002d6a94(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002d6a94_1014888e8;
  FUN_1002d6af4();
  if (*(char *)((long)param_1 + 0xc47) < '\0') {
    operator_delete((void *)param_1[0x186]);
  }
  thunk_FUN_100651068(param_1 + 0x15f);
  thunk_FUN_100534a3c(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002d6af4(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 200);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 200);
        uVar2 = *(uint *)(param_1 + 0xc0);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_100536114(param_1 + 0xd0);
  return;
}




void thunk_FUN_1002d6a94(void)

{
  FUN_1002d6a94();
  return;
}




void FUN_1002d6b60(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002d6a94();
  operator_delete(pvVar1);
  return;
}




void FUN_1002d6b74(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 local_38;
  
  plVar1 = operator_new(2000);
  local_38 = FUN_1002d70b4();
  FUN_1002d6c0c(local_38,param_2);
  if ((int)plVar1[0xf9] != 0) {
    FUN_1002d6d00(param_1 + 0xc0,&local_38);
    FUN_100534ad8(param_1 + 0xd0,local_38,1);
    FUN_1002d6910(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002d6c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}




void FUN_1002d6c0c(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_78;
  long *plStack_70;
  long *local_68;
  code *pcStack_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  param_1[0xf4] = param_2;
  FUN_1004d2698(auStack_58,"portrait_%s");
  FUN_100652d8c(param_1 + 0x67);
  FUN_1001e34dc(param_1 + 0x67,auStack_58);
  uVar2 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x18),0);
  FUN_1006513c0(param_1 + 0x88,uVar2);
  iVar1 = FUN_10032c19c();
  if (iVar1 != 0) {
    FUN_10032c190();
    FUN_1002d7774(param_1);
  }
  uVar2 = FUN_10032c190();
  local_78 = 0;
  pcStack_60 = thunk_FUN_1002d7774;
  plStack_70 = param_1;
  local_68 = param_1;
  FUN_1002090e4(uVar2,&local_78);
  *(undefined1 *)((long)param_1 + 0x7cc) = 1;
  (**(code **)(*param_1 + 0x138))(param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1002d6d00(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002d793c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002d6d80(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xc28) = param_1;
  *(undefined4 *)(param_3 + 0xc2c) = param_2;
  FUN_1002d6910();
  return;
}




string * FUN_1002d6d8c(long param_1)

{
  string *this;
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 **local_68;
  ulong local_60;
  undefined8 uStack_58;
  
  this = (string *)(param_1 + 0xc30);
  std::string::operator=(this,(string *)&DAT_101d91198);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar5 = 0;
    do {
      puVar1 = (undefined8 *)FUN_1002d6eb0(*(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8));
      if ((char)*(byte *)((long)puVar1 + 0x17) < '\0') {
        uVar3 = puVar1[1];
        if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_1002d7930();
        }
        puVar1 = (undefined8 *)*puVar1;
      }
      else {
        uVar3 = (ulong)*(byte *)((long)puVar1 + 0x17);
      }
      if (uVar3 < 0x17) {
        pppuVar2 = &local_68;
        uStack_58 = CONCAT17((char)uVar3,(undefined7)uStack_58);
        if (uVar3 != 0) goto LAB_1002d6e38;
      }
      else {
        uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
        pppuVar2 = operator_new(uVar4);
        uStack_58 = uVar4 | 0x8000000000000000;
        local_68 = pppuVar2;
        local_60 = uVar3;
LAB_1002d6e38:
        _memcpy(pppuVar2,puVar1,uVar3);
      }
      *(undefined1 *)((long)pppuVar2 + uVar3) = 0;
      pppuVar2 = (undefined8 ***)local_68;
      if (-1 < (long)uStack_58) {
        pppuVar2 = &local_68;
      }
      std::string::append((char *)this,(ulong)pppuVar2);
      if ((long)uStack_58 < 0) {
        operator_delete(local_68);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xc0));
  }
  return this;
}




string * FUN_1002d6eb0(long param_1)

{
  string *this;
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined8 **local_58 [2];
  char local_41;
  
  this = (string *)(param_1 + 0x7a8);
  std::string::operator=(this,(string *)&DAT_101d91198);
  if (*(int *)(param_1 + 0x148) != 0) {
    uVar2 = 0;
    do {
      FUN_100207994(local_58,*(undefined8 *)(*(long *)(param_1 + 0x150) + uVar2 * 8));
      pppuVar1 = (undefined8 ***)local_58[0];
      if (-1 < local_41) {
        pppuVar1 = local_58;
      }
      std::string::append((char *)this,(ulong)pppuVar1);
      std::string::append((char *)this);
      if (local_41 < '\0') {
        operator_delete(local_58[0]);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x148));
  }
  return this;
}




void FUN_1002d6f70(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar1 = 0;
    do {
      FUN_1002d6fd0(*(undefined8 *)(*(long *)(param_1 + 200) + uVar1 * 8),0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc0));
  }
  FUN_100536104(0,param_1 + 0xd0);
  FUN_10053610c(0,param_1 + 0xd0);
  return;
}




void FUN_1002d6fd0(long param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x148) != 0) {
    uVar1 = 0;
    do {
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x150) + uVar1 * 8) + 8);
      if (*(char *)(lVar3 + 0x2a8) == '\0' && param_2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)*(byte *)(lVar3 + 0x2a9) << 2;
      }
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffffb | uVar2;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x148));
  }
  uVar2 = 4;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x74c) = *(uint *)(param_1 + 0x74c) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) & 0xfffffffb | uVar2;
  return;
}




void FUN_1002d7068(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar1 = 0;
    do {
      FUN_1002d6fd0(*(undefined8 *)(*(long *)(param_1 + 200) + uVar1 * 8),1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc0));
  }
  FUN_100536114(param_1 + 0xd0);
  return;
}




long * FUN_1002d70b4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar5 = (undefined8 *)FUN_10064f204();
  *puVar5 = &PTR_thunk_FUN_1002d7278_101488a30;
  puVar5[0x29] = 0;
  puVar5[0x2a] = 0;
  puVar5 = puVar5 + 0x2b;
  thunk_FUN_100652c08(puVar5);
  plVar1 = param_1 + 0x49;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x67;
  FUN_100653838(plVar2);
  plVar3 = param_1 + 0x88;
  thunk_FUN_100650e64(plVar3);
  thunk_FUN_100655644(param_1 + 0xae);
  plVar4 = param_1 + 0xd9;
  FUN_1006505b8(plVar4);
  *(undefined8 *)((long)param_1 + 0x7c5) = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xae,1);
  FUN_100652cac(plVar1,PTR_s_build___InventoryCommon_atlas_10184e108,
                "inventory_hero_portrait_frame_standard");
  FUN_100652cac(puVar5,PTR_s_build___InventoryCommon_atlas_10184e108,
                "inventory_hero_portrait_frame_standard");
  FUN_100650608(plVar4,&DAT_10115a164);
  local_80 = (code *)CONCAT44(local_80._4_4_,0xffb6acaa);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&local_80);
  local_58 = DAT_101d23810;
  local_80 = thunk_FUN_1002d78dc;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  return param_1;
}




void thunk_FUN_1002d78dc(long *param_1)

{
  undefined1 auStack_40 [32];
  
  (**(code **)(*param_1 + 0x138))();
  FUN_100644aec(auStack_40,DAT_101e454b0,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002d7278(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_thunk_FUN_1002d7278_101488a30;
  FUN_1002d73c0();
  if (*(char *)((long)param_1 + 0x7cc) != '\0') {
    puVar2 = (uint *)FUN_10032c190();
    if (*puVar2 != 0) {
      lVar3 = *(long *)(puVar2 + 2);
      lVar4 = (ulong)*puVar2 << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100209074();
          break;
        }
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
  }
  if (*(char *)((long)param_1 + 0x7bf) < '\0') {
    operator_delete((void *)param_1[0xf5]);
  }
  FUN_10064e2bc(param_1 + 0xd9);
  param_1[0xae] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xc5);
  FUN_10064e2bc(param_1 + 0xae);
  thunk_FUN_100651068(param_1 + 0x88);
  param_1[0x67] = &PTR_FUN_1014a7108;
  param_1[0x7e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x81);
  FUN_10064e2bc(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_1014a7108;
  param_1[0x42] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x45);
  FUN_10064e2bc(param_1 + 0x2b);
  if ((void *)param_1[0x2a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2a]);
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002d73c0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x148);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x150);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x150);
        uVar2 = *(uint *)(param_1 + 0x148);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  return;
}




void thunk_FUN_1002d7278(void)

{
  FUN_1002d7278();
  return;
}




void FUN_1002d7428(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002d7278();
  operator_delete(pvVar1);
  return;
}




void FUN_1002d743c(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 local_88;
  undefined4 uStack_84;
  
  fVar12 = *(float *)(param_1 + 0x7c0);
  FUN_10064e48c();
  lVar1 = param_1 + 0x570;
  if (*(int *)(param_1 + 0x148) == 0) {
    iVar7 = 0;
  }
  else {
    uVar8 = 0;
    lVar4 = 0;
    lVar5 = 0;
    iVar7 = 0;
    fVar12 = fVar12 * 0.25 + -15.0;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    do {
      lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x150) + uVar8 * 8) + 8);
      if (*(char *)(lVar6 + 0x2a9) == '\0') {
        *(uint *)(lVar6 + 0x84) = *(uint *)(lVar6 + 0x84) & 0xfffffffb;
      }
      else {
        FUN_10064e47c(fVar12,fVar12,lVar6);
        if (iVar7 == 0) {
          bVar3 = false;
          if ((*(float *)(lVar6 + 0x40) == 0.0) && (bVar3 = false, !NAN(*(float *)(lVar6 + 0x44))))
          {
            bVar3 = *(float *)(lVar6 + 0x44) == 20.0;
          }
          lVar4 = lVar6;
          if (!bVar3) {
            *(undefined8 *)(lVar6 + 0x40) = 0x41a0000000000000;
            FUN_1000200a0(lVar6);
          }
        }
        else if (iVar7 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
          FUN_10064e72c(0x41a00000,lVar6,0,lVar4,2);
          FUN_10064e72c(0,lVar6,3,lVar4,3);
          lVar4 = lVar6;
        }
        else {
          FUN_10064e72c(0x41a00000,lVar6,3,lVar5,1);
          FUN_10064e72c(0,lVar6,0,lVar5,0);
        }
        iVar7 = iVar7 + 1;
        FUN_1006557ec(lVar1);
        lVar5 = lVar6;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x148));
  }
  *(int *)(param_1 + 0x7c8) = iVar7;
  lVar4 = param_1 + 0x338;
  FUN_10064e47c(0x43960000,0x43960000,lVar4);
  lVar5 = param_1 + 0x248;
  FUN_10064e47c(0x43480000,0x43960000,lVar5);
  fVar9 = (float)FUN_100652e60(lVar4);
  fVar12 = -100.0;
  fVar10 = (float)FUN_100652e60(lVar4);
  fVar10 = (fVar9 * 0.5 + -100.0) / fVar10;
  *(ulong *)(param_1 + 0x430) = CONCAT44(fVar10,fVar10);
  *(ulong *)(param_1 + 0x428) = CONCAT44(fVar10,fVar10);
  FUN_10064e3cc(lVar1);
  fVar9 = fVar12;
  FUN_100652e60(lVar4);
  if (fVar12 <= fVar9) {
    fVar12 = fVar9;
  }
  lVar6 = param_1 + 0x440;
  FUN_100651184(lVar6);
  *(float *)(param_1 + 0x7c4) = fVar9 + 40.0 + fVar12;
  lVar2 = param_1 + 0x6c8;
  fVar12 = *(float *)(param_1 + 0x7c0);
  uVar11 = 0x3f4ccccd;
  FUN_10064e3cc(lVar1);
  FUN_10064e47c(fVar12 * 0.8,lVar2);
  local_88 = FUN_10064e3cc(lVar2);
  uStack_84 = uVar11;
  FUN_10064e48c(param_1 + 0x158,&local_88);
  FUN_10064e48c(param_1,param_1 + 0x7c0);
  FUN_10064e5ec(0x41a00000,0,lVar6,0,param_1,0);
  FUN_10064e5ec(0,0x41a00000,lVar5,0,lVar6,3);
  FUN_10064e5ec(0,0,lVar4,8,lVar5,8);
  FUN_10064e5ec(0,0,lVar1,0,lVar2,0);
  FUN_10064e72c(0x41200000,lVar2,3,lVar5,1);
  FUN_10064e72c(0,lVar2,0,lVar5,0);
  return;
}




void FUN_1002d7774(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_10032bb84();
  plVar2 = (long *)*plVar2;
  lVar4 = *plVar2;
  while (lVar4 != 0) {
    iVar1 = _strcmp(*(char **)(lVar4 + 0x10),(char *)**(undefined8 **)(param_1 + 0x7a0));
    if (((iVar1 == 0) && (iVar1 = FUN_100331584(*plVar2), iVar1 != 0)) &&
       (*(int *)(*plVar2 + 0x20) != 0)) {
      uVar3 = FUN_10032834c();
      iVar1 = FUN_100328708(uVar3,*plVar2);
      if (iVar1 != 0) {
        FUN_1002d77f0(param_1,*plVar2);
      }
    }
    plVar2 = plVar2 + 1;
    lVar4 = *plVar2;
  }
  return;
}




void FUN_1002d77f0(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long local_28;
  
  pvVar1 = operator_new(0x58);
  local_28 = thunk_FUN_100207434(pvVar1,param_2);
  FUN_1002d785c(param_1 + 0x29,&local_28);
  FUN_100655930(param_1 + 0xae,*(undefined8 *)(local_28 + 8),1);
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002d785c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002d79bc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002d78dc(long *param_1)

{
  undefined1 auStack_40 [32];
  
  (**(code **)(*param_1 + 0x138))();
  FUN_100644aec(auStack_40,DAT_101e454b0,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002d7930(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1002d793c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void thunk_FUN_1002d7774(void)

{
  FUN_1002d7774();
  return;
}




void FUN_1002d79bc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002d7a38(void)

{
  DAT_101e45328 = 0xff;
  DAT_101e4532a = 0xffff;
  DAT_101e4532c = 0xffff;
  DAT_101e4532e = 0xffbc9c44;
  DAT_101e45332 = 0xff1166f2;
  DAT_101e45336 = 0xffe0e0e0;
  DAT_101e4533a = 0xffa0a0a0;
  DAT_101e4533e = 0xff8c8c8c;
  DAT_101e45342 = 0xff322213;
  DAT_101e45346 = 0xff091911;
  DAT_101e4534a = 0xff170c19;
  DAT_101e4534e = 0xff241a14;
  DAT_101e45352 = 0xff14171c;
  DAT_101e45356 = 0xff221911;
  DAT_101e4535a = 0xff1a1416;
  DAT_101e4535e = 0xff121414;
  DAT_101e45362 = 0xff1a1809;
  DAT_101e45366 = 0xff141414;
  DAT_101e4536a = 0xff141414;
  DAT_101e4536e = 0xff2929c0;
  DAT_101e45372 = 0xff283082;
  DAT_101e45376 = 0xff5262cc;
  DAT_101e4537a = 0xff283082;
  DAT_101e4537e = 0xff5262cc;
  DAT_101e45382 = 0xff745c42;
  DAT_101e45386 = 0xff184155;
  DAT_101e4538a = 0xff92665e;
  DAT_101e4538e = 0xffbc9c44;
  DAT_101e45392 = 0xffbbae56;
  DAT_101e45396 = 0xff8b7b01;
  DAT_101e4539a = 0xff90b3ef;
  DAT_101e4539e = 0xff728ebe;
  DAT_101e453a2 = 0xff19459d;
  DAT_101e453a6 = 0xff9d877b;
  DAT_101e453aa = 0xffcbb1a3;
  DAT_101e453ae = 0xff3f6fb5;
  DAT_101e453b2 = 0xffc5c5c5;
  DAT_101e453b6 = 0xff4fc1f1;
  DAT_101e453ba = 0xff606060;
  DAT_101e453be = 0xffc5ff7b;
  DAT_101e453c2 = 0xff5271eb;
  DAT_101e453c6 = 0xfffae076;
  DAT_101e453ca = 0xff3ac8f6;
  DAT_101e453ce = 0xffaaaaaa;
  DAT_101e453d2 = 0xffe19400;
  DAT_101e453d6 = 0xffe19400;
  DAT_101e453da = 0xffe550b2;
  DAT_101e453de = 0xfff22ae8;
  DAT_101e453e2 = 0xff005ae1;
  DAT_101e453e6 = 0xff1addfa;
  DAT_101e453ea = 0xff2424b3;
  DAT_101e453ee = 0xff2424b3;
  DAT_101e453f2 = 0xff646464;
  DAT_101e453f6 = 0xff92665e;
  DAT_101e453fa = 0xff646037;
  DAT_101e45404 = 0xff1111a1;
  DAT_101e4540c = 0xffc8c8c8;
  DAT_101e45408 = 0xff321ee1;
  DAT_101e45410 = 0xff321ee1;
  DAT_101e4541c = 0xff6259b3;
  DAT_101e45420 = 0xff506e73;
  DAT_101e45400 = 0xffffffff;
  DAT_101e45424 = 0xff9dbf86;
  DAT_101e45414 = 0xff7fe801;
  DAT_101e45428 = 0xffa35244;
  DAT_101e45418 = 0xffffffff;
  DAT_101e4542c = 0xffca828e;
  DAT_101e45430 = 0xffa6a6a6;
  DAT_101e45434 = 0xffa6a6a6;
  DAT_101e45438 = 0xffffffff;
  DAT_101e4543c = 0xff88ea2f;
  DAT_101e45440 = 0xff8c8c8c;
  DAT_101e45444 = 0xffffb400;
  DAT_101e45448 = 0xffff00ff;
  DAT_101e4544c = 0xff00aded;
  DAT_101e45450 = 0xff33d3ff;
  DAT_101e45454 = 0xff7fe801;
  DAT_101e45458 = 0xff282828;
  DAT_101e4545c = 0xfff0f0f0;
  DAT_101e45460 = 0xffa4781e;
  DAT_101e45464 = 0xffa6654b;
  DAT_101e45468 = 0xff93435b;
  DAT_101e4546c = 0xff387f9c;
  DAT_101e45470 = 0xffa3781e;
  DAT_101e45474 = 0xffffd18a;
  DAT_101e45478 = 0xffff61f7;
  DAT_101e4547c = 0xff5de1f2;
  DAT_101e45480 = 0xff80eaff;
  DAT_101e45484 = 0xff32e00e;
  DAT_101e45488 = 0xff5a3c10;
  DAT_101e4548c = 0xff330b03;
  DAT_101e45490 = 0xff33031d;
  DAT_101e45494 = 0xff032433;
  DAT_101e45498 = 0xff9e8e8d;
  DAT_101e454a0 = 0x4326000041900000;
  DAT_101e454a8 = 0x4326000041c00000;
  DAT_101e454b0 = FUN_100644a94("UI::EVENT_UPDATE_BLUEPRINT_LAYER");
  return;
}




long * FUN_1002d8130(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 local_48 [2];
  
  puVar3 = (undefined8 *)FUN_10064f204();
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  *puVar3 = &PTR_thunk_FUN_1002d87cc_101488b80;
  puVar3[0x2b] = 0;
  puVar3 = puVar3 + 0x2c;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x4a;
  FUN_100653838(plVar1);
  plVar2 = param_1 + 0x6b;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_100655644(param_1 + 0x91);
  *(undefined4 *)((long)param_1 + 0x5e3) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x91,1);
  FUN_100652cac(puVar3,PTR_s_build___InventoryCommon_atlas_10184e108,
                "inventory_hero_portrait_frame_standard");
  local_48[0] = 0xffb6acaa;
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,local_48);
  return param_1;
}




long * thunk_FUN_1002d8130(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 auStack_48 [2];
  
  puVar3 = (undefined8 *)FUN_10064f204();
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  *puVar3 = &PTR_thunk_FUN_1002d87cc_101488b80;
  puVar3[0x2b] = 0;
  puVar3 = puVar3 + 0x2c;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x4a;
  FUN_100653838(plVar1);
  plVar2 = param_1 + 0x6b;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_100655644(param_1 + 0x91);
  *(undefined4 *)((long)param_1 + 0x5e3) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x91,1);
  FUN_100652cac(puVar3,PTR_s_build___InventoryCommon_atlas_10184e108,
                "inventory_hero_portrait_frame_standard");
  auStack_48[0] = 0xffb6acaa;
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,auStack_48);
  return param_1;
}




void FUN_1002d8258(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d2698(auStack_58,"portrait_%s");
  FUN_100652d8c(param_1 + 0x250);
  FUN_1001e34dc(param_1 + 0x250,auStack_58);
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x18),0);
  FUN_1006513c0(param_1 + 0x358,uVar1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1002d8300(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x5e0) = param_1;
  return;
}




void FUN_1002d8308(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x5e0),0x43fa0000);
  local_8c = 0x439240f0;
  local_90 = 0x43480000;
  fVar11 = 46.253662;
  lVar1 = param_1 + 0x160;
  local_88 = local_8c;
  uStack_84 = local_8c;
  FUN_10064e48c(lVar1,&local_90);
  lVar2 = param_1 + 0x250;
  FUN_10064e48c(lVar2,&local_88);
  *(undefined8 *)(param_1 + 0x348) = 0x3e21ec5d3e21ec5d;
  *(undefined8 *)(param_1 + 0x340) = 0x3e21ec5d3e21ec5d;
  fVar10 = (float)FUN_10064eb7c(lVar1,5,param_1,5);
  if (*(int *)(param_1 + 0x150) != 0) {
    uVar9 = 0;
    uVar5 = 0;
    fVar11 = -0.29268292;
    puVar8 = *(undefined8 **)(param_1 + 0x158);
    do {
      uVar6 = *puVar8;
      FUN_1002d9040(0x43c30000,uVar6);
      FUN_1002d90c8(uVar6);
      if (puVar8 == *(undefined8 **)(param_1 + 0x158)) {
LAB_1002d8490:
        uVar9 = 1;
        uVar5 = uVar6;
      }
      else {
        if ((uint)(int)(fVar10 * 0.0024390244 + -0.29268292) <= uVar9) {
          FUN_10064e72c(0x41a00000,uVar6,0,uVar5,2);
          FUN_10064e72c(0,uVar6,3,uVar5,3);
          goto LAB_1002d8490;
        }
        uVar9 = uVar9 + 1;
        uVar7 = puVar8[-1];
        FUN_10064e72c(0x41a00000,uVar6,3,uVar7,1);
        FUN_10064e72c(0,uVar6,0,uVar7,0);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != (undefined8 *)
                       (*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x150) * 8));
  }
  lVar3 = param_1 + 0x488;
  FUN_1006557ec(lVar3);
  uVar12 = *(undefined4 *)(param_1 + 0x5e0);
  FUN_10064e3cc(lVar3);
  fVar10 = fVar11;
  FUN_100652e60(lVar2);
  if (fVar11 <= fVar10) {
    fVar11 = fVar10;
  }
  lVar4 = param_1 + 0x358;
  FUN_100651184(lVar4);
  FUN_10064e47c(uVar12,fVar11 + fVar10 + 100.0,param_1);
  FUN_10064e5ec(0x41200000,0x41200000,lVar4,0,param_1,0);
  FUN_10064e5ec(0,0x41a00000,lVar1,0,lVar4,3);
  FUN_10064e5ec(0,0,lVar2,8,lVar1,8);
  FUN_10064e72c(0x42200000,lVar3,3,lVar1,1);
  FUN_10064e72c(0,lVar3,0,lVar1,0);
  return;
}




void FUN_1002d85b0(long param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  FUN_100655930(param_1 + 0x488,param_2,1);
  local_28 = param_2;
  FUN_1002d85f4(param_1 + 0x150,&local_28);
  return;
}




void FUN_1002d85f4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002d889c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002d8674(long param_1)

{
  *(undefined1 *)(param_1 + 0x5e4) = 1;
  return;
}




void FUN_1002d8680(long param_1)

{
  if ((*(char *)(param_1 + 0x5e6) != '\0') && (*(char *)(param_1 + 0x5e4) != '\0')) {
    FUN_1002d86b8(param_1);
    *(undefined1 *)(param_1 + 0x5e6) = 0;
  }
  return;
}




void FUN_1002d86b8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_10064ee6c();
  if (*(byte *)(param_1 + 0x5e5) != uVar1) {
    if (uVar1 == 0) {
      if (*(int *)(param_1 + 0x150) != 0) {
        puVar3 = *(undefined8 **)(param_1 + 0x158);
        do {
          puVar2 = puVar3 + 1;
          FUN_1002d9048(*puVar3);
          puVar3 = puVar2;
        } while (puVar2 != (undefined8 *)
                           (*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x150) * 8));
      }
    }
    else if (*(int *)(param_1 + 0x150) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x158);
      do {
        puVar2 = puVar3 + 1;
        FUN_1002d9084(*puVar3);
        puVar3 = puVar2;
      } while (puVar2 != (undefined8 *)
                         (*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x150) * 8));
    }
    *(char *)(param_1 + 0x5e5) = (char)uVar1;
  }
  return;
}




void FUN_1002d8748(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x150) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x158);
    do {
      puVar2 = puVar1 + 1;
      FUN_1002d9084(*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x150) * 8));
  }
  return;
}




void FUN_1002d878c(long param_1)

{
  FUN_100643064();
  *(undefined1 *)(param_1 + 0x5e6) = 1;
  return;
}




void thunk_FUN_1002d87cc(void)

{
  FUN_1002d87cc();
  return;
}




void FUN_1002d87b8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002d87cc();
  operator_delete(pvVar1);
  return;
}




void FUN_1002d87cc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002d87cc_101488b80;
  param_1[0x91] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xa8);
  FUN_10064e2bc(param_1 + 0x91);
  thunk_FUN_100651068(param_1 + 0x6b);
  param_1[0x4a] = &PTR_FUN_1014a7108;
  param_1[0x61] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 100);
  FUN_10064e2bc(param_1 + 0x4a);
  param_1[0x2c] = &PTR_FUN_1014a7108;
  param_1[0x43] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x46);
  FUN_10064e2bc(param_1 + 0x2c);
  if ((void *)param_1[0x2b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2b]);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002d889c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_1002d8918(long *param_1)

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
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_1001b4648();
  puVar11[0x4d] = 0;
  *puVar11 = &PTR_thunk_FUN_1002d9368_101488cd0;
  puVar11 = puVar11 + 0x4e;
  thunk_FUN_100655644(puVar11);
  plVar1 = param_1 + 0x79;
  thunk_FUN_10064f204(plVar1);
  plVar2 = param_1 + 0xa2;
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_100652c08(param_1 + 0xc0);
  plVar3 = param_1 + 0xde;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xfc;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x11a;
  FUN_1006421a8(plVar5);
  param_1[0x11a] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar6 = param_1 + 299;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x151;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_1 + 0x17c;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x19a;
  thunk_FUN_100650e64(plVar9);
  param_1[0x1c0] = 0;
  *(undefined2 *)(param_1 + 0x1c1) = 0;
  param_1[0x1c2] = 0;
  *(undefined4 *)(param_1 + 0x1c3) = 0x43b40000;
  *(undefined4 *)((long)param_1 + 0xe1c) = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100655930(puVar11,plVar1,1);
  FUN_10064f31c(plVar1,plVar2,1);
  FUN_10064f31c(plVar1,param_1 + 0xc0,1);
  FUN_10064f31c(plVar1,plVar3,1);
  FUN_10064f31c(plVar1,plVar4,1);
  FUN_100655930(puVar11,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,plVar7,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar10 = *(uint *)((long)param_1 + 0x774);
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x774) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  uVar12 = FUN_1004e0150("MENU_MARKET_CTA_OWNED",0);
  FUN_1006513c0(plVar6,uVar12);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar9,&DAT_10115a168);
  FUN_100652ca4(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"crafting_blueprint_corner");
  *(uint *)((long)param_1 + 0x864) = *(uint *)((long)param_1 + 0x864) & 0xfffffffb;
  FUN_10064e47c(0x431e0000,0x42e60000,plVar4);
  local_68 = DAT_101d91884;
  local_90 = FUN_1002d8c24;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  FUN_1001b4964(param_1,1);
  return param_1;
}




void FUN_1002d8c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002d8c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x268))();
  return;
}




long * thunk_FUN_1002d8918(long *param_1)

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
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar11 = (undefined8 *)FUN_1001b4648();
  puVar11[0x4d] = 0;
  *puVar11 = &PTR_thunk_FUN_1002d9368_101488cd0;
  puVar11 = puVar11 + 0x4e;
  thunk_FUN_100655644(puVar11);
  plVar1 = param_1 + 0x79;
  thunk_FUN_10064f204(plVar1);
  plVar2 = param_1 + 0xa2;
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_100652c08(param_1 + 0xc0);
  plVar3 = param_1 + 0xde;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xfc;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x11a;
  FUN_1006421a8(plVar5);
  param_1[0x11a] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar6 = param_1 + 299;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x151;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_1 + 0x17c;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x19a;
  thunk_FUN_100650e64(plVar9);
  param_1[0x1c0] = 0;
  *(undefined2 *)(param_1 + 0x1c1) = 0;
  param_1[0x1c2] = 0;
  *(undefined4 *)(param_1 + 0x1c3) = 0x43b40000;
  *(undefined4 *)((long)param_1 + 0xe1c) = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100655930(puVar11,plVar1,1);
  FUN_10064f31c(plVar1,plVar2,1);
  FUN_10064f31c(plVar1,param_1 + 0xc0,1);
  FUN_10064f31c(plVar1,plVar3,1);
  FUN_10064f31c(plVar1,plVar4,1);
  FUN_100655930(puVar11,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,plVar7,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar10 = *(uint *)((long)param_1 + 0x774);
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x774) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  uVar12 = FUN_1004e0150("MENU_MARKET_CTA_OWNED",0);
  FUN_1006513c0(plVar6,uVar12);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar9,&DAT_10115a168);
  FUN_100652ca4(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"crafting_blueprint_corner");
  *(uint *)((long)param_1 + 0x864) = *(uint *)((long)param_1 + 0x864) & 0xfffffffb;
  FUN_10064e47c(0x431e0000,0x42e60000,plVar4);
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002d8c24;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  FUN_1001b4964(param_1,1);
  return param_1;
}




void FUN_1002d8c38(long param_1,long param_2,undefined1 param_3)

{
  int iVar1;
  
  *(long *)(param_1 + 0xe00) = param_2;
  *(undefined1 *)(param_1 + 0xe08) = param_3;
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xe09) = 1;
  }
  FUN_1000ecb68(*(undefined8 *)(param_1 + 0xe00),param_1 + 0xe1c);
  FUN_100652dd4(param_1 + 0x510,&DAT_10115a164,2);
  if (*(long *)(param_1 + 0x6d0) != 0) {
    FUN_100652d8c(param_1 + 0x600);
  }
  *(undefined8 *)(param_1 + 0xe10) = *(undefined8 *)(param_2 + 0x28);
  FUN_1002d8cac(param_1);
  return;
}




void FUN_1002d8cac(long param_1)

{
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  char *pcVar15;
  uint local_88;
  undefined4 uStack_84;
  size_t local_80;
  byte local_71;
  int local_70;
  int local_68;
  
  *(uint *)(param_1 + 0x954) =
       *(uint *)(param_1 + 0x954) & 0xfffffffb | (uint)*(byte *)(param_1 + 0xe08) << 2;
  bVar5 = *(char *)(param_1 + 0xe09) == '\0';
  bVar4 = !bVar5;
  if (*(byte *)(param_1 + 0xe08) != 0) {
    bVar4 = bVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x684);
  uVar11 = 0xff;
  uVar14 = uVar11;
  if (!bVar4) {
    uVar14 = 0xb2;
  }
  if (uVar14 != (uVar2 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x684) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar14 << 7;
    FUN_1000200a0(param_1 + 0x600);
  }
  FUN_100652e14(0x3f800000,param_1 + 0x600);
  uVar14 = *(uint *)(param_1 + 0x594);
  if (!bVar4) {
    uVar11 = 0x4c;
  }
  if (uVar11 != (uVar14 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x594) = uVar14 & 0xffff8000 | uVar14 & 0x7f | uVar11 << 7;
    FUN_1000200a0(param_1 + 0x510);
  }
  uVar14 = 0;
  if (!bVar4) {
    uVar14 = 4;
  }
  *(uint *)(param_1 + 0x774) = *(uint *)(param_1 + 0x774) & 0xfffffffb | uVar14;
  if ((*(char *)(param_1 + 0xe08) == '\0') ||
     (*(undefined8 **)(param_1 + 0xe00) == (undefined8 *)0x0)) goto LAB_1002d8e5c;
  FUN_10001549c(&local_88,**(undefined8 **)(param_1 + 0xe00));
  lVar7 = FUN_10032c624(&local_88);
  if ((char)local_71 < '\0') {
    operator_delete((void *)CONCAT44(uStack_84,local_88));
  }
  if (lVar7 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xe09) == '\0') {
    iVar6 = FUN_10032c944(lVar7);
    if (iVar6 == 0) {
      FUN_10032c3d4(&local_88,lVar7);
      uVar10 = (ulong)local_71;
      uVar14 = (uint)(char)local_71;
      if (-1 < (int)uVar14) {
        local_80 = uVar10;
      }
      sVar1 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar1 = (ulong)DAT_101d911a8._7_1_;
      }
      if (local_80 == sVar1) {
        puVar9 = (uint *)CONCAT44(uStack_84,local_88);
        if (-1 < (int)uVar14) {
          puVar9 = &local_88;
        }
        pbVar13 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar13 = (byte *)&DAT_101d91198;
        }
        if ((int)uVar14 < 0) {
          if ((local_80 != 0) && (iVar6 = _memcmp(puVar9,pbVar13,local_80), iVar6 != 0))
          goto LAB_1002d8f28;
        }
        else if (local_80 != 0) {
          if ((uint)*pbVar13 == (local_88 & 0xff)) {
            pbVar12 = (byte *)((ulong)&local_88 | 1);
            do {
              uVar10 = uVar10 - 1;
              pbVar13 = pbVar13 + 1;
              if (uVar10 == 0) goto LAB_1002d8f64;
              bVar3 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar3 == *pbVar13);
          }
          goto LAB_1002d8f28;
        }
LAB_1002d8f64:
        *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) & 0xfffffffb;
        *(uint *)(param_1 + 0xc64) = *(uint *)(param_1 + 0xc64) & 0xfffffffb;
        *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) & 0xfffffffb;
      }
      else {
LAB_1002d8f28:
        *(uint *)(param_1 + 0xc64) = *(uint *)(param_1 + 0xc64) | 4;
        *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) | 4;
        if (((DAT_101e454c8 & 1) == 0) && (iVar6 = ___cxa_guard_acquire(&DAT_101e454c8), iVar6 != 0)
           ) {
          FUN_1004e313c(&DAT_101e454b8);
          ___cxa_atexit(FUN_100046198,&DAT_101e454b8,0x100000000);
          ___cxa_guard_release(&DAT_101e454c8);
        }
        if (local_70 == 0) {
          if (local_68 != 0) {
            pcVar15 = "opal_icon_small";
            goto LAB_1002d8f9c;
          }
        }
        else {
          pcVar15 = "ice_icon_small";
LAB_1002d8f9c:
          FUN_1004e38ac(&DAT_101e454b8,"%d");
          FUN_1006513c0(param_1 + 0xcd0,&DAT_101e454b8);
          FUN_100652cdc(param_1 + 0xbe0,pcVar15);
        }
        *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) & 0xfffffffb;
        uVar14 = (uint)local_71;
      }
      if ((uVar14 >> 7 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_84,local_88));
      }
      goto LAB_1002d8e5c;
    }
    *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) | 4;
    uVar8 = FUN_1004e0150("MENU_SKINS_HUB_COMING_SOON_LABEL",0);
    FUN_1006513c0(param_1 + 0x958,uVar8);
    puVar9 = (uint *)(param_1 + 0xe1c);
  }
  else {
    *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) | 4;
    uVar8 = FUN_1004e0150("MENU_MARKET_CTA_OWNED",0);
    FUN_1006513c0(param_1 + 0x958,uVar8);
    local_88 = 0xffa0a0a0;
    puVar9 = &local_88;
  }
  FUN_100651460(param_1 + 0x958,puVar9);
  *(uint *)(param_1 + 0xc64) = *(uint *)(param_1 + 0xc64) & 0xfffffffb;
  *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) & 0xfffffffb;
LAB_1002d8e5c:
  FUN_1002d90c8(param_1);
  return;
}




void FUN_1002d9040(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xe18) = param_1;
  return;
}




void FUN_1002d9048(long param_1)

{
  if (*(long *)(param_1 + 0x6d0) != 0) {
    FUN_100652d8c(param_1 + 0x600);
  }
  FUN_100652dd4(param_1 + 0x510,&DAT_10115a164,2);
  return;
}




void FUN_1002d9084(long param_1)

{
  if (*(long *)(param_1 + 0x6d0) == 0) {
    FUN_1001e355c(param_1 + 0x600,*(undefined8 *)(param_1 + 0xe10));
  }
  FUN_100652dd4(param_1 + 0x510,param_1 + 0xe1c,2);
  FUN_1002d90c8(param_1);
  return;
}




void FUN_1002d90c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  
  lVar1 = param_1 + 0x600;
  *(uint *)(param_1 + 0x684) = *(uint *)(param_1 + 0x684) & 0xffffffbf;
  fVar5 = *(float *)(param_1 + 0xe18) / 1.3333;
  FUN_10064e47c(*(float *)(param_1 + 0xe18),fVar5,param_1 + 0x3c8);
  local_58 = *(float *)(param_1 + 0xe18);
  local_60 = local_58 + -6.0;
  fStack_5c = fVar5 + -6.0;
  fStack_54 = fVar5;
  fVar5 = fStack_5c;
  FUN_10064e48c(lVar1,&local_60);
  local_60 = (float)FUN_100652e60(lVar1);
  fStack_5c = fVar5;
  FUN_10064e48c(param_1 + 0x6f0,&local_60);
  lVar2 = param_1 + 0x510;
  FUN_10064e48c(lVar2,&local_58);
  FUN_10064e5ec(0,0,lVar2,8,param_1 + 0x3c8,8);
  FUN_10064e5ec(0,0,lVar1,8,lVar2,8);
  FUN_10064e5ec(0,0,param_1 + 0x6f0,8,lVar1,8);
  uVar4 = 0;
  FUN_10064e5ec(0,param_1 + 0x7e0,3,lVar1,3);
  *(uint *)(param_1 + 0x954) =
       *(uint *)(param_1 + 0x954) & 0xffffffbf | (uint)*(byte *)(param_1 + 0xe08) << 6;
  if (*(byte *)(param_1 + 0xe08) != 0) {
    lVar1 = param_1 + 0x958;
    FUN_10064e72c(0x41400000,lVar1,0,lVar2,2);
    FUN_10064e72c(0,lVar1,4,lVar2,4);
    FUN_10064e72c(0xc0c00000,param_1 + 0xbe0,1,param_1 + 0xcd0,3);
    FUN_10064e72c(0,param_1 + 0xbe0,5,param_1 + 0xcd0,5);
    lVar3 = param_1 + 0xa88;
    FUN_1006557ec(lVar3);
    FUN_10064e72c(0,lVar3,4,lVar2,4);
    FUN_10064e72c(0,lVar3,5,lVar1,5);
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) & 0xffffffbf;
  }
  FUN_1006557ec(param_1 + 0x270);
  local_60 = (float)FUN_10064e3cc(param_1 + 0x270);
  fStack_5c = (float)uVar4;
  FUN_10064e48c(param_1,&local_60);
  return;
}




void FUN_1002d92e8(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_100131560();
  if (((uVar1 & 1) == 0) && (*(byte *)(param_1 + 0xe09) != param_2)) {
    *(char *)(param_1 + 0xe09) = (char)param_2;
    FUN_1002d8cac(param_1);
    return;
  }
  return;
}




void FUN_1002d9330(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x864) = *(uint *)(param_1 + 0x864) & 0xfffffffb | uVar1;
  return;
}




void thunk_FUN_1002d9368(void)

{
  FUN_1002d9368();
  return;
}




void FUN_1002d9354(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002d9368();
  operator_delete(pvVar1);
  return;
}




void FUN_1002d9368(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002d9368_101488cd0;
  thunk_FUN_100651068(param_1 + 0x19a);
  param_1[0x17c] = &PTR_FUN_1014a7108;
  param_1[0x193] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x196);
  FUN_10064e2bc(param_1 + 0x17c);
  param_1[0x151] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x168);
  FUN_10064e2bc(param_1 + 0x151);
  thunk_FUN_100651068(param_1 + 299);
  FUN_10064221c(param_1 + 0x11a);
  param_1[0xfc] = &PTR_FUN_1014a7108;
  param_1[0x113] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x116);
  FUN_10064e2bc(param_1 + 0xfc);
  param_1[0xde] = &PTR_FUN_1014a7108;
  param_1[0xf5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf8);
  FUN_10064e2bc(param_1 + 0xde);
  param_1[0xc0] = &PTR_FUN_1014a7108;
  param_1[0xd7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xda);
  FUN_10064e2bc(param_1 + 0xc0);
  param_1[0xa2] = &PTR_FUN_1014a7108;
  param_1[0xb9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbc);
  FUN_10064e2bc(param_1 + 0xa2);
  param_1[0x79] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x90);
  FUN_10064e2bc(param_1 + 0x79);
  param_1[0x4e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x65);
  FUN_10064e2bc(param_1 + 0x4e);
  FUN_10003bec8(param_1);
  return;
}




void FUN_1002d94b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *puVar1 = &PTR_FUN_101488e50;
  puVar1[0x1b] = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0x447a0000;
  *(undefined1 *)((long)puVar1 + 0xe4) = 0;
  return;
}




void FUN_1002d94ec(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xe4) = param_2;
  return;
}




void FUN_1002d94f4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xe0) = param_1;
  return;
}




void FUN_1002d94fc(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0xd8);
    do {
      plVar1 = (long *)*puVar2;
      FUN_1002d8300(*(undefined4 *)(param_1 + 0xe0),plVar1);
      (**(code **)(*plVar1 + 0x138))(plVar1);
      if (puVar2 == *(undefined8 **)(param_1 + 0xd8)) {
        FUN_10064e5ec(0,0,plVar1,0,param_1,0);
      }
      else {
        FUN_10064e72c(0,plVar1,0,puVar2[-1],2);
      }
      FUN_1002d8674(plVar1);
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0xd8) + (ulong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}




void FUN_1002d95b0(long *param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  local_28 = param_2;
  FUN_1002d95f8(param_1 + 0x1a,&local_28);
  return;
}




void FUN_1002d95f8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002d9724(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002d9678(long param_1)

{
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  return;
}




void FUN_1002d9688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002d9694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 200))();
  return;
}




void FUN_1002d9698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002d96a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 8))();
  return;
}




void FUN_1002d96a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101488e50;
  if ((void *)param_1[0x1b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b]);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002d96e4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101488e50;
  if ((void *)param_1[0x1b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b]);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002d9724(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_1002d97a0(long *param_1)

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
  undefined8 *puVar10;
  long lVar11;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar10 = (undefined8 *)FUN_10064f204();
  puVar10[0x29] = 0;
  puVar10[0x2a] = 0;
  *puVar10 = &PTR_thunk_FUN_1002d9b9c_101488fb8;
  puVar10 = puVar10 + 0x2b;
  thunk_FUN_1006543ec(puVar10);
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x7d;
  thunk_FUN_1006543ec(plVar1);
  plVar2 = param_1 + 0xb1;
  thunk_FUN_1005357f4(plVar2);
  plVar3 = param_1 + 0x1f6;
  thunk_FUN_100531dc0(plVar3);
  plVar4 = param_1 + 0x224;
  thunk_FUN_10019c2fc(plVar4);
  thunk_FUN_10064f204();
  plVar5 = param_1 + 0x2da;
  thunk_FUN_1006543ec(plVar5);
  plVar6 = param_1 + 0x30e;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x32c;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x34a;
  thunk_FUN_1001b4d10(plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100534ad8(plVar2,param_1 + 0x2b1,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(puVar10,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,plVar8,1);
  FUN_100642bd8(plVar5,plVar7,1);
  FUN_100654488(puVar10,1);
  FUN_100652cac(param_1 + 0x5f,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(param_1 + 0x5f,&DAT_10115a164,2);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x18f4);
  if ((uVar9 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x18f4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar6);
  }
  FUN_1001b66dc(0x3f800000,plVar8,"white_background","white_background");
  FUN_1001b5d78(plVar8,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  *(undefined1 *)((long)param_1 + 0x2d64) = 1;
  FUN_1001b6758(plVar8,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_1001b5e00(0x44960000,0x42700000,plVar8,0,100,0,1);
  FUN_1001b676c(plVar8);
  FUN_100652cac(plVar7,PTR_s_build___Frames_tga_101854a00,"frame_skin_icon");
  if ((*(float *)(param_1 + 0x335) != 2.5) || (*(float *)((long)param_1 + 0x19ac) != 2.5)) {
    lVar11 = NEON_fmov(0x40200000,4);
    param_1[0x335] = lVar11;
    FUN_1000200a0(plVar7);
  }
  FUN_100654488(plVar1,1);
  FUN_1005360e4(plVar2,0);
  local_90 = (code *)CONCAT71(local_90._1_7_,9);
  FUN_100534ebc(plVar2,&local_90);
  local_68 = DAT_101d918b8;
  local_90 = FUN_1002d9b64;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb2,&local_90);
  FUN_10017db14(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  local_68 = FUN_100644a94("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
  local_90 = FUN_1002d9b6c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1f7,&local_90);
  FUN_100532130(plVar3,plVar4);
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xfffffffb;
  return param_1;
}




void FUN_1002d9b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002da2c4(param_1,param_4);
  return;
}




void FUN_1002d9b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_1002d9e70(param_1,uVar1);
  return;
}




long * thunk_FUN_1002d97a0(long *param_1)

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
  undefined8 *puVar10;
  long lVar11;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar10 = (undefined8 *)FUN_10064f204();
  puVar10[0x29] = 0;
  puVar10[0x2a] = 0;
  *puVar10 = &PTR_thunk_FUN_1002d9b9c_101488fb8;
  puVar10 = puVar10 + 0x2b;
  thunk_FUN_1006543ec(puVar10);
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x7d;
  thunk_FUN_1006543ec(plVar1);
  plVar2 = param_1 + 0xb1;
  thunk_FUN_1005357f4(plVar2);
  plVar3 = param_1 + 0x1f6;
  thunk_FUN_100531dc0(plVar3);
  plVar4 = param_1 + 0x224;
  thunk_FUN_10019c2fc(plVar4);
  thunk_FUN_10064f204();
  plVar5 = param_1 + 0x2da;
  thunk_FUN_1006543ec(plVar5);
  plVar6 = param_1 + 0x30e;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x32c;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x34a;
  thunk_FUN_1001b4d10(plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100534ad8(plVar2,param_1 + 0x2b1,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(puVar10,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,plVar8,1);
  FUN_100642bd8(plVar5,plVar7,1);
  FUN_100654488(puVar10,1);
  FUN_100652cac(param_1 + 0x5f,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(param_1 + 0x5f,&DAT_10115a164,2);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x18f4);
  if ((uVar9 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x18f4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar6);
  }
  FUN_1001b66dc(0x3f800000,plVar8,"white_background","white_background");
  FUN_1001b5d78(plVar8,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  *(undefined1 *)((long)param_1 + 0x2d64) = 1;
  FUN_1001b6758(plVar8,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_1001b5e00(0x44960000,0x42700000,plVar8,0,100,0,1);
  FUN_1001b676c(plVar8);
  FUN_100652cac(plVar7,PTR_s_build___Frames_tga_101854a00,"frame_skin_icon");
  if ((*(float *)(param_1 + 0x335) != 2.5) || (*(float *)((long)param_1 + 0x19ac) != 2.5)) {
    lVar11 = NEON_fmov(0x40200000,4);
    param_1[0x335] = lVar11;
    FUN_1000200a0(plVar7);
  }
  FUN_100654488(plVar1,1);
  FUN_1005360e4(plVar2,0);
  pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,9);
  FUN_100534ebc(plVar2,&pcStack_90);
  uStack_68 = DAT_101d918b8;
  pcStack_90 = FUN_1002d9b64;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb2,&pcStack_90);
  FUN_10017db14(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uStack_68 = FUN_100644a94("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
  pcStack_90 = FUN_1002d9b6c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1f7,&pcStack_90);
  FUN_100532130(plVar3,plVar4);
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xfffffffb;
  return param_1;
}




void FUN_1002d9b9c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002d9b9c_101488fb8;
  if (param_1[0x2a] != 0) {
    param_1[0x2a] = 0;
  }
  FUN_100196fa4(param_1 + 0x34a);
  param_1[0x32c] = &PTR_FUN_1014a7108;
  param_1[0x343] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x346);
  FUN_10064e2bc(param_1 + 0x32c);
  param_1[0x30e] = &PTR_FUN_1014a7108;
  param_1[0x325] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x328);
  FUN_10064e2bc(param_1 + 0x30e);
  FUN_10064e2bc(param_1 + 0x2da);
  param_1[0x2b1] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x2c8);
  FUN_10064e2bc(param_1 + 0x2b1);
  param_1[0x224] = &PTR_FUN_101461ed0;
  thunk_FUN_100651068(param_1 + 0x28b);
  param_1[0x26d] = &PTR_FUN_1014a7108;
  param_1[0x284] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x287);
  FUN_10064e2bc(param_1 + 0x26d);
  param_1[0x24f] = &PTR_FUN_1014a7108;
  param_1[0x266] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x269);
  FUN_10064e2bc(param_1 + 0x24f);
  param_1[0x224] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x23b);
  FUN_10064e2bc(param_1 + 0x224);
  thunk_FUN_100531f9c(param_1 + 0x1f6);
  thunk_FUN_100534a3c(param_1 + 0xb1);
  FUN_10064e2bc(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_1014a7108;
  param_1[0x76] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x79);
  FUN_10064e2bc(param_1 + 0x5f);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002d9b9c(void)

{
  FUN_1002d9b9c();
  return;
}




void FUN_1002d9d5c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002d9b9c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002d9d70(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001b5918(0x3f000000,param_1 + 0x34a,param_2,&DAT_101158ab0,&DAT_101158ab4,param_4,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x0001002d9dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002d9dc4(long *param_1)

{
  FUN_10064e47c(param_1 + 0x2b);
                    /* WARNING: Could not recover jumptable at 0x0001002d9df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002d9df4(long *param_1)

{
  (**(code **)(*param_1 + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x0001002d9e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x2a] + 0x138))(0,(long *)param_1[0x2a],1,4,1);
  return;
}




void FUN_1002d9e38(long *param_1,long param_2)

{
  param_1[0x2a] = param_2;
  FUN_100534ad8(param_1 + 0xb1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0001002d9e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002d9e70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  void *local_40;
  ushort local_32;
  
  lVar1 = param_1 + 0x588;
  FUN_100536070(lVar1);
  if ((int)param_2 == 0) {
    FUN_1002d9f54(param_1,1);
    lVar3 = FUN_100534eb4(lVar1);
    if (*(float *)(lVar3 + 0x44) != 0.0) {
      *(undefined4 *)(lVar3 + 0x44) = 0;
      FUN_1000200a0();
    }
    FUN_100536070(lVar1);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x148))();
    lVar3 = FUN_1002094e0(uVar2,param_2);
    if (lVar3 != 0) {
      FUN_10017dc84(lVar3,lVar1,param_1 + 1000);
      FUN_1002d9f54(param_1,0);
    }
  }
  local_32 = (ushort)(byte)((char)param_2 + 0x41);
  FUN_1004e3120(auStack_48,&local_32);
  FUN_10019c474(param_1 + 0x1120,auStack_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
  }
  return;
}




void FUN_1002d9f54(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 local_58;
  float fStack_54;
  
  lVar1 = param_3 + 0x16d0;
  FUN_100642324(lVar1);
  lVar2 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063fb5c(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  uVar5 = *(undefined4 *)(param_3 + 0x1710);
  fStack_54 = 0.0;
  if ((param_4 & 1) == 0) {
    FUN_10064e3cc(lVar1);
    fStack_54 = -param_2;
  }
  local_58 = uVar5;
  FUN_10063fb90(puVar4,&local_58);
  FUN_10063f0e8(0x3e19999a,puVar4);
  FUN_100642b14(lVar1,puVar4);
  return;
}




void FUN_1002da05c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_68;
  float fStack_64;
  
  lVar1 = param_3 + 0x158;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = (float)param_2;
  FUN_10064e48c(param_3 + 0x2f8,&local_68);
  lVar3 = param_3 + 0x16d0;
  FUN_10064e3cc(lVar1);
  fVar9 = 190.0;
  FUN_10064e47c(lVar3);
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x1870,&local_68);
  iVar5 = FUN_100131560();
  uVar6 = 0;
  if (iVar5 == 0) {
    uVar6 = 4;
  }
  *(uint *)(param_3 + 0x1754) = *(uint *)(param_3 + 0x1754) & 0xfffffffb | uVar6;
  lVar2 = param_3 + 1000;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar2,&local_68);
  lVar4 = param_3 + 0x1588;
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar4,&local_68);
  local_68 = FUN_10064e3cc(lVar2);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x588,&local_68);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  fVar8 = (float)FUN_10064e3cc(lVar1);
  FUN_1002d94f4(fVar8 + -80.0,uVar7);
  (**(code **)(**(long **)(param_3 + 0x150) + 0x150))();
  lVar1 = param_3 + 0x1a50;
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_10064e5ec(0,fVar9,lVar1,8,lVar3,8);
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * -0.5;
  FUN_10064e5ec(0x41a00000,fVar9,param_3 + 0x1960,5,lVar1,7);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  FUN_10064e72c(0,uVar7,0,lVar4,2);
  FUN_10064e72c(0x42a00000,uVar7,3,lVar4,3);
  lVar1 = param_3 + 0xfb0;
  FUN_10064e3cc(lVar2);
  fVar8 = fVar9;
  FUN_10064e3cc(lVar4);
  fVar8 = (fVar9 + -80.0) - fVar8;
  FUN_10064e47c(0x42480000,fVar8,lVar1);
  uVar7 = NEON_fmov(0x41f00000,4);
  *(undefined8 *)(param_3 + 0x1008) = uVar7;
  FUN_100532138(lVar1);
  FUN_10064e3cc(lVar4);
  FUN_10064e5ec(0,fVar8 + 40.0,lVar1,1,lVar2,1);
  if (*(float *)(param_3 + 0x5cc) != 0.0) {
    *(undefined4 *)(param_3 + 0x5cc) = 0;
    FUN_1000200a0(param_3 + 0x588);
  }
  return;
}




void FUN_1002da2c4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100644b2c(param_2);
  if ((iVar1 < 1) && (iVar2 = FUN_100644b2c(param_2), -1 < iVar2)) {
    return;
  }
  FUN_1002d9f54(param_1,0 < iVar1);
  return;
}




long * FUN_1002da328(long *param_1)

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
  undefined4 uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar27 = (undefined8 *)FUN_10064f204();
  puVar27[0x29] = 0;
  *puVar27 = &PTR_thunk_FUN_1002dc608_101489108;
  puVar27 = puVar27 + 0x2a;
  thunk_FUN_100651ebc();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x90;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0xae;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0xd9;
  FUN_1006421a8();
  param_1[0xd9] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0xea;
  thunk_FUN_100183160(plVar4,0);
  plVar6 = param_1 + 0x576;
  thunk_FUN_100655644(plVar6);
  plVar7 = param_1 + 0x5a1;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x60b;
  thunk_FUN_1006543ec(plVar8);
  plVar9 = param_1 + 0x63f;
  FUN_1006421a8(plVar9);
  param_1[0x63f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x650;
  thunk_FUN_100181304(plVar10,0);
  plVar11 = param_1 + 0x907;
  thunk_FUN_100650e64(plVar11);
  plVar12 = param_1 + 0x92d;
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x94b;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0x969;
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x98f;
  thunk_FUN_100182684(plVar15,0);
  plVar16 = param_1 + 0xd6b;
  thunk_FUN_100655644(plVar16);
  plVar17 = param_1 + 0xd96;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xdbc;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xdda;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0xe00;
  thunk_FUN_100655644();
  plVar20 = param_1 + 0xe2b;
  thunk_FUN_100652c08();
  plVar21 = param_1 + 0xe49;
  thunk_FUN_100655644(plVar21);
  plVar22 = param_1 + 0xe74;
  FUN_1001aa1d4();
  plVar23 = param_1 + 0xeb0;
  thunk_FUN_10064f204(plVar23);
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0xef7;
  thunk_FUN_100650e64();
  FUN_1002bdcb4();
  thunk_FUN_100652c08();
  *(undefined8 *)((long)param_1 + 0x8047) = 0;
  param_1[0x1008] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar27,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100655930(plVar2,plVar10,1);
  FUN_100655930(plVar2,plVar11,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100655930(plVar6,plVar7,1);
  FUN_100655930(plVar6,param_1 + 0x5c7,1);
  FUN_100655930(plVar6,param_1 + 0x5e5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar9,plVar13,1);
  FUN_100642bd8(plVar9,plVar12,1);
  FUN_100642bd8(plVar9,plVar14,1);
  FUN_100642bd8(plVar9,plVar15,1);
  FUN_100642bd8(plVar9,plVar16,1);
  FUN_100655930(plVar16,plVar17,1);
  FUN_100655930(plVar16,plVar18,1);
  FUN_100655930(plVar16,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar20,1);
  FUN_100655930(plVar5,plVar21,1);
  FUN_100655930(plVar21,plVar23,1);
  FUN_10064f31c(plVar23,plVar22,1);
  FUN_100655930(plVar21,plVar24,1);
  FUN_100655930(plVar5,param_1 + 0xfea,1);
  FUN_100642bd8(param_1 + 0xfea,param_1 + 0xf1d,1);
  FUN_100652cac(param_1 + 0x54,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100651f8c(puVar27,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652444(puVar27,"tile_corner_gradient",0,0,0,"tile_edge_gradient_hor",0,0,0,
                "tile_edge_gradient_vert",0,0);
  if ((*(uint *)((long)param_1 + 0x1d4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar27);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x504);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x504) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BUTTON",0);
  FUN_1001816d4(0x42200000,0x42c80000,0x447a0000,plVar10,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_1002db62c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x651,&local_a8);
  FUN_1001b4c0c(plVar10,1);
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BLUEPRINT_MISSING",0);
  FUN_1006513c0(plVar11,uVar28);
  *(uint *)((long)param_1 + 0x48bc) = *(uint *)((long)param_1 + 0x48bc) & 0xfffffffb;
  FUN_100181c18(0x42200000,0x42c80000,0x44228000,plVar4);
  uVar25 = DAT_101d918e8;
  local_80 = DAT_101d918e8;
  local_a8 = FUN_1002daee4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0xeb,&local_a8);
  FUN_1001b495c(0xbf800000,plVar4);
  FUN_100183500(plVar4,"ice_icon_small");
  FUN_100651038(param_1 + 0x1cd,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10065165c(param_1 + 0x1cd,1);
  FUN_100181c78(0x4019999a,plVar4);
  FUN_10018187c(plVar4,1);
  *(uint *)((long)param_1 + 0x2c34) = *(uint *)((long)param_1 + 0x2c34) & 0xffffffbf;
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar7,uVar28);
  FUN_100652ca4(param_1 + 0x5c7,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651038(param_1 + 0x5e5,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100654488(plVar8,1);
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar12,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x49ec);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x49ec) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar12);
    uVar29 = *(uint *)((long)param_1 + 0x49ec);
  }
  *(uint *)((long)param_1 + 0x49ec) = uVar29 | 0x10;
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x966) = *(byte *)(param_1 + 0x966) | 2;
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x4adc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4adc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar13);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  FUN_100651700(plVar14,3);
  FUN_100652cac(plVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_plus");
  FUN_10064e47c(0x42c80000,0x42c80000,plVar20);
  FUN_100652cac(param_1 + 0xed9,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x43480000,0x43480000,param_1 + 0xed9);
  uVar28 = FUN_100345b94();
  uVar28 = FUN_10034c450(uVar28,"*PlayerEssenceEffects*");
  FUN_1001aa350(plVar22,uVar28);
  FUN_10064e47c(0x43480000,0x43480000,plVar22);
  local_a8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xe74] + 0x28))(plVar22,&local_a8);
  if ((*(float *)(param_1 + 0xe7d) != 1.5) || (*(float *)((long)param_1 + 0x73ec) != 1.5)) {
    lVar30 = NEON_fmov(0x3fc00000,4);
    param_1[0xe7d] = lVar30;
    FUN_1000200a0(plVar22);
  }
  FUN_1001aaebc(plVar22);
  FUN_1001aae30(plVar22,"ESSENCE_ICON");
  FUN_10064e47c(0x43480000,0x43480000,plVar23);
  FUN_100651594(plVar24,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_1004e3120(&local_a8,"1300");
  FUN_1006513c0(plVar24,&local_a8);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
  }
  FUN_100655990(plVar5,0);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFT_SKIN_BUTTON",0);
  FUN_1001816d4(0x42c80000,0x42c80000,0x447a0000,plVar15,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_80 = uVar25;
  local_a8 = FUN_1002daef4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x990,&local_a8);
  FUN_100651038(param_1 + 0xa72,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100181c68(0x430c0000,plVar15);
  FUN_1001b495c(0xbf800000,plVar15);
  FUN_100651038(plVar17,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar17,uVar28);
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x42480000,0x42480000,plVar18);
  FUN_100651038(plVar19,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1004e3120(&local_a8,"0");
  FUN_1006513c0(plVar19,&local_a8);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
  }
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) | 0x10;
  local_80 = DAT_101dbd48c;
  local_a8 = thunk_FUN_1002db898;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&local_a8);
  local_80 = DAT_101dbd460;
  local_a8 = thunk_FUN_1002db898;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&local_a8);
  *(uint *)((long)param_1 + 0x327c) = *(uint *)((long)param_1 + 0x327c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x7084) = *(uint *)((long)param_1 + 0x7084) & 0xfffffffb;
  iVar26 = FUN_100131560();
  if (iVar26 != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xfffffffb;
  }
  return param_1;
}




void thunk_FUN_1002db62c(long *param_1)

{
  float *pfVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_100131560();
  if ((uVar3 & 1) != 0) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0xe7d);
  *(undefined1 *)((long)param_1 + 0x804c) = 1;
  uVar4 = (**(code **)(*param_1 + 0x138))(param_1);
  uVar4 = FUN_1002db738(uVar4,param_1 + 0x63f);
  FUN_1002db738(uVar4,param_1 + 0xe00);
  bVar2 = false;
  if ((*(float *)((long)param_1 + 0x73ec) == 0.0) && (bVar2 = false, !NAN(*pfVar1))) {
    bVar2 = *pfVar1 == 0.0;
  }
  if (!bVar2) {
    pfVar1[0] = 0.0;
    pfVar1[1] = 0.0;
    FUN_1000200a0(param_1 + 0xe74);
  }
  uVar4 = FUN_100640db8(0x3fc00000,0x3fc00000,0x3ecccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0xe74,uVar4);
  if ((*(uint *)((long)param_1 + 0x5f4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xffff807f;
    FUN_1000200a0(param_1 + 0xae);
  }
  uVar4 = FUN_100640840(0,0x3ecccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0xae,uVar4);
  return;
}




void FUN_1002daee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002daef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x148))();
  return;
}




void FUN_1002daef4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002daf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  return;
}




void thunk_FUN_1002db898(long *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((long)param_1 + 0x804c) = 0;
  uVar1 = (**(code **)(*param_1 + 0x138))();
  uVar1 = FUN_1002db954(uVar1,param_1 + 0x63f);
  FUN_1002db954(uVar1,param_1 + 0xe00);
  uVar1 = FUN_100640db8(0,0,0x3ecccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0xe74,uVar1);
  if ((~*(uint *)((long)param_1 + 0x5f4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) | 0x7f80;
    FUN_1000200a0(param_1 + 0xae);
  }
  uVar1 = FUN_100640840(0x3f800000,0x3ecccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0xae,uVar1);
  return;
}




long * thunk_FUN_1002da328(long *param_1)

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
  undefined4 uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  puVar27 = (undefined8 *)FUN_10064f204();
  puVar27[0x29] = 0;
  *puVar27 = &PTR_thunk_FUN_1002dc608_101489108;
  puVar27 = puVar27 + 0x2a;
  thunk_FUN_100651ebc();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x90;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0xae;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0xd9;
  FUN_1006421a8();
  param_1[0xd9] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0xea;
  thunk_FUN_100183160(plVar4,0);
  plVar6 = param_1 + 0x576;
  thunk_FUN_100655644(plVar6);
  plVar7 = param_1 + 0x5a1;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x60b;
  thunk_FUN_1006543ec(plVar8);
  plVar9 = param_1 + 0x63f;
  FUN_1006421a8(plVar9);
  param_1[0x63f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x650;
  thunk_FUN_100181304(plVar10,0);
  plVar11 = param_1 + 0x907;
  thunk_FUN_100650e64(plVar11);
  plVar12 = param_1 + 0x92d;
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x94b;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0x969;
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x98f;
  thunk_FUN_100182684(plVar15,0);
  plVar16 = param_1 + 0xd6b;
  thunk_FUN_100655644(plVar16);
  plVar17 = param_1 + 0xd96;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xdbc;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xdda;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0xe00;
  thunk_FUN_100655644();
  plVar20 = param_1 + 0xe2b;
  thunk_FUN_100652c08();
  plVar21 = param_1 + 0xe49;
  thunk_FUN_100655644(plVar21);
  plVar22 = param_1 + 0xe74;
  FUN_1001aa1d4();
  plVar23 = param_1 + 0xeb0;
  thunk_FUN_10064f204(plVar23);
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0xef7;
  thunk_FUN_100650e64();
  FUN_1002bdcb4();
  thunk_FUN_100652c08();
  *(undefined8 *)((long)param_1 + 0x8047) = 0;
  param_1[0x1008] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar27,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100655930(plVar2,plVar10,1);
  FUN_100655930(plVar2,plVar11,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100655930(plVar6,plVar7,1);
  FUN_100655930(plVar6,param_1 + 0x5c7,1);
  FUN_100655930(plVar6,param_1 + 0x5e5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar9,plVar13,1);
  FUN_100642bd8(plVar9,plVar12,1);
  FUN_100642bd8(plVar9,plVar14,1);
  FUN_100642bd8(plVar9,plVar15,1);
  FUN_100642bd8(plVar9,plVar16,1);
  FUN_100655930(plVar16,plVar17,1);
  FUN_100655930(plVar16,plVar18,1);
  FUN_100655930(plVar16,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar20,1);
  FUN_100655930(plVar5,plVar21,1);
  FUN_100655930(plVar21,plVar23,1);
  FUN_10064f31c(plVar23,plVar22,1);
  FUN_100655930(plVar21,plVar24,1);
  FUN_100655930(plVar5,param_1 + 0xfea,1);
  FUN_100642bd8(param_1 + 0xfea,param_1 + 0xf1d,1);
  FUN_100652cac(param_1 + 0x54,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100651f8c(puVar27,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652444(puVar27,"tile_corner_gradient",0,0,0,"tile_edge_gradient_hor",0,0,0,
                "tile_edge_gradient_vert",0,0);
  if ((*(uint *)((long)param_1 + 0x1d4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar27);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x504);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x504) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BUTTON",0);
  FUN_1001816d4(0x42200000,0x42c80000,0x447a0000,plVar10,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_1002db62c;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x651,&pcStack_a8);
  FUN_1001b4c0c(plVar10,1);
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BLUEPRINT_MISSING",0);
  FUN_1006513c0(plVar11,uVar28);
  *(uint *)((long)param_1 + 0x48bc) = *(uint *)((long)param_1 + 0x48bc) & 0xfffffffb;
  FUN_100181c18(0x42200000,0x42c80000,0x44228000,plVar4);
  uVar25 = DAT_101d918e8;
  uStack_80 = DAT_101d918e8;
  pcStack_a8 = FUN_1002daee4;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xeb,&pcStack_a8);
  FUN_1001b495c(0xbf800000,plVar4);
  FUN_100183500(plVar4,"ice_icon_small");
  FUN_100651038(param_1 + 0x1cd,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10065165c(param_1 + 0x1cd,1);
  FUN_100181c78(0x4019999a,plVar4);
  FUN_10018187c(plVar4,1);
  *(uint *)((long)param_1 + 0x2c34) = *(uint *)((long)param_1 + 0x2c34) & 0xffffffbf;
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar7,uVar28);
  FUN_100652ca4(param_1 + 0x5c7,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651038(param_1 + 0x5e5,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100654488(plVar8,1);
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar12,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x49ec);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x49ec) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar12);
    uVar29 = *(uint *)((long)param_1 + 0x49ec);
  }
  *(uint *)((long)param_1 + 0x49ec) = uVar29 | 0x10;
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x966) = *(byte *)(param_1 + 0x966) | 2;
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x4adc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4adc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar13);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  FUN_100651700(plVar14,3);
  FUN_100652cac(plVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_plus");
  FUN_10064e47c(0x42c80000,0x42c80000,plVar20);
  FUN_100652cac(param_1 + 0xed9,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x43480000,0x43480000,param_1 + 0xed9);
  uVar28 = FUN_100345b94();
  uVar28 = FUN_10034c450(uVar28,"*PlayerEssenceEffects*");
  FUN_1001aa350(plVar22,uVar28);
  FUN_10064e47c(0x43480000,0x43480000,plVar22);
  pcStack_a8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xe74] + 0x28))(plVar22,&pcStack_a8);
  if ((*(float *)(param_1 + 0xe7d) != 1.5) || (*(float *)((long)param_1 + 0x73ec) != 1.5)) {
    lVar30 = NEON_fmov(0x3fc00000,4);
    param_1[0xe7d] = lVar30;
    FUN_1000200a0(plVar22);
  }
  FUN_1001aaebc(plVar22);
  FUN_1001aae30(plVar22,"ESSENCE_ICON");
  FUN_10064e47c(0x43480000,0x43480000,plVar23);
  FUN_100651594(plVar24,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_1004e3120(&pcStack_a8,"1300");
  FUN_1006513c0(plVar24,&pcStack_a8);
  if (plStack_a0 != (long *)0x0) {
    operator_delete__(plStack_a0);
  }
  FUN_100655990(plVar5,0);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFT_SKIN_BUTTON",0);
  FUN_1001816d4(0x42c80000,0x42c80000,0x447a0000,plVar15,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_80 = uVar25;
  pcStack_a8 = FUN_1002daef4;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x990,&pcStack_a8);
  FUN_100651038(param_1 + 0xa72,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100181c68(0x430c0000,plVar15);
  FUN_1001b495c(0xbf800000,plVar15);
  FUN_100651038(plVar17,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar17,uVar28);
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x42480000,0x42480000,plVar18);
  FUN_100651038(plVar19,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1004e3120(&pcStack_a8,"0");
  FUN_1006513c0(plVar19,&pcStack_a8);
  if (plStack_a0 != (long *)0x0) {
    operator_delete__(plStack_a0);
  }
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) | 0x10;
  uStack_80 = DAT_101dbd48c;
  pcStack_a8 = thunk_FUN_1002db898;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&pcStack_a8);
  uStack_80 = DAT_101dbd460;
  pcStack_a8 = thunk_FUN_1002db898;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&pcStack_a8);
  *(uint *)((long)param_1 + 0x327c) = *(uint *)((long)param_1 + 0x327c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x7084) = *(uint *)((long)param_1 + 0x7084) & 0xfffffffb;
  iVar26 = FUN_100131560();
  if (iVar26 != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xfffffffb;
  }
  return param_1;
}




void FUN_1002daf38(long param_1,long param_2)

{
  undefined4 local_38 [2];
  
  *(long *)(param_1 + 0x8040) = param_2;
  local_38[0] = 0xff000000;
  FUN_1000ecb68(param_2,local_38);
  FUN_100652dd4(param_1 + 0x2a0,local_38,2);
  FUN_100652590(param_1 + 0x150,local_38,2);
  if (*(long *)(param_1 + 0x460) != 0) {
    FUN_100652d8c(param_1 + 0x390);
  }
  FUN_1001e355c(param_1 + 0x390,*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_1002dafc4(undefined4 param_1,undefined4 param_2,long *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = param_1;
  uStack_24 = param_2;
  FUN_10064e48c(param_3,&local_28);
  (**(code **)(*param_3 + 0x138))(param_3);
  return;
}




float FUN_1002db004(float param_1)

{
  return (param_1 + -40.0) / 1.3333 + 40.0;
}




float FUN_1002db030(float param_1)

{
  return (param_1 + -40.0) * 1.3333 + 40.0;
}




void FUN_1002db058(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002db060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002db064(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar1 = param_3 + 0x390;
    uVar7 = FUN_10065317c(lVar1);
    if (*(byte *)(param_3 + 0x804c) == 0) {
      bVar5 = *(char *)(param_3 + 0x804d) != '\0';
    }
    else {
      bVar5 = false;
    }
    FUN_1001b4c0c(param_3 + 0x3280,bVar5);
    *(uint *)(param_3 + 0x414) =
         *(uint *)(param_3 + 0x414) & 0xffffffef | (uint)*(byte *)(param_3 + 0x804c) << 4;
    if (*(float *)(param_3 + 0x323c) != 0.0) {
      *(undefined4 *)(param_3 + 0x323c) = 0;
      FUN_1000200a0(param_3 + 0x31f8);
    }
    local_58 = FUN_10065317c(lVar1);
    uStack_54 = param_2;
    FUN_10064e48c(param_3 + 0x3058,&local_58);
    fVar8 = 0.0;
    FUN_10064e5ec(0,0,param_3 + 0x3058,6,lVar1,6);
    if (*(char *)(param_3 + 0x804d) != '\0') {
      FUN_10064e72c(0xc1200000,param_3 + 0x77b8,0,param_3 + 0x7580,2);
      FUN_10064e72c(0,param_3 + 0x77b8,4,param_3 + 0x7580,4);
      lVar2 = param_3 + 0x7248;
      FUN_1006557ec(lVar2);
      FUN_10064e68c(0,0,param_3 + 0x73a0,8);
      lVar3 = param_3 + 0x7f50;
      FUN_10064e47c(0x43910000,0x43a00000,lVar3);
      lVar4 = param_3 + 0x7158;
      FUN_10064e72c(0x43250000,lVar4,3,lVar3,1);
      FUN_10064e72c(0xc2200000,lVar4,5,lVar3,5);
      FUN_10064e72c(0x41200000,lVar2,3,lVar4,1);
      FUN_10064e72c(0,lVar2,5,lVar4,5);
      FUN_1006557ec(param_3 + 0x7000);
      fVar8 = 0.0;
      FUN_10064e5ec(0,0,param_3 + 0x78e8,8,lVar3,8);
    }
    FUN_1002db3dc(param_3);
    lVar2 = param_3 + 0x4c78;
    lVar3 = param_3 + 0x6b58;
    FUN_10064e72c(0x80000000,lVar2,2,lVar3,0);
    FUN_10064e72c(0,lVar2,4,lVar3,4);
    FUN_10064e72c(0xc2dc0000,param_3 + 0x7000,2,lVar2,0);
    FUN_10064e72c(0x428c0000,param_3 + 0x7000,4,lVar2,4);
    lVar4 = param_3 + 0x4b48;
    FUN_100651708((float)uVar7 + -60.0,lVar4,1);
    FUN_10064e72c(0xc3d20000,lVar4,2,lVar2,0);
    FUN_10064e72c(0,lVar4,4,lVar2,4);
    FUN_10064eb7c(lVar4,4,lVar3,6);
    lVar2 = param_3 + 0x4968;
    FUN_10064e47c(uVar7,fVar8 + 70.0,lVar2);
    FUN_10064e5ec(0,0,lVar2,6,lVar1,6);
    FUN_10064e47c(uVar7,0x42700000,param_3 + 0x4a58);
    FUN_10064e5ec(0,0,param_3 + 0x4a58,6,lVar2,4);
  }
  return;
}




void FUN_1002db3dc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x6de0;
  FUN_10064e72c(0x40800000,lVar1,3,param_1 + 0x6cb0,1);
  FUN_10064e72c(0,lVar1,5,param_1 + 0x6cb0,5);
  FUN_10064e72c(0x40800000,param_1 + 0x6ed0,3,lVar1,1);
  FUN_10064e72c(0,param_1 + 0x6ed0,5,lVar1,5);
  FUN_1006557ec(param_1 + 0x6b58);
  FUN_10064e5ec(0,0xc2200000,param_1 + 0x6b58,6,param_1 + 0x390,6);
  return;
}




void FUN_1002db4bc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = 4;
  if ((int)param_2 == 0) {
    uVar2 = 0;
  }
  *(uint *)((long)param_1 + 0x7d4) = *(uint *)((long)param_1 + 0x7d4) & 0xfffffffb | uVar2;
  FUN_1001b4c0c(param_1 + 0xea,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001002db520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002db524(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x750;
  *(uint *)(param_1 + 0x26b4) = *(uint *)(param_1 + 0x26b4) & 0xfffffffb;
  (**(code **)(*(long *)(param_1 + 0x750) + 0x180))(lVar1);
  uVar2 = FUN_1004e0150("MENU_SKINS_HUB_COMING_SOON_LABEL",0);
  FUN_100181af8(lVar1,uVar2);
  FUN_1001b4c0c(lVar1,0);
  return;
}




void FUN_1002db580(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) == 0) {
    FUN_1000eb30c(param_2,param_1 + 0xea);
    lVar2 = FUN_1000eb494(param_2);
    if (lVar2 != 0) {
      FUN_100652cdc(param_1 + 0x5c7,lVar2);
    }
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    FUN_1006513c0(param_1 + 0x5e5,auStack_40);
    (**(code **)(*param_1 + 0x138))(param_1);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void FUN_1002db62c(long *param_1)

{
  float *pfVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_100131560();
  if ((uVar3 & 1) != 0) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0xe7d);
  *(undefined1 *)((long)param_1 + 0x804c) = 1;
  uVar4 = (**(code **)(*param_1 + 0x138))(param_1);
  uVar4 = FUN_1002db738(uVar4,param_1 + 0x63f);
  FUN_1002db738(uVar4,param_1 + 0xe00);
  bVar2 = false;
  if ((*(float *)((long)param_1 + 0x73ec) == 0.0) && (bVar2 = false, !NAN(*pfVar1))) {
    bVar2 = *pfVar1 == 0.0;
  }
  if (!bVar2) {
    pfVar1[0] = 0.0;
    pfVar1[1] = 0.0;
    FUN_1000200a0(param_1 + 0xe74);
  }
  uVar4 = FUN_100640db8(0x3fc00000,0x3fc00000,0x3ecccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0xe74,uVar4);
  if ((*(uint *)((long)param_1 + 0x5f4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xffff807f;
    FUN_1000200a0(param_1 + 0xae);
  }
  uVar4 = FUN_100640840(0,0x3ecccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0xae,uVar4);
  return;
}




void FUN_1002db738(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  FUN_100642324(param_2);
  if ((*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_2);
  }
  lVar1 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar5);
    *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_1006409b4(0,0x41a00000,0,0);
  uVar2 = FUN_100640840(0x3f800000,0x3ecccccd,FUN_10001f4ac);
  FUN_1006409b4(0,0xc1a00000,0x3ecccccd,FUN_10001f4ac);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100642b7c(param_2,puVar5);
  return;
}




void FUN_1002db898(long *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((long)param_1 + 0x804c) = 0;
  uVar1 = (**(code **)(*param_1 + 0x138))();
  uVar1 = FUN_1002db954(uVar1,param_1 + 0x63f);
  FUN_1002db954(uVar1,param_1 + 0xe00);
  uVar1 = FUN_100640db8(0,0,0x3ecccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0xe74,uVar1);
  if ((~*(uint *)((long)param_1 + 0x5f4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) | 0x7f80;
    FUN_1000200a0(param_1 + 0xae);
  }
  uVar1 = FUN_100640840(0x3f800000,0x3ecccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0xae,uVar1);
  return;
}




void FUN_1002db954(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  
  FUN_100642324(param_2);
  if ((~*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x7f80;
    FUN_1000200a0(param_2);
  }
  uVar2 = FUN_100640840(0,0x3ecccccd,FUN_10001f4ac);
  FUN_1006409b4(0,0x41a00000,0x3ecccccd,FUN_10001f4ac);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  lVar1 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 != 0xffff) {
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    puVar4 = (undefined8 *)FUN_10063ee9c();
    *puVar4 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_100642b7c(param_2,uVar3);
  return;
}




void FUN_1002dba90(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  
  uVar3 = FUN_100131560();
  if ((uVar3 & 1) != 0) {
    return;
  }
  plVar1 = param_1 + 0xf1d;
  FUN_1002bdddc(plVar1,param_2,1,param_3);
  FUN_1002bdf84(plVar1,1);
  FUN_1002bdec8(plVar1,0);
  *(undefined4 *)(param_1 + 0xfa7) = 0x3f000000;
  bVar2 = false;
  if ((*(float *)(param_1 + 0xf26) == 0.5) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x7934)))) {
    bVar2 = *(float *)((long)param_1 + 0x7934) == 0.5;
  }
  if (!bVar2) {
    param_1[0xf26] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  *(undefined1 *)((long)param_1 + 0x804d) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001002dbb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002dbb5c(long *param_1,uint param_2,ulong param_3,undefined8 param_4,int param_5,
                  undefined4 param_6)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  
  uVar7 = (uint)param_3;
  uVar3 = uVar7 | param_2 ^ 1;
  uVar8 = 4;
  if (uVar3 == 0) {
    uVar8 = 0;
  }
  *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xfffffffb | uVar8;
  *(uint *)((long)param_1 + 0x504) = *(uint *)((long)param_1 + 0x504) & 0xfffffffb | uVar8;
  if ((uVar3 == 1) && (param_2 != 0)) {
    *(uint *)((long)param_1 + 0x74c) = *(uint *)((long)param_1 + 0x74c) & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(char *)((long)param_1 + 0x804d) == '\0') {
    return;
  }
  FUN_1004e313c(auStack_70);
  if ((uVar7 & param_2) == 1) {
    uVar5 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_DECRAFT_BLUEPRINT",0);
    FUN_1000153b4(auStack_70,uVar5);
    uVar5 = FUN_1004e0150("MENU_SKINS_HUB_DECRAFT_BUTTON",0);
    FUN_100181af8(param_1 + 0x650,uVar5);
LAB_1002dbca0:
    bVar4 = 1;
  }
  else {
    if (uVar7 == 0) {
      uVar5 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_MISSING_BLUEPRINT",0);
      FUN_1000153b4(auStack_70,uVar5);
      goto LAB_1002dbca0;
    }
    uVar5 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_OWNED_BLUEPRINT",0);
    FUN_1000153b4(auStack_70,uVar5);
    bVar4 = 0;
  }
  cVar2 = *(char *)(param_1[0x1008] + 0x34);
  FUN_1004e3120(auStack_80,"[EM]");
  FUN_1004e3120(auStack_90,"{0,320,340,340}");
  FUN_1004e3d50(auStack_70,0,auStack_80,auStack_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  FUN_1004e3120(auStack_80,"[/EM]");
  FUN_1004e3120(auStack_90,"{\\}");
  FUN_1004e3d50(auStack_70,0,auStack_80,auStack_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  FUN_1004e313c(auStack_80);
  FUN_1004e38ac(auStack_80,"%d");
  FUN_1004e313c(auStack_90);
  FUN_1004e38ac(auStack_90,"%d");
  uVar5 = FUN_1004e0150(*(undefined8 *)(param_1[0x1008] + 0x18),0);
  thunk_FUN_1004e439c(auStack_a0,uVar5);
  FUN_1004e3120(auStack_b0,"[SKIN_NAME]");
  FUN_1004e3bc4(auStack_70,0,auStack_b0,auStack_a0);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  FUN_1004e3120(auStack_b0,"[NUM_ESSENCE]");
  FUN_1004e3bc4(auStack_70,0,auStack_b0,auStack_80);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  if ((uVar7 & param_2) == 0) {
    if ((param_3 & 1) != 0) goto LAB_1002dbe50;
    puVar6 = (undefined1 *)FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BLUEPRINT_MISSING",0);
  }
  else {
    puVar6 = auStack_70;
  }
  FUN_1006513c0(param_1 + 0x907,puVar6);
LAB_1002dbe50:
  FUN_1006513c0(param_1 + 0x969,auStack_70);
  FUN_1001b4c0c(param_1 + 0x98f,uVar7 & param_5 <= (int)param_4 & (param_2 ^ 1));
  uVar8 = 0x44;
  if (!(bool)(bVar4 & cVar2 == '\0')) {
    uVar8 = 0;
  }
  *(uint *)((long)param_1 + 0x48bc) = uVar8 | *(uint *)((long)param_1 + 0x48bc) & 0xffffffbb;
  FUN_1006513c0(param_1 + 0xef7,auStack_80);
  if (*(char *)((long)param_1 + 0x804e) == '\0') {
    FUN_1006513c0(param_1 + 0xdda,auStack_90);
  }
  plVar1 = param_1 + 0xf1d;
  FUN_1002bdf4c(plVar1,param_6);
  FUN_1002bdf5c(plVar1,param_4);
  FUN_1002bdf6c(plVar1,param_3);
  uVar8 = 0x10;
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  *(uint *)((long)param_1 + 0x796c) = *(uint *)((long)param_1 + 0x796c) & 0xffffffef | uVar8;
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  return;
}




void FUN_1002dbf6c(long param_1)

{
  FUN_1002be7d0(param_1 + 0x78e8);
  return;
}




void FUN_1002dbf78(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ushort *puVar6;
  
  uVar3 = FUN_10032834c();
  iVar2 = FUN_100328e40(uVar3,*(undefined8 *)(param_1 + 0x8040));
  *(float *)(param_1 + 0x8048) = (float)(param_2 - iVar2);
  uVar3 = FUN_10064081c(0x3dcccccd);
  lVar1 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_100640620(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_100640664((float)(param_2 - iVar2),(float)param_2,puVar6,(float *)(param_1 + 0x8048));
  FUN_10063f130(puVar6,FUN_1002dc12c);
  FUN_10063f0e8(0x3f800000,puVar6);
  lVar1 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar5 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  puVar4 = (undefined8 *)FUN_10063ee9c();
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_thunk_FUN_10063eeb4_10144bff8;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  puVar4[2] = FUN_1002dc168;
  puVar4[4] = param_1;
  FUN_100642b7c(param_1,uVar3);
  *(undefined1 *)(param_1 + 0x804e) = 1;
  return;
}




float FUN_1002dc12c(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = (float)_exp2f((param_1 * -10.0) / param_4);
  return param_2 + param_3 * (1.0 - fVar1);
}




void FUN_1002dc168(long param_1)

{
  *(undefined1 *)(param_1 + 0x804e) = 0;
  return;
}




void FUN_1002dc174(long param_1)

{
  *(undefined1 *)(param_1 + 0x804c) = 0;
  return;
}




void FUN_1002dc180(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  if (*(char *)(param_1 + 0x804e) != '\0') {
    FUN_1004e313c(auStack_30);
    FUN_1004e38ac(auStack_30,"%.0f");
    FUN_1006513c0(param_1 + 0x6ed0,auStack_30);
    FUN_1002db3dc(param_1);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  return;
}




void FUN_1002dc200(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  
  local_68 = (float)(**(code **)(*param_3 + 0x48))();
  local_68 = local_68 + -12.0;
  fStack_64 = param_2 + -12.0;
  plVar1 = param_3 + 0x72;
  FUN_10064e48c(plVar1,&local_68);
  plVar2 = param_3 + 0x54;
  fVar10 = fStack_64 + 6.0;
  FUN_10064e47c(local_68 + 6.0,fVar10,plVar2);
  fVar8 = (float)FUN_100652e60(plVar2);
  FUN_100652e60(plVar2);
  FUN_1006525c4(0x41a00000,fVar8 + -4.0,0x41a00000,0x41a00000,fVar10 + -4.0,0x41a00000,
                param_3 + 0x2a);
  FUN_10064e47c(local_68,fStack_64 * 0.5,param_3 + 0x90);
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  FUN_10064e5ec(0,0,plVar2,8,param_3,8);
  FUN_10064e5ec(0,0,param_3 + 0x2a,8,param_3,8);
  uVar9 = 0;
  FUN_10064e5ec(0,param_3 + 0x90,3,plVar1,3);
  plVar2 = param_3 + 0x650;
  if (*(char *)(param_3[0x1008] + 0x34) == '\0') {
    uVar7 = (uint)(*(int *)(param_3[0x1008] + 0x20) != 0) << 2;
  }
  else {
    uVar7 = 0;
  }
  *(uint *)((long)param_3 + 0x3304) = *(uint *)((long)param_3 + 0x3304) & 0xfffffffb | uVar7;
  if ((*(float *)(param_3 + 0x659) != 1.3) || (*(float *)((long)param_3 + 0x32cc) != 1.3)) {
    param_3[0x659] = 0x3fa666663fa66666;
    FUN_1000200a0(plVar2);
  }
  plVar3 = param_3 + 0xea;
  if ((*(float *)(param_3 + 0xf3) != 1.3) || (*(float *)((long)param_3 + 0x79c) != 1.3)) {
    param_3[0xf3] = 0x3fa666663fa66666;
    FUN_1000200a0(plVar3);
  }
  FUN_10064e72c(0x42700000,plVar3,3,plVar2,1);
  FUN_10064e72c(0,plVar3,5,plVar2,5);
  uVar7 = *(uint *)((long)param_3 + 0x3304);
  *(uint *)((long)param_3 + 0x3304) = uVar7 & 0xffffff80 | uVar7 & 0x3f | (uVar7 >> 2 & 1) << 6;
  plVar4 = param_3 + 0x907;
  local_70 = FUN_1006511d0(plVar4);
  uStack_6c = uVar9;
  FUN_10064e48c(plVar4,&local_70);
  uVar9 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10065179c(uVar9,0,0x3f800000,plVar4);
  FUN_10064e72c(0x41400000,plVar4,0,plVar2,2);
  FUN_10064e72c(0,plVar4,4,plVar2,4);
  uVar7 = *(uint *)((long)param_3 + 0x74c);
  *(uint *)((long)param_3 + 0x74c) = uVar7 & 0xffffff80 | uVar7 & 0x3f | (uVar7 >> 2 & 1) << 6;
  plVar2 = param_3 + 0x576;
  uVar7 = *(byte *)((long)param_3 + 0x9b4) & 0x10;
  *(uint *)((long)param_3 + 0x2c34) =
       *(uint *)((long)param_3 + 0x2c34) & 0xffffff80 |
       *(uint *)((long)param_3 + 0x2c34) & 0x3b | uVar7 >> 2 | (uVar7 >> 4) << 6;
  plVar5 = param_3 + 0x5c7;
  plVar6 = param_3 + 0x5a1;
  FUN_10064e72c(0x41400000,plVar5,3,plVar6,1);
  FUN_10064e72c(0,plVar5,5,plVar6,5);
  FUN_10064e72c(0x40c00000,param_3 + 0x5e5,3,plVar5,1);
  FUN_10064e72c(0,param_3 + 0x5e5,5,plVar5,5);
  FUN_1006557ec(plVar2);
  FUN_10064e72c(0x41400000,plVar2,0,plVar3,2);
  FUN_10064e72c(0,plVar2,4,plVar3,4);
  FUN_1006557ec(param_3 + 0xae);
  if ((*(byte *)((long)param_3 + 0x2c34) >> 2 & 1) != 0) {
    FUN_10064e72c(0,plVar4,5,plVar6,5);
  }
  FUN_1002db064(param_3);
  FUN_10064e5ec(0,0xc1c00000,param_3 + 0xae,6,plVar1,6);
  return;
}




void thunk_FUN_1002dc608(void)

{
  FUN_1002dc608();
  return;
}




void FUN_1002dc5f4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002dc608();
  operator_delete(pvVar1);
  return;
}




void FUN_1002dc608(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002dc608_101489108;
  param_1[0xfea] = &PTR_FUN_1014a7108;
  param_1[0x1001] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1004);
  FUN_10064e2bc(param_1 + 0xfea);
  thunk_FUN_1002bdcf0(param_1 + 0xf1d);
  thunk_FUN_100651068(param_1 + 0xef7);
  param_1[0xed9] = &PTR_FUN_1014a7108;
  param_1[0xef0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xef3);
  FUN_10064e2bc(param_1 + 0xed9);
  param_1[0xeb0] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xec7);
  FUN_10064e2bc(param_1 + 0xeb0);
  thunk_FUN_1001aa23c(param_1 + 0xe74);
  param_1[0xe49] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xe60);
  FUN_10064e2bc(param_1 + 0xe49);
  param_1[0xe2b] = &PTR_FUN_1014a7108;
  param_1[0xe42] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe45);
  FUN_10064e2bc(param_1 + 0xe2b);
  param_1[0xe00] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xe17);
  FUN_10064e2bc(param_1 + 0xe00);
  thunk_FUN_100651068(param_1 + 0xdda);
  param_1[0xdbc] = &PTR_FUN_1014a7108;
  param_1[0xdd3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdd6);
  FUN_10064e2bc(param_1 + 0xdbc);
  thunk_FUN_100651068(param_1 + 0xd96);
  param_1[0xd6b] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xd82);
  FUN_10064e2bc(param_1 + 0xd6b);
  param_1[0x98f] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0xd35);
  FUN_10064221c(param_1 + 0xd24);
  FUN_10064e2bc(param_1 + 0xcf0);
  FUN_10064221c(param_1 + 0xcdf);
  thunk_FUN_100651068(param_1 + 0xcb9);
  thunk_FUN_100651068(param_1 + 0xc93);
  param_1[0xc75] = &PTR_FUN_1014a7108;
  param_1[0xc8c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc8f);
  FUN_10064e2bc(param_1 + 0xc75);
  param_1[0xc57] = &PTR_FUN_1014a7108;
  param_1[0xc6e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc71);
  FUN_10064e2bc(param_1 + 0xc57);
  FUN_10064221c(param_1 + 0xc46);
  FUN_10003bd40(param_1 + 0x98f);
  thunk_FUN_100651068(param_1 + 0x969);
  param_1[0x94b] = &PTR_FUN_1014a7108;
  param_1[0x962] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x965);
  FUN_10064e2bc(param_1 + 0x94b);
  param_1[0x92d] = &PTR_FUN_1014a7108;
  param_1[0x944] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x947);
  FUN_10064e2bc(param_1 + 0x92d);
  thunk_FUN_100651068(param_1 + 0x907);
  FUN_10003bd40(param_1 + 0x650);
  FUN_10064221c(param_1 + 0x63f);
  FUN_10064e2bc(param_1 + 0x60b);
  thunk_FUN_100651068(param_1 + 0x5e5);
  param_1[0x5c7] = &PTR_FUN_1014a7108;
  param_1[0x5de] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5e1);
  FUN_10064e2bc(param_1 + 0x5c7);
  thunk_FUN_100651068(param_1 + 0x5a1);
  param_1[0x576] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x58d);
  FUN_10064e2bc(param_1 + 0x576);
  param_1[0xea] = &PTR_FUN_10145f168;
  param_1[0x557] = &PTR_FUN_1014a7108;
  param_1[0x56e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x571);
  FUN_10064e2bc(param_1 + 0x557);
  param_1[0x539] = &PTR_FUN_1014a7108;
  param_1[0x550] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x553);
  FUN_10064e2bc(param_1 + 0x539);
  thunk_FUN_100651068(param_1 + 0x513);
  param_1[0x4f5] = &PTR_FUN_1014a7108;
  param_1[0x50c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x50f);
  FUN_10064e2bc(param_1 + 0x4f5);
  FUN_10064221c(param_1 + 0x4e4);
  param_1[0x4c6] = &PTR_FUN_1014a7108;
  param_1[0x4dd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4e0);
  FUN_10064e2bc(param_1 + 0x4c6);
  param_1[0xea] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x490);
  FUN_10064221c(param_1 + 0x47f);
  FUN_10064e2bc(param_1 + 1099);
  FUN_10064221c(param_1 + 0x43a);
  thunk_FUN_100651068(param_1 + 0x414);
  thunk_FUN_100651068(param_1 + 0x3ee);
  param_1[0x3d0] = &PTR_FUN_1014a7108;
  param_1[999] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3ea);
  FUN_10064e2bc(param_1 + 0x3d0);
  param_1[0x3b2] = &PTR_FUN_1014a7108;
  param_1[0x3c9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3cc);
  FUN_10064e2bc(param_1 + 0x3b2);
  FUN_10064221c(param_1 + 0x3a1);
  FUN_10003bd40(param_1 + 0xea);
  FUN_10064221c(param_1 + 0xd9);
  param_1[0xae] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xc5);
  FUN_10064e2bc(param_1 + 0xae);
  param_1[0x90] = &PTR_FUN_1014a7108;
  param_1[0xa7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaa);
  FUN_10064e2bc(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_1014a7108;
  param_1[0x89] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8c);
  FUN_10064e2bc(param_1 + 0x72);
  param_1[0x54] = &PTR_FUN_1014a7108;
  param_1[0x6b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6e);
  FUN_10064e2bc(param_1 + 0x54);
  param_1[0x2a] = &PTR_FUN_1014a6db0;
  param_1[0x41] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2a);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_1002dcb64(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_101489258;
  puVar4 = puVar4 + 0x18;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x36;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x54;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x7a;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100652cac(puVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar4,&DAT_101158ac0,2);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_101158ac0,2);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_101158abc);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_101158ab8);
  return param_1;
}




void FUN_1002dcccc(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  
  FUN_1006511d0(param_3 + 0x2a0);
  fVar1 = param_2;
  FUN_1006511d0(param_3 + 0x3d0);
  FUN_10064e47c(param_1,fVar1 + param_2,param_3);
  return;
}




void FUN_1002dcd14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  FUN_10064e32c();
  plVar3 = param_1 + 0x18;
  fVar4 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  plVar1 = param_1 + 0x54;
  fVar5 = (float)FUN_1006511d0(plVar1);
  fVar4 = (fVar4 - fVar5) * 0.5 + -12.0;
  FUN_10064e47c(fVar4,0x40c00000,plVar3);
  plVar2 = param_1 + 0x36;
  FUN_10064e47c(fVar4,0x40c00000,plVar2);
  FUN_10064e5ec(0,0,plVar1,4,param_1,4);
  FUN_10064e5ec(0,0,plVar3,0,param_1,0);
  FUN_10064e72c(0,plVar3,5,plVar1,5);
  FUN_10064e5ec(0,0,plVar2,1,param_1,1);
  FUN_10064e72c(0,plVar2,5,plVar1,5);
  FUN_10064e5ec(0,0,param_1 + 0x7a,4,plVar1,6);
  return;
}




void FUN_1002dce38(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1004e3120(auStack_40);
  FUN_1006513c0(param_1 + 0x54,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3120(auStack_40,param_3);
  FUN_1006513c0(param_1 + 0x7a,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




long * FUN_1002dcec4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_1014893a0;
  puVar4 = puVar4 + 0x18;
  thunk_FUN_100655644(puVar4);
  plVar1 = param_1 + 0x43;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x69;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x8f;
  thunk_FUN_100650e64(plVar3);
  *(undefined1 *)(param_1 + 0xb5) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100655930(puVar4,plVar1,1);
  FUN_100655930(puVar4,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_101158ac4);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_101158ab8);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_101158acc);
  FUN_1006515d8(plVar3,0);
  FUN_1006515e0(plVar3,1);
  return param_1;
}




void FUN_1002dcfec(undefined8 param_1,float param_2,long *param_3)

{
  float fVar1;
  
  FUN_1006557ec(param_3 + 0x18);
  FUN_10064e3cc(param_3 + 0x18);
  fVar1 = param_2 + 24.0;
  FUN_1006511d0(param_3 + 0x8f);
  FUN_10064e47c(param_1,fVar1 + param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001002dd050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3);
  return;
}




void FUN_1002dd054(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN_10064e32c();
  plVar1 = param_3 + 0x18;
  uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e3cc(plVar1);
  FUN_10064e47c(uVar6,plVar1);
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x8f,&local_48);
  FUN_10064e5ec(0,0,plVar1,4,param_3,4);
  if ((char)param_3[0xb5] == '\0') {
    plVar3 = param_3 + 0x43;
    FUN_10064e5ec(0,0,plVar3,7,plVar1,7);
    plVar2 = param_3 + 0x69;
    uVar5 = 0x41c00000;
    uVar6 = 7;
    uVar4 = 5;
  }
  else {
    plVar3 = param_3 + 0x69;
    FUN_10064e5ec(0,0,plVar3,5,plVar1,5);
    plVar2 = param_3 + 0x43;
    uVar5 = 0xc1c00000;
    uVar6 = 5;
    uVar4 = 7;
  }
  FUN_10064e5ec(uVar5,0,plVar2,uVar6,plVar3,uVar4);
  FUN_10064e91c(param_3 + 0x69,param_3 + 0x43);
  FUN_10064e5ec(0,0x41c00000,param_3 + 0x8f,0,plVar1,3);
  return;
}




void FUN_1002dd1a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(byte *)(param_1 + 0x5a8) = param_5;
  if ((param_5 & 1) == 0) {
    FUN_100651460(param_1 + 0x218,&DAT_101158ac8);
  }
  FUN_1004e3120(auStack_50,param_2);
  FUN_1006513c0(param_1 + 0x218,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1004e3120(auStack_50,param_3);
  FUN_1006513c0(param_1 + 0x348,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (*(char *)(param_1 + 0x5a8) != '\0') {
    FUN_100651700(param_1 + 0x478,1);
  }
  FUN_1004e3120(auStack_50,param_4);
  FUN_1006513c0(param_1 + 0x478,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_1002dd9f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002dd9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_1002dda00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002dda0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_1002dda10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002dda1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void thunk_FUN_1002de66c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100655b6c(param_1 + 0x3bc0);
  iVar1 = FUN_1004e3654(uVar2,param_1 + 0x3ec0);
  if (iVar1 != 0) {
    FUN_1005375d0(param_1 + 0x3928);
    return;
  }
  return;
}




void FUN_1002dda24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1005375d0(param_1 + 0x3928);
  FUN_100537100(param_1 + 0x3928);
  FUN_100644b14(param_4);
  return;
}




void FUN_1002dda5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002de6b8(param_1,param_4);
  return;
}




void FUN_1002dda68(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float local_88;
  float fStack_84;
  
  FUN_10064e32c();
  local_88 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_84 = (float)param_2;
  FUN_10064e48c(param_3 + 0x18,&local_88);
  plVar1 = param_3 + 0x36;
  (**(code **)(*param_3 + 0x48))(param_3);
  uVar8 = 0x42f00000;
  FUN_10064e47c(plVar1);
  local_88 = (float)FUN_10064e3cc(plVar1);
  fStack_84 = (float)uVar8;
  FUN_10064e48c(param_3 + 0x4d,&local_88);
  plVar2 = param_3 + 0x6b;
  local_88 = (float)FUN_10064e3cc(plVar1);
  fStack_84 = (float)uVar8;
  FUN_10064e48c(plVar2,&local_88);
  plVar3 = param_3 + 0x9f;
  fVar9 = (float)FUN_10064e3cc(plVar1);
  FUN_100652eac(plVar3,(int)(fVar9 * 0.45));
  uVar10 = FUN_10064e3cc(plVar1);
  FUN_10064e47c(uVar10,0x40800000,param_3 + 0xbd);
  plVar4 = param_3 + 0x6d2;
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar11 = 100.0;
  FUN_10064e47c(fVar9 + -96.0,plVar4);
  local_88 = (float)FUN_10064e3cc(plVar4);
  fStack_84 = fVar11;
  FUN_10064e48c(param_3 + 0x707,&local_88);
  local_88 = (float)FUN_10064e3cc(plVar4);
  local_88 = local_88 + -6.0;
  fVar11 = fVar11 + -6.0;
  fStack_84 = fVar11;
  FUN_10064e48c(param_3 + 0x6e9,&local_88);
  FUN_10064e3cc(plVar4);
  FUN_1005371f8(param_3 + 0x725);
  plVar5 = param_3 + 0x56f;
  uVar10 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar9 = fVar11;
  FUN_10064e3cc(plVar1);
  fVar12 = fVar9;
  FUN_10064e3cc(plVar4);
  fVar9 = (fVar11 + -96.0) - (fVar9 + fVar12);
  FUN_10064e47c(uVar10,plVar5);
  local_88 = (float)FUN_10064e3cc(plVar5);
  fStack_84 = fVar9;
  FUN_10064e48c(param_3 + 0x6b4,&local_88);
  FUN_10064e5ec(0,0,param_3 + 0x18,8,param_3,8);
  FUN_10064e72c(0,plVar1,0,param_3,0);
  FUN_10064e5ec(0,0,param_3 + 0x4d,8,plVar1,8);
  FUN_10064e5ec(0,0,plVar2,8,plVar1,8);
  FUN_10064e72c(0xc3200000,plVar3,3,plVar2,3);
  FUN_10064e72c(0,plVar3,5,plVar2,5);
  FUN_10064e72c(0,param_3 + 0xbd,2,plVar1,2);
  FUN_10064e72c(0x42400000,param_3 + 0xdb,3,plVar1,3);
  FUN_10064e72c(0,param_3 + 0xdb,5,plVar1,5);
  plVar2 = param_3 + 0x27b;
  if (((*(byte *)((long)param_3 + 0x145c) >> 2 & 1) != 0) &&
     ((*(byte *)((long)param_3 + 0x202c) >> 2 & 1) == 0)) {
    FUN_10064e72c(0xc2c00000,plVar2,1,plVar1,1);
  }
  plVar3 = param_3 + 0x101;
  if (((*(byte *)((long)param_3 + 0x88c) >> 2 & 1) != 0) &&
     ((*(byte *)((long)param_3 + 0x202c) >> 2 & 1) == 0)) {
    FUN_10064e72c(0xc2c00000,plVar3,1,plVar1,1);
  }
  plVar6 = param_3 + 0x3f5;
  if ((*(byte *)((long)param_3 + 0x202c) >> 2 & 1) != 0) {
    FUN_10064e72c(0xc2c00000,plVar6,1,plVar1,1);
    if ((*(byte *)((long)param_3 + 0x145c) >> 2 & 1) == 0) {
      plVar7 = plVar6;
      if ((*(byte *)((long)param_3 + 0x88c) >> 2 & 1) == 0) goto LAB_1002dde58;
    }
    else {
      FUN_10064e72c(0xc2c00000,plVar2,1,plVar6,3);
      plVar7 = plVar2;
    }
    FUN_10064e72c(0xc2c00000,plVar3,1,plVar7,3);
  }
LAB_1002dde58:
  FUN_10064e72c(0,plVar6,5,plVar1,5);
  FUN_10064e72c(0,plVar3,5,plVar1,5);
  FUN_10064e72c(0,plVar2,5,plVar1,5);
  FUN_10064e5ec(0,0,plVar5,4,plVar1,6);
  FUN_10064e72c(0,plVar5,4,param_3,4);
  FUN_10064e5ec(0,0,param_3 + 0x6b4,8,plVar5,8);
  FUN_10064e5ec(0,0xc2400000,plVar4,6,param_3,6);
  FUN_10064e72c(0,plVar4,4,param_3,4);
  FUN_10064e5ec(0,0,param_3 + 0x6e9,8,plVar4,8);
  FUN_10064e5ec(0,0,param_3 + 0x707,8,plVar4,8);
  FUN_10064e5ec(0,0,param_3 + 0x725,8,plVar4,8);
  FUN_1002ddfb8(param_3);
  FUN_100537780(param_3 + 0x73c);
  return;
}




void FUN_1002ddfb8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  plVar1 = param_3 + 0x56f;
  lVar3 = FUN_100534eb4(plVar1);
  if (*(long **)(lVar3 + 0x28) != (long *)0x0) {
    iVar9 = 0;
    plVar4 = *(long **)(lVar3 + 0x28);
    plVar6 = (long *)0x0;
    do {
      plVar8 = plVar4;
      lVar3 = plVar8[0x17];
      fVar10 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar11 = -384.0;
      if ((int)lVar3 != 1) {
        fVar11 = -96.0;
      }
      FUN_10064e47c(fVar10 + fVar11,0,plVar8);
      fVar10 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar11 = (float)(**(code **)(*plVar8 + 0x48))(plVar8);
      fVar10 = fVar10 - fVar11;
      if (iVar9 == 0) {
        if ((int)plVar8[0x17] == 1) {
          fVar11 = 48.0;
          if ((char)plVar8[0xb5] != '\0') {
            fVar11 = fVar10 + -48.0;
          }
          plVar6 = (long *)plVar8[4];
          param_2 = 0.0;
          uVar5 = 0;
          uVar7 = 0;
        }
        else {
          plVar6 = (long *)plVar8[4];
          fVar11 = 0.0;
          param_2 = 0.0;
          uVar5 = 4;
          uVar7 = 4;
        }
      }
      else {
        param_2 = 72.0;
        if ((int)plVar8[0x17] == 1) {
          cVar2 = (char)plVar8[0xb5];
          if ((int)plVar6[0x17] == 0) goto joined_r0x0001002de0ec;
          if (cVar2 == '\0') {
            if ((char)plVar6[0xb5] == '\0') goto LAB_1002de160;
            fVar11 = 96.0 - fVar10;
          }
          else {
            if ((char)plVar6[0xb5] != '\0') {
LAB_1002de160:
              fVar11 = 0.0;
              uVar5 = 4;
              uVar7 = 6;
              goto LAB_1002de178;
            }
            fVar11 = fVar10 + -96.0;
          }
        }
        else {
          if ((int)plVar6[0x17] != 1) goto LAB_1002de160;
          cVar2 = (char)plVar6[0xb5];
joined_r0x0001002de0ec:
          if (cVar2 != '\0') {
            fVar11 = 0.0;
            uVar5 = 1;
            uVar7 = 2;
            goto LAB_1002de178;
          }
          fVar11 = 0.0;
        }
        uVar5 = 0;
        uVar7 = 3;
      }
LAB_1002de178:
      FUN_10064e5ec(fVar11,plVar8,uVar5,plVar6,uVar7);
      iVar9 = iVar9 + -1;
      plVar4 = (long *)plVar8[6];
      plVar6 = plVar8;
    } while ((long *)plVar8[6] != (long *)0x0);
  }
  lVar3 = FUN_100534eb4(plVar1);
  plVar4 = (long *)FUN_100534eb4(plVar1);
  (**(code **)(*plVar4 + 0x48))();
  fVar11 = param_2;
  FUN_10064e3cc(plVar1);
  if (*(float *)(lVar3 + 0x44) == fVar11 - param_2) {
    return;
  }
  *(float *)(lVar3 + 0x44) = fVar11 - param_2;
  FUN_1000200a0(lVar3);
  return;
}




void FUN_1002de20c(long param_1)

{
  FUN_1005375d0(param_1 + 0x3928);
  FUN_100537100(param_1 + 0x3928);
  return;
}




void FUN_1002de238(long param_1)

{
  FUN_1005375d0(param_1 + 0x3928);
  FUN_100537100(param_1 + 0x3928);
  return;
}




void FUN_1002de264(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  
  plVar1 = operator_new(0x5b0);
  lVar2 = FUN_1002dcec4();
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x20;
  *(undefined4 *)(lVar2 + 0xb8) = 1;
  FUN_1002dd1a0(lVar2,param_2,param_3,param_4,param_5);
  fVar3 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(fVar3 + -384.0,0,plVar1);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_100534ad8(param_1 + 0x56f,plVar1,1);
  FUN_1002ddfb8(param_1);
  return;
}




void FUN_1002de328(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  
  plVar1 = operator_new(0x500);
  lVar2 = FUN_1002dcb64();
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x20;
  *(undefined4 *)(lVar2 + 0xb8) = 0;
  FUN_1002dce38(lVar2,param_2,param_3);
  fVar3 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(fVar3 + -96.0,0,plVar1);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_100534ad8(param_1 + 0x56f,plVar1,1);
  FUN_1002ddfb8(param_1);
  return;
}




void FUN_1002de3d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100534eb4(param_1 + 0x2b78);
  lVar1 = *(long *)(lVar1 + 0x28);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x30);
    FUN_1006423ec(lVar1,1);
    lVar1 = lVar2;
  }
  return;
}




void FUN_1002de410(long param_1,uint param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  char *pcVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  if ((param_4 != 0) || (((param_3 & 1) == 0 && ((param_2 & 1) == 0)))) {
    *(uint *)(param_1 + 0x88c) = *(uint *)(param_1 + 0x88c) & 0xfffffffb;
    return;
  }
  if (((param_2 & 1) != 0) || (param_3 != 0)) {
    *(uint *)(param_1 + 0x88c) = *(uint *)(param_1 + 0x88c) | 4;
  }
  puVar1 = PTR_s_build___MenuPartsCommon_tga_101854970;
  if (param_2 == 0) {
    pcVar2 = "generic_guild_outline";
  }
  else {
    pcVar2 = "generic_guild";
  }
  FUN_10001549c(local_48,pcVar2);
  FUN_10001549c(local_60,pcVar2);
  FUN_1002ece5c(param_1 + 0x808,puVar1,local_48,local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (-1 < local_31) {
    return;
  }
  operator_delete(local_48[0]);
  return;
}




void FUN_1002de4dc(long param_1,uint param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  char *pcVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  if ((param_4 != 0) || (((param_3 & 1) == 0 && ((param_2 & 1) == 0)))) {
    *(uint *)(param_1 + 0x145c) = *(uint *)(param_1 + 0x145c) & 0xfffffffb;
    return;
  }
  if (((param_2 & 1) != 0) || (param_3 != 0)) {
    *(uint *)(param_1 + 0x145c) = *(uint *)(param_1 + 0x145c) | 4;
  }
  puVar1 = PTR_s_build___MenuPartsCommon_tga_101854970;
  if (param_2 == 0) {
    pcVar2 = "generic_team_outline";
  }
  else {
    pcVar2 = "generic_team";
  }
  FUN_10001549c(local_48,pcVar2);
  FUN_10001549c(local_60,pcVar2);
  FUN_1002ece5c(param_1 + 0x13d8,puVar1,local_48,local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (-1 < local_31) {
    return;
  }
  operator_delete(local_48[0]);
  return;
}




void FUN_1002de5ac(long param_1,int param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  puVar1 = PTR_s_build___VGX_common_atlas_101854980;
  puVar3 = PTR_s_build___MenuPartsCommon_tga_101854970;
  if (param_2 == 0) {
    pcVar2 = "generic_invite_friend_hollow";
    FUN_10001549c(local_48,"generic_invite_friend_hollow");
  }
  else {
    FUN_10001549c(local_48,"global_checkbox_x_normal");
    pcVar2 = "global_checkbox_x_press_round";
    puVar3 = puVar1;
  }
  FUN_10001549c(local_60,pcVar2);
  FUN_1002ece5c(param_1 + 0x1fa8,puVar3,local_48,local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_1002de66c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100655b6c(param_1 + 0x3bc0);
  iVar1 = FUN_1004e3654(uVar2,param_1 + 0x3ec0);
  if (iVar1 != 0) {
    FUN_1005375d0(param_1 + 0x3928);
    return;
  }
  return;
}




void FUN_1002de6b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_100644b2c(param_2);
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),lVar1);
  }
  FUN_1005375d0(param_1 + 0x3928);
  FUN_100644b14(param_2);
  return;
}




void FUN_1002de708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101489258;
  thunk_FUN_100651068(param_1 + 0x7a);
  thunk_FUN_100651068(param_1 + 0x54);
  param_1[0x36] = &PTR_FUN_1014a7108;
  param_1[0x4d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x50);
  FUN_10064e2bc(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002de794(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101489258;
  thunk_FUN_100651068(param_1 + 0x7a);
  thunk_FUN_100651068(param_1 + 0x54);
  param_1[0x36] = &PTR_FUN_1014a7108;
  param_1[0x4d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x50);
  FUN_10064e2bc(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002de824(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014893a0;
  thunk_FUN_100651068(param_1 + 0x8f);
  thunk_FUN_100651068(param_1 + 0x69);
  thunk_FUN_100651068(param_1 + 0x43);
  param_1[0x18] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2f);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002de88c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014893a0;
  thunk_FUN_100651068(param_1 + 0x8f);
  thunk_FUN_100651068(param_1 + 0x69);
  thunk_FUN_100651068(param_1 + 0x43);
  param_1[0x18] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2f);
  FUN_10064e2bc(param_1 + 0x18);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002de910(void)

{
  FUN_1002de910();
  return;
}




void FUN_1002de8fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002de910();
  operator_delete(pvVar1);
  return;
}




void FUN_1002de910(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002de910_1014894e8;
  if ((void *)param_1[0x7d9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7d9]);
    param_1[0x7d9] = 0;
    param_1[0x7d8] = 0;
  }
  thunk_FUN_1001cec4c(param_1 + 0x7bb);
  thunk_FUN_100536ddc(param_1 + 0x725);
  param_1[0x707] = &PTR_FUN_1014a7108;
  param_1[0x71e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x721);
  FUN_10064e2bc(param_1 + 0x707);
  param_1[0x6e9] = &PTR_FUN_1014a7108;
  param_1[0x700] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x703);
  FUN_10064e2bc(param_1 + 0x6e9);
  thunk_FUN_10064e2bc(param_1 + 0x6d2);
  param_1[0x6b4] = &PTR_FUN_1014a7108;
  param_1[0x6cb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6ce);
  FUN_10064e2bc(param_1 + 0x6b4);
  thunk_FUN_100534a3c(param_1 + 0x56f);
  FUN_1001acc08(param_1 + 0x3f5);
  FUN_1001acc08(param_1 + 0x27b);
  FUN_1001acc08(param_1 + 0x101);
  thunk_FUN_100651068(param_1 + 0xdb);
  param_1[0xbd] = &PTR_FUN_1014a7108;
  param_1[0xd4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd7);
  FUN_10064e2bc(param_1 + 0xbd);
  param_1[0x9f] = &PTR_FUN_1014a7108;
  param_1[0xb6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb9);
  FUN_10064e2bc(param_1 + 0x9f);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  thunk_FUN_10064e2bc(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_1002deaac(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  void *local_88 [2];
  char local_71;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_101489630;
  puVar4 = puVar4 + 0x17;
  thunk_FUN_1002ecd94(puVar4,0);
  plVar1 = param_1 + 0x191;
  thunk_FUN_1002ecd94(plVar1,0);
  thunk_FUN_1004e439c(param_1 + 0x30b,&DAT_101d91650);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_1002eb970(puVar4,0);
  puVar2 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&local_70,"global_checkbox_x_normal");
  FUN_10001549c(local_88,"global_checkbox_x_press_round");
  FUN_1002ece5c(puVar4,puVar2,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60._7_1_ < '\0') {
    operator_delete(local_70);
  }
  uVar3 = DAT_101d91884;
  local_48 = DAT_101d91884;
  local_70 = FUN_1002dec8c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_70);
  FUN_1002eb970(plVar1,0);
  puVar2 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&local_70,"global_checkbox_v_normal");
  FUN_10001549c(local_88,"global_checkbox_v_press_round");
  FUN_1002ece5c(plVar1,puVar2,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar3;
  local_70 = FUN_1002dec98;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x192,&local_70);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1002dec8c(long param_1)

{
  FUN_10011194c(param_1 + 0x1858);
  return;
}




void FUN_1002dec98(long param_1)

{
  FUN_100111870(param_1 + 0x1858);
  return;
}




void FUN_1002deca4(long param_1)

{
  FUN_10064e32c();
  FUN_10064e72c(0,param_1 + 0xb8,5,param_1,5);
  FUN_10064e72c(0,param_1 + 0xc88,5,param_1,5);
  FUN_10064e72c(0x42200000,param_1 + 0xb8,3,param_1,3);
  FUN_10064e72c(0xc2200000,param_1 + 0xc88,1,param_1,1);
  return;
}




long * FUN_1002ded38(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  void *local_88 [2];
  char local_71;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_101489778;
  puVar4 = puVar4 + 0x17;
  thunk_FUN_1002ecd94(puVar4,0);
  plVar1 = param_1 + 0x191;
  thunk_FUN_1002ecd94(plVar1,0);
  FUN_10003330c(param_1 + 0x30b,&DAT_101d91198);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_1002eb970(puVar4,0);
  puVar2 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&local_70,"global_checkbox_x_normal");
  FUN_10001549c(local_88,"global_checkbox_x_press_round");
  FUN_1002ece5c(puVar4,puVar2,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60._7_1_ < '\0') {
    operator_delete(local_70);
  }
  uVar3 = DAT_101d91884;
  local_48 = DAT_101d91884;
  local_70 = FUN_1002def18;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_70);
  FUN_1002eb970(plVar1,0);
  puVar2 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&local_70,"global_checkbox_v_normal");
  FUN_10001549c(local_88,"global_checkbox_v_press_round");
  FUN_1002ece5c(plVar1,puVar2,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar3;
  local_70 = FUN_1002def24;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x192,&local_70);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1002def18(long param_1)

{
  FUN_1001118f8(param_1 + 0x1858);
  return;
}




void FUN_1002def24(long param_1)

{
  FUN_1001118e8(param_1 + 0x1858);
  return;
}




void FUN_1002def30(long param_1)

{
  FUN_10064e32c();
  FUN_10064e72c(0,param_1 + 0xb8,5,param_1,5);
  FUN_10064e72c(0,param_1 + 0xc88,5,param_1,5);
  FUN_10064e72c(0x42200000,param_1 + 0xb8,3,param_1,3);
  FUN_10064e72c(0xc2200000,param_1 + 0xc88,1,param_1,1);
  return;
}




long * FUN_1002defc4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_1014898c0;
  puVar4 = puVar4 + 0x17;
  FUN_10064e264(puVar4);
  plVar1 = param_1 + 0x2e;
  thunk_FUN_100650e64(plVar1);
  thunk_FUN_1001c6e5c(param_1 + 0x54);
  plVar2 = param_1 + 0xce;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0xe5;
  thunk_FUN_100650e64(plVar3);
  thunk_FUN_1001c6e5c(param_1 + 0x10b);
  param_1[0x185] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  FUN_100642bd8(puVar4,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,param_1 + 0x10b,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar5 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar1,uVar5);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar5 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar3,uVar5);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1002df134(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  FUN_10064e32c();
  lVar1 = param_3 + 0x2a0;
  FUN_1001c72f4(lVar1);
  lVar2 = param_3 + 0x858;
  FUN_1001c72f4(lVar2);
  lVar3 = param_3 + 0x170;
  fVar7 = (float)FUN_1006511d0(lVar3);
  fVar9 = param_2;
  local_68 = (float)FUN_10064e3cc(lVar1);
  local_68 = local_68 + fVar7;
  fVar9 = fVar9 + param_2;
  lVar4 = param_3 + 0x728;
  fStack_64 = fVar9;
  fVar8 = (float)FUN_1006511d0(lVar4);
  fVar7 = fVar9;
  local_70 = (float)FUN_10064e3cc(lVar2);
  local_70 = local_70 + fVar8;
  fStack_6c = fVar7 + fVar9;
  lVar5 = param_3 + 0xb8;
  FUN_10064e48c(lVar5,&local_68);
  lVar6 = param_3 + 0x670;
  FUN_10064e48c(lVar6,&local_70);
  FUN_10064e72c(0,lVar5,5,param_3,5);
  FUN_10064e72c(0,lVar6,5,param_3,5);
  FUN_10064e72c(0,lVar3,4,lVar5,4);
  FUN_10064e72c(0,lVar1,4,lVar5,4);
  FUN_10064e72c(0,lVar3,0,lVar5,0);
  FUN_10064e72c(0,lVar1,0,lVar3,2);
  FUN_10064e72c(0,lVar4,4,lVar6,4);
  FUN_10064e72c(0,lVar2,4,lVar6,4);
  FUN_10064e72c(0,lVar4,0,lVar6,0);
  FUN_10064e72c(0,lVar2,0,lVar4,2);
  FUN_10064e72c(0,lVar6,1,param_3,1);
  FUN_10064e72c(0x80000000,lVar5,1,lVar6,3);
  return;
}




long * FUN_1002df328(long *param_1)

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
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar12 = (undefined8 *)FUN_1001d89e0();
  *puVar12 = &PTR_thunk_FUN_1002e2d24_101489a08;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x36;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x54;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x6b;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xa7;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0xbe;
  FUN_10064e264(plVar5);
  plVar6 = param_1 + 0xd5;
  thunk_FUN_100652c08();
  thunk_FUN_1001c7e54();
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x175;
  FUN_10064e264(plVar7);
  plVar8 = param_1 + 0x18c;
  thunk_FUN_100652c08();
  plVar9 = param_1 + 0x1aa;
  thunk_FUN_10019468c(plVar9,0);
  plVar10 = param_1 + 0x32b;
  thunk_FUN_100652c08(plVar10);
  plVar11 = param_1 + 0x349;
  thunk_FUN_1001d0644(plVar11,0);
  FUN_10064e264();
  FUN_10003330c(param_1 + 0x4e0,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x4e3,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x4e6,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x4e9,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x4ed) = 0;
  param_1[0x4ec] = 0;
  *(undefined4 *)((long)param_1 + 0x276c) = 0x41;
  param_1[0x4ef] = 0;
  param_1[0x4ee] = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  FUN_10003330c(param_1 + 0x4f1,&DAT_101d91198);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,param_1 + 0x89,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,param_1 + 0xf3,1);
  FUN_100642bd8(plVar5,param_1 + 0x14f,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar7,plVar9,1);
  FUN_100642bd8(plVar7,plVar10,1);
  FUN_100642bd8(plVar7,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4c9,1);
  uVar13 = 0x432a0000;
  FUN_10064e47c(0,param_1);
  FUN_100652cac(puVar12 + 0x18,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar12 + 0x18,&DAT_10115a160,2);
  FUN_100652cac(plVar1,DAT_101854a08,"popup_tab_active");
  *(uint *)((long)param_1 + 0x234) = *(uint *)((long)param_1 + 0x234) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x324) = *(uint *)((long)param_1 + 0x324) & 0xfffffffb;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_101158af5,2);
  FUN_100652cac(param_1 + 0x89,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_chat_bubble");
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"friendslist_status_circle");
  local_68 = FUN_1006531b0(plVar6);
  uStack_64 = uVar13;
  FUN_10064e48c(plVar6,&local_68);
  FUN_100651594(param_1 + 0x14f,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild");
  if ((*(float *)(param_1 + 0x195) != 0.5) || (*(float *)((long)param_1 + 0xcac) != 0.5)) {
    param_1[0x195] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar8);
  }
  FUN_100194ba4(0x40e00000,0x40800000,plVar9);
  FUN_10019495c(plVar9,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team");
  if ((*(float *)(param_1 + 0x334) != 0.5) || (*(float *)((long)param_1 + 0x19a4) != 0.5)) {
    param_1[0x334] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar10);
  }
  FUN_1001d0b88(0x40000000,plVar11);
  FUN_1001d08f8(plVar11,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  return param_1;
}




void FUN_1002df7b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 local_58;
  float fStack_54;
  
  FUN_10064e32c();
  plVar1 = param_1 + 0x54;
  fVar10 = (float)FUN_1006531b0(param_1 + 0x89);
  uVar12 = 0x41400000;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(fVar10 + 12.0,plVar1);
  uVar3 = *(uint *)((long)param_1 + 0x324);
  fVar10 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if ((uVar3 >> 2 & 1) != 0) {
    fVar11 = (float)FUN_10064e3cc(plVar1);
    fVar10 = fVar10 - fVar11;
  }
  plVar2 = param_1 + 0xa7;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(fVar10 * 0.6,plVar2);
  plVar6 = param_1 + 0x4c9;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(fVar10 * 0.4,plVar6);
  local_58 = (**(code **)(*param_1 + 0x48))(param_1);
  fStack_54 = (float)uVar12;
  FUN_10064e48c(param_1 + 0x18,&local_58);
  FUN_10064e72c(0,plVar1,5,param_1,5);
  FUN_10064e72c(0,plVar2,5,param_1,5);
  FUN_10064e72c(0,plVar6,5,param_1,5);
  if ((*(byte *)((long)param_1 + 0x324) >> 2 & 1) == 0) {
    uVar7 = 3;
    plVar4 = param_1;
  }
  else {
    FUN_10064e72c(0,plVar1,3,param_1,3);
    uVar7 = 1;
    plVar4 = plVar1;
  }
  FUN_10064e72c(0,plVar2,3,plVar4,uVar7);
  FUN_10064e72c(0,plVar6,3,plVar2,1);
  fVar10 = 0.0;
  FUN_10064e5ec(0,param_1 + 0x18,8,param_1,8);
  local_58 = (**(code **)(*param_1 + 0x48))(param_1);
  fStack_54 = fVar10;
  FUN_10064e48c(param_1 + 0x36,&local_58);
  fVar10 = 0.0;
  FUN_10064e5ec(0,param_1 + 0x36,8,param_1,8);
  lVar9 = param_1[0x4ce];
  if (lVar9 != 0) {
    local_58 = FUN_10064e3cc(plVar6);
    fStack_54 = fVar10;
    FUN_10064e48c(lVar9,&local_58);
    (**(code **)(*(long *)param_1[0x4ce] + 0x90))();
    fVar10 = 0.0;
    FUN_10064e5ec(0,param_1[0x4ce],8,plVar6,8);
  }
  local_58 = FUN_10064e3cc(plVar1);
  fStack_54 = fVar10;
  FUN_10064e48c(param_1 + 0x6b,&local_58);
  FUN_10064e5ec(0,0,param_1 + 0x6b,8,plVar1,8);
  fVar10 = 0.0;
  FUN_10064e5ec(0,param_1 + 0x89,8,plVar1,8);
  plVar1 = param_1 + 0x175;
  plVar6 = param_1 + 0xbe;
  if ((*(byte *)((long)param_1 + 0xc2c) >> 2 & 1) == 0) {
    local_58 = FUN_10064e3cc(plVar2);
    fStack_54 = fVar10;
    FUN_10064e48c(plVar6,&local_58);
    uVar7 = 5;
    uVar8 = 5;
    plVar4 = plVar6;
    plVar6 = plVar2;
  }
  else {
    uVar7 = FUN_10064e3cc(plVar2);
    FUN_10064e3cc(plVar2);
    fVar10 = fVar10 * 0.5;
    FUN_10064e47c(uVar7,fVar10,plVar6);
    uVar7 = FUN_10064e3cc(plVar2);
    FUN_10064e3cc(plVar2);
    FUN_10064e47c(uVar7,fVar10 * 0.5,plVar1);
    FUN_10064e72c(0,plVar6,0,plVar2,0);
    uVar7 = 0;
    uVar8 = 2;
    plVar4 = plVar1;
  }
  FUN_10064e72c(0,plVar4,uVar7,plVar6,uVar8);
  FUN_1002dfd44(param_1);
  plVar2 = param_1 + 0xd5;
  plVar6 = param_1 + 0xbe;
  FUN_10064e72c(0,plVar2,5,plVar6,5);
  plVar4 = param_1 + 0xf3;
  FUN_10064e72c(0,plVar4,5,plVar6,5);
  FUN_10064e72c(0,param_1 + 0x14f,5,plVar6,5);
  FUN_10064e72c(0x41a00000,plVar2,3,plVar6,3);
  if ((*(byte *)((long)param_1 + 0x72c) >> 2 & 1) == 0) {
    uVar7 = 3;
    plVar5 = plVar6;
  }
  else {
    uVar7 = 1;
    plVar5 = plVar2;
  }
  FUN_10064e72c(0x41a00000,plVar4,3,plVar5,uVar7);
  if (((*(byte *)((long)param_1 + 0x81c) >> 2 & 1) == 0) &&
     (plVar4 = plVar2, (*(byte *)((long)param_1 + 0x72c) >> 2 & 1) == 0)) {
    uVar7 = 3;
    plVar4 = plVar6;
  }
  else {
    uVar7 = 1;
  }
  FUN_10064e72c(0x41a00000,param_1 + 0x14f,3,plVar4,uVar7);
  plVar2 = param_1 + 0x18c;
  FUN_10064e72c(0,plVar2,5,plVar1,5);
  plVar6 = param_1 + 0x1aa;
  FUN_10064e72c(0,plVar6,5,plVar1,5);
  plVar4 = param_1 + 0x32b;
  FUN_10064e72c(0,plVar4,5,plVar1,5);
  FUN_10064e72c(0,param_1 + 0x349,5,plVar1,5);
  FUN_100194984(plVar6);
  if ((*(byte *)((long)param_1 + 0xce4) >> 2 & 1) == 0) {
    if ((*(byte *)((long)param_1 + 0x19dc) >> 2 & 1) == 0) {
      return;
    }
    uVar7 = 3;
    plVar6 = plVar1;
  }
  else {
    FUN_10064e72c(0x41a00000,plVar2,3,plVar1,3);
    FUN_10064e72c(0x41a00000,plVar6,3,plVar2,1);
    uVar7 = 1;
  }
  FUN_10064e72c(0x41a00000,plVar4,3,plVar6,uVar7);
  FUN_10064e72c(0x41a00000,param_1 + 0x349,3,plVar4,1);
  return;
}




void FUN_1002dfd44(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if ((*(byte *)(param_1 + 0x324) >> 2 & 1) != 0) {
    fVar1 = (float)FUN_10064e3cc(param_1 + 0x2a0);
  }
  if ((*(byte *)(param_1 + 0x72c) >> 2 & 1) != 0) {
    fVar2 = (float)FUN_100652e60(param_1 + 0x6a8);
    fVar1 = fVar1 + 20.0 + fVar2;
  }
  if ((*(byte *)(param_1 + 0x81c) >> 2 & 1) != 0) {
    fVar2 = (float)FUN_10064e3cc(param_1 + 0x798);
    fVar1 = fVar1 + 20.0 + fVar2;
  }
  fVar2 = (float)FUN_10064e3cc(param_1 + 0x5f0);
  FUN_10065179c((-20.0 - fVar1) + fVar2,0,0x3f800000,param_1 + 0xa78);
  return;
}




void FUN_1002dfddc(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) & 0xfffffffb | uVar1;
  return;
}




void FUN_1002dfdfc(long *param_1,string *param_2,undefined8 param_3,string *param_4,int param_5)

{
  uint uVar1;
  undefined1 auStack_50 [8];
  void *local_48;
  
  std::string::operator=((string *)(param_1 + 0x4e0),param_2);
  std::string::operator=((string *)(param_1 + 0x4e3),param_4);
  std::string::operator=((string *)(param_1 + 0x4e6),param_2);
  *(undefined1 *)(param_1 + 0x4ed) = 1;
  uVar1 = 4;
  if (param_5 == 0) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0x324) = *(uint *)((long)param_1 + 0x324) & 0xfffffffb | uVar1;
  FUN_100652dd4(param_1 + 0xd5,&DAT_101d236c0,2);
  FUN_1004e3170(auStack_50,param_4);
  FUN_1006513c0(param_1 + 0x14f,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  *(uint *)((long)param_1 + 0x81c) = *(uint *)((long)param_1 + 0x81c) & 0xfffffffb;
  FUN_1002dff1c(param_1);
  FUN_1004e3170(auStack_50,param_3);
  FUN_100194b7c(param_1 + 0x1aa,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002dff1c(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  size_t sVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  void *pvVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  
  bVar8 = DAT_101d911a8._7_1_;
  bVar7 = *(byte *)(param_1 + 0x2747);
  uVar17 = (ulong)bVar7;
  sVar5 = *(size_t *)(param_1 + 0x2738);
  if (-1 < (char)bVar7) {
    sVar5 = uVar17;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar5 == sVar2) {
    puVar1 = (undefined8 *)(param_1 + 0x2730);
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar7) {
      puVar4 = puVar1;
    }
    pbVar16 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar16 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if ((sVar5 == 0) || (iVar9 = _memcmp(puVar4,pbVar16,sVar5), iVar9 == 0)) goto LAB_1002e0000;
    }
    else if (sVar5 == 0) {
LAB_1002e0000:
      bVar6 = *(byte *)(param_1 + 0x275f);
      uVar11 = (ulong)bVar6;
      sVar3 = *(size_t *)(param_1 + 0x2750);
      if (-1 < (char)bVar6) {
        sVar3 = uVar11;
      }
      if (sVar3 == sVar5) {
        if ((char)bVar6 < '\0') {
          if ((sVar5 == 0) ||
             (iVar9 = _memcmp(*(void **)(param_1 + 0x2748),pbVar16,sVar5), iVar9 == 0)) {
LAB_1002e008c:
            *(uint *)(param_1 + 0xc2c) = *(uint *)(param_1 + 0xc2c) & 0xfffffffb;
          }
        }
        else {
          if (sVar5 == 0) goto LAB_1002e008c;
          if ((uint)*pbVar16 == ((uint)*(void **)(param_1 + 0x2748) & 0xff)) {
            pbVar15 = (byte *)(param_1 + 0x2749);
            do {
              uVar11 = uVar11 - 1;
              pbVar16 = pbVar16 + 1;
              if (uVar11 == 0) goto LAB_1002e008c;
              bVar6 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar6 == *pbVar16);
          }
        }
      }
    }
    else if ((uint)*pbVar16 == ((uint)(void *)*puVar1 & 0xff)) {
      pbVar13 = (byte *)(param_1 + 0x2731);
      pbVar15 = pbVar16;
      uVar11 = uVar17;
      do {
        uVar11 = uVar11 - 1;
        pbVar15 = pbVar15 + 1;
        if (uVar11 == 0) goto LAB_1002e0000;
        bVar6 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar6 == *pbVar15);
    }
    puVar4 = (undefined8 *)*puVar1;
    if (-1 < (char)bVar7) {
      puVar4 = puVar1;
    }
    pbVar16 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar16 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if (sVar5 == 0) goto LAB_1002e018c;
      iVar9 = _memcmp(puVar4,pbVar16,sVar5);
      *(uint *)(param_1 + 0xce4) =
           *(uint *)(param_1 + 0xce4) & 0xfffffff8 |
           *(uint *)(param_1 + 0xce4) & 3 | (uint)(iVar9 != 0) << 2;
      iVar9 = _memcmp(puVar4,pbVar16,sVar5);
      uVar10 = (uint)(iVar9 != 0) << 2;
    }
    else if (sVar5 == 0) {
LAB_1002e018c:
      uVar10 = 0;
      *(uint *)(param_1 + 0xce4) = *(uint *)(param_1 + 0xce4) & 0xfffffffb;
    }
    else {
      uVar10 = (uint)(undefined8 *)*puVar1;
      if ((uint)*pbVar16 == (uVar10 & 0xff)) {
        pbVar13 = (byte *)(param_1 + 0x2731);
        pbVar15 = pbVar16;
        uVar11 = uVar17;
        do {
          uVar11 = uVar11 - 1;
          pbVar15 = pbVar15 + 1;
          uVar12 = 0;
          if (uVar11 == 0) goto LAB_1002e00f4;
          bVar7 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar7 == *pbVar15);
      }
      uVar12 = 4;
LAB_1002e00f4:
      *(uint *)(param_1 + 0xce4) = *(uint *)(param_1 + 0xce4) & 0xfffffffb | uVar12;
      if (sVar5 == 0) {
LAB_1002e01a0:
        uVar10 = 0;
      }
      else {
        if ((uint)*pbVar16 != (uVar10 & 0xff)) goto LAB_1002dffe4;
        uVar10 = 4;
        pbVar15 = (byte *)(param_1 + 0x2731);
        do {
          uVar17 = uVar17 - 1;
          pbVar16 = pbVar16 + 1;
          if (uVar17 == 0) goto LAB_1002e01a0;
          bVar7 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar7 == *pbVar16);
      }
    }
  }
  else {
    *(uint *)(param_1 + 0xce4) = *(uint *)(param_1 + 0xce4) | 4;
LAB_1002dffe4:
    uVar10 = 4;
  }
  bVar7 = *(byte *)(param_1 + 0x275f);
  uVar17 = (ulong)bVar7;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xfffffffb | uVar10;
  sVar5 = *(size_t *)(param_1 + 0x2750);
  if (-1 < (char)bVar7) {
    sVar5 = uVar17;
  }
  if (sVar5 == sVar2) {
    pvVar14 = *(void **)(param_1 + 0x2748);
    puVar1 = pvVar14;
    if (-1 < (char)bVar7) {
      puVar1 = (undefined8 *)(param_1 + 0x2748);
    }
    pbVar16 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar16 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if (sVar2 != 0) {
        iVar9 = _memcmp(puVar1,pbVar16,sVar2);
        *(uint *)(param_1 + 0x19dc) =
             *(uint *)(param_1 + 0x19dc) & 0xfffffff8 |
             *(uint *)(param_1 + 0x19dc) & 3 | (uint)(iVar9 != 0) << 2;
        iVar9 = _memcmp(puVar1,pbVar16,sVar2);
        uVar10 = (uint)(iVar9 != 0) << 2;
        goto LAB_1002e02fc;
      }
    }
    else if (sVar2 != 0) {
      uVar10 = (uint)pvVar14;
      if ((uint)*pbVar16 == (uVar10 & 0xff)) {
        pbVar13 = (byte *)(param_1 + 0x2749);
        pbVar15 = pbVar16;
        uVar11 = uVar17;
        do {
          uVar11 = uVar11 - 1;
          pbVar15 = pbVar15 + 1;
          uVar12 = 0;
          if (uVar11 == 0) goto LAB_1002e0238;
          bVar7 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar7 == *pbVar15);
      }
      uVar12 = 4;
LAB_1002e0238:
      *(uint *)(param_1 + 0x19dc) = *(uint *)(param_1 + 0x19dc) & 0xfffffffb | uVar12;
      if (sVar2 == 0) {
LAB_1002e02f8:
        uVar10 = 0;
        goto LAB_1002e02fc;
      }
      if ((uint)*pbVar16 == (uVar10 & 0xff)) {
        uVar10 = 4;
        pbVar15 = (byte *)(param_1 + 0x2749);
        do {
          uVar17 = uVar17 - 1;
          pbVar16 = pbVar16 + 1;
          if (uVar17 == 0) goto LAB_1002e02f8;
          bVar7 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar7 == *pbVar16);
        goto LAB_1002e02fc;
      }
      goto LAB_1002e0294;
    }
    uVar10 = 0;
    *(uint *)(param_1 + 0x19dc) = *(uint *)(param_1 + 0x19dc) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x19dc) = *(uint *)(param_1 + 0x19dc) | 4;
LAB_1002e0294:
    uVar10 = 4;
  }
LAB_1002e02fc:
  *(uint *)(param_1 + 0x1acc) = *(uint *)(param_1 + 0x1acc) & 0xfffffffb | uVar10;
  return;
}

