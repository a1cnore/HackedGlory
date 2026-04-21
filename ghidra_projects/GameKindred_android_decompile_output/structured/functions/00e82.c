// functions/00e82 — 76 functions
#include "libGameKindred.h"




void thunk_FUN_00e82a5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e82a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x4d8))(DAT_03210700,param_1,param_2);
  return;
}




void thunk_FUN_00e82a7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e82a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x4e0))(DAT_03210700,param_1,param_2);
  return;
}




bool FUN_00e8200c(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x270))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e82048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x278))(DAT_03210700,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_00e82088(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x280))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e820bc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x288))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e820f4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x290))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e8212c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x298))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82164(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2a0))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e8219c(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2a8))(DAT_03210700,param_1,param_2 & 1,param_3);
  return iVar1 == 1;
}




bool FUN_00e821dc(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2b0))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82210(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x398))(DAT_03210700,param_1);
  return iVar1 == 1;
}




void FUN_00e82244(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,&DAT_01e277f2);
  iVar2 = (**(code **)(*DAT_03210700 + 0x2b8))(DAT_03210700,param_1,local_50,param_2);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 1);
}




bool FUN_00e822e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2b8))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e8231c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2c0))
                    (DAT_03210700,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1 == 1;
}




bool FUN_00e82378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2c8))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e823b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2d0))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e823f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2d8))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e8242c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2e0))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e82468(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2e8))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e8249c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2f0))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e824d8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x2f8))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82510(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x300))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82548(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x308))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82580(uint param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x310))(DAT_03210700,param_1 & 1,param_2);
  return iVar1 == 1;
}




bool FUN_00e825b8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_01e277f2;
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = param_3;
  }
  iVar2 = (**(code **)(*DAT_03210700 + 0x318))(DAT_03210700,param_1,param_2,puVar1);
  return iVar2 == 1;
}




bool FUN_00e82600(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x328))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82634(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x330))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82668(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x338))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e826a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x340))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e826d8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x360))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e8270c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x348))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82740(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x350))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82778(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x358))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e827b0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x500))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e827e4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x508))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82818(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x510))(DAT_03210700,param_1,param_2 & 1,param_3);
  return iVar1 == 1;
}




bool FUN_00e82858(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x518))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e8288c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x520))(DAT_03210700,param_1);
  return iVar1 == 1;
}




void FUN_00e828c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e828d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x4a0))(DAT_03210700,param_1);
  return;
}




void FUN_00e828dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e828f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x4a8))(DAT_03210700,param_1);
  return;
}




void FUN_00e828f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e82914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x4b0))(DAT_03210700,param_1,param_2);
  return;
}




bool FUN_00e82918(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x368))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e8294c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x370))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82980(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x4b8))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e829b4(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x4c8))();
  return iVar1 == 1;
}




void FUN_00e829e0(void)

{
  (**(code **)(*DAT_03210700 + 0x4d0))();
  return;
}




bool FUN_00e82a04(void)

{
  long lVar1;
  
  lVar1 = (**(code **)(*DAT_03210700 + 0x4d0))();
  return *(int *)(lVar1 + 0xa0) - 6U < 3 || *(int *)(lVar1 + 0xa0) - 2U < 4;
}




void FUN_00e82a48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00e82a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x4c0))();
  return;
}




void FUN_00e82a5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e82a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x4d8))(DAT_03210700,param_1,param_2);
  return;
}




void FUN_00e82a7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e82a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x4e0))(DAT_03210700,param_1,param_2);
  return;
}




bool FUN_00e82a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x390))(DAT_03210700,param_1,param_2,param_3,param_4);
  return iVar1 != 0;
}




bool FUN_00e82adc(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x408))(DAT_03210700,param_1);
  return iVar1 != 0;
}




bool FUN_00e82b10(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x438))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82b44(uint param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x440))(DAT_03210700,param_1 & 1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e82b80(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x448))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82bb4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x450))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82bec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x458))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82c24(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x430))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82c58(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x460))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82c8c(uint param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x468))(DAT_03210700,param_1 & 1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82cc4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x470))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82cfc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x478))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82d34(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x480))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e82d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x488))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_00e82da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x490))
                    (DAT_03210700,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1 == 1;
}




bool FUN_00e82df0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x498))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e82e24(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3f8))(DAT_03210700,param_1);
  return iVar1 != 0;
}




bool FUN_00e82e58(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x400))(DAT_03210700,param_1);
  return iVar1 != 0;
}




bool FUN_00e82e8c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3a0))(DAT_03210700,param_1);
  return iVar1 != 0;
}




bool FUN_00e82ec0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3a8))(DAT_03210700,param_1);
  return iVar1 != 0;
}




bool FUN_00e82ef4(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3b0))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e82f2c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3b8))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e82f64(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3c0))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e82f9c(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3c8))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e82fd4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 1000))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}

