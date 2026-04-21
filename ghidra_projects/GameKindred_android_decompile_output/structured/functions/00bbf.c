// functions/00bbf — 46 functions
#include "libGameKindred.h"




void FUN_00bbf034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb2e8;
  FUN_00bbca24(param_1 + 2);
  *param_1 = &PTR_FUN_027eb308;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbf08c(void *param_1)

{
  FUN_00bbf034();
  operator_delete(param_1);
  return;
}




void FUN_00bbf0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00bbc98c(param_1 + 0x10);
  FUN_00bfe7f8(*(undefined8 *)(param_1 + 0x18),1);
  FUN_00c02d18(*(undefined8 *)(param_1 + 8),param_3);
  return;
}




void FUN_00bbf0ec(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x84);
  *(uint *)(*(long *)(param_1 + 8) + 0x84) = uVar1 & 0xfffffff0 | uVar1 & 7 | (param_2 & 1) << 3;
  if ((param_2 & 1) != 0) {
    FUN_00bfe520();
    return;
  }
  FUN_00bfe684(*(undefined8 *)(param_1 + 0x18),1);
  return;
}




void FUN_00bbf114(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb308;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbf158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb308;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bbf19c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb368;
  pvVar1 = operator_new(0x518);
  FUN_00c061d4();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_027eb328;
  param_1[1] = pvVar1;
  param_1[3] = 0;
  return;
}




void FUN_00bbf1f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb328;
  if (param_1[3] != 0) {
    FUN_00a19bd4();
  }
  *param_1 = &PTR___cxa_pure_virtual_027eb368;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbf254(void *param_1)

{
  FUN_00bbf1f4();
  operator_delete(param_1);
  return;
}




void FUN_00bbf278(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bbf288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}




void FUN_00bbf290(float param_1,long param_2,uint param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float __x;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar5 = (float)*param_5 - (float)*param_4;
  fVar6 = (float)((ulong)*param_5 >> 0x20) - (float)((ulong)*param_4 >> 0x20);
  local_60 = CONCAT44(fVar6,fVar5);
  __x = fVar5 * fVar5 + fVar6 * fVar6;
  fVar4 = SQRT(__x);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(__x);
  }
  fVar3 = 0.0;
  if ((1.0 < fVar4) && ((param_3 & 1) != 0)) {
    fVar3 = SQRT(__x);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(__x);
    }
    local_60 = CONCAT44(fVar6 / fVar3,fVar5 / fVar3);
    fVar3 = fVar4 / param_1;
  }
  plVar2 = *(long **)(param_2 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(fVar3,plVar2,param_3 & 1,&local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbf378(long param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2 & 1);
    return;
  }
  return;
}




void FUN_00bbf394(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    return;
  }
  return;
}




void FUN_00bbf3ac(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = param_2 & 1;
  FUN_00c072b8(*(undefined8 *)(param_1 + 8));
  return;
}




undefined1 FUN_00bbf3c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}




void FUN_00bbf3c8(long param_1)

{
  FUN_00c06624(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bbf3e0(long param_1)

{
  FUN_00c0662c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bbf3f8(long param_1,uint param_2)

{
  FUN_00c072f8(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




void FUN_00bbf404(long param_1,uint param_2)

{
  FUN_00c07304(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




void FUN_00bbf410(long param_1,uint param_2)

{
  FUN_00c07310(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




void FUN_00bbf41c(long param_1,uint param_2)

{
  FUN_00c0731c(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




void FUN_00bbf428(long param_1,uint param_2)

{
  FUN_00c07328(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




void FUN_00bbf434(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x18) != param_2) {
    *(long *)(param_1 + 0x18) = param_2;
    FUN_00a19bb0(param_2,param_1);
    return;
  }
  return;
}




void FUN_00bbf458(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_00bbf460(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb368;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbf4a4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbbf4a8);
  (*pcVar1)();
}




void FUN_00bbf4a8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb3d0;
  pvVar1 = operator_new(0x668);
  FUN_00c07cc8();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027eb3a8;
  param_1[1] = pvVar1;
  return;
}

undefined DAT_01bc2526;
undefined DAT_01bc2547;
undefined DAT_01bc2550;
undefined DAT_01bc2557;
undefined *PTR_s_STORE_ITEM_ATTR_HEALTH_MAX_02809480;
undefined1 DAT_0313d350;
undefined1 DAT_0313d360;
undefined1 DAT_0313d370;
undefined4 DAT_0313d348;
undefined4 DAT_0313d358;
undefined4 DAT_0313d368;
undefined DAT_028095f0;
undefined1 DAT_0313d468;
undefined DAT_0313d610;
undefined1 DAT_0313d560;
undefined1 DAT_0313d628;
undefined1 DAT_0313d658;
undefined FUN_008b49cc;
undefined FUN_008b4a10;
undefined FUN_008b4a54;
undefined DAT_0313d378;
undefined DAT_0313d390;
undefined DAT_0313d3a8;
undefined DAT_0313d3c0;
undefined DAT_0313d3d8;
undefined DAT_0313d3f0;
undefined DAT_0313d408;
undefined DAT_0313d420;
undefined1 DAT_0313d438;
undefined DAT_0313d470;
undefined DAT_0313d488;
undefined DAT_0313d4a0;
undefined DAT_0313d4b8;
undefined DAT_0313d4d0;
undefined DAT_0313d4e8;
undefined DAT_0313d500;
undefined DAT_0313d518;
undefined1 DAT_0313d530;
undefined DAT_0313d568;
undefined DAT_0313d580;
undefined DAT_0313d598;
undefined DAT_0313d5b0;
undefined DAT_0313d5c8;
undefined DAT_0313d5e0;
undefined DAT_0313d5f8;
undefined DAT_01b95670;
undefined DAT_01bc4828;
undefined DAT_01bc482b;
undefined DAT_01bc482e;
undefined DAT_01bc4831;
undefined DAT_01e308a2;
undefined DAT_01e3d4cb;
undefined DAT_01bc4db0;
byte *DAT_03210728;
byte *DAT_03210740;
byte *DAT_03210758;
byte *DAT_03210770;
byte *DAT_03210788;
undefined DAT_01bb0646;
undefined DAT_01bc4b73;
undefined DAT_01bc4b74;
undefined DAT_01bc4d91;
undefined *PTR_s_SKILL_SUBTIER_BRONZE_02809610;
undefined *PTR_s_Shift_02809630;
float DAT_0313d950;
float DAT_0313d890;
char DAT_0313d980;
undefined1 DAT_0313d980;
byte DAT_0313d980;
undefined8 *DAT_0313d988;
undefined *PTR_FUN_028096a8;
undefined *PTR_FUN_028096e8;
long *DAT_0313d988;
undefined8 *DAT_0313d990;
void *DAT_0313d998;
pthread_mutex_t *DAT_0313d998;
undefined *PTR_FUN_02809680;
undefined *PTR_FUN_02809a80;
undefined *PTR_FUN_02809ab8;
undefined *PTR_FUN_02809be8;
undefined *PTR_FUN_02809d48;
undefined *PTR_FUN_02809e78;
undefined thunk_FUN_00b07af8;
undefined *PTR_FUN_02809fa8;
undefined *PTR_FUN_0280a0d8;
undefined *PTR_FUN_0280a230;
void *DAT_0313d9a0;
long DAT_0313d9a0;
undefined *PTR_FUN_0280a360;
undefined *PTR_FUN_0280a498;
undefined8 DAT_0313d9a0;
void *DAT_0313d9a8;
long DAT_0313d9a8;
undefined *PTR_FUN_0280a830;
undefined *PTR_FUN_0280a968;
undefined8 DAT_0313d9a8;
undefined *PTR_FUN_0280ad00;
undefined *PTR_FUN_0280ae30;
undefined thunk_FUN_00cbd080;
undefined thunk_FUN_00cbd0d8;
undefined thunk_FUN_00cbd130;
undefined thunk_FUN_00cbd188;
undefined *PTR_FUN_0280af60;
void *DAT_0313d9b0;
long DAT_0313d9b0;
undefined *PTR_FUN_0280b090;
undefined8 DAT_0313d9b0;
undefined thunk_FUN_00cbdb90;
undefined *PTR_FUN_0280b1c0;
undefined *PTR_FUN_0280b318;
undefined *PTR_FUN_0280b448;
undefined *PTR_FUN_0280b578;
undefined *PTR_FUN_0280b6a8;
undefined FUN_00cbe868;
undefined thunk_FUN_00cbe97c;
undefined *PTR_FUN_027ed768;
undefined *PTR_FUN_027ed7a0;
undefined thunk_FUN_00cbf96c;
void *DAT_0313d9b8;
long DAT_0313d9b8;
undefined *PTR_FUN_0280b7d8;
undefined8 DAT_0313d9b8;
undefined *PTR_FUN_0280b908;
undefined *PTR_FUN_0280ba38;
undefined FUN_00cbf498;
undefined FUN_00cbf90c;
undefined FUN_00cbff00;
undefined FUN_00cbff08;
undefined *PTR_FUN_0280bb68;
undefined *PTR_FUN_0280bca0;
undefined *PTR_FUN_0280c038;
undefined *PTR_FUN_0280c168;
undefined thunk_FUN_00cc0c14;
undefined thunk_FUN_00cc0db4;
undefined thunk_FUN_00cc0f34;
undefined FUN_00cc1368;
undefined thunk_FUN_00cc100c;
undefined *PTR_FUN_0280c298;
undefined *PTR_FUN_0280c3c8;
undefined *PTR_FUN_0280c500;
undefined *PTR_FUN_0280c630;
undefined FUN_00cc1e88;
undefined *PTR_FUN_0280c758;
undefined DAT_01bc51c4;
undefined *PTR_FUN_0280c888;
undefined DAT_01bc51ec;
undefined thunk_FUN_00cc2da4;
undefined thunk_FUN_00cc2e04;
undefined *PTR_FUN_0280c9b8;
undefined DAT_01bc5270;
undefined *PTR_FUN_0280cae8;
undefined FUN_00cc347c;
undefined FUN_00cc36f8;
undefined *PTR_s_build://ModalCommon.atlas_02be3658;
undefined FUN_00cc3878;
undefined FUN_00cc38a8;
undefined FUN_00cc3a58;
undefined FUN_00cc3a28;
undefined *PTR_FUN_0280cc18;
undefined DAT_01bc529c;
undefined FUN_00cc48c8;
undefined *PTR_FUN_0280cd48;
undefined *PTR_FUN_0280ce80;
undefined FUN_00cc48b0;
undefined thunk_FUN_00cc53e0;
undefined thunk_FUN_00cc54c0;
undefined *PTR_FUN_0280cea8;
undefined *PTR_FUN_0280cff0;
undefined *PTR_FUN_0280d120;
undefined *PTR_FUN_0280d250;
undefined *PTR_FUN_0280d380;
char DAT_0313dba0;
undefined DAT_0313db78;
long DAT_0313db80;
undefined DAT_0313db88;
long DAT_0313db90;
undefined FUN_00cc8608;
size_t DAT_0313dc18;
void *DAT_0313dc20;
double DAT_0313dc38;
long DAT_0313dc30;
undefined FUN_00ccb7a8;
undefined DAT_01bc5849;
undefined DAT_01bc58a9;
undefined FUN_00ccbf50;
undefined FUN_00ccc000;
undefined DAT_0313dbd8;
undefined DAT_0313dbd0;
long UNK_0313dbc0;
undefined DAT_01bc5c77;
undefined *PTR_FUN_0280d4d0;
undefined FUN_00cd1e6c;
undefined FUN_00cd1e78;
undefined *PTR_FUN_0280d9f0;
undefined *PTR_FUN_0280daf8;
byte DAT_0313ddc8;
undefined *DAT_0313ddd8;
byte DAT_0313ddf8;
undefined *DAT_0313de08;
undefined DAT_0313ddc9;
undefined DAT_0313ddf9;
undefined thunk_FUN_00cd4a48;
undefined thunk_FUN_00cd4e40;
undefined thunk_FUN_00cd4eb4;
undefined thunk_FUN_00cd4f94;
undefined8 *DAT_0313de10;
void *DAT_0313de18;
pthread_mutex_t *DAT_0313de18;
undefined *PTR_FUN_0280db20;
undefined *PTR_FUN_0280db50;
undefined *PTR_FUN_0280df00;
undefined *PTR_FUN_0280df30;
long DAT_0313dfe0;
void *DAT_0313dfe0;
long *DAT_0313dfe0;
undefined *PTR_FUN_0280df60;
undefined *PTR_FUN_0280df88;
undefined FUN_00cd8c6c;
undefined thunk_FUN_00cd9150;
undefined FUN_00cd8c78;
undefined thunk_FUN_00cd8f10;
undefined thunk_FUN_00cd8fd0;
undefined thunk_FUN_00cd9060;
undefined thunk_FUN_00cd90f0;
void *DAT_0313e340;
undefined8 *DAT_0313e358;
undefined8 *DAT_0313e350;
undefined8 *DAT_0313e348;
pointer PTR_FUN_0280e088;
pointer PTR_FUN_0280e0a8;
pointer PTR_FUN_0280e0c8;
undefined8 *DAT_0313e340;
undefined8 DAT_0313e348;
undefined8 DAT_0313e350;
undefined8 DAT_0313e358;
long DAT_0313e340;
undefined *PTR_FUN_0280e0e8;
undefined8 DAT_0313e340;
pointer PTR_FUN_0280e110;
undefined *PTR_FUN_0280e150;
undefined *PTR_FUN_0280e1a0;
undefined *PTR_FUN_0280e218;
undefined *PTR_FUN_0280e268;
undefined *PTR_FUN_0280e2b0;
undefined *PTR_FUN_0280e320;
undefined *PTR_FUN_0280e370;
undefined *PTR_FUN_0280e3c0;
undefined *PTR_FUN_0280e470;
undefined *PTR_FUN_0280e4d8;
undefined *PTR_FUN_0280e570;
undefined *PTR_FUN_0280e5b8;
undefined *PTR_FUN_0280e628;
undefined *PTR_FUN_0280e670;
undefined *PTR_FUN_0280e698;
undefined *PTR_FUN_0281ee20;
undefined *PTR_FUN_0281ee78;
undefined *PTR_FUN_0281eed0;
dword[6721] DWORD_ARRAY_0010423c;
pointer PTR_FUN_0280e130;
undefined FUN_00cdbbf4;
void *DAT_0313e360;
undefined8 DAT_0313e360;
undefined *PTR_FUN_0280e6c0;
undefined *PTR_FUN_0280ea68;
undefined thunk_FUN_00cdc4c0;
undefined8 *DAT_0313e398;
void *DAT_0313e3a0;
pthread_mutex_t *DAT_0313e3a0;
undefined *PTR_FUN_0280ea98;
undefined8 *DAT_0313e3a8;
undefined *PTR_FUN_0280eac8;
undefined *PTR_FUN_0280ee68;
long *DAT_0313e3a8;
long DAT_0313e3a8;
undefined8 *DAT_0313e540;
void *DAT_0313e548;
pthread_mutex_t *DAT_0313e548;
undefined *PTR_FUN_0280ee98;
undefined8 *DAT_0313e550;
undefined *PTR_FUN_0280eec8;
undefined *PTR_FUN_0280f268;
long *DAT_0313e550;
long DAT_0313e550;
undefined *PTR_FUN_02be9da8;
float DAT_0313e620;
float DAT_0313e560;
float DAT_0313e7b0;
undefined DAT_0313e6f0;
float DAT_0313e9c0;
float DAT_0313e900;
float DAT_0313e920;
float DAT_0313e860;
float DAT_0313e930;
undefined DAT_0313e870;
float DAT_0313e934;
float DAT_0313ec34;
undefined DAT_0313eb70;
void *DAT_0314b238;
undefined8 DAT_0314b238;
long *DAT_0314b238;
size_t DAT_0314b228;
void *DAT_0314b230;
long DAT_0314b238;
ulong DAT_02beaea8;
double DAT_02beaea8;
void *DAT_0314b288;
byte *DAT_0314b288;
long DAT_0314b288;
undefined DAT_02beaeb0;
undefined1 DAT_0314b2d8;
byte DAT_0314b2d8;
undefined1 DAT_0314b2dc;
byte DAT_0314b2dc;
undefined4 DAT_02beaec8;
undefined4 DAT_01bc8fc0;
undefined8 DAT_0314b308;
undefined4 *DAT_0314b308;
undefined DAT_0314b310;
undefined4 DAT_02beaecc;
undefined DAT_0314f340;
undefined DAT_0314b348;
int DAT_0314b330;
pointer PTR_FUN_0280f298;
undefined FUN_00ceb6d4;
undefined8 *DAT_0314f350;
undefined1 DAT_0314f358;
undefined DAT_0314f370;
undefined8 DAT_0314f378;
char DAT_0314f358;
long DAT_0314f350;
undefined8 DAT_0314f360;
undefined8 DAT_0314f368;
undefined4 DAT_0314f35c;
uint DAT_0314f35c;
undefined1 DAT_0314f370;
byte DAT_0314f358;
long *DAT_0314f350;
long DAT_0314f360;
int *DAT_0314f368;
undefined FUN_00cef074;
undefined DAT_01bc90fa;
undefined FUN_00cef69c;
undefined FUN_00cef6b0;
undefined FUN_00cfbf3c;
undefined FUN_00cef688;
undefined FUN_00cef6c4;
undefined FUN_00cef73c;
undefined FUN_00cefb0c;
undefined *PTR_FUN_0280f2b8;
undefined *PTR_s_*Item_SprintBoots*_02beb138;
undefined *PTR_s_*Item_TravelBoots*_02beb168;
undefined *PTR_s_*Item_JourneyBoots*_02beb0b8;
undefined *PTR_s_*Item_HalcyonChargers*_02beb0a8;
undefined *PTR_s_*Item_MinionCandy*_02beb0c8;
undefined FUN_00cefe9c;
undefined FUN_00cefee4;
undefined FUN_00cf0490;
undefined *PTR_s_*Item_ReflexBlock*_02beb0f8;
undefined *PTR_s_*Item_FountainOfRenewal*_02beb098;
undefined FUN_00cf08cc;
undefined *PTR_s_*Item_Crucible*_02beb060;
undefined *PTR_s_*Item_WeaponInfusion*_02beb180;
undefined *PTR_s_*Item_CrystalInfusion*_02beb068;
undefined *PTR_s_*Item_ScoutTrap*_02beb108;
float DAT_0314f570;
float DAT_0314f4b0;
undefined FUN_00cf0da4;
undefined FUN_00cf0e04;
undefined *PTR_s_*Item_WarTreads*_02beb170;
undefined FUN_00cf1328;
undefined *PTR_s_*Item_AtlasPauldron*_02beb018;
undefined *PTR_s_*Item_Shiversteel*_02beb118;
undefined FUN_00cf1704;
undefined FUN_00cf1824;
undefined *PTR_s_*Item_TeleportBoots*_02beb150;
undefined FUN_00cf1e44;
undefined FUN_00cf2018;
undefined FUN_00cf2118;
undefined FUN_00cf252c;
undefined *PTR_FUN_0280f2e0;
undefined *PTR_FUN_0280f308;
undefined *PTR_FUN_0280f368;
undefined *PTR_FUN_0280f3c8;
undefined *PTR_FUN_0280f428;
undefined *PTR_FUN_0280f488;
undefined *PTR_FUN_0280f4e8;
undefined *PTR_FUN_0280f548;
undefined *PTR_FUN_0280f5a8;
undefined *PTR_FUN_0280f608;
undefined *PTR_FUN_0280f668;
undefined *PTR_FUN_0280f6c8;
undefined *PTR_FUN_0280f728;
undefined *PTR_FUN_0280f788;
undefined *PTR_FUN_0280f7e8;
undefined *PTR_FUN_0280f848;
undefined *PTR_FUN_0280f8a8;
undefined *PTR_FUN_0280f908;
undefined *PTR_FUN_0280f968;
undefined *PTR_FUN_0280f9c8;
float DAT_0314f6b0;
undefined DAT_0314f5f0;
undefined *PTR_FUN_0281d898;
undefined *PTR_thunk_FUN_00cfc44c_0280fa28;
undefined *PTR_thunk_FUN_00cfc44c_0280fa88;
undefined *PTR_thunk_FUN_00cfc44c_0280fae8;
undefined *PTR_FUN_0280fb48;
undefined *PTR_FUN_0280fba8;
undefined *PTR_FUN_0280fc08;
float DAT_0314f5b0;
float DAT_0314f670;
undefined *PTR_FUN_0280fc68;
undefined *PTR_FUN_0280fcc8;
undefined *PTR_FUN_0280fd28;
undefined *PTR_FUN_0280fd88;
undefined *PTR_FUN_0280fde8;
undefined *PTR_FUN_0280fe48;
undefined *PTR_FUN_0280fea8;
undefined *PTR_FUN_0280ff08;
undefined *PTR_FUN_0280ff68;
undefined *PTR_FUN_0280ffc8;
undefined *PTR_FUN_02810028;
undefined *PTR_FUN_02810088;
int DAT_0314f724;
undefined *PTR_FUN_028100e8;
undefined *PTR_FUN_02810148;
undefined *PTR_FUN_028101a8;
undefined *PTR_FUN_02810208;
undefined *PTR_FUN_02810268;
undefined *PTR_FUN_028102c8;
undefined *PTR_FUN_02810328;
undefined *PTR_FUN_02810388;
undefined DAT_0314f590;
undefined *PTR_FUN_028103e8;
float DAT_0314f800;
undefined DAT_0314f740;
float DAT_0314f86c;
float DAT_0314f7ac;
float DAT_0314f82c;
float DAT_0314f76c;
undefined *PTR_FUN_02810bc8;
undefined *PTR_FUN_02810c28;
undefined *PTR_FUN_02810c88;
undefined *PTR_FUN_02810ce8;
undefined *PTR_FUN_02810da8;
undefined *PTR_FUN_02810e08;
undefined *PTR_FUN_02810ec8;
undefined *PTR_FUN_02810f00;
undefined *PTR_FUN_02810f38;
undefined *PTR_FUN_02810f70;
undefined *PTR_FUN_02810fa8;
undefined *PTR_FUN_02810fe0;
undefined *PTR_FUN_02811018;
undefined *PTR_FUN_02811050;
undefined *PTR_FUN_02811088;
undefined *PTR_FUN_028110c0;
undefined *PTR_FUN_028110f8;
undefined *PTR_FUN_02811130;
undefined *PTR_FUN_02811168;
undefined *PTR_FUN_028111a0;
undefined *PTR_FUN_028111d8;
undefined *PTR_FUN_02811210;
undefined *PTR_FUN_02811248;
undefined *PTR_FUN_02811280;
undefined8 DAT_03218f4c;
undefined *PTR_FUN_028112b8;
undefined *PTR_FUN_028112f0;
undefined *PTR_FUN_02811328;
undefined *PTR_FUN_02811360;
undefined *PTR_FUN_02811398;
float DAT_0314f8b0;
float DAT_0314f970;
undefined *PTR_FUN_028113d0;
undefined *PTR_FUN_02811408;
undefined *PTR_FUN_02811440;
undefined *PTR_FUN_02811478;
undefined *PTR_FUN_028114b0;
undefined *PTR_FUN_028114e8;
undefined *PTR_FUN_02811520;
undefined *PTR_FUN_02811558;
undefined *PTR_FUN_02811590;
float DAT_0314fb74;
float DAT_0314fab4;
float DAT_0314fba0;
float DAT_0314fae0;
undefined *PTR_FUN_028115c8;
undefined *PTR_FUN_02811600;
undefined *PTR_FUN_02811638;
undefined *PTR_FUN_02811670;
undefined *PTR_FUN_028116a8;
undefined *PTR_FUN_028116e0;
undefined *PTR_FUN_02811718;
undefined *PTR_FUN_02811750;
undefined *PTR_FUN_02811788;
undefined *PTR_FUN_028117c0;
undefined *PTR_FUN_028117f8;
undefined *PTR_FUN_02811830;
undefined *PTR_FUN_02811868;
undefined *PTR_FUN_028118a0;
undefined *PTR_FUN_028118d8;
undefined *PTR_FUN_02811910;
undefined *PTR_FUN_02811948;
undefined *PTR_FUN_02811980;
undefined *PTR_FUN_028119b8;
undefined *PTR_FUN_028119f0;
undefined *PTR_FUN_02811a28;
undefined *PTR_FUN_02811a60;
undefined *PTR_FUN_02811a98;
undefined *PTR_FUN_02811ad0;
undefined *PTR_FUN_02811b08;
undefined *PTR_FUN_02811b40;
undefined *PTR_FUN_02811b78;
undefined *PTR_FUN_02811bb0;
undefined *PTR_FUN_02811be8;
undefined *PTR_FUN_02811c20;
undefined *PTR_FUN_02811c58;
undefined *PTR_FUN_02811c90;
undefined DAT_01bc9940;
undefined *PTR_FUN_02811cc8;
undefined *PTR_FUN_02811d00;
undefined *PTR_FUN_02811d38;
undefined *PTR_FUN_02811d70;
undefined *PTR_FUN_02811da8;
undefined *PTR_FUN_02811de0;
undefined *PTR_FUN_02811e18;
undefined *PTR_FUN_02811e50;
undefined *PTR_FUN_02811e88;
pointer PTR_s_threat_neutral_02beafe0;
undefined FUN_00d07f5c;
undefined FUN_00d08298;
float DAT_0314ff80;
float DAT_0314fec0;
float DAT_0314fef0;
float DAT_0314fe30;
float DAT_0314fef4;
float DAT_0314fe34;
float DAT_0314fef8;
float DAT_0314fe38;
float DAT_0314fee0;
float DAT_0314fe20;
undefined *PTR_FUN_02811f50;
undefined *PTR_FUN_02811fd8;
float DAT_031500a0;
float DAT_0314ffe0;
undefined *PTR_FUN_02812060;
undefined *PTR_FUN_028120e8;
undefined *PTR_FUN_02812170;
undefined *PTR_FUN_028121f8;
float DAT_031500a8;
float DAT_0314ffe8;
undefined *PTR_FUN_02812280;
undefined *PTR_FUN_02812308;
float DAT_03150114;
float DAT_03150054;
float DAT_03150140;
float DAT_03150080;
int DAT_02e3ef88;
undefined1 DAT_0314ffa8;
undefined4 DAT_0314ffa0;
undefined *PTR_FUN_02812390;
undefined *PTR_FUN_02812418;
undefined *PTR_FUN_028124a0;
undefined *PTR_FUN_02812528;
undefined *PTR_FUN_028125b0;
undefined *PTR_FUN_02812638;
undefined *PTR_FUN_028126c0;
undefined *PTR_FUN_02812748;
undefined *PTR_FUN_028127d0;
undefined *PTR_FUN_02812858;
float DAT_031500e4;
float DAT_03150024;
undefined *PTR_FUN_028128e0;
undefined *PTR_FUN_02812968;
undefined *PTR_FUN_028129f0;
undefined *PTR_FUN_02812a78;
undefined *PTR_s___TREASURE_CHEST___028190c0;
undefined *PTR_FUN_02812b00;
undefined *PTR_FUN_02812b88;
undefined *PTR_FUN_02812c10;
undefined *PTR_FUN_02812c98;
float DAT_031500e0;
float DAT_03150020;
undefined *PTR_FUN_02812d20;
undefined *PTR_FUN_02812da8;
undefined DAT_02bebbe8;
undefined *PTR_FUN_02812e30;
undefined *PTR_FUN_02812eb8;
undefined *PTR_FUN_02812f40;
undefined *PTR_FUN_02812fc8;
undefined *PTR_FUN_02813050;
undefined1 DAT_0314ffb8;
undefined1 DAT_0314ffc8;
undefined4 DAT_0314ffb0;
undefined4 DAT_0314ffc0;
undefined *PTR_FUN_028130d8;
undefined *PTR_FUN_028131d8;
undefined *PTR_FUN_028132d8;
undefined *PTR_FUN_028133d8;
undefined *PTR_FUN_028134d8;
undefined *PTR_FUN_028135d8;
undefined *PTR_FUN_028136d8;
undefined *PTR_FUN_028137d8;
undefined *PTR_FUN_028138d8;
undefined *PTR_FUN_028139d8;
undefined *PTR_FUN_02813ad8;
undefined *PTR_FUN_02813bd8;
undefined *PTR_FUN_02813cd8;
undefined *PTR_FUN_02813d60;
undefined *PTR_FUN_02813e60;
undefined *PTR_FUN_02813ee8;
undefined *PTR_FUN_02813f70;
undefined *PTR_FUN_02813ff8;
undefined *PTR_FUN_02814080;
undefined *PTR_FUN_02814108;
undefined *PTR_FUN_02814190;
undefined *PTR_FUN_02814218;
undefined *PTR_FUN_02814318;
undefined *PTR_FUN_02814418;
undefined *PTR_FUN_02814518;
undefined *PTR_FUN_02814618;
undefined *PTR_FUN_028146a0;
undefined *PTR_FUN_02814728;
undefined *PTR_FUN_028147b0;
undefined *PTR_FUN_02814838;
undefined *PTR_FUN_028148c0;
undefined *PTR_FUN_02814948;
undefined *PTR_FUN_028149d0;
undefined *PTR_FUN_02814a58;
undefined *PTR_FUN_02814ae0;
undefined *PTR_FUN_02814b68;
undefined *PTR_FUN_02814bf0;
undefined *PTR_FUN_02814c78;
undefined *PTR_FUN_02814d00;
undefined *PTR_FUN_02814d88;
undefined *PTR_FUN_02814e10;
undefined *PTR_FUN_02814e98;
undefined *PTR_FUN_02814f20;
undefined *PTR_FUN_02814fa8;
undefined *PTR_FUN_02815030;
undefined *PTR_FUN_028150b8;
undefined4 DAT_0314ffe0;
undefined4 DAT_031500a0;
undefined *PTR_FUN_02815140;
undefined *PTR_FUN_028151c8;
undefined *PTR_FUN_02815250;
undefined *PTR_FUN_028152d8;
undefined *PTR_FUN_02815360;
undefined *PTR_FUN_028153e8;
undefined *PTR_FUN_02815470;
undefined *PTR_FUN_028154f8;
undefined *PTR_FUN_02815580;
undefined *PTR_FUN_02815608;
undefined *PTR_FUN_02815690;
undefined *PTR_FUN_02815718;
undefined *PTR_FUN_028157a0;
undefined *PTR_FUN_02815828;
undefined *PTR_FUN_028158b0;
undefined *PTR_FUN_02815938;
undefined *PTR_FUN_028159c0;
undefined *PTR_FUN_02815a48;
undefined *PTR_FUN_02815b48;
undefined *PTR_FUN_02815bd0;
float DAT_0314b2b8;
float DAT_0314b2bc;
float DAT_0314b2c0;
undefined *PTR_FUN_02815c58;
float DAT_031500b0;
float DAT_031500b4;
float DAT_0314fff0;
float DAT_0314fff4;
undefined *PTR_FUN_02815ce0;
float DAT_0314ffd0;
undefined *PTR_FUN_028190e8;
undefined *PTR_FUN_02819170;
undefined *PTR_FUN_028191f8;
undefined *PTR_FUN_02819280;
undefined *PTR_FUN_02819308;
undefined *PTR_FUN_02819390;
float DAT_03150220;
float DAT_03150160;
float DAT_031502a0;
float DAT_031501e0;
float DAT_031502d0;
float DAT_03150210;
float DAT_03150228;
float DAT_03150168;
float DAT_031502cc;
undefined DAT_03150208;
undefined *PTR_FUN_02819418;
float DAT_03150260;
float DAT_031501a0;
float DAT_03150264;
undefined DAT_031501a4;
undefined *PTR_FUN_028194a0;
undefined DAT_01bca6e8;
undefined *PTR_FUN_02819528;
undefined *PTR_FUN_028195b0;
undefined *PTR_FUN_02819638;
undefined *PTR_FUN_028196c0;
undefined *PTR_FUN_02819748;
undefined *PTR_FUN_028197d0;
undefined *PTR_FUN_02819858;
undefined *PTR_FUN_028198e0;
undefined *PTR_FUN_02819968;
undefined *PTR_FUN_028199f0;
undefined *PTR_FUN_02819a78;
undefined *PTR_FUN_02819b00;
undefined *PTR_FUN_02819c10;
undefined *PTR_thunk_FUN_00d0aae0_02819c98;
undefined *PTR_FUN_02819da8;
undefined *PTR_FUN_02819e30;
undefined *PTR_FUN_02819ec0;
undefined *PTR_FUN_02819f50;
undefined *PTR_FUN_02819fe0;
undefined *PTR_FUN_0281a068;
undefined *PTR_FUN_0281a0f0;
undefined *PTR_FUN_0281a178;
undefined *PTR_FUN_0281a200;
undefined DAT_01bca700;
undefined DAT_01bca718;
pointer PTR_FUN_0281a860;
pointer PTR_FUN_0281a878;
pointer PTR_FUN_0281a890;
undefined *PTR_FUN_0281a8a8;
float DAT_031505ac;
float DAT_031504ec;
float DAT_031505b0;
float DAT_031504f0;
float DAT_031505a0;
float DAT_031504e0;
float DAT_031505cc;
float DAT_0315050c;
float DAT_031505d0;
float DAT_03150510;
char DAT_0315c5d0;
float DAT_0315c6bc;
float DAT_0315c5fc;
float DAT_0315c6c0;
float DAT_0315c600;
float DAT_0315c6b0;
float DAT_0315c5f0;
float DAT_0315c6dc;
float DAT_0315c61c;
float DAT_0315c6e0;
float DAT_0315c620;
float DAT_0315c820;
float DAT_0315c760;
float DAT_0315ca50;
float DAT_0315c990;
float DAT_0315ca58;
float DAT_0315c998;
undefined FUN_00d26dc8;
undefined *PTR_s_onBeforeApplyDamageName_02bed5f8;
undefined FUN_00d27248;
undefined *PTR_s_onBeforeReApplyName_02bed500;
undefined FUN_00d273cc;
undefined FUN_00d27658;
undefined FUN_00d44db8;
undefined *PTR_s_onBuffIntervalName_02bed520;
undefined FUN_00d27c70;
undefined FUN_00d27db4;
undefined FUN_00d2806c;
undefined FUN_00d28398;
undefined FUN_00d98994;
undefined FUN_00d28cac;
undefined FUN_00d2ab38;
undefined *PTR_FUN_0281b2c8;
undefined *PTR_FUN_0281b488;
undefined *PTR_FUN_0281b508;
undefined *PTR_FUN_0281b308;
undefined *PTR_FUN_0281b6a8;
undefined *PTR_FUN_0281b6e8;
undefined *PTR_FUN_0281a8d8;
undefined *PTR_FUN_0281b588;
undefined *PTR_FUN_0281a900;
undefined *PTR_FUN_0281b388;
undefined *PTR_FUN_0281b4c8;
undefined *PTR_FUN_0281b408;
undefined FUN_00d2ab94;
undefined FUN_00d2ad30;
undefined FUN_00d2b048;
undefined *PTR_s_Effect_AceBuff_0281a918;
undefined FUN_00d69fb8;
undefined FUN_00d2b93c;
undefined FUN_00d2b9c0;
undefined *PTR_s_vain_node_respawn_pfx_02beb590;
undefined FUN_00d2bffc;
undefined FUN_00d2c210;
int DAT_0314f394;
undefined *PTR_s_onAbilityUpgradedName_02bed538;
undefined FUN_00d2c778;
undefined *PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
undefined *PTR_s_onEndName_02bed518;
undefined FUN_00d2c2d8;
undefined FUN_00d2c51c;
undefined FUN_00d2c5d8;
undefined FUN_00d2d06c;
undefined FUN_00d2cd4c;
undefined4 DAT_01bd11d4;
undefined FUN_00d2d49c;
undefined FUN_00d2d2a8;
undefined FUN_00d2e034;
int DAT_031b0ac4;
int DAT_031b0ac8;
int DAT_031b0acc;
int DAT_031b0ad0;
undefined FUN_00d2de90;
undefined FUN_00d2e0f4;
undefined FUN_00d2e2f4;
undefined FUN_00d2e3b0;
float DAT_0315ce30;
float DAT_0315cd70;
undefined *PTR_s_*Item_Lifespring*_02beb0c0;
undefined FUN_00d2e7f8;
undefined FUN_00d2e96c;
float DAT_0315ce74;
undefined DAT_0315cdb0;
undefined *PTR_s_*Item_Flare*_02beb088;
undefined *PTR_s_*Item_FlareLoader*_02beb090;
undefined FUN_00d2f0d0;
float DAT_0315ced0;
float DAT_0315ce10;
undefined *PTR_s_*Item_SerpentMask*_02beb110;
undefined FUN_00d2f1e0;
undefined FUN_00d2f36c;
undefined *PTR_s_onAfterApplyDamageName_02bed608;
undefined *PTR_s_*Item_EveOfHarvest*_02beb078;
undefined FUN_00d2f770;
undefined FUN_00d2f8fc;
undefined FUN_00d2fcf8;
float DAT_0315ce44;
undefined DAT_0315cd80;
undefined *PTR_s_*Item_AlternatingCurrent*_02beb010;
undefined FUN_00d30024;
float DAT_0315ce38;
float DAT_0315cd78;
undefined FUN_00d3053c;
undefined *PTR_s_breakingPointTimeOfLastAttack_02beb6d8;
undefined *PTR_s_breakingPointRemainingDamage_02beb6d0;
undefined *PTR_s_*Item_BreakingPoint*_02beb038;
undefined FUN_00d30b1c;
undefined FUN_00d30d9c;
undefined FUN_00d314e0;
undefined FUN_00d31204;
undefined *PTR_s_*Item_RooksDecree*_02beb100;
undefined FUN_00d31548;
undefined FUN_00d318f8;
undefined *PTR_s_*Item_Aftershock*_02beb008;
undefined FUN_00d31a68;
undefined FUN_00d31e54;
undefined FUN_00d31e78;
undefined FUN_00d31e9c;
undefined FUN_00d31ec0;
undefined FUN_00d31ed8;
undefined FUN_00d32c00;
undefined FUN_00d32f9c;
undefined FUN_00d32fdc;
undefined FUN_00d33414;
undefined FUN_00d33570;
undefined FUN_00d33588;
undefined FUN_00d336f4;
undefined *PTR_s_*Item_Bonesaw*_02beb028;
undefined FUN_00d33814;
undefined *PTR_s_onTimeoutName_02bed530;
undefined FUN_00d33980;
undefined FUN_00d33d80;
undefined FUN_00d33d68;
undefined *PTR_s_*Item_TensionBow*_02beb158;
undefined FUN_00d33de8;
undefined FUN_00d69f90;
undefined FUN_00d340dc;
undefined *PTR_s_*Item_PoisonedShiv*_02beb0e8;
undefined FUN_00d34334;
undefined *PTR_s_*Item_NullwaveGauntlet*_02beb0d0;
undefined FUN_00d34770;
undefined1 DAT_0315cc70;
undefined *PTR_s_var_SlumberingHusk_FortifiedHeal_02beb7f0;
undefined *PTR_s_var_SlumberingHusk_DamageTaken_02beb7e8;
undefined4 DAT_0315cc6c;
undefined *PTR_s_*Item_SlumberingHusk*_02beb120;
undefined1 DAT_0315cc80;
int DAT_0315cc78;
int DAT_0315cc88;
undefined *PTR_s_onBeforeReceiveBuffName_02bed560;
undefined FUN_00d3482c;
undefined FUN_00d34bc0;
undefined FUN_00d34cc0;
pointer PTR_s_Buff_Item_Spellsword_Recharge_02beb808;
pointer PTR_s_Buff_Item_Spellsword_RechargeOnN_02beb810;
undefined FUN_00d35100;
undefined *PTR_s_*Item_Spellsword*_02beb130;
undefined FUN_00d35498;
undefined *PTR_s_*Item_PiercingShard*_02beb0d8;
undefined *PTR_s_*Item_BrokenMyth*_02beb040;
undefined FUN_00d354b0;
undefined FUN_00d3562c;
undefined *PTR_s_*Item_Frostburn*_02beb0a0;
undefined FUN_00d356f8;
undefined FUN_00d357fc;
undefined *PTR_s_*Item_Spellfire*_02beb128;
undefined FUN_00d35814;
undefined *PTR_s_*Item_BookOfEulogies*_02beb030;
undefined FUN_00d35a78;
pointer PTR_s_*Item_BarbedNeedle*_02beb020;
pointer PTR_s_*Item_BookOfEulogies*_02beb030;
pointer PTR_s_*Item_SerpentMask*_02beb110;
undefined FUN_00d35d88;
undefined FUN_00d35eec;
undefined *PTR_s_*Item_PiercingSpear*_02beb0e0;
undefined FUN_00d35f04;
undefined FUN_00d35fcc;
undefined *PTR_s_*Item_DragonsEye*_02beb070;
undefined FUN_00d3633c;
undefined FUN_00d36368;
undefined FUN_00d36380;
undefined *PTR_s_*Item_Clockwork*_02beb050;
undefined *PTR_s_*Item_VisionTotem*_02beb188;
undefined FUN_00d363e8;
undefined FUN_00d39af4;
undefined FUN_00d36478;
pointer PTR_s_*Item_ScoutTuff*_02beb198;
undefined *PTR_s_*Item_SuperScout2000*_02beb1a0;
undefined FUN_00d3683c;
undefined FUN_00d3688c;
undefined *PTR_s_*Item_ScoutPak*_02beb190;
undefined FUN_00d3698c;
undefined FUN_00d369b8;
undefined FUN_00d36a50;
undefined FUN_00d36a68;
undefined FUN_00d39bcc;
undefined FUN_00d36d84;
undefined FUN_00d3714c;
undefined FUN_00d37164;
undefined *PTR_s_*Item_Pulseweave*_02beb0f0;
undefined FUN_00d3717c;
undefined FUN_00d37194;
undefined FUN_00d373ec;
undefined FUN_00d37404;
pointer PTR_s_*Item_Stormcrown*_02beb140;
pointer PTR_s_*Item_StormguardBanner*_02beb148;
undefined FUN_00d374dc;
undefined FUN_00d37594;
undefined FUN_00d37a54;
undefined FUN_00d37a6c;
undefined FUN_00d37a3c;
undefined *PTR_s_*Item_CapacitorPlate*_02beb048;
undefined FUN_00d37af0;
undefined FUN_00d37b8c;
undefined FUN_00d37c38;
undefined *PTR_s_*Item_TornadoTrigger*_02beb160;
undefined FUN_00d37cdc;
undefined FUN_00d37cf4;
undefined FUN_00d329c0;
undefined FUN_00d380e0;
undefined FUN_00d38444;
undefined FUN_00d386d0;
undefined *PTR_s_*Item_ProtectorContract*_02beb1c0;
undefined FUN_00d386e8;
undefined FUN_00d389d8;
undefined FUN_00d389c0;
undefined *PTR_s_*Item_DragonbloodContract*_02beb1c8;
undefined *PTR_s_*Item_IronguardContract*_02beb1b8;
undefined *PTR_s_onActorDieName_02bed590;
undefined FUN_00d38af8;
undefined FUN_00d38fe0;
undefined *PTR_s_*Item_MetalJacket*_02beb1d8;
undefined FUN_00d38ff8;
undefined FUN_00d3926c;
undefined FUN_00d39284;
undefined FUN_00d3929c;
undefined *PTR_s_*Item_SeraphicShell*_02beb1d0;
undefined *PTR_FUN_0281a980;
undefined *PTR_FUN_0281a9a8;
undefined *PTR_FUN_0281a9d0;
undefined FUN_00d39cc4;
undefined FUN_00d483cc;
undefined FUN_00d3a3e0;
undefined FUN_00d3aa34;
undefined FUN_00d3a910;
undefined FUN_00d3af40;
undefined FUN_00d3afc4;
undefined FUN_00d3b030;
undefined FUN_00d3b1b8;
undefined FUN_00d3b2c4;
undefined FUN_00d3b60c;
undefined *PTR_s_onApplyName_02bed4f8;
undefined FUN_00d3be3c;
undefined FUN_00d3c1a4;
undefined FUN_00d3c1b8;
undefined FUN_00d3c294;
undefined FUN_00d3cc94;
undefined FUN_00d3cd44;
undefined FUN_00d3c408;
undefined FUN_00d3c614;
undefined *PTR_s_onAfterReApplyName_02bed508;
undefined FUN_00d3c6d0;
undefined FUN_00d3cdf4;
undefined FUN_00d3cf3c;
undefined FUN_00d3d298;
undefined FUN_00d3da6c;
pointer PTR_s_Effect_Turret_Aggro_Lvl_1_0281a9e8;
undefined FUN_00d3dc2c;
undefined *PTR_FUN_0281b658;
undefined8 DAT_0313ce00;
pointer PTR_FUN_0281aa28;

void FUN_00bbf4f8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb3d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbf53c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb3d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bbf580(long param_1)

{
  FUN_00c08024(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bbf588(long param_1)

{
  FUN_00c08100(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bbf590(undefined8 param_1,float *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = FUN_00a1ffc0();
  fVar6 = *param_2;
  fVar7 = param_2[1];
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xf0abc88a) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xf0abc88a];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xf0abc88b)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])
                  ((double)fVar6,(double)fVar7,*(undefined8 *)(plVar4[6] + lVar1),param_3);
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_00bbf650(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb3d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbf694(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbbf698);
  (*pcVar1)();
}




void FUN_00bbf698(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb4e8;
  pvVar3 = operator_new(0x18c00);
  FUN_00c08738();
  param_1[1] = pvVar3;
  *(undefined8 **)((long)pvVar3 + 200) = param_1;
  puVar5 = param_1 + 0x15;
  lVar6 = 0x1580;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027eb3f8;
  param_1[3] = &PTR_FUN_027eb4a8;
  param_1[2] = &PTR_FUN_027eb488;
  do {
    FUN_00bc1afc(puVar5);
    lVar6 = lVar6 + -0x158;
    puVar5 = puVar5 + 0x2b;
  } while (lVar6 != 0);
  *(undefined2 *)(param_1 + 0x2c5) = 0;
  param_1[0x2c7] = 0;
  param_1[0x2c6] = 0;
  FUN_00e84dac(param_1 + 0x2c8);
  param_1[0x2da] = 0xffffffffffffffff;
  param_1[0x2d9] = 0xffffffffffffffff;
  param_1[0x2d8] = 0xffffffffffffffff;
  param_1[0x2d7] = 0xffffffffffffffff;
  param_1[0x2db] = 0xffffffff;
  param_1[0x2cf] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cd] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d3] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2dc] = 0;
  pbVar1 = (byte *)(param_1 + 0x2dd);
  param_1[0x2c8] = &PTR_FUN_027b99b0;
  *pbVar1 = *pbVar1 & 0xe0 | 0x10;
  memset(param_1 + 5,0,0x80);
  uVar4 = FUN_00e80f58();
  if ((uVar4 & 1) != 0) {
    lVar6 = FUN_00e829e0();
    FUN_008fce60(param_1 + 0x2d4,lVar6 + 0xa8);
  }
  lVar6 = FUN_00ceace8();
  if (*(char *)(lVar6 + 0x80) == '\0') {
    FUN_00ceace8();
    bVar2 = FUN_00ceaf2c();
  }
  else {
    bVar2 = 1;
  }
  *pbVar1 = *pbVar1 & 0xef | (bVar2 & 1) << 4;
  FUN_00c0bb84(param_1[1]);
  lVar6 = FUN_00ceace8();
  *(float *)(param_1 + 0x2dc) = (float)*(int *)(lVar6 + 0x84);
  FUN_00915ec0(param_1 + 3);
  return;
}




void FUN_00bbf834(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x16e8) = *(byte *)(param_1 + 0x16e8) & 0xef | (param_2 & 1) << 4;
  FUN_00c0bb84(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bbf854(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027eb3f8;
  param_1[3] = &PTR_FUN_027eb4a8;
  param_1[2] = &PTR_FUN_027eb488;
  pcStack_40 = thunk_FUN_00bbfba4;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  FUN_00915ef0(param_1 + 3);
  if ((*(byte *)(param_1 + 0x2d4) & 1) != 0) {
    operator_delete((void *)param_1[0x2d6]);
  }
  param_1[0x2c8] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x2d1) & 1) != 0) {
    operator_delete((void *)param_1[0x2d3]);
  }
  if ((*(byte *)(param_1 + 0x2cd) & 1) != 0) {
    operator_delete((void *)param_1[0x2cf]);
  }
  FUN_00e84dd8(param_1 + 0x2c8);
  FUN_00bc187c(param_1 + 0x2c6,1);
  puVar2 = param_1 + 0x29a;
  lVar3 = -0x1580;
  do {
    FUN_00bc1cb0(puVar2);
    lVar3 = lVar3 + 0x158;
    puVar2 = puVar2 + -0x2b;
  } while (lVar3 != 0);
  *param_1 = &PTR___cxa_pure_virtual_027eb4e8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbf998(long param_1)

{
  FUN_00bbf854(param_1 + -0x18);
  return;
}




void FUN_00bbf9a0(void *param_1)

{
  FUN_00bbf854();
  operator_delete(param_1);
  return;
}




void FUN_00bbf9c4(long param_1)

{
  FUN_00bbf854((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_00bbf9ec(long param_1)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00ec5930();
  FUN_00c0bef4(uVar5,uVar1 & 1);
  FUN_00c0903c(*(undefined8 *)(param_1 + 8));
  FUN_00ceace8();
  uVar2 = FUN_00ceb054();
  if ((uVar2 & 1) == 0) {
    FUN_00ceace8();
    uVar2 = FUN_00ceaf84();
    if ((uVar2 & 1) == 0) {
      FUN_00ceace8();
      uVar2 = FUN_00ceae90();
      if ((uVar2 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        pcVar3 = "HUD_EXIT_PRACTICE_MODE";
LAB_00bbfa78:
        uVar4 = FUN_00e6ce7c(pcVar3,0);
        FUN_00c0bd7c(uVar5,uVar4);
        return;
      }
      FUN_00ceace8();
      uVar2 = FUN_00ceae88();
      uVar5 = *(undefined8 *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        pcVar3 = "HUD_EXIT_TUTORIAL_MODE";
        goto LAB_00bbfa78;
      }
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 8);
    }
    uVar4 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = 1;
  }
  FUN_00c0bcc4(uVar5,uVar4);
  return;
}




void FUN_00bbfaa8(undefined8 param_1,long param_2,uint param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_2;
  if ((param_3 & 1) == 0) {
    pcStack_50 = thunk_FUN_00bbfba4;
    FUN_00f03390(&local_58);
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_00c0be78(*(undefined8 *)(param_2 + 8));
    }
    else {
      FUN_00c0be60();
    }
    pcStack_50 = thunk_FUN_00bbfba4;
    FUN_00f02e98(0xbf800000,&local_58,0,1);
    FUN_00bbfba4(0,param_2);
  }
  uVar2 = FUN_009f2588();
  FUN_009f2fe4(uVar2,0xd0ab9e9c,param_3 & 1);
  (**(code **)(**(long **)(param_2 + 8) + 0x138))(param_1,*(long **)(param_2 + 8),param_3 & 1,4,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbfba4(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  FUN_00bc00b8();
  if (*(byte *)(param_2 + 0x1628) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0xa8;
    do {
      FUN_00bc2938(param_1,lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x158;
    } while (uVar2 < *(byte *)(param_2 + 0x1628));
  }
  fVar3 = *(float *)(param_2 + 0x16e4);
  if (0.0 < fVar3) {
    fVar3 = fVar3 - (float)param_1;
    *(float *)(param_2 + 0x16e4) = fVar3;
  }
  if (((*(byte *)(param_2 + 0x16e8) >> 3 & 1) != 0) && (fVar3 <= 0.0)) {
    FUN_009bbfb0();
    FUN_009bd6fc();
    return;
  }
  return;
}




void FUN_00bbfc50(long param_1,byte param_2,byte param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(byte *)(param_1 + 0x16e8) =
       param_3 & 1 | (param_2 & 1) << 2 | *(byte *)(param_1 + 0x16e8) & 0xf8 | 2;
  FUN_00c0b2e4(*(undefined8 *)(param_1 + 8));
  uVar2 = *(undefined8 *)(param_1 + 8);
  FUN_00ceace8();
  uVar1 = FUN_00ceae88();
  FUN_00c0c0f8(uVar2,~uVar1 & 1);
  param_1 = param_1 + 0xa8;
  lVar3 = 0x10;
  do {
    FUN_00bc342c(param_1,1);
    FUN_00bc295c(param_1);
    FUN_00bc2938(0,param_1);
    lVar3 = lVar3 + -1;
    param_1 = param_1 + 0x158;
  } while (lVar3 != 0);
  return;
}




void FUN_00bbfce8(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  uint *__s;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 local_b0;
  long local_a8;
  uint local_9c;
  byte *local_98;
  uint local_8c;
  ulong local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar15 = tpidr_el0;
  local_68 = *(long *)(lVar15 + 0x28);
  FUN_00d4d54c(auStack_80);
  FUN_00d4d364(auStack_80,1);
  FUN_00ceace8();
  bVar5 = FUN_00ceb0fc();
  pbVar1 = (byte *)(param_1 + 0x1628);
  *pbVar1 = bVar5;
  memset((void *)(param_1 + 0x28),0,0x80);
  uVar8 = FUN_00d9e840(auStack_80,(void *)(param_1 + 0x28),0x10,0);
  if (uVar8 != *(uint *)(param_1 + 0x16dc)) {
    local_a8 = lVar15;
    if (uVar8 != 0) {
      uVar14 = 0;
      do {
        uVar11 = FUN_00ced270(*(undefined4 *)(*(long *)(param_1 + 0x28 + uVar14 * 8) + 0x260));
        if ((uVar11 & 1) != 0) {
          uVar6 = FUN_00d55870(*(undefined8 *)(param_1 + uVar14 * 8 + 0x28));
          *(undefined1 *)(param_1 + 0x1629) = uVar6;
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar8);
    }
    FUN_00ceace8();
    local_8c = FUN_00ceb0a4();
    uVar16 = *(undefined8 *)(param_1 + 8);
    local_98 = (byte *)(param_1 + 0x1629);
    if ((local_8c & 1) == 0) {
      bVar5 = *local_98;
      bVar7 = FUN_00ceab64();
      bVar7 = bVar7 | bVar5 == 1;
    }
    else {
      bVar7 = 1;
    }
    FUN_00c0b638(uVar16,bVar7 & 1);
    bVar5 = *pbVar1;
    lVar15 = -((ulong)((uint)bVar5 * 4 + 0xf) & 0x7f0);
    __s = (uint *)((long)&local_b0 + lVar15);
    if (bVar5 != 0) {
      memset(__s,0,(ulong)bVar5 << 2);
    }
    local_88 = (ulong)(bVar5 >> 1);
    local_b0 = pbVar1;
    local_9c = uVar8;
    if (uVar8 != 0) {
      uVar14 = (ulong)uVar8;
      puVar19 = (undefined8 *)(param_1 + 0x28);
      do {
        uVar11 = FUN_00d55870(*puVar19);
        iVar9 = FUN_00a1ff04();
        lVar18 = (uVar11 & 0xff) - 1;
        uVar8 = __s[lVar18];
        iVar12 = 0;
        if (((uint)uVar11 & 0xff) != 1) {
          iVar12 = (int)local_88;
        }
        if ((local_8c & 1) == 0) {
          bVar4 = (uint)*local_98 != ((uint)uVar11 & 0xff);
        }
        else {
          bVar4 = iVar9 == 1;
        }
        FUN_00bc1d40(param_1 + (ulong)(uVar8 + iVar12) * 0x158 + 0xa8,*puVar19,iVar9,
                     uVar11 & 0xffffffff,bVar4);
        plVar17 = (long *)(param_1 + (ulong)(uVar8 + iVar12) * 0x158 + 0xb0);
        if (iVar9 == 0) {
          FUN_00c0a508(*(undefined8 *)(param_1 + 8),*plVar17,uVar8);
        }
        else {
          FUN_00c0a6b0();
        }
        lVar13 = *plVar17;
        uVar14 = uVar14 - 1;
        puVar19 = puVar19 + 1;
        *(uint *)(lVar13 + 0x84) = *(uint *)(lVar13 + 0x84) | 4;
        __s[lVar18] = uVar8 + 1;
      } while (uVar14 != 0);
    }
    uVar10 = FUN_00a1ff04(1);
    pbVar1 = local_98;
    uVar8 = *__s;
    if (uVar8 < (uint)local_88) {
      lVar18 = param_1 + (ulong)uVar8 * 0x158 + 0xa8;
      lVar13 = (local_88 & 0xff) - (ulong)uVar8;
      do {
        FUN_00bc1d40(lVar18,0,uVar10,1,*pbVar1 != 1);
        plVar17 = (long *)(lVar18 + 8);
        lVar13 = lVar13 + -1;
        lVar18 = lVar18 + 0x158;
        *(uint *)(*plVar17 + 0x84) = *(uint *)(*plVar17 + 0x84) & 0xfffffffb;
      } while (lVar13 != 0);
    }
    uVar10 = FUN_00a1ff04(2);
    uVar3 = local_9c;
    pbVar2 = local_b0;
    uVar8 = *(int *)((long)&local_b0 + lVar15 + 4) + (int)local_88;
    uVar14 = (ulong)uVar8;
    if (uVar8 < *local_b0) {
      lVar15 = param_1 + (ulong)uVar8 * 0x158 + 0xa8;
      do {
        FUN_00bc1d40(lVar15,0,uVar10,2,*pbVar1 != 2);
        plVar17 = (long *)(lVar15 + 8);
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 0x158;
        *(uint *)(*plVar17 + 0x84) = *(uint *)(*plVar17 + 0x84) & 0xfffffffb;
      } while (uVar14 < *pbVar2);
    }
    FUN_00915f90(0);
    uVar14 = 0;
    lVar15 = param_1 + 0xa8;
    *(uint *)(param_1 + 0x16dc) = uVar3;
    do {
      FUN_00bc2228(lVar15);
      uVar11 = FUN_00ced270();
      if (((uVar11 & 1) != 0) &&
         (uVar11 = FUN_00f02540(*(undefined8 *)(lVar15 + 8)), (uVar11 & 1) != 0)) {
        plVar17 = *(long **)(*(long *)(lVar15 + 8) + 0x20);
        FUN_00f01a4c(*(long *)(lVar15 + 8),0);
        (**(code **)(*plVar17 + 0x78))(plVar17,*(undefined8 *)(lVar15 + 8),1);
        break;
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x158;
    } while (uVar14 < 0x10);
    (**(code **)(**(long **)(param_1 + 8) + 0x150))();
    lVar15 = local_a8;
  }
  if (*(long *)(lVar15 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bbfba4(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  FUN_00bc00b8();
  if (*(byte *)(param_2 + 0x1628) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0xa8;
    do {
      FUN_00bc2938(param_1,lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x158;
    } while (uVar2 < *(byte *)(param_2 + 0x1628));
  }
  fVar3 = *(float *)(param_2 + 0x16e4);
  if (0.0 < fVar3) {
    fVar3 = fVar3 - (float)param_1;
    *(float *)(param_2 + 0x16e4) = fVar3;
  }
  if (((*(byte *)(param_2 + 0x16e8) >> 3 & 1) != 0) && (fVar3 <= 0.0)) {
    FUN_009bbfb0();
    FUN_009bd6fc();
    return;
  }
  return;
}

