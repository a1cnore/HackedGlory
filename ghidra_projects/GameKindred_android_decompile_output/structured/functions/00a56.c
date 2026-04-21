// functions/00a56 — 19 functions
#include "libGameKindred.h"




void thunk_FUN_00a56280(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x2cf0) * 8) +
                  0xc0);
  FUN_009852ac(auStack_88,iVar1);
  FUN_00ce20fc(auStack_88);
  plVar4 = *(long **)(param_1 + 0x2ce0);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x2ce8) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        uVar6 = FUN_00d6eb50();
        uVar3 = FUN_00d5baac(lVar5);
        uVar6 = FUN_00d6eb3c(uVar6,uVar3);
        FUN_0093d514(uVar6,iVar1);
        lVar8 = *(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x2cf0) * 8);
        if (*(int *)(lVar8 + 0xc0) == 0xfe) {
          pcVar9 = "manual";
        }
        else {
          pcVar9 = (char *)**(undefined8 **)(lVar8 + 0xb8);
        }
        uVar7 = FUN_00ceace8();
        FUN_009061c4(uVar7,uVar6,pcVar9);
        uVar6 = FUN_00d9ebe8(lVar5);
        FUN_00d783e8(uVar6,iVar1);
        if (iVar1 != 0xfe) {
          pcVar9 = "EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR";
          goto LAB_00a56394;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x2ce0) = 0;
      *(undefined4 *)(param_1 + 0x2ce8) = DAT_03214ce8;
    }
  }
  pcVar9 = "EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR_AND_OPEN_SHOP";
LAB_00a56394:
  uVar3 = FUN_00f048a4(pcVar9);
  FUN_00f048e0(auStack_68,uVar3,0);
  FUN_00f04760(param_1,auStack_68,1);
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a56048(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0xfe0);
  if (*(uint *)(param_1 + 0xfe0) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(long *)(*(long *)(param_1 + 0xfe8) + uVar2 * 8) + 0xc0) == param_2) {
        FUN_00a56190(param_1,uVar2 & 0xffffffff);
        uVar1 = (ulong)*(uint *)(param_1 + 0xfe0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}




void FUN_00a560ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a561f8(param_1,param_4,param_5);
  return;
}




void FUN_00a560b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a56190(param_1,param_5);
  FUN_00f0490c(param_4);
  return;
}




void FUN_00a560e0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a567ac(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a56168(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00a56190(param_1,param_3);
  FUN_00f0490c(param_2);
  return;
}




void FUN_00a56190(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2cf0);
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0xfe0))) {
    FUN_00a542f8(*(undefined8 *)(*(long *)(param_1 + 0xfe8) + (ulong)uVar1 * 8),0);
  }
  *(uint *)(param_1 + 0x2cf0) = param_2;
  FUN_00a542f8(*(undefined8 *)(*(long *)(param_1 + 0xfe8) + (ulong)param_2 * 8),1);
  *(uint *)(param_1 + 0x14bc) = *(uint *)(param_1 + 0x14bc) | 4;
  FUN_00a563f4(param_1);
  return;
}




void FUN_00a561f8(undefined8 param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
     (uVar1 = FUN_00f04a94(param_2), (uVar1 & 1) != 0)) {
    FUN_00a56190(param_1,param_3);
    FUN_00a56280(param_1);
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00a56280(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x2cf0) * 8) +
                  0xc0);
  FUN_009852ac(auStack_88,iVar1);
  FUN_00ce20fc(auStack_88);
  plVar4 = *(long **)(param_1 + 0x2ce0);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x2ce8) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        uVar6 = FUN_00d6eb50();
        uVar3 = FUN_00d5baac(lVar5);
        uVar6 = FUN_00d6eb3c(uVar6,uVar3);
        FUN_0093d514(uVar6,iVar1);
        lVar8 = *(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x2cf0) * 8);
        if (*(int *)(lVar8 + 0xc0) == 0xfe) {
          pcVar9 = "manual";
        }
        else {
          pcVar9 = (char *)**(undefined8 **)(lVar8 + 0xb8);
        }
        uVar7 = FUN_00ceace8();
        FUN_009061c4(uVar7,uVar6,pcVar9);
        uVar6 = FUN_00d9ebe8(lVar5);
        FUN_00d783e8(uVar6,iVar1);
        if (iVar1 != 0xfe) {
          pcVar9 = "EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR";
          goto LAB_00a56394;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x2ce0) = 0;
      *(undefined4 *)(param_1 + 0x2ce8) = DAT_03214ce8;
    }
  }
  pcVar9 = "EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR_AND_OPEN_SHOP";
LAB_00a56394:
  uVar3 = FUN_00f048a4(pcVar9);
  FUN_00f048e0(auStack_68,uVar3,0);
  FUN_00f04760(param_1,auStack_68,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a56280(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x2cf0) * 8) +
                  0xc0);
  FUN_009852ac(auStack_88,iVar1);
  FUN_00ce20fc(auStack_88);
  plVar4 = *(long **)(param_1 + 0x2ce0);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x2ce8) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        uVar6 = FUN_00d6eb50();
        uVar3 = FUN_00d5baac(lVar5);
        uVar6 = FUN_00d6eb3c(uVar6,uVar3);
        FUN_0093d514(uVar6,iVar1);
        lVar8 = *(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x2cf0) * 8);
        if (*(int *)(lVar8 + 0xc0) == 0xfe) {
          pcVar9 = "manual";
        }
        else {
          pcVar9 = (char *)**(undefined8 **)(lVar8 + 0xb8);
        }
        uVar7 = FUN_00ceace8();
        FUN_009061c4(uVar7,uVar6,pcVar9);
        uVar6 = FUN_00d9ebe8(lVar5);
        FUN_00d783e8(uVar6,iVar1);
        if (iVar1 != 0xfe) {
          pcVar9 = "EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR";
          goto LAB_00a56394;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x2ce0) = 0;
      *(undefined4 *)(param_1 + 0x2ce8) = DAT_03214ce8;
    }
  }
  pcVar9 = "EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR_AND_OPEN_SHOP";
LAB_00a56394:
  uVar3 = FUN_00f048a4(pcVar9);
  FUN_00f048e0(auStack_68,uVar3,0);
  FUN_00f04760(param_1,auStack_68,1);
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a563f4(long *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar3 = *(long *)(*(long *)(param_1[0x1fd] + (ulong)*(uint *)(param_1 + 0x59e) * 8) + 0xb8);
  if (lVar3 == 0) {
    uVar1 = FUN_00e6ce7c("RECOMMENDED_BUILD_MANUAL",0);
    FUN_00f0d75c(param_1 + 0x298,uVar1);
    uVar1 = FUN_00e6ce7c("RECOMMENDED_BUILD_MANUAL_ADVICE",0);
    FUN_00f0d75c(param_1 + 0x2be,uVar1);
    pcVar2 = "HUD_PATH_SELECTOR_OPEN_SHOP";
  }
  else {
    uVar1 = FUN_00e6ce7c(*(undefined8 *)(lVar3 + 8),0);
    FUN_00f0d75c(param_1 + 0x298,uVar1);
    uVar1 = FUN_00e6ce7c(*(undefined8 *)(lVar3 + 0x20),0);
    FUN_00f0d75c(param_1 + 0x2be,uVar1);
    pcVar2 = "HUD_PATH_SELECTOR_SELECT";
  }
  uVar1 = FUN_00e6ce7c(pcVar2,0);
  FUN_00ab7498(param_1 + 0x2e4,uVar1);
  (**(code **)(*param_1 + 0x150))(param_1);
  fVar4 = (float)(**(code **)(**(long **)(param_1[0x1fd] + (ulong)*(uint *)(param_1 + 0x59e) * 8) +
                             0x48))();
  fVar8 = *(float *)(param_1 + 0x1eb) +
          *(float *)(*(long *)(param_1[0x1fd] + (ulong)*(uint *)(param_1 + 0x59e) * 8) + 0x40);
  fVar5 = (float)FUN_00f13e54(param_1 + 0x108);
  fVar6 = *(float *)(param_1 + 0x144);
  fVar7 = fVar8 + fVar6;
  if (-0.0 <= fVar7) {
    fVar7 = (fVar4 + fVar8 + fVar6) - fVar5;
    fVar4 = 0.0;
    if (fVar7 <= 0.0) goto LAB_00a56574;
    fVar4 = -200.0;
  }
  else {
    fVar4 = 200.0;
  }
  fVar4 = fVar4 - fVar7;
LAB_00a56574:
  if (ABS(fVar4) < 2.0) {
    return;
  }
  param_1 = param_1 + 0x13c;
  fVar7 = (float)FUN_00ed0464(param_1);
  fVar6 = (float)NEON_fminnm(fVar6 + fVar4,0);
  fVar4 = -(fVar7 - fVar5);
  if (-(fVar7 - fVar5) <= fVar6) {
    fVar4 = fVar6;
  }
  uVar1 = FUN_00efef08(fVar4,0,0x3e4ccccd,FUN_00a36794);
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,uVar1);
  return;
}




void FUN_00a56608(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027cb4e0;
  lVar2 = -0x5a0;
  puVar1 = param_1 + 0x2a7;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  puVar1 = param_1 + 499;
  lVar2 = -0x5a0;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f01868(param_1 + 0x14c);
  FUN_00f0d3a4(param_1 + 0x126);
  FUN_00f0d3a4(param_1 + 0x100);
  param_1[0xe2] = &PTR_FUN_028266f0;
  param_1[0xf9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfc);
  FUN_00f13d08(param_1 + 0xe2);
  FUN_00f01868(param_1 + 0xd1);
  param_1[0x3b] = &PTR_FUN_027dc928;
  param_1[0xa6] = &PTR_FUN_02826f38;
  param_1[0xbd] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xc0);
  FUN_00f13d08(param_1 + 0xa6);
  param_1[0x7c] = &PTR_FUN_02826f38;
  param_1[0x93] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x96);
  FUN_00f13d08(param_1 + 0x7c);
  param_1[0x52] = &PTR_FUN_02826f38;
  param_1[0x69] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x6c);
  FUN_00f13d08(param_1 + 0x52);
  FUN_00f13d08(param_1 + 0x3b);
  FUN_00f01868(param_1 + 0x2a);
  FUN_00f01868(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a56788(void *param_1)

{
  FUN_00a56608();
  operator_delete(param_1);
  return;
}




void FUN_00a567ac(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00a5682c(long *param_1)

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
  long lVar11;
  float fVar12;
  float fVar13;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar11 = tpidr_el0;
  local_78 = *(long *)(lVar11 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027cb790;
  plVar1 = param_1 + 0x19;
  *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x32;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x49;
  FUN_00f13ca4(plVar3);
  plVar4 = param_1 + 0x60;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x86;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0xac;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0xd2;
  FUN_00f13ca4(plVar7);
  plVar8 = param_1 + 0xe9;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x10f;
  FUN_00f0e4a8(plVar9);
  FUN_00e70510(param_1 + 0x12d);
  FUN_00e70510(param_1 + 0x12f);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,plVar5,1);
  FUN_00f023ec(plVar3,plVar6,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f023ec(plVar7,plVar8,1);
  *(uint *)((long)param_1 + 0x2cc) = *(uint *)((long)param_1 + 0x2cc) | 4;
  FUN_00f13f08(0x43660000,0x42d80000,plVar3);
  if ((*(float *)(param_1 + 0x53) != 0.5) || (*(float *)((long)param_1 + 0x29c) != 0.0)) {
    param_1[0x53] = 0x3f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Futura_Medium_64_S_02be9d18);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Futura_Medium_40_S_02be9d10);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Futura_Medium_30_S_02be9d08);
  if ((*(float *)(param_1 + 0x68) != 15.0) || (*(float *)((long)param_1 + 0x344) != 0.0)) {
    param_1[0x68] = 0x41700000;
    FUN_0091ada4(plVar4);
  }
  local_a8 = (code *)0x3f800000;
  (**(code **)(param_1[0x60] + 0x28))(plVar4,&local_a8);
  fVar13 = *(float *)((long)param_1 + 0x344);
  fVar12 = fVar13 + 10.0;
  if ((*(float *)(param_1 + 0x8e) != 20.0) ||
     (fVar13 = *(float *)((long)param_1 + 0x474), fVar13 != fVar12)) {
    *(undefined4 *)(param_1 + 0x8e) = 0x41a00000;
    *(float *)((long)param_1 + 0x474) = fVar12;
    FUN_0091ada4(plVar5);
  }
  local_a8 = (code *)0x0;
  (**(code **)(param_1[0x86] + 0x28))(plVar5,&local_a8);
  FUN_00f13e54(plVar3);
  if ((*(float *)(param_1 + 0xb4) != 0.0) || (*(float *)((long)param_1 + 0x5a4) != fVar13)) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(float *)((long)param_1 + 0x5a4) = fVar13;
    FUN_0091ada4(plVar6);
  }
  local_a8 = (code *)0x3f8000003f000000;
  (**(code **)(param_1[0xac] + 0x28))(plVar6,&local_a8);
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(uint *)((long)param_1 + 0x714) = *(uint *)((long)param_1 + 0x714) & 0xfffffffb;
  if ((*(float *)(param_1 + 0xdc) != 0.5) || (*(float *)((long)param_1 + 0x6e4) != 0.0)) {
    param_1[0xdc] = 0x3f000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0d378(plVar8,PTR_s_build___Fonts_Futura_Medium_30_S_02be9d08);
  FUN_00f0e540(plVar9,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar9,"hud_shop_while_dead_button");
  local_80 = DAT_03210f58;
  local_a8 = FUN_00a56d34;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0xd3,&local_a8);
  local_a8 = FUN_00a56d34;
  local_80 = DAT_03210f84;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0xd3,&local_a8);
  *(uint *)((long)param_1 + 0x714) = *(uint *)((long)param_1 + 0x714) | 0x10;
  FUN_00f13f08(0x43660000,0x42580000,plVar7);
  if ((*(float *)(param_1 + 0x119) != *(float *)(param_1 + 0xdc)) ||
     (*(float *)((long)param_1 + 0x8cc) != *(float *)((long)param_1 + 0x6e4))) {
    *(float *)(param_1 + 0x119) = *(float *)(param_1 + 0xdc);
    *(float *)((long)param_1 + 0x8cc) = *(float *)((long)param_1 + 0x6e4);
    FUN_0091ada4(plVar9);
  }
  if ((*(float *)(param_1 + 0x117) != 0.0) || (*(float *)((long)param_1 + 0x8bc) != 0.0)) {
    param_1[0x117] = 0;
    FUN_0091ada4(plVar9);
  }
  if ((*(float *)(param_1 + 0xf3) != *(float *)(param_1 + 0xdc)) ||
     (*(float *)((long)param_1 + 0x79c) != *(float *)((long)param_1 + 0x6e4))) {
    *(float *)(param_1 + 0xf3) = *(float *)(param_1 + 0xdc);
    *(float *)((long)param_1 + 0x79c) = *(float *)((long)param_1 + 0x6e4);
    FUN_0091ada4(plVar8);
  }
  if ((*(float *)(param_1 + 0xf1) != 0.0) || (*(float *)((long)param_1 + 0x78c) != 3.0)) {
    param_1[0xf1] = 0x4040000000000000;
    FUN_0091ada4(plVar8);
  }
  uVar10 = *(uint *)((long)param_1 + 0x214);
  if ((uVar10 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x214) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x7280;
    FUN_0091ada4(plVar2);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xfffffff7;
  if (*(long *)(lVar11 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a56d34(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,0xffffffff,0);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a56da4(long param_1,long param_2)

{
  *(long *)(param_1 + 0xb8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_00a56db8(long param_1)

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
        fVar5 = 0.0;
        for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
          if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02c7bf28) {
            fVar5 = (float)FUN_00d79b68();
            bVar1 = false;
            if (0.0 < fVar5) {
              if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
                uVar4 = FUN_00e6ce7c("HUD_RESPAWN_MSG",0);
                FUN_00f0d75c(param_1 + 0x560,uVar4);
                uVar4 = FUN_00e6ce7c("HUD_RESPAWN_SHOP",0);
                FUN_00f0d75c(param_1 + 0x748,uVar4);
                if (*(char *)(param_1 + 0x990) != '\0') {
                  *(uint *)(param_1 + 0x714) = *(uint *)(param_1 + 0x714) | 4;
                }
                FUN_00b89d24(0x3dcccccd,param_1 + 200,1,4,0);
                goto LAB_00a56f7c;
              }
              bVar1 = true;
            }
            if (0.0 < fVar5) goto LAB_00a56f78;
            goto LAB_00a56e2c;
          }
        }
        bVar1 = false;
LAB_00a56e2c:
        if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
LAB_00a56f78:
          if (bVar1) goto LAB_00a56f7c;
        }
        else {
          FUN_00f0d75c(param_1 + 0x300,&DAT_03210450);
          FUN_00f0d75c(param_1 + 0x430,&DAT_03210450);
          uVar4 = FUN_00e6ce7c("HUD_RESPAWN_PREPARE_MSG",0);
          FUN_00f0d75c(param_1 + 0x560,uVar4);
          if (*(char *)(param_1 + 0x990) != '\0') {
            *(uint *)(param_1 + 0x714) = *(uint *)(param_1 + 0x714) & 0xfffffffb;
          }
          FUN_00b89d24(0x40a00000,param_1 + 200,0,4,0);
          if (bVar1) {
LAB_00a56f7c:
            FUN_00e70e18(param_1 + 0x968,"%02d",(int)fVar5);
            FUN_00e70e18(param_1 + 0x978,"%02d",(int)((fVar5 - (float)(int)fVar5) * 100.0));
            FUN_00f0d75c(param_1 + 0x300,param_1 + 0x968);
            FUN_00f0d75c(param_1 + 0x430,param_1 + 0x978);
            return;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a56ff0(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 200,param_2 & 1,param_3,param_4 & 1);
  return;
}

