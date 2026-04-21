// functions/00e3b — 9 functions
#include "libGameKindred.h"




void FUN_00e3b004(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00e3b018(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  float __x;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_7e0;
  float local_7d8;
  float local_7d0;
  float fStack_7cc;
  float local_7c8;
  float local_7c0;
  float fStack_7bc;
  float local_7b8;
  undefined1 auStack_7b0 [16];
  undefined8 local_7a0;
  undefined1 auStack_798 [88];
  undefined1 auStack_740 [96];
  long local_6e0 [200];
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_7a0);
  lVar7 = FUN_00d66d28(local_7a0);
  FUN_00d55794(lVar7,auStack_7b0,0);
  FUN_00d4d9e8(auStack_740);
  FUN_00d4daf4(auStack_740,1,1,0,lVar7);
  FUN_00d4db48(0x41200000,auStack_740,auStack_7b0);
  FUN_00d4dba0(0x42340000,auStack_740);
  FUN_00d4dabc(auStack_740,0x40000);
  uVar5 = FUN_00d9e840(auStack_740,local_6e0,200,0);
  if (0 < (int)uVar5) {
    uVar11 = (ulong)uVar5;
    plVar12 = local_6e0;
    do {
      FUN_00d55794(lVar7,&local_7c0,0);
      FUN_00d55794(*plVar12,&local_7d0,0);
      fVar17 = local_7c0 - local_7d0;
      fVar16 = fStack_7bc - fStack_7cc;
      fVar15 = local_7b8 - local_7c8;
      FUN_00d557c4(*plVar12,&local_7e0,&DAT_03218f68);
      fVar13 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15;
      if (1e-08 < fVar13) {
        if (1e-08 < (float)local_7e0 * (float)local_7e0 + local_7e0._4_4_ * local_7e0._4_4_ +
                    local_7d8 * local_7d8) {
          fVar14 = SQRT(fVar13);
          if (NAN(fVar14)) {
            fVar14 = sqrtf(fVar13);
          }
          __x = (float)local_7e0 * (float)local_7e0 + local_7e0._4_4_ * local_7e0._4_4_ +
                local_7d8 * local_7d8;
          fVar13 = SQRT(__x);
          if (NAN(fVar13)) {
            fVar13 = sqrtf(__x);
          }
          local_7e0 = CONCAT44((float)((ulong)local_7e0 >> 0x20) / fVar13,(float)local_7e0 / fVar13)
          ;
          local_7d8 = local_7d8 / fVar13;
          cVar3 = FUN_00d55870(*plVar12);
          cVar4 = FUN_00d55870(lVar7);
          if (cVar3 == cVar4) {
            if ((fVar17 / fVar14) * (float)local_7e0 + (fVar16 / fVar14) * local_7e0._4_4_ +
                (fVar15 / fVar14) * local_7d8 <= 0.0) goto LAB_00e3b24c;
            lVar8 = *plVar12;
            uVar9 = *(undefined4 *)(lVar7 + 0x260);
            puVar10 = PTR_s_Buff_Skaarf_Ult_SpeedBoost_02bf0f58;
LAB_00e3b298:
            uVar1 = *(undefined4 *)(lVar8 + 0x260);
            uVar6 = FUN_00ceb350();
            FUN_00cfe864(0x3e99999a,0,0,auStack_798,uVar9,uVar1,puVar10,uVar6,1,0,0);
            FUN_00ce20fc(auStack_798);
          }
          else {
LAB_00e3b24c:
            cVar3 = FUN_00d55870(*plVar12);
            cVar4 = FUN_00d55870(lVar7);
            if (cVar3 != cVar4) {
              if ((fVar17 / fVar14) * (float)local_7e0 + (fVar16 / fVar14) * local_7e0._4_4_ +
                  (fVar15 / fVar14) * local_7d8 < 0.0) {
                lVar8 = *plVar12;
                uVar9 = *(undefined4 *)(lVar7 + 0x260);
                puVar10 = PTR_s_Buff_Skaarf_Ult_Slow_02bf0f60;
                goto LAB_00e3b298;
              }
            }
          }
        }
      }
      uVar11 = uVar11 - 1;
      plVar12 = plVar12 + 1;
    } while (uVar11 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e3b324(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 local_158;
  undefined1 auStack_150 [88];
  undefined1 auStack_f8 [88];
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_158);
  lVar6 = FUN_00d66d28(local_158);
  iVar4 = FUN_00d67ce4(local_158);
  puVar3 = PTR_s_Buff_Skaarf_Blow_02bf0f68;
  if (iVar4 != 1) {
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar5 = FUN_00ceb350();
    FUN_00cfe864(0x40400000,0,0,auStack_a0,uVar1,uVar1,puVar3,uVar5,1,0,0);
    FUN_00ce20fc(auStack_a0);
    puVar3 = PTR_s_Buff_Skaarf_Blow_SpeedBoost_02bf0f70;
    uVar5 = FUN_00ceb350();
    FUN_00cfe864(0x3fc00000,0,0,auStack_f8,uVar1,uVar1,puVar3,uVar5,1,0,0);
    FUN_00ce20fc(auStack_f8);
    puVar3 = PTR_s_Buff_Revealed_02bebaf8;
    uVar5 = FUN_00ceb350();
    FUN_00cfe864(0x40400000,0,0,auStack_150,uVar1,uVar1,puVar3,uVar5,1,0,0);
    FUN_00ce20fc(auStack_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3b474(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3b018;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onEndName_02bed518;
    uVar4 = FUN_00e6a474(PTR_s_onEndName_02bed518);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3b324;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("startTime");
    uVar4 = FUN_0091ed5c("startTime",uVar4,0x12345678);
    (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
    uVar10 = FUN_009bc24c();
    lVar6 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("startTime");
    uVar4 = FUN_0091ed5c("startTime",uVar4,0x12345678);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
    *puVar7 = uVar10;
    FUN_00d67b04(0x3e4ccccd,param_1);
  }
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 0x30);
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(auStack_60,uVar8);
  uVar8 = FUN_00d47d9c(uVar8);
  FUN_00da2040(uVar8,"Effect_Hero010_Sucking_Cont");
  FUN_00d3e534();
  uVar9 = FUN_00e11d14();
  FUN_00d42654(auStack_60,uVar9);
  lVar6 = FUN_00d09310();
  uVar8 = FUN_00d09788(*(undefined4 *)(lVar6 + 0x15c));
  FUN_00d3ecf4(0x3f800000,uVar8,uVar9,"Sound_Skaarf_Ability_C_Suck",0,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3b6b8(undefined8 param_1)

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
  lVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  uVar7 = FUN_00d59f54(lVar2,2,6,0x19,0);
  uVar4 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_Skaarf_Talent_GoopBreath_02bee148);
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)FUN_00d5a3d0(lVar2,DAT_031ac524,1,9);
    uVar7 = (ulong)(uint)((float)uVar7 * fVar6);
  }
  FUN_00d3e534();
  uVar5 = FUN_00d2b564();
  FUN_00d42654(auStack_50,uVar5);
  FUN_00d40908(uVar7,uVar5,5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3b7a4(undefined8 param_1)

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
  FUN_00d59f54(uVar2,2,7,0x19,0);
  FUN_00d472ec(uVar4,1);
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




void FUN_00e3b874(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  local_38[0] = FUN_00d59f54(uVar2,2,8,0x19,0);
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3b8ec(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  float fVar19;
  float fVar20;
  float __x;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_880 [8];
  undefined8 local_878;
  float local_870;
  float local_868;
  float fStack_864;
  float local_860;
  undefined1 auStack_858 [16];
  undefined8 local_848;
  float local_840;
  float fStack_83c;
  float local_838;
  undefined1 auStack_818 [88];
  undefined1 auStack_7c0 [60];
  float local_784;
  undefined1 auStack_750 [96];
  long local_6f0 [200];
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  FUN_00d69224(param_1,&local_848);
  lVar11 = FUN_00d66d28(local_848);
  FUN_00d55794(lVar11,auStack_858,0);
  FUN_00d4d9e8(auStack_750);
  FUN_00d4daf4(auStack_750,1,1,0,lVar11);
  FUN_00d4db48(0x41300000,auStack_750,auStack_858);
  FUN_00d4dba0(0x41f00000,auStack_750);
  FUN_00d4dabc(auStack_750,0x40000);
  uVar6 = FUN_00d9e840(auStack_750,local_6f0,200,0);
  fVar19 = (float)FUN_00d59f54(lVar11,2,0,0x19,0);
  uVar12 = FUN_00d44008(*(undefined4 *)(lVar11 + 0x260),PTR_s_Buff_Skaarf_Talent_FlashFire_02bee178)
  ;
  if ((uVar12 & 1) != 0) {
    fVar20 = (float)FUN_00d5a3d0(lVar11,DAT_031ac53c,1,9);
    fVar19 = fVar19 * fVar20;
  }
  fVar20 = (float)FUN_00d59f54(lVar11,2,10,0x19,0);
  if (0 < (int)uVar6) {
    fVar19 = fVar19 / fVar20;
    uVar12 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar11 + 0x260);
      uVar2 = *(undefined4 *)(local_6f0[uVar12] + 0x260);
      uVar9 = *(uint *)(local_6f0[uVar12] + 0x2f4);
      FUN_00d55794(lVar11,&local_840,0);
      FUN_00d55794(local_6f0[uVar12],&local_868,0);
      fVar24 = local_840 - local_868;
      fVar23 = fStack_83c - fStack_864;
      fVar22 = local_838 - local_860;
      FUN_00d557c4(local_6f0[uVar12],&local_878,&DAT_03218f68);
      fVar20 = fVar24 * fVar24 + fVar23 * fVar23 + fVar22 * fVar22;
      if (1e-08 < fVar20) {
        if (1e-08 < (float)local_878 * (float)local_878 + local_878._4_4_ * local_878._4_4_ +
                    local_870 * local_870) {
          fVar21 = SQRT(fVar20);
          if (NAN(fVar21)) {
            fVar21 = sqrtf(fVar20);
          }
          __x = (float)local_878 * (float)local_878 + local_878._4_4_ * local_878._4_4_ +
                local_870 * local_870;
          fVar20 = SQRT(__x);
          if (NAN(fVar20)) {
            fVar20 = sqrtf(__x);
          }
          local_878 = CONCAT44((float)((ulong)local_878 >> 0x20) / fVar20,(float)local_878 / fVar20)
          ;
          local_870 = local_870 / fVar20;
          cVar4 = FUN_00d55870(local_6f0[uVar12]);
          cVar5 = FUN_00d55870(lVar11);
          if (cVar4 == cVar5) {
            if (0.0 <= (fVar24 / fVar21) * (float)local_878 + (fVar23 / fVar21) * local_878._4_4_ +
                       (fVar22 / fVar21) * local_870) goto LAB_00e3bbac;
            uVar10 = *(undefined4 *)(lVar11 + 0x260);
            uVar17 = *(undefined4 *)(local_6f0[uVar12] + 0x260);
            puVar18 = PTR_s_Buff_Skaarf_Ult_SpeedBoost_02bf0f58;
LAB_00e3bc00:
            uVar7 = FUN_00ceb350();
            FUN_00cfe864(0x3e99999a,0,0,auStack_7c0,uVar10,uVar17,puVar18,uVar7,1,0,0);
            FUN_00ce20fc(auStack_7c0);
          }
          else {
LAB_00e3bbac:
            cVar4 = FUN_00d55870(local_6f0[uVar12]);
            cVar5 = FUN_00d55870(lVar11);
            if (cVar4 != cVar5) {
              if (0.0 < (fVar24 / fVar21) * (float)local_878 + (fVar23 / fVar21) * local_878._4_4_ +
                        (fVar22 / fVar21) * local_870) {
                uVar10 = *(undefined4 *)(lVar11 + 0x260);
                uVar17 = *(undefined4 *)(local_6f0[uVar12] + 0x260);
                puVar18 = PTR_s_Buff_Skaarf_Ult_Slow_02bf0f60;
                goto LAB_00e3bc00;
              }
            }
          }
        }
      }
      cVar4 = FUN_00d55870(local_6f0[uVar12]);
      cVar5 = FUN_00d55870(lVar11);
      if (cVar4 != cVar5) {
        FUN_00d9e1e0(lVar11,local_6f0[uVar12],auStack_880);
        puVar13 = (undefined8 *)FUN_00d67b14(local_848);
        uVar16 = *puVar13;
        fVar20 = fVar19;
        if ((uVar9 & 1) == 0) {
          fVar20 = (float)FUN_00d59f54(fVar19,lVar11,2,9,0x19,0);
          fVar20 = fVar19 * fVar20;
        }
        FUN_00daa148(fVar20,auStack_7c0,uVar1,uVar2,1,2,auStack_880,uVar16,0,1);
        fVar20 = (float)FUN_00d59f54(lVar11,2,3,0x19,0);
        local_784 = fVar20 + local_784;
        FUN_00910c08(auStack_7c0);
        iVar8 = FUN_00d5c238(lVar11,0);
        if (iVar8 != 0) {
          lVar14 = *(long *)(local_6f0[uVar12] + 0x18);
          while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_02c7bf48))) {
            lVar14 = *(long *)(lVar14 + 0x20);
          }
          uVar9 = FUN_00d6bbac(lVar14,DAT_031baec4,0);
          uVar16 = thunk_FUN_00d086f0(lVar11,0,1);
          puVar18 = PTR_s_Buff_Skaarf_Burn_02bf0f20;
          uVar1 = *(undefined4 *)(lVar11 + 0x260);
          uVar2 = *(undefined4 *)(local_6f0[uVar12] + 0x260);
          uVar10 = FUN_00ceb350();
          FUN_00cfe864(uVar16,0,0,auStack_818,uVar1,uVar2,puVar18,uVar10,~uVar9 & 1,0,0);
          FUN_00ce20fc(auStack_818);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar6);
  }
  FUN_00d4d9e8(auStack_7c0);
  FUN_00d4daf4(auStack_7c0,1,0,0,lVar11);
  FUN_00d4db48(0x41200000,auStack_7c0,auStack_858);
  FUN_00d4dba0(0x42340000,auStack_7c0);
  FUN_00d4dca4(auStack_7c0,PTR_s_SkaarfGoopPool_02bf01a8,0);
  uVar6 = FUN_00d9e840(auStack_7c0,local_6f0,200,0);
  if (0 < (int)uVar6) {
    uVar12 = 0;
    do {
      puVar18 = PTR_s_Buff_Skaarf_GoopPoolOnFire_02bf0f48;
      uVar1 = *(undefined4 *)(lVar11 + 0x260);
      uVar2 = *(undefined4 *)(local_6f0[uVar12] + 0x260);
      uVar10 = FUN_00ceb350();
      FUN_00cfe864(0xbf800000,0,0,auStack_818,uVar1,uVar2,puVar18,uVar10,1,0,0);
      FUN_00ce20fc(auStack_818);
      lVar14 = *(long *)(local_6f0[uVar12] + 0x18);
      while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar14 = *(long *)(lVar14 + 0x20);
      }
      uVar15 = FUN_00d6bbac(lVar14,DAT_031baed8,&local_868);
      if ((uVar15 & 1) != 0) {
        FUN_00d009d0(&local_840,*(undefined4 *)(local_6f0[uVar12] + 0x260),local_868);
        FUN_00ce20fc(&local_840);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar6);
  }
  if (*(long *)(lVar3 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e3bf40(undefined8 *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68 [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar4,local_68,0);
  FUN_00d557c4(uVar4,&local_78,&DAT_03218f68);
  fVar2 = local_70;
  uVar4 = NEON_rev64(CONCAT44(fStack_74,local_78),4);
  iVar3 = rand();
  fVar6 = (float)iVar3 * 4.656613e-10 * 5.0 + 0.0 + 3.0;
  iVar3 = rand();
  fVar5 = fVar6 * ((float)iVar3 * 4.656613e-10 * 2.4 + -1.2);
  *param_2 = (local_68[0] + local_78 * fVar6) - fVar2 * fVar5;
  *(ulong *)(param_2 + 1) =
       CONCAT44(SUB84(local_68._4_8_,4) + local_70 * fVar6 + (float)((ulong)uVar4 >> 0x20) * fVar5,
                (float)local_68._4_8_ + fStack_74 * fVar6 + (float)uVar4 * fVar5);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

