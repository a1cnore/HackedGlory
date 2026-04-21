// functions/00bb2 — 10 functions
#include "libGameKindred.h"




void FUN_00bb2978(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  puVar1 = (uint *)(param_1 + 0x2b8a0);
  uVar4 = *puVar1;
  plVar2 = (long *)(param_1 + 0x2b8a8);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      plVar3 = *(long **)(*plVar2 + lVar6);
      if (plVar3 == (long *)0x0) {
        puVar5 = (undefined8 *)(*plVar2 + uVar7 * 8);
      }
      else {
        (**(code **)(*plVar3 + 8))();
        uVar4 = *puVar1;
        puVar5 = (undefined8 *)(*plVar2 + lVar6);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
      *puVar5 = 0;
    } while (uVar7 < uVar4);
  }
  if (*plVar2 != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00bb2a0c(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  puVar1 = (uint *)(param_1 + 0x1be30);
  uVar4 = *puVar1;
  plVar2 = (long *)(param_1 + 0x1be38);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      plVar3 = *(long **)(*plVar2 + lVar6);
      if (plVar3 == (long *)0x0) {
        puVar5 = (undefined8 *)(*plVar2 + uVar7 * 8);
      }
      else {
        (**(code **)(*plVar3 + 8))();
        uVar4 = *puVar1;
        puVar5 = (undefined8 *)(*plVar2 + lVar6);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
      *puVar5 = 0;
    } while (uVar7 < uVar4);
  }
  if (*plVar2 != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00bb2aa0(long param_1)

{
  FUN_00bb1ec4(param_1 + -0x368);
  return;
}




void FUN_00bb2aa8(void *param_1)

{
  FUN_00bb1ec4();
  operator_delete(param_1);
  return;
}




void FUN_00bb2acc(long param_1)

{
  FUN_00bb1ec4((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_00bb2af4(void)

{
  return;
}




void FUN_00bb2af8(long param_1,uint param_2)

{
  FUN_00b77fe4(param_1 + 0x380,param_2 & 1);
  if ((param_2 & 1) != 0) {
    FUN_00bb2b38(param_1);
    return;
  }
  return;
}




void FUN_00bb2b38(undefined8 param_1)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong *puVar14;
  undefined4 uVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  undefined8 local_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_78 = 0;
  local_70 = 0;
  FUN_0096bf08(&local_78);
  if ((int)local_78 != 0) {
    uVar19 = 0;
    do {
      lVar6 = local_70;
      lVar16 = local_70 + uVar19 * 0xe8;
      pbVar17 = (byte *)(lVar16 + 0xc0);
      puVar14 = (ulong *)(lVar16 + 200);
      uVar12 = (ulong)(*pbVar17 >> 1);
      if ((*pbVar17 & 1) != 0) {
        uVar12 = *puVar14;
      }
      if ((uVar12 == 10) &&
         (iVar7 = FUN_0090d610(pbVar17,0,0xffffffffffffffff,"createTeam",10), iVar7 == 0)) {
        FUN_008fcdb8(local_90,&DAT_0320ffa8);
        FUN_008fcdb8(local_a8,&DAT_0320ffa8);
        local_b0 = 0;
        puVar10 = (uint *)(lVar6 + uVar19 * 0xe8 + 8);
        uVar8 = *puVar10;
        if (uVar8 != 0) {
          uVar12 = 0;
          uVar15 = 0;
          uVar13 = 0;
          do {
            lVar16 = *(long *)(lVar6 + uVar19 * 0xe8 + 0x10);
            puVar20 = (uint *)(lVar16 + uVar12 * 0xa0 + 8);
            if (*puVar20 != 0) {
              lVar16 = lVar16 + uVar12 * 0xa0;
              lVar21 = 0;
              uVar22 = 0;
              lVar1 = lVar16 + 0x60;
              do {
                lVar18 = *(long *)(lVar16 + 0x10);
                pbVar2 = (byte *)(lVar18 + lVar21);
                bVar4 = *pbVar2;
                uVar9 = *(ulong *)(pbVar2 + 8);
                uVar11 = (ulong)(bVar4 >> 1);
                uVar3 = uVar11;
                if ((bVar4 & 1) != 0) {
                  uVar3 = uVar9;
                }
                if (uVar3 == 6) {
                  iVar7 = FUN_0090d610(pbVar2,0,0xffffffffffffffff,"silver",6);
                  if (iVar7 != 0) {
                    bVar4 = *pbVar2;
                    uVar9 = *(ulong *)(pbVar2 + 8);
                    uVar11 = (ulong)(bVar4 >> 1);
                    goto LAB_00bb2cb8;
                  }
                  FUN_008fce60(local_90,lVar1);
                  uVar15 = *(undefined4 *)(lVar18 + lVar21 + 0x18);
                }
                else {
LAB_00bb2cb8:
                  if ((bVar4 & 1) != 0) {
                    uVar11 = uVar9;
                  }
                  if ((uVar11 == 4) &&
                     (iVar7 = FUN_0090d610(pbVar2,0,0xffffffffffffffff,"gold",4), iVar7 == 0)) {
                    FUN_008fce60(local_a8,lVar1);
                    uVar13 = *(undefined4 *)(lVar18 + lVar21 + 0x18);
                  }
                }
                uVar22 = uVar22 + 1;
                lVar21 = lVar21 + 0x20;
              } while (uVar22 < *puVar20);
              uVar8 = *puVar10;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar8);
          local_b0 = CONCAT44(uVar15,uVar13);
        }
        uVar12 = (ulong)(*pbVar17 >> 1);
        if ((*pbVar17 & 1) != 0) {
          uVar12 = *puVar14;
        }
        if ((uVar12 == 10) &&
           (iVar7 = FUN_0090d610(pbVar17,0,0xffffffffffffffff,"createTeam",10), iVar7 == 0)) {
          FUN_00bb5734(param_1,local_a8,&local_b0,local_90,(long)&local_b0 + 4);
        }
        if ((local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < (local_78 & 0xffffffff));
  }
  FUN_0097905c(&local_78,1);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb2e1c(undefined8 param_1)

{
  FUN_00b8e854();
  FUN_00bb1a68(param_1);
  return;
}




void FUN_00bb2e40(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  long *plVar4;
  float *pfVar5;
  uint *puVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_b8;
  long local_b0;
  
  lVar8 = tpidr_el0;
  local_b0 = *(long *)(lVar8 + 0x28);
  uVar14 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  uVar9 = FUN_0092ea9c();
  FUN_00f13f08(uVar14,param_2,param_3 + 0x70);
  local_b8 = 0;
  FUN_00a9fcd4(param_3 + 0x70,&local_b8);
  fVar16 = (float)uVar14;
  FUN_00f13f08(uVar14,fVar16 * 0.75,param_3 + 0x37c8);
  fVar15 = *(float *)(param_3 + 0x37d1);
  if ((fVar15 != 1.3) || (fVar15 = *(float *)((long)param_3 + 0x1be8c), fVar15 != 1.3)) {
    param_3[0x37d1] = 0x3fa666663fa66666;
    FUN_0091ada4(param_3 + 0x37c8);
  }
  plVar2 = param_3 + 0x5441;
  fVar13 = (float)FUN_00f01c54(plVar2,0,0,1,1);
  fVar13 = (fVar16 + -48.0) - fVar13;
  FUN_00f01c54(plVar2,0,0,1,1);
  fVar15 = fVar15 * 0.5 + 32.0;
  if ((*(float *)(param_3 + 0x5449) != fVar13) || (*(float *)((long)param_3 + 0x2a24c) != fVar15)) {
    *(float *)(param_3 + 0x5449) = fVar13;
    *(float *)((long)param_3 + 0x2a24c) = fVar15;
    FUN_0091ada4(plVar2);
  }
  FUN_00f13f08(uVar14,param_2,param_3 + 0x37e6);
  pfVar3 = (float *)(param_3 + 0x571c);
  if (*(float *)((long)param_3 + 0x1bf74) != *pfVar3) {
    *(float *)((long)param_3 + 0x1bf74) = *pfVar3;
    FUN_0091ada4(param_3 + 0x37e6);
  }
  fVar15 = -(float)param_3[0x3378];
  fVar13 = -(float)((ulong)param_3[0x3378] >> 0x20);
  if ((*(float *)(param_3 + 0x3361) != fVar15) || (*(float *)((long)param_3 + 0x19b0c) != fVar13)) {
    param_3[0x3361] = CONCAT44(fVar13,fVar15);
    FUN_0091ada4(param_3 + 0x3359);
  }
  uVar17 = param_2;
  FUN_00f13f08(uVar14,param_3 + 0x3359);
  fVar15 = (float)uVar17;
  pfVar5 = (float *)(param_3 + 0x33ab);
  if ((*pfVar5 != 0.0) || (*(float *)((long)param_3 + 0x19d5c) != 0.0)) {
    pfVar5[0] = 0.0;
    pfVar5[1] = 0.0;
    FUN_0091ada4(param_3 + 0x33a3);
  }
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar9 & 1) == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  plVar2 = param_3 + 0x344a;
  FUN_00f0d378(plVar2,*ppuVar7);
  FUN_00f0dac8(plVar2,3);
  FUN_00f0dad0(fVar16 + -128.0,plVar2,1);
  pfVar5 = (float *)(param_3 + 0x3452);
  if ((*pfVar5 != 0.0) || (*(float *)((long)param_3 + 0x1a294) != 0.0)) {
    pfVar5[0] = 0.0;
    pfVar5[1] = 0.0;
    FUN_0091ada4(plVar2);
  }
  fVar18 = fVar16 * 0.5;
  local_b8 = 0x3f000000;
  fVar20 = (float)param_2;
  fVar22 = fVar20 * 0.5;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b8);
  fVar13 = *(float *)((long)param_3 + 0x1a294);
  plVar4 = param_3 + 0x3470;
  FUN_00f0d4e0(plVar2);
  fVar13 = fVar13 + fVar15;
  fVar15 = fVar13 + 64.0;
  if ((*(float *)(param_3 + 0x3478) != 0.0) ||
     (fVar13 = *(float *)((long)param_3 + 0x1a3c4), fVar13 != fVar15)) {
    *(float *)(param_3 + 0x3478) = 0.0;
    *(float *)((long)param_3 + 0x1a3c4) = fVar15;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  plVar2 = param_3 + 0x3392;
  FUN_00f01c54(plVar2,0,0,1,1);
  fVar15 = fVar22 + fVar13 * -0.5 + -300.0;
  if ((*(float *)(param_3 + 0x339a) != fVar18) || (*(float *)((long)param_3 + 0x19cd4) != fVar15)) {
    *(float *)(param_3 + 0x339a) = fVar18;
    *(float *)((long)param_3 + 0x19cd4) = fVar15;
    FUN_0091ada4(plVar2);
  }
  local_b8 = 0x3f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b8);
  plVar2 = param_3 + 0x3728;
  fVar15 = fVar18 + -550.0;
  FUN_00f13f08(plVar2);
  pfVar5 = (float *)((long)param_3 + 0x1b984);
  if ((*(float *)(param_3 + 0x3730) != fVar18) || (*pfVar5 != fVar22)) {
    *(float *)(param_3 + 0x3730) = fVar18;
    *pfVar5 = fVar22;
    FUN_0091ada4(plVar2);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b8);
  plVar2 = param_3 + 0x3746;
  if ((*(float *)(param_3 + 0x374e) != fVar15 + 156.0) ||
     (*(float *)((long)param_3 + 0x1ba74) != fVar22)) {
    *(float *)(param_3 + 0x374e) = fVar15 + 156.0;
    *(float *)((long)param_3 + 0x1ba74) = fVar22;
    FUN_0091ada4(plVar2);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b8);
  plVar2 = param_3 + 0x3764;
  if ((*(float *)(param_3 + 0x376c) != fVar15 + 234.0) ||
     (*(float *)((long)param_3 + 0x1bb64) != fVar22)) {
    *(float *)(param_3 + 0x376c) = fVar15 + 234.0;
    *(float *)((long)param_3 + 0x1bb64) = fVar22;
    FUN_0091ada4(plVar2);
  }
  local_b8 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b8);
  puVar6 = (uint *)(param_3 + 0x37c6);
  uVar10 = *puVar6;
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      lVar11 = *(long *)(param_3[0x37c7] + (ulong)uVar12 * 8);
      if (lVar11 == 0) break;
      fVar13 = (float)uVar12 * 192.0 + *pfVar5 + 150.0;
      if ((*(float *)(lVar11 + 0x40) != fVar15) || (*(float *)(lVar11 + 0x44) != fVar13)) {
        *(float *)(lVar11 + 0x40) = fVar15;
        *(float *)(lVar11 + 0x44) = fVar13;
        FUN_0091ada4(lVar11);
      }
      if (uVar12 == 0) {
        *(uint *)(lVar11 + 0x10c) = *(uint *)(lVar11 + 0x10c) & 0xfffffffb;
      }
      else {
        if (*(float *)(lVar11 + 200) != 94.0) {
          *(undefined4 *)(lVar11 + 200) = 0x42bc0000;
          FUN_0091ada4(lVar11 + 0x88);
        }
        FUN_00f13f08(0x44640000,0x40000000,lVar11 + 0x88);
      }
      lVar1 = lVar11 + 0x178;
      FUN_00f0db64(0x43680000,0,0x3f800000,lVar1);
      if ((*(float *)(lVar11 + 0x1b8) != 234.0) || (*(float *)(lVar11 + 0x1bc) != 104.0)) {
        *(undefined8 *)(lVar11 + 0x1b8) = 0x42d00000436a0000;
        FUN_0091ada4(lVar1);
      }
      local_b8 = 0x3f80000000000000;
      (**(code **)(*(long *)(lVar11 + 0x178) + 0x28))(lVar1,&local_b8);
      lVar1 = lVar11 + 0x2a8;
      FUN_00f0db64(0x43f10000,0,0x3f800000,lVar1);
      if ((*(float *)(lVar11 + 0x2e8) != 234.0) || (*(float *)(lVar11 + 0x2ec) != 96.0)) {
        *(undefined8 *)(lVar11 + 0x2e8) = 0x42c00000436a0000;
        FUN_0091ada4(lVar1);
      }
      local_b8 = 0;
      (**(code **)(*(long *)(lVar11 + 0x2a8) + 0x28))(lVar1,&local_b8);
      plVar2 = (long *)(lVar11 + 0x3d8);
      fVar13 = (float)FUN_00f13e54(plVar2);
      fVar13 = fVar13 * -0.5 + 1006.0;
      if ((*(float *)(lVar11 + 0x418) != fVar13) || (*(float *)(lVar11 + 0x41c) != 96.0)) {
        *(float *)(lVar11 + 0x418) = fVar13;
        *(undefined4 *)(lVar11 + 0x41c) = 0x42c00000;
        FUN_0091ada4(plVar2);
      }
      local_b8 = 0x3f0000003f000000;
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_b8);
      uVar10 = *puVar6;
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar10);
  }
  plVar2 = param_3 + 0x378a;
  fVar13 = fVar22 + 75.0;
  if ((*(float *)(param_3 + 0x3792) != fVar15) || (*(float *)((long)param_3 + 0x1bc94) != fVar13)) {
    *(float *)(param_3 + 0x3792) = fVar15;
    *(float *)((long)param_3 + 0x1bc94) = fVar13;
    FUN_0091ada4(plVar2);
    uVar10 = *puVar6;
  }
  fVar18 = (float)uVar10 * 192.0;
  FUN_00f13f08(0x44898000,plVar2);
  plVar4 = param_3 + 0x37a8;
  FUN_00f0e700(plVar2);
  pfVar5 = (float *)((long)param_3 + 0x1bd84);
  if ((*(float *)(param_3 + 0x37b0) != fVar15) || (*pfVar5 != fVar13 + fVar18)) {
    *(float *)(param_3 + 0x37b0) = fVar15;
    *pfVar5 = fVar13 + fVar18;
    FUN_0091ada4(plVar4);
  }
  fVar13 = 256.0;
  FUN_00f13f08(0x44898000,plVar4);
  fVar18 = *pfVar3;
  fVar19 = *pfVar5;
  FUN_00f0e700(plVar4);
  fVar15 = fVar20;
  if (fVar20 <= fVar19 + fVar13) {
    fVar15 = fVar19 + fVar13;
  }
  FUN_00ed02d8(fVar16,fVar18 + fVar15,param_3 + 0x33a3);
  FUN_00f13f08(0x449c4000,0x43160000,param_3 + 0x38d7);
  pfVar5 = (float *)(param_3 + 0x38fd);
  plVar2 = param_3 + 0x38f5;
  if ((*pfVar5 != 80.0) || (*(float *)((long)param_3 + 0x1c7ec) != 75.0)) {
    pfVar5[0] = 80.0;
    pfVar5[1] = 75.0;
    FUN_0091ada4(plVar2);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b8);
  pfVar5 = (float *)(param_3 + 0x391b);
  plVar2 = param_3 + 0x3913;
  if ((*pfVar5 != 160.0) || (*(float *)((long)param_3 + 0x1c8dc) != 75.0)) {
    pfVar5[0] = 160.0;
    pfVar5[1] = 75.0;
    FUN_0091ada4(plVar2);
  }
  local_b8 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b8);
  fVar15 = 150.0;
  if (*(float *)((long)param_3 + 0x1cbec) != 150.0) {
    *(float *)((long)param_3 + 0x1cbec) = 150.0;
    fVar15 = 150.0;
    FUN_0091ada4(param_3 + 0x3975);
  }
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar9 & 1) == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  plVar2 = param_3 + 0x39ac;
  FUN_00f0d378(plVar2,*ppuVar7);
  pfVar5 = (float *)(param_3 + 0x39b4);
  if ((*pfVar5 != 160.0) || (fVar15 = 56.0, *(float *)((long)param_3 + 0x1cda4) != 56.0)) {
    pfVar5[0] = 160.0;
    pfVar5[1] = 56.0;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0dad0(0x44688000,plVar2,1);
  pfVar5 = (float *)(param_3 + 0x398e);
  plVar4 = param_3 + 0x3986;
  if ((*pfVar5 != 80.0) || (fVar15 = 42.0, *(float *)((long)param_3 + 0x1cc74) != 42.0)) {
    pfVar5[0] = 80.0;
    pfVar5[1] = 42.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  FUN_00f0d4e0(plVar2);
  fVar15 = fVar15 + 48.0 + 56.0;
  if ((*(float *)(param_3 + 0x39da) != 160.0) || (*(float *)((long)param_3 + 0x1ced4) != fVar15)) {
    *(float *)(param_3 + 0x39da) = 160.0;
    *(float *)((long)param_3 + 0x1ced4) = fVar15;
    FUN_0091ada4(param_3 + 0x39d2);
  }
  FUN_00abc380(0x44688000,0xbf800000,param_3 + 0x39d2);
  fVar15 = fVar15 + 150.0;
  if ((*(float *)(param_3 + 0x3d79) != 160.0) || (*(float *)((long)param_3 + 0x1ebcc) != fVar15)) {
    *(float *)(param_3 + 0x3d79) = 160.0;
    *(float *)((long)param_3 + 0x1ebcc) = fVar15;
    FUN_0091ada4(param_3 + 0x3d71);
  }
  FUN_00abc380(0x44688000,0xbf800000,param_3 + 0x3d71);
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar9 & 1) == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  plVar2 = param_3 + 0x4136;
  fVar15 = fVar15 + 130.0;
  FUN_00f0d378(plVar2,*ppuVar7);
  if ((*(float *)(param_3 + 0x413e) != 160.0) || (*(float *)((long)param_3 + 0x209f4) != fVar15)) {
    *(float *)(param_3 + 0x413e) = 160.0;
    *(float *)((long)param_3 + 0x209f4) = fVar15;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0dad0(0x44688000,plVar2,1);
  plVar4 = param_3 + 0x4110;
  fVar16 = *(float *)(param_3 + 0x4118);
  if ((fVar16 != 80.0) || (fVar16 = *(float *)((long)param_3 + 0x208c4), fVar16 != fVar15 + -14.0))
  {
    *(float *)(param_3 + 0x4118) = 80.0;
    *(float *)((long)param_3 + 0x208c4) = fVar15 + -14.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  FUN_00f0d4e0(plVar2);
  fVar15 = fVar15 + fVar16 + 48.0;
  if ((*(float *)(param_3 + 0x4164) != 160.0) || (*(float *)((long)param_3 + 0x20b24) != fVar15)) {
    *(float *)(param_3 + 0x4164) = 160.0;
    *(float *)((long)param_3 + 0x20b24) = fVar15;
    FUN_0091ada4(param_3 + 0x415c);
  }
  FUN_00abc380(0x44688000,0xbf800000,param_3 + 0x415c);
  fVar15 = fVar15 + 150.0;
  if ((*(float *)(param_3 + 0x4503) != 160.0) || (*(float *)((long)param_3 + 0x2281c) != fVar15)) {
    *(float *)(param_3 + 0x4503) = 160.0;
    *(float *)((long)param_3 + 0x2281c) = fVar15;
    FUN_0091ada4(param_3 + 0x44fb);
  }
  fVar18 = -1.0;
  FUN_00abc380(0x44688000,param_3 + 0x44fb);
  plVar2 = param_3 + 0x48ab;
  fVar16 = (float)FUN_00f13e54(plVar2);
  fVar19 = *(float *)((long)param_3 + 0x2711c);
  plVar4 = param_3 + 0x4e1b;
  FUN_00f13e54(plVar4);
  fVar13 = fVar18 * 0.5;
  FUN_00f13e54(plVar2);
  pfVar5 = (float *)(param_3 + 0x48b3);
  fVar21 = *pfVar5;
  fVar13 = (fVar19 + fVar13) - fVar18 * 0.5;
  if ((fVar21 != fVar16 * 0.5) || (*(float *)((long)param_3 + 0x2459c) != fVar13)) {
    *pfVar5 = fVar16 * 0.5;
    *(float *)((long)param_3 + 0x2459c) = fVar13;
    FUN_0091ada4(plVar2);
    fVar21 = *pfVar5;
  }
  fVar16 = (float)FUN_00f13e54(plVar2);
  fVar13 = (float)FUN_00f13e54(param_3 + 0x4b63);
  fVar16 = fVar21 + fVar16 * 0.5 + fVar13 * 0.5 + 32.0;
  if (*(float *)(param_3 + 0x4b6b) != fVar16) {
    *(float *)(param_3 + 0x4b6b) = fVar16;
    FUN_0091ada4(param_3 + 0x4b63);
  }
  fVar16 = (float)FUN_00f13e54(param_3 + 0x512e);
  pfVar5 = (float *)(param_3 + 0x5136);
  fVar13 = *pfVar5;
  fVar16 = fVar16 * -0.5 + 1250.0 + -80.0;
  if (fVar13 != fVar16) {
    *pfVar5 = fVar16;
    FUN_0091ada4(param_3 + 0x512e);
    fVar13 = *pfVar5;
  }
  fVar16 = (float)FUN_00f13e54(plVar4);
  fVar16 = (fVar13 - fVar16) + -16.0;
  if (*(float *)(param_3 + 0x4e23) != fVar16) {
    *(float *)(param_3 + 0x4e23) = fVar16;
    FUN_0091ada4(plVar4);
  }
  fVar16 = (float)FUN_00f01c54(param_3 + 0x489a,0,0,1,1);
  fVar13 = *(float *)(param_3 + 0x48a2);
  fVar16 = (1250.0 - fVar16) * 0.5;
  if ((fVar13 != fVar16) || (fVar13 = *(float *)((long)param_3 + 0x24514), fVar13 != fVar15 + 210.0)
     ) {
    *(float *)(param_3 + 0x48a2) = fVar16;
    *(float *)((long)param_3 + 0x24514) = fVar15 + 210.0;
    FUN_0091ada4(param_3 + 0x489a);
  }
  FUN_00f01c54(param_3 + 0x3975,0,0,1,1);
  plVar2 = param_3 + 0x3939;
  FUN_00f13f08(0x449c4000,fVar13 + 160.0 + -240.0,plVar2);
  fVar15 = 150.0;
  if (*(float *)((long)param_3 + 0x1ca0c) != 150.0) {
    *(float *)((long)param_3 + 0x1ca0c) = 150.0;
    fVar15 = 150.0;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e700(plVar2);
  if (*(float *)((long)param_3 + 0x1cafc) != fVar15 + 150.0) {
    *(float *)((long)param_3 + 0x1cafc) = fVar15 + 150.0;
    FUN_0091ada4(param_3 + 0x3957);
  }
  fVar15 = 240.0;
  FUN_00f13f08(0x449c4000,param_3 + 0x3957);
  FUN_00f01c54(param_3 + 0x381f,0,0,1,1);
  fVar16 = -0.5;
  fVar15 = (fVar15 + -160.0) * -0.5;
  pfVar5 = (float *)((long)param_3 + 0x1c13c);
  if ((*(float *)(param_3 + 0x3827) != -625.0) || (fVar16 = *pfVar5, fVar16 != fVar15)) {
    *(float *)(param_3 + 0x3827) = -625.0;
    *pfVar5 = fVar15;
    FUN_0091ada4(param_3 + 0x381f);
  }
  uVar14 = FUN_00ed0470(param_3 + 0x3830,1,0,1,1);
  FUN_00ed02d8(uVar14,*pfVar3 + (fVar16 - (fVar20 - (fVar22 + *pfVar5))),param_3 + 0x3830);
  if (*(long *)(lVar8 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

