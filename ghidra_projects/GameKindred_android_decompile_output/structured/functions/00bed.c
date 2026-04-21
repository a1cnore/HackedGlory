// functions/00bed — 2 functions
#include "libGameKindred.h"




int FUN_00bed688(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  byte local_118 [16];
  void *local_108;
  byte local_100 [16];
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined4 local_a0;
  byte local_98 [16];
  void *local_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  
  lVar14 = tpidr_el0;
  lVar17 = *(long *)(lVar14 + 0x28);
  iVar15 = FUN_00becb70();
  uVar16 = (*(code *)*param_5)(param_4,param_3);
  if ((uVar16 & 1) != 0) {
    uVar13 = *param_3;
    puVar1 = param_3 + 2;
    FUN_008fcdb8(local_118,puVar1);
    puVar2 = param_3 + 8;
    FUN_008fcdb8(local_100,puVar2);
    puVar3 = param_3 + 0xe;
    FUN_008fcdb8(local_e8,puVar3);
    puVar4 = param_3 + 0x14;
    FUN_008fcdb8(local_d0,puVar4);
    local_b8 = param_3[0x1a];
    puVar5 = param_3 + 0x1c;
    thunk_FUN_00e7051c(&local_b0,puVar5);
    local_a0 = param_3[0x20];
    puVar6 = param_3 + 0x22;
    FUN_008fcdb8(local_98,puVar6);
    puVar19 = (undefined8 *)(param_3 + 0x28);
    uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0xa5) >> 0x18);
    uStack_80 = (undefined5)*puVar19;
    local_7b = (undefined3)((ulong)*puVar19 >> 0x28);
    *param_3 = *param_4;
    FUN_008fce60(puVar1);
    FUN_008fce60(puVar2,param_4 + 8);
    FUN_008fce60(puVar3,param_4 + 0xe);
    FUN_008fce60(puVar4,param_4 + 0x14);
    param_3[0x1a] = param_4[0x1a];
    FUN_00910394(puVar5,param_4 + 0x1c);
    param_3[0x20] = param_4[0x20];
    FUN_008fce60(puVar6,param_4 + 0x22);
    *(undefined8 *)((long)param_3 + 0xa5) = *(undefined8 *)((long)param_4 + 0xa5);
    *puVar19 = *(undefined8 *)(param_4 + 0x28);
    *param_4 = uVar13;
    FUN_008fce60(param_4 + 2,local_118);
    FUN_008fce60(param_4 + 8,local_100);
    FUN_008fce60(param_4 + 0xe,local_e8);
    FUN_008fce60(param_4 + 0x14,local_d0);
    param_4[0x1a] = local_b8;
    FUN_00910394(param_4 + 0x1c,&local_b0);
    param_4[0x20] = local_a0;
    FUN_008fce60(param_4 + 0x22,local_98);
    *(ulong *)((long)param_4 + 0xa5) = CONCAT53(uStack_78,local_7b);
    *(ulong *)(param_4 + 0x28) = CONCAT35(local_7b,uStack_80);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_100[0] & 1) != 0) {
      operator_delete(local_f0);
    }
    if ((local_118[0] & 1) != 0) {
      operator_delete(local_108);
    }
    uVar16 = (*(code *)*param_5)(param_3,param_2);
    if ((uVar16 & 1) == 0) {
      iVar15 = iVar15 + 1;
    }
    else {
      uVar13 = *param_2;
      puVar7 = param_2 + 2;
      FUN_008fcdb8(local_118,puVar7);
      puVar8 = param_2 + 8;
      FUN_008fcdb8(local_100,puVar8);
      puVar9 = param_2 + 0xe;
      FUN_008fcdb8(local_e8,puVar9);
      puVar10 = param_2 + 0x14;
      FUN_008fcdb8(local_d0,puVar10);
      local_b8 = param_2[0x1a];
      puVar11 = param_2 + 0x1c;
      thunk_FUN_00e7051c(&local_b0,puVar11);
      local_a0 = param_2[0x20];
      puVar12 = param_2 + 0x22;
      FUN_008fcdb8(local_98,puVar12);
      puVar18 = (undefined8 *)(param_2 + 0x28);
      uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0xa5) >> 0x18);
      uStack_80 = (undefined5)*puVar18;
      local_7b = (undefined3)((ulong)*puVar18 >> 0x28);
      *param_2 = *param_3;
      FUN_008fce60(puVar7,puVar1);
      FUN_008fce60(puVar8,puVar2);
      FUN_008fce60(puVar9,puVar3);
      FUN_008fce60(puVar10,puVar4);
      param_2[0x1a] = param_3[0x1a];
      FUN_00910394(puVar11,puVar5);
      param_2[0x20] = param_3[0x20];
      FUN_008fce60(puVar12,puVar6);
      *(undefined8 *)((long)param_2 + 0xa5) = *(undefined8 *)((long)param_3 + 0xa5);
      *puVar18 = *puVar19;
      *param_3 = uVar13;
      FUN_008fce60(puVar1,local_118);
      FUN_008fce60(puVar2,local_100);
      FUN_008fce60(puVar3,local_e8);
      FUN_008fce60(puVar4,local_d0);
      param_3[0x1a] = local_b8;
      FUN_00910394(puVar5,&local_b0);
      param_3[0x20] = local_a0;
      FUN_008fce60(puVar6,local_98);
      *(ulong *)((long)param_3 + 0xa5) = CONCAT53(uStack_78,local_7b);
      *puVar19 = CONCAT35(local_7b,uStack_80);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
        local_b0 = 0;
        local_a8 = (void *)0x0;
      }
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_100[0] & 1) != 0) {
        operator_delete(local_f0);
      }
      if ((local_118[0] & 1) != 0) {
        operator_delete(local_108);
      }
      uVar16 = (*(code *)*param_5)(param_2,param_1);
      if ((uVar16 & 1) == 0) {
        iVar15 = iVar15 + 2;
      }
      else {
        uVar13 = *param_1;
        FUN_008fcdb8(local_118,param_1 + 2);
        FUN_008fcdb8(local_100,param_1 + 8);
        FUN_008fcdb8(local_e8,param_1 + 0xe);
        FUN_008fcdb8(local_d0,param_1 + 0x14);
        local_b8 = param_1[0x1a];
        thunk_FUN_00e7051c(&local_b0,param_1 + 0x1c);
        local_a0 = param_1[0x20];
        FUN_008fcdb8(local_98,param_1 + 0x22);
        uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xa5) >> 0x18);
        uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0x28);
        local_7b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x28);
        *param_1 = *param_2;
        FUN_008fce60(param_1 + 2,puVar7);
        FUN_008fce60(param_1 + 8,puVar8);
        FUN_008fce60(param_1 + 0xe,puVar9);
        FUN_008fce60(param_1 + 0x14,puVar10);
        param_1[0x1a] = param_2[0x1a];
        FUN_00910394(param_1 + 0x1c,puVar11);
        param_1[0x20] = param_2[0x20];
        FUN_008fce60(param_1 + 0x22,puVar12);
        *(undefined8 *)((long)param_1 + 0xa5) = *(undefined8 *)((long)param_2 + 0xa5);
        *(undefined8 *)(param_1 + 0x28) = *puVar18;
        *param_2 = uVar13;
        FUN_008fce60(puVar7,local_118);
        FUN_008fce60(puVar8,local_100);
        FUN_008fce60(puVar9,local_e8);
        FUN_008fce60(puVar10,local_d0);
        param_2[0x1a] = local_b8;
        FUN_00910394(puVar11,&local_b0);
        param_2[0x20] = local_a0;
        FUN_008fce60(puVar12,local_98);
        *(ulong *)((long)param_2 + 0xa5) = CONCAT53(uStack_78,local_7b);
        *puVar18 = CONCAT35(local_7b,uStack_80);
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        if (local_a8 != (void *)0x0) {
          operator_delete__(local_a8);
          local_b0 = 0;
          local_a8 = (void *)0x0;
        }
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
        if ((local_e8[0] & 1) != 0) {
          operator_delete(local_d8);
        }
        if ((local_100[0] & 1) != 0) {
          operator_delete(local_f0);
        }
        if ((local_118[0] & 1) != 0) {
          operator_delete(local_108);
        }
        iVar15 = iVar15 + 3;
      }
    }
  }
  if (*(long *)(lVar14 + 0x28) == lVar17) {
    return iVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00bede0c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,undefined8 *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  byte local_118 [16];
  void *local_108;
  byte local_100 [16];
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined4 local_a0;
  byte local_98 [16];
  void *local_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  
  lVar14 = tpidr_el0;
  lVar17 = *(long *)(lVar14 + 0x28);
  iVar15 = FUN_00bed688();
  uVar16 = (*(code *)*param_6)(param_5,param_4);
  if ((uVar16 & 1) != 0) {
    uVar13 = *param_4;
    puVar1 = param_4 + 2;
    FUN_008fcdb8(local_118,puVar1);
    puVar2 = param_4 + 8;
    FUN_008fcdb8(local_100,puVar2);
    puVar3 = param_4 + 0xe;
    FUN_008fcdb8(local_e8,puVar3);
    puVar4 = param_4 + 0x14;
    FUN_008fcdb8(local_d0,puVar4);
    local_b8 = param_4[0x1a];
    puVar5 = param_4 + 0x1c;
    thunk_FUN_00e7051c(&local_b0,puVar5);
    local_a0 = param_4[0x20];
    puVar6 = param_4 + 0x22;
    FUN_008fcdb8(local_98,puVar6);
    puVar18 = (undefined8 *)(param_4 + 0x28);
    uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0xa5) >> 0x18);
    uStack_80 = (undefined5)*puVar18;
    local_7b = (undefined3)((ulong)*puVar18 >> 0x28);
    *param_4 = *param_5;
    FUN_008fce60(puVar1,param_5 + 2);
    FUN_008fce60(puVar2,param_5 + 8);
    FUN_008fce60(puVar3,param_5 + 0xe);
    FUN_008fce60(puVar4,param_5 + 0x14);
    param_4[0x1a] = param_5[0x1a];
    FUN_00910394(puVar5,param_5 + 0x1c);
    param_4[0x20] = param_5[0x20];
    FUN_008fce60(puVar6,param_5 + 0x22);
    *(undefined8 *)((long)param_4 + 0xa5) = *(undefined8 *)((long)param_5 + 0xa5);
    *puVar18 = *(undefined8 *)(param_5 + 0x28);
    *param_5 = uVar13;
    FUN_008fce60(param_5 + 2,local_118);
    FUN_008fce60(param_5 + 8,local_100);
    FUN_008fce60(param_5 + 0xe,local_e8);
    FUN_008fce60(param_5 + 0x14,local_d0);
    param_5[0x1a] = local_b8;
    FUN_00910394(param_5 + 0x1c,&local_b0);
    param_5[0x20] = local_a0;
    FUN_008fce60(param_5 + 0x22,local_98);
    *(ulong *)((long)param_5 + 0xa5) = CONCAT53(uStack_78,local_7b);
    *(ulong *)(param_5 + 0x28) = CONCAT35(local_7b,uStack_80);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_100[0] & 1) != 0) {
      operator_delete(local_f0);
    }
    if ((local_118[0] & 1) != 0) {
      operator_delete(local_108);
    }
    uVar16 = (*(code *)*param_6)(param_4,param_3);
    if ((uVar16 & 1) == 0) {
      iVar15 = iVar15 + 1;
    }
    else {
      uVar13 = *param_3;
      puVar7 = param_3 + 2;
      FUN_008fcdb8(local_118,puVar7);
      puVar8 = param_3 + 8;
      FUN_008fcdb8(local_100,puVar8);
      puVar9 = param_3 + 0xe;
      FUN_008fcdb8(local_e8,puVar9);
      puVar10 = param_3 + 0x14;
      FUN_008fcdb8(local_d0,puVar10);
      local_b8 = param_3[0x1a];
      puVar11 = param_3 + 0x1c;
      thunk_FUN_00e7051c(&local_b0,puVar11);
      local_a0 = param_3[0x20];
      puVar12 = param_3 + 0x22;
      FUN_008fcdb8(local_98,puVar12);
      puVar19 = (undefined8 *)(param_3 + 0x28);
      uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0xa5) >> 0x18);
      uStack_80 = (undefined5)*puVar19;
      local_7b = (undefined3)((ulong)*puVar19 >> 0x28);
      *param_3 = *param_4;
      FUN_008fce60(puVar7,puVar1);
      FUN_008fce60(puVar8,puVar2);
      FUN_008fce60(puVar9,puVar3);
      FUN_008fce60(puVar10,puVar4);
      param_3[0x1a] = param_4[0x1a];
      FUN_00910394(puVar11,puVar5);
      param_3[0x20] = param_4[0x20];
      FUN_008fce60(puVar12,puVar6);
      *(undefined8 *)((long)param_3 + 0xa5) = *(undefined8 *)((long)param_4 + 0xa5);
      *puVar19 = *puVar18;
      *param_4 = uVar13;
      FUN_008fce60(puVar1,local_118);
      FUN_008fce60(puVar2,local_100);
      FUN_008fce60(puVar3,local_e8);
      FUN_008fce60(puVar4,local_d0);
      param_4[0x1a] = local_b8;
      FUN_00910394(puVar5,&local_b0);
      param_4[0x20] = local_a0;
      FUN_008fce60(puVar6,local_98);
      *(ulong *)((long)param_4 + 0xa5) = CONCAT53(uStack_78,local_7b);
      *puVar18 = CONCAT35(local_7b,uStack_80);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
        local_b0 = 0;
        local_a8 = (void *)0x0;
      }
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_100[0] & 1) != 0) {
        operator_delete(local_f0);
      }
      if ((local_118[0] & 1) != 0) {
        operator_delete(local_108);
      }
      uVar16 = (*(code *)*param_6)(param_3,param_2);
      if ((uVar16 & 1) == 0) {
        iVar15 = iVar15 + 2;
      }
      else {
        uVar13 = *param_2;
        puVar1 = param_2 + 2;
        FUN_008fcdb8(local_118,puVar1);
        puVar2 = param_2 + 8;
        FUN_008fcdb8(local_100,puVar2);
        puVar3 = param_2 + 0xe;
        FUN_008fcdb8(local_e8,puVar3);
        puVar4 = param_2 + 0x14;
        FUN_008fcdb8(local_d0,puVar4);
        local_b8 = param_2[0x1a];
        puVar5 = param_2 + 0x1c;
        thunk_FUN_00e7051c(&local_b0,puVar5);
        local_a0 = param_2[0x20];
        puVar6 = param_2 + 0x22;
        FUN_008fcdb8(local_98,puVar6);
        puVar18 = (undefined8 *)(param_2 + 0x28);
        uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0xa5) >> 0x18);
        uStack_80 = (undefined5)*puVar18;
        local_7b = (undefined3)((ulong)*puVar18 >> 0x28);
        *param_2 = *param_3;
        FUN_008fce60(puVar1,puVar7);
        FUN_008fce60(puVar2,puVar8);
        FUN_008fce60(puVar3,puVar9);
        FUN_008fce60(puVar4,puVar10);
        param_2[0x1a] = param_3[0x1a];
        FUN_00910394(puVar5,puVar11);
        param_2[0x20] = param_3[0x20];
        FUN_008fce60(puVar6,puVar12);
        *(undefined8 *)((long)param_2 + 0xa5) = *(undefined8 *)((long)param_3 + 0xa5);
        *puVar18 = *puVar19;
        *param_3 = uVar13;
        FUN_008fce60(puVar7,local_118);
        FUN_008fce60(puVar8,local_100);
        FUN_008fce60(puVar9,local_e8);
        FUN_008fce60(puVar10,local_d0);
        param_3[0x1a] = local_b8;
        FUN_00910394(puVar11,&local_b0);
        param_3[0x20] = local_a0;
        FUN_008fce60(puVar12,local_98);
        *(ulong *)((long)param_3 + 0xa5) = CONCAT53(uStack_78,local_7b);
        *puVar19 = CONCAT35(local_7b,uStack_80);
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        if (local_a8 != (void *)0x0) {
          operator_delete__(local_a8);
          local_b0 = 0;
          local_a8 = (void *)0x0;
        }
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
        if ((local_e8[0] & 1) != 0) {
          operator_delete(local_d8);
        }
        if ((local_100[0] & 1) != 0) {
          operator_delete(local_f0);
        }
        if ((local_118[0] & 1) != 0) {
          operator_delete(local_108);
        }
        uVar16 = (*(code *)*param_6)(param_2,param_1);
        if ((uVar16 & 1) == 0) {
          iVar15 = iVar15 + 3;
        }
        else {
          uVar13 = *param_1;
          FUN_008fcdb8(local_118,param_1 + 2);
          FUN_008fcdb8(local_100,param_1 + 8);
          FUN_008fcdb8(local_e8,param_1 + 0xe);
          FUN_008fcdb8(local_d0,param_1 + 0x14);
          local_b8 = param_1[0x1a];
          thunk_FUN_00e7051c(&local_b0,param_1 + 0x1c);
          local_a0 = param_1[0x20];
          FUN_008fcdb8(local_98,param_1 + 0x22);
          uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xa5) >> 0x18);
          uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0x28);
          local_7b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x28);
          *param_1 = *param_2;
          FUN_008fce60(param_1 + 2,puVar1);
          FUN_008fce60(param_1 + 8,puVar2);
          FUN_008fce60(param_1 + 0xe,puVar3);
          FUN_008fce60(param_1 + 0x14,puVar4);
          param_1[0x1a] = param_2[0x1a];
          FUN_00910394(param_1 + 0x1c,puVar5);
          param_1[0x20] = param_2[0x20];
          FUN_008fce60(param_1 + 0x22,puVar6);
          *(undefined8 *)((long)param_1 + 0xa5) = *(undefined8 *)((long)param_2 + 0xa5);
          *(undefined8 *)(param_1 + 0x28) = *puVar18;
          *param_2 = uVar13;
          FUN_008fce60(puVar1,local_118);
          FUN_008fce60(puVar2,local_100);
          FUN_008fce60(puVar3,local_e8);
          FUN_008fce60(puVar4,local_d0);
          param_2[0x1a] = local_b8;
          FUN_00910394(puVar5,&local_b0);
          param_2[0x20] = local_a0;
          FUN_008fce60(puVar6,local_98);
          *(ulong *)((long)param_2 + 0xa5) = CONCAT53(uStack_78,local_7b);
          *puVar18 = CONCAT35(local_7b,uStack_80);
          if ((local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
          if (local_a8 != (void *)0x0) {
            operator_delete__(local_a8);
            local_b0 = 0;
            local_a8 = (void *)0x0;
          }
          if ((local_d0[0] & 1) != 0) {
            operator_delete(local_c0);
          }
          if ((local_e8[0] & 1) != 0) {
            operator_delete(local_d8);
          }
          if ((local_100[0] & 1) != 0) {
            operator_delete(local_f0);
          }
          if ((local_118[0] & 1) != 0) {
            operator_delete(local_108);
          }
          iVar15 = iVar15 + 4;
        }
      }
    }
  }
  if (*(long *)(lVar14 + 0x28) == lVar17) {
    return iVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

