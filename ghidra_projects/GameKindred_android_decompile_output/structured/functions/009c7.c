// functions/009c7 — 61 functions
#include "libGameKindred.h"




void thunk_FUN_009c791c(long param_1)

{
  FUN_009c3c1c(0x3e4ccccd,param_1,0);
  *(byte *)(param_1 + 0x7b02a) = *(byte *)(param_1 + 0x7b02a) | 1;
  FUN_009c6044(0x3e4ccccd,param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void thunk_FUN_009c7688(long param_1)

{
  ushort *puVar1;
  undefined3 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_009c3ca4(0x3e4ccccd,param_1,0);
  puVar1 = (ushort *)(param_1 + 0x7b028);
  if ((*puVar1 & 0x4000) == 0) {
LAB_009c77a0:
    uVar4 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x7b02a) = *(undefined1 *)(param_1 + 0x7b02a);
    *puVar1 = *puVar1 & 0xbfff;
    plVar3 = *(long **)(param_1 + 0x28);
    uVar4 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
        uVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x28) = 0;
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      }
    }
    lVar5 = FUN_00d9ebe8(uVar4);
    uVar6 = FUN_009c77c0();
    if ((uVar6 & 1) == 0) {
LAB_009c776c:
      FUN_00ceace8();
      uVar6 = FUN_00ceaf3c();
      if (((uVar6 & 1) == 0) || (*(int *)(lVar5 + 0x28) != 0xfe)) goto LAB_009c77a0;
      FUN_009c3c1c(0x3e4ccccd,param_1,1);
    }
    else {
      uVar2 = *(undefined3 *)puVar1;
      if ((*(byte *)(param_1 + 0x7b02a) & 1) != 0) goto LAB_009c776c;
      *puVar1 = *puVar1;
      *(byte *)(param_1 + 0x7b02a) = (byte)((uint3)uVar2 >> 0x10) | 1;
      FUN_009c6044(0x3e4ccccd,param_1,1);
    }
    uVar4 = 0;
  }
  FUN_009c3560(0x3e4ccccd,param_1,uVar4);
  return;
}




void thunk_FUN_009c7884(long param_1)

{
  long lVar1;
  undefined **ppuStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_009c6044(0x3e4ccccd,param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  uStack_40 = 0x18;
  ppuStack_48 = &PTR_FUN_027c8578;
  FUN_00a1a334(*(long *)(param_1 + 0x38) + 0x260,&ppuStack_48);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_009c7648(undefined8 param_1)

{
  FUN_009c3dec(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  FUN_009bbfb0();
  FUN_009bd6fc();
  return;
}




void thunk_FUN_009c7e0c(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_009f1f64();
  uVar1 = FUN_009f1f70(5);
  FUN_009f2198(uVar2,5,~uVar1 & 1);
  return;
}




void FUN_009c7000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00f00438(param_5);
  if (lVar2 != 0) {
    uVar1 = FUN_009c64a4(lVar2,lVar2);
    FUN_009c6e88(param_1,param_2,param_3,param_4,lVar2,param_6 & 1,uVar1 & 1,param_7 & 1,param_8 & 1
                );
    return;
  }
  return;
}




void FUN_009c70ac(long param_1)

{
  long lVar1;
  
  *(uint *)(param_1 + 0x7a864) = *(uint *)(param_1 + 0x7a864) & 0xfffffffb;
  thunk_FUN_00f01980(param_1 + 0x7a7e0);
  lVar1 = *(long *)(param_1 + 0x7b010);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb;
  }
  return;
}




void FUN_009c7108(float param_1,undefined4 param_2,long param_3,undefined8 param_4,ulong param_5,
                 byte param_6,undefined8 param_7,undefined8 param_8,uint param_9,undefined8 param_10
                 )

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_140;
  void *local_138;
  byte local_130;
  undefined7 uStack_12f;
  void *local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined1 auStack_108 [16];
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  FUN_009c7330(auStack_108);
  uVar4 = (ulong)CONCAT14(local_88,local_8c) & 0xffffffffffff0000 |
          (ulong)(uint)(int)param_1 & 0xffff;
  local_8c = (undefined4)uVar4;
  if ((param_5 & 1) != 0) {
    uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00910394(&local_f8,uVar2);
    uVar4 = (ulong)CONCAT14(local_88,local_8c);
  }
  local_8c = (undefined4)uVar4;
  local_88 = (byte)(uVar4 >> 0x20) & 0xfe | param_6 & 1;
  local_c0 = param_7;
  local_a8 = param_8;
  uVar3 = FUN_0092ea9c();
  uVar4 = 0x4b00000;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0x3e80000;
  }
  uVar4 = uVar4 | (ulong)(param_9 & 1) << 0x21 | (ulong)CONCAT14(local_88,local_8c) & 0xf90000ffff;
  local_88 = (byte)(uVar4 >> 0x20) | 4;
  local_8c = (undefined4)uVar4;
  local_98 = param_10;
  local_90 = param_2;
  thunk_FUN_00e7051c(&local_140,param_4);
  FUN_008fcdb8(&local_130,&DAT_0320ffa8);
  local_118 = 1;
  local_114 = 0x41200000;
  FUN_009c84f0(auStack_108,&local_140);
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if (local_138 != (void *)0x0) {
    operator_delete__(local_138);
    local_140 = 0;
    local_138 = (void *)0x0;
  }
  FUN_008fa54c(&local_140,&DAT_01b988c6);
  FUN_00adbc38(param_3 + 0x59178,&local_140,auStack_108);
  if ((local_140 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_12f,local_130));
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
    local_f0 = (void *)0x0;
  }
  FUN_009c86a0(auStack_108,1);
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c7330(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00e70510(param_1 + 2);
  FUN_00e70510(param_1 + 4);
  FUN_00e70510(param_1 + 6);
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3e8000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 3;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf8;
  return;
}




void FUN_009c7390(long param_1)

{
  FUN_00adc98c(param_1 + 0x59178);
  return;
}




void FUN_009c73a0(long param_1)

{
  FUN_00bc460c(param_1 + 0x63b88);
  return;
}




void FUN_009c73b0(long param_1)

{
  FUN_00bc464c(param_1 + 0x63b88);
  return;
}




bool FUN_009c73c0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_00f00438(param_2);
  bVar1 = false;
  if (lVar2 != 0) {
    bVar1 = *(int *)(lVar2 + 0xb8) == 1;
  }
  return bVar1;
}




void FUN_009c73e8(long param_1)

{
  FUN_00bbc32c(param_1 + 0x63b10);
  return;
}




void FUN_009c73f8(long param_1)

{
  FUN_00bbc36c(param_1 + 0x63b10);
  return;
}




void FUN_009c7408(long param_1)

{
  FUN_00bbc750(param_1 + 0x63b68);
  return;
}




void FUN_009c7418(long param_1)

{
  FUN_00bbc804(param_1 + 0x63b68);
  return;
}




void FUN_009c7428(long param_1)

{
  FUN_00bc441c(param_1 + 0x63b40);
  return;
}




void FUN_009c7438(long param_1)

{
  FUN_00bc4470(param_1 + 0x63b40);
  return;
}




void FUN_009c7448(long param_1)

{
  FUN_00bbc5fc(param_1 + 0x63b10);
  return;
}




void FUN_009c7458(long param_1)

{
  FUN_00bc44c8(param_1 + 0x63b40);
  return;
}




void FUN_009c7468(long param_1)

{
  FUN_00a3efd0(param_1 + 0x268);
  return;
}




void FUN_009c7470(long param_1)

{
  FUN_00a3efd8(param_1 + 0x268);
  return;
}




void FUN_009c7478(long param_1)

{
  FUN_00a3f050(param_1 + 0x268);
  return;
}




void FUN_009c7480(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_3 + 0xf9d8);
  uVar2 = FUN_009cf2f8(uVar3);
  if ((uVar2 & 1) != 0) {
    FUN_009cf370(&local_60,param_1,param_2,uVar3);
    param_4[2] = local_50;
    param_4[1] = uStack_58;
    *param_4 = local_60;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c7514(long param_1)

{
  FUN_00a3f28c(param_1 + 0x268);
  return;
}




void FUN_009c751c(long param_1)

{
  FUN_00a3efe0(param_1 + 0x268);
  return;
}




void FUN_009c7524(long param_1)

{
  FUN_00a3eff0(param_1 + 0x268);
  return;
}




void FUN_009c752c(long param_1)

{
  FUN_00a3f000(param_1 + 0x268);
  return;
}




void FUN_009c7534(undefined8 param_1)

{
  FUN_009c3c1c(0x3e4ccccd,param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c7578(undefined8 param_1)

{
  FUN_009c3d14(param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c75ac(undefined8 param_1)

{
  FUN_009c3d80(param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c75e0(undefined8 param_1)

{
  FUN_009c3d14(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c7614(undefined8 param_1)

{
  FUN_009c3d80(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c7648(undefined8 param_1)

{
  FUN_009c3dec(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  FUN_009bbfb0();
  FUN_009bd6fc();
  return;
}




void thunk_FUN_009c7688(long param_1)

{
  ushort *puVar1;
  undefined3 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_009c3ca4(0x3e4ccccd,param_1,0);
  puVar1 = (ushort *)(param_1 + 0x7b028);
  if ((*puVar1 & 0x4000) == 0) {
LAB_009c77a0:
    uVar4 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x7b02a) = *(undefined1 *)(param_1 + 0x7b02a);
    *puVar1 = *puVar1 & 0xbfff;
    plVar3 = *(long **)(param_1 + 0x28);
    uVar4 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
        uVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x28) = 0;
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      }
    }
    lVar5 = FUN_00d9ebe8(uVar4);
    uVar6 = FUN_009c77c0();
    if ((uVar6 & 1) == 0) {
LAB_009c776c:
      FUN_00ceace8();
      uVar6 = FUN_00ceaf3c();
      if (((uVar6 & 1) == 0) || (*(int *)(lVar5 + 0x28) != 0xfe)) goto LAB_009c77a0;
      FUN_009c3c1c(0x3e4ccccd,param_1,1);
    }
    else {
      uVar2 = *(undefined3 *)puVar1;
      if ((*(byte *)(param_1 + 0x7b02a) & 1) != 0) goto LAB_009c776c;
      *puVar1 = *puVar1;
      *(byte *)(param_1 + 0x7b02a) = (byte)((uint3)uVar2 >> 0x10) | 1;
      FUN_009c6044(0x3e4ccccd,param_1,1);
    }
    uVar4 = 0;
  }
  FUN_009c3560(0x3e4ccccd,param_1,uVar4);
  return;
}




void FUN_009c7688(long param_1)

{
  ushort *puVar1;
  undefined3 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_009c3ca4(0x3e4ccccd,param_1,0);
  puVar1 = (ushort *)(param_1 + 0x7b028);
  if ((*puVar1 & 0x4000) == 0) {
LAB_009c77a0:
    uVar4 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x7b02a) = *(undefined1 *)(param_1 + 0x7b02a);
    *puVar1 = *puVar1 & 0xbfff;
    plVar3 = *(long **)(param_1 + 0x28);
    uVar4 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
        uVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x28) = 0;
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      }
    }
    lVar5 = FUN_00d9ebe8(uVar4);
    uVar6 = FUN_009c77c0();
    if ((uVar6 & 1) == 0) {
LAB_009c776c:
      FUN_00ceace8();
      uVar6 = FUN_00ceaf3c();
      if (((uVar6 & 1) == 0) || (*(int *)(lVar5 + 0x28) != 0xfe)) goto LAB_009c77a0;
      FUN_009c3c1c(0x3e4ccccd,param_1,1);
    }
    else {
      uVar2 = *(undefined3 *)puVar1;
      if ((*(byte *)(param_1 + 0x7b02a) & 1) != 0) goto LAB_009c776c;
      *puVar1 = *puVar1;
      *(byte *)(param_1 + 0x7b02a) = (byte)((uint3)uVar2 >> 0x10) | 1;
      FUN_009c6044(0x3e4ccccd,param_1,1);
    }
    uVar4 = 0;
  }
  FUN_009c3560(0x3e4ccccd,param_1,uVar4);
  return;
}




undefined8 FUN_009c77c0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_00ceace8();
  uVar1 = FUN_00ceb08c();
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    FUN_00ceace8(0);
    uVar1 = FUN_00ceae88();
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_0092e780();
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_009c77fc(undefined8 param_1)

{
  FUN_009c6044(0x3e4ccccd,param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c7840(undefined8 param_1)

{
  FUN_009c6044(0x3e4ccccd,param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c7884(long param_1)

{
  long lVar1;
  undefined **local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009c6044(0x3e4ccccd,param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  local_40 = 0x18;
  local_48 = &PTR_FUN_027c8578;
  FUN_00a1a334(*(long *)(param_1 + 0x38) + 0x260,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c791c(long param_1)

{
  FUN_009c3c1c(0x3e4ccccd,param_1,0);
  *(byte *)(param_1 + 0x7b02a) = *(byte *)(param_1 + 0x7b02a) | 1;
  FUN_009c6044(0x3e4ccccd,param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c7984(undefined8 param_1)

{
  FUN_009c543c(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c79b8(undefined8 param_1)

{
  FUN_009c543c(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c79ec(undefined8 param_1)

{
  FUN_009c60c4(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c7a20(undefined8 param_1)

{
  FUN_009c60c4(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c7a54(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  undefined *local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00f04924(param_2);
  if (iVar2 == 3) {
    uVar3 = FUN_0093d83c();
    if ((uVar3 & 1) == 0) {
      FUN_009c60c4(param_1,1);
      FUN_009c3560(0x3e4ccccd,param_1,0);
    }
    else {
      FUN_00f00298(&fStack_4c,&local_50);
      local_58 = fStack_4c * 0.5;
      fStack_54 = local_50 * 0.5;
      FUN_00e705c8(&local_48,"HELPER MODE ACTIVATED!\nPUSH A BUFF OR ABILITY!");
      FUN_009c62f8(0x3f000000,0xbf800000,param_1,&local_48,param_1 + 0x268,&local_58,0,1);
      FUN_0094173c(param_1 + 0x7a448,1);
      FUN_00a3ec9c(param_1 + 0x268,1);
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = (undefined *)0x0;
        local_40 = (void *)0x0;
      }
    }
  }
  else {
    if (iVar2 == 2) {
      lVar4 = *(long *)(param_1 + 0x38);
      local_48 = &DAT_027c8568;
      uVar5 = 0x18;
    }
    else {
      if (iVar2 != 0) goto LAB_009c7ad4;
      lVar4 = *(long *)(param_1 + 0x38);
      local_48 = &DAT_027c84f0;
      uVar5 = 0x10;
    }
    local_40 = (void *)CONCAT44(local_40._4_4_,uVar5);
    local_48 = local_48 + 0x10;
    FUN_00a1a334(lVar4 + 0x260,&local_48);
  }
LAB_009c7ad4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c7bb8(long param_1,uint param_2)

{
  FUN_0094173c(param_1 + 0x7a448,param_2 & 1);
  FUN_00a3ec9c(param_1 + 0x268,param_2 & 1);
  return;
}




void FUN_009c7bf4(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f04924(param_2);
  if (iVar1 == 3) {
    FUN_009c6aac(param_1);
    FUN_0094173c(param_1 + 0x7a448,0);
    FUN_00a3ec9c(param_1 + 0x268,0);
    return;
  }
  return;
}




void FUN_009c7c50(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar4[1]) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  iVar2 = FUN_00f04924(param_2);
  uVar3 = 1;
  if (iVar2 != 1) {
    uVar3 = 2;
  }
  FUN_009858f4(auStack_48,uVar3);
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c7cf8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00f04924(param_2);
  if (lVar3 == 0) goto LAB_009c7db0;
  lVar1 = param_1 + 0x7a450;
  uVar4 = FUN_00f02540(lVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00f01a4c(lVar1,1);
  }
  if (*(long *)(lVar3 + 0x38) == 0) {
    if (*(long *)(lVar3 + 0x30) != 0) {
      uVar5 = 0xa6d0;
      goto LAB_009c7d6c;
    }
  }
  else {
    uVar5 = 0xa648;
LAB_009c7d6c:
    FUN_00f023ec(param_1 + (ulong)(uVar5 | 0x70000),lVar1,1);
  }
  FUN_008fa54c(local_50,"hudTooltip");
  FUN_00b28094(lVar1,local_50,lVar3);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_009c7db0:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c7dd8(long param_1)

{
  FUN_00b27e8c(param_1 + 0x7a450);
  FUN_00a3f208(param_1 + 0x268);
  return;
}




void FUN_009c7e08(void)

{
  return;
}




void FUN_009c7e0c(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_009f1f64();
  uVar1 = FUN_009f1f70(5);
  FUN_009f2198(uVar2,5,~uVar1 & 1);
  return;
}




void FUN_009c7e44(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c7e88(long param_1,undefined4 param_2)

{
  FUN_009c3d14(param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  FUN_00c83c70(param_1 + 0x5f818,param_2);
  return;
}




void FUN_009c7ed4(undefined8 param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_2 == 5) {
    uVar1 = FUN_009f1f70(5);
    FUN_009c2064(param_1,uVar1 & 1);
    return;
  }
  return;
}




void FUN_009c7f18(uint *param_1,undefined8 *param_2)

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
    FUN_009c8760(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_009c7fa0(long param_1)

{
  FUN_00a3f544(param_1 + 0x268);
  return;
}




void FUN_009c7fa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d4ec0;
  if ((void *)param_1[0x2ac] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2ac]);
    param_1[0x2ac] = 0;
    param_1[0x2ab] = 0;
  }
  param_1[0x28d] = &PTR_FUN_028266f0;
  param_1[0x2a4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2a7);
  FUN_00f13d08(param_1 + 0x28d);
  param_1[0x26f] = &PTR_FUN_028266f0;
  param_1[0x286] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x289);
  FUN_00f13d08(param_1 + 0x26f);
  param_1[0x245] = &PTR_FUN_02826f38;
  param_1[0x25c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x25f);
  FUN_00f13d08(param_1 + 0x245);
  FUN_00f01868(param_1 + 0x234);
  FUN_009c8134(param_1 + 0x129);
  param_1[0x10a] = &PTR_FUN_028266f0;
  param_1[0x121] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x124);
  FUN_00f13d08(param_1 + 0x10a);
  FUN_00f0d3a4(param_1 + 0xe4);
  param_1[0xb9] = &PTR_FUN_02826f38;
  param_1[0xd0] = &PTR_FUN_02827098;
  param_1[0x4e] = &PTR_FUN_027dc928;
  FUN_00f0a79c(param_1 + 0xd3);
  FUN_00f13d08(param_1 + 0xb9);
  param_1[0x8f] = &PTR_FUN_02826f38;
  param_1[0xa6] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xa9);
  FUN_00f13d08(param_1 + 0x8f);
  param_1[0x65] = &PTR_FUN_02826f38;
  param_1[0x7c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x7f);
  FUN_00f13d08(param_1 + 0x65);
  FUN_00f13d08(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void thunk_FUN_009c7ed4(undefined8 param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_2 == 5) {
    uVar1 = FUN_009f1f70(5);
    FUN_009c2064(param_1,uVar1 & 1);
    return;
  }
  return;
}

