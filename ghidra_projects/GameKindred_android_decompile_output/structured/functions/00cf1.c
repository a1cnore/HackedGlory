// functions/00cf1 — 10 functions
#include "libGameKindred.h"




void FUN_00cf1328(undefined8 param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_WarTreads__02beb170);
  fVar6 = (float)FUN_00d08524(uVar3,1,1);
  *param_3 = fVar6;
  iVar1 = FUN_00d51964(param_1);
  if (iVar1 != 0) {
    iVar1 = 0;
    uVar5 = 0;
    do {
      lVar4 = FUN_00d51954(param_1,uVar5);
      if (lVar4 != 0) {
        iVar1 = (*(uint *)(lVar4 + 0x2f4) & 1) + iVar1;
      }
      uVar5 = uVar5 + 1;
      uVar2 = FUN_00d51964(param_1);
    } while (uVar5 < uVar2);
    if (iVar1 != 0 && iVar1 - 1U != 0) {
      fVar6 = (float)FUN_00d08524(uVar3,2,1);
      *param_3 = *param_3 + fVar6 * (float)(iVar1 - 1U);
    }
  }
  return;
}




void FUN_00cf13f8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,1,0,1,0);
  FUN_00d4dacc(auStack_98,0x1000);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_WarTreads__02beb170);
  FUN_00cf98bc(auStack_a8);
  uVar3 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3358(0,uVar3,"Effect_WarTreads",1,"OverHead",0,1,0,0);
  FUN_00cf9eec(auStack_a8);
  uVar3 = FUN_00cfaf84(auStack_a8);
  FUN_00d08524(uVar2,3,1);
  FUN_00cf5460(uVar3,auStack_98,0,0,0,0);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf4540(uVar2,PTR_s_Buff_Item_WarTreads_Speed_02beb768,FUN_00cf1328,1,0);
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf1540(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,1);
  FUN_00cf98bc(auStack_a8);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_AtlasPauldron__02beb018);
  uVar4 = FUN_00cfaa74(auStack_a8);
  FUN_00d08524(uVar3,3,1);
  FUN_00cf32cc(uVar4,"Effect_Atlas_Buildup",1,0,1,0,0);
  uVar4 = FUN_00cfa294(auStack_a8);
  FUN_00d08524(uVar3,3,1);
  FUN_00cf7478(uVar4);
  FUN_00cf7578(uVar4,0);
  uVar4 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0,uVar4,"Effect_Atlas",0,0,1,0,0);
  FUN_00cf9eec(auStack_a8);
  uVar4 = FUN_00cfaf84(auStack_a8);
  FUN_00d08524(uVar3,2,1);
  FUN_00cf5460(uVar4,auStack_98,0,0,0,0);
  uVar4 = FUN_00cf9ab4(auStack_a8);
  puVar2 = PTR_s_Buff_Item_AtlasPauldronSlow_02beb770;
  FUN_00d08524(uVar3,1,1);
  FUN_00cf44e8(uVar4,puVar2,1,0);
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf1704(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d6eb50();
  FUN_00d6eb5c(uVar1,PTR_s__Item_Shiversteel__02beb118);
  return;
}




void FUN_00cf1724(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf4540(uVar2,PTR_s_Buff_Item_Shiversteel_02beb778,FUN_00cf1704,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf17b4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0x27,"CenterBody");
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf1824(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 undefined8 *param_5,float *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_168;
  undefined4 local_160;
  float local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  float local_14c;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  undefined4 local_130;
  float local_128;
  float fStack_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  undefined4 local_100;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,&local_88,0);
  fVar6 = (float)FUN_00d51820(param_4);
  fVar6 = fVar6 - local_88;
  local_90 = param_3 - local_80;
  *param_6 = fVar6;
  fVar6 = fVar6 * fVar6 + 0.0 + local_90 * local_90;
  uVar4 = (ulong)(uint)fVar6;
  param_6[2] = local_90;
  param_6[1] = 0.0;
  if (1e-08 <= fVar6) {
    fVar7 = SQRT(fVar6);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar6);
    }
    local_90 = param_6[2];
    uVar4 = CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) / fVar7,
                     (float)*(undefined8 *)param_6 / fVar7);
    *(ulong *)param_6 = uVar4;
    param_6[2] = local_90 / fVar7;
  }
  else {
    param_6[2] = DAT_03218f70;
    *(undefined8 *)param_6 = DAT_03218f68;
  }
  fStack_94 = (float)uVar4;
  local_98 = (float)FUN_00d51820(param_4);
  fVar6 = local_88 - local_98;
  fVar8 = fStack_84 - fStack_94;
  fVar9 = local_80 - local_90;
  fVar7 = (float)FUN_00d50cc8(param_4);
  if (fVar6 * fVar6 + fVar8 * fVar8 + fVar9 * fVar9 <= (fVar7 + 2.0) * (fVar7 + 2.0)) {
    local_b0 = 0x3e800000;
    local_b8 = 0x412000003e800000;
    uVar3 = FUN_00da2eb4(uVar2);
    uVar4 = FUN_00ef00a0(uVar3,&local_98,&local_a8,&local_b8);
    if ((uVar4 & 1) == 0) {
      local_d0 = 0x3e19999a;
      local_d8 = 0x412000003e19999a;
      local_e8 = CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) * 0.8 + fStack_94,
                          (float)*(undefined8 *)param_6 * 0.8 + local_98);
      local_e0 = param_6[2] * 0.8 + local_90;
      uVar3 = FUN_00da2eb4(uVar2);
      uVar4 = FUN_00ef00a0(uVar3,&local_e8,&local_c8,&local_d8);
      if ((uVar4 & 1) != 0) {
        *(float *)(param_5 + 1) = local_c0;
        *param_5 = CONCAT44(fStack_c4,local_c8);
        uVar2 = FUN_00da2eb4(uVar2);
        FUN_00ef01b8(uVar2,&local_c8,&local_88,&local_f8,0,0);
        fVar7 = (local_c8 - local_88) * (local_c8 - local_88) +
                (fStack_c4 - fStack_84) * (fStack_c4 - fStack_84) +
                (local_c0 - local_80) * (local_c0 - local_80);
        fVar6 = SQRT(fVar7);
        if (NAN(fVar6)) {
          fVar6 = sqrtf(fVar7);
        }
LAB_00cf1acc:
        fVar7 = param_6[2];
        fVar6 = fVar6 * local_f8 + -0.4;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        *param_5 = CONCAT44((float)((ulong)*param_5 >> 0x20) -
                            (float)((ulong)*(undefined8 *)param_6 >> 0x20) * fVar6,
                            (float)*param_5 - (float)*(undefined8 *)param_6 * fVar6);
        *(float *)(param_5 + 1) = *(float *)(param_5 + 1) - fVar7 * fVar6;
        goto LAB_00cf19b0;
      }
      local_108 = 0x412000003e19999a;
      local_100 = 0x3e19999a;
      local_118 = CONCAT44(fStack_94 - (float)((ulong)*(undefined8 *)param_6 >> 0x20) * 0.8,
                           local_98 - (float)*(undefined8 *)param_6 * 0.8);
      local_110 = local_90 - param_6[2] * 0.8;
      uVar3 = FUN_00da2eb4(uVar2);
      uVar4 = FUN_00ef00a0(uVar3,&local_118,&local_f8,&local_108);
      if ((uVar4 & 1) == 0) {
        local_138 = 0x412000003e19999a;
        local_130 = 0x3e19999a;
        fVar6 = (float)FUN_00d50cc8(param_4);
        uVar3 = NEON_fmov(0x40200000,4);
        fVar7 = (float)*(undefined8 *)param_6;
        fVar8 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
        local_148 = CONCAT44(fVar8 * (float)((ulong)uVar3 >> 0x20) + fVar8 * fVar6 + fStack_84,
                             fVar7 * (float)uVar3 + fVar7 * fVar6 + local_88);
        local_140 = param_6[2] * 2.5 + fVar6 * param_6[2] + local_80;
        uVar3 = FUN_00da2eb4(uVar2);
        uVar4 = FUN_00ef00a0(uVar3,&local_148,&local_128,&local_138);
        if ((uVar4 & 1) != 0) {
          *(float *)(param_5 + 1) = local_120;
          *param_5 = CONCAT44(fStack_124,local_128);
          uVar2 = FUN_00da2eb4(uVar2);
          FUN_00ef01b8(uVar2,param_5,&local_88,&local_158,0,0);
          fVar7 = (local_128 - local_88) * (local_128 - local_88) +
                  (fStack_124 - fStack_84) * (fStack_124 - fStack_84) +
                  (local_120 - local_80) * (local_120 - local_80);
          fVar6 = SQRT(fVar7);
          local_f8 = local_158;
          if (NAN(fVar6)) {
            fVar6 = sqrtf(fVar7);
            local_f8 = local_158;
          }
          goto LAB_00cf1acc;
        }
        uVar3 = FUN_00da2eb4(uVar2);
        FUN_00ef01b8(uVar3,&local_88,&local_98,&local_14c,0,0);
        fVar7 = (local_98 - local_88) * (local_98 - local_88) +
                (fStack_94 - fStack_84) * (fStack_94 - fStack_84) +
                (local_90 - local_80) * (local_90 - local_80);
        fVar6 = SQRT(fVar7);
        if (NAN(fVar6)) {
          fVar6 = sqrtf(fVar7);
        }
        local_14c = fVar6 * local_14c + -0.4;
        if (local_14c <= 0.0) {
          local_14c = 0.0;
        }
        local_98 = local_88 + (float)*(undefined8 *)param_6 * local_14c;
        fStack_94 = fStack_84 + (float)((ulong)*(undefined8 *)param_6 >> 0x20) * local_14c;
        local_90 = param_6[2] * local_14c + local_80;
        local_168 = 0x412000003e800000;
        local_160 = 0x3e800000;
        uVar2 = FUN_00da2eb4(uVar2);
        uVar4 = FUN_00ef00a0(uVar2,&local_98,&local_158,&local_168);
        if ((uVar4 & 1) == 0) goto LAB_00cf1960;
        *(undefined4 *)(param_5 + 1) = local_150;
        local_a8 = CONCAT44(uStack_154,local_158);
      }
      else {
        *(undefined4 *)(param_5 + 1) = local_f0;
        local_a8 = CONCAT44(uStack_f4,local_f8);
      }
    }
    else {
      *(undefined4 *)(param_5 + 1) = local_a0;
    }
  }
  else {
LAB_00cf1960:
    *(float *)(param_5 + 1) = local_80;
    local_a8 = CONCAT44(fStack_84,local_88);
  }
  *param_5 = local_a8;
LAB_00cf19b0:
  if (*(long *)(lVar1 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf1d3c(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfb1c4(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s__VisionTotem__02beb280,0);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00cf1824);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf1dc4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Spawn",0,1,0,"AttackToIdle");
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf1e44(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 *param_5,float *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58 [2];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d517cc();
  lVar3 = FUN_00d50ef8(param_4);
  FUN_00d55794(lVar3,local_58,0);
  local_68 = (float)FUN_00d51830(param_4);
  local_58[0] = local_68 - local_58[0];
  local_50 = param_3 - local_50;
  *param_6 = local_58[0];
  fVar6 = local_58[0] * local_58[0] + 0.0 + local_50 * local_50;
  param_6[2] = local_50;
  param_6[1] = 0.0;
  fStack_64 = param_2;
  local_60 = param_3;
  if (1e-08 <= fVar6) {
    fVar7 = SQRT(fVar6);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar6);
    }
    *(ulong *)param_6 =
         CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) / fVar7,
                  (float)*(undefined8 *)param_6 / fVar7);
    param_6[2] = param_6[2] / fVar7;
  }
  else {
    param_6[2] = DAT_03218f70;
    *(undefined8 *)param_6 = DAT_03218f68;
  }
  local_80 = 0x3e800000;
  local_88 = 0x412000003e800000;
  if ((*(byte *)(lVar2 + 0x2f5) >> 4 & 1) == 0) {
    uVar4 = FUN_00da2eb4(lVar3);
    uVar5 = FUN_00ef00a0(uVar4,&local_68,&local_78,&local_88);
    if ((uVar5 & 1) == 0) {
      *(float *)(param_5 + 1) = local_60;
      local_78 = CONCAT44(fStack_64,local_68);
    }
    else {
      *(undefined4 *)(param_5 + 1) = local_70;
    }
    *param_5 = local_78;
  }
  else {
    fVar6 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
    fVar8 = *(float *)(*(long *)(lVar3 + 0x38) + 100);
    fVar7 = param_6[2];
    fVar6 = (*(float *)(*(long *)(lVar2 + 0x38) + 0x68) * (fVar6 + *(float *)(lVar2 + 0x2e8))) /
            fVar6 + (*(float *)(*(long *)(lVar3 + 0x38) + 0x68) *
                    (fVar8 + *(float *)(lVar3 + 0x2e8))) / fVar8;
    *param_5 = CONCAT44(fStack_64 - (float)((ulong)*(undefined8 *)param_6 >> 0x20) * fVar6,
                        local_68 - (float)*(undefined8 *)param_6 * fVar6);
    *(float *)(param_5 + 1) = local_60 - fVar7 * fVar6;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

