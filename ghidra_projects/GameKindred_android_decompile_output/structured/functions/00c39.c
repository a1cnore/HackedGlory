// functions/00c39 — 16 functions
#include "libGameKindred.h"




void FUN_00c39000(long *param_1)

{
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/tap.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x00c3903c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x238))(param_1);
  return;
}




void FUN_00c39040(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00c38a88();
  uVar2 = FUN_00f048a4("CardReveal");
  FUN_00f048e0(auStack_48,uVar2,**(undefined4 **)(param_1 + 0x650));
  FUN_00f04760(*(undefined8 *)(param_1 + 0x660),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c390bc(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00c38a48();
  *(undefined4 *)(param_1 + 0x668) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x66e) = 0;
  uVar2 = FUN_00f048a4("CardInspect");
  FUN_00f048e0(auStack_48,uVar2,**(undefined4 **)(param_1 + 0x650));
  FUN_00f04760(*(undefined8 *)(param_1 + 0x660),auStack_48,1);
  (**(code **)(**(long **)(param_1 + 0x660) + 0x158))(0x3e4ccccd,*(long **)(param_1 + 0x660),0);
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/spoils_cards_flip.mp3",0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c39174(long param_1)

{
  FUN_00c38688();
                    /* WARNING: Could not recover jumptable at 0x00c391a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x180))(0x3e4ccccd,*(undefined4 *)(param_1 + 0x450));
  return;
}




void FUN_00c391ac(long param_1)

{
  void *pvVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  bool bVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  char *pcVar15;
  void *pvVar16;
  void *pvVar17;
  ulong uVar18;
  float fVar19;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [8];
  size_t local_80;
  char *local_78;
  byte local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (*(long *)(param_1 + 0x650) == 0) goto LAB_00c395c4;
  fVar19 = *(float *)(param_1 + 0x668) - *(float *)(param_1 + 0x620);
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  *(float *)(param_1 + 0x668) = fVar19;
  if ((fVar19 != 0.0) || (*(char *)(param_1 + 0x66e) != '\0')) goto LAB_00c395c4;
  FUN_008fa54c(local_70,*(undefined8 *)(*(long *)(param_1 + 0x650) + 8));
  uVar18 = (ulong)(local_70[0] >> 1);
  pvVar7 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    uVar18 = local_68;
    pvVar7 = local_60;
  }
  pvVar1 = (void *)((long)pvVar7 + uVar18);
  uVar14 = uVar18;
  pvVar10 = pvVar7;
  while ((((pvVar16 = pvVar1, 9 < (long)uVar14 && (uVar14 - 9 != 0)) &&
          (pvVar10 = memchr(pvVar10,99,uVar14 - 9), pvVar10 != (void *)0x0)) &&
         (iVar9 = memcmp(pvVar10,"card_skin_",10), pvVar16 = pvVar10, iVar9 != 0))) {
    pvVar10 = (void *)((long)pvVar10 + 1);
    uVar14 = (long)pvVar1 - (long)pvVar10;
  }
  pvVar10 = pvVar7;
  while (((pvVar17 = pvVar1, 8 < (long)uVar18 && (uVar18 - 8 != 0)) &&
         ((pvVar10 = memchr(pvVar10,99,uVar18 - 8), pvVar10 != (void *)0x0 &&
          (iVar9 = memcmp(pvVar10,"card_hero",9), pvVar17 = pvVar10, iVar9 != 0))))) {
    pvVar10 = (void *)((long)pvVar10 + 1);
    uVar18 = (long)pvVar1 - (long)pvVar10;
  }
  bVar8 = (long)pvVar17 - (long)pvVar7 != -1;
  FUN_008fcdb8(local_88,&DAT_0320ffa8);
  if (((pvVar16 == pvVar7 && pvVar16 != pvVar1) && (*(char *)(param_1 + 0x66c) == '\0')) &&
     (lVar11 = FUN_00cc771c(local_70), lVar11 != 0)) {
    if (*(char *)(lVar11 + 0x35) == '\0') {
      iVar9 = *(int *)(lVar11 + 0x20);
      if (iVar9 == 3) {
        pcVar13 = "Tier_3_Skin_Unlocked";
      }
      else if (iVar9 == 2) {
        pcVar13 = "Tier_2_Skin_Unlocked";
      }
      else {
        if (iVar9 != 1) goto LAB_00c39330;
        pcVar13 = "Tier_1_Skin_Unlocked";
      }
    }
    else {
      pcVar13 = "Special_Edition_Skin_Purchased";
    }
    FUN_008fa54c(local_a0,pcVar13);
    FUN_008fce60(local_88,local_a0);
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
  }
LAB_00c39330:
  if (**(uint **)(param_1 + 0x650) < 4) {
    bVar6 = bVar8 && pvVar17 != pvVar1;
    switch(**(uint **)(param_1 + 0x650)) {
    case 0:
      goto switchD_00c39354_caseD_0;
    case 1:
      FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/reveal_rare.mp3",0,0);
      pcVar13 = local_78;
      sVar2 = (ulong)(local_88[0] >> 1);
      if ((local_88[0] & 1) != 0) {
        sVar2 = local_80;
      }
      sVar3 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar3 = DAT_0320ffb0;
      }
      if (sVar2 == sVar3) {
        pcVar15 = (char *)((ulong)local_88 | 1);
        pcVar4 = pcVar15;
        if ((local_88[0] & 1) != 0) {
          pcVar4 = local_78;
        }
        pcVar12 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar12 = &DAT_0320ffa9;
        }
        if ((local_88[0] & 1) == 0) {
          if (sVar2 != 0) {
            lVar11 = -(ulong)(local_88[0] >> 1);
            do {
              if (*pcVar15 != *pcVar12) goto LAB_00c3953c;
              pcVar15 = pcVar15 + 1;
              lVar11 = lVar11 + 1;
              pcVar12 = pcVar12 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar9 = memcmp(pcVar4,pcVar12,sVar2), iVar9 != 0))
        goto LAB_00c39594;
        if (bVar6) {
LAB_00c39660:
          pcVar13 = "build://Sounds/UI.assetbundle/ui_tutorial_frontend_hero_unlock.mp3";
          goto LAB_00c39360;
        }
        uVar18 = FUN_00969254();
        if ((((uVar18 & 1) != 0) && (lVar11 = FUN_00969248(), 0 < *(int *)(lVar11 + 0x38))) &&
           (*(char *)(param_1 + 0x66c) == '\0')) {
          pcVar13 = "build://Sounds/Cards/vo_vainglory_rare.mp3";
          goto LAB_00c39360;
        }
      }
      else {
LAB_00c3953c:
        pcVar13 = local_78;
        if ((local_88[0] & 1) == 0) {
          pcVar13 = (char *)((ulong)local_88 | 1);
        }
LAB_00c39594:
        FUN_00aa132c(pcVar13);
      }
      break;
    case 2:
      FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/reveal_epic.mp3",0,0);
      pcVar13 = local_78;
      sVar2 = (ulong)(local_88[0] >> 1);
      if ((local_88[0] & 1) != 0) {
        sVar2 = local_80;
      }
      sVar3 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar3 = DAT_0320ffb0;
      }
      if (sVar2 != sVar3) goto LAB_00c3953c;
      pcVar15 = (char *)((ulong)local_88 | 1);
      pcVar4 = pcVar15;
      if ((local_88[0] & 1) != 0) {
        pcVar4 = local_78;
      }
      pcVar12 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar12 = &DAT_0320ffa9;
      }
      if ((local_88[0] & 1) == 0) {
        if (sVar2 != 0) {
          lVar11 = -(ulong)(local_88[0] >> 1);
          do {
            if (*pcVar15 != *pcVar12) goto LAB_00c3953c;
            pcVar15 = pcVar15 + 1;
            lVar11 = lVar11 + 1;
            pcVar12 = pcVar12 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar9 = memcmp(pcVar4,pcVar12,sVar2), iVar9 != 0))
      goto LAB_00c39594;
      if (bVar6) goto LAB_00c39660;
      if (*(char *)(param_1 + 0x66c) != '\0') break;
      pcVar13 = "build://Sounds/Cards/vo_vainglory_epic.mp3";
      goto LAB_00c39360;
    case 3:
      FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/reveal_legendary.mp3",0,0);
      pcVar13 = local_78;
      sVar2 = (ulong)(local_88[0] >> 1);
      if ((local_88[0] & 1) != 0) {
        sVar2 = local_80;
      }
      sVar3 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar3 = DAT_0320ffb0;
      }
      if (sVar2 != sVar3) goto LAB_00c3953c;
      pcVar15 = (char *)((ulong)local_88 | 1);
      pcVar4 = pcVar15;
      if ((local_88[0] & 1) != 0) {
        pcVar4 = local_78;
      }
      pcVar12 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar12 = &DAT_0320ffa9;
      }
      if ((local_88[0] & 1) == 0) {
        if (sVar2 != 0) {
          lVar11 = -(ulong)(local_88[0] >> 1);
          do {
            if (*pcVar15 != *pcVar12) goto LAB_00c3953c;
            pcVar15 = pcVar15 + 1;
            lVar11 = lVar11 + 1;
            pcVar12 = pcVar12 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar9 = memcmp(pcVar4,pcVar12,sVar2), iVar9 != 0))
      goto LAB_00c39594;
      if (bVar8 && pvVar17 != pvVar1) goto LAB_00c39660;
      if (*(char *)(param_1 + 0x66c) == '\0') {
        pcVar13 = "build://Sounds/Cards/vo_vainglory_legendary.mp3";
        goto LAB_00c39360;
      }
    }
  }
  else {
switchD_00c39354_caseD_0:
    pcVar13 = "build://Sounds/Cards/reveal_common.mp3";
LAB_00c39360:
    FUN_00aa12a8(0x3f800000,pcVar13,0,0);
  }
  *(undefined1 *)(param_1 + 0x66e) = 1;
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00c395c4:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c396c4(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x660) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x660) + 0x6748) = param_2;
  }
  return;
}




void FUN_00c396d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x660);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb;
  }
  return;
}




void FUN_00c396ec(float param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x660);
  if ((lVar1 != 0) &&
     ((*(float *)(lVar1 + 0x48) != param_1 || (*(float *)(lVar1 + 0x4c) != param_1)))) {
    *(float *)(lVar1 + 0x48) = param_1;
    *(float *)(lVar1 + 0x4c) = param_1;
    FUN_0091ada4();
    return;
  }
  return;
}




void FUN_00c39718(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x660);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x43f4) =
         *(uint *)(lVar1 + 0x43f4) & 0xfffffff8 | *(uint *)(lVar1 + 0x43f4) & 3 | (param_2 & 1) << 2
    ;
  }
  return;
}




void FUN_00c39738(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x660) != 0) {
    FUN_00c9cc24(*(long *)(param_1 + 0x660),param_2 & 1);
    return;
  }
  return;
}




void FUN_00c3974c(long param_1)

{
  FUN_00c37adc(param_1 + 0x2f0,1,0,0);
  return;
}




void FUN_00c39760(long param_1)

{
  FUN_00c37adc(param_1 + 0x2f0,1,0,0);
  return;
}




undefined8 FUN_00c39774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x658);
}




void FUN_00c3977c(long param_1)

{
  FUN_00c37adc(param_1 + 0x2f0,1,0,0);
  return;
}




void FUN_00c39790(long param_1)

{
  FUN_00c37adc(param_1 + 0x2f0,1,0,0);
  return;
}




void FUN_00c397a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined **ppuVar27;
  bool bVar28;
  ulong uVar29;
  undefined8 uVar30;
  uint uVar31;
  float fVar32;
  undefined8 local_90;
  void *local_88;
  long local_80;
  
  lVar26 = tpidr_el0;
  local_80 = *(long *)(lVar26 + 0x28);
  FUN_00c37198();
  puVar1 = param_1 + 0xca;
  param_1[0xc9] = 0;
  *param_1 = &PTR_FUN_027faca8;
  FUN_00abaee8(puVar1,0);
  puVar2 = param_1 + 0x189;
  FUN_00f10d7c();
  puVar3 = param_1 + 0x1aa;
  FUN_00f0e4a8();
  puVar4 = param_1 + 0x1c8;
  FUN_00f017e8();
  puVar5 = param_1 + 0x1d9;
  param_1[0x1c8] = &PTR_FUN_027c1f80;
  FUN_00f017e8(puVar5);
  puVar6 = param_1 + 0x1ea;
  param_1[0x1d9] = &PTR_FUN_027c1f80;
  FUN_00f0d160();
  puVar7 = param_1 + 0x210;
  FUN_00f1306c(puVar7);
  puVar8 = param_1 + 0x23b;
  FUN_00f1306c(puVar8);
  puVar9 = param_1 + 0x266;
  FUN_00f0d160(puVar9);
  puVar10 = param_1 + 0x28c;
  FUN_00f1306c(puVar10);
  FUN_00f0e4a8();
  puVar11 = param_1 + 0x2d5;
  FUN_00f0d160();
  puVar12 = param_1 + 0x2fb;
  FUN_00f0d160();
  puVar13 = param_1 + 0x321;
  FUN_00f1306c(puVar13);
  puVar14 = param_1 + 0x34c;
  FUN_00f0ac5c(puVar14);
  puVar15 = param_1 + 0x375;
  FUN_00f0e4a8();
  puVar16 = param_1 + 0x393;
  FUN_00f0e4a8();
  puVar17 = param_1 + 0x3b1;
  FUN_00f0e4a8();
  puVar18 = param_1 + 0x3cf;
  FUN_00f0d160();
  puVar19 = param_1 + 0x3f5;
  FUN_00f0d160();
  puVar20 = param_1 + 0x41b;
  FUN_00f0ac5c(puVar20);
  FUN_00b22acc();
  puVar21 = param_1 + 0x86a;
  FUN_00f0d160();
  puVar22 = param_1 + 0x890;
  FUN_00f0ac5c(puVar22);
  fVar32 = 0.8;
  param_1[0x8ba] = 0;
  param_1[0x8b9] = 0;
  param_1[0x8bb] = 0x434800003f4ccccd;
  param_1[0x8be] = 0;
  param_1[0x8bd] = 0;
  param_1[0x8bf] = 4;
  param_1[0x8bc] = 0;
  *(undefined1 *)((long)param_1 + 0x4602) = 0;
  *(undefined2 *)(param_1 + 0x8c0) = 0;
  FUN_00f023ec(param_1 + 0x17,puVar5,1);
  FUN_00f023ec(puVar5,puVar6,1);
  FUN_00f023ec(puVar5,puVar7,1);
  FUN_00f133a4(puVar7,puVar8,1);
  FUN_00f133a4(puVar8,puVar9,1);
  FUN_00f133a4(puVar8,puVar10,1);
  FUN_00f133a4(puVar10,param_1 + 0x2b7,1);
  FUN_00f133a4(puVar10,puVar11,1);
  FUN_00f133a4(puVar7,puVar12,1);
  FUN_00f133a4(puVar7,puVar13,1);
  FUN_00f133a4(puVar13,puVar14,1);
  FUN_00f0ad88(puVar14,puVar15,1);
  FUN_00f0ad88(puVar14,puVar16,1);
  FUN_00f0ad88(puVar14,puVar17,1);
  FUN_00f133a4(puVar13,puVar18,1);
  FUN_00f133a4(puVar13,puVar19,1);
  FUN_00f133a4(puVar13,puVar20,1);
  FUN_00f0ad94(puVar20,param_1 + 0x444,1);
  FUN_00f023ec(puVar5,puVar22,1);
  FUN_00f0ad88(puVar22,puVar1,1);
  FUN_00f023ec(puVar5,puVar4,1);
  FUN_00f023ec(puVar4,puVar3,1);
  FUN_00f023ec(puVar4,puVar2,1);
  FUN_00f023ec(puVar5,puVar21,1);
  uVar29 = FUN_0092ea9c();
  bVar28 = (uVar29 & 1) == 0;
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if (bVar28) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if (bVar28) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  FUN_00f0d92c(puVar6,*ppuVar25,&DAT_01bee7fa);
  FUN_00f0da30(puVar6,1);
  FUN_00f0da80(puVar6,&DAT_01bee7f6);
  local_90 = 0x4000000040000000;
  FUN_00f0da8c(puVar6,&local_90);
  FUN_00f0d92c(puVar9,*ppuVar24,&DAT_01bee7fa);
  if ((*(uint *)((long)param_1 + 0x13b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x13b4) = *(uint *)((long)param_1 + 0x13b4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(puVar9);
  }
  FUN_00f0da30(puVar9,1);
  FUN_00f0da80(puVar9,&DAT_01bee7f6);
  local_90 = 0x4000000040000000;
  FUN_00f0da8c(puVar9,&local_90);
  FUN_00f0e548(param_1 + 0x2b7,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_lock");
  bVar28 = (uVar29 & 1) == 0;
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if (bVar28) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  ppuVar27 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if (bVar28) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
    ppuVar27 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d92c(puVar11,*ppuVar25,&DAT_01bee7fa);
  uVar30 = FUN_00e6ce7c("MENU_TALENTS_LABEL_UNDISCOVERED",0);
  FUN_00f0d75c(puVar11,uVar30);
  FUN_00f0da30(puVar11,1);
  FUN_00f0da80(puVar11,&DAT_01bee7f6);
  local_90 = 0x4000000040000000;
  FUN_00f0da8c(puVar11,&local_90);
  FUN_00f0d92c(puVar12,*ppuVar27,&DAT_01bee7fa);
  uVar30 = FUN_00e6ce7c("MENU_TALENTS_LABEL_UNLOCK_NOW",0);
  FUN_00f0d75c(puVar12,uVar30);
  FUN_00f0da30(puVar12,1);
  FUN_00f0da80(puVar12,&DAT_01bee7f6);
  local_90 = 0x4000000040000000;
  FUN_00f0da8c(puVar12,&local_90);
  FUN_00f0e548(puVar15,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_new_banner_end");
  FUN_00f0e670(puVar15,&DAT_01bbd068,2);
  uVar30 = FUN_00f0e700(puVar15);
  FUN_00f0e700(puVar15);
  fVar32 = fVar32 + 40.0;
  FUN_00f13f08(uVar30,fVar32,puVar15);
  *(uint *)((long)param_1 + 0x1c2c) = *(uint *)((long)param_1 + 0x1c2c) & 0xffffffbf;
  FUN_00f0e548(puVar16,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_new_banner_stretch");
  FUN_00f0e670(puVar16,&DAT_01bbd068,2);
  uVar30 = FUN_00f0e700(puVar16);
  FUN_00f0e700(puVar16);
  fVar32 = fVar32 + 40.0;
  FUN_00f13f08(uVar30,fVar32,puVar16);
  *(uint *)((long)param_1 + 0x1d1c) = *(uint *)((long)param_1 + 0x1d1c) & 0xffffffbf;
  FUN_00f0e548(puVar17,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_new_banner_end");
  *(byte *)(param_1 + 0x3cc) = *(byte *)(param_1 + 0x3cc) | 1;
  FUN_00f0e670(puVar17,&DAT_01bbd068,2);
  uVar30 = FUN_00f0e700(puVar17);
  FUN_00f0e700(puVar17);
  FUN_00f13f08(uVar30,fVar32 + 40.0,puVar17);
  *(uint *)((long)param_1 + 0x1e0c) = *(uint *)((long)param_1 + 0x1e0c) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x1ae4) = *(uint *)((long)param_1 + 0x1ae4) & 0xfffffffb;
  FUN_00f0d92c(puVar18,*ppuVar24,&DAT_01bee7fa);
  uVar31 = *(uint *)((long)param_1 + 0x1efc);
  if ((uVar31 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1efc) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5900;
    FUN_0091ada4(puVar18);
  }
  FUN_00f0da30(puVar18,1);
  FUN_00f0da80(puVar18,&DAT_01bee7f6);
  local_90 = 0x4000000040000000;
  FUN_00f0da8c(puVar18,&local_90);
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar29 & 1) == 0) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d92c(puVar19,*ppuVar25,&DAT_01bee7fa);
  FUN_00e705c8(&local_90,&DAT_01bb6cf3);
  FUN_00f0d75c(puVar19,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  uVar31 = *(uint *)((long)param_1 + 0x202c);
  if ((uVar31 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x202c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5900;
    FUN_0091ada4(puVar19);
  }
  FUN_00f0d7fc(puVar19,&DAT_01bbd06c);
  *(uint *)((long)param_1 + 0x202c) = *(uint *)((long)param_1 + 0x202c) & 0xfffffffb;
  FUN_00b22cfc(0x43c80000,0x42600000,param_1 + 0x444,0,0,0,1);
  *(uint *)((long)param_1 + 0x22a4) = *(uint *)((long)param_1 + 0x22a4) & 0xffffffbf;
  FUN_00f13f08(0x43c80000,0x42600000,puVar20);
  FUN_00f0ad74(0,0x3f000000,puVar20);
  FUN_00f0e548(puVar3,PTR_s_build___Frames_tga_02be35e0,"frame_0_star");
  if ((*(float *)(param_1 + 0x1b4) != (float)DAT_03218f08) ||
     (*(float *)((long)param_1 + 0xda4) != DAT_03218f08._4_4_)) {
    param_1[0x1b4] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(puVar3);
  }
  if ((*(float *)(param_1 + 0x1b3) != 1.65) || (*(float *)((long)param_1 + 0xd9c) != 1.65)) {
    param_1[0x1b3] = 0x3fd333333fd33333;
    FUN_0091ada4(puVar3);
  }
  FUN_00f10dc8(puVar2,PTR_s_build___Frames_tga_02be35e0,"frame_mask");
  FUN_00f0e698(puVar2,0xb);
  if ((*(float *)(param_1 + 0x193) != (float)DAT_03218f08) ||
     (*(float *)((long)param_1 + 0xc9c) != DAT_03218f08._4_4_)) {
    param_1[0x193] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(puVar2);
  }
  FUN_00f0e578(param_1 + 0x165,"circle_button_question");
  uVar31 = *(uint *)((long)param_1 + 0x6d4);
  if ((uVar31 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x6d4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5f80;
    FUN_0091ada4(puVar1);
    uVar31 = *(uint *)((long)param_1 + 0x6d4);
  }
  uVar31 = uVar31 & 0xffffffef;
  *(uint *)((long)param_1 + 0x6d4) = uVar31;
  if ((*(float *)(param_1 + 0xd3) != 0.65) || (*(float *)((long)param_1 + 0x69c) != 0.65)) {
    param_1[0xd3] = 0x3f2666663f266666;
    FUN_0091ada4(puVar1);
    uVar31 = *(uint *)((long)param_1 + 0x6d4);
  }
  *(uint *)((long)param_1 + 0x6d4) = uVar31 & 0xfffffffb;
  if ((*(float *)(param_1 + 0x1d1) != 0.5) || (*(float *)((long)param_1 + 0xe8c) != 0.5)) {
    param_1[0x1d1] = 0x3f0000003f000000;
    FUN_0091ada4(puVar4);
  }
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar29 & 1) == 0) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
  }
  FUN_00f0d378(puVar21,*ppuVar25);
  puVar23 = (uint *)((long)param_1 + 0x43d4);
  uVar31 = *puVar23;
  if ((uVar31 & 0x7f80) != 0x7280) {
    *puVar23 = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x7280;
    FUN_0091ada4(puVar21);
    uVar31 = *puVar23;
  }
  *puVar23 = uVar31 & 0xfffffffb;
  local_90 = 0x3f0000003f000000;
  (**(code **)(param_1[0x86a] + 0x28))(puVar21,&local_90);
  FUN_00f0d998(puVar21,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if (*(long *)(lVar26 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

