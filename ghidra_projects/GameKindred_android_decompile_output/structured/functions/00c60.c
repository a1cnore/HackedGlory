// functions/00c60 — 6 functions
#include "libGameKindred.h"




void FUN_00c60064(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ad67fc(param_1 + 0x1d27,param_2 & 1);
  if ((param_2 & 1) == 0) {
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"hero_gold_purchase");
    FUN_009badcc(uVar3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"hero_gold_purchase");
    FUN_009baadc(uVar3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"hero_silver_purchase");
    FUN_009badcc(uVar3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"hero_silver_purchase");
    FUN_009baadc(uVar3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    FUN_00c5ff0c(param_1);
    FUN_00969248();
    FUN_00968c34();
    lVar2 = FUN_00969248();
    uVar4 = (uint)(*(int *)(lVar2 + 0x38) < 1);
    *(uint *)((long)param_1 + 0x1436c) =
         *(uint *)((long)param_1 + 0x1436c) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x1436c) & 3 | uVar4 << 2;
    *(uint *)((long)param_1 + 0xe934) =
         *(uint *)((long)param_1 + 0xe934) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0xe934) & 3 | uVar4 << 2;
    (**(code **)(*param_1 + 0x138))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c601f0(long *param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = FUN_00969248();
  uVar2 = (uint)(*(int *)(lVar1 + 0x38) < 1);
  *(uint *)((long)param_1 + 0x1436c) =
       *(uint *)((long)param_1 + 0x1436c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1436c) & 3 | uVar2 << 2;
  *(uint *)((long)param_1 + 0xe934) =
       *(uint *)((long)param_1 + 0xe934) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xe934) & 3 | uVar2 << 2;
                    /* WARNING: Could not recover jumptable at 0x00c60248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c6024c(long *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00c6028c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00c6027c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))(param_1);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c6028c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  byte local_160 [16];
  void *local_150;
  undefined **local_148;
  undefined1 auStack_140 [8];
  void *local_138;
  long local_118;
  undefined8 local_f8;
  void *local_f0;
  byte local_e8;
  void *local_d8;
  undefined8 local_b8;
  undefined4 local_a0;
  undefined1 local_9b;
  ulong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  long local_80;
  void *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  uVar3 = FUN_009ba920(uVar2,&DAT_0320ffa8);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_00969248();
    if (*(int *)(lVar4 + 0x38) == 4) {
      uVar2 = FUN_009b8d90();
      FUN_008fa54c(&local_148,"hero_silver_purchase");
      FUN_009badcc(uVar2,&local_148);
      if (((byte)local_148 & 1) != 0) {
        operator_delete(local_138);
      }
      FUN_00b26098(&local_148);
      uVar3 = FUN_00c62084(param_1);
      lVar4 = param_1 + 0x9fd0;
      if ((uVar3 & 1) == 0) {
        lVar4 = param_1 + 0x8a10;
      }
      uVar2 = FUN_00e6ce7c("MENU_HERO_HUB_TUTORIAL_GLORY_TOOLTIP_MSG",0);
      thunk_FUN_00e7051c(&local_98,uVar2);
      FUN_008fcdb8(&local_88,&DAT_0320ffa8);
      local_70 = 1;
      uStack_6c = 0x41a00000;
      uStack_68 = 0;
      FUN_009c82b4(auStack_140,&local_98);
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((void *)CONCAT44(uStack_8c,local_90) != (void *)0x0) {
        operator_delete__((void *)CONCAT44(uStack_8c,local_90));
        local_98 = 0;
        local_90 = 0;
        uStack_8c = 0;
      }
      local_a0 = 0;
      local_b8 = 0x43fa00003f000000;
      local_9b = 1;
      local_118 = lVar4;
      uVar2 = FUN_009b8d90();
      FUN_008fa54c(&local_98,"hero_silver_purchase");
      FUN_009badc0(uVar2,&local_98,&local_148);
      if ((local_98 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_84,local_88));
      }
      local_90 = DAT_03218f38;
      local_98 = DAT_03218f30;
      uStack_8c = (undefined4)_DAT_03218ef8;
      local_88 = (uint)((ulong)_DAT_03218ef8 >> 0x20);
      local_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_78 = (void *)0x0;
      local_60 = 0x3f800000;
      local_5c = 0x100;
      local_5a = 1;
      local_80 = lVar4;
      uVar2 = FUN_009b8d90();
      pcVar5 = "hero_silver_purchase";
    }
    else {
      if (*(int *)(lVar4 + 0x38) != 2) goto LAB_00c60658;
      uVar2 = FUN_009b8d90();
      FUN_008fa54c(&local_148,"hero_gold_purchase");
      FUN_009badcc(uVar2,&local_148);
      if (((byte)local_148 & 1) != 0) {
        operator_delete(local_138);
      }
      FUN_00b26098(&local_148);
      uVar3 = FUN_00c62084(param_1);
      lVar4 = param_1 + 0xc440;
      if ((uVar3 & 1) == 0) {
        lVar4 = param_1 + 0x8a10;
      }
      uVar2 = FUN_00e6ce7c("MENU_HERO_HUB_TUTORIAL_ICE_TOOLTIP_MSG",0);
      thunk_FUN_00e7051c(&local_98,uVar2);
      FUN_008fcdb8(&local_88,&DAT_0320ffa8);
      local_70 = 1;
      uStack_6c = 0x41a00000;
      uStack_68 = 0;
      FUN_009c82b4(auStack_140,&local_98);
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((void *)CONCAT44(uStack_8c,local_90) != (void *)0x0) {
        operator_delete__((void *)CONCAT44(uStack_8c,local_90));
        local_98 = 0;
        local_90 = 0;
        uStack_8c = 0;
      }
      local_a0 = 0;
      local_b8 = 0x43fa00003f333333;
      local_9b = 1;
      local_118 = lVar4;
      uVar2 = FUN_009b8d90();
      FUN_008fa54c(&local_98,"hero_gold_purchase");
      FUN_009badc0(uVar2,&local_98,&local_148);
      if ((local_98 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_84,local_88));
      }
      local_90 = DAT_03218f38;
      local_98 = DAT_03218f30;
      uStack_8c = (undefined4)_DAT_03218ef8;
      local_88 = (uint)((ulong)_DAT_03218ef8 >> 0x20);
      local_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_78 = (void *)0x0;
      local_60 = 0x3f800000;
      local_5c = 0x100;
      local_5a = 1;
      local_80 = lVar4;
      uVar2 = FUN_009b8d90();
      pcVar5 = "hero_gold_purchase";
    }
    FUN_008fa54c(local_160,pcVar5);
    FUN_009baa78(uVar2,local_160,&local_98);
    if ((local_160[0] & 1) != 0) {
      operator_delete(local_150);
    }
    uVar2 = FUN_009b8d90();
    FUN_009ba61c(uVar2,&DAT_0320ffa8);
    local_148 = &PTR_FUN_027de7f0;
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
      local_f8 = 0;
      local_f0 = (void *)0x0;
    }
    FUN_009c8464(auStack_140,1);
  }
LAB_00c60658:
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c60688(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_98;
  float local_94;
  long local_88;
  
  lVar9 = tpidr_el0;
  local_88 = *(long *)(lVar9 + 0x28);
  uVar11 = FUN_00f02540();
  if ((uVar11 & 1) != 0) {
    plVar5 = param_3 + 0x3fcb;
    if (*plVar5 != 0) {
      uVar12 = FUN_009580b8();
      pbVar14 = (byte *)*plVar5;
      if ((*pbVar14 & 1) == 0) {
        pbVar14 = pbVar14 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar14 + 0x10);
      }
      uVar10 = FUN_00961804(uVar12,pbVar14,1);
      FUN_00c60e28(param_3,uVar10 & 1);
      uVar12 = (**(code **)(*param_3 + 0x48))(param_3);
      (**(code **)(*param_3 + 0x48))(param_3);
      plVar1 = param_3 + 0x3e;
      FUN_00f13f08(uVar12,plVar1);
      plVar2 = param_3 + 0x72;
      fVar17 = (float)uVar12;
      FUN_00f13f08(uVar12,fVar17 * 0.75,plVar2);
      plVar3 = param_3 + 0xcc;
      FUN_00f13f08(fVar17 + -40.0,(float)param_2 + -30.0,plVar3);
      if ((*(float *)(param_3 + 0xd4) != 20.0) || (*(float *)((long)param_3 + 0x6a4) != 15.0)) {
        param_3[0xd4] = 0x4170000041a00000;
        FUN_0091ada4(plVar3);
      }
      FUN_00f13f08(fVar17 * 0.5,param_2,param_3 + 0x90);
      FUN_00f13f08(fVar17 * 0.5,param_2,param_3 + 0xae);
      FUN_00f07940(0,0,param_3 + 0xae,1,plVar1,1);
      FUN_00f07940(0x41c80000,0x41c80000,param_3 + 0xe3,0,plVar3,0);
      fVar16 = 0.85;
      plVar4 = param_3 + 0xf4;
      FUN_00ad8038(plVar4);
      local_98 = FUN_00f01c54(plVar4,0,0,1,1);
      local_94 = fVar16;
      FUN_00f13f18(plVar4,&local_98);
      FUN_00f07b18(0x41c80000,param_3 + 0xe16,0,plVar4,2);
      FUN_00f07b18(0,param_3 + 0xe16,3,plVar4,3);
      plVar4 = param_3 + 0x10ce;
      uVar15 = FUN_00f13e54(plVar3);
      FUN_00f13e54(plVar3);
      FUN_00f13f08(uVar15,fVar16 / 3.0,plVar4);
      FUN_00f07940(0,0,plVar4,6,plVar3,6);
      FUN_00f07940(0,0,param_3 + 0x1d16,2,plVar4,2);
      plVar3 = param_3 + 0x26df;
      FUN_00f07940(0,0,plVar3,2,param_3 + 0x1d16,2);
      plVar6 = param_3 + 0x279e;
      FUN_00f07b18(0xc1c80000,plVar6,1,plVar3,3);
      FUN_00f07b18(0,plVar6,2,plVar3,2);
      FUN_00f07940(0xc2a00000,0,param_3 + 0x1d27,1,plVar6,3);
      plVar7 = param_3 + 0x1103;
      FUN_00f0bc10(0,0,0x42480000,&local_98);
      FUN_00f0c168(plVar7,&local_98);
      (**(code **)(*plVar7 + 0x90))(plVar7);
      FUN_00f07940(0x41c80000,0xc1c80000,plVar7,3,plVar4,3);
      FUN_00f07b18(0,param_3 + 0x1142,5,plVar7,5);
      FUN_00f07b18(0,param_3 + 0x13fa,5,plVar7,5);
      FUN_00f07b18(0,param_3 + 0x1888,5,plVar7,5);
      FUN_00f07b18(0xc1c80000,param_3 + 0x111c,2,plVar7,0);
      FUN_00f07b18(0,param_3 + 0x111c,3,plVar7,3);
      FUN_00f13f08(uVar12,0x43c80000,param_3 + 0x10e5);
      FUN_00f07940(0,0,param_3 + 0x10e5,3,plVar1,3);
      FUN_00f13f08(uVar12,(float)param_2 + -338.0,param_3 + 0x285d);
      FUN_00c61050(param_3);
      FUN_00ed04ac(0,DAT_02be366c * 1.5,param_3 + 0x2891);
      FUN_00ed0578(0xc1200000,0x41200000,param_3 + 0x2891);
      fVar16 = DAT_02be366c * 0.5;
      if ((*(float *)(param_3 + 0x29ff) != DAT_02be366c * 1.2) ||
         (*(float *)((long)param_3 + 0x14ffc) != fVar16)) {
        *(float *)(param_3 + 0x29ff) = DAT_02be366c * 1.2;
        *(float *)((long)param_3 + 0x14ffc) = fVar16;
        FUN_0091ada4(param_3 + 0x29f7);
      }
      FUN_00f13f08(fVar17 + DAT_02be366c * -2.5,param_2,param_3 + 0x29f7);
      fVar16 = DAT_02be366c * 0.5;
      if ((*(float *)(param_3 + 0x3958) != DAT_02be366c * 1.2) ||
         (*(float *)((long)param_3 + 0x1cac4) != fVar16)) {
        *(float *)(param_3 + 0x3958) = DAT_02be366c * 1.2;
        *(float *)((long)param_3 + 0x1cac4) = fVar16;
        FUN_0091ada4(param_3 + 0x3950);
      }
      FUN_00f13f08(fVar17 + DAT_02be366c * -3.0,param_2,param_3 + 0x3950);
      fVar16 = DAT_02be3668;
      if ((*(float *)(param_3 + 0x2941) != DAT_02be3668) ||
         (*(float *)((long)param_3 + 0x14a0c) != DAT_02be3668)) {
        *(float *)(param_3 + 0x2941) = DAT_02be3668;
        *(float *)((long)param_3 + 0x14a0c) = fVar16;
        FUN_0091ada4(param_3 + 0x2938);
      }
      fVar16 = DAT_02be366c;
      fVar17 = fVar17 - DAT_02be366c;
      if ((*(float *)(param_3 + 0x2940) != fVar17) ||
         (*(float *)((long)param_3 + 0x14a04) != DAT_02be366c)) {
        *(float *)(param_3 + 0x2940) = fVar17;
        *(float *)((long)param_3 + 0x14a04) = fVar16;
        FUN_0091ada4(param_3 + 0x2938);
      }
      lVar13 = FUN_00cc7868(**(undefined8 **)(*plVar5 + 0x18));
      fVar16 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      (**(code **)(*param_3 + 0x48))(param_3);
      fVar18 = *(float *)(lVar13 + 0x30);
      fVar17 = fVar17 * fVar18;
      if ((*(float *)(param_3 + 0x7a) != fVar16) || (*(float *)((long)param_3 + 0x3d4) != fVar17)) {
        *(float *)(param_3 + 0x7a) = fVar16;
        *(float *)((long)param_3 + 0x3d4) = fVar17;
        FUN_0091ada4(plVar2);
      }
      local_98 = 0x3f800000;
      local_94 = fVar18;
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_98);
      bVar8 = *(byte *)(*plVar5 + 0xa0);
      if ((bVar8 & 1) == 0) {
        uVar11 = (ulong)(bVar8 >> 1);
      }
      else {
        uVar11 = *(ulong *)(*plVar5 + 0xa8);
      }
      FUN_00b09454(plVar3,uVar11 != 0);
      bVar8 = *(byte *)(*plVar5 + 0xd0);
      if ((bVar8 & 1) == 0) {
        uVar11 = (ulong)(bVar8 >> 1);
      }
      else {
        uVar11 = *(ulong *)(*plVar5 + 0xd8);
      }
      FUN_00b09454(plVar6,uVar11 != 0);
    }
    lVar13 = param_3[0x3fcf];
    (**(code **)(*param_3 + 0x48))(param_3);
    FUN_00c552fc(lVar13);
    (**(code **)(*(long *)param_3[0x3fcf] + 0x138))();
    lVar13 = param_3[0x3fd6];
    uVar12 = (**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f13f08(uVar12,0x442f0000,lVar13);
    (**(code **)(*(long *)param_3[0x3fd6] + 0x138))();
  }
  if (*(long *)(lVar9 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c60e28(long param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte local_80 [16];
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00c62084();
  cVar1 = *(char *)(param_1 + 0x1fe61);
  uVar7 = (uint)(cVar1 == '\0') & (param_2 ^ 1);
  *(uint *)(param_1 + 0x8964) =
       *(uint *)(param_1 + 0x8964) & 0xfffffff8 | *(uint *)(param_1 + 0x8964) & 3 | uVar7 << 2;
  *(uint *)(param_1 + 0x889c) =
       *(uint *)(param_1 + 0x889c) & 0xfffffff8 | *(uint *)(param_1 + 0x889c) & 3 | uVar7 << 2;
  if ((param_2 & 1) == 0) {
    if (cVar1 == '\0') {
      bVar2 = *(byte *)(*(long *)(param_1 + 0x1fe58) + 0x60);
      if ((bVar2 & 1) == 0) {
        uVar6 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar6 = *(ulong *)(*(long *)(param_1 + 0x1fe58) + 0x68);
      }
      *(uint *)(param_1 + 0xa054) =
           *(uint *)(param_1 + 0xa054) & 0xfffffff8 |
           *(uint *)(param_1 + 0xa054) & 3 | (uint)(uVar6 != 0) << 2;
      lVar5 = *(long *)(param_1 + 0x1fe58);
      if ((*(byte *)(lVar5 + 0x80) & 1) == 0) {
        uVar6 = (ulong)(*(byte *)(lVar5 + 0x80) >> 1);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x88);
      }
      uVar7 = (uint)(uVar6 != 0) << 2;
    }
    else {
      *(uint *)(param_1 + 0xa054) = *(uint *)(param_1 + 0xa054) & 0xfffffffb;
      lVar5 = *(long *)(param_1 + 0x1fe58);
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0xc4c4) = *(uint *)(param_1 + 0xc4c4) & 0xfffffffb | uVar7;
    FUN_00cb418c(local_80,*(undefined4 *)(lVar5 + 0x78));
    FUN_00e70570(&local_68,local_80);
    FUN_00ab7498(param_1 + 0x9fd0,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    FUN_00cb418c(local_80,*(undefined4 *)(*(long *)(param_1 + 0x1fe58) + 0x98));
    FUN_00e70570(&local_68,local_80);
    FUN_00ab7498(param_1 + 0xc440,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    *(uint *)(param_1 + 0x8a94) =
         *(uint *)(param_1 + 0x8a94) & 0xfffffff8 |
         *(uint *)(param_1 + 0x8a94) & 3 |
         ((uint)(*(char *)(param_1 + 0x1fe61) == '\0') & (uVar4 ^ 1)) << 2;
    FUN_00f0bdf8(param_1 + 0x8818);
  }
  FUN_00c6028c(param_1);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

