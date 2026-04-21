// functions/009b3 — 24 functions
#include "libGameKindred.h"




void FUN_009b3164(long param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  iVar1 = *param_2;
  lVar3 = 0;
  iVar6 = 0;
  do {
    if (*(int *)(param_1 + lVar3 + 0x1a18) == iVar1) {
      iVar6 = *(int *)(param_1 + lVar3 + 0x1a1c);
      *(undefined1 *)(param_1 + 0x1a20 + lVar3) = 0;
    }
    lVar3 = lVar3 + 0xc;
  } while (lVar3 != 0xd8);
  if (*(long *)(param_1 + 0x1bf0) != 0) {
    lVar3 = -0x1980;
    do {
      if ((iVar6 == *(int *)(param_1 + lVar3 + 0x1a18)) && (iVar1 == *(int *)(param_1 + 0x1c08))) {
        lVar4 = *(long *)(param_1 + 0x1bf0);
        if ((*(byte *)(param_1 + 0x1d12) >> 5 & 1) == 0) {
          if (*(int *)(lVar4 + 0x14) == 1) {
            *(undefined4 *)(lVar4 + 0x14) = 0;
            *(char *)(param_1 + 0x1d14) = '\x01';
          }
        }
        else {
          lVar5 = (long)*(char *)(param_1 + 0x1d14);
          if (lVar5 == -1) {
            uVar2 = 0xffffffff;
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + lVar5 * 0x10 + 0x1af0);
          }
          FUN_009b2c9c(*(undefined4 *)(lVar4 + 0x18),param_1,iVar1,*(int *)(lVar4 + 0x14),0,uVar2);
        }
      }
      lVar3 = lVar3 + 0x88;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_009b3264(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(auStack_30);
  FUN_009b3164(param_1,auStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b32bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  int local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_30);
  uVar3 = 0;
  pcVar4 = (char *)(param_1 + 0x1a20);
  while ((*(int *)(pcVar4 + -8) != local_30[0] || (*pcVar4 == '\0'))) {
    uVar3 = uVar3 + 1;
    pcVar4 = pcVar4 + 0xc;
    if (0x11 < uVar3) {
      uVar2 = 0;
LAB_009b3324:
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
  }
  uVar2 = 1;
  goto LAB_009b3324;
}




undefined8 FUN_009b3348(long param_1,int *param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x1a20);
  while ((*(int *)(pcVar2 + -8) != *param_2 || (*pcVar2 == '\0'))) {
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 0xc;
    if (0x11 < uVar1) {
      return 0;
    }
  }
  return 1;
}




void FUN_009b338c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  int local_48 [2];
  int local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_40);
  thunk_FUN_00d9ff34(local_48,param_3);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x1a1c);
  while ((piVar4[-1] != local_40[0] || (*piVar4 != local_48[0]))) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 3;
    if (0x11 < uVar3) {
      uVar2 = 0;
LAB_009b3410:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
  }
  uVar2 = 1;
  goto LAB_009b3410;
}




undefined8 FUN_009b3438(long param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x1a1c);
  while ((piVar2[-1] != *param_2 || (*piVar2 != *param_3))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 3;
    if (0x11 < uVar1) {
      return 0;
    }
  }
  return 1;
}




void FUN_009b3484(long param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01995184(*(undefined8 *)(param_1 + 0x28),param_3);
  FUN_009b34cc(param_1,param_2,uVar1,param_4 & 1);
  return;
}




void FUN_009b34cc(long param_1,float *param_2,short param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_68;
  float local_64;
  float fStack_60;
  float local_5c;
  undefined8 local_58;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == -1) {
    uVar2 = 0;
  }
  else {
    FUN_0198fb50(param_1 + 0x28,&local_68,1,param_3,1);
    param_2[9] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = 0.0;
    param_2[0xb] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xf] = 1.0;
    *param_2 = local_48;
    param_2[5] = fStack_44;
    fVar5 = local_64 * local_64 + fStack_60 * fStack_60;
    fVar9 = local_64 * local_68 + fStack_60 * local_5c;
    fVar16 = local_64 * local_68 - fStack_60 * local_5c;
    fVar17 = fStack_60 * local_68 - local_64 * local_5c;
    fVar12 = fStack_60 * fStack_60 + local_68 * local_68;
    fVar18 = fStack_60 * local_68 + local_64 * local_5c;
    fVar19 = local_64 * fStack_60 + local_68 * local_5c;
    fVar3 = local_64 * fStack_60 - local_68 * local_5c;
    fVar4 = local_64 * local_64 + local_68 * local_68;
    fVar17 = fVar17 + fVar17;
    fVar19 = fVar19 + fVar19;
    fVar9 = fVar9 + fVar9;
    fVar16 = fVar16 + fVar16;
    fVar6 = 1.0 - (fVar5 + fVar5);
    fVar13 = 1.0 - (fVar12 + fVar12);
    fVar20 = fVar19 * 0.0;
    fVar11 = fVar17 * 0.0;
    fVar18 = fVar18 + fVar18;
    fVar3 = fVar3 + fVar3;
    fVar4 = 1.0 - (fVar4 + fVar4);
    fVar12 = fVar16 * 0.0;
    fVar7 = fVar6 * 0.0;
    fVar10 = fVar9 * 0.0;
    fVar14 = fVar13 * 0.0;
    fVar8 = fVar18 * 0.0;
    fVar15 = fVar3 * 0.0;
    fVar5 = fVar4 * 0.0;
    param_2[1] = fVar15 + fVar9 * local_48 + fVar14;
    param_2[2] = fVar5 + fVar17 * local_48 + fVar20;
    param_2[5] = fVar15 + fVar10 + fVar13 * fStack_44;
    param_2[6] = fVar5 + fVar11 + fVar19 * fStack_44;
    param_2[9] = fVar3 * local_40 + fVar10 + fVar14;
    param_2[10] = fVar4 * local_40 + fVar11 + fVar20;
    *param_2 = fVar8 + fVar6 * local_48 + fVar12;
    param_2[4] = fVar8 + fVar7 + fVar16 * fStack_44;
    param_2[8] = fVar18 * local_40 + fVar7 + fVar12;
    *(ulong *)(param_2 + 0xc) =
         CONCAT44((float)((ulong)local_58 >> 0x20) + 0.0,(float)local_58 + 0.0);
    param_2[0xe] = local_50 + 0.0;
    if ((param_4 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x1be0) + 0x30))();
      FUN_009b3960(param_2,param_2,uVar2);
    }
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_009b36f8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_019951b4(*(undefined8 *)(param_1 + 0x28),param_3);
  FUN_009b34cc(param_1,param_2,uVar1,param_4 & 1);
  return;
}




bool FUN_009b3740(long param_1,undefined8 param_2,undefined4 param_3)

{
  short sVar1;
  
  sVar1 = FUN_01995184(*(undefined8 *)(param_1 + 0x28),param_3);
  if (sVar1 != -1) {
    FUN_0198fb50((undefined8 *)(param_1 + 0x28),param_2,1,sVar1,0);
  }
  return sVar1 != -1;
}




bool FUN_009b37a8(long param_1,undefined8 param_2,short param_3)

{
  if (param_3 != -1) {
    FUN_0198fb50(param_1 + 0x28,param_2,1,param_3,0);
  }
  return param_3 != -1;
}




bool FUN_009b37f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  
  sVar1 = FUN_019951b4(*(undefined8 *)(param_1 + 0x28),param_3);
  if (sVar1 != -1) {
    FUN_0198fb50((undefined8 *)(param_1 + 0x28),param_2,1,sVar1,0);
  }
  return sVar1 != -1;
}




undefined8 FUN_009b3858(long param_1,undefined8 *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  sVar2 = FUN_019951b4(*(undefined8 *)(param_1 + 0x28),param_3);
  lVar3 = 0;
  puVar4 = (undefined8 *)(param_1 + 0x1c18);
  while( true ) {
    uVar1 = 1 << (ulong)((uint)lVar3 & 0x1f);
    if (((uVar1 & *(ushort *)(param_1 + 0x1d12) & 0x1f) == 0) ||
       (*(short *)(param_1 + 0x1d08 + lVar3 * 2) == sVar2)) break;
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 6;
    if (4 < (uint)lVar3) {
      return 0;
    }
  }
  uVar5 = param_2[4];
  puVar4[5] = param_2[5];
  puVar4[4] = uVar5;
  uVar5 = param_2[2];
  puVar4[3] = param_2[3];
  puVar4[2] = uVar5;
  uVar5 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar5;
  *(short *)(param_1 + lVar3 * 2 + 0x1d08) = sVar2;
  *(ushort *)(param_1 + 0x1d12) = *(ushort *)(param_1 + 0x1d12) | (ushort)uVar1 & 0x1f;
  *param_4 = (uint)lVar3;
  return 1;
}




undefined8 FUN_009b391c(long param_1,uint param_2)

{
  *(ushort *)(param_1 + 0x1d12) =
       (((ushort)(1 << (ulong)(param_2 & 0x1f)) | 0xffe0) ^ 0x1f) & *(ushort *)(param_1 + 0x1d12);
  *(undefined2 *)(param_1 + (ulong)param_2 * 2 + 0x1d08) = 0xffff;
  return 1;
}




void FUN_009b3950(long param_1)

{
  *(ushort *)(param_1 + 0x1d12) = *(ushort *)(param_1 + 0x1d12) & 0xffdf;
  return;
}




void FUN_009b3960(undefined8 *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar1 = *param_2;
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar21 = param_2[4];
  fVar20 = param_2[5];
  fVar23 = param_2[6];
  fVar24 = param_2[7];
  fVar25 = param_2[8];
  fVar26 = param_2[9];
  fVar27 = param_2[10];
  fVar28 = param_2[0xb];
  fVar29 = param_2[0xc];
  fVar30 = param_2[0xd];
  fVar31 = param_2[0xe];
  fVar32 = param_2[0xf];
  fVar6 = (float)*param_3;
  fVar7 = (float)((ulong)*param_3 >> 0x20);
  fVar12 = (float)param_3[4];
  fVar13 = (float)((ulong)param_3[4] >> 0x20);
  fVar14 = (float)param_3[6];
  fVar15 = (float)((ulong)param_3[6] >> 0x20);
  fVar10 = (float)param_3[1];
  fVar11 = (float)((ulong)param_3[1] >> 0x20);
  fVar16 = (float)param_3[5];
  fVar17 = (float)((ulong)param_3[5] >> 0x20);
  fVar18 = (float)param_3[7];
  fVar19 = (float)((ulong)param_3[7] >> 0x20);
  fVar2 = (float)param_3[2];
  fVar3 = (float)((ulong)param_3[2] >> 0x20);
  fVar4 = (float)param_3[3];
  fVar5 = (float)((ulong)param_3[3] >> 0x20);
  fVar22 = param_2[1];
  param_1[2] = CONCAT44(fVar7 * fVar21 + fVar3 * fVar20 + fVar13 * fVar23 + fVar15 * fVar24,
                        fVar6 * fVar21 + fVar2 * fVar20 + fVar12 * fVar23 + fVar14 * fVar24);
  param_1[3] = CONCAT44(fVar11 * fVar21 + fVar5 * fVar20 + fVar17 * fVar23 + fVar19 * fVar24,
                        fVar10 * fVar21 + fVar4 * fVar20 + fVar16 * fVar23 + fVar18 * fVar24);
  param_1[4] = CONCAT44(fVar7 * fVar25 + fVar3 * fVar26 + fVar13 * fVar27 + fVar15 * fVar28,
                        fVar6 * fVar25 + fVar2 * fVar26 + fVar12 * fVar27 + fVar14 * fVar28);
  param_1[5] = CONCAT44(fVar11 * fVar25 + fVar5 * fVar26 + fVar17 * fVar27 + fVar19 * fVar28,
                        fVar10 * fVar25 + fVar4 * fVar26 + fVar16 * fVar27 + fVar18 * fVar28);
  *param_1 = CONCAT44(fVar1 * fVar7 + fVar3 * fVar22 + fVar13 * fVar8 + fVar15 * fVar9,
                      fVar1 * fVar6 + fVar2 * fVar22 + fVar12 * fVar8 + fVar14 * fVar9);
  param_1[1] = CONCAT44(fVar1 * fVar11 + fVar5 * fVar22 + fVar17 * fVar8 + fVar19 * fVar9,
                        fVar1 * fVar10 + fVar4 * fVar22 + fVar16 * fVar8 + fVar18 * fVar9);
  param_1[6] = CONCAT44(fVar7 * fVar29 + fVar3 * fVar30 + fVar13 * fVar31 + fVar15 * fVar32,
                        fVar6 * fVar29 + fVar2 * fVar30 + fVar12 * fVar31 + fVar14 * fVar32);
  param_1[7] = CONCAT44(fVar11 * fVar29 + fVar5 * fVar30 + fVar17 * fVar31 + fVar19 * fVar32,
                        fVar10 * fVar29 + fVar4 * fVar30 + fVar16 * fVar31 + fVar18 * fVar32);
  return;
}




long FUN_009b3aa4(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  
  uVar2 = (ulong)*(byte *)(param_2 + 0x80);
  if (uVar2 != 0) {
    fVar5 = *(float *)(param_2 + 0x18);
    pfVar3 = (float *)(param_2 + 0x30);
    do {
      uVar2 = uVar2 - 1;
      fVar5 = fVar5 + *pfVar3;
      pfVar3 = pfVar3 + 6;
    } while (uVar2 != 0);
    iVar1 = rand();
    fVar5 = (fVar5 * (float)iVar1 * 4.656613e-10 + 0.0) - *(float *)(param_2 + 0x18);
    if ((0.0 < fVar5) && ((ulong)*(byte *)(param_2 + 0x80) != 0)) {
      uVar2 = 0;
      lVar4 = param_2 + 0x20;
      do {
        fVar5 = fVar5 - *(float *)(lVar4 + 0x10);
        if (fVar5 <= 0.0) {
          return lVar4;
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar2 < *(byte *)(param_2 + 0x80));
    }
  }
  return param_2 + 8;
}




undefined8 FUN_009b3b58(undefined8 param_1)

{
  FUN_009b1e8c();
  return param_1;
}




void FUN_009b3b7c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b3b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009b3b88(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027c1f50;
  lVar6 = -0x2d0;
  do {
    FUN_00e70510((long)param_1 + lVar6 + 0x308);
    FUN_00e70510((long)param_1 + lVar6 + 0x318);
    lVar1 = lVar6 + 0x48;
    *(undefined8 *)((long)param_1 + lVar6 + 0x340) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x338) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x330) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x328) = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0);
  param_1[99] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  FUN_00f017e8(param_1 + 100);
  param_1[100] = &PTR_FUN_027c1f80;
  puVar2 = param_1 + 0x75;
  FUN_00f0d25c(puVar2,DAT_031312b0);
  puVar3 = param_1 + 0x9b;
  FUN_00f0d25c(puVar3,DAT_031312b8);
  uVar5 = FUN_00d6eb50();
  uVar5 = FUN_00d6eb5c(uVar5,"*KindredAnnouncements*");
  param_1[5] = uVar5;
  FUN_00f0d7fc(puVar2,&DAT_031312c0);
  FUN_00f0da80(puVar2,&DAT_031312c4);
  FUN_00f0da30(puVar2,1);
  if ((*(float *)(param_1 + 0x7f) != 0.5) || (*(float *)((long)param_1 + 0x3fc) != 0.5)) {
    param_1[0x7f] = 0x3f0000003f000000;
    FUN_0091ada4(puVar2);
  }
  if ((*(float *)(param_1 + 0x7e) != 1.2) || (*(float *)((long)param_1 + 0x3f4) != 1.2)) {
    param_1[0x7e] = 0x3f99999a3f99999a;
    FUN_0091ada4(puVar2);
  }
  FUN_00f0d7fc(puVar3,&DAT_031312c0);
  uVar4 = *(uint *)((long)param_1 + 0x55c);
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x55c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_0091ada4(puVar3);
  }
  FUN_00f0da80(puVar3,&DAT_031312c4);
  FUN_00f0da30(puVar3,1);
  if ((*(float *)(param_1 + 0xa5) != 0.5) || (*(float *)((long)param_1 + 0x52c) != 0.5)) {
    param_1[0xa5] = 0x3f0000003f000000;
    FUN_0091ada4(puVar3);
  }
  if ((*(float *)(param_1 + 0x6e) == 0.5) && (*(float *)((long)param_1 + 0x374) == 0.5)) {
    return;
  }
  param_1[0x6e] = 0x3f0000003f000000;
  FUN_0091ada4(param_1 + 100);
  return;
}




void FUN_009b3db0(long param_1,long *param_2)

{
  long lVar1;
  
  *(long **)(param_1 + 0x318) = param_2;
  lVar1 = param_1 + 800;
  (**(code **)(*param_2 + 0x78))(param_2,lVar1,1);
  FUN_00f023ec(lVar1,param_1 + 0x3a8,1);
  FUN_00f023ec(lVar1,param_1 + 0x4d8,1);
  return;
}




void FUN_009b3e08(long param_1)

{
  long lVar1;
  
  DAT_0312eda0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eda0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eda0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009b5500;
  *(code **)(lVar1 + 0xb8) = FUN_009b5524;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eda0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x608;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_009b3e78,0);
  return;
}




void FUN_009b3e78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x308) != 0) {
    fVar4 = (float)FUN_01988c78();
    fVar4 = *(float *)(param_1 + 0x30c) - fVar4;
    *(float *)(param_1 + 0x30c) = fVar4;
    if (fVar4 <= 0.0) {
      lVar2 = *(long *)(param_1 + 0x300);
    }
    else if ((*(uint *)(param_1 + 0x308) < 2) ||
            (lVar2 = *(long *)(param_1 + 0x300),
            *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x34) < fVar4)) goto LAB_009b3f28;
    lVar3 = *(long *)(lVar2 + 0x38);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(long *)(param_1 + 0x300) = lVar3;
    if (lVar3 != 0) {
      FUN_009b3fcc(*(undefined4 *)(lVar3 + 0x30),param_1,lVar3 + 8,lVar3 + 0x18,
                   *(undefined8 *)(lVar3 + 0x28));
      *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x30);
    }
    *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + -1;
  }
LAB_009b3f28:
  FUN_00f00298(&fStack_2c,&local_30);
  if ((*(float *)(param_1 + 0x360) != fStack_2c * 0.5) ||
     (*(float *)(param_1 + 0x364) != local_30 * 0.13)) {
    *(float *)(param_1 + 0x360) = fStack_2c * 0.5;
    *(float *)(param_1 + 0x364) = local_30 * 0.13;
    FUN_0091ada4();
  }
  if ((*(float *)(param_1 + 0x518) != 0.0) || (*(float *)(param_1 + 0x51c) != 100.0)) {
    *(undefined8 *)(param_1 + 0x518) = 0x42c8000000000000;
    FUN_0091ada4();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b3fcc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  undefined8 local_88;
  undefined1 auStack_80 [4];
  float local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&local_7c,auStack_80);
  FUN_00ceace8();
  uVar6 = FUN_00ceae88();
  if ((uVar6 & 1) != 0) goto LAB_009b45e8;
  if ((param_5 != 0) && (iVar4 = FUN_00e6a474(param_5), iVar4 != 0)) {
    FUN_009b5204(0x3e99999a,param_2,param_5);
  }
  iVar4 = FUN_00e70b14(param_3);
  lVar1 = param_2 + 0x3a8;
  if (iVar4 == 0) {
    FUN_00f0d75c(lVar1,&DAT_03210450);
    FUN_00f0d75c(param_2 + 0x4d8,&DAT_03210450);
    goto LAB_009b45e8;
  }
  FUN_00f0d75c(lVar1,param_3);
  FUN_00f0db64(local_7c * 0.6,0,0x3f800000,lVar1);
  iVar4 = FUN_00e70b14(param_4);
  if (iVar4 == 0) {
    param_4 = &DAT_03210450;
  }
  FUN_00f0d75c(param_2 + 0x4d8,param_4);
  FUN_00f0db64(local_7c * 0.6,0,0x3f800000,param_2 + 0x4d8);
  uVar5 = FUN_0092e69c();
  lVar1 = param_2 + 800;
  *(uint *)(param_2 + 0x55c) =
       *(uint *)(param_2 + 0x55c) & 0xfffffff8 | *(uint *)(param_2 + 0x55c) & 3 | (uVar5 & 1) << 2;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_2 + 0x368) != 3.0) || (*(float *)(param_2 + 0x36c) != 3.0)) {
    *(undefined4 *)(param_2 + 0x368) = 0x40400000;
    *(undefined4 *)(param_2 + 0x36c) = 0x40400000;
    FUN_0091ada4(lVar1);
  }
  if ((~*(uint *)(param_2 + 0x3a4) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x3a4) = *(uint *)(param_2 + 0x3a4) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
LAB_009b4244:
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825100;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) goto LAB_009b4244;
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcad4(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_02825220;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3c23d70a,puVar9);
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efe530(puVar10);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  local_88 = NEON_fmov(0x3f800000,4);
  FUN_00efe58c(puVar10,&local_88);
  FUN_00efcac4(0x3e19999a,puVar10);
  FUN_00efcb24(puVar10,FUN_009a7608);
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcad4(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_027c1a60;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar11);
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcad4(puVar12);
    *(undefined ***)puVar12 = &PTR_FUN_02825268;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar12);
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar13 = (ushort *)0x0;
LAB_009b4574:
    puVar14 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar13);
    *(undefined ***)puVar13 = &PTR_FUN_02825148;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) goto LAB_009b4574;
    puVar14 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar14;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcd98(puVar14);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar14,puVar9,puVar10,0);
  FUN_00f02308(lVar1,puVar8,puVar14,puVar11,puVar12,puVar13,0);
LAB_009b45e8:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

