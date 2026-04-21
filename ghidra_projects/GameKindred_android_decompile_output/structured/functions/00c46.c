// functions/00c46 — 20 functions
#include "libGameKindred.h"




long * FUN_00c4604c(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *__s;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_88;
  void *local_80;
  code *local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_0092ea9c();
  __s = operator_new(0x15f0);
  memset(__s,0,0x15f0);
  FUN_00ab6c24(__s,0);
  __s[0x2bd] = 0;
  __s[700] = 0;
  __s[699] = 0;
  __s[0x2ba] = 0;
  *__s = (long)&PTR_FUN_027fbe50;
  __s[0x2b9] = 0;
  __s[0x2b8] = 0;
  uVar3 = 0x434c0000;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0x432e0000;
  }
  FUN_00e70570(&local_78,&DAT_0320ffa8);
  FUN_00ab703c(0x41a00000,uVar3,0x43c80000,__s,0,&local_78,&DAT_01bee7fa,&DAT_03218ef8,0);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = (code *)0x0;
    local_70 = (void *)0x0;
  }
  FUN_00b1597c(__s,param_2 + 0x30,param_2 + 0x48);
  uVar5 = FUN_0092ea9c();
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar5 & 1) == 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
  }
  FUN_00f0d378(__s + 0xe4,*ppuVar1);
  local_78 = (code *)0x3f0000003f000000;
  (**(code **)(*__s + 0x28))(__s,&local_78);
  FUN_00ab7588(0x3f800000,__s,&DAT_01bee7f6);
  FUN_00b0914c(__s,1);
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    lVar6 = param_2 + 0x91;
  }
  else {
    lVar6 = *(long *)(param_2 + 0xa0);
  }
  uVar7 = FUN_00e6ce7c(lVar6,0);
  thunk_FUN_00e7051c(&local_88,uVar7);
  uVar5 = FUN_00e70b34(&local_88,&DAT_03210450);
  if ((uVar5 & 1) != 0) {
    FUN_00e70924(&local_88,(byte *)(param_2 + 0x90));
  }
  FUN_00ab7498(__s,&local_88);
  local_50 = DAT_03210c64;
  local_78 = FUN_00c462bc;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = (void *)param_1;
  local_58 = __s;
  FUN_009693a0(__s + 1,&local_78);
  uVar3 = FUN_00e6a474("rewarded_video");
  uVar4 = FUN_0091ed5c("rewarded_video",uVar3,0x1234);
  *(uint *)((long)__s + 0x84) =
       *(uint *)((long)__s + 0x84) & 0x80000000 |
       *(uint *)((long)__s + 0x84) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return __s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c462b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c43bc4(param_1,param_4,param_5);
  return;
}




void FUN_00c462bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  long *plVar1;
  
  if ((param_5 != 0) && (plVar1 = *(long **)(param_1 + 0x630), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_5 + 0x15d8,param_5 + 0x15c0);
  }
  FUN_00f0490c(param_4);
  return;
}




long * FUN_00c46304(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *__s;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_88;
  void *local_80;
  code *local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_0092ea9c();
  __s = operator_new(0x15f0);
  memset(__s,0,0x15f0);
  FUN_00ab6c24(__s,0);
  __s[0x2bd] = 0;
  __s[700] = 0;
  __s[699] = 0;
  __s[0x2ba] = 0;
  *__s = (long)&PTR_FUN_027fbe50;
  __s[0x2b9] = 0;
  __s[0x2b8] = 0;
  uVar3 = 0x434c0000;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0x432e0000;
  }
  FUN_00e70570(&local_78,&DAT_0320ffa8);
  FUN_00ab703c(0x41a00000,uVar3,0x43c80000,__s,0,&local_78,&DAT_01bee7fa,&DAT_03218ef8,0);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = (code *)0x0;
    local_70 = (void *)0x0;
  }
  FUN_00b1597c(__s,param_2 + 0x30,param_2 + 0x48);
  uVar5 = FUN_0092ea9c();
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar5 & 1) == 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
  }
  FUN_00f0d378(__s + 0xe4,*ppuVar1);
  local_78 = (code *)0x3f0000003f000000;
  (**(code **)(*__s + 0x28))(__s,&local_78);
  FUN_00ab7588(0x3f800000,__s,&DAT_01bee7f6);
  FUN_00b0914c(__s,1);
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    lVar6 = param_2 + 0x91;
  }
  else {
    lVar6 = *(long *)(param_2 + 0xa0);
  }
  uVar7 = FUN_00e6ce7c(lVar6,0);
  thunk_FUN_00e7051c(&local_88,uVar7);
  uVar5 = FUN_00e70b34(&local_88,&DAT_03210450);
  if ((uVar5 & 1) != 0) {
    FUN_00e70924(&local_88,(byte *)(param_2 + 0x90));
  }
  FUN_00ab7498(__s,&local_88);
  local_50 = DAT_03210c64;
  local_78 = FUN_00c462bc;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = (void *)param_1;
  local_58 = __s;
  FUN_009693a0(__s + 1,&local_78);
  uVar3 = FUN_00e6a474("rewarded_video");
  uVar4 = FUN_0091ed5c("rewarded_video",uVar3,0x1234);
  *(uint *)((long)__s + 0x84) =
       *(uint *)((long)__s + 0x84) & 0x80000000 |
       *(uint *)((long)__s + 0x84) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return __s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c46568(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6a474("rewarded_video");
  iVar3 = FUN_0091ed5c("rewarded_video",uVar2,0x1234);
  if (*(int *)(param_1 + 0x2538) != 0) {
    uVar6 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x2540) + uVar6 * 8);
      if ((lVar7 != 0) && (uVar4 = (ulong)*(uint *)(lVar7 + 200), *(uint *)(lVar7 + 200) != 0)) {
        uVar8 = 0;
        do {
          lVar5 = *(long *)(*(long *)(lVar7 + 0xd0) + uVar8 * 8);
          if ((uint)(iVar3 << 0x10 ^ *(int *)(lVar5 + 0x84) << 1) >> 0x10 == 0) {
            local_60 = lVar5;
            FUN_00c46658(param_2,&local_60);
            uVar4 = (ulong)*(uint *)(lVar7 + 200);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x2538));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c46658(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00c46d08(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_00c466e0(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x2548) != 0) {
    plVar1 = *(long **)(param_1 + 0x2550);
    lVar2 = (ulong)*(uint *)(param_1 + 0x2548) << 3;
    do {
      if ((*plVar1 != 0) && (*(int *)(*plVar1 + 0x358) == param_2)) {
        return 1;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  return 0;
}




void FUN_00c46720(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*param_2 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    lVar1 = param_1 + 0x2428;
    lVar2 = param_1 + 0x2548;
    do {
      lVar3 = *(long *)(param_2 + 2) + lVar5;
      local_60 = FUN_00c467f4(param_1,lVar3 + 8);
      *(undefined8 *)(local_60 + 0x33c) = *(undefined8 *)(lVar3 + 0x80);
      *(undefined8 *)(local_60 + 0x350) = *(undefined8 *)(lVar3 + 0x88);
      FUN_00f023ec(lVar1,local_60,1);
      param_1 = FUN_00c469ec(lVar2,&local_60);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x90;
    } while (uVar6 < *param_2);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00c467f4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pvVar5 = operator_new(0x360);
  FUN_00af557c();
  FUN_008fcdb8(local_50,param_2 + 0x20);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if ((uVar1 != 8) || (iVar4 = FUN_0090d610(local_50,0,0xffffffffffffffff,"timeLeft",8), iVar4 != 0)
     ) goto LAB_00c4696c;
  pbVar10 = (byte *)(param_2 + 0x50);
  bVar2 = *pbVar10;
  uVar8 = *(ulong *)(param_2 + 0x58);
  uVar9 = (ulong)(bVar2 >> 1);
  uVar1 = uVar9;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar8;
  }
  if (uVar1 == 9) {
    iVar4 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"timestamp",9);
    if (iVar4 != 0) {
      bVar2 = *(byte *)(param_2 + 0x50);
      uVar8 = *(ulong *)(param_2 + 0x58);
      uVar9 = (ulong)(bVar2 >> 1);
      goto LAB_00c468c8;
    }
LAB_00c468dc:
    lVar7 = *(long *)(param_2 + 0x70);
  }
  else {
LAB_00c468c8:
    uVar1 = uVar9;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar8;
    }
    if (uVar1 == 10) {
      iVar4 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"accountAge",10);
      if (iVar4 != 0) {
        bVar2 = *(byte *)(param_2 + 0x50);
        uVar8 = *(ulong *)(param_2 + 0x58);
        uVar9 = (ulong)(bVar2 >> 1);
        goto LAB_00c46914;
      }
      lVar7 = FUN_009580b8();
      lVar7 = (long)*(int *)(lVar7 + 0x566c);
    }
    else {
      if (uVar1 == 0) goto LAB_00c468dc;
LAB_00c46914:
      if ((bVar2 & 1) != 0) {
        uVar9 = uVar8;
      }
      if ((uVar9 != 0x12) ||
         (iVar4 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"timeSinceLastSpend",0x12), iVar4 != 0))
      goto LAB_00c4696c;
      lVar7 = FUN_009580b8();
      lVar7 = *(long *)(lVar7 + 0x55c0);
    }
    lVar7 = *(long *)(param_2 + 0x70) + lVar7;
  }
  FUN_00af57c0(pvVar5,lVar7);
LAB_00c4696c:
  lVar7 = param_2 + 9;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    lVar7 = *(long *)(param_2 + 0x18);
  }
  uVar6 = FUN_00e6ce7c(lVar7,0);
  FUN_00b252ac((long)pvVar5 + 0xe8,uVar6,0,0);
  FUN_00af6bfc(pvVar5,param_2 + 0x38);
  *(undefined4 *)((long)pvVar5 + 0x338) = *(undefined4 *)(param_2 + 0x68);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar5;
}




void FUN_00c469ec(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00c46d88(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c46a74(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00c467f4();
  local_40 = lVar2;
  FUN_00f0dac8(lVar2 + 0xe8,3);
  uVar3 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x624));
  FUN_00af6d64(uVar3,0x42d80000,lVar2);
  *(undefined4 *)(lVar2 + 0x358) = 1;
  FUN_00f023ec(param_1 + 0x2428,lVar2,1);
  FUN_00c469ec(param_1 + 0x2548,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c46b1c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00c467f4();
  local_40 = lVar2;
  FUN_00f0dac8(lVar2 + 0xe8,3);
  uVar3 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x624));
  FUN_00af6d64(uVar3,0x42d80000,lVar2);
  *(undefined4 *)(lVar2 + 0x358) = 2;
  FUN_00f023ec(param_1 + 0x2428,lVar2,1);
  FUN_00c469ec(param_1 + 0x2548,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00c46bc4(long param_1)

{
  return param_1 + 0x2548;
}




void FUN_00c46bd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fbe50;
  if ((*(byte *)(param_1 + 699) & 1) != 0) {
    operator_delete((void *)param_1[0x2bd]);
  }
  if ((*(byte *)(param_1 + 0x2b8) & 1) != 0) {
    operator_delete((void *)param_1[0x2ba]);
  }
  FUN_009c7fa8(param_1);
  return;
}




void FUN_00c46c28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fbe50;
  if ((*(byte *)(param_1 + 699) & 1) != 0) {
    operator_delete((void *)param_1[0x2bd]);
  }
  if ((*(byte *)(param_1 + 0x2b8) & 1) != 0) {
    operator_delete((void *)param_1[0x2ba]);
  }
  FUN_009c7fa8(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c46c88(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00c46d08(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00c46d88(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00c46e08(undefined8 *param_1)

{
  long lVar1;
  code *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ecf178();
  param_1[0x4b] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  *param_1 = &PTR_FUN_027fbfe8;
  param_1[0x4a] = 0;
  FUN_00f13ca4(param_1 + 0x4c);
  FUN_00f0c714(param_1 + 99);
  FUN_00f0cbb4(param_1 + 0x7e);
  FUN_00f0e4a8(param_1 + 0xc6);
  FUN_00f0c714(param_1 + 0xe4);
  FUN_00f017e8(param_1 + 0xff);
  FUN_00f0d160(param_1 + 0x110);
  FUN_00f0d160(param_1 + 0x136);
  FUN_00f0e4a8(param_1 + 0x15c);
  FUN_00f0e4a8(param_1 + 0x17a);
  FUN_00f0d160(param_1 + 0x198);
  FUN_00f13ca4(param_1 + 0x1be);
  FUN_00c93600(param_1 + 0x1d5,0);
  FUN_00f1306c(param_1 + 0x31e);
  FUN_00f13ca4(param_1 + 0x349);
  FUN_00f0c714(param_1 + 0x360);
  *(undefined2 *)(param_1 + 0x37b) = 0;
  *(undefined1 *)((long)param_1 + 0x1bda) = 0;
  FUN_00f14070(param_1,&DAT_03211038);
  FUN_00c46f5c(param_1);
  FUN_00c471cc(param_1);
  local_30 = DAT_03210c64;
  local_58 = FUN_00c475d8;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  puStack_50 = param_1;
  FUN_009693a0(param_1 + 1,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c46f5c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar1 = param_1 + 0x4c;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 99;
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x7e,1);
  FUN_00f0d090(param_1 + 0x7e,param_1 + 0xc6,1);
  FUN_00f023ec(plVar1,param_1 + 0xe4,1);
  plVar3 = param_1 + 0xff;
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar3,param_1 + 0x110,1);
  FUN_00f023ec(plVar3,param_1 + 0x136,1);
  FUN_00f023ec(plVar1,param_1 + 0x15c,1);
  FUN_00f023ec(plVar1,param_1 + 0x198,1);
  FUN_00f023ec(plVar1,param_1 + 0x31e,1);
  FUN_00f023ec(plVar1,param_1 + 0x349,1);
  FUN_00f023ec(plVar1,param_1 + 0x360,1);
  FUN_00f023ec(plVar1,param_1 + 0x1be,1);
  plVar1 = param_1 + 0x1d5;
  FUN_00f023ec(param_1 + 0x1be,plVar1,1);
  *(uint *)((long)param_1 + 0x2e4) = *(uint *)((long)param_1 + 0x2e4) & 0xffffffbf;
  FUN_00f13f68(param_1,DAT_0313b7e0);
  local_88 = (code *)CONCAT44(local_88._4_4_,0xff7b6561);
  FUN_00f0c774(plVar2,&local_88);
  FUN_00f0e548(param_1 + 0x17a,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_shadow_half");
  *(byte *)(param_1 + 0x195) = *(byte *)(param_1 + 0x195) | 2;
  FUN_00c93864(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar5 = FUN_00e6ce7c("PLAY_MENU_HOW_TO_PLAY_BUTTON",0);
  FUN_00c938d4(plVar1,uVar5);
  local_60 = DAT_03210c64;
  local_88 = FUN_00c48680;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x1d6,&local_88);
  *(uint *)((long)param_1 + 0x1b84) = *(uint *)((long)param_1 + 0x1b84) & 0xfffffffb;
  FUN_00f0c774(param_1 + 0x360,&DAT_01bee7f6);
  *(uint *)((long)param_1 + 0x7a4) = *(uint *)((long)param_1 + 0x7a4) & 0xfffffffb;
  FUN_00f0c774(param_1 + 0xe4,&DAT_01bee7f6);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

