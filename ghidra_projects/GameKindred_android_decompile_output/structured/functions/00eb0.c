// functions/00eb0 — 8 functions
#include "libGameKindred.h"




void FUN_00eb0214(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *local_b0;
  ulong local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_87;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_b0 = "code";
  local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
  local_a8 = 4;
  puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_b0);
  *(undefined4 *)(param_2 + 0x28) = *puVar5;
  FUN_00952bf0(param_2 + 0x48,0);
  lVar6 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar6) goto LAB_00eb0804;
  local_b0 = "returnValue";
  local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
  local_a8 = 0xb;
  lVar6 = FUN_008feca4(param_1,&local_b0);
  if (*(int *)(lVar6 + 0x10) != 3) goto LAB_00eb0804;
  local_b0 = "returnValue";
  local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
  local_a8 = 0xb;
  plVar7 = (long *)FUN_008feca4(param_1,&local_b0);
  lVar6 = FUN_008fd190(plVar7,"success");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
    bVar4 = false;
  }
  else {
    local_b0 = "success";
    local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
    local_a8 = 7;
    lVar6 = FUN_008feca4(plVar7,&local_b0);
    bVar4 = false;
    if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
      local_b0 = "success";
      local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
      local_a8 = 7;
      lVar6 = FUN_008feca4(plVar7,&local_b0);
      bVar4 = *(int *)(lVar6 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x2c) = bVar4;
  lVar6 = FUN_008fd190(plVar7,"reason");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_00eb03c8:
    puVar10 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_b0 = "reason";
    local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
    local_a8 = 6;
    lVar6 = FUN_008feca4(plVar7,&local_b0);
    if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_00eb03c8;
    local_b0 = "reason";
    local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
    local_a8 = 6;
    puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_b0);
    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
      puVar10 = (undefined8 *)*puVar10;
    }
  }
  FUN_008fa54c(&local_b0,puVar10);
  FUN_008fce60(param_2 + 0x30,&local_b0);
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  lVar6 = FUN_008fd190(plVar7,"activeCampaigns");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar6) {
    local_b0 = "activeCampaigns";
    local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
    local_a8 = 0xf;
    lVar6 = FUN_008feca4(plVar7,&local_b0);
    if (*(int *)(lVar6 + 0x10) == 4) {
      local_b0 = "activeCampaigns";
      local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
      local_a8 = 0xf;
      plVar8 = (long *)FUN_008feca4(plVar7,&local_b0);
      uVar12 = (ulong)*(uint *)(plVar8 + 1);
      if (*(uint *)(plVar8 + 1) != 0) {
        lVar6 = 0;
        uVar14 = 0;
        do {
          plVar1 = (long *)(*plVar8 + lVar6);
          if ((int)plVar1[2] == 3) {
            local_b0 = (char *)0x0;
            local_a8 = 0;
            local_a0 = (void *)0x0;
            lVar9 = FUN_008fd190(plVar1,"campaignId");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              puVar10 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_80 = "campaignId";
              local_70 = 0x100005;
              local_78 = 10;
              lVar9 = FUN_008feca4(plVar1,&local_80);
              puVar10 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_80 = "campaignId";
                local_70 = 0x100005;
                local_78 = 10;
                puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_80);
                if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                  puVar10 = (undefined8 *)*puVar10;
                }
              }
            }
            FUN_008fa54c(&local_80,puVar10);
            FUN_008fce60(&local_b0,&local_80);
            if (((ulong)local_80 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_6c,local_70));
            }
            uVar12 = (ulong)local_b0 >> 1 & 0x7f;
            if (((ulong)local_b0 & 1) != 0) {
              uVar12 = local_a8;
            }
            if (uVar12 != 0) {
              lVar9 = FUN_008fd190(plVar1,"nextAvailability");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
                uVar3 = 0;
              }
              else {
                local_80 = "nextAvailability";
                local_70 = 0x100005;
                local_78 = 0x10;
                lVar9 = FUN_008feca4(plVar1,&local_80);
                uVar3 = 0;
                if ((*(byte *)(lVar9 + 0x11) >> 4 & 1) != 0) {
                  lVar9 = FUN_008fd190(plVar1,"nextAvailability");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
                    uVar13 = 0;
                  }
                  else {
                    local_80 = "nextAvailability";
                    local_70 = 0x100005;
                    local_78 = 0x10;
                    lVar9 = FUN_008feca4(plVar1,&local_80);
                    uVar13 = 0;
                    if ((*(byte *)(lVar9 + 0x11) >> 4 & 1) != 0) {
                      local_80 = "nextAvailability";
                      local_70 = 0x100005;
                      local_78 = 0x10;
                      puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_80);
                      uVar13 = *puVar10;
                    }
                  }
                  local_98 = uVar13;
                  uVar3 = 1;
                }
              }
              local_88 = uVar3;
              lVar9 = FUN_008fd190(plVar1,"offerExpiry");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
                uVar3 = 0;
              }
              else {
                local_80 = "offerExpiry";
                local_70 = 0x100005;
                local_78 = 0xb;
                lVar9 = FUN_008feca4(plVar1,&local_80);
                uVar3 = 0;
                if ((*(byte *)(lVar9 + 0x11) >> 4 & 1) != 0) {
                  lVar9 = FUN_008fd190(plVar1,"offerExpiry");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
                    uVar13 = 0;
                  }
                  else {
                    local_80 = "offerExpiry";
                    local_70 = 0x100005;
                    local_78 = 0xb;
                    lVar9 = FUN_008feca4(plVar1,&local_80);
                    uVar13 = 0;
                    if ((*(byte *)(lVar9 + 0x11) >> 4 & 1) != 0) {
                      local_80 = "offerExpiry";
                      local_70 = 0x100005;
                      local_78 = 0xb;
                      puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_80);
                      uVar13 = *puVar10;
                    }
                  }
                  local_90 = uVar13;
                  uVar3 = 1;
                }
              }
              local_87 = uVar3;
              FUN_00eb0838(param_2 + 0x48,&local_b0);
            }
            if (((ulong)local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
            uVar12 = (ulong)*(uint *)(plVar8 + 1);
          }
          uVar14 = uVar14 + 1;
          lVar6 = lVar6 + 0x18;
        } while (uVar14 < uVar12);
      }
    }
  }
  lVar6 = FUN_008fd190(plVar7,&DAT_01b99d6e);
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_00eb07b0:
    uVar11 = 0xffffffff;
  }
  else {
    local_b0 = "ttl";
    local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
    local_a8 = 3;
    lVar6 = FUN_008feca4(plVar7,&local_b0);
    if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) == 0) goto LAB_00eb07b0;
    local_b0 = "ttl";
    local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
    local_a8 = 3;
    puVar5 = (undefined4 *)FUN_008feca4(plVar7,&local_b0);
    uVar11 = *puVar5;
  }
  *(undefined4 *)(param_2 + 0x58) = uVar11;
LAB_00eb0804:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb0838(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00952b0c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_008fcdb8(lVar4 + -0x30,param_2);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_00eb08dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [298];
  byte local_4e;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00e7fbc4(auStack_190,param_1);
  if ((local_4e & 1) == 0) {
    FUN_008fce60(param_4,auStack_178);
    FUN_008fce60(param_3,auStack_190);
  }
  FUN_00e96f6c(param_2 + 0x28,auStack_190);
  FUN_00948920(auStack_190);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb0984(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  double dVar3;
  int *piVar4;
  char *local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = "code";
  local_40 = 0x100005;
  local_48 = 4;
  piVar4 = (int *)FUN_008feca4(param_1,&local_50);
  iVar1 = *piVar4;
  *(int *)(param_2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    local_40 = 0x100005;
    local_50 = "returnValue";
    local_48 = 0xb;
    FUN_008feca4(param_1,&local_50);
    dVar3 = (double)FUN_008fc0f0();
    *(float *)(param_2 + 0x2c) = (float)dVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb0a38(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar2 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) goto LAB_00eb0b40;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  lVar2 = FUN_008feca4(param_1,&local_60);
  if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_00eb0b40;
  *(undefined1 *)(param_2 + 0x25) = 1;
  lVar2 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_00eb0b14:
    puVar3 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "returnValue";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_00eb0b14;
    local_60 = "returnValue";
    local_50 = 0x100005;
    local_58 = 0xb;
    puVar3 = (undefined8 *)FUN_008feca4(param_1,&local_60);
    if ((*(byte *)((long)puVar3 + 0x12) >> 6 & 1) == 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
  }
  FUN_008fa54c(&local_60,puVar3);
  FUN_008fce60(param_2 + 0x28,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
LAB_00eb0b40:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb0b98(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) goto LAB_00eb0d38;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  lVar3 = FUN_008feca4(param_1,&local_60);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_00eb0d38;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  plVar4 = (long *)FUN_008feca4(param_1,&local_60);
  lVar3 = FUN_008fd190(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "success";
    local_50 = 0x100005;
    local_58 = 7;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "success";
      local_50 = 0x100005;
      local_58 = 7;
      lVar3 = FUN_008feca4(plVar4,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x25) = bVar2;
  lVar3 = FUN_008fd190(plVar4,"chestAwards");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eb0d0c:
    puVar5 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "chestAwards";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eb0d0c;
    local_60 = "chestAwards";
    local_50 = 0x100005;
    local_58 = 0xb;
    puVar5 = (undefined8 *)FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)((long)puVar5 + 0x12) >> 6 & 1) == 0) {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  FUN_008fa54c(&local_60,puVar5);
  FUN_008fce60(param_2 + 0x28,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
LAB_00eb0d38:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb0d90(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) goto LAB_00eb0f30;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  lVar3 = FUN_008feca4(param_1,&local_60);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_00eb0f30;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  plVar4 = (long *)FUN_008feca4(param_1,&local_60);
  lVar3 = FUN_008fd190(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "success";
    local_50 = 0x100005;
    local_58 = 7;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "success";
      local_50 = 0x100005;
      local_58 = 7;
      lVar3 = FUN_008feca4(plVar4,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x25) = bVar2;
  lVar3 = FUN_008fd190(plVar4,"chestAwards");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eb0f04:
    puVar5 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "chestAwards";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eb0f04;
    local_60 = "chestAwards";
    local_50 = 0x100005;
    local_58 = 0xb;
    puVar5 = (undefined8 *)FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)((long)puVar5 + 0x12) >> 6 & 1) == 0) {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  FUN_008fa54c(&local_60,puVar5);
  FUN_008fce60(param_2 + 0x28,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
LAB_00eb0f30:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb0f88(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) goto LAB_00eb1128;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  lVar3 = FUN_008feca4(param_1,&local_60);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_00eb1128;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  plVar4 = (long *)FUN_008feca4(param_1,&local_60);
  lVar3 = FUN_008fd190(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "success";
    local_50 = 0x100005;
    local_58 = 7;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "success";
      local_50 = 0x100005;
      local_58 = 7;
      lVar3 = FUN_008feca4(plVar4,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x25) = bVar2;
  lVar3 = FUN_008fd190(plVar4,"chestAwards");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eb10fc:
    puVar5 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "chestAwards";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eb10fc;
    local_60 = "chestAwards";
    local_50 = 0x100005;
    local_58 = 0xb;
    puVar5 = (undefined8 *)FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)((long)puVar5 + 0x12) >> 6 & 1) == 0) {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  FUN_008fa54c(&local_60,puVar5);
  FUN_008fce60(param_2 + 0x28,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
LAB_00eb1128:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

