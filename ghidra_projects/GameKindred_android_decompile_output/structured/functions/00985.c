// functions/00985 — 66 functions
#include "libGameKindred.h"




void FUN_00985010(long param_1)

{
  FUN_00ce78c4(*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00985018(void)

{
  return;
}




void FUN_00985020(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be428;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985090(undefined8 *param_1,undefined4 param_2,byte param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *param_1 = &PTR_FUN_027be460;
  *(byte *)(param_1 + 4) = param_3 & 1;
  return;
}




void FUN_009850b8(long param_1)

{
  FUN_00926ba0(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x20));
  return;
}




void FUN_009850c8(void)

{
  return;
}




void FUN_009850d0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be460;
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985148(undefined8 *param_1,undefined8 *param_2,byte param_3,byte param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be498;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(byte *)(param_1 + 5) = param_3 & 1;
  *(byte *)((long)param_1 + 0x29) = param_4 & 1;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  return;
}




void FUN_00985184(long param_1)

{
  uint uVar1;
  long lVar2;
  
  FUN_00cedce4();
  lVar2 = FUN_00d9e390();
  if ((lVar2 != 0) &&
     (((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
       (2 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
      ((*(byte *)(lVar2 + 0x2f8) >> 1 & 1) == 0)))) {
    FUN_00d5756c(lVar2,param_1 + 0x1c,0,0,0);
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    FUN_00926f54(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24));
    return;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_00926e18();
    return;
  }
  FUN_00926cdc(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24));
  return;
}




void FUN_0098522c(void)

{
  return;
}




void FUN_00985234(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be498;
  *(undefined8 *)((long)puVar1 + 0x22) = *(undefined8 *)(param_1 + 0x22);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_009852ac(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be4d0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_009852cc(long param_1)

{
  FUN_009271c0(*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_009852d4(void)

{
  return;
}




void FUN_009852dc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be4d0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_0098534c(undefined8 *param_1,byte param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be508;
  *(byte *)((long)param_1 + 0x19) = param_2 & 1;
  return;
}




void FUN_00985370(long param_1)

{
  uint uVar1;
  long lVar2;
  
  FUN_00cedce4();
  lVar2 = FUN_00d9e390();
  if ((lVar2 != 0) &&
     (((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
       (2 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
      ((*(byte *)(lVar2 + 0x2f8) >> 1 & 1) == 0)))) {
    FUN_00da2cc4();
    FUN_00927090(*(undefined1 *)(param_1 + 0x19));
    return;
  }
  return;
}




void FUN_009853e0(void)

{
  return;
}




void FUN_009853e8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be508;
  *(undefined1 *)((long)puVar1 + 0x19) = *(undefined1 *)(param_1 + 0x19);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985458(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *param_1 = &PTR_FUN_027be540;
  *(undefined4 *)(param_1 + 4) = DAT_031abbe4;
  return;
}




void FUN_00985488(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be540;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_009854a8(long param_1)

{
  FUN_0092528c(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_009854b4(void)

{
  return;
}




void FUN_009854bc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be540;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_0098552c(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be578;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_0098554c(long param_1)

{
  FUN_009272ec(*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00985554(void)

{
  return;
}




void FUN_0098555c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be578;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_009855cc(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be5b0;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *(undefined8 *)((long)param_1 + 0x1c) = *param_3;
  *(undefined8 *)((long)param_1 + 0x24) = *param_4;
  return;
}




void FUN_009855fc(void)

{
  return;
}




void FUN_00985600(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if (lVar2 != 0) {
    for (lVar2 = *(long *)(lVar2 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef58) {
        local_38 = *(undefined4 *)(param_1 + 0x1c);
        local_30 = *(undefined4 *)(param_1 + 0x20);
        uStack_34 = 0;
        local_48 = *(undefined4 *)(param_1 + 0x24);
        local_40 = *(undefined4 *)(param_1 + 0x28);
        uStack_44 = 0;
        FUN_00a109fc(lVar2,&local_38,&local_48);
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009856a4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be5b0;
  *(undefined1 *)((long)puVar1 + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
  uVar2 = *(undefined8 *)(param_1 + 0x19);
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x19) = uVar2;
  *(undefined2 *)((long)puVar1 + 0x29) = *(undefined2 *)(param_1 + 0x29);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985724(undefined4 param_1,undefined8 *param_2,undefined1 param_3,byte param_4,
                 undefined1 param_5,byte param_6)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((long)param_2 + 0x19) = param_3;
  *(undefined1 *)((long)param_2 + 0x1a) = param_5;
  *(undefined4 *)((long)param_2 + 0x1c) = param_1;
  *(byte *)(param_2 + 4) = param_4 & 1;
  *param_2 = &PTR_FUN_027be5e8;
  *(byte *)((long)param_2 + 0x21) = param_6 & 1;
  return;
}




void FUN_0098575c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x1a) == -1) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_008ff584();
    }
    FUN_00d5e88c(*(undefined4 *)(param_1 + 0x1c),lVar1,*(undefined1 *)(param_1 + 0x20),uVar2,
                 *(undefined1 *)(param_1 + 0x21));
    return;
  }
  return;
}




void FUN_009857c4(void)

{
  return;
}




void FUN_009857c8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be5e8;
  *(undefined1 *)((long)puVar1 + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x19) = *(undefined8 *)(param_1 + 0x19);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985840(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *param_1 = &PTR_FUN_027be620;
  param_1[4] = param_3;
  return;
}




void FUN_00985864(void)

{
  return;
}




void FUN_00985868(long param_1)

{
  FUN_00920b08(*(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_0098587c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be620;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_009858f4(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be658;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_00985914(long param_1)

{
  FUN_00ce9254(*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_0098591c(void)

{
  return;
}




void FUN_00985924(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be658;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985994(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027be690;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_009859b4(void)

{
  return;
}




void FUN_009859bc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be690;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985a24(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027be6c8;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  return;
}




void FUN_00985a50(void)

{
  return;
}




void FUN_00985a54(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long local_c8 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019889cc(local_c8,0x10,DAT_02e3efa8,0);
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    plVar4 = local_c8;
    do {
      if (*(int *)(*plVar4 + 0x28) == *(int *)(param_1 + 0x1c)) {
        FUN_009de728(*plVar4,param_1 + 0x20);
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00985afc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be6c8;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985b6c(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,byte param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *param_1 = &PTR_FUN_027be700;
  uVar1 = *param_3;
  *(byte *)((long)param_1 + 0x24) = param_4 & 1;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  return;
}




void FUN_00985b9c(void)

{
  return;
}




void FUN_00985ba0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_00d578f4(lVar2);
    }
    for (lVar2 = *(long *)(lVar2 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef58) {
        FUN_00a10ef8(auStack_50,lVar2,param_1 + 0x1c);
        FUN_00a10b2c(auStack_50);
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00985c50(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be700;
  *(undefined4 *)((long)puVar1 + 0x21) = *(undefined4 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x19) = *(undefined8 *)(param_1 + 0x19);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985cc8(undefined8 *param_1,undefined1 param_2,undefined8 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be738;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *(undefined8 *)((long)param_1 + 0x1c) = *param_3;
  return;
}




void FUN_00985cf0(void)

{
  return;
}




void FUN_00985cf4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if (lVar2 != 0) {
    for (lVar2 = *(long *)(lVar2 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef58) {
        FUN_00a10ef8(auStack_40,lVar2,param_1 + 0x1c);
        FUN_00a10b2c(auStack_40);
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00985d88(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be738;
  *(undefined1 *)((long)puVar1 + 0x23) = *(undefined1 *)(param_1 + 0x23);
  *(undefined8 *)((long)puVar1 + 0x19) = *(undefined8 *)(param_1 + 0x19);
  *(undefined2 *)((long)puVar1 + 0x21) = *(undefined2 *)(param_1 + 0x21);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985e08(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6,undefined1 param_7,byte param_8,byte param_9,
                 byte param_10,byte param_11)

{
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
  *(undefined4 *)((long)param_3 + 0x1c) = param_4;
  *(undefined4 *)(param_3 + 4) = param_5;
  *(undefined4 *)((long)param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 5) = param_2;
  *(undefined1 *)((long)param_3 + 0x2c) = param_6;
  *(undefined1 *)((long)param_3 + 0x2d) = param_7;
  *param_3 = &PTR_FUN_027be770;
  *(byte *)((long)param_3 + 0x2e) =
       param_8 & 3 | (param_9 & 1) << 2 | (param_10 & 1) << 3 | (param_11 & 1) << 4 |
       *(byte *)((long)param_3 + 0x2e) & 0xe0;
  return;
}




void FUN_00985e64(void)

{
  return;
}




void FUN_00985e68(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 != 0) {
    lVar3 = FUN_00d9f258(lVar2,param_1 + 0x20);
    if (lVar3 == 0) {
      lVar3 = FUN_01985d44(lVar2,DAT_02c7bf1c);
      bVar1 = *(byte *)(param_1 + 0x2e);
      FUN_00d6d5e0(lVar3,param_1 + 0x20,bVar1 & 3,bVar1 >> 2 & 1,bVar1 >> 3 & 1,bVar1 >> 4 & 1);
      FUN_00d6e2d0(*(undefined4 *)(param_1 + 0x28),lVar3);
      FUN_00d6e510(lVar3,*(undefined1 *)(param_1 + 0x2d));
    }
    FUN_00d6dc30(*(undefined4 *)(param_1 + 0x24),lVar3);
    FUN_00d6e30c(lVar3,*(undefined1 *)(param_1 + 0x2c));
    return;
  }
  return;
}




void FUN_00985f24(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be770;
  *(undefined1 *)((long)puVar1 + 0x2e) = *(undefined1 *)(param_1 + 0x2e);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  *(undefined2 *)((long)puVar1 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00985fa4(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be7a8;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *(undefined8 *)((long)param_1 + 0x1c) = *param_3;
  *(undefined8 *)((long)param_1 + 0x24) = *param_4;
  return;
}




void FUN_00985fd4(void)

{
  return;
}




void FUN_00985fd8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if (lVar1 != 0) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef58) {
        FUN_00a11020(lVar1,param_1 + 0x1c,param_1 + 0x24);
        return;
      }
    }
  }
  return;
}

