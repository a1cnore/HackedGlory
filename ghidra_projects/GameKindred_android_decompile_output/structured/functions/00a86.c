// functions/00a86 — 5 functions
#include "libGameKindred.h"




void FUN_00a86a9c(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
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
    FUN_00a87f6c(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




void FUN_00a86b30(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00a880d4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_008fcdb8(lVar4 + -0x28,param_2);
  FUN_00a881c0(lVar4 + -0x10,param_2 + 0x18);
  return;
}




void FUN_00a86bcc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  byte local_c8 [16];
  void *local_b8;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)param_3[1] != 0) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      memset(local_c8,0,0x48);
      plVar1 = (long *)(*param_3 + lVar6);
      lVar3 = FUN_008fd190(plVar1,"icon_texture");
      if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar3) {
        puVar4 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_80 = "icon_texture";
        local_70 = 0x100005;
        local_78 = 0xc;
        lVar3 = FUN_008feca4(plVar1,&local_80);
        puVar4 = (undefined8 *)&DAT_01e277f2;
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          local_80 = "icon_texture";
          local_70 = 0x100005;
          local_78 = 0xc;
          puVar4 = (undefined8 *)FUN_008feca4(plVar1,&local_80);
          if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
        }
      }
      FUN_008fa54c(&local_80,puVar4);
      FUN_008fce60(local_c8,&local_80);
      if (((ulong)local_80 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_6c,local_70));
      }
      plVar1 = (long *)(*param_3 + lVar6);
      lVar3 = FUN_008fd190(plVar1,"text");
      if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar3) {
        puVar4 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_80 = "text";
        local_70 = 0x100005;
        local_78 = 4;
        lVar3 = FUN_008feca4(plVar1,&local_80);
        puVar4 = (undefined8 *)&DAT_01e277f2;
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          local_80 = "text";
          local_70 = 0x100005;
          local_78 = 4;
          puVar4 = (undefined8 *)FUN_008feca4(plVar1,&local_80);
          if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
        }
      }
      FUN_008fa54c(&local_80,puVar4);
      FUN_008fce60(local_b0,&local_80);
      if (((ulong)local_80 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_6c,local_70));
      }
      plVar1 = (long *)(*param_3 + lVar6);
      lVar3 = FUN_008fd190(plVar1,"type");
      if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar3) {
        puVar4 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_80 = "type";
        local_70 = 0x100005;
        local_78 = 4;
        lVar3 = FUN_008feca4(plVar1,&local_80);
        puVar4 = (undefined8 *)&DAT_01e277f2;
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          local_80 = "type";
          local_70 = 0x100005;
          local_78 = 4;
          puVar4 = (undefined8 *)FUN_008feca4(plVar1,&local_80);
          if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
        }
      }
      FUN_008fa54c(&local_80,puVar4);
      FUN_008fce60(local_98,&local_80);
      if (((ulong)local_80 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_6c,local_70));
      }
      FUN_00a87d54(param_1,local_c8);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar5 < *(uint *)(param_3 + 1));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a86f04(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00a88510(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_008fcdb8(lVar4 + -0x28,param_2);
  FUN_00a885fc(lVar4 + -0x10,param_2 + 0x18);
  return;
}




void FUN_00a86fa0(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00a880d4(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = lVar2 + (ulong)*param_2 * 0x28;
    do {
      FUN_008fcdb8(lVar3,lVar2);
      FUN_00a881c0(lVar3 + 0x18,lVar2 + 0x18);
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + 0x28;
    } while (lVar2 != lVar4);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}

