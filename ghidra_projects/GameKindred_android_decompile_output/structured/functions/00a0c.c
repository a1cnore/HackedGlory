// functions/00a0c — 17 functions
#include "libGameKindred.h"




void * FUN_00a0c000(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar5 = FUN_00e6a474(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28));
  if (iVar5 == 0) {
    pvVar6 = operator_new(0x60);
    FUN_00d4d9e8();
  }
  else {
    pvVar6 = operator_new(0x70);
    if (*(long *)(*(long *)(param_1 + 0x28) + 0x28) == 0) {
      local_58[0] = 0xffffffff;
    }
    else {
      thunk_FUN_00d9ff34(local_58);
    }
    FUN_00d9ff84(local_50,local_58[0]);
    FUN_00d4e934(pvVar6,local_50[0]);
    FUN_00d4e998(pvVar6,1);
  }
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) == '\0') {
    FUN_00d4dac4(pvVar6,*(undefined4 *)(param_1 + 0x90));
    FUN_00d4dd6c(pvVar6,*(char *)(*(long *)(param_1 + 0x28) + 8) == '\0');
  }
  pcVar9 = *(char **)(param_1 + 0x38);
  plVar7 = *(long **)(param_1 + 0x48);
  cVar1 = *pcVar9;
  cVar2 = pcVar9[1];
  cVar3 = pcVar9[2];
  if (plVar7 == (long *)0x0) {
    uVar8 = 0;
  }
  else if (*(int *)(param_1 + 0x50) == (int)plVar7[1]) {
    uVar8 = (**(code **)(*plVar7 + 0x10))();
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
  }
  FUN_00d4daf4(pvVar6,cVar1 != '\0',cVar2 != '\0',cVar3 != '\0',uVar8);
  FUN_00d4d354(pvVar6,0);
  FUN_00d4dcdc(pvVar6,1);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0c190(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x118) = 1;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}




void FUN_00a0c1a0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x11b) = param_2 & 1;
  return;
}




undefined8 FUN_00a0c1ac(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  plVar3 = *(long **)(param_1 + 0x48);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if ((lVar4 != 0) && (plVar3 = *(long **)(param_1 + 0x58), plVar3 != (long *)0x0)) {
        if (*(int *)(param_1 + 0x60) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          if (lVar4 != 0) {
            lVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
            uVar5 = FUN_00ced270(*(undefined4 *)(lVar4 + 0x260));
            if ((uVar5 & 1) == 0) {
              FUN_00cedce4();
              uVar7 = FUN_00d9e390();
              plVar3 = *(long **)(param_1 + 0x58);
              if (plVar3 == (long *)0x0) {
                lVar4 = 0;
              }
              else if (*(int *)(param_1 + 0x60) == (int)plVar3[1]) {
                lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
              }
              else {
                *(undefined8 *)(param_1 + 0x58) = 0;
                lVar4 = 0;
                *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
              }
              uVar2 = FUN_00d55870(uVar7);
              uVar5 = FUN_00d7d0a0(*(undefined8 *)(lVar4 + 0x80),uVar2);
              if ((uVar5 & 1) == 0) goto LAB_00a0c2fc;
              if ((*(long *)(*(long *)(param_1 + 0x28) + 0x20) != 0) &&
                 (uVar5 = FUN_00e6a488(), (uVar5 & 1) == 0)) {
                lVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
                for (lVar4 = *(long *)(lVar4 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
                  if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02c7bf48) {
                    uVar5 = FUN_00d6c0bc(lVar4,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
                    if ((uVar5 & 1) != 0) goto LAB_00a0c230;
                    break;
                  }
                }
                goto LAB_00a0c2fc;
              }
            }
LAB_00a0c230:
            FUN_00a0d9b0(param_1);
            uVar5 = FUN_00ced270();
            if ((uVar5 & 1) == 0) {
              return 0;
            }
            lVar4 = param_1 + 0x94;
            iVar1 = FUN_008ff0d4(lVar4);
            if (iVar1 != 0) {
              return 0;
            }
            FUN_00a0d9b0(param_1);
            lVar6 = FUN_00d9e390();
            lVar8 = *(long *)(lVar6 + 0x18);
            while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02e3ef78))) {
              lVar8 = *(long *)(lVar8 + 0x20);
            }
            fVar10 = *(float *)(*(long *)(lVar6 + 0x40) + 0x310);
            uVar2 = FUN_008ff0dc(lVar4);
            fVar9 = (float)FUN_00d53b2c(lVar8,uVar2);
            if (fVar9 <= fVar10) {
              fVar10 = *(float *)(*(long *)(lVar6 + 0x40) + 0x314);
              uVar2 = FUN_008ff0dc(lVar4);
              fVar9 = (float)FUN_00d53b44(lVar8,uVar2);
              if (fVar9 <= fVar10) {
                return 0;
              }
            }
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
    }
  }
LAB_00a0c2fc:
  FUN_00a0c778(param_1);
  return 1;
}




void FUN_00a0c410(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    if ((*(char *)(param_1 + 0x11b) == '\0') || (lVar2 = *(long *)(param_1 + 0x80), lVar2 == 0)) {
      if (*(char *)(lVar1 + 0x1c) != '\0') {
        if (*(char *)(param_1 + 0x119) != '\0') {
          FUN_00a0e4a0();
          return;
        }
        FUN_00a0dfa8();
        return;
      }
      if (*(char *)(param_1 + 0x119) != '\0') {
        if (*(char *)(lVar1 + 0x1e) != '\0') {
          FUN_00a0c778();
          return;
        }
        FUN_00a0e5fc();
        return;
      }
    }
    else {
      if (*(char *)(lVar2 + 0x98) != '\0') {
        if (*(char *)(param_1 + 0x119) != '\0') {
          FUN_00a0e4a0();
          return;
        }
        FUN_00a0dfa8();
        return;
      }
      if (*(char *)(param_1 + 0x119) != '\0') {
        if (*(char *)(lVar2 + 0x9a) != '\0') {
          FUN_00a0c778();
          return;
        }
        FUN_00a0e5fc();
        return;
      }
    }
  }
  return;
}




undefined8
FUN_00a0c484(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4,int param_5,
            int param_6,byte *param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (*(char *)(param_1 + 0x118) != '\0') {
    return 0;
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 == (long *)0x0) goto LAB_00a0c57c;
  if (*(int *)(param_1 + 0x50) != (int)plVar5[1]) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
    goto LAB_00a0c57c;
  }
  lVar6 = (**(code **)(*plVar5 + 0x10))();
  if ((lVar6 == 0) || (plVar5 = *(long **)(param_1 + 0x58), plVar5 == (long *)0x0))
  goto LAB_00a0c57c;
  if (*(int *)(param_1 + 0x60) != (int)plVar5[1]) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
    goto LAB_00a0c57c;
  }
  lVar6 = (**(code **)(*plVar5 + 0x10))();
  if (lVar6 == 0) goto LAB_00a0c57c;
  *(undefined8 *)(param_1 + 0xa0) = *param_3;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_3 + 1);
  uVar8 = *param_2;
  *(undefined8 *)(param_1 + 0xb4) = param_2[1];
  *(undefined8 *)(param_1 + 0xac) = uVar8;
  *(undefined8 *)(param_1 + 0xbc) = param_2[2];
  iVar3 = FUN_0092f28c();
  if (iVar3 == 1) {
    uVar7 = FUN_009f1f70(9);
    if ((uVar7 & 1) == 0) {
LAB_00a0c5dc:
      uVar4 = FUN_00a1bd34();
      bVar2 = 0;
    }
    else {
      bVar2 = FUN_009f1f70(10);
      uVar4 = 0;
    }
  }
  else {
    iVar3 = FUN_0092f28c();
    if ((iVar3 != 0) || (uVar7 = FUN_009f1f70(0xb), (uVar7 & 1) == 0)) goto LAB_00a0c5dc;
    bVar2 = 1;
    uVar4 = 1;
  }
  if (param_6 == 2) {
    if ((bVar2 & 1) == 0 && *(char *)(param_1 + 0x11b) == '\0') goto LAB_00a0c62c;
LAB_00a0c610:
    bVar1 = 1;
  }
  else {
    if (param_6 == 0) {
      bVar1 = FUN_00a1bd34();
      if (((bVar2 | bVar1) & 1) != 0) {
        bVar1 = bVar1 ^ 1;
        goto LAB_00a0c63c;
      }
    }
    else if ((bVar2 & 1) != 0) goto LAB_00a0c610;
LAB_00a0c62c:
    bVar1 = *(char *)(*(long *)(param_1 + 0x28) + 0x18) == '\0';
  }
LAB_00a0c63c:
  iVar3 = FUN_009f1f94(3);
  if (iVar3 == 0) {
    if (param_5 == 1 && param_6 == 2) goto LAB_00a0c57c;
  }
  else if ((param_5 == 1 && param_6 == 2) && *(char *)(param_1 + 0x11b) == '\0') {
LAB_00a0c57c:
    FUN_00a0c778(param_1);
    return 0;
  }
  if ((param_5 == 1 & bVar1) == 0) {
    bVar2 = param_5 == 3 & (bVar1 ^ 1);
    if ((uVar4 & 1) == 0 && bVar2 == 0) {
      if ((param_5 == 1) &&
         (uVar7 = FUN_00a0c830(*(undefined4 *)(*(long *)(param_1 + 0x28) + 4),param_1,
                               (undefined8 *)(param_1 + 0xa0)), (uVar7 & 1) != 0)) {
        *(long *)(param_1 + 0x120) = param_4;
      }
      if (param_6 != 4) {
        if (*(long *)(param_1 + 0x120) == 0) {
          uVar8 = 0;
          goto LAB_00a0c74c;
        }
        uVar8 = 0;
        if (*(long *)(param_1 + 0x120) != param_4) goto LAB_00a0c74c;
      }
      FUN_00a0c9e8(param_1);
      iVar3 = FUN_0092f28c();
      if (((iVar3 != 1) || (uVar7 = FUN_009f1f70(9), (uVar7 & 1) == 0)) ||
         (uVar7 = FUN_009f1f70(10), (uVar7 & 1) == 0)) {
        FUN_00a0cac8(0,0x4479c000,param_1);
      }
      uVar8 = 1;
      goto LAB_00a0c74c;
    }
    uVar8 = 0;
    if (bVar2 == 0) goto LAB_00a0c74c;
  }
  bVar2 = FUN_00a0c8b0(param_1);
  uVar8 = 0;
  *param_7 = bVar2 & 1;
LAB_00a0c74c:
  if (param_5 == 3) {
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if (*param_7 == 0) {
    return uVar8;
  }
  FUN_00a0c778(param_1);
  return 1;
}




void FUN_00a0c778(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar2;
    do {
      if (*(uint *)(plVar3 + 4) >= 0xccc11f8e) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xccc11f8e];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xccc11f8f)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])
                  (*(undefined8 *)(plVar4[6] + lVar1),param_1 + 0x94);
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  FUN_00a0ba38(param_1);
  FUN_019888e0(param_1);
  return;
}




bool FUN_00a0c830(float param_1,float param_2,float param_3,long param_4,float *param_5)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  
  uVar2 = FUN_0092ebd4();
  if ((uVar2 & 1) == 0) {
    fVar3 = (float)FUN_00a0bf68(param_4);
    param_1 = *(float *)(param_4 + 0x88) + param_1;
    bVar1 = (*param_5 - fVar3) * (*param_5 - fVar3) +
            (param_5[1] - param_2) * (param_5[1] - param_2) +
            (param_5[2] - param_3) * (param_5[2] - param_3) <= param_1 * param_1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




uint FUN_00a0c8b0(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) != '\0') {
    uVar2 = FUN_00a0d4b0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),
                         *(undefined4 *)(param_1 + 0xa8),param_1);
    goto LAB_00a0c998;
  }
  local_40 = FUN_00d9e6a8(param_1 + 0xac,*(undefined8 *)(param_1 + 0x40));
  plVar3 = *(long **)(param_1 + 0x108);
  if (plVar3 == (long *)0x0) {
LAB_00a0c970:
    FUN_00a0d7fc(param_1,&local_40,param_1 + 0xac);
    lVar4 = local_40;
    if (local_40 == 0) {
      uVar2 = 0;
      goto LAB_00a0c998;
    }
  }
  else {
    if (*(int *)(param_1 + 0x110) != (int)plVar3[1]) {
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x110) = DAT_03214ce8;
      goto LAB_00a0c970;
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))();
    if (lVar4 == 0) goto LAB_00a0c970;
    plVar3 = *(long **)(param_1 + 0x108);
    if (plVar3 == (long *)0x0) {
      lVar4 = 0;
    }
    else if (*(int *)(param_1 + 0x110) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x110) = DAT_03214ce8;
      lVar4 = 0;
    }
  }
  uVar2 = FUN_00a0d64c(param_1,lVar4);
LAB_00a0c998:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00a0c9e8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00a0ce78();
  uVar4 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  if (uVar4 < 2) {
    FUN_00a0d168(param_1,uVar4 == 1);
    uVar4 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  }
  if (uVar4 - 2 < 3) {
    FUN_00a0d2f4(param_1);
    plVar2 = *(long **)(param_1 + 0x58);
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_1 + 0x60) == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x58) = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
      }
    }
    FUN_00d55794(uVar3,&local_38,0);
    FUN_009d1988(local_38,uStack_34,local_30,*(undefined8 *)(param_1 + 0x100));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0cac8(float param_1,float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(char *)(*(long *)(param_4 + 0x28) + 0x18) == '\0') {
    uVar6 = *(undefined8 *)(param_4 + 0x40);
    fVar8 = param_2;
    fVar7 = (float)FUN_00a0bf68(param_4);
    local_50 = param_3 + *(float *)(param_4 + 0xcc);
    local_58 = CONCAT44(fVar8 + (float)((ulong)*(undefined8 *)(param_4 + 0xc4) >> 0x20),
                        fVar7 + (float)*(undefined8 *)(param_4 + 0xc4));
    plVar3 = *(long **)(param_4 + 0x58);
    if (plVar3 == (long *)0x0) {
      uVar4 = 0;
    }
    else if (*(int *)(param_4 + 0x60) == (int)plVar3[1]) {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      *(undefined8 *)(param_4 + 0x58) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_4 + 0x60) = DAT_03214ce8;
    }
    lVar5 = FUN_00a1c324(param_1 + 4.5,*(float *)(param_4 + 0x88) + param_2,uVar6,&local_58,uVar4,0)
    ;
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x30);
      *(long *)(param_4 + 0x108) = lVar5 + 0x28;
      *(undefined4 *)(param_4 + 0x110) = uVar1;
      uVar6 = FUN_00a1f2bc();
      FUN_00a1aa40(uVar6,lVar5);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00a0cbe8(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  plVar2 = *(long **)(param_4 + 0x48);
  bVar1 = false;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_4 + 0x50) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      bVar1 = false;
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_4 + 0x58);
        bVar1 = false;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_4 + 0x60) == (int)plVar2[1]) {
            lVar3 = (**(code **)(*plVar2 + 0x10))();
            bVar1 = false;
            if (lVar3 != 0) {
              fVar5 = *(float *)(param_4 + 0x88);
              fVar4 = (float)FUN_00a0bf68(param_4);
              bVar1 = (*param_5 - fVar4) * (*param_5 - fVar4) +
                      (param_5[1] - param_2) * (param_5[1] - param_2) +
                      (param_5[2] - param_3) * (param_5[2] - param_3) <= fVar5 * fVar5;
            }
          }
          else {
            *(undefined8 *)(param_4 + 0x58) = 0;
            bVar1 = false;
            *(undefined4 *)(param_4 + 0x60) = DAT_03214ce8;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_4 + 0x48) = 0;
      bVar1 = false;
      *(undefined4 *)(param_4 + 0x50) = DAT_03214ce8;
    }
  }
  return bVar1;
}




uint FUN_00a0ccd8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  uint uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *(undefined4 *)(param_5 + 1);
  local_38 = *param_5;
  local_48 = FUN_00a0bf68();
  uStack_44 = param_2;
  local_40 = param_3;
  uVar2 = FUN_00a0cd4c(param_4,&local_38,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00a0cd4c(long param_1,float *param_2,float *param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = (float)*(undefined8 *)(param_2 + 1) - (float)*(undefined8 *)(param_3 + 1);
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar2 = (*param_2 - *param_3) * (*param_2 - *param_3) + fVar2 * fVar2 + fVar3 * fVar3;
  if (*(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88) < fVar2) {
    uVar1 = FUN_0092ebd4();
    if ((uVar1 & 1) == 0) {
      fVar3 = *(float *)(*(long *)(param_1 + 0x28) + 4);
      if (fVar3 <= 0.0) {
        return 0;
      }
      fVar3 = fVar3 + *(float *)(param_1 + 0x88);
      if (fVar3 * fVar3 < fVar2) {
        return 0;
      }
    }
    fVar5 = (float)*(undefined8 *)param_2 - (float)*(undefined8 *)param_3;
    fVar6 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) -
            (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar7 = param_2[2] - param_3[2];
    fVar3 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    fVar2 = SQRT(fVar3);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar3);
    }
    fVar3 = *(float *)(param_1 + 0x88);
    fVar4 = param_3[2];
    *(ulong *)param_2 =
         CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) + (fVar6 / fVar2) * fVar3,
                  (float)*(undefined8 *)param_3 + (fVar5 / fVar2) * fVar3);
    param_2[2] = (fVar7 / fVar2) * fVar3 + fVar4;
  }
  return 1;
}




void FUN_00a0ce78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x11d) != '\0') goto LAB_00a0d140;
  *(undefined1 *)(param_1 + 0x11d) = 1;
  uVar6 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  if (((uVar6 | 4) == 4) && (*(char *)(param_1 + 0x118) != '\0')) {
    if (*(long *)(param_1 + 0xf0) == 0) {
      uVar2 = FUN_00d6eb50();
      lVar3 = FUN_00d6eb5c(uVar2,"*JoystickBasicAttackReticle*");
      uVar2 = FUN_01985d44(param_1,DAT_0312eaf0);
      plVar7 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0xf0) = uVar2;
      if (plVar7 == (long *)0x0) {
        lVar4 = 0;
      }
      else if (*(int *)(param_1 + 0x60) == (int)plVar7[1]) {
        lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else {
        *(undefined8 *)(param_1 + 0x58) = 0;
        lVar4 = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
      }
      local_48 = lVar4 + 0x28;
      local_40 = *(undefined4 *)(lVar4 + 0x30);
      FUN_009d8b0c(0x3f800000,uVar2,&local_48,*(undefined8 *)(lVar3 + 8),lVar3);
      FUN_009d8bc4(*(undefined8 *)(param_1 + 0xf0));
    }
    if (*(long *)(param_1 + 0xf8) == 0) {
      uVar2 = FUN_00d6eb50();
      puVar5 = (undefined8 *)FUN_00d6eb5c(uVar2,"*JoystickBasicAttackReticle*");
      uVar2 = FUN_01985d44(param_1,DAT_0312eaf0);
      plVar7 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0xf8) = uVar2;
      if (plVar7 == (long *)0x0) {
        lVar3 = 0;
      }
      else if (*(int *)(param_1 + 0x60) == (int)plVar7[1]) {
        lVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else {
        *(undefined8 *)(param_1 + 0x58) = 0;
        lVar3 = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
      }
      local_58 = lVar3 + 0x28;
      local_50 = *(undefined4 *)(lVar3 + 0x30);
      FUN_009d8b0c(0x3f800000,uVar2,&local_58,*puVar5,puVar5);
      FUN_009d8bc4(*(undefined8 *)(param_1 + 0xf8));
    }
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xf0);
    uVar6 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  }
  if (uVar6 == 1) {
    if (*(long *)(param_1 + 0x100) == 0) {
      uVar2 = FUN_01985d44(param_1,DAT_0312f370);
      *(undefined8 *)(param_1 + 0x100) = uVar2;
      FUN_009d15e8(uVar2,0);
      FUN_009d1650(*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x4c),
                   *(undefined8 *)(param_1 + 0x100));
      FUN_009d1b34(*(undefined8 *)(param_1 + 0x100));
      uVar6 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
      goto LAB_00a0d084;
    }
  }
  else {
LAB_00a0d084:
    if (((uVar6 == 4) || (uVar6 == 2)) && (*(long *)(param_1 + 0x100) == 0)) {
      uVar2 = FUN_01985d44(param_1,DAT_0312f370);
      *(undefined8 *)(param_1 + 0x100) = uVar2;
      FUN_009d15e8(uVar2,1);
      lVar3 = *(long *)(param_1 + 0x28);
      if (*(char *)(lVar3 + 0x59) == '\0') {
        FUN_009d181c(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(lVar3 + 0x54),
                     *(undefined8 *)(param_1 + 0x100));
      }
      else {
        FUN_009d18dc(*(undefined4 *)(lVar3 + 0x54));
      }
      FUN_009d1b34(*(undefined8 *)(param_1 + 0x100));
      uVar6 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
    }
    if ((uVar6 == 3) && (*(long *)(param_1 + 0x100) == 0)) {
      uVar2 = FUN_01985d44(param_1,DAT_0312f370);
      *(undefined8 *)(param_1 + 0x100) = uVar2;
      FUN_009d15e8(uVar2,2);
      FUN_009d16f0(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x50)
                   ,*(undefined8 *)(param_1 + 0x100));
      FUN_009d1b34(*(undefined8 *)(param_1 + 0x100));
    }
  }
  FUN_00a1f2bc();
  FUN_00a1ac50();
LAB_00a0d140:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a0c778(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar2;
    do {
      if (*(uint *)(plVar3 + 4) >= 0xccc11f8e) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xccc11f8e];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xccc11f8f)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])
                  (*(undefined8 *)(plVar4[6] + lVar1),param_1 + 0x94);
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  FUN_00a0ba38(param_1);
  FUN_019888e0(param_1);
  return;
}




void thunk_FUN_00a0c778(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar2;
    do {
      if (*(uint *)(plVar3 + 4) >= 0xccc11f8e) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xccc11f8e];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xccc11f8f)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])
                  (*(undefined8 *)(plVar4[6] + lVar1),param_1 + 0x94);
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  FUN_00a0ba38(param_1);
  FUN_019888e0(param_1);
  return;
}

