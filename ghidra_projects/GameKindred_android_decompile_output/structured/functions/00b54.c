// functions/00b54 — 9 functions
#include "libGameKindred.h"




void FUN_00b54070(long *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)((long)param_1 + 0x2c34);
  FUN_00b7987c(param_1,param_2 & 1);
  if ((bVar1 >> 2 & 1) == (*(byte *)((long)param_1 + 0x2c34) & 4) >> 2) {
    return;
  }
  if ((param_2 & 1) != 0) {
    FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00b54138,0);
    (**(code **)(*param_1 + 0x1a0))(param_1);
    FUN_00b535ac(param_1);
    FUN_00909220((long)(short)param_1[0x553]);
    return;
  }
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  return;
}




void FUN_00b54138(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b54168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))();
  return;
}




void FUN_00b5416c(long param_1,uint param_2)

{
  short sVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_00a9f784(param_1,param_2 & 1);
  if ((param_2 & 1) != 0) {
    lVar3 = param_1 + 0x4f60;
    uVar2 = FUN_00f02540(lVar3);
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(lVar3,1);
    }
    FUN_00f023ec(param_1 + 0x170,lVar3,1);
    sVar1 = 0;
    if (*(short *)(param_1 + 0x2c28) != -1) {
      sVar1 = *(short *)(param_1 + 0x2c28);
    }
    FUN_00a9f964(param_1,sVar1,&DAT_0320ffa8);
    return;
  }
  lVar3 = FUN_00b7990c(param_1,(long)*(short *)(param_1 + 0x2c28));
  if (lVar3 != 0) {
    FUN_00b35f84();
    return;
  }
  return;
}




void FUN_00b54214(long param_1,short param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = (uint)param_2;
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x9c70))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x9c78) + (ulong)uVar1 * 8);
    if (lVar3 != 0) {
      uVar2 = FUN_009b8d90();
      FUN_009bb46c(uVar2,lVar3 + 8,&DAT_0320ffa8,0,0);
    }
  }
  FUN_00b535ac(param_1);
  lVar3 = FUN_00b7990c(param_1,(long)*(short *)(param_1 + 0x2c28));
  if (lVar3 != 0) {
    FUN_00b35f84();
  }
  FUN_00909220(uVar1);
  return;
}




void FUN_00b542a0(long param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float local_5c;
  undefined1 auStack_58 [4];
  float local_54;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar4 & 1,&local_54,auStack_58,&local_5c);
  uVar5 = FUN_0092ea9c();
  fVar6 = DAT_02be3668;
  if ((uVar5 & 1) != 0) {
    if ((*(float *)(param_1 + 0x4fa8) != DAT_02be3668) ||
       (*(float *)(param_1 + 0x4fac) != DAT_02be3668)) {
      *(float *)(param_1 + 0x4fa8) = DAT_02be3668;
      *(float *)(param_1 + 0x4fac) = fVar6;
      FUN_0091ada4(param_1 + 0x4f60);
    }
  }
  lVar1 = param_1 + 0x4f60;
  FUN_00af7d24(lVar1);
  fVar6 = (float)FUN_00f01c20(lVar1);
  pfVar2 = (float *)(param_1 + 0x4fa0);
  fVar6 = (local_54 - local_5c) - fVar6;
  fVar7 = DAT_02be3670 * 0.5;
  if ((*pfVar2 != fVar6) || (*(float *)(param_1 + 0x4fa4) != fVar7)) {
    *pfVar2 = fVar6;
    *(float *)(param_1 + 0x4fa4) = fVar7;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x4f60) + 0x28))(lVar1,&local_50);
  *(float *)(param_1 + 0x2a90) = *pfVar2;
  FUN_00a9e810(param_1 + 0x310);
  if (*(long *)(param_1 + 0x3028) != 0) {
    FUN_00f07940(0xc1700000,0x41700000,param_1 + 0x2f58,1,param_1 + 0x450,2);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5442c(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
  uVar1 = FUN_00e6ce7c(pbVar3,0);
  FUN_00e70900(param_2,uVar1);
  uVar2 = FUN_00e70b04(param_2);
  if ((uVar2 & 1) != 0) {
    pbVar3 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      pbVar3 = *(byte **)(param_1 + 0x10);
    }
    FUN_00e705a0(param_2,pbVar3);
  }
  return;
}




void thunk_FUN_00b5449c(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  short sVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  ulong uStack_1e8;
  long lStack_1e0;
  byte abStack_1d8 [16];
  void *pvStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 auStack_1a8 [8];
  void *pvStack_1a0;
  byte abStack_198 [16];
  void *pvStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte abStack_150 [16];
  void *pvStack_140;
  undefined8 uStack_138;
  void *pvStack_130;
  undefined8 uStack_128;
  void *pvStack_120;
  undefined4 auStack_118 [2];
  undefined **ppuStack_110;
  long lStack_108;
  void *pvStack_100;
  byte abStack_f8 [16];
  void *pvStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte abStack_b0 [16];
  void *pvStack_a0;
  undefined8 uStack_98;
  void *pvStack_90;
  undefined8 uStack_88;
  void *pvStack_80;
  undefined4 auStack_78 [2];
  long lStack_70;
  
  lVar5 = tpidr_el0;
  lStack_70 = *(long *)(lVar5 + 0x28);
  FUN_00b51704();
  uStack_1c0 = 0;
  lStack_1b8 = 0;
  uVar7 = FUN_0096bfcc(&uStack_1c0);
  lVar16 = lStack_1b8;
  if ((uVar7 & 1) != 0) {
    iVar6 = (int)uStack_1c0;
    uVar7 = uStack_1c0 & 0xffffffff;
    FUN_008fa54c(&ppuStack_110,"vainglory://Market/");
    if (iVar6 != 0) {
      lVar15 = 0;
      do {
        lVar1 = lVar16 + lVar15;
        pbVar18 = (byte *)(lVar1 + 0x60);
        bVar4 = *pbVar18;
        uVar10 = *(ulong *)(lVar1 + 0x68);
        uVar12 = (ulong)(bVar4 >> 1);
        uVar13 = uVar12;
        if ((bVar4 & 1) != 0) {
          uVar13 = uVar10;
        }
        if (uVar13 == 0xc) {
          iVar6 = FUN_0090d610(pbVar18,0,0xffffffffffffffff,"SKINS_VIEWER",0xc);
          if (iVar6 != 0) {
            bVar4 = *(byte *)(lVar1 + 0x60);
            uVar10 = *(ulong *)(lVar1 + 0x68);
            uVar12 = (ulong)(bVar4 >> 1);
            goto LAB_00b5458c;
          }
        }
        else {
LAB_00b5458c:
          uVar13 = uVar12;
          if ((bVar4 & 1) != 0) {
            uVar13 = uVar10;
          }
          if (uVar13 == 6) {
            iVar6 = FUN_0090d610(pbVar18,0,0xffffffffffffffff,"BOOSTS",6);
            if (iVar6 == 0) {
              FUN_008fa54c(&ppuStack_1b0,"MENU_MARKET_TAB_NAME_BOOSTS");
              FUN_008fa54c(abStack_1d8,"vainglory://Market/boosts");
              FUN_00b54bd0(param_1,&ppuStack_1b0,abStack_1d8,&DAT_0320ffa8);
              if ((abStack_1d8[0] & 1) != 0) {
                operator_delete(pvStack_1c8);
              }
              if (((ulong)ppuStack_1b0 & 1) != 0) {
                operator_delete(pvStack_1a0);
              }
              goto LAB_00b54710;
            }
            bVar4 = *(byte *)(lVar1 + 0x60);
            uVar10 = *(ulong *)(lVar1 + 0x68);
            uVar12 = (ulong)(bVar4 >> 1);
          }
          uVar13 = uVar12;
          if ((bVar4 & 1) != 0) {
            uVar13 = uVar10;
          }
          if (uVar13 == 3) {
            iVar6 = FUN_0090d610(pbVar18,0,0xffffffffffffffff,"ICE",3);
            if (iVar6 == 0) goto LAB_00b54710;
            bVar4 = *(byte *)(lVar1 + 0x60);
            uVar10 = *(ulong *)(lVar1 + 0x68);
            uVar12 = (ulong)(bVar4 >> 1);
          }
          if ((bVar4 & 1) != 0) {
            uVar12 = uVar10;
          }
          if ((uVar12 != 10) ||
             (iVar6 = FUN_0090d610(pbVar18,0,0xffffffffffffffff,"__HIDDEN__",10), iVar6 != 0)) {
            lVar8 = lVar16 + lVar15;
            lVar17 = lVar8 + 0x18;
            FUN_00b5507c(abStack_1d8,&ppuStack_110,lVar17);
            FUN_008fcdb8(&ppuStack_1b0,abStack_1d8);
            lVar8 = (**(code **)(*param_1 + 0x230))(param_1,lVar8 + 0x48,lVar17,&ppuStack_1b0);
            if (((ulong)ppuStack_1b0 & 1) != 0) {
              operator_delete(pvStack_1a0);
            }
            if ((abStack_1d8[0] & 1) != 0) {
              operator_delete(pvStack_1c8);
            }
            if (lVar8 != 0) {
              FUN_00b359a8(lVar8,lVar1,lVar17,param_1 + 0x589);
            }
          }
        }
LAB_00b54710:
        lVar15 = lVar15 + 0x78;
      } while (uVar7 * 0x78 - lVar15 != 0);
    }
    if (((ulong)ppuStack_110 & 1) != 0) {
      operator_delete(pvStack_100);
    }
  }
  if ((int)uStack_1c0 == 0) {
    FUN_008fa54c(&ppuStack_110,"MENU_MARKET_TAB_NAME_BOOSTS");
    FUN_008fa54c(&ppuStack_1b0,"vainglory://Market/boosts");
    FUN_00b54bd0(param_1,&ppuStack_110,&ppuStack_1b0,&DAT_0320ffa8);
    if (((ulong)ppuStack_1b0 & 1) != 0) {
      operator_delete(pvStack_1a0);
    }
    if (((ulong)ppuStack_110 & 1) != 0) {
      operator_delete(pvStack_100);
    }
  }
  FUN_00a9e810(param_1 + 0x62);
  if ((*(byte *)((long)param_1 + 0x2c34) >> 1 & 1) != 0) {
    sVar3 = 0;
    if ((short)param_1[0x585] != -1) {
      sVar3 = (short)param_1[0x585];
    }
    FUN_00a9f964(param_1,sVar3,&DAT_0320ffa8);
  }
  uStack_1e8 = 0;
  lStack_1e0 = 0;
  FUN_0096be5c(&uStack_1e8);
  if ((int)uStack_1e8 != 0) {
    uVar7 = 0;
    do {
      lVar16 = lStack_1e0;
      FUN_00975578(&ppuStack_110);
      FUN_00975578(&ppuStack_1b0);
      puVar14 = (uint *)(lVar16 + uVar7 * 0xe8 + 8);
      if (*puVar14 != 0) {
        lVar15 = 0;
        uVar13 = 0;
        do {
          lVar17 = *(long *)(lVar16 + uVar7 * 0xe8 + 0x10);
          lVar1 = lVar17 + lVar15 + 0x30;
          FUN_008fa54c(abStack_1d8,"silver");
          uVar12 = FUN_00cab9fc(lVar1,abStack_1d8);
          if ((abStack_1d8[0] & 1) != 0) {
            operator_delete(pvStack_1c8);
          }
          if ((uVar12 & 1) == 0) {
            FUN_008fa54c(abStack_1d8,"gold");
            uVar12 = FUN_00cab9fc(lVar1,abStack_1d8);
            if ((abStack_1d8[0] & 1) != 0) {
              operator_delete(pvStack_1c8);
            }
            if ((uVar12 & 1) != 0) {
              lVar1 = lVar17 + lVar15;
              FUN_0097b658(auStack_1a8,lVar1 + 8);
              FUN_008fce60(abStack_198,lVar1 + 0x18);
              uStack_178 = *(undefined8 *)(lVar1 + 0x38);
              uStack_180 = *(undefined8 *)(lVar1 + 0x30);
              uStack_168 = *(undefined8 *)(lVar1 + 0x48);
              uStack_170 = *(undefined8 *)(lVar1 + 0x40);
              uStack_158 = *(undefined8 *)(lVar1 + 0x58);
              uStack_160 = *(undefined8 *)(lVar1 + 0x50);
              FUN_008fce60(abStack_150,lVar1 + 0x60);
              FUN_00910394(&uStack_138,lVar1 + 0x78);
              FUN_00910394(&uStack_128,lVar1 + 0x88);
              puVar11 = auStack_118;
              goto LAB_00b549d0;
            }
          }
          else {
            lVar1 = lVar17 + lVar15;
            FUN_0097b658(&lStack_108,lVar1 + 8);
            FUN_008fce60(abStack_f8,lVar1 + 0x18);
            uStack_d8 = *(undefined8 *)(lVar1 + 0x38);
            uStack_e0 = *(undefined8 *)(lVar1 + 0x30);
            uStack_c8 = *(undefined8 *)(lVar1 + 0x48);
            uStack_d0 = *(undefined8 *)(lVar1 + 0x40);
            uStack_b8 = *(undefined8 *)(lVar1 + 0x58);
            uStack_c0 = *(undefined8 *)(lVar1 + 0x50);
            FUN_008fce60(abStack_b0,lVar1 + 0x60);
            FUN_00910394(&uStack_98,lVar1 + 0x78);
            FUN_00910394(&uStack_88,lVar1 + 0x88);
            puVar11 = auStack_78;
LAB_00b549d0:
            *puVar11 = *(undefined4 *)(lVar17 + lVar15 + 0x98);
          }
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0xa0;
        } while (uVar13 < *puVar14);
      }
      ppuStack_1b0 = &PTR_FUN_027bca90;
      if (pvStack_120 != (void *)0x0) {
        operator_delete__(pvStack_120);
        uStack_128 = 0;
        pvStack_120 = (void *)0x0;
      }
      if (pvStack_130 != (void *)0x0) {
        operator_delete__(pvStack_130);
        uStack_138 = 0;
        pvStack_130 = (void *)0x0;
      }
      if ((abStack_150[0] & 1) != 0) {
        operator_delete(pvStack_140);
      }
      if ((abStack_198[0] & 1) != 0) {
        operator_delete(pvStack_188);
      }
      FUN_00977ea0(auStack_1a8,1);
      ppuStack_110 = &PTR_FUN_027bca90;
      if (pvStack_80 != (void *)0x0) {
        operator_delete__(pvStack_80);
        uStack_88 = 0;
        pvStack_80 = (void *)0x0;
      }
      if (pvStack_90 != (void *)0x0) {
        operator_delete__(pvStack_90);
        uStack_98 = 0;
        pvStack_90 = (void *)0x0;
      }
      if ((abStack_b0[0] & 1) != 0) {
        operator_delete(pvStack_a0);
      }
      if ((abStack_f8[0] & 1) != 0) {
        operator_delete(pvStack_e8);
      }
      FUN_00977ea0(&lStack_108,1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uStack_1e8 & 0xffffffff));
  }
  ppuStack_110 = (undefined **)0x0;
  lStack_108 = 0;
  FUN_0096be78(&ppuStack_110);
  if ((int)ppuStack_110 != 0) {
    uVar7 = 0;
    lVar16 = 0xe4;
    do {
      puVar2 = (undefined1 *)(lStack_108 + lVar16);
      uVar9 = FUN_00b55e90(param_1 + 0x830,puVar2 + -0x54,puVar2 + -0xcc,puVar2 + -0xbc,
                           puVar2 + -0xac,puVar2 + -0x3c,puVar2 + -0xdc,*puVar2);
      FUN_00acab38(uVar9,puVar2 + -0x54);
      FUN_00ab43c0(uVar9);
      uVar7 = uVar7 + 1;
      lVar16 = lVar16 + 0xe8;
    } while (uVar7 < ((ulong)ppuStack_110 & 0xffffffff));
  }
  FUN_00b56034(param_1 + 0x830);
  if ((*(byte *)(param_1 + 0x89c) >> 1 & 1) != 0) {
    lVar16 = FUN_009580b8();
    FUN_009658c8(lVar16 + 0x18);
  }
  FUN_00b535ac(param_1);
  FUN_0097905c(&ppuStack_110,1);
  FUN_0097905c(&uStack_1e8,1);
  FUN_00969c70(&uStack_1c0,1);
  if (*(long *)(lVar5 + 0x28) != lStack_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b5449c(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  short sVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  ulong local_1e8;
  long local_1e0;
  byte local_1d8 [16];
  void *local_1c8;
  ulong local_1c0;
  long local_1b8;
  undefined **local_1b0;
  undefined1 auStack_1a8 [8];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  undefined8 local_180;
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
  long local_108;
  void *local_100;
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
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  FUN_00b51704();
  local_1c0 = 0;
  local_1b8 = 0;
  uVar7 = FUN_0096bfcc(&local_1c0);
  lVar16 = local_1b8;
  if ((uVar7 & 1) != 0) {
    iVar6 = (int)local_1c0;
    uVar7 = local_1c0 & 0xffffffff;
    FUN_008fa54c(&local_110,"vainglory://Market/");
    if (iVar6 != 0) {
      lVar15 = 0;
      do {
        lVar1 = lVar16 + lVar15;
        pbVar18 = (byte *)(lVar1 + 0x60);
        bVar4 = *pbVar18;
        uVar10 = *(ulong *)(lVar1 + 0x68);
        uVar12 = (ulong)(bVar4 >> 1);
        uVar13 = uVar12;
        if ((bVar4 & 1) != 0) {
          uVar13 = uVar10;
        }
        if (uVar13 == 0xc) {
          iVar6 = FUN_0090d610(pbVar18,0,0xffffffffffffffff,"SKINS_VIEWER",0xc);
          if (iVar6 != 0) {
            bVar4 = *(byte *)(lVar1 + 0x60);
            uVar10 = *(ulong *)(lVar1 + 0x68);
            uVar12 = (ulong)(bVar4 >> 1);
            goto LAB_00b5458c;
          }
        }
        else {
LAB_00b5458c:
          uVar13 = uVar12;
          if ((bVar4 & 1) != 0) {
            uVar13 = uVar10;
          }
          if (uVar13 == 6) {
            iVar6 = FUN_0090d610(pbVar18,0,0xffffffffffffffff,"BOOSTS",6);
            if (iVar6 == 0) {
              FUN_008fa54c(&local_1b0,"MENU_MARKET_TAB_NAME_BOOSTS");
              FUN_008fa54c(local_1d8,"vainglory://Market/boosts");
              FUN_00b54bd0(param_1,&local_1b0,local_1d8,&DAT_0320ffa8);
              if ((local_1d8[0] & 1) != 0) {
                operator_delete(local_1c8);
              }
              if (((ulong)local_1b0 & 1) != 0) {
                operator_delete(local_1a0);
              }
              goto LAB_00b54710;
            }
            bVar4 = *(byte *)(lVar1 + 0x60);
            uVar10 = *(ulong *)(lVar1 + 0x68);
            uVar12 = (ulong)(bVar4 >> 1);
          }
          uVar13 = uVar12;
          if ((bVar4 & 1) != 0) {
            uVar13 = uVar10;
          }
          if (uVar13 == 3) {
            iVar6 = FUN_0090d610(pbVar18,0,0xffffffffffffffff,"ICE",3);
            if (iVar6 == 0) goto LAB_00b54710;
            bVar4 = *(byte *)(lVar1 + 0x60);
            uVar10 = *(ulong *)(lVar1 + 0x68);
            uVar12 = (ulong)(bVar4 >> 1);
          }
          if ((bVar4 & 1) != 0) {
            uVar12 = uVar10;
          }
          if ((uVar12 != 10) ||
             (iVar6 = FUN_0090d610(pbVar18,0,0xffffffffffffffff,"__HIDDEN__",10), iVar6 != 0)) {
            lVar8 = lVar16 + lVar15;
            lVar17 = lVar8 + 0x18;
            FUN_00b5507c(local_1d8,&local_110,lVar17);
            FUN_008fcdb8(&local_1b0,local_1d8);
            lVar8 = (**(code **)(*param_1 + 0x230))(param_1,lVar8 + 0x48,lVar17,&local_1b0);
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            if ((local_1d8[0] & 1) != 0) {
              operator_delete(local_1c8);
            }
            if (lVar8 != 0) {
              FUN_00b359a8(lVar8,lVar1,lVar17,param_1 + 0x589);
            }
          }
        }
LAB_00b54710:
        lVar15 = lVar15 + 0x78;
      } while (uVar7 * 0x78 - lVar15 != 0);
    }
    if (((ulong)local_110 & 1) != 0) {
      operator_delete(local_100);
    }
  }
  if ((int)local_1c0 == 0) {
    FUN_008fa54c(&local_110,"MENU_MARKET_TAB_NAME_BOOSTS");
    FUN_008fa54c(&local_1b0,"vainglory://Market/boosts");
    FUN_00b54bd0(param_1,&local_110,&local_1b0,&DAT_0320ffa8);
    if (((ulong)local_1b0 & 1) != 0) {
      operator_delete(local_1a0);
    }
    if (((ulong)local_110 & 1) != 0) {
      operator_delete(local_100);
    }
  }
  FUN_00a9e810(param_1 + 0x62);
  if ((*(byte *)((long)param_1 + 0x2c34) >> 1 & 1) != 0) {
    sVar3 = 0;
    if ((short)param_1[0x585] != -1) {
      sVar3 = (short)param_1[0x585];
    }
    FUN_00a9f964(param_1,sVar3,&DAT_0320ffa8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  FUN_0096be5c(&local_1e8);
  if ((int)local_1e8 != 0) {
    uVar7 = 0;
    do {
      lVar16 = local_1e0;
      FUN_00975578(&local_110);
      FUN_00975578(&local_1b0);
      puVar14 = (uint *)(lVar16 + uVar7 * 0xe8 + 8);
      if (*puVar14 != 0) {
        lVar15 = 0;
        uVar13 = 0;
        do {
          lVar17 = *(long *)(lVar16 + uVar7 * 0xe8 + 0x10);
          lVar1 = lVar17 + lVar15 + 0x30;
          FUN_008fa54c(local_1d8,"silver");
          uVar12 = FUN_00cab9fc(lVar1,local_1d8);
          if ((local_1d8[0] & 1) != 0) {
            operator_delete(local_1c8);
          }
          if ((uVar12 & 1) == 0) {
            FUN_008fa54c(local_1d8,"gold");
            uVar12 = FUN_00cab9fc(lVar1,local_1d8);
            if ((local_1d8[0] & 1) != 0) {
              operator_delete(local_1c8);
            }
            if ((uVar12 & 1) != 0) {
              lVar1 = lVar17 + lVar15;
              FUN_0097b658(auStack_1a8,lVar1 + 8);
              FUN_008fce60(local_198,lVar1 + 0x18);
              uStack_178 = *(undefined8 *)(lVar1 + 0x38);
              local_180 = *(undefined8 *)(lVar1 + 0x30);
              uStack_168 = *(undefined8 *)(lVar1 + 0x48);
              local_170 = *(undefined8 *)(lVar1 + 0x40);
              uStack_158 = *(undefined8 *)(lVar1 + 0x58);
              local_160 = *(undefined8 *)(lVar1 + 0x50);
              FUN_008fce60(local_150,lVar1 + 0x60);
              FUN_00910394(&local_138,lVar1 + 0x78);
              FUN_00910394(&local_128,lVar1 + 0x88);
              puVar11 = auStack_118;
              goto LAB_00b549d0;
            }
          }
          else {
            lVar1 = lVar17 + lVar15;
            FUN_0097b658(&local_108,lVar1 + 8);
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
            puVar11 = local_78;
LAB_00b549d0:
            *puVar11 = *(undefined4 *)(lVar17 + lVar15 + 0x98);
          }
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0xa0;
        } while (uVar13 < *puVar14);
      }
      local_1b0 = &PTR_FUN_027bca90;
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
        local_128 = 0;
        local_120 = (void *)0x0;
      }
      if (local_130 != (void *)0x0) {
        operator_delete__(local_130);
        local_138 = 0;
        local_130 = (void *)0x0;
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
      FUN_00977ea0(&local_108,1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (local_1e8 & 0xffffffff));
  }
  local_110 = (undefined **)0x0;
  local_108 = 0;
  FUN_0096be78(&local_110);
  if ((int)local_110 != 0) {
    uVar7 = 0;
    lVar16 = 0xe4;
    do {
      puVar2 = (undefined1 *)(local_108 + lVar16);
      uVar9 = FUN_00b55e90(param_1 + 0x830,puVar2 + -0x54,puVar2 + -0xcc,puVar2 + -0xbc,
                           puVar2 + -0xac,puVar2 + -0x3c,puVar2 + -0xdc,*puVar2);
      FUN_00acab38(uVar9,puVar2 + -0x54);
      FUN_00ab43c0(uVar9);
      uVar7 = uVar7 + 1;
      lVar16 = lVar16 + 0xe8;
    } while (uVar7 < ((ulong)local_110 & 0xffffffff));
  }
  FUN_00b56034(param_1 + 0x830);
  if ((*(byte *)(param_1 + 0x89c) >> 1 & 1) != 0) {
    lVar16 = FUN_009580b8();
    FUN_009658c8(lVar16 + 0x18);
  }
  FUN_00b535ac(param_1);
  FUN_0097905c(&local_110,1);
  FUN_0097905c(&local_1e8,1);
  FUN_00969c70(&local_1c0,1);
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_00b54bd0(undefined1 param_1 [16],undefined4 param_2,long *param_3,byte *param_4,
                   byte *param_5,byte *param_6)

{
  byte *pbVar1;
  void *pvVar2;
  undefined4 uVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined8 local_d0;
  void *local_c8;
  undefined8 *local_c0;
  byte local_b8 [16];
  void *local_a8;
  undefined8 local_a0;
  long *plStack_98;
  void *local_90;
  byte local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_008fcdb8(local_80,&DAT_0320ffa8);
  uVar11 = *(ulong *)(param_5 + 8);
  pbVar14 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar14 = param_5 + 1;
    uVar11 = (ulong)(*param_5 >> 1);
  }
  if (0x12 < (long)uVar11) {
    pbVar1 = pbVar14 + uVar11;
    pbVar7 = pbVar14;
    do {
      if ((uVar11 - 0x12 == 0) ||
         (pbVar7 = memchr(pbVar7,0x76,uVar11 - 0x12), pbVar7 == (byte *)0x0)) break;
      iVar6 = memcmp(pbVar7,"vainglory://Market/",0x13);
      if (iVar6 == 0) {
        if ((pbVar7 != pbVar1) && (pbVar7 == pbVar14)) {
          FUN_0093ddb0(local_b8,param_5,0x13,0xffffffffffffffff,param_5);
          FUN_008fcdb8(&local_a0,local_b8);
          FUN_008fce60(local_80,&local_a0);
          if ((local_a0 & 1) != 0) {
            operator_delete(local_90);
          }
          if ((local_b8[0] & 1) != 0) {
            operator_delete(local_a8);
          }
        }
        break;
      }
      pbVar7 = pbVar7 + 1;
      uVar11 = (long)pbVar1 - (long)pbVar7;
    } while (0x12 < (long)uVar11);
  }
  uVar3 = (undefined4)param_3[0x138e];
  uVar13 = (ulong)(local_80[0] >> 1);
  uVar11 = uVar13;
  if ((local_80[0] & 1) != 0) {
    uVar11 = local_78;
  }
  sVar4 = (short)uVar3;
  if (uVar11 == 5) {
    iVar6 = FUN_0090d610(local_80,0,0xffffffffffffffff,"skins",5);
    if (iVar6 != 0) {
      uVar13 = (ulong)(local_80[0] >> 1);
      goto LAB_00b54d4c;
    }
    lVar12 = 0x3048;
LAB_00b54e54:
    plVar8 = (long *)0x0;
    plVar15 = (long *)((long)param_3 + lVar12);
  }
  else {
LAB_00b54d4c:
    uVar11 = uVar13;
    if ((local_80[0] & 1) != 0) {
      uVar11 = local_78;
    }
    if (uVar11 == 6) {
      iVar6 = FUN_0090d610(local_80,0,0xffffffffffffffff,"boosts",6);
      if (iVar6 == 0) {
        lVar12 = 0x4180;
        goto LAB_00b54e54;
      }
      uVar13 = (ulong)(local_80[0] >> 1);
    }
    if ((local_80[0] & 1) != 0) {
      uVar13 = local_78;
    }
    if ((uVar13 == 3) && (iVar6 = FUN_0090d610(local_80,0,0xffffffffffffffff,"ice",3), iVar6 == 0))
    {
      plVar15 = (long *)0x0;
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = operator_new(0xc08);
      FUN_00b56364();
      uVar16 = (**(code **)(*param_3 + 0x48))(param_3);
      local_a0 = CONCAT44(param_2,uVar16);
      FUN_00f13f18(plVar8,&local_a0);
      FUN_008fce60(plVar8 + 0x71,param_3 + 0x589);
      FUN_00b3605c(plVar8,param_4);
      (**(code **)(*plVar8 + 0x170))(plVar8);
      local_a0 = CONCAT62(local_a0._2_6_,sVar4);
      *(undefined4 *)(plVar8 + 0x7b) = DAT_02be3670;
      plStack_98 = plVar8;
      FUN_00b5519c(param_3 + 0x587,&local_a0);
      plVar15 = plVar8;
    }
  }
  local_c0 = operator_new(0x20);
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[1] = 0;
  *local_c0 = plVar15;
  FUN_008fce60(local_c0 + 1,param_5);
  if ((plVar15 != (long *)0x0) && (uVar11 = FUN_00f02540(plVar15), (uVar11 & 1) != 0)) {
    FUN_00f01a4c(plVar15,1);
  }
  pbVar14 = *(byte **)(param_6 + 0x10);
  if ((*param_6 & 1) == 0) {
    pbVar14 = param_6 + 1;
  }
  FUN_00e705c8(&local_d0,pbVar14);
  uVar11 = FUN_00e70b04(&local_d0);
  if ((uVar11 & 1) != 0) {
    pbVar14 = *(byte **)(param_4 + 0x10);
    if ((*param_4 & 1) == 0) {
      pbVar14 = param_4 + 1;
    }
    uVar9 = FUN_00e6ce7c(pbVar14,0);
    FUN_00910394(&local_d0,uVar9);
  }
  FUN_00a9f888(param_3,uVar3,&local_d0,plVar15);
  FUN_00b55224(param_3 + 0x138e,&local_c0);
  uVar11 = (ulong)(*param_4 >> 1);
  if ((*param_4 & 1) != 0) {
    uVar11 = *(ulong *)(param_4 + 8);
  }
  if ((uVar11 == 0x1b) &&
     (iVar6 = FUN_0090d610(param_4,0,0xffffffffffffffff,"MENU_MARKET_TAB_NAME_MARKET",0x1b),
     iVar6 == 0)) {
    FUN_00a9f170(param_3 + 0x62,(int)sVar4,"REWARDS.BASIC_MYSTERY*");
    FUN_00a9f170(param_3 + 0x62,(int)sVar4,"REWARDS.EPIC_MYSTERY*");
  }
  FUN_009697c8(local_b8,param_3 + 0x589,".");
  uVar11 = *(ulong *)(param_4 + 8);
  pbVar14 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar14 = param_4 + 1;
    uVar11 = (ulong)(*param_4 >> 1);
  }
  puVar10 = (ulong *)FUN_0090de84(local_b8,pbVar14,uVar11);
  local_90 = (void *)puVar10[2];
  plStack_98 = (long *)puVar10[1];
  local_a0 = *puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  pvVar2 = (void *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pvVar2 = local_90;
  }
  FUN_00a9f170(param_3 + 0x62,(int)sVar4,pvVar2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_d0 = 0;
    local_c8 = (void *)0x0;
  }
  FUN_00b552ac(param_3);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

