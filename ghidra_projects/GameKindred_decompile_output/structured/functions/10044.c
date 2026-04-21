// functions/10044 — 310 functions
#include "GameKindred.h"




void FUN_1004401c8(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int local_178 [2];
  undefined **local_170;
  undefined8 local_168;
  byte local_160;
  undefined4 local_15c;
  float fStack_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined1 local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined2 local_118;
  byte local_116;
  long local_110;
  long local_108 [20];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_110);
    FUN_1003461dc(*(undefined8 *)(*(long *)(local_110 + 0x10) + 0x10));
    uVar5 = FUN_100345d90();
    lVar7 = *(long *)(*(long *)(local_110 + 0x10) + 0x10);
    local_170 = &PTR_FUN_101499960;
    local_150 = 0;
    uStack_148 = 0;
    uStack_134 = 0x3f800000bf800000;
    local_13c = 0xc0000000bf800000;
    local_12c = 0xff;
    local_124 = 0xffffffff;
    local_11c = 0xffffffff;
    local_160 = local_160 & 0xfc | 1;
    lVar6 = FUN_1003e10f0();
    local_15c = *(undefined4 *)(lVar7 + 0x250);
    local_154 = *(undefined4 *)(lVar7 + 600);
    fStack_158 = *(float *)(lVar7 + 0x2ec) + *(float *)(lVar7 + 0x254);
    local_116 = local_116 & 0xe0 | *(byte *)(lVar6 + 0xe5) | 0x14;
    local_118 = 0xc170;
    local_140 = 0x42c80000;
    local_128 = 0x40000;
    local_168 = uVar5;
    uVar1 = FUN_1003a6ce4(&local_170,local_108,0x14,0);
    if (uVar1 != 0) {
      uVar9 = 0;
      do {
        uVar5 = FUN_10043dd78(local_108[uVar9]);
        FUN_1003a4e5c(local_178,uVar5);
        iVar4 = local_178[0];
        uVar2 = FUN_1004d2524("Idle");
        iVar3 = FUN_100015208("Idle",uVar2,0x12345678);
        if (iVar4 == iVar3) {
          lVar6 = *(long *)(local_108[uVar9] + 0x18);
          while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dab8))) {
            lVar6 = *(long *)(lVar6 + 0x20);
          }
          if (*(char *)(lVar6 + 0x198) != '\0') {
            uVar8 = 0;
            do {
              iVar4 = _strcmp((char *)**(undefined8 **)(*(long *)(lVar6 + 0x50 + uVar8 * 8) + 0x38),
                              "Emote_Taunt");
              if (iVar4 == 0) {
                FUN_100101b0c(local_108[uVar9],uVar8);
                break;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(byte *)(lVar6 + 0x198));
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100440400(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 1;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x43100000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff9f | 0x8010;
  return;
}




void FUN_100440480(void)

{
  FUN_1003df6c8(PTR_s__Item_ProtectorContract__10185bb10,2,1);
  return;
}




void FUN_100440494(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003df6c8(PTR_s__Item_ProtectorContract__10185bb10,0,1);
  *param_2 = uVar1;
  *param_3 = 0xbf800000;
  return;
}




void FUN_1004404d4(void)

{
  FUN_1003df6c8(PTR_s__Item_DragonbloodContract__10185bb18,0,1);
  return;
}




void FUN_1004404e8(void)

{
  FUN_1003df6c8(PTR_s__Item_DragonbloodContract__10185bb18,3,1);
  return;
}




void FUN_1004404fc(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined **local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined4 local_164;
  undefined4 uStack_160;
  int local_15c;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined2 local_100;
  undefined1 local_fe;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long local_b0 [2];
  
  FUN_100439ae4(param_1,local_b0,&local_b8);
  lVar8 = *(long *)(*(long *)(local_b0[0] + 0x10) + 0x10);
  lVar3 = FUN_100345d90(*(undefined4 *)(local_b8 + 0x2c4));
  puVar2 = PTR_s__Item_IronguardContract__10185bb08;
  if (((local_b8 != 0 && lVar3 != 0) &&
      ((((uVar7 = (ulong)*(ushort *)(lVar8 + 0x88) & 0x1f, (int)uVar7 == 0x1f ||
         (1 < *(ushort *)(lVar8 + uVar7 * 0x38 + 0x90) - 3)) &&
        (*(int *)(lVar3 + 0x260) == *(int *)(local_b8 + 0x2c0))) &&
       ((*(int *)(lVar3 + 0x260) != *(int *)(lVar8 + 0x260) &&
        (*(char *)(lVar3 + 0x264) == *(char *)(lVar8 + 0x264))))))) &&
     ((*(ushort *)(local_b8 + 0x2f4) & 0x360) != 0)) {
    fVar11 = *(float *)(lVar8 + 0x250);
    fVar13 = *(float *)(lVar8 + 0x254);
    fVar9 = *(float *)(lVar8 + 600);
    fVar14 = *(float *)(lVar8 + 0x2ec);
    fVar17 = *(float *)(local_b8 + 0x250);
    fVar16 = *(float *)(local_b8 + 0x254);
    fVar15 = *(float *)(local_b8 + 600);
    fVar18 = *(float *)(local_b8 + 0x2ec);
    uVar4 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar4,0,puVar2,0);
    plVar6 = *(long **)(lVar5 + 0x1a8);
    if ((*plVar6 != 0) &&
       (fVar11 = fVar11 - fVar17, fVar13 = (fVar14 + fVar13) - (fVar16 + fVar18),
       fVar9 = fVar9 - fVar15, fVar14 = *(float *)(*plVar6 + 8),
       fVar11 * fVar11 + fVar9 * fVar9 + fVar13 * fVar13 < fVar14 * fVar14)) {
      uVar10 = 0;
      if (plVar6[1] == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(plVar6[1] + 8);
        uVar10 = 0;
        if (plVar6[2] != 0) {
          uVar10 = *(undefined4 *)(plVar6[2] + 8);
        }
      }
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      local_f8 = uVar1;
      uStack_f4 = uVar1;
      local_f0 = FUN_100345d90(uVar1);
      local_e8 = FUN_100345d90(uVar1);
      local_d4 = 0;
      local_dc = 0;
      local_cc = 0;
      uStack_c0 = 0xffffffff000000ee;
      local_c8 = 0xffffffffffffffff;
      local_e0 = uVar12;
      FUN_10010cbe4(&local_f8);
      local_10c = *(undefined4 *)(lVar8 + 0x260);
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      local_128 = &PTR_FUN_101497218;
      uStack_108 = 2;
      local_100 = 0x100;
      local_fe = 0;
      local_104 = uVar10;
      FUN_100496328(&local_128,&DAT_101e47d30);
      local_164 = *(undefined4 *)(lVar8 + 0x260);
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      local_180 = &PTR_FUN_101496b18;
      local_15c = DAT_1018589d8;
      local_154 = 0x13e800000;
      local_138 = 0;
      local_144 = 0;
      local_14c = 0;
      local_130 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_160 = local_164;
      local_158 = FUN_1003d4e0c(PTR_s_Buff_Item_IronguardContract_Heal_10185c578);
      FUN_10049639c(&local_180,&DAT_101e47d30);
      local_f8 = *(undefined4 *)(lVar8 + 0x260);
      uVar1 = *(undefined4 *)(lVar3 + 0x260);
      uStack_f4 = uVar1;
      local_f0 = FUN_100345d90();
      local_e8 = FUN_100345d90(uVar1);
      local_d4 = 0;
      local_dc = 0;
      local_cc = 0;
      uStack_c0 = 0xffffffff000000ee;
      local_c8 = 0xffffffffffffffff;
      local_e0 = uVar12;
      FUN_10010cbe4(&local_f8);
      local_10c = *(undefined4 *)(lVar3 + 0x260);
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      local_128 = &PTR_FUN_101497218;
      uStack_108 = 2;
      local_100 = 0x100;
      local_fe = 0;
      local_104 = uVar10;
      FUN_100496328(&local_128,&DAT_101e47d30);
      local_164 = *(undefined4 *)(lVar8 + 0x260);
      uStack_160 = *(undefined4 *)(lVar3 + 0x260);
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      local_180 = &PTR_FUN_101496b18;
      local_15c = DAT_1018589d8;
      local_154 = 0x13e800000;
      local_138 = 0;
      local_144 = 0;
      local_14c = 0;
      local_130 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_158 = FUN_1003d4e0c(PTR_s_Buff_Item_IronguardContract_Heal_10185c578);
      FUN_10049639c(&local_180,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_10044086c(void)

{
  FUN_1003df6c8(PTR_s__Item_MetalJacket__10185bb28,0,1);
  return;
}




bool FUN_100440880(undefined8 param_1,long param_2)

{
  return (*(byte *)(*(long *)(param_2 + 0x20) + 0x2f9) & 2) == 0;
}




void FUN_100440894(void)

{
  FUN_1003df6c8(PTR_s__Item_SeraphicShell__10185bb20,1,1);
  return;
}




void FUN_1004408a8(void)

{
  FUN_1003df6c8(PTR_s__Item_SeraphicShell__10185bb20,2,1);
  return;
}




void FUN_1004408bc(void)

{
  FUN_1003df6c8(PTR_s__Item_SeraphicShell__10185bb20,0,1);
  return;
}




void FUN_1004408d0(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long local_30;
  long local_28;
  
  FUN_10042e1f0(param_1,&local_28,&local_30);
  lVar1 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
  fVar2 = (float)FUN_1003df710(lVar1,1,1);
  if ((*(int *)(local_30 + 0x18) == *(int *)(lVar1 + 0x260)) && (*(char *)(local_30 + 0x60) != '\0')
     ) {
    fVar3 = *(float *)(lVar1 + 0x240);
    fVar4 = *(float *)(lVar1 + 0x248);
    fVar5 = fVar3 * fVar3 + *(float *)(lVar1 + 0x244) * *(float *)(lVar1 + 0x244) + fVar4 * fVar4;
    if (1e-08 <= fVar5) {
      fVar5 = SQRT(fVar5);
      fVar3 = fVar3 / fVar5;
      fVar4 = fVar4 / fVar5;
    }
    else {
      fVar3 = 1.0;
      fVar4 = 0.0;
    }
    if (*(float *)(local_30 + 100) * fVar3 + fVar4 * *(float *)(local_30 + 0x68) <
        *(float *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8) * 0.0055555557 + -1.0) {
      *(float *)(local_30 + 0x50) = *(float *)(local_30 + 0x50) - fVar2;
    }
  }
  return;
}




void FUN_1004409c0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_18,&local_20);
  lVar1 = *(long *)(*(long *)(local_18 + 0x10) + 0x10);
  if ((*(int *)(local_20 + 0x18) == *(int *)(lVar1 + 0x260)) && (*(long *)(local_20 + 0x28) != 0)) {
    if (*(int *)(local_20 + 8) != 2) {
      lVar2 = *(long *)(*(long *)(local_20 + 0x28) + 0x40);
      fVar3 = (float)NEON_fminnm(*(float *)(lVar2 + 0x324) - *(float *)(lVar2 + 800),0x466a6000);
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      *(float *)(local_20 + 0x34) =
           *(float *)(local_20 + 0x34) +
           fVar3 * *(float *)(*(long *)(lVar1 + 0x38) + 0x114) * 0.0014666667;
    }
  }
  else if ((*(int *)(local_20 + 0x10) == *(int *)(lVar1 + 0x260)) &&
          (*(long *)(local_20 + 0x20) != 0)) {
    lVar2 = *(long *)(*(long *)(local_20 + 0x28) + 0x40);
    fVar3 = (float)NEON_fminnm(*(float *)(lVar2 + 0x324) - *(float *)(lVar2 + 800),0x466a6000);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(local_20 + 0x30) =
         *(float *)(local_20 + 0x30) +
         fVar3 * *(float *)(*(long *)(lVar1 + 0x38) + 0x104) * 0.0014666667;
  }
  return;
}




void FUN_100440abc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  int iStack_30;
  long local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_28);
    lVar2 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
    fVar3 = (float)FUN_100032228();
    fVar3 = fVar3 * 0.008333334 + 1.0;
    fVar4 = (float)NEON_fminnm((int)fVar3,0x40e00000);
    if ((*(uint *)(lVar2 + 0x2f4) & 0x300) != 0 && (*(uint *)(lVar2 + 0x2f4) & 4) == 0) {
      fVar3 = fVar4;
    }
    lVar1 = *(long *)(lVar2 + 0x40);
    fVar4 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
    iStack_30 = (int)((float)(uint)(int)fVar3 - DAT_101e94300);
    if (iStack_30 != 0) {
      local_34 = *(undefined4 *)(lVar2 + 0x260);
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = &PTR_FUN_101497138;
      FUN_100497808(&local_50,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_100440bb4(void)

{
  return;
}




void FUN_100440bb8(undefined8 param_1,long param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = *(long *)(param_2 + 0x40);
  fVar3 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
  *param_3 = DAT_101e94300 * 1.1363637 + 19.69697;
  iVar1 = FUN_100440cb4();
  if (iVar1 == 2) {
    lVar2 = *(long *)(param_2 + 0x40);
    fVar3 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
    *param_3 = DAT_101e94300 * 1.818182 + 4.848485;
  }
  if (*(char *)(DAT_101d23a68 + 0x3b) != '\0') {
    *param_3 = *param_3 * 1.8;
  }
  return;
}




undefined4 FUN_100440cb4(void)

{
  int iVar1;
  undefined4 uVar2;
  long local_18;
  
  iVar1 = FUN_1010a1958(&local_18,1,DAT_10184dac8,0);
  uVar2 = 0;
  if (iVar1 == 1) {
    if (*(long *)(local_18 + 0x290) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(long *)(local_18 + 0x290) + 8);
    }
  }
  return uVar2;
}




void FUN_100440d0c(undefined8 param_1,long param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = *(long *)(param_2 + 0x40);
  fVar3 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
  *param_3 = DAT_101e94300 * 0.6818182 + 6.818182;
  iVar1 = FUN_100440cb4();
  if (iVar1 == 2) {
    lVar2 = *(long *)(param_2 + 0x40);
    fVar3 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
    *param_3 = DAT_101e94300 * 1.3636365 + 3.636364;
  }
  if (*(char *)(DAT_101d23a68 + 0x3b) != '\0') {
    *param_3 = *param_3 * 1.8;
  }
  return;
}




void FUN_100440e08(long *param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar3 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
  *param_2 = DAT_101e94300 * 14.545455 + 65.454544;
  iVar1 = FUN_100440cb4();
  if (iVar1 == 2) {
    lVar2 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
    fVar3 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
    *param_2 = DAT_101e94300 * 38.636364 + 36.363636;
  }
  if (*(char *)(DAT_101d23a68 + 0x3b) != '\0') {
    *param_2 = *param_2 * 1.8;
  }
  *param_3 = 0xbf800000;
  return;
}




void FUN_100440f30(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  float fVar2;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  *param_3 = DAT_101e94270;
  return;
}




ushort * FUN_100440f9c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ushort *puVar4;
  
  uVar3 = (ulong)DAT_101e94150;
  if (uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    lVar1 = uVar3 * 0x98;
    puVar4 = &DAT_101e48150 + uVar3 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar4;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar2 = uVar3 * 0x98;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar2) = 0x300000001;
    *(undefined8 *)(&DAT_101e48178 + lVar2) = 0;
    (&DAT_101e48180)[lVar2] = (&DAT_101e48180)[lVar2] & 0xf0 | 2;
    *(undefined ***)puVar4 = &PTR_FUN_10149bc48;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar4);
  return puVar4;
}




void FUN_1004410a8(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined **local_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined1 local_760;
  undefined4 local_75c;
  undefined4 uStack_758;
  long local_750;
  undefined **local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined *local_730;
  uint local_728;
  undefined **local_720;
  long local_718;
  undefined1 local_710;
  undefined8 local_70c;
  undefined8 local_704;
  undefined8 local_6fc;
  undefined4 local_6f4;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined4 local_6e0;
  undefined1 local_6dc;
  undefined4 local_6d8;
  undefined8 local_6d4;
  undefined4 local_6cc;
  undefined2 local_6c8;
  byte local_6c6;
  int local_6c4;
  undefined4 local_6c0;
  undefined8 local_6bc;
  undefined1 local_6b4;
  long local_6b0;
  long local_6a8 [200];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_6b0);
  iVar1 = DAT_101d3eb8c;
  local_718 = 0;
  local_70c = 0;
  local_6fc = 0;
  local_704 = 0;
  uStack_6e8 = 0xbf800000c0000000;
  local_6f0 = 0xbf800000bf800000;
  local_6f4 = 0;
  local_6e0 = 0x3f800000;
  local_6dc = 0xff;
  local_6d4 = 0xffffffff;
  local_6cc = 0xffffffff;
  local_710 = 1;
  lVar3 = FUN_1003e10f0();
  local_720 = &PTR_FUN_1014999d0;
  local_6bc = 0;
  local_6b4 = 0;
  local_6c4 = iVar1;
  local_6d8 = 0x40000;
  lVar5 = *(long *)(*(long *)(local_6b0 + 0x10) + 0x10);
  if (lVar5 != 0) {
    local_718 = lVar5;
  }
  local_6c6 = *(byte *)(lVar3 + 0xe5) | 0x14;
  local_6c8 = 0x4120;
  local_6c0 = *(undefined4 *)(*(long *)(*(long *)(local_6b0 + 0x10) + 0x10) + 0x260);
  uVar2 = FUN_1003a6ce4(&local_720,local_6a8,200,0);
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      lVar3 = *(long *)(local_6a8[uVar6] + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      plVar4 = (long *)(lVar3 + 0x28);
      while ((lVar3 = *plVar4, *(int *)(lVar3 + 0x314) != DAT_101d3eb8c ||
             (*(int *)(lVar3 + 0x310) != 0))) {
        plVar4 = (long *)(lVar3 + 0x350);
      }
      local_728 = *(uint *)(lVar3 + 0x30c);
      local_740 = 0;
      local_738 = 0;
      local_748 = &PTR_FUN_101496cd8;
      local_730 = (undefined *)
                  (CONCAT44(*(undefined4 *)(local_6a8[uVar6] + 0x260),(int)local_730) &
                  0xffffffffffffff00);
      FUN_100496580(&local_748,&DAT_101e47d30);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  local_738 = CONCAT71(local_738._1_7_,0xff);
  local_748 = &PTR_FUN_101499900;
  local_740 = 0;
  local_728 = local_728 & 0xffffff00;
  local_738 = CONCAT44(*(undefined4 *)(*(long *)(*(long *)(local_6b0 + 0x10) + 0x10) + 0x260),
                       (undefined4)local_738);
  local_730 = PTR_s_JungleMinion_TreeEnt_RootField_10185bbd8;
  local_750 = 0;
  FUN_1003a6ce4(&local_748,&local_750,1,0);
  if (local_750 != 0) {
    plVar4 = (long *)(local_750 + 0x18);
    do {
      lVar3 = *plVar4;
      plVar4 = (long *)(lVar3 + 0x20);
    } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
    for (lVar3 = *(long *)(lVar3 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
      if ((*(int *)(lVar3 + 0x314) == DAT_101d3eb90) && (*(int *)(lVar3 + 0x310) == 0)) {
        uStack_758 = *(undefined4 *)(lVar3 + 0x30c);
        local_75c = *(undefined4 *)(local_750 + 0x260);
        local_770 = 0;
        uStack_768 = 0;
        local_760 = 0;
        local_778 = &PTR_FUN_101496cd8;
        FUN_100496580(&local_778,&DAT_101e47d30);
        break;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100441370(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_24;
  undefined1 local_20;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  uVar1 = (uint)*(ulong *)(local_18 + 0x344);
  if ((*(ulong *)(local_18 + 0x344) & 0xffff) != 0) {
    lVar2 = *(long *)(*(long *)(local_18 + 0x10) + 0x10);
    if ((uVar1 & 0xffff) == 1) {
      local_2c = *(undefined4 *)(lVar2 + 0x260);
      uStack_28 = *(undefined4 *)(local_18 + 0x30c);
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      local_48 = &PTR_FUN_101496cd8;
      FUN_100496580(&local_48,&DAT_101e47d30);
    }
    else {
      local_24 = (uVar1 & 0xffff) - 1;
      local_2c = *(undefined4 *)(lVar2 + 0x260);
      uStack_28 = *(undefined4 *)(local_18 + 0x30c);
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      local_48 = &PTR_FUN_1014972c0;
      local_20 = 1;
      FUN_1004968dc(&local_48,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_10044142c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  long local_30;
  long lStack_28;
  
  FUN_10042e1f0(param_1,&lStack_28,&local_30);
  if ((*(int *)(local_30 + 0x18) == *(int *)(*(long *)(*(long *)(lStack_28 + 0x10) + 0x10) + 0x260))
     && (*(long *)(local_30 + 0x28) != 0)) {
    for (lVar2 = *(long *)(*(long *)(local_30 + 0x28) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184daa8) {
        uVar1 = FUN_1003a34a4(lVar2,DAT_101d3eb98);
        fVar3 = (float)uVar1 * -0.2 + 1.0;
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        *(float *)(local_30 + 0x54) = fVar3 * *(float *)(local_30 + 0x54);
        return;
      }
    }
  }
  return;
}




float FUN_1004414dc(long *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*param_1 + 0x318);
  if (fVar1 <= 30.0) {
    fVar1 = 30.0;
  }
  return fVar1;
}




void FUN_1004414f0(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x428) + 0x38) = 0x3dcccccd;
  return;
}




float FUN_100441504(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
  return DAT_101e94300 * 0.01 + 0.03;
}




float FUN_100441564(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
  return DAT_101e94300 * 0.01 + 0.03;
}




float FUN_1004415c4(long param_1,long param_2)

{
  return *(float *)((long)&DAT_101159d80 + (ulong)((*(byte *)(param_2 + 0x2f4) & 4) == 0) * 4) *
         *(float *)(param_1 + 0x454);
}




bool FUN_1004415e8(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  return DAT_101e94260 <= *(float *)(lVar1 + 0x308);
}




float FUN_100441640(long param_1,long param_2)

{
  return *(float *)(&DAT_101159d88 + (ulong)((*(byte *)(param_2 + 0x2f4) & 4) == 0) * 4) *
         *(float *)(param_1 + 0x454);
}




void FUN_100441664(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined7 local_b4;
  undefined4 uStack_ad;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined2 local_79;
  long local_70;
  char local_68;
  char acStack_67 [31];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_70);
  puVar2 = PTR_s_num_charges_10185d600;
  lVar12 = *(long *)(*(long *)(local_70 + 0x10) + 0x10);
  lVar8 = *(long *)(lVar12 + 0x18);
  iVar10 = *(int *)(*(long *)(lVar8 + 8) + 0xa4);
  lVar11 = lVar8;
  iVar1 = iVar10;
  while (iVar1 != DAT_10184dab8) {
    lVar11 = *(long *)(lVar11 + 0x20);
    iVar1 = *(int *)(*(long *)(lVar11 + 8) + 0xa4);
  }
  lVar11 = *(long *)(lVar11 + 0x50);
  if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0x239) & 0x1c) != 0)) {
    while (iVar10 != DAT_10184daa8) {
      lVar8 = *(long *)(lVar8 + 0x20);
      iVar10 = *(int *)(*(long *)(lVar8 + 8) + 0xa4);
    }
    for (lVar8 = *(long *)(lVar8 + 0x28); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x350)) {
      if ((*(int *)(lVar8 + 0x314) == DAT_101d3ebc0) && (*(int *)(lVar8 + 0x310) == 0))
      goto LAB_10044174c;
    }
    if (*(long *)(lVar11 + 0x1f8) == 0) {
LAB_10044174c:
      uVar13 = 0;
    }
    else {
      uVar13 = (uint)*(byte *)(*(long *)(lVar11 + 0x1f8) + 0x6a);
    }
    uVar3 = FUN_1004d2524(PTR_s_num_charges_10185d600);
    uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
    puVar5 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,uVar4);
    puVar2 = PTR_s_pfx_id_10185d608;
    if (uVar13 != *puVar5) {
      uVar3 = FUN_1004d2524(PTR_s_pfx_id_10185d608);
      uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar4);
      uVar3 = *puVar6;
      FUN_1000f0a04(&local_68,"Effect_Kestrel_A_Charge%u");
      plVar7 = *(long **)(lVar12 + 0x50);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0xd0))(plVar7,uVar3);
      }
      if (uVar13 != 0) {
        local_c0 = 0x811c9dc5;
        uStack_d8 = 0;
        local_e0 = 0;
        local_c8 = 0;
        uStack_d0 = 0;
        if (local_68 != '\0') {
          pcVar9 = acStack_67;
          do {
            local_c0 = (local_c0 ^ (int)local_68) * 0x1000193;
            local_68 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (local_68 != '\0');
        }
        local_a9 = 0xff;
        local_a4 = DAT_101dc1cb8;
        local_9c = 0x3f8000003f800000;
        local_b4 = 0;
        uStack_ad = 0;
        local_a8 = 0;
        local_94 = 0x3f800000;
        local_90 = 0;
        local_88 = 0;
        local_84 = 2;
        local_7c = 0x101;
        local_79 = 0;
        uStack_bc = 0xbf800000;
        local_7a = 1;
        local_b8 = uVar3;
        if (*(long **)(lVar12 + 0x50) != (long *)0x0) {
          local_c8 = (**(code **)(**(long **)(lVar12 + 0x50) + 0x178))();
          local_79 = CONCAT11(1,(undefined1)local_79);
          if (*(long *)(lVar12 + 0x50) != 0) {
            uVar4 = FUN_100448e2c(lVar12,"Bone_Bow");
            (**(code **)(**(long **)(lVar12 + 0x50) + 0xb0))
                      (*(long **)(lVar12 + 0x50),&local_e0,uVar4);
          }
        }
      }
      *puVar5 = uVar13;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined4 FUN_100441940(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_100441954(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100441960(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  uint uStack_50;
  float local_4c;
  undefined1 local_48;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  lVar5 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
  lVar2 = *(long *)(*(long *)(lVar5 + 0x58) + 0x58);
  if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) &&
      (*(int *)(local_40 + 0x18) == *(int *)(lVar5 + 0x260))) &&
     ((*(long *)(local_40 + 0x28) != 0 && (**(int **)(*(long *)(local_40 + 0x28) + 0x38) == 0)))) {
    fVar6 = (float)FUN_1003dfe60(lVar5,1,2,5,0);
    fVar7 = (float)FUN_1003dfe60(lVar5,1,3,1,0);
    if (fVar7 < fVar6) {
      plVar3 = (long *)(lVar5 + 0x18);
      do {
        lVar2 = *plVar3;
        plVar3 = (long *)(lVar2 + 0x20);
      } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
      if (*(long *)(lVar2 + 0x58) == 0) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = (float)FUN_10045f0f0();
      }
      if (fVar7 < fVar6) {
        uStack_50 = 0x811c9dc5;
        local_54 = *(undefined4 *)(lVar5 + 0x260);
        cVar1 = *PTR_s_Ability__Kestrel__B_101859578;
        pcVar4 = PTR_s_Ability__Kestrel__B_101859578;
        while (cVar1 != '\0') {
          pcVar4 = pcVar4 + 1;
          uStack_50 = (uStack_50 ^ (int)cVar1) * 0x1000193;
          cVar1 = *pcVar4;
        }
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        local_70 = &PTR_FUN_101497330;
        local_48 = 1;
        local_4c = fVar6;
        FUN_10049650c(&local_70,&DAT_101e47d30);
      }
    }
  }
  return;
}




void FUN_100441acc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,8,0x19,0);
  return;
}




void FUN_100441ae0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_740;
  float local_73c;
  float fStack_738;
  undefined **local_730;
  undefined8 uStack_728;
  undefined1 local_720;
  int local_71c;
  char *local_718;
  undefined1 local_710;
  long local_708;
  long lStack_700;
  undefined4 local_6f8 [2];
  long local_6f0 [200];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042e1f0(param_1,&lStack_700,&local_708);
  lVar5 = *(long *)(*(long *)(lStack_700 + 0x10) + 0x10);
  if ((((*(int *)(local_708 + 0x10) == *(int *)(lVar5 + 0x260)) &&
       (*(long *)(local_708 + 0x20) != 0)) &&
      ((*(byte *)(*(long *)(local_708 + 0x20) + 0x2f4) & 1) != 0)) &&
     ((1.0 <= *(float *)(local_708 + 0x54) && ((*(byte *)(local_708 + 0xc) >> 4 & 1) == 0)))) {
    local_730 = &PTR_FUN_101499900;
    uStack_728 = 0;
    local_710 = 0;
    local_718 = "Kestrel_Trap";
    local_720 = 0xfd;
    local_71c = *(int *)(local_708 + 0x10);
    uVar1 = FUN_1003a6ce4(&local_730,local_6f0,200,0);
    if (0 < (int)uVar1) {
      uVar7 = 0;
LAB_100441bd0:
      lVar6 = local_6f0[uVar7];
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar6 + 0x18);
        do {
          lVar3 = *plVar4;
          plVar4 = (long *)(lVar3 + 0x20);
        } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
        for (lVar3 = *(long *)(lVar3 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
          if ((*(int *)(lVar3 + 0x314) == DAT_101d3ebe0) && (*(int *)(lVar3 + 0x310) == 0)) {
            fVar9 = *(float *)(lVar6 + 0x250);
            fVar10 = *(float *)(lVar6 + 600);
            fVar11 = *(float *)(lVar6 + 0x2ec) + *(float *)(lVar6 + 0x254);
            lVar3 = *(long *)(local_708 + 0x20);
            fVar12 = *(float *)(lVar3 + 0x250);
            fVar13 = *(float *)(lVar3 + 0x254);
            fVar14 = *(float *)(lVar3 + 600);
            fVar15 = *(float *)(lVar3 + 0x2ec);
            local_740 = fVar9;
            local_73c = fVar11;
            fStack_738 = fVar10;
            fVar8 = (float)FUN_1003dfe60(lVar5,1,9,0x19,0);
            fVar9 = fVar9 - fVar12;
            fVar11 = fVar11 - (fVar13 + fVar15);
            fVar10 = fVar10 - fVar14;
            if (fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 <= fVar8 * fVar8) {
              lVar3 = *(long *)(lVar6 + 0x18);
              if (lVar3 == 0) goto LAB_100441cc0;
              goto LAB_100441ca8;
            }
            break;
          }
        }
      }
      goto LAB_100441ce8;
    }
  }
LAB_100441cf4:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
  while (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0) {
LAB_100441ca8:
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dab8) break;
  }
LAB_100441cc0:
  FUN_1003a4e5c(local_6f8,PTR_s_Ability__Kestrel__Trap_Detonate_101859588);
  uVar2 = FUN_1003e2b0c(lVar3,local_6f8[0]);
  FUN_100101b1c(lVar6,uVar2,&local_740);
LAB_100441ce8:
  uVar7 = uVar7 + 1;
  if (uVar7 == uVar1) goto LAB_100441cf4;
  goto LAB_100441bd0;
}




bool FUN_100441d40(long *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *param_1;
  lVar1 = *(long *)(*(long *)(lVar2 + 0x10) + 0x10);
  if (*(int *)(lVar1 + 0x260) != *(int *)(lVar2 + 0x308)) {
    lVar1 = FUN_100345d90(*(int *)(lVar2 + 0x308));
    lVar2 = *param_1;
  }
  fVar3 = *(float *)(lVar2 + 0x31c);
  fVar5 = *(float *)(lVar2 + 0x318);
  fVar4 = (float)FUN_1003dfe60(lVar1,1,4,0x19,0);
  return fVar4 < fVar3 - fVar5;
}




void FUN_100441db4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,6,5,0);
  return;
}




void FUN_100441dc8(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100432da4(*param_1);
  uVar2 = FUN_100432e08(*param_1);
  *param_2 = uVar1;
  param_2[1] = 0x3f99999a;
  param_2[2] = uVar2;
  return;
}




void FUN_100441e18(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b9ac();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100441e68(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b7ac();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100441eb8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_40,&local_38);
  puVar1 = PTR_s_Buff_Koshka_HeroicPerk_BloodRush_10185c6e0;
  lVar2 = *(long *)(*(long *)(local_40 + 0x10) + 0x10);
  local_7c = *(int *)(local_38 + 0x10);
  if ((((local_7c == *(int *)(lVar2 + 0x260)) && ((*(byte *)(local_38 + 0xc) >> 3 & 1) != 0)) &&
      (*(int *)(local_38 + 8) != 3)) &&
     ((*(byte *)(*(long *)(local_38 + 0x20) + 0x2f6) >> 4 & 1) == 0)) {
    local_6c = FUN_1003df710(lVar2,1,1);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_98 = &PTR_FUN_101496b18;
    local_74 = DAT_1018589d8;
    local_68 = 1;
    local_50 = 0;
    local_5c = 0;
    local_64 = 0;
    local_48 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    iStack_78 = local_7c;
    local_70 = FUN_1003d4e0c(puVar1);
    FUN_10049639c(&local_98,&DAT_101e47d30);
  }
  return;
}




undefined4 FUN_100441fb0(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_100441fc4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_20,&local_18);
  lVar2 = *(long *)(*(long *)(local_20 + 0x10) + 0x10);
  if ((*(int *)(local_18 + 0x18) == *(int *)(lVar2 + 0x260)) &&
     (lVar3 = *(long *)(local_18 + 0x28), lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 0x2f4);
    if ((uVar1 >> 10 & 1) != 0) {
      *(float *)(local_18 + 0x54) = *(float *)(local_18 + 0x54) * 0.3;
    }
    if ((((uVar1 & 1) != 0) && (*(int *)(local_18 + 8) != 2)) &&
       ((*(byte *)(local_18 + 0xc) & 1) != 0)) {
      lVar3 = *(long *)(lVar3 + 0x40);
      fVar4 = *(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0)
      ;
      NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1e0),DAT_101e94360);
      if (3.0 <= DAT_101e942a0) {
        fVar4 = 0.4;
      }
      else {
        fVar4 = *(float *)((long)&DAT_101159d90 + (ulong)(*(char *)(lVar2 + 0x264) == '\0') * 4);
      }
      *(float *)(local_18 + 0x54) =
           *(float *)(local_18 + 0x54) - *(float *)(local_18 + 0x54) * fVar4;
    }
  }
  return;
}




void FUN_1004420bc(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  float local_184;
  undefined2 local_180;
  undefined1 local_17e;
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  float local_14c;
  undefined1 local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  float local_114;
  undefined1 local_110;
  undefined **local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined1 local_f6;
  long local_f0;
  long alStack_e8 [16];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_f0);
  lVar8 = *(long *)(*(long *)(local_f0 + 0x10) + 0x10);
  uVar1 = FUN_1004d2524("gold_poll_timer");
  uVar3 = FUN_100015208("gold_poll_timer",uVar1,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(local_f0 + 0x168) + 0x10))(local_f0 + 0x168,uVar3);
  if (*pfVar4 <= 0.0) {
    local_108 = &PTR_FUN_1014998d0;
    uStack_100 = 0;
    local_f6 = 0xff;
    local_f8 = 0xff;
    uVar2 = FUN_1003a6ce4(&local_108,alStack_e8,0x10,0);
    if (uVar2 == 0) {
      fVar11 = 0.0;
    }
    else {
      uVar5 = (ulong)uVar2;
      fVar9 = 0.0;
      plVar7 = alStack_e8;
      do {
        fVar9 = *(float *)(*(long *)(*plVar7 + 0x40) + 0x324) + fVar9;
        uVar5 = uVar5 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar5 != 0);
      fVar11 = fVar9 / (float)uVar2;
      if (uVar2 < 2) {
        fVar11 = fVar9;
      }
    }
    lVar6 = *(long *)(lVar8 + 0x40);
    fVar9 = *(float *)(lVar6 + 0x38) + *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0);
    fVar10 = (float)NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar6 + 0x1a0),DAT_101e94320);
    fVar9 = DAT_101e94260;
    if (DAT_101e94260 <= fVar10) {
      fVar9 = fVar10;
    }
    fVar10 = *(float *)(lVar6 + 0x308);
    local_124 = *(undefined4 *)(lVar8 + 0x260);
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    local_140 = &PTR_FUN_1014971e0;
    local_120 = 0xffffffff;
    local_118 = 1;
    local_110 = 1;
    local_114 = fVar11 * 0.3;
    FUN_1004969f4(&local_140,&DAT_101e47d30);
    local_15c = *(undefined4 *)(lVar8 + 0x260);
    local_14c = fVar11 * 0.030000001;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_178 = &PTR_FUN_1014971e0;
    local_158 = 0x1ffffffff;
    local_150 = 1;
    local_148 = 1;
    FUN_1004969f4(&local_178,&DAT_101e47d30);
    if (fVar10 == fVar9) {
      local_18c = *(undefined4 *)(lVar8 + 0x260);
      local_1a0 = 0;
      uStack_198 = 0;
      local_190 = 0;
      local_1a8 = &PTR_FUN_101497218;
      uStack_188 = 0;
      local_180 = 0x100;
      local_17e = 0;
      local_184 = fVar11 * 0.3;
      FUN_100496328(&local_1a8,&DAT_101e47d30);
    }
    *pfVar4 = 60.0;
  }
  else {
    *pfVar4 = *pfVar4 + -1.0;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100442328(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar5 = *(undefined4 *)(lVar2 + 0x250);
  fVar3 = *(float *)(lVar2 + 0x254);
  uVar6 = *(undefined4 *)(lVar2 + 600);
  fVar4 = *(float *)(lVar2 + 0x2ec);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined1 *)(param_2 + 0x10) = 1;
  *(undefined4 *)(param_2 + 0x14) = uVar5;
  *(float *)(param_2 + 0x18) = fVar4 + fVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar6;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xbf800000c0000000;
  *(undefined8 *)(param_2 + 0x30) = 0xbf80000043c80000;
  *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x44) = 0xff;
  *(undefined8 *)(param_2 + 0x50) = 0xffffffff00000000;
  *(undefined8 *)(param_2 + 0x48) = 0xffffffff00000001;
  *(byte *)(param_2 + 0x5a) = bVar1 | 0x14;
  *(undefined2 *)(param_2 + 0x58) = 0xc010;
  return;
}




void FUN_100442a08(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  int local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  puVar2 = PTR_s_Buff_Krul_HeroicPerk_ShadowsEmpo_10185c7b8;
  lVar3 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
  local_7c = *(int *)(local_40 + 0x10);
  if ((((local_7c == *(int *)(lVar3 + 0x260)) && (lVar4 = *(long *)(local_40 + 0x20), lVar4 != 0))
      && ((uVar5 = (ulong)*(ushort *)(lVar4 + 0x88) & 0x1f, (int)uVar5 == 0x1f ||
          (1 < *(ushort *)(lVar4 + uVar5 * 0x38 + 0x90) - 3)))) &&
     ((*(byte *)(local_40 + 0xc) >> 2 & 1) != 0)) {
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    local_6c = FUN_1003df710(lVar3,3,1);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_98 = &PTR_FUN_101496b18;
    local_74 = DAT_1018589d8;
    local_68 = 1;
    local_50 = 0;
    local_5c = 0;
    local_64 = 0;
    local_48 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    uStack_78 = uVar1;
    local_70 = FUN_1003d4e0c(puVar2);
    FUN_10049639c(&local_98,&DAT_101e47d30);
  }
  return;
}




void FUN_100442b1c(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  long local_50;
  long local_48;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_50,&local_48);
    lVar7 = *(long *)(*(long *)(local_50 + 0x10) + 0x10);
    if ((*(int *)(local_48 + 0x10) == *(int *)(lVar7 + 0x260)) &&
       ((*(byte *)(local_48 + 0xc) >> 2 & 1) != 0)) {
      uVar8 = FUN_100032228();
      uVar1 = FUN_1004d2524("timeLastSentReceivedDamage");
      uVar2 = FUN_100015208("timeLastSentReceivedDamage",uVar1,0x12345678);
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
      *puVar3 = uVar8;
      plVar5 = (long *)(lVar7 + 0x18);
      do {
        lVar6 = *plVar5;
        plVar5 = (long *)(lVar6 + 0x20);
      } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8);
      lVar4 = *(long *)(lVar6 + 0x28);
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
        if ((*(int *)(lVar6 + 0x314) == DAT_101d3ec14) && (*(int *)(lVar6 + 0x310) == 0)) {
          local_5c = *(undefined4 *)(lVar7 + 0x260);
          for (; (*(int *)(lVar4 + 0x314) != DAT_101d3ec14 || (*(int *)(lVar4 + 0x310) != 0));
              lVar4 = *(long *)(lVar4 + 0x350)) {
          }
          uStack_58 = *(undefined4 *)(lVar4 + 0x30c);
          local_70 = 0;
          uStack_68 = 0;
          local_60 = 0;
          local_78 = &PTR_FUN_101496cd8;
          FUN_100496580(&local_78,&DAT_101e47d30);
          return;
        }
      }
    }
  }
  return;
}




void FUN_100442c78(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100442c84(long *param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  lVar3 = param_1[0x85];
  if (lVar3 != 0) {
    lVar4 = *param_1;
    lVar2 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != *(int *)(lVar4 + 0x308)) {
      lVar2 = FUN_100345d90(*(int *)(lVar4 + 0x308));
      lVar4 = *param_1;
      lVar3 = param_1[0x85];
    }
    fVar5 = (float)FUN_1003dfe60(lVar2,1,6,9,1);
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 0x344));
    *(float *)(lVar3 + 0x38) = *(float *)(lVar3 + 0x38) + fVar1 * fVar5;
  }
  return;
}




float FUN_100442d04(long *param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != *(int *)(lVar3 + 0x308)) {
    lVar2 = FUN_100345d90(*(int *)(lVar3 + 0x308));
    lVar3 = *param_1;
  }
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 0x344));
  fVar1 = (float)FUN_1003dfe60(lVar2,1,9,0x19,0);
  return -(fVar1 * fVar4) - -1.0;
}




void FUN_100442d74(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_3c;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042fb4c(param_1,&local_38,&local_3c);
    lVar4 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    lVar3 = *(long *)(lVar4 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    iVar1 = FUN_1003e2b0c(lVar3,local_3c);
    FUN_1003a4e5c(&local_98,PTR_s_Ability__Krul__B_101859168);
    iVar2 = FUN_1003e2b0c(lVar3,(ulong)local_98 & 0xffffffff);
    if (iVar1 == iVar2) {
      local_7c = *(undefined4 *)(lVar4 + 0x260);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_98 = &PTR_FUN_101496b18;
      local_74 = DAT_1018589d8;
      local_6c = 0x1bf800000;
      local_50 = 0;
      local_5c = 0;
      local_64 = 0;
      local_48 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_78 = local_7c;
      local_70 = FUN_1003d4e0c(PTR_s_Buff_Krul_AbilityPerk_Spectral_S_10185c7c0);
      FUN_10049639c(&local_98,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_100442e94(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  int local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  puVar3 = PTR_s_Buff_Krul_Spectral_Smite_Debuf_10185acf0;
  if ((*(ushort *)(local_38 + 0x344) & 0xfffe) != 0) {
    lVar4 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    lVar5 = *(long *)(local_40 + 0x20);
    iVar1 = *(int *)(local_40 + 0x10);
    if (((iVar1 == *(int *)(lVar4 + 0x260) && lVar5 != 0) &&
        ((*(uint *)(lVar5 + 0x2f4) & 0x400060) != 0)) && ((*(byte *)(local_40 + 0xc) >> 2 & 1) != 0)
       ) {
      uVar2 = *(undefined4 *)(lVar5 + 0x260);
      local_6c = FUN_1003dfe60(lVar4,1,8,0x19,0);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_98 = &PTR_FUN_101496b18;
      local_74 = DAT_1018589d8;
      local_68 = 1;
      local_50 = 0;
      local_5c = 0;
      local_64 = 0;
      local_48 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_7c = iVar1;
      uStack_78 = uVar2;
      local_70 = FUN_1003d4e0c(puVar3);
      FUN_10049639c(&local_98,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_100442fa8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,8,0x19,0);
  return;
}




void FUN_100442fbc(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_38);
    lVar4 = FUN_100345d90(*(undefined4 *)(local_38 + 0x308));
    puVar3 = PTR_s_Buff_Krul_Spectral_Smite_Debuf_10185acf0;
    lVar5 = *(long *)(*(long *)(lVar4 + 0x58) + 0x58);
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x239) & 0x1c) != 0)) {
      uVar1 = *(undefined4 *)(lVar4 + 0x260);
      uVar2 = *(undefined4 *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x260);
      local_64 = FUN_1003dfe60(lVar4,1,8,0x19,0);
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_90 = &PTR_FUN_101496b18;
      local_6c = DAT_1018589d8;
      local_60 = 1;
      local_48 = 0;
      local_54 = 0;
      local_5c = 0;
      local_40 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_74 = uVar1;
      uStack_70 = uVar2;
      local_68 = FUN_1003d4e0c(puVar3);
      FUN_10049639c(&local_90,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_1004430bc(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  float local_54;
  undefined1 local_50;
  float *local_48;
  undefined4 local_40;
  int local_3c;
  long local_38;
  
  if ((DAT_101d23a38 != '\0') &&
     (FUN_10042f044(param_1,&local_38,&local_3c,&local_40,&local_48), local_3c == 2)) {
    lVar1 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    fVar2 = *local_48;
    local_54 = (float)FUN_1003df710(lVar1,1,1);
    local_54 = local_54 * fVar2;
    local_64 = *(undefined4 *)(lVar1 + 0x260);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_80 = &PTR_FUN_1014971e0;
    local_60 = 0x2bffffffff;
    local_58 = local_40;
    local_50 = 0;
    FUN_1004969f4(&local_80,&DAT_101e47d30);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100443180(long param_1,float *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (DAT_101d23a38 != '\0') {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    plVar2 = (long *)(lVar3 + 0x18);
    do {
      lVar1 = *plVar2;
      plVar2 = (long *)(lVar1 + 0x20);
    } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8);
    *param_2 = 0.0;
    lVar4 = *(long *)(lVar1 + 0x28);
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
      if ((*(int *)(lVar1 + 0x314) == DAT_101d3ec38) && (*(int *)(lVar1 + 0x310) == 0)) {
        return;
      }
    }
    fVar5 = (float)FUN_1003df710(lVar3,2,1);
    *param_2 = fVar5;
    lVar1 = *(long *)(lVar3 + 0x40);
    fVar6 = *(float *)(lVar1 + 0x44) + *(float *)(lVar1 + 0xf8) * (*(float *)(lVar1 + 0x260) + 1.0);
    fVar7 = (float)NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar1 + 0x1ac),_DAT_101e9432c);
    fVar6 = _DAT_101e9426c;
    if (_DAT_101e9426c <= fVar7) {
      fVar6 = fVar7;
    }
    fVar7 = (float)FUN_1003df710(lVar3,3,1);
    fVar5 = fVar5 + fVar7 * fVar6;
    *param_2 = fVar5;
    for (; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d3ec3c) && (*(int *)(lVar4 + 0x310) == 0)) {
        fVar6 = (float)FUN_1003dfe60(lVar3,1,0x12,0x19,0);
        fVar5 = fVar6 * fVar5;
        *param_2 = fVar5;
        break;
      }
    }
    *param_2 = fVar5 * *(float *)(param_1 + 0x328);
  }
  return;
}




ushort * FUN_1004432e0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498318;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e48168 + lVar1) = 0xffffffff;
    *(undefined8 *)(&DAT_101e4816c + lVar1) = 0;
    (&DAT_101e48174)[lVar1] = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_1004433dc(float param_1,long param_2,long param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if ((iVar1 == *(int *)(param_2 + 0x260)) && (*(char *)(param_3 + 0x60) != '\0')) {
    fVar2 = *(float *)(param_2 + 0x240);
    fVar3 = *(float *)(param_2 + 0x248);
    fVar4 = fVar2 * fVar2 + *(float *)(param_2 + 0x244) * *(float *)(param_2 + 0x244) +
            fVar3 * fVar3;
    if (1e-08 <= fVar4) {
      fVar4 = SQRT(fVar4);
      fVar2 = fVar2 / fVar4;
      fVar3 = fVar3 / fVar4;
    }
    else {
      fVar2 = 1.0;
      fVar3 = 0.0;
    }
    fVar5 = *(float *)(param_3 + 100);
    fVar6 = *(float *)(param_3 + 0x68);
    fVar4 = (float)FUN_1003dfe60(param_2,1,0xc,0x19,0);
    if (fVar5 * fVar2 + fVar3 * fVar6 < fVar4 * 0.0055555557 + -1.0) {
      *(float *)(param_3 + 0x50) = *(float *)(param_3 + 0x50) - param_1;
      local_64 = _atan2f(fVar6,fVar5);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_98 = &PTR_FUN_101496b18;
      local_74 = DAT_1018589d8;
      local_6c = 0x13dcccccd;
      local_58 = 0;
      local_60 = 0;
      local_50 = 0;
      local_48 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_7c = iVar1;
      iStack_78 = iVar1;
      local_70 = FUN_1003d4e0c(PTR_s_Buff_Lance_PlayGuardImpactPfx_10185cc28);
      FUN_10049639c(&local_98,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_100443544(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  uVar1 = *(undefined8 *)(*(long *)(local_38 + 0x10) + 0x10);
  uVar2 = FUN_1003dfe60(uVar1,1,0x10,0x19,0);
  uVar3 = FUN_1003dfe60(uVar1,1,0x11,0x19,0);
  fVar5 = (float)NEON_fminnm(uVar2,uVar3);
  if ((*(long *)(local_40 + 0x28) != 0) &&
     ((*(byte *)(*(long *)(local_40 + 0x28) + 0x2f5) >> 4 & 1) != 0)) {
    fVar4 = (float)FUN_1003dfe60(uVar1,1,0xf,0x19,0);
    fVar5 = fVar4 * fVar5;
  }
  FUN_1004433dc(fVar5,uVar1,local_40);
  return;
}




void FUN_1004435fc(undefined8 param_1)

{
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  local_24 = *(undefined4 *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260);
  uStack_20 = *(undefined4 *)(local_18 + 0x30c);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_40 = &PTR_FUN_101496cd8;
  FUN_100496580(&local_40,&DAT_101e47d30);
  return;
}




void FUN_100443658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,param_3);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  if (param_4 != (undefined8 *)0x0) {
    plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,*param_4);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(param_1);
    if (param_5 != 0) {
      uVar3 = (ulong)param_5;
      do {
        (**(code **)(*plVar2 + 0x18))(plVar2,*param_4);
        uVar3 = uVar3 - 1;
        param_4 = param_4 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}




void FUN_100443734(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  uVar1 = *(undefined8 *)(*(long *)(local_38 + 0x10) + 0x10);
  uVar2 = FUN_1003dfe60(uVar1,1,0xd,0x19,0);
  uVar3 = FUN_1003dfe60(uVar1,1,0xe,0x19,0);
  fVar5 = (float)NEON_fminnm(uVar2,uVar3);
  if ((*(long *)(local_40 + 0x28) != 0) &&
     ((*(byte *)(*(long *)(local_40 + 0x28) + 0x2f5) >> 4 & 1) != 0)) {
    fVar4 = (float)FUN_1003dfe60(uVar1,1,0xf,0x19,0);
    fVar5 = fVar4 * fVar5;
  }
  FUN_1004433dc(fVar5,uVar1,local_40);
  return;
}




bool FUN_1004437ec(long *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar4 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  FUN_100432d40();
  lVar2 = FUN_100345d90();
  if ((lVar2 == 0) ||
     ((uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 != 0x1f &&
      (*(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3 < 2)))) {
    bVar1 = true;
  }
  else {
    fVar6 = *(float *)(lVar4 + 0x250);
    fVar7 = *(float *)(lVar4 + 0x254);
    fVar8 = *(float *)(lVar4 + 600);
    fVar9 = *(float *)(lVar4 + 0x2ec);
    fVar10 = *(float *)(lVar2 + 0x250);
    fVar11 = *(float *)(lVar2 + 0x254);
    fVar12 = *(float *)(lVar2 + 600);
    fVar13 = *(float *)(lVar2 + 0x2ec);
    bVar1 = true;
    fVar5 = (float)FUN_1003dfe60(lVar4,1,0xb,0x19,0);
    fVar6 = fVar6 - fVar10;
    fVar7 = (fVar9 + fVar7) - (fVar11 + fVar13);
    fVar8 = fVar8 - fVar12;
    if (fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7 <= fVar5 * fVar5) {
      lVar2 = *(long *)(lVar2 + 0x80) + (ulong)*(uint *)(*(long *)(lVar2 + 0x80) + 0x5c) * 0x19 +
              (ulong)*(byte *)(lVar4 + 0x264);
      bVar1 = (*(byte *)(lVar2 + 0x28) &
              ((*(byte *)(lVar2 + 0x38) | *(byte *)(lVar2 + 0x30)) ^ 0xff)) != 0;
    }
  }
  return bVar1;
}




void FUN_100443914(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  code *local_50;
  undefined4 local_48;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x80;
  puVar2 = PTR_s_Buff_Tutorial_RecallUncancellabl_10185bea8;
  if (DAT_101d23a38 != '\0') {
    lVar4 = FUN_100345d90(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
    if ((lVar4 == 0) || (uVar5 = FUN_1003a47d0(lVar4,puVar2), (uVar5 & 1) == 0)) {
      lVar4 = FUN_10042e694(param_1);
      *(ushort *)(lVar4 + 0x48) = *(ushort *)(lVar4 + 0x48) | 0x20;
      *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) & 0xfc | 2;
      FUN_1004385f0(lVar4 + 0x10);
    }
    lVar4 = FUN_100433910(param_1);
    *(code **)(lVar4 + 0x30) = FUN_100451598;
    FUN_1004385f0(lVar4 + 0x10);
    puVar2 = PTR_s_onCancelName_10185d708;
    uVar3 = FUN_1004d2524(PTR_s_onCancelName_10185d708);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100451440;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar4 = FUN_10042e2c8(param_1);
  plVar6 = (long *)FUN_10049d8cc(lVar4 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
  (**(code **)(*plVar6 + 0x38))(plVar6,"Withdraw");
  plVar6 = (long *)FUN_10049b7c4(lVar4 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))
                             (plVar6,"build://Sounds/Environment.assetbundle/sfx_teleport.mp3");
  (**(code **)(*plVar6 + 0x28))(0x3f666666);
  lVar4 = FUN_10042e2c8(param_1);
  lVar4 = FUN_10043ab44(lVar4 + 0x10);
  *(code **)(lVar4 + 0x40) = FUN_1004518b4;
  *(ushort *)(lVar4 + 0x58) = *(ushort *)(lVar4 + 0x58) & 0xff01 | 0x401;
  plVar6 = (long *)FUN_100441e68(lVar4 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,FUN_100451944);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xf0))();
  (**(code **)(*plVar6 + 0x90))();
  lVar4 = FUN_10042e498(param_1);
  plVar6 = (long *)FUN_100433e34(lVar4 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Withdraw_Ping_10185bd90);
  local_50 = (code *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0x31c));
  local_48 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
  plVar6 = (long *)FUN_100441e18(lVar4 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                             (plVar6,"build://Sounds/Environment.assetbundle/sfx_teleport_start.mp3"
                             );
  (**(code **)(*plVar6 + 0x28))(0x3e4ccccd);
  lVar4 = FUN_1004303b0(param_1);
  if (param_2 != 0) {
    plVar6 = (long *)FUN_10049d91c(lVar4 + 0x10);
    (**(code **)(*plVar6 + 0x30))(plVar6,"Effect_Withdraw_Finish",FUN_1004515ac);
  }
  lVar4 = lVar4 + 0x10;
  FUN_1004386bc(lVar4);
  lVar7 = FUN_10049d96c(lVar4);
  *(undefined1 *)(lVar7 + 0x18) = 1;
  plVar6 = (long *)FUN_10049d314(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,FUN_100451654);
  lVar7 = FUN_10043aaf4(lVar4);
  *(code **)(lVar7 + 0x10) = FUN_100451784;
  if (param_2 != 0) {
    plVar6 = (long *)FUN_100441e68(lVar4);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
    (**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Withdraw_Channel_End");
    plVar6 = (long *)FUN_100441e18(lVar4);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,
                                "build://Sounds/Environment.assetbundle/sfx_teleport_land.mp3");
    (**(code **)(*plVar6 + 0x28))(0x3f4ccccd);
  }
  lVar4 = FUN_10043fc08(lVar4);
  lVar7 = FUN_10049c300(lVar4 + 0x10);
  *(undefined **)(lVar7 + 8) = PTR_s_Buff_SpawnStage_Recharge_10185c0f8;
  plVar6 = (long *)FUN_10043aa54(lVar4 + 0xa0);
  local_50 = FUN_10045180c;
  local_48 = 4;
  (**(code **)(*plVar6 + 0x30))(plVar6,&local_50);
  plVar6 = (long *)FUN_1004519c8(lVar4 + 0xa0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  local_50 = FUN_100451860;
  local_48 = 4;
  (**(code **)(*plVar6 + 0x10))(plVar6,2,&local_50);
  lVar4 = FUN_100436184(param_1);
  FUN_1004385f0(lVar4 + 0x10);
  lVar4 = FUN_10042fdc4(param_1);
  plVar6 = (long *)FUN_1004385a0(lVar4 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Withdraw_Ping_10185bd90);
  return;
}




void FUN_100443d0c(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar5 = *(undefined4 *)(lVar2 + 0x250);
  fVar3 = *(float *)(lVar2 + 0x254);
  uVar6 = *(undefined4 *)(lVar2 + 600);
  fVar4 = *(float *)(lVar2 + 0x2ec);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 0x10) = 1;
  *(undefined4 *)(param_2 + 0x14) = uVar5;
  *(float *)(param_2 + 0x18) = fVar4 + fVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar6;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xbf800000c0000000;
  *(undefined8 *)(param_2 + 0x30) = 0xbf80000041c80000;
  *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x44) = 0xff;
  *(undefined8 *)(param_2 + 0x50) = 0xffffffff00000000;
  *(undefined8 *)(param_2 + 0x48) = 0xffffffff00000001;
  *(undefined2 *)(param_2 + 0x58) = 0xc100;
  *(byte *)(param_2 + 0x5a) = bVar1 | 0x14;
  return;
}




void FUN_100443db4(undefined8 param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_2 + 0x250);
  param_3[1] = *(undefined4 *)(param_2 + 0x254);
  param_3[2] = *(undefined4 *)(param_2 + 600);
  param_3[1] = 0x3ecccccd;
  return;
}




void FUN_100443ddc(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar5 = *(undefined4 *)(lVar2 + 0x250);
  fVar3 = *(float *)(lVar2 + 0x254);
  uVar6 = *(undefined4 *)(lVar2 + 600);
  fVar4 = *(float *)(lVar2 + 0x2ec);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined1 *)(param_2 + 0x10) = 1;
  *(undefined4 *)(param_2 + 0x14) = uVar5;
  *(float *)(param_2 + 0x18) = fVar4 + fVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar6;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xbf800000c0000000;
  *(undefined8 *)(param_2 + 0x30) = 0xbf80000042100000;
  *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x44) = 0xff;
  *(undefined8 *)(param_2 + 0x50) = 0xffffffff00000000;
  *(undefined8 *)(param_2 + 0x48) = 0xffffffff00000010;
  *(byte *)(param_2 + 0x5a) = bVar1 | 0x14;
  *(undefined2 *)(param_2 + 0x58) = 0xc110;
  return;
}




void FUN_100443e90(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar5 = *(undefined4 *)(lVar2 + 0x250);
  fVar3 = *(float *)(lVar2 + 0x254);
  uVar6 = *(undefined4 *)(lVar2 + 600);
  fVar4 = *(float *)(lVar2 + 0x2ec);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined1 *)(param_2 + 0x10) = 1;
  *(undefined4 *)(param_2 + 0x14) = uVar5;
  *(float *)(param_2 + 0x18) = fVar4 + fVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar6;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xbf800000c0000000;
  *(undefined8 *)(param_2 + 0x30) = 0xbf80000043440000;
  *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x44) = 0xff;
  *(undefined8 *)(param_2 + 0x50) = 0xffffffff00000000;
  *(undefined8 *)(param_2 + 0x48) = 0xffffffff00000010;
  *(byte *)(param_2 + 0x5a) = bVar1 | 0x14;
  *(undefined2 *)(param_2 + 0x58) = 0xc110;
  return;
}




void FUN_100443f44(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  int iStack_30;
  long local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_28);
    lVar3 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
    fVar4 = (float)FUN_100032228();
    uVar1 = (uint)(fVar4 * 0.004444445 + 2.0);
    if (5 < uVar1) {
      uVar1 = 6;
    }
    lVar2 = *(long *)(lVar3 + 0x40);
    fVar4 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
    iStack_30 = (int)((float)uVar1 - DAT_101e94300);
    if (iStack_30 != 0) {
      local_34 = *(undefined4 *)(lVar3 + 0x260);
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = &PTR_FUN_101497138;
      FUN_100497808(&local_50,&DAT_101e47d30);
    }
  }
  return;
}




undefined1  [16] FUN_100444020(void)

{
  return ZEXT816(0x3fc00000);
}




undefined1  [16] FUN_100444028(void)

{
  return ZEXT816(0x3fc00000);
}




undefined1  [16] FUN_100444030(void)

{
  return ZEXT816(0x3f400000);
}




void FUN_100444038(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,10,0x19,0);
  return;
}




float FUN_10044404c(long *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar1 + 0x260) != *(int *)(*param_1 + 0x308)) {
    lVar1 = FUN_100345d90();
  }
  fVar3 = *(float *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  fVar2 = (float)FUN_1003df710(lVar1,4,1);
  return fVar3 + fVar2 * *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
}




undefined8 FUN_1004440bc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  FUN_10034ee90();
  lVar2 = FUN_100345d90();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184daa8) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    return 0;
  }
  while ((*(int *)(lVar2 + 0x314) != DAT_101d3ecac || (*(int *)(lVar2 + 0x310) != 0))) {
    plVar1 = (long *)(lVar2 + 0x350);
    lVar2 = *plVar1;
    if (*plVar1 == 0) {
      while ((*(int *)(lVar3 + 0x314) != DAT_101d3ecb0 || (*(int *)(lVar3 + 0x310) != 0))) {
        lVar3 = *(long *)(lVar3 + 0x350);
        if (lVar3 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 1;
}




void FUN_100444164(long *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined7 local_a4;
  undefined4 uStack_9d;
  undefined1 local_99;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined1 local_68;
  long local_58;
  
  FUN_10042ecbc(param_1,&local_58);
  puVar3 = PTR_s_portal_cooldown_10185d648;
  uVar5 = FUN_1004d2524(PTR_s_portal_cooldown_10185d648);
  uVar8 = FUN_100015208(puVar3,uVar5,0x12345678);
  pbVar9 = (byte *)(**(code **)(*param_1 + 0x10))(param_1,uVar8);
  uVar6 = FUN_1004440bc();
  puVar3 = PTR_s_pfx_id_10185d650;
  uVar5 = FUN_1004d2524(PTR_s_pfx_id_10185d650);
  uVar8 = FUN_100015208(puVar3,uVar5,0x12345678);
  piVar10 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar8);
  if ((*piVar10 == -1) || (*pbVar9 != uVar6)) {
    lVar15 = *(long *)(*(long *)(local_58 + 0x10) + 0x10);
    plVar14 = *(long **)(lVar15 + 0x50);
    if (*piVar10 == -1) {
      iVar4 = DAT_1018589d8 + 1;
      *piVar10 = DAT_1018589d8;
      DAT_1018589d8 = iVar4;
    }
    else {
      (**(code **)(*plVar14 + 0xd0))(plVar14);
    }
    FUN_1003461dc(lVar15);
    lVar11 = FUN_100345d90();
    if (*(long **)(lVar11 + 0x50) == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(**(long **)(lVar11 + 0x50) + 0x178))();
    }
    uVar7 = FUN_10034f06c();
    pcVar13 = "Effect_Lyra_Portal_Blocked_A";
    if (uVar6 == 0) {
      pcVar13 = "Effect_Lyra_Portal_A";
    }
    pcVar1 = "Effect_Lyra_Portal_Blocked_E";
    if (uVar6 == 0) {
      pcVar1 = "Effect_Lyra_Portal_E";
    }
    if (uVar7 != *(byte *)(lVar15 + 0x264)) {
      pcVar13 = pcVar1;
    }
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_c0 = 0;
    cVar2 = *pcVar13;
    local_b0 = 0x811c9dc5;
    while (cVar2 != '\0') {
      pcVar13 = pcVar13 + 1;
      local_b0 = (local_b0 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar13;
    }
    local_99 = 0xff;
    local_94 = DAT_101dc1cb8;
    local_8c = 0x3f8000003f800000;
    local_a4 = 0;
    uStack_9d = 0;
    local_98 = 0;
    local_84 = 0x3f800000;
    local_80 = 0;
    local_78 = 0;
    local_74 = 2;
    local_6a = 0;
    local_6c = 0x101;
    local_68 = 1;
    uStack_ac = 0xbf800000;
    local_a8 = *piVar10;
    local_b8 = uVar8;
    (**(code **)(*plVar14 + 0xa0))(plVar14,&local_d0);
    if ((uVar6 & 1) == 0) {
      uVar12 = FUN_1010a1520();
      lVar15 = FUN_1010a0e0c(uVar12,0,"*KindredSoundBalance*",0);
      FUN_1003b77c4(*(undefined4 *)(lVar15 + 0x300));
      (**(code **)(*plVar14 + 0x100))
                (plVar14,"Sound_Lyra_Ability_C_Available",0,1,0xffffffff,1,uVar8);
    }
    *pbVar9 = (byte)uVar6;
  }
  return;
}




void FUN_100444408(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s_pfx_id_10185d650;
  uVar2 = FUN_1004d2524(PTR_s_pfx_id_10185d650);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar3);
  *param_2 = *puVar4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100444474(long *param_1,long param_2,undefined4 *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined4 local_80;
  float local_7c;
  undefined4 uStack_78;
  undefined **local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  char *local_58;
  undefined1 local_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1003461dc(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10));
  lVar2 = FUN_100345d90();
  local_60 = 0xff;
  local_70 = &PTR_FUN_101499900;
  uStack_68 = 0;
  local_50 = 0;
  local_5c = *(undefined4 *)(lVar2 + 0x260);
  local_58 = "Lyra_Portal";
  FUN_1003a6ce4(&local_70,&local_48,2,0);
  if (local_48 != *(long *)(*(long *)(*param_1 + 0x10) + 0x10)) {
    lStack_40 = local_48;
  }
  uStack_78 = *(undefined4 *)(lStack_40 + 600);
  local_7c = *(float *)(lStack_40 + 0x2ec) + *(float *)(lStack_40 + 0x254);
  local_80 = *(undefined4 *)(lStack_40 + 0x250);
  lVar2 = *(long *)(param_2 + 0x18);
  do {
    if (lVar2 == 0) {
      bVar1 = 0;
LAB_100444564:
      uVar3 = FUN_10054e044(bVar1,&local_80,param_3,0);
      if ((uVar3 & 1) == 0) {
        *param_3 = *(undefined4 *)(param_2 + 0x250);
        fVar4 = *(float *)(param_2 + 0x254);
        param_3[1] = fVar4;
        param_3[2] = *(undefined4 *)(param_2 + 600);
        param_3[1] = *(float *)(param_2 + 0x2ec) + fVar4;
      }
      if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_100444564;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_1004445cc(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined **local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  char *local_48;
  undefined1 local_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1003461dc(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  local_50 = 0xff;
  local_60 = &PTR_FUN_101499900;
  uStack_58 = 0;
  local_40 = 0;
  local_4c = *(undefined4 *)(lVar1 + 0x260);
  local_48 = "Lyra_Portal";
  FUN_1003a6ce4(&local_60,&local_38,2,0);
  if (local_38 != *(long *)(*(long *)(*param_1 + 0x10) + 0x10)) {
    lStack_30 = local_38;
  }
  *param_2 = *(undefined4 *)(lStack_30 + 0x250);
  param_2[1] = *(undefined4 *)(lStack_30 + 0x254);
  param_2[2] = *(undefined4 *)(lStack_30 + 600);
  param_2[1] = 0x3fc00000;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004446ac(long param_1,long param_2)

{
  long lVar1;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  *(undefined4 *)(param_2 + 0x48) = 1;
  if (lVar1 != 0) {
    *(long *)(param_2 + 8) = lVar1;
  }
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x20;
  return;
}




void FUN_100444700(long param_1,long param_2)

{
  long lVar1;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  *(undefined4 *)(param_2 + 0x48) = 1;
  if (lVar1 != 0) {
    *(long *)(param_2 + 8) = lVar1;
  }
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x70;
  return;
}




void FUN_100444748(long param_1,long param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_1003461dc(lVar5);
  lVar3 = FUN_100345d90();
  uVar9 = *(undefined4 *)(lVar5 + 0x250);
  fVar6 = *(float *)(lVar5 + 0x254);
  uVar10 = *(undefined4 *)(lVar5 + 600);
  fVar8 = *(float *)(lVar5 + 0x2ec);
  *(undefined4 *)(param_2 + 0x48) = 1;
  if (lVar3 != 0) {
    *(long *)(param_2 + 8) = lVar3;
  }
  puVar4 = (ushort *)(param_2 + 0x58);
  uVar2 = *puVar4;
  uVar1 = *(undefined1 *)(param_2 + 0x5a);
  *puVar4 = uVar2 | 0x70;
  fVar7 = (float)FUN_1003dfe60(lVar3,3,5,0x19,0);
  *(undefined4 *)(param_2 + 0x14) = uVar9;
  *(float *)(param_2 + 0x18) = fVar8 + fVar6;
  *(undefined4 *)(param_2 + 0x1c) = uVar10;
  *(float *)(param_2 + 0x30) = fVar7 * fVar7;
  *(undefined1 *)(param_2 + 0x5a) = uVar1;
  *puVar4 = uVar2 & 0x3fff | 0x8070;
  return;
}




void FUN_100444804(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined **local_e0;
  long local_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  float fStack_c8;
  undefined4 local_c4;
  char *local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  byte local_86;
  long local_80;
  undefined1 auStack_78 [32];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_80);
  uVar3 = FUN_100345d90(*(undefined4 *)(local_80 + 0x308));
  lVar5 = *(long *)(*(long *)(local_80 + 0x10) + 0x10);
  uVar8 = *(undefined4 *)(lVar5 + 0x250);
  fVar6 = *(float *)(lVar5 + 0x254);
  uVar9 = *(undefined4 *)(lVar5 + 600);
  fVar7 = *(float *)(lVar5 + 0x2ec);
  local_e0 = &PTR_FUN_101499960;
  local_b8 = 0;
  uStack_a4 = 0x3f800000bf800000;
  local_ac = 0xc0000000bf800000;
  local_9c = 0xff;
  uStack_90 = 0xffffffff00000000;
  local_98 = 0xffffffff00000000;
  local_d0 = 1;
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  local_c0 = "Lyra_Portal";
  local_d8 = lVar5;
  local_b0 = (float)FUN_1003dfe60(uVar3,3,5,0x19,0);
  local_b0 = local_b0 * local_b0;
  local_86 = bVar1 | 0x14;
  local_88 = 0xd130;
  local_cc = uVar8;
  fStack_c8 = fVar7 + fVar6;
  local_c4 = uVar9;
  iVar2 = FUN_1003a6ce4(&local_e0,auStack_78,4,0);
  if (iVar2 == 0) {
    local_ec = *(undefined4 *)(lVar5 + 0x260);
    uStack_e8 = *(undefined4 *)(local_80 + 0x30c);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_108 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_108,&DAT_101e47d30);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100444974(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,8,0x19,0);
  return;
}




bool FUN_100444988(long param_1)

{
  long lVar1;
  
  if (DAT_101d23a38 != '\0') {
    FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
    lVar1 = FUN_100345d90();
    lVar1 = *(long *)(*(long *)(lVar1 + 0x58) + 0x68);
    if (lVar1 != 0) {
      return (*(byte *)(lVar1 + 0x239) & 0x1c) != 0;
    }
  }
  return false;
}




undefined8 FUN_1004449d4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184daa8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar1 = *(long *)(lVar1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return 1;
    }
    if ((*(int *)(lVar1 + 0x314) == DAT_101d3ecc0) && (*(int *)(lVar1 + 0x310) == 0)) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  return 0;
}




void FUN_100444a38(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




void FUN_100444a4c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 auVar5 [8];
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined ***pppuVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  int local_34c;
  undefined **local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined1 local_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  int local_324;
  undefined4 local_320;
  float local_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  float local_2d8;
  undefined8 local_2d4;
  undefined1 local_2cc [8];
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined4 local_2b4;
  undefined8 local_280;
  undefined **local_278;
  long local_270;
  byte local_268;
  undefined4 local_264;
  float local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  float local_248;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined1 local_234;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined2 local_220;
  byte local_21e;
  undefined **local_218;
  long local_210;
  byte local_208;
  undefined4 local_204;
  float local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float local_1e8;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined1 local_1d4;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined2 local_1c0;
  byte local_1be;
  long local_1b8;
  undefined **local_1b0 [3];
  undefined1 local_198;
  undefined4 local_194;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  float local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  long local_130 [16];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_1b8);
  lVar10 = *(long *)(*(long *)(local_1b8 + 0x10) + 0x10);
  FUN_1003461dc(lVar10);
  lVar7 = FUN_100345d90();
  uVar18 = *(undefined4 *)(lVar10 + 0x250);
  uVar19 = *(undefined4 *)(lVar10 + 600);
  fVar20 = *(float *)(lVar10 + 0x2ec) + *(float *)(lVar10 + 0x254);
  local_218 = &PTR_FUN_101499960;
  local_210 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1dc = 0x3f800000bf800000;
  local_1e4 = 0xc0000000bf800000;
  local_1d4 = 0xff;
  local_1cc = 0xffffffff;
  local_1c4 = 0xffffffff;
  local_208 = local_208 & 0xfc | 1;
  lVar8 = FUN_1003e10f0();
  bVar4 = *(byte *)(lVar8 + 0xe5);
  local_1d0 = 1;
  if (lVar7 != 0) {
    local_210 = lVar7;
  }
  local_1e8 = (float)FUN_1003dfe60(lVar7,0,4,0x19,0);
  local_1e8 = local_1e8 * local_1e8;
  local_1be = local_1be & 0xe0 | bVar4 | 0x14;
  local_1c0 = 0xc150;
  local_204 = uVar18;
  local_200 = fVar20;
  local_1fc = uVar19;
  uVar6 = FUN_1003a6ce4(&local_218,local_130,0x10,0);
  fVar15 = (float)FUN_1003dfe60(lVar7,0,9,0x19,0);
  fVar21 = *(float *)(*(long *)(lVar7 + 0x40) + 0xec);
  fVar16 = (float)FUN_1003dfe60(lVar7,0,10,0x19,0);
  if ((int)uVar6 < 1) {
    local_34c = 0;
  }
  else {
    local_34c = 0;
    uVar12 = (ulong)uVar6;
    plVar14 = local_130;
    do {
      lVar8 = *(long *)(*plVar14 + 0x40);
      fVar17 = *(float *)(lVar8 + 0x38) +
               *(float *)(lVar8 + 0xec) * (*(float *)(lVar8 + 0x254) + 1.0);
      NEON_fminnm(fVar17 + fVar17 * *(float *)(lVar8 + 0x1a0),DAT_101e94320);
      if (*(float *)(lVar8 + 0x308) < DAT_101e94260) {
        uVar1 = *(undefined4 *)(*plVar14 + 0x260);
        fVar17 = *(float *)(local_1b8 + 0x328);
        uVar2 = *(undefined4 *)(local_1b8 + 0x30c);
        uVar3 = *(undefined4 *)(lVar10 + 0x260);
        local_2f0 = (undefined **)CONCAT44(uVar1,*(undefined4 *)(lVar7 + 0x260));
        local_2e8 = FUN_100345d90();
        local_2e0 = FUN_100345d90(uVar1);
        local_2d4 = 0;
        local_2cc = (undefined1  [8])0x0;
        local_2c4 = 0;
        local_2bc = 0xeeffffffff;
        local_2d8 = fVar17 * (fVar15 + fVar21 * fVar16);
        local_2c0 = uVar2;
        local_2b4 = uVar3;
        FUN_10010cbe4(&local_2f0);
        local_194 = *(undefined4 *)(lVar7 + 0x260);
        local_190 = *(undefined4 *)(*plVar14 + 0x260);
        local_184 = *(float *)(local_1b8 + 0x328) + 0.1;
        local_174 = *(undefined4 *)(lVar10 + 0x260);
        local_1b0[1] = (undefined **)0x0;
        local_1b0[2] = (undefined **)0x0;
        local_198 = 0;
        local_1b0[0] = &PTR_FUN_101496b18;
        local_18c = DAT_1018589d8;
        local_188 = 0;
        local_180 = 1;
        local_17c = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        local_160 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_188 = FUN_1003d4e0c(PTR_s_Buff_Lyra_SpiritFlame_Heal_10185cb88);
        (*(code *)local_1b0[0][4])(local_1b0,&DAT_101e47d30);
        local_34c = local_34c + 1;
      }
      plVar14 = plVar14 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  local_278 = &PTR_FUN_101499960;
  local_258 = 0;
  uStack_250 = 0;
  uStack_23c = 0x3f800000bf800000;
  local_244 = 0xc0000000bf800000;
  local_234 = 0xff;
  local_22c = 0xffffffff;
  local_224 = 0xffffffff;
  local_268 = local_268 & 0xfc | 1;
  lVar8 = FUN_1003e10f0();
  bVar4 = *(byte *)(lVar8 + 0xe5);
  local_230 = 1;
  local_270 = lVar7;
  local_248 = (float)FUN_1003dfe60(lVar7,0,4,0x19,0);
  local_248 = local_248 * local_248;
  local_21e = local_21e & 0xe0 | bVar4 | 0x14;
  local_220 = 0xc120;
  local_264 = uVar18;
  local_260 = fVar20;
  local_25c = uVar19;
  uVar6 = FUN_1003a6ce4(&local_278,local_1b0,0x10,0);
  if (0 < (int)uVar6) {
    uVar12 = (ulong)uVar6;
    pppuVar11 = local_1b0;
    do {
      lVar8 = local_1b8;
      ppuVar9 = *pppuVar11;
      fVar15 = *(float *)(ppuVar9 + 0x4a) - *(float *)(lVar10 + 0x250);
      fVar20 = *(float *)(ppuVar9 + 0x4b) - *(float *)(lVar10 + 600);
      fVar16 = fVar15 * fVar15 + fVar20 * fVar20;
      if (1e-08 <= fVar16) {
        fVar16 = SQRT(fVar16);
        local_280 = CONCAT44(fVar20 / fVar16,fVar15 / fVar16);
      }
      else {
        local_280 = DAT_101873a50;
      }
      uVar18 = *(undefined4 *)(lVar7 + 0x260);
      uVar19 = *(undefined4 *)(ppuVar9 + 0x4c);
      uVar13 = **(undefined8 **)(local_1b8 + 0x40);
      fVar20 = (float)FUN_1003dfe60(lVar7,0,8,0x19,0);
      FUN_1003462a0(*(float *)(lVar8 + 0x328) * fVar20,&local_2f0,uVar18,uVar19,1,2,&local_280,
                    uVar13,0,1);
      FUN_10010cbe0(&local_2f0);
      local_32c = *(undefined4 *)(lVar7 + 0x260);
      uStack_328 = *(undefined4 *)(*pppuVar11 + 0x4c);
      local_31c = *(float *)(local_1b8 + 0x328) + 0.1;
      uStack_30c = *(undefined4 *)(lVar10 + 0x260);
      local_340 = 0;
      uStack_338 = 0;
      local_330 = 0;
      local_348 = &PTR_FUN_101496b18;
      local_324 = DAT_1018589d8;
      local_320 = 0;
      local_318 = 1;
      uStack_314 = 0;
      local_310 = 0;
      local_308 = 0;
      local_300 = 0;
      local_2f8 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_320 = FUN_1003d4e0c(PTR_s_Buff_Lyra_SpiritFlame_Harm_10185cb90);
      (*(code *)local_348[4])(&local_348,&DAT_101e47d30);
      uVar12 = uVar12 - 1;
      pppuVar11 = pppuVar11 + 1;
    } while (uVar12 != 0);
  }
  fVar20 = (float)FUN_1003dfe60(lVar7,0,7,0x19,0);
  fVar20 = fVar20 * (float)(int)(uVar6 + local_34c);
  fVar15 = (float)FUN_1003dfe60(lVar7,0,6,0x19,0);
  if (fVar20 <= fVar15) {
    fVar20 = fVar15;
  }
  lVar8 = *(long *)(lVar10 + 0x40);
  fVar15 = *(float *)(lVar8 + 0x38) + *(float *)(lVar8 + 0xec) * (*(float *)(lVar8 + 0x254) + 1.0);
  fVar16 = (float)NEON_fminnm(fVar15 + fVar15 * *(float *)(lVar8 + 0x1a0),DAT_101e94320);
  fVar15 = DAT_101e94260;
  if (DAT_101e94260 <= fVar16) {
    fVar15 = fVar16;
  }
  fVar21 = *(float *)(local_1b8 + 0x328);
  fVar16 = (float)FUN_1003dfe60(lVar7,0,5,0x19,0);
  fVar16 = (fVar21 * fVar20 * fVar15) / fVar16;
  if (*(float *)(lVar8 + 0x308) < fVar16) {
    local_2e8 = 0;
    local_2e0 = 0;
    local_2d8 = (float)((uint)local_2d8 & 0xffffff00);
    local_2f0 = &PTR_FUN_101496cd8;
    local_2d4 = CONCAT44(*(undefined4 *)(local_1b8 + 0x30c),*(undefined4 *)(lVar10 + 0x260));
    FUN_100496580(&local_2f0,&DAT_101e47d30);
  }
  auVar5 = local_2cc;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = (float)((uint)local_2d8 & 0xffffff00);
  local_2f0 = &PTR_FUN_101497218;
  local_2d4 = (ulong)*(uint *)(lVar10 + 0x260);
  local_2cc._4_2_ = 0x100;
  local_2cc._0_4_ = -fVar16;
  local_2cc[7] = auVar5[7];
  local_2cc[6] = 0;
  FUN_100496328(&local_2f0,&DAT_101e47d30);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_b0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100445130(long param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_1003461dc(lVar3);
  lVar2 = FUN_100345d90();
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    iVar1 = FUN_10045fb10(lVar5);
    if (0 < iVar1) {
      iVar6 = 0;
      iVar4 = 0;
      while( true ) {
        lVar5 = FUN_10045fa7c(lVar5,iVar4);
        fVar12 = *(float *)(*(long *)(lVar5 + 0x40) + 0x308);
        lVar5 = FUN_10045fa7c(*(undefined8 *)(param_1 + 0x38),iVar4);
        lVar5 = *(long *)(lVar5 + 0x40);
        fVar7 = *(float *)(lVar5 + 0x38) +
                *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0);
        NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar5 + 0x1a0),DAT_101e94320);
        if (fVar12 < DAT_101e94260) {
          iVar6 = iVar6 + 1;
        }
        if (iVar1 + -1 == iVar4) break;
        lVar5 = *(long *)(param_1 + 0x38);
        iVar4 = iVar4 + 1;
      }
      if (iVar6 != 0) {
        lVar3 = *(long *)(lVar3 + 0x40);
        fVar7 = *(float *)(lVar3 + 0x38) +
                *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
        fVar12 = (float)NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
        fVar7 = DAT_101e94260;
        if (DAT_101e94260 <= fVar12) {
          fVar7 = fVar12;
        }
        fVar13 = *(float *)(lVar3 + 0x308);
        fVar12 = (float)FUN_1003dfe60(lVar2,0,5,0x19,0);
        fVar8 = (float)FUN_1003dfe60(lVar2,0,7,0x19,0);
        fVar9 = (float)FUN_1003dfe60(lVar2,0,9,0x19,0);
        fVar14 = *(float *)(*(long *)(lVar2 + 0x40) + 0xec);
        fVar10 = (float)FUN_1003dfe60(lVar2,0,10,0x19,0);
        fVar11 = (float)FUN_1003dfe60(lVar2,0,0x11,0x19,0);
        *param_3 = (fVar13 * fVar12 * fVar11 * (fVar9 + fVar14 * fVar10)) /
                   ((float)iVar6 * fVar8 * fVar7);
      }
    }
  }
  return;
}




void FUN_100445318(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10045fb10();
    return;
  }
  return;
}




void FUN_100445328(long param_1)

{
  FUN_10045fa7c(*(undefined8 *)(param_1 + 0x38));
  return;
}




void FUN_100445330(long param_1,long param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  fVar2 = (float)FUN_1003dfe60(uVar1,0,0xb,0x19,0);
  *param_3 = fVar2;
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar3 = (float)FUN_1003dfe60(uVar1,0,0xc,0x19,0);
    *param_3 = fVar3 * fVar2;
  }
  return;
}




void FUN_1004453b8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_100432d40();
  uVar1 = FUN_100345d90();
  *param_2 = uVar1;
  *param_3 = "CenterBody";
  return;
}




void FUN_1004453f0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,5,3,0x19,0);
  return;
}




void FUN_100445404(long *param_1,float *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 local_38 [2];
  
  uVar3 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar5 = (float)FUN_1003dfe60(uVar3,2,3,0x19,0);
  *param_2 = fVar5;
  puVar1 = PTR_s_Buff_Malene_Talent_TalentC_10185cee0;
  lVar4 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90c44;
    fVar5 = (float)FUN_1003dfee8(uVar3,local_38,0,9);
    *param_2 = *param_2 * fVar5;
  }
  *param_3 = 0xbf800000;
  return;
}




void FUN_1004454b8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x41800000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8020;
  return;
}




void FUN_100445538(long *param_1)

{
  undefined8 uVar1;
  undefined4 local_18 [2];
  
  uVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  local_18[0] = DAT_101d90c44;
  FUN_1003dfee8(uVar1,local_18,2,9);
  return;
}




void FUN_100445578(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




void FUN_10044558c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,5,0x19,0);
  return;
}




void FUN_1004455a0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x41800000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8020;
  return;
}




void FUN_100445620(undefined8 param_1)

{
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  local_54 = *(undefined4 *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_70 = &PTR_FUN_101496b18;
  local_4c = DAT_1018589d8;
  local_44 = 0x1bf800000;
  local_28 = 0;
  local_34 = 0;
  local_3c = 0;
  local_20 = DAT_101dc0b88;
  DAT_1018589d8 = DAT_1018589d8 + 1;
  uStack_50 = local_54;
  local_48 = FUN_1003d4e0c(PTR_s_Buff_Ozo_HealAmp_10185cc08);
  FUN_10049639c(&local_70,&DAT_101e47d30);
  return;
}




undefined4 FUN_1004456c4(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_1004456d8(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_1004456e4(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long local_28;
  
  puVar1 = PTR_s_shownBounceModal_10185d658;
  uVar2 = FUN_1004d2524(PTR_s_shownBounceModal_10185d658);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  pcVar4 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  if (*pcVar4 == '\0') {
    FUN_10042ecbc(param_1,&local_28);
    FUN_1004457b4(*(undefined8 *)(*(long *)(local_28 + 0x10) + 0x10),4,1,1);
    *pcVar4 = '\x01';
  }
  else {
    FUN_10042ecbc(param_1,&local_28);
    if (*(float *)(local_28 + 0x318) <= 0.25) {
      FUN_1004458ac(*(undefined8 *)(*(long *)(local_28 + 0x10) + 0x10),4,1);
    }
  }
  return;
}




void FUN_1004457b4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_1004457ec:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x5d1d082f), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1004457ec;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1004458ac(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_1004458e0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x6f0608f1), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1004458e0;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10044599c(undefined8 param_1)

{
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  FUN_1004459cc(*(undefined8 *)(*(long *)(local_18 + 0x10) + 0x10));
  return;
}




void FUN_1004459cc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0xffff0000;
  lVar2 = param_1;
LAB_1004459f0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x4ad10727), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1004459f0;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




ushort * FUN_100445aa0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined ***)puVar3 = &PTR_FUN_101498668;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_100445b84(undefined8 param_1)

{
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  long local_20;
  long local_18;
  
  FUN_100439ae4(param_1,&local_18,&local_20);
  if (*(int *)(local_20 + 0x260) == *(int *)(local_18 + 0x308)) {
    local_2c = *(undefined4 *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260);
    uStack_28 = *(undefined4 *)(local_18 + 0x30c);
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_48 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_48,&DAT_101e47d30);
  }
  return;
}




void FUN_100445bf8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,10,0x19,0);
  return;
}




undefined4 FUN_100445c0c(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = (float)FUN_1003dfe60(param_1,3,0xc,4,0);
  fVar2 = (float)FUN_1003dfe60(param_1,3,0xc,0x19,0);
  uVar3 = FUN_1003dfe60(param_1,3,0xd,0x19,0);
  uVar3 = NEON_fminnm(fVar2 + fVar1,uVar3);
  return uVar3;
}




void FUN_100445c80(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,4,0x19,0);
  return;
}




void FUN_100445c94(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined **local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_8c;
  char *local_88;
  undefined1 local_80;
  undefined4 local_74;
  long local_70;
  long alStack_68 [4];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    FUN_10042fb4c(param_1,&local_70,&local_74);
    lVar5 = *(long *)(*(long *)(local_70 + 0x10) + 0x10);
    lVar4 = *(long *)(lVar5 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    iVar1 = FUN_1003e2b0c(lVar4,local_74);
    iVar2 = FUN_1003e2b0c(lVar4,DAT_101d2ca50);
    if (iVar1 == iVar2) {
      local_90 = 0xff;
      local_a0 = &PTR_FUN_101499900;
      uStack_98 = 0;
      local_80 = 0;
      local_8c = *(undefined4 *)(lVar5 + 0x260);
      local_88 = "PetalMinion";
      uVar3 = FUN_1003a6ce4(&local_a0,alStack_68,4,0);
      if (uVar3 != 0) {
        uVar6 = (ulong)uVar3;
        plVar7 = alStack_68;
        do {
          local_ac = *(undefined4 *)(*plVar7 + 0x260);
          local_c0 = 0;
          uStack_b8 = 0;
          local_b0 = 0;
          local_c8 = &PTR_FUN_101497138;
          uStack_a8 = 1;
          FUN_100497808(&local_c8,&DAT_101e47d30);
          uVar6 = uVar6 - 1;
          plVar7 = plVar7 + 1;
        } while (uVar6 != 0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100445df8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined **local_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined1 local_6e0;
  undefined4 local_6dc;
  undefined4 uStack_6d8;
  undefined **local_6d0;
  undefined8 uStack_6c8;
  undefined1 local_6c0;
  undefined4 local_6bc;
  char *local_6b8;
  undefined1 local_6b0;
  undefined4 local_6a4;
  long local_6a0;
  long alStack_698 [200];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    FUN_10042fb4c(param_1,&local_6a0,&local_6a4);
    lVar5 = *(long *)(*(long *)(local_6a0 + 0x10) + 0x10);
    lVar4 = *(long *)(lVar5 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    iVar1 = FUN_1003e2b0c(lVar4,local_6a4);
    iVar2 = FUN_1003e2b0c(lVar4,DAT_101d2ca50);
    if (iVar1 == iVar2) {
      local_6c0 = 0xff;
      local_6d0 = &PTR_FUN_101499900;
      uStack_6c8 = 0;
      local_6b0 = 0;
      local_6bc = *(undefined4 *)(lVar5 + 0x260);
      local_6b8 = "PetalSeed";
      uVar3 = FUN_1003a6ce4(&local_6d0,alStack_698,200,0);
      if (uVar3 != 0) {
        uVar6 = (ulong)uVar3;
        plVar7 = alStack_698;
        do {
          local_6dc = *(undefined4 *)(*plVar7 + 0x260);
          local_6f0 = 0;
          uStack_6e8 = 0;
          local_6e0 = 0;
          local_6f8 = &PTR_FUN_101497138;
          uStack_6d8 = 1;
          FUN_100497808(&local_6f8,&DAT_101e47d30);
          uVar6 = uVar6 - 1;
          plVar7 = plVar7 + 1;
        } while (uVar6 != 0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100445f64(undefined8 param_1)

{
  FUN_100445df8();
  FUN_100445c94(param_1);
  return;
}




void FUN_100445f88(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  int local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  puVar2 = PTR_s_Buff_Petal_Yummy_10185aeb8;
  lVar3 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
  local_7c = *(int *)(local_40 + 0x10);
  if ((local_7c == *(int *)(lVar3 + 0x260)) && ((*(byte *)(local_40 + 0xc) >> 2 & 1) != 0)) {
    uVar1 = *(undefined4 *)(*(long *)(local_40 + 0x20) + 0x260);
    local_6c = FUN_1003df710(lVar3,8,1);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_98 = &PTR_FUN_101496b18;
    local_74 = DAT_1018589d8;
    local_68 = 1;
    local_50 = 0;
    local_5c = 0;
    local_64 = 0;
    local_48 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    uStack_78 = uVar1;
    local_70 = FUN_1003d4e0c(puVar2);
    FUN_10049639c(&local_98,&DAT_101e47d30);
  }
  return;
}




ushort * FUN_100446070(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_1014985a8;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0x40000002d;
    *(undefined4 *)(&DAT_101e48168 + lVar1) = 0;
    (&DAT_101e4816c)[lVar1] = 0;
    *(undefined4 *)(&DAT_101e48170 + lVar1) = 1;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_100446174(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined **local_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined1 local_740;
  undefined4 local_73c;
  undefined4 uStack_738;
  uint local_734;
  undefined1 local_730;
  undefined **local_728;
  undefined8 uStack_720;
  float local_718;
  float fStack_714;
  float local_710;
  undefined4 local_70c;
  undefined1 local_708;
  undefined **local_700;
  undefined8 uStack_6f8;
  undefined1 local_6f0;
  undefined4 local_6ec;
  char *local_6e8;
  undefined1 local_6e0;
  long local_6d8;
  long local_6d0 [200];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_6d8);
    lVar5 = *(long *)(*(long *)(local_6d8 + 0x10) + 0x10);
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x88) & 0x1f;
    if (((int)uVar3 == 0x1f) || (1 < *(ushort *)(lVar5 + uVar3 * 0x38 + 0x90) - 3)) {
      local_6f0 = 0xff;
      local_700 = &PTR_FUN_101499900;
      uStack_6f8 = 0;
      local_6e0 = 0;
      local_6ec = *(undefined4 *)(lVar5 + 0x260);
      local_6e8 = "PetalSeed";
      fVar12 = *(float *)(lVar5 + 0x250);
      fVar13 = *(float *)(lVar5 + 600);
      fVar14 = *(float *)(lVar5 + 0x2ec) + *(float *)(lVar5 + 0x254);
      local_728 = &PTR_FUN_101499a08;
      uStack_720 = 0;
      local_70c = 200;
      local_708 = 0;
      local_718 = fVar12;
      fStack_714 = fVar14;
      local_710 = fVar13;
      uVar1 = FUN_1003a6ce4(&local_700,local_6d0,200,&local_728);
      uVar2 = FUN_1003e1e98(lVar5);
      if (uVar2 < 3 && uVar1 != 0) {
        uVar3 = 0;
        do {
          lVar6 = local_6d0[uVar3];
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
          if ((((int)uVar4 == 0x1f) || (1 < *(ushort *)(lVar6 + uVar4 * 0x38 + 0x90) - 3)) &&
             (fVar11 = *(float *)(lVar6 + 0x250) - fVar12,
             fVar10 = *(float *)(lVar6 + 0x2ec) + (*(float *)(lVar6 + 0x254) - fVar14),
             fVar8 = *(float *)(lVar6 + 600) - fVar13, fVar9 = (float)FUN_1003df710(lVar5,9,1),
             fVar11 * fVar11 + fVar8 * fVar8 + fVar10 * fVar10 <= fVar9 * fVar9)) {
            lVar7 = *(long *)(lVar6 + 0x18);
            while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184daa8))) {
              lVar7 = *(long *)(lVar7 + 0x20);
            }
            FUN_1003a4e5c(&local_758,PTR_s_Buff_PetalSeed_Perk_MinionSpawnD_10185c720);
            lVar7 = *(long *)(lVar7 + 0x28);
            if (lVar7 == 0) {
LAB_100446374:
              FUN_100101b14(lVar6,0,lVar6);
              break;
            }
            while ((*(int *)(lVar7 + 0x314) != (int)local_758 || (*(int *)(lVar7 + 0x310) != 0))) {
              lVar7 = *(long *)(lVar7 + 0x350);
              if (lVar7 == 0) goto LAB_100446374;
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar1);
      }
      if (uVar2 != *(ushort *)(local_6d8 + 0x344)) {
        local_73c = *(undefined4 *)(lVar5 + 0x260);
        uStack_738 = *(undefined4 *)(local_6d8 + 0x30c);
        local_750 = 0;
        uStack_748 = 0;
        local_740 = 0;
        local_758 = &PTR_FUN_1014972c0;
        local_730 = 1;
        local_734 = uVar2;
        FUN_1004968dc(&local_758,&DAT_101e47d30);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100446414(undefined8 param_1)

{
  long lVar1;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined1 local_1e;
  long local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_18);
    lVar1 = *(long *)(*(long *)(local_18 + 0x10) + 0x10);
    local_24 = *(undefined4 *)(*(long *)(lVar1 + 0x40) + 0x38);
    local_2c = *(undefined4 *)(lVar1 + 0x260);
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_48 = &PTR_FUN_101497218;
    uStack_28 = 0;
    local_20 = 0x101;
    local_1e = 0;
    FUN_100496328(&local_48,&DAT_101e47d30);
  }
  return;
}




void FUN_100446490(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  int local_14c;
  undefined1 local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  int local_114;
  undefined1 local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  float local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  float local_74;
  undefined1 local_70;
  long local_68;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_68);
    lVar3 = *(long *)(*(long *)(local_68 + 0x10) + 0x10);
    lVar2 = *(long *)(lVar3 + 0x40);
    fVar4 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
    fVar5 = (float)NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
    fVar4 = DAT_101e94260;
    if (DAT_101e94260 <= fVar5) {
      fVar4 = fVar5;
    }
    if (fVar4 != 0.0) {
      fVar7 = *(float *)(lVar2 + 0x308);
      fVar5 = (float)FUN_1003e00a8(lVar3,0,2,9,1);
      fVar6 = (float)FUN_1003e00a8(lVar3,0,3,9,1);
      local_84 = *(undefined4 *)(lVar3 + 0x260);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_a0 = &PTR_FUN_1014971e0;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_70 = 1;
      local_74 = (float)(int)fVar5;
      FUN_1004969f4(&local_a0,&DAT_101e47d30);
      local_b4 = *(undefined4 *)(lVar3 + 0x260);
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_d0 = &PTR_FUN_101497218;
      uStack_b0 = 0;
      local_a8 = 0x101;
      local_a6 = 0;
      local_ac = ((float)(int)fVar5 * fVar7) / fVar4;
      FUN_100496328(&local_d0,&DAT_101e47d30);
      uVar1 = *(undefined4 *)(lVar3 + 0x260);
      local_dc = FUN_1003e00a8(lVar3,0,4,9,1);
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      local_108 = &PTR_FUN_1014971e0;
      local_e8 = 0x4ffffffff;
      local_e0 = 0;
      local_d8 = 1;
      local_ec = uVar1;
      FUN_1004969f4(&local_108,&DAT_101e47d30);
      local_124 = *(undefined4 *)(lVar3 + 0x260);
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      local_140 = &PTR_FUN_1014971e0;
      local_120 = 0x7ffffffff;
      local_118 = 0;
      local_110 = 1;
      local_114 = (int)fVar6;
      FUN_1004969f4(&local_140,&DAT_101e47d30);
      local_15c = *(undefined4 *)(lVar3 + 0x260);
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      local_178 = &PTR_FUN_1014971e0;
      local_158 = 0x8ffffffff;
      local_150 = 0;
      local_148 = 1;
      local_14c = (int)fVar6;
      FUN_1004969f4(&local_178,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_1004466b8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_120;
  float local_11c;
  undefined4 uStack_118;
  undefined **local_110;
  long local_108;
  undefined1 local_100;
  undefined4 local_fc;
  float fStack_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined2 local_b8;
  byte local_b6;
  long local_b0;
  long local_a8 [6];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_b0);
  lVar4 = *(long *)(*(long *)(local_b0 + 0x10) + 0x10);
  local_110 = &PTR_FUN_101499960;
  local_108 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_d4 = 0x3f800000bf800000;
  local_dc = 0xc0000000bf800000;
  local_cc = 0xff;
  local_c4 = 0xffffffff;
  local_bc = 0xffffffff;
  local_100 = 1;
  lVar2 = FUN_1003e10f0();
  local_b6 = *(byte *)(lVar2 + 0xe5);
  lVar2 = *(long *)(*(long *)(local_b0 + 0x10) + 0x10);
  if (lVar2 != 0) {
    local_108 = lVar2;
  }
  local_c8 = 1;
  lVar2 = *(long *)(*(long *)(local_b0 + 0x10) + 0x10);
  uVar8 = *(undefined4 *)(lVar2 + 0x250);
  fVar6 = *(float *)(lVar2 + 0x254);
  uVar9 = *(undefined4 *)(lVar2 + 600);
  fVar7 = *(float *)(lVar2 + 0x2ec);
  local_e0 = (float)FUN_1003e00a8(lVar4,0,0x10,9,1);
  local_e0 = local_e0 * local_e0;
  local_b6 = local_b6 | 0x14;
  local_b8 = 0xc120;
  local_fc = uVar8;
  fStack_f8 = fVar7 + fVar6;
  local_f4 = uVar9;
  uVar1 = FUN_1003a6ce4(&local_110,local_a8,6,0);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      for (lVar2 = *(long *)(local_a8[uVar5] + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
        if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184daa8) {
          uVar3 = FUN_1003ba8f4(lVar2,PTR_s_Buff_PetalSeed_LandMine_Expiry_10185aeb0);
          if ((uVar3 & 1) == 0) {
            local_120 = *(undefined4 *)(lVar4 + 0x250);
            uStack_118 = *(undefined4 *)(lVar4 + 600);
            local_11c = *(float *)(lVar4 + 0x2ec) + *(float *)(lVar4 + 0x254);
            FUN_100101b1c(lVar4,1,&local_120);
          }
          break;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100446898(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  float local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  float local_44;
  undefined1 local_40;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_38);
    lVar2 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    lVar1 = *(long *)(lVar2 + 0x40);
    fVar3 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
    fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
    fVar3 = DAT_101e94260;
    if (DAT_101e94260 <= fVar4) {
      fVar3 = fVar4;
    }
    if (fVar3 != 0.0) {
      fVar5 = *(float *)(lVar1 + 0x308);
      fVar4 = (float)FUN_1003e00a8(lVar2,0,5,9,1);
      local_50 = 0xffffffff;
      local_44 = (float)(int)fVar4;
      fVar5 = local_44 * fVar5;
      local_54 = *(undefined4 *)(lVar2 + 0x260);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_70 = &PTR_FUN_1014971e0;
      local_48 = 0;
      local_40 = 1;
      FUN_1004969f4(&local_70,&DAT_101e47d30);
      local_84 = *(undefined4 *)(lVar2 + 0x260);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_a0 = &PTR_FUN_101497218;
      uStack_80 = 0;
      local_78 = 0x101;
      local_76 = 0;
      local_7c = fVar5 / fVar3;
      FUN_100496328(&local_a0,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_1004469cc(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_68 [2];
  long local_60;
  long local_58;
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  FUN_10042e1f0(param_1,&local_58,&local_60);
  lVar6 = local_60;
  lVar5 = *(long *)(*(long *)(local_58 + 0x10) + 0x10);
  if (*(int *)(local_60 + 0x10) != *(int *)(lVar5 + 0x260)) {
    return;
  }
  if (*(int *)(local_60 + 0x18) == *(int *)(local_60 + 0x10)) {
    return;
  }
  if (*(int *)(local_60 + 8) == 3) {
    return;
  }
  fVar7 = (float)FUN_1003df710(lVar5,9,1);
  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x2f4) & 1) == 0) {
    fVar7 = (float)FUN_1003df710(lVar5,10,1);
  }
  fVar11 = *(float *)(lVar6 + 0x54);
  uVar8 = FUN_100032228();
  lVar4 = local_58;
  lVar6 = local_58 + 0x168;
  uVar1 = FUN_1004d2524("lastGainedBarrier");
  uVar2 = FUN_100015208("lastGainedBarrier",uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x10))(lVar6,uVar2);
  *puVar3 = uVar8;
  lVar6 = *(long *)(*(long *)(local_60 + 0x20) + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  for (lVar4 = *(long *)(lVar6 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
    if ((*(int *)(lVar4 + 0x314) == DAT_101d3e6bc) && (*(int *)(lVar4 + 0x310) == 0)) {
      return;
    }
  }
  FUN_1003a4e5c(local_68,PTR_s_Buff_Turret_Invulnerable_10185c2b8);
  for (lVar6 = *(long *)(lVar6 + 0x28); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
    if ((*(int *)(lVar6 + 0x314) == local_68[0]) && (*(int *)(lVar6 + 0x310) == 0)) {
      return;
    }
  }
  fVar11 = fVar11 * fVar7;
  if (fVar11 <= 1.0) {
    fVar11 = 1.0;
  }
  lVar6 = FUN_100446c78(*(undefined4 *)(local_58 + 0x30c));
  if (lVar6 == 0) {
    lVar6 = FUN_100446d10(fVar11,lVar5,lVar5,5,*(undefined4 *)(local_58 + 0x30c));
    if (lVar6 == 0) {
      uVar1 = 0;
      goto LAB_100446c10;
    }
  }
  else {
    fVar10 = *(float *)(lVar6 + 0x38);
    lVar4 = *(long *)(lVar5 + 0x40);
    fVar7 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
    fVar9 = (float)NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
    fVar7 = DAT_101e94260;
    if (DAT_101e94260 <= fVar9) {
      fVar7 = fVar9;
    }
    fVar9 = (float)FUN_1003df710(lVar5,8,1);
    if (fVar7 * fVar9 <= fVar10 + fVar11) {
      fVar11 = fVar7 * fVar9 - fVar10;
    }
    if (0.0 < fVar11) {
      FUN_100446ddc(lVar5,lVar5,lVar6);
    }
  }
  uVar1 = *(undefined4 *)(lVar6 + 0x38);
LAB_100446c10:
  uVar8 = FUN_1004d2524("currentMaxFortifiedHealth");
  uVar2 = FUN_100015208("currentMaxFortifiedHealth",uVar8,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(local_58 + 0x168) + 0x10))(local_58 + 0x168,uVar2);
  *puVar3 = uVar1;
  return;
}




void FUN_100446c78(int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_228 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_228,0x40,DAT_101867410,0);
  if (0 < (int)uVar1) {
    uVar3 = (ulong)uVar1;
    plVar4 = local_228;
    do {
      lVar2 = *plVar4;
      if (*(int *)(lVar2 + 0x3c) == param_1) goto LAB_100446ce4;
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar2 = 0;
LAB_100446ce4:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar2);
}




long FUN_100446d10(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long lVar1;
  float fVar2;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  float local_5c;
  undefined2 local_58;
  undefined1 local_56;
  
  lVar1 = FUN_1010a0298(param_3,DAT_101867410);
  fVar2 = (float)param_1;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x34) = param_4;
    *(float *)(lVar1 + 0x38) = fVar2;
    *(undefined4 *)(lVar1 + 0x3c) = param_5;
    local_64 = *(undefined4 *)(param_3 + 0x260);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_80 = &PTR_FUN_101497218;
    local_58 = 0x100;
    local_56 = 0;
    uStack_60 = param_4;
    local_5c = fVar2;
    FUN_100496328(&local_80,&DAT_101e47d30);
  }
  if (0.0 < fVar2) {
    FUN_100473d44(param_1,6,param_2,param_3);
  }
  return lVar1;
}




void FUN_100446ddc(float param_1,undefined8 param_2,long param_3,long param_4)

{
  float fVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  float local_4c;
  undefined2 local_48;
  undefined1 local_46;
  
  local_54 = *(undefined4 *)(param_3 + 0x260);
  uStack_50 = *(undefined4 *)(param_4 + 0x34);
  fVar1 = -*(float *)(param_4 + 0x38);
  if (-*(float *)(param_4 + 0x38) <= param_1) {
    fVar1 = param_1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_70 = &PTR_FUN_101497218;
  local_48 = 0x100;
  local_46 = 0;
  local_4c = fVar1;
  FUN_100496328(&local_70,&DAT_101e47d30);
  *(float *)(param_4 + 0x38) = *(float *)(param_4 + 0x38) + fVar1;
  if (0.0 < fVar1) {
    FUN_100473d44(fVar1,6,param_2,param_3);
  }
  return;
}




void thunk_FUN_1004469cc(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int aiStack_68 [2];
  long lStack_60;
  long lStack_58;
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  FUN_10042e1f0(param_1,&lStack_58,&lStack_60);
  lVar6 = lStack_60;
  lVar5 = *(long *)(*(long *)(lStack_58 + 0x10) + 0x10);
  if (*(int *)(lStack_60 + 0x10) != *(int *)(lVar5 + 0x260)) {
    return;
  }
  if (*(int *)(lStack_60 + 0x18) == *(int *)(lStack_60 + 0x10)) {
    return;
  }
  if (*(int *)(lStack_60 + 8) == 3) {
    return;
  }
  fVar7 = (float)FUN_1003df710(lVar5,9,1);
  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x2f4) & 1) == 0) {
    fVar7 = (float)FUN_1003df710(lVar5,10,1);
  }
  fVar11 = *(float *)(lVar6 + 0x54);
  uVar8 = FUN_100032228();
  lVar4 = lStack_58;
  lVar6 = lStack_58 + 0x168;
  uVar1 = FUN_1004d2524("lastGainedBarrier");
  uVar2 = FUN_100015208("lastGainedBarrier",uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x10))(lVar6,uVar2);
  *puVar3 = uVar8;
  lVar6 = *(long *)(*(long *)(lStack_60 + 0x20) + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  for (lVar4 = *(long *)(lVar6 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
    if ((*(int *)(lVar4 + 0x314) == DAT_101d3e6bc) && (*(int *)(lVar4 + 0x310) == 0)) {
      return;
    }
  }
  FUN_1003a4e5c(aiStack_68,PTR_s_Buff_Turret_Invulnerable_10185c2b8);
  for (lVar6 = *(long *)(lVar6 + 0x28); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
    if ((*(int *)(lVar6 + 0x314) == aiStack_68[0]) && (*(int *)(lVar6 + 0x310) == 0)) {
      return;
    }
  }
  fVar11 = fVar11 * fVar7;
  if (fVar11 <= 1.0) {
    fVar11 = 1.0;
  }
  lVar6 = FUN_100446c78(*(undefined4 *)(lStack_58 + 0x30c));
  if (lVar6 == 0) {
    lVar6 = FUN_100446d10(fVar11,lVar5,lVar5,5,*(undefined4 *)(lStack_58 + 0x30c));
    if (lVar6 == 0) {
      uVar1 = 0;
      goto LAB_100446c10;
    }
  }
  else {
    fVar10 = *(float *)(lVar6 + 0x38);
    lVar4 = *(long *)(lVar5 + 0x40);
    fVar7 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
    fVar9 = (float)NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
    fVar7 = DAT_101e94260;
    if (DAT_101e94260 <= fVar9) {
      fVar7 = fVar9;
    }
    fVar9 = (float)FUN_1003df710(lVar5,8,1);
    if (fVar7 * fVar9 <= fVar10 + fVar11) {
      fVar11 = fVar7 * fVar9 - fVar10;
    }
    if (0.0 < fVar11) {
      FUN_100446ddc(lVar5,lVar5,lVar6);
    }
  }
  uVar1 = *(undefined4 *)(lVar6 + 0x38);
LAB_100446c10:
  uVar8 = FUN_1004d2524("currentMaxFortifiedHealth");
  uVar2 = FUN_100015208("currentMaxFortifiedHealth",uVar8,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lStack_58 + 0x168) + 0x10))(lStack_58 + 0x168,uVar2)
  ;
  *puVar3 = uVar1;
  return;
}




void FUN_100446e90(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long local_70;
  undefined4 local_68 [2];
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_70);
    lVar10 = *(long *)(*(long *)(local_70 + 0x10) + 0x10);
    lVar5 = FUN_100446c78(*(undefined4 *)(local_70 + 0x30c));
    lVar8 = local_70;
    if ((lVar5 != 0) && (fVar14 = *(float *)(lVar5 + 0x38), 0.0 < fVar14)) {
      lVar1 = local_70 + 0x168;
      uVar3 = FUN_1004d2524("lastGainedBarrier");
      uVar6 = FUN_100015208("lastGainedBarrier",uVar3,0x12345678);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar8 + 0x168) + 0x10))(lVar1,uVar6);
      fVar15 = *pfVar7;
      fVar11 = (float)FUN_100032228();
      fVar12 = (float)FUN_1003df710(lVar10,6,1);
      puVar2 = PTR_s_Buff_Reim_Talent_LongWinter_10185cab0;
      lVar8 = FUN_100345d90(*(undefined4 *)(lVar10 + 0x260));
      if ((lVar8 != 0) && (iVar4 = FUN_1003a47d0(lVar8,puVar2), iVar4 != 0)) {
        local_68[0] = DAT_101d90cac;
        fVar13 = (float)FUN_1003dfee8(lVar10,local_68,1,9);
        fVar12 = fVar13 + fVar12;
      }
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x88) & 0x1f;
      if (((int)uVar9 == 0x1f) || (*(short *)(lVar10 + uVar9 * 0x38 + 0x90) != 4)) {
        if (fVar12 < fVar11 - fVar15) {
          fVar11 = (float)FUN_1003df710(lVar10,7,1);
          lVar1 = local_70;
          lVar8 = local_70 + 0x168;
          uVar3 = FUN_1004d2524("currentMaxFortifiedHealth");
          uVar6 = FUN_100015208("currentMaxFortifiedHealth",uVar3,0x12345678);
          pfVar7 = (float *)(**(code **)(*(long *)(lVar1 + 0x168) + 0x10))(lVar8,uVar6);
          fVar14 = (float)NEON_fminnm((*(float *)(local_70 + 0x328) * *pfVar7) / fVar11,fVar14);
          FUN_100446ddc(-fVar14,lVar10,lVar10,lVar5);
        }
      }
      else {
        FUN_100447070(lVar10,lVar5);
      }
    }
  }
  return;
}




void FUN_100447070(long param_1,long param_2)

{
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  float local_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  local_34 = *(undefined4 *)(param_1 + 0x260);
  uStack_30 = *(undefined4 *)(param_2 + 0x34);
  local_2c = -*(float *)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_50 = &PTR_FUN_101497218;
  local_28 = 0x100;
  local_26 = 0;
  FUN_100496328(&local_50,&DAT_101e47d30);
  FUN_1010a01dc(param_2);
  return;
}




void FUN_1004470e4(undefined8 param_1)

{
  FUN_1003df710(param_1,2,1);
  return;
}




void FUN_1004470f0(undefined8 param_1)

{
  FUN_1003df710(param_1,5,1);
  return;
}




void FUN_1004470fc(undefined8 param_1)

{
  FUN_1003df710(param_1,4,1);
  return;
}




float FUN_100447108(long *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar2 = (float)FUN_1003df710(uVar1,1,0x13);
  fVar3 = (float)FUN_1003df710(uVar1,2,1);
  return fVar2 / fVar3;
}




void FUN_10044715c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




float FUN_100447170(undefined8 param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0x250) - *(float *)(param_3 + 0x250);
  fVar3 = (*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254)) -
          (*(float *)(param_3 + 0x254) + *(float *)(param_3 + 0x2ec));
  fVar4 = *(float *)(param_2 + 600) - *(float *)(param_3 + 600);
  fVar2 = (float)FUN_1003dfe60(param_1,2,7,0x19,0);
  return 1.0 - SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3) / fVar2;
}




void FUN_1004471ec(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,7,0x19,0);
  return;
}




float FUN_100447200(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  fVar3 = *(float *)(lVar2 + 0x250) - *(float *)(param_2 + 0x250);
  fVar5 = (*(float *)(lVar2 + 0x2ec) + *(float *)(lVar2 + 0x254)) -
          (*(float *)(param_2 + 0x254) + *(float *)(param_2 + 0x2ec));
  fVar6 = *(float *)(lVar2 + 600) - *(float *)(param_2 + 600);
  fVar6 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5);
  fVar3 = (float)FUN_1003dfe60(uVar1,2,9,0x19,0);
  fVar5 = 1.0;
  if (fVar3 <= fVar6) {
    fVar5 = (float)FUN_1003dfe60(0x3f800000,uVar1,2,2,0x19,0);
    fVar4 = (float)FUN_1003dfe60(uVar1,2,7,0x19,0);
    fVar6 = fVar6 - fVar3;
    fVar5 = (fVar5 * fVar6 - fVar6) / (fVar4 - fVar3) + 1.0;
  }
  return fVar5;
}




void FUN_100447310(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,9,0x19,0);
  return;
}




float FUN_100447324(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = *(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  FUN_1003461dc(uVar2);
  uVar1 = FUN_100345d90();
  fVar3 = (float)FUN_100447170(uVar1,uVar2,param_2);
  fVar4 = (float)FUN_1003dfe60(uVar1,2,6,0x19,0);
  fVar5 = (float)FUN_1003dfe60(uVar1,2,5,0x19,0);
  return fVar4 + fVar3 * (fVar5 - fVar4);
}




void FUN_1004473b8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,10,0x19,0);
  return;
}




void FUN_1004473cc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,8,0x19,0);
  return;
}




void FUN_1004473e0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1004473f4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_100447408(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_10044741c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,6,0x19,0);
  return;
}




void FUN_100447430(long *param_1)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_94;
  uint uStack_90;
  float local_8c;
  undefined1 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  float local_5c;
  undefined2 local_58;
  undefined1 local_56;
  long *local_50;
  long lStack_48;
  
  FUN_10042e1f0(param_1,&lStack_48,&local_50);
  lVar10 = *(long *)(*(long *)(lStack_48 + 0x10) + 0x10);
  if (local_50[5] != lVar10) goto LAB_10044765c;
  if ((*(byte *)((long)local_50 + 0xc) >> 2 & 1) != 0) {
    lVar11 = *local_50;
    if (lVar11 != 0) {
      uVar5 = FUN_1004d2524(lVar11);
      iVar6 = FUN_100015208(lVar11,uVar5,0x12345678);
      if (iVar6 == DAT_101d2cad4) goto LAB_100447618;
    }
    plVar4 = local_50;
    fVar12 = (float)FUN_1003df710(lVar10,3,1);
    if (*(char *)((long)plVar4 + 0xe) != '\0') {
      fVar13 = (float)FUN_1003df710(lVar10,4,1);
      fVar12 = fVar13 * fVar12;
    }
    if ((*(byte *)(plVar4[4] + 0x2f9) >> 3 & 1) != 0) {
      fVar13 = (float)FUN_1003df710(lVar10,5,1);
      fVar12 = fVar13 * fVar12;
    }
    local_64 = *(undefined4 *)(lVar10 + 0x260);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_80 = &PTR_FUN_101497218;
    uStack_60 = 3;
    local_58 = 0x100;
    local_56 = 0;
    local_5c = fVar12;
    FUN_100496328(&local_80,&DAT_101e47d30);
    lVar11 = *(long *)(*(long *)(lVar10 + 0x58) + 0x58);
    if (((lVar11 != 0) && ((*(byte *)(lVar11 + 0x239) & 0x1c) != 0)) &&
       (lVar11 = *local_50, lVar11 != 0)) {
      uVar5 = FUN_1004d2524(lVar11);
      iVar6 = FUN_100015208(lVar11,uVar5,0x12345678);
      if (iVar6 != DAT_101d2cac8) {
        uVar2 = 0x811c9dc5;
        uVar5 = *(undefined4 *)(lVar10 + 0x260);
        cVar1 = *PTR_s_Ability__Rona__B_101859380;
        pcVar9 = PTR_s_Ability__Rona__B_101859380;
        while (cVar1 != '\0') {
          pcVar9 = pcVar9 + 1;
          uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
          cVar1 = *pcVar9;
        }
        local_8c = (float)FUN_1003dfe60(lVar10,1,10,0x19,0);
        local_a8 = 0;
        uStack_a0 = 0;
        local_8c = -local_8c;
        local_98 = 0;
        local_b0 = &PTR_FUN_101497330;
        local_88 = 0;
        local_94 = uVar5;
        uStack_90 = uVar2;
        FUN_10049650c(&local_b0,&DAT_101e47d30);
      }
    }
  }
LAB_100447618:
  puVar3 = PTR_s_time_out_of_combat_10185d668;
  uVar5 = FUN_1004d2524(PTR_s_time_out_of_combat_10185d668);
  uVar7 = FUN_100015208(puVar3,uVar5,0x12345678);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar7);
  *puVar8 = 0xbf800000;
LAB_10044765c:
  if (local_50[4] == lVar10) {
    fVar14 = *(float *)(local_50 + 6);
    lVar11 = *(long *)(lVar10 + 0x40);
    fVar12 = *(float *)(lVar11 + 0x38) +
             *(float *)(lVar11 + 0xec) * (*(float *)(lVar11 + 0x254) + 1.0);
    fVar13 = (float)NEON_fminnm(fVar12 + fVar12 * *(float *)(lVar11 + 0x1a0),DAT_101e94320);
    fVar12 = DAT_101e94260;
    if (DAT_101e94260 <= fVar13) {
      fVar12 = fVar13;
    }
    uVar5 = *(undefined4 *)(lVar10 + 0x260);
    fVar13 = (float)FUN_1003df710(lVar10,6,1);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_80 = &PTR_FUN_101497218;
    local_5c = (fVar14 * 100.0 * fVar13) / fVar12;
    uStack_60 = 3;
    local_58 = 0x100;
    local_56 = 0;
    local_64 = uVar5;
    FUN_100496328(&local_80,&DAT_101e47d30);
    puVar3 = PTR_s_time_out_of_combat_10185d668;
    uVar5 = FUN_1004d2524(PTR_s_time_out_of_combat_10185d668);
    uVar7 = FUN_100015208(puVar3,uVar5,0x12345678);
    puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar7);
    *puVar8 = 0xbf800000;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100447764(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  float local_54;
  undefined2 local_50;
  undefined1 local_4e;
  long local_48;
  
  FUN_10042ecbc(param_1,&local_48);
  puVar1 = PTR_s_time_out_of_combat_10185d668;
  uVar2 = FUN_1004d2524(PTR_s_time_out_of_combat_10185d668);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  pfVar4 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  fVar9 = 0.0;
  if (0.0 <= *pfVar4) {
    fVar9 = *(float *)(local_48 + 0x328) + *pfVar4;
  }
  *pfVar4 = fVar9;
  lVar5 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  fVar7 = (float)FUN_1003df710(lVar5,1,1);
  lVar6 = *(long *)(lVar5 + 0x40);
  if (fVar7 <= fVar9) {
    if (*(float *)(lVar6 + 0x314) <= 0.0) {
      return;
    }
    local_54 = (float)FUN_1003df710(lVar5,2,1);
    local_54 = -local_54;
  }
  else {
    fVar9 = (float)FUN_1003df710(lVar5,7,1);
    uVar3 = NEON_fmov(0x3f800000,4);
    fVar7 = (float)*(undefined8 *)(lVar6 + 0x40) +
            (float)*(undefined8 *)(lVar6 + 0xf4) *
            ((float)*(undefined8 *)(lVar6 + 0x25c) + (float)uVar3);
    fVar8 = (float)((ulong)*(undefined8 *)(lVar6 + 0x40) >> 0x20) +
            (float)((ulong)*(undefined8 *)(lVar6 + 0xf4) >> 0x20) *
            ((float)((ulong)*(undefined8 *)(lVar6 + 0x25c) >> 0x20) + (float)((ulong)uVar3 >> 0x20))
    ;
    uVar3 = NEON_fminnm(CONCAT44(fVar8 + fVar8 * (float)((ulong)*(undefined8 *)(lVar6 + 0x1a8) >>
                                                        0x20),
                                 fVar7 + fVar7 * (float)*(undefined8 *)(lVar6 + 0x1a8)),
                        _DAT_101e94328,4);
    uVar3 = NEON_fmaxnm(_DAT_101e94268,uVar3,4);
    fVar7 = (float)FUN_1003df710(lVar5,8,1);
    local_54 = (float)uVar3 * fVar9 + (float)((ulong)uVar3 >> 0x20) * fVar7;
  }
  if (local_54 != 0.0) {
    local_5c = *(undefined4 *)(lVar5 + 0x260);
    local_54 = *(float *)(local_48 + 0x328) * local_54;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_78 = &PTR_FUN_101497218;
    uStack_58 = 3;
    local_50 = 0x100;
    local_4e = 0;
    FUN_100496328(&local_78,&DAT_101e47d30);
  }
  return;
}




void FUN_100447900(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,8,0x19,0);
  return;
}




void FUN_100447914(long param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = 0;
  while( true ) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_10045fb10(lVar3);
    }
    if (uVar1 <= uVar2) break;
    lVar3 = FUN_10045fa7c(lVar3,uVar2);
    iVar4 = (*(uint *)(lVar3 + 0x2f4) & 1) + iVar4;
    uVar2 = uVar2 + 1;
  }
  *param_3 = iVar4;
  return;
}




bool FUN_100447990(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar2 = FUN_10045fb10();
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




ushort * FUN_1004479b4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined ***)puVar3 = &PTR_FUN_1014982c8;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_100447a98(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  long local_38;
  
  FUN_10042ecbc(param_1,&local_38);
  lVar1 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
  fVar2 = (float)FUN_1003dfe60(lVar1,2,3,0x19,0);
  fVar2 = *(float *)(local_38 + 0x328) * fVar2;
  if (*(float *)(*(long *)(lVar1 + 0x40) + 0x314) <= fVar2) {
    local_44 = *(undefined4 *)(lVar1 + 0x260);
    uStack_40 = *(undefined4 *)(local_38 + 0x30c);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_60,&DAT_101e47d30);
    local_74 = *(undefined4 *)(lVar1 + 0x260);
    local_70 = 3;
    local_68 = 0x101;
  }
  else {
    local_74 = *(undefined4 *)(lVar1 + 0x260);
    local_70 = CONCAT44(-fVar2,3);
    local_68 = 0x100;
  }
  local_66 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_90 = &PTR_FUN_101497218;
  FUN_100496328(&local_90,&DAT_101e47d30);
  return;
}




void FUN_100447bb8(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  if (DAT_101d23a38 != '\0') {
    lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    plVar4 = (long *)(lVar3 + 0x18);
    do {
      lVar5 = *plVar4;
      plVar4 = (long *)(lVar5 + 0x20);
    } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8);
    for (lVar5 = *(long *)(lVar5 + 0x28); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
      if ((*(int *)(lVar5 + 0x314) == DAT_101d3edc8) && (*(int *)(lVar5 + 0x310) == 0)) {
        uVar1 = *(undefined4 *)(lVar5 + 0x30c);
        uVar2 = *(undefined4 *)(lVar3 + 0x260);
        local_24 = FUN_1003dfe60(lVar3,2,6,0x19,0);
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        local_48 = &PTR_FUN_101497250;
        local_2c = uVar2;
        uStack_28 = uVar1;
        FUN_100496b60(&local_48,&DAT_101e47d30);
        return;
      }
    }
  }
  return;
}




void FUN_100447c8c(long *param_1,long param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  uVar8 = *(undefined4 *)(lVar3 + 0x250);
  fVar5 = *(float *)(lVar3 + 0x254);
  uVar9 = *(undefined4 *)(lVar3 + 600);
  fVar7 = *(float *)(lVar3 + 0x2ec);
  puVar4 = (ushort *)(param_2 + 0x58);
  uVar2 = *puVar4;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(long *)(param_2 + 8) = lVar3;
  uVar1 = *(undefined1 *)(param_2 + 0x5a);
  *puVar4 = uVar2 & 0xff8f | 0x20;
  fVar6 = (float)FUN_1003dfe60(lVar3,2,1,0x19,0);
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  *(float *)(param_2 + 0x18) = fVar7 + fVar5;
  *(undefined4 *)(param_2 + 0x1c) = uVar9;
  *(float *)(param_2 + 0x30) = fVar6 * fVar6;
  *(undefined1 *)(param_2 + 0x5a) = uVar1;
  *puVar4 = uVar2 & 0xff8f | 0xa020;
  return;
}




void FUN_100447d3c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_24;
  undefined1 local_20;
  long local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_18);
    lVar1 = *(long *)(*(long *)(local_18 + 0x10) + 0x10);
    plVar2 = (long *)(lVar1 + 0x18);
    do {
      lVar3 = *plVar2;
      plVar2 = (long *)(lVar3 + 0x20);
    } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
    for (lVar3 = *(long *)(lVar3 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
      if ((*(int *)(lVar3 + 0x314) == DAT_101d3edcc) && (*(int *)(lVar3 + 0x310) == 0)) {
        local_2c = *(undefined4 *)(lVar1 + 0x260);
        uStack_28 = *(undefined4 *)(local_18 + 0x30c);
        local_24 = *(ushort *)(local_18 + 0x344) + 1;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        local_48 = &PTR_FUN_1014972c0;
        local_20 = 1;
        FUN_1004968dc(&local_48,&DAT_101e47d30);
        return;
      }
    }
  }
  return;
}




void FUN_100447e0c(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
  undefined7 local_144;
  undefined4 uStack_13d;
  undefined1 local_139;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined7 local_d4;
  undefined4 uStack_cd;
  undefined1 local_c9;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_98;
  long local_88 [3];
  
  if (DAT_101d23a38 == '\0') {
    FUN_10042ecbc(param_1,local_88);
    puVar1 = PTR_s_left_pfx_id_10185d670;
    lVar5 = *(long *)(*(long *)(local_88[0] + 0x10) + 0x10);
    plVar6 = *(long **)(lVar5 + 0x50);
    uStack_f8 = 0;
    local_100 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
    local_d8 = 0xffffffff;
    local_d4 = 0;
    uStack_cd = 0;
    local_c9 = 0xff;
    local_c4 = DAT_101dc1cb8;
    local_bc = 0x3f8000003f800000;
    local_c8 = 0;
    local_b4 = 0x3f800000;
    local_b0 = 0;
    local_a4 = 2;
    local_a8 = 0;
    local_9c = 0x101;
    local_98 = 0;
    local_e0 = 0xa9df1176;
    uStack_dc = 0xbf800000;
    uVar2 = FUN_1004d2524(PTR_s_left_pfx_id_10185d670);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    pfVar4 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    local_d8 = (int)*pfVar4;
    local_e8 = (**(code **)(*plVar6 + 0x178))(plVar6);
    if (*(long *)(lVar5 + 0x50) != 0) {
      uVar3 = FUN_100448e2c(lVar5,"Bone_Wand_L");
      (**(code **)(**(long **)(lVar5 + 0x50) + 0xb0))(*(long **)(lVar5 + 0x50),&local_100,uVar3);
    }
    puVar1 = PTR_s_right_pfx_id_10185d678;
    uStack_168 = 0;
    local_170 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_14c = 0xbf800000;
    local_148 = 0xffffffff;
    local_144 = 0;
    uStack_13d = 0;
    local_139 = 0xff;
    local_138 = 0;
    local_134 = DAT_101dc1cb8;
    local_12c = 0x3f8000003f800000;
    local_124 = 0x3f800000;
    local_120 = 0;
    local_118 = 0;
    local_114 = 2;
    local_10c = 0x101;
    local_108 = 0;
    local_150 = 0xa9df1176;
    uVar2 = FUN_1004d2524(PTR_s_right_pfx_id_10185d678);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    pfVar4 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    local_148 = (int)*pfVar4;
    local_158 = (**(code **)(*plVar6 + 0x178))(plVar6);
    if (*(long *)(lVar5 + 0x50) != 0) {
      uVar3 = FUN_100448e2c(lVar5,"Bone_Wand_R");
      (**(code **)(**(long **)(lVar5 + 0x50) + 0xb0))(*(long **)(lVar5 + 0x50),&local_170,uVar3);
    }
  }
  return;
}




void FUN_100448064(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 local_68 [2];
  undefined1 auStack_60 [48];
  undefined8 local_30;
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  local_68[0] = 0x5e636391;
  FUN_1003ab468(uVar1,local_68,auStack_60);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  return;
}




void FUN_1004480bc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1004480d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  long local_38;
  
  FUN_10042ecbc(param_1,&local_38);
  lVar2 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
  FUN_1003461dc(lVar2);
  lVar1 = FUN_100345d90();
  fVar3 = *(float *)(lVar1 + 0x250) - *(float *)(lVar2 + 0x250);
  fVar5 = (*(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254)) -
          (*(float *)(lVar2 + 0x254) + *(float *)(lVar2 + 0x2ec));
  fVar6 = *(float *)(lVar1 + 600) - *(float *)(lVar2 + 600);
  fVar4 = (float)FUN_1003dfe60(lVar1,3,0xb,0x19,0);
  if (fVar4 < SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5)) {
    local_44 = *(undefined4 *)(lVar2 + 0x260);
    uStack_40 = *(undefined4 *)(local_38 + 0x30c);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_60,&DAT_101e47d30);
  }
  return;
}




void FUN_1004481ac(undefined8 *param_1,long param_2,undefined4 *param_3,float *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_78 [2];
  
  FUN_1003461dc(param_2);
  lVar3 = FUN_100345d90();
  fVar11 = *(float *)(param_2 + 0x250);
  fVar5 = *(float *)(param_2 + 0x254);
  fVar12 = *(float *)(param_2 + 600);
  fVar10 = *(float *)(param_2 + 0x2ec);
  FUN_100432da4(*param_1);
  fVar6 = (float)_cosf();
  FUN_100432da4(*param_1);
  fVar7 = (float)_sinf();
  lVar4 = *(long *)(*(long *)(lVar3 + 0x58) + 0x68);
  if (lVar4 == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)FUN_10045f34c(lVar4 + 0x220);
  }
  *param_4 = fVar11 + fVar6 * fVar8;
  param_4[1] = fVar10 + fVar5;
  param_4[2] = fVar12 + fVar7 * fVar8;
  puVar1 = PTR_s_Buff_Samuel_Talent_ViscousDarkne_10185cbf8;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 == 0) || (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 == 0)) {
    uVar9 = FUN_1003dfe60(lVar3,3,5,0x19,0);
  }
  else {
    local_78[0] = DAT_101d90d9c;
    uVar9 = FUN_1003dfee8(lVar3,local_78,3,9);
  }
  *param_3 = uVar9;
  return;
}




void FUN_1004482d4(long param_1,long param_2,float *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 local_48 [2];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar3 = FUN_100345d90();
  fVar5 = (float)FUN_1003dfe60(lVar3,3,7,0x19,0);
  fVar5 = *(float *)(param_1 + 0x328) * fVar5;
  *param_3 = fVar5;
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar6 = (float)FUN_1003dfe60(lVar3,3,8,0x19,0);
    *param_3 = fVar6 * fVar5;
  }
  puVar1 = PTR_s_Buff_Samuel_Talent_ViscousDarkne_10185cbf8;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d90d9c;
    fVar5 = (float)FUN_1003dfee8(lVar3,local_48,1,9);
    *param_3 = *param_3 * fVar5;
  }
  return;
}




void FUN_1004483b8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  undefined8 local_84;
  float local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if (DAT_101d23a38 != '\0') {
    FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
    lVar4 = FUN_100345d90();
    fVar8 = (float)FUN_1003dfe60(lVar4,3,6,0x19,0);
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    fVar9 = *(float *)(lVar4 + 0x250) - *(float *)(lVar6 + 0x250);
    fVar10 = (*(float *)(lVar4 + 0x2ec) + *(float *)(lVar4 + 0x254)) -
             (*(float *)(lVar6 + 0x254) + *(float *)(lVar6 + 0x2ec));
    fVar11 = *(float *)(lVar4 + 600) - *(float *)(lVar6 + 600);
    if (fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10 <= fVar8 * fVar8) {
      uVar7 = 0;
      fVar8 = 0.0;
      while( true ) {
        lVar6 = *(long *)(param_1 + 0x38);
        if (lVar6 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_10045fb10(lVar6);
        }
        puVar1 = PTR_s_Buff_Samuel_Talent_ViscousDarkne_10185cbf8;
        if (uVar2 <= uVar7) break;
        lVar6 = FUN_10045fa7c(lVar6,uVar7);
        uVar3 = 9;
        if ((*(uint *)(lVar6 + 0x2f4) & 0x800000) != 0) {
          uVar3 = 10;
        }
        fVar9 = (float)FUN_1003dfe60(lVar4,3,uVar3,0x19,0);
        fVar8 = fVar9 + fVar8;
        uVar7 = uVar7 + 1;
      }
      fVar8 = *(float *)(param_1 + 0x328) * fVar8;
      lVar6 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
      if ((lVar6 != 0) && (uVar5 = FUN_1003a47d0(lVar6,puVar1), (uVar5 & 1) != 0)) {
        local_a8 = (undefined **)CONCAT44(local_a8._4_4_,DAT_101d90d9c);
        fVar9 = (float)FUN_1003dfee8(lVar4,&local_a8,0,9);
        fVar8 = fVar9 * fVar8;
      }
      if (0.0 < fVar8) {
        uVar3 = *(undefined4 *)(lVar4 + 0x260);
        local_a8 = (undefined **)CONCAT44(uVar3,uVar3);
        local_a0 = FUN_100345d90(uVar3);
        local_98 = FUN_100345d90(uVar3);
        local_84 = 0;
        local_8c = 0;
        local_7c = 0.0;
        uStack_70 = 0xee;
        uStack_6c = 0xffffffff;
        local_78 = 0xffffffff;
        uStack_74 = 0xffffffff;
        local_90 = fVar8;
        FUN_10010cbe4(&local_a8);
      }
      local_7c = *(float *)(param_1 + 0x328) + 0.1;
      local_a0 = 0;
      local_98 = 0;
      local_90 = (float)((uint)local_90 & 0xffffff00);
      local_a8 = &PTR_FUN_101496b18;
      local_8c = CONCAT44(*(undefined4 *)(lVar4 + 0x260),*(undefined4 *)(lVar4 + 0x260));
      local_84 = CONCAT44(local_84._4_4_,DAT_1018589d8);
      local_78 = 1;
      local_60 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      local_58 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uVar3 = FUN_1003d4e0c(PTR_s_Buff_Samuel_B_StandingInDarkFiel_10185cbc8);
      local_84 = CONCAT44(uVar3,(undefined4)local_84);
      FUN_10049639c(&local_a8,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_100448600(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  int local_6c;
  undefined4 uStack_68;
  long local_60;
  long local_58;
  
  FUN_10042e1f0(param_1,&local_58,&local_60);
  uVar6 = FUN_100345d90(*(undefined4 *)(local_58 + 0x308));
  if (*(long *)(local_60 + 0x28) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = *(byte *)(*(long *)(local_60 + 0x28) + 0x2f4) >> 4 & 1;
  }
  iVar1 = *(int *)(local_60 + 0x18);
  iVar2 = *(int *)(*(long *)(*(long *)(local_58 + 0x10) + 0x10) + 0x260);
  uVar3 = *(ushort *)(local_60 + 0xc);
  fVar9 = *(float *)(local_58 + 0x31c);
  fVar10 = *(float *)(local_58 + 0x318);
  fVar8 = (float)FUN_1003dfe60(uVar6,4,6,0x19,0);
  if (bVar7 == 0) {
    fVar9 = fVar9 - fVar10;
    bVar4 = true;
    bVar5 = false;
    if (iVar1 == iVar2 && (uVar3 & 0xc) != 0) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar9) && !NAN(fVar8)) {
        bVar4 = fVar9 < fVar8;
        bVar5 = false;
      }
    }
    if (bVar4 == bVar5) {
      uStack_68 = *(undefined4 *)(local_58 + 0x30c);
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_88 = &PTR_FUN_101496cd8;
      local_6c = iVar1;
      FUN_100496580(&local_88,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_1004486e8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  uVar2 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f;
  if (((int)uVar2 == 0x1f) || (1 < *(ushort *)(lVar3 + uVar2 * 0x38 + 0x90) - 3)) {
    FUN_100463dac(lVar3);
    plVar1 = *(long **)(lVar3 + 0x50);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010044875c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x68))(0x3f800000,plVar1,"Stun",1,0);
      return;
    }
  }
  return;
}




float FUN_10044876c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184dab8) break;
      lVar5 = *(long *)(lVar5 + 0x20);
    } while (lVar5 != 0);
    do {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184daa8) break;
      lVar3 = *(long *)(lVar3 + 0x20);
    } while (lVar3 != 0);
  }
  uVar1 = FUN_1003a34a4(lVar3,DAT_101d3edfc);
  if (((DAT_101e480f0 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101e480f0), iVar2 != 0)) {
    DAT_101e480ec = 2.0943952;
    ___cxa_guard_release(&DAT_101e480f0);
  }
  if (uVar1 == 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    if (lVar5 == 0) {
      return 0.0;
    }
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x68) & 0x1f;
    if ((int)uVar4 == 0x1f) {
      return 0.0;
    }
    if (*(short *)(lVar5 + uVar4 * 0x38 + 0x70) != 2) {
      return 0.0;
    }
    fVar6 = *(float *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
  }
  else {
    fVar6 = (float)uVar1;
  }
  return DAT_101e480ec * fVar6;
}




void FUN_1004488ac(long *param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = *param_1;
  uVar2 = *(ulong *)(lVar1 + 0x344);
  if ((uVar2 & 0xfffe) != 0) {
    fVar3 = (float)FUN_1003df710(*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10),4,1);
    *(float *)(lVar1 + 0x31c) = fVar3;
    *(float *)(lVar1 + 0x318) = fVar3;
    *(uint *)(lVar1 + 0x340) =
         *(uint *)(lVar1 + 0x340) & 0xfffe0 | (uint)(fVar3 < 0.0) << 4 |
         *(uint *)(lVar1 + 0x340) & 0xfff0000f;
    fVar3 = (float)(int)(((uint)uVar2 & 0xffff) - 1);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    FUN_100469600(lVar1,(int)fVar3,1);
    return;
  }
  *(uint *)(lVar1 + 0x340) = *(uint *)(lVar1 + 0x340) | 0x800;
  return;
}




void FUN_10044894c(long *param_1)

{
  *(uint *)(*param_1 + 0x340) = *(uint *)(*param_1 + 0x340) & 0xfffff7ff;
  return;
}




void FUN_100448960(long *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 local_28 [2];
  
  iVar3 = FUN_1003a47d0(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),
                        PTR_s_Buff_SAW_Talent_SpeedySpinUp_10185c760);
  iVar1 = *(int *)(*param_1 + 0x308);
  lVar4 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  bVar2 = *(int *)(lVar4 + 0x260) != iVar1;
  if (iVar3 != 0) {
    if (bVar2) {
      lVar4 = FUN_100345d90(iVar1);
    }
    local_28[0] = DAT_101d90d00;
    FUN_1003dfee8(lVar4,local_28,0,9);
    return;
  }
  if (bVar2) {
    lVar4 = FUN_100345d90(iVar1);
  }
  FUN_1003df710(lVar4,2,1);
  return;
}




void FUN_100448a08(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




undefined4 FUN_100448a14(long *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  uVar2 = FUN_1003dfe60(uVar1,1,4,0x19,0);
  uVar3 = FUN_1003dfe60(uVar1,1,3,0x19,0);
  uVar2 = NEON_fminnm(uVar2,uVar3);
  return uVar2;
}




void FUN_100448a78(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  long local_78;
  undefined *local_70;
  undefined *local_68 [2];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_78);
    lVar3 = *(long *)(*(long *)(local_78 + 0x10) + 0x10);
    lVar2 = *(long *)(lVar3 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    lVar4 = 0;
    local_70 = PTR_s_Ability__SAW__DefaultAttack_1018590c0;
    local_68[0] = PTR_s_Ability__SAW__AltAttack_1018590c8;
    local_68[1] = PTR_s_Ability__SAW__CritAttack_1018590d0;
    puVar1 = PTR_s_Ability__SAW__DefaultAttack_1018590c0;
    while( true ) {
      FUN_1003a4e5c(&local_a0,puVar1);
      uStack_80 = FUN_1003e2b0c(lVar2,(ulong)local_a0 & 0xffffffff);
      local_84 = *(undefined4 *)(lVar3 + 0x260);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_a0 = &PTR_FUN_101496d10;
      FUN_10049705c(&local_a0,&DAT_101e47d30);
      if (lVar4 == 0x10) break;
      puVar1 = *(undefined **)((long)local_68 + lVar4);
      lVar4 = lVar4 + 8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100448bb0(void)

{
  return;
}




void FUN_100448bb4(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined7 local_e4;
  undefined4 uStack_dd;
  undefined1 local_d9;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined **local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  ushort local_40;
  byte local_3e;
  long local_38;
  
  if (DAT_101d23a38 == '\0') {
    FUN_10042ecbc(param_1,&local_38);
    lVar7 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    iVar1 = FUN_10034ea2c(*(undefined4 *)(lVar7 + 0x260));
    if (iVar1 != 0) {
      local_98 = &PTR_FUN_101499960;
      uStack_90 = 0;
      local_84 = 0;
      local_74 = 0;
      uStack_70 = 0;
      local_7c = 0;
      uStack_78 = 0;
      uStack_60 = 0xbf800000c0000000;
      local_68 = 0xbf800000bf800000;
      local_6c = 0;
      local_58 = 0x3f800000;
      local_54 = 0xff;
      local_4c = 0xffffffff;
      local_44 = 0xffffffff;
      local_88 = 1;
      lVar4 = FUN_1003e10f0();
      local_40 = 0x4100;
      local_3e = *(byte *)(lVar4 + 0xe5) | 0x14;
      local_50 = 0x8000000;
      lVar4 = FUN_1003e12c0(0x41400000,lVar7,&local_98);
      if (lVar4 == 0) {
        uStack_78 = SUB84(PTR_s_Neutral_JungleMinion_StoreCenter_10185bc20,0);
        local_74 = (undefined4)((ulong)PTR_s_Neutral_JungleMinion_StoreCenter_10185bc20 >> 0x20);
        local_40 = local_40 & 0xfffc;
        lVar4 = FUN_1003e12c0(0x41400000,lVar7,&local_98);
        if (lVar4 == 0) {
          return;
        }
      }
      lVar7 = FUN_100448e2c(lVar4,"Bone_Lamp");
      if (lVar7 != 0) {
        uStack_108 = 0;
        local_110 = 0;
        local_f8 = 0;
        uStack_100 = 0;
        local_e8 = 0xffffffff;
        local_d9 = 0xff;
        local_d4 = DAT_101dc1cb8;
        local_cc = 0x3f8000003f800000;
        local_e4 = 0;
        uStack_dd = 0;
        local_d8 = 0;
        local_c4 = 0x3f800000;
        local_c0 = 0;
        local_b8 = 0;
        local_b4 = 2;
        local_ac = 0x101;
        local_a8 = 0;
        local_f0 = 0x6eb29fc;
        uStack_ec = 0xbf800000;
        uVar2 = FUN_1004d2524("PFXonShopID");
        uVar5 = FUN_100015208("PFXonShopID",uVar2,0x12345678);
        puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
        local_e8 = *puVar6;
        if (*(long **)(lVar4 + 0x50) == (long *)0x0) {
          local_f8 = 0;
        }
        else {
          local_f8 = (**(code **)(**(long **)(lVar4 + 0x50) + 0x178))();
          if (*(long *)(lVar4 + 0x50) != 0) {
            uVar5 = FUN_100448e2c(lVar4,"Bone_Lamp");
            (**(code **)(**(long **)(lVar4 + 0x50) + 0xb0))
                      (*(long **)(lVar4 + 0x50),&local_110,uVar5);
          }
        }
        uVar2 = *(undefined4 *)(lVar4 + 0x260);
        uVar3 = FUN_1004d2524("NearestShopGuid");
        uVar5 = FUN_100015208("NearestShopGuid",uVar3,0x12345678);
        puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
        *puVar6 = uVar2;
      }
    }
  }
  return;
}




undefined8 FUN_100448e2c(long param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  uint local_18 [2];
  
  if (param_2 == (char *)0x0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0x811c9dc5;
    cVar2 = *param_2;
    while (cVar2 != '\0') {
      param_2 = param_2 + 1;
      local_18[0] = (local_18[0] ^ (int)cVar2) * 0x1000193;
      cVar2 = *param_2;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x278);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = local_18[0] / uVar1;
    }
    uVar6 = (ulong)(local_18[0] - uVar3 * uVar1);
    lVar5 = *(long *)(param_1 + 0x280);
    if (*(uint *)(lVar5 + uVar6 * 8) != local_18[0]) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar3 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar3 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar3 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != local_18[0]);
      if ((int)uVar6 == -1) {
        return 0;
      }
    }
    if (*(int *)(lVar5 + uVar6 * 8 + 4) != -1) {
      plVar4 = (long *)FUN_10049e084(param_1 + 0x278,local_18);
      return *(undefined8 *)(*plVar4 + 8);
    }
  }
  return 0;
}




void FUN_100448f0c(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = FUN_1004d2524("NearestShopGuid");
  uVar2 = FUN_100015208("NearestShopGuid",uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
  lVar4 = FUN_100345d90(*puVar3);
  if (lVar4 != 0) {
    uVar1 = FUN_1004d2524("PFXonShopID");
    uVar2 = FUN_100015208("PFXonShopID",uVar1,0x12345678);
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    plVar5 = *(long **)(lVar4 + 0x50);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100448fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0xd8))(plVar5,*puVar3);
      return;
    }
  }
  return;
}




void FUN_100448fd8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 in_x4;
  undefined4 *local_40;
  long lStack_38;
  
  FUN_100449050(param_1,&lStack_38,0,0,in_x4,&local_40);
  uVar1 = *local_40;
  uVar2 = (*(code *)**(undefined8 **)(lStack_38 + 0x168))
                    (lStack_38 + 0x168,PTR_s___VAR1_INT___10185d7f8);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lStack_38 + 0x168) + 0x10))(lStack_38 + 0x168,uVar2)
  ;
  *puVar3 = uVar1;
  return;
}




void FUN_100449050(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_s___PARENT___10185d770;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___PARENT___10185d770);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_2 = *puVar4;
  }
  puVar1 = PTR_s___BESTOWER___10185d778;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___BESTOWER___10185d778);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_3 = *puVar5;
  }
  puVar1 = PTR_s___REAPPLYING_VAR1_FLOAT___10185d808;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___REAPPLYING_VAR1_FLOAT___10185d808);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_4 = uVar3;
  }
  puVar1 = PTR_s___REAPPLYING_VAR1_INT___10185d818;
  if (param_6 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___REAPPLYING_VAR1_INT___10185d818);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_6 = uVar3;
  }
  return;
}




void FUN_100449194(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_10049d684;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Shop_AllowStorePurchase_10185c148);
  local_30[0] = 0x3fc00000;
  local_28 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  (**(code **)(*plVar3 + 0x48))(plVar3,param_2);
  return;
}




void FUN_100449238(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_10049d6f8;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Shop_AllowStorePurchase_10185c148);
  local_30[0] = 0x3fc00000;
  local_28 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  (**(code **)(*plVar3 + 0x48))(plVar3,param_2);
  return;
}




float FUN_1004492dc(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar4 + 0x260) != iVar1) {
      lVar4 = FUN_100345d90();
    }
  }
  lVar3 = *(long *)(param_2 + 0x40);
  fVar5 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
  fVar6 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
  fVar5 = DAT_101e94260;
  if (DAT_101e94260 <= fVar6) {
    fVar5 = fVar6;
  }
  fVar6 = (float)FUN_1003df710(lVar4,2,1);
  fVar5 = fVar5 * fVar6;
  if ((*(uint *)(param_2 + 0x2f4) >> 2 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x2f4) >> 0xc & 1) == 0) goto LAB_1004493a4;
    uVar2 = 5;
  }
  else {
    uVar2 = 4;
  }
  fVar6 = (float)FUN_1003df710(lVar4,uVar2,1);
  fVar5 = fVar6 * fVar5;
LAB_1004493a4:
  if (*(char *)(param_1[0x85] + 0xe) != '\0') {
    fVar6 = (float)FUN_1003df710(lVar4,3,1);
    fVar5 = fVar6 * fVar5;
  }
  return fVar5;
}




void FUN_1004493dc(undefined8 param_1)

{
  FUN_1003df710(param_1,1,0x13);
  return;
}




void FUN_1004493e8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined **local_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined1 local_7a0;
  undefined4 local_79c;
  undefined4 uStack_798;
  undefined **local_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined1 local_778;
  int local_774;
  undefined4 uStack_770;
  int local_76c;
  undefined8 local_768;
  undefined4 local_760;
  undefined8 local_75c;
  undefined8 uStack_754;
  undefined8 local_748;
  undefined4 local_740;
  undefined **local_738;
  long local_730;
  byte local_728;
  undefined4 local_724;
  float fStack_720;
  undefined4 local_71c;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined4 local_708;
  undefined8 local_704;
  undefined8 uStack_6fc;
  undefined1 local_6f4;
  undefined4 local_6f0;
  undefined8 local_6ec;
  undefined4 local_6e4;
  undefined2 local_6e0;
  byte local_6de;
  long local_6d8;
  long local_6d0 [200];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_6d8);
  lVar5 = *(long *)(*(long *)(local_6d8 + 0x10) + 0x10);
  FUN_1003461dc(lVar5);
  lVar2 = FUN_100345d90();
  uVar9 = *(undefined4 *)(lVar5 + 0x250);
  fVar7 = *(float *)(lVar5 + 0x254);
  uVar10 = *(undefined4 *)(lVar5 + 600);
  fVar8 = *(float *)(lVar5 + 0x2ec);
  local_738 = &PTR_FUN_101499960;
  local_730 = 0;
  local_718 = 0;
  uStack_710 = 0;
  uStack_6fc = 0x3f800000bf800000;
  local_704 = 0xc0000000bf800000;
  local_6f4 = 0xff;
  local_6ec = 0xffffffff;
  local_6e4 = 0xffffffff;
  local_728 = local_728 & 0xfc | 1;
  lVar3 = FUN_1003e10f0();
  if (lVar2 != 0) {
    local_730 = lVar2;
  }
  local_6de = local_6de & 0xe0 | *(byte *)(lVar3 + 0xe5) | 0x10;
  local_708 = 0x40800000;
  local_6f0 = 0x40000;
  local_6e0 = 0xc120;
  local_724 = uVar9;
  fStack_720 = fVar8 + fVar7;
  local_71c = uVar10;
  uVar1 = FUN_1003a6ce4(&local_738,local_6d0,200,0);
  if ((int)uVar1 < 1) {
LAB_1004496f0:
    if (*(long *)PTR____stack_chk_guard_101444218 == local_90) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  uVar6 = 0;
LAB_10044954c:
  lVar4 = local_6d0[uVar6];
  for (lVar3 = *(long *)(lVar4 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184daa8) {
      lVar3 = *(long *)(lVar3 + 0x28);
      if (lVar3 != 0) {
        local_774 = *(int *)(lVar2 + 0x260);
        goto LAB_100449590;
      }
      break;
    }
  }
  goto LAB_100449670;
  while (lVar3 = *(long *)(lVar3 + 0x350), lVar3 != 0) {
LAB_100449590:
    if (((*(int *)(lVar3 + 0x314) == DAT_101d3ee30) && (*(int *)(lVar3 + 0x310) == 0)) &&
       ((local_774 == -1 || (*(int *)(lVar3 + 0x308) == local_774)))) {
      uStack_770 = *(undefined4 *)(lVar5 + 0x260);
      local_788 = 0;
      uStack_780 = 0;
      local_778 = 0;
      local_790 = &PTR_FUN_101496b18;
      local_76c = DAT_1018589d8;
      local_768 = 0xbf80000000000000;
      local_760 = 1;
      local_748 = 0;
      local_75c = 0;
      uStack_754 = 0;
      local_740 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uVar9 = FUN_1003d4e0c(PTR_s_Buff_Skaarf_GoopPoolOnFire_10185c818);
      local_768 = CONCAT44(local_768._4_4_,uVar9);
      (*(code *)local_790[4])(&local_790,&DAT_101e47d30);
      local_79c = *(undefined4 *)(lVar5 + 0x260);
      uStack_798 = *(undefined4 *)(local_6d8 + 0x30c);
      local_7b0 = 0;
      uStack_7a8 = 0;
      local_7a0 = 0;
      local_7b8 = &PTR_FUN_101496cd8;
      FUN_100496580(&local_7b8,&DAT_101e47d30);
      lVar4 = local_6d0[uVar6];
      break;
    }
  }
LAB_100449670:
  local_774 = *(undefined4 *)(lVar2 + 0x260);
  uStack_770 = *(undefined4 *)(lVar4 + 0x260);
  local_788 = 0;
  uStack_780 = 0;
  local_778 = 0;
  local_790 = &PTR_FUN_101496b18;
  local_76c = DAT_1018589d8;
  local_768 = 0x3ecccccd00000000;
  local_760 = 1;
  local_748 = 0;
  local_75c = 0;
  uStack_754 = 0;
  local_740 = DAT_101dc0b88;
  DAT_1018589d8 = DAT_1018589d8 + 1;
  uVar9 = FUN_1003d4e0c(PTR_s_Buff_Skaarf_GoopPoolSlow_10185c810);
  local_768 = CONCAT44(local_768._4_4_,uVar9);
  (*(code *)local_790[4])(&local_790,&DAT_101e47d30);
  uVar6 = uVar6 + 1;
  if (uVar6 == uVar1) goto LAB_1004496f0;
  goto LAB_10044954c;
}




void FUN_100449734(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined **local_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined1 local_840;
  undefined4 local_83c;
  undefined4 uStack_838;
  int local_834;
  undefined8 local_830;
  undefined4 local_828;
  undefined8 local_824;
  undefined8 uStack_81c;
  undefined8 local_810;
  undefined4 local_808;
  undefined **local_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined1 local_7e8;
  undefined4 local_7e4;
  undefined4 uStack_7e0;
  int local_7dc;
  undefined8 local_7d8;
  undefined4 local_7d0;
  undefined8 local_7cc;
  undefined8 uStack_7c4;
  undefined8 local_7b8;
  undefined4 local_7b0;
  undefined **local_7a8;
  long local_7a0;
  byte local_798;
  undefined4 local_794;
  float fStack_790;
  undefined4 local_78c;
  undefined *local_788;
  undefined8 local_780;
  undefined4 local_778;
  undefined8 local_774;
  undefined8 uStack_76c;
  undefined1 local_764;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined2 local_750;
  byte local_74e;
  undefined **local_738;
  long local_730;
  byte local_728;
  undefined4 local_724;
  float local_720;
  undefined4 local_71c;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined4 local_708;
  undefined8 local_704;
  undefined8 uStack_6fc;
  undefined1 local_6f4;
  undefined4 local_6f0;
  undefined8 local_6ec;
  undefined4 local_6e4;
  undefined2 local_6e0;
  byte local_6de;
  long local_6d8;
  long local_6d0 [200];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_6d8);
  lVar10 = *(long *)(*(long *)(local_6d8 + 0x10) + 0x10);
  FUN_1003461dc(lVar10);
  lVar7 = FUN_100345d90();
  uVar14 = *(undefined4 *)(lVar10 + 0x250);
  uVar15 = *(undefined4 *)(lVar10 + 600);
  fVar16 = *(float *)(lVar10 + 0x2ec) + *(float *)(lVar10 + 0x254);
  local_738 = &PTR_FUN_101499960;
  local_730 = 0;
  local_718 = 0;
  uStack_710 = 0;
  uStack_6fc = 0x3f800000bf800000;
  local_704 = 0xc0000000bf800000;
  local_6f4 = 0xff;
  local_6ec = 0xffffffff;
  local_6e4 = 0xffffffff;
  local_728 = local_728 & 0xfc | 1;
  lVar8 = FUN_1003e10f0();
  if (lVar7 != 0) {
    local_730 = lVar7;
  }
  local_6de = local_6de & 0xe0 | *(byte *)(lVar8 + 0xe5) | 0x10;
  local_6e0 = 0xc120;
  local_708 = 0x40800000;
  local_6f0 = 0x40000;
  local_724 = uVar14;
  local_720 = fVar16;
  local_71c = uVar15;
  uVar4 = FUN_1003a6ce4(&local_738,local_6d0,200,0);
  if (0 < (int)uVar4) {
    uVar11 = 0;
    do {
      uVar6 = *(undefined4 *)(lVar7 + 0x260);
      uVar1 = *(undefined4 *)(local_6d0[uVar11] + 0x260);
      uVar2 = *(uint *)(local_6d0[uVar11] + 0x2f4);
      fVar12 = (float)FUN_1003dfe60(lVar7,1,1,0x19,0);
      fVar12 = *(float *)(local_6d8 + 0x328) * fVar12;
      if ((uVar2 & 0x800004) != 0) {
        fVar13 = (float)FUN_1003dfe60(lVar7,1,8,0x19,0);
        fVar12 = fVar13 * fVar12;
      }
      puVar3 = PTR_s_Buff_Skaarf_Talent_FlamingSludge_10185c848;
      lVar8 = FUN_100345d90(uVar6);
      if ((lVar8 != 0) && (iVar5 = FUN_1003a47d0(lVar8,puVar3), iVar5 != 0)) {
        local_7a8 = (undefined **)CONCAT44(local_7a8._4_4_,DAT_101d90d34);
        fVar13 = (float)FUN_1003dfee8(lVar7,&local_7a8,1,9);
        fVar12 = fVar13 * fVar12;
      }
      FUN_1003462a0(fVar12,&local_7a8,uVar6,uVar1,1,2,&DAT_101dc1cb8,
                    **(undefined8 **)(local_6d8 + 0x40),0,1);
      FUN_10010cbe0(&local_7a8);
      if ((uVar2 >> 0xc & 1) == 0) {
        local_7d8._4_4_ = *(undefined4 *)(**(long **)(*(long *)(lVar7 + 0x38) + 0x228) + 8);
        plVar9 = (long *)(local_6d0[uVar11] + 0x18);
        do {
          lVar8 = *plVar9;
          plVar9 = (long *)(lVar8 + 0x20);
        } while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184daa8);
        for (lVar8 = *(long *)(lVar8 + 0x28); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x350)) {
          if ((*(int *)(lVar8 + 0x314) == DAT_101d3ee30) && (*(int *)(lVar8 + 0x310) == 0)) {
            local_7d0 = 0;
            goto LAB_1004499f0;
          }
        }
        local_7d0 = 1;
LAB_1004499f0:
        local_7f8 = 0;
        uStack_7f0 = 0;
        local_7e8 = 0;
        local_800 = &PTR_FUN_101496b18;
        local_7dc = DAT_1018589d8;
        local_7d8._0_4_ = 0;
        local_7b8 = 0;
        local_7cc = 0;
        uStack_7c4 = 0;
        local_7b0 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_7e4 = uVar6;
        uStack_7e0 = uVar1;
        uVar6 = FUN_1003d4e0c(PTR_s_Buff_Skaarf_Burn_10185c7e8);
        local_7d8 = CONCAT44(local_7d8._4_4_,uVar6);
        (*(code *)local_800[4])(&local_800,&DAT_101e47d30);
        local_83c = *(undefined4 *)(lVar7 + 0x260);
        uStack_838 = *(undefined4 *)(local_6d0[uVar11] + 0x260);
        local_850 = 0;
        uStack_848 = 0;
        local_840 = 0;
        local_858 = &PTR_FUN_101496b18;
        local_834 = DAT_1018589d8;
        local_830 = 0x3ecccccd00000000;
        local_828 = 1;
        local_810 = 0;
        local_824 = 0;
        uStack_81c = 0;
        local_808 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        uVar6 = FUN_1003d4e0c(PTR_s_Buff_Skaarf_GoopPoolBurningSlow_10185c820);
        local_830 = CONCAT44(local_830._4_4_,uVar6);
        (*(code *)local_858[4])(&local_858,&DAT_101e47d30);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  local_7a8 = &PTR_FUN_101499960;
  local_7a0 = 0;
  local_780 = 0;
  uStack_76c = 0x3f800000bf800000;
  local_774 = 0xc0000000bf800000;
  local_764 = 0xff;
  uStack_758 = 0xffffffff00000000;
  local_760 = 0xffffffff00000000;
  local_798 = local_798 & 0xfc | 1;
  lVar8 = FUN_1003e10f0();
  if (lVar10 != 0) {
    local_7a0 = lVar10;
  }
  local_778 = 0x415b0a3e;
  local_74e = local_74e & 0xe0 | *(byte *)(lVar8 + 0xe5) | 0x14;
  local_788 = PTR_s_SkaarfGoopPool_10185bb30;
  local_750 = 0xc110;
  local_794 = uVar14;
  fStack_790 = fVar16;
  local_78c = uVar15;
  uVar4 = FUN_1003a6ce4(&local_7a8,local_6d0,200,0);
  if (0 < (int)uVar4) {
    uVar11 = 0;
    do {
      local_7e4 = *(undefined4 *)(lVar7 + 0x260);
      uStack_7e0 = *(undefined4 *)(local_6d0[uVar11] + 0x260);
      local_7f8 = 0;
      uStack_7f0 = 0;
      local_7e8 = 0;
      local_800 = &PTR_FUN_101496b18;
      local_7dc = DAT_1018589d8;
      local_7d8 = 0xbf80000000000000;
      local_7d0 = 1;
      local_7b8 = 0;
      local_7cc = 0;
      uStack_7c4 = 0;
      local_7b0 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uVar14 = FUN_1003d4e0c(PTR_s_Buff_Skaarf_GoopPoolOnFire_10185c818);
      local_7d8 = CONCAT44(local_7d8._4_4_,uVar14);
      (*(code *)local_800[4])(&local_800,&DAT_101e47d30);
      plVar9 = (long *)(local_6d0[uVar11] + 0x18);
      do {
        lVar8 = *plVar9;
        plVar9 = (long *)(lVar8 + 0x20);
      } while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184daa8);
      lVar10 = *(long *)(lVar8 + 0x28);
      lVar8 = lVar10;
      if (lVar10 != 0) {
LAB_100449c84:
        if ((*(int *)(lVar8 + 0x314) != DAT_101d3ee44) || (*(int *)(lVar8 + 0x310) != 0))
        goto LAB_100449c98;
        local_83c = *(undefined4 *)(local_6d0[uVar11] + 0x260);
        for (; (*(int *)(lVar10 + 0x314) != DAT_101d3ee44 || (*(int *)(lVar10 + 0x310) != 0));
            lVar10 = *(long *)(lVar10 + 0x350)) {
        }
        uStack_838 = *(undefined4 *)(lVar10 + 0x30c);
        local_850 = 0;
        uStack_848 = 0;
        local_840 = 0;
        local_858 = &PTR_FUN_101496cd8;
        FUN_100496580(&local_858,&DAT_101e47d30);
      }
LAB_100449cec:
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100449c98:
  plVar9 = (long *)(lVar8 + 0x350);
  lVar8 = *plVar9;
  if (*plVar9 == 0) goto LAB_100449cec;
  goto LAB_100449c84;
}




undefined4 FUN_100449d3c(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_100449d50(long param_1,long param_2,float *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar2 = FUN_100345d90();
  fVar3 = (float)FUN_1003dfe60(uVar2,1,0,0x19,0);
  *param_3 = fVar3;
  uVar1 = *(uint *)(param_2 + 0x2f4);
  if ((uVar1 & 0x800004) != 0) {
    fVar4 = (float)FUN_1003dfe60(uVar2,1,8,0x19,0);
    fVar3 = fVar4 * fVar3;
    *param_3 = fVar3;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    *param_3 = fVar3 * 0.5;
  }
  return;
}




void FUN_100449df4(undefined8 param_1,long param_2)

{
  *(bool *)(param_2 + 0x60) =
       1.1920929e-07 <= ABS((float)DAT_101dc1cb8) || 1.1920929e-07 <= ABS(DAT_101dc1cb8._4_4_);
  *(ulong *)(param_2 + 100) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
  return;
}




void FUN_100449e3c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




void FUN_100449e50(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined **local_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined1 local_778;
  undefined4 local_774;
  undefined4 uStack_770;
  int local_76c;
  undefined8 local_768;
  undefined4 local_760;
  undefined8 local_75c;
  undefined8 uStack_754;
  undefined8 local_748;
  undefined4 local_740;
  undefined **local_738;
  long local_730;
  undefined1 local_728;
  undefined4 local_724;
  float fStack_720;
  undefined4 local_71c;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined4 local_708;
  undefined4 local_704;
  undefined4 local_700;
  undefined8 local_6fc;
  undefined1 local_6f4;
  undefined4 local_6f0;
  undefined8 local_6ec;
  undefined4 local_6e4;
  undefined2 local_6e0;
  byte local_6de;
  long local_6d8;
  long local_6d0 [200];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_6d8);
  lVar4 = *(long *)(*(long *)(local_6d8 + 0x10) + 0x10);
  uVar15 = *(undefined4 *)(lVar4 + 0x250);
  fVar7 = *(float *)(lVar4 + 0x254);
  uVar16 = *(undefined4 *)(lVar4 + 600);
  fVar8 = *(float *)(lVar4 + 0x2ec);
  local_738 = &PTR_FUN_101499960;
  local_718 = 0;
  uStack_710 = 0;
  local_704 = 0xbf800000;
  local_6fc = 0x3f800000bf800000;
  local_6f4 = 0xff;
  local_6ec = 0xffffffff;
  local_6e4 = 0xffffffff;
  local_728 = 1;
  lVar2 = FUN_1003e10f0();
  local_708 = 0x42c80000;
  local_6e0 = 0xc130;
  local_6de = *(byte *)(lVar2 + 0xe5) | 0x14;
  local_730 = lVar4;
  local_724 = uVar15;
  fStack_720 = fVar8 + fVar7;
  local_71c = uVar16;
  local_700 = _cosf(0x3f490fdb);
  local_6f0 = 0x40000;
  uVar1 = FUN_1003a6ce4(&local_738,local_6d0,200,0);
  if (0 < (int)uVar1) {
    uVar5 = (ulong)uVar1;
    plVar6 = local_6d0;
    do {
      lVar2 = *plVar6;
      fVar7 = *(float *)(lVar2 + 0x240);
      fVar8 = *(float *)(lVar2 + 0x244);
      fVar9 = *(float *)(lVar2 + 0x248);
      fVar10 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
      if (1e-08 <= fVar10) {
        fVar10 = 1.0 / SQRT(fVar10);
        fVar7 = fVar7 * fVar10;
        fVar8 = fVar8 * fVar10;
        fVar9 = fVar9 * fVar10;
      }
      else {
        fVar7 = 1.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
      }
      fVar10 = *(float *)(lVar4 + 0x250) - *(float *)(lVar2 + 0x250);
      fVar11 = (*(float *)(lVar4 + 0x2ec) + *(float *)(lVar4 + 0x254)) -
               (*(float *)(lVar2 + 0x254) + *(float *)(lVar2 + 0x2ec));
      fVar12 = *(float *)(lVar4 + 600) - *(float *)(lVar2 + 600);
      fVar13 = fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11;
      if ((1e-08 < fVar13) &&
         (fVar14 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7, 1e-08 < fVar14)) {
        fVar17 = 1.0 / SQRT(fVar13);
        fVar13 = 1.0 / SQRT(fVar14);
        fVar7 = fVar7 * fVar13 * fVar10 * fVar17 + fVar11 * fVar17 * fVar8 * fVar13 +
                fVar12 * fVar17 * fVar9 * fVar13;
        if (*(char *)(lVar2 + 0x264) == *(char *)(lVar4 + 0x264)) {
          if (0.0 < fVar7) {
            local_774 = *(undefined4 *)(lVar4 + 0x260);
            uStack_770 = *(undefined4 *)(lVar2 + 0x260);
            puVar3 = PTR_s_Buff_Skaarf_Ult_SpeedBoost_10185c828;
LAB_10044a0c0:
            local_788 = 0;
            uStack_780 = 0;
            local_778 = 0;
            local_790 = &PTR_FUN_101496b18;
            local_76c = DAT_1018589d8;
            local_768 = 0x3e99999a00000000;
            local_760 = 1;
            local_748 = 0;
            local_75c = 0;
            uStack_754 = 0;
            local_740 = DAT_101dc0b88;
            DAT_1018589d8 = DAT_1018589d8 + 1;
            uVar15 = FUN_1003d4e0c(puVar3);
            local_768 = CONCAT44(local_768._4_4_,uVar15);
            (*(code *)local_790[4])(&local_790,&DAT_101e47d30);
          }
        }
        else if (fVar7 < 0.0) {
          local_774 = *(undefined4 *)(lVar4 + 0x260);
          uStack_770 = *(undefined4 *)(lVar2 + 0x260);
          puVar3 = PTR_s_Buff_Skaarf_Ult_Slow_10185c830;
          goto LAB_10044a0c0;
        }
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10044a174(undefined8 param_1)

{
  undefined4 uVar1;
  undefined **local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  int local_13c;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  int local_e4;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  int local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  FUN_10042ecbc(param_1,&local_58);
  if (*(int *)(local_58 + 0x310) != 1) {
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(local_58 + 0x10) + 0x10) + 0x260);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_b0 = &PTR_FUN_101496b18;
    local_8c = DAT_1018589d8;
    local_84 = 0x140400000;
    local_68 = 0;
    local_74 = 0;
    local_7c = 0;
    local_60 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_94 = uVar1;
    uStack_90 = uVar1;
    local_88 = FUN_1003d4e0c(PTR_s_Buff_Skaarf_Blow_10185b0b0);
    FUN_10049639c(&local_b0,&DAT_101e47d30);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_108 = &PTR_FUN_101496b18;
    local_e4 = DAT_1018589d8;
    local_dc = 0x13fc00000;
    local_c0 = 0;
    local_cc = 0;
    local_d4 = 0;
    local_b8 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_ec = uVar1;
    uStack_e8 = uVar1;
    local_e0 = FUN_1003d4e0c(PTR_s_Buff_Skaarf_Blow_SpeedBoost_10185b0b8);
    FUN_10049639c(&local_108,&DAT_101e47d30);
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    local_160 = &PTR_FUN_101496b18;
    local_13c = DAT_1018589d8;
    local_134 = 0x140400000;
    local_118 = 0;
    local_124 = 0;
    local_12c = 0;
    local_110 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_144 = uVar1;
    uStack_140 = uVar1;
    local_138 = FUN_1003d4e0c(PTR_s_Buff_Revealed_10185a448);
    FUN_10049639c(&local_160,&DAT_101e47d30);
  }
  return;
}




void FUN_10044a2fc(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined1 local_830;
  undefined4 local_82c;
  undefined4 uStack_828;
  undefined **local_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined1 local_808;
  undefined4 local_804;
  undefined4 uStack_800;
  int local_7fc;
  undefined8 local_7f8;
  undefined4 local_7f0;
  undefined8 local_7ec;
  undefined8 uStack_7e4;
  undefined8 local_7d8;
  undefined4 local_7d0;
  undefined **local_7c8;
  long local_7c0;
  undefined1 local_7b8;
  undefined4 local_7b4;
  float local_7b0;
  undefined4 local_7ac;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined4 local_798;
  undefined4 local_794;
  undefined4 uStack_790;
  undefined8 local_78c;
  undefined1 local_784;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined2 local_770;
  byte local_76e;
  undefined **local_758;
  long local_750;
  undefined1 local_748;
  undefined4 local_744;
  float local_740;
  undefined4 local_73c;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_720;
  undefined8 local_71c;
  undefined1 local_714;
  undefined4 local_710;
  undefined8 local_70c;
  undefined4 local_704;
  undefined2 local_700;
  byte local_6fe;
  long local_6f8;
  long local_6f0 [200];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_6f8);
  lVar11 = *(long *)(*(long *)(local_6f8 + 0x10) + 0x10);
  uVar23 = *(undefined4 *)(lVar11 + 0x250);
  uVar24 = *(undefined4 *)(lVar11 + 600);
  fVar25 = *(float *)(lVar11 + 0x2ec) + *(float *)(lVar11 + 0x254);
  local_758 = &PTR_FUN_101499960;
  local_738 = 0;
  uStack_730 = 0;
  local_724 = 0xbf800000;
  local_71c = 0x3f800000bf800000;
  local_714 = 0xff;
  local_70c = 0xffffffff;
  local_704 = 0xffffffff;
  local_748 = 1;
  lVar8 = FUN_1003e10f0();
  local_728 = 0x42f20000;
  local_6fe = *(byte *)(lVar8 + 0xe5) | 0x14;
  local_700 = 0xc130;
  local_750 = lVar11;
  local_744 = uVar23;
  local_740 = fVar25;
  local_73c = uVar24;
  local_720 = _cosf(0x3f060a92);
  local_710 = 0x40000;
  uVar4 = FUN_1003a6ce4(&local_758,local_6f0,200,0);
  fVar14 = (float)FUN_1003dfe60(lVar11,2,0,0x19,0);
  puVar9 = PTR_s_Buff_Skaarf_Talent_FlashFire_10185c840;
  lVar8 = FUN_100345d90(*(undefined4 *)(lVar11 + 0x260));
  if ((lVar8 != 0) && (iVar5 = FUN_1003a47d0(lVar8,puVar9), iVar5 != 0)) {
    local_7c8 = (undefined **)CONCAT44(local_7c8._4_4_,DAT_101d90d2c);
    fVar15 = (float)FUN_1003dfee8(lVar11,&local_7c8,1,9);
    fVar14 = fVar15 * fVar14;
  }
  fVar15 = (float)FUN_1003dfe60(lVar11,2,10,0x19,0);
  if (0 < (int)uVar4) {
    uVar13 = 0;
    fVar14 = fVar14 / fVar15;
    do {
      lVar8 = local_6f0[uVar13];
      fVar15 = *(float *)(lVar8 + 0x240);
      fVar16 = *(float *)(lVar8 + 0x244);
      fVar17 = *(float *)(lVar8 + 0x248);
      fVar18 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
      if (1e-08 <= fVar18) {
        fVar18 = 1.0 / SQRT(fVar18);
        fVar15 = fVar15 * fVar18;
        fVar16 = fVar16 * fVar18;
        fVar17 = fVar17 * fVar18;
      }
      else {
        fVar15 = 1.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
      }
      uVar7 = *(undefined4 *)(lVar11 + 0x260);
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar2 = *(uint *)(lVar8 + 0x2f4);
      fVar18 = *(float *)(lVar11 + 0x250) - *(float *)(lVar8 + 0x250);
      fVar19 = (*(float *)(lVar11 + 0x2ec) + *(float *)(lVar11 + 0x254)) -
               (*(float *)(lVar8 + 0x254) + *(float *)(lVar8 + 0x2ec));
      fVar20 = *(float *)(lVar11 + 600) - *(float *)(lVar8 + 600);
      fVar21 = fVar18 * fVar18 + fVar20 * fVar20 + fVar19 * fVar19;
      if ((1e-08 < fVar21) &&
         (fVar22 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15, 1e-08 < fVar22)) {
        fVar26 = 1.0 / SQRT(fVar21);
        fVar21 = 1.0 / SQRT(fVar22);
        fVar15 = fVar15 * fVar21 * fVar18 * fVar26 + fVar19 * fVar26 * fVar16 * fVar21 +
                 fVar20 * fVar26 * fVar17 * fVar21;
        if (*(char *)(lVar8 + 0x264) == *(char *)(lVar11 + 0x264)) {
          puVar9 = PTR_s_Buff_Skaarf_Ult_SpeedBoost_10185c828;
          if (fVar15 < 0.0) {
LAB_10044a60c:
            local_7c8 = &PTR_FUN_101496b18;
            local_7a8 = (undefined *)CONCAT44(DAT_1018589d8,uVar1);
            local_7a0 = 0x3e99999a00000000;
            local_798 = 1;
            local_780 = 0;
            local_78c = 0;
            uStack_778 = CONCAT44(uStack_778._4_4_,DAT_101dc0b88);
            DAT_1018589d8 = DAT_1018589d8 + 1;
            local_7ac = uVar7;
            uVar6 = FUN_1003d4e0c(puVar9);
            local_7a0 = CONCAT44(local_7a0._4_4_,uVar6);
            (*(code *)local_7c8[4])(&local_7c8,&DAT_101e47d30);
          }
        }
        else {
          puVar9 = PTR_s_Buff_Skaarf_Ult_Slow_10185c830;
          if (0.0 < fVar15) goto LAB_10044a60c;
        }
      }
      lVar8 = local_6f0[uVar13];
      if (*(char *)(lVar8 + 0x264) != *(char *)(lVar11 + 0x264)) {
        fVar16 = *(float *)(lVar8 + 0x250) - *(float *)(lVar11 + 0x250);
        fVar15 = *(float *)(lVar8 + 600) - *(float *)(lVar11 + 600);
        fVar17 = fVar16 * fVar16 + fVar15 * fVar15;
        if (1e-08 <= fVar17) {
          fVar17 = SQRT(fVar17);
          local_848 = (undefined **)CONCAT44(fVar15 / fVar17,fVar16 / fVar17);
        }
        else {
          local_848 = DAT_101873a50;
        }
        uVar12 = **(undefined8 **)(local_6f8 + 0x40);
        fVar15 = fVar14;
        if ((uVar2 & 1) == 0) {
          fVar15 = (float)FUN_1003dfe60(fVar14,lVar11,2,9,0x19,0);
          fVar15 = fVar15 * fVar14;
        }
        FUN_1003462a0(fVar15,&local_7c8,uVar7,uVar1,1,2,&local_848,uVar12,0,1);
        fVar15 = (float)FUN_1003dfe60(lVar11,2,3,0x19,0);
        local_78c = CONCAT44(local_78c._4_4_,(float)local_78c + fVar15);
        FUN_10010cbe0(&local_7c8);
        lVar8 = *(long *)(*(long *)(lVar11 + 0x58) + 0x50);
        if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x239) & 0x1c) != 0)) {
          plVar10 = (long *)(local_6f0[uVar13] + 0x18);
          do {
            lVar8 = *plVar10;
            plVar10 = (long *)(lVar8 + 0x20);
          } while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184daa8);
          for (lVar8 = *(long *)(lVar8 + 0x28); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x350)) {
            if ((*(int *)(lVar8 + 0x314) == DAT_101d3ee30) && (*(int *)(lVar8 + 0x310) == 0)) {
              local_7f0 = 0;
              goto LAB_10044a7ec;
            }
          }
          local_7f0 = 1;
LAB_10044a7ec:
          local_7f8._4_4_ = *(undefined4 *)(**(long **)(*(long *)(lVar11 + 0x38) + 0x228) + 8);
          local_804 = *(undefined4 *)(lVar11 + 0x260);
          uStack_800 = *(undefined4 *)(local_6f0[uVar13] + 0x260);
          local_818 = 0;
          uStack_810 = 0;
          local_808 = 0;
          local_820 = &PTR_FUN_101496b18;
          local_7fc = DAT_1018589d8;
          local_7f8._0_4_ = 0;
          local_7d8 = 0;
          local_7ec = 0;
          uStack_7e4 = 0;
          local_7d0 = DAT_101dc0b88;
          DAT_1018589d8 = DAT_1018589d8 + 1;
          uVar7 = FUN_1003d4e0c(PTR_s_Buff_Skaarf_Burn_10185c7e8);
          local_7f8 = CONCAT44(local_7f8._4_4_,uVar7);
          (*(code *)local_820[4])(&local_820,&DAT_101e47d30);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
  local_7c8 = &PTR_FUN_101499960;
  local_7a0 = 0;
  local_794 = 0xbf800000;
  local_78c = 0x3f800000bf800000;
  local_784 = 0xff;
  uStack_778 = 0xffffffff00000000;
  local_780 = 0xffffffff00000000;
  local_7b8 = 1;
  lVar8 = FUN_1003e10f0();
  bVar3 = *(byte *)(lVar8 + 0xe5);
  local_798 = 0x42c80000;
  local_7c0 = lVar11;
  local_7b4 = uVar23;
  local_7b0 = fVar25;
  local_7ac = uVar24;
  uStack_790 = _cosf(0x3f490fdb);
  local_7a8 = PTR_s_SkaarfGoopPool_10185bb30;
  local_770 = 0xc110;
  local_76e = bVar3 | 0x14;
  uVar4 = FUN_1003a6ce4(&local_7c8,local_6f0,200,0);
  if (0 < (int)uVar4) {
    uVar13 = 0;
    do {
      local_804 = *(undefined4 *)(lVar11 + 0x260);
      uStack_800 = *(undefined4 *)(local_6f0[uVar13] + 0x260);
      local_818 = 0;
      uStack_810 = 0;
      local_808 = 0;
      local_820 = &PTR_FUN_101496b18;
      local_7fc = DAT_1018589d8;
      local_7f8 = 0xbf80000000000000;
      local_7f0 = 1;
      local_7d8 = 0;
      local_7ec = 0;
      uStack_7e4 = 0;
      local_7d0 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uVar23 = FUN_1003d4e0c(PTR_s_Buff_Skaarf_GoopPoolOnFire_10185c818);
      local_7f8 = CONCAT44(local_7f8._4_4_,uVar23);
      (*(code *)local_820[4])(&local_820,&DAT_101e47d30);
      plVar10 = (long *)(local_6f0[uVar13] + 0x18);
      do {
        lVar8 = *plVar10;
        plVar10 = (long *)(lVar8 + 0x20);
      } while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184daa8);
      for (lVar8 = *(long *)(lVar8 + 0x28); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x350)) {
        if ((*(int *)(lVar8 + 0x314) == DAT_101d3ee44) && (*(int *)(lVar8 + 0x310) == 0)) {
          uStack_828 = *(undefined4 *)(lVar8 + 0x30c);
          local_82c = *(undefined4 *)(local_6f0[uVar13] + 0x260);
          local_840 = 0;
          uStack_838 = 0;
          local_830 = 0;
          local_848 = &PTR_FUN_101496cd8;
          FUN_100496580(&local_848,&DAT_101e47d30);
          break;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10044aab0(long *param_1,float *param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  fVar9 = *(float *)(lVar2 + 0x250);
  fVar7 = *(float *)(lVar2 + 0x254);
  fVar10 = *(float *)(lVar2 + 600);
  fVar8 = *(float *)(lVar2 + 0x2ec);
  fVar3 = *(float *)(lVar2 + 0x240);
  fVar4 = *(float *)(lVar2 + 0x244);
  fVar5 = *(float *)(lVar2 + 0x248);
  fVar6 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  if (1e-08 <= fVar6) {
    fVar6 = 1.0 / SQRT(fVar6);
    fVar3 = fVar3 * fVar6;
    fVar4 = fVar4 * fVar6;
    fVar5 = fVar5 * fVar6;
  }
  else {
    fVar3 = 1.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
  }
  iVar1 = _rand();
  fVar11 = (float)iVar1 * 2.3283064e-09 + 3.0;
  iVar1 = _rand();
  fVar6 = ((float)iVar1 * 1.1175871e-09 + -1.2) * fVar11;
  *param_2 = (fVar9 + fVar3 * fVar11) - fVar5 * fVar6;
  param_2[1] = fVar8 + fVar7 + fVar4 * (fVar6 + fVar11);
  param_2[2] = fVar10 + fVar5 * fVar11 + fVar3 * fVar6;
  return;
}




void FUN_10044abbc(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  if (((int)uVar1 == 0x1f) || (1 < *(ushort *)(param_1 + uVar1 * 0x38 + 0x90) - 3)) {
    local_2c = *(undefined4 *)(param_1 + 0x260);
    uStack_28 = *(undefined4 *)(param_2 + 0x30c);
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_48 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_48,&DAT_101e47d30);
  }
  plVar2 = (long *)(param_3 + 0x18);
  do {
    lVar3 = *plVar2;
    plVar2 = (long *)(lVar3 + 0x20);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
  lVar3 = *(long *)(lVar3 + 0x28);
  if (lVar3 != 0) {
    do {
      if (((*(int *)(lVar3 + 0x314) == DAT_101d3ee6c) && (*(int *)(lVar3 + 0x310) == 0)) &&
         ((*(int *)(param_1 + 0x260) == -1 || (*(int *)(lVar3 + 0x308) == *(int *)(param_1 + 0x260))
          ))) {
        uStack_28 = *(undefined4 *)(lVar3 + 0x30c);
        local_2c = *(undefined4 *)(param_3 + 0x260);
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        local_48 = &PTR_FUN_101496cd8;
        FUN_100496580(&local_48,&DAT_101e47d30);
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x350);
    } while (lVar3 != 0);
  }
  return;
}




void FUN_10044acd8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  lVar1 = *(long *)(*(long *)(local_18 + 0x10) + 0x10);
  plVar3 = (long *)(lVar1 + 0x18);
  do {
    lVar4 = *plVar3;
    plVar3 = (long *)(lVar4 + 0x20);
  } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
  lVar2 = *(long *)(lVar4 + 0x28);
  lVar4 = lVar2;
  if (lVar2 != 0) {
    do {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d3ee70) && (*(int *)(lVar4 + 0x310) == 0)) {
        return;
      }
      plVar3 = (long *)(lVar4 + 0x350);
      lVar4 = *plVar3;
    } while (*plVar3 != 0);
    do {
      if ((*(int *)(lVar2 + 0x314) == DAT_101d3ee74) && (*(int *)(lVar2 + 0x310) == 0)) {
        return;
      }
      lVar2 = *(long *)(lVar2 + 0x350);
    } while (lVar2 != 0);
  }
  local_54 = *(undefined4 *)(lVar1 + 0x260);
  local_44 = *(undefined4 *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_70 = &PTR_FUN_101496b18;
  local_4c = DAT_1018589d8;
  local_40 = 1;
  local_28 = 0;
  local_34 = 0;
  local_3c = 0;
  local_20 = DAT_101dc0b88;
  DAT_1018589d8 = DAT_1018589d8 + 1;
  uStack_50 = local_54;
  local_48 = FUN_1003d4e0c(PTR_s_Buff_Skye_CircleStrafing_10185b0e0);
  FUN_10049639c(&local_70,&DAT_101e47d30);
  return;
}




void FUN_10044ae04(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  long local_38;
  
  FUN_10042ecbc(param_1,&local_38);
  lVar3 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
  lVar1 = FUN_1003be600(lVar3);
  if (lVar1 == 0) {
    local_44 = *(undefined4 *)(lVar3 + 0x260);
    uStack_40 = *(undefined4 *)(local_38 + 0x30c);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_60,&DAT_101e47d30);
  }
  else {
    fVar4 = *(float *)(lVar3 + 0x250) - *(float *)(lVar1 + 0x250);
    fVar7 = (*(float *)(lVar3 + 0x2ec) + *(float *)(lVar3 + 0x254)) -
            (*(float *)(lVar1 + 0x254) + *(float *)(lVar1 + 0x2ec));
    fVar8 = *(float *)(lVar3 + 600) - *(float *)(lVar1 + 600);
    fVar5 = (float)FUN_1003df710(lVar3,5,1);
    lVar2 = *(long *)(*(long *)(lVar3 + 0x58) + 0x70);
    fVar6 = 0.0;
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
      fVar6 = (float)FUN_1003dfe60(lVar3,4,7,0x19,0);
    }
    if ((fVar6 + fVar5) * (fVar6 + fVar5) < fVar4 * fVar4 + fVar8 * fVar8 + fVar7 * fVar7) {
      FUN_10044abbc(lVar3,local_38,lVar1);
    }
    lVar2 = *(long *)(lVar1 + 0x80) + (ulong)*(uint *)(*(long *)(lVar1 + 0x80) + 0x5c) * 0x19 +
            (ulong)*(byte *)(lVar3 + 0x264);
    if ((*(byte *)(lVar2 + 0x28) & ((*(byte *)(lVar2 + 0x38) | *(byte *)(lVar2 + 0x30)) ^ 0xff)) !=
        0) {
      FUN_10044abbc(lVar3,local_38,lVar1);
    }
  }
  return;
}




void FUN_10044af70(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_28;
  
  FUN_10042ecbc(param_1,&local_28);
  uVar2 = *(undefined8 *)(*(long *)(local_28 + 0x10) + 0x10);
  lVar1 = FUN_1003be600(uVar2);
  if (lVar1 != 0) {
    FUN_10044abbc(uVar2,local_28,lVar1);
  }
  return;
}




void FUN_10044afc0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_2c;
  long local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042fb4c(param_1,&local_28,&local_2c);
    lVar2 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
    lVar1 = FUN_1003be600(lVar2);
    if (local_2c == DAT_101d2cb88) {
      if (lVar1 == 0) {
        local_3c = *(undefined4 *)(lVar2 + 0x260);
        uStack_38 = *(undefined4 *)(local_28 + 0x30c);
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0;
        local_58 = &PTR_FUN_101496cd8;
        FUN_100496580(&local_58,&DAT_101e47d30,0);
      }
      else {
        FUN_10044abbc(lVar2,local_28);
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044b06c(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  long local_28;
  
  FUN_10042ecbc(param_1,&local_28);
  lVar4 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
  lVar5 = *(long *)(lVar4 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != ram0x0001018672a0))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  lVar1 = FUN_1003be600(lVar4);
  uVar3 = DAT_101dc0b88;
  if (lVar1 == 0) {
    if (DAT_101d23a38 != '\0') {
      local_34 = *(undefined4 *)(lVar4 + 0x260);
      uStack_30 = *(undefined4 *)(local_28 + 0x30c);
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = &PTR_FUN_101496cd8;
      FUN_100496580(&local_50,&DAT_101e47d30);
    }
  }
  else {
    if (*(long *)(lVar5 + 0x10) == lVar1) {
      bVar2 = *(byte *)(lVar5 + 0x818) & 0xf9;
      *(undefined8 *)(lVar5 + 0x7e8) = 0;
    }
    else {
      bVar2 = *(byte *)(lVar5 + 0x818) | 6;
      *(byte *)(lVar5 + 0x818) = bVar2;
      *(long *)(lVar5 + 0x7e8) = lVar1 + 0x28;
      uVar3 = *(undefined4 *)(lVar1 + 0x30);
    }
    *(undefined4 *)(lVar5 + 0x7f0) = uVar3;
    *(byte *)(lVar5 + 0x818) = bVar2 | 0x20;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044b160(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  uVar2 = DAT_101dc0b88;
  lVar3 = *(long *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x18);
  iVar4 = *(int *)(*(long *)(lVar3 + 8) + 0xa4);
  lVar5 = lVar3;
  iVar1 = iVar4;
  while (iVar1 != DAT_10184daa8) {
    lVar5 = *(long *)(lVar5 + 0x20);
    iVar1 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
  }
  lVar5 = *(long *)(lVar5 + 0x28);
  while( true ) {
    if (lVar5 == 0) {
      while (iVar4 != ram0x0001018672a0) {
        lVar3 = *(long *)(lVar3 + 0x20);
        iVar4 = *(int *)(*(long *)(lVar3 + 8) + 0xa4);
      }
      *(undefined8 *)(lVar3 + 0x7e8) = 0;
      *(undefined4 *)(lVar3 + 0x7f0) = uVar2;
      *(byte *)(lVar3 + 0x818) = *(byte *)(lVar3 + 0x818) & 0xd9;
      return;
    }
    if ((*(int *)(lVar5 + 0x314) == DAT_101d3ee70) && (*(int *)(lVar5 + 0x310) == 0)) break;
    lVar5 = *(long *)(lVar5 + 0x350);
  }
  return;
}




undefined4 FUN_10044b234(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*param_1 + 0x318);
  uVar1 = FUN_1003df710(param_2,2,1);
  uVar1 = NEON_fminnm(uVar2,uVar1);
  return uVar1;
}




void FUN_10044b268(long *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1003a47d0(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),
                        PTR_s_Buff_Skye_Barrage_10185b0c8);
  uVar2 = 0x3f000000;
  if (iVar1 == 0) {
    uVar2 = 0x3f800000;
  }
  *param_2 = uVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_10044b2b0(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar9 = (float)FUN_1003df710(param_2,8,1);
  uVar6 = FUN_1003a47d0(param_2,PTR_s_Buff_Skye_CircleStrafing_10185b0e0);
  if (((uVar6 & 1) != 0) ||
     (iVar5 = FUN_1003a47d0(param_2,PTR_s_Buff_Skye_Barrage_10185b0c8), fVar10 = fVar9, iVar5 != 0))
  {
    lVar8 = *(long *)(param_2 + 0x18);
    if (lVar8 == 0) {
      pfVar7 = (float *)&DAT_1013cd800;
    }
    else {
      pfVar7 = (float *)&DAT_1013cd800;
      do {
        if (*(int *)(*(long *)(lVar8 + 8) + 0xa4) == ram0x0001018672a0) {
          pfVar7 = (float *)(lVar8 + 0x7bc);
          break;
        }
        lVar8 = *(long *)(lVar8 + 0x20);
      } while (lVar8 != 0);
    }
    fVar10 = ABS(pfVar7[1]);
    fVar12 = ABS(pfVar7[2]);
    bVar1 = false;
    bVar3 = false;
    if (ABS(*pfVar7) < 1.1920929e-07) {
      bVar1 = false;
      bVar3 = true;
      if (!NAN(fVar10)) {
        bVar1 = fVar10 < 1.1920929e-07;
        bVar3 = false;
      }
    }
    bVar2 = false;
    bVar4 = false;
    if (bVar1 != bVar3) {
      bVar2 = false;
      bVar4 = true;
      if (!NAN(fVar12)) {
        bVar2 = fVar12 < 1.1920929e-07;
        bVar4 = false;
      }
    }
    fVar10 = 0.0;
    if (bVar2 == bVar4) {
      fVar10 = *(float *)(param_2 + 0x240);
      fVar12 = *(float *)(param_2 + 0x244);
      fVar11 = *(float *)(param_2 + 0x248);
      fVar13 = fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11;
      if (1e-08 <= fVar13) {
        fVar13 = 1.0 / SQRT(fVar13);
        fVar10 = fVar10 * fVar13;
        fVar12 = fVar12 * fVar13;
        fVar11 = fVar11 * fVar13;
      }
      else {
        fVar10 = 1.0;
        fVar12 = 0.0;
        fVar11 = 0.0;
      }
      fVar11 = fVar11 * pfVar7[2] + pfVar7[1] * fVar12 + *pfVar7 * fVar10;
      fVar10 = (float)FUN_1003df710(param_2,10,1);
      fVar12 = (float)_cosf((fVar10 * -0.0027777778 + 0.5) * 3.1415927);
      if (-fVar12 <= fVar11) {
        fVar10 = fVar9;
        if (fVar11 <= fVar12) goto LAB_10044b484;
        fVar12 = 1.0 - fVar12;
        fVar10 = (float)FUN_1003df710(param_2,7,1);
        fVar9 = (fVar9 - fVar10) - (fVar9 - fVar10) * fVar11;
      }
      else {
        fVar12 = fVar12 + 1.0;
        fVar10 = (float)FUN_1003df710(param_2,9,1);
        fVar9 = (fVar9 - fVar10) + (fVar9 - fVar10) * fVar11;
      }
      fVar10 = fVar9 / fVar12 + fVar10;
    }
  }
LAB_10044b484:
  fVar9 = (float)FUN_100432da4(*param_1);
  return fVar9 * fVar10;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10044b4a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return &DAT_1013cd800;
  }
  do {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) {
      return (undefined8 *)(lVar1 + 0x7bc);
    }
    lVar1 = *(long *)(lVar1 + 0x20);
  } while (lVar1 != 0);
  return &DAT_1013cd800;
}




void FUN_10044b4ec(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c958;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10044b5d4(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined4 local_54;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  undefined8 local_40;
  undefined4 local_38;
  float fStack_34;
  undefined4 local_30;
  float fStack_2c;
  float local_28;
  int local_24;
  undefined4 uStack_20;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  if (DAT_101d23a38 != '\0') {
    lVar1 = *(long *)(*(long *)(local_18 + 0x10) + 0x10);
    local_38 = *(undefined4 *)(lVar1 + 0x250);
    local_30 = *(undefined4 *)(lVar1 + 600);
    fStack_34 = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
    fVar2 = *(float *)(lVar1 + 0x240);
    fVar3 = *(float *)(lVar1 + 0x248);
    fVar4 = fVar2 * fVar2 + fVar3 * fVar3;
    local_48 = (float)DAT_101873a50;
    fStack_44 = DAT_101873a50._4_4_;
    if (1.1920929e-06 <= fVar4) {
      fVar4 = SQRT(fVar4);
      local_48 = fVar2 / fVar4;
      fStack_44 = fVar3 / fVar4;
    }
    local_58 = *(undefined1 *)(lVar1 + 0x300);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_78 = &PTR_FUN_101497058;
    local_5c = 2;
    local_56 = 0;
    local_50 = 0;
    local_54 = 0;
    local_40 = 0x259fd5230000006e;
    local_24 = DAT_1018589d8;
    uStack_20 = 0;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_57 = local_58;
    fStack_2c = local_48;
    local_28 = fStack_44;
    FUN_1004966e0(&local_78,&DAT_101e47d30);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044b6dc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  ulong local_38;
  float local_30;
  long local_28;
  
  FUN_10042ecbc(param_1,&local_28);
  lVar2 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
  lVar1 = FUN_1003be600(lVar2);
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 0x250) - *(float *)(lVar2 + 0x250);
    local_30 = *(float *)(lVar1 + 600) - *(float *)(lVar2 + 600);
    fVar4 = fVar3 * fVar3 + local_30 * local_30;
    if (1e-08 <= fVar4) {
      fVar4 = SQRT(fVar4);
      local_38 = (ulong)(uint)(fVar3 / fVar4);
      local_30 = local_30 / fVar4;
    }
    else {
      local_38 = 0x3f800000;
      local_30 = 0.0;
    }
    lVar1 = *(long *)(lVar2 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != ram0x0001018672a0))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    FUN_1003b7098(lVar1,&local_38,1);
  }
  return;
}




void FUN_10044b7b8(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  long lVar6;
  
  puVar2 = PTR_s_num_missiles_left_10185d6a8;
  lVar6 = *param_1;
  uVar3 = FUN_1004d2524(PTR_s_num_missiles_left_10185d6a8);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  puVar5 = (uint *)(**(code **)(*(long *)(lVar6 + 0x168) + 0x18))(lVar6 + 0x168,uVar4);
  pcVar1 = "RocketPod_L";
  if ((*puVar5 & 1) != 0) {
    pcVar1 = "RocketPod_R";
  }
  *param_2 = pcVar1;
  return;
}




void thunk_FUN_10044b7b8(void)

{
  FUN_10044b7b8();
  return;
}




void FUN_10044b840(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                  float *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar8 = (float)FUN_1003dfe60(param_4,2,3,0x19,0);
  puVar2 = PTR_s_num_missiles_left_10185d6a8;
  lVar7 = *param_3;
  uVar3 = FUN_1004d2524(PTR_s_num_missiles_left_10185d6a8);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  piVar5 = (int *)(**(code **)(*(long *)(lVar7 + 0x168) + 0x18))(lVar7 + 0x168,uVar4);
  iVar1 = *piVar5;
  uVar4 = FUN_100432da4(*param_3);
  fVar9 = (float)FUN_100432e08(*param_3);
  fVar10 = (float)FUN_1003dfe60(param_4,2,3,0x19,0);
  fVar11 = (float)___sincosf_stret(uVar4);
  puVar2 = PTR_s_target_pos_10185d6a0;
  lVar7 = *param_3;
  uVar3 = FUN_1004d2524(PTR_s_target_pos_10185d6a0);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar7 + 0x168) + 0x18))(lVar7 + 0x168,uVar4);
  fVar12 = pfVar6[1];
  fVar8 = (fVar9 * (float)(uint)((int)fVar8 - iVar1)) / (float)((int)fVar10 - 1);
  *param_5 = *pfVar6 + param_2 * fVar8;
  param_5[1] = 0.0;
  param_5[2] = fVar12 + fVar11 * fVar8;
  return;
}




undefined4 FUN_10044b9a0(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  
  puVar1 = PTR_s_num_missiles_left_10185d6a8;
  lVar5 = *param_1;
  uVar2 = FUN_1004d2524(PTR_s_num_missiles_left_10185d6a8);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  pbVar4 = (byte *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x18))(lVar5 + 0x168,uVar3);
  uVar2 = 0x3f800000;
  if ((*pbVar4 & 1) != 0) {
    uVar2 = 0xbf800000;
  }
  return uVar2;
}




void FUN_10044ba14(long *param_1,int *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  
  puVar1 = PTR_s_num_missiles_left_10185d6a8;
  lVar5 = *param_1;
  uVar2 = FUN_1004d2524(PTR_s_num_missiles_left_10185d6a8);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  piVar4 = (int *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x18))(lVar5 + 0x168,uVar3);
  *param_2 = *piVar4 + -1;
  return;
}




void FUN_10044ba84(undefined8 param_1,long param_2)

{
  float fVar1;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    fVar1 = (float)FUN_1003dfe60(*(long *)(param_2 + 0x28),2,7,0x19,0);
    *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) * fVar1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044bac8(undefined4 param_1,long *param_2,char *param_3,char *param_4,int param_5,
                  undefined1 param_6)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined7 local_b4;
  undefined4 uStack_ad;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  long local_68;
  
  if (((DAT_101e48128 & 1) == 0) && (iVar5 = ___cxa_guard_acquire(&DAT_101e48128), iVar5 != 0)) {
    uRam0000000101e48108 = 0xd0a0f3d4cfa0f241;
    _DAT_101e48100 = 0xcea0f0aecda0ef1b;
    uRam0000000101e48118 = 0xc4a0e0f0d3a0f88d;
    _DAT_101e48110 = 0xd2a0f6fad1a0f567;
    DAT_101e48120 = 0xc5a0e283;
    ___cxa_guard_release(&DAT_101e48128);
  }
  FUN_10042ecbc(param_2,&local_68);
  puVar2 = PTR_s_num_pfx_spawned_10185d6b0;
  lVar10 = *(long *)(*(long *)(local_68 + 0x10) + 0x10);
  uVar3 = FUN_1004d2524(PTR_s_num_pfx_spawned_10185d6b0);
  uVar6 = FUN_100015208(puVar2,uVar3,0x12345678);
  puVar7 = (uint *)(**(code **)(*param_2 + 0x10))(param_2,uVar6);
  if (*puVar7 < 9) {
    FUN_1003461dc(lVar10);
    lVar8 = FUN_100345d90();
    uVar4 = FUN_10034f06c();
    if (uVar4 != *(byte *)(lVar8 + 0x264)) {
      param_4 = param_3;
    }
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    uStack_d0 = 0;
    if (param_4 == (char *)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = 0x811c9dc5;
      cVar1 = *param_4;
      while (cVar1 != '\0') {
        param_4 = param_4 + 1;
        local_c0 = (local_c0 ^ (int)cVar1) * 0x1000193;
        cVar1 = *param_4;
      }
    }
    local_b8 = 0xffffffff;
    local_b4 = 0;
    uStack_ad = 0;
    local_a9 = 0xff;
    local_a8 = 0;
    local_a4 = DAT_101dc1cb8;
    local_9c = 0x3f8000003f800000;
    local_94 = 0x3f800000;
    local_90 = 0;
    local_88 = 0;
    local_84 = 2;
    local_7c = 0x101;
    local_78 = 0;
    uVar6 = 0;
    local_bc = param_1;
    if (*(long **)(lVar8 + 0x50) != (long *)0x0) {
      uVar6 = (**(code **)(**(long **)(lVar8 + 0x50) + 0x178))();
    }
    plVar9 = *(long **)(lVar10 + 0x50);
    if (plVar9 != (long *)0x0) {
      local_c8 = uVar6;
      local_78 = param_6;
      (**(code **)(*plVar9 + 0xa8))(plVar9,&local_e0,&DAT_101e48100 + (ulong)*puVar7 * 4);
    }
    uVar4 = 0;
    if (*puVar7 + 1 < 9 || param_5 != 1) {
      uVar4 = *puVar7 + 1;
    }
    *puVar7 = uVar4;
  }
  return;
}




void FUN_10044bd10(undefined8 param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  long local_38;
  
  FUN_10042ecbc(param_1,&local_38);
  FUN_1003461dc(*(undefined8 *)(*(long *)(local_38 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  fVar3 = *(float *)(local_38 + 0x318);
  fVar2 = (float)FUN_1003dfe60(uVar1,4,4,0x19,0);
  FUN_10044bac8(fVar2 + fVar3,param_1,"Effect_Skye_C_Reticle_Enemy","Effect_Skye_C_Reticle_Ally",0,1
               );
  return;
}




void FUN_10044bd98(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  puVar2 = PTR_s_num_pfx_spawned_10185d6b0;
  if (DAT_101d23a38 == '\0') {
    uVar3 = FUN_1004d2524(PTR_s_num_pfx_spawned_10185d6b0);
    uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
    (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
    puVar2 = PTR_s_num_pfx_spawned_10185d6b0;
    uVar3 = FUN_1004d2524(PTR_s_num_pfx_spawned_10185d6b0);
    uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x328) = 0x3d4ccccd;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044bd10;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar6 = FUN_100345d90();
  fVar9 = (float)FUN_1003dfe60(lVar6,4,3,0x19,0);
  *(float *)(param_1 + 0x318) = fVar9;
  if (*(float *)(param_1 + 0x31c) < fVar9) {
    *(float *)(param_1 + 0x31c) = fVar9;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar9 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar7 = FUN_1004303b0(param_1);
  plVar8 = (long *)FUN_100433e34(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,param_2);
  local_50[0] = FUN_1003dfe60(lVar6,4,4,0x19,0);
  local_48 = 1;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x18))(plVar8,local_50);
  (**(code **)(*plVar8 + 0x30))(plVar8,*(undefined4 *)(lVar6 + 0x260));
  return;
}




void FUN_10044bf70(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,5,0x19,0);
  return;
}




void FUN_10044bf84(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  fVar2 = *(float *)(lVar1 + 0x250);
  fVar3 = *(float *)(lVar1 + 600);
  fVar5 = *(float *)(lVar1 + 0x240);
  fVar6 = *(float *)(lVar1 + 0x244);
  fVar7 = *(float *)(lVar1 + 0x248);
  fVar4 = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
  fVar8 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  if (1e-08 <= fVar8) {
    fVar8 = 1.0 / SQRT(fVar8);
    fVar5 = fVar5 * fVar8;
    fVar6 = fVar6 * fVar8;
    fVar7 = fVar7 * fVar8;
  }
  else {
    fVar5 = 1.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  *param_2 = fVar2 - fVar5 * 5.0;
  param_2[1] = fVar4 - fVar6 * 5.0;
  param_2[2] = fVar3 - fVar7 * 5.0;
  *param_3 = fVar5 * 5.0 + fVar2;
  param_3[1] = fVar6 * 5.0 + fVar4;
  param_3[2] = fVar7 * 5.0 + fVar3;
  return;
}




void FUN_10044c034(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  float fVar8;
  long local_48;
  
  FUN_10042ecbc(param_1,&local_48);
  fVar8 = *(float *)(local_48 + 0x318);
  if (0.2 < *(float *)(local_48 + 0x31c) - fVar8) {
    lVar7 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
    plVar5 = *(long **)(lVar7 + 0x50);
    if (plVar5 != (long *)0x0) {
      iVar1 = _rand();
      puVar6 = (&PTR_s_Sound_Skye_Ability_C_Hit_1_101498128)[iVar1 % 6];
      FUN_1003461dc(lVar7);
      lVar7 = FUN_100345d90();
      uVar2 = FUN_1010a1520();
      lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
      uVar2 = FUN_1003be59c(*(undefined4 *)(lVar3 + 0x214));
      if (*(long **)(lVar7 + 0x50) == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(**(long **)(lVar7 + 0x50) + 0x178))();
      }
      (**(code **)(*plVar5 + 0x100))(uVar2,plVar5,puVar6,0,1,0xffffffff,1,uVar4);
      fVar8 = *(float *)(local_48 + 0x318);
    }
  }
  if (0.2 < fVar8) {
    FUN_10044bac8(0,param_1,"Effect_Skye_C_Explosion","Effect_Skye_C_Explosion",1,0);
  }
  return;
}




void FUN_10044c17c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  long local_38;
  long local_30;
  long local_28;
  
  FUN_10042e1f0(param_1,&local_28,&local_30);
  lVar4 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
  FUN_10042ecbc(param_1,&local_38);
  plVar1 = (long *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8);
  lVar2 = *(long *)(lVar2 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      if (*(int *)(local_30 + 0x18) == *(int *)(lVar4 + 0x260)) {
        uVar3 = (ulong)*(ushort *)(*(long *)(local_30 + 0x20) + 0x88) & 0x1f;
        if (((int)uVar3 == 0x1f) ||
           (1 < *(ushort *)(*(long *)(local_30 + 0x20) + uVar3 * 0x38 + 0x90) - 3)) {
          fVar5 = (float)(*(uint *)(local_28 + 0x344) >> 0x10) + -3.0;
          if ((0.0 < fVar5) &&
             (fVar6 = (float)(*(uint *)(local_28 + 0x344) & 0xffff) + -3.0, 0.0 < fVar6)) {
            fVar5 = *(float *)(local_30 + 0x54) - (*(float *)(local_30 + 0x54) * fVar6) / fVar5;
            if (fVar5 <= 0.0) {
              fVar5 = 0.0;
            }
            *(float *)(local_30 + 0x54) = fVar5;
          }
        }
      }
      return;
    }
    if ((*(int *)(lVar2 + 0x314) == DAT_101d3e620) && (*(int *)(lVar2 + 0x310) == 0)) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  return;
}




void FUN_10044c2b0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  int local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_28);
    lVar2 = *(long *)(*(long *)(*(long *)(local_28 + 0x10) + 0x10) + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    iVar1 = FUN_1003ba8f4(lVar2,PTR_s_Buff_SpawnStage_MatchStart_Speed_10185c110);
    if (iVar1 != 0) {
      local_64 = *(undefined4 *)(local_28 + 0x308);
      uStack_60 = *(undefined4 *)(*(long *)(*(long *)(local_28 + 0x10) + 0x10) + 0x260);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_80 = &PTR_FUN_101496b18;
      local_5c = DAT_1018589d8;
      local_54 = 0x141a00000;
      local_38 = 0;
      local_44 = 0;
      local_4c = 0;
      local_30 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_58 = FUN_1003d4e0c(PTR_s_Buff_SpawnStage_MatchStart_Speed_10185c110);
      FUN_10049639c(&local_80,&DAT_101e47d30);
    }
  }
  return;
}




float FUN_10044c3ac(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_2 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  fVar2 = 0.125;
  if (*(char *)(DAT_101d23a68 + 0x3b) != '\0') {
    fVar2 = 0.2;
  }
  return DAT_101e94260 * *(float *)(param_1 + 0x454) * fVar2;
}




void FUN_10044c418(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017ee0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10044c468(undefined8 param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  int local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_38);
    fVar2 = (float)FUN_100432da4(local_38);
    fVar3 = (float)FUN_100032228();
    if (fVar2 <= fVar3) {
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x260);
      uStack_40 = *(undefined4 *)(local_38 + 0x30c);
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_60 = &PTR_FUN_101496cd8;
      local_44 = uVar1;
      FUN_100496580(&local_60,&DAT_101e47d30);
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_b8 = &PTR_FUN_101496b18;
      local_94 = DAT_1018589d8;
      local_8c = 0x141a00000;
      local_70 = 0;
      local_7c = 0;
      local_84 = 0;
      local_68 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_9c = uVar1;
      uStack_98 = uVar1;
      local_90 = FUN_1003d4e0c(PTR_s_Buff_SpawnStage_MatchStart_Speed_10185c110);
      FUN_10049639c(&local_b8,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_10044c56c(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_48;
  
  FUN_10042ecbc(param_1,&local_48);
  lVar6 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  lVar9 = *(long *)(lVar6 + 0x18);
  while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  if (((DAT_101e48138 & 1) == 0) &&
     (iVar4 = ___cxa_guard_acquire(&DAT_101e48138),
     puVar3 = PTR_s_Buff_Taka_AssassinsAcceleration_10185b110, iVar4 != 0)) {
    uVar5 = FUN_1004d2524(PTR_s_Buff_Taka_AssassinsAcceleration_10185b110);
    DAT_101e48130 = FUN_100015208(puVar3,uVar5,0x12345678);
    ___cxa_guard_release(&DAT_101e48138);
  }
  lVar7 = *(long *)(lVar9 + 0x28);
  lVar9 = lVar7;
  while( true ) {
    fVar11 = 1.0;
    fVar10 = 0.0;
    if (lVar9 == 0) break;
    if ((*(int *)(lVar9 + 0x314) == DAT_101e48130) && (lVar8 = lVar7, *(int *)(lVar9 + 0x310) == 0))
    goto LAB_10044c610;
    lVar9 = *(long *)(lVar9 + 0x350);
  }
LAB_10044c680:
  fVar12 = *(float *)(**(long **)(*(long *)(lVar6 + 0x38) + 0x228) + 8);
  fVar2 = (float)FUN_1003df710(lVar6,1,1);
  fVar12 = ((fVar2 - fVar12) * fVar10) / fVar11 + fVar12;
  *(float *)(local_48 + 0x318) = fVar12;
  if (*(float *)(local_48 + 0x31c) < fVar12) {
    *(float *)(local_48 + 0x31c) = fVar12;
  }
  *(uint *)(local_48 + 0x340) =
       *(uint *)(local_48 + 0x340) & 0xfffe0 | (uint)(fVar12 < 0.0) << 4 |
       *(uint *)(local_48 + 0x340) & 0xfff0000f;
  *(float *)(local_48 + 0x31c) = fVar12;
  return;
LAB_10044c610:
  for (; (*(int *)(lVar8 + 0x314) != DAT_101e48130 || (*(int *)(lVar8 + 0x310) != 0));
      lVar8 = *(long *)(lVar8 + 0x350)) {
  }
  iVar4 = *(int *)(lVar8 + 0x30c);
  fVar11 = 1.0;
  fVar10 = 0.0;
  if (iVar4 != -1) {
    iVar1 = *(int *)(lVar7 + 0x30c);
    lVar9 = lVar7;
    while (iVar1 != iVar4) {
      lVar9 = *(long *)(lVar9 + 0x350);
      iVar1 = *(int *)(lVar9 + 0x30c);
    }
    for (; *(int *)(lVar7 + 0x30c) != iVar4; lVar7 = *(long *)(lVar7 + 0x350)) {
    }
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 0x344));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 0x346));
  }
  goto LAB_10044c680;
}




undefined2 FUN_10044c770(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x350);
  } while (*(int *)(lVar2 + 0x30c) != param_2);
  return *(undefined2 *)(lVar2 + 0x346);
}




void FUN_10044c790(undefined8 param_1)

{
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  if (DAT_101d23a38 != '\0') {
    local_54 = *(undefined4 *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_70 = &PTR_FUN_101496b18;
    local_4c = DAT_1018589d8;
    local_44 = 0x1bf800000;
    local_28 = 0;
    local_34 = 0;
    local_3c = 0;
    local_20 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    uStack_50 = local_54;
    local_48 = FUN_1003d4e0c(PTR_s_Buff_Taka_HeroicPerk_Ki_10185b108);
    FUN_10049639c(&local_70,&DAT_101e47d30);
  }
  *(undefined4 *)(local_18 + 0x318) = 0xbf800000;
  if (*(float *)(local_18 + 0x31c) < -1.0) {
    *(undefined4 *)(local_18 + 0x31c) = 0xbf800000;
  }
  *(uint *)(local_18 + 0x340) = *(uint *)(local_18 + 0x340) | 0x10;
  return;
}




void FUN_10044c86c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_38,&local_40);
    lVar4 = FUN_100345d90(*(undefined4 *)(local_38 + 0x308));
    lVar5 = *(long *)(lVar4 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    if (((*(int *)(local_40 + 0x10) == *(int *)(local_38 + 0x308)) &&
        (*(int *)(local_40 + 0x18) == *(int *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x260)
        )) && ((*(byte *)(local_40 + 0xc) >> 2 & 1) != 0)) {
      FUN_1003a4e5c(&local_98,PTR_s_Buff_Taka_HeroicPerk_Ki_10185b108);
      puVar3 = PTR_s_Buff_Taka_MortalWound_10185b130;
      for (lVar5 = *(long *)(lVar5 + 0x28); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
        if ((*(int *)(lVar5 + 0x314) == (int)local_98) && (*(int *)(lVar5 + 0x310) == 0)) {
          uVar1 = *(undefined4 *)(local_38 + 0x308);
          uVar2 = *(undefined4 *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x260);
          local_6c = FUN_1003dfe60(lVar4,2,4,0x19,0);
          local_90 = 0;
          uStack_88 = 0;
          local_80 = 0;
          local_98 = &PTR_FUN_101496b18;
          local_74 = DAT_1018589d8;
          local_68 = 1;
          local_50 = 0;
          local_5c = 0;
          local_64 = 0;
          local_48 = DAT_101dc0b88;
          DAT_1018589d8 = DAT_1018589d8 + 1;
          local_7c = uVar1;
          uStack_78 = uVar2;
          local_70 = FUN_1003d4e0c(puVar3);
          FUN_10049639c(&local_98,&DAT_101e47d30);
          return;
        }
      }
    }
  }
  return;
}




void FUN_10044c9f8(undefined8 param_1)

{
  FUN_1003df710(param_1,5,1);
  return;
}




void FUN_10044ca04(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d68;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10044ca38(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_50;
  long local_48;
  
  FUN_10042e1f0(param_1,&local_48,&local_50);
  lVar3 = local_48;
  puVar2 = PTR_s_pBuffVar_Taka_SmokeBombInvisibil_10185d6b8;
  if ((*(byte *)(local_50 + 0xc) >> 4 & 1) != 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  iVar8 = *(int *)(lVar9 + 0x260);
  if (*(int *)(local_50 + 0x18) == iVar8) {
    if ((*(byte *)(lVar9 + 0x2f9) >> 1 & 1) != 0) {
      return;
    }
    lVar1 = local_48 + 0x168;
    uVar4 = FUN_1004d2524(PTR_s_pBuffVar_Taka_SmokeBombInvisibil_10185d6b8);
    uVar5 = FUN_100015208(puVar2,uVar4,0x12345678);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar1,uVar5);
    fVar12 = *pfVar6;
    fVar10 = (float)FUN_100032228();
    fVar11 = (float)FUN_1003dfe60(lVar9,1,4,0x19,0);
    if (fVar10 - fVar12 <= fVar11) {
      return;
    }
    iVar8 = *(int *)(lVar9 + 0x260);
  }
  if ((*(int *)(local_50 + 0x10) == iVar8) || (uVar7 = FUN_1003a7e54(lVar9,1), (uVar7 & 1) == 0)) {
    FUN_1004370a0(local_48);
  }
  return;
}




void FUN_10044cb38(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_10044cb4c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149cd68;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




float FUN_10044cc38(long *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(*param_1 + 0x344));
  fVar1 = (float)FUN_1003df710(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),3,1);
  return -(fVar1 * fVar2) - -1.0;
}




void FUN_10044cc78(undefined8 param_1)

{
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  int local_5c;
  undefined4 uStack_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  long lStack_18;
  
  FUN_10042e1f0(param_1,&lStack_18,&local_20);
  local_5c = *(int *)(local_20 + 0x10);
  if (((local_5c == *(int *)(*(long *)(*(long *)(lStack_18 + 0x10) + 0x10) + 0x260)) &&
      ((*(byte *)(local_20 + 0xc) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(local_20 + 0x20) + 0x2f4) >> 4 & 1) != 0)) {
    uStack_58 = *(undefined4 *)(*(long *)(local_20 + 0x20) + 0x260);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_78 = &PTR_FUN_101496b18;
    local_54 = DAT_1018589d8;
    local_4c = 0x1bf800000;
    local_30 = 0;
    local_3c = 0;
    local_44 = 0;
    local_28 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_50 = FUN_1003d4e0c("Buff_MinionShreddedByTurret");
    FUN_10049639c(&local_78,&DAT_101e47d30);
  }
  return;
}




void FUN_10044cd44(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined **local_c8;
  long local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  float fStack_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  byte local_6e;
  long local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_68);
  lVar7 = *(long *)(*(long *)(local_68 + 0x10) + 0x10);
  uVar1 = FUN_1004d2524("time_last_barrier_disabled");
  uVar3 = FUN_100015208("time_last_barrier_disabled",uVar1,0x12345678);
  pfVar4 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  plVar5 = (long *)(lVar7 + 0x18);
  do {
    lVar6 = *plVar5;
    plVar5 = (long *)(lVar6 + 0x20);
  } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8);
  for (lVar6 = *(long *)(lVar6 + 0x28); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
    if ((*(int *)(lVar6 + 0x314) == DAT_101d3e6bc) && (*(int *)(lVar6 + 0x310) == 0))
    goto LAB_10044cee8;
  }
  uVar1 = *(undefined4 *)(lVar7 + 0x250);
  fVar8 = *(float *)(lVar7 + 0x254);
  uVar10 = *(undefined4 *)(lVar7 + 600);
  fVar9 = *(float *)(lVar7 + 0x2ec);
  local_c8 = &PTR_FUN_101499960;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_8c = 0x3f800000bf800000;
  local_94 = 0xc0000000bf800000;
  local_84 = 0xff;
  local_80 = 0;
  local_78 = 0xffffffff00000000;
  local_b8 = 1;
  lVar6 = FUN_1003e10f0();
  local_98 = *(float *)(*(long *)(lVar7 + 0x38) + 0x128) + 1.0;
  local_98 = local_98 * local_98;
  local_70 = 0xc120;
  local_6e = *(byte *)(lVar6 + 0xe5) | 0x14;
  local_7c = 0x18;
  local_c0 = lVar7;
  local_b4 = uVar1;
  fStack_b0 = fVar9 + fVar8;
  local_ac = uVar10;
  iVar2 = FUN_1003a6ce4(&local_c8,auStack_60,1,0);
  if (iVar2 == 0) {
LAB_10044cee8:
    fVar8 = (float)FUN_100032228();
    lVar6 = FUN_100446c78(*(undefined4 *)(local_68 + 0x30c));
    if (lVar6 == 0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = *(float *)(lVar6 + 0x38);
      if (800.0 <= fVar9) goto LAB_10044cf80;
    }
    if (*pfVar4 + 3.0 < fVar8) {
      fVar8 = (float)NEON_fminnm(fVar9 + *(float *)(local_68 + 0x328) * 200.0,0x44480000);
      if (lVar6 == 0) {
        FUN_100446d10(lVar7,lVar7,4,*(undefined4 *)(local_68 + 0x30c));
      }
      else {
        FUN_100446ddc(fVar8 - fVar9,lVar7,lVar7);
      }
    }
  }
  else {
    fVar8 = (float)FUN_100032228();
    *pfVar4 = fVar8;
    lVar6 = FUN_100446c78(*(undefined4 *)(local_68 + 0x30c));
    if (lVar6 != 0) {
      FUN_100447070(lVar7,lVar6);
    }
  }
LAB_10044cf80:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10044cfb8(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float *pfVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined **local_150;
  long local_148;
  undefined1 local_140;
  undefined4 local_13c;
  float fStack_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined1 local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined2 local_f8;
  byte local_f6;
  undefined **local_f0;
  long local_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  float fStack_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined2 local_98;
  byte local_96;
  long local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_90);
  lVar8 = *(long *)(*(long *)(local_90 + 0x10) + 0x10);
  uVar1 = FUN_1004d2524("time_last_barrier_disabled");
  uVar4 = FUN_100015208("time_last_barrier_disabled",uVar1,0x12345678);
  pfVar5 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar4);
  plVar6 = (long *)(lVar8 + 0x18);
  do {
    lVar7 = *plVar6;
    plVar6 = (long *)(lVar7 + 0x20);
  } while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184daa8);
  for (lVar7 = *(long *)(lVar7 + 0x28); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x350)) {
    if ((*(int *)(lVar7 + 0x314) == DAT_101d3e6bc) && (*(int *)(lVar7 + 0x310) == 0))
    goto LAB_10044d204;
  }
  uVar1 = *(undefined4 *)(lVar8 + 0x250);
  uVar10 = *(undefined4 *)(lVar8 + 600);
  fVar11 = *(float *)(lVar8 + 0x2ec) + *(float *)(lVar8 + 0x254);
  local_f0 = &PTR_FUN_101499960;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_b4 = 0x3f800000bf800000;
  local_bc = 0xc0000000bf800000;
  local_ac = 0xff;
  local_a8 = 0;
  local_a0 = 0xffffffff00000000;
  local_e0 = 1;
  lVar7 = FUN_1003e10f0();
  local_c0 = *(float *)(*(long *)(lVar8 + 0x38) + 0x128) + 1.0;
  local_c0 = local_c0 * local_c0;
  local_96 = *(byte *)(lVar7 + 0xe5) | 0x14;
  local_98 = 0xc120;
  local_a4 = 0x18;
  local_150 = &PTR_FUN_101499960;
  local_130 = 0;
  uStack_128 = 0;
  uStack_114 = 0x3f800000bf800000;
  local_11c = 0xc0000000bf800000;
  local_10c = 0xff;
  local_104 = 0xffffffff;
  local_fc = 0xffffffff;
  local_140 = 1;
  local_e8 = lVar8;
  local_dc = uVar1;
  fStack_d8 = fVar11;
  local_d4 = uVar10;
  lVar7 = FUN_1003e10f0();
  local_120 = *(float *)(*(long *)(lVar8 + 0x38) + 0x128) + 8.0;
  local_120 = local_120 * local_120;
  local_f6 = local_f6 & 0xe0 | *(byte *)(lVar7 + 0xe5) | 0x14;
  local_f8 = 0xc120;
  local_108 = 4;
  local_148 = lVar8;
  local_13c = uVar1;
  fStack_138 = fVar11;
  local_134 = uVar10;
  iVar2 = FUN_1003a6ce4(&local_f0,auStack_80,1,0);
  iVar3 = FUN_1003a6ce4(&local_150,auStack_88,1,0);
  if (iVar2 == 0 && iVar3 == 0) {
LAB_10044d204:
    fVar11 = (float)FUN_100032228();
    lVar7 = FUN_100446c78(*(undefined4 *)(local_90 + 0x30c));
    if (lVar7 == 0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = *(float *)(lVar7 + 0x38);
      if (1500.0 <= fVar9) goto LAB_10044d29c;
    }
    if (*pfVar5 + 3.0 < fVar11) {
      fVar11 = (float)NEON_fminnm(fVar9 + *(float *)(local_90 + 0x328) * 300.0,0x44bb8000);
      if (lVar7 == 0) {
        FUN_100446d10(lVar8,lVar8,4,*(undefined4 *)(local_90 + 0x30c));
      }
      else {
        FUN_100446ddc(fVar11 - fVar9,lVar8,lVar8);
      }
    }
  }
  else {
    fVar11 = (float)FUN_100032228();
    *pfVar5 = fVar11;
    lVar7 = FUN_100446c78(*(undefined4 *)(local_90 + 0x30c));
    if (lVar7 != 0) {
      FUN_100447070(lVar8,lVar7);
    }
  }
LAB_10044d29c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10044d2dc(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *local_30;
  long local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_28,&local_30);
    lVar3 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
    if ((((0.0 < *(float *)(*(long *)(lVar3 + 0x40) + 0x308)) &&
         (*(int *)(local_30 + 3) == *(int *)(lVar3 + 0x260))) &&
        ((*(byte *)((long)local_30 + 0xc) >> 2 & 1) != 0)) &&
       ((local_30[5] != 0 && ((*(byte *)(local_30[5] + 0x2f4) >> 3 & 1) != 0)))) {
      if (((char *)*local_30 == (char *)0x0) ||
         ((iVar1 = _strcmp((char *)*local_30,PTR_s_Ability__BlackclawCaptured__Defa_101858d68),
          iVar1 == 0 ||
          (iVar1 = _strcmp((char *)*local_30,PTR_s_Ability__KrakenCaptured__Default_101858cf8),
          iVar1 == 0)))) {
        uVar2 = 5;
      }
      else {
        iVar1 = _strcmp((char *)*local_30,PTR_s_Ability__BlackclawCaptured__AltA_101858d70);
        if ((iVar1 == 0) ||
           (iVar1 = _strcmp((char *)*local_30,PTR_s_Ability__KrakenCaptured__AltAtta_101858d00),
           iVar1 == 0)) {
          uVar2 = 6;
        }
        else {
          iVar1 = _strcmp((char *)*local_30,PTR_s_Ability__KrakenCaptured__CritAtt_101858d08);
          uVar2 = 7;
          if (iVar1 != 0) {
            uVar2 = 5;
          }
        }
      }
      FUN_100101b14(lVar3,uVar2,lVar3);
    }
  }
  return;
}




void FUN_10044d3fc(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  
  if (*(ushort *)(*param_1 + 0x344) == 0) {
    pcVar1 = "";
  }
  else {
    pcVar1 = (&PTR_s_Effect_Turret_Aggro_Lvl_1_101498158)[*(ushort *)(*param_1 + 0x344) - 1];
  }
  FUN_1004d2628(param_2,pcVar1);
  return;
}




void FUN_10044d430(undefined8 param_1)

{
  long local_20;
  long local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_18,&local_20);
    if (((*(int *)(local_20 + 0x18) ==
          *(int *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260)) &&
        (*(long *)(local_20 + 0x28) != 0)) &&
       ((*(byte *)(*(long *)(local_20 + 0x28) + 0x2f4) >> 4 & 1) != 0)) {
      *(undefined4 *)(local_20 + 0x54) = 0;
    }
  }
  return;
}




undefined4 FUN_10044d494(void)

{
  int iVar1;
  
  if (DAT_101d23a68 != (int *)0x0) {
    iVar1 = *DAT_101d23a68;
    if (iVar1 < 0x2d) {
      if ((iVar1 == 3) || (iVar1 == 4)) {
        return 0x3f666666;
      }
    }
    else {
      if (iVar1 == 0x2d) {
        return 0x3f333333;
      }
      if (iVar1 == 0x2e) {
        return 0x3f666666;
      }
    }
  }
  return 0x3f800000;
}




undefined4 FUN_10044d4ec(void)

{
  int iVar1;
  
  if (DAT_101d23a68 != (int *)0x0) {
    iVar1 = *DAT_101d23a68;
    if (iVar1 < 0x2d) {
      if ((iVar1 == 3) || (iVar1 == 4)) {
        return 0x3f8ccccd;
      }
    }
    else {
      if (iVar1 == 0x2d) {
        return 0x3fa66666;
      }
      if (iVar1 == 0x2e) {
        return 0x3f8ccccd;
      }
    }
  }
  return 0x3f800000;
}




undefined4 FUN_10044d544(void)

{
  int iVar1;
  
  if (DAT_101d23a68 != (int *)0x0) {
    iVar1 = *DAT_101d23a68;
    if (iVar1 - 3U < 2) {
      return 0x3dcccccd;
    }
    if (iVar1 == 0x2e) {
      return 0x3dcccccd;
    }
    if (iVar1 == 0x2d) {
      return 0x3e99999a;
    }
  }
  return 0;
}




void FUN_10044d58c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  long local_20;
  long lStack_18;
  
  FUN_10042e1f0(param_1,&local_20,&lStack_18);
  lVar2 = *(long *)(*(long *)(local_20 + 0x10) + 0x10);
  iVar1 = *(int *)(lVar2 + 0x260);
  if (*(int *)(lStack_18 + 0x18) == iVar1) {
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
    NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
    fVar3 = *(float *)(lVar2 + 0x308) / DAT_101e94260 + -0.1;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = fVar3 * *(float *)(lStack_18 + 0x54);
    *(float *)(lStack_18 + 0x54) = fVar3;
    if ((*(long *)(lStack_18 + 0x28) != 0) &&
       ((*(byte *)(*(long *)(lStack_18 + 0x28) + 0x2f5) >> 5 & 1) != 0)) {
      fVar3 = fVar3 * 0.5;
      *(float *)(lStack_18 + 0x54) = fVar3;
    }
    if (fVar3 < *(float *)(lVar2 + 0x308)) {
      return;
    }
    fVar3 = *(float *)(lVar2 + 0x308) + -1.0;
  }
  else {
    if (*(int *)(lStack_18 + 0x10) != iVar1) {
      return;
    }
    fVar3 = *(float *)(lStack_18 + 0x54) + *(float *)(lStack_18 + 0x54);
  }
  *(float *)(lStack_18 + 0x54) = fVar3;
  return;
}




void FUN_10044d67c(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_20,&local_18);
  if (*(int *)(local_18 + 0x18) == *(int *)(*(long *)(*(long *)(local_20 + 0x10) + 0x10) + 0x260)) {
    if ((*(ushort *)(local_18 + 0xc) & 1) == 0) {
      if ((*(ushort *)(local_18 + 0xc) >> 3 & 1) != 0) {
        *(float *)(local_18 + 0x54) = *(float *)(local_18 + 0x54) * 3.0;
      }
    }
    else {
      lVar1 = FUN_100345d90(*(undefined4 *)(local_20 + 0x308));
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar2 = *(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
      NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
      fVar2 = 0.0;
      if (0.4 <= *(float *)(lVar1 + 0x308) / DAT_101e94260) {
        fVar2 = *(float *)(local_18 + 0x54) * 0.2;
      }
      *(float *)(local_18 + 0x54) = fVar2;
      if (*(float *)(lVar1 + 0x308) <= fVar2) {
        *(float *)(local_18 + 0x54) = *(float *)(lVar1 + 0x308) + -1.0;
      }
    }
  }
  return;
}




void FUN_10044d76c(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_20,&local_18);
  if (*(int *)(local_18 + 0x18) == *(int *)(*(long *)(*(long *)(local_20 + 0x10) + 0x10) + 0x260)) {
    if ((*(ushort *)(local_18 + 0xc) >> 3 & 1) == 0) {
      if ((*(ushort *)(local_18 + 0xc) & 1) != 0) {
        lVar1 = FUN_100345d90(*(undefined4 *)(local_20 + 0x308));
        lVar1 = *(long *)(lVar1 + 0x40);
        fVar2 = *(float *)(lVar1 + 0x38) +
                *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
        NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
        fVar2 = 0.0;
        if (0.7 <= *(float *)(lVar1 + 0x308) / DAT_101e94260) {
          fVar2 = *(float *)(local_18 + 0x54) * 0.2;
        }
        *(float *)(local_18 + 0x54) = fVar2;
        if (*(float *)(lVar1 + 0x308) <= fVar2) {
          *(float *)(local_18 + 0x54) = *(float *)(lVar1 + 0x308) + -1.0;
        }
      }
    }
    else {
      lVar1 = FUN_100345d90(*(undefined4 *)(local_20 + 0x308));
      fVar2 = *(float *)(*(long *)(lVar1 + 0x40) + 0x308);
      *(float *)(local_18 + 0x54) = fVar2 + fVar2;
    }
  }
  return;
}




undefined4 FUN_10044d868(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x38);
  do {
    if (*plVar1 != 0) {
      if (param_2 == 0) {
        return *(undefined4 *)(*plVar1 + 0x4c);
      }
      param_2 = param_2 + -1;
    }
    plVar1 = plVar1 + 1;
  } while( true );
}




void FUN_10044d88c(long param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  for (plVar2 = (long *)(param_1 + 0x38);
      (lVar3 = *plVar2, lVar3 == 0 || (*(int *)(lVar3 + 0x4c) != param_2)); plVar2 = plVar2 + 1) {
  }
  uVar4 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(lVar3 + 0x48) * 8);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,uVar4,0);
  return;
}




void FUN_10044d8f0(undefined8 param_1)

{
  long local_20;
  long lStack_18;
  
  FUN_10042e1f0(param_1,&local_20,&lStack_18);
  if (*(int *)(lStack_18 + 0x18) == *(int *)(*(long *)(*(long *)(local_20 + 0x10) + 0x10) + 0x260))
  {
    if (*(int *)(lStack_18 + 8) == 3) {
      *(float *)(lStack_18 + 0x54) = *(float *)(lStack_18 + 0x54) * 0.65;
    }
    if ((*(byte *)(lStack_18 + 0xc) >> 3 & 1) != 0) {
      *(float *)(lStack_18 + 0x54) = *(float *)(lStack_18 + 0x54) + *(float *)(lStack_18 + 0x54);
    }
  }
  return;
}




void FUN_10044d964(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x418) + 0x10);
  *param_3 = *(undefined4 *)(*(long *)(param_1 + 0x418) + 0x18);
  return;
}




void FUN_10044d980(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long local_50;
  long local_48;
  
  FUN_10042e1f0(param_1,&local_48,&local_50);
  if (*(int *)(local_50 + 0x18) == *(int *)(*(long *)(*(long *)(local_48 + 0x10) + 0x10) + 0x260)) {
    uVar4 = FUN_100032228();
    uVar1 = FUN_1004d2524("timeOfLastDamage");
    uVar2 = FUN_100015208("timeOfLastDamage",uVar1,0x12345678);
    puVar3 = (undefined4 *)(**(code **)(*(long *)(local_48 + 0x168) + 0x10))(local_48 + 0x168,uVar2)
    ;
    *puVar3 = uVar4;
  }
  return;
}




void FUN_10044da24(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_101d23a38 != '\0') && (*(char *)(DAT_101d23a68 + 0x39) == '\0')) {
    FUN_10042ecbc(param_1,&local_48);
    lVar5 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
    fVar6 = (float)FUN_100032228();
    uVar1 = FUN_1004d2524("timeOfLastDamage");
    uVar2 = FUN_100015208("timeOfLastDamage",uVar1,0x12345678);
    pfVar3 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    if (5.0 < fVar6 - *pfVar3) {
      lVar4 = *(long *)(lVar5 + 0x40);
      fVar6 = *(float *)(lVar4 + 0x38) +
              *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
      NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
      if (*(float *)(lVar4 + 0x308) < DAT_101e94260) {
        fVar6 = DAT_101e94260 * 0.016666668;
        uVar1 = *(undefined4 *)(lVar5 + 0x260);
        local_88 = uVar1;
        uStack_84 = uVar1;
        local_80 = FUN_100345d90(uVar1);
        local_78 = FUN_100345d90(uVar1);
        local_64 = 0;
        local_6c = 0;
        local_5c = 0;
        uStack_50 = 0xffffffff000000ee;
        local_58 = 0xffffffffffffffff;
        local_70 = fVar6;
        FUN_10010cbe4(&local_88);
      }
    }
  }
  return;
}




void FUN_10044db74(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




float FUN_10044db88(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != *(int *)(*param_1 + 0x308)) {
    lVar2 = FUN_100345d90();
  }
  lVar1 = *(long *)(param_2 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  fVar3 = DAT_101e94260;
  if (DAT_101e94260 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar5 = (float)FUN_1003dfe60(lVar2,2,0,0x19,0);
  fVar4 = (float)FUN_1003dfe60(lVar2,2,3,0x19,0);
  fVar4 = fVar4 + fVar5 * fVar3;
  if ((*(byte *)(param_2 + 0x2f4) & 8) != 0) {
    fVar4 = fVar4 * 0.5;
  }
  return fVar4;
}




void FUN_10044dc58(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,1,0x19,0);
  return;
}




void FUN_10044dc6c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_100432d40();
  if (iVar1 != -1) {
    *param_3 = "CenterBody";
    lVar2 = FUN_100345d90();
    if (lVar2 != 0) {
      *param_2 = lVar2;
    }
  }
  return;
}




void FUN_10044dcb0(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined **local_1c8;
  long local_1c0;
  byte local_1b8;
  undefined4 local_1b4;
  float fStack_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined1 local_184;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined2 local_170;
  byte local_16e;
  undefined **local_168;
  long local_160;
  undefined1 local_158;
  undefined4 local_154;
  float fStack_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined1 local_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined2 local_110;
  byte local_10e;
  undefined **local_108;
  long local_100;
  undefined1 local_f8;
  undefined4 local_f4;
  float fStack_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined2 local_b0;
  byte local_ae;
  long local_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_a8);
  lVar9 = *(long *)(*(long *)(local_a8 + 0x10) + 0x10);
  uVar1 = FUN_1004d2524("time_last_barrier_disabled");
  uVar5 = FUN_100015208("time_last_barrier_disabled",uVar1,0x12345678);
  pfVar6 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  plVar7 = (long *)(lVar9 + 0x18);
  do {
    lVar8 = *plVar7;
    plVar7 = (long *)(lVar8 + 0x20);
  } while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184daa8);
  for (lVar8 = *(long *)(lVar8 + 0x28); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x350)) {
    if ((*(int *)(lVar8 + 0x314) == DAT_101d3e6bc) && (*(int *)(lVar8 + 0x310) == 0))
    goto LAB_10044df2c;
  }
  uVar1 = *(undefined4 *)(lVar9 + 0x250);
  uVar11 = *(undefined4 *)(lVar9 + 600);
  fVar12 = *(float *)(lVar9 + 0x2ec) + *(float *)(lVar9 + 0x254);
  local_108 = &PTR_FUN_101499960;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_cc = 0x3f800000bf800000;
  local_d4 = 0xc0000000bf800000;
  local_c4 = 0xff;
  local_bc = 0xffffffff;
  local_b4 = 0xffffffff;
  local_f8 = 1;
  lVar8 = FUN_1003e10f0();
  local_ae = *(byte *)(lVar8 + 0xe5) | 0x14;
  local_b0 = 0xc120;
  local_d8 = 0x43992000;
  local_c0 = 4;
  local_168 = &PTR_FUN_101499960;
  local_148 = 0;
  uStack_140 = 0;
  uStack_12c = 0x3f800000bf800000;
  local_134 = 0xc0000000bf800000;
  local_124 = 0xff;
  local_11c = 0xffffffff;
  local_114 = 0xffffffff;
  local_158 = 1;
  local_100 = lVar9;
  local_f4 = uVar1;
  fStack_f0 = fVar12;
  local_ec = uVar11;
  lVar8 = FUN_1003e10f0();
  local_10e = *(byte *)(lVar8 + 0xe5) | 0x14;
  local_110 = 0xc120;
  local_138 = 0x43992000;
  local_120 = 0x10;
  local_1c8 = &PTR_FUN_101499960;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_18c = 0x3f800000bf800000;
  local_194 = 0xc0000000bf800000;
  local_184 = 0xff;
  local_17c = 0xffffffff;
  local_174 = 0xffffffff;
  local_1b8 = local_1b8 & 0xfc | 1;
  local_160 = lVar9;
  local_154 = uVar1;
  fStack_150 = fVar12;
  local_14c = uVar11;
  lVar8 = FUN_1003e10f0();
  local_16e = local_16e & 0xe0 | *(byte *)(lVar8 + 0xe5) | 0x14;
  local_170 = 0xc120;
  local_198 = 0x43992000;
  local_180 = 1;
  local_1c0 = lVar9;
  local_1b4 = uVar1;
  fStack_1b0 = fVar12;
  local_1ac = uVar11;
  iVar2 = FUN_1003a6ce4(&local_108,auStack_90,1,0);
  iVar3 = FUN_1003a6ce4(&local_168,auStack_98,1,0);
  iVar4 = FUN_1003a6ce4(&local_1c8,auStack_a0,1,0);
  if (((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) {
LAB_10044df2c:
    fVar12 = (float)FUN_100032228();
    lVar8 = FUN_100446c78(*(undefined4 *)(local_a8 + 0x30c));
    if (lVar8 == 0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *(float *)(lVar8 + 0x38);
      if (800.0 <= fVar10) goto LAB_10044dfec;
    }
    if (*pfVar6 + 3.0 < fVar12) {
      fVar12 = (float)NEON_fminnm(fVar10 + *(float *)(local_a8 + 0x328) * 200.0,0x44480000);
      if (lVar8 == 0) {
        FUN_100446d10(lVar9,lVar9,4,*(undefined4 *)(local_a8 + 0x30c));
      }
      else {
        FUN_100446ddc(fVar12 - fVar10,lVar9,lVar9);
      }
    }
  }
  else {
    fVar12 = (float)FUN_100032228();
    *pfVar6 = fVar12;
    lVar8 = FUN_100446c78(*(undefined4 *)(local_a8 + 0x30c));
    if (lVar8 != 0) {
      FUN_100447070(lVar9,lVar8);
    }
  }
LAB_10044dfec:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10044e030(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long local_50;
  long local_48;
  
  FUN_10042e1f0(param_1,&local_48,&local_50);
  if (*(int *)(local_50 + 0x18) == *(int *)(*(long *)(*(long *)(local_48 + 0x10) + 0x10) + 0x260)) {
    uVar4 = FUN_100032228();
    uVar1 = FUN_1004d2524("vainNodeTimeOfLastDamage");
    uVar2 = FUN_100015208("vainNodeTimeOfLastDamage",uVar1,0x12345678);
    puVar3 = (undefined4 *)(**(code **)(*(long *)(local_48 + 0x168) + 0x10))(local_48 + 0x168,uVar2)
    ;
    *puVar3 = uVar4;
  }
  return;
}




void FUN_10044e0d4(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_101d23a38 != '\0') && (*(char *)(DAT_101d23a68 + 0x39) == '\0')) {
    FUN_10042ecbc(param_1,&local_48);
    lVar5 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
    fVar6 = (float)FUN_100032228();
    uVar1 = FUN_1004d2524("vainNodeTimeOfLastDamage");
    uVar2 = FUN_100015208("vainNodeTimeOfLastDamage",uVar1,0x12345678);
    pfVar3 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    if (5.0 < fVar6 - *pfVar3) {
      lVar4 = *(long *)(lVar5 + 0x40);
      fVar6 = *(float *)(lVar4 + 0x38) +
              *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
      NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
      if (*(float *)(lVar4 + 0x308) < DAT_101e94260) {
        fVar6 = DAT_101e94260 * 0.0055555557;
        uVar1 = *(undefined4 *)(lVar5 + 0x260);
        local_88 = uVar1;
        uStack_84 = uVar1;
        local_80 = FUN_100345d90(uVar1);
        local_78 = FUN_100345d90(uVar1);
        local_64 = 0;
        local_6c = 0;
        local_5c = 0;
        uStack_50 = 0xffffffff000000ee;
        local_58 = 0xffffffffffffffff;
        local_70 = fVar6;
        FUN_10010cbe4(&local_88);
      }
    }
  }
  return;
}




void FUN_10044e224(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar2);
  uVar4 = *param_3;
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar2);
  *puVar3 = uVar4;
  return;
}




void FUN_10044e2c4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100032228();
  *param_2 = uVar1;
  return;
}




void FUN_10044e2e8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,2,0x19,0);
  return;
}




float FUN_10044e2fc(long *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar3 = *(float *)(*param_1 + 0x318);
  fVar2 = (float)FUN_1003dfe60(uVar1,1,5,0x19,0);
  fVar3 = (float)NEON_fminnm(1.0 - fVar3 / fVar2,0x3f800000);
  fVar2 = (float)FUN_1003dfe60(uVar1,1,6,0x19,0);
  return fVar3 * fVar2;
}




float FUN_10044e378(long *param_1)

{
  return *(float *)(*param_1 + 0x318) + 0.1;
}




void FUN_10044e390(long *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar2 = (float)FUN_1003dfe60(uVar1,1,3,0x19,0);
  fVar3 = (float)FUN_1003dfe60(uVar1,1,4,0x19,0);
  fVar5 = *(float *)(*param_1 + 0x318);
  fVar4 = (float)FUN_1003dfe60(uVar1,1,5,0x19,0);
  *param_2 = (fVar5 * (fVar2 - fVar3)) / fVar4 + fVar3;
  return;
}




uint FUN_10044e440(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_s_Buff_Vox_HitBySoundwave_10185c910;
  lVar3 = FUN_100345d90(*(undefined4 *)(param_2 + 0x260));
  if (lVar3 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_1003a47d0(lVar3,puVar1);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}




void FUN_10044e480(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,7,0x19,0);
  return;
}




float FUN_10044e494(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar4 = (float)FUN_1003df710(uVar1,2,1);
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  lVar3 = *(long *)(lVar2 + 0x38);
  fVar5 = *(float *)(lVar3 + 100);
  return ((*(float *)(lVar2 + 0x2e8) + fVar5) * *(float *)(lVar3 + 0x68)) / fVar5 + fVar4;
}




void FUN_10044e4f0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100432da4(*param_1);
  *param_3 = uVar1;
  param_3[1] = 0x3fc00000;
  uVar1 = FUN_100432e08(*param_1);
  param_3[2] = uVar1;
  return;
}




void FUN_10044e530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149d648;
  DAT_10184e190 = 0;
  return;
}




void FUN_10044e548(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    FUN_10049d870(param_1,lVar1 + -8);
    FUN_10001c0f4(lVar1 + -8);
    lVar1 = *param_1;
  }
  return;
}




void FUN_10044e58c(long param_1,undefined8 param_2)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010044e598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(param_2);
    return;
  }
  return;
}




void FUN_10044e5a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1014981b8;
  return;
}




void FUN_10044e5b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010044e5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}




void FUN_10044e5c0(undefined8 param_1,long param_2)

{
  *(float *)(param_2 + 0x318) = *(float *)(param_2 + 0x31c);
  *(uint *)(param_2 + 0x340) =
       *(uint *)(param_2 + 0x340) & 0xfffe0 | (uint)(*(float *)(param_2 + 0x31c) < 0.0) << 4 |
       *(uint *)(param_2 + 0x340) & 0xfff0000f;
  return;
}




void FUN_10044e5ec(undefined8 param_1,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x32c);
  if (*(float *)(param_2 + 0x318) < fVar1) {
    *(float *)(param_2 + 0x318) = fVar1;
    if (*(float *)(param_2 + 0x31c) < fVar1) {
      *(float *)(param_2 + 0x31c) = fVar1;
    }
    *(uint *)(param_2 + 0x340) =
         *(uint *)(param_2 + 0x340) & 0xfffe0 | (uint)(fVar1 < 0.0) << 4 |
         *(uint *)(param_2 + 0x340) & 0xfff0000f;
  }
  return;
}




void FUN_10044e634(undefined8 param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  
  fVar2 = *(float *)param_2[0x84];
  lVar1 = *param_2;
  if ((fVar2 < 0.0) || (*(float *)(lVar1 + 0x318) < fVar2)) {
    *(float *)(lVar1 + 0x318) = fVar2;
    if (*(float *)(lVar1 + 0x31c) < fVar2) {
      *(float *)(lVar1 + 0x31c) = fVar2;
    }
    *(uint *)(lVar1 + 0x340) =
         *(uint *)(lVar1 + 0x340) & 0xfffe0 | (uint)(fVar2 < 0.0) << 4 |
         *(uint *)(lVar1 + 0x340) & 0xfff0000f;
  }
  return;
}




void FUN_10044e68c(long param_1,long param_2)

{
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  float local_2c;
  float local_24;
  
  if (DAT_101d23a38 != '\0') {
    local_24 = *(float *)(param_1 + 0x10);
    if ((*(float *)(param_1 + 0x14) != 0.0) &&
       (local_24 = *(float *)(param_2 + 0x318) + *(float *)(param_1 + 0x14), local_24 <= 0.0)) {
      local_24 = 0.0;
    }
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,&local_24);
    }
    local_34 = *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260);
    uStack_30 = *(undefined4 *)(param_2 + 0x30c);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = &PTR_FUN_101497250;
    local_2c = local_24;
    FUN_100496b60(&local_50,&DAT_101e47d30);
  }
  return;
}




void FUN_10044e734(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  int local_ac;
  int iStack_a8;
  int local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  
  if (DAT_101d23a38 != '\0') {
    uVar5 = 0;
    iVar1 = *(int *)(param_2 + 0x308);
    if (*(int *)(param_1 + 0x38) != -1) {
      iVar1 = *(int *)(param_1 + 0x38);
    }
    while( true ) {
      lVar6 = *(long *)(param_2 + 0x38);
      if (lVar6 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_10045fb10(lVar6);
      }
      if (uVar2 <= uVar5) break;
      lVar6 = FUN_10045fa7c(lVar6,uVar5);
      local_64 = *(undefined4 *)(param_1 + 0x30);
      if (*(code **)(param_1 + 0x20) != (code *)0x0) {
        (**(code **)(param_1 + 0x20))(param_2,lVar6,&local_64);
      }
      if ((*(code **)(param_1 + 0x50) == (code *)0x0) ||
         (uVar4 = (**(code **)(param_1 + 0x50))(param_2,lVar6), (uVar4 & 1) != 0)) {
        local_68 = 0;
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 == 0) {
          if (*(code **)(param_1 + 0x18) != (code *)0x0) {
            (**(code **)(param_1 + 0x18))(param_2,lVar6,&local_68);
          }
        }
        else {
          uVar3 = FUN_1004d2524(lVar8);
          local_68 = FUN_100015208(lVar8,uVar3,0x12345678);
        }
        local_6c = 0;
        if (*(code **)(param_1 + 0x28) == (code *)0x0) {
          local_6c = *(undefined4 *)(param_1 + 0x34);
        }
        else {
          (**(code **)(param_1 + 0x28))(param_2,lVar6,&local_6c);
        }
        iVar7 = *(int *)(param_1 + 0x58);
        if (iVar7 == -1) {
          iVar7 = *(int *)(lVar6 + 0x260);
        }
        if (*(char *)(param_1 + 0x5c) != '\0') {
          lVar6 = *(long *)(lVar6 + 0x18);
joined_r0x00010044e88c:
          if (lVar6 != 0) {
            if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8) goto code_r0x00010044e8a8;
            for (lVar6 = *(long *)(lVar6 + 0x28); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
              if ((*(int *)(lVar6 + 0x314) == local_68) && (*(int *)(lVar6 + 0x310) == 0)) {
                return;
              }
            }
          }
        }
        uStack_a0 = FUN_1003c2bac(local_68);
        local_94 = *(undefined8 *)(param_1 + 0x3c);
        local_8c = *(undefined8 *)(param_1 + 0x44);
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        local_c8 = &PTR_FUN_101496b18;
        local_a4 = DAT_1018589d8;
        local_9c = local_64;
        local_98 = local_6c;
        local_80 = 0;
        local_78 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_ac = iVar1;
        iStack_a8 = iVar7;
        FUN_10049639c(&local_c8,&DAT_101e47d30);
        if (*(int *)(param_1 + 0x58) != -1) {
          return;
        }
      }
      uVar5 = uVar5 + 1;
    }
  }
  return;
code_r0x00010044e8a8:
  lVar6 = *(long *)(lVar6 + 0x20);
  goto joined_r0x00010044e88c;
}




void FUN_10044e978(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if (DAT_101d23a38 == '\0') {
    lVar3 = FUN_100345d90(*(undefined4 *)(param_2 + 0x308));
    iVar1 = FUN_1003461dc();
    if (iVar1 != -1) {
      FUN_1003461dc(lVar3);
      lVar3 = FUN_100345d90();
    }
    if (lVar3 != 0) {
      if (-1 < *(char *)(param_1 + 0x39)) {
        FUN_10044ea54(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),lVar3);
        return;
      }
      uVar5 = 0;
      while( true ) {
        lVar6 = *(long *)(param_2 + 0x38);
        if (lVar6 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_10045fb10(lVar6);
        }
        if (uVar2 <= uVar5) break;
        uVar4 = FUN_10045fa7c(lVar6,uVar5);
        FUN_10044ea54(param_1,uVar4,lVar3);
        uVar5 = uVar5 + 1;
      }
    }
  }
  return;
}




void FUN_10044ea54(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  plVar6 = *(long **)(param_2 + 0x50);
  if ((plVar6 != (long *)0x0) &&
     (iVar3 = _rand(), iVar3 % 0x100 <= (int)(uint)*(byte *)(param_1 + 0x38))) {
    bVar1 = *(byte *)(param_1 + 0x39);
    if (((bVar1 >> 5 & 1) == 0) ||
       (iVar3 = FUN_10034ea2c(*(undefined4 *)(param_2 + 0x260)), iVar3 != 0)) {
      iVar4 = _rand();
      iVar3 = 0;
      if ((bVar1 & 7) != 0) {
        iVar3 = iVar4 / (int)(bVar1 & 7);
      }
      uVar7 = *(undefined8 *)(param_1 + (long)(int)(iVar4 - iVar3 * (bVar1 & 7)) * 8 + 0x10);
      bVar1 = *(byte *)(param_1 + 0x39);
      bVar2 = bVar1 >> 3 & 3;
      if (bVar2 == 1) {
        uVar9 = *(undefined4 *)(param_1 + 0x34);
        uVar8 = *(undefined4 *)(param_1 + 0x30);
        if (*(long **)(param_3 + 0x50) == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(**(long **)(param_3 + 0x50) + 0x178))();
        }
                    /* WARNING: Could not recover jumptable at 0x00010044ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x100))(uVar9,plVar6,uVar7,1,1,uVar8,bVar1 >> 6 & 1,uVar5);
        return;
      }
      if (bVar2 == 0) {
        uVar8 = *(undefined4 *)(param_1 + 0x34);
        if (*(long **)(param_3 + 0x50) == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(**(long **)(param_3 + 0x50) + 0x178))();
        }
                    /* WARNING: Could not recover jumptable at 0x00010044eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0xf8))(uVar8,plVar6,uVar7,1,uVar5);
        return;
      }
    }
  }
  return;
}




void FUN_10044ebb4(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  if (DAT_101d23a38 == '\0') {
    if (*(char *)(param_1 + 0x39) < '\0') {
      uVar3 = 0;
      while( true ) {
        lVar4 = *(long *)(param_2 + 0x38);
        if (lVar4 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_10045fb10(lVar4);
        }
        if (uVar1 <= uVar3) break;
        lVar4 = FUN_10045fa7c(lVar4,uVar3);
        plVar2 = *(long **)(lVar4 + 0x50);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,*(undefined4 *)(param_1 + 0x30));
        }
        uVar3 = uVar3 + 1;
      }
    }
    else {
      plVar2 = *(long **)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x50);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010044ec18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x108))(plVar2,*(undefined4 *)(param_1 + 0x30));
        return;
      }
    }
  }
  return;
}




void FUN_10044ec6c(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x50);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010044ec8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x80))
              (plVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}




void FUN_10044ec94(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  plVar2 = *(long **)(lVar3 + 0x50);
  if (plVar2 != (long *)0x0) {
    FUN_1003a4e5c(local_38,*(undefined8 *)(param_1 + 0x10));
    FUN_1003a4e5c(local_40,*(undefined8 *)(param_1 + 0x18));
    iVar1 = (**(code **)(*plVar2 + 0x98))(plVar2,local_38[0],local_40[0]);
    if (iVar1 != 0) {
      plVar2 = *(long **)(lVar3 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010044ed14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x88))(plVar2,*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}




void FUN_10044ed2c(long param_1,uint param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  uint local_5c;
  undefined1 local_58;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  plVar2 = (long *)(lVar3 + 0x18);
  do {
    lVar4 = *plVar2;
    plVar2 = (long *)(lVar4 + 0x20);
  } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8);
  bVar1 = *(byte *)(lVar4 + 0x198);
  if (bVar1 != 0) {
    uVar5 = 0;
    do {
      if ((param_2 != uVar5) &&
         (*(char *)(*(long *)(*(long *)(lVar4 + 0x50 + uVar5 * 8) + 0x38) + 0x8a) != '\0')) {
        local_64 = *(undefined4 *)(lVar3 + 0x260);
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_80 = &PTR_FUN_1014974f0;
        uStack_60 = (undefined4)uVar5;
        local_58 = 0;
        local_5c = param_2;
        FUN_100497d00(&local_80,&DAT_101e47d30);
        bVar1 = *(byte *)(lVar4 + 0x198);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < bVar1);
  }
  return;
}




void FUN_10044ee0c(void)

{
  return;
}




void FUN_10044ee10(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  cVar2 = DAT_101d23a38;
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar4 = *(long *)(lVar3 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  bVar6 = *(byte *)(lVar4 + 0x198);
  if (bVar6 != 0) {
    uVar5 = 0;
    do {
      if (*(char *)(*(long *)(*(long *)(lVar4 + uVar5 * 8 + 0x50) + 0x38) + 0x8a) != '\0' &&
          cVar2 != '\0') {
        lVar7 = *(long *)(lVar3 + 0x58);
        lVar8 = 0x10c;
        do {
          lVar1 = lVar7 + lVar8;
          uVar9 = *(ulong *)(lVar1 + -4);
          if ((bool)(uVar5 == (uVar9 & 0x7fff) & ~((int)(uVar9 & 0x4000000040000000) == 0))) {
            *(uint *)(lVar1 + -4) = (uint)uVar9 & 0x3fffffff;
          }
          if ((bool)(uVar5 == (uVar9 & 0x7fff00007fff) >> 0x20 &
                    ~((int)((uVar9 & 0x4000000040000000) >> 0x20) == 0))) {
            *(uint *)(lVar7 + lVar8) = (uint)(uVar9 >> 0x20) & 0x3fffffff;
          }
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0x15c);
        bVar6 = *(byte *)(lVar4 + 0x198);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < bVar6);
  }
  return;
}




void FUN_10044eef0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  float local_4c;
  undefined1 local_48;
  
  if (DAT_101d23a38 != '\0') {
    lVar6 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    lVar4 = *(long *)(lVar6 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x18);
    }
    else {
      uVar1 = FUN_1004d2524(lVar5);
      uVar2 = FUN_100015208(lVar5,uVar1,0x12345678);
      uVar3 = FUN_1003e2b0c(lVar4,uVar2);
    }
    FUN_10044ed2c(param_2,uVar3);
    if (*(char *)(param_1 + 0x24) == '\0') {
      lVar4 = *(long *)(lVar4 + (uVar3 & 0xffffffff) * 8 + 0x50);
      if (lVar4 == 0) {
        local_4c = 0.0;
      }
      else {
        local_4c = (float)FUN_10045f34c(lVar4 + 0x220);
      }
    }
    else {
      local_4c = *(float *)(param_1 + 0x20);
    }
    lVar4 = *(long *)(lVar6 + 0x40);
    fVar7 = *(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0);
    NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar4 + 0x1e0),DAT_101e94360);
    local_4c = local_4c - DAT_101e942a0;
    *(float *)(param_1 + 0x1c) = local_4c;
    local_5c = *(undefined4 *)(lVar6 + 0x260);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_78 = &PTR_FUN_1014971e0;
    local_58 = 0x10ffffffff;
    local_50 = 1;
    local_48 = 0;
    FUN_1004969f4(&local_78,&DAT_101e47d30);
  }
  return;
}




void FUN_10044f064(long param_1,long param_2)

{
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  float local_2c;
  undefined1 local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10044ee10(param_2);
    local_3c = *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260);
    local_2c = -*(float *)(param_1 + 0x1c);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = &PTR_FUN_1014971e0;
    local_38 = 0x10ffffffff;
    local_30 = 1;
    local_28 = 0;
    FUN_1004969f4(&local_58,&DAT_101e47d30);
  }
  return;
}




void FUN_10044f0f8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_50 [2];
  
  if (DAT_101d23a38 != '\0') {
    lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    lVar5 = *(long *)(lVar4 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar3 = (ulong)*(char *)(param_1 + 0x18);
    }
    else {
      FUN_1003a4e5c(local_50);
      uVar3 = FUN_1003e2b0c(lVar5,local_50[0] & 0xffffffff);
    }
    uVar1 = *(uint *)(*(long *)(*(long *)(lVar5 + (uVar3 & 0xffffffff) * 8 + 0x50) + 0x38) + 0x80);
    if (uVar1 < 3) {
      local_50[0] = 0;
      (**(code **)(param_1 + 0x20))(param_2,local_50);
      if ((*(code **)(param_1 + 0x30) == (code *)0x0) ||
         (iVar2 = (**(code **)(param_1 + 0x30))(param_2,local_50[0],0), iVar2 != 0)) {
        FUN_100101b14(lVar4,uVar3,local_50[0]);
      }
    }
    else if (uVar1 == 3) {
      (**(code **)(param_1 + 0x28))(param_2,local_50);
      if ((*(code **)(param_1 + 0x30) == (code *)0x0) ||
         (iVar2 = (**(code **)(param_1 + 0x30))(param_2,0,local_50), iVar2 != 0)) {
        FUN_100101b1c(lVar4,uVar3,local_50);
      }
    }
    else if ((uVar1 == 4) &&
            ((*(code **)(param_1 + 0x30) == (code *)0x0 ||
             (iVar2 = (**(code **)(param_1 + 0x30))(param_2,0,0), iVar2 != 0)))) {
      FUN_100101b0c(lVar4,uVar3);
      return;
    }
  }
  return;
}




void FUN_10044f274(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 1:
    uVar3 = (**(code **)(param_1 + 0x80))(param_2);
    if ((uVar3 & 1) == 0) {
      return;
    }
    goto LAB_10044f328;
  case 2:
    iVar2 = *(int *)(param_2 + 0x308);
    iVar1 = FUN_10034ee90();
    break;
  case 3:
    FUN_10034ee90();
    iVar2 = FUN_10034e738();
    iVar1 = FUN_10034e738(*(undefined4 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260));
    break;
  case 4:
    iVar2 = FUN_100032108(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10));
    if (iVar2 == 0) {
      return;
    }
    goto LAB_10044f328;
  default:
    goto switchD_10044f2cc_default;
  }
  if (iVar2 != iVar1) {
switchD_10044f2cc_default:
    return;
  }
LAB_10044f328:
  FUN_10044f340(param_1,param_2);
  return;
}




void FUN_10044f340(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
  lVar2 = FUN_100345d90(*(undefined4 *)(param_2 + 0x308));
  if ((lVar2 != 0) && (iVar1 = FUN_1003461dc(lVar2), iVar1 != -1)) {
    FUN_1003461dc(lVar2);
    lVar2 = FUN_100345d90();
  }
  FUN_100458248(param_1 + 0x10,uVar3,lVar2,param_2);
  return;
}




void FUN_10044f3b0(long param_1,long param_2)

{
  undefined **local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  if (DAT_101d23a38 != '\0') {
    local_1c = *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260);
    uStack_18 = *(undefined4 *)(param_1 + 0x10);
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_38 = &PTR_FUN_101497790;
    local_14 = 0xffffffff;
    FUN_100496dac(&local_38,&DAT_101e47d30);
  }
  return;
}




void FUN_10044f414(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (DAT_101d23a38 == '\0') {
    lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      (**(code **)(param_1 + 0x10))(param_2,param_1 + 0x18);
    }
    plVar1 = *(long **)(lVar2 + 0x50);
    if (plVar1 != (long *)0x0) {
      lVar2 = 0xd0;
      if (*(char *)(param_1 + 0x1c) != '\0') {
        lVar2 = 0xd8;
      }
                    /* WARNING: Could not recover jumptable at 0x00010044f48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + lVar2))(plVar1,*(undefined4 *)(param_1 + 0x18));
      return;
    }
  }
  return;
}




void FUN_10044f490(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  uint local_6fc;
  undefined **local_6f8;
  long local_6f0;
  undefined1 local_6e8;
  undefined8 local_6e4;
  undefined8 uStack_6dc;
  undefined8 local_6d4;
  undefined8 uStack_6cc;
  undefined8 local_6c4;
  undefined8 uStack_6bc;
  undefined8 local_6b4;
  undefined7 uStack_6ac;
  undefined1 uStack_6a5;
  undefined4 uStack_6a4;
  ushort uStack_6a0;
  undefined1 uStack_69e;
  long local_698 [200];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) goto LAB_10044f6b4;
  local_6e8 = *(undefined1 *)(param_1 + 0x20);
  local_6f8 = &PTR_FUN_101499960;
  uVar10 = *(undefined8 *)(param_1 + 0x3c);
  local_6d4 = *(undefined8 *)(param_1 + 0x34);
  uStack_6bc = *(undefined8 *)(param_1 + 0x4c);
  local_6c4 = *(undefined8 *)(param_1 + 0x44);
  local_6b4 = *(undefined8 *)(param_1 + 0x54);
  uStack_6ac = (undefined7)*(undefined8 *)(param_1 + 0x5c);
  uVar7 = *(undefined8 *)(param_1 + 99);
  uStack_6a5 = (undefined1)uVar7;
  uStack_6a4 = (undefined4)((ulong)uVar7 >> 8);
  uStack_6a0 = (ushort)((ulong)uVar7 >> 0x28);
  uStack_69e = (undefined1)((ulong)uVar7 >> 0x38);
  local_6e4 = *(undefined8 *)(param_1 + 0x24);
  local_6f0 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  if ((*(byte *)(param_1 + 0x94) >> 1 & 1) == 0) {
    uStack_6cc._4_4_ = (float)((ulong)uVar10 >> 0x20);
    bVar1 = 0.0 <= uStack_6cc._4_4_;
    uVar7 = *(undefined8 *)(param_1 + 0x2c);
    uStack_6cc = uVar10;
    if (bVar1) goto LAB_10044f594;
  }
  else {
    lVar6 = *(long *)(local_6f0 + 0x40);
    fVar11 = *(float *)(lVar6 + 0x78) + *(float *)(lVar6 + 300) * (*(float *)(lVar6 + 0x294) + 1.0);
    NEON_fminnm(fVar11 + fVar11 * *(float *)(lVar6 + 0x1e0),DAT_101e94360);
    uStack_6cc = CONCAT44(DAT_101e942a0 * DAT_101e942a0,(int)uVar10);
LAB_10044f594:
    uStack_6dc = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20),
                          *(undefined4 *)(local_6f0 + 600));
    local_6e4 = CONCAT44(*(float *)(local_6f0 + 0x2ec) + *(float *)(local_6f0 + 0x254),
                         *(undefined4 *)(local_6f0 + 0x250));
    uStack_6a0 = uStack_6a0 | 0x8000;
    uVar7 = uStack_6dc;
  }
  uStack_6dc = uVar7;
  uVar2 = FUN_1003a6ce4(&local_6f8,local_698,200,0);
  local_6fc = uVar2;
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))(param_2,&local_6fc);
  }
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      uVar3 = 0;
      if (*(long *)(param_2 + 0x38) != 0) {
        uVar3 = FUN_10045fb10();
      }
      if (local_6fc <= uVar3) break;
      lVar6 = *(long *)(param_1 + 0x70);
      if (((lVar6 == 0) && (*(long *)(param_1 + 0x78) == 0)) && (*(long *)(param_1 + 0x80) == 0)) {
LAB_10044f69c:
        FUN_10044f6ec(param_2,local_698[uVar9]);
      }
      else {
        lVar8 = *(long *)(local_698[uVar9] + 0x18);
        while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184daa8))) {
          lVar8 = *(long *)(lVar8 + 0x20);
        }
        if (lVar6 == 0) {
LAB_10044f674:
          if (((*(long *)(param_1 + 0x78) == 0) || (uVar5 = FUN_1003ba8f4(lVar8), (uVar5 & 1) == 0))
             && ((*(long *)(param_1 + 0x80) == 0 || (uVar5 = FUN_1003ba8f4(lVar8), (uVar5 & 1) == 0)
                 ))) goto LAB_10044f69c;
        }
        else if (*(int *)(param_1 + 0x90) == -1) {
LAB_10044f668:
          iVar4 = FUN_1003ba8f4(lVar8,lVar6);
          if (iVar4 != 0) goto LAB_10044f674;
        }
        else {
          iVar4 = FUN_1003c421c(lVar8);
          if (iVar4 != 0) {
            if (*(int *)(param_1 + 0x90) != -1) goto LAB_10044f674;
            lVar6 = *(long *)(param_1 + 0x70);
            goto LAB_10044f668;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
LAB_10044f6b4:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10044f6ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    lVar1 = FUN_1010a0298(param_1,DAT_101867320);
    *(long *)(param_1 + 0x38) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_10045f9f0(lVar1,param_2);
  return;
}




void FUN_10044f73c(undefined8 param_1,long param_2)

{
  FUN_10044f6ec(param_2,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10));
  return;
}




void FUN_10044f74c(long param_1,undefined8 param_2)

{
  long lVar1;
  int local_24;
  
  local_24 = -1;
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_24 = *(int *)(param_1 + 0x18);
  }
  else {
    (**(code **)(param_1 + 0x10))(param_2,&local_24);
  }
  if ((local_24 != -1) && (lVar1 = FUN_100345d90(), lVar1 != 0)) {
    FUN_10044f6ec(param_2,lVar1);
  }
  return;
}




void FUN_10044f7b8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  FUN_10044f6ec(param_2,uVar1);
  return;
}




void FUN_10044f7ec(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x38) != 0) {
    FUN_1010a1830();
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  return;
}




void FUN_10044f818(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  float fVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float local_d8 [28];
  undefined8 local_68;
  
  if (DAT_101d23a38 != '\0') {
    uVar6 = 0;
    while( true ) {
      lVar7 = *(long *)(param_2 + 0x38);
      if (lVar7 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_10045fb10(lVar7);
      }
      if (uVar4 <= uVar6) break;
      uVar1 = *(undefined4 *)(param_2 + 0x308);
      lVar7 = FUN_10045fa7c(lVar7,uVar6);
      bVar2 = *(byte *)(param_1 + 0x30);
      local_68 = DAT_101dc1cb8;
      if (((bVar2 >> 2 & 1) == 0) &&
         (lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x10),
         *(int *)(lVar5 + 0x260) != *(int *)(lVar7 + 0x260))) {
        fVar3 = *(float *)(lVar7 + 0x250) - *(float *)(lVar5 + 0x250);
        fVar8 = *(float *)(lVar7 + 600) - *(float *)(lVar5 + 600);
        fVar9 = fVar3 * fVar3 + fVar8 * fVar8;
        local_68 = DAT_101873a50;
        if (1e-08 <= fVar9) {
          fVar9 = SQRT(fVar9);
          local_68 = CONCAT44(fVar8 / fVar9,fVar3 / fVar9);
        }
      }
      local_d8[0] = *(float *)(param_1 + 0x10);
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(param_2,lVar7,local_d8);
        bVar2 = *(byte *)(param_1 + 0x30);
      }
      fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0x344));
      fVar8 = local_d8[0];
      if ((bVar2 & 8) != 0) {
        fVar8 = local_d8[0] * fVar3;
      }
      FUN_1003462a0(fVar8,local_d8,uVar1,*(undefined4 *)(lVar7 + 0x260),
                    *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),&local_68,
                    **(undefined8 **)(param_2 + 0x40),bVar2 & 1,bVar2 >> 1 & 1);
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_2,local_d8);
      }
      FUN_10010cbe0(local_d8);
      uVar6 = uVar6 + 1;
    }
  }
  return;
}




void FUN_10044f9bc(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  if (DAT_101d23a38 != '\0') {
    lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    uVar1 = *(undefined4 *)(param_2 + 0x308);
    uVar2 = *(undefined4 *)(lVar4 + 0x260);
    local_80 = *(undefined4 *)(param_1 + 0x10);
    local_68 = local_80;
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,lVar4,&local_80);
      local_68 = local_80;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x30c);
    local_80 = uVar1;
    uStack_7c = uVar2;
    local_78 = FUN_100345d90(uVar1);
    local_70 = FUN_100345d90(uVar2);
    local_5c = 0;
    local_64 = 0;
    local_54 = 0;
    local_4c = 0xeeffffffff;
    local_44 = 0xffffffff;
    uStack_50 = uVar3;
    FUN_10010cbe4(&local_80);
  }
  return;
}




void FUN_10044fa78(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_64;
  
  if (DAT_101d23a38 != '\0') {
    uVar6 = 0;
    while( true ) {
      lVar7 = *(long *)(param_2 + 0x38);
      if (lVar7 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_10045fb10(lVar7);
      }
      if (uVar5 <= uVar6) break;
      lVar7 = FUN_10045fa7c(lVar7,uVar6);
      uVar1 = *(undefined4 *)(param_2 + 0x308);
      uVar2 = *(undefined4 *)(lVar7 + 0x260);
      local_64 = *(undefined4 *)(param_1 + 0x10);
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(param_2,lVar7,&local_64);
      }
      uVar4 = local_64;
      uVar3 = *(undefined4 *)(param_2 + 0x30c);
      local_a8 = uVar1;
      uStack_a4 = uVar2;
      local_a0 = FUN_100345d90(uVar1);
      local_98 = FUN_100345d90(uVar2);
      local_8c = 0;
      uStack_84 = 0;
      local_7c = 0;
      local_74 = 0xeeffffffff;
      local_6c = 0xffffffff;
      local_90 = uVar4;
      local_78 = uVar3;
      FUN_10010cbe4(&local_a8);
      uVar6 = uVar6 + 1;
    }
  }
  return;
}




void FUN_10044fb84(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  if (DAT_101d23a38 != '\0') {
    lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    uVar1 = *(undefined4 *)(lVar2 + 0x260);
    local_50 = (undefined **)CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0x10));
    local_2c = *(undefined4 *)(param_1 + 0x10);
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,lVar2,&local_50);
      local_2c = local_50._0_4_;
    }
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = &PTR_FUN_101497218;
    uStack_30 = 2;
    local_28 = 0x100;
    local_26 = 0;
    local_34 = uVar1;
    FUN_100496328(&local_50,&DAT_101e47d30);
  }
  return;
}




void FUN_10044fc1c(long param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  if (DAT_101d23a38 != '\0') {
    lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    if ((int)(*(uint *)(param_2 + 0x34c) * 0x20) < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = (ulong)(uint)(*(float *)(param_1 + 0x14) *
                           (float)(*(uint *)(param_2 + 0x34c) & 0x7ffffff));
      if (*(int *)(param_1 + 0x10) == 5) {
        uVar8 = FUN_10010cbe8(uVar8,*(undefined4 *)(param_2 + 0x308),*(undefined4 *)(lVar7 + 0x260))
        ;
      }
      else if (*(int *)(param_1 + 0x10) == 4) {
        uVar8 = FUN_10010cbf0(uVar8,*(undefined4 *)(param_2 + 0x308),*(undefined4 *)(lVar7 + 0x260))
        ;
      }
    }
    plVar3 = *(long **)(param_1 + 0x18);
    if (*(short *)(param_2 + 0x344) == 0) {
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_1 + 0x20) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          if (lVar4 == 0) {
            return;
          }
          uVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          FUN_100447070(lVar7,uVar5);
          uVar6 = DAT_101dc0b88;
          *(undefined8 *)(param_1 + 0x18) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0x18) = 0;
          uVar6 = DAT_101dc0b88;
        }
        *(undefined4 *)(param_1 + 0x20) = uVar6;
      }
    }
    else {
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_1 + 0x20) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          if (lVar4 != 0) {
            if ((float)uVar8 <= 0.0) {
              lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
              fVar9 = *(float *)(lVar4 + 0x38);
              fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0x344));
              fVar10 = *(float *)(param_1 + 0x14) * fVar10;
              if (fVar9 <= fVar10) {
                return;
              }
              if (*(int *)(param_2 + 0x308) == -1) {
                lVar4 = 0;
              }
              else {
                lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
                if (*(int *)(lVar4 + 0x260) != *(int *)(param_2 + 0x308)) {
                  lVar4 = FUN_100345d90();
                }
              }
              uVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
              uVar8 = (ulong)(uint)(fVar10 - fVar9);
            }
            else {
              if (*(int *)(param_2 + 0x308) == -1) {
                lVar4 = 0;
              }
              else {
                lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
                if (*(int *)(lVar4 + 0x260) != *(int *)(param_2 + 0x308)) {
                  lVar4 = FUN_100345d90();
                }
              }
              uVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
            }
            FUN_100446ddc(uVar8,lVar4,lVar7,uVar5);
            return;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
        }
      }
      iVar2 = *(int *)(param_2 + 0x308);
      if (iVar2 == -1) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
        if (*(int *)(lVar4 + 0x260) != iVar2) {
          lVar4 = FUN_100345d90(iVar2);
        }
      }
      lVar4 = FUN_100446d10(uVar8,lVar4,lVar7,*(undefined4 *)(param_1 + 0x10),
                            *(undefined4 *)(param_2 + 0x30c));
      lVar7 = 0;
      if (lVar4 != 0) {
        lVar7 = lVar4 + 0x28;
      }
      puVar1 = &DAT_101dc0b88;
      if (lVar4 != 0) {
        puVar1 = (undefined4 *)(lVar7 + 8);
      }
      uVar6 = *puVar1;
      *(long *)(param_1 + 0x18) = lVar7;
      *(undefined4 *)(param_1 + 0x20) = uVar6;
    }
  }
  return;
}




long FUN_10044fec8(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x308) == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    if (*(int *)(lVar1 + 0x260) != *(int *)(param_1 + 0x308)) {
      lVar1 = FUN_100345d90();
      return lVar1;
    }
  }
  return lVar1;
}




void FUN_10044fefc(long param_1,long param_2)

{
  long lVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_34;
  
  if (DAT_101d23a38 != '\0') {
    lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    local_34 = *(undefined4 *)(param_1 + 0x20);
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,&local_34);
    }
    local_54 = *(undefined4 *)(lVar1 + 0x260);
    local_4c = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined1 *)(param_1 + 0x24);
    uStack_50 = *(undefined4 *)(param_2 + 0x30c);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_70 = &PTR_FUN_1014971e0;
    local_44 = local_34;
    FUN_1004969f4(&local_70,&DAT_101e47d30);
  }
  return;
}




void FUN_10044ffa4(long param_1,long param_2)

{
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  float local_1c;
  undefined1 local_18;
  
  if (DAT_101d23a38 != '\0') {
    local_2c = *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260);
    local_24 = *(undefined8 *)(param_1 + 0x10);
    local_1c = *(float *)(param_1 + 0x18) * (float)((*(int *)(param_2 + 0x34c) << 5) >> 5);
    uStack_28 = *(undefined4 *)(param_2 + 0x30c);
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_48 = &PTR_FUN_1014971e0;
    local_18 = 0;
    FUN_1004969f4(&local_48,&DAT_101e47d30);
  }
  return;
}

