// functions/00920 — 48 functions
#include "libGameKindred.h"




void FUN_00920020(void)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *__s;
  undefined8 local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_0092ec00();
  if (iVar3 - 1U < 0x10) {
    __s = (&PTR_s_localization_de_strings_027b9d20)[(int)(iVar3 - 1U)];
  }
  else {
    __s = "english.strings";
  }
  FUN_008fa54c(local_50,"build://Localization/");
  sVar4 = strlen(__s);
  FUN_0090de84(local_50,__s,sVar4);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00f1c904(pvVar1,local_50);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  iVar3 = FUN_00f1c7b0(pvVar1,1);
  if (iVar3 != -1) {
    local_58 = 0;
    uVar5 = FUN_00f1c844(iVar3,&local_58);
    FUN_00e6ca68("default",local_58,uVar5,__s,1);
    FUN_00f1c85c(iVar3,local_58);
    FUN_00f1c7c8(iVar3);
  }
  FUN_00e6ce68("default");
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00920158(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_0092f28c();
  FUN_00f00250(*(undefined4 *)(&DAT_01b947dc + (ulong)(iVar2 == 1) * 4),
               *(undefined4 *)(&DAT_01b947d4 + (ulong)(iVar2 == 1) * 4));
  FUN_0092efcc();
  FUN_00e7d280(param_1);
  FUN_00e7d270(param_1,"Vainglory");
  FUN_0199dae8();
  FUN_0199daec();
  FUN_00e7d200(param_1);
  FUN_0199dae8();
  FUN_0199daec();
  FUN_00e7d234(param_1,0x400,0x300,1);
  local_30 = 0;
  FUN_00e7d220(param_1,(long)&local_30 + 4,&local_30,1);
  uVar3 = NEON_ucvtf(local_30._4_4_);
  uVar4 = NEON_ucvtf((undefined4)local_30);
  FUN_009205e4(uVar3,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00920234(long param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(29000);
  FUN_0091890c(pvVar1,param_1);
  *(void **)(param_1 + 0x88) = pvVar1;
  FUN_00919964(pvVar1,param_2);
  return;
}




void FUN_0092027c(long param_1)

{
  void *pvVar1;
  
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_00920304(param_1);
  }
  FUN_00919edc(*(undefined8 *)(param_1 + 0x88));
  pvVar1 = *(void **)(param_1 + 0x88);
  if (pvVar1 != (void *)0x0) {
    FUN_009196bc(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_00e7d7cc();
  FUN_009f1f18();
  FUN_0092e068();
  FUN_009e720c();
  FUN_00cea470();
  FUN_00e7bd08();
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_00e7bc38();
  FUN_00e7d5ec();
  thunk_FUN_00e7a73c();
  FUN_00e781e8();
  FUN_00e6c9f8(0);
  return;
}




void FUN_00920304(long param_1)

{
  int iVar1;
  sem_t *__sem;
  
  *(undefined2 *)(param_1 + 0x18) = 0;
  sem_post(*(sem_t **)(param_1 + 0x28));
  FUN_00e77ccc(param_1 + 0x20);
  FUN_00e7d2b0(param_1);
  __sem = *(sem_t **)(param_1 + 0x28);
  if (__sem != (sem_t *)0x0) {
    iVar1 = sem_destroy(__sem);
    *(long *)(param_1 + 0x28) = (long)iVar1;
    operator_delete(__sem);
  }
  FUN_01988fe4();
  FUN_0199c008();
  return;
}




void FUN_00920360(long param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_00920304(param_1);
  }
  FUN_00efc8e0(*(undefined8 *)(param_1 + 0x70));
  FUN_00f209e4();
  FUN_00e7d1bc(param_1);
  FUN_0091a068(*(undefined8 *)(param_1 + 0x88));
  glFinish();
  thunk_FUN_0199eb88();
  FUN_00ecafb4();
  return;
}




void FUN_009203b0(long param_1)

{
  FUN_00ecafd8();
  thunk_FUN_0199ea88();
  FUN_019804cc();
  FUN_0091a0f4(*(undefined8 *)(param_1 + 0x88));
  FUN_00e7d1a4(param_1);
  return;
}




void FUN_009203e4(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00921174(param_2,param_3);
  return;
}




void FUN_009203f0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    uVar2 = FUN_00920418();
  }
  else {
    uVar1 = sem_post(*(sem_t **)(param_1 + 0x28));
    uVar2 = (ulong)uVar1;
  }
  FUN_00e7d644(uVar2);
  return;
}




void FUN_00920418(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = thunk_FUN_0199be4c(*(undefined8 *)(param_1 + 0x78));
  FUN_0197ee88();
  lVar1 = param_1 + 0x30;
  FUN_00ce2828();
  FUN_019883a8(lVar1);
  FUN_0198822c(lVar1);
  dVar6 = (double)FUN_019882f8(lVar1);
  dVar7 = (double)FUN_01988300(lVar1);
  FUN_01988310(lVar1);
  uVar4 = FUN_00923fe8();
  if ((uVar4 & 1) != 0) {
    FUN_00923ff4((float)dVar6);
  }
  FUN_00ec5668();
  FUN_0091f2d8();
  FUN_01980408();
  FUN_0198040c();
  if (*(char *)(param_1 + 0x90) != '\0') {
    *(undefined1 *)(param_1 + 0x90) = 0;
    local_50 = 0;
    FUN_00e7d220(param_1,(long)&local_50 + 4,&local_50,1);
    uVar5 = NEON_ucvtf(local_50._4_4_);
    uVar8 = NEON_ucvtf((undefined4)local_50);
    FUN_009205e4(uVar5,uVar8);
  }
  fVar10 = (float)dVar7;
  FUN_00f001a0(fVar10);
  fVar9 = (float)dVar6;
  FUN_0091a228(fVar10,fVar9,*(undefined8 *)(param_1 + 0x88));
  FUN_01988fb0();
  FUN_01988aa0(fVar10,fVar9);
  FUN_00f29e8c();
  FUN_00eee8d4(fVar9);
  FUN_01988ba0();
  FUN_00f29e90(uVar3);
  FUN_00f00520(uVar3);
  FUN_0198ab30();
  FUN_01997abc(fVar9);
  FUN_0198ff38(fVar9);
  FUN_00ecaffc(fVar10);
  FUN_00e7d200(param_1);
  thunk_FUN_01988f80();
  FUN_0199dae8();
  FUN_0199c474(uVar3);
  FUN_01988310(lVar1);
  FUN_0199daec();
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00920598(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009205a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_009205a4(long param_1)

{
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}




undefined4 FUN_009205b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0092f28c();
  return *(undefined4 *)(&DAT_01b947dc + (ulong)(iVar1 == 1) * 4);
}




void FUN_009205e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [16];
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)param_1;
  if ((fVar3 != 0.0) && (fVar8 = (float)param_2, fVar8 != 0.0)) {
    FUN_00f001d0(param_1,param_2);
    FUN_0096704c(auStack_88);
    fVar4 = (float)DAT_03218f00 - (local_78 + local_70);
    fVar6 = DAT_03218f00._4_4_ - (fStack_74 + fStack_6c);
    iVar2 = FUN_0092f28c();
    fVar5 = *(float *)(&DAT_01b947d4 + (ulong)(iVar2 == 1) * 4);
    fVar7 = *(float *)(&DAT_01b947dc + (ulong)(iVar2 == 1) * 4);
    fVar6 = (fVar4 * fVar3) / (fVar6 * fVar8);
    fVar4 = fVar7 / fVar5;
    if (fVar4 <= fVar6) {
      fVar7 = fVar7 * (fVar6 / fVar4);
    }
    else {
      fVar5 = fVar5 * (fVar4 / fVar6);
    }
    fVar7 = fVar7 / ((float)DAT_03218f00 - (local_78 + local_70));
    fVar5 = fVar5 / (DAT_03218f00._4_4_ - (fStack_74 + fStack_6c));
    FUN_00f00250(fVar7,fVar5);
    FUN_00f002c8(fVar3 / fVar7,fVar8 / fVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00920708(long param_1)

{
  sem_t *__sem;
  
  __sem = *(sem_t **)(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x18) = 0x101;
  if (__sem == (sem_t *)0x0) {
    __sem = operator_new(0x10);
    *(sem_t **)(param_1 + 0x28) = __sem;
  }
  sem_init(__sem,0x1c0,0);
  FUN_00e7d2c0(param_1);
  FUN_00e77c7c(param_1 + 0x20,FUN_00920768,param_1,4);
  return;
}




undefined8 FUN_00920768(undefined8 param_1)

{
  FUN_00e77d5c("GameKindred");
  FUN_01988fe4();
  FUN_0199c008();
  FUN_009207a4(param_1);
  return 0;
}




void FUN_009207a4(long param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00efc8e0(*(undefined8 *)(param_1 + 0x70));
  FUN_00f209e4();
  FUN_00e7d2b0(param_1);
  while (*(char *)(param_1 + 0x18) != '\0') {
    do {
      iVar1 = sem_wait(*(sem_t **)(param_1 + 0x28));
      if (iVar1 != -1) break;
      piVar2 = (int *)__errno();
    } while (*piVar2 == 4);
    do {
      iVar1 = sem_trywait(*(sem_t **)(param_1 + 0x28));
    } while (iVar1 == 0);
    if (*(char *)(param_1 + 0x18) == '\0') break;
    FUN_00920418(param_1);
  }
  FUN_00e7d2c0(param_1);
  return;
}




byte FUN_00920820(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = FUN_0199cf54();
  bVar1 = iVar2 == 1;
  uVar3 = FUN_0092ea08();
  if ((((uVar3 & 1) == 0) || (uVar3 = FUN_00934ec0(), (uVar3 & 1) == 0)) ||
     (uVar3 = FUN_00967c00(), (uVar3 & 1) == 0)) {
    uVar3 = FUN_0092ea58();
    if ((uVar3 & 1) != 0) {
      bVar1 = FUN_00934ec0();
      bVar1 = iVar2 == 1 | bVar1 & 1;
    }
  }
  else {
    bVar1 = 2;
  }
  return bVar1;
}




void FUN_0092088c(undefined8 param_1)

{
  FUN_00e7c2e4();
  FUN_00d6d37c(param_1);
  FUN_009b8ba4(param_1);
  return;
}




void FUN_009208b8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = operator_new__(0x5788);
  *puVar1 = 200;
  lVar3 = 0x5780;
  puVar2 = puVar1 + 1;
  do {
    FUN_009a5328(puVar2);
    lVar3 = lVar3 + -0x70;
    puVar2 = puVar2 + 0xe;
  } while (lVar3 != 0);
  DAT_02c0a360 = puVar1 + 1;
  return;
}




undefined8 FUN_00920910(void)

{
  return 200;
}




void FUN_00920918(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = DAT_02c0a360;
  if (DAT_02c0a360 != 0) {
    plVar3 = (long *)(DAT_02c0a360 + -8);
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      lVar2 = lVar2 * 0x70;
      do {
        *(undefined ***)(lVar1 + lVar2 + -0x70) = &PTR_FUN_027c1908;
        FUN_00f0a79c(lVar1 + lVar2 + -0x68);
        lVar2 = lVar2 + -0x70;
      } while (lVar2 != 0);
    }
    operator_delete__(plVar3);
  }
  DAT_02c0a360 = 0;
  return;
}




void FUN_00920990(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = 200;
  DAT_02c0a368 = param_1;
  do {
    if ((*(byte *)(DAT_02c0a360 + lVar1 + 0x6d) & 1) != 0) {
      FUN_009a6098(DAT_02c0a360 + lVar1,DAT_02c0a368);
    }
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0x70;
  } while (lVar2 != 0);
  return;
}




void FUN_009209e8(void)

{
  DAT_02c0a368 = 0;
  return;
}




uint FUN_009209f4(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = 0;
  lVar1 = DAT_02c0a360;
  do {
    if ((*(byte *)(lVar1 + 0x6d) & 1) == 0) {
      FUN_009a5798(lVar1,param_1);
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    lVar1 = lVar1 + 0x70;
  } while (uVar2 < 200);
  return 0xff;
}




void FUN_00920a44(uint param_1)

{
  long lVar1;
  
  lVar1 = DAT_02c0a360 + (ulong)param_1 * 0x70;
  *(byte *)(lVar1 + 0x6d) = *(byte *)(lVar1 + 0x6d) & 0xfe;
  return;
}




undefined8 FUN_00920a64(void)

{
  return DAT_02c0a360;
}




undefined8 FUN_00920a70(void)

{
  return DAT_02c0a368;
}




void FUN_00920a7c(int param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  uVar3 = 0;
  while (((*(byte *)(DAT_02c0a360 + lVar2 + 0x6d) & 1) == 0 ||
         (lVar1 = (**(code **)(**(long **)(DAT_02c0a360 + lVar2 + 0x18) + 0x10))(),
         *(int *)(lVar1 + 0x260) != param_1))) {
    uVar3 = uVar3 + 1;
    lVar2 = lVar2 + 0x70;
    if (199 < uVar3) {
      return;
    }
  }
  *(undefined1 *)(DAT_02c0a360 + lVar2 + 0x6c) = *param_2;
  return;
}




void FUN_00920b08(int param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  uVar3 = 0;
  while (((*(byte *)(DAT_02c0a360 + lVar2 + 0x6d) & 1) == 0 ||
         (lVar1 = (**(code **)(**(long **)(DAT_02c0a360 + lVar2 + 0x18) + 0x10))(),
         *(int *)(lVar1 + 0x260) != param_1))) {
    uVar3 = uVar3 + 1;
    lVar2 = lVar2 + 0x70;
    if (199 < uVar3) {
      return;
    }
  }
  FUN_009a5de8(DAT_02c0a360 + lVar2,param_2);
  return;
}




void FUN_00920ba0(uint param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = 200;
  do {
    FUN_009a6168(DAT_02c0a360 + lVar1,param_1 & 1);
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0x70;
  } while (lVar2 != 0);
  return;
}




void FUN_00920bec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  FUN_00920c38(param_1,param_2,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




char * FUN_00920c38(int param_1,long param_2,int *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  
  uVar1 = param_1 - 1;
  if (uVar1 < 0xc) {
    iVar3 = *(int *)(&DAT_01b94a40 + (long)(int)uVar1 * 4);
    pcVar2 = (&PTR_s_hud_minimap_pingicon_avoid_027b9da0)[(int)uVar1];
  }
  else {
    iVar3 = 0;
    pcVar2 = "white_background";
  }
  if (((param_2 != 0) && (iVar3 != -0x7ee3623b)) && (iVar3 != 0)) {
    puVar5 = *(undefined8 **)(param_2 + 0x18);
    piVar4 = (int *)*puVar5;
    while (piVar4 != (int *)0x0) {
      puVar5 = puVar5 + 1;
      if (*piVar4 == iVar3) {
        if (*param_3 < 2) {
          pcVar2 = *(char **)(piVar4 + 2);
        }
        else {
          iVar3 = *param_3 + -2;
          if (iVar3 != 0) {
            pcVar2 = *(char **)(piVar4 + 6);
            goto LAB_00920cf0;
          }
          pcVar2 = *(char **)(piVar4 + 4);
        }
        iVar3 = 1;
LAB_00920cf0:
        *param_3 = iVar3;
        return pcVar2;
      }
      piVar4 = (int *)*puVar5;
    }
  }
  return pcVar2;
}




void FUN_00920cf8(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
  FUN_00920db4();
  DAT_02c0a370 = pvVar1;
  return;
}




void FUN_00920d28(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_02c0a370;
  if (DAT_02c0a370 != (void *)0x0) {
    FUN_00920dc0(DAT_02c0a370);
    operator_delete(pvVar1);
    DAT_02c0a370 = (void *)0x0;
  }
  return;
}




void FUN_00920d60(undefined4 param_1,undefined4 param_2)

{
  if (DAT_02c0a370 != 0) {
    FUN_00920dc4(DAT_02c0a370,param_1,param_2);
    return;
  }
  return;
}




void FUN_00920d80(undefined4 param_1)

{
  if (DAT_02c0a370 != 0) {
    FUN_00920e74(DAT_02c0a370,param_1);
    return;
  }
  return;
}




undefined8 FUN_00920d9c(void)

{
  undefined8 uVar1;
  
  if (DAT_02c0a370 != 0) {
    uVar1 = FUN_00920e6c();
    return uVar1;
  }
  return 0xffffffff;
}




void FUN_00920db4(undefined8 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}




void FUN_00920dc0(void)

{
  return;
}




void FUN_00920dc4(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  
  if (param_3 < param_1[1]) {
    return;
  }
  param_1[1] = param_3;
  if (*param_1 == param_2) {
    return;
  }
  switch(param_2) {
  case 0:
    pcVar1 = "cursor";
    break;
  case 1:
    pcVar1 = "cursor_attack_red";
    break;
  case 2:
    pcVar1 = "cursor_attack_green";
    break;
  case 3:
    pcVar1 = "cursor_focus_red";
    break;
  case 4:
    pcVar1 = "cursor_focus_green";
    break;
  case 5:
    pcVar1 = "cursor_focus_default";
    break;
  default:
    goto switchD_00920e10_default;
  }
  FUN_00e7d678(pcVar1);
switchD_00920e10_default:
  *param_1 = param_2;
  return;
}




undefined4 FUN_00920e6c(undefined4 *param_1)

{
  return *param_1;
}




void FUN_00920e74(long param_1,int param_2)

{
  if (*(int *)(param_1 + 4) <= param_2) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}




int FUN_00920e88(long param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x31810));
  return iVar1;
}




void FUN_00920e98(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  memset((void *)(param_1 + 0x10),0,0x308);
  return;
}




void FUN_00920ebc(long param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *__dest;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  __dest = (undefined8 *)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x10) = __dest;
  switch(param_2) {
  case 0:
    *__dest = *param_3;
    return;
  default:
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  case 4:
  case 6:
    memmove(__dest,param_3,0x100);
    return;
  case 5:
    memmove(__dest,param_3,0x300);
    return;
  }
}




void FUN_00920f1c(undefined8 *param_1)

{
  (*(code *)*param_1)(*(undefined4 *)(param_1 + 1),param_1[2]);
  FUN_00920f54(&DAT_02c0a500,param_1);
  return;
}




int FUN_00920f54(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x31810));
  if (*(int *)(param_1 + 0x31800) == -1) {
    iVar2 = (int)((ulong)(param_2 - param_1) >> 3) * -0x40a57eb5;
    *(int *)(param_1 + 0x31804) = iVar2;
    *(int *)(param_1 + 0x31800) = iVar2;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x31804);
    iVar2 = (int)((ulong)(param_2 - param_1) >> 3) * -0x40a57eb5;
    *(int *)(param_1 + 0x31804) = iVar2;
    *(int *)(param_1 + (ulong)uVar1 * 0x318) = iVar2;
  }
  *(int *)(param_1 + 0x31808) = *(int *)(param_1 + 0x31808) + -1;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x31810));
  return iVar2;
}

