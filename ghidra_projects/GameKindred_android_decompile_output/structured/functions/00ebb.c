// functions/00ebb — 5 functions
#include "libGameKindred.h"




void FUN_00ebb0f0(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = (*(code *)*param_4)(param_2,param_1);
  uVar5 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
    if ((uVar5 & 1) == 0) goto LAB_00ebb578;
    FUN_008fcdb8(local_b8,param_2);
    lVar1 = param_2 + 0x18;
    FUN_008fcdb8(local_a0,lVar1);
    lVar2 = param_2 + 0x30;
    FUN_008fcdb8(local_88,lVar2);
    local_70 = *(undefined8 *)(param_2 + 0x48);
    FUN_008fce60(param_2,param_3);
    FUN_008fce60(lVar1,param_3 + 0x18);
    FUN_008fce60(lVar2,param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    FUN_008fce60(param_3,local_b8);
    FUN_008fce60(param_3 + 0x18,local_a0);
    FUN_008fce60(param_3 + 0x30,local_88);
    *(undefined8 *)(param_3 + 0x48) = local_70;
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    uVar4 = (*(code *)*param_4)(param_2,param_1);
    if ((uVar4 & 1) != 0) {
      FUN_008fcdb8(local_b8,param_1);
      FUN_008fcdb8(local_a0,param_1 + 0x18);
      FUN_008fcdb8(local_88,param_1 + 0x30);
      local_70 = *(undefined8 *)(param_1 + 0x48);
      FUN_008fce60(param_1,param_2);
      FUN_008fce60(param_1 + 0x18,lVar1);
      FUN_008fce60(param_1 + 0x30,lVar2);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      FUN_008fce60(param_2,local_b8);
      FUN_008fce60(lVar1,local_a0);
      FUN_008fce60(lVar2,local_88);
      *(undefined8 *)(param_2 + 0x48) = local_70;
      goto LAB_00ebb53c;
    }
  }
  else if ((uVar5 & 1) == 0) {
    FUN_008fcdb8(local_b8,param_1);
    FUN_008fcdb8(local_a0,param_1 + 0x18);
    FUN_008fcdb8(local_88,param_1 + 0x30);
    local_70 = *(undefined8 *)(param_1 + 0x48);
    FUN_008fce60(param_1,param_2);
    lVar1 = param_2 + 0x18;
    FUN_008fce60(param_1 + 0x18,lVar1);
    lVar2 = param_2 + 0x30;
    FUN_008fce60(param_1 + 0x30,lVar2);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    FUN_008fce60(param_2,local_b8);
    FUN_008fce60(lVar1,local_a0);
    FUN_008fce60(lVar2,local_88);
    *(undefined8 *)(param_2 + 0x48) = local_70;
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    uVar4 = (*(code *)*param_4)(param_3,param_2);
    if ((uVar4 & 1) != 0) {
      FUN_008fcdb8(local_b8,param_2);
      FUN_008fcdb8(local_a0,lVar1);
      FUN_008fcdb8(local_88,lVar2);
      local_70 = *(undefined8 *)(param_2 + 0x48);
      FUN_008fce60(param_2,param_3);
      FUN_008fce60(lVar1,param_3 + 0x18);
      FUN_008fce60(lVar2,param_3 + 0x30);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
      FUN_008fce60(param_3,local_b8);
      FUN_008fce60(param_3 + 0x18,local_a0);
      FUN_008fce60(param_3 + 0x30,local_88);
      *(undefined8 *)(param_3 + 0x48) = local_70;
LAB_00ebb53c:
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      uVar6 = 2;
      goto LAB_00ebb578;
    }
  }
  else {
    FUN_008fcdb8(local_b8,param_1);
    FUN_008fcdb8(local_a0,param_1 + 0x18);
    FUN_008fcdb8(local_88,param_1 + 0x30);
    local_70 = *(undefined8 *)(param_1 + 0x48);
    FUN_008fce60(param_1,param_3);
    FUN_008fce60(param_1 + 0x18,param_3 + 0x18);
    FUN_008fce60(param_1 + 0x30,param_3 + 0x30);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    FUN_008fce60(param_3,local_b8);
    FUN_008fce60(param_3 + 0x18,local_a0);
    FUN_008fce60(param_3 + 0x30,local_88);
    *(undefined8 *)(param_3 + 0x48) = local_70;
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  uVar6 = 1;
LAB_00ebb578:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




int FUN_00ebb5ac(long param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar6 = FUN_00ebb0f0();
  uVar7 = (*(code *)*param_5)(param_4,param_3);
  if ((uVar7 & 1) != 0) {
    FUN_008fcdb8(local_b8,param_3);
    lVar1 = param_3 + 0x18;
    FUN_008fcdb8(local_a0,lVar1);
    lVar2 = param_3 + 0x30;
    FUN_008fcdb8(local_88,lVar2);
    local_70 = *(undefined8 *)(param_3 + 0x48);
    FUN_008fce60(param_3,param_4);
    FUN_008fce60(lVar1,param_4 + 0x18);
    FUN_008fce60(lVar2,param_4 + 0x30);
    *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_4 + 0x48);
    FUN_008fce60(param_4,local_b8);
    FUN_008fce60(param_4 + 0x18,local_a0);
    FUN_008fce60(param_4 + 0x30,local_88);
    *(undefined8 *)(param_4 + 0x48) = local_70;
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    uVar7 = (*(code *)*param_5)(param_3,param_2);
    if ((uVar7 & 1) == 0) {
      iVar6 = iVar6 + 1;
    }
    else {
      FUN_008fcdb8(local_b8,param_2);
      lVar3 = param_2 + 0x18;
      FUN_008fcdb8(local_a0,lVar3);
      lVar4 = param_2 + 0x30;
      FUN_008fcdb8(local_88,lVar4);
      local_70 = *(undefined8 *)(param_2 + 0x48);
      FUN_008fce60(param_2,param_3);
      FUN_008fce60(lVar3,lVar1);
      FUN_008fce60(lVar4,lVar2);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
      FUN_008fce60(param_3,local_b8);
      FUN_008fce60(lVar1,local_a0);
      FUN_008fce60(lVar2,local_88);
      *(undefined8 *)(param_3 + 0x48) = local_70;
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      uVar7 = (*(code *)*param_5)(param_2,param_1);
      if ((uVar7 & 1) == 0) {
        iVar6 = iVar6 + 2;
      }
      else {
        FUN_008fcdb8(local_b8,param_1);
        FUN_008fcdb8(local_a0,param_1 + 0x18);
        FUN_008fcdb8(local_88,param_1 + 0x30);
        local_70 = *(undefined8 *)(param_1 + 0x48);
        FUN_008fce60(param_1,param_2);
        FUN_008fce60(param_1 + 0x18,lVar3);
        FUN_008fce60(param_1 + 0x30,lVar4);
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
        FUN_008fce60(param_2,local_b8);
        FUN_008fce60(lVar3,local_a0);
        FUN_008fce60(lVar4,local_88);
        *(undefined8 *)(param_2 + 0x48) = local_70;
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if ((local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
        iVar6 = iVar6 + 3;
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00ebb900(long param_1,long param_2,long param_3,long param_4,long param_5,
                undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar6 = FUN_00ebb5ac();
  uVar7 = (*(code *)*param_6)(param_5,param_4);
  if ((uVar7 & 1) != 0) {
    FUN_008fcdb8(local_b8,param_4);
    lVar1 = param_4 + 0x18;
    FUN_008fcdb8(local_a0,lVar1);
    lVar2 = param_4 + 0x30;
    FUN_008fcdb8(local_88,lVar2);
    local_70 = *(undefined8 *)(param_4 + 0x48);
    FUN_008fce60(param_4,param_5);
    FUN_008fce60(lVar1,param_5 + 0x18);
    FUN_008fce60(lVar2,param_5 + 0x30);
    *(undefined8 *)(param_4 + 0x48) = *(undefined8 *)(param_5 + 0x48);
    FUN_008fce60(param_5,local_b8);
    FUN_008fce60(param_5 + 0x18,local_a0);
    FUN_008fce60(param_5 + 0x30,local_88);
    *(undefined8 *)(param_5 + 0x48) = local_70;
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    uVar7 = (*(code *)*param_6)(param_4,param_3);
    if ((uVar7 & 1) == 0) {
      iVar6 = iVar6 + 1;
    }
    else {
      FUN_008fcdb8(local_b8,param_3);
      lVar3 = param_3 + 0x18;
      FUN_008fcdb8(local_a0,lVar3);
      lVar4 = param_3 + 0x30;
      FUN_008fcdb8(local_88,lVar4);
      local_70 = *(undefined8 *)(param_3 + 0x48);
      FUN_008fce60(param_3,param_4);
      FUN_008fce60(lVar3,lVar1);
      FUN_008fce60(lVar4,lVar2);
      *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_4 + 0x48);
      FUN_008fce60(param_4,local_b8);
      FUN_008fce60(lVar1,local_a0);
      FUN_008fce60(lVar2,local_88);
      *(undefined8 *)(param_4 + 0x48) = local_70;
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      uVar7 = (*(code *)*param_6)(param_3,param_2);
      if ((uVar7 & 1) == 0) {
        iVar6 = iVar6 + 2;
      }
      else {
        FUN_008fcdb8(local_b8,param_2);
        lVar1 = param_2 + 0x18;
        FUN_008fcdb8(local_a0,lVar1);
        lVar2 = param_2 + 0x30;
        FUN_008fcdb8(local_88,lVar2);
        local_70 = *(undefined8 *)(param_2 + 0x48);
        FUN_008fce60(param_2,param_3);
        FUN_008fce60(lVar1,lVar3);
        FUN_008fce60(lVar2,lVar4);
        *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
        FUN_008fce60(param_3,local_b8);
        FUN_008fce60(lVar3,local_a0);
        FUN_008fce60(lVar4,local_88);
        *(undefined8 *)(param_3 + 0x48) = local_70;
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if ((local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
        uVar7 = (*(code *)*param_6)(param_2,param_1);
        if ((uVar7 & 1) == 0) {
          iVar6 = iVar6 + 3;
        }
        else {
          FUN_008fcdb8(local_b8,param_1);
          FUN_008fcdb8(local_a0,param_1 + 0x18);
          FUN_008fcdb8(local_88,param_1 + 0x30);
          local_70 = *(undefined8 *)(param_1 + 0x48);
          FUN_008fce60(param_1,param_2);
          FUN_008fce60(param_1 + 0x18,lVar1);
          FUN_008fce60(param_1 + 0x30,lVar2);
          *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
          FUN_008fce60(param_2,local_b8);
          FUN_008fce60(lVar1,local_a0);
          FUN_008fce60(lVar2,local_88);
          *(undefined8 *)(param_2 + 0x48) = local_70;
          if ((local_88[0] & 1) != 0) {
            operator_delete(local_78);
          }
          if ((local_a0[0] & 1) != 0) {
            operator_delete(local_90);
          }
          if ((local_b8[0] & 1) != 0) {
            operator_delete(local_a8);
          }
          iVar6 = iVar6 + 4;
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ebbd50(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00ebb0f0(param_1,param_1 + 0x50,param_1 + 0xa0,param_3);
  if (param_1 + 0xf0 != param_2) {
    lVar5 = 0;
    lVar6 = param_1 + 0xf0;
    lVar4 = param_1 + 0xa0;
    do {
      lVar3 = lVar6;
      uVar2 = (*(code *)*param_3)(lVar3,lVar4);
      if ((uVar2 & 1) != 0) {
        FUN_008fcdb8(local_b8,lVar3);
        FUN_008fcdb8(local_a0,lVar3 + 0x18);
        FUN_008fcdb8(local_88,lVar3 + 0x30);
        local_70 = *(undefined8 *)(lVar3 + 0x48);
        lVar6 = lVar5;
        do {
          lVar4 = param_1 + lVar6;
          FUN_008fce60(lVar4 + 0xf0,lVar4 + 0xa0);
          FUN_008fce60(lVar4 + 0x108,lVar4 + 0xb8);
          FUN_008fce60(lVar4 + 0x120,lVar4 + 0xd0);
          *(undefined8 *)(lVar4 + 0x138) = *(undefined8 *)(lVar4 + 0xe8);
          if (lVar6 == -0xa0) break;
          uVar2 = (*(code *)*param_3)(local_b8,lVar4 + 0x50);
          lVar6 = lVar6 + -0x50;
        } while ((uVar2 & 1) != 0);
        FUN_008fce60(lVar4 + 0xa0,local_b8);
        FUN_008fce60(lVar4 + 0xb8,local_a0);
        FUN_008fce60(lVar4 + 0xd0,local_88);
        *(undefined8 *)(lVar4 + 0xe8) = local_70;
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if ((local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
      }
      lVar5 = lVar5 + 0x50;
      lVar6 = lVar3 + 0x50;
      lVar4 = lVar3;
    } while (lVar3 + 0x50 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ebbf18(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar4 = param_2 - param_1 >> 4;
  if ((ulong)(lVar4 * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00ebbf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01bf0760 + *(int *)(&DAT_01bf0760 + lVar4 * 0x3333333333333334)))(1);
    return;
  }
  FUN_00ebb0f0(param_1,param_1 + 0x50,param_1 + 0xa0,param_3);
  if (param_1 + 0xf0 == param_2) {
    bVar2 = true;
  }
  else {
    lVar4 = 0;
    iVar7 = 0;
    lVar8 = param_1 + 0xf0;
    lVar6 = param_1 + 0xa0;
    do {
      lVar5 = lVar8;
      uVar3 = (*(code *)*param_3)(lVar5,lVar6);
      if ((uVar3 & 1) != 0) {
        FUN_008fcdb8(local_b8,lVar5);
        FUN_008fcdb8(local_a0,lVar5 + 0x18);
        FUN_008fcdb8(local_88,lVar5 + 0x30);
        local_70 = *(undefined8 *)(lVar5 + 0x48);
        lVar8 = lVar4;
        do {
          lVar6 = param_1 + lVar8;
          FUN_008fce60(lVar6 + 0xf0,lVar6 + 0xa0);
          FUN_008fce60(lVar6 + 0x108,lVar6 + 0xb8);
          FUN_008fce60(lVar6 + 0x120,lVar6 + 0xd0);
          *(undefined8 *)(lVar6 + 0x138) = *(undefined8 *)(lVar6 + 0xe8);
          if (lVar8 == -0xa0) break;
          uVar3 = (*(code *)*param_3)(local_b8,lVar6 + 0x50);
          lVar8 = lVar8 + -0x50;
        } while ((uVar3 & 1) != 0);
        FUN_008fce60(lVar6 + 0xa0,local_b8);
        FUN_008fce60(lVar6 + 0xb8,local_a0);
        FUN_008fce60(lVar6 + 0xd0,local_88);
        *(undefined8 *)(lVar6 + 0xe8) = local_70;
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if ((local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
        iVar7 = iVar7 + 1;
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
        if (iVar7 == 8) {
          bVar2 = lVar5 + 0x50 == param_2;
          goto LAB_00ebc248;
        }
      }
      lVar4 = lVar4 + 0x50;
      lVar8 = lVar5 + 0x50;
      lVar6 = lVar5;
    } while (lVar5 + 0x50 != param_2);
    bVar2 = true;
  }
LAB_00ebc248:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}

