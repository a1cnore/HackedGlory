// functions/1003b — 350 functions
#include "GameKindred.h"




void FUN_1003b004c(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1003af01c(param_1,0);
  uVar2 = 10;
  if (iVar1 == 0) {
    uVar2 = 8;
  }
  FUN_1003dfe60(param_1,4,uVar2,0x19,0);
  return;
}




void FUN_1003b0090(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1003af01c(param_1,0);
  uVar2 = 0xb;
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  FUN_1003dfe60(param_1,4,uVar2,0x19,0);
  return;
}




void FUN_1003b00d4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1003af01c(param_2,0);
  uVar2 = 0xb;
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  uVar2 = FUN_1003dfe60(param_2,4,uVar2,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_1003b0128(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,7,0x19,0);
  return;
}




void FUN_1003b013c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,2,0x19,0);
  return;
}




undefined8 FUN_1003b0150(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined4 *)(lVar2 + 0x18) = param_1;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar1);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar1);
  return local_40;
}




void FUN_1003b01e8(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_s__Item_MinionCandy__10185ab40;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  lVar4 = **(long **)(lVar3 + 0x1a8);
  if ((*(byte *)(param_2 + 0x2f5) >> 1 & 1) == 0) {
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_1003b024c;
    }
  }
  else {
    uVar5 = 0;
    if ((lVar4 == 0) || (lVar4 = (*(long **)(lVar3 + 0x1a8))[1], lVar4 == 0)) goto LAB_1003b024c;
  }
  uVar5 = *(undefined4 *)(lVar4 + 8);
LAB_1003b024c:
  *param_3 = uVar5;
  return;
}




void FUN_1003b0260(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  undefined **local_d0;
  long local_c8;
  byte local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined1 local_64;
  undefined1 auStack_60 [8];
  long local_58;
  
  puVar1 = PTR_s__Item_MinionCandy__10185ab40;
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,puVar1,0);
  uVar2 = DAT_101d2c7c8;
  local_c8 = 0;
  local_bc = 0;
  local_ac = 0;
  local_b4 = 0;
  local_a4 = 0;
  uStack_98 = 0xbf800000c0000000;
  local_a0 = 0xbf800000bf800000;
  local_90 = 0x3f800000;
  local_8c = 0xff;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  uStack_80 = 0xffffffff00000000;
  local_c0 = 1;
  lVar6 = FUN_1003e10f0();
  local_d0 = &PTR_FUN_1014999d0;
  local_74 = uVar2;
  uStack_70 = 0xffffffff;
  local_64 = 0;
  plVar10 = (long *)(param_1 + 0x10);
  lVar7 = *plVar10;
  local_c8 = lVar7;
  if (lVar7 == 0) {
    local_c8 = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(local_c8 + 8) + 0xa4) == DAT_10184dd68) break;
      local_c8 = *(long *)(local_c8 + 0x10);
    } while (local_c8 != 0);
  }
  local_88 = CONCAT44(0x210,(undefined4)local_88);
  local_6c = 0x100000000;
  while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dd68) {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  fVar11 = 0.0;
  if (**(long **)(lVar5 + 0x1a8) != 0) {
    lVar8 = 0;
    do {
      lVar9 = *(long *)((long)*(long **)(lVar5 + 0x1a8) + lVar8 + 8);
      iVar3 = (int)lVar8;
      lVar8 = lVar8 + 8;
    } while (lVar9 != 0 && iVar3 != 8);
    if (lVar9 != 0) {
      fVar11 = *(float *)(lVar9 + 8);
    }
  }
  local_bc = CONCAT44(*(float *)(lVar7 + 0x2ec) + *(float *)(lVar7 + 0x254),
                      *(undefined4 *)(lVar7 + 0x250));
  local_b4 = CONCAT44(local_b4._4_4_,*(undefined4 *)(lVar7 + 600));
  local_a0 = CONCAT44(local_a0._4_4_,fVar11 * fVar11);
  local_78._0_3_ = CONCAT12(*(undefined1 *)(lVar6 + 0xe5),0xc110) | 0x140000;
  iVar3 = FUN_1003a6ce4(&local_d0,auStack_60,1,0);
  uVar2 = DAT_101d2c7c8;
  if (iVar3 == 0) {
    local_d0 = &PTR_FUN_101499960;
    local_c8 = 0;
    local_bc = 0;
    local_ac = 0;
    local_b4 = 0;
    local_a4 = 0;
    uStack_98 = 0xbf800000c0000000;
    local_a0 = 0xbf800000bf800000;
    local_90 = 0x3f800000;
    local_8c = 0xff;
    uStack_80 = 0xffffffff00000000;
    local_88 = 0xffffffff00000000;
    local_78._0_3_ = CONCAT12(local_78[2],0x4100) & 0xe1ffff | 0x140000;
    local_c0 = local_c0 & 0xfc | 1;
    lVar6 = FUN_1003e10f0();
    local_d0 = &PTR_FUN_1014999d0;
    local_74 = uVar2;
    uStack_70 = 0xffffffff;
    local_64 = 0;
    local_8c = 0;
    local_88 = CONCAT44(local_88._4_4_,0x200);
    local_6c = 0x100000000;
    do {
      lVar7 = *plVar10;
      plVar10 = (long *)(lVar7 + 0x10);
    } while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dd68);
    fVar11 = 0.0;
    if (**(long **)(lVar5 + 0x1a8) != 0) {
      lVar8 = 0;
      do {
        lVar9 = *(long *)((long)*(long **)(lVar5 + 0x1a8) + lVar8 + 8);
        iVar3 = (int)lVar8;
        lVar8 = lVar8 + 8;
      } while (lVar9 != 0 && iVar3 != 8);
      if (lVar9 != 0) {
        fVar11 = *(float *)(lVar9 + 8);
      }
    }
    local_bc = CONCAT44(*(float *)(lVar7 + 0x2ec) + *(float *)(lVar7 + 0x254),
                        *(undefined4 *)(lVar7 + 0x250));
    local_b4 = CONCAT44(local_b4._4_4_,*(undefined4 *)(lVar7 + 600));
    local_a0 = CONCAT44(local_a0._4_4_,fVar11 * fVar11);
    local_78._0_3_ =
         CONCAT12((byte)(((uint3)local_78._0_3_ & 0xfffeff8f) >> 0x10) | *(byte *)(lVar6 + 0xe5),
                  (short)((uint3)local_78._0_3_ & 0xfffeff8f)) | 0x8010;
    iVar3 = FUN_1003a6ce4(&local_d0,auStack_60,1,0);
    lVar5 = (ulong)(iVar3 == 0) << 10;
  }
  else {
    lVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar5);
}




void FUN_1003b05e8(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10045cc04();
  *puVar1 = &PTR_FUN_1014999d0;
  *(undefined4 *)((long)puVar1 + 0x5c) = param_2;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined1 *)((long)puVar1 + 0x6c) = 0;
  return;
}




void FUN_1003b0624(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}




void FUN_1003b062c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}




void FUN_1003b0634(void)

{
  return;
}




void FUN_1003b0638(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x44) = param_2;
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xffdf | 0x10;
  return;
}




bool FUN_1003b0658(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(lVar1 + 0x250) - *(float *)(param_1 + 0x1d8);
  fVar3 = (*(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254)) - *(float *)(param_1 + 0x1dc);
  fVar4 = *(float *)(lVar1 + 600) - *(float *)(param_1 + 0x1e0);
  return fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 < 12.0;
}




void FUN_1003b06c4(void)

{
  FUN_1003df6c8(PTR_s__Item_FountainOfRenewal__10185ba58,1,1);
  return;
}




void FUN_1003b06d8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_s__Item_ScoutTrap__10185ab90;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  if (**(long **)(lVar3 + 0x1a8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  *param_3 = uVar4;
  *param_4 = 1;
  *param_5 = 3;
  return;
}




void FUN_1003b074c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  
  puVar1 = PTR_s__Item_ScoutTrap__10185ab90;
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,puVar1,0);
  plVar12 = *(long **)(lVar5 + 0x1a8);
  lVar5 = *plVar12;
  fVar13 = 0.0;
  if ((lVar5 != 0) && (plVar12[1] != 0)) {
    fVar13 = *(float *)(plVar12[1] + 8);
  }
  lVar11 = *(long *)(param_2 + 0x20);
  lVar6 = *(long *)(lVar11 + 0x40);
  fVar14 = *(float *)(lVar6 + 0xd8) + *(float *)(lVar6 + 0x18c) * (*(float *)(lVar6 + 0x2f4) + 1.0);
  NEON_fminnm(fVar14 + fVar14 * *(float *)(lVar6 + 0x240),DAT_101e943c0);
  fVar13 = *(float *)(param_2 + 0x30) + fVar13 * (DAT_101e94300 + -1.0);
  *(float *)(param_2 + 0x30) = fVar13;
  lVar6 = *(long *)(lVar11 + 0x18);
  do {
    if (lVar6 == 0) {
LAB_1003b0874:
      uVar4 = FUN_1010a1520();
      plVar12 = (long *)FUN_1010a0e0c(uVar4,0,"*KindredBuffs*",0);
      puVar8 = (undefined8 *)*plVar12;
      puVar7 = (undefined8 *)*puVar8;
      if (puVar7 != (undefined8 *)0x0) {
        lVar5 = 0;
        do {
          iVar3 = _strcmp((char *)*puVar7,PTR_s_Buff_Item_HitByScoutTrap_10185ab98);
          iVar2 = DAT_1018589d8;
          if (iVar3 == 0) {
            if ((int)lVar5 == -1) {
              return;
            }
            if (lVar11 == 0) {
              return;
            }
            DAT_1018589d8 = DAT_1018589d8 + 1;
            FUN_1003b093c(0x40800000,0,0,lVar11,lVar11,
                          *(undefined8 *)(*plVar12 + (long)(int)lVar5 * 8),iVar2,1,0,0);
            return;
          }
          puVar7 = (undefined8 *)puVar8[lVar5 + 1];
          lVar5 = lVar5 + 1;
        } while (puVar7 != (undefined8 *)0x0);
      }
      return;
    }
    if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184daa8) {
      iVar2 = FUN_1003a34a4(lVar6,DAT_101d2c7fc);
      if (iVar2 != 0) {
        iVar3 = 0;
        do {
          fVar14 = 0.0;
          if (lVar5 != 0) {
            lVar6 = 0;
            do {
              lVar9 = *(long *)((long)plVar12 + lVar6 + 8);
              iVar10 = (int)lVar6;
              lVar6 = lVar6 + 8;
            } while (lVar9 != 0 && iVar10 != 8);
            if (lVar9 != 0) {
              fVar14 = *(float *)(lVar9 + 8);
            }
          }
          fVar13 = fVar13 * fVar14;
          iVar3 = iVar3 + 1;
        } while (iVar3 != iVar2);
        *(float *)(param_2 + 0x30) = fVar13;
      }
      goto LAB_1003b0874;
    }
    lVar6 = *(long *)(lVar6 + 0x20);
  } while( true );
}




void FUN_1003b093c(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 local_98;
  long lStack_90;
  long local_88;
  int local_80;
  undefined4 local_74;
  
  puVar2 = PTR_s_onBeforeReceiveBuffName_10185d5f0;
  if (param_5 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_5 + 0x260);
  }
  lVar4 = *(long *)(param_4 + 0x60);
  lVar7 = *(long *)(lVar4 + 0x28);
  local_74 = param_1;
  if (lVar7 != 0) {
    do {
      FUN_10046a664(lVar7,puVar2,uVar6,&local_74,param_6);
      lVar7 = *(long *)(lVar7 + 0x350);
    } while (lVar7 != 0);
    lVar4 = *(long *)(param_4 + 0x60);
  }
  iVar3 = FUN_100465520(local_74,param_2,param_3,lVar4,uVar6,param_6,param_7,param_8,param_9,
                        param_10);
  if (iVar3 != -1) {
    local_98 = param_6;
    lStack_90 = param_5;
    local_88 = param_4;
    local_80 = iVar3;
    if ((param_5 != 0) && (lVar4 = *(long *)(param_5 + 0x18), lVar4 != 0)) {
LAB_1003b0a20:
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8) goto code_r0x0001003b0a30;
      for (lVar4 = *(long *)(lVar4 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
        FUN_10046a178(lVar4,&local_98);
      }
    }
LAB_1003b0a58:
    lVar4 = *(long *)(*(long *)(param_4 + 0x60) + 0x28);
    if (lVar4 != 0) {
      do {
        FUN_10046a1e0(lVar4,&local_98);
        lVar4 = *(long *)(lVar4 + 0x350);
      } while (lVar4 != 0);
      if (param_4 == 0) {
        return;
      }
    }
  }
  uVar5 = 0xffff0000;
  lVar4 = param_4;
LAB_1003b0a84:
  do {
    do {
      lVar7 = lVar4;
      if ((lVar7 != param_4) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar7 + 8),0x1eda0467), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar7);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar4 = *(long *)(lVar7 + 0x18), lVar4 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1003b0a84;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar4 = *(long *)(lVar7 + 0x20), lVar4 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar7 == 0) {
        return;
      }
    }
  } while( true );
code_r0x0001003b0a30:
  lVar4 = *(long *)(lVar4 + 0x20);
  if (lVar4 == 0) goto LAB_1003b0a58;
  goto LAB_1003b0a20;
}




void FUN_1003b0b48(long param_1,undefined8 param_2,float *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  
  puVar1 = PTR_s__Item_WarTreads__10185aba8;
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,puVar1,0);
  fVar10 = 0.0;
  if ((**(long **)(lVar4 + 0x1a8) != 0) && (lVar5 = (*(long **)(lVar4 + 0x1a8))[1], lVar5 != 0)) {
    fVar10 = *(float *)(lVar5 + 8);
  }
  *param_3 = fVar10;
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 != 0) {
    iVar9 = 0;
    uVar8 = 0;
    do {
      uVar2 = FUN_10045fb10(lVar5);
      if (uVar2 <= uVar8) break;
      lVar5 = FUN_10045fa7c(lVar5,uVar8);
      if (lVar5 != 0) {
        iVar9 = (*(uint *)(lVar5 + 0x2f4) & 1) + iVar9;
      }
      uVar8 = uVar8 + 1;
      lVar5 = *(long *)(param_1 + 0x60);
    } while (lVar5 != 0);
    if (iVar9 != 0 && iVar9 - 1U != 0) {
      fVar10 = 0.0;
      if (**(long **)(lVar4 + 0x1a8) != 0) {
        lVar5 = 0;
        do {
          lVar7 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar5 + 8);
          iVar6 = (int)lVar5;
          lVar5 = lVar5 + 8;
        } while (lVar7 != 0 && iVar6 != 8);
        if (lVar7 != 0) {
          fVar10 = *(float *)(lVar7 + 8);
        }
      }
      *param_3 = *param_3 + (float)(iVar9 - 1U) * fVar10;
    }
  }
  return;
}




void FUN_1003b0c4c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_s__Item_Shiversteel__10185abc8;
  uVar2 = FUN_1010a1520();
  FUN_1010a0e0c(uVar2,0,puVar1,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b0c7c(long param_1,undefined8 *param_2,float *param_3)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_160;
  undefined4 local_158;
  float local_150 [3];
  float local_144;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  undefined4 local_128;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  undefined4 local_f8;
  float local_f0;
  undefined4 uStack_ec;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  
  lVar5 = param_1;
  do {
    lVar5 = *(long *)(lVar5 + 0x10);
  } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68);
  local_80 = *(float *)(lVar5 + 0x250);
  uVar10 = (ulong)(uint)local_80;
  fVar12 = *(float *)(lVar5 + 600);
  fStack_7c = *(float *)(lVar5 + 0x2ec) + *(float *)(lVar5 + 0x254);
  uVar11 = (ulong)(uint)fStack_7c;
  fVar7 = *(float *)(param_1 + 0x1d8) - local_80;
  fVar6 = *(float *)(param_1 + 0x1e0) - fVar12;
  *param_3 = fVar7;
  param_3[2] = fVar6;
  param_3[1] = 0.0;
  fVar9 = fVar7 * fVar7 + fVar6 * fVar6;
  if (1e-08 <= fVar9) {
    fVar9 = SQRT(fVar9);
    *param_3 = fVar7 / fVar9;
    param_3[1] = 0.0;
    param_3[2] = fVar6 / fVar9;
  }
  else {
    param_3[2] = 0.0;
    param_3[0] = 1.0;
    param_3[1] = 0.0;
  }
  local_90._0_4_ = *(float *)(param_1 + 0x1d8);
  local_90._4_4_ = *(float *)(param_1 + 0x1dc);
  local_88 = *(float *)(param_1 + 0x1e0);
  uVar13 = 0;
  uVar14 = 0;
  fVar6 = local_80 - (float)local_90;
  fVar9 = fStack_7c - local_90._4_4_;
  fVar8 = fVar12 - local_88;
  local_78 = fVar12;
  fVar7 = (float)FUN_10045f34c(param_1 + 0x220,param_1);
  if (fVar6 * fVar6 + fVar9 * fVar9 + fVar8 * fVar8 <= (fVar7 + 2.0) * (fVar7 + 2.0)) {
    local_b0 = 0x412000003e800000;
    local_a8 = 0x3e800000;
    for (lVar4 = *(long *)(lVar5 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) {
        bVar2 = *(byte *)(lVar4 + 0x818) >> 3 & 3;
        goto LAB_1003b0e08;
      }
    }
    bVar2 = 0;
LAB_1003b0e08:
    iVar3 = FUN_10054e044(bVar2,&local_90,&local_a0,&local_b0);
    if (iVar3 == 0) {
      local_d0 = 0x412000003e19999a;
      local_c8 = 0x3e19999a;
      local_e0 = CONCAT44(local_90._4_4_ + (float)((ulong)*(undefined8 *)param_3 >> 0x20) * 0.8,
                          (float)local_90 + (float)*(undefined8 *)param_3 * 0.8);
      local_d8 = local_88 + param_3[2] * 0.8;
      for (lVar4 = *(long *)(lVar5 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
        if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) {
          bVar2 = *(byte *)(lVar4 + 0x818) >> 3 & 3;
          goto LAB_1003b0ed0;
        }
      }
      bVar2 = 0;
LAB_1003b0ed0:
      iVar3 = FUN_10054e044(bVar2,&local_e0,&local_c0,&local_d0);
      if (iVar3 != 0) {
        *param_2 = CONCAT44(fStack_bc,local_c0);
        *(float *)(param_2 + 1) = local_b8;
        for (lVar5 = *(long *)(lVar5 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
          if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == ram0x0001018672a0) {
            bVar2 = *(byte *)(lVar5 + 0x818) >> 3 & 3;
            goto LAB_1003b0f90;
          }
        }
        bVar2 = 0;
LAB_1003b0f90:
        FUN_10054e09c(bVar2,&local_c0,&local_80,&local_f0,0,0,in_x6,in_x7,uVar11,uVar13,uVar10,
                      uVar14);
        fVar6 = (local_c0 - local_80) * (local_c0 - local_80) +
                (fStack_bc - fStack_7c) * (fStack_bc - fStack_7c) +
                (local_b8 - local_78) * (local_b8 - local_78);
LAB_1003b0fd8:
        fVar6 = local_f0 * SQRT(fVar6) + -0.4;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar7 = param_3[2];
        *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) -
                            (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar6,
                            (float)*param_2 - (float)*(undefined8 *)param_3 * fVar6);
        *(float *)(param_2 + 1) = *(float *)(param_2 + 1) - fVar7 * fVar6;
        return;
      }
      local_100 = 0x412000003e19999a;
      local_f8 = 0x3e19999a;
      local_110 = CONCAT44(local_90._4_4_ + (float)((ulong)*(undefined8 *)param_3 >> 0x20) * -0.8,
                           (float)local_90 + (float)*(undefined8 *)param_3 * -0.8);
      local_108 = local_88 - param_3[2] * 0.8;
      for (lVar4 = *(long *)(lVar5 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
        if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) {
          bVar2 = *(byte *)(lVar4 + 0x818) >> 3 & 3;
          goto LAB_1003b1018;
        }
      }
      bVar2 = 0;
LAB_1003b1018:
      iVar3 = FUN_10054e044(bVar2,&local_110,&local_f0,&local_100);
      fVar6 = (float)uVar11;
      fVar7 = (float)uVar10;
      if (iVar3 == 0) {
        local_130 = 0x412000003e19999a;
        local_128 = 0x3e19999a;
        fVar9 = (float)FUN_10045f34c(param_1 + 0x220,param_1);
        fVar9 = fVar9 + 2.5;
        local_140 = CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar9,
                             fVar7 + (float)*(undefined8 *)param_3 * fVar9);
        local_138 = fVar12 + fVar9 * param_3[2];
        for (lVar4 = *(long *)(lVar5 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
          if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) {
            bVar2 = *(byte *)(lVar4 + 0x818) >> 3 & 3;
            goto LAB_1003b10b4;
          }
        }
        bVar2 = 0;
LAB_1003b10b4:
        iVar3 = FUN_10054e044(bVar2,&local_140,&local_120,&local_130);
        if (iVar3 != 0) {
          *param_2 = CONCAT44(fStack_11c,local_120);
          *(float *)(param_2 + 1) = local_118;
          for (lVar5 = *(long *)(lVar5 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
            if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == ram0x0001018672a0) {
              bVar2 = *(byte *)(lVar5 + 0x818) >> 3 & 3;
              goto LAB_1003b1138;
            }
          }
          bVar2 = 0;
LAB_1003b1138:
          FUN_10054e09c(bVar2,param_2,&local_80,local_150,0,0);
          fVar6 = (local_120 - local_80) * (local_120 - local_80) +
                  (fStack_11c - fStack_7c) * (fStack_11c - fStack_7c) +
                  (local_118 - local_78) * (local_118 - local_78);
          local_f0 = local_150[0];
          goto LAB_1003b0fd8;
        }
        for (lVar4 = *(long *)(lVar5 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
          if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) {
            bVar2 = *(byte *)(lVar4 + 0x818) >> 3 & 3;
            goto LAB_1003b118c;
          }
        }
        bVar2 = 0;
LAB_1003b118c:
        FUN_10054e09c(bVar2,&local_80,&local_90,&local_144,0,0);
        local_144 = local_144 *
                    SQRT(((float)local_90 - local_80) * ((float)local_90 - local_80) +
                         (local_90._4_4_ - fStack_7c) * (local_90._4_4_ - fStack_7c) +
                         (local_88 - local_78) * (local_88 - local_78)) + -0.4;
        if (local_144 <= 0.0) {
          local_144 = 0.0;
        }
        local_90 = CONCAT44(fStack_7c + (float)((ulong)*(undefined8 *)param_3 >> 0x20) * local_144,
                            local_80 + (float)*(undefined8 *)param_3 * local_144);
        local_88 = local_78 + param_3[2] * local_144;
        local_160 = 0x412000003e800000;
        local_158 = 0x3e800000;
        for (lVar5 = *(long *)(lVar5 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
          if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == ram0x0001018672a0) {
            bVar2 = *(byte *)(lVar5 + 0x818) >> 3 & 3;
            goto LAB_1003b124c;
          }
        }
        bVar2 = 0;
LAB_1003b124c:
        iVar3 = FUN_10054e044(bVar2,&local_90,local_150,&local_160);
        pfVar1 = local_150;
        if (iVar3 == 0) {
          pfVar1 = &local_80;
        }
        *param_2 = *(undefined8 *)pfVar1;
        local_78 = pfVar1[2];
      }
      else {
        *param_2 = CONCAT44(uStack_ec,local_f0);
        local_78 = local_e8;
      }
    }
    else {
      *param_2 = local_a0;
      local_78 = local_98;
    }
  }
  else {
    *param_2 = CONCAT44(fStack_7c,local_80);
  }
  *(float *)(param_2 + 1) = local_78;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b1278(long param_1,undefined8 *param_2,float *param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  
  plVar3 = *(long **)(param_1 + 0x1c8);
  lVar4 = 0;
  lVar5 = param_1;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      lVar4 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  do {
    lVar5 = *(long *)(lVar5 + 0x10);
  } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68);
  local_40 = *(undefined8 *)(param_1 + 0x1d8);
  local_38 = *(float *)(param_1 + 0x1e0);
  fVar7 = (float)local_40 - *(float *)(lVar5 + 0x250);
  fVar6 = local_38 - *(float *)(lVar5 + 600);
  *param_3 = fVar7;
  param_3[2] = fVar6;
  param_3[1] = 0.0;
  fVar8 = fVar7 * fVar7 + fVar6 * fVar6;
  if (1e-08 <= fVar8) {
    fVar8 = SQRT(fVar8);
    *param_3 = fVar7 / fVar8;
    param_3[1] = 0.0;
    param_3[2] = fVar6 / fVar8;
  }
  else {
    param_3[2] = 0.0;
    param_3[0] = 1.0;
    param_3[1] = 0.0;
  }
  local_60 = 0x412000003e800000;
  local_58 = 0x3e800000;
  if ((*(byte *)(lVar4 + 0x2f5) >> 4 & 1) == 0) {
    for (lVar5 = *(long *)(lVar5 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == ram0x0001018672a0) {
        bVar1 = *(byte *)(lVar5 + 0x818) >> 3 & 3;
        goto LAB_1003b141c;
      }
    }
    bVar1 = 0;
LAB_1003b141c:
    iVar2 = FUN_10054e044(bVar1,&local_40,&local_50,&local_60);
    if (iVar2 == 0) {
      *param_2 = local_40;
      local_48 = local_38;
    }
    else {
      *param_2 = local_50;
    }
    *(float *)(param_2 + 1) = local_48;
  }
  else {
    fVar6 = *(float *)(*(long *)(lVar4 + 0x38) + 100);
    fVar7 = *(float *)(*(long *)(lVar5 + 0x38) + 100);
    fVar6 = ((*(float *)(lVar5 + 0x2e8) + fVar7) * *(float *)(*(long *)(lVar5 + 0x38) + 0x68)) /
            fVar7 + ((*(float *)(lVar4 + 0x2e8) + fVar6) *
                    *(float *)(*(long *)(lVar4 + 0x38) + 0x68)) / fVar6;
    fVar7 = param_3[2];
    *param_2 = CONCAT44((float)((ulong)local_40 >> 0x20) -
                        (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar6,
                        (float)local_40 - (float)*(undefined8 *)param_3 * fVar6);
    *(float *)(param_2 + 1) = local_38 - fVar7 * fVar6;
  }
  return;
}




void FUN_1003b1464(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined **local_e0;
  long local_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  byte local_86;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined1 local_74;
  long local_70;
  long local_68;
  
  uVar1 = DAT_101d2c81c;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    plVar5 = (long *)(param_1 + 0x10);
    lVar6 = *plVar5;
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    uVar7 = *(undefined4 *)(lVar6 + 0x250);
    fVar9 = *(float *)(lVar6 + 0x254);
    uVar8 = *(undefined4 *)(lVar6 + 600);
    fVar10 = *(float *)(lVar6 + 0x2ec);
    local_d8 = 0;
    local_cc = 0;
    local_bc = 0;
    local_c4 = 0;
    local_b4 = 0;
    uStack_a8 = 0xbf800000c0000000;
    local_b0 = 0xbf800000bf800000;
    local_a0 = 0x3f800000;
    local_9c = 0xff;
    uStack_90 = 0xffffffff00000000;
    local_98 = 0xffffffff00000000;
    local_d0 = 1;
    lVar3 = FUN_1003e10f0();
    local_e0 = &PTR_FUN_1014999d0;
    local_84 = uVar1;
    local_7c = 0;
    local_74 = 0;
    do {
      lVar4 = *plVar5;
      plVar5 = (long *)(lVar4 + 0x10);
    } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68);
    local_80 = *(undefined4 *)(lVar4 + 0x260);
    local_cc = CONCAT44(fVar10 + fVar9,uVar7);
    local_c4 = CONCAT44(local_c4._4_4_,uVar8);
    local_b0 = CONCAT44(local_b0._4_4_,0x49afc800);
    local_86 = *(byte *)(lVar3 + 0xe5) | 0x14;
    local_88 = 0xc110;
    local_d8 = lVar6;
    iVar2 = FUN_1003a6ce4(&local_e0,&local_70,1,0);
    if (iVar2 == 0) {
      *param_3 = *(undefined4 *)(lVar6 + 0x250);
      fVar9 = *(float *)(lVar6 + 0x254);
      param_3[1] = fVar9;
      param_3[2] = *(undefined4 *)(lVar6 + 600);
    }
    else {
      *param_3 = *(undefined4 *)(local_70 + 0x250);
      fVar9 = *(float *)(local_70 + 0x254);
      param_3[1] = fVar9;
      param_3[2] = *(undefined4 *)(local_70 + 600);
      lVar6 = local_70;
    }
    param_3[1] = *(float *)(lVar6 + 0x2ec) + fVar9;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003b1658(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}




void FUN_1003b1660(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  *(long *)(param_2 + 8) = lVar1;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff9f | 0x1010;
  return;
}




void FUN_1003b16a8(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long local_d0 [2];
  char cStack_c0;
  char cStack_bf;
  char cStack_be;
  char cStack_bd;
  char cStack_bc;
  char cStack_bb;
  char cStack_ba;
  char local_b9 [49];
  undefined8 auStack_88 [2];
  char cStack_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char local_71 [9];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    plVar5 = *(long **)(param_1 + 0x1c8);
    if (plVar5 == (long *)0x0) {
      lVar3 = 0;
    }
    else if (*(int *)(param_1 + 0x1d0) == (int)plVar5[1]) {
      lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    else {
      lVar3 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
    iVar2 = _rand();
    auStack_88[0] = 0;
    local_b9[0x29] = '\0';
    local_b9[0x2a] = '\0';
    local_b9[0x2b] = '\0';
    local_b9[0x2c] = '\0';
    local_b9[0x2d] = '\0';
    local_b9[0x2e] = '\0';
    local_b9[0x2f] = '\0';
    local_b9[0x30] = '\0';
    cStack_78 = '\0';
    cStack_77 = '\0';
    cStack_76 = '\0';
    cStack_75 = '\0';
    cStack_74 = '\0';
    cStack_73 = '\0';
    cStack_72 = '\0';
    local_71[0] = '\0';
    auStack_88[1] = 0;
    local_b9[0x11] = '\0';
    local_b9[0x12] = '\0';
    local_b9[0x13] = '\0';
    local_b9[0x14] = '\0';
    local_b9[0x15] = '\0';
    local_b9[0x16] = '\0';
    local_b9[0x17] = '\0';
    local_b9[0x18] = '\0';
    local_b9[9] = '\0';
    local_b9[10] = '\0';
    local_b9[0xb] = '\0';
    local_b9[0xc] = '\0';
    local_b9[0xd] = '\0';
    local_b9[0xe] = '\0';
    local_b9[0xf] = '\0';
    local_b9[0x10] = '\0';
    local_b9[0x21] = '\0';
    local_b9[0x22] = '\0';
    local_b9[0x23] = '\0';
    local_b9[0x24] = '\0';
    local_b9[0x25] = '\0';
    local_b9[0x26] = '\0';
    local_b9[0x27] = '\0';
    local_b9[0x28] = '\0';
    local_b9[0x19] = '\0';
    local_b9[0x1a] = '\0';
    local_b9[0x1b] = '\0';
    local_b9[0x1c] = '\0';
    local_b9[0x1d] = '\0';
    local_b9[0x1e] = '\0';
    local_b9[0x1f] = '\0';
    local_b9[0x20] = '\0';
    local_d0[1] = 0;
    local_d0[0] = 0;
    local_b9[1] = '\0';
    local_b9[2] = '\0';
    local_b9[3] = '\0';
    local_b9[4] = '\0';
    local_b9[5] = '\0';
    local_b9[6] = '\0';
    local_b9[7] = '\0';
    local_b9[8] = '\0';
    cStack_c0 = '\0';
    cStack_bf = '\0';
    cStack_be = '\0';
    cStack_bd = '\0';
    cStack_bc = '\0';
    cStack_bb = '\0';
    cStack_ba = '\0';
    local_b9[0] = '\0';
    uVar7 = (ulong)(iVar2 % 4 + 1);
    FUN_1003b18c0(DAT_101d909c0,local_d0,uVar7);
    if (-1 < iVar2 % 4) {
      uVar8 = 0;
      do {
        plVar5 = local_d0 + uVar8 * 3;
        if (local_b9[uVar8 * 0x18] < '\0') {
          plVar5 = (long *)*plVar5;
        }
        FUN_1003b1948(DAT_101d90978,plVar5);
        if (lVar3 != 0) {
          uVar9 = 0x10000;
          lVar4 = lVar3;
LAB_1003b17b4:
          do {
            do {
              lVar6 = lVar4;
              if ((lVar6 != lVar3) &&
                 (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0x11ce033b), lVar4 != 0)) {
                (**(code **)(lVar4 + 8))(lVar6);
              }
              if (((uVar9 & 0xffff) < uVar9 >> 0x10) &&
                 (lVar4 = *(long *)(lVar6 + 0x18), lVar4 != 0)) {
                uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
                goto LAB_1003b17b4;
              }
              if ((uVar9 & 0xffff) == 0) goto LAB_1003b1854;
              lVar4 = *(long *)(lVar6 + 0x20);
            } while (*(long *)(lVar6 + 0x20) != 0);
            lVar6 = *(long *)(lVar6 + 0x10);
            if ((lVar6 == 0) || (uVar1 = uVar9 - 1 & 0xffff, uVar1 == 0)) break;
            uVar9 = uVar1 | uVar9 & 0xffff0000;
            while (lVar4 = *(long *)(lVar6 + 0x20), lVar4 == 0) {
              if ((uVar9 - 1 & 0xffff) == 0) goto LAB_1003b1854;
              lVar6 = *(long *)(lVar6 + 0x10);
              uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
              if (lVar6 == 0) goto LAB_1003b1854;
            }
          } while( true );
        }
LAB_1003b1854:
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar7);
    }
    lVar3 = 0;
    do {
      if (local_71[lVar3] < '\0') {
        operator_delete(*(void **)((long)auStack_88 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x60);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003b18c0(long param_1,string *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *local_48 [2];
  char local_31;
  
  if (param_3 != 0) {
    uVar2 = **(undefined8 **)**(undefined8 **)(param_1 + 0x28);
    uVar3 = (ulong)param_3;
    do {
      uVar1 = FUN_10046d230(param_1,uVar2);
      FUN_1000ee4ec(local_48,uVar1);
      std::string::operator=(param_2,(string *)local_48);
      if (local_31 < '\0') {
        operator_delete(local_48[0]);
      }
      param_2 = param_2 + 0x18;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




ulong FUN_1003b1948(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = FUN_1004d2524(param_2);
  iVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x30) + uVar3 * 4) == iVar2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + 0x38) != uVar3);
  }
  return 0xffff;
}




float FUN_1003b19b4(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x120);
}




void FUN_1003b1a18(long param_1,undefined8 param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  
  *param_3 = 0x40b66666;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,0,7,0x19,0);
  *param_4 = fVar1 * 5.7;
  return;
}




void FUN_1003b1a88(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,7,0x19,0);
  return;
}




void FUN_1003b1a9c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0x3f41bacf;
  return;
}




void FUN_1003b1aac(float param_1,undefined8 param_2,float *param_3)

{
  *param_3 = param_1 * 0.7;
  return;
}




float FUN_1003b1ac0(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1003dfe60(param_1,0,8,0x19,0);
  fVar2 = (float)FUN_1003dfe60(param_1,0,6,0x19,0);
  return fVar2 + fVar1;
}




void FUN_1003b1b18(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,8,0x19,0);
  return;
}




void FUN_1003b1b2c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003b1ac0();
  *param_2 = uVar1;
  return;
}




void FUN_1003b1b74(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10000ed74();
  FUN_1003a985c(param_2,lVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  uVar6 = *(undefined8 *)(param_1 + 0x3c);
  uVar5 = *(undefined8 *)(param_1 + 0x34);
  uVar8 = *(undefined8 *)(param_1 + 0x4c);
  uVar7 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(lVar1 + 99) = *(undefined8 *)(param_1 + 0x53);
  *(undefined8 *)(lVar1 + 0x5c) = uVar8;
  *(undefined8 *)(lVar1 + 0x54) = uVar7;
  *(undefined8 *)(lVar1 + 0x4c) = uVar6;
  *(undefined8 *)(lVar1 + 0x44) = uVar5;
  *(undefined8 *)(lVar1 + 0x3c) = uVar4;
  *(undefined8 *)(lVar1 + 0x34) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(lVar1 + 0x2c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(lVar1 + 0x24) = uVar3;
  *(byte *)(lVar1 + 0xa8) = *(byte *)(lVar1 + 0xa8) & 0xf0 | DAT_101d23a38 != '\0';
  *(code **)(lVar1 + 0x90) = FUN_1003b1b2c;
  *(code **)(lVar1 + 0x70) = FUN_1003b1b18;
  *(code **)(lVar1 + 0x78) = FUN_1003b1b18;
  *(undefined4 *)(lVar1 + 0xa0) = 1;
  plVar2 = (long *)FUN_10000cb8c();
  FUN_1003a985c(param_2,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Damage",0);
  local_40 = FUN_1003b1cec;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x88))(plVar2,&local_40);
  plVar2 = (long *)FUN_10000bed8();
  FUN_1003a985c(param_2,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))
                             (plVar2,PTR_s_Buff_Joule_RocketLeap_Knockback__10185abf8);
  local_40 = FUN_1003b1d00;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(param_2,uVar3);
  return;
}




void FUN_1003b1cec(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_1003b1d00(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,2,0x19,0);
  return;
}




void FUN_1003b1d14(long param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *(long *)(param_1 + 0x10);
  iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  lVar4 = lVar2;
  iVar1 = iVar3;
  while (iVar1 != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  fVar5 = *(float *)(lVar4 + 0x250);
  fVar6 = *(float *)(lVar4 + 600);
  fVar7 = *(float *)(lVar4 + 0x2ec) + *(float *)(lVar4 + 0x254);
  if (((0.01 <= ABS(*(float *)(param_1 + 0x1d8) - fVar5)) ||
      (0.01 <= ABS(*(float *)(param_1 + 0x1dc) - fVar7))) ||
     (0.01 <= ABS(*(float *)(param_1 + 0x1e0) - fVar6))) {
    fVar8 = *(float *)(param_1 + 0x1d8) - fVar5;
    fVar9 = *(float *)(param_1 + 0x1dc) - fVar7;
    fVar10 = *(float *)(param_1 + 0x1e0) - fVar6;
  }
  else {
    while (iVar3 != DAT_10184dd68) {
      lVar2 = *(long *)(lVar2 + 0x10);
      iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
    }
    fVar8 = *(float *)(lVar2 + 0x240);
    fVar9 = *(float *)(lVar2 + 0x244);
    fVar10 = *(float *)(lVar2 + 0x248);
    fVar11 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
    if (1e-08 <= fVar11) {
      fVar11 = 1.0 / SQRT(fVar11);
      fVar8 = fVar8 * fVar11;
      fVar9 = fVar9 * fVar11;
      fVar10 = fVar10 * fVar11;
    }
    else {
      fVar8 = 1.0;
      fVar9 = 0.0;
      fVar10 = 0.0;
    }
  }
  fVar11 = 1.0 / SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
  *param_4 = fVar5 + fVar11 * fVar8 * 1.2;
  param_4[1] = fVar7 + fVar11 * fVar9 * 1.2;
  param_4[2] = fVar6 + fVar11 * fVar10 * 1.2;
  return;
}




void FUN_1003b1e5c(long param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = *(long *)(param_1 + 0x10);
  iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  lVar4 = lVar2;
  iVar1 = iVar3;
  while (iVar1 != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  fVar10 = *(float *)(lVar4 + 0x250);
  fVar11 = *(float *)(lVar4 + 600);
  fVar12 = *(float *)(lVar4 + 0x2ec) + *(float *)(lVar4 + 0x254);
  if (((0.01 <= ABS(*(float *)(param_1 + 0x1d8) - fVar10)) ||
      (0.01 <= ABS(*(float *)(param_1 + 0x1dc) - fVar12))) ||
     (0.01 <= ABS(*(float *)(param_1 + 0x1e0) - fVar11))) {
    fVar5 = *(float *)(param_1 + 0x1d8) - fVar10;
    fVar6 = *(float *)(param_1 + 0x1dc) - fVar12;
    fVar7 = *(float *)(param_1 + 0x1e0) - fVar11;
  }
  else {
    while (iVar3 != DAT_10184dd68) {
      lVar2 = *(long *)(lVar2 + 0x10);
      iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
    }
    fVar5 = *(float *)(lVar2 + 0x240);
    fVar6 = *(float *)(lVar2 + 0x244);
    fVar7 = *(float *)(lVar2 + 0x248);
    fVar9 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    if (1e-08 <= fVar9) {
      fVar9 = 1.0 / SQRT(fVar9);
      fVar5 = fVar5 * fVar9;
      fVar6 = fVar6 * fVar9;
      fVar7 = fVar7 * fVar9;
    }
    else {
      fVar5 = 1.0;
      fVar6 = 0.0;
      fVar7 = 0.0;
    }
  }
  fVar9 = (float)FUN_10045f34c(param_1 + 0x220);
  fVar8 = 1.0 / SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  *param_4 = fVar10 + fVar8 * fVar9 * fVar5;
  param_4[1] = fVar12 + fVar8 * fVar9 * fVar6;
  param_4[2] = fVar11 + fVar8 * fVar9 * fVar7;
  return;
}




void FUN_1003b1fe0(long param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *(long *)(param_1 + 0x10);
  iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  lVar4 = lVar2;
  iVar1 = iVar3;
  while (iVar1 != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  fVar5 = *(float *)(lVar4 + 0x250);
  fVar6 = *(float *)(lVar4 + 600);
  fVar7 = *(float *)(lVar4 + 0x2ec) + *(float *)(lVar4 + 0x254);
  if (((0.01 <= ABS(*(float *)(param_1 + 0x1d8) - fVar5)) ||
      (0.01 <= ABS(*(float *)(param_1 + 0x1dc) - fVar7))) ||
     (0.01 <= ABS(*(float *)(param_1 + 0x1e0) - fVar6))) {
    fVar8 = *(float *)(param_1 + 0x1d8) - fVar5;
    fVar9 = *(float *)(param_1 + 0x1dc) - fVar7;
    fVar10 = *(float *)(param_1 + 0x1e0) - fVar6;
  }
  else {
    while (iVar3 != DAT_10184dd68) {
      lVar2 = *(long *)(lVar2 + 0x10);
      iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
    }
    fVar8 = *(float *)(lVar2 + 0x240);
    fVar9 = *(float *)(lVar2 + 0x244);
    fVar10 = *(float *)(lVar2 + 0x248);
    fVar11 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
    if (1e-08 <= fVar11) {
      fVar11 = 1.0 / SQRT(fVar11);
      fVar8 = fVar8 * fVar11;
      fVar9 = fVar9 * fVar11;
      fVar10 = fVar10 * fVar11;
    }
    else {
      fVar8 = 1.0;
      fVar9 = 0.0;
      fVar10 = 0.0;
    }
  }
  fVar11 = 1.0 / SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
  *param_4 = fVar5 + fVar11 * fVar8 * 1.2;
  param_4[1] = fVar7 + fVar11 * fVar9 * 1.2;
  param_4[2] = fVar6 + fVar11 * fVar10 * 1.2;
  return;
}




void FUN_1003b2128(long param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = *(long *)(param_1 + 0x10);
  iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  lVar4 = lVar2;
  iVar1 = iVar3;
  while (iVar1 != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  fVar10 = *(float *)(lVar4 + 0x250);
  fVar11 = *(float *)(lVar4 + 600);
  fVar12 = *(float *)(lVar4 + 0x2ec) + *(float *)(lVar4 + 0x254);
  if (((0.01 <= ABS(*(float *)(param_1 + 0x1d8) - fVar10)) ||
      (0.01 <= ABS(*(float *)(param_1 + 0x1dc) - fVar12))) ||
     (0.01 <= ABS(*(float *)(param_1 + 0x1e0) - fVar11))) {
    fVar5 = *(float *)(param_1 + 0x1d8) - fVar10;
    fVar6 = *(float *)(param_1 + 0x1dc) - fVar12;
    fVar7 = *(float *)(param_1 + 0x1e0) - fVar11;
  }
  else {
    while (iVar3 != DAT_10184dd68) {
      lVar2 = *(long *)(lVar2 + 0x10);
      iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
    }
    fVar5 = *(float *)(lVar2 + 0x240);
    fVar6 = *(float *)(lVar2 + 0x244);
    fVar7 = *(float *)(lVar2 + 0x248);
    fVar9 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    if (1e-08 <= fVar9) {
      fVar9 = 1.0 / SQRT(fVar9);
      fVar5 = fVar5 * fVar9;
      fVar6 = fVar6 * fVar9;
      fVar7 = fVar7 * fVar9;
    }
    else {
      fVar5 = 1.0;
      fVar6 = 0.0;
      fVar7 = 0.0;
    }
  }
  fVar9 = (float)FUN_10045f34c(param_1 + 0x220);
  fVar8 = 1.0 / SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  *param_4 = fVar10 + fVar8 * fVar9 * fVar5;
  param_4[1] = fVar12 + fVar8 * fVar9 * fVar6;
  param_4[2] = fVar11 + fVar8 * fVar9 * fVar7;
  return;
}




void FUN_1003b22ac(long param_1,long param_2,float *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 local_78 [2];
  
  plVar5 = (long *)(param_1 + 0x10);
  lVar6 = *plVar5;
  lVar7 = *(long *)(lVar6 + 8);
  iVar1 = *(int *)(lVar7 + 0xa4);
  lVar4 = lVar6;
  iVar3 = iVar1;
  while (iVar3 != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
    iVar3 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  fVar8 = (float)FUN_1003dfe60(lVar4,2,0,0x19,0);
  *param_3 = fVar8 * 0.25;
  lVar4 = lVar6;
  if ((*(byte *)(param_2 + 0x2f5) >> 4 & 1) != 0) {
    while (iVar1 != DAT_10184dd68) {
      iVar1 = *(int *)(*(long *)(*(long *)(lVar4 + 0x10) + 8) + 0xa4);
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    fVar9 = (float)FUN_1003dfe60(lVar4,2,6,0x19,0);
    *param_3 = fVar9 * fVar8 * 0.25;
  }
  *param_4 = 2;
  *param_5 = 1;
  puVar2 = PTR_s_Buff_Joule_Talent_BackupButton_10185ac10;
  iVar3 = *(int *)(lVar7 + 0xa4);
  while (iVar3 != DAT_10184dd68) {
    lVar6 = *(long *)(lVar6 + 0x10);
    iVar3 = *(int *)(*(long *)(lVar6 + 8) + 0xa4);
  }
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar6 + 0x260));
  if ((lVar4 != 0) && (iVar3 = FUN_1003a47d0(lVar4,puVar2), iVar3 != 0)) {
    do {
      lVar4 = *plVar5;
      plVar5 = (long *)(lVar4 + 0x10);
    } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68);
    local_78[0] = DAT_101d90bd8;
    fVar8 = (float)FUN_1003dfee8(lVar4,local_78,3,9);
    *param_3 = *param_3 * fVar8;
  }
  return;
}




void FUN_1003b2440(long param_1,undefined4 *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(param_1 + 0x1d8) - *(float *)(lVar1 + 0x250);
  fVar4 = *(float *)(param_1 + 0x1dc) - (*(float *)(lVar1 + 0x254) + *(float *)(lVar1 + 0x2ec));
  fVar5 = *(float *)(param_1 + 0x1e0) - *(float *)(lVar1 + 600);
  fVar4 = fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5;
  if (0.001 <= fVar4) {
    fVar4 = SQRT(fVar4);
    fVar2 = fVar2 / fVar4;
    fVar5 = fVar5 / fVar4;
  }
  else {
    fVar2 = 0.0;
    fVar5 = 1.0;
  }
  uVar3 = _atan2f(fVar5,fVar2);
  *param_2 = uVar3;
  return;
}




void FUN_1003b24f0(long param_1,undefined4 *param_2)

{
  long lVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  *param_2 = DAT_101e94270;
  return;
}




void FUN_1003b2558(long param_1,float *param_2)

{
  float fVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  plVar2 = *(long **)(param_1 + 0x1c8);
  lVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      lVar3 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  do {
    fVar1 = DAT_101e94270;
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar4 = *(long *)(param_1 + 0x40);
  fVar5 = *(float *)(lVar4 + 0x48) + *(float *)(lVar4 + 0xfc) * (*(float *)(lVar4 + 0x264) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x1b0),DAT_101e94330);
  *param_2 = DAT_101e94270;
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x40);
    fVar5 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
    *param_2 = fVar1 + DAT_101e94260 * 0.04;
  }
  return;
}




void FUN_1003b2668(long param_1,undefined4 *param_2)

{
  long lVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  *param_2 = DAT_101e94270;
  return;
}




void FUN_1003b26d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  FUN_1003b24f0(param_1,param_3);
  *param_5 = 3;
  *param_4 = 0;
  return;
}




void FUN_1003b2704(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  *param_3 = DAT_101e94270 * 0.5;
  *param_5 = 3;
  *param_4 = 0;
  return;
}




void FUN_1003b2780(long param_1,undefined4 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_101d23a38 != '\0') {
    do {
      param_1 = *(long *)(param_1 + 0x10);
    } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
    lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c0));
    if ((lVar1 != 0) &&
       (fVar2 = *(float *)(param_1 + 0x250) - *(float *)(lVar1 + 0x250),
       fVar3 = (*(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254)) -
               (*(float *)(lVar1 + 0x254) + *(float *)(lVar1 + 0x2ec)),
       fVar4 = *(float *)(param_1 + 600) - *(float *)(lVar1 + 600),
       SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) < 20.0)) {
      *param_2 = *(undefined4 *)(lVar1 + 0x260);
    }
  }
  return;
}




void FUN_1003b2830(undefined8 param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_2 + 0x260);
  return;
}




void FUN_1003b283c(long param_1,undefined4 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_101d23a38 != '\0') {
    do {
      param_1 = *(long *)(param_1 + 0x10);
    } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
    lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c0));
    if ((lVar1 != 0) &&
       (fVar2 = *(float *)(param_1 + 0x250) - *(float *)(lVar1 + 0x250),
       fVar3 = (*(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254)) -
               (*(float *)(lVar1 + 0x254) + *(float *)(lVar1 + 0x2ec)),
       fVar4 = *(float *)(param_1 + 600) - *(float *)(lVar1 + 600),
       SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) < 900.0)) {
      *param_2 = *(undefined4 *)(lVar1 + 0x260);
    }
  }
  return;
}




void FUN_1003b28f0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  
  if (DAT_101d23a38 != '\0') {
    lVar4 = *(long *)(param_1 + 0x10);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    plVar2 = (long *)(lVar4 + 0x18);
    do {
      lVar3 = *plVar2;
      plVar2 = (long *)(lVar3 + 0x20);
    } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8);
    lVar3 = *(long *)(lVar3 + 0x50);
    if (((((lVar3 != 0) && ((*(byte *)(lVar3 + 0x239) & 0x1c) != 0)) &&
         (lVar3 = *(long *)(lVar3 + 0x1f8), lVar3 != 0)) &&
        ((uint)*(byte *)(lVar3 + 0x6a) <
         (int)*(char *)(lVar3 + 0x69) + (uint)*(byte *)(lVar3 + 0x68))) ||
       (iVar1 = _strcmp(*(char **)(*(long *)(param_1 + 0x38) + 8),
                        PTR_s_Ability__Kestrel__A_101859570), iVar1 == 0)) {
      fVar5 = (float)FUN_1003dfe60(lVar4,0,3,9,1);
      fVar7 = *(float *)(*(long *)(lVar4 + 0x40) + 0x128);
      fVar6 = (float)FUN_1003dfe60(lVar4,0,4,9,1);
      local_5c = fVar5 / (fVar7 * fVar6 + 1.0);
      local_6c = *(undefined4 *)(lVar4 + 0x260);
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_88 = &PTR_FUN_101496b18;
      local_64 = DAT_1018589d8;
      local_58 = 1;
      local_40 = 0;
      local_4c = 0;
      local_54 = 0;
      local_38 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_68 = local_6c;
      local_60 = FUN_1003d4e0c(PTR_s_Buff_Kestrel_Reloading_10185ac38);
      FUN_10049639c(&local_88,&DAT_101e47d30);
    }
  }
  return;
}




undefined1 FUN_1003b2a7c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x1f8), lVar1 != 0)) {
    return *(undefined1 *)(lVar1 + 0x6a);
  }
  return 0;
}




int FUN_1003b2aa0(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x1f8), lVar1 != 0)) {
    return (int)*(char *)(lVar1 + 0x69) + (uint)*(byte *)(lVar1 + 0x68);
  }
  return 0;
}




void FUN_1003b2acc(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  int iStack_50;
  int local_4c;
  undefined1 local_48;
  
  if (DAT_101d23a38 != '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68) {
      lVar5 = *(long *)(lVar5 + 0x10);
    }
    lVar6 = *(long *)(lVar5 + 0x18);
    iVar1 = *(int *)(*(long *)(lVar6 + 8) + 0xa4);
    lVar4 = lVar6;
    iVar2 = iVar1;
    while (iVar2 != DAT_10184daa8) {
      lVar4 = *(long *)(lVar4 + 0x20);
      iVar2 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
    }
    lVar3 = *(long *)(lVar4 + 0x28);
    for (lVar4 = lVar3; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2c8ac) && (*(int *)(lVar4 + 0x310) == 0)) {
        iVar2 = *(int *)(lVar4 + 0x30c);
        for (; *(int *)(lVar3 + 0x30c) != iVar2; lVar3 = *(long *)(lVar3 + 0x350)) {
        }
        fVar8 = *(float *)(lVar3 + 0x318);
        fVar7 = (float)FUN_1003dfe60(lVar5,0,5,0x19,0);
        if (fVar8 < fVar7) {
          while (iVar1 != DAT_10184dab8) {
            lVar6 = *(long *)(lVar6 + 0x20);
            iVar1 = *(int *)(*(long *)(lVar6 + 8) + 0xa4);
          }
          local_54 = *(undefined4 *)(lVar5 + 0x260);
          local_4c = 0;
          if (*(long *)(lVar6 + 0x50) != 0) {
            lVar5 = *(long *)(*(long *)(lVar6 + 0x50) + 0x1f8);
            local_4c = 0;
            if (lVar5 != 0) {
              local_4c = (int)*(char *)(lVar5 + 0x69) + (uint)*(byte *)(lVar5 + 0x68);
            }
          }
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_70 = &PTR_FUN_1014971a8;
          iStack_50 = 0;
          local_48 = 1;
          FUN_1004965f0(&local_70,&DAT_101e47d30);
          return;
        }
        local_54 = *(undefined4 *)(lVar5 + 0x260);
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        local_70 = &PTR_FUN_101496cd8;
        iStack_50 = iVar2;
        FUN_100496580(&local_70,&DAT_101e47d30);
        return;
      }
    }
  }
  return;
}




undefined4 FUN_1003b2c7c(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x350);
  } while (*(int *)(lVar2 + 0x30c) != param_2);
  return *(undefined4 *)(lVar2 + 0x318);
}




void FUN_1003b2c9c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1014971a8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *(undefined1 *)(param_1 + 5) = param_5;
  return;
}




void FUN_1003b2cc0(void)

{
  return;
}




undefined8 FUN_1003b2cc4(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b2acc;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Kestrel_Reloading_10185ac38;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar2 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b2f3c(*(undefined4 *)(lVar4 + 600));
  *(undefined2 *)(lVar2 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Kestrel_Attack_1";
  *(char **)(lVar2 + 0x18) = "Sound_Kestrel_Attack_3";
  *(char **)(lVar2 + 0x20) = "Sound_Kestrel_Attack_5";
  *(char **)(lVar2 + 0x28) = "Sound_Kestrel_Attack_6";
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = param_2;
  FUN_1003d266c(lVar2,param_3);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Kestrel_Stealth_10185ac40;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b28f0;
  *(undefined1 *)(lVar2 + 0x18) = 1;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




float FUN_1003b2f3c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x254);
}




void FUN_1003b2fa0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_2,0,6,0x19,0);
  *param_3 = fVar1 + -0.3;
  return;
}




void FUN_1003b2fe4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




void FUN_1003b2ff8(long param_1)

{
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  FUN_1003b302c(param_1,"Kestrel_Trap",2);
  return;
}




void FUN_1003b302c(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined **local_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined1 local_6a8;
  uint local_6a4;
  undefined8 local_6a0;
  undefined2 local_698;
  undefined1 local_696;
  undefined **local_690;
  undefined8 uStack_688;
  undefined1 local_680;
  undefined4 local_67c;
  undefined8 local_678;
  undefined1 local_670;
  long alStack_668 [200];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    local_680 = 0xff;
    local_690 = &PTR_FUN_101499900;
    uStack_688 = 0;
    local_670 = 0;
    local_67c = *(undefined4 *)(param_1 + 0x260);
    local_678 = param_2;
    uVar2 = FUN_1003a6ce4(&local_690,alStack_668,200,0);
    if ((param_3 <= uVar2) && (uVar2 != 0)) {
      uVar4 = (ulong)uVar2;
      plVar3 = alStack_668;
      uVar2 = 0xffffffff;
      do {
        uVar1 = *(uint *)(*plVar3 + 0x260);
        if (uVar2 <= *(uint *)(*plVar3 + 0x260) && uVar2 != 0xffffffff) {
          uVar1 = uVar2;
        }
        uVar4 = uVar4 - 1;
        plVar3 = plVar3 + 1;
        uVar2 = uVar1;
      } while (uVar4 != 0);
      if (uVar1 != 0xffffffff) {
        local_6b8 = 0;
        uStack_6b0 = 0;
        local_6a8 = 0;
        local_6c0 = &PTR_FUN_101497218;
        local_6a0 = 0xc61c400000000000;
        local_698 = 0x101;
        local_696 = 0;
        local_6a4 = uVar1;
        FUN_100496328(&local_6c0,&DAT_101e47d30);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003b3140(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




void FUN_1003b3154(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  FUN_1003461dc();
  uVar2 = FUN_100345d90();
  uVar3 = FUN_1003dfe60(uVar2,1,9,0x19,0);
  *param_2 = uVar3;
  return;
}




void FUN_1003b31b8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  uVar1 = FUN_1003461dc();
  *param_3 = uVar1;
  return;
}




void FUN_1003b3204(undefined8 param_1)

{
  FUN_1003e00a8(param_1,1,10,9,0);
  return;
}




void FUN_1003b3218(long param_1,undefined8 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar7 = *(float *)(lVar1 + 0x250);
  fVar8 = *(float *)(lVar1 + 600);
  fVar2 = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
  fVar3 = (float)*(undefined8 *)(param_1 + 0x1d8) - fVar7;
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20) - fVar2;
  fVar5 = *(float *)(param_1 + 0x1e0) - fVar8;
  fVar6 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  if (1e-08 <= fVar6) {
    fVar6 = SQRT(fVar6);
    fVar3 = fVar3 / fVar6;
    fVar4 = fVar4 / fVar6;
    fVar5 = fVar5 / fVar6;
  }
  else {
    fVar3 = 1.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
  }
  fVar6 = (float)FUN_10045f34c(param_1 + 0x220);
  *param_2 = CONCAT44(fVar2 + fVar4 * fVar6,fVar7 + fVar3 * fVar6);
  *(float *)(param_2 + 1) = fVar8 + fVar5 * fVar6;
  return;
}




void FUN_1003b3300(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,2,3,0x19,0);
  fVar2 = (float)FUN_1003dfe60(param_1,2,9,0x19,0);
  *param_3 = fVar2 + fVar1;
  return;
}




void FUN_1003b3384(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_1003b3398(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,9,0x19,0);
  return;
}




void FUN_1003b33ac(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined ***pppuVar6;
  long lVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined **local_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined1 local_968;
  undefined4 local_964;
  undefined4 uStack_960;
  int local_95c;
  undefined4 local_958;
  undefined8 local_954;
  float local_94c;
  float fStack_948;
  undefined8 local_944;
  undefined8 local_938;
  undefined4 local_930;
  undefined **local_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined1 local_910;
  undefined4 local_90c;
  undefined4 uStack_908;
  int local_904;
  undefined4 local_900;
  undefined8 local_8fc;
  float local_8f4;
  float fStack_8f0;
  undefined8 local_8ec;
  undefined8 local_8e0;
  undefined4 local_8d8;
  undefined1 auStack_8d0 [112];
  undefined **local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined1 local_848;
  undefined4 local_844;
  undefined4 local_840;
  int local_83c;
  undefined4 local_838;
  undefined8 local_834;
  float local_82c;
  float local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined8 local_818;
  undefined4 local_810;
  undefined8 local_7f0;
  undefined **local_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined1 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  int local_7c4;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined8 local_7b4;
  undefined8 local_7ac;
  undefined8 local_7a0;
  undefined4 local_798;
  undefined **local_790;
  undefined8 local_788;
  float local_780;
  float local_77c;
  float local_778;
  undefined4 local_774;
  undefined1 local_770;
  undefined **local_768;
  long local_760;
  undefined1 local_758;
  undefined8 local_754;
  undefined8 local_74c;
  undefined8 local_744;
  undefined4 local_73c;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined4 local_728;
  undefined1 local_724;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined2 local_710;
  byte local_70e;
  float local_70c;
  float local_708;
  float local_704;
  float local_6f8;
  undefined4 local_6f4;
  float local_6f0;
  float fStack_6ec;
  float local_6e8;
  long local_6e0 [200];
  long local_a0;
  
  local_a0 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    lVar7 = *(long *)(param_1 + 0x10);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar7 = *(long *)(lVar7 + 0x10);
    }
    FUN_1003b3218(param_1,&local_6f0);
    lVar5 = FUN_1003e10f0();
    local_758 = 1;
    local_754 = 0;
    local_744 = 0;
    local_74c = 0;
    uStack_730 = 0xbf800000c0000000;
    local_738 = 0xbf800000bf800000;
    local_73c = 0;
    local_728 = 0x3f800000;
    local_724 = 0xff;
    uStack_718 = 0xffffffff00000000;
    local_720 = 0xffffffff02000000;
    local_70e = *(byte *)(lVar5 + 0xe5) | 0x14;
    local_710 = 0x6120;
    local_768 = &PTR_FUN_101499998;
    fVar14 = *(float *)(lVar7 + 0x250);
    fVar13 = *(float *)(lVar7 + 600);
    fVar15 = *(float *)(lVar7 + 0x2ec) + *(float *)(lVar7 + 0x254);
    local_6f8 = local_6e8;
    local_6f4 = 0x3f800000;
    local_788 = 0;
    local_790 = &PTR_FUN_101499a08;
    local_774 = 200;
    local_770 = 0;
    local_780 = fVar14;
    local_77c = fVar15;
    local_778 = fVar13;
    local_760 = lVar7;
    local_70c = fVar14;
    local_708 = fVar15;
    local_704 = fVar13;
    iVar4 = FUN_1003a6ce4(&local_768,local_6e0,200,&local_790);
    puVar3 = PTR_s_Buff_GloballyVisible_10185a1f0;
    if (iVar4 < 1) {
      local_844 = *(undefined4 *)(lVar7 + 0x260);
      local_858 = 0;
      uStack_850 = 0;
      local_848 = 0;
      local_860 = &PTR_FUN_101496b18;
      local_83c = DAT_1018589d8;
      local_834 = 0x13f800000;
      local_82c = local_6f0;
      local_828 = local_6e8;
      local_820 = 0;
      local_824 = 0;
      local_818 = 0;
      local_810 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_840 = local_844;
      local_838 = FUN_1003d4e0c(PTR_s_Buff_Kestrel_C_ClientImpact_10185ac78);
      pppuVar6 = &local_860;
    }
    else {
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar2 = *(undefined4 *)(local_6e0[0] + 0x260);
      local_7bc = FUN_1003dfe60(lVar7,2,8,0x19,0);
      local_7e0 = 0;
      uStack_7d8 = 0;
      local_7d0 = 0;
      local_7e8 = &PTR_FUN_101496b18;
      local_7c4 = DAT_1018589d8;
      local_7b8 = 1;
      local_7a0 = 0;
      local_7ac = 0;
      local_7b4 = 0;
      local_798 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_7cc = uVar1;
      local_7c8 = uVar2;
      local_7c0 = FUN_1003d4e0c(puVar3);
      FUN_10049639c(&local_7e8,&DAT_101e47d30);
      uVar9 = FUN_1003dfe60(lVar7,2,5,5,0);
      uVar10 = FUN_1003dfe60(lVar7,2,5,8,0);
      if ((*(byte *)(local_6e0[0] + 0x2f5) >> 4 & 1) != 0) {
        fVar8 = (float)FUN_1003dfe60(lVar7,2,7,0x19,0);
        uVar9 = (ulong)(uint)(fVar8 * (float)uVar9);
        uVar10 = (ulong)(uint)(fVar8 * (float)uVar10);
      }
      fVar11 = *(float *)(local_6e0[0] + 0x250) - *(float *)(lVar7 + 0x250);
      fVar8 = *(float *)(local_6e0[0] + 600) - *(float *)(lVar7 + 600);
      fVar12 = fVar11 * fVar11 + fVar8 * fVar8;
      if (1e-08 <= fVar12) {
        fVar12 = SQRT(fVar12);
        local_7f0 = CONCAT44(fVar8 / fVar12,fVar11 / fVar12);
      }
      else {
        local_7f0 = DAT_101873a50;
      }
      FUN_1003462a0(uVar9,&local_860,*(undefined4 *)(lVar7 + 0x260),
                    *(undefined4 *)(local_6e0[0] + 0x260),0,2,&local_7f0,
                    *(undefined8 *)(*(long *)(param_1 + 0x38) + 8),0,1);
      local_824 = FUN_1003dfe60(lVar7,2,6,0x19,0);
      FUN_10010cbe0(&local_860);
      FUN_1003462a0(uVar10,auStack_8d0,*(undefined4 *)(lVar7 + 0x260),
                    *(undefined4 *)(local_6e0[0] + 0x260),1,2,&local_7f0,
                    *(undefined8 *)(*(long *)(param_1 + 0x38) + 8),0,1);
      FUN_10010cbe0(auStack_8d0);
      local_6f0 = local_6f0 - fVar14;
      local_6e8 = local_6e8 - fVar13;
      fVar8 = local_6f0 * local_6f0 + (fStack_6ec - fVar15) * (fStack_6ec - fVar15) +
              local_6e8 * local_6e8;
      if (1e-08 <= fVar8) {
        fVar8 = SQRT(fVar8);
        local_6f0 = local_6f0 / fVar8;
        local_6e8 = local_6e8 / fVar8;
      }
      else {
        local_6f0 = 1.0;
        local_6e8 = 0.0;
      }
      fVar8 = *(float *)(local_6e0[0] + 0x250) - fVar14;
      fVar15 = *(float *)(local_6e0[0] + 0x2ec) + (*(float *)(local_6e0[0] + 0x254) - fVar15);
      fVar11 = *(float *)(local_6e0[0] + 600) - fVar13;
      local_90c = *(undefined4 *)(lVar7 + 0x260);
      fVar15 = SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar15 * fVar15);
      fVar14 = fVar14 + local_6f0 * fVar15;
      local_920 = 0;
      uStack_918 = 0;
      local_910 = 0;
      fVar13 = fVar13 + local_6e8 * fVar15;
      local_928 = &PTR_FUN_101496b18;
      local_904 = DAT_1018589d8;
      local_8fc = 0x13f800000;
      local_8ec = 1;
      local_8e0 = 0;
      local_8d8 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_908 = local_90c;
      local_8f4 = fVar14;
      fStack_8f0 = fVar13;
      local_900 = FUN_1003d4e0c(PTR_s_Buff_Kestrel_C_ClientImpact_10185ac78);
      FUN_10049639c(&local_928,&DAT_101e47d30);
      local_964 = *(undefined4 *)(lVar7 + 0x260);
      uStack_960 = *(undefined4 *)(local_6e0[0] + 0x260);
      local_978 = 0;
      uStack_970 = 0;
      local_968 = 0;
      local_980 = &PTR_FUN_101496b18;
      local_95c = DAT_1018589d8;
      local_954 = 0x13f800000;
      local_944 = 1;
      local_938 = 0;
      local_930 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_94c = fVar14;
      fStack_948 = fVar13;
      local_958 = FUN_1003d4e0c(PTR_s_Buff_Kestrel_C_ClientImpactTarge_10185ac80);
      pppuVar6 = &local_980;
    }
    FUN_10049639c(pppuVar6,&DAT_101e47d30);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003b3928(long param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_2 + 0x250) - *(float *)(param_1 + 0x250);
  fVar1 = *(float *)(param_2 + 600) - *(float *)(param_1 + 600);
  *param_3 = fVar2;
  param_3[1] = fVar1;
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar3 < 1e-08) {
    *(undefined8 *)param_3 = DAT_101873a50;
    return;
  }
  fVar3 = SQRT(fVar3);
  *param_3 = fVar2 / fVar3;
  param_3[1] = fVar1 / fVar3;
  return;
}




void FUN_1003b398c(void)

{
  return;
}




void FUN_1003b3990(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined **local_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined1 local_978;
  undefined4 local_974;
  undefined4 uStack_970;
  int local_96c;
  undefined8 local_968;
  undefined4 local_960;
  float local_95c;
  float fStack_958;
  undefined8 local_954;
  undefined8 local_948;
  undefined4 local_940;
  undefined **local_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined1 local_920;
  undefined4 local_91c;
  undefined4 uStack_918;
  int local_914;
  undefined8 local_910;
  undefined4 local_908;
  float local_904;
  float fStack_900;
  undefined4 local_8fc;
  undefined4 uStack_8f8;
  undefined8 local_8f0;
  undefined4 local_8e8;
  undefined1 auStack_8e0 [112];
  undefined **local_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined1 local_858;
  undefined4 local_854;
  undefined4 local_850;
  int local_84c;
  undefined4 local_848;
  undefined8 local_844;
  float local_83c;
  float local_838;
  undefined4 local_834;
  undefined4 local_830;
  undefined8 local_828;
  undefined4 local_820;
  undefined8 local_800;
  undefined **local_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined1 local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  int local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  undefined8 local_7c4;
  undefined8 uStack_7bc;
  undefined8 local_7b0;
  undefined4 local_7a8;
  undefined **local_7a0;
  undefined8 local_798;
  float local_790;
  float local_78c;
  float local_788;
  undefined4 local_784;
  undefined1 local_780;
  undefined **local_778;
  long local_770;
  undefined1 local_768;
  undefined8 local_764;
  undefined8 local_75c;
  undefined8 local_754;
  undefined4 local_74c;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined4 local_738;
  undefined1 local_734;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined2 local_720;
  byte local_71e;
  float local_71c;
  float local_718;
  float local_714;
  float local_708;
  undefined4 local_704;
  float local_700;
  float fStack_6fc;
  float local_6f8;
  long local_6f0 [200];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    lVar8 = *(long *)(param_1 + 0x10);
    while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar8 = *(long *)(lVar8 + 0x10);
    }
    FUN_1003b3218(param_1,&local_700);
    lVar5 = FUN_1003e10f0();
    local_768 = 1;
    local_764 = 0;
    local_754 = 0;
    local_75c = 0;
    uStack_740 = 0xbf800000c0000000;
    local_748 = 0xbf800000bf800000;
    local_74c = 0;
    local_738 = 0x3f800000;
    local_734 = 0xff;
    uStack_728 = 0xffffffff00000000;
    local_730 = 0xffffffff02000000;
    local_71e = *(byte *)(lVar5 + 0xe5) | 0x14;
    local_720 = 0x6120;
    local_778 = &PTR_FUN_101499998;
    fVar14 = *(float *)(lVar8 + 0x250);
    fVar15 = *(float *)(lVar8 + 600);
    fVar16 = *(float *)(lVar8 + 0x2ec) + *(float *)(lVar8 + 0x254);
    local_708 = local_6f8;
    local_704 = 0x3f800000;
    local_798 = 0;
    local_7a0 = &PTR_FUN_101499a08;
    local_784 = 200;
    local_780 = 0;
    local_790 = fVar14;
    local_78c = fVar16;
    local_788 = fVar15;
    local_770 = lVar8;
    local_71c = fVar14;
    local_718 = fVar16;
    local_714 = fVar15;
    uVar3 = FUN_1003a6ce4(&local_778,local_6f0,200,&local_7a0);
    if ((int)uVar3 < 1) {
      local_854 = *(undefined4 *)(lVar8 + 0x260);
      local_868 = 0;
      uStack_860 = 0;
      local_858 = 0;
      local_870 = &PTR_FUN_101496b18;
      local_84c = DAT_1018589d8;
      local_844 = 0x13f800000;
      local_83c = local_700;
      local_838 = local_6f8;
      local_830 = 0;
      local_834 = 0;
      local_828 = 0;
      local_820 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_850 = local_854;
      local_848 = FUN_1003d4e0c(PTR_s_Buff_Kestrel_C_ClientImpact_10185ac78);
      FUN_10049639c(&local_870,&DAT_101e47d30);
    }
    else {
      uVar6 = (ulong)uVar3;
      plVar7 = local_6f0;
      do {
        puVar2 = PTR_s_Buff_GloballyVisible_10185a1f0;
        lVar5 = *plVar7;
        uVar4 = *(undefined4 *)(lVar8 + 0x260);
        uVar1 = *(undefined4 *)(lVar5 + 0x260);
        local_7cc = FUN_1003dfe60(lVar8,2,8,0x19,0);
        local_7f0 = 0;
        uStack_7e8 = 0;
        local_7e0 = 0;
        local_7f8 = &PTR_FUN_101496b18;
        local_7d4 = DAT_1018589d8;
        local_7d0 = 0;
        local_7c8 = 1;
        local_7b0 = 0;
        local_7c4 = 0;
        uStack_7bc = 0;
        local_7a8 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_7dc = uVar4;
        local_7d8 = uVar1;
        local_7d0 = FUN_1003d4e0c(puVar2);
        (*(code *)local_7f8[4])(&local_7f8,&DAT_101e47d30);
        fVar9 = (float)FUN_1003dfe60(lVar8,2,5,5,0);
        local_870._0_4_ = DAT_101d90b94;
        fVar10 = (float)FUN_1003dfee8(lVar8,&local_870,0,9);
        fVar10 = fVar10 * fVar9;
        fVar9 = (float)FUN_1003dfe60(lVar8,2,5,8,0);
        local_870 = (undefined **)CONCAT44(local_870._4_4_,DAT_101d90b94);
        fVar11 = (float)FUN_1003dfee8(lVar8,&local_870,0,9);
        fVar11 = fVar11 * fVar9;
        if ((*(byte *)(lVar5 + 0x2f5) >> 4 & 1) != 0) {
          fVar9 = (float)FUN_1003dfe60(lVar8,2,7,0x19,0);
          local_870._0_4_ = DAT_101d90b94;
          fVar12 = (float)FUN_1003dfee8(lVar8,&local_870,2,9);
          fVar10 = fVar9 * fVar10 * fVar12;
          fVar9 = (float)FUN_1003dfe60(lVar8,2,7,0x19,0);
          local_870 = (undefined **)CONCAT44(local_870._4_4_,DAT_101d90b94);
          fVar12 = (float)FUN_1003dfee8(lVar8,&local_870,2,9);
          fVar11 = fVar9 * fVar11 * fVar12;
        }
        fVar12 = *(float *)(lVar5 + 0x250) - *(float *)(lVar8 + 0x250);
        fVar9 = *(float *)(lVar5 + 600) - *(float *)(lVar8 + 600);
        fVar13 = fVar12 * fVar12 + fVar9 * fVar9;
        if (1e-08 <= fVar13) {
          fVar13 = SQRT(fVar13);
          local_800 = CONCAT44(fVar9 / fVar13,fVar12 / fVar13);
        }
        else {
          local_800 = DAT_101873a50;
        }
        FUN_1003462a0(fVar10,&local_870,*(undefined4 *)(lVar8 + 0x260),
                      *(undefined4 *)(lVar5 + 0x260),0,2,&local_800,
                      *(undefined8 *)(*(long *)(param_1 + 0x38) + 8),0,1);
        local_834 = FUN_1003dfe60(lVar8,2,6,0x19,0);
        FUN_10010cbe0(&local_870);
        FUN_1003462a0(fVar11,auStack_8e0,*(undefined4 *)(lVar8 + 0x260),
                      *(undefined4 *)(lVar5 + 0x260),1,2,&local_800,
                      *(undefined8 *)(*(long *)(param_1 + 0x38) + 8),0,1);
        FUN_10010cbe0(auStack_8e0);
        fVar9 = local_700 - fVar14;
        fVar10 = local_6f8 - fVar15;
        fVar11 = fVar9 * fVar9 + (fStack_6fc - fVar16) * (fStack_6fc - fVar16) + fVar10 * fVar10;
        if (1e-08 <= fVar11) {
          fVar11 = SQRT(fVar11);
          fVar9 = fVar9 / fVar11;
          fVar10 = fVar10 / fVar11;
        }
        else {
          fVar9 = 1.0;
          fVar10 = 0.0;
        }
        fVar11 = *(float *)(lVar5 + 0x250) - fVar14;
        fVar12 = *(float *)(lVar5 + 0x2ec) + (*(float *)(lVar5 + 0x254) - fVar16);
        fVar13 = *(float *)(lVar5 + 600) - fVar15;
        local_91c = *(undefined4 *)(lVar8 + 0x260);
        uStack_918 = *(undefined4 *)(lVar5 + 0x260);
        fVar11 = SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12);
        fVar9 = fVar14 + fVar9 * fVar11;
        local_930 = 0;
        uStack_928 = 0;
        local_920 = 0;
        local_938 = &PTR_FUN_101496b18;
        fVar10 = fVar15 + fVar10 * fVar11;
        local_914 = DAT_1018589d8;
        local_910 = 0x3f80000000000000;
        local_908 = 1;
        local_8fc = 0;
        uStack_8f8 = 0;
        local_8f0 = 0;
        local_8e8 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_904 = fVar9;
        fStack_900 = fVar10;
        uVar4 = FUN_1003d4e0c(PTR_s_Buff_Kestrel_C_ClientImpact_10185ac78);
        local_910 = CONCAT44(local_910._4_4_,uVar4);
        (*(code *)local_938[4])(&local_938,&DAT_101e47d30);
        local_974 = *(undefined4 *)(lVar8 + 0x260);
        uStack_970 = *(undefined4 *)(lVar5 + 0x260);
        local_988 = 0;
        uStack_980 = 0;
        local_978 = 0;
        local_990 = &PTR_FUN_101496b18;
        local_96c = DAT_1018589d8;
        local_968 = 0x3f80000000000000;
        local_960 = 1;
        local_954 = 1;
        local_948 = 0;
        local_940 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_95c = fVar9;
        fStack_958 = fVar10;
        uVar4 = FUN_1003d4e0c(PTR_s_Buff_Kestrel_C_ClientImpactTarge_10185ac80);
        local_968 = CONCAT44(local_968._4_4_,uVar4);
        (*(code *)local_990[4])(&local_990,&DAT_101e47d30);
        plVar7 = plVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003b4054(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




float FUN_1003b4068(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar2 + 0x50);
  fVar3 = 0.0;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      fVar3 = -0.0;
    }
    else {
      fVar3 = (float)FUN_1003ad218(0);
      fVar3 = -fVar3;
    }
    local_38[0] = DAT_101d90bb0;
    fVar4 = (float)FUN_1003dfee8(param_1,local_38,1,9);
    fVar3 = fVar3 * fVar4;
  }
  return fVar3;
}




float FUN_1003b4110(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar2 + 0x58);
  fVar3 = 0.0;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      fVar3 = -0.0;
    }
    else {
      fVar3 = (float)FUN_1003ad218(0);
      fVar3 = -fVar3;
    }
    local_38[0] = DAT_101d90bb0;
    fVar4 = (float)FUN_1003dfee8(param_1,local_38,2,9);
    fVar3 = fVar3 * fVar4;
  }
  return fVar3;
}




float FUN_1003b41b8(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar2 + 0x60);
  fVar3 = 0.0;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      fVar3 = -0.0;
    }
    else {
      fVar3 = (float)FUN_1003ad218(0);
      fVar3 = -fVar3;
    }
    local_38[0] = DAT_101d90bb0;
    fVar4 = (float)FUN_1003dfee8(param_1,local_38,3,9);
    fVar3 = fVar3 * fVar4;
  }
  return fVar3;
}




void FUN_1003b4260(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  plVar2 = (long *)(param_1 + 0x18);
  do {
    lVar3 = *plVar2;
    plVar2 = (long *)(lVar3 + 0x20);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
  lVar3 = *(long *)(lVar3 + 0x28);
  uVar1 = 0;
  if (lVar3 != 0) {
    do {
      if ((*(int *)(lVar3 + 0x314) == DAT_101d2c8d4) && (*(int *)(lVar3 + 0x310) == 0)) {
        uVar1 = 1;
        goto LAB_1003b42dc;
      }
      lVar3 = *(long *)(lVar3 + 0x350);
    } while (lVar3 != 0);
    uVar1 = 0;
  }
LAB_1003b42dc:
  *param_2 = uVar1;
  return;
}




void FUN_1003b42e4(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  plVar2 = (long *)(param_1 + 0x18);
  do {
    lVar3 = *plVar2;
    plVar2 = (long *)(lVar3 + 0x20);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
  lVar3 = *(long *)(lVar3 + 0x28);
  do {
    if (lVar3 == 0) {
      uVar1 = 1;
LAB_1003b4364:
      *param_2 = uVar1;
      return;
    }
    if ((*(int *)(lVar3 + 0x314) == DAT_101d2c8d4) && (*(int *)(lVar3 + 0x310) == 0)) {
      uVar1 = 0;
      goto LAB_1003b4364;
    }
    lVar3 = *(long *)(lVar3 + 0x350);
  } while( true );
}




void FUN_1003b436c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(param_1,lVar1);
  lVar2 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Koshka_Talent_Frenzied_10185ac90;
  lVar1 = lVar1 + 0xb0;
  plVar3 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__Koshka__A_101858fd8);
  local_40 = FUN_1003b4068;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_40);
  plVar3 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__Koshka__B_101858fe0);
  local_40 = FUN_1003b4110;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_40);
  plVar3 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__Koshka__C_101858fe8);
  local_40 = FUN_1003b41b8;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_40);
  return;
}




float FUN_1003b44ac(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x40);
}




uint FUN_1003b4510(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)param_2 * 8 + 0x50);
  if (lVar1 != 0) {
    return *(uint *)(lVar1 + 0x238) >> 10 & 7;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b4534(long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_98;
  float fStack_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  float fStack_80;
  uint local_7c;
  undefined2 local_78;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  uVar3 = FUN_1003dfe60(lVar1,0,3,0x19,0);
  *param_3 = uVar3;
  uVar6 = *(undefined4 *)(param_2 + 0x250);
  fVar9 = *(float *)(param_2 + 0x254);
  uVar7 = *(undefined4 *)(param_2 + 600);
  fVar10 = *(float *)(param_2 + 0x2ec);
  uVar8 = *(undefined8 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  fVar4 = 0.0;
  fVar11 = -1.0;
  plVar2 = *(long **)(param_1 + 0x1c8);
  fVar5 = 0.0;
  if (plVar2 == (long *)0x0) goto LAB_1003b4680;
  fVar5 = fVar4;
  if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
    lVar1 = (**(code **)(*plVar2 + 0x10))();
    if (lVar1 == 0) {
      fVar11 = -1.0;
    }
    else {
      lVar1 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
      fVar11 = -1.0;
      if ((*(byte *)(lVar1 + 0x2f4) & 1) != 0) {
        fVar11 = 0.2;
      }
    }
    plVar2 = *(long **)(param_1 + 0x1c8);
    if (plVar2 == (long *)0x0) goto LAB_1003b4680;
    if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      lVar1 = (**(code **)(*plVar2 + 0x10))();
      if (lVar1 != 0) {
        lVar1 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
        fVar5 = 0.0;
        if ((*(byte *)(lVar1 + 0x2f5) & 0x10) != 0) {
          fVar5 = -0.5;
        }
      }
      goto LAB_1003b4680;
    }
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
LAB_1003b4680:
  lVar1 = *(long *)(param_2 + 0x18);
  local_7c = 0;
  if (lVar1 != 0) {
    do {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) {
        local_7c = *(byte *)(lVar1 + 0x818) >> 3 & 3;
        goto LAB_1003b46b4;
      }
      lVar1 = *(long *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    local_7c = 0;
  }
LAB_1003b46b4:
  fStack_94 = fVar10 + fVar9;
  local_78 = 1;
  lVar1 = *(long *)(param_2 + 0x40);
  fVar4 = *(float *)(lVar1 + 0x78) + *(float *)(lVar1 + 300) * (*(float *)(lVar1 + 0x294) + 1.0);
  NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x1e0),DAT_101e94360);
  fStack_80 = (fVar5 + fVar11) - DAT_101e942a0;
  local_98 = uVar6;
  local_90 = uVar7;
  local_8c = uVar8;
  local_84 = uVar3;
  FUN_1003a7f34(fStack_80,fVar5 + fVar11,DAT_101e94360,0x3f800000,&local_98,param_4,0);
  return;
}




void FUN_1003b474c(undefined8 param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  
  fVar3 = *(float *)(param_2 + 0x250);
  fVar1 = *(float *)(param_2 + 0x254);
  fVar4 = *(float *)(param_2 + 600);
  fVar2 = *(float *)(param_2 + 0x2ec);
  FUN_1003b4534(param_1,param_2,&local_44,&local_50);
  fVar3 = fVar3 - local_50;
  fStack_4c = (fVar2 + fVar1) - fStack_4c;
  fVar4 = fVar4 - local_48;
  *param_3 = SQRT(fVar3 * fVar3 + fStack_4c * fStack_4c + fVar4 * fVar4) / local_44;
  return;
}




void FUN_1003b47d0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  FUN_1003b474c();
  *param_3 = *param_3 + 0.25;
  return;
}




void FUN_1003b4800(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




int FUN_1003b4814(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_10045fb10(lVar4);
      if (uVar1 <= uVar3) {
        return iVar2;
      }
      lVar4 = FUN_10045fa7c(lVar4,uVar3);
      if (lVar4 != 0) {
        iVar2 = (*(uint *)(lVar4 + 0x2f4) & 1) + iVar2;
      }
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(param_1 + 0x60);
    } while (lVar4 != 0);
  }
  return iVar2;
}




void FUN_1003b488c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,6,0x19,0);
  return;
}




void FUN_1003b48a0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ba8;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




int FUN_1003b48d4(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_1,1,3,0x19,0);
  return (int)fVar1;
}




void FUN_1003b48fc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




undefined4 FUN_1003b4910(void)

{
  return 0x3dcccccd;
}




void FUN_1003b491c(float param_1,undefined8 param_2,float *param_3)

{
  *param_3 = param_1 * 1.0606;
  return;
}




void FUN_1003b4938(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  
  if (DAT_101d23a38 != '\0') {
    plVar2 = *(long **)(param_1 + 0x1c8);
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
    }
    else if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
    uVar4 = FUN_1003a7e54(uVar3,1);
    if (((uVar4 & 1) != 0) || (iVar1 = FUN_1003a7e54(uVar3,4), iVar1 != 0)) {
      do {
        param_1 = *(long *)(param_1 + 0x10);
      } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
      local_2c = *(undefined4 *)(param_1 + 0x260);
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      local_48 = &PTR_FUN_101496c68;
      uStack_28 = 2;
      local_24 = 0;
      FUN_100496668(&local_48,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_1003b4a2c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496c68;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)((long)param_1 + 0x24) = param_4;
  *(undefined1 *)((long)param_1 + 0x25) = param_5;
  return;
}




void FUN_1003b4a50(void)

{
  return;
}




void FUN_1003b4a54(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined **local_6f8;
  long local_6f0;
  undefined1 local_6e8;
  undefined4 local_6e4;
  float fStack_6e0;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  float local_6c8;
  undefined8 local_6c4;
  undefined8 uStack_6bc;
  undefined1 local_6b4;
  undefined4 local_6b0;
  undefined8 local_6ac;
  undefined4 local_6a4;
  undefined2 local_6a0;
  byte local_69e;
  undefined8 local_698 [200];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    lVar3 = *(long *)(param_1 + 0x10);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar3 = *(long *)(lVar3 + 0x10);
    }
    lVar2 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
    uVar8 = *(undefined4 *)(lVar2 + 0x250);
    fVar6 = *(float *)(lVar2 + 0x254);
    uVar9 = *(undefined4 *)(lVar2 + 600);
    fVar7 = *(float *)(lVar2 + 0x2ec);
    local_6f8 = &PTR_FUN_101499960;
    local_6f0 = 0;
    local_6d8 = 0;
    uStack_6d0 = 0;
    uStack_6bc = 0x3f800000bf800000;
    local_6c4 = 0xc0000000bf800000;
    local_6b4 = 0xff;
    local_6ac = 0xffffffff;
    local_6a4 = 0xffffffff;
    local_6e8 = 1;
    lVar2 = FUN_1003e10f0();
    local_69e = *(byte *)(lVar2 + 0xe5);
    local_6b0 = 0x40000;
    if (lVar3 != 0) {
      local_6f0 = lVar3;
    }
    local_698[0]._0_4_ = DAT_101d90bb8;
    local_6c8 = (float)FUN_1003dfee8(lVar3,local_698,0,9);
    local_6c8 = local_6c8 * local_6c8;
    local_69e = local_69e | 0x14;
    local_6a0 = 0xc120;
    local_6e4 = uVar8;
    fStack_6e0 = fVar7 + fVar6;
    local_6dc = uVar9;
    uVar1 = FUN_1003a6ce4(&local_6f8,local_698,200,0);
    if (0 < (int)uVar1) {
      uVar4 = (ulong)uVar1;
      puVar5 = local_698;
      do {
        FUN_1003b4bec(param_1,*puVar5);
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003b4bec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 == 0) {
    lVar1 = FUN_1010a0298(param_1,DAT_101867320);
    *(long *)(param_1 + 0x60) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_10045f9f0(lVar1,param_2);
  return;
}




void FUN_1003b4c3c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_1003b4c50(long param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x68) & 0x1f;
  if (((int)uVar4 != 0x1f) && (*(short *)(lVar7 + uVar4 * 0x38 + 0x70) == 2)) {
    FUN_1003b98c8(lVar7);
  }
  if (param_3 != 0) {
    piVar1 = &DAT_101d90970;
    if (*(long *)(lVar7 + 0x1f8) != 0) {
      piVar1 = (int *)(*(long *)(lVar7 + 0x1f8) + 0x50);
    }
    iVar5 = *piVar1;
    if ((iVar5 != DAT_101d90970) &&
       (uVar4 = (ulong)*(byte *)(param_1 + 0x198), *(byte *)(param_1 + 0x198) != 0)) {
      lVar8 = 10;
      while( true ) {
        lVar3 = *(long *)(param_1 + lVar8 * 8);
        lVar6 = *(long *)(lVar3 + 0x1f8);
        piVar2 = &DAT_101d90970;
        if (lVar6 != 0) {
          piVar2 = (int *)(lVar6 + 0x50);
        }
        if (iVar5 == *piVar2 && lVar7 != lVar3) {
          FUN_1003b98c8();
          uVar4 = (ulong)*(byte *)(param_1 + 0x198);
        }
        if (uVar4 <= lVar8 - 9U) break;
        iVar5 = *piVar1;
        lVar8 = lVar8 + 1;
      }
    }
  }
  return;
}




void FUN_1003b4d30(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  *param_3 = DAT_101e94270;
  *param_5 = 3;
  *param_4 = 0;
  return;
}




undefined8
FUN_1003b4da4(undefined8 param_1,char *param_2,undefined8 *param_3,uint param_4,undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(code **)(lVar4 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar4 + 0x10,param_1);
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3f4ccccd;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  plVar5 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3ecccccd);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f000000);
  (**(code **)(*plVar5 + 0x20))(0x41700000);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = param_5;
  if (0 < (int)param_4) {
    lVar4 = FUN_10000e524();
    FUN_1003a985c(&local_60,lVar4);
    uVar9 = *param_3;
    uVar3 = FUN_1010a1520();
    lVar6 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
    uVar2 = FUN_1003aa420(*(undefined4 *)(lVar6 + 0x108));
    *(undefined8 *)(lVar4 + 0x10) = uVar9;
    *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar4 + 0x34) = 1;
    *(undefined4 *)(lVar4 + 0x3c) = uVar2;
    *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
    *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    if (param_4 != 1) {
      lVar6 = (ulong)param_4 - 1;
      bVar8 = 1;
      do {
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar4 + (ulong)bVar8 * 8 + 0x10) = *param_3;
        bVar8 = bVar8 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *(byte *)(lVar4 + 0x31) = bVar8;
    }
  }
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffef | 3;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar7;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar3);
  return local_60;
}




float FUN_1003b5038(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x10c);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b509c(long param_1,long param_2,undefined4 *param_3,float *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  
  lVar3 = param_1;
  do {
    lVar3 = *(long *)(lVar3 + 0x10);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
  uVar6 = FUN_1003dfe60(lVar3,0,4,0x19,0);
  *param_3 = uVar6;
  fVar13 = *(float *)(param_2 + 0x250);
  fVar12 = *(float *)(param_2 + 600);
  fVar14 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
  fVar15 = *(float *)(param_1 + 0x1d8);
  fVar16 = *(float *)(param_1 + 0x1dc);
  fVar17 = *(float *)(param_1 + 0x1e0);
  plVar4 = *(long **)(param_1 + 0x1c8);
  if (plVar4 == (long *)0x0) {
    bVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1d0) != (int)plVar4[1]) {
      bVar1 = 0;
LAB_1003b51d0:
      bVar5 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
      goto LAB_1003b51e8;
    }
    lVar3 = (**(code **)(*plVar4 + 0x10))();
    if (lVar3 == 0) {
      bVar1 = 0;
    }
    else {
      lVar3 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
      bVar1 = *(byte *)(lVar3 + 0x2f4) & 1;
    }
    plVar4 = *(long **)(param_1 + 0x1c8);
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x1d0) != (int)plVar4[1]) goto LAB_1003b51d0;
      lVar3 = (**(code **)(*plVar4 + 0x10))();
      if (lVar3 != 0) {
        lVar3 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
        bVar5 = *(byte *)(lVar3 + 0x2f5) >> 4 & 1;
        goto LAB_1003b51e8;
      }
    }
  }
  bVar5 = 0;
LAB_1003b51e8:
  fVar9 = fVar13 - fVar15;
  fVar8 = fVar14 - fVar16;
  fVar7 = fVar12 - fVar17;
  fVar18 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
  if (fVar18 <= 0.01) {
    *param_4 = fVar13;
    param_4[1] = fVar14;
    param_4[2] = fVar12;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x40);
    fVar10 = *(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0);
    NEON_fminnm(fVar10 + fVar10 * *(float *)(lVar3 + 0x1e0),DAT_101e94360);
    fVar10 = 0.5;
    if (bVar1 != 0) {
      fVar10 = -*(float *)(*(long *)(param_2 + 0x38) + 0x68);
    }
    fVar11 = 0.0;
    if (bVar5 != 0) {
      fVar11 = -*(float *)(*(long *)(param_2 + 0x38) + 0x68);
    }
    fVar11 = fVar10 + DAT_101e942a0 + fVar11;
    fVar10 = 1.0 / SQRT(fVar18);
    fVar9 = fVar11 * fVar9 * fVar10;
    fVar8 = fVar11 * fVar8 * fVar10;
    fVar10 = fVar11 * fVar7 * fVar10;
    local_80 = fVar9 + fVar15;
    fStack_7c = fVar8 + fVar16;
    local_78 = fVar10 + fVar17;
    local_a0 = 0x4000000040000000;
    local_98 = 0x40000000;
    for (lVar3 = *(long *)(param_2 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == ram0x0001018672a0) {
        bVar1 = *(byte *)(lVar3 + 0x818) >> 3 & 3;
        goto LAB_1003b530c;
      }
    }
    bVar1 = 0;
LAB_1003b530c:
    iVar2 = FUN_10054e044(bVar1,&local_80,&local_90,&local_a0);
    if ((iVar2 == 0) || (fVar18 <= fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10)) {
      *param_4 = fVar13;
      param_4[1] = fVar14;
      param_4[2] = fVar12;
    }
    else {
      *(undefined8 *)param_4 = local_90;
      param_4[2] = local_88;
    }
  }
  return;
}




void FUN_1003b537c(undefined8 param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  
  fVar3 = *(float *)(param_2 + 0x250);
  fVar1 = *(float *)(param_2 + 0x254);
  fVar4 = *(float *)(param_2 + 600);
  fVar2 = *(float *)(param_2 + 0x2ec);
  FUN_1003b509c(param_1,param_2,&local_44,&local_50);
  fVar3 = fVar3 - local_50;
  fStack_4c = (fVar2 + fVar1) - fStack_4c;
  fVar4 = fVar4 - local_48;
  *param_3 = SQRT(fVar3 * fVar3 + fStack_4c * fStack_4c + fVar4 * fVar4) / local_44;
  return;
}




void FUN_1003b5400(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003b5414(long param_1,long param_2,float *param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  uVar1 = FUN_1003a34a4(lVar2,DAT_101d2c948);
  fVar4 = (float)FUN_1003dfe60(lVar3,1,2,0x19,0);
  fVar5 = (float)FUN_1003dfe60(lVar3,1,3,0x19,0);
  *param_3 = fVar4 + (float)uVar1 * fVar5;
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_1003b550c(undefined8 param_1,long param_2)

{
  *(bool *)(param_2 + 0x60) =
       1.1920929e-07 <= ABS((float)DAT_101dc1cb8) || 1.1920929e-07 <= ABS(DAT_101dc1cb8._4_4_);
  *(ulong *)(param_2 + 100) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
  return;
}




undefined1  [16] FUN_1003b5554(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined8 local_740;
  undefined8 local_738;
  float local_730;
  undefined8 local_72c;
  undefined8 uStack_724;
  undefined4 local_71c;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined **local_708;
  long local_700;
  undefined1 local_6f8;
  undefined4 local_6f4;
  float fStack_6f0;
  undefined4 local_6ec;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  float local_6d8;
  undefined8 local_6d4;
  undefined8 uStack_6cc;
  undefined1 local_6c4;
  undefined4 local_6c0;
  undefined8 local_6bc;
  undefined4 local_6b4;
  undefined2 local_6b0;
  byte local_6ae;
  long local_6a8 [200];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  plVar6 = *(long **)(param_1 + 0x1c8);
  lVar7 = 0;
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
    }
    else {
      lVar7 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  iVar5 = DAT_10184dd68;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar8 = lVar9;
  if (lVar9 == 0) {
    lVar8 = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(lVar8 + 8) + 0xa4) == DAT_10184dd68) break;
      lVar8 = *(long *)(lVar8 + 0x10);
    } while (lVar8 != 0);
  }
  if (lVar7 == 0) {
    fVar16 = 0.0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    uVar4 = FUN_1003a34a4(lVar7,DAT_101d2c948);
    fVar16 = (float)uVar4;
  }
  if (lVar9 == 0) {
    FUN_1011485a4();
  }
  else {
    iVar1 = *(int *)(*(long *)(lVar9 + 8) + 0xa4);
    lVar7 = lVar9;
    if (iVar1 == iVar5) {
      auVar12 = FUN_1003dfe60(lVar9,1,4,0x19,0);
    }
    else {
      do {
        lVar7 = *(long *)(lVar7 + 0x10);
      } while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != iVar5);
      auVar12 = FUN_1003dfe60(lVar7,1,4,0x19,0);
      while (iVar1 != iVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        iVar1 = *(int *)(*(long *)(lVar9 + 8) + 0xa4);
      }
    }
    uVar15 = auVar12._8_8_;
    fVar11 = (float)FUN_1003dfe60(lVar9,1,5,0x19,0);
    puVar3 = PTR_s_Buff_Krul_Talent_HealingSmite_10185ace8;
    fVar16 = auVar12._0_4_ + fVar16 * fVar11;
    uVar14 = CONCAT44(auVar12._4_4_,fVar16);
    lVar7 = FUN_100345d90(*(undefined4 *)(lVar8 + 0x260));
    if ((lVar7 != 0) && (iVar5 = FUN_1003a47d0(lVar7,puVar3), iVar5 != 0)) {
      uVar17 = *(undefined4 *)(lVar8 + 0x250);
      fVar11 = *(float *)(lVar8 + 0x254);
      uVar18 = *(undefined4 *)(lVar8 + 600);
      fVar13 = *(float *)(lVar8 + 0x2ec);
      local_708 = &PTR_FUN_101499960;
      local_6e8 = 0;
      uStack_6e0 = 0;
      uStack_6cc = 0x3f800000bf800000;
      local_6d4 = 0xc0000000bf800000;
      local_6c4 = 0xff;
      local_6bc = 0xffffffff;
      local_6b4 = 0xffffffff;
      local_6f8 = 1;
      lVar7 = FUN_1003e10f0();
      bVar2 = *(byte *)(lVar7 + 0xe5);
      local_6c0 = 1;
      local_6a8[0]._0_4_ = DAT_101d90be0;
      local_700 = lVar8;
      local_6d8 = (float)FUN_1003dfee8(lVar8,local_6a8,2,9);
      local_6d8 = local_6d8 * local_6d8;
      local_6ae = bVar2 | 0x14;
      local_6b0 = 0xc110;
      local_6a8[0]._0_4_ = DAT_101d90be0;
      local_6f4 = uVar17;
      fStack_6f0 = fVar13 + fVar11;
      local_6ec = uVar18;
      fVar11 = (float)FUN_1003dfee8(lVar8,local_6a8,0,9);
      fVar11 = fVar11 * fVar16;
      uVar14 = (ulong)(uint)fVar11;
      uVar15 = 0;
      uVar4 = FUN_1003a6ce4(&local_708,local_6a8,200,0);
      if (uVar4 != 0) {
        uVar10 = (ulong)uVar4;
        plVar6 = local_6a8;
        do {
          if (*plVar6 != 0) {
            local_748 = *(undefined4 *)(lVar8 + 0x260);
            uVar17 = *(undefined4 *)(*plVar6 + 0x260);
            uStack_744 = uVar17;
            local_740 = FUN_100345d90();
            local_738 = FUN_100345d90(uVar17);
            local_72c = 0;
            uStack_724 = 0;
            local_71c = 0;
            uStack_710 = 0xffffffff000000ee;
            local_718 = 0xffffffffffffffff;
            local_730 = fVar11;
            FUN_10010cbe4(&local_748);
          }
          plVar6 = plVar6 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
      auVar12._8_8_ = uVar15;
      auVar12._0_8_ = uVar14;
      return auVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




bool FUN_1003b5884(long param_1)

{
  long lVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x58);
  if (lVar1 != 0) {
    return (*(byte *)(lVar1 + 0x239) & 0x1c) != 0;
  }
  return false;
}




void FUN_1003b58cc(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  
  *param_4 = *(undefined4 *)(param_2 + 0x250);
  fVar1 = *(float *)(param_2 + 0x254);
  param_4[1] = fVar1;
  param_4[2] = *(undefined4 *)(param_2 + 600);
  param_4[1] = *(float *)(param_2 + 0x2ec) + fVar1;
  return;
}




void FUN_1003b58f4(undefined8 param_1,long param_2,undefined8 param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *(float *)(param_2 + 0x240);
  fVar3 = *(float *)(param_2 + 0x248);
  fVar4 = fVar2 * fVar2 + *(float *)(param_2 + 0x244) * *(float *)(param_2 + 0x244) + fVar3 * fVar3;
  if (1e-08 <= fVar4) {
    fVar4 = SQRT(fVar4);
    fVar2 = fVar2 / fVar4;
    fVar3 = fVar3 / fVar4;
  }
  else {
    fVar2 = 1.0;
    fVar3 = 0.0;
  }
  fVar5 = *(float *)(param_2 + 0x254);
  fVar4 = *(float *)(param_2 + 600);
  fVar6 = *(float *)(param_2 + 0x2ec);
  fVar7 = fVar2 * fVar2 + fVar3 * fVar3;
  if (1e-08 <= fVar7) {
    fVar7 = SQRT(fVar7);
    fVar2 = fVar2 / fVar7;
    fVar3 = fVar3 / fVar7;
  }
  else {
    fVar2 = 1.0;
    fVar3 = 0.0;
  }
  lVar1 = *(long *)(param_2 + 0x40);
  fVar7 = *(float *)(lVar1 + 0x78) + *(float *)(lVar1 + 300) * (*(float *)(lVar1 + 0x294) + 1.0);
  NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar1 + 0x1e0),DAT_101e94360);
  fVar7 = *(float *)(*(long *)(param_2 + 0x38) + 100);
  fVar7 = DAT_101e942a0 +
          ((*(float *)(param_2 + 0x2e8) + fVar7) * *(float *)(*(long *)(param_2 + 0x38) + 0x68)) /
          fVar7 + 0.5;
  *param_4 = *(float *)(param_2 + 0x250) + fVar2 * fVar7;
  param_4[1] = fVar6 + fVar5 + fVar7 * 0.0;
  param_4[2] = fVar4 + fVar3 * fVar7;
  return;
}




float FUN_1003b59f4(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar2 + 0x50);
  fVar3 = 0.0;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      fVar3 = -0.0;
    }
    else {
      fVar3 = (float)FUN_1003ad218(0);
      fVar3 = -fVar3;
    }
    local_38[0] = DAT_101d90bf8;
    fVar4 = (float)FUN_1003dfee8(param_1,local_38,1,9);
    fVar3 = fVar3 * fVar4;
  }
  return fVar3;
}




float FUN_1003b5a9c(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar2 + 0x60);
  fVar3 = 0.0;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      fVar3 = -0.0;
    }
    else {
      fVar3 = (float)FUN_1003ad218(0);
      fVar3 = -fVar3;
    }
    local_38[0] = DAT_101d90bf8;
    fVar4 = (float)FUN_1003dfee8(param_1,local_38,2,9);
    fVar3 = fVar3 * fVar4;
  }
  return fVar3;
}




void FUN_1003b5b44(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x1c8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        lVar2 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
        *param_4 = *(undefined4 *)(lVar2 + 0x260);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return;
}




undefined8
FUN_1003b5bbc(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4,char *param_5,
             undefined8 param_6,undefined8 param_7,int param_8)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_70,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Lance_CircleStrafing_10185ad00);
  local_80 = FUN_1003b6140;
  local_78 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_80);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,FUN_1003b5b44);
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_1003b5884);
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_70,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,param_2);
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffef | 3;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_5 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar2 = *param_5;
    while (cVar2 != '\0') {
      param_5 = param_5 + 1;
      uVar7 = (uVar7 ^ (int)cVar2) * 0x1000193;
      cVar2 = *param_5;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar7;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  uVar9 = *param_3;
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar10 = FUN_1003b6154(*(undefined4 *)(lVar6 + 0x2d0));
  *(undefined8 *)(lVar4 + 0x10) = uVar9;
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar10;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  if (1 < param_4) {
    lVar6 = (ulong)param_4 - 1;
    bVar8 = 1;
    do {
      param_3 = param_3 + 1;
      *(undefined8 *)(lVar4 + (ulong)bVar8 * 8 + 0x10) = *param_3;
      bVar8 = bVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(byte *)(lVar4 + 0x31) = bVar8;
  }
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  if (param_1 == 0) {
    *(code **)(lVar4 + 0x18) = FUN_1003c5148;
  }
  else {
    *(long *)(lVar4 + 0x20) = param_1;
  }
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  uVar5 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar5);
  plVar3 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_70,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_7);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar5);
  lVar4 = FUN_10000ecbc();
  FUN_1003a985c(&local_70,lVar4);
  *(code **)(lVar4 + 0x70) = FUN_1003b58cc;
  *(code **)(lVar4 + 0x78) = FUN_1003b58f4;
  *(undefined4 *)(lVar4 + 0x88) = 0x3f800000;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(undefined8 *)(lVar4 + 0x24) = 0;
  *(undefined8 *)(lVar4 + 0x34) = 0;
  *(undefined8 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar4 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar4 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x4120;
  *(byte *)(lVar4 + 0x8c) = *(byte *)(lVar4 + 0x8c) | 1;
  plVar3 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_70,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,"DefaultAttackAOE");
  (**(code **)(*plVar3 + 0x70))(plVar3,param_7);
  uVar5 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar5);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = param_6;
  *(undefined4 *)(lVar4 + 0x18) = 0x3dcccccd;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  if (param_8 == 0) {
    uVar5 = FUN_10000c784();
    FUN_1003a985c(&local_70,uVar5);
  }
  else {
    plVar3 = (long *)FUN_10000cb8c();
    FUN_1003a985c(&local_70,plVar3);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
    (**(code **)(*plVar3 + 0x30))(plVar3,2);
    uVar5 = FUN_10000c784();
    FUN_1003a985c(&local_70,uVar5);
    plVar3 = (long *)FUN_10000c5ec();
    FUN_1003a985c(&local_70,plVar3);
    (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Lance_EmpoweredAutoattackAv_10185ad08);
  }
  lVar4 = FUN_10000c838();
  FUN_1003a985c(&local_70,lVar4);
  uVar5 = DAT_10185ad10;
  *(ushort *)(lVar4 + 0x58) = *(ushort *)(lVar4 + 0x58) & 0xf00f | 0x20;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined1 *)(lVar4 + 0x50) = 2;
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  plVar3 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar4 + 0x18,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__Lance__A_1018596a0);
  local_80 = FUN_1003b59f4;
  local_78 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_80);
  plVar3 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar4 + 0x18,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__Lance__C_1018596b0);
  local_80 = FUN_1003b5a9c;
  local_78 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_80);
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar5);
  return local_70;
}




void FUN_1003b6140(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,10,0x19,0);
  return;
}




float FUN_1003b6154(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x2cc);
}




void FUN_1003b61b8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b61cc(long param_1,long param_2,float *param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined4 local_70;
  uint uStack_6c;
  undefined2 local_68;
  
  fVar5 = *(float *)(param_2 + 0x250);
  fVar6 = *(float *)(param_2 + 600);
  fVar3 = *(float *)(param_1 + 0x1d8) - fVar5;
  fVar2 = *(float *)(param_1 + 0x1e0) - fVar6;
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2;
  if (1e-08 <= fVar4) {
    fVar4 = SQRT(fVar4);
    fVar3 = fVar3 / fVar4;
    fVar2 = fVar2 / fVar4;
  }
  else {
    fVar3 = 1.0;
    fVar2 = 0.0;
  }
  fVar7 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
  fVar4 = (float)FUN_10045f34c(param_1 + 0x220);
  lVar1 = *(long *)(param_2 + 0x18);
  uStack_6c = 0;
  if (lVar1 != 0) {
    do {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) {
        uStack_6c = *(byte *)(lVar1 + 0x818) >> 3 & 3;
        goto LAB_1003b629c;
      }
      lVar1 = *(long *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    uStack_6c = 0;
  }
LAB_1003b629c:
  fStack_74 = fVar6 + fVar2 * fVar4;
  local_78 = fVar7 + fVar4 * 0.0;
  fStack_7c = fVar5 + fVar3 * fVar4;
  local_70 = 0;
  local_68 = 1;
  local_88 = fVar5;
  fStack_84 = fVar7;
  local_80 = fVar6;
  FUN_1003a7f34(&local_88,param_4,0);
  fVar2 = *param_4;
  fVar4 = param_4[2];
  fVar3 = (float)FUN_1003dfe60(param_2,0,2,0x19,0);
  *param_3 = SQRT((fVar2 - fVar5) * (fVar2 - fVar5) + (fVar4 - fVar6) * (fVar4 - fVar6)) / fVar3;
  return;
}




void FUN_1003b632c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,2,0x19,0);
  return;
}




void thunk_FUN_1003b61cc(void)

{
  FUN_1003b61cc();
  return;
}




void FUN_1003b6344(long param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_60;
  float local_58;
  undefined1 auStack_54 [4];
  
  lVar5 = param_1;
  do {
    lVar5 = *(long *)(lVar5 + 0x10);
  } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68);
  fVar11 = *(float *)(lVar5 + 0x250);
  fVar12 = *(float *)(lVar5 + 0x254);
  fVar13 = *(float *)(lVar5 + 600);
  fVar14 = *(float *)(lVar5 + 0x2ec);
  FUN_1003b61cc(param_1,lVar5,auStack_54,&local_60);
  *(undefined8 *)param_2 = local_60;
  param_2[2] = local_58;
  fVar8 = *param_2;
  fVar9 = param_2[1];
  fVar7 = fVar8 - fVar11;
  fVar12 = fVar12 + fVar14;
  fVar14 = fVar9 - fVar12;
  fVar10 = param_2[2];
  fVar6 = fVar10 - fVar13;
  *param_3 = fVar7;
  param_3[1] = fVar14;
  param_3[2] = fVar6;
  fVar9 = ABS(fVar9 - fVar12);
  fVar12 = ABS(fVar10 - fVar13);
  bVar1 = false;
  bVar3 = false;
  if (ABS(fVar8 - fVar11) < 1.1920929e-07) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(fVar9)) {
      bVar1 = fVar9 < 1.1920929e-07;
      bVar3 = false;
    }
  }
  bVar2 = false;
  bVar4 = false;
  if (bVar1 != bVar3) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(fVar12)) {
      bVar2 = fVar12 < 1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar2 == bVar4) {
    fVar8 = 1.0 / SQRT(fVar7 * fVar7 + fVar14 * fVar14 + fVar6 * fVar6);
    *param_3 = fVar7 * fVar8;
    param_3[1] = fVar14 * fVar8;
    param_3[2] = fVar6 * fVar8;
  }
  else {
    FUN_1003a31c8(lVar5,param_3,&DAT_1013cd824);
  }
  return;
}




void FUN_1003b6464(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_2,0,2,0x19,0);
  *param_3 = fVar1 - DAT_10185ad50;
  return;
}




void FUN_1003b64a8(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  
  *param_4 = *(undefined4 *)(param_2 + 0x250);
  fVar1 = *(float *)(param_2 + 0x254);
  param_4[1] = fVar1;
  param_4[2] = *(undefined4 *)(param_2 + 600);
  param_4[1] = *(float *)(param_2 + 0x2ec) + fVar1;
  return;
}




void FUN_1003b64d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_2 + 600);
  fVar6 = *(float *)(param_2 + 0x248);
  fVar4 = (float)*(undefined8 *)(param_2 + 0x240);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x240) >> 0x20);
  fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  if (1e-08 <= fVar3) {
    fVar3 = SQRT(fVar3);
    fVar4 = fVar4 / fVar3;
    fVar5 = fVar5 / fVar3;
    fVar6 = fVar6 / fVar3;
  }
  else {
    fVar4 = 1.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  uVar2 = NEON_fmov(0x40b00000,4);
  *param_4 = CONCAT44(*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254) +
                      (float)((ulong)uVar2 >> 0x20) * fVar5,
                      (float)*(undefined8 *)(param_2 + 0x250) + (float)uVar2 * fVar4);
  *(float *)(param_4 + 1) = fVar1 + fVar6 * 5.5;
  return;
}




void FUN_1003b6550(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  fVar2 = (float)FUN_1003df710(lVar1,4,1);
  *param_3 = fVar2;
  fVar3 = (float)FUN_1003dfe60(lVar1,0,2,0x19,0);
  *param_3 = fVar3 + fVar2;
  fVar4 = (float)FUN_1003dfe60(lVar1,0,3,0x19,0);
  *param_3 = fVar4 + fVar3 + fVar2;
  return;
}




void FUN_1003b65f4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003b6608(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003dfe60(param_1,0,5,0x19,0);
  uVar2 = FUN_1003dfe60(param_1,0,6,0x19,0);
  uVar1 = NEON_fminnm(uVar1,uVar2);
  *param_3 = uVar1;
  return;
}




void FUN_1003b668c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b66a0(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_898;
  float local_890;
  char local_889;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  uint local_870;
  uint local_86c;
  uint local_868;
  int local_864;
  undefined8 local_860;
  undefined4 local_858;
  undefined8 local_854;
  undefined8 uStack_84c;
  undefined8 local_840;
  undefined4 local_838;
  undefined **local_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined1 local_818;
  undefined4 local_814;
  undefined4 uStack_810;
  int local_80c;
  undefined4 local_808;
  float local_804;
  undefined4 local_800;
  undefined8 local_7fc;
  undefined8 uStack_7f4;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined8 local_7c0;
  float local_7b8;
  float fStack_7b4;
  float local_7b0;
  float local_7ac;
  undefined4 local_7a8;
  uint local_7a4;
  uint local_7a0;
  int local_79c;
  undefined4 local_798;
  float local_794;
  undefined4 local_790;
  undefined8 local_78c;
  undefined8 uStack_784;
  undefined8 local_778;
  undefined4 local_770;
  undefined **local_750;
  long local_748;
  undefined1 local_740;
  float local_73c;
  float local_738;
  float local_734;
  undefined8 local_730;
  undefined8 uStack_728;
  float local_720;
  undefined4 local_71c;
  undefined4 local_718;
  undefined4 local_714;
  undefined4 local_710;
  undefined1 local_70c;
  undefined4 local_708;
  undefined8 local_704;
  undefined4 local_6fc;
  undefined2 local_6f8;
  byte local_6f6;
  long local_6f0 [200];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    lVar8 = *(long *)(param_1 + 0x10);
    while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar8 = *(long *)(lVar8 + 0x10);
    }
    fVar14 = *(float *)(lVar8 + 0x250);
    fVar15 = *(float *)(lVar8 + 600);
    fVar16 = *(float *)(lVar8 + 0x2ec) + *(float *)(lVar8 + 0x254);
    local_750 = &PTR_FUN_101499960;
    local_730 = 0;
    uStack_728 = 0;
    local_71c = 0xbf800000;
    local_714 = 0xbf800000;
    local_70c = 0xff;
    local_704 = 0xffffffff;
    local_6fc = 0xffffffff;
    local_740 = 1;
    lVar5 = FUN_1003e10f0();
    bVar2 = *(byte *)(lVar5 + 0xe5);
    local_748 = lVar8;
    local_720 = (float)FUN_10045f34c(param_1 + 0x220,param_1);
    local_720 = local_720 * local_720;
    local_73c = fVar14;
    local_738 = fVar16;
    local_734 = fVar15;
    local_718 = _cosf(0x3fc90fdb);
    local_6f6 = bVar2 | 0x14;
    local_6f8 = 0xe120;
    local_708 = 0x40000;
    local_710 = 0x3f266666;
    uVar3 = FUN_1003a6ce4(&local_750,local_6f0,200,0);
    if (0 < (int)uVar3) {
      uVar10 = 0;
      do {
        lVar5 = local_6f0[uVar10];
        fVar12 = *(float *)(lVar5 + 0x250) - *(float *)(lVar8 + 0x250);
        fVar11 = *(float *)(lVar5 + 600) - *(float *)(lVar8 + 600);
        fVar13 = fVar12 * fVar12 + fVar11 * fVar11;
        if (1e-08 <= fVar13) {
          fVar13 = SQRT(fVar13);
          local_898 = CONCAT44(fVar11 / fVar13,fVar12 / fVar13);
        }
        else {
          local_898 = DAT_101873a50;
        }
        uVar4 = *(undefined4 *)(lVar8 + 0x260);
        uVar1 = *(undefined4 *)(lVar5 + 0x260);
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        FUN_1003dfe60(lVar8,1,5,8,0);
        FUN_1003462a0(&local_7c0,uVar4,uVar1,1,2,&local_898,uVar9,0,1);
        FUN_10010cbe0(&local_7c0);
        uVar4 = *(undefined4 *)(lVar8 + 0x260);
        uVar1 = *(undefined4 *)(lVar5 + 0x260);
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        FUN_1003dfe60(lVar8,1,5,5,0);
        FUN_1003462a0(&local_830,uVar4,uVar1,0,2,&local_898,uVar9,0,1);
        FUN_10010cbe0(&local_830);
        local_86c = *(uint *)(lVar8 + 0x260);
        local_868 = *(uint *)(lVar5 + 0x260);
        local_880 = 0;
        local_878 = 0;
        local_870 = local_870 & 0xffffff00;
        local_888 = &PTR_FUN_101496b18;
        local_864 = DAT_1018589d8;
        local_860 = 0x3dcccccd00000000;
        local_858 = 1;
        local_840 = 0;
        local_854 = 0;
        uStack_84c = 0;
        local_838 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        uVar4 = FUN_1003d4e0c(PTR_s_Buff_Lance_PlayBImpactPfx_10185ad70);
        local_860 = CONCAT44(local_860._4_4_,uVar4);
        (*(code *)local_888[4])(&local_888,&DAT_101e47d30);
        if (((*(byte *)(lVar5 + 0x2f6) >> 5 & 1) != 0) &&
           (uVar6 = FUN_1003a7e54(lVar5,0x10), (uVar6 & 1) == 0)) {
          fVar12 = *(float *)(param_1 + 0x1d8) - fVar14;
          fVar11 = *(float *)(param_1 + 0x1e0) - fVar15;
          fVar13 = fVar12 * fVar12 + fVar11 * fVar11;
          if (1e-08 <= fVar13) {
            fVar13 = SQRT(fVar13);
            fVar12 = fVar12 / fVar13;
            fVar11 = fVar11 / fVar13;
          }
          else {
            fVar12 = 1.0;
            fVar11 = 0.0;
          }
          fVar19 = *(float *)(lVar5 + 0x250);
          fVar20 = *(float *)(lVar5 + 0x254);
          fVar18 = *(float *)(lVar5 + 600);
          fVar17 = *(float *)(lVar5 + 0x2ec);
          fVar13 = (float)FUN_1003dfe60(lVar8,1,6,0x19,0);
          lVar7 = *(long *)(lVar5 + 0x18);
          local_86c = 0;
          if (lVar7 != 0) {
            do {
              if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == ram0x0001018672a0) {
                local_86c = *(byte *)(lVar7 + 0x818) >> 3 & 3;
                goto LAB_1003b6a90;
              }
              lVar7 = *(long *)(lVar7 + 0x20);
            } while (lVar7 != 0);
            local_86c = 0;
          }
LAB_1003b6a90:
          fVar17 = fVar17 + fVar20;
          fVar12 = fVar19 + fVar12 * fVar13;
          fVar20 = fVar17 + fVar13 * 0.0;
          local_888 = (undefined **)CONCAT44(fVar17,fVar19);
          fVar11 = fVar18 + fVar11 * fVar13;
          local_880 = CONCAT44(fVar12,fVar18);
          local_878 = CONCAT44(fVar11,fVar20);
          local_870 = 0;
          local_868 = local_868 & 0xffff0000;
          local_889 = '\0';
          FUN_1003a7f34(&local_888,&local_898,&local_889);
          for (lVar7 = *(long *)(lVar5 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
            if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == ram0x0001018672a0) {
              bVar2 = *(byte *)(lVar7 + 0x818) >> 3 & 3;
              goto LAB_1003b6b00;
            }
          }
          bVar2 = 0;
LAB_1003b6b00:
          uVar6 = FUN_10054e044(bVar2,&local_898,0,0);
          if ((uVar6 & 1) == 0) {
            lVar7 = *(long *)(lVar5 + 0x18);
            local_7a4 = 0;
            if (lVar7 != 0) {
              do {
                if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == ram0x0001018672a0) {
                  local_7a4 = *(byte *)(lVar7 + 0x818) >> 3 & 3;
                  goto LAB_1003b6b48;
                }
                lVar7 = *(long *)(lVar7 + 0x20);
              } while (lVar7 != 0);
              local_7a4 = 0;
            }
LAB_1003b6b48:
            local_7c0 = (undefined **)CONCAT44(fVar16,fVar14);
            local_7a8 = 0;
            local_7a0 = local_7a0 & 0xffff0000;
            local_7b8 = fVar15;
            fStack_7b4 = fVar12;
            local_7b0 = fVar20;
            local_7ac = fVar11;
            FUN_1003a7f34(&local_7c0,&local_898,&local_889);
          }
          uVar9 = FUN_1003dfe60(lVar8,1,7,0x19,0);
          local_7a4 = *(uint *)(lVar8 + 0x260);
          local_7a0 = *(uint *)(lVar5 + 0x260);
          fStack_7b4 = 0.0;
          local_7b8 = 0.0;
          local_7ac = 0.0;
          local_7b0 = 0.0;
                    /* WARNING: Ignoring partial resolution of indirect */
          local_7a8._0_1_ = 0;
          local_7c0 = &PTR_FUN_101496b18;
          fVar11 = SQRT((fVar19 - (float)local_898) * (fVar19 - (float)local_898) +
                        (fVar17 - local_898._4_4_) * (fVar17 - local_898._4_4_) +
                        (fVar18 - local_890) * (fVar18 - local_890)) / (float)uVar9;
          local_79c = DAT_1018589d8;
          local_798 = 0;
          local_790 = 1;
          local_778 = 0;
          local_78c = 0;
          uStack_784 = 0;
          local_770 = DAT_101dc0b88;
          DAT_1018589d8 = DAT_1018589d8 + 1;
          local_794 = fVar11;
          local_798 = FUN_1003d4e0c(PTR_s_Buff_DisplacementLock_10185a678);
          (*(code *)local_7c0[4])(&local_7c0,&DAT_101e47d30);
          if (local_889 != '\0') {
            local_814 = *(undefined4 *)(lVar8 + 0x260);
            uStack_810 = *(undefined4 *)(lVar5 + 0x260);
            local_828 = 0;
            uStack_820 = 0;
            local_818 = 0;
            local_830 = &PTR_FUN_101496b18;
            local_80c = DAT_1018589d8;
            local_808 = 0;
            local_800 = 1;
            local_7e8 = 0;
            local_7fc = 0;
            uStack_7f4 = 0;
            local_7e0 = DAT_101dc0b88;
            DAT_1018589d8 = DAT_1018589d8 + 1;
            local_804 = fVar11;
            local_808 = FUN_1003d4e0c(PTR_s_Buff_Lance_B_StunPending_10185ad78);
            (*(code *)local_830[4])(&local_830,&DAT_101e47d30);
          }
          FUN_1000f3e04(uVar9,lVar5,&local_898,1);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003b6d3c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_1003b6d50(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_1003b6d64(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1003b6d78(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003df710(param_1,4,1);
  *param_3 = fVar1;
  fVar2 = (float)FUN_1003dfe60(param_1,2,2,0x19,0);
  *param_3 = fVar2 + fVar1;
  return;
}




void FUN_1003b6df8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b6e0c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  char *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong local_50;
  float local_48;
  
  lVar6 = *(long *)(param_1 + 0x10);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  plVar2 = (long *)(lVar6 + 0x18);
  do {
    lVar5 = *plVar2;
    plVar2 = (long *)(lVar5 + 0x20);
  } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8);
  lVar5 = *(long *)(lVar5 + 0x28);
  bVar4 = false;
  if (lVar5 != 0) {
    do {
      if ((*(int *)(lVar5 + 0x314) == DAT_101d2c970) && (*(int *)(lVar5 + 0x310) == 0)) {
        bVar4 = true;
        goto LAB_1003b6ea8;
      }
      lVar5 = *(long *)(lVar5 + 0x350);
    } while (lVar5 != 0);
    bVar4 = false;
  }
LAB_1003b6ea8:
  fVar10 = *(float *)(lVar6 + 0x248);
  fVar8 = (float)*(undefined8 *)(lVar6 + 0x240);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar6 + 0x240) >> 0x20);
  fVar7 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
  if (1e-08 <= fVar7) {
    fVar7 = SQRT(fVar7);
    local_50 = CONCAT44(fVar9 / fVar7,fVar8 / fVar7);
    fVar10 = fVar10 / fVar7;
  }
  else {
    local_50 = 0x3f800000;
    fVar10 = 0.0;
  }
  fVar7 = *(float *)(param_1 + 0x1d8) - *(float *)(lVar6 + 0x250);
  fVar8 = *(float *)(param_1 + 0x1e0) - *(float *)(lVar6 + 600);
  fVar9 = fVar7 * fVar7 + fVar8 * fVar8;
  if (1e-08 <= fVar9) {
    fVar9 = SQRT(fVar9);
    local_50 = (ulong)(uint)(fVar7 / fVar9);
    fVar10 = fVar8 / fVar9;
  }
  uVar1 = local_50;
  local_48 = fVar10;
  if (bVar4) {
    if (DAT_101d23a38 != '\0') {
      return;
    }
    fVar8 = (float)_atan2f();
    fVar10 = (float)_atan2f(fVar10,uVar1);
    fVar10 = (float)_fmodf(fVar10 - fVar8,0x40c90fdb);
    fVar8 = fVar10 - 6.2831855;
    if (fVar10 <= 3.1415927) {
      fVar8 = fVar10;
    }
    fVar10 = fVar8 + 6.2831855;
    if (-3.1415927 <= fVar8) {
      fVar10 = fVar8;
    }
    if (2.3561945 < ABS(fVar10)) {
      pcVar3 = "Ability03_RollBackward";
      goto LAB_1003b7010;
    }
    if (0.7853982 < fVar10) {
      pcVar3 = "Ability03_RollRight";
      goto LAB_1003b7010;
    }
    if (fVar10 < -0.7853982) {
      pcVar3 = "Ability03_RollLeft";
      goto LAB_1003b7010;
    }
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != ram0x0001018672a0))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    FUN_1003b7098(lVar5,&local_50,1);
    if (DAT_101d23a38 != '\0') {
      return;
    }
  }
  pcVar3 = "Ability03_RollForward";
LAB_1003b7010:
  plVar2 = *(long **)(lVar6 + 0x50);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003b7044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(0x3f800000,plVar2,pcVar3,0,"AttackToIdleCombat");
  return;
}




void FUN_1003b7098(long param_1,float *param_2,int param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_50;
  undefined4 local_48;
  
  if (((*(byte *)(param_1 + 0x818) >> 5 & 1) == 0) || (param_3 != 0)) {
    FUN_1003c554c(param_1,param_2);
    lVar1 = *(long *)(param_1 + 0x10);
    local_50 = *(undefined8 *)(lVar1 + 0x250);
    local_48 = *(undefined4 *)(lVar1 + 600);
    FUN_1003d90d4(lVar1,&local_50,param_2);
    fVar3 = *param_2;
    fVar4 = param_2[1];
    fVar5 = param_2[2];
    fVar2 = (float)_acosf(fVar3 * 1.0 + fVar4 * 0.0 + fVar5 * 0.0);
    *(float *)(param_1 + 0x7e0) = fVar2;
    if (fVar3 * 0.0 + fVar4 * 0.0 + fVar5 * 1.0 < 0.0) {
      *(float *)(param_1 + 0x7e0) = 6.2831855 - fVar2;
    }
  }
  return;
}




void FUN_1003b716c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




void FUN_1003b7180(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  plVar1 = *(long **)(param_1 + 0x1c8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if ((*(uint *)(lVar2 + 0x2f4) >> 4 & 1) == 0) {
          plVar1 = (long *)(param_1 + 0x10);
          if ((*(uint *)(lVar2 + 0x2f4) >> 0xc & 1) == 0) {
            do {
              lVar2 = *plVar1;
              plVar1 = (long *)(lVar2 + 0x10);
            } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68);
            lVar2 = *(long *)(lVar2 + 0x40);
            fVar3 = *(float *)(lVar2 + 0x48) +
                    *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
            fVar3 = fVar3 + fVar3 * *(float *)(lVar2 + 0x1b0);
            uVar4 = DAT_101e94270;
            uVar5 = DAT_101e94330;
          }
          else {
            do {
              lVar2 = *plVar1;
              plVar1 = (long *)(lVar2 + 0x10);
            } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68);
            lVar2 = *(long *)(lVar2 + 0x40);
            fVar3 = *(float *)(lVar2 + 0x4c) +
                    *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0);
            fVar3 = fVar3 + fVar3 * *(float *)(lVar2 + 0x1b4);
            uVar4 = DAT_101e94274;
            uVar5 = DAT_101e94334;
          }
        }
        else {
          do {
            param_1 = *(long *)(param_1 + 0x10);
          } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
          lVar2 = *(long *)(param_1 + 0x40);
          fVar3 = *(float *)(lVar2 + 0xa8) +
                  *(float *)(lVar2 + 0x15c) * (*(float *)(lVar2 + 0x2c4) + 1.0);
          fVar3 = fVar3 + fVar3 * *(float *)(lVar2 + 0x210);
          uVar4 = DAT_101e942d0;
          uVar5 = DAT_101e94390;
        }
        NEON_fminnm(fVar3,uVar5);
        *param_2 = uVar4;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1003b72fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  FUN_1003b7180(param_1,param_3);
  *param_5 = 4;
  *param_4 = 0;
  return;
}




void FUN_1003b7330(long param_1)

{
  long lVar1;
  float fVar2;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  float local_2c;
  undefined1 local_28;
  
  if (DAT_101d23a38 != '\0') {
    do {
      param_1 = *(long *)(param_1 + 0x10);
    } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
    local_2c = (float)FUN_1003df710(param_1,3,1);
    lVar1 = *(long *)(param_1 + 0x40);
    fVar2 = *(float *)(lVar1 + 0x74) + *(float *)(lVar1 + 0x128) * (*(float *)(lVar1 + 0x290) + 1.0)
    ;
    NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1dc),DAT_101e9435c);
    fVar2 = DAT_101e9429c;
    if (DAT_101e9429c <= 0.1) {
      fVar2 = 0.1;
    }
    local_34 = *(undefined4 *)(param_1 + 0x260);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = &PTR_FUN_101497330;
    uStack_30 = DAT_101d2c66c;
    local_2c = local_2c / fVar2;
    local_28 = 1;
    FUN_10049650c(&local_50,&DAT_101e47d30);
  }
  return;
}




void FUN_1003b741c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return;
}




void FUN_1003b7428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return;
}




undefined8 FUN_1003b7434(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe3 | 8;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar2 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b77c4(*(undefined4 *)(lVar4 + 0x2f0));
  *(char **)(lVar2 + 0x10) = "Sound_Lyra_Attack_Light";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar2 + 0x18) = FUN_1003c5148;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = param_2;
  FUN_1003d266c(lVar2,"Proj");
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar3);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f00000000000003;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined4 *)(lVar2 + 0x10) = 0x8345ef80;
  *(char **)(lVar2 + 0x18) = "Bone_FX";
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar2 + 0x18) = FUN_1003c5158;
  plVar5 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  local_70 = FUN_1003b7828;
  local_68 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,2,&local_70);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b77c4(*(undefined4 *)(lVar4 + 0x2f0));
  *(char **)(lVar2 + 0x10) = "Sound_Lyra_Attack_Heavy";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Lyra_Talent_TwinMissiles_10185ada8;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0xb0,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = param_3;
  FUN_1003d266c(lVar4,"Proj");
  *(code **)(lVar4 + 0x38) = FUN_1003b741c;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0xb0,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = param_3;
  FUN_1003d266c(lVar4,"Proj");
  *(code **)(lVar4 + 0x38) = FUN_1003b7428;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 200,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = param_3;
  FUN_1003d266c(lVar4,"Proj");
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_60,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b7330;
  return local_60;
}




float FUN_1003b77c4(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x2ec);
}




void FUN_1003b7828(undefined8 param_1)

{
  FUN_1003df710(param_1,2,3);
  return;
}




void FUN_1003b7834(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003b7848(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_1003b785c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_1003b7870(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,6,0x19,0);
  return;
}




void FUN_1003b7884(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,7,0x19,0);
  return;
}




void FUN_1003b7898(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined **local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  char *local_78;
  undefined1 local_70;
  long local_68 [3];
  
  local_68[2] = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    do {
      param_1 = *(long *)(param_1 + 0x10);
    } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
    local_80 = 0xff;
    local_90 = &PTR_FUN_101499900;
    uStack_88 = 0;
    local_70 = 0;
    local_7c = *(undefined4 *)(param_1 + 0x260);
    local_78 = "Lyra_Portal";
    uVar1 = FUN_1003a6ce4(&local_90,local_68,2,0);
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        lVar2 = local_68[uVar5];
        plVar3 = (long *)(lVar2 + 0x18);
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x20);
        } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
        for (lVar4 = *(long *)(lVar4 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
          if ((*(int *)(lVar4 + 0x314) == DAT_101d2c9b8) && (*(int *)(lVar4 + 0x310) == 0)) {
            uStack_98 = *(undefined4 *)(lVar4 + 0x30c);
            local_9c = *(undefined4 *)(lVar2 + 0x260);
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = 0;
            local_b8 = &PTR_FUN_101496cd8;
            FUN_100496580(&local_b8,&DAT_101e47d30);
            goto LAB_1003b79e0;
          }
        }
        FUN_100101cc8(*(undefined1 *)(lVar2 + 0x300));
LAB_1003b79e0:
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined1 FUN_1003b7a24(long param_1)

{
  return *(undefined1 *)(param_1 + 0x300);
}




void FUN_1003b7a2c(void)

{
  return;
}




void FUN_1003b7a30(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(lVar1 + 0x250);
  *param_2 = fVar2;
  fVar3 = *(float *)(lVar1 + 0x254);
  param_2[1] = fVar3;
  fVar4 = *(float *)(lVar1 + 600);
  fVar3 = *(float *)(lVar1 + 0x2ec) + fVar3;
  param_2[1] = fVar3;
  param_2[2] = fVar4;
  fVar2 = *(float *)(param_1 + 0x1d8) - fVar2;
  fVar3 = *(float *)(param_1 + 0x1dc) - fVar3;
  fVar4 = *(float *)(param_1 + 0x1e0) - fVar4;
  *param_3 = fVar2;
  param_3[1] = fVar3;
  param_3[2] = fVar4;
  fVar5 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar5 < 1e-08) {
    param_3[2] = 0.0;
    param_3[0] = 1.0;
    param_3[1] = 0.0;
    return;
  }
  fVar5 = 1.0 / SQRT(fVar5);
  *param_3 = fVar2 * fVar5;
  param_3[1] = fVar3 * fVar5;
  param_3[2] = fVar4 * fVar5;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b7af4(long param_1,float *param_2,float *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  float local_38;
  
  lVar3 = param_1;
  do {
    lVar3 = *(long *)(lVar3 + 0x10);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
  fVar6 = *(float *)(lVar3 + 0x250);
  fVar5 = *(float *)(lVar3 + 600);
  fVar4 = *(float *)(param_1 + 0x1e0);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x1d8);
  param_2[2] = fVar4;
  local_50 = 0x412000003e800000;
  local_48 = 0x3e800000;
  lVar3 = *(long *)(lVar3 + 0x18);
  do {
    if (lVar3 == 0) {
      bVar1 = 0;
LAB_1003b7b98:
      iVar2 = FUN_10054e044(bVar1,param_2,&local_40,&local_50);
      if (iVar2 != 0) {
        *(undefined8 *)param_2 = local_40;
        param_2[2] = local_38;
      }
      fVar6 = fVar6 - *param_2;
      fVar5 = fVar5 - param_2[2];
      *param_3 = fVar6;
      param_3[2] = fVar5;
      param_3[1] = 0.0;
      fVar4 = fVar6 * fVar6 + fVar5 * fVar5;
      if (1e-08 <= fVar4) {
        fVar4 = SQRT(fVar4);
        *param_3 = fVar6 / fVar4;
        param_3[1] = 0.0;
        param_3[2] = fVar5 / fVar4;
      }
      else {
        param_3[2] = 0.0;
        param_3[0] = 1.0;
        param_3[1] = 0.0;
      }
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar3 + 0x818) >> 3 & 3;
      goto LAB_1003b7b98;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}




void FUN_1003b7c3c(long param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(param_1 + 0x1e0);
  fVar1 = (float)*(undefined8 *)(param_1 + 0x1d8);
  fVar3 = fVar1 - *(float *)(param_2 + 0x250);
  fVar4 = fVar2 - *(float *)(param_2 + 600);
  fVar5 = fVar3 * fVar3 + fVar4 * fVar4;
  if (1e-08 <= fVar5) {
    fVar5 = SQRT(fVar5);
    fVar3 = fVar3 / fVar5;
    fVar4 = fVar4 / fVar5;
  }
  else {
    fVar3 = 1.0;
    fVar4 = 0.0;
  }
  *param_3 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20) + 0.0,fVar3 + fVar1);
  *(float *)(param_3 + 1) = fVar4 + fVar2;
  return;
}




void FUN_1003b7cac(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,3,0x19,0);
  return;
}




void FUN_1003b7cc0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,6,0x19,0);
  return;
}




void FUN_1003b7cd4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,9,0x19,0);
  return;
}




undefined8 FUN_1003b7ce8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar1);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar3 + 0x18) = FUN_1003c5148;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  if (param_3 - 0x45U < 3) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Malene_Evil_Auto_Attack_1");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Malene_Evil_Auto_Attack_2");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Malene_Evil_Auto_Attack_3");
    lVar3 = 0x48c;
  }
  else {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Malene_Good_Auto_Attack_1");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Malene_Good_Auto_Attack_2");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Malene_Good_Auto_Attack_3");
    lVar3 = 0x488;
  }
  uVar1 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003b7e84(*(undefined4 *)(lVar4 + lVar3));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(int *)(lVar3 + 0x10) = param_3;
  FUN_1003d266c(lVar3,param_2);
  return local_40;
}




float FUN_1003b7e84(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x484);
}




void FUN_1003b7ee8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003b7efc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1003b7f10(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_1003b7f24(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,3,0x19,0);
  return;
}




void FUN_1003b7f38(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,2,0x19,0);
  return;
}




void FUN_1003b7f4c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,5,2,0x19,0);
  return;
}




undefined8 FUN_1003b7f60(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(code **)(lVar4 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar4 + 0x10,param_1);
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003b81e8(*(undefined4 *)(lVar5 + 0x28c));
  *(undefined2 *)(lVar4 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(char **)(lVar4 + 0x10) = "Sound_Ozo_BasicAttack_1";
  *(char **)(lVar4 + 0x18) = "Sound_Ozo_BasicAttack_2";
  *(char **)(lVar4 + 0x20) = "Sound_Ozo_BasicAttack_3";
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e99999a;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar6;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003b81e8(*(undefined4 *)(lVar5 + 0x28c));
  *(undefined2 *)(lVar4 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(char **)(lVar4 + 0x10) = "Sound_Ozo_BasicAttack_Impact_1";
  *(char **)(lVar4 + 0x18) = "Sound_Ozo_BasicAttack_Impact_2";
  *(char **)(lVar4 + 0x20) = "Sound_Ozo_BasicAttack_Impact_3";
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = param_3;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar3);
  return local_60;
}




float FUN_1003b81e8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x288);
}




void FUN_1003b824c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined8 local_7a0;
  undefined8 local_798;
  float local_790;
  undefined8 local_78c;
  undefined8 uStack_784;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined8 local_770;
  undefined **local_768;
  long local_760;
  undefined1 local_758;
  undefined4 local_754;
  float fStack_750;
  undefined4 local_74c;
  undefined8 local_748;
  undefined8 uStack_740;
  float local_738;
  undefined8 local_734;
  undefined8 uStack_72c;
  undefined1 local_724;
  undefined4 local_720;
  undefined8 local_71c;
  undefined4 local_714;
  undefined2 local_710;
  byte local_70e;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined8 local_700;
  undefined8 local_6f8;
  float local_6f0;
  undefined8 local_6ec;
  undefined8 local_6e4;
  undefined8 local_6dc;
  undefined4 local_6d4;
  undefined8 local_6d0;
  long local_6c8 [200];
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    lVar6 = *(long *)(param_1 + 0x10);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    lVar8 = *(long *)(param_1 + 0x60);
    if (lVar8 != 0) {
      uVar5 = 0;
      fVar14 = 0.0;
      do {
        uVar3 = FUN_10045fb10(lVar8);
        if (uVar3 <= uVar5) break;
        lVar8 = FUN_10045fa7c(lVar8,uVar5);
        fVar11 = (float)FUN_1003dfe60(lVar6,0,2,0x19,0);
        if ((lVar8 == 0) || (fVar12 = 1.0, (*(byte *)(lVar8 + 0x2f4) & 1) == 0)) {
          fVar12 = (float)FUN_1003dfe60(lVar6,0,3,0x19,0);
        }
        fVar14 = fVar14 + fVar11 * fVar12;
        uVar5 = uVar5 + 1;
        lVar8 = *(long *)(param_1 + 0x60);
      } while (lVar8 != 0);
      if (0.0 < fVar14) {
        lVar8 = *(long *)(lVar6 + 0x18);
        while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dab8))) {
          lVar8 = *(long *)(lVar8 + 0x20);
        }
        if ((ulong)*(byte *)(lVar8 + 0x198) != 0) {
          uVar7 = 0;
          do {
            if (*(long *)(lVar8 + 0x50 + uVar7 * 8) == param_1) goto LAB_1003b83a0;
            uVar7 = uVar7 + 1;
          } while (*(byte *)(lVar8 + 0x198) != uVar7);
        }
        uVar7 = 0xffffffff;
LAB_1003b83a0:
        uVar13 = *(undefined4 *)(lVar6 + 0x260);
        local_708 = uVar13;
        uStack_704 = uVar13;
        local_700 = FUN_100345d90(uVar13);
        local_6f8 = FUN_100345d90(uVar13);
        local_6e4 = 0;
        local_6ec = 0;
        local_6dc = 0xffffffff00000000;
        local_6d0 = 0xffffffff000000ee;
        local_6f0 = fVar14;
        local_6d4 = (int)uVar7;
        FUN_10010cbe4(&local_708);
        puVar2 = PTR_s_Buff_Ozo_Talent_RingLeader_10185ae28;
        lVar8 = FUN_100345d90(*(undefined4 *)(lVar6 + 0x260));
        if ((lVar8 != 0) && (iVar4 = FUN_1003a47d0(lVar8,puVar2), iVar4 != 0)) {
          local_768 = &PTR_FUN_101499960;
          local_748 = 0;
          uStack_740 = 0;
          uStack_72c = 0x3f800000bf800000;
          local_734 = 0xc0000000bf800000;
          local_724 = 0xff;
          local_71c = 0xffffffff;
          local_714 = 0xffffffff;
          local_758 = 1;
          lVar8 = FUN_1003e10f0();
          bVar1 = *(byte *)(lVar8 + 0xe5);
          uVar13 = *(undefined4 *)(lVar6 + 0x250);
          fVar11 = *(float *)(lVar6 + 0x254);
          uVar15 = *(undefined4 *)(lVar6 + 600);
          fVar12 = *(float *)(lVar6 + 0x2ec);
          local_6c8[0]._0_4_ = DAT_101d90c5c;
          local_760 = lVar6;
          local_738 = (float)FUN_1003dfee8(lVar6,local_6c8,0,9);
          local_738 = local_738 * local_738;
          local_70e = bVar1 | 0x14;
          local_710 = 0xc110;
          local_720 = 1;
          local_6c8[0]._0_4_ = DAT_101d90c5c;
          local_754 = uVar13;
          fStack_750 = fVar12 + fVar11;
          local_74c = uVar15;
          fVar11 = (float)FUN_1003dfee8(lVar6,local_6c8,1,9);
          uVar5 = FUN_1003a6ce4(&local_768,local_6c8,200,0);
          if (uVar5 != 0) {
            uVar9 = (ulong)uVar5;
            plVar10 = local_6c8;
            do {
              if (*plVar10 != 0) {
                local_7a8 = *(undefined4 *)(lVar6 + 0x260);
                uVar13 = *(undefined4 *)(*plVar10 + 0x260);
                uStack_7a4 = uVar13;
                local_7a0 = FUN_100345d90();
                local_798 = FUN_100345d90(uVar13);
                local_78c = 0;
                uStack_784 = 0;
                local_77c = 0;
                local_778 = 0xffffffff;
                local_770 = 0xffffffff000000ee;
                local_790 = fVar11 * fVar14;
                uStack_774 = (int)uVar7;
                FUN_10010cbe4(&local_7a8);
              }
              plVar10 = plVar10 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003b8590(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  
  *param_4 = *(undefined4 *)(param_2 + 0x250);
  fVar1 = *(float *)(param_2 + 0x254);
  param_4[1] = fVar1;
  param_4[2] = *(undefined4 *)(param_2 + 600);
  param_4[1] = *(float *)(param_2 + 0x2ec) + fVar1;
  return;
}




void FUN_1003b85b8(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_2 + 600);
  fVar1 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
  fVar6 = (float)*(undefined8 *)(param_2 + 0x250);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x1d8) - fVar6;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20) - fVar1;
  fVar4 = *(float *)(param_1 + 0x1e0) - fVar7;
  fVar5 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (1e-08 <= fVar5) {
    fVar5 = SQRT(fVar5);
    fVar2 = fVar2 / fVar5;
    fVar3 = fVar3 / fVar5;
    fVar4 = fVar4 / fVar5;
  }
  else {
    fVar2 = 1.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
  }
  fVar5 = (float)FUN_10045f34c(param_1 + 0x220,param_1);
  *param_4 = CONCAT44(fVar1 + fVar3 * fVar5,fVar6 + fVar2 * fVar5);
  *(float *)(param_4 + 1) = fVar7 + fVar4 * fVar5;
  return;
}




void FUN_1003b8680(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_1003b8694(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10045f34c(param_1 + 0x220,param_1);
  *param_2 = uVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b86c0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != ram0x0001018672a0);
  lVar2 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_101867370) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  if ((*(byte *)(lVar2 + 0x68) & 1) != 0) {
    return;
  }
  if (0.1 <= *(float *)(lVar2 + 0x4c) - *(float *)(lVar2 + 0x50)) {
    return;
  }
  FUN_1010a1830();
  return;
}




void FUN_1003b875c(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined **local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  int local_10c;
  undefined4 local_108;
  float local_104;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined **local_d0;
  long lStack_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  byte local_76;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined1 local_64;
  
  uVar6 = DAT_101d2ca14;
  if (DAT_101d23a38 != '\0') {
    lVar8 = *(long *)(param_1 + 0x10);
    while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar8 = *(long *)(lVar8 + 0x10);
    }
    plVar3 = (long *)(lVar8 + 0x18);
    do {
      lVar7 = *plVar3;
      plVar3 = (long *)(lVar7 + 0x20);
    } while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184daa8);
    for (lVar7 = *(long *)(lVar7 + 0x28); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x350)) {
      if ((*(int *)(lVar7 + 0x314) == DAT_101d2ca10) && (*(int *)(lVar7 + 0x310) == 0)) {
        local_bc = 0;
        local_ac = 0;
        local_b4 = 0;
        local_a4 = 0;
        uStack_98 = 0xbf800000c0000000;
        local_a0 = 0xbf800000bf800000;
        local_90 = 0x3f800000;
        local_8c = 0xff;
        uStack_80 = 0xffffffff00000000;
        local_88 = 0xffffffff00000000;
        local_c0 = 1;
        lVar7 = FUN_1003e10f0();
        local_6c = 0;
        local_64 = 0;
        uStack_70 = *(undefined4 *)(lVar8 + 0x260);
        local_74 = uVar6;
        local_d0 = &PTR_FUN_1014999d0;
        local_78 = 0x4130;
        local_76 = *(byte *)(lVar7 + 0xe5) | 0x14;
        lStack_c8 = lVar8;
        iVar2 = FUN_1003a6ce4(&local_d0,&local_d8,1,0);
        lVar7 = local_d8;
        if ((iVar2 != 1) || (local_d8 == 0)) break;
        plVar3 = *(long **)(param_1 + 0x1c8);
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_1 + 0x1d0) == (int)plVar3[1]) {
            lVar4 = (**(code **)(*plVar3 + 0x10))();
            if (lVar7 == lVar4) break;
          }
          else {
            *(undefined8 *)(param_1 + 0x1c8) = 0;
            *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
          }
        }
        if (*(char *)(local_d8 + 0x264) != *(char *)(lVar8 + 0x264)) goto LAB_1003b8a8c;
        if (DAT_101d23a38 == '\0') {
          uVar9 = 0x10000;
          lVar7 = lVar8;
          goto LAB_1003b89ec;
        }
        uVar9 = 0x10000;
        lVar7 = lVar8;
        goto LAB_1003b8940;
      }
    }
    FUN_100101b0c(lVar8,7);
  }
  return;
LAB_1003b8940:
  do {
    lVar4 = lVar7;
    if ((lVar4 != lVar8) &&
       (lVar7 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x8a2209e7), lVar7 != 0)) {
      (**(code **)(lVar7 + 8))(lVar4);
    }
    if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar7 = *(long *)(lVar4 + 0x18), lVar7 != 0)) {
      uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
      goto LAB_1003b8940;
    }
    if ((uVar9 & 0xffff) == 0) goto LAB_1003b8a8c;
    lVar7 = *(long *)(lVar4 + 0x20);
  } while (*(long *)(lVar4 + 0x20) != 0);
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((lVar4 == 0) || (uVar1 = uVar9 - 1 & 0xffff, uVar1 == 0)) goto LAB_1003b8a8c;
  uVar9 = uVar1 | uVar9 & 0xffff0000;
  while (lVar7 = *(long *)(lVar4 + 0x20), lVar7 == 0) {
    if ((uVar9 - 1 & 0xffff) == 0) goto LAB_1003b8a8c;
    lVar4 = *(long *)(lVar4 + 0x10);
    uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
    if (lVar4 == 0) goto LAB_1003b8a8c;
  }
  goto LAB_1003b8940;
LAB_1003b89ec:
  do {
    lVar4 = lVar7;
    if ((lVar4 != lVar8) &&
       (lVar7 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x35850600), lVar7 != 0)) {
      (**(code **)(lVar7 + 8))(lVar4);
    }
    if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar7 = *(long *)(lVar4 + 0x18), lVar7 != 0)) {
      uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
      goto LAB_1003b89ec;
    }
    if ((uVar9 & 0xffff) == 0) goto LAB_1003b8a8c;
    lVar7 = *(long *)(lVar4 + 0x20);
  } while (*(long *)(lVar4 + 0x20) != 0);
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((lVar4 == 0) || (uVar1 = uVar9 - 1 & 0xffff, uVar1 == 0)) {
LAB_1003b8a8c:
    pcVar5 = *(char **)(param_1 + 0x200);
    if (pcVar5 == (char *)0x0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        pcVar5 = "<null>";
      }
      else {
        pcVar5 = *(char **)(*(long *)(param_1 + 0x38) + 8);
      }
    }
    iVar2 = _strcmp(pcVar5,PTR_s_Ability__Ozo__B_101859648);
    uVar6 = 5;
    if (iVar2 != 0) {
      uVar6 = 6;
    }
    FUN_100101b14(lVar8,uVar6,local_d8);
    local_104 = (float)FUN_1003dfe60(lVar8,3,2,0x19,0);
    local_104 = local_104 + 0.99;
    local_114 = *(undefined4 *)(lVar8 + 0x260);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_130 = &PTR_FUN_101496b18;
    local_10c = DAT_1018589d8;
    local_100 = 1;
    local_e8 = 0;
    local_f4 = 0;
    local_fc = 0;
    local_e0 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    uStack_110 = local_114;
    local_108 = FUN_1003d4e0c(PTR_s_Buff_Ozo_PriorBounces_10185ae48);
    FUN_10049639c(&local_130,&DAT_101e47d30);
    return;
  }
  uVar9 = uVar1 | uVar9 & 0xffff0000;
  while (lVar7 = *(long *)(lVar4 + 0x20), lVar7 == 0) {
    if ((uVar9 - 1 & 0xffff) == 0) goto LAB_1003b8a8c;
    lVar4 = *(long *)(lVar4 + 0x10);
    uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
    if (lVar4 == 0) goto LAB_1003b8a8c;
  }
  goto LAB_1003b89ec;
}




float FUN_1003b8b68(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_1,3,2,0x19,0);
  return fVar1 + -0.01;
}




void FUN_1003b8b98(long param_1)

{
  if (DAT_101d23a38 == '\0') {
    return;
  }
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  FUN_100101b0c(param_1,7);
  return;
}




void FUN_1003b8bd4(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  long local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  uint uStack_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  byte local_56;
  int local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined1 local_44;
  
  if (DAT_101d23a38 != '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar5 = *(long *)(lVar5 + 0x10);
    }
    plVar4 = (long *)(lVar5 + 0x18);
    do {
      lVar3 = *plVar4;
      plVar4 = (long *)(lVar3 + 0x20);
    } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
    uVar6 = 0x144100;
    for (lVar3 = *(long *)(lVar3 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
      if ((*(int *)(lVar3 + 0x314) == DAT_101d2ca10) && (*(int *)(lVar3 + 0x310) == 0)) {
        local_a8 = 0;
        local_a0 = 0;
        local_9c = 0;
        uStack_98 = uStack_98 & 0xffffff00;
        local_b0 = &PTR_FUN_101496cd8;
        local_94 = CONCAT44(*(undefined4 *)(lVar3 + 0x30c),*(undefined4 *)(lVar5 + 0x260));
        FUN_100496580(&local_b0,&DAT_101e47d30);
        uVar6 = (local_56 & 0xffe1) << 0x10 | 0x144100;
        bVar2 = (byte)local_a0 & 0xfc | 1;
        goto LAB_1003b8ccc;
      }
    }
    bVar2 = 1;
LAB_1003b8ccc:
    iVar1 = DAT_101d2ca14;
    local_b0 = &PTR_FUN_101499960;
    local_a8 = 0;
    local_9c = 0;
    uStack_98 = 0;
    local_8c = 0;
    local_94 = 0;
    local_84 = 0;
    uStack_78 = 0xbf800000c0000000;
    local_80 = 0xbf800000bf800000;
    local_70 = 0x3f800000;
    local_6c = 0xff;
    uStack_60 = 0xffffffff00000000;
    local_68 = 0xffffffff00000000;
    local_58 = (undefined2)uVar6;
    local_56 = (byte)(uVar6 >> 0x10);
    local_a0 = CONCAT31(local_a0._1_3_,bVar2);
    lVar3 = FUN_1003e10f0();
    local_56 = local_56 & 0xfe | *(byte *)(lVar3 + 0xe5);
    local_b8 = 0;
    local_b0 = &PTR_FUN_1014999d0;
    local_4c = 0;
    local_44 = 0;
    uStack_50 = *(undefined4 *)(lVar5 + 0x260);
    local_54 = iVar1;
    FUN_1003a6ce4(&local_b0,&local_b8,1,0);
    if (local_b8 != 0) {
      plVar4 = (long *)(local_b8 + 0x18);
      do {
        lVar5 = *plVar4;
        plVar4 = (long *)(lVar5 + 0x20);
      } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8);
      for (lVar5 = *(long *)(lVar5 + 0x28); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
        if ((*(int *)(lVar5 + 0x314) == DAT_101d2ca14) && (*(int *)(lVar5 + 0x310) == 0)) {
          uStack_c0 = *(undefined4 *)(lVar5 + 0x30c);
          local_c4 = *(undefined4 *)(local_b8 + 0x260);
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          local_e0 = &PTR_FUN_101496cd8;
          FUN_100496580(&local_e0,&DAT_101e47d30);
          return;
        }
      }
    }
  }
  return;
}




void FUN_1003b8e14(long param_1,long param_2,float *param_3,undefined4 *param_4,undefined4 *param_5,
                  undefined1 *param_6)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined4 local_68 [2];
  
  plVar4 = (long *)(param_1 + 0x10);
  lVar3 = *plVar4;
  lVar5 = lVar3;
  do {
    if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184dd68) break;
    lVar5 = *(long *)(lVar5 + 0x10);
  } while (lVar5 != 0);
  while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  fVar6 = (float)FUN_1003dfe60(lVar3,3,6,0x19,0);
  *param_3 = fVar6;
  puVar1 = PTR_s_Buff_Ozo_Talent_SecondWind_10185ae50;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar5 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_68[0] = DAT_101d90c54;
    fVar6 = (float)FUN_1003dfee8(lVar5,local_68,0,9);
    *param_3 = *param_3 * fVar6;
  }
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    do {
      lVar5 = *plVar4;
      plVar4 = (long *)(lVar5 + 0x10);
    } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68);
    fVar6 = (float)FUN_1003dfe60(lVar5,3,9,0x19,0);
    *param_3 = *param_3 * fVar6;
  }
  *param_4 = 2;
  *param_5 = 1;
  *param_6 = 0;
  return;
}




void FUN_1003b8f68(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_2,3,2,0x19,0);
  *param_3 = fVar1 + -0.01;
  return;
}




void FUN_1003b8fac(undefined8 param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(param_1,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(param_1,lVar2);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 3;
  *(code **)(lVar2 + 0x40) = FUN_1003b8f68;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined4 *)(lVar2 + 0x10) = 0x66b03e09;
  *(char **)(lVar2 + 0x18) = "Bone_Ring";
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(param_1,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(param_1,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_AcrobounceFortifiedHeal_10185ae58;
  *(code **)(lVar2 + 0x30) = FUN_1003b9730;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(param_1,uVar3);
  if (param_2 == 0) {
    lVar2 = FUN_10000e1b4();
    FUN_1003a985c(param_1,lVar2);
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
    *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 1;
    *(undefined4 *)(lVar2 + 0x10) = 0x73576bd;
  }
  lVar2 = FUN_10000e524();
  FUN_1003a985c(param_1,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  if (param_2 == 0) {
    uVar8 = FUN_1003b81e8(*(undefined4 *)(lVar4 + 0x294));
    *(char **)(lVar2 + 0x10) = "Sound_Ozo_Ability_B_Leap";
    *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar2 + 0x34) = 1;
    *(undefined4 *)(lVar2 + 0x3c) = uVar8;
    *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
    *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  }
  else {
    uVar8 = FUN_1003b81e8(*(undefined4 *)(lVar4 + 0x29c));
    *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
    *(undefined4 *)(lVar2 + 0x34) = 1;
    *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
    *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
    *(undefined4 *)(lVar2 + 0x3c) = uVar8;
    *(char **)(lVar2 + 0x10) = "Sound_Ozo_Ability_B_Bounce_1";
    *(char **)(lVar2 + 0x18) = "Sound_Ozo_Ability_B_Bounce_2";
    *(char **)(lVar2 + 0x20) = "Sound_Ozo_Ability_B_Bounce_3";
  }
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_1003e10f0();
  if (param_2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0xe5);
    lVar2 = FUN_10000c3b0();
    FUN_1003a985c(param_1,lVar2);
    *(code **)(lVar2 + 0x10) = FUN_1003b86c0;
    uVar3 = FUN_10000bb2c();
    FUN_1003a985c(param_1,uVar3);
    lVar2 = FUN_10000c540();
    FUN_1003a985c(param_1,lVar2);
    *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_BounceQueued_10185ae60;
    uVar3 = FUN_10000c784();
    FUN_1003a985c(param_1,uVar3);
    uVar3 = FUN_10000bc94();
    FUN_1003a985c(param_1,uVar3);
    lVar2 = FUN_10000c540();
    FUN_1003a985c(param_1,lVar2);
    *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_NextBounceTarget_10185ae68;
    uVar3 = FUN_10000c784();
    FUN_1003a985c(param_1,uVar3);
    lVar2 = FUN_10000e1b4();
    FUN_1003a985c(param_1,lVar2);
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
    *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 1;
    *(undefined4 *)(lVar2 + 0x10) = 0xced49ebf;
    plVar5 = (long *)FUN_10000de28();
    FUN_1003a985c(param_1,plVar5);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
    local_50[0] = 0x3f800000;
    local_48 = 1;
    (**(code **)(*plVar5 + 0x10))(plVar5,6,local_50);
    lVar2 = FUN_10000e524();
    FUN_1003a985c(param_1,lVar2);
    *(char **)(lVar2 + 0x10) = "build://Sounds/ActorFx.assetbundle/sfx__gold_coins.mp3";
    *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar2 + 0x34) = 1;
    *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f000000;
    *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 5;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    lVar2 = FUN_10000ed74();
    FUN_1003a985c(param_1,lVar2);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined1 *)(lVar2 + 0x20) = 1;
    *(undefined8 *)(lVar2 + 0x24) = 0;
    *(undefined8 *)(lVar2 + 0x34) = 0;
    *(undefined8 *)(lVar2 + 0x2c) = 0;
    *(undefined4 *)(lVar2 + 0x3c) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
    *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
    *(undefined4 *)(lVar2 + 0x50) = 0x3f800000;
    *(undefined1 *)(lVar2 + 0x54) = 0xff;
    *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
    *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
    *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
    *(undefined2 *)(lVar2 + 0x68) = 0x4120;
    *(code **)(lVar2 + 0x78) = FUN_1003b9744;
    *(byte *)(lVar2 + 0xa8) = *(byte *)(lVar2 + 0xa8) & 0xf0 | 1;
    lVar2 = FUN_10000cae4();
    FUN_1003a985c(param_1,lVar2);
    *(code **)(lVar2 + 0x10) = FUN_1003b8e14;
    lVar2 = FUN_10000bd3c();
    FUN_1003a985c(param_1,lVar2);
    *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_BounceSlow_10185ae70;
    *(code **)(lVar2 + 0x30) = FUN_1003b9758;
    *(undefined2 *)(lVar2 + 0x68) = 1;
    *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
    uVar3 = FUN_10000c784();
    FUN_1003a985c(param_1,uVar3);
  }
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(param_1,uVar3);
  if (param_2 == 2) {
    ppuVar7 = &PTR_s_Buff_Ozo_FinalBounceTarget_10185ae88;
  }
  else {
    uVar3 = FUN_10000bb2c();
    FUN_1003a985c(param_1,uVar3);
    lVar2 = FUN_10000bd3c();
    FUN_1003a985c(param_1,lVar2);
    *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_BounceAvailable_10185ae78;
    *(code **)(lVar2 + 0x30) = FUN_1003b8b68;
    *(undefined2 *)(lVar2 + 0x68) = 1;
    *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
    uVar3 = FUN_10000c784();
    FUN_1003a985c(param_1,uVar3);
    ppuVar7 = &PTR_s_Buff_Ozo_BounceTarget_10185ae80;
  }
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(param_1,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(param_1,lVar2);
  *(undefined **)(lVar2 + 0x10) = *ppuVar7;
  *(code **)(lVar2 + 0x30) = FUN_1003b8b68;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(param_1,uVar3);
  if (param_2 == 0) {
    uVar3 = FUN_10000bc94();
    FUN_1003a985c(param_1,uVar3);
    lVar2 = FUN_10000e474();
    FUN_1003a985c(param_1,lVar2);
    *(undefined4 *)(lVar2 + 0x10) = 1;
    *(char **)(lVar2 + 0x18) = "Effect_Ozo_B_BounceTarget_1";
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined4 *)(lVar2 + 0x30) = 0;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
    *(uint *)(lVar2 + 0x4c) = (uint)lVar2 & 0xffff;
    uVar3 = FUN_10000c784();
    FUN_1003a985c(param_1,uVar3);
  }
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(param_1,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar8 = FUN_1004d2524("Ability02");
  uVar8 = FUN_100015208("Ability02",uVar8,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar8;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  uVar3 = FUN_10000c308();
  FUN_1003a985c(param_1,uVar3);
  FUN_10000b604(uVar3,FUN_1003b8b68);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(param_1,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003b8b68;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(param_1,uVar3);
  if (param_2 == 2) {
    lVar2 = FUN_10000c8e8();
    FUN_1003a985c(param_1,lVar2);
    lVar4 = FUN_10049ab34(lVar2 + 0x10);
    *(undefined **)(lVar4 + 8) = PTR_s_Buff_Ozo_Talent_SecondWind_10185ae50;
    lVar2 = lVar2 + 0xb0;
    uVar3 = FUN_10000bb2c();
    FUN_1003a985c(lVar2,uVar3);
    plVar5 = (long *)FUN_10000dc58();
    FUN_1003a985c(lVar2,plVar5);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Ozo__B_101859648);
    local_50[0] = 0;
    local_48 = 1;
    (**(code **)(*plVar5 + 0x20))(plVar5,local_50);
    uVar3 = FUN_10000c784();
    FUN_1003a985c(lVar2,uVar3);
    pcVar6 = FUN_1003b8b98;
  }
  else {
    pcVar6 = FUN_1003b875c;
  }
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(param_1,lVar2);
  *(code **)(lVar2 + 0x10) = pcVar6;
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(param_1,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b8bd4;
  *(undefined1 *)(lVar2 + 0x18) = 1;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(param_1,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return;
}




void FUN_1003b9730(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,0x11,0x19,0);
  return;
}




void FUN_1003b9744(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,4,0x19,0);
  return;
}




void FUN_1003b9758(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,0xb,0x19,0);
  return;
}




void FUN_1003b976c(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  lVar5 = lVar2;
  iVar1 = iVar3;
  while (iVar1 != DAT_10184dd68) {
    lVar5 = *(long *)(lVar5 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
  }
  plVar6 = (long *)(lVar5 + 0x18);
  do {
    lVar5 = *plVar6;
    plVar6 = (long *)(lVar5 + 0x20);
  } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8);
  for (lVar5 = *(long *)(lVar5 + 0x28); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
    if ((*(int *)(lVar5 + 0x314) == DAT_101d2ca1c) && (*(int *)(lVar5 + 0x310) == 0))
    goto LAB_1003b9810;
  }
LAB_1003b9800:
  FUN_1003b98c8();
  return;
LAB_1003b9810:
  while (iVar3 != DAT_10184dd68) {
    lVar2 = *(long *)(lVar2 + 0x10);
    iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  }
  lVar5 = *(long *)(lVar2 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  lVar2 = *(long *)(lVar5 + 0x68);
  if (((((lVar2 != 0) && (uVar4 = (ulong)*(ushort *)(lVar2 + 0x68) & 0x1f, (int)uVar4 != 0x1f)) &&
       (*(short *)(lVar2 + uVar4 * 0x38 + 0x70) == 2)) ||
      (((lVar2 = *(long *)(lVar5 + 0x78), lVar2 != 0 &&
        (uVar4 = (ulong)*(ushort *)(lVar2 + 0x68) & 0x1f, (int)uVar4 != 0x1f)) &&
       (*(short *)(lVar2 + uVar4 * 0x38 + 0x70) == 2)))) ||
     (((lVar5 = *(long *)(lVar5 + 0x80), lVar5 != 0 &&
       (uVar4 = (ulong)*(ushort *)(lVar5 + 0x68) & 0x1f, (int)uVar4 != 0x1f)) &&
      (*(short *)(lVar5 + uVar4 * 0x38 + 0x70) == 2)))) {
    return;
  }
  goto LAB_1003b9800;
}




undefined8 FUN_1003b98c8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x68) & 0x1f;
  if (((int)uVar2 == 0x1f) || (*(short *)(param_1 + uVar2 * 0x38 + 0x70) != 2)) {
    uVar1 = 0;
  }
  else {
    FUN_10045e3b4(param_1 + 0x68,4,0,0);
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_1003b991c(long param_1,long param_2,float *param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 local_58 [2];
  
  lVar4 = *(long *)(param_1 + 0x10);
  while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  lVar5 = *(long *)(lVar4 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  fVar6 = (float)FUN_1003dfe60(lVar4,3,7,0x19,0);
  uVar2 = FUN_1003a34a4(lVar5,DAT_101d2ca2c);
  fVar7 = (float)FUN_1003dfe60(lVar4,3,8,0x19,0);
  *param_3 = fVar6 + (float)uVar2 * fVar7;
  puVar1 = PTR_s_Buff_Ozo_Talent_SecondWind_10185ae50;
  lVar5 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar5 != 0) && (iVar3 = FUN_1003a47d0(lVar5,puVar1), iVar3 != 0)) {
    local_58[0] = DAT_101d90c54;
    fVar6 = (float)FUN_1003dfee8(lVar4,local_58,0,9);
    *param_3 = *param_3 * fVar6;
  }
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar6 = (float)FUN_1003dfe60(lVar4,3,9,0x19,0);
    *param_3 = *param_3 * fVar6;
  }
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_1003b9a8c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  
  puVar2 = PTR_s_Buff_Ozo_BounceSpeed_10185ae90;
  if (DAT_101d23a38 != '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar5 = *(long *)(lVar5 + 0x10);
    }
    plVar3 = (long *)(lVar5 + 0x18);
    do {
      lVar4 = *plVar3;
      plVar3 = (long *)(lVar4 + 0x20);
    } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
    for (lVar4 = *(long *)(lVar4 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2ca2c) && (*(int *)(lVar4 + 0x310) == 0)) {
        uVar1 = *(undefined4 *)(lVar5 + 0x260);
        fVar6 = (float)FUN_1003dfe60(lVar5,3,0xe,0x19,0);
        fVar7 = (float)FUN_1003dfe60(lVar5,3,0xe,4,0);
        uVar8 = FUN_1003dfe60(lVar5,3,0xf,0x19,0);
        local_6c = NEON_fminnm(fVar7 + fVar6,uVar8);
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        local_98 = &PTR_FUN_101496b18;
        local_74 = DAT_1018589d8;
        local_68 = 1;
        local_50 = 0;
        local_5c = 0;
        local_64 = 0;
        local_48 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_7c = uVar1;
        uStack_78 = uVar1;
        local_70 = FUN_1003d4e0c(puVar2);
        FUN_10049639c(&local_98,&DAT_101e47d30);
        return;
      }
    }
  }
  return;
}




void FUN_1003b9c14(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,5,0x19,0);
  return;
}




void FUN_1003b9c28(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,3,0x19,0);
  return;
}




void FUN_1003b9c3c(long param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = DAT_10184dd68;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_1011485c8();
    FUN_1003dfe60(uVar4,8,2,0x19,0);
    return;
  }
  iVar1 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
  lVar3 = lVar5;
  if (iVar1 == DAT_10184dd68) {
    fVar6 = (float)FUN_1003dfe60(lVar5,8,2,0x19,0);
  }
  else {
    do {
      lVar3 = *(long *)(lVar3 + 0x10);
    } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
    fVar6 = (float)FUN_1003dfe60(lVar3,8,2,0x19,0);
    while (iVar1 != iVar2) {
      lVar5 = *(long *)(lVar5 + 0x10);
      iVar1 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
    }
  }
  fVar7 = (float)FUN_1003dfe60(lVar5,8,3,0x19,0);
  *param_3 = fVar6 + 0.5 + fVar7;
  return;
}




void FUN_1003b9d1c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,2,0x19,0);
  return;
}




void FUN_1003b9d30(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,3,0x19,0);
  return;
}




void FUN_1003b9d44(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 local_50;
  float local_4c;
  undefined4 uStack_48;
  
  lVar5 = *(long *)(param_1 + 0x10);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  plVar3 = *(long **)(param_1 + 0x1c8);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar3[1]) {
      lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (lVar2 != 0) {
        if (DAT_101d23a38 == '\0') {
          local_50 = *(undefined4 *)(lVar2 + 0x250);
          uStack_48 = *(undefined4 *)(lVar2 + 600);
          local_4c = *(float *)(lVar2 + 0x2ec) + *(float *)(lVar2 + 0x254);
          FUN_1003b9ed0(lVar5,&local_50,0,0,1);
        }
        else if (lVar5 != 0) {
          uVar6 = 0x10000;
          lVar2 = lVar5;
LAB_1003b9dcc:
          do {
            do {
              lVar4 = lVar2;
              if ((lVar4 != lVar5) &&
                 (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x8a2209e7), lVar2 != 0)) {
                (**(code **)(lVar2 + 8))(lVar4);
              }
              if (((uVar6 & 0xffff) < uVar6 >> 0x10) &&
                 (lVar2 = *(long *)(lVar4 + 0x18), lVar2 != 0)) {
                uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
                goto LAB_1003b9dcc;
              }
              if ((uVar6 & 0xffff) == 0) {
                return;
              }
              lVar2 = *(long *)(lVar4 + 0x20);
            } while (*(long *)(lVar4 + 0x20) != 0);
            lVar4 = *(long *)(lVar4 + 0x10);
            if (lVar4 == 0) {
              return;
            }
            uVar1 = uVar6 - 1 & 0xffff;
            if (uVar1 == 0) {
              return;
            }
            uVar6 = uVar1 | uVar6 & 0xffff0000;
            while (lVar2 = *(long *)(lVar4 + 0x20), lVar2 == 0) {
              if ((uVar6 - 1 & 0xffff) == 0) {
                return;
              }
              lVar4 = *(long *)(lVar4 + 0x10);
              uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
              if (lVar4 == 0) {
                return;
              }
            }
          } while( true );
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1003b9ed0(long param_1,float *param_2,undefined8 param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  if (((int)uVar5 == 0x1f) || (uVar7 = param_4, *(short *)(param_1 + uVar5 * 0x38 + 0x90) != 5)) {
    if ((*(byte *)(param_1 + 0x2f8) >> 1 & 1) == 0) goto LAB_1003b9f50;
    uVar7 = param_4 & 1;
  }
  if (uVar7 == 0) {
    return;
  }
LAB_1003b9f50:
  fVar9 = *(float *)(param_1 + 0x250) - *param_2;
  fVar10 = (*(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254)) - param_2[1];
  fVar8 = *(float *)(param_1 + 600) - param_2[2];
  uVar7 = 0x10000;
  lVar4 = param_1;
LAB_1003b9f7c:
  do {
    do {
      lVar6 = lVar4;
      if ((lVar6 != param_1) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0xb0d0275), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar6);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar4 = *(long *)(lVar6 + 0x18), lVar4 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_1003b9f7c;
      }
      if ((uVar7 & 0xffff) == 0) goto LAB_1003ba01c;
      lVar4 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) {
LAB_1003ba01c:
      if (((*(long *)(param_1 + 0x48) != 0) &&
          (iVar3 = FUN_100463608(*(long *)(param_1 + 0x48),param_2), iVar3 != 0)) &&
         (0.2 <= fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8)) {
        FUN_10046211c(param_1 + 0x88,2,0,0);
        if ((((DAT_10185d738 != '\0') && (param_5 != 0)) &&
            ((iVar3 = FUN_1004611a4(*(undefined8 *)(param_1 + 0x58)), iVar3 != 0 &&
             ((DAT_101d23a38 != '\0' && (*(long *)(param_1 + 0x48) != 0)))))) &&
           ((param_4 & 1) == 0)) {
          FUN_1000f3e00(param_1,*(long *)(param_1 + 0x48) + 0x7b0,1);
        }
        puVar2 = PTR_s_onActorMoveName_10185d610;
        if ((*(long *)(param_1 + 0x60) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x28), lVar4 != 0)) {
          do {
            FUN_10046a360(lVar4,puVar2);
            lVar4 = *(long *)(lVar4 + 0x350);
          } while (lVar4 != 0);
          for (lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x28); lVar4 != 0;
              lVar4 = *(long *)(lVar4 + 0x350)) {
            FUN_10046a2a0(lVar4,param_2);
          }
        }
      }
      return;
    }
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar4 = *(long *)(lVar6 + 0x20), lVar4 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) goto LAB_1003ba01c;
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar6 == 0) goto LAB_1003ba01c;
    }
  } while( true );
}




void FUN_1003ba108(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,7,0x19,0);
  return;
}




void FUN_1003ba11c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,6,0x19,0);
  return;
}




void FUN_1003ba130(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,5,0x19,0);
  return;
}




void FUN_1003ba144(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined4 local_48 [2];
  
  lVar5 = *(long *)(param_1 + 0x10);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  fVar6 = (float)FUN_1003e00a8(lVar5,0,6,9,1);
  *param_3 = fVar6;
  FUN_1003461dc(lVar5);
  puVar1 = PTR_s_Buff_Petal_Talent_KaboomSeeds_10185aea0;
  lVar3 = FUN_100345d90();
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    FUN_1003461dc(lVar5);
    uVar4 = FUN_100345d90();
    local_48[0] = DAT_101d90c78;
    fVar6 = (float)FUN_1003dfee8(uVar4,local_48,0,9);
    *param_3 = *param_3 * fVar6;
  }
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_1003ba22c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  
  if (DAT_101d23a38 != '\0') {
    lVar8 = *(long *)(param_2 + 0x20);
    for (lVar3 = *(long *)(lVar8 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184daa8) {
        iVar1 = FUN_1003a34a4(lVar3,DAT_101d2ca3c);
        if (iVar1 != 0) {
          iVar2 = 0;
          do {
            lVar3 = *(long *)(param_1 + 0x10);
            while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68))) {
              lVar3 = *(long *)(lVar3 + 0x10);
            }
            fVar9 = (float)FUN_1003e00a8(lVar3,0,0xc,9,1);
            *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) * fVar9;
            iVar2 = iVar2 + 1;
          } while (iVar2 != iVar1);
          lVar8 = *(long *)(param_2 + 0x20);
        }
        break;
      }
    }
    uVar4 = FUN_1010a1520();
    plVar5 = (long *)FUN_1010a0e0c(uVar4,0,"*KindredBuffs*",0);
    puVar7 = (undefined8 *)*plVar5;
    puVar6 = (undefined8 *)*puVar7;
    if (puVar6 != (undefined8 *)0x0) {
      lVar3 = 0;
      do {
        iVar2 = _strcmp((char *)*puVar6,PTR_s_Buff_PetalSeed_LandMine_ReduceDa_10185aea8);
        iVar1 = DAT_1018589d8;
        if (iVar2 == 0) {
          if ((int)lVar3 == -1) {
            return;
          }
          if (lVar8 == 0) {
            return;
          }
          DAT_1018589d8 = DAT_1018589d8 + 1;
          FUN_1003b093c(0x40800000,0,0,lVar8,lVar8,*(undefined8 *)(*plVar5 + (long)(int)lVar3 * 8),
                        iVar1,1,0,0);
          return;
        }
        puVar6 = (undefined8 *)puVar7[lVar3 + 1];
        lVar3 = lVar3 + 1;
      } while (puVar6 != (undefined8 *)0x0);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ba3b4(long param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  
  *param_3 = 0x41000000;
  fVar13 = *(float *)(param_1 + 0x1dc);
  fVar10 = *(float *)(param_2 + 0x250);
  fVar12 = *(float *)(param_2 + 600);
  fVar11 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
  fVar4 = fVar10 - *(float *)(param_1 + 0x1d8);
  fVar8 = fVar12 - *(float *)(param_1 + 0x1e0);
  fVar9 = fVar8 * fVar8 + fVar4 * fVar4;
  if (1e-08 <= fVar9) {
    fVar9 = SQRT(fVar9);
    fVar5 = fVar4 / fVar9;
    fVar9 = fVar8 / fVar9;
  }
  else {
    fVar5 = 1.0;
    fVar9 = 0.0;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  local_70 = fVar10;
  fStack_6c = fVar11;
  local_68 = fVar12;
  fVar6 = (float)FUN_1003e00a8(lVar2,0,0xe,9,1);
  lVar2 = *(long *)(param_1 + 0x10);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  fVar7 = (float)FUN_1003e00a8(lVar2,0,0xf,9,1);
  fVar13 = fVar11 - fVar13;
  fVar4 = (fVar7 + fVar6) - SQRT(fVar4 * fVar4 + fVar13 * fVar13 + fVar8 * fVar8);
  *param_4 = CONCAT44(fVar4 * 0.0 + fVar11,fVar5 * fVar4 + fVar10);
  *(float *)(param_4 + 1) = fVar4 * fVar9 + fVar12;
  lVar2 = *(long *)(param_2 + 0x18);
  do {
    if (lVar2 == 0) {
      bVar1 = 0;
LAB_1003ba558:
      uVar3 = FUN_10054e09c(bVar1,&local_70,param_4,&local_74,0,0);
      if ((uVar3 & 1) == 0) {
        *param_4 = CONCAT44(fStack_6c + fVar4 * 0.0 * local_74,local_70 + fVar5 * fVar4 * local_74);
        *(float *)(param_4 + 1) = local_68 + fVar4 * fVar9 * local_74;
      }
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_1003ba558;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_1003ba5b0(undefined8 param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  fVar1 = *(float *)(param_2 + 0x250);
  fVar2 = *(float *)(param_2 + 600);
  FUN_1003ba3b4(param_1,param_2,&local_34,&local_40);
  fVar1 = fVar1 - local_40;
  fVar2 = fVar2 - local_38;
  *param_3 = SQRT(fVar1 * fVar1 + fStack_3c * fStack_3c + fVar2 * fVar2) / local_34;
  return;
}




void FUN_1003ba61c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,float *param_4)

{
  float local_24;
  
  FUN_1003ba5b0(param_1,param_2,&local_24);
  *param_3 = 0x3f4ccccd;
  *param_4 = local_24 * 0.8;
  return;
}




float FUN_1003ba66c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0xc0);
}




void FUN_1003ba6d0(undefined8 param_1)

{
  FUN_1003e00a8(param_1,0,8,9,1);
  return;
}




void FUN_1003ba6e4(undefined8 param_1)

{
  FUN_1003e00a8(param_1,0,0xd,9,1);
  return;
}




void FUN_1003ba6f8(undefined8 param_1)

{
  FUN_1003e00a8(param_1,0,0xb,9,1);
  return;
}




void FUN_1003ba70c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  
  if (DAT_101d23a38 != '\0') {
    plVar7 = (long *)(param_1 + 0x10);
    lVar4 = *plVar7;
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    FUN_1003461dc();
    lVar5 = FUN_100345d90();
    lVar8 = *(long *)(param_2 + 0x20);
    for (lVar4 = *(long *)(lVar8 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184daa8) {
        uVar3 = FUN_1003ba8f4(lVar4,PTR_s_Buff_Petal_Yummy_10185aeb8);
        uVar3 = uVar3 ^ 1;
        goto LAB_1003ba7b4;
      }
    }
    uVar3 = 1;
LAB_1003ba7b4:
    puVar2 = PTR_s_Buff_Petal_YummyFrenzy_10185aec0;
    do {
      lVar6 = *plVar7;
      plVar7 = (long *)(lVar6 + 0x10);
    } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68);
    if (*(int *)(param_2 + 0x14) == *(int *)(lVar6 + 0x260) && (uVar3 & 1) == 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      local_6c = FUN_1003df710(lVar5,8,1);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_98 = &PTR_FUN_101496b18;
      local_74 = DAT_1018589d8;
      local_68 = 1;
      local_50 = 0;
      local_5c = 0;
      local_64 = 0;
      local_48 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_7c = uVar1;
      uStack_78 = uVar1;
      local_70 = FUN_1003d4e0c(puVar2);
      FUN_10049639c(&local_98,&DAT_101e47d30);
      FUN_1003a4e5c(&local_c0,PTR_s_Buff_Petal_Yummy_10185aeb8);
      plVar7 = (long *)(lVar4 + 0x28);
      while ((lVar4 = *plVar7, *(int *)(lVar4 + 0x314) != (int)local_c0 ||
             (*(int *)(lVar4 + 0x310) != 0))) {
        plVar7 = (long *)(lVar4 + 0x350);
      }
      uStack_a0 = *(undefined4 *)(lVar4 + 0x30c);
      local_a4 = *(undefined4 *)(lVar8 + 0x260);
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_c0 = &PTR_FUN_101496cd8;
      FUN_100496580(&local_c0,&DAT_101e47d30);
    }
  }
  return;
}




undefined8 FUN_1003ba8f4(long param_1)

{
  long lVar1;
  int local_28 [2];
  
  FUN_1003a4e5c(local_28);
  lVar1 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if ((*(int *)(lVar1 + 0x314) == local_28[0]) && (*(int *)(lVar1 + 0x310) == 0)) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  return 1;
}




void FUN_1003ba954(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_1003ba95c(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  
  *param_4 = 0x3fc00000;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,1,3,0x19,0);
  *param_3 = 1.5 / fVar1;
  return;
}




void FUN_1003ba9c4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1003ba9d8(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,1,3,0x19,0);
  *param_3 = fVar1 * 0.9;
  return;
}




void FUN_1003baa3c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003dfe60(param_2,1,8,0x19,0);
  *param_3 = uVar1;
  return;
}




void FUN_1003baa74(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




long FUN_1003baa88(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined **local_b0;
  long local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  byte local_56;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined1 local_44;
  undefined1 auStack_40 [8];
  long local_38;
  
  uVar1 = DAT_101d2ca58;
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_a8 = 0;
  local_9c = 0;
  local_8c = 0;
  uStack_88 = 0;
  local_94 = 0;
  uStack_90 = 0;
  local_84 = 0;
  uStack_78 = 0xbf800000c0000000;
  local_80 = 0xbf800000bf800000;
  local_70 = 0x3f800000;
  local_6c = 0xff;
  uStack_60 = 0xffffffff00000000;
  local_68 = 0xffffffff00000000;
  local_a0 = 1;
  lVar4 = FUN_1003e10f0();
  local_b0 = &PTR_FUN_1014999d0;
  local_54 = uVar1;
  uStack_50 = 0xffffffff;
  local_44 = 0;
  local_4c = 0x100000000;
  lVar5 = *(long *)(param_1 + 0x10);
  while ((lVar2 = local_a8, lVar5 != 0 &&
         (lVar2 = lVar5, *(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  local_a8 = lVar2;
  local_56 = *(byte *)(lVar4 + 0xe5) | 0x14;
  uStack_90 = 0x13fcd16;
  local_8c = 1;
  local_58 = 0x5110;
  iVar3 = FUN_1003a6ce4(&local_b0,auStack_40,1,0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return (ulong)(iVar3 < 1) << 10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003babdc(long param_1,undefined8 param_2,ushort param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfffc | param_3 & 3;
  return;
}




void FUN_1003babf0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_858;
  undefined4 local_850;
  undefined **local_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined1 local_830;
  undefined4 local_82c;
  undefined4 uStack_828;
  int local_824;
  undefined4 local_820;
  undefined8 local_81c;
  undefined8 local_814;
  undefined8 local_80c;
  undefined8 local_800;
  undefined4 local_7f8;
  undefined **local_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined1 local_7d8;
  undefined4 local_7d4;
  undefined4 uStack_7d0;
  int local_7cc;
  undefined4 local_7c8;
  undefined8 local_7c4;
  undefined8 local_7bc;
  undefined8 local_7b4;
  undefined8 local_7a8;
  undefined4 local_7a0;
  undefined **local_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined1 local_780;
  undefined4 local_77c;
  undefined4 uStack_778;
  int local_774;
  undefined4 local_770;
  undefined8 local_76c;
  undefined8 local_764;
  undefined8 local_75c;
  undefined8 local_750;
  undefined4 local_748;
  undefined **local_740;
  undefined8 uStack_738;
  undefined4 local_724;
  undefined1 local_720;
  undefined **local_718;
  long lStack_710;
  undefined1 local_708;
  undefined8 local_704;
  undefined4 local_6fc;
  undefined4 uStack_6f8;
  undefined4 local_6f4;
  undefined4 uStack_6f0;
  undefined4 local_6ec;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined4 local_6d8;
  undefined1 local_6d4;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined2 local_6c0;
  byte local_6be;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined8 local_6b4;
  undefined1 local_6ac;
  long local_6a8 [200];
  long local_68;
  
  uVar1 = DAT_101d2ca58;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    lVar4 = *(long *)(param_1 + 0x10);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    local_704 = 0;
    local_6f4 = 0;
    uStack_6f0 = 0;
    local_6fc = 0;
    uStack_6f8 = 0;
    local_6ec = 0;
    uStack_6e0 = 0xbf800000c0000000;
    local_6e8 = 0xbf800000bf800000;
    local_6d8 = 0x3f800000;
    local_6d4 = 0xff;
    uStack_6c8 = 0xffffffff00000000;
    local_6d0 = 0xffffffff00000000;
    local_708 = 1;
    lVar3 = FUN_1003e10f0();
    local_6bc = uVar1;
    local_6b8 = 0xffffffff;
    local_6ac = 0;
    local_6b4 = 0x100000000;
    local_718 = &PTR_FUN_1014999d0;
    uStack_6f8 = 0x13fcd16;
    local_6f4 = 1;
    local_6c0 = 0x5110;
    local_6be = *(byte *)(lVar3 + 0xe5) | 0x14;
    local_740 = &PTR_FUN_101499a08;
    uStack_738 = 0;
    local_724 = 200;
    local_720 = 0;
    lStack_710 = lVar4;
    iVar2 = FUN_1003a6ce4(&local_718,local_6a8,200,&local_740);
    lVar3 = local_6a8[0];
    if (iVar2 != 0) {
      local_77c = *(undefined4 *)(lVar4 + 0x260);
      uStack_778 = *(undefined4 *)(local_6a8[0] + 0x260);
      local_790 = 0;
      uStack_788 = 0;
      local_780 = 0;
      local_798 = &PTR_FUN_101496b18;
      local_774 = DAT_1018589d8;
      local_76c = 0x13f99999a;
      local_750 = 0;
      local_75c = 0;
      local_764 = 0;
      local_748 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_770 = FUN_1003d4e0c(PTR_s_Buff_PetalMinion_ThornstormLitFu_10185aee8);
      FUN_10049639c(&local_798,&DAT_101e47d30);
      local_7d4 = *(undefined4 *)(lVar4 + 0x260);
      uStack_7d0 = *(undefined4 *)(lVar3 + 0x260);
      local_7e8 = 0;
      uStack_7e0 = 0;
      local_7d8 = 0;
      local_7f0 = &PTR_FUN_101496b18;
      local_7cc = DAT_1018589d8;
      local_7c4 = 0x141200000;
      local_7a8 = 0;
      local_7b4 = 0;
      local_7bc = 0;
      local_7a0 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_7c8 = FUN_1003d4e0c(PTR_s_Buff_PetalMinion_ThornstormLitOn_10185aef0);
      FUN_10049639c(&local_7f0,&DAT_101e47d30);
      local_82c = *(undefined4 *)(lVar4 + 0x260);
      uStack_828 = *(undefined4 *)(lVar3 + 0x260);
      local_840 = 0;
      uStack_838 = 0;
      local_830 = 0;
      local_848 = &PTR_FUN_101496b18;
      local_824 = DAT_1018589d8;
      local_81c = 0x141200000;
      local_800 = 0;
      local_80c = 0;
      local_814 = 0;
      local_7f8 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_820 = FUN_1003d4e0c(PTR_s_Buff_Invulnerable_10185a588);
      FUN_10049639c(&local_848,&DAT_101e47d30);
      local_858 = *(undefined8 *)(param_1 + 0x1d8);
      local_850 = *(undefined4 *)(param_1 + 0x1e0);
      FUN_100101b1c(local_6a8[0],5,&local_858);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003baec8(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  uVar2 = FUN_1003e00a8(lVar1,0,4,9,1);
  *param_3 = uVar2;
  *param_4 = 1;
  *param_5 = 1;
  return;
}




void FUN_1003baf40(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  fVar2 = (float)FUN_1003e00a8(lVar1,0,4,9,1);
  *param_3 = fVar2 * 0.5;
  *param_4 = 1;
  *param_5 = 1;
  return;
}




void FUN_1003bafc0(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 local_48 [2];
  
  lVar4 = *(long *)(param_1 + 0x10);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  fVar5 = (float)FUN_1003e00a8(lVar4,2,0,9,0);
  *param_3 = fVar5;
  *param_4 = 2;
  *param_5 = 1;
  FUN_1003461dc(lVar4);
  uVar3 = DAT_10185af08;
  lVar2 = FUN_100345d90();
  if ((lVar2 != 0) && (iVar1 = FUN_1003a47d0(lVar2,uVar3), iVar1 != 0)) {
    FUN_1003461dc(lVar4);
    uVar3 = FUN_100345d90();
    local_48[0] = DAT_101d90c64;
    fVar5 = (float)FUN_1003dfee8(uVar3,local_48,3,9);
    *param_3 = *param_3 * fVar5;
  }
  return;
}




void FUN_1003bb0a8(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  
  if (DAT_101d23a38 != '\0') {
    lVar6 = *(long *)(param_1 + 0x10);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    FUN_1003461dc();
    lVar7 = FUN_100345d90();
    lVar9 = *(long *)(param_2 + 0x20);
    for (lVar6 = *(long *)(lVar9 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
      if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184daa8) {
        uVar3 = FUN_1003ba8f4(lVar6,PTR_s_Buff_Petal_Yummy_10185aeb8);
        if (*(long *)(param_2 + 0x28) == 0) {
          return;
        }
        iVar1 = *(int *)(*(long *)(param_2 + 0x28) + 0x270);
        uVar4 = FUN_1004d2524("PetalMinion");
        iVar5 = FUN_100015208("PetalMinion",uVar4,0x12345678);
        puVar2 = PTR_s_Buff_Petal_YummyFrenzy_10185aec0;
        if (iVar1 != iVar5) {
          return;
        }
        if (((uVar3 ^ 1) & 1) != 0) {
          return;
        }
        uVar4 = *(undefined4 *)(lVar7 + 0x260);
        local_6c = FUN_1003df710(lVar7,8,1);
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        local_98 = &PTR_FUN_101496b18;
        local_74 = DAT_1018589d8;
        local_68 = 1;
        local_50 = 0;
        local_5c = 0;
        local_64 = 0;
        local_48 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_7c = uVar4;
        uStack_78 = uVar4;
        local_70 = FUN_1003d4e0c(puVar2);
        FUN_10049639c(&local_98,&DAT_101e47d30);
        plVar8 = (long *)(lVar6 + 0x28);
        while ((lVar6 = *plVar8, *(int *)(lVar6 + 0x314) != DAT_101d2ca74 ||
               (*(int *)(lVar6 + 0x310) != 0))) {
          plVar8 = (long *)(lVar6 + 0x350);
        }
        uStack_a0 = *(undefined4 *)(lVar6 + 0x30c);
        local_a4 = *(undefined4 *)(lVar9 + 0x260);
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        local_c0 = &PTR_FUN_101496cd8;
        FUN_100496580(&local_c0,&DAT_101e47d30);
        return;
      }
    }
  }
  return;
}




undefined4 FUN_1003bb288(long param_1)

{
  return *(undefined4 *)(param_1 + 0x270);
}




void FUN_1003bb290(long param_1,long param_2,float *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68 [2];
  
  plVar4 = (long *)(param_1 + 0x10);
  lVar1 = *plVar4;
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  FUN_1003461dc();
  uVar2 = FUN_100345d90();
  do {
    lVar1 = *plVar4;
    plVar4 = (long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar9 = *(float *)(param_2 + 0x250);
  fVar10 = *(float *)(param_2 + 600);
  fVar7 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
  fVar5 = fVar9 - *(float *)(lVar1 + 0x250);
  fVar6 = fVar10 - *(float *)(lVar1 + 600);
  fVar8 = fVar5 * fVar5 + fVar6 * fVar6;
  if (1e-08 <= fVar8) {
    fVar8 = SQRT(fVar8);
    fVar5 = fVar5 / fVar8;
    fVar6 = fVar6 / fVar8;
  }
  else {
    fVar5 = 1.0;
    fVar6 = 0.0;
  }
  local_68[0] = DAT_101d90c64;
  local_78 = fVar9;
  fStack_74 = fVar7;
  local_70 = fVar10;
  fVar8 = (float)FUN_1003dfee8(uVar2,local_68,0,9);
  *param_4 = CONCAT44(fVar7 + fVar8 * 0.0,fVar9 + fVar5 * fVar8);
  *(float *)(param_4 + 1) = fVar10 + fVar8 * fVar6;
  local_68[0] = DAT_101d90c64;
  fVar7 = (float)FUN_1003dfee8(uVar2,local_68,2,9);
  *param_3 = fVar8 / fVar7;
  uVar3 = FUN_10054e09c(0,&local_78,param_4,local_68,0,0);
  if ((uVar3 & 1) == 0) {
    *param_4 = CONCAT44(fStack_74 + fVar8 * 0.0 * local_68[0],local_78 + fVar5 * fVar8 * local_68[0]
                       );
    *(float *)(param_4 + 1) = local_70 + fVar8 * fVar6 * local_68[0];
  }
  return;
}




void FUN_1003bb45c(undefined8 param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  fVar1 = *(float *)(param_2 + 0x250);
  fVar2 = *(float *)(param_2 + 600);
  FUN_1003bb290(param_1,param_2,&local_34,&local_40);
  fVar1 = fVar1 - local_40;
  fVar2 = fVar2 - local_38;
  *param_3 = SQRT(fVar1 * fVar1 + fStack_3c * fStack_3c + fVar2 * fVar2) / local_34;
  return;
}




void FUN_1003bb4c8(long param_1,undefined8 param_2,float *param_3,float *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float local_4c;
  undefined4 local_48 [2];
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  FUN_1003461dc();
  uVar2 = FUN_100345d90();
  FUN_1003bb45c(param_1,param_2,&local_4c);
  local_48[0] = DAT_101d90c64;
  fVar3 = (float)FUN_1003dfee8(uVar2,local_48,1,9);
  *param_4 = fVar3;
  *param_3 = fVar3 / local_4c;
  return;
}




void FUN_1003bb57c(undefined8 param_1)

{
  FUN_1003e00a8(param_1,2,6,9,0);
  return;
}




void FUN_1003bb590(undefined8 param_1)

{
  FUN_1003e00a8(param_1,2,7,9,0);
  return;
}




void FUN_1003bb5a4(undefined8 param_1)

{
  FUN_1003e00a8(param_1,2,5,9,0);
  return;
}




undefined8 FUN_1003bb5b8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dab8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar1 = *(long *)(lVar1 + 0x58);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x68) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return 0;
  }
  if (*(short *)(lVar1 + uVar2 * 0x38 + 0x70) != 2) {
    return 0;
  }
  return 2;
}




undefined8
FUN_1003bb644(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,uint param_5,
             undefined8 *param_6,uint param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_70,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003bb5b8;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar2);
  if (param_2 != 0) {
    plVar3 = (long *)thunk_FUN_10000e358();
    FUN_1003a985c(&local_70,plVar3);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Staff");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,param_2);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
    (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  }
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_70,plVar3);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  if (param_5 != 0) {
    lVar1 = FUN_10000e524();
    FUN_1003a985c(&local_70,lVar1);
    uVar6 = *param_4;
    uVar2 = FUN_1010a1520();
    lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
    uVar7 = FUN_1003bb940(*(undefined4 *)(lVar4 + 0x278));
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar1 + 0x34) = 1;
    *(undefined4 *)(lVar1 + 0x3c) = uVar7;
    *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
    *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if (param_5 != 1) {
      lVar4 = (ulong)param_5 - 1;
      bVar5 = 1;
      do {
        param_4 = param_4 + 1;
        *(undefined8 *)(lVar1 + (ulong)bVar5 * 8 + 0x10) = *param_4;
        bVar5 = bVar5 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *(byte *)(lVar1 + 0x31) = bVar5;
    }
  }
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar1 + 0x18) = FUN_1003c5148;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  (**(code **)(*plVar3 + 0x48))(plVar3,param_3);
  if (param_7 != 0) {
    lVar1 = FUN_10000e524();
    FUN_1003a985c(&local_70,lVar1);
    uVar6 = *param_6;
    uVar2 = FUN_1010a1520();
    lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
    uVar7 = FUN_1003bb940(*(undefined4 *)(lVar4 + 0x278));
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar1 + 0x34) = 1;
    *(undefined4 *)(lVar1 + 0x3c) = uVar7;
    *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
    *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if (param_7 != 1) {
      lVar4 = (ulong)param_7 - 1;
      bVar5 = 1;
      do {
        param_6 = param_6 + 1;
        *(undefined8 *)(lVar1 + (ulong)bVar5 * 8 + 0x10) = *param_6;
        bVar5 = bVar5 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *(byte *)(lVar1 + 0x31) = bVar5;
    }
  }
  plVar3 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_70,plVar3);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_8);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar2);
  return local_70;
}




float FUN_1003bb940(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x274);
}




void FUN_1003bb9a4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003bb9b8(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = DAT_10184dd68;
  lVar3 = *(long *)(param_1 + 0x10);
  iVar4 = *(int *)(*(long *)(lVar3 + 8) + 0xa4);
  lVar5 = lVar3;
  iVar1 = iVar4;
  while (iVar1 != DAT_10184dd68) {
    lVar5 = *(long *)(lVar5 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
  }
  *param_2 = *(undefined4 *)(lVar5 + 0x250);
  fVar6 = *(float *)(lVar5 + 0x254);
  param_2[1] = fVar6;
  uVar7 = *(undefined4 *)(lVar5 + 600);
  param_2[1] = *(float *)(lVar5 + 0x2ec) + fVar6;
  param_2[2] = uVar7;
  while (iVar4 != iVar2) {
    lVar3 = *(long *)(lVar3 + 0x10);
    iVar4 = *(int *)(*(long *)(lVar3 + 8) + 0xa4);
  }
  fVar6 = *(float *)(lVar3 + 0x240);
  fVar9 = *(float *)(lVar3 + 0x248);
  fVar8 = fVar6 * fVar6 + *(float *)(lVar3 + 0x244) * *(float *)(lVar3 + 0x244) + fVar9 * fVar9;
  if (1e-08 <= fVar8) {
    fVar8 = SQRT(fVar8);
    fVar6 = fVar6 / fVar8;
    fVar9 = fVar9 / fVar8;
  }
  else {
    fVar6 = 1.0;
    fVar9 = 0.0;
  }
  uVar7 = _atan2f(fVar9,fVar6);
  *param_3 = uVar7;
  return;
}




void FUN_1003bba98(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_1003bbaac(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1003bbac0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_1003bbad4(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  plVar3 = (long *)(param_1 + 0x18);
  do {
    lVar4 = *plVar3;
    plVar3 = (long *)(lVar4 + 0x20);
  } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
  lVar4 = *(long *)(lVar4 + 0x28);
  if (lVar4 == 0) {
    pcVar1 = "GunMuzzleTip_Attack";
    uVar2 = 0x59;
  }
  else {
    pcVar1 = "GunMuzzleTip_Ability02_Attack";
    do {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2ca9c) && (*(int *)(lVar4 + 0x310) == 0)) {
        uVar2 = 0x5b;
        goto LAB_1003bbb78;
      }
      lVar4 = *(long *)(lVar4 + 0x350);
    } while (lVar4 != 0);
    uVar2 = 0x59;
    pcVar1 = "GunMuzzleTip_Attack";
  }
LAB_1003bbb78:
  *param_3 = uVar2;
  *param_4 = pcVar1;
  return;
}




void FUN_1003bbb84(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  plVar3 = (long *)(param_1 + 0x18);
  do {
    lVar4 = *plVar3;
    plVar3 = (long *)(lVar4 + 0x20);
  } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
  lVar4 = *(long *)(lVar4 + 0x28);
  if (lVar4 == 0) {
    pcVar1 = "GunMuzzleTip_AltAttack";
    uVar2 = 0x59;
  }
  else {
    pcVar1 = "GunMuzzleTip_Ability02_AltAttack";
    do {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2ca9c) && (*(int *)(lVar4 + 0x310) == 0)) {
        uVar2 = 0x5b;
        goto LAB_1003bbc28;
      }
      lVar4 = *(long *)(lVar4 + 0x350);
    } while (lVar4 != 0);
    uVar2 = 0x59;
    pcVar1 = "GunMuzzleTip_AltAttack";
  }
LAB_1003bbc28:
  *param_3 = uVar2;
  *param_4 = pcVar1;
  return;
}




void FUN_1003bbc34(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  plVar3 = (long *)(param_1 + 0x18);
  do {
    lVar4 = *plVar3;
    plVar3 = (long *)(lVar4 + 0x20);
  } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
  lVar4 = *(long *)(lVar4 + 0x28);
  if (lVar4 == 0) {
    pcVar1 = "GunMuzzleTip_CritAttack";
    uVar2 = 0x5a;
  }
  else {
    pcVar1 = "GunMuzzleTip_Ability02_CritAttack";
    do {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2ca9c) && (*(int *)(lVar4 + 0x310) == 0)) {
        uVar2 = 0x5c;
        goto LAB_1003bbcd8;
      }
      lVar4 = *(long *)(lVar4 + 0x350);
    } while (lVar4 != 0);
    uVar2 = 0x5a;
    pcVar1 = "GunMuzzleTip_CritAttack";
  }
LAB_1003bbcd8:
  *param_3 = uVar2;
  *param_4 = pcVar1;
  return;
}




void FUN_1003bbce4(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined **local_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined1 local_740;
  undefined4 local_73c;
  undefined1 local_738;
  undefined1 local_737;
  undefined1 local_736;
  undefined8 local_734;
  undefined8 local_72c;
  undefined8 local_724;
  undefined4 local_71c;
  int local_704;
  undefined4 uStack_700;
  undefined **local_6f8;
  long local_6f0;
  undefined1 local_6e8;
  undefined4 uStack_6e4;
  undefined4 local_6e0;
  undefined4 uStack_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  float local_6c8;
  undefined8 local_6c4;
  undefined8 uStack_6bc;
  undefined1 local_6b4;
  undefined4 local_6b0;
  undefined8 local_6ac;
  undefined4 local_6a4;
  undefined2 local_6a0;
  byte local_69e;
  undefined4 local_698;
  undefined4 uStack_694;
  long local_690;
  long local_58;
  
  puVar2 = PTR_s_Buff_Ringo_Talent_BulletSplit_10185af78;
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    plVar1 = (long *)(param_1 + 0x10);
    plVar5 = plVar1;
    do {
      lVar7 = *plVar5;
      plVar5 = (long *)(lVar7 + 0x10);
    } while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dd68);
    lVar7 = FUN_100345d90(*(undefined4 *)(lVar7 + 0x260));
    if ((lVar7 != 0) &&
       (iVar3 = FUN_1003a47d0(lVar7,puVar2), puVar2 = PTR_s_Buff_Ringo_TwirlingSilver_10185af80,
       plVar5 = plVar1, iVar3 != 0)) {
      do {
        lVar7 = *plVar5;
        plVar5 = (long *)(lVar7 + 0x10);
      } while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dd68);
      lVar7 = FUN_100345d90(*(undefined4 *)(lVar7 + 0x260));
      if ((lVar7 != 0) && (iVar3 = FUN_1003a47d0(lVar7,puVar2), iVar3 != 0)) {
        lVar7 = *plVar1;
        while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dd68))) {
          lVar7 = *(long *)(lVar7 + 0x10);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x1d8);
        uVar9 = *(undefined4 *)(param_1 + 0x1e0);
        local_6f8 = &PTR_FUN_101499960;
        local_6d8 = 0;
        uStack_6d0 = 0;
        local_6e0 = 0;
        uStack_6dc = 0;
        uStack_6bc = 0x3f800000bf800000;
        local_6c4 = 0xc0000000bf800000;
        local_6b4 = 0xff;
        local_6ac = 0xffffffff;
        local_6a4 = 0xffffffff;
        local_6e8 = 1;
        lVar4 = FUN_1003e10f0();
        local_69e = *(byte *)(lVar4 + 0xe5);
        local_6b0 = 0x40000;
        plVar5 = plVar1;
        do {
          lVar4 = *plVar5;
          plVar5 = (long *)(lVar4 + 0x10);
        } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68);
        local_698 = DAT_101d90cc8;
        local_6f0 = lVar7;
        local_6c8 = (float)FUN_1003dfee8(lVar4,&local_698,2,9);
        local_6c8 = local_6c8 * local_6c8;
        uStack_6e4 = (undefined4)uVar8;
        local_6e0 = (undefined4)((ulong)uVar8 >> 0x20);
        local_69e = local_69e | 0x14;
        local_6a0 = 0xc320;
        uStack_6dc = uVar9;
        iVar3 = FUN_1003a6ce4(&local_6f8,&local_698,200,0);
        if (iVar3 != 0) {
          plVar5 = *(long **)(param_1 + 0x1c8);
          lVar7 = 0;
          if (plVar5 != (long *)0x0) {
            if (*(int *)(param_1 + 0x1d0) == (int)plVar5[1]) {
              lVar7 = (**(code **)(*plVar5 + 0x10))();
            }
            else {
              lVar7 = 0;
              *(undefined8 *)(param_1 + 0x1c8) = 0;
              *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
            }
          }
          lVar4 = CONCAT44(uStack_694,local_698);
          if ((lVar7 != CONCAT44(uStack_694,local_698)) || (lVar4 = local_690, iVar3 != 1)) {
            if (((DAT_101e47f18 & 1) == 0) &&
               (iVar3 = ___cxa_guard_acquire(&DAT_101e47f18), iVar3 != 0)) {
              DAT_101e47f10 = 0x3e3270a0;
              ___cxa_guard_release(&DAT_101e47f18);
            }
            lVar6 = *plVar1;
            lVar7 = lVar6;
            if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184dd68) {
              local_738 = *(undefined1 *)(lVar6 + 0x300);
            }
            else {
              do {
                lVar7 = *(long *)(lVar7 + 0x10);
              } while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dd68);
              local_738 = *(undefined1 *)(lVar7 + 0x300);
              do {
                lVar6 = *(long *)(lVar6 + 0x10);
              } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68);
            }
            local_737 = *(undefined1 *)(lVar6 + 0x300);
            local_736 = *(undefined1 *)(lVar4 + 0x300);
            local_750 = 0;
            uStack_748 = 0;
            local_740 = 0;
            local_758 = &PTR_FUN_101497058;
            local_73c = 0;
            local_72c = 0;
            local_734 = 0;
            local_724 = 0x5900000000;
            local_71c = DAT_101e47f10;
            local_704 = DAT_1018589d8;
            uStack_700 = 0;
            DAT_1018589d8 = DAT_1018589d8 + 1;
            FUN_1004966e0(&local_758,&DAT_101e47d30);
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003bc030(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x100;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfeff | uVar1;
  return;
}




void FUN_1003bc058(undefined4 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8)

{
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_101497058;
  *(undefined4 *)((long)param_2 + 0x1c) = 0;
  *(undefined1 *)(param_2 + 4) = param_3;
  *(undefined1 *)((long)param_2 + 0x21) = param_4;
  *(undefined1 *)((long)param_2 + 0x22) = param_5;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined4 *)((long)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 7) = param_6;
  *(undefined4 *)((long)param_2 + 0x3c) = *param_7;
  *(undefined4 *)((long)param_2 + 0x54) = param_8;
  *(undefined4 *)(param_2 + 0xb) = param_1;
  return;
}




void FUN_1003bc09c(void)

{
  return;
}




undefined8
FUN_1003bc0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar3 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar3 + 0x18) = FUN_1003c5148;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  if (param_5 == 0) {
    uVar2 = FUN_1010a1520();
    lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
    uVar1 = FUN_1003bc3c8(*(undefined4 *)(lVar4 + 0x74));
    *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
    *(undefined4 *)(lVar3 + 0x34) = 1;
    *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x3c) = uVar1;
    *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(char **)(lVar3 + 0x10) = "Sound_Ringo_Attack_1";
    *(char **)(lVar3 + 0x18) = "Sound_Ringo_Attack_2";
    *(char **)(lVar3 + 0x20) = "Sound_Ringo_Attack_3";
    uVar2 = FUN_10000e1b4();
    FUN_1003a985c(&local_60,uVar2);
    FUN_1003a4cdc(0x3f800000,uVar2,param_2,0,param_3,0,1,0,0);
  }
  else {
    *(char **)(lVar3 + 0x10) = "Sound_Ringo_Perk_Stance";
    *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar3 + 0x34) = 1;
    *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f000000;
    *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    lVar3 = FUN_10000e524();
    FUN_1003a985c(&local_60,lVar3);
    uVar2 = FUN_1010a1520();
    lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
    uVar1 = FUN_1003bc3c8(*(undefined4 *)(lVar4 + 0x74));
    *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
    *(undefined4 *)(lVar3 + 0x34) = 1;
    *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x3c) = uVar1;
    *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(char **)(lVar3 + 0x10) = "Sound_Ringo_Attack_1";
    *(char **)(lVar3 + 0x18) = "Sound_Ringo_Attack_2";
    *(char **)(lVar3 + 0x20) = "Sound_Ringo_Attack_3";
    uVar2 = FUN_10000e1b4();
    FUN_1003a985c(&local_60,uVar2);
    FUN_1003a4cdc(0x3f800000,uVar2,param_2,0,param_3,0,1,0,0);
    uVar2 = FUN_10000bb2c();
    FUN_1003a985c(&local_60,uVar2);
    lVar3 = FUN_10000c540();
    FUN_1003a985c(&local_60,lVar3);
    *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Ringo_DoubleDown_CritNext_10185af88;
    uVar2 = FUN_10000c784();
    FUN_1003a985c(&local_60,uVar2);
  }
  lVar3 = FUN_10000c3b0();
  FUN_1003a985c(&local_60,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003bbce4;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = param_4;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar2);
  return local_60;
}




float FUN_1003bc3c8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x70);
}




void FUN_1003bc42c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003dfe60(param_2,1,2,0x19,0);
  *param_3 = uVar1;
  return;
}




float FUN_1003bc464(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar2 + 0x50);
  fVar3 = 0.0;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      fVar3 = -0.0;
    }
    else {
      fVar3 = (float)FUN_1003ad218(0);
      fVar3 = -fVar3;
    }
    local_38[0] = DAT_101d90ce8;
    fVar4 = (float)FUN_1003dfee8(param_1,local_38,2,9);
    fVar3 = fVar3 * fVar4;
  }
  return fVar3;
}




undefined8
FUN_1003bc50c(undefined8 param_1,char *param_2,undefined8 *param_3,uint param_4,undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  byte bVar8;
  undefined8 uVar9;
  code *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(code **)(lVar4 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar4 + 0x10,param_1);
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  cVar1 = DAT_101d23a38;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  if (cVar1 == '\0') {
    *(undefined4 *)(lVar4 + 0x2c) = 0x3dcccccd;
    *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
    if (0 < (int)param_4) {
      lVar4 = FUN_10000e524();
      FUN_1003a985c(&local_60,lVar4);
      uVar9 = *param_3;
      uVar3 = FUN_1010a1520();
      lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
      uVar2 = FUN_1003bc8d4(*(undefined4 *)(lVar5 + 0x1e0));
      *(undefined8 *)(lVar4 + 0x10) = uVar9;
      *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
      *(undefined4 *)(lVar4 + 0x34) = 1;
      *(undefined4 *)(lVar4 + 0x3c) = uVar2;
      *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
      *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
      *(undefined8 *)(lVar4 + 0x48) = 0;
      if (param_4 != 1) {
        lVar5 = (ulong)param_4 - 1;
        bVar8 = 1;
        do {
          param_3 = param_3 + 1;
          *(undefined8 *)(lVar4 + (ulong)bVar8 * 8 + 0x10) = *param_3;
          bVar8 = bVar8 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        *(byte *)(lVar4 + 0x31) = bVar8;
      }
    }
    plVar6 = (long *)thunk_FUN_10000e6f4();
    FUN_1003a985c(&local_60,plVar6);
    (**(code **)(*plVar6 + 0x50))(plVar6,"autoAttackVO");
    lVar4 = FUN_10000ceb8();
    FUN_1003a985c(&local_60,lVar4);
    uVar2 = 0x3e4ccccd;
  }
  else {
    uVar2 = 0x3e947ae1;
  }
  *(undefined4 *)(lVar4 + 0x2c) = uVar2;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar7;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003bc8d4(*(undefined4 *)(lVar5 + 0x1e4));
  *(undefined2 *)(lVar4 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(char **)(lVar4 + 0x10) = "Sound_Rona_Impact_1";
  *(char **)(lVar4 + 0x18) = "Sound_Rona_Impact_2";
  *(char **)(lVar4 + 0x20) = "Sound_Rona_Impact_3";
  *(char **)(lVar4 + 0x28) = "Sound_Rona_Impact_4";
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar4);
  lVar5 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined8 *)(lVar5 + 8) = DAT_10185af90;
  plVar6 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar4 + 0xb0,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Ability__Rona__A_101859378);
  local_70 = FUN_1003bc464;
  local_68 = 3;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_70);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_60,uVar3);
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_60,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  (**(code **)(*plVar6 + 0x58))(plVar6,param_5);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar3);
  return local_60;
}




float FUN_1003bc8d4(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x1dc);
}




void FUN_1003bc938(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_2,0,2,0x19,0);
  *param_3 = fVar1 + 0.1;
  return;
}




void FUN_1003bc97c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,2,0x19,0);
  return;
}




void FUN_1003bc990(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  float local_3c;
  undefined2 local_38;
  undefined1 local_36;
  
  if ((DAT_101d23a38 != '\0') && (lVar3 = *(long *)(param_1 + 0x60), lVar3 != 0)) {
    uVar4 = 0;
    uVar2 = 0;
    do {
      uVar1 = FUN_10045fb10(lVar3);
      if (uVar1 <= uVar2) break;
      lVar3 = FUN_10045fa7c(lVar3,uVar2);
      uVar4 = (*(uint *)(lVar3 + 0x2f4) & 1) + uVar4;
      uVar2 = uVar2 + 1;
      lVar3 = *(long *)(param_1 + 0x60);
    } while (lVar3 != 0);
    if (uVar4 != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68))) {
        lVar3 = *(long *)(lVar3 + 0x10);
      }
      local_3c = (float)FUN_1003dfe60(lVar3,0,4,0x19,0);
      local_3c = local_3c * (float)uVar4;
      local_44 = *(undefined4 *)(lVar3 + 0x260);
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_60 = &PTR_FUN_101497218;
      uStack_40 = 3;
      local_38 = 0x100;
      local_36 = 0;
      FUN_100496328(&local_60,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_1003bca98(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003bcaac(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,0xb,0x19,0);
  return;
}




void FUN_1003bcac0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,0xc,0x19,0);
  return;
}




void FUN_1003bcad4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,0xd,0x19,0);
  return;
}




void FUN_1003bcae8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,0xe,0x19,0);
  return;
}




void FUN_1003bcafc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_1003bcb10(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1003bcb24(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,0xf,0x19,0);
  return;
}




void FUN_1003bcb38(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *param_4 = 0;
  *param_5 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  fVar4 = *(float *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  fVar2 = (float)FUN_1003dfe60(lVar1,1,6,0x19,0);
  fVar3 = (float)FUN_1003dfe60(lVar1,1,5,2,0);
  *param_3 = (fVar3 + fVar3 * *(float *)(*(long *)(lVar1 + 0x40) + 0x314) * fVar2) /
             (fVar4 * fVar2 + 1.0);
  FUN_1003aaed8(lVar1,param_3,param_6,0);
  return;
}




void FUN_1003bcc0c(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined1 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar3 = *(float *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
  fVar1 = (float)FUN_1003dfe60(param_1,1,6,0x19,0);
  fVar2 = (float)FUN_1003dfe60(param_1,1,5,0x19,0);
  *param_3 = (fVar2 + fVar2 * *(float *)(*(long *)(param_1 + 0x40) + 0x314) * fVar1) /
             (fVar3 * fVar1 + 1.0);
  *param_4 = 2;
  *param_5 = 1;
  *param_6 = 0;
  return;
}




void FUN_1003bcce8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003dfe60(param_1,1,7,0x19,0);
  *param_3 = uVar1;
  return;
}




void FUN_1003bcd40(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,9,0x19,0);
  return;
}




undefined8 FUN_1003bcd54(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dab8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar2 = *(long *)(lVar1 + 0x58);
  if (((lVar2 == 0) || (uVar3 = (ulong)*(ushort *)(lVar2 + 0x68) & 0x1f, (int)uVar3 == 0x1f)) ||
     (*(short *)(lVar2 + uVar3 * 0x38 + 0x70) != 2)) {
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x68) & 0x1f;
    if ((int)uVar3 == 0x1f) {
      return 0;
    }
    if (*(short *)(lVar1 + uVar3 * 0x38 + 0x70) != 2) {
      return 0;
    }
  }
  return 2;
}




undefined8 FUN_1003bce0c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003bcd54;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar2 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bcfb0(*(undefined4 *)(lVar4 + 0x308));
  *(undefined2 *)(lVar2 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Samuel_basic_attack_01";
  *(char **)(lVar2 + 0x18) = "Sound_Samuel_basic_attack_02";
  *(char **)(lVar2 + 0x20) = "Sound_Samuel_basic_attack_03";
  *(char **)(lVar2 + 0x28) = "Sound_Samuel_basic_attack_04";
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = param_3;
  FUN_1003d266c(lVar2,param_2);
  return local_50;
}




float FUN_1003bcfb0(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x304);
}




void FUN_1003bd014(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




void FUN_1003bd028(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_2,1,5,0x19,0);
  *param_3 = fVar1 + 0.6;
  return;
}




undefined8 FUN_1003bd06c(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar3 = FUN_10000e94c();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003bcd54;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability01");
  uVar2 = FUN_100015208("Ability01",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003bcfb0(*(undefined4 *)(lVar6 + 0x314));
  pcVar1 = "Sound_Samuel_ability_a_empowered";
  if (param_1 == 0) {
    pcVar1 = "Sound_Samuel_ability_a_fire";
  }
  *(char **)(lVar3 + 0x10) = pcVar1;
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  uVar2 = 0x62;
  if (param_1 != 0) {
    uVar2 = 99;
  }
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar5);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Samuel_A_Strafing_10185b028;
  *(code **)(lVar3 + 0x28) = FUN_1003bd028;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe | 4;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Samuel_A_SpeedBoost_10185b030;
  *(code **)(lVar3 + 0x30) = FUN_1003bd014;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar5);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003bd350;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  FUN_1003d266c(lVar3,"AShot1");
  *(undefined4 *)(lVar3 + 0x34) = 0;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar5);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003bd014;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  FUN_1003d266c(lVar3,"AShot2");
  *(undefined4 *)(lVar3 + 0x34) = 0;
  lVar3 = FUN_10000e7fc();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x3e99999a;
  return local_40;
}




void FUN_1003bd350(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_1003bd364(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,3,0x19,0);
  return;
}




void FUN_1003bd378(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,2,0x19,0);
  return;
}




void FUN_1003bd38c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar2 = PTR_s_Buff_SAW_HeroicPerk_SpinUp_10185b040;
  if (DAT_101d23a38 != '\0') {
    lVar3 = *(long *)(param_1 + 0x10);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar3 = *(long *)(lVar3 + 0x10);
    }
    plVar4 = (long *)(lVar3 + 0x18);
    do {
      lVar5 = *plVar4;
      plVar4 = (long *)(lVar5 + 0x20);
    } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8);
    for (lVar5 = *(long *)(lVar5 + 0x28); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
      if ((*(int *)(lVar5 + 0x314) == DAT_101d2cb04) && (*(int *)(lVar5 + 0x310) == 0)) {
        return;
      }
    }
    uVar1 = *(undefined4 *)(lVar3 + 0x260);
    local_5c = FUN_1003df710(lVar3,3,1);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_88 = &PTR_FUN_101496b18;
    local_64 = DAT_1018589d8;
    local_58 = 1;
    local_40 = 0;
    local_4c = 0;
    local_54 = 0;
    local_38 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_6c = uVar1;
    uStack_68 = uVar1;
    local_60 = FUN_1003d4e0c(puVar2);
    FUN_10049639c(&local_88,&DAT_101e47d30);
  }
  return;
}




void FUN_1003bd4c0(undefined8 param_1)

{
  FUN_1003df710(param_1,3,1);
  return;
}




float FUN_1003bd4cc(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar2 + 0x58);
  fVar3 = 0.0;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      fVar3 = -0.0;
    }
    else {
      fVar3 = (float)FUN_1003ad218(0);
      fVar3 = -fVar3;
    }
    local_38[0] = DAT_101d90cf8;
    fVar4 = (float)FUN_1003dfee8(param_1,local_38,1,9);
    fVar3 = fVar3 * fVar4;
  }
  return fVar3;
}




void FUN_1003bd574(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined **local_a8;
  long lStack_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  byte local_4e;
  float local_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  undefined4 local_34;
  undefined1 auStack_30 [8];
  long local_28;
  
  puVar1 = PTR_s_Buff_SAW_Talent_PiercingBullets_10185b048;
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  lVar5 = *(long *)(param_1 + 0x10);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar5 + 0x260));
  uVar4 = 0;
  if ((lVar3 != 0) && (uVar4 = FUN_1003a47d0(lVar3,puVar1), (int)uVar4 != 0)) {
    lVar3 = FUN_1003e10f0();
    local_98 = 1;
    local_94 = 0;
    local_84 = 0;
    local_8c = 0;
    local_7c = 0;
    uStack_70 = 0xbf800000c0000000;
    local_78 = 0xbf800000bf800000;
    local_64 = 0xff;
    uStack_58 = 0xffffffff00000000;
    local_60 = 0xffffffff00040000;
    local_a8 = &PTR_FUN_101499998;
    local_4c = *(float *)(lVar5 + 0x250);
    local_44 = *(float *)(lVar5 + 600);
    fStack_48 = *(float *)(lVar5 + 0x2ec) + *(float *)(lVar5 + 0x254);
    fVar6 = *(float *)(lVar5 + 0x240);
    fVar7 = *(float *)(lVar5 + 0x244);
    fVar8 = *(float *)(lVar5 + 0x248);
    fVar9 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
    if (1e-08 <= fVar9) {
      fVar9 = 1.0 / SQRT(fVar9);
      fVar6 = fVar6 * fVar9;
      fVar7 = fVar7 * fVar9;
      fVar8 = fVar8 * fVar9;
    }
    else {
      fVar6 = 1.0;
      fVar7 = 0.0;
      fVar8 = 0.0;
    }
    fVar9 = 1.0 / SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    fStack_40 = local_4c + fVar9 * fVar6 * 1.5;
    local_3c = fStack_48 + fVar9 * fVar7 * 1.5;
    fStack_38 = local_44 + fVar9 * fVar8 * 1.5;
    local_34 = 0x3e19999a;
    local_4e = *(byte *)(lVar3 + 0xe5) | 0x14;
    local_50 = 0x6120;
    local_68 = 0x3f266666;
    lStack_a0 = lVar5;
    iVar2 = FUN_1003a6ce4(&local_a8,auStack_30,1,0);
    uVar4 = (ulong)(iVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




void FUN_1003bd750(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x1c8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        lVar2 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
        *param_4 = *(undefined4 *)(lVar2 + 0x260);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return;
}




undefined8 FUN_1003bd7c8(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SAW_Strafe_10185b050);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3fc00000);
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  (**(code **)(*plVar3 + 0x58))(plVar3,FUN_1003bd750);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar2 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bdb78(*(undefined4 *)(lVar5 + 0xec));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_SAW_basic_shoot_01";
  *(char **)(lVar2 + 0x18) = "Sound_SAW_basic_shoot_02";
  *(char **)(lVar2 + 0x20) = "Sound_SAW_basic_shoot_03";
  uVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,uVar4);
  FUN_1003a4cdc(0x3f800000,uVar4,"Effect_SAW_MuzzleFlash",0,"GunMuzzleTip_Attack",0,1,0,0);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar2 + 0x10) = 0x38e4fe7f;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003bd38c;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar2);
  lVar5 = FUN_10049ac6c(lVar2 + 0x10);
  *(code **)(lVar5 + 8) = FUN_1003bd574;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0xb0,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = param_2;
  FUN_1003d266c(lVar5,"CenterGun");
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 200,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = param_2;
  FUN_1003d266c(lVar5,"GunMuzzleTip_Attack");
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar2);
  lVar5 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_SAW_Talent_RoadRage_10185b058;
  lVar2 = lVar2 + 0xb0;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(lVar2,uVar4);
  plVar3 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar2,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__SAW__A_1018590e0);
  local_60 = FUN_1003bd4cc;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_60);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar2,uVar4);
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar4);
  return local_50;
}




float FUN_1003bdb78(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0xe8);
}




void FUN_1003bdbdc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_1003bdbf0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,6,0x19,0);
  return;
}




void FUN_1003bdc04(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




int FUN_1003bdc18(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cf8;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,2,9);
  return (int)fVar1;
}




void FUN_1003bdc50(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  *param_4 = *(undefined4 *)(param_1 + 0x250);
  fVar1 = *(float *)(param_1 + 0x254);
  param_4[1] = fVar1;
  param_4[2] = *(undefined4 *)(param_1 + 600);
  param_4[1] = *(float *)(param_1 + 0x2ec) + fVar1;
  return;
}




void FUN_1003bdc9c(long param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = *(long *)(param_1 + 0x10);
  iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  lVar4 = lVar2;
  iVar1 = iVar3;
  while (iVar1 != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  fVar10 = *(float *)(lVar4 + 0x250);
  fVar11 = *(float *)(lVar4 + 600);
  fVar12 = *(float *)(lVar4 + 0x2ec) + *(float *)(lVar4 + 0x254);
  if (((0.01 <= ABS(*(float *)(param_1 + 0x1d8) - fVar10)) ||
      (0.01 <= ABS(*(float *)(param_1 + 0x1dc) - fVar12))) ||
     (0.01 <= ABS(*(float *)(param_1 + 0x1e0) - fVar11))) {
    fVar5 = *(float *)(param_1 + 0x1d8) - fVar10;
    fVar6 = *(float *)(param_1 + 0x1dc) - fVar12;
    fVar7 = *(float *)(param_1 + 0x1e0) - fVar11;
  }
  else {
    while (iVar3 != DAT_10184dd68) {
      lVar2 = *(long *)(lVar2 + 0x10);
      iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
    }
    fVar5 = *(float *)(lVar2 + 0x240);
    fVar6 = *(float *)(lVar2 + 0x244);
    fVar7 = *(float *)(lVar2 + 0x248);
    fVar9 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    if (1e-08 <= fVar9) {
      fVar9 = 1.0 / SQRT(fVar9);
      fVar5 = fVar5 * fVar9;
      fVar6 = fVar6 * fVar9;
      fVar7 = fVar7 * fVar9;
    }
    else {
      fVar5 = 1.0;
      fVar6 = 0.0;
      fVar7 = 0.0;
    }
  }
  fVar9 = (float)FUN_10045f34c(param_1 + 0x220);
  fVar8 = 1.0 / SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  *param_4 = fVar10 + fVar8 * fVar9 * fVar5;
  param_4[1] = fVar12 + fVar8 * fVar9 * fVar6;
  param_4[2] = fVar11 + fVar8 * fVar9 * fVar7;
  return;
}




void FUN_1003bde20(long param_1,long param_2,float *param_3,undefined4 *param_4,undefined4 *param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  lVar5 = *(long *)(param_1 + 0x10);
  iVar2 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
  lVar4 = lVar5;
  iVar3 = iVar2;
  while (iVar3 != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
    iVar3 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  fVar6 = (float)FUN_1003dfe60(lVar4,2,2,0x19,0);
  fVar6 = fVar6 + fVar6;
  *param_3 = fVar6;
  lVar4 = lVar5;
  iVar3 = iVar2;
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    while (iVar3 != DAT_10184dd68) {
      plVar1 = (long *)(lVar4 + 0x10);
      lVar4 = *plVar1;
      iVar3 = *(int *)(*(long *)(*plVar1 + 8) + 0xa4);
    }
    fVar7 = (float)FUN_1003dfe60(lVar4,2,7,0x19,0);
    fVar6 = fVar7 * fVar6;
    *param_3 = fVar6;
  }
  while (iVar2 != DAT_10184dd68) {
    lVar5 = *(long *)(lVar5 + 0x10);
    iVar2 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
  }
  fVar7 = (float)FUN_1003df5b4(*(undefined8 *)(lVar5 + 0x38),2,4);
  *param_3 = fVar6 / fVar7;
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_1003bdf50(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003dfe60(param_1,2,5,0x19,0);
  *param_3 = uVar1;
  return;
}




void FUN_1003bdfa8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_28 [2];
  
  lVar3 = *(long *)(param_1 + 0x10);
  while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  lVar2 = *(long *)(lVar3 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  FUN_1003a4e5c(local_28,PTR_s_Ability__SAW__A_1018590e0);
  uVar1 = FUN_1003e2b0c(lVar2,local_28[0]);
  lVar3 = *(long *)(*(long *)(lVar3 + 0x58) + (uVar1 & 0xffffffff) * 8 + 0x50);
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x68) & 0x1f;
  if (((int)uVar1 != 0x1f) && (*(short *)(lVar3 + uVar1 * 0x38 + 0x70) == 2)) {
    FUN_1003b98c8();
    return;
  }
  return;
}




void FUN_1003be070(undefined8 param_1)

{
  undefined4 local_28 [2];
  
  FUN_1003a4e5c(local_28);
  FUN_1003e2b0c(param_1,local_28[0]);
  return;
}




void FUN_1003be0a4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    FUN_100464674(*(undefined8 *)(param_1 + 0x68));
    return;
  }
  FUN_1003b4c50(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_1003be0b8(long param_1,undefined4 *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(param_1 + 0x1d8) - *(float *)(lVar1 + 0x250);
  fVar4 = *(float *)(param_1 + 0x1dc) - (*(float *)(lVar1 + 0x254) + *(float *)(lVar1 + 0x2ec));
  fVar5 = *(float *)(param_1 + 0x1e0) - *(float *)(lVar1 + 600);
  fVar4 = fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5;
  if (0.001 <= fVar4) {
    fVar4 = SQRT(fVar4);
    fVar2 = fVar2 / fVar4;
    fVar5 = fVar5 / fVar4;
  }
  else {
    fVar2 = 0.0;
    fVar5 = 1.0;
  }
  uVar3 = _atan2f(fVar5,fVar2);
  *param_2 = uVar3;
  return;
}




float FUN_1003be168(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x14c);
}




void FUN_1003be1cc(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_28 [2];
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  local_28[0] = DAT_101d90d24;
  uVar1 = FUN_1003dfee8(param_1,local_28,2,9);
  *param_2 = uVar1;
  return;
}




void FUN_1003be234(long param_1,float *param_2)

{
  float fVar1;
  undefined4 local_28 [2];
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  local_28[0] = DAT_101d90d24;
  fVar1 = (float)FUN_1003dfee8(param_1,local_28,2,9);
  *param_2 = -fVar1;
  return;
}




void FUN_1003be2a0(long param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = DAT_10184dd68;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_1011485ec();
    FUN_1003df710(uVar4,6,1);
    return;
  }
  iVar1 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
  lVar3 = lVar5;
  if (iVar1 == DAT_10184dd68) {
    fVar6 = (float)FUN_1003df710(lVar5,6,1);
  }
  else {
    do {
      lVar3 = *(long *)(lVar3 + 0x10);
    } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
    fVar6 = (float)FUN_1003df710(lVar3,6,1);
    while (iVar1 != iVar2) {
      lVar5 = *(long *)(lVar5 + 0x10);
      iVar1 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
    }
  }
  fVar7 = (float)FUN_1003df710(lVar5,2,1);
  *param_3 = fVar7 + fVar6;
  return;
}




void FUN_1003be360(undefined8 param_1)

{
  FUN_1003df710(param_1,6,1);
  return;
}




undefined8 FUN_1003be36c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar3 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e947ae1;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  uVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,uVar2);
  FUN_1003a4cdc(0x3f800000,uVar2,"Effect_Skye_AA_MF",0,param_2,0,1,0,0);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003be59c(*(undefined4 *)(lVar4 + 0x208));
  *(undefined2 *)(lVar3 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Skye_Basic_Attack_1";
  *(char **)(lVar3 + 0x18) = "Sound_Skye_Basic_Attack_2";
  *(char **)(lVar3 + 0x20) = "Sound_Skye_Basic_Attack_3";
  *(char **)(lVar3 + 0x28) = "Sound_Skye_Basic_Attack_4";
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = param_3;
  FUN_1003d266c(lVar3,param_2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Skye_JumpJets_Pending_10185b0c0;
  *(code **)(lVar3 + 0x28) = FUN_1003be2a0;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




float FUN_1003be59c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x200);
}




undefined8 FUN_1003be600(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_98;
  undefined **local_90;
  long lStack_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  byte local_36;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  
  uVar2 = DAT_101d3ee6c;
  local_7c = 0;
  local_6c = 0;
  local_74 = 0;
  local_64 = 0;
  uStack_58 = 0xbf800000c0000000;
  local_60 = 0xbf800000bf800000;
  local_50 = 0x3f800000;
  local_4c = 0xff;
  uStack_40 = 0xffffffff00000000;
  local_48 = 0xffffffff00000000;
  local_80 = 1;
  lVar4 = FUN_1003e10f0();
  local_2c = 0;
  local_24 = 0;
  uStack_30 = *(undefined4 *)(param_1 + 0x260);
  local_34 = uVar2;
  local_90 = &PTR_FUN_1014999d0;
  local_38 = 0x4120;
  local_36 = *(byte *)(lVar4 + 0xe5) | 0x14;
  lStack_88 = param_1;
  iVar3 = FUN_1003a6ce4(&local_90,&local_98,1,0);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = local_98;
  }
  return uVar1;
}




void FUN_1003be6c0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003dfe60(param_1,0,6,0x19,0);
  uVar2 = FUN_1003dfe60(param_1,0,7,0x19,0);
  uVar1 = NEON_fminnm(uVar1,uVar2);
  *param_3 = uVar1;
  return;
}




long FUN_1003be744(long param_1)

{
  long lVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = FUN_1003be600();
  return (ulong)(lVar1 == 0) << 10;
}




void FUN_1003be788(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  uVar2 = _atan2f(*(float *)(param_1 + 0x1e0) - *(float *)(lVar1 + 600),
                  *(float *)(param_1 + 0x1d8) - *(float *)(lVar1 + 0x250));
  *param_3 = uVar2;
  return;
}




void FUN_1003be7e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = FUN_1003be600();
  if (lVar1 != 0) {
    FUN_1003b4bec(param_1,lVar1);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003be844(long param_1,undefined8 param_2,undefined4 *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_7c;
  float local_74;
  undefined4 local_70;
  uint uStack_6c;
  undefined2 local_68;
  
  lVar4 = *(long *)(param_1 + 0x10);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  lVar2 = FUN_1003be600(lVar4);
  if (lVar2 == 0) {
    *param_3 = *(undefined4 *)(lVar4 + 0x250);
    fVar5 = *(float *)(lVar4 + 0x254);
    param_3[1] = fVar5;
    param_3[2] = *(undefined4 *)(lVar4 + 600);
    param_3[1] = *(float *)(lVar4 + 0x2ec) + fVar5;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x1d8);
    fVar9 = *(float *)(param_1 + 0x1e0);
    fVar7 = *(float *)(lVar2 + 0x250);
    fVar8 = *(float *)(lVar2 + 600);
    fVar5 = *(float *)(lVar2 + 0x2ec) + *(float *)(lVar2 + 0x254);
    fVar11 = (float)uVar10 - fVar7;
    fVar12 = (float)((ulong)uVar10 >> 0x20) - fVar5;
    fVar13 = fVar9 - fVar8;
    fVar14 = fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12;
    fVar6 = (float)FUN_10045f34c(param_1 + 0x220,param_1);
    if (fVar6 * fVar6 < fVar14) {
      if (1e-08 <= fVar14) {
        fVar14 = SQRT(fVar14);
        fVar11 = fVar11 / fVar14;
        fVar12 = fVar12 / fVar14;
        fVar13 = fVar13 / fVar14;
      }
      else {
        fVar11 = 1.0;
        fVar12 = 0.0;
        fVar13 = 0.0;
      }
      fVar6 = *(float *)(*(long *)(lVar2 + 0x38) + 0x68) + fVar6;
      uVar10 = CONCAT44(fVar5 + fVar12 * fVar6,fVar7 + fVar11 * fVar6);
      fVar9 = fVar8 + fVar13 * fVar6;
    }
    lVar2 = *(long *)(lVar4 + 0x18);
    uStack_6c = 0;
    if (lVar2 != 0) {
      do {
        if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
          uStack_6c = *(byte *)(lVar2 + 0x818) >> 3 & 3;
          goto LAB_1003be9ac;
        }
        lVar2 = *(long *)(lVar2 + 0x20);
      } while (lVar2 != 0);
      uStack_6c = 0;
    }
LAB_1003be9ac:
    local_70 = 0;
    local_68 = 1;
    local_88 = fVar7;
    fStack_84 = fVar5;
    local_80 = fVar8;
    local_7c = uVar10;
    local_74 = fVar9;
    FUN_1003a7f34(&local_88,param_3,0);
    local_98 = 0x412000003e800000;
    local_90 = 0x3e800000;
    for (lVar2 = *(long *)(lVar4 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
        bVar1 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
        goto LAB_1003bea28;
      }
    }
    bVar1 = 0;
LAB_1003bea28:
    uVar3 = FUN_10054e044(bVar1,param_3,param_3,&local_98);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(lVar4 + 0x18);
      while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != ram0x0001018672a0))) {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      FUN_1003a7f34(&local_88,param_3,0);
    }
  }
  return;
}




void FUN_1003bea90(long param_1,undefined8 param_2,float *param_3)

{
  undefined8 extraout_x1;
  long lVar1;
  float fVar2;
  float local_50;
  float fStack_4c;
  float local_48;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = (float)FUN_1003dfe60(lVar1,2,2,0x19,0);
  FUN_1003be844(param_1,extraout_x1,&local_50);
  if (fVar2 <= 0.0) {
    fVar2 = 0.1;
  }
  else {
    local_50 = *(float *)(lVar1 + 0x250) - local_50;
    fStack_4c = (*(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254)) - fStack_4c;
    local_48 = *(float *)(lVar1 + 600) - local_48;
    fVar2 = SQRT(local_50 * local_50 + fStack_4c * fStack_4c + local_48 * local_48) / fVar2 + 0.1;
  }
  *param_3 = fVar2;
  return;
}




void FUN_1003beb70(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003beb84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  int local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  ulong local_90;
  float local_88;
  float local_80 [2];
  float local_78;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  auVar13 = FUN_1003be600(lVar2);
  lVar1 = auVar13._0_8_;
  if (lVar1 != 0) {
    FUN_1003be844(param_1,auVar13._8_8_,local_80);
    fVar10 = *(float *)(lVar2 + 0x250);
    fVar11 = *(float *)(lVar2 + 600);
    fVar4 = *(float *)(lVar1 + 0x250);
    fVar7 = *(float *)(lVar1 + 600);
    fVar5 = fVar4 - fVar10;
    fVar9 = fVar7 - fVar11;
    fVar12 = fVar5 * fVar5 + fVar9 * fVar9;
    if (1e-08 <= fVar12) {
      fVar5 = fVar5 / SQRT(fVar12);
      fVar9 = fVar9 / SQRT(fVar12);
    }
    else {
      fVar5 = 1.0;
      fVar9 = 0.0;
    }
    fVar5 = (float)_atan2f(fVar9,fVar5);
    fVar10 = local_80[0] - fVar10;
    fVar11 = local_78 - fVar11;
    fVar9 = fVar10 * fVar10 + fVar11 * fVar11;
    if (1e-08 <= fVar9) {
      fVar8 = fVar10 / SQRT(fVar9);
      fVar6 = fVar11 / SQRT(fVar9);
    }
    else {
      fVar8 = 1.0;
      fVar6 = 0.0;
    }
    fVar6 = (float)_atan2f(fVar6,fVar8);
    fVar6 = (float)_fmodf(fVar6 - fVar5,0x40c90fdb);
    fVar5 = fVar6 - 6.2831855;
    if (fVar6 <= 3.1415927) {
      fVar5 = fVar6;
    }
    fVar6 = fVar5 + 6.2831855;
    if (-3.1415927 <= fVar5) {
      fVar6 = fVar5;
    }
    fVar8 = 0.1;
    fVar5 = fVar9;
    if (fVar6 <= 0.31415927) {
      if (fVar6 < -0.31415927) {
        uVar3 = 2;
      }
      else if (fVar9 <= fVar12) {
        uVar3 = 0;
      }
      else {
        fVar10 = fVar4 - local_80[0];
        fVar11 = fVar7 - local_78;
        uVar3 = 1;
        fVar5 = fVar10 * fVar10 + fVar11 * fVar11;
      }
    }
    else {
      uVar3 = 3;
    }
    if (1e-08 <= fVar5) {
      local_90 = (ulong)(uint)(fVar10 / SQRT(fVar5));
      local_88 = fVar11 / SQRT(fVar5);
    }
    else {
      local_90 = 0x3f800000;
      local_88 = 0.0;
    }
    lVar1 = *(long *)(lVar2 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != ram0x0001018672a0))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    FUN_1003b7098(lVar1,&local_90,1);
    if (DAT_101d23a38 != '\0') {
      fVar4 = (float)FUN_1003dfe60(lVar2,2,2,0x19,0);
      if (0.0 < fVar4) {
        fVar8 = SQRT(fVar9) / fVar4 + 1.0;
      }
      local_cc = *(undefined4 *)(lVar2 + 0x260);
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      local_e8 = &PTR_FUN_101496b18;
      local_c4 = DAT_1018589d8;
      local_b8 = 1;
      uStack_b4 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_c8 = local_cc;
      local_bc = fVar8;
      uStack_ac = uVar3;
      local_c0 = FUN_1003d4e0c(PTR_s_Buff_Skye_Executing_B_Dash_10185b0d0);
      FUN_10049639c(&local_e8,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_1003bee74(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = FUN_1003be600();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _atan2f(*(float *)(param_1 + 0x1e0) - *(float *)(lVar1 + 600),
                    *(float *)(param_1 + 0x1d8) - *(float *)(lVar1 + 0x250));
  }
  *param_3 = uVar2;
  return;
}




void FUN_1003beee8(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = FUN_1003be600();
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x250) - *(float *)(param_1 + 0x1d8);
    fVar3 = (*(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254)) - *(float *)(param_1 + 0x1dc);
    fVar4 = *(float *)(lVar1 + 600) - *(float *)(param_1 + 0x1e0);
    fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  }
  *param_3 = fVar2;
  return;
}




float FUN_1003bef7c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  plVar3 = (long *)(param_1 + 0x10);
  plVar2 = plVar3;
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  plVar2 = (long *)(lVar1 + 0x18);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dab8);
  lVar1 = *(long *)(lVar1 + 0x50);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x239) & 0x1c) == 0)) {
    fVar4 = 0.0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x1f8);
    if (lVar1 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *(float *)(lVar1 + 0x60);
      if (fVar6 < 0.0) {
        fVar6 = (*(float *)(lVar1 + 0x58) + *(float *)(lVar1 + 0x54)) * *(float *)(lVar1 + 0x5c);
      }
    }
    fVar4 = (float)FUN_10045f0f0();
    do {
      lVar1 = *plVar3;
      plVar3 = (long *)(lVar1 + 0x10);
    } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
    fVar5 = (float)FUN_1003dfe60(lVar1,2,8,0x19,0);
    fVar4 = fVar4 - fVar6 * fVar5;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  return fVar4;
}




float FUN_1003bf074(long param_1,uint param_2)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  fVar2 = 0.0;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x1f8), lVar1 != 0)) &&
     (fVar2 = *(float *)(lVar1 + 0x60), fVar2 < 0.0)) {
    fVar2 = (*(float *)(lVar1 + 0x58) + *(float *)(lVar1 + 0x54)) * *(float *)(lVar1 + 0x5c);
  }
  return fVar2;
}




undefined1  [16] FUN_1003bf0ac(long param_1,uint param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_10045f0f0();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




float FUN_1003bf0c4(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_1003df710(param_1,4,1);
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x60);
  fVar3 = 0.0;
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x239) & 0x1c) != 0)) {
    fVar3 = (float)FUN_1003dfe60(param_1,2,5,0x19,0);
  }
  return fVar3 + fVar2;
}




undefined4 FUN_1003bf130(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_1003bf144(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d50;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




bool FUN_1003bf178(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  lVar1 = FUN_1003be600(lVar2);
  fVar3 = *(float *)(param_1 + 0x1d8) - *(float *)(lVar1 + 0x250);
  fVar5 = *(float *)(param_1 + 0x1dc) - (*(float *)(lVar1 + 0x254) + *(float *)(lVar1 + 0x2ec));
  fVar6 = *(float *)(param_1 + 0x1e0) - *(float *)(lVar1 + 600);
  fVar4 = (float)FUN_1003dfe60(lVar2,4,2,0x19,0);
  return fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6 < fVar4 * fVar4;
}




void FUN_1003bf228(long param_1,float *param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = param_1;
  do {
    lVar2 = *(long *)(lVar2 + 0x10);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = FUN_1003be600();
  fVar3 = *(float *)(lVar2 + 0x250);
  fVar5 = *(float *)(lVar2 + 0x254);
  fVar4 = *(float *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  iVar1 = FUN_1003bf178(param_1);
  if (iVar1 == 0) {
    fVar3 = *(float *)(param_1 + 0x1d8) - fVar3;
    fVar4 = *(float *)(param_1 + 0x1e0) - fVar4;
    fVar6 = fVar3 * fVar3 + fVar4 * fVar4;
    if (1e-08 <= fVar6) {
      fVar6 = SQRT(fVar6);
      fVar3 = fVar3 / fVar6;
      fVar4 = fVar4 / fVar6;
    }
    else {
      fVar3 = 1.0;
      fVar4 = 0.0;
    }
    *param_3 = fVar4;
    param_3[1] = 0.0;
    param_3[2] = -fVar3;
    fVar3 = *(float *)(param_1 + 0x1d8);
    fVar6 = *(float *)(param_1 + 0x1dc);
    fVar4 = *(float *)(param_1 + 0x1e0);
  }
  else {
    fVar6 = fVar6 + fVar5;
    param_3[2] = 0.0;
    param_3[0] = 1.0;
    param_3[1] = 0.0;
  }
  *param_2 = fVar3;
  param_2[1] = fVar6;
  param_2[2] = fVar4;
  return;
}




void FUN_1003bf33c(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = FUN_1003bf178();
  pcVar1 = "*Skye_MissileVolley*";
  if (iVar2 == 0) {
    pcVar1 = "*Skye_LineMissileVolley*";
  }
  *param_2 = pcVar1;
  return;
}




float FUN_1003bf378(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x134);
}




void FUN_1003bf3dc(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *(long *)(param_1 + 0x10);
  iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  lVar4 = lVar2;
  iVar1 = iVar3;
  while (iVar1 != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  lVar4 = *(long *)(lVar4 + 0x40);
  fVar5 = *(float *)(lVar4 + 0x48) + *(float *)(lVar4 + 0xfc) * (*(float *)(lVar4 + 0x264) + 1.0);
  fVar6 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x1b0),DAT_101e94330);
  fVar5 = DAT_101e94270;
  if (DAT_101e94270 <= fVar6) {
    fVar5 = fVar6;
  }
  *param_3 = fVar5;
  while (iVar3 != DAT_10184dd68) {
    lVar2 = *(long *)(lVar2 + 0x10);
    iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  }
  fVar6 = (float)FUN_1003df710(lVar2,2,0xb);
  *param_3 = fVar6 + fVar5;
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_1003bf4c0(undefined8 param_1)

{
  FUN_1003df710(param_1,4,1);
  return;
}




void FUN_1003bf4cc(undefined8 param_1)

{
  FUN_1003df710(param_1,6,1);
  return;
}




void FUN_1003bf4d8(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined1 *param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_101e94270;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  *param_3 = DAT_101e94270;
  *param_6 = 1;
  fVar2 = *(float *)(lVar1 + 0xb4) + *(float *)(lVar1 + 0x168) * (*(float *)(lVar1 + 0x2d0) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x21c),DAT_101e9439c);
  fVar3 = fVar3 + fVar3 * DAT_101e942dc;
  *param_3 = fVar3;
  fVar2 = (float)FUN_1003df710(param_1,2,0xb);
  *param_3 = fVar3 + fVar2;
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_1003bf5d0(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,0,3,0x19,0);
  *param_3 = fVar1 * 0.6;
  return;
}




void FUN_1003bf634(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003bf648(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,0,3,0x19,0);
  *param_3 = fVar1 * 0.4;
  return;
}




void FUN_1003bf6ac(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003dfe60(param_1,1,2,0x19,0);
  *param_3 = uVar1;
  return;
}




void FUN_1003bf704(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_1003bf718(long param_1,int *param_2)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,2,3,0x19,0);
  *param_2 = (int)fVar1;
  return;
}




void FUN_1003bf774(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if ((lVar3 == 0) || (iVar1 = FUN_10045fb10(lVar3), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10045fa7c(lVar3,0);
  }
  *param_2 = uVar2;
  return;
}




bool FUN_1003bf7bc(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x60) != 0) {
    iVar2 = FUN_10045fb10();
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




void FUN_1003bf7e0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_60 [2];
  undefined4 local_58;
  
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(param_1,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(param_1,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(param_1,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03_Start");
  uVar1 = FUN_100015208("Ability03_Start",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(param_1,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x4a10e944;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(param_1,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bf378(*(undefined4 *)(lVar4 + 0x148));
  *(char **)(lVar2 + 0x10) = "Sound_Taka_Abilty_C";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(param_1,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(param_1,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe3 | 8;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(param_1,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(param_1,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Taka_AssassinsAcceleration_10185b110;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  *(code **)(lVar2 + 0x30) = FUN_1003bf4c0;
  *(code **)(lVar2 + 0x38) = FUN_1003bf718;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(param_1,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03_Finish");
  uVar1 = FUN_100015208("Ability03_Finish",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(param_1,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xb24708b;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(param_1,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(0xbf800000,0x3e4ccccd,0xbfc00000,0xbf800000,plVar5)
  ;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_60[0] = 0x42a00000;
  local_58 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,local_60);
  (**(code **)(*plVar5 + 0xb8))(0x41700000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(param_1,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(param_1,uVar3);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(param_1,uVar3);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(param_1,uVar3);
  lVar2 = FUN_10000e474();
  FUN_1003a985c(param_1,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  *(char **)(lVar2 + 0x18) = "Effect_Taka_Dash_Cut";
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  *(uint *)(lVar2 + 0x4c) = (uint)lVar2 & 0xffff;
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(param_1,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  (**(code **)(*plVar5 + 0x38))(plVar5,"Damage",2);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(param_1,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Taka_MortalWound_10185b130;
  *(code **)(lVar2 + 0x30) = FUN_1003bfc6c;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(param_1,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(param_1,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bf378(*(undefined4 *)(lVar4 + 0x148));
  *(char **)(lVar2 + 0x10) = "Sound_Taka_Abilty_C_Impact";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  return;
}




void FUN_1003bfc6c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




float FUN_1003bfc80(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x2c);
}




void FUN_1003bfce4(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  
  if ((*(uint *)(param_2 + 0x2f4) & 1) == 0) {
    lVar2 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(param_2 + 0x2f4) >> 3 & 1) == 0) {
      fVar3 = *(float *)(lVar2 + 0x308) * 0.25;
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
    }
    else {
      fVar3 = *(float *)(lVar2 + 0x38) +
              *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
      NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
      fVar3 = DAT_101e94260 * 0.15;
    }
    uVar1 = 2;
  }
  else {
    fVar3 = *(float *)(*(long *)(param_2 + 0x40) + 0x308) * 0.25;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar1 = 3;
  }
  *param_3 = fVar3;
  *param_4 = 2;
  *param_5 = uVar1;
  return;
}




void FUN_1003bfd88(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x1c8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (lVar1 != 0) {
        *param_4 = *(undefined4 *)(lVar1 + 0x260);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1003bfdf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return;
}




void FUN_1003bfdfc(float param_1,long param_2,float *param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = param_2;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(lVar1 + 0x250);
  fVar3 = *(float *)(lVar1 + 600);
  fVar4 = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
  fVar6 = *(float *)(param_2 + 0x1d8) - fVar2;
  fVar7 = *(float *)(param_2 + 0x1dc) - fVar4;
  fVar5 = *(float *)(param_2 + 0x1e0) - fVar3;
  *param_4 = fVar6;
  param_4[1] = fVar7;
  param_4[2] = fVar5;
  fVar8 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
  if (1e-08 <= fVar8) {
    fVar8 = 1.0 / SQRT(fVar8);
    fVar6 = fVar6 * fVar8;
    fVar7 = fVar7 * fVar8;
    *param_4 = fVar6;
    param_4[1] = fVar7;
    fVar5 = fVar5 * fVar8;
    param_4[2] = fVar5;
  }
  else {
    param_4[0] = 1.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    fVar6 = *param_4;
    fVar7 = param_4[1];
    fVar5 = param_4[2];
  }
  param_3[1] = fVar4 + param_1 * fVar7;
  param_3[2] = fVar3 + param_1 * fVar5;
  *param_3 = fVar2 + param_1 * fVar6 + 0.25;
  return;
}




void FUN_1003bfed8(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10000c838();
  FUN_1003a985c(param_2,lVar1);
  *(ushort *)(lVar1 + 0x58) = *(ushort *)(lVar1 + 0x58) & 0xf01f | 0x10;
  *(code **)(lVar1 + 0x40) = FUN_10049af78;
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar1 + 0x18,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*GenericLocator*",0);
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,FUN_10049b02c);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(lVar1 + 0x18,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Nexus_5v5_AbilityB_10185c250,uVar3);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(param_2,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = param_1;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}




void FUN_1003bffd0(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10000c838();
  FUN_1003a985c(param_2,lVar1);
  *(ushort *)(lVar1 + 0x58) = *(ushort *)(lVar1 + 0x58) & 0xf01f | 0x10;
  *(code **)(lVar1 + 0x40) = FUN_10049b034;
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar1 + 0x18,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*GenericLocator*",0);
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,FUN_10049b0e8);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(lVar1 + 0x18,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Nexus_5v5_AbilityB_10185c250,uVar3);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(param_2,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = param_1;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}

