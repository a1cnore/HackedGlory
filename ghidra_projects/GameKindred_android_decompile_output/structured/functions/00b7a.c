// functions/00b7a — 20 functions
#include "libGameKindred.h"




void FUN_00b7a19c(long param_1)

{
  FUN_00b79b08(param_1 + -0x2c38);
  return;
}




void FUN_00b7a1a8(void *param_1)

{
  FUN_00b79b08();
  operator_delete(param_1);
  return;
}




void FUN_00b7a1cc(long param_1)

{
  FUN_00b79b08((void *)(param_1 + -0x2c38));
  operator_delete((void *)(param_1 + -0x2c38));
  return;
}




void FUN_00b7a1f8(void)

{
  return;
}




void FUN_00b7a1fc(undefined8 param_1)

{
  FUN_00a9f7e0();
  FUN_00b7a220(param_1);
  return;
}




void FUN_00b7a220(long param_1)

{
  long *plVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_58 [4];
  float local_54;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&local_54,auStack_58);
  uVar4 = FUN_0092ea9c();
  FUN_00bab200(DAT_02be3670,param_1 + 0x2c50);
  FUN_00bafadc(DAT_02be3670,param_1 + 0x22c30);
  FUN_00baeb44(DAT_02be3670,param_1 + 0x24158);
  fVar5 = DAT_02be3668;
  if ((uVar4 & 1) != 0) {
    if ((*(float *)(param_1 + 0x28fa0) != DAT_02be3668) ||
       (*(float *)(param_1 + 0x28fa4) != DAT_02be3668)) {
      *(float *)(param_1 + 0x28fa0) = DAT_02be3668;
      *(float *)(param_1 + 0x28fa4) = fVar5;
      FUN_0091ada4(param_1 + 0x28f58);
    }
  }
  plVar1 = (long *)(param_1 + 0x28f58);
  FUN_00af7d24(plVar1);
  fVar6 = local_54 - DAT_031339d4;
  fVar5 = (float)FUN_00f01c20(plVar1);
  pfVar2 = (float *)(param_1 + 0x28f98);
  fVar6 = fVar6 - fVar5;
  fVar5 = DAT_02be3670 * 0.5;
  if ((*pfVar2 != fVar6) || (*(float *)(param_1 + 0x28f9c) != fVar5)) {
    *pfVar2 = fVar6;
    *(float *)(param_1 + 0x28f9c) = fVar5;
    FUN_0091ada4(plVar1);
  }
  local_50 = 0x3f0000003f800000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_50);
  *(float *)(param_1 + 0x2a90) = *pfVar2;
  FUN_00a9e810(param_1 + 0x310);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7a3d0(long param_1,uint param_2)

{
  FUN_00a9f784(param_1,param_2 & 1);
  if ((param_2 & 1) != 0) {
    if (*(long *)(param_1 + 0x2b28) == param_1 + 0x22c30) {
      FUN_00bafaf4();
      return;
    }
  }
  return;
}




void FUN_00b7a420(long *param_1,uint param_2)

{
  short sVar1;
  
  if ((param_2 & 1) == 0) {
    (**(code **)(*param_1 + 0x178))(param_1,0,&DAT_0320ffa8);
    FUN_00b7a584(param_1);
  }
  else {
    FUN_00b7a520(param_1);
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_layer_slide.mp3",0,0);
    if ((*(byte *)(param_1 + 0x566) & 1) == 0) {
      (**(code **)(*param_1 + 0x178))(param_1,0,&DAT_0320ffa8);
    }
  }
  sVar1 = (short)param_1[0x585];
  if (sVar1 == 2) {
    FUN_00bae3a8(param_1 + 0x482b,param_2 & 1);
    return;
  }
  if (sVar1 == 1) {
    FUN_00baf824(param_1 + 0x4586,param_2 & 1);
    return;
  }
  if (sVar1 == 0) {
    FUN_00baabd8(param_1 + 0x58a,param_2 & 1);
    return;
  }
  return;
}




void FUN_00b7a520(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_00a9f8e4(param_1,1,param_1 + 0x22c30);
  uVar1 = FUN_0093d938();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00e6ce7c("MENU_HERO_TAB_NAME_TALENTS",0);
    FUN_00a9f888(param_1,1,uVar2,param_1 + 0x22c30);
  }
  FUN_00b7a220(param_1);
  return;
}




void FUN_00b7a584(long param_1)

{
  FUN_00951534(*(long *)(param_1 + 0x28f50) + 0x50,0);
  FUN_00bafaec(param_1 + 0x22c30);
  FUN_00badf0c(param_1 + 0x24158);
  return;
}




void FUN_00b7a5d4(long param_1,uint param_2)

{
  short sVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  if (((param_2 & 1) != 0) && (uVar2 = FUN_0093d7e8(), (uVar2 & 1) != 0)) {
    uVar3 = FUN_009580b8();
    pbVar4 = *(byte **)(param_1 + 0x28f50);
    if ((*pbVar4 & 1) == 0) {
      pbVar4 = pbVar4 + 1;
    }
    else {
      pbVar4 = *(byte **)(pbVar4 + 0x10);
    }
    uVar2 = FUN_00961804(uVar3,pbVar4,1);
    if ((uVar2 & 1) == 0) {
      FUN_00b7a6ac(param_1);
    }
  }
  FUN_00b7a82c(param_1);
  sVar1 = *(short *)(param_1 + 0x2c28);
  if (sVar1 == 2) {
    FUN_00baeb0c(param_1 + 0x24158,param_2 & 1);
    return;
  }
  if (sVar1 == 1) {
    FUN_00baf824(param_1 + 0x22c30,param_2 & 1);
    return;
  }
  if (sVar1 == 0) {
    FUN_00baadcc(param_1 + 0x2c50,param_2 & 1);
    return;
  }
  return;
}




void FUN_00b7a6ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_148 [16];
  void *local_138;
  undefined **local_130;
  undefined1 auStack_128 [40];
  long local_100;
  undefined8 local_e0;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  undefined8 local_a0;
  undefined4 local_88;
  ulong local_80;
  void *local_78;
  byte local_70;
  undefined7 uStack_6f;
  void *local_60;
  undefined4 local_58;
  undefined8 local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0093d7e8();
  if ((uVar2 & 1) != 0) {
    FUN_00b26098(&local_130);
    FUN_008fa54c(local_148,"gift_icon_small_question");
    FUN_00e70570(&local_80,&DAT_0320ffa8);
    FUN_008fcdb8(&local_70,local_148);
    local_58 = 3;
    local_54 = 0x41a00000;
    FUN_009c82b4(auStack_128,&local_80);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
    if ((local_148[0] & 1) != 0) {
      operator_delete(local_138);
    }
    local_100 = param_1 + 0x2a7b0;
    local_88 = 0;
    local_a0 = 0x425400003f000000;
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(&local_80,"giftingBreadCrumb");
    FUN_009badc0(uVar3,&local_80,&local_130);
    if ((local_80 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_6f,local_70));
    }
    local_130 = &PTR_FUN_027de7f0;
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
      local_e0 = 0;
      local_d8 = (void *)0x0;
    }
    FUN_009c8464(auStack_128,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7a82c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  lVar1 = FUN_00969248();
  if (*(int *)(lVar1 + 0x38) < 1) {
    FUN_00a9ef90(param_1 + 0x310,1);
    *(uint *)(param_1 + 0x2a834) = *(uint *)(param_1 + 0x2a834) | 0x10;
    uVar3 = *(uint *)(param_1 + 0x29094) | 0x10;
    goto LAB_00b7a8f4;
  }
  FUN_00a9fa04(param_1,1,0);
  lVar1 = FUN_00969248();
  if (*(int *)(lVar1 + 0x38) == 2) {
LAB_00b7a87c:
    FUN_00a9fa04(param_1,0,1);
    uVar2 = 0;
LAB_00b7a898:
    FUN_00a9fa04(param_1,2,uVar2);
  }
  else {
    lVar1 = FUN_00969248();
    if (*(int *)(lVar1 + 0x38) == 4) goto LAB_00b7a87c;
    lVar1 = FUN_00969248();
    if (*(int *)(lVar1 + 0x38) == 10) {
      FUN_00a9fa04(param_1,0,0);
      uVar2 = 1;
      goto LAB_00b7a898;
    }
  }
  *(uint *)(param_1 + 0x2a834) = *(uint *)(param_1 + 0x2a834) & 0xffffffef;
  uVar3 = *(uint *)(param_1 + 0x29094) & 0xffffffef;
LAB_00b7a8f4:
  *(uint *)(param_1 + 0x29094) = uVar3;
  return;
}




void FUN_00b7a934(long param_1,short param_2)

{
  bool bVar1;
  
  FUN_00a9f964();
  bVar1 = (*(int *)(param_1 + 0x241dc) << 1) >> 0x10 == (int)param_2;
  *(uint *)(param_1 + 0x29094) =
       *(uint *)(param_1 + 0x29094) & 0xfffffff8 |
       *(uint *)(param_1 + 0x29094) & 3 | (uint)!bVar1 << 2;
  FUN_00af7d24(param_1 + 0x28f58);
  FUN_00af7ba0(param_1 + 0x28f58,bVar1);
  FUN_00b7a220(param_1);
  return;
}




void FUN_00b7a9b4(long *param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  size_t __n;
  ulong *puVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  ulong local_78 [2];
  void *local_68;
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_008fcdb8(local_60);
  local_78[1] = 0;
  local_68 = (void *)0x0;
  local_78[0] = 0;
  __n = *(size_t *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    __n = (ulong)(*param_2 >> 1);
  }
  if (0 < (long)__n) {
    pbVar1 = pbVar3 + __n;
    pbVar6 = pbVar3;
    while (pbVar6 = memchr(pbVar6,0x2f,__n), pbVar6 != (byte *)0x0) {
      if (*pbVar6 == 0x2f) {
        if ((pbVar6 != pbVar1) && (lVar11 = (long)pbVar6 - (long)pbVar3, lVar11 != -1)) {
          FUN_0093ddb0(local_a8,param_2,0,lVar11,param_2);
          FUN_008fcdb8(local_90,local_a8);
          FUN_008fce60(local_60,local_90);
          if ((local_90[0] & 1) != 0) {
            operator_delete(local_80);
          }
          if ((local_a8[0] & 1) != 0) {
            operator_delete(local_98);
          }
          FUN_0093ddb0(local_a8,param_2,lVar11 + 1,0xffffffffffffffff,param_2);
          FUN_008fcdb8(local_90,local_a8);
          FUN_008fce60(local_78,local_90);
          if ((local_90[0] & 1) != 0) {
            operator_delete(local_80);
          }
          if ((local_a8[0] & 1) != 0) {
            operator_delete(local_98);
          }
        }
        break;
      }
      pbVar6 = pbVar6 + 1;
      __n = (long)pbVar1 - (long)pbVar6;
      if ((long)__n < 1) break;
    }
  }
  uVar10 = (ulong)(local_60[0] >> 1);
  uVar2 = uVar10;
  if ((local_60[0] & 1) != 0) {
    uVar2 = local_58;
  }
  if (uVar2 == 8) {
    iVar5 = FUN_0090d610(local_60,0,0xffffffffffffffff,"Overview",8);
    if (iVar5 != 0) {
      uVar10 = (ulong)(local_60[0] >> 1);
      goto LAB_00b7ab4c;
    }
    uVar7 = 0;
    pcVar9 = *(code **)(*param_1 + 0x178);
    puVar8 = (ulong *)&DAT_0320ffa8;
  }
  else {
LAB_00b7ab4c:
    uVar2 = uVar10;
    if ((local_60[0] & 1) != 0) {
      uVar2 = local_58;
    }
    if (uVar2 == 7) {
      iVar5 = FUN_0090d610(local_60,0,0xffffffffffffffff,"Talents",7);
      if (iVar5 == 0) {
        uVar7 = 1;
        pcVar9 = *(code **)(*param_1 + 0x178);
        puVar8 = (ulong *)&DAT_0320ffa8;
        goto LAB_00b7ac04;
      }
      uVar10 = (ulong)(local_60[0] >> 1);
    }
    if ((local_60[0] & 1) != 0) {
      uVar10 = local_58;
    }
    if ((uVar10 != 5) || (iVar5 = FUN_0090d610(local_60,0,0xffffffffffffffff,"Skins",5), iVar5 != 0)
       ) goto LAB_00b7ac08;
    uVar7 = 2;
    puVar8 = local_78;
    pcVar9 = *(code **)(*param_1 + 0x178);
  }
LAB_00b7ac04:
  (*pcVar9)(param_1,uVar7,puVar8);
LAB_00b7ac08:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7ac54(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28f58;
  lVar2 = FUN_009580b8();
  FUN_00af82b8(lVar1,*(undefined4 *)(lVar2 + 0x5450));
  lVar2 = FUN_009580b8();
  FUN_00af8228(lVar1,*(undefined4 *)(lVar2 + 0x5454));
  lVar2 = FUN_009580b8();
  FUN_00af834c(lVar1,*(undefined4 *)(lVar2 + 0x545c));
  FUN_00b7a220(param_1);
  return;
}




void FUN_00b7acbc(long param_1)

{
  FUN_00b7ac54(param_1 + -0x2c38);
  return;
}




void FUN_00b7acc8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte local_170 [16];
  void *local_160;
  undefined1 auStack_158 [8];
  uint local_150;
  long local_148;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [112];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  plVar2 = (long *)(param_1 + 0x28f50);
  if (*plVar2 != 0) {
    FUN_00976588(auStack_158);
    uVar5 = FUN_0096bf64(*plVar2,auStack_158);
    if (((uVar5 & 1) != 0) && (local_150 != 0)) {
      lVar7 = 0;
      uVar5 = 0;
      do {
        lVar3 = local_148;
        lVar1 = local_148 + lVar7 + 0x30;
        FUN_008fa54c(local_170,"silver");
        uVar6 = FUN_00cab9fc(lVar1,local_170);
        if ((local_170[0] & 1) != 0) {
          operator_delete(local_160);
        }
        if ((uVar6 & 1) == 0) {
          FUN_008fa54c(local_170,"gold");
          uVar6 = FUN_00cab9fc(lVar1,local_170);
          if ((local_170[0] & 1) != 0) {
            operator_delete(local_160);
          }
          if ((uVar6 & 1) != 0) {
            lVar3 = lVar3 + lVar7;
            FUN_008fce60(*plVar2 + 0x80,lVar3 + 0x60);
            *(undefined4 *)(*plVar2 + 0x98) = *(undefined4 *)(lVar3 + 0x30);
          }
        }
        else {
          lVar3 = lVar3 + lVar7;
          FUN_008fce60(*plVar2 + 0x60,lVar3 + 0x60);
          *(undefined4 *)(*plVar2 + 0x78) = *(undefined4 *)(lVar3 + 0x34);
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0xa0;
      } while (uVar5 < local_150);
    }
    FUN_008fce60(*plVar2 + 0xa0,auStack_110);
    FUN_008fce60(*plVar2 + 0xb8,auStack_f8);
    FUN_008fce60(*plVar2 + 0xd0,auStack_e0);
    FUN_00babc78(param_1 + 0x2c50);
    FUN_00bafaf4(param_1 + 0x22c30);
    FUN_00bae480(param_1 + 0x24158);
    FUN_009767f4(auStack_158);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7aea4(undefined8 param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  long lVar8;
  byte local_2f8 [16];
  void *local_2e8;
  ulong local_2e0 [2];
  void *local_2d0;
  ulong local_2c8 [2];
  void *local_2b8;
  ulong local_2b0 [2];
  void *local_2a0;
  undefined1 auStack_298 [8];
  uint local_290;
  long local_288;
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [112];
  undefined **local_1b0;
  undefined1 auStack_1a8 [16];
  byte local_198 [16];
  void *local_188;
  ulong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  byte local_150 [16];
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  undefined4 auStack_118 [2];
  undefined **local_110;
  undefined1 auStack_108 [16];
  byte local_f8 [16];
  void *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0 [16];
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined4 local_78 [2];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_00975578(&local_110);
  FUN_00975578(&local_1b0);
  local_2b0[0] = 0;
  local_2b0[1] = 0;
  local_2a0 = (void *)0x0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  local_2b8 = (void *)0x0;
  local_2e0[0] = 0;
  local_2e0[1] = 0;
  local_2d0 = (void *)0x0;
  FUN_00976588(auStack_298);
  uVar4 = FUN_0096bf64(param_2,auStack_298);
  if ((uVar4 & 1) != 0) {
    if (local_290 != 0) {
      lVar8 = 0;
      uVar4 = 0;
      do {
        lVar3 = local_288;
        lVar1 = local_288 + lVar8 + 0x30;
        FUN_008fa54c(local_2f8,"silver");
        uVar5 = FUN_00cab9fc(lVar1,local_2f8);
        if ((local_2f8[0] & 1) != 0) {
          operator_delete(local_2e8);
        }
        if ((uVar5 & 1) == 0) {
          FUN_008fa54c(local_2f8,"gold");
          uVar5 = FUN_00cab9fc(lVar1,local_2f8);
          if ((local_2f8[0] & 1) != 0) {
            operator_delete(local_2e8);
          }
          if ((uVar5 & 1) != 0) {
            lVar1 = lVar3 + lVar8;
            FUN_0097b658(auStack_1a8,lVar1 + 8);
            FUN_008fce60(local_198,lVar1 + 0x18);
            uStack_178 = *(undefined8 *)(lVar1 + 0x38);
            local_180 = *(ulong *)(lVar1 + 0x30);
            uStack_168 = *(undefined8 *)(lVar1 + 0x48);
            local_170 = *(undefined8 *)(lVar1 + 0x40);
            uStack_158 = *(undefined8 *)(lVar1 + 0x58);
            local_160 = *(undefined8 *)(lVar1 + 0x50);
            FUN_008fce60(local_150,lVar1 + 0x60);
            FUN_00910394(&local_138,lVar1 + 0x78);
            FUN_00910394(&local_128,lVar1 + 0x88);
            puVar6 = auStack_118;
            goto LAB_00b7b0c8;
          }
        }
        else {
          lVar1 = lVar3 + lVar8;
          FUN_0097b658(auStack_108,lVar1 + 8);
          FUN_008fce60(local_f8,lVar1 + 0x18);
          uStack_d8 = *(undefined8 *)(lVar1 + 0x38);
          local_e0 = *(undefined8 *)(lVar1 + 0x30);
          uStack_c8 = *(undefined8 *)(lVar1 + 0x48);
          local_d0 = *(undefined8 *)(lVar1 + 0x40);
          uStack_b8 = *(undefined8 *)(lVar1 + 0x58);
          local_c0 = *(undefined8 *)(lVar1 + 0x50);
          FUN_008fce60(local_b0,lVar1 + 0x60);
          FUN_00910394(&local_98,lVar1 + 0x78);
          FUN_00910394(&local_88,lVar1 + 0x88);
          puVar6 = local_78;
LAB_00b7b0c8:
          *puVar6 = *(undefined4 *)(lVar3 + lVar8 + 0x98);
        }
        uVar4 = uVar4 + 1;
        lVar8 = lVar8 + 0xa0;
      } while (uVar4 < local_290);
    }
    FUN_008fce60(local_2b0,auStack_250);
    FUN_008fce60(local_2c8,auStack_238);
    FUN_008fce60(local_2e0,auStack_220);
  }
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  FUN_00b7b284(param_1,pbVar7,local_b0,local_e0._4_4_,local_150,local_180 & 0xffffffff,local_2b0,
               local_2c8,local_2e0);
  FUN_009767f4(auStack_298);
  if ((local_2e0[0] & 1) != 0) {
    operator_delete(local_2d0);
  }
  if ((local_2c8[0] & 1) != 0) {
    operator_delete(local_2b8);
  }
  if ((local_2b0[0] & 1) != 0) {
    operator_delete(local_2a0);
  }
  local_1b0 = &PTR_FUN_027bca90;
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
    local_120 = (void *)0x0;
    local_128 = 0;
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
    local_130 = (void *)0x0;
    local_138 = 0;
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  FUN_00977ea0(auStack_1a8,1);
  local_110 = &PTR_FUN_027bca90;
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  FUN_00977ea0(auStack_108,1);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b7a520(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_00a9f8e4(param_1,1,param_1 + 0x22c30);
  uVar1 = FUN_0093d938();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00e6ce7c("MENU_HERO_TAB_NAME_TALENTS",0);
    FUN_00a9f888(param_1,1,uVar2,param_1 + 0x22c30);
  }
  FUN_00b7a220(param_1);
  return;
}

