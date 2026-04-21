// functions/00a7d — 55 functions
#include "libGameKindred.h"




void FUN_00a7d10c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00a7d114(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cdee8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)((long)param_1 + 0x24) = *(byte *)((long)param_1 + 0x24) & 0xf0 | 4;
  return;
}




void FUN_00a7d144(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00a7d14c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}




void FUN_00a7d154(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 8;
  return;
}




void FUN_00a7d168(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 1;
  return;
}




void FUN_00a7d178(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xfb;
  return;
}




void FUN_00a7d188(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  float fVar7;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_1 + 0x24) >> 3 & 1) == 0) {
    plVar4 = *(long **)(param_2 + 0x18);
    while ((plVar4 != (long *)0x0 && (*(int *)(plVar4[1] + 0xa4) != DAT_0312e4a8))) {
      plVar4 = (long *)plVar4[4];
    }
    uVar1 = *(ushort *)(param_2 + 0x88) & 0x1f;
    if (uVar1 == 0x1f) {
      bVar2 = *(byte *)(param_2 + 0x303);
    }
    else {
      bVar2 = *(byte *)(param_2 + 0x303);
      if (*(short *)(param_2 + (ulong)uVar1 * 0x38 + 0x90) == 2) {
        pcVar6 = "MoveStartToMove";
        if ((bVar2 & 1) != 0) {
          uVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,"MoveCombat");
          pcVar6 = "MoveStartToMoveCombat";
          if ((uVar5 & 1) == 0) {
            pcVar6 = "MoveStartToMove";
          }
        }
        goto LAB_00a7d2b0;
      }
    }
    if ((bVar2 & 1) == 0) {
      pcVar6 = "AttackToIdle";
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,"IdleCombat");
      pcVar6 = "AttackToIdleCombat";
      if ((uVar5 & 1) == 0) {
        pcVar6 = "AttackToIdle";
      }
    }
  }
  else {
    pcVar6 = *(char **)(param_1 + 0x10);
  }
LAB_00a7d2b0:
  fVar7 = *(float *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    local_4c = 1.0;
    (**(code **)(param_1 + 0x18))(0x3f800000,param_3,&local_4c);
    fVar7 = fVar7 / local_4c;
  }
  bVar2 = *(byte *)(param_1 + 0x24);
  if ((((bVar2 >> 1 & 1) != 0) || (uVar1 = *(ushort *)(param_2 + 0x88) & 0x1f, uVar1 == 0x1f)) ||
     (1 < *(ushort *)(param_2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    FUN_00d5a450(fVar7,param_2,*(undefined8 *)(param_1 + 8),bVar2 & 1,bVar2 >> 2 & 1,pcVar6);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a7d35c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




long FUN_00a7d364(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




long FUN_00a7d374(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




void FUN_00a7d384(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_00cfb9b0;
  (**(code **)(*(long *)(param_1 + 0x18) + 0x30))();
  return;
}




void FUN_00a7d3ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00a7cf38(param_1 + 0x18,uVar1,param_2);
  return;
}




void FUN_00a7d3e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00a7d188(param_1 + 0x18,uVar1,param_2);
  return;
}




void FUN_00a7d418(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_027cdf30;
  param_1[1] = 0;
  param_1[3] = &PTR_FUN_027cdee8;
  param_1[2] = &PTR_FUN_027c0f50;
  *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) & 0xf0 | 4;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}




void FUN_00a7d478(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}




long FUN_00a7d484(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




void FUN_00a7d498(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00a7d188(param_1 + 0x18,uVar1,param_2);
  return;
}




void FUN_00a7d4d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((*(char *)(param_1 + 0x48) == '\0') || (fVar4 = (float)FUN_00d67b34(*param_2), 0.0 < fVar4)) {
    lVar1 = FUN_00d66d28(*param_2);
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312eae0) {
        uVar2 = FUN_009b2eb4(lVar1,*(undefined8 *)(param_1 + 0x40));
        if ((uVar2 & 1) == 0) {
          return;
        }
        uVar3 = FUN_00d66d28(*param_2);
        FUN_00d5a450(0x3f800000,uVar3,"Idle",1,0,0);
        return;
      }
    }
  }
  return;
}




void FUN_00a7d574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cdf80;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_00a7d58c(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}




void FUN_00a7d598(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 2;
  return;
}




void FUN_00a7d5a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312e4a8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  if (*(int *)(param_1 + 8) != 2) {
    if (*(int *)(param_1 + 8) != 1) {
      return;
    }
    FUN_009adb18(lVar1);
    return;
  }
  FUN_009adbf0(lVar1);
  return;
}




void FUN_00a7d5f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00a7d5a4(param_1 + 0x18,uVar1);
  return;
}




void FUN_00a7d624(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00a7d5a4(param_1 + 0x18,uVar1);
  return;
}




void FUN_00a7d65c(void)

{
  return;
}




void FUN_00a7d668(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00a7d68c(void)

{
  return;
}




void FUN_00a7d694(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




long FUN_00a7d6b8(long param_1)

{
  return param_1 + 0x18;
}




long FUN_00a7d6c4(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00a7d6cc(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027ce108;
  param_1[1] = 0;
  uVar1 = DAT_03214ce8;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  return;
}




void FUN_00a7d704(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00a7d70c(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}




void FUN_00a7d718(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 uVar12;
  
  FUN_00d66d28(*param_2);
  lVar3 = FUN_00d5cdac();
  if (lVar3 != 0) {
    lVar4 = FUN_00d66d28(*param_2);
    for (lVar3 = *(long *)(lVar4 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0312e4a8) {
        uVar5 = FUN_00d6eb50();
        lVar6 = FUN_00d6eb5c(uVar5,*(undefined8 *)(param_1 + 0x30));
        if (lVar6 == 0) {
          return;
        }
        lVar6 = FUN_009ade60(lVar3,lVar6);
        if (lVar6 == 0) {
          return;
        }
        lVar7 = FUN_01985d44(lVar4,DAT_0312ebd0);
        uVar12 = DAT_03214ce8;
        if (lVar7 == 0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
LAB_00a7d83c:
          *(undefined4 *)(param_1 + 0x18) = uVar12;
          return;
        }
        iVar1 = *(int *)(lVar7 + 0x38);
        *(long **)(param_1 + 0x10) = (long *)(lVar7 + 0x30);
        *(int *)(param_1 + 0x18) = iVar1;
        if (iVar1 != *(int *)(lVar7 + 0x38)) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          goto LAB_00a7d83c;
        }
        lVar7 = (**(code **)(*(long *)(lVar7 + 0x30) + 0x10))();
        if (lVar7 == 0) {
          return;
        }
        plVar8 = *(long **)(param_1 + 0x10);
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar8[1]) {
            uVar5 = (**(code **)(*plVar8 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x10) = 0;
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
          }
        }
        FUN_009b627c(uVar5,*(undefined8 *)(lVar6 + 0x40));
        plVar8 = *(long **)(param_1 + 0x10);
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar8[1]) {
            uVar5 = (**(code **)(*plVar8 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x10) = 0;
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
          }
        }
        FUN_009b62dc(uVar5,*(undefined8 *)(lVar6 + 0x48),lVar6 + 0x50);
        plVar8 = *(long **)(param_1 + 0x10);
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar8[1]) {
            uVar5 = (**(code **)(*plVar8 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x10) = 0;
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
          }
        }
        FUN_009b6320(uVar5,lVar4 + 0x2fc);
        lVar4 = FUN_01985d44(lVar4,DAT_0312ebe0);
        uVar12 = DAT_03214ce8;
        if (lVar4 == 0) {
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        else {
          iVar1 = *(int *)(lVar4 + 0x30);
          *(long **)(param_1 + 0x20) = (long *)(lVar4 + 0x28);
          *(int *)(param_1 + 0x28) = iVar1;
          if (iVar1 == *(int *)(lVar4 + 0x30)) {
            lVar4 = (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))();
            if (lVar4 != 0) {
              uVar9 = FUN_00e6a488(*(undefined8 *)(lVar6 + 0x10));
              if ((uVar9 & 1) == 0) {
                pbVar10 = *(byte **)(lVar6 + 0x10);
                uVar2 = 0x811c9dc5;
                uVar11 = (uint)*pbVar10;
                if (*pbVar10 != 0) {
                  do {
                    pbVar10 = pbVar10 + 1;
                    uVar2 = (uVar2 ^ uVar11) * 0x1000193;
                    uVar11 = (uint)*pbVar10;
                  } while (*pbVar10 != 0);
                }
                uVar12 = 2;
              }
              else {
                uVar9 = FUN_00e6a488(*(undefined8 *)(lVar6 + 8));
                if ((uVar9 & 1) == 0) {
                  uVar2 = FUN_01995208(*(undefined8 *)(lVar6 + 8));
                  uVar12 = 3;
                }
                else {
                  uVar2 = 0;
                  uVar12 = 1;
                }
              }
              plVar8 = *(long **)(param_1 + 0x20);
              if (plVar8 == (long *)0x0) {
                uVar5 = 0;
              }
              else if (*(int *)(param_1 + 0x28) == (int)plVar8[1]) {
                uVar5 = (**(code **)(*plVar8 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x20) = 0;
                uVar5 = 0;
                *(undefined4 *)(param_1 + 0x28) = DAT_03214ce8;
              }
              plVar8 = *(long **)(param_1 + 0x10);
              lVar4 = 0;
              if (plVar8 != (long *)0x0) {
                if (*(int *)(param_1 + 0x18) == (int)plVar8[1]) {
                  lVar4 = (**(code **)(*plVar8 + 0x10))();
                }
                else {
                  *(undefined8 *)(param_1 + 0x10) = 0;
                  lVar4 = 0;
                  *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
                }
              }
              FUN_009b5b60(uVar5,lVar4 + 0x28,lVar3 + 0x30,uVar12,uVar2);
              if (*(char *)(param_1 + 0x38) == '\0') {
                return;
              }
              plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00a7dad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar8 + 0x20))(0);
              return;
            }
            goto LAB_00a7d978;
          }
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        *(undefined4 *)(param_1 + 0x28) = uVar12;
LAB_00a7d978:
        plVar8 = *(long **)(param_1 + 0x10);
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar8[1]) {
            uVar5 = (**(code **)(*plVar8 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x10) = 0;
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar5);
        return;
      }
    }
  }
  return;
}




void FUN_00a7dadc(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x18) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_00a7db80;
      plVar1 = *(long **)(param_1 + 0x10);
      uVar3 = 0;
      if (plVar1 != (long *)0x0) {
        if (*(int *)(param_1 + 0x18) == (int)plVar1[1]) {
          uVar3 = (**(code **)(*plVar1 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x10) = 0;
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
        }
      }
      FUN_019888f4(uVar3);
      uVar4 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar4;
  }
LAB_00a7db80:
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x28) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return;
      }
      plVar1 = *(long **)(param_1 + 0x20);
      uVar3 = 0;
      if (plVar1 != (long *)0x0) {
        if (*(int *)(param_1 + 0x28) == (int)plVar1[1]) {
          uVar3 = (**(code **)(*plVar1 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x20) = 0;
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x28) = DAT_03214ce8;
        }
      }
      FUN_019888f4(uVar3);
      uVar4 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x28) = uVar4;
  }
  return;
}




void FUN_00a7dc20(void)

{
  return;
}




void FUN_00a7dc28(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027ce158;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_00a7dc44(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00a7dc4c(undefined4 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x18) = 1;
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}




void FUN_00a7dc5c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  float local_70;
  float fStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_2 + 0x2f6) >> 1 & 1) != 0) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (*(code **)(param_1 + 8) != (code *)0x0) {
        (**(code **)(param_1 + 8))(param_3,param_2,param_1 + 0x10,param_1 + 0x14);
      }
    }
    else {
      FUN_00d55794(param_2,auStack_48,0);
      FUN_00d5b4e0(param_2,auStack_58,auStack_68,&fStack_6c,&local_70);
      if (fStack_6c <= local_70) {
        fStack_6c = local_70;
      }
      *(float *)(param_1 + 0x10) = fStack_6c;
    }
    if (0.1 < *(float *)(param_1 + 0x10)) {
      FUN_00da2cc4(param_2);
      lVar2 = FUN_01985d44(param_2,DAT_0312edb0);
      if (lVar2 != 0) {
        FUN_009b662c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00a7dd54(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




void FUN_00a7dd64(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  iVar1 = FUN_00d51964(param_2);
  if (iVar1 != 0) {
    uVar4 = 0;
    do {
      lVar3 = FUN_00d51954(param_2,uVar4);
      if (lVar3 != 0) {
        FUN_00a7dc5c(param_1 + 0x18,lVar3,param_2);
      }
      uVar4 = uVar4 + 1;
      uVar2 = FUN_00d51964(param_2);
    } while (uVar4 < uVar2);
  }
  return;
}




void FUN_00a7ddd4(undefined4 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  return;
}




void FUN_00a7ddec(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00a7de10(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  uVar1 = DAT_03214ce8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0x3f80000000000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 9) = uVar1;
  param_1[5] = 0x3f800000;
  param_1[4] = 0x3f8000003f800000;
  return;
}




void FUN_00a7de48(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00a7de50(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00a7de58(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x10) = param_1;
  *(undefined4 *)(param_4 + 0x14) = param_2;
  *(undefined4 *)(param_4 + 0x18) = param_3;
  *(undefined4 *)(param_4 + 0x1c) = 0x3f800000;
  return;
}




void FUN_00a7de6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  param_4[3] = 0x3f800000;
  return;
}




void FUN_00a7de80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}




void FUN_00a7de8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x20) = param_1;
  *(undefined4 *)(param_4 + 0x24) = param_2;
  *(undefined4 *)(param_4 + 0x28) = param_3;
  *(undefined4 *)(param_4 + 0x2c) = 0x3f800000;
  return;
}




void FUN_00a7dea0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = param_1;
  *(undefined4 *)(param_2 + 0x24) = param_1;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
  return;
}




void FUN_00a7deb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_2,&local_40);
  }
  lVar4 = FUN_01985d44(param_3,DAT_0312edc0);
  uVar3 = DAT_03214ce8;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x30);
    *(long **)(param_1 + 0x40) = (long *)(lVar4 + 0x28);
    *(int *)(param_1 + 0x48) = iVar1;
    if (iVar1 == *(int *)(lVar4 + 0x30)) {
      lVar4 = (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))();
      if (lVar4 != 0) {
        plVar5 = *(long **)(param_1 + 0x40);
        uVar6 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar5[1]) {
            uVar6 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x40) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
          }
        }
        FUN_009b6838(uVar6,local_40,param_1);
      }
      goto LAB_00a7dfb4;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar3;
LAB_00a7dfb4:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a7dfdc(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x40);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x40) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
          }
        }
        FUN_01985ca8(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return;
}

