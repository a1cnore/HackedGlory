// functions/10028 — 212 functions
#include "GameKindred.h"




void thunk_FUN_1002841f0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x6b680;
  uVar3 = FUN_1001afee4(param_1 + 0x69990);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100282ee8(param_1);
  return;
}




void thunk_FUN_10028425c(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x6f2c0;
  uVar3 = FUN_1001afee4(param_1 + 0x6d5d0);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100282ee8(param_1);
  return;
}




void thunk_FUN_1002842c8(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  lVar1 = param_1 + 0x71210;
  FUN_10018577c(lVar1);
  uVar4 = FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x71580) & 1) * 0x130 + 0x1e0);
  lVar2 = param_1 + 0x799a0;
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
  FUN_100282ee8(param_1);
  return;
}




void FUN_10028033c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002843ac(param_1,param_4,param_5);
  return;
}




void thunk_FUN_100284428(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100642bc8(param_1 + 0x64d68);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_100642bc8(param_1 + 0x68b70), (uVar1 & 1) == 0)) {
    FUN_100282aa0(param_1,0);
    return;
  }
  return;
}




void FUN_10028034c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100284480(param_1,param_2,param_5);
  return;
}




void thunk_FUN_1002847f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvStack_138;
  void *pvStack_130;
  undefined7 uStack_128;
  char cStack_121;
  char cStack_111;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined1 auStack_100 [8];
  void *pvStack_f8;
  undefined1 auStack_f0 [8];
  void *pvStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  code *pcStack_c0;
  long lStack_b0;
  undefined8 uStack_90;
  void *pvStack_88;
  void *pvStack_80;
  char cStack_69;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_38;
  
  thunk_FUN_1001cd434(&ppuStack_e0);
  uVar2 = FUN_1004e0150("MAIN_SEASON_GUILD_CREATION_TOOLTIP",0);
  thunk_FUN_1004e439c(auStack_f0,uVar2);
  FUN_1004e3120(&pvStack_138,"[SEASON_NAME]");
  FUN_1000f0f78(auStack_100,0,0,0);
  FUN_1004e3bc4(auStack_f0,0,&pvStack_138,auStack_100);
  if (pvStack_f8 != (void *)0x0) {
    operator_delete__(pvStack_f8);
  }
  if (pvStack_130 != (void *)0x0) {
    operator_delete__(pvStack_130);
  }
  thunk_FUN_1004e439c(&pvStack_138,auStack_f0);
  FUN_10003330c(&uStack_128,&DAT_101d91198);
  uStack_110 = 1;
  uStack_10c = 0x41a00000;
  FUN_10003c048(auStack_d8,&pvStack_138);
  if (cStack_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,uStack_128));
  }
  if (pvStack_130 != (void *)0x0) {
    operator_delete__(pvStack_130);
  }
  lStack_b0 = param_1 + 0x794b0;
  uStack_38 = 2;
  uStack_50 = 0x3dcccccd;
  iVar1 = FUN_100126c88();
  uStack_4c = 0x442f0000;
  if (iVar1 == 0) {
    uStack_4c = 0x43fa0000;
  }
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_MORE_INFO",0);
  FUN_1000153b4(&uStack_90,uVar2);
  pcStack_c0 = FUN_1002849f4;
  lStack_c8 = param_1;
  FUN_10001549c(&pvStack_138,"guildProfileSeasonLabel");
  FUN_1001cefb8(param_1 + 0x79880,&pvStack_138,&ppuStack_e0);
  if (cStack_121 < '\0') {
    operator_delete(pvStack_138);
  }
  if (pvStack_e8 != (void *)0x0) {
    operator_delete__(pvStack_e8);
  }
  ppuStack_e0 = &PTR_FUN_1014666e0;
  if (cStack_69 < '\0') {
    operator_delete(pvStack_80);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




void FUN_100280358(long *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_3c;
  float local_38;
  float local_34;
  
  uVar2 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar2,&local_34,&local_38,&local_3c);
  fVar4 = (local_34 - local_3c) * 0.5;
  fVar3 = local_38 * 0.5;
  bVar1 = false;
  if ((*(float *)(param_1 + 0xc9a4) == fVar4) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x64d24)) && !NAN(fVar3))) {
    bVar1 = *(float *)((long)param_1 + 0x64d24) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0xc9a4) = fVar4;
    *(float *)((long)param_1 + 0x64d24) = fVar3;
    FUN_1000200a0(param_1 + 0xc99c);
    fVar3 = local_38 * 0.5;
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0xd165) == fVar4) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x68b2c)) && !NAN(fVar3))) {
    bVar1 = *(float *)((long)param_1 + 0x68b2c) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0xd165) = fVar4;
    *(float *)((long)param_1 + 0x68b2c) = fVar3;
    FUN_1000200a0(param_1 + 0xd15d);
  }
  if (*(float *)((long)param_1 + 0x64dac) != 0.0) {
    *(undefined4 *)((long)param_1 + 0x64dac) = 0;
    FUN_1000200a0(param_1 + 0xc9ad);
  }
  if (*(float *)((long)param_1 + 0x68bb4) != 100.0) {
    *(undefined4 *)((long)param_1 + 0x68bb4) = 0x42c80000;
    FUN_1000200a0(param_1 + 0xd16e);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_100280478(undefined8 param_1,long param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_10015d3ec();
    FUN_100166fd8();
  }
  iVar7 = FUN_1001312b0();
  if (((iVar7 != 0) && (param_3 != 0)) && (param_5 != 0)) {
    FUN_100104bd0();
  }
  uVar8 = FUN_10064081c(param_1);
  bVar6 = param_3 == 0;
  uVar2 = 0x3f800000;
  if (bVar6) {
    uVar2 = 0;
  }
  uVar3 = 0x3eb33333;
  if (bVar6) {
    uVar3 = 0x3e19999a;
  }
  uVar4 = 0x3f800000;
  if (bVar6) {
    uVar4 = 0x3f666666;
  }
  uVar5 = 0;
  if (bVar6) {
    uVar5 = 0xc2c80000;
  }
  uVar9 = FUN_100640840(uVar2,uVar3,FUN_10001f160);
  FUN_100640db8(uVar4,uVar4,uVar3,FUN_10001f160);
  FUN_1006408f4(0,uVar5,uVar3,FUN_10001f160);
  uVar10 = FUN_10001f4d4();
  FUN_10063f2a4(uVar10,uVar9);
  lVar1 = param_2 + 0x64d68;
  FUN_100642324(lVar1);
  FUN_100642b7c(lVar1,uVar8);
  if (param_3 != 0) {
    *(uint *)(param_2 + 0x64dec) = *(uint *)(param_2 + 0x64dec) | 4;
    *(uint *)(param_2 + 0x404) = *(uint *)(param_2 + 0x404) & 0xfffffffb;
    return;
  }
  uVar8 = FUN_100047300();
  FUN_100642b14(lVar1,uVar8);
  return;
}




void FUN_100280618(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100280618_10147e408;
  param_1[0x6d] = &PTR_FUN_10147e5c8;
  FUN_100281074();
  if ((void *)param_1[0xf335] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf335]);
    param_1[0xf335] = 0;
    param_1[0xf334] = 0;
  }
  if (*(char *)((long)param_1 + 0x7999f) < '\0') {
    operator_delete((void *)param_1[0xf331]);
  }
  if (*(char *)((long)param_1 + 0x79987) < '\0') {
    operator_delete((void *)param_1[0xf32e]);
  }
  thunk_FUN_1001cec4c(param_1 + 0xf310);
  param_1[0xf285] = &PTR_FUN_1014653b8;
  param_1[0xf2e4] = &PTR_FUN_10145eb78;
  param_1[0xf2fb] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0xf30c] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf30c]);
    param_1[0xf30c] = 0;
    param_1[0xf30b] = 0;
  }
  FUN_100651068(param_1 + 0xf2e4);
  thunk_FUN_100651068(param_1 + 0xf2be);
  FUN_10064221c(param_1 + 0xf2ad);
  thunk_FUN_10064e2bc(param_1 + 0xf296);
  FUN_10064221c(param_1 + 0xf285);
  param_1[0xf267] = &PTR_FUN_1014a7108;
  param_1[0xf27e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf281);
  FUN_10064e2bc(param_1 + 0xf267);
  thunk_FUN_100651068(param_1 + 0xf241);
  thunk_FUN_10064e2bc(param_1 + 0xf22a);
  FUN_10003bd40(param_1 + 0xef73);
  param_1[0xef55] = &PTR_FUN_1014a7108;
  param_1[0xef6c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xef6f);
  FUN_10064e2bc(param_1 + 0xef55);
  thunk_FUN_100651068(param_1 + 0xef2f);
  thunk_FUN_10064e2bc(param_1 + 0xef18);
  FUN_10003bd40(param_1 + 0xec61);
  FUN_10003bd40(param_1 + 0xe9aa);
  FUN_10003bd40(param_1 + 0xe6f3);
  FUN_10064221c(param_1 + 0xe6e2);
  thunk_FUN_100651068(param_1 + 0xe6bc);
  param_1[0xe69e] = &PTR_FUN_1014a7108;
  param_1[0xe6b5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe6b8);
  FUN_10064e2bc(param_1 + 0xe69e);
  thunk_FUN_10064e2bc(param_1 + 0xe687);
  thunk_FUN_100651068(param_1 + 0xe661);
  param_1[0xe643] = &PTR_FUN_1014a7108;
  param_1[0xe65a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe65d);
  FUN_10064e2bc(param_1 + 0xe643);
  thunk_FUN_10064e2bc(param_1 + 0xe62c);
  thunk_FUN_100651068(param_1 + 0xe606);
  thunk_FUN_100651068(param_1 + 0xe5e0);
  param_1[0xe242] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xe5da] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe5da]);
    param_1[0xe5da] = 0;
    param_1[0xe5d9] = 0;
  }
  if ((void *)param_1[0xe5d8] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe5d8]);
    param_1[0xe5d8] = 0;
    param_1[0xe5d7] = 0;
  }
  if ((void *)param_1[0xe5d6] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe5d6]);
    param_1[0xe5d6] = 0;
    param_1[0xe5d5] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xe5af);
  FUN_10064e2bc(param_1 + 0xe594);
  FUN_10064e2bc(param_1 + 0xe579);
  FUN_10003bd40(param_1 + 0xe2c2);
  FUN_100186088(param_1 + 0xe242);
  thunk_FUN_100651068(param_1 + 0xe21c);
  thunk_FUN_100651068(param_1 + 0xe1f6);
  param_1[0xde58] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xe1f0] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe1f0]);
    param_1[0xe1f0] = 0;
    param_1[0xe1ef] = 0;
  }
  if ((void *)param_1[0xe1ee] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe1ee]);
    param_1[0xe1ee] = 0;
    param_1[0xe1ed] = 0;
  }
  if ((void *)param_1[0xe1ec] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe1ec]);
    param_1[0xe1ec] = 0;
    param_1[0xe1eb] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xe1c5);
  FUN_10064e2bc(param_1 + 0xe1aa);
  FUN_10064e2bc(param_1 + 0xe18f);
  FUN_10003bd40(param_1 + 0xded8);
  FUN_100186088(param_1 + 0xde58);
  param_1[0xdaba] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xde52] != (void *)0x0) {
    operator_delete__((void *)param_1[0xde52]);
    param_1[0xde52] = 0;
    param_1[0xde51] = 0;
  }
  if ((void *)param_1[0xde50] != (void *)0x0) {
    operator_delete__((void *)param_1[0xde50]);
    param_1[0xde50] = 0;
    param_1[0xde4f] = 0;
  }
  if ((void *)param_1[0xde4e] != (void *)0x0) {
    operator_delete__((void *)param_1[0xde4e]);
    param_1[0xde4e] = 0;
    param_1[0xde4d] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xde27);
  FUN_10064e2bc(param_1 + 0xde0c);
  FUN_10064e2bc(param_1 + 0xddf1);
  FUN_10003bd40(param_1 + 0xdb3a);
  FUN_100186088(param_1 + 0xdaba);
  thunk_FUN_100651068(param_1 + 0xda94);
  thunk_FUN_100651068(param_1 + 0xda6e);
  param_1[0xd6d0] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xda68] != (void *)0x0) {
    operator_delete__((void *)param_1[0xda68]);
    param_1[0xda68] = 0;
    param_1[0xda67] = 0;
  }
  if ((void *)param_1[0xda66] != (void *)0x0) {
    operator_delete__((void *)param_1[0xda66]);
    param_1[0xda66] = 0;
    param_1[0xda65] = 0;
  }
  if ((void *)param_1[0xda64] != (void *)0x0) {
    operator_delete__((void *)param_1[0xda64]);
    param_1[0xda64] = 0;
    param_1[0xda63] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xda3d);
  FUN_10064e2bc(param_1 + 0xda22);
  FUN_10064e2bc(param_1 + 0xda07);
  FUN_10003bd40(param_1 + 0xd750);
  FUN_100186088(param_1 + 0xd6d0);
  param_1[0xd332] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xd6ca] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd6ca]);
    param_1[0xd6ca] = 0;
    param_1[0xd6c9] = 0;
  }
  if ((void *)param_1[0xd6c8] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd6c8]);
    param_1[0xd6c8] = 0;
    param_1[0xd6c7] = 0;
  }
  if ((void *)param_1[0xd6c6] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd6c6]);
    param_1[0xd6c6] = 0;
    param_1[0xd6c5] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xd69f);
  FUN_10064e2bc(param_1 + 0xd684);
  FUN_10064e2bc(param_1 + 0xd669);
  FUN_10003bd40(param_1 + 0xd3b2);
  FUN_100186088(param_1 + 0xd332);
  thunk_FUN_100651068(param_1 + 0xd30c);
  thunk_FUN_100651068(param_1 + 0xd2e6);
  FUN_10064221c(param_1 + 0xd2d5);
  param_1[0xd2b7] = &PTR_FUN_1014a7108;
  param_1[0xd2ce] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd2d1);
  FUN_10064e2bc(param_1 + 0xd2b7);
  param_1[0xd299] = &PTR_FUN_1014a7108;
  param_1[0xd2b0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd2b3);
  FUN_10064e2bc(param_1 + 0xd299);
  thunk_FUN_100651068(param_1 + 0xd273);
  param_1[0xd255] = &PTR_FUN_1014a7108;
  param_1[0xd26c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd26f);
  FUN_10064e2bc(param_1 + 0xd255);
  param_1[0xd237] = &PTR_FUN_1014a7108;
  param_1[0xd24e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd251);
  FUN_10064e2bc(param_1 + 0xd237);
  FUN_10064221c(param_1 + 0xd226);
  thunk_FUN_100530784(param_1 + 0xd17f);
  FUN_10064221c(param_1 + 0xd16e);
  FUN_10064221c(param_1 + 0xd15d);
  FUN_100285020(param_1 + 0xce0a);
  if ((void *)param_1[0xce09] != (void *)0x0) {
    operator_delete__((void *)param_1[0xce09]);
    param_1[0xce09] = 0;
    param_1[0xce08] = 0;
  }
  param_1[0xcdea] = &PTR_FUN_1014a7108;
  param_1[0xce01] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xce04);
  FUN_10064e2bc(param_1 + 0xcdea);
  thunk_FUN_100530784(param_1 + 0xcd43);
  thunk_FUN_10064e2bc(param_1 + 0xcd2c);
  param_1[0xcd0e] = &PTR_FUN_1014a7108;
  param_1[0xcd25] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcd28);
  FUN_10064e2bc(param_1 + 0xcd0e);
  thunk_FUN_100651068(param_1 + 0xcce8);
  param_1[0xccca] = &PTR_FUN_1014a7108;
  param_1[0xcce1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcce4);
  FUN_10064e2bc(param_1 + 0xccca);
  param_1[0xccac] = &PTR_FUN_1014a7108;
  param_1[0xccc3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xccc6);
  FUN_10064e2bc(param_1 + 0xccac);
  FUN_10003bd40(param_1 + 0xc9f5);
  thunk_FUN_100651068(param_1 + 0xc9cf);
  FUN_10064221c(param_1 + 0xc9be);
  FUN_10064221c(param_1 + 0xc9ad);
  FUN_10064221c(param_1 + 0xc99c);
  thunk_FUN_10064e2bc(param_1 + 0xc985);
  param_1[0xc96d] = &PTR_FUN_10146bab8;
  param_1[0xc96f] = &PTR_FUN_10146bb18;
  thunk_FUN_10001653c(param_1 + 0xc980);
  if (*(char *)((long)param_1 + 0x64bef) < '\0') {
    operator_delete((void *)param_1[0xc97b]);
  }
  if (*(char *)((long)param_1 + 0x64bd7) < '\0') {
    operator_delete((void *)param_1[0xc978]);
  }
  if (*(char *)((long)param_1 + 0x64bbf) < '\0') {
    operator_delete((void *)param_1[0xc975]);
  }
  if (*(char *)((long)param_1 + 0x64ba7) < '\0') {
    operator_delete((void *)param_1[0xc972]);
  }
  FUN_10014f51c(param_1 + 0xc96f);
  param_1[0xc96d] = &PTR____cxa_pure_virtual_10146beb0;
  if ((long *)param_1[0xc96e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc96e] + 8))();
  }
  param_1[0xc96e] = 0;
  param_1[0xc94f] = &PTR_FUN_1014a7108;
  param_1[0xc966] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc969);
  FUN_10064e2bc(param_1 + 0xc94f);
  thunk_FUN_10064e2bc(param_1 + 0xc938);
  thunk_FUN_10023bbe4(param_1 + 0x70);
  FUN_10014f51c(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}




void FUN_100281074(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (uint *)(param_1 + 0x67040);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x67048);
      plVar2 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        lVar4 = *(long *)(param_1 + 0x67048);
        uVar3 = *puVar1;
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (*(long *)(param_1 + 0x67048) != 0) {
    *puVar1 = 0;
  }
  return;
}




void thunk_FUN_100285020(void)

{
  FUN_100285020();
  return;
}




void thunk_FUN_100280618(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100280618_10147e408;
  param_1[0x6d] = &PTR_FUN_10147e5c8;
  FUN_100281074();
  if ((void *)param_1[0xf335] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf335]);
    param_1[0xf335] = 0;
    param_1[0xf334] = 0;
  }
  if (*(char *)((long)param_1 + 0x7999f) < '\0') {
    operator_delete((void *)param_1[0xf331]);
  }
  if (*(char *)((long)param_1 + 0x79987) < '\0') {
    operator_delete((void *)param_1[0xf32e]);
  }
  thunk_FUN_1001cec4c(param_1 + 0xf310);
  param_1[0xf285] = &PTR_FUN_1014653b8;
  param_1[0xf2e4] = &PTR_FUN_10145eb78;
  param_1[0xf2fb] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0xf30c] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf30c]);
    param_1[0xf30c] = 0;
    param_1[0xf30b] = 0;
  }
  FUN_100651068(param_1 + 0xf2e4);
  thunk_FUN_100651068(param_1 + 0xf2be);
  FUN_10064221c(param_1 + 0xf2ad);
  thunk_FUN_10064e2bc(param_1 + 0xf296);
  FUN_10064221c(param_1 + 0xf285);
  param_1[0xf267] = &PTR_FUN_1014a7108;
  param_1[0xf27e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf281);
  FUN_10064e2bc(param_1 + 0xf267);
  thunk_FUN_100651068(param_1 + 0xf241);
  thunk_FUN_10064e2bc(param_1 + 0xf22a);
  FUN_10003bd40(param_1 + 0xef73);
  param_1[0xef55] = &PTR_FUN_1014a7108;
  param_1[0xef6c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xef6f);
  FUN_10064e2bc(param_1 + 0xef55);
  thunk_FUN_100651068(param_1 + 0xef2f);
  thunk_FUN_10064e2bc(param_1 + 0xef18);
  FUN_10003bd40(param_1 + 0xec61);
  FUN_10003bd40(param_1 + 0xe9aa);
  FUN_10003bd40(param_1 + 0xe6f3);
  FUN_10064221c(param_1 + 0xe6e2);
  thunk_FUN_100651068(param_1 + 0xe6bc);
  param_1[0xe69e] = &PTR_FUN_1014a7108;
  param_1[0xe6b5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe6b8);
  FUN_10064e2bc(param_1 + 0xe69e);
  thunk_FUN_10064e2bc(param_1 + 0xe687);
  thunk_FUN_100651068(param_1 + 0xe661);
  param_1[0xe643] = &PTR_FUN_1014a7108;
  param_1[0xe65a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe65d);
  FUN_10064e2bc(param_1 + 0xe643);
  thunk_FUN_10064e2bc(param_1 + 0xe62c);
  thunk_FUN_100651068(param_1 + 0xe606);
  thunk_FUN_100651068(param_1 + 0xe5e0);
  param_1[0xe242] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xe5da] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe5da]);
    param_1[0xe5da] = 0;
    param_1[0xe5d9] = 0;
  }
  if ((void *)param_1[0xe5d8] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe5d8]);
    param_1[0xe5d8] = 0;
    param_1[0xe5d7] = 0;
  }
  if ((void *)param_1[0xe5d6] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe5d6]);
    param_1[0xe5d6] = 0;
    param_1[0xe5d5] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xe5af);
  FUN_10064e2bc(param_1 + 0xe594);
  FUN_10064e2bc(param_1 + 0xe579);
  FUN_10003bd40(param_1 + 0xe2c2);
  FUN_100186088(param_1 + 0xe242);
  thunk_FUN_100651068(param_1 + 0xe21c);
  thunk_FUN_100651068(param_1 + 0xe1f6);
  param_1[0xde58] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xe1f0] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe1f0]);
    param_1[0xe1f0] = 0;
    param_1[0xe1ef] = 0;
  }
  if ((void *)param_1[0xe1ee] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe1ee]);
    param_1[0xe1ee] = 0;
    param_1[0xe1ed] = 0;
  }
  if ((void *)param_1[0xe1ec] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe1ec]);
    param_1[0xe1ec] = 0;
    param_1[0xe1eb] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xe1c5);
  FUN_10064e2bc(param_1 + 0xe1aa);
  FUN_10064e2bc(param_1 + 0xe18f);
  FUN_10003bd40(param_1 + 0xded8);
  FUN_100186088(param_1 + 0xde58);
  param_1[0xdaba] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xde52] != (void *)0x0) {
    operator_delete__((void *)param_1[0xde52]);
    param_1[0xde52] = 0;
    param_1[0xde51] = 0;
  }
  if ((void *)param_1[0xde50] != (void *)0x0) {
    operator_delete__((void *)param_1[0xde50]);
    param_1[0xde50] = 0;
    param_1[0xde4f] = 0;
  }
  if ((void *)param_1[0xde4e] != (void *)0x0) {
    operator_delete__((void *)param_1[0xde4e]);
    param_1[0xde4e] = 0;
    param_1[0xde4d] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xde27);
  FUN_10064e2bc(param_1 + 0xde0c);
  FUN_10064e2bc(param_1 + 0xddf1);
  FUN_10003bd40(param_1 + 0xdb3a);
  FUN_100186088(param_1 + 0xdaba);
  thunk_FUN_100651068(param_1 + 0xda94);
  thunk_FUN_100651068(param_1 + 0xda6e);
  param_1[0xd6d0] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xda68] != (void *)0x0) {
    operator_delete__((void *)param_1[0xda68]);
    param_1[0xda68] = 0;
    param_1[0xda67] = 0;
  }
  if ((void *)param_1[0xda66] != (void *)0x0) {
    operator_delete__((void *)param_1[0xda66]);
    param_1[0xda66] = 0;
    param_1[0xda65] = 0;
  }
  if ((void *)param_1[0xda64] != (void *)0x0) {
    operator_delete__((void *)param_1[0xda64]);
    param_1[0xda64] = 0;
    param_1[0xda63] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xda3d);
  FUN_10064e2bc(param_1 + 0xda22);
  FUN_10064e2bc(param_1 + 0xda07);
  FUN_10003bd40(param_1 + 0xd750);
  FUN_100186088(param_1 + 0xd6d0);
  param_1[0xd332] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xd6ca] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd6ca]);
    param_1[0xd6ca] = 0;
    param_1[0xd6c9] = 0;
  }
  if ((void *)param_1[0xd6c8] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd6c8]);
    param_1[0xd6c8] = 0;
    param_1[0xd6c7] = 0;
  }
  if ((void *)param_1[0xd6c6] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd6c6]);
    param_1[0xd6c6] = 0;
    param_1[0xd6c5] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xd69f);
  FUN_10064e2bc(param_1 + 0xd684);
  FUN_10064e2bc(param_1 + 0xd669);
  FUN_10003bd40(param_1 + 0xd3b2);
  FUN_100186088(param_1 + 0xd332);
  thunk_FUN_100651068(param_1 + 0xd30c);
  thunk_FUN_100651068(param_1 + 0xd2e6);
  FUN_10064221c(param_1 + 0xd2d5);
  param_1[0xd2b7] = &PTR_FUN_1014a7108;
  param_1[0xd2ce] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd2d1);
  FUN_10064e2bc(param_1 + 0xd2b7);
  param_1[0xd299] = &PTR_FUN_1014a7108;
  param_1[0xd2b0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd2b3);
  FUN_10064e2bc(param_1 + 0xd299);
  thunk_FUN_100651068(param_1 + 0xd273);
  param_1[0xd255] = &PTR_FUN_1014a7108;
  param_1[0xd26c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd26f);
  FUN_10064e2bc(param_1 + 0xd255);
  param_1[0xd237] = &PTR_FUN_1014a7108;
  param_1[0xd24e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd251);
  FUN_10064e2bc(param_1 + 0xd237);
  FUN_10064221c(param_1 + 0xd226);
  thunk_FUN_100530784(param_1 + 0xd17f);
  FUN_10064221c(param_1 + 0xd16e);
  FUN_10064221c(param_1 + 0xd15d);
  FUN_100285020(param_1 + 0xce0a);
  if ((void *)param_1[0xce09] != (void *)0x0) {
    operator_delete__((void *)param_1[0xce09]);
    param_1[0xce09] = 0;
    param_1[0xce08] = 0;
  }
  param_1[0xcdea] = &PTR_FUN_1014a7108;
  param_1[0xce01] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xce04);
  FUN_10064e2bc(param_1 + 0xcdea);
  thunk_FUN_100530784(param_1 + 0xcd43);
  thunk_FUN_10064e2bc(param_1 + 0xcd2c);
  param_1[0xcd0e] = &PTR_FUN_1014a7108;
  param_1[0xcd25] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcd28);
  FUN_10064e2bc(param_1 + 0xcd0e);
  thunk_FUN_100651068(param_1 + 0xcce8);
  param_1[0xccca] = &PTR_FUN_1014a7108;
  param_1[0xcce1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcce4);
  FUN_10064e2bc(param_1 + 0xccca);
  param_1[0xccac] = &PTR_FUN_1014a7108;
  param_1[0xccc3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xccc6);
  FUN_10064e2bc(param_1 + 0xccac);
  FUN_10003bd40(param_1 + 0xc9f5);
  thunk_FUN_100651068(param_1 + 0xc9cf);
  FUN_10064221c(param_1 + 0xc9be);
  FUN_10064221c(param_1 + 0xc9ad);
  FUN_10064221c(param_1 + 0xc99c);
  thunk_FUN_10064e2bc(param_1 + 0xc985);
  param_1[0xc96d] = &PTR_FUN_10146bab8;
  param_1[0xc96f] = &PTR_FUN_10146bb18;
  thunk_FUN_10001653c(param_1 + 0xc980);
  if (*(char *)((long)param_1 + 0x64bef) < '\0') {
    operator_delete((void *)param_1[0xc97b]);
  }
  if (*(char *)((long)param_1 + 0x64bd7) < '\0') {
    operator_delete((void *)param_1[0xc978]);
  }
  if (*(char *)((long)param_1 + 0x64bbf) < '\0') {
    operator_delete((void *)param_1[0xc975]);
  }
  if (*(char *)((long)param_1 + 0x64ba7) < '\0') {
    operator_delete((void *)param_1[0xc972]);
  }
  FUN_10014f51c(param_1 + 0xc96f);
  param_1[0xc96d] = &PTR____cxa_pure_virtual_10146beb0;
  if ((long *)param_1[0xc96e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc96e] + 8))();
  }
  param_1[0xc96e] = 0;
  param_1[0xc94f] = &PTR_FUN_1014a7108;
  param_1[0xc966] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc969);
  FUN_10064e2bc(param_1 + 0xc94f);
  thunk_FUN_10064e2bc(param_1 + 0xc938);
  thunk_FUN_10023bbe4(param_1 + 0x70);
  FUN_10014f51c(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}




void FUN_1002810e8(long param_1)

{
  FUN_100280618(param_1 + -0x368);
  return;
}




void FUN_1002810f0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100280618();
  operator_delete(pvVar1);
  return;
}




void FUN_100281104(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100280618(param_1 + -0x368);
  operator_delete(pvVar1);
  return;
}




void FUN_10028111c(undefined8 param_1)

{
  FUN_10026d3f8();
  FUN_100280358(param_1);
  return;
}




void FUN_100281140(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0) {
    uVar3 = FUN_1002811d0(param_1);
    if ((uVar3 & 1) == 0) {
      FUN_1001f0a88(param_1 + 0x64b68);
    }
  }
  else {
    iVar1 = FUN_10015d3f8();
    if (iVar1 != 0) {
      lVar2 = FUN_10015d3ec();
      FUN_100169cec(lVar2 + 0x18);
    }
    uVar3 = FUN_1002811d0(param_1);
    if ((uVar3 & 1) == 0) {
      FUN_1001f090c(param_1 + 0x64b68);
    }
  }
  if ((*(byte *)(param_1 + 0x404) >> 2 & 1) == 0) {
    return;
  }
  FUN_10023bd9c(param_1 + 0x380,param_2);
  return;
}




ulong FUN_1002811d0(void)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  
  uVar7 = FUN_10015d3f8();
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  lVar8 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar8 + 0x548f);
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar8 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 != sVar2) {
    return 1;
  }
  pvVar11 = *(void **)(lVar8 + 0x5478);
  puVar3 = pvVar11;
  if (-1 < (char)bVar4) {
    puVar3 = (undefined8 *)(lVar8 + 0x5478);
  }
  pbVar10 = DAT_101d91198;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    pbVar10 = (byte *)&DAT_101d91198;
  }
  if ((char)bVar4 < '\0') {
    if (sVar1 == 0) {
      return 0;
    }
    iVar6 = _memcmp(puVar3,pbVar10,sVar1);
    bVar5 = iVar6 == 0;
  }
  else {
    if (sVar1 == 0) {
      return 0;
    }
    if ((uint)*pbVar10 != ((uint)pvVar11 & 0xff)) {
      return 1;
    }
    pbVar9 = (byte *)(lVar8 + 0x5479);
    do {
      uVar7 = uVar7 - 1;
      pbVar10 = pbVar10 + 1;
      if (uVar7 == 0) break;
      bVar4 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar4 == *pbVar10);
    bVar5 = uVar7 == 0;
  }
  return (ulong)!bVar5;
}




void FUN_1002812b8(void)

{
  return;
}




void FUN_1002812bc(void)

{
  return;
}




void FUN_1002812c0(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | bVar1;
  FUN_10023df24(param_1 + 0x380);
  return;
}




void FUN_1002812e4(long param_1)

{
  long lVar1;
  float *pfVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_c8;
  float fStack_c4;
  float local_bc;
  float local_b8;
  float fStack_b4;
  undefined1 *local_b0 [2];
  
  pfVar2 = (float *)(param_1 + 0x77bd8);
  uVar10 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar10,&fStack_b4,&local_b8,&local_bc);
  iVar9 = FUN_100126c88();
  fVar18 = local_b8;
  fVar17 = fStack_b4 - local_bc;
  FUN_10064e47c(fVar17,local_b8,param_1 + 0x380);
  local_b0[0] = (undefined1 *)(ulong)(uint)-local_bc;
  FUN_1001e7260(param_1 + 0x380,local_b0);
  FUN_10064e47c(fVar17,local_b8,param_1 + 0x649c0);
  if (*(float *)(param_1 + 0x64a04) != *(float *)(param_1 + 0x799b0)) {
    *(float *)(param_1 + 0x64a04) = *(float *)(param_1 + 0x799b0);
    FUN_1000200a0(param_1 + 0x649c0);
  }
  FUN_10064e47c(fVar17,fVar17 * 0.75,param_1 + 0x64a78);
  fVar15 = *(float *)(param_1 + 0x64ac0);
  if ((fVar15 != 1.3) || (fVar15 = *(float *)(param_1 + 0x64ac4), fVar15 != 1.3)) {
    *(undefined8 *)(param_1 + 0x64ac0) = 0x3fa666663fa66666;
    FUN_1000200a0(param_1 + 0x64a78);
  }
  lVar11 = param_1 + 0x79428;
  fVar14 = (float)FUN_1006425d0(lVar11,0,0,1,1);
  fVar14 = (fVar17 + -48.0) - fVar14;
  FUN_1006425d0(lVar11,0,0,1,1);
  fVar15 = fVar15 * 0.5 + 32.0;
  bVar8 = false;
  if ((*(float *)(param_1 + 0x79468) == fVar14) &&
     (bVar8 = false, !NAN(*(float *)(param_1 + 0x7946c)) && !NAN(fVar15))) {
    bVar8 = *(float *)(param_1 + 0x7946c) == fVar15;
  }
  if (!bVar8) {
    *(float *)(param_1 + 0x79468) = fVar14;
    *(float *)(param_1 + 0x7946c) = fVar15;
    FUN_1000200a0(lVar11);
  }
  plVar3 = (long *)(param_1 + 0x66740);
  FUN_10064e47c(fVar17,local_b8 - *(float *)(param_1 + 0x799b0),*(long *)(param_1 + 0x64b70));
  lVar11 = *(long *)(param_1 + 0x64b70);
  fVar15 = -(float)*(undefined8 *)(param_1 + 0x64d20);
  fVar14 = -(float)((ulong)*(undefined8 *)(param_1 + 0x64d20) >> 0x20);
  uVar10 = CONCAT44(fVar14,fVar15);
  if ((*(float *)(lVar11 + 0x40) != fVar15) || (*(float *)(lVar11 + 0x44) != fVar14)) {
    *(undefined8 *)(lVar11 + 0x40) = uVar10;
    FUN_1000200a0();
    uVar10 = CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x64d20) >> 0x20),
                      -(float)*(undefined8 *)(param_1 + 0x64d20));
  }
  plVar4 = (long *)(param_1 + 0x64df0);
  if ((*(float *)(param_1 + 0x64c68) != (float)uVar10) ||
     (*(float *)(param_1 + 0x64c6c) != (float)((ulong)uVar10 >> 0x20))) {
    *(undefined8 *)(param_1 + 0x64c68) = uVar10;
    FUN_1000200a0(param_1 + 0x64c28);
  }
  plVar5 = (long *)(param_1 + 0x64fa8);
  FUN_10064e47c(fVar17,local_b8,param_1 + 0x64c28);
  bVar8 = false;
  if ((*(float *)(param_1 + 0x66a5c) == 0.0) && (bVar8 = false, !NAN(*(float *)(param_1 + 0x66a58)))
     ) {
    bVar8 = *(float *)(param_1 + 0x66a58) == 0.0;
  }
  if (!bVar8) {
    *(undefined8 *)(param_1 + 0x66a58) = 0;
    FUN_1000200a0(param_1 + 0x66a18);
  }
  lVar11 = param_1 + 0x64e78;
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar9 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(lVar11,*ppuVar7);
  FUN_100651700(lVar11,3);
  FUN_100651708(fVar17 + -128.0,lVar11,1);
  fVar15 = *(float *)(param_1 + 0x64ebc);
  bVar8 = false;
  if ((fVar15 == 0.0) && (bVar8 = false, !NAN(*(float *)(param_1 + 0x64eb8)))) {
    bVar8 = *(float *)(param_1 + 0x64eb8) == 0.0;
  }
  if (!bVar8) {
    *(undefined8 *)(param_1 + 0x64eb8) = 0;
    FUN_1000200a0(lVar11);
  }
  plVar6 = (long *)(param_1 + 0x66560);
  fVar16 = fVar17 * 0.5;
  fVar18 = fVar18 * 0.5;
  local_b0[0] = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x64e78) + 0x28))(lVar11,local_b0);
  fVar14 = *(float *)(param_1 + 0x64ebc);
  FUN_100651184(lVar11);
  fVar14 = fVar14 + fVar15 + 64.0;
  fVar15 = *(float *)(param_1 + 0x64fe8);
  if ((fVar15 != 0.0) || (fVar15 = *(float *)(param_1 + 0x64fec), fVar15 != fVar14)) {
    *(undefined4 *)(param_1 + 0x64fe8) = 0;
    *(float *)(param_1 + 0x64fec) = fVar14;
    FUN_1000200a0(plVar5);
  }
  local_b0[0] = &DAT_3f0000003f000000;
  (**(code **)(*plVar5 + 0x28))(plVar5,local_b0);
  FUN_1006425d0(plVar4,0,0,1,1);
  fVar15 = fVar18 + fVar15 * -0.5 + -300.0;
  if ((*(float *)(param_1 + 0x64e30) != fVar16) || (*(float *)(param_1 + 0x64e34) != fVar15)) {
    *(float *)(param_1 + 0x64e30) = fVar16;
    *(float *)(param_1 + 0x64e34) = fVar15;
    FUN_1000200a0(plVar4);
  }
  local_b0[0] = (undefined1 *)0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,local_b0);
  FUN_10064e47c(0x44898000,0x43160000,plVar6);
  if ((*(float *)(param_1 + 0x665a0) != fVar16) || (*(float *)(param_1 + 0x665a4) != fVar18)) {
    *(float *)(param_1 + 0x665a0) = fVar16;
    *(float *)(param_1 + 0x665a4) = fVar18;
    FUN_1000200a0(plVar6);
  }
  local_b0[0] = &DAT_3f0000003f000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,local_b0);
  plVar4 = (long *)(param_1 + 0x66650);
  if ((*(float *)(param_1 + 0x66690) != fVar16 + -394.0) ||
     (*(float *)(param_1 + 0x66694) != fVar18)) {
    *(float *)(param_1 + 0x66690) = fVar16 + -394.0;
    *(float *)(param_1 + 0x66694) = fVar18;
    FUN_1000200a0(plVar4);
  }
  local_b0[0] = &DAT_3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,local_b0);
  if ((*(float *)(param_1 + 0x66780) != fVar16 + -316.0) ||
     (*(float *)(param_1 + 0x66784) != fVar18)) {
    *(float *)(param_1 + 0x66780) = fVar16 + -316.0;
    *(float *)(param_1 + 0x66784) = fVar18;
    FUN_1000200a0(plVar3);
  }
  fVar16 = fVar16 + -550.0;
  local_b0[0] = (undefined1 *)0x3f00000000000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,local_b0);
  FUN_10065179c(0x44410000,0,0x3f800000,plVar3);
  uVar12 = *(uint *)(param_1 + 0x67040);
  if ((uVar12 != 0) && (lVar11 = **(long **)(param_1 + 0x67048), lVar11 != 0)) {
    uVar13 = 0;
    do {
      fVar15 = (float)uVar13 * 192.0 + 150.0 + *(float *)(param_1 + 0x665a4);
      if ((*(float *)(lVar11 + 0x40) == fVar16) && (*(float *)(lVar11 + 0x44) == fVar15)) {
        if (uVar13 != 0) goto LAB_1002818e0;
LAB_100281928:
        *(uint *)(lVar11 + 0x10c) = *(uint *)(lVar11 + 0x10c) & 0xfffffffb;
      }
      else {
        *(float *)(lVar11 + 0x40) = fVar16;
        *(float *)(lVar11 + 0x44) = fVar15;
        FUN_1000200a0(lVar11);
        if (uVar13 == 0) goto LAB_100281928;
LAB_1002818e0:
        if (*(float *)(lVar11 + 200) != 94.0) {
          *(undefined4 *)(lVar11 + 200) = 0x42bc0000;
          FUN_1000200a0(lVar11 + 0x88);
        }
        FUN_10064e47c(0x44640000,0x40000000,lVar11 + 0x88);
      }
      bVar8 = false;
      if ((*(float *)(lVar11 + 0x1b8) == 156.0) && (bVar8 = false, !NAN(*(float *)(lVar11 + 0x1bc)))
         ) {
        bVar8 = *(float *)(lVar11 + 0x1bc) == 96.0;
      }
      if (!bVar8) {
        *(undefined8 *)(lVar11 + 0x1b8) = 0x42c00000431c0000;
        FUN_1000200a0(lVar11 + 0x178);
      }
      local_b0[0] = &DAT_3f0000003f000000;
      (**(code **)(*(long *)(lVar11 + 0x178) + 0x28))(lVar11 + 0x178,local_b0);
      lVar1 = lVar11 + 0x268;
      FUN_10065179c(0x43680000,0,0x3f800000,lVar1);
      if ((*(float *)(lVar11 + 0x2a8) != 234.0) || (*(float *)(lVar11 + 0x2ac) != 104.0)) {
        *(undefined8 *)(lVar11 + 0x2a8) = 0x42d00000436a0000;
        FUN_1000200a0(lVar1);
      }
      local_b0[0] = (undefined1 *)0x3f80000000000000;
      (**(code **)(*(long *)(lVar11 + 0x268) + 0x28))(lVar1,local_b0);
      lVar1 = lVar11 + 0x398;
      FUN_10065179c(0x43d80000,0,0x3f800000,lVar1);
      if ((*(float *)(lVar11 + 0x3d8) != 234.0) || (*(float *)(lVar11 + 0x3dc) != 96.0)) {
        *(undefined8 *)(lVar11 + 0x3d8) = 0x42c00000436a0000;
        FUN_1000200a0(lVar1);
      }
      local_b0[0] = (undefined1 *)0x0;
      (**(code **)(*(long *)(lVar11 + 0x398) + 0x28))(lVar1,local_b0);
      plVar3 = (long *)(lVar11 + 0x4c8);
      fVar15 = (float)FUN_10064e3cc(plVar3);
      fVar15 = fVar15 * -0.5 + 1006.0;
      bVar8 = false;
      if ((*(float *)(lVar11 + 0x508) == fVar15) &&
         (bVar8 = false, !NAN(*(float *)(lVar11 + 0x50c)))) {
        bVar8 = *(float *)(lVar11 + 0x50c) == 96.0;
      }
      if (!bVar8) {
        *(float *)(lVar11 + 0x508) = fVar15;
        *(undefined4 *)(lVar11 + 0x50c) = 0x42c00000;
        FUN_1000200a0(plVar3);
      }
      local_b0[0] = &DAT_3f0000003f000000;
      (**(code **)(*plVar3 + 0x28))(plVar3,local_b0);
      uVar13 = uVar13 + 1;
      uVar12 = *(uint *)(param_1 + 0x67040);
    } while ((uVar13 < uVar12) &&
            (lVar11 = *(long *)(*(long *)(param_1 + 0x67048) + (ulong)uVar13 * 8), lVar11 != 0));
  }
  plVar3 = (long *)(param_1 + 0x692a8);
  lVar11 = param_1 + 0x66870;
  fVar18 = fVar18 + 75.0;
  if ((*(float *)(param_1 + 0x668b0) != fVar16) || (*(float *)(param_1 + 0x668b4) != fVar18)) {
    *(float *)(param_1 + 0x668b0) = fVar16;
    *(float *)(param_1 + 0x668b4) = fVar18;
    FUN_1000200a0(lVar11);
    uVar12 = *(uint *)(param_1 + 0x67040);
  }
  fVar15 = (float)uVar12 * 192.0;
  FUN_10064e47c(0x44898000,lVar11);
  lVar1 = param_1 + 0x66f50;
  FUN_100652e60(lVar11);
  if ((*(float *)(param_1 + 0x66f90) != fVar16) ||
     (*(float *)(param_1 + 0x66f94) != fVar15 + fVar18)) {
    *(float *)(param_1 + 0x66f90) = fVar16;
    *(float *)(param_1 + 0x66f94) = fVar15 + fVar18;
    FUN_1000200a0(lVar1);
  }
  FUN_10064e47c(0x44898000,0x43800000,lVar1);
  fVar18 = local_b8;
  fVar15 = *(float *)(param_1 + 0x799b0);
  FUN_100652e60(lVar1);
  FUN_10053093c(fVar17,fVar18 + fVar15,param_1 + 0x66a18);
  FUN_10064e47c(0x449c4000,0x43160000,param_1 + 0x691b8);
  if ((*(float *)(param_1 + 0x692e8) != 80.0) || (*(float *)(param_1 + 0x692ec) != 75.0)) {
    *(undefined8 *)(param_1 + 0x692e8) = 0x4296000042a00000;
    FUN_1000200a0(plVar3);
  }
  plVar4 = (long *)(param_1 + 0x69730);
  local_b0[0] = &DAT_3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,local_b0);
  if ((*(float *)(param_1 + 0x693d8) != 160.0) || (*(float *)(param_1 + 0x693dc) != 75.0)) {
    *(undefined8 *)(param_1 + 0x693d8) = 0x4296000043200000;
    FUN_1000200a0(param_1 + 0x69398);
  }
  local_b0[0] = (undefined1 *)0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x69398) + 0x28))(param_1 + 0x69398,local_b0);
  if (*(float *)(param_1 + 0x696ec) != 150.0) {
    *(undefined4 *)(param_1 + 0x696ec) = 0x43160000;
    FUN_1000200a0(param_1 + 0x696a8);
  }
  lVar11 = param_1 + 0x69860;
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar9 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(lVar11,*ppuVar7);
  if ((*(float *)(param_1 + 0x698a0) != 160.0) || (*(float *)(param_1 + 0x698a4) != 56.0)) {
    *(undefined8 *)(param_1 + 0x698a0) = 0x4260000043200000;
    FUN_1000200a0(lVar11);
  }
  FUN_100651708(0x44688000,lVar11,1);
  fVar18 = 80.0;
  if (*(float *)(param_1 + 0x69770) == 80.0) {
    fVar17 = 42.0;
    fVar18 = 42.0;
    if (*(float *)(param_1 + 0x69774) == 42.0) goto LAB_100281d84;
  }
  fVar17 = fVar18;
  *(undefined8 *)(param_1 + 0x69770) = 0x4228000042a00000;
  FUN_1000200a0(plVar4);
LAB_100281d84:
  plVar3 = (long *)(param_1 + 0x6d370);
  local_b0[0] = (undefined1 *)0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,local_b0);
  FUN_100651184(lVar11);
  if ((*(float *)(param_1 + 0x699d0) != 160.0) || (*(float *)(param_1 + 0x699d4) != fVar17 + 104.0))
  {
    *(undefined4 *)(param_1 + 0x699d0) = 0x43200000;
    *(float *)(param_1 + 0x699d4) = fVar17 + 104.0;
    FUN_1000200a0(param_1 + 0x69990);
  }
  FUN_1001853c0(0x44688000,0xbf800000,param_1 + 0x69990);
  if ((*(float *)(param_1 + 440000) != 160.0) || (*(float *)(param_1 + 0x6b6c4) != fVar17 + 254.0))
  {
    *(undefined4 *)(param_1 + 440000) = 0x43200000;
    *(float *)(param_1 + 0x6b6c4) = fVar17 + 254.0;
    FUN_1000200a0(param_1 + 0x6b680);
  }
  FUN_1001853c0(0x44688000,0xbf800000,param_1 + 0x6b680);
  lVar11 = param_1 + 0x6d4a0;
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar9 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(lVar11,*ppuVar7);
  if ((*(float *)(param_1 + 0x6d4e0) != 160.0) || (*(float *)(param_1 + 0x6d4e4) != fVar17 + 384.0))
  {
    *(undefined4 *)(param_1 + 0x6d4e0) = 0x43200000;
    *(float *)(param_1 + 0x6d4e4) = fVar17 + 384.0;
    FUN_1000200a0(lVar11);
  }
  FUN_100651708(0x44688000,lVar11,1);
  fVar18 = *(float *)(param_1 + 0x6d3b0);
  if ((fVar18 != 80.0) || (fVar18 = *(float *)(param_1 + 0x6d3b4), fVar18 != fVar17 + 370.0)) {
    *(undefined4 *)(param_1 + 0x6d3b0) = 0x42a00000;
    *(float *)(param_1 + 0x6d3b4) = fVar17 + 370.0;
    FUN_1000200a0(plVar3);
  }
  plVar4 = (long *)(param_1 + 0x70fb0);
  local_b0[0] = (undefined1 *)0x3f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,local_b0);
  FUN_100651184(lVar11);
  fVar18 = fVar17 + 432.0 + fVar18;
  if ((*(float *)(param_1 + 0x6d610) != 160.0) || (*(float *)(param_1 + 0x6d614) != fVar18)) {
    *(undefined4 *)(param_1 + 0x6d610) = 0x43200000;
    *(float *)(param_1 + 0x6d614) = fVar18;
    FUN_1000200a0(param_1 + 0x6d5d0);
  }
  FUN_1001853c0(0x44688000,0xbf800000,param_1 + 0x6d5d0);
  if ((*(float *)(param_1 + 0x6f300) != 160.0) || (*(float *)(param_1 + 0x6f304) != fVar18 + 150.0))
  {
    *(undefined4 *)(param_1 + 0x6f300) = 0x43200000;
    *(float *)(param_1 + 0x6f304) = fVar18 + 150.0;
    FUN_1000200a0(param_1 + 0x6f2c0);
  }
  FUN_1001853c0(0x44688000,0xbf800000,param_1 + 0x6f2c0);
  lVar11 = param_1 + 0x710e0;
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar9 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(lVar11,*ppuVar7);
  if ((*(float *)(param_1 + 0x71120) != 160.0) || (*(float *)(param_1 + 0x71124) != fVar18 + 280.0))
  {
    *(undefined4 *)(param_1 + 0x71120) = 0x43200000;
    *(float *)(param_1 + 0x71124) = fVar18 + 280.0;
    FUN_1000200a0(lVar11);
  }
  plVar3 = (long *)(param_1 + 0x72f00);
  FUN_100651708(0x44688000,lVar11,1);
  fVar17 = *(float *)(param_1 + 0x70ff0);
  if ((fVar17 != 80.0) || (fVar17 = *(float *)(param_1 + 0x70ff4), fVar17 != fVar18 + 266.0)) {
    *(undefined4 *)(param_1 + 0x70ff0) = 0x42a00000;
    *(float *)(param_1 + 0x70ff4) = fVar18 + 266.0;
    FUN_1000200a0(plVar4);
  }
  local_b0[0] = (undefined1 *)0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,local_b0);
  FUN_100651184(lVar11);
  fVar17 = fVar18 + 328.0 + fVar17;
  if ((*(float *)(param_1 + 0x71250) != 160.0) || (*(float *)(param_1 + 0x71254) != fVar17)) {
    *(undefined4 *)(param_1 + 0x71250) = 0x43200000;
    *(float *)(param_1 + 0x71254) = fVar17;
    FUN_1000200a0(param_1 + 0x71210);
  }
  FUN_1001853c0(0x44688000,0xbf800000,param_1 + 0x71210);
  lVar11 = param_1 + 0x73030;
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar9 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(lVar11,*ppuVar7);
  if ((*(float *)(param_1 + 0x73070) != 160.0) || (*(float *)(param_1 + 0x73074) != fVar17 + 130.0))
  {
    *(undefined4 *)(param_1 + 0x73070) = 0x43200000;
    *(float *)(param_1 + 0x73074) = fVar17 + 130.0;
    FUN_1000200a0(lVar11);
  }
  plVar4 = (long *)(param_1 + 0x73218);
  FUN_100651708(0x44688000,lVar11,1);
  fVar18 = *(float *)(param_1 + 0x72f40);
  if ((fVar18 != 80.0) || (fVar18 = *(float *)(param_1 + 0x72f44), fVar18 != fVar17 + 116.0)) {
    *(undefined4 *)(param_1 + 0x72f40) = 0x42a00000;
    *(float *)(param_1 + 0x72f44) = fVar17 + 116.0;
    FUN_1000200a0(plVar3);
  }
  local_b0[0] = (undefined1 *)0x3f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,local_b0);
  FUN_100651184(lVar11);
  fVar17 = fVar17 + 178.0 + fVar18;
  lVar11 = param_1 + 0x73160;
  local_c8 = (float)FUN_100642888(lVar11,0,0,1,1);
  if (local_c8 <= 312.5) {
    local_c8 = 312.5;
  }
  fStack_c4 = fVar18 + 20.0;
  FUN_10064e48c(lVar11,&local_c8);
  fVar18 = fVar17 + -10.0;
  if ((*(float *)(param_1 + 0x731a0) != 160.0) || (*(float *)(param_1 + 0x731a4) != fVar18)) {
    *(undefined4 *)(param_1 + 0x731a0) = 0x43200000;
    *(float *)(param_1 + 0x731a4) = fVar18;
    FUN_1000200a0(lVar11);
  }
  if ((*(float *)(param_1 + 0x73258) != 0.0) || (*(float *)(param_1 + 0x7325c) != 54.0)) {
    *(undefined8 *)(param_1 + 0x73258) = 0x4258000000000000;
    FUN_1000200a0(plVar4);
  }
  plVar3 = (long *)(param_1 + 0x734f0);
  local_b0[0] = (undefined1 *)0x3f80000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,local_b0);
  lVar11 = param_1 + 0x73308;
  fVar15 = *(float *)(param_1 + 0x73258) + 54.0;
  if ((*(float *)(param_1 + 0x73348) != fVar15) || (*(float *)(param_1 + 0x7334c) != 62.0)) {
    *(float *)(param_1 + 0x73348) = fVar15;
    *(undefined4 *)(param_1 + 0x7334c) = 0x42780000;
    FUN_1000200a0(lVar11);
  }
  local_b0[0] = (undefined1 *)0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x73308) + 0x28))(lVar11,local_b0);
  fVar15 = *(float *)(param_1 + 0x73348);
  fVar14 = (float)FUN_10064259c(lVar11);
  fVar15 = fVar15 + fVar14 + 20.0;
  fVar14 = 631.0;
  if (fVar15 <= 631.0) {
    fVar15 = 631.0;
  }
  lVar11 = param_1 + 0x73438;
  local_c8 = (float)FUN_100642888(lVar11,0,0,1,1);
  if (local_c8 <= 312.5) {
    local_c8 = 312.5;
  }
  fStack_c4 = fVar14 + 20.0;
  FUN_10064e48c(lVar11,&local_c8);
  if ((*(float *)(param_1 + 0x73478) != fVar15) || (*(float *)(param_1 + 0x7347c) != fVar18)) {
    *(float *)(param_1 + 0x73478) = fVar15;
    *(float *)(param_1 + 0x7347c) = fVar18;
    FUN_1000200a0(lVar11);
  }
  plVar4 = (long *)(param_1 + 0x73798);
  if ((*(float *)(param_1 + 0x73530) != 0.0) || (*(float *)(param_1 + 0x73534) != 54.0)) {
    *(undefined8 *)(param_1 + 0x73530) = 0x4258000000000000;
    FUN_1000200a0(plVar3);
  }
  local_b0[0] = (undefined1 *)0x3f80000000000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,local_b0);
  plVar3 = (long *)(param_1 + 0x735e0);
  fVar18 = *(float *)(param_1 + 0x73530) + 54.0;
  fVar15 = *(float *)(param_1 + 0x73620);
  if ((fVar15 != fVar18) || (fVar15 = *(float *)(param_1 + 0x73624), fVar15 != 62.0)) {
    *(float *)(param_1 + 0x73620) = fVar18;
    *(undefined4 *)(param_1 + 0x73624) = 0x42780000;
    FUN_1000200a0(plVar3);
  }
  local_b0[0] = (undefined1 *)0x3f80000000000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,local_b0);
  fVar14 = (float)FUN_10064e3cc(plVar4);
  lVar11 = param_1 + 0x76308;
  fVar16 = *(float *)(param_1 + 0x7634c);
  FUN_10064e3cc(lVar11);
  fVar18 = fVar15;
  FUN_10064e3cc(plVar4);
  fVar16 = fVar16 + (fVar15 - fVar18) * 0.5;
  if ((*(float *)(param_1 + 0x737d8) != fVar14 * 0.5) || (*(float *)(param_1 + 0x737dc) != fVar16))
  {
    *(float *)(param_1 + 0x737d8) = fVar14 * 0.5;
    *(float *)(param_1 + 0x737dc) = fVar16;
    FUN_1000200a0(plVar4);
  }
  local_b0[0] = &DAT_3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,local_b0);
  fVar14 = *(float *)(param_1 + 0x737d8);
  fVar18 = (float)FUN_10064e3cc(plVar4);
  fVar15 = (float)FUN_10064e3cc(param_1 + 0x74d50);
  fVar18 = fVar14 + 32.0 + (fVar15 + fVar18) * 0.5;
  if (*(float *)(param_1 + 0x74d90) != fVar18) {
    *(float *)(param_1 + 0x74d90) = fVar18;
    FUN_1000200a0(param_1 + 0x74d50);
  }
  lVar1 = param_1 + 0x77b98;
  fVar18 = (float)FUN_10064e3cc(lVar1);
  fVar18 = fVar18 * -0.5 + 1170.0;
  fVar15 = *pfVar2;
  if (fVar15 != fVar18) {
    *pfVar2 = fVar18;
    FUN_1000200a0(lVar1);
    fVar15 = *pfVar2;
  }
  fVar18 = (float)FUN_10064e3cc(lVar11);
  fVar18 = (fVar15 - fVar18) + -16.0;
  if (*(float *)(param_1 + 0x76348) != fVar18) {
    *(float *)(param_1 + 0x76348) = fVar18;
    FUN_1000200a0(lVar11);
  }
  fVar17 = fVar17 + 210.0;
  fVar15 = *pfVar2;
  fVar18 = (float)FUN_10064e3cc(lVar1);
  fVar18 = 625.0 - (fVar15 + fVar18 * 0.5) * 0.5;
  fVar15 = *(float *)(param_1 + 0x73750);
  if ((fVar15 != fVar18) || (fVar15 = *(float *)(param_1 + 0x73754), fVar15 != fVar17)) {
    *(float *)(param_1 + 0x73750) = fVar18;
    *(float *)(param_1 + 0x73754) = fVar17;
    FUN_1000200a0(param_1 + 0x73710);
  }
  FUN_1006425d0(param_1 + 0x696a8,0,0,1,1);
  lVar11 = param_1 + 0x694c8;
  FUN_10064e47c(0x449c4000,fVar15 + -80.0,lVar11);
  fVar18 = 150.0;
  if (*(float *)(param_1 + 0x6950c) != 150.0) {
    *(undefined4 *)(param_1 + 0x6950c) = 0x43160000;
    fVar18 = 150.0;
    FUN_1000200a0(lVar11);
  }
  FUN_100652e60(lVar11);
  if (*(float *)(param_1 + 0x695fc) != fVar18 + 150.0) {
    *(float *)(param_1 + 0x695fc) = fVar18 + 150.0;
    FUN_1000200a0(param_1 + 0x695b8);
  }
  FUN_10064e47c(0x449c4000,0x43700000,param_1 + 0x695b8);
  fVar18 = *(float *)(param_1 + 0x69170);
  if ((fVar18 != -625.0) || (fVar18 = *(float *)(param_1 + 0x69174), fVar18 != local_b8 * -0.4)) {
    *(undefined4 *)(param_1 + 0x69170) = 0xc41c4000;
    *(float *)(param_1 + 0x69174) = local_b8 * -0.4;
    FUN_1000200a0(param_1 + 0x69130);
  }
  uVar10 = FUN_100530aa0(param_1 + 0x68bf8,1,0,1,1);
  FUN_10053093c(uVar10,(fVar18 - local_b8) + *(float *)(param_1 + 0x69174) + local_b8 * 0.5 +
                       *(float *)(param_1 + 0x799b0),param_1 + 0x68bf8);
  return;
}




void FUN_10028279c(long *param_1,long param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  
  pbVar1 = (byte *)((long)param_1 + 0x799bc);
  bVar6 = *(byte *)(param_2 + 0x57);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_2 + 0x48);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar16 = *(void **)(param_2 + 0x40);
    puVar4 = pvVar16;
    if (-1 < (char)bVar6) {
      puVar4 = (undefined8 *)(param_2 + 0x40);
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 == 0) || (iVar9 = _memcmp(puVar4,pbVar15,sVar2), iVar9 == 0)) goto LAB_10028296c;
    }
    else {
      if (sVar2 == 0) {
LAB_10028296c:
        *pbVar1 = 0;
        FUN_100282aa0(param_1,0);
        goto LAB_10028297c;
      }
      if ((uint)*pbVar15 == ((uint)pvVar16 & 0xff)) {
        pbVar14 = (byte *)(param_2 + 0x41);
        do {
          uVar12 = uVar12 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar12 == 0) goto LAB_10028296c;
          bVar6 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar6 == *pbVar15);
      }
    }
  }
  iVar9 = FUN_10015d3f8();
  if (iVar9 == 0) {
LAB_10028292c:
    bVar8 = false;
  }
  else {
    lVar10 = FUN_10015d3ec();
    bVar6 = *(byte *)(lVar10 + 0x548f);
    uVar12 = (ulong)bVar6;
    sVar2 = *(size_t *)(lVar10 + 0x5480);
    if (-1 < (char)bVar6) {
      sVar2 = uVar12;
    }
    bVar7 = *(byte *)(param_2 + 0x197);
    sVar3 = *(size_t *)(param_2 + 0x188);
    if (-1 < (char)bVar7) {
      sVar3 = (ulong)bVar7;
    }
    if (sVar2 != sVar3) goto LAB_10028292c;
    pvVar16 = *(void **)(lVar10 + 0x5478);
    puVar4 = pvVar16;
    if (-1 < (char)bVar6) {
      puVar4 = (undefined8 *)(lVar10 + 0x5478);
    }
    pbVar15 = *(byte **)(param_2 + 0x180);
    if (-1 < (char)bVar7) {
      pbVar15 = (byte *)(param_2 + 0x180);
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) goto LAB_100282a98;
      iVar9 = _memcmp(puVar4,pbVar15,sVar2);
      bVar8 = iVar9 == 0;
    }
    else if (sVar2 == 0) {
LAB_100282a98:
      bVar8 = true;
    }
    else {
      if ((uint)*pbVar15 != ((uint)pvVar16 & 0xff)) goto LAB_10028292c;
      pbVar14 = (byte *)(lVar10 + 0x5479);
      do {
        uVar12 = uVar12 - 1;
        pbVar15 = pbVar15 + 1;
        bVar8 = uVar12 == 0;
        if (uVar12 == 0) break;
        bVar6 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar6 == *pbVar15);
    }
  }
  *pbVar1 = bVar8;
  if ((*(uint *)((long)param_1 + 0x404) >> 2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) | 4;
    FUN_10023bd9c(param_1 + 0x70,1);
  }
  *(uint *)((long)param_1 + 0x68bf4) = *(uint *)((long)param_1 + 0x68bf4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x64dec) = *(uint *)((long)param_1 + 0x64dec) & 0xfffffffb;
LAB_10028297c:
  pcVar5 = "MENU_PROFILE_GUILD_CREATE_TEAM_HEADER";
  if (*pbVar1 != 0) {
    pcVar5 = "MENU_PROFILE_GUILD_RENAME_TEAM_HEADER";
  }
  uVar11 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0(param_1 + 0xd273,uVar11);
  pcVar5 = "MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB";
  if (*pbVar1 != 0) {
    pcVar5 = "MENU_PROFILE_GUILD_RENAME_FIELD_BLURB";
  }
  uVar11 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0(param_1 + 0xd30c,uVar11);
  *(uint *)((long)param_1 + 0x74dd4) =
       *(uint *)((long)param_1 + 0x74dd4) & 0xfffffffb | (uint)*pbVar1 << 2;
  uVar13 = (uint)(*pbVar1 == 0);
  *(uint *)((long)param_1 + 0x7638c) =
       *(uint *)((long)param_1 + 0x7638c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x7638c) & 3 | uVar13 << 2;
  *(uint *)((long)param_1 + 0x77c1c) =
       *(uint *)((long)param_1 + 0x77c1c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x77c1c) & 3 | uVar13 << 2;
  FUN_10023c69c(param_1 + 0x70,param_2);
  (**(code **)(*param_1 + 0x150))(param_1);
  uVar13 = *(uint *)((long)param_1 + 0x84);
  if ((uVar13 >> 2 & 1) == 0) {
    (**(code **)(*param_1 + 0x140))(param_1,1);
    uVar13 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar13 | 4;
  return;
}




void FUN_100282aa0(long param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x3dcccccd;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  FUN_100283ea0(uVar1);
  *(char *)(param_1 + 0x799bd) = (char)param_2;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x799bc) == '\0') {
      FUN_100280478(0x3dcccccd,param_1,1,1,1);
      return;
    }
    *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) | 4;
    *(uint *)(param_1 + 0x68bf4) = *(uint *)(param_1 + 0x68bf4) & 0xfffffffb;
    *(uint *)(param_1 + 0x64dec) = *(uint *)(param_1 + 0x64dec) & 0xfffffffb;
  }
  else {
    FUN_100284028(param_1);
    if (*(char *)(param_1 + 0x799bc) != '\0') {
      *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) & 0xfffffffb;
    }
  }
  return;
}




void FUN_100282b84(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar4 = FUN_10015d3ec();
    FUN_100169cec(lVar4 + 0x18);
    FUN_100104af0();
    return;
  }
  uVar1 = param_2 + 0x30;
  bVar11 = *(byte *)(param_2 + 0x47);
  uVar9 = (ulong)bVar11;
  uVar10 = *(ulong *)(param_2 + 0x38);
  uVar2 = uVar10;
  if (-1 < (char)bVar11) {
    uVar2 = uVar9;
  }
  if (uVar2 == 0x10) {
    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
    if (iVar3 != 0) {
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
      goto LAB_100282c20;
    }
    uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
    pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_ALREADY_IN";
  }
  else {
LAB_100282c20:
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xb) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c29);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_100282e98;
      }
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c66);
      if (iVar3 != 0) {
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
        goto LAB_100282ca0;
      }
LAB_100282dfc:
      uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_NAME_TAKEN";
    }
    else {
LAB_100282ca0:
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 0xd) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c71);
        if (iVar3 == 0) goto LAB_100282dfc;
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
      }
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 9) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cb0);
        if (iVar3 != 0) {
          bVar11 = *(byte *)(param_2 + 0x47);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x38);
          goto LAB_100282d20;
        }
LAB_100282e5c:
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_TAKEN";
      }
      else {
LAB_100282d20:
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 == 0xc) {
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cba);
          if (iVar3 == 0) goto LAB_100282e5c;
          bVar11 = *(byte *)(param_2 + 0x47);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x38);
        }
        if (-1 < (char)bVar11) {
          uVar10 = uVar9;
        }
        if ((uVar10 != 0x12) ||
           (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cf7), iVar3 != 0
           )) {
          FUN_1004e313c(auStack_40);
          uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_ERROR_TITLE",0);
          uVar6 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_ERROR",0);
          uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
          if (local_38 != (void *)0x0) {
            operator_delete__(local_38);
          }
          goto LAB_100282ecc;
        }
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_GUILD_ERROR_PROFANITY";
      }
    }
  }
LAB_100282e98:
  uVar6 = FUN_1004e0150(pcVar8,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
LAB_100282ecc:
  FUN_100282ee8(param_1);
  return;
}




void FUN_100282ee8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_100185ddc(param_1 + 0x69990);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_100185ddc(param_1 + 0x6b680);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_1001afee4(param_1 + 0x69990);
      iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
      if (iVar1 != 0) {
        uVar3 = FUN_1001afee4(param_1 + 0x6b680);
        iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
        if (iVar1 != 0) {
          uVar2 = FUN_100185ddc(param_1 + 0x6d5d0);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_100185ddc(param_1 + 0x6f2c0);
            if ((uVar2 & 1) == 0) {
              uVar3 = FUN_1001afee4(param_1 + 0x6d5d0);
              iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
              if (iVar1 != 0) {
                uVar3 = FUN_1001afee4(param_1 + 0x6f2c0);
                iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
                if ((iVar1 != 0) && (iVar1 = FUN_100185ddc(param_1 + 0x71210), iVar1 == 0)) {
                  uVar3 = 1;
                  goto LAB_100282fd4;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_100282fd4:
  FUN_1001b4c0c(param_1 + 0x74d50,uVar3);
  FUN_1001b4c0c(param_1 + 0x76308,uVar3);
  FUN_1001b4c0c(param_1 + 0x77b98,uVar3);
  return;
}




void FUN_100283024(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  
  iVar5 = FUN_1004f1680(param_2);
  if ((iVar5 == 0) || (*(char *)(param_2 + 0x44) == '\0')) goto LAB_10028312c;
  FUN_100281074(param_1);
  lVar6 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar6 + 0x548f);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar6 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar6 + 0x5478);
    puVar3 = pvVar11;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(lVar6 + 0x5478);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 == 0)) goto LAB_10028312c;
    }
    else {
      if (sVar1 == 0) goto LAB_10028312c;
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(lVar6 + 0x5479);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_10028312c;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  uVar7 = FUN_10015d3ec();
  lVar6 = FUN_10015d3ec();
  FUN_1001634c4(uVar7,lVar6 + 0x5478,1);
LAB_10028312c:
  FUN_10023cf74(param_1 + 0x380,param_2);
  return;
}




void FUN_100283144(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined **local_270 [5];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1d8 [8];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      iVar2 = FUN_10015d3f8();
      if (iVar2 != 0) {
        lVar3 = FUN_10015d3ec();
        FUN_100169cec(lVar3 + 0x18);
      }
      FUN_1004f1580(local_270);
      local_270[0] = &PTR_thunk_FUN_10015a304_10145bec0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      local_110 = 0;
      local_100 = 0;
      uStack_240 = 0;
      local_248 = 0;
      uStack_230 = 0;
      local_238 = 0;
      uStack_220 = 0;
      local_228 = 0;
      uStack_210 = 0;
      local_218 = 0;
      uStack_200 = 0;
      local_208 = 0;
      uStack_1f0 = 0;
      local_1f8 = 0;
      FUN_10015a14c(auStack_1d8);
      FUN_100159fc8(&local_248);
      local_40 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      FUN_1004f15d8(local_270);
      FUN_10028279c(param_1,local_270);
      FUN_10015a304(local_270);
      return;
    }
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar1 = uVar9;
    if (-1 < (char)bVar10) {
      uVar1 = uVar8;
    }
    if (uVar1 == 0x13) {
      iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013ea7ed);
      if (iVar2 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_LEAVE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_LEAVE_REASON_NOT_IN";
        goto LAB_1002832fc;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0x11) &&
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e7827),
       iVar2 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
      pcVar5 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE";
LAB_1002832fc:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void FUN_100283340(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_100281074(param_1);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e76d5);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_REASON_NO_GUILD";
        goto LAB_100283500;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_ALREADY_IN_GUILD";
        goto LAB_100283500;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 7) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ea8ed);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_EXPIRED";
        goto LAB_100283500;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 10) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77b1), iVar3 == 0)) {
      uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
      pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_FULL";
LAB_100283500:
      uVar6 = FUN_1004e0150(pcVar4,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void FUN_10028353c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined **local_270 [5];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1d8 [8];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_1004f1580(local_270);
      local_270[0] = &PTR_thunk_FUN_10015a304_10145bec0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      local_110 = 0;
      local_100 = 0;
      uStack_240 = 0;
      local_248 = 0;
      uStack_230 = 0;
      local_238 = 0;
      uStack_220 = 0;
      local_228 = 0;
      uStack_210 = 0;
      local_218 = 0;
      uStack_200 = 0;
      local_208 = 0;
      uStack_1f0 = 0;
      local_1f8 = 0;
      FUN_10015a14c(auStack_1d8);
      FUN_100159fc8(&local_248);
      local_40 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      lVar3 = FUN_10015d3ec();
      std::string::operator=((string *)&local_f0,(string *)(lVar3 + 0x5478));
      lVar3 = FUN_10015d3ec();
      std::string::operator=((string *)&uStack_230,(string *)(lVar3 + 0x50c8));
      lVar3 = FUN_10015d3ec();
      std::string::operator=((string *)&local_218,(string *)(lVar3 + 0x50e0));
      local_a0 = 1;
      FUN_10015d3ec();
      FUN_100166fd8();
      FUN_10015a304(local_270);
      return;
    }
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar1 = uVar9;
    if (-1 < (char)bVar10) {
      uVar1 = uVar8;
    }
    if (uVar1 == 0x11) {
      iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e76d5);
      if (iVar2 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_REJECT_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_REJECT_REASON_NO_GUILD";
        goto LAB_100283720;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0x10) &&
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e3bc2),
       iVar2 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_REJECT_TITLE",0);
      pcVar5 = "MENU_PROFILE_GUILD_CANT_REJECT_REASON_IN_GUILD";
LAB_100283720:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void FUN_100283764(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_NOTIFICATION",0);
      thunk_FUN_1004e439c(auStack_30,uVar4);
      FUN_1001e55b0(0x40a00000,auStack_30,0,0);
      if (local_28 == (void *)0x0) {
        return;
      }
      operator_delete__(local_28);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x13) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ea7ed);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_NOT_IN_GUILD";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_IN_GUILD";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaa81);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaac0);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_PERMISSIONS";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eab04);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77b1);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_GUILD_FULL";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0xe) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77e5), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
      pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_MIN_SKILL_TIER";
LAB_100283a74:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void FUN_100283ab4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  char *pcVar9;
  
  iVar2 = FUN_1004f1680(param_2);
  if ((iVar2 != 0) && (*(char *)(param_2 + 0x44) == '\0')) {
    bVar8 = *(byte *)(param_2 + 0x5f);
    uVar6 = (ulong)bVar8;
    uVar7 = *(ulong *)(param_2 + 0x50);
    uVar1 = uVar7;
    if (-1 < (char)bVar8) {
      uVar1 = uVar6;
    }
    if (uVar1 == 0x13) {
      iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013ea7ed);
      if (iVar2 == 0) {
        pcVar9 = "MENU_PROFILE_GUILD_CANT_KICK_REASON_NOT_IN_GUILD";
        goto LAB_100283b78;
      }
      bVar8 = *(byte *)(param_2 + 0x5f);
      uVar6 = (ulong)bVar8;
      uVar7 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar8) {
      uVar7 = uVar6;
    }
    if ((uVar7 == 0x11) &&
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eaac0),
       iVar2 == 0)) {
      pcVar9 = "MENU_PROFILE_GUILD_CANT_KICK_REASON_PERMISSIONS";
LAB_100283b78:
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_KICK_TITLE",0);
      uVar4 = FUN_1004e0150(pcVar9,0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
      return;
    }
  }
  return;
}




void FUN_100283bcc(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0xf336) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100283be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))();
  return;
}




void FUN_100283be4(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  void *pvVar9;
  undefined **local_270 [5];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1d8 [8];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(char *)(param_1 + 0x799bc) != '\0') {
    bVar4 = *(byte *)(param_2 + 0xa7);
    uVar7 = (ulong)bVar4;
    sVar1 = *(size_t *)(param_2 + 0x98);
    if (-1 < (char)bVar4) {
      sVar1 = uVar7;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar9 = *(void **)(param_2 + 0x90);
      puVar3 = pvVar9;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(param_2 + 0x90);
      }
      pbVar6 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar6 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar6,sVar1), iVar5 != 0)) {
          return;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar6 != ((uint)pvVar9 & 0xff)) {
          return;
        }
        pbVar8 = (byte *)(param_2 + 0x91);
        while( true ) {
          uVar7 = uVar7 - 1;
          pbVar6 = pbVar6 + 1;
          if (uVar7 == 0) break;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (bVar4 != *pbVar6) {
            return;
          }
        }
      }
      FUN_1004f1580(local_270);
      local_270[0] = &PTR_thunk_FUN_10015a304_10145bec0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      local_110 = 0;
      local_100 = 0;
      uStack_240 = 0;
      local_248 = 0;
      uStack_230 = 0;
      local_238 = 0;
      uStack_220 = 0;
      local_228 = 0;
      uStack_210 = 0;
      local_218 = 0;
      uStack_200 = 0;
      local_208 = 0;
      uStack_1f0 = 0;
      local_1f8 = 0;
      FUN_10015a14c(auStack_1d8);
      FUN_100159fc8(&local_248);
      local_40 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      FUN_1004f15d8(local_270);
      FUN_10028279c(param_1,local_270);
      FUN_10015a304(local_270);
    }
  }
  return;
}




void FUN_100283d68(long param_1)

{
  FUN_100283be4(param_1 + -0x368);
  return;
}




void FUN_100283d70(undefined8 param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  
  iVar6 = FUN_10015d3f8();
  if (iVar6 == 0) goto LAB_100283e48;
  lVar7 = FUN_10015d3ec();
  bVar5 = *(byte *)(lVar7 + 0x548f);
  uVar8 = (ulong)bVar5;
  sVar1 = *(size_t *)(lVar7 + 0x5480);
  if (-1 < (char)bVar5) {
    sVar1 = uVar8;
  }
  bVar4 = *(byte *)(param_2 + 0x197);
  sVar2 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar4) {
    sVar2 = (ulong)bVar4;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar7 + 0x5478);
    puVar3 = pvVar11;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(lVar7 + 0x5478);
    }
    pbVar10 = *(byte **)(param_2 + 0x180);
    if (-1 < (char)bVar4) {
      pbVar10 = (byte *)(param_2 + 0x180);
    }
    if ((char)bVar5 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar10,sVar1), iVar6 == 0)) goto LAB_100283e48;
    }
    else {
      if (sVar1 == 0) {
LAB_100283e48:
        FUN_10028279c(param_1,param_2);
        return;
      }
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(lVar7 + 0x5479);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100283e48;
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  return;
}




void FUN_100283e5c(long param_1)

{
  FUN_100283d70(param_1 + -0x368);
  return;
}




void thunk_FUN_100282b84(void)

{
  FUN_100282b84();
  return;
}




void FUN_100283e68(long param_1)

{
  FUN_100282b84(param_1 + -0x368);
  return;
}




void thunk_FUN_100283024(void)

{
  FUN_100283024();
  return;
}




void FUN_100283e74(long param_1)

{
  FUN_100283024(param_1 + -0x368);
  return;
}




void thunk_FUN_100283144(void)

{
  FUN_100283144();
  return;
}




void FUN_100283e80(long param_1)

{
  FUN_100283144(param_1 + -0x368);
  return;
}




void thunk_FUN_100283340(void)

{
  FUN_100283340();
  return;
}




void FUN_100283e8c(long param_1)

{
  FUN_100283340(param_1 + -0x368);
  return;
}




void thunk_FUN_10028353c(void)

{
  FUN_10028353c();
  return;
}




void thunk_FUN_10028353c(void)

{
  FUN_10028353c();
  return;
}




void thunk_FUN_100283ab4(void)

{
  FUN_100283ab4();
  return;
}




void FUN_100283ea0(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = FUN_10064081c();
  bVar6 = param_3 == 0;
  uVar2 = 0x3f800000;
  if (bVar6) {
    uVar2 = 0;
  }
  uVar3 = 0x3eb33333;
  if (bVar6) {
    uVar3 = 0x3e19999a;
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = 0x42c80000;
  }
  uVar5 = 0x3f800000;
  if (bVar6) {
    uVar5 = 0x3f666666;
  }
  uVar8 = FUN_100640840(uVar2,uVar3,FUN_10001f160);
  FUN_1006408f4(0,uVar4,uVar3,FUN_10001f160);
  FUN_100640db8(uVar5,uVar5,uVar3,FUN_10001f160);
  uVar9 = FUN_10001f4d4();
  FUN_10063f2a4(uVar9,uVar8);
  lVar1 = param_2 + 0x68b70;
  FUN_100642324(lVar1);
  FUN_100642b7c(lVar1,uVar7);
  if (param_3 != 0) {
    FUN_100280478(param_1,param_2,0,1,1);
    *(uint *)(param_2 + 0x68bf4) = *(uint *)(param_2 + 0x68bf4) | 4;
    *(uint *)(param_2 + 0x404) = *(uint *)(param_2 + 0x404) & 0xfffffffb;
    return;
  }
  uVar7 = FUN_100047300();
  FUN_100642b14(lVar1,uVar7);
  return;
}




void FUN_100284028(long param_1)

{
  undefined8 uVar1;
  
  FUN_1001855dc(param_1 + 0x69990);
  FUN_1001855dc(param_1 + 0x6b680);
  FUN_1001855dc(param_1 + 0x6d5d0);
  FUN_1001855dc(param_1 + 0x6f2c0);
  FUN_1000153b4(param_1 + 0x799a0,&DAT_101d91650);
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_100185730(param_1 + 0x71210,uVar1);
  FUN_100652cdc(param_1 + 0x73218,"checkbox_filled");
  FUN_100652cdc(param_1 + 0x734f0,"checkbox_empty");
  *(undefined4 *)(param_1 + 0x79968) = 0;
  FUN_1001b4c0c(param_1 + 0x74d50,0);
  FUN_1001b4c0c(param_1 + 0x76308,0);
  FUN_1001b4c0c(param_1 + 0x77b98,0);
  if (*(float *)(param_1 + 0x68c3c) != 0.0) {
    *(undefined4 *)(param_1 + 0x68c3c) = 0;
    FUN_1000200a0(param_1 + 0x68bf8);
  }
  if (*(float *)(param_1 + 0x66a5c) != 0.0) {
    *(float *)(param_1 + 0x66a5c) = 0.0;
    FUN_1000200a0(param_1 + 0x66a18);
    return;
  }
  return;
}




void FUN_1002841a4(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23658,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002841f0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x6b680;
  uVar3 = FUN_1001afee4(param_1 + 0x69990);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100282ee8(param_1);
  return;
}




void FUN_10028425c(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x6f2c0;
  uVar3 = FUN_1001afee4(param_1 + 0x6d5d0);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100282ee8(param_1);
  return;
}




void FUN_1002842c8(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar1 = param_1 + 0x71210;
  FUN_10018577c(lVar1);
  uVar4 = FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x71580) & 1) * 0x130 + 0x1e0);
  lVar2 = param_1 + 0x799a0;
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
  FUN_100282ee8(param_1);
  return;
}




void FUN_1002843ac(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  FUN_100644b14(param_2);
  pcVar1 = "checkbox_filled";
  if (param_3 != 0) {
    pcVar1 = "checkbox_empty";
  }
  FUN_100652cdc(param_1 + 0x73218,pcVar1);
  pcVar1 = "checkbox_filled";
  if (param_3 != 1) {
    pcVar1 = "checkbox_empty";
  }
  FUN_100652cdc(param_1 + 0x734f0,pcVar1);
  *(int *)(param_1 + 0x79968) = param_3;
  return;
}




void FUN_100284428(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100642bc8(param_1 + 0x64d68);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_100642bc8(param_1 + 0x68b70), (uVar1 & 1) == 0)) {
    FUN_100282aa0(param_1,0);
    return;
  }
  return;
}




void FUN_100284480(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (*(char *)(param_1 + 0x799bc) == '\0') {
    lVar2 = FUN_10015d3ec();
    if (*(char *)(lVar2 + 0x567c) != '\0') {
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
      pcVar7 = FUN_1002841a4;
LAB_100284528:
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,0,pcVar7);
      return;
    }
    if (param_3 == 1) {
      uVar1 = *(uint *)(param_1 + 0x799b8);
      lVar2 = FUN_10015d3ec();
      if (*(uint *)(lVar2 + 0x5454) < uVar1) {
        uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_GLORY_DIALOG_TEXT",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
        return;
      }
      FUN_1004e313c(auStack_40);
      FUN_1004e38ac(auStack_40,"%d");
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_GLORY_DIALOG_TEXT",0);
      thunk_FUN_1004e439c(auStack_50,uVar3);
      FUN_1004e3120(auStack_60,"[COST]");
      FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TITLE",0);
      uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
      pcVar7 = thunk_FUN_100284bcc;
    }
    else {
      if (param_3 != 0) {
        return;
      }
      uVar1 = *(uint *)(param_1 + 0x799b4);
      lVar2 = FUN_10015d3ec();
      if (*(uint *)(lVar2 + 0x5450) < uVar1) {
        uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_ICE_DIALOG_TEXT",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar6 = FUN_1004e0150("MARKET_DIALOG_BUY_ICE",0);
        pcVar7 = thunk_FUN_1001e3fd8;
        goto LAB_100284528;
      }
      FUN_1004e313c(auStack_40);
      FUN_1004e38ac(auStack_40,"%d");
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_ICE_DIALOG_TEXT",0);
      thunk_FUN_1004e439c(auStack_50,uVar3);
      FUN_1004e3120(auStack_60,"[COST]");
      FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TITLE",0);
      uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
      pcVar7 = thunk_FUN_100284a1c;
    }
    FUN_1001e3120(uVar3,auStack_50,uVar4,uVar5,param_1,pcVar7,0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void thunk_FUN_100284a1c(void)

{
  FUN_100284a1c();
  return;
}




void thunk_FUN_100284bcc(void)

{
  FUN_100284bcc();
  return;
}




void FUN_1002847f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *local_138;
  void *local_130;
  undefined7 local_128;
  char cStack_121;
  char local_111;
  undefined4 local_110;
  undefined8 local_10c;
  undefined1 auStack_100 [8];
  void *local_f8;
  undefined1 auStack_f0 [8];
  void *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [16];
  long local_c8;
  code *pcStack_c0;
  long local_b0;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  char local_69;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  
  thunk_FUN_1001cd434(&local_e0);
  uVar2 = FUN_1004e0150("MAIN_SEASON_GUILD_CREATION_TOOLTIP",0);
  thunk_FUN_1004e439c(auStack_f0,uVar2);
  FUN_1004e3120(&local_138,"[SEASON_NAME]");
  FUN_1000f0f78(auStack_100,0,0,0);
  FUN_1004e3bc4(auStack_f0,0,&local_138,auStack_100);
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  thunk_FUN_1004e439c(&local_138,auStack_f0);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 1;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_d8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  local_b0 = param_1 + 0x794b0;
  local_38 = 2;
  local_50 = 0x3dcccccd;
  iVar1 = FUN_100126c88();
  local_4c = 0x442f0000;
  if (iVar1 == 0) {
    local_4c = 0x43fa0000;
  }
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_MORE_INFO",0);
  FUN_1000153b4(&local_90,uVar2);
  pcStack_c0 = FUN_1002849f4;
  local_c8 = param_1;
  FUN_10001549c(&local_138,"guildProfileSeasonLabel");
  FUN_1001cefb8(param_1 + 0x79880,&local_138,&local_e0);
  if (cStack_121 < '\0') {
    operator_delete(local_138);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
  }
  local_e0 = &PTR_FUN_1014666e0;
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




void FUN_1002849f4(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b408();
  if (iVar1 != 0) {
    FUN_10052b410("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_100284a1c(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  
  puVar1 = (undefined8 *)(param_1 + 0x79970);
  bVar6 = *(byte *)(param_1 + 0x79987);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x79978);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar14,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar13 = (byte *)(param_1 + 0x79971);
        do {
          uVar12 = uVar12 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar12 == 0) {
            return;
          }
          bVar6 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar6 == *pbVar14);
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x799b4);
  lVar8 = FUN_10015d3ec();
  if (*(uint *)(lVar8 + 0x5450) < uVar5) {
    return;
  }
  uVar9 = FUN_10015d3ec();
  uVar10 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x69d00) & 1) * 0x130 + 0x69b70);
  uVar11 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x6d940) & 1) * 0x130 + 0x6d7b0);
  FUN_100167014(uVar9,puVar1,uVar10,uVar11,param_1 + 0x799a0,*(undefined4 *)(param_1 + 0x79968));
  return;
}




void FUN_100284bcc(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  
  puVar1 = (undefined8 *)(param_1 + 0x79988);
  bVar6 = *(byte *)(param_1 + 0x7999f);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x79990);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar14,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar13 = (byte *)(param_1 + 0x79989);
        do {
          uVar12 = uVar12 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar12 == 0) {
            return;
          }
          bVar6 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar6 == *pbVar14);
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x799b8);
  lVar8 = FUN_10015d3ec();
  if (*(uint *)(lVar8 + 0x5454) < uVar5) {
    return;
  }
  uVar9 = FUN_10015d3ec();
  uVar10 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x69d00) & 1) * 0x130 + 0x69b70);
  uVar11 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x6d940) & 1) * 0x130 + 0x6d7b0);
  FUN_100167014(uVar9,puVar1,uVar10,uVar11,param_1 + 0x799a0,*(undefined4 *)(param_1 + 0x79968));
  return;
}




long * FUN_100284d7c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar7 = (undefined8 *)FUN_1006421a8();
  *puVar7 = &PTR_thunk_FUN_100285020_10147e960;
  puVar7 = puVar7 + 0x11;
  thunk_FUN_100652c08(puVar7);
  thunk_FUN_100652c08(param_1 + 0x2f);
  plVar1 = param_1 + 0x4d;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x73;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x99;
  thunk_FUN_100181304(plVar3,0);
  param_1[0x352] = 0;
  param_1[0x351] = 0;
  param_1[0x350] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  iVar6 = FUN_100126c88();
  FUN_100652cac(puVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar5 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar5 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x10c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x1980;
    FUN_1000200a0(puVar7);
  }
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar6 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  FUN_100651038(plVar1,*ppuVar4);
  uVar5 = *(uint *)((long)param_1 + 0x2ec);
  if ((uVar5 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2ec) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar6 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar2,*ppuVar4);
  uVar5 = *(uint *)((long)param_1 + 0x41c);
  if ((uVar5 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x41c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  uVar8 = FUN_1004e0150("MENU_PROFILE_GUILD_INVITE_VIEW",0);
  FUN_1001816d4(0,0x42c80000,0x446b0000,plVar3,0,uVar8,&DAT_10115a168,&DAT_101dc1cb8,
                PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  local_48 = DAT_101d91884;
  local_70 = FUN_100284fe0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x9a,&local_70);
  FUN_1001b4964(plVar3,1);
  return param_1;
}




void FUN_100284fe0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_1001634c4(uVar1,param_1 + 0x1a80,1);
  return;
}




void FUN_10028500c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100285020();
  operator_delete(pvVar1);
  return;
}




void FUN_100285020(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100285020_10147e960;
  if (*(char *)((long)param_1 + 0x1a97) < '\0') {
    operator_delete((void *)param_1[0x350]);
  }
  FUN_10003bd40(param_1 + 0x99);
  thunk_FUN_100651068(param_1 + 0x73);
  thunk_FUN_100651068(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




long * FUN_1002850d0(long *param_1)

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
  long *plVar41;
  long *plVar42;
  long *plVar43;
  undefined **ppuVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  int iVar47;
  long lVar48;
  undefined8 *puVar49;
  undefined8 uVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  code *local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  
  plVar2 = param_1 + 0x5593;
  plVar3 = param_1 + 0x53dc;
  plVar4 = param_1 + 0x5316;
  plVar5 = param_1 + 0x52d9;
  plVar6 = param_1 + 0x5004;
  plVar7 = param_1 + 0x4fc7;
  plVar8 = param_1 + 0x4791;
  plVar9 = param_1 + 0x3870;
  plVar10 = param_1 + 0x371a;
  plVar11 = param_1 + 0x36f8;
  plVar12 = param_1 + 0x328e;
  plVar13 = param_1 + 0x326c;
  lVar48 = FUN_10026d1f4();
  FUN_10014f4a0(lVar48 + 0x368);
  *param_1 = (long)&PTR_thunk_FUN_100286e10_10147ea60;
  param_1[0x6d] = (long)&PTR_FUN_10147ec28;
  thunk_FUN_100264e14();
  FUN_10064e264();
  FUN_1006421a8(plVar13);
  *plVar13 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0x327d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(plVar12);
  *plVar12 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0x329f;
  FUN_10053077c(plVar14,0);
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x336c;
  thunk_FUN_100181304(plVar15,0);
  plVar16 = param_1 + 0x3623;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0x3641;
  thunk_FUN_100652c08();
  plVar18 = param_1 + 0x365f;
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x3685;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x36a3;
  thunk_FUN_100652c08();
  param_1[0x36c2] = 0;
  param_1[0x36c1] = 0;
  plVar21 = param_1 + 0x36c3;
  thunk_FUN_100652c08();
  plVar22 = param_1 + 0x36e1;
  FUN_10064e264();
  FUN_1006421a8(plVar11);
  *plVar11 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x3709;
  FUN_1006421a8();
  param_1[0x3709] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar23 = param_1 + 0x372b;
  FUN_10053077c(plVar23,0);
  plVar24 = param_1 + 0x37d2;
  thunk_FUN_100652c08();
  plVar25 = param_1 + 0x37f0;
  thunk_FUN_100652c08();
  plVar26 = param_1 + 0x380e;
  thunk_FUN_100650e64();
  plVar27 = param_1 + 0x3834;
  thunk_FUN_100652c08();
  plVar28 = param_1 + 0x3852;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar9);
  *plVar9 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar29 = param_1 + 0x3881;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar30 = param_1 + 0x38cd;
  thunk_FUN_100184f78();
  plVar31 = param_1 + 0x3c6b;
  thunk_FUN_100184f78();
  plVar32 = param_1 + 0x4009;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar33 = param_1 + 0x4055;
  thunk_FUN_100184f78();
  plVar34 = param_1 + 0x43f3;
  thunk_FUN_100184f78();
  FUN_1006421a8(plVar8);
  *plVar8 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar35 = param_1 + 0x47a2;
  thunk_FUN_100181304(plVar35,0);
  plVar36 = param_1 + 0x4a59;
  thunk_FUN_100181304(plVar36,0);
  plVar37 = param_1 + 0x4d10;
  thunk_FUN_100181304(plVar37,0);
  FUN_10064e264(plVar7);
  plVar38 = param_1 + 0x4fde;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar6);
  plVar39 = param_1 + 0x5022;
  thunk_FUN_100181304(plVar39,0);
  FUN_10064e264(plVar5);
  plVar40 = param_1 + 0x52f0;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar4);
  thunk_FUN_1001c0018(param_1 + 0x5334,0);
  thunk_FUN_1001ceb64(param_1 + 0x53bf,0);
  puVar49 = (undefined8 *)FUN_1006421a8(plVar3);
  *puVar49 = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64();
  thunk_FUN_1001d0644(param_1 + 0x5413,0);
  puVar49 = (undefined8 *)FUN_1006421a8(plVar2);
  *puVar49 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar41 = param_1 + 0x55a4;
  thunk_FUN_100652c08();
  plVar42 = param_1 + 0x55c2;
  thunk_FUN_100652c08();
  plVar43 = param_1 + 0x55e0;
  thunk_FUN_100650e64();
  param_1[0x5607] = 0;
  param_1[0x5606] = 0;
  FUN_10003330c(param_1 + 0x5608,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x560b,&DAT_101d91198);
  *(undefined8 *)((long)param_1 + 0x2b076) = 0;
  param_1[0x560e] = 0;
  FUN_1006423ec(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_100642bd8(plVar22,plVar13,1);
  FUN_100642bd8(plVar13,param_1 + 0x327d,1);
  FUN_100642bd8(param_1 + 0x327d,param_1 + 0x3255,1);
  FUN_100642bd8(param_1 + 0x3255,plVar14,1);
  FUN_100642bd8(plVar14,plVar12,1);
  FUN_100642bd8(plVar12,param_1 + 0x3346,1);
  FUN_100642bd8(plVar12,plVar15,1);
  FUN_1005308f8(plVar14,plVar16,1);
  FUN_1005308f8(plVar14,plVar17,1);
  FUN_1005308f8(plVar14,plVar18,1);
  FUN_1005308f8(plVar14,plVar19,1);
  FUN_1005308f8(plVar14,plVar20,1);
  FUN_100642bd8(plVar22,plVar11,1);
  FUN_100642bd8(plVar11,plVar1,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100642bd8(plVar10,plVar23,1);
  FUN_1005308f8(plVar23,plVar24,1);
  FUN_1005308f8(plVar23,plVar25,1);
  FUN_1005308f8(plVar23,plVar26,1);
  FUN_1005308f8(plVar23,plVar27,1);
  FUN_1005308f8(plVar23,plVar28,1);
  FUN_1005308f8(plVar23,plVar9,1);
  FUN_100642bd8(plVar9,plVar29,1);
  FUN_100642bd8(plVar9,param_1 + 0x38a7,1);
  FUN_100642bd8(plVar9,plVar30,1);
  FUN_100642bd8(plVar9,plVar31,1);
  FUN_100642bd8(plVar9,plVar32,1);
  FUN_100642bd8(plVar9,param_1 + 0x402f,1);
  FUN_100642bd8(plVar9,plVar33,1);
  FUN_100642bd8(plVar9,plVar34,1);
  FUN_100642bd8(plVar9,plVar8,1);
  FUN_100642bd8(plVar8,plVar35,1);
  FUN_100642bd8(plVar8,plVar36,1);
  FUN_100642bd8(plVar8,plVar37,1);
  FUN_100642bd8(plVar37,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar7,plVar38,1);
  FUN_100642bd8(plVar8,plVar39,1);
  FUN_100642bd8(plVar39,plVar5,1);
  FUN_100642bd8(plVar5,plVar4,1);
  FUN_100642bd8(plVar5,plVar40,1);
  FUN_100642bd8(plVar22,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0x53ed,1);
  FUN_100642bd8(plVar3,plVar2,1);
  FUN_100642bd8(plVar2,plVar41,1);
  FUN_100642bd8(plVar2,plVar42,1);
  FUN_100642bd8(plVar2,plVar43,1);
  FUN_100642bd8(plVar22,param_1 + 0x53bf,1);
  FUN_100642bd8(plVar22,param_1 + 0x70,1);
  iVar47 = FUN_100126c88();
  FUN_100652cac(plVar21,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar21,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1b69c);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b69c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar21);
    uVar51 = *(uint *)((long)param_1 + 0x1b69c);
  }
  *(uint *)((long)param_1 + 0x1b69c) = uVar51 | 0x10;
  FUN_100651594(param_1 + 0x53ed,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_10115a168);
  FUN_100530be0(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar14,0,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_NO_TEAM_BLURB",0);
  FUN_1006513c0(param_1 + 0x3346,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar15,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar45 = DAT_101d91884;
  local_a0 = DAT_101d91884;
  local_c8 = thunk_FUN_10028a890;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x336d,&local_c8);
  FUN_1001b4964(plVar15,1);
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1b19c);
  if ((uVar51 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1b19c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x3300;
    FUN_1000200a0(plVar16);
  }
  FUN_100652cac(plVar17,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  if ((*(uint *)((long)param_1 + 0x1b28c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1b28c) = *(uint *)((long)param_1 + 0x1b28c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar17);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_INVITE_LIST_HEADER",0);
  FUN_1006513c0(plVar18,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar18,*ppuVar44);
  if ((*(uint *)((long)param_1 + 0x1b37c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1b37c) = *(uint *)((long)param_1 + 0x1b37c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar18);
  }
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1b4ac);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b4ac) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar19);
  }
  FUN_100652cac(plVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar20,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1b59c);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b59c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar20);
  }
  if ((*(uint *)((long)param_1 + 0x1b8cc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1b8cc) = *(uint *)((long)param_1 + 0x1b8cc) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100530adc(plVar23,0,1);
  FUN_100652cac(plVar27,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1c224);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c224) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar27);
    uVar51 = *(uint *)((long)param_1 + 0x1c224);
  }
  *(uint *)((long)param_1 + 0x1c224) = uVar51 | 0x10;
  FUN_100652cac(plVar28,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar28,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1c314);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c314) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar28);
    uVar51 = *(uint *)((long)param_1 + 0x1c314);
  }
  *(uint *)((long)param_1 + 0x1c314) = uVar51 | 0x10;
  FUN_100652cac(plVar24,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1bf14);
  if ((uVar51 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1bf14) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x3300;
    FUN_1000200a0(plVar24);
    uVar51 = *(uint *)((long)param_1 + 0x1bf14);
  }
  *(uint *)((long)param_1 + 0x1bf14) = uVar51 | 0x10;
  FUN_100652cac(plVar25,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  uVar51 = *(uint *)((long)param_1 + 0x1c004);
  if ((uVar51 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1c004) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar25);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar26,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar26,*ppuVar44);
  uVar51 = *(uint *)((long)param_1 + 0x1c0f4);
  if ((uVar51 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1c0f4) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar26);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar29,*ppuVar44,&DAT_10115a168);
  uVar51 = *(uint *)((long)param_1 + 0x1c48c);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x1c48c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_1000200a0(plVar29);
  }
  FUN_1004e3120(&local_c8,"1");
  FUN_1006513c0(plVar29,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x38a7,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar30,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar30,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar30,1);
  FUN_100185e38(plVar30,1,3);
  FUN_100185e48(plVar30,1,0x10);
  FUN_100185e70(plVar30,1);
  uVar46 = DAT_101dbd4ac;
  local_a0 = DAT_101dbd4ac;
  local_c8 = thunk_FUN_10028a9cc;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x38ce,&local_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar31,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CONFIRM_CAPTION",0);
  FUN_1001afd98(plVar31,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar31,1);
  FUN_100185e38(plVar31,1,3);
  FUN_100185e48(plVar31,1,0x10);
  FUN_100185e70(plVar31,1);
  local_a0 = uVar46;
  local_c8 = thunk_FUN_10028a9cc;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x3c6c,&local_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x402f,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar32,*ppuVar44,&DAT_10115a168);
  uVar51 = *(uint *)((long)param_1 + 0x200cc);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x200cc) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_1000200a0(plVar32);
  }
  FUN_1004e3120(&local_c8,"2");
  FUN_1006513c0(plVar32,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar33,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar33,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar33,1);
  FUN_100185e38(plVar33,1,2);
  FUN_100185e48(plVar33,1,4);
  FUN_100185e70(plVar33,1);
  local_a0 = uVar46;
  local_c8 = thunk_FUN_10028aa38;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x4056,&local_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar34,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CONFIRM_CAPTION",0);
  FUN_1001afd98(plVar34,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar34,1);
  FUN_100185e38(plVar34,1,2);
  FUN_100185e48(plVar34,1,4);
  FUN_100185e70(plVar34,1);
  local_a0 = uVar46;
  local_c8 = thunk_FUN_10028aa38;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x43f4,&local_c8);
  uVar50 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar35,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar45;
  local_c8 = thunk_FUN_10028aaa4;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x47a3,&local_c8);
  FUN_1001b4964(plVar35,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar36,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar45;
  local_c8 = FUN_100286b4c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x4a5a,&local_c8);
  FUN_1001b4c0c(plVar36,0);
  FUN_1001b4964(plVar36,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar37,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar45;
  local_c8 = FUN_100286b4c;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x4d11,&local_c8);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x4df3,*ppuVar44);
  FUN_1001b495c(0x3f000000,plVar37);
  if ((*(float *)(param_1 + 0x4d1a) != 0.5) || (*(float *)((long)param_1 + 0x268d4) != 0.5)) {
    param_1[0x4d1a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar37);
  }
  FUN_100181b5c(0,0x41f00000,plVar37);
  FUN_100181c68(0x43133333,plVar37);
  FUN_1001b4964(plVar37,1);
  FUN_1001b4c0c(plVar37,0);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0x500c) != 0.0) || (*(float *)((long)param_1 + 0x28064) != 3.0)) {
    param_1[0x500c] = 0x4040000000000000;
    FUN_1000200a0(plVar6);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_c8);
  if ((*(float *)(param_1 + 0x500d) != 0.9) || (*(float *)((long)param_1 + 0x2806c) != 0.9)) {
    param_1[0x500d] = 0x3f6666663f666666;
    FUN_1000200a0(plVar6);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar38,*ppuVar44);
  fVar52 = (float)FUN_100652e60(plVar6);
  fVar53 = *(float *)((long)param_1 + 0x28064) + -3.0;
  if ((*(float *)(param_1 + 0x4fe6) != fVar52) || (*(float *)((long)param_1 + 0x27f34) != fVar53)) {
    *(float *)(param_1 + 0x4fe6) = fVar52;
    *(float *)((long)param_1 + 0x27f34) = fVar53;
    FUN_1000200a0(plVar38);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x4fde] + 0x28))(plVar38,&local_c8);
  fVar52 = (float)FUN_1006425d0(plVar7,0,0,1,1);
  FUN_1006425d0(plVar7,0,0,1,1);
  fVar53 = fVar53 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x4fcf) != fVar52 * -0.5) ||
     (*(float *)((long)param_1 + 0x27e7c) != fVar53)) {
    *(float *)(param_1 + 0x4fcf) = fVar52 * -0.5;
    *(float *)((long)param_1 + 0x27e7c) = fVar53;
    FUN_1000200a0(plVar7);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar39,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar45;
  local_c8 = FUN_100286b4c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x5023,&local_c8);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x5105,*ppuVar44);
  FUN_1001b495c(0x3f000000,plVar39);
  if ((*(float *)(param_1 + 0x502c) != 0.5) || (*(float *)((long)param_1 + 0x28164) != 0.5)) {
    param_1[0x502c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar39);
  }
  FUN_100181b5c(0,0x41f00000,plVar39);
  FUN_100181c68(0x43133333,plVar39);
  FUN_1001b4964(plVar39,1);
  FUN_1001b4c0c(plVar39,0);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0x531e) != 0.0) || (*(float *)((long)param_1 + 0x298f4) != 3.0)) {
    param_1[0x531e] = 0x4040000000000000;
    FUN_1000200a0(plVar4);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_c8);
  if ((*(float *)(param_1 + 0x531f) != 0.9) || (*(float *)((long)param_1 + 0x298fc) != 0.9)) {
    param_1[0x531f] = 0x3f6666663f666666;
    FUN_1000200a0(plVar4);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar40,*ppuVar44);
  fVar52 = (float)FUN_100652e60(plVar4);
  fVar53 = *(float *)((long)param_1 + 0x298f4) + -3.0;
  if ((*(float *)(param_1 + 0x52f8) != fVar52) || (*(float *)((long)param_1 + 0x297c4) != fVar53)) {
    *(float *)(param_1 + 0x52f8) = fVar52;
    *(float *)((long)param_1 + 0x297c4) = fVar53;
    FUN_1000200a0(plVar40);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x52f0] + 0x28))(plVar40,&local_c8);
  fVar52 = (float)FUN_1006425d0(plVar5,0,0,1,1);
  FUN_1006425d0(plVar5,0,0,1,1);
  fVar53 = fVar53 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x52e1) != fVar52 * -0.5) ||
     (*(float *)((long)param_1 + 0x2970c) != fVar53)) {
    *(float *)(param_1 + 0x52e1) = fVar52 * -0.5;
    *(float *)((long)param_1 + 0x2970c) = fVar53;
    FUN_1000200a0(plVar5);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_c8);
  *(uint *)((long)param_1 + 0x29f64) = *(uint *)((long)param_1 + 0x29f64) & 0xfffffffb;
  FUN_100652cac(plVar41,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x2ada4);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ada4) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar41);
  }
  FUN_100652cac(plVar42,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar42,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x2ae94);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ae94) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar42);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_JOIN_DATE",0);
  FUN_1006513c0(plVar43,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar43,*ppuVar44);
  if ((*(uint *)((long)param_1 + 0x2af84) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2af84) = *(uint *)((long)param_1 + 0x2af84) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar43);
  }
  local_a0 = DAT_101dbd460;
  local_c8 = thunk_FUN_10028ae74;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x5346,&local_c8);
  local_a0 = DAT_101dbd48c;
  local_c8 = thunk_FUN_10028ae74;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x5346,&local_c8);
  local_a0 = FUN_100644a94("LeavingUserTeam");
  local_c8 = thunk_FUN_10028b25c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x71,&local_c8);
  *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) & 0xfffffffb;
  FUN_100265da0(param_1 + 0x70,0);
  FUN_100286b5c(param_1);
  *(uint *)((long)param_1 + 0x1b8cc) = *(uint *)((long)param_1 + 0x1b8cc) & 0xfffffffb;
  FUN_100286c7c(0,param_1,1,0);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,FUN_100286e08,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  return param_1;
}




void thunk_FUN_10028a890(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_100642bc8(param_1 + 0x193e8);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_100642bc8(param_1 + 0x1b848), (uVar1 & 1) == 0)) {
    lVar2 = FUN_10015d3ec();
    if (*(char *)(lVar2 + 0x567c) != '\0') {
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,0,FUN_10028a980);
      return;
    }
    FUN_100288e44(param_1,1);
    return;
  }
  return;
}




void thunk_FUN_10028a9cc(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x1e358;
  uVar3 = FUN_1001afee4(param_1 + 0x1c668);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100289480(param_1);
  return;
}




void thunk_FUN_10028aa38(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x21f98;
  uVar3 = FUN_1001afee4(param_1 + 0x202a8);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100289480(param_1);
  return;
}




void thunk_FUN_10028aaa4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100642bc8(param_1 + 0x193e8);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_100642bc8(param_1 + 0x1b848), (uVar1 & 1) == 0)) {
    FUN_100288e44(param_1,0);
    return;
  }
  return;
}




void FUN_100286b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10028aafc(param_1,param_2,param_5);
  return;
}




void thunk_FUN_10028ae74(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *pvStack_138;
  void *pvStack_130;
  undefined7 uStack_128;
  char cStack_121;
  char cStack_111;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined1 auStack_100 [8];
  void *pvStack_f8;
  undefined1 auStack_f0 [8];
  void *pvStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  code *pcStack_c0;
  long lStack_b0;
  undefined8 uStack_90;
  void *pvStack_88;
  void *pvStack_80;
  char cStack_69;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_38;
  
  thunk_FUN_1001cd434(&ppuStack_e0);
  uVar2 = FUN_1004e0150("MAIN_SEASON_TEAM_CREATION_TOOLTIP",0);
  thunk_FUN_1004e439c(auStack_f0,uVar2);
  do {
    FUN_1004e3120(&pvStack_138,"[SEASON_NAME]");
    FUN_1000f0f78(auStack_100,0,0,0);
    uVar3 = FUN_1004e3bc4(auStack_f0,0,&pvStack_138,auStack_100);
    if (pvStack_f8 != (void *)0x0) {
      operator_delete__(pvStack_f8);
    }
    if (pvStack_130 != (void *)0x0) {
      operator_delete__(pvStack_130);
    }
  } while ((uVar3 & 1) != 0);
  thunk_FUN_1004e439c(&pvStack_138,auStack_f0);
  FUN_10003330c(&uStack_128,&DAT_101d91198);
  uStack_110 = 1;
  uStack_10c = 0x41a00000;
  FUN_10003c048(auStack_d8,&pvStack_138);
  if (cStack_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,uStack_128));
  }
  if (pvStack_130 != (void *)0x0) {
    operator_delete__(pvStack_130);
  }
  lStack_b0 = param_1 + 0x29a28;
  uStack_38 = 2;
  uStack_50 = 0x3dcccccd;
  iVar1 = FUN_100126c88();
  uStack_4c = 0x447a0000;
  if (iVar1 == 0) {
    uStack_4c = 0x44480000;
  }
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_MORE_INFO",0);
  FUN_1000153b4(&uStack_90,uVar2);
  pcStack_c0 = FUN_10028b07c;
  lStack_c8 = param_1;
  FUN_10001549c(&pvStack_138,"teamProfileSeasonLabel");
  FUN_1001cefb8(param_1 + 0x29df8,&pvStack_138,&ppuStack_e0);
  if (cStack_121 < '\0') {
    operator_delete(pvStack_138);
  }
  if (pvStack_e8 != (void *)0x0) {
    operator_delete__(pvStack_e8);
  }
  ppuStack_e0 = &PTR_FUN_1014666e0;
  if (cStack_69 < '\0') {
    operator_delete(pvStack_80);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




void thunk_FUN_10028b25c(undefined8 param_1)

{
  undefined **appuStack_120 [5];
  void *pvStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  void *pvStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  void *pvStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  FUN_1004f1580(appuStack_120);
  appuStack_120[0] = &PTR_FUN_10145bf20;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_f0 = 0;
  pvStack_f8 = (void *)0x0;
  pvStack_e0 = (void *)0x0;
  lStack_e8 = 0;
  lStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  pvStack_c8 = (void *)0x0;
  pvStack_60 = (void *)0x0;
  lStack_b8 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  std::string::operator=((string *)&pvStack_f8,(string *)&DAT_101d91198);
  std::string::operator=((string *)&pvStack_e0,(string *)&DAT_101d91198);
  std::string::operator=((string *)&pvStack_c8,(string *)&DAT_101d91198);
  FUN_100288b0c(param_1,appuStack_120);
  appuStack_120[0] = &PTR_FUN_10145bf20;
  if (lStack_50 < 0) {
    operator_delete(pvStack_60);
  }
  FUN_10015ab5c(&uStack_78,1);
  FUN_10015aacc(&uStack_88,1);
  if (lStack_b8 < 0) {
    operator_delete(pvStack_c8);
  }
  if (lStack_d0 < 0) {
    operator_delete(pvStack_e0);
  }
  if (lStack_e8 < 0) {
    operator_delete(pvStack_f8);
  }
  FUN_1004f15a8(appuStack_120);
  return;
}




void FUN_100286b5c(long *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_3c;
  float local_38;
  float local_34;
  
  uVar2 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar2,&local_34,&local_38,&local_3c);
  fVar4 = (local_34 - local_3c) * 0.5;
  fVar3 = local_38 * 0.5;
  bVar1 = false;
  if ((*(float *)(param_1 + 0x3274) == fVar4) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x193a4)) && !NAN(fVar3))) {
    bVar1 = *(float *)((long)param_1 + 0x193a4) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x3274) = fVar4;
    *(float *)((long)param_1 + 0x193a4) = fVar3;
    FUN_1000200a0(param_1 + 0x326c);
    fVar3 = local_38 * 0.5;
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0x3700) == fVar4) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x1b804)) && !NAN(fVar3))) {
    bVar1 = *(float *)((long)param_1 + 0x1b804) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x3700) = fVar4;
    *(float *)((long)param_1 + 0x1b804) = fVar3;
    FUN_1000200a0(param_1 + 0x36f8);
  }
  if (*(float *)((long)param_1 + 0x1942c) != 0.0) {
    *(undefined4 *)((long)param_1 + 0x1942c) = 0;
    FUN_1000200a0(param_1 + 0x327d);
  }
  if (*(float *)((long)param_1 + 0x1b88c) != 100.0) {
    *(undefined4 *)((long)param_1 + 0x1b88c) = 0x42c80000;
    FUN_1000200a0(param_1 + 0x3709);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_100286c7c(undefined8 param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_3 == 0) {
    uVar8 = 0;
    uVar6 = 0x3e19999a;
    uVar7 = 0x3f666666;
    uVar5 = 0xc2c80000;
  }
  else {
    uVar7 = 0x3f800000;
    uVar5 = 0;
    uVar6 = 0x3eb33333;
    if (param_4 != 0) {
      FUN_10015d3ec();
      FUN_100167860();
    }
    uVar8 = 0x3f800000;
  }
  uVar2 = FUN_10064081c(param_1);
  uVar3 = FUN_100640840(uVar8,uVar6,FUN_10001f160);
  FUN_100640db8(uVar7,uVar7,uVar6,FUN_10001f160);
  FUN_1006408f4(0,uVar5,uVar6,FUN_10001f160);
  uVar4 = FUN_10001f4d4();
  FUN_10063f2a4(uVar4,uVar3);
  lVar1 = param_2 + 0x193e8;
  FUN_100642324(lVar1);
  FUN_100642b7c(lVar1,uVar2);
  if (param_3 != 0) {
    *(uint *)(param_2 + 0x1946c) = *(uint *)(param_2 + 0x1946c) | 4;
    *(uint *)(param_2 + 0x404) = *(uint *)(param_2 + 0x404) & 0xfffffffb;
    return;
  }
  uVar2 = FUN_100047300();
  FUN_100642b14(lVar1,uVar2);
  return;
}




void FUN_100286e08(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  uint *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  void *apvStack_a0 [2];
  char cStack_89;
  void *apvStack_88 [2];
  char cStack_71;
  ulong uStack_70;
  long lStack_68;
  
  uStack_70 = 0;
  lStack_68 = 0;
  FUN_100136ce8(&uStack_70);
  if ((int)uStack_70 != 0) {
    uVar11 = 0;
    do {
      lVar8 = lStack_68;
      lVar15 = lStack_68 + uVar11 * 0xe8;
      uVar16 = *(ulong *)(lVar15 + 200);
      if (-1 < (char)*(byte *)(lVar15 + 0xd7)) {
        uVar16 = (ulong)*(byte *)(lVar15 + 0xd7);
      }
      if (uVar16 == 10) {
        iVar3 = std::string::compare(lVar15 + 0xc0U,0,(char *)0xffffffffffffffff,0x1013eb83f);
        if (iVar3 == 0) {
          FUN_10003330c(apvStack_88,&DAT_101d91198);
          FUN_10003330c(apvStack_a0,&DAT_101d91198);
          lVar8 = lVar8 + uVar11 * 0xe8;
          puVar9 = (uint *)(lVar8 + 8);
          uVar4 = *puVar9;
          if (uVar4 == 0) {
            uVar18 = 0;
            uVar10 = 0;
          }
          else {
            uVar16 = 0;
            uVar10 = 0;
            uVar18 = 0;
            do {
              lVar13 = *(long *)(lVar8 + 0x10) + uVar16 * 0xa0;
              if (*(uint *)(lVar13 + 8) != 0) {
                lVar12 = 0;
                uVar17 = 0;
                do {
                  lVar14 = *(long *)(lVar13 + 0x10);
                  uVar1 = lVar14 + lVar12;
                  bVar7 = *(byte *)(uVar1 + 0x17);
                  uVar5 = (ulong)bVar7;
                  uVar6 = *(ulong *)(uVar1 + 8);
                  uVar2 = uVar6;
                  if (-1 < (char)bVar7) {
                    uVar2 = uVar5;
                  }
                  if (uVar2 == 6) {
                    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d247a);
                    if (iVar3 != 0) {
                      bVar7 = *(byte *)(uVar1 + 0x17);
                      uVar5 = (ulong)bVar7;
                      uVar6 = *(ulong *)(uVar1 + 8);
                      goto LAB_100287a38;
                    }
                    std::string::operator=((string *)apvStack_88,(string *)(lVar13 + 0x60));
                    uVar18 = *(undefined4 *)(lVar14 + lVar12 + 0x18);
                  }
                  else {
LAB_100287a38:
                    if (-1 < (char)bVar7) {
                      uVar6 = uVar5;
                    }
                    if ((uVar6 == 4) &&
                       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d24d0)
                       , iVar3 == 0)) {
                      std::string::operator=((string *)apvStack_a0,(string *)(lVar13 + 0x60));
                      uVar10 = *(undefined4 *)(lVar14 + lVar12 + 0x18);
                    }
                  }
                  uVar17 = uVar17 + 1;
                  lVar12 = lVar12 + 0x20;
                } while (uVar17 < *(uint *)(lVar13 + 8));
                uVar4 = *puVar9;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar4);
          }
          uVar16 = *(ulong *)(lVar15 + 200);
          if (-1 < (char)*(byte *)(lVar15 + 0xd7)) {
            uVar16 = (ulong)*(byte *)(lVar15 + 0xd7);
          }
          uStack_a8 = uVar10;
          uStack_a4 = uVar18;
          if ((uVar16 == 10) &&
             (iVar3 = std::string::compare(lVar15 + 0xc0U,0,(char *)0xffffffffffffffff,0x1013eb83f),
             iVar3 == 0)) {
            FUN_10028a11c(param_1,apvStack_a0,&uStack_a8,apvStack_88,&uStack_a4);
          }
          if (cStack_89 < '\0') {
            operator_delete(apvStack_a0[0]);
          }
          if (cStack_71 < '\0') {
            operator_delete(apvStack_88[0]);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uStack_70 & 0xffffffff));
  }
  FUN_100144b1c(&uStack_70,1);
  return;
}




long * thunk_FUN_1002850d0(long *param_1)

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
  long *plVar41;
  long *plVar42;
  long *plVar43;
  undefined **ppuVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  int iVar47;
  long lVar48;
  undefined8 *puVar49;
  undefined8 uVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  code *pcStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  plVar2 = param_1 + 0x5593;
  plVar3 = param_1 + 0x53dc;
  plVar4 = param_1 + 0x5316;
  plVar5 = param_1 + 0x52d9;
  plVar6 = param_1 + 0x5004;
  plVar7 = param_1 + 0x4fc7;
  plVar8 = param_1 + 0x4791;
  plVar9 = param_1 + 0x3870;
  plVar10 = param_1 + 0x371a;
  plVar11 = param_1 + 0x36f8;
  plVar12 = param_1 + 0x328e;
  plVar13 = param_1 + 0x326c;
  lVar48 = FUN_10026d1f4();
  FUN_10014f4a0(lVar48 + 0x368);
  *param_1 = (long)&PTR_thunk_FUN_100286e10_10147ea60;
  param_1[0x6d] = (long)&PTR_FUN_10147ec28;
  thunk_FUN_100264e14();
  FUN_10064e264();
  FUN_1006421a8(plVar13);
  *plVar13 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0x327d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(plVar12);
  *plVar12 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0x329f;
  FUN_10053077c(plVar14,0);
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x336c;
  thunk_FUN_100181304(plVar15,0);
  plVar16 = param_1 + 0x3623;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0x3641;
  thunk_FUN_100652c08();
  plVar18 = param_1 + 0x365f;
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x3685;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x36a3;
  thunk_FUN_100652c08();
  param_1[0x36c2] = 0;
  param_1[0x36c1] = 0;
  plVar21 = param_1 + 0x36c3;
  thunk_FUN_100652c08();
  plVar22 = param_1 + 0x36e1;
  FUN_10064e264();
  FUN_1006421a8(plVar11);
  *plVar11 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x3709;
  FUN_1006421a8();
  param_1[0x3709] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar23 = param_1 + 0x372b;
  FUN_10053077c(plVar23,0);
  plVar24 = param_1 + 0x37d2;
  thunk_FUN_100652c08();
  plVar25 = param_1 + 0x37f0;
  thunk_FUN_100652c08();
  plVar26 = param_1 + 0x380e;
  thunk_FUN_100650e64();
  plVar27 = param_1 + 0x3834;
  thunk_FUN_100652c08();
  plVar28 = param_1 + 0x3852;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar9);
  *plVar9 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar29 = param_1 + 0x3881;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar30 = param_1 + 0x38cd;
  thunk_FUN_100184f78();
  plVar31 = param_1 + 0x3c6b;
  thunk_FUN_100184f78();
  plVar32 = param_1 + 0x4009;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar33 = param_1 + 0x4055;
  thunk_FUN_100184f78();
  plVar34 = param_1 + 0x43f3;
  thunk_FUN_100184f78();
  FUN_1006421a8(plVar8);
  *plVar8 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar35 = param_1 + 0x47a2;
  thunk_FUN_100181304(plVar35,0);
  plVar36 = param_1 + 0x4a59;
  thunk_FUN_100181304(plVar36,0);
  plVar37 = param_1 + 0x4d10;
  thunk_FUN_100181304(plVar37,0);
  FUN_10064e264(plVar7);
  plVar38 = param_1 + 0x4fde;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar6);
  plVar39 = param_1 + 0x5022;
  thunk_FUN_100181304(plVar39,0);
  FUN_10064e264(plVar5);
  plVar40 = param_1 + 0x52f0;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar4);
  thunk_FUN_1001c0018(param_1 + 0x5334,0);
  thunk_FUN_1001ceb64(param_1 + 0x53bf,0);
  puVar49 = (undefined8 *)FUN_1006421a8(plVar3);
  *puVar49 = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64();
  thunk_FUN_1001d0644(param_1 + 0x5413,0);
  puVar49 = (undefined8 *)FUN_1006421a8(plVar2);
  *puVar49 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar41 = param_1 + 0x55a4;
  thunk_FUN_100652c08();
  plVar42 = param_1 + 0x55c2;
  thunk_FUN_100652c08();
  plVar43 = param_1 + 0x55e0;
  thunk_FUN_100650e64();
  param_1[0x5607] = 0;
  param_1[0x5606] = 0;
  FUN_10003330c(param_1 + 0x5608,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x560b,&DAT_101d91198);
  *(undefined8 *)((long)param_1 + 0x2b076) = 0;
  param_1[0x560e] = 0;
  FUN_1006423ec(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_100642bd8(plVar22,plVar13,1);
  FUN_100642bd8(plVar13,param_1 + 0x327d,1);
  FUN_100642bd8(param_1 + 0x327d,param_1 + 0x3255,1);
  FUN_100642bd8(param_1 + 0x3255,plVar14,1);
  FUN_100642bd8(plVar14,plVar12,1);
  FUN_100642bd8(plVar12,param_1 + 0x3346,1);
  FUN_100642bd8(plVar12,plVar15,1);
  FUN_1005308f8(plVar14,plVar16,1);
  FUN_1005308f8(plVar14,plVar17,1);
  FUN_1005308f8(plVar14,plVar18,1);
  FUN_1005308f8(plVar14,plVar19,1);
  FUN_1005308f8(plVar14,plVar20,1);
  FUN_100642bd8(plVar22,plVar11,1);
  FUN_100642bd8(plVar11,plVar1,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100642bd8(plVar10,plVar23,1);
  FUN_1005308f8(plVar23,plVar24,1);
  FUN_1005308f8(plVar23,plVar25,1);
  FUN_1005308f8(plVar23,plVar26,1);
  FUN_1005308f8(plVar23,plVar27,1);
  FUN_1005308f8(plVar23,plVar28,1);
  FUN_1005308f8(plVar23,plVar9,1);
  FUN_100642bd8(plVar9,plVar29,1);
  FUN_100642bd8(plVar9,param_1 + 0x38a7,1);
  FUN_100642bd8(plVar9,plVar30,1);
  FUN_100642bd8(plVar9,plVar31,1);
  FUN_100642bd8(plVar9,plVar32,1);
  FUN_100642bd8(plVar9,param_1 + 0x402f,1);
  FUN_100642bd8(plVar9,plVar33,1);
  FUN_100642bd8(plVar9,plVar34,1);
  FUN_100642bd8(plVar9,plVar8,1);
  FUN_100642bd8(plVar8,plVar35,1);
  FUN_100642bd8(plVar8,plVar36,1);
  FUN_100642bd8(plVar8,plVar37,1);
  FUN_100642bd8(plVar37,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar7,plVar38,1);
  FUN_100642bd8(plVar8,plVar39,1);
  FUN_100642bd8(plVar39,plVar5,1);
  FUN_100642bd8(plVar5,plVar4,1);
  FUN_100642bd8(plVar5,plVar40,1);
  FUN_100642bd8(plVar22,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0x53ed,1);
  FUN_100642bd8(plVar3,plVar2,1);
  FUN_100642bd8(plVar2,plVar41,1);
  FUN_100642bd8(plVar2,plVar42,1);
  FUN_100642bd8(plVar2,plVar43,1);
  FUN_100642bd8(plVar22,param_1 + 0x53bf,1);
  FUN_100642bd8(plVar22,param_1 + 0x70,1);
  iVar47 = FUN_100126c88();
  FUN_100652cac(plVar21,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar21,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1b69c);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b69c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar21);
    uVar51 = *(uint *)((long)param_1 + 0x1b69c);
  }
  *(uint *)((long)param_1 + 0x1b69c) = uVar51 | 0x10;
  FUN_100651594(param_1 + 0x53ed,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_10115a168);
  FUN_100530be0(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar14,0,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_NO_TEAM_BLURB",0);
  FUN_1006513c0(param_1 + 0x3346,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar15,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar45 = DAT_101d91884;
  uStack_a0 = DAT_101d91884;
  pcStack_c8 = thunk_FUN_10028a890;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x336d,&pcStack_c8);
  FUN_1001b4964(plVar15,1);
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1b19c);
  if ((uVar51 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1b19c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x3300;
    FUN_1000200a0(plVar16);
  }
  FUN_100652cac(plVar17,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  if ((*(uint *)((long)param_1 + 0x1b28c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1b28c) = *(uint *)((long)param_1 + 0x1b28c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar17);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_INVITE_LIST_HEADER",0);
  FUN_1006513c0(plVar18,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar18,*ppuVar44);
  if ((*(uint *)((long)param_1 + 0x1b37c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1b37c) = *(uint *)((long)param_1 + 0x1b37c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar18);
  }
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1b4ac);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b4ac) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar19);
  }
  FUN_100652cac(plVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar20,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1b59c);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b59c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar20);
  }
  if ((*(uint *)((long)param_1 + 0x1b8cc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1b8cc) = *(uint *)((long)param_1 + 0x1b8cc) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100530adc(plVar23,0,1);
  FUN_100652cac(plVar27,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1c224);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c224) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar27);
    uVar51 = *(uint *)((long)param_1 + 0x1c224);
  }
  *(uint *)((long)param_1 + 0x1c224) = uVar51 | 0x10;
  FUN_100652cac(plVar28,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar28,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1c314);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c314) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar28);
    uVar51 = *(uint *)((long)param_1 + 0x1c314);
  }
  *(uint *)((long)param_1 + 0x1c314) = uVar51 | 0x10;
  FUN_100652cac(plVar24,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1bf14);
  if ((uVar51 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1bf14) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x3300;
    FUN_1000200a0(plVar24);
    uVar51 = *(uint *)((long)param_1 + 0x1bf14);
  }
  *(uint *)((long)param_1 + 0x1bf14) = uVar51 | 0x10;
  FUN_100652cac(plVar25,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  uVar51 = *(uint *)((long)param_1 + 0x1c004);
  if ((uVar51 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1c004) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar25);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar26,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar26,*ppuVar44);
  uVar51 = *(uint *)((long)param_1 + 0x1c0f4);
  if ((uVar51 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1c0f4) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar26);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar29,*ppuVar44,&DAT_10115a168);
  uVar51 = *(uint *)((long)param_1 + 0x1c48c);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x1c48c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_1000200a0(plVar29);
  }
  FUN_1004e3120(&pcStack_c8,"1");
  FUN_1006513c0(plVar29,&pcStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x38a7,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar30,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar30,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar30,1);
  FUN_100185e38(plVar30,1,3);
  FUN_100185e48(plVar30,1,0x10);
  FUN_100185e70(plVar30,1);
  uVar46 = DAT_101dbd4ac;
  uStack_a0 = DAT_101dbd4ac;
  pcStack_c8 = thunk_FUN_10028a9cc;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x38ce,&pcStack_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar31,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CONFIRM_CAPTION",0);
  FUN_1001afd98(plVar31,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar31,1);
  FUN_100185e38(plVar31,1,3);
  FUN_100185e48(plVar31,1,0x10);
  FUN_100185e70(plVar31,1);
  uStack_a0 = uVar46;
  pcStack_c8 = thunk_FUN_10028a9cc;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x3c6c,&pcStack_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x402f,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar32,*ppuVar44,&DAT_10115a168);
  uVar51 = *(uint *)((long)param_1 + 0x200cc);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x200cc) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_1000200a0(plVar32);
  }
  FUN_1004e3120(&pcStack_c8,"2");
  FUN_1006513c0(plVar32,&pcStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar33,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar33,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar33,1);
  FUN_100185e38(plVar33,1,2);
  FUN_100185e48(plVar33,1,4);
  FUN_100185e70(plVar33,1);
  uStack_a0 = uVar46;
  pcStack_c8 = thunk_FUN_10028aa38;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x4056,&pcStack_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar34,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CONFIRM_CAPTION",0);
  FUN_1001afd98(plVar34,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar34,1);
  FUN_100185e38(plVar34,1,2);
  FUN_100185e48(plVar34,1,4);
  FUN_100185e70(plVar34,1);
  uStack_a0 = uVar46;
  pcStack_c8 = thunk_FUN_10028aa38;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x43f4,&pcStack_c8);
  uVar50 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar35,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar45;
  pcStack_c8 = thunk_FUN_10028aaa4;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x47a3,&pcStack_c8);
  FUN_1001b4964(plVar35,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar36,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar45;
  pcStack_c8 = FUN_100286b4c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x4a5a,&pcStack_c8);
  FUN_1001b4c0c(plVar36,0);
  FUN_1001b4964(plVar36,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar37,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar45;
  pcStack_c8 = FUN_100286b4c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x4d11,&pcStack_c8);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x4df3,*ppuVar44);
  FUN_1001b495c(0x3f000000,plVar37);
  if ((*(float *)(param_1 + 0x4d1a) != 0.5) || (*(float *)((long)param_1 + 0x268d4) != 0.5)) {
    param_1[0x4d1a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar37);
  }
  FUN_100181b5c(0,0x41f00000,plVar37);
  FUN_100181c68(0x43133333,plVar37);
  FUN_1001b4964(plVar37,1);
  FUN_1001b4c0c(plVar37,0);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0x500c) != 0.0) || (*(float *)((long)param_1 + 0x28064) != 3.0)) {
    param_1[0x500c] = 0x4040000000000000;
    FUN_1000200a0(plVar6);
  }
  pcStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&pcStack_c8);
  if ((*(float *)(param_1 + 0x500d) != 0.9) || (*(float *)((long)param_1 + 0x2806c) != 0.9)) {
    param_1[0x500d] = 0x3f6666663f666666;
    FUN_1000200a0(plVar6);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar38,*ppuVar44);
  fVar52 = (float)FUN_100652e60(plVar6);
  fVar53 = *(float *)((long)param_1 + 0x28064) + -3.0;
  if ((*(float *)(param_1 + 0x4fe6) != fVar52) || (*(float *)((long)param_1 + 0x27f34) != fVar53)) {
    *(float *)(param_1 + 0x4fe6) = fVar52;
    *(float *)((long)param_1 + 0x27f34) = fVar53;
    FUN_1000200a0(plVar38);
  }
  pcStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x4fde] + 0x28))(plVar38,&pcStack_c8);
  fVar52 = (float)FUN_1006425d0(plVar7,0,0,1,1);
  FUN_1006425d0(plVar7,0,0,1,1);
  fVar53 = fVar53 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x4fcf) != fVar52 * -0.5) ||
     (*(float *)((long)param_1 + 0x27e7c) != fVar53)) {
    *(float *)(param_1 + 0x4fcf) = fVar52 * -0.5;
    *(float *)((long)param_1 + 0x27e7c) = fVar53;
    FUN_1000200a0(plVar7);
  }
  pcStack_c8 = (code *)0x0;
  (**(code **)(*plVar7 + 0x28))(plVar7,&pcStack_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar39,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar45;
  pcStack_c8 = FUN_100286b4c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x5023,&pcStack_c8);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x5105,*ppuVar44);
  FUN_1001b495c(0x3f000000,plVar39);
  if ((*(float *)(param_1 + 0x502c) != 0.5) || (*(float *)((long)param_1 + 0x28164) != 0.5)) {
    param_1[0x502c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar39);
  }
  FUN_100181b5c(0,0x41f00000,plVar39);
  FUN_100181c68(0x43133333,plVar39);
  FUN_1001b4964(plVar39,1);
  FUN_1001b4c0c(plVar39,0);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0x531e) != 0.0) || (*(float *)((long)param_1 + 0x298f4) != 3.0)) {
    param_1[0x531e] = 0x4040000000000000;
    FUN_1000200a0(plVar4);
  }
  pcStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&pcStack_c8);
  if ((*(float *)(param_1 + 0x531f) != 0.9) || (*(float *)((long)param_1 + 0x298fc) != 0.9)) {
    param_1[0x531f] = 0x3f6666663f666666;
    FUN_1000200a0(plVar4);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar40,*ppuVar44);
  fVar52 = (float)FUN_100652e60(plVar4);
  fVar53 = *(float *)((long)param_1 + 0x298f4) + -3.0;
  if ((*(float *)(param_1 + 0x52f8) != fVar52) || (*(float *)((long)param_1 + 0x297c4) != fVar53)) {
    *(float *)(param_1 + 0x52f8) = fVar52;
    *(float *)((long)param_1 + 0x297c4) = fVar53;
    FUN_1000200a0(plVar40);
  }
  pcStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x52f0] + 0x28))(plVar40,&pcStack_c8);
  fVar52 = (float)FUN_1006425d0(plVar5,0,0,1,1);
  FUN_1006425d0(plVar5,0,0,1,1);
  fVar53 = fVar53 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x52e1) != fVar52 * -0.5) ||
     (*(float *)((long)param_1 + 0x2970c) != fVar53)) {
    *(float *)(param_1 + 0x52e1) = fVar52 * -0.5;
    *(float *)((long)param_1 + 0x2970c) = fVar53;
    FUN_1000200a0(plVar5);
  }
  pcStack_c8 = (code *)0x0;
  (**(code **)(*plVar5 + 0x28))(plVar5,&pcStack_c8);
  *(uint *)((long)param_1 + 0x29f64) = *(uint *)((long)param_1 + 0x29f64) & 0xfffffffb;
  FUN_100652cac(plVar41,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x2ada4);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ada4) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar41);
  }
  FUN_100652cac(plVar42,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar42,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x2ae94);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ae94) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar42);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_JOIN_DATE",0);
  FUN_1006513c0(plVar43,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar43,*ppuVar44);
  if ((*(uint *)((long)param_1 + 0x2af84) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2af84) = *(uint *)((long)param_1 + 0x2af84) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar43);
  }
  uStack_a0 = DAT_101dbd460;
  pcStack_c8 = thunk_FUN_10028ae74;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x5346,&pcStack_c8);
  uStack_a0 = DAT_101dbd48c;
  pcStack_c8 = thunk_FUN_10028ae74;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x5346,&pcStack_c8);
  uStack_a0 = FUN_100644a94("LeavingUserTeam");
  pcStack_c8 = thunk_FUN_10028b25c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x71,&pcStack_c8);
  *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) & 0xfffffffb;
  FUN_100265da0(param_1 + 0x70,0);
  FUN_100286b5c(param_1);
  *(uint *)((long)param_1 + 0x1b8cc) = *(uint *)((long)param_1 + 0x1b8cc) & 0xfffffffb;
  FUN_100286c7c(0,param_1,1,0);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,FUN_100286e08,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  return param_1;
}




void FUN_100286e10(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100286e10_10147ea60;
  param_1[0x6d] = &PTR_FUN_10147ec28;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  FUN_10028779c(param_1);
  FUN_100287808(param_1);
  if (*(char *)((long)param_1 + 0x2b06f) < '\0') {
    operator_delete((void *)param_1[0x560b]);
  }
  if (*(char *)((long)param_1 + 0x2b057) < '\0') {
    operator_delete((void *)param_1[0x5608]);
  }
  if ((void *)param_1[0x5607] != (void *)0x0) {
    operator_delete__((void *)param_1[0x5607]);
    param_1[0x5607] = 0;
    param_1[0x5606] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x55e0);
  param_1[0x55c2] = &PTR_FUN_1014a7108;
  param_1[0x55d9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x55dc);
  FUN_10064e2bc(param_1 + 0x55c2);
  param_1[0x55a4] = &PTR_FUN_1014a7108;
  param_1[0x55bb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x55be);
  FUN_10064e2bc(param_1 + 0x55a4);
  FUN_10064221c(param_1 + 0x5593);
  param_1[0x5413] = &PTR_FUN_1014623b0;
  param_1[0x5573] = &PTR_FUN_1014a7108;
  param_1[0x558a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x558d);
  FUN_10064e2bc(param_1 + 0x5573);
  param_1[0x5555] = &PTR_FUN_1014a7108;
  param_1[0x556c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x556f);
  FUN_10064e2bc(param_1 + 0x5555);
  FUN_100191808(param_1 + 0x54ea);
  FUN_100191808(param_1 + 0x547f);
  thunk_FUN_100651068(param_1 + 0x5459);
  param_1[0x543b] = &PTR_FUN_1014a7108;
  param_1[0x5452] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5455);
  FUN_10064e2bc(param_1 + 0x543b);
  FUN_10064221c(param_1 + 0x542a);
  FUN_10064e2bc(param_1 + 0x5413);
  thunk_FUN_100651068(param_1 + 0x53ed);
  FUN_10064221c(param_1 + 0x53dc);
  thunk_FUN_1001cec4c(param_1 + 0x53bf);
  param_1[0x5334] = &PTR_FUN_1014653b8;
  param_1[0x5393] = &PTR_FUN_10145eb78;
  param_1[0x53aa] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x53bb] != (void *)0x0) {
    operator_delete__((void *)param_1[0x53bb]);
    param_1[0x53bb] = 0;
    param_1[0x53ba] = 0;
  }
  FUN_100651068(param_1 + 0x5393);
  thunk_FUN_100651068(param_1 + 0x536d);
  FUN_10064221c(param_1 + 0x535c);
  thunk_FUN_10064e2bc(param_1 + 0x5345);
  FUN_10064221c(param_1 + 0x5334);
  param_1[0x5316] = &PTR_FUN_1014a7108;
  param_1[0x532d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5330);
  FUN_10064e2bc(param_1 + 0x5316);
  thunk_FUN_100651068(param_1 + 0x52f0);
  thunk_FUN_10064e2bc(param_1 + 0x52d9);
  FUN_10003bd40(param_1 + 0x5022);
  param_1[0x5004] = &PTR_FUN_1014a7108;
  param_1[0x501b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x501e);
  FUN_10064e2bc(param_1 + 0x5004);
  thunk_FUN_100651068(param_1 + 0x4fde);
  thunk_FUN_10064e2bc(param_1 + 0x4fc7);
  FUN_10003bd40(param_1 + 0x4d10);
  FUN_10003bd40(param_1 + 0x4a59);
  FUN_10003bd40(param_1 + 0x47a2);
  FUN_10064221c(param_1 + 0x4791);
  param_1[0x43f3] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x478b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x478b]);
    param_1[0x478b] = 0;
    param_1[0x478a] = 0;
  }
  if ((void *)param_1[0x4789] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4789]);
    param_1[0x4789] = 0;
    param_1[0x4788] = 0;
  }
  if ((void *)param_1[0x4787] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4787]);
    param_1[0x4787] = 0;
    param_1[0x4786] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x4760);
  FUN_10064e2bc(param_1 + 0x4745);
  FUN_10064e2bc(param_1 + 0x472a);
  FUN_10003bd40(param_1 + 0x4473);
  FUN_100186088(param_1 + 0x43f3);
  param_1[0x4055] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x43ed] != (void *)0x0) {
    operator_delete__((void *)param_1[0x43ed]);
    param_1[0x43ed] = 0;
    param_1[0x43ec] = 0;
  }
  if ((void *)param_1[0x43eb] != (void *)0x0) {
    operator_delete__((void *)param_1[0x43eb]);
    param_1[0x43eb] = 0;
    param_1[0x43ea] = 0;
  }
  if ((void *)param_1[0x43e9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x43e9]);
    param_1[0x43e9] = 0;
    param_1[0x43e8] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x43c2);
  FUN_10064e2bc(param_1 + 0x43a7);
  FUN_10064e2bc(param_1 + 0x438c);
  FUN_10003bd40(param_1 + 0x40d5);
  FUN_100186088(param_1 + 0x4055);
  thunk_FUN_100651068(param_1 + 0x402f);
  thunk_FUN_100651068(param_1 + 0x4009);
  param_1[0x3c6b] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x4003] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4003]);
    param_1[0x4003] = 0;
    param_1[0x4002] = 0;
  }
  if ((void *)param_1[0x4001] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4001]);
    param_1[0x4001] = 0;
    param_1[0x4000] = 0;
  }
  if ((void *)param_1[0x3fff] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3fff]);
    param_1[0x3fff] = 0;
    param_1[0x3ffe] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x3fd8);
  FUN_10064e2bc(param_1 + 0x3fbd);
  FUN_10064e2bc(param_1 + 0x3fa2);
  FUN_10003bd40(param_1 + 0x3ceb);
  FUN_100186088(param_1 + 0x3c6b);
  param_1[0x38cd] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x3c65] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3c65]);
    param_1[0x3c65] = 0;
    param_1[0x3c64] = 0;
  }
  if ((void *)param_1[0x3c63] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3c63]);
    param_1[0x3c63] = 0;
    param_1[0x3c62] = 0;
  }
  if ((void *)param_1[0x3c61] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3c61]);
    param_1[0x3c61] = 0;
    param_1[0x3c60] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x3c3a);
  FUN_10064e2bc(param_1 + 0x3c1f);
  FUN_10064e2bc(param_1 + 0x3c04);
  FUN_10003bd40(param_1 + 0x394d);
  FUN_100186088(param_1 + 0x38cd);
  thunk_FUN_100651068(param_1 + 0x38a7);
  thunk_FUN_100651068(param_1 + 0x3881);
  FUN_10064221c(param_1 + 0x3870);
  param_1[0x3852] = &PTR_FUN_1014a7108;
  param_1[0x3869] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x386c);
  FUN_10064e2bc(param_1 + 0x3852);
  param_1[0x3834] = &PTR_FUN_1014a7108;
  param_1[0x384b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x384e);
  FUN_10064e2bc(param_1 + 0x3834);
  thunk_FUN_100651068(param_1 + 0x380e);
  param_1[0x37f0] = &PTR_FUN_1014a7108;
  param_1[0x3807] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x380a);
  FUN_10064e2bc(param_1 + 0x37f0);
  param_1[0x37d2] = &PTR_FUN_1014a7108;
  param_1[0x37e9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x37ec);
  FUN_10064e2bc(param_1 + 0x37d2);
  thunk_FUN_100530784(param_1 + 0x372b);
  FUN_10064221c(param_1 + 0x371a);
  FUN_10064221c(param_1 + 0x3709);
  FUN_10064221c(param_1 + 0x36f8);
  thunk_FUN_10064e2bc(param_1 + 0x36e1);
  param_1[0x36c3] = &PTR_FUN_1014a7108;
  param_1[0x36da] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x36dd);
  FUN_10064e2bc(param_1 + 0x36c3);
  if ((void *)param_1[0x36c2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x36c2]);
    param_1[0x36c2] = 0;
    param_1[0x36c1] = 0;
  }
  param_1[0x36a3] = &PTR_FUN_1014a7108;
  param_1[0x36ba] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x36bd);
  FUN_10064e2bc(param_1 + 0x36a3);
  param_1[0x3685] = &PTR_FUN_1014a7108;
  param_1[0x369c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x369f);
  FUN_10064e2bc(param_1 + 0x3685);
  thunk_FUN_100651068(param_1 + 0x365f);
  param_1[0x3641] = &PTR_FUN_1014a7108;
  param_1[0x3658] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x365b);
  FUN_10064e2bc(param_1 + 0x3641);
  param_1[0x3623] = &PTR_FUN_1014a7108;
  param_1[0x363a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x363d);
  FUN_10064e2bc(param_1 + 0x3623);
  FUN_10003bd40(param_1 + 0x336c);
  thunk_FUN_100651068(param_1 + 0x3346);
  thunk_FUN_100530784(param_1 + 0x329f);
  FUN_10064221c(param_1 + 0x328e);
  FUN_10064221c(param_1 + 0x327d);
  FUN_10064221c(param_1 + 0x326c);
  thunk_FUN_10064e2bc(param_1 + 0x3255);
  thunk_FUN_1002650dc(param_1 + 0x70);
  FUN_10014f51c(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}




void FUN_10028779c(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (uint *)(param_1 + 0x2b030);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x2b038);
      plVar2 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        lVar4 = *(long *)(param_1 + 0x2b038);
        uVar3 = *puVar1;
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (*(long *)(param_1 + 0x2b038) != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_100287808(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (uint *)(param_1 + 0x1b608);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x1b610);
      plVar2 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        lVar4 = *(long *)(param_1 + 0x1b610);
        uVar3 = *puVar1;
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (*(long *)(param_1 + 0x1b610) != 0) {
    *puVar1 = 0;
  }
  return;
}




void thunk_FUN_100286e10(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100286e10_10147ea60;
  param_1[0x6d] = &PTR_FUN_10147ec28;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  FUN_10028779c(param_1);
  FUN_100287808(param_1);
  if (*(char *)((long)param_1 + 0x2b06f) < '\0') {
    operator_delete((void *)param_1[0x560b]);
  }
  if (*(char *)((long)param_1 + 0x2b057) < '\0') {
    operator_delete((void *)param_1[0x5608]);
  }
  if ((void *)param_1[0x5607] != (void *)0x0) {
    operator_delete__((void *)param_1[0x5607]);
    param_1[0x5607] = 0;
    param_1[0x5606] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x55e0);
  param_1[0x55c2] = &PTR_FUN_1014a7108;
  param_1[0x55d9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x55dc);
  FUN_10064e2bc(param_1 + 0x55c2);
  param_1[0x55a4] = &PTR_FUN_1014a7108;
  param_1[0x55bb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x55be);
  FUN_10064e2bc(param_1 + 0x55a4);
  FUN_10064221c(param_1 + 0x5593);
  param_1[0x5413] = &PTR_FUN_1014623b0;
  param_1[0x5573] = &PTR_FUN_1014a7108;
  param_1[0x558a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x558d);
  FUN_10064e2bc(param_1 + 0x5573);
  param_1[0x5555] = &PTR_FUN_1014a7108;
  param_1[0x556c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x556f);
  FUN_10064e2bc(param_1 + 0x5555);
  FUN_100191808(param_1 + 0x54ea);
  FUN_100191808(param_1 + 0x547f);
  thunk_FUN_100651068(param_1 + 0x5459);
  param_1[0x543b] = &PTR_FUN_1014a7108;
  param_1[0x5452] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5455);
  FUN_10064e2bc(param_1 + 0x543b);
  FUN_10064221c(param_1 + 0x542a);
  FUN_10064e2bc(param_1 + 0x5413);
  thunk_FUN_100651068(param_1 + 0x53ed);
  FUN_10064221c(param_1 + 0x53dc);
  thunk_FUN_1001cec4c(param_1 + 0x53bf);
  param_1[0x5334] = &PTR_FUN_1014653b8;
  param_1[0x5393] = &PTR_FUN_10145eb78;
  param_1[0x53aa] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x53bb] != (void *)0x0) {
    operator_delete__((void *)param_1[0x53bb]);
    param_1[0x53bb] = 0;
    param_1[0x53ba] = 0;
  }
  FUN_100651068(param_1 + 0x5393);
  thunk_FUN_100651068(param_1 + 0x536d);
  FUN_10064221c(param_1 + 0x535c);
  thunk_FUN_10064e2bc(param_1 + 0x5345);
  FUN_10064221c(param_1 + 0x5334);
  param_1[0x5316] = &PTR_FUN_1014a7108;
  param_1[0x532d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5330);
  FUN_10064e2bc(param_1 + 0x5316);
  thunk_FUN_100651068(param_1 + 0x52f0);
  thunk_FUN_10064e2bc(param_1 + 0x52d9);
  FUN_10003bd40(param_1 + 0x5022);
  param_1[0x5004] = &PTR_FUN_1014a7108;
  param_1[0x501b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x501e);
  FUN_10064e2bc(param_1 + 0x5004);
  thunk_FUN_100651068(param_1 + 0x4fde);
  thunk_FUN_10064e2bc(param_1 + 0x4fc7);
  FUN_10003bd40(param_1 + 0x4d10);
  FUN_10003bd40(param_1 + 0x4a59);
  FUN_10003bd40(param_1 + 0x47a2);
  FUN_10064221c(param_1 + 0x4791);
  param_1[0x43f3] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x478b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x478b]);
    param_1[0x478b] = 0;
    param_1[0x478a] = 0;
  }
  if ((void *)param_1[0x4789] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4789]);
    param_1[0x4789] = 0;
    param_1[0x4788] = 0;
  }
  if ((void *)param_1[0x4787] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4787]);
    param_1[0x4787] = 0;
    param_1[0x4786] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x4760);
  FUN_10064e2bc(param_1 + 0x4745);
  FUN_10064e2bc(param_1 + 0x472a);
  FUN_10003bd40(param_1 + 0x4473);
  FUN_100186088(param_1 + 0x43f3);
  param_1[0x4055] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x43ed] != (void *)0x0) {
    operator_delete__((void *)param_1[0x43ed]);
    param_1[0x43ed] = 0;
    param_1[0x43ec] = 0;
  }
  if ((void *)param_1[0x43eb] != (void *)0x0) {
    operator_delete__((void *)param_1[0x43eb]);
    param_1[0x43eb] = 0;
    param_1[0x43ea] = 0;
  }
  if ((void *)param_1[0x43e9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x43e9]);
    param_1[0x43e9] = 0;
    param_1[0x43e8] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x43c2);
  FUN_10064e2bc(param_1 + 0x43a7);
  FUN_10064e2bc(param_1 + 0x438c);
  FUN_10003bd40(param_1 + 0x40d5);
  FUN_100186088(param_1 + 0x4055);
  thunk_FUN_100651068(param_1 + 0x402f);
  thunk_FUN_100651068(param_1 + 0x4009);
  param_1[0x3c6b] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x4003] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4003]);
    param_1[0x4003] = 0;
    param_1[0x4002] = 0;
  }
  if ((void *)param_1[0x4001] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4001]);
    param_1[0x4001] = 0;
    param_1[0x4000] = 0;
  }
  if ((void *)param_1[0x3fff] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3fff]);
    param_1[0x3fff] = 0;
    param_1[0x3ffe] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x3fd8);
  FUN_10064e2bc(param_1 + 0x3fbd);
  FUN_10064e2bc(param_1 + 0x3fa2);
  FUN_10003bd40(param_1 + 0x3ceb);
  FUN_100186088(param_1 + 0x3c6b);
  param_1[0x38cd] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x3c65] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3c65]);
    param_1[0x3c65] = 0;
    param_1[0x3c64] = 0;
  }
  if ((void *)param_1[0x3c63] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3c63]);
    param_1[0x3c63] = 0;
    param_1[0x3c62] = 0;
  }
  if ((void *)param_1[0x3c61] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3c61]);
    param_1[0x3c61] = 0;
    param_1[0x3c60] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x3c3a);
  FUN_10064e2bc(param_1 + 0x3c1f);
  FUN_10064e2bc(param_1 + 0x3c04);
  FUN_10003bd40(param_1 + 0x394d);
  FUN_100186088(param_1 + 0x38cd);
  thunk_FUN_100651068(param_1 + 0x38a7);
  thunk_FUN_100651068(param_1 + 0x3881);
  FUN_10064221c(param_1 + 0x3870);
  param_1[0x3852] = &PTR_FUN_1014a7108;
  param_1[0x3869] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x386c);
  FUN_10064e2bc(param_1 + 0x3852);
  param_1[0x3834] = &PTR_FUN_1014a7108;
  param_1[0x384b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x384e);
  FUN_10064e2bc(param_1 + 0x3834);
  thunk_FUN_100651068(param_1 + 0x380e);
  param_1[0x37f0] = &PTR_FUN_1014a7108;
  param_1[0x3807] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x380a);
  FUN_10064e2bc(param_1 + 0x37f0);
  param_1[0x37d2] = &PTR_FUN_1014a7108;
  param_1[0x37e9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x37ec);
  FUN_10064e2bc(param_1 + 0x37d2);
  thunk_FUN_100530784(param_1 + 0x372b);
  FUN_10064221c(param_1 + 0x371a);
  FUN_10064221c(param_1 + 0x3709);
  FUN_10064221c(param_1 + 0x36f8);
  thunk_FUN_10064e2bc(param_1 + 0x36e1);
  param_1[0x36c3] = &PTR_FUN_1014a7108;
  param_1[0x36da] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x36dd);
  FUN_10064e2bc(param_1 + 0x36c3);
  if ((void *)param_1[0x36c2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x36c2]);
    param_1[0x36c2] = 0;
    param_1[0x36c1] = 0;
  }
  param_1[0x36a3] = &PTR_FUN_1014a7108;
  param_1[0x36ba] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x36bd);
  FUN_10064e2bc(param_1 + 0x36a3);
  param_1[0x3685] = &PTR_FUN_1014a7108;
  param_1[0x369c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x369f);
  FUN_10064e2bc(param_1 + 0x3685);
  thunk_FUN_100651068(param_1 + 0x365f);
  param_1[0x3641] = &PTR_FUN_1014a7108;
  param_1[0x3658] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x365b);
  FUN_10064e2bc(param_1 + 0x3641);
  param_1[0x3623] = &PTR_FUN_1014a7108;
  param_1[0x363a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x363d);
  FUN_10064e2bc(param_1 + 0x3623);
  FUN_10003bd40(param_1 + 0x336c);
  thunk_FUN_100651068(param_1 + 0x3346);
  thunk_FUN_100530784(param_1 + 0x329f);
  FUN_10064221c(param_1 + 0x328e);
  FUN_10064221c(param_1 + 0x327d);
  FUN_10064221c(param_1 + 0x326c);
  thunk_FUN_10064e2bc(param_1 + 0x3255);
  thunk_FUN_1002650dc(param_1 + 0x70);
  FUN_10014f51c(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}




void FUN_100287878(long param_1)

{
  FUN_100286e10(param_1 + -0x368);
  return;
}




void FUN_100287880(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100286e10();
  operator_delete(pvVar1);
  return;
}




void FUN_100287894(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100286e10(param_1 + -0x368);
  operator_delete(pvVar1);
  return;
}




void FUN_1002878ac(void)

{
  return;
}




void FUN_1002878b0(long param_1,int param_2)

{
  FUN_100265224(param_1 + 0x380);
  if (param_2 != 0) {
    FUN_1002878ec(param_1);
    return;
  }
  return;
}




void FUN_1002878ec(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  uint *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined4 local_a8;
  undefined4 uStack_a4;
  void *local_a0 [2];
  char local_89;
  void *local_88 [2];
  char local_71;
  ulong local_70;
  long local_68;
  
  local_70 = 0;
  local_68 = 0;
  FUN_100136ce8(&local_70);
  if ((int)local_70 != 0) {
    uVar11 = 0;
    do {
      lVar8 = local_68;
      lVar15 = local_68 + uVar11 * 0xe8;
      uVar16 = *(ulong *)(lVar15 + 200);
      if (-1 < (char)*(byte *)(lVar15 + 0xd7)) {
        uVar16 = (ulong)*(byte *)(lVar15 + 0xd7);
      }
      if (uVar16 == 10) {
        iVar3 = std::string::compare(lVar15 + 0xc0U,0,(char *)0xffffffffffffffff,0x1013eb83f);
        if (iVar3 == 0) {
          FUN_10003330c(local_88,&DAT_101d91198);
          FUN_10003330c(local_a0,&DAT_101d91198);
          lVar8 = lVar8 + uVar11 * 0xe8;
          puVar9 = (uint *)(lVar8 + 8);
          uVar4 = *puVar9;
          if (uVar4 == 0) {
            uVar18 = 0;
            uVar10 = 0;
          }
          else {
            uVar16 = 0;
            uVar10 = 0;
            uVar18 = 0;
            do {
              lVar13 = *(long *)(lVar8 + 0x10) + uVar16 * 0xa0;
              if (*(uint *)(lVar13 + 8) != 0) {
                lVar12 = 0;
                uVar17 = 0;
                do {
                  lVar14 = *(long *)(lVar13 + 0x10);
                  uVar1 = lVar14 + lVar12;
                  bVar7 = *(byte *)(uVar1 + 0x17);
                  uVar5 = (ulong)bVar7;
                  uVar6 = *(ulong *)(uVar1 + 8);
                  uVar2 = uVar6;
                  if (-1 < (char)bVar7) {
                    uVar2 = uVar5;
                  }
                  if (uVar2 == 6) {
                    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d247a);
                    if (iVar3 != 0) {
                      bVar7 = *(byte *)(uVar1 + 0x17);
                      uVar5 = (ulong)bVar7;
                      uVar6 = *(ulong *)(uVar1 + 8);
                      goto LAB_100287a38;
                    }
                    std::string::operator=((string *)local_88,(string *)(lVar13 + 0x60));
                    uVar18 = *(undefined4 *)(lVar14 + lVar12 + 0x18);
                  }
                  else {
LAB_100287a38:
                    if (-1 < (char)bVar7) {
                      uVar6 = uVar5;
                    }
                    if ((uVar6 == 4) &&
                       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d24d0)
                       , iVar3 == 0)) {
                      std::string::operator=((string *)local_a0,(string *)(lVar13 + 0x60));
                      uVar10 = *(undefined4 *)(lVar14 + lVar12 + 0x18);
                    }
                  }
                  uVar17 = uVar17 + 1;
                  lVar12 = lVar12 + 0x20;
                } while (uVar17 < *(uint *)(lVar13 + 8));
                uVar4 = *puVar9;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar4);
          }
          uVar16 = *(ulong *)(lVar15 + 200);
          if (-1 < (char)*(byte *)(lVar15 + 0xd7)) {
            uVar16 = (ulong)*(byte *)(lVar15 + 0xd7);
          }
          local_a8 = uVar10;
          uStack_a4 = uVar18;
          if ((uVar16 == 10) &&
             (iVar3 = std::string::compare(lVar15 + 0xc0U,0,(char *)0xffffffffffffffff,0x1013eb83f),
             iVar3 == 0)) {
            FUN_10028a11c(param_1,local_a0,&local_a8,local_88,&uStack_a4);
          }
          if (local_89 < '\0') {
            operator_delete(local_a0[0]);
          }
          if (local_71 < '\0') {
            operator_delete(local_88[0]);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (local_70 & 0xffffffff));
  }
  FUN_100144b1c(&local_70,1);
  return;
}




void FUN_100287b8c(undefined8 param_1)

{
  FUN_10026d3f8();
  FUN_100286b5c(param_1);
  return;
}




void FUN_100287bb0(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 *local_a8;
  
  plVar2 = param_3 + 0x365f;
  uVar14 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  iVar9 = FUN_100126c88();
  FUN_10064e47c(uVar14,param_2,param_3 + 0x70);
  local_a8 = (undefined1 *)0x0;
  FUN_1001e7260(param_3 + 0x70,&local_a8);
  fVar17 = (float)uVar14;
  FUN_10064e47c(uVar14,fVar17 * 0.75,param_3 + 0x36c3);
  fVar15 = *(float *)(param_3 + 0x36cc);
  if ((fVar15 != 1.3) || (fVar15 = *(float *)((long)param_3 + 0x1b664), fVar15 != 1.3)) {
    param_3[0x36cc] = 0x3fa666663fa66666;
    FUN_1000200a0(param_3 + 0x36c3);
  }
  plVar3 = param_3 + 0x5334;
  fVar13 = (float)FUN_1006425d0(plVar3,0,0,1,1);
  fVar13 = (fVar17 + -48.0) - fVar13;
  FUN_1006425d0(plVar3,0,0,1,1);
  fVar15 = fVar15 * 0.5 + 32.0;
  bVar8 = false;
  if ((*(float *)(param_3 + 0x533c) == fVar13) &&
     (bVar8 = false, !NAN(*(float *)((long)param_3 + 0x299e4)) && !NAN(fVar15))) {
    bVar8 = *(float *)((long)param_3 + 0x299e4) == fVar15;
  }
  if (!bVar8) {
    *(float *)(param_3 + 0x533c) = fVar13;
    *(float *)((long)param_3 + 0x299e4) = fVar15;
    FUN_1000200a0(plVar3);
  }
  plVar3 = param_3 + 0x328e;
  FUN_10064e47c(uVar14,param_2,param_3 + 0x36e1);
  if (*(float *)((long)param_3 + 0x1b74c) != *(float *)(param_3 + 0x560e)) {
    *(float *)((long)param_3 + 0x1b74c) = *(float *)(param_3 + 0x560e);
    FUN_1000200a0(param_3 + 0x36e1);
  }
  plVar4 = param_3 + 0x3346;
  fVar15 = -(float)param_3[0x3274];
  fVar13 = -(float)((ulong)param_3[0x3274] >> 0x20);
  if ((*(float *)(param_3 + 0x325d) != fVar15) || (*(float *)((long)param_3 + 0x192ec) != fVar13)) {
    param_3[0x325d] = CONCAT44(fVar13,fVar15);
    FUN_1000200a0(param_3 + 0x3255);
  }
  plVar5 = param_3 + 0x336c;
  FUN_10064e47c(uVar14,param_2,param_3 + 0x3255);
  bVar8 = false;
  if ((*(float *)((long)param_3 + 0x1953c) == 0.0) &&
     (bVar8 = false, !NAN(*(float *)(param_3 + 0x32a7)))) {
    bVar8 = *(float *)(param_3 + 0x32a7) == 0.0;
  }
  if (!bVar8) {
    param_3[0x32a7] = 0;
    FUN_1000200a0(param_3 + 0x329f);
  }
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar9 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar4,*ppuVar7);
  FUN_100651700(plVar4,3);
  FUN_100651708(fVar17 + -128.0,plVar4,1);
  fVar15 = *(float *)((long)param_3 + 0x19a74);
  bVar8 = false;
  if ((fVar15 == 0.0) && (bVar8 = false, !NAN(*(float *)(param_3 + 0x334e)))) {
    bVar8 = *(float *)(param_3 + 0x334e) == 0.0;
  }
  if (!bVar8) {
    param_3[0x334e] = 0;
    FUN_1000200a0(plVar4);
  }
  plVar6 = param_3 + 0x3623;
  fVar16 = fVar17 * 0.5;
  fVar18 = (float)param_2;
  fVar19 = fVar18 * 0.5;
  local_a8 = (undefined1 *)0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_a8);
  fVar13 = *(float *)((long)param_3 + 0x19a74);
  FUN_100651184(plVar4);
  fVar13 = fVar13 + fVar15 + 64.0;
  fVar15 = *(float *)(param_3 + 0x3374);
  if ((fVar15 != 0.0) || (fVar15 = *(float *)((long)param_3 + 0x19ba4), fVar15 != fVar13)) {
    *(undefined4 *)(param_3 + 0x3374) = 0;
    *(float *)((long)param_3 + 0x19ba4) = fVar13;
    FUN_1000200a0(plVar5);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_a8);
  FUN_1006425d0(plVar3,0,0,1,1);
  fVar15 = fVar19 + fVar15 * -0.5 + -300.0;
  if ((*(float *)(param_3 + 0x3296) != fVar16) || (*(float *)((long)param_3 + 0x194b4) != fVar15)) {
    *(float *)(param_3 + 0x3296) = fVar16;
    *(float *)((long)param_3 + 0x194b4) = fVar15;
    FUN_1000200a0(plVar3);
  }
  local_a8 = (undefined1 *)0x3f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_a8);
  FUN_10064e47c(0x44898000,0x43160000,plVar6);
  if ((*(float *)(param_3 + 0x362b) != fVar16) || (*(float *)((long)param_3 + 0x1b15c) != fVar19)) {
    *(float *)(param_3 + 0x362b) = fVar16;
    *(float *)((long)param_3 + 0x1b15c) = fVar19;
    FUN_1000200a0(plVar6);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_a8);
  plVar3 = param_3 + 0x3641;
  if ((*(float *)(param_3 + 0x3649) != fVar16 + -394.0) ||
     (*(float *)((long)param_3 + 0x1b24c) != fVar19)) {
    *(float *)(param_3 + 0x3649) = fVar16 + -394.0;
    *(float *)((long)param_3 + 0x1b24c) = fVar19;
    FUN_1000200a0(plVar3);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_a8);
  if ((*(float *)(param_3 + 0x3667) != fVar16 + -316.0) ||
     (*(float *)((long)param_3 + 0x1b33c) != fVar19)) {
    *(float *)(param_3 + 0x3667) = fVar16 + -316.0;
    *(float *)((long)param_3 + 0x1b33c) = fVar19;
    FUN_1000200a0(plVar2);
  }
  fVar16 = fVar16 + -550.0;
  local_a8 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a8);
  uVar10 = *(uint *)(param_3 + 0x36c1);
  if ((uVar10 != 0) && (lVar11 = *(long *)param_3[0x36c2], lVar11 != 0)) {
    uVar12 = 0;
    do {
      fVar15 = (float)uVar12 * 192.0 + 150.0 + *(float *)((long)param_3 + 0x1b15c);
      if ((*(float *)(lVar11 + 0x40) == fVar16) && (*(float *)(lVar11 + 0x44) == fVar15)) {
        if (uVar12 != 0) goto LAB_100288130;
LAB_100288178:
        *(uint *)(lVar11 + 0x10c) = *(uint *)(lVar11 + 0x10c) & 0xfffffffb;
      }
      else {
        *(float *)(lVar11 + 0x40) = fVar16;
        *(float *)(lVar11 + 0x44) = fVar15;
        FUN_1000200a0(lVar11);
        if (uVar12 == 0) goto LAB_100288178;
LAB_100288130:
        if (*(float *)(lVar11 + 200) != 94.0) {
          *(undefined4 *)(lVar11 + 200) = 0x42bc0000;
          FUN_1000200a0(lVar11 + 0x88);
        }
        FUN_10064e47c(0x44640000,0x40000000,lVar11 + 0x88);
      }
      lVar1 = lVar11 + 0x178;
      FUN_10065179c(0x43680000,0,0x3f800000,lVar1);
      bVar8 = false;
      if ((*(float *)(lVar11 + 0x1b8) == 234.0) && (bVar8 = false, !NAN(*(float *)(lVar11 + 0x1bc)))
         ) {
        bVar8 = *(float *)(lVar11 + 0x1bc) == 104.0;
      }
      if (!bVar8) {
        *(undefined8 *)(lVar11 + 0x1b8) = 0x42d00000436a0000;
        FUN_1000200a0(lVar1);
      }
      local_a8 = (undefined1 *)0x3f80000000000000;
      (**(code **)(*(long *)(lVar11 + 0x178) + 0x28))(lVar1,&local_a8);
      lVar1 = lVar11 + 0x2a8;
      FUN_10065179c(0x43f10000,0,0x3f800000,lVar1);
      if ((*(float *)(lVar11 + 0x2e8) != 234.0) || (*(float *)(lVar11 + 0x2ec) != 96.0)) {
        *(undefined8 *)(lVar11 + 0x2e8) = 0x42c00000436a0000;
        FUN_1000200a0(lVar1);
      }
      local_a8 = (undefined1 *)0x0;
      (**(code **)(*(long *)(lVar11 + 0x2a8) + 0x28))(lVar1,&local_a8);
      plVar2 = (long *)(lVar11 + 0x3d8);
      fVar15 = (float)FUN_10064e3cc(plVar2);
      fVar15 = fVar15 * -0.5 + 1006.0;
      bVar8 = false;
      if ((*(float *)(lVar11 + 0x418) == fVar15) &&
         (bVar8 = false, !NAN(*(float *)(lVar11 + 0x41c)))) {
        bVar8 = *(float *)(lVar11 + 0x41c) == 96.0;
      }
      if (!bVar8) {
        *(float *)(lVar11 + 0x418) = fVar15;
        *(undefined4 *)(lVar11 + 0x41c) = 0x42c00000;
        FUN_1000200a0(plVar2);
      }
      local_a8 = &DAT_3f0000003f000000;
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_a8);
      uVar12 = uVar12 + 1;
      uVar10 = *(uint *)(param_3 + 0x36c1);
    } while ((uVar12 < uVar10) &&
            (lVar11 = *(long *)(param_3[0x36c2] + (ulong)uVar12 * 8), lVar11 != 0));
  }
  plVar2 = param_3 + 0x37f0;
  plVar3 = param_3 + 0x3685;
  fVar19 = fVar19 + 75.0;
  if ((*(float *)(param_3 + 0x368d) != fVar16) || (*(float *)((long)param_3 + 0x1b46c) != fVar19)) {
    *(float *)(param_3 + 0x368d) = fVar16;
    *(float *)((long)param_3 + 0x1b46c) = fVar19;
    FUN_1000200a0(plVar3);
    uVar10 = *(uint *)(param_3 + 0x36c1);
  }
  fVar15 = (float)uVar10 * 192.0;
  FUN_10064e47c(0x44898000,plVar3);
  plVar4 = param_3 + 0x36a3;
  FUN_100652e60(plVar3);
  if ((*(float *)(param_3 + 0x36ab) != fVar16) ||
     (*(float *)((long)param_3 + 0x1b55c) != fVar15 + fVar19)) {
    *(float *)(param_3 + 0x36ab) = fVar16;
    *(float *)((long)param_3 + 0x1b55c) = fVar15 + fVar19;
    FUN_1000200a0(plVar4);
  }
  FUN_10064e47c(0x44898000,0x43800000,plVar4);
  fVar15 = *(float *)(param_3 + 0x560e);
  FUN_100652e60(plVar4);
  FUN_10053093c(fVar17,fVar18 + fVar15,param_3 + 0x329f);
  FUN_10064e47c(0x449c4000,0x43160000,param_3 + 0x37d2);
  if ((*(float *)(param_3 + 0x37f8) != 80.0) || (*(float *)((long)param_3 + 0x1bfc4) != 75.0)) {
    param_3[0x37f8] = 0x4296000042a00000;
    FUN_1000200a0(plVar2);
  }
  plVar3 = param_3 + 0x3881;
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a8);
  if ((*(float *)(param_3 + 0x3816) != 160.0) || (*(float *)((long)param_3 + 0x1c0b4) != 75.0)) {
    param_3[0x3816] = 0x4296000043200000;
    FUN_1000200a0(param_3 + 0x380e);
  }
  local_a8 = (undefined1 *)0x3f00000000000000;
  (**(code **)(param_3[0x380e] + 0x28))(param_3 + 0x380e,&local_a8);
  if (*(float *)((long)param_3 + 0x1c3c4) != 150.0) {
    *(undefined4 *)((long)param_3 + 0x1c3c4) = 0x43160000;
    FUN_1000200a0(param_3 + 0x3870);
  }
  plVar2 = param_3 + 0x38a7;
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar9 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar2,*ppuVar7);
  if ((*(float *)(param_3 + 0x38af) != 160.0) || (*(float *)((long)param_3 + 0x1c57c) != 56.0)) {
    param_3[0x38af] = 0x4260000043200000;
    FUN_1000200a0(plVar2);
  }
  FUN_100651708(0x44688000,plVar2,1);
  fVar15 = 80.0;
  if (*(float *)(param_3 + 0x3889) == 80.0) {
    fVar17 = 42.0;
    fVar15 = 42.0;
    if (*(float *)((long)param_3 + 0x1c44c) == 42.0) goto LAB_100288580;
  }
  fVar17 = fVar15;
  param_3[0x3889] = 0x4228000042a00000;
  FUN_1000200a0(plVar3);
LAB_100288580:
  plVar4 = param_3 + 0x4009;
  local_a8 = (undefined1 *)0x3f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_a8);
  FUN_100651184(plVar2);
  if ((*(float *)(param_3 + 0x38d5) != 160.0) ||
     (*(float *)((long)param_3 + 0x1c6ac) != fVar17 + 104.0)) {
    *(undefined4 *)(param_3 + 0x38d5) = 0x43200000;
    *(float *)((long)param_3 + 0x1c6ac) = fVar17 + 104.0;
    FUN_1000200a0(param_3 + 0x38cd);
  }
  FUN_1001853c0(0x44688000,0xbf800000,param_3 + 0x38cd);
  if ((*(float *)(param_3 + 0x3c73) != 160.0) ||
     (*(float *)((long)param_3 + 0x1e39c) != fVar17 + 254.0)) {
    *(undefined4 *)(param_3 + 0x3c73) = 0x43200000;
    *(float *)((long)param_3 + 0x1e39c) = fVar17 + 254.0;
    FUN_1000200a0(param_3 + 0x3c6b);
  }
  FUN_1001853c0(0x44688000,0xbf800000,param_3 + 0x3c6b);
  plVar2 = param_3 + 0x402f;
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar9 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar2,*ppuVar7);
  if ((*(float *)(param_3 + 0x4037) != 160.0) ||
     (*(float *)((long)param_3 + 0x201bc) != fVar17 + 384.0)) {
    *(undefined4 *)(param_3 + 0x4037) = 0x43200000;
    *(float *)((long)param_3 + 0x201bc) = fVar17 + 384.0;
    FUN_1000200a0(plVar2);
  }
  FUN_100651708(0x44688000,plVar2,1);
  fVar15 = *(float *)(param_3 + 0x4011);
  if ((fVar15 != 80.0) || (fVar15 = *(float *)((long)param_3 + 0x2008c), fVar15 != fVar17 + 370.0))
  {
    *(undefined4 *)(param_3 + 0x4011) = 0x42a00000;
    *(float *)((long)param_3 + 0x2008c) = fVar17 + 370.0;
    FUN_1000200a0(plVar4);
  }
  local_a8 = (undefined1 *)0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_a8);
  FUN_100651184(plVar2);
  fVar15 = fVar17 + 432.0 + fVar15;
  if ((*(float *)(param_3 + 0x405d) != 160.0) || (*(float *)((long)param_3 + 0x202ec) != fVar15)) {
    *(undefined4 *)(param_3 + 0x405d) = 0x43200000;
    *(float *)((long)param_3 + 0x202ec) = fVar15;
    FUN_1000200a0(param_3 + 0x4055);
  }
  FUN_1001853c0(0x44688000,0xbf800000,param_3 + 0x4055);
  if ((*(float *)(param_3 + 0x43fb) != 160.0) ||
     (*(float *)((long)param_3 + 0x21fdc) != fVar15 + 150.0)) {
    *(undefined4 *)(param_3 + 0x43fb) = 0x43200000;
    *(float *)((long)param_3 + 0x21fdc) = fVar15 + 150.0;
    FUN_1000200a0(param_3 + 0x43f3);
  }
  fVar19 = -1.0;
  FUN_1001853c0(0x44688000,param_3 + 0x43f3);
  plVar2 = param_3 + 0x47a2;
  fVar13 = (float)FUN_10064e3cc(plVar2);
  plVar3 = param_3 + 0x4d10;
  fVar16 = *(float *)((long)param_3 + 0x268c4);
  FUN_10064e3cc(plVar3);
  fVar17 = fVar19;
  FUN_10064e3cc(plVar2);
  fVar16 = fVar16 + (fVar19 - fVar17) * 0.5;
  fVar17 = *(float *)(param_3 + 0x47aa);
  if ((fVar17 != fVar13 * 0.5) || (*(float *)((long)param_3 + 0x23d54) != fVar16)) {
    *(float *)(param_3 + 0x47aa) = fVar13 * 0.5;
    *(float *)((long)param_3 + 0x23d54) = fVar16;
    FUN_1000200a0(plVar2);
    fVar17 = *(float *)(param_3 + 0x47aa);
  }
  fVar13 = (float)FUN_10064e3cc(plVar2);
  fVar16 = (float)FUN_10064e3cc(param_3 + 0x4a59);
  fVar17 = fVar17 + 32.0 + (fVar16 + fVar13) * 0.5;
  if (*(float *)(param_3 + 0x4a61) != fVar17) {
    *(float *)(param_3 + 0x4a61) = fVar17;
    FUN_1000200a0(param_3 + 0x4a59);
  }
  fVar17 = (float)FUN_10064e3cc(param_3 + 0x5022);
  fVar17 = fVar17 * -0.5 + 1170.0;
  fVar13 = *(float *)(param_3 + 0x502a);
  if (fVar13 != fVar17) {
    *(float *)(param_3 + 0x502a) = fVar17;
    FUN_1000200a0(param_3 + 0x5022);
    fVar13 = *(float *)(param_3 + 0x502a);
  }
  fVar17 = (float)FUN_10064e3cc(plVar3);
  fVar17 = (fVar13 - fVar17) + -16.0;
  if (*(float *)(param_3 + 0x4d18) != fVar17) {
    *(float *)(param_3 + 0x4d18) = fVar17;
    FUN_1000200a0(plVar3);
  }
  fVar17 = (float)FUN_1006425d0(param_3 + 0x4791,0,0,1,1);
  fVar17 = fVar17 * -0.5 + 625.0;
  fVar13 = *(float *)(param_3 + 0x4799);
  if ((fVar13 != fVar17) || (fVar13 = *(float *)((long)param_3 + 0x23ccc), fVar13 != fVar15 + 360.0)
     ) {
    *(float *)(param_3 + 0x4799) = fVar17;
    *(float *)((long)param_3 + 0x23ccc) = fVar15 + 360.0;
    FUN_1000200a0(param_3 + 0x4791);
  }
  FUN_1006425d0(param_3 + 0x3870,0,0,1,1);
  plVar2 = param_3 + 0x3834;
  FUN_10064e47c(0x449c4000,fVar13 + -80.0,plVar2);
  fVar15 = 150.0;
  if (*(float *)((long)param_3 + 0x1c1e4) != 150.0) {
    *(undefined4 *)((long)param_3 + 0x1c1e4) = 0x43160000;
    fVar15 = 150.0;
    FUN_1000200a0(plVar2);
  }
  FUN_100652e60(plVar2);
  if (*(float *)((long)param_3 + 0x1c2d4) != fVar15 + 150.0) {
    *(float *)((long)param_3 + 0x1c2d4) = fVar15 + 150.0;
    FUN_1000200a0(param_3 + 0x3852);
  }
  fVar15 = 240.0;
  FUN_10064e47c(0x449c4000,param_3 + 0x3852);
  FUN_1006425d0(param_3 + 0x371a,0,0,1,1);
  fVar15 = fVar15 * -0.5 + 80.0;
  fVar17 = *(float *)(param_3 + 0x3722);
  if ((fVar17 != -625.0) || (fVar17 = *(float *)((long)param_3 + 0x1b914), fVar17 != fVar15)) {
    *(undefined4 *)(param_3 + 0x3722) = 0xc41c4000;
    *(float *)((long)param_3 + 0x1b914) = fVar15;
    FUN_1000200a0(param_3 + 0x371a);
  }
  uVar14 = FUN_100530aa0(param_3 + 0x372b,1,0,1,1);
  FUN_10053093c(uVar14,*(float *)((long)param_3 + 0x1b914) + fVar18 * -0.5 +
                       fVar17 + *(float *)(param_3 + 0x560e),param_3 + 0x372b);
  return;
}




void FUN_100288b0c(long *param_1,long param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  
  pbVar1 = (byte *)((long)param_1 + 0x2b07c);
  bVar6 = *(byte *)(param_2 + 0x57);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_2 + 0x48);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar16 = *(void **)(param_2 + 0x40);
    puVar4 = pvVar16;
    if (-1 < (char)bVar6) {
      puVar4 = (undefined8 *)(param_2 + 0x40);
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 == 0) || (iVar9 = _memcmp(puVar4,pbVar15,sVar2), iVar9 == 0)) goto LAB_100288c9c;
    }
    else {
      if (sVar2 == 0) {
LAB_100288c9c:
        *pbVar1 = 0;
        FUN_100288e44(param_1,0);
        goto LAB_100288d04;
      }
      if ((uint)*pbVar15 == ((uint)pvVar16 & 0xff)) {
        pbVar14 = (byte *)(param_2 + 0x41);
        do {
          uVar12 = uVar12 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar12 == 0) goto LAB_100288c9c;
          bVar6 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar6 == *pbVar15);
      }
    }
  }
  lVar10 = FUN_10015d3ec();
  bVar6 = *(byte *)(lVar10 + 0x54a7);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(lVar10 + 0x5498);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  bVar7 = *(byte *)(param_2 + 0x3f);
  sVar3 = *(size_t *)(param_2 + 0x30);
  if (-1 < (char)bVar7) {
    sVar3 = (ulong)bVar7;
  }
  if (sVar2 == sVar3) {
    pvVar16 = *(void **)(lVar10 + 0x5490);
    puVar4 = pvVar16;
    if (-1 < (char)bVar6) {
      puVar4 = (undefined8 *)(lVar10 + 0x5490);
    }
    pbVar15 = *(byte **)(param_2 + 0x28);
    if (-1 < (char)bVar7) {
      pbVar15 = (byte *)(param_2 + 0x28);
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) goto LAB_100288cc8;
      iVar9 = _memcmp(puVar4,pbVar15,sVar2);
      bVar8 = iVar9 == 0;
    }
    else if (sVar2 == 0) {
LAB_100288cc8:
      bVar8 = true;
    }
    else {
      if ((uint)*pbVar15 != ((uint)pvVar16 & 0xff)) goto LAB_100288c94;
      pbVar14 = (byte *)(lVar10 + 0x5491);
      do {
        uVar12 = uVar12 - 1;
        pbVar15 = pbVar15 + 1;
        bVar8 = uVar12 == 0;
        if (uVar12 == 0) break;
        bVar6 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar6 == *pbVar15);
    }
  }
  else {
LAB_100288c94:
    bVar8 = false;
  }
  *pbVar1 = bVar8;
  if ((*(uint *)((long)param_1 + 0x404) >> 2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) | 4;
    FUN_100265224(param_1 + 0x70,1);
  }
  *(uint *)((long)param_1 + 0x1b8cc) = *(uint *)((long)param_1 + 0x1b8cc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1946c) = *(uint *)((long)param_1 + 0x1946c) & 0xfffffffb;
LAB_100288d04:
  pcVar5 = "MENU_PROFILE_USERTEAM_CREATE_TEAM_HEADER";
  if (*pbVar1 != 0) {
    pcVar5 = "MENU_PROFILE_USERTEAM_RENAME_TEAM_HEADER";
  }
  uVar11 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0(param_1 + 0x380e,uVar11);
  pcVar5 = "MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD_BLURB";
  if (*pbVar1 != 0) {
    pcVar5 = "MENU_PROFILE_USERTEAM_RENAME_FIELD_BLURB";
  }
  uVar11 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0(param_1 + 0x38a7,uVar11);
  pcVar5 = "MENU_PROFILE_USERTEAM_CREATE_TEAM";
  if (*pbVar1 != 0) {
    pcVar5 = "MENU_PROFILE_USERTEAM_RENAME_TEAM";
  }
  uVar11 = FUN_1004e0150(pcVar5,0);
  FUN_100181af8(param_1 + 0x4a59,uVar11);
  *(uint *)((long)param_1 + 0x2534c) =
       *(uint *)((long)param_1 + 0x2534c) & 0xfffffffb | (uint)*pbVar1 << 2;
  uVar13 = (uint)(*pbVar1 == 0);
  *(uint *)((long)param_1 + 0x26904) =
       *(uint *)((long)param_1 + 0x26904) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x26904) & 3 | uVar13 << 2;
  *(uint *)((long)param_1 + 0x28194) =
       *(uint *)((long)param_1 + 0x28194) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x28194) & 3 | uVar13 << 2;
  FUN_1002656cc(param_1 + 0x70,param_2);
  (**(code **)(*param_1 + 0x150))(param_1);
  uVar13 = *(uint *)((long)param_1 + 0x84);
  if ((uVar13 >> 2 & 1) == 0) {
    (**(code **)(*param_1 + 0x140))(param_1,1);
    uVar13 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar13 | 4;
  return;
}




void FUN_100288e44(long param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x3dcccccd;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  FUN_10028a618(uVar1);
  *(char *)(param_1 + 0x2b07d) = (char)param_2;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x2b07c) == '\0') {
      FUN_100286c7c(0x3dcccccd,param_1,1,1);
      return;
    }
    *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) | 4;
    *(uint *)(param_1 + 0x1b8cc) = *(uint *)(param_1 + 0x1b8cc) & 0xfffffffb;
    *(uint *)(param_1 + 0x1946c) = *(uint *)(param_1 + 0x1946c) & 0xfffffffb;
  }
  else {
    FUN_10028a79c(param_1);
    if (*(char *)(param_1 + 0x2b07c) != '\0') {
      *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) & 0xfffffffb;
    }
  }
  return;
}




void FUN_100288f24(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined1 auStack_78 [8];
  void *local_70;
  long local_68;
  
  FUN_100287808();
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    lVar2 = FUN_10015d3ec();
    if (*(uint *)(lVar2 + 0x53e8) != 0) {
      uVar4 = 0;
      lVar5 = 0x40;
      do {
        operator_new(0x19a8);
        local_68 = FUN_10028b370();
        FUN_1006513c0(local_68 + 0x178,*(long *)(lVar2 + 0x53f0) + lVar5);
        uVar3 = FUN_1004e0150("MENU_PROFILE_TEAM_INVITE_FROM_LABEL",0);
        thunk_FUN_1004e439c(auStack_78,uVar3);
        FUN_1004e3120(auStack_88,"[HANDLE]");
        FUN_1004e3bc4(auStack_78,0,auStack_88,*(long *)(lVar2 + 0x53f0) + lVar5 + -0x40);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
        FUN_1006513c0(local_68 + 0x2a8,auStack_78);
        std::string::operator=
                  ((string *)(local_68 + 0x1990),
                   (string *)(*(long *)(lVar2 + 0x53f0) + lVar5 + -0x18));
        FUN_1005308f8(param_1 + 0x329f,local_68,1);
        FUN_1002890a0(param_1 + 0x36c1,&local_68);
        if (local_70 != (void *)0x0) {
          operator_delete__(local_70);
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x70;
      } while (uVar4 < *(uint *)(lVar2 + 0x53e8));
    }
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_1002890a0(uint *param_1,undefined8 *param_2)

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
    FUN_10028b708(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100289120(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar4 = FUN_10015d3ec();
    FUN_100169cec(lVar4 + 0x18);
    FUN_100104ba4();
    return;
  }
  uVar1 = param_2 + 0x30;
  bVar11 = *(byte *)(param_2 + 0x47);
  uVar9 = (ulong)bVar11;
  uVar10 = *(ulong *)(param_2 + 0x38);
  uVar2 = uVar10;
  if (-1 < (char)bVar11) {
    uVar2 = uVar9;
  }
  if (uVar2 == 0xf) {
    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb228);
    if (iVar3 != 0) {
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
      goto LAB_1002891b0;
    }
    uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
    pcVar8 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_ALREADY_IN";
  }
  else {
LAB_1002891b0:
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xb) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c29);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_100289430;
      }
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xc) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb2c8);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR_TITLE",0);
        pcVar8 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_NAME_INVALID";
        goto LAB_100289430;
      }
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c66);
      if (iVar3 != 0) {
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
        goto LAB_100289270;
      }
LAB_1002893b4:
      uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
      pcVar8 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_NAME_TAKEN";
    }
    else {
LAB_100289270:
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 0xd) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c71);
        if (iVar3 == 0) goto LAB_1002893b4;
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
      }
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 9) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cb0);
        if (iVar3 != 0) {
          bVar11 = *(byte *)(param_2 + 0x47);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x38);
          goto LAB_1002892f0;
        }
      }
      else {
LAB_1002892f0:
        if (-1 < (char)bVar11) {
          uVar10 = uVar9;
        }
        if ((uVar10 != 0xc) ||
           (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cba), iVar3 != 0
           )) {
          FUN_1004e313c(auStack_40);
          uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR_TITLE",0);
          uVar6 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR",0);
          uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1001e3120(uVar5,uVar6,uVar7,auStack_40,0,0,0);
          if (local_38 != (void *)0x0) {
            operator_delete__(local_38);
          }
          goto LAB_100289464;
        }
      }
      uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
      pcVar8 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_TAG_TAKEN";
    }
  }
LAB_100289430:
  uVar6 = FUN_1004e0150(pcVar8,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
LAB_100289464:
  FUN_100289480(param_1);
  return;
}




void FUN_100289480(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x1c668;
  uVar6 = FUN_100185ddc(lVar1);
  if ((uVar6 & 1) == 0) {
    lVar2 = param_1 + 0x1e358;
    uVar6 = FUN_100185ddc(lVar2);
    if ((uVar6 & 1) == 0) {
      lVar3 = param_1 + 0x202a8;
      uVar6 = FUN_100185ddc(lVar3);
      if ((uVar6 & 1) == 0) {
        lVar4 = param_1 + 0x21f98;
        uVar6 = FUN_100185ddc(lVar4);
        if ((uVar6 & 1) == 0) {
          uVar7 = FUN_1001afee4(lVar1);
          iVar5 = FUN_1004e36c0(uVar7,&DAT_101d91650);
          if (iVar5 != 0) {
            uVar7 = FUN_1001afee4(lVar2);
            iVar5 = FUN_1004e36c0(uVar7,&DAT_101d91650);
            if (iVar5 != 0) {
              uVar7 = FUN_1001afee4(lVar3);
              iVar5 = FUN_1004e36c0(uVar7,&DAT_101d91650);
              if (iVar5 != 0) {
                uVar7 = FUN_1001afee4(lVar4);
                iVar5 = FUN_1004e36c0(uVar7,&DAT_101d91650);
                if (iVar5 != 0) {
                  uVar7 = FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x1c9d8) & 1) * 0x130 +
                                        0x1e0);
                  iVar5 = FUN_1004e36c0(uVar7,&DAT_101d91650);
                  if (iVar5 != 0) {
                    uVar7 = FUN_100655b6c(lVar2 + ((ulong)*(byte *)(param_1 + 0x1e6c8) & 1) * 0x130
                                          + 0x1e0);
                    iVar5 = FUN_1004e36c0(uVar7,&DAT_101d91650);
                    if (iVar5 != 0) {
                      uVar7 = FUN_100655b6c(lVar3 + ((ulong)*(byte *)(param_1 + 0x20618) & 1) *
                                                    0x130 + 0x1e0);
                      iVar5 = FUN_1004e36c0(uVar7,&DAT_101d91650);
                      if (iVar5 != 0) {
                        uVar7 = FUN_100655b6c(lVar4 + ((ulong)*(byte *)(param_1 + 0x22308) & 1) *
                                                      0x130 + 0x1e0);
                        uVar6 = FUN_1004e36c0(uVar7,&DAT_101d91650);
                        if ((uVar6 & 1) != 0) {
                          uVar7 = 1;
                          goto LAB_100289634;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_100289634:
  FUN_1001b4c0c(param_1 + 0x252c8,uVar7);
  FUN_1001b4c0c(param_1 + 0x26880,uVar7);
  FUN_1001b4c0c(param_1 + 0x28110,uVar7);
  return;
}




void FUN_100289680(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  char *pcVar11;
  undefined **local_130 [5];
  void *local_108;
  undefined8 uStack_100;
  long local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  long lStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_10015d3ec();
  FUN_100169cec(lVar3 + 0x18);
  FUN_1004f1580(local_130);
  local_130[0] = &PTR_FUN_10145bf20;
  local_68 = 0;
  lStack_60 = 0;
  uStack_100 = 0;
  local_108 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_f8 = 0;
  lStack_e0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  local_70 = (void *)0x0;
  local_c8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  std::string::operator=((string *)&local_108,(string *)&DAT_101d91198);
  std::string::operator=((string *)&pvStack_f0,(string *)&DAT_101d91198);
  std::string::operator=((string *)&local_d8,(string *)&DAT_101d91198);
  FUN_100288b0c(param_1,local_130);
  if (*(char *)(param_2 + 0x44) != '\0') goto LAB_100289740;
  bVar10 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar1 = uVar9;
  if (-1 < (char)bVar10) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0xb) {
    iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb3c8);
    if (iVar2 != 0) {
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
      goto LAB_100289810;
    }
    pcVar11 = "MENU_PROFILE_USERTEAM_CANT_LEAVE_REASON_NOT_IN";
    pcVar4 = "MENU_PROFILE_USERTEAM_CANT_LEAVE_TITLE";
  }
  else {
LAB_100289810:
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0x11) ||
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e7827),
       iVar2 != 0)) goto LAB_100289740;
    pcVar11 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE";
    pcVar4 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE";
  }
  uVar5 = FUN_1004e0150(pcVar4,0);
  uVar6 = FUN_1004e0150(pcVar11,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
LAB_100289740:
  local_130[0] = &PTR_FUN_10145bf20;
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  FUN_10015ab5c(&local_88,1);
  FUN_10015aacc(&local_98,1);
  if (local_c8 < 0) {
    operator_delete(local_d8);
  }
  if (lStack_e0 < 0) {
    operator_delete(pvStack_f0);
  }
  if (local_f8 < 0) {
    operator_delete(local_108);
  }
  FUN_1004f15a8(local_130);
  return;
}




void FUN_1002898b0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_100287808(param_1);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xc) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb42a);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_REASON_NO_TEAM";
        goto LAB_100289a70;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb228);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_ALREADY_IN_TEAM";
        goto LAB_100289a70;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 7) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ea8ed);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_EXPIRED";
        goto LAB_100289a70;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 9) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb50c), iVar3 == 0)) {
      uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
      pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_FULL";
LAB_100289a70:
      uVar6 = FUN_1004e0150(pcVar4,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void FUN_100289aac(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined **local_130 [5];
  void *local_108;
  undefined8 uStack_100;
  long local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  long lStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_1004f1580(local_130);
  local_130[0] = &PTR_FUN_10145bf20;
  local_68 = 0;
  lStack_60 = 0;
  uStack_100 = 0;
  local_108 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_f8 = 0;
  lStack_e0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  local_70 = (void *)0x0;
  local_c8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&local_108,(string *)(lVar3 + 0x5490));
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_f0,(string *)(lVar3 + 0x5308));
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&local_d8,(string *)(lVar3 + 0x5320));
  FUN_100288b0c(param_1,local_130);
  FUN_10015d3ec();
  FUN_100167860();
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_100286c7c(0xcd,param_1,1,1);
    goto LAB_100289b9c;
  }
  bVar10 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar1 = uVar9;
  if (-1 < (char)bVar10) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0xc) {
    iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb42a);
    if (iVar2 != 0) {
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
      goto LAB_100289c6c;
    }
    uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
    pcVar5 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_NO_TEAM";
  }
  else {
LAB_100289c6c:
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0xf) ||
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb228),
       iVar2 != 0)) goto LAB_100289b9c;
    uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
    pcVar5 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_IN_TEAM";
  }
  uVar6 = FUN_1004e0150(pcVar5,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
LAB_100289b9c:
  local_130[0] = &PTR_FUN_10145bf20;
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  FUN_10015ab5c(&local_88,1);
  FUN_10015aacc(&local_98,1);
  if (local_c8 < 0) {
    operator_delete(local_d8);
  }
  if (lStack_e0 < 0) {
    operator_delete(pvStack_f0);
  }
  if (local_f8 < 0) {
    operator_delete(local_108);
  }
  FUN_1004f15a8(local_130);
  return;
}




void FUN_100289d14(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_NOTIFICATION",0);
      thunk_FUN_1004e439c(auStack_30,uVar4);
      FUN_1001e55b0(0x40a00000,auStack_30,0,0);
      if (local_28 == (void *)0x0) {
        return;
      }
      operator_delete__(local_28);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x12) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb5fa);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x14) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb66a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaa81);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb6e3);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_CAPTAIN";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x1c) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb72a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 9) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb50c), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
      pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_TEAM_FULL";
LAB_100289fc4:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void FUN_10028a004(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  char *pcVar9;
  
  iVar2 = FUN_1004f1680(param_2);
  if ((iVar2 != 0) && (*(char *)(param_2 + 0x44) == '\0')) {
    bVar8 = *(byte *)(param_2 + 0x5f);
    uVar6 = (ulong)bVar8;
    uVar7 = *(ulong *)(param_2 + 0x50);
    uVar1 = uVar7;
    if (-1 < (char)bVar8) {
      uVar1 = uVar6;
    }
    if (uVar1 == 0x12) {
      iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb5fa);
      if (iVar2 == 0) {
        pcVar9 = "MENU_PROFILE_USERTEAM_CANT_KICK_REASON_NOT_IN_TEAM";
        goto LAB_10028a0c8;
      }
      bVar8 = *(byte *)(param_2 + 0x5f);
      uVar6 = (ulong)bVar8;
      uVar7 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar8) {
      uVar7 = uVar6;
    }
    if ((uVar7 == 0x11) &&
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb6e3),
       iVar2 == 0)) {
      pcVar9 = "MENU_PROFILE_USERTEAM_CANT_KICK_REASON_NOT_CAPTAIN";
LAB_10028a0c8:
      uVar3 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_KICK_TITLE",0);
      uVar4 = FUN_1004e0150(pcVar9,0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
      return;
    }
  }
  return;
}




void FUN_10028a11c(long param_1,string *param_2,undefined4 *param_3,string *param_4,
                  undefined4 *param_5)

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
  
  plVar1 = (long *)(param_1 + 0x296c8);
  plVar2 = (long *)(param_1 + 0x27e38);
  std::string::operator=((string *)(param_1 + 0x2b040),param_2);
  *(undefined4 *)(param_1 + 0x2b074) = *param_3;
  std::string::operator=((string *)(param_1 + 0x2b058),param_4);
  *(undefined4 *)(param_1 + 0x2b078) = *param_5;
  FUN_1004e313c(auStack_78);
  FUN_1004e38ac(auStack_78,"%d");
  lVar3 = param_1 + 0x29780;
  FUN_1006513c0(lVar3,auStack_78);
  fVar5 = (float)FUN_100652e60(param_1 + 0x298b0);
  fVar6 = *(float *)(param_1 + 0x298f4) + -3.0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x297c0) == fVar5) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x297c4)) && !NAN(fVar6))) {
    bVar4 = *(float *)(param_1 + 0x297c4) == fVar6;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x297c0) = fVar5;
    *(float *)(param_1 + 0x297c4) = fVar6;
    FUN_1000200a0(lVar3);
  }
  local_68 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x29780) + 0x28))(lVar3,&local_68);
  fVar5 = (float)FUN_1006425d0(plVar1,0,0,1,1);
  FUN_1006425d0(plVar1,0,0,1,1);
  fVar6 = fVar6 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x29708) != fVar5 * -0.5) || (*(float *)(param_1 + 0x2970c) != fVar6)) {
    *(float *)(param_1 + 0x29708) = fVar5 * -0.5;
    *(float *)(param_1 + 0x2970c) = fVar6;
    FUN_1000200a0(plVar1);
  }
  local_68 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_68);
  FUN_1004e38ac(auStack_78,"%d");
  lVar3 = param_1 + 0x27ef0;
  FUN_1006513c0(lVar3,auStack_78);
  fVar5 = (float)FUN_100652e60(param_1 + 0x28020);
  fVar6 = *(float *)(param_1 + 0x28064) + -3.0;
  if ((*(float *)(param_1 + 0x27f30) != fVar5) || (*(float *)(param_1 + 0x27f34) != fVar6)) {
    *(float *)(param_1 + 0x27f30) = fVar5;
    *(float *)(param_1 + 0x27f34) = fVar6;
    FUN_1000200a0(lVar3);
  }
  local_68 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x27ef0) + 0x28))(lVar3,&local_68);
  fVar5 = (float)FUN_1006425d0(plVar2,0,0,1,1);
  FUN_1006425d0(plVar2,0,0,1,1);
  fVar6 = fVar6 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x27e78) != fVar5 * -0.5) || (*(float *)(param_1 + 0x27e7c) != fVar6)) {
    *(float *)(param_1 + 0x27e78) = fVar5 * -0.5;
    *(float *)(param_1 + 0x27e7c) = fVar6;
    FUN_1000200a0(plVar2);
  }
  local_68 = 0;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_68);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  return;
}




void FUN_10028a3f8(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x560e) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010028a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))();
  return;
}




void FUN_10028a410(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  void *pvVar9;
  undefined **local_120 [5];
  void *local_f8;
  undefined8 uStack_f0;
  long local_e8;
  void *pvStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  
  if (*(char *)(param_1 + 0x2b07c) != '\0') {
    bVar4 = *(byte *)(param_2 + 0xdf);
    uVar7 = (ulong)bVar4;
    sVar1 = *(size_t *)(param_2 + 0xd0);
    if (-1 < (char)bVar4) {
      sVar1 = uVar7;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar9 = *(void **)(param_2 + 200);
      puVar3 = pvVar9;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(param_2 + 200);
      }
      pbVar6 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar6 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar6,sVar1), iVar5 != 0)) {
          return;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar6 != ((uint)pvVar9 & 0xff)) {
          return;
        }
        pbVar8 = (byte *)(param_2 + 0xc9);
        while( true ) {
          uVar7 = uVar7 - 1;
          pbVar6 = pbVar6 + 1;
          if (uVar7 == 0) break;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (bVar4 != *pbVar6) {
            return;
          }
        }
      }
      FUN_1004f1580(local_120);
      local_120[0] = &PTR_FUN_10145bf20;
      local_58 = 0;
      lStack_50 = 0;
      uStack_f0 = 0;
      local_f8 = (void *)0x0;
      pvStack_e0 = (void *)0x0;
      local_e8 = 0;
      lStack_d0 = 0;
      local_d8 = 0;
      uStack_c0 = 0;
      local_c8 = (void *)0x0;
      local_60 = (void *)0x0;
      local_b8 = 0;
      uStack_80 = 0;
      local_88 = 0;
      uStack_70 = 0;
      local_78 = 0;
      FUN_1004f15d8(local_120);
      FUN_100288b0c(param_1,local_120);
      local_120[0] = &PTR_FUN_10145bf20;
      if (lStack_50 < 0) {
        operator_delete(local_60);
      }
      FUN_10015ab5c(&local_78,1);
      FUN_10015aacc(&local_88,1);
      if (local_b8 < 0) {
        operator_delete(local_c8);
      }
      if (lStack_d0 < 0) {
        operator_delete(pvStack_e0);
      }
      if (local_e8 < 0) {
        operator_delete(local_f8);
      }
      FUN_1004f15a8(local_120);
    }
  }
  return;
}




void FUN_10028a5b8(long param_1)

{
  FUN_10028a410(param_1 + -0x368);
  return;
}




void thunk_FUN_100288b0c(void)

{
  FUN_100288b0c();
  return;
}




void FUN_10028a5c4(long param_1)

{
  FUN_100288b0c(param_1 + -0x368);
  return;
}




void thunk_FUN_100288f24(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_88 [8];
  void *pvStack_80;
  undefined1 auStack_78 [8];
  void *pvStack_70;
  long lStack_68;
  
  FUN_100287808();
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    lVar2 = FUN_10015d3ec();
    if (*(uint *)(lVar2 + 0x53e8) != 0) {
      uVar4 = 0;
      lVar5 = 0x40;
      do {
        operator_new(0x19a8);
        lStack_68 = FUN_10028b370();
        FUN_1006513c0(lStack_68 + 0x178,*(long *)(lVar2 + 0x53f0) + lVar5);
        uVar3 = FUN_1004e0150("MENU_PROFILE_TEAM_INVITE_FROM_LABEL",0);
        thunk_FUN_1004e439c(auStack_78,uVar3);
        FUN_1004e3120(auStack_88,"[HANDLE]");
        FUN_1004e3bc4(auStack_78,0,auStack_88,*(long *)(lVar2 + 0x53f0) + lVar5 + -0x40);
        if (pvStack_80 != (void *)0x0) {
          operator_delete__(pvStack_80);
        }
        FUN_1006513c0(lStack_68 + 0x2a8,auStack_78);
        std::string::operator=
                  ((string *)(lStack_68 + 0x1990),
                   (string *)(*(long *)(lVar2 + 0x53f0) + lVar5 + -0x18));
        FUN_1005308f8(param_1 + 0x329f,lStack_68,1);
        FUN_1002890a0(param_1 + 0x36c1,&lStack_68);
        if (pvStack_70 != (void *)0x0) {
          operator_delete__(pvStack_70);
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x70;
      } while (uVar4 < *(uint *)(lVar2 + 0x53e8));
    }
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_10028a5d0(long param_1)

{
  FUN_100288f24(param_1 + -0x368);
  return;
}




void thunk_FUN_100289120(void)

{
  FUN_100289120();
  return;
}




void FUN_10028a5dc(long param_1)

{
  FUN_100289120(param_1 + -0x368);
  return;
}




void thunk_FUN_100289680(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  char *pcVar11;
  undefined **appuStack_130 [5];
  void *pvStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  void *pvStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  void *pvStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_10015d3ec();
  FUN_100169cec(lVar3 + 0x18);
  FUN_1004f1580(appuStack_130);
  appuStack_130[0] = &PTR_FUN_10145bf20;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_100 = 0;
  pvStack_108 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  lStack_f8 = 0;
  lStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  pvStack_d8 = (void *)0x0;
  pvStack_70 = (void *)0x0;
  lStack_c8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  std::string::operator=((string *)&pvStack_108,(string *)&DAT_101d91198);
  std::string::operator=((string *)&pvStack_f0,(string *)&DAT_101d91198);
  std::string::operator=((string *)&pvStack_d8,(string *)&DAT_101d91198);
  FUN_100288b0c(param_1,appuStack_130);
  if (*(char *)(param_2 + 0x44) != '\0') goto LAB_100289740;
  bVar10 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar1 = uVar9;
  if (-1 < (char)bVar10) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0xb) {
    iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb3c8);
    if (iVar2 != 0) {
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
      goto LAB_100289810;
    }
    pcVar11 = "MENU_PROFILE_USERTEAM_CANT_LEAVE_REASON_NOT_IN";
    pcVar4 = "MENU_PROFILE_USERTEAM_CANT_LEAVE_TITLE";
  }
  else {
LAB_100289810:
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0x11) ||
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e7827),
       iVar2 != 0)) goto LAB_100289740;
    pcVar11 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE";
    pcVar4 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE";
  }
  uVar5 = FUN_1004e0150(pcVar4,0);
  uVar6 = FUN_1004e0150(pcVar11,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
LAB_100289740:
  appuStack_130[0] = &PTR_FUN_10145bf20;
  if (lStack_60 < 0) {
    operator_delete(pvStack_70);
  }
  FUN_10015ab5c(&uStack_88,1);
  FUN_10015aacc(&uStack_98,1);
  if (lStack_c8 < 0) {
    operator_delete(pvStack_d8);
  }
  if (lStack_e0 < 0) {
    operator_delete(pvStack_f0);
  }
  if (lStack_f8 < 0) {
    operator_delete(pvStack_108);
  }
  FUN_1004f15a8(appuStack_130);
  return;
}




void FUN_10028a5e8(long param_1)

{
  FUN_100289680(param_1 + -0x368);
  return;
}




void thunk_FUN_1002898b0(void)

{
  FUN_1002898b0();
  return;
}




void FUN_10028a5f4(long param_1)

{
  FUN_1002898b0(param_1 + -0x368);
  return;
}




void thunk_FUN_100289aac(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined **appuStack_130 [5];
  void *pvStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  void *pvStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  void *pvStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_1004f1580(appuStack_130);
  appuStack_130[0] = &PTR_FUN_10145bf20;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_100 = 0;
  pvStack_108 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  lStack_f8 = 0;
  lStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  pvStack_d8 = (void *)0x0;
  pvStack_70 = (void *)0x0;
  lStack_c8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_108,(string *)(lVar3 + 0x5490));
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_f0,(string *)(lVar3 + 0x5308));
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_d8,(string *)(lVar3 + 0x5320));
  FUN_100288b0c(param_1,appuStack_130);
  FUN_10015d3ec();
  FUN_100167860();
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_100286c7c(0xcd,param_1,1,1);
    goto LAB_100289b9c;
  }
  bVar10 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar1 = uVar9;
  if (-1 < (char)bVar10) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0xc) {
    iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb42a);
    if (iVar2 != 0) {
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
      goto LAB_100289c6c;
    }
    uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
    pcVar5 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_NO_TEAM";
  }
  else {
LAB_100289c6c:
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0xf) ||
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb228),
       iVar2 != 0)) goto LAB_100289b9c;
    uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
    pcVar5 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_IN_TEAM";
  }
  uVar6 = FUN_1004e0150(pcVar5,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
LAB_100289b9c:
  appuStack_130[0] = &PTR_FUN_10145bf20;
  if (lStack_60 < 0) {
    operator_delete(pvStack_70);
  }
  FUN_10015ab5c(&uStack_88,1);
  FUN_10015aacc(&uStack_98,1);
  if (lStack_c8 < 0) {
    operator_delete(pvStack_d8);
  }
  if (lStack_e0 < 0) {
    operator_delete(pvStack_f0);
  }
  if (lStack_f8 < 0) {
    operator_delete(pvStack_108);
  }
  FUN_1004f15a8(appuStack_130);
  return;
}




void FUN_10028a600(long param_1)

{
  FUN_100289aac(param_1 + -0x368);
  return;
}




void thunk_FUN_10028a004(void)

{
  FUN_10028a004();
  return;
}




void thunk_FUN_10028a004(void)

{
  FUN_10028a004();
  return;
}




void thunk_FUN_100289d14(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_NOTIFICATION",0);
      thunk_FUN_1004e439c(auStack_30,uVar4);
      FUN_1001e55b0(0x40a00000,auStack_30,0,0);
      if (pvStack_28 == (void *)0x0) {
        return;
      }
      operator_delete__(pvStack_28);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x12) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb5fa);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x14) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb66a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaa81);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb6e3);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_CAPTAIN";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x1c) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb72a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 9) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb50c), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
      pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_TEAM_FULL";
LAB_100289fc4:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void thunk_FUN_100289d14(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_NOTIFICATION",0);
      thunk_FUN_1004e439c(auStack_30,uVar4);
      FUN_1001e55b0(0x40a00000,auStack_30,0,0);
      if (pvStack_28 == (void *)0x0) {
        return;
      }
      operator_delete__(pvStack_28);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x12) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb5fa);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x14) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb66a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaa81);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb6e3);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_CAPTAIN";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x1c) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb72a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 9) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb50c), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
      pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_TEAM_FULL";
LAB_100289fc4:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void FUN_10028a618(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = FUN_10064081c();
  bVar6 = param_3 == 0;
  uVar2 = 0x3f800000;
  if (bVar6) {
    uVar2 = 0;
  }
  uVar3 = 0x3eb33333;
  if (bVar6) {
    uVar3 = 0x3e19999a;
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = 0x42c80000;
  }
  uVar5 = 0x3f800000;
  if (bVar6) {
    uVar5 = 0x3f666666;
  }
  uVar8 = FUN_100640840(uVar2,uVar3,FUN_10001f160);
  FUN_1006408f4(0,uVar4,uVar3,FUN_10001f160);
  FUN_100640db8(uVar5,uVar5,uVar3,FUN_10001f160);
  uVar9 = FUN_10001f4d4();
  FUN_10063f2a4(uVar9,uVar8);
  lVar1 = param_2 + 0x1b848;
  FUN_100642324(lVar1);
  FUN_100642b7c(lVar1,uVar7);
  if (param_3 != 0) {
    FUN_100286c7c(param_1,param_2,0,1);
    *(uint *)(param_2 + 0x1b8cc) = *(uint *)(param_2 + 0x1b8cc) | 4;
    *(uint *)(param_2 + 0x404) = *(uint *)(param_2 + 0x404) & 0xfffffffb;
    return;
  }
  uVar7 = FUN_100047300();
  FUN_100642b14(lVar1,uVar7);
  return;
}




void FUN_10028a79c(long param_1)

{
  FUN_1001855dc(param_1 + 0x1c668);
  FUN_1001855dc(param_1 + 0x1e358);
  FUN_1001855dc(param_1 + 0x202a8);
  FUN_1001855dc(param_1 + 0x21f98);
  FUN_1001b4c0c(param_1 + 0x252c8,0);
  FUN_1001b4c0c(param_1 + 0x26880,0);
  FUN_1001b4c0c(param_1 + 0x28110,0);
  if (*(float *)(param_1 + 0x1b99c) != 0.0) {
    *(undefined4 *)(param_1 + 0x1b99c) = 0;
    FUN_1000200a0(param_1 + 0x1b958);
  }
  if (*(float *)(param_1 + 0x1953c) != 0.0) {
    *(float *)(param_1 + 0x1953c) = 0.0;
    FUN_1000200a0(param_1 + 0x194f8);
    return;
  }
  return;
}




void FUN_10028a890(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_100642bc8(param_1 + 0x193e8);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_100642bc8(param_1 + 0x1b848), (uVar1 & 1) == 0)) {
    lVar2 = FUN_10015d3ec();
    if (*(char *)(lVar2 + 0x567c) != '\0') {
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,0,FUN_10028a980);
      return;
    }
    FUN_100288e44(param_1,1);
    return;
  }
  return;
}




void FUN_10028a980(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23658,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10028a9cc(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x1e358;
  uVar3 = FUN_1001afee4(param_1 + 0x1c668);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100289480(param_1);
  return;
}




void FUN_10028aa38(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x21f98;
  uVar3 = FUN_1001afee4(param_1 + 0x202a8);
  FUN_100185e7c(lVar1,1,uVar3);
  uVar3 = FUN_1001afee4(lVar1);
  iVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    FUN_10018577c(lVar1);
  }
  FUN_100289480(param_1);
  return;
}




void FUN_10028aaa4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100642bc8(param_1 + 0x193e8);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_100642bc8(param_1 + 0x1b848), (uVar1 & 1) == 0)) {
    FUN_100288e44(param_1,0);
    return;
  }
  return;
}




void FUN_10028aafc(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (*(char *)(param_1 + 0x2b07c) == '\0') {
    lVar2 = FUN_10015d3ec();
    if (*(char *)(lVar2 + 0x567c) != '\0') {
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
      pcVar7 = FUN_10028a980;
LAB_10028aba4:
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,0,pcVar7);
      return;
    }
    if (param_3 == 1) {
      uVar1 = *(uint *)(param_1 + 0x2b078);
      lVar2 = FUN_10015d3ec();
      if (*(uint *)(lVar2 + 0x5454) < uVar1) {
        uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar4 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_GLORY_DIALOG_TEXT",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
        return;
      }
      FUN_1004e313c(auStack_40);
      FUN_1004e38ac(auStack_40,"%d");
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_GLORY_DIALOG_TEXT",0);
      thunk_FUN_1004e439c(auStack_50,uVar3);
      FUN_1004e3120(auStack_60,"[COST]");
      FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_TITLE",0);
      uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
      pcVar7 = thunk_FUN_10028b180;
    }
    else {
      if (param_3 != 0) {
        return;
      }
      uVar1 = *(uint *)(param_1 + 0x2b074);
      lVar2 = FUN_10015d3ec();
      if (*(uint *)(lVar2 + 0x5450) < uVar1) {
        uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar4 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_ICE_DIALOG_TEXT",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar6 = FUN_1004e0150("MARKET_DIALOG_BUY_ICE",0);
        pcVar7 = thunk_FUN_1001e3fd8;
        goto LAB_10028aba4;
      }
      FUN_1004e313c(auStack_40);
      FUN_1004e38ac(auStack_40,"%d");
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_ICE_DIALOG_TEXT",0);
      thunk_FUN_1004e439c(auStack_50,uVar3);
      FUN_1004e3120(auStack_60,"[COST]");
      FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_TITLE",0);
      uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
      pcVar7 = thunk_FUN_10028b0a4;
    }
    FUN_1001e3120(uVar3,auStack_50,uVar4,uVar5,param_1,pcVar7,0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void thunk_FUN_10028b0a4(void)

{
  FUN_10028b0a4();
  return;
}




void thunk_FUN_10028b180(void)

{
  FUN_10028b180();
  return;
}




void FUN_10028ae74(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *local_138;
  void *local_130;
  undefined7 local_128;
  char cStack_121;
  char local_111;
  undefined4 local_110;
  undefined8 local_10c;
  undefined1 auStack_100 [8];
  void *local_f8;
  undefined1 auStack_f0 [8];
  void *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [16];
  long local_c8;
  code *pcStack_c0;
  long local_b0;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  char local_69;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  
  thunk_FUN_1001cd434(&local_e0);
  uVar2 = FUN_1004e0150("MAIN_SEASON_TEAM_CREATION_TOOLTIP",0);
  thunk_FUN_1004e439c(auStack_f0,uVar2);
  do {
    FUN_1004e3120(&local_138,"[SEASON_NAME]");
    FUN_1000f0f78(auStack_100,0,0,0);
    uVar3 = FUN_1004e3bc4(auStack_f0,0,&local_138,auStack_100);
    if (local_f8 != (void *)0x0) {
      operator_delete__(local_f8);
    }
    if (local_130 != (void *)0x0) {
      operator_delete__(local_130);
    }
  } while ((uVar3 & 1) != 0);
  thunk_FUN_1004e439c(&local_138,auStack_f0);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 1;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_d8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  local_b0 = param_1 + 0x29a28;
  local_38 = 2;
  local_50 = 0x3dcccccd;
  iVar1 = FUN_100126c88();
  local_4c = 0x447a0000;
  if (iVar1 == 0) {
    local_4c = 0x44480000;
  }
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_MORE_INFO",0);
  FUN_1000153b4(&local_90,uVar2);
  pcStack_c0 = FUN_10028b07c;
  local_c8 = param_1;
  FUN_10001549c(&local_138,"teamProfileSeasonLabel");
  FUN_1001cefb8(param_1 + 0x29df8,&local_138,&local_e0);
  if (cStack_121 < '\0') {
    operator_delete(local_138);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
  }
  local_e0 = &PTR_FUN_1014666e0;
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




void FUN_10028b07c(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b408();
  if (iVar1 != 0) {
    FUN_10052b410("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_10028b0a4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2b074);
  lVar2 = FUN_10015d3ec();
  if (*(uint *)(lVar2 + 0x5450) < uVar1) {
    return;
  }
  uVar3 = FUN_10015d3ec();
  uVar4 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x1c9d8) & 1) * 0x130 + 0x1c848);
  uVar5 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x20618) & 1) * 0x130 + 0x20488);
  FUN_10016789c(uVar3,param_1 + 0x2b040,uVar4,uVar5);
  return;
}




void FUN_10028b180(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2b078);
  lVar2 = FUN_10015d3ec();
  if (*(uint *)(lVar2 + 0x5454) < uVar1) {
    return;
  }
  uVar3 = FUN_10015d3ec();
  uVar4 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x1c9d8) & 1) * 0x130 + 0x1c848);
  uVar5 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x20618) & 1) * 0x130 + 0x20488);
  FUN_10016789c(uVar3,param_1 + 0x2b058,uVar4,uVar5);
  return;
}




void FUN_10028b25c(undefined8 param_1)

{
  undefined **local_120 [5];
  void *local_f8;
  undefined8 uStack_f0;
  long local_e8;
  void *pvStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  
  FUN_1004f1580(local_120);
  local_120[0] = &PTR_FUN_10145bf20;
  local_58 = 0;
  lStack_50 = 0;
  uStack_f0 = 0;
  local_f8 = (void *)0x0;
  pvStack_e0 = (void *)0x0;
  local_e8 = 0;
  lStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = (void *)0x0;
  local_60 = (void *)0x0;
  local_b8 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  std::string::operator=((string *)&local_f8,(string *)&DAT_101d91198);
  std::string::operator=((string *)&pvStack_e0,(string *)&DAT_101d91198);
  std::string::operator=((string *)&local_c8,(string *)&DAT_101d91198);
  FUN_100288b0c(param_1,local_120);
  local_120[0] = &PTR_FUN_10145bf20;
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  FUN_10015ab5c(&local_78,1);
  FUN_10015aacc(&local_88,1);
  if (local_b8 < 0) {
    operator_delete(local_c8);
  }
  if (lStack_d0 < 0) {
    operator_delete(pvStack_e0);
  }
  if (local_e8 < 0) {
    operator_delete(local_f8);
  }
  FUN_1004f15a8(local_120);
  return;
}




long * FUN_10028b370(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar7 = (undefined8 *)FUN_1006421a8();
  *puVar7 = &PTR_FUN_10147efc0;
  puVar7 = puVar7 + 0x11;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x55;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x7b;
  thunk_FUN_100181304(plVar3,0);
  param_1[0x334] = 0;
  param_1[0x333] = 0;
  param_1[0x332] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  iVar6 = FUN_100126c88();
  FUN_100652cac(puVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar5 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar5 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x10c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x1980;
    FUN_1000200a0(puVar7);
  }
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar6 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  FUN_100651038(plVar1,*ppuVar4);
  uVar5 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar5 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1fc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar6 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar2,*ppuVar4);
  uVar5 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar5 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x32c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  uVar8 = FUN_1004e0150("MENU_PROFILE_GUILD_INVITE_VIEW",0);
  FUN_1001816d4(0,0x42c80000,0x446b0000,plVar3,0,uVar8,&DAT_10115a168,&DAT_101dc1cb8,
                PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  local_48 = DAT_101d91884;
  local_70 = FUN_10028b5c0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x7c,&local_70);
  return param_1;
}




void FUN_10028b5c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_1001635bc(uVar1,param_1 + 0x1990,1);
  return;
}




void FUN_10028b5ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10147efc0;
  if (*(char *)((long)param_1 + 0x19a7) < '\0') {
    operator_delete((void *)param_1[0x332]);
  }
  FUN_10003bd40(param_1 + 0x7b);
  thunk_FUN_100651068(param_1 + 0x55);
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10028b678(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10147efc0;
  if (*(char *)((long)param_1 + 0x19a7) < '\0') {
    operator_delete((void *)param_1[0x332]);
  }
  FUN_10003bd40(param_1 + 0x7b);
  thunk_FUN_100651068(param_1 + 0x55);
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10028b708(uint *param_1,uint param_2)

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




long FUN_10028b784(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10014f4a0();
  *puVar1 = &PTR_thunk_FUN_10028bb80_10147f0c0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_10001549c(puVar1 + 7,"SocialPingEquipedPack");
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  FUN_10028b7e0(param_1);
  return param_1;
}




void FUN_10028bb80(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10028bb80_10147f0c0;
  FUN_10028bbf4();
  if ((void *)param_1[0x8b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8b]);
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_10014f51c(param_1);
  return;
}




void FUN_10028bbf4(long param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x450);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x458);
      pvVar3 = *(void **)(lVar2 + uVar4 * 8);
      if (pvVar3 != (void *)0x0) {
        if (*(char *)((long)pvVar3 + 0x3f) < '\0') {
          operator_delete(*(void **)((long)pvVar3 + 0x28));
        }
        if (*(char *)((long)pvVar3 + 0x27) < '\0') {
          operator_delete(*(void **)((long)pvVar3 + 0x10));
        }
        if (*(void **)((long)pvVar3 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar3 + 8));
        }
        operator_delete(pvVar3);
        lVar2 = *(long *)(param_1 + 0x458);
        uVar1 = *(uint *)(param_1 + 0x450);
      }
      *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (*(long *)(param_1 + 0x458) != 0) {
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}




void thunk_FUN_10028bb80(void)

{
  FUN_10028bb80();
  return;
}




void FUN_10028bc8c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10028bb80();
  operator_delete(pvVar1);
  return;
}




long FUN_10028bca0(long param_1,byte *param_2)

{
  long lVar1;
  byte *pbVar2;
  size_t sVar3;
  uint uVar4;
  byte bVar5;
  size_t sVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar4 = *(uint *)(param_1 + 0x450);
  pbVar2 = *(byte **)param_2;
  sVar6 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar2 = param_2;
    sVar6 = (ulong)param_2[0x17];
  }
  if (uVar4 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x458);
    do {
      lVar10 = *(long *)(lVar12 + uVar11 * 8);
      bVar5 = *(byte *)(lVar10 + 0x27);
      sVar3 = *(size_t *)(lVar10 + 0x18);
      if (-1 < (char)bVar5) {
        sVar3 = (ulong)bVar5;
      }
      if (sVar3 == sVar6) {
        if ((char)bVar5 < '\0') {
          if (sVar6 == 0) {
            return lVar10;
          }
          iVar8 = _memcmp(*(void **)(lVar10 + 0x10),pbVar2,sVar6);
          if (iVar8 == 0) {
            return lVar10;
          }
        }
        else {
          if (sVar6 == 0) {
            return lVar10;
          }
          if ((uint)*pbVar2 == ((uint)*(void **)(lVar10 + 0x10) & 0xff)) {
            lVar9 = 0;
            do {
              if ((ulong)bVar5 - 1 == lVar9) {
                return lVar10;
              }
              lVar1 = lVar10 + lVar9;
              lVar7 = lVar9 + 1;
              lVar9 = lVar9 + 1;
            } while (*(byte *)(lVar1 + 0x11) == pbVar2[lVar7]);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  return 0;
}




void FUN_10028bd98(long param_1,byte *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  size_t sVar15;
  ulong uVar16;
  byte bVar17;
  long lVar18;
  ulong uVar19;
  size_t sVar20;
  size_t sVar21;
  void *local_78 [2];
  char local_61;
  
  uVar5 = *(uint *)(param_1 + 0x450);
  if (uVar5 != 0) {
    uVar16 = 0;
    lVar14 = *(long *)(param_1 + 0x458);
    do {
      lVar18 = *(long *)(lVar14 + uVar16 * 8);
      if (lVar18 == 0) goto LAB_10028bf2c;
      puVar1 = (undefined8 *)(lVar18 + 0x10);
      bVar7 = *(byte *)(lVar18 + 0x27);
      uVar19 = (ulong)bVar7;
      if (1 < *(uint *)(lVar18 + 0x40)) {
        sVar20 = *(size_t *)(lVar18 + 0x18);
        bVar17 = param_2[0x17];
        sVar21 = (size_t)bVar17;
        sVar15 = *(size_t *)(param_2 + 8);
        goto LAB_10028be88;
      }
      sVar20 = *(size_t *)(lVar18 + 0x18);
      sVar2 = sVar20;
      if (-1 < (char)bVar7) {
        sVar2 = uVar19;
      }
      bVar17 = param_2[0x17];
      sVar21 = (size_t)bVar17;
      sVar15 = *(size_t *)(param_2 + 8);
      sVar3 = sVar15;
      if (-1 < (char)bVar17) {
        sVar3 = sVar21;
      }
      if (sVar2 == sVar3) {
        puVar4 = (void *)*puVar1;
        if (-1 < (char)bVar7) {
          puVar4 = puVar1;
        }
        pbVar13 = *(byte **)param_2;
        if (-1 < (char)bVar17) {
          pbVar13 = param_2;
        }
        if ((char)bVar7 < '\0') {
          if ((sVar2 == 0) || (iVar8 = _memcmp(puVar4,pbVar13,sVar2), iVar8 == 0))
          goto LAB_10028be88;
          goto LAB_10028bf24;
        }
        if (sVar2 != 0) {
          if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
            pbVar12 = (byte *)(lVar18 + 0x11);
            uVar11 = uVar19;
            do {
              uVar11 = uVar11 - 1;
              pbVar13 = pbVar13 + 1;
              if (uVar11 == 0) goto LAB_10028be88;
              bVar6 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar6 == *pbVar13);
          }
          goto LAB_10028bf24;
        }
LAB_10028be88:
        if (-1 < (char)bVar7) {
          sVar20 = uVar19;
        }
        if (-1 < (char)bVar17) {
          sVar15 = sVar21;
        }
        if (sVar20 == sVar15) {
          puVar4 = (undefined8 *)*puVar1;
          if (-1 < (char)bVar7) {
            puVar4 = puVar1;
          }
          pbVar13 = *(byte **)param_2;
          if (-1 < (char)bVar17) {
            pbVar13 = param_2;
          }
          if ((char)bVar7 < '\0') {
            if ((sVar20 == 0) || (iVar8 = _memcmp(puVar4,pbVar13,sVar20), iVar8 == 0))
            goto LAB_10028bf0c;
            goto LAB_10028bf2c;
          }
          if (sVar20 != 0) {
            if ((uint)*pbVar13 == ((uint)(undefined8 *)*puVar1 & 0xff)) {
              pbVar12 = (byte *)(lVar18 + 0x11);
              do {
                uVar19 = uVar19 - 1;
                pbVar13 = pbVar13 + 1;
                if (uVar19 == 0) goto LAB_10028bf0c;
                bVar7 = *pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (bVar7 == *pbVar13);
            }
            goto LAB_10028bf2c;
          }
LAB_10028bf0c:
          uVar10 = 1;
          goto LAB_10028bf28;
        }
      }
      else {
LAB_10028bf24:
        uVar10 = 2;
LAB_10028bf28:
        *(undefined4 *)(lVar18 + 0x40) = uVar10;
      }
LAB_10028bf2c:
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar5);
  }
  uVar16 = FUN_100131560();
  if ((uVar16 & 1) != 0) {
    FUN_10028c070(param_1,param_2);
    FUN_10028c2ac(param_1,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar14 = *(long *)(param_1 + 0x20);
    do {
      if (*(code **)(lVar14 + 8) == (code *)0x0) {
        (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x10));
      }
      else {
        (**(code **)(lVar14 + 8))();
      }
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
  }
  uVar16 = *(ulong *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    uVar16 = (ulong)param_2[0x17];
  }
  if ((uVar16 == 0x19) &&
     (iVar8 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013dddec),
     iVar8 == 0)) {
    uVar9 = FUN_10015d3ec();
    FUN_10001549c(local_78,"");
    FUN_100166bec(uVar9,local_78);
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
    return;
  }
  uVar9 = FUN_10015d3ec();
  FUN_100166bec(uVar9,param_2);
  return;
}




void FUN_10028c070(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ***pppuVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  void *local_148 [2];
  char local_131;
  undefined8 **local_130;
  size_t local_128;
  ulong local_120;
  undefined1 local_118;
  undefined4 local_117;
  undefined1 local_113;
  undefined **local_110 [5];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_1004f1580(local_110);
  local_110[0] = &PTR_FUN_10145c040;
  uStack_e0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  puVar6 = (undefined8 *)FUN_100331708();
  plVar10 = (long *)*puVar6;
  if (*plVar10 != 0) {
    do {
      local_130 = (undefined8 ***)0x0;
      local_128 = 0;
      local_120 = 0;
      FUN_10001549c(local_148,*(undefined8 *)*plVar10);
      std::string::operator=((string *)&local_130,(string *)local_148);
      if (local_131 < '\0') {
        operator_delete(local_148[0]);
      }
      uVar7 = local_120 >> 0x38;
      sVar1 = local_128;
      if (-1 < (long)local_120) {
        sVar1 = uVar7;
      }
      bVar4 = param_2[0x17];
      sVar2 = *(size_t *)(param_2 + 8);
      if (-1 < (char)bVar4) {
        sVar2 = (ulong)bVar4;
      }
      if (sVar1 == sVar2) {
        pppuVar3 = (undefined8 ***)local_130;
        if (-1 < (long)local_120) {
          pppuVar3 = &local_130;
        }
        pbVar8 = *(byte **)param_2;
        if (-1 < (char)bVar4) {
          pbVar8 = param_2;
        }
        if ((long)local_120 < 0) {
          if (sVar1 == 0) goto LAB_10028c1d8;
          iVar5 = _memcmp(pppuVar3,pbVar8,sVar1);
          local_118 = iVar5 == 0;
        }
        else if (sVar1 == 0) {
LAB_10028c1d8:
          local_118 = true;
        }
        else {
          pbVar9 = (byte *)((ulong)&local_130 | 1);
          if ((uint)*pbVar8 != ((uint)local_130 & 0xff)) goto LAB_10028c1bc;
          do {
            uVar7 = uVar7 - 1;
            pbVar8 = pbVar8 + 1;
            local_118 = uVar7 == 0;
            if (uVar7 == 0) break;
            bVar4 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar4 == *pbVar8);
        }
      }
      else {
LAB_10028c1bc:
        local_118 = false;
      }
      local_117 = 0x1010101;
      local_113 = 1;
      FUN_10028cee0(&local_e8,&local_130);
      if ((long)local_120 < 0) {
        operator_delete(local_130);
      }
      plVar10 = plVar10 + 1;
    } while (*plVar10 != 0);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_110);
  local_110[0] = &PTR_FUN_10145c040;
  FUN_10015cb3c(&local_78,1);
  FUN_10015cbc0(&local_88,1);
  FUN_10015cbc0(&local_98,1);
  FUN_10015cbc0(&local_a8,1);
  FUN_10015cbc0(&local_b8,1);
  FUN_10015cbc0(&local_c8,1);
  FUN_10015cc34(&local_d8,1);
  FUN_10015ccb8(&local_e8,1);
  FUN_1004f15a8(local_110);
  return;
}




void FUN_10028c2ac(long param_1,ulong *param_2)

{
  size_t sVar1;
  ulong *puVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  long *plVar6;
  
  pcVar4 = (char *)FUN_10028ce8c();
  sVar5 = _strlen(pcVar4);
  sVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    sVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if ((sVar5 == sVar1) &&
     (iVar3 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,(ulong)pcVar4),
     iVar3 == 0)) {
    return;
  }
  plVar6 = (long *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    plVar6 = (long *)*plVar6;
  }
  puVar2 = (ulong *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar2 = param_2;
  }
  FUN_10012c750(plVar6,puVar2);
  return;
}




void FUN_10028c348(long param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  undefined8 ****ppppuVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  long *plVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  undefined8 ***local_d8;
  size_t local_d0;
  ulong local_c8;
  undefined8 ***local_c0 [2];
  char local_a9;
  undefined8 ***local_a8;
  size_t sStack_a0;
  byte local_91;
  undefined8 ***local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  long local_68;
  
  *(undefined8 *)(param_1 + 0x460) = 0;
  uVar2 = *(uint *)(param_2 + 0x28);
  if (uVar2 != 0) {
    puVar14 = (uint *)0x0;
    uVar12 = 0;
    lVar13 = *(long *)(param_2 + 0x30);
    do {
      lVar8 = lVar13 + uVar12 * 0x20;
      puVar4 = (uint *)FUN_10028bca0(param_1,lVar8);
      if (puVar4 != (uint *)0x0) {
        if (*(char *)(lVar8 + 0x18) == '\0') {
          lVar8 = lVar13 + uVar12 * 0x20;
          uVar7 = (ulong)*puVar4;
          if (*puVar4 != 0) {
            plVar10 = *(long **)(puVar4 + 2);
            do {
              pcVar11 = (char *)(lVar8 + 0x19);
              switch(*(undefined4 *)(*plVar10 + 0x48)) {
              case 7:
                break;
              case 8:
                pcVar11 = (char *)(lVar8 + 0x1a);
                break;
              case 9:
                pcVar11 = (char *)(lVar8 + 0x1b);
                break;
              case 10:
                pcVar11 = (char *)(lVar8 + 0x1c);
                break;
              case 0xb:
                pcVar11 = (char *)(lVar8 + 0x1d);
                break;
              default:
                goto switchD_10028c424_default;
              }
              *(char *)(*plVar10 + 0x4c) = *pcVar11;
switchD_10028c424_default:
              plVar10 = plVar10 + 1;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          if ((((*(char *)(lVar8 + 0x19) == '\0') || (*(char *)(lVar8 + 0x1a) == '\0')) ||
              (*(char *)(lVar8 + 0x1b) == '\0')) ||
             ((*(char *)(lVar8 + 0x1c) == '\0' || (*(char *)(lVar8 + 0x1d) == '\0')))) {
            uVar6 = 3;
          }
          else {
            uVar6 = 2;
          }
          puVar4[0x10] = uVar6;
        }
        else {
          *(uint **)(param_1 + 0x460) = puVar4;
          puVar4[0x10] = 0;
          uVar7 = (ulong)*puVar4;
          puVar14 = puVar4;
          if (*puVar4 != 0) {
            plVar10 = *(long **)(puVar4 + 2);
            do {
              *(undefined1 *)(*plVar10 + 0x4c) = 1;
              uVar7 = uVar7 - 1;
              plVar10 = plVar10 + 1;
            } while (uVar7 != 0);
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar2);
    if (puVar14 != (uint *)0x0) {
      lVar13 = *(long *)(param_1 + 0x468);
      uVar9 = 2;
      goto LAB_10028c4b8;
    }
  }
  uVar9 = 0;
  lVar13 = *(long *)(param_1 + 0x468);
  *(long *)(param_1 + 0x460) = lVar13;
LAB_10028c4b8:
  *(undefined4 *)(lVar13 + 0x40) = uVar9;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar13 = *(long *)(param_1 + 0x30);
    do {
      if (*(code **)(lVar13 + 8) == (code *)0x0) {
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x10));
      }
      else {
        (**(code **)(lVar13 + 8))();
      }
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x28) * 0x20);
  }
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_90 = (undefined8 ****)0x0;
  uStack_88 = 0;
  local_80 = 0;
  uVar12 = (ulong)*(uint *)(param_1 + 0x450);
  if (*(uint *)(param_1 + 0x450) != 0) {
    uVar7 = 0;
    do {
      lVar13 = *(long *)(*(long *)(param_1 + 0x458) + uVar7 * 8);
      if ((*(uint *)(lVar13 + 0x40) | 2) == 2) {
        FUN_10003330c(&local_a8,lVar13 + 0x10);
        ppppuVar1 = (undefined8 ****)local_a8;
        if (-1 < (char)local_91) {
          ppppuVar1 = &local_a8;
        }
        std::string::append((char *)&local_78,(ulong)ppppuVar1);
        std::string::append((char *)&local_78);
        if ((char)local_91 < '\0') {
          operator_delete(local_a8);
        }
        uVar12 = (ulong)*(uint *)(param_1 + 0x450);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar12);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar13 = 0;
    uVar12 = 0;
    do {
      FUN_10003330c(&local_a8,*(long *)(param_2 + 0x30) + lVar13);
      lVar8 = *(long *)(param_2 + 0x30);
      if (*(char *)(lVar8 + lVar13 + 0x19) != '\0') {
        local_d8 = (undefined8 ****)0x0;
        local_d0 = 0;
        local_c8 = 0;
        ppppuVar1 = (undefined8 ****)local_a8;
        sVar3 = sStack_a0;
        if (-1 < (char)local_91) {
          ppppuVar1 = &local_a8;
          sVar3 = (ulong)local_91;
        }
        if (0xffffffffffffffef < sVar3 + 10) goto LAB_10028caf0;
        if (sVar3 + 10 < 0x17) {
          ppppuVar5 = &local_d8;
          local_c8 = sVar3 << 0x38;
          if (sVar3 != 0) goto LAB_10028c634;
        }
        else {
          uVar7 = sVar3 + 0x1a & 0xfffffffffffffff0;
          ppppuVar5 = operator_new(uVar7);
          local_c8 = uVar7 | 0x8000000000000000;
          local_d8 = ppppuVar5;
          local_d0 = sVar3;
LAB_10028c634:
          _memcpy(ppppuVar5,ppppuVar1,sVar3);
        }
        *(undefined1 *)((long)ppppuVar5 + sVar3) = 0;
        std::string::append((char *)&local_d8,0x1013eba15);
        std::string::string((string *)local_c0,(string *)&local_d8);
        if ((long)local_c8 < 0) {
          operator_delete(local_d8);
        }
        ppppuVar1 = (undefined8 ****)local_c0[0];
        if (-1 < local_a9) {
          ppppuVar1 = local_c0;
        }
        std::string::append((char *)&local_90,(ulong)ppppuVar1);
        if (local_a9 < '\0') {
          operator_delete(local_c0[0]);
        }
        lVar8 = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(lVar8 + lVar13 + 0x1a) != '\0') {
        local_d8 = (undefined8 ****)0x0;
        local_d0 = 0;
        local_c8 = 0;
        ppppuVar1 = (undefined8 ****)local_a8;
        sVar3 = sStack_a0;
        if (-1 < (char)local_91) {
          ppppuVar1 = &local_a8;
          sVar3 = (ulong)local_91;
        }
        if (0xffffffffffffffef < sVar3 + 7) goto LAB_10028caf0;
        if (sVar3 + 7 < 0x17) {
          ppppuVar5 = &local_d8;
          local_c8 = sVar3 << 0x38;
          if (sVar3 != 0) goto LAB_10028c718;
        }
        else {
          uVar7 = sVar3 + 0x17 & 0xfffffffffffffff0;
          ppppuVar5 = operator_new(uVar7);
          local_c8 = uVar7 | 0x8000000000000000;
          local_d8 = ppppuVar5;
          local_d0 = sVar3;
LAB_10028c718:
          _memcpy(ppppuVar5,ppppuVar1,sVar3);
        }
        *(undefined1 *)((long)ppppuVar5 + sVar3) = 0;
        std::string::append((char *)&local_d8,0x1013eba20);
        std::string::string((string *)local_c0,(string *)&local_d8);
        if ((long)local_c8 < 0) {
          operator_delete(local_d8);
        }
        ppppuVar1 = (undefined8 ****)local_c0[0];
        if (-1 < local_a9) {
          ppppuVar1 = local_c0;
        }
        std::string::append((char *)&local_90,(ulong)ppppuVar1);
        if (local_a9 < '\0') {
          operator_delete(local_c0[0]);
        }
        lVar8 = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(lVar8 + lVar13 + 0x1b) != '\0') {
        local_d8 = (undefined8 ****)0x0;
        local_d0 = 0;
        local_c8 = 0;
        ppppuVar1 = (undefined8 ****)local_a8;
        sVar3 = sStack_a0;
        if (-1 < (char)local_91) {
          ppppuVar1 = &local_a8;
          sVar3 = (ulong)local_91;
        }
        if (0xffffffffffffffef < sVar3 + 7) goto LAB_10028caf0;
        if (sVar3 + 7 < 0x17) {
          ppppuVar5 = &local_d8;
          local_c8 = sVar3 << 0x38;
          if (sVar3 != 0) goto LAB_10028c800;
        }
        else {
          uVar7 = sVar3 + 0x17 & 0xfffffffffffffff0;
          ppppuVar5 = operator_new(uVar7);
          local_c8 = uVar7 | 0x8000000000000000;
          local_d8 = ppppuVar5;
          local_d0 = sVar3;
LAB_10028c800:
          _memcpy(ppppuVar5,ppppuVar1,sVar3);
        }
        *(undefined1 *)((long)ppppuVar5 + sVar3) = 0;
        std::string::append((char *)&local_d8,0x1013eba28);
        std::string::string((string *)local_c0,(string *)&local_d8);
        if ((long)local_c8 < 0) {
          operator_delete(local_d8);
        }
        ppppuVar1 = (undefined8 ****)local_c0[0];
        if (-1 < local_a9) {
          ppppuVar1 = local_c0;
        }
        std::string::append((char *)&local_90,(ulong)ppppuVar1);
        if (local_a9 < '\0') {
          operator_delete(local_c0[0]);
        }
        lVar8 = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(lVar8 + lVar13 + 0x1c) != '\0') {
        local_d8 = (undefined8 ****)0x0;
        local_d0 = 0;
        local_c8 = 0;
        ppppuVar1 = (undefined8 ****)local_a8;
        sVar3 = sStack_a0;
        if (-1 < (char)local_91) {
          ppppuVar1 = &local_a8;
          sVar3 = (ulong)local_91;
        }
        if (0xffffffffffffffef < sVar3 + 7) goto LAB_10028caf0;
        if (sVar3 + 7 < 0x17) {
          ppppuVar5 = &local_d8;
          local_c8 = sVar3 << 0x38;
          if (sVar3 != 0) goto LAB_10028c8e8;
        }
        else {
          uVar7 = sVar3 + 0x17 & 0xfffffffffffffff0;
          ppppuVar5 = operator_new(uVar7);
          local_c8 = uVar7 | 0x8000000000000000;
          local_d8 = ppppuVar5;
          local_d0 = sVar3;
LAB_10028c8e8:
          _memcpy(ppppuVar5,ppppuVar1,sVar3);
        }
        *(undefined1 *)((long)ppppuVar5 + sVar3) = 0;
        std::string::append((char *)&local_d8,0x1013eba30);
        std::string::string((string *)local_c0,(string *)&local_d8);
        if ((long)local_c8 < 0) {
          operator_delete(local_d8);
        }
        ppppuVar1 = (undefined8 ****)local_c0[0];
        if (-1 < local_a9) {
          ppppuVar1 = local_c0;
        }
        std::string::append((char *)&local_90,(ulong)ppppuVar1);
        if (local_a9 < '\0') {
          operator_delete(local_c0[0]);
        }
        lVar8 = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(lVar8 + lVar13 + 0x1d) != '\0') {
        local_d8 = (undefined8 ****)0x0;
        local_d0 = 0;
        local_c8 = 0;
        ppppuVar1 = (undefined8 ****)local_a8;
        sVar3 = sStack_a0;
        if (-1 < (char)local_91) {
          ppppuVar1 = &local_a8;
          sVar3 = (ulong)local_91;
        }
        if (0xffffffffffffffef < sVar3 + 6) {
LAB_10028caf0:
          local_c8 = 0;
          local_d0 = 0;
          local_d8 = (undefined8 ***)0x0;
          FUN_10028cfd8();
          uVar12 = FUN_100131560();
          if ((uVar12 & 1) != 0) {
            return;
          }
          FUN_10015d3ec();
          FUN_100166ab8();
          return;
        }
        if (sVar3 + 6 < 0x17) {
          ppppuVar5 = &local_d8;
          local_c8 = sVar3 << 0x38;
          if (sVar3 != 0) goto LAB_10028c9d0;
        }
        else {
          uVar7 = sVar3 + 0x16 & 0xfffffffffffffff0;
          ppppuVar5 = operator_new(uVar7);
          local_c8 = uVar7 | 0x8000000000000000;
          local_d8 = ppppuVar5;
          local_d0 = sVar3;
LAB_10028c9d0:
          _memcpy(ppppuVar5,ppppuVar1,sVar3);
        }
        *(undefined1 *)((long)ppppuVar5 + sVar3) = 0;
        std::string::append((char *)&local_d8,0x1013eba38);
        std::string::string((string *)local_c0,(string *)&local_d8);
        if ((long)local_c8 < 0) {
          operator_delete(local_d8);
        }
        ppppuVar1 = (undefined8 ****)local_c0[0];
        if (-1 < local_a9) {
          ppppuVar1 = local_c0;
        }
        std::string::append((char *)&local_90,(ulong)ppppuVar1);
        if (local_a9 < '\0') {
          operator_delete(local_c0[0]);
        }
      }
      if ((char)local_91 < '\0') {
        operator_delete(local_a8);
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x20;
    } while (uVar12 < *(uint *)(param_2 + 0x28));
  }
  ppppuVar1 = (undefined8 ****)local_90;
  if (-1 < local_80) {
    ppppuVar1 = &local_90;
  }
  FUN_100102198("SocialPingsOwned",ppppuVar1,1);
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < local_68) {
    ppppuVar1 = &local_78;
  }
  FUN_100102198("SocialPingPacksCompleted",ppppuVar1,1);
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  return;
}




void FUN_10028caf4(void)

{
  uint uVar1;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10015d3ec();
  FUN_100166ab8();
  return;
}




void FUN_10028cb18(uint *param_1,undefined8 *param_2)

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
    FUN_10028cfe4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10028cb98(uint *param_1,undefined8 *param_2)

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
    FUN_1001f6770(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10028cc18(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte ****ppppbVar8;
  byte *pbVar9;
  long *plVar10;
  void *local_158 [2];
  char local_141;
  void *local_140;
  size_t local_138;
  ulong local_130;
  undefined1 local_128;
  undefined4 local_127;
  undefined1 local_123;
  byte ***local_120;
  size_t local_118;
  byte local_109;
  undefined **local_108 [5];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_1004f1580(local_108);
  local_108[0] = &PTR_FUN_10145c040;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uVar5 = FUN_10028ce8c(param_1);
  FUN_10001549c(&local_120,uVar5);
  puVar6 = (undefined8 *)FUN_100331708();
  plVar10 = (long *)*puVar6;
  if (*plVar10 != 0) {
    do {
      local_140 = (void *)0x0;
      local_138 = 0;
      local_130 = 0;
      FUN_10001549c(local_158,*(undefined8 *)*plVar10);
      std::string::operator=((string *)&local_140,(string *)local_158);
      if (local_141 < '\0') {
        operator_delete(local_158[0]);
      }
      sVar1 = local_118;
      if (-1 < (char)local_109) {
        sVar1 = (ulong)local_109;
      }
      if (sVar1 == 0) {
        puVar6 = (undefined8 *)FUN_100331708();
        local_128 = *(long *)*puVar6 == *plVar10;
      }
      else {
        uVar7 = local_130 >> 0x38;
        sVar2 = local_138;
        if (-1 < (long)local_130) {
          sVar2 = uVar7;
        }
        if (sVar2 == sVar1) {
          ppppbVar8 = (byte ****)local_120;
          if (-1 < (char)local_109) {
            ppppbVar8 = &local_120;
          }
          if ((long)local_130 < 0) {
            iVar4 = _memcmp(local_140,ppppbVar8,sVar1);
            local_128 = iVar4 == 0;
          }
          else {
            pbVar9 = (byte *)((ulong)&local_140 | 1);
            if ((uint)*(byte *)ppppbVar8 != ((uint)local_140 & 0xff)) goto LAB_10028cd6c;
            do {
              uVar7 = uVar7 - 1;
              ppppbVar8 = (byte ****)((long)ppppbVar8 + 1);
              local_128 = uVar7 == 0;
              if (uVar7 == 0) break;
              bVar3 = *pbVar9;
              pbVar9 = pbVar9 + 1;
            } while (bVar3 == *(byte *)ppppbVar8);
          }
        }
        else {
LAB_10028cd6c:
          local_128 = false;
        }
      }
      local_127 = 0x1010101;
      local_123 = 1;
      if ((bool)local_128 != false) {
        FUN_10028c2ac(param_1,&local_140);
      }
      FUN_10028cee0(&local_e0,&local_140);
      if ((long)local_130 < 0) {
        operator_delete(local_140);
      }
      plVar10 = plVar10 + 1;
    } while (*plVar10 != 0);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_108);
  if ((char)local_109 < '\0') {
    operator_delete(local_120);
  }
  local_108[0] = &PTR_FUN_10145c040;
  FUN_10015cb3c(&local_70,1);
  FUN_10015cbc0(&local_80,1);
  FUN_10015cbc0(&local_90,1);
  FUN_10015cbc0(&local_a0,1);
  FUN_10015cbc0(&local_b0,1);
  FUN_10015cbc0(&local_c0,1);
  FUN_10015cc34(&local_d0,1);
  FUN_10015ccb8(&local_e0,1);
  FUN_1004f15a8(local_108);
  return;
}




long FUN_10028ce8c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x468) + 0x10);
  if (*(char *)(*(long *)(param_1 + 0x468) + 0x27) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10012caa0(plVar1,param_1 + 0x50,0x400,plVar2);
  return param_1 + 0x50;
}




void FUN_10028cee0(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = *param_1;
  if (uVar5 == param_1[1]) {
    uVar2 = 0;
    if (uVar5 != 0xffffffff) {
      uVar2 = uVar5 + (~uVar5 | 0xfffffff0) + 0x11;
    }
    if (uVar5 < 0x20) {
      uVar2 = uVar5 << 1;
    }
    uVar3 = uVar5 + 1;
    if (uVar5 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10015c450(param_1,uVar3);
    uVar5 = *param_1;
  }
  *param_1 = uVar5 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar5 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  *(undefined2 *)(lVar1 + -4) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined4 *)(lVar1 + -8) = uVar4;
  return;
}




void FUN_10028cf74(void)

{
  operator_new(0x470);
  DAT_101d237d8 = FUN_10028b784();
  return;
}




void FUN_10028cf98(void)

{
  if (DAT_101d237d8 != (long *)0x0) {
    (**(code **)(*DAT_101d237d8 + 8))();
  }
  DAT_101d237d8 = (long *)0x0;
  return;
}




undefined8 FUN_10028cfcc(void)

{
  return DAT_101d237d8;
}




void FUN_10028cfd8(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10028cfe4(uint *param_1,uint param_2)

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




void FUN_10028d060(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 3;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  return;
}




void FUN_10028d07c(long param_1,string *param_2,string *param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  std::string::operator=((string *)(param_1 + 0x10),param_2);
  std::string::operator=((string *)(param_1 + 0x28),param_3);
  FUN_10028d0e0(param_1,param_4);
  *(undefined1 *)(param_1 + 0x44) = param_5;
  *(undefined1 *)(param_1 + 0x45) = param_6;
  return;
}




void FUN_10028d0e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_10028cfe4(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




long * FUN_10028d14c(long *param_1)

{
  undefined8 *puVar1;
  undefined1 local_38 [8];
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_thunk_FUN_10028d478_10147f458;
  puVar1[0x19] = 0;
  puVar1 = puVar1 + 0x1a;
  thunk_FUN_1005357f4(puVar1);
  FUN_1006421a8(param_1 + 0x15f);
  param_1[0x15f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x170] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x15f,1);
  local_38[0] = 9;
  FUN_100534ebc(puVar1,local_38);
  FUN_10028d20c(param_1);
  return param_1;
}




void FUN_10028d20c(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  
  FUN_10064e48c(param_1,param_1 + 0xb80);
  lVar1 = param_1 + 0xd0;
  FUN_10064e48c(lVar1,param_1 + 0xb80);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar7 = 0;
    plVar3 = (long *)0x0;
    plVar6 = (long *)0x0;
    iVar8 = 0;
    lVar10 = NEON_fmov(0x41200000,4);
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 200) + uVar7 * 8);
      FUN_10064e47c(*(float *)(param_1 + 0xb80) * 0.33333334 + -13.333334,
                    *(float *)(param_1 + 0xb84) * 0.6666667,plVar4);
      if ((*(char *)((long)plVar4 + 0x19dc) == '\0') && (*(char *)((long)plVar4 + 0x19dd) == '\0'))
      {
        *(uint *)((long)plVar4 + 0x84) = *(uint *)((long)plVar4 + 0x84) & 0xfffffffb;
      }
      else {
        *(uint *)((long)plVar4 + 0x84) = *(uint *)((long)plVar4 + 0x84) | 4;
        if (iVar8 == 0) {
          bVar2 = false;
          if ((*(float *)(plVar4 + 8) == 10.0) &&
             (bVar2 = false, !NAN(*(float *)((long)plVar4 + 0x44)))) {
            bVar2 = *(float *)((long)plVar4 + 0x44) == 10.0;
          }
          plVar3 = plVar4;
          if (!bVar2) {
            plVar4[8] = lVar10;
            FUN_1000200a0(plVar4);
          }
LAB_10028d390:
          uVar5 = 3;
        }
        else {
          if (iVar8 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
            FUN_10064e72c(0x41200000,plVar4,0,plVar3,2);
            FUN_10064e72c(0,plVar4,3,plVar3,3);
            plVar3 = plVar4;
            goto LAB_10028d390;
          }
          FUN_10064e72c(0x41200000,plVar4,3,plVar6,1);
          FUN_10064e72c(0,plVar4,0,plVar6,0);
          if (plVar3 == plVar4) goto LAB_10028d390;
          uVar5 = 2;
        }
        uVar9 = (**(code **)(*plVar4 + 0x48))(plVar4);
        *(undefined4 *)(plVar4 + 0x337) = uVar5;
        *(undefined4 *)((long)plVar4 + 0x19a4) = uVar9;
        FUN_10028d544(plVar4,param_1 + 0xaf8);
        iVar8 = iVar8 + 1;
        plVar6 = plVar4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0xc0));
  }
  FUN_1006425d0(lVar1,1,0,1,1);
  FUN_100534e6c(lVar1);
  if (*(float *)(param_1 + 0x114) != 0.0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    FUN_1000200a0(lVar1);
    return;
  }
  return;
}




long * thunk_FUN_10028d14c(long *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [8];
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_thunk_FUN_10028d478_10147f458;
  puVar1[0x19] = 0;
  puVar1 = puVar1 + 0x1a;
  thunk_FUN_1005357f4(puVar1);
  FUN_1006421a8(param_1 + 0x15f);
  param_1[0x15f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x170] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x15f,1);
  auStack_38[0] = 9;
  FUN_100534ebc(puVar1,auStack_38);
  FUN_10028d20c(param_1);
  return param_1;
}




void FUN_10028d478(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10028d478_10147f458;
  FUN_10028d4c8();
  FUN_10064221c(param_1 + 0x15f);
  thunk_FUN_100534a3c(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10028d4c8(long param_1)

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
  return;
}




void thunk_FUN_10028d478(void)

{
  FUN_10028d478();
  return;
}




void FUN_10028d530(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10028d478();
  operator_delete(pvVar1);
  return;
}




void FUN_10028d544(long param_1,long *param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0x1828;
  iVar1 = FUN_100642d08(param_1);
  if (iVar1 != 0) {
    FUN_1006423ec(param_1,1);
  }
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010028d594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x78))(param_2,param_1,1);
    return;
  }
  return;
}




void FUN_10028d5a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_58;
  
  operator_new(0x19e0);
  local_58 = FUN_10028df44();
  FUN_10028d650(local_58,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_10028d90c(param_1 + 0xc0,&local_58);
  FUN_100534ad8(param_1 + 0xd0,local_58,1);
  FUN_10028d20c(param_1);
  return;
}




void FUN_10028d650(long *param_1,string *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,undefined1 param_7,long param_8)

{
  undefined8 *****pppppuVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_140 [8];
  void *local_138;
  void *local_130;
  void *local_128;
  char local_119;
  undefined8 ****local_118 [2];
  char local_101;
  void *local_100 [2];
  char local_e9;
  void *local_e8;
  void *local_e0;
  undefined7 local_d8;
  char cStack_d1;
  char local_c1;
  undefined4 local_c0;
  undefined8 local_bc;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  std::string::operator=((string *)(param_1 + 0x243),param_2);
  FUN_1006513c0(param_1 + 200,param_3);
  FUN_100652cdc(param_1 + 0x52,param_4);
  param_1[0x339] = param_5;
  *(float *)((long)param_1 + 0x19c4) = (float)param_6;
  *(undefined1 *)((long)param_1 + 0x19dc) = param_7;
  FUN_100146c30(param_1 + 0x230,param_8 + 8);
  std::string::operator=((string *)(param_1 + 0x232),(string *)(param_8 + 0x18));
  lVar7 = *(long *)(param_8 + 0x48);
  lVar6 = *(long *)(param_8 + 0x40);
  lVar5 = *(long *)(param_8 + 0x58);
  lVar4 = *(long *)(param_8 + 0x50);
  lVar8 = *(long *)(param_8 + 0x30);
  param_1[0x236] = *(long *)(param_8 + 0x38);
  param_1[0x235] = lVar8;
  param_1[0x238] = lVar7;
  param_1[0x237] = lVar6;
  param_1[0x23a] = lVar5;
  param_1[0x239] = lVar4;
  std::string::operator=((string *)(param_1 + 0x23b),(string *)(param_8 + 0x60));
  FUN_1000153b4(param_1 + 0x23e,param_8 + 0x78);
  FUN_1000153b4(param_1 + 0x240,param_8 + 0x88);
  *(undefined4 *)(param_1 + 0x242) = *(undefined4 *)(param_8 + 0x98);
  FUN_10003330c(local_100,param_2);
  FUN_1004e2c64(local_100);
  FUN_1000e8b18(&local_130,&DAT_101e440f0,local_100);
  FUN_1000e8b18(&local_e8,&local_130,&DAT_101e44108);
  std::string::string((string *)local_118,(string *)&local_e8);
  if (cStack_d1 < '\0') {
    operator_delete(local_e8);
  }
  if (local_119 < '\0') {
    operator_delete(local_130);
  }
  pppppuVar1 = (undefined8 *****)local_118[0];
  if (-1 < local_101) {
    pppppuVar1 = local_118;
  }
  uVar3 = FUN_1004e0150(pppppuVar1,0);
  thunk_FUN_1004e439c(&local_130,uVar3);
  iVar2 = FUN_1004e3624(&local_130);
  if (iVar2 != 0) {
    FUN_10006d330(&local_e8,"Tooltip key has no text or is not defined: %s");
    FUN_1004e3120(auStack_140,&local_e8);
    FUN_1000153b4(&local_130,auStack_140);
    if (local_138 != (void *)0x0) {
      operator_delete__(local_138);
    }
  }
  thunk_FUN_1004e439c(&local_e8,&local_130);
  FUN_10003330c(&local_d8,&DAT_101d91198);
  local_c0 = 1;
  local_bc = 0x41a00000;
  FUN_10003c048(param_1 + 0x323,&local_e8);
  if (local_c1 < '\0') {
    operator_delete((void *)CONCAT17(cStack_d1,local_d8));
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
  }
  (**(code **)(*param_1 + 0x138))(param_1);
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
  }
  if (local_101 < '\0') {
    operator_delete(local_118[0]);
  }
  if (local_e9 < '\0') {
    operator_delete(local_100[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10028d90c(uint *param_1,undefined8 *param_2)

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
    FUN_10028ee00(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10028d98c(long param_1,byte *param_2,long param_3,long param_4,long param_5,
                  undefined4 param_6)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  
  uVar3 = *(uint *)(param_1 + 0xc0);
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar12 = 0;
    lVar10 = *(long *)(param_1 + 200);
    do {
      plVar11 = *(long **)(lVar10 + uVar12 * 8);
      bVar4 = *(byte *)((long)plVar11 + 0x122f);
      uVar7 = (ulong)bVar4;
      sVar2 = plVar11[0x244];
      if (-1 < (char)bVar4) {
        sVar2 = uVar7;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar6 = _memcmp((void *)plVar11[0x243],pbVar1,sVar5), iVar6 == 0)) {
LAB_10028da88:
            plVar11[0x339] = param_3;
            *(float *)((long)plVar11 + 0x19c4) = (float)param_4;
            plVar11[0x33a] = param_5;
            *(undefined4 *)(plVar11 + 0x33b) = param_6;
            *(undefined1 *)((long)plVar11 + 0x19dc) = 1;
            (**(code **)(*plVar11 + 0x138))(plVar11);
            break;
          }
        }
        else {
          if (sVar5 == 0) goto LAB_10028da88;
          if ((uint)*pbVar1 == ((uint)(void *)plVar11[0x243] & 0xff)) {
            pbVar8 = (byte *)((long)plVar11 + 0x1219);
            pbVar9 = pbVar1;
            do {
              uVar7 = uVar7 - 1;
              pbVar9 = pbVar9 + 1;
              if (uVar7 == 0) goto LAB_10028da88;
              bVar4 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar4 == *pbVar9);
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar3);
  }
  FUN_10028d20c(param_1);
  return;
}




bool FUN_10028daec(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  
  uVar3 = *(uint *)(param_1 + 0xc0);
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 == 0) {
    bVar6 = false;
  }
  else {
    uVar12 = 0;
    lVar13 = *(long *)(param_1 + 200);
    bVar6 = true;
    do {
      lVar8 = *(long *)(lVar13 + uVar12 * 8);
      pbVar9 = (byte *)&DAT_101d91198;
      if (*(char *)(lVar8 + 0x19dd) != '\0') {
        pbVar9 = (byte *)(*(long *)(lVar8 + 0xa70) + 0x24a8);
      }
      bVar4 = pbVar9[0x17];
      uVar10 = (ulong)bVar4;
      sVar2 = *(size_t *)(pbVar9 + 8);
      if (-1 < (char)bVar4) {
        sVar2 = uVar10;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if (sVar5 == 0) {
            return bVar6;
          }
          iVar7 = _memcmp(*(void **)pbVar9,pbVar1,sVar5);
          if (iVar7 == 0) {
            return bVar6;
          }
        }
        else {
          if (sVar5 == 0) {
            return bVar6;
          }
          pbVar11 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)pbVar9 & 0xff)) {
            do {
              uVar10 = uVar10 - 1;
              pbVar11 = pbVar11 + 1;
              pbVar9 = pbVar9 + 1;
              if (uVar10 == 0) {
                return bVar6;
              }
            } while (*pbVar9 == *pbVar11);
          }
        }
      }
      uVar12 = uVar12 + 1;
      bVar6 = uVar12 < uVar3;
    } while (uVar12 != uVar3);
  }
  return bVar6;
}




void FUN_10028dc18(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar12 = *(uint *)(param_1 + 0xc0);
  if (uVar12 != 0) {
    uVar11 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 200) + uVar11 * 8);
      pbVar7 = (byte *)&DAT_101d91198;
      if (*(char *)(lVar10 + 0x19dd) != '\0') {
        pbVar7 = (byte *)(*(long *)(lVar10 + 0xa70) + 0x24a8);
      }
      bVar4 = pbVar7[0x17];
      uVar8 = (ulong)bVar4;
      sVar1 = *(size_t *)(pbVar7 + 8);
      if (-1 < (char)bVar4) {
        sVar1 = uVar8;
      }
      bVar5 = param_2[0x17];
      sVar2 = *(size_t *)(param_2 + 8);
      if (-1 < (char)bVar5) {
        sVar2 = (ulong)bVar5;
      }
      if (sVar1 == sVar2) {
        pbVar3 = *(byte **)pbVar7;
        if (-1 < (char)bVar4) {
          pbVar3 = pbVar7;
        }
        pbVar9 = *(byte **)param_2;
        if (-1 < (char)bVar5) {
          pbVar9 = param_2;
        }
        if ((char)bVar4 < '\0') {
          if ((sVar1 == 0) || (iVar6 = _memcmp(pbVar3,pbVar9,sVar1), iVar6 == 0))
          goto LAB_10028dd08;
        }
        else if (sVar1 == 0) {
LAB_10028dd08:
          FUN_10028dd44(lVar10);
          FUN_10028de80(*(undefined8 *)(*(long *)(param_1 + 200) + uVar11 * 8));
          uVar12 = *(uint *)(param_1 + 0xc0);
        }
        else if ((uint)*pbVar9 == ((uint)*(byte **)pbVar7 & 0xff)) {
          do {
            uVar8 = uVar8 - 1;
            pbVar9 = pbVar9 + 1;
            pbVar7 = pbVar7 + 1;
            if (uVar8 == 0) goto LAB_10028dd08;
          } while (*pbVar7 == *pbVar9);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar12);
  }
  return;
}




void FUN_10028dd44(long param_1)

{
  long lVar1;
  ushort *puVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  
  lVar1 = param_1 + 0xca0;
  FUN_100642324(lVar1);
  uVar6 = *(uint *)(param_1 + 0xd24);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0xd24) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(lVar1);
    uVar6 = *(uint *)(param_1 + 0xd24);
  }
  *(uint *)(param_1 + 0xd24) = uVar6 | 4;
  uVar4 = FUN_100640840(0x3dcccccd,0x3e4ccccd,FUN_10001f4ac);
  FUN_100642b14(lVar1,uVar4);
  uVar4 = FUN_100640840(0,0x3e4ccccd,FUN_10001f4ac);
  FUN_100642b14(lVar1,uVar4);
  lVar3 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar2 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
  if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *puVar2;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
  *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
  FUN_10063ee9c(puVar2);
  *(undefined ***)puVar2 = &PTR_thunk_FUN_10063eeb4_1014a5338;
  *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  FUN_100642b14(lVar1,puVar2);
  FUN_1001c4648(0,param_1 + 0xd90);
  return;
}




void FUN_10028de80(long param_1)

{
  undefined1 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined1 *local_60 [2];
  char local_49;
  undefined8 **local_48 [2];
  char local_31;
  
  uVar3 = FUN_1000e7ce4(param_1 + 0x11a8);
  FUN_10001549c(local_48,uVar3);
  FUN_10003330c(local_60,*(long *)(param_1 + 0xa70) + 0x24a8);
  uVar3 = FUN_1001b7dd4(*(undefined8 *)(param_1 + 0xa70));
  ppuVar1 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar1 = local_60;
  }
  pppuVar2 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar2 = local_48;
  }
  FUN_100107850(ppuVar1,pppuVar2,uVar3,1,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_10028df38(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xb80) = param_1;
  *(undefined4 *)(param_3 + 0xb84) = param_2;
  FUN_10028d20c();
  return;
}




code * FUN_10028df44(code *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  code *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar12 = (undefined8 *)FUN_10064f204();
  *puVar12 = &PTR_thunk_FUN_10028e4c4_10147f5a0;
  puVar12 = puVar12 + 0x29;
  thunk_FUN_10064f204(puVar12);
  pcVar1 = param_1 + 0x290;
  FUN_100653ff8(pcVar1);
  pcVar2 = param_1 + 0x398;
  FUN_10064e264(pcVar2);
  pcVar3 = param_1 + 0x450;
  thunk_FUN_100652c08();
  pcVar4 = param_1 + 0x540;
  FUN_1006533a4();
  pcVar5 = param_1 + 0x640;
  thunk_FUN_100650e64(pcVar5);
  pcVar6 = param_1 + 0x770;
  FUN_10064e264(pcVar6);
  pcVar7 = param_1 + 0x828;
  thunk_FUN_1001cd1dc(pcVar7);
  pcVar8 = param_1 + 0x980;
  thunk_FUN_100652c08(pcVar8);
  *(long *)(param_1 + 0xa70) = 0;
  thunk_FUN_1006543ec(param_1 + 0xa78);
  pcVar9 = param_1 + 0xc18;
  FUN_1006421a8(pcVar9);
  *(undefined ***)(param_1 + 0xc18) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  thunk_FUN_1001c43fc();
  FUN_10014237c(param_1 + 0x1178);
  pcVar10 = param_1 + 0x1238;
  *(long *)(param_1 + 0x1220) = 0;
  *(long *)(param_1 + 0x1218) = 0;
  *(long *)(param_1 + 0x1230) = 0;
  *(long *)(param_1 + 0x1228) = 0;
  thunk_FUN_100183990(pcVar10,0);
  thunk_FUN_1001ceb64(param_1 + 0x1828,0);
  thunk_FUN_1001cd434(param_1 + 0x1910);
  *(undefined8 *)(param_1 + 0x19d6) = 0;
  *(long *)(param_1 + 0x19d0) = 0;
  *(long *)(param_1 + 0x19c8) = 0;
  *(long *)(param_1 + 0x19c0) = 0;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,puVar12,1);
  FUN_10064f31c(puVar12,pcVar1,1);
  FUN_10064f31c(puVar12,pcVar2,1);
  FUN_100642bd8(pcVar2,pcVar3,1);
  FUN_100642bd8(pcVar2,pcVar4,1);
  FUN_10064f31c(puVar12,pcVar5,1);
  FUN_10064f31c(puVar12,pcVar10,1);
  FUN_10064f31c(puVar12,pcVar6,1);
  FUN_100642bd8(pcVar6,pcVar7,1);
  FUN_100642bd8(pcVar6,pcVar8,1);
  FUN_10064f31c(puVar12,pcVar9,1);
  FUN_100642bd8(pcVar9,param_1 + 0xca0,1);
  FUN_100642bd8(pcVar9,param_1 + 0xd90,1);
  FUN_100652ca4(pcVar1,"build://Boosts.png");
  FUN_10065403c(pcVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_100652dfc(pcVar1,0xb);
  FUN_100652cac(pcVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_deserter_icon_backdrop");
  uVar11 = *(uint *)(param_1 + 0x4d4);
  if ((uVar11 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x4d4) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x6600;
    FUN_1000200a0(pcVar3);
  }
  FUN_100652cac(pcVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_fill");
  FUN_100652dd4(pcVar4,&DAT_10115a164,2);
  FUN_100653464(pcVar4,FUN_10028e434,param_1);
  uVar11 = *(uint *)(param_1 + 0x5c4);
  if ((uVar11 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x5c4) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5900;
    FUN_1000200a0(pcVar4);
  }
  FUN_100651594(pcVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_100651594(pcVar7,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar13 = FUN_1004e0150("MENU_MARKET_DAILY_CHEST_TIMER",0);
  FUN_1001cd23c(pcVar7,uVar13,1,0);
  FUN_100652cac(pcVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_timer");
  FUN_100652cac(param_1 + 0xca0,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)(param_1 + 0xd24) = *(uint *)(param_1 + 0xd24) & 0xfffffffb;
  FUN_100652cdc(param_1 + 0x1708,"circle_button_question");
  uVar11 = *(uint *)(param_1 + 0x12bc);
  if ((uVar11 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x12bc) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5f80;
    FUN_1000200a0(pcVar10);
  }
  if ((*(float *)(param_1 + 0x1280) != 1.0) || (*(float *)(param_1 + 0x1284) != 1.0)) {
    lVar14 = NEON_fmov(0x3f800000,4);
    *(long *)(param_1 + 0x1280) = lVar14;
    FUN_1000200a0(pcVar10);
  }
  FUN_1001b495c(0xbf800000,pcVar10);
  *(uint *)(param_1 + 0x12bc) = *(uint *)(param_1 + 0x12bc) | 4;
  local_68 = DAT_101d91884;
  local_90 = FUN_10028e4a4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  pcStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1240,&local_90);
  FUN_1001b4964(pcVar10,1);
  *(code **)(param_1 + 0x1940) = pcVar10;
  *(long *)(param_1 + 0x1990) = 0x41a00000;
  *(undefined2 *)(param_1 + 0x19bc) = 0x101;
  *(undefined8 *)(param_1 + 0x19b4) = 0x300000000;
  *(long *)(param_1 + 0x19a0) = 0x447a00003d4ccccd;
  pcStack_88 = thunk_FUN_10028e8b4;
  local_90 = param_1;
  FUN_100643618(0x3f800000,&local_90,0,1);
  (**(code **)(*(long *)param_1 + 0x138))(param_1);
  return param_1;
}




void FUN_10028e434(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1006575c4(param_3,"circle_button_fill");
  FUN_1000f3e38(*param_2,param_2[1],*(undefined4 *)(param_5 + 0x19c0),0,0,param_1,param_2,uVar1,
                param_3,param_4);
  return;
}




void FUN_10028e4a4(long param_1)

{
  FUN_1001cefb8(param_1 + 0x1828,param_1 + 0x1218,param_1 + 0x1910);
  return;
}




void FUN_10028e4c4(undefined8 *param_1)

{
  undefined8 *local_50;
  code *pcStack_48;
  
  *param_1 = &PTR_thunk_FUN_10028e4c4_10147f5a0;
  if ((long *)param_1[0x14e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14e] + 8))();
  }
  param_1[0x14e] = 0;
  pcStack_48 = thunk_FUN_10028e8b4;
  local_50 = param_1;
  FUN_100643a8c(&local_50);
  param_1[0x322] = &PTR_FUN_1014666e0;
  if (*(char *)((long)param_1 + 0x1987) < '\0') {
    operator_delete((void *)param_1[0x32e]);
  }
  if ((void *)param_1[0x32d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x32d]);
    param_1[0x32d] = 0;
    param_1[0x32c] = 0;
  }
  FUN_10003c1ec(param_1 + 0x323,1);
  thunk_FUN_1001cec4c(param_1 + 0x305);
  param_1[0x247] = &PTR_FUN_10145f300;
  param_1[0x2e1] = &PTR_FUN_1014a7108;
  param_1[0x2f8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2fb);
  FUN_10064e2bc(param_1 + 0x2e1);
  param_1[0x2c3] = &PTR_FUN_1014a7108;
  param_1[0x2da] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2dd);
  FUN_10064e2bc(param_1 + 0x2c3);
  param_1[0x2a5] = &PTR_FUN_1014a7108;
  param_1[700] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2bf);
  FUN_10064e2bc(param_1 + 0x2a5);
  FUN_10064221c(param_1 + 0x294);
  FUN_10003bec8(param_1 + 0x247);
  if (*(char *)((long)param_1 + 0x122f) < '\0') {
    operator_delete((void *)param_1[0x243]);
  }
  param_1[0x22f] = &PTR_FUN_10145ac30;
  if ((void *)param_1[0x241] != (void *)0x0) {
    operator_delete__((void *)param_1[0x241]);
    param_1[0x241] = 0;
    param_1[0x240] = 0;
  }
  if ((void *)param_1[0x23f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f]);
    param_1[0x23f] = 0;
    param_1[0x23e] = 0;
  }
  if (*(char *)((long)param_1 + 0x11ef) < '\0') {
    operator_delete((void *)param_1[0x23b]);
  }
  if (*(char *)((long)param_1 + 0x11a7) < '\0') {
    operator_delete((void *)param_1[0x232]);
  }
  FUN_1001423e4(param_1 + 0x230,1);
  param_1[0x1b2] = &PTR_FUN_10145ea78;
  param_1[0x210] = &PTR_FUN_1014a7108;
  param_1[0x227] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x22a);
  FUN_10064e2bc(param_1 + 0x210);
  param_1[0x1f2] = &PTR_FUN_1014a7108;
  param_1[0x209] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20c);
  FUN_10064e2bc(param_1 + 0x1f2);
  FUN_10064221c(param_1 + 0x1e1);
  param_1[0x1c3] = &PTR_FUN_1014a7108;
  param_1[0x1da] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1dd);
  FUN_10064e2bc(param_1 + 0x1c3);
  FUN_10064221c(param_1 + 0x1b2);
  param_1[0x194] = &PTR_FUN_1014a7108;
  param_1[0x1ab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1ae);
  FUN_10064e2bc(param_1 + 0x194);
  FUN_10064221c(param_1 + 0x183);
  FUN_10064e2bc(param_1 + 0x14f);
  param_1[0x130] = &PTR_FUN_1014a7108;
  param_1[0x147] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x14a);
  FUN_10064e2bc(param_1 + 0x130);
  param_1[0x105] = &PTR_FUN_10145eb78;
  param_1[0x11c] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x12d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12d]);
    param_1[0x12d] = 0;
    param_1[300] = 0;
  }
  FUN_100651068(param_1 + 0x105);
  thunk_FUN_10064e2bc(param_1 + 0xee);
  thunk_FUN_100651068(param_1 + 200);
  param_1[0xa8] = &PTR_FUN_1014a7108;
  param_1[0xbf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc2);
  FUN_10064e2bc(param_1 + 0xa8);
  param_1[0x8a] = &PTR_FUN_1014a7108;
  param_1[0xa1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa4);
  FUN_10064e2bc(param_1 + 0x8a);
  thunk_FUN_10064e2bc(param_1 + 0x73);
  param_1[0x52] = &PTR_FUN_1014a77a8;
  param_1[0x69] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x70);
  param_1[0x52] = &PTR_FUN_1014a7108;
  param_1[0x69] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6c);
  FUN_10064e2bc(param_1 + 0x52);
  param_1[0x29] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x40);
  FUN_10064e2bc(param_1 + 0x29);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10028e4c4(void)

{
  FUN_10028e4c4();
  return;
}




void FUN_10028e8a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10028e4c4();
  operator_delete(pvVar1);
  return;
}




void FUN_10028e8b4(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  long local_28;
  
  fVar3 = *(float *)((long)param_2 + 0x19c4);
  if (fVar3 <= 0.0) {
    if ((int)param_2[0x33b] < 1) {
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) & 0xfffffffb;
      *(uint *)((long)param_2 + 0x5c4) =
           *(uint *)((long)param_2 + 0x5c4) & 0xfffffff8 |
           *(uint *)((long)param_2 + 0x5c4) & 3 | (uint)(fVar3 != -1.0) << 2;
    }
    else {
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) | 4;
    }
  }
  else {
    fVar3 = fVar3 - param_1;
    *(float *)((long)param_2 + 0x19c4) = fVar3;
    fVar2 = (float)NEON_fminnm(1.0 - fVar3 / (float)param_2[0x339],0x3f800000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_2 + 0x338) = fVar2;
    *(uint *)((long)param_2 + 0x5c4) =
         *(uint *)((long)param_2 + 0x5c4) & 0xfffffff8 |
         *(uint *)((long)param_2 + 0x5c4) & 3 | (uint)(0.025 < fVar2) << 2;
    if (fVar3 <= 0.0) {
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) & 0xfffffffb;
    }
    else {
      local_28 = (long)fVar3;
      FUN_1001cd374(param_2 + 0x105,&local_28);
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) | 4;
      fVar3 = *(float *)((long)param_2 + 0x19c4);
    }
    if (fVar3 <= 0.0) {
      *(undefined1 *)((long)param_2 + 0x19dc) = 0;
      (**(code **)(*param_2 + 0x138))(param_2);
      fVar3 = *(float *)((long)param_2 + 0x19c4);
    }
  }
  if ((0.01 < fVar3) || ((fVar3 == -1.0 && (param_2[0x33a] != 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = 0 < (int)param_2[0x33b];
  }
  *(bool *)((long)param_2 + 0x19dc) = bVar1;
  return;
}




void FUN_10028ea0c(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x246) = param_1;
  *(undefined4 *)((long)param_3 + 0x1234) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010028ea1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




void FUN_10028ea20(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_78;
  float fStack_74;
  
  iVar5 = *(int *)(param_1 + 0x1210);
  if (iVar5 == 0) {
    if ((0.01 <= *(float *)(param_1 + 0x19c4)) || (0 < *(int *)(param_1 + 0x19d8)))
    goto LAB_10028eaac;
  }
  else if ((iVar5 != 3) &&
          ((iVar5 != 1 ||
           ((*(float *)(param_1 + 0x19c4) < 0.01 && (*(int *)(param_1 + 0x19d8) < 1)))))) {
LAB_10028eaac:
    *(undefined1 *)(param_1 + 0x19dd) = 0;
    goto LAB_10028eb04;
  }
  *(undefined1 *)(param_1 + 0x19dd) = 1;
  if (*(long **)(param_1 + 0xa70) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa70) + 8))();
  }
  *(undefined8 *)(param_1 + 0xa70) = 0;
  pvVar7 = operator_new(0x24e8);
  uVar8 = thunk_FUN_1001b6878(pvVar7,param_1 + 0x1178);
  *(undefined8 *)(param_1 + 0xa70) = uVar8;
  FUN_10064f31c(param_1 + 0x148,pvVar7,1);
LAB_10028eb04:
  FUN_10064e48c(param_1,param_1 + 0x1230);
  FUN_10064e48c(param_1 + 0x148,param_1 + 0x1230);
  lVar9 = param_1 + 0x290;
  fVar11 = *(float *)(param_1 + 0x1230) * 0.8;
  FUN_10064e47c(lVar9);
  local_78 = FUN_100652e60(lVar9);
  fStack_74 = fVar11;
  FUN_10064e48c(param_1 + 0x450,&local_78);
  lVar1 = param_1 + 0x540;
  fVar12 = (float)FUN_100652e60(lVar9);
  fVar11 = (float)FUN_100652e60(lVar1);
  fVar12 = fVar12 / fVar11;
  bVar6 = false;
  if ((*(float *)(param_1 + 0x588) == fVar12) &&
     (bVar6 = false, !NAN(*(float *)(param_1 + 0x58c)) && !NAN(fVar12))) {
    bVar6 = *(float *)(param_1 + 0x58c) == fVar12;
  }
  if (!bVar6) {
    *(float *)(param_1 + 0x588) = fVar12;
    *(float *)(param_1 + 0x58c) = fVar12;
    FUN_1000200a0(lVar1);
  }
  *(undefined4 *)(param_1 + 0x19a4) = *(undefined4 *)(param_1 + 0x1230);
  lVar10 = param_1 + 0x640;
  FUN_10065179c(*(undefined4 *)(param_1 + 0x1230),0,0x3f800000,lVar10);
  lVar2 = param_1 + 0x980;
  FUN_10064e47c(0x42480000,0x42480000,lVar2);
  lVar3 = param_1 + 0x828;
  fVar12 = *(float *)(param_1 + 0x1230);
  fVar11 = (float)FUN_100652e60(lVar2);
  FUN_10065179c((fVar12 + -20.0) - (fVar11 + fVar11),0,0x3f800000,lVar3);
  uVar14 = *(undefined4 *)(param_1 + 0x1234);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x1230),param_1 + 0xca0);
  uVar13 = FUN_10065317c(lVar1);
  *(undefined4 *)(param_1 + 0x1170) = uVar13;
  lVar4 = param_1 + 0x770;
  *(uint *)(param_1 + 0x7f4) =
       *(uint *)(param_1 + 0x7f4) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x19dc) << 2;
  local_78 = FUN_1006425d0(lVar4,0,0,1,1);
  fStack_74 = (float)uVar14;
  FUN_10064e48c(lVar4,&local_78);
  FUN_10064e5ec(0,0x41a00000,lVar9,4,param_1 + 0x148,4);
  FUN_10064e5ec(0,0,param_1 + 0x450,8,lVar9,8);
  FUN_10064e5ec(0,0,lVar1,8,lVar9,8);
  FUN_10064e72c(0,lVar10,0,lVar9,2);
  FUN_10064e72c(0,lVar10,4,lVar9,4);
  FUN_10064e5ec(0,0,param_1 + 0x1238,1,lVar9,1);
  lVar9 = *(long *)(param_1 + 0xa70);
  if (lVar9 != 0) {
    FUN_10064e72c(0x41200000,lVar9,0,lVar10,2);
    FUN_10064e72c(0,lVar9,4,lVar10,4);
    lVar10 = *(long *)(param_1 + 0xa70);
  }
  FUN_10064e72c(0,lVar4,0,lVar10,2);
  FUN_10064e72c(0x41200000,lVar4,4,lVar10,4);
  FUN_10064e72c(0xc1200000,lVar2,1,lVar3,3);
  FUN_10064e72c(0,lVar2,5,lVar3,5);
  FUN_10064e5ec(0,0,param_1 + 0xd90,8,lVar1,8);
  if (*(byte *)(param_1 + 0x19dc) == 0) {
    *(undefined4 *)(param_1 + 0x19c0) = 0x3f800000;
    *(uint *)(param_1 + 0x5c4) = *(uint *)(param_1 + 0x5c4) | 4;
  }
  return;
}




void FUN_10028ee00(uint *param_1,uint param_2)

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




void thunk_FUN_10028e8b4(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  long lStack_28;
  
  fVar3 = *(float *)((long)param_2 + 0x19c4);
  if (fVar3 <= 0.0) {
    if ((int)param_2[0x33b] < 1) {
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) & 0xfffffffb;
      *(uint *)((long)param_2 + 0x5c4) =
           *(uint *)((long)param_2 + 0x5c4) & 0xfffffff8 |
           *(uint *)((long)param_2 + 0x5c4) & 3 | (uint)(fVar3 != -1.0) << 2;
    }
    else {
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) | 4;
    }
  }
  else {
    fVar3 = fVar3 - param_1;
    *(float *)((long)param_2 + 0x19c4) = fVar3;
    fVar2 = (float)NEON_fminnm(1.0 - fVar3 / (float)param_2[0x339],0x3f800000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_2 + 0x338) = fVar2;
    *(uint *)((long)param_2 + 0x5c4) =
         *(uint *)((long)param_2 + 0x5c4) & 0xfffffff8 |
         *(uint *)((long)param_2 + 0x5c4) & 3 | (uint)(0.025 < fVar2) << 2;
    if (fVar3 <= 0.0) {
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) & 0xfffffffb;
    }
    else {
      lStack_28 = (long)fVar3;
      FUN_1001cd374(param_2 + 0x105,&lStack_28);
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) | 4;
      fVar3 = *(float *)((long)param_2 + 0x19c4);
    }
    if (fVar3 <= 0.0) {
      *(undefined1 *)((long)param_2 + 0x19dc) = 0;
      (**(code **)(*param_2 + 0x138))(param_2);
      fVar3 = *(float *)((long)param_2 + 0x19c4);
    }
  }
  if ((0.01 < fVar3) || ((fVar3 == -1.0 && (param_2[0x33a] != 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = 0 < (int)param_2[0x33b];
  }
  *(bool *)((long)param_2 + 0x19dc) = bVar1;
  return;
}




void FUN_10028ee80(void)

{
  DAT_101e43f68 = 0xff;
  DAT_101e43f6a = 0xffff;
  DAT_101e43f6c = 0xffff;
  DAT_101e43f6e = 0xffbc9c44;
  DAT_101e43f72 = 0xff1166f2;
  DAT_101e43f76 = 0xffe0e0e0;
  DAT_101e43f7a = 0xffa0a0a0;
  DAT_101e43f7e = 0xff8c8c8c;
  DAT_101e43f82 = 0xff322213;
  DAT_101e43f86 = 0xff091911;
  DAT_101e43f8a = 0xff170c19;
  DAT_101e43f8e = 0xff241a14;
  DAT_101e43f92 = 0xff14171c;
  DAT_101e43f96 = 0xff221911;
  DAT_101e43f9a = 0xff1a1416;
  DAT_101e43f9e = 0xff121414;
  DAT_101e43fa2 = 0xff1a1809;
  DAT_101e43fa6 = 0xff141414;
  DAT_101e43faa = 0xff141414;
  DAT_101e43fae = 0xff2929c0;
  DAT_101e43fb2 = 0xff283082;
  DAT_101e43fb6 = 0xff5262cc;
  DAT_101e43fba = 0xff283082;
  DAT_101e43fbe = 0xff5262cc;
  DAT_101e43fc2 = 0xff745c42;
  DAT_101e43fc6 = 0xff184155;
  DAT_101e43fca = 0xff92665e;
  DAT_101e43fce = 0xffbc9c44;
  DAT_101e43fd2 = 0xffbbae56;
  DAT_101e43fd6 = 0xff8b7b01;
  DAT_101e43fda = 0xff90b3ef;
  DAT_101e43fde = 0xff728ebe;
  DAT_101e43fe2 = 0xff19459d;
  DAT_101e43fe6 = 0xff9d877b;
  DAT_101e43fea = 0xffcbb1a3;
  DAT_101e43fee = 0xff3f6fb5;
  DAT_101e43ff2 = 0xffc5c5c5;
  DAT_101e43ff6 = 0xff4fc1f1;
  DAT_101e43ffa = 0xff606060;
  DAT_101e43ffe = 0xffc5ff7b;
  DAT_101e44002 = 0xff5271eb;
  DAT_101e44006 = 0xfffae076;
  DAT_101e4400a = 0xff3ac8f6;
  DAT_101e4400e = 0xffaaaaaa;
  DAT_101e44012 = 0xffe19400;
  DAT_101e44016 = 0xffe19400;
  DAT_101e4401a = 0xffe550b2;
  DAT_101e4401e = 0xfff22ae8;
  DAT_101e44022 = 0xff005ae1;
  DAT_101e44026 = 0xff1addfa;
  DAT_101e4402a = 0xff2424b3;
  DAT_101e4402e = 0xff2424b3;
  DAT_101e44032 = 0xff646464;
  DAT_101e44036 = 0xff92665e;
  DAT_101e4403a = 0xff646037;
  DAT_101e44044 = 0xff1111a1;
  DAT_101e4404c = 0xffc8c8c8;
  DAT_101e44048 = 0xff321ee1;
  DAT_101e44050 = 0xff321ee1;
  DAT_101e4405c = 0xff6259b3;
  DAT_101e44060 = 0xff506e73;
  DAT_101e44040 = 0xffffffff;
  DAT_101e44064 = 0xff9dbf86;
  DAT_101e44054 = 0xff7fe801;
  DAT_101e44068 = 0xffa35244;
  DAT_101e44058 = 0xffffffff;
  DAT_101e4406c = 0xffca828e;
  DAT_101e44070 = 0xffa6a6a6;
  DAT_101e44074 = 0xffa6a6a6;
  DAT_101e44078 = 0xffffffff;
  DAT_101e4407c = 0xff88ea2f;
  DAT_101e44080 = 0xff8c8c8c;
  DAT_101e44084 = 0xffffb400;
  DAT_101e44088 = 0xffff00ff;
  DAT_101e4408c = 0xff00aded;
  DAT_101e44090 = 0xff33d3ff;
  DAT_101e44094 = 0xff7fe801;
  DAT_101e44098 = 0xff282828;
  DAT_101e4409c = 0xfff0f0f0;
  DAT_101e440a0 = 0xffa4781e;
  DAT_101e440a4 = 0xffa6654b;
  DAT_101e440a8 = 0xff93435b;
  DAT_101e440ac = 0xff387f9c;
  DAT_101e440b0 = 0xffa3781e;
  DAT_101e440b4 = 0xffffd18a;
  DAT_101e440b8 = 0xffff61f7;
  DAT_101e440bc = 0xff5de1f2;
  DAT_101e440c0 = 0xff80eaff;
  DAT_101e440c4 = 0xff32e00e;
  DAT_101e440c8 = 0xff5a3c10;
  DAT_101e440cc = 0xff330b03;
  DAT_101e440d0 = 0xff33031d;
  DAT_101e440d4 = 0xff032433;
  DAT_101e440d8 = 0xff9e8e8d;
  DAT_101e440e0 = 0x4326000041900000;
  DAT_101e440e8 = 0x4326000041c00000;
  FUN_10001549c(&DAT_101e440f0,"MENU_BOOSTS_");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e440f0,0x100000000);
  FUN_10001549c(&DAT_101e44108,"_TOOLTIP");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e44108,0x100000000);
  return;
}




long * FUN_10028f5d0(long *param_1)

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
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  void *pvVar16;
  long lVar17;
  uint uVar18;
  code *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  puVar14 = puVar13 + 0x18;
  *puVar13 = &PTR_thunk_FUN_10028fccc_10147f6f0;
  FUN_1006505b8();
  plVar1 = param_1 + 0x33;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x4e;
  FUN_1006421a8(plVar2);
  param_1[0x4e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x5f;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_1 + 0x93;
  thunk_FUN_1005357f4(plVar4);
  plVar5 = param_1 + 0x1d8;
  FUN_100290884();
  plVar6 = param_1 + 0x50f;
  thunk_FUN_100181304(plVar6,0);
  plVar7 = param_1 + 0x7c6;
  FUN_1006421a8(plVar7);
  param_1[0x7c6] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x7d7;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x7fd;
  FUN_1006421a8(plVar9);
  param_1[0x7fd] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x80e;
  thunk_FUN_100650e64(plVar10);
  param_1[0x835] = 0;
  param_1[0x834] = 0;
  *(undefined4 *)(param_1 + 0x838) = 0x41700000;
  *(undefined8 *)((long)param_1 + 0x41cc) = 0;
  *(undefined8 *)((long)param_1 + 0x41c4) = 0;
  param_1[0x837] = 0;
  *(undefined4 *)((long)param_1 + 0x41d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar14,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar2,plVar9,1);
  FUN_100642bd8(plVar9,plVar10,1);
  local_68 = DAT_101dbd458;
  local_90 = FUN_10028fbd8;
  plVar2 = param_1 + 0x60;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  local_68 = DAT_101dbd484;
  local_90 = FUN_10028fbd8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  uVar11 = DAT_101dbd460;
  local_68 = DAT_101dbd460;
  local_90 = FUN_10028fbd8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  uVar12 = DAT_101dbd48c;
  local_68 = DAT_101dbd48c;
  local_90 = FUN_10028fbd8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  FUN_100650608(puVar14,&DAT_10115a164);
  uVar18 = *(uint *)((long)param_1 + 0x144);
  if ((uVar18 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x144) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x6600;
    FUN_1000200a0(puVar14);
    uVar18 = *(uint *)((long)param_1 + 0x144);
  }
  *(uint *)((long)param_1 + 0x144) = uVar18 | 0x10;
  local_68 = uVar11;
  local_90 = FUN_10028fc20;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x19,&local_90);
  local_68 = uVar12;
  local_90 = FUN_10028fc20;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x19,&local_90);
  FUN_100650608(plVar1,&DAT_10115a164);
  FUN_100654488(plVar3,1);
  local_90 = (code *)CONCAT71(local_90._1_7_,9);
  FUN_100534ebc(plVar4,&local_90);
  uVar15 = FUN_1004e0150("MENU_INTERSTITIAL_GENERIC_CLOSE",0);
  FUN_1001816d4(0,0x43480000,0x43480000,plVar6,0,uVar15,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x5f2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100181be0(0xcd,plVar6,&DAT_10115a164);
  uVar11 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = FUN_10028fc20;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x510,&local_90);
  FUN_1001b495c(0,plVar6);
  FUN_100181c68(0,plVar6);
  *(uint *)((long)param_1 + 0x3eb4) = *(uint *)((long)param_1 + 0x3eb4) & 0xfffffffb;
  uVar15 = FUN_1004e0150("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_1006513c0(plVar8,uVar15);
  *(uint *)((long)param_1 + 0x406c) = *(uint *)((long)param_1 + 0x406c) & 0xfffffffb;
  uVar15 = FUN_1004e0150("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_1006513c0(plVar10,uVar15);
  uVar15 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(plVar5,uVar15,0);
  local_68 = DAT_101dbd4ac;
  local_90 = thunk_FUN_10028ff08;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x1d9,&local_90);
  local_68 = DAT_101dbd4b0;
  local_90 = thunk_FUN_10029009c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x1d9,&local_90);
  FUN_1001afc3c(plVar5,1);
  FUN_1001afd98(plVar5,&DAT_101d91650,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0x101);
  local_68 = uVar11;
  local_90 = FUN_10028fc70;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x259,&local_90);
  *(undefined1 *)((long)param_1 + 0x2872) = 0;
  uVar15 = FUN_1004e0150("MENU_DRAFT_LOBBY_CHAT_NODE_MESSAGE",0);
  thunk_FUN_1004e439c(&local_90,uVar15);
  pvVar16 = operator_new(0x318);
  lVar17 = FUN_100290ac0(pvVar16,&DAT_101d91650,&local_90,0,0,1);
  param_1[0x836] = lVar17;
  FUN_100534ad8(plVar4,pvVar16,1);
  if (local_88 != (long *)0x0) {
    operator_delete__(local_88);
  }
  return param_1;
}




void FUN_10028fbd8(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d237e0,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10028fc20(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d237e4,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void thunk_FUN_10028ff08(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_100655b6c(param_1 + 0xec0 + ((ulong)*(byte *)(param_1 + 0x1230) & 1) * 0x130 + 0x1e0);
  (**(code **)*puVar2)(puVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(param_1 + 0xec0,uVar1,0);
  *(undefined1 *)(param_1 + 0x41d8) = 0;
  FUN_10028ff90(param_1);
  return;
}




void FUN_10028fc70(undefined8 param_1)

{
  code *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  if (DAT_101d23788 != 0) {
    local_18 = DAT_101d237e8;
    local_40 = FUN_100290140;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = 0;
    uStack_38 = param_1;
    FUN_10001554c(DAT_101d23788 + 8,&local_40);
  }
  return;
}




long * thunk_FUN_10028f5d0(long *param_1)

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
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  void *pvVar16;
  long lVar17;
  uint uVar18;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  puVar14 = puVar13 + 0x18;
  *puVar13 = &PTR_thunk_FUN_10028fccc_10147f6f0;
  FUN_1006505b8();
  plVar1 = param_1 + 0x33;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x4e;
  FUN_1006421a8(plVar2);
  param_1[0x4e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x5f;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_1 + 0x93;
  thunk_FUN_1005357f4(plVar4);
  plVar5 = param_1 + 0x1d8;
  FUN_100290884();
  plVar6 = param_1 + 0x50f;
  thunk_FUN_100181304(plVar6,0);
  plVar7 = param_1 + 0x7c6;
  FUN_1006421a8(plVar7);
  param_1[0x7c6] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x7d7;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x7fd;
  FUN_1006421a8(plVar9);
  param_1[0x7fd] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x80e;
  thunk_FUN_100650e64(plVar10);
  param_1[0x835] = 0;
  param_1[0x834] = 0;
  *(undefined4 *)(param_1 + 0x838) = 0x41700000;
  *(undefined8 *)((long)param_1 + 0x41cc) = 0;
  *(undefined8 *)((long)param_1 + 0x41c4) = 0;
  param_1[0x837] = 0;
  *(undefined4 *)((long)param_1 + 0x41d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar14,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar2,plVar9,1);
  FUN_100642bd8(plVar9,plVar10,1);
  uStack_68 = DAT_101dbd458;
  pcStack_90 = FUN_10028fbd8;
  plVar2 = param_1 + 0x60;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uStack_68 = DAT_101dbd484;
  pcStack_90 = FUN_10028fbd8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uVar11 = DAT_101dbd460;
  uStack_68 = DAT_101dbd460;
  pcStack_90 = FUN_10028fbd8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uVar12 = DAT_101dbd48c;
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = FUN_10028fbd8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  FUN_100650608(puVar14,&DAT_10115a164);
  uVar18 = *(uint *)((long)param_1 + 0x144);
  if ((uVar18 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x144) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x6600;
    FUN_1000200a0(puVar14);
    uVar18 = *(uint *)((long)param_1 + 0x144);
  }
  *(uint *)((long)param_1 + 0x144) = uVar18 | 0x10;
  uStack_68 = uVar11;
  pcStack_90 = FUN_10028fc20;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x19,&pcStack_90);
  uStack_68 = uVar12;
  pcStack_90 = FUN_10028fc20;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x19,&pcStack_90);
  FUN_100650608(plVar1,&DAT_10115a164);
  FUN_100654488(plVar3,1);
  pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,9);
  FUN_100534ebc(plVar4,&pcStack_90);
  uVar15 = FUN_1004e0150("MENU_INTERSTITIAL_GENERIC_CLOSE",0);
  FUN_1001816d4(0,0x43480000,0x43480000,plVar6,0,uVar15,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x5f2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100181be0(0xcd,plVar6,&DAT_10115a164);
  uVar11 = DAT_101d91884;
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_10028fc20;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x510,&pcStack_90);
  FUN_1001b495c(0,plVar6);
  FUN_100181c68(0,plVar6);
  *(uint *)((long)param_1 + 0x3eb4) = *(uint *)((long)param_1 + 0x3eb4) & 0xfffffffb;
  uVar15 = FUN_1004e0150("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_1006513c0(plVar8,uVar15);
  *(uint *)((long)param_1 + 0x406c) = *(uint *)((long)param_1 + 0x406c) & 0xfffffffb;
  uVar15 = FUN_1004e0150("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_1006513c0(plVar10,uVar15);
  uVar15 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(plVar5,uVar15,0);
  uStack_68 = DAT_101dbd4ac;
  pcStack_90 = thunk_FUN_10028ff08;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1d9,&pcStack_90);
  uStack_68 = DAT_101dbd4b0;
  pcStack_90 = thunk_FUN_10029009c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1d9,&pcStack_90);
  FUN_1001afc3c(plVar5,1);
  FUN_1001afd98(plVar5,&DAT_101d91650,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0x101);
  uStack_68 = uVar11;
  pcStack_90 = FUN_10028fc70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x259,&pcStack_90);
  *(undefined1 *)((long)param_1 + 0x2872) = 0;
  uVar15 = FUN_1004e0150("MENU_DRAFT_LOBBY_CHAT_NODE_MESSAGE",0);
  thunk_FUN_1004e439c(&pcStack_90,uVar15);
  pvVar16 = operator_new(0x318);
  lVar17 = FUN_100290ac0(pvVar16,&DAT_101d91650,&pcStack_90,0,0,1);
  param_1[0x836] = lVar17;
  FUN_100534ad8(plVar4,pvVar16,1);
  if (plStack_88 != (long *)0x0) {
    operator_delete__(plStack_88);
  }
  return param_1;
}




void FUN_10028fccc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10028fccc_10147f6f0;
  if ((void *)param_1[0x835] != (void *)0x0) {
    operator_delete__((void *)param_1[0x835]);
    param_1[0x835] = 0;
    param_1[0x834] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x80e);
  FUN_10064221c(param_1 + 0x7fd);
  thunk_FUN_100651068(param_1 + 0x7d7);
  FUN_10064221c(param_1 + 0x7c6);
  FUN_10003bd40(param_1 + 0x50f);
  param_1[0x1d8] = &PTR_FUN_10147f848;
  FUN_10003bd40(param_1 + 600);
  FUN_100186088(param_1 + 0x1d8);
  thunk_FUN_100534a3c(param_1 + 0x93);
  FUN_10064e2bc(param_1 + 0x5f);
  FUN_10064221c(param_1 + 0x4e);
  FUN_10064e2bc(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10028fd94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10147f848;
  FUN_10003bd40(param_1 + 0x80);
  FUN_100186088(param_1);
  return;
}




void thunk_FUN_10028fccc(void)

{
  FUN_10028fccc();
  return;
}




void FUN_10028fdcc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10028fccc();
  operator_delete(pvVar1);
  return;
}




void FUN_10028fde0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010028fde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_10028fdec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010028fdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_10028fdf8(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_10064e32c();
  fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  if ((0.0 < fVar1) && ((**(code **)(*param_3 + 0x48))(param_3), 0.0 < param_2)) {
    fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar2 = *(float *)(param_3 + 0x839) + *(float *)(param_3 + 0x83a);
    fVar1 = (fVar1 - (*(float *)(param_3 + 0x838) + *(float *)(param_3 + 0x838))) - fVar2;
    (**(code **)(*param_3 + 0x48))(param_3);
    *(float *)(param_3 + 0x837) = fVar1;
    *(float *)((long)param_3 + 0x41bc) =
         (fVar2 - (*(float *)((long)param_3 + 0x41c4) + *(float *)((long)param_3 + 0x41c4))) -
         (*(float *)((long)param_3 + 0x41cc) + *(float *)((long)param_3 + 0x41d4));
                    /* WARNING: Could not recover jumptable at 0x00010028fec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x140))(param_3);
    return;
  }
  return;
}




void FUN_10028fed4(long *param_1,int param_2,int param_3,int param_4,int param_5)

{
  *(float *)(param_1 + 0x839) = (float)param_2;
  *(float *)((long)param_1 + 0x41cc) = (float)param_3;
  *(float *)(param_1 + 0x83a) = (float)param_4;
  *(float *)((long)param_1 + 0x41d4) = (float)param_5;
                    /* WARNING: Could not recover jumptable at 0x00010028ff04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_10028ff08(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_100655b6c(param_1 + 0xec0 + ((ulong)*(byte *)(param_1 + 0x1230) & 1) * 0x130 + 0x1e0);
  (**(code **)*puVar2)(puVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(param_1 + 0xec0,uVar1,0);
  *(undefined1 *)(param_1 + 0x41d8) = 0;
  FUN_10028ff90(param_1);
  return;
}




void FUN_10028ff90(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = param_3 + 0x498;
  param_3 = param_3 + 0x2f8;
  uVar4 = FUN_10064e3cc(param_3);
  plVar2 = (long *)FUN_100534eb4(lVar1);
  (**(code **)(*plVar2 + 0x58))(plVar2,0,0,1,1);
  FUN_100534e6c(uVar4,lVar1);
  FUN_10064e3cc(param_3);
  fVar5 = param_2;
  plVar2 = (long *)FUN_100534eb4(lVar1);
  (**(code **)(*plVar2 + 0x58))(plVar2,0,0,1,1);
  if (param_2 < fVar5) {
    lVar3 = FUN_100534eb4(lVar1);
    FUN_10064e3cc(param_3);
    fVar6 = fVar5;
    plVar2 = (long *)FUN_100534eb4(lVar1);
    (**(code **)(*plVar2 + 0x58))(plVar2,0,0,1,1);
    if (*(float *)(lVar3 + 0x44) != fVar5 - fVar6) {
      *(float *)(lVar3 + 0x44) = fVar5 - fVar6;
      FUN_1000200a0(lVar3);
      return;
    }
  }
  return;
}

