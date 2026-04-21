// functions/00d3f — 43 functions
#include "libGameKindred.h"




void FUN_00d3f028(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00d5bae0(param_2);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d3f058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined4 *)(param_1 + 0x30));
    return;
  }
  return;
}




void FUN_00d3f068(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281abe8;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00d3f09c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00d3f0a4(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_00d66d28(param_2);
  plVar1 = (long *)FUN_00d5bae0();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d3f0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x80))
              (plVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}




void FUN_00d3f0e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(param_2);
  plVar3 = (long *)FUN_00d5bae0();
  if (plVar3 != (long *)0x0) {
    thunk_FUN_00d9ff34(local_48,*(undefined8 *)(param_1 + 0x10));
    FUN_00d9ff84(local_40,local_48[0]);
    thunk_FUN_00d9ff34(local_58,*(undefined8 *)(param_1 + 0x18));
    FUN_00d9ff84(local_50,local_58[0]);
    uVar4 = (**(code **)(*plVar3 + 0x98))(plVar3,local_40[0],local_50[0]);
    if ((uVar4 & 1) != 0) {
      plVar3 = (long *)FUN_00d5bae0(uVar2);
      (**(code **)(*plVar3 + 0x88))(plVar3,*(undefined8 *)(param_1 + 0x10));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3f1b0(undefined8 param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d66d28();
  lVar6 = *(long *)(lVar4 + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  iVar2 = FUN_00d5359c(lVar6);
  if (iVar2 != 0) {
    uVar7 = 0;
    do {
      if ((param_2 != uVar7) && (uVar5 = FUN_00d54528(lVar6,uVar7), (uVar5 & 1) != 0)) {
        FUN_00d05dec(auStack_78,*(undefined4 *)(lVar4 + 0x260),uVar7,param_2,0);
        FUN_00ce20fc(auStack_78);
      }
      uVar7 = uVar7 + 1;
      uVar3 = FUN_00d5359c(lVar6);
    } while (uVar7 < uVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3f290(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  lVar3 = FUN_00d66d28();
  lVar5 = *(long *)(lVar3 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  iVar1 = FUN_00d5359c(lVar5);
  if (iVar1 != 0) {
    uVar6 = 0;
    do {
      uVar4 = FUN_00d54528(lVar5,uVar6);
      if ((uVar4 & 1) != 0) {
        FUN_00d5a834(lVar3,uVar6);
      }
      uVar6 = uVar6 + 1;
      uVar2 = FUN_00d5359c(lVar5);
    } while (uVar6 < uVar2);
  }
  return;
}




void FUN_00d3f320(undefined8 *param_1)

{
  FUN_00d468c8();
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_0281ac38;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  return;
}




void FUN_00d3f364(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d3f36c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d3f374(undefined4 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x24) = 1;
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}




void FUN_00d3f384(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_80 [56];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00d66d28(param_2);
    lVar5 = *(long *)(lVar4 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
    }
    else {
      uVar2 = FUN_00d5401c(lVar5);
    }
    FUN_00d3f1b0(param_2,uVar2);
    if (*(char *)(param_1 + 0x24) == '\0') {
      fVar6 = (float)FUN_00d53b5c(lVar5,uVar2);
    }
    else {
      fVar6 = *(float *)(param_1 + 0x20);
    }
    lVar5 = *(long *)(lVar4 + 0x40);
    fVar7 = (*(float *)(lVar5 + 0x1e0) + 1.0) *
            (*(float *)(lVar5 + 0x78) + *(float *)(lVar5 + 300) * (*(float *)(lVar5 + 0x294) + 1.0))
    ;
    if (DAT_031a90e0 <= fVar7) {
      fVar7 = DAT_031a90e0;
    }
    fVar8 = DAT_031a9020;
    if (DAT_031a9020 <= fVar7) {
      fVar8 = fVar7;
    }
    *(float *)(param_1 + 0x1c) = fVar6 - fVar8;
    FUN_00d041e4(auStack_80,*(undefined4 *)(lVar4 + 0x260),0x10,1,0,0xffffffff);
    FUN_00ce20fc(auStack_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3f4e4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d3f290(param_2);
    lVar3 = FUN_00d66d28(param_2);
    FUN_00d041e4(-*(float *)(param_1 + 0x1c),auStack_70,*(undefined4 *)(lVar3 + 0x260),0x10,1,0,
                 0xffffffff);
    FUN_00ce20fc(auStack_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3f580(undefined8 *param_1)

{
  FUN_00d468c8();
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *param_1 = &PTR_FUN_0281ac88;
  param_1[4] = 0;
  return;
}




void FUN_00d3f5c4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d3f5cc(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d3f5d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00d3f5dc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d3f5e4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d3f5ec(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_58 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d66d28(param_2);
    lVar6 = *(long *)(lVar5 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      iVar3 = (int)*(char *)(param_1 + 0x18);
    }
    else {
      iVar3 = FUN_00d5401c(lVar6);
    }
    lVar6 = FUN_00d53914(lVar6,iVar3);
    uVar1 = *(uint *)(lVar6 + 0x80);
    if (uVar1 < 3) {
      local_58[0] = 0;
      (**(code **)(param_1 + 0x20))(param_2,local_58);
      if ((*(code **)(param_1 + 0x30) == (code *)0x0) ||
         (uVar4 = (**(code **)(param_1 + 0x30))(param_2,local_58[0],0), (uVar4 & 1) != 0)) {
        FUN_008ff6ec(lVar5,iVar3,local_58[0]);
      }
    }
    else if (uVar1 == 3) {
      (**(code **)(param_1 + 0x28))(param_2,local_58);
      if ((*(code **)(param_1 + 0x30) == (code *)0x0) ||
         (uVar4 = (**(code **)(param_1 + 0x30))(param_2,0,local_58), (uVar4 & 1) != 0)) {
        FUN_008ff6f4(lVar5,iVar3,local_58);
      }
    }
    else if ((uVar1 == 4) &&
            ((*(code **)(param_1 + 0x30) == (code *)0x0 ||
             (uVar4 = (**(code **)(param_1 + 0x30))(param_2,0,0), (uVar4 & 1) != 0)))) {
      FUN_008ff6e4(lVar5,iVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3f76c(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6a1f8();
  *param_2 = uVar1;
  param_2[1] = 0;
  uVar1 = FUN_00d6a25c(param_1);
  param_2[2] = uVar1;
  return;
}




void FUN_00d3f7a4(undefined8 *param_1)

{
  FUN_00d47be0();
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_0281acc8;
  param_1[0x10] = 0;
  return;
}




void FUN_00d3f7dc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return;
}




void FUN_00d3f7e4(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x80) = param_2;
  return;
}




void FUN_00d3f7f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_2 + 0x78)) {
  case 1:
    uVar5 = (**(code **)(param_2 + 0x80))(param_3);
    break;
  case 2:
    iVar3 = FUN_00d67b84(param_3);
    iVar4 = FUN_00cedce4();
    if (iVar3 != iVar4) {
      return;
    }
    goto LAB_00d3f8bc;
  case 3:
    FUN_00cedce4();
    cVar1 = FUN_00cecb68();
    lVar6 = FUN_00d66d28(param_3);
    cVar2 = FUN_00cecb68(*(undefined4 *)(lVar6 + 0x260));
    if (cVar1 != cVar2) {
      return;
    }
    goto LAB_00d3f8bc;
  case 4:
    FUN_00d66d28(param_3);
    uVar5 = FUN_009bc0fc();
    break;
  default:
    goto switchD_00d3f850_default;
  }
  if ((uVar5 & 1) == 0) {
switchD_00d3f850_default:
    return;
  }
LAB_00d3f8bc:
  FUN_00d47c8c(param_1,param_2,param_3);
  return;
}




void FUN_00d3f8dc(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281ad08;
  *(undefined4 *)(param_1 + 2) = 0xffff;
  return;
}




void FUN_00d3f914(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d3f91c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d66d28(param_2);
    FUN_00d06f7c(auStack_60,*(undefined4 *)(lVar3 + 0x260),*(undefined4 *)(param_1 + 0x10),
                 0xffffffff);
    FUN_00ce20fc(auStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3f9a0(undefined8 *param_1)

{
  FUN_00d468c8();
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_0281ad48;
  param_1[2] = 0;
  return;
}




void FUN_00d3f9e0(long param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(byte *)(param_1 + 0x1c) = param_3 & 1;
  return;
}




void FUN_00d3f9f0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d3f9f8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = FUN_00d66d28(param_2);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2,param_1 + 0x18);
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    FUN_00d5a6f4();
    return;
  }
  FUN_00d5a6dc(uVar2,*(undefined4 *)(param_1 + 0x18));
  return;
}




void FUN_00d3fa78(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_thunk_FUN_00d468dc_0281ad88;
  FUN_00d4d9e8(param_1 + 2);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(byte *)((long)param_1 + 0x94) = *(byte *)((long)param_1 + 0x94) & 0xfc | 2;
  return;
}




long FUN_00d3fad8(long param_1,long param_2,byte param_3,uint param_4)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 8);
  memcpy((void *)(param_1 + 0x24),(void *)(param_2 + 0x14),0x47);
  if ((param_4 & 1) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_00ceab48();
    bVar1 = bVar1 & 1;
  }
  *(byte *)(param_1 + 0x94) = bVar1 | (param_3 & 1) << 1 | *(byte *)(param_1 + 0x94) & 0xfc;
  return param_1;
}




void FUN_00d3fb50(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0x90) = param_3;
  return;
}




void FUN_00d3fb5c(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x78);
  if ((*plVar1 != 0) && (plVar1 = (long *)(param_1 + 0x80), *plVar1 != 0)) {
    return;
  }
  *plVar1 = param_2;
  return;
}




void FUN_00d3fb80(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return;
}




void FUN_00d3fb88(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  uint local_724;
  undefined1 auStack_720 [16];
  undefined **local_710;
  undefined8 uStack_708;
  undefined1 local_700;
  undefined1 auStack_6fc [76];
  long local_6b0 [202];
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) goto LAB_00d3fdcc;
  local_700 = *(undefined1 *)(param_1 + 0x20);
  uStack_708 = *(undefined8 *)(param_1 + 0x18);
  local_710 = &PTR_FUN_0281d898;
  memcpy(auStack_6fc,(void *)(param_1 + 0x24),0x47);
  lVar4 = FUN_00d66d28(param_2);
  FUN_00d55794(lVar4,auStack_720,0);
  FUN_00d4db40(&local_710,lVar4);
  if ((*(byte *)(param_1 + 0x94) >> 1 & 1) == 0) {
    uVar5 = FUN_00d4ddd8(&local_710);
    if ((uVar5 & 1) != 0) {
      fVar9 = (float)FUN_00d4dde8(&local_710);
      goto LAB_00d3fc90;
    }
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x40);
    fVar10 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
             (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0)
             );
    if (DAT_031a90e0 <= fVar10) {
      fVar10 = DAT_031a90e0;
    }
    fVar9 = DAT_031a9020;
    if (DAT_031a9020 <= fVar10) {
      fVar9 = fVar10;
    }
LAB_00d3fc90:
    FUN_00d4db48(fVar9,&local_710,auStack_720);
  }
  uVar2 = FUN_00d9e840(&local_710,local_6b0,200,0);
  local_724 = uVar2;
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))(param_2,&local_724);
  }
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      uVar3 = FUN_00d67bf4(param_2);
      if (local_724 <= uVar3) break;
      if (((*(long *)(param_1 + 0x70) == 0) && (*(long *)(param_1 + 0x78) == 0)) &&
         (*(long *)(param_1 + 0x80) == 0)) {
        plVar8 = local_6b0 + uVar5;
LAB_00d3fdb0:
        FUN_00d67b8c(param_2,*plVar8);
      }
      else {
        plVar8 = local_6b0 + uVar5;
        lVar4 = *(long *)(*plVar8 + 0x18);
        while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
          lVar4 = *(long *)(lVar4 + 0x20);
        }
        if (*(long *)(param_1 + 0x70) == 0) {
LAB_00d3fd80:
          if (((*(long *)(param_1 + 0x78) == 0) || (uVar6 = FUN_00d6c0bc(lVar4), (uVar6 & 1) == 0))
             && ((*(long *)(param_1 + 0x80) == 0 || (uVar6 = FUN_00d6c0bc(lVar4), (uVar6 & 1) == 0))
                )) goto LAB_00d3fdb0;
        }
        else if (*(int *)(param_1 + 0x90) == -1) {
LAB_00d3fd54:
          uVar6 = FUN_00d6c0bc(lVar4,*(undefined8 *)(param_1 + 0x70));
          if ((uVar6 & 1) != 0) goto LAB_00d3fd80;
        }
        else {
          uVar6 = FUN_00d6c130(lVar4);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(param_1 + 0x90) != -1) goto LAB_00d3fd80;
            goto LAB_00d3fd54;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
LAB_00d3fdcc:
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3fe00(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_thunk_FUN_00d468dc_0281adc8;
  FUN_00d4d9e8(param_1 + 2);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((long)param_1 + 0x7d) = 0;
  return;
}




long FUN_00d3fe40(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 )

{
  byte bVar1;
  
  if ((param_5 & 1) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_00ceab48();
    bVar1 = bVar1 & 1;
  }
  *(byte *)(param_2 + 0x84) = bVar1;
  *(undefined8 *)(param_2 + 0x70) = param_3;
  *(undefined8 *)(param_2 + 0x78) = param_4;
  *(undefined4 *)(param_2 + 0x80) = param_1;
  return param_2;
}




void FUN_00d3fe9c(long param_1,long param_2)

{
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 8);
  memcpy((void *)(param_1 + 0x24),(void *)(param_2 + 0x14),0x47);
  return;
}




void FUN_00d3fec0(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 local_738;
  undefined4 local_730;
  undefined8 local_72c;
  undefined4 local_724;
  undefined8 local_720;
  undefined4 local_718;
  undefined8 local_710;
  undefined4 local_708;
  undefined1 auStack_700 [120];
  undefined8 auStack_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x84) != '\0') {
    pcVar5 = *(code **)(param_1 + 0x70);
    uVar3 = FUN_00d66d28(param_2);
    (*pcVar5)(param_2,uVar3,&local_710);
    pcVar5 = *(code **)(param_1 + 0x78);
    uVar3 = FUN_00d66d28(param_2);
    (*pcVar5)(param_2,uVar3,&local_720);
    local_730 = local_708;
    local_738 = local_710;
    local_72c = local_720;
    local_724 = local_718;
    FUN_00d4e61c(auStack_700,param_1 + 0x10);
    FUN_00d4e838(*(undefined4 *)(param_1 + 0x80),auStack_700,&local_738);
    uVar3 = FUN_00d66d28(param_2);
    FUN_00d4db40(auStack_700,uVar3);
    uVar2 = FUN_00d9e840(auStack_700,auStack_688,200,0);
    if (uVar2 != 0) {
      uVar4 = (ulong)uVar2;
      puVar6 = auStack_688;
      do {
        FUN_00d67b8c(param_2,*puVar6);
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar4 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3ffdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(param_2);
  FUN_00d67b8c(param_2,uVar1);
  return;
}

