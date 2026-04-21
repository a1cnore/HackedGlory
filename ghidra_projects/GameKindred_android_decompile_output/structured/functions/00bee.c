// functions/00bee — 2 functions
#include "libGameKindred.h"




void FUN_00bee7d4(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 local_120 [2];
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
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  FUN_00becb70(param_1,param_1 + 0x2c,param_1 + 0x58);
  if (param_1 + 0x84 != param_2) {
    lVar12 = 0;
    puVar14 = param_1 + 0x84;
    puVar15 = param_1 + 0x58;
    do {
      puVar11 = puVar14;
      uVar10 = (*(code *)*param_3)(puVar11,puVar15);
      if ((uVar10 & 1) != 0) {
        local_120[0] = *puVar11;
        FUN_008fcdb8(local_118,puVar11 + 2);
        FUN_008fcdb8(local_100,puVar11 + 8);
        FUN_008fcdb8(local_e8,puVar11 + 0xe);
        FUN_008fcdb8(local_d0,puVar11 + 0x14);
        local_b8 = puVar11[0x1a];
        thunk_FUN_00e7051c(&local_b0,puVar11 + 0x1c);
        local_a0 = puVar11[0x20];
        FUN_008fcdb8(local_98,puVar11 + 0x22);
        uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)puVar11 + 0xa5) >> 0x18);
        uStack_80 = (undefined5)*(undefined8 *)(puVar11 + 0x28);
        local_7b = (undefined3)((ulong)*(undefined8 *)(puVar11 + 0x28) >> 0x28);
        lVar9 = lVar12;
        do {
          lVar13 = lVar9;
          lVar1 = (long)param_1 + lVar13 + 0x168;
          *(undefined4 *)((long)param_1 + lVar13 + 0x210) =
               *(undefined4 *)((long)param_1 + lVar13 + 0x160);
          FUN_008fce60((long)param_1 + lVar13 + 0x218,lVar1);
          lVar2 = (long)param_1 + lVar13 + 0x180;
          FUN_008fce60((long)param_1 + lVar13 + 0x230,lVar2);
          lVar3 = (long)param_1 + lVar13 + 0x198;
          FUN_008fce60((long)param_1 + lVar13 + 0x248,lVar3);
          lVar4 = (long)param_1 + lVar13 + 0x1b0;
          FUN_008fce60((long)param_1 + lVar13 + 0x260,lVar4);
          lVar5 = (long)param_1 + lVar13 + 0x1d0;
          *(undefined4 *)((long)param_1 + lVar13 + 0x278) =
               *(undefined4 *)((long)param_1 + lVar13 + 0x1c8);
          FUN_00910394((long)param_1 + lVar13 + 0x280,lVar5);
          lVar6 = (long)param_1 + lVar13 + 0x1e8;
          *(undefined4 *)((long)param_1 + lVar13 + 0x290) =
               *(undefined4 *)((long)param_1 + lVar13 + 0x1e0);
          FUN_008fce60((long)param_1 + lVar13 + 0x298,lVar6);
          puVar7 = (undefined8 *)((long)param_1 + lVar13 + 0x205);
          *(undefined8 *)((long)param_1 + lVar13 + 0x2b0) =
               *(undefined8 *)((long)param_1 + lVar13 + 0x200);
          *(undefined8 *)((long)param_1 + lVar13 + 0x2b5) = *puVar7;
          puVar14 = param_1;
          if (lVar13 == -0x160) goto LAB_00bee9d0;
          uVar10 = (*(code *)*param_3)(local_120,(long)param_1 + lVar13 + 0xb0);
          lVar9 = lVar13 + -0xb0;
        } while ((uVar10 & 1) != 0);
        puVar14 = (undefined4 *)((long)param_1 + lVar13 + 0x160);
LAB_00bee9d0:
        *puVar14 = local_120[0];
        FUN_008fce60(lVar1,local_118);
        FUN_008fce60(lVar2,local_100);
        FUN_008fce60(lVar3,local_e8);
        FUN_008fce60(lVar4,local_d0);
        puVar14[0x1a] = local_b8;
        FUN_00910394(lVar5,&local_b0);
        puVar14[0x20] = local_a0;
        FUN_008fce60(lVar6,local_98);
        *puVar7 = CONCAT53(uStack_78,local_7b);
        *(ulong *)((long)param_1 + lVar13 + 0x200) = CONCAT35(local_7b,uStack_80);
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
      lVar12 = lVar12 + 0xb0;
      puVar14 = puVar11 + 0x2c;
      puVar15 = puVar11;
    } while (puVar11 + 0x2c != param_2);
  }
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00beeb08(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 local_120 [2];
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
  lVar14 = *(long *)(lVar8 + 0x28);
  lVar12 = (long)param_2 - (long)param_1 >> 4;
  if ((ulong)(lVar12 * 0x2e8ba2e8ba2e8ba3) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00beeb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01bbafa8 + *(int *)(&DAT_01bbafa8 + lVar12 * -0x45d1745d1745d174)))(1);
    return;
  }
  FUN_00becb70(param_1,param_1 + 0x2c,param_1 + 0x58,param_3);
  if (param_1 + 0x84 != param_2) {
    lVar12 = 0;
    iVar15 = 0;
    puVar17 = param_1 + 0x84;
    puVar18 = param_1 + 0x58;
    do {
      puVar13 = puVar17;
      uVar11 = (*(code *)*param_3)(puVar13,puVar18);
      if ((uVar11 & 1) != 0) {
        local_120[0] = *puVar13;
        FUN_008fcdb8(local_118,puVar13 + 2);
        FUN_008fcdb8(local_100,puVar13 + 8);
        FUN_008fcdb8(local_e8,puVar13 + 0xe);
        FUN_008fcdb8(local_d0,puVar13 + 0x14);
        local_b8 = puVar13[0x1a];
        thunk_FUN_00e7051c(&local_b0,puVar13 + 0x1c);
        local_a0 = puVar13[0x20];
        FUN_008fcdb8(local_98,puVar13 + 0x22);
        uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)puVar13 + 0xa5) >> 0x18);
        uStack_80 = (undefined5)*(undefined8 *)(puVar13 + 0x28);
        local_7b = (undefined3)((ulong)*(undefined8 *)(puVar13 + 0x28) >> 0x28);
        lVar9 = lVar12;
        do {
          lVar16 = lVar9;
          lVar1 = (long)param_1 + lVar16 + 0x168;
          *(undefined4 *)((long)param_1 + lVar16 + 0x210) =
               *(undefined4 *)((long)param_1 + lVar16 + 0x160);
          FUN_008fce60((long)param_1 + lVar16 + 0x218,lVar1);
          lVar2 = (long)param_1 + lVar16 + 0x180;
          FUN_008fce60((long)param_1 + lVar16 + 0x230,lVar2);
          lVar3 = (long)param_1 + lVar16 + 0x198;
          FUN_008fce60((long)param_1 + lVar16 + 0x248,lVar3);
          lVar4 = (long)param_1 + lVar16 + 0x1b0;
          FUN_008fce60((long)param_1 + lVar16 + 0x260,lVar4);
          lVar5 = (long)param_1 + lVar16 + 0x1d0;
          *(undefined4 *)((long)param_1 + lVar16 + 0x278) =
               *(undefined4 *)((long)param_1 + lVar16 + 0x1c8);
          FUN_00910394((long)param_1 + lVar16 + 0x280,lVar5);
          lVar6 = (long)param_1 + lVar16 + 0x1e8;
          *(undefined4 *)((long)param_1 + lVar16 + 0x290) =
               *(undefined4 *)((long)param_1 + lVar16 + 0x1e0);
          FUN_008fce60((long)param_1 + lVar16 + 0x298,lVar6);
          puVar7 = (undefined8 *)((long)param_1 + lVar16 + 0x205);
          *(undefined8 *)((long)param_1 + lVar16 + 0x2b0) =
               *(undefined8 *)((long)param_1 + lVar16 + 0x200);
          *(undefined8 *)((long)param_1 + lVar16 + 0x2b5) = *puVar7;
          puVar17 = param_1;
          if (lVar16 == -0x160) goto LAB_00beef8c;
          uVar11 = (*(code *)*param_3)(local_120,(long)param_1 + lVar16 + 0xb0);
          lVar9 = lVar16 + -0xb0;
        } while ((uVar11 & 1) != 0);
        puVar17 = (undefined4 *)((long)param_1 + lVar16 + 0x160);
LAB_00beef8c:
        *puVar17 = local_120[0];
        FUN_008fce60(lVar1,local_118);
        FUN_008fce60(lVar2,local_100);
        FUN_008fce60(lVar3,local_e8);
        FUN_008fce60(lVar4,local_d0);
        puVar17[0x1a] = local_b8;
        FUN_00910394(lVar5,&local_b0);
        puVar17[0x20] = local_a0;
        FUN_008fce60(lVar6,local_98);
        *puVar7 = CONCAT53(uStack_78,local_7b);
        *(ulong *)((long)param_1 + lVar16 + 0x200) = CONCAT35(local_7b,uStack_80);
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
        iVar15 = iVar15 + 1;
        if ((local_118[0] & 1) != 0) {
          operator_delete(local_108);
        }
        if (iVar15 == 8) {
          bVar10 = puVar13 + 0x2c == param_2;
          goto LAB_00bef0e0;
        }
      }
      lVar12 = lVar12 + 0xb0;
      puVar17 = puVar13 + 0x2c;
      puVar18 = puVar13;
    } while (puVar13 + 0x2c != param_2);
  }
  bVar10 = true;
LAB_00bef0e0:
  if (*(long *)(lVar8 + 0x28) != lVar14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar10);
  }
  return;
}

