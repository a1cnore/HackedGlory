// functions/00f02 — 32 functions
#include "libGameKindred.h"




void thunk_FUN_00f02010(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = FUN_00965ecc();
  (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20),
                      (float)*param_2 * (float)*(undefined8 *)(lVar1 + 0x10));
  *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20),
                      (float)*param_3 * (float)*(undefined8 *)(lVar1 + 0x10));
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20),
                      (float)*param_2 + (float)*(undefined8 *)(lVar1 + 8));
  *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20),
                      (float)*param_3 + (float)*(undefined8 *)(lVar1 + 8));
  *param_2 = CONCAT44((int)(float)((ulong)*param_2 >> 0x20),(int)(float)*param_2);
  *param_3 = CONCAT44((int)(float)((ulong)*param_3 >> 0x20),(int)(float)*param_3);
  return;
}




bool thunk_FUN_00f023dc(long param_1)

{
  return *(long *)(param_1 + 0x38) != 0;
}




void FUN_00f02010(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = FUN_00965ecc();
  (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20),
                      (float)*param_2 * (float)*(undefined8 *)(lVar1 + 0x10));
  *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20),
                      (float)*param_3 * (float)*(undefined8 *)(lVar1 + 0x10));
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20),
                      (float)*param_2 + (float)*(undefined8 *)(lVar1 + 8));
  *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20),
                      (float)*param_3 + (float)*(undefined8 *)(lVar1 + 8));
  *param_2 = CONCAT44((int)(float)((ulong)*param_2 >> 0x20),(int)(float)*param_2);
  *param_3 = CONCAT44((int)(float)((ulong)*param_3 >> 0x20),(int)(float)*param_3);
  return;
}




void FUN_00f020b4(undefined1 param_1 [16],float param_2,long *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  fVar2 = *(float *)(param_3 + 10);
  fVar3 = *(float *)((long)param_3 + 0x54);
  *param_4 = -(fVar2 * fVar1);
  param_4[1] = -(param_2 * fVar3);
  *param_5 = fVar1 - fVar2 * fVar1;
  param_5[1] = param_2 - param_2 * fVar3;
  return;
}




void FUN_00f02110(long *param_1)

{
  long lVar1;
  undefined1 local_38 [8];
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x68))(param_1,auStack_30,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00f02170(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = FUN_00f01d54();
  lVar2 = FUN_00965ecc(param_1);
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20),
                      (float)*param_2 * (float)*(undefined8 *)(lVar2 + 0x10));
  *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20),
                      (float)*param_3 * (float)*(undefined8 *)(lVar2 + 0x10));
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20),
                      (float)*param_2 + (float)*(undefined8 *)(lVar2 + 8));
  *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20),
                      (float)*param_3 + (float)*(undefined8 *)(lVar2 + 8));
  *param_2 = CONCAT44((int)(float)((ulong)*param_2 >> 0x20),(int)(float)*param_2);
  *param_3 = CONCAT44((int)(float)((ulong)*param_3 >> 0x20),(int)(float)*param_3);
  return uVar1 & 1;
}




void FUN_00f02218(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x68))();
  if ((*(float *)(param_1 + 0xb) != 0.0) || (*(float *)((long)param_1 + 0x5c) != 0.0)) {
    lVar1 = FUN_00965ecc(param_1);
    *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) -
                        (float)((ulong)param_1[0xb] >> 0x20) *
                        (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20),
                        (float)*param_2 - (float)param_1[0xb] * (float)*(undefined8 *)(lVar1 + 0x10)
                       );
    *param_3 = CONCAT44((float)((ulong)param_1[0xb] >> 0x20) *
                        (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20) +
                        (float)((ulong)*param_3 >> 0x20),
                        (float)param_1[0xb] * (float)*(undefined8 *)(lVar1 + 0x10) + (float)*param_3
                       );
  }
  return;
}




void FUN_00f022a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    return;
  }
  do {
    lVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (lVar1 == 0) break;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
  } while (plVar2 != (long *)0x0);
  FUN_00efc930(plVar2,param_2);
  return;
}




void FUN_00f02308(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x30;
  plVar6 = (long *)register0x00000008;
  while (param_2 != 0) {
    FUN_00f022a0(param_1);
    lVar3 = (long)iVar1;
    if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
      plVar4 = (long *)(&stack0xffffffffffffffa8 + lVar3);
    }
    else {
      plVar4 = plVar6;
      plVar6 = plVar6 + 1;
    }
    param_2 = *plVar4;
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00f023dc(long param_1)

{
  return *(long *)(param_1 + 0x38) != 0;
}




void FUN_00f023ec(undefined8 param_1,long *param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00f02404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x80))(param_2,param_1,param_3 & 1);
  return;
}




void FUN_00f02408(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1[4] = param_2;
  lVar3 = *(long *)(param_2 + 0x28);
  if (lVar3 == 0) {
    *(long **)(param_2 + 0x28) = param_1;
  }
  else if ((param_3 & 1) == 0) {
    *(long **)(param_2 + 0x28) = param_1;
    param_1[6] = lVar3;
  }
  else {
    do {
      lVar4 = lVar3;
      lVar3 = *(long *)(lVar4 + 0x30);
    } while (lVar3 != 0);
    *(long **)(lVar4 + 0x30) = param_1;
  }
  FUN_00f04824(param_1);
  FUN_00f00238(&uStack_2c,&local_30);
  FUN_00f024d0(uStack_2c,local_30,param_1);
  (**(code **)(*param_1 + 0xa8))(param_1);
  plVar2 = (long *)param_1[4];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2,param_1);
  }
  FUN_0091ada4(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f024d0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  (**(code **)(*param_3 + 200))();
  for (plVar1 = (long *)param_3[5]; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[6]) {
    (**(code **)(*plVar1 + 200))(param_1,param_2,plVar1);
    FUN_00f024d0(param_1,param_2,plVar1);
  }
  return;
}




bool FUN_00f02540(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}




void FUN_00f02550(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = param_1[4];
  if (lVar1 == 0) {
    return;
  }
  plVar2 = *(long **)(lVar1 + 0x28);
  if (plVar2 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar3 = (long *)0x0;
    do {
      plVar4 = plVar2;
      if (plVar2 == param_1) {
        if (*(long **)(lVar1 + 0x28) == param_1) {
          *(long *)(lVar1 + 0x28) = param_1[6];
        }
        if (plVar3 == (long *)0x0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar3[6] = param_1[6];
          plVar4 = plVar3;
        }
      }
      plVar2 = (long *)plVar2[6];
      plVar3 = plVar4;
    } while (plVar2 != (long *)0x0);
    if (*(long *)(lVar1 + 0x28) != 0) goto joined_r0x00f025d8;
  }
  *(long **)(lVar1 + 0x28) = param_1;
joined_r0x00f025d8:
  if (plVar4 != (long *)0x0) {
    plVar4[6] = (long)param_1;
  }
  param_1[6] = 0;
                    /* WARNING: Could not recover jumptable at 0x00f025c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




int FUN_00f025e0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    iVar1 = 0;
    do {
      lVar2 = *(long *)(lVar2 + 0x30);
      iVar1 = iVar1 + 1;
    } while (lVar2 != 0);
    return iVar1;
  }
  return 0;
}




void FUN_00f02604(undefined8 param_1,long *param_2)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = *(uint *)((long)param_2 + 0x84);
  if ((uVar6 >> 3 & 1) != 0) {
    plVar2 = (long *)param_2[7];
    if (plVar2 != (long *)0x0) {
      do {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
        (**(code **)(*(long *)param_2[7] + 0x18))(param_1,(long *)param_2[7],param_2);
        if (((long *)param_2[7] != (long *)0x0) &&
           (uVar4 = (**(code **)(*(long *)param_2[7] + 0x10))(), (uVar4 & 1) != 0)) {
          plVar2 = (long *)param_2[7];
          lVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
          param_2[7] = lVar5;
          FUN_00efc90c(plVar2);
        }
      } while (((uVar3 & 1) != 0) && (plVar2 = (long *)param_2[7], plVar2 != (long *)0x0));
      uVar6 = *(uint *)((long)param_2 + 0x84);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      (**(code **)(*param_2 + 0x90))(param_2);
      *(uint *)((long)param_2 + 0x84) = *(uint *)((long)param_2 + 0x84) & 0xfffffffd;
    }
    (**(code **)(*param_2 + 0x88))(param_1,param_2);
    lVar5 = param_2[5];
    while (lVar5 != 0) {
      pbVar1 = (byte *)(lVar5 + 0x84);
      lVar5 = *(long *)(lVar5 + 0x30);
      if ((*pbVar1 >> 3 & 1) != 0) {
        FUN_00f02604(param_1);
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00f02710(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar7 = 0;
  if ((~*(uint *)(param_3 + 0x84) & 0xc) == 0) {
    plVar8 = *(long **)(param_3 + 0x28);
    if (plVar8 != (long *)0x0) {
      lVar7 = 0;
      do {
        if (((~*(uint *)((long)plVar8 + 0x84) & 0xc) == 0) &&
           (lVar6 = (**(code **)(*plVar8 + 0xd0))(param_1,param_2,plVar8,1), lVar6 != 0)) {
          lVar7 = lVar6;
        }
        plVar8 = (long *)plVar8[6];
      } while (plVar8 != (long *)0x0);
      if (lVar7 != 0) goto LAB_00f028e0;
    }
    lVar7 = 0;
    if ((*(byte *)(param_3 + 0x84) >> 4 & 1) != 0) {
      FUN_00f02218(param_3,&local_60,&local_68);
      if ((param_4 & 1) != 0) {
        FUN_00f0025c(&fStack_6c,&local_70);
        FUN_00f0036c(&fStack_74,&local_78);
        fStack_74 = fStack_74 * fStack_6c;
        local_78 = local_78 * local_70;
        fVar11 = local_60;
        if (fStack_74 <= local_60) {
          fVar11 = fStack_74;
        }
        local_60 = DAT_03218ef8;
        if (DAT_03218ef8 <= fVar11) {
          local_60 = fVar11;
        }
        fVar11 = local_5c;
        if (local_78 <= local_5c) {
          fVar11 = local_78;
        }
        local_5c = _DAT_03218efc;
        if (_DAT_03218efc <= fVar11) {
          local_5c = fVar11;
        }
        fVar11 = local_68;
        if (fStack_74 <= local_68) {
          fVar11 = fStack_74;
        }
        local_68 = DAT_03218ef8;
        if (DAT_03218ef8 <= fVar11) {
          local_68 = fVar11;
        }
        fVar11 = local_64;
        if (local_78 <= local_64) {
          fVar11 = local_78;
        }
        local_64 = _DAT_03218efc;
        if (_DAT_03218efc <= fVar11) {
          local_64 = fVar11;
        }
      }
      lVar7 = FUN_00965ecc(param_3);
      fVar9 = (float)(int)*(short *)(lVar7 + 0x1c);
      fVar10 = (float)(int)*(short *)(lVar7 + 0x1e);
      fVar12 = (float)(int)*(short *)(lVar7 + 0x20);
      fVar11 = local_60;
      if (fVar12 <= local_60) {
        fVar11 = fVar12;
      }
      fVar13 = (float)(int)*(short *)(lVar7 + 0x22);
      local_60 = fVar9;
      if (fVar9 <= fVar11) {
        local_60 = fVar11;
      }
      fVar11 = local_5c;
      if (fVar13 <= local_5c) {
        fVar11 = fVar13;
      }
      local_5c = fVar10;
      if (fVar10 <= fVar11) {
        local_5c = fVar11;
      }
      fVar11 = local_68;
      if (fVar12 <= local_68) {
        fVar11 = fVar12;
      }
      local_68 = fVar9;
      if (fVar9 <= fVar11) {
        local_68 = fVar11;
      }
      fVar11 = local_64;
      if (fVar13 <= local_64) {
        fVar11 = fVar13;
      }
      local_64 = fVar10;
      if (fVar10 <= fVar11) {
        local_64 = fVar11;
      }
      fVar11 = (float)param_1;
      bVar2 = true;
      bVar4 = false;
      if (fVar11 <= local_68) {
        bVar2 = false;
        bVar4 = true;
        if (!NAN(fVar11) && !NAN(local_60)) {
          bVar2 = fVar11 < local_60;
          bVar4 = false;
        }
      }
      bVar3 = true;
      bVar5 = false;
      fVar11 = (float)param_2;
      if (bVar2 == bVar4) {
        bVar3 = false;
        bVar5 = true;
        if (!NAN(fVar11) && !NAN(local_5c)) {
          bVar3 = fVar11 < local_5c;
          bVar5 = false;
        }
      }
      bVar2 = false;
      bVar4 = true;
      if (bVar3 == bVar5) {
        bVar2 = false;
        bVar4 = true;
        if (!NAN(fVar11) && !NAN(local_64)) {
          bVar2 = fVar11 == local_64;
          bVar4 = local_64 <= fVar11;
        }
      }
      lVar7 = 0;
      if (!bVar4 || bVar2) {
        lVar7 = param_3;
      }
    }
  }
LAB_00f028e0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f02914(long *param_1,long param_2)

{
  undefined2 uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if ((*(byte *)((long)param_1 + 0x84) & 1) != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    fVar4 = (float)param_1[9] * (float)uVar3;
    fVar2 = (float)((ulong)uVar3 >> 0x20);
    fVar5 = (float)((ulong)param_1[9] >> 0x20) * fVar2;
    param_1[0xd] = CONCAT44(fVar2 * (float)((ulong)param_1[8] >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                            (float)uVar3 * (float)param_1[8] + (float)*(undefined8 *)(param_2 + 8));
    param_1[0xe] = CONCAT44(fVar5,fVar4);
    fVar2 = (float)(**(code **)(*param_1 + 0x48))(param_1);
    param_1[0xc] = CONCAT44((float)((ulong)param_1[0xd] >> 0x20) -
                            fVar5 * (float)((ulong)param_1[10] >> 0x20) * (float)uVar3,
                            (float)param_1[0xd] - fVar4 * (float)param_1[10] * fVar2);
    fVar2 = (float)NEON_fminnm((float)(*(uint *)((long)param_1 + 0x84) >> 7 & 0xff) / 255.0,
                               0x3f800000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_1 + 0xf) = *(float *)(param_2 + 0x18) * fVar2;
    *(undefined2 *)((long)param_1 + 0x7c) = *(undefined2 *)(param_2 + 0x1c);
    *(undefined2 *)((long)param_1 + 0x7e) = *(undefined2 *)(param_2 + 0x1e);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x20);
    uVar1 = *(undefined2 *)(param_2 + 0x22);
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffe;
    *(undefined2 *)((long)param_1 + 0x82) = uVar1;
  }
  return;
}




void FUN_00f029e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x28); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[6]) {
    if ((~*(uint *)((long)plVar1 + 0x84) & 0xc) == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}




void FUN_00f02a5c(void)

{
  return;
}




void FUN_00f02a60(long param_1)

{
  if ((*(uint *)(param_1 + 0x84) >> 1 & 1) == 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 2;
  }
  return;
}




void FUN_00f02a74(void)

{
  FUN_0199d9a4(2);
  return;
}




void FUN_00f02a8c(void)

{
  return;
}




void FUN_00f02a90(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf02a94);
  (*pcVar1)();
}




void FUN_00f02a94(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 4;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 5;
  } while (lVar2 != 0x400);
  param_1[0x1404] = 0x3ff0000;
  *(undefined4 *)(param_1 + 0x1406) = 0;
  FUN_00f02ad0(param_1,0x40);
  return;
}




void FUN_00f02ad0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00f02b54(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)param_1 = 0;
  }
  lVar3 = 1;
  puVar2 = param_1 + 4;
  do {
    *(short *)puVar2 = (short)lVar3;
    lVar3 = lVar3 + 1;
    puVar2 = puVar2 + 5;
  } while (lVar3 != 0x400);
  param_1[0x1404] = 0x3ff0000;
  *(undefined4 *)(param_1 + 0x1406) = 0;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    pvVar1 = (void *)param_1[1];
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00f02bcc(float param_1,uint *param_2)

{
  uint *puVar1;
  float *pfVar2;
  ushort *puVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  double *pdVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  double dVar15;
  
  pfVar2 = (float *)(param_2 + 0x280c);
  fVar14 = *pfVar2;
  *pfVar2 = fVar14 + param_1;
  uVar4 = *param_2;
  if (uVar4 != 0) {
    pdVar8 = *(double **)(param_2 + 2);
    uVar10 = 0;
    do {
      if ((double)(fVar14 + param_1) < *pdVar8) {
        if (uVar10 == 0) {
          return;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      pdVar8 = pdVar8 + 2;
    } while (uVar10 < uVar4);
    iVar11 = uVar4 - uVar10;
    FUN_00f02e08(param_2 + 4,uVar10,0,0);
    memmove(*(void **)(param_2 + 6),*(void **)(param_2 + 2),(ulong)(uVar10 << 4));
    if (iVar11 == 0) {
      if (*(long *)(param_2 + 2) != 0) {
        *param_2 = 0;
      }
    }
    else {
      memmove(*(void **)(param_2 + 2),(void *)((long)*(void **)(param_2 + 2) + (ulong)uVar10 * 0x10)
              ,(ulong)(uint)(iVar11 * 0x10));
      FUN_00f02e08(param_2,iVar11,0,0);
    }
    uVar13 = (ulong)uVar10;
    lVar12 = 8;
    uVar7 = uVar13;
    do {
      uVar9 = (ulong)*(ushort *)(*(long *)(param_2 + 6) + lVar12);
      if (*(code **)(param_2 + uVar9 * 10 + 10) != (code *)0x0) {
        dVar15 = (double)param_1;
        if (0.0 < *pfVar2 - (float)param_2[uVar9 * 10 + 0x10]) {
          dVar15 = (double)*pfVar2 - *(double *)(param_2 + uVar9 * 10 + 0xe);
        }
        (**(code **)(param_2 + uVar9 * 10 + 10))
                  ((float)dVar15,*(undefined8 *)(param_2 + uVar9 * 10 + 8));
      }
      uVar7 = uVar7 - 1;
      lVar12 = lVar12 + 0x10;
    } while (uVar7 != 0);
    puVar1 = param_2 + 8;
    lVar12 = 8;
    puVar3 = (ushort *)((long)param_2 + 0xa022);
    do {
      uVar7 = (ulong)*(uint *)(*(long *)(param_2 + 6) + lVar12) & 0xffff;
      if (((int)*(uint *)(*(long *)(param_2 + 6) + lVar12) < 0) && (DAT_03210f48 != 0)) {
        FUN_00f02ec0(puVar1[uVar7 * 10 + 8],DAT_03210f48,puVar1 + uVar7 * 10,
                     *(undefined8 *)(puVar1 + uVar7 * 10 + 4),1);
      }
      iVar11 = (int)(puVar1 + uVar7 * 10);
      if ((short)param_2[0x2808] == -1) {
        uVar5 = (short)((uint)(iVar11 - (int)puVar1) >> 3) * -0x3333;
        *puVar3 = uVar5;
        *(ushort *)(param_2 + 0x2808) = uVar5;
      }
      else {
        uVar5 = *puVar3;
        uVar6 = (short)((uint)(iVar11 - (int)puVar1) >> 3) * -0x3333;
        *puVar3 = uVar6;
        *(ushort *)(puVar1 + (ulong)uVar5 * 10) = uVar6;
      }
      uVar13 = uVar13 - 1;
      lVar12 = lVar12 + 0x10;
      param_2[0x2809] = param_2[0x2809] - 1;
    } while (uVar13 != 0);
    if (*(long *)(param_2 + 6) != 0) {
      param_2[4] = 0;
    }
  }
  return;
}




void FUN_00f02e08(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00f02ad0(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 << 4;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar4 = lVar4 + -1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar3);
        lVar3 = lVar3 + 0x10;
        *puVar1 = param_3;
        puVar1[1] = param_4;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00f02e98(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (DAT_03210f48 != 0) {
    FUN_00f02ec0(DAT_03210f48,param_1,param_2,param_3 & 1);
    return;
  }
  return;
}




void FUN_00f02ec0(float param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,int param_5)

{
  uint *puVar1;
  double *pdVar2;
  uint uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  float fVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined2 uVar10;
  long lVar11;
  uint *puVar12;
  double dVar13;
  float fVar14;
  undefined8 uVar15;
  
  uVar4 = (ushort)param_2[0x2808];
  uVar7 = (ulong)uVar4;
  if (uVar7 != 0xffff) {
    puVar1 = param_2 + 8;
    puVar12 = puVar1 + uVar7 * 10;
    if (uVar4 == *(ushort *)((long)param_2 + 0xa022)) {
      uVar10 = 0xffff;
    }
    else {
      uVar10 = (undefined2)*puVar12;
    }
    *(undefined2 *)(param_2 + 0x2808) = uVar10;
    puVar12[0] = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    param_2[0x2809] = param_2[0x2809] + 1;
    if (puVar12 != (uint *)0x0) {
      fVar14 = (float)param_2[0x280c];
      fVar6 = 0.0;
      if (0.0 < param_1) {
        fVar6 = param_1;
      }
      puVar1[uVar7 * 10 + 8] = (uint)fVar6;
      *(double *)(puVar1 + uVar7 * 10 + 6) = (double)fVar14;
      uVar15 = *param_3;
      *(undefined8 *)(puVar12 + 2) = param_3[1];
      *(undefined8 *)puVar12 = uVar15;
      *(undefined8 *)(puVar1 + uVar7 * 10 + 4) = param_4;
      uVar3 = *param_2;
      uVar7 = (ulong)uVar3;
      FUN_00f02e08(param_2,uVar3 + 1,0,0);
      dVar13 = (double)(fVar6 + fVar14);
      if (uVar3 != 0) {
        lVar8 = (ulong)(uVar3 - 1) << 4;
        lVar9 = uVar7 << 4;
        do {
          lVar11 = *(long *)(param_2 + 2);
          if (*(double *)(lVar11 + lVar8) <= dVar13) goto LAB_00f02fcc;
          puVar5 = (undefined8 *)(lVar11 + lVar8);
          uVar15 = *puVar5;
          uVar7 = uVar7 - 1;
          lVar8 = lVar8 + -0x10;
          ((undefined8 *)(lVar11 + lVar9))[1] = puVar5[1];
          *(undefined8 *)(lVar11 + lVar9) = uVar15;
          lVar9 = lVar9 + -0x10;
        } while ((int)uVar7 != 0);
      }
      uVar7 = 0;
LAB_00f02fcc:
      lVar8 = (uVar7 & 0xffffffff) * 0x10;
      pdVar2 = (double *)(*(long *)(param_2 + 2) + lVar8);
      *pdVar2 = dVar13;
      *(uint *)(pdVar2 + 1) =
           *(uint *)(pdVar2 + 1) & 0x80000000 |
           ((uint)((int)puVar12 - (int)puVar1) >> 3) * -0x33333333 & 0xffff;
      lVar8 = *(long *)(param_2 + 2) + lVar8;
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0x7fffffff | param_5 << 0x1f;
    }
  }
  return;
}

