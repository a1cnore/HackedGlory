// functions/00999 — 46 functions
#include "libGameKindred.h"




void FUN_00999044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00999054(param_1,param_4,param_5);
  return;
}




void FUN_00999050(void)

{
  return;
}




void FUN_00999054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f00438(*(undefined8 *)(param_1 + 0x28));
  FUN_009990f0(uVar1,DAT_03210f58,FUN_00999044,param_1);
  FUN_009990f0(uVar1,DAT_03210f84,FUN_00999044,param_1);
  FUN_00d256d0(param_3,0xe);
  if ((*(byte *)(param_1 + 0x30) >> 1 & 1) != 0) {
    FUN_009253e0(0);
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_009990f0(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_0099c2fc((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      lVar3 = lVar3 + -0x30;
      plVar2 = plVar2 + 6;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_00999144(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = &DAT_01e277f2;
  *param_1 = &PTR_FUN_027bee50;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  uVar1 = DAT_03218f30;
  *(undefined2 *)(param_1 + 8) = 0x100;
  param_1[6] = uVar1;
  return;
}




void FUN_009991a4(long param_1,undefined4 param_2,byte param_3,byte param_4)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(byte *)(param_1 + 0x41) = param_3 & 1;
  *(byte *)(param_1 + 0x42) = param_4 & 1;
  return;
}




void FUN_009991c0(long param_1,undefined4 param_2,byte param_3,byte param_4,byte param_5)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 3;
  *(byte *)(param_1 + 0x40) = param_3 & 1;
  *(byte *)(param_1 + 0x41) = param_4 & 1;
  *(byte *)(param_1 + 0x42) = param_5 & 1;
  return;
}




void FUN_009991e8(long param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 3;
  *(byte *)(param_1 + 0x40) = param_3 & 1;
  *(byte *)(param_1 + 0x41) = param_4 & 1;
  *(byte *)(param_1 + 0x42) = param_5 & 1;
  return;
}




void FUN_00999210(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = 2;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00999230(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [40];
  undefined1 auStack_6e8 [96];
  undefined8 local_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
LAB_00999264:
    uVar9 = 1;
    goto LAB_00999268;
  }
  uVar2 = FUN_00e6a474("__HUD__");
  uVar2 = FUN_0091ed5c("__HUD__",uVar2,0x12345678);
  puVar5 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2);
  if (5 < *(uint *)(param_1 + 0x3c)) goto LAB_00999264;
  uVar8 = *puVar5;
  switch(*(uint *)(param_1 + 0x3c)) {
  case 0:
    FUN_009c70ac(uVar8);
    goto LAB_00999264;
  case 1:
    uVar9 = FUN_00d25570(param_2);
    FUN_00d55794(uVar9,auStack_720,0);
    FUN_00d4d9e8(auStack_6e8);
    FUN_00d4dabc(auStack_6e8,0x10);
    FUN_00d4eb08(auStack_710,auStack_720,1,0);
    iVar3 = FUN_00d9e840(auStack_6e8,local_688,200,auStack_710);
    if (iVar3 == 1) goto LAB_00999430;
    goto LAB_00999408;
  case 2:
    uVar9 = 1;
    FUN_009c6b1c(0x3f800000,DAT_03218ef8,_DAT_03218efc,uVar8,param_1 + 0x30,1,
                 *(undefined1 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x41));
    goto LAB_00999268;
  case 3:
    if (*(int *)(param_1 + 0x24) == 0) {
      uVar9 = 1;
      FUN_009c7000(0x3f800000,DAT_03218ef8,_DAT_03218efc,uVar8,*(undefined8 *)(param_1 + 0x28),1,
                   *(undefined1 *)(param_1 + 0x41),*(undefined1 *)(param_1 + 0x42));
    }
    else {
      uVar9 = 1;
      FUN_009c6dfc(0x3f800000,DAT_03218ef8,_DAT_03218efc,uVar8,*(int *)(param_1 + 0x24),1,
                   *(undefined1 *)(param_1 + 0x41),*(undefined1 *)(param_1 + 0x42));
    }
    goto LAB_00999268;
  case 4:
    plVar7 = *(long **)(param_2 + 0x1420);
    break;
  case 5:
    plVar7 = *(long **)(param_2 + 0x1428);
  }
  if (plVar7 == (long *)0x0) {
LAB_00999408:
    uVar9 = 2;
  }
  else {
    plVar6 = (long *)*plVar7;
    if (plVar6 == (long *)0x0) {
      local_688[0] = 0;
    }
    else if ((int)plVar7[1] == (int)plVar6[1]) {
      local_688[0] = (**(code **)(*plVar6 + 0x10))();
    }
    else {
      *plVar7 = 0;
      local_688[0] = 0;
      *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
    }
LAB_00999430:
    uVar9 = 1;
    FUN_009c6c94(0x3f800000,DAT_03218ef8,_DAT_03218efc,uVar8,local_688[0],1,
                 *(undefined1 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x41));
  }
LAB_00999268:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00999490(void)

{
  return;
}




void FUN_00999494(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027beed8;
  FUN_00e70510(param_1 + 5);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0xbf800000;
  *(byte *)((long)param_1 + 0x5c) = *(byte *)((long)param_1 + 0x5c) & 0xf0 | 1;
  return;
}




long FUN_009994e8(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,byte param_5
                 )

{
  FUN_00910394(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x48) = param_1;
  *(byte *)(param_2 + 0x5c) = *(byte *)(param_2 + 0x5c) & 0xf0 | (param_5 & 1) << 3;
  return param_2;
}




long FUN_00999544(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  FUN_00910394(param_3 + 0x28);
  *(undefined8 *)(param_3 + 0x38) = param_5;
  *(undefined4 *)(param_3 + 0x48) = param_2;
  *(undefined4 *)(param_3 + 0x4c) = param_1;
  *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) & 0xf0 | (param_6 & 1) << 3;
  return param_3;
}




long FUN_009995a4(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  FUN_00910394(param_3 + 0x28);
  *(undefined8 *)(param_3 + 0x38) = param_5;
  *(undefined4 *)(param_3 + 0x48) = param_2;
  *(undefined4 *)(param_3 + 0x4c) = param_1;
  *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) & 0xf0 | (param_6 & 1) << 3;
  return param_3;
}




void FUN_00999604(long param_1,undefined8 *param_2)

{
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 7;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  return;
}




void FUN_00999624(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




undefined8 FUN_0099962c(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_750 [16];
  undefined8 local_740;
  undefined1 auStack_738 [40];
  long local_710 [200];
  long local_d0 [12];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) goto LAB_00999668;
  uVar3 = FUN_00e6a474("__HUD__");
  uVar3 = FUN_0091ed5c("__HUD__",uVar3,0x12345678);
  puVar6 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar3);
  uVar13 = *puVar6;
  lVar7 = FUN_00d25570(param_2);
  local_740 = 0;
  switch(*(byte *)(param_1 + 0x5c) & 7) {
  case 1:
    lVar7 = FUN_00d25570(param_2);
    goto LAB_009998fc;
  case 2:
    uVar12 = FUN_00d25570(param_2);
    FUN_00d55794(uVar12,auStack_750,0);
    FUN_00d4d9e8(local_d0);
    FUN_00d4dabc(local_d0,0x8000000);
    FUN_00d4eb08(auStack_738,auStack_750,1,0);
    FUN_00d9e840(local_d0,local_710,200,auStack_738);
    lVar7 = local_710[0];
    break;
  case 3:
    FUN_00d4d9e8(local_710);
    FUN_00d4dabc(local_710,0x2000);
    FUN_00d4d364(local_710,1);
    uVar4 = FUN_00d9e840(local_710,local_d0,10,0);
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        cVar2 = FUN_00d55870(local_d0[uVar5]);
        if (cVar2 == '\x02') {
          lVar8 = *(long *)(local_d0[uVar5] + 0x18);
          while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02c7bf48))) {
            lVar8 = *(long *)(lVar8 + 0x20);
          }
          uVar9 = FUN_00d6bbac(lVar8,DAT_0315c904,auStack_738);
          if ((uVar9 & 1) == 0) {
            lVar7 = local_d0[uVar5];
            goto LAB_009998fc;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    break;
  case 4:
    plVar10 = *(long **)(param_2 + 0x1478);
    if (plVar10 != (long *)0x0) {
      if (*(int *)(param_2 + 0x1480) != (int)plVar10[1]) {
        *(undefined8 *)(param_2 + 0x1478) = 0;
        lVar7 = 0;
        *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
        goto LAB_009998fc;
      }
      goto LAB_00999898;
    }
    goto LAB_009998d0;
  case 5:
    plVar11 = *(long **)(param_2 + 0x1420);
    goto joined_r0x0099987c;
  case 6:
    plVar11 = *(long **)(param_2 + 0x1428);
joined_r0x0099987c:
    if (plVar11 == (long *)0x0) {
LAB_00999668:
      uVar12 = 2;
      goto LAB_00999930;
    }
    plVar10 = (long *)*plVar11;
    if (plVar10 == (long *)0x0) {
LAB_009998d0:
      lVar7 = 0;
    }
    else if ((int)plVar11[1] == (int)plVar10[1]) {
LAB_00999898:
      lVar7 = (**(code **)(*plVar10 + 0x10))();
    }
    else {
      *plVar11 = 0;
      lVar7 = 0;
      *(undefined4 *)(plVar11 + 1) = DAT_03214ce8;
    }
    goto LAB_009998fc;
  case 7:
    FUN_009c6904(*(undefined4 *)(param_1 + 0x48),uVar13,param_1 + 0x28,param_1 + 0x50,&local_740,
                 *(byte *)(param_1 + 0x5c) >> 3 & 1,1);
LAB_009998fc:
    local_740 = CONCAT44(0xc3160000,(undefined4)local_740);
    break;
  default:
    uVar12 = FUN_00f00438(*(undefined8 *)(param_1 + 0x38));
    FUN_009c62f8(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x48),uVar13,
                 param_1 + 0x28,uVar12,&local_740,*(byte *)(param_1 + 0x5c) >> 3 & 1,1);
  }
  if (lVar7 == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = 1;
    FUN_009c676c(*(undefined4 *)(param_1 + 0x48),uVar13,param_1 + 0x28,lVar7,&local_740,
                 *(byte *)(param_1 + 0x5c) >> 3 & 1,1);
  }
LAB_00999930:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00999968(void)

{
  return;
}




void FUN_0099996c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bef60;
  return;
}




undefined8 FUN_0099999c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    FUN_009c6aac(*puVar4);
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_00999a1c(void)

{
  return;
}




void FUN_00999a20(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027befe8;
  FUN_00e70510(param_1 + 5);
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[8] = 0xbf80000000000000;
  return;
}




long FUN_00999a6c(undefined4 param_1,long param_2,undefined8 param_3,byte param_4,byte param_5,
                 byte param_6)

{
  FUN_00910394(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x44) = param_1;
  *(byte *)(param_2 + 0x48) = param_4 & 1;
  *(byte *)(param_2 + 0x49) = param_5 & 1;
  *(byte *)(param_2 + 0x4a) = param_6 & 1;
  return param_2;
}




void FUN_00999ac4(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x38) = param_3;
  *(undefined4 *)(param_2 + 0x40) = param_1;
  return;
}




undefined8 FUN_00999ad0(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    FUN_009c7108(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x40),*puVar4,
                 param_1 + 0x28,*(undefined1 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x49),
                 FUN_00999b78,param_2,*(undefined1 *)(param_1 + 0x4a),
                 *(undefined8 *)(param_1 + 0x38));
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_00999b78(undefined8 param_1)

{
  FUN_00d256d0(param_1,0xd);
  return;
}




void FUN_00999b80(void)

{
  return;
}




void FUN_00999b84(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf070;
  return;
}




undefined8 FUN_00999bb4(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    FUN_009c7390(*puVar4);
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_00999c34(void)

{
  return;
}




void FUN_00999c38(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf0f8;
  FUN_00e70510(param_1 + 5);
  return;
}




long FUN_00999c6c(long param_1)

{
  FUN_00910394(param_1 + 0x28);
  return param_1;
}




undefined8 FUN_00999c94(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    FUN_009c73a0(*puVar4,param_1 + 0x28);
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_00999d1c(void)

{
  return;
}




void FUN_00999d20(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf180;
  return;
}




undefined8 FUN_00999d50(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    FUN_009c73b0(*puVar4);
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_00999dd0(void)

{
  return;
}




void FUN_00999dd4(undefined8 *param_1)

{
  FUN_00d0aac4();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_027bf208;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}




void FUN_00999e0c(long param_1,undefined8 param_2,byte param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(byte *)(param_1 + 0x38) = param_3 & 1;
  return;
}




undefined8 FUN_00999e1c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar3 = 2;
  }
  else {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar2 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    uVar3 = *puVar2;
    *(long *)(param_1 + 0x30) = param_2;
    FUN_009c73e8(uVar3,*(undefined8 *)(param_1 + 0x28),FUN_00999ed0,param_1);
    if (*(char *)(param_1 + 0x38) == '\0') {
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
      FUN_009253e0(1);
    }
  }
  return uVar3;
}




void FUN_00999ed0(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00d256d0(*(long *)(param_1 + 0x30),0xd);
  }
  FUN_009253e0(0);
  FUN_00984fe4(auStack_50,0xbe829ca6);
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00999f44(void)

{
  return;
}




void FUN_00999f48(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf290;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  thunk_FUN_00e7051c(param_1 + 5,&DAT_03210450);
  return;
}




void FUN_00999f88(long param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00910394(param_1 + 0x28,param_3);
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00999fb8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar3 = 2;
  }
  else {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar2 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    FUN_009c7408(*puVar2,*(undefined4 *)(param_1 + 0x24),param_1 + 0x28,FUN_0099a050,param_2);
    uVar3 = 1;
  }
  return uVar3;
}

