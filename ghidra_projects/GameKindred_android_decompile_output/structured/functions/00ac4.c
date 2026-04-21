// functions/00ac4 — 29 functions
#include "libGameKindred.h"




void thunk_FUN_00ac4398(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  FUN_00ed7be4(param_1 + 0x5d0,0);
  FUN_00ed77f0(param_1);
  uVar1 = FUN_00f0de68(param_1 + 0x798);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_00f08be8(param_1 + 0x868);
  }
  else {
    puVar2 = &DAT_03210450;
  }
  FUN_00ed7884(param_1,puVar2);
  return;
}




void FUN_00ac407c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00ac43f0(param_1,param_4);
  return;
}




void FUN_00ac4084(long param_1)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&uStack_2c,&local_30);
  FUN_00f13f08(uStack_2c,local_30,param_1 + 0xa80);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac40e0(long param_1)

{
  FUN_00ed7be4(param_1 + 0x5d0,1);
  FUN_00b248d0(param_1);
  return;
}




void FUN_00ac410c(long param_1)

{
  FUN_00b24a7c();
  FUN_00ed7be4(param_1 + 0x5d0,0);
  return;
}




void FUN_00ac4134(void)

{
  return;
}




void FUN_00ac4138(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_58;
  float fStack_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x1140) != 0) {
    lVar7 = FUN_00965ecc(param_1);
    local_50 = 0xffff;
    local_4e = 0xff;
    local_4d = (undefined1)(int)(*(float *)(lVar7 + 0x18) * 255.0);
    FUN_00f0025c(&fStack_54,&local_58);
    fVar5 = *(float *)(param_1 + 0x1138);
    fVar6 = *(float *)(lVar7 + 0x10);
    fVar10 = *(float *)(lVar7 + 0x14);
    lVar7 = FUN_00f0a7d4(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x1140));
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xf0) + 8) + 0x3c);
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 4));
    fVar4 = 0.0 - fVar3 * 0.0;
    fVar8 = fVar10 * ((local_58 - local_58 * fVar5) + -180.0) - fVar8 * 0.0;
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
    fVar10 = 1.0 / (float)(uVar1 & 0x3fff);
    FUN_00965b68(SUB42(fVar4,0),fVar8,SUB42(fStack_54 * fVar6 + fVar4,0),SUB42(fVar8 + 180.0,0),0,
                 fVar10 * fVar9,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar5,
                 (fVar9 + fVar3) * fVar10,param_2,&local_50,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac42b0(long param_1)

{
  FUN_00ac4138(param_1 + -0xb8);
  return;
}




float FUN_00ac42b8(long param_1)

{
  long lVar1;
  float local_30;
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(auStack_2c,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30 * *(float *)(param_1 + 0x1138);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00ac4314(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x180))();
  return fVar1 + 180.0;
}




float FUN_00ac433c(void)

{
  long lVar1;
  undefined1 auStack_30 [4];
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&local_2c,auStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_2c + -32.0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac4398(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  FUN_00ed7be4(param_1 + 0x5d0,0);
  FUN_00ed77f0(param_1);
  uVar1 = FUN_00f0de68(param_1 + 0x798);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_00f08be8(param_1 + 0x868);
  }
  else {
    puVar2 = &DAT_03210450;
  }
  FUN_00ed7884(param_1,puVar2);
  return;
}




void FUN_00ac43f0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float local_70;
  undefined1 auStack_6c [4];
  undefined8 local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00f04924(param_2);
  *(undefined4 *)(param_1 + 0x1138) = uVar3;
  uVar3 = FUN_00f048a4("UI::EVENT_KEYBOARD_OPENED");
  FUN_00f04c40(auStack_60,uVar3,param_1);
  FUN_00f04760(param_1,auStack_60,1);
  FUN_00f0025c(auStack_6c,&local_70);
  plVar1 = (long *)(param_1 + 0x5d0);
  fVar4 = (local_70 - local_70 * *(float *)(param_1 + 0x1138)) + -80.0;
  if ((*(float *)(param_1 + 0x610) != 16.0) || (*(float *)(param_1 + 0x614) != fVar4)) {
    *(undefined4 *)(param_1 + 0x610) = 0x41800000;
    *(float *)(param_1 + 0x614) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_68 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac44f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6068;
  param_1[0x17] = &PTR_FUN_027d6228;
  param_1[0x229] = &PTR_FUN_028266f0;
  param_1[0x240] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x243);
  FUN_00f13d08(param_1 + 0x229);
  FUN_00b24220(param_1);
  return;
}




void FUN_00ac455c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6068;
  param_1[0x17] = &PTR_FUN_027d6228;
  param_1[0x229] = &PTR_FUN_028266f0;
  param_1[0x240] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x243);
  FUN_00f13d08(param_1 + 0x229);
  FUN_00b24220(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ac45d0(void)

{
  return;
}




void FUN_00ac45d4(void)

{
  return;
}




void FUN_00ac45d8(void)

{
  return;
}




void FUN_00ac45dc(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_027d6068;
  *param_1 = &PTR_FUN_027d6228;
  param_1[0x212] = &PTR_FUN_028266f0;
  param_1[0x229] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x22c);
  FUN_00f13d08(param_1 + 0x212);
  FUN_00b24220(param_1 + -0x17);
  return;
}




void FUN_00ac4648(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_027d6068;
  *param_1 = &PTR_FUN_027d6228;
  param_1[0x212] = &PTR_FUN_028266f0;
  param_1[0x229] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x22c);
  FUN_00f13d08(param_1 + 0x212);
  FUN_00b24220(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00ac46bc(undefined8 *param_1,byte param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  FUN_00ab6c24(param_1,param_2 & 1);
  *param_1 = &PTR_FUN_027d6270;
  FUN_00f0e4a8(param_1 + 0x2b8);
  FUN_00f017e8(param_1 + 0x2d6);
  param_1[0x2d6] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x2e7);
  FUN_00f0e4a8(param_1 + 0x305);
  thunk_FUN_00e7051c(param_1 + 0x323,param_4);
  FUN_008fcdb8(param_1 + 0x325,param_5);
  *(undefined4 *)(param_1 + 0x328) = param_3;
  *(byte *)((long)param_1 + 0x1944) = param_2 & 1;
  *(byte *)((long)param_1 + 0x1945) = param_6 & 1;
  FUN_00ac478c(param_1);
  return;
}




void FUN_00ac478c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  size_t __n;
  size_t sVar5;
  undefined **ppuVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  char *__s2;
  char *pcVar12;
  long lVar13;
  void *__s1;
  undefined *puVar14;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined4 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  plVar1 = param_3 + 0x2b8;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  bVar8 = *(byte *)(param_3 + 0x325);
  ppuVar6 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if (*(char *)((long)param_3 + 0x1944) != '\0') {
    ppuVar6 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  puVar14 = *ppuVar6;
  __n = (ulong)(bVar8 >> 1);
  if ((bVar8 & 1) != 0) {
    __n = param_3[0x326];
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (__n == sVar5) {
    __s1 = (void *)param_3[0x327];
    if ((bVar8 & 1) == 0) {
      __s1 = (void *)((long)param_3 + 0x1929);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar8 & 1) == 0) {
      if (__n != 0) {
        pcVar12 = (char *)((long)param_3 + 0x1929);
        lVar13 = -(ulong)(bVar8 >> 1);
        do {
          if (*pcVar12 != *__s2) goto LAB_00ac4894;
          pcVar12 = pcVar12 + 1;
          lVar13 = lVar13 + 1;
          __s2 = __s2 + 1;
        } while (lVar13 != 0);
      }
      goto LAB_00ac4a50;
    }
    if ((__n == 0) || (iVar10 = memcmp(__s1,__s2,__n), iVar10 == 0)) goto LAB_00ac4a50;
  }
LAB_00ac4894:
  plVar2 = param_3 + 0x2d6;
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  plVar3 = param_3 + 0x2e7;
  FUN_00f023ec(plVar2,plVar3,1);
  plVar4 = param_3 + 0x305;
  FUN_00f023ec(plVar2,plVar4,1);
  if ((*(byte *)(param_3 + 0x325) & 1) == 0) {
    lVar13 = (long)param_3 + 0x1929;
  }
  else {
    lVar13 = param_3[0x327];
  }
  FUN_00f0e548(plVar3,puVar14,lVar13);
  if ((*(float *)(param_3 + 0x2f1) != 0.5) || (*(float *)((long)param_3 + 0x178c) != 0.5)) {
    param_3[0x2f1] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_3 + 0x2f0) != 0.9) || (*(float *)((long)param_3 + 0x1784) != 0.9)) {
    param_3[0x2f0] = 0x3f6666663f666666;
    FUN_0091ada4(plVar3);
  }
  uVar7 = *(uint *)((long)param_3 + 0x17bc);
  if ((uVar7 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_3 + 0x17bc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5900;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,puVar14,"circle_button_frame");
  if ((*(float *)(param_3 + 0x30f) != 0.5) || (*(float *)((long)param_3 + 0x187c) != 0.5)) {
    param_3[0x30f] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_3 + 0x30e) != 0.9) || (*(float *)((long)param_3 + 0x1874) != 0.9)) {
    param_3[0x30e] = 0x3f6666663f666666;
    FUN_0091ada4(plVar4);
  }
  uVar7 = *(uint *)((long)param_3 + 0x18ac);
  if ((uVar7 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_3 + 0x18ac) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0xc80;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_3 + 0x2df) != 0.9) || (*(float *)((long)param_3 + 0x16fc) != 0.9)) {
    param_3[0x2df] = 0x3f6666663f666666;
    FUN_0091ada4(plVar2);
  }
LAB_00ac4a50:
  uVar11 = FUN_00e70b88(param_3 + 0x323,&DAT_03210450);
  if ((uVar11 & 1) != 0) {
    param_2 = 32.0;
    FUN_00ab703c(0,0x42000000,0x44480000,param_3,0,param_3 + 0x323,&DAT_01bee7fa,&DAT_03218ef8,0);
  }
  FUN_00ab7520(param_3,1);
  FUN_00ab7588(0x3f800000,param_3,&DAT_01bee7f6);
  FUN_00ab75b0(0x3f000000,param_3,&DAT_01bee7fa);
  FUN_00b09144(0,param_3);
  uVar11 = FUN_0092ea9c();
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar11 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
  }
  FUN_00f0d378(param_3 + 0xe4,*ppuVar6);
  local_78 = (ulong)*(uint *)(param_3 + 0x328);
  local_70 = DAT_03210c64;
  local_98 = FUN_00ac500c;
  local_88 = 0;
  uStack_80 = 0;
  plStack_90 = param_3;
  FUN_009693a0(param_3 + 1,&local_98);
  FUN_00f0e548(plVar1,puVar14,"white_background");
  local_98 = (code *)CONCAT44(local_98._4_4_,0xffa6a6a6);
  FUN_00f0e670(plVar1,&local_98,2);
  uVar7 = *(uint *)((long)param_3 + 0x1644);
  if ((uVar7 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_3 + 0x1644) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x3300;
    FUN_0091ada4(plVar1);
  }
  (**(code **)(*param_3 + 0x50))(param_3);
  if ((*(float *)(param_3 + 0x2c0) != 0.0) || (*(float *)((long)param_3 + 0x1604) != param_2 * -0.5)
     ) {
    *(undefined4 *)(param_3 + 0x2c0) = 0;
    *(float *)((long)param_3 + 0x1604) = param_2 * -0.5;
    FUN_0091ada4(plVar1);
  }
  local_98 = (code *)0x3f0000003f000000;
  (**(code **)(param_3[0x2b8] + 0x28))(plVar1,&local_98);
  *(uint *)((long)param_3 + 0x1644) = *(uint *)((long)param_3 + 0x1644) & 0xfffffffb;
  FUN_00ac4ca0(0x41f00000,param_3);
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac4c44(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1644) =
       *(uint *)(param_1 + 0x1644) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1644) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00ac4c58(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1940) = param_2;
  return;
}




void FUN_00ac4c60(long param_1)

{
  FUN_00910394(param_1 + 0x1918);
  FUN_00ab7498(param_1,param_1 + 0x1918);
  FUN_00ac4ca0(0x41f00000,param_1);
  return;
}




void FUN_00ac4ca0(float param_1,long *param_2)

{
  long *plVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  void *__s1;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  plVar1 = param_2 + 0x2d6;
  fVar7 = (float)FUN_00f01fcc(plVar1,0,0,1,1);
  fVar8 = (float)FUN_00f0d548(param_2 + 0xe4);
  fVar8 = fVar7 * 1.25 + fVar8;
  if (fVar8 <= param_1) {
    fVar8 = param_1;
  }
  FUN_00ab75d0(0,fVar8,fVar8,param_2);
  uVar9 = (**(code **)(*param_2 + 0x50))(param_2);
  FUN_00f13f08(uVar9,0x40800000,param_2 + 0x2b8);
  fVar8 = (float)(**(code **)(*param_2 + 0x50))(param_2);
  if (*(float *)(param_2 + 8) != fVar8 * 0.5) {
    *(float *)(param_2 + 8) = fVar8 * 0.5;
    FUN_0091ada4(param_2);
  }
  bVar3 = *(byte *)(param_2 + 0x325);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = param_2[0x326];
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = (void *)param_2[0x327];
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)((long)param_2 + 0x1929);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar5 = (char *)((long)param_2 + 0x1929);
        lVar6 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar5 != *__s2) goto LAB_00ac4df8;
          pcVar5 = pcVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00ac4df8;
    return;
  }
LAB_00ac4df8:
  FUN_00ab74c8(param_2,0);
  fVar7 = *(float *)(param_2 + 8);
  fVar8 = (float)FUN_00f01fcc(plVar1,0,0,1,1);
  fVar8 = -(fVar7 + fVar8 * -0.75);
  if (*(float *)(param_2 + 0x2de) != fVar8) {
    *(float *)(param_2 + 0x2de) = fVar8;
    FUN_0091ada4(plVar1);
  }
  fVar8 = (float)FUN_00f01fcc(plVar1,0,0,1,1);
  FUN_00ab74fc(fVar8 * 1.25,0,param_2);
  return;
}




void FUN_00ac4e9c(long param_1)

{
  long lVar1;
  
  FUN_008fce60((byte *)(param_1 + 0x1928));
  if ((*(byte *)(param_1 + 0x1928) & 1) == 0) {
    lVar1 = param_1 + 0x1929;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x1938);
  }
  FUN_00f0e578(param_1 + 0x850,lVar1);
  FUN_00ac4ca0(0x41f00000,param_1);
  return;
}




void FUN_00ac4eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SELECT_CONTEXT_MENU_ITEM");
  FUN_00f048e0(auStack_58,uVar2,param_3);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac4f68(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x224);
  uVar2 = 0xff;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x66;
  }
  *(byte *)(param_1 + 0x26c) = *(byte *)(param_1 + 0x26c) & 0xfe | param_2 & 1;
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x224) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_0091ada4(param_1 + 0x1a0);
  }
  uVar1 = *(uint *)(param_1 + 0x1734);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x1734) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_0091ada4(param_1 + 0x16b0);
  }
  if ((~*(uint *)(param_1 + 0x7a4) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) | 0x7f80;
  FUN_0091ada4(param_1 + 0x720);
  return;
}

