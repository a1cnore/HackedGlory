// functions/10009 — 262 functions
#include "GameKindred.h"




void FUN_100090118(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x47,1);
  FUN_100642bd8(param_1 + 0x47,param_1 + 0x60,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x30,1);
  plVar1 = param_1 + 0xd1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x108;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x13c;
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_1005308f8(plVar3,param_1 + 0x1e3,1);
  plVar4 = param_1 + 0x1fe;
  FUN_100642bd8(plVar1,plVar4,1);
  plVar5 = param_1 + 0x20f;
  FUN_100642bd8(plVar4,plVar5,1);
  plVar6 = param_1 + 0x22d;
  FUN_100642bd8(plVar4,plVar6,1);
  plVar7 = param_1 + 0x24b;
  FUN_100642bd8(plVar4,plVar7,1);
  plVar8 = param_1 + 0x269;
  FUN_100642bd8(plVar4,plVar8,1);
  plVar1 = param_1 + 0x287;
  FUN_100642bd8(plVar4,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x298,1);
  FUN_100642bd8(plVar1,param_1 + 0x2be,1);
  FUN_100642bd8(plVar1,param_1 + 0x2e4,1);
  plVar1 = param_1 + 0xe2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) | 0x10;
  FUN_100651038(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290);
  uVar11 = FUN_1004e0150("HUD_CHOOSE_A_BUILD_TITLE",0);
  FUN_1006513c0(plVar1,uVar11);
  *(uint *)((long)param_1 + 0x794) = *(uint *)((long)param_1 + 0x794) | 0x10;
  FUN_100654488(plVar2,1);
  FUN_100530adc(plVar3,1,0);
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_horizontal");
  *(byte *)(param_1 + 0x22a) = *(byte *)(param_1 + 0x22a) | 1;
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar10 = *(uint *)((long)param_1 + 0x10fc);
  if ((uVar10 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x10fc) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x5900;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_vertical");
  FUN_100652cac(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_vertical");
  *(byte *)(param_1 + 0x266) = *(byte *)(param_1 + 0x266) | 2;
  uVar10 = *(uint *)((long)param_1 + 0x12dc);
  if ((uVar10 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x12dc) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x2600;
    FUN_1000200a0(plVar7);
  }
  uVar10 = *(uint *)((long)param_1 + 0x13cc);
  if ((uVar10 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x13cc) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x2600;
    FUN_1000200a0(plVar8);
  }
  *(uint *)((long)param_1 + 0x14bc) = *(uint *)((long)param_1 + 0x14bc) & 0xfffffffb;
  uVar10 = *(uint *)((long)param_1 + 0x1544);
  if ((uVar10 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1544) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x6600;
    FUN_1000200a0(param_1 + 0x298);
  }
  uVar10 = *(uint *)((long)param_1 + 0x1674);
  if ((uVar10 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1674) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x6600;
    FUN_1000200a0(param_1 + 0x2be);
  }
  uVar11 = FUN_1004e0150("HUD_PATH_SELECTOR_SELECT",0);
  FUN_1001816d4(0x42800000,0,0x44480000,param_1 + 0x2e4,0,uVar11,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_68 = DAT_101d91884;
  local_90 = thunk_FUN_1000914a0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x2e5,&local_90);
  uVar9 = FUN_1004d2524("recommended_path_select");
  uVar10 = FUN_100015208("recommended_path_select",uVar9,0x1234);
  *(uint *)((long)param_1 + 0x17a4) =
       *(uint *)((long)param_1 + 0x17a4) & 0x80000000 |
       *(uint *)((long)param_1 + 0x17a4) & 0x7fff | (uVar10 & 0xffff) << 0xf;
  return;
}




void FUN_100090580(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100090580_1014500c0;
  FUN_10009075c();
  FUN_10003bd40(param_1 + 0x2e4);
  thunk_FUN_100651068(param_1 + 0x2be);
  thunk_FUN_100651068(param_1 + 0x298);
  FUN_10064221c(param_1 + 0x287);
  param_1[0x269] = &PTR_FUN_1014a7108;
  param_1[0x280] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x283);
  FUN_10064e2bc(param_1 + 0x269);
  param_1[0x24b] = &PTR_FUN_1014a7108;
  param_1[0x262] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x265);
  FUN_10064e2bc(param_1 + 0x24b);
  param_1[0x22d] = &PTR_FUN_1014a7108;
  param_1[0x244] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x247);
  FUN_10064e2bc(param_1 + 0x22d);
  param_1[0x20f] = &PTR_FUN_1014a7108;
  param_1[0x226] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x229);
  FUN_10064e2bc(param_1 + 0x20f);
  FUN_10064221c(param_1 + 0x1fe);
  if ((void *)param_1[0x1fd] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1fd]);
    param_1[0x1fd] = 0;
    param_1[0x1fc] = 0;
  }
  FUN_10064e2bc(param_1 + 0x1e3);
  thunk_FUN_100530784(param_1 + 0x13c);
  FUN_10064e2bc(param_1 + 0x108);
  thunk_FUN_100651068(param_1 + 0xe2);
  FUN_10064221c(param_1 + 0xd1);
  param_1[0x60] = &PTR_FUN_101457060;
  param_1[0xb3] = &PTR_FUN_1014a7108;
  param_1[0xca] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcd);
  FUN_10064e2bc(param_1 + 0xb3);
  param_1[0x95] = &PTR_FUN_1014a7108;
  param_1[0xac] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaf);
  FUN_10064e2bc(param_1 + 0x95);
  param_1[0x77] = &PTR_FUN_1014a7108;
  param_1[0x8e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x91);
  FUN_10064e2bc(param_1 + 0x77);
  FUN_10064e2bc(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x47);
  thunk_FUN_10064e2bc(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10009075c(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xfe0);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xfe8) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0xfe8) + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0xfe0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0xfe8) != 0) {
    *(undefined4 *)(param_1 + 0xfe0) = 0;
  }
  return;
}




void thunk_FUN_100090580(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100090580_1014500c0;
  FUN_10009075c();
  FUN_10003bd40(param_1 + 0x2e4);
  thunk_FUN_100651068(param_1 + 0x2be);
  thunk_FUN_100651068(param_1 + 0x298);
  FUN_10064221c(param_1 + 0x287);
  param_1[0x269] = &PTR_FUN_1014a7108;
  param_1[0x280] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x283);
  FUN_10064e2bc(param_1 + 0x269);
  param_1[0x24b] = &PTR_FUN_1014a7108;
  param_1[0x262] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x265);
  FUN_10064e2bc(param_1 + 0x24b);
  param_1[0x22d] = &PTR_FUN_1014a7108;
  param_1[0x244] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x247);
  FUN_10064e2bc(param_1 + 0x22d);
  param_1[0x20f] = &PTR_FUN_1014a7108;
  param_1[0x226] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x229);
  FUN_10064e2bc(param_1 + 0x20f);
  FUN_10064221c(param_1 + 0x1fe);
  if ((void *)param_1[0x1fd] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1fd]);
    param_1[0x1fd] = 0;
    param_1[0x1fc] = 0;
  }
  FUN_10064e2bc(param_1 + 0x1e3);
  thunk_FUN_100530784(param_1 + 0x13c);
  FUN_10064e2bc(param_1 + 0x108);
  thunk_FUN_100651068(param_1 + 0xe2);
  FUN_10064221c(param_1 + 0xd1);
  param_1[0x60] = &PTR_FUN_101457060;
  param_1[0xb3] = &PTR_FUN_1014a7108;
  param_1[0xca] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcd);
  FUN_10064e2bc(param_1 + 0xb3);
  param_1[0x95] = &PTR_FUN_1014a7108;
  param_1[0xac] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaf);
  FUN_10064e2bc(param_1 + 0x95);
  param_1[0x77] = &PTR_FUN_1014a7108;
  param_1[0x8e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x91);
  FUN_10064e2bc(param_1 + 0x77);
  FUN_10064e2bc(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x47);
  thunk_FUN_10064e2bc(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000907c4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100090580();
  operator_delete(pvVar1);
  return;
}




void FUN_1000907d8(long param_1,long param_2)

{
  int iVar1;
  
  FUN_1003467f8();
  iVar1 = FUN_10034ce90();
  if (iVar1 != 0) {
    *(long *)(param_1 + 0x2cd8) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x2ce0) = *(undefined4 *)(param_2 + 0x30);
    FUN_100090824(param_1);
    return;
  }
  return;
}




void FUN_100090824(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  FUN_10009075c();
  plVar2 = (long *)param_1[0x59b];
  if (plVar2 == (long *)0x0) {
    lVar3 = 0;
  }
  else if ((int)param_1[0x59c] == (int)plVar2[1]) {
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    if (lVar3 != 0) {
      plVar2 = *(long **)(*(long *)(lVar3 + 0x38) + 0x198);
      lVar7 = *plVar2;
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          if (*(char *)(lVar7 + 0x50) == '\0') {
            FUN_1003467f8();
            uVar4 = FUN_10034cf88();
            if ((uVar4 & 1) == 0) {
              lVar7 = plVar2[lVar8];
              goto LAB_100090894;
            }
          }
          else {
LAB_100090894:
            if (*(char *)(lVar7 + 0x51) != '\0') {
              FUN_1003467f8();
              iVar1 = FUN_10034cf58();
              if (iVar1 == 0) goto LAB_1000908d0;
              lVar7 = plVar2[lVar8];
            }
            if (*(char *)(lVar7 + 0x52) != '\0') {
              FUN_1003467f8();
              uVar4 = FUN_10034cf58();
              if ((uVar4 & 1) != 0) goto LAB_1000908d0;
              lVar7 = plVar2[lVar8];
            }
            FUN_100091158(param_1,lVar7,lVar8);
          }
LAB_1000908d0:
          lVar7 = plVar2[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (lVar7 != 0);
      }
      FUN_100091158(param_1,0,0xfe);
      (**(code **)(*param_1 + 0x150))(param_1);
    }
  }
  else {
    lVar3 = 0;
    param_1[0x59b] = 0;
    *(undefined4 *)(param_1 + 0x59c) = DAT_101dc0b88;
  }
  uVar5 = FUN_100345b94();
  uVar6 = FUN_100345bb4(lVar3);
  FUN_100345ba0(uVar5,uVar6);
  uVar5 = FUN_100131084();
  FUN_100091298(param_1,uVar5);
  return;
}




void FUN_10009095c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100269e20(0x3e19999a,param_1 + 0x47,param_2,1,1);
  (**(code **)(*param_1 + 0x150))(param_1);
  if ((int)param_2 == 0) {
    *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
    *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffffffef;
  }
  else {
    *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
    uVar1 = FUN_10001f55c();
    FUN_10063f0e8(0x3d4ccccd);
    uVar2 = FUN_10006bf14();
    FUN_10063f0d8(uVar2,1);
    FUN_100642b7c(param_1 + 0x19,uVar1);
    *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffffffef;
    uVar1 = FUN_10001f55c();
    FUN_10063f0e8(0x3d4ccccd);
    uVar2 = FUN_10006bf14();
    FUN_10063f0d8(uVar2,1);
    FUN_100642b7c(param_1 + 0x30,uVar1);
  }
  return;
}




void FUN_100090a64(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100090a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void thunk_FUN_1000914a0(void)

{
  FUN_1000914a0();
  return;
}




void FUN_100090a74(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_b8 [2];
  int local_a8;
  int local_a4;
  float local_a0;
  float local_9c;
  undefined1 auStack_98 [4];
  undefined4 local_94;
  
  uVar4 = FUN_100641574("root-layer");
  FUN_10064142c(&local_94,auStack_98);
  FUN_100641464(&local_9c,&local_a0);
  FUN_10016ae00(&local_a4,0,&local_a8,0);
  fVar12 = *(float *)(param_1 + 0x40);
  fVar13 = *(float *)(param_1 + 0x44);
  bVar3 = false;
  if ((fVar12 == (float)DAT_101dc1cb8) && (bVar3 = false, !NAN(fVar13) && !NAN(DAT_101dc1cb8._4_4_))
     ) {
    bVar3 = fVar13 == DAT_101dc1cb8._4_4_;
  }
  fVar14 = fVar12;
  fVar11 = fVar13;
  if (!bVar3) {
    *(ulong *)(param_1 + 0x40) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1);
    fVar14 = *(float *)(param_1 + 0x40);
    fVar11 = *(float *)(param_1 + 0x44);
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0x278) == (float)DAT_101dc1cb8) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x27c)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar3 = *(float *)(param_1 + 0x27c) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar3) {
    *(ulong *)(param_1 + 0x278) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1 + 0x238);
  }
  FUN_10064e47c(local_9c,local_a0,param_1);
  lVar5 = param_1 + 0x300;
  FUN_10064e47c(local_94,0x44924000,lVar5);
  FUN_10064e72c(0,lVar5,3,uVar4,3);
  FUN_10064e72c(0,lVar5,5,param_1,5);
  fVar10 = *(float *)(param_1 + 0x344);
  FUN_10064e47c(local_9c,fVar10,param_1 + 200);
  if (*(float *)(param_1 + 0x1c4) != local_a0 + -142.0) {
    *(float *)(param_1 + 0x1c4) = local_a0 + -142.0;
    FUN_1000200a0(param_1 + 0x180);
  }
  FUN_10064e47c(local_9c,0x430e0000,param_1 + 0x180);
  if ((*(float *)(param_1 + 0x750) != 80.0) || (*(float *)(param_1 + 0x754) != fVar10 + -79.0)) {
    *(undefined4 *)(param_1 + 0x750) = 0x42a00000;
    *(float *)(param_1 + 0x754) = fVar10 + -79.0;
    FUN_1000200a0(param_1 + 0x710);
  }
  if ((*(float *)(param_1 + 0x6c8) != 0.0) || (*(float *)(param_1 + 0x6cc) != fVar10)) {
    *(undefined4 *)(param_1 + 0x6c8) = 0;
    *(float *)(param_1 + 0x6cc) = fVar10;
    FUN_1000200a0(param_1 + 0x688);
  }
  FUN_10064e47c(local_9c + -625.0 + (float)local_a4,0x44924000,param_1 + 0x840);
  if (*(float *)(param_1 + 0x880) != (float)-local_a4) {
    *(float *)(param_1 + 0x880) = (float)-local_a4;
    FUN_1000200a0(param_1 + 0x840);
  }
  lVar5 = param_1 + 0xf18;
  if ((*(float *)(param_1 + 0xf58) != 80.0) || (*(float *)(param_1 + 0xf5c) != 160.0)) {
    *(undefined8 *)(param_1 + 0xf58) = 0x4320000042a00000;
    FUN_1000200a0(lVar5);
  }
  FUN_10064fc74((float)local_a4,0,0x42a00000,local_b8);
  FUN_100650064(lVar5,local_b8);
  (**(code **)(*(long *)(param_1 + 0xf18) + 0x90))(lVar5);
  if (*(int *)(param_1 + 0xfe0) != 0) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0xfe8) + uVar6 * 8);
      FUN_10064e47c(0x44110000,0x446d8000,lVar5);
      *(undefined8 *)(lVar5 + 0x1628) = 0x446d8000440c0000;
      FUN_10008fb98(lVar5);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xfe0));
  }
  FUN_100530a48(param_1 + 0x9e0,1);
  FUN_100530ad0(0x42a00000,0,param_1 + 0x9e0);
  if ((*(float *)(param_1 + 0x1030) != local_9c + -625.0) || (*(float *)(param_1 + 0x1034) != 0.0))
  {
    *(float *)(param_1 + 0x1030) = local_9c + -625.0;
    *(undefined4 *)(param_1 + 0x1034) = 0;
    FUN_1000200a0(param_1 + 0xff0);
  }
  FUN_10064e47c((float)local_a8 + 625.0,0x44924000,param_1 + 0x1168);
  lVar5 = param_1 + 0x1078;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x10bc) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x10b8))))
  {
    bVar3 = *(float *)(param_1 + 0x10b8) == 0.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x10b8) = 0;
    FUN_1000200a0(lVar5);
  }
  local_b8[0] = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x1078) + 0x28))(lVar5,local_b8);
  FUN_10064e47c(0x42c80000,0x44924000,lVar5);
  lVar5 = param_1 + 0x1258;
  if ((*(float *)(param_1 + 0x1298) != 0.0) || (*(float *)(param_1 + 0x129c) != 585.0)) {
    *(undefined8 *)(param_1 + 0x1298) = 0x4412400000000000;
    FUN_1000200a0(lVar5);
  }
  local_b8[0] = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x1258) + 0x28))(lVar5,local_b8);
  lVar1 = param_1 + 0x1348;
  if ((*(float *)(param_1 + 5000) != 0.0) || (*(float *)(param_1 + 0x138c) != 585.0)) {
    *(undefined8 *)(param_1 + 5000) = 0x4412400000000000;
    FUN_1000200a0(lVar1);
  }
  local_b8[0] = 0;
  (**(code **)(*(long *)(param_1 + 0x1348) + 0x28))(lVar1,local_b8);
  FUN_10064e47c(0x40800000,0x44124000,lVar5);
  FUN_10064e47c(0x40800000,0x44124000,lVar1);
  fVar10 = 48.0;
  if (*(float *)(param_1 + 0x1478) == 48.0) {
    fVar7 = 160.0;
    fVar10 = 160.0;
    if (*(float *)(param_1 + 0x147c) == 160.0) goto LAB_100090f58;
  }
  fVar7 = fVar10;
  *(undefined8 *)(param_1 + 0x1478) = 0x4320000042400000;
  FUN_1000200a0(param_1 + 0x1438);
LAB_100090f58:
  lVar5 = param_1 + 0x14c0;
  FUN_100651708(0x44074000,lVar5,1);
  FUN_100651038(lVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10064259c(lVar5);
  lVar5 = param_1 + 0x15f0;
  if ((*(float *)(param_1 + 0x1630) != 0.0) || (*(float *)(param_1 + 0x1634) != fVar7 + 24.0)) {
    *(undefined4 *)(param_1 + 0x1630) = 0;
    *(float *)(param_1 + 0x1634) = fVar7 + 24.0;
    FUN_1000200a0(lVar5);
  }
  FUN_100651708(0x44074000,lVar5,1);
  FUN_100651038(lVar5,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  lVar1 = param_1 + 0x1720;
  lVar2 = param_1 + 0x1e38;
  FUN_100651038(lVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100181b70(0x43f58000,lVar1);
  fVar10 = (float)FUN_1006511d0(lVar2);
  fVar7 = 140.0;
  uVar8 = NEON_fminnm(fVar10 + 140.0,0x44074000);
  FUN_1006511d0(lVar2);
  fVar7 = fVar7 + 60.0;
  FUN_10064e47c(uVar8,param_1 + 0x1988);
  FUN_10064259c(param_1 + 0x1988);
  fVar10 = fVar7 * -0.5 + 950.0;
  fVar7 = *(float *)(param_1 + 0x1760);
  if ((fVar7 != 270.5) || (fVar9 = *(float *)(param_1 + 0x1764), fVar9 != fVar10)) {
    *(undefined4 *)(param_1 + 0x1760) = 0x43874000;
    *(float *)(param_1 + 0x1764) = fVar10;
    FUN_1000200a0(lVar1);
    fVar9 = *(float *)(param_1 + 0x1764);
  }
  FUN_10064259c(lVar1);
  FUN_10065184c(((fVar9 + -60.0) - *(float *)(param_1 + 0x1634)) + fVar7 * -0.5,0,0x3f800000,lVar5);
  if ((*(float *)(param_1 + 0x40) != fVar12) || (*(float *)(param_1 + 0x44) != fVar13)) {
    *(float *)(param_1 + 0x40) = fVar12;
    *(float *)(param_1 + 0x44) = fVar13;
    FUN_1000200a0(param_1);
  }
  if ((*(float *)(param_1 + 0x278) != fVar14) || (*(float *)(param_1 + 0x27c) != fVar11)) {
    *(float *)(param_1 + 0x278) = fVar14;
    *(float *)(param_1 + 0x27c) = fVar11;
    FUN_1000200a0(param_1 + 0x238);
  }
  return;
}




void FUN_100091158(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 local_78;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  pvVar2 = operator_new(0x1630);
  local_78 = FUN_10008f2e0();
  FUN_10008f5d0(local_78,param_2,param_3);
  local_50 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_48 = DAT_101dbd458;
  local_70 = FUN_1000912fc;
  local_60 = 0;
  uStack_58 = 0;
  lVar1 = (long)pvVar2 + 8;
  lStack_68 = param_1;
  FUN_10001554c(lVar1,&local_70);
  local_50 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_48 = DAT_101dbd484;
  local_70 = FUN_1000912fc;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar1,&local_70);
  local_50 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_48 = DAT_101dbd460;
  local_70 = FUN_100091308;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar1,&local_70);
  local_50 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_100091308;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar1,&local_70);
  FUN_100091330(param_1 + 0xfe0,&local_78);
  FUN_100642bd8(param_1 + 0xf18,local_78,1);
  return;
}




void FUN_100091298(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0xfe0);
  if (*(uint *)(param_1 + 0xfe0) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(long *)(*(long *)(param_1 + 0xfe8) + uVar2 * 8) + 0xc0) == param_2) {
        FUN_1000913b0(param_1,uVar2);
        uVar1 = (ulong)*(uint *)(param_1 + 0xfe0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}




void FUN_1000912fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100091418(param_1,param_4,param_5);
  return;
}




void FUN_100091308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000913b0(param_1,param_5);
  FUN_100644b14(param_4);
  return;
}




void FUN_100091330(uint *param_1,undefined8 *param_2)

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
    FUN_100091834(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000913b0(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2ce8);
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0xfe0))) {
    FUN_10008f914(*(undefined8 *)(*(long *)(param_1 + 0xfe8) + (ulong)uVar1 * 8),0);
  }
  *(uint *)(param_1 + 0x2ce8) = param_2;
  FUN_10008f914(*(undefined8 *)(*(long *)(param_1 + 0xfe8) + (ulong)param_2 * 8),1);
  *(uint *)(param_1 + 0x14bc) = *(uint *)(param_1 + 0x14bc) | 4;
  FUN_1000915f0(param_1);
  return;
}




void FUN_100091418(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
     (iVar1 = FUN_100644ecc(param_2), iVar1 != 0)) {
    FUN_1000913b0(param_1,param_3);
    FUN_1000914a0(param_1);
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1000914a0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x2ce8) * 8) +
                  0xc0);
  FUN_1000117e8(auStack_60,iVar1);
  FUN_100345498(auStack_60);
  plVar2 = *(long **)(param_1 + 0x2cd8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x2ce0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar4 = FUN_100345b94();
        uVar5 = FUN_100345bb4(lVar3);
        uVar4 = FUN_100345ba0(uVar4,uVar5);
        FUN_100130f40(uVar4,iVar1);
        lVar6 = *(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x2ce8) * 8);
        if (*(int *)(lVar6 + 0xc0) == 0xfe) {
          pcVar7 = "manual";
        }
        else {
          pcVar7 = (char *)**(undefined8 **)(lVar6 + 0xb8);
        }
        uVar5 = FUN_1003467f8();
        FUN_100105a40(uVar5,uVar4,pcVar7);
        uVar4 = FUN_1003de46c(lVar3);
        FUN_1003de6bc(uVar4,iVar1);
        if (iVar1 != 0xfe) {
          pcVar7 = "EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR";
          goto LAB_1000915a8;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x2cd8) = 0;
      *(undefined4 *)(param_1 + 0x2ce0) = DAT_101dc0b88;
    }
  }
  pcVar7 = "EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR_AND_OPEN_SHOP";
LAB_1000915a8:
  uVar4 = FUN_100644a94(pcVar7);
  FUN_100644aec(auStack_80,uVar4,0);
  FUN_100644c34(param_1,auStack_80,1);
  return;
}




void FUN_1000915f0(long *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = *(long *)(*(long *)(param_1[0x1fd] + (ulong)*(uint *)(param_1 + 0x59d) * 8) + 0xb8);
  if (lVar4 == 0) {
    uVar1 = FUN_1004e0150("RECOMMENDED_BUILD_MANUAL",0);
    FUN_1006513c0(param_1 + 0x298,uVar1);
    pcVar3 = "HUD_PATH_SELECTOR_OPEN_SHOP";
    pcVar2 = "RECOMMENDED_BUILD_MANUAL_ADVICE";
  }
  else {
    uVar1 = FUN_1004e0150(*(undefined8 *)(lVar4 + 8),0);
    FUN_1006513c0(param_1 + 0x298,uVar1);
    pcVar2 = *(char **)(lVar4 + 0x20);
    pcVar3 = "HUD_PATH_SELECTOR_SELECT";
  }
  uVar1 = FUN_1004e0150(pcVar2,0);
  FUN_1006513c0(param_1 + 0x2be,uVar1);
  uVar1 = FUN_1004e0150(pcVar3,0);
  FUN_100181af8(param_1 + 0x2e4,uVar1);
  (**(code **)(*param_1 + 0x150))(param_1);
  fVar5 = (float)(**(code **)(**(long **)(param_1[0x1fd] + (ulong)*(uint *)(param_1 + 0x59d) * 8) +
                             0x48))();
  fVar8 = *(float *)(param_1 + 0x1eb);
  fVar9 = *(float *)(*(long *)(param_1[0x1fd] + (ulong)*(uint *)(param_1 + 0x59d) * 8) + 0x40);
  fVar6 = (float)FUN_10064e3cc(param_1 + 0x108);
  fVar7 = *(float *)(param_1 + 0x144);
  fVar9 = fVar9 + fVar8 + fVar7;
  if (0.0 <= fVar9) {
    fVar5 = (fVar9 + fVar5) - fVar6;
    fVar9 = 0.0;
    if (0.0 < fVar5) {
      fVar9 = -200.0 - fVar5;
    }
  }
  else {
    fVar9 = 200.0 - fVar9;
  }
  if (ABS(fVar9) < 2.0) {
    return;
  }
  param_1 = param_1 + 0x13c;
  fVar8 = (float)FUN_100530a94(param_1);
  fVar7 = (float)NEON_fminnm(fVar9 + fVar7,0);
  fVar5 = fVar6 - fVar8;
  if (fVar6 - fVar8 <= fVar7) {
    fVar5 = fVar7;
  }
  uVar1 = FUN_1006408f4(fVar5,0,0x3e4ccccd,FUN_1000917d4);
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar1);
  return;
}




float FUN_1000917d4(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  param_1 = param_1 / (param_4 * 0.5);
  fVar1 = param_1 + -2.0;
  fVar1 = param_3 * 0.5 * (fVar1 * fVar1 * fVar1 + 2.0);
  if (param_1 < 1.0) {
    fVar1 = param_1 * param_1 * param_3 * 0.5 * param_1;
  }
  return fVar1 + param_2;
}




void thunk_FUN_1000918b0(void)

{
  FUN_1000918b0();
  return;
}




void FUN_100091820(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000918b0();
  operator_delete(pvVar1);
  return;
}




void FUN_100091834(uint *param_1,uint param_2)

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




void FUN_1000918b0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_1000918b0_10144ff78;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x1538) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x15f0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x1608);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x1538);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x5a0);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xf98) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x1050) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x1068);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xf98);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x5a0);
  FUN_10064221c(param_1 + 0x14c);
  thunk_FUN_100651068(param_1 + 0x126);
  thunk_FUN_100651068(param_1 + 0x100);
  param_1[0xe2] = &PTR_FUN_1014a7108;
  param_1[0xf9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfc);
  FUN_10064e2bc(param_1 + 0xe2);
  FUN_10064221c(param_1 + 0xd1);
  param_1[0x3b] = &PTR_FUN_101464e50;
  param_1[0xa6] = &PTR_FUN_1014a6db0;
  param_1[0xbd] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xc0);
  FUN_10064e2bc(param_1 + 0xa6);
  param_1[0x7c] = &PTR_FUN_1014a6db0;
  param_1[0x93] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x52] = &PTR_FUN_1014a6db0;
  param_1[0x69] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x6c);
  FUN_10064e2bc(param_1 + 0x52);
  FUN_10064e2bc(param_1 + 0x3b);
  FUN_10064221c(param_1 + 0x2a);
  FUN_10064221c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_100091a48(long *param_1)

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
  bool bVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  *puVar11 = &PTR_thunk_FUN_10003bc74_101450228;
  puVar11[0x17] = 0;
  *(undefined4 *)(puVar11 + 0x18) = DAT_101dc0b88;
  puVar11 = puVar11 + 0x19;
  FUN_100269de4(puVar11);
  plVar1 = param_1 + 0x32;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x49;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x60;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x86;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xac;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0xd2;
  FUN_10064e264(plVar6);
  plVar7 = param_1 + 0xe9;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x10f;
  thunk_FUN_100652c08(plVar8);
  FUN_1004e313c(param_1 + 0x12d);
  FUN_1004e313c(param_1 + 0x12f);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100642bd8(puVar11,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar6,plVar8,1);
  FUN_100642bd8(plVar6,plVar7,1);
  *(uint *)((long)param_1 + 0x2cc) = *(uint *)((long)param_1 + 0x2cc) | 4;
  FUN_10064e47c(0x43660000,0x42d80000,plVar2);
  if ((*(float *)(param_1 + 0x53) != 0.5) || (*(float *)((long)param_1 + 0x29c) != 0.0)) {
    param_1[0x53] = 0x3f000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100651038(plVar3,PTR_s_build___Fonts_Futura_Medium_64_S_10184e2c8);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Futura_Medium_30_S_10184e2b8);
  if ((*(float *)(param_1 + 0x68) != 15.0) || (*(float *)((long)param_1 + 0x344) != 0.0)) {
    param_1[0x68] = 0x41700000;
    FUN_1000200a0(plVar3);
  }
  local_90 = (code *)0x3f800000;
  (**(code **)(param_1[0x60] + 0x28))(plVar3,&local_90);
  fVar12 = *(float *)((long)param_1 + 0x344) + 10.0;
  fVar13 = *(float *)(param_1 + 0x8e);
  if ((fVar13 != 20.0) || (fVar13 = *(float *)((long)param_1 + 0x474), fVar13 != fVar12)) {
    *(undefined4 *)(param_1 + 0x8e) = 0x41a00000;
    *(float *)((long)param_1 + 0x474) = fVar12;
    FUN_1000200a0(plVar4);
  }
  local_90 = (code *)0x0;
  (**(code **)(param_1[0x86] + 0x28))(plVar4,&local_90);
  FUN_10064e3cc(plVar2);
  if ((*(float *)(param_1 + 0xb4) != 0.0) || (*(float *)((long)param_1 + 0x5a4) != fVar13)) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(float *)((long)param_1 + 0x5a4) = fVar13;
    FUN_1000200a0(plVar5);
  }
  local_90 = (code *)0x3f8000003f000000;
  (**(code **)(param_1[0xac] + 0x28))(plVar5,&local_90);
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(uint *)((long)param_1 + 0x714) = *(uint *)((long)param_1 + 0x714) & 0xfffffffb;
  if ((*(float *)(param_1 + 0xdc) != 0.5) || (*(float *)((long)param_1 + 0x6e4) != 0.0)) {
    param_1[0xdc] = 0x3f000000;
    FUN_1000200a0(plVar6);
  }
  FUN_100651038(plVar7,PTR_s_build___Fonts_Futura_Medium_30_S_10184e2b8);
  FUN_100652ca4(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar8,"hud_shop_while_dead_button");
  local_68 = DAT_101dbd458;
  local_90 = FUN_100091f24;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xd3,&local_90);
  local_68 = DAT_101dbd484;
  local_90 = FUN_100091f24;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xd3,&local_90);
  *(uint *)((long)param_1 + 0x714) = *(uint *)((long)param_1 + 0x714) | 0x10;
  FUN_10064e47c(0x43660000,0x42580000,plVar6);
  if ((*(float *)(param_1 + 0x119) != *(float *)(param_1 + 0xdc)) ||
     (*(float *)((long)param_1 + 0x8cc) != *(float *)((long)param_1 + 0x6e4))) {
    *(float *)(param_1 + 0x119) = *(float *)(param_1 + 0xdc);
    *(float *)((long)param_1 + 0x8cc) = *(float *)((long)param_1 + 0x6e4);
    FUN_1000200a0(plVar8);
  }
  bVar10 = false;
  if ((*(float *)((long)param_1 + 0x8bc) == 0.0) &&
     (bVar10 = false, !NAN(*(float *)(param_1 + 0x117)))) {
    bVar10 = *(float *)(param_1 + 0x117) == 0.0;
  }
  if (!bVar10) {
    param_1[0x117] = 0;
    FUN_1000200a0(plVar8);
  }
  if ((*(float *)(param_1 + 0xf3) != *(float *)(param_1 + 0xdc)) ||
     (*(float *)((long)param_1 + 0x79c) != *(float *)((long)param_1 + 0x6e4))) {
    *(float *)(param_1 + 0xf3) = *(float *)(param_1 + 0xdc);
    *(float *)((long)param_1 + 0x79c) = *(float *)((long)param_1 + 0x6e4);
    FUN_1000200a0(plVar7);
  }
  if ((*(float *)(param_1 + 0xf1) != 0.0) || (*(float *)((long)param_1 + 0x78c) != 3.0)) {
    param_1[0xf1] = 0x4040000000000000;
    FUN_1000200a0(plVar7);
  }
  uVar9 = *(uint *)((long)param_1 + 0x214);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x214) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xfffffff7;
  return param_1;
}




void FUN_100091f24(undefined8 param_1)

{
  undefined1 auStack_50 [48];
  
  FUN_100530200(auStack_50,DAT_101d91884,0xffffffff,0);
  FUN_100644c34(param_1,auStack_50,1);
  return;
}




long * thunk_FUN_100091a48(long *param_1)

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
  bool bVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  *puVar11 = &PTR_thunk_FUN_10003bc74_101450228;
  puVar11[0x17] = 0;
  *(undefined4 *)(puVar11 + 0x18) = DAT_101dc0b88;
  puVar11 = puVar11 + 0x19;
  FUN_100269de4(puVar11);
  plVar1 = param_1 + 0x32;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x49;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x60;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x86;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xac;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0xd2;
  FUN_10064e264(plVar6);
  plVar7 = param_1 + 0xe9;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x10f;
  thunk_FUN_100652c08(plVar8);
  FUN_1004e313c(param_1 + 0x12d);
  FUN_1004e313c(param_1 + 0x12f);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100642bd8(puVar11,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar6,plVar8,1);
  FUN_100642bd8(plVar6,plVar7,1);
  *(uint *)((long)param_1 + 0x2cc) = *(uint *)((long)param_1 + 0x2cc) | 4;
  FUN_10064e47c(0x43660000,0x42d80000,plVar2);
  if ((*(float *)(param_1 + 0x53) != 0.5) || (*(float *)((long)param_1 + 0x29c) != 0.0)) {
    param_1[0x53] = 0x3f000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100651038(plVar3,PTR_s_build___Fonts_Futura_Medium_64_S_10184e2c8);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Futura_Medium_30_S_10184e2b8);
  if ((*(float *)(param_1 + 0x68) != 15.0) || (*(float *)((long)param_1 + 0x344) != 0.0)) {
    param_1[0x68] = 0x41700000;
    FUN_1000200a0(plVar3);
  }
  pcStack_90 = (code *)0x3f800000;
  (**(code **)(param_1[0x60] + 0x28))(plVar3,&pcStack_90);
  fVar12 = *(float *)((long)param_1 + 0x344) + 10.0;
  fVar13 = *(float *)(param_1 + 0x8e);
  if ((fVar13 != 20.0) || (fVar13 = *(float *)((long)param_1 + 0x474), fVar13 != fVar12)) {
    *(undefined4 *)(param_1 + 0x8e) = 0x41a00000;
    *(float *)((long)param_1 + 0x474) = fVar12;
    FUN_1000200a0(plVar4);
  }
  pcStack_90 = (code *)0x0;
  (**(code **)(param_1[0x86] + 0x28))(plVar4,&pcStack_90);
  FUN_10064e3cc(plVar2);
  if ((*(float *)(param_1 + 0xb4) != 0.0) || (*(float *)((long)param_1 + 0x5a4) != fVar13)) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(float *)((long)param_1 + 0x5a4) = fVar13;
    FUN_1000200a0(plVar5);
  }
  pcStack_90 = (code *)0x3f8000003f000000;
  (**(code **)(param_1[0xac] + 0x28))(plVar5,&pcStack_90);
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(uint *)((long)param_1 + 0x714) = *(uint *)((long)param_1 + 0x714) & 0xfffffffb;
  if ((*(float *)(param_1 + 0xdc) != 0.5) || (*(float *)((long)param_1 + 0x6e4) != 0.0)) {
    param_1[0xdc] = 0x3f000000;
    FUN_1000200a0(plVar6);
  }
  FUN_100651038(plVar7,PTR_s_build___Fonts_Futura_Medium_30_S_10184e2b8);
  FUN_100652ca4(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar8,"hud_shop_while_dead_button");
  uStack_68 = DAT_101dbd458;
  pcStack_90 = FUN_100091f24;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xd3,&pcStack_90);
  uStack_68 = DAT_101dbd484;
  pcStack_90 = FUN_100091f24;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xd3,&pcStack_90);
  *(uint *)((long)param_1 + 0x714) = *(uint *)((long)param_1 + 0x714) | 0x10;
  FUN_10064e47c(0x43660000,0x42580000,plVar6);
  if ((*(float *)(param_1 + 0x119) != *(float *)(param_1 + 0xdc)) ||
     (*(float *)((long)param_1 + 0x8cc) != *(float *)((long)param_1 + 0x6e4))) {
    *(float *)(param_1 + 0x119) = *(float *)(param_1 + 0xdc);
    *(float *)((long)param_1 + 0x8cc) = *(float *)((long)param_1 + 0x6e4);
    FUN_1000200a0(plVar8);
  }
  bVar10 = false;
  if ((*(float *)((long)param_1 + 0x8bc) == 0.0) &&
     (bVar10 = false, !NAN(*(float *)(param_1 + 0x117)))) {
    bVar10 = *(float *)(param_1 + 0x117) == 0.0;
  }
  if (!bVar10) {
    param_1[0x117] = 0;
    FUN_1000200a0(plVar8);
  }
  if ((*(float *)(param_1 + 0xf3) != *(float *)(param_1 + 0xdc)) ||
     (*(float *)((long)param_1 + 0x79c) != *(float *)((long)param_1 + 0x6e4))) {
    *(float *)(param_1 + 0xf3) = *(float *)(param_1 + 0xdc);
    *(float *)((long)param_1 + 0x79c) = *(float *)((long)param_1 + 0x6e4);
    FUN_1000200a0(plVar7);
  }
  if ((*(float *)(param_1 + 0xf1) != 0.0) || (*(float *)((long)param_1 + 0x78c) != 3.0)) {
    param_1[0xf1] = 0x4040000000000000;
    FUN_1000200a0(plVar7);
  }
  uVar9 = *(uint *)((long)param_1 + 0x214);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x214) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xfffffff7;
  return param_1;
}




void FUN_100091f78(long param_1,long param_2)

{
  *(long *)(param_1 + 0xb8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_100091f8c(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
          if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184e110) {
            fVar5 = (float)FUN_1003e1f90();
            bVar1 = 0.0 < fVar5;
            if ((fVar5 <= 0.0) || ((*(byte *)(param_1 + 0x188) & 1) != 0)) {
              if (0.0 < fVar5) goto LAB_100092150;
              goto LAB_100092004;
            }
            uVar4 = FUN_1004e0150("HUD_RESPAWN_MSG",0);
            FUN_1006513c0(param_1 + 0x560,uVar4);
            uVar4 = FUN_1004e0150("HUD_RESPAWN_SHOP",0);
            FUN_1006513c0(param_1 + 0x748,uVar4);
            if (*(char *)(param_1 + 0x990) != '\0') {
              *(uint *)(param_1 + 0x714) = *(uint *)(param_1 + 0x714) | 4;
            }
            FUN_100269e20(0x3dcccccd,param_1 + 200,1,4,0);
            goto LAB_100092154;
          }
        }
        bVar1 = false;
LAB_100092004:
        if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
LAB_100092150:
          if (bVar1) goto LAB_100092154;
        }
        else {
          FUN_1006513c0(param_1 + 0x300,&DAT_101d91650);
          FUN_1006513c0(param_1 + 0x430,&DAT_101d91650);
          uVar4 = FUN_1004e0150("HUD_RESPAWN_PREPARE_MSG",0);
          FUN_1006513c0(param_1 + 0x560,uVar4);
          if (*(char *)(param_1 + 0x990) != '\0') {
            *(uint *)(param_1 + 0x714) = *(uint *)(param_1 + 0x714) & 0xfffffffb;
          }
          FUN_100269e20(0x40a00000,param_1 + 200,0,4,0);
          if (bVar1) {
LAB_100092154:
            FUN_1004e38ac(param_1 + 0x968,"%02d");
            FUN_1004e38ac(param_1 + 0x978,"%02d");
            FUN_1006513c0(param_1 + 0x300,param_1 + 0x968);
            FUN_1006513c0(param_1 + 0x430,param_1 + 0x978);
            return;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000921d0(long param_1)

{
  FUN_100269e20(param_1 + 200);
  return;
}




void FUN_1000921d8(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN_1000922a4();
  plVar1 = param_3 + 0x32;
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_44 = param_2;
  FUN_10064e48c(plVar1,&local_48);
  fVar4 = *(float *)((long)param_3 + 0x54);
  bVar2 = false;
  if ((*(float *)(param_3 + 0x3c) == *(float *)(param_3 + 10)) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x1e4)) && !NAN(fVar4))) {
    bVar2 = *(float *)((long)param_3 + 0x1e4) == fVar4;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x3c) = *(float *)(param_3 + 10);
    *(float *)((long)param_3 + 0x1e4) = fVar4;
    FUN_1000200a0(plVar1);
  }
  FUN_10064e3cc(plVar1);
  fVar5 = fVar4;
  FUN_10064e3cc(param_3 + 0xd2);
  fVar4 = fVar4 - fVar5;
  bVar2 = false;
  if ((*(float *)(param_3 + 0xda) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x6d4)) && !NAN(fVar4))) {
    bVar2 = *(float *)((long)param_3 + 0x6d4) == fVar4;
  }
  if (!bVar2) {
    *(undefined4 *)(param_3 + 0xda) = 0;
    *(float *)((long)param_3 + 0x6d4) = fVar4;
    FUN_1000200a0(param_3 + 0xd2);
  }
  lVar3 = NEON_fmov(0x41200000,4);
  param_3[0xdd] = lVar3;
  return;
}




void FUN_1000922a4(long *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined8 local_30;
  float local_28;
  float local_24;
  
  FUN_100641464(&local_24,&local_28);
  local_28 = local_28 + -530.0;
  *(float *)(param_1 + 0x131) = local_28;
  *(undefined4 *)((long)param_1 + 0x98c) = 0x41200000;
  bVar1 = false;
  if ((*(float *)(param_1 + 8) == local_24 * 0.5) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x44)) && !NAN(local_28))) {
    bVar1 = *(float *)((long)param_1 + 0x44) == local_28;
  }
  if (!bVar1) {
    *(float *)(param_1 + 8) = local_24 * 0.5;
    *(float *)((long)param_1 + 0x44) = local_28;
    FUN_1000200a0(param_1);
  }
  iVar2 = FUN_100126c88();
  fVar3 = 1.25;
  if (iVar2 == 0) {
    fVar3 = 1.0;
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 9) == fVar3) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x4c)) && !NAN(fVar3))) {
    bVar1 = *(float *)((long)param_1 + 0x4c) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 9) = fVar3;
    *(float *)((long)param_1 + 0x4c) = fVar3;
    FUN_1000200a0(param_1);
  }
  FUN_10064e47c(0x43660000,0x432e0000,param_1);
  local_30 = 0x3f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_30);
  return;
}




void thunk_FUN_1000921d8(void)

{
  FUN_1000921d8();
  return;
}




void FUN_100092384(long param_1)

{
  undefined8 uVar1;
  
  if (*(float *)(param_1 + 0x44) != *(float *)(param_1 + 0x98c)) {
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x98c);
    FUN_1000200a0(param_1);
  }
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  uVar1 = FUN_100640840(0x3f800000,0x3e99999a,FUN_10001f160);
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar1);
  return;
}




void FUN_100092404(long param_1)

{
  undefined8 uVar1;
  
  if (*(float *)(param_1 + 0x44) != *(float *)(param_1 + 0x988)) {
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x988);
    FUN_1000200a0(param_1);
  }
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  uVar1 = FUN_100640840(0x3f800000,0x3e99999a,FUN_10001f160);
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar1);
  return;
}




void FUN_100092488(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10003bc74();
  operator_delete(pvVar1);
  return;
}




void FUN_10009249c(void)

{
  if ((DAT_10184e118 & 1) == 0) {
    DAT_10184e110 = DAT_101872e38;
    DAT_10184e118 = 1;
  }
  return;
}




long * FUN_1000924c8(long *param_1)

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
  ushort uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  char *pcVar18;
  long *plVar19;
  char *pcVar20;
  undefined1 auStack_70 [8];
  void *local_68;
  
  puVar15 = (undefined8 *)FUN_10064f204();
  *puVar15 = &PTR_thunk_FUN_10007c9e4_101450370;
  *(ushort *)(puVar15 + 0x29) = *(ushort *)(puVar15 + 0x29) & 0x8000 | 0x3ff;
  puVar15[0x38] = puVar15;
  *(undefined2 *)(puVar15 + 0x2a) = 0;
  FUN_100269de4();
  plVar1 = param_1 + 0x52;
  FUN_1006421a8(plVar1);
  param_1[0x52] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0x81;
  thunk_FUN_100652c08(plVar19);
  plVar2 = param_1 + 0x9f;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0xbd;
  thunk_FUN_100655644(plVar3);
  plVar4 = param_1 + 0xe8;
  thunk_FUN_1000e518c();
  plVar5 = param_1 + 0x17e;
  thunk_FUN_1000e518c();
  plVar6 = param_1 + 0x214;
  thunk_FUN_100655644(plVar6);
  plVar7 = param_1 + 0x23f;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x265;
  thunk_FUN_100650e64(plVar8);
  FUN_1004e313c(param_1 + 0x28b);
  FUN_1004e313c(param_1 + 0x28d);
  plVar9 = param_1 + 0x28f;
  FUN_1006421a8(plVar9);
  param_1[0x28f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x2a0;
  thunk_FUN_100650e64();
  param_1[0x2c6] = -0xffffff01000000;
  param_1[0x2c7] = 0;
  *(undefined8 *)((long)param_1 + 0x163f) = 0;
  *(ushort *)((long)param_1 + 0x1647) = *(ushort *)((long)param_1 + 0x1647) & 0xe000 | 0x1800;
  uVar12 = FUN_1004d2524("HUD_ScoreDisplay");
  uVar13 = FUN_100015208("HUD_ScoreDisplay",uVar12,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar13 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,puVar15 + 0x39,1);
  FUN_100642bd8(puVar15 + 0x39,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 99,1);
  FUN_100642bd8(plVar1,plVar19,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100655930(plVar3,plVar4,1);
  FUN_100655930(plVar3,plVar5,1);
  FUN_100655930(plVar3,plVar6,1);
  FUN_100655930(plVar6,plVar7,1);
  FUN_100655930(plVar6,plVar8,1);
  FUN_100655930(plVar3,plVar9,1);
  FUN_100642bd8(plVar9,plVar10,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  uVar13 = *(uint *)((long)param_1 + 0x314);
  if ((uVar13 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x314) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6600;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(param_1 + 99,PTR_s_build___HUDPartsBlitz_tga_10184e0b0,"blitz_scoreboard_stretch");
  FUN_100652cac(plVar19,PTR_s_build___HUDPartsBlitz_tga_10184e0b0,"blitz_scoreboard_end");
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsBlitz_tga_10184e0b0,"blitz_scoreboard_end");
  *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) | 1;
  *(undefined1 *)((long)param_1 + 0xbec) = 1;
  FUN_1000e5368(plVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_1000e5398(plVar4,PTR_s_build___HUDPartsBlitz_tga_10184e0b0);
  FUN_1000e53fc(plVar4,&DAT_10115a168,&DAT_10114bcc4);
  FUN_1000e54bc(plVar4,&DAT_101d22fe8);
  FUN_1000e54ec(plVar4,1);
  FUN_1004e3120(auStack_70,"0");
  FUN_1000e543c(plVar4,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  plVar1 = param_1 + 0x29;
  FUN_1000e5368(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_1000e5398(plVar5,PTR_s_build___HUDPartsBlitz_tga_10184e0b0);
  FUN_1000e53fc(plVar5,&DAT_10115a168,&DAT_10114bcc8);
  FUN_1000e54bc(plVar5,&DAT_101d22fe8);
  FUN_1000e54ec(plVar5,1);
  FUN_1004e3120(auStack_70,"0");
  FUN_1000e543c(plVar5,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_100651038(plVar7,PTR_s_build___Fonts_Futura_Medium_64_S_10184e2c8);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0);
  FUN_100651700(plVar10,3);
  FUN_100651594(plVar10,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0,&DAT_10114bcd0);
  *(uint *)((long)param_1 + 0x1584) = *(uint *)((long)param_1 + 0x1584) & 0xfffffffb;
  uVar16 = FUN_1004e0150("HUD_BLITZ_OVERTIME",0);
  FUN_1006513c0(plVar10,uVar16);
  FUN_10034ee90();
  iVar14 = FUN_10034e738();
  FUN_1003467f8();
  uVar17 = FUN_10034cfa0();
  if ((((uVar17 & 1) == 0) && (uVar17 = FUN_10034cb58(), (uVar17 & 1) == 0)) && (iVar14 != 1)) {
    pcVar20 = "blitz_ally_score";
    pcVar18 = "blitz_enemy_score";
  }
  else {
    pcVar20 = "blitz_enemy_score";
    pcVar18 = "blitz_ally_score";
  }
  FUN_1000e53c8(plVar4,pcVar18);
  FUN_1000e53c8(plVar5,pcVar20);
  uVar11 = *(ushort *)(param_1 + 0x29);
  plVar19 = param_1 + ((ulong)(uVar11 >> 10) & 0x1f) * 7 + 0x2a;
  *(undefined4 *)plVar19 = 0;
  plVar19[1] = (long)FUN_100092a84;
  plVar19[2] = 0;
  plVar19[3] = (long)FUN_100092ad0;
  plVar19[4] = 0;
  plVar19[5] = (long)FUN_100092afc;
  plVar19[6] = 0;
  plVar19 = param_1 + (ulong)(uVar11 + 0x400 >> 10 & 0x1f) * 7 + 0x2a;
  *(undefined4 *)plVar19 = 1;
  plVar19[1] = (long)FUN_100092b30;
  plVar19[2] = 0;
  plVar19[3] = (long)FUN_100092b80;
  plVar19[4] = 0;
  plVar19[5] = (long)FUN_100092b84;
  plVar19[6] = 0;
  *(ushort *)(param_1 + 0x29) =
       ((ushort)(uVar11 + 0x400) & 0x7c00 | uVar11 & 0x83ff) + 0x400 & 0x7c00 | uVar11 & 0x83ff;
  FUN_100092b88(plVar1,0,1);
  FUN_100092b88(plVar1,1,0);
  FUN_100092c0c(plVar1,0,0,0);
  *(uint *)((long)param_1 + 0x24c) = *(uint *)((long)param_1 + 0x24c) & 0xfffffffb;
  return param_1;
}




void FUN_100092a84(long param_1)

{
  float fVar1;
  
  FUN_1000320fc();
  fVar1 = (float)FUN_100032244();
  if (fVar1 < *(float *)(param_1 + 0x1638)) {
    return;
  }
  FUN_100092c0c(param_1 + 0x148,1,0,0);
  return;
}




void FUN_100092ad0(long param_1)

{
  *(ushort *)(param_1 + 0x1647) = *(ushort *)(param_1 + 0x1647) & 0xefff;
  FUN_100269e20(0x3e4ccccd,param_1 + 0x1c8,0,2,1);
  return;
}




void FUN_100092afc(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x1647);
  *(ushort *)(param_1 + 0x1647) = uVar1 | 0x1000;
  FUN_100269e20(0x3e4ccccd,param_1 + 0x1c8,((uVar1 ^ 0xffff) & 0x800) == 0,2,1);
  return;
}




void FUN_100092b30(long param_1)

{
  if (*(char *)(param_1 + 0x1644) == '\0') {
    FUN_100093510();
    if ((*(byte *)(param_1 + 0x1648) >> 2 & 1) == 0) {
      FUN_1000937e4(param_1);
      FUN_100093a40(param_1);
      return;
    }
  }
  return;
}




void FUN_100092b80(void)

{
  return;
}




void FUN_100092b84(void)

{
  return;
}




void FUN_100092b88(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_100092bbc;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_100092bbc:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_100092c0c(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_100092c50;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_100092c50:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x000100092cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




long * thunk_FUN_1000924c8(long *param_1)

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
  ushort uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  char *pcVar18;
  long *plVar19;
  char *pcVar20;
  undefined1 auStack_70 [8];
  void *pvStack_68;
  
  puVar15 = (undefined8 *)FUN_10064f204();
  *puVar15 = &PTR_thunk_FUN_10007c9e4_101450370;
  *(ushort *)(puVar15 + 0x29) = *(ushort *)(puVar15 + 0x29) & 0x8000 | 0x3ff;
  puVar15[0x38] = puVar15;
  *(undefined2 *)(puVar15 + 0x2a) = 0;
  FUN_100269de4();
  plVar1 = param_1 + 0x52;
  FUN_1006421a8(plVar1);
  param_1[0x52] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0x81;
  thunk_FUN_100652c08(plVar19);
  plVar2 = param_1 + 0x9f;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0xbd;
  thunk_FUN_100655644(plVar3);
  plVar4 = param_1 + 0xe8;
  thunk_FUN_1000e518c();
  plVar5 = param_1 + 0x17e;
  thunk_FUN_1000e518c();
  plVar6 = param_1 + 0x214;
  thunk_FUN_100655644(plVar6);
  plVar7 = param_1 + 0x23f;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x265;
  thunk_FUN_100650e64(plVar8);
  FUN_1004e313c(param_1 + 0x28b);
  FUN_1004e313c(param_1 + 0x28d);
  plVar9 = param_1 + 0x28f;
  FUN_1006421a8(plVar9);
  param_1[0x28f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x2a0;
  thunk_FUN_100650e64();
  param_1[0x2c6] = -0xffffff01000000;
  param_1[0x2c7] = 0;
  *(undefined8 *)((long)param_1 + 0x163f) = 0;
  *(ushort *)((long)param_1 + 0x1647) = *(ushort *)((long)param_1 + 0x1647) & 0xe000 | 0x1800;
  uVar12 = FUN_1004d2524("HUD_ScoreDisplay");
  uVar13 = FUN_100015208("HUD_ScoreDisplay",uVar12,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar13 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,puVar15 + 0x39,1);
  FUN_100642bd8(puVar15 + 0x39,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 99,1);
  FUN_100642bd8(plVar1,plVar19,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100655930(plVar3,plVar4,1);
  FUN_100655930(plVar3,plVar5,1);
  FUN_100655930(plVar3,plVar6,1);
  FUN_100655930(plVar6,plVar7,1);
  FUN_100655930(plVar6,plVar8,1);
  FUN_100655930(plVar3,plVar9,1);
  FUN_100642bd8(plVar9,plVar10,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  uVar13 = *(uint *)((long)param_1 + 0x314);
  if ((uVar13 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x314) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6600;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(param_1 + 99,PTR_s_build___HUDPartsBlitz_tga_10184e0b0,"blitz_scoreboard_stretch");
  FUN_100652cac(plVar19,PTR_s_build___HUDPartsBlitz_tga_10184e0b0,"blitz_scoreboard_end");
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsBlitz_tga_10184e0b0,"blitz_scoreboard_end");
  *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) | 1;
  *(undefined1 *)((long)param_1 + 0xbec) = 1;
  FUN_1000e5368(plVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_1000e5398(plVar4,PTR_s_build___HUDPartsBlitz_tga_10184e0b0);
  FUN_1000e53fc(plVar4,&DAT_10115a168,&DAT_10114bcc4);
  FUN_1000e54bc(plVar4,&DAT_101d22fe8);
  FUN_1000e54ec(plVar4,1);
  FUN_1004e3120(auStack_70,"0");
  FUN_1000e543c(plVar4,auStack_70);
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  plVar1 = param_1 + 0x29;
  FUN_1000e5368(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_1000e5398(plVar5,PTR_s_build___HUDPartsBlitz_tga_10184e0b0);
  FUN_1000e53fc(plVar5,&DAT_10115a168,&DAT_10114bcc8);
  FUN_1000e54bc(plVar5,&DAT_101d22fe8);
  FUN_1000e54ec(plVar5,1);
  FUN_1004e3120(auStack_70,"0");
  FUN_1000e543c(plVar5,auStack_70);
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  FUN_100651038(plVar7,PTR_s_build___Fonts_Futura_Medium_64_S_10184e2c8);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0);
  FUN_100651700(plVar10,3);
  FUN_100651594(plVar10,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0,&DAT_10114bcd0);
  *(uint *)((long)param_1 + 0x1584) = *(uint *)((long)param_1 + 0x1584) & 0xfffffffb;
  uVar16 = FUN_1004e0150("HUD_BLITZ_OVERTIME",0);
  FUN_1006513c0(plVar10,uVar16);
  FUN_10034ee90();
  iVar14 = FUN_10034e738();
  FUN_1003467f8();
  uVar17 = FUN_10034cfa0();
  if ((((uVar17 & 1) == 0) && (uVar17 = FUN_10034cb58(), (uVar17 & 1) == 0)) && (iVar14 != 1)) {
    pcVar20 = "blitz_ally_score";
    pcVar18 = "blitz_enemy_score";
  }
  else {
    pcVar20 = "blitz_enemy_score";
    pcVar18 = "blitz_ally_score";
  }
  FUN_1000e53c8(plVar4,pcVar18);
  FUN_1000e53c8(plVar5,pcVar20);
  uVar11 = *(ushort *)(param_1 + 0x29);
  plVar19 = param_1 + ((ulong)(uVar11 >> 10) & 0x1f) * 7 + 0x2a;
  *(undefined4 *)plVar19 = 0;
  plVar19[1] = (long)FUN_100092a84;
  plVar19[2] = 0;
  plVar19[3] = (long)FUN_100092ad0;
  plVar19[4] = 0;
  plVar19[5] = (long)FUN_100092afc;
  plVar19[6] = 0;
  plVar19 = param_1 + (ulong)(uVar11 + 0x400 >> 10 & 0x1f) * 7 + 0x2a;
  *(undefined4 *)plVar19 = 1;
  plVar19[1] = (long)FUN_100092b30;
  plVar19[2] = 0;
  plVar19[3] = (long)FUN_100092b80;
  plVar19[4] = 0;
  plVar19[5] = (long)FUN_100092b84;
  plVar19[6] = 0;
  *(ushort *)(param_1 + 0x29) =
       ((ushort)(uVar11 + 0x400) & 0x7c00 | uVar11 & 0x83ff) + 0x400 & 0x7c00 | uVar11 & 0x83ff;
  FUN_100092b88(plVar1,0,1);
  FUN_100092b88(plVar1,1,0);
  FUN_100092c0c(plVar1,0,0,0);
  *(uint *)((long)param_1 + 0x24c) = *(uint *)((long)param_1 + 0x24c) & 0xfffffffb;
  return param_1;
}




void FUN_100092d2c(long param_1)

{
  if (*(char *)(param_1 + 0x1647) != '\0') {
    FUN_100092d70();
    FUN_100092eac(param_1);
    FUN_100093048(param_1 + 0x148);
    return;
  }
  return;
}




void FUN_100092d70(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int *piVar4;
  long *plVar5;
  undefined4 uVar6;
  ulong local_38;
  
  local_38 = 0;
  FUN_1010a1958(&local_38,1,DAT_10184de50,0);
  uVar2 = local_38;
  FUN_10034cb1c(&local_38,"__GAME_MODE_COUNTDOWN_START__");
  plVar5 = (long *)(uVar2 + 0x28);
  puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0x10))(plVar5,local_38 & 0xffffffff);
  uVar6 = NEON_ucvtf(*puVar3);
  *(undefined4 *)(param_1 + 0x163c) = uVar6;
  FUN_10034cb1c(&local_38,"__GAME_MODE_COUNTDOWN_DURATION__");
  puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0x10))(plVar5,local_38 & 0xffffffff);
  uVar6 = NEON_ucvtf(*puVar3);
  *(undefined4 *)(param_1 + 0x1640) = uVar6;
  FUN_10034cb1c(&local_38,"__GAME_MODE_COUNTDOWN_PAUSED__");
  piVar4 = (int *)(**(code **)(*plVar5 + 0x10))(plVar5,local_38 & 0xffffffff);
  iVar1 = *piVar4;
  FUN_10034cb1c(&local_38,"__GAME_MODE_COUNTDOWN_DO_ROUNDING__");
  piVar4 = (int *)(**(code **)(*plVar5 + 0x10))(plVar5,local_38 & 0xffffffff);
  if ((*(char *)(param_1 + 0x1644) == '\0') && (iVar1 == 1 && *piVar4 == 1)) {
    FUN_1000933f0(param_1);
  }
  *(char *)(param_1 + 0x1644) = iVar1 == 1;
  return;
}




void FUN_100092eac(long *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long *plVar7;
  long local_48;
  
  local_48 = 0;
  FUN_1010a1958(&local_48,1,DAT_10184de50,0);
  lVar3 = local_48;
  uVar5 = FUN_10046ccac(1);
  plVar7 = (long *)(lVar3 + 0x28);
  pbVar6 = (byte *)(**(code **)(*plVar7 + 0x18))(plVar7,uVar5);
  bVar1 = *pbVar6;
  uVar5 = FUN_10046ccac(2);
  pbVar6 = (byte *)(**(code **)(*plVar7 + 0x18))(plVar7,uVar5);
  bVar2 = *pbVar6;
  if (((DAT_101dc5188 & 1) == 0) && (iVar4 = ___cxa_guard_acquire(&DAT_101dc5188), iVar4 != 0)) {
    FUN_1004e313c(&DAT_101dc5178);
    ___cxa_atexit(FUN_100046198,&DAT_101dc5178,0x100000000);
    ___cxa_guard_release(&DAT_101dc5188);
  }
  if (*(byte *)((long)param_1 + 0x1645) < bVar1) {
    FUN_1004e38ac(&DAT_101dc5178,"%d");
    FUN_1000e543c(param_1 + 0xe8,&DAT_101dc5178);
    FUN_1000e551c(param_1 + 0xe8);
    *(byte *)((long)param_1 + 0x1645) = bVar1;
    if (bVar2 <= *(byte *)((long)param_1 + 0x1646)) goto LAB_100092fd8;
  }
  else if (bVar2 <= *(byte *)((long)param_1 + 0x1646)) {
    return;
  }
  FUN_1004e38ac(&DAT_101dc5178,"%d");
  FUN_1000e543c(param_1 + 0x17e,&DAT_101dc5178);
  FUN_1000e551c(param_1 + 0x17e);
  *(byte *)((long)param_1 + 0x1646) = bVar2;
LAB_100092fd8:
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_100093048(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x000100093084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10009308c(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar5 = FUN_100642d08();
  if (iVar5 != 0) {
    *(uint *)((long)param_3 + 0x84) =
         *(uint *)((long)param_3 + 0x84) & 0xfffffff8 |
         *(uint *)((long)param_3 + 0x84) & 3 |
         (uint)(*(char *)((long)param_3 + 0x1647) != '\0') << 2;
    fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    plVar1 = param_3 + 99;
    FUN_10064e47c(fVar6 + (float)param_2 * -2.0,plVar1);
    FUN_10064e47c(param_2,param_2,param_3 + 0x81);
    FUN_10064e47c(param_2,param_2,param_3 + 0x9f);
    FUN_10064e72c(0,param_3 + 0x52,4,param_3,4);
    FUN_10064e5ec(0,0,plVar1,4,param_3 + 0x52,4);
    FUN_10064e5ec(0,0,param_3 + 0x81,5,plVar1,7);
    FUN_10064e5ec(0,0,param_3 + 0x9f,7,plVar1,5);
    param_3[0x2c6] =
         CONCAT44(-(uint)(*(char *)((long)param_3 + 0x1647) == '\x02'),
                  -(uint)(*(char *)((long)param_3 + 0x1647) == '\x01')) & 0x2c2fab002c2fab ^
         0xff90b3efff90b3ef;
    plVar2 = param_3 + 0xe8;
    FUN_1000e53fc(plVar2,param_3 + 0x2c6,param_3 + 0x2c6);
    plVar3 = param_3 + 0x17e;
    FUN_1000e53fc(plVar3,(long)param_3 + 0x1634,(long)param_3 + 0x1634);
    fVar7 = (float)FUN_1000e5360(plVar2);
    FUN_1000e53d0(104.0 / fVar7,plVar2);
    fVar7 = (float)FUN_1000e5360(plVar3);
    FUN_1000e53d0(104.0 / fVar7,plVar3);
    FUN_1000e52ec(plVar2);
    FUN_1000e52ec(plVar3);
    plVar4 = param_3 + 0xbd;
    FUN_10064e5ec(0,0,plVar4,8,plVar1,8);
    FUN_10064e5ec(-(fVar6 * 0.25),0,plVar2,8,plVar4,8);
    FUN_10064e5ec(fVar6 * 0.25,0,plVar3,8,plVar4,8);
    if ((*(byte *)(param_3 + 0x2c9) >> 1 & 1) != 0) {
      FUN_10064e5ec(0x428c0000,0,param_3 + 0x265,8,param_3 + 0x23f,8);
    }
    plVar2 = param_3 + 0x214;
    FUN_1006557ec(plVar2);
    fVar6 = 0.0;
    FUN_10064e5ec(0,0,plVar2,8,plVar1,8);
    FUN_10064eb7c(plVar1,4,plVar1,6);
    FUN_10065184c(fVar6 * 0.9,0,0x3f800000,param_3 + 0x2a0);
    FUN_10064e5ec(0,0,param_3 + 0x28f,8,plVar2,8);
    FUN_10064e5ec(0,0,param_3 + 0x2a0,7,param_3 + 0x28f,8);
    return;
  }
  return;
}




void FUN_1000933a8(long *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0x1647) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001000933b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_1000933bc(undefined4 param_1,undefined4 param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_3 + 0x1638) = param_1;
  *(undefined4 *)(param_3 + 0x1640) = param_2;
  if (param_4 != 0) {
    FUN_1000320fc();
    uVar1 = FUN_100032244();
    *(undefined4 *)(param_3 + 0x163c) = uVar1;
  }
  return;
}




void FUN_1000933f0(long param_1)

{
  FUN_1000320fc();
  FUN_100032244();
  FUN_1004e38ac(param_1 + 0x1458,"%02d");
  FUN_1004e38ac(param_1 + 0x1468,"%02d");
  FUN_1006513c0(param_1 + 0x11f8,param_1 + 0x1458);
  FUN_1006513c0(param_1 + 0x1328,param_1 + 0x1468);
  return;
}




void FUN_1000934ac(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x24c) = *(uint *)(param_1 + 0x24c) & 0xfffffff7 | uVar1;
  return;
}




void FUN_1000934cc(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x800;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x1647) & 0xf7ff | uVar1;
  *(ushort *)(param_1 + 0x1647) = uVar1;
  FUN_100269e20(0x3e4ccccd,param_1 + 0x1c8,((uVar1 ^ 0xffff) & 0x1800) == 0,2,1);
  return;
}




void FUN_100093510(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  float fVar7;
  undefined4 local_68 [2];
  
  FUN_1000320fc();
  fVar7 = (float)FUN_100032244();
  fVar7 = (*(float *)(param_1 + 0x2c8) - fVar7) + *(float *)((long)param_1 + 0x163c);
  if (((*(ushort *)((long)param_1 + 0x1647) >> 10 & 1) != 0) || (0.0 < fVar7)) {
    if ((*(ushort *)((long)param_1 + 0x1647) >> 10 & 1) == 0) {
      return;
    }
    if (fVar7 <= 0.0) {
      return;
    }
    FUN_100642324(param_1 + 0x265);
    FUN_100642324(param_1 + 0x23f);
    if ((~*(uint *)((long)param_1 + 0x127c) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x127c) = *(uint *)((long)param_1 + 0x127c) | 0x7f80;
      FUN_1000200a0(param_1 + 0x23f);
    }
    if ((~*(uint *)((long)param_1 + 0x13ac) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x13ac) = *(uint *)((long)param_1 + 0x13ac) | 0x7f80;
      FUN_1000200a0(param_1 + 0x265);
    }
    (**(code **)(*param_1 + 0x138))(param_1);
    *(uint *)((long)param_1 + 0x1584) = *(uint *)((long)param_1 + 0x1584) & 0xfffffffb;
    uVar6 = *(ushort *)((long)param_1 + 0x1647) & 0xfbff;
  }
  else {
    (**(code **)(*param_1 + 0x138))(param_1);
    uVar3 = FUN_100640840(0,0x3e99999a,FUN_10001f160);
    FUN_100642324(param_1 + 0x23f);
    FUN_100642b14(param_1 + 0x23f,uVar3);
    uVar3 = FUN_100640840(0,0x3e99999a,FUN_10001f160);
    FUN_100642324(param_1 + 0x265);
    FUN_100642b14(param_1 + 0x265,uVar3);
    plVar1 = param_1 + 0x2a0;
    *(uint *)((long)param_1 + 0x1584) = *(uint *)((long)param_1 + 0x1584) | 4;
    uVar3 = FUN_10064081c(0x3f19999a);
    uVar4 = FUN_100640b58(0x3f000000,plVar1,&DAT_10114bcd0,FUN_1000917d4);
    local_68[0] = 0xff000080;
    FUN_100640b58(0x3f000000,plVar1,local_68,FUN_1000917d4);
    uVar5 = FUN_10008cac4();
    FUN_10063f614(uVar5,uVar4);
    FUN_10063f664(uVar5);
    FUN_100642324(plVar1);
    FUN_100642b7c(plVar1,uVar3);
    uVar3 = FUN_100640db8(0x3f800000,0x3f800000,0x3f19999a,FUN_10001f160);
    plVar2 = param_1 + 0x28f;
    if ((*(float *)(param_1 + 0x298) != 0.2) || (*(float *)((long)param_1 + 0x14c4) != 0.2)) {
      param_1[0x298] = 0x3e4ccccd3e4ccccd;
      FUN_1000200a0(plVar2);
    }
    FUN_100642324(plVar2);
    FUN_100642b14(plVar2,uVar3);
    if (*(char *)((long)param_1 + 0x1645) != *(char *)((long)param_1 + 0x1646)) {
      uVar3 = FUN_1004e0150("HUD_BLITZ_TIMES_UP",0);
      FUN_1006513c0(plVar1,uVar3);
    }
    uVar6 = *(ushort *)((long)param_1 + 0x1647) | 0x400;
  }
  *(ushort *)((long)param_1 + 0x1647) = uVar6;
  return;
}




void FUN_1000937e4(long *param_1)

{
  ushort *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  
  FUN_1000320fc();
  fVar5 = (float)FUN_100032244();
  fVar5 = (*(float *)(param_1 + 0x2c8) - fVar5) + *(float *)((long)param_1 + 0x163c);
  puVar1 = (ushort *)((long)param_1 + 0x1647);
  if (((*puVar1 >> 8 & 1) != 0) || (10.0 < fVar5)) {
    if (((*puVar1 >> 8 & 1) != 0) && (10.0 < fVar5)) {
      plVar2 = param_1 + 0x23f;
      uVar3 = FUN_100640b58(0x3e4ccccd,plVar2,&DAT_10114bccc,FUN_1000917d4);
      FUN_100642324(plVar2);
      FUN_100642b14(plVar2,uVar3);
      plVar2 = param_1 + 0x265;
      uVar3 = FUN_100640b58(0x3e4ccccd,plVar2,&DAT_10114bccc,FUN_1000917d4);
      FUN_100642324(plVar2);
      FUN_100642b14(plVar2,uVar3);
      *puVar1 = *puVar1 & 0xfeff;
                    /* WARNING: Could not recover jumptable at 0x000100093a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x138))(param_1);
      return;
    }
  }
  else {
    plVar2 = param_1 + 0x23f;
    uVar3 = FUN_100640b58(0x3f000000,plVar2,&DAT_10114bcd0,FUN_1000917d4);
    local_78[0] = 0xff000080;
    FUN_100640b58(0x3f000000,plVar2,local_78,FUN_1000917d4);
    uVar4 = FUN_10008cac4();
    FUN_10063f614(uVar4,uVar3);
    FUN_10063f664(uVar4);
    FUN_100642324(plVar2);
    FUN_100642b14(plVar2,uVar4);
    plVar2 = param_1 + 0x265;
    uVar3 = FUN_100640b58(0x3f000000,plVar2,&DAT_10114bcd0,FUN_1000917d4);
    local_80[0] = 0xff000080;
    FUN_100640b58(0x3f000000,plVar2,local_80,FUN_1000917d4);
    uVar4 = FUN_10008cac4();
    FUN_10063f614(uVar4,uVar3);
    FUN_10063f664(uVar4);
    FUN_100642324(plVar2);
    FUN_100642b14(plVar2,uVar4);
    *puVar1 = *puVar1 | 0x100;
    (**(code **)(*param_1 + 0x138))(param_1);
  }
  return;
}




void FUN_100093a40(long *param_1)

{
  ushort *puVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_1000320fc();
  fVar7 = (float)FUN_100032244();
  fVar8 = *(float *)(param_1 + 0x2c8);
  fVar9 = *(float *)((long)param_1 + 0x163c);
  puVar1 = (ushort *)((long)param_1 + 0x1647);
  uVar3 = *puVar1;
  plVar2 = param_1 + 0x28b;
  iVar4 = FUN_1004e3634(plVar2);
  if ((fVar8 - fVar7) + fVar9 <= 60.0) {
    FUN_1004e38ac(plVar2,"%02d");
    FUN_1004e38ac(param_1 + 0x28d,"%02d");
    FUN_1006513c0(param_1 + 0x23f,plVar2);
    FUN_1006513c0(param_1 + 0x265,param_1 + 0x28d);
    uVar5 = *puVar1 | 0x200;
    *puVar1 = (ushort)uVar5;
    uVar6 = *(uint *)((long)param_1 + 0x13ac) | 4;
  }
  else {
    FUN_1004e38ac(plVar2,"%d:%02d");
    FUN_1006513c0(param_1 + 0x23f,plVar2);
    uVar5 = *puVar1 & 0xfffffdff;
    *puVar1 = (ushort)uVar5;
    uVar6 = *(uint *)((long)param_1 + 0x13ac) & 0xfffffffb;
  }
  *(uint *)((long)param_1 + 0x13ac) = uVar6;
  if ((((uVar5 ^ uVar3) >> 9 & 1) == 0) &&
     ((iVar4 != 0 || (iVar4 = FUN_1004e3634(plVar2), iVar4 == 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100093bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_100093c18(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10007c9e4();
  operator_delete(pvVar1);
  return;
}




void FUN_100093c2c(void)

{
  if ((DAT_10184de58 & 1) == 0) {
    DAT_10184de50 = DAT_101872e38;
    DAT_10184de58 = 1;
  }
  return;
}




code * FUN_100093c58(code *param_1,long param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  char *pcVar8;
  code *local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar6 = (undefined8 *)FUN_100655644();
  *puVar6 = &PTR_thunk_FUN_1000940fc_1014504c0;
  puVar6 = puVar6 + 0x2b;
  thunk_FUN_100652c08(puVar6);
  pcVar1 = param_1 + 0x248;
  thunk_FUN_100652c08(pcVar1);
  pcVar2 = param_1 + 0x338;
  FUN_1006533a4(pcVar2);
  pcVar3 = param_1 + 0x438;
  thunk_FUN_100650e64(pcVar3);
  pcVar4 = param_1 + 0x568;
  thunk_FUN_100650e64(pcVar4);
  FUN_10064e264(param_1 + 0x698);
  *(long *)(param_1 + 0x750) = 0;
  *(long *)(param_1 + 0x758) = param_2;
  FUN_1004e3004(param_1 + 0x760);
  *(undefined4 *)(param_1 + 0x768) = param_3;
  *(undefined4 *)(param_1 + 0x76c) = 0;
  param_1[0x770] = (code)0x0;
  local_88 = thunk_FUN_100094214;
  local_90 = param_1;
  FUN_100643618(0xbf800000,&local_90,0,1);
  param_1[0x770] = SUB41(param_4,0);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar2,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar3,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar4,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,param_1 + 0x698,1);
  FUN_100652cac(puVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_ability_shoulder");
  FUN_100652cac(pcVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_ability_shoulder");
  if (param_4 == 0) {
    pcVar7 = FUN_100094040;
  }
  else {
    param_1[0x230] = (code)((byte)param_1[0x230] | 1);
    param_1[800] = (code)((byte)param_1[800] | 1);
    param_1[0x410] = (code)((byte)param_1[0x410] | 1);
    pcVar7 = FUN_100093f90;
  }
  FUN_100653464(pcVar2,pcVar7,param_1 + 0x76c);
  FUN_100652ca4(pcVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  puVar6 = (undefined8 *)FUN_10044d88c(param_2,param_3);
  iVar5 = _strcmp((char *)*puVar6,PTR_s_Healing_Flask_10184e160);
  if (iVar5 == 0) {
    pcVar8 = "hud_ability_healFlask";
  }
  else {
    puVar6 = (undefined8 *)FUN_10044d88c(param_2,param_3);
    iVar5 = _strcmp((char *)*puVar6,PTR_s_Vision_Totem_10184e168);
    if (iVar5 != 0) goto LAB_100093ea8;
    pcVar8 = "hud_ability_visionTotem";
  }
  FUN_100652cdc(pcVar1,pcVar8);
LAB_100093ea8:
  *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) & 0xfffffffb;
  FUN_100651038(pcVar3,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0);
  FUN_100651038(pcVar4,PTR_s_build___Fonts_Futura_Medium_30_S_10184e2b8);
  FUN_1004e3120(&local_90,"0");
  FUN_1006513c0(pcVar4,&local_90);
  if (local_88 != (code *)0x0) {
    operator_delete__(local_88);
  }
  local_68 = DAT_101dbd458;
  local_90 = FUN_1000940f0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x6a0,&local_90);
  local_68 = DAT_101dbd484;
  local_90 = FUN_1000940f0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x6a0,&local_90);
  *(uint *)(param_1 + 0x71c) = *(uint *)(param_1 + 0x71c) | 0x10;
  return param_1;
}




void FUN_100093f90(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(*param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"hud_ability_shoulder");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3ee66666,0x3f19999a,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,1,0,param_8,0x3f800000);
  return;
}




void FUN_100094040(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(*param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"hud_ability_shoulder");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3f0ccccd,0x3f19999a,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_1000940f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100094908(param_1,param_4);
  return;
}




code * thunk_FUN_100093c58(code *param_1,long param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  char *pcVar8;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar6 = (undefined8 *)FUN_100655644();
  *puVar6 = &PTR_thunk_FUN_1000940fc_1014504c0;
  puVar6 = puVar6 + 0x2b;
  thunk_FUN_100652c08(puVar6);
  pcVar1 = param_1 + 0x248;
  thunk_FUN_100652c08(pcVar1);
  pcVar2 = param_1 + 0x338;
  FUN_1006533a4(pcVar2);
  pcVar3 = param_1 + 0x438;
  thunk_FUN_100650e64(pcVar3);
  pcVar4 = param_1 + 0x568;
  thunk_FUN_100650e64(pcVar4);
  FUN_10064e264(param_1 + 0x698);
  *(long *)(param_1 + 0x750) = 0;
  *(long *)(param_1 + 0x758) = param_2;
  FUN_1004e3004(param_1 + 0x760);
  *(undefined4 *)(param_1 + 0x768) = param_3;
  *(undefined4 *)(param_1 + 0x76c) = 0;
  param_1[0x770] = (code)0x0;
  pcStack_88 = thunk_FUN_100094214;
  pcStack_90 = param_1;
  FUN_100643618(0xbf800000,&pcStack_90,0,1);
  param_1[0x770] = SUB41(param_4,0);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar2,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar3,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar4,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,param_1 + 0x698,1);
  FUN_100652cac(puVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_ability_shoulder");
  FUN_100652cac(pcVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_ability_shoulder");
  if (param_4 == 0) {
    pcVar7 = FUN_100094040;
  }
  else {
    param_1[0x230] = (code)((byte)param_1[0x230] | 1);
    param_1[800] = (code)((byte)param_1[800] | 1);
    param_1[0x410] = (code)((byte)param_1[0x410] | 1);
    pcVar7 = FUN_100093f90;
  }
  FUN_100653464(pcVar2,pcVar7,param_1 + 0x76c);
  FUN_100652ca4(pcVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  puVar6 = (undefined8 *)FUN_10044d88c(param_2,param_3);
  iVar5 = _strcmp((char *)*puVar6,PTR_s_Healing_Flask_10184e160);
  if (iVar5 == 0) {
    pcVar8 = "hud_ability_healFlask";
  }
  else {
    puVar6 = (undefined8 *)FUN_10044d88c(param_2,param_3);
    iVar5 = _strcmp((char *)*puVar6,PTR_s_Vision_Totem_10184e168);
    if (iVar5 != 0) goto LAB_100093ea8;
    pcVar8 = "hud_ability_visionTotem";
  }
  FUN_100652cdc(pcVar1,pcVar8);
LAB_100093ea8:
  *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) & 0xfffffffb;
  FUN_100651038(pcVar3,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0);
  FUN_100651038(pcVar4,PTR_s_build___Fonts_Futura_Medium_30_S_10184e2b8);
  FUN_1004e3120(&pcStack_90,"0");
  FUN_1006513c0(pcVar4,&pcStack_90);
  if (pcStack_88 != (code *)0x0) {
    operator_delete__(pcStack_88);
  }
  uStack_68 = DAT_101dbd458;
  pcStack_90 = FUN_1000940f0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  pcStack_88 = param_1;
  FUN_10001554c(param_1 + 0x6a0,&pcStack_90);
  uStack_68 = DAT_101dbd484;
  pcStack_90 = FUN_1000940f0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  pcStack_88 = param_1;
  FUN_10001554c(param_1 + 0x6a0,&pcStack_90);
  *(uint *)(param_1 + 0x71c) = *(uint *)(param_1 + 0x71c) | 0x10;
  return param_1;
}




void FUN_1000940fc(undefined8 *param_1)

{
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_1000940fc_1014504c0;
  pcStack_38 = thunk_FUN_100094214;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  if ((long *)param_1[0xea] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xea] + 8))();
    param_1[0xea] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0xd3);
  thunk_FUN_100651068(param_1 + 0xad);
  thunk_FUN_100651068(param_1 + 0x87);
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
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000940fc(void)

{
  FUN_1000940fc();
  return;
}




void FUN_100094200(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000940fc();
  operator_delete(pvVar1);
  return;
}




void FUN_100094214(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_28 [2];
  
  local_28[0] = 0xff808080;
  iVar1 = FUN_10046e740(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768));
  if (iVar1 == 0) {
    puVar2 = &DAT_10115a168;
  }
  else {
    puVar2 = local_28;
  }
  FUN_100652dd4(param_1 + 0x248,puVar2,2);
  FUN_100094284(param_1);
  FUN_100094388(param_1);
  return;
}




void FUN_100094284(long param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if ((*(long *)(param_1 + 0x758) != 0) &&
     (iVar1 = FUN_10046e42c(*(long *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768)), iVar1 != 0
     )) {
    FUN_1006513c0(param_1 + 0x438,&DAT_101d91650);
    *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) & 0xfffffffb;
    *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) & 0xfffffffb;
    uVar2 = FUN_10046e740(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768));
    if ((uVar2 >> 2 & 1) != 0) {
      fVar3 = (float)FUN_10043da00(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768)
                                  );
      FUN_1004e313c(auStack_40);
      FUN_1004e38ac(auStack_40,"%d");
      FUN_1006513c0(param_1 + 0x438,auStack_40);
      *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) | 4;
      fVar4 = (float)FUN_10046e5cc(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768)
                                  );
      *(float *)(param_1 + 0x76c) = 1.0 - fVar3 / fVar4;
      *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) | 4;
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
    }
  }
  return;
}




void FUN_100094388(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if ((*(long *)(param_1 + 0x758) != 0) &&
     (iVar1 = FUN_10046e42c(*(long *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768)), iVar1 != 0
     )) {
    iVar1 = FUN_10046e45c(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768));
    if (iVar1 != 0) {
      uVar3 = FUN_10046e308(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768));
      fVar4 = (float)FUN_10046e344(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768)
                                  );
      if (0 < (int)uVar3) {
        if (0.0 < fVar4) {
          fVar5 = (float)FUN_10046e5cc(*(undefined8 *)(param_1 + 0x758),
                                       *(undefined4 *)(param_1 + 0x768));
          *(float *)(param_1 + 0x76c) = 1.0 - fVar4 / fVar5;
          *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) | 4;
        }
        *(uint *)(param_1 + 0x5ec) = *(uint *)(param_1 + 0x5ec) | 4;
        goto LAB_100094464;
      }
    }
    uVar2 = FUN_10046e2b4(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768));
    if (1 < uVar2) {
      *(uint *)(param_1 + 0x5ec) = *(uint *)(param_1 + 0x5ec) | 4;
      uVar3 = FUN_10046e2b4(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768));
LAB_100094464:
      FUN_1000946fc(param_1,uVar3);
      return;
    }
    *(uint *)(param_1 + 0x5ec) = *(uint *)(param_1 + 0x5ec) & 0xfffffffb;
  }
  return;
}




void FUN_10009448c(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_58;
  
  fVar6 = *(float *)(&DAT_10114bcd8 + (ulong)((char)param_1[0xee] == '\0') * 4);
  plVar1 = param_1 + 0x49;
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x49] + 0x28))(plVar1,&local_58);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x87] + 0x28))(param_1 + 0x87,&local_58);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0xad] + 0x28))(param_1 + 0xad,&local_58);
  uVar3 = 2;
  if ((char)param_1[0xee] != '\0') {
    uVar3 = 3;
  }
  FUN_10064e5ec(0,0,plVar1,uVar3,param_1 + 0x2b,uVar3);
  fVar4 = (float)FUN_100652e60(plVar1);
  fVar5 = -6.0;
  FUN_10064e5ec(fVar4 * fVar6,param_1 + 0xad,6,plVar1,6);
  fVar4 = (float)FUN_100652e60(plVar1);
  FUN_100652e60(plVar1);
  fVar5 = fVar5 * 0.05;
  FUN_10064e5ec(fVar4 * fVar6,param_1 + 0x87,8,plVar1,8);
  if ((*(uint *)((long)param_1 + 0x3bc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3bc) = *(uint *)((long)param_1 + 0x3bc) & 0xffff807f | 0x3f80;
    FUN_1000200a0(param_1 + 0x67);
  }
  *(uint *)((long)param_1 + 0x71c) = *(uint *)((long)param_1 + 0x71c) & 0xffffffbf;
  FUN_1006557ec(param_1);
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  local_58 = (undefined1 *)CONCAT44(fVar5 + 6.0,fVar6 + 36.0);
  FUN_10064e48c(param_1 + 0xd3,&local_58);
  uVar3 = 2;
  if ((char)param_1[0xee] != '\0') {
    uVar3 = 3;
  }
  FUN_10064e5ec(0,0,param_1 + 0xd3,uVar3,param_1,uVar3);
  if (param_1[0xea] != 0) {
    bVar2 = *(byte *)(param_1 + 0xee) ^ 1;
    uVar3 = 0xc0c00000;
    if (*(byte *)(param_1 + 0xee) != 0) {
      uVar3 = 0x40c00000;
    }
    FUN_10064e5ec(uVar3,0x42380000,param_1[0xea],bVar2,plVar1,bVar2);
  }
  return;
}




void FUN_100094684(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_10109c478();
  if ((((uVar2 & 1) != 0) || (iVar1 = FUN_10012709c(), iVar1 == 1)) &&
     (uVar2 = FUN_10034cb58(), (uVar2 & 1) == 0)) {
    pvVar3 = operator_new(0x200);
    uVar4 = thunk_FUN_1000de11c(pvVar3,param_2);
    *(undefined8 *)(param_1 + 0x750) = uVar4;
    FUN_100642bd8(param_1 + 0x248,pvVar3,1);
    return;
  }
  return;
}




void FUN_1000946fc(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0x568,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_100094758(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    FUN_1006423ec(param_1,1);
    (**(code **)(*plVar3 + 0x78))(plVar3,param_1,1);
  }
  lVar1 = param_1 + 0x248;
  FUN_100642324(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = FUN_10001f424();
  uVar4 = NEON_fmov(0x3fe00000,4);
  local_38 = CONCAT44((float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar4 >> 0x20),
                      (float)uVar5 * (float)uVar4);
  FUN_10064025c(uVar2,&local_38);
  FUN_10063f0e8(0x3c23d70a,uVar2);
  FUN_100642b14(lVar1,uVar2);
  uVar2 = FUN_10001f424();
  local_38 = uVar5;
  FUN_10064025c(uVar2,&local_38);
  FUN_10063f0e8(0x3e800000,uVar2);
  FUN_10063f130(uVar2,FUN_10006bf9c);
  FUN_100642b14(lVar1,uVar2);
  return;
}




void FUN_100094834(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined **local_38 [2];
  undefined1 local_24;
  
  if ((((*(int *)(param_1 + 0x768) != -1) && (*(long *)(param_1 + 0x758) != 0)) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x758) + 0x10), lVar3 != 0)) &&
     (((uVar4 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f, (int)uVar4 == 0x1f ||
       (1 < *(ushort *)(lVar3 + uVar4 * 0x38 + 0x90) - 3)) &&
      ((iVar1 = FUN_1003d77ec(), iVar1 != 0 &&
       (iVar1 = FUN_10046e6fc(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768)),
       iVar1 != 0)))))) {
    uVar2 = FUN_100061db0();
    FUN_10005edfc(local_38,*(undefined1 *)(param_1 + 0x770));
    local_38[0] = &PTR_FUN_10144d690;
    local_24 = 0;
    iVar1 = FUN_10005f394(uVar2,local_38);
    if (iVar1 != 0) {
      FUN_100094758(param_1);
    }
    FUN_1004e3004(param_1 + 0x760);
  }
  return;
}




void FUN_100094908(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
     ((iVar1 = FUN_100644ecc(param_2), iVar1 == 0 ||
      (uVar2 = FUN_100094994(param_1), (uVar2 & 1) == 0)))) {
    FUN_100094834(param_1);
    return;
  }
  return;
}




undefined8 FUN_100094994(long param_1)

{
  bool bVar1;
  bool bVar2;
  uint64_t uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auStack_80 [48];
  
  uVar3 = _mach_absolute_time();
  if (2.0 <= (double)((uVar3 - *(long *)(param_1 + 0x760)) * DAT_101d91638) * 1e-09) {
    lVar4 = FUN_100057f34();
    if (lVar4 != 0) {
      FUN_10005fe04();
      fVar12 = (float)FUN_100060518();
      if (0.0 < fVar12) {
        return 0;
      }
    }
    uVar5 = FUN_100491adc();
    uVar5 = FUN_100491f2c(uVar5,2);
    if (*(long *)(param_1 + 0x758) == 0) {
      return 0;
    }
    uVar13 = FUN_10043da00(*(long *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768));
    fVar12 = (float)FUN_10046e5cc(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768))
    ;
    uVar6 = FUN_10046e258(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768));
    bVar1 = true;
    bVar2 = false;
    if (10.0 <= fVar12) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN((float)uVar13)) {
        bVar1 = (float)uVar13 < 5.0;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      uVar7 = FUN_10034ee90();
      FUN_1000106d8(uVar13,auStack_80,uVar7,uVar5,0xffffffff,uVar6);
      FUN_100345498(auStack_80);
      lVar4 = FUN_1000bdb98();
      plVar8 = (long *)(lVar4 + 0x10);
      plVar9 = (long *)*plVar8;
      plVar10 = plVar8;
      if (plVar9 != (long *)0x0) {
        do {
          if (*(uint *)(plVar9 + 4) >= 0x2e4f13dd) {
            plVar10 = plVar9;
          }
          plVar9 = (long *)plVar9[*(uint *)(plVar9 + 4) < 0x2e4f13dd];
        } while (plVar9 != (long *)0x0);
        if (((plVar10 != plVar8) && (*(uint *)(plVar10 + 4) < 0x2e4f13de)) && ((int)plVar10[5] != 0)
           ) {
          lVar4 = 0;
          uVar11 = 0;
          do {
            (*(code *)((undefined8 *)(plVar10[6] + lVar4))[1])(*(undefined8 *)(plVar10[6] + lVar4));
            uVar11 = uVar11 + 1;
            lVar4 = lVar4 + 0x10;
          } while (uVar11 < *(uint *)(plVar10 + 5));
        }
      }
      FUN_1004e3004(param_1 + 0x760);
      return 1;
    }
  }
  return 0;
}




void thunk_FUN_100094214(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_28 [2];
  
  auStack_28[0] = 0xff808080;
  iVar1 = FUN_10046e740(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x768));
  if (iVar1 == 0) {
    puVar2 = &DAT_10115a168;
  }
  else {
    puVar2 = auStack_28;
  }
  FUN_100652dd4(param_1 + 0x248,puVar2,2);
  FUN_100094284(param_1);
  FUN_100094388(param_1);
  return;
}




long FUN_100094b5c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_10034cb58();
  if (iVar1 == 0) {
    uVar2 = FUN_100036688();
  }
  else {
    uVar2 = FUN_10004daa0();
  }
  lVar3 = FUN_1010a0298(uVar2,DAT_10184dd48);
  if (lVar3 != 0) {
    FUN_10004b038(param_1,lVar3,param_2,0,1,0);
    FUN_10004b148(lVar3);
  }
  return lVar3;
}




void FUN_100094bd4(undefined8 param_1,undefined8 param_2)

{
  FUN_10004bcec();
  FUN_10004aff0(param_1,param_2);
  return;
}




undefined8 FUN_100094c08(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  int local_28 [2];
  
  if (param_1 != (long *)0x0) {
    iVar3 = FUN_100126d70();
    pcVar2 = "en";
    if (iVar3 == 6) {
      pcVar2 = "ja";
    }
    pcVar1 = "ko";
    if (iVar3 != 8) {
      pcVar1 = pcVar2;
    }
    pcVar2 = "zh";
    if (iVar3 != 0xf) {
      pcVar2 = pcVar1;
    }
    FUN_10034cb1c(local_28,pcVar2);
    puVar4 = (undefined8 *)*param_1;
    while (puVar4 != (undefined8 *)0x0) {
      iVar3 = FUN_100461300(*puVar4);
      if (iVar3 == local_28[0]) {
        return *(undefined8 *)(*param_1 + 8);
      }
      puVar4 = (undefined8 *)param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return 0;
}




void FUN_100094cac(void)

{
  if ((DAT_10184dd50 & 1) == 0) {
    DAT_10184dd48 = DAT_101872e38;
    DAT_10184dd50 = 1;
  }
  return;
}




long * FUN_100094cd8(long *param_1,uint param_2,int param_3)

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
  undefined **ppuVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined1 auStack_70 [8];
  void *local_68;
  
  puVar16 = (undefined8 *)FUN_10064e20c();
  *puVar16 = &PTR_thunk_FUN_1000968a8_101450610;
  FUN_100269de4();
  plVar1 = param_1 + 0x30;
  FUN_1006421a8(plVar1);
  param_1[0x30] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x41;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x67;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x8d;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0xb3;
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0xd9;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0xff;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x11d;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x13b;
  thunk_FUN_100652c08();
  plVar10 = param_1 + 0x159;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x177;
  thunk_FUN_100652c08(plVar11);
  param_1[0x195] = 0;
  *(undefined4 *)(param_1 + 0x196) = DAT_101dc0b88;
  FUN_1004e313c(param_1 + 0x197);
  *(char *)(param_1 + 0x199) = (char)param_2;
  *(undefined1 *)((long)param_1 + 0xcc9) = 0;
  uVar13 = FUN_1004d2524("HUD_Stats");
  uVar14 = FUN_100015208("HUD_Stats",uVar13,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       (uVar14 & 0xffff) << 0xf | *(uint *)((long)param_1 + 0x84) & 0x80007fff | 4;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 8;
  ppuVar12 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220;
  if (param_3 == 0) {
    ppuVar12 = &PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218;
  }
  if (param_2 == 0) {
    ppuVar12 = &PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0;
  }
  puVar18 = *ppuVar12;
  (**(code **)(*param_1 + 0x78))(param_1,puVar16 + 0x17,1);
  FUN_100642bd8(puVar16 + 0x17,plVar1,1);
  plVar17 = plVar8;
  plVar19 = plVar7;
  plVar20 = plVar2;
  plVar21 = plVar6;
  plVar22 = plVar11;
  plVar23 = plVar3;
  if ((param_2 & 1) == 0) {
    uVar14 = *(uint *)((long)param_1 + 0x204);
    if ((uVar14 & 0x7f80) != 0x6600) {
      *(uint *)((long)param_1 + 0x204) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
      FUN_1000200a0(plVar1,plVar8);
    }
    FUN_100642bd8(plVar1,plVar7,1);
    FUN_100642bd8(plVar1,plVar2,1);
    FUN_100642bd8(plVar1,plVar8,1);
    FUN_100642bd8(plVar1,plVar3,1);
    plVar17 = plVar9;
    plVar19 = plVar11;
    plVar20 = plVar6;
    plVar21 = plVar5;
    plVar22 = plVar10;
    plVar23 = plVar4;
  }
  FUN_100642bd8(plVar1,plVar17,1);
  FUN_100642bd8(plVar1,plVar23,1);
  FUN_100642bd8(plVar1,plVar22,1);
  FUN_100642bd8(plVar1,plVar21,1);
  FUN_100642bd8(plVar1,plVar19,1);
  FUN_100642bd8(plVar1,plVar20,1);
  FUN_100651038(plVar2,puVar18);
  FUN_1006516bc(plVar2,&DAT_101d22fe8);
  FUN_10065165c(plVar2,1);
  FUN_1004e3120(auStack_70,"99999");
  FUN_1006513c0(plVar2,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  uVar13 = FUN_1004d2524("HUD_Label_Gold");
  uVar14 = FUN_100015208("HUD_Label_Gold",uVar13,0x1234);
  *(uint *)((long)param_1 + 0x28c) =
       *(uint *)((long)param_1 + 0x28c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x28c) & 0x7fff | (uVar14 & 0xffff) << 0xf;
  FUN_100651038(plVar3,puVar18);
  FUN_1006516bc(plVar3,&DAT_101d22fe8);
  FUN_10065165c(plVar3,1);
  FUN_1004e3120(auStack_70,"99");
  FUN_1006513c0(plVar3,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_100651038(plVar4,puVar18);
  FUN_1006516bc(plVar4,&DAT_101d22fe8);
  FUN_10065165c(plVar4,1);
  FUN_1004e3120(auStack_70,"99");
  FUN_1006513c0(plVar4,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_100651038(plVar5,puVar18);
  FUN_1006516bc(plVar5,&DAT_101d22fe8);
  FUN_10065165c(plVar5,1);
  FUN_1004e3120(auStack_70,"99");
  FUN_1006513c0(plVar5,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_100651038(plVar6,puVar18);
  FUN_1006516bc(plVar6,&DAT_101d22fe8);
  FUN_10065165c(plVar6,1);
  FUN_1004e3120(auStack_70,"999");
  FUN_1006513c0(plVar6,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_100652ca4(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar7,"hud_stats_gold");
  FUN_100652ca4(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar8,"hud_stats_kills");
  FUN_100652ca4(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar9,"hud_stats_deaths");
  FUN_100652ca4(plVar10,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar10,"hud_stats_assists");
  FUN_1003467f8();
  iVar15 = FUN_10034cf58();
  if (iVar15 == 0) {
    FUN_100652ca4(plVar11,PTR_s_build___HUDPartsCommon_atlas_10184e098);
    FUN_100652cdc(plVar11,"hud_pingicon_action_minion");
    uVar13 = 0x41e00000;
    uVar24 = 0x41f00000;
  }
  else {
    FUN_100652cac(plVar11,PTR_s_build___HUDPartsBlitz_tga_10184e0b0,"blitz_ally_score");
    uVar13 = 0x42100000;
    uVar24 = 0x42100000;
  }
  FUN_10064e47c(uVar13,uVar24,plVar11);
  return param_1;
}




void FUN_100095258(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffff7 | uVar1;
  return;
}




long * thunk_FUN_100094cd8(long *param_1,uint param_2,int param_3)

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
  undefined **ppuVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined1 auStack_70 [8];
  void *pvStack_68;
  
  puVar16 = (undefined8 *)FUN_10064e20c();
  *puVar16 = &PTR_thunk_FUN_1000968a8_101450610;
  FUN_100269de4();
  plVar1 = param_1 + 0x30;
  FUN_1006421a8(plVar1);
  param_1[0x30] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x41;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x67;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x8d;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0xb3;
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0xd9;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0xff;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x11d;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x13b;
  thunk_FUN_100652c08();
  plVar10 = param_1 + 0x159;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x177;
  thunk_FUN_100652c08(plVar11);
  param_1[0x195] = 0;
  *(undefined4 *)(param_1 + 0x196) = DAT_101dc0b88;
  FUN_1004e313c(param_1 + 0x197);
  *(char *)(param_1 + 0x199) = (char)param_2;
  *(undefined1 *)((long)param_1 + 0xcc9) = 0;
  uVar13 = FUN_1004d2524("HUD_Stats");
  uVar14 = FUN_100015208("HUD_Stats",uVar13,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       (uVar14 & 0xffff) << 0xf | *(uint *)((long)param_1 + 0x84) & 0x80007fff | 4;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 8;
  ppuVar12 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220;
  if (param_3 == 0) {
    ppuVar12 = &PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218;
  }
  if (param_2 == 0) {
    ppuVar12 = &PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0;
  }
  puVar18 = *ppuVar12;
  (**(code **)(*param_1 + 0x78))(param_1,puVar16 + 0x17,1);
  FUN_100642bd8(puVar16 + 0x17,plVar1,1);
  plVar17 = plVar8;
  plVar19 = plVar7;
  plVar20 = plVar2;
  plVar21 = plVar6;
  plVar22 = plVar11;
  plVar23 = plVar3;
  if ((param_2 & 1) == 0) {
    uVar14 = *(uint *)((long)param_1 + 0x204);
    if ((uVar14 & 0x7f80) != 0x6600) {
      *(uint *)((long)param_1 + 0x204) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
      FUN_1000200a0(plVar1,plVar8);
    }
    FUN_100642bd8(plVar1,plVar7,1);
    FUN_100642bd8(plVar1,plVar2,1);
    FUN_100642bd8(plVar1,plVar8,1);
    FUN_100642bd8(plVar1,plVar3,1);
    plVar17 = plVar9;
    plVar19 = plVar11;
    plVar20 = plVar6;
    plVar21 = plVar5;
    plVar22 = plVar10;
    plVar23 = plVar4;
  }
  FUN_100642bd8(plVar1,plVar17,1);
  FUN_100642bd8(plVar1,plVar23,1);
  FUN_100642bd8(plVar1,plVar22,1);
  FUN_100642bd8(plVar1,plVar21,1);
  FUN_100642bd8(plVar1,plVar19,1);
  FUN_100642bd8(plVar1,plVar20,1);
  FUN_100651038(plVar2,puVar18);
  FUN_1006516bc(plVar2,&DAT_101d22fe8);
  FUN_10065165c(plVar2,1);
  FUN_1004e3120(auStack_70,"99999");
  FUN_1006513c0(plVar2,auStack_70);
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  uVar13 = FUN_1004d2524("HUD_Label_Gold");
  uVar14 = FUN_100015208("HUD_Label_Gold",uVar13,0x1234);
  *(uint *)((long)param_1 + 0x28c) =
       *(uint *)((long)param_1 + 0x28c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x28c) & 0x7fff | (uVar14 & 0xffff) << 0xf;
  FUN_100651038(plVar3,puVar18);
  FUN_1006516bc(plVar3,&DAT_101d22fe8);
  FUN_10065165c(plVar3,1);
  FUN_1004e3120(auStack_70,"99");
  FUN_1006513c0(plVar3,auStack_70);
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  FUN_100651038(plVar4,puVar18);
  FUN_1006516bc(plVar4,&DAT_101d22fe8);
  FUN_10065165c(plVar4,1);
  FUN_1004e3120(auStack_70,"99");
  FUN_1006513c0(plVar4,auStack_70);
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  FUN_100651038(plVar5,puVar18);
  FUN_1006516bc(plVar5,&DAT_101d22fe8);
  FUN_10065165c(plVar5,1);
  FUN_1004e3120(auStack_70,"99");
  FUN_1006513c0(plVar5,auStack_70);
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  FUN_100651038(plVar6,puVar18);
  FUN_1006516bc(plVar6,&DAT_101d22fe8);
  FUN_10065165c(plVar6,1);
  FUN_1004e3120(auStack_70,"999");
  FUN_1006513c0(plVar6,auStack_70);
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  FUN_100652ca4(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar7,"hud_stats_gold");
  FUN_100652ca4(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar8,"hud_stats_kills");
  FUN_100652ca4(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar9,"hud_stats_deaths");
  FUN_100652ca4(plVar10,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar10,"hud_stats_assists");
  FUN_1003467f8();
  iVar15 = FUN_10034cf58();
  if (iVar15 == 0) {
    FUN_100652ca4(plVar11,PTR_s_build___HUDPartsCommon_atlas_10184e098);
    FUN_100652cdc(plVar11,"hud_pingicon_action_minion");
    uVar13 = 0x41e00000;
    uVar24 = 0x41f00000;
  }
  else {
    FUN_100652cac(plVar11,PTR_s_build___HUDPartsBlitz_tga_10184e0b0,"blitz_ally_score");
    uVar13 = 0x42100000;
    uVar24 = 0x42100000;
  }
  FUN_10064e47c(uVar13,uVar24,plVar11);
  return param_1;
}




void FUN_10009527c(long param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_24;
  
  *(long *)(param_1 + 0xca8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xcb0) = *(undefined4 *)(param_2 + 0x30);
  if (param_3 != 0) {
    iVar2 = FUN_100345bbc(param_2);
    puVar1 = &DAT_101dc5198;
    if (iVar2 != 1) {
      puVar1 = &DAT_101dc519c;
    }
    local_24 = *puVar1;
    FUN_100651460(param_1 + 0x338,&local_24);
    FUN_100651460(param_1 + 0x6c8,&local_24);
    FUN_100651460(param_1 + 0x208,&local_24);
    FUN_100652dd4(param_1 + 0x8e8,&local_24,2);
    FUN_100652dd4(param_1 + 3000,&local_24,2);
    FUN_100652dd4(param_1 + 0x7f8,&local_24,2);
  }
  return;
}




void FUN_100095330(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  plVar2 = *(long **)(param_1 + 0xca8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xcb0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x40);
        fVar5 = *(float *)(lVar4 + 0xdc) +
                *(float *)(lVar4 + 400) * (*(float *)(lVar4 + 0x2f8) + 1.0);
        NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x244),DAT_101dc54b4);
        fVar5 = *(float *)(lVar4 + 0xe0) +
                *(float *)(lVar4 + 0x194) * (*(float *)(lVar4 + 0x2fc) + 1.0);
        NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x248),DAT_101dc54b8);
        FUN_1003467f8(*(undefined4 *)(lVar4 + 0x334),fVar5,DAT_101dc54b8);
        iVar1 = FUN_10034cf58();
        lVar3 = *(long *)(lVar3 + 0x40);
        if (iVar1 != 0) {
          fVar5 = *(float *)(lVar3 + 0xd0) +
                  *(float *)(lVar3 + 0x184) * (*(float *)(lVar3 + 0x2ec) + 1.0);
          NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x238),DAT_101dc54a8);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xca8) = 0;
      *(undefined4 *)(param_1 + 0xcb0) = DAT_101dc0b88;
    }
  }
  lVar3 = param_1 + 0xcb8;
  FUN_1004e38ac(lVar3,"%d");
  FUN_1006513c0(param_1 + 0x208,lVar3);
  FUN_1004e38ac(lVar3,"%d");
  FUN_1006513c0(param_1 + 0x6c8,lVar3);
  if ((*(char *)(param_1 + 0xcc8) == '\0') && (*(char *)(param_1 + 0xcc9) == '\0')) {
    FUN_1004e38ac(lVar3,"%d");
    FUN_1006513c0(param_1 + 0x338,lVar3);
    FUN_1004e38ac(lVar3,"%d");
    FUN_1006513c0(param_1 + 0x468,lVar3);
    FUN_1004e38ac(lVar3,"%d");
    param_1 = param_1 + 0x598;
  }
  else {
    FUN_1004e38ac(lVar3,"%d/%d/%d");
    param_1 = param_1 + 0x338;
  }
  FUN_1006513c0(param_1,lVar3);
  return;
}




void FUN_10009557c(long param_1)

{
  if (*(char *)(param_1 + 0xcc8) == '\0') {
    FUN_100095aa4(param_1);
  }
  else {
    FUN_1000955c0(param_1);
  }
  FUN_10064e47c(0x40000000,0x40000000,param_1 + 0xb8);
  return;
}




void FUN_1000955c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_78;
  
  fVar6 = *(float *)(param_1 + 10);
  fVar5 = *(float *)((long)param_1 + 0x54);
  bVar4 = false;
  if ((fVar6 == 0.5) && (bVar4 = false, !NAN(fVar5))) {
    bVar4 = fVar5 == 0.5;
  }
  if (bVar4) {
    fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar6 = fVar6 * -0.5;
LAB_100095684:
    fVar7 = *(float *)(param_1 + 0x38);
    bVar4 = false;
    if ((fVar7 == fVar5 * -0.5) &&
       (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x1c4)) && !NAN(fVar6))) {
      bVar4 = *(float *)((long)param_1 + 0x1c4) == fVar6;
    }
    if (bVar4) goto LAB_1000956c8;
    *(float *)(param_1 + 0x38) = fVar5 * -0.5;
    *(float *)((long)param_1 + 0x1c4) = fVar6;
  }
  else {
    bVar4 = false;
    if ((fVar6 == (float)DAT_101dc1cb8) && (bVar4 = false, !NAN(fVar5) && !NAN(DAT_101dc1cb8._4_4_))
       ) {
      bVar4 = fVar5 == DAT_101dc1cb8._4_4_;
    }
    if (!bVar4) {
      fVar7 = 1.0;
      bVar4 = false;
      if ((fVar6 == 0.5) && (bVar4 = false, !NAN(fVar5))) {
        bVar4 = fVar5 == 1.0;
      }
      if (!bVar4) goto LAB_1000956c8;
      fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
      fVar6 = -0.5;
      (**(code **)(*param_1 + 0x48))(param_1);
      fVar6 = -fVar6;
      goto LAB_100095684;
    }
    fVar7 = 0.0;
    bVar4 = false;
    if ((*(float *)((long)param_1 + 0x1c4) == 0.0) &&
       (bVar4 = false, !NAN(*(float *)(param_1 + 0x38)))) {
      bVar4 = *(float *)(param_1 + 0x38) == 0.0;
    }
    if (bVar4) goto LAB_1000956c8;
    param_1[0x38] = 0;
  }
  FUN_1000200a0(param_1 + 0x30);
LAB_1000956c8:
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  plVar1 = param_1 + 0x11d;
  fVar6 = *(float *)((long)param_1 + 0x93c);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x127) == 0.5) && (bVar4 = false, !NAN(fVar6))) {
    bVar4 = fVar6 == 0.5;
  }
  if (!bVar4) {
    param_1[0x127] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar8 = fVar6 * 0.25;
  FUN_100652e60(plVar1);
  fVar8 = fVar8 / fVar6;
  fVar6 = *(float *)(param_1 + 0x126);
  bVar4 = false;
  if ((fVar6 == fVar8) && (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x934)) && !NAN(fVar8))) {
    bVar4 = *(float *)((long)param_1 + 0x934) == fVar8;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x126) = fVar8;
    *(float *)((long)param_1 + 0x934) = fVar8;
    FUN_1000200a0(plVar1);
  }
  fVar8 = (float)FUN_100652e60(plVar1);
  FUN_100652e60(plVar1);
  if ((*(float *)(param_1 + 0x125) != fVar8 * 0.5) ||
     (*(float *)((long)param_1 + 0x92c) != fVar6 * 0.5)) {
    *(float *)(param_1 + 0x125) = fVar8 * 0.5;
    *(float *)((long)param_1 + 0x92c) = fVar6 * 0.5;
    FUN_1000200a0(plVar1);
  }
  plVar2 = param_1 + 0x177;
  fVar6 = *(float *)(param_1 + 0x181);
  if ((fVar6 != 0.5) || (fVar6 = *(float *)((long)param_1 + 0xc0c), fVar6 != 0.5)) {
    param_1[0x181] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar8 = fVar6 * 0.25;
  FUN_100652e60(plVar2);
  fVar8 = fVar8 / fVar6;
  fVar6 = *(float *)(param_1 + 0x180);
  bVar4 = false;
  if ((fVar6 == fVar8) && (bVar4 = false, !NAN(*(float *)((long)param_1 + 0xc04)) && !NAN(fVar8))) {
    bVar4 = *(float *)((long)param_1 + 0xc04) == fVar8;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x180) = fVar8;
    *(float *)((long)param_1 + 0xc04) = fVar8;
    FUN_1000200a0(plVar2);
  }
  fVar9 = *(float *)(param_1 + 0x125);
  fVar10 = *(float *)((long)param_1 + 0x92c);
  FUN_100652e60(plVar1);
  fVar8 = fVar6;
  FUN_100652e60(plVar2);
  fVar6 = fVar10 + fVar7 * 0.08 + (fVar8 + fVar6) * 0.5;
  if ((*(float *)(param_1 + 0x17f) != fVar9) || (*(float *)((long)param_1 + 0xbfc) != fVar6)) {
    *(float *)(param_1 + 0x17f) = fVar9;
    *(float *)((long)param_1 + 0xbfc) = fVar6;
    FUN_1000200a0(plVar2);
  }
  plVar3 = param_1 + 0xff;
  fVar6 = *(float *)(param_1 + 0x109);
  if ((fVar6 != 0.5) || (fVar6 = *(float *)((long)param_1 + 0x84c), fVar6 != 0.5)) {
    param_1[0x109] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar8 = fVar6 * 0.25;
  FUN_100652e60(plVar3);
  fVar8 = fVar8 / fVar6;
  fVar6 = *(float *)(param_1 + 0x108);
  bVar4 = false;
  if ((fVar6 == fVar8) && (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x844)) && !NAN(fVar8))) {
    bVar4 = *(float *)((long)param_1 + 0x844) == fVar8;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x108) = fVar8;
    *(float *)((long)param_1 + 0x844) = fVar8;
    FUN_1000200a0(plVar3);
  }
  fVar9 = *(float *)(param_1 + 0x17f);
  fVar10 = *(float *)((long)param_1 + 0xbfc);
  FUN_100652e60(plVar2);
  fVar8 = fVar6;
  FUN_100652e60(plVar3);
  fVar6 = fVar10 + fVar7 * 0.08 + (fVar8 + fVar6) * 0.5;
  if ((*(float *)(param_1 + 0x107) != fVar9) || (*(float *)((long)param_1 + 0x83c) != fVar6)) {
    *(float *)(param_1 + 0x107) = fVar9;
    *(float *)((long)param_1 + 0x83c) = fVar6;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x71) != 0.0) || (*(float *)((long)param_1 + 0x38c) != 0.5)) {
    param_1[0x71] = 0x3f00000000000000;
    FUN_1000200a0(param_1 + 0x67);
  }
  fVar7 = *(float *)(param_1 + 0x125);
  fVar6 = (float)FUN_10065317c(plVar1);
  fVar5 = fVar7 + fVar5 * 0.1 + fVar6 * 0.5;
  if ((*(float *)(param_1 + 0x6f) != fVar5) ||
     (*(float *)((long)param_1 + 0x37c) != *(float *)((long)param_1 + 0x92c))) {
    *(float *)(param_1 + 0x6f) = fVar5;
    *(float *)((long)param_1 + 0x37c) = *(float *)((long)param_1 + 0x92c);
    FUN_1000200a0(param_1 + 0x67);
  }
  if ((*(float *)(param_1 + 0xe3) != 0.0) || (*(float *)((long)param_1 + 0x71c) != 0.5)) {
    param_1[0xe3] = 0x3f00000000000000;
    FUN_1000200a0(param_1 + 0xd9);
  }
  fVar5 = *(float *)(param_1 + 0xe1);
  if ((fVar5 != *(float *)(param_1 + 0x6f)) ||
     (*(float *)((long)param_1 + 0x70c) != *(float *)((long)param_1 + 0xbfc))) {
    *(float *)(param_1 + 0xe1) = *(float *)(param_1 + 0x6f);
    *(float *)((long)param_1 + 0x70c) = *(float *)((long)param_1 + 0xbfc);
    FUN_1000200a0(param_1 + 0xd9);
    fVar5 = *(float *)(param_1 + 0xe1);
  }
  plVar1 = param_1 + 0x41;
  if ((*(float *)(param_1 + 0x49) != fVar5) ||
     (*(float *)((long)param_1 + 0x24c) != *(float *)((long)param_1 + 0x83c))) {
    *(float *)(param_1 + 0x49) = fVar5;
    *(float *)((long)param_1 + 0x24c) = *(float *)((long)param_1 + 0x83c);
    FUN_1000200a0(plVar1);
  }
  local_78 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_78);
  return;
}




void FUN_100095aa4(long *param_1)

{
  bool bVar1;
  float fVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined1 *local_78;
  
  fVar5 = *(float *)((long)param_1 + 0x54);
  bVar1 = false;
  if ((*(float *)(param_1 + 0x3a) == *(float *)(param_1 + 10)) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x1d4)) && !NAN(fVar5))) {
    bVar1 = *(float *)((long)param_1 + 0x1d4) == fVar5;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x3a) = *(float *)(param_1 + 10);
    *(float *)((long)param_1 + 0x1d4) = fVar5;
    FUN_1000200a0(param_1 + 0x30);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar5 = fVar5 * 0.5;
  plVar3 = param_1 + 0xff;
  fVar4 = (float)FUN_100652e60(plVar3);
  fVar4 = fVar4 * 0.5;
  if (*(char *)((long)param_1 + 0xcc9) == '\0') {
    bVar1 = false;
    if ((*(float *)(param_1 + 0x107) == fVar4) &&
       (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x83c)) && !NAN(fVar5))) {
      bVar1 = *(float *)((long)param_1 + 0x83c) == fVar5;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x107) = fVar4;
      *(float *)((long)param_1 + 0x83c) = fVar5;
      FUN_1000200a0(plVar3);
    }
    local_78 = &DAT_3f0000003f000000;
    (**(code **)(param_1[0xff] + 0x28))(plVar3,&local_78);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x125) == fVar4 + 155.0) &&
       (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x92c)) && !NAN(fVar5))) {
      bVar1 = *(float *)((long)param_1 + 0x92c) == fVar5;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x125) = fVar4 + 155.0;
      *(float *)((long)param_1 + 0x92c) = fVar5;
      FUN_1000200a0(param_1 + 0x11d);
    }
    local_78 = &DAT_3f0000003f000000;
    (**(code **)(param_1[0x11d] + 0x28))(param_1 + 0x11d,&local_78);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x143) == fVar4 + 240.0) &&
       (bVar1 = false, !NAN(*(float *)((long)param_1 + 0xa1c)) && !NAN(fVar5))) {
      bVar1 = *(float *)((long)param_1 + 0xa1c) == fVar5;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x143) = fVar4 + 240.0;
      *(float *)((long)param_1 + 0xa1c) = fVar5;
      FUN_1000200a0(param_1 + 0x13b);
    }
    local_78 = &DAT_3f0000003f000000;
    (**(code **)(param_1[0x13b] + 0x28))(param_1 + 0x13b,&local_78);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x161) == fVar4 + 325.0) &&
       (bVar1 = false, !NAN(*(float *)((long)param_1 + 0xb0c)) && !NAN(fVar5))) {
      bVar1 = *(float *)((long)param_1 + 0xb0c) == fVar5;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x161) = fVar4 + 325.0;
      *(float *)((long)param_1 + 0xb0c) = fVar5;
      FUN_1000200a0(param_1 + 0x159);
    }
    local_78 = &DAT_3f0000003f000000;
    (**(code **)(param_1[0x159] + 0x28))(param_1 + 0x159,&local_78);
    if ((*(float *)(param_1 + 0x17f) != fVar4 + 420.0) ||
       (*(float *)((long)param_1 + 0xbfc) != fVar5)) {
      *(float *)(param_1 + 0x17f) = fVar4 + 420.0;
      *(float *)((long)param_1 + 0xbfc) = fVar5;
      FUN_1000200a0(param_1 + 0x177);
    }
    local_78 = &DAT_3f0000003f000000;
    (**(code **)(param_1[0x177] + 0x28))(param_1 + 0x177,&local_78);
    if ((*(float *)(param_1 + 0x49) != fVar4 + 18.0) || (*(float *)((long)param_1 + 0x24c) != fVar5)
       ) {
      *(float *)(param_1 + 0x49) = fVar4 + 18.0;
      *(float *)((long)param_1 + 0x24c) = fVar5;
      FUN_1000200a0(param_1 + 0x41);
    }
    local_78 = (undefined1 *)0x3f00000000000000;
    (**(code **)(param_1[0x41] + 0x28))(param_1 + 0x41,&local_78);
    if ((*(float *)(param_1 + 0x6f) != fVar4 + 173.0) ||
       (*(float *)((long)param_1 + 0x37c) != fVar5)) {
      *(float *)(param_1 + 0x6f) = fVar4 + 173.0;
      *(float *)((long)param_1 + 0x37c) = fVar5;
      FUN_1000200a0(param_1 + 0x67);
    }
    local_78 = (undefined1 *)0x3f00000000000000;
    (**(code **)(param_1[0x67] + 0x28))(param_1 + 0x67,&local_78);
    if ((*(float *)(param_1 + 0x95) != fVar4 + 258.0) ||
       (*(float *)((long)param_1 + 0x4ac) != fVar5)) {
      *(float *)(param_1 + 0x95) = fVar4 + 258.0;
      *(float *)((long)param_1 + 0x4ac) = fVar5;
      FUN_1000200a0(param_1 + 0x8d);
    }
    local_78 = (undefined1 *)0x3f00000000000000;
    (**(code **)(param_1[0x8d] + 0x28))(param_1 + 0x8d,&local_78);
    if ((*(float *)(param_1 + 0xbb) != fVar4 + 343.0) ||
       (*(float *)((long)param_1 + 0x5dc) != fVar5)) {
      *(float *)(param_1 + 0xbb) = fVar4 + 343.0;
      *(float *)((long)param_1 + 0x5dc) = fVar5;
      FUN_1000200a0(param_1 + 0xb3);
    }
    local_78 = (undefined1 *)0x3f00000000000000;
    (**(code **)(param_1[0xb3] + 0x28))(param_1 + 0xb3,&local_78);
    fVar2 = 438.0;
  }
  else {
    bVar1 = false;
    if ((*(float *)(param_1 + 0x107) == fVar4) &&
       (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x83c)) && !NAN(fVar5))) {
      bVar1 = *(float *)((long)param_1 + 0x83c) == fVar5;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x107) = fVar4;
      *(float *)((long)param_1 + 0x83c) = fVar5;
      FUN_1000200a0(plVar3);
    }
    local_78 = &DAT_3f0000003f000000;
    (**(code **)(param_1[0xff] + 0x28))(plVar3,&local_78);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x125) == fVar4 + 136.0) &&
       (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x92c)) && !NAN(fVar5))) {
      bVar1 = *(float *)((long)param_1 + 0x92c) == fVar5;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x125) = fVar4 + 136.0;
      *(float *)((long)param_1 + 0x92c) = fVar5;
      FUN_1000200a0(param_1 + 0x11d);
    }
    local_78 = &DAT_3f0000003f000000;
    (**(code **)(param_1[0x11d] + 0x28))(param_1 + 0x11d,&local_78);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x17f) == fVar4 + 310.0) &&
       (bVar1 = false, !NAN(*(float *)((long)param_1 + 0xbfc)) && !NAN(fVar5))) {
      bVar1 = *(float *)((long)param_1 + 0xbfc) == fVar5;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x17f) = fVar4 + 310.0;
      *(float *)((long)param_1 + 0xbfc) = fVar5;
      FUN_1000200a0(param_1 + 0x177);
    }
    local_78 = &DAT_3f0000003f000000;
    (**(code **)(param_1[0x177] + 0x28))(param_1 + 0x177,&local_78);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x49) == fVar4 + 18.0) &&
       (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x24c)) && !NAN(fVar5))) {
      bVar1 = *(float *)((long)param_1 + 0x24c) == fVar5;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x49) = fVar4 + 18.0;
      *(float *)((long)param_1 + 0x24c) = fVar5;
      FUN_1000200a0(param_1 + 0x41);
    }
    local_78 = (undefined1 *)0x3f00000000000000;
    (**(code **)(param_1[0x41] + 0x28))(param_1 + 0x41,&local_78);
    if ((*(float *)(param_1 + 0x6f) != fVar4 + 154.0) ||
       (*(float *)((long)param_1 + 0x37c) != fVar5)) {
      *(float *)(param_1 + 0x6f) = fVar4 + 154.0;
      *(float *)((long)param_1 + 0x37c) = fVar5;
      FUN_1000200a0(param_1 + 0x67);
    }
    local_78 = (undefined1 *)0x3f00000000000000;
    (**(code **)(param_1[0x67] + 0x28))(param_1 + 0x67,&local_78);
    fVar2 = 328.0;
  }
  plVar3 = param_1 + 0xd9;
  if ((*(float *)(param_1 + 0xe1) != fVar4 + fVar2) || (*(float *)((long)param_1 + 0x70c) != fVar5))
  {
    *(float *)(param_1 + 0xe1) = fVar4 + fVar2;
    *(float *)((long)param_1 + 0x70c) = fVar5;
    FUN_1000200a0(plVar3);
  }
  local_78 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_78);
  return;
}




long * FUN_100095fe0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long *local_70;
  code *pcStack_68;
  
  puVar8 = (undefined8 *)FUN_100655644();
  *puVar8 = &PTR_thunk_FUN_100096278_101450758;
  puVar8 = puVar8 + 0x2b;
  thunk_FUN_100650e64(puVar8);
  plVar1 = param_1 + 0x51;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x77;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x9d;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xbb;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xd9;
  thunk_FUN_100652c08(plVar5);
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf8) = DAT_101dc0b88;
  FUN_1004e313c(param_1 + 0xf9);
  pcStack_68 = thunk_FUN_1000966bc;
  local_70 = param_1;
  FUN_100643618(0xbf800000,&local_70,0,1);
  puVar6 = PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100651038(puVar8,puVar6);
  FUN_1006516bc(puVar8,&DAT_101d22fe8);
  FUN_10065165c(puVar8,1);
  FUN_100651038(plVar1,puVar6);
  FUN_1006516bc(plVar1,&DAT_101d22fe8);
  FUN_10065165c(plVar1,1);
  FUN_100651038(plVar2,puVar6);
  FUN_1006516bc(plVar2,&DAT_101d22fe8);
  FUN_10065165c(plVar2,1);
  FUN_100652ca4(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar3,"hud_stats_gold");
  FUN_100652ca4(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar4,"hud_stats_kills");
  FUN_1003467f8();
  iVar7 = FUN_10034cf58();
  if (iVar7 == 0) {
    FUN_100652ca4(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098);
    FUN_100652cdc(plVar5,"hud_pingicon_action_minion");
    uVar9 = 0x41e00000;
    uVar10 = 0x41f00000;
  }
  else {
    FUN_100652cac(plVar5,PTR_s_build___HUDPartsBlitz_tga_10184e0b0,"blitz_ally_score");
    uVar9 = 0x42100000;
    uVar10 = 0x42100000;
  }
  FUN_10064e47c(uVar9,uVar10,plVar5);
  return param_1;
}




long * thunk_FUN_100095fe0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long *plStack_70;
  code *pcStack_68;
  
  puVar8 = (undefined8 *)FUN_100655644();
  *puVar8 = &PTR_thunk_FUN_100096278_101450758;
  puVar8 = puVar8 + 0x2b;
  thunk_FUN_100650e64(puVar8);
  plVar1 = param_1 + 0x51;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x77;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x9d;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xbb;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xd9;
  thunk_FUN_100652c08(plVar5);
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf8) = DAT_101dc0b88;
  FUN_1004e313c(param_1 + 0xf9);
  pcStack_68 = thunk_FUN_1000966bc;
  plStack_70 = param_1;
  FUN_100643618(0xbf800000,&plStack_70,0,1);
  puVar6 = PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100651038(puVar8,puVar6);
  FUN_1006516bc(puVar8,&DAT_101d22fe8);
  FUN_10065165c(puVar8,1);
  FUN_100651038(plVar1,puVar6);
  FUN_1006516bc(plVar1,&DAT_101d22fe8);
  FUN_10065165c(plVar1,1);
  FUN_100651038(plVar2,puVar6);
  FUN_1006516bc(plVar2,&DAT_101d22fe8);
  FUN_10065165c(plVar2,1);
  FUN_100652ca4(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar3,"hud_stats_gold");
  FUN_100652ca4(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar4,"hud_stats_kills");
  FUN_1003467f8();
  iVar7 = FUN_10034cf58();
  if (iVar7 == 0) {
    FUN_100652ca4(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098);
    FUN_100652cdc(plVar5,"hud_pingicon_action_minion");
    uVar9 = 0x41e00000;
    uVar10 = 0x41f00000;
  }
  else {
    FUN_100652cac(plVar5,PTR_s_build___HUDPartsBlitz_tga_10184e0b0,"blitz_ally_score");
    uVar9 = 0x42100000;
    uVar10 = 0x42100000;
  }
  FUN_10064e47c(uVar9,uVar10,plVar5);
  return param_1;
}




void FUN_100096278(undefined8 *param_1)

{
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_100096278_101450758;
  pcStack_38 = thunk_FUN_1000966bc;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  if ((void *)param_1[0xfa] != (void *)0x0) {
    operator_delete__((void *)param_1[0xfa]);
    param_1[0xfa] = 0;
    param_1[0xf9] = 0;
  }
  param_1[0xd9] = &PTR_FUN_1014a7108;
  param_1[0xf0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf3);
  FUN_10064e2bc(param_1 + 0xd9);
  param_1[0xbb] = &PTR_FUN_1014a7108;
  param_1[0xd2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd5);
  FUN_10064e2bc(param_1 + 0xbb);
  param_1[0x9d] = &PTR_FUN_1014a7108;
  param_1[0xb4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb7);
  FUN_10064e2bc(param_1 + 0x9d);
  thunk_FUN_100651068(param_1 + 0x77);
  thunk_FUN_100651068(param_1 + 0x51);
  thunk_FUN_100651068(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100096278(undefined8 *param_1)

{
  undefined8 *puStack_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_100096278_101450758;
  pcStack_38 = thunk_FUN_1000966bc;
  puStack_40 = param_1;
  FUN_100643a8c(&puStack_40);
  if ((void *)param_1[0xfa] != (void *)0x0) {
    operator_delete__((void *)param_1[0xfa]);
    param_1[0xfa] = 0;
    param_1[0xf9] = 0;
  }
  param_1[0xd9] = &PTR_FUN_1014a7108;
  param_1[0xf0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf3);
  FUN_10064e2bc(param_1 + 0xd9);
  param_1[0xbb] = &PTR_FUN_1014a7108;
  param_1[0xd2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd5);
  FUN_10064e2bc(param_1 + 0xbb);
  param_1[0x9d] = &PTR_FUN_1014a7108;
  param_1[0xb4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb7);
  FUN_10064e2bc(param_1 + 0x9d);
  thunk_FUN_100651068(param_1 + 0x77);
  thunk_FUN_100651068(param_1 + 0x51);
  thunk_FUN_100651068(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10009637c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100096278();
  operator_delete(pvVar1);
  return;
}




void FUN_100096390(long param_1,long param_2)

{
  *(long *)(param_1 + 0x7b8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_1000963a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (((DAT_101dc5318 & 1) == 0) && (iVar5 = ___cxa_guard_acquire(&DAT_101dc5318), iVar5 != 0)) {
    uVar6 = FUN_100655b6c(param_1 + 0x228);
    thunk_FUN_1004e439c(&DAT_101dc5308,uVar6);
    ___cxa_atexit(FUN_100046198,&DAT_101dc5308,0x100000000);
    ___cxa_guard_release(&DAT_101dc5318);
  }
  if (((DAT_101dc5330 & 1) == 0) && (iVar5 = ___cxa_guard_acquire(&DAT_101dc5330), iVar5 != 0)) {
    uVar6 = FUN_100655b6c(param_1 + 0x358);
    thunk_FUN_1004e439c(&DAT_101dc5320,uVar6);
    ___cxa_atexit(FUN_100046198,&DAT_101dc5320,0x100000000);
    ___cxa_guard_release(&DAT_101dc5330);
  }
  if (((DAT_101dc5348 & 1) == 0) && (iVar5 = ___cxa_guard_acquire(&DAT_101dc5348), iVar5 != 0)) {
    uVar6 = FUN_100655b6c(param_1 + 0x488);
    thunk_FUN_1004e439c(&DAT_101dc5338,uVar6);
    ___cxa_atexit(FUN_100046198,&DAT_101dc5338,0x100000000);
    ___cxa_guard_release(&DAT_101dc5348);
  }
  lVar1 = param_1 + 0x158;
  FUN_1004e3120(auStack_50,"0000");
  FUN_1006513c0(lVar1,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  lVar2 = param_1 + 0x288;
  FUN_1004e3120(auStack_50,"10/10/10");
  FUN_1006513c0(lVar2,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  lVar3 = param_1 + 0x3b8;
  FUN_1004e3120(auStack_50,"000");
  FUN_1006513c0(lVar3,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_10064e72c(0x41000000,lVar1,3,param_1 + 0x4e8,1);
  FUN_10064e72c(0,lVar1,5,param_1 + 0x4e8,5);
  lVar4 = param_1 + 0x5d8;
  FUN_10064e72c(0x41900000,lVar4,3,lVar1,1);
  FUN_10064e72c(0,lVar4,5,lVar1,5);
  FUN_10064e72c(0x41000000,lVar2,3,lVar4,1);
  FUN_10064e72c(0,lVar2,5,lVar4,5);
  lVar4 = param_1 + 0x6c8;
  FUN_10064e72c(0x41900000,lVar4,3,lVar2,1);
  FUN_10064e72c(0,lVar4,5,lVar2,5);
  FUN_10064e72c(0x41000000,lVar3,3,lVar4,1);
  FUN_10064e72c(0,lVar3,5,lVar4,5);
  FUN_1006557ec(param_1);
  FUN_1006513c0(lVar1,&DAT_101dc5308);
  FUN_1006513c0(lVar2,&DAT_101dc5320);
  FUN_1006513c0(lVar3,&DAT_101dc5338);
  return;
}




void FUN_1000966bc(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  plVar2 = *(long **)(param_1 + 0x7b8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7c0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x40);
        fVar5 = *(float *)(lVar4 + 0xdc) +
                *(float *)(lVar4 + 400) * (*(float *)(lVar4 + 0x2f8) + 1.0);
        NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x244),DAT_101dc54b4);
        fVar5 = *(float *)(lVar4 + 0xe0) +
                *(float *)(lVar4 + 0x194) * (*(float *)(lVar4 + 0x2fc) + 1.0);
        NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x248),DAT_101dc54b8);
        FUN_1003467f8(*(undefined4 *)(lVar4 + 0x334),fVar5,DAT_101dc54b8);
        iVar1 = FUN_10034cf58();
        lVar3 = *(long *)(lVar3 + 0x40);
        if (iVar1 != 0) {
          fVar5 = *(float *)(lVar3 + 0xd0) +
                  *(float *)(lVar3 + 0x184) * (*(float *)(lVar3 + 0x2ec) + 1.0);
          NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x238),DAT_101dc54a8);
        }
        lVar3 = param_1 + 0x7c8;
        FUN_1004e38ac(lVar3,"%d");
        FUN_1006513c0(param_1 + 0x158,lVar3);
        FUN_1004e38ac(lVar3,"%d");
        FUN_1006513c0(param_1 + 0x3b8,lVar3);
        FUN_1004e38ac(lVar3,"%d/%d/%d");
        FUN_1006513c0(param_1 + 0x288,lVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x7b8) = 0;
      *(undefined4 *)(param_1 + 0x7c0) = DAT_101dc0b88;
    }
  }
  return;
}




void thunk_FUN_1000968a8(void)

{
  FUN_1000968a8();
  return;
}




void FUN_100096894(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000968a8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000968a8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000968a8_101450610;
  if ((void *)param_1[0x198] != (void *)0x0) {
    operator_delete__((void *)param_1[0x198]);
    param_1[0x198] = 0;
    param_1[0x197] = 0;
  }
  param_1[0x177] = &PTR_FUN_1014a7108;
  param_1[0x18e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x191);
  FUN_10064e2bc(param_1 + 0x177);
  param_1[0x159] = &PTR_FUN_1014a7108;
  param_1[0x170] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x173);
  FUN_10064e2bc(param_1 + 0x159);
  param_1[0x13b] = &PTR_FUN_1014a7108;
  param_1[0x152] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x155);
  FUN_10064e2bc(param_1 + 0x13b);
  param_1[0x11d] = &PTR_FUN_1014a7108;
  param_1[0x134] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x137);
  FUN_10064e2bc(param_1 + 0x11d);
  param_1[0xff] = &PTR_FUN_1014a7108;
  param_1[0x116] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x119);
  FUN_10064e2bc(param_1 + 0xff);
  thunk_FUN_100651068(param_1 + 0xd9);
  thunk_FUN_100651068(param_1 + 0xb3);
  thunk_FUN_100651068(param_1 + 0x8d);
  thunk_FUN_100651068(param_1 + 0x67);
  thunk_FUN_100651068(param_1 + 0x41);
  FUN_10064221c(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000966bc(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  plVar2 = *(long **)(param_1 + 0x7b8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7c0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x40);
        fVar5 = *(float *)(lVar4 + 0xdc) +
                *(float *)(lVar4 + 400) * (*(float *)(lVar4 + 0x2f8) + 1.0);
        NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x244),DAT_101dc54b4);
        fVar5 = *(float *)(lVar4 + 0xe0) +
                *(float *)(lVar4 + 0x194) * (*(float *)(lVar4 + 0x2fc) + 1.0);
        NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x248),DAT_101dc54b8);
        FUN_1003467f8(*(undefined4 *)(lVar4 + 0x334),fVar5,DAT_101dc54b8);
        iVar1 = FUN_10034cf58();
        lVar3 = *(long *)(lVar3 + 0x40);
        if (iVar1 != 0) {
          fVar5 = *(float *)(lVar3 + 0xd0) +
                  *(float *)(lVar3 + 0x184) * (*(float *)(lVar3 + 0x2ec) + 1.0);
          NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x238),DAT_101dc54a8);
        }
        lVar3 = param_1 + 0x7c8;
        FUN_1004e38ac(lVar3,"%d");
        FUN_1006513c0(param_1 + 0x158,lVar3);
        FUN_1004e38ac(lVar3,"%d");
        FUN_1006513c0(param_1 + 0x3b8,lVar3);
        FUN_1004e38ac(lVar3,"%d/%d/%d");
        FUN_1006513c0(param_1 + 0x288,lVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x7b8) = 0;
      *(undefined4 *)(param_1 + 0x7c0) = DAT_101dc0b88;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000969cc(void)

{
  DAT_101dc5190 = 0xff;
  DAT_101dc5192 = 0xffff;
  DAT_101dc5194 = 0xffff;
  uRam0000000101dc5418 = 0x7f7fffff7f7fffff;
  _DAT_101dc5410 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5428 = 0x7f7fffff7f7fffff;
  _DAT_101dc5420 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5438 = 0x7f7fffff7f7fffff;
  _DAT_101dc5430 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5448 = 0x7f7fffff7f7fffff;
  _DAT_101dc5440 = 0x7f7fffff7f7fffff;
  DAT_101dc5450 = 0x7f7fffff;
  DAT_101dc5454 = 0x7f7fffff;
  DAT_101dc5458 = 0x7f7fffff;
  DAT_101dc545c = 0x3f800000;
  uRam0000000101dc5468 = 0x7f7fffff7f7fffff;
  _DAT_101dc5460 = 0x7f7fffff7f7fffff;
  DAT_101dc5470 = 0x7f7fffff;
  DAT_101dc5474 = 0x3eb33333;
  DAT_101dc519c = 0xff1166f2;
  DAT_101dc51a0 = 0xffe0e0e0;
  DAT_101dc51a4 = 0xffa0a0a0;
  DAT_101dc51ac = 0xff322213;
  uRam0000000101dc5480 = 0x7f7fffff7f7fffff;
  _DAT_101dc5478 = 0x7f7fffff7f7fffff;
  DAT_101dc51b0 = 0xff091911;
  DAT_101dc51b4 = 0xff170c19;
  DAT_101dc51b8 = 0xff241a14;
  DAT_101dc51bc = 0xff14171c;
  DAT_101dc51c0 = 0xff221911;
  DAT_101dc51c4 = 0xff1a1416;
  DAT_101dc51c8 = 0xff121414;
  DAT_101dc51cc = 0xff1a1809;
  DAT_101dc51d0 = 0xff141414;
  DAT_101dc51d4 = 0xff141414;
  DAT_101dc51d8 = 0xff2929c0;
  DAT_101dc51dc = 0xff283082;
  DAT_101dc51e4 = 0xff283082;
  uRam0000000101dc5490 = 0x7f7fffff7f7fffff;
  _DAT_101dc5488 = 0x7f7fffff7f7fffff;
  DAT_101dc51e0 = 0xff5262cc;
  DAT_101dc51e8 = 0xff5262cc;
  DAT_101dc51ec = 0xff745c42;
  DAT_101dc51f0 = 0xff184155;
  uRam0000000101dc54a0 = 0x7f7fffff7f7fffff;
  _DAT_101dc5498 = 0x7f7fffff7f7fffff;
  DAT_101dc5198 = 0xffbc9c44;
  DAT_101dc51f8 = 0xffbc9c44;
  uRam0000000101dc54b0 = 0x7f7fffff7f7fffff;
  _DAT_101dc54a8 = 0x7f7fffff7f7fffff;
  DAT_101dc51fc = 0xffbbae56;
  DAT_101dc5200 = 0xff8b7b01;
  DAT_101dc5204 = 0xff90b3ef;
  DAT_101dc5384 = NEON_fmov(0xbf800000,4);
  DAT_101dc5208 = 0xff728ebe;
  DAT_101dc54b8 = 0x7f7fffff;
  DAT_101dc54bc = 0x7f7fffff;
  DAT_101dc520c = 0xff19459d;
  DAT_101dc5210 = 0xff9d877b;
  DAT_101dc54c0 = 0x7f7fffff;
  DAT_101dc5214 = 0xffcbb1a3;
  DAT_101dc5218 = 0xff3f6fb5;
  DAT_101dc521c = 0xffc5c5c5;
  DAT_101dc5220 = 0xff4fc1f1;
  uRam0000000101dc5358 = 0xff7fffffff7fffff;
  _DAT_101dc5350 = 0xff7fffffff7fffff;
  DAT_101dc5224 = 0xff606060;
  DAT_101dc5228 = 0xffc5ff7b;
  DAT_101dc5360 = 0;
  DAT_101dc522c = 0xff5271eb;
  DAT_101dc5230 = 0xfffae076;
  DAT_101dc5368 = 0;
  DAT_101dc5234 = 0xff3ac8f6;
  DAT_101dc5238 = 0xffaaaaaa;
  uRam0000000101dc5374 = 0xff7fffffff7fffff;
  _DAT_101dc536c = 0xff7fffffff7fffff;
  DAT_101dc523c = 0xffe19400;
  DAT_101dc5240 = 0xffe19400;
  DAT_101dc5244 = 0xffe550b2;
  DAT_101dc5248 = 0xfff22ae8;
  DAT_101dc537c = 0xff7fffff;
  DAT_101dc5380 = 0xff7fffff;
  DAT_101dc524c = 0xff005ae1;
  DAT_101dc5250 = 0xff1addfa;
  DAT_101dc538c = 0x3f000000;
  DAT_101dc5254 = 0xff2424b3;
  DAT_101dc5258 = 0xff2424b3;
  DAT_101dc525c = 0xff646464;
  DAT_101dc51f4 = 0xff92665e;
  DAT_101dc5260 = 0xff92665e;
  DAT_101dc5264 = 0xff646037;
  DAT_101dc526c = 0xff1111a1;
  DAT_101dc5270 = 0xff321ee1;
  DAT_101dc5274 = 0xffc8c8c8;
  DAT_101dc5390 = 0;
  DAT_101dc5398 = 0;
  DAT_101dc5278 = 0xff321ee1;
  DAT_101dc5284 = 0xff6259b3;
  DAT_101dc53e0 = 0xbf800000;
  DAT_101dc5288 = 0xff506e73;
  DAT_101dc528c = 0xff9dbf86;
  DAT_101dc5290 = 0xffa35244;
  DAT_101dc5294 = 0xffca828e;
  DAT_101dc5298 = 0xffa6a6a6;
  DAT_101dc529c = 0xffa6a6a6;
  DAT_101dc5268 = 0xffffffff;
  DAT_101dc5280 = 0xffffffff;
  DAT_101dc52a0 = 0xffffffff;
  uRam0000000101dc53a8 = 0xff7fffffff7fffff;
  _DAT_101dc53a0 = 0xff7fffffff7fffff;
  uRam0000000101dc53b8 = 0xff7fffffff7fffff;
  _DAT_101dc53b0 = 0xff7fffffff7fffff;
  DAT_101dc52a4 = 0xff88ea2f;
  DAT_101dc51a8 = 0xff8c8c8c;
  DAT_101dc52a8 = 0xff8c8c8c;
  DAT_101dc527c = 0xff7fe801;
  DAT_101dc52ac = 0xffffb400;
  DAT_101dc52b0 = 0xffff00ff;
  uRam0000000101dc53c8 = 0xff7fffffff7fffff;
  _DAT_101dc53c0 = 0xff7fffffff7fffff;
  uRam0000000101dc53d8 = 0xbf800000bf800000;
  _DAT_101dc53d0 = 0xbf80000000000000;
  DAT_101dc52b4 = 0xff00aded;
  DAT_101dc52b8 = 0xff33d3ff;
  DAT_101dc52bc = 0xff7fe801;
  DAT_101dc52c0 = 0xff282828;
  DAT_101dc53e4 = 0xff7fffff;
  DAT_101dc53e8 = 0xff7fffff;
  DAT_101dc52c4 = 0xfff0f0f0;
  DAT_101dc52c8 = 0xffa4781e;
  DAT_101dc52cc = 0xffa6654b;
  DAT_101dc53ec = 0xff7fffff;
  DAT_101dc52d0 = 0xff93435b;
  DAT_101dc53f0 = 0;
  DAT_101dc52d4 = 0xff387f9c;
  DAT_101dc52d8 = 0xffa3781e;
  DAT_101dc52dc = 0xffffd18a;
  DAT_101dc53f4 = 0xff7fffff;
  DAT_101dc52e0 = 0xffff61f7;
  _DAT_101dc53f8 = 0;
  DAT_101dc52e4 = 0xff5de1f2;
  DAT_101dc5400 = 0;
  DAT_101dc52e8 = 0xff80eaff;
  DAT_101dc52ec = 0xff32e00e;
  DAT_101dc52f0 = 0xff5a3c10;
  DAT_101dc52f4 = 0xff330b03;
  DAT_101dc52f8 = 0xff33031d;
  DAT_101dc52fc = 0xff032433;
  DAT_101dc5300 = 0xff9e8e8d;
  return;
}




long * FUN_100097144(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  code *local_90;
  long *plStack_88;
  long *local_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar13 = (undefined8 *)FUN_100269da8();
  *puVar13 = &PTR_thunk_FUN_10009791c_1014508a8;
  puVar13 = puVar13 + 0x19;
  FUN_100269de4(puVar13);
  thunk_FUN_10064f848();
  thunk_FUN_1000dee58(param_1 + 0x4d);
  FUN_10064e264(param_1 + 0xbe);
  thunk_FUN_10064f848();
  thunk_FUN_10064f848();
  thunk_FUN_10064f848();
  thunk_FUN_10064f848();
  plVar1 = param_1 + 0x141;
  thunk_FUN_100650e64();
  thunk_FUN_10009acd4(param_1 + 0x167);
  plVar2 = param_1 + 0x504;
  thunk_FUN_1006543ec(plVar2);
  thunk_FUN_10009f1d4(param_1 + 0x538);
  thunk_FUN_10009b7ac(param_1 + 0x5854);
  thunk_FUN_100099848(param_1 + 0x5e4a);
  thunk_FUN_10009e86c();
  plVar3 = param_1 + 0x66c2;
  thunk_FUN_1001c4dc4(plVar3,1);
  plVar4 = param_1 + 0x6754;
  thunk_FUN_100183990(plVar4,1);
  param_1[0x6812] = 0;
  *(undefined4 *)(param_1 + 0x6813) = DAT_101dc0b88;
  param_1[0x6814] = 0;
  uVar8 = FUN_1004d2524("HUD_Store");
  uVar9 = FUN_100015208("HUD_Store",uVar8,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar9 & 0xffff) << 0xf;
  FUN_1003467f8();
  iVar10 = FUN_10034ce90();
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1003467f8();
    iVar10 = FUN_10034cea0();
  }
  (**(code **)(*param_1 + 0x78))(param_1,puVar13,1);
  FUN_100642bd8(puVar13,param_1 + 0x32,1);
  FUN_100642bd8(puVar13,param_1 + 0x4d,1);
  FUN_100642bd8(puVar13,param_1 + 0x10b,1);
  FUN_100642bd8(puVar13,param_1 + 0x126,1);
  FUN_100642bd8(puVar13,param_1 + 0xd5,1);
  FUN_100642bd8(puVar13,param_1 + 0xf0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x538,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x167,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6393,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5e4a,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5854,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  if (iVar10 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  }
  FUN_10064f8a8(param_1 + 0x32,1);
  uVar6 = DAT_101dbd458;
  local_68 = DAT_101dbd458;
  local_90 = thunk_FUN_100099278;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xd6,&local_90);
  uVar7 = DAT_101dbd484;
  local_68 = DAT_101dbd484;
  local_90 = thunk_FUN_100099278;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xd6,&local_90);
  FUN_10064f8a8(param_1 + 0xd5,1);
  local_68 = uVar6;
  local_90 = thunk_FUN_100099278;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xf1,&local_90);
  local_68 = uVar7;
  local_90 = thunk_FUN_100099278;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xf1,&local_90);
  FUN_10064f8a8(param_1 + 0xf0,1);
  FUN_100652cdc(param_1 + 0x67ee,"circle_button_x");
  FUN_100183c50(0x3f400000,plVar4,&DAT_10115a164);
  local_68 = uVar6;
  local_90 = thunk_FUN_100099278;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x6755,&local_90);
  local_68 = uVar7;
  local_90 = thunk_FUN_100099278;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x6755,&local_90);
  uVar8 = FUN_1004d2524("HUD_Store_Close_Button");
  uVar11 = FUN_100015208("HUD_Store_Close_Button",uVar8,0x1234);
  uVar9 = *(uint *)((long)param_1 + 0x33b24);
  *(uint *)((long)param_1 + 0x33b24) =
       uVar9 & 0x80000000 | uVar9 & 0x7fff | (uVar11 & 0xffff) << 0xf;
  uVar8 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = FUN_100097884;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x168,&local_90);
  local_68 = uVar8;
  local_90 = FUN_10009788c;
  plVar2 = param_1 + 0x539;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  uVar5 = DAT_101d918d0;
  local_68 = DAT_101d918d0;
  local_90 = thunk_FUN_1000989ec;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  local_68 = FUN_100644a94("EVENT_SHOP_RIGHT_CLICK_BUY_ITEM");
  local_90 = thunk_FUN_1000989ec;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  local_68 = uVar8;
  local_90 = thunk_FUN_1000989ec;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x5e4b,&local_90);
  local_68 = DAT_101d23668;
  local_90 = FUN_100097898;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x5e4b,&local_90);
  iVar12 = FUN_1001312b8();
  if (iVar12 != 0) {
    local_68 = uVar5;
    local_90 = thunk_FUN_1000989ec;
    local_78 = (code *)0x0;
    uStack_70 = 0;
    local_80 = (long *)0x0;
    plStack_88 = param_1;
    FUN_10001554c(param_1 + 0x5855,&local_90);
  }
  FUN_10064f8a8(param_1 + 0x10b,1);
  FUN_10064f8a8(param_1 + 0x126,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290);
  uVar14 = FUN_1004e0150("HUD_STORE_TITLE",0);
  FUN_1006513c0(plVar1,uVar14);
  *(uint *)((long)param_1 + 0xa8c) = *(uint *)((long)param_1 + 0xa8c) | 0x10;
  local_68 = uVar6;
  local_90 = thunk_FUN_100099278;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x142,&local_90);
  local_68 = uVar7;
  local_90 = thunk_FUN_100099278;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x142,&local_90);
  local_68 = uVar8;
  local_90 = FUN_1000978a4;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x5855,&local_90);
  if (iVar10 != 0) {
    uVar14 = FUN_100316150();
    local_90 = (code *)0x0;
    local_78 = FUN_1000997ac;
    plStack_88 = param_1;
    local_80 = param_1;
    FUN_10003c508(uVar14,&local_90);
    FUN_1000978ac(param_1);
    FUN_1001c5184(0x3feccccd,plVar3);
    FUN_10001549c(&local_90,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
    FUN_1001c514c(plVar3,&local_90);
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
    local_68 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
    local_90 = thunk_FUN_1000992c8;
    local_78 = (code *)0x0;
    uStack_70 = 0;
    local_80 = (long *)0x0;
    plStack_88 = param_1;
    FUN_10001554c(param_1 + 0x66c3,&local_90);
    FUN_1001c51c8(plVar3,1);
  }
  FUN_10009f1cc(param_1 + 0x6393);
  return param_1;
}




void thunk_FUN_100099278(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_CLOSE_SHOP");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100097884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10009890c(param_1,param_4);
  return;
}




void FUN_10009788c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100098e00(param_1,param_4);
  return;
}




void thunk_FUN_1000989ec(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [40];
  
  plVar1 = (long *)(param_1 + 0x34090);
  plVar6 = (long *)*plVar1;
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_1 + 0x34098) == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      if (lVar7 != 0) {
        FUN_100098014(param_1);
        lVar2 = param_1 + 0x2f250;
        iVar4 = FUN_10009ab1c(lVar2);
        if (iVar4 - 3U < 2) {
          FUN_10009ac18(lVar2);
          return;
        }
        if (iVar4 == 1) {
          lVar3 = param_1 + 0x2c2a0;
          uVar8 = FUN_10009ce28(lVar3);
          if ((uVar8 & 1) == 0) {
            uVar9 = FUN_1004901b4(plVar1);
            uVar10 = FUN_10009cac4(lVar3);
            if (((int)uVar10 != -1) && (iVar4 = FUN_10046e2dc(uVar9,uVar10), -1 < iVar4)) {
              uVar5 = FUN_10046e2b4(uVar9,uVar10);
              FUN_1003de208(auStack_78,*(undefined4 *)(lVar7 + 0x260),uVar10);
              FUN_100345498(auStack_78);
              FUN_10009f1cc(param_1 + 0x31c98);
              if (uVar5 < 2) {
                FUN_10009c2ec(lVar3);
                FUN_10009ab88(lVar2,0xffffffff);
                FUN_100098014(param_1);
              }
            }
          }
        }
        else if (iVar4 == 0) {
          FUN_100098b9c(param_1);
          return;
        }
      }
    }
    else {
      *plVar1 = 0;
      *(undefined4 *)(param_1 + 0x34098) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100097898(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000978a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_1000978a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100099000(param_1,param_4);
  return;
}




void FUN_1000978ac(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_100316180(0x1a);
  if (uVar1 < 3) {
    uVar2 = FUN_1004e0150((&PTR_s_HUD_STORE_AUTO_BUY_LABEL_101450e28)[(int)uVar1],0);
    FUN_1001c5124(param_1 + 0x33610,uVar2);
  }
  FUN_1001c51c8(param_1 + 0x33610,1);
  return;
}




void thunk_FUN_1000992c8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  FUN_1001c51c8(param_1 + 0x33610,1);
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xda87fc4a) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xda87fc4a];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xda87fc4b)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




long * thunk_FUN_100097144(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  code *pcStack_90;
  long *plStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar13 = (undefined8 *)FUN_100269da8();
  *puVar13 = &PTR_thunk_FUN_10009791c_1014508a8;
  puVar13 = puVar13 + 0x19;
  FUN_100269de4(puVar13);
  thunk_FUN_10064f848();
  thunk_FUN_1000dee58(param_1 + 0x4d);
  FUN_10064e264(param_1 + 0xbe);
  thunk_FUN_10064f848();
  thunk_FUN_10064f848();
  thunk_FUN_10064f848();
  thunk_FUN_10064f848();
  plVar1 = param_1 + 0x141;
  thunk_FUN_100650e64();
  thunk_FUN_10009acd4(param_1 + 0x167);
  plVar2 = param_1 + 0x504;
  thunk_FUN_1006543ec(plVar2);
  thunk_FUN_10009f1d4(param_1 + 0x538);
  thunk_FUN_10009b7ac(param_1 + 0x5854);
  thunk_FUN_100099848(param_1 + 0x5e4a);
  thunk_FUN_10009e86c();
  plVar3 = param_1 + 0x66c2;
  thunk_FUN_1001c4dc4(plVar3,1);
  plVar4 = param_1 + 0x6754;
  thunk_FUN_100183990(plVar4,1);
  param_1[0x6812] = 0;
  *(undefined4 *)(param_1 + 0x6813) = DAT_101dc0b88;
  param_1[0x6814] = 0;
  uVar8 = FUN_1004d2524("HUD_Store");
  uVar9 = FUN_100015208("HUD_Store",uVar8,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar9 & 0xffff) << 0xf;
  FUN_1003467f8();
  iVar10 = FUN_10034ce90();
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1003467f8();
    iVar10 = FUN_10034cea0();
  }
  (**(code **)(*param_1 + 0x78))(param_1,puVar13,1);
  FUN_100642bd8(puVar13,param_1 + 0x32,1);
  FUN_100642bd8(puVar13,param_1 + 0x4d,1);
  FUN_100642bd8(puVar13,param_1 + 0x10b,1);
  FUN_100642bd8(puVar13,param_1 + 0x126,1);
  FUN_100642bd8(puVar13,param_1 + 0xd5,1);
  FUN_100642bd8(puVar13,param_1 + 0xf0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x538,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x167,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6393,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5e4a,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5854,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  if (iVar10 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  }
  FUN_10064f8a8(param_1 + 0x32,1);
  uVar6 = DAT_101dbd458;
  uStack_68 = DAT_101dbd458;
  pcStack_90 = thunk_FUN_100099278;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xd6,&pcStack_90);
  uVar7 = DAT_101dbd484;
  uStack_68 = DAT_101dbd484;
  pcStack_90 = thunk_FUN_100099278;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xd6,&pcStack_90);
  FUN_10064f8a8(param_1 + 0xd5,1);
  uStack_68 = uVar6;
  pcStack_90 = thunk_FUN_100099278;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xf1,&pcStack_90);
  uStack_68 = uVar7;
  pcStack_90 = thunk_FUN_100099278;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xf1,&pcStack_90);
  FUN_10064f8a8(param_1 + 0xf0,1);
  FUN_100652cdc(param_1 + 0x67ee,"circle_button_x");
  FUN_100183c50(0x3f400000,plVar4,&DAT_10115a164);
  uStack_68 = uVar6;
  pcStack_90 = thunk_FUN_100099278;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x6755,&pcStack_90);
  uStack_68 = uVar7;
  pcStack_90 = thunk_FUN_100099278;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x6755,&pcStack_90);
  uVar8 = FUN_1004d2524("HUD_Store_Close_Button");
  uVar11 = FUN_100015208("HUD_Store_Close_Button",uVar8,0x1234);
  uVar9 = *(uint *)((long)param_1 + 0x33b24);
  *(uint *)((long)param_1 + 0x33b24) =
       uVar9 & 0x80000000 | uVar9 & 0x7fff | (uVar11 & 0xffff) << 0xf;
  uVar8 = DAT_101d91884;
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_100097884;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x168,&pcStack_90);
  uStack_68 = uVar8;
  pcStack_90 = FUN_10009788c;
  plVar2 = param_1 + 0x539;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uVar5 = DAT_101d918d0;
  uStack_68 = DAT_101d918d0;
  pcStack_90 = thunk_FUN_1000989ec;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uStack_68 = FUN_100644a94("EVENT_SHOP_RIGHT_CLICK_BUY_ITEM");
  pcStack_90 = thunk_FUN_1000989ec;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uStack_68 = uVar8;
  pcStack_90 = thunk_FUN_1000989ec;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x5e4b,&pcStack_90);
  uStack_68 = DAT_101d23668;
  pcStack_90 = FUN_100097898;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x5e4b,&pcStack_90);
  iVar12 = FUN_1001312b8();
  if (iVar12 != 0) {
    uStack_68 = uVar5;
    pcStack_90 = thunk_FUN_1000989ec;
    pcStack_78 = (code *)0x0;
    uStack_70 = 0;
    plStack_80 = (long *)0x0;
    plStack_88 = param_1;
    FUN_10001554c(param_1 + 0x5855,&pcStack_90);
  }
  FUN_10064f8a8(param_1 + 0x10b,1);
  FUN_10064f8a8(param_1 + 0x126,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290);
  uVar14 = FUN_1004e0150("HUD_STORE_TITLE",0);
  FUN_1006513c0(plVar1,uVar14);
  *(uint *)((long)param_1 + 0xa8c) = *(uint *)((long)param_1 + 0xa8c) | 0x10;
  uStack_68 = uVar6;
  pcStack_90 = thunk_FUN_100099278;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x142,&pcStack_90);
  uStack_68 = uVar7;
  pcStack_90 = thunk_FUN_100099278;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x142,&pcStack_90);
  uStack_68 = uVar8;
  pcStack_90 = FUN_1000978a4;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x5855,&pcStack_90);
  if (iVar10 != 0) {
    uVar14 = FUN_100316150();
    pcStack_90 = (code *)0x0;
    pcStack_78 = FUN_1000997ac;
    plStack_88 = param_1;
    plStack_80 = param_1;
    FUN_10003c508(uVar14,&pcStack_90);
    FUN_1000978ac(param_1);
    FUN_1001c5184(0x3feccccd,plVar3);
    FUN_10001549c(&pcStack_90,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
    FUN_1001c514c(plVar3,&pcStack_90);
    if ((long)plStack_80 < 0) {
      operator_delete(pcStack_90);
    }
    uStack_68 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
    pcStack_90 = thunk_FUN_1000992c8;
    pcStack_78 = (code *)0x0;
    uStack_70 = 0;
    plStack_80 = (long *)0x0;
    plStack_88 = param_1;
    FUN_10001554c(param_1 + 0x66c3,&pcStack_90);
    FUN_1001c51c8(plVar3,1);
  }
  FUN_10009f1cc(param_1 + 0x6393);
  return param_1;
}




void FUN_10009791c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_thunk_FUN_10009791c_1014508a8;
  iVar2 = FUN_10031613c();
  if (iVar2 != 0) {
    puVar3 = (uint *)FUN_100316150();
    if (*puVar3 != 0) {
      lVar4 = *(long *)(puVar3 + 2);
      lVar5 = (ulong)*puVar3 << 5;
      do {
        puVar1 = (undefined8 *)(lVar4 + 8);
        lVar4 = lVar4 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_10003c608();
          break;
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
  }
  if (param_1[0x6814] != 0) {
    FUN_1010a1830();
  }
  param_1[0x6754] = &PTR_FUN_10145f300;
  param_1[0x67ee] = &PTR_FUN_1014a7108;
  param_1[0x6805] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6808);
  FUN_10064e2bc(param_1 + 0x67ee);
  param_1[0x67d0] = &PTR_FUN_1014a7108;
  param_1[0x67e7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67ea);
  FUN_10064e2bc(param_1 + 0x67d0);
  param_1[0x67b2] = &PTR_FUN_1014a7108;
  param_1[0x67c9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67cc);
  FUN_10064e2bc(param_1 + 0x67b2);
  FUN_10064221c(param_1 + 0x67a1);
  FUN_10003bec8(param_1 + 0x6754);
  param_1[0x66c2] = &PTR_FUN_101450a10;
  thunk_FUN_100651068(param_1 + 0x672d);
  param_1[0x670f] = &PTR_FUN_1014a7108;
  param_1[0x6726] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6729);
  FUN_10064e2bc(param_1 + 0x670f);
  FUN_10003bec8(param_1 + 0x66c2);
  FUN_1000993f0(param_1 + 0x6393);
  thunk_FUN_100099db0(param_1 + 0x5e4a);
  FUN_1000994f0(param_1 + 0x5854);
  thunk_FUN_10009f880(param_1 + 0x538);
  FUN_10064e2bc(param_1 + 0x504);
  FUN_1000996a8(param_1 + 0x167);
  thunk_FUN_100651068(param_1 + 0x141);
  FUN_10064e2bc(param_1 + 0x126);
  FUN_10064e2bc(param_1 + 0x10b);
  FUN_10064e2bc(param_1 + 0xf0);
  FUN_10064e2bc(param_1 + 0xd5);
  thunk_FUN_10064e2bc(param_1 + 0xbe);
  param_1[0x4d] = &PTR_FUN_101457060;
  param_1[0xa0] = &PTR_FUN_1014a7108;
  param_1[0xb7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xba);
  FUN_10064e2bc(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_1014a7108;
  param_1[0x99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[100] = &PTR_FUN_1014a7108;
  param_1[0x7b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 100);
  FUN_10064e2bc(param_1 + 0x4d);
  FUN_10064e2bc(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100097bc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101450a10;
  thunk_FUN_100651068(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void thunk_FUN_1000993f0(void)

{
  FUN_1000993f0();
  return;
}




void thunk_FUN_1000996a8(void)

{
  FUN_1000996a8();
  return;
}




void thunk_FUN_10009791c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_thunk_FUN_10009791c_1014508a8;
  iVar2 = FUN_10031613c();
  if (iVar2 != 0) {
    puVar3 = (uint *)FUN_100316150();
    if (*puVar3 != 0) {
      lVar4 = *(long *)(puVar3 + 2);
      lVar5 = (ulong)*puVar3 << 5;
      do {
        puVar1 = (undefined8 *)(lVar4 + 8);
        lVar4 = lVar4 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_10003c608();
          break;
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
  }
  if (param_1[0x6814] != 0) {
    FUN_1010a1830();
  }
  param_1[0x6754] = &PTR_FUN_10145f300;
  param_1[0x67ee] = &PTR_FUN_1014a7108;
  param_1[0x6805] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6808);
  FUN_10064e2bc(param_1 + 0x67ee);
  param_1[0x67d0] = &PTR_FUN_1014a7108;
  param_1[0x67e7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67ea);
  FUN_10064e2bc(param_1 + 0x67d0);
  param_1[0x67b2] = &PTR_FUN_1014a7108;
  param_1[0x67c9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67cc);
  FUN_10064e2bc(param_1 + 0x67b2);
  FUN_10064221c(param_1 + 0x67a1);
  FUN_10003bec8(param_1 + 0x6754);
  param_1[0x66c2] = &PTR_FUN_101450a10;
  thunk_FUN_100651068(param_1 + 0x672d);
  param_1[0x670f] = &PTR_FUN_1014a7108;
  param_1[0x6726] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6729);
  FUN_10064e2bc(param_1 + 0x670f);
  FUN_10003bec8(param_1 + 0x66c2);
  FUN_1000993f0(param_1 + 0x6393);
  thunk_FUN_100099db0(param_1 + 0x5e4a);
  FUN_1000994f0(param_1 + 0x5854);
  thunk_FUN_10009f880(param_1 + 0x538);
  FUN_10064e2bc(param_1 + 0x504);
  FUN_1000996a8(param_1 + 0x167);
  thunk_FUN_100651068(param_1 + 0x141);
  FUN_10064e2bc(param_1 + 0x126);
  FUN_10064e2bc(param_1 + 0x10b);
  FUN_10064e2bc(param_1 + 0xf0);
  FUN_10064e2bc(param_1 + 0xd5);
  thunk_FUN_10064e2bc(param_1 + 0xbe);
  param_1[0x4d] = &PTR_FUN_101457060;
  param_1[0xa0] = &PTR_FUN_1014a7108;
  param_1[0xb7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xba);
  FUN_10064e2bc(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_1014a7108;
  param_1[0x99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[100] = &PTR_FUN_1014a7108;
  param_1[0x7b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 100);
  FUN_10064e2bc(param_1 + 0x4d);
  FUN_10064e2bc(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100097c34(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10009791c();
  operator_delete(pvVar1);
  return;
}




void FUN_100097c48(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long local_38;
  
  *(long *)(param_1 + 0x34090) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x34098) = *(undefined4 *)(param_2 + 0x30);
  FUN_10009bc10(param_1 + 0x2c2a0);
  uVar2 = FUN_1010a1540(DAT_10184e120,0);
  *(undefined8 *)(param_1 + 0x340a0) = uVar2;
  FUN_10046e924(uVar2,(long *)(param_1 + 0x34090));
  FUN_1003467f8();
  iVar1 = FUN_10034cde0();
  if (iVar1 != 0) {
    local_38 = 0;
    FUN_1010a1958(&local_38,1,DAT_10184db08,0);
    if (local_38 != 0) {
      FUN_1000515bc(local_38,*(undefined8 *)(param_1 + 0x340a0));
    }
  }
  FUN_10009a030(param_1 + 0x2f250,param_2,*(undefined8 *)(param_1 + 0x340a0));
  FUN_10009fc48(param_1 + 0x29c0,*(undefined8 *)(param_1 + 0x340a0),param_2);
  return;
}




void FUN_100097d24(long *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar7 = (int)param_2;
  if (iVar7 != 0) {
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  puVar1 = (uint *)((long)param_1 + 0x33694);
  uVar3 = FUN_1003166d0();
  FUN_100316fb4(uVar3,0xd9abc88a,param_2);
  uVar8 = 0x3e19999a;
  FUN_100269e20(0x3e19999a,param_1 + 0x19,param_2,1,1);
  FUN_10009fcfc(0x3e800000,param_1 + 0x538,param_2,1,1);
  if (iVar7 == 0) {
    uVar2 = 0;
    uVar8 = 0x3eb33333;
  }
  else {
    FUN_1003467f8();
    uVar2 = FUN_10034cf98();
    uVar2 = uVar2 ^ 1;
  }
  FUN_10009b750(uVar8,param_1 + 0x167,uVar2,0,1);
  FUN_10009c278(0x3e99999a,param_1 + 0x5854,param_2,1,1);
  plVar4 = param_1 + 0x5e4a;
  FUN_10009a0f4(plVar4);
  FUN_10009a0a4(0x3dcccccd,plVar4,param_2,1,1);
  if (iVar7 == 0) {
    FUN_10009ebec(0x3e99999a,param_1 + 0x6393,0,1,1);
    *puVar1 = *puVar1 & 0xffffffef;
    *(uint *)((long)param_1 + 0x72c) = *(uint *)((long)param_1 + 0x72c) & 0xffffffef;
    *(uint *)((long)param_1 + 0x804) = *(uint *)((long)param_1 + 0x804) & 0xffffffef;
  }
  else {
    FUN_1000a03e0(param_1 + 0x538);
    FUN_10009c2ec(param_1 + 0x5854);
    FUN_10009ab88(plVar4,0xffffffff);
    FUN_100098014(param_1);
    FUN_10009ebec(0x3e99999a,param_1 + 0x6393,1,1,1);
    *puVar1 = *puVar1 | 0x10;
    plVar4 = (long *)param_1[0x6812];
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if ((int)param_1[0x6813] == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        uVar3 = 0;
        param_1[0x6812] = 0;
        *(undefined4 *)(param_1 + 0x6813) = DAT_101dc0b88;
      }
    }
    if ((int)param_1[0x19b] == 0) {
      lVar5 = FUN_1003de46c(uVar3);
      if (*(int *)(lVar5 + 0x28) == 0xfe) {
        FUN_10009b6d4(param_1 + 0x167,1);
      }
    }
    *(uint *)((long)param_1 + 0x72c) = *(uint *)((long)param_1 + 0x72c) & 0xffffffef;
    uVar3 = FUN_10001f55c();
    FUN_10063f0e8(0x3d4ccccd);
    uVar6 = FUN_10006bf14();
    FUN_10063f0d8(uVar6,1);
    FUN_100642b7c(param_1 + 0xd5,uVar3);
    *(uint *)((long)param_1 + 0x804) = *(uint *)((long)param_1 + 0x804) & 0xffffffef;
    uVar3 = FUN_10001f55c();
    FUN_10063f0e8(0x3d4ccccd);
    uVar6 = FUN_10006bf14();
    FUN_10063f0d8(uVar6,1);
    FUN_100642b7c(param_1 + 0xf0,uVar3);
  }
  return;
}




void FUN_100098014(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  plVar5 = *(long **)(param_1 + 0x34090);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x34098) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        lVar7 = FUN_1000a1718(param_1 + 0x29c0);
        iVar2 = FUN_10009cac4(param_1 + 0x2c2a0);
        lVar11 = *(long *)(lVar6 + 0x18);
        while ((lVar11 != 0 && (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_10184e000))) {
          lVar11 = *(long *)(lVar11 + 0x20);
        }
        if (lVar7 == 0) {
          bVar1 = 0;
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_1003e1b24(lVar11);
          iVar4 = FUN_100465738(lVar11);
          if (iVar3 == iVar4) {
            uVar8 = FUN_10009d9bc(lVar7);
            local_a0 = 0;
            uStack_60 = 0;
            uStack_64 = 0;
            uStack_6c = 0;
            local_68 = 0;
            uStack_74 = 0;
            uStack_7c = 0;
            local_84 = 0;
            uStack_8c = 0;
            local_94 = 0;
            local_98 = 0xffffffff;
            FUN_1003e1f98(*(undefined8 *)(param_1 + 0x340a0),uVar8,0,(long)&local_a0 + 4,&local_98,
                          &local_a0,1);
            bVar1 = FUN_1003db280(lVar11,uVar8);
            bVar1 = (int)local_a0 == 0 & (bVar1 ^ 0xff);
          }
          else {
            bVar1 = 0;
          }
          lVar9 = FUN_10009d9b4(lVar7);
          iVar3 = FUN_10046e37c(lVar11,*(undefined4 *)(lVar9 + 0x1a0));
        }
        uVar10 = FUN_10049057c(lVar6);
        if ((uVar10 & 1) == 0) {
          uVar8 = 3;
        }
        else if ((lVar7 == 0) || (bVar1 != 1)) {
          if (iVar3 == 0) {
            if (lVar7 == 0) {
              if (iVar2 == -1) {
                uVar8 = 2;
              }
              else {
                uVar8 = 1;
              }
            }
            else {
              uVar8 = 0;
            }
          }
          else {
            uVar8 = 5;
          }
        }
        else {
          uVar8 = 4;
        }
        FUN_10009a08c(param_1 + 0x2f250,uVar8);
      }
    }
    else {
      *(long *)(param_1 + 0x34090) = 0;
      *(undefined4 *)(param_1 + 0x34098) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100098250(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100098258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_10009825c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  int local_98;
  int local_94;
  
  uVar7 = FUN_100641574("root-layer");
  FUN_10016ae00(&local_94,&local_98,auStack_9c,auStack_a0);
  FUN_10064142c(&local_a4,&local_a8);
  FUN_100641464(&uStack_ac,&local_b0);
  FUN_10064e47c(uStack_ac,local_b0,param_1);
  fVar5 = local_b0;
  fVar13 = *(float *)(param_1 + 8);
  fVar14 = *(float *)((long)param_1 + 0x44);
  bVar6 = false;
  if ((fVar13 == (float)DAT_101dc1cb8) && (bVar6 = false, !NAN(fVar14) && !NAN(DAT_101dc1cb8._4_4_))
     ) {
    bVar6 = fVar14 == DAT_101dc1cb8._4_4_;
  }
  fVar12 = fVar13;
  fVar10 = fVar14;
  if (!bVar6) {
    param_1[8] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1);
    fVar12 = *(float *)(param_1 + 8);
    fVar10 = *(float *)((long)param_1 + 0x44);
  }
  bVar6 = false;
  if ((*(float *)(param_1 + 0x21) == (float)DAT_101dc1cb8) &&
     (bVar6 = false, !NAN(*(float *)((long)param_1 + 0x10c)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar6 = *(float *)((long)param_1 + 0x10c) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar6) {
    param_1[0x21] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1 + 0x19);
  }
  fVar11 = fVar5 + -320.0;
  FUN_10064e47c(local_a4,local_a8,param_1 + 0x32);
  fVar9 = (float)-local_98;
  bVar6 = false;
  if ((*(float *)(param_1 + 0x3a) == (float)-local_94) &&
     (bVar6 = false, !NAN(*(float *)((long)param_1 + 0x1d4)) && !NAN(fVar9))) {
    bVar6 = *(float *)((long)param_1 + 0x1d4) == fVar9;
  }
  if (!bVar6) {
    *(float *)(param_1 + 0x3a) = (float)-local_94;
    *(float *)((long)param_1 + 0x1d4) = fVar9;
    FUN_1000200a0(param_1 + 0x32);
  }
  plVar1 = param_1 + 0x4d;
  FUN_10064e47c(local_a4,fVar11,plVar1);
  FUN_10064e72c(0,plVar1,3,uVar7,3);
  FUN_10064e72c(0x430c0000,plVar1,0,param_1,0);
  fVar9 = (float)local_98 + 140.0;
  bVar6 = false;
  if ((*(float *)(param_1 + 0x55) == (float)-local_94) &&
     (bVar6 = false, !NAN(*(float *)((long)param_1 + 0x2ac)) && !NAN(fVar9))) {
    bVar6 = *(float *)((long)param_1 + 0x2ac) == fVar9;
  }
  if (!bVar6) {
    *(float *)(param_1 + 0x55) = (float)-local_94;
    *(float *)((long)param_1 + 0x2ac) = fVar9;
    FUN_1000200a0(plVar1);
  }
  plVar2 = param_1 + 0xd5;
  FUN_10064e47c(local_a4,0x430c0000,plVar2);
  plVar3 = param_1 + 0xf0;
  FUN_10064e47c(local_a4,0x43340000,plVar3);
  FUN_10064e72c(0x80000000,plVar2,2,plVar1,0);
  FUN_10064e72c(0,plVar2,3,plVar1,3);
  FUN_10064e72c(0,plVar3,0,plVar1,2);
  FUN_10064e72c(0,plVar3,3,plVar1,3);
  FUN_10064e47c(local_a4,0x42000000,param_1 + 0x10b);
  FUN_10064e47c(local_a4,0x42000000,param_1 + 0x126);
  FUN_10064e5ec(0,0,param_1 + 0x10b,3,plVar2,3);
  FUN_10064e5ec(0,0,param_1 + 0x126,0,plVar3,0);
  FUN_10064e47c(uStack_ac,local_b0,param_1 + 0xbe);
  plVar2 = param_1 + 0x6754;
  if ((*(float *)(param_1 + 0x675d) != 1.5) || (*(float *)((long)param_1 + 0x33aec) != 1.5)) {
    lVar8 = NEON_fmov(0x3fc00000,4);
    param_1[0x675d] = lVar8;
    FUN_1000200a0(plVar2);
  }
  FUN_10064e72c(0x42100000,plVar2,2,plVar1,0);
  FUN_10064e72c(0xc1800000,plVar2,1,param_1,1);
  fVar9 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e72c(0x42400000,param_1 + 0x141,3,param_1,3);
  FUN_10064e72c(0xc2480000,param_1 + 0x141,0,plVar1,0);
  plVar2 = param_1 + 0x167;
  FUN_10009b4a4(plVar2);
  FUN_10064e47c(0x43480000,fVar5 * 0.86956525 + -460.86957,plVar2);
  if ((*(float *)(param_1 + 0x170) != 1.15) || (*(float *)((long)param_1 + 0xb84) != 1.15)) {
    param_1[0x170] = 0x3f9333333f933333;
    FUN_1000200a0(plVar2);
  }
  FUN_10064e72c(0x42400000,plVar2,3,param_1,3);
  FUN_10064e72c(0x42300000,plVar2,5,plVar1,5);
  plVar3 = param_1 + 0x66c2;
  FUN_10064e72c(0x41800000,plVar3,0,plVar1,2);
  uVar7 = FUN_1001c5090(plVar3);
  FUN_10064e9b4(uVar7,0,0x41600000,plVar3,plVar2,0);
  plVar3 = param_1 + 0x504;
  uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e3cc(plVar1);
  FUN_10064e47c(uVar7,plVar3);
  FUN_100654488(plVar3,1);
  FUN_10064e72c(0,plVar3,0,plVar1,0);
  plVar3 = param_1 + 0x538;
  FUN_10064e47c((fVar9 + -2827.0) * 0.45 + 1851.0,fVar11,plVar3);
  FUN_10009fe58(plVar3);
  FUN_10064e72c(0x42400000,plVar3,3,plVar2,1);
  FUN_10064e72c(0,plVar3,0,plVar1,0);
  plVar2 = param_1 + 0x5e4a;
  FUN_10009a4c0(plVar2);
  FUN_10064e72c(0,plVar2,2,plVar1,2);
  FUN_10064e72c(0xc2400000,plVar2,1,param_1,1);
  plVar4 = param_1 + 0x6393;
  FUN_10009ebf4(plVar4);
  FUN_10064eb7c(plVar2,1,plVar1,1);
  FUN_10064e47c((fVar9 + -2827.0) * 0.55 + 554.0,ABS(fVar11),plVar4);
  FUN_10064e72c(0x42400000,plVar4,3,plVar3,1);
  FUN_10064e72c(0,plVar4,0,plVar1,0);
  FUN_10009b97c(param_1 + 0x5854);
  FUN_10064e5ec(0,0x42200000,param_1 + 0x5854,8,plVar1,6);
  if ((*(float *)(param_1 + 8) != fVar13) || (*(float *)((long)param_1 + 0x44) != fVar14)) {
    *(float *)(param_1 + 8) = fVar13;
    *(float *)((long)param_1 + 0x44) = fVar14;
    FUN_1000200a0(param_1);
  }
  if ((*(float *)(param_1 + 0x21) != fVar12) || (*(float *)((long)param_1 + 0x10c) != fVar10)) {
    *(float *)(param_1 + 0x21) = fVar12;
    *(float *)((long)param_1 + 0x10c) = fVar10;
    FUN_1000200a0(param_1 + 0x19);
  }
  return;
}




void FUN_10009890c(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101d918ec);
  if (((uVar1 & 1) != 0) || (DAT_101d918ec == DAT_101dbd450)) {
    FUN_10009fc54(param_1 + 0x29c0,(int)param_2[5]);
    lVar2 = FUN_1000a1718(param_1 + 0x29c0);
    if (lVar2 == 0) {
      FUN_10009f1cc(param_1 + 0x31c98);
      return;
    }
  }
  return;
}




void FUN_1000989a8(long param_1)

{
  int iVar1;
  
  FUN_100098014();
  iVar1 = FUN_1000a13b0(param_1 + 0x29c0);
  if (iVar1 != 0) {
    FUN_1000a03e0(param_1 + 0x29c0);
    return;
  }
  return;
}




void FUN_1000989ec(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [40];
  
  plVar1 = (long *)(param_1 + 0x34090);
  plVar6 = (long *)*plVar1;
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_1 + 0x34098) == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      if (lVar7 != 0) {
        FUN_100098014(param_1);
        lVar2 = param_1 + 0x2f250;
        iVar4 = FUN_10009ab1c(lVar2);
        if (iVar4 - 3U < 2) {
          FUN_10009ac18(lVar2);
          return;
        }
        if (iVar4 == 1) {
          lVar3 = param_1 + 0x2c2a0;
          uVar8 = FUN_10009ce28(lVar3);
          if ((uVar8 & 1) == 0) {
            uVar9 = FUN_1004901b4(plVar1);
            uVar10 = FUN_10009cac4(lVar3);
            if (((int)uVar10 != -1) && (iVar4 = FUN_10046e2dc(uVar9,uVar10), -1 < iVar4)) {
              uVar5 = FUN_10046e2b4(uVar9,uVar10);
              FUN_1003de208(auStack_78,*(undefined4 *)(lVar7 + 0x260),uVar10);
              FUN_100345498(auStack_78);
              FUN_10009f1cc(param_1 + 0x31c98);
              if (uVar5 < 2) {
                FUN_10009c2ec(lVar3);
                FUN_10009ab88(lVar2,0xffffffff);
                FUN_100098014(param_1);
              }
            }
          }
        }
        else if (iVar4 == 0) {
          FUN_100098b9c(param_1);
          return;
        }
      }
    }
    else {
      *plVar1 = 0;
      *(undefined4 *)(param_1 + 0x34098) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100098b9c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  plVar3 = *(long **)(param_1 + 0x34090);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x34098) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        lVar5 = FUN_1000a1718(param_1 + 0x29c0);
        if (lVar5 != 0) {
          fVar12 = *(float *)(*(long *)(lVar4 + 0x40) + 800);
          uVar6 = FUN_100490234(lVar4);
          local_b0 = 0;
          uStack_70 = 0;
          uStack_74 = 0;
          uStack_7c = 0;
          local_78 = 0;
          uStack_84 = 0;
          uStack_8c = 0;
          local_94 = 0;
          uStack_9c = 0;
          local_a4 = 0;
          local_a8 = 0xffffffff;
          FUN_1003467f8();
          iVar2 = FUN_10034cec8();
          if ((iVar2 == 0) || (iVar2 = FUN_10009d950(lVar5), iVar2 != 0)) {
            uVar11 = *(undefined8 *)(param_1 + 0x340a0);
            uVar7 = FUN_10009d9bc(lVar5);
            iVar2 = FUN_1003e1f98(uVar11,uVar7,(int)fVar12,(long)&local_b0 + 4,&local_a8,&local_b0,1
                                 );
            if (iVar2 != 0) {
              uVar7 = FUN_10009d9bc(lVar5);
              uVar8 = FUN_1003db280(uVar6,uVar7);
              if (((uVar8 & 1) != 0) || ((int)local_b0 != 0)) {
                uVar1 = *(undefined4 *)(lVar4 + 0x260);
                uVar6 = FUN_10009d9bc(lVar5);
                FUN_1003d5a90(auStack_d8,uVar1,uVar6);
                FUN_100345498(auStack_d8);
                uVar6 = FUN_10009d9bc(lVar5);
                FUN_1000a1498(param_1 + 0x29c0,uVar6);
                uVar6 = FUN_10009d9bc(lVar5);
                FUN_10009cb24(param_1 + 0x2c2a0,uVar6);
                lVar4 = FUN_1000bdb98();
                FUN_10009d9bc(lVar5);
                plVar10 = (long *)(lVar4 + 0x10);
                plVar9 = (long *)*plVar10;
                plVar3 = plVar10;
                if (plVar9 != (long *)0x0) {
                  do {
                    if (*(uint *)(plVar9 + 4) >= 0x6658bb67) {
                      plVar3 = plVar9;
                    }
                    plVar9 = (long *)plVar9[*(uint *)(plVar9 + 4) < 0x6658bb67];
                  } while (plVar9 != (long *)0x0);
                  if (((plVar3 != plVar10) && (*(uint *)(plVar3 + 4) < 0x6658bb68)) &&
                     ((int)plVar3[5] != 0)) {
                    lVar4 = 0;
                    uVar8 = 0;
                    do {
                      (*(code *)((undefined8 *)(plVar3[6] + lVar4))[1])
                                (*(undefined8 *)(plVar3[6] + lVar4));
                      uVar8 = uVar8 + 1;
                      lVar4 = lVar4 + 0x10;
                    } while (uVar8 < *(uint *)(plVar3 + 5));
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      *(long *)(param_1 + 0x34090) = 0;
      *(undefined4 *)(param_1 + 0x34098) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100098e00(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101d918ec);
  if (((uVar1 & 1) != 0) || (DAT_101d918ec == DAT_101dbd450)) {
    lVar7 = param_2[4];
    if (lVar7 == 0) {
      FUN_10009f1cc(param_1 + 0x31c98);
      lVar7 = FUN_1000bdb98();
      plVar4 = (long *)(lVar7 + 0x10);
      plVar5 = (long *)*plVar4;
      plVar6 = plVar4;
      if (plVar5 != (long *)0x0) {
        do {
          if (*(uint *)(plVar5 + 4) >= 0xfb4b760d) {
            plVar6 = plVar5;
          }
          plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < 0xfb4b760d];
        } while (plVar5 != (long *)0x0);
        if (((plVar6 != plVar4) && (*(uint *)(plVar6 + 4) < 0xfb4b760e)) && ((int)plVar6[5] != 0)) {
          lVar7 = 0;
          uVar1 = 0;
          do {
            (*(code *)((undefined8 *)(plVar6[6] + lVar7))[1])(*(undefined8 *)(plVar6[6] + lVar7));
            uVar1 = uVar1 + 1;
            lVar7 = lVar7 + 0x10;
          } while (uVar1 < *(uint *)(plVar6 + 5));
        }
      }
    }
    else {
      lVar2 = FUN_1000a1718(param_1 + 0x29c0);
      if (lVar2 != lVar7) {
        FUN_10009c2ec(param_1 + 0x2c2a0);
        lVar7 = param_2[4];
        uVar3 = FUN_10009d9b4(lVar7);
        FUN_10009eee4(param_1 + 0x31c98,uVar3);
        FUN_100098014(param_1);
        FUN_10009ab24(param_1 + 0x2f250,lVar7);
        if ((*(byte *)(param_2 + 5) & 1) == 0) {
          lVar2 = FUN_1000bdb98();
          FUN_10009d9bc(lVar7);
          plVar5 = (long *)(lVar2 + 0x10);
          plVar4 = (long *)*plVar5;
          plVar6 = plVar5;
          if (plVar4 != (long *)0x0) {
            do {
              if (*(uint *)(plVar4 + 4) >= 0xfb4b760d) {
                plVar6 = plVar4;
              }
              plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < 0xfb4b760d];
            } while (plVar4 != (long *)0x0);
            if (((plVar6 != plVar5) && (*(uint *)(plVar6 + 4) < 0xfb4b760e)) &&
               ((int)plVar6[5] != 0)) {
              lVar7 = 0;
              uVar1 = 0;
              do {
                (*(code *)((undefined8 *)(plVar6[6] + lVar7))[1])
                          (*(undefined8 *)(plVar6[6] + lVar7));
                uVar1 = uVar1 + 1;
                lVar7 = lVar7 + 0x10;
              } while (uVar1 < *(uint *)(plVar6 + 5));
            }
          }
        }
      }
    }
  }
  return;
}




void FUN_100099000(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 local_54;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101d918ec);
  if (((uVar2 & 1) == 0) && (DAT_101d918ec != DAT_101dbd450)) {
    return;
  }
  plVar9 = (long *)(param_1 + 0x34090);
  plVar3 = (long *)*plVar9;
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else if (*(int *)(param_1 + 0x34098) == (int)plVar3[1]) {
    uVar4 = (**(code **)(*plVar3 + 0x10))();
  }
  else {
    uVar4 = 0;
    *plVar9 = 0;
    *(undefined4 *)(param_1 + 0x34098) = DAT_101dc0b88;
  }
  lVar7 = param_1 + 0x29c0;
  FUN_1000a0390(lVar7);
  lVar5 = FUN_1004901b4(plVar9);
  if (lVar5 != 0) {
    uVar6 = FUN_10009cac4(param_1 + 0x2c2a0);
    if ((int)uVar6 == -1) {
      FUN_10009f1cc(param_1 + 0x31c98);
      FUN_1000a0390(lVar7);
      iVar1 = FUN_10049057c(uVar4);
      if (iVar1 == 0) goto LAB_1000991dc;
    }
    else {
      local_54 = 0xffff;
      iVar1 = FUN_1003e0adc(uVar4,&local_54);
      if (iVar1 != 0) {
        FUN_1003467f8();
        uVar2 = FUN_10034cf98();
        if ((uVar2 & 1) == 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x340a0);
          uVar4 = FUN_10046e258(lVar5,uVar6);
          uVar4 = FUN_10046efac(uVar10,uVar4);
          iVar1 = FUN_10046f084(uVar10,uVar4,local_54);
          if (-1 < iVar1) {
            FUN_10009b6d4(param_1 + 0xb38,iVar1 + 1);
            uVar4 = FUN_10046e258(lVar5,uVar6);
            FUN_1000a1404(lVar7,uVar4);
          }
        }
      }
      uVar4 = FUN_10044d88c(lVar5,uVar6);
      FUN_10009eee4(param_1 + 0x31c98,uVar4);
    }
    FUN_10009ab88(param_1 + 0x2f250,uVar6);
  }
LAB_1000991dc:
  lVar7 = FUN_1000bdb98();
  plVar3 = (long *)(lVar7 + 0x10);
  plVar8 = (long *)*plVar3;
  plVar9 = plVar3;
  if (plVar8 != (long *)0x0) {
    do {
      if (*(uint *)(plVar8 + 4) >= 0xfb4b760d) {
        plVar9 = plVar8;
      }
      plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < 0xfb4b760d];
    } while (plVar8 != (long *)0x0);
    if (((plVar9 != plVar3) && (*(uint *)(plVar9 + 4) < 0xfb4b760e)) && ((int)plVar9[5] != 0)) {
      lVar7 = 0;
      uVar2 = 0;
      do {
        (*(code *)((undefined8 *)(plVar9[6] + lVar7))[1])(*(undefined8 *)(plVar9[6] + lVar7));
        uVar2 = uVar2 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar2 < *(uint *)(plVar9 + 5));
    }
  }
  return;
}




void FUN_100099278(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_CLOSE_SHOP");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000992c8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  FUN_1001c51c8(param_1 + 0x33610,1);
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xda87fc4a) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xda87fc4a];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xda87fc4b)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_100099384(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101450a10;
  thunk_FUN_100651068(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  pvVar1 = (void *)FUN_10003bec8(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000993e8(void)

{
  return;
}




void FUN_1000993ec(void)

{
  return;
}




void FUN_1000993f0(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = 0;
  *param_1 = &PTR_thunk_FUN_1000993f0_101450b90;
  do {
    pvVar1 = *(void **)((long)param_1 + lVar2 + 0x1970);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *(undefined8 *)((long)param_1 + lVar2 + 0x1970) = 0;
      *(undefined8 *)((long)param_1 + lVar2 + 0x1968) = 0;
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != -0x50);
  lVar2 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar2 + 0x17f8);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x5f0);
  lVar2 = 0x1208;
  do {
    thunk_FUN_100651068((long)param_1 + lVar2);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != 0xc18);
  param_1[0x17e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x195);
  FUN_10064e2bc(param_1 + 0x17e);
  thunk_FUN_100651068(param_1 + 0x158);
  thunk_FUN_100651068(param_1 + 0x132);
  thunk_FUN_100530784(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x57);
  thunk_FUN_100651068(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000994dc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000993f0();
  operator_delete(pvVar1);
  return;
}




void FUN_1000994f0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1000994f0_101450fc0;
  param_1[0x5d6] = &PTR_FUN_1014a7108;
  param_1[0x5ed] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5f0);
  FUN_10064e2bc(param_1 + 0x5d6);
  param_1[0x5b8] = &PTR_FUN_1014a7108;
  param_1[0x5cf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5d2);
  FUN_10064e2bc(param_1 + 0x5b8);
  lVar1 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1 + 0x2c58);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0xbe0);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x20b8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x2170) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x2188);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x20b8);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x960);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x1758) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x1810) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x1828);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x1758);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x960);
  lVar1 = 0x960;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x498) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x550) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x568);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x498);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != 0);
  param_1[0x86] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x9d);
  FUN_10064e2bc(param_1 + 0x86);
  thunk_FUN_100651068(param_1 + 0x60);
  param_1[0x35] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x4c);
  FUN_10064e2bc(param_1 + 0x35);
  FUN_10064e2bc(param_1 + 0x1c);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000996a8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_1000996a8_101450cd8;
  do {
    thunk_FUN_10064e2bc((long)param_1 + lVar1 + 0x1c30);
    lVar1 = lVar1 + -0xb8;
  } while (lVar1 != -0x508);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x16f0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x17a8) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x17c0);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x16f0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x690);
  lVar1 = 0x1020;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 2000);
  param_1[0xf5] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x10c);
  FUN_10064e2bc(param_1 + 0xf5);
  thunk_FUN_100530784(param_1 + 0x4e);
  FUN_10064e2bc(param_1 + 0x35);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100099798(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000996a8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000997ac(undefined8 param_1,int *param_2)

{
  if (*param_2 == 0x22 || *param_2 == 0x1a) {
    FUN_1000978ac();
    return;
  }
  return;
}




void FUN_1000997c4(void)

{
  if ((DAT_10184e128 & 1) == 0) {
    DAT_10184e120 = DAT_101872e38;
    DAT_10184e128 = 1;
  }
  return;
}




void FUN_1000997f0(void)

{
  if ((DAT_10184db10 & 1) == 0) {
    DAT_10184db08 = DAT_101872e38;
    DAT_10184db10 = 1;
  }
  return;
}




void FUN_10009981c(void)

{
  if ((DAT_10184e008 & 1) == 0) {
    DAT_10184e000 = DAT_101872e38;
    DAT_10184e008 = 1;
  }
  return;
}




long * FUN_100099848(long *param_1)

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
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  float fVar15;
  long lVar16;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  *puVar13 = &PTR_thunk_FUN_100099db0_101450e50;
  puVar13[0x18] = 0;
  puVar13[0x19] = 0;
  puVar13[0x17] = 0;
  *(undefined4 *)(puVar13 + 0x1a) = DAT_101dc0b88;
  puVar13 = puVar13 + 0x1b;
  FUN_100269de4(puVar13);
  plVar1 = param_1 + 0x34;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x5f;
  thunk_FUN_100181304(plVar2,1);
  plVar3 = param_1 + 0x316;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0x32d;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0x353;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x371;
  thunk_FUN_1001b0004(plVar6);
  FUN_1000bf094(param_1 + 0x3e0);
  plVar7 = param_1 + 0x3e3;
  FUN_10064e264(plVar7);
  plVar8 = param_1 + 0x3fa;
  thunk_FUN_100183e58(plVar8,1);
  plVar9 = param_1 + 0x500;
  thunk_FUN_100652c08(plVar9);
  plVar10 = param_1 + 0x51e;
  thunk_FUN_100650e64(plVar10);
  *(undefined4 *)(param_1 + 0x544) = 0xffff;
  FUN_1004e313c(param_1 + 0x545);
  lVar16 = NEON_fmov(0xbf800000,4);
  param_1[0x547] = lVar16;
  *(undefined4 *)(param_1 + 0x548) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2a44) = 0xffffffff;
  uVar14 = FUN_1000bdb98();
  FUN_1004e18bc(uVar14,param_1,0x9c723b68,FUN_100099d40,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar13,1);
  FUN_100642bd8(puVar13,plVar1,1);
  FUN_100655930(plVar1,plVar6,1);
  FUN_100655930(plVar1,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100655930(plVar1,param_1[0x3e1],1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(puVar13,plVar9,1);
  FUN_100642bd8(puVar13,plVar10,1);
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_store_gold_icon_large");
  FUN_100652dd4(plVar9,&DAT_10114bd20,2);
  FUN_100651460(plVar10,&DAT_10114bd20);
  FUN_1001b0764(plVar6,1);
  fVar15 = (float)FUN_10064e3cc(plVar8);
  FUN_1001b495c(0,plVar8);
  FUN_100652cdc(param_1 + 0x494,"hud_minimap_pingicon_mia");
  if ((*(float *)(param_1 + 0x49d) != 1.5) || (*(float *)((long)param_1 + 0x24ec) != 1.5)) {
    lVar16 = NEON_fmov(0x3fc00000,4);
    param_1[0x49d] = lVar16;
    FUN_1000200a0(param_1 + 0x494);
  }
  FUN_100183c78(120.0 / fVar15,(120.0 / fVar15) * 1.25,plVar8);
  FUN_100183c50(0x3ee66666,plVar8,&DAT_10115a164);
  uVar11 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_100099d50;
  plVar1 = param_1 + 0x3fb;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar1,&local_a0);
  local_78 = DAT_101dbd458;
  local_a0 = FUN_100099d54;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar1,&local_a0);
  local_78 = DAT_101dbd484;
  local_a0 = FUN_100099d54;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar1,&local_a0);
  uVar14 = FUN_1004e0150("HUD_STORE_ITEMBUY",0);
  local_a0 = (code *)0xc120000000000000;
  FUN_1001816d4(0,0x43a78000,0x442f0000,plVar2,0,uVar14,&DAT_10115a168,&local_a0,0);
  FUN_100651038(param_1 + 0x142,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  local_78 = uVar11;
  local_a0 = FUN_100099d5c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x60,&local_a0);
  FUN_1001b495c(0x3dcccccd,plVar2);
  FUN_100181bd0(0x3f800000,plVar2,&DAT_10115a164);
  uVar11 = FUN_1004d2524("HUD_Store_Buy_Button");
  uVar12 = FUN_100015208("HUD_Store_Buy_Button",uVar11,0x1234);
  *(uint *)((long)param_1 + 0x37c) =
       *(uint *)((long)param_1 + 0x37c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x37c) & 0x7fff | (uVar12 & 0xffff) << 0xf;
  *(uint *)((long)param_1 + 0x1934) = *(uint *)((long)param_1 + 0x1934) & 0xfffffffb;
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xffc8c8c8);
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_stats_gold");
  FUN_100652dd4(plVar5,&local_a0,2);
  FUN_100651460(plVar4,&local_a0);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  return param_1;
}




void FUN_100099d40(long param_1)

{
  FUN_1001b4c90(param_1 + 0x1fd0,0);
  return;
}




void FUN_100099d50(void)

{
  return;
}




void FUN_100099d54(long param_1)

{
  FUN_1000cb7f4(*(undefined8 *)(param_1 + 0x1f08));
  return;
}




void FUN_100099d5c(undefined8 param_1)

{
  undefined1 auStack_50 [48];
  
  FUN_100530200(auStack_50,DAT_101d91884,0xffffffff,0);
  FUN_100644c34(param_1,auStack_50,1);
  return;
}




long * thunk_FUN_100099848(long *param_1)

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
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  float fVar15;
  long lVar16;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  *puVar13 = &PTR_thunk_FUN_100099db0_101450e50;
  puVar13[0x18] = 0;
  puVar13[0x19] = 0;
  puVar13[0x17] = 0;
  *(undefined4 *)(puVar13 + 0x1a) = DAT_101dc0b88;
  puVar13 = puVar13 + 0x1b;
  FUN_100269de4(puVar13);
  plVar1 = param_1 + 0x34;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x5f;
  thunk_FUN_100181304(plVar2,1);
  plVar3 = param_1 + 0x316;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0x32d;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0x353;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x371;
  thunk_FUN_1001b0004(plVar6);
  FUN_1000bf094(param_1 + 0x3e0);
  plVar7 = param_1 + 0x3e3;
  FUN_10064e264(plVar7);
  plVar8 = param_1 + 0x3fa;
  thunk_FUN_100183e58(plVar8,1);
  plVar9 = param_1 + 0x500;
  thunk_FUN_100652c08(plVar9);
  plVar10 = param_1 + 0x51e;
  thunk_FUN_100650e64(plVar10);
  *(undefined4 *)(param_1 + 0x544) = 0xffff;
  FUN_1004e313c(param_1 + 0x545);
  lVar16 = NEON_fmov(0xbf800000,4);
  param_1[0x547] = lVar16;
  *(undefined4 *)(param_1 + 0x548) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2a44) = 0xffffffff;
  uVar14 = FUN_1000bdb98();
  FUN_1004e18bc(uVar14,param_1,0x9c723b68,FUN_100099d40,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar13,1);
  FUN_100642bd8(puVar13,plVar1,1);
  FUN_100655930(plVar1,plVar6,1);
  FUN_100655930(plVar1,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100655930(plVar1,param_1[0x3e1],1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(puVar13,plVar9,1);
  FUN_100642bd8(puVar13,plVar10,1);
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_store_gold_icon_large");
  FUN_100652dd4(plVar9,&DAT_10114bd20,2);
  FUN_100651460(plVar10,&DAT_10114bd20);
  FUN_1001b0764(plVar6,1);
  fVar15 = (float)FUN_10064e3cc(plVar8);
  FUN_1001b495c(0,plVar8);
  FUN_100652cdc(param_1 + 0x494,"hud_minimap_pingicon_mia");
  if ((*(float *)(param_1 + 0x49d) != 1.5) || (*(float *)((long)param_1 + 0x24ec) != 1.5)) {
    lVar16 = NEON_fmov(0x3fc00000,4);
    param_1[0x49d] = lVar16;
    FUN_1000200a0(param_1 + 0x494);
  }
  FUN_100183c78(120.0 / fVar15,(120.0 / fVar15) * 1.25,plVar8);
  FUN_100183c50(0x3ee66666,plVar8,&DAT_10115a164);
  uVar11 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_100099d50;
  plVar1 = param_1 + 0x3fb;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar1,&pcStack_a0);
  uStack_78 = DAT_101dbd458;
  pcStack_a0 = FUN_100099d54;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar1,&pcStack_a0);
  uStack_78 = DAT_101dbd484;
  pcStack_a0 = FUN_100099d54;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar1,&pcStack_a0);
  uVar14 = FUN_1004e0150("HUD_STORE_ITEMBUY",0);
  pcStack_a0 = (code *)0xc120000000000000;
  FUN_1001816d4(0,0x43a78000,0x442f0000,plVar2,0,uVar14,&DAT_10115a168,&pcStack_a0,0);
  FUN_100651038(param_1 + 0x142,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  uStack_78 = uVar11;
  pcStack_a0 = FUN_100099d5c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x60,&pcStack_a0);
  FUN_1001b495c(0x3dcccccd,plVar2);
  FUN_100181bd0(0x3f800000,plVar2,&DAT_10115a164);
  uVar11 = FUN_1004d2524("HUD_Store_Buy_Button");
  uVar12 = FUN_100015208("HUD_Store_Buy_Button",uVar11,0x1234);
  *(uint *)((long)param_1 + 0x37c) =
       *(uint *)((long)param_1 + 0x37c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x37c) & 0x7fff | (uVar12 & 0xffff) << 0xf;
  *(uint *)((long)param_1 + 0x1934) = *(uint *)((long)param_1 + 0x1934) & 0xfffffffb;
  pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,0xffc8c8c8);
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_stats_gold");
  FUN_100652dd4(plVar5,&pcStack_a0,2);
  FUN_100651460(plVar4,&pcStack_a0);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  return param_1;
}




void FUN_100099db0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_100099db0_101450e50;
  uVar1 = FUN_1000bdb98();
  FUN_1004e1b58(uVar1,param_1);
  if ((void *)param_1[0x546] != (void *)0x0) {
    operator_delete__((void *)param_1[0x546]);
    param_1[0x546] = 0;
    param_1[0x545] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x51e);
  param_1[0x500] = &PTR_FUN_1014a7108;
  param_1[0x517] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51a);
  FUN_10064e2bc(param_1 + 0x500);
  param_1[0x3fa] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x4d8);
  param_1[0x4b8] = &PTR_FUN_1014a7108;
  param_1[0x4cf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4d2);
  FUN_10064e2bc(param_1 + 0x4b8);
  param_1[0x3fa] = &PTR_FUN_10145f300;
  param_1[0x494] = &PTR_FUN_1014a7108;
  param_1[0x4ab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4ae);
  FUN_10064e2bc(param_1 + 0x494);
  param_1[0x476] = &PTR_FUN_1014a7108;
  param_1[0x48d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x490);
  FUN_10064e2bc(param_1 + 0x476);
  param_1[0x458] = &PTR_FUN_1014a7108;
  param_1[0x46f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x472);
  FUN_10064e2bc(param_1 + 0x458);
  FUN_10064221c(param_1 + 0x447);
  FUN_10003bec8(param_1 + 0x3fa);
  thunk_FUN_10064e2bc(param_1 + 0x3e3);
  param_1[0x3e0] = &PTR____cxa_pure_virtual_101450f98;
  if ((long *)param_1[0x3e1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3e1] + 8))();
  }
  lVar2 = 0;
  param_1[0x3e1] = 0;
  param_1[0x371] = &PTR_FUN_101463a58;
  do {
    thunk_FUN_100651068((long)param_1 + lVar2 + 0x1dc8);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x260);
  FUN_10064230c(param_1 + 0x382);
  FUN_10064221c(param_1 + 0x371);
  param_1[0x353] = &PTR_FUN_1014a7108;
  param_1[0x36a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x36d);
  FUN_10064e2bc(param_1 + 0x353);
  thunk_FUN_100651068(param_1 + 0x32d);
  thunk_FUN_10064e2bc(param_1 + 0x316);
  FUN_10003bd40(param_1 + 0x5f);
  param_1[0x34] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x4b);
  FUN_10064e2bc(param_1 + 0x34);
  FUN_10064e2bc(param_1 + 0x1b);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100099db0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_100099db0_101450e50;
  uVar1 = FUN_1000bdb98();
  FUN_1004e1b58(uVar1,param_1);
  if ((void *)param_1[0x546] != (void *)0x0) {
    operator_delete__((void *)param_1[0x546]);
    param_1[0x546] = 0;
    param_1[0x545] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x51e);
  param_1[0x500] = &PTR_FUN_1014a7108;
  param_1[0x517] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51a);
  FUN_10064e2bc(param_1 + 0x500);
  param_1[0x3fa] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x4d8);
  param_1[0x4b8] = &PTR_FUN_1014a7108;
  param_1[0x4cf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4d2);
  FUN_10064e2bc(param_1 + 0x4b8);
  param_1[0x3fa] = &PTR_FUN_10145f300;
  param_1[0x494] = &PTR_FUN_1014a7108;
  param_1[0x4ab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4ae);
  FUN_10064e2bc(param_1 + 0x494);
  param_1[0x476] = &PTR_FUN_1014a7108;
  param_1[0x48d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x490);
  FUN_10064e2bc(param_1 + 0x476);
  param_1[0x458] = &PTR_FUN_1014a7108;
  param_1[0x46f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x472);
  FUN_10064e2bc(param_1 + 0x458);
  FUN_10064221c(param_1 + 0x447);
  FUN_10003bec8(param_1 + 0x3fa);
  thunk_FUN_10064e2bc(param_1 + 0x3e3);
  param_1[0x3e0] = &PTR____cxa_pure_virtual_101450f98;
  if ((long *)param_1[0x3e1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3e1] + 8))();
  }
  lVar2 = 0;
  param_1[0x3e1] = 0;
  param_1[0x371] = &PTR_FUN_101463a58;
  do {
    thunk_FUN_100651068((long)param_1 + lVar2 + 0x1dc8);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x260);
  FUN_10064230c(param_1 + 0x382);
  FUN_10064221c(param_1 + 0x371);
  param_1[0x353] = &PTR_FUN_1014a7108;
  param_1[0x36a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x36d);
  FUN_10064e2bc(param_1 + 0x353);
  thunk_FUN_100651068(param_1 + 0x32d);
  thunk_FUN_10064e2bc(param_1 + 0x316);
  FUN_10003bd40(param_1 + 0x5f);
  param_1[0x34] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x4b);
  FUN_10064e2bc(param_1 + 0x34);
  FUN_10064e2bc(param_1 + 0x1b);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10009a01c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100099db0();
  operator_delete(pvVar1);
  return;
}




void FUN_10009a030(long *param_1,long param_2,long param_3)

{
  param_1[0x19] = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x30);
  param_1[0x17] = param_3;
  if ((int)param_1[0x544] != 0) {
    *(undefined4 *)(param_1 + 0x544) = 0;
    FUN_10009a7ec(param_1);
  }
  FUN_1000bf0ec(param_1 + 0x3e0);
                    /* WARNING: Could not recover jumptable at 0x00010009a088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_10009a08c(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x2a20) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x2a20) = param_2;
  FUN_10009a7ec();
  return;
}




void FUN_10009a0a4(long param_1,ulong param_2)

{
  FUN_100269e20(param_1 + 0xd8);
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    FUN_1000bf238(param_1 + 0x1f00,0xffff);
  }
  FUN_1000cb84c(*(undefined8 *)(param_1 + 0x1f08),0);
  return;
}




void FUN_10009a0f4(long param_1)

{
  *(undefined4 *)(param_1 + 0x2a38) = 0xbf800000;
  return;
}




void FUN_10009a100(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  FUN_100641464(auStack_44,auStack_48);
  plVar6 = *(long **)(param_2 + 200);
  if (plVar6 == (long *)0x0) goto LAB_10009a25c;
  if (*(int *)(param_2 + 0xd0) != (int)plVar6[1]) {
    *(undefined8 *)(param_2 + 200) = 0;
    *(undefined4 *)(param_2 + 0xd0) = DAT_101dc0b88;
    goto LAB_10009a25c;
  }
  lVar7 = (**(code **)(*plVar6 + 0x10))();
  if (lVar7 == 0) goto LAB_10009a25c;
  fVar10 = *(float *)(*(long *)(lVar7 + 0x40) + 800);
  if (*(float *)(param_2 + 0x2a38) == -1.0) {
    *(float *)(param_2 + 0x2a38) = fVar10;
LAB_10009a17c:
    *(undefined4 *)(param_2 + 0x2a3c) = 0xbf800000;
  }
  else if (*(float *)(param_2 + 0x2a38) != fVar10) {
    fVar9 = *(float *)(param_2 + 0x2a3c);
    fVar2 = 0.0;
    if (fVar9 < 0.0) {
LAB_10009a2d4:
      fVar9 = fVar2;
      *(float *)(param_2 + 0x2a3c) = fVar9;
    }
    else if (fVar9 < 1.0) {
      fVar2 = fVar9 + param_1 * 3.3333333;
      goto LAB_10009a2d4;
    }
    NEON_fminnm(fVar9,0x3f800000);
    if (1.0 <= fVar9) {
      *(float *)(param_2 + 0x2a38) = fVar10;
      goto LAB_10009a17c;
    }
  }
  lVar7 = param_2 + 0x2a28;
  FUN_1004e38ac(lVar7,"%d");
  lVar1 = param_2 + 0x28f0;
  FUN_1006513c0(lVar1,lVar7);
  uVar3 = FUN_1004e3634(lVar7);
  FUN_10064e72c((float)uVar3 * -40.0 + -12.0,lVar1,3,param_2,1);
  FUN_10064e72c(0xc1400000,param_2 + 0x2800,1,lVar1,3);
  FUN_10064e72c(0,param_2 + 0x2800,5,lVar1,5);
  if ((*(int *)(param_2 + 0x2a20) == 0) && (*(long *)(param_2 + 0xc0) != 0)) {
    if ((float)*(int *)(param_2 + 0x2a44) <= fVar10) {
      uVar3 = FUN_10009dc98();
    }
    else {
      uVar3 = 0;
    }
    FUN_1003467f8();
    iVar4 = FUN_10034cec8();
    if (iVar4 != 0) {
      uVar5 = FUN_10009d950(*(undefined8 *)(param_2 + 0xc0));
      uVar3 = uVar3 & uVar5;
      uVar5 = 4;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      *(uint *)(param_2 + 0x37c) = *(uint *)(param_2 + 0x37c) & 0xfffffffb | uVar5;
    }
    FUN_10009a350(param_2,*(undefined4 *)(param_2 + 0x2a44),uVar3 & 1);
  }
LAB_10009a25c:
  lVar7 = FUN_10005fe04();
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    FUN_10005fe04();
    uVar8 = FUN_100060518();
  }
  FUN_100183fcc(uVar8,param_2 + 0x1fd0);
  return;
}




void FUN_10009a350(undefined1 param_1 [16],undefined4 param_2,long param_3,uint param_4,int param_5)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_48 [8];
  void *local_40;
  undefined8 local_38;
  
  uVar2 = (param_4 >> 0x1d ^ 0xffffffff) & 4;
  *(uint *)(param_3 + 0x37c) = *(uint *)(param_3 + 0x37c) & 0xfffffffb | uVar2;
  *(uint *)(param_3 + 0x1934) = *(uint *)(param_3 + 0x1934) & 0xfffffffb | uVar2;
  if (*(uint *)(param_3 + 0x2a44) != param_4) {
    if (-1 < (int)param_4) {
      plVar1 = (long *)(param_3 + 0x18b0);
      FUN_1004e313c(auStack_48);
      FUN_1004e38ac(auStack_48,"%d");
      FUN_1006513c0(param_3 + 0x1968,auStack_48);
      uVar4 = FUN_1006425d0(plVar1,0,0,1,1);
      local_38 = (undefined1 *)CONCAT44(param_2,uVar4);
      FUN_10064e48c(plVar1,&local_38);
      fVar5 = (float)FUN_10064e3cc(plVar1);
      bVar3 = false;
      if ((*(float *)(param_3 + 0x18f0) == fVar5 * -0.5) &&
         (bVar3 = false, !NAN(*(float *)(param_3 + 0x18f4)))) {
        bVar3 = *(float *)(param_3 + 0x18f4) == 25.0;
      }
      if (!bVar3) {
        *(float *)(param_3 + 0x18f0) = fVar5 * -0.5;
        *(undefined4 *)(param_3 + 0x18f4) = 0x41c80000;
        FUN_1000200a0(plVar1);
      }
      local_38 = &DAT_3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_38);
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
      }
    }
    *(uint *)(param_3 + 0x2a44) = param_4;
  }
  uVar2 = *(uint *)(param_3 + 0x37c);
  if (param_5 == 0) {
    if ((uVar2 & 0x7f80) == 0x2600) {
      return;
    }
    uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
  }
  else {
    if ((uVar2 & 0x7f80) == 0x7f80) {
      return;
    }
    uVar2 = uVar2 | 0x7f80;
  }
  *(uint *)(param_3 + 0x37c) = uVar2;
  FUN_1000200a0(param_3 + 0x2f8);
  return;
}




void FUN_10009a4c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_48;
  
  lVar1 = param_1 + 0x1a98;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x1ad8) == 0.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x1adc))))
  {
    bVar4 = *(float *)(param_1 + 0x1adc) == 12.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x1ad8) = 0x4140000000000000;
    FUN_1000200a0(lVar1);
  }
  local_48 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x1a98) + 0x28))(lVar1,&local_48);
  if ((*(float *)(param_1 + 0x1ae0) != 0.9) || (*(float *)(param_1 + 0x1ae4) != 0.9)) {
    *(undefined8 *)(param_1 + 0x1ae0) = 0x3f6666663f666666;
    FUN_1000200a0(lVar1);
  }
  fVar6 = (float)FUN_100652e60(lVar1);
  fVar7 = *(float *)(param_1 + 0x1adc) + -3.0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x19a8) == fVar6) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x19ac)) && !NAN(fVar7))) {
    bVar4 = *(float *)(param_1 + 0x19ac) == fVar7;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x19a8) = fVar6;
    *(float *)(param_1 + 0x19ac) = fVar7;
    FUN_1000200a0(param_1 + 0x1968);
  }
  local_48 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x1968) + 0x28))(param_1 + 0x1968,&local_48);
  *(uint *)(param_1 + 0x1934) = *(uint *)(param_1 + 0x1934) & 0xffffffbf;
  lVar1 = param_1 + 0x2f8;
  FUN_100181c68(0x4307cccd,lVar1);
  lVar2 = param_1 + 0x1b88;
  FUN_1001b05dc(lVar2,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_10064e3cc(lVar1);
  FUN_1001b06ac(lVar2);
  FUN_1001b067c(lVar2,1);
  *(uint *)(param_1 + 0x1c0c) = *(uint *)(param_1 + 0x1c0c) & 0xffffffbf;
  FUN_10064e5ec(0,0,lVar2,5,lVar1,5);
  lVar2 = param_1 + 0x1f18;
  FUN_10064e47c(0x42dc0000,0x42dc0000,lVar2);
  lVar3 = param_1 + 0x1fd0;
  fVar7 = 0.0;
  FUN_10064e5ec(0,lVar3,8,lVar2,8);
  *(uint *)(param_1 + 0x2054) = *(uint *)(param_1 + 0x2054) & 0xffffffbf;
  FUN_10064e72c(0xc2480000,lVar2,1,lVar1,3);
  FUN_10064e72c(0,lVar2,5,lVar1,5);
  (**(code **)(**(long **)(param_1 + 0x1f08) + 0x90))();
  uVar5 = *(undefined8 *)(param_1 + 0x1f08);
  FUN_10064e72c(0xc1400000,uVar5,2,lVar3,0);
  FUN_10064e72c(0,uVar5,4,lVar3,4);
  *(uint *)(*(long *)(param_1 + 0x1f08) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1f08) + 0x84) & 0xffffffbf;
  lVar1 = param_1 + 0x1a0;
  FUN_1006557ec(lVar1);
  fVar6 = (float)FUN_10064e3cc(lVar1);
  local_48 = CONCAT44(fVar7 + 8.0,fVar6 + 8.0);
  FUN_10064e48c(param_1,&local_48);
  FUN_10064e5ec(0,0,lVar1,8,param_1,8);
  lVar1 = param_1 + 0x28f0;
  *(uint *)(param_1 + 0x2974) = *(uint *)(param_1 + 0x2974) & 0xffffffbf;
  FUN_100651038(lVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288);
  *(uint *)(param_1 + 0x2884) = *(uint *)(param_1 + 0x2884) & 0xffffffbf;
  FUN_10064e72c(0x41400000,lVar1,0,param_1,2);
  FUN_10064e72c(0,param_1 + 0x2800,5,lVar1,5);
  return;
}




void FUN_10009a7ec(long *param_1)

{
  char *pcVar1;
  long *plVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  iVar4 = (int)param_1[0x544];
  if (iVar4 == 5) {
    FUN_1004e3120(&local_78,"ITEM CATEGORY FULL :o");
    FUN_1001b0198(param_1 + 0x371,&local_78,0);
    if ((void *)CONCAT44(uStack_6c,uStack_70) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(uStack_6c,uStack_70));
    }
LAB_10009a8c8:
    *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1934) = *(uint *)((long)param_1 + 0x1934) & 0xfffffffb;
  }
  else {
    if (iVar4 == 4) {
      uVar6 = FUN_1004e0150("HUD_STORE_INVENTORY_FULL",0);
      FUN_1001b0198(param_1 + 0x371,uVar6,0);
      goto LAB_10009a8c8;
    }
    if (iVar4 == 3) {
      uVar6 = FUN_1004e0150("HUD_STORE_NOT_NEAR_SHOP",0);
      FUN_1001b0198(param_1 + 0x371,uVar6,0);
      *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffb;
    }
    else {
      FUN_1001b0198(param_1 + 0x371,&DAT_101d91650,0);
      lVar7 = (**(code **)(*(long *)param_1[0x19] + 0x10))();
      uVar6 = FUN_100490234();
      iVar4 = (int)param_1[0x544];
      if (iVar4 == 1) {
        iVar4 = FUN_1003d77ec(uVar6,(int)param_1[0x548]);
        plVar2 = param_1 + 0x548;
        if (iVar4 == 0) {
          plVar2 = (long *)&DAT_101159fcc;
        }
        if ((int)*plVar2 == -1) {
          iVar4 = (int)param_1[0x544];
          goto LAB_10009aaa8;
        }
        uVar9 = FUN_1004e0150("HUD_STORE_ITEMSELL",0);
        FUN_100181af8(param_1 + 0x5f,uVar9);
        lVar7 = FUN_10044d88c(uVar6,(int)param_1[0x548]);
        FUN_10009a350(param_1,*(undefined4 *)(lVar7 + 0x40),1);
      }
      else {
        if (iVar4 != 0) {
LAB_10009aaa8:
          if (iVar4 == 2) {
            *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffb;
            *(uint *)((long)param_1 + 0x2054) = *(uint *)((long)param_1 + 0x2054) & 0xfffffffb;
            FUN_1000cb84c(param_1[0x3e1],0);
          }
          goto LAB_10009a8ec;
        }
        if (param_1[0x18] == 0) goto LAB_10009a8ec;
        fVar3 = *(float *)(*(long *)(lVar7 + 0x40) + 800);
        local_7c = 0;
        uStack_40 = 0;
        uStack_44 = 0;
        uStack_4c = 0;
        local_48 = 0;
        uStack_54 = 0;
        uStack_5c = 0;
        local_64 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        local_74 = 0;
        uStack_70 = 0;
        local_78 = 0xffffffff;
        lVar7 = param_1[0x17];
        uVar6 = FUN_10009d9bc();
        uVar8 = FUN_1003e1f98(lVar7,uVar6,(int)fVar3,&local_7c,&local_78,&local_80,1);
        FUN_1003467f8();
        iVar4 = FUN_10034cec8();
        if (iVar4 != 0) {
          uVar5 = FUN_10009d950(param_1[0x18]);
          uVar8 = (ulong)((uint)uVar8 & uVar5);
          *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffb;
          *(uint *)((long)param_1 + 0x2054) = *(uint *)((long)param_1 + 0x2054) & 0xfffffffb;
        }
        FUN_10009a350(param_1,local_7c,uVar8);
        pcVar1 = "HUD_STORE_ITEMBUY";
        if (local_80 != 0) {
          pcVar1 = "HUD_STORE_ITEMUPGRADE";
        }
        uVar6 = FUN_1004e0150(pcVar1,0);
        FUN_100181af8(param_1 + 0x5f,uVar6);
      }
    }
  }
  *(uint *)((long)param_1 + 0x2054) = *(uint *)((long)param_1 + 0x2054) | 4;
LAB_10009a8ec:
  FUN_100644aec(&local_78,DAT_101d23668,0);
  FUN_100644c34(param_1,&local_78,0);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined4 FUN_10009ab1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2a20);
}




void FUN_10009ab24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0x2a40) = 0xffffffff;
  FUN_10009a7ec();
  uVar1 = FUN_10009d9bc(param_2);
  FUN_1000bf238(param_1 + 0x1f00,uVar1);
  FUN_1000cb84c(*(undefined8 *)(param_1 + 0x1f08),0);
  return;
}




void FUN_10009ab88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x2a40) = (int)param_2;
  if ((int)param_2 != -1) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  uVar1 = FUN_100490234();
  if (*(int *)(param_1 + 0x2a40) != -1) {
    uVar1 = FUN_10046e258(uVar1,param_2);
    FUN_1000bf238(param_1 + 0x1f00,uVar1);
  }
  FUN_1000cb84c(*(undefined8 *)(param_1 + 0x1f08),0);
  FUN_10009a7ec(param_1);
  return;
}




void FUN_10009ac18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = FUN_10001f424();
  local_48 = CONCAT44((float)((ulong)uVar3 >> 0x20) * 1.4,(float)uVar3 * 1.4);
  FUN_10064025c(uVar1,&local_48);
  FUN_10063f0e8(0x3c23d70a,uVar1);
  uVar2 = FUN_10001f424();
  local_48 = uVar3;
  FUN_10064025c(uVar2,&local_48);
  FUN_10063f0e8(0x3e800000,uVar2);
  FUN_10063f130(uVar2,FUN_10006bf9c);
  FUN_10063eee4(uVar1,uVar2);
  FUN_100642b7c(param_1 + 0x1b88,uVar1);
  return;
}




long * FUN_10009acd4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  code *local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined4 local_c8;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  puVar7 = (undefined8 *)FUN_1006543ec();
  *puVar7 = &PTR_thunk_FUN_1000996a8_101450cd8;
  *(undefined4 *)(puVar7 + 0x34) = 0;
  puVar7 = puVar7 + 0x35;
  FUN_100269de4(puVar7);
  plVar15 = param_1 + 0x4e;
  FUN_10053077c(plVar15,0);
  plVar1 = param_1 + 0xf5;
  thunk_FUN_100655644();
  lVar10 = 0x900;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar10);
    lVar10 = lVar10 + 0x130;
  } while (lVar10 != 0x1150);
  lVar10 = 0;
  plVar2 = param_1 + 0x22a;
  do {
    thunk_FUN_100652c08((long)plVar2 + lVar10);
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x690);
  lVar10 = 0;
  plVar12 = param_1 + 0x2fc;
  do {
    FUN_10064e264((long)plVar12 + lVar10);
    lVar10 = lVar10 + 0xb8;
  } while (lVar10 != 0x508);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar15,1);
  FUN_1005308f8(plVar15,plVar1,1);
  *(undefined4 *)((long)param_1 + 0x19c) = 6;
  FUN_100530adc(plVar15,0,0);
  uVar4 = DAT_101dbd484;
  uVar3 = DAT_101dbd458;
  if (*(int *)((long)param_1 + 0x19c) != 0) {
    uVar14 = 0;
    plVar15 = param_1 + 0x120;
    plVar16 = param_1 + 0x22a;
    plVar17 = param_1 + 0x2fc;
    uVar11 = 0;
    do {
      FUN_100651038(plVar15,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
      uVar6 = *(uint *)((long)plVar15 + 0x84);
      if ((uVar6 & 0x7f80) != 0x5900) {
        *(uint *)((long)plVar15 + 0x84) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
        FUN_1000200a0(plVar15);
      }
      FUN_100652ca4(plVar16,PTR_s_build___HUDPartsCommon_atlas_10184e098);
      local_c8 = uVar3;
      plVar12 = (long *)((ulong)plVar12 & 0xffffffff00000000 | uVar14);
      local_f0 = FUN_10009b260;
      local_e0 = 0;
      uStack_d8 = 0;
      plStack_e8 = param_1;
      local_d0 = plVar12;
      FUN_10001554c(plVar17 + 1,&local_f0);
      local_c8 = uVar4;
      uVar11 = uVar11 & 0xffffffff00000000 | uVar14;
      local_f0 = FUN_10009b260;
      local_e0 = 0;
      uStack_d8 = 0;
      plStack_e8 = param_1;
      local_d0 = (long *)uVar11;
      FUN_10001554c(plVar17 + 1,&local_f0);
      *(uint *)((long)plVar17 + 0x84) = *(uint *)((long)plVar17 + 0x84) | 0x10;
      FUN_100655930(plVar1,plVar15,1);
      FUN_100655930(plVar1,plVar16,1);
      FUN_100655930(plVar1,plVar17,1);
      FUN_10009b268(param_1,0,uVar14);
      FUN_10006d330(&local_f0,"hud_store_category_%u");
      uVar5 = FUN_1004d2524(&local_f0);
      uVar6 = FUN_100015208(&local_f0,uVar5,0x1234);
      *(uint *)((long)plVar17 + 0x84) =
           *(uint *)((long)plVar17 + 0x84) & 0x80000000 |
           *(uint *)((long)plVar17 + 0x84) & 0x7fff | (uVar6 & 0xffff) << 0xf;
      uVar14 = uVar14 + 1;
      plVar15 = plVar15 + 0x26;
      plVar16 = plVar16 + 0x1e;
      plVar17 = plVar17 + 0x17;
    } while (uVar14 < *(uint *)((long)param_1 + 0x19c));
  }
  uVar14 = FUN_10012cf0c();
  if ((uVar14 & 1) == 0) {
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_RECOM",0);
    (**(code **)(param_1[0x120] + 0x138))(param_1 + 0x120,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_WEAPON",0);
    (**(code **)(param_1[0x146] + 0x138))(param_1 + 0x146,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_SKILL",0);
    (**(code **)(param_1[0x16c] + 0x138))(param_1 + 0x16c,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_DEFENSE",0);
    (**(code **)(param_1[0x192] + 0x138))(param_1 + 0x192,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_UTIL",0);
    (**(code **)(param_1[0x1b8] + 0x138))(param_1 + 0x1b8,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_OTHER",0);
    (**(code **)(param_1[0x1de] + 0x138))(param_1 + 0x1de,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_DEBUG",0);
    (**(code **)(param_1[0x204] + 0x138))(param_1 + 0x204,uVar8);
    pcVar13 = "hud_store_category_icon_recom";
    FUN_100652cdc(plVar2,"hud_store_category_icon_recom");
    FUN_100652cdc(param_1 + 0x248,"hud_store_category_icon_weapon");
    FUN_100652cdc(param_1 + 0x266,"hud_store_category_icon_skill");
    FUN_100652cdc(param_1 + 0x284,"hud_store_category_icon_defense");
    FUN_100652cdc(param_1 + 0x2a2,"hud_store_category_icon_util");
    pcVar9 = "hud_store_category_icon_consum";
  }
  else {
    *(uint *)((long)param_1 + 0x984) = *(uint *)((long)param_1 + 0x984) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xab4) = *(uint *)((long)param_1 + 0xab4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xbe4) = *(uint *)((long)param_1 + 0xbe4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xd14) = *(uint *)((long)param_1 + 0xd14) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xe44) = *(uint *)((long)param_1 + 0xe44) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xf74) = *(uint *)((long)param_1 + 0xf74) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x10a4) = *(uint *)((long)param_1 + 0x10a4) & 0xfffffffb;
    pcVar13 = "zh_hans_hud_store_category_icon_recom";
    FUN_100652cdc(plVar2,"zh_hans_hud_store_category_icon_recom");
    FUN_100652cdc(param_1 + 0x248,"zh_hans_hud_store_category_icon_weapon");
    FUN_100652cdc(param_1 + 0x266,"zh_hans_hud_store_category_icon_skill");
    FUN_100652cdc(param_1 + 0x284,"zh_hans_hud_store_category_icon_defense");
    FUN_100652cdc(param_1 + 0x2a2,"zh_hans_hud_store_category_icon_util");
    pcVar9 = "zh_hans_hud_store_category_icon_consum";
  }
  FUN_100652cdc(param_1 + 0x2c0,pcVar9);
  if (param_1[0x2f8] != 0) {
    FUN_100652cdc(param_1 + 0x2de,pcVar13);
  }
  FUN_10009b268(param_1,1,(int)param_1[0x34]);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10009b260(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_10009b6d4(param_1,in_x4);
  return;
}




void FUN_10009b268(long param_1,int param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_64;
  
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x19c))) {
    bVar4 = param_2 == 0;
    uVar2 = 0x3d4ccccd;
    if (bVar4) {
      uVar2 = 0x3dcccccd;
    }
    uVar8 = 0x3f666666;
    if (bVar4) {
      uVar8 = 0x3f000000;
    }
    uVar9 = 0x3f800000;
    if (bVar4) {
      uVar9 = 0x3f000000;
      local_64 = 0xffaaaaaa;
    }
    else {
      local_64 = 0xffffffff;
    }
    uVar5 = FUN_100047714();
    FUN_10063fce0(uVar8);
    FUN_10063f0e8(uVar2,uVar5);
    lVar1 = param_1 + (ulong)param_3 * 0x130 + 0x900;
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar5);
    uVar5 = FUN_100047714();
    FUN_10063fce0(uVar9);
    FUN_10063f0e8(uVar2,uVar5);
    lVar1 = DAT_101dbd2f8;
    uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_10063fdf4(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    lVar1 = param_1 + (ulong)param_3 * 0xf0 + 0x1150;
    FUN_10063fe34(puVar7,lVar1,&local_64,2);
    FUN_10063f0e8(uVar2,puVar7);
    lVar3 = DAT_101dbd2f8;
    uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_10063f1bc(puVar7);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_10063f2a4(puVar7,uVar5);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,puVar7);
  }
  return;
}




long * thunk_FUN_10009acd4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  code *pcStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined4 uStack_c8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_101444218;
  puVar7 = (undefined8 *)FUN_1006543ec();
  *puVar7 = &PTR_thunk_FUN_1000996a8_101450cd8;
  *(undefined4 *)(puVar7 + 0x34) = 0;
  puVar7 = puVar7 + 0x35;
  FUN_100269de4(puVar7);
  plVar15 = param_1 + 0x4e;
  FUN_10053077c(plVar15,0);
  plVar1 = param_1 + 0xf5;
  thunk_FUN_100655644();
  lVar10 = 0x900;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar10);
    lVar10 = lVar10 + 0x130;
  } while (lVar10 != 0x1150);
  lVar10 = 0;
  plVar2 = param_1 + 0x22a;
  do {
    thunk_FUN_100652c08((long)plVar2 + lVar10);
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x690);
  lVar10 = 0;
  plVar12 = param_1 + 0x2fc;
  do {
    FUN_10064e264((long)plVar12 + lVar10);
    lVar10 = lVar10 + 0xb8;
  } while (lVar10 != 0x508);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar15,1);
  FUN_1005308f8(plVar15,plVar1,1);
  *(undefined4 *)((long)param_1 + 0x19c) = 6;
  FUN_100530adc(plVar15,0,0);
  uVar4 = DAT_101dbd484;
  uVar3 = DAT_101dbd458;
  if (*(int *)((long)param_1 + 0x19c) != 0) {
    uVar14 = 0;
    plVar15 = param_1 + 0x120;
    plVar16 = param_1 + 0x22a;
    plVar17 = param_1 + 0x2fc;
    uVar11 = 0;
    do {
      FUN_100651038(plVar15,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
      uVar6 = *(uint *)((long)plVar15 + 0x84);
      if ((uVar6 & 0x7f80) != 0x5900) {
        *(uint *)((long)plVar15 + 0x84) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
        FUN_1000200a0(plVar15);
      }
      FUN_100652ca4(plVar16,PTR_s_build___HUDPartsCommon_atlas_10184e098);
      uStack_c8 = uVar3;
      plVar12 = (long *)((ulong)plVar12 & 0xffffffff00000000 | uVar14);
      pcStack_f0 = FUN_10009b260;
      uStack_e0 = 0;
      uStack_d8 = 0;
      plStack_e8 = param_1;
      plStack_d0 = plVar12;
      FUN_10001554c(plVar17 + 1,&pcStack_f0);
      uStack_c8 = uVar4;
      uVar11 = uVar11 & 0xffffffff00000000 | uVar14;
      pcStack_f0 = FUN_10009b260;
      uStack_e0 = 0;
      uStack_d8 = 0;
      plStack_e8 = param_1;
      plStack_d0 = (long *)uVar11;
      FUN_10001554c(plVar17 + 1,&pcStack_f0);
      *(uint *)((long)plVar17 + 0x84) = *(uint *)((long)plVar17 + 0x84) | 0x10;
      FUN_100655930(plVar1,plVar15,1);
      FUN_100655930(plVar1,plVar16,1);
      FUN_100655930(plVar1,plVar17,1);
      FUN_10009b268(param_1,0,uVar14);
      FUN_10006d330(&pcStack_f0,"hud_store_category_%u");
      uVar5 = FUN_1004d2524(&pcStack_f0);
      uVar6 = FUN_100015208(&pcStack_f0,uVar5,0x1234);
      *(uint *)((long)plVar17 + 0x84) =
           *(uint *)((long)plVar17 + 0x84) & 0x80000000 |
           *(uint *)((long)plVar17 + 0x84) & 0x7fff | (uVar6 & 0xffff) << 0xf;
      uVar14 = uVar14 + 1;
      plVar15 = plVar15 + 0x26;
      plVar16 = plVar16 + 0x1e;
      plVar17 = plVar17 + 0x17;
    } while (uVar14 < *(uint *)((long)param_1 + 0x19c));
  }
  uVar14 = FUN_10012cf0c();
  if ((uVar14 & 1) == 0) {
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_RECOM",0);
    (**(code **)(param_1[0x120] + 0x138))(param_1 + 0x120,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_WEAPON",0);
    (**(code **)(param_1[0x146] + 0x138))(param_1 + 0x146,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_SKILL",0);
    (**(code **)(param_1[0x16c] + 0x138))(param_1 + 0x16c,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_DEFENSE",0);
    (**(code **)(param_1[0x192] + 0x138))(param_1 + 0x192,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_UTIL",0);
    (**(code **)(param_1[0x1b8] + 0x138))(param_1 + 0x1b8,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_OTHER",0);
    (**(code **)(param_1[0x1de] + 0x138))(param_1 + 0x1de,uVar8);
    uVar8 = FUN_1004e0150("HUD_STORE_CATEGORY_TEXT_DEBUG",0);
    (**(code **)(param_1[0x204] + 0x138))(param_1 + 0x204,uVar8);
    pcVar13 = "hud_store_category_icon_recom";
    FUN_100652cdc(plVar2,"hud_store_category_icon_recom");
    FUN_100652cdc(param_1 + 0x248,"hud_store_category_icon_weapon");
    FUN_100652cdc(param_1 + 0x266,"hud_store_category_icon_skill");
    FUN_100652cdc(param_1 + 0x284,"hud_store_category_icon_defense");
    FUN_100652cdc(param_1 + 0x2a2,"hud_store_category_icon_util");
    pcVar9 = "hud_store_category_icon_consum";
  }
  else {
    *(uint *)((long)param_1 + 0x984) = *(uint *)((long)param_1 + 0x984) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xab4) = *(uint *)((long)param_1 + 0xab4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xbe4) = *(uint *)((long)param_1 + 0xbe4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xd14) = *(uint *)((long)param_1 + 0xd14) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xe44) = *(uint *)((long)param_1 + 0xe44) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xf74) = *(uint *)((long)param_1 + 0xf74) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x10a4) = *(uint *)((long)param_1 + 0x10a4) & 0xfffffffb;
    pcVar13 = "zh_hans_hud_store_category_icon_recom";
    FUN_100652cdc(plVar2,"zh_hans_hud_store_category_icon_recom");
    FUN_100652cdc(param_1 + 0x248,"zh_hans_hud_store_category_icon_weapon");
    FUN_100652cdc(param_1 + 0x266,"zh_hans_hud_store_category_icon_skill");
    FUN_100652cdc(param_1 + 0x284,"zh_hans_hud_store_category_icon_defense");
    FUN_100652cdc(param_1 + 0x2a2,"zh_hans_hud_store_category_icon_util");
    pcVar9 = "zh_hans_hud_store_category_icon_consum";
  }
  FUN_100652cdc(param_1 + 0x2c0,pcVar9);
  if (param_1[0x2f8] != 0) {
    FUN_100652cdc(param_1 + 0x2de,pcVar13);
  }
  FUN_10009b268(param_1,1,(int)param_1[0x34]);
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_70) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10009b4a4(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_78;
  
  uVar13 = (**(code **)(*param_3 + 0x48))();
  local_78 = CONCAT44(param_2,uVar13);
  FUN_10064e48c(param_3 + 0x35,&local_78);
  if (*(int *)((long)param_3 + 0x19c) != 0) {
    lVar7 = 0;
    uVar8 = 0;
    lVar9 = 0x1150;
    lVar10 = 0x17e0;
    lVar11 = 0x1824;
    lVar12 = 0x1194;
    do {
      lVar1 = (long)param_3 + lVar7 + 0x900;
      fVar15 = (float)(uVar8 & 0xffffffff) * 150.0;
      fVar14 = *(float *)((long)param_3 + lVar7 + 0x944);
      bVar4 = false;
      if ((*(float *)((long)param_3 + lVar7 + 0x940) == 0.0) &&
         (bVar4 = false, !NAN(fVar14) && !NAN(fVar15))) {
        bVar4 = fVar14 == fVar15;
      }
      if (!bVar4) {
        *(undefined4 *)((long)param_3 + lVar7 + 0x940) = 0;
        *(float *)((long)param_3 + lVar7 + 0x944) = fVar15;
        FUN_1000200a0(lVar1);
      }
      local_78 = 0x3f000000;
      (**(code **)(*(long *)((long)param_3 + lVar7 + 0x900) + 0x28))(lVar1,&local_78);
      pfVar3 = (float *)((long)param_3 + lVar12);
      if ((pfVar3[-1] != 0.0) || (*pfVar3 != fVar15 + 36.0)) {
        pfVar3[-1] = 0.0;
        *(float *)((long)param_3 + lVar12) = fVar15 + 36.0;
        FUN_1000200a0((long)param_3 + lVar9);
      }
      local_78 = 0x3f000000;
      (**(code **)(*(long *)((long)param_3 + lVar9) + 0x28))((long)param_3 + lVar9,&local_78);
      lVar1 = (long)param_3 + lVar10;
      pfVar3 = (float *)((long)param_3 + lVar11);
      bVar4 = false;
      if ((pfVar3[-1] == 0.0) && (bVar4 = false, !NAN(*pfVar3) && !NAN(fVar15))) {
        bVar4 = *pfVar3 == fVar15;
      }
      if (!bVar4) {
        pfVar3[-1] = 0.0;
        *(float *)((long)param_3 + lVar11) = fVar15;
        FUN_1000200a0(lVar1);
      }
      local_78 = 0x3f000000;
      (**(code **)(*(long *)((long)param_3 + lVar10) + 0x28))(lVar1,&local_78);
      param_2 = 120.0;
      FUN_10064e47c(0x43340000,lVar1);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x130;
      lVar9 = lVar9 + 0xf0;
      lVar10 = lVar10 + 0xb8;
      lVar11 = lVar11 + 0xb8;
      lVar12 = lVar12 + 0xf0;
    } while (uVar8 < *(uint *)((long)param_3 + 0x19c));
  }
  plVar2 = param_3 + 0xf5;
  FUN_1006557ec(plVar2);
  FUN_10064e3cc(plVar2);
  fVar14 = param_2;
  (**(code **)(*param_3 + 0x48))(param_3);
  if (fVar14 <= param_2) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = 5;
    uVar6 = 5;
  }
  FUN_10064e72c(0,plVar2,uVar5,param_3,uVar6);
  FUN_100530a48(param_3 + 0x4e,0);
  FUN_100530adc(param_3 + 0x4e,0,0);
  return;
}




void FUN_10009b6d4(long param_1,ulong param_2)

{
  undefined1 auStack_50 [48];
  
  if (*(int *)(param_1 + 0x1a0) != (int)param_2) {
    FUN_10009b268(param_1,0);
    FUN_10009b268(param_1,1,param_2);
    *(int *)(param_1 + 0x1a0) = (int)param_2;
    FUN_100530200(auStack_50,DAT_101d91884,param_2 & 0xffffffff,0);
    FUN_100644c34(param_1,auStack_50,1);
  }
  return;
}




void FUN_10009b750(long param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_100269e20(param_1 + 0x1a8);
  uVar1 = (ulong)*(uint *)(param_1 + 0x19c);
  uVar2 = 0x10;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  if (*(uint *)(param_1 + 0x19c) != 0) {
    puVar3 = (uint *)(param_1 + 0x1864);
    do {
      *puVar3 = *puVar3 & 0xffffffef | uVar2;
      uVar1 = uVar1 - 1;
      puVar3 = puVar3 + 0x2e;
    } while (uVar1 != 0);
  }
  return;
}




long * FUN_10009b7ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_1000994f0_101450fc0;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = DAT_101dc0b88;
  puVar4[0x1a] = 0xffffffffffffffff;
  *(undefined4 *)(puVar4 + 0x1b) = 0xffffffff;
  puVar4 = puVar4 + 0x1c;
  FUN_100269de4(puVar4);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x60;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_100655644(param_1 + 0x86);
  lVar6 = 0x588;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar6);
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0xee8);
  lVar6 = 0xee8;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar6);
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0x1848);
  lVar6 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar6 + 0x1848);
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0x960);
  lVar6 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar6 + 0x21a8);
    lVar6 = lVar6 + 0x130;
  } while (lVar6 != 0xbe0);
  thunk_FUN_100652c08(param_1 + 0x5b8);
  thunk_FUN_100652c08(param_1 + 0x5d6);
  *(undefined1 *)(param_1 + 0x5f5) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,param_1 + 0x86,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
  uVar5 = FUN_1004e0150("HUD_STORE_INVENTORY",0);
  FUN_1006513c0(plVar2,uVar5);
  uVar3 = *(uint *)((long)param_1 + 900);
  if ((uVar3 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 900) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
  }
  return param_1;
}




long * thunk_FUN_10009b7ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_1000994f0_101450fc0;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = DAT_101dc0b88;
  puVar4[0x1a] = 0xffffffffffffffff;
  *(undefined4 *)(puVar4 + 0x1b) = 0xffffffff;
  puVar4 = puVar4 + 0x1c;
  FUN_100269de4(puVar4);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x60;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_100655644(param_1 + 0x86);
  lVar6 = 0x588;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar6);
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0xee8);
  lVar6 = 0xee8;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar6);
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0x1848);
  lVar6 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar6 + 0x1848);
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0x960);
  lVar6 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar6 + 0x21a8);
    lVar6 = lVar6 + 0x130;
  } while (lVar6 != 0xbe0);
  thunk_FUN_100652c08(param_1 + 0x5b8);
  thunk_FUN_100652c08(param_1 + 0x5d6);
  *(undefined1 *)(param_1 + 0x5f5) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,param_1 + 0x86,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
  uVar5 = FUN_1004e0150("HUD_STORE_INVENTORY",0);
  FUN_1006513c0(plVar2,uVar5);
  uVar3 = *(uint *)((long)param_1 + 900);
  if ((uVar3 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 900) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
  }
  return param_1;
}




void FUN_10009b97c(long param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_88;
  
  if (*(long *)(param_1 + 200) != 0) {
    FUN_1003467f8();
    iVar5 = FUN_10034d058();
    if (iVar5 != 0) {
      lVar7 = 0;
      uVar8 = 0;
      lVar9 = 0x21a8;
      lVar10 = 0x1848;
      lVar11 = 0x21ec;
      do {
        lVar2 = param_1 + lVar7;
        lVar1 = lVar2 + 0x588;
        fVar14 = (float)(uVar8 & 0xffffffff) * 125.0;
        if ((*(float *)(lVar2 + 0x5c8) != fVar14) || (*(float *)(lVar2 + 0x5cc) != 0.0)) {
          *(float *)(lVar2 + 0x5c8) = fVar14;
          *(undefined4 *)(lVar2 + 0x5cc) = 0;
          FUN_1000200a0(lVar1);
        }
        local_88 = &DAT_3f0000003f000000;
        lVar2 = param_1 + lVar7;
        (**(code **)(*(long *)(lVar2 + 0x588) + 0x28))(lVar1,&local_88);
        bVar4 = false;
        if ((*(float *)(lVar2 + 0x5d0) == 0.734375) &&
           (bVar4 = false, !NAN(*(float *)(lVar2 + 0x5d4)))) {
          bVar4 = *(float *)(lVar2 + 0x5d4) == 0.734375;
        }
        if (!bVar4) {
          *(undefined8 *)(lVar2 + 0x5d0) = 0x3f3c00003f3c0000;
          FUN_1000200a0(lVar1);
        }
        if ((*(float *)(lVar2 + 0xf28) != fVar14) || (*(float *)(lVar2 + 0xf2c) != 0.0)) {
          *(float *)(lVar2 + 0xf28) = fVar14;
          *(undefined4 *)(lVar2 + 0xf2c) = 0;
          FUN_1000200a0(lVar2 + 0xee8);
        }
        local_88 = &DAT_3f0000003f000000;
        lVar1 = param_1 + lVar7;
        (**(code **)(*(long *)(lVar1 + 0xee8) + 0x28))(lVar2 + 0xee8,&local_88);
        pfVar3 = (float *)(param_1 + lVar11);
        bVar4 = false;
        if ((pfVar3[-1] == fVar14 + 46.0) && (bVar4 = false, !NAN(*pfVar3))) {
          bVar4 = *pfVar3 == 46.0;
        }
        if (!bVar4) {
          pfVar3[-1] = fVar14 + 46.0;
          *(undefined4 *)(param_1 + lVar11) = 0x42380000;
          FUN_1000200a0(param_1 + lVar9);
        }
        local_88 = &DAT_3f0000003f000000;
        (**(code **)(*(long *)(param_1 + lVar9) + 0x28))(param_1 + lVar9,&local_88);
        if ((*(float *)(lVar1 + 0x1888) != fVar14) || (*(float *)(lVar1 + 0x188c) != 0.0)) {
          *(float *)(lVar1 + 0x1888) = fVar14;
          *(undefined4 *)(lVar1 + 0x188c) = 0;
          FUN_1000200a0(param_1 + lVar10);
        }
        local_88 = &DAT_3f0000003f000000;
        (**(code **)(*(long *)(param_1 + lVar7 + 0x1848) + 0x28))(param_1 + lVar10,&local_88);
        uVar8 = uVar8 + 1;
        FUN_1003467f8();
        uVar6 = FUN_10034d058();
        lVar7 = lVar7 + 0xf0;
        lVar9 = lVar9 + 0x130;
        lVar10 = lVar10 + 0xf0;
        lVar11 = lVar11 + 0x130;
      } while (uVar8 < (uVar6 & 0xffffffff));
    }
    lVar7 = param_1 + 0x430;
    FUN_1006557ec(lVar7);
    FUN_10064e72c(0,param_1 + 0x300,0,lVar7,2);
    FUN_10064e72c(0,param_1 + 0x300,4,lVar7,4);
    lVar7 = param_1 + 0x1a8;
    FUN_1006557ec(lVar7);
    fVar14 = *(float *)(param_1 + 500);
    bVar4 = false;
    if ((*(float *)(param_1 + 0x1f0) == 1.5) && (bVar4 = false, !NAN(fVar14))) {
      bVar4 = fVar14 == 1.5;
    }
    if (!bVar4) {
      uVar13 = NEON_fmov(0x3fc00000,4);
      *(undefined8 *)(param_1 + 0x1f0) = uVar13;
      FUN_1000200a0(lVar7);
    }
    uVar12 = FUN_10064259c(lVar7);
    local_88 = (undefined1 *)CONCAT44(fVar14,uVar12);
    FUN_10064e48c(param_1,&local_88);
  }
  return;
}




void FUN_10009bc10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  code *local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined4 local_70;
  
  plVar15 = (long *)(param_2 + 0x28);
  lVar16 = *plVar15;
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  *(long **)(param_1 + 0xb8) = plVar15;
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  (**(code **)(lVar16 + 0x10))(plVar15);
  uVar14 = FUN_100490234();
  *(undefined8 *)(param_1 + 200) = uVar14;
  FUN_1003467f8();
  iVar13 = FUN_10034d058();
  if (10 < iVar13) {
    FUN_1003467f8();
    iVar13 = FUN_10034d058();
    fVar23 = 10.0 / (float)iVar13;
    bVar12 = false;
    if ((*(float *)(param_1 + 0x128) == fVar23) &&
       (bVar12 = false, !NAN(*(float *)(param_1 + 300)) && !NAN(fVar23))) {
      bVar12 = *(float *)(param_1 + 300) == fVar23;
    }
    if (!bVar12) {
      *(float *)(param_1 + 0x128) = fVar23;
      *(float *)(param_1 + 300) = fVar23;
      FUN_1000200a0(param_1 + 0xe0);
    }
  }
  lVar16 = param_1 + 0x430;
  FUN_1003467f8();
  iVar13 = FUN_10034d058();
  uVar11 = DAT_101dbd48c;
  uVar10 = DAT_101dbd488;
  uVar9 = DAT_101dbd484;
  uVar8 = DAT_101dbd460;
  uVar7 = DAT_101dbd45c;
  uVar5 = DAT_101dbd458;
  if (iVar13 != 0) {
    lVar18 = 0;
    lVar22 = 0x21a8;
    lVar21 = 0x1848;
    lVar20 = 0xb62;
    do {
      uVar19 = lVar20 - 0xb62;
      lVar2 = param_1 + lVar18;
      FUN_100652ca4(lVar2 + 0x588,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
      lVar1 = lVar2 + 0xee8;
      FUN_100652ca4(lVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098);
      FUN_100652cdc(lVar1,"hud_store_inventory_regular");
      *(uint *)(lVar2 + 0xf6c) = *(uint *)(lVar2 + 0xf6c) | 0x10;
      lVar3 = param_1 + lVar22;
      FUN_100651038(lVar3,PTR_s_build___Fonts_Avenir_Medium_30_f_10184e2a8);
      FUN_1006516bc(lVar3,&DAT_101d22fe8);
      FUN_10065165c(lVar3,1);
      lVar4 = param_1 + lVar21;
      FUN_100652ca4(lVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
      FUN_100652cdc(lVar4,"hud_store_inventory_highlighted");
      if ((*(uint *)(lVar2 + 0x18cc) & 0x7f80) != 0) {
        *(uint *)(lVar2 + 0x18cc) = *(uint *)(lVar2 + 0x18cc) & 0xffff807f;
        FUN_1000200a0(lVar4);
      }
      FUN_100655930(lVar16,lVar2 + 0x588,1);
      FUN_100655930(lVar16,lVar1,1);
      FUN_100655930(lVar16,lVar4,1);
      FUN_100655930(lVar16,lVar3,1);
      local_70 = uVar8;
      local_b0 = local_b0 & 0xffffffff00000000 | uVar19;
      local_98 = FUN_10009c14c;
      local_88 = 0;
      uStack_80 = 0;
      lVar2 = lVar2 + 0xef0;
      lStack_90 = param_1;
      local_78 = local_b0;
      FUN_10001554c(lVar2,&local_98);
      local_70 = uVar11;
      local_b8 = local_b8 & 0xffffffff00000000 | uVar19;
      local_98 = FUN_10009c14c;
      local_88 = 0;
      uStack_80 = 0;
      lStack_90 = param_1;
      local_78 = local_b8;
      FUN_10001554c(lVar2,&local_98);
      local_70 = uVar5;
      local_c0 = local_c0 & 0xffffffff00000000 | uVar19;
      local_98 = FUN_10009c158;
      local_88 = 0;
      uStack_80 = 0;
      lStack_90 = param_1;
      local_78 = local_c0;
      FUN_10001554c(lVar2,&local_98);
      local_70 = uVar9;
      local_c8 = local_c8 & 0xffffffff00000000 | uVar19;
      local_98 = FUN_10009c158;
      local_88 = 0;
      uStack_80 = 0;
      lStack_90 = param_1;
      local_78 = local_c8;
      FUN_10001554c(lVar2,&local_98);
      local_70 = uVar7;
      local_d0 = local_d0 & 0xffffffff00000000 | uVar19;
      local_98 = FUN_10009c160;
      local_88 = 0;
      uStack_80 = 0;
      lStack_90 = param_1;
      local_78 = local_d0;
      FUN_10001554c(lVar2,&local_98);
      local_70 = uVar10;
      local_d8 = local_d8 & 0xffffffff00000000 | uVar19;
      local_98 = FUN_10009c160;
      local_88 = 0;
      uStack_80 = 0;
      lStack_90 = param_1;
      local_78 = local_d8;
      FUN_10001554c(lVar2,&local_98);
      *(undefined4 *)(param_1 + lVar20 * 4) = 0xffffffff;
      FUN_1003467f8();
      uVar19 = FUN_10034d058();
      lVar18 = lVar18 + 0xf0;
      lVar22 = lVar22 + 0x130;
      lVar21 = lVar21 + 0xf0;
      uVar17 = lVar20 - 0xb61;
      lVar20 = lVar20 + 1;
    } while (uVar17 < (uVar19 & 0xffffffff));
  }
  lVar18 = param_1 + 0x2dc0;
  FUN_100655930(lVar16,lVar18,1);
  FUN_100652ca4(lVar18,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  if ((*(float *)(param_1 + 0x2e08) != 1.6890625) || (*(float *)(param_1 + 0x2e0c) != 1.6890625)) {
    *(undefined8 *)(param_1 + 0x2e08) = 0x3fd833333fd83333;
    FUN_1000200a0(lVar18);
  }
  if ((*(float *)(param_1 + 0x2e10) != 0.5) || (*(float *)(param_1 + 0x2e14) != 0.5)) {
    *(undefined1 **)(param_1 + 0x2e10) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar18);
  }
  uVar6 = *(uint *)(param_1 + 0x2e44);
  *(uint *)(param_1 + 0x2e44) = uVar6 & 0xffffffbb;
  if ((uVar6 & 0x7f80) != 0x5280) {
    *(uint *)(param_1 + 0x2e44) = uVar6 & 0xffff803b | 0x5280;
    FUN_1000200a0(lVar18);
  }
  lVar16 = param_1 + 0x2eb0;
  FUN_100642bd8(lVar18,lVar16,1);
  FUN_100652ca4(lVar16,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(lVar16,"hud_store_inventory_highlighted");
  if ((*(float *)(param_1 + 0x2ef8) != 1.3617021) || (*(float *)(param_1 + 0x2efc) != 1.3617021)) {
    *(undefined8 *)(param_1 + 0x2ef8) = 0x3fae4c413fae4c41;
    FUN_1000200a0(lVar16);
  }
  if ((*(float *)(param_1 + 0x2f00) != 0.5) || (*(float *)(param_1 + 0x2f04) != 0.5)) {
    *(undefined1 **)(param_1 + 0x2f00) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar16);
  }
  FUN_10009c164(param_1);
  return;
}




void FUN_10009c14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10009c81c(param_1,param_4,param_5);
  return;
}




void FUN_10009c158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10009cb2c(param_1,param_2,param_5);
  return;
}




void FUN_10009c160(void)

{
  return;
}




void FUN_10009c164(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  if ((*(long *)(param_1 + 200) != 0) && (iVar1 = FUN_100465738(), iVar1 != 0)) {
    uVar6 = 0;
    uVar7 = 0;
    do {
      FUN_1003467f8();
      uVar2 = FUN_10034d058();
      if (uVar2 <= (uint)uVar6) {
        return;
      }
      uVar3 = FUN_10046e298(*(undefined8 *)(param_1 + 200),uVar7);
      if ((int)uVar3 == -1) {
        FUN_100652cdc(param_1 + uVar6 * 0xf0 + 0x588,"icon_item_empty");
        *(undefined4 *)(param_1 + uVar6 * 4 + 0x2d88) = 0xffffffff;
        lVar5 = param_1 + uVar6 * 0x130;
        (**(code **)(*(long *)(lVar5 + 0x21a8) + 0x138))(lVar5 + 0x21a8,&DAT_101d91650);
LAB_10009c244:
        uVar6 = (ulong)((uint)uVar6 + 1);
      }
      else {
        FUN_10044d88c(*(undefined8 *)(param_1 + 200),uVar3);
        uVar4 = FUN_1000bda94();
        if ((uVar4 & 1) == 0) {
          FUN_10009cbc4(param_1,uVar6,uVar3);
          goto LAB_10009c244;
        }
      }
      uVar7 = uVar7 + 1;
      uVar2 = FUN_100465738(*(undefined8 *)(param_1 + 200));
    } while (uVar7 < uVar2);
  }
  return;
}




void FUN_10009c278(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  
  FUN_100269e20(param_1 + 0xe0);
  uVar3 = 0x10;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  FUN_1003467f8();
  iVar1 = FUN_10034d058();
  if (iVar1 != 0) {
    uVar5 = 0;
    puVar4 = (uint *)(param_1 + 0xf6c);
    do {
      *puVar4 = *puVar4 & 0xffffffef | uVar3;
      uVar5 = uVar5 + 1;
      FUN_1003467f8();
      uVar2 = FUN_10034d058();
      puVar4 = puVar4 + 0x3c;
    } while (uVar5 < (uVar2 & 0xffffffff));
  }
  return;
}




void FUN_10009c2ec(long param_1)

{
  if (*(int *)(param_1 + 0xd0) != -1) {
    FUN_10009c328(param_1,0);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  return;
}




void FUN_10009c328(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = 0x3d4ccccd;
  if (param_2 == 0) {
    uVar2 = 0x3dcccccd;
  }
  uVar3 = 0x3f800000;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  uVar4 = FUN_100047714();
  FUN_10063fce0(uVar3);
  FUN_10063f0e8(uVar2,uVar4);
  lVar1 = param_1 + (param_3 & 0xffffffff) * 0xf0 + 0x1848;
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar4);
  *(char *)(param_1 + (param_3 & 0xffffffff) + 0x2db0) = (char)param_2;
  return;
}




void FUN_10009c3d4(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [64];
  
  if (*(long *)(param_1 + 200) != 0) {
    FUN_10009c164(param_1);
  }
  fVar14 = 0.0;
  FUN_100644d70(0,0,0,0,auStack_b0,DAT_101dbd458,1,0,0,1,0,0,0);
  iVar2 = FUN_10011a354(0x10);
  if (iVar2 != 0) {
    FUN_10009c81c(param_1,auStack_b0,0);
  }
  iVar2 = FUN_10011a354(0x11);
  if (iVar2 != 0) {
    FUN_10009c81c(param_1,auStack_b0,1);
  }
  iVar2 = FUN_10011a354(0x12);
  if (iVar2 != 0) {
    FUN_10009c81c(param_1,auStack_b0,2);
  }
  iVar2 = FUN_10011a354(0x13);
  if (iVar2 != 0) {
    FUN_10009c81c(param_1,auStack_b0,3);
  }
  iVar2 = FUN_10011a354(0x14);
  if (iVar2 != 0) {
    FUN_10009c81c(param_1,auStack_b0,4);
  }
  iVar2 = FUN_10011a354(0x15);
  if (iVar2 != 0) {
    FUN_10009c81c(param_1,auStack_b0,5);
  }
  if (*(char *)(param_1 + 0x2fa8) == '\0') {
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0xd8) != -1) {
    uVar12 = FUN_10009c978(param_1);
    lVar10 = param_1 + 0x588;
    fVar16 = *(float *)(param_1 + 0x5c8);
    fVar13 = (float)(**(code **)(*(long *)(param_1 + 0x588) + 0x50))(lVar10);
    fVar16 = fVar16 - fVar13 * 0.5;
    FUN_1003467f8();
    iVar2 = FUN_10034d058();
    fVar17 = *(float *)(lVar10 + (long)iVar2 * 0xf0 + -0xb0);
    FUN_1003467f8();
    iVar2 = FUN_10034d058();
    fVar13 = (float)(**(code **)(*(long *)(lVar10 + (long)iVar2 * 0xf0 + -0xf0) + 0x50))();
    fVar13 = (float)NEON_fminnm(uVar12,fVar17 + fVar13 * 0.5);
    if (fVar16 <= fVar13) {
      fVar16 = fVar13;
    }
    fVar13 = *(float *)(param_1 + 0x5cc);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x2e00) == fVar16) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0x2e04)) && !NAN(fVar13))) {
      bVar1 = *(float *)(param_1 + 0x2e04) == fVar13;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x2e00) = fVar16;
      *(float *)(param_1 + 0x2e04) = fVar13;
      FUN_1000200a0(param_1 + 0x2dc0);
      fVar13 = *(float *)(param_1 + 0x5cc);
    }
    fVar17 = ABS(*(float *)(param_1 + 0x5c8) - *(float *)(param_1 + 0x6b8));
    iVar2 = *(int *)(param_1 + (long)*(int *)(param_1 + 0xd8) * 4 + 0x2d88);
    if (iVar2 != -1) {
      if (10.0 < ABS(fVar16 - *(float *)(param_1 + 0x2fa0))) {
        *(uint *)(param_1 + 0x2e44) = *(uint *)(param_1 + 0x2e44) | 4;
      }
      fVar15 = fVar17 * 0.5;
      FUN_1003467f8();
      iVar4 = FUN_10034d058();
      if (0 < iVar4) {
        lVar10 = 0;
        lVar11 = 0x5c8;
        do {
          FUN_10009c328(param_1,ABS(*(float *)(param_1 + lVar11) - fVar16) < fVar15 &&
                                ABS(fVar13 - fVar14) < fVar15,lVar10);
          lVar10 = lVar10 + 1;
          FUN_1003467f8();
          iVar4 = FUN_10034d058();
          lVar11 = lVar11 + 0xf0;
        } while (lVar10 < iVar4);
      }
      uVar6 = FUN_10109c574();
      if (((uVar6 & 1) == 0) || (iVar4 = FUN_10109c588(), iVar4 == 0)) {
        bVar1 = false;
      }
      else {
        pbVar7 = (byte *)FUN_10109c59c(0);
        bVar1 = (*pbVar7 & 1) == 0;
      }
      iVar4 = FUN_10109c4dc();
      if (iVar4 == 0) {
        if (!bVar1) {
          return;
        }
      }
      else {
        uVar3 = FUN_10109c520(0);
        if ((uVar3 & 1) == 0 && !bVar1) {
          return;
        }
      }
    }
    fVar17 = fVar17 * 0.5;
    FUN_10009c328(param_1,0,*(undefined4 *)(param_1 + 0xd8));
    if ((iVar2 != -1) && (ABS(fVar13 - fVar14) < fVar17)) {
      FUN_1003467f8();
      iVar2 = FUN_10034d058();
      if (0 < iVar2) {
        lVar10 = 0;
        lVar11 = 0x5c8;
        do {
          if (ABS(*(float *)(param_1 + lVar11) - fVar16) < fVar17) {
            iVar2 = (int)lVar10;
            if (*(int *)(param_1 + 0xd8) != iVar2) {
              iVar4 = FUN_10009ca30(param_1);
              iVar5 = FUN_10009ca30(param_1,lVar10);
              if (iVar4 != -1 || iVar5 != -1) {
                lVar11 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
                uVar12 = *(undefined4 *)(lVar11 + 0x260);
                uVar8 = FUN_10009ca30(param_1,*(undefined4 *)(param_1 + 0xd8));
                uVar9 = FUN_10009ca30(param_1,lVar10);
                FUN_1003ddf40(auStack_d8,uVar12,uVar8,uVar9);
                FUN_100345498(auStack_d8);
              }
              FUN_10009c164(param_1);
              FUN_10009c328(param_1,0,lVar10);
              if (*(int *)(param_1 + 0xd0) == iVar2) {
                if (iVar2 != -1) {
                  FUN_10009c328(param_1,0,lVar10);
                }
                *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
              }
              *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
            }
            break;
          }
          lVar10 = lVar10 + 1;
          FUN_1003467f8();
          iVar2 = FUN_10034d058();
          lVar11 = lVar11 + 0xf0;
        } while (lVar10 < iVar2);
      }
    }
    *(uint *)(param_1 + 0x2e44) = *(uint *)(param_1 + 0x2e44) & 0xfffffffb;
    *(char *)(param_1 + 0x2fa8) = '\0';
  }
  return;
}




void FUN_10009c81c(long param_1,long *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_60 [48];
  
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == -1) {
    return;
  }
  if (*(int *)(param_1 + (long)iVar1 * 4 + 0x2d88) == -1 || iVar1 != param_3) {
    return;
  }
  if (*(int *)(param_1 + 0xd0) == iVar1) {
    iVar1 = FUN_1001312b8();
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xd0) == -1) {
      return;
    }
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
    if ((((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
       (iVar1 = FUN_100644ecc(param_2), iVar1 != 0)) {
      FUN_100530200(auStack_60,DAT_101d918d0,0xffffffff,0);
      FUN_100644c34(param_1,auStack_60,1);
      *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0xd0) != -1) {
      FUN_10009c328(param_1,0);
    }
    FUN_10009c328(param_1,1,iVar1);
    *(int *)(param_1 + 0xd0) = iVar1;
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  }
  FUN_100530200(auStack_60,DAT_101d91884,param_3,0);
  FUN_100644c34(param_1,auStack_60,1);
  return;
}




void FUN_10009c978(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 local_38;
  
  local_38 = 0;
  iVar1 = FUN_10109c574();
  if (iVar1 == 0) {
    FUN_10109c550((long)&local_38 + 4,&local_38,0,0);
  }
  else {
    iVar1 = FUN_10109c588();
    if (iVar1 != 0) {
      lVar2 = FUN_10109c59c(0);
      local_38 = CONCAT44(*(undefined4 *)(lVar2 + 4),*(undefined4 *)(lVar2 + 8));
    }
  }
  param_1 = param_1 + 0x430;
  FUN_1006559a0(param_1);
  FUN_10003d5bc();
  FUN_1006559a0(param_1);
  FUN_10003d5bc();
  FUN_1006559a0(param_1);
  return;
}




uint FUN_10009ca30(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  
  if ((*(long *)(param_1 + 200) != 0) && (iVar1 = FUN_100465738(), iVar1 != 0)) {
    uVar5 = 0;
    do {
      uVar3 = FUN_10046e298(*(undefined8 *)(param_1 + 200),uVar5);
      if ((int)uVar3 == -1) {
LAB_10009ca90:
        if (param_2 == 0) {
          return uVar5;
        }
        param_2 = param_2 + -1;
      }
      else {
        FUN_10044d88c(*(undefined8 *)(param_1 + 200),uVar3);
        uVar4 = FUN_1000bda94();
        if ((uVar4 & 1) == 0) goto LAB_10009ca90;
      }
      uVar5 = uVar5 + 1;
      uVar2 = FUN_100465738(*(undefined8 *)(param_1 + 200));
    } while (uVar5 < uVar2);
  }
  return 0xffffffff;
}




undefined4 FUN_10009cac4(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((*(long *)(param_1 + 200) != 0) && (iVar1 = *(int *)(param_1 + 0xd0), iVar1 != -1)) {
    FUN_1003467f8();
    iVar2 = FUN_10034d058();
    if (iVar1 < iVar2) {
      puVar3 = (undefined4 *)(param_1 + (long)*(int *)(param_1 + 0xd0) * 4 + 0x2d88);
      goto LAB_10009cb14;
    }
  }
  puVar3 = &DAT_101159fd4;
LAB_10009cb14:
  return *puVar3;
}




void FUN_10009cb24(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  return;
}




void FUN_10009cb2c(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                  uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  if (((param_5 != 0xffffffff) && (*(int *)(param_3 + 0xd8) == -1)) &&
     (lVar1 = param_3 + ((long)((ulong)param_5 << 0x20) >> 0x1e), *(int *)(lVar1 + 0x2d88) != -1)) {
    *(uint *)(param_3 + 0xd8) = param_5;
    lVar1 = FUN_10044d88c(*(undefined8 *)(param_3 + 200),*(undefined4 *)(lVar1 + 0x2d88));
    FUN_100652cdc(param_3 + 0x2dc0,*(undefined8 *)(lVar1 + 8));
    uVar2 = FUN_10009c978(param_3);
    *(undefined4 *)(param_3 + 0x2fa0) = uVar2;
    *(undefined4 *)(param_3 + 0x2fa4) = param_2;
    *(undefined1 *)(param_3 + 0x2fa8) = 1;
  }
  return;
}




void FUN_10009cbc4(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(int *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x2d88) = (int)param_3;
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  uVar3 = FUN_100490234();
  lVar4 = FUN_10044d88c(uVar3,param_3);
  FUN_100652cdc(param_1 + (param_2 & 0xffffffff) * 0xf0 + 0x588,*(undefined8 *)(lVar4 + 8));
  uVar1 = FUN_10046e2b4(uVar3,param_3);
  if (uVar1 < 2) {
    lVar4 = param_1 + (param_2 & 0xffffffff) * 0x130;
    *(uint *)(lVar4 + 0x222c) = *(uint *)(lVar4 + 0x222c) & 0xfffffffb;
  }
  else {
    FUN_1004e313c(auStack_50);
    FUN_1004e38ac(auStack_50,"%d");
    lVar4 = param_1 + (param_2 & 0xffffffff) * 0x130;
    (**(code **)(*(long *)(lVar4 + 0x21a8) + 0x138))(lVar4 + 0x21a8,auStack_50);
    *(uint *)(lVar4 + 0x222c) = *(uint *)(lVar4 + 0x222c) | 4;
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  iVar2 = FUN_10046e258(uVar3,param_3);
  if (iVar2 == *(int *)(param_1 + 0xd4)) {
    FUN_10009ccf8(param_1,param_2);
    *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  }
  return;
}




void FUN_10009ccf8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  uVar2 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e4ccccd,uVar2);
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
    FUN_10063f0f0(puVar5);
    *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3f000000,puVar5);
  FUN_10063eee4(uVar2,puVar5);
  uVar3 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3f800000,uVar3);
  FUN_10063eee4(puVar5,uVar3);
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0xf0 + 0x1848;
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar2);
  return;
}




undefined1 FUN_10009ce28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2fa8);
}




void thunk_FUN_1000994f0(void)

{
  FUN_1000994f0();
  return;
}




void FUN_10009ce38(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000994f0();
  operator_delete(pvVar1);
  return;
}




long * FUN_10009ce4c(long *param_1)

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
  undefined8 *puVar10;
  uint uVar11;
  undefined4 local_68 [2];
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_10009e728_101451108;
  *(undefined4 *)(puVar10 + 0x17) = 0xffff;
  puVar10[0x18] = 0;
  *(undefined4 *)(puVar10 + 0x19) = 0xffff;
  puVar10 = puVar10 + 0x1a;
  FUN_10064e264(puVar10);
  plVar1 = param_1 + 0x31;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4f;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6d;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x8b;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xa9;
  thunk_FUN_100655644(plVar5);
  plVar6 = param_1 + 0xd4;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0xfa;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_1 + 0x120);
  FUN_10064e264(param_1 + 0x122);
  plVar8 = param_1 + 0x139;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x157;
  thunk_FUN_100652c08(plVar9);
  param_1[0x175] = 0x43c80000;
  *(byte *)(param_1 + 0x176) = *(byte *)(param_1 + 0x176) & 0xe0 | 0x10;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(puVar10,plVar2,1);
  FUN_100642bd8(puVar10,plVar3,1);
  FUN_100642bd8(puVar10,plVar8,1);
  FUN_100642bd8(puVar10,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar6,1);
  FUN_100655930(plVar5,plVar7,1);
  FUN_100652ca4(plVar1,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar1,"icon_item_empty");
  FUN_100652ca4(plVar2,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar2,"icon_item_empty");
  if ((*(uint *)((long)param_1 + 0x2fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar3,"hud_store_item_node_regular");
  FUN_100652cac(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_slash_line");
  uVar11 = *(uint *)((long)param_1 + 0xa4c);
  if ((uVar11 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xa4c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x3300;
    FUN_1000200a0(plVar8);
    uVar11 = *(uint *)((long)param_1 + 0xa4c);
  }
  *(uint *)((long)param_1 + 0xa4c) =
       uVar11 & 0xfffffff8 |
       uVar11 & 3 | ((*(byte *)(param_1 + 0x176) >> 2 ^ 0xffffffff) >> 2 & 1) << 2;
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_slash_line");
  uVar11 = *(uint *)((long)param_1 + 0xb3c);
  if ((uVar11 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xb3c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x3300;
    FUN_1000200a0(plVar9);
    uVar11 = *(uint *)((long)param_1 + 0xb3c);
  }
  *(uint *)((long)param_1 + 0xb3c) =
       uVar11 & 0xfffffff8 |
       uVar11 & 3 | ((*(byte *)(param_1 + 0x176) >> 2 ^ 0xffffffff) >> 2 & 1) << 2;
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) | 1;
  FUN_100652ca4(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar4,"hud_store_item_node_owned");
  *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb;
  uVar11 = *(uint *)((long)param_1 + 0x724);
  if ((uVar11 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x724) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x7280;
    FUN_1000200a0(plVar6);
  }
  local_68[0] = 0xffb0b0b0;
  FUN_100651460(plVar7,local_68);
  uVar11 = *(uint *)((long)param_1 + 0x854);
  if ((uVar11 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x854) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x7280;
    FUN_1000200a0(plVar7);
  }
  FUN_10009d210(param_1);
  FUN_10009d64c(param_1);
  return param_1;
}




void FUN_10009d210(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  FUN_10064e47c((int)param_1[0x175],0x43480000);
  plVar1 = param_1 + 0x1a;
  FUN_10064e47c(0x43480000,0x43480000,plVar1);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x24) == (float)DAT_101873a40) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x124)) && !NAN(DAT_101873a40._4_4_))) {
    bVar4 = *(float *)((long)param_1 + 0x124) == DAT_101873a40._4_4_;
  }
  if (!bVar4) {
    param_1[0x24] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  FUN_10064e68c(0,0,plVar1,7);
  if ((*(float *)(param_1 + 0x3a) != 1.4) || (*(float *)((long)param_1 + 0x1d4) != 1.4)) {
    param_1[0x3a] = 0x3fb333333fb33333;
    FUN_1000200a0(param_1 + 0x31);
  }
  if ((*(float *)(param_1 + 0x58) != 1.4) || (*(float *)((long)param_1 + 0x2c4) != 1.4)) {
    param_1[0x58] = 0x3fb333333fb33333;
    FUN_1000200a0(param_1 + 0x4f);
  }
  if ((*(float *)(param_1 + 0x76) != 1.8319149) || (*(float *)((long)param_1 + 0x3b4) != 1.8319149))
  {
    param_1[0x76] = 0x3fea7c303fea7c30;
    FUN_1000200a0(param_1 + 0x6d);
  }
  plVar2 = param_1 + 0x139;
  if ((*(float *)(param_1 + 0x142) != 1.4) || (*(float *)((long)param_1 + 0xa14) != 1.4)) {
    param_1[0x142] = 0x3fb333333fb33333;
    FUN_1000200a0(plVar2);
  }
  plVar3 = param_1 + 0x157;
  if ((*(float *)(param_1 + 0x160) != 1.4) || (*(float *)((long)param_1 + 0xb04) != 1.4)) {
    param_1[0x160] = 0x3fb333333fb33333;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x94) != 1.4) || (*(float *)((long)param_1 + 0x4a4) != 1.4)) {
    param_1[0x94] = 0x3fb333333fb33333;
    FUN_1000200a0(param_1 + 0x8b);
  }
  *(uint *)((long)param_1 + 0x154) = *(uint *)((long)param_1 + 0x154) & 0xffffffbf;
  FUN_10064e5ec(0,0,param_1 + 0x31,8,plVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0x4f,8,plVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0x6d,8,plVar1,8);
  if ((*(float *)(param_1 + 0x142) != 2.0) || (*(float *)((long)param_1 + 0xa14) != 2.0)) {
    param_1[0x142] = 0x4000000040000000;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_1 + 0x160) != 2.0) || (*(float *)((long)param_1 + 0xb04) != 2.0)) {
    param_1[0x160] = 0x4000000040000000;
    FUN_1000200a0(plVar3);
  }
  FUN_10064e5ec(0,0,plVar2,8,plVar1,8);
  FUN_10064e5ec(0,0,plVar3,8,plVar1,8);
  FUN_10064e5ec(0x428c0000,0x42800000,param_1 + 0x8b,8,plVar1,8);
  plVar2 = param_1 + 0xd4;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0);
  if ((*(float *)(param_1 + 0xdd) != 1.4) || (*(float *)((long)param_1 + 0x6ec) != 1.4)) {
    param_1[0xdd] = 0x3fb333333fb33333;
    FUN_1000200a0(plVar2);
  }
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar6 = (float)FUN_10064e3cc(plVar1);
  FUN_100651708((fVar5 - fVar6) * 0.71428573 + -5.714286,plVar2,1);
  plVar3 = param_1 + 0xfa;
  FUN_100651038(plVar3,PTR_s_build___Fonts_Avenir_Medium_30_f_10184e2a8);
  if ((*(float *)(param_1 + 0x103) != 1.4) || (*(float *)((long)param_1 + 0x81c) != 1.4)) {
    param_1[0x103] = 0x3fb333333fb33333;
    FUN_1000200a0(plVar3);
  }
  FUN_10064e72c(0x40000000,plVar3,0,plVar2,2);
  FUN_10064e72c(0,plVar3,3,plVar2,3);
  param_1 = param_1 + 0xa9;
  FUN_1006557ec(param_1);
  FUN_10064e72c(0x41000000,param_1,3,plVar1,1);
  FUN_10064e72c(0,param_1,5,plVar1,5);
  return;
}




void FUN_10009d64c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  
  puVar4 = local_30;
  local_28[0] = 0xff606060;
  if (*(int *)(param_1 + 0xb8) == 1) {
    puVar4 = &DAT_10115a168;
  }
  else if ((*(byte *)(param_1 + 0xbb0) & 1) == 0) {
    local_30[0] = 0xff505050;
    puVar4 = local_30;
  }
  else {
    local_30[0] = 0xffa0a0a0;
  }
  FUN_100652dd4(param_1 + 0x368,puVar4,2);
  if (((*(byte *)(param_1 + 0xbb0) ^ 0xff) & 0x11) == 0) {
    FUN_100651460(param_1 + 0x6a0,&DAT_10115a168);
    local_30[0] = 0xffb0b0b0;
    FUN_100651460(param_1 + 2000,local_30);
    if ((*(uint *)(param_1 + 0x2fc) & 0x7f80) != 0) {
      uVar1 = *(uint *)(param_1 + 0x2fc) & 0xffff807f;
LAB_10009d734:
      *(uint *)(param_1 + 0x2fc) = uVar1;
      FUN_1000200a0(param_1 + 0x278);
    }
  }
  else {
    FUN_100651460(param_1 + 0x6a0,local_28);
    FUN_100651460(param_1 + 2000,local_28);
    uVar1 = *(uint *)(param_1 + 0x2fc);
    if ((uVar1 & 0x7f80) != 0x6600) {
      uVar1 = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x6600;
      goto LAB_10009d734;
    }
  }
  uVar1 = (*(byte *)(param_1 + 0xbb0) & 0x10) >> 2 ^ 4;
  *(uint *)(param_1 + 0xa4c) = *(uint *)(param_1 + 0xa4c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0xb3c) = *(uint *)(param_1 + 0xb3c) & 0xfffffffb | uVar1;
  if ((*(byte *)(param_1 + 0xbb0) >> 4 & 1) == 0) {
    lVar3 = FUN_1004e0150("MARKET_GOLD_BUNDLE_BUY_UNAVAILABLE",0);
  }
  else {
    lVar3 = param_1 + 0x900;
  }
  FUN_1006513c0(param_1 + 2000,lVar3);
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 == 2) {
LAB_10009d7b4:
    FUN_100652cdc(param_1 + 0x368,"hud_store_item_node_regular");
    fVar8 = *(float *)(param_1 + 0x3b0);
    uVar6 = 0x3fea7c30;
    fVar7 = 1.8319149;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) goto LAB_10009d854;
      goto LAB_10009d7b4;
    }
    FUN_100652cdc(param_1 + 0x368,"hud_store_item_node_highlighted");
    fVar8 = *(float *)(param_1 + 0x3b0);
    uVar6 = 0x3fb33333;
    fVar7 = 1.4;
  }
  if ((fVar8 != fVar7) || (*(float *)(param_1 + 0x3b4) != fVar7)) {
    *(ulong *)(param_1 + 0x3b0) = CONCAT44(uVar6,uVar6);
    FUN_1000200a0(param_1 + 0x368);
  }
  FUN_10064e5ec(0,0,param_1 + 0x368,8,param_1 + 0xd0,8);
LAB_10009d854:
  if ((*(byte *)(param_1 + 0xbb0) >> 3 & 1) == 0) {
    if (*(int *)(param_1 + 0xbac) < 1) {
      *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) & 0xfffffffb;
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x4dc);
    *(uint *)(param_1 + 0x4dc) = uVar1 | 4;
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x4dc) = uVar1 | 0x7f84;
      FUN_1000200a0(param_1 + 0x458);
    }
    pcVar5 = "hud_store_item_node_parent_owned";
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x4dc);
    *(uint *)(param_1 + 0x4dc) = uVar1 | 4;
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x4dc) = uVar1 | 0x7f84;
      FUN_1000200a0(param_1 + 0x458);
    }
    pcVar5 = "hud_store_item_node_owned";
  }
  FUN_100652cdc(param_1 + 0x458,pcVar5);
  return;
}




long * thunk_FUN_10009ce4c(long *param_1)

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
  undefined8 *puVar10;
  uint uVar11;
  undefined4 auStack_68 [2];
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_10009e728_101451108;
  *(undefined4 *)(puVar10 + 0x17) = 0xffff;
  puVar10[0x18] = 0;
  *(undefined4 *)(puVar10 + 0x19) = 0xffff;
  puVar10 = puVar10 + 0x1a;
  FUN_10064e264(puVar10);
  plVar1 = param_1 + 0x31;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4f;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6d;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x8b;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xa9;
  thunk_FUN_100655644(plVar5);
  plVar6 = param_1 + 0xd4;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0xfa;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_1 + 0x120);
  FUN_10064e264(param_1 + 0x122);
  plVar8 = param_1 + 0x139;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x157;
  thunk_FUN_100652c08(plVar9);
  param_1[0x175] = 0x43c80000;
  *(byte *)(param_1 + 0x176) = *(byte *)(param_1 + 0x176) & 0xe0 | 0x10;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(puVar10,plVar2,1);
  FUN_100642bd8(puVar10,plVar3,1);
  FUN_100642bd8(puVar10,plVar8,1);
  FUN_100642bd8(puVar10,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar6,1);
  FUN_100655930(plVar5,plVar7,1);
  FUN_100652ca4(plVar1,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar1,"icon_item_empty");
  FUN_100652ca4(plVar2,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar2,"icon_item_empty");
  if ((*(uint *)((long)param_1 + 0x2fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar3,"hud_store_item_node_regular");
  FUN_100652cac(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_slash_line");
  uVar11 = *(uint *)((long)param_1 + 0xa4c);
  if ((uVar11 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xa4c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x3300;
    FUN_1000200a0(plVar8);
    uVar11 = *(uint *)((long)param_1 + 0xa4c);
  }
  *(uint *)((long)param_1 + 0xa4c) =
       uVar11 & 0xfffffff8 |
       uVar11 & 3 | ((*(byte *)(param_1 + 0x176) >> 2 ^ 0xffffffff) >> 2 & 1) << 2;
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_slash_line");
  uVar11 = *(uint *)((long)param_1 + 0xb3c);
  if ((uVar11 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xb3c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x3300;
    FUN_1000200a0(plVar9);
    uVar11 = *(uint *)((long)param_1 + 0xb3c);
  }
  *(uint *)((long)param_1 + 0xb3c) =
       uVar11 & 0xfffffff8 |
       uVar11 & 3 | ((*(byte *)(param_1 + 0x176) >> 2 ^ 0xffffffff) >> 2 & 1) << 2;
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) | 1;
  FUN_100652ca4(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar4,"hud_store_item_node_owned");
  *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb;
  uVar11 = *(uint *)((long)param_1 + 0x724);
  if ((uVar11 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x724) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x7280;
    FUN_1000200a0(plVar6);
  }
  auStack_68[0] = 0xffb0b0b0;
  FUN_100651460(plVar7,auStack_68);
  uVar11 = *(uint *)((long)param_1 + 0x854);
  if ((uVar11 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x854) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x7280;
    FUN_1000200a0(plVar7);
  }
  FUN_10009d210(param_1);
  FUN_10009d64c(param_1);
  return param_1;
}




void FUN_10009d908(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xba8) = param_1;
  return;
}




void FUN_10009d910(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0xb8) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xb8) = param_2;
  FUN_10009d64c();
  return;
}




void FUN_10009d928(long param_1,byte param_2)

{
  if ((((*(byte *)(param_1 + 0xbb0) & 1) == 0 ^ param_2) & 1) != 0) {
    return;
  }
  *(byte *)(param_1 + 0xbb0) = *(byte *)(param_1 + 0xbb0) & 0xfe | param_2;
  FUN_10009d64c();
  return;
}




byte FUN_10009d950(long param_1)

{
  return *(byte *)(param_1 + 0xbb0) & 1;
}




void FUN_10009d95c(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0xbb0) = *(byte *)(param_1 + 0xbb0) & 0xfd | bVar1;
  return;
}




byte FUN_10009d97c(long param_1)

{
  return *(byte *)(param_1 + 0xbb0) >> 1 & 1;
}




void FUN_10009d988(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 4;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0xbb0) = *(byte *)(param_1 + 0xbb0) & 0xfb | bVar1;
  return;
}




byte FUN_10009d9a8(long param_1)

{
  return *(byte *)(param_1 + 0xbb0) >> 2 & 1;
}




undefined8 FUN_10009d9b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}




undefined4 FUN_10009d9bc(long param_1)

{
  return *(undefined4 *)(param_1 + 200);
}




void FUN_10009d9c4(long param_1)

{
  FUN_1004e38ac(param_1 + 0x900,"%d");
  FUN_1006513c0(param_1 + 2000,param_1 + 0x900);
  return;
}




void FUN_10009da08(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 8;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0xbb0) = *(byte *)(param_1 + 0xbb0) & 0xf7 | bVar1;
  FUN_10009d64c();
  return;
}




byte FUN_10009da28(long param_1)

{
  return *(byte *)(param_1 + 0xbb0) >> 3 & 1;
}




void FUN_10009da34(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xbac) = param_2;
  FUN_10009d64c();
  return;
}




void FUN_10009da3c(long param_1,int param_2)

{
  *(int *)(param_1 + 0xbac) = *(int *)(param_1 + 0xbac) + param_2;
  FUN_10009d64c();
  return;
}




void FUN_10009da4c(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  if (param_2 == 0) {
    if ((uVar1 & 0x7f80) == 0x7f80) {
      return;
    }
    uVar1 = uVar1 | 0x7f80;
  }
  else {
    if ((uVar1 & 0x7f80) == 0x2600) {
      return;
    }
    uVar1 = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x2600;
  }
  *(uint *)(param_1 + 0x84) = uVar1;
  FUN_1000200a0();
  return;
}




void FUN_10009da8c(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x10),0);
  FUN_1006513c0(param_1 + 0x6a0,uVar3);
  FUN_1004e38ac(param_1 + 0x900,"%d");
  FUN_1006513c0(param_1 + 2000,param_1 + 0x900);
  FUN_100652cdc(param_1 + 0x188,*(undefined8 *)(param_2 + 8));
  *(long *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 200) = param_3;
  FUN_1004d2698(auStack_88,"hud_store_item_ref_num_%d_icon");
  FUN_1004d2698(auStack_c8,"hud_store_item_ref_num_%d");
  uVar1 = FUN_1004d2524(auStack_88);
  uVar2 = FUN_100015208(auStack_88,uVar1,0x1234);
  *(uint *)(param_1 + 0x20c) =
       *(uint *)(param_1 + 0x20c) & 0x80000000 |
       *(uint *)(param_1 + 0x20c) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  uVar1 = FUN_1004d2524(auStack_c8);
  uVar2 = FUN_100015208(auStack_c8,uVar1,0x1234);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  FUN_10009d210(param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10009dbcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = FUN_10001f424();
  local_48 = CONCAT44((float)((ulong)uVar3 >> 0x20) * 1.4,(float)uVar3 * 1.4);
  FUN_10064025c(uVar1,&local_48);
  FUN_10063f0e8(0x3c23d70a,uVar1);
  uVar2 = FUN_10001f424();
  local_48 = uVar3;
  FUN_10064025c(uVar2,&local_48);
  FUN_10063f0e8(0x3e800000,uVar2);
  FUN_10063f130(uVar2,FUN_10006bf9c);
  FUN_100642b7c(param_1 + 0xd0,uVar1);
  return;
}




void FUN_10009dc78(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0x10;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0xbb0) = *(byte *)(param_1 + 0xbb0) & 0xef | bVar1;
  FUN_10009d64c();
  return;
}




byte FUN_10009dc98(long param_1)

{
  return *(byte *)(param_1 + 0xbb0) >> 4 & 1;
}




long * FUN_10009dca4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *local_60;
  code *pcStack_58;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_FUN_101451250;
  puVar7 = puVar7 + 0x18;
  FUN_10064e264(puVar7);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6b;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x89;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xa7;
  FUN_1006533a4(plVar5);
  *(undefined4 *)(param_1 + 199) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x63c) = 0xffff;
  param_1[200] = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(puVar7,plVar2,1);
  FUN_100642bd8(puVar7,plVar3,1);
  FUN_100642bd8(puVar7,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100652ca4(plVar1,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar1,"icon_item_empty");
  FUN_100652ca4(plVar2,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar2,"icon_item_empty");
  if ((*(uint *)((long)param_1 + 0x2ec) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2ec) = *(uint *)((long)param_1 + 0x2ec) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar3,"hud_store_item_node_regular");
  FUN_100652ca4(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar4,"hud_store_item_node_owned");
  *(uint *)((long)param_1 + 0x4cc) = *(uint *)((long)param_1 + 0x4cc) & 0xfffffffb;
  FUN_100652ca4(plVar5,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar5,"icon_item_empty");
  FUN_100653464(plVar5,FUN_10009df00,param_1);
  uVar6 = *(uint *)((long)param_1 + 0x5bc);
  if ((uVar6 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x5bc) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5280;
    FUN_1000200a0(plVar5);
  }
  pcStack_58 = thunk_FUN_10009e4dc;
  local_60 = param_1;
  FUN_100643618(0x3d4ccccd,&local_60,0,1);
  FUN_10009dfac(param_1);
  FUN_10009e204(param_1);
  return param_1;
}




void FUN_10009df00(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x638),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"icon_item_empty");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_10009dfac(long param_1)

{
  long lVar1;
  bool bVar2;
  
  FUN_10064e47c(0x43200000,0x43200000);
  lVar1 = param_1 + 0xc0;
  FUN_10064e47c(0x43200000,0x43200000,lVar1);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x110) == (float)DAT_101873a40) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x114)) && !NAN(DAT_101873a40._4_4_))) {
    bVar2 = *(float *)(param_1 + 0x114) == DAT_101873a40._4_4_;
  }
  if (!bVar2) {
    *(ulong *)(param_1 + 0x110) = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(lVar1);
  }
  FUN_10064e68c(0,0,lVar1,8);
  if ((*(float *)(param_1 + 0x1c0) != 1.14) || (*(float *)(param_1 + 0x1c4) != 1.14)) {
    *(undefined8 *)(param_1 + 0x1c0) = 0x3f91eb853f91eb85;
    FUN_1000200a0(param_1 + 0x178);
  }
  if ((*(float *)(param_1 + 0x2b0) != 1.14) || (*(float *)(param_1 + 0x2b4) != 1.14)) {
    *(undefined8 *)(param_1 + 0x2b0) = 0x3f91eb853f91eb85;
    FUN_1000200a0(param_1 + 0x268);
  }
  if ((*(float *)(param_1 + 0x3a0) != 1.4917021) || (*(float *)(param_1 + 0x3a4) != 1.4917021)) {
    *(undefined8 *)(param_1 + 0x3a0) = 0x3fbef0183fbef018;
    FUN_1000200a0(param_1 + 0x358);
  }
  if ((*(float *)(param_1 + 0x580) != 1.14) || (*(float *)(param_1 + 0x584) != 1.14)) {
    *(undefined8 *)(param_1 + 0x580) = 0x3f91eb853f91eb85;
    FUN_1000200a0(param_1 + 0x538);
  }
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffffbf;
  FUN_10064e5ec(0,0,param_1 + 0x178,8,lVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0x268,8,lVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0x358,8,lVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0x538,8,lVar1,8);
  if ((*(float *)(param_1 + 0x490) != 2.28) || (*(float *)(param_1 + 0x494) != 2.28)) {
    *(undefined8 *)(param_1 + 0x490) = 0x4011eb854011eb85;
    FUN_1000200a0(param_1 + 0x448);
  }
  FUN_10064e5ec(0x42600000,0x424ccccc,param_1 + 0x448,8,lVar1,8);
  return;
}




void FUN_10009e204(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_28 [2];
  
  lVar1 = param_1 + 0x358;
  if (*(int *)(param_1 + 0xb8) == 1) {
    puVar4 = &DAT_10115a168;
  }
  else {
    local_28[0] = 0xffa0a0a0;
    puVar4 = local_28;
  }
  FUN_100652dd4(lVar1,puVar4,2);
  cVar5 = *(char *)(param_1 + 0x648);
  uVar6 = 0xff;
  if (cVar5 != '\0') {
    uVar6 = 0xb2;
  }
  uVar2 = *(uint *)(param_1 + 0x1fc);
  if (uVar6 != (uVar2 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x1fc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar6 << 7;
    FUN_1000200a0(param_1 + 0x178);
    cVar5 = *(char *)(param_1 + 0x648);
  }
  uVar6 = 0;
  if (cVar5 != '\0') {
    uVar6 = 0x4c;
  }
  uVar2 = *(uint *)(param_1 + 0x2ec);
  if (uVar6 != (uVar2 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x2ec) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar6 << 7;
    FUN_1000200a0(param_1 + 0x268);
  }
  iVar3 = *(int *)(param_1 + 0xb8);
  if (iVar3 == 2) {
LAB_10009e2d0:
    FUN_100652cdc(lVar1,"hud_store_item_node_regular");
    fVar9 = *(float *)(param_1 + 0x3a0);
    uVar7 = 0x3fbef018;
    fVar8 = 1.4917021;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 0) goto LAB_10009e368;
      goto LAB_10009e2d0;
    }
    FUN_100652cdc(lVar1,"hud_store_item_node_highlighted");
    fVar9 = *(float *)(param_1 + 0x3a0);
    uVar7 = 0x3f91eb85;
    fVar8 = 1.14;
  }
  if ((fVar9 != fVar8) || (*(float *)(param_1 + 0x3a4) != fVar8)) {
    *(ulong *)(param_1 + 0x3a0) = CONCAT44(uVar7,uVar7);
    FUN_1000200a0(lVar1);
  }
  FUN_10064e5ec(0,0,lVar1,8,param_1 + 0xc0,8);
LAB_10009e368:
  if (*(char *)(param_1 + 0x648) == '\0') {
    *(uint *)(param_1 + 0x4cc) = *(uint *)(param_1 + 0x4cc) & 0xfffffffb;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x4cc);
    *(uint *)(param_1 + 0x4cc) = uVar6 | 4;
    if ((~uVar6 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x4cc) = uVar6 | 0x7f84;
      FUN_1000200a0(param_1 + 0x448);
    }
    FUN_100652cdc(param_1 + 0x448,"hud_store_item_node_owned");
  }
  return;
}




long * thunk_FUN_10009dca4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plStack_60;
  code *pcStack_58;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_FUN_101451250;
  puVar7 = puVar7 + 0x18;
  FUN_10064e264(puVar7);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6b;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x89;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xa7;
  FUN_1006533a4(plVar5);
  *(undefined4 *)(param_1 + 199) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x63c) = 0xffff;
  param_1[200] = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(puVar7,plVar2,1);
  FUN_100642bd8(puVar7,plVar3,1);
  FUN_100642bd8(puVar7,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100652ca4(plVar1,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar1,"icon_item_empty");
  FUN_100652ca4(plVar2,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar2,"icon_item_empty");
  if ((*(uint *)((long)param_1 + 0x2ec) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2ec) = *(uint *)((long)param_1 + 0x2ec) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar3,"hud_store_item_node_regular");
  FUN_100652ca4(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar4,"hud_store_item_node_owned");
  *(uint *)((long)param_1 + 0x4cc) = *(uint *)((long)param_1 + 0x4cc) & 0xfffffffb;
  FUN_100652ca4(plVar5,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar5,"icon_item_empty");
  FUN_100653464(plVar5,FUN_10009df00,param_1);
  uVar6 = *(uint *)((long)param_1 + 0x5bc);
  if ((uVar6 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x5bc) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5280;
    FUN_1000200a0(plVar5);
  }
  pcStack_58 = thunk_FUN_10009e4dc;
  plStack_60 = param_1;
  FUN_100643618(0x3d4ccccd,&plStack_60,0,1);
  FUN_10009dfac(param_1);
  FUN_10009e204(param_1);
  return param_1;
}




void FUN_10009e3d4(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_100652cdc(param_1 + 0x178,*(undefined8 *)(param_2 + 8));
  *(undefined4 *)(param_1 + 0x63c) = param_3;
  FUN_1004d2698(auStack_78,"hud_store_recommended_item_ref_num_%d_icon");
  FUN_1004d2698(auStack_b8,"hud_store_recommended_item_ref_num_%d");
  uVar1 = FUN_1004d2524(auStack_78);
  uVar2 = FUN_100015208(auStack_78,uVar1,0x1234);
  *(uint *)(param_1 + 0x1fc) =
       *(uint *)(param_1 + 0x1fc) & 0x80000000 |
       *(uint *)(param_1 + 0x1fc) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  uVar1 = FUN_1004d2524(auStack_b8);
  uVar2 = FUN_100015208(auStack_b8,uVar1,0x1234);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  FUN_10009dfac(param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10009e4c0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x648) = param_2;
  FUN_10009e204();
  return;
}




void FUN_10009e4c8(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x640) = param_2;
  *(undefined4 *)(param_1 + 0x644) = param_3;
  return;
}




void FUN_10009e4d4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  FUN_10009e204();
  return;
}




void FUN_10009e4dc(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  *(uint *)(param_1 + 0x5bc) =
       *(uint *)(param_1 + 0x5bc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x5bc) & 3 | (uint)(*(char *)(param_1 + 0x648) == '\0') << 2;
  fVar2 = 0.0;
  if (*(char *)(param_1 + 0x648) == '\0') {
    FUN_10034ee90();
    lVar1 = FUN_100345d90();
    if (lVar1 == 0) {
      return;
    }
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x640));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x644));
    fVar2 = (float)NEON_fminnm((fVar2 - *(float *)(*(long *)(lVar1 + 0x40) + 800)) / fVar3,
                               0x3f800000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  *(float *)(param_1 + 0x638) = fVar2;
  return;
}




void thunk_FUN_10009e728(void)

{
  FUN_10009e728();
  return;
}




void FUN_10009e55c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10009e728();
  operator_delete(pvVar1);
  return;
}




void FUN_10009e570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101451250;
  param_1[0xa7] = &PTR_FUN_1014a7108;
  param_1[0xbe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc1);
  FUN_10064e2bc(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_1014a7108;
  param_1[0xa0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa3);
  FUN_10064e2bc(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10009e648(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101451250;
  param_1[0xa7] = &PTR_FUN_1014a7108;
  param_1[0xbe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc1);
  FUN_10064e2bc(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_1014a7108;
  param_1[0xa0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa3);
  FUN_10064e2bc(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_10009e4dc(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  *(uint *)(param_1 + 0x5bc) =
       *(uint *)(param_1 + 0x5bc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x5bc) & 3 | (uint)(*(char *)(param_1 + 0x648) == '\0') << 2;
  fVar2 = 0.0;
  if (*(char *)(param_1 + 0x648) == '\0') {
    FUN_10034ee90();
    lVar1 = FUN_100345d90();
    if (lVar1 == 0) {
      return;
    }
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x640));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x644));
    fVar2 = (float)NEON_fminnm((fVar2 - *(float *)(*(long *)(lVar1 + 0x40) + 800)) / fVar3,
                               0x3f800000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  *(float *)(param_1 + 0x638) = fVar2;
  return;
}




void FUN_10009e728(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10009e728_101451108;
  param_1[0x157] = &PTR_FUN_1014a7108;
  param_1[0x16e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x171);
  FUN_10064e2bc(param_1 + 0x157);
  param_1[0x139] = &PTR_FUN_1014a7108;
  param_1[0x150] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x153);
  FUN_10064e2bc(param_1 + 0x139);
  thunk_FUN_10064e2bc(param_1 + 0x122);
  if ((void *)param_1[0x121] != (void *)0x0) {
    operator_delete__((void *)param_1[0x121]);
    param_1[0x121] = 0;
    param_1[0x120] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xfa);
  thunk_FUN_100651068(param_1 + 0xd4);
  param_1[0xa9] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xc0);
  FUN_10064e2bc(param_1 + 0xa9);
  param_1[0x8b] = &PTR_FUN_1014a7108;
  param_1[0xa2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa5);
  FUN_10064e2bc(param_1 + 0x8b);
  param_1[0x6d] = &PTR_FUN_1014a7108;
  param_1[0x84] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x87);
  FUN_10064e2bc(param_1 + 0x6d);
  param_1[0x4f] = &PTR_FUN_1014a7108;
  param_1[0x66] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x69);
  FUN_10064e2bc(param_1 + 0x4f);
  param_1[0x31] = &PTR_FUN_1014a7108;
  param_1[0x48] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4b);
  FUN_10064e2bc(param_1 + 0x31);
  thunk_FUN_10064e2bc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_10009e86c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 local_80;
  undefined4 local_78 [2];
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_1000993f0_101450b90;
  puVar10[0x17] = 0;
  puVar10 = puVar10 + 0x18;
  FUN_100269de4(puVar10);
  plVar1 = param_1 + 0x31;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x57;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0x8b;
  FUN_10053077c(plVar3,0);
  plVar4 = param_1 + 0x132;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x158;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x17e;
  thunk_FUN_100655644(plVar6);
  lVar12 = 0xd48;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar12);
    lVar12 = lVar12 + 0x130;
  } while (lVar12 != 0x1338);
  lVar12 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar12 + 0x1338);
    lVar12 = lVar12 + 0x130;
  } while (lVar12 != 0x5f0);
  lVar12 = 0;
  do {
    FUN_1004e313c((long)param_1 + lVar12 + 0x1928);
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x50);
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(puVar10,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_1005308f8(plVar3,plVar4,1);
  FUN_1005308f8(plVar3,plVar6,1);
  FUN_1005308f8(plVar3,plVar5,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e280);
  FUN_1006513c0(plVar1,&DAT_101d91650);
  uVar9 = *(uint *)((long)param_1 + 0x20c);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x20c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  FUN_100654488(plVar2,1);
  *(uint *)((long)param_1 + 0x33c) = *(uint *)((long)param_1 + 0x33c) | 0x10;
  FUN_100530be0(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530b0c(0x42000000,0,plVar3);
  uVar9 = *(uint *)((long)param_1 + 0xa14);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xa14) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
  }
  local_78[0] = 0xffffe682;
  FUN_100651460(plVar5,local_78);
  uVar9 = *(uint *)((long)param_1 + 0xb44);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xb44) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  lVar11 = 0;
  lVar12 = 0x1338;
  do {
    lVar8 = (long)param_1 + lVar12;
    FUN_100651038(lVar8,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
    uVar9 = *(uint *)((long)param_1 + lVar11 + 0x13bc);
    if ((uVar9 & 0x7f80) != 0x6600) {
      *(uint *)((long)param_1 + lVar11 + 0x13bc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
      FUN_1000200a0(lVar8);
    }
    local_80 = 0x3f80000000000000;
    (**(code **)(*(long *)((long)param_1 + lVar12) + 0x28))(lVar8,&local_80);
    lVar7 = (long)param_1 + lVar11 + 0xd48;
    FUN_100651038(lVar7,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
    uVar9 = *(uint *)((long)param_1 + lVar11 + 0xdcc);
    if ((uVar9 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + lVar11 + 0xdcc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x4c80;
      FUN_1000200a0(lVar7);
    }
    FUN_100655930(plVar6,lVar7,1);
    FUN_100655930(plVar6,lVar8,1);
    lVar12 = lVar12 + 0x130;
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0x5f0);
  return param_1;
}




long * thunk_FUN_10009e86c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_1000993f0_101450b90;
  puVar10[0x17] = 0;
  puVar10 = puVar10 + 0x18;
  FUN_100269de4(puVar10);
  plVar1 = param_1 + 0x31;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x57;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0x8b;
  FUN_10053077c(plVar3,0);
  plVar4 = param_1 + 0x132;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x158;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x17e;
  thunk_FUN_100655644(plVar6);
  lVar12 = 0xd48;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar12);
    lVar12 = lVar12 + 0x130;
  } while (lVar12 != 0x1338);
  lVar12 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar12 + 0x1338);
    lVar12 = lVar12 + 0x130;
  } while (lVar12 != 0x5f0);
  lVar12 = 0;
  do {
    FUN_1004e313c((long)param_1 + lVar12 + 0x1928);
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x50);
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(puVar10,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_1005308f8(plVar3,plVar4,1);
  FUN_1005308f8(plVar3,plVar6,1);
  FUN_1005308f8(plVar3,plVar5,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e280);
  FUN_1006513c0(plVar1,&DAT_101d91650);
  uVar9 = *(uint *)((long)param_1 + 0x20c);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x20c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  FUN_100654488(plVar2,1);
  *(uint *)((long)param_1 + 0x33c) = *(uint *)((long)param_1 + 0x33c) | 0x10;
  FUN_100530be0(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530b0c(0x42000000,0,plVar3);
  uVar9 = *(uint *)((long)param_1 + 0xa14);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xa14) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
  }
  auStack_78[0] = 0xffffe682;
  FUN_100651460(plVar5,auStack_78);
  uVar9 = *(uint *)((long)param_1 + 0xb44);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xb44) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  lVar11 = 0;
  lVar12 = 0x1338;
  do {
    lVar8 = (long)param_1 + lVar12;
    FUN_100651038(lVar8,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
    uVar9 = *(uint *)((long)param_1 + lVar11 + 0x13bc);
    if ((uVar9 & 0x7f80) != 0x6600) {
      *(uint *)((long)param_1 + lVar11 + 0x13bc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
      FUN_1000200a0(lVar8);
    }
    uStack_80 = 0x3f80000000000000;
    (**(code **)(*(long *)((long)param_1 + lVar12) + 0x28))(lVar8,&uStack_80);
    lVar7 = (long)param_1 + lVar11 + 0xd48;
    FUN_100651038(lVar7,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
    uVar9 = *(uint *)((long)param_1 + lVar11 + 0xdcc);
    if ((uVar9 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + lVar11 + 0xdcc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x4c80;
      FUN_1000200a0(lVar7);
    }
    FUN_100655930(plVar6,lVar7,1);
    FUN_100655930(plVar6,lVar8,1);
    lVar12 = lVar12 + 0x130;
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0x5f0);
  return param_1;
}




void FUN_10009ebec(long param_1)

{
  FUN_100269e20(param_1 + 0xc0);
  return;
}




void FUN_10009ebf4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  uVar8 = (**(code **)(*param_1 + 0x48))();
  plVar1 = param_1 + 0x31;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x3a) == 1.25) &&
     (bVar5 = false, !NAN(*(float *)((long)param_1 + 0x1d4)))) {
    bVar5 = *(float *)((long)param_1 + 0x1d4) == 1.25;
  }
  if (!bVar5) {
    lVar9 = NEON_fmov(0x3fa00000,4);
    param_1[0x3a] = lVar9;
    FUN_1000200a0(plVar1);
  }
  FUN_100651708((float)uVar8 * 0.8,plVar1,1);
  FUN_10064e72c(0x41000000,plVar1,0,param_1,0);
  plVar2 = param_1 + 0x57;
  FUN_10064e72c(0x42000000,plVar2,0,plVar1,2);
  FUN_10064eb7c(plVar2,0,param_1,3);
  FUN_10064e47c(uVar8,plVar2);
  plVar1 = param_1 + 0x132;
  FUN_100651708(uVar8,plVar1,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  lVar9 = 0;
  fVar11 = 0.0;
  do {
    fVar10 = *(float *)((long)param_1 + lVar9 + 0x137c);
    bVar5 = false;
    if ((*(float *)((long)param_1 + lVar9 + 0x1378) == 0.0) &&
       (bVar5 = false, !NAN(fVar10) && !NAN(fVar11))) {
      bVar5 = fVar10 == fVar11;
    }
    if (!bVar5) {
      *(undefined4 *)((long)param_1 + lVar9 + 0x1378) = 0;
      *(float *)((long)param_1 + lVar9 + 0x137c) = fVar11;
      FUN_1000200a0((long)param_1 + lVar9 + 0x1338);
    }
    fVar10 = *(float *)((long)param_1 + lVar9 + 0xd8c);
    bVar5 = false;
    if ((*(float *)((long)param_1 + lVar9 + 0xd88) == 0.0) &&
       (bVar5 = false, !NAN(fVar10) && !NAN(fVar11))) {
      bVar5 = fVar10 == fVar11;
    }
    if (!bVar5) {
      *(undefined4 *)((long)param_1 + lVar9 + 0xd88) = 0;
      *(float *)((long)param_1 + lVar9 + 0xd8c) = fVar11;
      FUN_1000200a0((long)param_1 + lVar9 + 0xd48);
    }
    lVar3 = (long)param_1 + lVar9 + 0xd48;
    FUN_100651708(uVar8,lVar3,1);
    uVar7 = FUN_100655b6c((long)param_1 + lVar9 + 0xe18);
    iVar6 = FUN_1004e36c0(uVar7,&DAT_101d91650);
    if (iVar6 != 0) {
      (**(code **)(*(long *)((long)param_1 + lVar9 + 0xd48) + 0x48))(lVar3);
      fVar11 = fVar11 + 90.0 + *(float *)((long)param_1 + lVar9 + 0xd94) * fVar10;
    }
    lVar9 = lVar9 + 0x130;
  } while (lVar9 != 0x5f0);
  plVar4 = param_1 + 0x17e;
  FUN_1006557ec(plVar4);
  FUN_10064e72c(0x42bc0000,plVar4,0,plVar1,2);
  plVar1 = param_1 + 0x158;
  FUN_100651708(uVar8,plVar1,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_10064e72c(0x41c00000,plVar1,0,plVar4,2);
  plVar1 = param_1 + 0x8b;
  FUN_100530a48(plVar1,1);
  FUN_100530a94(plVar1);
  fVar11 = fVar10;
  FUN_10064e3cc(plVar2);
  FUN_100530adc(plVar1,0,fVar11 < fVar10);
  FUN_100530bb4(0x3ecccccd,0x3f800000,plVar1);
  FUN_100530c04(plVar1,fVar11 < fVar10);
  if (fVar11 < fVar10) {
    FUN_100531b88(plVar1);
  }
  bVar5 = false;
  if ((*(float *)((long)param_1 + 0x49c) == 0.0) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x93)))) {
    bVar5 = *(float *)(param_1 + 0x93) == 0.0;
  }
  if (!bVar5) {
    param_1[0x93] = 0;
    FUN_1000200a0(plVar1);
    return;
  }
  return;
}




void FUN_10009eee4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  FUN_10009eeec();
  return;
}




void FUN_10009eeec(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    FUN_1006513c0(param_1 + 0x188,&DAT_101d91650);
    FUN_1006513c0(param_1 + 0x990,&DAT_101d91650);
    FUN_1006513c0(param_1 + 0xac0,&DAT_101d91650);
    plVar5 = (long *)(param_1 + 0xd48);
    lVar4 = 5;
    do {
      (**(code **)(*plVar5 + 0x138))(plVar5,&DAT_101d91650);
      (**(code **)(plVar5[0xbe] + 0x138))(plVar5 + 0xbe,&DAT_101d91650);
      plVar5 = plVar5 + 0x26;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    goto LAB_10009f1a4;
  }
  uVar3 = FUN_1004e0150(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x10),0);
  FUN_1006513c0(param_1 + 0x188,uVar3);
  uVar3 = FUN_1004e0150(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18),0);
  thunk_FUN_1004e439c(auStack_70,uVar3);
  FUN_1000ef60c(auStack_70,*(undefined8 *)(param_1 + 0xb8));
  FUN_1000f2b7c(auStack_70);
  FUN_1006513c0(param_1 + 0x990,auStack_70);
  FUN_1004e313c(auStack_80);
  uVar3 = FUN_1004e0150(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20),0);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 == 0) {
    FUN_1000153b4(auStack_80,&DAT_101d91650);
  }
  else {
    uVar3 = FUN_1004e0150("GENERIC_TIP_LEAD",0);
    FUN_1000153b4(auStack_80,uVar3);
    uVar3 = FUN_1004e0150(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20),0);
    FUN_1004e372c(auStack_80,uVar3);
  }
  FUN_1006513c0(param_1 + 0xac0,auStack_80);
  plVar5 = *(long **)(*(long *)(param_1 + 0xb8) + 0x48);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    uVar6 = 0;
LAB_10009f140:
    plVar5 = (long *)(param_1 + uVar6 * 0x130 + 0xd48);
    lVar4 = uVar6 - 5;
    do {
      (**(code **)(*plVar5 + 0x138))(plVar5,&DAT_101d91650);
      (**(code **)(plVar5[0xbe] + 0x138))(plVar5 + 0xbe,&DAT_101d91650);
      plVar5 = plVar5 + 0x26;
      bVar1 = lVar4 != -1;
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
  else {
    lVar7 = param_1 + 0x1928;
    plVar8 = (long *)(param_1 + 0xd48);
    uVar9 = 0;
    do {
      fVar10 = *(float *)(lVar4 + 4);
      if ((*(float *)(lVar4 + 4) <= 0.0) && (fVar10 = 0.0, 0.0 < *(float *)(lVar4 + 8))) {
        fVar10 = *(float *)(lVar4 + 8);
      }
      FUN_1000ee590(fVar10,*(undefined4 *)(lVar4 + 0xc),lVar7,0);
      uVar3 = FUN_1000eff40(*(undefined4 *)*plVar5);
      (**(code **)(*plVar8 + 0x138))(plVar8,uVar3);
      FUN_1004e3120(auStack_90,"+");
      uVar3 = FUN_1004e372c(auStack_90,lVar7);
      (**(code **)(plVar8[0xbe] + 0x138))(plVar8 + 0xbe,uVar3);
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
      uVar6 = uVar9 + 1;
      lVar4 = plVar5[1];
      if (lVar4 == 0) break;
      lVar7 = lVar7 + 0x10;
      plVar8 = plVar8 + 0x26;
      bVar1 = uVar9 < 4;
      uVar9 = uVar6;
      plVar5 = plVar5 + 1;
    } while (bVar1);
    if ((uint)uVar6 < 5) goto LAB_10009f140;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
LAB_10009f1a4:
  FUN_10009ebf4(param_1);
  return;
}




void FUN_10009f1cc(long param_1)

{
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_10009eeec();
  return;
}




long * FUN_10009f1d4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  plVar7 = param_1 + 0x4cad;
  plVar3 = param_1 + 0x4c6c;
  puVar8 = (undefined8 *)FUN_10064e20c();
  uVar9 = DAT_101dbd2f0;
  *(undefined4 *)(puVar8 + 0x18) = 0x7000000;
  puVar8[0x19] = uVar9;
  *puVar8 = &PTR_thunk_FUN_10009f880_101451398;
  puVar8[0x17] = &PTR_FUN_1014514f0;
  puVar8[0x1b] = 0;
  FUN_100657568();
  plVar1 = param_1 + 0x9e;
  FUN_100269de4(plVar1);
  lVar11 = 0x5b8;
  do {
    FUN_10064e264((long)param_1 + lVar11);
    lVar11 = lVar11 + 0xb8;
  } while (lVar11 != 0x7e0);
  lVar11 = 0x7e0;
  do {
    FUN_10053077c((long)param_1 + lVar11,0);
    lVar11 = lVar11 + 0x538;
  } while (lVar11 != 0x1788);
  *(undefined4 *)(param_1 + 0x321) = 0;
  lVar11 = 0x1920;
  lVar10 = 1;
  do {
    *(short *)((long)param_1 + lVar11) = (short)lVar10;
    lVar11 = lVar11 + 3000;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x30);
  param_1[0x4974] = 0x2f0000;
  plVar4 = param_1 + 0x4976;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x4994;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x49b5;
  param_1[0x49b4] = 0;
  param_1[0x49b3] = 0;
  param_1[0x49b2] = 0;
  lVar10 = 1;
  thunk_FUN_100181304(plVar6,1);
  FUN_100651ebc(plVar3);
  *plVar3 = (long)&PTR_FUN_1014a6f58;
  param_1[0x4c83] = (long)&PTR_FUN_1014a70c0;
  FUN_10064e264();
  FUN_1006421a8(plVar7);
  *plVar7 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  lVar11 = 0x26630;
  do {
    *(short *)((long)param_1 + lVar11) = (short)lVar10;
    lVar11 = lVar11 + 0x650;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 8);
  param_1[0x5316] = 0x70000;
  *(undefined4 *)(param_1 + 0x5318) = 0;
  *(undefined4 *)((long)param_1 + 0x298c4) = 0xffff;
  *(undefined4 *)(param_1 + 0x5319) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x298cc) = 7;
  *(undefined1 *)((long)param_1 + 0x298d4) = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f1] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2fa] = 0;
  param_1[0x2f9] = 0;
  param_1[0x2fc] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2fe] = 0;
  param_1[0x2fd] = 0;
  param_1[0x300] = 0;
  param_1[0x2ff] = 0;
  param_1[0x302] = 0;
  param_1[0x301] = 0;
  param_1[0x304] = 0;
  param_1[0x303] = 0;
  param_1[0x306] = 0;
  param_1[0x305] = 0;
  param_1[0x308] = 0;
  param_1[0x307] = 0;
  param_1[0x30a] = 0;
  param_1[0x309] = 0;
  param_1[0x30c] = 0;
  param_1[0x30b] = 0;
  param_1[0x30e] = 0;
  param_1[0x30d] = 0;
  param_1[0x310] = 0;
  param_1[0x30f] = 0;
  param_1[0x312] = 0;
  param_1[0x311] = 0;
  param_1[0x314] = 0;
  param_1[0x313] = 0;
  param_1[0x316] = 0;
  param_1[0x315] = 0;
  param_1[0x318] = 0;
  param_1[0x317] = 0;
  param_1[0x31a] = 0;
  param_1[0x319] = 0;
  param_1[0x31c] = 0;
  param_1[0x31b] = 0;
  param_1[0x31e] = 0;
  param_1[0x31d] = 0;
  param_1[800] = 0;
  param_1[799] = 0;
  param_1[0x4cc3] = 0;
  param_1[0x4cc2] = 0;
  param_1[0x4cc5] = 0;
  param_1[0x4cc4] = 0;
  param_1[0x4cbf] = 0;
  param_1[0x4cbe] = 0;
  param_1[0x4cc1] = 0;
  param_1[0x4cc0] = 0;
  FUN_10009f7a0(param_1);
  uVar9 = FUN_1003da398();
  FUN_1004e18bc(uVar9,param_1,0xb924e89d,FUN_10009f814,0);
  uVar9 = FUN_1003da398();
  FUN_1004e18bc(uVar9,param_1,0xe4cbad13,FUN_10009f840,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  local_80 = DAT_101dbd460;
  local_a8 = thunk_FUN_1000a1d70;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x9f,&local_a8);
  local_80 = DAT_101dbd48c;
  local_a8 = thunk_FUN_1000a1d70;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x9f,&local_a8);
  lVar10 = 0;
  lVar11 = 0x5b8;
  lVar12 = 0x190c;
  do {
    plVar7 = (long *)((long)param_1 + lVar11);
    FUN_100642bd8(plVar1,plVar7,1);
    lVar2 = (long)param_1 + lVar10 + 0x7e0;
    (**(code **)(*plVar7 + 0x78))(plVar7,lVar2,1);
    FUN_100530adc(lVar2,0,1);
    FUN_100530c04(lVar2,0);
    *(undefined8 *)((long)param_1 + lVar10 + 0xd00) = 0x41a0000042480000;
    *(undefined4 *)((long)param_1 + lVar10 + 0xd08) = 0x44bb8000;
    FUN_100530ad0(0,DAT_10184e134,lVar2);
    *(undefined4 *)((long)param_1 + lVar12) = 0;
    lVar11 = lVar11 + 0xb8;
    lVar10 = lVar10 + 0x538;
    lVar12 = lVar12 + 4;
  } while (lVar11 != 0x7e0);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,param_1 + 0x4c96,1);
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x49af) = *(byte *)(param_1 + 0x49af) | 2;
  FUN_1006575f4(puVar8 + 0x1c,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  *(uint *)((long)param_1 + 0x265ec) = *(uint *)((long)param_1 + 0x265ec) & 0xfffffffb;
  uVar9 = FUN_1004e0150("HUD_CHOOSE_A_BUILD_BUTTON",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x447a0000,plVar6,0,uVar9,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_1000a1e08;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x49b6,&local_a8);
  *(uint *)((long)param_1 + 0x263e4) = *(uint *)((long)param_1 + 0x263e4) & 0xfffffffb;
  FUN_100651f8c(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652928(plVar3,"generic_gradient_horizontal",1,0,0,"white_background",0,0,0,
                "generic_gradient_horizontal",0);
  FUN_100491520(0xffff);
  return param_1;
}




void FUN_10009f7a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      lVar1 = param_1 + lVar3;
      if (*(long *)(lVar1 + 0xf0) != 0) {
        FUN_10009d988(*(long *)(lVar1 + 0xf0),0);
        *(undefined8 *)(lVar1 + 0xf0) = 0;
      }
      if (*(long *)(lVar1 + 0xf8) != 0) {
        FUN_10009d988(*(long *)(lVar1 + 0xf8),0);
        *(undefined8 *)(lVar1 + 0xf8) = 0;
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0x200);
    lVar2 = lVar2 + 1;
    param_1 = param_1 + 0x200;
  } while (lVar2 != 2);
  return;
}




void FUN_10009f814(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_1000a2340(param_1,in_stack_00000000);
  return;
}




void FUN_10009f840(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_1000a255c(param_1,in_stack_00000000,*(undefined4 *)((ulong)&stack0x00000000 | 8),
                ((undefined4 *)((ulong)&stack0x00000000 | 8))[2]);
  return;
}




long * thunk_FUN_10009f1d4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  plVar7 = param_1 + 0x4cad;
  plVar3 = param_1 + 0x4c6c;
  puVar8 = (undefined8 *)FUN_10064e20c();
  uVar9 = DAT_101dbd2f0;
  *(undefined4 *)(puVar8 + 0x18) = 0x7000000;
  puVar8[0x19] = uVar9;
  *puVar8 = &PTR_thunk_FUN_10009f880_101451398;
  puVar8[0x17] = &PTR_FUN_1014514f0;
  puVar8[0x1b] = 0;
  FUN_100657568();
  plVar1 = param_1 + 0x9e;
  FUN_100269de4(plVar1);
  lVar11 = 0x5b8;
  do {
    FUN_10064e264((long)param_1 + lVar11);
    lVar11 = lVar11 + 0xb8;
  } while (lVar11 != 0x7e0);
  lVar11 = 0x7e0;
  do {
    FUN_10053077c((long)param_1 + lVar11,0);
    lVar11 = lVar11 + 0x538;
  } while (lVar11 != 0x1788);
  *(undefined4 *)(param_1 + 0x321) = 0;
  lVar11 = 0x1920;
  lVar10 = 1;
  do {
    *(short *)((long)param_1 + lVar11) = (short)lVar10;
    lVar11 = lVar11 + 3000;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x30);
  param_1[0x4974] = 0x2f0000;
  plVar4 = param_1 + 0x4976;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x4994;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x49b5;
  param_1[0x49b4] = 0;
  param_1[0x49b3] = 0;
  param_1[0x49b2] = 0;
  lVar10 = 1;
  thunk_FUN_100181304(plVar6,1);
  FUN_100651ebc(plVar3);
  *plVar3 = (long)&PTR_FUN_1014a6f58;
  param_1[0x4c83] = (long)&PTR_FUN_1014a70c0;
  FUN_10064e264();
  FUN_1006421a8(plVar7);
  *plVar7 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  lVar11 = 0x26630;
  do {
    *(short *)((long)param_1 + lVar11) = (short)lVar10;
    lVar11 = lVar11 + 0x650;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 8);
  param_1[0x5316] = 0x70000;
  *(undefined4 *)(param_1 + 0x5318) = 0;
  *(undefined4 *)((long)param_1 + 0x298c4) = 0xffff;
  *(undefined4 *)(param_1 + 0x5319) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x298cc) = 7;
  *(undefined1 *)((long)param_1 + 0x298d4) = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f1] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2fa] = 0;
  param_1[0x2f9] = 0;
  param_1[0x2fc] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2fe] = 0;
  param_1[0x2fd] = 0;
  param_1[0x300] = 0;
  param_1[0x2ff] = 0;
  param_1[0x302] = 0;
  param_1[0x301] = 0;
  param_1[0x304] = 0;
  param_1[0x303] = 0;
  param_1[0x306] = 0;
  param_1[0x305] = 0;
  param_1[0x308] = 0;
  param_1[0x307] = 0;
  param_1[0x30a] = 0;
  param_1[0x309] = 0;
  param_1[0x30c] = 0;
  param_1[0x30b] = 0;
  param_1[0x30e] = 0;
  param_1[0x30d] = 0;
  param_1[0x310] = 0;
  param_1[0x30f] = 0;
  param_1[0x312] = 0;
  param_1[0x311] = 0;
  param_1[0x314] = 0;
  param_1[0x313] = 0;
  param_1[0x316] = 0;
  param_1[0x315] = 0;
  param_1[0x318] = 0;
  param_1[0x317] = 0;
  param_1[0x31a] = 0;
  param_1[0x319] = 0;
  param_1[0x31c] = 0;
  param_1[0x31b] = 0;
  param_1[0x31e] = 0;
  param_1[0x31d] = 0;
  param_1[800] = 0;
  param_1[799] = 0;
  param_1[0x4cc3] = 0;
  param_1[0x4cc2] = 0;
  param_1[0x4cc5] = 0;
  param_1[0x4cc4] = 0;
  param_1[0x4cbf] = 0;
  param_1[0x4cbe] = 0;
  param_1[0x4cc1] = 0;
  param_1[0x4cc0] = 0;
  FUN_10009f7a0(param_1);
  uVar9 = FUN_1003da398();
  FUN_1004e18bc(uVar9,param_1,0xb924e89d,FUN_10009f814,0);
  uVar9 = FUN_1003da398();
  FUN_1004e18bc(uVar9,param_1,0xe4cbad13,FUN_10009f840,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  uStack_80 = DAT_101dbd460;
  pcStack_a8 = thunk_FUN_1000a1d70;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x9f,&pcStack_a8);
  uStack_80 = DAT_101dbd48c;
  pcStack_a8 = thunk_FUN_1000a1d70;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x9f,&pcStack_a8);
  lVar10 = 0;
  lVar11 = 0x5b8;
  lVar12 = 0x190c;
  do {
    plVar7 = (long *)((long)param_1 + lVar11);
    FUN_100642bd8(plVar1,plVar7,1);
    lVar2 = (long)param_1 + lVar10 + 0x7e0;
    (**(code **)(*plVar7 + 0x78))(plVar7,lVar2,1);
    FUN_100530adc(lVar2,0,1);
    FUN_100530c04(lVar2,0);
    *(undefined8 *)((long)param_1 + lVar10 + 0xd00) = 0x41a0000042480000;
    *(undefined4 *)((long)param_1 + lVar10 + 0xd08) = 0x44bb8000;
    FUN_100530ad0(0,DAT_10184e134,lVar2);
    *(undefined4 *)((long)param_1 + lVar12) = 0;
    lVar11 = lVar11 + 0xb8;
    lVar10 = lVar10 + 0x538;
    lVar12 = lVar12 + 4;
  } while (lVar11 != 0x7e0);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,param_1 + 0x4c96,1);
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x49af) = *(byte *)(param_1 + 0x49af) | 2;
  FUN_1006575f4(puVar8 + 0x1c,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  *(uint *)((long)param_1 + 0x265ec) = *(uint *)((long)param_1 + 0x265ec) & 0xfffffffb;
  uVar9 = FUN_1004e0150("HUD_CHOOSE_A_BUILD_BUTTON",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x447a0000,plVar6,0,uVar9,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_1000a1e08;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x49b6,&pcStack_a8);
  *(uint *)((long)param_1 + 0x263e4) = *(uint *)((long)param_1 + 0x263e4) & 0xfffffffb;
  FUN_100651f8c(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652928(plVar3,"generic_gradient_horizontal",1,0,0,"white_background",0,0,0,
                "generic_gradient_horizontal",0);
  FUN_100491520(0xffff);
  return param_1;
}




void FUN_10009f880(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_10009f880_101451398;
  param_1[0x17] = &PTR_FUN_1014514f0;
  FUN_10009f9d8();
  uVar1 = FUN_1003da398();
  FUN_1004e1b58(uVar1,param_1);
  FUN_10009fb18(param_1);
  FUN_10064221c(param_1 + 0x4cad);
  thunk_FUN_10064e2bc(param_1 + 0x4c96);
  param_1[0x4c6c] = &PTR_FUN_1014a6db0;
  param_1[0x4c83] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x4c86);
  FUN_10064e2bc(param_1 + 0x4c6c);
  FUN_10003bd40(param_1 + 0x49b5);
  param_1[0x4994] = &PTR_FUN_1014a7108;
  param_1[0x49ab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49ae);
  FUN_10064e2bc(param_1 + 0x4994);
  param_1[0x4976] = &PTR_FUN_1014a7108;
  param_1[0x498d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4990);
  FUN_10064e2bc(param_1 + 0x4976);
  lVar2 = 0x1250;
  do {
    thunk_FUN_100530784((long)param_1 + lVar2);
    lVar2 = lVar2 + -0x538;
  } while (lVar2 != 0x2a8);
  lVar2 = 0x728;
  do {
    thunk_FUN_10064e2bc((long)param_1 + lVar2);
    lVar2 = lVar2 + -0xb8;
  } while (lVar2 != 0x500);
  FUN_10064e2bc(param_1 + 0x9e);
  thunk_FUN_100657580(param_1 + 0x1c);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10009f9d8(long param_1)

{
  ushort uVar1;
  short sVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  
  FUN_10009f7a0();
  lVar4 = 0;
  do {
    puVar3 = (undefined8 *)FUN_100530908(param_1 + lVar4 * 0x538 + 0x7e0);
    while (puVar3 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)puVar3[6];
      (**(code **)*puVar3)(puVar3);
      iVar5 = (int)(param_1 + 0x1920);
      if (*(short *)(param_1 + 0x24ba0) == -1) {
        sVar2 = (short)((uint)((int)puVar3 - iVar5) >> 3) * 0x2847;
        *(short *)(param_1 + 0x24ba2) = sVar2;
        *(short *)(param_1 + 0x24ba0) = sVar2;
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0x24ba2);
        sVar2 = (short)((uint)((int)puVar3 - iVar5) >> 3) * 0x2847;
        *(short *)(param_1 + 0x24ba2) = sVar2;
        *(short *)(param_1 + 0x1920 + (ulong)uVar1 * 3000) = sVar2;
      }
      *(int *)(param_1 + 0x24ba4) = *(int *)(param_1 + 0x24ba4) + -1;
      puVar3 = puVar6;
    }
    *(undefined4 *)(param_1 + lVar4 * 4 + 0x190c) = 0;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  *(undefined4 *)(param_1 + 0x1908) = 0;
  *(undefined8 *)(param_1 + 0x18f0) = 0;
  *(undefined8 *)(param_1 + 0x18e8) = 0;
  *(undefined8 *)(param_1 + 0x1900) = 0;
  *(undefined8 *)(param_1 + 0x18f8) = 0;
  *(undefined8 *)(param_1 + 0x18d0) = 0;
  *(undefined8 *)(param_1 + 0x18c8) = 0;
  *(undefined8 *)(param_1 + 0x18e0) = 0;
  *(undefined8 *)(param_1 + 0x18d8) = 0;
  *(undefined8 *)(param_1 + 0x18b0) = 0;
  *(undefined8 *)(param_1 + 0x18a8) = 0;
  *(undefined8 *)(param_1 + 0x18c0) = 0;
  *(undefined8 *)(param_1 + 0x18b8) = 0;
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined8 *)(param_1 + 0x1888) = 0;
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  *(undefined8 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x1870) = 0;
  *(undefined8 *)(param_1 + 0x1868) = 0;
  *(undefined8 *)(param_1 + 0x1880) = 0;
  *(undefined8 *)(param_1 + 0x1878) = 0;
  *(undefined8 *)(param_1 + 0x1850) = 0;
  *(undefined8 *)(param_1 + 0x1848) = 0;
  *(undefined8 *)(param_1 + 0x1860) = 0;
  *(undefined8 *)(param_1 + 0x1858) = 0;
  *(undefined8 *)(param_1 + 0x1830) = 0;
  *(undefined8 *)(param_1 + 0x1828) = 0;
  *(undefined8 *)(param_1 + 0x1840) = 0;
  *(undefined8 *)(param_1 + 0x1838) = 0;
  *(undefined8 *)(param_1 + 0x1810) = 0;
  *(undefined8 *)(param_1 + 0x1808) = 0;
  *(undefined8 *)(param_1 + 0x1820) = 0;
  *(undefined8 *)(param_1 + 0x1818) = 0;
  *(undefined8 *)(param_1 + 0x17f0) = 0;
  *(undefined8 *)(param_1 + 0x17e8) = 0;
  *(undefined8 *)(param_1 + 0x1800) = 0;
  *(undefined8 *)(param_1 + 0x17f8) = 0;
  *(undefined8 *)(param_1 + 0x17d0) = 0;
  *(undefined8 *)(param_1 + 0x17c8) = 0;
  *(undefined8 *)(param_1 + 0x17e0) = 0;
  *(undefined8 *)(param_1 + 0x17d8) = 0;
  *(undefined8 *)(param_1 + 0x17b0) = 0;
  *(undefined8 *)(param_1 + 0x17a8) = 0;
  *(undefined8 *)(param_1 + 0x17c0) = 0;
  *(undefined8 *)(param_1 + 0x17b8) = 0;
  *(undefined8 *)(param_1 + 0x1790) = 0;
  *(undefined8 *)(param_1 + 0x1788) = 0;
  *(undefined8 *)(param_1 + 0x17a0) = 0;
  *(undefined8 *)(param_1 + 0x1798) = 0;
  *(undefined8 *)(param_1 + 0x24d98) = 0;
  *(undefined8 *)(param_1 + 0x24d90) = 0;
  return;
}




void FUN_10009fb18(long param_1)

{
  ushort uVar1;
  short sVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = 0;
  do {
    puVar3 = *(undefined8 **)(param_1 + 0x265f0 + lVar4);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      iVar5 = (int)(param_1 + 0x26630);
      if (*(short *)(param_1 + 0x298b0) == -1) {
        sVar2 = (short)((uint)((int)puVar3 - iVar5) >> 4) * -0x4e93;
        *(short *)(param_1 + 0x298b2) = sVar2;
        *(short *)(param_1 + 0x298b0) = sVar2;
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0x298b2);
        sVar2 = (short)((uint)((int)puVar3 - iVar5) >> 4) * -0x4e93;
        *(short *)(param_1 + 0x298b2) = sVar2;
        *(short *)(param_1 + 0x26630 + (ulong)uVar1 * 0x650) = sVar2;
      }
      *(int *)(param_1 + 0x298b4) = *(int *)(param_1 + 0x298b4) + -1;
      *(undefined8 *)(param_1 + 0x265f0 + lVar4) = 0;
    }
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x40);
  FUN_100491520(0xffff);
  *(undefined8 *)(param_1 + 0x24da0) = 0;
  *(undefined4 *)(param_1 + 0x298d0) = 0;
  return;
}




void thunk_FUN_10009f880(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_10009f880_101451398;
  param_1[0x17] = &PTR_FUN_1014514f0;
  FUN_10009f9d8();
  uVar1 = FUN_1003da398();
  FUN_1004e1b58(uVar1,param_1);
  FUN_10009fb18(param_1);
  FUN_10064221c(param_1 + 0x4cad);
  thunk_FUN_10064e2bc(param_1 + 0x4c96);
  param_1[0x4c6c] = &PTR_FUN_1014a6db0;
  param_1[0x4c83] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x4c86);
  FUN_10064e2bc(param_1 + 0x4c6c);
  FUN_10003bd40(param_1 + 0x49b5);
  param_1[0x4994] = &PTR_FUN_1014a7108;
  param_1[0x49ab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49ae);
  FUN_10064e2bc(param_1 + 0x4994);
  param_1[0x4976] = &PTR_FUN_1014a7108;
  param_1[0x498d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4990);
  FUN_10064e2bc(param_1 + 0x4976);
  lVar2 = 0x1250;
  do {
    thunk_FUN_100530784((long)param_1 + lVar2);
    lVar2 = lVar2 + -0x538;
  } while (lVar2 != 0x2a8);
  lVar2 = 0x728;
  do {
    thunk_FUN_10064e2bc((long)param_1 + lVar2);
    lVar2 = lVar2 + -0xb8;
  } while (lVar2 != 0x500);
  FUN_10064e2bc(param_1 + 0x9e);
  thunk_FUN_100657580(param_1 + 0x1c);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10009fc14(long param_1)

{
  FUN_10009f880(param_1 + -0xb8);
  return;
}




void FUN_10009fc1c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10009f880();
  operator_delete(pvVar1);
  return;
}




void FUN_10009fc30(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10009f880(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_10009fc48(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  FUN_10009fc54(param_1,0);
  return;
}




void FUN_10009fc54(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  
  piVar1 = (int *)(param_1 + 0x298cc);
  if (*piVar1 != param_2) {
    *(undefined8 *)(param_1 + 0x24d90) = 0;
  }
  *piVar1 = param_2;
  FUN_1000a03e0(param_1);
  if ((*(long *)(param_1 + 0xd0) == 0) || (lVar2 = FUN_1003de46c(), *(int *)(lVar2 + 0x28) == 0xfe))
  {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)(*piVar1 == 0) << 2;
  }
  *(uint *)(param_1 + 0x26534) = *(uint *)(param_1 + 0x26534) & 0xfffffffb | uVar3;
  *(uint *)(param_1 + 0x263e4) = *(uint *)(param_1 + 0x263e4) & 0xfffffffb | uVar3;
  return;
}




void FUN_10009fcfc(long param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  FUN_100269e20(param_1 + 0x4f0);
  *(uint *)(param_1 + 0x24c34) = *(uint *)(param_1 + 0x24c34) & 0xfffffffb;
  *(uint *)(param_1 + 0x24d24) = *(uint *)(param_1 + 0x24d24) & 0xfffffffb;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_10064081c(0x3df5c28f);
    FUN_10004767c();
    FUN_100642b7c(param_1 + 0x24bb0,uVar1);
    uVar1 = FUN_10064081c(0x3df5c28f);
    FUN_10004767c();
    FUN_100642b7c(param_1 + 0x24ca0,uVar1);
    uVar2 = 0x10;
  }
  lVar3 = 0;
  do {
    lVar4 = *(long *)(param_1 + 0x1788 + lVar3);
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & 0xffffffef | uVar2;
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x180);
  lVar3 = 0;
  uVar2 = 0x10;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x265f0 + lVar3);
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & 0xffffffef | uVar2;
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x40);
  *(uint *)(param_1 + 0x24e2c) = *(uint *)(param_1 + 0x24e2c) & 0xffffffef | uVar2;
  return;
}




void FUN_10009fe58(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar9 = (**(code **)(*param_1 + 0x48))();
  FUN_10064e47c(uVar9,0x42400000,param_1 + 0x4976);
  uVar9 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(uVar9,0x42400000,param_1 + 0x4994);
  FUN_10064e5ec(0,0,param_1 + 0x4976,0,param_1,0);
  FUN_10064e5ec(0,0,param_1 + 0x4994,3,param_1,3);
  *(uint *)((long)param_1 + 0x24c34) = *(uint *)((long)param_1 + 0x24c34) | 0x10;
  *(uint *)((long)param_1 + 0x24d24) = *(uint *)((long)param_1 + 0x24d24) | 0x10;
  fVar7 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  uVar13 = 0x3eaaaaab;
  fVar7 = (fVar7 + DAT_10184e130 * -2.0) * 0.33333334;
  lVar5 = 0x2f1;
  do {
    if ((ulong)*(uint *)(param_1 + 0x321) <= lVar5 - 0x2f1U) break;
    if (param_1[lVar5] != 0) {
      FUN_10009d908(fVar7);
      FUN_10009d210(param_1[lVar5]);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x321);
  lVar5 = 0;
  do {
    plVar2 = param_1 + lVar5 * 0xa7 + 0xfc;
    lVar3 = FUN_100530908(plVar2);
    uVar10 = (undefined4)uVar13;
    if (lVar3 != 0) {
      iVar6 = 0;
      lVar4 = 0;
      do {
        if (iVar6 == 0) {
          lVar4 = *(long *)(lVar3 + 0x20);
          fVar8 = DAT_10184e134 * 0.5;
          uVar9 = 0;
        }
        else {
          fVar8 = 0.0;
          uVar9 = 2;
        }
        FUN_10064e72c(fVar8,lVar3,0,lVar4,uVar9);
        uVar10 = (undefined4)uVar13;
        plVar1 = (long *)(lVar3 + 0x30);
        iVar6 = iVar6 + -1;
        lVar4 = lVar3;
        lVar3 = *plVar1;
      } while (*plVar1 != 0);
    }
    FUN_100530a48(plVar2,1);
    FUN_100530aa0(plVar2,1,0,0,0);
    uVar11 = uVar10;
    (**(code **)(*param_1 + 0x48))(param_1);
    uVar12 = NEON_fminnm(uVar10,uVar11);
    uVar13 = (ulong)uVar12;
    plVar2 = param_1 + lVar5 * 0x17 + 0xb7;
    FUN_10064e47c(fVar7,uVar13,plVar2);
    FUN_10064e72c(0,plVar2,5,param_1,5);
    if (lVar5 != 0) {
      FUN_10064e72c(DAT_10184e130,plVar2,3,param_1 + (ulong)((int)lVar5 - 1) * 0x17 + 0xb7,1);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  FUN_1000a00d0(param_1);
  return;
}

