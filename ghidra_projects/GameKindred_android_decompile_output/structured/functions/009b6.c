// functions/009b6 — 57 functions
#include "libGameKindred.h"




void FUN_009b6068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c20e8;
  param_1[6] = &PTR_FUN_027c2180;
  param_1[5] = &PTR_FUN_027c2138;
  if (param_1[8] != 0) {
    FUN_019888f4();
    param_1[8] = 0;
  }
  FUN_0198931c(param_1 + 6);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009b60c8(long param_1)

{
  FUN_009b6068(param_1 + -0x28);
  return;
}




void FUN_009b60d0(long param_1)

{
  FUN_009b6068(param_1 + -0x30);
  return;
}




void FUN_009b60d8(void *param_1)

{
  FUN_009b6068();
  operator_delete(param_1);
  return;
}




void FUN_009b60fc(long param_1)

{
  FUN_009b6068((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_009b6124(long param_1)

{
  FUN_009b6068((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}




void FUN_009b614c(long param_1)

{
  long lVar1;
  
  DAT_0312ebd0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312ebd0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312ebd0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009b643c;
  *(code **)(lVar1 + 0xb8) = FUN_009b64ac;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(uint *)(lVar1 + 0xa4) = DAT_0312ebd0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x48;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867cc(param_1,0x36de0632,FUN_009b61c0,0);
  return;
}




void FUN_009b627c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_019888f4();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  plVar1 = (long *)FUN_01985d44(param_1,DAT_0312ead4);
  *(long **)(param_1 + 0x40) = plVar1;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009b62cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    return;
  }
  return;
}




void FUN_009b62dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_01985d44(param_1,DAT_0312eae0);
  if (lVar1 != 0) {
    FUN_009b2690(lVar1,param_2,param_3);
    return;
  }
  return;
}




void FUN_009b6320(long param_1,byte *param_2)

{
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  if (((*param_2 & 0x1f) != 0) && ((*param_2 >> 5 & 1) == 0)) {
    FUN_00e7cdd8();
    return;
  }
  FUN_00e7ce38();
  return;
}




void FUN_009b6344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b6350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
  return;
}




void FUN_009b6354(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
  uVar2 = *puVar1;
  param_2[1] = puVar1[1];
  *param_2 = uVar2;
  uVar2 = puVar1[2];
  param_2[3] = puVar1[3];
  param_2[2] = uVar2;
  uVar2 = puVar1[4];
  param_2[5] = puVar1[5];
  param_2[4] = uVar2;
  uVar2 = puVar1[6];
  param_2[7] = puVar1[7];
  param_2[6] = uVar2;
  return;
}




void FUN_009b63a0(long param_1)

{
  FUN_00e7ca50(*(undefined8 *)(param_1 + 0x40));
  return;
}




void FUN_009b63a8(long param_1)

{
  FUN_00e7cce0(*(undefined8 *)(param_1 + 0x40));
  return;
}




void FUN_009b63b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b63bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}




void FUN_009b63c0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  uVar2 = *puVar1;
  param_2[1] = puVar1[1];
  *param_2 = uVar2;
  uVar2 = puVar1[2];
  param_2[3] = puVar1[3];
  param_2[2] = uVar2;
  uVar2 = puVar1[4];
  param_2[5] = puVar1[5];
  param_2[4] = uVar2;
  uVar2 = puVar1[6];
  param_2[7] = puVar1[7];
  param_2[6] = uVar2;
  return;
}




void FUN_009b640c(long param_1)

{
  FUN_00e7ca50(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_009b6414(long param_1)

{
  FUN_00e7cce0(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_009b641c(void)

{
  return;
}




long FUN_009b6420(long param_1)

{
  return param_1 + -0x30;
}




long FUN_009b6428(long param_1)

{
  return param_1 + -0x30;
}




void FUN_009b6430(void)

{
  return;
}




void FUN_009b6434(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9b6438);
  (*pcVar1)();
}




void FUN_009b6438(void)

{
  return;
}




undefined8 * FUN_009b643c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  param_1[5] = &PTR_FUN_027c21b0;
  FUN_019892f4(param_1 + 6);
  *param_1 = &PTR_FUN_027c20e8;
  param_1[6] = &PTR_FUN_027c2180;
  param_1[5] = &PTR_FUN_027c2138;
  param_1[8] = 0;
  return param_1;
}




void FUN_009b64ac(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b64b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009b64b8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_01985bd0_027c21f8;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_009b64d4(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_009b64f8(long param_1)

{
  long lVar1;
  
  DAT_0312edb0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312edb0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312edb0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009b66c8;
  *(code **)(lVar1 + 0xb8) = FUN_009b66e0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(uint *)(lVar1 + 0xa4) = DAT_0312edb0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_009b6568,0);
  return;
}




void FUN_009b6568(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)FUN_01988c78();
  fVar3 = *(float *)(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x10);
  fVar2 = fVar2 + *(float *)(param_1 + 0x34);
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x34) = fVar2;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
    lVar1 = 0;
  }
  if (fVar2 < fVar3) {
    fVar4 = *(float *)(param_1 + 0x28);
    fVar5 = *(float *)(param_1 + 0x2c) - fVar4;
    fVar2 = cosf((fVar2 / fVar3) * 1.5707964);
    FUN_00d57f74(fVar4 + (fVar5 - fVar5 * fVar2),lVar1);
    return;
  }
  FUN_00d57f74(*(undefined4 *)(param_1 + 0x2c),lVar1);
  FUN_01985ca8(param_1);
  return;
}




void FUN_009b662c(float param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [4];
  float local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_3 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
    lVar2 = 0;
  }
  FUN_00d55794(lVar2,auStack_48,1);
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(float *)(param_3 + 0x28) = local_44;
  *(float *)(param_3 + 0x2c) = local_44 - param_1;
  *(undefined4 *)(param_3 + 0x30) = param_2;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009b66c8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_01985bd0_027c21f8;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_009b66e0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b66e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009b66ec(long param_1)

{
  long lVar1;
  
  DAT_0312edc0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312edc0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312edc0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009b69b8;
  *(code **)(lVar1 + 0xb8) = FUN_009b6a30;
  *(uint *)(lVar1 + 0xa4) = DAT_0312edc0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x78;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_009b678c,0);
  FUN_01986780(param_1,1,FUN_009b67a8,0);
  return;
}




void FUN_009b678c(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_0312edc0) {
    param_1 = 0;
  }
  FUN_009b6858(param_1);
  return;
}




void FUN_009b67a8(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_0312edc0) {
    param_1 = 0;
  }
  FUN_009b689c(param_1);
  return;
}




void FUN_009b67c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *param_1 = &PTR_FUN_027c2228;
  param_1[5] = &PTR_FUN_027c2258;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0x3f8000003f800000;
  return;
}




void FUN_009b6838(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x68) = param_2;
  uVar1 = param_3[4];
  *(undefined8 *)(param_1 + 0x5c) = param_3[5];
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  uVar1 = param_3[2];
  *(undefined8 *)(param_1 + 0x4c) = param_3[3];
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x3c) = param_3[1];
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  return;
}




void FUN_009b6858(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312eae0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_009b3858(lVar1,param_1 + 0x34,*(undefined8 *)(param_1 + 0x68),param_1 + 0x70);
  return;
}




void FUN_009b689c(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x70) != -1) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312eae0) {
        FUN_009b391c();
        break;
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  return;
}




void FUN_009b6900(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009b6928(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009b6958(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_009b697c(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_009b69a8(long param_1)

{
  return param_1 + -0x28;
}




long FUN_009b69b0(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_009b69b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *param_1 = &PTR_FUN_027c2228;
  param_1[5] = &PTR_FUN_027c2258;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0x3f8000003f800000;
  return param_1;
}




void FUN_009b6a30(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b6a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined1  [16] FUN_009b6a3c(float param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  float __x;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2._8_8_;
  fVar1 = param_1 / param_4 + -1.0;
  uVar3 = param_2._0_8_;
  if (1.1920929e-07 <= ABS(fVar1 + -1.0)) {
    __x = 1.0 - fVar1 * fVar1;
    fVar1 = SQRT(__x);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(__x);
    }
    uVar3 = (ulong)(uint)(fVar1 * param_3 + param_2._0_4_);
    uVar4 = 0;
  }
  auVar2._8_8_ = uVar4;
  auVar2._0_8_ = uVar3;
  return auVar2;
}



undefined *PTR_FUN_027c2288;
undefined *PTR_FUN_02be32a8;
uint DAT_0312edd0;
undefined FUN_009b8b74;
undefined FUN_009b8b98;
undefined FUN_009b7010;
undefined DAT_01b983a0;
undefined FUN_009b8b34;
undefined8 DAT_0312ede0;
long DAT_0312ede0;
undefined8 *DAT_0312ede0;
float DAT_03219000;
undefined8 DAT_03219004;
float DAT_0321900c;
undefined thunk_FUN_009bb314;
undefined *PTR_s_screen_main_hub_02be3690;
undefined *PTR_FUN_027c22b8;
undefined *PTR_FUN_027c2320;
undefined *PTR_FUN_027c2348;
undefined *PTR_FUN_027c26e0;
undefined *PTR_FUN_027c2710;
undefined *PTR_FUN_027c2740;
undefined *PTR_FUN_027d0bb0;
undefined *PTR_s_screen_char_select_02be3688;
undefined *PTR_s_screen_rewards_02be3698;
undefined *PTR_s_screen_talent_upgrade_02be36a0;
undefined *PTR_s_screen_match_confirm_02be36b0;
undefined *PTR_FUN_027d6e38;
undefined FUN_009b9a6c;
undefined FUN_009b9a7c;
undefined FUN_009bbf08;
undefined thunk_FUN_009bae64;
undefined FUN_009b9cec;
uint DAT_02c09230;
undefined FUN_009bbf30;
undefined FUN_009bbf54;
undefined *PTR_s_screen_talent_refund_02be36a8;
undefined *PTR_FUN_027c27b8;
undefined thunk_FUN_00ec5240;
float DAT_02be3668;
undefined4 DAT_02be3670;
long *DAT_032107e8;
undefined thunk_FUN_009b9e00;
undefined *PTR_FUN_027c2790;
undefined FUN_009bb3fc;
undefined thunk_FUN_009bbc7c;
int DAT_0313378c;
long DAT_0312ede8;
undefined8 DAT_0312ede8;
undefined FUN_009bc5e0;
undefined8 *DAT_0312ede8;
undefined FUN_009bc620;
undefined *PTR_FUN_027c2800;
undefined *PTR_FUN_027c2830;
undefined FUN_009bc680;
undefined thunk_FUN_00944ce8;
undefined FUN_009bc6a8;
undefined FUN_009bc97c;
undefined FUN_009bcbb4;
undefined thunk_FUN_0092754c;
undefined FUN_009bc540;
undefined FUN_009bc5ac;
int DAT_0312ee00;
undefined FUN_009bdd34;
uint DAT_02c09250;
undefined FUN_009bce18;
undefined FUN_009bcf3c;
undefined FUN_009bcf64;
undefined FUN_009bdd58;
undefined FUN_009bdd7c;
uint DAT_0312eb00;
undefined FUN_009be6dc;
undefined FUN_009be71c;
undefined *PTR_FUN_027c2860;
undefined *PTR_FUN_027c28a8;
undefined *PTR_FUN_027c28d0;
undefined *PTR_FUN_027c2900;
uint DAT_0312e498;
undefined FUN_009bebd8;
undefined FUN_009bef1c;
undefined FUN_009bef40;
undefined *PTR_FUN_027c2930;
uint DAT_02c091e8;
undefined FUN_009bf088;
undefined FUN_009bf0a0;
undefined FUN_009bf194;
undefined FUN_009bf2b4;
undefined FUN_009bf740;
undefined FUN_009bf31c;
undefined FUN_009bf768;
undefined FUN_009bf384;
float DAT_0312ef00;
float DAT_0312ee40;
undefined *PTR_FUN_027c2960;
uint DAT_0312ebf0;
undefined FUN_009bf8a8;
undefined FUN_009bfad0;
undefined FUN_009bfaec;
float DAT_0312f0c4;
undefined DAT_0312f000;
undefined *PTR_FUN_027c2990;
undefined FUN_009c0e30;
uint DAT_0312f134;
undefined FUN_009bfc88;
undefined FUN_009c0e0c;
float DAT_03218ef8;
undefined8 DAT_01b98628;
undefined DAT_03218f48;
undefined8 DAT_03218eb0;
undefined *PTR_thunk_FUN_009df4b8_027c29c0;
undefined *PTR_FUN_027c39c8;
undefined FUN_009c1038;
uint DAT_0312eb40;
undefined FUN_009df500;
undefined FUN_009c0ff4;
int DAT_0312f140;
undefined8 DAT_0312f150;
long DAT_0312f150;
undefined FUN_009c1fa8;
undefined8 *DAT_0312f150;
undefined FUN_009c20a8;
undefined FUN_009c20b0;
undefined FUN_009c20b8;
undefined FUN_009c20c0;
undefined FUN_009c20c8;
undefined FUN_009c20d0;
undefined FUN_009c20d8;
undefined FUN_009c20e0;
undefined FUN_009c20e8;
undefined FUN_009c20f0;
undefined FUN_009c20f8;
undefined FUN_009c2100;
undefined FUN_009c2108;
undefined FUN_009c2110;
undefined thunk_FUN_009c7ed4;
undefined thunk_FUN_009c791c;
undefined FUN_009c2158;
undefined FUN_009c218c;
undefined FUN_009c21c0;
undefined thunk_FUN_009c7688;
undefined FUN_009c2208;
undefined thunk_FUN_009c7884;
undefined FUN_009c2250;
undefined FUN_009c2284;
undefined thunk_FUN_009c7648;
undefined FUN_009c22bc;
undefined FUN_009c22c4;
undefined thunk_FUN_009c7e0c;
undefined *PTR_FUN_027c29f8;
undefined FUN_009c22d0;
undefined FUN_009c22d8;
undefined FUN_009c230c;
undefined FUN_009c2340;
undefined FUN_009c2348;
undefined FUN_009c2350;
undefined FUN_009c2380;
pointer PTR_FUN_027c8578;
undefined *PTR_FUN_027cad38;
undefined *PTR_FUN_027ccf98;
undefined *PTR_FUN_027cd0a8;
undefined *PTR_FUN_027cd0f0;
undefined *PTR_FUN_027cd200;
undefined *PTR_FUN_027cb790;
undefined FUN_009c2984;
undefined FUN_009c8730;
uint DAT_0312f158;
undefined FUN_009c2a94;
undefined FUN_009c8754;
undefined FUN_009c2b54;
undefined FUN_009c2c4c;
undefined FUN_009c2d0c;
undefined FUN_009c2df8;
undefined FUN_009c2e5c;
undefined DAT_01bef0f6;
int DAT_03210fd8;
pointer PTR_FUN_027de7f0;
undefined DAT_03218f08;
undefined DAT_01b988c6;
undefined DAT_027c84f0;
undefined DAT_027c8568;
undefined *PTR_FUN_027d4ec0;
undefined *PTR_FUN_027dc928;
undefined *PTR_FUN_02826f38;
undefined *PTR_FUN_02827098;
undefined *PTR_FUN_027dca88;
undefined *PTR_FUN_027dbf08;
undefined *PTR_FUN_027c2a28;
uint DAT_0312f178;
undefined FUN_009c8b5c;
undefined FUN_009c8b80;
undefined FUN_009c88d8;
undefined *PTR_thunk_FUN_009df4b8_027c2a58;
uint DAT_0312eb50;
undefined FUN_009c8cb8;
undefined FUN_009c8cfc;
undefined *PTR_s_build://LensFlares.psd_02be3438;
undefined *PTR_FUN_027c2a90;
undefined *PTR_FUN_027c2ae8;
undefined *PTR_FUN_027c2be8;
uint DAT_0312f188;
undefined FUN_009c9ca4;
undefined FUN_009c9cc8;
undefined *PTR_FUN_027c2c30;
undefined *PTR_FUN_027c2c88;
uint DAT_0312f198;
undefined FUN_009caee8;
undefined FUN_009caecc;
int DAT_0312f198;
uint DAT_0312eb20;
undefined FUN_009cb41c;
undefined FUN_009cb190;
undefined FUN_009cb45c;
undefined *PTR_FUN_027c2cc0;
uint DAT_02c7eb40;
undefined FUN_009cb560;
undefined FUN_009cb5b0;
undefined FUN_009cb5dc;
undefined FUN_009cb698;
undefined FUN_009cc1b0;
undefined FUN_009cb754;
undefined FUN_009cc244;
undefined *PTR_FUN_027c2cf0;
undefined *PTR_FUN_027c2d20;
undefined *PTR_FUN_027c2d50;
uint DAT_0312f344;
undefined FUN_009cc9ac;
undefined FUN_009cca10;
undefined FUN_009cc514;
undefined *PTR_FUN_027c2d80;
undefined *PTR_FUN_027c2db0;
int DAT_0312f344;
float DAT_0312f304;
float DAT_0312f244;
undefined FUN_009cda4c;
undefined FUN_009cda54;
undefined FUN_009cda5c;
undefined FUN_009cda64;
undefined FUN_009cda6c;
undefined thunk_FUN_009d010c;
undefined DAT_01bee81a;
undefined *PTR_FUN_027c2de0;
undefined *PTR_FUN_027c2e20;
undefined *PTR_FUN_027c2f80;
undefined FUN_009cd010;
undefined FUN_009cda3c;
undefined FUN_009cda44;
float DAT_0312f350;
uint DAT_0312f354;
undefined FUN_009cdaec;
undefined FUN_009d1000;
undefined FUN_009d1024;
undefined4 DAT_01bee7fa;
undefined *PTR_FUN_027c2fc8;
uint DAT_0312f360;
undefined FUN_009d13a8;
undefined FUN_009d11cc;
undefined FUN_009d12bc;
undefined FUN_009d1388;
undefined *PTR_thunk_FUN_01985bd0_027c2ff8;
uint DAT_0312f370;
undefined FUN_009d1c04;
undefined FUN_009d1c28;
undefined4 DAT_01b99028;
undefined *PTR_FUN_027c3028;
undefined *PTR_FUN_027c3068;
undefined *PTR_FUN_027c3098;
undefined *PTR_FUN_027c30c8;
undefined FUN_009d20fc;
uint DAT_02e3ef98;
undefined FUN_009d21b8;
undefined FUN_009d228c;
undefined FUN_009d2360;
undefined FUN_009d2428;
undefined FUN_009d24fc;
undefined FUN_009d2608;
undefined FUN_009d2740;
undefined FUN_009d4304;
undefined FUN_009d4328;
undefined FUN_009d200c;
undefined FUN_009d201c;
undefined FUN_009d2040;
undefined FUN_009d209c;
undefined FUN_009d20d0;
char DAT_0312f4c4;
float DAT_03218f48;
undefined1 DAT_0312f4c4;
uint DAT_0312f1b8;
undefined FUN_009d4454;
undefined FUN_009d446c;
undefined *PTR_FUN_027c30f8;
undefined *PTR_s_build://Fonts/Brandon-Bold-30.fo_02be9c70;
undefined *PTR_FUN_027c3128;
undefined *PTR_FUN_027c3160;
undefined *PTR_FUN_027c3260;
undefined *PTR_FUN_027c33a8;
uint DAT_0312e4b8;
undefined FUN_009d6dc8;
undefined FUN_009d4978;
undefined FUN_009d6dec;
undefined FUN_009d4a58;
undefined FUN_009d4b14;
undefined *PTR_s_build://Fonts/Brandon-Bold-36.fo_02be9c78;
undefined *PTR_FUN_028250b8;
undefined DAT_01b95634;
float DAT_0312f740;
float DAT_0312f680;
float DAT_0312f7e0;
float DAT_0312f720;
undefined1 DAT_0312f678;
undefined DAT_0312f668;
undefined DAT_01b99340;
uint DAT_0312eb10;
undefined FUN_009d7874;
undefined FUN_009d7888;
undefined FUN_009d77ec;
undefined FUN_009d7824;
undefined *PTR_FUN_027c34a8;
undefined FUN_009d7910;
undefined FUN_009d79cc;
void *DAT_0312f980;
undefined *PTR_thunk_FUN_009df4b8_027c34d8;
uint DAT_0312eb60;
undefined FUN_009d803c;
undefined FUN_009d8080;
undefined *PTR_thunk_FUN_009d917c_027c3510;
undefined *PTR_FUN_027c35d8;
uint DAT_0312eb70;
undefined FUN_009d8228;
undefined FUN_009d826c;
undefined FUN_009d91e0;
undefined *PTR_FUN_027c3548;
undefined *PTR_FUN_027c3578;
uint DAT_0312f988;
undefined FUN_009d85a4;
undefined FUN_009d8608;
undefined FUN_009d8348;
int DAT_0312f988;
undefined *PTR_FUN_027c35a8;
undefined FUN_009d8928;
uint DAT_0312eaf0;
undefined FUN_009d8dcc;
undefined FUN_009d8df0;
undefined FUN_009d8910;
undefined FUN_009d8ea4;
undefined FUN_009d8f04;
undefined2 DAT_02bf2574;
undefined2 DAT_02bf2570;
undefined *PTR_FUN_027c3610;
undefined FUN_009d93c4;
undefined FUN_009d93e4;
undefined FUN_009d9428;
undefined FUN_009d9518;
undefined FUN_009d9600;
uint DAT_0312f1a8;
undefined FUN_009d9b04;
undefined FUN_009d9b28;
undefined FUN_009d99a4;
undefined FUN_009d9da0;
undefined FUN_009d9de4;
undefined FUN_009d9e84;
undefined *PTR_FUN_027c3640;
undefined FUN_009d9f6c;
undefined FUN_009d9d44;
undefined FUN_009d9d50;
undefined FUN_009d9d80;
uint DAT_0312ee20;
undefined FUN_009da58c;
undefined FUN_009da308;
undefined FUN_009da5b0;
undefined FUN_009daa68;
undefined thunk_FUN_01985ca8;
undefined *PTR_FUN_027c3670;
undefined *PTR_FUN_027c36a0;
undefined FUN_009da800;
undefined FUN_009da8ac;
undefined FUN_009da958;
undefined FUN_009da984;
undefined FUN_009da9b8;
float DAT_02be32b0;
ushort DAT_02bf2570;
uint DAT_0312ebc0;
undefined FUN_009dad44;
undefined FUN_009db49c;
undefined FUN_009db4c0;
char DAT_0312f9a8;
char DAT_0312f9ac;
float DAT_0312f9b0;
float DAT_0312f9b4;
float DAT_02be32b4;
byte DAT_0312f9a8;
byte DAT_0312f9ac;
undefined4 DAT_0312f9b0;
short DAT_02bf2574;
short DAT_02bf2570;
undefined FUN_009db700;
undefined FUN_009db778;
undefined FUN_009db80c;
undefined *PTR_FUN_027c36d0;
undefined *PTR_FUN_027c3700;
undefined FUN_009db680;
float DAT_02be32b8;
uint DAT_0312ebb0;
undefined FUN_009dc028;
undefined FUN_009dbb08;
undefined FUN_009dc004;
char DAT_0312f9b8;
char DAT_0312f9bc;
float DAT_0312f9c0;
float DAT_0312f9c4;
float DAT_02be32bc;
byte DAT_0312f9b8;
byte DAT_0312f9bc;
undefined4 DAT_0312f9c0;
undefined *PTR_FUN_027c3730;
undefined FUN_009dc410;
undefined FUN_009dc190;
undefined FUN_009dc1f0;
undefined FUN_009dc25c;
undefined FUN_009dc2c8;
undefined FUN_009dc308;
undefined FUN_009dc3d0;
undefined *PTR_s_build://Sounds/Kraken.assetbundl_02be32c0;
undefined *PTR_s_build://Sounds/Kraken.assetbundl_02be32e0;
uint DAT_0312eb30;
undefined FUN_009dc894;
undefined FUN_009dc8b8;
undefined FUN_009dc750;
undefined8 DAT_0312fb40;
long DAT_0312fb40;
undefined8 *DAT_0312fb40;
undefined thunk_FUN_009dddb4;
undefined *PTR_FUN_027c3760;
undefined thunk_FUN_009dde64;
undefined FUN_009dd138;
undefined FUN_009dd16c;
undefined FUN_009dd0e4;
undefined *PTR_FUN_027cd6c0;
undefined *PTR_FUN_027d5388;
undefined *PTR_FUN_027cc7e8;
undefined *PTR_FUN_02827fc8;
undefined *PTR_FUN_027cd7c0;
uint DAT_0312fb48;
undefined FUN_009de100;
undefined FUN_009de124;
undefined FUN_009dd7d4;
undefined *PTR_FUN_027c37f0;
uint DAT_02e3efa8;
undefined FUN_009de754;
undefined FUN_009de794;
undefined *PTR_FUN_027c3938;
int DAT_02c7eb40;
uint DAT_0312e4c8;
undefined FUN_009defc8;
undefined FUN_009df034;
undefined *PTR_FUN_027c3968;
undefined *PTR_FUN_027c3998;
undefined FUN_009df104;
undefined FUN_009df164;
undefined thunk_FUN_009e04a4;
float DAT_0312fc94;
float DAT_0312fbd4;
float DAT_0312fcc0;
float DAT_0312fc00;
pointer PTR_FUN_027c84b8;
pointer PTR_FUN_027c84e8;
uint DAT_03214ce8;
long *DAT_0312fcd8;
undefined *PTR_FUN_027c3a00;
undefined8 DAT_0312fcd8;
undefined8 *DAT_0312fcd8;
undefined *PTR_FUN_027c3a58;
undefined *PTR_FUN_027c3ab8;
pointer PTR_FUN_027c3af8;
undefined *PTR_FUN_027c3b10;
undefined thunk_FUN_009e45b4;
undefined *PTR_FUN_027c3eb0;
undefined FUN_009e3324;
undefined thunk_FUN_009e3354;
undefined DAT_01bee7ef;
void *DAT_0312fce0;
long *DAT_0312fce0;
long DAT_0312fce0;
undefined *PTR_FUN_027c3ee0;
undefined FUN_009e4bec;
undefined *PTR_FUN_027c4278;
undefined *PTR_FUN_027c4460;
undefined *PTR_FUN_027c4488;
uint DAT_03218ef8;
void *DAT_0312fce8;
long *DAT_0312fce8;
undefined8 DAT_0312fce8;
pointer PTR_s_cloud9_027c4810;
pointer PTR_s_com.superevilmegacorp.vg.esports_027c4818;
undefined *PTR_FUN_027c4910;
undefined *PTR_FUN_027c4940;
undefined thunk_FUN_009e5570;
void *DAT_0312fcf0;
void *DAT_0312fcf8;
long *DAT_0312fcf0;
pthread_mutex_t *DAT_0312fcf8;
long DAT_0312fcf0;
undefined8 DAT_0312fcf0;
undefined *PTR_FUN_027c4970;
undefined *PTR_FUN_027c49a8;
undefined FUN_009e6604;
undefined thunk_FUN_00cbaca8;
undefined DAT_01b99bb6;
undefined *PTR_FUN_027c4d40;
undefined8 *DAT_0312fd00;
long *DAT_0312fd00;
undefined8 DAT_0312fd00;
undefined8 *DAT_0312fd08;
undefined *PTR_FUN_027c50d8;
long *DAT_0312fd08;
undefined8 DAT_0312fd08;
undefined DAT_01b99e14;
undefined DAT_01b99d6e;
undefined DAT_01b9af6e;
undefined DAT_01b9a20d;
undefined DAT_01b9ae6e;
void *DAT_03130890;
long DAT_03130890;
undefined8 DAT_03130890;
undefined FUN_009f23b4;
undefined8 *DAT_03130898;
undefined FUN_009f3b24;
undefined FUN_009f3b88;
undefined FUN_009f3bec;
undefined FUN_009f3c50;
void *DAT_03130898;
undefined8 DAT_03130898;
undefined4 DAT_01b9c0a8;
undefined4 DAT_01b9c0ac;
undefined4 DAT_01b9c0b0;
undefined4 DAT_01b9c0b4;
undefined FUN_009f42fc;
undefined FUN_009f4bc8;
undefined FUN_009f4308;
undefined FUN_009f4c2c;
undefined FUN_009f436c;
undefined FUN_009f4c90;
undefined FUN_009f43d0;
undefined FUN_009f4cf4;
undefined FUN_009f4d58;
undefined FUN_009f44ac;
undefined FUN_009f4dc0;
undefined FUN_009f4e24;
undefined FUN_009f4528;
undefined FUN_009f3d2c;
undefined FUN_009f45b4;
undefined FUN_009f3da8;
undefined FUN_009f4630;
undefined FUN_009f3e34;
undefined FUN_009f46b4;
undefined FUN_009f3eb0;
undefined FUN_009f4730;
undefined FUN_009f3f34;
undefined FUN_009f47b4;
undefined FUN_009f3fb0;
undefined FUN_009f4830;
undefined FUN_009f401c;
undefined FUN_009f48b4;
undefined FUN_009f4088;
undefined FUN_009f4930;
undefined FUN_009f40f4;
undefined FUN_009f49b4;
undefined FUN_009f4178;
undefined FUN_009f4a30;
undefined FUN_009f41f4;
undefined FUN_009f4a3c;
undefined FUN_009f4aa0;
undefined FUN_009f4280;
undefined FUN_009f4b00;
undefined FUN_009f4b64;
pointer PTR_FUN_027c8560;
pointer PTR_FUN_027c8590;
pointer PTR_FUN_027c85c0;
pointer PTR_FUN_027c85d8;
pointer PTR_FUN_027c84d0;
pointer PTR_FUN_027c8470;
pointer PTR_FUN_027c8488;
pointer PTR_FUN_027c84a0;
pointer PTR_FUN_027c85a8;
pointer PTR_FUN_027c8458;
pointer PTR_FUN_027c8500;
pointer PTR_FUN_027c8518;
pointer PTR_FUN_027c8530;
pointer PTR_FUN_027c8548;
pointer PTR_FUN_027c8608;
pointer PTR_FUN_027c8620;
pointer PTR_FUN_027c8638;
void *DAT_031308a0;
undefined *PTR_s_vainglory://video/welcome_027c5460;
undefined8 DAT_031308a0;
undefined *PTR_DAT_027c5650;
void *DAT_031308a8;
pointer PTR_s_battered_027c56d0;
undefined *PTR_s_*KindredMenuRewardsChestBattered_027c5730;
undefined8 DAT_031308a8;
void *DAT_031308b0;
long *DAT_031308b0;
undefined8 DAT_031308b0;
undefined thunk_FUN_009f8694;
undefined thunk_FUN_009f7ed4;
undefined *PTR_FUN_027c5790;
undefined *PTR_FUN_027c5b38;
undefined *PTR_FUN_027c5b68;
undefined *PTR_FUN_027c5ba8;
undefined *PTR_FUN_027c5c00;
undefined *PTR_FUN_027c5c58;
undefined FUN_009f7ad4;
undefined FUN_009f7ad8;
undefined FUN_009f8a98;
undefined FUN_009f8aac;
undefined FUN_009f8ac0;
undefined FUN_009f8ad4;
long DAT_031308b0;
undefined DAT_01b9dabc;
void *DAT_031308b8;
long *DAT_031308b8;
undefined8 DAT_031308b8;
long DAT_031308b8;
undefined *PTR_FUN_027c5cb0;
undefined *PTR_FUN_027c6050;
undefined thunk_FUN_009fb14c;
undefined *PTR_FUN_027c6080;
undefined *PTR_FUN_027c6268;
undefined *PTR_FUN_027c6290;
undefined DAT_01e26823;
undefined DAT_01b9db64;
undefined DAT_01bd12d3;
undefined DAT_01b9dd7e;
undefined *PTR_FUN_027c6628;
undefined thunk_FUN_009fd500;
void *DAT_031308c0;
long *DAT_031308c0;
undefined8 DAT_031308c0;
undefined *PTR_FUN_027c6688;
undefined *PTR_FUN_027c6a40;
undefined FUN_009feb64;
undefined *PTR_FUN_027c6a70;
undefined8 *DAT_031308c8;
undefined *PTR_FUN_027c6aa8;
undefined *PTR_FUN_027c6b18;
long *DAT_031308c8;
long DAT_031308c8;
undefined8 DAT_031308c8;
undefined FUN_009feeb4;
undefined FUN_009feebc;
long DAT_031308d0;
pointer PTR_s_player_02be3308;
pointer PTR_s_generic_quest_02be3358;
undefined8 DAT_031308d0;
undefined *PTR_s_quest_icon_misc_02be33a8;
void *DAT_031308d0;
void *DAT_031308d8;
undefined *PTR_FUN_027c6eb0;
undefined *PTR_FUN_027c7258;
long *DAT_031308d8;
long *DAT_031308d0;
undefined8 DAT_031308d8;
undefined DAT_01b9e14c;
undefined *PTR_s_tutorialLevelGwen_02be3400;
undefined *PTR_s_tutorialLevelKoshka_02be33f8;
undefined8 *DAT_03130a68;
undefined *PTR_FUN_027c7288;
undefined *PTR_FUN_027c7628;
long *DAT_03130a68;
undefined8 DAT_03130a68;
uint DAT_03130a58;
int *DAT_03130a60;
long DAT_03130a60;
undefined DAT_01b9eb40;
undefined thunk_FUN_00a072e0;
long *DAT_03130a70;
undefined8 DAT_03130a70;
undefined *PTR_FUN_027c7658;
void *DAT_03130a78;
long *DAT_03130a78;
undefined8 DAT_03130a78;
undefined *PTR_FUN_027c79f0;
undefined *PTR_FUN_027c7a20;
undefined *PTR_FUN_027c7a50;
undefined FUN_00a08eb8;
void *DAT_03130a80;
void *DAT_03130a88;
long *DAT_03130a80;
pthread_mutex_t *DAT_03130a88;
long DAT_03130a80;
undefined8 DAT_03130a80;
pointer PTR_FUN_027c7a80;
undefined *PTR_FUN_027c7aa0;
undefined thunk_FUN_00a096a4;
undefined thunk_FUN_00a0981c;
undefined8 *DAT_03130a90;
undefined *PTR_FUN_027c7ad0;
undefined *PTR_FUN_027c7e70;
long *DAT_03130a90;
undefined8 DAT_03130a90;
undefined *PTR_FUN_027c7ea0;
uint DAT_02c091a0;
undefined FUN_00a0ac10;
undefined FUN_00a0a948;
undefined FUN_00a0ac44;
undefined FUN_00a0a968;
int DAT_02c091a0;
undefined *PTR_FUN_027c8238;
undefined *PTR_FUN_027c8268;
uint DAT_03130a98;
undefined FUN_00a0b81c;
undefined thunk_FUN_00a0b1ec;
undefined FUN_00a0b860;
undefined FUN_00a0ae70;
undefined FUN_00a0af84;
undefined FUN_00a0b098;
undefined FUN_00a0b1a0;
undefined *PTR_FUN_027c8298;
uint DAT_02e8b430;
undefined FUN_00a0bb90;
undefined FUN_00a0bc28;
undefined FUN_00a10728;
undefined FUN_00a0bc54;
undefined FUN_00a1074c;
undefined FUN_00a0bd3c;
undefined4 DAT_01bc8f90;
int DAT_03130aa8;
undefined DAT_03218f20;
uint DAT_02e3ef58;
undefined FUN_00a107c8;
undefined FUN_00a11460;
undefined FUN_00a114d0;
undefined *PTR_FUN_027c82c8;
undefined8 DAT_03130c48;
long DAT_03130c48;
undefined FUN_00a11c84;
undefined FUN_00a11cf4;
undefined FUN_00a11d08;
undefined8 *DAT_03130c48;
undefined FUN_00a11d0c;
undefined FUN_00a11ed0;
undefined *PTR_FUN_027c82f8;
undefined FUN_00a11efc;
undefined FUN_00a11f28;
undefined FUN_00a11998;
undefined FUN_00a11a40;
undefined FUN_00a11b18;
undefined FUN_00a11b2c;
undefined FUN_00a11bd4;
uint DAT_02e3ef68;
undefined FUN_00a13318;
undefined FUN_00a180d0;
undefined FUN_00a133d4;
undefined FUN_00a180f4;
undefined FUN_00a13404;
undefined FUN_00a134e4;
undefined FUN_00a13608;
undefined FUN_00a136f0;
undefined FUN_00a137bc;
undefined FUN_00a13878;
undefined FUN_00a138a8;
undefined FUN_00a13990;
undefined FUN_00a13a4c;
undefined FUN_00a13b34;
undefined FUN_00a124e0;
undefined FUN_00a13b98;
undefined FUN_00a125cc;
undefined FUN_00a125f8;
undefined FUN_00a12624;
undefined FUN_00a12710;
undefined FUN_00a127cc;
undefined FUN_00a128b4;
undefined FUN_00a12978;
undefined FUN_00a12b14;
undefined FUN_00a12be4;
undefined FUN_00a12c20;
undefined FUN_00a12d08;
undefined FUN_00a12e10;
undefined FUN_00a12f18;
undefined FUN_00a12f58;
undefined FUN_00a12f98;
undefined FUN_00a13054;
undefined FUN_00a13114;
undefined FUN_00a13144;
undefined FUN_00a13224;
int DAT_03130df0;
int DAT_03130a98;
float DAT_03130d50;
float DAT_03130c90;
int DAT_0312f134;
undefined *PTR_s_Healing_Flask_02be3428;
undefined *PTR_s_Vision_Totem_02be3430;
float DAT_03130d10;
float DAT_03130c50;
pointer PTR_FUN_027c8668;
int DAT_0314fdb4;
float DAT_03130d84;
float DAT_03130cc4;
float DAT_03130db0;
float DAT_03130cf0;
long DAT_032143d0;
undefined DAT_027c8610;
undefined DAT_027c8628;
undefined *PTR_thunk_FUN_01985bd0_027c8328;
undefined FUN_00a1825c;
uint DAT_0312ee00;
undefined FUN_00a184d0;
undefined FUN_00a184d4;
undefined FUN_00a19330;
undefined FUN_00a19354;
undefined FUN_00a1941c;
uint DAT_03130ab8;
undefined FUN_00a193c0;
undefined *PTR_FUN_027c8358;
undefined *PTR_FUN_027c8388;
undefined *PTR_FUN_027c83b8;
undefined FUN_00a19b14;
uint DAT_03130df0;
undefined FUN_00a19b30;
undefined FUN_00a196a4;
undefined FUN_00a197ac;
undefined *PTR_FUN_027c83e8;
pointer PTR_FUN_027c8428;
pointer PTR___cxa_pure_virtual_027c8680;
pointer PTR_FUN_027c8440;
void *DAT_03130e00;
undefined8 DAT_03130e00;
undefined FUN_00a1ae94;
void *DAT_03130e08;
undefined thunk_FUN_00a1ba04;
long DAT_03130e08;
undefined4 *DAT_03130e08;
uint *DAT_03130e08;
byte *DAT_03130e08;
pointer PTR_FUN_027c8698;
float DAT_02be3410;
float DAT_02be3408;
float DAT_02be3414;
float DAT_02be340c;
undefined *PTR_thunk_FUN_00a19b50_027c86b8;
float DAT_03130ee0;
float DAT_03130e20;
float DAT_02be3418;
float DAT_02be341c;
undefined *PTR_FUN_027c86f8;
undefined *PTR_FUN_027c8740;
uint DAT_03130dd0;
undefined FUN_00a1d23c;
undefined FUN_00a1e31c;
undefined FUN_00a1e340;
undefined thunk_FUN_00a1de00;
undefined FUN_00a1d210;
float DAT_031310a0;
float DAT_03130fe0;
undefined *PTR_FUN_027c8780;
undefined *PTR_FUN_027c87c8;
uint DAT_03130de0;
undefined FUN_00a1e724;
undefined FUN_00a1e788;
undefined *PTR_FUN_027c8808;
undefined *PTR_FUN_027c8858;
undefined FUN_00a1f268;
uint DAT_03130dc4;
undefined thunk_FUN_00a1eb88;
undefined FUN_00a1e964;
undefined FUN_00a1f244;
pointer PTR_FUN_027c8898;
undefined8 *DAT_03131118;
long *DAT_03131118;
undefined8 DAT_03131118;
undefined4 DAT_031312c8;
undefined8 DAT_031312a0;
undefined8 DAT_031312a8;
undefined *PTR_s_build://Fonts/Avenir-Medium-24.f_02be9cf0;
undefined FUN_00a22cc8;
undefined FUN_00a22d74;
undefined FUN_00a22e20;
undefined FUN_00a22ed0;
undefined thunk_FUN_00a26590;
undefined DAT_01b9f234;
undefined thunk_FUN_00a26468;
undefined FUN_00a22ee0;
undefined FUN_00a22f04;
undefined FUN_00a22f0c;
undefined *PTR_FUN_027c88b0;
undefined FUN_00a22f28;
undefined FUN_00a23324;
undefined FUN_00a23414;
undefined FUN_00a23430;
undefined FUN_00a2356c;
undefined FUN_00a23634;
undefined FUN_00a236d0;
undefined FUN_00a23730;
undefined FUN_00a23868;
undefined FUN_00a23970;
undefined *PTR_s_build://HUDPartsHero_%s.png_02be3470;
undefined DAT_01b9f2ee;
undefined DAT_01b9f1d8;
undefined DAT_01b9f1d0;
undefined DAT_01b9f1e0;
undefined FUN_00a269a4;
undefined DAT_01b9f3eb;
undefined thunk_FUN_00a287e4;
undefined *PTR_FUN_027c89f8;
float DAT_03131584;
float DAT_031314c4;
float DAT_031315b0;
float DAT_031314f0;
undefined *PTR_FUN_027c8b40;
undefined *PTR_FUN_027c8ca0;
undefined *PTR_FUN_027c8ce8;
undefined thunk_FUN_00a2afac;
undefined *PTR_FUN_027c8e50;
undefined thunk_FUN_00a2b078;
undefined FUN_00a29f28;
undefined FUN_00a2b6d4;
undefined *PTR_FUN_02804168;
undefined *PTR_FUN_027c8f50;
undefined4 DAT_01b9f7d8;
undefined4 DAT_01b9f810;
undefined *PTR_s_scrollbar_button_fill_top_02be3518;
undefined *PTR_s_scrollbar_button_fill_middle_02be3520;
undefined *PTR_s_scrollbar_button_fill_bottom_02be3528;
float DAT_03131be0;
float DAT_03131b20;
float DAT_03131b40;
float DAT_03131a80;
undefined DAT_01b9f8a8;
undefined DAT_01b9f8ad;
undefined1 DAT_03131a58;
undefined DAT_01b9f8c2;
undefined DAT_03131a48;
undefined1 DAT_03131a70;
undefined DAT_03131a60;
undefined FUN_00a2daa0;
undefined FUN_00a2daac;
undefined FUN_00a300dc;
undefined thunk_FUN_00a2e7a4;
undefined *PTR_s_build://Fonts/Avenir-Heavy-30.fo_02be9d00;
undefined FUN_00a2d73c;
undefined FUN_00a2d830;
undefined FUN_00a2d8dc;
undefined FUN_00a2d9a0;
undefined *PTR_FUN_027c9050;
undefined FUN_00a2da88;
undefined FUN_00a2da90;
undefined FUN_00a2da98;
undefined DAT_01e239e7;
undefined DAT_01e66520;
float DAT_03131e1c;
float DAT_03131edc;
float DAT_03131eb4;
float DAT_03131df4;
undefined *PTR_FUN_027c9198;
undefined FUN_00a30468;
undefined FUN_00a30518;
undefined thunk_FUN_00a30720;
undefined FUN_00a305c8;
undefined DAT_01b9f9a8;
undefined *PTR_FUN_027c92f0;
undefined FUN_00a31420;
undefined *PTR_s_build://HUDItemsAndBuffs.atlas_02be3448;
undefined *PTR_s_build://Sounds/UI.assetbundle/sf_027c9580;
float DAT_03132150;
float DAT_03132090;
float DAT_03132158;
float DAT_03132098;
float DAT_031321fc;
undefined DAT_03132138;
undefined *PTR_FUN_027c9438;
undefined *PTR_FUN_02827290;
undefined *PTR_FUN_028273f8;
undefined *PTR_s_build://HUDPartsBlitz.tga_02be3460;
undefined FUN_00a358a0;
undefined FUN_00a358ec;
undefined DAT_01b9fbc8;
undefined DAT_01b9fbcc;
undefined FUN_00a3591c;
undefined DAT_01b9fbd4;
undefined FUN_00a35954;
undefined FUN_00a359a8;
undefined FUN_00a359ac;
undefined *PTR_FUN_027c95e0;
undefined1 DAT_03132218;
undefined DAT_03132208;
undefined FUN_00a36794;
undefined DAT_01b9fbd0;
undefined *PTR_FUN_028051d0;
undefined *PTR_FUN_02825728;
undefined thunk_FUN_00a37a68;
undefined FUN_00a37370;
undefined *PTR_FUN_027c9730;
undefined FUN_00a372d8;
undefined *PTR_FUN_027c9878;
undefined FUN_00a37e60;
undefined FUN_00a39164;
undefined FUN_00a3a6f4;
undefined *PTR_FUN_027c99c0;
undefined thunk_FUN_00a3f654;
undefined FUN_00a3a624;
undefined FUN_00a3a650;
undefined FUN_00a3a67c;
undefined FUN_00a3a6c8;
undefined FUN_00a3b318;
undefined FUN_00a3b320;
undefined FUN_00a3b328;
undefined *PTR_s_build://HUDPartsFor35.atlas_02be3450;
undefined FUN_00a3b330;
undefined thunk_FUN_00a3f7bc;
undefined FUN_00a3b354;
undefined FUN_00a3b3b8;
undefined FUN_00a3b420;
undefined FUN_00a3b4c4;
undefined thunk_FUN_00a3fbb0;
undefined FUN_00a3b4d0;
undefined FUN_00a3b4d8;
undefined *PTR_FUN_027ca2d0;
undefined *PTR_FUN_027d5058;
undefined *PTR_FUN_02803ae0;
undefined *PTR_FUN_027ca020;
undefined *PTR_FUN_027ca188;
undefined *PTR_FUN_027c9b08;
undefined *PTR_FUN_027cce50;
undefined *PTR_FUN_027c9c08;
undefined *PTR_FUN_027c9d18;
float DAT_031324e0;
float DAT_03132420;
float DAT_03132590;
float DAT_031324d0;
float DAT_03132560;
float DAT_031324a0;
undefined DAT_031323e8;
float DAT_0313258c;
undefined DAT_031324c8;
float DAT_031324e8;
float DAT_03132428;
undefined4 DAT_03132428;
undefined *PTR_FUN_027c9d60;
undefined FUN_00a43998;
pointer PTR_s_build://Fonts/Futura-Medium-30-S_02be9d08;
pointer PTR_s_build://Fonts/Futura-Medium-64-S_02be9d18;
undefined thunk_FUN_00a478e4;
undefined *PTR_FUN_027c9eb0;
undefined FUN_00a46330;
undefined thunk_FUN_00a47850;
undefined FUN_00a466ec;
undefined DAT_01ba02b0;
undefined *PTR_FUN_027c9ff8;
undefined FUN_00a47efc;
undefined FUN_00a47ef8;
undefined DAT_01b9f8c3;
undefined DAT_01ba0304;
undefined DAT_01ba0308;
undefined DAT_01ba030c;
undefined1 DAT_031325a8;
undefined1 DAT_031325c0;
undefined DAT_03132598;
undefined DAT_031325b0;
undefined *PTR_FUN_027ca3d0;
undefined *PTR_FUN_027ca520;
undefined *PTR_FUN_027ca620;
undefined *PTR_FUN_027ca788;
undefined1 DAT_03211038;
undefined *PTR_FUN_027ca7d0;
undefined FUN_00a4b90c;
undefined thunk_FUN_00a4c268;
undefined *PTR_FUN_027ca918;
undefined DAT_027c8640;
undefined DAT_027c8658;
undefined *PTR_FUN_027caa98;
undefined FUN_00a4c884;
float DAT_03132810;
float DAT_03132750;
undefined thunk_FUN_00a4dbfc;
undefined *PTR_FUN_027cabe0;
undefined *PTR_FUN_027cacf8;
undefined *PTR_FUN_02807d58;
undefined thunk_FUN_00a4e610;
undefined *PTR_FUN_027caea0;
undefined FUN_00a4fa30;
undefined *PTR_s_build://Tutorial_Components.tga_02be3478;
undefined *PTR_s_build://Fonts/NorthwoodHigh-Regu_02be9ce8;
undefined *PTR_FUN_027cb008;
undefined *PTR_FUN_027d0db0;
undefined *PTR_FUN_027cb150;
undefined *PTR_FUN_027cb250;
undefined FUN_00a50e30;
undefined FUN_00a50f20;
undefined FUN_00a50f24;
undefined FUN_00a50f2c;
undefined FUN_00a50f44;
undefined *PTR_FUN_027cb398;
undefined DAT_02a9a0b2;
undefined FUN_00a50a20;
undefined FUN_00a50b4c;
undefined FUN_00a50c34;
undefined FUN_00a50d1c;
undefined FUN_00a50d58;
undefined FUN_00a53c2c;
undefined DAT_00000020;
undefined FUN_00a52db8;
undefined FUN_00a52dd8;
undefined1 DAT_031328d0;
undefined FUN_00a53a7c;
undefined4 DAT_031328c8;
undefined *PTR_FUN_027d0e88;
undefined *PTR_FUN_027cb4e0;
undefined *PTR_FUN_027cb628;
undefined thunk_FUN_00a56280;
undefined *PTR_s_build://Fonts/NorthwoodHigh-Regu_02be9ce0;
undefined FUN_00a560ac;
undefined FUN_00a560b8;
undefined FUN_00a56d34;
undefined DAT_01ba09ee;
undefined DAT_01ba09f0;
undefined DAT_01bbbc9f;
undefined *PTR_FUN_027cb8d8;
pointer PTR_s_build://Fonts/Brandon-Bold-24.fo_02be9c68;
pointer PTR_s_build://Fonts/Brandon-Bold-30.fo_02be9c70;
pointer PTR_s_build://Fonts/Avenir-Heavy-30.fo_02be9d00;
float DAT_03132c14;
float DAT_03132c18;
float DAT_03132b54;
undefined DAT_03132b58;
float DAT_03132c08;
float DAT_03132b48;
undefined DAT_01ba0a26;
undefined thunk_FUN_00a59144;
undefined *PTR_FUN_027cba20;
undefined1 DAT_03132a78;
undefined1 DAT_03132a90;
undefined1 DAT_03132aa8;
undefined DAT_03132a68;
undefined DAT_03132a80;
undefined DAT_03132a98;
undefined thunk_FUN_00a5bd48;
undefined FUN_00a59bf8;
undefined FUN_00a59c00;
undefined thunk_FUN_00a5b474;
undefined FUN_00a5bf24;
undefined FUN_00a59c0c;
undefined FUN_00a59c18;
undefined thunk_FUN_00a5bdb8;
undefined *PTR_FUN_027cbb70;
undefined *PTR_FUN_027cbcd8;
undefined *PTR_FUN_027cbe58;
undefined *PTR_FUN_027cc270;
undefined *PTR_FUN_027cbfa0;
int DAT_03210c94;
undefined *PTR_FUN_027cc100;
undefined FUN_00a5c464;
undefined FUN_00a5c49c;
undefined FUN_00a5c4a0;
undefined FUN_00a5c4a8;
undefined DAT_01ba0b30;
undefined DAT_027cc248;
undefined *PTR_FUN_027db530;
undefined4 DAT_01bc8f94;
undefined FUN_00a5dd14;
undefined FUN_00a5eeb0;
undefined FUN_00a5eebc;
undefined FUN_00a5eec4;
undefined4 DAT_01bc8fa4;
undefined *PTR_FUN_027cc3b8;
undefined FUN_00a61138;
undefined *PTR_FUN_027cc500;
undefined thunk_FUN_00a6173c;
undefined *PTR_s_build://Fonts/NorthwoodHigh-Regu_02be9cd0;
undefined *PTR_FUN_02827248;
undefined FUN_00a62c5c;
undefined thunk_FUN_00a6572c;
undefined thunk_FUN_00a657e8;
undefined4 DAT_02be34ec;
long DAT_03210cf8;
undefined *PTR_FUN_027cc648;
undefined *PTR_FUN_027cc7a0;
undefined FUN_00a62b80;
undefined *PTR_FUN_028270e0;
float DAT_02be34e8;
float DAT_02be34ec;
undefined4 DAT_02be34f0;
undefined FUN_00a658e4;
undefined FUN_00a65914;
undefined FUN_00a65920;
undefined4 DAT_01bc8f98;
undefined FUN_00a65ea0;
undefined FUN_00a65ee0;
undefined FUN_00a66c88;
undefined thunk_FUN_00a69688;
undefined *PTR_s_build://Fonts/Brandon-Regular-30_02be9c38;
undefined *PTR_FUN_027cc940;
undefined DAT_01bee7fe;
undefined *PTR_s_rare_027ccce0;
undefined *PTR_s_build://Fonts/Brandon-Regular-60_02be9c58;
undefined *PTR_FUN_027cca88;
undefined *PTR_FUN_027ccb88;
undefined *PTR_FUN_027ccd08;
undefined thunk_FUN_00a6c6ec;
undefined FUN_00cdbb44;
undefined FUN_00a6c378;
undefined FUN_00a6c384;
undefined DAT_01ba1150;
undefined DAT_01ba1168;
undefined FUN_00a6db44;
undefined FUN_00a6db60;
undefined FUN_00a6db7c;
undefined FUN_00a6dbac;
undefined DAT_01ba1280;
undefined FUN_00a6eb98;
undefined FUN_00a6eba0;
undefined FUN_00a6ebac;
undefined FUN_00a6ebb8;
float DAT_03132ee4;
float DAT_03132e24;
undefined thunk_FUN_00a71e34;
undefined *PTR_FUN_027cd248;
undefined FUN_00a72214;
undefined *PTR_FUN_027cd398;
undefined FUN_00a72804;
undefined *PTR_FUN_027cd518;
undefined *PTR_FUN_027cd678;
undefined DAT_01ba13f0;
float DAT_03133214;
float DAT_03133154;
undefined *PTR_FUN_0281d988;
undefined *PTR_FUN_027cd908;
undefined *PTR_FUN_028263c0;
undefined FUN_00a75120;
undefined FUN_00a762d8;
undefined *PTR_FUN_027cda78;
undefined *PTR_s_*Item_HealingFlask*_02beb0b0;
float DAT_03133510;
float DAT_03133450;
float DAT_03133470;
float DAT_031333b0;
undefined thunk_FUN_00a7b15c;
undefined *PTR_FUN_027cdbc0;
undefined FUN_00a79a6c;
undefined thunk_FUN_00a7ae70;
undefined thunk_FUN_00a7afb4;
undefined FUN_00a79a84;
undefined thunk_FUN_00a7b104;
undefined thunk_FUN_00a7af1c;
undefined FUN_00a79c14;
undefined DAT_01ba14a0;
undefined4 DAT_01ba14a4;
undefined *PTR_FUN_027cdd28;
undefined *PTR_FUN_027cde70;
undefined FUN_00a7c4dc;
uint DAT_03133524;
undefined FUN_00a7c808;
undefined FUN_00a7ce64;
undefined FUN_00a7ceb8;
undefined *PTR_FUN_027cdea0;
undefined *PTR_FUN_027cdee8;
undefined FUN_00cfb9b0;
undefined *PTR_FUN_027cdf30;
pointer PTR_FUN_027cdf80;
undefined *PTR_FUN_027ce108;
undefined *PTR_FUN_027ce158;
undefined *PTR_FUN_027ce200;
undefined *PTR_FUN_027ce2b0;
undefined *PTR_thunk_FUN_00cfc44c_027ce2f0;
undefined *PTR_FUN_027ce528;
undefined *PTR_FUN_027ce370;
int DAT_03133530;
undefined *PTR_FUN_027ce5d0;
undefined *PTR_FUN_027ce650;
undefined FUN_00a7efb4;
undefined FUN_00a7f0d4;
undefined *PTR_FUN_027ce678;
undefined *PTR_FUN_027ce6a0;
undefined *PTR_FUN_027ce6c8;
undefined FUN_00a7f264;
undefined *PTR_FUN_027ce710;
undefined *PTR_FUN_027ce768;
undefined *PTR_FUN_027ce7c0;
undefined *PTR_FUN_027ce8e8;
undefined *PTR_FUN_027ce940;
undefined *PTR_FUN_027ceb10;
undefined *PTR_FUN_027ceb58;
undefined *PTR_FUN_027ced20;
undefined *PTR_FUN_027cebc8;
int DAT_0312f370;
undefined *PTR_FUN_027cecf8;
undefined *PTR_FUN_027cedc0;
undefined FUN_00a81574;
undefined *PTR_FUN_027ceef0;
undefined FUN_00a8275c;
float DAT_03218f88;
float DAT_03218f90;
undefined *PTR_FUN_027cf020;
undefined *PTR_FUN_027cf170;
undefined FUN_00a83894;
undefined FUN_00a838bc;
undefined FUN_00a83950;
undefined FUN_00a839f4;
undefined FUN_00a83a68;
undefined FUN_00a83ac4;
undefined *PTR_FUN_027cf290;
undefined *PTR_FUN_027cf328;
undefined *PTR_FUN_027cf378;
undefined *PTR_FUN_027cf3c8;
int DAT_0312eb80;
undefined *PTR_FUN_027cf4f8;
int DAT_02e3efa8;
undefined *PTR_FUN_027cf550;
undefined *PTR_FUN_027cf690;
void *DAT_03133540;
long *DAT_03133540;
undefined8 DAT_03133540;
undefined *PTR_FUN_027cfa28;
pointer PTR_FUN_027cfc38;
undefined *PTR_FUN_027cfa88;
undefined *PTR_FUN_027cfb50;
pointer PTR_FUN_027cfbb0;
undefined *PTR_FUN_027cfbd0;
void *DAT_031336c0;
undefined8 *DAT_03133710;
undefined8 *DAT_03133708;
undefined8 *DAT_03133700;
pointer PTR_FUN_027cfe80;
pointer PTR_FUN_027cfea0;
pointer PTR_FUN_027cfec0;
undefined8 *DAT_031336c0;
undefined8 DAT_03133700;
undefined8 DAT_03133708;
undefined8 DAT_03133710;
long DAT_031336c0;
undefined *PTR_FUN_027cff40;
undefined8 DAT_031336c0;
pointer PTR_FUN_027cff68;
void *DAT_031336c8;
undefined8 *DAT_03133728;
undefined8 *DAT_03133720;
undefined8 *DAT_03133718;
pointer PTR_FUN_027cfee0;
pointer PTR_FUN_027cff00;
pointer PTR_FUN_027cff20;
undefined8 *DAT_031336c8;
undefined8 DAT_03133718;
undefined8 DAT_03133720;
undefined8 DAT_03133728;
long DAT_031336c8;
undefined *PTR_FUN_027cffa8;
undefined8 DAT_031336c8;
undefined *PTR_FUN_027ce4a0;
undefined *PTR_FUN_027ce4e0;
undefined *PTR_FUN_027cffd0;
undefined *PTR_FUN_027cead0;
undefined *PTR_FUN_027cfff8;
undefined *PTR_FUN_027d0040;
undefined *PTR_FUN_027d0068;
undefined *PTR_FUN_027cecb0;
undefined *PTR_FUN_027d00a0;
undefined *PTR_FUN_027d00e0;
undefined *PTR_FUN_027cea38;
undefined *PTR_FUN_027d0120;
undefined *PTR_FUN_027d0160;
undefined *PTR_FUN_027d01a8;
undefined *PTR_FUN_027d01d0;
undefined *PTR_FUN_027d0218;
undefined *PTR_FUN_027ce860;
undefined *PTR_FUN_027ce8a0;
undefined *PTR_FUN_027ce590;
undefined *PTR_FUN_027ce818;
undefined *PTR_FUN_027d0240;
undefined *PTR_FUN_027d0288;
undefined *PTR_FUN_027d02b0;
undefined *PTR_FUN_027d02d8;
undefined *PTR_FUN_027d0318;
undefined *PTR_FUN_027d0358;
undefined *PTR_FUN_027cea78;
undefined *PTR_FUN_027d0390;
undefined *PTR_FUN_027d03b8;
undefined *PTR_FUN_027d0410;
undefined *PTR_FUN_027ce9e0;
undefined *PTR_FUN_027d0438;
undefined *PTR_FUN_027d0490;
undefined *PTR_FUN_027ce448;
undefined *PTR_FUN_027d04b8;
undefined *PTR_FUN_027d0510;
undefined *PTR_FUN_027cec58;
undefined *PTR_FUN_027d0568;
undefined *PTR_FUN_027d0608;
undefined *PTR_FUN_027ced68;
undefined *PTR_FUN_027d0630;
undefined *PTR_FUN_027d0688;
undefined *PTR_FUN_027cf2d0;
undefined *PTR_FUN_027d06b0;
undefined *PTR_thunk_FUN_00a89274_027d06d8;
undefined *PTR_FUN_027d0740;
undefined *PTR_FUN_027d07a8;
undefined *PTR_FUN_027cfae8;
undefined *PTR_FUN_027d0810;
undefined *PTR_FUN_027d0878;
undefined *PTR_FUN_027d08d8;
undefined *PTR_FUN_027d0940;
undefined *PTR_FUN_027d0968;
undefined *PTR_FUN_027d09d0;
uint DAT_031336d0;
long DAT_031336d8;
long DAT_031336f0;
undefined *PTR_FUN_027cfc48;
pointer PTR_FUN_027cff88;
undefined FUN_00cb6d44;
undefined thunk_FUN_00cb6d44;
undefined *PTR_FUN_027d09f8;
undefined FUN_00a92f68;
undefined FUN_00cb6c44;
undefined FUN_00cb6a64;
undefined FUN_00cb6cbc;
undefined FUN_00cb6b80;
undefined FUN_00cb6bc0;
undefined *PTR_FUN_027ce568;
undefined *PTR_FUN_027d0a20;
undefined *PTR_FUN_027d0a48;
undefined *PTR_FUN_027d0a70;
undefined *PTR_FUN_027d0a98;
undefined *PTR_FUN_027d0ac0;
undefined *PTR_FUN_027d0ae8;
undefined *PTR_FUN_027d0b10;
undefined *PTR_FUN_027d0b38;
undefined *PTR_FUN_027d0b60;
undefined *PTR_FUN_027d0b88;
undefined8 *DAT_03133740;
void *DAT_03133748;
pthread_mutex_t *DAT_03133748;
undefined *PTR_FUN_027d0bd8;
undefined *PTR_FUN_027d0c00;
undefined *PTR_FUN_027d0c48;
undefined *PTR_FUN_027d0c90;
undefined *PTR_FUN_027d0cd8;
undefined *PTR_FUN_027d0d20;
undefined *PTR_FUN_027d0d68;
undefined *PTR_FUN_027d0df8;
undefined *PTR_FUN_027d0ed0;
undefined8 DAT_02be34f8;
undefined FUN_00a9b29c;
undefined FUN_00a9b304;
void *DAT_03133790;
long *DAT_03133790;
long DAT_03133790;
undefined8 DAT_03133790;
undefined *PTR_s_build://MenuCharPortraitsHD.png_02be35b0;
undefined *PTR_s_build://MenuCharPortraitsHD2.atl_02be35b8;
undefined4 DAT_031339d4;
float DAT_03133aa0;
undefined *PTR_FUN_027d0f28;
undefined *PTR_s_build://MenuPartsCommon.tga_02be3530;
undefined8 DAT_03133aa8;
undefined FUN_00a9c4d4;
long DAT_03133aa8;
undefined *PTR_FUN_027d1070;
void *DAT_03133aa8;
long *DAT_03133aa8;
undefined *PTR_FUN_027d1170;
undefined *PTR_FUN_027d12f0;
pointer PTR_s_build://Fonts/Brandon-Bold-40.fo_02be9c80;
pointer PTR_s_build://Fonts/Brandon-Bold-60.fo_02be9c90;
undefined FUN_00a9ee58;
undefined FUN_00a9f530;
undefined FUN_00a9f544;
undefined *PTR_FUN_027d1438;
undefined FUN_00a9f4f4;
undefined *PTR_FUN_027d15d8;
undefined8 DAT_03133ab0;
undefined8 *DAT_03133ab0;
undefined *PTR_FUN_027d16d8;
undefined *PTR_FUN_027d17d8;
long DAT_03133ac0;
long DAT_03133ab8;
long *DAT_03133ab8;
long *DAT_03133ac0;
undefined8 DAT_03133ab8;
int DAT_02be36b8;
undefined8 DAT_03133ac0;
long DAT_03133ac8;
undefined8 DAT_03133ad0;
undefined thunk_FUN_00aa16e8;
undefined8 DAT_03133ac8;
long *DAT_03133ad0;
undefined *PTR_FUN_027d1940;
undefined FUN_00aa2034;
undefined *PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38;
undefined DAT_01ba3ad8;
undefined8 DAT_03139948;
undefined8 DAT_03133c50;
undefined thunk_FUN_00aa2fc4;
byte DAT_03133c8c;
undefined FUN_00aa2f1c;
undefined FUN_00aa2f98;
undefined DAT_03133c70;
ulong DAT_03133c78;
char DAT_03133c88;
undefined8 DAT_03218f18;
long DAT_03133c50;
ulong DAT_03133c60;
undefined1 *DAT_03133c68;
undefined DAT_03133c58;
undefined1 *DAT_03133c80;
undefined1 DAT_03133c8c;
undefined8 DAT_03133c98;
undefined8 *DAT_03133c98;
void *DAT_03133c98;
long DAT_03133cb8;
undefined DAT_03133cb0;
undefined *PTR_FUN_027d1d18;
void *DAT_03133cc0;
long *DAT_03133cc0;
undefined8 DAT_03133cc0;
undefined *PTR_FUN_027d20b0;
void *DAT_03133cc8;
long *DAT_03133cc8;
undefined8 DAT_03133cc8;
undefined *PTR_FUN_027d2448;
undefined1 *DAT_0320ffb8;
undefined DAT_01ba3dbd;
void *DAT_03133cd0;
long *DAT_03133cd0;
undefined8 DAT_03133cd0;
undefined *PTR_s_build://MenuDraftPartsCommon.tga_02be3618;
undefined *PTR_FUN_027d27e0;
undefined FUN_00aa89f4;
undefined DAT_01ba3e50;
undefined DAT_01ba3e54;
undefined *PTR_s_build://MenuHomepagePartsCommon._02be35e8;
undefined DAT_01ba3e38;
undefined DAT_01ba3e44;
undefined4 DAT_01bee802;
undefined *PTR_FUN_027d2928;
undefined DAT_01ba3e3c;
undefined DAT_01ba3e40;
undefined *PTR_DAT_02be3510;
undefined *PTR_FUN_027d2a80;
undefined *PTR_FUN_027d2be0;
undefined DAT_01ba3e30;
undefined DAT_01ba3e34;
undefined *PTR_FUN_027d2c28;
undefined DAT_01ba3e28;
undefined DAT_01ba3e2c;
undefined DAT_01ba3e48;
undefined DAT_01ba3e4c;
undefined *PTR_FUN_027d2d70;
undefined *PTR_FUN_027d2ed0;
undefined *PTR_s_build://Fonts/Brandon-Bold-130.f_02be9cb0;
undefined *PTR_FUN_027d2f18;
undefined *PTR_FUN_027d3068;
pointer PTR_s_build://Fonts/Brandon-Bold-36.fo_02be9c78;
undefined *PTR_s_build://MenuDraftPartsCommon_Ico_02be3620;
undefined *PTR_FUN_027d31c0;
undefined4 DAT_01bee806;
undefined *PTR_FUN_027d3a30;
undefined DAT_01ba3e58;
undefined *PTR_FUN_027d3358;
undefined FUN_00aacb88;
undefined *PTR_FUN_027d34f0;
undefined DAT_01ba3e5c;
undefined *PTR_FUN_027d3638;
undefined *PTR_FUN_02806448;
pointer PTR_s_build://MenuPartsCommon.tga_02be3530;
pointer PTR_s_build://MenuDraftPartsCommon.tga_02be3618;
undefined DAT_01ba3e1c;
undefined DAT_01ba3e20;
undefined DAT_01ba3e24;
undefined *PTR_FUN_027d3788;
undefined *PTR_FUN_027d3b80;
undefined *PTR_FUN_027d38d0;
undefined *PTR_FUN_027d3cc8;
undefined *PTR_FUN_027d3e40;
undefined *PTR_FUN_028062b0;
undefined *PTR_FUN_027dc088;
undefined *PTR_FUN_027dc7d8;
undefined *PTR_FUN_027d1ce8;
undefined *PTR_FUN_027d3e88;
undefined *PTR_FUN_027d3ed0;
undefined *PTR_FUN_027d4268;
undefined FUN_00ab116c;
undefined *PTR_FUN_027d4298;
undefined *PTR_FUN_027d43e0;
undefined FUN_00ab2160;
undefined FUN_00ab2150;
undefined FUN_00ab2158;
undefined *PTR_FUN_027d4678;
undefined *PTR_FUN_027d4528;
undefined *PTR_FUN_027d47d0;
undefined *PTR_FUN_027dd718;
undefined *PTR_FUN_027d4918;
undefined *PTR_FUN_027d4af0;
pointer PTR_s_build://Fonts/Brandon-Regular-36_02be9c40;
pointer PTR_s_build://Fonts/Brandon-Regular-48_02be9c50;
undefined FUN_00ab3980;
undefined *PTR_FUN_027d4b38;
undefined FUN_00ab4338;
pointer PTR_s_build://Fonts/Brandon-Light-80.f_02be9c20;
pointer PTR_s_build://Fonts/Brandon-Light-96.f_02be9c28;
undefined FUN_00ab4350;
float DAT_02be3670;
undefined *PTR_FUN_027d4cc0;
undefined *PTR_FUN_027d6cb0;
undefined *PTR_FUN_027da660;
undefined *PTR_FUN_027da778;
undefined *PTR_FUN_027d4dc0;
undefined FUN_00ab6ac8;
undefined FUN_00ab7030;
pointer PTR_s_build://Fonts/Brandon-Bold-48.fo_02be9c88;
pointer PTR_s_build://HUDPartsCommon.atlas_02be3440;
undefined FUN_00ab95c0;
undefined thunk_FUN_00abab28;
undefined thunk_FUN_00abab78;
undefined FUN_00aba740;
undefined *PTR_FUN_027d51f0;
pointer PTR_s_build://Fonts/Brandon-Regular-60_02be9c58;
undefined FUN_00ab6b70;
undefined thunk_FUN_00ce1ef0;
undefined thunk_FUN_00abcfb0;
undefined thunk_FUN_00abc788;
undefined *PTR_FUN_027d5508;
pointer PTR_s_build://Fonts/Brandon-Light-48.f_02be9c10;
pointer PTR_s_build://Fonts/Brandon-Light-60.f_02be9c18;
undefined thunk_FUN_00ce1fa8;
undefined thunk_FUN_00ce207c;
undefined *PTR_FUN_027d5608;
undefined *PTR_s_rareArt_file_02be36d8;
undefined *PTR_s_rareArt_offset_02be36e0;
undefined *PTR_s_rareArt_repeat_02be36e8;
undefined *PTR_s_epicArt_file_02be36f0;
undefined *PTR_s_epicArt_offset_02be36f8;
undefined *PTR_s_epicArt_repeat_02be3700;
undefined *PTR_s_lgndryArt_file_02be3708;
undefined *PTR_s_lgndryArt_offset_02be3710;
undefined *PTR_s_lgndryArt_repeat_02be3718;
undefined *PTR_s_rareHero_file_02be3720;
undefined *PTR_s_rareHero_offset_02be3728;
undefined *PTR_s_rareHero_repeat_02be3730;
undefined *PTR_s_epicHero_file_02be3738;
undefined *PTR_s_epicHero_offset_02be3740;
undefined *PTR_s_epicHero_repeat_02be3748;
undefined *PTR_s_lgndHero_file_02be3750;
undefined *PTR_s_lgndHero_offset_02be3758;
undefined *PTR_s_lgndHero_repeat_02be3760;
undefined *PTR_FUN_027d5708;
pointer PTR_s_build://Fonts/Brandon-Regular-30_02be9c38;
undefined *PTR_s_build://MenuSkinsHeroesBlueprint_02be3630;
undefined *PTR_s_build://Fonts/Brandon-Light-48.f_02be9c10;
undefined thunk_FUN_00abebbc;
undefined thunk_FUN_00abff10;
undefined thunk_FUN_00abffb4;
undefined FUN_00ac01f4;
undefined thunk_FUN_00a9bda0;
undefined *PTR_DAT_02be3768;
undefined *PTR_DAT_02be3a18;
undefined *PTR_FUN_027d5858;
undefined *PTR_FUN_027d59c8;
undefined *PTR_FUN_027d5a28;
undefined *PTR_FUN_027d6008;
undefined *PTR_FUN_027d5dc0;
undefined thunk_FUN_00ac0e40;
undefined4 DAT_02be9bb4;
undefined thunk_FUN_00ac2c50;
undefined thunk_FUN_00ac3064;
undefined thunk_FUN_00ac31c4;
undefined FUN_00ac0e04;
undefined1 DAT_031341b0;
undefined DAT_031341a0;
undefined thunk_FUN_00ac324c;
undefined DAT_01baf1cd;
undefined DAT_01baf162;
undefined DAT_02be9bbc;
undefined *PTR_FUN_027d5ec0;
undefined DAT_01baf201;
undefined *PTR_s_Nuo_Services_ChatClient_Usern_02bf2550;
undefined *PTR_s_Nuo_Services_ChatClient_Nickn_02bf2558;
undefined *PTR_s_Nuo_Services_ChatClient_Messa_02bf2560;
undefined *PTR_FUN_027d6068;
undefined *PTR_FUN_027d6228;
undefined thunk_FUN_00ac4398;
undefined FUN_00ac407c;
undefined *PTR_FUN_027d6270;
undefined FUN_00ac500c;
undefined *PTR_FUN_027d6408;
undefined *PTR_FUN_027d6508;
undefined *PTR_FUN_027d6650;
undefined *PTR_FUN_027d6798;
undefined FUN_00ac69fc;
undefined *PTR_FUN_027d6898;
undefined *PTR_FUN_027d6910;
undefined FUN_00ac7950;
undefined *PTR_FUN_027d6a10;
undefined thunk_FUN_00aca9a0;
undefined *PTR_FUN_027d6b90;
long DAT_03218f00;
undefined *PTR_s_build://Fonts/Brandon-Light-60.f_02be9c18;
undefined FUN_00ac9164;
long DAT_03218f30;
undefined DAT_01baf2d4;
undefined FUN_00acbf74;
undefined FUN_00acbfb0;
undefined *PTR_FUN_027d6f80;
undefined FUN_00acd088;
undefined thunk_FUN_00acd15c;
undefined FUN_00acd3b8;
undefined *PTR_FUN_027d70a0;
undefined DAT_01baf338;
undefined DAT_01baf340;
undefined DAT_01baf348;
undefined thunk_FUN_00ad0a48;
undefined thunk_FUN_00ad0f00;
undefined thunk_FUN_00ad1060;
undefined thunk_FUN_00ad1234;
undefined *PTR_FUN_027d71a0;
undefined1 DAT_03210749;
undefined1 DAT_03210761;
byte DAT_03210718;
size_t DAT_03210720;
char *DAT_03210728;
byte DAT_03210730;
size_t DAT_03210738;
char *DAT_03210740;
byte DAT_03210748;
size_t DAT_03210750;
char *DAT_03210758;
byte DAT_03210760;
size_t DAT_03210768;
char *DAT_03210770;
undefined1 DAT_03210719;
undefined1 DAT_03210731;
undefined DAT_01baf73c;
undefined DAT_01baf4e8;
undefined FUN_00ad08d8;
undefined *PTR_FUN_027d72e8;
undefined *PTR_FUN_027d7430;
undefined *PTR_FUN_027d7578;
undefined *PTR_FUN_027d76c0;
pointer PTR_s_build://Fonts/Brandon-Bold-80.fo_02be9ca0;
undefined thunk_FUN_00ad4d74;
undefined thunk_FUN_00ad4de4;
undefined FUN_00ad3a30;
undefined thunk_FUN_00ad4d04;
undefined thunk_FUN_00ad4e54;
undefined thunk_FUN_00ad4ec4;
undefined *PTR_FUN_027d9188;
undefined *PTR_FUN_027d7808;
undefined FUN_00ad5eb0;
undefined *PTR_FUN_027d7988;
undefined FUN_00ad6cbc;
undefined thunk_FUN_00ad6e38;
undefined *PTR_FUN_027d7ad0;
undefined *PTR_FUN_027d7c18;
undefined *PTR_FUN_027d7d60;
undefined thunk_FUN_00ad8fb8;
undefined thunk_FUN_00ad9618;
undefined DAT_01bb05c9;
undefined thunk_FUN_00ad9698;
undefined *PTR_FUN_027d7ea8;
undefined *PTR_s_build://InventoryCommon.atlas_02be34e0;
undefined thunk_FUN_00ad8f50;
undefined FUN_00ad9b64;
undefined *PTR_FUN_027d8028;
undefined FUN_00ad9fc4;
undefined DAT_02bf25b0;
undefined DAT_01bafffc;
undefined DAT_01bb0000;
undefined *PTR_FUN_027d8170;
undefined *PTR_FUN_027d82d0;
pointer PTR_s_build://Fonts/Brandon-Regular-40_02be9c48;
pointer PTR_s_build://Fonts/Brandon-Bold-72.fo_02be9c98;
undefined *PTR_FUN_027d8318;
undefined FUN_00adba08;
undefined *PTR_FUN_027d8390;
undefined FUN_00adba54;
undefined8 DAT_03134350;
undefined *PTR_s_build://Fonts/Brandon-Light-96.f_02be9c28;
undefined *PTR_FUN_027d8490;
undefined *PTR_FUN_027d85e0;
undefined *PTR_FUN_027d86e0;
undefined *PTR_FUN_027d8898;
undefined *PTR_FUN_027d88f0;
undefined *PTR_FUN_027d8920;
undefined FUN_00ae21c0;
undefined FUN_00ae21c8;
undefined thunk_FUN_00ae2834;
undefined DAT_01bb0141;
undefined thunk_FUN_00ae1dbc;
undefined thunk_FUN_00ae1d4c;
undefined thunk_FUN_00ae20b4;
undefined *PTR_s_build://Fonts/Brandon-Light-150._02be9c30;
undefined *PTR_FUN_027d8968;
undefined *PTR_s_http://video.vainglorygame.com/O_02be3680;
undefined FUN_00ae37fc;
undefined *PTR_FUN_027d8ab0;
undefined thunk_FUN_00ae6eb8;
undefined thunk_FUN_00ae6f04;
undefined *PTR_FUN_027d8bf8;
undefined *PTR_FUN_027d8d40;
undefined DAT_01bb02c9;
undefined DAT_01bb02b2;
undefined *PTR_FUN_027d8e88;
undefined *PTR_FUN_027d9088;
undefined *PTR_FUN_027d8f88;
undefined thunk_FUN_00aea57c;
undefined *PTR_FUN_027d9320;
undefined DAT_01bb043c;
undefined DAT_01bb0440;
undefined DAT_01bb05c4;
undefined *PTR_FUN_027d9468;
undefined *PTR_FUN_027d95b8;
undefined DAT_01bb04e0;
undefined DAT_01bb0650;
undefined FUN_00aee8f4;
undefined FUN_00aee900;
long DAT_031339c0;
undefined *PTR_FUN_027d9950;
undefined *PTR_FUN_027d9ad0;
undefined DAT_01bb0a14;
undefined *PTR_FUN_027d9c30;
undefined thunk_FUN_00af1fb4;
undefined thunk_FUN_00af1db4;
undefined DAT_01bb0a38;
undefined FUN_00af2e0c;
undefined FUN_00af2e70;
undefined FUN_00af2e80;
undefined FUN_00af3f58;
undefined FUN_00af3f60;
undefined FUN_00af4054;
undefined *PTR_FUN_027d9d30;
undefined *PTR_FUN_027d9d60;
pointer PTR_FUN_027d9d98;
undefined *PTR_FUN_027d9db8;
undefined *PTR_FUN_027d9f38;
undefined *PTR_FUN_027da080;
undefined thunk_FUN_00af5830;
undefined *PTR_FUN_027da198;
undefined *PTR_s_build://MenuBackground_Form.png_02be3588;
undefined *PTR_FUN_027da1e0;
undefined *PTR_FUN_027da358;
undefined FUN_00af6568;
undefined *PTR_FUN_027da4a0;
undefined *PTR_FUN_027da618;
undefined *PTR_FUN_027da7c0;
undefined thunk_FUN_00af83e4;
undefined thunk_FUN_00af8428;
undefined *PTR_FUN_027da8c0;
undefined FUN_00af84d0;
undefined *PTR_FUN_027daa08;
undefined *PTR_FUN_027daa48;
undefined *PTR_FUN_027dabd0;
undefined *PTR_FUN_027daa70;
undefined FUN_00af8bf8;
undefined DAT_03218fe0;
undefined DAT_03218ff0;
undefined4 DAT_03218fe8;
undefined4 DAT_03218fec;
undefined DAT_03219010;
undefined4 DAT_03218ff8;
undefined4 DAT_03218ffc;
float DAT_03219018;
undefined4 DAT_0321901c;
undefined *PTR_FUN_027dabf8;
undefined *PTR_FUN_027dac28;
undefined *PTR_FUN_027dad98;
undefined FUN_00afc090;
undefined *PTR_FUN_027daef8;
float DAT_03218ff8;
float DAT_03218ffc;
float DAT_03218fe8;
float DAT_03218fec;
float DAT_0321901c;
undefined *PTR_FUN_027daf28;
undefined thunk_FUN_00aff5d0;
undefined FUN_00afe4f4;
undefined *PTR_FUN_027dcbe0;
undefined *PTR_FUN_027db078;
undefined *PTR_FUN_027db1d0;
void *DAT_03139948;
long *DAT_03139948;
long DAT_03139948;
undefined *PTR_FUN_027db328;
undefined thunk_FUN_00b0039c;
undefined *PTR_FUN_027db428;
undefined thunk_FUN_00b01c64;
undefined thunk_FUN_00b01cd8;
undefined FUN_00b03bf8;
undefined *PTR_FUN_027db630;
undefined *PTR_FUN_027db790;
undefined *PTR_FUN_027db8d8;
undefined *PTR_FUN_027dba40;
undefined FUN_00b06994;
undefined FUN_00b0699c;
undefined thunk_FUN_00b06a14;
undefined thunk_FUN_00b06a84;
undefined DAT_01bb11f0;
undefined1 DAT_03139998;
undefined1 DAT_031399b0;
undefined DAT_03139988;
undefined DAT_031399a0;
undefined thunk_FUN_00b065c4;
undefined thunk_FUN_00b06d10;
int DAT_03210fe4;
undefined thunk_FUN_00b06d74;
undefined *PTR_FUN_027dbdd8;
undefined thunk_FUN_00b08b18;
long DAT_03218f18;
undefined FUN_00b090dc;
undefined FUN_00b0912c;
undefined FUN_00b09134;
undefined FUN_00b0913c;
undefined FUN_00b0b9e4;
undefined FUN_00b0ac04;
undefined FUN_00b0ac0c;
undefined *PTR_FUN_027dc200;
undefined *PTR_FUN_027dc3d8;
undefined thunk_FUN_00b0db40;
undefined thunk_FUN_00b0db9c;
undefined FUN_00b0db38;
undefined thunk_FUN_00b0fd98;
undefined thunk_FUN_00b0fe1c;
undefined FUN_00b0fd94;
undefined *PTR_s_build://BoostBadges.tga_02be3580;
undefined *PTR_FUN_027dc420;
undefined FUN_00b1056c;
undefined FUN_00b10600;
undefined *PTR_FUN_027dc690;
undefined thunk_FUN_00b113f8;
undefined thunk_FUN_00b114f4;
undefined *PTR_FUN_027dc578;
char DAT_03139b68;
undefined *PTR_FUN_027dcd40;
undefined *PTR_FUN_027dcea0;
undefined thunk_FUN_00b16058;
undefined *PTR_FUN_027dcff0;
undefined thunk_FUN_00b1a8f8;
undefined8 DAT_03139d58;
undefined *PTR_FUN_027dd280;
undefined *PTR_FUN_027dd3c8;
undefined thunk_FUN_00b1bd24;
undefined *PTR_FUN_027dd138;
undefined *PTR_FUN_027dd518;
undefined *PTR_FUN_027dd618;
undefined DAT_01bb2020;
undefined DAT_01bb2024;
undefined DAT_01bb2028;
undefined DAT_01bb202c;
undefined *PTR_FUN_027dd860;
undefined1 DAT_03139d70;
undefined DAT_03139d60;
undefined *PTR_FUN_027dd960;
undefined *PTR_FUN_027dda60;
undefined FUN_00b1fec8;
undefined thunk_FUN_00b21260;
undefined *PTR_FUN_027ddb60;
undefined *PTR_FUN_027ddca8;
undefined FUN_00b21d20;
undefined DAT_01bb221c;
undefined FUN_00b21cd8;
undefined FUN_00b21cfc;
undefined *PTR_FUN_027dde08;
undefined *PTR_FUN_027ddf70;
undefined DAT_01bb2214;
undefined DAT_01bb2218;
byte DAT_0313e368;
size_t DAT_0313e370;
byte *DAT_0313e378;
byte DAT_0313e380;
size_t DAT_0313e388;
byte *DAT_0313e390;
undefined1 DAT_0313e369;
undefined1 DAT_0313e381;
undefined *PTR_FUN_027ddfa0;
undefined FUN_00b22cc0;
undefined *PTR_FUN_027de118;
undefined *PTR_FUN_027de260;
undefined *PTR_FUN_027de3a8;
undefined thunk_FUN_00ed77f0;
undefined FUN_00b24204;
undefined FUN_00b24210;
undefined *PTR_FUN_027de4f0;
undefined FUN_00b24218;
undefined *PTR_FUN_027de6a8;
undefined *PTR_FUN_027de6f0;
undefined FUN_00b25844;
undefined FUN_00b2652c;
undefined *PTR_FUN_027de808;
undefined FUN_00b267b8;
undefined8 DAT_0313a090;
undefined *PTR_FUN_027de960;
undefined *PTR_FUN_027dea60;
undefined *PTR_FUN_027debc8;
undefined *PTR_FUN_027ded30;
undefined *PTR_FUN_027dee98;
undefined *PTR_FUN_027df000;
undefined *PTR_FUN_027df190;
undefined *PTR_FUN_027df320;
undefined FUN_00b2be14;
undefined *PTR_FUN_027df468;
undefined *PTR_FUN_027df4b0;
undefined FUN_00b2c9d0;
undefined *PTR_FUN_027df848;
undefined *PTR_FUN_027df878;
undefined1 DAT_0313a0b0;
undefined DAT_0313a098;
undefined *PTR_FUN_027df9c0;
undefined FUN_00b2cfac;
undefined *PTR_FUN_027dfb10;
undefined *PTR_FUN_027dfc60;
undefined FUN_00b2d3ec;
char DAT_02be9bcc;
long DAT_0313a0b8;
undefined *PTR_FUN_027dfda8;
undefined4 DAT_0313a0c8;
undefined8 DAT_0313a0b8;
undefined8 DAT_0313a0c0;
undefined8 *DAT_0313a0c0;
int DAT_0313a0c8;
undefined FUN_00b2f200;
undefined *PTR_FUN_027dfef0;
undefined FUN_00b2f214;
undefined *PTR_FUN_027e00d0;
undefined *PTR_FUN_027e00f8;
undefined FUN_00b2fc98;
undefined *PTR_FUN_027e0240;
undefined thunk_FUN_00b3068c;
undefined *PTR_s_build://NeteaseLogo.png_02be35a0;
undefined *PTR_s_build://NeteaseChinaPublishing.p_02be35a8;
undefined FUN_00b303c0;
undefined FUN_00b30598;
undefined *PTR_FUN_027e03a8;
undefined *PTR_FUN_027e04a8;
undefined *PTR_FUN_027e04d8;
undefined thunk_FUN_00b34b2c;
undefined thunk_FUN_00b34958;
undefined thunk_FUN_00b3488c;
undefined FUN_00b33834;
undefined thunk_FUN_00b34cb0;
undefined thunk_FUN_00b34ddc;
undefined FUN_00b34efc;
undefined FUN_00b34f00;
undefined thunk_FUN_00b34f04;
undefined thunk_FUN_00b35024;
undefined thunk_FUN_00b35108;
undefined thunk_FUN_00b35178;
undefined *PTR_FUN_027e0870;
undefined FUN_00b357a4;
undefined *PTR_FUN_027e0a40;
undefined *PTR_FUN_027e0a68;
undefined FUN_00b3883c;
undefined thunk_FUN_00b3c0d0;
undefined thunk_FUN_00b3c588;
undefined FUN_00b38808;
undefined *PTR_FUN_027e0a90;
undefined thunk_FUN_00b3bee8;
undefined thunk_FUN_00b3c21c;
undefined thunk_FUN_00b3c3f4;
undefined thunk_FUN_00b3c764;
undefined thunk_FUN_00b3c92c;
undefined thunk_FUN_00b3c7b4;
undefined thunk_FUN_00b3c870;
undefined4 DAT_01bb30c8;
undefined FUN_00b39f28;
undefined4 DAT_01bee80e;
undefined FUN_00b3b604;
undefined *PTR_FUN_027e0bf8;
undefined thunk_FUN_00b3d460;
undefined thunk_FUN_00b3d2f0;
pointer PTR_FUN_027dc678;
undefined DAT_01bb3780;
undefined *PTR_FUN_027e0cf8;
undefined *PTR_FUN_027e0e78;
undefined *PTR_FUN_027e0ea0;
undefined thunk_FUN_00b41400;
undefined thunk_FUN_00b41478;
undefined FUN_00b3ee18;
undefined thunk_FUN_00b4181c;
undefined thunk_FUN_00b41fe4;
undefined thunk_FUN_00b420b0;
undefined thunk_FUN_00b414f0;
undefined FUN_00b3eeb4;
undefined FUN_00b3eee4;
undefined FUN_00b3ef24;
undefined FUN_00b3ef2c;
undefined FUN_00b3ef34;
undefined thunk_FUN_00b42364;
undefined FUN_00b43620;
undefined FUN_00b436cc;
undefined FUN_00b435dc;
undefined FUN_00b4361c;
undefined *PTR_FUN_027e0fd0;
undefined *PTR_FUN_027e1260;
undefined *PTR_FUN_027e13a8;
undefined *PTR_FUN_027eac08;
undefined *PTR_FUN_027ead80;
undefined DAT_01bb3730;
undefined DAT_01bb3738;
undefined DAT_01bb3740;
undefined FUN_00b43610;
undefined FUN_00b433d4;
undefined FUN_00b433d8;
undefined *PTR_FUN_027e0ed0;
undefined *PTR_FUN_027e1118;
undefined FUN_00b445a8;
undefined FUN_00b445b0;
long *DAT_0313a0d0;
undefined FUN_00b445dc;
undefined FUN_00b445e4;
undefined thunk_FUN_00b458c8;
undefined DAT_01bb3cce;
undefined *PTR_FUN_027e14f0;
undefined *PTR_FUN_027e1650;
undefined *PTR_FUN_027e19e8;
undefined8 DAT_0313a0d0;
undefined *PTR_FUN_027eaa90;
long DAT_0313a0d0;
undefined *PTR_FUN_027e1a18;
undefined thunk_FUN_00b47cd8;
undefined FUN_00b47f08;
undefined *PTR_FUN_027e1c80;
undefined *PTR_FUN_027e1b80;
undefined FUN_00b485a8;
undefined thunk_FUN_00b4aaa8;
undefined FUN_00b494b8;
undefined FUN_00b4950c;
undefined FUN_00b493f0;
undefined FUN_00b4941c;
undefined FUN_00b49444;
undefined thunk_FUN_00b4a7dc;
undefined thunk_FUN_00b4a880;
undefined *PTR_FUN_027e1dc8;
undefined *PTR_FUN_027e1fd8;
undefined thunk_FUN_00b4a984;
undefined thunk_FUN_00b4aa14;
undefined FUN_00b494b0;
undefined FUN_00b49a08;
undefined FUN_00b49a0c;
undefined FUN_00b4bca4;
undefined FUN_00b4bd80;
undefined thunk_FUN_00b49a10;
undefined FUN_00b4ae1c;
undefined *PTR_FUN_027e2370;
undefined thunk_FUN_00b4d09c;
undefined thunk_FUN_00b4d100;
undefined DAT_01bb6d42;
undefined4 DAT_02be9bd8;
undefined4 DAT_02be9bdc;
undefined4 DAT_02be9be0;
undefined4 DAT_02be9be4;
undefined4 DAT_02be9bd0;
undefined4 DAT_02be9bd4;
undefined *PTR_FUN_027e24b8;
undefined *PTR_FUN_027e2608;
undefined DAT_01bb4478;
undefined *PTR_FUN_027e2750;
undefined *PTR_FUN_027e2850;
undefined *PTR_s_build://LowPriorityQueue.tga_02be35c8;
undefined FUN_00b4f678;
undefined thunk_FUN_00b50d64;
undefined thunk_FUN_00b50d14;
undefined *PTR_FUN_027e2950;
undefined DAT_01bb47fe;
undefined *PTR_s_build://MenuBackground_HeroHub.p_02be3558;
undefined DAT_01bb4864;
undefined *PTR_FUN_027e2ab8;
undefined *PTR_FUN_027e2d00;
undefined *PTR_FUN_027e3098;
undefined *PTR_FUN_027e30e0;
undefined FUN_00b514a0;
undefined *PTR_FUN_027e3138;
undefined *PTR_FUN_027e3c30;
undefined thunk_FUN_00b55380;
undefined FUN_00b552e0;
undefined FUN_00b54138;
undefined *PTR_FUN_027e3160;
undefined *PTR_FUN_027e32f0;
undefined *PTR_FUN_027e3688;
undefined *PTR_FUN_027e3870;
undefined *PTR_FUN_027e3898;
undefined DAT_01bb4c98;
undefined FUN_00b56840;
undefined *PTR_FUN_027e3db0;
undefined FUN_00b56d48;
undefined *PTR_thunk_FUN_00b2f254_027e3f68;
undefined *PTR_FUN_027e4148;
undefined *PTR_thunk_FUN_00b2f254_027e4170;
undefined *PTR_FUN_027e4350;
undefined thunk_FUN_00b627ac;
undefined FUN_00b5a054;
undefined thunk_FUN_00b5d9a0;
undefined DAT_01bb4cf8;
undefined FUN_00b5a090;
undefined DAT_01bb4d00;
undefined DAT_01bb4d08;
undefined FUN_00b5a0a0;
undefined FUN_00b5a0a8;
undefined FUN_00b5a0b0;
undefined thunk_FUN_00b61444;
undefined thunk_FUN_00b62860;
undefined thunk_FUN_00bf1c4c;
undefined FUN_00b5a0cc;
undefined FUN_00b5a104;
undefined FUN_00b5a12c;
undefined DAT_01bb5071;
undefined *PTR_FUN_027e4378;
undefined *PTR_FUN_027e45c8;
undefined *PTR_FUN_027e4960;
undefined *PTR_FUN_027e49c0;
undefined *PTR_FUN_027e4a18;
undefined thunk_FUN_00b6266c;
undefined DAT_01bb4d10;
undefined DAT_01bb4d48;
undefined FUN_00b5e788;
undefined FUN_00b5e790;
undefined *PTR_FUN_027e4a58;
undefined FUN_00b5f83c;
undefined DAT_01bb4d20;
undefined DAT_01bb4d28;
undefined DAT_01b943fe;
undefined FUN_0091593c;
undefined *PTR_FUN_027e4bd8;
undefined *PTR_FUN_027e4d48;
undefined FUN_00b652bc;
undefined thunk_FUN_00b65228;
undefined FUN_00b670bc;
undefined FUN_00b670c0;
undefined DAT_01bb575c;
undefined thunk_FUN_00b6a218;
undefined thunk_FUN_00b68efc;
undefined thunk_FUN_00b6a4cc;
undefined FUN_00b6a738;
undefined FUN_00b670f4;
undefined *PTR_FUN_027e4d70;
undefined *PTR_FUN_027e4ee0;
undefined FUN_00b6a468;
ulong DAT_03218f30;
undefined *PTR_s_build://Chests.tga_02be35c0;
undefined *PTR_FUN_027e4f08;
undefined *PTR_FUN_027e5008;
undefined FUN_00b6bad8;
undefined thunk_FUN_00b6be04;
undefined thunk_FUN_00b6caa0;
undefined thunk_FUN_00b6ef80;
undefined thunk_FUN_00b6f038;
undefined FUN_00b6d9e0;
undefined FUN_00b6dc54;
undefined FUN_00b6dc64;
undefined DAT_01e30650;
undefined DAT_01e3088a;
undefined DAT_01e3aae1;
undefined *PTR_FUN_027e5170;
undefined *PTR_FUN_027e5320;
undefined *PTR_FUN_027e56b8;
undefined FUN_00b6d98c;
undefined FUN_00b6d9c4;
undefined *PTR_FUN_027e56e8;
undefined *PTR_FUN_027e5858;
undefined DAT_01bb5e64;
undefined FUN_00b7069c;
undefined FUN_00b711ec;
undefined *PTR_FUN_027e5bf0;
undefined *PTR_FUN_02825e18;
undefined thunk_FUN_00b71088;
undefined FUN_00b71080;
char DAT_02be9bf0;
undefined FUN_00b71a18;
undefined FUN_00b71a20;
undefined thunk_FUN_00b729b4;
undefined FUN_00b71a2c;
undefined FUN_00b71a34;
undefined *PTR_FUN_027e5d38;
undefined FUN_00b74244;
undefined FUN_00b74288;
undefined *PTR_FUN_027e5ea0;
undefined thunk_FUN_00b751f0;
undefined thunk_FUN_00b752e0;
undefined FUN_00b742bc;
undefined thunk_FUN_00b76e38;
undefined FUN_00b7451c;
undefined thunk_FUN_00b76fa8;
undefined thunk_FUN_00b753cc;
undefined FUN_00b771ec;
undefined *PTR_FUN_027e6008;
undefined FUN_00b76d50;
undefined *PTR_FUN_027e6108;
undefined thunk_FUN_00b777e8;
undefined FUN_00b77e78;
undefined *PTR_FUN_027e6208;
undefined *PTR_FUN_027e63c0;
undefined *PTR_FUN_027e6758;
undefined FUN_00b790d8;
undefined *PTR_FUN_027e6908;
undefined *PTR_FUN_027e6ab0;
undefined *PTR_FUN_027e6c68;
undefined FUN_00b79ad4;
undefined *PTR_FUN_027ea1b0;
undefined *PTR_FUN_027e9720;
undefined *PTR_FUN_027e98a8;
undefined FUN_00b7d380;
undefined *PTR___cxa_pure_virtual_027e7668;
undefined FUN_00b7d3ac;
undefined FUN_00b7d3d8;
undefined thunk_FUN_00b7ced8;
undefined thunk_FUN_00b7d094;
undefined *PTR_FUN_027e7000;
undefined *PTR_FUN_027e7230;
undefined *PTR_FUN_027e75c8;
undefined *PTR_FUN_027e7620;
pointer PTR_FUN_027e7650;
pointer PTR_FUN_027e76c0;
Elf64_Sym[6721] __DT_SYMTAB;
undefined *PTR_FUN_027e76d8;
undefined *PTR_FUN_027e7858;
undefined FUN_00b7d4f8;
undefined thunk_FUN_00b7d950;
undefined *PTR_FUN_027e78b0;
undefined *PTR_FUN_027e79f8;
undefined *PTR_s_build://Splash_GameOverLose.tga_02be3490;
undefined FUN_00b7ea30;
undefined *PTR_FUN_027e7b60;
undefined *PTR_FUN_027e7ec8;
undefined FUN_00b82fe4;
undefined FUN_00b83018;
undefined thunk_FUN_00b82de4;
undefined thunk_FUN_00b81220;
undefined DAT_01bb698c;
undefined thunk_FUN_00b81778;
undefined4 DAT_01bb68b0;
undefined DAT_01bb68b8;
undefined thunk_FUN_008fa36c;
undefined FUN_00b87494;
undefined FUN_00b874c8;
undefined DAT_01bb68c0;
undefined DAT_01bb68c8;
undefined8 DAT_01bb68d0;
undefined DAT_01bb6cf3;
undefined thunk_FUN_00b811c4;
undefined DAT_01bb6d3e;
undefined *PTR_FUN_027e7dc8;
undefined thunk_FUN_00b89100;
undefined *PTR_FUN_027e7cc8;
undefined FUN_00b89058;
undefined *PTR_FUN_027e7ef8;
undefined FUN_00b8a9ec;
undefined FUN_00b8a9d4;
undefined FUN_00b8ac70;
undefined FUN_00b8b378;
undefined FUN_00b8b370;
undefined *PTR_FUN_027e8160;
undefined *PTR_FUN_027e82b0;
undefined thunk_FUN_00b8bd8c;
undefined FUN_00b8bbd0;
undefined *PTR_s_build://RewardScreenBackground.p_02be3560;
undefined FUN_00b8c7c8;
undefined FUN_00b8c6c8;
undefined DAT_01bb6eb8;
undefined FUN_00b8cb60;
undefined thunk_FUN_00b8d34c;
undefined thunk_FUN_00b8d440;
undefined *PTR_FUN_027e82d8;
undefined thunk_FUN_00b8d740;
undefined DAT_01bb6f0c;
undefined DAT_01bb6f10;
undefined DAT_01bb6f14;
undefined FUN_00b8dbac;
undefined thunk_FUN_00b8d81c;
undefined thunk_FUN_00b8d864;
undefined FUN_00b8db34;
undefined *PTR_FUN_027e8420;
undefined FUN_00b8e5e4;
undefined FUN_00b8e5f8;
undefined *PTR_FUN_027e8528;
undefined *PTR_FUN_027e86a8;
undefined *PTR_FUN_027e88c0;
undefined *PTR_FUN_027e88f0;
undefined *PTR_FUN_027e8c88;
undefined *PTR_FUN_027e8ce8;
undefined *PTR_FUN_027e8d10;
undefined *PTR_FUN_027e9018;
undefined thunk_FUN_00b9ff4c;
undefined thunk_FUN_00ba01c4;
undefined thunk_FUN_00ba0544;
undefined thunk_FUN_00ba0a68;
undefined thunk_FUN_00ba1148;
undefined DAT_01bb74bb;
undefined FUN_00b99c24;
undefined *PTR_s_all_02be9d20;
undefined *PTR_s_throttled_02be9d28;
undefined *PTR_s_off_02be9d30;
undefined thunk_FUN_00b9fd14;
undefined thunk_FUN_00b9fdb0;
undefined thunk_FUN_00b9fe74;
undefined FUN_00b99c08;
float DAT_02be9bfc;
float DAT_02be9bf8;
float DAT_02be9bf4;
float DAT_0313a260;
undefined FUN_00b96c38;
undefined FUN_00b96c2c;
undefined *PTR_FUN_027e8d50;
undefined *PTR_FUN_028253d8;
undefined *PTR_FUN_02825520;
undefined *PTR_FUN_028284a0;
undefined *PTR_FUN_027e8e98;
undefined thunk_FUN_00ba117c;
undefined FUN_00b9fdac;
undefined thunk_FUN_00ba03cc;
undefined FUN_00b9fe5c;
undefined FUN_00ba0380;
undefined thunk_FUN_00ba0974;
undefined thunk_FUN_00ba0eb0;
undefined4 DAT_0313a260;
undefined FUN_00b9fd10;
undefined *PTR_FUN_027e9078;
undefined *PTR_FUN_027e9238;
undefined thunk_FUN_00ba8e5c;
undefined thunk_FUN_00ba8ec8;
undefined thunk_FUN_00ba8f34;
undefined FUN_00ba3f7c;
undefined thunk_FUN_00ba90bc;
undefined FUN_00ba3f8c;
undefined thunk_FUN_00ba94ac;
undefined FUN_00ba96e0;
undefined *PTR_FUN_027e95d0;
undefined *PTR___cxa_pure_virtual_027e96d0;
undefined *PTR_FUN_027ecb80;
undefined *PTR_FUN_027ecbe0;
undefined FUN_00ba8df0;
undefined thunk_FUN_00ba9778;
undefined thunk_FUN_00ba9904;
undefined FUN_00ba9d48;
undefined thunk_FUN_00bacbb0;
undefined thunk_FUN_00bad048;
undefined thunk_FUN_00bad254;
undefined FUN_00baa9c0;
undefined thunk_FUN_00bad30c;
undefined thunk_FUN_00bad3bc;
undefined FUN_00baa9d0;
undefined thunk_FUN_00bad46c;
undefined DAT_01bb8b00;
undefined thunk_FUN_00babe98;
undefined FUN_00bacb40;
undefined FUN_00badb48;
undefined FUN_00badb5c;
undefined *PTR_FUN_027e9c40;
undefined UNK_027e9dd8;
undefined thunk_FUN_00baef50;
undefined UNK_027e9df0;
pointer PTR___cxa_pure_virtual_027ea198;
undefined DAT_01bb8d9c;
undefined thunk_FUN_00bafb34;
undefined thunk_FUN_00bb62d0;
undefined thunk_FUN_00bb633c;
undefined thunk_FUN_00bb63a8;
undefined FUN_00bb1a58;
undefined thunk_FUN_00bb6798;
undefined *PTR_FUN_027ea330;
undefined *PTR_FUN_027ea4f8;
undefined thunk_FUN_00bb6c44;
undefined FUN_00bb1e98;
undefined thunk_FUN_00bb6174;
undefined FUN_00bb6264;
undefined FUN_00bb69dc;
undefined thunk_FUN_00bb6b70;
undefined thunk_FUN_00bb6a9c;
undefined *PTR_FUN_027ea890;
undefined FUN_00bb6f94;
undefined *PTR_FUN_027ea990;
undefined FUN_00bb7e38;
undefined thunk_FUN_00bb8910;
undefined FUN_00bb7ad8;
undefined FUN_00bb7b18;
undefined FUN_00bb7cfc;
undefined FUN_00bb98d4;
undefined thunk_FUN_00bbacb4;
undefined thunk_FUN_00bbad38;
undefined FUN_00bb9a48;
undefined FUN_00bb9a50;
undefined thunk_FUN_00bbb09c;
undefined FUN_00bb940c;
undefined FUN_00bb9618;
undefined thunk_FUN_00bbac0c;
undefined FUN_00bb9760;
undefined *PTR_FUN_027eaec8;
undefined *PTR_FUN_027eb010;
undefined *PTR___cxa_pure_virtual_027eb040;
undefined *PTR_FUN_027eb070;
undefined *PTR___cxa_pure_virtual_027eb098;
undefined *PTR_s_build://HUDPartsTutorial_PopUp_C_02be34b8;
pointer PTR_s_build://HUDJoystickChoice_Joysti_02be34d0;
pointer PTR_s_build://HUDJoystickChoice_Tap.tg_02be34d8;
undefined *PTR_FUN_027eb0c0;
undefined *PTR___cxa_pure_virtual_027eb0e8;
undefined DAT_01e2fd76;
undefined thunk_FUN_00bbcb64;
undefined *PTR_FUN_027eb110;
undefined *PTR___cxa_pure_virtual_027eb138;
undefined *PTR_thunk_FUN_00bbd724_027eb160;
undefined *PTR___cxa_pure_virtual_027eb188;
undefined thunk_FUN_00bbd4a8;
undefined FUN_00bbd290;
undefined1 DAT_0313a278;
undefined DAT_0313a268;
undefined *PTR_FUN_027eb1b0;
undefined *PTR_FUN_027eb1d8;
undefined *PTR___cxa_pure_virtual_027eb200;
undefined *PTR_FUN_027eb228;
undefined FUN_00bbdf00;
undefined FUN_00bbdfbc;
undefined thunk_FUN_00bbea14;
undefined *PTR___cxa_pure_virtual_027eb288;
undefined thunk_FUN_00bbec00;
undefined thunk_FUN_00bbed3c;
undefined FUN_00bbefb4;
pointer PTR_FUN_027eb2e8;
pointer PTR_FUN_027eb308;
undefined *PTR_FUN_027eb328;
undefined *PTR___cxa_pure_virtual_027eb368;
undefined *PTR_FUN_027eb3a8;
undefined *PTR___cxa_pure_virtual_027eb3d0;

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009b6ab0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_027c2288;
  *(undefined4 *)((long)param_1 + 0x4c) = DAT_03218f38;
  *(undefined8 *)((long)param_1 + 0x44) = DAT_03218f30;
  uVar3 = _DAT_03218ef8;
  param_1[0xe] = 0x3fc0000000000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(byte *)((long)param_1 + 0x7c) = *(byte *)((long)param_1 + 0x7c) & 0xe0 | 2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x200000002;
  param_1[0x2f] = uVar3;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[10] = uVar3;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar3;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x204) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  *(undefined8 *)((long)param_1 + 500) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x244) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0x3f800000;
  FUN_0199b368(param_1 + 0x4a);
  param_1[0x5f] = 0;
  param_1[0x61] = 0x44bb80003fc00000;
  param_1[0x60] = 0x3f800000420c0000;
  FUN_019b9e18(param_1 + 0x62);
  *(undefined4 *)((long)param_1 + 0x41c) = DAT_03218f38;
  *(undefined8 *)((long)param_1 + 0x414) = DAT_03218f30;
  *(undefined4 *)(param_1 + 0x85) = DAT_03218f38;
  param_1[0x84] = DAT_03218f30;
  *(undefined8 *)((long)param_1 + 0x42c) = _DAT_03218ef8;
  *(undefined4 *)((long)param_1 + 0x434) = 0;
  param_1[0x87] = 0;
  uVar2 = DAT_03214ce8;
  param_1[0x89] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8a) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  puVar1 = PTR_FUN_02be32a8;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8d] = puVar1;
  return;
}




void FUN_009b6c6c(void)

{
  return;
}




void FUN_009b6c70(long param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_5c;
  undefined4 uStack_58;
  float local_54;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cedce4();
  bVar3 = FUN_00cecb68();
  local_50 = 0;
  FUN_019889cc(&local_50,1,DAT_02e3ef88,0);
  puVar8 = *(undefined8 **)(*(long *)(*(long *)(local_50 + 0x290) + 0xc0) + (ulong)bVar3 * 8 + -8);
  uVar7 = *(undefined4 *)(puVar8 + 1);
  *(undefined8 *)(param_1 + 0x44) = *puVar8;
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)((long)puVar8 + 0xc);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)((long)puVar8 + 0x14);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)((long)puVar8 + 0x1c);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)((long)puVar8 + 0x24);
  uVar7 = *(undefined4 *)(puVar8 + 1);
  *(undefined8 *)(param_1 + 0x80) = *puVar8;
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)((long)puVar8 + 0xc);
  uVar6 = *(undefined8 *)((long)puVar8 + 0x14);
  *(undefined4 *)(param_1 + 0x9c) = 0x44480000;
  *(undefined8 *)(param_1 + 0x94) = uVar6;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x90);
  local_54 = 0.0;
  FUN_009399dc(0,0,0,0,0,&local_54,0,0);
  FUN_00f0025c(&uStack_58,&local_5c);
  iVar4 = FUN_0092f28c();
  if (iVar4 == 1) {
    fVar13 = *(float *)(puVar8 + 9);
    bVar2 = false;
    fVar10 = 1.0;
  }
  else {
    fVar13 = 0.0;
    fVar10 = 1.0;
    uVar5 = FUN_0092ea9c();
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_0092ead0(uStack_58,local_5c), (uVar5 & 1) == 0)) {
      bVar2 = true;
      fVar10 = *(float *)((long)puVar8 + 0x44) + 1.0;
    }
    else {
      bVar2 = false;
    }
  }
  fVar10 = fVar10 + fVar13;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)((long)puVar8 + 0x2c);
  *(float *)(param_1 + 0x30) = fVar10 * (*(float *)((long)puVar8 + 0x34) + local_54);
  fVar11 = (float)puVar8[7];
  fVar13 = fVar10 * fVar11;
  fVar12 = (float)((ulong)puVar8[7] >> 0x20);
  fVar9 = fVar10 * fVar12;
  *(float *)(param_1 + 0x34) = fVar13;
  *(float *)(param_1 + 0x38) = fVar9;
  *(ulong *)(param_1 + 0x3c) =
       CONCAT44(fVar12 * (*(float *)(puVar8 + 8) + 1.0) * fVar10,
                fVar11 * (*(float *)(puVar8 + 8) + 1.0) * fVar10);
  if ((iVar4 == 1) || (bVar2)) {
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    uVar7 = 2;
    *(float *)(param_1 + 0xdc) = fVar9;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    uVar7 = 1;
    *(float *)(param_1 + 0xdc) = fVar13;
  }
  *(undefined4 *)(param_1 + 0x470) = uVar7;
  *(undefined8 *)(param_1 + 0xd4) = uVar6;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_1 + 0x94);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_009b7630(param_1);
  fVar13 = *(float *)(param_1 + 0x98) * 0.017453292;
  fVar10 = sinf(fVar13);
  fVar13 = cosf(fVar13);
  fVar9 = *(float *)((long)puVar8 + 0x4c);
  fVar11 = *(float *)(puVar8 + 10);
  *(float *)(param_1 + 0x70) = fVar13 * fVar9 - fVar10 * fVar11;
  *(float *)(param_1 + 0x78) = fVar10 * fVar9 + fVar13 * fVar11;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b6ed8(undefined4 param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  switch(param_3) {
  case 1:
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    puVar3 = (undefined4 *)(param_2 + 0x34);
    break;
  case 2:
    puVar3 = (undefined4 *)(param_2 + 0x38);
    break;
  case 3:
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    puVar3 = (undefined4 *)(param_2 + 0x3c);
    break;
  case 4:
    puVar3 = (undefined4 *)(param_2 + 0x40);
    break;
  default:
    puVar3 = (undefined4 *)(param_2 + 0x30);
  }
  uVar1 = *puVar3;
  *(undefined8 *)(param_2 + 0xd4) = uVar2;
  *(undefined4 *)(param_2 + 0x470) = param_3;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  *(undefined4 *)(param_2 + 0xdc) = uVar1;
  *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined8 *)(param_2 + 0xb4) = *(undefined8 *)(param_2 + 0x94);
  *(undefined4 *)(param_2 + 0xec) = param_1;
  FUN_009b7630();
  return;
}




void FUN_009b6f54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2288;
  FUN_01985bd0();
  return;
}




void FUN_009b6f68(void)

{
  return;
}




void FUN_009b6f6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2288;
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_009b6fa0(long param_1)

{
  long lVar1;
  
  DAT_0312edd0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312edd0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312edd0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009b8b74;
  *(code **)(lVar1 + 0xb8) = FUN_009b8b98;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(uint *)(lVar1 + 0xa4) = DAT_0312edd0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x478;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009b7010,0);
  return;
}

