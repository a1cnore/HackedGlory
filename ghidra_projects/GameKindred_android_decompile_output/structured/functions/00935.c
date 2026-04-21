// functions/00935 — 18 functions
#include "libGameKindred.h"




void FUN_0093500c(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_02c7c028 != 0) {
    fVar2 = *(float *)(DAT_02c7c028 + 0x14);
    fVar3 = *(float *)(DAT_02c7c028 + 8);
    fVar1 = 1.0 / (*(float *)(DAT_02c7c028 + 0x10) - fVar3);
    fVar4 = 1.0 / (*(float *)(DAT_02c7c028 + 0xc) - fVar2);
    *param_2 = fVar1;
    param_2[1] = fVar4;
    *param_1 = -(fVar3 * fVar1);
    param_1[1] = -(fVar2 * fVar4);
  }
  return;
}




void FUN_00935048(undefined8 *param_1)

{
  FUN_00948cd8();
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_027ba598;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  memset(param_1 + 3,0,0xb8);
  FUN_00936d90(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x26) = 1;
  return;
}




void FUN_009350ac(long param_1,uint param_2)

{
  long lVar1;
  
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0xc0))) {
    lVar1 = *(long *)(param_1 + 200) + (long)(int)param_2 * 0x160;
    FUN_00936b94((uint *)(param_1 + 0xc0),lVar1,lVar1 + 0x160);
    return;
  }
  return;
}




void FUN_009350dc(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  size_t __n;
  byte *__s1;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  size_t sVar6;
  int iVar7;
  byte *pbVar8;
  byte *__s2;
  ulong uVar9;
  long lVar10;
  
  uVar3 = *(uint *)(param_1 + 0xc0);
  if (uVar3 != 0) {
    bVar4 = *param_2;
    __n = *(size_t *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_1 + 200);
    uVar9 = 0;
    if ((bVar4 & 1) == 0) {
      __s1 = param_2 + 1;
      __n = (ulong)(bVar4 >> 1);
    }
    do {
      pbVar8 = (byte *)(lVar10 + uVar9 * 0x160);
      bVar5 = *pbVar8;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar8 + 8);
      }
      if (__n == uVar2) {
        __s2 = *(byte **)(lVar10 + uVar9 * 0x160 + 0x10);
        if ((bVar5 & 1) == 0) {
          __s2 = pbVar8 + 1;
        }
        sVar1 = -(ulong)(bVar4 >> 1);
        pbVar8 = param_2;
        sVar6 = __n;
        if ((bVar4 & 1) == 0) {
          while( true ) {
            if (sVar6 == 0) goto LAB_009351b8;
            if (pbVar8[1] != *__s2) break;
            sVar1 = sVar1 + 1;
            __s2 = __s2 + 1;
            pbVar8 = pbVar8 + 1;
            sVar6 = sVar1;
          }
        }
        else if ((__n == 0) || (iVar7 = memcmp(__s1,__s2,__n), iVar7 == 0)) {
LAB_009351b8:
          if ((int)uVar9 < 0) {
            return;
          }
          lVar10 = lVar10 + (long)(int)uVar9 * 0x160;
          FUN_00936b94((uint *)(param_1 + 0xc0),lVar10,lVar10 + 0x160);
          return;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  return;
}




void FUN_00935204(long param_1)

{
  *(undefined4 *)(param_1 + 0x130) = 1;
  return;
}




void FUN_00935210(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x20) == 0)) {
      *(undefined8 *)(param_1 + 0x18) = param_3;
      *(code **)(param_1 + 0x20) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar2 = FUN_009580b8();
      lVar3 = FUN_009580b8();
      FUN_00963428(uVar2,lVar3 + 0x5478,param_2);
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00935268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




void FUN_009352a0(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x38) == 0)) {
      *(undefined8 *)(param_1 + 0x30) = param_2;
      *(code **)(param_1 + 0x38) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0x40) = 0;
      FUN_009580b8();
      FUN_00963480();
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x009352f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




void FUN_00935314(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x50) == 0)) {
      *(undefined8 *)(param_1 + 0x48) = param_4;
      *(code **)(param_1 + 0x50) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar2 = FUN_009580b8();
      lVar3 = FUN_009580b8();
      FUN_009631e0(uVar2,param_2,lVar3 + 0x5478,param_3);
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00935378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




void FUN_009353b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x68) == 0)) {
      *(undefined8 *)(param_1 + 0x60) = param_4;
      *(code **)(param_1 + 0x68) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar2 = FUN_009580b8();
      lVar3 = FUN_009580b8();
      FUN_00963280(uVar2,param_2,lVar3 + 0x5478,param_3);
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0093541c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




void FUN_0093545c(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0x90) == 0) || (*(long *)(param_1 + 0x98) == 0)) {
      *(undefined8 *)(param_1 + 0x90) = param_2;
      *(code **)(param_1 + 0x98) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      FUN_009580b8();
      FUN_009634bc();
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x009354b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




bool FUN_009354d0(long param_1)

{
  if (*(long *)(param_1 + 0x90) != 0) {
    return *(long *)(param_1 + 0x98) != 0;
  }
  return false;
}




void FUN_009354f0(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0093554c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(2);
    return;
  }
  if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x80) != 0)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(code **)(param_1 + 0x80) = UNRECOVERED_JUMPTABLE;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_009580b8();
  FUN_009634f8();
  return;
}




void FUN_0093556c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 code *UNRECOVERED_JUMPTABLE,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0xa8) == 0) || (*(long *)(param_1 + 0xb0) == 0)) {
      *(undefined8 *)(param_1 + 0xa8) = param_4;
      *(code **)(param_1 + 0xb0) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0xb8) = param_6;
      uVar2 = FUN_009580b8();
      FUN_00963534(uVar2,param_3,param_2);
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x009355d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




void FUN_00935600(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x44) == '\0') {
    (**(code **)(param_1 + 0x20))(0);
  }
  else {
    (**(code **)(param_1 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined4 FUN_00935644(long param_1,undefined4 *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long local_c8;
  ulong local_c0;
  int local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  char *local_60;
  char *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  local_78 = 0x400;
  local_70 = 0;
  local_68 = 0;
  local_b0 = operator_new(0x28);
  local_b0[3] = 0;
  local_b0[4] = 0;
  local_b0[1] = 0x10000;
  local_b0[2] = 0;
  *local_b0 = 0;
  local_60 = (char *)(param_1 + 0x29);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    local_60 = *(char **)(param_1 + 0x38);
  }
  local_a8 = local_b0;
  local_58 = local_60;
  FUN_008fd344(&local_c8,&local_60);
  uVar8 = 0;
  if (local_70 != 0) goto LAB_00935c4c;
  uVar8 = 0;
  if (local_b8 != 3) goto LAB_00935c4c;
  lVar3 = FUN_008fd190(&local_c8,"playerGuildData");
  if (local_c8 + (local_c0 & 0xffffffff) * 0x30 != lVar3) {
    local_60 = "playerGuildData";
    local_50 = 0x100005;
    local_58 = (char *)0xf;
    lVar3 = FUN_008feca4(&local_c8,&local_60);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_60 = "playerGuildData";
      local_50 = 0x100005;
      local_58 = (char *)0xf;
      plVar4 = (long *)FUN_008feca4(&local_c8,&local_60);
      lVar3 = FUN_008fd190(plVar4,"guildsJoined");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        uVar8 = 0;
      }
      else {
        local_60 = "guildsJoined";
        local_50 = 0x100005;
        local_58 = (char *)0xc;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        uVar8 = 0;
        if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
          local_60 = "guildsJoined";
          local_50 = 0x100005;
          local_58 = (char *)0xc;
          puVar5 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
          uVar8 = *puVar5;
        }
      }
      *param_2 = uVar8;
      lVar3 = FUN_008fd190(plVar4,"guildsLeft");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        uVar8 = 0;
      }
      else {
        local_60 = "guildsLeft";
        local_50 = 0x100005;
        local_58 = (char *)0xa;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        uVar8 = 0;
        if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
          local_60 = "guildsLeft";
          local_50 = 0x100005;
          local_58 = (char *)0xa;
          puVar5 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
          uVar8 = *puVar5;
        }
      }
      param_2[1] = uVar8;
      lVar3 = FUN_008fd190(plVar4,"numChestsAvailable");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        uVar8 = 0;
      }
      else {
        local_60 = "numChestsAvailable";
        local_50 = 0x100005;
        local_58 = (char *)0x12;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        uVar8 = 0;
        if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
          local_60 = "numChestsAvailable";
          local_50 = 0x100005;
          local_58 = (char *)0x12;
          puVar5 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
          uVar8 = *puVar5;
        }
      }
      param_2[2] = uVar8;
      lVar3 = FUN_008fd190(plVar4,"numChestsCollected");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        uVar8 = 0;
      }
      else {
        local_60 = "numChestsCollected";
        local_50 = 0x100005;
        local_58 = (char *)0x12;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        uVar8 = 0;
        if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
          local_60 = "numChestsCollected";
          local_50 = 0x100005;
          local_58 = (char *)0x12;
          puVar5 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
          uVar8 = *puVar5;
        }
      }
      param_2[3] = uVar8;
      lVar3 = FUN_008fd190(plVar4,"maxNumChestsCollectable");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        uVar8 = 0;
      }
      else {
        local_60 = "maxNumChestsCollectable";
        local_50 = 0x100005;
        local_58 = (char *)0x17;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        uVar8 = 0;
        if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
          local_60 = "maxNumChestsCollectable";
          local_50 = 0x100005;
          local_58 = (char *)0x17;
          puVar5 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
          uVar8 = *puVar5;
        }
      }
      param_2[4] = uVar8;
      lVar3 = FUN_008fd190(plVar4,"nextRewardChestLevel");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        uVar8 = 0;
      }
      else {
        local_60 = "nextRewardChestLevel";
        local_50 = 0x100005;
        local_58 = (char *)0x14;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        uVar8 = 0;
        if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
          local_60 = "nextRewardChestLevel";
          local_50 = 0x100005;
          local_58 = (char *)0x14;
          puVar5 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
          uVar8 = *puVar5;
        }
      }
      param_2[5] = uVar8;
      lVar3 = FUN_008fd190(plVar4,"collectedJoinGuildBonus");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00935a9c:
        bVar2 = true;
      }
      else {
        local_60 = "collectedJoinGuildBonus";
        local_50 = 0x100005;
        local_58 = (char *)0x17;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_00935a9c;
        local_60 = "collectedJoinGuildBonus";
        local_50 = 0x100005;
        local_58 = (char *)0x17;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
      }
      *(bool *)(param_2 + 6) = bVar2;
      lVar3 = FUN_008fd190(plVar4,"currentRewardChestHashedSku");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00935b1c:
        puVar7 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_60 = "currentRewardChestHashedSku";
        local_50 = 0x100005;
        local_58 = (char *)0x1b;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00935b1c;
        local_60 = "currentRewardChestHashedSku";
        local_50 = 0x100005;
        local_58 = (char *)0x1b;
        puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_60);
        if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      FUN_008fa54c(&local_60,puVar7);
      FUN_008fce60(param_2 + 8,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
      lVar3 = FUN_008fd190(plVar4,"nextRewardChestHashedSku");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00935b98:
        puVar7 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_60 = "nextRewardChestHashedSku";
        local_50 = 0x100005;
        local_58 = (char *)0x18;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00935b98;
        local_60 = "nextRewardChestHashedSku";
        local_50 = 0x100005;
        local_58 = (char *)0x18;
        puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_60);
        if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      FUN_008fa54c(&local_60,puVar7);
      FUN_008fce60(param_2 + 0xe,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
      FUN_008fefd4(param_2 + 0x14,0);
      lVar3 = FUN_008fd190(plVar4,"joinGuildBonuses");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_60 = "joinGuildBonuses";
        local_50 = 0x100005;
        local_58 = (char *)0x10;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        if (*(int *)(lVar3 + 0x10) == 4) {
          local_60 = "joinGuildBonuses";
          local_50 = 0x100005;
          local_58 = (char *)0x10;
          uVar6 = FUN_008feca4(plVar4,&local_60);
          FUN_00cafac0(uVar6,param_2 + 0x14);
        }
      }
    }
  }
  uVar8 = 1;
LAB_00935c4c:
  puVar7 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_a8);
    operator_delete(puVar7);
  }
  free(local_90);
  if (local_98 != (void *)0x0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00935d00(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_00936d90(param_1 + 0xd0);
  uVar1 = FUN_00935644(param_2,param_1 + 0xd0);
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_1 + 0x38))(0);
  }
  else {
    (**(code **)(param_1 + 0x30))();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}




void FUN_00935d68(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_88 = 0;
  local_60 = 0x400;
  local_58 = 0;
  local_50 = 0;
  local_98 = operator_new(0x28);
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[1] = 0x10000;
  local_98[2] = 0;
  *local_98 = 0;
  local_48 = param_2 + 0x29;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_48 = *(long *)(param_2 + 0x38);
  }
  local_90 = local_98;
  lStack_40 = local_48;
  FUN_008fd344(&local_b0,&local_48);
  if ((local_58 == 0) && (local_a0 == 4)) {
    local_48 = 0;
    lStack_40 = 0;
    FUN_00cafac0(&local_b0,&local_48);
    pcVar3 = *(code **)(param_1 + 0x90);
    FUN_0093690c(auStack_c0,&local_48);
    (*pcVar3)(auStack_c0);
    FUN_008fefd4(auStack_c0,1);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_008fefd4(&local_48,1);
  }
  else {
    (**(code **)(param_1 + 0x98))(0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  puVar2 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_90);
    operator_delete(puVar2);
  }
  free(local_78);
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00935ebc(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_88 = 0;
  local_60 = 0x400;
  local_58 = 0;
  local_50 = 0;
  local_98 = operator_new(0x28);
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[1] = 0x10000;
  local_98[2] = 0;
  *local_98 = 0;
  local_48 = param_2 + 0x29;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_48 = *(long *)(param_2 + 0x38);
  }
  local_90 = local_98;
  lStack_40 = local_48;
  FUN_008fd344(&local_b0,&local_48);
  if ((local_58 == 0) && (local_a0 == 4)) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
    local_48 = 0;
    lStack_40 = 0;
    FUN_00cafac0(&local_b0,&local_48);
    pcVar3 = *(code **)(param_1 + 0x78);
    FUN_0093690c(auStack_c0,&local_48);
    (*pcVar3)(auStack_c0);
    FUN_008fefd4(auStack_c0,1);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_008fefd4(&local_48,1);
  }
  else {
    (**(code **)(param_1 + 0x80))(0);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  puVar2 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_90);
    operator_delete(puVar2);
  }
  free(local_78);
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

