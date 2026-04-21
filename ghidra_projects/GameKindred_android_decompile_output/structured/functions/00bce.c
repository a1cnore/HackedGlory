// functions/00bce — 41 functions
#include "libGameKindred.h"




void FUN_00bce038(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_2 / uVar2;
  }
  FUN_009e0a4c(*(undefined8 *)(param_1 + 0x13c8),
               *(undefined1 *)(param_1 + (ulong)(param_2 - uVar1 * uVar2) * 0x28 + 0x48),
               *(undefined4 *)(param_1 + 0x1400));
  FUN_00ceace8();
  FUN_009086dc();
  return;
}




void FUN_00bce08c(long *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00c243f0(param_1[1]);
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = param_2 / uVar4;
  }
  uVar2 = param_2 - uVar2 * uVar4;
  thunk_FUN_00e7051c(&local_58,&DAT_03210450);
  FUN_00e705a0(&local_58,(long)param_1 + (long)(int)param_2 * 0xa6 + 0x301);
  if (*(uint *)((long)param_1 + 0x141c) == uVar2) {
    cVar1 = *(char *)((long)param_1 + (ulong)uVar2 * 0x28 + 0x4b);
    if (cVar1 == '\0') {
      FUN_00bc50d4(param_1[0x27d],&local_58);
    }
    else {
      (**(code **)(*param_1 + 0x20))(param_1,param_2);
      FUN_00bc50cc(param_1[0x27d],&local_58);
    }
    uVar5 = FUN_00ceace8();
    FUN_009089cc(uVar5,cVar1 != '\0');
    FUN_00bd589c(param_1 + (ulong)uVar2 * 5 + 5,0,0);
    *(undefined4 *)((long)param_1 + 0x141c) = 0xffffffff;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bce1a4(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_2 / uVar2;
  }
  uVar3 = (ulong)(param_2 - uVar1 * uVar2);
  if ((*(char *)(param_1 + uVar3 * 0x28 + 0x4a) != '\0') && (*(char *)(param_1 + 0x1297) != '\0')) {
    FUN_009e0a58(*(undefined8 *)(param_1 + 0x13c8),*(undefined4 *)(param_1 + 0x1400),
                 *(undefined1 *)(param_1 + uVar3 * 0x28 + 0x48));
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_trade_want.mp3",0,0);
  }
  *(undefined4 *)(param_1 + 0x141c) = 0xffffffff;
  return;
}




void FUN_00bce228(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x1414) != 0xffff) {
    uVar2 = FUN_00d6eb50();
    uVar2 = FUN_00d6eb3c(uVar2,*(undefined4 *)(param_1 + 0x1414));
    FUN_008fa54c(local_40,uVar2);
    FUN_008fa54c(local_58,&DAT_01e277f2);
    FUN_00cbc1d0(local_40,local_58,1,&DAT_03218f18);
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bce2e4(long param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 0x1297) != '\0') {
    puVar1 = (undefined8 *)FUN_00ce9ba0(param_1 + 0x1418);
    FUN_00bd6418(param_1 + 0x1b8,1);
    FUN_00bd615c(param_1 + 0x1b8,*puVar1);
    return;
  }
  return;
}




void FUN_00bce340(long param_1)

{
  FUN_009e0cc8(*(undefined8 *)(param_1 + 0x13c8));
  return;
}




void FUN_00bce348(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  code **ppcVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  float fVar11;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_3 + 0x13f8) == 0) {
    cVar2 = FUN_009e0d70(*(undefined8 *)(param_3 + 0x13c8));
    if (*(long *)(param_3 + 0x20) == 0) {
      if (*(int *)(param_3 + 0x18) == 4) {
        ppcVar6 = (code **)&DAT_03218f18;
        uVar3 = 0;
      }
      else {
        if (*(int *)(param_3 + 0x18) == 3) {
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
        }
        ppcVar6 = (code **)&DAT_03218f18;
      }
    }
    else {
      puVar4 = (undefined8 *)FUN_00965ecc(*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
      uVar9 = *puVar4;
      plVar7 = *(long **)(*(long *)(param_3 + 0x20) + 8);
      fVar11 = (float)(**(code **)(*plVar7 + 0x48))(plVar7);
      lVar5 = FUN_00965ecc(*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
      local_78 = (code *)CONCAT44(param_2 * (float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) *
                                  0.5 + (float)((ulong)uVar9 >> 0x20),
                                  fVar11 * (float)*(undefined8 *)(lVar5 + 0x10) * 0.5 + (float)uVar9
                                 );
      ppcVar6 = &local_78;
      uVar3 = 2;
      if (*(int *)(param_3 + 0x18) != 3) {
        uVar3 = *(int *)(param_3 + 0x18) != 4;
      }
    }
    lVar5 = FUN_00cbe1bc(uVar3,cVar2 == '\x01',1,ppcVar6);
    *(long *)(param_3 + 0x13f8) = lVar5;
    local_50 = DAT_0313c888;
    local_78 = FUN_00bce604;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
    lStack_70 = param_3;
    FUN_009693a0(lVar5 + 8,&local_78);
    local_50 = DAT_0313c88c;
    local_78 = FUN_00bce60c;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
    lStack_70 = param_3;
    FUN_009693a0(*(long *)(param_3 + 0x13f8) + 8,&local_78);
    local_50 = DAT_03210c2c;
    local_78 = FUN_00bce63c;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
    lStack_70 = param_3;
    FUN_009693a0(*(long *)(param_3 + 0x13f8) + 8,&local_78);
    FUN_00cbe310(*(undefined8 *)(param_3 + 0x13f8),*(char *)(param_3 + 0x1338) != '\0');
    FUN_00cbe2dc(*(undefined8 *)(param_3 + 0x13f8),*(undefined4 *)(param_3 + 0x1408),
                 *(undefined4 *)(param_3 + 0x140c));
    uVar8 = 0;
    puVar10 = (undefined4 *)(param_3 + 0x1374);
    do {
      if (puVar10[-1] != 0xffff) {
        FUN_00cbe320(*(undefined8 *)(param_3 + 0x13f8),uVar8 & 0xffffffff);
        FUN_00cbe32c(*(undefined8 *)(param_3 + 0x13f8),uVar8 & 0xffffffff,*puVar10);
      }
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar8 != 7);
    FUN_00bcca98(param_3);
    if (*(char *)(param_3 + 0x1422) == '\0') {
      FUN_00aa132c("VO_Vainglory_PositionBuildpath");
    }
    *(char *)(param_3 + 0x1422) = '\x01';
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bce604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00bcdb28(param_1,param_4);
  return;
}




void FUN_00bce60c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_009e0cb4(*(undefined8 *)(param_1 + 0x13c8),uVar1);
  return;
}




void FUN_00bce63c(long param_1)

{
  *(undefined8 *)(param_1 + 0x13f8) = 0;
  return;
}




void FUN_00bce644(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00bce644(param_1,*param_2);
    FUN_00bce644(param_1,param_2[1]);
    if ((void *)param_2[6] != (void *)0x0) {
      operator_delete__((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00bce69c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00bce69c(param_1,*param_2);
    FUN_00bce69c(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00bce6e8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ec488;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bce72c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbce730);
  (*pcVar1)();
}




void FUN_00bce730(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ec4b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bce774(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbce778);
  (*pcVar1)();
}




void FUN_00bce778(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00bce80c(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00bce80c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
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




void FUN_00bce898(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03133754,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bce908(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00bce980(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2);
    uVar3 = (ulong)*param_1;
    puVar2 = *(undefined1 **)(param_1 + 2);
    puVar4 = puVar1;
    puVar5 = puVar2;
    if (*param_1 != 0) {
      do {
        uVar3 = uVar3 - 1;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined1 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined1 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined1  [16] FUN_00bce9f8(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)((long)puVar3 + 0x1c)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_00bcea70;
      }
      if (*param_2 <= *(uint *)((long)puVar3 + 0x1c)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_00bcea70:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x28);
    *(undefined8 *)((long)pvVar5 + 0x1c) = *param_3;
    FUN_00bceac4(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




void FUN_00bceac4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined1  [16] FUN_00bceb18(long param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar4 = (undefined8 *)(param_1 + 8);
  puVar5 = puVar4;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar5 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar4 = puVar3, *param_2 < *(int *)(puVar4 + 4)) {
        puVar3 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_00bceb90;
      }
      if (*param_2 <= *(int *)(puVar4 + 4)) break;
      puVar5 = puVar4 + 1;
      puVar3 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
LAB_00bceb90:
  pvVar6 = (void *)*puVar5;
  bVar1 = pvVar6 == (void *)0x0;
  if (bVar1) {
    pvVar6 = operator_new(0x38);
    uVar2 = *(undefined4 *)*param_4;
    *(undefined8 *)((long)pvVar6 + 0x28) = 0;
    *(undefined8 *)((long)pvVar6 + 0x30) = 0;
    *(undefined4 *)((long)pvVar6 + 0x20) = uVar2;
    FUN_00bcebec(param_1,puVar4,puVar5,pvVar6);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar6;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_00bcebec(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_00bcec40(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027ec5b0;
  pvVar2 = operator_new(0xc20);
  FUN_00c25024();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x630) = param_1;
  FUN_00bcf3c8(param_1 + 2);
  iVar7 = 0;
  *param_1 = &PTR_FUN_027ec538;
  param_1[2] = &PTR_FUN_027ec570;
  do {
    uVar8 = param_1[1];
    uVar3 = FUN_009e5158(iVar7);
    uVar4 = FUN_009e5170(iVar7);
    FUN_00c2528c(uVar8,uVar3,uVar4);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0xf);
  lVar5 = FUN_009e514c();
  if (lVar5 != 0) {
    FUN_009e514c();
    FUN_009e54ac();
    lVar5 = FUN_009e514c();
    local_68 = 0;
    pcStack_50 = thunk_FUN_00bced60;
    puStack_60 = param_1;
    local_58 = param_1;
    FUN_00bcefe0(lVar5 + 0x18,&local_68);
    FUN_009e514c();
    uVar6 = FUN_009e54a4();
    if ((uVar6 & 1) != 0) {
      uVar3 = FUN_009e514c();
      FUN_00bced60(param_1,uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bced60(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = 0;
  do {
    uVar2 = FUN_009e5158(iVar4);
    uVar1 = FUN_009e54f4(param_2,uVar2);
    FUN_00c25534(*(undefined8 *)(param_1 + 8),uVar2,uVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xf);
  uVar3 = FUN_009e54d0(param_2);
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_009e54d8(param_2);
    FUN_00c2567c(uVar5,uVar2);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_009e54d8(param_2);
    uVar1 = FUN_009e54f4(param_2,uVar2);
    FUN_00c256f0(uVar5,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00bcee14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x100))();
  return;
}




void FUN_00bcee18(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027ec538;
  param_1[2] = &PTR_FUN_027ec570;
  lVar1 = FUN_009e514c();
  if (lVar1 != 0) {
    lVar2 = FUN_009e514c();
    lVar4 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
    lVar1 = *(long *)(lVar2 + 0x20);
    do {
      lVar3 = lVar1;
      if (lVar4 == 0) goto LAB_00bcee7c;
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
    } while (*(undefined8 **)(lVar3 + 8) != param_1);
    FUN_00bcf100((uint *)(lVar2 + 0x18),lVar3);
  }
LAB_00bcee7c:
  FUN_00bca0cc(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ec5b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bceeb8(long param_1)

{
  FUN_00bcee18(param_1 + -0x10);
  return;
}




void FUN_00bceec0(void *param_1)

{
  FUN_00bcee18();
  operator_delete(param_1);
  return;
}




void FUN_00bceee4(long param_1)

{
  FUN_00bcee18((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bcef0c(long param_1)

{
  FUN_00bcf3f4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00bcef38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x100))();
  return;
}




void FUN_00bcef3c(long param_1)

{
  FUN_00bcf3f4();
                    /* WARNING: Could not recover jumptable at 0x00bcef64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -8) + 0x100))();
  return;
}




void FUN_00bcef68(void)

{
  FUN_009e514c();
  FUN_009e54c8();
  FUN_009e514c();
  FUN_009e54ac();
  return;
}




undefined8 FUN_00bcef84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bcef8c(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_00bcef94(void)

{
  return;
}




void FUN_00bcef98(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ec5b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bcefdc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbcefe0);
  (*pcVar1)();
}




void FUN_00bcefe0(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00bcf074(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void thunk_FUN_00bced60(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = 0;
  do {
    uVar2 = FUN_009e5158(iVar4);
    uVar1 = FUN_009e54f4(param_2,uVar2);
    FUN_00c25534(*(undefined8 *)(param_1 + 8),uVar2,uVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xf);
  uVar3 = FUN_009e54d0(param_2);
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_009e54d8(param_2);
    FUN_00c2567c(uVar5,uVar2);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_009e54d8(param_2);
    uVar1 = FUN_009e54f4(param_2,uVar2);
    FUN_00c256f0(uVar5,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00bcee14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x100))();
  return;
}

