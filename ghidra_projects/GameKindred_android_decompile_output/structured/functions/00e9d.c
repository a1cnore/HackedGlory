// functions/00e9d — 5 functions
#include "libGameKindred.h"




void FUN_00e9d0f0(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    uVar8 = 0;
  }
  else {
    local_70 = "code";
    local_60 = 0x100005;
    local_68 = 4;
    lVar4 = FUN_008feca4(param_1,&local_70);
    uVar8 = 0;
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_70 = "code";
      local_60 = 0x100005;
      local_68 = 4;
      puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_70);
      uVar8 = *puVar5;
    }
  }
  *(undefined4 *)(param_2 + 0x40) = uVar8;
  *(undefined1 *)(param_2 + 0x44) = 0;
  FUN_008fce60(param_2 + 0x48,&DAT_0320ffa8);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00e9d230;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  lVar4 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9d230;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  plVar6 = (long *)FUN_008feca4(param_1,&local_70);
  if ((*(int *)(param_2 + 0x40) != 0) ||
     (lVar4 = FUN_008fd190(plVar6,"success"), *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4
     )) goto LAB_00e9d230;
  local_70 = "success";
  local_60 = 0x100005;
  local_68 = 7;
  lVar4 = FUN_008feca4(plVar6,&local_70);
  if ((*(byte *)(lVar4 + 0x11) & 1) == 0) {
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9d230;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    plVar6 = (long *)FUN_008feca4(plVar6,&local_70);
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) goto LAB_00e9d3c4;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    bVar1 = *(byte *)(lVar4 + 0x11);
joined_r0x00e9d398:
    bVar3 = false;
    if ((bVar1 & 1) != 0) {
      local_60 = 0x100005;
      local_68 = 7;
      local_70 = "success";
      lVar4 = FUN_008feca4(plVar6,&local_70);
      bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
    }
  }
  else {
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
      local_70 = "success";
      local_60 = 0x100005;
      local_68 = 7;
      lVar4 = FUN_008feca4(plVar6,&local_70);
      bVar1 = *(byte *)(lVar4 + 0x11);
      goto joined_r0x00e9d398;
    }
LAB_00e9d3c4:
    bVar3 = false;
  }
  *(bool *)(param_2 + 0x44) = bVar3;
  lVar4 = FUN_008fd190(plVar6,"reason");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00e9d41c:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00e9d41c;
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    puVar7 = (undefined8 *)FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x48,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
LAB_00e9d230:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9d47c(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    uVar8 = 0;
  }
  else {
    local_70 = "code";
    local_60 = 0x100005;
    local_68 = 4;
    lVar4 = FUN_008feca4(param_1,&local_70);
    uVar8 = 0;
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_70 = "code";
      local_60 = 0x100005;
      local_68 = 4;
      puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_70);
      uVar8 = *puVar5;
    }
  }
  *(undefined4 *)(param_2 + 0x40) = uVar8;
  *(undefined1 *)(param_2 + 0x44) = 0;
  FUN_008fce60(param_2 + 0x48,&DAT_0320ffa8);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00e9d5bc;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  lVar4 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9d5bc;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  plVar6 = (long *)FUN_008feca4(param_1,&local_70);
  if ((*(int *)(param_2 + 0x40) != 0) ||
     (lVar4 = FUN_008fd190(plVar6,"success"), *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4
     )) goto LAB_00e9d5bc;
  local_70 = "success";
  local_60 = 0x100005;
  local_68 = 7;
  lVar4 = FUN_008feca4(plVar6,&local_70);
  if ((*(byte *)(lVar4 + 0x11) & 1) == 0) {
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9d5bc;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    plVar6 = (long *)FUN_008feca4(plVar6,&local_70);
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) goto LAB_00e9d750;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    bVar1 = *(byte *)(lVar4 + 0x11);
joined_r0x00e9d724:
    bVar3 = false;
    if ((bVar1 & 1) != 0) {
      local_60 = 0x100005;
      local_68 = 7;
      local_70 = "success";
      lVar4 = FUN_008feca4(plVar6,&local_70);
      bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
    }
  }
  else {
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
      local_70 = "success";
      local_60 = 0x100005;
      local_68 = 7;
      lVar4 = FUN_008feca4(plVar6,&local_70);
      bVar1 = *(byte *)(lVar4 + 0x11);
      goto joined_r0x00e9d724;
    }
LAB_00e9d750:
    bVar3 = false;
  }
  *(bool *)(param_2 + 0x44) = bVar3;
  lVar4 = FUN_008fd190(plVar6,"reason");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00e9d7a8:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00e9d7a8;
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    puVar7 = (undefined8 *)FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x48,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
LAB_00e9d5bc:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9d808(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    uVar8 = 0;
  }
  else {
    local_70 = "code";
    local_60 = 0x100005;
    local_68 = 4;
    lVar4 = FUN_008feca4(param_1,&local_70);
    uVar8 = 0;
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_70 = "code";
      local_60 = 0x100005;
      local_68 = 4;
      puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_70);
      uVar8 = *puVar5;
    }
  }
  *(undefined4 *)(param_2 + 0x40) = uVar8;
  *(undefined1 *)(param_2 + 0x44) = 0;
  FUN_008fce60(param_2 + 0x448,&DAT_0320ffa8);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00e9d948;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  lVar4 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9d948;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  plVar6 = (long *)FUN_008feca4(param_1,&local_70);
  if ((*(int *)(param_2 + 0x40) != 0) ||
     (lVar4 = FUN_008fd190(plVar6,"success"), *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4
     )) goto LAB_00e9d948;
  local_70 = "success";
  local_60 = 0x100005;
  local_68 = 7;
  lVar4 = FUN_008feca4(plVar6,&local_70);
  if ((*(byte *)(lVar4 + 0x11) & 1) == 0) {
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9d948;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    plVar6 = (long *)FUN_008feca4(plVar6,&local_70);
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) goto LAB_00e9dadc;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    bVar1 = *(byte *)(lVar4 + 0x11);
joined_r0x00e9dab0:
    bVar3 = false;
    if ((bVar1 & 1) != 0) {
      local_60 = 0x100005;
      local_68 = 7;
      local_70 = "success";
      lVar4 = FUN_008feca4(plVar6,&local_70);
      bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
    }
  }
  else {
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
      local_70 = "success";
      local_60 = 0x100005;
      local_68 = 7;
      lVar4 = FUN_008feca4(plVar6,&local_70);
      bVar1 = *(byte *)(lVar4 + 0x11);
      goto joined_r0x00e9dab0;
    }
LAB_00e9dadc:
    bVar3 = false;
  }
  *(bool *)(param_2 + 0x44) = bVar3;
  lVar4 = FUN_008fd190(plVar6,"reason");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00e9db34:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00e9db34;
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    puVar7 = (undefined8 *)FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x448,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
LAB_00e9d948:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9db94(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    uVar8 = 0;
  }
  else {
    local_70 = "code";
    local_60 = 0x100005;
    local_68 = 4;
    lVar4 = FUN_008feca4(param_1,&local_70);
    uVar8 = 0;
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_70 = "code";
      local_60 = 0x100005;
      local_68 = 4;
      puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_70);
      uVar8 = *puVar5;
    }
  }
  *(undefined4 *)(param_2 + 0xb8) = uVar8;
  *(undefined1 *)(param_2 + 0xbc) = 0;
  FUN_008fce60(param_2 + 0x4c0,&DAT_0320ffa8);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00e9dcd4;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  lVar4 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9dcd4;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  plVar6 = (long *)FUN_008feca4(param_1,&local_70);
  if ((*(int *)(param_2 + 0xb8) != 0) ||
     (lVar4 = FUN_008fd190(plVar6,"success"), *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4
     )) goto LAB_00e9dcd4;
  local_70 = "success";
  local_60 = 0x100005;
  local_68 = 7;
  lVar4 = FUN_008feca4(plVar6,&local_70);
  if ((*(byte *)(lVar4 + 0x11) & 1) == 0) {
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9dcd4;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    plVar6 = (long *)FUN_008feca4(plVar6,&local_70);
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) goto LAB_00e9de68;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    bVar1 = *(byte *)(lVar4 + 0x11);
joined_r0x00e9de3c:
    bVar3 = false;
    if ((bVar1 & 1) != 0) {
      local_60 = 0x100005;
      local_68 = 7;
      local_70 = "success";
      lVar4 = FUN_008feca4(plVar6,&local_70);
      bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
    }
  }
  else {
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
      local_70 = "success";
      local_60 = 0x100005;
      local_68 = 7;
      lVar4 = FUN_008feca4(plVar6,&local_70);
      bVar1 = *(byte *)(lVar4 + 0x11);
      goto joined_r0x00e9de3c;
    }
LAB_00e9de68:
    bVar3 = false;
  }
  *(bool *)(param_2 + 0xbc) = bVar3;
  lVar4 = FUN_008fd190(plVar6,"reason");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00e9dec0:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00e9dec0;
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    puVar7 = (undefined8 *)FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x4c0,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
LAB_00e9dcd4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9df20(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    uVar8 = 0;
  }
  else {
    local_70 = "code";
    local_60 = 0x100005;
    local_68 = 4;
    lVar4 = FUN_008feca4(param_1,&local_70);
    uVar8 = 0;
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_70 = "code";
      local_60 = 0x100005;
      local_68 = 4;
      puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_70);
      uVar8 = *puVar5;
    }
  }
  *(undefined4 *)(param_2 + 0x438) = uVar8;
  *(undefined1 *)(param_2 + 0x43c) = 0;
  FUN_008fce60(param_2 + 0x440,&DAT_0320ffa8);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00e9e060;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  lVar4 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9e060;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  plVar6 = (long *)FUN_008feca4(param_1,&local_70);
  if ((*(int *)(param_2 + 0x438) != 0) ||
     (lVar4 = FUN_008fd190(plVar6,"success"), *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4
     )) goto LAB_00e9e060;
  local_70 = "success";
  local_60 = 0x100005;
  local_68 = 7;
  lVar4 = FUN_008feca4(plVar6,&local_70);
  if ((*(byte *)(lVar4 + 0x11) & 1) == 0) {
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9e060;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    plVar6 = (long *)FUN_008feca4(plVar6,&local_70);
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) goto LAB_00e9e1f4;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    bVar1 = *(byte *)(lVar4 + 0x11);
joined_r0x00e9e1c8:
    bVar3 = false;
    if ((bVar1 & 1) != 0) {
      local_60 = 0x100005;
      local_68 = 7;
      local_70 = "success";
      lVar4 = FUN_008feca4(plVar6,&local_70);
      bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
    }
  }
  else {
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
      local_70 = "success";
      local_60 = 0x100005;
      local_68 = 7;
      lVar4 = FUN_008feca4(plVar6,&local_70);
      bVar1 = *(byte *)(lVar4 + 0x11);
      goto joined_r0x00e9e1c8;
    }
LAB_00e9e1f4:
    bVar3 = false;
  }
  *(bool *)(param_2 + 0x43c) = bVar3;
  lVar4 = FUN_008fd190(plVar6,"reason");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00e9e24c:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00e9e24c;
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    puVar7 = (undefined8 *)FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x440,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
LAB_00e9e060:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

