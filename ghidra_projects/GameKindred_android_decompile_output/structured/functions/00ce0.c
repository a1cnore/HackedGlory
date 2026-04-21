// functions/00ce0 — 29 functions
#include "libGameKindred.h"




void thunk_FUN_00ce048c(void)

{
  FUN_009580b8();
  FUN_00962950();
  return;
}




void thunk_FUN_00ce048c(void)

{
  FUN_009580b8();
  FUN_00962950();
  return;
}




void FUN_00ce0214(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined1 auStack_d8 [16];
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
  undefined8 local_58;
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
  local_f0 = param_2 + 0x29;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_f0 = *(ulong *)(param_2 + 0x38);
  }
  uStack_e8 = local_f0;
  local_a8 = local_b0;
  FUN_008fd344(&local_c8,&local_f0);
  FUN_00cdfbbc(&local_f0);
  if ((local_70 == 0) && (local_b8 == 3)) {
    lVar2 = FUN_008fd190(&local_c8,"collectContents");
    if (local_c8 + (local_c0 & 0xffffffff) * 0x30 != lVar2) {
      local_60 = "collectContents";
      local_50 = 0x100005;
      local_58 = 0xf;
      lVar2 = FUN_008feca4(&local_c8,&local_60);
      if (*(int *)(lVar2 + 0x10) == 4) {
        lVar2 = FUN_008fd190(&local_c8,"errorCode");
        if (local_c8 + (local_c0 & 0xffffffff) * 0x30 == lVar2) {
LAB_00ce036c:
          puVar4 = (undefined8 *)&DAT_01e277f2;
        }
        else {
          local_60 = "errorCode";
          local_50 = 0x100005;
          local_58 = 9;
          lVar2 = FUN_008feca4(&local_c8,&local_60);
          if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_00ce036c;
          local_60 = "errorCode";
          local_50 = 0x100005;
          local_58 = 9;
          puVar4 = (undefined8 *)FUN_008feca4(&local_c8,&local_60);
          if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
        }
        FUN_008fa54c(&local_60,puVar4);
        FUN_008fce60(&local_f0,&local_60);
        if (((ulong)local_60 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_4c,local_50));
        }
        local_60 = "collectContents";
        local_50 = 0x100005;
        local_58 = 0xf;
        uVar3 = FUN_008feca4(&local_c8,&local_60);
        FUN_00cafac0(uVar3,auStack_d8);
        FUN_00cdfddc(1,&local_f0);
        FUN_009580b8();
        FUN_00962950();
        goto LAB_00ce03ec;
      }
    }
  }
  FUN_00cdfddc(0,&local_f0);
LAB_00ce03ec:
  FUN_008fefd4(auStack_d8,1);
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  puVar4 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_a8);
    operator_delete(puVar4);
  }
  free(local_90);
  if (local_98 != (void *)0x0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ce048c(void)

{
  FUN_009580b8();
  FUN_00962950();
  return;
}




void FUN_00ce04a0(void)

{
  FUN_009580b8();
  FUN_00962950();
  return;
}




void FUN_00ce04b4(void)

{
  FUN_009580b8();
  FUN_00962950();
  return;
}




void FUN_00ce04c8(void)

{
  undefined8 *__s;
  
  __s = operator_new(0x70);
  memset(__s,0,0x70);
  FUN_00948cd8(__s);
  FUN_00e83560(__s + 3);
  *__s = &PTR_FUN_0280eec8;
  __s[3] = &PTR_FUN_0280f268;
  FUN_00ce06f8(__s + 6);
  DAT_0313e550 = __s;
  return;
}




void FUN_00ce0530(void)

{
  if (DAT_0313e550 != (long *)0x0) {
    (**(code **)(*DAT_0313e550 + 8))();
  }
  DAT_0313e550 = (long *)0x0;
  return;
}




long FUN_00ce0564(void)

{
  return DAT_0313e550 + 0x30;
}




void FUN_00ce0574(void)

{
  FUN_009580b8();
  FUN_00962994();
  return;
}




void FUN_00ce0588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280eec8;
  param_1[3] = &PTR_FUN_0280f268;
  FUN_0099cedc(param_1 + 8);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_00ce05e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280eec8;
  param_1[3] = &PTR_FUN_0280f268;
  FUN_0099cedc(param_1 + 8);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ce0640(undefined8 *param_1)

{
  param_1[-3] = &PTR_FUN_0280eec8;
  *param_1 = &PTR_FUN_0280f268;
  FUN_0099cedc(param_1 + 5);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00e835e0(param_1);
  FUN_00948d58(param_1 + -3);
  return;
}




void FUN_00ce0698(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_0280eec8;
  *param_1 = &PTR_FUN_0280f268;
  FUN_0099cedc(param_1 + 5);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00e835e0(param_1);
  FUN_00948d58(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00ce06f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 2;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0099ce88(puVar1);
  FUN_0099cfec(puVar1,"QUESTS.HEROCHEST.COLLECT",0);
  *(undefined8 *)((long)param_1 + 0x36) = 0;
  param_1[6] = 0;
  if (param_1[1] != 0) {
    *(undefined4 *)param_1 = 0;
  }
  FUN_0099cf94(puVar1,0);
  return;
}




void FUN_00ce0754(undefined4 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  FUN_0099cf94(param_1 + 4,0);
  return;
}




void FUN_00ce0774(undefined4 *param_1,undefined8 param_2,undefined4 param_3,byte param_4,
                 byte param_5)

{
  *(undefined8 *)(param_1 + 0xc) = param_2;
  param_1[0xe] = param_3;
  *(byte *)(param_1 + 0xf) = param_4 & 1;
  *(byte *)((long)param_1 + 0x3d) = param_5 & 1;
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  FUN_0099cf94(param_1 + 4);
  return;
}




undefined8
FUN_00ce07a4(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar6;
  
  uVar2 = FUN_00ceab48();
  if (((uVar2 & 1) == 0) && (lVar3 = FUN_00d9e390(param_5), param_1 != 0 || lVar3 != 0)) {
    if (param_2 == -1) {
      uVar2 = 0;
      ppuVar6 = &PTR_FUN_02be9da8;
      do {
        pcVar4 = (char *)FUN_00d5bc2c(lVar3);
        iVar1 = strcasecmp(pcVar4,ppuVar6[-1]);
        if (iVar1 == 0) {
          UNRECOVERED_JUMPTABLE = (code *)*ppuVar6;
          param_2 = -1;
          goto LAB_00ce089c;
        }
        uVar2 = uVar2 + 1;
        ppuVar6 = ppuVar6 + 2;
      } while (uVar2 < 7);
    }
    else {
      uVar2 = 0;
      ppuVar6 = &PTR_FUN_02be9da8;
      do {
        pcVar4 = (char *)FUN_00d5bc2c(param_1);
        iVar1 = strcasecmp(pcVar4,ppuVar6[-1]);
        if (iVar1 == 0) {
          UNRECOVERED_JUMPTABLE = (code *)*ppuVar6;
LAB_00ce089c:
                    /* WARNING: Could not recover jumptable at 0x00ce08c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
          return uVar5;
        }
        uVar2 = uVar2 + 1;
        ppuVar6 = ppuVar6 + 2;
      } while (uVar2 < 7);
    }
  }
  return 0;
}




void FUN_00ce08c4(undefined8 param_1,float *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d9eb64();
  local_60 = 0xffffffff;
  local_5c = 0xffffffff;
  local_64 = 0xffffffff;
  uVar3 = FUN_00d53914(uVar2,0);
  FUN_00ce9fc8("BurstHealStrength",uVar3,&local_5c);
  uVar3 = FUN_00d53914(uVar2,0);
  FUN_00ce9fc8("HealPerSecond",uVar3,&local_60);
  uVar2 = FUN_00d53914(uVar2,0);
  FUN_00ce9fc8("HealDuration",uVar2,&local_64);
  fVar4 = (float)FUN_00d59f54(param_1,0,local_5c,1,1);
  fVar5 = (float)FUN_00d59f54(param_1,0,local_5c,8,1);
  fVar6 = (float)FUN_00d59f54(param_1,0,local_60,1,1);
  fVar7 = (float)FUN_00d59f54(param_1,0,local_60,8,1);
  fVar8 = (float)FUN_00d59f54(param_1,0,local_64,1,1);
  param_2[4] = 1.4013e-45;
  *param_2 = fVar4 + fVar6 * fVar8;
  param_2[1] = fVar5 + fVar7;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ce0a34(undefined8 param_1,float *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d9e390(param_3);
  if (lVar2 != 0) {
    uVar3 = FUN_00d9eb64(lVar2);
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    uVar4 = FUN_00d53914(uVar3,0);
    FUN_00ce9fc8("HealPerSecond",uVar4,&local_4c);
    uVar3 = FUN_00d53914(uVar3,0);
    FUN_00ce9fc8("HealDuration",uVar3,&local_50);
    fVar5 = (float)FUN_00d59f54(lVar2,0,local_4c,1,1);
    fVar6 = (float)FUN_00d59f54(lVar2,0,local_4c,8,1);
    fVar7 = (float)FUN_00d59f54(lVar2,0,local_50,1,1);
    *param_2 = fVar5 * fVar7;
    param_2[1] = fVar6 * fVar7;
    param_2[4] = 1.4013e-45;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ce0b4c(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d9e390(param_3);
  if (lVar2 != 0) {
    uVar3 = FUN_00d9eb64(lVar2);
    local_3c = 0xffffffff;
    uVar3 = FUN_00d53914(uVar3,1);
    FUN_00ce9fc8("BaseBonusDamage",uVar3,&local_3c);
    uVar4 = FUN_00d59f54(lVar2,1,local_3c,1,1);
    *param_2 = uVar4;
    uVar4 = FUN_00d59f54(lVar2,1,local_3c,8,1);
    param_2[1] = uVar4;
    param_2[4] = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8
FUN_00ce0c14(undefined8 param_1,int param_2,char *param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 == -1) {
    iVar1 = strcasecmp(param_3,"HOT");
    if (iVar1 == 0) {
      FUN_00ce0a34(0,param_4,param_5);
    }
    else {
      iVar1 = strcasecmp(param_3,"DAMAGE");
      if (iVar1 != 0) {
        return 0;
      }
      FUN_00ce0b4c(0,param_4,param_5);
    }
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    iVar1 = strcasecmp(param_3,"HealAmount");
    if (iVar1 != 0) {
      return 0;
    }
    FUN_00ce08c4(param_1,param_4);
  }
  return 1;
}




void FUN_00ce0cd0(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d9eb64();
  local_50 = 0xffffffff;
  uStack_4c = 0xffffffff;
  uVar3 = FUN_00d53914(uVar2,0);
  FUN_00ce9fc8("BarrierStrength",uVar3,&uStack_4c);
  uVar2 = FUN_00d53914(uVar2,0);
  FUN_00ce9fc8("Barrier_Health_Ratio",uVar2,&local_50);
  uVar5 = FUN_00d59f54(param_1,0,3,9,1);
  lVar4 = *(long *)(param_1 + 0x40);
  fVar8 = *(float *)(lVar4 + 0x38);
  fVar6 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
          (fVar8 + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
  if (DAT_0313e620 <= fVar6) {
    fVar6 = DAT_0313e620;
  }
  fVar7 = DAT_0313e560;
  if (DAT_0313e560 <= fVar6) {
    fVar7 = fVar6;
  }
  fVar6 = (float)FUN_00d59f54(param_1,0,9,9,1);
  *param_2 = uVar5;
  param_2[4] = 1;
  param_2[3] = fVar6 * (fVar7 - fVar8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00ce0e0c(undefined8 param_1,int param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    iVar1 = strcasecmp(param_3,"CalcFullBarrierAmount");
    uVar2 = 0;
    if (iVar1 == 0) {
      FUN_00ce0cd0(param_1,param_4);
      uVar2 = 1;
    }
  }
  return uVar2;
}




void FUN_00ce0e60(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_0313e7b0 <= fVar2) {
    fVar2 = DAT_0313e7b0;
  }
  fVar3 = (float)DAT_0313e6f0;
  if ((float)DAT_0313e6f0 <= fVar2) {
    fVar3 = fVar2;
  }
  fVar2 = (float)FUN_00d59f54(param_1,0,3,9,1);
  *param_2 = fVar3;
  param_2[1] = fVar2;
  param_2[4] = 1.4013e-45;
  return;
}




undefined8 FUN_00ce0ef8(undefined8 param_1,int param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    iVar1 = strcasecmp(param_3,"TooltipDamage");
    uVar2 = 0;
    if (iVar1 == 0) {
      FUN_00ce0e60(param_1,param_4);
      uVar2 = 1;
    }
  }
  return uVar2;
}




void FUN_00ce0f4c(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = FUN_00d9eb64();
  uVar3 = FUN_00d53914(uVar2,0);
  lVar4 = FUN_00ce9e94("FirstHitDamage",uVar3);
  if (lVar4 == 0) {
    *param_2 = 0;
  }
  else {
    iVar1 = FUN_00d535a4(uVar2,0);
    lVar5 = *(long *)(param_1 + 0x40);
    fVar9 = *(float *)(lVar5 + 0x48);
    fVar6 = (*(float *)(lVar5 + 0x240) + 1.0) *
            (*(float *)(lVar5 + 0xd8) +
            *(float *)(lVar5 + 0x18c) * (*(float *)(lVar5 + 0x2f4) + 1.0));
    fVar11 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
             (*(float *)(lVar5 + 0x38) +
             *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0));
    fVar10 = (*(float *)(lVar5 + 0x1b0) + 1.0) *
             (fVar9 + *(float *)(lVar5 + 0xfc) * (*(float *)(lVar5 + 0x264) + 1.0));
    if (DAT_0313e9c0 <= fVar6) {
      fVar6 = DAT_0313e9c0;
    }
    fVar7 = DAT_0313e900;
    if (DAT_0313e900 <= fVar6) {
      fVar7 = fVar6;
    }
    if (DAT_0313e920 <= fVar11) {
      fVar11 = DAT_0313e920;
    }
    fVar6 = DAT_0313e860;
    if (DAT_0313e860 <= fVar11) {
      fVar6 = fVar11;
    }
    if (DAT_0313e930 <= fVar10) {
      fVar10 = DAT_0313e930;
    }
    fVar11 = (float)DAT_0313e870;
    if ((float)DAT_0313e870 <= fVar10) {
      fVar11 = fVar10;
    }
    uVar8 = FUN_00d08368(fVar6 - *(float *)(lVar5 + 0x38),lVar4,iVar1,iVar1 == 5,(int)fVar7);
    *param_2 = uVar8;
    lVar5 = *(long *)(param_1 + 0x40);
    fVar10 = (*(float *)(lVar5 + 0x1b4) + 1.0) *
             (*(float *)(lVar5 + 0x4c) +
             *(float *)(lVar5 + 0x100) * (*(float *)(lVar5 + 0x268) + 1.0));
    if (DAT_0313e934 <= fVar10) {
      fVar10 = DAT_0313e934;
    }
    fVar6 = DAT_0313e870._4_4_;
    if (DAT_0313e870._4_4_ <= fVar10) {
      fVar6 = fVar10;
    }
    uVar8 = FUN_00d0843c(fVar6,lVar4);
    param_2[1] = uVar8;
    uVar8 = FUN_00d08400(fVar11,fVar11 - fVar9,0x3f800000,lVar4);
    param_2[2] = uVar8;
    param_2[4] = 1;
  }
  return;
}




void thunk_FUN_00ce0f4c(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = FUN_00d9eb64();
  uVar3 = FUN_00d53914(uVar2,0);
  lVar4 = FUN_00ce9e94("FirstHitDamage",uVar3);
  if (lVar4 == 0) {
    *param_2 = 0;
  }
  else {
    iVar1 = FUN_00d535a4(uVar2,0);
    lVar5 = *(long *)(param_1 + 0x40);
    fVar9 = *(float *)(lVar5 + 0x48);
    fVar6 = (*(float *)(lVar5 + 0x240) + 1.0) *
            (*(float *)(lVar5 + 0xd8) +
            *(float *)(lVar5 + 0x18c) * (*(float *)(lVar5 + 0x2f4) + 1.0));
    fVar11 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
             (*(float *)(lVar5 + 0x38) +
             *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0));
    fVar10 = (*(float *)(lVar5 + 0x1b0) + 1.0) *
             (fVar9 + *(float *)(lVar5 + 0xfc) * (*(float *)(lVar5 + 0x264) + 1.0));
    if (DAT_0313e9c0 <= fVar6) {
      fVar6 = DAT_0313e9c0;
    }
    fVar7 = DAT_0313e900;
    if (DAT_0313e900 <= fVar6) {
      fVar7 = fVar6;
    }
    if (DAT_0313e920 <= fVar11) {
      fVar11 = DAT_0313e920;
    }
    fVar6 = DAT_0313e860;
    if (DAT_0313e860 <= fVar11) {
      fVar6 = fVar11;
    }
    if (DAT_0313e930 <= fVar10) {
      fVar10 = DAT_0313e930;
    }
    fVar11 = (float)DAT_0313e870;
    if ((float)DAT_0313e870 <= fVar10) {
      fVar11 = fVar10;
    }
    uVar8 = FUN_00d08368(fVar6 - *(float *)(lVar5 + 0x38),lVar4,iVar1,iVar1 == 5,(int)fVar7);
    *param_2 = uVar8;
    lVar5 = *(long *)(param_1 + 0x40);
    fVar10 = (*(float *)(lVar5 + 0x1b4) + 1.0) *
             (*(float *)(lVar5 + 0x4c) +
             *(float *)(lVar5 + 0x100) * (*(float *)(lVar5 + 0x268) + 1.0));
    if (DAT_0313e934 <= fVar10) {
      fVar10 = DAT_0313e934;
    }
    fVar6 = DAT_0313e870._4_4_;
    if (DAT_0313e870._4_4_ <= fVar10) {
      fVar6 = fVar10;
    }
    uVar8 = FUN_00d0843c(fVar6,lVar4);
    param_2[1] = uVar8;
    uVar8 = FUN_00d08400(fVar11,fVar11 - fVar9,0x3f800000,lVar4);
    param_2[2] = uVar8;
    param_2[4] = 1;
  }
  return;
}




void thunk_FUN_00ce0f4c(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = FUN_00d9eb64();
  uVar3 = FUN_00d53914(uVar2,0);
  lVar4 = FUN_00ce9e94("FirstHitDamage",uVar3);
  if (lVar4 == 0) {
    *param_2 = 0;
  }
  else {
    iVar1 = FUN_00d535a4(uVar2,0);
    lVar5 = *(long *)(param_1 + 0x40);
    fVar9 = *(float *)(lVar5 + 0x48);
    fVar6 = (*(float *)(lVar5 + 0x240) + 1.0) *
            (*(float *)(lVar5 + 0xd8) +
            *(float *)(lVar5 + 0x18c) * (*(float *)(lVar5 + 0x2f4) + 1.0));
    fVar11 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
             (*(float *)(lVar5 + 0x38) +
             *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0));
    fVar10 = (*(float *)(lVar5 + 0x1b0) + 1.0) *
             (fVar9 + *(float *)(lVar5 + 0xfc) * (*(float *)(lVar5 + 0x264) + 1.0));
    if (DAT_0313e9c0 <= fVar6) {
      fVar6 = DAT_0313e9c0;
    }
    fVar7 = DAT_0313e900;
    if (DAT_0313e900 <= fVar6) {
      fVar7 = fVar6;
    }
    if (DAT_0313e920 <= fVar11) {
      fVar11 = DAT_0313e920;
    }
    fVar6 = DAT_0313e860;
    if (DAT_0313e860 <= fVar11) {
      fVar6 = fVar11;
    }
    if (DAT_0313e930 <= fVar10) {
      fVar10 = DAT_0313e930;
    }
    fVar11 = (float)DAT_0313e870;
    if ((float)DAT_0313e870 <= fVar10) {
      fVar11 = fVar10;
    }
    uVar8 = FUN_00d08368(fVar6 - *(float *)(lVar5 + 0x38),lVar4,iVar1,iVar1 == 5,(int)fVar7);
    *param_2 = uVar8;
    lVar5 = *(long *)(param_1 + 0x40);
    fVar10 = (*(float *)(lVar5 + 0x1b4) + 1.0) *
             (*(float *)(lVar5 + 0x4c) +
             *(float *)(lVar5 + 0x100) * (*(float *)(lVar5 + 0x268) + 1.0));
    if (DAT_0313e934 <= fVar10) {
      fVar10 = DAT_0313e934;
    }
    fVar6 = DAT_0313e870._4_4_;
    if (DAT_0313e870._4_4_ <= fVar10) {
      fVar6 = fVar10;
    }
    uVar8 = FUN_00d0843c(fVar6,lVar4);
    param_2[1] = uVar8;
    uVar8 = FUN_00d08400(fVar11,fVar11 - fVar9,0x3f800000,lVar4);
    param_2[2] = uVar8;
    param_2[4] = 1;
  }
  return;
}

