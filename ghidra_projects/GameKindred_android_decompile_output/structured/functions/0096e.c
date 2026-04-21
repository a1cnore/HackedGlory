// functions/0096e — 6 functions
#include "libGameKindred.h"




void FUN_0096e130(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc978;
  FUN_008fcdb8(param_1 + 1,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 4,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 7,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 10,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0xd,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x10,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x13,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x16,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x19,&DAT_0320ffa8);
  return;
}




void FUN_0096e1d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc978;
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) {
    operator_delete((void *)param_1[0x1b]);
  }
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    operator_delete((void *)param_1[0x18]);
  }
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    operator_delete((void *)param_1[0x15]);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    operator_delete((void *)param_1[0x12]);
  }
  if ((*(byte *)(param_1 + 0xd) & 1) != 0) {
    operator_delete((void *)param_1[0xf]);
  }
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




void FUN_0096e29c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  double dVar13;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_0096ec2c(param_1);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    plVar4 = (long *)(param_2 + 9);
  }
  else {
    plVar4 = *(long **)(param_2 + 0x18);
  }
  lVar3 = FUN_008fd190(param_3,"id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "id";
    local_70 = 0x100005;
    local_78 = 2;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_80 = "id";
      local_70 = 0x100005;
      local_78 = 2;
      plVar4 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar4);
  FUN_008fce60(param_1 + 8,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    plVar4 = (long *)(param_2 + 0x21);
  }
  else {
    plVar4 = *(long **)(param_2 + 0x30);
  }
  lVar3 = FUN_008fd190(param_3,"font");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "font";
    local_70 = 0x100005;
    local_78 = 4;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_80 = "font";
      local_70 = 0x100005;
      local_78 = 4;
      plVar4 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar4);
  FUN_008fce60(param_1 + 0x20,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    plVar4 = (long *)(param_2 + 0x39);
  }
  else {
    plVar4 = *(long **)(param_2 + 0x48);
  }
  lVar3 = FUN_008fd190(param_3,"textureCurrentProgress");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "textureCurrentProgress";
    local_70 = 0x100005;
    local_78 = 0x16;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_80 = "textureCurrentProgress";
      local_70 = 0x100005;
      local_78 = 0x16;
      plVar4 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar4);
  FUN_008fce60(param_1 + 0x38,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    plVar4 = (long *)(param_2 + 0x51);
  }
  else {
    plVar4 = *(long **)(param_2 + 0x60);
  }
  lVar3 = FUN_008fd190(param_3,"textureNewProgress");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "textureNewProgress";
    local_70 = 0x100005;
    local_78 = 0x12;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_80 = "textureNewProgress";
      local_70 = 0x100005;
      local_78 = 0x12;
      plVar4 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar4);
  FUN_008fce60(param_1 + 0x50,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  uVar11 = *(undefined4 *)(param_2 + 0x70);
  lVar3 = FUN_008fd190(param_3,"x");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "x";
    local_70 = 0x100005;
    local_78 = 1;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_80 = "x";
      local_70 = 0x100005;
      local_78 = 1;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar11 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = uVar11;
  uVar11 = *(undefined4 *)(param_2 + 0x74);
  lVar3 = FUN_008fd190(param_3,"y");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "y";
    local_70 = 0x100005;
    local_78 = 1;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_80 = "y";
      local_70 = 0x100005;
      local_78 = 1;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar11 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x74) = uVar11;
  uVar11 = *(undefined4 *)(param_2 + 0x78);
  lVar3 = FUN_008fd190(param_3,"width");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "width";
    local_70 = 0x100005;
    local_78 = 5;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_80 = "width";
      local_70 = 0x100005;
      local_78 = 5;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar11 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = uVar11;
  uVar11 = *(undefined4 *)(param_2 + 0x7c);
  lVar3 = FUN_008fd190(param_3,"height");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "height";
    local_70 = 0x100005;
    local_78 = 6;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_80 = "height";
      local_70 = 0x100005;
      local_78 = 6;
      puVar5 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar11 = *puVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar11;
  dVar13 = (double)*(float *)(param_2 + 0x80);
  lVar3 = FUN_008fd190(param_3,"fillValue");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "fillValue";
    local_70 = 0x100005;
    local_78 = 9;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "fillValue";
      local_70 = 0x100005;
      local_78 = 9;
      FUN_008feca4(param_3,&local_80);
      dVar13 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x80) = (float)dVar13;
  dVar13 = (double)*(float *)(param_2 + 0x84);
  lVar3 = FUN_008fd190(param_3,"minFillValue");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "minFillValue";
    local_70 = 0x100005;
    local_78 = 0xc;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "minFillValue";
      local_70 = 0x100005;
      local_78 = 0xc;
      FUN_008feca4(param_3,&local_80);
      dVar13 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x84) = (float)dVar13;
  dVar13 = (double)*(float *)(param_2 + 0x88);
  lVar3 = FUN_008fd190(param_3,"maxFillValue");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "maxFillValue";
    local_70 = 0x100005;
    local_78 = 0xc;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "maxFillValue";
      local_70 = 0x100005;
      local_78 = 0xc;
      FUN_008feca4(param_3,&local_80);
      dVar13 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x88) = (float)dVar13;
  dVar13 = (double)*(float *)(param_2 + 0x8c);
  lVar3 = FUN_008fd190(param_3,"newProgressHeightScale");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "newProgressHeightScale";
    local_70 = 0x100005;
    local_78 = 0x16;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "newProgressHeightScale";
      local_70 = 0x100005;
      local_78 = 0x16;
      FUN_008feca4(param_3,&local_80);
      dVar13 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x8c) = (float)dVar13;
  bVar2 = *(char *)(param_2 + 0x90) != '\0';
  lVar3 = FUN_008fd190(param_3,"bDrawLabels");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "bDrawLabels";
    local_70 = 0x100005;
    local_78 = 0xb;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_80 = "bDrawLabels";
      local_70 = 0x100005;
      local_78 = 0xb;
      lVar3 = FUN_008feca4(param_3,&local_80);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x90) = bVar2;
  bVar2 = *(char *)(param_2 + 0x91) != '\0';
  lVar3 = FUN_008fd190(param_3,"bIsRequired");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "bIsRequired";
    local_70 = 0x100005;
    local_78 = 0xb;
    lVar3 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_80 = "bIsRequired";
      local_70 = 0x100005;
      local_78 = 0xb;
      lVar3 = FUN_008feca4(param_3,&local_80);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x91) = bVar2;
  uVar12 = (*(uint *)(param_2 + 0x68) & 0xff00ff00) >> 8 |
           (*(uint *)(param_2 + 0x68) & 0xff00ff) << 8;
  uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
  lVar3 = FUN_008fd190(param_3,"tintCurrentProgress");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "tintCurrentProgress";
    local_70 = 0x100005;
    local_78 = 0x13;
    puVar6 = (undefined8 *)FUN_008feca4(param_3,&local_80);
    if ((*(int *)(puVar6 + 2) == 4) && (*(int *)(puVar6 + 1) == 3)) {
      piVar7 = (int *)*puVar6;
      uVar8 = 0;
      piVar9 = piVar7 + 4;
      do {
        if ((*(byte *)((long)piVar9 + 1) >> 3 & 1) == 0) goto LAB_0096eb44;
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 6;
      } while (uVar8 < 3);
      uVar12 = *piVar7 << 0x18 | piVar7[6] << 0x10 | piVar7[0xc] << 8 | 0xff;
    }
  }
LAB_0096eb44:
  uVar10 = (*(uint *)(param_2 + 0x6c) & 0xff00ff00) >> 8 |
           (*(uint *)(param_2 + 0x6c) & 0xff00ff) << 8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  lVar3 = FUN_008fd190(param_3,"tintNewProgress");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_80 = "tintNewProgress";
    local_70 = 0x100005;
    local_78 = 0xf;
    puVar6 = (undefined8 *)FUN_008feca4(param_3,&local_80);
    if ((*(int *)(puVar6 + 2) == 4) && (*(int *)(puVar6 + 1) == 3)) {
      piVar7 = (int *)*puVar6;
      uVar8 = 0;
      piVar9 = piVar7 + 4;
      do {
        if ((*(byte *)((long)piVar9 + 1) >> 3 & 1) == 0) goto LAB_0096ebec;
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 6;
      } while (uVar8 < 3);
      uVar10 = *piVar7 << 0x18 | piVar7[6] << 0x10 | piVar7[0xc] << 8 | 0xff;
    }
  }
LAB_0096ebec:
  uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x68) = uVar12 >> 0x10 | uVar12 << 0x10;
  *(uint *)(param_1 + 0x6c) = uVar10 >> 0x10 | uVar10 << 0x10;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096ec2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc9a0;
  FUN_008fcdb8(param_1 + 1,&DAT_0320ffa8);
  FUN_008fa54c(param_1 + 4,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_008fa54c(param_1 + 7,"white_background");
  FUN_008fa54c(param_1 + 10,"white_background");
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x11] = 0x3f8000003f800000;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
  return;
}




void FUN_0096ecc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc9a0;
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




void FUN_0096ed34(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  char *pcVar7;
  ulong uVar8;
  undefined4 uVar9;
  char *local_80;
  ulong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR_FUN_027bc9c8;
  FUN_008fcdb8(param_1 + 1,&DAT_0320ffa8);
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 6) = 1;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    plVar5 = (long *)(param_2 + 9);
  }
  else {
    plVar5 = *(long **)(param_2 + 0x18);
  }
  lVar4 = FUN_008fd190(param_3,"id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_80 = "id";
    local_70 = 0x100005;
    local_78 = 2;
    lVar4 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_80 = "id";
      local_70 = 0x100005;
      local_78 = 2;
      plVar5 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar5);
  FUN_008fce60(param_1 + 1,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  uVar9 = *(undefined4 *)(param_2 + 0x20);
  lVar4 = FUN_008fd190(param_3,"minWins");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_80 = "minWins";
    local_70 = 0x100005;
    local_78 = 7;
    lVar4 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_80 = "minWins";
      local_70 = 0x100005;
      local_78 = 7;
      puVar6 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar9 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 4) = uVar9;
  uVar9 = *(undefined4 *)(param_2 + 0x24);
  lVar4 = FUN_008fd190(param_3,"maxWins");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_80 = "maxWins";
    local_70 = 0x100005;
    local_78 = 7;
    lVar4 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_80 = "maxWins";
      local_70 = 0x100005;
      local_78 = 7;
      puVar6 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar9 = *puVar6;
    }
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar9;
  uVar9 = *(undefined4 *)(param_2 + 0x28);
  lVar4 = FUN_008fd190(param_3,"minLosses");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_80 = "minLosses";
    local_70 = 0x100005;
    local_78 = 9;
    lVar4 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_80 = "minLosses";
      local_70 = 0x100005;
      local_78 = 9;
      puVar6 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar9 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 5) = uVar9;
  uVar9 = *(undefined4 *)(param_2 + 0x2c);
  lVar4 = FUN_008fd190(param_3,"maxLosses");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_80 = "maxLosses";
    local_70 = 0x100005;
    local_78 = 9;
    lVar4 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_80 = "maxLosses";
      local_70 = 0x100005;
      local_78 = 9;
      puVar6 = (undefined4 *)FUN_008feca4(param_3,&local_80);
      uVar9 = *puVar6;
    }
  }
  *(undefined4 *)((long)param_1 + 0x2c) = uVar9;
  lVar4 = FUN_008fd190(param_3,"filterMode");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar4) {
LAB_0096f088:
    pcVar7 = "filter_require_challenge";
  }
  else {
    local_80 = "filterMode";
    local_70 = 0x100005;
    local_78 = 10;
    lVar4 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_0096f088;
    local_80 = "filterMode";
    local_70 = 0x100005;
    local_78 = 10;
    pcVar7 = (char *)FUN_008feca4(param_3,&local_80);
    if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
      pcVar7 = *(char **)pcVar7;
    }
  }
  FUN_008fa54c(&local_80,pcVar7);
  uVar8 = (ulong)((byte)local_80 >> 1);
  uVar1 = uVar8;
  if (((ulong)local_80 & 1) != 0) {
    uVar1 = local_78;
  }
  if (uVar1 == 0xc) {
    iVar3 = FUN_0090d610(&local_80,0,0xffffffffffffffff,"filter_never",0xc);
    if (iVar3 == 0) {
      uVar9 = 0;
      goto LAB_0096f15c;
    }
    uVar8 = (ulong)((byte)local_80 >> 1);
  }
  if (((byte)local_80 & 1) != 0) {
    uVar8 = local_78;
  }
  if ((uVar8 == 0x1b) &&
     (iVar3 = FUN_0090d610(&local_80,0,0xffffffffffffffff,"filter_require_no_challenge",0x1b),
     iVar3 == 0)) {
    uVar9 = 2;
  }
  else {
    uVar9 = 1;
  }
LAB_0096f15c:
  *(undefined4 *)(param_1 + 6) = uVar9;
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

