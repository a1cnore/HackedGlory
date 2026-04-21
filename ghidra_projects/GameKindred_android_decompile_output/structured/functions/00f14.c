// functions/00f14 — 15 functions
#include "libGameKindred.h"




undefined8 FUN_00f14058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}




bool FUN_00f14060(long param_1)

{
  return *(long *)(param_1 + 0x88) != 0;
}




void FUN_00f14070(long param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0xb0) = *param_2;
  return;
}




undefined4 FUN_00f1407c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}




void FUN_00f14084(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfe | param_2 & 1;
  return;
}




byte FUN_00f14094(long param_1)

{
  return *(byte *)(param_1 + 0xb4) & 1;
}




void FUN_00f140a0(void)

{
  return;
}




void FUN_00f140a4(void)

{
  return;
}




void FUN_00f140a8(undefined8 *param_1)

{
  FUN_00f13aac();
  *param_1 = &PTR_FUN_028285e8;
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  return;
}




void FUN_00f140e8(undefined8 *param_1,byte param_2)

{
  FUN_00f13aac();
  *param_1 = &PTR_FUN_028285e8;
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe | param_2 & 1;
  return;
}




void FUN_00f1412c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028285e8;
  FUN_00f14190();
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return;
}




void FUN_00f1416c(void *param_1)

{
  FUN_00f1412c();
  operator_delete(param_1);
  return;
}




void FUN_00f14190(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = 0;
    do {
      FUN_00f13998(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




void FUN_00f141e0(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  ushort *puVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_2310;
  undefined8 local_2308;
  undefined1 auStack_2300 [16];
  float local_22f0;
  float local_22ec;
  float local_22e8;
  float local_22e4;
  uint local_22b8 [2];
  float local_22b0 [2];
  undefined8 local_22a8;
  float local_22a0 [4];
  ushort local_2290 [4];
  undefined8 local_2288;
  undefined4 local_2278 [2];
  byte local_2270 [8640];
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_5 + 0xd) >> 1 & 1) == 0) goto LAB_00f14cf8;
  if (((*(byte *)(param_5 + 0x22) & 1) != 0) && (*(long *)(param_5 + 0x10) != 0)) {
    param_4 = param_2;
    plVar7 = (long *)FUN_00f13b24(param_5);
    param_3 = (float)(**(code **)(*plVar7 + 0x50))();
    param_1 = 0.0;
    param_2 = 0.0;
  }
  local_2310 = 0;
  local_2308 = 0;
  FUN_00f13bb4(param_5,(long)&local_2308 + 4,(long)&local_2310 + 4,&local_2308,&local_2310);
  uVar10 = local_2308._4_4_;
  uVar14 = local_2310._4_4_;
  fVar33 = 0.0;
  param_3 = param_3 - (float)((int)local_2308 + local_2308._4_4_);
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  param_4 = param_4 - (float)((int)local_2310 + local_2310._4_4_);
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  if ((0.0 < param_3) || (0.0 < param_4)) {
    local_22b8[0] = 0;
    FUN_00f14d40(param_5,local_22b8);
    if (local_22b8[0] == 0) {
      iVar6 = 0;
      uVar22 = 0;
      iVar21 = 0;
      uVar19 = 0;
      fVar32 = 0.0;
      uVar8 = 0;
    }
    else {
      uVar16 = 0;
      uVar19 = 0;
      iVar21 = 0;
      uVar22 = 0;
      iVar6 = 0;
      puVar17 = local_2290 + 2;
      fVar32 = 0.0;
      fVar33 = 0.0;
      do {
        if (((byte)puVar17[0xe] & 1) == 0) {
          fVar32 = fVar32 + *(float *)(puVar17 + -0xe);
          fVar33 = fVar33 + *(float *)(puVar17 + -0xc);
          if (((byte)puVar17[0xe] >> 1 & 1) == 0) {
            if (*puVar17 == 0) {
              uVar19 = uVar19 + 1;
            }
            else {
              iVar21 = iVar21 + 1;
            }
            uVar22 = uVar22 + *puVar17;
            uVar8 = FUN_00f13c88(puVar17 + -0x12);
            if (((uVar8 & 1) != 0) || (uVar8 = FUN_00f13c74(puVar17 + -0x12), (uVar8 & 1) != 0)) {
              iVar6 = iVar6 + 1;
            }
          }
        }
        uVar8 = (ulong)local_22b8[0];
        uVar16 = uVar16 + 1;
        puVar17 = puVar17 + 0x22;
      } while (uVar16 < uVar8);
    }
    if ((*(byte *)(param_5 + 0x38) & 1) == 0) {
LAB_00f144e0:
      fVar32 = param_3 - fVar32;
      fVar33 = param_4 - fVar33;
      if ((int)uVar8 == 0) goto LAB_00f14574;
      uVar16 = 0;
      fVar25 = 0.0;
      puVar12 = &local_2288;
      fVar26 = 0.0;
      do {
        if ((*(byte *)(puVar12 + 3) & 1) == 0) {
          fVar27 = 0.0;
          fVar28 = 0.0;
          if (fVar32 != 0.0) {
            fVar28 = (float)NEON_ucvtf(*(undefined4 *)puVar12);
            fVar28 = (fVar28 - *(float *)(puVar12 + -4)) / fVar32;
          }
          if (fVar33 != 0.0) {
            fVar27 = (float)NEON_ucvtf(*(undefined4 *)((long)puVar12 + 4));
            fVar27 = (fVar27 - *(float *)((long)puVar12 + -0x1c)) / fVar33;
          }
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          fVar25 = fVar25 + fVar28;
          fVar26 = fVar26 + fVar27;
        }
        uVar16 = uVar16 + 1;
        puVar12 = (undefined8 *)((long)puVar12 + 0x44);
      } while (uVar16 < uVar8);
    }
    else {
      if ((int)uVar8 != 0) {
        uVar16 = 0;
        bVar4 = false;
        puVar12 = &local_2288;
        do {
          plVar7 = (long *)(**(code **)(**(long **)(*(long *)(param_5 + 0x30) + uVar16 * 8) + 0x40))
                                     ();
          if (plVar7 != (long *)0x0 && (*(byte *)(puVar12 + 3) & 1) == 0) {
            fVar25 = (float)NEON_ucvtf(*(undefined4 *)puVar12);
            fVar26 = param_3;
            if (fVar25 <= param_3) {
              fVar26 = fVar25;
            }
            iVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7,(int)fVar26);
            if (-1 < iVar5) {
              uVar9 = (**(code **)(*plVar7 + 0x118))(plVar7);
              *puVar12 = uVar9;
              uVar9 = (**(code **)(*plVar7 + 0x120))(plVar7);
              puVar12[1] = uVar9;
              uVar9 = (**(code **)(*plVar7 + 0x128))(plVar7);
              bVar4 = true;
              puVar12[2] = uVar9;
              *(float *)((long)puVar12 + -0x1c) = (float)iVar5;
            }
          }
          uVar8 = (ulong)local_22b8[0];
          uVar16 = uVar16 + 1;
          puVar12 = (undefined8 *)((long)puVar12 + 0x44);
        } while (uVar16 < uVar8);
        if (bVar4) {
          if (local_22b8[0] == 0) {
            fVar33 = 0.0;
            fVar32 = 0.0;
          }
          else {
            fVar32 = 0.0;
            pbVar11 = local_2270;
            fVar33 = 0.0;
            uVar16 = uVar8;
            do {
              if ((*pbVar11 & 3) == 0) {
                fVar32 = fVar32 + *(float *)(pbVar11 + -0x38);
                fVar33 = fVar33 + *(float *)(pbVar11 + -0x34);
              }
              uVar16 = uVar16 - 1;
              pbVar11 = pbVar11 + 0x44;
            } while (uVar16 != 0);
          }
        }
        goto LAB_00f144e0;
      }
      fVar32 = param_3 - fVar32;
      fVar33 = param_4 - fVar33;
LAB_00f14574:
      fVar26 = 0.0;
      fVar25 = 0.0;
    }
    if (((0.0 < fVar33) || (0.0 < fVar32)) && ((0.0 < fVar26 || (0.0 < fVar25)))) {
      if ((int)uVar8 == 0) {
        fVar28 = 0.0;
        fVar27 = 0.0;
      }
      else {
        fVar27 = 0.0;
        puVar12 = &local_2288;
        fVar28 = 0.0;
        uVar16 = uVar8;
        do {
          if ((*(byte *)(puVar12 + 3) & 3) == 0) {
            fVar30 = *(float *)(puVar12 + -4);
            fVar29 = (float)NEON_ucvtf(*(undefined4 *)puVar12);
            if ((0.0 < fVar32 && 0.0 < fVar25) && fVar30 < fVar29) {
              fVar34 = (float)(int)(fVar32 * (((fVar29 - fVar30) / fVar32) / fVar25));
              fVar31 = fVar30 + fVar34;
              fVar30 = fVar29 - fVar30;
              if (fVar31 <= fVar29) {
                fVar30 = fVar34;
                fVar29 = fVar31;
              }
              fVar27 = fVar27 + fVar30;
              *(float *)(puVar12 + -4) = fVar29;
            }
            fVar30 = *(float *)((long)puVar12 + -0x1c);
            fVar29 = (float)NEON_ucvtf(*(undefined4 *)((long)puVar12 + 4));
            if ((0.0 < fVar33 && 0.0 < fVar26) && fVar30 < fVar29) {
              fVar34 = (float)(int)(fVar33 * (((fVar29 - fVar30) / fVar33) / fVar26));
              fVar31 = fVar30 + fVar34;
              fVar30 = fVar29 - fVar30;
              if (fVar31 <= fVar29) {
                fVar30 = fVar34;
                fVar29 = fVar31;
              }
              fVar28 = fVar28 + fVar30;
              *(float *)((long)puVar12 + -0x1c) = fVar29;
            }
          }
          uVar16 = uVar16 - 1;
          puVar12 = (undefined8 *)((long)puVar12 + 0x44);
        } while (uVar16 != 0);
      }
      fVar32 = fVar32 - fVar27;
      fVar33 = fVar33 - fVar28;
    }
    param_1 = param_1 + (float)uVar10;
    param_2 = param_2 + (float)uVar14;
    uVar14 = (uint)(iVar6 == 0);
    uVar16 = uVar8;
    uVar13 = uVar8;
    do {
      if (iVar21 != 0) {
        if ((int)uVar13 == 0) {
          fVar25 = 0.0;
          fVar26 = 0.0;
        }
        else {
          uVar18 = 0;
          fVar26 = 0.0;
          fVar25 = 0.0;
          pbVar11 = local_2270;
          do {
            if (((*pbVar11 & 3) == 0) && (*(short *)(pbVar11 + -0x1c) != 0)) {
              if ((*(byte *)(param_5 + 0x38) & 1) == 0) {
                if ((uVar14 != 0) || (uVar8 = FUN_00f13c74(), (uVar8 & 1) != 0)) {
                  if (0.0 < fVar32) {
                    fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(pbVar11 + -0x1c));
                    fVar27 = fVar32 * (fVar27 / (float)uVar22);
                    fVar26 = fVar26 + fVar27;
                    *(float *)(pbVar11 + -0x38) = *(float *)(pbVar11 + -0x38) + fVar27;
                  }
                  fVar28 = (float)NEON_ucvtf(*(undefined4 *)(pbVar11 + -0xc));
                  fVar27 = param_4;
                  if (param_4 <= fVar28) {
                    fVar27 = fVar28;
                  }
                  *(float *)(pbVar11 + -0x34) = fVar27;
                }
              }
              else if ((uVar14 != 0) || (uVar8 = FUN_00f13c88(pbVar11 + -0x40), (uVar8 & 1) != 0)) {
                if (0.0 < fVar33) {
                  fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(pbVar11 + -0x1c));
                  fVar27 = fVar33 * (fVar27 / (float)uVar22);
                  fVar25 = fVar25 + fVar27;
                  *(float *)(pbVar11 + -0x34) = *(float *)(pbVar11 + -0x34) + fVar27;
                }
                fVar28 = (float)NEON_ucvtf(*(undefined4 *)(pbVar11 + -0x10));
                fVar27 = param_3;
                if (param_3 <= fVar28) {
                  fVar27 = fVar28;
                }
                *(float *)(pbVar11 + -0x38) = fVar27;
              }
            }
            uVar8 = (ulong)local_22b8[0];
            uVar18 = uVar18 + 1;
            pbVar11 = pbVar11 + 0x44;
            uVar16 = uVar8;
            uVar13 = uVar8;
          } while (uVar18 < uVar8);
        }
        fVar32 = fVar32 - fVar26;
        fVar33 = fVar33 - fVar25;
      }
      if (uVar19 != 0) {
        if ((int)uVar16 == 0) {
          uVar13 = 0;
        }
        else {
          uVar18 = 0;
          fVar26 = fVar32 / (float)uVar19;
          fVar25 = fVar33 / (float)uVar19;
          pbVar11 = local_2270;
          do {
            if (((*pbVar11 & 3) == 0) && (*(short *)(pbVar11 + -0x1c) == 0)) {
              if ((*(byte *)(param_5 + 0x38) & 1) == 0) {
                if ((uVar14 != 0) || (uVar8 = FUN_00f13c74(), (uVar8 & 1) != 0)) {
                  if (0.0 < fVar32) {
                    fVar32 = fVar32 - fVar26;
                    *(float *)(pbVar11 + -0x38) = fVar26 + *(float *)(pbVar11 + -0x38);
                  }
                  fVar28 = (float)NEON_ucvtf(*(undefined4 *)(pbVar11 + -0xc));
                  fVar27 = param_4;
                  if (param_4 <= fVar28) {
                    fVar27 = fVar28;
                  }
                  *(float *)(pbVar11 + -0x34) = fVar27;
                }
              }
              else if ((uVar14 != 0) || (uVar8 = FUN_00f13c88(pbVar11 + -0x40), (uVar8 & 1) != 0)) {
                if (0.0 < fVar33) {
                  fVar33 = fVar33 - fVar25;
                  *(float *)(pbVar11 + -0x34) = fVar25 + *(float *)(pbVar11 + -0x34);
                }
                fVar28 = (float)NEON_ucvtf(*(undefined4 *)(pbVar11 + -0x10));
                fVar27 = param_3;
                if (param_3 <= fVar28) {
                  fVar27 = fVar28;
                }
                *(float *)(pbVar11 + -0x38) = fVar27;
              }
            }
            uVar8 = (ulong)local_22b8[0];
            uVar18 = uVar18 + 1;
            pbVar11 = pbVar11 + 0x44;
            uVar16 = uVar8;
            uVar13 = uVar8;
          } while (uVar18 < uVar8);
        }
      }
      uVar10 = (uint)uVar8;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 2);
    if (((*(byte *)(param_5 + 0x38) & 1) == 0) && (uVar10 != 0)) {
      uVar8 = 0;
      puVar12 = &local_2288;
      do {
        plVar7 = (long *)(**(code **)(**(long **)(*(long *)(param_5 + 0x30) + uVar8 * 8) + 0x40))();
        if (((*(byte *)(puVar12 + 3) & 1) == 0) &&
           (plVar7 != (long *)0x0 && (*(byte *)(puVar12 + 3) & 2) == 0)) {
          fVar32 = (float)NEON_ucvtf(*(undefined4 *)puVar12);
          fVar33 = *(float *)(puVar12 + -4);
          if (fVar32 <= *(float *)(puVar12 + -4)) {
            fVar33 = fVar32;
          }
          iVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7,(int)fVar33);
          if (-1 < iVar6) {
            uVar9 = (**(code **)(*plVar7 + 0x118))(plVar7);
            *puVar12 = uVar9;
            uVar9 = (**(code **)(*plVar7 + 0x120))(plVar7);
            puVar12[1] = uVar9;
            uVar9 = (**(code **)(*plVar7 + 0x128))(plVar7);
            puVar12[2] = uVar9;
          }
        }
        uVar8 = uVar8 + 1;
        puVar12 = (undefined8 *)((long)puVar12 + 0x44);
        uVar10 = local_22b8[0];
      } while (uVar8 < local_22b8[0]);
    }
    if (uVar10 != 0) {
      lVar20 = 0;
      uVar8 = 0;
      do {
        plVar15 = *(long **)(*(long *)(param_5 + 0x30) + uVar8 * 8);
        plVar7 = (long *)(**(code **)(*plVar15 + 0x40))(plVar15);
        if (lVar20 == 0) {
          FUN_00f13c30(param_1,param_2,auStack_2300);
        }
        else {
          memcpy(auStack_2300,local_22b0 + (ulong)((int)uVar8 - 1) * 0x11,0x44);
        }
        if ((local_2270[lVar20] & 1) == 0) {
          fVar33 = *(float *)((long)&local_22a8 + lVar20);
          pfVar23 = (float *)((long)local_22a0 + lVar20 + -4);
          fVar32 = *pfVar23;
        }
        else {
          fVar32 = 0.0;
          fVar33 = 0.0;
          pfVar23 = local_22a0 + uVar8 * 0x11 + -1;
          *(undefined8 *)((long)&local_22a8 + lVar20) = 0;
        }
        uVar2 = *(ushort *)((long)local_2290 + lVar20);
        *(float *)((long)local_22a0 + lVar20 + 8) = fVar33;
        *(float *)((long)local_22a0 + lVar20 + 0xc) = fVar32;
        if ((uVar2 & 0xf) == 0) {
          fVar26 = (float)NEON_ucvtf(*(undefined4 *)((long)&local_2288 + lVar20));
        }
        else {
          fVar25 = (float)NEON_ucvtf(*(undefined4 *)((long)local_2278 + lVar20));
          fVar26 = fVar33;
          if (fVar25 <= fVar33) {
            fVar26 = fVar25;
          }
        }
        *(float *)((long)&local_22a8 + lVar20) = fVar26;
        if ((uVar2 & 0xf0) == 0) {
          fVar25 = (float)NEON_ucvtf(*(undefined4 *)((long)&local_2288 + lVar20 + 4));
        }
        else {
          fVar27 = (float)NEON_ucvtf(*(undefined4 *)((long)local_2278 + lVar20 + 4));
          fVar25 = fVar32;
          if (fVar27 <= fVar32) {
            fVar25 = fVar27;
          }
        }
        *pfVar23 = fVar25;
        bVar1 = *(byte *)(param_5 + 0x38);
        if ((uVar8 < uVar10 - 1) && ((bVar1 & 1) == 0)) {
          fVar26 = fVar26 - (float)*(ushort *)(param_5 + 0x20);
          *(float *)((long)&local_22a8 + lVar20) = fVar26;
        }
        else if ((uVar8 < uVar10 - 1) && ((bVar1 & 1) != 0)) {
          fVar25 = fVar25 - (float)*(ushort *)(param_5 + 0x20);
          *pfVar23 = fVar25;
        }
        if (fVar26 < 0.0) {
          fVar26 = 0.0;
        }
        if (fVar25 < 0.0) {
          fVar25 = 0.0;
        }
        *(float *)((long)&local_22a8 + lVar20) = fVar26;
        *pfVar23 = fVar25;
        if ((bVar1 & 1) == 0) {
          fVar28 = local_22f0 + local_22e8;
          fVar27 = param_2;
        }
        else {
          fVar27 = local_22ec + local_22e4;
          fVar28 = param_1;
        }
        *(float *)((long)local_22a0 + lVar20) = fVar28;
        *(float *)((long)local_22a0 + lVar20 + 4) = fVar27;
        uVar14 = *(ushort *)((long)plVar15 + 0xc) & 0x1f;
        if ((*(ushort *)((long)plVar15 + 0xc) & 1) == 0) {
          if ((uVar14 >> 2 & 1) != 0) {
            fVar27 = fVar27 + (fVar32 - fVar25);
            goto LAB_00f14b70;
          }
          if ((uVar14 >> 1 & 1) != 0) {
            fVar27 = (fVar27 + fVar32 * 0.5) - fVar25 * 0.5;
            goto LAB_00f14b70;
          }
        }
        else {
LAB_00f14b70:
          *(float *)((long)local_22b0 + lVar20 + 4) = fVar27;
        }
        if ((uVar14 >> 3 & 1) == 0) {
          pfVar24 = local_22b0 + uVar8 * 0x11;
          if (uVar14 >> 4 == 0) {
            if ((uVar14 >> 1 & 1) == 0) {
              fVar28 = *(float *)((long)local_22b0 + lVar20);
              goto LAB_00f14bc8;
            }
            fVar33 = fVar33 * 0.5 - fVar26 * 0.5;
          }
          else {
            fVar33 = fVar33 - fVar26;
          }
          fVar28 = fVar28 + fVar33;
          *(float *)((long)local_22b0 + lVar20) = fVar28;
        }
        else {
          pfVar24 = (float *)((long)local_22b0 + lVar20);
          *pfVar24 = fVar28;
        }
LAB_00f14bc8:
        fVar33 = param_1;
        if (param_1 <= fVar28) {
          fVar33 = fVar28;
        }
        *pfVar24 = fVar33;
        fVar27 = *(float *)((long)local_22b0 + lVar20 + 4);
        fVar32 = param_2;
        if (param_2 <= fVar27) {
          fVar32 = fVar27;
        }
        *(float *)((long)local_22b0 + lVar20 + 4) = fVar32;
        if (plVar7 != (long *)0x0) {
          fVar27 = *(float *)(plVar7 + 10);
          fVar25 = *(float *)((long)plVar7 + 0x54);
          fVar33 = (float)(**(code **)(*plVar7 + 0x50))(plVar7);
          fVar28 = *(float *)(plVar7 + 9);
          fVar26 = *(float *)((long)plVar7 + 0x4c);
          fVar33 = fVar27 * fVar33 + *pfVar24;
          fVar32 = fVar25 * fVar32 + *(float *)((long)local_22b0 + lVar20 + 4);
          if ((*(float *)(plVar7 + 8) != fVar33) || (*(float *)((long)plVar7 + 0x44) != fVar32)) {
            *(float *)(plVar7 + 8) = fVar33;
            *(float *)((long)plVar7 + 0x44) = fVar32;
            FUN_0091ada4(plVar7);
          }
          fVar33 = 1.0;
          if (1.1920929e-07 <= ABS(fVar28)) {
            fVar33 = 1.0 / fVar28;
          }
          fVar32 = 1.0;
          if (1.1920929e-07 <= ABS(fVar26)) {
            fVar32 = 1.0 / fVar26;
          }
          (**(code **)(*plVar7 + 0x130))
                    (fVar33 * *(float *)((long)&local_22a8 + lVar20),fVar32 * *pfVar23,plVar7,0);
          fVar33 = *pfVar24;
          fVar32 = *(float *)((long)local_22b0 + lVar20 + 4);
          fVar26 = *(float *)((long)&local_22a8 + lVar20);
          fVar25 = *pfVar23;
        }
        (**(code **)(*plVar15 + 0x28))(fVar33,fVar32,fVar26,fVar25,plVar15);
        uVar8 = uVar8 + 1;
        lVar20 = lVar20 + 0x44;
        *(ushort *)((long)plVar15 + 0xc) = *(ushort *)((long)plVar15 + 0xc) & 0xfdff;
      } while (uVar8 < local_22b8[0]);
      *(ushort *)(param_5 + 0xc) = *(ushort *)(param_5 + 0xc) & 0xfdff;
      if (local_22b8[0] != 0) {
        local_22b8[0] = 0;
      }
      goto LAB_00f14cf8;
    }
  }
  *(ushort *)(param_5 + 0xc) = *(ushort *)(param_5 + 0xc) & 0xfdff;
LAB_00f14cf8:
  if (*(long *)(lVar3 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f14d40(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  byte bVar5;
  uint extraout_w0;
  uint extraout_w0_00;
  uint uVar6;
  long lVar7;
  uint extraout_var;
  uint extraout_var_00;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_c0 [8];
  float local_b8;
  float local_b4;
  undefined2 local_a0;
  ushort local_9c;
  undefined8 local_98;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  byte local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar17 = (ulong)(*(int *)(param_1 + 0x28) - 1);
    uVar16 = 0;
    do {
      plVar15 = *(long **)(*(long *)(param_1 + 0x30) + uVar16 * 8);
      lVar7 = (**(code **)(*plVar15 + 0x40))(plVar15);
      if (lVar7 == 0) {
        pfVar9 = (float *)((long)&DAT_03218f00 + 4);
        pfVar8 = (float *)&DAT_03218f00;
      }
      else {
        lVar7 = (**(code **)(*plVar15 + 0x40))(plVar15);
        pfVar9 = (float *)(lVar7 + 0x4c);
        pfVar8 = (float *)(lVar7 + 0x48);
      }
      fVar20 = *pfVar9;
      fVar21 = *pfVar8;
      FUN_00f13bf8(auStack_c0);
      lVar7 = (**(code **)(*plVar15 + 0x40))(plVar15);
      if (lVar7 == 0) {
LAB_00f14e2c:
        bVar5 = 1;
      }
      else {
        bVar5 = 0;
        if ((*(uint *)(lVar7 + 0x84) >> 3 & 1) != 0) {
          if ((*(uint *)(lVar7 + 0x84) >> 2 & 1) != 0) goto LAB_00f14e2c;
          bVar5 = FUN_00f14094(lVar7);
        }
      }
      local_80 = (byte)((ushort)*(undefined2 *)((long)plVar15 + 0xc) >> 9) & 2 |
                 local_80 & 0xfc | ~bVar5 & 1;
      local_98 = (**(code **)(*plVar15 + 0x10))(plVar15);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      local_90 = extraout_w0;
      uStack_8c = extraout_var;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      local_88 = extraout_w0_00;
      uStack_84 = extraout_var_00;
      uVar6 = (**(code **)(*plVar15 + 0x38))(plVar15);
      local_a0 = (undefined2)uVar6;
      uVar1 = uVar6 & 0xf;
      local_9c = *(ushort *)((long)plVar15 + 0xc) >> 5 & 0xf;
      if (uVar1 == 0xd) {
        local_98 = local_98 & 0xffffffff00000000;
      }
      uVar2 = uVar6 & 0xf0;
      if (uVar2 == 0xd0) {
        local_98 = local_98 & 0xffffffff;
      }
      if ((uVar6 & 0xf | 2) == 3) {
        local_90 = (uint)local_98;
      }
      if ((uVar6 >> 4 & 0xf | 2) == 3) {
        uStack_8c = local_98._4_4_;
      }
      if (uVar1 == 4) {
        local_88 = (uint)local_98;
      }
      uVar6 = uStack_84;
      if (uVar2 == 0x40) {
        uVar6 = local_98._4_4_;
      }
      uVar12 = (uint)(fVar20 * (float)local_98._4_4_);
      fVar18 = (float)NEON_ucvtf((uint)local_98);
      uVar11 = (uint)(fVar21 * fVar18);
      fVar18 = (float)NEON_ucvtf(local_90);
      uVar10 = (uint)(fVar21 * fVar18);
      local_98 = CONCAT44(uVar12,uVar11);
      fVar18 = (float)NEON_ucvtf(local_88);
      _local_88 = CONCAT44((int)(fVar20 * (float)uVar6),(int)(fVar21 * fVar18));
      fVar19 = (float)NEON_ucvtf(uStack_8c);
      uVar13 = (uint)(fVar20 * fVar19);
      _local_90 = CONCAT44(uVar13,uVar10);
      if ((uVar16 < uVar17) && ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
        uVar3 = *(ushort *)(param_1 + 0x20);
        uVar11 = uVar3 + uVar11;
        uVar10 = uVar3 + uVar10;
        local_98 = CONCAT44(uVar12,uVar11);
        _local_90 = CONCAT44(uVar13,uVar10);
        uVar6 = (uint)uVar3 + (int)(fVar21 * fVar18);
        puVar14 = &local_88;
LAB_00f14ff4:
        *puVar14 = uVar6;
      }
      else if ((uVar16 < uVar17) && ((*(byte *)(param_1 + 0x38) & 1) != 0)) {
        uVar3 = *(ushort *)(param_1 + 0x20);
        uVar12 = uVar3 + uVar12;
        uVar13 = uVar3 + uVar13;
        uVar6 = (uint)uVar3 + (int)(fVar20 * (float)uVar6);
        local_98 = CONCAT44(uVar12,uVar11);
        _local_90 = CONCAT44(uVar13,uVar10);
        puVar14 = &uStack_84;
        goto LAB_00f14ff4;
      }
      uVar6 = uVar10;
      if (uVar10 <= uVar11) {
        uVar6 = uVar11;
      }
      uVar11 = uVar13;
      if (uVar13 <= uVar12) {
        uVar11 = uVar12;
      }
      if (uVar1 != 0) {
        uVar6 = uVar10;
      }
      local_b8 = (float)uVar6;
      if (uVar2 != 0) {
        uVar11 = uVar13;
      }
      local_b4 = (float)uVar11;
      uVar1 = *param_2;
      memcpy(param_2 + (ulong)uVar1 * 0x11 + 2,auStack_c0,0x44);
      *param_2 = uVar1 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(param_1 + 0x28));
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

