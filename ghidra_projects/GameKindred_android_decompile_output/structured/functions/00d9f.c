// functions/00d9f — 29 functions
#include "libGameKindred.h"




void FUN_00d9f00c(undefined8 param_1)

{
  FUN_00d74024(param_1,0);
  return;
}




undefined8 FUN_00d9f014(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(param_1 + 0x40);
  fVar4 = (*(float *)(lVar3 + 0x218) + 1.0) *
          (*(float *)(lVar3 + 0xb0) + *(float *)(lVar3 + 0x164) * (*(float *)(lVar3 + 0x2cc) + 1.0))
  ;
  if (DAT_031abba8 <= fVar4) {
    fVar4 = DAT_031abba8;
  }
  fVar5 = DAT_031abae8;
  if (DAT_031abae8 <= fVar4) {
    fVar5 = fVar4;
  }
  if ((fVar5 <= 0.0) || (iVar1 = rand(), fVar5 < (float)iVar1 * 4.656613e-10 + 0.0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}




uint FUN_00d9f0b8(long param_1)

{
  return *(uint *)(param_1 + 0x2f4) & 1;
}




float FUN_00d9f0c4(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x32c) - *(float *)(param_2 + 0x98);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar2 = (*(float *)(param_2 + 0x70) - *(float *)(lVar1 + 0x330) * *(float *)(param_2 + 0x80)) +
          *(float *)(lVar1 + 0x338) * *(float *)(param_2 + 0x88) +
          *(float *)(lVar1 + 0x344) * *(float *)(param_2 + 0x90) +
          *(float *)(param_2 + 0x84) * fVar3;
  fVar3 = *(float *)(param_2 + 0x74);
  if (fVar2 <= *(float *)(param_2 + 0x74)) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(param_2 + 0x70) - *(float *)(param_2 + 0x80) * *(float *)(param_2 + 0x7c);
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00d9f138(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float local_6c [3];
  undefined4 local_60;
  undefined1 local_58 [8];
  float local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d55794(param_1,local_58,0);
  uVar1 = 0x7f7fffff;
  local_60 = 0x3e800000;
  local_6c[1] = 0.25;
  local_6c[2] = (float)uVar1;
  uVar3 = FUN_00ef00a0(*param_2,local_58,&local_48,local_6c + 1);
  if ((uVar3 & 1) == 0) {
    local_6c[0] = -1.0;
    if ((param_3 == (undefined8 *)0x0) ||
       (FUN_00ef01b8(*param_2,param_3,local_58,local_6c,0,0), local_6c[0] < 0.0)) {
      local_78 = uVar1;
      uStack_74 = uVar1;
      local_70 = uVar1;
      FUN_00ef00a0(*param_2,local_58,&local_48,&local_78);
    }
    else {
      fVar4 = 1.0 - local_6c[0];
      local_40 = fVar4 * *(float *)(param_3 + 1) + local_6c[0] * local_50;
      local_48 = CONCAT44((float)((ulong)*param_3 >> 0x20) * fVar4 + local_58._4_4_ * local_6c[0],
                          (float)*param_3 * fVar4 + local_58._0_4_ * local_6c[0]);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_48,local_48._4_4_,local_40);
}




long FUN_00d9f258(undefined8 param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long local_25b8 [1200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_01985cbc(param_1,local_25b8,0x4b0,DAT_02c7bf1c);
  if (uVar2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = local_25b8[lVar4];
      if (*(int *)(lVar3 + 0x50) == *param_2) goto LAB_00d9f2c4;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < uVar2);
  }
  lVar3 = 0;
LAB_00d9f2c4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long thunk_FUN_00d9f258(undefined8 param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long alStack_25b8 [1200];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_01985cbc(param_1,alStack_25b8,0x4b0,DAT_02c7bf1c);
  if (uVar2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = alStack_25b8[lVar4];
      if (*(int *)(lVar3 + 0x50) == *param_2) goto LAB_00d9f2c4;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < uVar2);
  }
  lVar3 = 0;
LAB_00d9f2c4:
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9f2f8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
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
  long *local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  void *local_110;
  uint local_108;
  undefined8 local_100;
  long local_f8;
  undefined4 local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_00d6eb50();
  puVar9 = (undefined8 *)FUN_00d6eb5c(uVar8,param_2);
  uVar10 = FUN_00ceab48();
  if (((((uVar10 & 1) == 0) || (uVar10 = FUN_00e6a488(*puVar9), (uVar10 & 1) == 0)) &&
      ((uVar10 = FUN_00ceab48(), (uVar10 & 1) != 0 ||
       (uVar10 = FUN_00e6a488(puVar9[1]), (uVar10 & 1) == 0)))) &&
     (lVar11 = FUN_01985d44(param_1,DAT_02c7eb30), lVar11 != 0)) {
    local_b8 = *param_4;
    local_b0 = *(undefined4 *)(param_4 + 1);
    uStack_ac = 0x3f800000;
    fVar28 = *(float *)((long)param_4 + 0xc) * 0.017453292;
    fVar20 = sinf(fVar28);
    fVar28 = cosf(fVar28);
    fVar22 = *(float *)(param_4 + 2);
    fVar26 = fVar20 * 0.0;
    fVar24 = fVar28 * 0.0;
    fVar21 = sinf(fVar22 * 0.017453292);
    fVar22 = cosf(fVar22 * 0.017453292);
    fVar23 = fVar21 * (fVar24 - fVar26);
    fVar25 = fVar22 * 0.0;
    fVar27 = fVar22 * (fVar24 - fVar26);
    fStack_bc = fVar21 * 0.0;
    fVar29 = fVar22 - fVar23;
    fVar30 = fVar25 - fVar21 * (fVar24 - fVar20);
    local_c8 = fVar21 + fVar27;
    fStack_c4 = fStack_bc + fVar22 * (fVar24 - fVar20);
    local_c0 = fStack_bc + fVar22 * (fVar28 - fVar26);
    fStack_bc = fStack_bc + fVar27;
    fVar27 = fVar25 - fVar21 * (fVar28 - fVar26);
    fVar25 = fVar25 - fVar23;
    fVar22 = *(float *)((long)param_4 + 0x14) * 0.017453292;
    fVar21 = sinf(fVar22);
    fVar22 = cosf(fVar22);
    fStack_dc = fVar21 * (fVar24 + fVar26);
    fStack_cc = fVar22 * (fVar24 + fVar26);
    fStack_e4 = fVar22 * fVar30 + fVar21 * (fVar28 + fVar26);
    local_e0 = fVar22 * fVar27 + fVar21 * (fVar24 + fVar20);
    local_e8 = fVar22 * fVar29 + fStack_dc;
    fStack_dc = fVar22 * fVar25 + fStack_dc;
    local_d8 = fStack_cc - fVar21 * fVar29;
    fStack_d4 = fVar22 * (fVar28 + fVar26) - fVar21 * fVar30;
    local_d0 = fVar22 * (fVar24 + fVar20) - fVar21 * fVar27;
    fStack_cc = fStack_cc - fVar21 * fVar25;
    FUN_00d6ed6c(lVar11,&local_e8,param_3);
    if (((long *)puVar9[2] != (long *)0x0) && (*(long *)puVar9[2] != 0)) {
      uVar8 = FUN_01985d44(lVar11,DAT_031a96a0);
      FUN_00d768bc(uVar8,puVar9[2]);
    }
    local_130 = (long *)0x0;
    FUN_00cb6a78(lVar11,puVar9,&local_130);
    local_108 = 0;
    local_118 = 0;
    local_110 = (void *)0x0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0xffffffff;
    puVar9 = (undefined8 *)puVar9[3];
    if (puVar9 != (undefined8 *)0x0) {
      puVar19 = (undefined8 *)*puVar9;
      while (puVar19 != (undefined8 *)0x0) {
        (**(code **)*local_130)(local_130,*puVar19);
        pbVar14 = (byte *)*puVar19;
        if (pbVar14 == (byte *)0x0) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0x811c9dc5;
          if (*pbVar14 != 0) {
            uVar17 = 0x811c9dc5;
            uVar13 = (uint)*pbVar14;
            do {
              pbVar14 = pbVar14 + 1;
              uVar17 = (uVar17 ^ uVar13) * 0x1000193;
              uVar13 = (uint)*pbVar14;
            } while (*pbVar14 != 0);
          }
        }
        local_108 = local_108 + 1;
        uVar13 = (uint)local_118;
        if ((uint)local_118 >> 1 < local_108) {
          local_128 = 0;
          local_120 = (void *)0x0;
          FUN_009348c8(&local_128,((uint)local_118 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000
                      );
          pvVar5 = local_110;
          uVar8 = local_118;
          while (local_118._0_4_ = (uint)local_118 - 1, -1 < (int)(uint)local_118) {
            iVar6 = *(int *)((long)local_110 + (ulong)(uint)local_118 * 8 + 4);
            if (iVar6 != -1) {
              uVar13 = *(uint *)((long)local_110 + (ulong)(uint)local_118 * 8);
              uVar2 = 0;
              if ((uint)local_128 != 0) {
                uVar2 = uVar13 / (uint)local_128;
              }
              uVar10 = (ulong)(uVar13 - uVar2 * (uint)local_128);
              piVar16 = (int *)((long)local_120 + uVar10 * 8 + 4);
              iVar1 = *piVar16;
              while (iVar1 != -1) {
                uVar2 = (uint)local_128;
                if (0 < (int)(uint)uVar10) {
                  uVar2 = (uint)uVar10;
                }
                uVar10 = (ulong)(uVar2 - 1);
                piVar16 = (int *)((long)local_120 + uVar10 * 8 + 4);
                iVar1 = *piVar16;
              }
              *(uint *)((long)local_120 + uVar10 * 8) = uVar13;
              *piVar16 = iVar6;
            }
          }
          local_110 = local_120;
          local_120 = pvVar5;
          local_118 = local_128;
          uVar13 = (uint)local_128;
          local_128 = uVar8;
          if (pvVar5 != (void *)0x0) {
            operator_delete__(pvVar5);
            local_128 = 0;
            local_120 = (void *)0x0;
            uVar13 = (uint)local_118;
          }
        }
        uVar2 = 0;
        if (uVar13 != 0) {
          uVar2 = uVar17 / uVar13;
        }
        uVar10 = (ulong)(uVar17 - uVar2 * uVar13);
        piVar16 = (int *)((long)local_110 + uVar10 * 8 + 4);
        iVar6 = *piVar16;
        while (iVar6 != -1) {
          uVar2 = uVar13;
          if (0 < (int)(uint)uVar10) {
            uVar2 = (uint)uVar10;
          }
          uVar10 = (ulong)(uVar2 - 1);
          piVar16 = (int *)((long)local_110 + uVar10 * 8 + 4);
          iVar6 = *piVar16;
        }
        *(uint *)((long)local_110 + uVar10 * 8) = uVar17;
        iVar6 = FUN_00d9fd90(&local_118,(int *)((long)puVar19 + 0xc));
        plVar4 = local_130;
        *piVar16 = iVar6;
        iVar6 = *(int *)((long)puVar19 + 0xc);
        if (iVar6 == 1) {
          uVar8 = *puVar19;
          uVar18 = *(undefined4 *)(puVar19 + 2);
LAB_00d9f744:
          uVar7 = FUN_00e6a474(uVar8);
          uVar7 = FUN_0091ed5c(uVar8,uVar7,0x12345678);
          puVar12 = (undefined4 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar7);
          *puVar12 = uVar18;
        }
        else if (iVar6 == 0) {
          uVar8 = *puVar19;
          uVar18 = *(undefined4 *)((long)puVar19 + 0x14);
          goto LAB_00d9f744;
        }
        puVar9 = puVar9 + 1;
        puVar19 = (undefined8 *)*puVar9;
      }
    }
    if (param_5 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*param_5;
      plVar4 = local_130;
      while (local_130 = plVar4, puVar9 != (undefined8 *)0x0) {
        pbVar14 = (byte *)*puVar9;
        if (pbVar14 == (byte *)0x0) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0x811c9dc5;
          if (*pbVar14 != 0) {
            uVar17 = 0x811c9dc5;
            uVar13 = (uint)*pbVar14;
            pbVar15 = pbVar14;
            do {
              pbVar15 = pbVar15 + 1;
              uVar17 = (uVar17 ^ uVar13) * 0x1000193;
              uVar13 = (uint)*pbVar15;
            } while (*pbVar15 != 0);
          }
        }
        if ((uint)local_118 != 0) {
          uVar13 = 0;
          if ((uint)local_118 != 0) {
            uVar13 = uVar17 / (uint)local_118;
          }
          uVar13 = uVar17 - uVar13 * (uint)local_118;
          while ((*(uint *)((long)local_110 + (ulong)uVar13 * 8) != uVar17 &&
                 (*(int *)((long)local_110 + (ulong)uVar13 * 8 + 4) != -1))) {
            uVar2 = (uint)local_118;
            if (0 < (int)uVar13) {
              uVar2 = uVar13;
            }
            uVar13 = uVar2 - 1;
          }
          if (((uVar13 != 0xffffffff) &&
              (uVar17 = *(uint *)((long)local_110 + (ulong)uVar13 * 8 + 4), uVar17 != 0xffffffff))
             && (piVar16 = (int *)(local_f8 + (ulong)uVar17 * 4), piVar16 != (int *)0x0)) {
            iVar6 = *piVar16;
            if (iVar6 == 1) {
              uVar18 = *(undefined4 *)(puVar9 + 1);
            }
            else {
              if (iVar6 != 0) goto LAB_00d9f890;
              uVar18 = *(undefined4 *)((long)puVar9 + 0xc);
            }
            uVar7 = FUN_00e6a474(pbVar14);
            uVar7 = FUN_0091ed5c(pbVar14,uVar7,0x12345678);
            puVar12 = (undefined4 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar7);
            *puVar12 = uVar18;
          }
        }
LAB_00d9f890:
        param_5 = param_5 + 1;
        plVar4 = local_130;
        puVar9 = (undefined8 *)*param_5;
      }
    }
    FUN_00d9f8e4(&local_118);
  }
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9f8e4(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00d9f964(long *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)*param_1;
  while (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(puVar3 + 2) == 0) {
      lVar2 = FUN_00d76090(param_2,puVar3[1]);
      if (lVar2 != 0) {
        FUN_00d9f2f8(param_2,*puVar3,*(undefined4 *)((long)puVar3 + 0x14),lVar2 + 0x10,puVar3[3]);
      }
    }
    else {
      puVar1 = (uint *)FUN_00d76194();
      if ((puVar1 != (uint *)0x0) && (*puVar1 != 0)) {
        uVar4 = 0;
        do {
          FUN_00d9f2f8(param_2,*puVar3,*(undefined4 *)((long)puVar3 + 0x14),
                       *(long *)(*(long *)(puVar1 + 2) + uVar4 * 8) + 0x10,puVar3[3]);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar1);
      }
    }
    param_1 = param_1 + 1;
    puVar3 = (undefined8 *)*param_1;
  }
  return;
}




void FUN_00d9fa20(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint local_70 [2];
  undefined1 auStack_68 [48];
  undefined4 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_2 == (byte *)0x0) {
    local_70[0] = 0;
  }
  else {
    uVar4 = (uint)*param_2;
    local_70[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_70[0] = (local_70[0] ^ uVar4) * 0x1000193;
        uVar4 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  uVar3 = FUN_00d9fc50(param_1,local_70,auStack_68);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    *param_3 = local_38;
    param_3[1] = local_30;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}




void FUN_00d9facc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [48];
  undefined4 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00d9fc50(param_1,param_2,auStack_68);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    *param_3 = local_38;
    param_3[1] = local_30;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}




void FUN_00d9fb34(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00d9fc50(param_1,param_2,auStack_68);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}




void FUN_00d9fba0(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint local_70 [2];
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_2 == (byte *)0x0) {
    local_70[0] = 0;
  }
  else {
    uVar4 = (uint)*param_2;
    local_70[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_70[0] = (local_70[0] ^ uVar4) * 0x1000193;
        uVar4 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  uVar3 = FUN_00d9fc50(param_1,local_70,auStack_68);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}




void FUN_00d9fc50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x18);
  do {
    if (lVar4 == 0) {
LAB_00d9fcd8:
      uVar3 = 0;
LAB_00d9fcdc:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_031a96a0) {
      FUN_00d6ed94(param_1,auStack_78);
      uVar2 = FUN_00d76bfc(lVar4,param_2,param_3);
      if ((uVar2 & 1) != 0) {
        FUN_009b3960(param_3,param_3,auStack_78);
        uVar3 = 1;
        goto LAB_00d9fcdc;
      }
      goto LAB_00d9fcd8;
    }
    lVar4 = *(long *)(lVar4 + 0x20);
  } while( true );
}




uint FUN_00d9fd04(undefined8 param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (byte *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    local_30[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_30[0] = (local_30[0] ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  uVar2 = FUN_00d9fc50(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}




void FUN_00d9fd90(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00d9fe24(param_1 + 0x18,auStack_40);
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(param_1 + 0x18) - 1) * 4);
  }
  else {
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 4);
    *(undefined4 *)(param_1 + 0x28) = *puVar2;
  }
  *puVar2 = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9fe24(uint *param_1,undefined4 *param_2)

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
    FUN_00d9feac(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_00d9feac(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined4 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00d9ff2c(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_00d9ff34(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00e6a474(param_2);
    uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  }
  *param_1 = uVar1;
  return;
}




void thunk_FUN_00d9ff34(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00e6a474(param_2);
    uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  }
  *param_1 = uVar1;
  return;
}




void FUN_00d9ff84(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00d9ff8c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00d9ff94(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_00d9ff9c(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474();
  FUN_0091ed5c(param_1,uVar1,0x12345678);
  return;
}




void FUN_00d9ffcc(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}




bool FUN_00d9ffd8(long param_1)

{
  return (*(uint *)(param_1 + 0x2f4) & 0x20000110) != 0;
}




char * FUN_00d9fff0(ulong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Bone_RChainBase";
  if ((param_1 & 1) != 0) {
    pcVar1 = "Bone_LChainBase";
  }
  return pcVar1;
}

