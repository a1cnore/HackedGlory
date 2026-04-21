// functions/0096f — 9 functions
#include "libGameKindred.h"




void FUN_0096f1a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc9c8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}




void FUN_0096f1c8(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ulong uVar7;
  undefined4 uVar8;
  char *local_80;
  ulong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR_FUN_027bc9f0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar8 = *(undefined4 *)(param_2 + 8);
  lVar4 = FUN_008fd190(param_3,"major");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_80 = "major";
    local_70 = 0x100005;
    local_78 = 5;
    lVar4 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_80 = "major";
      local_70 = 0x100005;
      local_78 = 5;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar8 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 1) = uVar8;
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  lVar4 = FUN_008fd190(param_3,"minor");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_80 = "minor";
    local_70 = 0x100005;
    local_78 = 5;
    lVar4 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_80 = "minor";
      local_70 = 0x100005;
      local_78 = 5;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar8 = *puVar5;
    }
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar8;
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  lVar4 = FUN_008fd190(param_3,"micro");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_80 = "micro";
    local_70 = 0x100005;
    local_78 = 5;
    lVar4 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_80 = "micro";
      local_70 = 0x100005;
      local_78 = 5;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar8 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 2) = uVar8;
  lVar4 = FUN_008fd190(param_3,"filterMode");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar4) {
LAB_0096f3d0:
    pcVar6 = "filter_never";
  }
  else {
    local_80 = "filterMode";
    local_70 = 0x100005;
    local_78 = 10;
    lVar4 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_0096f3d0;
    local_80 = "filterMode";
    local_70 = 0x100005;
    local_78 = 10;
    pcVar6 = (char *)FUN_008feca4(param_3,&local_80);
    if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
      pcVar6 = *(char **)pcVar6;
    }
  }
  FUN_008fa54c(&local_80,pcVar6);
  uVar7 = (ulong)((byte)local_80 >> 1);
  uVar1 = uVar7;
  if (((ulong)local_80 & 1) != 0) {
    uVar1 = local_78;
  }
  if (uVar1 == 0x13) {
    iVar3 = FUN_0090d610(&local_80,0,0xffffffffffffffff,"filter_if_less_than",0x13);
    if (iVar3 == 0) {
      *(undefined4 *)((long)param_1 + 0x14) = 2;
      goto LAB_0096f4b4;
    }
    uVar7 = (ulong)((byte)local_80 >> 1);
  }
  if (((byte)local_80 & 1) != 0) {
    uVar7 = local_78;
  }
  if (uVar7 == 0x17) {
    iVar3 = FUN_0090d610(&local_80,0,0xffffffffffffffff,"filter_if_greater_equal",0x17);
    if (iVar3 == 0) {
      *(undefined4 *)((long)param_1 + 0x14) = 1;
      goto LAB_0096f4b4;
    }
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
LAB_0096f4b4:
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0096f4f8(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_0096f970(param_1);
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x21);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x30);
  }
  lVar2 = FUN_008fd190(param_3,"type");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "type";
    local_60 = 0x100005;
    local_68 = 4;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "type";
      local_60 = 0x100005;
      local_68 = 4;
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
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  lVar2 = FUN_008fd190(param_3,"expires");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "expires";
    local_60 = 0x100005;
    local_68 = 7;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x11) >> 4 & 1) != 0) {
      local_70 = "expires";
      local_60 = 0x100005;
      local_68 = 7;
      puVar4 = (undefined8 *)FUN_008feca4(param_3,&local_70);
      uVar9 = *puVar4;
    }
  }
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    plVar3 = (long *)(param_2 + 9);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x18);
  }
  lVar2 = FUN_008fd190(param_3,"string");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "string";
    local_60 = 0x100005;
    local_68 = 6;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "string";
      local_60 = 0x100005;
      local_68 = 6;
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
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x39);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x48);
  }
  lVar2 = FUN_008fd190(param_3,"imageId");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "imageId";
    local_60 = 0x100005;
    local_68 = 7;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "imageId";
      local_60 = 0x100005;
      local_68 = 7;
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
  lVar2 = FUN_008fd190(param_3,"expireTimeLogic");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "expireTimeLogic";
    local_60 = 0x100005;
    local_68 = 0xf;
    lVar2 = FUN_008feca4(param_3,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_70 = "expireTimeLogic";
      local_60 = 0x100005;
      local_68 = 0xf;
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
  uVar8 = (*(uint *)(param_2 + 0x68) & 0xff00ff00) >> 8 |
          (*(uint *)(param_2 + 0x68) & 0xff00ff) << 8;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
  lVar2 = FUN_008fd190(param_3,&DAT_01b96d0c);
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_70 = "tint";
    local_60 = 0x100005;
    local_68 = 4;
    puVar4 = (undefined8 *)FUN_008feca4(param_3,&local_70);
    if ((*(int *)(puVar4 + 2) == 4) && (*(int *)(puVar4 + 1) == 3)) {
      piVar5 = (int *)*puVar4;
      uVar6 = 0;
      piVar7 = piVar5 + 4;
      do {
        if ((*(byte *)((long)piVar7 + 1) >> 3 & 1) == 0) goto LAB_0096f938;
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 6;
      } while (uVar6 < 3);
      uVar8 = *piVar5 << 0x18 | piVar5[6] << 0x10 | piVar5[0xc] << 8 | 0xff;
    }
  }
LAB_0096f938:
  uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x68) = uVar8 >> 0x10 | uVar8 << 0x10;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096f970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc900;
  FUN_008fcdb8(param_1 + 1,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 4,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 7,&DAT_0320ffa8);
  FUN_008fa54c(param_1 + 10,"timestamp");
  *(undefined4 *)(param_1 + 0xd) = 0xff000000;
  param_1[0xe] = 0xffffffffffffffff;
  return;
}




void FUN_0096f9e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc900;
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




void FUN_0096fa58(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  double dVar4;
  undefined **local_e0;
  ulong local_d8;
  undefined4 local_d0;
  void *local_c8;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027bc928;
  FUN_0096f970(param_1 + 1);
  pfVar3 = (float *)(param_1 + 0x10);
  pfVar3[0] = 0.0;
  pfVar3[1] = 0.0;
  param_1[0x11] = 0;
  dVar4 = (double)*(float *)(param_2 + 0x80);
  lVar2 = FUN_008fd190(param_3,"textPositionX");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_e0 = (undefined **)0x1b96d11;
    local_d0 = 0x100005;
    local_d8 = 0xd;
    lVar2 = FUN_008feca4(param_3,&local_e0);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_e0 = (undefined **)0x1b96d11;
      local_d0 = 0x100005;
      local_d8 = 0xd;
      FUN_008feca4(param_3,&local_e0);
      dVar4 = (double)FUN_008fc0f0();
    }
  }
  *pfVar3 = (float)dVar4;
  dVar4 = (double)*(float *)(param_2 + 0x84);
  lVar2 = FUN_008fd190(param_3,"textPositionY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_e0 = (undefined **)0x1b96d1f;
    local_d0 = 0x100005;
    local_d8 = 0xd;
    lVar2 = FUN_008feca4(param_3,&local_e0);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_e0 = (undefined **)0x1b96d1f;
      local_d0 = 0x100005;
      local_d8 = 0xd;
      FUN_008feca4(param_3,&local_e0);
      dVar4 = (double)FUN_008fc0f0();
    }
  }
  *(float *)((long)param_1 + 0x84) = (float)dVar4;
  dVar4 = (double)*(float *)(param_2 + 0x88);
  lVar2 = FUN_008fd190(param_3,"textWidth");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_e0 = (undefined **)0x1b96d2d;
    local_d0 = 0x100005;
    local_d8 = 9;
    lVar2 = FUN_008feca4(param_3,&local_e0);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_e0 = (undefined **)0x1b96d2d;
      local_d0 = 0x100005;
      local_d8 = 9;
      FUN_008feca4(param_3,&local_e0);
      dVar4 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x11) = (float)dVar4;
  dVar4 = (double)*(float *)(param_2 + 0x8c);
  lVar2 = FUN_008fd190(param_3,"positionY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_e0 = (undefined **)0x1b96b43;
    local_d0 = 0x100005;
    local_d8 = 9;
    lVar2 = FUN_008feca4(param_3,&local_e0);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_e0 = (undefined **)0x1b96b43;
      local_d0 = 0x100005;
      local_d8 = 9;
      FUN_008feca4(param_3,&local_e0);
      dVar4 = (double)FUN_008fc0f0();
    }
  }
  *(float *)((long)param_1 + 0x8c) = (float)dVar4;
  lVar2 = FUN_008fd190(param_3,"annotation");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_e0 = (undefined **)0x1b96d37;
    local_d0 = 0x100005;
    local_d8 = 10;
    FUN_008feca4(param_3,&local_e0);
    FUN_0096fdcc(&local_e0);
    FUN_008fce60(param_1 + 2,&local_d8);
    FUN_008fce60(param_1 + 5,local_c0);
    FUN_008fce60(param_1 + 8,local_a8);
    FUN_008fce60(param_1 + 0xb,local_90);
    local_e0 = &PTR_FUN_027bc900;
    param_1[0xf] = uStack_70;
    param_1[0xe] = local_78;
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096fdcc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_b0;
  byte local_a8;
  void *local_98;
  byte local_90;
  void *local_80;
  byte local_78;
  void *local_68;
  byte local_60;
  void *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0096f970(&local_b0);
  FUN_0096f4f8(param_1,&local_b0,param_2);
  local_b0 = &PTR_FUN_027bc900;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096fe84(undefined8 *param_1)

{
  param_1[1] = &PTR_FUN_027bc900;
  *param_1 = &PTR_FUN_027bc928;
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    operator_delete((void *)param_1[0xd]);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}




void FUN_0096ff0c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00970848(param_1);
  dVar11 = (double)*(float *)(param_2 + 0x74);
  lVar2 = FUN_008fd190(param_3,"positionX");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "positionX";
    local_70 = 0x100005;
    local_78 = 9;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_80 = "positionX";
      local_70 = 0x100005;
      local_78 = 9;
      FUN_008feca4(param_3,&local_80);
      dVar11 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x74) = (float)dVar11;
  dVar11 = (double)*(float *)(param_2 + 0x78);
  lVar2 = FUN_008fd190(param_3,"positionY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "positionY";
    local_70 = 0x100005;
    local_78 = 9;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_80 = "positionY";
      local_70 = 0x100005;
      local_78 = 9;
      FUN_008feca4(param_3,&local_80);
      dVar11 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x78) = (float)dVar11;
  dVar11 = (double)*(float *)(param_2 + 0x7c);
  lVar2 = FUN_008fd190(param_3,"anchorX");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "anchorX";
    local_70 = 0x100005;
    local_78 = 7;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_80 = "anchorX";
      local_70 = 0x100005;
      local_78 = 7;
      FUN_008feca4(param_3,&local_80);
      dVar11 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x7c) = (float)dVar11;
  dVar11 = (double)*(float *)(param_2 + 0x80);
  lVar2 = FUN_008fd190(param_3,"anchorY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "anchorY";
    local_70 = 0x100005;
    local_78 = 7;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_80 = "anchorY";
      local_70 = 0x100005;
      local_78 = 7;
      FUN_008feca4(param_3,&local_80);
      dVar11 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x80) = (float)dVar11;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    plVar3 = (long *)(param_2 + 9);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x18);
  }
  lVar2 = FUN_008fd190(param_3,"title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "title";
    local_70 = 0x100005;
    local_78 = 5;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_80 = "title";
      local_70 = 0x100005;
      local_78 = 5;
      plVar3 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar3);
  FUN_008fce60(param_1 + 8,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x21);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x30);
  }
  lVar2 = FUN_008fd190(param_3,"subtitle");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "subtitle";
    local_70 = 0x100005;
    local_78 = 8;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_80 = "subtitle";
      local_70 = 0x100005;
      local_78 = 8;
      plVar3 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar3);
  FUN_008fce60(param_1 + 0x20,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  uVar9 = (*(uint *)(param_2 + 0x68) & 0xff00ff00) >> 8 |
          (*(uint *)(param_2 + 0x68) & 0xff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  lVar2 = FUN_008fd190(param_3,"titleColor");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "titleColor";
    local_70 = 0x100005;
    local_78 = 10;
    puVar4 = (undefined8 *)FUN_008feca4(param_3,&local_80);
    if ((*(int *)(puVar4 + 2) == 4) && (*(int *)(puVar4 + 1) == 3)) {
      piVar6 = (int *)*puVar4;
      uVar7 = 0;
      piVar8 = piVar6 + 4;
      do {
        if ((*(byte *)((long)piVar8 + 1) >> 3 & 1) == 0) goto LAB_0097036c;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 6;
      } while (uVar7 < 3);
      uVar9 = *piVar6 << 0x18 | piVar6[6] << 0x10 | piVar6[0xc] << 8 | 0xff;
    }
  }
LAB_0097036c:
  uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x68) = uVar9 >> 0x10 | uVar9 << 0x10;
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x39);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x48);
  }
  lVar2 = FUN_008fd190(param_3,"heading");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "heading";
    local_70 = 0x100005;
    local_78 = 7;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_80 = "heading";
      local_70 = 0x100005;
      local_78 = 7;
      plVar3 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar3);
  FUN_008fce60(param_1 + 0x38,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  uVar9 = (*(uint *)(param_2 + 0x6c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_2 + 0x6c) & 0xff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  lVar2 = FUN_008fd190(param_3,"headingColor");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "headingColor";
    local_70 = 0x100005;
    local_78 = 0xc;
    puVar4 = (undefined8 *)FUN_008feca4(param_3,&local_80);
    if ((*(int *)(puVar4 + 2) == 4) && (*(int *)(puVar4 + 1) == 3)) {
      piVar6 = (int *)*puVar4;
      uVar7 = 0;
      piVar8 = piVar6 + 4;
      do {
        if ((*(byte *)((long)piVar8 + 1) >> 3 & 1) == 0) goto LAB_009704d4;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 6;
      } while (uVar7 < 3);
      uVar9 = *piVar6 << 0x18 | piVar6[6] << 0x10 | piVar6[0xc] << 8 | 0xff;
    }
  }
LAB_009704d4:
  uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x6c) = uVar9 >> 0x10 | uVar9 << 0x10;
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x51);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x60);
  }
  lVar2 = FUN_008fd190(param_3,"caption");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "caption";
    local_70 = 0x100005;
    local_78 = 7;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_80 = "caption";
      local_70 = 0x100005;
      local_78 = 7;
      plVar3 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar3);
  FUN_008fce60(param_1 + 0x50,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  uVar9 = (*(uint *)(param_2 + 0x70) & 0xff00ff00) >> 8 |
          (*(uint *)(param_2 + 0x70) & 0xff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  lVar2 = FUN_008fd190(param_3,"captionColor");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "captionColor";
    local_70 = 0x100005;
    local_78 = 0xc;
    puVar4 = (undefined8 *)FUN_008feca4(param_3,&local_80);
    if ((*(int *)(puVar4 + 2) == 4) && (*(int *)(puVar4 + 1) == 3)) {
      piVar6 = (int *)*puVar4;
      uVar7 = 0;
      piVar8 = piVar6 + 4;
      do {
        if ((*(byte *)((long)piVar8 + 1) >> 3 & 1) == 0) goto LAB_0097063c;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 6;
      } while (uVar7 < 3);
      uVar9 = *piVar6 << 0x18 | piVar6[6] << 0x10 | piVar6[0xc] << 8 | 0xff;
    }
  }
LAB_0097063c:
  uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x70) = uVar9 >> 0x10 | uVar9 << 0x10;
  uVar10 = *(undefined4 *)(param_2 + 0x84);
  lVar2 = FUN_008fd190(param_3,"x");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "x";
    local_70 = 0x100005;
    local_78 = 1;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_80 = "x";
      local_70 = 0x100005;
      local_78 = 1;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar10 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x84) = uVar10;
  uVar10 = *(undefined4 *)(param_2 + 0x88);
  lVar2 = FUN_008fd190(param_3,"y");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "y";
    local_70 = 0x100005;
    local_78 = 1;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_80 = "y";
      local_70 = 0x100005;
      local_78 = 1;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar10 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = uVar10;
  uVar10 = *(undefined4 *)(param_2 + 0x8c);
  lVar2 = FUN_008fd190(param_3,"width");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "width";
    local_70 = 0x100005;
    local_78 = 5;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_80 = "width";
      local_70 = 0x100005;
      local_78 = 5;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar10 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x8c) = uVar10;
  uVar10 = *(undefined4 *)(param_2 + 0x90);
  lVar2 = FUN_008fd190(param_3,"height");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "height";
    local_70 = 0x100005;
    local_78 = 6;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_80 = "height";
      local_70 = 0x100005;
      local_78 = 6;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar10 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x90) = uVar10;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

