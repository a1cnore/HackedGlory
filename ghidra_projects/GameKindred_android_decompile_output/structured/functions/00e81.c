// functions/00e81 — 73 functions
#include "libGameKindred.h"




bool FUN_00e81020(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_01e277f2;
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = param_3;
  }
  iVar2 = (**(code **)(*DAT_03210700 + 0x28))(DAT_03210700,param_1,param_2,puVar1);
  return iVar2 == 1;
}




bool FUN_00e81068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x30))(DAT_03210700,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_00e810a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_00e6a474(param_3);
  bVar1 = false;
  if (uVar2 < 0x41) {
    uVar2 = FUN_00e6a474(param_4);
    bVar1 = false;
    if (uVar2 < 0x41) {
      iVar3 = (**(code **)(*DAT_03210700 + 0x38))
                        (DAT_03210700,param_1,param_2,param_3,param_4,param_5);
      bVar1 = iVar3 == 1;
    }
  }
  return bVar1;
}




bool FUN_00e8113c(void)

{
  uint uVar1;
  
  uVar1 = FUN_00e6a474();
  return uVar1 < 0x41;
}




bool FUN_00e81158(void)

{
  uint uVar1;
  
  uVar1 = FUN_00e6a474();
  return uVar1 < 0x41;
}




bool FUN_00e81174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x40))(DAT_03210700,param_1,param_2,param_3,param_4,param_5);
  return iVar1 == 1;
}




bool FUN_00e811b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x48))
                    (DAT_03210700,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1 == 1;
}




void FUN_00e81200(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e81218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x50))(DAT_03210700,param_1);
  return;
}




void FUN_00e8121c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e81234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x58))(DAT_03210700,param_1);
  return;
}




void FUN_00e81238(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e81250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x60))(DAT_03210700,param_1);
  return;
}




uint FUN_00e81254(void)

{
  long lVar1;
  uint uVar2;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  uVar2 = (**(code **)(*DAT_03210700 + 0x60))(DAT_03210700,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00e812cc(void)

{
  uint uVar1;
  
  uVar1 = FUN_00e81254();
  return ~uVar1 & 1;
}




bool FUN_00e812e8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x68))(DAT_03210700,param_1);
  return iVar1 != 0;
}




bool FUN_00e8131c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x70))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e81354(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x78))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




void FUN_00e8138c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00e813ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x80))(DAT_03210700,param_1,param_2,param_3);
  return;
}




bool FUN_00e813b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0xa8))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e813e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0xb0))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e81424(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0xc0))(DAT_03210700,param_1);
  return iVar1 == 1;
}




void FUN_00e81458(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e81470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0xd0))(DAT_03210700,param_1);
  return;
}




void FUN_00e81474(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e81490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0xd8))(DAT_03210700,param_1,param_2);
  return;
}




bool FUN_00e81494(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 200))(DAT_03210700,param_1,param_2 & 1,param_3);
  return iVar1 == 1;
}




bool FUN_00e814d4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0xe0))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81508(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0xe8))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e8153c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0xb8))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81574(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0xf0))(DAT_03210700,param_1,param_2 & 1);
  return iVar1 == 1;
}




bool FUN_00e815b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0xf8))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e815e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x100))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81620(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x108))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81658(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x110))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81690(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x118))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e816c8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x120))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81700(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x128))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81738(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x130))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e81774(uint param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x138))(DAT_03210700,param_1 & 1,param_2);
  return iVar1 == 1;
}




bool FUN_00e817ac(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x140))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e817e0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x148))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81814(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x150))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81848(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x168))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81880(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x170))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e818b4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x178))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e818e8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x158))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e8191c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x180))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81954(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x188))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e8198c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 400))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e819c4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x198))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e819fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1a0))(DAT_03210700,param_1,param_2,param_3,param_4,param_5)
  ;
  return iVar1 == 1;
}




bool FUN_00e81a40(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1a8))(DAT_03210700,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_00e81a80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1b0))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81ab8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1b8))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81aec(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1c0))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81b20(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1c8))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81b54(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x160))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81b88(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1d0))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1d8))
                    (DAT_03210700,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1 == 1;
}




bool FUN_00e81c04(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1e0))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81c38(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1e8))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81c70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1f0))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81ca8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x1f8))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81ce0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x200))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x210))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e81d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x218))(DAT_03210700,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_00e81d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x220))(DAT_03210700,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_00e81dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x228))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e81e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x230))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e81e4c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x208))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e81e84(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x238))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e81ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x240))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e81efc(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x248))(DAT_03210700,param_1,param_2 & 1,param_3);
  return iVar1 == 1;
}




bool FUN_00e81f3c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x250))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81f70(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 600))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81fa4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x260))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e81fd8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x268))(DAT_03210700,param_1);
  return iVar1 == 1;
}

