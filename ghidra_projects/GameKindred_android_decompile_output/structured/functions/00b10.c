// functions/00b10 — 10 functions
#include "libGameKindred.h"




void FUN_00b10040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dc420;
  FUN_00b10c20();
  if ((*(byte *)(param_1 + 0x4a5) & 1) != 0) {
    operator_delete((void *)param_1[0x4a7]);
  }
  if ((*(byte *)(param_1 + 0x4a2) & 1) != 0) {
    operator_delete((void *)param_1[0x4a4]);
  }
  param_1[0x484] = &PTR_FUN_028266f0;
  param_1[0x49b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49e);
  FUN_00f13d08(param_1 + 0x484);
  if ((void *)param_1[0x483] != (void *)0x0) {
    operator_delete__((void *)param_1[0x483]);
    param_1[0x483] = 0;
    param_1[0x482] = 0;
  }
  FUN_00f01868(param_1 + 0x471);
  FUN_00b26544(param_1);
  return;
}




void FUN_00b100f0(void *param_1)

{
  FUN_00b10040();
  operator_delete(param_1);
  return;
}




void FUN_00b10114(long *param_1,undefined8 param_2,long param_3,byte param_4)

{
  size_t sVar1;
  size_t sVar2;
  void *__s1;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  size_t sVar12;
  byte bVar13;
  long lVar14;
  size_t sVar15;
  size_t sVar16;
  byte bVar17;
  size_t sVar18;
  void *local_a0;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_008fce60(param_1 + 0x1b5);
  FUN_00b121f4(param_1 + 0x18,param_3 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x48);
  lVar14 = *(long *)(param_3 + 0x38);
  param_1[0x1f] = *(long *)(param_3 + 0x40);
  param_1[0x1e] = lVar14;
  lVar14 = *(long *)(param_3 + 0x28);
  param_1[0x1d] = *(long *)(param_3 + 0x30);
  param_1[0x1c] = lVar14;
  lVar14 = *(long *)(param_3 + 0x18);
  param_1[0x1b] = *(long *)(param_3 + 0x20);
  param_1[0x1a] = lVar14;
  FUN_00910394(param_1 + 0x21,param_3 + 0x50);
  FUN_008fce60(param_1 + 0x23,param_3 + 0x60);
  uVar9 = *(ulong *)(param_3 + 0xa8);
  param_1[0x2c] = uVar9;
  lVar14 = *(long *)(param_3 + 0x98);
  param_1[0x2b] = *(long *)(param_3 + 0xa0);
  param_1[0x2a] = lVar14;
  lVar14 = *(long *)(param_3 + 0x88);
  param_1[0x29] = *(long *)(param_3 + 0x90);
  param_1[0x28] = lVar14;
  lVar11 = *(long *)(param_3 + 0x80);
  lVar14 = *(long *)(param_3 + 0x78);
  *(byte *)(param_1 + 0x1b8) = param_4 & 1;
  param_1[0x27] = lVar11;
  param_1[0x26] = lVar14;
  uVar3 = DAT_03210f60;
  if ((uVar9 & 0xff00000000) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
    FUN_00b10518(param_1,uVar3,FUN_00b1056c,param_1);
    FUN_00b10518(param_1,DAT_03210f8c,FUN_00b1056c,param_1);
  }
  FUN_00ab7498(param_1 + 0x1b9,param_1 + 0x21);
  *(uint *)((long)param_1 + 0xe4c) =
       *(uint *)((long)param_1 + 0xe4c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xe4c) & 3 | (uint)(param_1[0x1b] != 0) << 2;
  (**(code **)(*param_1 + 0x138))(param_1);
  if (0 < *(int *)(param_3 + 0xb0)) {
    uVar3 = DAT_03210c64;
    lVar11 = 0;
    lVar14 = 0;
    do {
      pvVar6 = operator_new(0x1cf0);
      FUN_00b10608(pvVar6,*(long *)(param_3 + 0xb8) + lVar11);
      local_a0 = pvVar6;
      FUN_00b10578(param_1 + 0x482,&local_a0);
      FUN_00f023ec(param_1 + 0x471,local_a0,1);
      local_98 = FUN_00b10600;
      local_88 = 0;
      uStack_80 = 0;
      plStack_90 = param_1;
      local_78 = lVar14;
      local_70 = uVar3;
      FUN_009693a0((long)local_a0 + 0xc0,&local_98);
      iVar5 = *(int *)(param_3 + 0xb0);
      lVar14 = lVar14 + 1;
      lVar11 = lVar11 + 0xa0;
      if (2 < iVar5) {
        iVar5 = 3;
      }
    } while (lVar14 < iVar5);
  }
  *(undefined4 *)((long)param_1 + 0x2544) = *(undefined4 *)(param_3 + 0xc0);
  sVar18 = DAT_0320ffb0;
  bVar17 = *(byte *)(param_3 + 200);
  sVar15 = *(size_t *)(param_3 + 0xd0);
  sVar16 = (size_t)(bVar17 >> 1);
  sVar12 = (size_t)(DAT_0320ffa8 >> 1);
  sVar2 = sVar16;
  if ((bVar17 & 1) != 0) {
    sVar2 = sVar15;
  }
  sVar1 = sVar12;
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (sVar2 == sVar1) {
    pvVar6 = *(void **)(param_3 + 0xd8);
    bVar13 = DAT_0320ffa8 & 1;
    __s1 = pvVar6;
    if ((bVar17 & 1) == 0) {
      __s1 = (void *)(param_3 + 0xc9);
    }
    pcVar7 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar7 = &DAT_0320ffa9;
    }
    if ((bVar17 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar10 = (char *)(param_3 + 0xc9);
        lVar14 = -sVar16;
        do {
          if (*pcVar10 != *pcVar7) goto LAB_00b103a4;
          pcVar10 = pcVar10 + 1;
          lVar14 = lVar14 + 1;
          pcVar7 = pcVar7 + 1;
        } while (lVar14 != 0);
      }
      goto LAB_00b10400;
    }
    if ((sVar2 == 0) || (iVar5 = memcmp(__s1,pcVar7,sVar2), iVar5 == 0)) goto LAB_00b10400;
  }
  else {
LAB_00b103a4:
    if ((bVar17 & 1) == 0) {
      pvVar6 = (void *)(param_3 + 0xc9);
    }
    else {
      pvVar6 = *(void **)(param_3 + 0xd8);
    }
  }
  FUN_00f0e578(param_1 + 0x484,pvVar6);
  bVar17 = *(byte *)(param_3 + 200);
  sVar15 = *(size_t *)(param_3 + 0xd0);
  sVar16 = (size_t)(bVar17 >> 1);
  bVar13 = DAT_0320ffa8 & 1;
  sVar12 = (size_t)(DAT_0320ffa8 >> 1);
  sVar18 = DAT_0320ffb0;
LAB_00b10400:
  sVar2 = sVar16;
  if ((bVar17 & 1) != 0) {
    sVar2 = sVar15;
  }
  if (bVar13 != 0) {
    sVar12 = sVar18;
  }
  if (sVar2 == sVar12) {
    pvVar6 = *(void **)(param_3 + 0xd8);
    if ((bVar17 & 1) == 0) {
      pvVar6 = (void *)(param_3 + 0xc9);
    }
    pcVar7 = DAT_0320ffb8;
    if (bVar13 == 0) {
      pcVar7 = &DAT_0320ffa9;
    }
    if ((bVar17 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar10 = (char *)(param_3 + 0xc9);
        do {
          if (*pcVar10 != *pcVar7) {
            uVar8 = 4;
            goto LAB_00b104a8;
          }
          sVar16 = sVar16 - 1;
          pcVar10 = pcVar10 + 1;
          pcVar7 = pcVar7 + 1;
        } while (sVar16 != 0);
      }
      uVar8 = 0;
    }
    else if (sVar2 == 0) {
      uVar8 = 0;
    }
    else {
      iVar5 = memcmp(pvVar6,pcVar7,sVar2);
      uVar8 = (uint)(iVar5 != 0) << 2;
    }
  }
  else {
    uVar8 = 4;
  }
LAB_00b104a8:
  *(uint *)((long)param_1 + 0x24a4) = *(uint *)((long)param_1 + 0x24a4) & 0xfffffffb | uVar8;
  FUN_008fce60(param_1 + 0x4a5,param_3 + 0xe0);
  FUN_00b267c0(param_1,param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2d) = 2;
  FUN_00b26900(param_1);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b10518(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_0099c2fc((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      lVar3 = lVar3 + -0x30;
      plVar2 = plVar2 + 6;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_00b1056c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b27be4(param_1,param_4,param_5);
  return;
}




void FUN_00b10578(uint *param_1,undefined8 *param_2)

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
    FUN_00b1229c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b10600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b110d8(param_1,param_2,param_5);
  return;
}




void FUN_00b10608(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  long local_98;
  
  lVar11 = tpidr_el0;
  local_98 = *(long *)(lVar11 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027dc690;
  FUN_00ab6c24(plVar1,0);
  plVar3 = param_1 + 0x2cf;
  FUN_00f017e8(plVar3);
  plVar4 = param_1 + 0x2e0;
  param_1[0x2cf] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar4);
  plVar5 = param_1 + 0x2f1;
  param_1[0x2e0] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x30f;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x32d;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x353;
  FUN_00f0e4a8(plVar8);
  FUN_00f0d160(param_1 + 0x371);
  FUN_008fcdb8(param_1 + 0x397,param_2 + 0x60);
  pbVar9 = (byte *)(param_1 + 0x39a);
  uVar15 = FUN_00cab978(param_2 + 0x30);
  FUN_008fa54c(pbVar9,uVar15);
  uVar13 = FUN_00cab944(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x39d) = uVar13;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar3,plVar7,1);
  FUN_00e70510(&local_b0);
  FUN_00e70e18(&local_b0,&DAT_01bb6d43,(int)param_1[0x39d]);
  FUN_00ab703c(0,0x432e0000,0x432e0000,plVar1,0,&local_b0,&DAT_01bee7fa,&DAT_03218ef8,0);
  plVar2 = param_1 + 0xfb;
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00b09144(0x3f000000,plVar1);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00b0914c(plVar1,1);
  puVar12 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  uVar10 = (ulong)(*pbVar9 >> 1);
  if ((*pbVar9 & 1) != 0) {
    uVar10 = param_1[0x39b];
  }
  pcVar16 = "glory_icon_small";
  if (uVar10 == 4) {
    iVar14 = FUN_0090d610(pbVar9,0,0xffffffffffffffff,"gold",4);
    pcVar16 = "ice_icon_small";
    if (iVar14 != 0) {
      pcVar16 = "glory_icon_small";
    }
  }
  FUN_00f0e548(plVar8,puVar12,pcVar16);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_down");
  FUN_00f13f08(0x41d00000,0x41600000,plVar5);
  *(byte *)(param_1 + 0x30c) = *(byte *)(param_1 + 0x30c) | 2;
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  fVar18 = 22.0;
  FUN_00f13f08(0x41200000,plVar6);
  fVar17 = (float)FUN_00f0e700(plVar5);
  FUN_00f0e700(plVar5);
  if ((*(float *)(param_1 + 0x317) != fVar17 * 0.5) ||
     (*(float *)((long)param_1 + 0x18bc) != fVar18 + -6.0)) {
    *(float *)(param_1 + 0x317) = fVar17 * 0.5;
    *(float *)((long)param_1 + 0x18bc) = fVar18 + -6.0;
    FUN_0091ada4(plVar6);
  }
  local_a0 = 0x3f000000;
  (**(code **)(param_1[0x30f] + 0x28))(plVar6,&local_a0);
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  FUN_00f0d75c(plVar7,param_2 + 0x88);
  fVar17 = (float)FUN_00f0e700(plVar5);
  fVar18 = *(float *)(param_1 + 0x335);
  if ((fVar18 != fVar17 + 4.0) || (fVar18 = *(float *)((long)param_1 + 0x19ac), fVar18 != 0.0)) {
    *(float *)(param_1 + 0x335) = fVar17 + 4.0;
    *(undefined4 *)((long)param_1 + 0x19ac) = 0;
    FUN_0091ada4(plVar7);
  }
  local_a0 = 0;
  (**(code **)(param_1[0x32d] + 0x28))(plVar7,&local_a0);
  FUN_00f0d4e0(plVar7);
  fVar17 = fVar18 * 0.5;
  FUN_00f01c54(plVar4,0,0,1,1);
  fVar17 = fVar17 - fVar18 * 0.5;
  if (*(float *)((long)param_1 + 0x1744) != fVar17) {
    *(float *)((long)param_1 + 0x1744) = fVar17;
    FUN_0091ada4(plVar4);
  }
  fVar17 = (float)FUN_00f01c54(plVar3,0,0,1,1);
  FUN_00f13e54(plVar1);
  fVar19 = fVar18 * -0.5;
  FUN_00f0d4e0(plVar7);
  fVar18 = (fVar19 - fVar18) + -4.0;
  if ((*(float *)(param_1 + 0x2d7) != fVar17 * -0.5) ||
     (*(float *)((long)param_1 + 0x16bc) != fVar18)) {
    *(float *)(param_1 + 0x2d7) = fVar17 * -0.5;
    *(float *)((long)param_1 + 0x16bc) = fVar18;
    FUN_0091ada4(plVar3);
  }
  local_a0 = 0;
  (**(code **)(param_1[0x2cf] + 0x28))(plVar3,&local_a0);
  fVar17 = (float)FUN_00f0eac0(plVar8);
  fVar18 = (float)FUN_00f0d4e0(plVar2);
  fVar19 = (174.0 - (fVar17 + fVar18 + 4.0)) * 0.5;
  fVar17 = (float)FUN_00f0d4e0(plVar2);
  fVar18 = (float)FUN_00f0eac0(plVar8);
  fVar18 = fVar18 * 0.5 + -87.0 + fVar19 + -6.0;
  if ((*(float *)(param_1 + 0x35b) != fVar18) || (*(float *)((long)param_1 + 0x1adc) != 3.0)) {
    *(float *)(param_1 + 0x35b) = fVar18;
    *(undefined4 *)((long)param_1 + 0x1adc) = 0x40400000;
    FUN_0091ada4(plVar8);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(param_1[0x353] + 0x28))(plVar8,&local_a0);
  fVar17 = ((174.0 - fVar17) * 0.5 - fVar19) + -4.0;
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  FUN_00ab74fc(fVar17,0,plVar1);
  uVar15 = FUN_00f13e54(plVar1);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar15,param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (*(long *)(lVar11 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b10c20(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_00b272f0();
  uVar2 = (ulong)*(uint *)(param_1 + 0x2410);
  if (*(uint *)(param_1 + 0x2410) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x2418) + lVar4) != 0) {
        uVar2 = FUN_00f02540();
        if ((uVar2 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x2418) + lVar4),1);
        }
        plVar1 = *(long **)(*(long *)(param_1 + 0x2418) + lVar4);
        if (plVar1 == (long *)0x0) {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x2418) + uVar5 * 8);
        }
        else {
          (**(code **)(*plVar1 + 8))();
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x2418) + lVar4);
        }
        *puVar3 = 0;
        uVar2 = (ulong)*(uint *)(param_1 + 0x2410);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x2418) != 0) {
    *(undefined4 *)(param_1 + 0x2410) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b10cc8(undefined1 param_1 [16],float param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  fVar15 = *(float *)((long)param_3 + 0x134);
  if (*(uint *)(param_3 + 0x1b3) != 0) {
    plVar5 = *(long **)(param_3[0x1b4] + (ulong)*(uint *)(param_3 + 0x1b3) * 8 + -8);
    fVar16 = *(float *)((long)plVar5 + 0x44);
    (**(code **)(*plVar5 + 0x50))();
    fVar15 = fVar15 + fVar16 + param_2;
  }
  uVar1 = *(uint *)(param_3 + 0x482);
  if (uVar1 != 0) {
    fVar16 = (float)(**(code **)(**(long **)param_3[0x483] + 0x48))();
    uVar6 = *(uint *)(param_3 + 0x482);
    if (uVar6 != 0) {
      uVar14 = 0;
      fVar16 = (*(float *)((long)param_3 + 0x14c) -
               (fVar16 * (float)uVar1 + (float)(uVar6 - 1) * 14.0)) * 0.5;
      uVar8 = 0;
      iVar9 = -1;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      do {
        fVar13 = (float)uVar14;
        plVar5 = *(long **)(param_3[0x483] + (ulong)(uVar6 + iVar9) * 8);
        if (plVar5 != (long *)0x0) {
          fVar10 = (float)(**(code **)(*plVar5 + 0x48))(plVar5);
          fVar11 = (float)(**(code **)(*plVar5 + 0x48))(plVar5);
          fVar10 = fVar16 + (fVar10 + 14.0) * (float)(uVar8 & 0xffffffff) + fVar11 * 0.5;
          plVar5 = *(long **)(param_3[0x483] + uVar8 * 8);
          (**(code **)(*plVar5 + 0x48))(plVar5);
          fVar13 = fVar15 + fVar13 * 0.5;
          uVar14 = (ulong)(uint)fVar13;
          fVar13 = fVar13 + 80.0;
          if ((*(float *)(plVar5 + 8) != fVar10) ||
             (uVar14 = (ulong)(uint)*(float *)((long)plVar5 + 0x44),
             *(float *)((long)plVar5 + 0x44) != fVar13)) {
            *(float *)(plVar5 + 8) = fVar10;
            *(float *)((long)plVar5 + 0x44) = fVar13;
            FUN_0091ada4(plVar5);
          }
          local_80 = 0x3f0000003f000000;
          (**(code **)(*plVar5 + 0x28))(plVar5,&local_80);
          uVar6 = *(uint *)(param_3 + 0x482);
        }
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (uVar8 < uVar6);
    }
  }
  fVar15 = *(float *)((long)param_3 + 0x14c);
  lVar3 = param_3[0x2c];
  lVar4 = param_3[0x29];
  plVar5 = param_3 + 0x2e;
  fVar16 = fVar15 + *(float *)(param_3 + 0x26) + *(float *)(param_3 + 0x26);
  FUN_00f01c54(param_3 + 0x1a2,0,0,1,1);
  FUN_00b16840((int)lVar4,fVar16,
               fVar15 + *(float *)((long)param_3 + 0x134) + *(float *)((long)param_3 + 0x134) +
               -40.0,plVar5,(int)lVar3,0);
  FUN_00b18a7c((int)param_3[0x26],*(undefined4 *)((long)param_3 + 0x134),DAT_03218ef8,_DAT_03218efc,
               plVar5,param_3 + 0x1a2);
  uVar12 = FUN_00f01c54(plVar5,0,0,1,1);
  FUN_00f01c54(plVar5,0,0,1,1);
  FUN_00f13f08(uVar12,param_3);
  if (((*(byte *)((long)param_3 + 0x24a4) >> 2 & 1) == 0) || (3 < *(uint *)((long)param_3 + 0x2544))
     ) goto LAB_00b11094;
  plVar5 = param_3 + 0x484;
  switch(*(uint *)((long)param_3 + 0x2544)) {
  case 0:
    fVar15 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar13 = *(float *)(param_3 + 0x38);
    pcVar7 = *(code **)(*param_3 + 0x48);
    fVar15 = -(fVar15 * fVar13);
    break;
  case 1:
    fVar15 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar13 = 1.0 - *(float *)(param_3 + 0x38);
    fVar15 = fVar15 * fVar13;
    fVar16 = (float)FUN_00f0eac0(param_3 + 0x164);
    fVar15 = fVar15 - fVar16;
    pcVar7 = *(code **)(*param_3 + 0x48);
    break;
  case 2:
    fVar15 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar13 = *(float *)(param_3 + 0x38);
    fVar15 = -(fVar15 * fVar13);
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar16 = *(float *)((long)param_3 + 0x1c4);
    fVar10 = *(float *)(param_3 + 0x48c);
    goto LAB_00b10ffc;
  case 3:
    fVar15 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar13 = 1.0 - *(float *)(param_3 + 0x38);
    fVar15 = fVar15 * fVar13;
    fVar16 = (float)FUN_00f0eac0(param_3 + 0x164);
    fVar15 = fVar15 - fVar16;
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar16 = *(float *)((long)param_3 + 0x1c4);
    fVar10 = *(float *)(param_3 + 0x48c);
LAB_00b10ffc:
    fVar13 = fVar13 * (1.0 - fVar16);
    if (fVar10 == fVar15) goto LAB_00b1105c;
    goto LAB_00b11068;
  }
  (*pcVar7)(param_3);
  fVar13 = -(fVar13 * *(float *)((long)param_3 + 0x1c4));
  if (*(float *)(param_3 + 0x48c) == fVar15) {
LAB_00b1105c:
    if (*(float *)((long)param_3 + 0x2464) != fVar13) goto LAB_00b11068;
  }
  else {
LAB_00b11068:
    *(float *)(param_3 + 0x48c) = fVar15;
    *(float *)((long)param_3 + 0x2464) = fVar13;
    FUN_0091ada4(plVar5);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_80);
LAB_00b11094:
  FUN_00b2760c(param_3);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

