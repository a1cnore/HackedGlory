// functions/00ad6 — 19 functions
#include "libGameKindred.h"




void FUN_00ad6160(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x3f0ccccd;
  }
  uVar1 = FUN_00efee28(uVar2,0x3f000000,FUN_0091aa80);
  FUN_00f01980(param_1 + 0xe40);
  FUN_00f022a0(param_1 + 0xe40,uVar1);
  return;
}




void FUN_00ad61b8(undefined8 *param_1)

{
  long lVar1;
  
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027d7988;
  FUN_00f0bdbc(param_1 + 0x17,0);
  lVar1 = 0;
  param_1[0x17] = &PTR_FUN_027c3260;
  do {
    FUN_00ad545c((long)param_1 + lVar1 + 0x180);
    lVar1 = lVar1 + 0xf38;
  } while (lVar1 != 0x3ce0);
  FUN_00ad545c(param_1 + 0x7cc);
  FUN_00e70510(param_1 + 0x9b6);
  FUN_00ad624c(param_1);
  return;
}




void FUN_00ad624c(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  byte local_d0 [16];
  void *local_c0;
  code *local_b8;
  long *plStack_b0;
  void *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined4 local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  plVar8 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  plVar6 = param_1 + 0x30;
  lVar7 = 4;
  do {
    FUN_00f023ec(plVar8,plVar6,1);
    lVar7 = lVar7 + -1;
    plVar6 = plVar6 + 0x1e7;
  } while (lVar7 != 0);
  plVar6 = param_1 + 0x7cc;
  FUN_00f023ec(plVar8,plVar6,1);
  uVar4 = FUN_0092ea9c();
  fVar9 = 1.4;
  uVar2 = DAT_03210c64;
  if ((uVar4 & 1) == 0) {
    fVar9 = 1.0;
  }
  lVar7 = 0;
  plVar8 = param_1;
  do {
    local_b8 = FUN_00ad6cbc;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    plVar1 = plVar8 + 0x30;
    plStack_b0 = param_1;
    local_98 = lVar7;
    local_90 = uVar2;
    FUN_009693a0(plVar8 + 0x31,&local_b8);
    FUN_00b09144(0xbf800000,plVar1);
    local_b8 = (code *)0x3f0000003f000000;
    (**(code **)(plVar8[0x30] + 0x28))(plVar1,&local_b8);
    *(float *)(plVar8 + 0x216) = fVar9;
    FUN_00ad5980(plVar1);
    lVar7 = lVar7 + 1;
    plVar8 = plVar8 + 0x1e7;
  } while (lVar7 != 4);
  plVar8 = param_1 + 0x30;
  *(float *)(param_1 + 0x216) = fVar9 * 0.73;
  FUN_00ad5980(plVar8);
  if ((*(float *)(param_1 + 0x88) != 1.0) || (*(float *)((long)param_1 + 0x444) != 1.0)) {
    lVar7 = NEON_fmov(0x3f800000,4);
    param_1[0x88] = lVar7;
    FUN_0091ada4(param_1 + 0x7e);
  }
  fVar10 = (float)(**(code **)(param_1[0x30] + 0x50))(plVar8);
  if (*(float *)(param_1 + 0x86) != fVar10 * 0.5) {
    *(float *)(param_1 + 0x86) = fVar10 * 0.5;
    FUN_0091ada4(param_1 + 0x7e);
  }
  FUN_008fa54c(&local_b8,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_008fa54c(local_d0,"generic_protip");
  uVar5 = FUN_00e6ce7c("MENU_HERO_INSPECTOR_PROTIP_LABEL",0);
  FUN_00ad5b54(plVar6,&local_b8,local_d0,uVar5);
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  local_b8 = thunk_FUN_00ad6e38;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = (void *)0x0;
  plStack_b0 = param_1;
  local_90 = uVar2;
  FUN_009693a0(param_1 + 0x7cd,&local_b8);
  FUN_00b09144(0xbf800000,plVar6);
  if ((*(float *)(param_1 + 0x7d6) != 0.5) || (*(float *)((long)param_1 + 0x3eb4) != 0.5)) {
    param_1[0x7d6] = 0x3f0000003f000000;
    FUN_0091ada4(plVar6);
  }
  *(float *)(param_1 + 0x9b2) = fVar9 * 0.73;
  FUN_00ad5980(plVar6);
  plVar6 = param_1 + 0x81a;
  if ((*(float *)(param_1 + 0x824) != 0.0) || (*(float *)((long)param_1 + 0x4124) != 1.0)) {
    param_1[0x824] = 0x3f80000000000000;
    FUN_0091ada4(plVar6);
  }
  uVar4 = FUN_0092ea9c();
  uVar2 = 0x43520000;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0x43160000;
  }
  FUN_00f0db64(uVar2,0,0x3f800000,plVar6);
  fVar9 = (float)(**(code **)(param_1[0x30] + 0x50))(plVar8);
  if (*(float *)(param_1 + 0x822) != fVar9 * -0.5) {
    *(float *)(param_1 + 0x822) = fVar9 * -0.5;
    FUN_0091ada4(plVar6);
  }
  FUN_00ad6b64(param_1);
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad65a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027d7988;
  if ((void *)param_1[0x9b7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9b7]);
    param_1[0x9b7] = 0;
    param_1[0x9b6] = 0;
  }
  FUN_00ad6628(param_1 + 0x7cc);
  puVar1 = param_1 + 0x5e5;
  lVar2 = -0x3ce0;
  do {
    FUN_00ad6628(puVar1);
    lVar2 = lVar2 + 0xf38;
    puVar1 = puVar1 + -0x1e7;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ad6628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d7808;
  param_1[0x1c8] = &PTR_FUN_028266f0;
  param_1[0x1df] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1e2);
  FUN_00f13d08(param_1 + 0x1c8);
  param_1[0x1aa] = &PTR_FUN_028266f0;
  param_1[0x1c1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1c4);
  FUN_00f13d08(param_1 + 0x1aa);
  param_1[0x18c] = &PTR_FUN_028266f0;
  param_1[0x1a3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a6);
  FUN_00f13d08(param_1 + 0x18c);
  param_1[0x16e] = &PTR_FUN_028266f0;
  param_1[0x185] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x188);
  FUN_00f13d08(param_1 + 0x16e);
  param_1[0x150] = &PTR_FUN_028266f0;
  param_1[0x167] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x16a);
  FUN_00f13d08(param_1 + 0x150);
  FUN_00f01868(param_1 + 0x13f);
  param_1[0x121] = &PTR_FUN_028266f0;
  param_1[0x138] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13b);
  FUN_00f13d08(param_1 + 0x121);
  param_1[0x103] = &PTR_FUN_028266f0;
  param_1[0x11a] = &PTR_FUN_02826850;
  param_1[0x74] = &PTR_FUN_027dc7d8;
  FUN_00f0a79c(param_1 + 0x11d);
  FUN_00f13d08(param_1 + 0x103);
  param_1[0xe5] = &PTR_FUN_028266f0;
  param_1[0xfc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xff);
  FUN_00f13d08(param_1 + 0xe5);
  param_1[199] = &PTR_FUN_028266f0;
  param_1[0xde] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe1);
  FUN_00f13d08(param_1 + 199);
  param_1[0xa9] = &PTR_FUN_028266f0;
  param_1[0xc0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc3);
  FUN_00f13d08(param_1 + 0xa9);
  param_1[0x8b] = &PTR_FUN_028266f0;
  param_1[0xa2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa5);
  FUN_00f13d08(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x74);
  FUN_00f0d3a4(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00ad67d8(void *param_1)

{
  FUN_00ad65a8();
  operator_delete(param_1);
  return;
}




void FUN_00ad67fc(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x10b4);
    lVar2 = 4;
    do {
      *puVar1 = 0;
      (**(code **)(*(long *)(puVar1 + -0xf34) + 0x150))(puVar1 + -0xf34,1);
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 0xf38;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_00ad6848(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x10b4);
  lVar2 = 4;
  do {
    *puVar1 = 0;
    (**(code **)(*(long *)(puVar1 + -0xf34) + 0x150))(puVar1 + -0xf34,1);
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 0xf38;
  } while (lVar2 != 0);
  return;
}




void FUN_00ad6890(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  byte local_190 [16];
  void *local_180;
  undefined8 local_178;
  void *local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  void *local_140;
  undefined1 auStack_130 [128];
  undefined1 auStack_b0 [32];
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c(param_2[10],0);
  FUN_00910394(param_1 + 0x4db0,uVar2);
  lVar3 = FUN_00ce9cb8(*param_2);
  FUN_00e6a8a8(auStack_b0,"build://Splash_%s.png",param_2[2]);
  FUN_00ce9d88(*param_2,param_1 + 0x4d98,3);
  FUN_00e6a8a8(auStack_130,PTR_s_build___HUDPartsHero__s_png_02be3470,*(undefined8 *)(lVar3 + 0x20))
  ;
  FUN_008fa54c(&local_150,auStack_130);
  FUN_008fa54c(local_168,"perk_icon");
  uVar2 = FUN_00e6ce7c("MENU_HERO_INSPECTOR_PERK_LABEL",0);
  FUN_00ad5b54(param_1 + 0x180,&local_150,local_168,uVar2);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150 & 1) != 0) {
    operator_delete(local_140);
  }
  uVar4 = FUN_0092ea9c();
  uVar8 = 0x43520000;
  if ((uVar4 & 1) == 0) {
    uVar8 = 0x43160000;
  }
  FUN_00f0db64(uVar8,0,0x3f800000,param_1 + 0x3f0);
  lVar3 = 0x9b3;
  lVar6 = param_1 + 0x10b8;
  do {
    FUN_00e6a8a8(&local_150,"ability_icon_%d",*(undefined4 *)(*(long *)(param_1 + lVar3 * 8) + 100))
    ;
    FUN_00e70510(&local_178);
    iVar7 = (int)lVar3;
    if (iVar7 == 0x9b5) {
      pcVar5 = "MENU_HERO_INSPECTOR_ULTIMATE_LABEL";
LAB_00ad6a54:
      uVar2 = FUN_00e6ce7c(pcVar5,0);
      FUN_00910394(&local_178,uVar2);
    }
    else {
      pcVar5 = "MENU_HERO_INSPECTOR_ABILITY_B_LABEL";
      if ((iVar7 == 0x9b4) || (pcVar5 = "MENU_HERO_INSPECTOR_ABILITY_A_LABEL", iVar7 == 0x9b3))
      goto LAB_00ad6a54;
    }
    FUN_008fa54c(local_168,auStack_130);
    FUN_008fa54c(local_190,&local_150);
    FUN_00ad5b54(lVar6,local_168,local_190,&local_178);
    if ((local_190[0] & 1) != 0) {
      operator_delete(local_180);
    }
    if ((local_168[0] & 1) != 0) {
      operator_delete(local_158);
    }
    uVar4 = FUN_0092ea9c();
    uVar8 = 0x430c0000;
    if ((uVar4 & 1) == 0) {
      uVar8 = 0x42c80000;
    }
    FUN_00f0db64(uVar8,0,0x3f800000,lVar6 + 0x270);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
    lVar3 = lVar3 + 1;
    lVar6 = lVar6 + 0xf38;
    if (lVar3 == 0x9b6) {
      local_150 = (byte)*(undefined4 *)((long)param_2 + 0x6c);
      local_14f = (undefined1)*(undefined4 *)(param_2 + 0xe);
      local_14e = (undefined1)*(undefined4 *)((long)param_2 + 0x74);
      local_14d = (undefined1)*(undefined4 *)(param_2 + 0xf);
      FUN_00b12b64(0x3f800000,param_1 + 0x4200,&local_150);
      FUN_00ad6b64(param_1);
      if (*(long *)(lVar1 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_00ad6b64(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(param_3 + 0x180);
  lVar3 = 4;
  do {
    (**(code **)(*plVar2 + 0x48))(plVar2);
    if (*(float *)((long)plVar2 + 0x44) != param_2 * -0.5) {
      *(float *)((long)plVar2 + 0x44) = param_2 * -0.5;
      FUN_0091ada4(plVar2);
    }
    lVar3 = lVar3 + -1;
    plVar2 = plVar2 + 0x1e7;
  } while (lVar3 != 0);
  FUN_00f13e54(param_3 + 0x3e60);
  if (*(float *)(param_3 + 0x3ea4) != param_2 * -0.5) {
    *(float *)(param_3 + 0x3ea4) = param_2 * -0.5;
    FUN_0091ada4(param_3 + 0x3e60);
  }
  uVar4 = 0;
  lVar3 = param_3 + 0xb8;
  FUN_00f0bc10(0,0,0x41d00000,&local_58);
  FUN_00f0c168(lVar3,&local_58);
  (**(code **)(*(long *)(param_3 + 0xb8) + 0x90))(lVar3);
  local_58 = FUN_00f13e54(lVar3);
  uStack_54 = uVar4;
  FUN_00f13f18(param_3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad6c74(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (param_2 & 1) << 4;
  lVar3 = -0x3ce0;
  do {
    lVar1 = param_1 + 0x204 + lVar3;
    lVar3 = lVar3 + 0xf38;
    *(uint *)(lVar1 + 0x3ce0) = *(uint *)(lVar1 + 0x3ce0) & 0xffffffef | uVar2;
  } while (lVar3 != 0);
  *(uint *)(param_1 + 0x3ee4) = *(uint *)(param_1 + 0x3ee4) & 0xffffffef | uVar2;
  return;
}




long FUN_00ad6cb4(long param_1)

{
  return param_1 + 0xb8;
}




void FUN_00ad6cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ad6cc8(param_1,param_2,param_5);
  return;
}




void thunk_FUN_00ad6e38(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **ppuStack_130;
  undefined1 auStack_128 [40];
  long lStack_100;
  undefined8 uStack_e0;
  void *pvStack_d8;
  byte bStack_d0;
  void *pvStack_c0;
  undefined4 uStack_b0;
  float fStack_ac;
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
  thunk_FUN_00e7051c(&uStack_80,param_3 + 0x4db0);
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
  lStack_100 = param_3 + 0x3e60;
  uStack_88 = 0;
  FUN_00f01c20();
  fStack_ac = -param_2;
  uStack_b0 = 0;
  uStack_a0 = 0x3f7ae148;
  uVar2 = FUN_0092ea9c();
  uStack_9c = 0x44e10000;
  if ((uVar2 & 1) == 0) {
    uStack_9c = 0x44960000;
  }
  uVar3 = FUN_009b8d90();
  FUN_008fa54c(&uStack_80,"protip");
  FUN_009badc0(uVar3,&uStack_80,&ppuStack_130);
  if ((uStack_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,bStack_70));
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




void FUN_00ad6cc8(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00f048a4("UI::EVENT_HERO_ABILITY_SELECT");
  FUN_00f048e0(auStack_78,uVar5,param_3);
  FUN_00f04760(param_1,auStack_78,1);
  if (param_3 < 4) {
    pcVar1 = (char *)(param_1 + (long)param_3 * 0xf38 + 0x10b4);
    cVar2 = *pcVar1;
    puVar6 = (undefined1 *)(param_1 + 0x10b4);
    lVar7 = 4;
    do {
      *puVar6 = 0;
      (**(code **)(*(long *)(puVar6 + -0xf34) + 0x150))(puVar6 + -0xf34,1);
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 0xf38;
    } while (lVar7 != 0);
    bVar4 = cVar2 == '\0';
    param_1 = param_1 + (long)param_3 * 0xf38;
    *pcVar1 = bVar4;
    (**(code **)(*(long *)(param_1 + 0x180) + 0x150))(param_1 + 0x180,!bVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad6dc8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_HERO_ABILITY_EMPTY_SELECT");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad6e38(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **local_130;
  undefined1 auStack_128 [40];
  long local_100;
  undefined8 local_e0;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  undefined4 local_b0;
  float local_ac;
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
  thunk_FUN_00e7051c(&local_80,param_3 + 0x4db0);
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
  local_100 = param_3 + 0x3e60;
  local_88 = 0;
  FUN_00f01c20();
  local_ac = -param_2;
  local_b0 = 0;
  local_a0 = 0x3f7ae148;
  uVar2 = FUN_0092ea9c();
  local_9c = 0x44e10000;
  if ((uVar2 & 1) == 0) {
    local_9c = 0x44960000;
  }
  uVar3 = FUN_009b8d90();
  FUN_008fa54c(&local_80,"protip");
  FUN_009badc0(uVar3,&local_80,&local_130);
  if ((local_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,local_70));
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




void FUN_00ad6fc0(void *param_1)

{
  FUN_00ad6628();
  operator_delete(param_1);
  return;
}




void FUN_00ad6fe4(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027d7ad0;
  FUN_00f0bdbc(param_1 + 0x17,0);
  param_1[0x17] = &PTR_FUN_027c3260;
  FUN_00f0e4a8(param_1 + 0x30);
  FUN_00f0d160(param_1 + 0x4e);
  FUN_00f0d160(param_1 + 0x74);
  FUN_00b09580(param_1 + 0x9a);
  FUN_00ad7058(param_1);
  return;
}

