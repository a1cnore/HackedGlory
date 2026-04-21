// functions/00ba5 — 11 functions
#include "libGameKindred.h"




void FUN_00ba5060(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ecb80;
  param_1[2] = &PTR_FUN_027ecbe0;
  FUN_0099cedc(param_1 + 0x13);
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    operator_delete((void *)param_1[0xd]);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027e96d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00ba510c(long param_1)

{
  FUN_00ba4458(param_1 + -0x368);
  return;
}




void FUN_00ba5114(void *param_1)

{
  FUN_00ba4458();
  operator_delete(param_1);
  return;
}




void FUN_00ba5138(long param_1)

{
  FUN_00ba4458((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_00ba5160(undefined8 param_1)

{
  FUN_00b8e854();
  FUN_00ba400c(param_1);
  return;
}




void FUN_00ba5184(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (((param_2 & 1) != 0) && (uVar1 = FUN_009580c4(), (uVar1 & 1) != 0)) {
    lVar2 = FUN_009580b8();
    FUN_009658c8(lVar2 + 0x18);
  }
  uVar1 = FUN_00ba5200(param_1);
  if ((uVar1 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      FUN_00bd04cc(param_1 + 0x654a8);
    }
    else {
      FUN_00bd033c();
    }
  }
  if ((*(byte *)(param_1 + 0x404) >> 2 & 1) == 0) {
    return;
  }
  FUN_00b4972c(param_1 + 0x380,param_2 & 1);
  return;
}




bool FUN_00ba5200(void)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  char *__s2;
  char *pcVar7;
  void *__s1;
  
  uVar5 = FUN_009580c4();
  bVar3 = false;
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_009580b8(0);
    bVar2 = *(byte *)(lVar6 + 0x5478);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar6 + 0x5480);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(lVar6 + 0x5488);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar6 + 0x5479);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar7 = (char *)(lVar6 + 0x5479);
          lVar6 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar7 != *__s2) goto LAB_00ba52a8;
            pcVar7 = pcVar7 + 1;
            lVar6 = lVar6 + 1;
            __s2 = __s2 + 1;
          } while (lVar6 != 0);
        }
      }
      else if (__n != 0) {
        iVar4 = memcmp(__s1,__s2,__n);
        return iVar4 != 0;
      }
      bVar3 = false;
    }
    else {
LAB_00ba52a8:
      bVar3 = true;
    }
  }
  return bVar3;
}




void FUN_00ba52d0(void)

{
  return;
}




void FUN_00ba52d4(void)

{
  return;
}




void FUN_00ba52d8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | (param_2 & 1) << 1;
  FUN_00b4bb0c(param_1 + 0x380);
  return;
}




void FUN_00ba52f8(long param_1)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  long *plVar4;
  long *plVar5;
  uint *puVar6;
  float *pfVar7;
  undefined **ppuVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_d0;
  float fStack_cc;
  float local_c4;
  float local_c0;
  float fStack_bc;
  ulong local_b8;
  long local_b0;
  
  lVar9 = tpidr_el0;
  local_b0 = *(long *)(lVar9 + 0x28);
  uVar10 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar10 & 1,&fStack_bc,&local_c0,&local_c4);
  uVar11 = FUN_0092ea9c();
  fVar19 = local_c0;
  fVar18 = fStack_bc - local_c4;
  FUN_00f13f08(fVar18,local_c0,param_1 + 0x380);
  local_b8 = (ulong)(uint)-local_c4;
  FUN_00a9fcd4(param_1 + 0x380,&local_b8);
  FUN_00f13f08(fVar18,local_c0,param_1 + 0x65300);
  pfVar2 = (float *)(param_1 + 0x7a350);
  if (*(float *)(param_1 + 0x65344) != *pfVar2) {
    *(float *)(param_1 + 0x65344) = *pfVar2;
    FUN_0091ada4(param_1 + 0x65300);
  }
  FUN_00f13f08(fVar18,fVar18 * 0.75,param_1 + 0x653b8);
  fVar16 = *(float *)(param_1 + 0x65400);
  if ((fVar16 != 1.3) || (fVar16 = *(float *)(param_1 + 0x65404), fVar16 != 1.3)) {
    *(undefined8 *)(param_1 + 0x65400) = 0x3fa666663fa66666;
    FUN_0091ada4(param_1 + 0x653b8);
  }
  lVar12 = param_1 + 0x79dc0;
  fVar14 = (float)FUN_00f01c54(lVar12,0,0,1,1);
  fVar14 = (fVar18 + -48.0) - fVar14;
  FUN_00f01c54(lVar12,0,0,1,1);
  fVar16 = fVar16 * 0.5 + 32.0;
  if ((*(float *)(param_1 + 0x79e00) != fVar14) || (*(float *)(param_1 + 0x79e04) != fVar16)) {
    *(float *)(param_1 + 0x79e00) = fVar14;
    *(float *)(param_1 + 0x79e04) = fVar16;
    FUN_0091ada4(lVar12);
  }
  FUN_00f13f08(fVar18,local_c0 - *pfVar2,*(undefined8 *)(param_1 + 0x654b0));
  lVar12 = *(long *)(param_1 + 0x654b0);
  uVar15 = *(undefined8 *)(param_1 + 0x65660);
  fVar16 = -(float)uVar15;
  fVar14 = -(float)((ulong)uVar15 >> 0x20);
  uVar15 = CONCAT44(fVar14,fVar16);
  if ((*(float *)(lVar12 + 0x40) != fVar16) || (*(float *)(lVar12 + 0x44) != fVar14)) {
    *(undefined8 *)(lVar12 + 0x40) = uVar15;
    FUN_0091ada4();
    uVar15 = *(undefined8 *)(param_1 + 0x65660);
    uVar15 = CONCAT44(-(float)((ulong)uVar15 >> 0x20),-(float)uVar15);
  }
  if ((*(float *)(param_1 + 0x655a8) != (float)uVar15) ||
     (*(float *)(param_1 + 0x655ac) != (float)((ulong)uVar15 >> 0x20))) {
    *(undefined8 *)(param_1 + 0x655a8) = uVar15;
    FUN_0091ada4(param_1 + 0x65568);
  }
  fVar16 = local_c0;
  FUN_00f13f08(fVar18,param_1 + 0x65568);
  pfVar3 = (float *)(param_1 + 0x673a0);
  if ((*pfVar3 != 0.0) || (*(float *)(param_1 + 0x673a4) != 0.0)) {
    pfVar3[0] = 0.0;
    pfVar3[1] = 0.0;
    FUN_0091ada4(param_1 + 0x67360);
  }
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar11 & 1) == 0) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  plVar4 = (long *)(param_1 + 0x657b8);
  FUN_00f0d378(plVar4,*ppuVar8);
  FUN_00f0dac8(plVar4,3);
  FUN_00f0dad0(fVar18 + -128.0,plVar4,1);
  pfVar3 = (float *)(param_1 + 0x657f8);
  if ((*pfVar3 != 0.0) || (*(float *)(param_1 + 0x657fc) != 0.0)) {
    pfVar3[0] = 0.0;
    pfVar3[1] = 0.0;
    FUN_0091ada4(plVar4);
  }
  fVar17 = fVar18 * 0.5;
  local_b8 = 0x3f000000;
  fVar19 = fVar19 * 0.5;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  fVar14 = *(float *)(param_1 + 0x657fc);
  plVar5 = (long *)(param_1 + 0x658e8);
  FUN_00f0d4e0(plVar4);
  fVar14 = fVar14 + fVar16;
  fVar16 = fVar14 + 64.0;
  if ((*(float *)(param_1 + 0x65928) != 0.0) ||
     (fVar14 = *(float *)(param_1 + 0x6592c), fVar14 != fVar16)) {
    *(float *)(param_1 + 0x65928) = 0.0;
    *(float *)(param_1 + 0x6592c) = fVar16;
    FUN_0091ada4(plVar5);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_b8);
  plVar4 = (long *)(param_1 + 0x65730);
  FUN_00f01c54(plVar4,0,0,1,1);
  fVar16 = fVar19 + fVar14 * -0.5 + -300.0;
  if ((*(float *)(param_1 + 0x65770) != fVar17) || (*(float *)(param_1 + 0x65774) != fVar16)) {
    *(float *)(param_1 + 0x65770) = fVar17;
    *(float *)(param_1 + 0x65774) = fVar16;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  plVar4 = (long *)(param_1 + 0x66ea8);
  fVar16 = fVar17 + -550.0;
  FUN_00f13f08(plVar4);
  pfVar3 = (float *)(param_1 + 0x66eec);
  if ((*(float *)(param_1 + 0x66ee8) != fVar17) || (*pfVar3 != fVar19)) {
    *(float *)(param_1 + 0x66ee8) = fVar17;
    *pfVar3 = fVar19;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  plVar4 = (long *)(param_1 + 0x66f98);
  if ((*(float *)(param_1 + 0x66fd8) != fVar16 + 156.0) || (*(float *)(param_1 + 0x66fdc) != fVar19)
     ) {
    *(float *)(param_1 + 0x66fd8) = fVar16 + 156.0;
    *(float *)(param_1 + 0x66fdc) = fVar19;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  plVar4 = (long *)(param_1 + 0x67088);
  if ((*(float *)(param_1 + 0x670c8) != fVar16 + 234.0) || (*(float *)(param_1 + 0x670cc) != fVar19)
     ) {
    *(float *)(param_1 + 0x670c8) = fVar16 + 234.0;
    *(float *)(param_1 + 0x670cc) = fVar19;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  FUN_00f0db64(0x44410000,0,0x3f800000,plVar4);
  puVar6 = (uint *)(param_1 + 0x67988);
  uVar10 = *puVar6;
  if (uVar10 != 0) {
    uVar13 = 0;
    do {
      lVar12 = *(long *)(*(long *)(param_1 + 0x67990) + (ulong)uVar13 * 8);
      if (lVar12 == 0) break;
      fVar14 = (float)uVar13 * 192.0 + *pfVar3 + 150.0;
      if ((*(float *)(lVar12 + 0x40) != fVar16) || (*(float *)(lVar12 + 0x44) != fVar14)) {
        *(float *)(lVar12 + 0x40) = fVar16;
        *(float *)(lVar12 + 0x44) = fVar14;
        FUN_0091ada4(lVar12);
      }
      if (uVar13 == 0) {
        *(uint *)(lVar12 + 0x10c) = *(uint *)(lVar12 + 0x10c) & 0xfffffffb;
      }
      else {
        if (*(float *)(lVar12 + 200) != 94.0) {
          *(undefined4 *)(lVar12 + 200) = 0x42bc0000;
          FUN_0091ada4(lVar12 + 0x88);
        }
        FUN_00f13f08(0x44640000,0x40000000,lVar12 + 0x88);
      }
      if ((*(float *)(lVar12 + 0x1b8) != 156.0) || (*(float *)(lVar12 + 0x1bc) != 96.0)) {
        *(undefined8 *)(lVar12 + 0x1b8) = 0x42c00000431c0000;
        FUN_0091ada4(lVar12 + 0x178);
      }
      local_b8 = 0x3f0000003f000000;
      (**(code **)(*(long *)(lVar12 + 0x178) + 0x28))(lVar12 + 0x178,&local_b8);
      lVar1 = lVar12 + 0x268;
      FUN_00f0db64(0x43680000,0,0x3f800000,lVar1);
      if ((*(float *)(lVar12 + 0x2a8) != 234.0) || (*(float *)(lVar12 + 0x2ac) != 104.0)) {
        *(undefined8 *)(lVar12 + 0x2a8) = 0x42d00000436a0000;
        FUN_0091ada4(lVar1);
      }
      local_b8 = 0x3f80000000000000;
      (**(code **)(*(long *)(lVar12 + 0x268) + 0x28))(lVar1,&local_b8);
      lVar1 = lVar12 + 0x398;
      FUN_00f0db64(0x43d80000,0,0x3f800000,lVar1);
      if ((*(float *)(lVar12 + 0x3d8) != 234.0) || (*(float *)(lVar12 + 0x3dc) != 96.0)) {
        *(undefined8 *)(lVar12 + 0x3d8) = 0x42c00000436a0000;
        FUN_0091ada4(lVar1);
      }
      local_b8 = 0;
      (**(code **)(*(long *)(lVar12 + 0x398) + 0x28))(lVar1,&local_b8);
      plVar4 = (long *)(lVar12 + 0x4c8);
      fVar14 = (float)FUN_00f13e54(plVar4);
      fVar14 = fVar14 * -0.5 + 1006.0;
      if ((*(float *)(lVar12 + 0x508) != fVar14) || (*(float *)(lVar12 + 0x50c) != 96.0)) {
        *(float *)(lVar12 + 0x508) = fVar14;
        *(undefined4 *)(lVar12 + 0x50c) = 0x42c00000;
        FUN_0091ada4(plVar4);
      }
      local_b8 = 0x3f0000003f000000;
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
      uVar10 = *puVar6;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar10);
  }
  lVar12 = param_1 + 0x671b8;
  fVar19 = fVar19 + 75.0;
  if ((*(float *)(param_1 + 0x671f8) != fVar16) || (*(float *)(param_1 + 0x671fc) != fVar19)) {
    *(float *)(param_1 + 0x671f8) = fVar16;
    *(float *)(param_1 + 0x671fc) = fVar19;
    FUN_0091ada4(lVar12);
    uVar10 = *puVar6;
  }
  fVar14 = (float)uVar10 * 192.0;
  FUN_00f13f08(0x44898000,lVar12);
  lVar1 = param_1 + 0x67898;
  FUN_00f0e700(lVar12);
  pfVar3 = (float *)(param_1 + 0x678dc);
  if ((*(float *)(param_1 + 0x678d8) != fVar16) || (*pfVar3 != fVar19 + fVar14)) {
    *(float *)(param_1 + 0x678d8) = fVar16;
    *pfVar3 = fVar19 + fVar14;
    FUN_0091ada4(lVar1);
  }
  fVar16 = 256.0;
  FUN_00f13f08(0x44898000,lVar1);
  fVar19 = local_c0;
  fVar14 = *pfVar2;
  fVar17 = *pfVar3;
  FUN_00f0e700(lVar1);
  if (fVar19 <= fVar17 + fVar16) {
    fVar19 = fVar17 + fVar16;
  }
  FUN_00ed02d8(fVar18,fVar14 + fVar19,param_1 + 0x67360);
  FUN_00f13f08(0x449c4000,0x43160000,param_1 + 0x69b08);
  pfVar3 = (float *)(param_1 + 0x69c38);
  plVar4 = (long *)(param_1 + 0x69bf8);
  if ((*pfVar3 != 80.0) || (*(float *)(param_1 + 0x69c3c) != 75.0)) {
    pfVar3[0] = 80.0;
    pfVar3[1] = 75.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  pfVar3 = (float *)(param_1 + 0x69d28);
  plVar4 = (long *)(param_1 + 0x69ce8);
  if ((*pfVar3 != 160.0) || (*(float *)(param_1 + 0x69d2c) != 75.0)) {
    pfVar3[0] = 160.0;
    pfVar3[1] = 75.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  fVar19 = 150.0;
  if (*(float *)(param_1 + 0x6a03c) != 150.0) {
    *(float *)(param_1 + 0x6a03c) = 150.0;
    fVar19 = 150.0;
    FUN_0091ada4(param_1 + 0x69ff8);
  }
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar11 & 1) == 0) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar12 = param_1 + 0x6a1b0;
  FUN_00f0d378(lVar12,*ppuVar8);
  pfVar3 = (float *)(param_1 + 0x6a1f0);
  if ((*pfVar3 != 160.0) || (fVar19 = 56.0, *(float *)(param_1 + 0x6a1f4) != 56.0)) {
    pfVar3[0] = 160.0;
    pfVar3[1] = 56.0;
    FUN_0091ada4(lVar12);
  }
  FUN_00f0dad0(0x44688000,lVar12,1);
  pfVar3 = (float *)(param_1 + 0x6a0c0);
  plVar4 = (long *)(param_1 + 0x6a080);
  if ((*pfVar3 != 80.0) || (fVar19 = 42.0, *(float *)(param_1 + 0x6a0c4) != 42.0)) {
    pfVar3[0] = 80.0;
    pfVar3[1] = 42.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  FUN_00f0d4e0(lVar12);
  fVar19 = fVar19 + 48.0 + 56.0;
  if ((*(float *)(param_1 + 0x6a320) != 160.0) || (*(float *)(param_1 + 0x6a324) != fVar19)) {
    *(float *)(param_1 + 0x6a320) = 160.0;
    *(float *)(param_1 + 0x6a324) = fVar19;
    FUN_0091ada4(param_1 + 0x6a2e0);
  }
  FUN_00abc380(0x44688000,0xbf800000,param_1 + 0x6a2e0);
  fVar19 = fVar19 + 150.0;
  if ((*(float *)(param_1 + 0x6c018) != 160.0) || (*(float *)(param_1 + 0x6c01c) != fVar19)) {
    *(float *)(param_1 + 0x6c018) = 160.0;
    *(float *)(param_1 + 0x6c01c) = fVar19;
    FUN_0091ada4(param_1 + 0x6bfd8);
  }
  FUN_00abc380(0x44688000,0xbf800000,param_1 + 0x6bfd8);
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar11 & 1) == 0) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar12 = param_1 + 0x6de00;
  fVar19 = fVar19 + 130.0;
  FUN_00f0d378(lVar12,*ppuVar8);
  if ((*(float *)(param_1 + 0x6de40) != 160.0) || (*(float *)(param_1 + 0x6de44) != fVar19)) {
    *(float *)(param_1 + 0x6de40) = 160.0;
    *(float *)(param_1 + 0x6de44) = fVar19;
    FUN_0091ada4(lVar12);
  }
  FUN_00f0dad0(0x44688000,lVar12,1);
  plVar4 = (long *)(param_1 + 0x6dcd0);
  fVar18 = *(float *)(param_1 + 0x6dd10);
  if ((fVar18 != 80.0) || (fVar18 = *(float *)(param_1 + 0x6dd14), fVar18 != fVar19 + -14.0)) {
    *(float *)(param_1 + 0x6dd10) = 80.0;
    *(float *)(param_1 + 0x6dd14) = fVar19 + -14.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  FUN_00f0d4e0(lVar12);
  fVar19 = fVar19 + fVar18 + 48.0;
  if ((*(float *)(param_1 + 0x6df70) != 160.0) || (*(float *)(param_1 + 0x6df74) != fVar19)) {
    *(float *)(param_1 + 0x6df70) = 160.0;
    *(float *)(param_1 + 0x6df74) = fVar19;
    FUN_0091ada4(param_1 + 0x6df30);
  }
  FUN_00abc380(0x44688000,0xbf800000,param_1 + 0x6df30);
  fVar19 = fVar19 + 150.0;
  if ((*(float *)(param_1 + 0x6fc68) != 160.0) || (*(float *)(param_1 + 0x6fc6c) != fVar19)) {
    *(float *)(param_1 + 0x6fc68) = 160.0;
    *(float *)(param_1 + 0x6fc6c) = fVar19;
    FUN_0091ada4(param_1 + 0x6fc28);
  }
  FUN_00abc380(0x44688000,0xbf800000,param_1 + 0x6fc28);
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar11 & 1) == 0) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar12 = param_1 + 0x71a50;
  fVar19 = fVar19 + 130.0;
  FUN_00f0d378(lVar12,*ppuVar8);
  if ((*(float *)(param_1 + 0x71a90) != 160.0) || (*(float *)(param_1 + 0x71a94) != fVar19)) {
    *(float *)(param_1 + 0x71a90) = 160.0;
    *(float *)(param_1 + 0x71a94) = fVar19;
    FUN_0091ada4(lVar12);
  }
  FUN_00f0dad0(0x44688000,lVar12,1);
  fVar18 = *(float *)(param_1 + 0x71960);
  plVar4 = (long *)(param_1 + 0x71920);
  if ((fVar18 != 80.0) || (fVar18 = *(float *)(param_1 + 0x71964), fVar18 != fVar19 + -14.0)) {
    *(float *)(param_1 + 0x71960) = 80.0;
    *(float *)(param_1 + 0x71964) = fVar19 + -14.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  FUN_00f0d4e0(lVar12);
  fVar19 = fVar19 + fVar18 + 48.0;
  if ((*(float *)(param_1 + 0x71bc0) != 160.0) || (*(float *)(param_1 + 0x71bc4) != fVar19)) {
    *(float *)(param_1 + 0x71bc0) = 160.0;
    *(float *)(param_1 + 0x71bc4) = fVar19;
    FUN_0091ada4(param_1 + 0x71b80);
  }
  FUN_00abc380(0x44688000,0xbf800000,param_1 + 0x71b80);
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar11 & 1) == 0) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar12 = param_1 + 0x739a8;
  fVar19 = fVar19 + 130.0;
  FUN_00f0d378(lVar12,*ppuVar8);
  if ((*(float *)(param_1 + 0x739e8) != 160.0) || (*(float *)(param_1 + 0x739ec) != fVar19)) {
    *(float *)(param_1 + 0x739e8) = 160.0;
    *(float *)(param_1 + 0x739ec) = fVar19;
    FUN_0091ada4(lVar12);
  }
  FUN_00f0dad0(0x44688000,lVar12,1);
  fVar18 = *(float *)(param_1 + 0x738b8);
  plVar4 = (long *)(param_1 + 0x73878);
  if ((fVar18 != 80.0) || (fVar18 = *(float *)(param_1 + 0x738bc), fVar18 != fVar19 + -14.0)) {
    *(float *)(param_1 + 0x738b8) = 80.0;
    *(float *)(param_1 + 0x738bc) = fVar19 + -14.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  FUN_00f0d4e0(lVar12);
  lVar12 = param_1 + 0x73ad8;
  fVar19 = fVar19 + fVar18 + 48.0;
  local_d0 = (float)FUN_00f01fcc(lVar12,0,0,1,1);
  fStack_cc = fVar18 + 20.0;
  if (local_d0 <= 312.5) {
    local_d0 = 312.5;
  }
  FUN_00f13f18(lVar12,&local_d0);
  fVar18 = fVar19 + -10.0;
  if ((*(float *)(param_1 + 0x73b18) != 160.0) || (*(float *)(param_1 + 0x73b1c) != fVar18)) {
    *(float *)(param_1 + 0x73b18) = 160.0;
    *(float *)(param_1 + 0x73b1c) = fVar18;
    FUN_0091ada4(lVar12);
  }
  pfVar3 = (float *)(param_1 + 0x73bd0);
  plVar4 = (long *)(param_1 + 0x73b90);
  if ((*pfVar3 != 0.0) || (*(float *)(param_1 + 0x73bd4) != 54.0)) {
    pfVar3[0] = 0.0;
    pfVar3[1] = 54.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f80000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  pfVar7 = (float *)(param_1 + 0x73cc0);
  plVar4 = (long *)(param_1 + 0x73c80);
  fVar16 = *pfVar3 + 44.0 + 10.0;
  if ((*pfVar7 != fVar16) || (*(float *)(param_1 + 0x73cc4) != 62.0)) {
    *pfVar7 = fVar16;
    *(float *)(param_1 + 0x73cc4) = 62.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f80000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  fVar17 = *pfVar7;
  fVar16 = (float)FUN_00f01c20(plVar4);
  fVar14 = 631.0;
  lVar12 = param_1 + 0x73db0;
  fVar16 = fVar17 + fVar16 + 20.0;
  if (fVar16 <= 631.0) {
    fVar16 = 631.0;
  }
  local_d0 = (float)FUN_00f01fcc(lVar12,0,0,1,1);
  if (local_d0 <= 312.5) {
    local_d0 = 312.5;
  }
  fStack_cc = fVar14 + 20.0;
  FUN_00f13f18(lVar12,&local_d0);
  if ((*(float *)(param_1 + 0x73df0) != fVar16) || (*(float *)(param_1 + 0x73df4) != fVar18)) {
    *(float *)(param_1 + 0x73df0) = fVar16;
    *(float *)(param_1 + 0x73df4) = fVar18;
    FUN_0091ada4(lVar12);
  }
  pfVar3 = (float *)(param_1 + 0x73ea8);
  plVar4 = (long *)(param_1 + 0x73e68);
  if ((*pfVar3 != 0.0) || (*(float *)(param_1 + 0x73eac) != 54.0)) {
    pfVar3[0] = 0.0;
    pfVar3[1] = 54.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f80000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  plVar4 = (long *)(param_1 + 0x73f58);
  fVar16 = *(float *)(param_1 + 0x73f98);
  fVar18 = *pfVar3 + 44.0 + 10.0;
  if ((fVar16 != fVar18) || (fVar16 = *(float *)(param_1 + 0x73f9c), fVar16 != 62.0)) {
    *(float *)(param_1 + 0x73f98) = fVar18;
    *(float *)(param_1 + 0x73f9c) = 62.0;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f80000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  plVar4 = (long *)(param_1 + 0x74110);
  fVar18 = (float)FUN_00f13e54(plVar4);
  fVar17 = *(float *)(param_1 + 0x76cd4);
  lVar12 = param_1 + 0x76c90;
  FUN_00f13e54(lVar12);
  fVar14 = fVar16 * 0.5;
  FUN_00f13e54(plVar4);
  pfVar3 = (float *)(param_1 + 0x74150);
  fVar16 = (fVar17 + fVar14) - fVar16 * 0.5;
  if ((*pfVar3 != fVar18 * 0.5) || (*(float *)(param_1 + 0x74154) != fVar16)) {
    *pfVar3 = fVar18 * 0.5;
    *(float *)(param_1 + 0x74154) = fVar16;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  fVar14 = *pfVar3;
  fVar18 = (float)FUN_00f13e54(plVar4);
  fVar16 = (float)FUN_00f13e54(param_1 + 0x756d0);
  fVar18 = fVar14 + fVar18 * 0.5 + fVar16 * 0.5 + 32.0;
  if (*(float *)(param_1 + 0x75710) != fVar18) {
    *(float *)(param_1 + 0x75710) = fVar18;
    FUN_0091ada4(param_1 + 0x756d0);
  }
  lVar1 = param_1 + 0x78528;
  fVar18 = (float)FUN_00f13e54(lVar1);
  pfVar3 = (float *)(param_1 + 0x78568);
  fVar16 = *pfVar3;
  fVar18 = fVar18 * -0.5 + 1250.0 + -80.0;
  if (fVar16 != fVar18) {
    *pfVar3 = fVar18;
    FUN_0091ada4(lVar1);
    fVar16 = *pfVar3;
  }
  fVar18 = (float)FUN_00f13e54(lVar12);
  fVar18 = (fVar16 - fVar18) + -16.0;
  if (*(float *)(param_1 + 0x76cd0) != fVar18) {
    *(float *)(param_1 + 0x76cd0) = fVar18;
    FUN_0091ada4(lVar12);
  }
  fVar14 = *pfVar3;
  fVar19 = fVar19 + 210.0;
  fVar18 = (float)FUN_00f13e54(lVar1);
  fVar16 = *(float *)(param_1 + 0x740c8);
  fVar18 = (1250.0 - (fVar14 + fVar18 * 0.5)) * 0.5;
  if ((fVar16 != fVar18) || (fVar16 = *(float *)(param_1 + 0x740cc), fVar16 != fVar19)) {
    *(float *)(param_1 + 0x740c8) = fVar18;
    *(float *)(param_1 + 0x740cc) = fVar19;
    FUN_0091ada4(param_1 + 0x74088);
  }
  FUN_00f01c54(param_1 + 0x69ff8,0,0,1,1);
  lVar12 = param_1 + 0x69e18;
  FUN_00f13f08(0x449c4000,fVar16 + 160.0 + -240.0,lVar12);
  fVar19 = 150.0;
  if (*(float *)(param_1 + 0x69e5c) != 150.0) {
    *(float *)(param_1 + 0x69e5c) = 150.0;
    fVar19 = 150.0;
    FUN_0091ada4(lVar12);
  }
  FUN_00f0e700(lVar12);
  if (*(float *)(param_1 + 0x69f4c) != fVar19 + 150.0) {
    *(float *)(param_1 + 0x69f4c) = fVar19 + 150.0;
    FUN_0091ada4(param_1 + 0x69f08);
  }
  FUN_00f13f08(0x449c4000,0x43700000,param_1 + 0x69f08);
  fVar19 = -0.4;
  pfVar3 = (float *)(param_1 + 0x69ac4);
  if ((*(float *)(param_1 + 0x69ac0) != -625.0) || (fVar19 = *pfVar3, fVar19 != local_c0 * -0.4)) {
    *(float *)(param_1 + 0x69ac0) = -625.0;
    *pfVar3 = local_c0 * -0.4;
    FUN_0091ada4(param_1 + 0x69a80);
  }
  uVar15 = FUN_00ed0470(param_1 + 0x69548,1,0,1,1);
  FUN_00ed02d8(uVar15,*pfVar2 + (fVar19 - (local_c0 - (local_c0 * 0.5 + *pfVar3))),param_1 + 0x69548
              );
  if (*(long *)(lVar9 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

