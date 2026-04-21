// functions/00bec — 1 functions
#include "libGameKindred.h"




void FUN_00becb70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
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
  
  lVar8 = tpidr_el0;
  lVar12 = *(long *)(lVar8 + 0x28);
  uVar9 = (*(code *)*param_4)(param_2,param_1);
  uVar10 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar9 & 1) == 0) {
    uVar11 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00bed654;
    uVar7 = *param_2;
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
    puVar13 = (undefined8 *)(param_2 + 0x28);
    uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0xa5) >> 0x18);
    uStack_80 = (undefined5)*puVar13;
    local_7b = (undefined3)((ulong)*puVar13 >> 0x28);
    *param_2 = *param_3;
    FUN_008fce60(puVar1);
    FUN_008fce60(puVar2,param_3 + 8);
    FUN_008fce60(puVar3,param_3 + 0xe);
    FUN_008fce60(puVar4,param_3 + 0x14);
    param_2[0x1a] = param_3[0x1a];
    FUN_00910394(puVar5,param_3 + 0x1c);
    param_2[0x20] = param_3[0x20];
    FUN_008fce60(puVar6,param_3 + 0x22);
    *(undefined8 *)((long)param_2 + 0xa5) = *(undefined8 *)((long)param_3 + 0xa5);
    *puVar13 = *(undefined8 *)(param_3 + 0x28);
    *param_3 = uVar7;
    FUN_008fce60(param_3 + 2,local_118);
    FUN_008fce60(param_3 + 8,local_100);
    FUN_008fce60(param_3 + 0xe,local_e8);
    FUN_008fce60(param_3 + 0x14,local_d0);
    param_3[0x1a] = local_b8;
    FUN_00910394(param_3 + 0x1c,&local_b0);
    param_3[0x20] = local_a0;
    FUN_008fce60(param_3 + 0x22,local_98);
    *(ulong *)((long)param_3 + 0xa5) = CONCAT53(uStack_78,local_7b);
    *(ulong *)(param_3 + 0x28) = CONCAT35(local_7b,uStack_80);
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
    uVar9 = (*(code *)*param_4)(param_2,param_1);
    if ((uVar9 & 1) != 0) {
      uVar7 = *param_1;
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
      *(undefined8 *)(param_1 + 0x28) = *puVar13;
      *param_2 = uVar7;
      FUN_008fce60(puVar1,local_118);
      FUN_008fce60(puVar2,local_100);
      FUN_008fce60(puVar3,local_e8);
      FUN_008fce60(puVar4,local_d0);
      param_2[0x1a] = local_b8;
      FUN_00910394(puVar5,&local_b0);
      param_2[0x20] = local_a0;
      FUN_008fce60(puVar6,local_98);
      *(ulong *)((long)param_2 + 0xa5) = CONCAT53(uStack_78,local_7b);
      *puVar13 = CONCAT35(local_7b,uStack_80);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
        local_b0 = 0;
        local_a8 = (void *)0x0;
      }
      goto LAB_00bed600;
    }
  }
  else if ((uVar10 & 1) == 0) {
    uVar7 = *param_1;
    FUN_008fcdb8(local_118,param_1 + 2);
    FUN_008fcdb8(local_100,param_1 + 8);
    FUN_008fcdb8(local_e8,param_1 + 0xe);
    FUN_008fcdb8(local_d0,param_1 + 0x14);
    local_b8 = param_1[0x1a];
    thunk_FUN_00e7051c();
    local_a0 = param_1[0x20];
    FUN_008fcdb8();
    uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xa5) >> 0x18);
    uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0x28);
    local_7b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x28);
    *param_1 = *param_2;
    puVar1 = param_2 + 2;
    FUN_008fce60(param_1 + 2,puVar1);
    puVar2 = param_2 + 8;
    FUN_008fce60(param_1 + 8,puVar2);
    puVar3 = param_2 + 0xe;
    FUN_008fce60(param_1 + 0xe,puVar3);
    puVar4 = param_2 + 0x14;
    FUN_008fce60(param_1 + 0x14,puVar4);
    puVar5 = param_2 + 0x1c;
    param_1[0x1a] = param_2[0x1a];
    FUN_00910394(param_1 + 0x1c,puVar5);
    puVar6 = param_2 + 0x22;
    param_1[0x20] = param_2[0x20];
    FUN_008fce60(param_1 + 0x22,puVar6);
    puVar13 = (undefined8 *)(param_2 + 0x28);
    uVar11 = *puVar13;
    *(undefined8 *)((long)param_1 + 0xa5) = *(undefined8 *)((long)param_2 + 0xa5);
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    *param_2 = uVar7;
    FUN_008fce60(puVar1,local_118);
    FUN_008fce60(puVar2,local_100);
    FUN_008fce60(puVar3,local_e8);
    FUN_008fce60(puVar4,local_d0);
    param_2[0x1a] = local_b8;
    FUN_00910394(puVar5,&local_b0);
    param_2[0x20] = local_a0;
    FUN_008fce60(puVar6,local_98);
    *(ulong *)((long)param_2 + 0xa5) = CONCAT53(uStack_78,local_7b);
    *puVar13 = CONCAT35(local_7b,uStack_80);
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
    uVar9 = (*(code *)*param_4)(param_3,param_2);
    if ((uVar9 & 1) != 0) {
      uVar7 = *param_2;
      FUN_008fcdb8(local_118,puVar1);
      FUN_008fcdb8(local_100,puVar2);
      FUN_008fcdb8(local_e8,puVar3);
      FUN_008fcdb8(local_d0,puVar4);
      local_b8 = param_2[0x1a];
      thunk_FUN_00e7051c(&local_b0,param_2 + 0x1c);
      local_a0 = param_2[0x20];
      FUN_008fcdb8(local_98,puVar6);
      uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0xa5) >> 0x18);
      uStack_80 = (undefined5)*puVar13;
      local_7b = (undefined3)((ulong)*puVar13 >> 0x28);
      *param_2 = *param_3;
      FUN_008fce60(puVar1);
      FUN_008fce60(puVar2,param_3 + 8);
      FUN_008fce60(puVar3,param_3 + 0xe);
      FUN_008fce60(puVar4,param_3 + 0x14);
      param_2[0x1a] = param_3[0x1a];
      FUN_00910394(puVar5,param_3 + 0x1c);
      param_2[0x20] = param_3[0x20];
      FUN_008fce60(puVar6,param_3 + 0x22);
      *(undefined8 *)((long)param_2 + 0xa5) = *(undefined8 *)((long)param_3 + 0xa5);
      *puVar13 = *(undefined8 *)(param_3 + 0x28);
      *param_3 = uVar7;
      FUN_008fce60(param_3 + 2,local_118);
      FUN_008fce60(param_3 + 8,local_100);
      FUN_008fce60(param_3 + 0xe,local_e8);
      FUN_008fce60(param_3 + 0x14,local_d0);
      param_3[0x1a] = local_b8;
      FUN_00910394(param_3 + 0x1c,&local_b0);
      param_3[0x20] = local_a0;
      FUN_008fce60(param_3 + 0x22,local_98);
      *(ulong *)((long)param_3 + 0xa5) = CONCAT53(uStack_78,local_7b);
      *(ulong *)(param_3 + 0x28) = CONCAT35(local_7b,uStack_80);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
        local_b0 = 0;
        local_a8 = (void *)0x0;
      }
LAB_00bed600:
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
      uVar11 = 2;
      goto LAB_00bed654;
    }
  }
  else {
    uVar7 = *param_1;
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
    *param_1 = *param_3;
    FUN_008fce60(param_1 + 2,param_3 + 2);
    FUN_008fce60(param_1 + 8,param_3 + 8);
    FUN_008fce60(param_1 + 0xe,param_3 + 0xe);
    FUN_008fce60(param_1 + 0x14,param_3 + 0x14);
    param_1[0x1a] = param_3[0x1a];
    FUN_00910394(param_1 + 0x1c,param_3 + 0x1c);
    param_1[0x20] = param_3[0x20];
    FUN_008fce60(param_1 + 0x22,param_3 + 0x22);
    *(undefined8 *)((long)param_1 + 0xa5) = *(undefined8 *)((long)param_3 + 0xa5);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *param_3 = uVar7;
    FUN_008fce60(param_3 + 2,local_118);
    FUN_008fce60(param_3 + 8,local_100);
    FUN_008fce60(param_3 + 0xe,local_e8);
    FUN_008fce60(param_3 + 0x14,local_d0);
    param_3[0x1a] = local_b8;
    FUN_00910394(param_3 + 0x1c,&local_b0);
    param_3[0x20] = local_a0;
    FUN_008fce60(param_3 + 0x22,local_98);
    *(ulong *)((long)param_3 + 0xa5) = CONCAT53(uStack_78,local_7b);
    *(ulong *)(param_3 + 0x28) = CONCAT35(local_7b,uStack_80);
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
  }
  uVar11 = 1;
LAB_00bed654:
  if (*(long *)(lVar8 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}

