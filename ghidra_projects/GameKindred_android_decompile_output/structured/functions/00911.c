// functions/00911 — 22 functions
#include "libGameKindred.h"




void FUN_00911134(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 4);
  if (0.0 < fVar2) {
    fVar2 = (float)FUN_01988c78();
    fVar2 = (float)NEON_fminnm(*(float *)(param_1 + 4) - fVar2,0x40a00000);
    *(float *)(param_1 + 4) = fVar2;
  }
  fVar1 = *(float *)(param_1 + 8);
  if ((0.0 < fVar1) && (fVar2 <= 0.0)) {
    fVar1 = (float)NEON_fminnm(fVar1 + -0.005,0x3f800000);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 8) = fVar1;
  }
  if (fVar1 <= 0.0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
  }
  return;
}




void FUN_009111c4(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                 undefined8 param_5,long param_6,uint param_7)

{
  long lVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a8;
  undefined8 local_a4;
  float local_98;
  float local_94;
  float fStack_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab64();
  if ((uVar4 & 1) == 0) {
LAB_00911220:
    FUN_00d55794(param_5,&local_98,0);
  }
  else {
    FUN_009bbfb0();
    lVar5 = FUN_009bd5c8();
    if ((*(byte *)(lVar5 + 0x7c) >> 4 & 1) == 0) goto LAB_00911220;
    local_98 = (float)FUN_0091148c();
    local_94 = param_2;
    fStack_90 = param_3;
  }
  if (param_7 != 0) {
    uVar4 = 0;
    uVar7 = 0;
    fVar9 = 0.0;
    do {
      lVar5 = *(long *)(param_6 + uVar4 * 8);
      lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
      FUN_00d55794(lVar6,&local_a8,0);
      fVar10 = local_94 - (float)local_a4;
      fVar11 = fStack_90 - (float)((ulong)local_a4 >> 0x20);
      if ((local_98 - local_a8) * (local_98 - local_a8) + fVar10 * fVar10 + fVar11 * fVar11 < 144.0)
      {
        cVar2 = FUN_00d55870(lVar6);
        cVar3 = FUN_00d55870(param_5);
        if ((cVar2 != cVar3) && ((*(byte *)(lVar6 + 0x2fc) & 0x1f) == 0)) break;
        fVar10 = (float)FUN_009bf6ec(lVar5);
        fVar11 = (float)FUN_009bf6f8(lVar5);
        fVar9 = fVar9 + fVar10 + fVar11;
        uVar7 = uVar7 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_7);
    if (uVar7 != 0) {
      fVar9 = fVar9 / (float)uVar7;
    }
    if (0.0 < fVar9) {
      *(undefined4 *)(param_4 + 4) = 0x40a00000;
      FUN_009bbfb0();
      fVar10 = (float)FUN_009bc268();
      fVar10 = -0.5 / fVar10 + 1.0;
      fVar11 = SQRT(fVar10);
      if (NAN(fVar11)) {
        fVar11 = sqrtf(fVar10);
      }
      fVar8 = INFINITY;
      if (fVar10 != -INFINITY) {
        fVar8 = ABS(fVar11);
      }
      fVar9 = fVar9 * fVar8;
      fVar10 = SQRT(fVar9);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar9);
      }
      fVar11 = INFINITY;
      if (fVar9 != -INFINITY) {
        fVar11 = ABS(fVar10);
      }
      fVar9 = (float)NEON_fminnm(*(float *)(param_4 + 8) + fVar11,0x3f800000);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      *(float *)(param_4 + 8) = fVar9;
      goto LAB_009113b4;
    }
  }
  fVar9 = *(float *)(param_4 + 8);
LAB_009113b4:
  if (1.0 <= fVar9) {
    *(byte *)(param_4 + 0xc) = *(byte *)(param_4 + 0xc) | 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00911408(undefined8 param_1,int param_2)

{
  if (*DAT_02c091e0 != param_2) {
    *DAT_02c091e0 = param_2;
    switch(param_2) {
    case 0:
      FUN_008fa434("jungle");
      return;
    case 1:
      FUN_008fa434("lane");
      return;
    case 2:
      FUN_008fa434("fight");
      return;
    case 3:
      FUN_008fa434("kraken");
      return;
    case 4:
      FUN_008fa434("death");
      return;
    }
  }
  return;
}




undefined8 FUN_00911480(void)

{
  return DAT_02c091e0;
}




float FUN_0091148c(void)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  FUN_009bbfb0();
  uVar1 = FUN_009bd5c8();
  lVar2 = FUN_009b8134();
  fVar4 = *(float *)(lVar2 + 4) * 0.017453292;
  fVar3 = sinf(fVar4);
  cosf(fVar4);
  lVar2 = FUN_009b80cc(uVar1);
  fVar4 = *(float *)(lVar2 + 0x30);
  FUN_009b812c(uVar1);
  FUN_009b80cc(uVar1);
  return fVar3 * 20.0 + fVar4;
}




void FUN_00911534(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(*(float *)(param_2 + 8) + param_1,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 8) = fVar1;
  return;
}




void FUN_00911554(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(*(float *)(param_2 + 4) + param_1,0x40a00000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 4) = fVar1;
  return;
}




undefined4 FUN_00911574(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




undefined4 FUN_0091157c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_00911584(void)

{
  DAT_02c091e0 = operator_new(0x10);
  *(undefined8 *)((long)DAT_02c091e0 + 5) = 0;
  *DAT_02c091e0 = 0;
  return;
}




void FUN_009115ac(void)

{
  if (DAT_02c091e0 != (void *)0x0) {
    operator_delete(DAT_02c091e0);
  }
  DAT_02c091e0 = (void *)0x0;
  return;
}




void FUN_009115d8(void)

{
  if (DAT_02c091e0 != 0) {
    FUN_00910f78();
    return;
  }
  return;
}




void FUN_009115ec(undefined8 *param_1)

{
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  *param_1 = &PTR_FUN_027b9570;
  param_1[3] = &PTR_FUN_027b9918;
  FUN_00965778(param_1 + 6);
  param_1[6] = &PTR_FUN_027b9948;
  FUN_00e84dac(param_1 + 9);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  param_1[9] = &PTR_FUN_027b9980;
  FUN_00e84dac(param_1 + 0x12);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x12] = &PTR_FUN_027b99b0;
  FUN_00e84dac(param_1 + 0x1e);
  param_1[0x1e] = &PTR_FUN_027b99b0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  FUN_00e84dac(param_1 + 0x2a);
  param_1[0x2a] = &PTR_FUN_027b99b0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  FUN_00e84dac(param_1 + 0x36);
  param_1[0x36] = &PTR_FUN_027b99b0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3b] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  FUN_00e84dac(param_1 + 0x42);
  param_1[0x42] = &PTR_FUN_027b99b0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  memset(param_1 + 0x4b,0,0x48);
  FUN_0099ceac(param_1 + 0x54,"FRIENDS.REQUEST",1);
  FUN_008fcdb8(param_1 + 0x58,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x5b,&DAT_0320ffa8);
  *(undefined2 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x41a00000;
  *(undefined1 *)((long)param_1 + 0x2fa) = 0;
  FUN_0099cf94(param_1 + 0x54,0);
  return;
}




void FUN_00911768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9570;
  param_1[3] = &PTR_FUN_027b9918;
  DAT_02c09208 = 0;
  DAT_02c091f8 = 0;
  DAT_02c09200 = 0;
  if ((*(byte *)(param_1 + 0x5b) & 1) != 0) {
    operator_delete((void *)param_1[0x5d]);
  }
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    operator_delete((void *)param_1[0x5a]);
  }
  FUN_0099cedc(param_1 + 0x54);
  FUN_00914e9c(param_1 + 0x52,1);
  FUN_00914e2c(param_1 + 0x50,1);
  FUN_00914e2c(param_1 + 0x4e,1);
  param_1[0x42] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x4b) & 1) != 0) {
    operator_delete((void *)param_1[0x4d]);
  }
  if ((*(byte *)(param_1 + 0x47) & 1) != 0) {
    operator_delete((void *)param_1[0x49]);
  }
  FUN_00e84dd8(param_1 + 0x42);
  param_1[0x36] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x3f) & 1) != 0) {
    operator_delete((void *)param_1[0x41]);
  }
  if ((*(byte *)(param_1 + 0x3b) & 1) != 0) {
    operator_delete((void *)param_1[0x3d]);
  }
  FUN_00e84dd8(param_1 + 0x36);
  param_1[0x2a] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x33) & 1) != 0) {
    operator_delete((void *)param_1[0x35]);
  }
  if ((*(byte *)(param_1 + 0x2f) & 1) != 0) {
    operator_delete((void *)param_1[0x31]);
  }
  FUN_00e84dd8(param_1 + 0x2a);
  param_1[0x1e] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x27) & 1) != 0) {
    operator_delete((void *)param_1[0x29]);
  }
  if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
    operator_delete((void *)param_1[0x25]);
  }
  FUN_00e84dd8(param_1 + 0x1e);
  param_1[0x12] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    operator_delete((void *)param_1[0x1d]);
  }
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    operator_delete((void *)param_1[0x19]);
  }
  FUN_00e84dd8(param_1 + 0x12);
  param_1[9] = &PTR_FUN_027b9980;
  param_1[6] = &PTR_FUN_027b9948;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  FUN_00e84dd8(param_1 + 9);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_00911958(void)

{
  DAT_02c091f8 = 0;
  DAT_02c09200 = 0;
  DAT_02c09208 = 0;
  return;
}




void FUN_0091196c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_009119bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9948;
  param_1[3] = &PTR_FUN_027b9980;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00e84dd8(param_1 + 3);
  return;
}




void FUN_00911a0c(long param_1)

{
  FUN_00911768(param_1 + -0x18);
  return;
}




void FUN_00911a14(void *param_1)

{
  FUN_00911768();
  operator_delete(param_1);
  return;
}




void FUN_00911a38(long param_1)

{
  FUN_00911768((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_00911a60(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = param_1 + 0x30;
  uVar4 = FUN_00e84e74(param_1 + 0x48);
  if ((((uVar4 & 1) != 0) &&
      (FUN_00911c7c(param_1,param_1 + 0x48), *(char *)(param_1 + 0x2f8) == '\0')) &&
     (lVar5 = FUN_009580b8(), *(int *)(lVar5 + 0x55dc) == 1)) {
    *(undefined1 *)(param_1 + 0x2f8) = 1;
    FUN_008ffcf8("numFriends",*(int *)(param_1 + 0x2f4) + *(int *)(param_1 + 0x270),1);
  }
  uVar4 = FUN_00e84e74(param_1 + 0x90);
  if ((uVar4 & 1) != 0) {
    if (DAT_02c091f8 != 0) {
      plVar3 = (long *)(DAT_02c091f8 + -8);
      while (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 0x90);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_009658c8(lVar2);
  }
  uVar4 = FUN_00e84e74(param_1 + 0x1b0);
  if ((uVar4 & 1) != 0) {
    if (DAT_02c091f8 != 0) {
      plVar3 = (long *)(DAT_02c091f8 + -8);
      while (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_1 + 0x1b0);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_009658c8(lVar2);
  }
  if (*(char *)(param_1 + 0x2f9) != '\0') {
    if (DAT_02c091f8 != 0) {
      plVar3 = (long *)(DAT_02c091f8 + -8);
      while (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2f9) = 0;
  }
  uVar4 = FUN_00e84e74(param_1 + 0xf0);
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_00e84e5c(param_1 + 0xf0);
    if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x130) == 0)) {
      FUN_00913acc(param_1);
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_009658c8(lVar2);
  }
  if (*(char *)(param_1 + 0x2fa) != '\0') {
    if (DAT_02c091f8 != 0) {
      plVar3 = (long *)(DAT_02c091f8 + -8);
      while (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2fa) = 0;
  }
  uVar4 = FUN_00e84e74(param_1 + 0x150);
  if (((uVar4 & 1) != 0) || (uVar4 = FUN_00e84e74(param_1 + 0x210), (uVar4 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_009658c8(lVar2);
  }
  FUN_0096579c(lVar2);
  return;
}




void FUN_00911c7c(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  size_t sVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  int *piVar14;
  uint *puVar15;
  long *plVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long lVar25;
  long lVar26;
  uint *puVar27;
  ulong uVar28;
  undefined8 local_428;
  void *pvStack_420;
  void *local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  void *pvStack_3f0;
  void *local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  long local_3c8;
  ulong local_3c0;
  undefined4 local_3b8;
  undefined8 *local_3b0;
  undefined8 *local_3a8;
  undefined8 local_3a0;
  void *local_398;
  void *local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  char *local_360;
  ulong local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined8 *local_348;
  undefined8 *local_340;
  undefined8 local_338;
  void *local_330;
  void *local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 *local_2f8;
  undefined8 uStack_2f0;
  void *local_2e8;
  void *local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  char *local_2b8;
  void *pvStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined8 *local_2a0;
  undefined8 *local_298;
  undefined8 local_290;
  void *local_288;
  void *pvStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 *local_250;
  ulong local_248;
  void *local_240;
  void *pvStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_210;
  char *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  double local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 auStack_158 [48];
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [48];
  undefined4 local_c8;
  ulong local_c0;
  long local_b8;
  undefined4 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined1 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  
  lVar2 = tpidr_el0;
  lVar21 = *(long *)(lVar2 + 0x28);
  local_3c8 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_398 = (void *)0x0;
  local_390 = (void *)0x0;
  local_3a0 = 0;
  local_378 = 0x400;
  local_370 = 0;
  local_368 = 0;
  local_3b0 = operator_new(0x28);
  local_3b0[3] = 0;
  local_3b0[4] = 0;
  local_3b0[1] = 0x10000;
  local_3b0[2] = 0;
  *local_3b0 = 0;
  local_210 = (char *)(param_2 + 0x29);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_210 = *(char **)(param_2 + 0x38);
  }
  local_3a8 = local_3b0;
  local_208 = local_210;
  FUN_008fd344(&local_3c8,&local_210);
  lVar5 = FUN_008fd190(&local_3c8,"returnValue");
  if (local_3c8 + (local_3c0 & 0xffffffff) * 0x30 != lVar5) {
    local_200 = CONCAT44(local_200._4_4_,0x100005);
    local_210 = "returnValue";
    local_208 = (char *)0xb;
    lVar5 = FUN_008feca4(&local_3c8,&local_210);
    if (*(int *)(lVar5 + 0x10) == 3) {
      local_200 = 0;
      local_208 = (char *)0x0;
      local_1f8 = 0;
      FUN_00e70510();
      FUN_00e70510();
      FUN_00e70510();
      local_1b8 = 0;
      local_1c0 = 0;
      local_1b0 = 0;
      FUN_00e70510();
      FUN_00e70510();
      local_180 = 0;
      local_188 = 0;
      local_178 = 0;
      local_b8 = 0;
      local_c0 = 0;
      local_98 = (undefined1 *)0x0;
      local_a0 = 0;
      local_a8 = 0;
      local_2b8 = "returnValue";
      local_2a8 = 0x100005;
      pvStack_2b0 = (void *)0xb;
      plVar6 = (long *)FUN_008feca4(&local_3c8,&local_2b8);
      lVar5 = FUN_008fd190(plVar6,"numOffline");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
        uVar19 = 0;
      }
      else {
        local_2b8 = "numOffline";
        local_2a8 = 0x100005;
        pvStack_2b0 = (void *)0xa;
        puVar7 = (undefined4 *)FUN_008feca4(plVar6,&local_2b8);
        uVar19 = *puVar7;
      }
      *(undefined4 *)(param_1 + 0x2f4) = uVar19;
      lVar5 = FUN_008fd190(plVar6,"pending");
      if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) ||
         (lVar5 = FUN_008fd190(plVar6,"confirmed"),
         *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5)) {
        FUN_00e83324(0xfffffffa);
      }
      else {
        local_250 = &local_3f8;
        pvStack_238 = (void *)0x0;
        local_240 = (void *)0x0;
        uStack_228 = 0;
        uStack_230 = 0;
        pvStack_2b0 = (void *)0x0;
        local_2b8 = (char *)0x0;
        local_2a8 = 0;
        uStack_270 = 0;
        local_278 = 0;
        uStack_3e0 = 0;
        local_3e8 = (void *)0x0;
        pvStack_3f0 = (void *)0x0;
        local_3f8 = 0;
        local_3d8 = 0;
        uStack_3d0 = 0x100;
        local_248 = 0;
        local_220 = 0x200;
        local_218 = 0;
        pvStack_280 = (void *)0x0;
        local_288 = (void *)0x0;
        local_290 = 0;
        local_268 = 0x400;
        local_260 = 0;
        local_258 = 0;
        local_2a0 = operator_new(0x28);
        local_2a0[4] = 0;
        local_2a0[3] = 0;
        local_2a0[1] = 0x10000;
        local_2a0[2] = 0;
        *local_2a0 = 0;
        local_360 = "pending";
        local_350 = 0x100005;
        local_358 = 7;
        local_298 = local_2a0;
        uVar8 = FUN_008feca4(plVar6,&local_360);
        FUN_00916394(&local_2b8,uVar8,local_2a0);
        FUN_00914ff4(&local_2b8,&local_250);
        local_2f8 = &local_428;
        uStack_2f0 = 0;
        local_408 = 0;
        uStack_400 = 0x100;
        uStack_410 = 0;
        local_418 = (void *)0x0;
        pvStack_420 = (void *)0x0;
        local_428 = 0;
        local_360 = (char *)0x0;
        local_358 = 0;
        local_350 = 0;
        local_320 = 0;
        uStack_318 = 0;
        local_330 = (void *)0x0;
        local_328 = (void *)0x0;
        local_338 = 0;
        local_310 = 0x400;
        local_308 = 0;
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_2e8 = (void *)0x0;
        local_2e0 = (void *)0x0;
        local_2c8 = 0x200;
        local_2c0 = 0;
        local_300 = 0;
        local_348 = operator_new(0x28);
        *local_348 = 0;
        local_348[1] = 0x10000;
        local_348[3] = 0;
        local_348[4] = 0;
        local_348[2] = 0;
        local_88 = "confirmed";
        local_78 = 0x100005;
        local_80 = 9;
        local_340 = local_348;
        uVar8 = FUN_008feca4(plVar6,&local_88);
        FUN_00916394(&local_360,uVar8,local_348);
        FUN_00914ff4(&local_360,&local_2f8);
        pcVar9 = (char *)FUN_009155f8(&local_3f8);
        sVar10 = strlen(pcVar9);
        uVar28 = (ulong)(*(byte *)(param_1 + 0x2c0) >> 1);
        if ((*(byte *)(param_1 + 0x2c0) & 1) != 0) {
          uVar28 = *(ulong *)(param_1 + 0x2c8);
        }
        if ((sVar10 == uVar28) &&
           (iVar4 = FUN_0090d610(param_1 + 0x2c0,0,0xffffffffffffffff,pcVar9,sVar10), iVar4 == 0)) {
          pcVar9 = (char *)FUN_009155f8(&local_428);
          sVar10 = strlen(pcVar9);
          uVar28 = (ulong)(*(byte *)(param_1 + 0x2d8) >> 1);
          if ((*(byte *)(param_1 + 0x2d8) & 1) != 0) {
            uVar28 = *(ulong *)(param_1 + 0x2e0);
          }
          if ((sVar10 != uVar28) ||
             (iVar4 = FUN_0090d610(param_1 + 0x2d8,0,0xffffffffffffffff,pcVar9,sVar10), iVar4 != 0))
          goto LAB_009120a8;
          bVar3 = true;
        }
        else {
LAB_009120a8:
          uVar8 = FUN_009155f8(&local_3f8);
          FUN_008fa54c(&local_88,uVar8);
          FUN_008fce60(param_1 + 0x2c0,&local_88);
          if (((ulong)local_88 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_74,local_78));
          }
          uVar8 = FUN_009155f8(&local_428);
          FUN_008fa54c(&local_88,uVar8);
          FUN_008fce60(param_1 + 0x2d8,&local_88);
          if (((ulong)local_88 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_74,local_78));
          }
          bVar3 = false;
        }
        puVar12 = local_340;
        if (local_340 != (undefined8 *)0x0) {
          FUN_008fd2c4(local_340);
          operator_delete(puVar12);
        }
        free(local_328);
        if (local_330 != (void *)0x0) {
          operator_delete(local_330);
        }
        free(local_2e0);
        if (local_2e8 != (void *)0x0) {
          operator_delete(local_2e8);
        }
        free(local_418);
        if (pvStack_420 != (void *)0x0) {
          operator_delete(pvStack_420);
        }
        puVar12 = local_298;
        if (local_298 != (undefined8 *)0x0) {
          FUN_008fd2c4(local_298);
          operator_delete(puVar12);
        }
        free(pvStack_280);
        if (local_288 != (void *)0x0) {
          operator_delete(local_288);
        }
        free(pvStack_238);
        if (local_240 != (void *)0x0) {
          operator_delete(local_240);
        }
        free(local_3e8);
        if (pvStack_3f0 != (void *)0x0) {
          operator_delete(pvStack_3f0);
        }
        if (bVar3) {
          FUN_0091587c(&local_210);
          goto LAB_00913a48;
        }
      }
      lVar5 = FUN_008fd190(plVar6,"pending");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
        FUN_00e83324(0xfffffffa);
      }
      else {
        lVar5 = *(long *)(param_1 + 0x288);
        puVar27 = (uint *)(param_1 + 0x280);
        if (lVar5 != 0) {
          if (*puVar27 != 0) {
            lVar26 = (ulong)*puVar27 * 0x188;
            do {
              FUN_0091587c(lVar5);
              lVar26 = lVar26 + -0x188;
              lVar5 = lVar5 + 0x188;
            } while (lVar26 != 0);
          }
          *puVar27 = 0;
        }
        local_2b8 = "pending";
        local_2a8 = 0x100005;
        pvStack_2b0 = (void *)0x7;
        plVar11 = (long *)FUN_008feca4(plVar6,&local_2b8);
        if ((int)plVar11[1] != 0) {
          lVar5 = 0;
          uVar28 = 0;
          do {
            plVar16 = (long *)(*plVar11 + lVar5);
            lVar26 = FUN_008fd190(plVar16,"handle");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 == lVar26) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "handle";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x6;
              lVar26 = FUN_008feca4(plVar16,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar26 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "handle";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x6;
                puVar12 = (undefined8 *)FUN_008feca4(plVar16,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_00e705a0(auStack_1f0,puVar12);
            lVar26 = FUN_008fd190(plVar16,"uuid");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 == lVar26) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "uuid";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x4;
              lVar26 = FUN_008feca4(plVar16,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar26 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "uuid";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x4;
                puVar12 = (undefined8 *)FUN_008feca4(plVar16,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_008fa54c(&local_2b8,puVar12);
            FUN_008fce60(&local_208,&local_2b8);
            if (((ulong)local_2b8 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_2a4,local_2a8));
            }
            local_170 = 0.0;
            lVar26 = FUN_008fd190(plVar16,"isDev");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 == lVar26) {
              uVar22 = 0;
            }
            else {
              local_2b8 = "isDev";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x5;
              lVar26 = FUN_008feca4(plVar16,&local_2b8);
              uVar22 = 0;
              if ((*(byte *)(lVar26 + 0x11) & 1) != 0) {
                local_2b8 = "isDev";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x5;
                lVar26 = FUN_008feca4(plVar16,&local_2b8);
                uVar22 = (ulong)(*(int *)(lVar26 + 0x10) == 0x102);
              }
            }
            local_210 = (char *)((ulong)local_210 & 0xfffffffe00000000 |
                                (ulong)local_210 & 0xffffffff | uVar22 << 0x20);
            lVar26 = FUN_008fd190(plVar16,"guildName");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 == lVar26) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "guildName";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x9;
              lVar26 = FUN_008feca4(plVar16,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar26 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "guildName";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x9;
                puVar12 = (undefined8 *)FUN_008feca4(plVar16,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_00e705a0(auStack_1e0,puVar12);
            lVar26 = FUN_008fd190(plVar16,"guildTag");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 == lVar26) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "guildTag";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x8;
              lVar26 = FUN_008feca4(plVar16,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar26 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "guildTag";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x8;
                puVar12 = (undefined8 *)FUN_008feca4(plVar16,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_00e705a0(auStack_1d0,puVar12);
            lVar26 = FUN_008fd190(plVar16,"guildId");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 == lVar26) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "guildId";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x7;
              lVar26 = FUN_008feca4(plVar16,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar26 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "guildId";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x7;
                puVar12 = (undefined8 *)FUN_008feca4(plVar16,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_008fa54c(&local_2b8,puVar12);
            FUN_008fce60(&local_1c0,&local_2b8);
            if (((ulong)local_2b8 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_2a4,local_2a8));
            }
            lVar26 = FUN_008fd190(plVar16,"teamName");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 == lVar26) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "teamName";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x8;
              lVar26 = FUN_008feca4(plVar16,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar26 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "teamName";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x8;
                puVar12 = (undefined8 *)FUN_008feca4(plVar16,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_00e705a0(auStack_1a8,puVar12);
            lVar26 = FUN_008fd190(plVar16,"teamTag");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 == lVar26) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "teamTag";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x7;
              lVar26 = FUN_008feca4(plVar16,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar26 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "teamTag";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x7;
                puVar12 = (undefined8 *)FUN_008feca4(plVar16,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_00e705a0(auStack_198,puVar12);
            lVar26 = FUN_008fd190(plVar16,"teamId");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 == lVar26) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "teamId";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x6;
              lVar26 = FUN_008feca4(plVar16,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar26 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "teamId";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x6;
                puVar12 = (undefined8 *)FUN_008feca4(plVar16,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_008fa54c(&local_2b8,puVar12);
            FUN_008fce60(&local_188,&local_2b8);
            if (((ulong)local_2b8 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_2a4,local_2a8));
            }
            lVar26 = FUN_008fd190(plVar16,"seasonalWins");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 == lVar26) {
              uVar19 = 0;
            }
            else {
              local_2b8 = "seasonalWins";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0xc;
              lVar26 = FUN_008feca4(plVar16,&local_2b8);
              uVar19 = 0;
              if ((*(byte *)(lVar26 + 0x11) >> 2 & 1) != 0) {
                local_2b8 = "seasonalWins";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0xc;
                puVar7 = (undefined4 *)FUN_008feca4(plVar16,&local_2b8);
                uVar19 = *puVar7;
              }
            }
            local_160 = uVar19;
            FUN_00eab92c(plVar16,auStack_158,auStack_128,auStack_f8);
            FUN_0091564c(puVar27,&local_210);
            uVar28 = uVar28 + 1;
            lVar5 = lVar5 + 0x18;
          } while (uVar28 < *(uint *)(plVar11 + 1));
        }
      }
      lVar5 = FUN_008fd190(plVar6,"confirmed");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
        FUN_00e83324(0xfffffffa);
      }
      else {
        local_2b8 = "confirmed";
        local_2a8 = 0x100005;
        pvStack_2b0 = (void *)0x9;
        plVar6 = (long *)FUN_008feca4(plVar6,&local_2b8);
        uVar20 = *(uint *)(param_1 + 0x270);
        if (uVar20 != 0) {
          uVar28 = 0;
          puVar24 = (undefined1 *)(*(long *)(param_1 + 0x278) + 0x180);
          do {
            uVar28 = uVar28 + 1;
            *puVar24 = 1;
            puVar24 = puVar24 + 0x188;
          } while (uVar28 < uVar20);
        }
        if ((int)plVar6[1] != 0) {
          uVar28 = 0;
          do {
            plVar11 = (long *)(*plVar6 + uVar28 * 0x18);
            lVar5 = FUN_008fd190(plVar11,"availability");
            puVar27 = (uint *)(plVar11 + 1);
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              uVar18 = 0;
            }
            else {
              local_2b8 = "availability";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0xc;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              uVar18 = 0;
              if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
                local_2b8 = "availability";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0xc;
                puVar13 = (undefined2 *)FUN_008feca4(plVar11,&local_2b8);
                uVar18 = *puVar13;
              }
            }
            local_210 = (char *)CONCAT62(local_210._2_6_,uVar18);
            lVar5 = FUN_008fd190(plVar11,"handle");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "handle";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x6;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "handle";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x6;
                puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_00e705a0(auStack_1f0,puVar12);
            lVar5 = FUN_008fd190(plVar11,"uuid");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "uuid";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x4;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "uuid";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x4;
                puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_008fa54c(&local_2b8,puVar12);
            FUN_008fce60(&local_208,&local_2b8);
            if (((ulong)local_2b8 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_2a4,local_2a8));
            }
            lVar5 = FUN_008fd190(plVar11,"banTTL");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              iVar4 = 0;
            }
            else {
              local_2b8 = "banTTL";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x6;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              iVar4 = 0;
              if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
                local_2b8 = "banTTL";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x6;
                piVar14 = (int *)FUN_008feca4(plVar11,&local_2b8);
                iVar4 = *piVar14;
              }
            }
            local_170 = (double)iVar4;
            lVar5 = FUN_008fd190(plVar11,"favorite");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              uVar22 = 0;
            }
            else {
              local_2b8 = "favorite";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x8;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              uVar22 = 0;
              if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
                local_2b8 = "favorite";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x8;
                lVar5 = FUN_008feca4(plVar11,&local_2b8);
                uVar22 = (ulong)(*(int *)(lVar5 + 0x10) == 0x102);
              }
            }
            local_210 = (char *)((ulong)local_210 & 0xffffffff00000000 |
                                (ulong)local_210 & 0x7fffffff | uVar22 << 0x1f);
            lVar5 = FUN_008fd190(plVar11,"isDev");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              uVar22 = 0;
            }
            else {
              local_2b8 = "isDev";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x5;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              uVar22 = 0;
              if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
                local_2b8 = "isDev";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x5;
                lVar5 = FUN_008feca4(plVar11,&local_2b8);
                uVar22 = (ulong)(*(int *)(lVar5 + 0x10) == 0x102);
              }
            }
            local_210 = (char *)((ulong)local_210 & 0xfffffffe00000000 |
                                (ulong)local_210 & 0xffffffff | uVar22 << 0x20);
            lVar5 = FUN_008fd190(plVar11,"ascensionCombinedRank");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              uVar17 = 0;
            }
            else {
              local_2b8 = "ascensionCombinedRank";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x15;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              uVar17 = 0;
              if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
                local_2b8 = "ascensionCombinedRank";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x15;
                puVar7 = (undefined4 *)FUN_008feca4(plVar11,&local_2b8);
                uVar17 = (undefined1)*puVar7;
              }
            }
            local_210._0_3_ = CONCAT12(uVar17,(undefined2)local_210);
            lVar5 = FUN_008fd190(plVar11,"level");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              uVar20 = 0;
            }
            else {
              local_2b8 = "level";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x5;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              uVar20 = 0;
              if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
                local_2b8 = "level";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x5;
                puVar15 = (uint *)FUN_008feca4(plVar11,&local_2b8);
                uVar20 = *puVar15;
              }
            }
            local_210 = (char *)((ulong)local_210 & 0xffffffff80ffffff |
                                (ulong)((uVar20 & 0x7f) << 0x18));
            lVar5 = FUN_008fd190(plVar11,"guildName");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "guildName";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x9;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "guildName";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x9;
                puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_00e705a0(auStack_1e0,puVar12);
            lVar5 = FUN_008fd190(plVar11,"guildTag");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "guildTag";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x8;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "guildTag";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x8;
                puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_00e705a0(auStack_1d0,puVar12);
            lVar5 = FUN_008fd190(plVar11,"guildId");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "guildId";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x7;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "guildId";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x7;
                puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_008fa54c(&local_2b8,puVar12);
            FUN_008fce60(&local_1c0,&local_2b8);
            if (((ulong)local_2b8 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_2a4,local_2a8));
            }
            lVar5 = FUN_008fd190(plVar11,"teamName");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "teamName";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x8;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "teamName";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x8;
                puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_00e705a0(auStack_1a8,puVar12);
            lVar5 = FUN_008fd190(plVar11,"teamTag");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "teamTag";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x7;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "teamTag";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x7;
                puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_00e705a0(auStack_198,puVar12);
            lVar5 = FUN_008fd190(plVar11,"teamId");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "teamId";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x6;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "teamId";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x6;
                puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_008fa54c(&local_2b8,puVar12);
            FUN_008fce60(&local_188,&local_2b8);
            if (((ulong)local_2b8 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_2a4,local_2a8));
            }
            lVar5 = FUN_008fd190(plVar11,"availabilityElapsed");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              uVar19 = 0;
            }
            else {
              local_2b8 = "availabilityElapsed";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x13;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              uVar19 = 0;
              if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
                local_2b8 = "availabilityElapsed";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x13;
                puVar7 = (undefined4 *)FUN_008feca4(plVar11,&local_2b8);
                uVar19 = *puVar7;
              }
            }
            local_168 = uVar19;
            lVar5 = FUN_008fd190(plVar11,"type");
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_2b8 = "type";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0x4;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_2b8 = "type";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x4;
                puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_008fa54c(&local_360,puVar12);
            uVar23 = (ulong)((byte)local_360 >> 1);
            uVar22 = uVar23;
            if (((ulong)local_360 & 1) != 0) {
              uVar22 = local_358;
            }
            if (uVar22 == 7) {
              iVar4 = FUN_0090d610(&local_360,0,0xffffffffffffffff,"unknown",7);
              if (iVar4 != 0) {
                uVar23 = (ulong)((byte)local_360 >> 1);
                goto LAB_00913348;
              }
              local_164 = 0;
            }
            else {
LAB_00913348:
              uVar22 = uVar23;
              if (((byte)local_360 & 1) != 0) {
                uVar22 = local_358;
              }
              bVar1 = (byte)local_360;
              if (uVar22 == 5) {
                iVar4 = FUN_0090d610(&local_360,0,0xffffffffffffffff,"guild",5);
                if (iVar4 == 0) {
                  local_164 = 1;
                  goto LAB_00913418;
                }
                uVar23 = (ulong)((byte)local_360 >> 1);
                bVar1 = (byte)local_360;
              }
              uVar22 = uVar23;
              if ((bVar1 & 1) != 0) {
                uVar22 = local_358;
              }
              if (uVar22 == 4) {
                iVar4 = FUN_0090d610(&local_360,0,0xffffffffffffffff,"team",4);
                if (iVar4 == 0) {
                  local_164 = 2;
                  goto LAB_00913418;
                }
                uVar23 = (ulong)((byte)local_360 >> 1);
                bVar1 = (byte)local_360;
              }
              if ((bVar1 & 1) != 0) {
                uVar23 = local_358;
              }
              if ((uVar23 == 6) &&
                 (iVar4 = FUN_0090d610(&local_360,0,0xffffffffffffffff,"friend",6), iVar4 == 0)) {
                local_164 = 3;
              }
            }
LAB_00913418:
            local_c8 = 0xffffffff;
            if (local_b8 != 0) {
              if ((int)local_c0 != 0) {
                lVar5 = (local_c0 & 0xffffffff) << 4;
                puVar12 = (undefined8 *)(local_b8 + 8);
                do {
                  if ((void *)*puVar12 != (void *)0x0) {
                    operator_delete__((void *)*puVar12);
                    puVar12[-1] = 0;
                    *puVar12 = 0;
                  }
                  lVar5 = lVar5 + -0x10;
                  puVar12 = puVar12 + 2;
                } while (lVar5 != 0);
              }
              local_c0 = local_c0 & 0xffffffff00000000;
            }
            local_b0 = 0;
            if ((local_a8 & 1) == 0) {
              local_a8 = local_a8 & 0xffffffffffff0000;
            }
            else {
              *local_98 = 0;
              local_a0 = 0;
            }
            lVar5 = FUN_008fd190(plVar11);
            if (*plVar11 + (ulong)*puVar27 * 0x30 == lVar5) {
              uVar19 = 0;
            }
            else {
              local_2b8 = "seasonalWins";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0xc;
              lVar5 = FUN_008feca4(plVar11,&local_2b8);
              uVar19 = 0;
              if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
                local_2b8 = "seasonalWins";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0xc;
                puVar7 = (undefined4 *)FUN_008feca4(plVar11,&local_2b8);
                uVar19 = *puVar7;
              }
            }
            local_160 = uVar19;
            FUN_00eab92c(plVar11,auStack_158,auStack_128,auStack_f8);
            lVar5 = FUN_008fd190(plVar11,"inMatchInfo");
            if (*plVar11 + (ulong)*puVar27 * 0x30 != lVar5) {
              local_2b8 = "inMatchInfo";
              local_2a8 = 0x100005;
              pvStack_2b0 = (void *)0xb;
              plVar11 = (long *)FUN_008feca4(plVar11,&local_2b8);
              lVar5 = FUN_008fd190(plVar11,"gameMode");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar5) {
LAB_009135c0:
                local_c8 = 0xffffffff;
              }
              else {
                local_2b8 = "gameMode";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x8;
                lVar5 = FUN_008feca4(plVar11,&local_2b8);
                if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_009135c0;
                local_2b8 = "gameMode";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x8;
                puVar7 = (undefined4 *)FUN_008feca4(plVar11,&local_2b8);
                local_c8 = *puVar7;
              }
              lVar5 = FUN_008fd190(plVar11,"party");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar5) {
                local_2b8 = "party";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x5;
                lVar5 = FUN_008feca4(plVar11,&local_2b8);
                if (*(int *)(lVar5 + 0x10) == 4) {
                  local_2b8 = "party";
                  local_2a8 = 0x100005;
                  pvStack_2b0 = (void *)0x5;
                  plVar16 = (long *)FUN_008feca4(plVar11,&local_2b8);
                  if ((int)plVar16[1] != 0) {
                    lVar5 = 0;
                    uVar22 = 0;
                    do {
                      lVar25 = *plVar16;
                      FUN_00e70510(&local_2b8);
                      lVar26 = lVar25 + lVar5;
                      if ((*(byte *)(lVar26 + 0x12) >> 6 & 1) == 0) {
                        lVar26 = *(long *)(lVar25 + lVar5);
                      }
                      FUN_00e705a0(&local_2b8,lVar26);
                      FUN_0090ea30(&local_c0,&local_2b8);
                      if (pvStack_2b0 != (void *)0x0) {
                        operator_delete__(pvStack_2b0);
                        local_2b8 = (char *)0x0;
                        pvStack_2b0 = (void *)0x0;
                      }
                      uVar22 = uVar22 + 1;
                      lVar5 = lVar5 + 0x18;
                    } while (uVar22 < *(uint *)(plVar16 + 1));
                  }
                }
              }
              lVar5 = FUN_008fd190(plVar11,"partyType");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar5) {
                puVar12 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_2b8 = "partyType";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x9;
                lVar5 = FUN_008feca4(plVar11,&local_2b8);
                puVar12 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                  local_2b8 = "partyType";
                  local_2a8 = 0x100005;
                  pvStack_2b0 = (void *)0x9;
                  puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                  if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                    puVar12 = (undefined8 *)*puVar12;
                  }
                }
              }
              FUN_008fa54c(&local_250,puVar12);
              uVar23 = (ulong)((byte)local_250 >> 1);
              uVar22 = uVar23;
              if (((ulong)local_250 & 1) != 0) {
                uVar22 = local_248;
              }
              if (uVar22 == 5) {
                iVar4 = FUN_0090d610(&local_250,0,0xffffffffffffffff,"party",5);
                if (iVar4 != 0) {
                  uVar23 = (ulong)((byte)local_250 >> 1);
                  goto LAB_009137c8;
                }
                local_b0 = 3;
              }
              else {
LAB_009137c8:
                uVar22 = uVar23;
                if (((byte)local_250 & 1) != 0) {
                  uVar22 = local_248;
                }
                bVar1 = (byte)local_250;
                if (uVar22 == 5) {
                  iVar4 = FUN_0090d610(&local_250,0,0xffffffffffffffff,"guild",5);
                  if (iVar4 == 0) {
                    local_b0 = 1;
                    goto LAB_009138b8;
                  }
                  uVar23 = (ulong)((byte)local_250 >> 1);
                  bVar1 = (byte)local_250;
                }
                uVar22 = uVar23;
                if ((bVar1 & 1) != 0) {
                  uVar22 = local_248;
                }
                if (uVar22 == 4) {
                  iVar4 = FUN_0090d610(&local_250,0,0xffffffffffffffff,"team",4);
                  if (iVar4 == 0) {
                    local_b0 = 2;
                    goto LAB_009138b8;
                  }
                  uVar23 = (ulong)((byte)local_250 >> 1);
                  bVar1 = (byte)local_250;
                }
                if ((bVar1 & 1) != 0) {
                  uVar23 = local_248;
                }
                if ((uVar23 == 4) &&
                   (iVar4 = FUN_0090d610(&local_250,0,0xffffffffffffffff,"none",4), iVar4 == 0)) {
                  local_b0 = 0;
                }
              }
LAB_009138b8:
              lVar5 = FUN_008fd190(plVar11,"hero");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar5) {
                puVar12 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_2b8 = "hero";
                local_2a8 = 0x100005;
                pvStack_2b0 = (void *)0x4;
                lVar5 = FUN_008feca4(plVar11,&local_2b8);
                puVar12 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                  local_2b8 = "hero";
                  local_2a8 = 0x100005;
                  pvStack_2b0 = (void *)0x4;
                  puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_2b8);
                  if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                    puVar12 = (undefined8 *)*puVar12;
                  }
                }
              }
              FUN_008fa54c(&local_2b8,puVar12);
              FUN_008fce60(&local_a8,&local_2b8);
              if (((ulong)local_2b8 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_2a4,local_2a8));
              }
              if (((ulong)local_250 & 1) != 0) {
                operator_delete(local_240);
              }
            }
            local_90 = 0;
            FUN_00915780(param_1,&local_210);
            if (((ulong)local_360 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_34c,local_350));
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < *(uint *)(plVar6 + 1));
        }
      }
      FUN_0091587c(&local_210);
    }
  }
  uVar28 = (ulong)*(uint *)(param_1 + 0x270);
  if (*(uint *)(param_1 + 0x270) != 0) {
    lVar5 = 0;
    uVar22 = 0;
    do {
      lVar26 = *(long *)(param_1 + 0x278) + lVar5;
      if (*(char *)(lVar26 + 0x180) != '\0') {
        FUN_009186fc(param_1 + 0x270,lVar26,lVar26 + 0x188);
        uVar28 = (ulong)*(uint *)(param_1 + 0x270);
      }
      uVar22 = uVar22 + 1;
      lVar5 = lVar5 + 0x188;
    } while (uVar22 < uVar28);
  }
  FUN_0099cf94(param_1 + 0x2a0,*(undefined4 *)(param_1 + 0x280));
  if (DAT_02c091f8 != 0) {
    plVar6 = (long *)(DAT_02c091f8 + -8);
    while (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar11 = plVar6 + 1;
      plVar6 = (long *)0x0;
      if (*plVar11 != 0) {
        plVar6 = (long *)(*plVar11 + -8);
      }
    }
  }
LAB_00913a48:
  puVar12 = local_3a8;
  if (local_3a8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_3a8);
    operator_delete(puVar12);
  }
  free(local_390);
  if (local_398 != (void *)0x0) {
    operator_delete(local_398);
  }
  if (*(long *)(lVar2 + 0x28) == lVar21) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

