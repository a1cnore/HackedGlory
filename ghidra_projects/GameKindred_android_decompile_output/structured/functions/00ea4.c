// functions/00ea4 — 1 functions
#include "libGameKindred.h"




void FUN_00ea4c78(long *param_1,undefined4 *param_2)

{
  long lVar1;
  double dVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_1,"skillTier");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
LAB_00ea4d00:
    uVar6 = 0xffffffff;
  }
  else {
    local_80 = "skillTier";
    local_70 = 0x100005;
    local_78 = 9;
    lVar3 = FUN_008feca4(param_1,&local_80);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_00ea4d00;
    local_80 = "skillTier";
    local_70 = 0x100005;
    local_78 = 9;
    puVar4 = (undefined4 *)FUN_008feca4(param_1,&local_80);
    uVar6 = *puVar4;
  }
  *param_2 = uVar6;
  lVar3 = FUN_008fd190(param_1,"eloEarned");
  fVar9 = 0.0;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_80 = "eloEarned";
    local_70 = 0x100005;
    local_78 = 9;
    lVar3 = FUN_008feca4(param_1,&local_80);
    fVar9 = 0.0;
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "eloEarned";
      local_70 = 0x100005;
      local_78 = 9;
      FUN_008feca4(param_1,&local_80);
      dVar2 = (double)FUN_008fc0f0();
      fVar9 = (float)dVar2;
    }
  }
  param_2[7] = fVar9;
  lVar3 = FUN_008fd190(param_1,"seasonMaxSkillTier");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_80 = "seasonMaxSkillTier";
    local_70 = 0x100005;
    local_78 = 0x12;
    lVar3 = FUN_008feca4(param_1,&local_80);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_80 = "seasonMaxSkillTier";
      local_70 = 0x100005;
      local_78 = 0x12;
      puVar4 = (undefined4 *)FUN_008feca4(param_1,&local_80);
      uVar6 = *puVar4;
      goto LAB_00ea4e14;
    }
  }
  uVar6 = 0xffffffff;
LAB_00ea4e14:
  param_2[1] = uVar6;
  lVar3 = FUN_008fd190(param_1,"eloBucket");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
    iVar7 = 0;
  }
  else {
    local_80 = "eloBucket";
    local_70 = 0x100005;
    local_78 = 9;
    lVar3 = FUN_008feca4(param_1,&local_80);
    iVar7 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "eloBucket";
      local_70 = 0x100005;
      local_78 = 9;
      FUN_008feca4(param_1,&local_80);
      dVar2 = (double)FUN_008fc0f0();
      iVar7 = (int)dVar2;
    }
  }
  param_2[2] = iVar7;
  lVar3 = FUN_008fd190(param_1,"eloEarnedDelta");
  fVar9 = 0.0;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_80 = "eloEarnedDelta";
    local_70 = 0x100005;
    local_78 = 0xe;
    lVar3 = FUN_008feca4(param_1,&local_80);
    fVar9 = 0.0;
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "eloEarnedDelta";
      local_70 = 0x100005;
      local_78 = 0xe;
      FUN_008feca4(param_1,&local_80);
      dVar2 = (double)FUN_008fc0f0();
      fVar9 = (float)dVar2;
    }
  }
  param_2[8] = fVar9;
  lVar3 = FUN_008fd190(param_1,"skillTierProgress");
  fVar9 = 0.0;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_80 = "skillTierProgress";
    local_70 = 0x100005;
    local_78 = 0x11;
    lVar3 = FUN_008feca4(param_1,&local_80);
    fVar9 = 0.0;
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "skillTierProgress";
      local_70 = 0x100005;
      local_78 = 0x11;
      FUN_008feca4(param_1,&local_80);
      dVar2 = (double)FUN_008fc0f0();
      fVar9 = (float)dVar2;
    }
  }
  fVar9 = (float)NEON_fminnm(fVar9,0x3f800000);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  param_2[3] = fVar9;
  lVar3 = FUN_008fd190(param_1,"skillTierBronzeLine");
  fVar9 = 0.0;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_80 = "skillTierBronzeLine";
    local_70 = 0x100005;
    local_78 = 0x13;
    lVar3 = FUN_008feca4(param_1,&local_80);
    fVar9 = 0.0;
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "skillTierBronzeLine";
      local_70 = 0x100005;
      local_78 = 0x13;
      FUN_008feca4(param_1,&local_80);
      dVar2 = (double)FUN_008fc0f0();
      fVar9 = (float)dVar2;
    }
  }
  fVar9 = (float)NEON_fminnm(fVar9,0x3f800000);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  param_2[4] = fVar9;
  lVar3 = FUN_008fd190(param_1,"skillTierSilverLine");
  fVar9 = 0.25;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_80 = "skillTierSilverLine";
    local_70 = 0x100005;
    local_78 = 0x13;
    lVar3 = FUN_008feca4(param_1,&local_80);
    fVar9 = 0.25;
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "skillTierSilverLine";
      local_70 = 0x100005;
      local_78 = 0x13;
      FUN_008feca4(param_1,&local_80);
      dVar2 = (double)FUN_008fc0f0();
      fVar9 = (float)dVar2;
    }
  }
  fVar9 = (float)NEON_fminnm(fVar9,0x3f800000);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  param_2[5] = fVar9;
  lVar3 = FUN_008fd190(param_1,"skillTierGoldLine");
  fVar9 = 0.75;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_80 = "skillTierGoldLine";
    local_70 = 0x100005;
    local_78 = 0x11;
    lVar3 = FUN_008feca4(param_1,&local_80);
    fVar9 = 0.75;
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "skillTierGoldLine";
      local_70 = 0x100005;
      local_78 = 0x11;
      FUN_008feca4(param_1,&local_80);
      dVar2 = (double)FUN_008fc0f0();
      fVar9 = (float)dVar2;
    }
  }
  fVar9 = (float)NEON_fminnm(fVar9,0x3f800000);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  param_2[6] = fVar9;
  lVar3 = FUN_008fd190(param_1,"eloEarnedDecayStart");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
    uVar8 = 0;
  }
  else {
    local_80 = "eloEarnedDecayStart";
    local_70 = 0x100005;
    local_78 = 0x13;
    lVar3 = FUN_008feca4(param_1,&local_80);
    uVar8 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 4 & 1) != 0) {
      local_80 = "eloEarnedDecayStart";
      local_70 = 0x100005;
      local_78 = 0x13;
      puVar5 = (undefined8 *)FUN_008feca4(param_1,&local_80);
      uVar8 = *puVar5;
    }
  }
  *(undefined8 *)(param_2 + 10) = uVar8;
  lVar3 = FUN_008fd190(param_1,"eloEarnedDecay");
  fVar9 = 0.0;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_80 = "eloEarnedDecay";
    local_70 = 0x100005;
    local_78 = 0xe;
    lVar3 = FUN_008feca4(param_1,&local_80);
    fVar9 = 0.0;
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
      local_80 = "eloEarnedDecay";
      local_70 = 0x100005;
      local_78 = 0xe;
      FUN_008feca4(param_1,&local_80);
      dVar2 = (double)FUN_008fc0f0();
      fVar9 = (float)dVar2;
    }
  }
  param_2[9] = fVar9;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

