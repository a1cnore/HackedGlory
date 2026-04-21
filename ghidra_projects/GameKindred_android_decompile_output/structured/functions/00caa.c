// functions/00caa — 11 functions
#include "libGameKindred.h"




void FUN_00caa284(void)

{
  FUN_00ca9fd4();
  return;
}




undefined8 FUN_00caa28c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_3 != 0) && (lVar1 = FUN_00d5a5c4(param_1,param_3), lVar1 != 0)) {
    uVar2 = FUN_00ca9fd4(param_1,param_2,0,lVar1);
    return uVar2;
  }
  return 0;
}




void FUN_00caa2e0(undefined4 *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if (0x12 < param_2) {
    local_3c = 0;
    FUN_00983100(0,0,&local_3c);
    *param_1 = local_3c;
    if (DAT_0313ce00 == 0) {
      FUN_00e6a2fc(0);
    }
    local_3c = *(undefined4 *)(DAT_0313ce00 + 0x4c024);
    param_1[1] = local_3c;
    if (DAT_0312e490 == 0) {
      FUN_00e6a2fc(0);
    }
    local_3c = *(undefined4 *)((long)&__DT_RELA[0xd4a4].r_offset + DAT_0312e490 + 4);
    param_1[2] = local_3c;
    if (DAT_0313ce08 == 0) {
      FUN_00e6a2fc(0);
    }
    local_3c = *(undefined4 *)(DAT_0313ce08 + 0x51424);
    param_1[3] = local_3c;
    FUN_00cdb004(param_1,param_2);
    FUN_00a8eaa0(param_1,0x13);
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00caa3f8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float local_894;
  undefined4 local_890;
  undefined4 local_88c;
  float local_888;
  float local_884;
  float local_880;
  undefined8 local_878 [257];
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d66d28(*param_1);
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  iVar2 = FUN_00d6bb44(lVar4,DAT_031a92e0);
  fVar9 = powf(0.9,(float)iVar2);
  lVar4 = FUN_00d66d28(*param_1);
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_0312e4a8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  uVar3 = FUN_01985cbc(lVar4,local_878,0x100,DAT_02e3ef98);
  if (uVar3 != 0) {
    fVar9 = ((1.0 - fVar9) * 5.0) / 0.100000024 + 1.5;
    uVar7 = (ulong)uVar3;
    puVar8 = local_878;
    do {
      uVar6 = *puVar8;
      FUN_009d3e5c(uVar6,&local_888,&local_88c,&local_894,&local_890);
      if (((local_888 == DAT_03218f88) && (local_884 == DAT_03218f8c)) &&
         (local_880 == DAT_03218f90)) {
        if (fVar9 <= local_894) {
          fVar10 = fVar9 * 0.1 + local_894 * 0.9;
        }
        else {
          fVar10 = fVar9 * 0.3 + local_894 * 0.7;
        }
        FUN_009d3e40(local_88c,fVar10,local_890,uVar6,&local_888);
      }
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00caa5f4(void)

{
  return 0;
}




void FUN_00caa5fc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00ceace8();
  uVar4 = FUN_00ceae88();
  if (((uVar4 & 1) != 0) && (iVar3 = FUN_019889cc(&local_60,1,DAT_02c091a0,0), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if (local_60 != 0) {
        uVar8 = 0x10000;
        lVar5 = local_60;
LAB_00caa69c:
        do {
          do {
            lVar6 = lVar5;
            lVar5 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x377a062d);
            if (lVar5 != 0) {
              (**(code **)(lVar5 + 8))(lVar6,param_1);
            }
            if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar5 = *(long *)(lVar6 + 0x18), lVar5 != 0))
            {
              uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
              goto LAB_00caa69c;
            }
            if ((uVar8 & 0xffff) == 0) goto LAB_00caa6fc;
            lVar5 = *(long *)(lVar6 + 0x20);
          } while (*(long *)(lVar6 + 0x20) != 0);
          lVar6 = *(long *)(lVar6 + 0x10);
          if ((lVar6 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) break;
          uVar8 = uVar1 | uVar8 & 0xffff0000;
          while (lVar5 = *(long *)(lVar6 + 0x20), lVar5 == 0) {
            if ((uVar8 - 1 & 0xffff) == 0) goto LAB_00caa6fc;
            lVar6 = *(long *)(lVar6 + 0x10);
            uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
            if (lVar6 == 0) goto LAB_00caa6fc;
          }
        } while( true );
      }
LAB_00caa6fc:
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00caa738(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [96];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d23720();
  bVar2 = false;
  if (lVar4 != 0) {
    uVar5 = FUN_00d6eb50();
    lVar6 = FUN_00d6eb5c(uVar5,"*VisionTotem*");
    FUN_00d4d9e8(auStack_a0);
    FUN_00d4db40(auStack_a0,lVar4);
    FUN_00d4dca4(auStack_a0,PTR_s_VisionTotem_02beb278,0);
    FUN_00d4daf4(auStack_a0,1,0,0,0);
    FUN_00d55794(lVar4,auStack_b0,0);
    FUN_00d4db48(*(float *)(lVar6 + 0x144) + 2.0,auStack_a0,auStack_b0);
    iVar3 = FUN_00d9e840(auStack_a0,auStack_40,1,0);
    bVar2 = iVar3 != 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00caa828(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d23720();
  bVar2 = false;
  if (lVar4 != 0) {
    uVar5 = FUN_00d9ea34();
    local_2c = 0xffffffff;
    uVar6 = FUN_00d6bbac(uVar5,DAT_0315cf48,&local_2c);
    bVar2 = false;
    if ((uVar6 & 1) != 0) {
      FUN_00d6b8f8(uVar5,local_2c);
      lVar4 = FUN_00d9e390();
      bVar2 = false;
      if (lVar4 != 0) {
        cVar3 = FUN_00d55870();
        bVar2 = cVar3 == '\0';
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00caa8c8(undefined8 param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8;
  void *local_a8;
  byte local_a0;
  void *local_90;
  byte local_88;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  byte local_58 [16];
  void *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    puVar6 = &DAT_0313cf88;
  }
  else {
    cVar2 = *(char *)((long)param_2 + 0xd9);
    lVar4 = FUN_00cce574();
    if (*(char *)(lVar4 + 0x20) != '\0') {
      uVar5 = FUN_00cce574();
      FUN_00cce224(local_d0,uVar5,*(long *)(param_2 + 2) + 0x30);
      pbVar1 = local_58;
      if (cVar2 == '\0') {
        pbVar1 = local_70;
      }
      FUN_008fcdb8(param_1,pbVar1);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      goto LAB_00caa9b0;
    }
    puVar6 = &DAT_0313cfa0;
    if (cVar2 == '\0') {
      puVar6 = &DAT_0313cf88;
    }
  }
  FUN_008fcdb8(param_1,puVar6);
LAB_00caa9b0:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00caa9f4(byte *param_1)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 6) {
    iVar2 = FUN_0090d610(param_1,0,0xffffffffffffffff,"talent",6);
    return iVar2 != 0;
  }
  return true;
}




void FUN_00caaa48(byte *param_1,byte *param_2,int param_3,byte *param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte local_e0 [16];
  void *local_d0;
  byte local_c8 [16];
  void *local_b8;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_1;
  uVar7 = *(ulong *)(param_1 + 8);
  uVar9 = (ulong)(bVar2 >> 1);
  uVar1 = uVar9;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar7;
  }
  if (uVar1 == 8) {
    iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"currency",8);
    if (iVar4 != 0) {
      bVar2 = *param_1;
      uVar7 = *(ulong *)(param_1 + 8);
      uVar9 = (ulong)(bVar2 >> 1);
      goto LAB_00caaad0;
    }
    bVar2 = *param_2;
    uVar7 = *(ulong *)(param_2 + 8);
    uVar9 = (ulong)(bVar2 >> 1);
    uVar1 = uVar9;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 6) {
      iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"silver",6);
      if (iVar4 != 0) {
        bVar2 = *param_2;
        uVar7 = *(ulong *)(param_2 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
        goto LAB_00caada0;
      }
      if (param_3 < 500) {
        if (param_3 < 100) {
          pcVar6 = "card_currency_glory_small";
        }
        else {
          pcVar6 = "card_currency_glory_medium";
        }
      }
      else {
        pcVar6 = "card_currency_glory_large";
      }
    }
    else {
LAB_00caada0:
      uVar1 = uVar9;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar7;
      }
      if (uVar1 == 4) {
        iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"gold",4);
        if (iVar4 == 0) {
          if (param_3 < 500) {
            if (param_3 < 100) {
              pcVar6 = "card_currency_ice_small";
            }
            else {
              pcVar6 = "card_currency_ice_medium";
            }
          }
          else {
            pcVar6 = "card_currency_ice_large";
          }
          goto LAB_00cab098;
        }
        bVar2 = *param_2;
        uVar7 = *(ulong *)(param_2 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar9;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar7;
      }
      if (uVar1 == 7) {
        iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"essence",7);
        if (iVar4 == 0) {
          pcVar6 = "card_currency_essence";
          goto LAB_00cab098;
        }
        bVar2 = *param_2;
        uVar7 = *(ulong *)(param_2 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar9;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar7;
      }
      if (uVar1 == 4) {
        iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"opal",4);
        if (iVar4 == 0) {
          pcVar6 = "card_currency_opal";
          goto LAB_00cab098;
        }
        bVar2 = *param_2;
        uVar7 = *(ulong *)(param_2 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar9;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar7;
      }
      if (uVar1 == 0xc) {
        iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"seasonal_key",0xc);
        if (iVar4 == 0) {
          pcVar6 = "card_currency_seasonal_key";
          goto LAB_00cab098;
        }
        bVar2 = *param_2;
        uVar7 = *(ulong *)(param_2 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
      }
      if ((bVar2 & 1) != 0) {
        uVar9 = uVar7;
      }
      if ((uVar9 != 8) ||
         (iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"epic_key",8), iVar4 != 0))
      goto LAB_00cab0bc;
      pcVar6 = "card_currency_epic_key";
    }
LAB_00cab098:
    FUN_008fa54c(local_c8,pcVar6);
    FUN_008fce60(param_4,local_c8);
    local_d0 = local_b8;
    local_e0[0] = local_c8[0];
  }
  else {
LAB_00caaad0:
    uVar1 = uVar9;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 4) {
      iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"buff",4);
      if (iVar4 != 0) {
        bVar2 = *param_1;
        uVar7 = *(ulong *)(param_1 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
        goto LAB_00caab10;
      }
LAB_00caafa0:
      FUN_008fce60(param_4,param_2);
      goto LAB_00cab0bc;
    }
LAB_00caab10:
    uVar1 = uVar9;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 4) {
      iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01b92433,4);
      if (iVar4 == 0) goto LAB_00caafa0;
      bVar2 = *param_1;
      uVar7 = *(ulong *)(param_1 + 8);
      uVar9 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar9;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0xb) {
      iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"card_rarity",0xb);
      if (iVar4 == 0) goto LAB_00caafa0;
      bVar2 = *param_1;
      uVar7 = *(ulong *)(param_1 + 8);
      uVar9 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar9;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 != 4) {
LAB_00caabd0:
      uVar1 = uVar9;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar7;
      }
      if (uVar1 == 4) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"hero",4);
        if (iVar4 == 0) {
          bVar2 = *param_2;
          pbVar8 = *(byte **)(param_2 + 0x10);
          pcVar6 = "card_hero_%s";
          goto LAB_00caaf00;
        }
        bVar2 = *param_1;
        uVar7 = *(ulong *)(param_1 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar9;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar7;
      }
      if (uVar1 == 6) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"talent",6);
        if (iVar4 == 0) goto LAB_00caafa0;
        bVar2 = *param_1;
        uVar7 = *(ulong *)(param_1 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar9;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar7;
      }
      if (uVar1 == 9) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"commodity",9);
        if (iVar4 == 0) {
          uVar1 = (ulong)(*param_2 >> 1);
          if ((*param_2 & 1) != 0) {
            uVar1 = *(ulong *)(param_2 + 8);
          }
          if ((uVar1 == 0xf) &&
             (iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"5v5_access_pass",0xf), iVar4 == 0))
          {
            pcVar6 = "card_currency_golden_ticket";
            goto LAB_00cab098;
          }
          goto LAB_00caafa0;
        }
        bVar2 = *param_1;
        uVar7 = *(ulong *)(param_1 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar9;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar7;
      }
      if (uVar1 == 9) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"blueprint",9);
        if (iVar4 == 0) goto LAB_00caafa0;
        bVar2 = *param_1;
        uVar7 = *(ulong *)(param_1 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar9;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar7;
      }
      if (uVar1 == 9) {
        iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"ascension",9);
        if (iVar4 == 0) {
          uVar1 = (ulong)(*param_2 >> 1);
          if ((*param_2 & 1) != 0) {
            uVar1 = *(ulong *)(param_2 + 8);
          }
          if ((uVar1 == 5) &&
             (iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"level",5), iVar4 == 0)) {
            pcVar6 = "card_ascension_level";
          }
          else {
            pcVar6 = "card_sunlight";
          }
          goto LAB_00cab098;
        }
        bVar2 = *param_1;
        uVar7 = *(ulong *)(param_1 + 8);
        uVar9 = (ulong)(bVar2 >> 1);
      }
      if ((bVar2 & 1) != 0) {
        uVar9 = uVar7;
      }
      if ((uVar9 != 9) ||
         (iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"player_xp",9), iVar4 != 0))
      goto LAB_00cab0bc;
      pcVar6 = "card_currency_xp";
      goto LAB_00cab098;
    }
    iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01b9230f,4);
    if (iVar4 != 0) {
      bVar2 = *param_1;
      uVar7 = *(ulong *)(param_1 + 8);
      uVar9 = (ulong)(bVar2 >> 1);
      goto LAB_00caabd0;
    }
    bVar2 = *param_2;
    pbVar8 = *(byte **)(param_2 + 0x10);
    pcVar6 = "card_skin_%s";
LAB_00caaf00:
    if ((bVar2 & 1) == 0) {
      pbVar8 = param_2 + 1;
    }
    FUN_00e6a8a8(local_c8,pcVar6,pbVar8);
    FUN_008fa54c(local_e0,local_c8);
    lVar5 = FUN_00cc7b20(local_e0);
    if ((local_e0[0] & 1) != 0) {
      operator_delete(local_d0);
    }
    if (lVar5 == 0) goto LAB_00cab0bc;
    FUN_008fa54c(local_e0,local_c8);
    FUN_008fce60(param_4,local_e0);
  }
  if ((local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
LAB_00cab0bc:
  uVar1 = (ulong)(*param_4 >> 1);
  if ((*param_4 & 1) != 0) {
    uVar1 = *(ulong *)(param_4 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1 != 0);
}

