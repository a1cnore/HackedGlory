// functions/00efb — 47 functions
#include "libGameKindred.h"




void FUN_00efb000(undefined4 param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x70);
  FUN_00e7bdec(puVar1,4);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = param_3;
  *(undefined4 *)(puVar1 + 0xb) = param_1;
  *puVar1 = &PTR_FUN_028246d8;
  *(byte *)(puVar1 + 0xd) = param_2 & 1;
  FUN_00e7bd4c(puVar1);
  FUN_00e7be08(puVar1);
  return;
}




undefined8 FUN_00efb078(void)

{
  return 2;
}




void FUN_00efb080(undefined8 *param_1,undefined8 param_2,undefined4 param_3,byte param_4,
                 undefined8 param_5)

{
  FUN_00e7bdec();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_5;
  *(undefined4 *)(param_1 + 0xb) = param_3;
  *param_1 = &PTR_FUN_028246d8;
  *(byte *)(param_1 + 0xd) = param_4 & 1;
  return;
}




void FUN_00efb0dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028246d8;
  return;
}




void FUN_00efb0f4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  puVar3 = operator_new(0x30);
  *puVar3 = 0;
  puVar3[10] = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined4 **)(param_1 + 0x28) = puVar3;
  if (*(uint *)(param_1 + 0x58) == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = operator_new__((ulong)*(uint *)(param_1 + 0x58));
  }
  *(void **)(param_1 + 0x60) = pvVar4;
  FUN_0199daf4();
  FUN_0199bda8(*(undefined8 *)(param_1 + 0x28));
  FUN_00f2e1b4();
  if (*(code **)(param_1 + 0x50) == (code *)0x0) {
    uVar2 = 2;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x50))();
    uVar6 = 1;
    if (iVar1 != 1) {
      uVar6 = 2;
    }
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = uVar6;
    }
  }
  FUN_019978ac(uVar2);
  FUN_00f00064(*(undefined8 *)(param_1 + 0x28));
  FUN_0198fecc();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_01997b0c();
  FUN_0198aa10(uVar7,uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_01997b0c();
  FUN_00f34154(uVar7,uVar5,*(undefined1 *)(param_1 + 0x69));
  FUN_00f29e60(*(undefined8 *)(param_1 + 0x28),1);
  FUN_00ecaedc(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x58),
               *(undefined1 *)(param_1 + 0x68));
  thunk_FUN_00efc130();
  return;
}




void FUN_00efb1d8(long param_1)

{
  void *pvVar1;
  long lVar2;
  
  thunk_FUN_00efc160();
  FUN_00ecaf60();
  FUN_00f29e6c();
  FUN_00f341e8();
  FUN_0198aab4();
  FUN_0198ff00();
  FUN_00f000fc();
  FUN_01997a24();
  FUN_00f2e218();
  FUN_0199bde8();
  FUN_0199dc80();
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x60));
  }
  pvVar1 = *(void **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (pvVar1 != (void *)0x0) {
    lVar2 = 0x18;
    do {
      FUN_00efb558((long)pvVar1 + lVar2,0);
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != -8);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_00efb268(void)

{
  FUN_0198ab6c();
  FUN_0198ad7c();
  return;
}




void FUN_00efb27c(void)

{
  return;
}




undefined8 FUN_00efb280(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  uVar1 = FUN_00e7bda0(2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00e7bda0(1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  plVar2 = (long *)FUN_00efc8e0();
  pvVar3 = operator_new(0x10);
  uVar1 = FUN_01997b0c();
  FUN_00efb7cc(pvVar3,uVar1,plVar2);
  *(void **)(param_1 + 0x30) = pvVar3;
  pvVar3 = operator_new(0x10);
  uVar1 = FUN_01997b00();
  FUN_00efbca0(pvVar3,uVar1,plVar2);
  *(void **)(param_1 + 0x38) = pvVar3;
  pvVar3 = operator_new(0x10);
  uVar1 = FUN_0198ab6c();
  FUN_00efc0ec(pvVar3,uVar1,plVar2);
  *(void **)(param_1 + 0x40) = pvVar3;
  pvVar3 = operator_new(0x10);
  uVar1 = FUN_0198ff3c();
  FUN_00efbed8(pvVar3,uVar1,plVar2);
  *(void **)(param_1 + 0x48) = pvVar3;
  uVar1 = FUN_01997b0c();
  FUN_019966cc(uVar1,*(undefined8 *)(param_1 + 0x30));
  uVar1 = FUN_01997b00();
  FUN_019988d0(uVar1,*(undefined8 *)(param_1 + 0x38));
  uVar1 = FUN_0198ab6c();
  FUN_0198add4(uVar1,*(undefined8 *)(param_1 + 0x40));
  uVar1 = FUN_0198ff3c();
  FUN_0198fff8(uVar1,*(undefined8 *)(param_1 + 0x48));
  pvVar3 = operator_new(0x10);
  uVar1 = FUN_0198ff3c();
  FUN_00efbd58(pvVar3,uVar1);
  pvVar4 = operator_new(0x10);
  uVar1 = FUN_0198ab6c();
  FUN_00efbf14(pvVar4,uVar1);
  pvVar5 = operator_new(0x10);
  uVar1 = FUN_01997b0c();
  FUN_00efb5f4(pvVar5,uVar1);
  pvVar6 = operator_new(0x10);
  uVar1 = FUN_01997b00();
  FUN_00efb884(pvVar6,uVar1);
  (**(code **)(*plVar2 + 0x10))(plVar2,pvVar3);
  (**(code **)(*plVar2 + 0x10))(plVar2,pvVar4);
  (**(code **)(*plVar2 + 0x10))(plVar2,pvVar5);
  (**(code **)(*plVar2 + 0x10))(plVar2,pvVar6);
  return 1;
}




void FUN_00efb450(long param_1)

{
  FUN_0198ff3c();
  FUN_01990000();
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 8))();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_0198ab6c();
  FUN_0198addc();
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 8))();
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_01997b00();
  FUN_019988e0();
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 8))();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_01997b0c();
  FUN_019966d4();
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 8))();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00efb4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00efb4fc(void)

{
  FUN_0198ab6c();
  return;
}




void FUN_00efb514(void)

{
  FUN_01997b0c();
  return;
}




void FUN_00efb528(void)

{
  FUN_01997b00();
  return;
}




void FUN_00efb544(void)

{
  FUN_0198ff3c();
  return;
}




void FUN_00efb558(long *param_1,uint param_2)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  if ((param_2 & 1) == 0) {
    pvVar1 = (void *)*param_1;
    while (pvVar1 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar1 + 0x20008);
      operator_delete(pvVar1);
      pvVar1 = pvVar4;
    }
    pvVar1 = (void *)param_1[1];
    while (pvVar1 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar1 + 0x20008);
      operator_delete(pvVar1);
      pvVar1 = pvVar4;
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0x20008);
      lVar3 = *plVar2;
    }
    *plVar2 = *param_1;
    *param_1 = 0;
  }
  return;
}




void FUN_00efb5f4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_02824728;
  param_1[1] = param_2;
  return;
}




char * FUN_00efb608(void)

{
  return "shaderData";
}




void FUN_00efb614(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 extraout_x1;
  uint uVar5;
  uint uVar6;
  undefined8 local_90;
  byte local_88 [16];
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f20ed8(param_2);
  uVar3 = FUN_00f20ebc(param_2,0);
  pbVar4 = (byte *)FUN_00f20e74(param_2);
  FUN_008fa54c(local_88,pbVar4);
  FUN_00f21080(&local_70,local_88,(uVar2 ^ 1) & 1,1);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (pbVar4 == (byte *)0x0) {
    uVar5 = 0;
  }
  else if (*pbVar4 == 0) {
    uVar5 = 0x811c9dc5;
  }
  else {
    uVar5 = 0x811c9dc5;
    uVar6 = (uint)*pbVar4;
    do {
      pbVar4 = pbVar4 + 1;
      uVar5 = (uVar5 ^ uVar6) * 0x1000193;
      uVar6 = (uint)*pbVar4;
    } while (*pbVar4 != 0);
  }
  FUN_01997560(uVar5,uVar3,*(undefined8 *)(param_1 + 8),(uVar2 ^ 1) & 1,local_68,uStack_60);
  if ((uVar2 & 1) == 0) {
    local_90 = FUN_00e7a148();
    uVar3 = FUN_00e7b7ac(&local_90,1);
    FUN_00e7b740(uVar3,extraout_x1);
    uVar3 = FUN_00e7b844();
  }
  else {
    uVar3 = 0;
  }
  FUN_00f20eb0(param_2,uVar3,1);
  thunk_FUN_00e7a198(local_70);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00efb780(void)

{
  return 0;
}




void FUN_00efb788(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00f20ed8(param_2);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00f20ebc(param_2,1);
  thunk_FUN_00e7a1c0();
  return;
}




void FUN_00efb7cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_02824788;
  param_1[1] = param_3;
  return;
}




void FUN_00efb7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  puVar1 = pthread_getspecific(DAT_032112d0);
  if ((puVar1 != (undefined4 *)0x0) && (uVar2 = FUN_00f20ed8(puVar1), (uVar2 & 1) != 0)) {
    FUN_00f21040(puVar1);
    FUN_00f20ad8(*(undefined8 *)(param_1 + 8),"shaderData",param_2,param_3,*puVar1);
    return;
  }
  FUN_00f20ac4(*(undefined8 *)(param_1 + 8),"shaderData",param_2,param_3,0);
  return;
}




void FUN_00efb87c(void)

{
  return;
}




void FUN_00efb884(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_028247c0;
  param_1[1] = param_2;
  return;
}




char * FUN_00efb898(void)

{
  return "texData";
}




void FUN_00efb8a4(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *local_80 [2];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f20ed8(param_2);
  uVar3 = FUN_00f20ebc(param_2,0);
  pbVar4 = (byte *)FUN_00f20e74(param_2);
  puVar5 = (undefined8 *)FUN_00e7a7e4(0x38);
  FUN_00e7a3c0();
  puVar5[6] = 0;
  puVar10 = puVar5 + 2;
  puVar5[3] = 0;
  *puVar10 = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  *puVar5 = &PTR_FUN_02824820;
  uVar6 = FUN_00f20e74(param_2);
  FUN_008fa54c(local_80,uVar6);
  FUN_008fce60(puVar10,local_80);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  local_80[0] = (undefined8 *)FUN_00e7a148();
  *local_80[0] = puVar10;
  local_80[0][1] = thunk_FUN_00efbb6c;
  uVar6 = FUN_00e7a124();
  uVar6 = FUN_00e7b728(local_80,uVar6);
  uVar6 = FUN_00e7b7f0(uVar6,puVar5);
  FUN_00e7b734(uVar6,0x78e80dd7);
  uVar6 = FUN_00e7b844();
  local_80[0] = (undefined8 *)FUN_00e7a148();
  *local_80[0] = puVar10;
  local_80[0][1] = FUN_00efbc50;
  uVar7 = FUN_00e7b7f0(local_80,puVar5);
  FUN_00e7b734(uVar7,0xe46639f2);
  uVar7 = FUN_00e7b844();
  if (pbVar4 == (byte *)0x0) {
    uVar8 = 0;
  }
  else if (*pbVar4 == 0) {
    uVar8 = 0x811c9dc5;
  }
  else {
    uVar8 = 0x811c9dc5;
    uVar9 = (uint)*pbVar4;
    do {
      pbVar4 = pbVar4 + 1;
      uVar8 = (uVar8 ^ uVar9) * 0x1000193;
      uVar9 = (uint)*pbVar4;
    } while (*pbVar4 != 0);
  }
  FUN_01998ef8(uVar8,uVar3,*(undefined8 *)(param_1 + 8),(uVar2 ^ 1) & 1,uVar6,uVar7);
  if ((uVar2 & 1) == 0) {
    local_80[0] = (undefined8 *)FUN_00e7a148();
    uVar3 = FUN_00e7b7ac(local_80,1);
    uVar3 = FUN_00e7b740(uVar3,extraout_x1);
    FUN_00e7b734(uVar3,0xeb0cbd62);
    uVar3 = FUN_00e7b844();
  }
  else {
    uVar3 = 0;
  }
  FUN_00f20eb0(param_2,uVar3,1);
  thunk_FUN_00e7a198(uVar6);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00efbacc(void)

{
  return 0;
}




void FUN_00efbad4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00f20ed8(param_2);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00f20ebc(param_2,1);
  thunk_FUN_00e7a1c0();
  return;
}




void FUN_00efbb18(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  FUN_00e7a3d4(param_1);
  return;
}




void FUN_00efbb48(void *param_1)

{
  FUN_00efbb18();
  operator_delete(param_1);
  return;
}




void FUN_00efbb6c(byte *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*param_1 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0x10);
  }
  FUN_00f21234(&local_58,pbVar4);
  *(undefined8 *)(param_1 + 0x20) = uStack_50;
  *(undefined8 *)(param_1 + 0x18) = local_58;
  uVar5 = FUN_00e7a224();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = (undefined8 *)FUN_00e7a7e4(0x20);
  FUN_00e7a3c0();
  puVar6[2] = uVar1;
  puVar6[3] = uVar2;
  *puVar6 = &PTR_FUN_02824840;
  FUN_00e7a2d0(uVar5,puVar6,0x815f1c7b);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00efbc28(void *param_1)

{
  FUN_00e7a3d4();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00efbb6c(byte *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar3 = tpidr_el0;
  lStack_48 = *(long *)(lVar3 + 0x28);
  if ((*param_1 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0x10);
  }
  FUN_00f21234(&uStack_58,pbVar4);
  *(undefined8 *)(param_1 + 0x20) = uStack_50;
  *(undefined8 *)(param_1 + 0x18) = uStack_58;
  uVar5 = FUN_00e7a224();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = (undefined8 *)FUN_00e7a7e4(0x20);
  FUN_00e7a3c0();
  puVar6[2] = uVar1;
  puVar6[3] = uVar2;
  *puVar6 = &PTR_FUN_02824840;
  FUN_00e7a2d0(uVar5,puVar6,0x815f1c7b);
  if (*(long *)(lVar3 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00efbc50(long param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  local_40 = *(undefined8 *)(param_1 + 0x18);
  FUN_00f212c4(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00efbca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_02824860;
  param_1[1] = param_3;
  return;
}




void FUN_00efbcb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  puVar1 = pthread_getspecific(DAT_032112d0);
  if ((puVar1 != (undefined4 *)0x0) && (uVar2 = FUN_00f20ed8(puVar1), (uVar2 & 1) != 0)) {
    FUN_00f21040(puVar1);
    FUN_00f20ad8(*(undefined8 *)(param_1 + 8),"texData",param_2,param_3,*puVar1);
    return;
  }
  FUN_00f20ac4(*(undefined8 *)(param_1 + 8),"texData",param_2,param_3,0);
  return;
}




void FUN_00efbd50(void)

{
  return;
}




void FUN_00efbd58(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_02824888;
  param_1[1] = param_2;
  return;
}




char * FUN_00efbd6c(void)

{
  return "animData";
}




undefined8 FUN_00efbd78(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  void *pvVar5;
  ulong __n;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 local_94;
  ulong local_90 [2];
  void *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00f20e74(param_2);
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  FUN_00f1c904(uVar3,local_90);
  local_94 = 0;
  pvVar5 = (void *)((ulong)local_90 | 1);
  if ((local_90[0] & 1) != 0) {
    pvVar5 = local_80;
  }
  piVar4 = (int *)(**(code **)(*param_1 + 0x40))(param_1,pvVar5,&local_94);
  if (piVar4 != (int *)0x0) {
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      piVar6 = piVar4 + 1;
      do {
        uVar3 = FUN_00f20ebc(param_2,0);
        __n = (ulong)(uint)piVar6[2];
        iVar8 = *piVar6;
        iVar2 = piVar6[1];
        pvVar5 = (void *)FUN_01990414(param_1[1],__n,uVar3);
        memmove(pvVar5,piVar6 + 3,__n);
        piVar6 = (int *)((long)(piVar6 + 3) + __n);
        FUN_0199147c(iVar8,uVar3,pvVar5,__n,(char)iVar2);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    (**(code **)(*param_1 + 0x48))(param_1,piVar4,local_94);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00efbed8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_028248e8;
  param_1[1] = param_3;
  return;
}




void FUN_00efbeec(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f20ac4(*(undefined8 *)(param_1 + 8),"animData",param_2,param_3,0);
  return;
}




void FUN_00efbf0c(void)

{
  return;
}




void FUN_00efbf14(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_02824910;
  param_1[1] = param_2;
  return;
}




char * FUN_00efbf28(void)

{
  return "meshData";
}




void FUN_00efbf34(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 extraout_x1;
  uint uVar5;
  uint uVar6;
  undefined8 local_90;
  byte local_88 [16];
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f20ed8(param_2);
  uVar3 = FUN_00f20ebc(param_2,0);
  pbVar4 = (byte *)FUN_00f20e74(param_2);
  FUN_008fa54c(local_88,pbVar4);
  FUN_00f21080(&local_70,local_88,(uVar2 ^ 1) & 1,1);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (pbVar4 == (byte *)0x0) {
    uVar5 = 0;
  }
  else if (*pbVar4 == 0) {
    uVar5 = 0x811c9dc5;
  }
  else {
    uVar5 = 0x811c9dc5;
    uVar6 = (uint)*pbVar4;
    do {
      pbVar4 = pbVar4 + 1;
      uVar5 = (uVar5 ^ uVar6) * 0x1000193;
      uVar6 = (uint)*pbVar4;
    } while (*pbVar4 != 0);
  }
  FUN_0198bd70(uVar5,uVar3,*(undefined8 *)(param_1 + 8),(uVar2 ^ 1) & 1,local_68,uStack_60);
  if ((uVar2 & 1) == 0) {
    local_90 = FUN_00e7a148();
    uVar3 = FUN_00e7b7ac(&local_90,1);
    FUN_00e7b740(uVar3,extraout_x1);
    uVar3 = FUN_00e7b844();
  }
  else {
    uVar3 = 0;
  }
  FUN_00f20eb0(param_2,uVar3,1);
  thunk_FUN_00e7a198(local_70);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

