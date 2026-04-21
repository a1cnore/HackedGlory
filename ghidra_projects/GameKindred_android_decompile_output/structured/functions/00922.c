// functions/00922 — 9 functions
#include "libGameKindred.h"




undefined8
FUN_009224a8(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            undefined1 param_7)

{
  uint uVar1;
  long lVar2;
  undefined2 local_44;
  uint local_42;
  uint local_3e;
  uint local_3a;
  uint local_36;
  uint local_32;
  uint local_2e;
  undefined1 local_2a;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  local_42 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_5 & 0xff00ff00) >> 8 | (param_5 & 0xff00ff) << 8;
  local_3e = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
  local_3a = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_36 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_32 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_2e = uVar1 >> 0x10 | uVar1 << 0x10;
  local_44 = 0x2104;
  local_2a = param_7;
  FUN_00923768(&local_44,0x1b);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00922540(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  long lVar2;
  undefined2 local_44;
  uint local_42;
  uint local_3e;
  uint local_3a;
  uint local_36;
  uint local_32;
  uint local_2e;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_42 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_3e = uVar1 >> 0x10 | uVar1 << 0x10;
  local_44 = 0x2204;
  uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  local_3a = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
  local_36 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_4 & 0xff00ff00) >> 8 | (*param_4 & 0xff00ff) << 8;
  local_32 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4[1] & 0xff00ff00) >> 8 | (param_4[1] & 0xff00ff) << 8;
  local_2e = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_00923768(&local_44,0x1a);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8
FUN_009225d0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,undefined1 param_8)

{
  uint uVar1;
  long lVar2;
  undefined2 local_48;
  uint local_46;
  uint local_42;
  uint local_3e;
  uint local_3a;
  uint local_36;
  uint local_32;
  uint local_2e;
  undefined1 local_2a;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
  local_46 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_7 & 0xff00ff00) >> 8 | (param_7 & 0xff00ff) << 8;
  local_42 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_3e = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_3a = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_36 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  local_32 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_5 & 0xff00ff00) >> 8 | (param_5 & 0xff00ff) << 8;
  local_2e = uVar1 >> 0x10 | uVar1 << 0x10;
  local_48 = 0x2004;
  local_2a = param_8;
  FUN_00923768(&local_48,0x1f);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8
FUN_00922678(uint param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5,
            undefined1 param_6,undefined1 param_7,byte param_8,byte param_9,byte param_10)

{
  uint uVar1;
  long lVar2;
  undefined2 local_40;
  uint local_3e;
  uint local_3a;
  uint local_36;
  uint local_32;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_3e = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  local_3a = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_36 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_32 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_2b = param_8 & 1;
  local_2a = param_9 & 1;
  local_29 = param_10 & 1;
  local_40 = 0x8a04;
  local_2e = param_5;
  local_2d = param_6;
  local_2c = param_7;
  FUN_00923768(&local_40,0x18);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0092271c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  uint *puVar4;
  undefined2 local_44;
  undefined1 local_42;
  uint local_41;
  uint local_3d;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00d5ba88();
  puVar4 = (uint *)FUN_00da2d50(param_1);
  uVar1 = (*puVar4 & 0xff00ff00) >> 8 | (*puVar4 & 0xff00ff) << 8;
  local_41 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar4[2] & 0xff00ff00) >> 8 | (puVar4[2] & 0xff00ff) << 8;
  local_3d = uVar1 >> 0x10 | uVar1 << 0x10;
  local_44 = 0xf803;
  local_42 = uVar3;
  FUN_00923768(&local_44,0xb);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009227a8(void)

{
  return;
}




void FUN_009227ac(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  long alStack_2608 [1200];
  undefined2 local_88;
  uint local_86;
  uint local_82;
  uint local_7e;
  uint local_7a;
  undefined1 local_76;
  undefined1 local_75;
  byte local_74;
  byte local_73;
  byte local_72;
  byte local_71;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_01985d00(param_1,alStack_2608,0x4b0,DAT_02c7bf1c);
  if (uVar4 != 0) {
    uVar7 = (ulong)uVar4;
    plVar8 = alStack_2608;
    do {
      lVar6 = *plVar8;
      uVar4 = *(uint *)(param_1 + 0x260);
      uVar1 = *(uint *)(lVar6 + 0x50);
      uVar9 = FUN_00d6d9f4(lVar6);
      bVar2 = *(byte *)(lVar6 + 0x6b);
      local_76 = *(undefined1 *)(lVar6 + 0x6a);
      local_75 = *(undefined1 *)(lVar6 + 0x68);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_86 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      local_82 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      local_7e = uVar4 >> 0x10 | uVar4 << 0x10;
      local_74 = bVar2 & 3;
      uVar4 = (*(uint *)(lVar6 + 0x54) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar6 + 0x54) & 0xff00ff) << 8;
      local_7a = uVar4 >> 0x10 | uVar4 << 0x10;
      local_73 = bVar2 >> 2 & 1;
      local_72 = bVar2 >> 3 & 1;
      local_71 = bVar2 >> 4 & 1;
      local_88 = 0x8a04;
      FUN_00923768(&local_88,0x18);
      uVar7 = uVar7 - 1;
      plVar8 = plVar8 + 1;
    } while (uVar7 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009228c8(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong in_stack_fffffffffffff9e0;
  undefined8 in_stack_fffffffffffff9e8;
  undefined4 uVar17;
  undefined8 in_stack_fffffffffffffa18;
  ulong in_stack_fffffffffffffa20;
  undefined4 local_528;
  undefined4 local_524;
  undefined1 auStack_520 [16];
  undefined1 auStack_510 [12];
  undefined1 auStack_504 [4];
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_49c [8];
  undefined1 auStack_494 [8];
  undefined1 auStack_48c [8];
  undefined1 auStack_484 [12];
  undefined1 auStack_478 [12];
  undefined1 auStack_46c [12];
  undefined1 auStack_460 [40];
  undefined1 auStack_438 [40];
  undefined1 auStack_410 [40];
  undefined1 auStack_3e8 [40];
  undefined1 auStack_3c0 [40];
  undefined1 auStack_398 [736];
  undefined8 local_b8;
  long local_80;
  
  uVar17 = (undefined4)((ulong)in_stack_fffffffffffff9e8 >> 0x20);
  uVar13 = (undefined4)((ulong)in_stack_fffffffffffffa18 >> 0x20);
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  FUN_00d4d1ec(auStack_398);
  FUN_00d55794(param_1,auStack_510,0);
  FUN_00d557c4(param_1,auStack_520,&DAT_03218f68);
  FUN_00d5ba6c(param_1,auStack_398);
  local_b8 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x318);
  uVar5 = FUN_00d5c5a4(param_1);
  FUN_00d5c6ac(param_1,auStack_3c0,10);
  FUN_00d5c6bc(param_1,auStack_3e8,10);
  FUN_00d5c6cc(param_1,auStack_410,10);
  FUN_00d5c6dc(param_1,auStack_438,10);
  FUN_00d5c6ec(param_1,auStack_460,10);
  FUN_00d5c230(param_1,auStack_46c,auStack_478,auStack_484,auStack_504,&local_524);
  FUN_00d5c6fc(param_1,auStack_48c,auStack_494,auStack_49c);
  thunk_FUN_00da2eb4(param_1);
  uVar16 = 0xbf800000;
  uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if (((uVar1 != 0x1f) && (*(ushort *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) &&
     (iVar6 = FUN_00d5bad4(param_1), iVar6 == 0)) {
    for (lVar15 = *(long *)(param_1 + 0x18); lVar15 != 0; lVar15 = *(long *)(lVar15 + 0x20)) {
      if (*(int *)(*(long *)(lVar15 + 8) + 0xa4) == DAT_02c7bf28) {
        uVar16 = FUN_00d79b68();
        break;
      }
    }
  }
  iVar6 = FUN_00d5bad4(param_1);
  if (iVar6 == 0) {
    local_528 = 0;
    for (lVar15 = *(long *)(param_1 + 0x18); lVar15 != 0; lVar15 = *(long *)(lVar15 + 0x20)) {
      if (*(int *)(*(long *)(lVar15 + 8) + 0xa4) == DAT_02c7bf38) {
        if (lVar15 != 0) {
          FUN_00d7b658(lVar15,&local_528,&local_4c0,&local_4e0,&local_500,8);
          bVar3 = true;
          goto LAB_00922b48;
        }
        break;
      }
    }
    bVar3 = false;
    lVar15 = 0;
    local_4d0 = 0;
    uStack_4c8 = 0;
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_500 = 0;
    uStack_4f8 = 0;
    uStack_4b8 = 0;
    local_4c0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
LAB_00922b48:
    lVar14 = FUN_00d5a41c(param_1);
    if (lVar14 == 0) {
      if ((bVar3) && (*(char *)(lVar15 + 0x48) != '\0')) {
        FUN_00d7b5c0();
      }
    }
    else {
      FUN_00d7ae38(lVar14);
      FUN_00d7ae40(lVar14);
    }
    uVar13 = FUN_00d5baac(param_1);
    uVar7 = FUN_00d5bab4(param_1);
    uVar17 = *(undefined4 *)(param_1 + 0x260);
    uVar8 = FUN_00d5ba88(param_1);
    uVar4 = FUN_00d55870(param_1);
    uVar9 = FUN_00ced0c8(*(undefined4 *)(param_1 + 0x260));
    uVar10 = FUN_00ced12c(*(undefined4 *)(param_1 + 0x260));
    uVar11 = FUN_00d5df18(param_1);
    uVar12 = FUN_00d5cb9c(param_1);
    FUN_00921d9c(uVar16,uVar13,uVar7,uVar17,uVar8,uVar4,uVar9,uVar10,auStack_510,auStack_520,
                 auStack_398,0,uVar11,auStack_3c0,auStack_3e8,auStack_410,auStack_438,auStack_460,
                 uVar5,auStack_46c,auStack_478,auStack_484,auStack_504,local_524,uVar12,1,local_528,
                 &local_4c0,&local_4e0,&local_500);
    FUN_009227ac(param_1);
  }
  else {
    uVar7 = FUN_00d5baac(param_1);
    uVar8 = FUN_00d5bab4(param_1);
    uVar5 = *(undefined4 *)(param_1 + 0x260);
    uVar9 = FUN_00d5ba88(param_1);
    uVar10 = FUN_00d55870(param_1);
    uVar11 = FUN_00d5df18(param_1);
    uVar4 = FUN_00d5cb9c(param_1);
    uVar12 = FUN_00d5cf60(param_1);
    FUN_00921b58(uVar7,uVar8,uVar5,uVar9,uVar10,auStack_510,auStack_520,auStack_398,
                 in_stack_fffffffffffff9e0 & 0xffffffffffffff00,CONCAT44(uVar17,uVar11),uVar4,1,
                 auStack_48c,auStack_494,auStack_49c,CONCAT44(uVar13,uVar12),
                 in_stack_fffffffffffffa20 & 0xffffffffffffff00);
  }
  uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) == 2)) {
    FUN_0092271c(param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




byte FUN_00922d6c(int param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  byte bVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long local_6e8 [200];
  undefined2 local_a4;
  uint local_a2;
  uint local_9e;
  ushort local_9a;
  uint local_98;
  ushort local_94;
  ushort local_92;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  
  lVar2 = tpidr_el0;
  lVar12 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_019889cc(local_6e8,200,DAT_02c09220,0);
  uVar14 = (ulong)uVar3;
  bVar17 = 0;
  if (uVar3 != 0) {
    plVar16 = local_6e8;
    uVar18 = uVar14;
    do {
      lVar15 = *plVar16;
      iVar4 = FUN_00d5bad4(lVar15);
      if (iVar4 == 0) {
        FUN_009228c8(lVar15);
        bVar17 = bVar17 | *(int *)(lVar15 + 0x260) == param_1;
      }
      uVar18 = uVar18 - 1;
      plVar16 = plVar16 + 1;
    } while (uVar18 != 0);
    if (uVar3 != 0) {
      plVar16 = local_6e8;
      uVar18 = uVar14;
      do {
        lVar15 = *plVar16;
        iVar4 = FUN_00d5bad4(lVar15);
        if (iVar4 != 0) {
          FUN_009228c8(lVar15);
        }
        uVar18 = uVar18 - 1;
        plVar16 = plVar16 + 1;
      } while (uVar18 != 0);
      if (uVar3 != 0) {
        uVar18 = 0;
        do {
          lVar13 = local_6e8[uVar18];
          for (lVar15 = *(long *)(lVar13 + 0x18); lVar15 != 0; lVar15 = *(long *)(lVar15 + 0x20)) {
            if (*(int *)(*(long *)(lVar15 + 8) + 0xa4) == DAT_02c7bf48) {
              iVar4 = FUN_00d6ad98(lVar15);
              if (iVar4 != 0) {
                uVar3 = 0;
                do {
                  uVar5 = FUN_00d6b5f0(lVar15,uVar3);
                  uVar10 = FUN_00d6c068(lVar15,uVar5);
                  if (((uVar10 & 1) != 0) &&
                     (lVar11 = FUN_00d6b570(lVar15,uVar5), *(int *)(lVar11 + 0x3c) != 0)) {
                    uVar6 = FUN_00d6b8f8(lVar15,uVar5);
                    uVar1 = *(uint *)(lVar13 + 0x260);
                    FUN_00d6b898(lVar15,uVar3);
                    uVar7 = FUN_00d42844();
                    uVar20 = FUN_00d6b9f8(lVar15,uVar5);
                    uVar8 = uVar20 >> 0x17 & 0xff;
                    uVar19 = uVar20 >> 0x10 & 0x8000;
                    if (uVar8 != 0) {
                      if (uVar8 == 0xff) {
                        uVar19 = uVar19 | (uVar20 & 0x7fffff) != 0 | 0x7c00;
                      }
                      else {
                        uVar8 = (uVar20 >> 0x17) * 0x1000000 + 0x81000000;
                        if ((int)uVar8 < -0xe000000) {
                          uVar9 = 0;
                          if (-0x18000001 < (int)uVar8) {
                            uVar9 = (0x400U >> (ulong)(-((int)uVar8 >> 0x18) - 0xeU & 0x1f)) +
                                    ((uVar20 & 0x7fffff) >> (ulong)(~((int)uVar8 >> 0x18) & 0x1f)) &
                                    0x3ff;
                          }
                          uVar19 = uVar9 | uVar19;
                        }
                        else if ((int)uVar8 < 0xf000001) {
                          uVar19 = uVar19 | uVar20 >> 0xd & 0x3ff | (uVar8 >> 0xe) + 0x3c00 & 0x7c00
                          ;
                        }
                        else {
                          uVar19 = uVar19 | 0x7c00;
                        }
                      }
                    }
                    uVar8 = FUN_00d6bb04(lVar15,uVar5);
                    uVar21 = FUN_00d6bf68(lVar15,uVar5);
                    uVar22 = FUN_00d6bfe8(lVar15,uVar5);
                    uVar20 = FUN_00d6bf28(lVar15,uVar5);
                    uVar9 = FUN_00d6bfa8(lVar15,uVar5);
                    local_9a = (ushort)(uVar19 >> 8) | (ushort)((uVar19 & 0xff00ff) << 8);
                    local_94 = (ushort)(uVar7 >> 8) & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
                    local_92 = (ushort)(uVar8 >> 8) & 0xff | (ushort)((uVar8 & 0xff00ff) << 8);
                    uVar19 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
                    local_9e = uVar19 >> 0x10 | uVar19 << 0x10;
                    uVar19 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                    local_a2 = uVar19 >> 0x10 | uVar19 << 0x10;
                    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                    local_98 = uVar5 >> 0x10 | uVar5 << 0x10;
                    uVar5 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
                    local_90 = uVar5 >> 0x10 | uVar5 << 0x10;
                    uVar5 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
                    uStack_8c = uVar5 >> 0x10 | uVar5 << 0x10;
                    uVar5 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
                    local_88 = uVar5 >> 0x10 | uVar5 << 0x10;
                    uVar5 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
                    uStack_84 = uVar5 >> 0x10 | uVar5 << 0x10;
                    local_a4 = 0x3f04;
                    FUN_00923768(&local_a4,0x24);
                  }
                  uVar3 = uVar3 + 1;
                  uVar5 = FUN_00d6ad98(lVar15);
                } while (uVar3 < uVar5);
              }
              break;
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar14);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar12) {
    return bVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

