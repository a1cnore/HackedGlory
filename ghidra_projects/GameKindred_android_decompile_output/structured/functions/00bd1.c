// functions/00bd1 — 28 functions
#include "libGameKindred.h"




void FUN_00bd1058(long param_1)

{
  FUN_00bd0fe8(param_1 + -0x10);
  return;
}




void FUN_00bd1060(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) != 0) {
    piVar5 = (int *)(param_3 + 0x18);
    if (*piVar5 != 0) {
      FUN_0090c198(piVar5);
      uVar2 = FUN_009b8d90();
      FUN_008fa54c(local_50,"HeroChestTile");
      FUN_008fa54c(local_68,"opulent");
      FUN_009bb728(uVar2,local_50,local_68);
      if ((local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar2 = FUN_009b8d90();
      FUN_008fa54c(local_50,"HeroChestTile");
      FUN_009bb7d4(uVar2,local_50,piVar5);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      goto LAB_00bd11b4;
    }
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(local_50,"HeroChestTile");
  FUN_009bb89c(uVar2,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar3 = FUN_00e6ce7c("MENU_HERO_CHEST_ERROR_GENERIC",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar2,uVar3,uVar4,param_1,0);
LAB_00bd11b4:
  FUN_00ce048c();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd11e0(long param_1,uint param_2)

{
  FUN_00bd1060(param_1 + -0x10,param_2 & 1);
  return;
}




void FUN_00bd11ec(void)

{
  long lVar1;
  
  lVar1 = FUN_00ce0564();
  if (*(char *)(lVar1 + 0x3c) != '\0') {
    FUN_00ce0574();
    return;
  }
  return;
}




void FUN_00bd1210(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ecfe0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd1254(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd1258);
  (*pcVar1)();
}




void FUN_00bd125c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ed3e0;
  pvVar1 = operator_new(0x1e0);
  FUN_00c2bf28();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 200) = param_1;
  FUN_00948cd8(param_1 + 2);
  *param_1 = &PTR_FUN_027ed008;
  param_1[2] = &PTR_FUN_027ed048;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_00bd12c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed008;
  param_1[2] = &PTR_FUN_027ed048;
  FUN_00951534(param_1 + 5,1);
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ed3e0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd1334(long param_1)

{
  FUN_00bd12c4(param_1 + -0x10);
  return;
}




void FUN_00bd133c(void *param_1)

{
  FUN_00bd12c4();
  operator_delete(param_1);
  return;
}




void FUN_00bd1360(long param_1)

{
  FUN_00bd12c4((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bd1388(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 0) {
    plVar2 = (long *)FUN_00ce9af4();
    plVar2 = (long *)*plVar2;
    puVar3 = (undefined8 *)*plVar2;
    while (puVar3 != (undefined8 *)0x0) {
      plVar2 = plVar2 + 1;
      if (*(char *)(puVar3 + 1) != '\0') {
        uVar4 = *puVar3;
        uVar5 = *(undefined8 *)(param_1 + 8);
        FUN_008fa54c(local_60,uVar4);
        FUN_00c2c2a8(uVar5,local_60);
        if ((local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        FUN_008fa54c(local_60,uVar4);
        FUN_0096204c((int *)(param_1 + 0x28),local_60);
        if ((local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
      }
      puVar3 = (undefined8 *)*plVar2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd1464(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580c4();
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      lVar6 = 0;
      uVar2 = 0;
      do {
        uVar5 = *(undefined8 *)(param_1 + 8);
        uVar3 = FUN_009580b8();
        lVar4 = *(long *)(param_1 + 0x30);
        if ((*(byte *)(lVar4 + lVar6) & 1) == 0) {
          lVar4 = lVar4 + lVar6 + 1;
        }
        else {
          lVar4 = *(long *)(lVar4 + lVar6 + 0x10);
        }
        local_4c = FUN_00961804(uVar3,lVar4,0);
        local_4c = local_4c & 1;
        FUN_00c2c458(uVar5,uVar2 & 0xffffffff,&local_4c);
        uVar2 = uVar2 + 1;
        lVar6 = lVar6 + 0x18;
      } while (uVar2 < *(uint *)(param_1 + 0x28));
    }
    FUN_00bd1534(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd1534(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  long lVar10;
  uint local_2b0 [4];
  void *local_2a0;
  undefined **local_298;
  undefined1 auStack_290 [16];
  byte local_280 [16];
  void *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  byte local_238 [16];
  void *local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  void *local_208;
  undefined4 auStack_200 [2];
  undefined **local_1f8;
  undefined1 auStack_1f0 [16];
  byte local_1e0 [16];
  void *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  byte local_198 [16];
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  undefined4 local_160 [2];
  undefined1 auStack_158 [8];
  uint local_150;
  long local_148;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [96];
  long local_80;
  char local_73;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_0093dbe8();
  if (((uVar4 & 1) == 0) && (*(int *)(param_1 + 0x28) != 0)) {
    uVar4 = 0;
    do {
      FUN_00976588(auStack_158);
      uVar5 = FUN_0096bf64(*(long *)(param_1 + 0x30) + uVar4 * 0x18,auStack_158);
      if ((uVar5 & 1) != 0) {
        FUN_00975578(&local_1f8);
        FUN_00975578(&local_298);
        if (local_150 != 0) {
          lVar10 = 0;
          uVar5 = 0;
          do {
            lVar3 = local_148;
            lVar1 = local_148 + lVar10 + 0x30;
            FUN_008fa54c(local_2b0,"silver");
            uVar6 = FUN_00cab9fc(lVar1,local_2b0);
            if ((local_2b0[0] & 1) != 0) {
              operator_delete(local_2a0);
            }
            if ((uVar6 & 1) == 0) {
              FUN_008fa54c(local_2b0,"gold");
              uVar6 = FUN_00cab9fc(lVar1,local_2b0);
              if ((local_2b0[0] & 1) != 0) {
                operator_delete(local_2a0);
              }
              if ((uVar6 & 1) != 0) {
                lVar1 = lVar3 + lVar10;
                FUN_0097b658(auStack_290,lVar1 + 8);
                FUN_008fce60(local_280,lVar1 + 0x18);
                uStack_260 = *(undefined8 *)(lVar1 + 0x38);
                local_268 = *(undefined8 *)(lVar1 + 0x30);
                uStack_250 = *(undefined8 *)(lVar1 + 0x48);
                local_258 = *(undefined8 *)(lVar1 + 0x40);
                uStack_240 = *(undefined8 *)(lVar1 + 0x58);
                local_248 = *(undefined8 *)(lVar1 + 0x50);
                FUN_008fce60(local_238,lVar1 + 0x60);
                FUN_00910394(&local_220,lVar1 + 0x78);
                FUN_00910394(&local_210,lVar1 + 0x88);
                puVar8 = auStack_200;
                goto LAB_00bd177c;
              }
            }
            else {
              lVar1 = lVar3 + lVar10;
              FUN_0097b658(auStack_1f0,lVar1 + 8);
              FUN_008fce60(local_1e0,lVar1 + 0x18);
              uStack_1c0 = *(undefined8 *)(lVar1 + 0x38);
              local_1c8 = *(undefined8 *)(lVar1 + 0x30);
              uStack_1b0 = *(undefined8 *)(lVar1 + 0x48);
              local_1b8 = *(undefined8 *)(lVar1 + 0x40);
              uStack_1a0 = *(undefined8 *)(lVar1 + 0x58);
              local_1a8 = *(undefined8 *)(lVar1 + 0x50);
              FUN_008fce60(local_198,lVar1 + 0x60);
              FUN_00910394(&local_180,lVar1 + 0x78);
              FUN_00910394(&local_170,lVar1 + 0x88);
              puVar8 = local_160;
LAB_00bd177c:
              *puVar8 = *(undefined4 *)(lVar3 + lVar10 + 0x98);
            }
            uVar5 = uVar5 + 1;
            lVar10 = lVar10 + 0xa0;
          } while (uVar5 < local_150);
        }
        FUN_00c2c424(*(undefined8 *)(param_1 + 8),uVar4 & 0xffffffff,&local_1f8,&local_298,
                     auStack_110,auStack_f8,auStack_e0);
        uVar7 = FUN_009580b8();
        pbVar9 = (byte *)(*(long *)(param_1 + 0x30) + uVar4 * 0x18);
        if ((*pbVar9 & 1) == 0) {
          pbVar9 = pbVar9 + 1;
        }
        else {
          pbVar9 = *(byte **)(*(long *)(param_1 + 0x30) + uVar4 * 0x18 + 0x10);
        }
        uVar5 = FUN_0096186c(uVar7,pbVar9);
        if ((uVar5 & 1) == 0) {
          uVar7 = FUN_009580b8();
          pbVar9 = (byte *)(*(long *)(param_1 + 0x30) + uVar4 * 0x18);
          if ((*pbVar9 & 1) == 0) {
            pbVar9 = pbVar9 + 1;
          }
          else {
            pbVar9 = *(byte **)(*(long *)(param_1 + 0x30) + uVar4 * 0x18 + 0x10);
          }
          uVar5 = FUN_00961804(uVar7,pbVar9,0);
          if ((uVar5 & 1) != 0) {
            uVar7 = *(undefined8 *)(param_1 + 8);
            local_2b0[0] = 0;
            goto LAB_00bd1868;
          }
          if (local_73 != '\0') {
            uVar7 = *(undefined8 *)(param_1 + 8);
            local_2b0[0] = 2;
            goto LAB_00bd1868;
          }
          lVar10 = FUN_00e85318(0);
          if (lVar10 < local_80) {
            uVar7 = *(undefined8 *)(param_1 + 8);
            local_2b0[0] = 1;
            goto LAB_00bd1868;
          }
        }
        else {
          uVar7 = *(undefined8 *)(param_1 + 8);
          local_2b0[0] = 3;
LAB_00bd1868:
          FUN_00c2c400(uVar7,uVar4 & 0xffffffff,local_2b0);
        }
        local_298 = &PTR_FUN_027bca90;
        if (local_208 != (void *)0x0) {
          operator_delete__(local_208);
          local_210 = 0;
          local_208 = (void *)0x0;
        }
        if (local_218 != (void *)0x0) {
          operator_delete__(local_218);
          local_220 = 0;
          local_218 = (void *)0x0;
        }
        if ((local_238[0] & 1) != 0) {
          operator_delete(local_228);
        }
        if ((local_280[0] & 1) != 0) {
          operator_delete(local_270);
        }
        FUN_00977ea0(auStack_290,1);
        local_1f8 = &PTR_FUN_027bca90;
        if (local_168 != (void *)0x0) {
          operator_delete__(local_168);
          local_170 = 0;
          local_168 = (void *)0x0;
        }
        if (local_178 != (void *)0x0) {
          operator_delete__(local_178);
          local_180 = 0;
          local_178 = (void *)0x0;
        }
        if ((local_198[0] & 1) != 0) {
          operator_delete(local_188);
        }
        if ((local_1e0[0] & 1) != 0) {
          operator_delete(local_1d0);
        }
        FUN_00977ea0(auStack_1f0,1);
      }
      FUN_009767f4(auStack_158);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bd197c(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00bd1464(param_1);
  return;
}




void FUN_00bd19b0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00bd1464(param_1 + -0x10);
  return;
}




void FUN_00bd19e4(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00bd1388(param_1);
    FUN_00bd1464(param_1);
    return;
  }
  return;
}




void FUN_00bd1a1c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_00951534(param_1 + 0x28,0);
  return;
}




void FUN_00bd1a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::USER_SELECTED_HERO");
  FUN_00f048e0(auStack_58,uVar2,param_3);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd1aac(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ed3e0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd1af0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd1af4);
  (*pcVar1)();
}




void FUN_00bd1af4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027ed438;
  pvVar1 = operator_new(0x168);
  FUN_00c2c7dc();
  *(undefined8 **)((long)pvVar1 + 0x88) = param_1;
  *param_1 = &PTR_FUN_027ed418;
  param_1[1] = pvVar1;
  return;
}




void FUN_00bd1b44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed438;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd1b88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed438;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bd1bcc(long param_1,byte *param_2)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  byte local_c8 [16];
  void *local_b8;
  ulong local_b0 [2];
  void *local_a0;
  undefined4 local_94;
  code *local_90 [2];
  void *local_80;
  uint local_78 [2];
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar10 = *(ulong *)(param_2 + 8);
  }
  if (uVar10 != 0) {
    uVar3 = FUN_00cdbb18();
    pbVar8 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar8 = param_2 + 1;
    }
    lVar4 = FUN_00cdc678(uVar3,pbVar8);
    if (lVar4 != 0) {
      FUN_00951160(local_78,lVar4);
      local_90[0] = FUN_00cdbb44;
      FUN_00a6cbcc(local_70,local_70 + (ulong)local_78[0] * 0x18,local_90);
      FUN_00c2c894(*(undefined8 *)(param_1 + 8));
      if (local_78[0] != 0) {
        lVar4 = 0;
        uVar10 = 0;
        do {
          FUN_008fcdb8(local_90,local_70 + lVar4);
          lVar5 = FUN_00cdbb24(local_90);
          if ((lVar5 != 0) && (lVar6 = FUN_00cdda38(lVar5), lVar6 != 0)) {
            local_94 = 0xffffffff;
            uVar1 = *(undefined2 *)(lVar5 + 0xb0);
            local_b0[0] = 0;
            local_b0[1] = 0;
            local_a0 = (void *)0x0;
            iVar9 = *(int *)(lVar6 + 0x18);
            if (iVar9 == 3) {
              pcVar7 = "talent_pip_legendary";
              local_94 = 0xff005ae1;
LAB_00bd1d44:
              FUN_008fa54c(local_c8,pcVar7);
              FUN_008fce60(local_b0,local_c8);
              if ((local_c8[0] & 1) != 0) {
                operator_delete(local_b8);
              }
            }
            else {
              if (iVar9 == 2) {
                local_94 = 0xffe550b2;
                pcVar7 = "talent_pip_epic";
                goto LAB_00bd1d44;
              }
              if (iVar9 == 1) {
                local_94 = 0xffe19400;
                pcVar7 = "talent_pip_rare";
                goto LAB_00bd1d44;
              }
            }
            iVar9 = (int)(char)uVar1;
            FUN_00c2c914(*(undefined8 *)(param_1 + 8),0 < iVar9,iVar9,&local_94,local_b0);
            if ((local_b0[0] & 1) != 0) {
              operator_delete(local_a0);
            }
          }
          if (((ulong)local_90[0] & 1) != 0) {
            operator_delete(local_80);
          }
          uVar10 = uVar10 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar10 < local_78[0]);
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x90))();
      FUN_00951534(local_78,1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd1e04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed438;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd1e48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed438;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bd1e8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027ed530;
  pvVar3 = operator_new(0x23c8);
  FUN_00c2cc98();
  param_1[1] = pvVar3;
  *(undefined8 **)((long)pvVar3 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027ed458;
  puVar1 = param_1 + 3;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[3] = &UNK_027ed518;
  param_1[2] = &PTR_FUN_027ed4c0;
  *(undefined1 *)((long)param_1 + 0x32) = 1;
  lVar4 = FUN_00a06b24();
  local_58 = (undefined8 *)0x0;
  pcStack_40 = thunk_FUN_00bd2410;
  puStack_50 = param_1;
  local_48 = param_1;
  FUN_00933ec0(lVar4 + 0x40,&local_58);
  lVar4 = FUN_009fece0();
  puStack_50 = (undefined8 *)0x0;
  pcStack_40 = FUN_00bd2734;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(lVar4 + 0x30,&local_58);
  lVar4 = FUN_009fece0();
  puStack_50 = (undefined8 *)0x0;
  pcStack_40 = FUN_00bd2734;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(lVar4 + 0x40,&local_58);
  lVar4 = FUN_009fece0();
  local_58 = (undefined8 *)0x0;
  pcStack_40 = thunk_FUN_00bd24e0;
  puStack_50 = param_1;
  local_48 = param_1;
  FUN_00bd275c(lVar4 + 0x60,&local_58);
  FUN_00aa218c(puVar1,"play",param_1,FUN_00bd287c);
  FUN_00aa218c(puVar1,"events",param_1,FUN_00bd2894);
  FUN_00aa218c(puVar1,"quests",param_1,FUN_00bd28ac);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

