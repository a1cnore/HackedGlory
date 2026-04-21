// functions/00d4c — 26 functions
#include "libGameKindred.h"




void FUN_00d4c0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d4bd4c();
  if ((uVar2 & 1) != 0) {
    local_4a0 = param_2;
    FUN_00d9d958(auStack_498);
    uStack_70 = 0;
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_80 = 0;
    local_88 = 0;
    local_78 = param_3;
    FUN_00e45fec(param_1 + 0x10,&local_4a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4c19c(undefined8 *param_1)

{
  FUN_00e5d640();
  *param_1 = &PTR_FUN_0281d678;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  *(undefined2 *)(param_1 + 8) = 0;
  *(byte *)((long)param_1 + 0x42) = *(byte *)((long)param_1 + 0x42) & 0xc0;
  return;
}




void FUN_00d4c1e8(long param_1,uint param_2)

{
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) | (ushort)(1 << (ulong)(param_2 & 0x1f))
  ;
  return;
}




void FUN_00d4c200(long param_1)

{
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) & 0xfc | 1;
  return;
}




void FUN_00d4c214(long param_1)

{
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) & 0xfc | 2;
  return;
}




void FUN_00d4c228(long param_1)

{
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) | 0x20;
  return;
}




void FUN_00d4c238(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) & 0xf7 | 4;
  return;
}




void FUN_00d4c28c(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) & 0xf3 | 8;
  return;
}




void FUN_00d4c2e0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}




void FUN_00d4c2e8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00d4c2f0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}




void FUN_00d4c2f8(long param_1)

{
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) | 0x10;
  return;
}




void FUN_00d4c308(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d4c310(long param_1,undefined8 param_2,int *param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  char *pcVar10;
  
  if (((uint)*(ushort *)(param_1 + 0x40) & 1 << (ulong)(param_4 & 0x1f)) != 0) {
    bVar3 = *(byte *)(param_1 + 0x42);
    if ((bVar3 & 3) == 1) {
      iVar2 = *param_3;
      iVar5 = FUN_00d67b84(param_2);
      if (iVar2 != iVar5) {
        return 0;
      }
      bVar3 = *(byte *)(param_1 + 0x42);
    }
    uVar9 = (uint)bVar3;
    if ((uVar9 & 3) == 2) {
      iVar2 = param_3[1];
      lVar6 = FUN_00d67b78(param_2);
      if (iVar2 != *(int *)(lVar6 + 0x260)) {
        return 0;
      }
      uVar9 = (uint)*(byte *)(param_1 + 0x42);
    }
    if ((uVar9 >> 5 & 1) != 0) {
      iVar2 = param_3[1];
      lVar6 = FUN_00d67b78(param_2);
      if (iVar2 == *(int *)(lVar6 + 0x260)) {
        return 0;
      }
      uVar9 = (uint)*(byte *)(param_1 + 0x42);
    }
    uVar4 = uVar9 >> 2 & 3;
    if (uVar4 == 2) {
      if (param_3[0xc] == -1) {
        return 0;
      }
      if ((*(long *)(param_3 + 2) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_3 + 2) + 0x18), lVar6 != 0)) {
        while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48) {
          lVar6 = *(long *)(lVar6 + 0x20);
          if (lVar6 == 0) {
            return 0;
          }
        }
        puVar8 = (undefined8 *)FUN_00d6b570(lVar6);
        pcVar10 = (char *)*puVar8;
        if (*pcVar10 != '\0') {
          do {
            pcVar10 = pcVar10 + 1;
          } while (*pcVar10 != '\0');
          return 0;
        }
      }
    }
    else {
      if (uVar4 != 1) {
        if (((*(int *)(param_1 + 0x34) != 0) || (*(int *)(param_1 + 0x38) != 0)) ||
           (*(int *)(param_1 + 0x3c) != 0)) {
          lVar6 = FUN_00d67b78(param_2);
          plVar1 = (long *)(param_3 + 4);
          if (*(int *)(lVar6 + 0x260) != *param_3) {
            plVar1 = (long *)(param_3 + 2);
          }
          if (*plVar1 == 0) {
            return 0;
          }
          uVar9 = *(uint *)(*plVar1 + 0x2f4);
          if ((*(uint *)(param_1 + 0x34) & (uVar9 ^ 0xffffffff)) != 0) {
            return 0;
          }
          if ((*(uint *)(param_1 + 0x38) != 0xffffffff) &&
             ((*(uint *)(param_1 + 0x38) & uVar9) == 0)) {
            return 0;
          }
          if ((*(uint *)(param_1 + 0x3c) & uVar9) != 0) {
            return 0;
          }
          uVar9 = (uint)*(byte *)(param_1 + 0x42);
        }
        if ((uVar9 >> 4 & 1) != 0) {
          lVar6 = FUN_00d67b78(param_2);
          plVar1 = (long *)(param_3 + 4);
          if (*(int *)(lVar6 + 0x260) != *param_3) {
            plVar1 = (long *)(param_3 + 2);
          }
          if (*plVar1 == 0) {
            return 0;
          }
          iVar2 = *(int *)(*plVar1 + 0x260);
          iVar5 = FUN_00d67b84(param_2);
          if (iVar2 != iVar5) {
            return 0;
          }
        }
        if ((*(code **)(param_1 + 0x28) != (code *)0x0) &&
           (uVar7 = (**(code **)(param_1 + 0x28))(param_2,param_3), (uVar7 & 1) == 0)) {
          return 0;
        }
        return 1;
      }
      if (param_3[0xd] == -1) {
        return 0;
      }
      if ((*(long *)(param_3 + 2) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_3 + 2) + 0x18), lVar6 != 0)) {
        while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78) {
          lVar6 = *(long *)(lVar6 + 0x20);
          if (lVar6 == 0) {
            return 0;
          }
        }
        FUN_00d53938(lVar6);
      }
    }
  }
  return 0;
}




void FUN_00d4c5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d4c310();
  if ((uVar2 & 1) != 0) {
    local_4a0 = param_2;
    FUN_00d9d958(auStack_498);
    local_78 = 0;
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_70 = param_3;
    FUN_00e45fec(param_1 + 0x10,&local_4a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4c658(long *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  for (; (lVar1 != 0 && (param_1 = param_1 + 1, param_2 != 0)); param_2 = param_2 + -1) {
    lVar1 = *param_1;
  }
  return;
}




void FUN_00d4c67c(long *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  for (; (lVar1 != 0 && (param_1 = param_1 + 1, param_2 != 0)); param_2 = param_2 + -1) {
    lVar1 = *param_1;
  }
  return;
}




void FUN_00d4c6a0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  param_2[0x641] = 0;
  return;
}




void FUN_00d4c6ac(long param_1)

{
  *(undefined4 *)(param_1 + 0x1904) = 0;
  return;
}




float FUN_00d4c6b4(float param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  FUN_00d4c8d4(param_2,param_5);
  fVar12 = *param_2;
  iVar7 = (int)((param_4[2] - param_1) / fVar12);
  iVar8 = (int)((param_4[2] + param_1) / fVar12);
  if (iVar7 <= iVar8) {
    fVar11 = 3.4028235e+38;
    iVar3 = 0xffff;
    iVar9 = (int)((*param_4 - param_1) / fVar12);
    iVar10 = (int)((*param_4 + param_1) / fVar12);
    iVar4 = 0xffff;
    do {
      if (iVar9 <= iVar10) {
        iVar2 = iVar9;
        do {
          fVar12 = *param_2;
          fVar13 = fVar12 * (float)iVar2 + fVar12 * 0.5;
          fVar12 = fVar12 * (float)iVar7 + fVar12 * 0.5;
          fVar14 = *param_4 - fVar13;
          fVar15 = param_4[2] - fVar12;
          if ((fVar14 * fVar14 + fVar15 * fVar15 <= param_1 * param_1) &&
             (fVar13 = *param_3 - fVar13, fVar12 = param_3[2] - fVar12,
             fVar12 = fVar13 * fVar13 + fVar12 * fVar12, fVar12 < fVar11 * fVar11)) {
            if (param_2[0x641] != 0.0) {
              uVar5 = 0;
              bVar1 = false;
              psVar6 = (short *)((long)param_2 + 10);
              do {
                if (iVar2 == psVar6[-1]) {
                  bVar1 = (bool)(bVar1 | iVar7 == *psVar6);
                }
                uVar5 = uVar5 + 1;
                psVar6 = psVar6 + 4;
              } while (uVar5 < (uint)param_2[0x641]);
              if (bVar1) goto LAB_00d4c838;
            }
            fVar11 = SQRT(fVar12);
            iVar3 = iVar7;
            iVar4 = iVar2;
            if (NAN(fVar11)) {
              fVar11 = sqrtf(fVar12);
            }
          }
LAB_00d4c838:
          bVar1 = iVar2 < iVar10;
          iVar2 = iVar2 + 1;
        } while (bVar1);
      }
      bVar1 = iVar7 < iVar8;
      iVar7 = iVar7 + 1;
    } while (bVar1);
    if ((iVar4 != 0xffff) && (iVar3 != 0xffff)) {
      fVar12 = param_2[0x641];
      param_2[(ulong)(uint)fVar12 * 2 + 1] = param_5;
      *(short *)(param_2 + (ulong)(uint)fVar12 * 2 + 2) = (short)iVar4;
      *(short *)((long)param_2 + (ulong)(uint)fVar12 * 8 + 10) = (short)iVar3;
      param_2[0x641] = (float)((int)fVar12 + 1);
      return *param_2 * (float)iVar4 + *param_2 * 0.5;
    }
  }
  return *param_3;
}




void FUN_00d4c8d4(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x1904) + -1;
  if (-1 < iVar2) {
    uVar3 = (ulong)iVar2;
    piVar4 = (int *)(param_1 + (long)iVar2 * 8 + 4);
    do {
      if (*piVar4 == param_2) {
        uVar1 = *(int *)(param_1 + 0x1904) - 1;
        *(uint *)(param_1 + 0x1904) = uVar1;
        if (uVar3 < uVar1) {
          *(undefined8 *)piVar4 = *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 4);
        }
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + -2;
    } while (-1 < (int)uVar3);
  }
  return;
}




void FUN_00d4c928(float param_1,float *param_2,float *param_3,float *param_4,float param_5,
                 undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float __x;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_874;
  int local_870;
  float local_860;
  float fStack_85c;
  float local_858;
  float local_850;
  float local_84c;
  float fStack_848;
  float local_840;
  float fStack_83c;
  float local_838;
  undefined1 auStack_830 [1920];
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  fVar16 = *param_2;
  fVar17 = *param_4;
  fVar13 = param_2[0x641];
  iVar9 = (int)((param_4[2] - param_1) / fVar16) + -3;
  iVar3 = (int)((param_4[2] + param_1) / fVar16) + 3;
  if (fVar13 == 0.0) {
    fVar15 = 1000.0;
    bVar2 = false;
    local_874 = 0xffff;
    local_870 = 0xffff;
    fVar14 = fVar15;
  }
  else {
    fVar14 = 1000.0;
    uVar8 = 0;
    bVar2 = false;
    psVar10 = (short *)((long)param_2 + 10);
    local_870 = 0xffff;
    local_874 = 0xffff;
    fVar15 = fVar14;
    do {
      if ((*(float *)(psVar10 + -3) == param_5) &&
         (fVar12 = (*param_3 - (float)(int)psVar10[-1]) * (*param_3 - (float)(int)psVar10[-1]) +
                   (param_3[2] - (float)(int)*psVar10) * (param_3[2] - (float)(int)*psVar10),
         fVar12 < fVar14 * fVar14)) {
        fVar14 = SQRT(fVar12);
        if (NAN(fVar14)) {
          fVar14 = sqrtf(fVar12);
        }
        fVar13 = (*param_4 - (float)(int)psVar10[-1]) * (*param_4 - (float)(int)psVar10[-1]) +
                 (param_4[2] - (float)(int)*psVar10) * (param_4[2] - (float)(int)*psVar10);
        fVar15 = SQRT(fVar13);
        if (NAN(fVar15)) {
          fVar15 = sqrtf(fVar13);
        }
        local_870 = (int)psVar10[-1];
        local_874 = (int)*psVar10;
        fVar13 = param_2[0x641];
        bVar2 = fVar15 <= param_1;
      }
      uVar8 = uVar8 + 1;
      psVar10 = psVar10 + 4;
    } while (uVar8 < (uint)fVar13);
  }
  local_838 = DAT_03218f38;
  local_840 = (float)DAT_03218f30;
  fStack_83c = (float)((ulong)DAT_03218f30 >> 0x20);
  if (iVar9 <= iVar3) {
    fVar13 = param_1 * param_1;
    iVar5 = (int)((fVar17 - param_1) / fVar16) + -3;
    iVar4 = (int)((fVar17 + param_1) / fVar16) + 3;
    do {
      if (iVar5 <= iVar4) {
        iVar11 = iVar5;
        do {
          fVar16 = *param_2;
          local_84c = 0.0;
          local_850 = fVar16 * (float)iVar11 + fVar16 * 0.5;
          fStack_848 = fVar16 * 0.5 + fVar16 * (float)iVar9;
          if (param_2[0x641] == 0.0) {
LAB_00d4cbd0:
            fVar16 = (*param_4 - local_850) * (*param_4 - local_850) +
                     (param_4[2] - fStack_848) * (param_4[2] - fStack_848);
            fVar17 = (*param_3 - local_850) * (*param_3 - local_850) +
                     (param_3[2] - fStack_848) * (param_3[2] - fStack_848);
            if ((!bVar2 && fVar16 <= fVar13) ||
               ((fVar16 <= fVar13 && bVar2 && (fVar17 < fVar14 * fVar14)))) {
LAB_00d4cc28:
              thunk_FUN_00ef0978(auStack_830);
              FUN_00ef09b4(auStack_830,param_6);
              local_860 = *param_2 * 0.5;
              fStack_85c = local_860;
              local_858 = local_860;
              uVar8 = FUN_00ef00a0(param_6,&local_850,&local_840,&local_860);
              if ((uVar8 & 1) != 0) {
                __x = (local_840 - local_850) * (local_840 - local_850) +
                      (fStack_83c - local_84c) * (fStack_83c - local_84c) +
                      (local_838 - fStack_848) * (local_838 - fStack_848);
                fVar12 = SQRT(__x);
                if (NAN(fVar12)) {
                  fVar12 = sqrtf(__x);
                }
                if (ABS(fVar12) < 0.2) {
                  fVar14 = SQRT(fVar17);
                  if (NAN(fVar14)) {
                    fVar14 = sqrtf(fVar17);
                  }
                  fVar15 = SQRT(fVar16);
                  local_874 = iVar9;
                  local_870 = iVar11;
                  bVar2 = fVar16 <= fVar13;
                  if (NAN(fVar15)) {
                    fVar15 = sqrtf(fVar16);
                  }
                }
              }
              thunk_FUN_00ef4010(auStack_830);
            }
            else if (bVar2) {
              bVar2 = true;
            }
            else {
              if ((fVar13 < fVar16) && (fVar16 < fVar15 * fVar15)) goto LAB_00d4cc28;
              bVar2 = false;
            }
          }
          else {
            uVar8 = 0;
            bVar1 = false;
            pfVar7 = param_2;
            do {
              if ((iVar11 == *(short *)(pfVar7 + 2)) && (iVar9 == *(short *)((long)pfVar7 + 10))) {
                bVar1 = (bool)(bVar1 | pfVar7[1] != param_5);
              }
              uVar8 = uVar8 + 1;
              pfVar7 = pfVar7 + 2;
            } while (uVar8 < (uint)param_2[0x641]);
            if (!bVar1) goto LAB_00d4cbd0;
          }
          bVar1 = iVar11 < iVar4;
          iVar11 = iVar11 + 1;
        } while (bVar1);
      }
      bVar1 = iVar9 < iVar3;
      iVar9 = iVar9 + 1;
    } while (bVar1);
  }
  FUN_00d4c8d4(param_2,param_5);
  if ((local_874 == 0xffff) || (local_870 == 0xffff)) {
    fVar13 = *param_4;
    fVar16 = param_4[1];
    fVar17 = param_4[2];
  }
  else {
    fVar16 = *param_2;
    fVar13 = fVar16 * (float)local_870 + fVar16 * 0.5;
    fVar17 = fVar16 * 0.5 + fVar16 * (float)local_874;
    fVar16 = 0.0;
  }
  if (*(long *)(lVar6 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar13,fVar16,fVar17);
  }
  return;
}




float FUN_00d4cdac(float *param_1,float *param_2)

{
  return *param_2 * *param_1 + *param_1 * 0.5;
}




undefined8 FUN_00d4cdd4(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  bool bVar2;
  ulong uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  iVar5 = (int)(*param_2 / *param_1);
  iVar6 = (int)(param_2[2] / *param_1);
  if (param_1[0x641] != 0.0) {
    uVar3 = 0;
    bVar2 = false;
    psVar4 = (short *)((long)param_1 + 10);
    do {
      if (psVar4[-1] == iVar5) {
        bVar2 = (bool)(bVar2 | *psVar4 == iVar6);
      }
      uVar3 = uVar3 + 1;
      psVar4 = psVar4 + 4;
    } while (uVar3 < (uint)param_1[0x641]);
    if (bVar2) {
      return 0;
    }
  }
  FUN_00d4c8d4(param_1,param_4);
  fVar1 = param_1[0x641];
  param_1[(ulong)(uint)fVar1 * 2 + 1] = param_4;
  *(short *)(param_1 + (ulong)(uint)fVar1 * 2 + 2) = (short)iVar5;
  *(short *)((long)param_1 + (ulong)(uint)fVar1 * 8 + 10) = (short)iVar6;
  fVar7 = *param_1;
  param_1[0x641] = (float)((int)fVar1 + 1);
  param_3[1] = 0.0;
  *param_3 = fVar7 * (float)iVar5 + fVar7 * 0.5;
  param_3[2] = fVar7 * 0.5 + fVar7 * (float)iVar6;
  return 1;
}




undefined4
FUN_00d4cec8(float param_1,float *param_2,float *param_3,undefined8 param_4,float param_5)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  float fVar10;
  
  FUN_00d4c8d4(param_2,param_5);
  fVar10 = *param_2;
  uVar6 = 0;
  iVar3 = (int)((param_3[2] - param_1) / fVar10);
  iVar4 = (int)((param_3[2] + param_1) / fVar10);
  if (iVar3 <= iVar4) {
    uVar6 = 0;
    iVar5 = (int)((*param_3 - param_1) / fVar10);
    iVar7 = (int)((*param_3 + param_1) / fVar10);
    do {
      if (iVar5 <= iVar7) {
        fVar10 = param_2[0x641];
        iVar8 = iVar5;
        do {
          if (fVar10 == 0.0) {
LAB_00d4cfa4:
            param_2[(ulong)(uint)fVar10 * 2 + 1] = param_5;
            *(short *)(param_2 + (ulong)(uint)fVar10 * 2 + 2) = (short)iVar8;
            *(short *)((long)param_2 + (ulong)(uint)fVar10 * 8 + 10) = (short)iVar3;
            uVar6 = 1;
            param_2[0x641] = (float)((int)fVar10 + 1U);
            fVar10 = (float)((int)fVar10 + 1U);
          }
          else {
            uVar9 = 0;
            bVar1 = false;
            pfVar2 = param_2;
            do {
              if ((iVar8 == *(short *)(pfVar2 + 2)) && (iVar3 == *(short *)((long)pfVar2 + 10))) {
                bVar1 = (bool)(bVar1 | pfVar2[1] != param_5);
              }
              uVar9 = uVar9 + 1;
              pfVar2 = pfVar2 + 2;
            } while (uVar9 < (uint)fVar10);
            if (!bVar1) goto LAB_00d4cfa4;
          }
          bVar1 = iVar8 < iVar7;
          iVar8 = iVar8 + 1;
        } while (bVar1);
      }
      bVar1 = iVar3 < iVar4;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  return uVar6;
}




void FUN_00d4cff0(float param_1,float *param_2,float *param_3,undefined8 param_4,float param_5)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  
  FUN_00d4c8d4(param_2,param_5);
  fVar9 = *param_2;
  iVar3 = (int)((param_3[2] - param_1) / fVar9);
  iVar4 = (int)((param_3[2] + param_1) / fVar9);
  if (iVar3 <= iVar4) {
    iVar5 = (int)((*param_3 - param_1) / fVar9);
    iVar6 = (int)((*param_3 + param_1) / fVar9);
    do {
      if (iVar5 <= iVar6) {
        fVar9 = param_2[0x641];
        iVar7 = iVar5;
        do {
          if (fVar9 == 0.0) {
LAB_00d4d0c8:
            param_2[(ulong)(uint)fVar9 * 2 + 1] = param_5;
            *(short *)(param_2 + (ulong)(uint)fVar9 * 2 + 2) = (short)iVar7;
            *(short *)((long)param_2 + (ulong)(uint)fVar9 * 8 + 10) = (short)iVar3;
            param_2[0x641] = (float)((int)fVar9 + 1U);
            fVar9 = (float)((int)fVar9 + 1U);
          }
          else {
            uVar8 = 0;
            bVar1 = false;
            pfVar2 = param_2;
            do {
              if (((iVar7 == *(short *)(pfVar2 + 2)) && (iVar3 == *(short *)((long)pfVar2 + 10))) &&
                 (pfVar2[1] != param_5)) {
                bVar1 = true;
                pfVar2[1] = param_5;
              }
              uVar8 = uVar8 + 1;
              pfVar2 = pfVar2 + 2;
            } while (uVar8 < (uint)fVar9);
            if (!bVar1) goto LAB_00d4d0c8;
          }
          bVar1 = iVar7 < iVar6;
          iVar7 = iVar7 + 1;
        } while (bVar1);
      }
      bVar1 = iVar3 < iVar4;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  return;
}

