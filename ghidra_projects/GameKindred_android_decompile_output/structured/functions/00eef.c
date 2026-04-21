// functions/00eef — 27 functions
#include "libGameKindred.h"




void FUN_00eef15c(long param_1,uint param_2,uint param_3,code *param_4,long param_5,int param_6,
                 int *param_7)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float local_60;
  float fStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(float *)(param_1 + 0x24) <= (float)(int)param_2) &&
     ((float)(int)param_2 <= *(float *)(param_1 + 0x2c))) {
    if ((*(float *)(param_1 + 0x28) <= (float)(int)param_3) &&
       ((float)(int)param_3 <= *(float *)(param_1 + 0x30))) {
      local_60 = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x34) * (float)param_2;
      fStack_5c = *(float *)(param_1 + 0x38) * (float)param_3 + *(float *)(param_1 + 0x28);
      uStack_58 = param_2;
      uStack_54 = param_3;
      local_50 = FUN_00eeee70();
      uVar4 = (*param_4)(&local_60);
      if ((uVar4 & 1) != 0) {
        iVar1 = *param_7;
        *param_7 = iVar1 + 1;
        puVar5 = (undefined8 *)(param_5 + (long)iVar1 * 0x14);
        *(undefined4 *)(puVar5 + 2) = local_50;
        puVar5[1] = CONCAT44(uStack_54,uStack_58);
        *puVar5 = CONCAT44(fStack_5c,local_60);
      }
      bVar3 = *param_7 < param_6;
      goto LAB_00eef1cc;
    }
  }
  bVar3 = true;
LAB_00eef1cc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}




void FUN_00eef26c(float *param_1,float param_2,float param_3,float param_4,long param_5,
                 code *param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_80;
  uint uStack_78;
  uint uStack_74;
  float local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  fVar13 = *(float *)(param_5 + 0x24);
  fVar15 = *(float *)(param_5 + 0x28);
  fVar14 = *(float *)(param_5 + 0x34);
  fVar16 = *(float *)(param_5 + 0x38);
  uVar8 = (uint)((param_2 - fVar13) / fVar14);
  uVar3 = (*(uint *)(param_5 + 0x18) & 0x7fff) - 1;
  uVar4 = (*(uint *)(param_5 + 0x18) >> 0xf & 0x7fff) - 1;
  uVar9 = (uint)((param_3 - fVar15) / fVar16);
  uVar10 = (uint)(((param_2 - param_4) - fVar13) / fVar14);
  if ((int)uVar3 <= (int)uVar8) {
    uVar8 = uVar3;
  }
  uVar11 = (uint)(((param_3 - param_4) - fVar15) / fVar16);
  if ((int)uVar4 <= (int)uVar9) {
    uVar9 = uVar4;
  }
  uVar12 = (uint)(((param_2 + param_4) - fVar13) / fVar14);
  fVar1 = (float)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
  fVar2 = (float)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU));
  if ((int)uVar3 <= (int)uVar10) {
    uVar10 = uVar3;
  }
  uVar8 = (uint)(((param_3 + param_4) - fVar15) / fVar16);
  if ((int)uVar4 <= (int)uVar11) {
    uVar11 = uVar4;
  }
  if ((int)uVar3 <= (int)uVar12) {
    uVar12 = uVar3;
  }
  param_1[2] = fVar1;
  param_1[3] = fVar2;
  if ((int)uVar4 <= (int)uVar8) {
    uVar8 = uVar4;
  }
  uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
  uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  *param_1 = fVar13 + fVar14 * (float)(uint)fVar1;
  param_1[1] = fVar15 + fVar16 * (float)(uint)fVar2;
  fVar13 = (float)FUN_00eeee70();
  param_1[4] = fVar13;
  if (uVar11 <= uVar8) {
    uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
    uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    do {
      if (uVar10 <= uVar12) {
        uVar9 = uVar10 - 1;
        do {
          uVar9 = uVar9 + 1;
          fVar13 = (float)((ulong)*(undefined8 *)(param_5 + 0x34) >> 0x20) * (float)uVar11 +
                   (float)((ulong)*(undefined8 *)(param_5 + 0x24) >> 0x20);
          local_80 = CONCAT44(fVar13,(float)*(undefined8 *)(param_5 + 0x34) * (float)uVar9 +
                                     (float)*(undefined8 *)(param_5 + 0x24));
          uStack_78 = uVar9;
          uStack_74 = uVar11;
          local_70 = (float)FUN_00eeee70(local_80,fVar13,param_5);
          iVar7 = (*param_6)(&local_80,param_1);
          if (iVar7 == -1) {
            param_1[4] = local_70;
            *(ulong *)(param_1 + 2) = CONCAT44(uStack_74,uStack_78);
            *(undefined8 *)param_1 = local_80;
          }
        } while (uVar9 < uVar12);
      }
      bVar6 = uVar11 < uVar8;
      uVar11 = uVar11 + 1;
    } while (bVar6);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eef44c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(param_1 + 0x40) + iVar3;
  iVar5 = (*(uint *)(param_1 + 0x18) >> 0xf & 0x7fff) * (*(uint *)(param_1 + 0x18) & 0x7fff);
  iVar2 = iVar1;
  if (iVar5 <= iVar1) {
    iVar2 = iVar5;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  FUN_00eef4c4(param_1,iVar3,iVar2);
  if (iVar5 <= *(int *)(param_1 + 0x3c)) {
    uVar4 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar4 ^ 0x40000000;
    memset(*(void **)(param_1 + 0x10),0,(ulong)((uVar4 >> 0xf & 0x7fff) * (uVar4 & 0x7fff)));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}




void FUN_00eef4c4(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  
  lVar13 = *(long *)(param_1 + 0x10);
  bVar8 = (*(uint *)(param_1 + 0x18) & 0x40000000) == 0;
  lVar9 = 0;
  if (!bVar8) {
    lVar9 = 8;
  }
  lVar14 = *(long *)(param_1 + lVar9);
  lVar9 = *(long *)(param_1 + (ulong)bVar8 * 8);
  fVar17 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
           *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38);
  fVar18 = SQRT(fVar17);
  if (NAN(fVar18)) {
    fVar18 = sqrtf(fVar17);
  }
  if (param_2 < param_3) {
    lVar10 = (long)param_2;
    do {
      uVar15 = (uint)*(byte *)(lVar13 + lVar10);
      iVar11 = -1;
      uVar2 = *(uint *)(param_1 + 0x18) & 0x7fff;
      iVar7 = 0;
      if (uVar2 != 0) {
        iVar7 = (int)lVar10 / (int)uVar2;
      }
      iVar16 = iVar7 + -1;
      iVar6 = (int)lVar10 - iVar7 * uVar2;
      do {
        iVar12 = -1;
        do {
          uVar2 = uVar15;
          if ((iVar12 != 0 || iVar11 != 0) && (iVar1 = iVar6 + iVar12, -1 < iVar1)) {
            uVar3 = *(uint *)(param_1 + 0x18) & 0x7fff;
            if ((iVar1 < (int)uVar3) &&
               ((-1 < iVar11 + iVar7 &&
                (iVar11 + iVar7 < (int)(*(uint *)(param_1 + 0x18) >> 0xf & 0x7fff))))) {
              fVar17 = fVar18;
              if ((iVar11 == 0) != (iVar12 == 0)) {
                fVar17 = *(float *)(param_1 + 0x34);
              }
              iVar1 = iVar6 + iVar12 + iVar16 * uVar3;
              bVar4 = *(byte *)(lVar13 + iVar1);
              bVar5 = *(byte *)(lVar14 + iVar1);
              if (bVar4 <= bVar5) {
                bVar4 = bVar5;
              }
              fVar17 = expf(-(fVar17 * *(float *)(param_1 + 0x20)));
              uVar2 = (int)(fVar17 * (float)bVar4);
              if ((uint)(int)(fVar17 * (float)bVar4) <= (uVar15 & 0xff)) {
                uVar2 = uVar15;
              }
            }
          }
          uVar15 = uVar2;
          iVar12 = iVar12 + 1;
        } while (iVar12 != 2);
        iVar11 = iVar11 + 1;
        iVar16 = iVar16 + 1;
      } while (iVar11 != 2);
      fVar17 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + lVar10));
      *(char *)(lVar9 + lVar10) =
           (char)(int)(*(float *)(param_1 + 0x1c) * (float)(uVar15 & 0xff) +
                      (1.0 - *(float *)(param_1 + 0x1c)) * fVar17);
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 != param_3);
  }
  return;
}




bool FUN_00eef690(long param_1)

{
  return *(int *)(param_1 + 0x3c) == 0;
}




void FUN_00eef6a0(undefined4 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = param_1;
  return;
}




void FUN_00eef6ac(undefined8 param_1)

{
  FUN_00eefcc4(param_1,1);
  return;
}




void FUN_00eef6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint *param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  long lVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int local_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if (*param_7 != 0) {
    uVar3 = 0;
    lVar4 = *(long *)(param_7 + 2);
    do {
      if (*(int *)(*(long *)(param_7 + 2) + (ulong)uVar3 * 0x28 + 0x20) == param_8) {
        if (lVar4 != 0) goto LAB_00eef7ac;
        break;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x28;
    } while (uVar3 < *param_7);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  pvVar2 = operator_new(0x48);
  FUN_00eeeb04(pvVar2,param_9,param_10);
  local_b0 = pvVar2;
  FUN_00eeebb4(param_1,param_2,param_3,param_4,param_5,param_6,pvVar2,param_11);
  uStack_8c = 0;
  local_90 = param_8;
  FUN_00eef82c(param_7,&local_b0);
LAB_00eef7ac:
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00eef7e8(uint *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar1 = *(long *)(param_1 + 2);
    do {
      if (*(int *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x28 + 0x20) == param_2) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar2 < *param_1);
  }
  return 0;
}




void FUN_00eef82c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_00eefd2c(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x28;
  *(undefined8 *)(lVar2 + -8) = param_2[4];
  uVar5 = param_2[2];
  *(undefined8 *)(lVar2 + -0x10) = param_2[3];
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar2 + -0x20) = param_2[1];
  *(undefined8 *)(lVar2 + -0x28) = uVar5;
  return;
}




void FUN_00eef8c8(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  
  if (*param_1 != 0) {
    lVar2 = *(long *)(param_1 + 2);
    lVar6 = 0;
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + (ulong)uVar3 * 0x28 + 0x20) == param_2) {
        lVar4 = *(long *)(lVar2 + lVar6 + 8);
        if (lVar4 != 0) {
          do {
            FUN_00ef002c(lVar4,0);
            lVar4 = *(long *)(lVar4 + 0x10);
          } while (lVar4 != 0);
          lVar2 = *(long *)(param_1 + 2);
        }
        lVar2 = lVar2 + lVar6;
        *(undefined4 *)(lVar2 + 0x18) = 0;
        *(undefined8 *)(lVar2 + 8) = 0;
        *(undefined8 *)(lVar2 + 0x10) = 0;
        lVar2 = *(long *)(param_1 + 2);
        pvVar5 = *(void **)(lVar2 + lVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00eeeb78(pvVar5);
          operator_delete(pvVar5);
          lVar2 = *(long *)(param_1 + 2);
        }
        puVar1 = (undefined8 *)(lVar2 + lVar6);
        *puVar1 = 0;
        FUN_00eefdfc(param_1,puVar1,puVar1 + 5);
        return;
      }
      uVar3 = uVar3 + 1;
      lVar6 = lVar6 + 0x28;
    } while (uVar3 < *param_1);
  }
  return;
}




undefined8 FUN_00eef994(uint *param_1,int param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  
  if (*param_1 != 0) {
    uVar4 = 0;
    piVar2 = (int *)(*(long *)(param_1 + 2) + 0x18);
    do {
      if (*(int *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x28 + 0x20) == param_2) {
        if (piVar2 == (int *)0x18) {
          return 0;
        }
        *(undefined8 *)(param_3 + 0x10) = 0;
        lVar3 = *(long *)(piVar2 + -2);
        *(long *)(param_3 + 0x18) = lVar3;
        plVar1 = (long *)(piVar2 + -4);
        if (*(long *)(piVar2 + -4) != 0) {
          plVar1 = (long *)(lVar3 + 0x10);
        }
        *plVar1 = param_3;
        *(long *)(piVar2 + -2) = param_3;
        *piVar2 = *piVar2 + 1;
        FUN_00ef002c(param_3);
        return 1;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 10;
    } while (uVar4 < *param_1);
  }
  return 0;
}




undefined8 FUN_00eefa30(uint *param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar1 = *(long *)(param_1 + 2) + 8;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x28 + 0x20) == param_2) {
        if (lVar1 == 8) {
          return 0;
        }
        FUN_00eefab0(lVar1,param_3);
        FUN_00ef002c(param_3,0);
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar2 < *param_1);
  }
  return 0;
}




void FUN_00eefab0(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x18);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 0x18) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




undefined1  [16] FUN_00eefb10(uint *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  if (*param_1 != 0) {
    uVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 2);
    do {
      if (*(int *)(*(undefined8 **)(param_1 + 2) + (ulong)uVar1 * 5 + 4) == param_2) {
        if (puVar2 != (undefined8 *)0x0) {
          FUN_00eeee70(*puVar2);
          auVar3._4_4_ = extraout_var;
          auVar3._0_4_ = extraout_s0;
          auVar3._8_8_ = extraout_var_00;
          return auVar3;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 5;
    } while (uVar1 < *param_1);
  }
  return ZEXT816(0);
}




long FUN_00eefb60(uint *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar1 = *(long *)(param_1 + 2);
    do {
      if (*(int *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x28 + 0x20) == param_2) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar2 < *param_1);
  }
  return 0;
}




undefined8 FUN_00eefba4(uint *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
    uVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 2);
    do {
      if (*(int *)(*(undefined8 **)(param_1 + 2) + (ulong)uVar1 * 5 + 4) == param_2) {
        if (puVar2 == (undefined8 *)0x0) {
          return 0;
        }
        return *puVar2;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 5;
    } while (uVar1 < *param_1);
  }
  return 0;
}




void FUN_00eefbf4(float param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  
  uVar1 = *param_2;
  if (uVar1 != 0) {
    uVar3 = 0;
    pfVar4 = (float *)(*(long *)(param_2 + 2) + 0x24);
    do {
      uVar3 = uVar3 + 1;
      *pfVar4 = *pfVar4 + param_1;
      pfVar4 = pfVar4 + 10;
    } while (uVar3 < uVar1);
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        lVar7 = *(long *)(param_2 + 2);
        puVar6 = (undefined8 *)(lVar7 + uVar3 * 0x28);
        uVar2 = FUN_00eef690(*puVar6);
        if ((uVar2 & 1) != 0) {
          for (plVar5 = *(long **)(lVar7 + uVar3 * 0x28 + 8); plVar5 != (long *)0x0;
              plVar5 = (long *)plVar5[2]) {
            (**(code **)(*plVar5 + 0x10))(plVar5,*puVar6);
          }
          lVar7 = lVar7 + uVar3 * 0x28;
          fVar8 = fmodf(*(float *)(lVar7 + 0x24),(float)param_2[4]);
          *(float *)(lVar7 + 0x24) = fVar8;
        }
        FUN_00eef44c(*puVar6);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_2);
    }
  }
  return;
}




void FUN_00eefcc4(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        lVar1 = lVar1 + -0x28;
        puVar2 = puVar2 + 5;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00eefd2c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar3 = (ulong)*param_1 * 0x28;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x28;
        puVar4[4] = puVar2[4];
        uVar5 = puVar2[2];
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 5;
        puVar2 = puVar2 + 5;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x28;
        puVar2 = puVar2 + 1;
        do {
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 2) = 0;
          lVar3 = lVar3 + -0x28;
          puVar2 = puVar2 + 5;
        } while (lVar3 != 0);
        puVar2 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00eefdfc(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar5 = *param_1;
  iVar3 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar5 != iVar3 * -0x33333333) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar5 * 0x28);
    lVar1 = (long)puVar4 - (long)param_3;
    puVar6 = param_2;
    if (lVar1 != 0) {
      do {
        puVar6[4] = param_3[4];
        uVar7 = param_3[2];
        puVar6[3] = param_3[3];
        puVar6[2] = uVar7;
        puVar2 = param_3 + 5;
        uVar7 = *param_3;
        puVar6[1] = param_3[1];
        *puVar6 = uVar7;
        param_3 = puVar2;
        puVar6 = puVar6 + 5;
      } while (puVar4 != puVar2);
      uVar5 = *param_1;
      puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar5 * 0x28);
    }
    param_2 = param_2 + ((lVar1 >> 3) * -0x3333333333333333 & 0xffffffffU) * 5;
    if (param_2 != puVar4) {
      do {
        param_2[1] = 0;
        param_2[2] = 0;
        *(undefined4 *)(param_2 + 3) = 0;
        param_2 = param_2 + 5;
      } while (puVar4 != param_2);
      uVar5 = *param_1;
    }
    *param_1 = uVar5 + iVar3 * 0x33333333;
    return;
  }
  FUN_00eefcc4(param_1,1);
  return;
}




void FUN_00eefeb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028246b0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_00eefecc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028246b0;
  if ((DAT_03210ca0 != 0) && (*(int *)(param_1 + 1) != 0)) {
    FUN_00eefa30();
    return;
  }
  return;
}




undefined8 FUN_00eeff00(long param_1)

{
  ulong uVar1;
  
  if ((DAT_03210ca0 != 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar1 = FUN_00eefa30(DAT_03210ca0);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}




void FUN_00eeff44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028246b0;
  if ((DAT_03210ca0 != 0) && (*(int *)(param_1 + 1) != 0)) {
    FUN_00eefa30(DAT_03210ca0,*(int *)(param_1 + 1),param_1);
  }
  operator_delete(param_1);
  return;
}




void FUN_00eeff94(void)

{
  return;
}




undefined8 FUN_00eeff98(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if ((DAT_03210ca0 != 0) &&
     ((*(int *)(param_1 + 8) == 0 ||
      (FUN_00eefa30(DAT_03210ca0,*(int *)(param_1 + 8),param_1), DAT_03210ca0 != 0)))) {
    uVar1 = FUN_00e6a474(param_2);
    uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
    uVar2 = FUN_00eef994(DAT_03210ca0,uVar1,param_1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

