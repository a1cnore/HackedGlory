// functions/0096c — 14 functions
#include "libGameKindred.h"




undefined8 FUN_0096c00c(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0097c61c(DAT_02c7ef18 + 0x328,param_1);
    return 1;
  }
  return 0;
}




void FUN_0096c040(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0097c5f8(DAT_02c7ef18 + 0x328);
    return;
  }
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  return;
}




void FUN_0096c064(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0097c604(DAT_02c7ef18 + 0x328);
    return;
  }
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  return;
}




void FUN_0096c088(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0097c610(DAT_02c7ef18 + 0x328);
    return;
  }
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  return;
}




undefined8 FUN_0096c0ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7ef18 != 0) {
    uVar1 = FUN_00969be0(DAT_02c7ef18 + 0x430,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_0096c0cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7ef18 != 0) {
    uVar1 = FUN_00978bbc(DAT_02c7ef18 + 0x430,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_0096c0ec(undefined8 param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_68 = 0;
  local_60 = 0;
  if ((DAT_02c7ef18 != 0) &&
     (uVar6 = FUN_00978bbc(DAT_02c7ef18 + 0x430,&local_68), (uVar6 & 1) != 0)) {
    if ((uint)local_68 != 0) {
      lVar10 = 0;
      uVar6 = 0;
      uVar11 = (uint)local_68;
      do {
        lVar1 = local_60 + lVar10;
        sVar7 = strlen(param_2);
        pbVar9 = (byte *)(lVar1 + 8);
        bVar3 = *pbVar9;
        uVar2 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar2 = *(ulong *)(lVar1 + 0x10);
        }
        if (sVar7 == uVar2) {
          iVar5 = FUN_0090d610(pbVar9,0,0xffffffffffffffff,param_2,sVar7);
          if (iVar5 == 0) {
            puVar8 = (undefined1 *)(local_60 + lVar10 + 0x20);
            goto LAB_0096c1b0;
          }
          uVar11 = (uint)local_68;
        }
        uVar6 = uVar6 + 1;
        lVar10 = lVar10 + 0x38;
      } while (uVar6 < uVar11);
    }
  }
  puVar8 = &DAT_0320ffa8;
LAB_0096c1b0:
  FUN_008fcdb8(param_1,puVar8);
  FUN_0096c22c(&local_68,1);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096c204(void *param_1)

{
  FUN_00a9a5b8();
  operator_delete(param_1);
  return;
}




void FUN_0096c228(void)

{
  return;
}




void FUN_0096c22c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x38;
        puVar2 = puVar2 + 7;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_0096c2a4(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
  uVar1 = FUN_00e6ce7c(pbVar3,0);
  FUN_00e70900(param_2,uVar1);
  uVar2 = FUN_00e70b04(param_2);
  if ((uVar2 & 1) != 0) {
    pbVar3 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      pbVar3 = *(byte **)(param_1 + 0x10);
    }
    FUN_00e705a0(param_2,pbVar3);
  }
  return;
}




void FUN_0096c310(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027bc888;
  FUN_008fcdb8(param_1 + 1,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 4,&DAT_0320ffa8);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    plVar3 = (long *)(param_2 + 9);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x18);
  }
  lVar2 = FUN_008fd190(param_3,"type");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "type";
    local_70 = 0x100005;
    local_78 = 4;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_80 = "type";
      local_70 = 0x100005;
      local_78 = 4;
      plVar3 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar3);
  FUN_008fce60(param_1 + 1,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x21);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x30);
  }
  lVar2 = FUN_008fd190(param_3,"key");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_80 = "key";
    local_70 = 0x100005;
    local_78 = 3;
    lVar2 = FUN_008feca4(param_3,&local_80);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_80 = "key";
      local_70 = 0x100005;
      local_78 = 3;
      plVar3 = (long *)FUN_008feca4(param_3,&local_80);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  FUN_008fa54c(&local_80,plVar3);
  FUN_008fce60(param_1 + 4,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096c528(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc888;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}




void FUN_0096c57c(long param_1,long param_2,long *param_3)

{
  int *piVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int *piVar11;
  ulong *puVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  undefined4 uVar16;
  int *piVar17;
  double dVar18;
  byte local_118 [16];
  void *local_108;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  byte local_d0 [8];
  ulong local_c8;
  void *local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  void *local_a0;
  byte local_98;
  void *local_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  FUN_0096d1b4(param_1);
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    plVar8 = (long *)(param_2 + 0x19);
  }
  else {
    plVar8 = *(long **)(param_2 + 0x28);
  }
  lVar7 = FUN_008fd190(param_3,"labelType");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b96a90;
    local_a8 = 0x100005;
    local_b0 = 9;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_b8 = (undefined **)0x1b96a90;
      local_a8 = 0x100005;
      local_b0 = 9;
      plVar8 = (long *)FUN_008feca4(param_3,&local_b8);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  FUN_008fa54c(&local_b8,plVar8);
  FUN_008fce60(param_1 + 0x18,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_a4,local_a8));
  }
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    plVar8 = (long *)(param_2 + 0x31);
  }
  else {
    plVar8 = *(long **)(param_2 + 0x40);
  }
  lVar7 = FUN_008fd190(param_3,"skuId");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b93019;
    local_a8 = 0x100005;
    local_b0 = 5;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_b8 = (undefined **)0x1b93019;
      local_a8 = 0x100005;
      local_b0 = 5;
      plVar8 = (long *)FUN_008feca4(param_3,&local_b8);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  FUN_008fa54c(&local_b8,plVar8);
  FUN_008fce60(param_1 + 0x30,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_a4,local_a8));
  }
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    plVar8 = (long *)(param_2 + 0x49);
  }
  else {
    plVar8 = *(long **)(param_2 + 0x58);
  }
  lVar7 = FUN_008fd190(param_3,"campaignId");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b92234;
    local_a8 = 0x100005;
    local_b0 = 10;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_b8 = (undefined **)0x1b92234;
      local_a8 = 0x100005;
      local_b0 = 10;
      plVar8 = (long *)FUN_008feca4(param_3,&local_b8);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  FUN_008fa54c(&local_b8,plVar8);
  FUN_008fce60(param_1 + 0x48,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_a4,local_a8));
  }
  uVar16 = *(undefined4 *)(param_2 + 0xc4);
  lVar7 = FUN_008fd190(param_3,"wasSkuId");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b96a9a;
    local_a8 = 0x100005;
    local_b0 = 8;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_b8 = (undefined **)0x1b96a9a;
      local_a8 = 0x100005;
      local_b0 = 8;
      puVar9 = (undefined4 *)FUN_008feca4(param_3,&local_b8);
      uVar16 = *puVar9;
    }
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar16;
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    plVar8 = (long *)(param_2 + 0x61);
  }
  else {
    plVar8 = *(long **)(param_2 + 0x70);
  }
  lVar7 = FUN_008fd190(param_3,"productId");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b93111;
    local_a8 = 0x100005;
    local_b0 = 9;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_b8 = (undefined **)0x1b93111;
      local_a8 = 0x100005;
      local_b0 = 9;
      plVar8 = (long *)FUN_008feca4(param_3,&local_b8);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  FUN_008fa54c(&local_b8,plVar8);
  FUN_008fce60(param_1 + 0x60,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_a4,local_a8));
  }
  if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
    plVar8 = (long *)(param_2 + 0x79);
  }
  else {
    plVar8 = *(long **)(param_2 + 0x88);
  }
  lVar7 = FUN_008fd190(param_3,&DAT_01b96aa3);
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)&DAT_01b96aa3;
    local_a8 = 0x100005;
    local_b0 = 4;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_b8 = (undefined **)&DAT_01b96aa3;
      local_a8 = 0x100005;
      local_b0 = 4;
      plVar8 = (long *)FUN_008feca4(param_3,&local_b8);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  FUN_008fa54c(&local_b8,plVar8);
  FUN_008fce60(param_1 + 0x78,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_a4,local_a8));
  }
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    plVar8 = (long *)(param_2 + 0x91);
  }
  else {
    plVar8 = *(long **)(param_2 + 0xa0);
  }
  lVar7 = FUN_008fd190(param_3,"string");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1e471b9;
    local_a8 = 0x100005;
    local_b0 = 6;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_b8 = (undefined **)0x1e471b9;
      local_a8 = 0x100005;
      local_b0 = 6;
      plVar8 = (long *)FUN_008feca4(param_3,&local_b8);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  FUN_008fa54c(&local_b8,plVar8);
  FUN_008fce60(param_1 + 0x90,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_a4,local_a8));
  }
  bVar5 = *(char *)(param_2 + 0xcc) != '\0';
  lVar7 = FUN_008fd190(param_3,"confirmPurchase");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b96aa8;
    local_a8 = 0x100005;
    local_b0 = 0xf;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_b8 = (undefined **)0x1b96aa8;
      local_a8 = 0x100005;
      local_b0 = 0xf;
      lVar7 = FUN_008feca4(param_3,&local_b8);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xcc) = bVar5;
  dVar18 = (double)*(float *)(param_2 + 200);
  lVar7 = FUN_008fd190(param_3,"confirmDelay");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b96ab8;
    local_a8 = 0x100005;
    local_b0 = 0xc;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
      local_b8 = (undefined **)0x1b96ab8;
      local_a8 = 0x100005;
      local_b0 = 0xc;
      FUN_008feca4(param_3,&local_b8);
      dVar18 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 200) = (float)dVar18;
  if ((*(byte *)(param_2 + 0xa8) & 1) == 0) {
    plVar8 = (long *)(param_2 + 0xa9);
  }
  else {
    plVar8 = *(long **)(param_2 + 0xb8);
  }
  lVar7 = FUN_008fd190(param_3,"purchasedImg");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b96ac5;
    local_a8 = 0x100005;
    local_b0 = 0xc;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_b8 = (undefined **)0x1b96ac5;
      local_a8 = 0x100005;
      local_b0 = 0xc;
      plVar8 = (long *)FUN_008feca4(param_3,&local_b8);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  FUN_008fa54c(&local_b8,plVar8);
  FUN_008fce60(param_1 + 0xa8,&local_b8);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_a4,local_a8));
  }
  bVar5 = *(char *)(param_2 + 0xcd) != '\0';
  lVar7 = FUN_008fd190(param_3,"openUrlInApp");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b96ad2;
    local_a8 = 0x100005;
    local_b0 = 0xc;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_b8 = (undefined **)0x1b96ad2;
      local_a8 = 0x100005;
      local_b0 = 0xc;
      lVar7 = FUN_008feca4(param_3,&local_b8);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xcd) = bVar5;
  bVar5 = *(char *)(param_2 + 0xce) != '\0';
  lVar7 = FUN_008fd190(param_3,"requireAccount");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b96adf;
    local_a8 = 0x100005;
    local_b0 = 0xe;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_b8 = (undefined **)0x1b96adf;
      local_a8 = 0x100005;
      local_b0 = 0xe;
      lVar7 = FUN_008feca4(param_3,&local_b8);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xce) = bVar5;
  lVar7 = FUN_008fd190(param_3,"offerFilterMode");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar7) {
LAB_0096cda4:
    pcVar10 = "show_if_available";
  }
  else {
    local_b8 = (undefined **)0x1b96aee;
    local_a8 = 0x100005;
    local_b0 = 0xf;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_0096cda4;
    local_b8 = (undefined **)0x1b96aee;
    local_a8 = 0x100005;
    local_b0 = 0xf;
    pcVar10 = (char *)FUN_008feca4(param_3,&local_b8);
    if (((byte)pcVar10[0x12] >> 6 & 1) == 0) {
      pcVar10 = *(char **)pcVar10;
    }
  }
  FUN_008fa54c(local_d0,pcVar10);
  uVar13 = (ulong)(local_d0[0] >> 1);
  uVar15 = uVar13;
  if ((local_d0[0] & 1) != 0) {
    uVar15 = local_c8;
  }
  if (uVar15 == 0xb) {
    iVar6 = FUN_0090d610(local_d0,0,0xffffffffffffffff,"show_always",0xb);
    if (iVar6 != 0) {
      uVar13 = (ulong)(local_d0[0] >> 1);
      goto LAB_0096ce08;
    }
    *(undefined4 *)(param_1 + 0xc0) = 2;
  }
  else {
LAB_0096ce08:
    if ((local_d0[0] & 1) != 0) {
      uVar13 = local_c8;
    }
    if (uVar13 == 0x13) {
      iVar6 = FUN_0090d610(local_d0,0,0xffffffffffffffff,"show_if_unavailable",0x13);
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0xc0) = 1;
        goto LAB_0096ce88;
      }
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
LAB_0096ce88:
  bVar3 = *(byte *)(param_1 + 0xa8);
  uVar13 = *(size_t *)(param_1 + 0xb0);
  uVar15 = (ulong)(bVar3 >> 1);
  __n = uVar15;
  if ((bVar3 & 1) != 0) {
    __n = uVar13;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    piVar17 = *(int **)(param_1 + 0xb8);
    piVar11 = piVar17;
    if ((bVar3 & 1) == 0) {
      piVar11 = (int *)(param_1 + 0xa9);
    }
    pcVar10 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar10 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar14 = (char *)(param_1 + 0xa9);
        lVar7 = -uVar15;
        do {
          if (*pcVar14 != *pcVar10) goto LAB_0096cf0c;
          pcVar14 = pcVar14 + 1;
          lVar7 = lVar7 + 1;
          pcVar10 = pcVar10 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_0096d088;
    }
    if ((__n == 0) || (iVar6 = memcmp(piVar11,pcVar10,__n), iVar6 == 0)) goto LAB_0096d088;
  }
  else {
LAB_0096cf0c:
    if ((bVar3 & 1) == 0) {
      piVar17 = (int *)(param_1 + 0xa9);
      uVar13 = uVar15;
    }
    else {
      piVar17 = *(int **)(param_1 + 0xb8);
    }
  }
  if (3 < (long)uVar13) {
    piVar1 = (int *)((long)piVar17 + uVar13);
    piVar11 = piVar17;
    do {
      if ((uVar13 - 3 == 0) || (piVar11 = memchr(piVar11,0x68,uVar13 - 3), piVar11 == (int *)0x0))
      break;
      if (*piVar11 == 0x70747468) {
        if ((piVar11 != piVar1) && (piVar11 == piVar17)) goto LAB_0096d088;
        break;
      }
      piVar11 = (int *)((long)piVar11 + 1);
      uVar13 = (long)piVar1 - (long)piVar11;
    } while (3 < (long)uVar13);
  }
  FUN_0096bb84(&local_b8);
  uVar13 = (ulong)local_b8 >> 1 & 0x7f;
  uVar15 = (ulong)&local_b8 | 1;
  if (((ulong)local_b8 & 1) != 0) {
    uVar13 = local_b0;
    uVar15 = CONCAT44(uStack_a4,local_a8);
  }
  do {
    if (uVar13 == 0) {
      iVar6 = 0;
      goto LAB_0096cfe4;
    }
    lVar7 = uVar15 + uVar13;
    uVar13 = uVar13 - 1;
  } while (*(char *)(lVar7 + -1) != '/');
  iVar6 = (int)uVar13 + 1;
LAB_0096cfe4:
  FUN_0093ddb0(local_118,&local_b8,0,iVar6,&local_b8);
  uVar15 = *(ulong *)(param_1 + 0xb0);
  lVar7 = *(long *)(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    lVar7 = param_1 + 0xa9;
    uVar15 = (ulong)(*(byte *)(param_1 + 0xa8) >> 1);
  }
  puVar12 = (ulong *)FUN_0090de84(local_118,lVar7,uVar15);
  local_f0 = (void *)puVar12[2];
  uStack_f8 = puVar12[1];
  local_100 = *puVar12;
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  FUN_008fcdb8(local_e8,&local_100);
  FUN_008fce60(param_1 + 0xa8,local_e8);
  if ((local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if ((local_118[0] & 1) != 0) {
    operator_delete(local_108);
  }
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_a4,local_a8));
  }
LAB_0096d088:
  lVar7 = FUN_008fd190(param_3,"products");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_b8 = (undefined **)0x1b96b30;
    local_a8 = 0x100005;
    local_b0 = 8;
    lVar7 = FUN_008feca4(param_3,&local_b8);
    if (*(int *)(lVar7 + 0x10) == 4) {
      local_b8 = (undefined **)0x1b96b30;
      local_a8 = 0x100005;
      local_b0 = 8;
      plVar8 = (long *)FUN_008feca4(param_3,&local_b8);
      if ((int)plVar8[1] != 0) {
        lVar7 = 0;
        uVar15 = 0;
        do {
          FUN_0096d2f8(&local_b8,*plVar8 + lVar7);
          FUN_0096d24c(param_1 + 8,&local_b8);
          local_b8 = &PTR_FUN_027bc888;
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
          uVar15 = uVar15 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar15 < *(uint *)(plVar8 + 1));
      }
    }
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

