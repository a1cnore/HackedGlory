// functions/009aa — 10 functions
#include "libGameKindred.h"




void FUN_009aa890(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  uVar4 = FUN_00e6a474(uVar14);
  uVar5 = FUN_0091ed5c(uVar14,uVar4,0x12345678);
  uVar10 = param_1[4];
  uVar9 = *param_1;
  param_1[4] = uVar10 + 1;
  if (uVar9 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar2 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar1 = *piVar13;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar2 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar2 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar1 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar6;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar9 = *param_1;
    }
  }
  lVar8 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar5 / uVar9;
  }
  uVar12 = (ulong)(uVar5 - uVar10 * uVar9);
  piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
  iVar6 = *piVar13;
  while (iVar6 != -1) {
    uVar10 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
    iVar6 = *piVar13;
  }
  *(uint *)(lVar8 + uVar12 * 8) = uVar5;
  iVar6 = FUN_009af254(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009aaa68(uint *param_1)

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
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
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




void FUN_009aaaec(long param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 != 7) {
    uVar1 = FUN_01985d44(param_1,DAT_0312e4b8);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    if (*param_2 < 7) {
      switch(*param_2) {
      case 0:
        FUN_009d4bfc(param_2[1],uVar1,*(undefined8 *)(param_1 + 0x10),&DAT_03210450);
        return;
      case 1:
        FUN_009d5684(param_2[1]);
        return;
      case 2:
        FUN_009d5870(param_2[1]);
        return;
      case 3:
        FUN_009d587c(param_2[1]);
        return;
      case 4:
        FUN_009d5888(param_2[1]);
        return;
      case 5:
        FUN_009d5728(param_2[1]);
        return;
      case 6:
        FUN_009d57cc(param_2[1],uVar1,*(undefined8 *)(param_1 + 0x10));
        return;
      }
    }
  }
  return;
}




void FUN_009aabc8(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  plVar8 = *(long **)(param_3 + 0x220);
  puVar7 = (undefined8 *)*plVar8;
  while (puVar7 != (undefined8 *)0x0) {
    iVar3 = strcmp((char *)*puVar7,"KrakenAmbientSounds");
    if (iVar3 == 0) {
      FUN_01985d44(param_2,DAT_0312eb30);
    }
    iVar3 = strcmp(*(char **)*plVar8,"Hero009ToggleSword");
    if (iVar3 == 0) {
      FUN_01985d44(param_2,DAT_0312eb40);
    }
    iVar3 = strcmp(*(char **)*plVar8,"JouleToggleSword");
    if (iVar3 == 0) {
      FUN_01985d44(param_2,DAT_0312eb50);
    }
    iVar3 = strcmp(*(char **)*plVar8,"RezaToggleHorns");
    if (iVar3 == 0) {
      FUN_01985d44(param_2,DAT_0312eb60);
    }
    iVar3 = strcmp(*(char **)*plVar8,"RingoSkin01ToggleArm");
    if (iVar3 == 0) {
      FUN_01985d44(param_2,DAT_0312eb70);
    }
    plVar8 = plVar8 + 1;
    puVar7 = (undefined8 *)*plVar8;
  }
  if ((((*(byte *)(param_2 + 0x2f4) & 1) != 0) && (uVar4 = FUN_00ceab64(), (uVar4 & 1) == 0)) &&
     (*(char *)(param_3 + 0x200) != '\0')) {
    uVar5 = FUN_01985d44(param_1,DAT_0312eb80);
    FUN_009afce0(uVar5,param_2);
  }
  if ((*(byte *)(param_2 + 0x2f5) >> 5 & 1) == 0) {
    return;
  }
  uVar4 = FUN_00ceab64();
  if (((uVar4 & 1) == 0) && (uVar4 = FUN_0092e888(), (uVar4 & 1) != 0)) {
    cVar1 = FUN_00cedf10();
    cVar2 = FUN_00d55870(param_2);
    if ((cVar1 != cVar2) && (lVar6 = FUN_01985d44(param_2,DAT_0312eb90), lVar6 != 0)) {
      FUN_009b112c(lVar6,0x20000018,2);
      FUN_00ceace8();
      uVar4 = FUN_00ceae88();
      if ((uVar4 & 1) != 0) {
        FUN_009b1134(lVar6,1);
      }
    }
  }
  FUN_01985d44(param_2,DAT_0312eba0);
  return;
}




void FUN_009aadd0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  while (lVar2 != 0) {
    param_2 = param_2 + 1;
    lVar1 = FUN_01985d44(param_1,DAT_0312eb20);
    if (lVar1 != 0) {
      FUN_009cb1f8(lVar1,lVar2);
    }
    lVar2 = *param_2;
  }
  return;
}




void FUN_009aae24(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  uVar7 = *param_1;
  if (uVar7 == param_1[1]) {
    if (uVar7 < 0x20) {
      uVar4 = uVar7 << 1;
    }
    else if (uVar7 == 0xffffffff) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uVar7 + 0x10) - (uVar7 & 0xf);
    }
    uVar1 = uVar7 + 1;
    if (uVar7 + 1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (uVar7 < uVar1) {
      puVar2 = operator_new__((ulong)uVar1 << 3);
      puVar3 = *(undefined8 **)(param_1 + 2);
      if (uVar7 != 0) {
        lVar5 = (ulong)uVar7 << 3;
        puVar6 = puVar2;
        do {
          lVar5 = lVar5 + -8;
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar5 != 0);
        puVar3 = *(undefined8 **)(param_1 + 2);
      }
      param_1[1] = uVar1;
      if (puVar3 != (undefined8 *)0x0) {
        operator_delete__(puVar3);
      }
      uVar7 = *param_1;
      *(undefined8 **)(param_1 + 2) = puVar2;
    }
  }
  *param_1 = uVar7 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar7 + 1) * 8;
  *(undefined4 *)(lVar5 + -8) = param_2;
  *(undefined4 *)(lVar5 + -4) = param_3;
  return;
}




void FUN_009aaf04(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_00934ec0();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00934ee4(), (uVar1 & 1) != 0)) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c09220) {
      lVar3 = 0;
    }
    uVar2 = FUN_01985d44(param_1,DAT_0312ebf0);
    FUN_009bfa44(uVar2,0,lVar3);
    return;
  }
  return;
}




void FUN_009aaf7c(long param_1)

{
  FUN_009a9d6c(param_1 + -0x28);
  return;
}




undefined8 FUN_009aaf84(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x58) != 0) && ((*(byte *)(*(long *)(param_1 + 0x10) + 0x303) & 1) != 0)
      ) && (uVar1 = FUN_009b3348(), (uVar1 & 1) == 0)) {
    uVar2 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),param_3);
    return uVar2;
  }
  return 0;
}




void FUN_009aafe4(long param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined4 local_60 [2];
  undefined1 auStack_58 [8];
  undefined4 local_50 [2];
  long local_48;
  
  puVar10 = local_60;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_009ab180;
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = FUN_00d9ef9c(uVar13);
  uVar5 = FUN_00d9ef60(uVar13);
  uVar7 = FUN_009aaf84(param_1,&DAT_0312e8ec,&DAT_0312e8f0);
  puVar2 = &DAT_0312e8f0;
  if ((uVar7 & 1) == 0) {
    puVar2 = &DAT_0312e8ec;
  }
  local_50[0] = *puVar2;
  uVar7 = FUN_009aaf84(param_1,&DAT_0312e8b8,&DAT_0312e8bc);
  pcVar1 = "MoveStopToIdleCombat";
  if ((uVar7 & 1) == 0) {
    pcVar1 = "MoveStopToIdle";
  }
  thunk_FUN_00d9ff34(auStack_58,pcVar1);
  if (((*(uint *)(param_1 + 0x9c) >> 0x18 & 1) == 0) ||
     (uVar7 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec), (uVar7 & 1) == 0)) {
LAB_009ab0e0:
    uVar7 = FUN_009a9b60(param_1);
    if ((((uVar7 & 1) == 0) && ((*(uint *)(param_1 + 0x9c) >> 0x18 & 1) != 0)) &&
       (uVar7 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec), (uVar7 & 1) != 0))
    goto LAB_009ab110;
    uVar7 = FUN_009aaf84(param_1,&DAT_0312e8b8,&DAT_0312e8bc);
    puVar2 = &DAT_0312e8bc;
    if ((uVar7 & 1) == 0) {
      puVar2 = &DAT_0312e8b8;
    }
    local_60[0] = *puVar2;
    puVar12 = &DAT_0312e8ac;
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    uVar11 = 1;
  }
  else {
    uVar6 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8f4);
    if (((uVar5 | uVar4 | uVar6 ^ 0xffffffff) & 1) != 0) goto LAB_009ab0e0;
LAB_009ab110:
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    puVar10 = local_50;
    puVar12 = auStack_58;
    uVar11 = 0;
  }
  FUN_009b2bec(0x3f800000,uVar13,puVar10,uVar11,0,puVar12);
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfefffff8;
LAB_009ab180:
  plVar8 = *(long **)(param_1 + 0x88);
  if (plVar8 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar8[1]) {
      lVar9 = (**(code **)(*plVar8 + 0x10))();
      if (lVar9 != 0) {
        plVar8 = *(long **)(param_1 + 0x88);
        uVar13 = 0;
        if (plVar8 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar8[1]) {
            uVar13 = (**(code **)(*plVar8 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x88) = 0;
            uVar13 = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
          }
        }
        FUN_009d341c(uVar13);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

