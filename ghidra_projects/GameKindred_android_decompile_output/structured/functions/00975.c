// functions/00975 — 4 functions
#include "libGameKindred.h"




void FUN_00975578(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027bca90;
  FUN_008fa718(param_1 + 3);
  FUN_008fcdb8(param_1 + 0xc,&DAT_0320ffa8);
  FUN_00e70570(param_1 + 0xf,&DAT_0320ffa8);
  FUN_00e70570(param_1 + 0x11,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x13) = 2;
  return;
}




void FUN_009755e0(uint *param_1,long param_2)

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
    FUN_0097801c(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




void FUN_00975674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bca90;
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  if ((void *)param_1[0x10] != (void *)0x0) {
    operator_delete__((void *)param_1[0x10]);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00977ea0(param_1 + 1,1);
  return;
}




void FUN_009756e8(long param_1,long param_2,long *param_3)

{
  void *pvVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uVar10;
  void *pvVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong local_158;
  void *local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined **local_110;
  void *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  byte local_f8;
  void *local_e8;
  byte local_b0;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_00976588(param_1);
  local_120 = 0;
  uStack_118 = 0;
  local_100 = 0x100005;
  local_110 = (undefined **)&DAT_01b9725b;
  local_108 = (void *)0x4;
  plVar6 = (long *)FUN_008feca4(param_3,&local_110);
  if ((int)plVar6[1] != 0) {
    lVar13 = 0;
    uVar14 = 0;
    do {
      FUN_0097672c(&local_110,*plVar6 + lVar13);
      FUN_00976638(&local_120,&local_110);
      local_110 = &PTR_FUN_027bca90;
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
        local_88 = 0;
        local_80 = (void *)0x0;
      }
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((local_f8 & 1) != 0) {
        operator_delete(local_e8);
      }
      FUN_00977ea0(&local_108,1);
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x18;
    } while (uVar14 < *(uint *)(plVar6 + 1));
  }
  lVar13 = FUN_008fd190(param_3,"title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar13) {
    puVar8 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_110 = (undefined **)0x1b96f62;
    local_100 = 0x100005;
    local_108 = (void *)0x5;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) == 0) {
      puVar8 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_110 = (undefined **)0x1b96f62;
      local_100 = 0x100005;
      local_108 = (void *)0x5;
      puVar8 = (undefined8 *)FUN_008feca4(param_3,&local_110);
      if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
        puVar8 = (undefined8 *)*puVar8;
      }
    }
  }
  FUN_008fa54c(&local_110,puVar8);
  FUN_0096c2a4(&local_110,param_1 + 0x18);
  if (((ulong)local_110 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_fc,local_100));
  }
  FUN_00e70510(&local_130);
  lVar13 = FUN_008fd190(param_3,"description");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)0x1e2b204;
    local_100 = 0x100005;
    local_108 = (void *)0xb;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if (*(int *)(lVar13 + 0x10) == 4) {
      local_110 = (undefined **)0x1e2b204;
      local_100 = 0x100005;
      local_108 = (void *)0xb;
      plVar6 = (long *)FUN_008feca4(param_3,&local_110);
      if ((int)plVar6[1] != 0) {
        lVar13 = 0;
        uVar14 = 0;
        do {
          FUN_00e70510(&local_158);
          lVar9 = *plVar6 + lVar13;
          if ((*(byte *)(lVar9 + 0x12) >> 6 & 1) == 0) {
            lVar9 = *(long *)(*plVar6 + lVar13);
          }
          FUN_008fa54c(&local_110,lVar9);
          FUN_0096c2a4(&local_110,&local_158);
          if (((ulong)local_110 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_fc,local_100));
          }
          uVar7 = FUN_00e70b04(&local_158);
          if ((uVar7 & 1) == 0) {
            FUN_00e70c34(&local_130,&local_158);
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
            local_158 = 0;
            local_150 = (void *)0x0;
          }
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0x18;
        } while (uVar14 < *(uint *)(plVar6 + 1));
      }
      lVar13 = FUN_008fd190(param_3,"boost_amount");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
        local_110 = (undefined **)0x1b97260;
        local_100 = 0x100005;
        local_108 = (void *)0xc;
        lVar13 = FUN_008feca4(param_3,&local_110);
        if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) != 0) {
          FUN_00e705c8(&local_158,"[BOOST_AMOUNT]");
          lVar13 = FUN_008fd190(param_3,"boost_amount");
          if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar13) {
LAB_00975a84:
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_110 = (undefined **)0x1b97260;
            local_100 = 0x100005;
            local_108 = (void *)0xc;
            lVar13 = FUN_008feca4(param_3,&local_110);
            if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) == 0) goto LAB_00975a84;
            local_110 = (undefined **)0x1b97260;
            local_100 = 0x100005;
            local_108 = (void *)0xc;
            puVar8 = (undefined8 *)FUN_008feca4(param_3,&local_110);
            if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
              puVar8 = (undefined8 *)*puVar8;
            }
          }
          FUN_00e705c8(&local_110,puVar8);
          FUN_00e713f0(&local_130,0,&local_158,&local_110);
          if (local_108 != (void *)0x0) {
            operator_delete__(local_108);
            local_110 = (undefined **)0x0;
            local_108 = (void *)0x0;
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
            local_158 = 0;
            local_150 = (void *)0x0;
          }
        }
      }
    }
  }
  FUN_00910394(param_1 + 0x28,&local_130);
  FUN_00e70510(&local_140);
  lVar13 = FUN_008fd190(param_3,"tooltip");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)0x1baf308;
    local_100 = 0x100005;
    local_108 = (void *)0x7;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if (*(int *)(lVar13 + 0x10) == 4) {
      local_110 = (undefined **)0x1baf308;
      local_100 = 0x100005;
      local_108 = (void *)0x7;
      plVar6 = (long *)FUN_008feca4(param_3,&local_110);
      if ((int)plVar6[1] != 0) {
        lVar13 = 0;
        uVar14 = 0;
        do {
          FUN_00e70510(&local_158);
          lVar9 = *plVar6 + lVar13;
          if ((*(byte *)(lVar9 + 0x12) >> 6 & 1) == 0) {
            lVar9 = *(long *)(*plVar6 + lVar13);
          }
          FUN_008fa54c(&local_110,lVar9);
          FUN_0096c2a4(&local_110,&local_158);
          if (((ulong)local_110 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_fc,local_100));
          }
          uVar7 = FUN_00e70b04(&local_158);
          if ((uVar7 & 1) == 0) {
            FUN_00e70c34(&local_140,&local_158);
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
            local_158 = 0;
            local_150 = (void *)0x0;
          }
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0x18;
        } while (uVar14 < *(uint *)(plVar6 + 1));
      }
      lVar13 = FUN_008fd190(param_3,"boost_amount");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
        local_110 = (undefined **)0x1b97260;
        local_100 = 0x100005;
        local_108 = (void *)0xc;
        lVar13 = FUN_008feca4(param_3,&local_110);
        if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) != 0) {
          FUN_00e705c8(&local_158,"[BOOST_AMOUNT]");
          lVar13 = FUN_008fd190(param_3,"boost_amount");
          if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar13) {
LAB_00975c88:
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_110 = (undefined **)0x1b97260;
            local_100 = 0x100005;
            local_108 = (void *)0xc;
            lVar13 = FUN_008feca4(param_3,&local_110);
            if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) == 0) goto LAB_00975c88;
            local_110 = (undefined **)0x1b97260;
            local_100 = 0x100005;
            local_108 = (void *)0xc;
            puVar8 = (undefined8 *)FUN_008feca4(param_3,&local_110);
            if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
              puVar8 = (undefined8 *)*puVar8;
            }
          }
          FUN_00e705c8(&local_110,puVar8);
          FUN_00e713f0(&local_140,0,&local_158,&local_110);
          if (local_108 != (void *)0x0) {
            operator_delete__(local_108);
            local_110 = (undefined **)0x0;
            local_108 = (void *)0x0;
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
            local_158 = 0;
            local_150 = (void *)0x0;
          }
        }
      }
    }
  }
  FUN_00910394(param_1 + 0x38,&local_140);
  lVar13 = FUN_008fd190(param_3,"category");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar13) {
LAB_00975d28:
    puVar8 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_110 = (undefined **)0x1b9727c;
    local_100 = 0x100005;
    local_108 = (void *)0x8;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) == 0) goto LAB_00975d28;
    local_110 = (undefined **)0x1b9727c;
    local_100 = 0x100005;
    local_108 = (void *)0x8;
    puVar8 = (undefined8 *)FUN_008feca4(param_3,&local_110);
    if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
      puVar8 = (undefined8 *)*puVar8;
    }
  }
  FUN_008fa54c(&local_158,puVar8);
  pvVar11 = (void *)(ulong)((byte)local_158 >> 1);
  pvVar1 = pvVar11;
  if ((local_158 & 1) != 0) {
    pvVar1 = local_150;
  }
  if (pvVar1 == (void *)0x4) {
    iVar5 = FUN_0090d610(&local_158,0,0xffffffffffffffff,&DAT_01b9230f,4);
    if (iVar5 != 0) {
      pvVar11 = (void *)(ulong)((byte)local_158 >> 1);
      goto LAB_00975d8c;
    }
    uVar10 = 2;
LAB_00975ee0:
    *(undefined4 *)(param_1 + 0xe0) = uVar10;
  }
  else {
LAB_00975d8c:
    pvVar1 = pvVar11;
    if (((byte)local_158 & 1) != 0) {
      pvVar1 = local_150;
    }
    bVar2 = (byte)local_158;
    if (pvVar1 == (void *)0x4) {
      iVar5 = FUN_0090d610(&local_158,0,0xffffffffffffffff,"hero",4);
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0xe0) = 0;
        goto LAB_00975ee4;
      }
      pvVar11 = (void *)(ulong)((byte)local_158 >> 1);
      bVar2 = (byte)local_158;
    }
    pvVar1 = pvVar11;
    if ((bVar2 & 1) != 0) {
      pvVar1 = local_150;
    }
    if (pvVar1 == (void *)0x6) {
      iVar5 = FUN_0090d610(&local_158,0,0xffffffffffffffff,"bundle",6);
      if (iVar5 == 0) {
        uVar10 = 3;
        goto LAB_00975ee0;
      }
      pvVar11 = (void *)(ulong)((byte)local_158 >> 1);
      bVar2 = (byte)local_158;
    }
    pvVar1 = pvVar11;
    if ((bVar2 & 1) != 0) {
      pvVar1 = local_150;
    }
    if (pvVar1 == (void *)0x5) {
      iVar5 = FUN_0090d610(&local_158,0,0xffffffffffffffff,"boost",5);
      if (iVar5 == 0) {
        uVar10 = 1;
        goto LAB_00975ee0;
      }
      pvVar11 = (void *)(ulong)((byte)local_158 >> 1);
      bVar2 = (byte)local_158;
    }
    if ((bVar2 & 1) != 0) {
      pvVar11 = local_150;
    }
    if ((pvVar11 == (void *)0xd) &&
       (iVar5 = FUN_0090d610(&local_158,0,0xffffffffffffffff,"socialActions",0xd), iVar5 == 0)) {
      uVar10 = 4;
    }
    else {
      uVar10 = 5;
    }
    *(undefined4 *)(param_1 + 0xe0) = uVar10;
  }
LAB_00975ee4:
  FUN_009782bc(param_1 + 8,&local_120);
  if ((*(byte *)(param_2 + 0xa8) & 1) == 0) {
    plVar6 = (long *)(param_2 + 0xa9);
  }
  else {
    plVar6 = *(long **)(param_2 + 0xb8);
  }
  lVar13 = FUN_008fd190(param_3,"symbol");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)0x1ba3ebe;
    local_100 = 0x100005;
    local_108 = (void *)0x6;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) != 0) {
      local_110 = (undefined **)0x1ba3ebe;
      local_100 = 0x100005;
      local_108 = (void *)0x6;
      plVar6 = (long *)FUN_008feca4(param_3,&local_110);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
    }
  }
  FUN_008fa54c(&local_110,plVar6);
  FUN_008fce60(param_1 + 0xa8,&local_110);
  if (((ulong)local_110 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_fc,local_100));
  }
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    plVar6 = (long *)(param_2 + 0x91);
  }
  else {
    plVar6 = *(long **)(param_2 + 0xa0);
  }
  lVar13 = FUN_008fd190(param_3,"image");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)0x1bf2a9c;
    local_100 = 0x100005;
    local_108 = (void *)0x5;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) != 0) {
      local_110 = (undefined **)0x1bf2a9c;
      local_100 = 0x100005;
      local_108 = (void *)0x5;
      plVar6 = (long *)FUN_008feca4(param_3,&local_110);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
    }
  }
  FUN_008fa54c(&local_110,plVar6);
  FUN_008fce60(param_1 + 0x90,&local_110);
  if (((ulong)local_110 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_fc,local_100));
  }
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    plVar6 = (long *)(param_2 + 0x49);
  }
  else {
    plVar6 = *(long **)(param_2 + 0x58);
  }
  lVar13 = FUN_008fd190(param_3,&DAT_01b97293);
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)&DAT_01b97293;
    local_100 = 0x100005;
    local_108 = (void *)0x3;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) != 0) {
      local_110 = (undefined **)&DAT_01b97293;
      local_100 = 0x100005;
      local_108 = (void *)0x3;
      plVar6 = (long *)FUN_008feca4(param_3,&local_110);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
    }
  }
  FUN_008fa54c(&local_110,plVar6);
  FUN_008fce60(param_1 + 0x48,&local_110);
  if (((ulong)local_110 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_fc,local_100));
  }
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    plVar6 = (long *)(param_2 + 0x61);
  }
  else {
    plVar6 = *(long **)(param_2 + 0x70);
  }
  lVar13 = FUN_008fd190(param_3,"video");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)0x1bbd4dc;
    local_100 = 0x100005;
    local_108 = (void *)0x5;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) != 0) {
      local_110 = (undefined **)0x1bbd4dc;
      local_100 = 0x100005;
      local_108 = (void *)0x5;
      plVar6 = (long *)FUN_008feca4(param_3,&local_110);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
    }
  }
  FUN_008fa54c(&local_110,plVar6);
  FUN_008fce60(param_1 + 0x60,&local_110);
  if (((ulong)local_110 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_fc,local_100));
  }
  if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
    plVar6 = (long *)(param_2 + 0x79);
  }
  else {
    plVar6 = *(long **)(param_2 + 0x88);
  }
  lVar13 = FUN_008fd190(param_3,"lore");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)0x1bb8b30;
    local_100 = 0x100005;
    local_108 = (void *)0x4;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) != 0) {
      local_110 = (undefined **)0x1bb8b30;
      local_100 = 0x100005;
      local_108 = (void *)0x4;
      plVar6 = (long *)FUN_008feca4(param_3,&local_110);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
    }
  }
  FUN_008fa54c(&local_110,plVar6);
  FUN_008fce60(param_1 + 0x78,&local_110);
  if (((ulong)local_110 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_fc,local_100));
  }
  if ((*(byte *)(param_2 + 0xc0) & 1) == 0) {
    plVar6 = (long *)(param_2 + 0xc1);
  }
  else {
    plVar6 = *(long **)(param_2 + 0xd0);
  }
  lVar13 = FUN_008fd190(param_3,"action");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)0x1b92ae9;
    local_100 = 0x100005;
    local_108 = (void *)0x6;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) != 0) {
      local_110 = (undefined **)0x1b92ae9;
      local_100 = 0x100005;
      local_108 = (void *)0x6;
      plVar6 = (long *)FUN_008feca4(param_3,&local_110);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
    }
  }
  FUN_008fa54c(&local_110,plVar6);
  FUN_008fce60(param_1 + 0xc0,&local_110);
  if (((ulong)local_110 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_fc,local_100));
  }
  uVar12 = *(undefined8 *)(param_2 + 0xd8);
  lVar13 = FUN_008fd190(param_3,"newEpoch");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)0x1b97297;
    local_100 = 0x100005;
    local_108 = (void *)0x8;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x11) >> 4 & 1) != 0) {
      local_110 = (undefined **)0x1b97297;
      local_100 = 0x100005;
      local_108 = (void *)0x8;
      puVar8 = (undefined8 *)FUN_008feca4(param_3,&local_110);
      uVar12 = *puVar8;
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = uVar12;
  bVar4 = *(char *)(param_2 + 0xe5) != '\0';
  lVar13 = FUN_008fd190(param_3,"onSale");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)0x1b972a0;
    local_100 = 0x100005;
    local_108 = (void *)0x6;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x11) & 1) != 0) {
      local_110 = (undefined **)0x1b972a0;
      local_100 = 0x100005;
      local_108 = (void *)0x6;
      lVar13 = FUN_008feca4(param_3,&local_110);
      bVar4 = *(int *)(lVar13 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xe5) = bVar4;
  bVar4 = *(char *)(param_2 + 0xe4) != '\0';
  lVar13 = FUN_008fd190(param_3,"giftable");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar13) {
    local_110 = (undefined **)0x1b972a7;
    local_100 = 0x100005;
    local_108 = (void *)0x8;
    lVar13 = FUN_008feca4(param_3,&local_110);
    if ((*(byte *)(lVar13 + 0x11) & 1) != 0) {
      local_110 = (undefined **)0x1b972a7;
      local_100 = 0x100005;
      local_108 = (void *)0x8;
      lVar13 = FUN_008feca4(param_3,&local_110);
      bVar4 = *(int *)(lVar13 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xe4) = bVar4;
  if ((local_158 & 1) != 0) {
    operator_delete(local_148);
  }
  if (local_138 != (void *)0x0) {
    operator_delete__(local_138);
    local_140 = 0;
    local_138 = (void *)0x0;
  }
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_130 = 0;
    local_128 = (void *)0x0;
  }
  FUN_00977fa4(&local_120,1);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

