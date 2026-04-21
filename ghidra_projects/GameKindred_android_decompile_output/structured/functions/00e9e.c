// functions/00e9e — 6 functions
#include "libGameKindred.h"




void FUN_00e9e2ac(long *param_1,long param_2)

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
  *(undefined4 *)(param_2 + 0x28) = uVar8;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  FUN_008fce60(param_2 + 0x430,&DAT_0320ffa8);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00e9e3ec;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  lVar4 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9e3ec;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  plVar6 = (long *)FUN_008feca4(param_1,&local_70);
  if ((*(int *)(param_2 + 0x28) != 0) ||
     (lVar4 = FUN_008fd190(plVar6,"success"), *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4
     )) goto LAB_00e9e3ec;
  local_70 = "success";
  local_60 = 0x100005;
  local_68 = 7;
  lVar4 = FUN_008feca4(plVar6,&local_70);
  if ((*(byte *)(lVar4 + 0x11) & 1) == 0) {
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9e3ec;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    plVar6 = (long *)FUN_008feca4(plVar6,&local_70);
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) goto LAB_00e9e580;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    bVar1 = *(byte *)(lVar4 + 0x11);
joined_r0x00e9e554:
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
      goto joined_r0x00e9e554;
    }
LAB_00e9e580:
    bVar3 = false;
  }
  *(bool *)(param_2 + 0x2c) = bVar3;
  lVar4 = FUN_008fd190(plVar6,"reason");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00e9e5d8:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00e9e5d8;
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    puVar7 = (undefined8 *)FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x430,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
LAB_00e9e3ec:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9e638(long *param_1,long param_2)

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
  *(undefined4 *)(param_2 + 0x28) = uVar8;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  FUN_008fce60(param_2 + 0x430,&DAT_0320ffa8);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00e9e778;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  lVar4 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9e778;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  plVar6 = (long *)FUN_008feca4(param_1,&local_70);
  if ((*(int *)(param_2 + 0x28) != 0) ||
     (lVar4 = FUN_008fd190(plVar6,"success"), *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4
     )) goto LAB_00e9e778;
  local_70 = "success";
  local_60 = 0x100005;
  local_68 = 7;
  lVar4 = FUN_008feca4(plVar6,&local_70);
  if ((*(byte *)(lVar4 + 0x11) & 1) == 0) {
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00e9e778;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    plVar6 = (long *)FUN_008feca4(plVar6,&local_70);
    lVar4 = FUN_008fd190(plVar6,"success");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) goto LAB_00e9e90c;
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    bVar1 = *(byte *)(lVar4 + 0x11);
joined_r0x00e9e8e0:
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
      goto joined_r0x00e9e8e0;
    }
LAB_00e9e90c:
    bVar3 = false;
  }
  *(bool *)(param_2 + 0x2c) = bVar3;
  lVar4 = FUN_008fd190(plVar6,"reason");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00e9e964:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    lVar4 = FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00e9e964;
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    puVar7 = (undefined8 *)FUN_008feca4(plVar6,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x430,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
LAB_00e9e778:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9e9c4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_2 + 0x25) = 0;
  FUN_008fce60(param_2 + 0x28,&DAT_0320ffa8);
  lVar2 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) goto LAB_00e9eae4;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  lVar2 = FUN_008feca4(param_1,&local_60);
  if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_00e9eae4;
  *(undefined1 *)(param_2 + 0x25) = 1;
  lVar2 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_00e9eab8:
    puVar3 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "returnValue";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_00e9eab8;
    local_60 = "returnValue";
    local_50 = 0x100005;
    local_58 = 0xb;
    puVar3 = (undefined8 *)FUN_008feca4(param_1,&local_60);
    if ((*(byte *)((long)puVar3 + 0x12) >> 6 & 1) == 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
  }
  FUN_008fa54c(&local_60,puVar3);
  FUN_008fce60(param_2 + 0x28,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
LAB_00e9eae4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9eb3c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  double dVar6;
  float fVar7;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar5 = 0;
  }
  else {
    local_70 = "code";
    local_60 = 0x100005;
    local_68 = 4;
    lVar2 = FUN_008feca4(param_1,&local_70);
    uVar5 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_70 = "code";
      local_60 = 0x100005;
      local_68 = 4;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_70);
      uVar5 = *puVar3;
    }
  }
  *(undefined4 *)(param_2 + 0x28) = uVar5;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  lVar2 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_70 = "returnValue";
    local_60 = 0x100005;
    local_68 = 0xb;
    lVar2 = FUN_008feca4(param_1,&local_70);
    if (*(int *)(lVar2 + 0x10) == 3) {
      local_70 = "returnValue";
      local_60 = 0x100005;
      local_68 = 0xb;
      plVar4 = (long *)FUN_008feca4(param_1,&local_70);
      lVar2 = FUN_008fd190(plVar4,"value");
      fVar7 = 0.0;
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
        local_70 = "value";
        local_60 = 0x100005;
        local_68 = 5;
        lVar2 = FUN_008feca4(plVar4,&local_70);
        fVar7 = 0.0;
        if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
          local_70 = "value";
          local_60 = 0x100005;
          local_68 = 5;
          FUN_008feca4(plVar4,&local_70);
          dVar6 = (double)FUN_008fc0f0();
          fVar7 = (float)dVar6;
        }
      }
      *(float *)(param_2 + 0x2c) = fVar7;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9ed00(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar5 = 0;
  }
  else {
    local_60 = "code";
    local_50 = 0x100005;
    local_58 = 4;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar5 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "code";
      local_50 = 0x100005;
      local_58 = 4;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar5 = *puVar3;
    }
  }
  *(undefined4 *)(param_2 + 0x2c) = uVar5;
  lVar2 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_60 = "returnValue";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if (*(int *)(lVar2 + 0x10) == 3) {
      local_60 = "returnValue";
      local_50 = 0x100005;
      local_58 = 0xb;
      plVar4 = (long *)FUN_008feca4(param_1,&local_60);
      lVar2 = FUN_008fd190(plVar4,"linkResult");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
        uVar5 = 0;
      }
      else {
        local_60 = "linkResult";
        local_50 = 0x100005;
        local_58 = 10;
        lVar2 = FUN_008feca4(plVar4,&local_60);
        uVar5 = 0;
        if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
          local_60 = "linkResult";
          local_50 = 0x100005;
          local_58 = 10;
          puVar3 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
          uVar5 = *puVar3;
        }
      }
      *(undefined4 *)(param_2 + 0x28) = uVar5;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9eec0(long *param_1,long param_2,byte param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auStack_c8 [8];
  char **local_c0;
  char *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined4 local_a0;
  ulong local_98 [2];
  void *local_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) {
    uVar13 = 0;
  }
  else {
    local_b8 = "code";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 4;
    lVar5 = FUN_008feca4(param_1,&local_b8);
    uVar13 = 0;
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      local_b8 = "code";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 4;
      puVar6 = (undefined4 *)FUN_008feca4(param_1,&local_b8);
      uVar13 = *puVar6;
    }
  }
  *(undefined4 *)(param_2 + 0x28) = uVar13;
  lVar5 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) goto LAB_00ea068c;
  local_b8 = "returnValue";
  local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
  local_b0 = 0xb;
  lVar5 = FUN_008feca4(param_1,&local_b8);
  if (*(int *)(lVar5 + 0x10) != 3) goto LAB_00ea068c;
  local_b8 = "returnValue";
  local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
  local_b0 = 0xb;
  plVar7 = (long *)FUN_008feca4(param_1,&local_b8);
  FUN_00916394(param_2 + 0x30,plVar7,*(undefined8 *)(param_2 + 0x48));
  lVar5 = FUN_008fd190(plVar7,"supportUrls");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar5) {
    local_b8 = "supportUrls";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xb;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if (*(int *)(lVar5 + 0x10) == 3) {
      local_b8 = "supportUrls";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 0xb;
      plVar8 = (long *)FUN_008feca4(plVar7,&local_b8);
      if ((int)plVar8[1] != 0) {
        puVar10 = (undefined8 *)(*plVar8 + 0x18);
        do {
          puVar12 = puVar10;
          if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
            puVar12 = (undefined8 *)*puVar10;
          }
          FUN_008fa54c(&local_b8,puVar12);
          if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
            puVar12 = (undefined8 *)puVar10[-3];
          }
          else {
            puVar12 = puVar10 + -3;
          }
          FUN_008fa54c(&local_80,puVar12);
          local_c0 = &local_80;
          lVar5 = FUN_00941474(param_2 + 400,&local_80,&DAT_01bf11c8,&local_c0,auStack_c8);
          FUN_008fce60(lVar5 + 0x38,&local_b8);
          if (((ulong)local_80 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_6c,local_70));
          }
          if (((ulong)local_b8 & 1) != 0) {
            operator_delete(local_a8);
          }
          puVar12 = puVar10 + 3;
          puVar10 = puVar10 + 6;
        } while (puVar12 != (undefined8 *)(*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30));
      }
    }
  }
  lVar5 = FUN_008fd190(plVar7,"notifyUrl");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9f17c:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "notifyUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 9;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9f17c;
    local_b8 = "notifyUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 9;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0xf8,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"notifyFallbackUrl");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9f1f8:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "notifyFallbackUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0x11;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9f1f8;
    local_b8 = "notifyFallbackUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0x11;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x110,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"bucketIncrementer");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
    uVar13 = 0;
  }
  else {
    local_b8 = "bucketIncrementer";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0x11;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    uVar13 = 0;
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      local_b8 = "bucketIncrementer";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 0x11;
      puVar6 = (undefined4 *)FUN_008feca4(plVar7,&local_b8);
      uVar13 = *puVar6;
    }
  }
  *(undefined4 *)(param_2 + 0x128) = uVar13;
  lVar5 = FUN_008fd190(plVar7,"failoverThreshold");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
    uVar13 = 0;
  }
  else {
    local_b8 = "failoverThreshold";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0x11;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    uVar13 = 0;
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      local_b8 = "failoverThreshold";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 0x11;
      puVar6 = (undefined4 *)FUN_008feca4(plVar7,&local_b8);
      uVar13 = *puVar6;
    }
  }
  *(undefined4 *)(param_2 + 300) = uVar13;
  lVar5 = FUN_008fd190(plVar7,"platformUrl");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9f36c:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "platformUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xb;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9f36c;
    local_b8 = "platformUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xb;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x130,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"chatUrl");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9f3e8:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "chatUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9f3e8;
    local_b8 = "chatUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x148,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"chatPass");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9f464:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "chatPass";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 8;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9f464;
    local_b8 = "chatPass";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 8;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x160,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"playerUUID");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar5) {
    lVar5 = FUN_008fd190(plVar7,"playerUUID");
    if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9f508:
      puVar10 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_b8 = "playerUUID";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 10;
      lVar5 = FUN_008feca4(plVar7,&local_b8);
      if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9f508;
      local_b8 = "playerUUID";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 10;
      puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
      if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
        puVar10 = (undefined8 *)*puVar10;
      }
    }
    FUN_008fa54c(&local_b8,puVar10);
    FUN_008fce60(param_2 + 0x98,&local_b8);
    if (((ulong)local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  lVar5 = FUN_008fd190(plVar7,"playerInfo");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar5) {
    local_b8 = "playerInfo";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 10;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if (*(int *)(lVar5 + 0x10) == 3) {
      local_b8 = "playerInfo";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 10;
      plVar8 = (long *)FUN_008feca4(plVar7,&local_b8);
      lVar5 = FUN_008fd190(plVar8,"guildUUID");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar5) {
LAB_00e9f5f0:
        puVar10 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b8 = "guildUUID";
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        local_b0 = 9;
        lVar5 = FUN_008feca4(plVar8,&local_b8);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9f5f0;
        local_b8 = "guildUUID";
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        local_b0 = 9;
        puVar10 = (undefined8 *)FUN_008feca4(plVar8,&local_b8);
        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
          puVar10 = (undefined8 *)*puVar10;
        }
      }
      FUN_008fa54c(&local_b8,puVar10);
      FUN_008fce60(param_2 + 0xb0,&local_b8);
      if (((ulong)local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      lVar5 = FUN_008fd190(plVar8,"teamUUID");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar5) {
LAB_00e9f66c:
        puVar10 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b8 = "teamUUID";
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        local_b0 = 8;
        lVar5 = FUN_008feca4(plVar8,&local_b8);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9f66c;
        local_b8 = "teamUUID";
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        local_b0 = 8;
        puVar10 = (undefined8 *)FUN_008feca4(plVar8,&local_b8);
        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
          puVar10 = (undefined8 *)*puVar10;
        }
      }
      FUN_008fa54c(&local_b8,puVar10);
      FUN_008fce60(param_2 + 200,&local_b8);
      if (((ulong)local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      lVar5 = FUN_008fd190(plVar8,"handle");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar5) {
LAB_00e9f6e8:
        puVar10 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b8 = "handle";
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        local_b0 = 6;
        lVar5 = FUN_008feca4(plVar8,&local_b8);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9f6e8;
        local_b8 = "handle";
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        local_b0 = 6;
        puVar10 = (undefined8 *)FUN_008feca4(plVar8,&local_b8);
        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
          puVar10 = (undefined8 *)*puVar10;
        }
      }
      FUN_008fa54c(&local_b8,puVar10);
      FUN_008fce60(param_2 + 0xe0,&local_b8);
      if (((ulong)local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
  }
  lVar5 = FUN_008fd190(plVar7,"enableStateUpdates");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9f764:
    *(undefined1 *)(param_2 + 0x178) = 0;
  }
  else {
    local_b8 = "enableStateUpdates";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0x12;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x11) & 1) == 0) goto LAB_00e9f764;
    lVar5 = FUN_008fd190(plVar7,"enableStateUpdates");
    if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
      bVar3 = false;
    }
    else {
      local_b8 = "enableStateUpdates";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 0x12;
      lVar5 = FUN_008feca4(plVar7,&local_b8);
      bVar3 = false;
      if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
        local_b8 = "enableStateUpdates";
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        local_b0 = 0x12;
        lVar5 = FUN_008feca4(plVar7,&local_b8);
        bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
      }
    }
    *(bool *)(param_2 + 0x178) = bVar3;
  }
  lVar5 = FUN_008fd190(plVar7,"missedStateUpdateMessagesThreshold");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9f948:
    uVar13 = 0xffffffff;
  }
  else {
    local_b8 = "missedStateUpdateMessagesThreshold";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0x22;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_00e9f948;
    lVar5 = FUN_008fd190(plVar7,"missedStateUpdateMessagesThreshold");
    if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
      uVar13 = 0;
    }
    else {
      local_b8 = "missedStateUpdateMessagesThreshold";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 0x22;
      lVar5 = FUN_008feca4(plVar7,&local_b8);
      uVar13 = 0;
      if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
        local_b8 = "missedStateUpdateMessagesThreshold";
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        local_b0 = 0x22;
        puVar6 = (undefined4 *)FUN_008feca4(plVar7,&local_b8);
        uVar13 = *puVar6;
      }
    }
  }
  *(undefined4 *)(param_2 + 0x17c) = uVar13;
  lVar5 = FUN_008fd190(plVar7,"pingHostPortInfo");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar5) {
    FUN_00948824(param_2 + 0x180,0);
    local_b8 = "pingHostPortInfo";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0x10;
    plVar8 = (long *)FUN_008feca4(plVar7,&local_b8);
    if ((int)plVar8[1] != 0) {
      lVar5 = 0;
      uVar15 = 0;
      do {
        local_98[1] = 0;
        local_88 = (void *)0x0;
        local_98[0] = 0;
        plVar1 = (long *)(*plVar8 + lVar5);
        local_b8 = (char *)0x0;
        local_b0 = 0;
        local_a0 = 0;
        local_a8 = (void *)0x0;
        lVar9 = FUN_008fd190(plVar1,"host");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
          puVar10 = (undefined8 *)&DAT_01e277f2;
        }
        else {
          local_80 = "host";
          local_70 = 0x100005;
          local_78 = 4;
          lVar9 = FUN_008feca4(plVar1,&local_80);
          puVar10 = (undefined8 *)&DAT_01e277f2;
          if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
            local_70 = 0x100005;
            local_80 = "host";
            local_78 = 4;
            puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_80);
            if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
              puVar10 = (undefined8 *)*puVar10;
            }
          }
        }
        FUN_008fa54c(&local_80,puVar10);
        FUN_008fce60(&local_b8,&local_80);
        if (((ulong)local_80 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_6c,local_70));
        }
        lVar9 = FUN_008fd190(plVar1,"port");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
          uVar13 = 0;
        }
        else {
          local_80 = "port";
          local_70 = 0x100005;
          local_78 = 4;
          lVar9 = FUN_008feca4(plVar1,&local_80);
          uVar13 = 0;
          if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
            local_80 = "port";
            local_70 = 0x100005;
            local_78 = 4;
            puVar6 = (undefined4 *)FUN_008feca4(plVar1,&local_80);
            uVar13 = *puVar6;
          }
        }
        local_a0 = uVar13;
        lVar9 = FUN_008fd190(plVar1,"site");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
          puVar10 = (undefined8 *)&DAT_01e277f2;
        }
        else {
          local_80 = "site";
          local_70 = 0x100005;
          local_78 = 4;
          lVar9 = FUN_008feca4(plVar1,&local_80);
          puVar10 = (undefined8 *)&DAT_01e277f2;
          if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
            local_80 = "site";
            local_70 = 0x100005;
            local_78 = 4;
            puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_80);
            if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
              puVar10 = (undefined8 *)*puVar10;
            }
          }
        }
        FUN_008fa54c(&local_80,puVar10);
        FUN_008fce60(local_98,&local_80);
        if (((ulong)local_80 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_6c,local_70));
        }
        FUN_00ea09d4(param_2 + 0x180,&local_b8);
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        if (((ulong)local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
        uVar15 = uVar15 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar15 < *(uint *)(plVar8 + 1));
    }
  }
  lVar5 = FUN_008fd190(plVar7,"region");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "region";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 6;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) {
      puVar10 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_b8 = "region";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 6;
      puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
      if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
        puVar10 = (undefined8 *)*puVar10;
      }
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x1a8,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"country");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9fdb4:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "country";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9fdb4;
    local_b8 = "country";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x1c0,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"askRegistrationConsent");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9fe30:
    bVar3 = true;
  }
  else {
    local_b8 = "askRegistrationConsent";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0x16;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x11) & 1) == 0) goto LAB_00e9fe30;
    local_b8 = "askRegistrationConsent";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0x16;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x1d8) = bVar3;
  lVar5 = FUN_008fd190(plVar7,"platformTime");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
    uVar14 = 0;
  }
  else {
    local_b8 = "platformTime";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xc;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    uVar14 = 0;
    if ((*(byte *)(lVar5 + 0x11) >> 4 & 1) != 0) {
      local_b8 = "platformTime";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 0xc;
      puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
      uVar14 = *puVar10;
    }
  }
  *(undefined8 *)(param_2 + 0x1e0) = uVar14;
  lVar5 = FUN_008fd190(plVar7,"pingPostToAnalytics");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
    bVar3 = false;
  }
  else {
    local_b8 = "pingPostToAnalytics";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0x13;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    bVar3 = false;
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      local_b8 = "pingPostToAnalytics";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      local_b0 = 0x13;
      lVar5 = FUN_008feca4(plVar7,&local_b8);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x1e8) = bVar3;
  lVar5 = FUN_008fd190(plVar7,"sipPass");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00e9ffdc:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "sipPass";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00e9ffdc;
    local_b8 = "sipPass";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x1f0,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"sipUrl");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea0058:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "sipUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 6;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea0058;
    local_b8 = "sipUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 6;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x208,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"sipRealm");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea00d4:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "sipRealm";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 8;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea00d4;
    local_b8 = "sipRealm";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 8;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x220,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"sipPort");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea0150:
    pcVar11 = "";
  }
  else {
    local_b8 = "sipPort";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea0150;
    local_b8 = "sipPort";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    pcVar11 = (char *)FUN_008feca4(plVar7,&local_b8);
    if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
      pcVar11 = *(char **)pcVar11;
    }
  }
  iVar4 = atoi(pcVar11);
  *(int *)(param_2 + 0x238) = iVar4;
  lVar5 = FUN_008fd190(plVar7,"sipTransport");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea01b0:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "sipTransport";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xc;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea01b0;
    local_b8 = "sipTransport";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xc;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x240,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"turnPass");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea022c:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "turnPass";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 8;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea022c;
    local_b8 = "turnPass";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 8;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 600,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"turnUrl");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea02a8:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "turnUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea02a8;
    local_b8 = "turnUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x270,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"turnRealm");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea0324:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "turnRealm";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 9;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea0324;
    local_b8 = "turnRealm";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 9;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x288,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"turnPort");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea03a0:
    pcVar11 = "";
  }
  else {
    local_b8 = "turnPort";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 8;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea03a0;
    local_b8 = "turnPort";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 8;
    pcVar11 = (char *)FUN_008feca4(plVar7,&local_b8);
    if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
      pcVar11 = *(char **)pcVar11;
    }
  }
  iVar4 = atoi(pcVar11);
  *(int *)(param_2 + 0x2a0) = iVar4;
  lVar5 = FUN_008fd190(plVar7,"turnTransport");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea0400:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "turnTransport";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xd;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea0400;
    local_b8 = "turnTransport";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xd;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x2a8,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"stunUrl");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea047c:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "stunUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea047c;
    local_b8 = "stunUrl";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 7;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x2c0,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"stunPort");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea04f8:
    pcVar11 = "";
  }
  else {
    local_b8 = "stunPort";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 8;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea04f8;
    local_b8 = "stunPort";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 8;
    pcVar11 = (char *)FUN_008feca4(plVar7,&local_b8);
    if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
      pcVar11 = *(char **)pcVar11;
    }
  }
  iVar4 = atoi(pcVar11);
  *(int *)(param_2 + 0x2d8) = iVar4;
  lVar5 = FUN_008fd190(plVar7,"stunTransport");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea0558:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "stunTransport";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xd;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea0558;
    local_b8 = "stunTransport";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xd;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x2e0,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"unityAdsGameId");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea05d4:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "unityAdsGameId";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xe;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea05d4;
    local_b8 = "unityAdsGameId";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xe;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x2f8,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar5 = FUN_008fd190(plVar7,"ironsourceAppId");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00ea0658:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b8 = "ironsourceAppId";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xf;
    lVar5 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea0658;
    local_b8 = "ironsourceAppId";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    local_b0 = 0xf;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b8,puVar10);
  FUN_008fce60(param_2 + 0x310,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  *(byte *)(param_2 + 0x328) = param_3 & 1;
LAB_00ea068c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

