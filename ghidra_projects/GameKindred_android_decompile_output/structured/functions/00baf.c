// functions/00baf — 17 functions
#include "libGameKindred.h"




uint FUN_00baf008(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = FUN_00b2beac(param_1 + 0x3a0);
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x4dc0) + (ulong)*(uint *)(lVar5 + 0x1678) * 8);
  if (puVar8 != (undefined8 *)0x0) {
    FUN_008fa54c(local_50,*puVar8);
    lVar5 = FUN_00cc8184(local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (lVar5 != 0) {
      uVar6 = FUN_009580b8();
      uVar2 = FUN_00961744(uVar6,lVar5);
      if (*(char *)(lVar5 + 0xa5) != '\0') {
        uVar3 = FUN_00cc851c(lVar5);
        uVar4 = 0;
        if (((uVar2 | uVar3) & 1) == 0) {
          uVar7 = FUN_00cc8560(lVar5);
          if ((uVar7 & 1) == 0) {
            uVar4 = 1;
          }
          else {
            uVar4 = FUN_00cc8570(lVar5);
          }
        }
        goto LAB_00baf0b8;
      }
    }
  }
  uVar4 = 0;
LAB_00baf0b8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00baf0ec(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x4db8) != 0) {
    lVar3 = FUN_00b2beac(param_1 + 0x3a0);
    bVar2 = false;
    if (lVar3 == 0) goto LAB_00baf1ac;
    lVar3 = FUN_00b2beac(param_1 + 0x3a0);
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x4dc0) + (ulong)*(uint *)(lVar3 + 0x1678) * 8);
    if (puVar5 != (undefined8 *)0x0) {
      lVar3 = FUN_00cc7c38();
      if (*(char *)(lVar3 + 0x38) != '\0') {
        FUN_008fa54c(local_50,*puVar5);
        lVar3 = FUN_00cc8184(local_50);
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        if (lVar3 != 0) {
          uVar4 = FUN_00baf008(param_1);
          bVar2 = false;
          if ((uVar4 & 1) == 0) goto LAB_00baf1ac;
          if (*(int *)(lVar3 + 200) != 0) {
            bVar2 = *(char *)(lVar3 + 0xa6) != '\0';
            goto LAB_00baf1ac;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00baf1ac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




bool FUN_00baf1d4(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong local_210;
  ulong local_208;
  void *local_200;
  undefined **local_1f8;
  undefined1 auStack_1f0 [8];
  void *local_1e8;
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
  undefined4 local_160;
  byte local_158 [8];
  int local_150;
  void *local_148;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x4db8) != 0) {
    lVar3 = FUN_00b2beac(param_1 + 0x3a0);
    if (lVar3 != 0) {
      lVar3 = FUN_00b2beac(param_1 + 0x3a0);
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x4dc0) + (ulong)*(uint *)(lVar3 + 0x1678) * 8);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_008fa54c(local_158,*puVar5);
        lVar3 = FUN_00cc8184(local_158);
        if ((local_158[0] & 1) != 0) {
          operator_delete(local_148);
        }
        if (lVar3 != 0) {
          local_210 = 0;
          local_208 = 0;
          local_200 = (void *)0x0;
          FUN_00976588(local_158);
          uVar4 = FUN_0096bf64(lVar3,local_158);
          if (((uVar4 & 1) != 0) && (local_150 != 0)) {
            local_1f8 = &PTR_FUN_027bca90;
            FUN_00978240(auStack_1f0,(long)local_148 + 8);
            FUN_008fcdb8(local_1e0,(long)local_148 + 0x18);
            uStack_1a0 = *(undefined8 *)((long)local_148 + 0x58);
            local_1a8 = *(undefined8 *)((long)local_148 + 0x50);
            uStack_1b0 = *(undefined8 *)((long)local_148 + 0x48);
            local_1b8 = *(undefined8 *)((long)local_148 + 0x40);
            uStack_1c0 = *(undefined8 *)((long)local_148 + 0x38);
            local_1c8 = *(undefined8 *)((long)local_148 + 0x30);
            FUN_008fcdb8(local_198,(long)local_148 + 0x60);
            thunk_FUN_00e7051c(&local_180,(long)local_148 + 0x78);
            thunk_FUN_00e7051c(&local_170,(long)local_148 + 0x88);
            local_160 = *(undefined4 *)((long)local_148 + 0x98);
            FUN_008fce60(&local_210,local_198);
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
          FUN_00cc7e2c(&local_1f8,lVar3);
          uVar4 = FUN_00baf008(param_1);
          bVar2 = false;
          if ((uVar4 & 1) != 0) {
            uVar4 = FUN_00cab8b4(local_1e0);
            bVar2 = false;
            if ((uVar4 & 1) != 0) {
              uVar4 = local_210 >> 1 & 0x7f;
              if ((local_210 & 1) != 0) {
                uVar4 = local_208;
              }
              bVar2 = uVar4 != 0;
            }
          }
          if (((ulong)local_1f8 & 1) != 0) {
            operator_delete(local_1e8);
          }
          FUN_009767f4(local_158);
          if ((local_210 & 1) != 0) {
            operator_delete(local_200);
          }
          goto LAB_00baf3e8;
        }
      }
    }
  }
  bVar2 = false;
LAB_00baf3e8:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00baf424(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00baf4a4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  FUN_00b8e630();
  plVar1 = param_1 + 0x6d;
  *param_1 = (long)&PTR_FUN_027ea1b0;
  FUN_00f0e4a8(plVar1);
  FUN_00b707b4(param_1 + 0x8b);
  plVar2 = param_1 + 0x1a5;
  FUN_00f0bdbc(plVar2,0);
  plVar3 = param_1 + 0x1be;
  param_1[0x1a5] = (long)&PTR_FUN_027c3260;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x1e4;
  FUN_00abaee8(plVar4,0);
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  param_1[0x2a3] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x8b,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  uVar8 = FUN_0092ea9c();
  FUN_00f0e6e8(plVar1,0);
  *(uint *)((long)param_1 + 0x3ec) = *(uint *)((long)param_1 + 0x3ec) | 0x10;
  if ((*(float *)(param_1 + 0x1af) != 0.0) || (*(float *)((long)param_1 + 0xd7c) != 0.0)) {
    param_1[0x1af] = 0;
    FUN_0091ada4(plVar2);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar8 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  FUN_00f0d92c(plVar3,*ppuVar5,&DAT_01bee7fa);
  FUN_00f0dac8(plVar3,0);
  uVar6 = *(uint *)((long)param_1 + 0xe74);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xe74) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_0091ada4(plVar3);
  }
  uVar9 = FUN_00e6ce7c("MENU_TALENTS_INFO_TITLE",0);
  FUN_00f0d75c(plVar3,uVar9);
  FUN_00f0e578(param_1 + 0x27f,"circle_button_question");
  uVar6 = *(uint *)((long)param_1 + 0xfa4);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xfa4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar4);
  }
  FUN_00b09144(0xbf800000,plVar4);
  fVar10 = DAT_02be3668;
  if ((uVar8 & 1) == 0) {
    fVar10 = 1.0;
  }
  fVar10 = fVar10 * 0.7;
  if ((*(float *)(param_1 + 0x1ed) != fVar10) || (*(float *)((long)param_1 + 0xf6c) != fVar10)) {
    *(float *)(param_1 + 0x1ed) = fVar10;
    *(float *)((long)param_1 + 0xf6c) = fVar10;
    FUN_0091ada4(plVar4);
  }
  local_60 = DAT_03210c64;
  local_88 = thunk_FUN_00bafb34;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x1e5,&local_88);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bafb34(void)

{
  undefined **ppuVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_c8;
  void *pvStack_c0;
  undefined1 uStack_b8;
  byte bStack_b0;
  void *pvStack_a0;
  byte bStack_98;
  void *pvStack_88;
  undefined4 uStack_80;
  undefined4 uStack_74;
  byte bStack_70;
  void *pvStack_60;
  float fStack_50;
  float fStack_4c;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&fStack_4c,&fStack_50);
  uVar3 = FUN_0092ead0(fStack_4c,fStack_50);
  uVar4 = FUN_0092ea9c();
  fVar7 = fStack_4c - DAT_031339d4;
  FUN_00aff894(&fStack_d8);
  uVar5 = FUN_00e6ce7c("MENU_TALENTS_INFO_POPUP_TITLE",0);
  FUN_00910394(&uStack_c8,uVar5);
  fStack_d4 = (fStack_50 + -360.0) * 0.9;
  fStack_d8 = (fVar7 + -100.0) * 0.9;
  if ((uVar4 & (uVar3 ^ 0xffffffff) & 1) == 0) {
    fStack_d8 = 1620.0;
  }
  uStack_74 = 1;
  uStack_80 = 0xff5a3c10;
  uStack_b8 = 1;
  uVar5 = FUN_00cae8f0();
  lVar6 = FUN_00bafd00(uVar5,&fStack_d8);
  if (lVar6 != 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
    if ((uVar4 & 1) == 0) {
      ppuVar1 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
    }
    FUN_00aff718(lVar6,*ppuVar1);
    uVar3 = *(uint *)(lVar6 + 0x84);
    if ((uVar3 & 0x7f80) != 0x5900) {
      *(uint *)(lVar6 + 0x84) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
      FUN_0091ada4(lVar6);
    }
    uVar5 = FUN_00e6ce7c("MENU_HERO_TALENTS_WHAT_ARE_TALENTS_TOOLTIP",0);
    FUN_00aff748(lVar6,uVar5);
  }
  if ((bStack_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if ((bStack_98 & 1) != 0) {
    operator_delete(pvStack_88);
  }
  if ((bStack_b0 & 1) != 0) {
    operator_delete(pvStack_a0);
  }
  if (pvStack_c0 != (void *)0x0) {
    operator_delete__(pvStack_c0);
    uStack_c8 = 0;
    pvStack_c0 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00baf778(long *param_1)

{
  FUN_00b8e854();
                    /* WARNING: Could not recover jumptable at 0x00baf7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00baf7a4(long param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | (param_2 & 1) << 1;
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_00cae8f0();
    FUN_008fa54c(local_40,uVar2);
    FUN_00affa44(local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00baf824(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00b8e83c(param_1,param_2 & 1);
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_00cae8f0();
    FUN_008fa54c(local_50,uVar2);
    FUN_00affa44(local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x1518) + 0x28f50);
    if (*(int *)(lVar6 + 0x50) != 0) {
      pbVar5 = *(byte **)(lVar6 + 0x58);
      do {
        lVar3 = FUN_00cdbb24(pbVar5);
        if (lVar3 != 0) {
          FUN_00cdd050();
          uVar2 = FUN_00cdbb18();
          if ((*pbVar5 & 1) == 0) {
            pbVar4 = pbVar5 + 1;
          }
          else {
            pbVar4 = *(byte **)(pbVar5 + 0x10);
          }
          FUN_00cdce6c(uVar2,pbVar4);
        }
        pbVar5 = pbVar5 + 0x18;
      } while (pbVar5 != (byte *)(*(long *)(lVar6 + 0x58) + (ulong)*(uint *)(lVar6 + 0x50) * 0x18));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00baf90c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_70 [16];
  float local_60;
  float local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00f02540();
  if ((uVar4 & 1) != 0) {
    FUN_00b8e860(param_1);
    FUN_00f00298(&local_5c,&local_60);
    fVar7 = local_5c - DAT_031339d4;
    if (*(float *)(param_1 + 0x44) != *(float *)(param_1 + 0x1520)) {
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x1520);
      FUN_0091ada4(param_1);
    }
    FUN_00f13f08(fVar7,local_60,param_1 + 0x368);
    fVar5 = 0.0;
    lVar1 = param_1 + 0xd28;
    FUN_00f0bc10(0,0,0x40c00000,auStack_70);
    FUN_00f0c168(lVar1,auStack_70);
    (**(code **)(*(long *)(param_1 + 0xd28) + 0x90))(lVar1);
    FUN_00f0c030(0,lVar1,0);
    FUN_00f01c20(lVar1);
    lVar2 = param_1 + 0x458;
    fVar6 = (local_60 - *(float *)(param_1 + 0x44)) - (fVar5 + fVar5);
    if ((*(float *)(param_1 + 0xd68) != *(float *)(param_1 + 0x498)) ||
       (*(float *)(param_1 + 0xd6c) != fVar6)) {
      *(float *)(param_1 + 0xd68) = *(float *)(param_1 + 0x498);
      *(float *)(param_1 + 0xd6c) = fVar6;
      FUN_0091ada4(lVar1);
    }
    fVar6 = fVar5 * -3.0;
    fVar8 = (local_60 - DAT_02be3670) + fVar6;
    FUN_00f01c20(local_60 - DAT_02be3670,fVar6,lVar1);
    FUN_00f13f08(fVar7 + -120.0,fVar8 - fVar6,lVar2);
    fVar6 = (float)FUN_00f13e54(lVar2);
    fVar7 = fVar7 * 0.5 - fVar6 * 0.5;
    if ((*(float *)(param_1 + 0x498) != fVar7) || (*(float *)(param_1 + 0x49c) != fVar5)) {
      *(float *)(param_1 + 0x498) = fVar7;
      *(float *)(param_1 + 0x49c) = fVar5;
      FUN_0091ada4(lVar2);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bafadc(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x2a4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00bafae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))();
  return;
}




void FUN_00bafaec(long param_1)

{
  FUN_00b709dc(param_1 + 0x458);
  return;
}




void FUN_00bafaf4(long *param_1)

{
  FUN_00b70c74(param_1 + 0x8b,*(undefined8 *)(param_1[0x2a3] + 0x28f50));
                    /* WARNING: Could not recover jumptable at 0x00bafb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00bafb34(void)

{
  undefined **ppuVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float local_d8;
  float local_d4;
  undefined8 local_c8;
  void *local_c0;
  undefined1 local_b8;
  byte local_b0;
  void *local_a0;
  byte local_98;
  void *local_88;
  undefined4 local_80;
  undefined4 local_74;
  byte local_70;
  void *local_60;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&fStack_4c,&local_50);
  uVar3 = FUN_0092ead0(fStack_4c,local_50);
  uVar4 = FUN_0092ea9c();
  fVar7 = fStack_4c - DAT_031339d4;
  FUN_00aff894(&local_d8);
  uVar5 = FUN_00e6ce7c("MENU_TALENTS_INFO_POPUP_TITLE",0);
  FUN_00910394(&local_c8,uVar5);
  local_d4 = (local_50 + -360.0) * 0.9;
  local_d8 = (fVar7 + -100.0) * 0.9;
  if ((uVar4 & (uVar3 ^ 0xffffffff) & 1) == 0) {
    local_d8 = 1620.0;
  }
  local_74 = 1;
  local_80 = 0xff5a3c10;
  local_b8 = 1;
  uVar5 = FUN_00cae8f0();
  lVar6 = FUN_00bafd00(uVar5,&local_d8);
  if (lVar6 != 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
    if ((uVar4 & 1) == 0) {
      ppuVar1 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
    }
    FUN_00aff718(lVar6,*ppuVar1);
    uVar3 = *(uint *)(lVar6 + 0x84);
    if ((uVar3 & 0x7f80) != 0x5900) {
      *(uint *)(lVar6 + 0x84) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
      FUN_0091ada4(lVar6);
    }
    uVar5 = FUN_00e6ce7c("MENU_HERO_TALENTS_WHAT_ARE_TALENTS_TOOLTIP",0);
    FUN_00aff748(lVar6,uVar5);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bafd00(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,param_1);
  FUN_008fce60(param_2 + 0x68,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  pvVar2 = operator_new(0x1e8);
  FUN_00aff6b0();
  *(void **)(param_2 + 0x80) = pvVar2;
  FUN_00affc48(DAT_03139948,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_2 + 0x80));
}




void FUN_00bafda0(void *param_1)

{
  FUN_00b79c74();
  operator_delete(param_1);
  return;
}




void FUN_00bafdc4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *plVar44;
  uint *puVar45;
  uint *puVar46;
  float *pfVar47;
  undefined **ppuVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  long lVar51;
  ulong uVar52;
  undefined8 uVar53;
  uint uVar54;
  float fVar55;
  float fVar56;
  code *local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  
  lVar51 = tpidr_el0;
  local_b0 = *(long *)(lVar51 + 0x28);
  FUN_00b8e630();
  FUN_00948cd8(param_1 + 0x6d);
  *param_1 = (long)&PTR_FUN_027ea330;
  param_1[0x6d] = (long)&PTR_FUN_027ea4f8;
  FUN_00b77b80();
  FUN_00f13ca4();
  plVar1 = param_1 + 0x3370;
  FUN_00f017e8(plVar1);
  *plVar1 = (long)&PTR_FUN_027c1f80;
  plVar2 = param_1 + 0x3381;
  FUN_00f017e8(plVar2);
  *plVar2 = (long)&PTR_FUN_027c1f80;
  plVar3 = param_1 + 0x3392;
  FUN_00f017e8(plVar3);
  plVar4 = param_1 + 0x33a3;
  *plVar3 = (long)&PTR_FUN_027c1f80;
  FUN_00ecfd6c(plVar4,0);
  FUN_00f0d160();
  plVar5 = param_1 + 0x3470;
  FUN_00ab6c24(plVar5,0);
  plVar6 = param_1 + 0x3728;
  FUN_00f0e4a8();
  plVar7 = param_1 + 0x3746;
  FUN_00f0e4a8();
  plVar8 = param_1 + 0x3764;
  FUN_00f0d160();
  plVar9 = param_1 + 0x378a;
  FUN_00f0e4a8();
  plVar10 = param_1 + 0x37a8;
  FUN_00f0e4a8();
  plVar11 = param_1 + 0x37c8;
  param_1[0x37c7] = 0;
  param_1[0x37c6] = 0;
  FUN_00f0e4a8();
  plVar12 = param_1 + 0x37e6;
  FUN_00f13ca4(plVar12);
  plVar13 = param_1 + 0x37fd;
  FUN_00f017e8(plVar13);
  *plVar13 = (long)&PTR_FUN_027c1f80;
  plVar14 = param_1 + 0x380e;
  FUN_00f017e8(plVar14);
  *plVar14 = (long)&PTR_FUN_027c1f80;
  plVar15 = param_1 + 0x381f;
  FUN_00f017e8(plVar15);
  plVar16 = param_1 + 0x3830;
  *plVar15 = (long)&PTR_FUN_027c1f80;
  FUN_00ecfd6c(plVar16,0);
  plVar17 = param_1 + 0x38d7;
  FUN_00f0e4a8();
  plVar18 = param_1 + 0x38f5;
  FUN_00f0e4a8();
  plVar19 = param_1 + 0x3913;
  FUN_00f0d160();
  plVar20 = param_1 + 0x3939;
  FUN_00f0e4a8();
  plVar21 = param_1 + 0x3957;
  FUN_00f0e4a8();
  plVar22 = param_1 + 0x3975;
  FUN_00f017e8(plVar22);
  plVar23 = param_1 + 0x3986;
  *plVar22 = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar24 = param_1 + 0x39d2;
  FUN_00abbf0c();
  plVar25 = param_1 + 0x3d71;
  FUN_00abbf0c();
  plVar26 = param_1 + 0x4110;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar27 = param_1 + 0x415c;
  FUN_00abbf0c();
  plVar28 = param_1 + 0x44fb;
  FUN_00abbf0c();
  plVar29 = param_1 + 0x489a;
  FUN_00f017e8(plVar29);
  plVar30 = param_1 + 0x48ab;
  *plVar29 = (long)&PTR_FUN_027c1f80;
  FUN_00ab6c24(plVar30,0);
  plVar31 = param_1 + 0x4b63;
  FUN_00ab6c24(plVar31,0);
  plVar32 = param_1 + 0x4e1b;
  FUN_00ab6c24(plVar32,0);
  plVar33 = param_1 + 0x50d3;
  FUN_00f13ca4();
  plVar34 = param_1 + 0x50ea;
  FUN_00f0d160();
  plVar35 = param_1 + 0x5110;
  FUN_00f0e4a8();
  plVar36 = param_1 + 0x512e;
  FUN_00ab6c24(plVar36,0);
  plVar37 = param_1 + 0x53e6;
  FUN_00f13ca4();
  plVar38 = param_1 + 0x53fd;
  FUN_00f0d160();
  plVar39 = param_1 + 0x5423;
  FUN_00f0e4a8();
  FUN_00b1ec58(param_1 + 0x5441,0);
  FUN_00b27c04(param_1 + 0x54cd,0);
  plVar40 = param_1 + 0x54ea;
  FUN_00f017e8(plVar40);
  *plVar40 = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  FUN_00b2a3e4(param_1 + 0x5521,0);
  plVar41 = param_1 + 0x56a1;
  FUN_00f017e8(plVar41);
  plVar42 = param_1 + 0x56b2;
  *plVar41 = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar43 = param_1 + 0x56d0;
  FUN_00f0e4a8();
  plVar44 = param_1 + 0x56ee;
  FUN_00f0d160();
  param_1[0x5715] = 0;
  param_1[0x5714] = 0;
  FUN_008fcdb8(param_1 + 0x5716,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x5719,&DAT_0320ffa8);
  *(undefined8 *)((long)param_1 + 0x2b8e6) = 0;
  param_1[0x571c] = 0;
  FUN_00f01a4c(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_00f023ec(plVar12,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x3359,1);
  FUN_00f023ec(param_1 + 0x3359,plVar4,1);
  FUN_00f023ec(plVar4,plVar3,1);
  FUN_00f023ec(plVar3,param_1 + 0x344a,1);
  FUN_00f023ec(plVar3,plVar5,1);
  FUN_00ed026c(plVar4,plVar6,1);
  FUN_00ed026c(plVar4,plVar7,1);
  FUN_00ed026c(plVar4,plVar8,1);
  FUN_00ed026c(plVar4,plVar9,1);
  FUN_00ed026c(plVar4,plVar10,1);
  FUN_00f023ec(plVar12,plVar13,1);
  FUN_00f023ec(plVar13,plVar14,1);
  FUN_00f023ec(plVar14,plVar15,1);
  FUN_00f023ec(plVar15,plVar16,1);
  FUN_00ed026c(plVar16,plVar17,1);
  FUN_00ed026c(plVar16,plVar18,1);
  FUN_00ed026c(plVar16,plVar19,1);
  FUN_00ed026c(plVar16,plVar20,1);
  FUN_00ed026c(plVar16,plVar21,1);
  FUN_00ed026c(plVar16,plVar22,1);
  FUN_00f023ec(plVar22,plVar23,1);
  FUN_00f023ec(plVar22,param_1 + 0x39ac,1);
  FUN_00f023ec(plVar22,plVar24,1);
  FUN_00f023ec(plVar22,plVar25,1);
  FUN_00f023ec(plVar22,plVar26,1);
  FUN_00f023ec(plVar22,param_1 + 0x4136,1);
  FUN_00f023ec(plVar22,plVar27,1);
  FUN_00f023ec(plVar22,plVar28,1);
  FUN_00f023ec(plVar22,plVar29,1);
  FUN_00f023ec(plVar29,plVar30,1);
  FUN_00f023ec(plVar29,plVar31,1);
  FUN_00f023ec(plVar29,plVar32,1);
  FUN_00f023ec(plVar32,plVar33,1);
  FUN_00f023ec(plVar33,plVar35,1);
  FUN_00f023ec(plVar33,plVar34,1);
  FUN_00f023ec(plVar29,plVar36,1);
  FUN_00f023ec(plVar36,plVar37,1);
  FUN_00f023ec(plVar37,plVar39,1);
  FUN_00f023ec(plVar37,plVar38,1);
  FUN_00f023ec(plVar12,plVar40,1);
  FUN_00f023ec(plVar40,param_1 + 0x54fb,1);
  FUN_00f023ec(plVar40,plVar41,1);
  FUN_00f023ec(plVar41,plVar42,1);
  FUN_00f023ec(plVar41,plVar43,1);
  FUN_00f023ec(plVar41,plVar44,1);
  FUN_00f023ec(plVar12,param_1 + 0x54cd,1);
  FUN_00f023ec(plVar12,param_1 + 0x70,1);
  uVar52 = FUN_0092ea9c();
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar11,&DAT_01bee7f6,2);
  puVar45 = (uint *)((long)param_1 + 0x1bec4);
  uVar54 = *puVar45;
  if ((uVar54 & 0x7f80) != 0x2600) {
    *puVar45 = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x2600;
    FUN_0091ada4(plVar11);
    uVar54 = *puVar45;
  }
  *puVar45 = uVar54 | 0x10;
  FUN_00f0d92c(param_1 + 0x54fb,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8,&DAT_01bee7fa);
  FUN_00ed0680(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed04d8(plVar4,0,1);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_NO_TEAM_BLURB",0);
  FUN_00f0d75c(param_1 + 0x344a,uVar53);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_TEAM",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar5,0,uVar53,&DAT_01bee7fa,&DAT_03218ef8,0);
  uVar49 = DAT_03210c64;
  local_e0 = thunk_FUN_00bb6174;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar49;
  FUN_009693a0(param_1 + 0x3471,&local_e0);
  FUN_00b0914c(plVar5,1);
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar54 = *(uint *)((long)param_1 + 0x1b9c4);
  if ((uVar54 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1b9c4) = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x3300;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_team_outline");
  uVar54 = *(uint *)((long)param_1 + 0x1bab4);
  if ((uVar54 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1bab4) = uVar54 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar7);
  }
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_INVITE_LIST_HEADER",0);
  FUN_00f0d75c(plVar8,uVar53);
  ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar52 & 1) == 0) {
    ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  }
  FUN_00f0d378(plVar8,*ppuVar48);
  uVar54 = *(uint *)((long)param_1 + 0x1bba4);
  if ((uVar54 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1bba4) = uVar54 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar54 = *(uint *)((long)param_1 + 0x1bcd4);
  if ((uVar54 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1bcd4) = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x2600;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar10,&DAT_01bee7f6,2);
  uVar54 = *(uint *)((long)param_1 + 0x1bdc4);
  if ((uVar54 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1bdc4) = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x2600;
    FUN_0091ada4(plVar10);
  }
  puVar45 = (uint *)((long)param_1 + 0x1c0f4);
  if ((*puVar45 & 0x7f80) != 0) {
    *puVar45 = *puVar45 & 0xffff807f;
    FUN_0091ada4(plVar14);
  }
  FUN_00ed04d8(plVar16,0,1);
  FUN_00f0e548(plVar20,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  puVar46 = (uint *)((long)param_1 + 0x1ca4c);
  uVar54 = *puVar46;
  if ((uVar54 & 0x7f80) != 0x2600) {
    *puVar46 = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x2600;
    FUN_0091ada4(plVar20);
    uVar54 = *puVar46;
  }
  *puVar46 = uVar54 | 0x10;
  FUN_00f0e548(plVar21,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar21,&DAT_01bee7f6,2);
  puVar46 = (uint *)((long)param_1 + 0x1cb3c);
  uVar54 = *puVar46;
  if ((uVar54 & 0x7f80) != 0x2600) {
    *puVar46 = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x2600;
    FUN_0091ada4(plVar21);
    uVar54 = *puVar46;
  }
  *puVar46 = uVar54 | 0x10;
  FUN_00f0e548(plVar17,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  puVar46 = (uint *)((long)param_1 + 0x1c73c);
  uVar54 = *puVar46;
  if ((uVar54 & 0x7f80) != 0x3300) {
    *puVar46 = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x3300;
    FUN_0091ada4(plVar17);
    uVar54 = *puVar46;
  }
  *puVar46 = uVar54 | 0x10;
  FUN_00f0e548(plVar18,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_team_outline");
  uVar54 = *(uint *)((long)param_1 + 0x1c82c);
  if ((uVar54 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1c82c) = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar18);
  }
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_TEAM_HEADER",0);
  FUN_00f0d75c(plVar19,uVar53);
  ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar52 & 1) == 0) {
    ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  }
  FUN_00f0d378(plVar19,*ppuVar48);
  uVar54 = *(uint *)((long)param_1 + 0x1c91c);
  if ((uVar54 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1c91c) = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar19);
  }
  ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar52 & 1) == 0) {
    ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d92c(plVar23,*ppuVar48,&DAT_01bee7fa);
  uVar54 = *(uint *)((long)param_1 + 0x1ccb4);
  if ((uVar54 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x1ccb4) = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0xc80;
    FUN_0091ada4(plVar23);
  }
  FUN_00e705c8(&local_e0,"1");
  FUN_00f0d75c(plVar23,&local_e0);
  if (local_d8 != (long *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
  }
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD_BLURB",0);
  FUN_00f0d75c(param_1 + 0x39ac,uVar53);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD",0);
  FUN_00abc73c(plVar24,uVar53);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_NAME_CAPTION",0);
  FUN_00ce1e34(plVar24,uVar53,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar24,1);
  FUN_00abced0(plVar24,1,3);
  FUN_00abcee4(plVar24,1,0x10);
  FUN_00abcf28(plVar24,1);
  uVar50 = DAT_03210fac;
  local_e0 = thunk_FUN_00bb62d0;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar50;
  FUN_009693a0(param_1 + 0x39d3,&local_e0);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_00abc73c(plVar25,uVar53);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_NAME_CONFIRM_CAPTION",0);
  FUN_00ce1e34(plVar25,uVar53,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar25,1);
  FUN_00abced0(plVar25,1,3);
  FUN_00abcee4(plVar25,1,0x10);
  FUN_00abcf28(plVar25,1);
  local_e0 = thunk_FUN_00bb62d0;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar50;
  FUN_009693a0(param_1 + 0x3d72,&local_e0);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_TAG_FIELD_BLURB",0);
  FUN_00f0d75c(param_1 + 0x4136,uVar53);
  ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar52 & 1) == 0) {
    ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d92c(plVar26,*ppuVar48,&DAT_01bee7fa);
  uVar54 = *(uint *)((long)param_1 + 0x20904);
  if ((uVar54 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x20904) = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0xc80;
    FUN_0091ada4(plVar26);
  }
  FUN_00e705c8(&local_e0,"2");
  FUN_00f0d75c(plVar26,&local_e0);
  if (local_d8 != (long *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
  }
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_TAG_FIELD",0);
  FUN_00abc73c(plVar27,uVar53);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_TAG_CAPTION",0);
  FUN_00ce1e34(plVar27,uVar53,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar27,1);
  FUN_00abced0(plVar27,1,2);
  FUN_00abcee4(plVar27,1,4);
  FUN_00abcf28(plVar27,1);
  local_e0 = thunk_FUN_00bb633c;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar50;
  FUN_009693a0(param_1 + 0x415d,&local_e0);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_00abc73c(plVar28,uVar53);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_TAG_CONFIRM_CAPTION",0);
  FUN_00ce1e34(plVar28,uVar53,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar28,1);
  FUN_00abced0(plVar28,1,2);
  FUN_00abcee4(plVar28,1,4);
  FUN_00abcf28(plVar28,1);
  local_e0 = thunk_FUN_00bb633c;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar50;
  FUN_009693a0(param_1 + 0x44fc,&local_e0);
  uVar53 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x438c0000,plVar30,0,uVar53,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_e0 = thunk_FUN_00bb63a8;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar49;
  FUN_009693a0(param_1 + 0x48ac,&local_e0);
  FUN_00b0914c(plVar30,1);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CREATE_TEAM",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar31,0,uVar53,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_e0 = FUN_00bb1a58;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar49;
  FUN_009693a0(param_1 + 0x4b64,&local_e0);
  FUN_00b09454(plVar31,0);
  FUN_00b0914c(plVar31,1);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_00ab703c(0x42480000,0x43480000,0x449c4000,plVar32,0,uVar53,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_e0 = FUN_00bb1a58;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_d8 = param_1;
  local_b8 = uVar49;
  FUN_009693a0(param_1 + 0x4e1c,&local_e0);
  ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar52 & 1) == 0) {
    ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d378(param_1 + 0x4eff,*ppuVar48);
  FUN_00b09144(0x3f000000,plVar32);
  if ((*(float *)(param_1 + 0x4e25) != 0.5) || (*(float *)((long)param_1 + 0x2712c) != 0.5)) {
    param_1[0x4e25] = 0x3f0000003f000000;
    FUN_0091ada4(plVar32);
  }
  FUN_00ab74fc(0,0x41f00000,plVar32);
  FUN_00ab7628(0x43133333,plVar32);
  FUN_00b0914c(plVar32,1);
  FUN_00b09454(plVar32,0);
  FUN_00f0e548(plVar35,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  pfVar47 = (float *)(param_1 + 0x5118);
  if ((*pfVar47 != 0.0) || (*(float *)((long)param_1 + 0x288c4) != 3.0)) {
    pfVar47[0] = 0.0;
    pfVar47[1] = 3.0;
    FUN_0091ada4(plVar35);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar35 + 0x28))(plVar35,&local_e0);
  pfVar47 = (float *)(param_1 + 0x5119);
  if ((*pfVar47 != 0.9) || (*(float *)((long)param_1 + 0x288cc) != 0.9)) {
    pfVar47[0] = 0.9;
    pfVar47[1] = 0.9;
    FUN_0091ada4(plVar35);
  }
  ppuVar48 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar52 & 1) == 0) {
    ppuVar48 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d378(plVar34,*ppuVar48);
  fVar55 = (float)FUN_00f0e700(plVar35);
  fVar56 = *(float *)((long)param_1 + 0x288c4) + -3.0;
  if ((*(float *)(param_1 + 0x50f2) != fVar55) || (*(float *)((long)param_1 + 0x28794) != fVar56)) {
    *(float *)(param_1 + 0x50f2) = fVar55;
    *(float *)((long)param_1 + 0x28794) = fVar56;
    FUN_0091ada4(plVar34);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar34 + 0x28))(plVar34,&local_e0);
  fVar55 = (float)FUN_00f01c54(plVar33,0,0,1,1);
  FUN_00f01c54(plVar33,0,0,1,1);
  fVar56 = fVar56 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x50db) != fVar55 * -0.5) ||
     (*(float *)((long)param_1 + 0x286dc) != fVar56)) {
    *(float *)(param_1 + 0x50db) = fVar55 * -0.5;
    *(float *)((long)param_1 + 0x286dc) = fVar56;
    FUN_0091ada4(plVar33);
  }
  local_e0 = (code *)0x0;
  (**(code **)(*plVar33 + 0x28))(plVar33,&local_e0);
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_00ab703c(0x42480000,0x43480000,0x449c4000,plVar36,0,uVar53,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_e0 = FUN_00bb1a58;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar49;
  FUN_009693a0(param_1 + 0x512f,&local_e0);
  ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar52 & 1) == 0) {
    ppuVar48 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d378(param_1 + 0x5212,*ppuVar48);
  FUN_00b09144(0x3f000000,plVar36);
  if ((*(float *)(param_1 + 0x5138) != 0.5) || (*(float *)((long)param_1 + 0x289c4) != 0.5)) {
    param_1[0x5138] = 0x3f0000003f000000;
    FUN_0091ada4(plVar36);
  }
  FUN_00ab74fc(0,0x41f00000,plVar36);
  FUN_00ab7628(0x43133333,plVar36);
  FUN_00b0914c(plVar36,1);
  FUN_00b09454(plVar36,0);
  FUN_00f0e548(plVar39,PTR_s_build___MenuPartsCommon_tga_02be3530,"ice_icon_small");
  pfVar47 = (float *)(param_1 + 0x542b);
  if ((*pfVar47 != 0.0) || (*(float *)((long)param_1 + 0x2a15c) != 3.0)) {
    pfVar47[0] = 0.0;
    pfVar47[1] = 3.0;
    FUN_0091ada4(plVar39);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar39 + 0x28))(plVar39,&local_e0);
  pfVar47 = (float *)(param_1 + 0x542c);
  if ((*pfVar47 != 0.9) || (*(float *)((long)param_1 + 0x2a164) != 0.9)) {
    pfVar47[0] = 0.9;
    pfVar47[1] = 0.9;
    FUN_0091ada4(plVar39);
  }
  ppuVar48 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar52 & 1) == 0) {
    ppuVar48 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d378(plVar38,*ppuVar48);
  fVar55 = (float)FUN_00f0e700(plVar39);
  fVar56 = *(float *)((long)param_1 + 0x2a15c) + -3.0;
  if ((*(float *)(param_1 + 0x5405) != fVar55) || (*(float *)((long)param_1 + 0x2a02c) != fVar56)) {
    *(float *)(param_1 + 0x5405) = fVar55;
    *(float *)((long)param_1 + 0x2a02c) = fVar56;
    FUN_0091ada4(plVar38);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar38 + 0x28))(plVar38,&local_e0);
  fVar55 = (float)FUN_00f01c54(plVar37,0,0,1,1);
  fVar56 = -0.5;
  FUN_00f01c54(plVar37,0,0,1,1);
  fVar56 = fVar56 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x53ee) != fVar55 * -0.5) ||
     (*(float *)((long)param_1 + 0x29f74) != fVar56)) {
    *(float *)(param_1 + 0x53ee) = fVar55 * -0.5;
    *(float *)((long)param_1 + 0x29f74) = fVar56;
    FUN_0091ada4(plVar37);
  }
  local_e0 = (code *)0x0;
  (**(code **)(*plVar37 + 0x28))(plVar37,&local_e0);
  *(uint *)((long)param_1 + 0x2a7d4) = *(uint *)((long)param_1 + 0x2a7d4) & 0xfffffffb;
  FUN_00f0e548(plVar42,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar54 = *(uint *)((long)param_1 + 0x2b614);
  if ((uVar54 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2b614) = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x2600;
    FUN_0091ada4(plVar42);
  }
  FUN_00f0e548(plVar43,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar43,&DAT_01bee7f6,2);
  uVar54 = *(uint *)((long)param_1 + 0x2b704);
  if ((uVar54 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2b704) = uVar54 & 0xffff8000 | uVar54 & 0x7f | 0x2600;
    FUN_0091ada4(plVar43);
  }
  uVar53 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_JOIN_DATE",0);
  FUN_00f0d75c(plVar44,uVar53);
  ppuVar48 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar52 & 1) == 0) {
    ppuVar48 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar44,*ppuVar48);
  uVar54 = *(uint *)((long)param_1 + 0x2b7f4);
  if ((uVar54 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b7f4) = uVar54 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar44);
  }
  local_b8 = DAT_03210f60;
  local_e0 = thunk_FUN_00bb6798;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  FUN_009693a0(param_1 + 0x5453,&local_e0);
  local_e0 = thunk_FUN_00bb6798;
  local_b8 = DAT_03210f8c;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  FUN_009693a0(param_1 + 0x5453,&local_e0);
  local_b8 = FUN_00f048a4("LeavingUserTeam");
  local_e0 = thunk_FUN_00bb6c44;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  FUN_009693a0(param_1 + 0x71,&local_e0);
  *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) & 0xfffffffb;
  FUN_00b78c34(param_1 + 0x70,0);
  FUN_00bb1a68(param_1);
  *puVar45 = *puVar45 & 0xfffffffb;
  FUN_00bb1bf4(0,param_1,1,0);
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00bb1e98,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  if (*(long *)(lVar51 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

