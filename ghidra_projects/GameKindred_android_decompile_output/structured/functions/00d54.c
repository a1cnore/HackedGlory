// functions/00d54 — 59 functions
#include "libGameKindred.h"




void FUN_00d5401c(undefined8 param_1)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_30);
  FUN_00d5412c(param_1,local_30[0]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d54074(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  while ((uVar1 = *(uint *)(param_1 + 0x108 + lVar2 * 4), (uVar1 >> 0x1e & 1) == 0 ||
         ((uVar1 & 0x7fff) != param_2))) {
    lVar2 = lVar2 + 1;
    if (0x13 < (uint)lVar2) {
      return 0;
    }
  }
  return 1;
}




undefined8 FUN_00d540ac(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  while (((uVar1 = *(uint *)(param_1 + 0x108 + uVar2 * 4), (uVar1 >> 0x1e & 1) == 0 ||
          ((uVar1 & 0x7fff) != param_2)) || ((uVar1 >> 0xf & 0x7fff) != param_3))) {
    uVar2 = uVar2 + 1;
    if (0x13 < uVar2) {
      return 0;
    }
  }
  return 1;
}




long FUN_00d540f0(long param_1,long param_2)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x198) != 0) {
    lVar1 = 0;
    do {
      if (*(long *)(param_1 + 0x50 + lVar1 * 8) == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < (uint)*(byte *)(param_1 + 0x198));
  }
  return 0xffffffff;
}




ulong FUN_00d5412c(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar6 = 0;
    do {
      puVar7 = (undefined8 *)(param_1 + uVar6 * 8 + 0x50);
      uVar2 = FUN_00d50460(*puVar7);
      thunk_FUN_00d9ff34(local_50,uVar2);
      if (local_50[0] == param_2) goto LAB_00d541ec;
      pbVar3 = (byte *)FUN_00d50460(*puVar7);
      uVar5 = 0x811c9dc5;
      if (*pbVar3 != 0) {
        uVar5 = 0x811c9dc5;
        uVar4 = (uint)*pbVar3;
        do {
          pbVar3 = pbVar3 + 1;
          uVar5 = (uVar5 ^ uVar4) * 0x1000193;
          uVar4 = (uint)*pbVar3;
        } while (*pbVar3 != 0);
      }
      if (uVar5 == param_2) goto LAB_00d541ec;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_1 + 0x198));
  }
  uVar6 = 0xffffffff;
LAB_00d541ec:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00d5421c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + 0x50 + lVar1 * 8) == *(long *)(param_1 + (ulong)param_2 * 8 + 0xf0)) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 0x14);
  return 0xffffffff;
}




undefined4 FUN_00d54258(long param_1)

{
  return *(undefined4 *)(param_1 + 0x194);
}




undefined8 FUN_00d54260(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + 0xf0 + lVar1 * 8) == *(long *)(param_1 + (ulong)param_2 * 8 + 0x50)) {
      return 1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 3);
  return 0;
}




ulong FUN_00d54298(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  do {
    if (*(long *)(param_1 + 0xf0 + uVar1 * 8) == *(long *)(param_1 + (ulong)param_2 * 8 + 0x50)) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return 0xffffffff;
}




void FUN_00d542cc(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 local_30 [2];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  thunk_FUN_00d9ff34(local_30);
  uVar3 = FUN_00d5412c(param_1,local_30[0]);
  lVar4 = 0x114;
  do {
    lVar1 = param_1 + lVar4;
    uVar6 = *(ulong *)(lVar1 + -4);
    uVar5 = *(ulong *)(lVar1 + -0xc);
    uVar7 = (uint)((ushort)uVar6 & 0x7fff);
    if ((uVar5 & 0x40000000) != 0 && ((ushort)uVar5 & 0x7fff) == uVar3) {
      *(uint *)(lVar1 + -0xc) = (uint)uVar5 & 0x3fffffff;
    }
    if ((uVar5 & 0x4000000000000000) != 0 && ((ushort)(uVar5 >> 0x20) & 0x7fff) == uVar3) {
      *(uint *)(param_1 + lVar4 + -8) = (uint)(uVar5 >> 0x20) & 0x3fffffff;
    }
    if ((uVar6 & 0x40000000) != 0 && uVar7 == uVar3) {
      *(uint *)(param_1 + lVar4 + -4) = (uint)uVar6 & 0x3fffffff;
    }
    if ((uVar6 & 0x4000000000000000) != 0 &&
        ((ushort)(CONCAT15((char)(uVar6 >> 0x28),CONCAT14((char)(uVar6 >> 0x20),uVar7)) >> 0x20) &
        0x7fff) == uVar3) {
      *(uint *)(param_1 + lVar4) = (uint)(uVar6 >> 0x20) & 0x3fffffff;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x164);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d543b8(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar2 = 0x114;
  do {
    lVar1 = param_1 + lVar2;
    uVar4 = *(ulong *)(lVar1 + -4);
    uVar3 = *(ulong *)(lVar1 + -0xc);
    uVar5 = (uint)((ushort)uVar4 & 0x7fff);
    if ((uVar3 & 0x40000000) != 0 && ((ushort)uVar3 & 0x7fff) == param_2) {
      *(uint *)(lVar1 + -0xc) = (uint)uVar3 & 0x3fffffff;
    }
    if ((uVar3 & 0x4000000000000000) != 0 && ((ushort)(uVar3 >> 0x20) & 0x7fff) == param_2) {
      *(uint *)(param_1 + lVar2 + -8) = (uint)(uVar3 >> 0x20) & 0x3fffffff;
    }
    if ((uVar4 & 0x40000000) != 0 && uVar5 == param_2) {
      *(uint *)(param_1 + lVar2 + -4) = (uint)uVar4 & 0x3fffffff;
    }
    if ((uVar4 & 0x4000000000000000) != 0 &&
        ((ushort)(CONCAT15((char)(uVar4 >> 0x28),CONCAT14((char)(uVar4 >> 0x20),uVar5)) >> 0x20) &
        0x7fff) == param_2) {
      *(uint *)(param_1 + lVar2) = (uint)(uVar4 >> 0x20) & 0x3fffffff;
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x164);
  return;
}




void FUN_00d54450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_50 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  thunk_FUN_00d9ff34(local_50);
  uVar4 = FUN_00d5412c(param_1,local_50[0]);
  thunk_FUN_00d9ff34(local_50,param_3);
  uVar5 = FUN_00d5412c(param_1,local_50[0]);
  plVar1 = (long *)(param_1 + 0x50 + (uVar4 & 0xffffffff) * 8);
  FUN_00d5074c(*plVar1);
  puVar2 = (undefined8 *)(param_1 + 0x50 + (uVar5 & 0xffffffff) * 8);
  FUN_00d52118(*puVar2);
  lVar6 = 0;
  do {
    if (*(long *)(param_1 + 0xf0 + lVar6) == *plVar1) {
      *(undefined8 *)(param_1 + 0xf0 + lVar6) = *puVar2;
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x18);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d54528(long param_1,uint param_2)

{
  FUN_00d5075c(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d54534(long param_1,uint param_2)

{
  FUN_00d50aa4(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d54540(long param_1,uint param_2)

{
  FUN_00d504b8(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d5454c(long param_1,uint param_2)

{
  FUN_00d50f24(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d54558(long param_1,uint param_2)

{
  FUN_00d50f30(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d54564(long param_1,ulong param_2,undefined4 param_3)

{
  FUN_00d51a58(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50),param_3);
  return;
}




void FUN_00d54574(long param_1,uint param_2)

{
  FUN_00d5210c(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d54580(long param_1,uint param_2)

{
  FUN_00d509fc(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d5458c(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_00d51194(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50),param_3);
  return;
}




void FUN_00d5459c(long param_1,uint param_2)

{
  FUN_00d50a98(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d545b8(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_00d50f3c(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50),param_3);
  return;
}




void FUN_00d545c8(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_00d511c0(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50),param_3);
  return;
}




void FUN_00d545d8(long param_1,uint param_2)

{
  FUN_00d516dc(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d545e4(long param_1,uint param_2)

{
  FUN_00d516e8(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d545f0(long param_1,ulong param_2,undefined4 param_3)

{
  FUN_00d5173c(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50),param_3);
  return;
}




void FUN_00d54600(long param_1,ulong param_2,undefined4 param_3)

{
  FUN_00d51718(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50),param_3);
  return;
}




ulong FUN_00d54610(long param_1,ulong param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 8;
  uVar1 = FUN_00d516e8(*(undefined8 *)(param_1 + 0x50));
  lVar3 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x50));
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      iVar2 = strcmp((char *)**(undefined8 **)(*(long *)(lVar3 + 0xb0) + uVar4 * 8),param_3);
      if (iVar2 == 0) goto LAB_00d54678;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  uVar4 = 0xffffffff;
LAB_00d54678:
  return uVar4 & 0xffffffff;
}




uint FUN_00d5468c(long param_1,int *param_2,long param_3,uint param_4)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar4 = 0;
  if ((param_4 != 0) && (*(char *)(param_1 + 0x198) != '\0')) {
    uVar5 = 0;
    uVar4 = 0;
    do {
      plVar6 = (long *)(param_1 + uVar5 * 8 + 0x50);
      piVar1 = (int *)FUN_00d50ad4(*plVar6);
      if (*piVar1 == *param_2) {
        uVar2 = (ulong)*(byte *)(param_1 + 0x198);
        uVar3 = 0xffffffff;
        if (uVar2 != 0) {
          uVar3 = 0;
          do {
            if (*(long *)(param_1 + 0x50 + uVar3 * 8) == *plVar6) goto LAB_00d5472c;
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar2);
          uVar3 = 0xffffffff;
        }
LAB_00d5472c:
        *(int *)(param_3 + (ulong)uVar4 * 4) = (int)uVar3;
        uVar4 = uVar4 + 1;
      }
      else {
        uVar2 = (ulong)*(byte *)(param_1 + 0x198);
      }
    } while ((uVar4 < param_4) && (uVar5 = uVar5 + 1, uVar5 < uVar2));
  }
  return uVar4;
}




void FUN_00d54770(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50938();
    return;
  }
  return;
}




void FUN_00d54784(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d5092c();
    return;
  }
  return;
}




void FUN_00d54798(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d516d0();
    return;
  }
  return;
}




void FUN_00d547ac(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50944();
    return;
  }
  return;
}




void FUN_00d547c0(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d5095c();
    return;
  }
  return;
}




void FUN_00d547d4(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50968();
    return;
  }
  return;
}




void FUN_00d547e8(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50974();
    return;
  }
  return;
}




void FUN_00d547fc(long param_1,uint param_2)

{
  FUN_00d509d4(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




long FUN_00d54808(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + 0x50 + lVar1 * 8) == *(long *)(param_1 + 0xf0)) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 0x14);
  return 0xffffffff;
}




long FUN_00d54838(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + 0x50 + lVar1 * 8) == *(long *)(param_1 + 0xf8)) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 0x14);
  return 0xffffffff;
}




long FUN_00d54868(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + 0x50 + lVar1 * 8) == *(long *)(param_1 + 0x100)) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 0x14);
  return 0xffffffff;
}




void FUN_00d54898(long param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50);
  if (lVar1 != 0) {
    FUN_00d50b20(lVar1,param_3);
    return;
  }
  return;
}




undefined1  [16] FUN_00d548b0(long param_1,ulong param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50);
  if (lVar1 != 0) {
    FUN_00d506d8(lVar1,param_3,param_4 & 1);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




void FUN_00d548d4(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d51240();
    return;
  }
  return;
}




void FUN_00d548e8(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d5124c();
    return;
  }
  return;
}




bool FUN_00d548fc(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_00d504c4(lVar4);
    iVar3 = FUN_00d5124c(lVar4);
    bVar1 = iVar2 == iVar3;
  }
  return bVar1;
}




void FUN_00d54944(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d5134c();
    return;
  }
  return;
}




undefined4 FUN_00d54958(long param_1)

{
  return *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x19a) * 4 + 0x158);
}




long FUN_00d54968(long param_1)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x198) != 0) {
    lVar1 = 0;
    do {
      if (*(long *)(param_1 + 0x50 + lVar1 * 8) == *(long *)(param_1 + 0x30)) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < (uint)*(byte *)(param_1 + 0x198));
  }
  return 0xffffffff;
}




long FUN_00d549a8(long param_1)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x198) != 0) {
    lVar1 = 0;
    do {
      if (*(long *)(param_1 + 0x50 + lVar1 * 8) == *(long *)(param_1 + 0x40)) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < (uint)*(byte *)(param_1 + 0x198));
  }
  return 0xffffffff;
}




long FUN_00d549e8(long param_1)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x198) != 0) {
    lVar1 = 0;
    do {
      if (*(long *)(param_1 + 0x50 + lVar1 * 8) == *(long *)(param_1 + 0x48)) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < (uint)*(byte *)(param_1 + 0x198));
  }
  return 0xffffffff;
}




void FUN_00d54a28(long param_1,uint param_2)

{
  FUN_00d51aa0(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d54a34(long param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50);
  if (lVar1 != 0) {
    FUN_00d51dc0(lVar1,param_3);
    return;
  }
  return;
}




undefined8 * FUN_00d54a4c(undefined8 *param_1)

{
  long lVar1;
  
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((long)param_1 + 0x19a) = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281da88;
  *(undefined4 *)((long)param_1 + 0x194) = 0xffffffff;
  memset(param_1 + 10,0,0xa0);
  lVar1 = 0x158;
  do {
    *(undefined4 *)((long)param_1 + lVar1) = 0xffffffff;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x194);
  return param_1;
}




void FUN_00d54ac4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d54acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d54ad0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  undefined8 *puVar16;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_0281dab8;
  param_1[5] = &PTR_FUN_0281dae8;
  *(undefined4 *)(param_1 + 0xf) = DAT_03214ce8;
  puVar15 = (ushort *)(param_1 + 0x11);
  *puVar15 = *puVar15 & 0x8000 | 0x3ff;
  param_1[0x43] = param_1;
  *(undefined1 *)((long)param_1 + 0x96) = 0;
  *(undefined2 *)((long)param_1 + 0x94) = 0;
  puVar16 = param_1 + 0x12;
  *(undefined4 *)puVar16 = 0;
  param_1[0x49] = 0x3f800000;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0x3f80000000000000;
  param_1[0x45] = 0;
  param_1[0x44] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x264) = 0xff;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4b] = 0x3f80000000000000;
  param_1[0x4a] = 0;
  FUN_00d9ff2c((long)param_1 + 0x26c);
  FUN_00d9ff2c(param_1 + 0x4e);
  *(undefined4 *)((long)param_1 + 0x274) = 0xff;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x56] = 0;
  uVar8 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x57) = uVar8;
  *(undefined4 *)(param_1 + 0x5b) = uVar8;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  FUN_00ceabec((long)param_1 + 0x2fc);
  *(undefined2 *)((long)param_1 + 0x301) = 0x43ff;
  *(byte *)((long)param_1 + 0x303) = *(byte *)((long)param_1 + 0x303) & 0xf8;
  uVar7 = *puVar15;
  uVar6 = uVar7 & 0xffff83ff;
  uVar1 = (uVar7 + 0x400 & 0x7c00 | uVar6) + 0x400;
  uVar2 = (uVar1 & 0x7c00 | uVar6) + 0x400;
  uVar3 = (uVar2 & 0x7c00 | uVar6) + 0x400;
  uVar4 = (uVar3 & 0x7c00 | uVar6) + 0x400;
  uVar5 = (uVar4 & 0x7c00 | uVar6) + 0x400;
  puVar9 = puVar16 + (ulong)(uVar7 >> 10 & 0x1f) * 7;
  puVar10 = puVar16 + (ulong)(uVar7 + 0x400 >> 10 & 0x1f) * 7;
  puVar11 = puVar16 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  puVar12 = puVar16 + (ulong)(uVar2 >> 10 & 0x1f) * 7;
  puVar13 = puVar16 + (ulong)(uVar3 >> 10 & 0x1f) * 7;
  puVar14 = puVar16 + (ulong)(uVar4 >> 10 & 0x1f) * 7;
  puVar16 = puVar16 + (ulong)(uVar5 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar9 = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar10[2] = 0;
  puVar10[1] = FUN_00d54fcc;
  *(undefined4 *)puVar10 = 1;
  puVar10[3] = FUN_00d54fd0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar11[2] = 0;
  puVar11[1] = FUN_00d54fe8;
  *(undefined4 *)puVar11 = 2;
  puVar11[3] = FUN_00d55048;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar12[4] = 0;
  puVar12[3] = FUN_00d55060;
  puVar12[6] = 0;
  puVar12[5] = FUN_00d55294;
  *(undefined4 *)puVar12 = 3;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar13[2] = 0;
  puVar13[1] = FUN_00d5529c;
  *(undefined4 *)puVar13 = 4;
  puVar13[3] = FUN_00d552e4;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  *(undefined4 *)puVar14 = 5;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[4] = 0;
  puVar14[3] = FUN_00d552e8;
  puVar14[6] = 0;
  puVar14[5] = FUN_00d552ec;
  *(undefined4 *)puVar16 = 6;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[1] = FUN_00d55300;
  puVar16[2] = 0;
  *puVar15 = ((ushort)uVar5 & 0x7c00 | (ushort)uVar6) + 0x400 & 0x7c00 | (ushort)uVar6;
  FUN_00d55304(puVar15,0,1);
  FUN_00d55304(puVar15,0,2);
  FUN_00d55304(puVar15,0,3);
  FUN_00d55304(puVar15,0,4);
  FUN_00d55304(puVar15,0,5);
  FUN_00d55304(puVar15,0,6);
  FUN_00d55304(puVar15,1,2);
  FUN_00d55304(puVar15,1,3);
  FUN_00d55304(puVar15,1,4);
  FUN_00d55304(puVar15,1,5);
  FUN_00d55304(puVar15,1,6);
  FUN_00d55304(puVar15,2,1);
  FUN_00d55304(puVar15,2,3);
  FUN_00d55304(puVar15,2,4);
  FUN_00d55304(puVar15,2,5);
  FUN_00d55304(puVar15,3,4);
  FUN_00d55304(puVar15,3,1);
  FUN_00d55304(puVar15,4,1);
  FUN_00d55304(puVar15,5,3);
  FUN_00d55304(puVar15,5,2);
  FUN_00d55304(puVar15,5,4);
  FUN_00d55304(puVar15,5,1);
  FUN_00d55304(puVar15,5,6);
  FUN_00d55304(puVar15,6,1);
  FUN_00d55304(puVar15,6,2);
  FUN_00d55304(puVar15,6,3);
  FUN_00d55304(puVar15,6,4);
  FUN_00d55304(puVar15,6,5);
  FUN_00d5538c(puVar15,0,0,0);
  return;
}




void FUN_00d54fcc(void)

{
  return;
}




void FUN_00d54fd0(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d54fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))();
    return;
  }
  return;
}




void FUN_00d54fe8(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    if ((*(byte *)(param_1 + 0x2f8) & 0x81) != 0) {
      FUN_00da2cc4(param_1);
    }
    uVar1 = FUN_00da2da8(param_1);
    if ((uVar1 & 1) == 0) {
      FUN_00d5538c(param_1 + 0x88,1,0,0);
      return;
    }
  }
  return;
}

