// functions/00d67 — 67 functions
#include "libGameKindred.h"




void FUN_00d67020(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  
  FUN_00d67518(param_1,0,1);
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  FUN_00d673a4(param_1,*(undefined8 *)(param_1 + 0x80));
  FUN_00d67440(param_1,PTR_s_onEndName_02bed518);
  if ((*(byte *)(param_1 + 0x340) & 0xf) != 0) {
    uVar3 = 0;
    do {
      FUN_00d5b038(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (*(uint *)(param_1 + 0x340) & 0xf));
    *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xfffffff0;
  }
  return;
}




void FUN_00d670d4(long param_1)

{
  if (1 < *(int *)(param_1 + 0x310) - 1U) {
    FUN_00d67120(param_1);
    *(undefined4 *)(param_1 + 0x310) = 1;
    FUN_00d67020(param_1);
    *(undefined4 *)(param_1 + 0x310) = 2;
  }
  return;
}




void FUN_00d67120(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  FUN_00d673a4(param_1,*(undefined8 *)(param_1 + 0x78));
  FUN_00d67440(param_1,PTR_s_onCancelName_02bed510);
  return;
}




void FUN_00d6718c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  FUN_00d673a4(param_1,*(undefined8 *)(param_1 + 0x88));
  FUN_00d67440(param_1,PTR_s_onTimeoutName_02bed530);
  return;
}




void FUN_00d671f8(long param_1,int param_2)

{
  FUN_00d67218(param_1,(int)(float)(int)((uint)*(ushort *)(param_1 + 0x344) - param_2),1);
  return;
}




void FUN_00d67218(long param_1,int param_2,uint param_3)

{
  FUN_00d67518(param_1,param_2,param_3 & 1);
  if ((param_2 == 0) && (*(char *)(*(long *)(param_1 + 0x40) + 0x2e) != '\0')) {
    FUN_00d67020(param_1);
    *(undefined4 *)(param_1 + 0x310) = 2;
  }
  return;
}




void FUN_00d67260(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x344) & 0xffff;
  if (uVar1 < *(uint *)(param_1 + 0x344) >> 0x10) {
    FUN_00d67518(param_1,uVar1 + 1,1);
    return;
  }
  return;
}




void FUN_00d67280(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,param_1);
      plVar3 = plVar6 + 1;
      plVar6 = (long *)0x0;
      if (*plVar3 != 0) {
        plVar6 = (long *)(*plVar3 + -8);
      }
    }
  }
  FUN_00d673a4(param_1,*(undefined8 *)(param_1 + 0x68));
  FUN_00d67440(param_1,PTR_s_onApplyName_02bed4f8);
  FUN_00d67518(param_1,*(undefined2 *)(param_1 + 0x348),1);
  lVar2 = FUN_00d7e3d0();
  uVar5 = **(undefined8 **)(param_1 + 0x40);
  uVar1 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
  plVar3 = (long *)(lVar2 + 0x10);
  plVar4 = (long *)*plVar3;
  plVar6 = plVar3;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= 0x97bcfebd) {
        plVar6 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < 0x97bcfebd];
    } while (plVar4 != (long *)0x0);
    if (((plVar6 != plVar3) && (*(uint *)(plVar6 + 4) < 0x97bcfebe)) && ((int)plVar6[5] != 0)) {
      lVar2 = 0;
      uVar7 = 0;
      do {
        (*(code *)((undefined8 *)(plVar6[6] + lVar2))[1])
                  (*(undefined8 *)(plVar6[6] + lVar2),uVar1,uVar5);
        uVar7 = uVar7 + 1;
        lVar2 = lVar2 + 0x10;
      } while (uVar7 < *(uint *)(plVar6 + 5));
    }
  }
  return;
}




void FUN_00d673a4(long param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_2 != (long *)0x0) {
    *(long **)(param_1 + 0x48) = param_2;
    do {
      bVar1 = (**(code **)(*param_2 + 0x18))(param_2);
      plVar3 = *(long **)(param_1 + 0x48);
      FUN_01988c78();
      (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
      uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
      param_2 = *(long **)(param_1 + 0x48);
      if ((uVar2 & 1) != 0) {
        param_2 = (long *)(**(code **)(*param_2 + 0x28))(param_2);
        *(long **)(param_1 + 0x48) = param_2;
      }
    } while ((bVar1 & param_2 != (long *)0x0) != 0);
  }
  return;
}




void FUN_00d67440(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_1 + 0xa0,param_2,&local_4c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar5 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_1;
    uVar6 = *(uint *)(param_1 + 0x160);
    if (uVar6 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar4 * 4) == local_4c) {
          (**(code **)(param_1 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar6 = *(uint *)(param_1 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d67518(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = *(uint *)(param_1 + 0x344);
  fVar3 = (float)(uVar2 >> 0x10);
  if (param_2 <= uVar2 >> 0x10) {
    fVar3 = (float)param_2;
  }
  uVar1 = (int)fVar3 & 0xffff;
  *(short *)(param_1 + 0x344) = (short)(int)fVar3;
  if ((uVar1 != (uVar2 & 0xffff)) && ((param_3 & 1) != 0)) {
    FUN_00d67a4c(param_1,uVar1 - (uVar2 & 0xffff));
    return;
  }
  return;
}




undefined8 FUN_00d67558(long param_1)

{
  return **(undefined8 **)(param_1 + 0x40);
}




void FUN_00d67564(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(undefined4 *)(param_4 + 0x32c) = param_1;
  uVar3 = *(uint *)(param_4 + 0x344) >> 0x10;
  if (param_6 <= uVar3) {
    uVar3 = param_6;
  }
  puVar1 = (ulong *)(param_4 + 0x344);
  *(short *)(param_4 + 0x348) = (short)uVar3;
  FUN_00d677b4(param_2,param_3,param_4,param_7,param_8);
  *(uint *)(param_4 + 0x34c) = *(uint *)(param_4 + 0x34c) | 0x8000000;
  FUN_00d67934(param_4,PTR_s_onBeforeReApplyName_02bed500,param_5);
  if ((*(byte *)(param_4 + 0x34f) >> 3 & 1) != 0) {
    local_78 = (undefined4)param_2;
    uStack_74 = (undefined4)param_3;
    local_80 = param_1;
    local_7c = param_6;
    local_70 = param_7;
    uStack_6c = param_8;
    if (*(long *)(param_4 + 0x50) != 0) {
      plVar9 = (long *)(*(long *)(param_4 + 0x50) + -8);
      while (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9,param_4,&local_80);
        plVar6 = plVar9 + 1;
        plVar9 = (long *)0x0;
        if (*plVar6 != 0) {
          plVar9 = (long *)(*plVar6 + -8);
        }
      }
    }
    FUN_00d673a4(param_4,*(undefined8 *)(param_4 + 0x70));
    FUN_00d67518(param_4,(uint)*(ushort *)(param_4 + 0x348) + (uint)*(ushort *)puVar1,1);
    FUN_00d67934(param_4,PTR_s_onAfterReApplyName_02bed508,param_5);
  }
  *puVar1 = *puVar1 & 0xffff0000ffffffff;
  *(undefined4 *)(param_4 + 0x32c) = 0xbf800000;
  FUN_00d677b4(0,0,param_4,0,0);
  *(uint *)(param_4 + 0x34c) = *(uint *)(param_4 + 0x34c) & 0xf7ffffff;
  lVar5 = FUN_00d7e3d0();
  uVar8 = **(undefined8 **)(param_4 + 0x40);
  uVar2 = *(undefined4 *)(*(long *)(*(long *)(param_4 + 0x10) + 0x10) + 0x260);
  plVar6 = (long *)(lVar5 + 0x10);
  plVar7 = (long *)*plVar6;
  plVar9 = plVar6;
  if (plVar7 != (long *)0x0) {
    do {
      if (*(uint *)(plVar7 + 4) >= 0x97bcfebd) {
        plVar9 = plVar7;
      }
      plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < 0x97bcfebd];
    } while (plVar7 != (long *)0x0);
    if (((plVar9 != plVar6) && (*(uint *)(plVar9 + 4) < 0x97bcfebe)) && ((int)plVar9[5] != 0)) {
      lVar5 = 0;
      uVar10 = 0;
      do {
        (*(code *)((undefined8 *)(plVar9[6] + lVar5))[1])
                  (*(undefined8 *)(plVar9[6] + lVar5),uVar2,uVar8);
        uVar10 = uVar10 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar10 < *(uint *)(plVar9 + 5));
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d67794(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x344) >> 0x10;
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  *(short *)(param_1 + 0x348) = (short)uVar1;
  return;
}




void FUN_00d677ac(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x32c) = param_1;
  return;
}




void FUN_00d677b4(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_3 + 0xa0,PTR_s_onBeforeReApplyName_02bed500,auStack_5c);
  if ((((uVar4 & 1) != 0) ||
      (uVar4 = FUN_00d67c68(param_3 + 0xa0,PTR_s_onAfterReApplyName_02bed508,auStack_5c),
      (uVar4 & 1) != 0)) || (*(long *)(param_3 + 0x70) != 0)) {
    lVar1 = param_3 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_3 + 0x168))
                      (lVar1,PTR_s___REAPPLYING_VAR1_FLOAT___02bed700);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_1;
    uVar3 = (*(code *)**(undefined8 **)(param_3 + 0x168))
                      (lVar1,PTR_s___REAPPLYING_VAR2_FLOAT___02bed708);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_2;
    uVar3 = (*(code *)**(undefined8 **)(param_3 + 0x168))
                      (lVar1,PTR_s___REAPPLYING_VAR1_INT___02bed710);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_3 + 0x168))
                      (lVar1,PTR_s___REAPPLYING_VAR2_INT___02bed718);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_5;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d67920(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x34c) =
       *(uint *)(param_1 + 0x34c) & 0xf0000000 |
       *(uint *)(param_1 + 0x34c) & 0x7ffffff | (param_2 & 1) << 0x1b;
  return;
}




void FUN_00d67934(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_1 + 0xa0,param_2,&local_4c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar5 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_1;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___BESTOWER___02bed640);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_3;
    uVar7 = *(uint *)(param_1 + 0x160);
    if (uVar7 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar4 * 4) == local_4c) {
          (**(code **)(param_1 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar7 = *(uint *)(param_1 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




byte FUN_00d67a40(long param_1)

{
  return *(byte *)(param_1 + 0x34f) >> 3 & 1;
}




void FUN_00d67a4c(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  
  *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) & 0xf8000000 | param_2 & 0x7ffffff;
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  FUN_00d673a4(param_1,*(undefined8 *)(param_1 + 0x98));
  FUN_00d67440(param_1,PTR_s_onStacksChangedName_02bed528);
  *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) & 0xf8000000;
  return;
}




void FUN_00d67ae4(long param_1)

{
  *(float *)(param_1 + 800) = *(float *)(param_1 + 0x328) + *(float *)(param_1 + 800);
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x100;
  return;
}




void FUN_00d67b04(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x328) = param_1;
  return;
}




undefined4 FUN_00d67b0c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x328);
}




undefined8 FUN_00d67b14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}




undefined4 FUN_00d67b1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x314);
}




undefined2 FUN_00d67b24(long param_1)

{
  return *(undefined2 *)(param_1 + 0x348);
}




undefined4 FUN_00d67b2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x32c);
}




undefined4 FUN_00d67b34(long param_1)

{
  return *(undefined4 *)(param_1 + 0x318);
}




undefined4 FUN_00d67b3c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x31c);
}




undefined4 FUN_00d67b44(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if ((*(byte *)(param_1 + 0x340) & 0x10) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}




float FUN_00d67b5c(long param_1)

{
  return *(float *)(param_1 + 0x31c) - *(float *)(param_1 + 0x318);
}




undefined1 FUN_00d67b6c(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x29);
}




undefined8 FUN_00d67b78(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
}




undefined4 FUN_00d67b84(long param_1)

{
  return *(undefined4 *)(param_1 + 0x308);
}




void FUN_00d67b8c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    lVar1 = FUN_01985d44(param_1,DAT_031a94d0);
    *(long *)(param_1 + 0x38) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_00d5ee28(lVar1,param_2);
  return;
}




void FUN_00d67bdc(long param_1)

{
  FUN_00d5eebc(*(undefined8 *)(param_1 + 0x38));
  return;
}




void FUN_00d67bf4(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00d5ef64();
    return;
  }
  return;
}




void FUN_00d67c04(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_019888f4();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}




void FUN_00d67c30(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x346) = param_2;
  if (param_2 < *(ushort *)(param_1 + 0x344)) {
    FUN_00d67218(param_1,param_2,1);
    return;
  }
  return;
}




int FUN_00d67c54(long param_1)

{
  return (*(int *)(param_1 + 0x34c) << 5) >> 5;
}




long FUN_00d67c60(long param_1)

{
  return param_1 + 0x68;
}




undefined8 FUN_00d67c68(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_00e6a474(param_2);
  iVar2 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  *param_3 = iVar2;
  if (*(uint *)(param_1 + 0xc0) != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(param_1 + (ulong)uVar3 * 4) == iVar2) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xc0));
  }
  return 0;
}




undefined4 FUN_00d67ce4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x310);
}




undefined4 FUN_00d67cec(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x30);
}




undefined8 FUN_00d67cf8(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
}




void FUN_00d67d04(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(float *)(param_2 + 0x318) = param_1;
  if (*(float *)(param_2 + 0x31c) < param_1) {
    *(float *)(param_2 + 0x31c) = param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x340);
  uVar1 = uVar2 >> 4 | 1;
  if (0.0 <= param_1) {
    uVar1 = uVar2 >> 4 & 0xfffe;
  }
  *(uint *)(param_2 + 0x340) = uVar2 & 0xfff00000 | uVar2 & 0xf | (uVar1 & 0xffff) << 4;
  return;
}




void FUN_00d67d3c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x31c) = param_1;
  return;
}




undefined1 FUN_00d67d44(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x20);
}




undefined1 FUN_00d67d50(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x21);
}




undefined1 FUN_00d67d5c(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x22);
}




undefined1 FUN_00d67d68(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x23);
}




undefined1 FUN_00d67d74(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x24);
}




undefined1 FUN_00d67d80(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x25);
}




undefined1 FUN_00d67d8c(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x26);
}




undefined1 FUN_00d67d98(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x27);
}




undefined1 FUN_00d67da4(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x28);
}




undefined1 FUN_00d67db0(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x29);
}




undefined4 FUN_00d67dbc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x324);
}




void FUN_00d67dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d67dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x330))();
  return;
}




void FUN_00d67dcc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x330) = param_2;
  return;
}




long FUN_00d67dd4(long param_1)

{
  return param_1 + 0x68;
}




void FUN_00d67ddc(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_3,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d67e48(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))(plVar2,param_1,param_3,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d67eb4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d67f18(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x58))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d67f7c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d67fd0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x88))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}

