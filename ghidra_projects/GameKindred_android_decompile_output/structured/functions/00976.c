// functions/00976 — 5 functions
#include "libGameKindred.h"




void FUN_00976588(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027bcab8;
  FUN_00e70570(param_1 + 3,&DAT_0320ffa8);
  FUN_00e70570(param_1 + 5,&DAT_0320ffa8);
  FUN_00e70570(param_1 + 7,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 9,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0xc,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0xf,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x12,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x15,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x18,&DAT_0320ffa8);
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 5;
  *(undefined2 *)((long)param_1 + 0xe4) = 0;
  return;
}




void FUN_00976638(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
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
    FUN_009780f4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xa0;
  *(undefined ***)(lVar4 + -0xa0) = &PTR_FUN_027bca90;
  FUN_00978240(lVar4 + -0x98,param_2 + 8);
  FUN_008fcdb8(lVar4 + -0x88,param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(lVar4 + -0x48) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(lVar4 + -0x50) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar4 + -0x58) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(lVar4 + -0x60) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar4 + -0x68) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(lVar4 + -0x70) = uVar5;
  FUN_008fcdb8(lVar4 + -0x40,param_2 + 0x60);
  thunk_FUN_00e7051c(lVar4 + -0x28,param_2 + 0x78);
  thunk_FUN_00e7051c(lVar4 + -0x18,param_2 + 0x88);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x98);
  return;
}




void FUN_0097672c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_d8;
  undefined1 auStack_d0 [16];
  byte local_c0;
  void *local_b0;
  byte local_78;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00975578(&local_d8);
  FUN_00974c4c(param_1,&local_d8,param_2);
  local_d8 = &PTR_FUN_027bca90;
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  FUN_00977ea0(auStack_d0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009767f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bcab8;
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    operator_delete((void *)param_1[0x1a]);
  }
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
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00977fa4(param_1 + 1,1);
  return;
}




void FUN_009768b8(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong *puVar11;
  long *plVar12;
  int *piVar13;
  char *pcVar14;
  ulong uVar15;
  undefined4 uVar16;
  char *pcVar17;
  ulong uVar18;
  byte local_d0 [16];
  char *local_c0;
  char *local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined1 auStack_a0 [8];
  ulong local_98;
  long *plStack_90;
  int local_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_009772cc(param_1);
  uVar5 = FUN_00939a50();
  FUN_008fa54c(local_d0,uVar5);
  lVar6 = FUN_008fd190(param_3,"title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar6) {
    local_b8 = "title";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    uStack_b0 = 5;
    lVar6 = FUN_008feca4(param_3,&local_b8);
    if (*(int *)(lVar6 + 0x10) == 3) {
      local_b8 = "title";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      uStack_b0 = 5;
      plVar7 = (long *)FUN_008feca4(param_3,&local_b8);
      pcVar2 = (char *)((ulong)local_d0 | 1);
      if ((local_d0[0] & 1) != 0) {
        pcVar2 = local_c0;
      }
      lVar6 = FUN_008fd190(plVar7,pcVar2);
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_009769f0:
        puVar8 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        pcVar17 = pcVar2 + -1;
        pcVar14 = pcVar17;
        do {
          pcVar14 = pcVar14 + 1;
        } while (*pcVar14 != '\0');
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        uStack_b0 = (ulong)(uint)((int)pcVar14 - (int)pcVar2);
        local_b8 = pcVar2;
        lVar6 = FUN_008feca4(plVar7,&local_b8);
        if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_009769f0;
        do {
          pcVar17 = pcVar17 + 1;
        } while (*pcVar17 != '\0');
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        uStack_b0 = (ulong)(uint)((int)pcVar17 - (int)pcVar2);
        local_b8 = pcVar2;
        puVar8 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
        if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      FUN_008fa54c(&local_b8,puVar8);
      FUN_0096c2a4(&local_b8,param_1 + 8);
      if (((ulong)local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
  }
  lVar6 = FUN_008fd190(param_3,"detailTitle");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar6) {
    local_b8 = "detailTitle";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    uStack_b0 = 0xb;
    lVar6 = FUN_008feca4(param_3,&local_b8);
    if (*(int *)(lVar6 + 0x10) == 3) {
      local_b8 = "detailTitle";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      uStack_b0 = 0xb;
      plVar7 = (long *)FUN_008feca4(param_3,&local_b8);
      pcVar2 = (char *)((ulong)local_d0 | 1);
      if ((local_d0[0] & 1) != 0) {
        pcVar2 = local_c0;
      }
      lVar6 = FUN_008fd190(plVar7,pcVar2);
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_00976af8:
        puVar8 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        pcVar17 = pcVar2 + -1;
        pcVar14 = pcVar17;
        do {
          pcVar14 = pcVar14 + 1;
        } while (*pcVar14 != '\0');
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        uStack_b0 = (ulong)(uint)((int)pcVar14 - (int)pcVar2);
        local_b8 = pcVar2;
        lVar6 = FUN_008feca4(plVar7,&local_b8);
        if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_00976af8;
        do {
          pcVar17 = pcVar17 + 1;
        } while (*pcVar17 != '\0');
        local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
        uStack_b0 = (ulong)(uint)((int)pcVar17 - (int)pcVar2);
        local_b8 = pcVar2;
        puVar8 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
        if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      FUN_008fa54c(&local_b8,puVar8);
      FUN_0096c2a4(&local_b8,param_1 + 0x18);
      if (((ulong)local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
  }
  lVar6 = FUN_008fd190(param_3,"detailDescription");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar6) goto LAB_00976c2c;
  local_b8 = "detailDescription";
  local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
  uStack_b0 = 0x11;
  lVar6 = FUN_008feca4(param_3,&local_b8);
  if (*(int *)(lVar6 + 0x10) != 3) goto LAB_00976c2c;
  local_b8 = "detailDescription";
  local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
  uStack_b0 = 0x11;
  plVar7 = (long *)FUN_008feca4(param_3,&local_b8);
  pcVar2 = (char *)((ulong)local_d0 | 1);
  if ((local_d0[0] & 1) != 0) {
    pcVar2 = local_c0;
  }
  lVar6 = FUN_008fd190(plVar7,pcVar2);
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_00976c00:
    puVar8 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    pcVar17 = pcVar2 + -1;
    pcVar14 = pcVar17;
    do {
      pcVar14 = pcVar14 + 1;
    } while (*pcVar14 != '\0');
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    uStack_b0 = (ulong)(uint)((int)pcVar14 - (int)pcVar2);
    local_b8 = pcVar2;
    lVar6 = FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_00976c00;
    do {
      pcVar17 = pcVar17 + 1;
    } while (*pcVar17 != '\0');
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    uStack_b0 = (ulong)(uint)((int)pcVar17 - (int)pcVar2);
    local_b8 = pcVar2;
    puVar8 = (undefined8 *)FUN_008feca4(plVar7,&local_b8);
    if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
      puVar8 = (undefined8 *)*puVar8;
    }
  }
  FUN_008fa54c(&local_b8,puVar8);
  FUN_0096c2a4(&local_b8,param_1 + 0x28);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
LAB_00976c2c:
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    plVar7 = (long *)(param_2 + 0x39);
  }
  else {
    plVar7 = *(long **)(param_2 + 0x48);
  }
  lVar6 = FUN_008fd190(param_3,"image");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar6) {
    local_b8 = "image";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    uStack_b0 = 5;
    lVar6 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
      local_b8 = "image";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      uStack_b0 = 5;
      plVar7 = (long *)FUN_008feca4(param_3,&local_b8);
      if ((*(byte *)((long)plVar7 + 0x12) >> 6 & 1) == 0) {
        plVar7 = (long *)*plVar7;
      }
    }
  }
  FUN_008fa54c(&local_b8,plVar7);
  FUN_008fce60(param_1 + 0x38,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    plVar7 = (long *)(param_2 + 0x51);
  }
  else {
    plVar7 = *(long **)(param_2 + 0x60);
  }
  lVar6 = FUN_008fd190(param_3,"detailImage");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar6) {
    local_b8 = "detailImage";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    uStack_b0 = 0xb;
    lVar6 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
      local_b8 = "detailImage";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      uStack_b0 = 0xb;
      plVar7 = (long *)FUN_008feca4(param_3,&local_b8);
      if ((*(byte *)((long)plVar7 + 0x12) >> 6 & 1) == 0) {
        plVar7 = (long *)*plVar7;
      }
    }
  }
  FUN_008fa54c(&local_b8,plVar7);
  FUN_008fce60(param_1 + 0x50,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  uVar16 = *(undefined4 *)(param_2 + 0x78);
  lVar6 = FUN_008fd190(param_3,"level");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar6) {
    local_b8 = "level";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    uStack_b0 = 5;
    lVar6 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
      local_b8 = "level";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      uStack_b0 = 5;
      puVar9 = (undefined4 *)FUN_008feca4(param_3,&local_b8);
      uVar16 = *puVar9;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = uVar16;
  bVar4 = *(char *)(param_2 + 0x7c) != '\0';
  lVar6 = FUN_008fd190(param_3,"freeTrack");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar6) {
    local_b8 = "freeTrack";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    uStack_b0 = 9;
    lVar6 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
      local_b8 = "freeTrack";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      uStack_b0 = 9;
      lVar6 = FUN_008feca4(param_3,&local_b8);
      bVar4 = *(int *)(lVar6 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x7c) = bVar4;
  lVar6 = FUN_008fd190(param_3,"iconRepresentations");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar6) {
    local_b8 = "iconRepresentations";
    local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
    uStack_b0 = 0x13;
    lVar6 = FUN_008feca4(param_3,&local_b8);
    if (*(int *)(lVar6 + 0x10) == 4) {
      local_b8 = "iconRepresentations";
      local_a8 = (void *)CONCAT44(local_a8._4_4_,0x100005);
      uStack_b0 = 0x13;
      plVar7 = (long *)FUN_008feca4(param_3,&local_b8);
      uVar15 = (ulong)*(uint *)(plVar7 + 1);
      if (*(uint *)(plVar7 + 1) != 0) {
        lVar6 = 0;
        uVar18 = 0;
        do {
          plVar1 = (long *)(*plVar7 + lVar6);
          if ((int)plVar1[2] == 3) {
            plStack_90 = (long *)0x0;
            local_98 = 0;
            auStack_a0 = (undefined1  [8])0x0;
            local_a8 = (void *)0x0;
            uStack_b0 = 0;
            local_b8 = (char *)0x0;
            lVar10 = FUN_008fd190(plVar1,"resourceName");
            puVar11 = (ulong *)((ulong)&local_b8 | 1);
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar10) {
              local_80 = "resourceName";
              local_70 = 0x100005;
              local_78 = 0xc;
              lVar10 = FUN_008feca4(plVar1,&local_80);
              if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) != 0) {
                local_80 = "resourceName";
                local_70 = 0x100005;
                local_78 = 0xc;
                puVar11 = (ulong *)FUN_008feca4(plVar1,&local_80);
                if ((*(byte *)((long)puVar11 + 0x12) >> 6 & 1) == 0) {
                  puVar11 = (ulong *)*puVar11;
                }
              }
            }
            FUN_008fa54c(&local_80,puVar11);
            FUN_008fce60(&local_b8,&local_80);
            if (((ulong)local_80 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_6c,local_70));
            }
            plVar12 = (long *)(auStack_a0 + 1);
            if (((ulong)auStack_a0 & 1) != 0) {
              plVar12 = plStack_90;
            }
            lVar10 = FUN_008fd190(plVar1,"imageName");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar10) {
              local_80 = "imageName";
              local_70 = 0x100005;
              local_78 = 9;
              lVar10 = FUN_008feca4(plVar1,&local_80);
              if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) != 0) {
                local_80 = "imageName";
                local_70 = 0x100005;
                local_78 = 9;
                plVar12 = (long *)FUN_008feca4(plVar1,&local_80);
                if ((*(byte *)((long)plVar12 + 0x12) >> 6 & 1) == 0) {
                  plVar12 = (long *)*plVar12;
                }
              }
            }
            FUN_008fa54c(&local_80,plVar12);
            FUN_008fce60(auStack_a0,&local_80);
            if (((ulong)local_80 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_6c,local_70));
            }
            lVar10 = FUN_008fd190(plVar1,"quantity");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar10) {
LAB_009771e4:
              local_88 = 1;
            }
            else {
              local_80 = "quantity";
              local_70 = 0x100005;
              local_78 = 8;
              lVar10 = FUN_008feca4(plVar1,&local_80);
              if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_009771e4;
              local_80 = "quantity";
              local_70 = 0x100005;
              local_78 = 8;
              piVar13 = (int *)FUN_008feca4(plVar1,&local_80);
              local_88 = *piVar13;
            }
            uVar15 = (ulong)local_b8 >> 1 & 0x7f;
            if (((ulong)local_b8 & 1) != 0) {
              uVar15 = uStack_b0;
            }
            if (uVar15 != 0) {
              uVar15 = (ulong)auStack_a0 >> 1 & 0x7f;
              if (((ulong)auStack_a0 & 1) != 0) {
                uVar15 = local_98;
              }
              if ((0 < local_88) && (uVar15 != 0)) {
                FUN_00977340(param_1 + 0x68,&local_b8);
              }
            }
            if (((ulong)auStack_a0 & 1) != 0) {
              operator_delete(plStack_90);
            }
            if (((ulong)local_b8 & 1) != 0) {
              operator_delete(local_a8);
            }
            uVar15 = (ulong)*(uint *)(plVar7 + 1);
          }
          uVar18 = uVar18 + 1;
          lVar6 = lVar6 + 0x18;
        } while (uVar18 < uVar15);
      }
    }
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

