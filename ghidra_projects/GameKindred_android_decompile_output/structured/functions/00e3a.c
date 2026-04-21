// functions/00e3a — 12 functions
#include "libGameKindred.h"




void FUN_00e3a0bc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero010_OnFire");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3f000000,uVar4,0);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))();
  local_48 = FUN_00e3a26c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,1,3);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,3);
  FUN_00d4bc24();
  FUN_00d4bd10();
  lVar2 = FUN_00d4bc38();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Skaarf_ShowReigniteHitEffec_02bf0f18);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3f000000);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_48 = FUN_00e39fd8;
  local_40 = 5;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,1,1);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3a26c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,0x13);
  return;
}




void FUN_00e3a278(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3a2dc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  lVar2 = FUN_00d9e390();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  uVar7 = FUN_00d59f54(lVar2,1,6,0x19,0);
  uVar4 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),
                       PTR_s_Buff_Skaarf_Talent_FlamingSludge_02bee188);
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)FUN_00d5a3d0(lVar2,DAT_031ac544,2,9);
    uVar7 = (ulong)(uint)((float)uVar7 * fVar6);
  }
  FUN_00d3e534();
  uVar5 = FUN_00d29584();
  FUN_00d42654(auStack_50,uVar5);
  FUN_00d472ec(uVar7,uVar5,2);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 8);
  FUN_00d3e534();
  uVar5 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3a3f4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d29584();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d59f54(uVar2,1,7,0x19,0);
  FUN_00d472ec(uVar4,2);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3a4c4(void)

{
  return;
}




void FUN_00e3a4c8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_7b8 [16];
  undefined8 local_7a8;
  undefined1 auStack_7a0 [40];
  undefined1 auStack_778 [88];
  undefined1 auStack_720 [96];
  long local_6c0 [200];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_7a8);
  lVar7 = FUN_00d66d28(local_7a8);
  FUN_00d5cf60();
  lVar8 = FUN_00d9e390();
  FUN_00d55794(lVar7,auStack_7b8,0);
  FUN_00d4d9e8(auStack_720);
  FUN_00d4daf4(auStack_720,0,1,0,lVar8);
  FUN_00d4db48(0x40000000,auStack_720,auStack_7b8);
  FUN_00d4dabc(auStack_720,0x40000);
  FUN_00d4dd44(auStack_720,0);
  uVar4 = FUN_00d9e840(auStack_720,local_6c0,200,0);
  if (0 < (int)uVar4) {
    uVar11 = 0;
    do {
      for (lVar9 = *(long *)(local_6c0[uVar11] + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x20))
      {
        if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == DAT_02c7bf48) {
          uVar10 = FUN_00d6bca8(lVar9,DAT_031baec4,*(undefined4 *)(lVar8 + 0x260),0);
          puVar3 = PTR_s_Buff_Skaarf_GoopPoolOnFire_02bf0f48;
          if ((uVar10 & 1) != 0) {
            uVar1 = *(undefined4 *)(lVar8 + 0x260);
            uVar5 = *(undefined4 *)(lVar7 + 0x260);
            uVar6 = FUN_00ceb350();
            FUN_00cfe864(0xbf800000,0,0,auStack_778,uVar1,uVar5,puVar3,uVar6,1,0,0);
            FUN_00ce20fc(auStack_778);
            uVar1 = *(undefined4 *)(lVar7 + 0x260);
            uVar5 = FUN_00d66d34(local_7a8);
            FUN_00d009d0(auStack_7a0,uVar1,uVar5);
            FUN_00ce20fc(auStack_7a0);
          }
          break;
        }
      }
      puVar3 = PTR_s_Buff_Skaarf_GoopPoolSlow_02bf0f30;
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar5 = *(undefined4 *)(local_6c0[uVar11] + 0x260);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(0x3ecccccd,0,0,auStack_778,uVar1,uVar5,puVar3,uVar6,1,0,0);
      FUN_00ce20fc(auStack_778);
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3a6f8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar5 = FUN_00d9e390();
  FUN_00d59f54(uVar5,1,4,0x19,0);
  FUN_00d67d04(param_1);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar7 + 0x38 + (ulong)*(uint *)(lVar7 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar7 + 0xf8);
    *(code **)(lVar7 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3a4c8;
    *(uint *)(lVar7 + 0xf8) = uVar1 + 1;
    FUN_00d67b04(0x3e4ccccd,param_1);
  }
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar7 + 0x30);
  FUN_00d3e534();
  uVar5 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar5);
  uVar5 = FUN_00d47d9c(uVar5);
  uVar5 = FUN_00da2040(uVar5,"Effect_Hero010_Pool");
  FUN_00da20dc(uVar5,1);
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar7 + 0x20);
  FUN_00d3e534();
  uVar5 = FUN_00d29cd4();
  FUN_00d42654(auStack_50,uVar5);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3a850(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auStack_858 [16];
  undefined8 local_848;
  undefined1 auStack_840 [88];
  undefined1 auStack_7e8 [88];
  undefined1 auStack_790 [112];
  undefined1 auStack_720 [96];
  long local_6c0 [200];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_848);
  uVar8 = FUN_00d66d28(local_848);
  FUN_00d5cf60();
  lVar9 = FUN_00d9e390();
  FUN_00d55794(uVar8,auStack_858,0);
  FUN_00d4d9e8(auStack_720);
  FUN_00d4daf4(auStack_720,0,1,0,lVar9);
  FUN_00d4db48(0x40000000,auStack_720,auStack_858);
  FUN_00d4dd44(auStack_720,0);
  FUN_00d4dabc(auStack_720,0x40000);
  uVar4 = FUN_00d9e840(auStack_720,local_6c0,200,0);
  if (0 < (int)uVar4) {
    uVar13 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar7 = *(undefined4 *)(local_6c0[uVar13] + 0x260);
      uVar5 = *(uint *)(local_6c0[uVar13] + 0x2f4);
      fVar14 = (float)FUN_00d59f54(lVar9,1,1,0x19,0);
      fVar15 = (float)FUN_00d67b0c(local_848);
      fVar14 = fVar14 * fVar15;
      if ((*(uint *)(local_6c0[uVar13] + 0x2f4) & 0x800004) != 0) {
        fVar15 = (float)FUN_00d59f54(lVar9,1,8,0x19,0);
        fVar14 = fVar14 * fVar15;
      }
      uVar10 = FUN_00d44008(*(undefined4 *)(lVar9 + 0x260),
                            PTR_s_Buff_Skaarf_Talent_FlamingSludge_02bee188);
      if ((uVar10 & 1) != 0) {
        fVar15 = (float)FUN_00d5a3d0(lVar9,DAT_031ac544,1,9);
        fVar14 = fVar14 * fVar15;
      }
      puVar11 = (undefined8 *)FUN_00d67b14(local_848);
      FUN_00daa148(fVar14,auStack_790,uVar1,uVar7,1,2,&DAT_03218ef8,*puVar11,0,1);
      FUN_00910c08(auStack_790);
      uVar16 = thunk_FUN_00d086f0(lVar9,0,1);
      if ((uVar5 >> 0xc & 1) == 0) {
        lVar12 = *(long *)(local_6c0[uVar13] + 0x18);
        while ((lVar12 != 0 && (*(int *)(*(long *)(lVar12 + 8) + 0xa4) != DAT_02c7bf48))) {
          lVar12 = *(long *)(lVar12 + 0x20);
        }
        uVar5 = FUN_00d6bbac(lVar12,DAT_031baec4,0);
        puVar3 = PTR_s_Buff_Skaarf_Burn_02bf0f20;
        uVar6 = FUN_00ceb350();
        FUN_00cfe864(uVar16,0,0,auStack_7e8,uVar1,uVar7,puVar3,uVar6,~uVar5 & 1,0,0);
        FUN_00ce20fc(auStack_7e8);
        puVar3 = PTR_s_Buff_Skaarf_GoopPoolBurningSlow_02bf0f38;
        uVar1 = *(undefined4 *)(lVar9 + 0x260);
        uVar7 = *(undefined4 *)(local_6c0[uVar13] + 0x260);
        uVar6 = FUN_00ceb350();
        FUN_00cfe864(0x3ecccccd,0,0,auStack_840,uVar1,uVar7,puVar3,uVar6,1,0,0);
        FUN_00ce20fc(auStack_840);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
  FUN_00d4d9e8(auStack_790);
  FUN_00d4daf4(auStack_790,1,0,0,uVar8);
  FUN_00d4db48(0x406ccccd,auStack_790,auStack_858);
  FUN_00d4dca4(auStack_790,PTR_s_SkaarfGoopPool_02bf01a8,0);
  uVar4 = FUN_00d9e840(auStack_790,local_6c0,200,0);
  if (0 < (int)uVar4) {
    uVar13 = 0;
    do {
      puVar3 = PTR_s_Buff_Skaarf_GoopPoolOnFire_02bf0f48;
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar7 = *(undefined4 *)(local_6c0[uVar13] + 0x260);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(0xbf800000,0,0,auStack_7e8,uVar1,uVar7,puVar3,uVar6,1,0,0);
      FUN_00ce20fc(auStack_7e8);
      lVar12 = *(long *)(local_6c0[uVar13] + 0x18);
      while ((lVar12 != 0 && (*(int *)(*(long *)(lVar12 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar12 = *(long *)(lVar12 + 0x20);
      }
      uVar10 = FUN_00d6bbac(lVar12,DAT_031baed8,0);
      if ((uVar10 & 1) != 0) {
        uVar1 = *(undefined4 *)(local_6c0[uVar13] + 0x260);
        uVar7 = FUN_00d6b630(lVar12,DAT_031baed8,0xffffffff);
        FUN_00d009d0(auStack_840,uVar1,uVar7);
        FUN_00ce20fc(auStack_840);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3acac(undefined8 param_1,long param_2,float *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  float fVar3;
  
  FUN_00d67b78();
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  fVar3 = (float)FUN_00d59f54(uVar1,1,0,0x19,0);
  *param_3 = fVar3;
  uVar2 = *(uint *)(param_2 + 0x2f4);
  if ((uVar2 & 0x800004) != 0) {
    fVar3 = (float)FUN_00d59f54(uVar1,1,8,0x19,0);
    fVar3 = fVar3 * *param_3;
    *param_3 = fVar3;
    uVar2 = *(uint *)(param_2 + 0x2f4);
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    *param_3 = fVar3 * 0.5;
  }
  return;
}




void FUN_00e3ad48(undefined8 param_1,undefined8 param_2)

{
  FUN_00daa534(param_2,&DAT_03218ef8);
  return;
}




void FUN_00e3ad5c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [24];
  code *local_98;
  undefined4 local_90;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3a850;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    FUN_00d67b04(0x3e4ccccd,param_1);
  }
  FUN_00d67ae4(param_1);
  lVar6 = FUN_00d63f30(param_1);
  plVar7 = (long *)FUN_00d2779c(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"OnFire");
  (**(code **)(*plVar7 + 0x20))();
  plVar7 = (long *)FUN_00d2887c(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_DelayedDestroy_02beb3e8);
  local_98 = FUN_00e3b004;
  local_90 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_98);
  uVar8 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_b0,uVar8);
  uVar8 = FUN_00d66d28(param_1);
  FUN_00d55794(uVar8,auStack_c0,0);
  FUN_00d4d9e8(&local_98);
  FUN_00d4daf4(&local_98,0,1,0,0);
  FUN_00d4dabc(&local_98,0x40000);
  FUN_00d4db48(0x40200000,&local_98,auStack_c0);
  FUN_00d3e534();
  uVar8 = FUN_00d3940c();
  FUN_00d42654(auStack_b0,uVar8);
  FUN_00d3fad8(uVar8,&local_98,0,0);
  FUN_00d3e534();
  uVar8 = FUN_00e29370();
  FUN_00d42654(auStack_b0,uVar8);
  uVar8 = FUN_00d403e0(uVar8,FUN_00e3acac,1,2,0);
  FUN_00d403f8(uVar8,FUN_00e3ad48);
  FUN_00d3e534();
  uVar8 = FUN_00d2a6c0();
  FUN_00d42654(auStack_b0,uVar8);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_98,lVar6 + 0x30);
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_98,uVar8);
  uVar8 = FUN_00d47d9c(uVar8);
  FUN_00da2040(uVar8,"Effect_Hero010_Pool_Fire");
  FUN_00d3e534();
  uVar9 = FUN_00e11d14();
  FUN_00d42654(&local_98,uVar9);
  lVar6 = FUN_00d09310();
  uVar8 = FUN_00d09788(*(undefined4 *)(lVar6 + 0x158));
  FUN_00d3ecf4(0x3f800000,uVar8,uVar9,"Sound_Skaarf_Ability_B_Impact",0,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

