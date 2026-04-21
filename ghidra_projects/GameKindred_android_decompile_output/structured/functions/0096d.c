// functions/0096d — 9 functions
#include "libGameKindred.h"




void FUN_0096d1b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027bc8b0;
  FUN_008fcdb8(param_1 + 3,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 6,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 9,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0xc,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0xf,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x12,&DAT_0320ffa8);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff00000000;
  *(undefined2 *)((long)param_1 + 0xcc) = 1;
  *(undefined1 *)((long)param_1 + 0xce) = 0;
  return;
}




void FUN_0096d24c(uint *param_1,long param_2)

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
    FUN_0096af60(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  *(undefined ***)(lVar4 + -0x38) = &PTR_FUN_027bc888;
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 8);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x20);
  return;
}




void FUN_0096d2f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_80;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80 = &PTR_FUN_027bc888;
  FUN_008fcdb8(local_78,&DAT_0320ffa8);
  FUN_008fcdb8(local_60,&DAT_0320ffa8);
  FUN_0096c310(param_1,&local_80,param_2);
  local_80 = &PTR_FUN_027bc888;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096d3b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc8b0;
  if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
    operator_delete((void *)param_1[0x17]);
  }
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    operator_delete((void *)param_1[0x14]);
  }
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
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
  FUN_00977c44(param_1 + 1,1);
  return;
}




void FUN_0096d45c(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  double dVar8;
  char *local_150;
  undefined8 local_148;
  undefined4 local_140;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027bc8d8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  dVar8 = (double)*(float *)(param_2 + 0x18);
  lVar3 = FUN_008fd190(param_3,"positionX");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_150 = "positionX";
    local_140 = 0x100005;
    local_148 = 9;
    lVar3 = FUN_008feca4(param_3,&local_150);
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_150 = "positionX";
      local_140 = 0x100005;
      local_148 = 9;
      FUN_008feca4(param_3,&local_150);
      dVar8 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 3) = (float)dVar8;
  dVar8 = (double)*(float *)(param_2 + 0x1c);
  lVar3 = FUN_008fd190(param_3,"positionY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_150 = "positionY";
    local_140 = 0x100005;
    local_148 = 9;
    lVar3 = FUN_008feca4(param_3,&local_150);
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_150 = "positionY";
      local_140 = 0x100005;
      local_148 = 9;
      FUN_008feca4(param_3,&local_150);
      dVar8 = (double)FUN_008fc0f0();
    }
  }
  *(float *)((long)param_1 + 0x1c) = (float)dVar8;
  dVar8 = (double)*(float *)(param_2 + 0x20);
  lVar3 = FUN_008fd190(param_3,"anchorX");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_150 = "anchorX";
    local_140 = 0x100005;
    local_148 = 7;
    lVar3 = FUN_008feca4(param_3,&local_150);
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_150 = "anchorX";
      local_140 = 0x100005;
      local_148 = 7;
      FUN_008feca4(param_3,&local_150);
      dVar8 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 4) = (float)dVar8;
  dVar8 = (double)*(float *)(param_2 + 0x24);
  lVar3 = FUN_008fd190(param_3,"anchorY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_150 = "anchorY";
    local_140 = 0x100005;
    local_148 = 7;
    lVar3 = FUN_008feca4(param_3,&local_150);
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_150 = "anchorY";
      local_140 = 0x100005;
      local_148 = 7;
      FUN_008feca4(param_3,&local_150);
      dVar8 = (double)FUN_008fc0f0();
    }
  }
  *(float *)((long)param_1 + 0x24) = (float)dVar8;
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  lVar3 = FUN_008fd190(param_3,"separation");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_150 = "separation";
    local_140 = 0x100005;
    local_148 = 10;
    lVar3 = FUN_008feca4(param_3,&local_150);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_150 = "separation";
      local_140 = 0x100005;
      local_148 = 10;
      puVar4 = (undefined4 *)FUN_008feca4(param_3,&local_150);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 5) = uVar7;
  bVar2 = *(char *)(param_2 + 0x2c) != '\0';
  lVar3 = FUN_008fd190(param_3,"horizontal");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_150 = "horizontal";
    local_140 = 0x100005;
    local_148 = 10;
    lVar3 = FUN_008feca4(param_3,&local_150);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_150 = "horizontal";
      local_140 = 0x100005;
      local_148 = 10;
      lVar3 = FUN_008feca4(param_3,&local_150);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)((long)param_1 + 0x2c) = bVar2;
  lVar3 = FUN_008fd190(param_3,"buttons");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_150 = "buttons";
    local_140 = 0x100005;
    local_148 = 7;
    lVar3 = FUN_008feca4(param_3,&local_150);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_150 = "buttons";
      local_140 = 0x100005;
      local_148 = 7;
      plVar5 = (long *)FUN_008feca4(param_3,&local_150);
      if ((int)plVar5[1] != 0) {
        lVar3 = 0;
        uVar6 = 0;
        do {
          FUN_0096d9bc(&local_150,*plVar5 + lVar3);
          FUN_0096d8b4(param_1 + 1,&local_150);
          FUN_0096d3b8(&local_150);
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar6 < *(uint *)(plVar5 + 1));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096d8b4(uint *param_1,long param_2)

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
    FUN_0096acb4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xd0;
  *(undefined ***)(lVar4 + -0xd0) = &PTR_FUN_027bc8b0;
  FUN_0096aa0c(lVar4 + -200,param_2 + 8);
  FUN_008fcdb8(lVar4 + -0xb8,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0xa0,param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x88,param_2 + 0x48);
  FUN_008fcdb8(lVar4 + -0x70,param_2 + 0x60);
  FUN_008fcdb8(lVar4 + -0x58,param_2 + 0x78);
  FUN_008fcdb8(lVar4 + -0x40,param_2 + 0x90);
  FUN_008fcdb8(lVar4 + -0x28,param_2 + 0xa8);
  *(undefined8 *)(lVar4 + -9) = *(undefined8 *)(param_2 + 199);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0xc0);
  return;
}




void FUN_0096d9bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_108 [208];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0096d1b4(auStack_108);
  FUN_0096c57c(param_1,auStack_108,param_2);
  FUN_0096d3b8(auStack_108);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096da2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc8d8;
  FUN_00977cbc(param_1 + 1,1);
  return;
}




void FUN_0096da44(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_0096e130(param_1);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    plVar3 = (long *)(param_2 + 9);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x18);
  }
  lVar2 = FUN_008fd190(param_3,"title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "title";
    local_60 = 0x100005;
    local_68 = 5;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "title";
      local_60 = 0x100005;
      local_68 = 5;
      plVar3 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar3);
  FUN_008fce60(param_1 + 8,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x21);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x30);
  }
  lVar2 = FUN_008fd190(param_3,"imageUrl");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "imageUrl";
    local_60 = 0x100005;
    local_68 = 8;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "imageUrl";
      local_60 = 0x100005;
      local_68 = 8;
      plVar3 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar3);
  FUN_008fce60(param_1 + 0x20,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x39);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x48);
  }
  lVar2 = FUN_008fd190(param_3,"body");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "body";
    local_60 = 0x100005;
    local_68 = 4;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "body";
      local_60 = 0x100005;
      local_68 = 4;
      plVar3 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar3);
  FUN_008fce60(param_1 + 0x38,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x51);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x60);
  }
  lVar2 = FUN_008fd190(param_3,"accept");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "accept";
    local_60 = 0x100005;
    local_68 = 6;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "accept";
      local_60 = 0x100005;
      local_68 = 6;
      plVar3 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar3);
  FUN_008fce60(param_1 + 0x50,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x69);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x78);
  }
  lVar2 = FUN_008fd190(param_3,"onAccept");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "onAccept";
    local_60 = 0x100005;
    local_68 = 8;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "onAccept";
      local_60 = 0x100005;
      local_68 = 8;
      plVar3 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar3);
  FUN_008fce60(param_1 + 0x68,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x81);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x90);
  }
  lVar2 = FUN_008fd190(param_3,"reject");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "reject";
    local_60 = 0x100005;
    local_68 = 6;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "reject";
      local_60 = 0x100005;
      local_68 = 6;
      plVar3 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar3);
  FUN_008fce60(param_1 + 0x80,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 0x98) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x99);
  }
  else {
    plVar3 = *(long **)(param_2 + 0xa8);
  }
  lVar2 = FUN_008fd190(param_3,"onReject");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "onReject";
    local_60 = 0x100005;
    local_68 = 8;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "onReject";
      local_60 = 0x100005;
      local_68 = 8;
      plVar3 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar3);
  FUN_008fce60(param_1 + 0x98,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 0xb0) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0xb1);
  }
  else {
    plVar3 = *(long **)(param_2 + 0xc0);
  }
  lVar2 = FUN_008fd190(param_3,"alt");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "alt";
    local_60 = 0x100005;
    local_68 = 3;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "alt";
      local_60 = 0x100005;
      local_68 = 3;
      plVar3 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar3);
  FUN_008fce60(param_1 + 0xb0,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((*(byte *)(param_2 + 200) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0xc9);
  }
  else {
    plVar3 = *(long **)(param_2 + 0xd8);
  }
  lVar2 = FUN_008fd190(param_3,"onAlt");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "onAlt";
    local_60 = 0x100005;
    local_68 = 5;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "onAlt";
      local_60 = 0x100005;
      local_68 = 5;
      plVar3 = (long *)FUN_008feca4(param_3,&local_70);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_70,plVar3);
  FUN_008fce60(param_1 + 200,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

