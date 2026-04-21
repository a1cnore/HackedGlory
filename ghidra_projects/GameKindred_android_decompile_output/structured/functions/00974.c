// functions/00974 — 9 functions
#include "libGameKindred.h"




void FUN_009740b8(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char *local_600;
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined4 uStack_5ec;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_009744d0(param_1);
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x19);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x28);
  }
  lVar2 = FUN_008fd190(param_3,"title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_600 = "title";
    local_5f0 = 0x100005;
    local_5f8 = 5;
    lVar2 = FUN_008feca4(param_3,&local_600);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_600 = "title";
      local_5f0 = 0x100005;
      local_5f8 = 5;
      plVar3 = (long *)FUN_008feca4(param_3,&local_600);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_600,plVar3);
  FUN_008fce60(param_1 + 0x18,&local_600);
  if (((ulong)local_600 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5ec,local_5f0));
  }
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x31);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x40);
  }
  lVar2 = FUN_008fd190(param_3,&DAT_01b96aa3);
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_600 = "href";
    local_5f0 = 0x100005;
    local_5f8 = 4;
    lVar2 = FUN_008feca4(param_3,&local_600);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_600 = "href";
      local_5f0 = 0x100005;
      local_5f8 = 4;
      plVar3 = (long *)FUN_008feca4(param_3,&local_600);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_600,plVar3);
  FUN_008fce60(param_1 + 0x30,&local_600);
  if (((ulong)local_600 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5ec,local_5f0));
  }
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x49);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x58);
  }
  lVar2 = FUN_008fd190(param_3,"label");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_600 = "label";
    local_5f0 = 0x100005;
    local_5f8 = 5;
    lVar2 = FUN_008feca4(param_3,&local_600);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_600 = "label";
      local_5f0 = 0x100005;
      local_5f8 = 5;
      plVar3 = (long *)FUN_008feca4(param_3,&local_600);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_600,plVar3);
  FUN_008fce60(param_1 + 0x48,&local_600);
  if (((ulong)local_600 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5ec,local_5f0));
  }
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x61);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x70);
  }
  lVar2 = FUN_008fd190(param_3,"templateClass");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_600 = "templateClass";
    local_5f0 = 0x100005;
    local_5f8 = 0xd;
    lVar2 = FUN_008feca4(param_3,&local_600);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_600 = "templateClass";
      local_5f0 = 0x100005;
      local_5f8 = 0xd;
      plVar3 = (long *)FUN_008feca4(param_3,&local_600);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_600,plVar3);
  FUN_008fce60(param_1 + 0x60,&local_600);
  if (((ulong)local_600 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5ec,local_5f0));
  }
  lVar2 = FUN_008fd190(param_3,"items");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_600 = "items";
    local_5f0 = 0x100005;
    local_5f8 = 5;
    lVar2 = FUN_008feca4(param_3,&local_600);
    if (*(int *)(lVar2 + 0x10) == 4) {
      local_600 = "items";
      local_5f0 = 0x100005;
      local_5f8 = 5;
      plVar3 = (long *)FUN_008feca4(param_3,&local_600);
      if ((int)plVar3[1] != 0) {
        lVar2 = 0;
        uVar4 = 0;
        do {
          FUN_009745bc(&local_600,*plVar3 + lVar2);
          FUN_00974530(param_1 + 8,&local_600);
          FUN_00973e08(&local_600);
          uVar4 = uVar4 + 1;
          lVar2 = lVar2 + 0x18;
        } while (uVar4 < *(uint *)(plVar3 + 1));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009744d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027bca40;
  FUN_008fcdb8(param_1 + 3,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 6,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 9,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0xc,&DAT_0320ffa8);
  return;
}




void FUN_00974530(uint *param_1,undefined8 param_2)

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
    FUN_0096a464(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  FUN_0096a538(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x598 + -0x598,param_2);
  return;
}




void FUN_009745bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_5d0 [1432];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0097374c(auStack_5d0);
  FUN_00970940(param_1,auStack_5d0,param_2);
  FUN_00973e08(auStack_5d0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0097462c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bca40;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00977e28(param_1 + 1,1);
  return;
}




void FUN_009746a0(long param_1,long param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00974b70(param_1);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    plVar4 = (long *)(param_2 + 9);
  }
  else {
    plVar4 = *(long **)(param_2 + 0x18);
  }
  lVar3 = FUN_008fd190(param_3,"productID");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_70 = "productID";
    local_60 = 0x100005;
    local_68 = 9;
    lVar3 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_70 = "productID";
      local_60 = 0x100005;
      local_68 = 9;
      plVar4 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar4);
  FUN_008fce60(param_1 + 8,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    plVar4 = (long *)(param_2 + 0x21);
  }
  else {
    plVar4 = *(long **)(param_2 + 0x30);
  }
  lVar3 = FUN_008fd190(param_3,"key");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_70 = "key";
    local_60 = 0x100005;
    local_68 = 3;
    lVar3 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_70 = "key";
      local_60 = 0x100005;
      local_68 = 3;
      plVar4 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar4);
  FUN_008fce60(param_1 + 0x20,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    plVar4 = (long *)(param_2 + 0x39);
  }
  else {
    plVar4 = *(long **)(param_2 + 0x48);
  }
  lVar3 = FUN_008fd190(param_3,"type");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_70 = "type";
    local_60 = 0x100005;
    local_68 = 4;
    lVar3 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_70 = "type";
      local_60 = 0x100005;
      local_68 = 4;
      plVar4 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar4);
  FUN_008fce60(param_1 + 0x38,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    plVar4 = (long *)(param_2 + 0x51);
  }
  else {
    plVar4 = *(long **)(param_2 + 0x60);
  }
  lVar3 = FUN_008fd190(param_3,"bgImg");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_70 = "bgImg";
    local_60 = 0x100005;
    local_68 = 5;
    lVar3 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_70 = "bgImg";
      local_60 = 0x100005;
      local_68 = 5;
      plVar4 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar4);
  FUN_008fce60(param_1 + 0x50,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  uVar6 = *(undefined4 *)(param_2 + 0x68);
  lVar3 = FUN_008fd190(param_3,"bonus");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_70 = "bonus";
    local_60 = 0x100005;
    local_68 = 5;
    lVar3 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_70 = "bonus";
      local_60 = 0x100005;
      local_68 = 5;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_70);
      uVar6 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x68) = uVar6;
  bVar2 = *(char *)(param_2 + 0x6d) != '\0';
  lVar3 = FUN_008fd190(param_3,"enabled");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_70 = "enabled";
    local_60 = 0x100005;
    local_68 = 7;
    lVar3 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_70 = "enabled";
      local_60 = 0x100005;
      local_68 = 7;
      lVar3 = FUN_008feca4(param_3,&local_70);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x6d) = bVar2;
  bVar2 = *(char *)(param_2 + 0x6c) != '\0';
  lVar3 = FUN_008fd190(param_3,"hideTile");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_70 = "hideTile";
    local_60 = 0x100005;
    local_68 = 8;
    lVar3 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_70 = "hideTile";
      local_60 = 0x100005;
      local_68 = 8;
      lVar3 = FUN_008feca4(param_3,&local_70);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x6c) = bVar2;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00974b70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bca68;
  FUN_008fcdb8(param_1 + 1,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 4,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 7,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 10,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((long)param_1 + 0x6c) = 0;
  return;
}




void FUN_00974bd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bca68;
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    operator_delete((void *)param_1[0xc]);
  }
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}




void FUN_00974c4c(long param_1,long param_2,long *param_3)

{
  void *pvVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  void *pvVar10;
  char *local_90;
  void *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  char *local_70;
  void *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00975578(param_1);
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    plVar6 = (long *)(param_2 + 0x61);
  }
  else {
    plVar6 = *(long **)(param_2 + 0x70);
  }
  lVar5 = FUN_008fd190(param_3,"id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    local_90 = "id";
    local_80 = 0x100005;
    local_88 = (void *)0x2;
    lVar5 = FUN_008feca4(param_3,&local_90);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      local_90 = "id";
      local_80 = 0x100005;
      local_88 = (void *)0x2;
      plVar6 = (long *)FUN_008feca4(param_3,&local_90);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
    }
  }
  FUN_008fa54c(&local_90,plVar6);
  FUN_008fce60(param_1 + 0x60,&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_7c,local_80));
  }
  lVar5 = FUN_008fd190(param_3,"discount_label");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    local_90 = "discount_label";
    local_80 = 0x100005;
    local_88 = (void *)0xe;
    lVar5 = FUN_008feca4(param_3,&local_90);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      lVar5 = FUN_008fd190(param_3,"discount_label");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar5) {
LAB_00974de8:
        puVar8 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_90 = "discount_label";
        local_80 = 0x100005;
        local_88 = (void *)0xe;
        lVar5 = FUN_008feca4(param_3,&local_90);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00974de8;
        local_90 = "discount_label";
        local_80 = 0x100005;
        local_88 = (void *)0xe;
        puVar8 = (undefined8 *)FUN_008feca4(param_3,&local_90);
        if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      FUN_008fa54c(&local_90,puVar8);
      FUN_0096c2a4(&local_90,param_1 + 0x78);
      if (((ulong)local_90 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_7c,local_80));
      }
      lVar5 = FUN_008fd190(param_3,"discount_label_interpolator");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
        local_90 = "discount_label_interpolator";
        local_80 = 0x100005;
        local_88 = (void *)0x1b;
        lVar5 = FUN_008feca4(param_3,&local_90);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
          FUN_00e705c8(&local_70,"[DISCOUNT]");
          lVar5 = FUN_008fd190(param_3,"discount_label_interpolator");
          if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar5) {
LAB_00974ec8:
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_90 = "discount_label_interpolator";
            local_80 = 0x100005;
            local_88 = (void *)0x1b;
            lVar5 = FUN_008feca4(param_3,&local_90);
            if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00974ec8;
            local_90 = "discount_label_interpolator";
            local_80 = 0x100005;
            local_88 = (void *)0x1b;
            puVar8 = (undefined8 *)FUN_008feca4(param_3,&local_90);
            if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
              puVar8 = (undefined8 *)*puVar8;
            }
          }
          FUN_00e705c8(&local_90,puVar8);
          FUN_00e71248(param_1 + 0x78,0,&local_70,&local_90);
          if (local_88 != (void *)0x0) {
            operator_delete__(local_88);
            local_90 = (char *)0x0;
            local_88 = (void *)0x0;
          }
          if (local_68 != (void *)0x0) {
            operator_delete__(local_68);
            local_70 = (char *)0x0;
            local_68 = (void *)0x0;
          }
        }
      }
    }
  }
  lVar5 = FUN_008fd190(param_3,"label");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar5) {
LAB_00974f5c:
    puVar8 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_90 = "label";
    local_80 = 0x100005;
    local_88 = (void *)0x5;
    lVar5 = FUN_008feca4(param_3,&local_90);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00974f5c;
    local_90 = "label";
    local_80 = 0x100005;
    local_88 = (void *)0x5;
    puVar8 = (undefined8 *)FUN_008feca4(param_3,&local_90);
    if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
      puVar8 = (undefined8 *)*puVar8;
    }
  }
  FUN_008fa54c(&local_90,puVar8);
  FUN_0096c2a4(&local_90,param_1 + 0x88);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_7c,local_80));
  }
  lVar5 = FUN_008fd190(param_3,"label_interpolator");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    local_90 = "label_interpolator";
    local_80 = 0x100005;
    local_88 = (void *)0x12;
    lVar5 = FUN_008feca4(param_3,&local_90);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      FUN_00e705c8(&local_70,"[DURATION]");
      lVar5 = FUN_008fd190(param_3,"label_interpolator");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar5) {
LAB_0097503c:
        puVar8 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_90 = "label_interpolator";
        local_80 = 0x100005;
        local_88 = (void *)0x12;
        lVar5 = FUN_008feca4(param_3,&local_90);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_0097503c;
        local_90 = "label_interpolator";
        local_80 = 0x100005;
        local_88 = (void *)0x12;
        puVar8 = (undefined8 *)FUN_008feca4(param_3,&local_90);
        if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      FUN_00e705c8(&local_90,puVar8);
      FUN_00e71248(param_1 + 0x88,0,&local_70,&local_90);
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = (char *)0x0;
        local_88 = (void *)0x0;
      }
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
        local_70 = (char *)0x0;
        local_68 = (void *)0x0;
      }
    }
  }
  FUN_00cac27c(param_3,param_1 + 0x18);
  local_80 = 0x100005;
  local_90 = "price";
  local_88 = (void *)0x5;
  plVar6 = (long *)FUN_008feca4(param_3,&local_90);
  lVar5 = FUN_008fd190(plVar6,"silver");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
    FUN_008fa54c(&local_90,&DAT_01e277f2);
    local_78 = 0;
    FUN_008fa54c(&local_70,"silver");
    FUN_008fce60(&local_90,&local_70);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
    lVar5 = FUN_008fd190(plVar6,"silver");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
      uVar9 = 0;
    }
    else {
      local_70 = "silver";
      local_60 = 0x100005;
      local_68 = (void *)0x6;
      lVar5 = FUN_008feca4(plVar6,&local_70);
      uVar9 = 0;
      if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
        local_70 = "silver";
        local_60 = 0x100005;
        local_68 = (void *)0x6;
        puVar7 = (undefined4 *)FUN_008feca4(plVar6,&local_70);
        uVar9 = *puVar7;
      }
    }
    local_78 = uVar9;
    FUN_009755e0(param_1 + 8,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_7c,local_80));
    }
  }
  lVar5 = FUN_008fd190(plVar6,"gold");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
    FUN_008fa54c(&local_90,&DAT_01e277f2);
    local_78 = 0;
    FUN_008fa54c(&local_70,"gold");
    FUN_008fce60(&local_90,&local_70);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
    lVar5 = FUN_008fd190(plVar6,"gold");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
      uVar9 = 0;
    }
    else {
      local_70 = "gold";
      local_60 = 0x100005;
      local_68 = (void *)0x4;
      lVar5 = FUN_008feca4(plVar6,&local_70);
      uVar9 = 0;
      if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
        local_70 = "gold";
        local_60 = 0x100005;
        local_68 = (void *)0x4;
        puVar7 = (undefined4 *)FUN_008feca4(plVar6,&local_70);
        uVar9 = *puVar7;
      }
    }
    local_78 = uVar9;
    FUN_009755e0(param_1 + 8,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_7c,local_80));
    }
  }
  lVar5 = FUN_008fd190(param_3,"visibilityFlags");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    local_90 = "visibilityFlags";
    local_80 = 0x100005;
    local_88 = (void *)0xf;
    lVar5 = FUN_008feca4(param_3,&local_90);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      lVar5 = FUN_008fd190(param_3,"visibilityFlags");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar5) {
LAB_009753b0:
        puVar8 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_90 = "visibilityFlags";
        local_80 = 0x100005;
        local_88 = (void *)0xf;
        lVar5 = FUN_008feca4(param_3,&local_90);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_009753b0;
        local_90 = "visibilityFlags";
        local_80 = 0x100005;
        local_88 = (void *)0xf;
        puVar8 = (undefined8 *)FUN_008feca4(param_3,&local_90);
        if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      FUN_008fa54c(&local_90,puVar8);
      pvVar10 = (void *)(ulong)((byte)local_90 >> 1);
      pvVar1 = pvVar10;
      if (((ulong)local_90 & 1) != 0) {
        pvVar1 = local_88;
      }
      if (pvVar1 == (void *)0x6) {
        iVar4 = FUN_0090d610(&local_90,0,0xffffffffffffffff,"active",6);
        if (iVar4 != 0) {
          pvVar10 = (void *)(ulong)((byte)local_90 >> 1);
          goto LAB_00975414;
        }
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
      else {
LAB_00975414:
        pvVar1 = pvVar10;
        if (((byte)local_90 & 1) != 0) {
          pvVar1 = local_88;
        }
        bVar2 = (byte)local_90;
        if (pvVar1 == (void *)0x8) {
          iVar4 = FUN_0090d610(&local_90,0,0xffffffffffffffff,"inactive",8);
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x98) = 0;
            goto LAB_00975534;
          }
          pvVar10 = (void *)(ulong)((byte)local_90 >> 1);
          bVar2 = (byte)local_90;
        }
        if ((bVar2 & 1) != 0) {
          pvVar10 = local_88;
        }
        if ((pvVar10 == (void *)0x6) &&
           (iVar4 = FUN_0090d610(&local_90,0,0xffffffffffffffff,"always",6), iVar4 == 0)) {
          uVar9 = 3;
        }
        else {
          uVar9 = 2;
        }
        *(undefined4 *)(param_1 + 0x98) = uVar9;
      }
LAB_00975534:
      if (((ulong)local_90 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_7c,local_80));
      }
      goto LAB_00975334;
    }
  }
  *(undefined4 *)(param_1 + 0x98) = 3;
LAB_00975334:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

