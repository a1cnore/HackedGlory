// functions/00cb2 — 2 functions
#include "libGameKindred.h"




void FUN_00cb2a10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined1 local_25c;
  int local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined5 uStack_240;
  undefined3 local_23b;
  undefined5 uStack_238;
  undefined4 local_230;
  undefined8 local_228;
  void *local_220;
  undefined8 local_218;
  void *local_210;
  undefined8 local_208;
  void *local_200;
  undefined4 local_1f4;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [224];
  long local_80 [4];
  
  lVar1 = tpidr_el0;
  local_80[2] = *(long *)(lVar1 + 0x28);
  lVar8 = 0;
  do {
    FUN_00e70510(auStack_170 + lVar8);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x100);
  local_1f4 = 0;
  uVar4 = FUN_00e710d0(param_1,0,0x5b,0x5d,1,auStack_170,0,&local_1f4);
  uVar10 = 0;
  if ((uVar4 & 1) != 0) {
    puVar9 = auStack_160;
    uVar4 = 0;
    do {
      uVar10 = uVar4 + 1;
      if (0xf < uVar10) {
        uVar10 = (ulong)((int)uVar4 + 1);
        break;
      }
      uVar5 = FUN_00e710d0(param_1,local_1f4,0x5b,0x5d,1,puVar9,0,&local_1f4);
      puVar9 = puVar9 + 0x10;
      uVar4 = uVar10;
    } while ((uVar5 & 1) != 0);
  }
  FUN_00e70510(&local_208);
  FUN_00e70510(&local_218);
  if ((int)uVar10 != 0) {
    puVar9 = auStack_170;
    uVar4 = 1;
    do {
      FUN_00e70978(puVar9,auStack_1f0,0x80);
      lVar8 = FUN_00ce9fd8(auStack_1f0,param_2,0);
      if (lVar8 == 0) {
        lVar8 = FUN_00ce9e1c(auStack_1f0,param_2);
        if (lVar8 != 0) {
          FUN_00e705c8(&local_228,"[");
          FUN_00910394(&local_208,&local_228);
          if (local_220 != (void *)0x0) {
            operator_delete__(local_220);
            local_228 = 0;
            local_220 = (void *)0x0;
          }
          FUN_00e70c34(&local_208,puVar9);
          FUN_00e705c8(&local_228,&DAT_01e21cb0);
          FUN_00e70c34(&local_208,&local_228);
          if (local_220 != (void *)0x0) {
            operator_delete__(local_220);
            local_228 = 0;
            local_220 = (void *)0x0;
          }
          local_278 = *(undefined4 *)(lVar8 + 0x10);
          uStack_274 = *(undefined4 *)(lVar8 + 0x18);
          local_268 = *(undefined4 *)(lVar8 + 0x24);
          uStack_26c = *(undefined4 *)(lVar8 + 0x28);
          local_270 = *(undefined4 *)(lVar8 + 0x20);
          uStack_264 = *(undefined4 *)(lVar8 + 0x4c);
          local_260 = *(undefined4 *)(lVar8 + 0x30);
          local_25c = *(undefined1 *)(lVar8 + 0x34);
          local_258 = (uint)(*(int *)(lVar8 + 0x38) == 0) << 1;
          if (*(int *)(lVar8 + 0x38) == 1) {
            local_258 = 1;
          }
          uVar3 = 1;
          puVar7 = (undefined8 *)&local_278;
          goto LAB_00cb2c80;
        }
      }
      else {
        FUN_00e705c8(&local_228,"[");
        FUN_00910394(&local_208,&local_228);
        if (local_220 != (void *)0x0) {
          operator_delete__(local_220);
          local_228 = 0;
          local_220 = (void *)0x0;
        }
        FUN_00e70c34(&local_208,puVar9);
        FUN_00e705c8(&local_228,&DAT_01e21cb0);
        FUN_00e70c34(&local_208,&local_228);
        if (local_220 != (void *)0x0) {
          operator_delete__(local_220);
          local_228 = 0;
          local_220 = (void *)0x0;
        }
        uStack_248 = *(undefined8 *)(lVar8 + 0x10);
        local_250 = *(undefined8 *)(lVar8 + 8);
        uVar3 = *(undefined4 *)(lVar8 + 0x20);
        puVar7 = &local_250;
        uStack_238 = 0;
        uStack_240 = 0;
        local_23b = 0;
        local_230 = 0;
LAB_00cb2c80:
        FUN_00cb0740(uVar3,puVar7,&local_218);
        FUN_00e71248(param_1,0,&local_208,&local_218);
      }
      if ((uVar10 & 0xffffffff) <= uVar4) break;
      bVar2 = uVar4 < 0x10;
      uVar4 = uVar4 + 1;
      puVar9 = puVar9 + 0x10;
    } while (bVar2);
  }
  if (local_210 != (void *)0x0) {
    operator_delete__(local_210);
    local_218 = 0;
    local_210 = (void *)0x0;
  }
  if (local_200 != (void *)0x0) {
    operator_delete__(local_200);
    local_208 = 0;
    local_200 = (void *)0x0;
  }
  lVar8 = 0;
  do {
    pvVar6 = *(void **)((long)local_80 + lVar8 + 8);
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      *(undefined8 *)((long)local_80 + lVar8) = 0;
      *(undefined8 *)((long)local_80 + lVar8 + 8) = 0;
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != -0x100);
  if (*(long *)(lVar1 + 0x28) != local_80[2]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cb2d30(undefined8 param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined5 uStack_450;
  undefined3 local_44b;
  undefined5 uStack_448;
  undefined4 local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 local_420;
  char local_41c;
  int local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined5 uStack_400;
  undefined3 local_3fb;
  undefined5 uStack_3f8;
  undefined4 local_3f0;
  undefined8 local_3e8;
  void *local_3e0;
  undefined8 local_3d8;
  void *local_3d0;
  undefined8 local_3c8;
  void *local_3c0;
  undefined4 local_3b4;
  undefined1 auStack_3b0 [32];
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [768];
  long local_80 [4];
  
  lVar1 = tpidr_el0;
  local_80[2] = *(long *)(lVar1 + 0x28);
  lVar9 = 0;
  do {
    FUN_00e70510(auStack_390 + lVar9);
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 800);
  local_3b4 = 0;
  uVar3 = FUN_00e710d0(param_1,0,0x5b,0x5d,1,auStack_390,0,&local_3b4);
  uVar11 = 0;
  if ((uVar3 & 1) != 0) {
    puVar10 = auStack_380;
    uVar3 = 0;
    do {
      uVar11 = uVar3 + 1;
      if (0x31 < uVar11) {
        uVar11 = (ulong)((int)uVar3 + 1);
        break;
      }
      uVar4 = FUN_00e710d0(param_1,local_3b4,0x5b,0x5d,1,puVar10,0,&local_3b4);
      puVar10 = puVar10 + 0x10;
      uVar3 = uVar11;
    } while ((uVar4 & 1) != 0);
  }
  FUN_00e70510(&local_3c8);
  FUN_00e70510(&local_3d8);
  uVar5 = FUN_00cea0b0(param_2);
  if ((int)uVar11 != 0) {
    puVar10 = auStack_390;
    uVar3 = 1;
    do {
      FUN_00e70978(puVar10,auStack_3b0,0x20);
      lVar9 = FUN_00cea044(auStack_3b0,param_2,0);
      if (lVar9 == 0) {
        lVar9 = FUN_00ce9ef8(auStack_3b0,param_2);
        if (lVar9 != 0) {
          FUN_00e705c8(&local_3e8,"[");
          FUN_00910394(&local_3c8,&local_3e8);
          if (local_3e0 != (void *)0x0) {
            operator_delete__(local_3e0);
            local_3e8 = 0;
            local_3e0 = (void *)0x0;
          }
          FUN_00e70c34(&local_3c8,puVar10);
          FUN_00e705c8(&local_3e8,&DAT_01e21cb0);
          FUN_00e70c34(&local_3c8,&local_3e8);
          if (local_3e0 != (void *)0x0) {
            operator_delete__(local_3e0);
            local_3e8 = 0;
            local_3e0 = (void *)0x0;
          }
          local_438 = *(undefined4 *)(lVar9 + 0x10);
          uStack_434 = *(undefined4 *)(lVar9 + 0x18);
          local_41c = *(char *)(lVar9 + 0x34);
          local_428 = *(undefined4 *)(lVar9 + 0x24);
          uStack_42c = *(undefined4 *)(lVar9 + 0x28);
          local_430 = *(undefined4 *)(lVar9 + 0x20);
          uStack_424 = *(undefined4 *)(lVar9 + 0x4c);
          local_420 = *(undefined4 *)(lVar9 + 0x30);
          local_418 = (uint)(*(int *)(lVar9 + 0x38) == 0) << 1;
          if (*(int *)(lVar9 + 0x38) == 1) {
            local_418 = 1;
          }
          uVar8 = 1;
          if (local_41c != '\0') {
            uVar8 = 2;
          }
          puVar7 = (undefined8 *)&local_438;
          goto LAB_00cb2fc0;
        }
        if ((*(char *)(param_2 + 0x60) != '\0') &&
           (lVar9 = FUN_00ce9fc8(auStack_3b0,uVar5,0), lVar9 != 0)) {
          FUN_00e705c8(&local_3e8,"[");
          FUN_00910394(&local_3c8,&local_3e8);
          if (local_3e0 != (void *)0x0) {
            operator_delete__(local_3e0);
            local_3e8 = 0;
            local_3e0 = (void *)0x0;
          }
          FUN_00e70c34(&local_3c8,puVar10);
          FUN_00e705c8(&local_3e8,&DAT_01e21cb0);
          FUN_00e70c34(&local_3c8,&local_3e8);
          if (local_3e0 != (void *)0x0) {
            operator_delete__(local_3e0);
            local_3e8 = 0;
            local_3e0 = (void *)0x0;
          }
          local_460 = *(undefined4 *)(lVar9 + 8);
          uStack_45c = *(undefined4 *)(lVar9 + 0x20);
          local_458 = *(undefined8 *)(lVar9 + 0x14);
          uVar8 = *(undefined4 *)(lVar9 + 0x2c);
          puVar7 = (undefined8 *)&local_460;
          uStack_448 = 0;
          uStack_450 = 0;
          local_44b = 0;
          local_440 = 0;
          goto LAB_00cb2fc0;
        }
      }
      else {
        FUN_00e705c8(&local_3e8,"[");
        FUN_00910394(&local_3c8,&local_3e8);
        if (local_3e0 != (void *)0x0) {
          operator_delete__(local_3e0);
          local_3e8 = 0;
          local_3e0 = (void *)0x0;
        }
        FUN_00e70c34(&local_3c8,puVar10);
        FUN_00e705c8(&local_3e8,&DAT_01e21cb0);
        FUN_00e70c34(&local_3c8,&local_3e8);
        if (local_3e0 != (void *)0x0) {
          operator_delete__(local_3e0);
          local_3e8 = 0;
          local_3e0 = (void *)0x0;
        }
        uStack_408 = *(undefined8 *)(lVar9 + 0x10);
        local_410 = *(undefined8 *)(lVar9 + 8);
        uVar8 = *(undefined4 *)(lVar9 + 0x20);
        puVar7 = &local_410;
        uStack_3f8 = 0;
        uStack_400 = 0;
        local_3fb = 0;
        local_3f0 = 0;
LAB_00cb2fc0:
        FUN_00cb0740(uVar8,puVar7,&local_3d8);
        FUN_00e71248(param_1,0,&local_3c8,&local_3d8);
      }
      if ((uVar11 & 0xffffffff) <= uVar3) break;
      bVar2 = uVar3 < 0x32;
      uVar3 = uVar3 + 1;
      puVar10 = puVar10 + 0x10;
    } while (bVar2);
  }
  if (local_3d0 != (void *)0x0) {
    operator_delete__(local_3d0);
    local_3d8 = 0;
    local_3d0 = (void *)0x0;
  }
  if (local_3c0 != (void *)0x0) {
    operator_delete__(local_3c0);
    local_3c8 = 0;
    local_3c0 = (void *)0x0;
  }
  lVar9 = 0;
  do {
    pvVar6 = *(void **)((long)local_80 + lVar9 + 8);
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      *(undefined8 *)((long)local_80 + lVar9) = 0;
      *(undefined8 *)((long)local_80 + lVar9 + 8) = 0;
    }
    lVar9 = lVar9 + -0x10;
  } while (lVar9 != -800);
  if (*(long *)(lVar1 + 0x28) != local_80[2]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

