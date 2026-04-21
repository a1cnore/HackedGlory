// functions/00a24 — 15 functions
#include "libGameKindred.h"




void FUN_00a24160(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1ce8) = param_2;
  FUN_00a241b0(param_1,param_3);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x14;
  FUN_00a239fc(param_1 + 0xb8,0,0,0);
  FUN_00a24238(param_1);
  return;
}




void FUN_00a241b0(long param_1,byte param_2)

{
  long lVar1;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e6a8a8(auStack_58,"ability_icon_%d",(int)(char)param_2);
  FUN_00f0e578(param_1 + 0x270,auStack_58);
  FUN_00f0e578(param_1 + 0xf60,auStack_58);
  *(ushort *)(param_1 + 0x1cf0) = *(ushort *)(param_1 + 0x1cf0) & 0xff00 | (ushort)param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a24238(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  lVar7 = tpidr_el0;
  local_a8 = *(long *)(lVar7 + 0x28);
  if ((int)param_3[0x39d] != -1) {
    *(uint *)((long)param_3 + 0x23c) = *(uint *)((long)param_3 + 0x23c) & 0xffffffbf;
    *(uint *)((long)param_3 + 0x10d4) = *(uint *)((long)param_3 + 0x10d4) & 0xffffffbf;
    *(uint *)((long)param_3 + 0x1b64) = *(uint *)((long)param_3 + 0x1b64) & 0xffffffbf;
    plVar1 = param_3 + 0x37;
    local_b0 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    local_b0 = local_b0 * 0.98;
    fStack_ac = param_2 * 0.98;
    fVar18 = fStack_ac;
    FUN_00f13f18(plVar1,&local_b0);
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar22 = fVar18 * 0.5;
    FUN_00f13e54(plVar1);
    fVar18 = fVar18 * 0.5;
    fVar22 = fVar18 - fVar22;
    if ((*(float *)(param_3 + 0x3f) != 0.0) ||
       (fVar18 = *(float *)((long)param_3 + 0x1fc), fVar18 != fVar22)) {
      *(undefined4 *)(param_3 + 0x3f) = 0;
      *(float *)((long)param_3 + 0x1fc) = fVar22;
      FUN_0091ada4(plVar1);
    }
    local_b0 = (float)FUN_00f13e54(plVar1);
    fStack_ac = fVar18;
    FUN_00f13f18(param_3 + 0x1d5,&local_b0);
    fVar22 = (float)FUN_00f13e54(plVar1);
    FUN_00f13e54(plVar1);
    if (fVar18 <= fVar22) {
      fVar22 = fVar18;
    }
    plVar2 = param_3 + 0x2b7;
    if ((*(float *)(param_3 + 0x2c1) != 0.5) || (*(float *)((long)param_3 + 0x160c) != 1.0)) {
      param_3[0x2c1] = 0x3f8000003f000000;
      FUN_0091ada4(plVar2);
    }
    plVar3 = param_3 + 0x20a;
    if ((*(float *)(param_3 + 0x2bf) != 0.0) ||
       (*(float *)((long)param_3 + 0x15fc) != fVar22 * 0.52)) {
      *(undefined4 *)(param_3 + 0x2bf) = 0;
      *(float *)((long)param_3 + 0x15fc) = fVar22 * 0.52;
      FUN_0091ada4(plVar2);
    }
    fVar18 = (float)FUN_00f0e700(plVar2);
    fVar19 = 0.4;
    FUN_00f0e700(plVar2);
    fVar16 = (fVar22 * 0.4) / fVar19;
    if ((*(float *)(param_3 + 0x2c0) != fVar22 / fVar18) ||
       (fVar19 = *(float *)((long)param_3 + 0x1604), fVar19 != fVar16)) {
      *(float *)(param_3 + 0x2c0) = fVar22 / fVar18;
      *(float *)((long)param_3 + 0x1604) = fVar16;
      FUN_0091ada4(plVar2);
    }
    fVar18 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f0e700(plVar2);
    fVar19 = fVar19 * 0.3;
    FUN_00f13f08(fVar18 * 0.8,plVar3);
    FUN_00f13e54(plVar3);
    fVar18 = fVar19;
    FUN_00f13e54(plVar1);
    fVar18 = fVar18 * 0.5 * 0.8;
    fVar19 = fVar19 + fVar18;
    if ((*(float *)(param_3 + 0x212) != 0.0) ||
       (fVar18 = *(float *)((long)param_3 + 0x1094), fVar18 != fVar19)) {
      *(undefined4 *)(param_3 + 0x212) = 0;
      *(float *)((long)param_3 + 0x1094) = fVar19;
      FUN_0091ada4(plVar3);
    }
    plVar2 = param_3 + 0x4e;
    fVar16 = (float)FUN_00f0e700(plVar2);
    fVar18 = fVar22 / fVar18;
    if ((*(float *)(param_3 + 0x57) != fVar22 / fVar16) ||
       (*(float *)((long)param_3 + 700) != fVar18)) {
      *(float *)(param_3 + 0x57) = fVar22 / fVar16;
      *(float *)((long)param_3 + 700) = fVar18;
      FUN_0091ada4(plVar2);
    }
    fVar16 = (float)FUN_00f0e700(plVar2);
    fVar18 = fVar22 / fVar18;
    if ((*(float *)(param_3 + 0x1f5) != fVar22 / fVar16) ||
       (*(float *)((long)param_3 + 0xfac) != fVar18)) {
      *(float *)(param_3 + 0x1f5) = fVar22 / fVar16;
      *(float *)((long)param_3 + 0xfac) = fVar18;
      FUN_0091ada4(param_3 + 0x1ec);
    }
    fVar16 = (float)FUN_00f0e700(param_3 + 0x6c);
    fVar16 = (fVar22 * 1.05) / fVar16;
    fVar18 = (fVar22 * 1.05) / fVar18;
    if ((*(float *)(param_3 + 0x75) != fVar16) || (*(float *)((long)param_3 + 0x3ac) != fVar18)) {
      *(float *)(param_3 + 0x75) = fVar16;
      *(float *)((long)param_3 + 0x3ac) = fVar18;
      FUN_0091ada4(param_3 + 0x6c);
    }
    fVar16 = (float)FUN_00f0e700(param_3 + 0x8c);
    fVar18 = fVar22 / fVar18;
    if ((*(float *)(param_3 + 0x95) != fVar22 / fVar16) ||
       (*(float *)((long)param_3 + 0x4ac) != fVar18)) {
      *(float *)(param_3 + 0x95) = fVar22 / fVar16;
      *(float *)((long)param_3 + 0x4ac) = fVar18;
      FUN_0091ada4(param_3 + 0x8c);
    }
    fVar16 = (float)FUN_00f0e700(param_3 + 0xaa);
    fVar18 = fVar22 / fVar18;
    if ((*(float *)(param_3 + 0xb3) != fVar22 / fVar16) ||
       (*(float *)((long)param_3 + 0x59c) != fVar18)) {
      *(float *)(param_3 + 0xb3) = fVar22 / fVar16;
      *(float *)((long)param_3 + 0x59c) = fVar18;
      FUN_0091ada4(param_3 + 0xaa);
    }
    fVar16 = (float)FUN_00f0e700(param_3 + 200);
    fVar18 = fVar22 / fVar18;
    if ((*(float *)(param_3 + 0xd1) != fVar22 / fVar16) ||
       (*(float *)((long)param_3 + 0x68c) != fVar18)) {
      *(float *)(param_3 + 0xd1) = fVar22 / fVar16;
      *(float *)((long)param_3 + 0x68c) = fVar18;
      FUN_0091ada4(param_3 + 200);
    }
    fVar16 = (float)FUN_00f0e700(param_3 + 0xe6);
    fVar18 = fVar22 / fVar18;
    if ((*(float *)(param_3 + 0xef) != fVar22 / fVar16) ||
       (*(float *)((long)param_3 + 0x77c) != fVar18)) {
      *(float *)(param_3 + 0xef) = fVar22 / fVar16;
      *(float *)((long)param_3 + 0x77c) = fVar18;
      FUN_0091ada4(param_3 + 0xe6);
    }
    fVar16 = (float)FUN_00f0e700(param_3 + 0x1b4);
    fVar16 = (fVar22 * 0.7) / fVar16;
    fVar18 = (fVar22 * 0.7) / fVar18;
    if ((*(float *)(param_3 + 0x1bd) != fVar16) || (*(float *)((long)param_3 + 0xdec) != fVar18)) {
      *(float *)(param_3 + 0x1bd) = fVar16;
      *(float *)((long)param_3 + 0xdec) = fVar18;
      FUN_0091ada4(param_3 + 0x1b4);
    }
    FUN_00a24d5c(param_3);
    fVar18 = (float)FUN_00f13e54(plVar1);
    fVar22 = 0.51;
    FUN_00f13e54(plVar1);
    if ((*(float *)(param_3 + 0x134) != fVar18 * 0.51) ||
       (*(float *)((long)param_3 + 0x9a4) != fVar22 * -0.5)) {
      *(float *)(param_3 + 0x134) = fVar18 * 0.51;
      *(float *)((long)param_3 + 0x9a4) = fVar22 * -0.5;
      FUN_0091ada4(param_3 + 300);
    }
    fVar18 = (float)FUN_00f13e54(plVar1);
    fVar16 = 0.49;
    FUN_00f13e54(plVar1);
    fVar22 = fVar16 * -0.48;
    if ((*(float *)(param_3 + 0x152) != fVar18 * 0.49) ||
       (fVar16 = *(float *)((long)param_3 + 0xa94), fVar16 != fVar22)) {
      *(float *)(param_3 + 0x152) = fVar18 * 0.49;
      *(float *)((long)param_3 + 0xa94) = fVar22;
      FUN_0091ada4(param_3 + 0x14a);
    }
    FUN_00f13e54(plVar3);
    fVar18 = fVar16;
    fVar22 = (float)FUN_00f13e54(plVar3);
    uVar9 = FUN_00a24ee0(param_3);
    fVar16 = (fVar16 * fVar22) / (float)uVar9;
    fVar22 = fVar16;
    if ((0.0 < fVar16) && (fVar22 = SQRT(fVar16), NAN(fVar22))) {
      fVar22 = sqrtf(fVar16);
    }
    FUN_00f13e54(plVar3);
    fVar16 = fVar18;
    if (fVar22 <= fVar18) {
      fVar16 = fVar22;
    }
    fVar22 = (float)FUN_00f13e54(plVar3);
    uVar9 = FUN_00a24ee0(param_3);
    iVar10 = FUN_00a24ee0(param_3);
    sVar8 = FUN_00a24f44(param_3);
    bVar5 = *(byte *)((long)param_3 + 0x1cf2);
    *(ushort *)(param_3 + 0x39e) = (ushort)(int3)param_3[0x39e] & 0xff | sVar8 << 8;
    iVar11 = FUN_00a24ee0(param_3);
    if (iVar11 != 0) {
      uVar6 = ((uint)bVar5 << 0x10) >> 0x15 & 1;
      uVar20 = (ulong)(uint)(float)(iVar10 + 1);
      fVar19 = *(float *)(&DAT_01b9f1d8 + (ulong)uVar6 * 4);
      fVar23 = (fVar22 - fVar16 * (float)uVar9) / (float)(iVar10 + 1);
      fVar22 = *(float *)(&DAT_01b9f1d0 + (ulong)uVar6 * 4);
      lVar14 = 0;
      uVar15 = 0;
      lVar13 = 0x1108;
      do {
        plVar4 = (long *)((long)param_3 + lVar13);
        if (uVar15 < *(byte *)((long)param_3 + 0x1cf1)) {
          FUN_00f0e578(plVar4,"hud_ability_level_dot_lit");
          (**(code **)(*plVar4 + 0x48))(plVar4);
          fVar21 = *(float *)((long)param_3 + lVar14 + 0x1150);
          fVar18 = (fVar16 * fVar19) / (float)uVar20;
        }
        else {
          FUN_00f0e578(plVar4,"hud_ability_level_dot_dim");
          (**(code **)(*plVar4 + 0x48))(plVar4);
          fVar21 = *(float *)((long)param_3 + lVar14 + 0x1150);
          fVar18 = (fVar16 * fVar22) / (float)uVar20;
        }
        if ((fVar21 != fVar18) ||
           (fVar21 = *(float *)((long)param_3 + lVar14 + 0x1154), uVar20 = (ulong)(uint)fVar21,
           fVar21 != fVar18)) {
          *(float *)((long)param_3 + lVar14 + 0x1150) = fVar18;
          *(float *)((long)param_3 + lVar14 + 0x1154) = fVar18;
          FUN_0091ada4(plVar4);
        }
        if (uVar15 == 0) {
          fVar18 = (float)FUN_00f13e54(plVar3);
          fVar21 = fVar16 * 0.5 + fVar23 + fVar18 * -0.5;
          FUN_00f13e54(plVar3);
          fVar18 = (float)uVar20 * -0.5;
          if ((*(float *)(param_3 + 0x229) != fVar21) ||
             (uVar20 = (ulong)(uint)*(float *)((long)param_3 + 0x114c),
             *(float *)((long)param_3 + 0x114c) != fVar18)) {
            *(float *)(param_3 + 0x229) = fVar21;
            *(float *)((long)param_3 + 0x114c) = fVar18;
            goto LAB_00a24974;
          }
        }
        else {
          uVar9 = (int)uVar15 - 1;
          fVar18 = *(float *)((long)param_3 + (ulong)uVar9 * 0xf0 + 0x114c);
          fVar21 = fVar16 + fVar23 + *(float *)(param_3 + (ulong)uVar9 * 0x1e + 0x229);
          uVar20 = (ulong)(uint)fVar21;
          if ((*(float *)((long)param_3 + lVar14 + 0x1148) != fVar21) ||
             (*(float *)((long)param_3 + lVar14 + 0x114c) != fVar18)) {
            *(float *)((long)param_3 + lVar14 + 0x1148) = fVar21;
            *(float *)((long)param_3 + lVar14 + 0x114c) = fVar18;
LAB_00a24974:
            FUN_0091ada4((long)param_3 + lVar13);
          }
        }
        uVar15 = uVar15 + 1;
        *(uint *)((long)param_3 + lVar14 + 0x118c) = *(uint *)((long)param_3 + lVar14 + 0x118c) | 4;
        uVar12 = FUN_00a24ee0(param_3);
        fVar18 = (float)uVar20;
        lVar13 = lVar13 + 0xf0;
        lVar14 = lVar14 + 0xf0;
      } while (uVar15 < (uVar12 & 0xffffffff));
    }
    plVar3 = param_3 + 0x2d5;
    local_b0 = (float)FUN_00f13e54(plVar1);
    fStack_ac = fVar18;
    FUN_00f13f18(plVar3,&local_b0);
    plVar1 = param_3 + 0x309;
    uVar17 = FUN_00f13e54(plVar3);
    FUN_00f13e54(plVar3);
    fVar18 = fVar18 * 1.9;
    FUN_00f13f08(uVar17,plVar1);
    fVar22 = (float)FUN_00f13e54(plVar1);
    FUN_00f13e54(plVar1);
    fVar19 = fVar18 * 0.5;
    fVar16 = (float)FUN_00f0e700(param_3 + 800);
    fVar18 = fVar19 / fVar18;
    if ((*(float *)(param_3 + 0x329) != fVar22 / fVar16) ||
       (*(float *)((long)param_3 + 0x194c) != fVar18)) {
      *(float *)(param_3 + 0x329) = fVar22 / fVar16;
      *(float *)((long)param_3 + 0x194c) = fVar18;
      FUN_0091ada4(param_3 + 800);
    }
    fVar16 = (float)FUN_00f0e700(param_3 + 0x33e);
    fVar19 = fVar19 / fVar18;
    if ((*(float *)(param_3 + 0x347) != fVar22 / fVar16) ||
       (*(float *)((long)param_3 + 0x1a3c) != fVar19)) {
      *(float *)(param_3 + 0x347) = fVar22 / fVar16;
      *(float *)((long)param_3 + 0x1a3c) = fVar19;
      FUN_0091ada4(param_3 + 0x33e);
    }
    if (param_3[0x1d4] != 0) {
      FUN_00f07940(0x40c00000,0x40c00000,param_3[0x1d4],0,plVar2,0);
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a24af8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 5;
  *(undefined4 *)(param_1 + 0x1ce8) = 0xffffffff;
  uVar1 = *(uint3 *)(param_1 + 0x1cf0) & 0xf7ff00;
  *(char *)(param_1 + 0x1cf2) = (char)(uVar1 >> 0x10);
  *(ushort *)(param_1 + 0x1cf0) = (ushort)uVar1 | 0xff;
  lVar2 = param_1 + 0x1108;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffeb;
  do {
    FUN_00f0e578(lVar2,"hud_ability_level_dot_dim");
    lVar3 = lVar3 + -1;
    *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
    lVar2 = lVar2 + 0xf0;
  } while (lVar3 != 0);
  return;
}




void FUN_00a24b9c(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x1cf2) =
       *(byte *)(param_1 + 0x1cf2) & 0xfd | (byte)(((param_2 & 1) << 0x11) >> 0x10);
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_00a24bcc();
  return;
}




void FUN_00a24bcc(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = param_3 + 0x1848;
  *(byte *)(param_3 + 0x1cf2) = *(byte *)(param_3 + 0x1cf2) & 0xfe;
  FUN_00f01980(lVar1);
  FUN_00f13e54(lVar1);
  fVar2 = param_2 * 0.5;
  FUN_00f13e54(param_3 + 0x16a8);
  fVar2 = fVar2 + param_2 * 0.5;
  if ((*(float *)(param_3 + 0x1888) != 0.0) || (*(float *)(param_3 + 0x188c) != fVar2)) {
    *(undefined4 *)(param_3 + 0x1888) = 0;
    *(float *)(param_3 + 0x188c) = fVar2;
    FUN_0091ada4(lVar1);
  }
  *(uint *)(param_3 + 0x18cc) = *(uint *)(param_3 + 0x18cc) & 0xfffffffb;
  return;
}




undefined8 FUN_00a24c74(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00f004ac();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00f004ec(param_1), (uVar1 & 1) == 0)) {
    uVar1 = FUN_00f004ac(param_1 + 0x1b8);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_00f004ec(param_1 + 0x1b8);
      return uVar2;
    }
  }
  return 1;
}




void thunk_FUN_00a24ccc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1ce8) != -1) {
    FUN_00a25bb4(param_1 + 0xb8);
    FUN_00a25508(param_1);
    FUN_00a255b4(param_1);
    FUN_00a253ac(param_1);
    FUN_00a2564c(param_1);
    uVar1 = FUN_0093d828();
    if ((uVar1 & 1) != 0) {
      FUN_00a25bfc(param_1);
      return;
    }
  }
  return;
}




void FUN_00a24ccc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1ce8) != -1) {
    FUN_00a25bb4(param_1 + 0xb8);
    FUN_00a25508(param_1);
    FUN_00a255b4(param_1);
    FUN_00a253ac(param_1);
    FUN_00a2564c(param_1);
    uVar1 = FUN_0093d828();
    if ((uVar1 & 1) != 0) {
      FUN_00a25bfc(param_1);
      return;
    }
  }
  return;
}




bool FUN_00a24d40(long param_1)

{
  return *(int *)(param_1 + 0x1ce8) != -1;
}




void FUN_00a24d5c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)FUN_00f0eac0(param_3 + 0x270);
  lVar1 = param_3 + 0x830;
  fVar4 = param_2;
  FUN_00f0d548(lVar1);
  if (0.0 < fVar4) {
    FUN_00f0d548(lVar1);
    fVar3 = param_2 / fVar4;
    if ((*(float *)(param_3 + 0x878) != fVar3) ||
       (fVar4 = *(float *)(param_3 + 0x87c), fVar4 != fVar3)) {
      *(float *)(param_3 + 0x878) = fVar3;
      *(float *)(param_3 + 0x87c) = fVar3;
      FUN_0091ada4(lVar1);
    }
  }
  fVar3 = (float)FUN_00f01c20(lVar1);
  if (fVar2 < fVar3) {
    fVar3 = (float)FUN_00f01c20(lVar1);
    fVar4 = *(float *)(param_3 + 0x878);
    fVar2 = fVar2 / fVar3;
    if ((fVar4 != fVar2) || (fVar4 = *(float *)(param_3 + 0x87c), fVar4 != fVar2)) {
      *(float *)(param_3 + 0x878) = fVar2;
      *(float *)(param_3 + 0x87c) = fVar2;
      FUN_0091ada4(lVar1);
    }
  }
  lVar1 = param_3 + 0xb80;
  FUN_00f0d548(lVar1);
  if (0.0 < fVar4) {
    FUN_00f0d548(lVar1);
    fVar2 = param_2 / fVar4;
    if ((*(float *)(param_3 + 0xbc8) != fVar2) ||
       (fVar4 = *(float *)(param_3 + 0xbcc), fVar4 != fVar2)) {
      *(float *)(param_3 + 0xbc8) = fVar2;
      *(float *)(param_3 + 0xbcc) = fVar2;
      FUN_0091ada4(lVar1);
    }
  }
  lVar1 = param_3 + 0xa50;
  FUN_00f0d548(lVar1);
  if (0.0 < fVar4) {
    fVar2 = *(float *)(&DAT_01b9f1e0 + (ulong)((*(byte *)(param_3 + 0x1cf2) & 0x20) == 0) * 4);
    FUN_00f0d548(lVar1);
    fVar4 = (param_2 * fVar2) / fVar4;
    if ((*(float *)(param_3 + 0xa98) != fVar4) || (*(float *)(param_3 + 0xa9c) != fVar4)) {
      *(float *)(param_3 + 0xa98) = fVar4;
      *(float *)(param_3 + 0xa9c) = fVar4;
      FUN_0091ada4(lVar1);
      return;
    }
  }
  return;
}




void FUN_00a24ee0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x1a8);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1b0) == (int)plVar1[1]) {
      uVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x1b0) = DAT_03214ce8;
    }
  }
  uVar2 = FUN_00d9eb64(uVar2);
  FUN_00d548e8(uVar2,*(undefined4 *)(param_1 + 0x1ce8));
  return;
}




void FUN_00a24f44(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d535a4(lVar1,*(undefined4 *)(param_1 + 0x1ce8));
  return;
}




void FUN_00a24f9c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xea0);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) =
         *(uint *)(lVar1 + 0x84) & 0xfffffff8 | *(uint *)(lVar1 + 0x84) & 3 | (param_2 & 1) << 2;
  }
  return;
}




void FUN_00a24fb8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = param_1 + 0x360;
  FUN_00f01980(lVar1);
  FUN_00f01980(param_1 + 0x460);
  uVar2 = FUN_00a250a8();
  if ((param_2 & 1) == 0) {
    FUN_00efcac4(0x3eb33333,uVar2);
    FUN_00efddc4(0,uVar2);
    FUN_00f022a0(lVar1,uVar2);
    uVar2 = FUN_00a250a8();
    FUN_00efcac4(0x3eb33333);
    uVar3 = 0;
  }
  else {
    FUN_00efcac4(0x3dcccccd,uVar2);
    FUN_00efddc4(0x3f666666,uVar2);
    FUN_00f022a0(lVar1,uVar2);
    uVar2 = FUN_00a250a8();
    FUN_00efcac4(0x3dcccccd);
    uVar3 = 0x3f19999a;
  }
  FUN_00efddc4(uVar3,uVar2);
  FUN_00f022a0(param_1 + 0x460,uVar2);
  return;
}

