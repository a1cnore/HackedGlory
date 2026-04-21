// functions/00d17 — 59 functions
#include "libGameKindred.h"




undefined8 FUN_00d17188(void)

{
  return 2;
}




void FUN_00d17190(long param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




void FUN_00d17198(long param_1,float *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x28) + 8);
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar2 = (long *)0x0;
    fVar5 = 3.4028235e+38;
    do {
      fVar6 = *(float *)(lVar4 + 4) - *param_2;
      fVar7 = (float)*(undefined8 *)(lVar4 + 8) - (float)*(undefined8 *)(param_2 + 1);
      fVar8 = (float)((ulong)*(undefined8 *)(lVar4 + 8) >> 0x20) -
              (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
      fVar6 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
      plVar3 = plVar1;
      if (fVar5 <= fVar6) {
        plVar3 = plVar2;
      }
      plVar1 = plVar1 + 1;
      lVar4 = *plVar1;
      if (fVar5 <= fVar6) {
        fVar6 = fVar5;
      }
      plVar2 = plVar3;
      fVar5 = fVar6;
    } while (lVar4 != 0);
  }
  *(long **)(param_1 + 0x30) = plVar3;
  return;
}




void FUN_00d17208(long param_1,float *param_2)

{
  float *pfVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
    fVar6 = *param_2;
    do {
      plVar3 = plVar2;
      fVar7 = (float)*(undefined8 *)(param_2 + 1);
      fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
      if (*(long **)(*(long *)(param_1 + 0x28) + 8) == plVar3) break;
      lVar5 = plVar3[-1];
      uVar11 = *(undefined8 *)(*plVar3 + 8);
      uVar15 = *(undefined8 *)(lVar5 + 8);
      fVar9 = *(float *)(*plVar3 + 4) - fVar6;
      fVar10 = (float)uVar11 - fVar7;
      fVar12 = (float)((ulong)uVar11 >> 0x20) - fVar8;
      fVar13 = *(float *)(lVar5 + 4) - fVar6;
      fVar14 = (float)uVar15 - fVar7;
      fVar16 = (float)((ulong)uVar15 >> 0x20) - fVar8;
      plVar2 = plVar3 + -1;
    } while (fVar13 * fVar13 + fVar14 * fVar14 + fVar16 * fVar16 <
             fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12);
    plVar2 = plVar3 + -1;
    lVar5 = *plVar3;
    do {
      if (lVar5 == 0) {
        return;
      }
      lVar4 = plVar2[2];
      if (lVar4 == 0) {
        return;
      }
      pfVar1 = (float *)(lVar5 + 4);
      plVar2 = plVar2 + 1;
      fVar9 = (float)*(undefined8 *)(lVar5 + 8);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar5 + 8) >> 0x20);
      lVar5 = lVar4;
    } while ((*(float *)(lVar4 + 4) - *pfVar1) * (*pfVar1 - fVar6) +
             ((float)*(undefined8 *)(lVar4 + 8) - fVar9) * (fVar9 - fVar7) +
             ((float)((ulong)*(undefined8 *)(lVar4 + 8) >> 0x20) - fVar10) * (fVar10 - fVar8) <= 0.0
            );
    *(long **)(param_1 + 0x30) = plVar2;
  }
  return;
}




void FUN_00d172ec(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long **)(param_1 + 0x30) != (long *)0x0) &&
     (lVar2 = **(long **)(param_1 + 0x30), lVar2 != 0)) {
    uVar1 = *(undefined4 *)(lVar2 + 0xc);
    *param_2 = *(undefined8 *)(lVar2 + 4);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return;
  }
  *(undefined4 *)(param_2 + 1) = DAT_03218f38;
  *param_2 = DAT_03218f30;
  return;
}




bool FUN_00d1732c(long param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)**(long **)(param_1 + 0x30);
  fVar2 = (float)*(undefined8 *)(pfVar1 + 2) - (float)*(undefined8 *)(param_2 + 1);
  fVar3 = (float)((ulong)*(undefined8 *)(pfVar1 + 2) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  return (pfVar1[1] - *param_2) * (pfVar1[1] - *param_2) + fVar2 * fVar2 + fVar3 * fVar3 <
         *pfVar1 * *pfVar1;
}




bool FUN_00d17370(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    return **(long **)(param_1 + 0x30) != 0;
  }
  return false;
}




void FUN_00d17390(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (((plVar1 != (long *)0x0) && (*plVar1 != 0)) &&
     (*(long **)(param_1 + 0x30) = plVar1 + 1, plVar1[1] != 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  return;
}




void FUN_00d173d4(void)

{
  return;
}




undefined8 FUN_00d173d8(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x193c + lVar1 * 4) == param_2) {
      return 1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 8);
  return 0;
}




void FUN_00d1740c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028147b0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d17440(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d17448(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_2 + 0x193c + uVar1 * 4) == *(int *)(param_1 + 0x24)) {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  return 2;
}




void FUN_00d17480(void)

{
  return;
}




void FUN_00d17484(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814838;
  param_1[5] = 0;
  return;
}




void FUN_00d174b8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d174c0(long param_1,long param_2)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  
  pbVar2 = *(byte **)(param_1 + 0x28);
  uVar1 = 0x811c9dc5;
  uVar4 = (uint)*pbVar2;
  if (*pbVar2 != 0) {
    do {
      pbVar2 = pbVar2 + 1;
      uVar1 = (uVar1 ^ uVar4) * 0x1000193;
      uVar4 = (uint)*pbVar2;
    } while (*pbVar2 != 0);
  }
  uVar3 = 0;
  do {
    if (*(uint *)(param_2 + 0x193c + uVar3 * 4) == uVar1) {
      return 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return 2;
}




void FUN_00d17528(void)

{
  return;
}




void FUN_00d1752c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_00d17534(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_00d25570(param_2);
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_03130aa8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_00d72dac();
  uVar3 = 1;
  if (uVar1 < *(uint *)(param_1 + 0x24)) {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_00d17594(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028148c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d175c8(void)

{
  return;
}




undefined4 FUN_00d175cc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_00d25570(param_2);
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_03130aa8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d72dac();
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_00d1761c(void)

{
  return;
}




void FUN_00d17620(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814948;
  param_1[5] = 0;
  return;
}




void FUN_00d17654(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined4 FUN_00d1765c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = 2;
  }
  else {
    lVar2 = FUN_00d25570(param_2);
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_03130aa8))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    uVar3 = FUN_00d6eb50();
    uVar1 = FUN_00d6e9d4(uVar3,*(undefined8 *)(param_1 + 0x28));
    uVar4 = FUN_00d73590(lVar2,uVar1);
    uVar1 = 1;
    if ((uVar4 & 1) == 0) {
      uVar1 = 2;
    }
  }
  return uVar1;
}




void FUN_00d176dc(void)

{
  return;
}




void FUN_00d176e0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028149d0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d17714(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_00d1771c(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_00d25570(param_2);
  cVar1 = FUN_00d55870();
  uVar2 = 1;
  if (cVar1 != *(char *)(param_1 + 0x24)) {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_00d17758(void)

{
  return;
}




void FUN_00d1775c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814a58;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}




void FUN_00d17790(long param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(byte *)(param_1 + 0x2c) = param_4 & 1;
  return;
}




void FUN_00d177a0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float local_190;
  float fStack_18c;
  float local_188;
  undefined1 auStack_180 [96];
  long local_120 [20];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    cVar6 = '\x01';
    if (iVar1 == 0) {
      cVar6 = '\x02';
    }
    FUN_00d4d9e8(auStack_180);
    FUN_00d4dabc(auStack_180,0x40000);
    FUN_00d4d364(auStack_180,0);
    local_188 = DAT_03218f38;
    local_190 = (float)DAT_03218f30;
    fStack_18c = (float)((ulong)DAT_03218f30 >> 0x20);
    uVar5 = FUN_00d25570(param_2);
    FUN_00d55794(uVar5,&local_190,0);
    uVar4 = FUN_00d9e840(auStack_180,local_120,200,0);
    if (uVar4 != 0) {
      uVar11 = (ulong)uVar4;
      fVar14 = -1.0;
      plVar12 = local_120;
      lVar7 = 0;
      do {
        lVar10 = *plVar12;
        cVar3 = FUN_00d55870(lVar10);
        lVar9 = lVar7;
        fVar13 = fVar14;
        if (cVar6 == cVar3) {
          local_198 = DAT_03218f38;
          local_1a0 = (float)DAT_03218f30;
          fStack_19c = (float)((ulong)DAT_03218f30 >> 0x20);
          FUN_00d55794(lVar10,&local_1a0,0);
          fVar13 = (local_1a0 - local_190) * (local_1a0 - local_190) +
                   (fStack_19c - fStack_18c) * (fStack_19c - fStack_18c) +
                   (local_198 - local_188) * (local_198 - local_188);
          lVar9 = lVar10;
          if (lVar7 != 0 && fVar14 <= fVar13) {
            lVar9 = lVar7;
            fVar13 = fVar14;
          }
        }
        fVar14 = fVar13;
        uVar11 = uVar11 - 1;
        plVar12 = plVar12 + 1;
        lVar7 = lVar9;
      } while (uVar11 != 0);
      if (lVar9 != 0) {
        if (*(int *)(param_1 + 0x28) == 1) {
          if (*(uint *)(param_2 + 0xa10) < 0xc) {
            uVar5 = FUN_00d25570(param_2);
            uVar4 = *(uint *)(param_2 + 0xa10);
            *(uint *)(param_2 + 0xa10) = uVar4 + 1;
            goto LAB_00d179dc;
          }
        }
        else if ((*(int *)(param_1 + 0x28) == 0) && (*(uint *)(param_2 + 0x680) < 0xc)) {
          uVar5 = FUN_00d25570(param_2);
          uVar4 = *(uint *)(param_2 + 0x680);
          *(uint *)(param_2 + 0x680) = uVar4 + 1;
LAB_00d179dc:
          FUN_00d24960(param_2,uVar5,lVar9,param_2 + (ulong)uVar4 * 0x40 + 0x380);
        }
LAB_00d179ec:
        uVar5 = 1;
        goto LAB_00d179f0;
      }
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x28) == 1) {
      piVar8 = (int *)(param_2 + 0xa10);
      lVar7 = param_2 + 0x890;
    }
    else {
      if (*(int *)(param_1 + 0x28) != 0) goto LAB_00d179ac;
      piVar8 = (int *)(param_2 + 0x680);
      lVar7 = param_2 + 0x380;
    }
    if (0 < *piVar8) {
      *(long *)(param_2 + 0x1428) = lVar7;
      goto LAB_00d179ec;
    }
  }
  else if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x28) == 1) {
      piVar8 = (int *)(param_2 + 0xa10);
      lVar7 = param_2 + 0x890;
    }
    else {
      if (*(int *)(param_1 + 0x28) != 0) goto LAB_00d179ac;
      piVar8 = (int *)(param_2 + 0x680);
      lVar7 = param_2 + 0x380;
    }
    if (0 < *piVar8) {
      *(long *)(param_2 + 0x1420) = lVar7;
      goto LAB_00d179ec;
    }
  }
LAB_00d179ac:
  uVar5 = 2;
LAB_00d179f0:
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




void FUN_00d17a28(void)

{
  return;
}




void FUN_00d17a2c(undefined8 *param_1)

{
  FUN_00d0aac4();
  param_1[5] = 0;
  *param_1 = &PTR_FUN_02814ae0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}




void FUN_00d17a64(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d17a6c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = FUN_00e6a474("__VOICE_ASSISTANT__");
  uVar1 = FUN_0091ed5c("__VOICE_ASSISTANT__",uVar1,0x12345678);
  puVar2 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar4 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,*(undefined8 *)(param_1 + 0x28));
    if ((uVar4 & 1) == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00d17b0c(void)

{
  return;
}




void FUN_00d17b10(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814b68;
  param_1[5] = 0;
  return;
}




void FUN_00d17b44(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d17b4c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = FUN_00e6a474(uVar2);
  uVar1 = FUN_0091ed5c(uVar2,uVar1,0x12345678);
  (**(code **)(*(long *)(param_2 + 0x1688) + 8))(param_2 + 0x1688,uVar1);
  return 1;
}




void FUN_00d17bb0(void)

{
  return;
}




void FUN_00d17bb4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814bf0;
  param_1[5] = 0;
  param_1[6] = 2;
  return;
}




void FUN_00d17bf4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  return;
}




undefined8 FUN_00d17c00(long param_1,long param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = FUN_00e6a474(uVar3);
    uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
    piVar2 = (int *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
    if (*(int *)(param_1 + 0x34) < *piVar2) {
      return 1;
    }
    break;
  case 1:
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = FUN_00e6a474(uVar3);
    uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
    piVar2 = (int *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
    if (*piVar2 < *(int *)(param_1 + 0x34)) {
      return 1;
    }
    break;
  case 2:
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = FUN_00e6a474(uVar3);
    uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
    piVar2 = (int *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
    if (*piVar2 == *(int *)(param_1 + 0x34)) {
      return 1;
    }
    break;
  case 3:
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = FUN_00e6a474(uVar3);
    uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
    piVar2 = (int *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
    if (*(int *)(param_1 + 0x34) <= *piVar2) {
      return 1;
    }
    break;
  case 4:
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = FUN_00e6a474(uVar3);
    uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
    piVar2 = (int *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
    if (*piVar2 <= *(int *)(param_1 + 0x34)) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d17ddc(void)

{
  return;
}




void FUN_00d17de0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814c78;
  param_1[5] = 0;
  return;
}




void FUN_00d17e14(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d17e1c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    uVar2 = 2;
  }
  else {
    uVar1 = FUN_00e6a474(lVar3);
    uVar1 = FUN_0091ed5c(lVar3,uVar1,0x12345678);
    (**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_00d17e8c(void)

{
  return;
}




void FUN_00d17e90(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814d00;
  param_1[5] = 0;
  return;
}




void FUN_00d17ec4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined4 FUN_00d17ecc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d17ee0(void)

{
  return;
}




void FUN_00d17ee4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814d88;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_00d17f18(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return;
}




undefined8 FUN_00d17f24(long param_1,long param_2)

{
  undefined4 uVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar5 = *(int *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = FUN_00e6a474(uVar4);
    uVar1 = FUN_0091ed5c(uVar4,uVar1,0x12345678);
    lVar3 = *(long *)(param_2 + 0x1688);
  }
  else {
    if (*(int *)(param_1 + 0x34) != 1) {
      return 1;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = FUN_00e6a474(uVar4);
    uVar1 = FUN_0091ed5c(uVar4,uVar1,0x12345678);
    piVar2 = (int *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    iVar5 = *(int *)(param_1 + 0x30) + *piVar2;
    uVar1 = FUN_00e6a474(uVar4);
    uVar1 = FUN_0091ed5c(uVar4,uVar1,0x12345678);
    lVar3 = *(long *)(param_2 + 0x1688);
  }
  piVar2 = (int *)(**(code **)(lVar3 + 0x10))(param_2 + 0x1688,uVar1);
  *piVar2 = iVar5;
  return 1;
}

