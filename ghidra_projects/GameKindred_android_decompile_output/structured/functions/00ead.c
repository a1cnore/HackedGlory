// functions/00ead — 2 functions
#include "libGameKindred.h"




bool FUN_00ead090(long param_1,long param_2)

{
  return *(int *)(param_2 + 0x48) < *(int *)(param_1 + 0x48);
}




void FUN_00ead0a4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  ulong local_130 [2];
  void *local_120;
  undefined8 local_118;
  void *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  char *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  byte local_e0 [16];
  void *local_d0;
  byte local_c8 [16];
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    uVar12 = 0;
  }
  else {
    local_f8 = "code";
    local_e8 = 0x100005;
    local_f0 = 4;
    lVar4 = FUN_008feca4(param_1,&local_f8);
    uVar12 = 0;
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_f8 = "code";
      local_e8 = 0x100005;
      local_f0 = 4;
      puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_f8);
      uVar12 = *puVar5;
    }
  }
  lVar4 = param_2 + 0x98;
  *(undefined4 *)(param_2 + 0xd8) = uVar12;
  FUN_0095571c(lVar4,0);
  FUN_009557a8(param_2 + 0xa8,0);
  lVar6 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar6) goto LAB_00eae2e0;
  local_f8 = "returnValue";
  local_e8 = 0x100005;
  local_f0 = 0xb;
  lVar6 = FUN_008feca4(param_1,&local_f8);
  if (*(int *)(lVar6 + 0x10) != 3) goto LAB_00eae2e0;
  local_130[0] = 0;
  local_130[1] = 0;
  local_120 = (void *)0x0;
  FUN_00e70510();
  local_f8 = "returnValue";
  local_e8 = 0x100005;
  local_f0 = 0xb;
  plVar7 = (long *)FUN_008feca4(param_1,&local_f8);
  lVar6 = FUN_008fd190(plVar7,"success");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
    bVar3 = false;
  }
  else {
    local_f8 = "success";
    local_e8 = 0x100005;
    local_f0 = 7;
    lVar6 = FUN_008feca4(plVar7,&local_f8);
    bVar3 = false;
    if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
      local_f8 = "success";
      local_e8 = 0x100005;
      local_f0 = 7;
      lVar6 = FUN_008feca4(plVar7,&local_f8);
      bVar3 = *(int *)(lVar6 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0xb8) = bVar3;
  FUN_008fce60(param_2 + 0xc0,&DAT_0320ffa8);
  if (*(char *)(param_2 + 0xb8) != '\0') {
    lVar6 = FUN_008fd190(plVar7,"members");
    if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_00ead4ec:
      *(undefined4 *)(param_2 + 0xd8) = 0xfffffffa;
      FUN_00e83324(0xfffffffa);
    }
    else {
      lVar6 = FUN_008fd190(plVar7,"teamUUID");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) goto LAB_00ead4ec;
      lVar6 = FUN_008fd190(plVar7,"teamUUID");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_00ead354:
        puVar10 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_f8 = "teamUUID";
        local_e8 = 0x100005;
        local_f0 = 8;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_00ead354;
        local_f8 = "teamUUID";
        local_e8 = 0x100005;
        local_f0 = 8;
        puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_f8);
        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
          puVar10 = (undefined8 *)*puVar10;
        }
      }
      FUN_008fa54c(&local_f8,puVar10);
      FUN_008fce60(param_2 + 0x28,&local_f8);
      if (((ulong)local_f8 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_e4,local_e8));
      }
      lVar6 = FUN_008fd190(plVar7,"name");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_00ead3d0:
        puVar10 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_f8 = "name";
        local_e8 = 0x100005;
        local_f0 = 4;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_00ead3d0;
        local_f8 = "name";
        local_e8 = 0x100005;
        local_f0 = 4;
        puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_f8);
        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
          puVar10 = (undefined8 *)*puVar10;
        }
      }
      FUN_008fa54c(&local_f8,puVar10);
      FUN_008fce60(param_2 + 0x40,&local_f8);
      if (((ulong)local_f8 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_e4,local_e8));
      }
      lVar6 = FUN_008fd190(plVar7,"tag");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_00ead44c:
        puVar10 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_f8 = "tag";
        local_e8 = 0x100005;
        local_f0 = 3;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_00ead44c;
        local_f8 = "tag";
        local_e8 = 0x100005;
        local_f0 = 3;
        puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_f8);
        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
          puVar10 = (undefined8 *)*puVar10;
        }
      }
      FUN_008fa54c(&local_f8,puVar10);
      FUN_008fce60(param_2 + 0x58,&local_f8);
      if (((ulong)local_f8 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_e4,local_e8));
      }
      lVar6 = FUN_008fd190(plVar7,"numMembers");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
        uVar12 = 0;
      }
      else {
        local_f8 = "numMembers";
        local_e8 = 0x100005;
        local_f0 = 10;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        uVar12 = 0;
        if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
          local_f8 = "numMembers";
          local_e8 = 0x100005;
          local_f0 = 10;
          puVar5 = (undefined4 *)FUN_008feca4(plVar7,&local_f8);
          uVar12 = *puVar5;
        }
      }
      *(undefined4 *)(param_2 + 0x70) = uVar12;
      lVar6 = FUN_008fd190(plVar7,"maxMembers");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
        uVar12 = 0;
      }
      else {
        local_f8 = "maxMembers";
        local_e8 = 0x100005;
        local_f0 = 10;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        uVar12 = 0;
        if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
          local_f8 = "maxMembers";
          local_e8 = 0x100005;
          local_f0 = 10;
          puVar5 = (undefined4 *)FUN_008feca4(plVar7,&local_f8);
          uVar12 = *puVar5;
        }
      }
      *(undefined4 *)(param_2 + 0x74) = uVar12;
      lVar6 = FUN_008fd190(plVar7,&DAT_01b964d3);
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
        uVar12 = 0;
      }
      else {
        local_f8 = "wins";
        local_e8 = 0x100005;
        local_f0 = 4;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        uVar12 = 0;
        if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
          local_f8 = "wins";
          local_e8 = 0x100005;
          local_f0 = 4;
          puVar5 = (undefined4 *)FUN_008feca4(plVar7,&local_f8);
          uVar12 = *puVar5;
        }
      }
      *(undefined4 *)(param_2 + 0x78) = uVar12;
      lVar6 = FUN_008fd190(plVar7,"skillTier");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
        uVar12 = 0;
      }
      else {
        local_f8 = "skillTier";
        local_e8 = 0x100005;
        local_f0 = 9;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        uVar12 = 0;
        if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
          local_f8 = "skillTier";
          local_e8 = 0x100005;
          local_f0 = 9;
          puVar5 = (undefined4 *)FUN_008feca4(plVar7,&local_f8);
          uVar12 = *puVar5;
        }
      }
      *(undefined4 *)(param_2 + 0x7c) = uVar12;
      lVar6 = FUN_008fd190(plVar7,"skillTierProgress");
      dVar17 = 0.0;
      dVar16 = 0.0;
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar6) {
        local_f8 = "skillTierProgress";
        local_e8 = 0x100005;
        local_f0 = 0x11;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        dVar16 = 0.0;
        if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
          local_f8 = "skillTierProgress";
          local_e8 = 0x100005;
          local_f0 = 0x11;
          FUN_008feca4(plVar7,&local_f8);
          dVar16 = (double)FUN_008fc0f0();
        }
      }
      fVar15 = (float)NEON_fminnm((float)dVar16,0x3f800000);
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      *(float *)(param_2 + 0x80) = fVar15;
      lVar6 = FUN_008fd190(plVar7,"skillTierBronzeLine");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar6) {
        local_f8 = "skillTierBronzeLine";
        local_e8 = 0x100005;
        local_f0 = 0x13;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
          local_f8 = "skillTierBronzeLine";
          local_e8 = 0x100005;
          local_f0 = 0x13;
          FUN_008feca4(plVar7,&local_f8);
          dVar17 = (double)FUN_008fc0f0();
        }
      }
      fVar15 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      *(float *)(param_2 + 0x84) = fVar15;
      lVar6 = FUN_008fd190(plVar7,"skillTierSilverLine");
      dVar16 = 0.0;
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar6) {
        local_f8 = "skillTierSilverLine";
        local_e8 = 0x100005;
        local_f0 = 0x13;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
          local_f8 = "skillTierSilverLine";
          local_e8 = 0x100005;
          local_f0 = 0x13;
          FUN_008feca4(plVar7,&local_f8);
          dVar16 = (double)FUN_008fc0f0();
        }
      }
      fVar15 = (float)NEON_fminnm((float)dVar16,0x3f800000);
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      *(float *)(param_2 + 0x88) = fVar15;
      lVar6 = FUN_008fd190(plVar7,"skillTierGoldLine");
      fVar15 = 0.0;
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar6) {
        local_f8 = "skillTierGoldLine";
        local_e8 = 0x100005;
        local_f0 = 0x11;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        fVar15 = 0.0;
        if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
          local_f8 = "skillTierGoldLine";
          local_e8 = 0x100005;
          local_f0 = 0x11;
          FUN_008feca4(plVar7,&local_f8);
          dVar16 = (double)FUN_008fc0f0();
          fVar15 = (float)dVar16;
        }
      }
      fVar15 = (float)NEON_fminnm(fVar15,0x3f800000);
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      *(float *)(param_2 + 0x8c) = fVar15;
      lVar6 = FUN_008fd190(plVar7,"bForDisplay");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
        bVar3 = false;
      }
      else {
        local_f8 = "bForDisplay";
        local_e8 = 0x100005;
        local_f0 = 0xb;
        lVar6 = FUN_008feca4(plVar7,&local_f8);
        bVar3 = false;
        if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
          local_f8 = "bForDisplay";
          local_e8 = 0x100005;
          local_f0 = 0xb;
          lVar6 = FUN_008feca4(plVar7,&local_f8);
          bVar3 = *(int *)(lVar6 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x90) = bVar3;
      FUN_0095571c(lVar4,0);
      local_f8 = "members";
      local_e8 = 0x100005;
      local_f0 = 7;
      plVar8 = (long *)FUN_008feca4(plVar7,&local_f8);
      uVar14 = (ulong)*(uint *)(plVar8 + 1);
      if (0 < (int)*(uint *)(plVar8 + 1)) {
        lVar6 = 0;
        do {
          plVar1 = (long *)(*plVar8 + lVar6);
          lVar9 = FUN_008fd190(plVar1,"uuid");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
            puVar10 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_f8 = "uuid";
            local_e8 = 0x100005;
            local_f0 = 4;
            lVar9 = FUN_008feca4(plVar1,&local_f8);
            puVar10 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
              local_f8 = "uuid";
              local_e8 = 0x100005;
              local_f0 = 4;
              puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_f8);
              if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                puVar10 = (undefined8 *)*puVar10;
              }
            }
          }
          FUN_008fa54c(&local_f8,puVar10);
          FUN_008fce60(local_130,&local_f8);
          if (((ulong)local_f8 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_e4,local_e8));
          }
          lVar9 = FUN_008fd190(plVar1,"handle");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
            puVar10 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_f8 = "handle";
            local_e8 = 0x100005;
            local_f0 = 6;
            lVar9 = FUN_008feca4(plVar1,&local_f8);
            puVar10 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
              local_f8 = "handle";
              local_e8 = 0x100005;
              local_f0 = 6;
              puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_f8);
              if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                puVar10 = (undefined8 *)*puVar10;
              }
            }
          }
          FUN_00e705a0(&local_118,puVar10);
          lVar9 = FUN_008fd190(plVar1,"status");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
            uVar12 = 0;
          }
          else {
            local_f8 = "status";
            local_e8 = 0x100005;
            local_f0 = 6;
            lVar9 = FUN_008feca4(plVar1,&local_f8);
            uVar12 = 0;
            if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
              local_f8 = "status";
              local_e8 = 0x100005;
              local_f0 = 6;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_f8);
              uVar12 = *puVar5;
            }
          }
          local_100 = uVar12;
          lVar9 = FUN_008fd190(plVar1,"availability");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
            uVar12 = 0;
          }
          else {
            local_f8 = "availability";
            local_e8 = 0x100005;
            local_f0 = 0xc;
            lVar9 = FUN_008feca4(plVar1,&local_f8);
            uVar12 = 0;
            if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
              local_f8 = "availability";
              local_e8 = 0x100005;
              local_f0 = 0xc;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_f8);
              uVar12 = *puVar5;
            }
          }
          local_108 = uVar12;
          lVar9 = FUN_008fd190(plVar1,"timeSinceLastOnline");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
            uVar12 = 0;
          }
          else {
            local_f8 = "timeSinceLastOnline";
            local_e8 = 0x100005;
            local_f0 = 0x13;
            lVar9 = FUN_008feca4(plVar1,&local_f8);
            uVar12 = 0;
            if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
              local_f8 = "timeSinceLastOnline";
              local_e8 = 0x100005;
              local_f0 = 0x13;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_f8);
              uVar12 = *puVar5;
            }
          }
          local_104 = uVar12;
          lVar9 = FUN_008fd190(plVar1,"allowedToInvite");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
            bVar3 = false;
          }
          else {
            local_f8 = "allowedToInvite";
            local_e8 = 0x100005;
            local_f0 = 0xf;
            lVar9 = FUN_008feca4(plVar1,&local_f8);
            bVar3 = false;
            if ((*(byte *)(lVar9 + 0x11) & 1) != 0) {
              local_f8 = "allowedToInvite";
              local_e8 = 0x100005;
              local_f0 = 0xf;
              lVar9 = FUN_008feca4(plVar1,&local_f8);
              bVar3 = *(int *)(lVar9 + 0x10) == 0x102;
            }
          }
          local_fc = bVar3;
          lVar9 = FUN_008fd190(plVar1,"isCaptain");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
            iVar13 = 0;
          }
          else {
            local_f8 = "isCaptain";
            local_e8 = 0x100005;
            local_f0 = 9;
            lVar9 = FUN_008feca4(plVar1,&local_f8);
            iVar13 = 0;
            if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
              local_f8 = "isCaptain";
              local_e8 = 0x100005;
              local_f0 = 9;
              piVar11 = (int *)FUN_008feca4(plVar1,&local_f8);
              iVar13 = *piVar11;
            }
          }
          local_fb = iVar13 != 0;
          lVar9 = FUN_008fd190(plVar1,"isFriend");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
            bVar3 = false;
          }
          else {
            local_f8 = "isFriend";
            local_e8 = 0x100005;
            local_f0 = 8;
            lVar9 = FUN_008feca4(plVar1,&local_f8);
            bVar3 = false;
            if ((*(byte *)(lVar9 + 0x11) & 1) != 0) {
              local_f8 = "isFriend";
              local_e8 = 0x100005;
              local_f0 = 8;
              lVar9 = FUN_008feca4(plVar1,&local_f8);
              bVar3 = *(int *)(lVar9 + 0x10) == 0x102;
            }
          }
          local_fa = bVar3;
          FUN_00eae3cc(lVar4,local_130);
          uVar14 = uVar14 - 1;
          lVar6 = lVar6 + 0x18;
        } while (uVar14 != 0);
      }
    }
    FUN_00eae47c(&local_f8);
    lVar4 = FUN_008fd190(plVar7,"trophyCase");
    if ((*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar4) &&
       (lVar4 = FUN_008fd190(plVar7,"teamUUID"),
       *plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar4)) {
      local_a8 = (code *)0x1bf0ace;
      local_98 = 0x100005;
      local_a0 = 10;
      plVar8 = (long *)FUN_008feca4(plVar7,&local_a8);
      if ((int)plVar8[1] != 0) {
        lVar4 = 0;
        uVar14 = 0;
        do {
          plVar1 = (long *)(*plVar8 + lVar4);
          lVar6 = FUN_008fd190(plVar1,"trophy_type");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
            puVar10 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_a8 = (code *)0x1bf0ae8;
            local_98 = 0x100005;
            local_a0 = 0xb;
            lVar6 = FUN_008feca4(plVar1,&local_a8);
            puVar10 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
              local_a8 = (code *)0x1bf0ae8;
              local_98 = 0x100005;
              local_a0 = 0xb;
              puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_a8);
              if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                puVar10 = (undefined8 *)*puVar10;
              }
            }
          }
          FUN_008fa54c(&local_a8,puVar10);
          FUN_008fce60(&local_f8,&local_a8);
          if (((ulong)local_a8 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_94,local_98));
          }
          lVar6 = FUN_008fd190(plVar1,"name");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
            puVar10 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_a8 = (code *)0x1e3357a;
            local_98 = 0x100005;
            local_a0 = 4;
            lVar6 = FUN_008feca4(plVar1,&local_a8);
            puVar10 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
              local_a8 = (code *)0x1e3357a;
              local_98 = 0x100005;
              local_a0 = 4;
              puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_a8);
              if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                puVar10 = (undefined8 *)*puVar10;
              }
            }
          }
          FUN_008fa54c(&local_a8,puVar10);
          FUN_008fce60(local_e0,&local_a8);
          if (((ulong)local_a8 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_94,local_98));
          }
          lVar6 = FUN_008fd190(plVar1,"tag");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
            puVar10 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_a8 = (code *)0x1e46d3b;
            local_98 = 0x100005;
            local_a0 = 3;
            lVar6 = FUN_008feca4(plVar1,&local_a8);
            puVar10 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
              local_a8 = (code *)0x1e46d3b;
              local_98 = 0x100005;
              local_a0 = 3;
              puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_a8);
              if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                puVar10 = (undefined8 *)*puVar10;
              }
            }
          }
          FUN_008fa54c(&local_a8,puVar10);
          FUN_008fce60(local_c8,&local_a8);
          if (((ulong)local_a8 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_94,local_98));
          }
          lVar6 = FUN_008fd190(plVar1,"season");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
            uVar12 = 0;
          }
          else {
            local_a8 = (code *)0x1b99fc2;
            local_98 = 0x100005;
            local_a0 = 6;
            lVar6 = FUN_008feca4(plVar1,&local_a8);
            uVar12 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_a8 = (code *)0x1b99fc2;
              local_98 = 0x100005;
              local_a0 = 6;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_a8);
              uVar12 = *puVar5;
            }
          }
          local_b0 = uVar12;
          lVar6 = FUN_008fd190(plVar1,"value");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
            uVar12 = 0;
          }
          else {
            local_a8 = (code *)0x1e32079;
            local_98 = 0x100005;
            local_a0 = 5;
            lVar6 = FUN_008feca4(plVar1,&local_a8);
            uVar12 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_a8 = (code *)0x1e32079;
              local_98 = 0x100005;
              local_a0 = 5;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_a8);
              uVar12 = *puVar5;
            }
          }
          local_ac = uVar12;
          FUN_00b78964(param_2 + 0xa8,&local_f8);
          uVar14 = uVar14 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar14 < *(uint *)(plVar8 + 1));
      }
    }
    local_a8 = FUN_00ead090;
    FUN_00ebc454(*(long *)(param_2 + 0xb0),
                 *(long *)(param_2 + 0xb0) + (ulong)*(uint *)(param_2 + 0xa8) * 0x50,&local_a8);
    if ((local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
    if ((local_e0[0] & 1) != 0) {
      operator_delete(local_d0);
    }
    if (((ulong)local_f8 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_e4,local_e8));
    }
  }
  lVar4 = FUN_008fd190(plVar7,"reason");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
LAB_00eae290:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_f8 = "reason";
    local_e8 = 0x100005;
    local_f0 = 6;
    lVar4 = FUN_008feca4(plVar7,&local_f8);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00eae290;
    local_f8 = "reason";
    local_e8 = 0x100005;
    local_f0 = 6;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_f8);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_f8,puVar10);
  FUN_008fce60(param_2 + 0xc0,&local_f8);
  if (((ulong)local_f8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_e4,local_e8));
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = 0;
  }
  if ((local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
LAB_00eae2e0:
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

