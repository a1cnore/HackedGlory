// functions/0090a — 2 functions
#include "libGameKindred.h"




void FUN_0090a12c(byte *param_1,byte *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char ***pppcVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  char *local_158;
  undefined1 auStack_150 [8];
  char **local_148 [2];
  void *local_138;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_1;
  uVar11 = *(ulong *)(param_1 + 8);
  uVar12 = (ulong)(bVar2 >> 1);
  uVar1 = uVar12;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar11;
  }
  if (uVar1 == 8) {
    iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"currency",8);
    if (iVar4 != 0) {
      bVar2 = *param_1;
      uVar11 = *(ulong *)(param_1 + 8);
      uVar12 = (ulong)(bVar2 >> 1);
      goto LAB_0090a1b0;
    }
    bVar2 = *param_2;
    uVar11 = *(ulong *)(param_2 + 8);
    uVar12 = (ulong)(bVar2 >> 1);
    uVar1 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar11;
    }
    if (uVar1 == 6) {
      iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"silver",6);
      if (iVar4 != 0) {
        bVar2 = *param_2;
        uVar11 = *(ulong *)(param_2 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
        goto LAB_0090a558;
      }
      FUN_00ec506c(PTR_s_Economy_Tap_Glory_02be3018,param_3);
      pppcVar9 = (char ***)PTR_s_Economy_Tap_Glory_02be3018;
    }
    else {
LAB_0090a558:
      uVar1 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar11;
      }
      if (uVar1 == 4) {
        iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"gold",4);
        if (iVar4 == 0) {
          FUN_00ec506c(PTR_s_Economy_Tap_ICE_02be3010,param_3);
          pppcVar9 = (char ***)PTR_s_Economy_Tap_ICE_02be3010;
          goto LAB_0090ae08;
        }
        bVar2 = *param_2;
        uVar11 = *(ulong *)(param_2 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar11;
      }
      if (uVar1 == 7) {
        iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"essence",7);
        if (iVar4 == 0) {
          FUN_00ec506c(PTR_s_Economy_Tap_Essence_02be3038,param_3);
          pppcVar9 = (char ***)PTR_s_Economy_Tap_Essence_02be3038;
          goto LAB_0090ae08;
        }
        bVar2 = *param_2;
        uVar11 = *(ulong *)(param_2 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar11;
      }
      if (uVar1 == 4) {
        iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"opal",4);
        if (iVar4 == 0) {
          FUN_00ec506c(PTR_s_Economy_Tap_Opal_02be3020,param_3);
          pppcVar9 = (char ***)PTR_s_Economy_Tap_Opal_02be3020;
          goto LAB_0090ae08;
        }
        bVar2 = *param_2;
        uVar11 = *(ulong *)(param_2 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar11;
      }
      if (uVar1 == 0xc) {
        iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"seasonal_key",0xc);
        if (iVar4 == 0) {
          FUN_00ec506c(PTR_s_Economy_Tap_Seasonal_Key_02be3028,param_3);
          pppcVar9 = (char ***)PTR_s_Economy_Tap_Seasonal_Key_02be3028;
          goto LAB_0090ae08;
        }
        bVar2 = *param_2;
        uVar11 = *(ulong *)(param_2 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      if ((bVar2 & 1) != 0) {
        uVar12 = uVar11;
      }
      if ((uVar12 != 8) ||
         (iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"epic_key",8), iVar4 != 0))
      goto LAB_0090ae10;
      FUN_00ec506c(PTR_s_Economy_Tap_Epic_Key_02be3030,param_3);
      pppcVar9 = (char ***)PTR_s_Economy_Tap_Epic_Key_02be3030;
    }
  }
  else {
LAB_0090a1b0:
    uVar1 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar11;
    }
    if (uVar1 == 4) {
      iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"buff",4);
      if (iVar4 == 0) {
        if ((*param_2 & 1) == 0) {
          param_2 = param_2 + 1;
        }
        else {
          param_2 = *(byte **)(param_2 + 0x10);
        }
        local_148[0] = &local_158;
        local_158 = "type4";
        lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
        FUN_00ec3e60(lVar7 + 0x28,param_2);
        FUN_00ec506c(PTR_s_Economy_Tap_Buff_02be3040,param_3);
        pppcVar9 = (char ***)PTR_s_Economy_Tap_Buff_02be3040;
        goto LAB_0090ae08;
      }
      bVar2 = *param_1;
      uVar11 = *(ulong *)(param_1 + 8);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar11;
    }
    if (uVar1 == 4) {
      iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"hero",4);
      if (iVar4 == 0) {
        if ((*param_2 & 1) == 0) {
          param_2 = param_2 + 1;
        }
        else {
          param_2 = *(byte **)(param_2 + 0x10);
        }
        local_148[0] = &local_158;
        local_158 = "type4";
        lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
        FUN_00ec3e60(lVar7 + 0x28,param_2);
        FUN_00ec506c(PTR_s_Economy_Tap_Hero_02be3048,param_3);
        pppcVar9 = (char ***)PTR_s_Economy_Tap_Hero_02be3048;
        goto LAB_0090ae08;
      }
      bVar2 = *param_1;
      uVar11 = *(ulong *)(param_1 + 8);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar11;
    }
    if (uVar1 == 4) {
      iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01b9230f,4);
      if (iVar4 == 0) {
        if ((*param_2 & 1) == 0) {
          param_2 = param_2 + 1;
        }
        else {
          param_2 = *(byte **)(param_2 + 0x10);
        }
        local_148[0] = &local_158;
        local_158 = "type4";
        lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
        FUN_00ec3e60(lVar7 + 0x28,param_2);
        FUN_00ec506c(PTR_s_Economy_Tap_Skin_02be3050,param_3);
        pppcVar9 = (char ***)PTR_s_Economy_Tap_Skin_02be3050;
        goto LAB_0090ae08;
      }
      bVar2 = *param_1;
      uVar11 = *(ulong *)(param_1 + 8);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar11;
    }
    if (uVar1 == 4) {
      iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01b92433,4);
      if (iVar4 != 0) {
        bVar2 = *param_1;
        uVar11 = *(ulong *)(param_1 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
        goto LAB_0090a2b0;
      }
LAB_0090a490:
      puVar5 = (undefined4 *)FUN_00cc7b20(param_2);
      if (puVar5 != (undefined4 *)0x0) {
        switch(*puVar5) {
        case 0:
          local_158 = "type4_skincard_rarity";
          local_148[0] = &local_158;
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          FUN_00ec3e60(lVar7 + 0x28,"common");
          local_158 = "type4_skincard_essence";
          local_148[0] = &local_158;
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          lVar7 = lVar7 + 0x28;
          uVar14 = 0x3f800000;
          break;
        case 1:
          local_158 = "type4_skincard_rarity";
          local_148[0] = &local_158;
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          FUN_00ec3e60(lVar7 + 0x28,"rare");
          local_158 = "type4_skincard_essence";
          local_148[0] = &local_158;
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          lVar7 = lVar7 + 0x28;
          uVar14 = 0x40c00000;
          break;
        case 2:
          local_158 = "type4_skincard_rarity";
          local_148[0] = &local_158;
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          FUN_00ec3e60(lVar7 + 0x28,"epic");
          local_158 = "type4_skincard_essence";
          local_148[0] = &local_158;
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          lVar7 = lVar7 + 0x28;
          uVar14 = 0x41f00000;
          break;
        case 3:
          local_158 = "type4_skincard_rarity";
          local_148[0] = &local_158;
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          FUN_00ec3e60(lVar7 + 0x28,"legendary");
          local_158 = "type4_skincard_essence";
          local_148[0] = &local_158;
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          uVar14 = 0x42f00000;
          lVar7 = lVar7 + 0x28;
          break;
        default:
          goto switchD_0090a4b8_default;
        }
        FUN_00ec3ef0(uVar14,lVar7);
      }
switchD_0090a4b8_default:
      if ((*param_2 & 1) == 0) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = *(byte **)(param_2 + 0x10);
      }
      local_148[0] = &local_158;
      local_158 = "type5_skincard_name";
      lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
      FUN_00ec3e60(lVar7 + 0x28,param_2);
      FUN_00ec506c(PTR_s_Economy_Tap_Card_02be3058,param_3);
      pppcVar9 = (char ***)PTR_s_Economy_Tap_Card_02be3058;
    }
    else {
LAB_0090a2b0:
      uVar1 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar11;
      }
      if (uVar1 == 0xb) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"card_rarity",0xb);
        if (iVar4 == 0) goto LAB_0090a490;
        bVar2 = *param_1;
        uVar11 = *(ulong *)(param_1 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar11;
      }
      if (uVar1 == 6) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"talent",6);
        if (iVar4 == 0) {
          if ((*param_2 & 1) == 0) {
            pbVar13 = param_2 + 1;
          }
          else {
            pbVar13 = *(byte **)(param_2 + 0x10);
          }
          local_148[0] = &local_158;
          local_158 = "type6_talent_id";
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          FUN_00ec3e60(lVar7 + 0x28,pbVar13);
          if ((*param_2 & 1) == 0) {
            param_2 = param_2 + 1;
          }
          else {
            param_2 = *(byte **)(param_2 + 0x10);
          }
          FUN_008fa54c(local_148,param_2);
          lVar7 = FUN_00cdbb24(local_148);
          if (((ulong)local_148[0] & 1) != 0) {
            operator_delete(local_138);
          }
          if (((lVar7 != 0) && ((*(ushort *)(lVar7 + 0xb0) >> 8 & 1) != 0)) &&
             (lVar6 = FUN_00cdda38(lVar7), lVar6 != 0)) {
            if ((*(byte *)(lVar7 + 0x78) & 1) == 0) {
              lVar7 = lVar7 + 0x79;
            }
            else {
              lVar7 = *(long *)(lVar7 + 0x88);
            }
            local_158 = "type4_talent_hero";
            local_148[0] = &local_158;
            lVar8 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
            FUN_00ec3e60(lVar8 + 0x28,lVar7);
            iVar4 = *(int *)(lVar6 + 0x18);
            if (iVar4 == 3) {
              local_158 = "type5_talent_rarity";
              local_148[0] = &local_158;
              lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
              lVar7 = lVar7 + 0x28;
              pcVar10 = "legendary";
            }
            else if (iVar4 == 2) {
              local_148[0] = &local_158;
              local_158 = "type5_talent_rarity";
              lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
              lVar7 = lVar7 + 0x28;
              pcVar10 = "epic";
            }
            else {
              if (iVar4 != 1) goto LAB_0090adf4;
              local_148[0] = &local_158;
              local_158 = "type5_talent_rarity";
              lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
              lVar7 = lVar7 + 0x28;
              pcVar10 = "rare";
            }
            FUN_00ec3e60(lVar7,pcVar10);
          }
LAB_0090adf4:
          FUN_00ec506c(PTR_s_Economy_Tap_Talent_02be3060,param_3);
          pppcVar9 = (char ***)PTR_s_Economy_Tap_Talent_02be3060;
          goto LAB_0090ae08;
        }
        bVar2 = *param_1;
        uVar11 = *(ulong *)(param_1 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar11;
      }
      if (uVar1 == 9) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"commodity",9);
        if (iVar4 == 0) {
          bVar2 = *param_2;
          uVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            uVar1 = *(ulong *)(param_2 + 8);
          }
          if (uVar1 == 0xf) {
            iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"5v5_access_pass",0xf);
            if (iVar4 == 0) {
              FUN_00ec506c(PTR_s_Economy_Tap_GoldenTicket_02be3068,param_3);
              pppcVar9 = (char ***)PTR_s_Economy_Tap_GoldenTicket_02be3068;
              goto LAB_0090ae08;
            }
            bVar2 = *param_2;
          }
          if ((bVar2 & 1) == 0) {
            param_2 = param_2 + 1;
          }
          else {
            param_2 = *(byte **)(param_2 + 0x10);
          }
          local_148[0] = &local_158;
          local_158 = "type4";
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          FUN_00ec3e60(lVar7 + 0x28,param_2);
          FUN_00ec506c(PTR_s_Economy_Tap_Commodity_02be3090,param_3);
          pppcVar9 = (char ***)PTR_s_Economy_Tap_Commodity_02be3090;
          goto LAB_0090ae08;
        }
        bVar2 = *param_1;
        uVar11 = *(ulong *)(param_1 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar11;
      }
      if (uVar1 == 9) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"blueprint",9);
        if (iVar4 == 0) {
          if ((*param_2 & 1) == 0) {
            pbVar13 = param_2 + 1;
          }
          else {
            pbVar13 = *(byte **)(param_2 + 0x10);
          }
          local_148[0] = &local_158;
          local_158 = "type5_blueprint";
          lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
          FUN_00ec3e60(lVar7 + 0x28,pbVar13);
          if ((*param_2 & 1) == 0) {
            param_2 = param_2 + 1;
          }
          else {
            param_2 = *(byte **)(param_2 + 0x10);
          }
          lVar7 = FUN_00cc7618(param_2);
          if (lVar7 != 0) {
            uVar14 = *(undefined4 *)(lVar7 + 0x20);
            local_158 = "type4_blueprint_rarity";
            local_148[0] = &local_158;
            lVar7 = FUN_0090d33c(param_3,&local_158,&DAT_01b9349b,local_148,auStack_150);
            FUN_00ec3ee0(lVar7 + 0x28,uVar14);
          }
          FUN_00ec506c(PTR_s_Economy_Tap_Blueprint_02be3070,param_3);
          pppcVar9 = (char ***)PTR_s_Economy_Tap_Blueprint_02be3070;
          goto LAB_0090ae08;
        }
        bVar2 = *param_1;
        uVar11 = *(ulong *)(param_1 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar11;
      }
      if (uVar1 == 9) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"ascension",9);
        if (iVar4 == 0) {
          bVar2 = *param_2;
          uVar11 = *(ulong *)(param_2 + 8);
          uVar12 = (ulong)(bVar2 >> 1);
          uVar1 = uVar12;
          if ((bVar2 & 1) != 0) {
            uVar1 = uVar11;
          }
          if (uVar1 == 5) {
            iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"level",5);
            if (iVar4 == 0) goto LAB_0090ae10;
            bVar2 = *param_2;
            uVar11 = *(ulong *)(param_2 + 8);
            uVar12 = (ulong)(bVar2 >> 1);
          }
          if ((bVar2 & 1) != 0) {
            uVar12 = uVar11;
          }
          if (uVar12 == 8) {
            FUN_0090d610(param_2,0,0xffffffffffffffff,"sunlight",8);
          }
          goto LAB_0090ae10;
        }
        bVar2 = *param_1;
        uVar11 = *(ulong *)(param_1 + 8);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      if ((bVar2 & 1) != 0) {
        uVar12 = uVar11;
      }
      if (uVar12 == 9) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"player_xp",9);
        if (iVar4 == 0) goto LAB_0090ae10;
        bVar2 = *param_1;
      }
      if ((bVar2 & 1) == 0) {
        param_1 = param_1 + 1;
      }
      else {
        param_1 = *(byte **)(param_1 + 0x10);
      }
      FUN_00e6a93c(local_148,0x100,"Economy_Tap_Unknown_%s",param_1);
      FUN_00ec506c(local_148,param_3);
      pppcVar9 = local_148;
    }
  }
LAB_0090ae08:
  FUN_00ec5024(pppcVar9,param_3);
LAB_0090ae10:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0090ae3c(uint *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  char **local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar2 = param_1[0x18];
  if ((int)uVar2 <= (int)param_1[0x14]) goto LAB_0090af34;
  local_70 = &local_98;
  puStack_90 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "new_level";
  lVar8 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar8 + 0x28,uVar2);
  FUN_00ec506c("Progression_LevelUp",&puStack_90);
  FUN_00ec5024("Progression_LevelUp",&puStack_90);
  uVar2 = param_1[0x18];
  if (uVar2 == 0xf) {
    pcVar9 = "7agepz";
LAB_0090af24:
    FUN_00ec50ac(pcVar9);
  }
  else {
    if (uVar2 == 10) {
      pcVar9 = "d4am06";
      goto LAB_0090af24;
    }
    if (uVar2 == 5) {
      pcVar9 = "3jkxbo";
      goto LAB_0090af24;
    }
  }
  FUN_0090d2e0(&puStack_90,local_88);
LAB_0090af34:
  if (*param_1 != 0) {
    lVar8 = 0;
    uVar16 = 0;
    do {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = "type1";
      puStack_90 = &local_88;
      local_70 = &local_98;
      lVar10 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
      FUN_00ec3e60(lVar10 + 0x28,"spoils");
      uVar3 = *(undefined4 *)(*(long *)(param_1 + 2) + lVar8 + 8);
      local_98 = "amount";
      local_70 = &local_98;
      lVar10 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
      FUN_00ec3ee0(lVar10 + 0x28,uVar3);
      lVar10 = *(long *)(param_1 + 2) + lVar8;
      pbVar11 = (byte *)(lVar10 + 0x10);
      bVar5 = *pbVar11;
      uVar14 = *(ulong *)(lVar10 + 0x18);
      uVar15 = (ulong)(bVar5 >> 1);
      uVar1 = uVar15;
      if ((bVar5 & 1) != 0) {
        uVar1 = uVar14;
      }
      if (uVar1 == 5) {
        iVar7 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"glory",5);
        if (iVar7 != 0) {
          pbVar11 = (byte *)(*(long *)(param_1 + 2) + lVar8 + 0x10);
          bVar5 = *pbVar11;
          uVar14 = *(ulong *)(*(long *)(param_1 + 2) + lVar8 + 0x18);
          uVar15 = (ulong)(bVar5 >> 1);
          goto LAB_0090b044;
        }
        FUN_00ec506c(PTR_s_Economy_Tap_Glory_02be3018,&puStack_90);
        puVar13 = PTR_s_Economy_Tap_Glory_02be3018;
LAB_0090b0a4:
        FUN_00ec5024(puVar13,&puStack_90);
      }
      else {
        pbVar11 = (byte *)(*(long *)(param_1 + 2) + uVar16 * 0x28 + 0x10);
LAB_0090b044:
        if ((bVar5 & 1) != 0) {
          uVar15 = uVar14;
        }
        if ((uVar15 == 7) &&
           (iVar7 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"essence",7), iVar7 == 0)) {
          FUN_00ec506c(PTR_s_Economy_Tap_Essence_02be3038,&puStack_90);
          puVar13 = PTR_s_Economy_Tap_Essence_02be3038;
          goto LAB_0090b0a4;
        }
      }
      FUN_0090d2e0(&puStack_90,local_88);
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 0x28;
    } while (uVar16 < *param_1);
  }
  if (param_1[8] != 0) {
    uVar16 = 0;
    lVar8 = 0x50;
    do {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = "type1";
      puStack_90 = &local_88;
      local_70 = &local_98;
      lVar10 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
      FUN_00ec3e60(lVar10 + 0x28,"spoils");
      uVar3 = *(undefined4 *)(*(long *)(param_1 + 10) + lVar8 + -0x50);
      local_98 = "amount";
      local_70 = &local_98;
      lVar10 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
      FUN_00ec3ee0(lVar10 + 0x28,uVar3);
      lVar10 = *(long *)(param_1 + 10) + lVar8;
      if ((*(byte *)(lVar10 + 0x18) & 1) == 0) {
        lVar10 = lVar10 + 0x19;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x28);
      }
      local_98 = "type2";
      local_70 = &local_98;
      lVar12 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
      FUN_00ec3e60(lVar12 + 0x28,lVar10);
      pbVar11 = (byte *)(*(long *)(param_1 + 10) + lVar8);
      bVar5 = *pbVar11;
      uVar14 = *(ulong *)(pbVar11 + 8);
      uVar15 = (ulong)(bVar5 >> 1);
      uVar1 = uVar15;
      if ((bVar5 & 1) != 0) {
        uVar1 = uVar14;
      }
      if (uVar1 == 5) {
        iVar7 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"chest",5);
        if (iVar7 != 0) {
          pbVar11 = (byte *)(*(long *)(param_1 + 10) + lVar8);
          bVar5 = *pbVar11;
          uVar14 = *(ulong *)(pbVar11 + 8);
          uVar15 = (ulong)(bVar5 >> 1);
          goto LAB_0090b228;
        }
        FUN_00ec506c(PTR_s_Economy_Tap_Chest_02be3080,&puStack_90);
        puVar13 = PTR_s_Economy_Tap_Chest_02be3080;
LAB_0090b288:
        FUN_00ec5024(puVar13,&puStack_90);
      }
      else {
        pbVar11 = (byte *)(*(long *)(param_1 + 10) + uVar16 * 0x80 + 0x50);
LAB_0090b228:
        if ((bVar5 & 1) != 0) {
          uVar15 = uVar14;
        }
        if ((uVar15 == 3) &&
           (iVar7 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"key",3), iVar7 == 0)) {
          FUN_00ec506c(PTR_s_Economy_Tap_Key_02be3088,&puStack_90);
          puVar13 = PTR_s_Economy_Tap_Key_02be3088;
          goto LAB_0090b288;
        }
      }
      FUN_0090d2e0(&puStack_90,local_88);
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 0x80;
    } while (uVar16 < param_1[8]);
  }
  puStack_90 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "type1";
  local_70 = &local_98;
  lVar8 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar8 + 0x28,"spoils");
  uVar2 = param_1[0x14];
  uVar4 = param_1[0x19];
  local_98 = "amount";
  local_70 = &local_98;
  lVar8 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar8 + 0x28,uVar2 - uVar4);
  FUN_00ec506c(PTR_s_Economy_Tap_XP_02be3078,&puStack_90);
  FUN_00ec5024(PTR_s_Economy_Tap_XP_02be3078,&puStack_90);
  FUN_00904884(param_1[0x28]);
  if ((char)param_1[0x29] != '\0') {
    FUN_00ec5068("Social_TeamMatch_Finish");
    FUN_00ec5020("Social_TeamMatch_Finish");
  }
  FUN_0090d2e0(&puStack_90,local_88);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

