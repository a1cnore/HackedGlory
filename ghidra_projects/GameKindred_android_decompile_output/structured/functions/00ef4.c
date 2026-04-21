// functions/00ef4 — 9 functions
#include "libGameKindred.h"




void thunk_FUN_00ef4010(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00efa054();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00efa054();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_00efa244();
  }
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x48));
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x50));
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x58));
  return;
}




void thunk_FUN_00ef4010(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00efa054();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00efa054();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_00efa244();
  }
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x48));
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x50));
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00ef4010(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00efa054();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00efa054();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_00efa244();
  }
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x48));
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x50));
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x58));
  return;
}




undefined4 FUN_00ef4064(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = param_2;
  plVar4 = param_1 + 10;
  if (*plVar4 != 0) {
    if (param_3 <= *(int *)(*plVar4 + 0x18)) {
      FUN_00efa084();
      goto LAB_00ef4108;
    }
    FUN_00efa054();
    FUN_00ef1268(*plVar4);
    *plVar4 = 0;
  }
  lVar3 = thunk_FUN_00ef1250(0x28,0);
  iVar1 = param_3 + 3;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  uVar2 = (iVar1 >> 2) - 1;
  uVar2 = uVar2 | uVar2 >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  FUN_00ef9fcc(lVar3,param_3,(uVar2 | uVar2 >> 0x10) + 1);
  *plVar4 = lVar3;
  if (lVar3 == 0) {
    return 0x80000004;
  }
LAB_00ef4108:
  if (param_1[9] == 0) {
    lVar3 = thunk_FUN_00ef1250(0x28,0);
    FUN_00ef9fcc(lVar3,0x40,0x20);
    param_1[9] = lVar3;
    if (lVar3 == 0) {
      return 0x80000004;
    }
  }
  else {
    FUN_00efa084();
  }
  plVar4 = param_1 + 0xb;
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    if (param_3 <= *(int *)(lVar3 + 8)) {
      *(undefined4 *)(lVar3 + 0xc) = 0;
      return 0x40000000;
    }
    FUN_00efa244();
    FUN_00ef1268(*plVar4);
    *plVar4 = 0;
  }
  lVar3 = thunk_FUN_00ef1250(0x10,0);
  FUN_00efa20c(lVar3,param_3);
  *plVar4 = lVar3;
  if (lVar3 != 0) {
    return 0x40000000;
  }
  return 0x80000004;
}




void FUN_00ef41a4(undefined8 *param_1,long param_2,code *param_3,uint *param_4,undefined4 *param_5)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [24];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 auStack_b4 [13];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  iVar4 = FUN_00ef3370(*param_1);
  if (0 < iVar4) {
    lVar19 = 0;
    iVar4 = 0;
    fVar26 = 0.0;
    do {
      lVar7 = FUN_00ef3388(*param_1,iVar4);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 8) != 0)) {
        fVar26 = fVar26 + 1.0;
        fVar21 = (float)(*param_3)();
        if (fVar26 * fVar21 <= 1.0) {
          lVar19 = lVar7;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = FUN_00ef3370(*param_1);
    } while (iVar4 < iVar5);
    if (lVar19 != 0) {
      uVar6 = FUN_00ef1e90(*param_1,lVar19);
      lVar7 = *(long *)(lVar19 + 8);
      if (0 < *(int *)(lVar7 + 0x18)) {
        lVar17 = 0;
        lVar20 = 0;
        uVar18 = 0;
        fVar26 = 0.0;
        do {
          lVar1 = *(long *)(lVar19 + 0x10) + lVar17 * 0x20;
          if (((*(byte *)(lVar1 + 0x1f) < 0x40) &&
              ((*(ushort *)(param_2 + 0x100) & *(ushort *)(lVar1 + 0x1c)) != 0)) &&
             ((*(ushort *)(param_2 + 0x102) & *(ushort *)(lVar1 + 0x1c)) == 0)) {
            lVar7 = *(long *)(lVar19 + 0x10) + lVar17 * 0x20;
            fVar21 = 0.0;
            if (2 < (ulong)*(byte *)(lVar7 + 0x1e)) {
              lVar9 = *(long *)(lVar19 + 0x18);
              fVar21 = 0.0;
              lVar12 = 4;
              pfVar10 = (float *)(lVar9 + (ulong)*(ushort *)(lVar7 + 4) * 0xc);
              fVar22 = *pfVar10;
              fVar25 = pfVar10[2];
              uVar16 = (ulong)*(ushort *)(lVar7 + 6);
              do {
                uVar11 = (ulong)*(ushort *)(lVar7 + lVar12 * 2);
                pfVar10 = (float *)(lVar9 + uVar16 * 0xc);
                pfVar13 = (float *)(lVar9 + uVar11 * 0xc);
                uVar15 = lVar12 - 1;
                lVar12 = lVar12 + 1;
                fVar21 = fVar21 + ((pfVar10[2] - fVar25) * (*pfVar13 - fVar22) -
                                  (*pfVar10 - fVar22) * (pfVar13[2] - fVar25));
                uVar16 = uVar11;
              } while (uVar15 < *(byte *)(lVar7 + 0x1e));
            }
            fVar26 = fVar26 + fVar21;
            fVar22 = (float)(*param_3)();
            lVar7 = *(long *)(lVar19 + 8);
            if (fVar26 * fVar22 <= fVar21) {
              lVar20 = lVar1;
              uVar18 = uVar6 | (uint)lVar17;
            }
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(lVar7 + 0x18));
        if (lVar20 != 0) {
          lVar19 = *(long *)(lVar19 + 0x18);
          puVar8 = (undefined4 *)(lVar19 + (ulong)*(ushort *)(lVar20 + 4) * 0xc);
          local_c8 = *puVar8;
          local_c4 = puVar8[1];
          local_c0 = puVar8[2];
          bVar2 = *(byte *)(lVar20 + 0x1e);
          if (1 < (ulong)bVar2) {
            lVar7 = 3;
            puVar8 = auStack_b4;
            do {
              puVar14 = (undefined4 *)(lVar19 + (ulong)*(ushort *)(lVar20 + lVar7 * 2) * 0xc);
              puVar8[-2] = *puVar14;
              puVar8[-1] = puVar14[1];
              uVar16 = lVar7 - 1;
              lVar7 = lVar7 + 1;
              *puVar8 = puVar14[2];
              puVar8 = puVar8 + 3;
            } while (uVar16 < bVar2);
          }
          uVar23 = (*param_3)();
          uVar24 = (*param_3)();
          FUN_00efadcc(uVar23,uVar24,&local_c8,*(undefined1 *)(lVar20 + 0x1e),auStack_e0,&uStack_ec)
          ;
          local_f0 = 0;
          uVar23 = FUN_00ef44a4(param_1,uVar18,&uStack_ec,&local_f0);
          if (-1 < (int)uVar23) {
            uVar23 = 0x40000000;
            local_e8 = local_f0;
            *param_5 = uStack_ec;
            param_5[1] = local_f0;
            param_5[2] = local_e4;
            *param_4 = uVar18;
          }
          goto LAB_00ef446c;
        }
      }
    }
  }
  uVar23 = 0x80000000;
LAB_00ef446c:
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar23);
  }
  return;
}




undefined4 FUN_00ef44a4(undefined8 *param_1,undefined8 param_2,float *param_3,float *param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float *pfVar10;
  float *pfVar11;
  byte *pbVar12;
  uint uVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float local_a4;
  long local_a0;
  long local_98;
  long local_90 [4];
  
  lVar3 = tpidr_el0;
  local_90[3] = *(long *)(lVar3 + 0x28);
  local_a0 = 0;
  local_98 = 0;
  uVar9 = 0x80000008;
  iVar4 = FUN_00ef33d4(*param_1,param_2,&local_98,&local_a0);
  if (-1 < iVar4) {
    if ((*(byte *)(local_a0 + 0x1f) & 0xc0) == 0x40) {
      pfVar10 = (float *)(*(long *)(local_98 + 0x18) + (ulong)*(ushort *)(local_a0 + 4) * 0xc);
      pfVar11 = (float *)(*(long *)(local_98 + 0x18) + (ulong)*(ushort *)(local_a0 + 6) * 0xc);
      fVar15 = (float)FUN_00efa36c((*pfVar10 - *param_3) * (*pfVar10 - *param_3) +
                                   (pfVar10[1] - param_3[1]) * (pfVar10[1] - param_3[1]) +
                                   (pfVar10[2] - param_3[2]) * (pfVar10[2] - param_3[2]));
      fVar16 = (float)FUN_00efa36c((*pfVar11 - *param_3) * (*pfVar11 - *param_3) +
                                   (pfVar11[1] - param_3[1]) * (pfVar11[1] - param_3[1]) +
                                   (pfVar11[2] - param_3[2]) * (pfVar11[2] - param_3[2]));
      if (param_4 != (float *)0x0) {
        *param_4 = pfVar10[1] + (fVar15 / (fVar15 + fVar16)) * (pfVar11[1] - pfVar10[1]);
      }
LAB_00ef46a4:
      uVar9 = 0x40000000;
    }
    else {
      uVar6 = (ulong)(local_a0 - *(long *)(local_98 + 0x10)) >> 5 & 0xffffffff;
      pbVar12 = (byte *)(*(long *)(local_98 + 0x28) + uVar6 * 0xc + 9);
      if (*pbVar12 != 0) {
        piVar14 = (int *)(*(long *)(local_98 + 0x28) + uVar6 * 0xc);
        uVar13 = 0;
        do {
          iVar4 = piVar14[1];
          lVar7 = *(long *)(local_98 + 0x38);
          bVar1 = *(byte *)(local_a0 + 0x1e);
          lVar5 = 0;
          do {
            bVar2 = *(byte *)(lVar7 + (ulong)((iVar4 + uVar13) * 4) + lVar5);
            if ((uint)bVar2 < (uint)bVar1) {
              lVar8 = *(long *)(local_98 + 0x18) +
                      (ulong)*(ushort *)(local_a0 + (ulong)bVar2 * 2 + 4) * 0xc;
            }
            else {
              lVar8 = *(long *)(local_98 + 0x30) +
                      (ulong)((((uint)bVar2 - (uint)bVar1) + *piVar14) * 3) * 4;
            }
            local_90[lVar5] = lVar8;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 3);
          uVar6 = FUN_00efa8a0(param_3,local_90[0],local_90[1],local_90[2],&local_a4);
          if ((uVar6 & 1) != 0) {
            if (param_4 != (float *)0x0) {
              *param_4 = local_a4;
            }
            goto LAB_00ef46a4;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *pbVar12);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_90[3]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}




/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00ef46e4(float param_1,undefined8 *param_2,int param_3,undefined4 *param_4,long param_5,
            code *param_6,float *param_7,undefined4 *param_8)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  float *pfVar17;
  undefined4 *puVar18;
  ulong uVar19;
  float *pfVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint local_16c;
  long local_168;
  float local_15c;
  uint *local_158;
  undefined1 auStack_13c [4];
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  uint *local_118;
  long local_110 [2];
  undefined8 local_100;
  undefined4 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 auStack_c4 [17];
  
  lVar4 = tpidr_el0;
  lVar12 = *(long *)(lVar4 + 0x28);
  uVar6 = 0x80000008;
  if ((param_3 != 0) && (uVar7 = FUN_00ef34e0(*param_2,param_3), (uVar7 & 1) != 0)) {
    local_110[0] = 0;
    local_110[1] = 0;
    FUN_00ef3494(*param_2,param_3,local_110 + 1,local_110);
    if (((*(ushort *)(param_5 + 0x100) & *(ushort *)(local_110[0] + 0x1c)) != 0) &&
       (uVar6 = 0x80000008, (*(ushort *)(param_5 + 0x102) & *(ushort *)(local_110[0] + 0x1c)) == 0))
    {
      FUN_00efa084(param_2[10]);
      *(undefined4 *)(param_2[0xb] + 0xc) = 0;
      puVar8 = (undefined4 *)FUN_00efa13c(param_2[10],param_3);
      *puVar8 = *param_4;
      puVar8[1] = param_4[1];
      uVar6 = param_4[2];
      puVar8[5] = 0x40000000;
      puVar8[6] = param_3;
      puVar8[4] = 0;
      puVar8[2] = uVar6;
      puVar8[3] = 0;
      lVar9 = param_2[0xb];
      iVar5 = *(int *)(lVar9 + 0xc);
      *(int *)(lVar9 + 0xc) = iVar5 + 1;
      FUN_00efa24c(lVar9,iVar5,puVar8);
      plVar10 = (long *)param_2[0xb];
      uVar6 = 0x80000000;
      iVar5 = *(int *)((long)plVar10 + 0xc);
      if (iVar5 != 0) {
        fVar26 = 0.0;
        local_168 = 0;
        local_158 = (uint *)0x0;
        local_15c = 0.0;
        local_16c = 0x40000000;
        do {
          pfVar20 = *(float **)*plVar10;
          *(int *)((long)plVar10 + 0xc) = iVar5 + -1;
          FUN_00efa2a0(plVar10,0,((long *)*plVar10)[iVar5 + -1]);
          fVar2 = pfVar20[6];
          pfVar20[5] = (float)((uint)pfVar20[5] & 0x3fffffff | 0x80000000);
          local_100 = 0;
          local_118 = (uint *)0x0;
          FUN_00ef3494(*param_2,fVar2,&local_100,&local_118);
          if (*(byte *)((long)local_118 + 0x1f) < 0x40) {
            fVar27 = 0.0;
            if (2 < (ulong)*(byte *)((long)local_118 + 0x1e)) {
              fVar27 = 0.0;
              lVar9 = 4;
              lVar14 = *(long *)(local_100 + 0x18);
              pfVar15 = (float *)(lVar14 + (ulong)(ushort)local_118[1] * 0xc);
              fVar21 = *pfVar15;
              fVar23 = pfVar15[2];
              uVar7 = (ulong)*(ushort *)((long)local_118 + 6);
              do {
                uVar16 = (ulong)*(ushort *)((long)local_118 + lVar9 * 2);
                pfVar15 = (float *)(lVar14 + uVar7 * 0xc);
                pfVar17 = (float *)(lVar14 + uVar16 * 0xc);
                uVar19 = lVar9 - 1;
                lVar9 = lVar9 + 1;
                fVar27 = fVar27 + ((pfVar15[2] - fVar23) * (*pfVar17 - fVar21) -
                                  (*pfVar15 - fVar21) * (pfVar17[2] - fVar23));
                uVar7 = uVar16;
              } while (uVar19 < *(byte *)((long)local_118 + 0x1e));
            }
            fVar26 = fVar26 + fVar27;
            fVar21 = (float)(*param_6)();
            if (fVar26 * fVar21 <= fVar27) {
              local_168 = local_100;
              local_15c = fVar2;
              local_158 = local_118;
            }
          }
          local_128 = 0;
          uStack_120 = 0;
          if (((uint)pfVar20[5] & 0x3fffffff) == 0) {
            fVar27 = 0.0;
          }
          else {
            fVar27 = *(float *)(*(long *)param_2[10] +
                                (ulong)(((uint)pfVar20[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
            if (fVar27 != 0.0) {
              FUN_00ef3494(*param_2,fVar27,&uStack_120,&local_128);
            }
          }
          uVar13 = *local_118;
          if (uVar13 != 0xffffffff) {
            lVar9 = *(long *)(local_100 + 0x20);
            do {
              fVar21 = *(float *)(lVar9 + (ulong)uVar13 * 0xc);
              if ((fVar21 != 0.0) && (fVar21 != fVar27)) {
                local_138 = 0;
                local_130 = 0;
                uVar11 = FUN_00ef3494(*param_2,fVar21,&local_130,&local_138);
                if (((*(ushort *)(param_5 + 0x100) & *(ushort *)(local_138 + 0x1c)) != 0) &&
                   ((((*(ushort *)(param_5 + 0x102) & *(ushort *)(local_138 + 0x1c)) == 0 &&
                     (iVar5 = FUN_00ef4d34(uVar11,fVar2,local_118,local_100,fVar21,local_138,
                                           local_130,&local_d8,&local_f0), iVar5 != 0)) &&
                    (fVar23 = (float)FUN_00efa76c(param_4,&local_d8,&local_f0,auStack_13c),
                    fVar23 <= param_1 * param_1)))) {
                  pfVar15 = (float *)FUN_00efa13c(param_2[10],fVar21);
                  if (pfVar15 == (float *)0x0) {
                    local_16c = local_16c | 0x20;
                  }
                  else if (-1 < (int)pfVar15[5]) {
                    if ((uint)pfVar15[5] >> 0x1e == 0) {
                      fVar23 = local_d8 + (local_f0 - local_d8) * 0.5;
                      *pfVar15 = fVar23;
                      fVar24 = local_d4 + (local_ec - local_d4) * 0.5;
                      pfVar15[1] = fVar24;
                      fVar25 = local_d0 + (local_e8 - local_d0) * 0.5;
                      pfVar15[2] = fVar25;
                    }
                    else {
                      fVar23 = *pfVar15;
                      fVar24 = pfVar15[1];
                      fVar25 = pfVar15[2];
                    }
                    fVar28 = pfVar20[4];
                    fVar24 = (float)FUN_00efa36c((fVar23 - *pfVar20) * (fVar23 - *pfVar20) +
                                                 (fVar24 - pfVar20[1]) * (fVar24 - pfVar20[1]) +
                                                 (fVar25 - pfVar20[2]) * (fVar25 - pfVar20[2]));
                    fVar23 = pfVar15[5];
                    if ((((uint)fVar23 >> 0x1e & 1) == 0) || (fVar28 + fVar24 < pfVar15[4])) {
                      pfVar15[5] = ABS(fVar23);
                      pfVar15[6] = fVar21;
                      iVar5 = *(int *)param_2[10];
                      pfVar15[4] = fVar28 + fVar24;
                      uVar1 = ((uint)((int)pfVar20 - iVar5) >> 2) * -0x49249249 + 1 & 0x3fffffff;
                      pfVar15[5] = (float)(uVar1 | (uint)fVar23 & 0x40000000);
                      if (((uint)fVar23 & 0x40000000) == 0) {
                        pfVar15[5] = (float)(uVar1 | 0x40000000);
                        plVar10 = (long *)param_2[0xb];
                        uVar7 = (ulong)*(uint *)((long)plVar10 + 0xc);
                        *(uint *)((long)plVar10 + 0xc) = *(uint *)((long)plVar10 + 0xc) + 1;
LAB_00ef4b90:
                        FUN_00efa24c(plVar10,uVar7,pfVar15);
                      }
                      else {
                        plVar10 = (long *)param_2[0xb];
                        if (0 < *(int *)((long)plVar10 + 0xc)) {
                          uVar7 = 0;
                          do {
                            if (*(float **)(*plVar10 + uVar7 * 8) == pfVar15) goto LAB_00ef4b90;
                            uVar7 = uVar7 + 1;
                          } while ((long)uVar7 < (long)*(int *)((long)plVar10 + 0xc));
                        }
                      }
                    }
                  }
                }
                lVar9 = *(long *)(local_100 + 0x20);
              }
              uVar13 = *(uint *)(lVar9 + (ulong)uVar13 * 0xc + 4);
            } while (uVar13 != 0xffffffff);
          }
          plVar10 = (long *)param_2[0xb];
          iVar5 = *(int *)((long)plVar10 + 0xc);
        } while (iVar5 != 0);
        if (local_158 == (uint *)0x0) {
          uVar6 = 0x80000000;
        }
        else {
          lVar9 = *(long *)(local_168 + 0x18);
          pfVar20 = (float *)(lVar9 + (ulong)(ushort)local_158[1] * 0xc);
          local_d8 = *pfVar20;
          local_d4 = pfVar20[1];
          local_d0 = pfVar20[2];
          bVar3 = *(byte *)((long)local_158 + 0x1e);
          if (1 < (ulong)bVar3) {
            lVar14 = 3;
            puVar8 = auStack_c4;
            do {
              puVar18 = (undefined4 *)
                        (lVar9 + (ulong)*(ushort *)((long)local_158 + lVar14 * 2) * 0xc);
              puVar8[-2] = *puVar18;
              puVar8[-1] = puVar18[1];
              uVar7 = lVar14 - 1;
              lVar14 = lVar14 + 1;
              *puVar8 = puVar18[2];
              puVar8 = puVar8 + 3;
            } while (uVar7 < bVar3);
          }
          uVar11 = (*param_6)();
          uVar22 = (*param_6)();
          FUN_00efadcc(uVar11,uVar22,&local_d8,*(undefined1 *)((long)local_158 + 0x1e),&local_f0,
                       &local_100);
          local_118 = (uint *)((ulong)local_118 & 0xffffffff00000000);
          uVar6 = FUN_00ef44a4(param_2,local_15c,&local_100,&local_118);
          if (-1 < (int)local_16c) {
            uVar6 = 0x40000000;
            local_100 = CONCAT44(local_118._0_4_,(undefined4)local_100);
            *param_8 = (undefined4)local_100;
            param_8[1] = local_118._0_4_;
            param_8[2] = local_f8;
            *param_7 = local_15c;
          }
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}




undefined8
FUN_00ef4d34(undefined8 param_1,int param_2,uint *param_3,long param_4,int param_5,uint *param_6,
            long param_7,float *param_8,float *param_9)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  float *pfVar6;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  float fVar13;
  
  uVar7 = *param_3;
  if (uVar7 == 0xffffffff) {
    return 0x80000008;
  }
  lVar5 = *(long *)(param_4 + 0x20);
  uVar1 = uVar7;
  while( true ) {
    uVar10 = (ulong)uVar1;
    piVar11 = (int *)(lVar5 + uVar10 * 0xc);
    if (*piVar11 == param_5) break;
    uVar1 = *(uint *)(lVar5 + uVar10 * 0xc + 4);
    if (uVar1 == 0xffffffff) {
      return 0x80000008;
    }
  }
  if (piVar11 == (int *)0x0) {
    return 0x80000008;
  }
  if ((*(byte *)((long)param_3 + 0x1f) & 0xc0) == 0x40) {
    while (*(int *)(lVar5 + (ulong)uVar7 * 0xc) != param_5) {
      uVar7 = *(uint *)(lVar5 + (ulong)uVar7 * 0xc + 4);
      if (uVar7 == 0xffffffff) {
        return 0x80000008;
      }
    }
    lVar8 = *(long *)(param_4 + 0x18);
    lVar5 = (long)param_3 + (ulong)*(byte *)(lVar5 + (ulong)uVar7 * 0xc + 8) * 2;
  }
  else {
    if ((*(byte *)((long)param_6 + 0x1f) & 0xc0) != 0x40) {
      lVar8 = lVar5 + uVar10 * 0xc;
      bVar2 = *(byte *)(lVar8 + 8);
      lVar12 = *(long *)(param_4 + 0x18);
      bVar3 = *(byte *)((long)param_3 + 0x1e);
      uVar7 = bVar2 + 1;
      uVar1 = 0;
      if (bVar3 != 0) {
        uVar1 = uVar7 / bVar3;
      }
      pfVar6 = (float *)(lVar12 + (ulong)*(ushort *)((long)param_3 + (ulong)bVar2 * 2 + 4) * 0xc);
      uVar4 = *(ushort *)((long)param_3 + (ulong)(uVar7 - uVar1 * bVar3) * 2 + 4);
      *param_8 = *pfVar6;
      pfVar9 = (float *)(lVar12 + (ulong)uVar4 * 0xc);
      param_8[1] = pfVar6[1];
      param_8[2] = pfVar6[2];
      *param_9 = *pfVar9;
      param_9[1] = pfVar9[1];
      param_9[2] = pfVar9[2];
      if (*(char *)(lVar8 + 9) == -1) {
        return 0x40000000;
      }
      lVar5 = lVar5 + uVar10 * 0xc;
      bVar2 = *(byte *)(lVar5 + 10);
      bVar3 = *(byte *)(lVar5 + 0xb);
      if ((bVar2 == 0) && (bVar3 == 0xff)) {
        return 0x40000000;
      }
      fVar13 = (float)bVar2 * 0.003921569;
      *param_8 = *pfVar6 + fVar13 * (*pfVar9 - *pfVar6);
      param_8[1] = pfVar6[1] + fVar13 * (pfVar9[1] - pfVar6[1]);
      param_8[2] = pfVar6[2] + fVar13 * (pfVar9[2] - pfVar6[2]);
      fVar13 = (float)bVar3 * 0.003921569;
      *param_9 = *pfVar6 + fVar13 * (*pfVar9 - *pfVar6);
      param_9[1] = pfVar6[1] + fVar13 * (pfVar9[1] - pfVar6[1]);
      param_9[2] = pfVar6[2] + fVar13 * (pfVar9[2] - pfVar6[2]);
      return 0x40000000;
    }
    uVar7 = *param_6;
    if (uVar7 == 0xffffffff) {
      return 0x80000008;
    }
    lVar5 = *(long *)(param_7 + 0x20);
    while (*(int *)(lVar5 + (ulong)uVar7 * 0xc) != param_2) {
      uVar7 = *(uint *)(lVar5 + (ulong)uVar7 * 0xc + 4);
      if (uVar7 == 0xffffffff) {
        return 0x80000008;
      }
    }
    lVar8 = *(long *)(param_7 + 0x18);
    lVar5 = (long)param_6 + (ulong)*(byte *)(lVar5 + (ulong)uVar7 * 0xc + 8) * 2;
  }
  pfVar6 = (float *)(lVar8 + (ulong)*(ushort *)(lVar5 + 4) * 0xc);
  *param_8 = *pfVar6;
  param_8[1] = pfVar6[1];
  param_8[2] = pfVar6[2];
  *param_9 = *pfVar6;
  param_9[1] = pfVar6[1];
  param_9[2] = pfVar6[2];
  return 0x40000000;
}




undefined4
FUN_00ef4fb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  uVar3 = 0x80000008;
  uVar2 = FUN_00ef33d4(*param_1,param_2,&local_40,&local_48);
  if ((-1 < (int)uVar2) && (local_40 != 0)) {
    FUN_00ef5048(uVar2,local_40,local_48,param_3,param_4);
    uVar3 = 0x40000000;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

