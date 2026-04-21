// functions/10029 — 279 functions
#include "GameKindred.h"




void thunk_FUN_10029009c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  puVar3 = auStack_40;
  thunk_FUN_1004e439c(auStack_40,param_1 + 0x1280);
  uVar2 = FUN_1004e36c0(auStack_40,&DAT_101d91650);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    puVar3 = (undefined1 *)FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  }
  FUN_1001b0198(param_1 + 0xec0,puVar3,0);
  *(bool *)(param_1 + 0x41d8) = !bVar1;
  FUN_10028ff90(param_1);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  return;
}




long * thunk_FUN_100290ac0(undefined1 param_1 [16],undefined4 param_2,long *param_3,
                          undefined8 param_4,undefined8 param_5,int param_6,int param_7,
                          undefined8 param_8)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 auStack_80 [2];
  void *pvStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *pvStack_68;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_10147f948;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100650e64(puVar5);
  plVar1 = param_3 + 0x3d;
  thunk_FUN_100650e64(plVar1);
  (**(code **)(*param_3 + 0x78))(param_3,puVar5,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  iVar4 = FUN_1004e36c0(param_4,&DAT_101d91650);
  if (iVar4 != 0) {
    puVar2 = &DAT_101e44180;
    if (param_6 == 0) {
      puVar2 = &DAT_101e44138;
    }
    FUN_100651594(puVar5,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,puVar2);
    if (param_7 != 0) {
      param_4 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
    }
    thunk_FUN_1004e439c(&uStack_70,param_4);
    FUN_1004e3120(auStack_80,":  ");
    FUN_1004e372c(&uStack_70,auStack_80);
    if (pvStack_78 != (void *)0x0) {
      operator_delete__(pvStack_78);
    }
    FUN_1006513c0(puVar5,&uStack_70);
    if (pvStack_68 != (void *)0x0) {
      operator_delete__(pvStack_68);
    }
  }
  auStack_80[0] = 0xffffffff;
  uVar3 = DAT_101e44144;
  if ((param_7 != 0) || (uVar3 = DAT_101e44180, param_6 != 0)) {
    auStack_80[0] = uVar3;
  }
  FUN_1006515d8(plVar1,param_8);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,auStack_80);
  FUN_1006513c0(plVar1,param_5);
  FUN_10064e72c(0,plVar1,3,puVar5,1);
  FUN_10064e72c(0,plVar1,0,puVar5,0);
  uStack_70 = (**(code **)(*param_3 + 0x58))(param_3,0,0,1,1);
  uStack_6c = param_2;
  FUN_10064e48c(param_3,&uStack_70);
  return param_3;
}




void FUN_10029009c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  void *local_38;
  
  puVar3 = auStack_40;
  thunk_FUN_1004e439c(auStack_40,param_1 + 0x1280);
  uVar2 = FUN_1004e36c0(auStack_40,&DAT_101d91650);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    puVar3 = (undefined1 *)FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  }
  FUN_1001b0198(param_1 + 0xec0,puVar3,0);
  *(bool *)(param_1 + 0x41d8) = !bVar1;
  FUN_10028ff90(param_1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_100290140(undefined8 param_1)

{
  if (DAT_101d23788 != 0) {
    FUN_100290d8c(DAT_101d23788,DAT_101d237e8,FUN_100290140,param_1);
    return;
  }
  return;
}




void FUN_10029016c(undefined1 param_1 [16],float param_2,long param_3,uint *param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_68;
  
  if (*param_4 != 0) {
    iVar7 = FUN_100642d08(*(undefined8 *)(param_3 + 0x41b0));
    if (iVar7 != 0) {
      FUN_1006423ec(*(undefined8 *)(param_3 + 0x41b0),1);
    }
    plVar8 = *(long **)(*(long *)(param_4 + 2) + (ulong)(*param_4 - 1) * 8);
    FUN_100534ad8(param_3 + 0x498,plVar8,1);
    plVar3 = plVar8 + 0x17;
    FUN_100651184(plVar3);
    uVar6 = *(uint *)(param_3 + 0x28fc);
    fVar12 = *(float *)(param_3 + 0x41b8);
    fVar10 = (float)FUN_100651184(plVar3);
    if ((uVar6 >> 2 & 1) == 0) {
      fVar12 = fVar12 + -20.0;
      iVar7 = FUN_100126c88();
      ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
      if (iVar7 == 0) {
        ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
      }
      FUN_100651038(plVar8 + 0x3d,*ppuVar4);
      iVar7 = FUN_100126c88();
      ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
      if (iVar7 == 0) {
        ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
      }
      FUN_100651038(plVar3,*ppuVar4);
    }
    else {
      fVar12 = fVar12 + -220.0;
    }
    plVar1 = plVar8 + 0x3d;
    FUN_100651708(fVar12 - fVar10,plVar1,1);
    FUN_1006515e0(plVar1,1);
    FUN_10064e72c(0,plVar1,3,plVar3,1);
    FUN_10064e72c(0,plVar1,0,plVar3,0);
    uVar11 = (**(code **)(*plVar8 + 0x58))(plVar8,0,0,1,1);
    local_68 = CONCAT44(param_2,uVar11);
    FUN_10064e48c(plVar8,&local_68);
    local_68 = 0;
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_68);
    if (*(float *)(plVar8 + 8) != 0.0) {
      *(undefined4 *)(plVar8 + 8) = 0;
      FUN_1000200a0(plVar8);
    }
    if (*(float *)(**(long **)(param_4 + 2) + 0x44) != 0.0) {
      *(undefined4 *)(**(long **)(param_4 + 2) + 0x44) = 0;
      FUN_1000200a0();
    }
    if (1 < *param_4) {
      lVar9 = 0;
      do {
        plVar3 = (long *)(*(long *)(param_4 + 2) + lVar9 * 8);
        plVar8 = (long *)*plVar3;
        lVar5 = plVar3[1];
        fVar10 = *(float *)((long)plVar8 + 0x44);
        (**(code **)(*plVar8 + 0x48))();
        fVar10 = param_2 + fVar10;
        param_2 = *(float *)(lVar5 + 0x44);
        if (param_2 != fVar10) {
          *(float *)(lVar5 + 0x44) = fVar10;
          FUN_1000200a0(lVar5);
        }
        uVar2 = lVar9 + 2;
        lVar9 = lVar9 + 1;
      } while (uVar2 < *param_4);
    }
    FUN_10028ff90(param_3);
  }
  return;
}




void FUN_1002903a8(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = param_1 + 0xec0;
  uVar2 = FUN_100642d08(lVar1);
  if (param_2 == 0) {
    if ((uVar2 & 1) == 0) {
      FUN_100642bd8(param_1 + 0x270,lVar1,1);
    }
    iVar3 = FUN_100642d08(*(undefined8 *)(param_1 + 0x41b0));
    if (iVar3 != 0) {
      FUN_1006423ec(*(undefined8 *)(param_1 + 0x41b0),1);
    }
    uVar2 = 4;
  }
  else {
    if (uVar2 != 0) {
      FUN_1006423ec(lVar1,1);
    }
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0xf44) = *(uint *)(param_1 + 0xf44) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x21c) = *(uint *)(param_1 + 0x21c) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x28fc) = *(uint *)(param_1 + 0x28fc) & 0xfffffffb | uVar2;
  return;
}




void FUN_100290468(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  iVar5 = FUN_100126c88();
  FUN_10064142c(&uStack_6c,&local_70);
  FUN_10064e47c(uStack_6c,local_70,param_1 + 0x18);
  FUN_10064e6d8(0,0,param_1 + 0x18,0);
  uVar9 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(uVar9,param_1 + 0x33);
  *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 0x10;
  fVar6 = (float)param_1[0x839] + (float)param_1[0x838];
  fVar10 = (float)((ulong)param_1[0x839] >> 0x20) + (float)((ulong)param_1[0x838] >> 0x20);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x56) == fVar6) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x2b4)) && !NAN(fVar10))) {
    bVar4 = *(float *)((long)param_1 + 0x2b4) == fVar10;
  }
  if (!bVar4) {
    param_1[0x56] = CONCAT44(fVar10,fVar6);
    FUN_1000200a0(param_1 + 0x4e);
  }
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar5 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8;
  }
  FUN_1001b060c(param_1 + 0x1d8,*ppuVar3,&DAT_10115a168);
  plVar1 = param_1 + 600;
  FUN_100181c18(0x41200000,*(float *)(param_1 + 0x837) + -20.0,*(float *)(param_1 + 0x837) + -20.0,
                plVar1);
  fVar6 = *(float *)(param_1 + 0x260);
  if ((fVar6 != *(float *)(param_1 + 0x837) * 0.5) ||
     (fVar6 = *(float *)((long)param_1 + 0x1304), fVar6 != 0.0)) {
    *(float *)(param_1 + 0x260) = *(float *)(param_1 + 0x837) * 0.5;
    *(undefined4 *)((long)param_1 + 0x1304) = 0;
    FUN_1000200a0(plVar1);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(param_1[600] + 0x28))(plVar1,&local_68);
  fVar10 = *(float *)((long)param_1 + 0x41bc);
  if ((*(byte *)((long)param_1 + 0xf44) >> 2 & 1) == 0) {
    fVar7 = (float)param_1[0x839] + (float)param_1[0x838];
    fVar11 = (float)((ulong)param_1[0x839] >> 0x20) + (float)((ulong)param_1[0x838] >> 0x20);
    fVar6 = *(float *)(param_1 + 0x67);
    if ((fVar6 != fVar7) || (fVar6 = *(float *)((long)param_1 + 0x33c), fVar6 != fVar11)) {
      param_1[0x67] = CONCAT44(fVar11,fVar7);
      FUN_1000200a0(param_1 + 0x5f);
    }
  }
  else {
    FUN_10064259c(plVar1);
    fVar10 = (fVar10 + -20.0) - fVar6;
  }
  if ((0.0 < *(float *)(param_1 + 0x837)) && (0.0 < fVar10)) {
    fVar6 = fVar10;
    FUN_10064e47c(param_1 + 0x5f);
  }
  plVar1 = param_1 + 0x5f;
  uVar8 = FUN_10064e3cc(plVar1);
  local_68 = (undefined1 *)CONCAT44(fVar6,uVar8);
  FUN_10064e48c(param_1 + 0x93,&local_68);
  FUN_10064e5ec(0,0x41a00000,param_1 + 0x1d8,0,plVar1,3);
  FUN_10064e5ec(0xc1a00000,0x41a00000,param_1 + 0x50f,1,plVar1,1);
  fVar6 = *(float *)((long)param_1 + 0x33c) + 100.0;
  if ((*(float *)(param_1 + 0x7ce) != 0.0) || (*(float *)((long)param_1 + 0x3e74) != fVar6)) {
    *(undefined4 *)(param_1 + 0x7ce) = 0;
    *(float *)((long)param_1 + 0x3e74) = fVar6;
    FUN_1000200a0(param_1 + 0x7c6);
  }
  fVar6 = *(float *)(param_1 + 0x837) * 0.9;
  if (*(float *)(param_1 + 0x837) * 0.9 <= 50.0) {
    fVar6 = 50.0;
  }
  plVar2 = param_1 + 0x7d7;
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar5 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar2,*ppuVar3,&DAT_10115a168);
  fVar10 = (float)FUN_10064e3cc(plVar1);
  if ((*(float *)(param_1 + 0x7df) != fVar10 * 0.5) || (*(float *)((long)param_1 + 0x3efc) != 0.0))
  {
    *(float *)(param_1 + 0x7df) = fVar10 * 0.5;
    *(undefined4 *)((long)param_1 + 0x3efc) = 0;
    FUN_1000200a0(plVar2);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x7d7] + 0x28))(plVar2,&local_68);
  FUN_100651708(fVar6,plVar2,1);
  FUN_100651700(plVar2,3);
  if ((*(float *)(param_1 + 0x805) != *(float *)(param_1 + 0x7ce)) ||
     (*(float *)((long)param_1 + 0x402c) != *(float *)((long)param_1 + 0x3e74))) {
    *(float *)(param_1 + 0x805) = *(float *)(param_1 + 0x7ce);
    *(float *)((long)param_1 + 0x402c) = *(float *)((long)param_1 + 0x3e74);
    FUN_1000200a0(param_1 + 0x7fd);
  }
  plVar1 = param_1 + 0x80e;
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar5 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar1,*ppuVar3,&DAT_10115a168);
  if ((*(float *)(param_1 + 0x816) != *(float *)(param_1 + 0x7df)) ||
     (*(float *)((long)param_1 + 0x40b4) != *(float *)((long)param_1 + 0x3efc))) {
    *(float *)(param_1 + 0x816) = *(float *)(param_1 + 0x7df);
    *(float *)((long)param_1 + 0x40b4) = *(float *)((long)param_1 + 0x3efc);
    FUN_1000200a0(plVar1);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_68);
  FUN_100651708(fVar6,plVar1,1);
  FUN_100651700(plVar1,3);
  return;
}




long * FUN_100290884(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_1001afbc0();
  *puVar4 = &PTR_FUN_10147f848;
  puVar4 = puVar4 + 0x80;
  thunk_FUN_100181304(puVar4,0);
  *(undefined1 *)(param_1 + 0x71) = 1;
  local_70 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_70);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_1001816d4(0,0x42c80000,0x447a0000,puVar4,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0x444) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x88)))) {
    bVar3 = *(float *)(param_1 + 0x88) == 0.0;
  }
  if (!bVar3) {
    param_1[0x88] = 0;
    FUN_1000200a0(puVar4);
  }
  local_70 = (code *)0x0;
  (**(code **)(param_1[0x80] + 0x28))(puVar4,&local_70);
  plVar1 = param_1 + 0x22;
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0x154) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x2a)))) {
    bVar3 = *(float *)(param_1 + 0x2a) == 0.0;
  }
  if (!bVar3) {
    param_1[0x2a] = 0;
    FUN_1000200a0(plVar1);
  }
  local_70 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x22] + 0x28))(plVar1,&local_70);
  plVar2 = param_1 + 0x48;
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0x284) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x50)))) {
    bVar3 = *(float *)(param_1 + 0x50) == 0.0;
  }
  if (!bVar3) {
    param_1[0x50] = 0;
    FUN_1000200a0(plVar2);
  }
  local_70 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x48] + 0x28))(plVar2,&local_70);
  FUN_1001b060c(param_1,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  FUN_1001b0764(param_1,3);
  FUN_1001afc3c(param_1,1);
  *(uint *)((long)param_1 + 0x194) = *(uint *)((long)param_1 + 0x194) & 0xffffffef;
  FUN_100644c24(plVar1);
  FUN_1006515d8(plVar1,0);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffef;
  FUN_100644c24(plVar2);
  FUN_1006515d8(plVar2,0);
  local_48 = DAT_101d91884;
  local_70 = thunk_FUN_1001afe48;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x81,&local_70);
  return param_1;
}




long * FUN_100290ac0(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined8 param_4,
                    undefined8 param_5,int param_6,int param_7,undefined8 param_8)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 local_80 [2];
  void *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  void *local_68;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_10147f948;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100650e64(puVar5);
  plVar1 = param_3 + 0x3d;
  thunk_FUN_100650e64(plVar1);
  (**(code **)(*param_3 + 0x78))(param_3,puVar5,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  iVar4 = FUN_1004e36c0(param_4,&DAT_101d91650);
  if (iVar4 != 0) {
    puVar2 = &DAT_101e44180;
    if (param_6 == 0) {
      puVar2 = &DAT_101e44138;
    }
    FUN_100651594(puVar5,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,puVar2);
    if (param_7 != 0) {
      param_4 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
    }
    thunk_FUN_1004e439c(&local_70,param_4);
    FUN_1004e3120(local_80,":  ");
    FUN_1004e372c(&local_70,local_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    FUN_1006513c0(puVar5,&local_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
  }
  local_80[0] = 0xffffffff;
  uVar3 = DAT_101e44144;
  if ((param_7 != 0) || (uVar3 = DAT_101e44180, param_6 != 0)) {
    local_80[0] = uVar3;
  }
  FUN_1006515d8(plVar1,param_8);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,local_80);
  FUN_1006513c0(plVar1,param_5);
  FUN_10064e72c(0,plVar1,3,puVar5,1);
  FUN_10064e72c(0,plVar1,0,puVar5,0);
  local_70 = (**(code **)(*param_3 + 0x58))(param_3,0,0,1,1);
  uStack_6c = param_2;
  FUN_10064e48c(param_3,&local_70);
  return param_3;
}




void FUN_100290cd0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10147f848;
  FUN_10003bd40(param_1 + 0x80);
  pvVar1 = (void *)FUN_100186088(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100290d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10147f948;
  thunk_FUN_100651068(param_1 + 0x3d);
  thunk_FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100290d48(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10147f948;
  thunk_FUN_100651068(param_1 + 0x3d);
  thunk_FUN_100651068(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100290d8c(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_100015664((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_100290de0(void)

{
  DAT_101e44120 = 0xff;
  DAT_101e44122 = 0xffff;
  DAT_101e44124 = 0xffff;
  DAT_101e44128 = 0x4326000041900000;
  DAT_101e44130 = 0x4326000041c00000;
  DAT_101e44138 = 0xffbc9c44;
  DAT_101e4413c = 0xff1166f2;
  DAT_101e44140 = 0xffe0e0e0;
  DAT_101e44144 = 0xffa0a0a0;
  DAT_101e44148 = 0xff8c8c8c;
  DAT_101e4414c = 0xff322213;
  DAT_101e44150 = 0xff091911;
  DAT_101e44154 = 0xff170c19;
  DAT_101e44158 = 0xff241a14;
  DAT_101e4415c = 0xff14171c;
  DAT_101e44160 = 0xff221911;
  DAT_101e44164 = 0xff1a1416;
  DAT_101e44168 = 0xff121414;
  DAT_101e4416c = 0xff1a1809;
  DAT_101e44170 = 0xff141414;
  DAT_101e44174 = 0xff141414;
  DAT_101e44178 = 0xff2929c0;
  DAT_101e4417c = 0xff283082;
  DAT_101e44180 = 0xff5262cc;
  DAT_101e44184 = 0xff283082;
  DAT_101e44188 = 0xff5262cc;
  DAT_101e4418c = 0xff745c42;
  DAT_101e44190 = 0xff184155;
  DAT_101e44194 = 0xff92665e;
  DAT_101e44198 = 0xffbc9c44;
  DAT_101e4419c = 0xffbbae56;
  DAT_101e441a0 = 0xff8b7b01;
  DAT_101e441a4 = 0xff90b3ef;
  DAT_101e441a8 = 0xff728ebe;
  DAT_101e441ac = 0xff19459d;
  DAT_101e441b0 = 0xff9d877b;
  DAT_101e441b4 = 0xffcbb1a3;
  DAT_101e441b8 = 0xff3f6fb5;
  DAT_101e441bc = 0xffc5c5c5;
  DAT_101e441c0 = 0xff4fc1f1;
  DAT_101e441c4 = 0xff606060;
  DAT_101e441c8 = 0xffc5ff7b;
  DAT_101e441cc = 0xff5271eb;
  DAT_101e441d0 = 0xfffae076;
  DAT_101e441d4 = 0xff3ac8f6;
  DAT_101e441d8 = 0xffaaaaaa;
  DAT_101e441dc = 0xffe19400;
  DAT_101e441e0 = 0xffe19400;
  DAT_101e441e4 = 0xffe550b2;
  DAT_101e441e8 = 0xfff22ae8;
  DAT_101e441ec = 0xff005ae1;
  DAT_101e441f0 = 0xff1addfa;
  DAT_101e441f4 = 0xff2424b3;
  DAT_101e441f8 = 0xff2424b3;
  DAT_101e441fc = 0xff646464;
  DAT_101e44200 = 0xff92665e;
  DAT_101e44204 = 0xff646037;
  DAT_101e4420c = 0xff1111a1;
  DAT_101e44210 = 0xff321ee1;
  DAT_101e44214 = 0xffc8c8c8;
  DAT_101e44218 = 0xff321ee1;
  DAT_101e44224 = 0xff6259b3;
  DAT_101e44228 = 0xff506e73;
  DAT_101e4422c = 0xff9dbf86;
  DAT_101e44208 = 0xffffffff;
  DAT_101e44230 = 0xffa35244;
  DAT_101e4421c = 0xff7fe801;
  DAT_101e44234 = 0xffca828e;
  DAT_101e44220 = 0xffffffff;
  DAT_101e44238 = 0xffa6a6a6;
  DAT_101e4423c = 0xffa6a6a6;
  DAT_101e44240 = 0xffffffff;
  DAT_101e44244 = 0xff88ea2f;
  DAT_101e44248 = 0xff8c8c8c;
  DAT_101e4424c = 0xffffb400;
  DAT_101e44250 = 0xffff00ff;
  DAT_101e44254 = 0xff00aded;
  DAT_101e44258 = 0xff33d3ff;
  DAT_101e4425c = 0xff7fe801;
  DAT_101e44260 = 0xff282828;
  DAT_101e44264 = 0xfff0f0f0;
  DAT_101e44268 = 0xffa4781e;
  DAT_101e4426c = 0xffa6654b;
  DAT_101e44270 = 0xff93435b;
  DAT_101e44274 = 0xff387f9c;
  DAT_101e44278 = 0xffa3781e;
  DAT_101e4427c = 0xffffd18a;
  DAT_101e44280 = 0xffff61f7;
  DAT_101e44284 = 0xff5de1f2;
  DAT_101e44288 = 0xff80eaff;
  DAT_101e4428c = 0xff32e00e;
  DAT_101e44290 = 0xff5a3c10;
  DAT_101e44294 = 0xff330b03;
  DAT_101e44298 = 0xff33031d;
  DAT_101e4429c = 0xff032433;
  DAT_101e442a0 = 0xff9e8e8d;
  DAT_101d237e0 = FUN_100644a94("UI::EVENT_CLOSE_DIALOG_WINDOW");
  DAT_101d237e4 = FUN_100644a94("UI::EVENT_CLOSE_CHAT_NODE");
  DAT_101d237e8 = FUN_100644a94("UI::EVENT_KEYBOARD_OPENED");
  return;
}




long * FUN_1002914f8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar7 = (undefined8 *)FUN_10064f204();
  *puVar7 = &PTR_thunk_FUN_100291784_10147fa90;
  puVar7[0x29] = &PTR_FUN_10147fbe8;
  puVar7 = puVar7 + 0x2a;
  FUN_10064e264(puVar7);
  plVar1 = param_1 + 0x41;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x67;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x8d;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xb3;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xd1;
  thunk_FUN_100652c08(plVar5);
  FUN_1000f9f1c(param_1 + 0xef);
  *(undefined8 *)((long)param_1 + 0x861) = 0;
  *(undefined8 *)((long)param_1 + 0x859) = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(puVar7,plVar2,1);
  FUN_100642bd8(puVar7,plVar5,1);
  FUN_100642bd8(puVar7,plVar3,1);
  FUN_100642bd8(puVar7,plVar4,1);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x28c);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x28c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(plVar1);
  }
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x3bc);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x3bc) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(plVar5,"build://Chests.atlas");
  *(uint *)((long)param_1 + 0x70c) = *(uint *)((long)param_1 + 0x70c) | 0x10;
  local_58 = DAT_101dbd460;
  local_80 = thunk_FUN_1002918c0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xd2,&local_80);
  local_58 = DAT_101dbd48c;
  local_80 = thunk_FUN_1002918c0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xd2,&local_80);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  FUN_100651700(plVar3,3);
  uVar6 = *(uint *)((long)param_1 + 0x4ec);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x4ec) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_lock");
  return param_1;
}




void thunk_FUN_1002918c0(long param_1)

{
  long *plVar1;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  FUN_1000f9d14(auStack_d8,param_1 + 0x778);
  FUN_1000f9d9c(auStack_c8,param_1 + 0x788);
  FUN_10003330c(auStack_b8,param_1 + 0x798);
  FUN_10003330c(auStack_a0,param_1 + 0x7b0);
  FUN_10003330c(auStack_88,param_1 + 0x7c8);
  FUN_10003330c(auStack_70,param_1 + 0x7e0);
  FUN_10003330c(auStack_58,param_1 + 0x7f8);
  FUN_10003330c(auStack_40,param_1 + 0x810);
  uStack_28 = *(undefined4 *)(param_1 + 0x828);
  uStack_24 = *(undefined2 *)(param_1 + 0x82c);
  plVar1 = (long *)(param_1 + 0x848);
  if (*(char *)(param_1 + 0x85f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  FUN_10021e038(auStack_d8,plVar1,*(undefined1 *)(param_1 + 0x868));
  FUN_1000f7abc(auStack_d8);
  return;
}




void FUN_100291784(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100291784_10147fa90;
  param_1[0x29] = &PTR_FUN_10147fbe8;
  if (*(char *)((long)param_1 + 0x85f) < '\0') {
    operator_delete((void *)param_1[0x109]);
  }
  if (*(char *)((long)param_1 + 0x847) < '\0') {
    operator_delete((void *)param_1[0x106]);
  }
  FUN_1000f7abc(param_1 + 0xef);
  param_1[0xd1] = &PTR_FUN_1014a7108;
  param_1[0xe8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xeb);
  FUN_10064e2bc(param_1 + 0xd1);
  param_1[0xb3] = &PTR_FUN_1014a7108;
  param_1[0xca] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcd);
  FUN_10064e2bc(param_1 + 0xb3);
  thunk_FUN_100651068(param_1 + 0x8d);
  thunk_FUN_100651068(param_1 + 0x67);
  thunk_FUN_100651068(param_1 + 0x41);
  thunk_FUN_10064e2bc(param_1 + 0x2a);
  param_1[0x29] = &PTR_FUN_10146b508;
  FUN_100136bd8(param_1 + 0x29);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100291784(void)

{
  FUN_100291784();
  return;
}




void FUN_10029188c(long param_1)

{
  FUN_100291784(param_1 + -0x148);
  return;
}




void FUN_100291894(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100291784();
  operator_delete(pvVar1);
  return;
}




void FUN_1002918a8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100291784(param_1 + -0x148);
  operator_delete(pvVar1);
  return;
}




void FUN_1002918c0(long param_1)

{
  long *plVar1;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined4 local_28;
  undefined2 local_24;
  
  FUN_1000f9d14(auStack_d8,param_1 + 0x778);
  FUN_1000f9d9c(auStack_c8,param_1 + 0x788);
  FUN_10003330c(auStack_b8,param_1 + 0x798);
  FUN_10003330c(auStack_a0,param_1 + 0x7b0);
  FUN_10003330c(auStack_88,param_1 + 0x7c8);
  FUN_10003330c(auStack_70,param_1 + 0x7e0);
  FUN_10003330c(auStack_58,param_1 + 0x7f8);
  FUN_10003330c(auStack_40,param_1 + 0x810);
  local_28 = *(undefined4 *)(param_1 + 0x828);
  local_24 = *(undefined2 *)(param_1 + 0x82c);
  plVar1 = (long *)(param_1 + 0x848);
  if (*(char *)(param_1 + 0x85f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  FUN_10021e038(auStack_d8,plVar1,*(undefined1 *)(param_1 + 0x868));
  FUN_1000f7abc(auStack_d8);
  return;
}




void FUN_10029197c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float local_68;
  float fStack_64;
  
  FUN_10064e48c(param_1,param_1 + 0x860);
  lVar1 = param_1 + 0x150;
  FUN_10064e48c(lVar1,param_1 + 0x860);
  lVar2 = param_1 + 0x688;
  local_68 = *(float *)(param_1 + 0x860) * 0.7;
  fStack_64 = local_68;
  FUN_10064e48c(lVar2,&local_68);
  FUN_10065179c(*(float *)(param_1 + 0x860) + -10.0,0,0x3f800000,param_1 + 0x208);
  lVar3 = param_1 + 0x338;
  FUN_10065179c(*(float *)(param_1 + 0x860) + -10.0,0,0x3f800000,lVar3);
  fVar4 = (float)FUN_100652e60(lVar2);
  FUN_100651708(fVar4 * 0.5,param_1 + 0x468,1);
  *(uint *)(param_1 + 0x61c) =
       *(uint *)(param_1 + 0x61c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x61c) & 3 | (uint)(*(char *)(param_1 + 0x868) == '\0') << 2;
  FUN_10064e5ec(0,0x41f00000,lVar2,4,lVar1,4);
  fVar4 = (float)FUN_100652e60(lVar2);
  fVar5 = -0.4;
  FUN_100652e60(lVar2);
  FUN_10064e5ec(fVar4 * -0.4,fVar5 * 0.2,param_1 + 0x598,8,lVar2,8);
  FUN_10064e5ec(0,0xc1200000,lVar3,6,lVar1,6);
  FUN_10064e5ec(0,0,param_1 + 0x208,6,lVar3,4);
  FUN_10064e5ec(0,0,param_1 + 0x468,2,lVar2,2);
  return;
}




void FUN_100291b28(long *param_1,long param_2,int param_3,string *param_4)

{
  undefined8 ***pppuVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  string *this;
  undefined1 auStack_90 [8];
  void *local_88;
  void *local_80;
  void *local_78;
  char local_69;
  undefined8 **local_68 [2];
  char local_51;
  
  FUN_1000fa02c(param_1 + 0xef);
  FUN_1000fa0c0(param_1 + 0xf1,param_2 + 0x10);
  std::string::operator=((string *)(param_1 + 0xf3),(string *)(param_2 + 0x20));
  std::string::operator=((string *)(param_1 + 0xf6),(string *)(param_2 + 0x38));
  std::string::operator=((string *)(param_1 + 0xf9),(string *)(param_2 + 0x50));
  std::string::operator=((string *)(param_1 + 0xfc),(string *)(param_2 + 0x68));
  std::string::operator=((string *)(param_1 + 0xff),(string *)(param_2 + 0x80));
  std::string::operator=((string *)(param_1 + 0x102),(string *)(param_2 + 0x98));
  uVar3 = *(undefined2 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x105) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined2 *)((long)param_1 + 0x82c) = uVar3;
  FUN_10003330c(local_68,(string *)(param_1 + 0xf6));
  pppuVar1 = (undefined8 ***)local_68[0];
  if (-1 < local_51) {
    pppuVar1 = local_68;
  }
  uVar4 = FUN_1004e0150(pppuVar1,0);
  FUN_1006513c0(param_1 + 0x41,uVar4);
  *(char *)(param_1 + 0x10d) = (char)param_3;
  pcVar2 = "INVENTORY_CHEST_READY_TO_OPEN";
  if (param_3 == 0) {
    pcVar2 = "INVENTORY_CHEST_MISSING_KEY";
  }
  uVar4 = FUN_1004e0150(pcVar2,0);
  FUN_1006513c0(param_1 + 0x67,uVar4);
  FUN_10003330c(&local_80,(string *)(param_1 + 0xfc));
  this = (string *)(param_1 + 0x106);
  std::string::operator=(this,(string *)&local_80);
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  std::string::operator=((string *)(param_1 + 0x109),param_4);
  if (*(char *)((long)param_1 + 0x847) < '\0') {
    this = *(string **)this;
  }
  FUN_100652cdc(param_1 + 0xd1,this);
  FUN_1004e3120(&local_80,"x ");
  FUN_1004e313c(auStack_90);
  FUN_1004e38ac(auStack_90,"%d");
  FUN_1004e372c(&local_80,auStack_90);
  FUN_1006513c0(param_1 + 0x8d,&local_80);
  (**(code **)(*param_1 + 0x138))(param_1);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  return;
}




void FUN_100291d1c(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x10c) = param_1;
  *(undefined4 *)((long)param_3 + 0x864) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100291d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




void FUN_100291d30(void)

{
  return;
}




void FUN_100291d34(void)

{
  return;
}




long * FUN_100291d38(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  puVar5[0x17] = 0;
  *puVar5 = &PTR_thunk_FUN_100292138_10147fc10;
  puVar5 = puVar5 + 0x18;
  FUN_10064e264(puVar5);
  plVar1 = param_1 + 0x2f;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x46;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x6c;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x92;
  thunk_FUN_100652c08(plVar4);
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(puVar5,plVar3,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x514) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x514) = *(uint *)((long)param_1 + 0x514) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar6 = FUN_1004e0150("INVENTORY_CHEST_SECTION_TITLE",0);
  FUN_1006513c0(plVar2,uVar6);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar6 = FUN_1004e0150("INVENTORY_NO_CHEST_INSTRUCTION",0);
  FUN_1006513c0(plVar3,uVar6);
  FUN_100651700(plVar3,3);
  *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb;
  FUN_100291f04(param_1);
  return param_1;
}




void FUN_100291f04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  
  FUN_10064e48c(param_1 + 0xc0,param_1 + 0x590);
  lVar1 = param_1 + 0x178;
  uVar6 = 0x42f00000;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x590),lVar1);
  local_78 = FUN_10064e3cc(lVar1);
  uStack_74 = uVar6;
  FUN_10064e48c(param_1 + 0x490,&local_78);
  uVar6 = FUN_10064e3cc(lVar1);
  FUN_10065179c(uVar6,0,0x3f800000,param_1 + 0x230);
  FUN_100651708(*(float *)(param_1 + 0x590) + -20.0,param_1 + 0x360,1);
  FUN_10064e5ec(0x41a00000,0x41a00000,param_1 + 0x360,0,lVar1,3);
  if (*(int *)(param_1 + 0x580) != 0) {
    uVar5 = 0;
    lVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x588) + uVar5 * 8);
      fVar7 = *(float *)(param_1 + 0x590) * 0.2 + -8.0;
      FUN_10064e47c(fVar7,fVar7 * 1.2,lVar3);
      if (uVar5 == 0) {
        FUN_10064e72c(0,lVar3,0,lVar1,2);
        uVar6 = 0x41200000;
        lVar2 = lVar1;
LAB_1002920c0:
        FUN_10064e72c(uVar6,lVar3,3,lVar2,3);
      }
      else {
        if ((int)uVar5 == (int)((uVar5 & 0xffffffff) / 5) * 5) {
          FUN_10064e72c(0x41200000,lVar3,0,lVar2,2);
          uVar6 = 0;
          goto LAB_1002920c0;
        }
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x588) + (ulong)((int)uVar5 - 1) * 8);
        FUN_10064e72c(0x41200000,lVar3,3,uVar4,1);
        FUN_10064e72c(0,lVar3,0,uVar4,0);
        lVar3 = lVar2;
      }
      uVar5 = uVar5 + 1;
      lVar2 = lVar3;
    } while (uVar5 < *(uint *)(param_1 + 0x580));
  }
  FUN_10064e5ec(0,0,param_1 + 0x230,8,lVar1,8);
  *(uint *)(param_1 + 0x3e4) =
       *(uint *)(param_1 + 0x3e4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x3e4) & 3 | (uint)(*(int *)(param_1 + 0x580) == 0) << 2;
  return;
}




long * thunk_FUN_100291d38(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  puVar5[0x17] = 0;
  *puVar5 = &PTR_thunk_FUN_100292138_10147fc10;
  puVar5 = puVar5 + 0x18;
  FUN_10064e264(puVar5);
  plVar1 = param_1 + 0x2f;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x46;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x6c;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x92;
  thunk_FUN_100652c08(plVar4);
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(puVar5,plVar3,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x514) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x514) = *(uint *)((long)param_1 + 0x514) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar6 = FUN_1004e0150("INVENTORY_CHEST_SECTION_TITLE",0);
  FUN_1006513c0(plVar2,uVar6);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar6 = FUN_1004e0150("INVENTORY_NO_CHEST_INSTRUCTION",0);
  FUN_1006513c0(plVar3,uVar6);
  FUN_100651700(plVar3,3);
  *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb;
  FUN_100291f04(param_1);
  return param_1;
}




void FUN_100292138(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_100292138_10147fc10;
  uVar2 = *(uint *)(param_1 + 0xb0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[0xb1];
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = param_1[0xb1];
        uVar2 = *(uint *)(param_1 + 0xb0);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[0xb1] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    operator_delete__((void *)param_1[0xb1]);
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
  }
  param_1[0x92] = &PTR_FUN_1014a7108;
  param_1[0xa9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xac);
  FUN_10064e2bc(param_1 + 0x92);
  thunk_FUN_100651068(param_1 + 0x6c);
  thunk_FUN_100651068(param_1 + 0x46);
  thunk_FUN_10064e2bc(param_1 + 0x2f);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100292138(void)

{
  FUN_100292138();
  return;
}




void FUN_100292208(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100292138();
  operator_delete(pvVar1);
  return;
}




void FUN_10029221c(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x580);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x588);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x588);
        uVar2 = *(uint *)(param_1 + 0x580);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(param_1 + 0x580) = 0;
  }
  FUN_100291f04(param_1);
  return;
}




void FUN_100292284(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_38;
  
  operator_new(0x870);
  local_38 = FUN_1002914f8();
  FUN_100291b28(local_38,param_2,param_3,param_4);
  FUN_100292300(param_1 + 0x580,&local_38);
  FUN_100642bd8(param_1 + 0xc0,local_38,1);
  FUN_100291f04(param_1);
  return;
}




void FUN_100292300(uint *param_1,undefined8 *param_2)

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
    FUN_10029238c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100292380(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x590) = param_1;
  *(undefined4 *)(param_3 + 0x594) = param_2;
  FUN_100291f04();
  return;
}




void FUN_10029238c(uint *param_1,uint param_2)

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




long * FUN_100292408(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 local_38 [8];
  
  puVar2 = (undefined8 *)FUN_10064f204();
  puVar2[0x29] = 0;
  *puVar2 = &PTR_thunk_FUN_1002924e4_10147fd58;
  puVar2 = puVar2 + 0x2a;
  thunk_FUN_1005357f4(puVar2);
  plVar1 = param_1 + 0x16f;
  thunk_FUN_100652c08(plVar1);
  param_1[399] = 0;
  param_1[0x18e] = 0;
  param_1[0x18d] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100534ad8(puVar2,plVar1,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  local_38[0] = 9;
  FUN_100534ebc(puVar2,local_38);
  return param_1;
}




long * thunk_FUN_100292408(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [8];
  
  puVar2 = (undefined8 *)FUN_10064f204();
  puVar2[0x29] = 0;
  *puVar2 = &PTR_thunk_FUN_1002924e4_10147fd58;
  puVar2 = puVar2 + 0x2a;
  thunk_FUN_1005357f4(puVar2);
  plVar1 = param_1 + 0x16f;
  thunk_FUN_100652c08(plVar1);
  param_1[399] = 0;
  param_1[0x18e] = 0;
  param_1[0x18d] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100534ad8(puVar2,plVar1,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  auStack_38[0] = 9;
  FUN_100534ebc(puVar2,auStack_38);
  return param_1;
}




void FUN_1002924e4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002924e4_10147fd58;
  if (param_1[0x18d] != 0) {
    param_1[0x18d] = 0;
  }
  if (param_1[0x18e] != 0) {
    param_1[0x18e] = 0;
  }
  param_1[0x16f] = &PTR_FUN_1014a7108;
  param_1[0x186] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x189);
  FUN_10064e2bc(param_1 + 0x16f);
  thunk_FUN_100534a3c(param_1 + 0x2a);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002924e4(void)

{
  FUN_1002924e4();
  return;
}




void FUN_100292578(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002924e4();
  operator_delete(pvVar1);
  return;
}




void FUN_10029258c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc68) = param_2;
  FUN_100534ad8(param_1 + 0x150,param_2,1);
  return;
}




void FUN_10029259c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc70) = param_2;
  FUN_100534ad8(param_1 + 0x150,param_2,1);
  return;
}




void FUN_1002925ac(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_10064e48c(param_1,param_1 + 0xc78);
  FUN_10064e48c(param_1 + 0x150,param_1 + 0xc78);
  lVar1 = param_1 + 0xb78;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xc78),0x41200000,lVar1);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xc78),*(undefined4 *)(param_1 + 0xc7c),
                *(undefined8 *)(param_1 + 0xc70));
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xc78),*(undefined4 *)(param_1 + 0xc7c),
                *(undefined8 *)(param_1 + 0xc68));
  lVar4 = *(long *)(param_1 + 0xc70);
  bVar2 = false;
  if ((*(float *)(lVar4 + 0x44) == 0.0) && (bVar2 = false, !NAN(*(float *)(lVar4 + 0x40)))) {
    bVar2 = *(float *)(lVar4 + 0x40) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(lVar4 + 0x40) = 0;
    FUN_1000200a0(lVar4);
    lVar4 = *(long *)(param_1 + 0xc70);
  }
  FUN_10064e72c(0,lVar1,0,lVar4,2);
  FUN_10064e72c(0,lVar1,3,lVar4,3);
  uVar3 = *(undefined8 *)(param_1 + 0xc68);
  FUN_10064e72c(0,uVar3,0,lVar1,2);
  FUN_10064e72c(0,uVar3,3,lVar1,3);
  return;
}




void FUN_1002926a4(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 399) = param_1;
  *(undefined4 *)((long)param_3 + 0xc7c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002926b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




long * FUN_1002926b8(long *param_1)

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
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined4 uVar35;
  int iVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  long lVar42;
  float fVar43;
  float fVar44;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  
  plVar6 = param_1 + 0x1eeb;
  plVar7 = param_1 + 0x1eae;
  plVar8 = param_1 + 0x1bd9;
  plVar9 = param_1 + 0x1b9c;
  plVar10 = param_1 + 0x161d;
  puVar37 = (undefined8 *)FUN_10064e20c();
  puVar37[0x17] = 0;
  *puVar37 = &PTR_thunk_FUN_100294ff0_10147fea8;
  FUN_1006421a8(puVar37 + 0x18);
  param_1[0x18] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x29);
  param_1[0x29] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x3a;
  thunk_FUN_1005357f4(plVar1);
  FUN_1006421a8(param_1 + 0x17f);
  param_1[0x17f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 400;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x1ae;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x1cc;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0x1f2;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x210;
  FUN_1006421a8(plVar11);
  param_1[0x210] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar12 = param_1 + 0x221;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0x26d;
  thunk_FUN_100184f78();
  plVar14 = param_1 + 0x60b;
  thunk_FUN_100184f78();
  plVar15 = param_1 + 0x9a9;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0x9f5;
  thunk_FUN_100184f78();
  plVar17 = param_1 + 0xd93;
  thunk_FUN_100184f78();
  plVar18 = param_1 + 0x1131;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x117d;
  thunk_FUN_100184f78();
  plVar20 = param_1 + 0x151b;
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0x1541;
  thunk_FUN_100650e64(plVar21);
  plVar22 = param_1 + 0x1567;
  FUN_10064e264(plVar22);
  plVar23 = param_1 + 0x157e;
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0x159c;
  thunk_FUN_100650e64();
  plVar25 = param_1 + 0x15c2;
  FUN_10064e264(plVar25);
  plVar26 = param_1 + 0x15d9;
  thunk_FUN_100652c08();
  plVar27 = param_1 + 0x15f7;
  thunk_FUN_100650e64(plVar27);
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar28 = param_1 + 0x162e;
  thunk_FUN_100181304(plVar28,0);
  plVar29 = param_1 + 0x18e5;
  thunk_FUN_100181304(plVar29,0);
  FUN_10064e264(plVar9);
  plVar30 = param_1 + 0x1bb3;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar8);
  plVar31 = param_1 + 0x1bf7;
  thunk_FUN_100181304(plVar31,0);
  FUN_10064e264(plVar7);
  plVar32 = param_1 + 0x1ec5;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar6);
  FUN_10064e264();
  FUN_1004e313c(param_1 + 0x1f20);
  param_1[0x1f22] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100534ad8(plVar1,plVar2,1);
  FUN_100534ad8(plVar1,plVar3,1);
  FUN_100534ad8(plVar1,plVar4,1);
  FUN_100534ad8(plVar1,plVar5,1);
  FUN_100534ad8(plVar1,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar11,param_1 + 0x247,1);
  FUN_100642bd8(plVar11,plVar13,1);
  FUN_100642bd8(plVar11,plVar14,1);
  FUN_100642bd8(plVar11,plVar15,1);
  FUN_100642bd8(plVar11,param_1 + 0x9cf,1);
  FUN_100642bd8(plVar11,plVar16,1);
  FUN_100642bd8(plVar11,plVar17,1);
  FUN_100642bd8(plVar11,plVar18,1);
  FUN_100642bd8(plVar11,param_1 + 0x1157,1);
  FUN_100642bd8(plVar11,plVar19,1);
  FUN_100642bd8(plVar11,plVar20,1);
  FUN_100642bd8(plVar11,plVar21,1);
  FUN_100642bd8(plVar11,plVar22,1);
  FUN_100642bd8(plVar22,plVar23,1);
  FUN_100642bd8(plVar22,plVar24,1);
  FUN_100642bd8(plVar11,plVar25,1);
  FUN_100642bd8(plVar25,plVar26,1);
  FUN_100642bd8(plVar25,plVar27,1);
  FUN_100642bd8(plVar11,plVar10,1);
  FUN_100642bd8(plVar10,plVar28,1);
  FUN_100642bd8(plVar10,plVar29,1);
  FUN_100642bd8(plVar29,plVar9,1);
  FUN_100642bd8(plVar9,plVar8,1);
  FUN_100642bd8(plVar9,plVar30,1);
  FUN_100642bd8(plVar10,plVar31,1);
  FUN_100642bd8(plVar31,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar7,plVar32,1);
  FUN_100642bd8(plVar11,param_1 + 0x1f09,1);
  iVar36 = FUN_100126c88();
  local_c8 = (code *)CONCAT71(local_c8._1_7_,9);
  FUN_100534ebc(plVar1,&local_c8);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar39 = *(uint *)((long)param_1 + 0xd04);
  if ((uVar39 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xd04) = uVar39 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
    uVar39 = *(uint *)((long)param_1 + 0xd04);
  }
  *(uint *)((long)param_1 + 0xd04) = uVar39 | 0x10;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  fVar43 = *(float *)(param_1 + 0x1b7);
  if ((fVar43 != 1.5) || (fVar43 = *(float *)((long)param_1 + 0xdbc), fVar43 != 1.5)) {
    lVar42 = NEON_fmov(0x3fc00000,4);
    param_1[0x1b7] = lVar42;
    FUN_1000200a0(plVar3);
  }
  uVar39 = *(uint *)((long)param_1 + 0xdf4);
  if ((uVar39 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0xdf4) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar4,uVar38);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar4,*ppuVar34);
  if ((*(uint *)((long)param_1 + 0xee4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xee4) = *(uint *)((long)param_1 + 0xee4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar39 = *(uint *)((long)param_1 + 0x1014);
  if ((uVar39 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1014) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
    uVar39 = *(uint *)((long)param_1 + 0x1014);
  }
  *(uint *)((long)param_1 + 0x1014) = uVar39 | 0x10;
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x247,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x9cf,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x1157,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_FIELD_BLURB",0);
  FUN_1006513c0(plVar21,uVar38);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar12,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x118c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x118c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar12);
  }
  FUN_1004e3120(&local_c8,"1");
  FUN_1006513c0(plVar12,&local_c8);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar13,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar13,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar13,1);
  FUN_100185e38(plVar13,1,3);
  FUN_100185e48(plVar13,1,0x10);
  FUN_100185e70(plVar13,0);
  uVar40 = DAT_101dbd4ac;
  local_a0 = DAT_101dbd4ac;
  local_c8 = thunk_FUN_100294a6c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x26e,&local_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar14,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar14,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar14,1);
  FUN_100185e38(plVar14,1,3);
  FUN_100185e48(plVar14,1,0x10);
  FUN_100185e70(plVar14,0);
  local_a0 = uVar40;
  local_c8 = thunk_FUN_100294a6c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x60c,&local_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar15,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x4dcc);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x4dcc) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar15);
  }
  FUN_1004e3120(&local_c8,"2");
  FUN_1006513c0(plVar15,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar16,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar16,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar16,1);
  FUN_100185e38(plVar16,1,2);
  FUN_100185e48(plVar16,1,4);
  FUN_100185e70(plVar16,0);
  local_a0 = uVar40;
  local_c8 = thunk_FUN_100294ad0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x9f6,&local_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar17,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar17,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar17,1);
  FUN_100185e38(plVar17,1,2);
  FUN_100185e48(plVar17,1,4);
  FUN_100185e70(plVar17,0);
  local_a0 = uVar40;
  local_c8 = thunk_FUN_100294ad0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xd94,&local_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar18,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x8a0c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x8a0c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar18);
  }
  FUN_1004e3120(&local_c8,"3");
  FUN_1006513c0(plVar18,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_100185730(plVar19,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_CAPTION",0);
  FUN_1001afd98(plVar19,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(plVar19,0);
  FUN_1001b0734(plVar19,0);
  FUN_100185e48(plVar19,1,0x8c);
  FUN_100185e2c(plVar19,0);
  local_a0 = uVar40;
  local_c8 = thunk_FUN_100294b34;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x117e,&local_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar20,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0xa95c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0xa95c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar20);
  }
  FUN_1004e3120(&local_c8,"4");
  FUN_1006513c0(plVar20,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  FUN_100652cac(plVar23,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  ppuVar33 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar36 == 0) {
    ppuVar33 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar24,*ppuVar34,&DAT_10115a168);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_1006513c0(plVar24,uVar38);
  uVar40 = FUN_1006425d0(plVar22,0,0,1,1);
  local_c8 = (code *)CONCAT44(fVar43,uVar40);
  FUN_10064e48c(plVar22,&local_c8);
  *(uint *)((long)param_1 + 0xabbc) = *(uint *)((long)param_1 + 0xabbc) | 0x10;
  uVar40 = DAT_101dbd458;
  local_a0 = DAT_101dbd458;
  local_c8 = FUN_100293bd8;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x1568,&local_c8);
  uVar35 = DAT_101dbd484;
  local_a0 = DAT_101dbd484;
  local_c8 = FUN_100293bd8;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x1568,&local_c8);
  FUN_100652cac(plVar26,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  FUN_100651594(plVar27,*ppuVar34,&DAT_10115a168);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_1006513c0(plVar27,uVar38);
  uVar41 = FUN_1006425d0(plVar25,0,0,1,1);
  local_c8 = (code *)CONCAT44(fVar43,uVar41);
  FUN_10064e48c(plVar25,&local_c8);
  *(uint *)((long)param_1 + 0xae94) = *(uint *)((long)param_1 + 0xae94) | 0x10;
  local_a0 = uVar40;
  local_c8 = FUN_100293bd8;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x15c3,&local_c8);
  local_a0 = uVar35;
  local_c8 = FUN_100293bd8;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x15c3,&local_c8);
  uVar38 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar28,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar40 = DAT_101d91884;
  local_a0 = DAT_101d91884;
  local_c8 = FUN_100293be4;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x162f,&local_c8);
  FUN_1001b4964(plVar28,1);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar29,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar40;
  local_c8 = FUN_100293c2c;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x18e6,&local_c8);
  FUN_100651038(param_1 + 0x19c8,*ppuVar33);
  FUN_1001b495c(0x3f000000,plVar29);
  if ((*(float *)(param_1 + 0x18ef) != 0.5) || (*(float *)((long)param_1 + 0xc77c) != 0.5)) {
    param_1[0x18ef] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar29);
  }
  FUN_100181b5c(0,0x41f00000,plVar29);
  FUN_100181c68(0x43133333,plVar29);
  FUN_1001b4964(plVar29,1);
  FUN_1001b4c0c(plVar29,0);
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0x1be1) != 0.0) || (*(float *)((long)param_1 + 0xdf0c) != 3.0)) {
    param_1[0x1be1] = 0x4040000000000000;
    FUN_1000200a0(plVar8);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_c8);
  if ((*(float *)(param_1 + 0x1be2) != 0.9) || (*(float *)((long)param_1 + 0xdf14) != 0.9)) {
    param_1[0x1be2] = 0x3f6666663f666666;
    FUN_1000200a0(plVar8);
  }
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar30,*ppuVar34);
  fVar43 = (float)FUN_100652e60(plVar8);
  fVar44 = *(float *)((long)param_1 + 0xdf0c) + -3.0;
  if ((*(float *)(param_1 + 0x1bbb) != fVar43) || (*(float *)((long)param_1 + 0xdddc) != fVar44)) {
    *(float *)(param_1 + 0x1bbb) = fVar43;
    *(float *)((long)param_1 + 0xdddc) = fVar44;
    FUN_1000200a0(plVar30);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x1bb3] + 0x28))(plVar30,&local_c8);
  fVar43 = (float)FUN_1006425d0(plVar9,0,0,1,1);
  FUN_1006425d0(plVar9,0,0,1,1);
  fVar44 = fVar44 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1ba4) != fVar43 * -0.5) ||
     (*(float *)((long)param_1 + 0xdd24) != fVar44)) {
    *(float *)(param_1 + 0x1ba4) = fVar43 * -0.5;
    *(float *)((long)param_1 + 0xdd24) = fVar44;
    FUN_1000200a0(plVar9);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar31,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar40;
  local_c8 = FUN_100293c2c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x1bf8,&local_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x1cda,*ppuVar34);
  FUN_1001b495c(0x3f000000,plVar31);
  if ((*(float *)(param_1 + 0x1c01) != 0.5) || (*(float *)((long)param_1 + 0xe00c) != 0.5)) {
    param_1[0x1c01] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar31);
  }
  FUN_100181b5c(0,0x41f00000,plVar31);
  FUN_100181c68(0x43133333,plVar31);
  FUN_1001b4964(plVar31,1);
  FUN_1001b4c0c(plVar31,0);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0x1ef3) != 0.0) || (*(float *)((long)param_1 + 0xf79c) != 3.0)) {
    param_1[0x1ef3] = 0x4040000000000000;
    FUN_1000200a0(plVar6);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_c8);
  if ((*(float *)(param_1 + 0x1ef4) != 0.9) || (*(float *)((long)param_1 + 0xf7a4) != 0.9)) {
    param_1[0x1ef4] = 0x3f6666663f666666;
    FUN_1000200a0(plVar6);
  }
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar32,*ppuVar34);
  fVar43 = (float)FUN_100652e60(plVar6);
  fVar44 = *(float *)((long)param_1 + 0xf79c) + -3.0;
  if ((*(float *)(param_1 + 0x1ecd) != fVar43) || (*(float *)((long)param_1 + 0xf66c) != fVar44)) {
    *(float *)(param_1 + 0x1ecd) = fVar43;
    *(float *)((long)param_1 + 0xf66c) = fVar44;
    FUN_1000200a0(plVar32);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x1ec5] + 0x28))(plVar32,&local_c8);
  fVar43 = (float)FUN_1006425d0(plVar7,0,0,1,1);
  FUN_1006425d0(plVar7,0,0,1,1);
  fVar44 = fVar44 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1eb6) != fVar43 * -0.5) ||
     (*(float *)((long)param_1 + 0xf5b4) != fVar44)) {
    *(float *)(param_1 + 0x1eb6) = fVar43 * -0.5;
    *(float *)((long)param_1 + 0xf5b4) = fVar44;
    FUN_1000200a0(plVar7);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_c8);
  FUN_100652cdc(plVar23,"checkbox_filled");
  FUN_100652cdc(plVar26,"checkbox_empty");
  *(undefined4 *)(param_1 + 0x1f23) = 0;
  return param_1;
}




void thunk_FUN_100294a6c(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x3058;
  uVar3 = FUN_1001afee4(param_1 + 0x1368);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100294960(param_1);
  return;
}




void thunk_FUN_100294ad0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x6c98;
  uVar3 = FUN_1001afee4(param_1 + 0x4fa8);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100294960(param_1);
  return;
}




void thunk_FUN_100294b34(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  lVar1 = param_1 + 0x8be8;
  FUN_10018577c(lVar1);
  uVar4 = FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x8f58) & 1) * 0x130 + 0x1e0);
  lVar2 = param_1 + 0xf900;
  FUN_1000153b4(lVar2,uVar4);
  uVar3 = FUN_1004e3634(lVar2);
  if (0x10 < uVar3) {
    FUN_1004e4154(auStack_40,lVar2,0,0x10);
    FUN_1004e3120(auStack_50,"...");
    FUN_1004e372c(auStack_40,auStack_50);
    if (pvStack_48 != (void *)0x0) {
      operator_delete__(pvStack_48);
    }
    FUN_100185730(lVar1,auStack_40);
    if (pvStack_38 != (void *)0x0) {
      operator_delete__(pvStack_38);
    }
  }
  FUN_100294960(param_1);
  return;
}




void FUN_100293bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100294c0c(param_1,param_4,param_5);
  return;
}




void FUN_100293be4(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d237ec,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100293c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100294c7c(param_1,param_2,param_5);
  return;
}




long * thunk_FUN_1002926b8(long *param_1)

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
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined4 uVar35;
  int iVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  long lVar42;
  float fVar43;
  float fVar44;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  plVar6 = param_1 + 0x1eeb;
  plVar7 = param_1 + 0x1eae;
  plVar8 = param_1 + 0x1bd9;
  plVar9 = param_1 + 0x1b9c;
  plVar10 = param_1 + 0x161d;
  puVar37 = (undefined8 *)FUN_10064e20c();
  puVar37[0x17] = 0;
  *puVar37 = &PTR_thunk_FUN_100294ff0_10147fea8;
  FUN_1006421a8(puVar37 + 0x18);
  param_1[0x18] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x29);
  param_1[0x29] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x3a;
  thunk_FUN_1005357f4(plVar1);
  FUN_1006421a8(param_1 + 0x17f);
  param_1[0x17f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 400;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x1ae;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x1cc;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0x1f2;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x210;
  FUN_1006421a8(plVar11);
  param_1[0x210] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar12 = param_1 + 0x221;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0x26d;
  thunk_FUN_100184f78();
  plVar14 = param_1 + 0x60b;
  thunk_FUN_100184f78();
  plVar15 = param_1 + 0x9a9;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0x9f5;
  thunk_FUN_100184f78();
  plVar17 = param_1 + 0xd93;
  thunk_FUN_100184f78();
  plVar18 = param_1 + 0x1131;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x117d;
  thunk_FUN_100184f78();
  plVar20 = param_1 + 0x151b;
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0x1541;
  thunk_FUN_100650e64(plVar21);
  plVar22 = param_1 + 0x1567;
  FUN_10064e264(plVar22);
  plVar23 = param_1 + 0x157e;
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0x159c;
  thunk_FUN_100650e64();
  plVar25 = param_1 + 0x15c2;
  FUN_10064e264(plVar25);
  plVar26 = param_1 + 0x15d9;
  thunk_FUN_100652c08();
  plVar27 = param_1 + 0x15f7;
  thunk_FUN_100650e64(plVar27);
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar28 = param_1 + 0x162e;
  thunk_FUN_100181304(plVar28,0);
  plVar29 = param_1 + 0x18e5;
  thunk_FUN_100181304(plVar29,0);
  FUN_10064e264(plVar9);
  plVar30 = param_1 + 0x1bb3;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar8);
  plVar31 = param_1 + 0x1bf7;
  thunk_FUN_100181304(plVar31,0);
  FUN_10064e264(plVar7);
  plVar32 = param_1 + 0x1ec5;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar6);
  FUN_10064e264();
  FUN_1004e313c(param_1 + 0x1f20);
  param_1[0x1f22] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100534ad8(plVar1,plVar2,1);
  FUN_100534ad8(plVar1,plVar3,1);
  FUN_100534ad8(plVar1,plVar4,1);
  FUN_100534ad8(plVar1,plVar5,1);
  FUN_100534ad8(plVar1,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar11,param_1 + 0x247,1);
  FUN_100642bd8(plVar11,plVar13,1);
  FUN_100642bd8(plVar11,plVar14,1);
  FUN_100642bd8(plVar11,plVar15,1);
  FUN_100642bd8(plVar11,param_1 + 0x9cf,1);
  FUN_100642bd8(plVar11,plVar16,1);
  FUN_100642bd8(plVar11,plVar17,1);
  FUN_100642bd8(plVar11,plVar18,1);
  FUN_100642bd8(plVar11,param_1 + 0x1157,1);
  FUN_100642bd8(plVar11,plVar19,1);
  FUN_100642bd8(plVar11,plVar20,1);
  FUN_100642bd8(plVar11,plVar21,1);
  FUN_100642bd8(plVar11,plVar22,1);
  FUN_100642bd8(plVar22,plVar23,1);
  FUN_100642bd8(plVar22,plVar24,1);
  FUN_100642bd8(plVar11,plVar25,1);
  FUN_100642bd8(plVar25,plVar26,1);
  FUN_100642bd8(plVar25,plVar27,1);
  FUN_100642bd8(plVar11,plVar10,1);
  FUN_100642bd8(plVar10,plVar28,1);
  FUN_100642bd8(plVar10,plVar29,1);
  FUN_100642bd8(plVar29,plVar9,1);
  FUN_100642bd8(plVar9,plVar8,1);
  FUN_100642bd8(plVar9,plVar30,1);
  FUN_100642bd8(plVar10,plVar31,1);
  FUN_100642bd8(plVar31,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar7,plVar32,1);
  FUN_100642bd8(plVar11,param_1 + 0x1f09,1);
  iVar36 = FUN_100126c88();
  uStack_c8 = (code *)CONCAT71(uStack_c8._1_7_,9);
  FUN_100534ebc(plVar1,&uStack_c8);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar39 = *(uint *)((long)param_1 + 0xd04);
  if ((uVar39 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xd04) = uVar39 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
    uVar39 = *(uint *)((long)param_1 + 0xd04);
  }
  *(uint *)((long)param_1 + 0xd04) = uVar39 | 0x10;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  fVar43 = *(float *)(param_1 + 0x1b7);
  if ((fVar43 != 1.5) || (fVar43 = *(float *)((long)param_1 + 0xdbc), fVar43 != 1.5)) {
    lVar42 = NEON_fmov(0x3fc00000,4);
    param_1[0x1b7] = lVar42;
    FUN_1000200a0(plVar3);
  }
  uVar39 = *(uint *)((long)param_1 + 0xdf4);
  if ((uVar39 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0xdf4) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar4,uVar38);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar4,*ppuVar34);
  if ((*(uint *)((long)param_1 + 0xee4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xee4) = *(uint *)((long)param_1 + 0xee4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar39 = *(uint *)((long)param_1 + 0x1014);
  if ((uVar39 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1014) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
    uVar39 = *(uint *)((long)param_1 + 0x1014);
  }
  *(uint *)((long)param_1 + 0x1014) = uVar39 | 0x10;
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x247,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x9cf,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x1157,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_FIELD_BLURB",0);
  FUN_1006513c0(plVar21,uVar38);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar12,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x118c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x118c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar12);
  }
  FUN_1004e3120(&uStack_c8,"1");
  FUN_1006513c0(plVar12,&uStack_c8);
  if (plStack_c0 != (void *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar13,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar13,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar13,1);
  FUN_100185e38(plVar13,1,3);
  FUN_100185e48(plVar13,1,0x10);
  FUN_100185e70(plVar13,0);
  uVar40 = DAT_101dbd4ac;
  uStack_a0 = DAT_101dbd4ac;
  uStack_c8 = thunk_FUN_100294a6c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x26e,&uStack_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar14,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar14,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar14,1);
  FUN_100185e38(plVar14,1,3);
  FUN_100185e48(plVar14,1,0x10);
  FUN_100185e70(plVar14,0);
  uStack_a0 = uVar40;
  uStack_c8 = thunk_FUN_100294a6c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x60c,&uStack_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar15,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x4dcc);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x4dcc) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar15);
  }
  FUN_1004e3120(&uStack_c8,"2");
  FUN_1006513c0(plVar15,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar16,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar16,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar16,1);
  FUN_100185e38(plVar16,1,2);
  FUN_100185e48(plVar16,1,4);
  FUN_100185e70(plVar16,0);
  uStack_a0 = uVar40;
  uStack_c8 = thunk_FUN_100294ad0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x9f6,&uStack_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar17,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar17,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar17,1);
  FUN_100185e38(plVar17,1,2);
  FUN_100185e48(plVar17,1,4);
  FUN_100185e70(plVar17,0);
  uStack_a0 = uVar40;
  uStack_c8 = thunk_FUN_100294ad0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xd94,&uStack_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar18,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x8a0c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x8a0c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar18);
  }
  FUN_1004e3120(&uStack_c8,"3");
  FUN_1006513c0(plVar18,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_100185730(plVar19,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_CAPTION",0);
  FUN_1001afd98(plVar19,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(plVar19,0);
  FUN_1001b0734(plVar19,0);
  FUN_100185e48(plVar19,1,0x8c);
  FUN_100185e2c(plVar19,0);
  uStack_a0 = uVar40;
  uStack_c8 = thunk_FUN_100294b34;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x117e,&uStack_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar20,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0xa95c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0xa95c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar20);
  }
  FUN_1004e3120(&uStack_c8,"4");
  FUN_1006513c0(plVar20,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  FUN_100652cac(plVar23,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  ppuVar33 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar36 == 0) {
    ppuVar33 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar24,*ppuVar34,&DAT_10115a168);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_1006513c0(plVar24,uVar38);
  uVar40 = FUN_1006425d0(plVar22,0,0,1,1);
  uStack_c8 = (code *)CONCAT44(fVar43,uVar40);
  FUN_10064e48c(plVar22,&uStack_c8);
  *(uint *)((long)param_1 + 0xabbc) = *(uint *)((long)param_1 + 0xabbc) | 0x10;
  uVar40 = DAT_101dbd458;
  uStack_a0 = DAT_101dbd458;
  uStack_c8 = FUN_100293bd8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x1568,&uStack_c8);
  uVar35 = DAT_101dbd484;
  uStack_a0 = DAT_101dbd484;
  uStack_c8 = FUN_100293bd8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x1568,&uStack_c8);
  FUN_100652cac(plVar26,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  FUN_100651594(plVar27,*ppuVar34,&DAT_10115a168);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_1006513c0(plVar27,uVar38);
  uVar41 = FUN_1006425d0(plVar25,0,0,1,1);
  uStack_c8 = (code *)CONCAT44(fVar43,uVar41);
  FUN_10064e48c(plVar25,&uStack_c8);
  *(uint *)((long)param_1 + 0xae94) = *(uint *)((long)param_1 + 0xae94) | 0x10;
  uStack_a0 = uVar40;
  uStack_c8 = FUN_100293bd8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x15c3,&uStack_c8);
  uStack_a0 = uVar35;
  uStack_c8 = FUN_100293bd8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x15c3,&uStack_c8);
  uVar38 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar28,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar40 = DAT_101d91884;
  uStack_a0 = DAT_101d91884;
  uStack_c8 = FUN_100293be4;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x162f,&uStack_c8);
  FUN_1001b4964(plVar28,1);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar29,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar40;
  uStack_c8 = FUN_100293c2c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x18e6,&uStack_c8);
  FUN_100651038(param_1 + 0x19c8,*ppuVar33);
  FUN_1001b495c(0x3f000000,plVar29);
  if ((*(float *)(param_1 + 0x18ef) != 0.5) || (*(float *)((long)param_1 + 0xc77c) != 0.5)) {
    param_1[0x18ef] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar29);
  }
  FUN_100181b5c(0,0x41f00000,plVar29);
  FUN_100181c68(0x43133333,plVar29);
  FUN_1001b4964(plVar29,1);
  FUN_1001b4c0c(plVar29,0);
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0x1be1) != 0.0) || (*(float *)((long)param_1 + 0xdf0c) != 3.0)) {
    param_1[0x1be1] = 0x4040000000000000;
    FUN_1000200a0(plVar8);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar8 + 0x28))(plVar8,&uStack_c8);
  if ((*(float *)(param_1 + 0x1be2) != 0.9) || (*(float *)((long)param_1 + 0xdf14) != 0.9)) {
    param_1[0x1be2] = 0x3f6666663f666666;
    FUN_1000200a0(plVar8);
  }
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar30,*ppuVar34);
  fVar43 = (float)FUN_100652e60(plVar8);
  fVar44 = *(float *)((long)param_1 + 0xdf0c) + -3.0;
  if ((*(float *)(param_1 + 0x1bbb) != fVar43) || (*(float *)((long)param_1 + 0xdddc) != fVar44)) {
    *(float *)(param_1 + 0x1bbb) = fVar43;
    *(float *)((long)param_1 + 0xdddc) = fVar44;
    FUN_1000200a0(plVar30);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x1bb3] + 0x28))(plVar30,&uStack_c8);
  fVar43 = (float)FUN_1006425d0(plVar9,0,0,1,1);
  FUN_1006425d0(plVar9,0,0,1,1);
  fVar44 = fVar44 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1ba4) != fVar43 * -0.5) ||
     (*(float *)((long)param_1 + 0xdd24) != fVar44)) {
    *(float *)(param_1 + 0x1ba4) = fVar43 * -0.5;
    *(float *)((long)param_1 + 0xdd24) = fVar44;
    FUN_1000200a0(plVar9);
  }
  uStack_c8 = (code *)0x0;
  (**(code **)(*plVar9 + 0x28))(plVar9,&uStack_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar31,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar40;
  uStack_c8 = FUN_100293c2c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x1bf8,&uStack_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x1cda,*ppuVar34);
  FUN_1001b495c(0x3f000000,plVar31);
  if ((*(float *)(param_1 + 0x1c01) != 0.5) || (*(float *)((long)param_1 + 0xe00c) != 0.5)) {
    param_1[0x1c01] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar31);
  }
  FUN_100181b5c(0,0x41f00000,plVar31);
  FUN_100181c68(0x43133333,plVar31);
  FUN_1001b4964(plVar31,1);
  FUN_1001b4c0c(plVar31,0);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0x1ef3) != 0.0) || (*(float *)((long)param_1 + 0xf79c) != 3.0)) {
    param_1[0x1ef3] = 0x4040000000000000;
    FUN_1000200a0(plVar6);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&uStack_c8);
  if ((*(float *)(param_1 + 0x1ef4) != 0.9) || (*(float *)((long)param_1 + 0xf7a4) != 0.9)) {
    param_1[0x1ef4] = 0x3f6666663f666666;
    FUN_1000200a0(plVar6);
  }
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar32,*ppuVar34);
  fVar43 = (float)FUN_100652e60(plVar6);
  fVar44 = *(float *)((long)param_1 + 0xf79c) + -3.0;
  if ((*(float *)(param_1 + 0x1ecd) != fVar43) || (*(float *)((long)param_1 + 0xf66c) != fVar44)) {
    *(float *)(param_1 + 0x1ecd) = fVar43;
    *(float *)((long)param_1 + 0xf66c) = fVar44;
    FUN_1000200a0(plVar32);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x1ec5] + 0x28))(plVar32,&uStack_c8);
  fVar43 = (float)FUN_1006425d0(plVar7,0,0,1,1);
  FUN_1006425d0(plVar7,0,0,1,1);
  fVar44 = fVar44 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1eb6) != fVar43 * -0.5) ||
     (*(float *)((long)param_1 + 0xf5b4) != fVar44)) {
    *(float *)(param_1 + 0x1eb6) = fVar43 * -0.5;
    *(float *)((long)param_1 + 0xf5b4) = fVar44;
    FUN_1000200a0(plVar7);
  }
  uStack_c8 = (code *)0x0;
  (**(code **)(*plVar7 + 0x28))(plVar7,&uStack_c8);
  FUN_100652cdc(plVar23,"checkbox_filled");
  FUN_100652cdc(plVar26,"checkbox_empty");
  *(undefined4 *)(param_1 + 0x1f23) = 0;
  return param_1;
}




void FUN_100293c38(long *param_1)

{
  FUN_10064e47c(param_1 + 0x3a);
                    /* WARNING: Could not recover jumptable at 0x000100293c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_100293c68(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined **ppuVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_c0;
  float fStack_bc;
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  float local_ac;
  undefined1 *local_a8;
  
  uVar8 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar8,&local_ac,auStack_b0,auStack_b4);
  iVar7 = FUN_100126c88();
  FUN_10064e47c(local_ac,0x43160000,param_1 + 0xc80);
  bVar6 = false;
  if ((*(float *)(param_1 + 0xdb0) == 80.0) && (bVar6 = false, !NAN(*(float *)(param_1 + 0xdb4)))) {
    bVar6 = *(float *)(param_1 + 0xdb4) == 75.0;
  }
  if (!bVar6) {
    *(undefined8 *)(param_1 + 0xdb0) = 0x4296000042a00000;
    FUN_1000200a0(param_1 + 0xd70);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xd70) + 0x28))(param_1 + 0xd70,&local_a8);
  if ((*(float *)(param_1 + 0xea0) != 160.0) || (*(float *)(param_1 + 0xea4) != 75.0)) {
    *(undefined8 *)(param_1 + 0xea0) = 0x4296000043200000;
    FUN_1000200a0(param_1 + 0xe60);
  }
  local_a8 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0xe60) + 0x28))(param_1 + 0xe60,&local_a8);
  if (*(float *)(param_1 + 0x10c4) != 150.0) {
    *(undefined4 *)(param_1 + 0x10c4) = 0x43160000;
    FUN_1000200a0(param_1 + 0x1080);
  }
  lVar1 = param_1 + 0x1238;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(lVar1,*ppuVar5);
  if ((*(float *)(param_1 + 0x1278) != 160.0) || (*(float *)(param_1 + 0x127c) != 56.0)) {
    *(undefined8 *)(param_1 + 0x1278) = 0x4260000043200000;
    FUN_1000200a0(lVar1);
  }
  fVar14 = local_ac + -320.0;
  FUN_100651708(fVar14,lVar1,1);
  fVar12 = 80.0;
  if ((*(float *)(param_1 + 0x1148) != 80.0) ||
     (fVar12 = 42.0, *(float *)(param_1 + 0x114c) != 42.0)) {
    *(undefined8 *)(param_1 + 0x1148) = 0x4228000042a00000;
    FUN_1000200a0(param_1 + 0x1108);
  }
  local_a8 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x1108) + 0x28))(param_1 + 0x1108,&local_a8);
  FUN_100651184(lVar1);
  if ((*(float *)(param_1 + 0x13a8) != 160.0) || (*(float *)(param_1 + 0x13ac) != fVar12 + 104.0)) {
    *(undefined4 *)(param_1 + 0x13a8) = 0x43200000;
    *(float *)(param_1 + 0x13ac) = fVar12 + 104.0;
    FUN_1000200a0(param_1 + 0x1368);
  }
  FUN_1001853c0(fVar14,0xbf800000,param_1 + 0x1368);
  if ((*(float *)(param_1 + 0x3098) != 160.0) || (*(float *)(param_1 + 0x309c) != fVar12 + 254.0)) {
    *(undefined4 *)(param_1 + 0x3098) = 0x43200000;
    *(float *)(param_1 + 0x309c) = fVar12 + 254.0;
    FUN_1000200a0(param_1 + 0x3058);
  }
  FUN_1001853c0(fVar14,0xbf800000,param_1 + 0x3058);
  lVar1 = param_1 + 0x4e78;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(lVar1,*ppuVar5);
  if ((*(float *)(param_1 + 0x4eb8) != 160.0) || (*(float *)(param_1 + 0x4ebc) != fVar12 + 384.0)) {
    *(undefined4 *)(param_1 + 0x4eb8) = 0x43200000;
    *(float *)(param_1 + 0x4ebc) = fVar12 + 384.0;
    FUN_1000200a0(lVar1);
  }
  FUN_100651708(fVar14,lVar1,1);
  fVar11 = *(float *)(param_1 + 0x4d88);
  if ((fVar11 != 80.0) || (fVar11 = *(float *)(param_1 + 0x4d8c), fVar11 != fVar12 + 370.0)) {
    *(float *)(param_1 + 0x4d88) = 80.0;
    *(float *)(param_1 + 0x4d8c) = fVar12 + 370.0;
    FUN_1000200a0(param_1 + 0x4d48);
  }
  plVar2 = (long *)(param_1 + 0x8988);
  local_a8 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x4d48) + 0x28))(param_1 + 0x4d48,&local_a8);
  FUN_100651184(lVar1);
  fVar11 = fVar12 + 432.0 + fVar11;
  if ((*(float *)(param_1 + 0x4fe8) != 160.0) || (*(float *)(param_1 + 0x4fec) != fVar11)) {
    *(undefined4 *)(param_1 + 0x4fe8) = 0x43200000;
    *(float *)(param_1 + 0x4fec) = fVar11;
    FUN_1000200a0(param_1 + 0x4fa8);
  }
  FUN_1001853c0(fVar14,0xbf800000,param_1 + 0x4fa8);
  if ((*(float *)(param_1 + 0x6cd8) != 160.0) || (*(float *)(param_1 + 0x6cdc) != fVar11 + 150.0)) {
    *(undefined4 *)(param_1 + 0x6cd8) = 0x43200000;
    *(float *)(param_1 + 0x6cdc) = fVar11 + 150.0;
    FUN_1000200a0(param_1 + 0x6c98);
  }
  FUN_1001853c0(fVar14,0xbf800000,param_1 + 0x6c98);
  lVar1 = param_1 + 0x8ab8;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(lVar1,*ppuVar5);
  if ((*(float *)(param_1 + 0x8af8) != 160.0) || (*(float *)(param_1 + 0x8afc) != fVar11 + 280.0)) {
    *(undefined4 *)(param_1 + 0x8af8) = 0x43200000;
    *(float *)(param_1 + 0x8afc) = fVar11 + 280.0;
    FUN_1000200a0(lVar1);
  }
  plVar3 = (long *)(param_1 + 0xa8d8);
  FUN_100651708(fVar14,lVar1,1);
  fVar12 = *(float *)(param_1 + 0x89c8);
  if ((fVar12 != 80.0) || (fVar12 = *(float *)(param_1 + 0x89cc), fVar12 != fVar11 + 266.0)) {
    *(undefined4 *)(param_1 + 0x89c8) = 0x42a00000;
    *(float *)(param_1 + 0x89cc) = fVar11 + 266.0;
    FUN_1000200a0(plVar2);
  }
  local_a8 = (undefined1 *)0x3f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a8);
  FUN_100651184(lVar1);
  fVar12 = fVar11 + 328.0 + fVar12;
  if ((*(float *)(param_1 + 0x8c28) != 160.0) || (*(float *)(param_1 + 0x8c2c) != fVar12)) {
    *(undefined4 *)(param_1 + 0x8c28) = 0x43200000;
    *(float *)(param_1 + 0x8c2c) = fVar12;
    FUN_1000200a0(param_1 + 0x8be8);
  }
  FUN_1001853c0(fVar14,0xbf800000,param_1 + 0x8be8);
  lVar1 = param_1 + 0xaa08;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(lVar1,*ppuVar5);
  if ((*(float *)(param_1 + 0xaa48) != 160.0) || (*(float *)(param_1 + 0xaa4c) != fVar12 + 130.0)) {
    *(undefined4 *)(param_1 + 0xaa48) = 0x43200000;
    *(float *)(param_1 + 0xaa4c) = fVar12 + 130.0;
    FUN_1000200a0(lVar1);
  }
  plVar2 = (long *)(param_1 + 0xabf0);
  FUN_100651708(fVar14,lVar1,1);
  fVar14 = *(float *)(param_1 + 0xa918);
  if ((fVar14 != 80.0) || (fVar14 = *(float *)(param_1 + 0xa91c), fVar14 != fVar12 + 116.0)) {
    *(undefined4 *)(param_1 + 0xa918) = 0x42a00000;
    *(float *)(param_1 + 0xa91c) = fVar12 + 116.0;
    FUN_1000200a0(plVar3);
  }
  local_a8 = (undefined1 *)0x3f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_a8);
  FUN_100651184(lVar1);
  fVar12 = fVar12 + 178.0 + fVar14;
  lVar1 = param_1 + 0xab38;
  local_c0 = (float)FUN_100642888(lVar1,0,0,1,1);
  fVar11 = local_ac * 0.25;
  if (local_c0 <= fVar11) {
    local_c0 = fVar11;
  }
  fStack_bc = fVar14 + 20.0;
  FUN_10064e48c(lVar1,&local_c0);
  fVar14 = fVar12 + -10.0;
  if ((*(float *)(param_1 + 0xab78) != 160.0) || (*(float *)(param_1 + 0xab7c) != fVar14)) {
    *(undefined4 *)(param_1 + 0xab78) = 0x43200000;
    *(float *)(param_1 + 0xab7c) = fVar14;
    FUN_1000200a0(lVar1);
  }
  if ((*(float *)(param_1 + 0xac30) != 0.0) || (*(float *)(param_1 + 0xac34) != 54.0)) {
    *(undefined8 *)(param_1 + 0xac30) = 0x4258000000000000;
    FUN_1000200a0(plVar2);
  }
  plVar3 = (long *)(param_1 + 0xaec8);
  local_a8 = (undefined1 *)0x3f80000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a8);
  lVar1 = param_1 + 0xace0;
  fVar9 = *(float *)(param_1 + 0xac30) + 54.0;
  if ((*(float *)(param_1 + 0xad20) != fVar9) || (*(float *)(param_1 + 0xad24) != 62.0)) {
    *(float *)(param_1 + 0xad20) = fVar9;
    *(undefined4 *)(param_1 + 0xad24) = 0x42780000;
    FUN_1000200a0(lVar1);
  }
  local_a8 = (undefined1 *)0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0xace0) + 0x28))(lVar1,&local_a8);
  fVar13 = 0.5;
  fVar9 = local_ac * 0.5 + 6.0;
  fVar15 = *(float *)(param_1 + 0xad20);
  fVar10 = (float)FUN_10064259c(lVar1);
  fVar15 = fVar15 + fVar10 + 20.0;
  if (fVar9 <= fVar15) {
    fVar9 = fVar15;
  }
  lVar1 = param_1 + 0xae10;
  local_c0 = (float)FUN_100642888(lVar1,0,0,1,1);
  if (local_c0 <= fVar11) {
    local_c0 = fVar11;
  }
  fStack_bc = fVar13 + 20.0;
  FUN_10064e48c(lVar1,&local_c0);
  if ((*(float *)(param_1 + 0xae50) != fVar9) || (*(float *)(param_1 + 0xae54) != fVar14)) {
    *(float *)(param_1 + 0xae50) = fVar9;
    *(float *)(param_1 + 0xae54) = fVar14;
    FUN_1000200a0(lVar1);
  }
  plVar2 = (long *)(param_1 + 0xb170);
  if ((*(float *)(param_1 + 0xaf08) != 0.0) || (*(float *)(param_1 + 0xaf0c) != 54.0)) {
    *(undefined8 *)(param_1 + 0xaf08) = 0x4258000000000000;
    FUN_1000200a0(plVar3);
  }
  local_a8 = (undefined1 *)0x3f80000000000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_a8);
  plVar3 = (long *)(param_1 + 0xafb8);
  fVar14 = *(float *)(param_1 + 0xaf08) + 54.0;
  fVar11 = *(float *)(param_1 + 0xaff8);
  if ((fVar11 != fVar14) || (fVar11 = *(float *)(param_1 + 0xaffc), fVar11 != 62.0)) {
    *(float *)(param_1 + 0xaff8) = fVar14;
    *(undefined4 *)(param_1 + 0xaffc) = 0x42780000;
    FUN_1000200a0(plVar3);
  }
  local_a8 = (undefined1 *)0x3f80000000000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_a8);
  fVar9 = (float)FUN_10064e3cc(plVar2);
  lVar1 = param_1 + 0xc728;
  fVar10 = *(float *)(param_1 + 0xc76c);
  FUN_10064e3cc(lVar1);
  fVar14 = fVar11;
  FUN_10064e3cc(plVar2);
  fVar10 = fVar10 + (fVar11 - fVar14) * 0.5;
  if ((*(float *)(param_1 + 0xb1b0) != fVar9 * 0.5) || (*(float *)(param_1 + 0xb1b4) != fVar10)) {
    *(float *)(param_1 + 0xb1b0) = fVar9 * 0.5;
    *(float *)(param_1 + 0xb1b4) = fVar10;
    FUN_1000200a0(plVar2);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a8);
  lVar4 = param_1 + 0xdfb8;
  fVar14 = (float)FUN_10064e3cc(lVar4);
  fVar14 = local_ac + fVar14 * -0.5 + -80.0;
  fVar11 = *(float *)(param_1 + 0xdff8);
  if (fVar11 != fVar14) {
    *(float *)(param_1 + 0xdff8) = fVar14;
    FUN_1000200a0(lVar4);
    fVar11 = *(float *)(param_1 + 0xdff8);
  }
  fVar14 = (float)FUN_10064e3cc(lVar1);
  fVar14 = (fVar11 - fVar14) + -16.0;
  if (*(float *)(param_1 + 0xc768) != fVar14) {
    *(float *)(param_1 + 0xc768) = fVar14;
    FUN_1000200a0(lVar1);
  }
  fVar12 = fVar12 + 210.0;
  fVar11 = *(float *)(param_1 + 0xdff8);
  fVar14 = (float)FUN_10064e3cc(lVar4);
  fVar14 = ((local_ac - fVar11) + fVar14 * -0.5) * 0.5;
  fVar11 = *(float *)(param_1 + 0xb128);
  if ((fVar11 != fVar14) || (fVar11 = *(float *)(param_1 + 0xb12c), fVar11 != fVar12)) {
    *(float *)(param_1 + 0xb128) = fVar14;
    *(float *)(param_1 + 0xb12c) = fVar12;
    FUN_1000200a0(param_1 + 0xb0e8);
  }
  FUN_10064e3cc(lVar4);
  if (*(float *)(param_1 + 0xf88c) != fVar11 + fVar12) {
    *(float *)(param_1 + 0xf88c) = fVar11 + fVar12;
    FUN_1000200a0(param_1 + 0xf848);
  }
  FUN_100534af8(param_1 + 0x1d0);
  return;
}




void FUN_1002946ec(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined8 local_68;
  
  plVar1 = (long *)(param_1 + 0xf570);
  plVar2 = (long *)(param_1 + 0xdce0);
  *(undefined4 *)(param_1 + 0xf910) = param_3;
  *(undefined4 *)(param_1 + 0xf914) = param_2;
  FUN_1004e313c(auStack_78);
  FUN_1004e38ac(auStack_78,"%d");
  lVar3 = param_1 + 0xf628;
  FUN_1006513c0(lVar3,auStack_78);
  fVar5 = (float)FUN_100652e60(param_1 + 0xf758);
  fVar6 = *(float *)(param_1 + 0xf79c) + -3.0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0xf668) == fVar5) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0xf66c)) && !NAN(fVar6))) {
    bVar4 = *(float *)(param_1 + 0xf66c) == fVar6;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0xf668) = fVar5;
    *(float *)(param_1 + 0xf66c) = fVar6;
    FUN_1000200a0(lVar3);
  }
  local_68 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0xf628) + 0x28))(lVar3,&local_68);
  fVar5 = (float)FUN_1006425d0(plVar1,0,0,1,1);
  FUN_1006425d0(plVar1,0,0,1,1);
  fVar6 = fVar6 * -0.5 + 10.0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0xf5b0) == fVar5 * -0.5) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0xf5b4)) && !NAN(fVar6))) {
    bVar4 = *(float *)(param_1 + 0xf5b4) == fVar6;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0xf5b0) = fVar5 * -0.5;
    *(float *)(param_1 + 0xf5b4) = fVar6;
    FUN_1000200a0(plVar1);
  }
  local_68 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_68);
  FUN_1004e38ac(auStack_78,"%d");
  lVar3 = param_1 + 0xdd98;
  FUN_1006513c0(lVar3,auStack_78);
  fVar5 = (float)FUN_100652e60(param_1 + 0xdec8);
  fVar6 = *(float *)(param_1 + 0xdf0c) + -3.0;
  if ((*(float *)(param_1 + 0xddd8) != fVar5) || (*(float *)(param_1 + 0xdddc) != fVar6)) {
    *(float *)(param_1 + 0xddd8) = fVar5;
    *(float *)(param_1 + 0xdddc) = fVar6;
    FUN_1000200a0(lVar3);
  }
  local_68 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0xdd98) + 0x28))(lVar3,&local_68);
  fVar5 = (float)FUN_1006425d0(plVar2,0,0,1,1);
  FUN_1006425d0(plVar2,0,0,1,1);
  fVar6 = fVar6 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xdd20) != fVar5 * -0.5) || (*(float *)(param_1 + 0xdd24) != fVar6)) {
    *(float *)(param_1 + 0xdd20) = fVar5 * -0.5;
    *(float *)(param_1 + 0xdd24) = fVar6;
    FUN_1000200a0(plVar2);
  }
  local_68 = 0;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_68);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  return;
}




void FUN_100294960(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_100185ddc(param_1 + 0x1368);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_100185ddc(param_1 + 0x3058);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_1001afee4(param_1 + 0x1368);
      iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
      if (iVar1 != 0) {
        uVar3 = FUN_1001afee4(param_1 + 0x3058);
        iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
        if (iVar1 != 0) {
          uVar2 = FUN_100185ddc(param_1 + 0x4fa8);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_100185ddc(param_1 + 0x6c98);
            if ((uVar2 & 1) == 0) {
              uVar3 = FUN_1001afee4(param_1 + 0x4fa8);
              iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
              if (iVar1 != 0) {
                uVar3 = FUN_1001afee4(param_1 + 0x6c98);
                iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
                if ((iVar1 != 0) && (iVar1 = FUN_100185ddc(param_1 + 0x8be8), iVar1 == 0)) {
                  uVar3 = 1;
                  goto LAB_100294a38;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_100294a38:
  FUN_1001b4c0c(param_1 + 0xc728,uVar3);
  FUN_1001b4c0c(param_1 + 0xdfb8,uVar3);
  return;
}




void FUN_100294a6c(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x3058;
  uVar3 = FUN_1001afee4(param_1 + 0x1368);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100294960(param_1);
  return;
}




void FUN_100294ad0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x6c98;
  uVar3 = FUN_1001afee4(param_1 + 0x4fa8);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100294960(param_1);
  return;
}




void FUN_100294b34(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar1 = param_1 + 0x8be8;
  FUN_10018577c(lVar1);
  uVar4 = FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x8f58) & 1) * 0x130 + 0x1e0);
  lVar2 = param_1 + 0xf900;
  FUN_1000153b4(lVar2,uVar4);
  uVar3 = FUN_1004e3634(lVar2);
  if (0x10 < uVar3) {
    FUN_1004e4154(auStack_40,lVar2,0,0x10);
    FUN_1004e3120(auStack_50,"...");
    FUN_1004e372c(auStack_40,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_100185730(lVar1,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  FUN_100294960(param_1);
  return;
}




void FUN_100294c0c(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  FUN_100644b14(param_2);
  pcVar1 = "checkbox_filled";
  if (param_3 != 0) {
    pcVar1 = "checkbox_empty";
  }
  FUN_100652cdc(param_1 + 0xabf0,pcVar1);
  pcVar1 = "checkbox_filled";
  if (param_3 != 1) {
    pcVar1 = "checkbox_empty";
  }
  FUN_100652cdc(param_1 + 0xaec8,pcVar1);
  *(int *)(param_1 + 0xf918) = param_3;
  return;
}




void FUN_100294c7c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (param_3 == 1) {
    if (*(int *)(param_1 + 0xf910) == -1) {
      return;
    }
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_GLORY_DIALOG_TEXT",0);
    thunk_FUN_1004e439c(auStack_50,uVar1);
    FUN_1004e3120(auStack_60,"[COST]");
    FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TITLE",0);
    uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar3 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    pcVar4 = thunk_FUN_100294f00;
  }
  else {
    if (param_3 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0xf914) == -1) {
      return;
    }
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_ICE_DIALOG_TEXT",0);
    thunk_FUN_1004e439c(auStack_50,uVar1);
    FUN_1004e3120(auStack_60,"[COST]");
    FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TITLE",0);
    uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar3 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    pcVar4 = thunk_FUN_100294e70;
  }
  FUN_1001e3120(uVar1,auStack_50,uVar2,uVar3,param_1,pcVar4,0);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void thunk_FUN_100294e70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x16d8) & 1) * 0x130 + 0x1548);
  uVar2 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x5318) & 1) * 0x130 + 0x5188);
                    /* WARNING: Could not recover jumptable at 0x000100294efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1,uVar1,uVar2,param_1 + 0xf900,*(undefined4 *)(param_1 + 0xf918));
  return;
}




void thunk_FUN_100294f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x16d8) & 1) * 0x130 + 0x1548);
  uVar2 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x5318) & 1) * 0x130 + 0x5188);
                    /* WARNING: Could not recover jumptable at 0x000100294f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,0,uVar1,uVar2,param_1 + 0xf900,*(undefined4 *)(param_1 + 0xf918));
  return;
}




void FUN_100294e70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x16d8) & 1) * 0x130 + 0x1548);
  uVar2 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x5318) & 1) * 0x130 + 0x5188);
                    /* WARNING: Could not recover jumptable at 0x000100294efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1,uVar1,uVar2,param_1 + 0xf900,*(undefined4 *)(param_1 + 0xf918));
  return;
}




void FUN_100294f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x16d8) & 1) * 0x130 + 0x1548);
  uVar2 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x5318) & 1) * 0x130 + 0x5188);
                    /* WARNING: Could not recover jumptable at 0x000100294f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,0,uVar1,uVar2,param_1 + 0xf900,*(undefined4 *)(param_1 + 0xf918));
  return;
}




void FUN_100294f90(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d237ec,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void thunk_FUN_100294ff0(void)

{
  FUN_100294ff0();
  return;
}




void FUN_100294fdc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100294ff0();
  operator_delete(pvVar1);
  return;
}




void FUN_100294ff0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100294ff0_10147fea8;
  if ((void *)param_1[0x1f21] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f21]);
    param_1[0x1f21] = 0;
    param_1[0x1f20] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x1f09);
  param_1[0x1eeb] = &PTR_FUN_1014a7108;
  param_1[0x1f02] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1f05);
  FUN_10064e2bc(param_1 + 0x1eeb);
  thunk_FUN_100651068(param_1 + 0x1ec5);
  thunk_FUN_10064e2bc(param_1 + 0x1eae);
  FUN_10003bd40(param_1 + 0x1bf7);
  param_1[0x1bd9] = &PTR_FUN_1014a7108;
  param_1[0x1bf0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1bf3);
  FUN_10064e2bc(param_1 + 0x1bd9);
  thunk_FUN_100651068(param_1 + 0x1bb3);
  thunk_FUN_10064e2bc(param_1 + 0x1b9c);
  FUN_10003bd40(param_1 + 0x18e5);
  FUN_10003bd40(param_1 + 0x162e);
  FUN_10064221c(param_1 + 0x161d);
  thunk_FUN_100651068(param_1 + 0x15f7);
  param_1[0x15d9] = &PTR_FUN_1014a7108;
  param_1[0x15f0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15f3);
  FUN_10064e2bc(param_1 + 0x15d9);
  thunk_FUN_10064e2bc(param_1 + 0x15c2);
  thunk_FUN_100651068(param_1 + 0x159c);
  param_1[0x157e] = &PTR_FUN_1014a7108;
  param_1[0x1595] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1598);
  FUN_10064e2bc(param_1 + 0x157e);
  thunk_FUN_10064e2bc(param_1 + 0x1567);
  thunk_FUN_100651068(param_1 + 0x1541);
  thunk_FUN_100651068(param_1 + 0x151b);
  param_1[0x117d] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x1515] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1515]);
    param_1[0x1515] = 0;
    param_1[0x1514] = 0;
  }
  if ((void *)param_1[0x1513] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1513]);
    param_1[0x1513] = 0;
    param_1[0x1512] = 0;
  }
  if ((void *)param_1[0x1511] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1511]);
    param_1[0x1511] = 0;
    param_1[0x1510] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x14ea);
  FUN_10064e2bc(param_1 + 0x14cf);
  FUN_10064e2bc(param_1 + 0x14b4);
  FUN_10003bd40(param_1 + 0x11fd);
  FUN_100186088(param_1 + 0x117d);
  thunk_FUN_100651068(param_1 + 0x1157);
  thunk_FUN_100651068(param_1 + 0x1131);
  param_1[0xd93] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x112b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x112b]);
    param_1[0x112b] = 0;
    param_1[0x112a] = 0;
  }
  if ((void *)param_1[0x1129] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1129]);
    param_1[0x1129] = 0;
    param_1[0x1128] = 0;
  }
  if ((void *)param_1[0x1127] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1127]);
    param_1[0x1127] = 0;
    param_1[0x1126] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x1100);
  FUN_10064e2bc(param_1 + 0x10e5);
  FUN_10064e2bc(param_1 + 0x10ca);
  FUN_10003bd40(param_1 + 0xe13);
  FUN_100186088(param_1 + 0xd93);
  param_1[0x9f5] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xd8d] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd8d]);
    param_1[0xd8d] = 0;
    param_1[0xd8c] = 0;
  }
  if ((void *)param_1[0xd8b] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd8b]);
    param_1[0xd8b] = 0;
    param_1[0xd8a] = 0;
  }
  if ((void *)param_1[0xd89] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd89]);
    param_1[0xd89] = 0;
    param_1[0xd88] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xd62);
  FUN_10064e2bc(param_1 + 0xd47);
  FUN_10064e2bc(param_1 + 0xd2c);
  FUN_10003bd40(param_1 + 0xa75);
  FUN_100186088(param_1 + 0x9f5);
  thunk_FUN_100651068(param_1 + 0x9cf);
  thunk_FUN_100651068(param_1 + 0x9a9);
  param_1[0x60b] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x9a3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9a3]);
    param_1[0x9a3] = 0;
    param_1[0x9a2] = 0;
  }
  if ((void *)param_1[0x9a1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9a1]);
    param_1[0x9a1] = 0;
    param_1[0x9a0] = 0;
  }
  if ((void *)param_1[0x99f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x99f]);
    param_1[0x99f] = 0;
    param_1[0x99e] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x978);
  FUN_10064e2bc(param_1 + 0x95d);
  FUN_10064e2bc(param_1 + 0x942);
  FUN_10003bd40(param_1 + 0x68b);
  FUN_100186088(param_1 + 0x60b);
  param_1[0x26d] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x605] != (void *)0x0) {
    operator_delete__((void *)param_1[0x605]);
    param_1[0x605] = 0;
    param_1[0x604] = 0;
  }
  if ((void *)param_1[0x603] != (void *)0x0) {
    operator_delete__((void *)param_1[0x603]);
    param_1[0x603] = 0;
    param_1[0x602] = 0;
  }
  if ((void *)param_1[0x601] != (void *)0x0) {
    operator_delete__((void *)param_1[0x601]);
    param_1[0x601] = 0;
    param_1[0x600] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x5da);
  FUN_10064e2bc(param_1 + 0x5bf);
  FUN_10064e2bc(param_1 + 0x5a4);
  FUN_10003bd40(param_1 + 0x2ed);
  FUN_100186088(param_1 + 0x26d);
  thunk_FUN_100651068(param_1 + 0x247);
  thunk_FUN_100651068(param_1 + 0x221);
  FUN_10064221c(param_1 + 0x210);
  param_1[0x1f2] = &PTR_FUN_1014a7108;
  param_1[0x209] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20c);
  FUN_10064e2bc(param_1 + 0x1f2);
  thunk_FUN_100651068(param_1 + 0x1cc);
  param_1[0x1ae] = &PTR_FUN_1014a7108;
  param_1[0x1c5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c8);
  FUN_10064e2bc(param_1 + 0x1ae);
  param_1[400] = &PTR_FUN_1014a7108;
  param_1[0x1a7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1aa);
  FUN_10064e2bc(param_1 + 400);
  FUN_10064221c(param_1 + 0x17f);
  thunk_FUN_100534a3c(param_1 + 0x3a);
  FUN_10064221c(param_1 + 0x29);
  FUN_10064221c(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100295528(void)

{
  DAT_101e442a8 = 0xff;
  DAT_101e442aa = 0xffff;
  DAT_101e442ac = 0xffff;
  DAT_101e442ae = 0xffbc9c44;
  DAT_101e442b2 = 0xff1166f2;
  DAT_101e442b6 = 0xffe0e0e0;
  DAT_101e442ba = 0xffa0a0a0;
  DAT_101e442be = 0xff8c8c8c;
  DAT_101e442c2 = 0xff322213;
  DAT_101e442c6 = 0xff091911;
  DAT_101e442ca = 0xff170c19;
  DAT_101e442ce = 0xff241a14;
  DAT_101e442d2 = 0xff14171c;
  DAT_101e442d6 = 0xff221911;
  DAT_101e442da = 0xff1a1416;
  DAT_101e442de = 0xff121414;
  DAT_101e442e2 = 0xff1a1809;
  DAT_101e442e6 = 0xff141414;
  DAT_101e442ea = 0xff141414;
  DAT_101e442ee = 0xff2929c0;
  DAT_101e442f2 = 0xff283082;
  DAT_101e442f6 = 0xff5262cc;
  DAT_101e442fa = 0xff283082;
  DAT_101e442fe = 0xff5262cc;
  DAT_101e44302 = 0xff745c42;
  DAT_101e44306 = 0xff184155;
  DAT_101e4430a = 0xff92665e;
  DAT_101e4430e = 0xffbc9c44;
  DAT_101e44312 = 0xffbbae56;
  DAT_101e44316 = 0xff8b7b01;
  DAT_101e4431a = 0xff90b3ef;
  DAT_101e4431e = 0xff728ebe;
  DAT_101e44322 = 0xff19459d;
  DAT_101e44326 = 0xff9d877b;
  DAT_101e4432a = 0xffcbb1a3;
  DAT_101e4432e = 0xff3f6fb5;
  DAT_101e44332 = 0xffc5c5c5;
  DAT_101e44336 = 0xff4fc1f1;
  DAT_101e4433a = 0xff606060;
  DAT_101e4433e = 0xffc5ff7b;
  DAT_101e44342 = 0xff5271eb;
  DAT_101e44346 = 0xfffae076;
  DAT_101e4434a = 0xff3ac8f6;
  DAT_101e4434e = 0xffaaaaaa;
  DAT_101e44352 = 0xffe19400;
  DAT_101e44356 = 0xffe19400;
  DAT_101e4435a = 0xffe550b2;
  DAT_101e4435e = 0xfff22ae8;
  DAT_101e44362 = 0xff005ae1;
  DAT_101e44366 = 0xff1addfa;
  DAT_101e4436a = 0xff2424b3;
  DAT_101e4436e = 0xff2424b3;
  DAT_101e44372 = 0xff646464;
  DAT_101e44376 = 0xff92665e;
  DAT_101e4437a = 0xff646037;
  DAT_101e44384 = 0xff1111a1;
  DAT_101e4438c = 0xffc8c8c8;
  DAT_101e44388 = 0xff321ee1;
  DAT_101e44390 = 0xff321ee1;
  DAT_101e4439c = 0xff6259b3;
  DAT_101e443a0 = 0xff506e73;
  DAT_101e44380 = 0xffffffff;
  DAT_101e443a4 = 0xff9dbf86;
  DAT_101e44394 = 0xff7fe801;
  DAT_101e443a8 = 0xffa35244;
  DAT_101e44398 = 0xffffffff;
  DAT_101e443ac = 0xffca828e;
  DAT_101e443b0 = 0xffa6a6a6;
  DAT_101e443b4 = 0xffa6a6a6;
  DAT_101e443b8 = 0xffffffff;
  DAT_101e443bc = 0xff88ea2f;
  DAT_101e443c0 = 0xff8c8c8c;
  DAT_101e443c4 = 0xffffb400;
  DAT_101e443c8 = 0xffff00ff;
  DAT_101e443cc = 0xff00aded;
  DAT_101e443d0 = 0xff33d3ff;
  DAT_101e443d4 = 0xff7fe801;
  DAT_101e443d8 = 0xff282828;
  DAT_101e443dc = 0xfff0f0f0;
  DAT_101e443e0 = 0xffa4781e;
  DAT_101e443e4 = 0xffa6654b;
  DAT_101e443e8 = 0xff93435b;
  DAT_101e443ec = 0xff387f9c;
  DAT_101e443f0 = 0xffa3781e;
  DAT_101e443f4 = 0xffffd18a;
  DAT_101e443f8 = 0xffff61f7;
  DAT_101e443fc = 0xff5de1f2;
  DAT_101e44400 = 0xff80eaff;
  DAT_101e44404 = 0xff32e00e;
  DAT_101e44408 = 0xff5a3c10;
  DAT_101e4440c = 0xff330b03;
  DAT_101e44410 = 0xff33031d;
  DAT_101e44414 = 0xff032433;
  DAT_101e44418 = 0xff9e8e8d;
  DAT_101e44420 = 0x4326000041900000;
  DAT_101e44428 = 0x4326000041c00000;
  DAT_101d237ec = FUN_100644a94("UI::EVENT_FINISHED_CREATING_GUILD");
  return;
}




long * FUN_100295c20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined1 local_68 [8];
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = 0;
  *puVar8 = &PTR_thunk_FUN_100296114_10147fff8;
  puVar8 = puVar8 + 0x18;
  thunk_FUN_1005357f4(puVar8);
  thunk_FUN_100652c08(param_1 + 0x15d);
  plVar1 = param_1 + 0x17b;
  thunk_FUN_10064f204(plVar1);
  plVar2 = param_1 + 0x1a4;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x1c2;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x1e0;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x206;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x22c;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x252;
  thunk_FUN_100650e64(plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100534ad8(puVar8,plVar1,1);
  FUN_10064f324(plVar1,plVar2,1);
  FUN_10064f324(plVar1,plVar3,1);
  FUN_100534ad8(puVar8,plVar4,1);
  FUN_100534ad8(puVar8,plVar5,1);
  FUN_100534ad8(puVar8,plVar6,1);
  FUN_100534ad8(puVar8,plVar7,1);
  local_68[0] = 5;
  FUN_100534ebc(puVar8,local_68);
  FUN_1005360e4(puVar8,0);
  FUN_100652cac(plVar2,PTR_s_build___Credits_atlas_101854a70,"vainglory_credits");
  FUN_100652cac(plVar3,PTR_s_build___Credits_atlas_101854a70,"semc_credits");
  FUN_100653080(plVar2,1);
  FUN_100653080(plVar3,1);
  local_70[0] = 0xffc99d45;
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,local_70);
  FUN_100651700(plVar4,3);
  uVar9 = FUN_1004e0150("MENU_SETTINGS_CREDITS_DEVELOPER_TITLE",0);
  FUN_1006513c0(plVar4,uVar9);
  local_78[0] = 0xffc99d45;
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,local_78);
  FUN_100651700(plVar5,3);
  uVar9 = FUN_1004e0150("MENU_SETTINGS_CREDITS_NCORE_TITLE",0);
  FUN_1006513c0(plVar5,uVar9);
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_100651700(plVar6,3);
  uVar9 = FUN_1004e0150("MENU_SETTINGS_CREDITS_DEVELOPER",0);
  FUN_1006513c0(plVar6,uVar9);
  FUN_100651594(plVar7,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_100651700(plVar7,3);
  uVar9 = FUN_1004e0150("MENU_SETTINGS_CREDITS_NCORE",0);
  FUN_1006513c0(plVar7,uVar9);
  FUN_100295ee8(param_1);
  return param_1;
}




void FUN_100295ee8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float local_68;
  float fStack_64;
  
  local_68 = (float)(**(code **)(*param_3 + 0x48))();
  fStack_64 = param_2;
  FUN_10064e48c(param_3 + 0x18,&local_68);
  plVar1 = param_3 + 0x17b;
  uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 * 0.25;
  FUN_10064e47c(uVar4,plVar1);
  fVar3 = (float)FUN_10064e3cc(plVar1);
  FUN_10064e3cc(plVar1);
  _printf("MAXSIZE::: : %f");
  fVar5 = param_2 * 0.6666667 * 1.5;
  local_68 = fVar3 * 0.375;
  fStack_64 = fVar5;
  FUN_10064e48c(param_3 + 0x1a4,&local_68);
  plVar2 = param_3 + 0x1c2;
  local_68 = fVar3 * 0.375;
  fStack_64 = fVar5;
  FUN_10064e48c(plVar2,&local_68);
  FUN_10064e5ec(0,0x437a0000,plVar1,4,param_3 + 0x18,4);
  FUN_10064e5ec(0x43bb8000,0,plVar2,8,plVar1,8);
  FUN_10064e5ec(0xc2fa0000,0,param_3 + 0x1a4,5,plVar2,7);
  FUN_10064e5ec(0xc3160000,0,param_3 + 0x1e0,4,plVar1,6);
  FUN_10064e5ec(0xc1200000,0x42c80000,param_3 + 0x206,4,plVar1,6);
  FUN_10064e5ec(0x43340000,0,param_3 + 0x22c,7,param_3 + 0x1e0,5);
  FUN_10064e5ec(0x42200000,0,param_3 + 0x252,7,param_3 + 0x206,5);
  return;
}




long * thunk_FUN_100295c20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 auStack_78 [2];
  undefined4 auStack_70 [2];
  undefined1 auStack_68 [8];
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = 0;
  *puVar8 = &PTR_thunk_FUN_100296114_10147fff8;
  puVar8 = puVar8 + 0x18;
  thunk_FUN_1005357f4(puVar8);
  thunk_FUN_100652c08(param_1 + 0x15d);
  plVar1 = param_1 + 0x17b;
  thunk_FUN_10064f204(plVar1);
  plVar2 = param_1 + 0x1a4;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x1c2;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x1e0;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x206;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x22c;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x252;
  thunk_FUN_100650e64(plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100534ad8(puVar8,plVar1,1);
  FUN_10064f324(plVar1,plVar2,1);
  FUN_10064f324(plVar1,plVar3,1);
  FUN_100534ad8(puVar8,plVar4,1);
  FUN_100534ad8(puVar8,plVar5,1);
  FUN_100534ad8(puVar8,plVar6,1);
  FUN_100534ad8(puVar8,plVar7,1);
  auStack_68[0] = 5;
  FUN_100534ebc(puVar8,auStack_68);
  FUN_1005360e4(puVar8,0);
  FUN_100652cac(plVar2,PTR_s_build___Credits_atlas_101854a70,"vainglory_credits");
  FUN_100652cac(plVar3,PTR_s_build___Credits_atlas_101854a70,"semc_credits");
  FUN_100653080(plVar2,1);
  FUN_100653080(plVar3,1);
  auStack_70[0] = 0xffc99d45;
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,auStack_70);
  FUN_100651700(plVar4,3);
  uVar9 = FUN_1004e0150("MENU_SETTINGS_CREDITS_DEVELOPER_TITLE",0);
  FUN_1006513c0(plVar4,uVar9);
  auStack_78[0] = 0xffc99d45;
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,auStack_78);
  FUN_100651700(plVar5,3);
  uVar9 = FUN_1004e0150("MENU_SETTINGS_CREDITS_NCORE_TITLE",0);
  FUN_1006513c0(plVar5,uVar9);
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_100651700(plVar6,3);
  uVar9 = FUN_1004e0150("MENU_SETTINGS_CREDITS_DEVELOPER",0);
  FUN_1006513c0(plVar6,uVar9);
  FUN_100651594(plVar7,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_100651700(plVar7,3);
  uVar9 = FUN_1004e0150("MENU_SETTINGS_CREDITS_NCORE",0);
  FUN_1006513c0(plVar7,uVar9);
  FUN_100295ee8(param_1);
  return param_1;
}




void thunk_FUN_100295ee8(void)

{
  FUN_100295ee8();
  return;
}




void thunk_FUN_100296114(void)

{
  FUN_100296114();
  return;
}




void FUN_100296100(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100296114();
  operator_delete(pvVar1);
  return;
}




void FUN_100296114(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100296114_10147fff8;
  thunk_FUN_100651068(param_1 + 0x252);
  thunk_FUN_100651068(param_1 + 0x22c);
  thunk_FUN_100651068(param_1 + 0x206);
  thunk_FUN_100651068(param_1 + 0x1e0);
  param_1[0x1c2] = &PTR_FUN_1014a7108;
  param_1[0x1d9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1dc);
  FUN_10064e2bc(param_1 + 0x1c2);
  param_1[0x1a4] = &PTR_FUN_1014a7108;
  param_1[0x1bb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1be);
  FUN_10064e2bc(param_1 + 0x1a4);
  param_1[0x17b] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x192);
  FUN_10064e2bc(param_1 + 0x17b);
  param_1[0x15d] = &PTR_FUN_1014a7108;
  param_1[0x174] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x177);
  FUN_10064e2bc(param_1 + 0x15d);
  thunk_FUN_100534a3c(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_100296204(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar8 = (undefined8 *)FUN_10029b498();
  puVar8[0xc9] = 0;
  *puVar8 = &PTR_thunk_FUN_100296510_101480140;
  puVar8 = puVar8 + 0xca;
  thunk_FUN_100650e64(puVar8);
  FUN_10064e20c(param_1 + 0xf0);
  param_1[0xf0] = (long)&PTR_thunk_FUN_10064e2bc_1014a64d8;
  FUN_10064fc80(param_1 + 0x107);
  plVar1 = param_1 + 0x10b;
  thunk_FUN_1001c0c34(plVar1,0);
  plVar2 = param_1 + 0x1ba;
  FUN_10064fd30(plVar2);
  plVar3 = param_1 + 0x1d3;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x1f9;
  thunk_FUN_1001cd1dc(plVar4);
  FUN_10064fc80(param_1 + 0x224);
  param_1[0x22c] = 0;
  param_1[0x22b] = 0;
  param_1[0x22a] = 0;
  param_1[0x229] = 0;
  param_1[0x228] = 0;
  FUN_1004e3004(param_1 + 0x22d);
  param_1[0x22e] = 0;
  *(undefined1 *)(param_1 + 0x22f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xf0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  *(undefined4 *)(param_1 + 0x227) = 1;
  param_1[0x225] = 0x41200000;
  if ((*(float *)(param_1 + 0x114) != 3.0) || (*(float *)((long)param_1 + 0x8a4) != 3.0)) {
    lVar10 = NEON_fmov(0x40400000,4);
    param_1[0x114] = lVar10;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x8dc) = *(uint *)((long)param_1 + 0x8dc) & 0xfffffffb;
  iVar7 = FUN_100126c88();
  FUN_100651038(puVar8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_10065165c(puVar8,1);
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TITLE",0);
  FUN_1006513c0(puVar8,uVar9);
  FUN_100651700(puVar8,3);
  uVar6 = *(uint *)((long)param_1 + 0x6d4);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x6d4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(puVar8);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar3,*ppuVar5);
  uVar6 = *(uint *)((long)param_1 + 0xf1c);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xf1c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TIMER_LABEL",0);
  FUN_1006513c0(plVar3,uVar9);
  FUN_100651700(plVar3,3);
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar4,*ppuVar5);
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TIMER",0);
  FUN_1001cd23c(plVar4,uVar9,1,1);
  FUN_1006515d0(plVar4,1);
  FUN_100651700(plVar4,3);
  FUN_100650140(plVar2,1);
  return param_1;
}




long * thunk_FUN_100296204(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar8 = (undefined8 *)FUN_10029b498();
  puVar8[0xc9] = 0;
  *puVar8 = &PTR_thunk_FUN_100296510_101480140;
  puVar8 = puVar8 + 0xca;
  thunk_FUN_100650e64(puVar8);
  FUN_10064e20c(param_1 + 0xf0);
  param_1[0xf0] = (long)&PTR_thunk_FUN_10064e2bc_1014a64d8;
  FUN_10064fc80(param_1 + 0x107);
  plVar1 = param_1 + 0x10b;
  thunk_FUN_1001c0c34(plVar1,0);
  plVar2 = param_1 + 0x1ba;
  FUN_10064fd30(plVar2);
  plVar3 = param_1 + 0x1d3;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x1f9;
  thunk_FUN_1001cd1dc(plVar4);
  FUN_10064fc80(param_1 + 0x224);
  param_1[0x22c] = 0;
  param_1[0x22b] = 0;
  param_1[0x22a] = 0;
  param_1[0x229] = 0;
  param_1[0x228] = 0;
  FUN_1004e3004(param_1 + 0x22d);
  param_1[0x22e] = 0;
  *(undefined1 *)(param_1 + 0x22f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xf0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  *(undefined4 *)(param_1 + 0x227) = 1;
  param_1[0x225] = 0x41200000;
  if ((*(float *)(param_1 + 0x114) != 3.0) || (*(float *)((long)param_1 + 0x8a4) != 3.0)) {
    lVar10 = NEON_fmov(0x40400000,4);
    param_1[0x114] = lVar10;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x8dc) = *(uint *)((long)param_1 + 0x8dc) & 0xfffffffb;
  iVar7 = FUN_100126c88();
  FUN_100651038(puVar8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_10065165c(puVar8,1);
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TITLE",0);
  FUN_1006513c0(puVar8,uVar9);
  FUN_100651700(puVar8,3);
  uVar6 = *(uint *)((long)param_1 + 0x6d4);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x6d4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(puVar8);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar3,*ppuVar5);
  uVar6 = *(uint *)((long)param_1 + 0xf1c);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xf1c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TIMER_LABEL",0);
  FUN_1006513c0(plVar3,uVar9);
  FUN_100651700(plVar3,3);
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar4,*ppuVar5);
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TIMER",0);
  FUN_1001cd23c(plVar4,uVar9,1,1);
  FUN_1006515d0(plVar4,1);
  FUN_100651700(plVar4,3);
  FUN_100650140(plVar2,1);
  return param_1;
}




void FUN_100296510(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100296510_101480140;
  FUN_100296624();
  if ((void *)param_1[0x22b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22b]);
    param_1[0x22b] = 0;
    param_1[0x22a] = 0;
  }
  if ((void *)param_1[0x229] != (void *)0x0) {
    operator_delete__((void *)param_1[0x229]);
    param_1[0x229] = 0;
    param_1[0x228] = 0;
  }
  param_1[0x1f9] = &PTR_FUN_10145eb78;
  param_1[0x210] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x221] != (void *)0x0) {
    operator_delete__((void *)param_1[0x221]);
    param_1[0x221] = 0;
    param_1[0x220] = 0;
  }
  FUN_100651068(param_1 + 0x1f9);
  thunk_FUN_100651068(param_1 + 0x1d3);
  FUN_10064e2bc(param_1 + 0x1ba);
  lVar1 = 0;
  param_1[0x10b] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xcd0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xd88) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xda0);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xcd0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x10b);
  FUN_10064e2bc(param_1 + 0xf0);
  thunk_FUN_100651068(param_1 + 0xca);
  FUN_100296d58(param_1);
  return;
}




void FUN_100296624(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x1150);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x1158);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x1158);
        uVar2 = *(uint *)(param_1 + 0x1150);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x1158) != 0) {
    *(undefined4 *)(param_1 + 0x1150) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x1140);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x1148);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x1148);
        uVar2 = *(uint *)(param_1 + 0x1140);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x1148) != 0) {
    *(undefined4 *)(param_1 + 0x1140) = 0;
  }
  return;
}




void thunk_FUN_100296510(void)

{
  FUN_100296510();
  return;
}




void FUN_1002966d4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100296510();
  operator_delete(pvVar1);
  return;
}




void FUN_1002966e8(long *param_1)

{
  undefined1 auStack_30 [16];
  
  if ((undefined8 *)param_1[0x22c] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x22c])(auStack_30);
    FUN_100296754(param_1,auStack_30);
    FUN_100296e68(auStack_30,1);
    *(undefined1 *)(param_1 + 0x22f) = 0;
    (**(code **)(*param_1 + 0xe8))(param_1);
  }
  return;
}




void FUN_100296754(long *param_1,uint *param_2)

{
  long lVar1;
  
  FUN_100296624();
  *(uint *)((long)param_1 + 0x8dc) =
       *(uint *)((long)param_1 + 0x8dc) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x8dc) & 3 | (uint)(*param_2 == 0) << 2;
  if (*param_2 == 0) {
    FUN_1001c0e10(param_1 + 0x10b);
  }
  else {
    FUN_1001c102c();
  }
  *(uint *)((long)param_1 + 0xe54) =
       *(uint *)((long)param_1 + 0xe54) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xe54) & 3 | (uint)(*param_2 != 0) << 2;
  if (*param_2 != 0) {
    lVar1 = *(long *)(param_2 + 2);
    do {
      FUN_100296b64(param_1,lVar1);
      lVar1 = lVar1 + 0x48;
    } while (lVar1 != *(long *)(param_2 + 2) + (ulong)*param_2 * 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x000100296804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_100296808(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100296810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_100296814(long param_1)

{
  uint64_t uVar1;
  
  uVar1 = _mach_absolute_time();
  if (((double)*(long *)(param_1 + 0x1170) <
       (double)((uVar1 - *(long *)(param_1 + 0x1168)) * DAT_101d91638) * 1e-09) &&
     (*(char *)(param_1 + 0x1178) == '\0')) {
    if (*(long **)(param_1 + 0x648) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x648) + 8))();
    }
    *(char *)(param_1 + 0x1178) = '\x01';
    return;
  }
  FUN_1001cd27c(param_1 + 0xfc8);
  return;
}




void FUN_1002968a8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  
  FUN_100641464(auStack_64,auStack_68);
  fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar8 = fVar4 * 0.5;
  fVar6 = 25.0;
  bVar2 = false;
  if ((*(float *)(param_3 + 0xd2) == fVar8) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x694)))) {
    bVar2 = *(float *)((long)param_3 + 0x694) == 25.0;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0xd2) = fVar8;
    *(undefined4 *)((long)param_3 + 0x694) = 0x41c80000;
    FUN_1000200a0(param_3 + 0xca);
    fVar6 = *(float *)((long)param_3 + 0x694);
  }
  fVar7 = -0.25;
  fVar5 = -(fVar4 * -0.25) - *(float *)(param_3 + 0x225);
  FUN_100651184(param_3 + 0xca);
  fVar6 = fVar6 + fVar7;
  fVar7 = (param_2 + -50.0) - fVar6;
  *(int *)((long)param_3 + 0x113c) = (int)param_3[0x22a];
  if ((int)param_3[0x22a] != 0) {
    uVar3 = 0;
    do {
      fVar6 = fVar7;
      FUN_10064e47c(fVar5,*(undefined8 *)(param_3[0x22b] + uVar3 * 8));
      (**(code **)(**(long **)(param_3[0x22b] + uVar3 * 8) + 0x90))();
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0x22a));
  }
  *(float *)(param_3 + 0x224) = fVar5;
  *(float *)((long)param_3 + 0x1124) = fVar7;
  plVar1 = param_3 + 0xf0;
  (**(code **)(param_3[0xf0] + 0x138))(plVar1,param_3 + 0x224);
  (**(code **)(param_3[0xf0] + 0x90))(plVar1);
  fVar7 = (float)FUN_10064e3cc(plVar1);
  fVar4 = (fVar4 - fVar7) + -50.0;
  fVar6 = (param_2 - fVar6) + -50.0;
  bVar2 = false;
  if ((*(float *)(param_3 + 0xf8) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x7c4)) && !NAN(fVar6))) {
    bVar2 = *(float *)((long)param_3 + 0x7c4) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0xf8) = fVar4;
    *(float *)((long)param_3 + 0x7c4) = fVar6;
    FUN_1000200a0(plVar1);
  }
  fVar4 = (float)FUN_10064259c(param_3 + 0x10b);
  fVar8 = fVar8 - fVar4 * 0.5;
  fVar6 = (param_2 - fVar6) * 0.5;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x113) == fVar8) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x89c)) && !NAN(fVar6))) {
    bVar2 = *(float *)((long)param_3 + 0x89c) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x113) = fVar8;
    *(float *)((long)param_3 + 0x89c) = fVar6;
    FUN_1000200a0(param_3 + 0x10b);
  }
  FUN_10065179c(fVar5,0,0x3f800000,param_3 + 0x1d3);
  FUN_10065179c(fVar5,0,0x3f800000,param_3 + 0x1f9);
  plVar1 = param_3 + 0x1ba;
  fVar6 = 0.0;
  FUN_10064fc74(0,0,0,auStack_78);
  FUN_100650064(plVar1,auStack_78);
  (**(code **)(param_3[0x1ba] + 0x90))(plVar1);
  FUN_10064e3cc(plVar1);
  fVar6 = (param_2 - fVar6) + -50.0;
  if ((*(float *)(param_3 + 0x1c2) != fVar5 * 0.5) || (*(float *)((long)param_3 + 0xe14) != fVar6))
  {
    *(float *)(param_3 + 0x1c2) = fVar5 * 0.5;
    *(float *)((long)param_3 + 0xe14) = fVar6;
    FUN_1000200a0(plVar1);
  }
  return;
}




void FUN_100296b1c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1170) = param_2;
  FUN_1001cd374(param_1 + 0xfc8,param_1 + 0x1170);
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 4;
  FUN_1004e3004(param_1 + 0x1168);
  return;
}




void FUN_100296b64(long param_1,long param_2)

{
  void *pvVar1;
  long local_70;
  long *local_68;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined4 local_38;
  
  operator_new(0x148);
  local_68 = (long *)thunk_FUN_10064f204();
  FUN_100296c94(param_1 + 0x1140,&local_68);
  FUN_100642bd8(param_1 + 0x780,local_68,1);
  pvVar1 = operator_new(0x12b0);
  local_70 = thunk_FUN_100304198(pvVar1,param_2 + 0x18);
  FUN_100304750(local_70,param_2,*(undefined4 *)(param_2 + 0x38),param_2 + 0x30);
  FUN_100304810(pvVar1,*(char *)(param_2 + 0x40) == '\0');
  FUN_100304824(pvVar1,*(undefined1 *)(param_2 + 0x41));
  *(uint *)(*(long *)((long)pvVar1 + 0xdc0) + 0xeb4) =
       *(uint *)(*(long *)((long)pvVar1 + 0xdc0) + 0xeb4) | 4;
  FUN_1002c09fc(*(undefined8 *)((long)pvVar1 + 0xdc0),1);
  FUN_1001fc78c((long)pvVar1 + 0xdb8,1);
  FUN_10025fc20(param_1 + 0x1150,&local_70);
  (**(code **)(*local_68 + 0x78))(local_68,local_70,1);
  local_40 = (ulong)*(uint *)(param_1 + 0x1150);
  local_38 = DAT_101d91884;
  local_60 = FUN_100296d14;
  local_50 = 0;
  uStack_48 = 0;
  lStack_58 = param_1;
  FUN_10001554c(local_70 + 8,&local_60);
  return;
}




void FUN_100296c94(uint *param_1,undefined8 *param_2)

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
    FUN_100296ef4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100296d14(long param_1)

{
  int in_w4;
  undefined8 *puVar1;
  
  if ((in_w4 - 1U < *(uint *)(param_1 + 0x1150)) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x648), puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100296d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)
              (puVar1,*(long *)(*(long *)(param_1 + 0x1158) + (ulong)(in_w4 - 1U) * 8) + 0xdd0);
    return;
  }
  return;
}




undefined8 FUN_100296d4c(void)

{
  return 0;
}




void FUN_100296d54(void)

{
  return;
}




void FUN_100296d58(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100296d58_101480c98;
  if (*(char *)((long)param_1 + 0x62f) < '\0') {
    operator_delete((void *)param_1[0xc3]);
  }
  param_1[0x6d] = &PTR_FUN_101465898;
  thunk_FUN_100651068(param_1 + 0x9c);
  param_1[0x7e] = &PTR_FUN_1014a7108;
  param_1[0x95] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x98);
  FUN_10064e2bc(param_1 + 0x7e);
  FUN_10064221c(param_1 + 0x6d);
  param_1[0x4f] = &PTR_FUN_1014a7108;
  param_1[0x66] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x69);
  FUN_10064e2bc(param_1 + 0x4f);
  param_1[0x2f] = &PTR_FUN_101462f50;
  param_1[0x40] = &PTR_FUN_101463068;
  if (*(char *)((long)param_1 + 0x25f) < '\0') {
    operator_delete((void *)param_1[0x49]);
  }
  FUN_1010b7434(param_1 + 0x43);
  FUN_10064221c(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_100296e68(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x48;
      do {
        if (pcVar1[0x18] < '\0') {
          operator_delete(*(void **)(pcVar1 + 1));
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x48;
        lVar2 = lVar2 + -0x48;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100296ef4(uint *param_1,uint param_2)

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




long * FUN_100296f70(long *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_68 [2];
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  puVar7 = puVar6 + 0x17;
  *puVar6 = &PTR_FUN_101480260;
  FUN_100653ff8(puVar7);
  plVar1 = param_1 + 0x38;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x56;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0x8a;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xa8;
  thunk_FUN_100651ebc(plVar4);
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
    FUN_1001e34dc(puVar7,param_2);
    bVar5 = false;
    if ((*(float *)(param_1 + 0x21) == 0.5) &&
       (bVar5 = false, !NAN(*(float *)((long)param_1 + 0x10c)))) {
      bVar5 = *(float *)((long)param_1 + 0x10c) == 0.5;
    }
    if (!bVar5) {
      param_1[0x21] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(puVar7);
    }
    FUN_10065403c(puVar7,PTR_s_build___Frames_tga_101854a00,"frame_mask");
    FUN_100652dfc(puVar7,0xb);
    FUN_100653080(puVar7,1);
    FUN_100652cac(plVar1,PTR_s_build___Frames_tga_101854a00,"frame_0_star");
    if ((*(float *)(param_1 + 0x42) != 0.5) || (*(float *)((long)param_1 + 0x214) != 0.5)) {
      param_1[0x42] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    if ((*(float *)(param_1 + 0x41) != 1.68) || (*(float *)((long)param_1 + 0x20c) != 1.68)) {
      param_1[0x41] = 0x3fd70a3d3fd70a3d;
      FUN_1000200a0(plVar1);
    }
    FUN_100652dd4(plVar1,&DAT_101158808,2);
    FUN_100653080(plVar1,1);
  }
  else {
    (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
    FUN_100642bd8(plVar2,plVar3,1);
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    FUN_100654488(plVar2,1);
    if ((*(float *)(param_1 + 0x5f) != 1.02) || (*(float *)((long)param_1 + 0x2fc) != 0.94)) {
      param_1[0x5f] = 0x3f70a3d73f828f5c;
      FUN_1000200a0(plVar2);
    }
    FUN_100652cac(plVar3,PTR_s_build___DailyLogin_7Day_tga_1018549f8,param_2);
    FUN_100653080(plVar3,1);
    FUN_100651f8c(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970);
    FUN_100651f94(plVar4,"button_lively_glow_top_left",0,0,0,"button_lively_glow_top_middle",0,0,0,
                  "button_lively_glow_top_left",1,"button_lively_glow_middle_left",0,0,0,
                  "button_lively_glow_middle_left",1,"button_lively_glow_bottom_left",0,
                  "button_lively_glow_bottom_middle",0,"button_lively_glow_bottom_left",1);
    if ((*(float *)(param_1 + 0xb1) != 1.6) || (*(float *)((long)param_1 + 0x58c) != 1.6)) {
      param_1[0xb1] = 0x3fcccccd3fcccccd;
      FUN_1000200a0(plVar4);
    }
    local_68[0] = 0xff553e37;
    FUN_100652590(plVar4,local_68,2);
    if ((*(float *)(param_1 + 0xb2) != 0.5) || (*(float *)((long)param_1 + 0x594) != 0.5)) {
      param_1[0xb2] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar4);
    }
  }
  return param_1;
}




long * thunk_FUN_100296f70(long *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 auStack_68 [2];
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  puVar7 = puVar6 + 0x17;
  *puVar6 = &PTR_FUN_101480260;
  FUN_100653ff8(puVar7);
  plVar1 = param_1 + 0x38;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x56;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0x8a;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xa8;
  thunk_FUN_100651ebc(plVar4);
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
    FUN_1001e34dc(puVar7,param_2);
    bVar5 = false;
    if ((*(float *)(param_1 + 0x21) == 0.5) &&
       (bVar5 = false, !NAN(*(float *)((long)param_1 + 0x10c)))) {
      bVar5 = *(float *)((long)param_1 + 0x10c) == 0.5;
    }
    if (!bVar5) {
      param_1[0x21] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(puVar7);
    }
    FUN_10065403c(puVar7,PTR_s_build___Frames_tga_101854a00,"frame_mask");
    FUN_100652dfc(puVar7,0xb);
    FUN_100653080(puVar7,1);
    FUN_100652cac(plVar1,PTR_s_build___Frames_tga_101854a00,"frame_0_star");
    if ((*(float *)(param_1 + 0x42) != 0.5) || (*(float *)((long)param_1 + 0x214) != 0.5)) {
      param_1[0x42] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    if ((*(float *)(param_1 + 0x41) != 1.68) || (*(float *)((long)param_1 + 0x20c) != 1.68)) {
      param_1[0x41] = 0x3fd70a3d3fd70a3d;
      FUN_1000200a0(plVar1);
    }
    FUN_100652dd4(plVar1,&DAT_101158808,2);
    FUN_100653080(plVar1,1);
  }
  else {
    (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
    FUN_100642bd8(plVar2,plVar3,1);
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    FUN_100654488(plVar2,1);
    if ((*(float *)(param_1 + 0x5f) != 1.02) || (*(float *)((long)param_1 + 0x2fc) != 0.94)) {
      param_1[0x5f] = 0x3f70a3d73f828f5c;
      FUN_1000200a0(plVar2);
    }
    FUN_100652cac(plVar3,PTR_s_build___DailyLogin_7Day_tga_1018549f8,param_2);
    FUN_100653080(plVar3,1);
    FUN_100651f8c(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970);
    FUN_100651f94(plVar4,"button_lively_glow_top_left",0,0,0,"button_lively_glow_top_middle",0,0,0,
                  "button_lively_glow_top_left",1,"button_lively_glow_middle_left",0,0,0,
                  "button_lively_glow_middle_left",1,"button_lively_glow_bottom_left",0,
                  "button_lively_glow_bottom_middle",0,"button_lively_glow_bottom_left",1);
    if ((*(float *)(param_1 + 0xb1) != 1.6) || (*(float *)((long)param_1 + 0x58c) != 1.6)) {
      param_1[0xb1] = 0x3fcccccd3fcccccd;
      FUN_1000200a0(plVar4);
    }
    auStack_68[0] = 0xff553e37;
    FUN_100652590(plVar4,auStack_68,2);
    if ((*(float *)(param_1 + 0xb2) != 0.5) || (*(float *)((long)param_1 + 0x594) != 0.5)) {
      param_1[0xb2] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar4);
    }
  }
  return param_1;
}




void FUN_100297328(undefined8 param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  
  plVar1 = param_3 + 0x56;
  FUN_10064e47c(plVar1);
  FUN_10064ecdc(param_1,param_3 + 0x8a);
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_44 = param_2;
  FUN_10064e48c(param_3 + 0xa8,&local_48);
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  FUN_10064e5ec(0,0,param_3 + 0x8a,8,plVar1,8);
  return;
}




long FUN_1002973d8(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar12 = (undefined8 *)FUN_1002fc4c4();
  puVar12[0x137] = 0;
  *puVar12 = &PTR_thunk_FUN_1002979c4_1014803a8;
  puVar12 = puVar12 + 0x138;
  FUN_10064e264(puVar12);
  lVar1 = param_3 + 0xa78;
  thunk_FUN_100650e64(lVar1);
  lVar2 = param_3 + 0xba8;
  FUN_10064e264(lVar2);
  *(undefined8 *)(param_3 + 0xc68) = 0;
  *(undefined8 *)(param_3 + 0xc60) = 0;
  lVar3 = param_3 + 0xc70;
  thunk_FUN_100652c08(lVar3);
  lVar4 = param_3 + 0xd60;
  FUN_10064e264();
  lVar5 = param_3 + 0xe18;
  thunk_FUN_100652c08(lVar5);
  lVar6 = param_3 + 0xf08;
  thunk_FUN_100650e64(lVar6);
  lVar8 = param_3 + 0x1038;
  thunk_FUN_100652c08();
  lVar9 = param_3 + 0x1128;
  thunk_FUN_100181304(lVar9,0);
  lVar10 = param_3 + 0x26e0;
  FUN_1002fcabc(lVar10);
  *(undefined8 *)(param_3 + 0x28f0) = 0;
  local_a0._0_2_ = 0x37;
  FUN_10064e5b8(param_3,&local_a0);
  *(uint *)(param_3 + 0x13c) = *(uint *)(param_3 + 0x13c) & 0xfffffffb;
  lVar7 = param_3 + 0x4a0;
  (**(code **)(*(long *)(param_3 + 0x4a0) + 0x78))(lVar7,puVar12,1);
  FUN_100642bd8(puVar12,lVar1,1);
  FUN_100642bd8(puVar12,lVar2,1);
  FUN_100642bd8(puVar12,lVar3,1);
  (**(code **)(*(long *)(param_3 + 0x4a0) + 0x78))(lVar7,lVar4,1);
  FUN_100642bd8(lVar4,lVar5,1);
  FUN_100642bd8(lVar4,lVar6,1);
  (**(code **)(*(long *)(param_3 + 0x4a0) + 0x78))(lVar7,lVar8,1);
  (**(code **)(*(long *)(param_3 + 1000) + 0x78))(param_3 + 1000,lVar9,1);
  (**(code **)(*(long *)(param_3 + 1000) + 0x78))(param_3 + 1000,lVar10,1);
  plVar13 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(puVar12,plVar13);
  (**(code **)(*plVar13 + 0x60))(plVar13,lVar1,9);
  (**(code **)(*plVar13 + 0x68))(plVar13,lVar2,1,10);
  (**(code **)(*plVar13 + 0x58))(plVar13,lVar3);
  uVar14 = thunk_FUN_10064dde8();
  FUN_10064e524(lVar2,uVar14);
  local_a0._0_2_ = 0x77;
  FUN_10064e5b8(lVar2,&local_a0);
  plVar13 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(lVar4,plVar13);
  (**(code **)(*plVar13 + 0x60))(plVar13,lVar5,2);
  (**(code **)(*plVar13 + 0x60))(plVar13,lVar6,2);
  FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651460(lVar1,&DAT_101158804);
  uVar14 = FUN_1004e0150("MENU_DAILY_LOGIN_INBOX_TITLE",0);
  FUN_1006513c0(lVar1,uVar14);
  FUN_100652cac(lVar3,PTR_s_build___DailyLogin_7Day_tga_1018549f8,"daily_login_decorative_line");
  local_a0._0_2_ = 0x57;
  FUN_10064e5b8(lVar3,&local_a0);
  FUN_10064e5b8(lVar4,&DAT_101dbd510);
  *(uint *)(param_3 + 0xde4) = *(uint *)(param_3 + 0xde4) & 0xfffffffb;
  FUN_100652cac(lVar5,PTR_s_build___DailyLogin_7Day_tga_1018549f8,"daily_login_decorative_line");
  local_a0 = (code *)CONCAT62(local_a0._2_6_,7);
  FUN_10064e5b8(lVar5,&local_a0);
  uVar14 = FUN_1006531b0(lVar5);
  FUN_1006531b0(lVar5);
  FUN_10064e47c(uVar14,param_2 + param_2,lVar5);
  FUN_100652cac(lVar8,PTR_s_build___DailyLogin_7Day_tga_1018549f8,"daily_login_triangle");
  fVar16 = 0.5;
  if ((*(float *)(param_3 + 0x1088) != 0.5) || (fVar16 = 1.0, *(float *)(param_3 + 0x108c) != 1.0))
  {
    *(undefined8 *)(param_3 + 0x1088) = 0x3f8000003f000000;
    FUN_1000200a0(lVar8);
  }
  fVar15 = (float)FUN_1006531b0(lVar8);
  local_a0 = (code *)CONCAT44(fVar16 * 1.1,fVar15 * 1.1);
  FUN_10064e48c(lVar8,&local_a0);
  *(uint *)(param_3 + 0x10bc) = *(uint *)(param_3 + 0x10bc) & 0xfffffffb;
  FUN_100651460(lVar6,&DAT_10115880c);
  FUN_100651038(lVar6,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220);
  uVar14 = FUN_1004e0150("MENU_DAILY_LOGIN_POPUP_DAY_LABEL_UPPER",0);
  FUN_1006513c0(lVar6,uVar14);
  FUN_1004e3120(&local_a0,"-");
  FUN_1001816d4(0x42000000,0x42f00000,0x44610000,lVar9,0,&local_a0,&DAT_10115a168,&DAT_101dc1cb8,0);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_100651594(param_3 + 0x1840,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff5ac8f4);
  FUN_100181be0(0x3f800000,lVar9,&local_a0);
  FUN_100181ba0(0x3f000000,lVar9,&DAT_10115a168);
  local_78 = DAT_101d91884;
  local_a0 = FUN_1002979a8;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = (void *)param_3;
  FUN_10001554c(param_3 + 0x1130,&local_a0);
  uVar14 = FUN_1004e0150("MENU_DAILY_LOGIN_POPUP_COLLECT_BUTTON",0);
  FUN_100181af8(lVar9,uVar14);
  *(uint *)(param_3 + 0x11ac) = *(uint *)(param_3 + 0x11ac) & 0xfffffffb;
  FUN_1002fcbec(lVar10);
  FUN_1002fccf4(lVar10,1);
  bVar11 = false;
  if ((*(float *)(param_3 + 0x2734) == 0.0) && (bVar11 = false, !NAN(*(float *)(param_3 + 0x2730))))
  {
    bVar11 = *(float *)(param_3 + 0x2730) == 0.0;
  }
  if (!bVar11) {
    *(undefined8 *)(param_3 + 0x2730) = 0;
    FUN_1000200a0(lVar10);
  }
  uVar14 = FUN_1004e0150("MENU_DAILY_LOGIN_POPUP_NEXT_REWARD_AVAILABLE",0);
  FUN_1002fcce4(lVar10,uVar14);
  *(uint *)(param_3 + 0x2764) = *(uint *)(param_3 + 0x2764) & 0xfffffffb;
  *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) | 0x10;
  return param_3;
}




void FUN_1002979a8(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002979b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x9b8))();
    return;
  }
  return;
}




long thunk_FUN_1002973d8(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar12 = (undefined8 *)FUN_1002fc4c4();
  puVar12[0x137] = 0;
  *puVar12 = &PTR_thunk_FUN_1002979c4_1014803a8;
  puVar12 = puVar12 + 0x138;
  FUN_10064e264(puVar12);
  lVar1 = param_3 + 0xa78;
  thunk_FUN_100650e64(lVar1);
  lVar2 = param_3 + 0xba8;
  FUN_10064e264(lVar2);
  *(undefined8 *)(param_3 + 0xc68) = 0;
  *(undefined8 *)(param_3 + 0xc60) = 0;
  lVar3 = param_3 + 0xc70;
  thunk_FUN_100652c08(lVar3);
  lVar4 = param_3 + 0xd60;
  FUN_10064e264();
  lVar5 = param_3 + 0xe18;
  thunk_FUN_100652c08(lVar5);
  lVar6 = param_3 + 0xf08;
  thunk_FUN_100650e64(lVar6);
  lVar8 = param_3 + 0x1038;
  thunk_FUN_100652c08();
  lVar9 = param_3 + 0x1128;
  thunk_FUN_100181304(lVar9,0);
  lVar10 = param_3 + 0x26e0;
  FUN_1002fcabc(lVar10);
  *(undefined8 *)(param_3 + 0x28f0) = 0;
  uStack_a0._0_2_ = 0x37;
  FUN_10064e5b8(param_3,&uStack_a0);
  *(uint *)(param_3 + 0x13c) = *(uint *)(param_3 + 0x13c) & 0xfffffffb;
  lVar7 = param_3 + 0x4a0;
  (**(code **)(*(long *)(param_3 + 0x4a0) + 0x78))(lVar7,puVar12,1);
  FUN_100642bd8(puVar12,lVar1,1);
  FUN_100642bd8(puVar12,lVar2,1);
  FUN_100642bd8(puVar12,lVar3,1);
  (**(code **)(*(long *)(param_3 + 0x4a0) + 0x78))(lVar7,lVar4,1);
  FUN_100642bd8(lVar4,lVar5,1);
  FUN_100642bd8(lVar4,lVar6,1);
  (**(code **)(*(long *)(param_3 + 0x4a0) + 0x78))(lVar7,lVar8,1);
  (**(code **)(*(long *)(param_3 + 1000) + 0x78))(param_3 + 1000,lVar9,1);
  (**(code **)(*(long *)(param_3 + 1000) + 0x78))(param_3 + 1000,lVar10,1);
  plVar13 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(puVar12,plVar13);
  (**(code **)(*plVar13 + 0x60))(plVar13,lVar1,9);
  (**(code **)(*plVar13 + 0x68))(plVar13,lVar2,1,10);
  (**(code **)(*plVar13 + 0x58))(plVar13,lVar3);
  uVar14 = thunk_FUN_10064dde8();
  FUN_10064e524(lVar2,uVar14);
  uStack_a0._0_2_ = 0x77;
  FUN_10064e5b8(lVar2,&uStack_a0);
  plVar13 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(lVar4,plVar13);
  (**(code **)(*plVar13 + 0x60))(plVar13,lVar5,2);
  (**(code **)(*plVar13 + 0x60))(plVar13,lVar6,2);
  FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651460(lVar1,&DAT_101158804);
  uVar14 = FUN_1004e0150("MENU_DAILY_LOGIN_INBOX_TITLE",0);
  FUN_1006513c0(lVar1,uVar14);
  FUN_100652cac(lVar3,PTR_s_build___DailyLogin_7Day_tga_1018549f8,"daily_login_decorative_line");
  uStack_a0._0_2_ = 0x57;
  FUN_10064e5b8(lVar3,&uStack_a0);
  FUN_10064e5b8(lVar4,&DAT_101dbd510);
  *(uint *)(param_3 + 0xde4) = *(uint *)(param_3 + 0xde4) & 0xfffffffb;
  FUN_100652cac(lVar5,PTR_s_build___DailyLogin_7Day_tga_1018549f8,"daily_login_decorative_line");
  uStack_a0 = (code *)CONCAT62(uStack_a0._2_6_,7);
  FUN_10064e5b8(lVar5,&uStack_a0);
  uVar14 = FUN_1006531b0(lVar5);
  FUN_1006531b0(lVar5);
  FUN_10064e47c(uVar14,param_2 + param_2,lVar5);
  FUN_100652cac(lVar8,PTR_s_build___DailyLogin_7Day_tga_1018549f8,"daily_login_triangle");
  fVar16 = 0.5;
  if ((*(float *)(param_3 + 0x1088) != 0.5) || (fVar16 = 1.0, *(float *)(param_3 + 0x108c) != 1.0))
  {
    *(undefined8 *)(param_3 + 0x1088) = 0x3f8000003f000000;
    FUN_1000200a0(lVar8);
  }
  fVar15 = (float)FUN_1006531b0(lVar8);
  uStack_a0 = (code *)CONCAT44(fVar16 * 1.1,fVar15 * 1.1);
  FUN_10064e48c(lVar8,&uStack_a0);
  *(uint *)(param_3 + 0x10bc) = *(uint *)(param_3 + 0x10bc) & 0xfffffffb;
  FUN_100651460(lVar6,&DAT_10115880c);
  FUN_100651038(lVar6,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220);
  uVar14 = FUN_1004e0150("MENU_DAILY_LOGIN_POPUP_DAY_LABEL_UPPER",0);
  FUN_1006513c0(lVar6,uVar14);
  FUN_1004e3120(&uStack_a0,"-");
  FUN_1001816d4(0x42000000,0x42f00000,0x44610000,lVar9,0,&uStack_a0,&DAT_10115a168,&DAT_101dc1cb8,0)
  ;
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
  }
  FUN_100651594(param_3 + 0x1840,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  uStack_a0 = (code *)CONCAT44(uStack_a0._4_4_,0xff5ac8f4);
  FUN_100181be0(0x3f800000,lVar9,&uStack_a0);
  FUN_100181ba0(0x3f000000,lVar9,&DAT_10115a168);
  uStack_78 = DAT_101d91884;
  uStack_a0 = FUN_1002979a8;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  pvStack_98 = (void *)param_3;
  FUN_10001554c(param_3 + 0x1130,&uStack_a0);
  uVar14 = FUN_1004e0150("MENU_DAILY_LOGIN_POPUP_COLLECT_BUTTON",0);
  FUN_100181af8(lVar9,uVar14);
  *(uint *)(param_3 + 0x11ac) = *(uint *)(param_3 + 0x11ac) & 0xfffffffb;
  FUN_1002fcbec(lVar10);
  FUN_1002fccf4(lVar10,1);
  bVar11 = false;
  if ((*(float *)(param_3 + 0x2734) == 0.0) && (bVar11 = false, !NAN(*(float *)(param_3 + 0x2730))))
  {
    bVar11 = *(float *)(param_3 + 0x2730) == 0.0;
  }
  if (!bVar11) {
    *(undefined8 *)(param_3 + 0x2730) = 0;
    FUN_1000200a0(lVar10);
  }
  uVar14 = FUN_1004e0150("MENU_DAILY_LOGIN_POPUP_NEXT_REWARD_AVAILABLE",0);
  FUN_1002fcce4(lVar10,uVar14);
  *(uint *)(param_3 + 0x2764) = *(uint *)(param_3 + 0x2764) & 0xfffffffb;
  *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) | 0x10;
  return param_3;
}




void FUN_1002979c4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002979c4_1014803a8;
  FUN_100297b4c();
  FUN_100297bf8();
  thunk_FUN_1002fcb10(param_1 + 0x4dc);
  FUN_10003bd40(param_1 + 0x225);
  param_1[0x207] = &PTR_FUN_1014a7108;
  param_1[0x21e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x221);
  FUN_10064e2bc(param_1 + 0x207);
  thunk_FUN_100651068(param_1 + 0x1e1);
  param_1[0x1c3] = &PTR_FUN_1014a7108;
  param_1[0x1da] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1dd);
  FUN_10064e2bc(param_1 + 0x1c3);
  thunk_FUN_10064e2bc(param_1 + 0x1ac);
  param_1[0x18e] = &PTR_FUN_1014a7108;
  param_1[0x1a5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a8);
  FUN_10064e2bc(param_1 + 0x18e);
  if ((void *)param_1[0x18d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18d]);
    param_1[0x18d] = 0;
    param_1[0x18c] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x175);
  thunk_FUN_100651068(param_1 + 0x14f);
  thunk_FUN_10064e2bc(param_1 + 0x138);
  *param_1 = &PTR_FUN_10148d378;
  thunk_FUN_1002fc050(param_1 + 0xab);
  thunk_FUN_10064e2bc(param_1 + 0x94);
  thunk_FUN_10064e2bc(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_1014a7108;
  param_1[0x76] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x79);
  FUN_10064e2bc(param_1 + 0x5f);
  param_1[0x35] = &PTR_FUN_1014a6db0;
  param_1[0x4c] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100297b4c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  
  FUN_1002fc834();
  lVar1 = FUN_10064e5a0(param_1 + 0xba8);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_10064e5a0(param_1 + 0xba8);
    (**(code **)(*plVar2 + 0x50))();
  }
  uVar4 = *(uint *)(param_1 + 0xc60);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0xc68);
      plVar2 = *(long **)(lVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        lVar1 = *(long *)(param_1 + 0xc68);
        uVar4 = *(uint *)(param_1 + 0xc60);
      }
      *(undefined8 *)(lVar1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (*(long *)(param_1 + 0xc68) != 0) {
    *(undefined4 *)(param_1 + 0xc60) = 0;
  }
  *(undefined8 *)(param_1 + 0x28f0) = 0;
  uVar3 = FUN_1004e0150("MENU_DAILY_LOGIN_POPUP_DAY_LABEL_UPPER",0);
  FUN_1006513c0(param_1 + 0xf08,uVar3);
  return;
}




void FUN_100297bf8(void)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10002f320();
  FUN_10001549c(local_38,"daily_reward_collect");
  FUN_100030cf0(uVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void thunk_FUN_1002979c4(void)

{
  FUN_1002979c4();
  return;
}




void FUN_100297c50(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002979c4();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_100297c68(void)

{
  FUN_100297c68();
  return;
}




void FUN_100297c68(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  
  uVar5 = (**(code **)(*param_1 + 0x48))();
  fVar4 = 500.0;
  FUN_1002fc8c0(uVar5,0x43fa0000,param_1);
  plVar1 = param_1 + 0x138;
  FUN_10064e32c(plVar1);
  FUN_10064e32c(param_1 + 0x175);
  plVar2 = param_1 + 0x1ac;
  FUN_10064e32c(plVar2);
  if ((long *)param_1[0x51e] != (long *)0x0) {
    uVar5 = (**(code **)(*(long *)param_1[0x51e] + 0x48))();
    FUN_1006425d0(plVar2,0,0,1,1);
    FUN_10064e47c(uVar5,plVar2);
    FUN_10064e72c(0,plVar2,4,param_1[0x51e],4);
  }
  plVar3 = param_1 + 0x94;
  uVar5 = (**(code **)(param_1[0x94] + 0x48))(plVar3);
  (**(code **)(param_1[0x94] + 0x48))(plVar3);
  fVar6 = fVar4;
  FUN_10064e3cc(plVar2);
  FUN_10064e47c(uVar5,fVar4 - fVar6,plVar1);
  FUN_10064e72c(0,plVar1,0,plVar3,0);
  FUN_10064e72c(0xc0000000,plVar2,0,plVar1,2);
  FUN_10064e72c(0,param_1 + 0x207,2,param_1 + 0x1c3,2);
  FUN_10064e72c(0,param_1 + 0x207,4,plVar2,4);
  plVar1 = param_1 + 0x7d;
  uVar5 = (**(code **)(param_1[0x7d] + 0x48))(plVar1);
  FUN_10064e47c(uVar5,0x42c80000,param_1 + 0x4dc);
  FUN_10064e5ec(0,0,param_1 + 0x225,8,plVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0x4dc,8,plVar1,8);
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(uVar5,0x43fa0000,param_1);
  return;
}




void FUN_100297e54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_90;
  undefined1 auStack_88 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  pvVar3 = operator_new(0x6c8);
  local_90 = FUN_10029818c(pvVar3,param_2,param_3,param_4);
  if (*(int *)(local_90 + 0x6c0) == 3) {
    *(void **)(param_1 + 0x28f0) = pvVar3;
    FUN_1002fc780(param_1,0);
    *(uint *)(param_1 + 0xde4) = *(uint *)(param_1 + 0xde4) & 0xfffffffb;
    *(uint *)(param_1 + 0x10bc) = *(uint *)(param_1 + 0x10bc) & 0xfffffffb;
  }
  else if (*(int *)(local_90 + 0x6c0) == 2) {
    *(void **)(param_1 + 0x28f0) = pvVar3;
    FUN_1002fc780(param_1,1);
    *(uint *)(param_1 + 0xde4) = *(uint *)(param_1 + 0xde4) | 4;
    *(uint *)(param_1 + 0x10bc) = *(uint *)(param_1 + 0x10bc) | 4;
    FUN_100102450(auStack_88,"MENU_DAILY_LOGIN_POPUP_DAY_LABEL_UPPER_%d");
    uVar4 = FUN_1004e0150(auStack_88,0);
    FUN_1006513c0(param_1 + 0xf08,uVar4);
  }
  lVar1 = param_1 + 0xba8;
  FUN_100642bd8(lVar1,pvVar3,1);
  iVar2 = *(int *)(param_1 + 0xc60);
  plVar5 = (long *)FUN_10064e5a0(lVar1);
  if (iVar2 == 6) {
    (**(code **)(*plVar5 + 0x68))(plVar5,pvVar3,4,2);
  }
  else {
    (**(code **)(*plVar5 + 0x68))(plVar5,pvVar3,3,2);
    plVar5 = (long *)FUN_10064e5a0(lVar1);
    (**(code **)(*plVar5 + 0x70))(plVar5,6);
  }
  FUN_100297ff8(param_1 + 0xc60,&local_90);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100297ff8(uint *param_1,undefined8 *param_2)

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
    FUN_100298a10(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100298078(long param_1,int param_2)

{
  long local_18;
  
  *(uint *)(param_1 + 0x11ac) =
       *(uint *)(param_1 + 0x11ac) & 0xfffffff8 |
       *(uint *)(param_1 + 0x11ac) & 3 | (uint)(param_2 < 1) << 2;
  *(uint *)(param_1 + 0x2764) =
       *(uint *)(param_1 + 0x2764) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2764) & 3 | (uint)(0 < param_2) << 2;
  local_18 = (long)param_2;
  FUN_1002fccd0(param_1 + 0x26e0,&local_18);
  return;
}




void FUN_1002980d4(long param_1)

{
  undefined8 uVar1;
  void *local_78 [2];
  char local_61;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  local_60 = 0;
  local_58 = 0;
  local_54 = DAT_101dc1cb8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0x3f800000;
  local_22 = 1;
  local_48 = param_1 + 0x1128;
  uStack_40 = 0;
  local_24 = 0x101;
  uVar1 = FUN_10002f320();
  FUN_10001549c(local_78,"daily_reward_collect");
  FUN_100030c8c(uVar1,local_78,&local_60);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  uVar1 = FUN_10002f320();
  FUN_100030818(uVar1,&DAT_101d91198);
  return;
}




long * FUN_10029818c(long *param_1,undefined4 param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  puVar6 = (undefined8 *)FUN_1006543ec();
  *puVar6 = &PTR_thunk_FUN_100298604_1014804f0;
  puVar6 = puVar6 + 0x34;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x52;
  thunk_FUN_100651ebc(plVar1);
  plVar2 = param_1 + 0x7c;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x9a;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xb8;
  thunk_FUN_100652c08(plVar4);
  param_1[0xd6] = param_3;
  param_1[0xd7] = param_4;
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100654488(param_1,1);
  FUN_100652cac(puVar6,PTR_s_build___DailyLogin_7Day_tga_1018549f8,param_1[0xd6]);
  if ((*(float *)(param_1 + 0x3e) != 0.5) || (*(float *)((long)param_1 + 500) != 0.5)) {
    param_1[0x3e] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar6);
  }
  FUN_100653080(puVar6,1);
  FUN_100651f8c(plVar1,PTR_s_build___DailyLogin_7Day_tga_1018549f8);
  FUN_100651f94(plVar1,"frame_top_left",0,0,0,"frame_top_mid",0,0,0,"frame_top_right",0,
                "frame_mid_left",0,0,0,"frame_mid_right",0,"frame_bot_left",0,"frame_bot_mid",0,
                "frame_bot_right",0);
  FUN_100652590(plVar1,&DAT_101158814,2);
  FUN_100652ca4(plVar2,PTR_s_build___DailyLogin_7Day_tga_1018549f8);
  if (((char *)param_1[0xd7] != (char *)0x0) &&
     (iVar5 = _strcmp((char *)param_1[0xd7],"daily_login_glory"), iVar5 == 0)) {
    FUN_100652cdc(plVar2,param_1[0xd7]);
  }
  if ((*(float *)(param_1 + 0x86) != 0.5) || (*(float *)((long)param_1 + 0x434) != 0.5)) {
    param_1[0x86] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100653080(plVar2,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar7 = *(uint *)((long)param_1 + 0x554);
  if ((uVar7 & 0x7f80) != 0x5180) {
    *(uint *)((long)param_1 + 0x554) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5180;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_check");
  FUN_100652dd4(plVar4,&DAT_101158810,2);
  switch((int)param_1[0xd8]) {
  case 0:
    *(uint *)((long)param_1 + 0x644) = *(uint *)((long)param_1 + 0x644) & 0xfffffffb;
    uVar7 = *(uint *)((long)param_1 + 0x554) & 0xfffffffb;
    break;
  case 1:
    *(uint *)((long)param_1 + 0x644) = *(uint *)((long)param_1 + 0x644) | 4;
    uVar7 = *(uint *)((long)param_1 + 0x554) | 4;
    break;
  case 2:
    *(uint *)((long)param_1 + 0x644) = *(uint *)((long)param_1 + 0x644) & 0xfffffffb;
    uVar7 = *(uint *)((long)param_1 + 0x554) & 0xfffffffb;
    goto LAB_100298514;
  case 3:
    *(uint *)((long)param_1 + 0x644) = *(uint *)((long)param_1 + 0x644) | 4;
    uVar7 = *(uint *)((long)param_1 + 0x554) | 4;
LAB_100298514:
    *(uint *)((long)param_1 + 0x554) = uVar7;
    FUN_100651f94(plVar1,"frame_highlight_top_left",0,0,0,"frame_highlight_top_mid",0,0,0,
                  "frame_highlight_top_right",0,"frame_highlight_mid_left",0,0,0,
                  "frame_highlight_mid_right",0,"frame_highlight_bot_left",0,
                  "frame_highlight_bot_mid",0,"frame_highlight_bot_right",0);
    FUN_100652590(plVar1,&DAT_101158818,2);
  default:
    goto switchD_1002984b0_default;
  }
  *(uint *)((long)param_1 + 0x554) = uVar7;
switchD_1002984b0_default:
  return param_1;
}




void FUN_100298604(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100298604_1014804f0;
  param_1[0xd7] = 0;
  param_1[0xb8] = &PTR_FUN_1014a7108;
  param_1[0xcf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd2);
  FUN_10064e2bc(param_1 + 0xb8);
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x52] = &PTR_FUN_1014a6db0;
  param_1[0x69] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x6c);
  FUN_10064e2bc(param_1 + 0x52);
  param_1[0x34] = &PTR_FUN_1014a7108;
  param_1[0x4b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4e);
  FUN_10064e2bc(param_1 + 0x34);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100298604(void)

{
  FUN_100298604();
  return;
}




void FUN_1002986ec(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100298604();
  operator_delete(pvVar1);
  return;
}




void FUN_100298700(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uVar4;
  
  FUN_10064e47c();
  lVar1 = param_3 + 0x1a0;
  FUN_10064e47c(param_1,param_2,lVar1);
  FUN_10064ecdc(param_1,lVar1);
  uVar4 = param_2;
  FUN_10064e47c(param_1,param_3 + 0x290);
  uVar3 = (undefined4)uVar4;
  lVar2 = param_3 + 0x3e0;
  local_48 = FUN_1006531b0(lVar2);
  uStack_44 = uVar3;
  FUN_10064e48c(lVar2,&local_48);
  FUN_10064ecdc(param_1,lVar2);
  FUN_10064e47c(param_1,param_2,param_3 + 0x4d0);
  FUN_10064e5ec(0,0,lVar1,8,param_3,8);
  FUN_10064e5ec(0,0,lVar2,8,param_3,8);
  FUN_10064e5ec(0,0,param_3 + 0x4d0,8,param_3,8);
  FUN_10064e72c(0,param_3 + 0x5c0,4,param_3,4);
  FUN_10064e72c(0xc1400000,param_3 + 0x5c0,2,param_3,2);
  return;
}




void FUN_100298834(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_101480260;
  param_1[0xa8] = &PTR_FUN_1014a6db0;
  param_1[0xbf] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xc2);
  FUN_10064e2bc(param_1 + 0xa8);
  param_1[0x8a] = &PTR_FUN_1014a7108;
  param_1[0xa1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa4);
  FUN_10064e2bc(param_1 + 0x8a);
  FUN_10064e2bc(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_1014a7108;
  param_1[0x4f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x52);
  FUN_10064e2bc(param_1 + 0x38);
  puVar1 = param_1 + 0x17;
  *puVar1 = &PTR_FUN_1014a77a8;
  param_1[0x2e] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x35);
  *puVar1 = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(puVar1);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100298920(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_101480260;
  param_1[0xa8] = &PTR_FUN_1014a6db0;
  param_1[0xbf] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xc2);
  FUN_10064e2bc(param_1 + 0xa8);
  param_1[0x8a] = &PTR_FUN_1014a7108;
  param_1[0xa1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa4);
  FUN_10064e2bc(param_1 + 0x8a);
  FUN_10064e2bc(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_1014a7108;
  param_1[0x4f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x52);
  FUN_10064e2bc(param_1 + 0x38);
  puVar2 = param_1 + 0x17;
  *puVar2 = &PTR_FUN_1014a77a8;
  param_1[0x2e] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x35);
  *puVar2 = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(puVar2);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100298a10(uint *param_1,uint param_2)

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




long * FUN_100298a8c(long *param_1)

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
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined4 local_98;
  undefined1 auStack_94 [4];
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_100533dfc();
  puVar11[0x1b] = 0;
  *puVar11 = &PTR_thunk_FUN_100299544_101480650;
  puVar11 = puVar11 + 0x1c;
  FUN_1006505b8(puVar11);
  plVar15 = param_1 + 0x37;
  thunk_FUN_100652c08(plVar15);
  plVar13 = param_1 + 0x55;
  FUN_10064e264();
  plVar1 = param_1 + 0x6c;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x8a;
  thunk_FUN_1001d0b98();
  plVar3 = param_1 + 0xf5;
  thunk_FUN_1001d4a98(plVar3);
  plVar4 = param_1 + 0x148;
  thunk_FUN_1001d0b98();
  thunk_FUN_1001d57d8();
  thunk_FUN_1001d44d0();
  thunk_FUN_1001d2b74();
  param_1[0xcb4] = 0;
  param_1[0xcb3] = 0;
  param_1[0xcb2] = (long)(param_1 + 0xcb3);
  plVar6 = param_1 + 0xcb5;
  thunk_FUN_1001d23f4(plVar6,0);
  plVar7 = param_1 + 0xd48;
  thunk_FUN_1001d23f4(plVar7,1);
  plVar8 = param_1 + 0xddb;
  FUN_10064e264(plVar8);
  plVar9 = param_1 + 0xdf2;
  FUN_10064e264(plVar9);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100642bd8(puVar11,plVar15,1);
  FUN_100642bd8(plVar15,plVar1,1);
  FUN_100642bd8(plVar15,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0xb96,1);
  FUN_100642bd8(plVar3,param_1 + 0x89b,1);
  FUN_100642bd8(plVar15,plVar2,1);
  FUN_1001d0f60(plVar2,plVar6,1);
  FUN_1001d0f60(plVar2,plVar8,1);
  FUN_100642bd8(plVar15,plVar4,1);
  FUN_1001d0f60(plVar4,plVar7,1);
  FUN_1001d0f60(plVar4,plVar9,1);
  FUN_100299164(param_1);
  FUN_100299240(param_1);
  local_68 = DAT_101d23820;
  local_90 = FUN_10029939c;
  plVar5 = param_1 + 1;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar5,&local_90);
  local_68 = DAT_101d23824;
  local_90 = FUN_1002993d0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar5,&local_90);
  local_68 = DAT_101d23828;
  local_90 = FUN_100299404;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar5,&local_90);
  local_68 = DAT_101d2382c;
  local_90 = FUN_100299438;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar5,&local_90);
  local_68 = DAT_101d2381c;
  local_90 = FUN_10029946c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar5,&local_90);
  FUN_100642bd8(puVar11,plVar13,1);
  FUN_100641464(&local_90,auStack_94);
  uVar12 = thunk_FUN_10064dd80();
  FUN_10064e524(plVar13,uVar12);
  FUN_10064e5cc(plVar13,1);
  *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xfffffffb;
  FUN_100652cac(plVar1,PTR_s_build___DraftCenter_Background_p_1018549a8,"full_splash_1k");
  FUN_100653080(plVar1,1);
  if ((*(uint *)((long)param_1 + 0x3e4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  local_98 = 0xff753041;
  FUN_100650608(puVar11,&local_98);
  FUN_10064e5b8(plVar8,&DAT_101872b9c);
  FUN_10064e5b8(plVar9,&DAT_101872b9c);
  plVar13 = (long *)thunk_FUN_10064de70();
  uVar16 = 2;
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar15,1,2);
  (**(code **)(*plVar13 + 0x68))(plVar13,param_1 + 0x1b3,0,2);
  FUN_10064e524(puVar11,plVar13);
  plVar13 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar2,1,2);
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar3,5,2);
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar4,1,2);
  FUN_10064e524(plVar15,plVar13);
  FUN_10064e4dc(plVar2,800);
  FUN_10064e5b8(plVar2,&DAT_101872b94);
  FUN_1001d0d24(plVar2,0);
  FUN_10064e4dc(plVar4,800);
  FUN_10064e5b8(plVar4,&DAT_101872b94);
  FUN_1001d0d24(plVar4,1);
  FUN_10064e5b8(plVar3,&DAT_101872ba4);
  local_98._0_2_ = 3;
  FUN_10064e5b8(plVar6,&local_98);
  local_98 = CONCAT22(local_98._2_2_,3);
  FUN_10064e5b8(plVar7,&local_98);
  FUN_10064e5cc(plVar6,1);
  FUN_10064e5cc(plVar7,1);
  lVar14 = FUN_1003467f8();
  if (lVar14 != 0) {
    FUN_1003467f8();
    iVar10 = FUN_10034ced0();
    uVar16 = 1;
    if (iVar10 != 0) {
      uVar16 = 2;
    }
  }
  FUN_1001d25fc(plVar6,uVar16);
  FUN_1001d25fc(plVar7,uVar16);
  plVar15 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar6,0,9);
  (**(code **)(*plVar15 + 0x78))(plVar15,0,1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar8,1,9);
  (**(code **)(*plVar15 + 0x78))(plVar15,0,1);
  FUN_10064e524(plVar2,plVar15);
  uVar12 = thunk_FUN_10064de70();
  FUN_10064a8b0(uVar12,0,0xf,0x14,0xf);
  FUN_10064e524(plVar8,uVar12);
  plVar15 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar7,0,0x11);
  (**(code **)(*plVar15 + 0x78))(plVar15,0,1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar9,1,0x11);
  (**(code **)(*plVar15 + 0x78))(plVar15,0,1);
  FUN_10064e524(plVar4,plVar15);
  uVar12 = thunk_FUN_10064de70();
  FUN_10064a8b0(uVar12,0x14,0xf,0,0xf);
  FUN_10064e524(plVar9,uVar12);
  FUN_1002994a0(param_1,0);
  FUN_10064e6d8(0,0,param_1,0);
  return param_1;
}




void FUN_100299164(long param_1)

{
  undefined4 uVar1;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  FUN_100642bd8(param_1 + 0xe0,param_1 + 0xd98,1);
  uVar1 = DAT_101d91884;
  local_28 = DAT_101d91884;
  local_50 = FUN_10029997c;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 0x1000,&local_50);
  local_28 = uVar1;
  local_50 = FUN_10029998c;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 0x1ec8,&local_50);
  local_28 = uVar1;
  local_50 = FUN_10029999c;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 0x25f8,&local_50);
  local_28 = uVar1;
  local_50 = FUN_1002999ac;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 0x3458,&local_50);
  return;
}




void FUN_100299240(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 local_50 [8];
  undefined2 local_48 [4];
  
  FUN_100652cac(param_1 + 0x1b8,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_bg");
  FUN_10064e5b8(param_1 + 0x1b8,&DAT_101872b9c);
  plVar3 = (long *)thunk_FUN_10064de70();
  lVar1 = param_1 + 0x5cb0;
  (**(code **)(*plVar3 + 0x68))(plVar3,lVar1,0,2);
  lVar2 = param_1 + 0x44d8;
  (**(code **)(*plVar3 + 0x68))(plVar3,lVar2,1,2);
  FUN_10064e524(param_1 + 0x7a8,plVar3);
  FUN_10064e47c(0x448d2000,0x437e0000,lVar1);
  FUN_10064e4dc(lVar1,0xfe00000469);
  FUN_10064e514(lVar1,0xfe0000ffff);
  FUN_10064e504(lVar1,0xfe00000000);
  local_48[0] = 0x15;
  FUN_10064e5b8(lVar1,local_48);
  FUN_10064e5b8(lVar2,&DAT_101872ba4);
  FUN_100534ef4(lVar2,PTR_s_build___MenuPartsCommon_tga_101854970,1);
  local_50[0] = 1;
  FUN_100534ebc(lVar2,local_50);
  FUN_10064e5cc(lVar2,1);
  return;
}




void FUN_10029939c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x0001002993cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
  return;
}




void FUN_1002993d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x000100299400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,uVar1);
  return;
}




void FUN_100299404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x000100299434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,uVar1);
  return;
}




void FUN_100299438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x000100299468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,uVar1);
  return;
}




void FUN_10029946c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010029949c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar1);
  return;
}




void FUN_1002994a0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if ((param_2 & 1) == 0) {
    uVar1 = FUN_10029a118(param_1,param_1 + 0x65a8);
    uVar1 = FUN_10029a118(uVar1,param_1 + 0x6a40);
    FUN_10029a118(uVar1,param_1 + 0x44d8);
    uVar2 = 0x3e4ccccd;
  }
  else {
    uVar1 = FUN_10029a1dc();
    uVar1 = FUN_10029a1dc(uVar1,param_1 + 0x6a40);
    FUN_10029a1dc(uVar1,param_1 + 0x44d8);
    uVar2 = 0;
  }
  FUN_100642324(param_1 + 0x360);
  uVar1 = FUN_100640840(uVar2,0x3e4ccccd,0);
  FUN_100642b14(param_1 + 0x360,uVar1);
  return;
}




long * thunk_FUN_100298a8c(long *param_1)

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
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined4 uStack_98;
  undefined1 auStack_94 [4];
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar11 = (undefined8 *)FUN_100533dfc();
  puVar11[0x1b] = 0;
  *puVar11 = &PTR_thunk_FUN_100299544_101480650;
  puVar11 = puVar11 + 0x1c;
  FUN_1006505b8(puVar11);
  plVar15 = param_1 + 0x37;
  thunk_FUN_100652c08(plVar15);
  plVar13 = param_1 + 0x55;
  FUN_10064e264();
  plVar1 = param_1 + 0x6c;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x8a;
  thunk_FUN_1001d0b98();
  plVar3 = param_1 + 0xf5;
  thunk_FUN_1001d4a98(plVar3);
  plVar4 = param_1 + 0x148;
  thunk_FUN_1001d0b98();
  thunk_FUN_1001d57d8();
  thunk_FUN_1001d44d0();
  thunk_FUN_1001d2b74();
  param_1[0xcb4] = 0;
  param_1[0xcb3] = 0;
  param_1[0xcb2] = (long)(param_1 + 0xcb3);
  plVar6 = param_1 + 0xcb5;
  thunk_FUN_1001d23f4(plVar6,0);
  plVar7 = param_1 + 0xd48;
  thunk_FUN_1001d23f4(plVar7,1);
  plVar8 = param_1 + 0xddb;
  FUN_10064e264(plVar8);
  plVar9 = param_1 + 0xdf2;
  FUN_10064e264(plVar9);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100642bd8(puVar11,plVar15,1);
  FUN_100642bd8(plVar15,plVar1,1);
  FUN_100642bd8(plVar15,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0xb96,1);
  FUN_100642bd8(plVar3,param_1 + 0x89b,1);
  FUN_100642bd8(plVar15,plVar2,1);
  FUN_1001d0f60(plVar2,plVar6,1);
  FUN_1001d0f60(plVar2,plVar8,1);
  FUN_100642bd8(plVar15,plVar4,1);
  FUN_1001d0f60(plVar4,plVar7,1);
  FUN_1001d0f60(plVar4,plVar9,1);
  FUN_100299164(param_1);
  FUN_100299240(param_1);
  uStack_68 = DAT_101d23820;
  pcStack_90 = FUN_10029939c;
  plVar5 = param_1 + 1;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar5,&pcStack_90);
  uStack_68 = DAT_101d23824;
  pcStack_90 = FUN_1002993d0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar5,&pcStack_90);
  uStack_68 = DAT_101d23828;
  pcStack_90 = FUN_100299404;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar5,&pcStack_90);
  uStack_68 = DAT_101d2382c;
  pcStack_90 = FUN_100299438;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar5,&pcStack_90);
  uStack_68 = DAT_101d2381c;
  pcStack_90 = FUN_10029946c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar5,&pcStack_90);
  FUN_100642bd8(puVar11,plVar13,1);
  FUN_100641464(&pcStack_90,auStack_94);
  uVar12 = thunk_FUN_10064dd80();
  FUN_10064e524(plVar13,uVar12);
  FUN_10064e5cc(plVar13,1);
  *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xfffffffb;
  FUN_100652cac(plVar1,PTR_s_build___DraftCenter_Background_p_1018549a8,"full_splash_1k");
  FUN_100653080(plVar1,1);
  if ((*(uint *)((long)param_1 + 0x3e4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  uStack_98 = 0xff753041;
  FUN_100650608(puVar11,&uStack_98);
  FUN_10064e5b8(plVar8,&DAT_101872b9c);
  FUN_10064e5b8(plVar9,&DAT_101872b9c);
  plVar13 = (long *)thunk_FUN_10064de70();
  uVar16 = 2;
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar15,1,2);
  (**(code **)(*plVar13 + 0x68))(plVar13,param_1 + 0x1b3,0,2);
  FUN_10064e524(puVar11,plVar13);
  plVar13 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar2,1,2);
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar3,5,2);
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar4,1,2);
  FUN_10064e524(plVar15,plVar13);
  FUN_10064e4dc(plVar2,800);
  FUN_10064e5b8(plVar2,&DAT_101872b94);
  FUN_1001d0d24(plVar2,0);
  FUN_10064e4dc(plVar4,800);
  FUN_10064e5b8(plVar4,&DAT_101872b94);
  FUN_1001d0d24(plVar4,1);
  FUN_10064e5b8(plVar3,&DAT_101872ba4);
  uStack_98._0_2_ = 3;
  FUN_10064e5b8(plVar6,&uStack_98);
  uStack_98 = CONCAT22(uStack_98._2_2_,3);
  FUN_10064e5b8(plVar7,&uStack_98);
  FUN_10064e5cc(plVar6,1);
  FUN_10064e5cc(plVar7,1);
  lVar14 = FUN_1003467f8();
  if (lVar14 != 0) {
    FUN_1003467f8();
    iVar10 = FUN_10034ced0();
    uVar16 = 1;
    if (iVar10 != 0) {
      uVar16 = 2;
    }
  }
  FUN_1001d25fc(plVar6,uVar16);
  FUN_1001d25fc(plVar7,uVar16);
  plVar15 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar6,0,9);
  (**(code **)(*plVar15 + 0x78))(plVar15,0,1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar8,1,9);
  (**(code **)(*plVar15 + 0x78))(plVar15,0,1);
  FUN_10064e524(plVar2,plVar15);
  uVar12 = thunk_FUN_10064de70();
  FUN_10064a8b0(uVar12,0,0xf,0x14,0xf);
  FUN_10064e524(plVar8,uVar12);
  plVar15 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar7,0,0x11);
  (**(code **)(*plVar15 + 0x78))(plVar15,0,1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar9,1,0x11);
  (**(code **)(*plVar15 + 0x78))(plVar15,0,1);
  FUN_10064e524(plVar4,plVar15);
  uVar12 = thunk_FUN_10064de70();
  FUN_10064a8b0(uVar12,0x14,0xf,0,0xf);
  FUN_10064e524(plVar9,uVar12);
  FUN_1002994a0(param_1,0);
  FUN_10064e6d8(0,0,param_1,0);
  return param_1;
}




void FUN_100299544(undefined8 *param_1)

{
  undefined8 *local_60;
  code *pcStack_58;
  
  *param_1 = &PTR_thunk_FUN_100299544_101480650;
  pcStack_58 = FUN_10029a414;
  local_60 = param_1;
  FUN_100643a8c(&local_60);
  thunk_FUN_10064e2bc(param_1 + 0xdf2);
  thunk_FUN_10064e2bc(param_1 + 0xddb);
  param_1[0xd48] = &PTR_FUN_1014671d0;
  thunk_FUN_10064e2bc(param_1 + 0xdc3);
  thunk_FUN_100651068(param_1 + 0xd9d);
  param_1[0xd7f] = &PTR_FUN_1014a7108;
  param_1[0xd96] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd99);
  FUN_10064e2bc(param_1 + 0xd7f);
  param_1[0xd61] = &PTR_FUN_1014a7108;
  param_1[0xd78] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd7b);
  FUN_10064e2bc(param_1 + 0xd61);
  if ((void *)param_1[0xd60] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd60]);
    param_1[0xd60] = 0;
    param_1[0xd5f] = 0;
  }
  FUN_10064e2bc(param_1 + 0xd48);
  param_1[0xcb5] = &PTR_FUN_1014671d0;
  thunk_FUN_10064e2bc(param_1 + 0xd30);
  thunk_FUN_100651068(param_1 + 0xd0a);
  param_1[0xcec] = &PTR_FUN_1014a7108;
  param_1[0xd03] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd06);
  FUN_10064e2bc(param_1 + 0xcec);
  param_1[0xcce] = &PTR_FUN_1014a7108;
  param_1[0xce5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xce8);
  FUN_10064e2bc(param_1 + 0xcce);
  if ((void *)param_1[0xccd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xccd]);
    param_1[0xccd] = 0;
    param_1[0xccc] = 0;
  }
  FUN_10064e2bc(param_1 + 0xcb5);
  FUN_10029a380(param_1 + 0xcb2,param_1[0xcb3]);
  FUN_1001d7ab4(param_1 + 0xb96);
  FUN_1001d7bcc(param_1 + 0x89b);
  FUN_1001d7d6c(param_1 + 0x1b3);
  param_1[0x148] = &PTR_FUN_101466d88;
  thunk_FUN_10064e2bc(param_1 + 0x19b);
  param_1[0x17d] = &PTR_FUN_1014a7108;
  param_1[0x194] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x197);
  FUN_10064e2bc(param_1 + 0x17d);
  param_1[0x15f] = &PTR_FUN_1014a7108;
  param_1[0x176] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x179);
  FUN_10064e2bc(param_1 + 0x15f);
  FUN_10064e2bc(param_1 + 0x148);
  param_1[0xf5] = &PTR_FUN_101467be8;
  param_1[0x12a] = &PTR_FUN_1014a7108;
  param_1[0x141] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x144);
  FUN_10064e2bc(param_1 + 0x12a);
  param_1[0x10c] = &PTR_FUN_1014a7108;
  param_1[0x123] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x126);
  FUN_10064e2bc(param_1 + 0x10c);
  FUN_10064e2bc(param_1 + 0xf5);
  param_1[0x8a] = &PTR_FUN_101466d88;
  thunk_FUN_10064e2bc(param_1 + 0xdd);
  param_1[0xbf] = &PTR_FUN_1014a7108;
  param_1[0xd6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd9);
  FUN_10064e2bc(param_1 + 0xbf);
  param_1[0xa1] = &PTR_FUN_1014a7108;
  param_1[0xb8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbb);
  FUN_10064e2bc(param_1 + 0xa1);
  FUN_10064e2bc(param_1 + 0x8a);
  param_1[0x6c] = &PTR_FUN_1014a7108;
  param_1[0x83] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x86);
  FUN_10064e2bc(param_1 + 0x6c);
  thunk_FUN_10064e2bc(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  FUN_10064e2bc(param_1 + 0x1c);
  thunk_FUN_10064e2bc(param_1);
  return;
}




void FUN_10029986c(undefined8 param_1)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = FUN_10029a414;
  local_20 = param_1;
  FUN_100643a8c(&local_20);
  return;
}




void thunk_FUN_100299544(void)

{
  FUN_100299544();
  return;
}




void FUN_10029989c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100299544();
  operator_delete(pvVar1);
  return;
}




void FUN_1002998b0(undefined1 param_1 [16],float param_2,long *param_3)

{
  undefined4 uVar1;
  undefined2 local_28 [2];
  int local_24;
  
  uVar1 = (**(code **)(*param_3 + 0x48))();
  FUN_10064e47c(uVar1,param_2 * 0.6,param_3 + 0x55);
  FUN_10064e72c(0,param_3 + 0x55,2,param_3,2);
  FUN_10016aeec(0,0,0,&local_24);
  FUN_10064e4dc(param_3 + 0x1b3,(ulong)(local_24 + 0xfa) << 0x20);
  local_28[0] = 3;
  FUN_10064e5b8(param_3 + 0x1b3,local_28);
  return;
}




undefined4 FUN_100299950(void)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  
  FUN_10064142c(&local_14,local_18);
  return local_14;
}




void FUN_10029997c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100299988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  return;
}




void FUN_10029998c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100299998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x40))();
  return;
}




void FUN_10029999c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002999a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x48))();
  return;
}




void FUN_1002999ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002999b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x50))();
  return;
}




void FUN_1002999bc(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  FUN_10064e47c(param_1 + 0x1c);
  FUN_10064ecdc(uVar1,param_1 + 0x6c);
  FUN_10064e5ec(0,0,param_1 + 0x6c,4,param_1 + 0x1c,4);
  FUN_10064e6d8(0,0,param_1,0);
  return;
}




void FUN_100299a40(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined4 local_38;
  
  lVar1 = param_1 + 0x6ed8;
  uVar2 = FUN_100642da8(lVar1);
  FUN_100642bd8(lVar1,param_2,1);
  FUN_10064e4dc(param_2,0xbe00000000);
  local_60 = (code *)CONCAT62(local_60._2_6_,0x55);
  FUN_10064e5b8(param_2,&local_60);
  plVar3 = (long *)FUN_10064e5a0(lVar1);
  (**(code **)(*plVar3 + 0x68))(plVar3,param_2,0,2);
  plVar3 = (long *)FUN_10064e5a0(lVar1);
  (**(code **)(*plVar3 + 0x70))(plVar3,0xf);
  local_40 = uVar2 & 0xffffffff;
  local_38 = DAT_101d91884;
  local_60 = FUN_100299b20;
  local_50 = 0;
  uStack_48 = 0;
  lStack_58 = param_1;
  FUN_10001554c(param_2 + 8,&local_60);
  return;
}




void FUN_100299b20(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000100299b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))(*(long **)(param_1 + 0xd8),in_x4);
  return;
}




void FUN_100299b34(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined2 local_28 [4];
  
  param_1 = param_1 + 0x6f90;
  FUN_100642bd8(param_1,param_2,1);
  FUN_10064e4dc(param_2,0xbe00000000);
  local_28[0] = 0x55;
  FUN_10064e5b8(param_2,local_28);
  plVar1 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2,0,2);
  plVar1 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar1 + 0x70))(plVar1,0xf);
  return;
}




void FUN_100299bc4(long param_1)

{
  FUN_100642da8(param_1 + 0x6ed8);
  return;
}




void FUN_100299bd0(long *param_1,undefined8 param_2,int param_3,int param_4)

{
  long *plVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,auStack_38);
  if (param_4 != 0) {
    (**(code **)(param_1[0x1e8] + 0x78))(param_1 + 0x1e8,param_2,1);
    plVar1 = (long *)FUN_10064e5a0(param_1 + 0x1e8);
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
  }
  if (param_3 != 0) {
    FUN_10016aeec(&uStack_3c,0,&local_40,&local_44);
    FUN_10028fed4(param_2,uStack_3c,0,local_40,local_44);
    FUN_100642bd8(param_1 + 0x55,param_2,1);
    plVar1 = (long *)FUN_10064e5a0(param_1 + 0x55);
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_100299cb4(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_10064e5ec(0,0,param_2,8,param_1,8);
  return;
}




void FUN_100299cfc(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 26000);
  while (plVar4 != (long *)(param_1 + 0x6598)) {
    if (plVar4[5] != 0) {
      FUN_1001d19d4();
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




void FUN_100299d84(long param_1)

{
  *(uint *)(param_1 + 0x32c) = *(uint *)(param_1 + 0x32c) & 0xfffffffb;
  FUN_1001d5f88(param_1 + 0xd98,1);
  return;
}




void FUN_100299d9c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    FUN_1001d283c(param_1 + 0x65a8);
    lVar1 = 0x6a40;
  }
  else {
    FUN_1001d283c(param_1 + 0x6a40);
    lVar1 = 0x65a8;
  }
  FUN_1001d283c(param_1 + lVar1,0xffffffff);
  return;
}




void FUN_100299de8(long param_1,ulong param_2,undefined8 param_3)

{
  if (((param_2 & 1) == 0) && ((int)param_3 == 0)) {
    FUN_1001d0c70();
    FUN_1001d0c70(param_1 + 0xa40);
    return;
  }
  FUN_1001d0de0(param_1 + 0x450);
  FUN_1001d0de0(param_1 + 0xa40,param_3);
  return;
}




void FUN_100299e34(long param_1)

{
  FUN_1001d482c(param_1 + 0x44d8);
  return;
}




void FUN_100299e40(undefined8 param_1)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = FUN_10029a414;
  local_20 = param_1;
  FUN_100643618(0x40000000,&local_20,0,1);
  return;
}




void FUN_100299e78(long param_1,undefined8 *param_2)

{
  undefined1 **ppuVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 *local_a0 [2];
  char local_89;
  uint local_84;
  code *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  
  uVar5 = FUN_100345b94();
  uVar2 = FUN_1003b1948(uVar5,*param_2);
  local_84 = uVar2;
  FUN_1000ea5b4(local_a0);
  uVar5 = FUN_1004e0150(param_2[3],0);
  uVar6 = FUN_10034c47c(param_2);
  lVar7 = FUN_1003467f8();
  if (lVar7 != 0) {
    FUN_1003467f8();
    iVar3 = FUN_10034ce80();
    if (iVar3 != 0) {
      FUN_1003467f8();
      iVar3 = FUN_10034ce40();
      if (iVar3 != 0) {
        uVar4 = FUN_1001311d4();
        uVar4 = uVar4 ^ 1;
        goto LAB_100299f08;
      }
    }
  }
  uVar4 = 0;
LAB_100299f08:
  uVar10 = *param_2;
  ppuVar1 = (undefined1 **)local_a0[0];
  if (-1 < local_89) {
    ppuVar1 = local_a0;
  }
  lVar7 = FUN_1003467f8();
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    FUN_1003467f8();
    uVar8 = FUN_10034cf60();
  }
  lVar7 = FUN_1001d4864(param_1 + 0x44d8,uVar10,ppuVar1,uVar5,uVar6,uVar8,uVar4);
  local_60 = (ulong)uVar2;
  local_58 = DAT_101d91884;
  local_80 = FUN_100299fd0;
  local_70 = 0;
  uStack_68 = 0;
  lStack_78 = param_1;
  FUN_10001554c(lVar7 + 8,&local_80);
  plVar9 = (long *)FUN_100299fe4(param_1 + 26000,&local_84);
  *plVar9 = lVar7;
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  return;
}




void FUN_100299fd0(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000100299fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))(*(undefined8 **)(param_1 + 0xd8),in_x4);
  return;
}




undefined8 * FUN_100299fe4(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar1;
  puVar2 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_10029a05c:
    uVar4 = *param_2;
  }
  else {
    uVar4 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar2 = puVar3, *(uint *)(puVar2 + 4) <= uVar4) {
        if (uVar4 <= *(uint *)(puVar2 + 4)) {
          if (puVar2 != (undefined8 *)0x0) goto LAB_10029a088;
          goto LAB_10029a05c;
        }
        puVar1 = puVar2 + 1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_10029a060;
      }
      puVar1 = puVar2;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_10029a060:
  puVar3 = operator_new(0x30);
  *(uint *)(puVar3 + 4) = uVar4;
  puVar3[5] = 0;
  FUN_10029a3c0(param_1,puVar2,puVar1,puVar3);
  puVar2 = puVar3;
LAB_10029a088:
  return puVar2 + 5;
}




void FUN_10029a0a0(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 local_24;
  
  local_24 = param_2;
  plVar1 = (long *)FUN_100299fe4(param_1 + 26000,&local_24);
  if (*plVar1 != 0) {
    FUN_1001d1cec(*plVar1,param_3);
  }
  return;
}




undefined8 FUN_10029a0e8(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_14;
  
  local_14 = param_2;
  puVar1 = (undefined8 *)FUN_100299fe4(param_1 + 26000,&local_14);
  return *puVar1;
}




void FUN_10029a118(undefined8 param_1,undefined8 param_2)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  
  FUN_100642324(param_2);
  uVar3 = FUN_100640840(0,0x3e4ccccd,0);
  FUN_100642b14(param_2,uVar3);
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
  if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar4 = 0xffff;
  }
  else {
    uVar4 = *puVar1;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
  *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
  FUN_10063ee9c(puVar1);
  *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
  *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  FUN_100642b14(param_2,puVar1);
  return;
}




void FUN_10029a1dc(undefined8 param_1,undefined8 param_2)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  
  FUN_100642324(param_2);
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
  if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar4 = 0xffff;
  }
  else {
    uVar4 = *puVar1;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
  *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
  FUN_10063ee9c(puVar1);
  *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
  *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  FUN_100642b14(param_2,puVar1);
  uVar3 = FUN_100640840(0x3f800000,0x3e4ccccd,0);
  FUN_100642b14(param_2,uVar3);
  return;
}




void FUN_10029a2a0(long param_1)

{
  FUN_1001d46fc(param_1 + 0x44d8);
  return;
}




void FUN_10029a2ac(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  uint local_28;
  uint local_24;
  
  local_24 = (uint)*(ushort *)(param_4 + 9);
  if ((local_24 != 0xffff) && (*(char *)(param_4 + 3) != '\0')) {
    if (param_3 == 0) {
      puVar1 = (undefined8 *)FUN_100299fe4(param_1 + 26000,&local_24);
      FUN_1001d1c1c(*puVar1,param_2);
    }
    else {
      local_28 = (uint)*(ushort *)(param_4 + 9);
      puVar1 = (undefined8 *)FUN_100299fe4(param_1 + 26000,&local_28);
      FUN_1001d1c0c(*puVar1);
    }
  }
  return;
}




void FUN_10029a334(long param_1,undefined8 param_2,int param_3,undefined8 param_4,uint param_5)

{
  if (param_3 != 0) {
    FUN_1001d3c58(param_1 + 0xff8,param_2,param_4);
    return;
  }
  if ((param_5 & 1) != 0) {
    FUN_1001d3d2c();
    return;
  }
  FUN_1001d3bdc(param_1 + 0xff8);
  return;
}




void FUN_10029a350(long param_1)

{
  FUN_1001d30cc(param_1 + 0x5cb0);
  return;
}




void FUN_10029a35c(long param_1)

{
  FUN_1001d3028(param_1 + 0x5cb0);
  return;
}




void FUN_10029a368(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  lVar1 = 0x6a40;
  if (param_4 == 0) {
    lVar1 = 0x65a8;
  }
  FUN_1001d27b4(param_1 + lVar1);
  return;
}




void FUN_10029a380(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10029a380(param_1,*param_2);
    FUN_10029a380(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_10029a3c0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_10029a414(long param_1)

{
  FUN_1001d482c(param_1 + 0x44d8);
  return;
}




long * FUN_10029a420(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_10029b498();
  puVar3[0xc9] = 0;
  *puVar3 = &PTR_thunk_FUN_10029a580_101480798;
  puVar3 = puVar3 + 0xca;
  thunk_FUN_100652c08(puVar3);
  thunk_FUN_100650e64(param_1 + 0xe8);
  plVar1 = param_1 + 0x10e;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x134;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_100655644(param_1 + 0x15a);
  param_1[0x186] = 0;
  param_1[0x185] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x15a,1);
  uVar4 = FUN_1004e0150("ESPORTS_BADGE_MARKET_TILE_TITLE",0);
  FUN_1006513c0(plVar1,uVar4);
  uVar4 = FUN_1004e0150("ESPORTS_BADGE_MARKET_TILE_DESC",0);
  FUN_1006513c0(plVar2,uVar4);
  FUN_100652ca4(puVar3,PTR_s_build___FranchiseLogos_tga_101854a30);
  *(uint *)((long)param_1 + 0x6d4) = *(uint *)((long)param_1 + 0x6d4) & 0xfffffffb;
  return param_1;
}




long * thunk_FUN_10029a420(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_10029b498();
  puVar3[0xc9] = 0;
  *puVar3 = &PTR_thunk_FUN_10029a580_101480798;
  puVar3 = puVar3 + 0xca;
  thunk_FUN_100652c08(puVar3);
  thunk_FUN_100650e64(param_1 + 0xe8);
  plVar1 = param_1 + 0x10e;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x134;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_100655644(param_1 + 0x15a);
  param_1[0x186] = 0;
  param_1[0x185] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x15a,1);
  uVar4 = FUN_1004e0150("ESPORTS_BADGE_MARKET_TILE_TITLE",0);
  FUN_1006513c0(plVar1,uVar4);
  uVar4 = FUN_1004e0150("ESPORTS_BADGE_MARKET_TILE_DESC",0);
  FUN_1006513c0(plVar2,uVar4);
  FUN_100652ca4(puVar3,PTR_s_build___FranchiseLogos_tga_101854a30);
  *(uint *)((long)param_1 + 0x6d4) = *(uint *)((long)param_1 + 0x6d4) & 0xfffffffb;
  return param_1;
}




void FUN_10029a580(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  
  *param_1 = &PTR_thunk_FUN_10029a580_101480798;
  plVar1 = (long *)param_1[0x186];
  uVar3 = *(uint *)(param_1 + 0x185);
  plVar4 = plVar1;
  if (uVar3 != 0) {
    do {
      plVar2 = (long *)*plVar4;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar3 = *(uint *)(param_1 + 0x185);
        plVar1 = (long *)param_1[0x186];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar3);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x185) = 0;
    operator_delete__(plVar1);
    param_1[0x185] = 0;
    param_1[0x186] = 0;
  }
  param_1[0x15a] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x171);
  FUN_10064e2bc(param_1 + 0x15a);
  thunk_FUN_100651068(param_1 + 0x134);
  thunk_FUN_100651068(param_1 + 0x10e);
  thunk_FUN_100651068(param_1 + 0xe8);
  param_1[0xca] = &PTR_FUN_1014a7108;
  param_1[0xe1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe4);
  FUN_10064e2bc(param_1 + 0xca);
  FUN_100296d58(param_1);
  return;
}




void thunk_FUN_10029a580(void)

{
  FUN_10029a580();
  return;
}




void FUN_10029a66c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10029a580();
  operator_delete(pvVar1);
  return;
}




void FUN_10029a680(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 local_68;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  pvVar1 = operator_new(0x3d0);
  local_68 = FUN_10029adf4();
  FUN_10029a744(local_68,param_2);
  FUN_10001549c(&local_60,param_3);
  FUN_10029a7e0(pvVar1,&local_60);
  if (local_50._7_1_ < '\0') {
    operator_delete(local_60);
  }
  local_38 = DAT_101d23568;
  local_60 = FUN_10029a864;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c((long)pvVar1 + 8,&local_60);
  FUN_10029a874(param_1 + 0xc28,&local_68);
  FUN_100655930(param_1 + 0xad0,local_68,1);
  return;
}




void FUN_10029a744(long param_1)

{
  void *local_68 [2];
  char local_51;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10001549c(local_68);
  std::string::operator=((string *)(param_1 + 0x380),(string *)local_68);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_1004d26c0(local_68,0x40,"logo_%s");
  FUN_100652cdc(param_1 + 0x158,local_68);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10029a7e0(long *param_1,string *param_2)

{
  void *pvVar1;
  long lVar2;
  
  std::string::operator=((string *)(param_1 + 0x73),param_2);
  if (param_1[0x6f] == 0) {
    pvVar1 = operator_new(0x24e8);
    lVar2 = thunk_FUN_1001b6ee4(0x3f800000,pvVar1,param_2,&DAT_101d91198,1);
    param_1[0x6f] = lVar2;
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010029a860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_10029a864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010029a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x648))();
  return;
}




void FUN_10029a874(uint *param_1,undefined8 *param_2)

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
    FUN_10029b09c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10029a8f4(long param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  long *plVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0xc28) != 0) {
    plVar4 = *(long **)(param_1 + 0xc30);
    do {
      lVar5 = *plVar4;
      sVar3 = _strlen(param_2);
      sVar1 = *(size_t *)(lVar5 + 0x388);
      if (-1 < (char)*(byte *)(lVar5 + 0x397)) {
        sVar1 = (ulong)*(byte *)(lVar5 + 0x397);
      }
      if ((sVar3 == sVar1) &&
         (iVar2 = std::string::compare(lVar5 + 0x380,0,(char *)0xffffffffffffffff,(ulong)param_2),
         iVar2 == 0)) {
        FUN_10029a99c(*plVar4,param_3);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != (long *)(*(long *)(param_1 + 0xc30) + (ulong)*(uint *)(param_1 + 0xc28) * 8))
    ;
  }
  return;
}




void FUN_10029a99c(long param_1,undefined4 param_2)

{
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d26c0(auStack_40,8,"x%i");
  FUN_1004e3120(auStack_50,auStack_40);
  FUN_1006513c0(param_1 + 0x248,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  *(undefined4 *)(param_1 + 0x3c8) = param_2;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10029aa3c(long param_1)

{
  undefined1 auStack_68 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d26c0(auStack_68,0x40,"logo_%s");
  FUN_100652cdc(param_1 + 0x650,auStack_68);
  *(uint *)(param_1 + 0x6d4) = *(uint *)(param_1 + 0x6d4) | 4;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10029aabc(long param_1)

{
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d26c0(auStack_30,8,"x%i");
  FUN_1004e3120(auStack_40,auStack_30);
  FUN_1006513c0(param_1 + 0x740,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10029ab4c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  
  fVar9 = (float)FUN_10029bd88();
  FUN_10064e47c(fVar9 * 0.105,fVar9 * 0.105);
  lVar1 = param_3 + 0x870;
  FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651708(fVar9 * 0.7,lVar1,1);
  FUN_10065165c(lVar1,1);
  lVar2 = param_3 + 0x9a0;
  FUN_100651708(fVar9 * 0.7,lVar2,1);
  FUN_100651038(lVar2,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  lVar3 = param_3 + 0x740;
  FUN_100651038(lVar3,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_10065165c(lVar3,1);
  if (*(int *)(param_3 + 0xc28) != 0) {
    puVar7 = *(undefined8 **)(param_3 + 0xc30);
    uVar4 = 1;
    puVar8 = puVar7;
    do {
      (**(code **)(*(long *)*puVar7 + 0x138))();
      if (puVar7 == *(undefined8 **)(param_3 + 0xc30)) {
LAB_10029aca0:
        uVar4 = uVar4 + 1;
      }
      else {
        uVar5 = *puVar7;
        if (uVar4 < 6) {
          uVar6 = puVar7[-1];
          FUN_10064e72c(0x430e0000,uVar5,3,uVar6,1);
          FUN_10064e72c(0,uVar5,0,uVar6,0);
          goto LAB_10029aca0;
        }
        uVar6 = *puVar8;
        uVar4 = 2;
        FUN_10064e72c(0x42000000,uVar5,0,uVar6,2);
        FUN_10064e72c(0,uVar5,3,uVar6,3);
        puVar8 = puVar7;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (undefined8 *)
                       (*(long *)(param_3 + 0xc30) + (ulong)*(uint *)(param_3 + 0xc28) * 8));
  }
  FUN_1006557ec(param_3 + 0xad0);
  FUN_10064e5ec(fVar9 * 0.131,param_2 * 0.124,param_3 + 0x650,8,param_3,0);
  FUN_10064e5ec(0xc1200000,0x41200000,lVar3,8,param_3 + 0x650,1);
  FUN_10064e68c(0x43480000,param_2 * 0.058,lVar1,4);
  FUN_10064e72c(0x41200000,lVar2,0,lVar1,2);
  FUN_10064e72c(0,lVar2,3,lVar1,3);
  FUN_10064e68c(0,param_2 * -0.042,param_3 + 0xad0,6);
  return;
}




long * FUN_10029adf4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100655644();
  *puVar1 = &PTR_thunk_FUN_10029aea0_1014808b8;
  puVar1 = puVar1 + 0x2b;
  thunk_FUN_100652c08(puVar1);
  thunk_FUN_100650e64(param_1 + 0x49);
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x49,1);
  FUN_100652ca4(puVar1,PTR_s_build___FranchiseLogos_tga_101854a30);
  return param_1;
}




void FUN_10029aea0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10029aea0_1014808b8;
  if ((long *)param_1[0x6f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6f] + 8))();
    param_1[0x6f] = 0;
  }
  if (*(char *)((long)param_1 + 0x3c7) < '\0') {
    operator_delete((void *)param_1[0x76]);
  }
  if (*(char *)((long)param_1 + 0x3af) < '\0') {
    operator_delete((void *)param_1[0x73]);
  }
  if (*(char *)((long)param_1 + 0x397) < '\0') {
    operator_delete((void *)param_1[0x70]);
  }
  thunk_FUN_100651068(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_1014a7108;
  param_1[0x42] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x45);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10029aea0(void)

{
  FUN_10029aea0();
  return;
}




void FUN_10029af64(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10029aea0();
  operator_delete(pvVar1);
  return;
}




void FUN_10029af78(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x158;
  FUN_10064e47c(0x431e0000,0x431e0000,lVar1);
  lVar2 = param_1 + 0x248;
  *(uint *)(param_1 + 0x2cc) =
       *(uint *)(param_1 + 0x2cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2cc) & 3 | (uint)(*(int *)(param_1 + 0x3c8) != 0) << 2;
  FUN_100651038(lVar2,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220);
  FUN_10065165c(lVar2,1);
  *(uint *)(param_1 + 0x2cc) = *(uint *)(param_1 + 0x2cc) & 0xffffffbf;
  FUN_10064e5ec(0xc0800000,0x40800000,lVar2,8,lVar1,1);
  lVar2 = *(long *)(param_1 + 0x378);
  if (lVar2 != 0) {
    if ((*(float *)(lVar2 + 0x48) != 0.88) || (*(float *)(lVar2 + 0x4c) != 0.88)) {
      *(undefined8 *)(lVar2 + 0x48) = 0x3f6147ae3f6147ae;
      FUN_1000200a0(lVar2);
      lVar2 = *(long *)(param_1 + 0x378);
    }
    FUN_10064e72c(0x41000000,lVar2,0,lVar1,2);
    FUN_10064e72c(0,lVar2,4,lVar1,4);
  }
  FUN_100655990(param_1,0);
  FUN_1006557ec(param_1);
  return;
}




void FUN_10029b09c(uint *param_1,uint param_2)

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




void FUN_10029b118(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_thunk_FUN_10064e2bc_101480a08;
  return;
}




void FUN_10029b140(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_10029b154(float *param_1,long *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float fStack_44;
  
  uVar2 = FUN_1004e0150("MENU_MARKET_FEATURED_RECOMMENDED",0);
  FUN_1000153b4(param_1 + 4,uVar2);
  FUN_100641464(&local_48,(ulong)&local_48 | 4);
  fVar6 = local_48 + -328.0;
  fVar3 = (float)FUN_1001ad614();
  fVar7 = (fStack_44 + -328.0) - local_48;
  fVar4 = (float)(**(code **)(*param_2 + 0x48))(param_2);
  uVar5 = NEON_fminnm((fVar6 - fVar3) / fVar4,fVar7 / local_48);
  fVar3 = (float)NEON_fminnm(uVar5,0x3fc00000);
  fVar4 = *(float *)(param_2 + 9);
  bVar1 = false;
  if ((fVar4 == fVar3) && (bVar1 = false, !NAN(*(float *)((long)param_2 + 0x4c)) && !NAN(fVar3))) {
    bVar1 = *(float *)((long)param_2 + 0x4c) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_2 + 9) = fVar3;
    *(float *)((long)param_2 + 0x4c) = fVar3;
    FUN_1000200a0(param_2);
  }
  fVar6 = (float)(**(code **)(*param_2 + 0x50))(param_2);
  fVar3 = fVar4;
  fVar7 = (float)FUN_1001ad614();
  *param_1 = fVar6 + fVar7 + 28.0;
  param_1[1] = fVar4 + fVar3 + 28.0;
  param_1[0x19] = 0.0;
  FUN_1001ad494(param_1,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101158840);
  param_1[0x17] = -NAN;
  param_1[0x18] = -NAN;
  return;
}




void FUN_10029b280(long *param_1,long *param_2)

{
  param_1[0x18] = (long)param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010029b2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(0,param_2,1,4,1);
  return;
}




void FUN_10029b2cc(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x150))();
    lVar2 = *(long *)(param_1 + 0xc0);
    bVar1 = false;
    if ((*(float *)(lVar2 + 0x40) == 7.0) && (bVar1 = false, !NAN(*(float *)(lVar2 + 0x44)))) {
      bVar1 = *(float *)(lVar2 + 0x44) == 7.0;
    }
    if (!bVar1) {
      uVar3 = NEON_fmov(0x40e00000,4);
      *(undefined8 *)(lVar2 + 0x40) = uVar3;
      FUN_1000200a0();
      return;
    }
  }
  return;
}




ulong FUN_10029b328(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  if (*(long **)(param_3 + 0xc0) == (long *)0x0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    fVar3 = (float)(**(code **)(**(long **)(param_3 + 0xc0) + 0x48))();
    uVar1 = (ulong)(uint)(int)fVar3;
    uVar2 = (ulong)(uint)(int)param_2 << 0x20;
  }
  return uVar1 | uVar2;
}




void FUN_10029b368(float param_1,float param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (((((long *)param_3[0x18] != (long *)0x0) &&
       (fVar4 = param_2, fVar3 = (float)(**(code **)(*(long *)param_3[0x18] + 0x48))(), 0.0 <= fVar3
       )) && (0.0 <= fVar4)) &&
     (fVar4 = (float)NEON_fminnm(param_1 / fVar3,param_2 / fVar4), fVar4 < 1.0)) {
    lVar2 = param_3[0x18];
    bVar1 = false;
    if ((*(float *)(lVar2 + 0x48) == fVar4) &&
       (bVar1 = false, !NAN(*(float *)(lVar2 + 0x4c)) && !NAN(fVar4))) {
      bVar1 = *(float *)(lVar2 + 0x4c) == fVar4;
    }
    if (!bVar1) {
      *(float *)(lVar2 + 0x48) = fVar4;
      *(float *)(lVar2 + 0x4c) = fVar4;
      FUN_1000200a0();
                    /* WARNING: Could not recover jumptable at 0x00010029b3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0xe8))(param_3);
      return;
    }
  }
  return;
}




void FUN_10029b408(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_thunk_FUN_10064e2bc_101480b50;
  return;
}




void FUN_10029b42c(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_10029bc90();
                    /* WARNING: Could not recover jumptable at 0x00010029b45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x90))();
    return;
  }
  return;
}




void FUN_10029b46c(long *param_1,long param_2)

{
  param_1[0x18] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010029b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  return;
}




void FUN_10029b484(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




long * FUN_10029b498(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_thunk_FUN_100296d58_101480c98;
  puVar2 = puVar2 + 0x11;
  thunk_FUN_100652c08(puVar2);
  FUN_1001a66f4(param_1 + 0x2f);
  param_1[0x2f] = (long)&PTR_FUN_101480db8;
  param_1[0x40] = (long)&PTR_FUN_101480ed0;
  thunk_FUN_100652c08(param_1 + 0x4f);
  uVar3 = FUN_1004e0150("NEW_BUBBLE_ALERT",0);
  thunk_FUN_1001c5448(param_1 + 0x6d,uVar3);
  param_1[0xc2] = DAT_101dc1cb8;
  param_1[0xc3] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  *(undefined8 *)((long)param_1 + 0x63c) = 0;
  *(undefined8 *)((long)param_1 + 0x634) = 0;
  *(undefined1 *)((long)param_1 + 0x644) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6d,1);
  *(uint *)((long)param_1 + 0x3ec) = *(uint *)((long)param_1 + 0x3ec) & 0xfffffffb;
  FUN_100652ca4(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cdc(puVar2,"dialog_background");
  uVar1 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar1 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x10c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5280;
    FUN_1000200a0(puVar2);
  }
  *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) & 0xfffffffb;
  local_48 = FUN_100644a94("UI::EVENT_FEED_IMAGE_LOADED");
  local_70 = FUN_10029b654;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x30,&local_70);
  return param_1;
}




void FUN_10029b654(long param_1)

{
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  return;
}




void FUN_10029b664(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,ulong param_8,
                  string *param_9,undefined8 *param_10,char param_11)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  undefined4 local_68;
  float fStack_64;
  
  FUN_10029ba40();
  uVar6 = 4;
  if (param_11 == '\0') {
    uVar6 = 0;
  }
  *(uint *)((long)param_3 + 0x3ec) = *(uint *)((long)param_3 + 0x3ec) & 0xfffffffb | uVar6;
  *(undefined4 *)((long)param_3 + 0x63c) = param_6;
  *(undefined4 *)(param_3 + 200) = param_7;
  bVar8 = *(byte *)(param_8 + 0x17);
  uVar5 = (ulong)bVar8;
  uVar7 = *(ulong *)(param_8 + 8);
  uVar1 = uVar7;
  if (-1 < (char)bVar8) {
    uVar1 = uVar5;
  }
  if (uVar1 == 4) {
    iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e695a);
    if (iVar3 != 0) {
      bVar8 = *(byte *)(param_8 + 0x17);
      uVar5 = (ulong)bVar8;
      uVar7 = *(ulong *)(param_8 + 8);
      goto LAB_10029b710;
    }
    uVar4 = 0;
  }
  else {
LAB_10029b710:
    uVar1 = uVar7;
    if (-1 < (char)bVar8) {
      uVar1 = uVar5;
    }
    if (uVar1 == 7) {
      iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e695f);
      if (iVar3 == 0) {
        uVar4 = 1;
        goto LAB_10029b8f0;
      }
      bVar8 = *(byte *)(param_8 + 0x17);
      uVar5 = (ulong)bVar8;
      uVar7 = *(ulong *)(param_8 + 8);
    }
    uVar1 = uVar7;
    if (-1 < (char)bVar8) {
      uVar1 = uVar5;
    }
    if (uVar1 == 6) {
      iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e6967);
      if (iVar3 != 0) {
        bVar8 = *(byte *)(param_8 + 0x17);
        uVar5 = (ulong)bVar8;
        uVar7 = *(ulong *)(param_8 + 8);
        goto LAB_10029b790;
      }
    }
    else {
LAB_10029b790:
      uVar1 = uVar7;
      if (-1 < (char)bVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 0xc) {
        iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e56ef);
        if (iVar3 == 0) {
          uVar4 = 3;
          goto LAB_10029b8f0;
        }
        bVar8 = *(byte *)(param_8 + 0x17);
        uVar5 = (ulong)bVar8;
        uVar7 = *(ulong *)(param_8 + 8);
      }
      uVar1 = uVar7;
      if (-1 < (char)bVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 0x11) {
        iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e826d);
        if (iVar3 == 0) {
          uVar4 = 4;
          goto LAB_10029b8f0;
        }
        bVar8 = *(byte *)(param_8 + 0x17);
        uVar5 = (ulong)bVar8;
        uVar7 = *(ulong *)(param_8 + 8);
      }
      uVar1 = uVar7;
      if (-1 < (char)bVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 0x15) {
        iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e827f);
        if (iVar3 == 0) {
          uVar4 = 5;
          goto LAB_10029b8f0;
        }
        bVar8 = *(byte *)(param_8 + 0x17);
        uVar5 = (ulong)bVar8;
        uVar7 = *(ulong *)(param_8 + 8);
      }
      uVar1 = uVar7;
      if (-1 < (char)bVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 3) {
        iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013ec08e);
        if (iVar3 == 0) goto LAB_10029b8c4;
        bVar8 = *(byte *)(param_8 + 0x17);
        uVar5 = (ulong)bVar8;
        uVar7 = *(ulong *)(param_8 + 8);
      }
      if (-1 < (char)bVar8) {
        uVar7 = uVar5;
      }
      if ((uVar7 != 0xd) ||
         (iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013ec092), iVar3 != 0
         )) goto LAB_10029b8f4;
    }
LAB_10029b8c4:
    uVar4 = 2;
  }
LAB_10029b8f0:
  *(undefined4 *)(param_3 + 0xc6) = uVar4;
LAB_10029b8f4:
  local_68 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_64 = param_2;
  FUN_10064e48c(param_3 + 0x11,&local_68);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_1001a6880(param_3 + 0x2f);
  uVar1 = *(ulong *)(param_9 + 8);
  if (-1 < (char)param_9[0x17]) {
    uVar1 = (ulong)(byte)param_9[0x17];
  }
  if (uVar1 == 0) {
    *(uint *)((long)param_3 + 0x10c) = *(uint *)((long)param_3 + 0x10c) & 0xfffffffb;
  }
  else {
    std::string::operator=((string *)(param_3 + 0xc3),param_9);
    uVar1 = param_10[1];
    if (-1 < (char)*(byte *)((long)param_10 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_10 + 0x17);
    }
    if (uVar1 == 0) {
      param_10 = &DAT_101d91198;
    }
    FUN_10029bad0(param_3,uVar1 != 0,param_10);
  }
  fVar9 = (float)FUN_1006425d0(param_3 + 0x6d,0,0,1,1);
  fVar10 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar10 = fVar10 - fVar9 * 0.5;
  param_2 = param_2 * 0.5;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x75) == fVar10) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x3ac)) && !NAN(param_2))) {
    bVar2 = *(float *)((long)param_3 + 0x3ac) == param_2;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x75) = fVar10;
    *(float *)((long)param_3 + 0x3ac) = param_2;
    FUN_1000200a0(param_3 + 0x6d);
  }
  FUN_10029bbe0(param_3);
  (**(code **)(*param_3 + 0xe8))(param_3);
  return;
}




void FUN_10029ba40(long param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  *(uint *)(param_1 + 0x634) = param_2;
  *(undefined4 *)(param_1 + 0x638) = param_3;
  iVar2 = FUN_100126b4c();
  fVar3 = 310.0;
  if (iVar2 == 0) {
    fVar3 = 302.0;
  }
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x638));
  fVar4 = fVar4 * 151.0;
  bVar1 = false;
  if ((*(float *)(param_1 + 0x40) == fVar3 * (float)param_2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x44)) && !NAN(fVar4))) {
    bVar1 = *(float *)(param_1 + 0x44) == fVar4;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x40) = fVar3 * (float)param_2;
    *(float *)(param_1 + 0x44) = fVar4;
    FUN_1000200a0(param_1);
    return;
  }
  return;
}




void FUN_10029bad0(undefined1 param_1 [16],undefined4 param_2,long *param_3,uint param_4,
                  long *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (*(byte *)((long)param_3 + 0x644) != param_4) {
    *(char *)((long)param_3 + 0x644) = (char)param_4;
    plVar1 = param_3 + 0x4f;
    if (param_3[0x69] != 0) {
      FUN_100652d8c(plVar1);
      param_4 = (uint)*(byte *)((long)param_3 + 0x644);
    }
    if (param_4 == 0) {
      *(uint *)((long)param_3 + 0x2fc) = *(uint *)((long)param_3 + 0x2fc) & 0xfffffffb;
    }
    else {
      FUN_100642324(plVar1);
      uVar4 = *(uint *)((long)param_3 + 0x2fc);
      if ((uVar4 & 0x7f80) != 0) {
        *(uint *)((long)param_3 + 0x2fc) = uVar4 & 0xffff807f;
        FUN_1000200a0(plVar1);
        uVar4 = *(uint *)((long)param_3 + 0x2fc);
      }
      *(uint *)((long)param_3 + 0x2fc) = uVar4 | 4;
      plVar3 = param_3 + 0xc3;
      if (*(char *)((long)param_3 + 0x62f) < '\0') {
        plVar3 = (long *)*plVar3;
      }
      FUN_100652ca4(plVar1,plVar3);
      plVar3 = (long *)*param_5;
      if (-1 < *(char *)((long)param_5 + 0x17)) {
        plVar3 = param_5;
      }
      FUN_100652cdc(plVar1,plVar3);
      local_38 = (**(code **)(*param_3 + 0x48))(param_3);
      uStack_34 = param_2;
      FUN_10064e48c(plVar1,&local_38);
      uVar2 = FUN_100640840(0x3f800000,0x400ccccd,FUN_10017e164);
      FUN_100642b14(plVar1,uVar2);
    }
  }
  return;
}




void FUN_10029bbe0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  FUN_100642324(param_1);
  uVar1 = FUN_10004767c();
  uVar2 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e800000,uVar2);
  FUN_100642b7c(param_1,uVar1);
  return;
}




undefined4 FUN_10029bc64(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100126b4c();
  uVar2 = 0x439b0000;
  if (iVar1 == 0) {
    uVar2 = 0x43970000;
  }
  return uVar2;
}




void FUN_10029bc90(undefined4 param_1,float param_2,long *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined4 local_38;
  float fStack_34;
  
  *(undefined4 *)(param_3 + 0xc2) = param_1;
  *(float *)((long)param_3 + 0x614) = param_2;
  local_38 = (**(code **)(*param_3 + 0x48))();
  fStack_34 = param_2;
  FUN_10064e48c(param_3 + 0x11,&local_38);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_1001a6880(param_3 + 0x2f);
  local_38 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_34 = param_2;
  FUN_10064e48c(param_3 + 0x4f,&local_38);
  fVar2 = (float)FUN_1006425d0(param_3 + 0x6d,0,0,1,1);
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar3 = fVar3 - fVar2 * 0.5;
  param_2 = param_2 * 0.5;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x75) == fVar3) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x3ac)) && !NAN(param_2))) {
    bVar1 = *(float *)((long)param_3 + 0x3ac) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x75) = fVar3;
    *(float *)((long)param_3 + 0x3ac) = param_2;
    FUN_1000200a0(param_3 + 0x6d);
  }
  return;
}




float FUN_10029bd88(long param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0x610);
  bVar1 = false;
  if ((fVar3 == (float)DAT_101dc1cb8) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x614)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar1 = *(float *)(param_1 + 0x614) == DAT_101dc1cb8._4_4_;
  }
  if (bVar1) {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x63c));
    iVar2 = FUN_100126b4c();
    fVar3 = 310.0;
    if (iVar2 == 0) {
      fVar3 = 302.0;
    }
    fVar3 = fVar3 * fVar4;
    NEON_ucvtf(*(undefined4 *)(param_1 + 0x640));
  }
  return fVar3;
}




void FUN_10029be0c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  uVar1 = FUN_100530d94(uVar2);
  if ((((uVar1 & 1) == 0) && (uVar1 = FUN_100530dd4(uVar2), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_100530da0(uVar2), (uVar1 & 1) == 0)) {
    FUN_100530200(auStack_60,DAT_101d91884,0xffffffff,param_1);
    FUN_100644c34(param_1,auStack_60,1);
  }
  FUN_100644b14(param_2);
  return;
}




void thunk_FUN_100296d58(void)

{
  FUN_100296d58();
  return;
}




void FUN_10029bea0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100296d58();
  operator_delete(pvVar1);
  return;
}




void FUN_10029beb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101462f50;
  param_1[0x11] = &PTR_FUN_101463068;
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  FUN_1010b7434(param_1 + 0x14);
  FUN_10064221c(param_1);
  return;
}




void FUN_10029bf04(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101462f50;
  param_1[0x11] = &PTR_FUN_101463068;
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  FUN_1010b7434(param_1 + 0x14);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10029bf58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101463068;
  param_1[-0x11] = &PTR_FUN_101462f50;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  FUN_1010b7434(param_1 + 3);
  FUN_10064221c(param_1 + -0x11);
  return;
}




void FUN_10029bfa8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101463068;
  param_1[-0x11] = &PTR_FUN_101462f50;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  FUN_1010b7434(param_1 + 3);
  pvVar1 = (void *)FUN_10064221c(param_1 + -0x11);
  operator_delete(pvVar1);
  return;
}




long * FUN_10029bffc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *local_98 [2];
  char local_81;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  *puVar8 = &PTR_thunk_FUN_10029c398_101480f18;
  puVar8[0x17] = 0;
  puVar8[0x18] = &PTR_FUN_101481068;
  puVar8 = puVar8 + 0x19;
  FUN_10064e264(puVar8);
  plVar1 = param_1 + 0x30;
  thunk_FUN_10064f204(plVar1);
  FUN_100333b84(param_1 + 0x59);
  param_1[0x59] = (long)&PTR_thunk_FUN_100333c98_101493ee0;
  param_1[0xc13] = -1;
  plVar2 = param_1 + 0xc14;
  thunk_FUN_10064f204(plVar2);
  plVar3 = param_1 + 0xc3d;
  FUN_10029c748(plVar3);
  plVar4 = param_1 + 0xddd;
  thunk_FUN_10064f204(plVar4);
  plVar5 = param_1 + 0xe06;
  FUN_10029c748(plVar5);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100642bd8(puVar8,plVar1,1);
  FUN_10064f31c(plVar1,param_1 + 0x59,1);
  FUN_100642bd8(puVar8,plVar2,1);
  FUN_10064f31c(plVar2,plVar3,1);
  FUN_100642bd8(puVar8,plVar4,1);
  FUN_10064f31c(plVar4,plVar5,1);
  uVar9 = FUN_10012cf04();
  puVar6 = PTR_s_build___VGX_common_atlas_101854980;
  if ((uVar9 & 1) == 0) {
    FUN_10001549c(&local_80,"earn_ice_tile_alt");
    FUN_10001549c(local_98,"earn_ice_tile_alt");
    FUN_1002ece5c(plVar3,puVar6,&local_80,local_98);
    (**(code **)(*plVar3 + 0xe8))(plVar3);
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_70 < 0) {
      operator_delete(local_80);
    }
    uVar10 = FUN_1004e0150("MENU_NEWS_FEED_TAB_NAME_COMING_SOON",0);
    FUN_1006513c0(param_1 + 0xdb7,uVar10);
    FUN_100530068(plVar3,0);
  }
  else {
    FUN_10001549c(&local_80,"market_tiles");
    FUN_10001549c(local_98,"market_tiles");
    FUN_1002ece5c(plVar3,puVar6,&local_80,local_98);
    (**(code **)(*plVar3 + 0xe8))(plVar3);
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_70 < 0) {
      operator_delete(local_80);
    }
    uVar10 = FUN_1004e0150("FREE_OFFER_POPUP_SECOND_BUTTON",0);
    FUN_1006513c0(param_1 + 0xdb7,uVar10);
  }
  puVar6 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&local_80,"earn_ice_tile");
  FUN_10001549c(local_98,"earn_ice_tile");
  FUN_1002ece5c(plVar5,puVar6,&local_80,local_98);
  (**(code **)(*plVar5 + 0xe8))(plVar5);
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  if (local_70._7_1_ < '\0') {
    operator_delete(local_80);
  }
  uVar10 = FUN_1004e0150("MENU_NEWS_FEED_TAB_NAME_COMING_SOON",0);
  FUN_1006513c0(param_1 + 0xf80,uVar10);
  FUN_100530068(plVar5,0);
  uVar7 = DAT_101d91884;
  local_58 = DAT_101d91884;
  local_80 = FUN_10029c364;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xc3e,&local_80);
  local_58 = uVar7;
  local_80 = FUN_10029c37c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xe07,&local_80);
  return param_1;
}




void FUN_10029c364(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010029c374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_10029c37c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010029c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




long * thunk_FUN_10029bffc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *apvStack_98 [2];
  char cStack_81;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  *puVar8 = &PTR_thunk_FUN_10029c398_101480f18;
  puVar8[0x17] = 0;
  puVar8[0x18] = &PTR_FUN_101481068;
  puVar8 = puVar8 + 0x19;
  FUN_10064e264(puVar8);
  plVar1 = param_1 + 0x30;
  thunk_FUN_10064f204(plVar1);
  FUN_100333b84(param_1 + 0x59);
  param_1[0x59] = (long)&PTR_thunk_FUN_100333c98_101493ee0;
  param_1[0xc13] = -1;
  plVar2 = param_1 + 0xc14;
  thunk_FUN_10064f204(plVar2);
  plVar3 = param_1 + 0xc3d;
  FUN_10029c748(plVar3);
  plVar4 = param_1 + 0xddd;
  thunk_FUN_10064f204(plVar4);
  plVar5 = param_1 + 0xe06;
  FUN_10029c748(plVar5);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100642bd8(puVar8,plVar1,1);
  FUN_10064f31c(plVar1,param_1 + 0x59,1);
  FUN_100642bd8(puVar8,plVar2,1);
  FUN_10064f31c(plVar2,plVar3,1);
  FUN_100642bd8(puVar8,plVar4,1);
  FUN_10064f31c(plVar4,plVar5,1);
  uVar9 = FUN_10012cf04();
  puVar6 = PTR_s_build___VGX_common_atlas_101854980;
  if ((uVar9 & 1) == 0) {
    FUN_10001549c(&pcStack_80,"earn_ice_tile_alt");
    FUN_10001549c(apvStack_98,"earn_ice_tile_alt");
    FUN_1002ece5c(plVar3,puVar6,&pcStack_80,apvStack_98);
    (**(code **)(*plVar3 + 0xe8))(plVar3);
    if (cStack_81 < '\0') {
      operator_delete(apvStack_98[0]);
    }
    if (uStack_70 < 0) {
      operator_delete(pcStack_80);
    }
    uVar10 = FUN_1004e0150("MENU_NEWS_FEED_TAB_NAME_COMING_SOON",0);
    FUN_1006513c0(param_1 + 0xdb7,uVar10);
    FUN_100530068(plVar3,0);
  }
  else {
    FUN_10001549c(&pcStack_80,"market_tiles");
    FUN_10001549c(apvStack_98,"market_tiles");
    FUN_1002ece5c(plVar3,puVar6,&pcStack_80,apvStack_98);
    (**(code **)(*plVar3 + 0xe8))(plVar3);
    if (cStack_81 < '\0') {
      operator_delete(apvStack_98[0]);
    }
    if (uStack_70 < 0) {
      operator_delete(pcStack_80);
    }
    uVar10 = FUN_1004e0150("FREE_OFFER_POPUP_SECOND_BUTTON",0);
    FUN_1006513c0(param_1 + 0xdb7,uVar10);
  }
  puVar6 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&pcStack_80,"earn_ice_tile");
  FUN_10001549c(apvStack_98,"earn_ice_tile");
  FUN_1002ece5c(plVar5,puVar6,&pcStack_80,apvStack_98);
  (**(code **)(*plVar5 + 0xe8))(plVar5);
  if (cStack_81 < '\0') {
    operator_delete(apvStack_98[0]);
  }
  if (uStack_70._7_1_ < '\0') {
    operator_delete(pcStack_80);
  }
  uVar10 = FUN_1004e0150("MENU_NEWS_FEED_TAB_NAME_COMING_SOON",0);
  FUN_1006513c0(param_1 + 0xf80,uVar10);
  FUN_100530068(plVar5,0);
  uVar7 = DAT_101d91884;
  uStack_58 = DAT_101d91884;
  pcStack_80 = FUN_10029c364;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xc3e,&pcStack_80);
  uStack_58 = uVar7;
  pcStack_80 = FUN_10029c37c;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xe07,&pcStack_80);
  return param_1;
}




void FUN_10029c398(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_thunk_FUN_10029c398_101480f18;
  puVar1 = param_1 + 0x18;
  *puVar1 = &PTR_FUN_101481068;
  FUN_10052b3ec(puVar1);
  param_1[0xe06] = &PTR_FUN_1014810b8;
  thunk_FUN_100651068(param_1 + 0xf80);
  FUN_1001acc08(param_1 + 0xe06);
  param_1[0xddd] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xdf4);
  FUN_10064e2bc(param_1 + 0xddd);
  param_1[0xc3d] = &PTR_FUN_1014810b8;
  thunk_FUN_100651068(param_1 + 0xdb7);
  FUN_1001acc08(param_1 + 0xc3d);
  param_1[0xc14] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xc2b);
  FUN_10064e2bc(param_1 + 0xc14);
  FUN_100333c98(param_1 + 0x59);
  param_1[0x30] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x47);
  FUN_10064e2bc(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10052b3fc(puVar1);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10029c4ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014810b8;
  thunk_FUN_100651068(param_1 + 0x17a);
  FUN_1001acc08(param_1);
  return;
}




void thunk_FUN_10029c398(void)

{
  FUN_10029c398();
  return;
}




void FUN_10029c4e4(long param_1)

{
  FUN_10029c398(param_1 + -0xc0);
  return;
}




void FUN_10029c4ec(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10029c398();
  operator_delete(pvVar1);
  return;
}




void FUN_10029c500(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10029c398(param_1 + -0xc0);
  operator_delete(pvVar1);
  return;
}




void FUN_10029c518(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  
  lVar1 = param_3 + 200;
  FUN_10064e48c(lVar1,&DAT_10115885c);
  lVar2 = param_3 + 0x180;
  fVar5 = (float)FUN_10064e3cc(lVar1);
  FUN_10064e3cc(lVar1);
  FUN_10064e47c(fVar5 * 0.33333334,lVar2);
  lVar3 = param_3 + 0x60a0;
  fVar5 = (float)FUN_10064e3cc(lVar1);
  FUN_10064e3cc(lVar1);
  FUN_10064e47c(fVar5 * 0.33333334,lVar3);
  lVar4 = param_3 + 0x6ee8;
  fVar5 = (float)FUN_10064e3cc(lVar1);
  FUN_10064e3cc(lVar1);
  FUN_10064e47c(fVar5 * 0.33333334,lVar4);
  local_58 = (**(code **)(**(long **)(param_3 + 0x6208) + 0x48))();
  uStack_54 = param_2;
  FUN_10064e48c(param_3 + 0x61e8,&local_58);
  local_58 = (**(code **)(**(long **)(param_3 + 0x7050) + 0x48))();
  uStack_54 = param_2;
  FUN_10064e48c(param_3 + 0x7030,&local_58);
  if ((*(float *)(param_3 + 0x308) != 230.0) || (*(float *)(param_3 + 0x30c) != 600.0)) {
    *(undefined8 *)(param_3 + 0x308) = 0x4416000043660000;
    FUN_1000200a0(param_3 + 0x2c8);
  }
  if ((*(float *)(param_3 + 0x108) != 20.0) || (*(float *)(param_3 + 0x10c) != 20.0)) {
    uVar6 = NEON_fmov(0x41a00000,4);
    *(undefined8 *)(param_3 + 0x108) = uVar6;
    FUN_1000200a0(lVar1);
  }
  FUN_10064e72c(0x41a00000,lVar3,3,lVar2,1);
  FUN_10064e72c(0,lVar3,5,lVar2,5);
  FUN_10064e72c(0x41a00000,lVar4,3,lVar3,1);
  FUN_10064e72c(0,lVar4,5,lVar3,5);
  FUN_100530068(param_3 + 0x7030,0);
  uVar6 = FUN_1004e0150("MENU_NEWS_FEED_TAB_NAME_COMING_SOON",0);
  FUN_1006513c0(param_3 + 0x7c00,uVar6);
  return;
}




void FUN_10029c728(long param_1)

{
  FUN_1003350b8(param_1 + 0x2c8);
  return;
}




void FUN_10029c730(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010029c738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_10029c73c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010029c744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0xc0) + 0x90))();
  return;
}




long * FUN_10029c748(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1002ecd94(param_1,0);
  *puVar1 = &PTR_FUN_1014810b8;
  puVar1 = puVar1 + 0x17a;
  thunk_FUN_100650e64(puVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100653080(param_1 + 0x138,0);
  FUN_100651038(puVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651460(puVar1,&DAT_101158858);
  return param_1;
}




void FUN_10029c7d0(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_1002ecf24();
  local_28 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_24 = param_2;
  FUN_1002ecef4(param_3,&local_28);
  uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
  fVar2 = 0.0;
  FUN_10065179c(uVar1,0,0x3f800000,param_3 + 0x17a);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e5ec(0,fVar2 * 0.09,param_3 + 0x17a,4,param_3,4);
  return;
}




void FUN_10029c870(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014810b8;
  thunk_FUN_100651068(param_1 + 0x17a);
  pvVar1 = (void *)FUN_1001acc08(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10029c8a8(void)

{
  return;
}




void FUN_10029c8ac(void)

{
  return;
}




void FUN_10029c8b0(void)

{
  return;
}




void FUN_10029c8b4(void)

{
  return;
}




long * FUN_10029c8b8(long *param_1)

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
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar15 = (undefined8 *)FUN_10064f204();
  puVar15[0x29] = 0;
  *puVar15 = &PTR_thunk_FUN_10029d220_101481250;
  thunk_FUN_1001c81d8();
  plVar1 = param_1 + 0x184;
  FUN_100650334(plVar1);
  plVar2 = param_1 + 0x1b1;
  thunk_FUN_100184f78();
  plVar3 = param_1 + 0x54f;
  thunk_FUN_100184f78(plVar3);
  plVar4 = param_1 + 0x8ed;
  thunk_FUN_100184f78();
  plVar5 = param_1 + 0xc8b;
  FUN_100650334(plVar5);
  plVar6 = param_1 + 0xcb8;
  thunk_FUN_100184f78();
  plVar7 = param_1 + 0x1056;
  thunk_FUN_100184f78();
  plVar8 = param_1 + 0x13f4;
  thunk_FUN_100184f78();
  plVar9 = param_1 + 0x1792;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_1 + 0x17b8;
  FUN_100650334(plVar10);
  plVar11 = param_1 + 0x17e5;
  thunk_FUN_100184f78(plVar11);
  plVar12 = param_1 + 0x1b83;
  thunk_FUN_100184f78(plVar12);
  plVar13 = param_1 + 0x1f21;
  thunk_FUN_100184f78(plVar13);
  plVar14 = param_1 + 0x22bf;
  thunk_FUN_100181304(plVar14,0);
  *(undefined4 *)(param_1 + 0x2576) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar15 + 0x2a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar6,1);
  FUN_100655930(plVar5,plVar7,1);
  FUN_100655930(plVar5,plVar8,1);
  FUN_100655930(plVar5,plVar9,1);
  FUN_100655930(plVar5,plVar10,1);
  FUN_100655930(plVar10,plVar13,1);
  FUN_100655930(plVar10,plVar12,1);
  FUN_100655930(plVar10,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  local_a8 = 0;
  uStack_a0 = 0;
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_CHINESE_TAB",0);
  FUN_10010b098(&local_a8,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FOREIGNER_TAB",0);
  FUN_10010b098(&local_a8,uVar16);
  FUN_1001c88a4(0x41f00000,0x43c80000,0,0x3f800000,0x3f800000,puVar15 + 0x2a,&local_a8);
  local_70 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_98 = FUN_10029d198;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x2b,&local_98);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_100185730(plVar2,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_1001afd98(plVar2,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e2c(plVar2,1);
  FUN_100185e48(plVar2,1,0x20);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_CHINA_ID",0);
  FUN_100185730(plVar3,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_CHINA_ID",0);
  FUN_1001afd98(plVar3,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e2c(plVar3,1);
  FUN_100185eac(plVar3,FUN_10029d1c4);
  FUN_100185e48(plVar3,1,0x12);
  FUN_100185e38(plVar3,1,0x12);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_100185730(plVar4,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_1001afd98(plVar4,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e48(plVar4,1,0x20);
  FUN_100185e38(plVar4,1,8);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_100185730(plVar6,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_1001afd98(plVar6,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e48(plVar6,1,0x40);
  FUN_100185e38(plVar6,1,2);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PASSPORT",0);
  FUN_100185730(plVar7,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PASSPORT",0);
  FUN_1001afd98(plVar7,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e58(plVar7,1);
  FUN_100185e48(plVar7,1,0x40);
  FUN_100185e38(plVar7,1,2);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_100185730(plVar8,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_1001afd98(plVar8,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e70(plVar8,1);
  FUN_100185e48(plVar8,1,0x40);
  FUN_100185e38(plVar8,1,2);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1006513c0(plVar9,uVar16);
  FUN_1004e3120(&local_98,"1900");
  FUN_100185730(plVar13,&local_98);
  if (local_90 != (long *)0x0) {
    operator_delete__(local_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar13,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar13,1);
  FUN_100185e48(plVar13,1,4);
  FUN_100185e38(plVar13,1,4);
  FUN_1004e3120(&local_98,"12");
  FUN_100185730(plVar12,&local_98);
  if (local_90 != (long *)0x0) {
    operator_delete__(local_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar12,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar12,1);
  FUN_100185e48(plVar12,1,2);
  FUN_100185e38(plVar12,1,1);
  FUN_1004e3120(&local_98,"31");
  FUN_100185730(plVar11,&local_98);
  if (local_90 != (long *)0x0) {
    operator_delete__(local_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar11,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar11,1);
  FUN_100185e48(plVar11,1,2);
  FUN_100185e38(plVar11,1,1);
  *(uint *)((long)param_1 + 0x64dc) = *(uint *)((long)param_1 + 0x64dc) & 0xfffffffb;
  uVar16 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_TYPE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x447a0000,plVar14,0,uVar16,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_70 = DAT_101d91884;
  local_98 = thunk_FUN_10029dba8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x22c0,&local_98);
  FUN_10010b1a8(&local_a8,1);
  return param_1;
}




void FUN_10029d198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_10029db48(param_1,uVar1);
  return;
}




ulong FUN_10029d1c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_10030c7a4();
  if ((uVar1 & 1) == 0) {
    FUN_100185630(param_2,1);
    uVar2 = FUN_1004e0150("FORM_ERROR_CHINA_ID",0);
    FUN_100185de8(param_2,uVar2);
  }
  return uVar1;
}




void thunk_FUN_10029dba8(long param_1)

{
  undefined8 uVar1;
  void *pvStack_e8;
  void *pvStack_e0;
  char cStack_d1;
  void *pvStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  void *pvStack_b0;
  void *pvStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  void *pvStack_90;
  undefined8 uStack_88;
  long lStack_80;
  void *pvStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  pvStack_d0 = (void *)0x0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  FUN_1004e313c(&uStack_b8);
  lStack_68 = 0;
  uStack_70 = 0;
  pvStack_78 = (void *)0x0;
  lStack_80 = 0;
  uStack_88 = 0;
  pvStack_90 = (void *)0x0;
  lStack_98 = 0;
  uStack_a0 = 0;
  pvStack_a8 = (void *)0x0;
  if (*(int *)(param_1 + 0x12bb0) == 0) {
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x4ad8) & 1) * 0x130 + 0x4948);
    FUN_1004e357c(uVar1,&pvStack_d0);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x10f8) & 1) * 0x130 + 0xf68);
    FUN_1000153b4(&uStack_b8,uVar1);
    uVar1 = FUN_100655b6c(param_1 + 0x2a78 + ((ulong)*(byte *)(param_1 + 0x2de8) & 1) * 0x130 +
                          0x1e0);
    FUN_1004e4154(&pvStack_e8,uVar1,6,8);
    FUN_1004e357c(&pvStack_e8,&pvStack_a8);
    if (pvStack_e0 != (void *)0x0) {
      operator_delete__(pvStack_e0);
    }
    uVar1 = FUN_100655b6c(param_1 + 0x2a78 + ((ulong)*(byte *)(param_1 + 0x2de8) & 1) * 0x130 +
                          0x1e0);
    FUN_1004e357c(uVar1,&pvStack_90);
    FUN_10001549c(&pvStack_e8,"CN");
    std::string::operator=((string *)&pvStack_78,(string *)&pvStack_e8);
    if (cStack_d1 < '\0') {
      operator_delete(pvStack_e8);
    }
  }
  else {
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xa310) & 1) * 0x130 + 0xa180);
    FUN_1004e357c(uVar1,&pvStack_d0);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x6930) & 1) * 0x130 + 0x67a0);
    FUN_1000153b4(&uStack_b8,uVar1);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xfc78) & 1) * 0x130 + 0xfae8);
    thunk_FUN_1004e439c(&pvStack_e8,uVar1);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xdf88) & 1) * 0x130 + 0xddf8);
    FUN_1004e372c(&pvStack_e8,uVar1);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xc298) & 1) * 0x130 + 0xc108);
    FUN_1004e372c(&pvStack_e8,uVar1);
    FUN_1004e357c(&pvStack_e8,&pvStack_a8);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x8620) & 1) * 0x130 + 0x8490);
    FUN_1004e357c(uVar1,&pvStack_90);
    std::string::operator=((string *)&pvStack_78,(string *)&DAT_101d91198);
    if (pvStack_e0 != (void *)0x0) {
      operator_delete__(pvStack_e0);
    }
  }
  (**(code **)**(undefined8 **)(param_1 + 0x148))(*(undefined8 **)(param_1 + 0x148),&pvStack_d0);
  if (lStack_68 < 0) {
    operator_delete(pvStack_78);
  }
  if (lStack_80 < 0) {
    operator_delete(pvStack_90);
  }
  if (lStack_98 < 0) {
    operator_delete(pvStack_a8);
  }
  if (pvStack_b0 != (void *)0x0) {
    operator_delete__(pvStack_b0);
    uStack_b8 = 0;
    pvStack_b0 = (void *)0x0;
  }
  if (lStack_c0 < 0) {
    operator_delete(pvStack_d0);
  }
  return;
}




long * thunk_FUN_10029c8b8(long *param_1)

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
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar15 = (undefined8 *)FUN_10064f204();
  puVar15[0x29] = 0;
  *puVar15 = &PTR_thunk_FUN_10029d220_101481250;
  thunk_FUN_1001c81d8();
  plVar1 = param_1 + 0x184;
  FUN_100650334(plVar1);
  plVar2 = param_1 + 0x1b1;
  thunk_FUN_100184f78();
  plVar3 = param_1 + 0x54f;
  thunk_FUN_100184f78(plVar3);
  plVar4 = param_1 + 0x8ed;
  thunk_FUN_100184f78();
  plVar5 = param_1 + 0xc8b;
  FUN_100650334(plVar5);
  plVar6 = param_1 + 0xcb8;
  thunk_FUN_100184f78();
  plVar7 = param_1 + 0x1056;
  thunk_FUN_100184f78();
  plVar8 = param_1 + 0x13f4;
  thunk_FUN_100184f78();
  plVar9 = param_1 + 0x1792;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_1 + 0x17b8;
  FUN_100650334(plVar10);
  plVar11 = param_1 + 0x17e5;
  thunk_FUN_100184f78(plVar11);
  plVar12 = param_1 + 0x1b83;
  thunk_FUN_100184f78(plVar12);
  plVar13 = param_1 + 0x1f21;
  thunk_FUN_100184f78(plVar13);
  plVar14 = param_1 + 0x22bf;
  thunk_FUN_100181304(plVar14,0);
  *(undefined4 *)(param_1 + 0x2576) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar15 + 0x2a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar6,1);
  FUN_100655930(plVar5,plVar7,1);
  FUN_100655930(plVar5,plVar8,1);
  FUN_100655930(plVar5,plVar9,1);
  FUN_100655930(plVar5,plVar10,1);
  FUN_100655930(plVar10,plVar13,1);
  FUN_100655930(plVar10,plVar12,1);
  FUN_100655930(plVar10,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_CHINESE_TAB",0);
  FUN_10010b098(&uStack_a8,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FOREIGNER_TAB",0);
  FUN_10010b098(&uStack_a8,uVar16);
  FUN_1001c88a4(0x41f00000,0x43c80000,0,0x3f800000,0x3f800000,puVar15 + 0x2a,&uStack_a8);
  uStack_70 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_98 = FUN_10029d198;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x2b,&pcStack_98);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_100185730(plVar2,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_1001afd98(plVar2,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e2c(plVar2,1);
  FUN_100185e48(plVar2,1,0x20);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_CHINA_ID",0);
  FUN_100185730(plVar3,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_CHINA_ID",0);
  FUN_1001afd98(plVar3,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e2c(plVar3,1);
  FUN_100185eac(plVar3,FUN_10029d1c4);
  FUN_100185e48(plVar3,1,0x12);
  FUN_100185e38(plVar3,1,0x12);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_100185730(plVar4,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_1001afd98(plVar4,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e48(plVar4,1,0x20);
  FUN_100185e38(plVar4,1,8);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_100185730(plVar6,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_1001afd98(plVar6,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e48(plVar6,1,0x40);
  FUN_100185e38(plVar6,1,2);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PASSPORT",0);
  FUN_100185730(plVar7,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PASSPORT",0);
  FUN_1001afd98(plVar7,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e58(plVar7,1);
  FUN_100185e48(plVar7,1,0x40);
  FUN_100185e38(plVar7,1,2);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_100185730(plVar8,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_1001afd98(plVar8,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e70(plVar8,1);
  FUN_100185e48(plVar8,1,0x40);
  FUN_100185e38(plVar8,1,2);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1006513c0(plVar9,uVar16);
  FUN_1004e3120(&pcStack_98,"1900");
  FUN_100185730(plVar13,&pcStack_98);
  if (plStack_90 != (long *)0x0) {
    operator_delete__(plStack_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar13,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar13,1);
  FUN_100185e48(plVar13,1,4);
  FUN_100185e38(plVar13,1,4);
  FUN_1004e3120(&pcStack_98,"12");
  FUN_100185730(plVar12,&pcStack_98);
  if (plStack_90 != (long *)0x0) {
    operator_delete__(plStack_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar12,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar12,1);
  FUN_100185e48(plVar12,1,2);
  FUN_100185e38(plVar12,1,1);
  FUN_1004e3120(&pcStack_98,"31");
  FUN_100185730(plVar11,&pcStack_98);
  if (plStack_90 != (long *)0x0) {
    operator_delete__(plStack_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar11,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar11,1);
  FUN_100185e48(plVar11,1,2);
  FUN_100185e38(plVar11,1,1);
  *(uint *)((long)param_1 + 0x64dc) = *(uint *)((long)param_1 + 0x64dc) & 0xfffffffb;
  uVar16 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_TYPE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x447a0000,plVar14,0,uVar16,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_70 = DAT_101d91884;
  pcStack_98 = thunk_FUN_10029dba8;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x22c0,&pcStack_98);
  FUN_10010b1a8(&uStack_a8,1);
  return param_1;
}




void FUN_10029d220(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10029d220_101481250;
  FUN_10003bd40(param_1 + 0x22bf);
  param_1[0x1f21] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x22b9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22b9]);
    param_1[0x22b9] = 0;
    param_1[0x22b8] = 0;
  }
  if ((void *)param_1[0x22b7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22b7]);
    param_1[0x22b7] = 0;
    param_1[0x22b6] = 0;
  }
  if ((void *)param_1[0x22b5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22b5]);
    param_1[0x22b5] = 0;
    param_1[0x22b4] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x228e);
  FUN_10064e2bc(param_1 + 0x2273);
  FUN_10064e2bc(param_1 + 0x2258);
  FUN_10003bd40(param_1 + 0x1fa1);
  FUN_100186088(param_1 + 0x1f21);
  param_1[0x1b83] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x1f1b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f1b]);
    param_1[0x1f1b] = 0;
    param_1[0x1f1a] = 0;
  }
  if ((void *)param_1[0x1f19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f19]);
    param_1[0x1f19] = 0;
    param_1[0x1f18] = 0;
  }
  if ((void *)param_1[0x1f17] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f17]);
    param_1[0x1f17] = 0;
    param_1[0x1f16] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x1ef0);
  FUN_10064e2bc(param_1 + 0x1ed5);
  FUN_10064e2bc(param_1 + 0x1eba);
  FUN_10003bd40(param_1 + 0x1c03);
  FUN_100186088(param_1 + 0x1b83);
  param_1[0x17e5] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x1b7d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b7d]);
    param_1[0x1b7d] = 0;
    param_1[0x1b7c] = 0;
  }
  if ((void *)param_1[0x1b7b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b7b]);
    param_1[0x1b7b] = 0;
    param_1[0x1b7a] = 0;
  }
  if ((void *)param_1[0x1b79] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b79]);
    param_1[0x1b79] = 0;
    param_1[0x1b78] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x1b52);
  FUN_10064e2bc(param_1 + 0x1b37);
  FUN_10064e2bc(param_1 + 0x1b1c);
  FUN_10003bd40(param_1 + 0x1865);
  FUN_100186088(param_1 + 0x17e5);
  param_1[0x17b8] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17cf);
  FUN_10064e2bc(param_1 + 0x17b8);
  thunk_FUN_100651068(param_1 + 0x1792);
  param_1[0x13f4] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x178c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x178c]);
    param_1[0x178c] = 0;
    param_1[0x178b] = 0;
  }
  if ((void *)param_1[0x178a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x178a]);
    param_1[0x178a] = 0;
    param_1[0x1789] = 0;
  }
  if ((void *)param_1[0x1788] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1788]);
    param_1[0x1788] = 0;
    param_1[0x1787] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x1761);
  FUN_10064e2bc(param_1 + 0x1746);
  FUN_10064e2bc(param_1 + 0x172b);
  FUN_10003bd40(param_1 + 0x1474);
  FUN_100186088(param_1 + 0x13f4);
  param_1[0x1056] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x13ee] != (void *)0x0) {
    operator_delete__((void *)param_1[0x13ee]);
    param_1[0x13ee] = 0;
    param_1[0x13ed] = 0;
  }
  if ((void *)param_1[0x13ec] != (void *)0x0) {
    operator_delete__((void *)param_1[0x13ec]);
    param_1[0x13ec] = 0;
    param_1[0x13eb] = 0;
  }
  if ((void *)param_1[0x13ea] != (void *)0x0) {
    operator_delete__((void *)param_1[0x13ea]);
    param_1[0x13ea] = 0;
    param_1[0x13e9] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x13c3);
  FUN_10064e2bc(param_1 + 0x13a8);
  FUN_10064e2bc(param_1 + 0x138d);
  FUN_10003bd40(param_1 + 0x10d6);
  FUN_100186088(param_1 + 0x1056);
  param_1[0xcb8] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x1050] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1050]);
    param_1[0x1050] = 0;
    param_1[0x104f] = 0;
  }
  if ((void *)param_1[0x104e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x104e]);
    param_1[0x104e] = 0;
    param_1[0x104d] = 0;
  }
  if ((void *)param_1[0x104c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x104c]);
    param_1[0x104c] = 0;
    param_1[0x104b] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x1025);
  FUN_10064e2bc(param_1 + 0x100a);
  FUN_10064e2bc(param_1 + 0xfef);
  FUN_10003bd40(param_1 + 0xd38);
  FUN_100186088(param_1 + 0xcb8);
  param_1[0xc8b] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xca2);
  FUN_10064e2bc(param_1 + 0xc8b);
  param_1[0x8ed] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xc85] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc85]);
    param_1[0xc85] = 0;
    param_1[0xc84] = 0;
  }
  if ((void *)param_1[0xc83] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc83]);
    param_1[0xc83] = 0;
    param_1[0xc82] = 0;
  }
  if ((void *)param_1[0xc81] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc81]);
    param_1[0xc81] = 0;
    param_1[0xc80] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xc5a);
  FUN_10064e2bc(param_1 + 0xc3f);
  FUN_10064e2bc(param_1 + 0xc24);
  FUN_10003bd40(param_1 + 0x96d);
  FUN_100186088(param_1 + 0x8ed);
  param_1[0x54f] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x8e7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8e7]);
    param_1[0x8e7] = 0;
    param_1[0x8e6] = 0;
  }
  if ((void *)param_1[0x8e5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8e5]);
    param_1[0x8e5] = 0;
    param_1[0x8e4] = 0;
  }
  if ((void *)param_1[0x8e3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8e3]);
    param_1[0x8e3] = 0;
    param_1[0x8e2] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x8bc);
  FUN_10064e2bc(param_1 + 0x8a1);
  FUN_10064e2bc(param_1 + 0x886);
  FUN_10003bd40(param_1 + 0x5cf);
  FUN_100186088(param_1 + 0x54f);
  param_1[0x1b1] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x549] != (void *)0x0) {
    operator_delete__((void *)param_1[0x549]);
    param_1[0x549] = 0;
    param_1[0x548] = 0;
  }
  if ((void *)param_1[0x547] != (void *)0x0) {
    operator_delete__((void *)param_1[0x547]);
    param_1[0x547] = 0;
    param_1[0x546] = 0;
  }
  if ((void *)param_1[0x545] != (void *)0x0) {
    operator_delete__((void *)param_1[0x545]);
    param_1[0x545] = 0;
    param_1[0x544] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x51e);
  FUN_10064e2bc(param_1 + 0x503);
  FUN_10064e2bc(param_1 + 0x4e8);
  FUN_10003bd40(param_1 + 0x231);
  FUN_100186088(param_1 + 0x1b1);
  param_1[0x184] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x19b);
  FUN_10064e2bc(param_1 + 0x184);
  thunk_FUN_1001c859c(param_1 + 0x2a);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10029d220(void)

{
  FUN_10029d220();
  return;
}




void FUN_10029d7fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10029d220();
  operator_delete(pvVar1);
  return;
}




void FUN_10029d810(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e0150("MENU_PROFILE_GOVERNMENT_ID_POPUP_TITLE",0);
  FUN_1000153b4(param_1 + 2,uVar1);
  *param_1 = 0x44b5400044bb8000;
  *(undefined4 *)((long)param_1 + 100) = 0;
  FUN_1001ad494(param_1,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101854af0);
  *(undefined4 *)((long)param_1 + 0x5c) = DAT_101854af0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffd18a;
  return;
}




void FUN_10029d88c(long param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  
  pfVar3 = (float *)(param_1 + 0xbce0);
  FUN_1001853c0(0x44750000,0xbf800000,param_1 + 0xd88);
  FUN_1001853c0(0x44750000,0xbf800000,param_1 + 0x2a78);
  FUN_1001853c0(0x44750000,0xbf800000,param_1 + 0x4768);
  FUN_1001853c0(0x44750000,0xbf800000,param_1 + 0x65c0);
  FUN_1001853c0(0x44750000,0xbf800000,param_1 + 0x82b0);
  FUN_1001853c0(0x44750000,0xbf800000,param_1 + 0x9fa0);
  lVar1 = param_1 + 0x150;
  FUN_10064e5ec(0,0x42a00000,lVar1,4,param_1,4);
  lVar2 = param_1 + 0xc20;
  FUN_100650364(0x42a00000,lVar2,1,4);
  FUN_100655990(lVar2,0);
  FUN_1006503cc(lVar2);
  FUN_10064e72c(0x42c80000,lVar2,0,lVar1,2);
  FUN_10064e72c(0,lVar2,4,lVar1,4);
  *(uint *)(param_1 + 0xca4) = *(uint *)(param_1 + 0xca4) | 0x10;
  FUN_1001853c0(0x438a0000,0xbf800000,param_1 + 0xbf28);
  FUN_1001853c0(0x438a0000,0xbf800000,param_1 + 0xdc18);
  FUN_1001853c0(0x43b80000,0xbf800000,param_1 + 0xf908);
  if ((*pfVar3 != 0.0) || (*(float *)(param_1 + 0xbce4) != 1.0)) {
    pfVar3[0] = 0.0;
    pfVar3[1] = 1.0;
    FUN_1000200a0(param_1 + 0xbc90);
  }
  lVar4 = param_1 + 0xbdc0;
  FUN_100650364(0x41f00000,lVar4,3,0);
  FUN_100655990(lVar4,0);
  FUN_1006503cc(lVar4);
  lVar4 = param_1 + 0x6458;
  FUN_100650364(0x42a00000,lVar4,1,3);
  FUN_100655990(lVar4,0);
  FUN_1006503cc(lVar4);
  FUN_10064e72c(0x42c80000,lVar4,0,lVar1,2);
  FUN_10064e72c(0,lVar4,4,lVar1,4);
  *(uint *)(param_1 + 0x64dc) = *(uint *)(param_1 + 0x64dc) | 0x10;
  if ((*(uint *)(param_1 + 0xca4) & 4) != 0) {
    lVar4 = lVar2;
  }
  FUN_10064e72c(0x42a00000,param_1 + 0x115f8,0,lVar4,2);
  FUN_10064e72c(0,param_1 + 0x115f8,4,lVar4,4);
  return;
}




void FUN_10029db48(long *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((long)param_1 + 0x64dc);
  if (param_2 == 1) {
    *(uint *)((long)param_1 + 0xca4) = *(uint *)((long)param_1 + 0xca4) & 0xfffffffb;
    uVar2 = *puVar1 | 4;
  }
  else {
    if (param_2 != 0) goto LAB_10029db98;
    *(uint *)((long)param_1 + 0xca4) = *(uint *)((long)param_1 + 0xca4) | 4;
    uVar2 = *puVar1 & 0xfffffffb;
  }
  *puVar1 = uVar2;
LAB_10029db98:
  *(int *)(param_1 + 0x2576) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010029dba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_10029dba8(long param_1)

{
  undefined8 uVar1;
  void *local_e8;
  void *local_e0;
  char local_d1;
  void *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  long local_98;
  void *pvStack_90;
  undefined8 local_88;
  long lStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_d0 = (void *)0x0;
  uStack_c8 = 0;
  local_c0 = 0;
  FUN_1004e313c(&local_b8);
  local_68 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  lStack_80 = 0;
  local_88 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  if (*(int *)(param_1 + 0x12bb0) == 0) {
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x4ad8) & 1) * 0x130 + 0x4948);
    FUN_1004e357c(uVar1,&local_d0);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x10f8) & 1) * 0x130 + 0xf68);
    FUN_1000153b4(&local_b8,uVar1);
    uVar1 = FUN_100655b6c(param_1 + 0x2a78 + ((ulong)*(byte *)(param_1 + 0x2de8) & 1) * 0x130 +
                          0x1e0);
    FUN_1004e4154(&local_e8,uVar1,6,8);
    FUN_1004e357c(&local_e8,&local_a8);
    if (local_e0 != (void *)0x0) {
      operator_delete__(local_e0);
    }
    uVar1 = FUN_100655b6c(param_1 + 0x2a78 + ((ulong)*(byte *)(param_1 + 0x2de8) & 1) * 0x130 +
                          0x1e0);
    FUN_1004e357c(uVar1,&pvStack_90);
    FUN_10001549c(&local_e8,"CN");
    std::string::operator=((string *)&local_78,(string *)&local_e8);
    if (local_d1 < '\0') {
      operator_delete(local_e8);
    }
  }
  else {
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xa310) & 1) * 0x130 + 0xa180);
    FUN_1004e357c(uVar1,&local_d0);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x6930) & 1) * 0x130 + 0x67a0);
    FUN_1000153b4(&local_b8,uVar1);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xfc78) & 1) * 0x130 + 0xfae8);
    thunk_FUN_1004e439c(&local_e8,uVar1);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xdf88) & 1) * 0x130 + 0xddf8);
    FUN_1004e372c(&local_e8,uVar1);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xc298) & 1) * 0x130 + 0xc108);
    FUN_1004e372c(&local_e8,uVar1);
    FUN_1004e357c(&local_e8,&local_a8);
    uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x8620) & 1) * 0x130 + 0x8490);
    FUN_1004e357c(uVar1,&pvStack_90);
    std::string::operator=((string *)&local_78,(string *)&DAT_101d91198);
    if (local_e0 != (void *)0x0) {
      operator_delete__(local_e0);
    }
  }
  (**(code **)**(undefined8 **)(param_1 + 0x148))(*(undefined8 **)(param_1 + 0x148),&local_d0);
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  if (lStack_80 < 0) {
    operator_delete(pvStack_90);
  }
  if (local_98 < 0) {
    operator_delete(local_a8);
  }
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  if (local_c0 < 0) {
    operator_delete(local_d0);
  }
  return;
}




long * FUN_10029deb4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = param_2;
  *puVar8 = &PTR_thunk_FUN_10021a6bc_1014734a8;
  puVar8 = puVar8 + 0x18;
  thunk_FUN_100655644(puVar8);
  thunk_FUN_100184f78();
  thunk_FUN_100184f78(param_1 + 0x3e1);
  thunk_FUN_10018ceb0();
  thunk_FUN_1001b0818();
  thunk_FUN_1001b0818(param_1 + 0x132c);
  thunk_FUN_1001b0818(param_1 + 0x19b3);
  plVar1 = param_1 + 0x203a;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x2060;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x2086;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x20ac;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x20d2;
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0x20f8;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x211e;
  thunk_FUN_1002eca3c(plVar7,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100655930(puVar8,param_1 + 0x43,1);
  FUN_100655930(puVar8,param_1 + 0x3e1,1);
  FUN_100655930(puVar8,param_1 + 0x132c,1);
  FUN_100655930(puVar8,param_1 + 0x19b3,1);
  FUN_100655930(puVar8,param_1 + 0xca5,1);
  FUN_100655930(puVar8,param_1 + 0x77f,1);
  FUN_100655930(puVar8,plVar1,1);
  FUN_100655930(puVar8,plVar2,1);
  FUN_100655930(puVar8,plVar3,1);
  FUN_100655930(puVar8,plVar4,1);
  FUN_100655930(puVar8,plVar5,1);
  FUN_100655930(puVar8,plVar6,1);
  FUN_100655930(puVar8,plVar7,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_1006513c0(plVar1,uVar9);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_TAG_SEARCH_PLACEHOLDER",0);
  FUN_1006513c0(plVar2,uVar9);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_TYPE",0);
  FUN_1006513c0(plVar3,uVar9);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_FIELD_LANGUAGE",0);
  FUN_1006513c0(plVar4,uVar9);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_FIELD_MIN_SKILL_TIER",0);
  FUN_1006513c0(plVar5,uVar9);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_PRIME_TIME",0);
  FUN_1006513c0(plVar6,uVar9);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_CONFIRM_SEARCH",0);
  FUN_1002ecce4(plVar7,uVar9);
  local_68 = DAT_101d91884;
  local_90 = thunk_FUN_10029ece0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x211f,&local_90);
  FUN_10029e270(param_1);
  uVar9 = (**(code **)(*(long *)param_1[0x17] + 0x20))();
  FUN_10029e74c(param_1,uVar9);
  return param_1;
}




void thunk_FUN_10029ece0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  string *psVar3;
  undefined1 auStack_c0 [32];
  void *pvStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  void *pvStack_88;
  undefined8 uStack_80;
  long lStack_78;
  void *pvStack_70;
  undefined8 uStack_68;
  long lStack_60;
  void *pvStack_58;
  undefined8 uStack_50;
  long lStack_48;
  int iStack_40;
  int iStack_3c;
  
  pvStack_58 = (void *)0x0;
  lStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  pvStack_70 = (void *)0x0;
  uStack_98 = 0;
  pvStack_a0 = (void *)0x0;
  pvStack_88 = (void *)0x0;
  lStack_90 = 0;
  FUN_1001f12dc(&pvStack_a0);
  uVar1 = FUN_100185ddc(param_1 + 0x218);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_100655b6c(param_1 + 0x218 + ((ulong)*(byte *)(param_1 + 0x588) & 1) * 0x130 + 0x1e0)
    ;
    FUN_1004e357c(uVar2,&pvStack_a0);
  }
  uVar1 = FUN_100185ddc(param_1 + 0x1f08);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_100655b6c(param_1 + 0x1f08 + ((ulong)*(byte *)(param_1 + 0x2278) & 1) * 0x130 +
                          0x1e0);
    FUN_1004e357c(uVar2,&pvStack_88);
  }
  psVar3 = (string *)FUN_1001b10bc(param_1 + 0x6528);
  std::string::operator=((string *)&pvStack_70,psVar3);
  psVar3 = (string *)FUN_10018e8a8(param_1 + 0x3bf8);
  std::string::operator=((string *)&pvStack_58,psVar3);
  iStack_40 = *(int *)(param_1 + 0x101c8) + -1;
  iStack_3c = *(int *)(param_1 + 0xcd90) + -2;
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))(*(long **)(param_1 + 0xb8),&pvStack_a0);
  FUN_100644aec(auStack_c0,DAT_101d237f0,0);
  FUN_100644c34(param_1,auStack_c0,1);
  if (lStack_48 < 0) {
    operator_delete(pvStack_58);
  }
  if (lStack_60 < 0) {
    operator_delete(pvStack_70);
  }
  if (lStack_78 < 0) {
    operator_delete(pvStack_88);
  }
  if (lStack_90 < 0) {
    operator_delete(pvStack_a0);
  }
  return;
}




void FUN_10029e270(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  void *local_c0;
  void *local_b8;
  void *local_b0;
  char local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x218;
  uVar2 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  uVar2 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_100185730(lVar1,uVar2);
  FUN_100185e48(lVar1,1,0x10);
  FUN_100185e2c(lVar1,0);
  lVar1 = param_1 + 0x1f08;
  uVar2 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_TAG_SEARCH_PLACEHOLDER",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e48(lVar1,1,4);
  FUN_100185e2c(lVar1,0);
  local_70 = 0;
  uStack_68 = 0;
  uVar2 = FUN_1000f18d4(&DAT_101d917f8,1);
  FUN_10010b098(&local_70,uVar2);
  uVar2 = FUN_1000f18d4(&DAT_101d91798,1);
  FUN_10010b098(&local_70,uVar2);
  uVar2 = FUN_1000f18d4(&DAT_101d917b0,1);
  FUN_10010b098(&local_70,uVar2);
  uVar2 = FUN_1000f18d4(&DAT_101d917c8,1);
  FUN_10010b098(&local_70,uVar2);
  uVar2 = FUN_1000f18d4(&DAT_101d917e0,1);
  FUN_10010b098(&local_70,uVar2);
  local_80 = 0;
  uStack_78 = 0;
  FUN_10001617c(&local_80,&DAT_101d917f8);
  FUN_10001617c(&local_80,&DAT_101d91798);
  FUN_10001617c(&local_80,&DAT_101d917b0);
  FUN_10001617c(&local_80,&DAT_101d917c8);
  FUN_10001617c(&local_80,&DAT_101d917e0);
  FUN_10018d7d4(0x447a0000,0x447a0000,0,0x3f800000,0x3f800000,param_1 + 0x3bf8,&local_70,&local_80,1
                ,1,0);
  iVar3 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  do {
    FUN_1000f10e4(&local_b8,iVar3,1);
    FUN_10010b098(&local_90,&local_b8);
    if (local_b0 != (void *)0x0) {
      operator_delete__(local_b0);
    }
    FUN_1000f13b4(&local_b8,iVar3);
    FUN_10001617c(&local_a0,&local_b8);
    if (local_a1 < '\0') {
      operator_delete(local_b8);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  FUN_1001b0c70(0x442f0000,param_1 + 0x6528,&local_90,&local_a0,1);
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  uVar2 = FUN_1004e0150("MENU_DROPDDOWN_OPTION_ANY",0);
  FUN_10010b098(&local_b8,uVar2);
  uVar2 = FUN_1000f0a88(0xffffffff,0,0);
  FUN_10010b098(&local_b8,uVar2);
  FUN_1004e313c(auStack_c8);
  iVar3 = 0;
  do {
    FUN_1004e38ac(auStack_c8,"%d ");
    uVar2 = FUN_1000f0a88(iVar3,1,0);
    FUN_1004e372c(auStack_c8,uVar2);
    FUN_10010b098(&local_b8,auStack_c8);
    iVar3 = iVar3 + 3;
  } while (iVar3 != 0x1e);
  local_d8 = 0;
  uStack_d0 = 0;
  lVar1 = param_1 + 0x9960;
  FUN_1001b0c70(0x442f0000,lVar1,&local_b8,&local_d8,1);
  FUN_1001b0f48(lVar1,0,1,0);
  FUN_1001b10ec(0x3f666666,0x3f4ccccd,lVar1);
  local_e8 = 0;
  uStack_e0 = 0;
  uVar2 = FUN_1004e0150("MENU_DROPDDOWN_OPTION_ANY",0);
  FUN_10010b098(&local_e8,uVar2);
  iVar3 = 0;
  do {
    FUN_1000f28d0(&local_f8,iVar3,1);
    FUN_10010b098(&local_e8,&local_f8);
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x18);
  local_f8 = 0;
  local_f0 = (void *)0x0;
  param_1 = param_1 + 0xcd98;
  FUN_1001b0c70(0x442f0000,param_1,&local_e8,&local_f8,1);
  FUN_1001b1134(param_1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1001b10ec(0x3f666666,0x3f4ccccd,param_1);
  FUN_10001629c(&local_f8,1);
  FUN_10010b1a8(&local_e8,1);
  FUN_10001629c(&local_d8,1);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
  }
  FUN_10010b1a8(&local_b8,1);
  FUN_10001629c(&local_a0,1);
  FUN_10010b1a8(&local_90,1);
  FUN_10001629c(&local_80,1);
  FUN_10010b1a8(&local_70,1);
  return;
}




void FUN_10029e74c(long param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1004e3170(auStack_40);
  FUN_100185730(param_1 + 0x218,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3170(auStack_40,param_2);
  FUN_1001afeec(param_1 + 0x218,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3170(auStack_40,param_2 + 0x18);
  FUN_100185730(param_1 + 0x1f08,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3170(auStack_40,param_2 + 0x18);
  FUN_1001afeec(param_1 + 0x1f08,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_10018e754(param_1 + 0x3bf8,param_2 + 0x48,0,0);
  FUN_1001b0f68(param_1 + 0x6528,param_2 + 0x30,0,0);
  iVar1 = 0;
  if (*(int *)(param_2 + 100) != -2) {
    iVar1 = *(int *)(param_2 + 100) + 2;
  }
  FUN_1001b0f48(param_1 + 0x9960,iVar1,0,0);
  FUN_1001b0f48(param_1 + 0xcd98,*(int *)(param_2 + 0x60) + 1,0,0);
  return;
}




long * thunk_FUN_10029deb4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = param_2;
  *puVar8 = &PTR_thunk_FUN_10021a6bc_1014734a8;
  puVar8 = puVar8 + 0x18;
  thunk_FUN_100655644(puVar8);
  thunk_FUN_100184f78();
  thunk_FUN_100184f78(param_1 + 0x3e1);
  thunk_FUN_10018ceb0();
  thunk_FUN_1001b0818();
  thunk_FUN_1001b0818(param_1 + 0x132c);
  thunk_FUN_1001b0818(param_1 + 0x19b3);
  plVar1 = param_1 + 0x203a;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x2060;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x2086;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x20ac;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x20d2;
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0x20f8;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x211e;
  thunk_FUN_1002eca3c(plVar7,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100655930(puVar8,param_1 + 0x43,1);
  FUN_100655930(puVar8,param_1 + 0x3e1,1);
  FUN_100655930(puVar8,param_1 + 0x132c,1);
  FUN_100655930(puVar8,param_1 + 0x19b3,1);
  FUN_100655930(puVar8,param_1 + 0xca5,1);
  FUN_100655930(puVar8,param_1 + 0x77f,1);
  FUN_100655930(puVar8,plVar1,1);
  FUN_100655930(puVar8,plVar2,1);
  FUN_100655930(puVar8,plVar3,1);
  FUN_100655930(puVar8,plVar4,1);
  FUN_100655930(puVar8,plVar5,1);
  FUN_100655930(puVar8,plVar6,1);
  FUN_100655930(puVar8,plVar7,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_1006513c0(plVar1,uVar9);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_TAG_SEARCH_PLACEHOLDER",0);
  FUN_1006513c0(plVar2,uVar9);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_TYPE",0);
  FUN_1006513c0(plVar3,uVar9);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_FIELD_LANGUAGE",0);
  FUN_1006513c0(plVar4,uVar9);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_FIELD_MIN_SKILL_TIER",0);
  FUN_1006513c0(plVar5,uVar9);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_PRIME_TIME",0);
  FUN_1006513c0(plVar6,uVar9);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_CONFIRM_SEARCH",0);
  FUN_1002ecce4(plVar7,uVar9);
  uStack_68 = DAT_101d91884;
  pcStack_90 = thunk_FUN_10029ece0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x211f,&pcStack_90);
  FUN_10029e270(param_1);
  uVar9 = (**(code **)(*(long *)param_1[0x17] + 0x20))();
  FUN_10029e74c(param_1,uVar9);
  return param_1;
}




void FUN_10029e898(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = param_1 + 0x108f0;
  FUN_10064e47c(0x447a0000,0x42f00000,lVar3);
  lVar1 = param_1 + 0x218;
  FUN_1001853c0(0x447a0000,0xbf800000,lVar1);
  lVar4 = param_1 + 0x1f08;
  fVar11 = -1.0;
  FUN_1001853c0(0x447a0000,lVar4);
  fVar10 = (float)FUN_100185eb4(lVar1);
  fVar11 = fVar11 * -0.5;
  bVar9 = false;
  if ((*(float *)(param_1 + 600) == fVar10 * -0.5) &&
     (bVar9 = false, !NAN(*(float *)(param_1 + 0x25c)) && !NAN(fVar11))) {
    bVar9 = *(float *)(param_1 + 0x25c) == fVar11;
  }
  if (!bVar9) {
    *(float *)(param_1 + 600) = fVar10 * -0.5;
    *(float *)(param_1 + 0x25c) = fVar11;
    FUN_1000200a0(lVar1);
  }
  fVar10 = (float)FUN_100185eb4(lVar1);
  fVar11 = fVar11 * -0.5;
  bVar9 = false;
  if ((*(float *)(param_1 + 0x1f48) == fVar10 * -0.5) &&
     (bVar9 = false, !NAN(*(float *)(param_1 + 0x1f4c)) && !NAN(fVar11))) {
    bVar9 = *(float *)(param_1 + 0x1f4c) == fVar11;
  }
  if (!bVar9) {
    *(float *)(param_1 + 0x1f48) = fVar10 * -0.5;
    *(float *)(param_1 + 0x1f4c) = fVar11;
    FUN_1000200a0(lVar4);
  }
  FUN_10064e72c(0x42700000,lVar4,0,lVar1,2);
  lVar5 = param_1 + 0x3bf8;
  FUN_10064e72c(0x43020000,lVar5,0,lVar4,2);
  FUN_10064e72c(0,lVar5,4,lVar4,4);
  lVar6 = param_1 + 0x6528;
  FUN_10064e72c(0x42c80000,lVar6,0,lVar5,2);
  FUN_10064e72c(0x42c80000,lVar6,4,lVar5,4);
  lVar7 = param_1 + 0x9960;
  FUN_10064e3cc(lVar7);
  FUN_10064e72c(100.0 - fVar11 * 0.9,lVar7,0,lVar6,2);
  FUN_10064e72c(0,lVar7,4,lVar6,4);
  lVar8 = param_1 + 0xcd98;
  FUN_10064e3cc(lVar7);
  FUN_10064e72c(100.0 - fVar11 * 0.9,lVar8,0,lVar7,2);
  FUN_10064e72c(0,lVar8,4,lVar7,4);
  FUN_10064e3cc(lVar7);
  FUN_10064e72c(100.0 - fVar11 * 0.9,lVar3,0,lVar8,2);
  FUN_10064e72c(0xc2d20000,lVar3,4,lVar8,4);
  lVar2 = param_1 + 0xc0;
  FUN_1006557ec(lVar2);
  FUN_10064e68c(0x43160000,0x42480000,lVar2,4);
  FUN_10064e72c(0,param_1 + 66000,5,lVar1,5);
  FUN_10064e72c(0,param_1 + 0x10300,5,lVar4,5);
  FUN_10064e72c(0,param_1 + 0x10430,5,lVar5,5);
  FUN_10064e72c(0xc27c0000,param_1 + 0x10560,5,lVar6,5);
  FUN_10064e72c(0xc27c0000,param_1 + 0x10690,5,lVar7,5);
  FUN_10064e72c(0xc27c0000,param_1 + 0x107c0,5,lVar8,5);
  FUN_10064e72c(0xc1a00000,param_1 + 66000,1,lVar3,3);
  FUN_10064e72c(0xc1a00000,param_1 + 0x10300,1,lVar3,3);
  FUN_10064e72c(0xc1a00000,param_1 + 0x10430,1,lVar3,3);
  FUN_10064e72c(0xc1a00000,param_1 + 0x10560,1,lVar3,3);
  FUN_10064e72c(0xc1a00000,param_1 + 0x10690,1,lVar3,3);
  FUN_10064e72c(0xc1a00000,param_1 + 0x107c0,1,lVar3,3);
  fVar11 = (float)FUN_10064e3cc(lVar2);
  fVar10 = 200.0;
  FUN_10064e3cc(lVar2);
  FUN_10064e47c(fVar11 + 200.0,fVar10 + 100.0,param_1);
  return;
}




void FUN_10029ece0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  string *psVar3;
  undefined1 auStack_c0 [32];
  void *local_a0;
  undefined8 uStack_98;
  long lStack_90;
  void *local_88;
  undefined8 local_80;
  long lStack_78;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  long lStack_48;
  int local_40;
  int iStack_3c;
  
  pvStack_58 = (void *)0x0;
  local_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  lStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  local_88 = (void *)0x0;
  lStack_90 = 0;
  FUN_1001f12dc(&local_a0);
  uVar1 = FUN_100185ddc(param_1 + 0x218);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_100655b6c(param_1 + 0x218 + ((ulong)*(byte *)(param_1 + 0x588) & 1) * 0x130 + 0x1e0)
    ;
    FUN_1004e357c(uVar2,&local_a0);
  }
  uVar1 = FUN_100185ddc(param_1 + 0x1f08);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_100655b6c(param_1 + 0x1f08 + ((ulong)*(byte *)(param_1 + 0x2278) & 1) * 0x130 +
                          0x1e0);
    FUN_1004e357c(uVar2,&local_88);
  }
  psVar3 = (string *)FUN_1001b10bc(param_1 + 0x6528);
  std::string::operator=((string *)&local_70,psVar3);
  psVar3 = (string *)FUN_10018e8a8(param_1 + 0x3bf8);
  std::string::operator=((string *)&pvStack_58,psVar3);
  local_40 = *(int *)(param_1 + 0x101c8) + -1;
  iStack_3c = *(int *)(param_1 + 0xcd90) + -2;
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))(*(long **)(param_1 + 0xb8),&local_a0);
  FUN_100644aec(auStack_c0,DAT_101d237f0,0);
  FUN_100644c34(param_1,auStack_c0,1);
  if (lStack_48 < 0) {
    operator_delete(pvStack_58);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if (lStack_78 < 0) {
    operator_delete(local_88);
  }
  if (lStack_90 < 0) {
    operator_delete(local_a0);
  }
  return;
}




void FUN_10029ee5c(void)

{
  DAT_101e44430 = 0xff;
  DAT_101e44432 = 0xffff;
  DAT_101e44434 = 0xffff;
  DAT_101e44436 = 0xffbc9c44;
  DAT_101e4443a = 0xff1166f2;
  DAT_101e4443e = 0xffe0e0e0;
  DAT_101e44442 = 0xffa0a0a0;
  DAT_101e44446 = 0xff8c8c8c;
  DAT_101e4444a = 0xff322213;
  DAT_101e4444e = 0xff091911;
  DAT_101e44452 = 0xff170c19;
  DAT_101e44456 = 0xff241a14;
  DAT_101e4445a = 0xff14171c;
  DAT_101e4445e = 0xff221911;
  DAT_101e44462 = 0xff1a1416;
  DAT_101e44466 = 0xff121414;
  DAT_101e4446a = 0xff1a1809;
  DAT_101e4446e = 0xff141414;
  DAT_101e44472 = 0xff141414;
  DAT_101e44476 = 0xff2929c0;
  DAT_101e4447a = 0xff283082;
  DAT_101e4447e = 0xff5262cc;
  DAT_101e44482 = 0xff283082;
  DAT_101e44486 = 0xff5262cc;
  DAT_101e4448a = 0xff745c42;
  DAT_101e4448e = 0xff184155;
  DAT_101e44492 = 0xff92665e;
  DAT_101e44496 = 0xffbc9c44;
  DAT_101e4449a = 0xffbbae56;
  DAT_101e4449e = 0xff8b7b01;
  DAT_101e444a2 = 0xff90b3ef;
  DAT_101e444a6 = 0xff728ebe;
  DAT_101e444aa = 0xff19459d;
  DAT_101e444ae = 0xff9d877b;
  DAT_101e444b2 = 0xffcbb1a3;
  DAT_101e444b6 = 0xff3f6fb5;
  DAT_101e444ba = 0xffc5c5c5;
  DAT_101e444be = 0xff4fc1f1;
  DAT_101e444c2 = 0xff606060;
  DAT_101e444c6 = 0xffc5ff7b;
  DAT_101e444ca = 0xff5271eb;
  DAT_101e444ce = 0xfffae076;
  DAT_101e444d2 = 0xff3ac8f6;
  DAT_101e444d6 = 0xffaaaaaa;
  DAT_101e444da = 0xffe19400;
  DAT_101e444de = 0xffe19400;
  DAT_101e444e2 = 0xffe550b2;
  DAT_101e444e6 = 0xfff22ae8;
  DAT_101e444ea = 0xff005ae1;
  DAT_101e444ee = 0xff1addfa;
  DAT_101e444f2 = 0xff2424b3;
  DAT_101e444f6 = 0xff2424b3;
  DAT_101e444fa = 0xff646464;
  DAT_101e444fe = 0xff92665e;
  DAT_101e44502 = 0xff646037;
  DAT_101e4450c = 0xff1111a1;
  DAT_101e44510 = 0xff321ee1;
  DAT_101e44514 = 0xffc8c8c8;
  DAT_101e44518 = 0xff321ee1;
  DAT_101e44524 = 0xff6259b3;
  DAT_101e44528 = 0xff506e73;
  DAT_101e4452c = 0xff9dbf86;
  DAT_101e44508 = 0xffffffff;
  DAT_101e44530 = 0xffa35244;
  DAT_101e4451c = 0xff7fe801;
  DAT_101e44534 = 0xffca828e;
  DAT_101e44520 = 0xffffffff;
  DAT_101e44538 = 0xffa6a6a6;
  DAT_101e4453c = 0xffa6a6a6;
  DAT_101e44540 = 0xffffffff;
  DAT_101e44544 = 0xff88ea2f;
  DAT_101e44548 = 0xff8c8c8c;
  DAT_101e4454c = 0xffffb400;
  DAT_101e44550 = 0xffff00ff;
  DAT_101e44554 = 0xff00aded;
  DAT_101e44558 = 0xff33d3ff;
  DAT_101e4455c = 0xff7fe801;
  DAT_101e44560 = 0xff282828;
  DAT_101e44564 = 0xfff0f0f0;
  DAT_101e44568 = 0xffa4781e;
  DAT_101e4456c = 0xffa6654b;
  DAT_101e44570 = 0xff93435b;
  DAT_101e44574 = 0xff387f9c;
  DAT_101e44578 = 0xffa3781e;
  DAT_101e4457c = 0xffffd18a;
  DAT_101e44580 = 0xffff61f7;
  DAT_101e44584 = 0xff5de1f2;
  DAT_101e44588 = 0xff80eaff;
  DAT_101e4458c = 0xff32e00e;
  DAT_101e44590 = 0xff5a3c10;
  DAT_101e44594 = 0xff330b03;
  DAT_101e44598 = 0xff33031d;
  DAT_101e4459c = 0xff032433;
  DAT_101e445a0 = 0xff9e8e8d;
  DAT_101d237f0 = FUN_100644a94("UI::EVENT_CONFIRM_GUILD_FILTER_SEARCH");
  return;
}




long * FUN_10029f534(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  *puVar2 = &PTR_FUN_1014813a0;
  thunk_FUN_10017b958(puVar2 + 0x18,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2 + 0x18,1);
  uVar3 = FUN_1004e0150("MENU_GUILD_INVITES_NO_INVITES",0);
  FUN_1006513c0(param_1 + 0x223,uVar3);
  local_28 = DAT_101d23548;
  local_50 = FUN_10029f64c;
  plVar1 = param_1 + 1;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(plVar1,&local_50);
  local_28 = DAT_101d23544;
  local_50 = FUN_10029f654;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(plVar1,&local_50);
  local_28 = DAT_101d23540;
  local_50 = FUN_10029f698;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(plVar1,&local_50);
  return param_1;
}




void FUN_10029f64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10029f6f8(param_1,param_4);
  return;
}




void FUN_10029f654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_100644b2c(param_4);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010029f688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))(*(long **)(param_1 + 0xb8),lVar1);
    return;
  }
  return;
}




void FUN_10029f698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10029f760(param_1,param_4);
  return;
}




long * thunk_FUN_10029f534(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  *puVar2 = &PTR_FUN_1014813a0;
  thunk_FUN_10017b958(puVar2 + 0x18,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2 + 0x18,1);
  uVar3 = FUN_1004e0150("MENU_GUILD_INVITES_NO_INVITES",0);
  FUN_1006513c0(param_1 + 0x223,uVar3);
  uStack_28 = DAT_101d23548;
  pcStack_50 = FUN_10029f64c;
  plVar1 = param_1 + 1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(plVar1,&pcStack_50);
  uStack_28 = DAT_101d23544;
  pcStack_50 = FUN_10029f654;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(plVar1,&pcStack_50);
  uStack_28 = DAT_101d23540;
  pcStack_50 = FUN_10029f698;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(plVar1,&pcStack_50);
  return param_1;
}




void FUN_10029f6a4(long param_1)

{
  param_1 = param_1 + 0xc0;
  FUN_10064e47c(param_1);
  FUN_10017bcb4(param_1);
  FUN_10064e68c(0,0,param_1,8);
  return;
}




void FUN_10029f6e0(long param_1)

{
  FUN_10017bf54(param_1 + 0xc0);
  return;
}




void FUN_10029f6e8(long param_1)

{
  FUN_10017bee0(param_1 + 0xc0);
  return;
}




void FUN_10029f6f0(long param_1)

{
  FUN_10017bf04(param_1 + 0xc0);
  return;
}




void FUN_10029f6f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_40 [32];
  
  lVar1 = FUN_100644b2c(param_2);
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),lVar1);
    FUN_100644aec(auStack_40,DAT_101d237f4,0);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_10029f760(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_100644b2c(param_2);
  if (plVar1 != (long *)0x0) {
    FUN_10021a8ec(plVar1,1);
    if (*(char *)((long)plVar1 + 0x17) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    FUN_100104d5c(plVar1);
    return;
  }
  return;
}




void FUN_10029f7ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014813a0;
  FUN_10017cba8(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10029f7dc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014813a0;
  FUN_10017cba8(param_1 + 0x18);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10029f810(void)

{
  DAT_101e445a4 = 0xff;
  DAT_101e445a6 = 0xffff;
  DAT_101e445a8 = 0xffff;
  DAT_101e445aa = 0xffbc9c44;
  DAT_101e445ae = 0xff1166f2;
  DAT_101e445b2 = 0xffe0e0e0;
  DAT_101e445b6 = 0xffa0a0a0;
  DAT_101e445ba = 0xff8c8c8c;
  DAT_101e445be = 0xff322213;
  DAT_101e445c2 = 0xff091911;
  DAT_101e445c6 = 0xff170c19;
  DAT_101e445ca = 0xff241a14;
  DAT_101e445ce = 0xff14171c;
  DAT_101e445d2 = 0xff221911;
  DAT_101e445d6 = 0xff1a1416;
  DAT_101e445da = 0xff121414;
  DAT_101e445de = 0xff1a1809;
  DAT_101e445e2 = 0xff141414;
  DAT_101e445e6 = 0xff141414;
  DAT_101e445ea = 0xff2929c0;
  DAT_101e445ee = 0xff283082;
  DAT_101e445f2 = 0xff5262cc;
  DAT_101e445f6 = 0xff283082;
  DAT_101e445fa = 0xff5262cc;
  DAT_101e445fe = 0xff745c42;
  DAT_101e44602 = 0xff184155;
  DAT_101e44606 = 0xff92665e;
  DAT_101e4460a = 0xffbc9c44;
  DAT_101e4460e = 0xffbbae56;
  DAT_101e44612 = 0xff8b7b01;
  DAT_101e44616 = 0xff90b3ef;
  DAT_101e4461a = 0xff728ebe;
  DAT_101e4461e = 0xff19459d;
  DAT_101e44622 = 0xff9d877b;
  DAT_101e44626 = 0xffcbb1a3;
  DAT_101e4462a = 0xff3f6fb5;
  DAT_101e4462e = 0xffc5c5c5;
  DAT_101e44632 = 0xff4fc1f1;
  DAT_101e44636 = 0xff606060;
  DAT_101e4463a = 0xffc5ff7b;
  DAT_101e4463e = 0xff5271eb;
  DAT_101e44642 = 0xfffae076;
  DAT_101e44646 = 0xff3ac8f6;
  DAT_101e4464a = 0xffaaaaaa;
  DAT_101e4464e = 0xffe19400;
  DAT_101e44652 = 0xffe19400;
  DAT_101e44656 = 0xffe550b2;
  DAT_101e4465a = 0xfff22ae8;
  DAT_101e4465e = 0xff005ae1;
  DAT_101e44662 = 0xff1addfa;
  DAT_101e44666 = 0xff2424b3;
  DAT_101e4466a = 0xff2424b3;
  DAT_101e4466e = 0xff646464;
  DAT_101e44672 = 0xff92665e;
  DAT_101e44676 = 0xff646037;
  DAT_101e44680 = 0xff1111a1;
  DAT_101e44684 = 0xff321ee1;
  DAT_101e44688 = 0xffc8c8c8;
  DAT_101e4468c = 0xff321ee1;
  DAT_101e44698 = 0xff6259b3;
  DAT_101e4469c = 0xff506e73;
  DAT_101e446a0 = 0xff9dbf86;
  DAT_101e4467c = 0xffffffff;
  DAT_101e446a4 = 0xffa35244;
  DAT_101e44690 = 0xff7fe801;
  DAT_101e446a8 = 0xffca828e;
  DAT_101e44694 = 0xffffffff;
  DAT_101e446ac = 0xffa6a6a6;
  DAT_101e446b0 = 0xffa6a6a6;
  DAT_101e446b4 = 0xffffffff;
  DAT_101e446b8 = 0xff88ea2f;
  DAT_101e446bc = 0xff8c8c8c;
  DAT_101e446c0 = 0xffffb400;
  DAT_101e446c4 = 0xffff00ff;
  DAT_101e446c8 = 0xff00aded;
  DAT_101e446cc = 0xff33d3ff;
  DAT_101e446d0 = 0xff7fe801;
  DAT_101e446d4 = 0xff282828;
  DAT_101e446d8 = 0xfff0f0f0;
  DAT_101e446dc = 0xffa4781e;
  DAT_101e446e0 = 0xffa6654b;
  DAT_101e446e4 = 0xff93435b;
  DAT_101e446e8 = 0xff387f9c;
  DAT_101e446ec = 0xffa3781e;
  DAT_101e446f0 = 0xffffd18a;
  DAT_101e446f4 = 0xffff61f7;
  DAT_101e446f8 = 0xff5de1f2;
  DAT_101e446fc = 0xff80eaff;
  DAT_101e44700 = 0xff32e00e;
  DAT_101e44704 = 0xff5a3c10;
  DAT_101e44708 = 0xff330b03;
  DAT_101e4470c = 0xff33031d;
  DAT_101e44710 = 0xff032433;
  DAT_101e44714 = 0xff9e8e8d;
  DAT_101d237f4 = FUN_100644a94("UI::EVENT_JOINED_GUILD");
  return;
}




long * FUN_10029fee8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = 0;
  *puVar8 = &PTR_thunk_FUN_1002a04c4_1014814e8;
  puVar8 = puVar8 + 0x18;
  thunk_FUN_100655644(puVar8);
  plVar1 = param_1 + 0x43;
  thunk_FUN_1002ed128(plVar1,0);
  plVar2 = param_1 + 0x1d3;
  thunk_FUN_1002ed128(plVar2,0);
  plVar3 = param_1 + 0x363;
  thunk_FUN_1002ed128(plVar3,0);
  plVar4 = param_1 + 0x4f3;
  thunk_FUN_1002ed128(plVar4,0);
  thunk_FUN_10017b958(param_1 + 0x683,0);
  thunk_FUN_1001c397c(param_1 + 0x8d8);
  FUN_1006505b8(param_1 + 0x9ac);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x683,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100655930(puVar8,plVar1,1);
  FUN_100655930(puVar8,plVar2,1);
  FUN_100655930(puVar8,plVar3,1);
  FUN_100655930(puVar8,plVar4,1);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_NO_RESULTS",0);
  FUN_1006513c0(param_1 + 0x88e,uVar9);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_SEARCH",0);
  FUN_1002ed2b4(plVar1,puVar6,"search_small",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar1);
  uVar7 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_1002a026c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x44,&local_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_REFRESH",0);
  FUN_1002ed2b4(plVar2,puVar6,"generic_refresh",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar2);
  local_78 = uVar7;
  local_a0 = FUN_1002a027c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1d4,&local_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_INVITES",0);
  FUN_1002ed2b4(plVar3,puVar6,"generic_invite_friend",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar3);
  local_78 = uVar7;
  local_a0 = FUN_1002a028c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x364,&local_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_CREATE_NEW",0);
  FUN_1002ed2b4(plVar4,puVar6,"generic_guild",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar4);
  local_78 = uVar7;
  local_a0 = FUN_1002a029c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x4f4,&local_a0);
  FUN_1001c3fc8(param_1 + 0x8d8,"GUILD.INVITES");
  local_78 = DAT_101d23540;
  local_a0 = FUN_1002a02ac;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  return param_1;
}




long * thunk_FUN_10029fee8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = 0;
  *puVar8 = &PTR_thunk_FUN_1002a04c4_1014814e8;
  puVar8 = puVar8 + 0x18;
  thunk_FUN_100655644(puVar8);
  plVar1 = param_1 + 0x43;
  thunk_FUN_1002ed128(plVar1,0);
  plVar2 = param_1 + 0x1d3;
  thunk_FUN_1002ed128(plVar2,0);
  plVar3 = param_1 + 0x363;
  thunk_FUN_1002ed128(plVar3,0);
  plVar4 = param_1 + 0x4f3;
  thunk_FUN_1002ed128(plVar4,0);
  thunk_FUN_10017b958(param_1 + 0x683,0);
  thunk_FUN_1001c397c(param_1 + 0x8d8);
  FUN_1006505b8(param_1 + 0x9ac);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x683,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100655930(puVar8,plVar1,1);
  FUN_100655930(puVar8,plVar2,1);
  FUN_100655930(puVar8,plVar3,1);
  FUN_100655930(puVar8,plVar4,1);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_NO_RESULTS",0);
  FUN_1006513c0(param_1 + 0x88e,uVar9);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_SEARCH",0);
  FUN_1002ed2b4(plVar1,puVar6,"search_small",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar1);
  uVar7 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_1002a026c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x44,&pcStack_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_REFRESH",0);
  FUN_1002ed2b4(plVar2,puVar6,"generic_refresh",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar2);
  uStack_78 = uVar7;
  pcStack_a0 = FUN_1002a027c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1d4,&pcStack_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_INVITES",0);
  FUN_1002ed2b4(plVar3,puVar6,"generic_invite_friend",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar3);
  uStack_78 = uVar7;
  pcStack_a0 = FUN_1002a028c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x364,&pcStack_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_CREATE_NEW",0);
  FUN_1002ed2b4(plVar4,puVar6,"generic_guild",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar4);
  uStack_78 = uVar7;
  pcStack_a0 = FUN_1002a029c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x4f4,&pcStack_a0);
  FUN_1001c3fc8(param_1 + 0x8d8,"GUILD.INVITES");
  uStack_78 = DAT_101d23540;
  pcStack_a0 = FUN_1002a02ac;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  return param_1;
}

