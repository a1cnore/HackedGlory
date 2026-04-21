// functions/00d26 — 35 functions
#include "libGameKindred.h"




void FUN_00d26008(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  puVar2 = &DAT_03150650;
  do {
    FUN_00d26064(puVar2,uVar1 & 0xffffffff,param_1);
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 0xbf8;
  } while (uVar1 != 0x10);
  DAT_0315c5d0 = 1;
  return;
}




void FUN_00d26064(long param_1,undefined1 param_2,long param_3)

{
  float *pfVar1;
  float fVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *(undefined1 *)(param_1 + 0xbf4) = param_2;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  plVar3 = *(long **)(param_3 + 400);
  lVar5 = *plVar3;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      pfVar7 = (float *)**(long **)(lVar5 + 8);
      fVar8 = (float)DAT_03218f30;
      fVar9 = DAT_03218f38;
      if (pfVar7 == (float *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          fVar10 = *pfVar7;
          pfVar1 = pfVar7 + 1;
          pfVar7 = (float *)(*(long **)(lVar5 + 8))[uVar6 + 1];
          uVar6 = uVar6 + 1;
          fVar8 = fVar8 + fVar10;
          fVar9 = fVar9 + *pfVar1;
        } while (pfVar7 != (float *)0x0);
      }
      fVar11 = (float)(uVar6 & 0xffffffff);
      lVar5 = param_1 + (ulong)uVar4 * 0xc;
      fVar10 = DAT_03218f30._4_4_ / fVar11;
      *(uint *)(param_1 + 0x1d4) = uVar4 + 1;
      *(float *)(lVar5 + 0x54) = fVar8 / fVar11;
      *(float *)(lVar5 + 0x58) = fVar10;
      *(float *)(lVar5 + 0x5c) = fVar9 / fVar11;
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    } while ((lVar5 != 0) && (uVar4 = *(uint *)(param_1 + 0x1d4), uVar4 < 0x20));
  }
  uVar6 = 2;
  fVar9 = 3.4028235e+38;
  fVar8 = -3.4028235e+38;
  fVar10 = fVar8;
  fVar11 = fVar9;
  do {
    lVar5 = *(long *)(*(long *)(param_3 + 0x188) + uVar6 * 8);
    if (lVar5 == 0) break;
    plVar3 = *(long **)(lVar5 + 8);
    lVar5 = *plVar3;
    fVar13 = fVar8;
    while (fVar8 = fVar13, lVar5 != 0) {
      plVar3 = plVar3 + 1;
      fVar12 = *(float *)(lVar5 + 4);
      fVar13 = *(float *)(lVar5 + 0xc);
      lVar5 = *plVar3;
      fVar2 = fVar12;
      if (fVar11 <= fVar12) {
        fVar2 = fVar11;
      }
      if (fVar12 <= fVar10) {
        fVar12 = fVar10;
      }
      fVar10 = fVar13;
      if (fVar9 <= fVar13) {
        fVar10 = fVar9;
      }
      fVar9 = fVar10;
      fVar10 = fVar12;
      fVar11 = fVar2;
      if (fVar13 <= fVar8) {
        fVar13 = fVar8;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  *(float *)(param_1 + 0xbdc) = fVar11;
  *(float *)(param_1 + 0xbe4) = fVar9;
  *(float *)(param_1 + 0xbe8) = fVar10;
  *(undefined4 *)(param_1 + 0xbe0) = 0xc1200000;
  *(undefined4 *)(param_1 + 0xbec) = 0x41200000;
  *(float *)(param_1 + 0xbf0) = fVar8;
  return;
}




void FUN_00d26194(void)

{
  DAT_0315c5d0 = 0;
  return;
}




void FUN_00d261a0(void)

{
  undefined *puVar1;
  long lVar2;
  
  if (DAT_0315c5d0 != '\0') {
    puVar1 = &DAT_03150650;
    lVar2 = 0x10;
    do {
      FUN_00d261e4(puVar1);
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 0xbf8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_00d261e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_1e8 [96];
  undefined8 local_188 [40];
  long local_48;
  
  uVar3 = DAT_03214ce8;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5;
    lVar5 = lVar5 + 0x40;
    *(undefined8 *)(lVar1 + 0x1d8) = 0;
    *(undefined4 *)(lVar1 + 0x1e0) = uVar3;
  } while (lVar5 != 0xa00);
  *(undefined4 *)(param_1 + 0xbd8) = 0;
  FUN_00d4d9e8(auStack_1e8);
  FUN_00d4dabc(auStack_1e8,0x10);
  FUN_00d4daf4(auStack_1e8,1,0,0,0);
  FUN_00d4dad4(auStack_1e8,*(undefined1 *)(param_1 + 0xbf4));
  iVar4 = FUN_00d9e840(auStack_1e8,local_188,0x28,0);
  *(int *)(param_1 + 0xbd8) = iVar4;
  if (iVar4 != 0) {
    uVar6 = 0;
    lVar5 = param_1 + 0x1d8;
    do {
      FUN_00d2632c(param_1,local_188[uVar6],lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x40;
    } while (uVar6 < *(uint *)(param_1 + 0xbd8));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 FUN_00d262e8(void)

{
  return DAT_0315c5d0;
}




void FUN_00d262f4(long param_1)

{
  long lVar1;
  
  lVar1 = 0x1d8;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  do {
    FUN_00e0b5d0(param_1 + lVar1);
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0xbd8);
  return;
}




void FUN_00d2632c(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = *(long *)(param_2 + 0x40);
  fVar6 = *(float *)(lVar4 + 0x31c);
  fVar7 = *(float *)(lVar4 + 0x308);
  fVar8 = *(float *)(lVar4 + 0x318);
  *param_3 = param_2 + 0x28;
  if (fVar7 <= fVar6) {
    fVar6 = fVar7;
  }
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x30);
  fVar6 = fVar7 + fVar8 + fVar6;
  fVar7 = (*(float *)(lVar4 + 0x1bc) + 1.0) *
          (*(float *)(lVar4 + 0x54) + *(float *)(lVar4 + 0x108) * (*(float *)(lVar4 + 0x270) + 1.0))
  ;
  if (DAT_0315c6bc <= fVar7) {
    fVar7 = DAT_0315c6bc;
  }
  fVar8 = DAT_0315c5fc;
  if (DAT_0315c5fc <= fVar7) {
    fVar8 = fVar7;
  }
  *(float *)(param_3 + 5) = fVar6 * ((fVar8 + 100.0) / 100.0);
  fVar7 = (*(float *)(lVar4 + 0x1c0) + 1.0) *
          (*(float *)(lVar4 + 0x58) + *(float *)(lVar4 + 0x10c) * (*(float *)(lVar4 + 0x274) + 1.0))
  ;
  if (DAT_0315c6c0 <= fVar7) {
    fVar7 = DAT_0315c6c0;
  }
  fVar8 = DAT_0315c600;
  if (DAT_0315c600 <= fVar7) {
    fVar8 = fVar7;
  }
  *(float *)((long)param_3 + 0x2c) = fVar6 * ((fVar8 + 100.0) / 100.0);
  fVar6 = (*(float *)(lVar4 + 0x1b0) + 1.0) *
          (*(float *)(lVar4 + 0x48) + *(float *)(lVar4 + 0xfc) * (*(float *)(lVar4 + 0x264) + 1.0));
  fVar7 = (*(float *)(lVar4 + 0x1dc) + 1.0) *
          (*(float *)(lVar4 + 0x74) + *(float *)(lVar4 + 0x128) * (*(float *)(lVar4 + 0x290) + 1.0))
  ;
  if (DAT_0315c6b0 <= fVar6) {
    fVar6 = DAT_0315c6b0;
  }
  fVar8 = DAT_0315c5f0;
  if (DAT_0315c5f0 <= fVar6) {
    fVar8 = fVar6;
  }
  if (DAT_0315c6dc <= fVar7) {
    fVar7 = DAT_0315c6dc;
  }
  fVar6 = DAT_0315c61c;
  if (DAT_0315c61c <= fVar7) {
    fVar6 = fVar7;
  }
  *(float *)(param_3 + 6) = fVar8 / fVar6;
  fVar6 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
          (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0));
  if (DAT_0315c6e0 <= fVar6) {
    fVar6 = DAT_0315c6e0;
  }
  fVar7 = DAT_0315c620;
  if (DAT_0315c620 <= fVar6) {
    fVar7 = fVar6;
  }
  *(float *)((long)param_3 + 0x34) = fVar7;
  uVar5 = FUN_00d9ee8c(param_2);
  *(undefined4 *)(param_3 + 7) = uVar5;
  bVar2 = FUN_00d7d0a0(*(undefined8 *)(param_2 + 0x80),*(undefined1 *)(param_1 + 0xbf4));
  *(byte *)((long)param_3 + 0x3c) = *(byte *)((long)param_3 + 0x3c) & 0xfc | bVar2 & 1;
  plVar3 = *(long **)(param_2 + 0x2b0);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_2 + 0x2b8) != (int)plVar3[1]) {
LAB_00d265e8:
      *(undefined8 *)(param_2 + 0x2b0) = 0;
      bVar2 = 0;
      *(undefined4 *)(param_2 + 0x2b8) = DAT_03214ce8;
      goto LAB_00d26600;
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))();
    if (lVar4 != 0) {
      plVar3 = *(long **)(param_2 + 0x2b0);
      lVar4 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_2 + 0x2b8) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          *(undefined8 *)(param_2 + 0x2b0) = 0;
          lVar4 = 0;
          *(undefined4 *)(param_2 + 0x2b8) = DAT_03214ce8;
        }
      }
      uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
      if ((uVar1 != 0x1f) && (bVar2 = 0, *(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2))
      goto LAB_00d26600;
      plVar3 = *(long **)(param_2 + 0x2b0);
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_2 + 0x2b8) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          bVar2 = (lVar4 != 0) << 2;
          goto LAB_00d26600;
        }
        goto LAB_00d265e8;
      }
    }
  }
  bVar2 = 0;
LAB_00d26600:
  *(byte *)((long)param_3 + 0x3c) = *(byte *)((long)param_3 + 0x3c) & 0xf3 | bVar2;
  FUN_00d55794(param_2,param_3 + 2,0);
  FUN_00d557c4(param_2,(long)param_3 + 0x1c,&DAT_03218f68);
  return;
}




undefined4 FUN_00d26640(long param_1,float *param_2,float *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = *(uint *)(param_1 + 0x1d4);
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    fVar8 = *param_2;
    fVar9 = param_2[1];
    fVar10 = param_2[2];
    fVar5 = fVar8 - *param_3;
    fVar6 = fVar9 - param_3[1];
    fVar7 = 3.4028235e+38;
    fVar11 = fVar10 - param_3[2];
    uVar1 = 0;
    pfVar3 = (float *)(param_1 + 0x54);
    uVar4 = 1;
    while( true ) {
      fVar8 = fVar8 - *pfVar3;
      fVar9 = fVar9 - pfVar3[1];
      fVar10 = fVar10 - pfVar3[2];
      if ((fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10 <=
           fVar5 * fVar5 + fVar6 * fVar6 + fVar11 * fVar11) &&
         (fVar8 = *param_3 - *pfVar3, fVar9 = param_3[1] - pfVar3[1],
         fVar10 = param_3[2] - pfVar3[2], fVar8 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10,
         fVar8 < fVar7)) {
        *(float *)(param_4 + 1) = pfVar3[2];
        *param_4 = *(undefined8 *)pfVar3;
        uVar2 = *(uint *)(param_1 + 0x1d4);
        uVar1 = 1;
        fVar7 = fVar8;
      }
      if (uVar2 <= uVar4) break;
      fVar8 = *param_2;
      fVar9 = param_2[1];
      fVar10 = param_2[2];
      pfVar3 = pfVar3 + 3;
      uVar4 = uVar4 + 1;
    }
  }
  return uVar1;
}




void FUN_00d26738(float param_1,float *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68 [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar6 = (float)FUN_009bc24c();
  if (*(char *)(param_2 + 0x14) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (fVar6 <= param_2[4] + param_1) {
      if (5.0 <= fVar6 - param_2[4]) {
        uVar4 = 0;
        pfVar5 = param_2 + 7;
        do {
          if ((((*(char *)pfVar5 != '\0') && (lVar3 = FUN_00d9e390(pfVar5[-2]), lVar3 != 0)) &&
              (FUN_00d55794(lVar3,local_68,0),
              fVar7 = (float)*(undefined8 *)(param_2 + 1) - (float)local_68._4_8_,
              fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) - SUB84(local_68._4_8_,4)
              , 9.0 <= (*param_2 - local_68[0]) * (*param_2 - local_68[0]) + fVar7 * fVar7 +
                       fVar8 * fVar8)) && (fVar6 < pfVar5[-1] + param_1)) goto LAB_00d2679c;
          uVar4 = uVar4 + 1;
          pfVar5 = pfVar5 + 3;
        } while (uVar4 < 5);
        uVar2 = 0;
        *(undefined1 *)(param_2 + 0x14) = 0;
      }
      else {
LAB_00d2679c:
        uVar2 = 1;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00d26864(float *param_1,int param_2,int param_3,float *param_4,int param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = param_4[2];
  local_58 = *(undefined8 *)param_4;
  if ((param_3 != -1) && (lVar2 = FUN_00d9e390(param_3), lVar2 != 0)) {
    FUN_00d55794(lVar2,&local_58,0);
  }
  if (param_5 == 5) {
    *(undefined1 *)(param_1 + 0x14) = 1;
    param_1[2] = local_50;
    *(undefined8 *)param_1 = local_58;
    fVar3 = (float)FUN_009bc24c();
    lVar2 = 0;
    param_1[3] = fVar3;
    param_1[4] = fVar3;
    do {
      *(undefined1 *)((long)param_1 + lVar2 + 0x1c) = 0;
      lVar2 = lVar2 + 0xc;
    } while (lVar2 != 0x3c);
    lVar2 = 0;
    do {
      if ((*(char *)((long)param_1 + lVar2 + 0x1c) == '\0') ||
         (*(int *)((long)param_1 + lVar2 + 0x14) == param_2)) {
        *(undefined1 *)((long)param_1 + lVar2 + 0x1c) = 1;
        *(int *)((long)param_1 + lVar2 + 0x14) = param_2;
        *(float *)((long)param_1 + lVar2 + 0x18) = fVar3;
      }
      lVar2 = lVar2 + 0xc;
    } while (lVar2 != 0x3c);
  }
  else if ((param_5 == 3) &&
          (fVar3 = (float)*(undefined8 *)(param_4 + 1) - (float)*(undefined8 *)(param_1 + 1),
          fVar4 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20),
          (*param_4 - *param_1) * (*param_4 - *param_1) + fVar3 * fVar3 + fVar4 * fVar4 < 9.0)) {
    fVar3 = (float)FUN_009bc24c();
    lVar2 = 0;
    param_1[4] = fVar3;
    do {
      if ((*(char *)((long)param_1 + lVar2 + 0x1c) == '\0') ||
         (*(int *)((long)param_1 + lVar2 + 0x14) == param_2)) {
        *(undefined1 *)((long)param_1 + lVar2 + 0x1c) = 1;
        *(int *)((long)param_1 + lVar2 + 0x14) = param_2;
        *(float *)((long)param_1 + lVar2 + 0x18) = fVar3;
      }
      lVar2 = lVar2 + 0xc;
    } while (lVar2 != 0x3c);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d269fc(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    lVar1 = param_1 + lVar3;
    if ((*(char *)(lVar1 + 0x1c) == '\0') || (*(int *)(lVar1 + 0x14) == param_2)) {
      *(undefined1 *)(lVar1 + 0x1c) = 1;
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(int *)(lVar1 + 0x14) = param_2;
      *(undefined4 *)(lVar1 + 0x18) = uVar2;
    }
    lVar3 = lVar3 + 0xc;
  } while (lVar3 != 0x3c);
  return;
}




long FUN_00d26a38(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0x40 + 0x1d8;
}




undefined4 FUN_00d26a48(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbd8);
}




bool FUN_00d26a50(long param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(float *)(param_1 + 0xbdc) <= *param_2) {
    bVar1 = false;
    if (*(float *)(param_1 + 0xbe0) <= param_2[1]) {
      bVar1 = false;
      if (((*(float *)(param_1 + 0xbe4) <= param_2[2]) &&
          (bVar1 = false, *param_2 <= *(float *)(param_1 + 0xbe8))) &&
         (bVar1 = false, param_2[1] <= *(float *)(param_1 + 0xbec))) {
        bVar1 = param_2[2] <= *(float *)(param_1 + 0xbf0);
      }
    }
  }
  return bVar1;
}




void FUN_00d26ac0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00d26ad0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  return;
}




void FUN_00d26ae4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  return;
}




void FUN_00d26af8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 2;
  *param_1 = 0xffffffff;
  do {
    *puVar1 = 0xffffffff;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
  } while (puVar1 != param_1 + 0x7a);
  return;
}




void FUN_00d26b1c(void)

{
  return;
}




undefined8 FUN_00d26b20(int *param_1)

{
  return *(undefined8 *)(param_1 + (long)*param_1 * 4 + 4);
}




int FUN_00d26b30(int *param_1)

{
  return param_1[(long)*param_1 * 4 + 2];
}




void FUN_00d26b40(int *param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + (long)*param_1 * 4 + 4) = param_2;
  return;
}




int * FUN_00d26b50(int *param_1)

{
  return param_1 + (long)*param_1 * 4 + 2;
}




void FUN_00d26b60(int *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = *param_1;
  lVar3 = (long)iVar1 + 1;
  iVar2 = (int)lVar3;
  *param_1 = iVar2;
  if (iVar1 < 0) {
    uVar4 = 0;
    lVar3 = (long)iVar2;
    param_1[(long)iVar2 * 4 + 2] = -1;
  }
  else {
    param_1[lVar3 * 4 + 2] = param_1[(long)iVar1 * 4 + 2];
    uVar4 = *(undefined8 *)(param_1 + (long)iVar1 * 4 + 2 + 2);
  }
  *(undefined8 *)(param_1 + lVar3 * 4 + 4) = uVar4;
  return;
}




void FUN_00d26bac(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}




int FUN_00d26bbc(int *param_1)

{
  return *param_1 + 1;
}




float FUN_00d26bc8(long param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(((*(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x48)) /
                              (*(float *)(param_1 + 0x48) * -3.0) + 1.0) * 0.39999998 + 0.6,
                             0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}




float FUN_00d26c10(long param_1)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  if (*(uint *)(param_1 + 0x270) != 0) {
    uVar1 = 0;
    pfVar2 = (float *)(param_1 + 0x98);
    fVar3 = 0.0;
    do {
      uVar1 = uVar1 + 1;
      fVar4 = (float)NEON_fminnm((1.0 - (*pfVar2 - *(float *)(param_1 + 0x48)) /
                                        (*(float *)(param_1 + 0x48) * 3.0)) * 0.39999998 + 0.6,
                                 0x3f800000);
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      if (fVar4 <= fVar3) {
        fVar4 = fVar3;
      }
      pfVar2 = pfVar2 + 0x10;
      fVar3 = fVar4;
    } while (uVar1 < *(uint *)(param_1 + 0x270));
    return fVar4;
  }
  return 0.0;
}




undefined4 FUN_00d26c88(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fminnm((*(float *)(param_2 + 0x30) * 4.0) / *(float *)(param_1 + 0x40),0x3f800000);
  return uVar1;
}




float FUN_00d26ca8(long param_1)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  if (*(uint *)(param_1 + 0x270) != 0) {
    uVar1 = 0;
    pfVar2 = (float *)(param_1 + 0xa0);
    fVar3 = 0.0;
    do {
      uVar1 = uVar1 + 1;
      fVar4 = (float)NEON_fminnm((*pfVar2 * 4.0) / *(float *)(param_1 + 0x40),0x3f800000);
      if (fVar4 <= fVar3) {
        fVar4 = fVar3;
      }
      pfVar2 = pfVar2 + 0x10;
      fVar3 = fVar4;
    } while (uVar1 < *(uint *)(param_1 + 0x270));
    return fVar4;
  }
  return 0.0;
}




float FUN_00d26cf8(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d25570();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_0315c820 <= fVar3) {
    fVar3 = DAT_0315c820;
  }
  fVar2 = DAT_0315c760;
  if (DAT_0315c760 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = powf(1.8484316,(*(float *)(lVar1 + 0x308) * -12.0) / fVar2 + 6.0);
  return 1.0 - 1.0 / fVar3;
}




float FUN_00d26d8c(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x10);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x2c) - (float)*(undefined8 *)(param_2 + 0x14);
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
  return (*(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c)) /
         (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
}




void FUN_00d26dc8(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long local_60;
  undefined8 local_58;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  FUN_00d69294(param_1,&local_58,&local_60);
  lVar5 = FUN_00d66d28(local_58);
  uVar6 = FUN_00daa58c(local_60,lVar5);
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)(local_60 + 0x28);
    if ((lVar7 != 0) &&
       (((*(uint *)(lVar7 + 0x2f4) >> 0xc & 1) != 0 ||
        ((((*(uint *)(lVar7 + 0x2f4) & 1) != 0 && ((*(byte *)(local_60 + 0xc) >> 4 & 1) == 0)) &&
         ((uVar1 = *(ushort *)(lVar7 + 0x88) & 0x1f, uVar1 == 0x1f ||
          (1 < *(ushort *)(lVar7 + (ulong)uVar1 * 0x38 + 0x90) - 3)))))))) {
      uVar2 = *(undefined4 *)(lVar5 + 0x260);
      uVar4 = FUN_00d66d34(local_58);
      FUN_00d009d0(auStack_50,uVar2,uVar4);
      FUN_00ce20fc(auStack_50);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d26ea4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d26dc8;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar5 + 0x30);
  FUN_00d3e534();
  uVar6 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar6);
  uVar6 = FUN_00d47dc4(uVar6,"CenterBody");
  uVar6 = FUN_00da2040(uVar6,"Effect_AceBuff");
  FUN_00da20dc(uVar6,1);
  FUN_00d3e534();
  uVar6 = FUN_00d29584();
  FUN_00d42654(auStack_70,uVar6);
  lVar5 = FUN_00d70a78();
  FUN_00d472ec(*(undefined4 *)(lVar5 + 0xe0),uVar6,1);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar5 + 8);
  FUN_00d3e534();
  uVar6 = FUN_00d2965c();
  FUN_00d42654(auStack_70,uVar6);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar5 + 0x28);
  lVar5 = FUN_00d66d28(param_1);
  lVar7 = *(long *)(lVar5 + 0x40);
  fVar8 = (*(float *)(lVar7 + 0x1a0) + 1.0) *
          (*(float *)(lVar7 + 0x38) + *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0));
  fVar10 = *(float *)(lVar7 + 0x308);
  if (DAT_0315ca50 <= fVar8) {
    fVar8 = DAT_0315ca50;
  }
  fVar9 = DAT_0315c990;
  if (DAT_0315c990 <= fVar8) {
    fVar9 = fVar8;
  }
  fVar8 = (float)FUN_00d67b3c(param_1);
  FUN_00d3e534();
  lVar7 = FUN_00d29738();
  FUN_00d42654(auStack_70,lVar7);
  *(float *)(lVar7 + 0x10) = (fVar9 - fVar10) / fVar8;
  lVar5 = *(long *)(lVar5 + 0x40);
  fVar8 = (*(float *)(lVar5 + 0x1a8) + 1.0) *
          (*(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0xf4) * (*(float *)(lVar5 + 0x25c) + 1.0));
  fVar10 = *(float *)(lVar5 + 0x310);
  if (DAT_0315ca58 <= fVar8) {
    fVar8 = DAT_0315ca58;
  }
  fVar9 = DAT_0315c998;
  if (DAT_0315c998 <= fVar8) {
    fVar9 = fVar8;
  }
  fVar8 = (float)FUN_00d67b3c(param_1);
  FUN_00d3e534();
  lVar5 = FUN_00d29818();
  FUN_00d42654(auStack_70,lVar5);
  *(float *)(lVar5 + 0x10) = (fVar9 - fVar10) / fVar8;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

