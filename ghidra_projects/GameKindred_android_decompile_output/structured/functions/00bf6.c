// functions/00bf6 — 51 functions
#include "libGameKindred.h"




void FUN_00bf6038(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027f23c0;
  param_1[2] = &PTR_FUN_027f23f0;
  param_1[5] = &PTR_FUN_027f2788;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  lVar2 = FUN_00aa4e1c();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
  puVar1 = *(undefined8 **)(lVar2 + 0x20);
  do {
    puVar3 = puVar1;
    if (lVar4 == 0) goto LAB_00bf60ac;
    lVar4 = lVar4 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480((uint *)(lVar2 + 0x18),puVar3);
LAB_00bf60ac:
  lVar2 = FUN_00aa4e1c();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
  puVar1 = *(undefined8 **)(lVar2 + 0x30);
  do {
    puVar3 = puVar1;
    if (lVar4 == 0) goto LAB_00bf60d8;
    lVar4 = lVar4 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480((uint *)(lVar2 + 0x28),puVar3);
LAB_00bf60d8:
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027f27c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf6128(long param_1)

{
  FUN_00bf6038(param_1 + -0x10);
  return;
}




void FUN_00bf6130(long param_1)

{
  FUN_00bf6038(param_1 + -0x28);
  return;
}




void FUN_00bf6138(void *param_1)

{
  FUN_00bf6038();
  operator_delete(param_1);
  return;
}




void FUN_00bf615c(long param_1)

{
  FUN_00bf6038((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf6184(long param_1)

{
  FUN_00bf6038((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




undefined8 FUN_00bf61ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bf61b4(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_00bf61bc(long param_1)

{
  FUN_00c70378(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf61c4(void)

{
  FUN_00e6ce7c("INVENTORY_SOCIAL_PINGS_TAB_TITLE",0);
  return;
}




void FUN_00bf61d4(void)

{
  FUN_00e6ce7c("INVENTORY_SOCIAL_PINGS_TAB_TITLE",0);
  return;
}




void FUN_00bf61e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f27c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf6228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f27c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf626c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00aa4e28(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        lVar4 = lVar4 + -8;
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00bf62d8(long param_1)

{
  FUN_00c70378(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf62e0(code *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  code *pcVar4;
  code *local_68;
  code *pcStack_60;
  code *local_58;
  code *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_027f2be0;
  pvVar2 = operator_new(0xd58);
  FUN_00c72230();
  *(void **)(param_1 + 8) = pvVar2;
  *(code **)((long)pvVar2 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &PTR_FUN_027f27e0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_027f2810;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_027f2ba8;
  pcVar4 = param_1 + 0x30;
  *(undefined8 *)pcVar4 = 0;
  lVar3 = FUN_00aa5f18();
  FUN_00bf6650(pcVar4,lVar3 + 0x440);
  FUN_00c72668(*(undefined8 *)(param_1 + 8),pcVar4);
  lVar3 = *(long *)(param_1 + 8);
  local_40 = FUN_00f048a4("EVENT_ACTIVATE_CHARM");
  local_68 = FUN_00bf63f8;
  local_50 = (code *)0x0;
  uStack_48 = 0;
  local_58 = (code *)0x0;
  pcStack_60 = param_1;
  FUN_009693a0(lVar3 + 8,&local_68);
  lVar3 = FUN_00aa5f18();
  pcStack_60 = (code *)0x0;
  local_50 = FUN_00bf66bc;
  local_68 = param_1;
  local_58 = param_1;
  FUN_009e4694(lVar3 + 0x18,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf63f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00bf6558(param_1,param_4);
  return;
}




void FUN_00bf6400(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027f27e0;
  param_1[2] = &PTR_FUN_027f2810;
  param_1[5] = &PTR_FUN_027f2ba8;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  lVar2 = FUN_00aa5f18();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
  puVar1 = *(undefined8 **)(lVar2 + 0x20);
  do {
    puVar3 = puVar1;
    if (lVar4 == 0) goto LAB_00bf6474;
    lVar4 = lVar4 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480((uint *)(lVar2 + 0x18),puVar3);
LAB_00bf6474:
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027f2be0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf64c4(long param_1)

{
  FUN_00bf6400(param_1 + -0x10);
  return;
}




void FUN_00bf64cc(long param_1)

{
  FUN_00bf6400(param_1 + -0x28);
  return;
}




void FUN_00bf64d4(void *param_1)

{
  FUN_00bf6400();
  operator_delete(param_1);
  return;
}




void FUN_00bf64f8(long param_1)

{
  FUN_00bf6400((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf6520(long param_1)

{
  FUN_00bf6400((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




undefined8 FUN_00bf6548(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bf6550(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_00bf6558(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00f04924(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_00f04924(param_2);
    uVar3 = FUN_00aa5f18();
    FUN_00aa559c(uVar3,uVar2);
    return;
  }
  return;
}




void FUN_00bf65a0(long param_1)

{
  FUN_00c72460(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf65a8(void)

{
  FUN_00e6ce7c("INVENTORY_CHARMS_TAB_TITLE",0);
  return;
}




void FUN_00bf65b8(void)

{
  FUN_00e6ce7c("INVENTORY_CHARMS_TAB_TITLE",0);
  return;
}




void FUN_00bf65c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f2be0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf660c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f2be0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf6650(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00aa5f24(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        lVar4 = lVar4 + -8;
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00bf66bc(long param_1)

{
  FUN_00c72460(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf66c4(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027f2c28;
  pvVar2 = operator_new(0x2908);
  FUN_00c7330c();
  param_1[1] = pvVar2;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar2 + 0x9b8) = param_1;
  *param_1 = &PTR_FUN_027f2c00;
  pcStack_40 = thunk_FUN_00bf6c2c;
  local_48 = param_1;
  FUN_00f02e98(0x3f000000,&local_48,0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf6768(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f2c00;
  pcStack_30 = thunk_FUN_00bf6c2c;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar5 = (ulong)*(uint *)(lVar3 + 0x20) << 5;
    puVar2 = *(undefined8 **)(lVar3 + 0x28);
    do {
      puVar4 = puVar2;
      if (lVar5 == 0) goto LAB_00bf67dc;
      lVar5 = lVar5 + -0x20;
      puVar2 = puVar4 + 4;
    } while ((undefined8 *)*puVar4 != param_1);
    FUN_00910480((uint *)(lVar3 + 0x20),puVar4);
  }
LAB_00bf67dc:
  *param_1 = &PTR___cxa_pure_virtual_027f2c28;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf6828(void *param_1)

{
  FUN_00bf6768();
  operator_delete(param_1);
  return;
}




void FUN_00bf684c(long param_1,long param_2)

{
  long lVar1;
  long local_48 [3];
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x10) = param_2;
  local_48[1] = 0;
  pcStack_30 = thunk_FUN_00bf68b8;
  local_48[0] = param_1;
  local_48[2] = param_1;
  FUN_009e4694(param_2 + 0x20,local_48);
  FUN_00bf68b8(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf68b8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  byte bVar14;
  undefined1 auStack_e8 [64];
  long local_a8;
  code *pcStack_a0;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00c73c20(*(undefined8 *)(param_1 + 8));
  uVar9 = FUN_009e3630(*(undefined8 *)(param_1 + 0x10));
  if ((uVar9 & 1) != 0) {
    uVar9 = FUN_009e36ac(*(undefined8 *)(param_1 + 0x10));
    if ((uVar9 & 1) == 0) {
      pcStack_a0 = thunk_FUN_00bf6c2c;
      local_a8 = param_1;
      FUN_00f02e98(0x3f000000,&local_a8,0,1);
    }
    FUN_00c73abc(*(undefined8 *)(param_1 + 8));
    uVar5 = FUN_009e35f0(*(undefined8 *)(param_1 + 0x10));
    uVar6 = FUN_009e3638(*(undefined8 *)(param_1 + 0x10));
    bVar4 = FUN_009e36ac(*(undefined8 *)(param_1 + 0x10));
    if ((bVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar6 = uVar6 - 1;
      uVar7 = FUN_009e3664(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar7 = 0;
    }
    FUN_00c74038(uVar10,uVar7);
    if (uVar5 != 0) {
      uVar13 = 0;
      do {
        if (uVar13 < uVar6) {
          bVar14 = 1;
        }
        else {
          bVar14 = uVar6 == uVar13 & (bVar4 ^ 1);
        }
        if (uVar6 == uVar13) {
          FUN_009e38dc(*(undefined8 *)(param_1 + 0x10),uVar6);
          uVar9 = FUN_00e6a488();
          puVar2 = PTR_s_build___DailyLogin_7Day_tga_02be35d8;
          if ((uVar9 & 1) == 0) {
            uVar10 = *(undefined8 *)(param_1 + 8);
            uVar11 = FUN_009e38dc(*(undefined8 *)(param_1 + 0x10),uVar6);
            uVar12 = FUN_009e3928(*(undefined8 *)(param_1 + 0x10),uVar6);
            FUN_00ca4448(uVar10,puVar2,uVar11,uVar12);
          }
          else {
            uVar10 = FUN_009e3928(*(undefined8 *)(param_1 + 0x10),uVar6);
            FUN_00e70978(uVar10,&local_a8,0xffffffff);
            FUN_008fff20(auStack_e8,&DAT_01bbb41a,&local_a8);
            uVar9 = FUN_00ce9bf0(auStack_e8);
            if ((uVar9 & 1) == 0) {
              uVar10 = FUN_009e3928(*(undefined8 *)(param_1 + 0x10),uVar6);
              uVar11 = FUN_009e3890(*(undefined8 *)(param_1 + 0x10),uVar6);
              FUN_00bf6bdc(param_1,uVar10,uVar11);
            }
            else {
              FUN_00bf6b38(param_1,auStack_e8);
            }
          }
          bVar3 = bVar14 != 0;
          bVar14 = 2;
          if (bVar3) {
            bVar14 = 3;
          }
        }
        uVar10 = *(undefined8 *)(param_1 + 8);
        uVar11 = FUN_009e3890(*(undefined8 *)(param_1 + 0x10),uVar13);
        uVar12 = FUN_009e38dc(*(undefined8 *)(param_1 + 0x10),uVar13);
        FUN_00c73e14(uVar10,bVar14,uVar11,uVar12);
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
    }
    FUN_00c73c20(*(undefined8 *)(param_1 + 8));
    iVar8 = FUN_009e3638(*(undefined8 *)(param_1 + 0x10));
    if (iVar8 == 0) {
      FUN_00c740d4(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_00c73b84(*(undefined8 *)(param_1 + 8));
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf6b38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00ce9b48(param_2);
  FUN_008fff20(auStack_78,"portrait_%s",*(undefined8 *)(lVar2 + 0x10));
  pvVar3 = operator_new(0x690);
  FUN_00c72e3c(pvVar3,auStack_78,0);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = FUN_00e6ce7c(*(undefined8 *)(lVar2 + 0x18),0);
  FUN_00ca4440(uVar5,pvVar3,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf6bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x690);
  FUN_00c72e3c(pvVar1,param_3,1);
  FUN_00ca4440(*(undefined8 *)(param_1 + 8),pvVar1,param_2);
  return;
}




void FUN_00bf6c2c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = FUN_009e36ac();
    if ((uVar3 & 1) == 0) {
      uVar2 = FUN_009e3664(*(undefined8 *)(param_1 + 0x10));
      FUN_00c74038(*(undefined8 *)(param_1 + 8),uVar2);
    }
    else {
      FUN_00c74038(*(undefined8 *)(param_1 + 8),0);
      pcStack_30 = thunk_FUN_00bf6c2c;
      local_38 = param_1;
      FUN_00f03390(&local_38);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00bf6cbc(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = FUN_009e3630();
    bVar1 = false;
    if ((uVar4 & 1) != 0) {
      iVar2 = FUN_009e3638(*(undefined8 *)(param_1 + 0x10));
      iVar3 = FUN_009e35f0(*(undefined8 *)(param_1 + 0x10));
      bVar1 = iVar3 <= iVar2;
    }
  }
  return bVar1;
}




void FUN_00bf6d10(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_48 [3];
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_009e36d4(*(undefined8 *)(param_1 + 0x10));
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = (ulong)*(uint *)(lVar4 + 0x20) << 5;
  plVar2 = *(long **)(lVar4 + 0x28);
  do {
    plVar3 = plVar2;
    if (lVar5 == 0) goto LAB_00bf6d6c;
    lVar5 = lVar5 + -0x20;
    plVar2 = plVar3 + 4;
  } while (*plVar3 != param_1);
  FUN_00910480((uint *)(lVar4 + 0x20),plVar3);
  lVar4 = *(long *)(param_1 + 0x10);
LAB_00bf6d6c:
  local_48[1] = 0;
  pcStack_30 = thunk_FUN_00bf68b8;
  local_48[0] = param_1;
  local_48[2] = param_1;
  FUN_009e4694(lVar4 + 0x20,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf6dac(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f2c28;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf6df0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf6df4);
  (*pcVar1)();
}




void thunk_FUN_00bf6c2c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lStack_38;
  code *pcStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = FUN_009e36ac();
    if ((uVar3 & 1) == 0) {
      uVar2 = FUN_009e3664(*(undefined8 *)(param_1 + 0x10));
      FUN_00c74038(*(undefined8 *)(param_1 + 8),uVar2);
    }
    else {
      FUN_00c74038(*(undefined8 *)(param_1 + 8),0);
      pcStack_30 = thunk_FUN_00bf6c2c;
      lStack_38 = param_1;
      FUN_00f03390(&lStack_38);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bf68b8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  byte bVar14;
  undefined1 auStack_e8 [64];
  long lStack_a8;
  code *pcStack_a0;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  FUN_00c73c20(*(undefined8 *)(param_1 + 8));
  uVar9 = FUN_009e3630(*(undefined8 *)(param_1 + 0x10));
  if ((uVar9 & 1) != 0) {
    uVar9 = FUN_009e36ac(*(undefined8 *)(param_1 + 0x10));
    if ((uVar9 & 1) == 0) {
      pcStack_a0 = thunk_FUN_00bf6c2c;
      lStack_a8 = param_1;
      FUN_00f02e98(0x3f000000,&lStack_a8,0,1);
    }
    FUN_00c73abc(*(undefined8 *)(param_1 + 8));
    uVar5 = FUN_009e35f0(*(undefined8 *)(param_1 + 0x10));
    uVar6 = FUN_009e3638(*(undefined8 *)(param_1 + 0x10));
    bVar4 = FUN_009e36ac(*(undefined8 *)(param_1 + 0x10));
    if ((bVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar6 = uVar6 - 1;
      uVar7 = FUN_009e3664(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar7 = 0;
    }
    FUN_00c74038(uVar10,uVar7);
    if (uVar5 != 0) {
      uVar13 = 0;
      do {
        if (uVar13 < uVar6) {
          bVar14 = 1;
        }
        else {
          bVar14 = uVar6 == uVar13 & (bVar4 ^ 1);
        }
        if (uVar6 == uVar13) {
          FUN_009e38dc(*(undefined8 *)(param_1 + 0x10),uVar6);
          uVar9 = FUN_00e6a488();
          puVar2 = PTR_s_build___DailyLogin_7Day_tga_02be35d8;
          if ((uVar9 & 1) == 0) {
            uVar10 = *(undefined8 *)(param_1 + 8);
            uVar11 = FUN_009e38dc(*(undefined8 *)(param_1 + 0x10),uVar6);
            uVar12 = FUN_009e3928(*(undefined8 *)(param_1 + 0x10),uVar6);
            FUN_00ca4448(uVar10,puVar2,uVar11,uVar12);
          }
          else {
            uVar10 = FUN_009e3928(*(undefined8 *)(param_1 + 0x10),uVar6);
            FUN_00e70978(uVar10,&lStack_a8,0xffffffff);
            FUN_008fff20(auStack_e8,&DAT_01bbb41a,&lStack_a8);
            uVar9 = FUN_00ce9bf0(auStack_e8);
            if ((uVar9 & 1) == 0) {
              uVar10 = FUN_009e3928(*(undefined8 *)(param_1 + 0x10),uVar6);
              uVar11 = FUN_009e3890(*(undefined8 *)(param_1 + 0x10),uVar6);
              FUN_00bf6bdc(param_1,uVar10,uVar11);
            }
            else {
              FUN_00bf6b38(param_1,auStack_e8);
            }
          }
          bVar3 = bVar14 != 0;
          bVar14 = 2;
          if (bVar3) {
            bVar14 = 3;
          }
        }
        uVar10 = *(undefined8 *)(param_1 + 8);
        uVar11 = FUN_009e3890(*(undefined8 *)(param_1 + 0x10),uVar13);
        uVar12 = FUN_009e38dc(*(undefined8 *)(param_1 + 0x10),uVar13);
        FUN_00c73e14(uVar10,bVar14,uVar11,uVar12);
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
    }
    FUN_00c73c20(*(undefined8 *)(param_1 + 8));
    iVar8 = FUN_009e3638(*(undefined8 *)(param_1 + 0x10));
    if (iVar8 == 0) {
      FUN_00c740d4(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_00c73b84(*(undefined8 *)(param_1 + 8));
    }
  }
  if (*(long *)(lVar1 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf6dfc(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f3050;
  pvVar2 = operator_new(0xea8);
  FUN_00c74b40();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_027f2c50;
  param_1[2] = &PTR_FUN_027f2c80;
  param_1[5] = &PTR_FUN_027f3018;
  param_1[6] = 0;
  lVar3 = FUN_00aa8224();
  FUN_00bf7170(param_1 + 6,lVar3 + 0x450);
  lVar3 = FUN_00aa8224();
  uStack_50 = 0;
  pcStack_40 = thunk_FUN_00bf6f00;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(lVar3 + 0x18,&local_58);
  lVar3 = FUN_00aa8224();
  uStack_50 = 0;
  pcStack_40 = thunk_FUN_00bf6f00;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(lVar3 + 0x28,&local_58);
  uVar4 = FUN_0093dbe8();
  if ((uVar4 & 1) != 0) {
    FUN_00bf6f00(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf6f00(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_00c74fd4(*(undefined8 *)(param_1 + 8),param_1 + 0x30);
  }
  FUN_00c74cbc(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf6f44(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027f2c50;
  param_1[2] = &PTR_FUN_027f2c80;
  param_1[5] = &PTR_FUN_027f3018;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  lVar2 = FUN_00aa8224();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
  puVar1 = *(undefined8 **)(lVar2 + 0x20);
  do {
    puVar3 = puVar1;
    if (lVar4 == 0) goto LAB_00bf6fb8;
    lVar4 = lVar4 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480((uint *)(lVar2 + 0x18),puVar3);
LAB_00bf6fb8:
  lVar2 = FUN_00aa8224();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
  puVar1 = *(undefined8 **)(lVar2 + 0x30);
  do {
    puVar3 = puVar1;
    if (lVar4 == 0) goto LAB_00bf6fe4;
    lVar4 = lVar4 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480((uint *)(lVar2 + 0x28),puVar3);
LAB_00bf6fe4:
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027f3050;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void thunk_FUN_00bf6f00(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_00c74fd4(*(undefined8 *)(param_1 + 8),param_1 + 0x30);
  }
  FUN_00c74cbc(*(undefined8 *)(param_1 + 8));
  return;
}

