// functions/00bae — 23 functions
#include "libGameKindred.h"




void thunk_FUN_00baef50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00b2beac(param_1 + 0x3a0);
  if (lVar2 != 0) {
    lVar2 = FUN_00b2beac(param_1 + 0x3a0);
    FUN_008fa54c(abStack_50,
                 **(undefined8 **)
                   (*(long *)(param_1 + 0x4dc0) + (ulong)*(uint *)(lVar2 + 0x1678) * 8));
    uVar3 = FUN_00cc8184(abStack_50);
    FUN_00aa1a70(param_1 + 0x370,uVar3);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bae320(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | (param_2 & 1) << 1;
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_00bae340();
  return;
}




void FUN_00bae340(void)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"MENU_SKIN_CRAFTING_POPUP");
  FUN_00affa44(local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bae3a8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    FUN_00bae340();
    uVar2 = FUN_009b8d90();
    FUN_008fa54c(local_40,"tutorial_market_skin_hub_craft");
    FUN_009badcc(uVar2,local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
    uVar2 = FUN_009b8d90();
    FUN_008fa54c(local_40,"tutorial_market_skin_hub_craft");
    FUN_009baadc(uVar2,local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    FUN_00bae480(param_1);
    FUN_009580b8();
    FUN_0096145c();
    FUN_00bae6fc(param_1);
    FUN_00bae828(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bae480(long param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong unaff_x22;
  uint uVar11;
  undefined4 uVar12;
  undefined8 local_a8;
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  undefined8 *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  FUN_00badf0c();
  if (*(long *)(*(long *)(param_1 + 0x4df0) + 0x28f50) != 0) {
    plVar5 = (long *)FUN_00cc75b0();
    puVar10 = (undefined8 *)*plVar5;
    puVar9 = (undefined8 *)*puVar10;
    if (puVar9 != (undefined8 *)0x0) {
      do {
        puVar10 = puVar10 + 1;
        local_80 = puVar9;
        iVar3 = strcmp((char *)puVar9[2],
                       (char *)**(undefined8 **)
                                 (*(long *)(*(long *)(param_1 + 0x4df0) + 0x28f50) + 0x18));
        if ((iVar3 == 0) &&
           ((*(int *)(local_80 + 4) == 0 || (uVar6 = FUN_00cce580(), (uVar6 & 1) != 0)))) {
          FUN_00baeb58(param_1 + 0x4db8,&local_80);
          uVar12 = *(undefined4 *)(local_80 + 6);
          if (*(int *)(local_80 + 4) == 0) {
            uVar4 = 1;
          }
          else {
            uVar7 = FUN_009580b8();
            FUN_008fa54c(local_98,*local_80);
            uVar4 = FUN_00961744(uVar7,local_98);
            if ((local_98[0] & 1) != 0) {
              operator_delete(local_88);
            }
          }
          puVar9 = local_80;
          uVar11 = 0xff2424b3;
          if ((*(char *)((long)local_80 + 0x35) == '\0') &&
             (uVar11 = 0xff2424b3, *(char *)((long)local_80 + 0x34) == '\0')) {
            if (*(int *)(local_80 + 4) - 1U < 3) {
              uVar11 = *(uint *)(&DAT_01bb8d9c + (long)(int)(*(int *)(local_80 + 4) - 1U) * 4);
            }
            else {
              uVar11 = 0xffffffff;
            }
          }
          pvVar8 = operator_new(0x1928);
          FUN_008fa54c(local_98,*puVar9);
          FUN_00cc78d0(&local_a8,local_80,1);
          unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)uVar11;
          FUN_00b2b5e0(uVar12,pvVar8,local_98,&local_a8,local_80[5],unaff_x22,uVar4 & 1);
          if (local_a0 != (void *)0x0) {
            operator_delete__(local_a0);
            local_a8 = 0;
            local_a0 = (void *)0x0;
          }
          if ((local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
          FUN_00b2bd14(param_1 + 0x3a0,pvVar8);
        }
        puVar9 = (undefined8 *)*puVar10;
      } while (puVar9 != (undefined8 *)0x0);
    }
    pbVar1 = (byte *)(param_1 + 0x4dd8);
    if ((*pbVar1 & 1) == 0) {
      uVar6 = (ulong)(*pbVar1 >> 1);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x4de0);
    }
    if ((uVar6 == 0) || (uVar6 = FUN_00b2bee4(param_1 + 0x3a0,pbVar1), (uVar6 & 1) != 0)) {
      FUN_00b2c214(param_1 + 0x3a0,0);
    }
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x4de8) = 0;
      *(undefined8 *)(param_1 + 0x4de0) = 0;
    }
    FUN_00baebe0(param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bae6fc(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[0x9b7] != 0) {
    lVar2 = FUN_00b2beac(param_1 + 0x74);
    if (lVar2 != 0) {
      lVar2 = FUN_00b2beac(param_1 + 0x74);
      puVar6 = *(undefined8 **)(param_1[0x9b8] + (ulong)*(uint *)(lVar2 + 0x1678) * 8);
      if (puVar6 != (undefined8 *)0x0) {
        lVar2 = FUN_00cc7c38();
        if (*(char *)(lVar2 + 0x38) != '\0') {
          FUN_008fa54c(local_50,*puVar6);
          lVar2 = FUN_00cc8184(local_50);
          if ((local_50[0] & 1) != 0) {
            operator_delete(local_40);
          }
          if (lVar2 != 0) {
            uVar3 = FUN_00baf1d4(param_1);
            if ((uVar3 & 1) == 0) {
              uVar5 = FUN_00cc851c(lVar2);
              uVar5 = (uVar5 & 1) << 2;
            }
            else {
              uVar5 = 4;
            }
            *(uint *)((long)param_1 + 0x1224) =
                 *(uint *)((long)param_1 + 0x1224) & 0xfffffffb | uVar5;
            uVar5 = (uint)*(byte *)(lVar2 + 0xa9);
            if (*(byte *)(lVar2 + 0xa9) != 0) {
              uVar4 = FUN_009580b8();
              uVar5 = FUN_00961744(uVar4,lVar2);
              uVar5 = (~uVar5 & 1) << 2;
            }
            *(uint *)((long)param_1 + 0x3694) =
                 *(uint *)((long)param_1 + 0x3694) & 0xfffffffb | uVar5;
            (**(code **)(*param_1 + 0x150))(param_1);
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bae828(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_160 [16];
  void *local_150;
  undefined **local_148;
  undefined1 auStack_140 [72];
  undefined8 local_f8;
  void *local_f0;
  byte local_e8;
  void *local_d8;
  undefined4 local_b4;
  undefined4 local_a0;
  undefined1 local_9b;
  ulong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  void *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00969248();
  if (0 < *(int *)(lVar2 + 0x38)) {
    lVar2 = FUN_00969248();
    if (*(int *)(lVar2 + 0x38) == 10) {
      FUN_00b26098(&local_148);
      uVar3 = FUN_00e6ce7c("TUTORIAL_CRAFT_SKIN_TOOLTIP_TITLE",0);
      thunk_FUN_00e7051c(&local_98,uVar3);
      FUN_008fcdb8(&local_88,&DAT_0320ffa8);
      local_70 = 0;
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
      uVar3 = FUN_00e6ce7c("TUTORIAL_CRAFT_SKIN_TOOLTIP_MSG",0);
      thunk_FUN_00e7051c(&local_98,uVar3);
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
      local_b4 = 0x442f0000;
      local_9b = 1;
      uVar3 = FUN_009b8d90();
      FUN_008fa54c(&local_98,"tutorial_market_skin_hub_craft");
      FUN_009badc0(uVar3,&local_98,&local_148);
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
      local_80 = 0;
      local_78 = (void *)0x0;
      local_60 = 0x3f800000;
      local_5a = 1;
      local_5c = 0x101;
      uVar3 = FUN_009b8d90();
      FUN_008fa54c(local_160,"tutorial_market_skin_hub_craft");
      FUN_009baa78(uVar3,local_160,&local_98);
      if ((local_160[0] & 1) != 0) {
        operator_delete(local_150);
      }
      param_1 = param_1 + 0x3a0;
      FUN_00b2c3d4(param_1,0);
      FUN_00b2c258(param_1,0);
      FUN_00969248();
      uVar3 = FUN_009687c0(10);
      FUN_008fa54c(local_160,uVar3);
      FUN_00b2c2bc(param_1,local_160,1);
      if ((local_160[0] & 1) != 0) {
        operator_delete(local_150);
      }
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
      goto LAB_00baead8;
    }
  }
  FUN_00b2c3d4(param_1 + 0x3a0,1);
  FUN_00b2c258(param_1 + 0x3a0,1);
LAB_00baead8:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00baeb0c(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_00badf0c();
  return;
}




void FUN_00baeb18(long *param_1)

{
  FUN_00b8e854();
                    /* WARNING: Could not recover jumptable at 0x00baeb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00baeb44(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x9b9) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00baeb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))();
  return;
}




void FUN_00baeb58(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_00baf424(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00baebe0(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte local_90 [16];
  void *local_80;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar1 = param_1 + 0x74;
  lVar5 = FUN_00b2beac(plVar1);
  if (lVar5 != 0) {
    lVar5 = FUN_00cc7c38();
    if (*(char *)(lVar5 + 0x38) != '\0') {
      lVar5 = FUN_00b2beac(plVar1);
      puVar9 = *(undefined8 **)(param_1[0x9b8] + (ulong)*(uint *)(lVar5 + 0x1678) * 8);
      iVar2 = *(int *)(puVar9 + 4);
      uVar6 = FUN_009580b8();
      if (iVar2 == 0) {
        uVar4 = FUN_00961804(uVar6,puVar9[2],1);
      }
      else {
        FUN_008fa54c(local_90,*puVar9);
        uVar4 = FUN_00961744(uVar6,local_90);
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
      }
      uVar6 = FUN_00b2beac(plVar1);
      FUN_00b2b988(uVar6,uVar4 & 1);
      uVar8 = 0;
      if ((uVar4 & 1) == 0) {
        uVar8 = (uint)(0 < *(int *)(puVar9 + 4)) << 2;
      }
      *(uint *)((long)param_1 + 0x115c) = *(uint *)((long)param_1 + 0x115c) & 0xfffffffb | uVar8;
      FUN_008fa54c(local_90,*puVar9);
      lVar5 = FUN_00cc8184(local_90);
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      if ((lVar5 == 0) || (uVar7 = FUN_00cc851c(lVar5), (uVar7 & 1) == 0)) {
        FUN_00cc7e2c(local_90,lVar5);
        FUN_00caf12c(local_90,param_1 + 0x234);
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
      }
      else {
        *(uint *)((long)param_1 + 0x3114) = *(uint *)((long)param_1 + 0x3114) & 0xfffffffb;
        plVar1 = param_1 + 0x234;
        (**(code **)(param_1[0x234] + 0x180))(plVar1);
        uVar6 = FUN_00e6ce7c("MENU_SKINS_HUB_COMING_SOON_LABEL",0);
        FUN_00ab7498(plVar1,uVar6);
        FUN_00b09454(plVar1,0);
      }
      FUN_00bae6fc(param_1);
      (**(code **)(*param_1 + 0x150))(param_1);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00baedbc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00cc7c38();
  if (*(char *)(lVar1 + 0x38) != '\0') {
    FUN_00b2bee4(param_1 + 0x3a0,param_2);
    return;
  }
  FUN_008fce60(param_1 + 0x4dd8,param_2);
  return;
}




void FUN_00baee08(undefined8 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x240) != 0) {
    return;
  }
  FUN_00baebe0();
  return;
}




void FUN_00baee18(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x240) != 0) {
    return;
  }
  FUN_00baebe0(param_1 + -0x370);
  return;
}




void thunk_FUN_00bae480(long param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong unaff_x22;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uStack_a8;
  void *pvStack_a0;
  byte abStack_98 [16];
  void *pvStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  
  lVar2 = tpidr_el0;
  lStack_78 = *(long *)(lVar2 + 0x28);
  FUN_00badf0c();
  if (*(long *)(*(long *)(param_1 + 0x4df0) + 0x28f50) != 0) {
    plVar5 = (long *)FUN_00cc75b0();
    puVar10 = (undefined8 *)*plVar5;
    puVar9 = (undefined8 *)*puVar10;
    if (puVar9 != (undefined8 *)0x0) {
      do {
        puVar10 = puVar10 + 1;
        puStack_80 = puVar9;
        iVar3 = strcmp((char *)puVar9[2],
                       (char *)**(undefined8 **)
                                 (*(long *)(*(long *)(param_1 + 0x4df0) + 0x28f50) + 0x18));
        if ((iVar3 == 0) &&
           ((*(int *)(puStack_80 + 4) == 0 || (uVar6 = FUN_00cce580(), (uVar6 & 1) != 0)))) {
          FUN_00baeb58(param_1 + 0x4db8,&puStack_80);
          uVar12 = *(undefined4 *)(puStack_80 + 6);
          if (*(int *)(puStack_80 + 4) == 0) {
            uVar4 = 1;
          }
          else {
            uVar7 = FUN_009580b8();
            FUN_008fa54c(abStack_98,*puStack_80);
            uVar4 = FUN_00961744(uVar7,abStack_98);
            if ((abStack_98[0] & 1) != 0) {
              operator_delete(pvStack_88);
            }
          }
          puVar9 = puStack_80;
          uVar11 = 0xff2424b3;
          if ((*(char *)((long)puStack_80 + 0x35) == '\0') &&
             (uVar11 = 0xff2424b3, *(char *)((long)puStack_80 + 0x34) == '\0')) {
            if (*(int *)(puStack_80 + 4) - 1U < 3) {
              uVar11 = *(uint *)(&DAT_01bb8d9c + (long)(int)(*(int *)(puStack_80 + 4) - 1U) * 4);
            }
            else {
              uVar11 = 0xffffffff;
            }
          }
          pvVar8 = operator_new(0x1928);
          FUN_008fa54c(abStack_98,*puVar9);
          FUN_00cc78d0(&uStack_a8,puStack_80,1);
          unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)uVar11;
          FUN_00b2b5e0(uVar12,pvVar8,abStack_98,&uStack_a8,puStack_80[5],unaff_x22,uVar4 & 1);
          if (pvStack_a0 != (void *)0x0) {
            operator_delete__(pvStack_a0);
            uStack_a8 = 0;
            pvStack_a0 = (void *)0x0;
          }
          if ((abStack_98[0] & 1) != 0) {
            operator_delete(pvStack_88);
          }
          FUN_00b2bd14(param_1 + 0x3a0,pvVar8);
        }
        puVar9 = (undefined8 *)*puVar10;
      } while (puVar9 != (undefined8 *)0x0);
    }
    pbVar1 = (byte *)(param_1 + 0x4dd8);
    if ((*pbVar1 & 1) == 0) {
      uVar6 = (ulong)(*pbVar1 >> 1);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x4de0);
    }
    if ((uVar6 == 0) || (uVar6 = FUN_00b2bee4(param_1 + 0x3a0,pbVar1), (uVar6 & 1) != 0)) {
      FUN_00b2c214(param_1 + 0x3a0,0);
    }
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x4de8) = 0;
      *(undefined8 *)(param_1 + 0x4de0) = 0;
    }
    FUN_00baebe0(param_1);
  }
  if (*(long *)(lVar2 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00baee30(long param_1)

{
  FUN_00bae480(param_1 + -0x370);
  return;
}




void FUN_00baee38(long param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  FUN_00bae6fc();
  uVar2 = FUN_00b2beb4(param_1 + 0x3a0);
  FUN_00b2becc(param_1 + 0x3a0);
  FUN_00baeec4(param_1,uVar2);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_button_tap_drill_in.mp3",0,0);
  pbVar1 = (byte *)(param_1 + 0x4dd8);
  if ((*pbVar1 & 1) == 0) {
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x4de8) = 0;
    *(undefined8 *)(param_1 + 0x4de0) = 0;
  }
  FUN_00baebe0(param_1);
  return;
}




void FUN_00baeec4(long param_1,undefined8 param_2)

{
  long lVar1;
  float local_b0;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e6a8a8(auStack_a8,"build://Splash_%s.png",param_2);
  FUN_00f00298(auStack_ac,&local_b0);
  FUN_00b2f9c4(local_b0 / 0.75,local_b0,0x3f800000,0,param_1 + 0xc10,auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00baef48(long param_1)

{
  FUN_00baee38(param_1 + -0x368);
  return;
}




void FUN_00baef50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00b2beac(param_1 + 0x3a0);
  if (lVar2 != 0) {
    lVar2 = FUN_00b2beac(param_1 + 0x3a0);
    FUN_008fa54c(local_50,**(undefined8 **)
                            (*(long *)(param_1 + 0x4dc0) + (ulong)*(uint *)(lVar2 + 0x1678) * 8));
    uVar3 = FUN_00cc8184(local_50);
    FUN_00aa1a70(param_1 + 0x370,uVar3);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00baeff4(void)

{
  FUN_009b8d90();
  FUN_009bba7c();
  return;
}




void thunk_FUN_00bae6fc(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[0x9b7] != 0) {
    lVar2 = FUN_00b2beac(param_1 + 0x74);
    if (lVar2 != 0) {
      lVar2 = FUN_00b2beac(param_1 + 0x74);
      puVar6 = *(undefined8 **)(param_1[0x9b8] + (ulong)*(uint *)(lVar2 + 0x1678) * 8);
      if (puVar6 != (undefined8 *)0x0) {
        lVar2 = FUN_00cc7c38();
        if (*(char *)(lVar2 + 0x38) != '\0') {
          FUN_008fa54c(abStack_50,*puVar6);
          lVar2 = FUN_00cc8184(abStack_50);
          if ((abStack_50[0] & 1) != 0) {
            operator_delete(pvStack_40);
          }
          if (lVar2 != 0) {
            uVar3 = FUN_00baf1d4(param_1);
            if ((uVar3 & 1) == 0) {
              uVar5 = FUN_00cc851c(lVar2);
              uVar5 = (uVar5 & 1) << 2;
            }
            else {
              uVar5 = 4;
            }
            *(uint *)((long)param_1 + 0x1224) =
                 *(uint *)((long)param_1 + 0x1224) & 0xfffffffb | uVar5;
            uVar5 = (uint)*(byte *)(lVar2 + 0xa9);
            if (*(byte *)(lVar2 + 0xa9) != 0) {
              uVar4 = FUN_009580b8();
              uVar5 = FUN_00961744(uVar4,lVar2);
              uVar5 = (~uVar5 & 1) << 2;
            }
            *(uint *)((long)param_1 + 0x3694) =
                 *(uint *)((long)param_1 + 0x3694) & 0xfffffffb | uVar5;
            (**(code **)(*param_1 + 0x150))(param_1);
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

