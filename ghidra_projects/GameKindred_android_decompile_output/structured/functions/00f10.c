// functions/00f10 — 37 functions
#include "libGameKindred.h"




undefined4 FUN_00f10374(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + (long)param_2 * 8 + 0xe0);
  if (lVar2 != 0) {
    uVar1 = NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
    return uVar1;
  }
  return 0;
}




void FUN_00f103a0(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 300) + *(float *)(param_1 + 0x130) + *(float *)(param_1 + 0x134);
  fVar3 = *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x140);
  uVar1 = CONCAT44((int)fVar3,(int)fVar2);
  *(float *)(param_1 + 0x90) = fVar2;
  *(float *)(param_1 + 0x94) = fVar3;
  FUN_00f13f68(param_1,uVar1);
  FUN_00f13fa0(param_1,uVar1);
  FUN_00f13fc4(param_1,uVar1);
  FUN_00f14070(param_1,&DAT_03211038);
  FUN_0091ada4(param_1);
  return;
}




void FUN_00f10428(void)

{
  FUN_00f0ff74();
  return;
}




void FUN_00f1051c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  memmove((void *)(param_1 + 0xe0),(void *)(param_2 + 0xe0),0x48);
  uVar4 = *(undefined8 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined8 *)(param_1 + 300) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  uVar2 = *(uint *)(param_1 + 0x144);
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  uVar1 = *(uint *)(param_2 + 0x144) & 0x1ff;
  *(uint *)(param_1 + 0x144) = uVar2 & 0xfffffe00 | uVar1;
  uVar1 = uVar1 | (*(uint *)(param_2 + 0x144) >> 9 & 0x1ff) << 9;
  *(uint *)(param_1 + 0x144) = uVar2 & 0xfffc0000 | uVar1;
  uVar3 = *(uint *)(param_2 + 0x144);
  *(undefined2 *)(param_1 + 0x148) = *(undefined2 *)(param_1 + 0x148);
  *(uint *)(param_1 + 0x144) = uVar2 & 0xf8000000 | uVar1 | uVar3 & 0x7fc0000;
  FUN_00f103a0(param_1);
  return;
}




void FUN_00f105b8(long param_1)

{
  FUN_00f0a948(param_1 + 0xd0);
  memset((void *)(param_1 + 0xe0),0,0x48);
  return;
}




void FUN_00f105ec(long param_1,undefined4 *param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x128) = *param_2;
  *(ushort *)(param_1 + 0x148) =
       *(ushort *)(param_1 + 0x148) & 0xe0ff | (ushort)(((ulong)(param_3 & 0x1f) << 0x28) >> 0x20);
  return;
}




long FUN_00f10618(long param_1)

{
  return param_1 + 0x128;
}




void FUN_00f10620(long param_1,uint param_2)

{
  *(ushort *)(param_1 + 0x148) =
       *(ushort *)(param_1 + 0x148) & 0xe0ff | (ushort)(((ulong)(param_2 & 0x1f) << 0x28) >> 0x20);
  return;
}




void FUN_00f10644(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7)

{
  *(undefined4 *)(param_7 + 300) = param_1;
  *(undefined4 *)(param_7 + 0x130) = param_2;
  *(undefined4 *)(param_7 + 0x134) = param_3;
  *(undefined4 *)(param_7 + 0x138) = param_4;
  *(undefined4 *)(param_7 + 0x13c) = param_5;
  *(undefined4 *)(param_7 + 0x140) = param_6;
  FUN_00f103a0();
  return;
}




void FUN_00f10660(float param_1,float param_2,long param_3)

{
  *(float *)(param_3 + 0x130) = (param_1 - *(float *)(param_3 + 300)) - *(float *)(param_3 + 0x134);
  *(float *)(param_3 + 0x13c) =
       (param_2 - *(float *)(param_3 + 0x138)) - *(float *)(param_3 + 0x140);
  FUN_00f103a0();
  return;
}




undefined4 FUN_00f1068c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_ucvtf((uint)*(byte *)(param_1 + 0x148));
  return uVar1;
}




void FUN_00f10698(float param_1,long param_2)

{
  *(ushort *)(param_2 + 0x148) =
       *(ushort *)(param_2 + 0x148) & 0xe000 | (ushort)(int)(param_1 * 255.0) | 0x500;
  return;
}




void FUN_00f106d0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfb | (param_2 & 1) << 2;
  return;
}




void FUN_00f106e8(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint6 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float *pfVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  float fVar18;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0xd0) != 0) {
    pfVar14 = (float *)FUN_00965ecc(param_1);
    local_80 = *(undefined2 *)(param_1 + 0x128);
    local_7e = *(undefined1 *)(param_1 + 0x12a);
    local_7d = (undefined1)(int)(pfVar14[6] * 255.0);
    if ((~(ulong)*(uint6 *)(param_1 + 0x144) & 0xff00000000) != 0) {
      local_7e = (undefined1)*(undefined2 *)(param_1 + 0x148);
      local_80 = CONCAT11(local_7e,local_7e);
    }
    DAT_03211010 = (int)*pfVar14;
    fVar5 = pfVar14[4];
    DAT_03211014 = (int)(*(float *)(param_1 + 300) * fVar5 + (float)DAT_03211010);
    lVar17 = 0;
    DAT_03211018 = (int)(fVar5 * *(float *)(param_1 + 0x130) + (float)DAT_03211014);
    DAT_0321101c = (int)(fVar5 * *(float *)(param_1 + 0x134) + (float)DAT_03211018);
    DAT_03211020 = (int)pfVar14[1];
    fVar5 = pfVar14[5];
    DAT_03211024 = (int)(*(float *)(param_1 + 0x138) * fVar5 + (float)DAT_03211020);
    DAT_03211028 = (int)(fVar5 * *(float *)(param_1 + 0x13c) + (float)DAT_03211024);
    DAT_0321102c = (int)(fVar5 * *(float *)(param_1 + 0x140) + (float)DAT_03211028);
    do {
      lVar15 = *(long *)(param_1 + 0xe0 + lVar17 * 8);
      if (lVar15 != 0) {
        uVar10 = *(uint6 *)(param_1 + 0x144);
        uVar16 = (uint)lVar17;
        uVar1 = uVar16 & 0xff;
        uVar2 = 1 << (ulong)(uVar16 & 0x1f) & 0x1ff;
        bVar11 = (uVar2 & *(uint *)(param_1 + 0x144)) != 0;
        uVar16 = uVar16 + (uVar1 / 3) * -3;
        bVar12 = (uVar2 & (uint)(uVar10 >> 9)) != 0;
        bVar13 = (uVar2 & (uint)(uVar10 >> 0x12)) != 0;
        uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x3c);
        fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + 8));
        fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + 10));
        fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + 4));
        fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + 6));
        bVar9 = bVar11;
        if (!bVar13) {
          bVar9 = bVar12;
          bVar12 = bVar11;
        }
        fVar3 = fVar7 + fVar5;
        if (bVar12) {
          fVar3 = fVar7;
          fVar7 = fVar7 + fVar5;
        }
        fVar6 = (float)(&DAT_03211020)[(ulong)uVar1 / 3] - fVar18 * 0.0;
        if (bVar9) {
          fVar8 = fVar8 + fVar18;
        }
        fVar5 = (float)(&DAT_03211010)[(ulong)uVar16 & 0xff] - fVar5 * 0.0;
        fVar18 = 1.0 / (float)(uVar2 & 0x3fff);
        FUN_00965b68(SUB42(fVar5,0),SUB42(fVar6,0),
                     SUB42(fVar5 + (float)((&DAT_03211010)[(ulong)(uVar16 + 1) & 0xff] -
                                          (&DAT_03211010)[(ulong)uVar16 & 0xff]),0),
                     SUB42(fVar6 + (float)((&DAT_03211020)[uVar1 / 3 + 1] -
                                          (&DAT_03211020)[(ulong)uVar1 / 3]),0),0,fVar18 * fVar7,
                     1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar8,fVar18 * fVar3,param_2,
                     &local_80,bVar13);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != 9);
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f10a00(long param_1)

{
  FUN_00f106e8(param_1 + -0xb8);
  return;
}




undefined8 FUN_00f10a08(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_00f10a20(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




void FUN_00f10a38(long param_1)

{
  FUN_0199d9a4(*(byte *)(param_1 + 0x149) & 0x1f);
  return;
}




void FUN_00f10a54(long param_1)

{
  FUN_0199d9a4(*(byte *)(param_1 + 0x91) & 0x1f);
  return;
}




void FUN_00f10a70(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5,
                 undefined8 param_6,byte param_7,byte param_8,byte param_9,undefined8 param_10,
                 byte param_11,byte param_12,byte param_13)

{
  FUN_00f0ff74(param_1,&DAT_01e277f2,0,0,0,&DAT_01e277f2,0,0,0,&DAT_01e277f2,0,0,0,param_2,
               param_3 & 1,param_4 & 1,param_5 & 1,param_6,param_7 & 1,param_8 & 1,param_9 & 1,
               param_10,param_11 & 1,param_12 & 1,param_13 & 1,&DAT_01e277f2,0,0,0,&DAT_01e277f2,0,0
               ,0,&DAT_01e277f2,0,0,0);
  return;
}




void FUN_00f10b64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  *(undefined4 *)(param_5 + 300) = param_1;
  *(undefined4 *)(param_5 + 0x130) = param_2;
  *(undefined4 *)(param_5 + 0x134) = param_3;
  *(undefined4 *)(param_5 + 0x138) = 0;
  *(undefined4 *)(param_5 + 0x13c) = param_4;
  *(undefined4 *)(param_5 + 0x140) = 0;
  FUN_00f103a0();
  return;
}




undefined4 FUN_00f10b80(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + (long)param_2 * 8 + 0xf8);
  if (lVar2 != 0) {
    uVar1 = NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
    return uVar1;
  }
  return 0;
}




void FUN_00f10bac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02826f38;
  param_1[0x17] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f10bf4(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_02826f38;
  *param_1 = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00f10c30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_02826f38;
  *param_1 = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f10c74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02826f38;
  param_1[0x17] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f10cb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02826f38;
  param_1[0x17] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f10cfc(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_02826f38;
  *param_1 = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00f10d38(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_02826f38;
  *param_1 = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f10d7c(undefined8 *param_1)

{
  FUN_00f0e4a8();
  *param_1 = &PTR_FUN_02827290;
  param_1[0x17] = &PTR_FUN_028273f8;
  FUN_00f0a784(param_1 + 0x1e);
  param_1[0x20] = 0;
  return;
}




void FUN_00f10dc0(long param_1)

{
  FUN_00f0a814(param_1 + 0xf0);
  return;
}




void FUN_00f10dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00f0a814(param_1 + 0xf0);
  uVar1 = FUN_00f0a7e0(param_1 + 0xf0,param_3);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  FUN_0091ada4(param_1);
  return;
}




void FUN_00f10e10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f0a7e0(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  FUN_0091ada4(param_1);
  return;
}




undefined4 FUN_00f10e3c(long param_1)

{
  if (*(undefined4 **)(param_1 + 0x100) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 0x100);
  }
  return 0;
}




undefined8 FUN_00f10e54(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x30;
  param_2[1] = *(long *)(*(long *)(param_1 + 0xf0) + 8) + 0x30;
  return 2;
}




undefined8 FUN_00f10e7c(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  param_2[1] = *(long *)(*(long *)(param_1 + 0x38) + 8) + 0x30;
  return 2;
}




undefined8 FUN_00f10ea4(long param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar10 = FUN_00f0e650();
  bVar3 = *(byte *)(param_1 + 0xd8);
  lVar11 = FUN_00f0a7d4(param_1 + 0xd0,uVar10);
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
  fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
  uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x3c);
  fVar8 = fVar4;
  fVar16 = fVar4 + fVar17;
  if ((bVar3 & 1) == 0) {
    fVar8 = fVar4 + fVar17;
    fVar16 = fVar4;
  }
  fVar4 = fVar12;
  fVar17 = fVar12 + fVar13;
  if ((bVar3 & 2) == 0) {
    fVar4 = fVar12 + fVar13;
    fVar17 = fVar12;
  }
  fVar12 = 1.0 / (float)(uVar2 & 0x3fff);
  fVar13 = 1.0 / (float)(uVar2 >> 0xe & 0x3fff);
  fVar16 = fVar12 * fVar16;
  fVar17 = 1.0 - fVar13 * fVar17;
  if (*(undefined4 **)(param_1 + 0x100) == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = **(undefined4 **)(param_1 + 0x100);
  }
  bVar3 = *(byte *)(param_1 + 0xf8);
  lVar11 = FUN_00f0a7d4(param_1 + 0xf0,uVar10);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
  uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0xf0) + 8) + 0x3c);
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
  fVar1 = fVar5;
  fVar6 = fVar5 + fVar9;
  if ((bVar3 & 1) == 0) {
    fVar1 = fVar5 + fVar9;
    fVar6 = fVar5;
  }
  fVar5 = fVar7;
  fVar9 = fVar7 + fVar14;
  if ((bVar3 & 2) == 0) {
    fVar5 = fVar7 + fVar14;
    fVar9 = fVar7;
  }
  fVar14 = 1.0 / (float)(uVar2 & 0x3fff);
  fVar15 = 1.0 / (float)(uVar2 >> 0xe & 0x3fff);
  fVar6 = fVar14 * fVar6;
  fVar7 = 1.0 - fVar15 * fVar9;
  fVar8 = (fVar14 * fVar1 - fVar6) / (fVar12 * fVar8 - fVar16);
  fVar4 = ((1.0 - fVar15 * fVar5) - fVar7) / ((1.0 - fVar13 * fVar4) - fVar17);
  *param_2 = fVar6 - fVar16 * fVar8;
  param_2[1] = fVar7 - fVar17 * fVar4;
  param_2[2] = fVar8;
  param_2[3] = fVar4;
  return 4;
}

