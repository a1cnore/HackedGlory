// functions/01998 — 29 functions
#include "libGameKindred.h"




void FUN_01998010(undefined2 *param_1)

{
  long lVar1;
  undefined2 *puVar2;
  
  lVar1 = 1;
  puVar2 = param_1;
  do {
    *puVar2 = (short)lVar1;
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 0xc;
  } while (lVar1 != 0x1000);
  *(undefined8 *)(param_1 + 0xc000) = 0xfff0000;
  lVar1 = 1;
  puVar2 = param_1 + 0xc008;
  do {
    *puVar2 = (short)lVar1;
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 0x30;
  } while (lVar1 != 0x400);
  *(undefined8 *)(param_1 + 0x18008) = 0x3ff0000;
  *(undefined8 *)(param_1 + 0x18014) = 0;
  *(undefined8 *)(param_1 + 0x18010) = 0;
  *(undefined4 *)(param_1 + 0x18018) = 0;
  *(undefined8 *)(param_1 + 0x18020) = 0;
  *(undefined8 *)(param_1 + 0x1801c) = 0;
  *(undefined4 *)(param_1 + 0x18024) = 0;
  *(undefined8 *)(param_1 + 0x18028) = 0;
  *(undefined8 *)(param_1 + 0x18034) = 0;
  *(undefined8 *)(param_1 + 0x18030) = 0;
  *(undefined2 **)(param_1 + 0x1802c) = param_1 + 0x18030;
  return;
}




void FUN_019980d0(long param_1)

{
  FUN_01998144();
  FUN_01998c58(param_1 + 0x30058,*(undefined8 *)(param_1 + 0x30060));
  *(undefined4 *)(param_1 + 0x30048) = 0;
  *(undefined8 *)(param_1 + 0x30040) = 0;
  *(undefined8 *)(param_1 + 0x30038) = 0;
  *(undefined8 *)(param_1 + 0x30028) = 0;
  *(undefined8 *)(param_1 + 0x30020) = 0;
  *(undefined4 *)(param_1 + 0x30030) = 0;
  return;
}




void thunk_FUN_01998144(undefined2 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined2 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x18010);
  while (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x50);
    FUN_01997d80();
  }
  lVar2 = *(long *)(param_1 + 0x1801c);
  while (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x50);
    FUN_01997d80();
  }
  lVar2 = 1;
  *(undefined4 *)(param_1 + 0x18018) = 0;
  *(long *)(param_1 + 0x18010) = 0;
  *(undefined8 *)(param_1 + 0x18014) = 0;
  *(long *)(param_1 + 0x1801c) = 0;
  *(undefined8 *)(param_1 + 0x18020) = 0;
  *(undefined4 *)(param_1 + 0x18024) = 0;
  puVar3 = param_1;
  do {
    *puVar3 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 0xc;
  } while (lVar2 != 0x1000);
  *(undefined8 *)(param_1 + 0xc000) = 0xfff0000;
  lVar2 = 1;
  puVar3 = param_1 + 0xc008;
  do {
    *puVar3 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 0x30;
  } while (lVar2 != 0x400);
  *(undefined8 *)(param_1 + 0x18008) = 0x3ff0000;
  puVar1 = (undefined8 *)(param_1 + 0x18030);
  FUN_01998c58(param_1 + 0x1802c,*puVar1);
  *(undefined8 **)(param_1 + 0x1802c) = puVar1;
  *(undefined8 *)(param_1 + 0x18034) = 0;
  *puVar1 = 0;
  return;
}




void FUN_01998144(undefined2 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined2 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x18010);
  while (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x50);
    FUN_01997d80();
  }
  lVar2 = *(long *)(param_1 + 0x1801c);
  while (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x50);
    FUN_01997d80();
  }
  lVar2 = 1;
  *(undefined4 *)(param_1 + 0x18018) = 0;
  *(long *)(param_1 + 0x18010) = 0;
  *(undefined8 *)(param_1 + 0x18014) = 0;
  *(long *)(param_1 + 0x1801c) = 0;
  *(undefined8 *)(param_1 + 0x18020) = 0;
  *(undefined4 *)(param_1 + 0x18024) = 0;
  puVar3 = param_1;
  do {
    *puVar3 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 0xc;
  } while (lVar2 != 0x1000);
  *(undefined8 *)(param_1 + 0xc000) = 0xfff0000;
  lVar2 = 1;
  puVar3 = param_1 + 0xc008;
  do {
    *puVar3 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 0x30;
  } while (lVar2 != 0x400);
  *(undefined8 *)(param_1 + 0x18008) = 0x3ff0000;
  puVar1 = (undefined8 *)(param_1 + 0x18030);
  FUN_01998c58(param_1 + 0x1802c,*puVar1);
  *(undefined8 **)(param_1 + 0x1802c) = puVar1;
  *(undefined8 *)(param_1 + 0x18034) = 0;
  *puVar1 = 0;
  return;
}




void FUN_0199824c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 0x30050) != 0) &&
     (uVar3 = FUN_0199838c(param_1,param_2), (uVar3 & 1) == 0)) {
    lVar4 = FUN_01998bd4(param_1 + 0x18010);
    *(undefined4 *)(lVar4 + 0x24) = 0;
    *(undefined1 *)(lVar4 + 0x4a) = param_3;
    uVar2 = FUN_00e6a474(param_2);
    uVar2 = FUN_0091ed5c(param_2,uVar2,0x12345678);
    *(undefined4 *)(lVar4 + 0x20) = uVar2;
    plVar5 = (long *)(param_1 + 0x30020);
    lVar6 = *plVar5;
    *(long *)(lVar4 + 0x50) = lVar6;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    if (lVar6 == 0) {
      *plVar5 = lVar4;
      plVar5 = (long *)(param_1 + 0x30028);
    }
    else {
      *(long *)(lVar6 + 0x58) = lVar4;
    }
    *plVar5 = lVar4;
    *(int *)(param_1 + 0x30030) = *(int *)(param_1 + 0x30030) + 1;
    local_58[0] = *(undefined4 *)(lVar4 + 0x20);
    local_50 = lVar4;
    FUN_01998ca4(param_1 + 0x30058,local_58,local_58);
    plVar5 = *(long **)(param_1 + 0x30050);
    (**(code **)(*plVar5 + 0x10))(plVar5,param_2,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_0199838c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = FUN_00e6a474(param_2);
  uVar3 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  plVar1 = (long *)(param_1 + 0x30060);
  plVar5 = (long *)*plVar1;
  plVar4 = plVar1;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= uVar3) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < uVar3];
    } while (plVar5 != (long *)0x0);
    if (plVar4 != plVar1) {
      if (uVar3 < *(uint *)(plVar4 + 4)) {
        return false;
      }
      return plVar4[5] != 0;
    }
  }
  return false;
}




void FUN_01998424(long param_1)

{
  FUN_01998bd4(param_1 + 0x18010);
  return;
}




long FUN_01998444(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 0x30060);
  plVar4 = (long *)*plVar1;
  plVar3 = plVar1;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= param_2) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < param_2];
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar1) {
      lVar2 = 0;
      if (*(uint *)(plVar3 + 4) <= param_2) {
        lVar2 = plVar3[5];
      }
      return lVar2;
    }
  }
  return 0;
}




void FUN_0199849c(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort *puVar6;
  long *plVar7;
  long lVar8;
  ushort uVar9;
  long *plVar10;
  long lVar11;
  
  uVar4 = FUN_00e6a474(param_2);
  uVar5 = FUN_0091ed5c(param_2,uVar4,0x12345678);
  plVar1 = (long *)(param_1 + 0x30060);
  plVar10 = (long *)*plVar1;
  plVar7 = plVar1;
  if (plVar10 != (long *)0x0) {
    do {
      if (*(uint *)(plVar10 + 4) >= uVar5) {
        plVar7 = plVar10;
      }
      plVar10 = (long *)plVar10[*(uint *)(plVar10 + 4) < uVar5];
    } while (plVar10 != (long *)0x0);
    if (plVar7 != plVar1) {
      lVar11 = 0;
      if (*(uint *)(plVar7 + 4) <= uVar5) {
        lVar11 = plVar7[5];
      }
      goto LAB_01998534;
    }
  }
  lVar11 = 0;
LAB_01998534:
  lVar8 = lVar11 + 0x30;
  FUN_019a032c(0,0x447a0000,lVar8);
  FUN_019a02cc(lVar8,param_3,param_4,0);
  FUN_019a02fc(lVar8,param_5,param_5,0);
  *(undefined4 *)(lVar11 + 0x44) = 0;
  *(int *)(lVar11 + 0x4c) = *(int *)(lVar11 + 0x4c) + 1;
  if ((((*(long *)(lVar11 + 0x28) == 0) ||
       (bVar2 = *(byte *)(*(long *)(lVar11 + 0x28) + 0x10), (bVar2 & 3) != param_3)) ||
      ((bVar2 >> 2 & 3) != param_4)) || ((bVar2 >> 4 & 1) != param_5)) {
    uVar3 = *(ushort *)(param_1 + 0x18000);
    puVar6 = (ushort *)(param_1 + (ulong)uVar3 * 0x18);
    if (uVar3 == *(ushort *)(param_1 + 0x18002)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar6;
    }
    *(ushort *)(param_1 + 0x18000) = uVar9;
    *(undefined ***)puVar6 = &PTR_FUN_02baf370;
    lVar8 = param_1 + (ulong)uVar3 * 0x18;
    *(int *)(param_1 + 0x18004) = *(int *)(param_1 + 0x18004) + 1;
    *(long *)(lVar8 + 8) = lVar11;
    *(byte *)(lVar8 + 0x10) =
         (byte)param_3 & 3 | (byte)((param_4 & 3) << 2) | (byte)((param_5 & 1) << 4) |
         *(byte *)(lVar8 + 0x10) & 0xe0;
    if (*(long *)(lVar11 + 0x28) == 0) {
      *(ushort **)(lVar11 + 0x28) = puVar6;
    }
  }
  return;
}




uint FUN_01998658(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x28);
  uVar1 = FUN_019986ac();
  if ((lVar2 != param_2) || ((uVar1 & 1) != 0)) {
    FUN_01998720(param_1,param_2);
  }
  return uVar1 & 1;
}




bool FUN_019986ac(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x4c);
  iVar2 = iVar1 + -1;
  *(int *)(param_2 + 0x4c) = iVar2;
  if (iVar2 == 0 || iVar1 < 1) {
    FUN_01998dc4(param_1 + 0x30058,param_2 + 0x20);
    FUN_019987cc(param_1 + 0x30020,param_2);
    FUN_0199882c(param_1 + 0x18010,param_2);
  }
  return iVar2 == 0 || iVar1 < 1;
}




void FUN_01998720(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  
  (**(code **)*param_2)(param_2);
  if (*(short *)(param_1 + 0x18000) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * -0x5555;
    *(short *)(param_1 + 0x18002) = sVar2;
    *(short *)(param_1 + 0x18000) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x18002);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * -0x5555;
    *(short *)(param_1 + 0x18002) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0x18) = sVar2;
  }
  *(int *)(param_1 + 0x18004) = *(int *)(param_1 + 0x18004) + -1;
  return;
}




void FUN_019987cc(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x50);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x58);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x50) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x58);
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(long *)(*(long *)(param_2 + 0x50) + 0x58) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_0199882c(long param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  
  FUN_01997d80(param_2);
  if (*(short *)(param_1 + 0x18000) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 5) * -0x5555;
    *(short *)(param_1 + 0x18002) = sVar2;
    *(short *)(param_1 + 0x18000) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x18002);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 5) * -0x5555;
    *(short *)(param_1 + 0x18002) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0x60) = sVar2;
  }
  *(int *)(param_1 + 0x18004) = *(int *)(param_1 + 0x18004) + -1;
  return;
}




void FUN_019988d0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30050) = param_2;
  return;
}




void FUN_019988e0(long param_1)

{
  *(undefined8 *)(param_1 + 0x30050) = 0;
  return;
}




void FUN_019988f0(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  memset(param_2,0,0x88);
  local_3c = 0;
  for (lVar5 = *(long *)(param_1 + 0x30020); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x50)) {
    if (*(int *)(lVar5 + 0x24) == 1) {
      FUN_019a0330(lVar5 + 0x30,&local_3c);
      *param_2 = *param_2 + 1;
      param_2[1] = param_2[1] + local_3c;
      uVar4 = 0;
      uVar3 = *(uint *)(lVar5 + 0x38) & 0x3fff;
      if (uVar3 != 1) {
        uVar4 = 0;
        do {
          uVar3 = uVar3 >> 1;
          uVar4 = uVar4 + 1;
        } while (uVar3 != 1);
      }
      lVar2 = (ulong)uVar4 + 2;
      if ((*(uint *)(lVar5 + 0x34) & 0x1f0000) != 0x10000) {
        lVar2 = (ulong)uVar4 + 0x12;
      }
      param_2[lVar2] = param_2[lVar2] + 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_019989ec(undefined8 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = 1;
  return;
}




void FUN_019989f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ushort *puVar3;
  long lVar4;
  ushort uVar5;
  long *plVar6;
  float fVar7;
  undefined1 local_108 [192];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_01998bd4(param_1 + 0x18010);
  *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
  plVar6 = (long *)(param_1 + 0x30020);
  lVar4 = *plVar6;
  *(long *)(lVar2 + 0x50) = lVar4;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  if (lVar4 == 0) {
    *plVar6 = lVar2;
    plVar6 = (long *)(param_1 + 0x30028);
  }
  else {
    *(long *)(lVar4 + 0x58) = lVar2;
  }
  *plVar6 = lVar2;
  lVar4 = 0;
  *(int *)(param_1 + 0x30030) = *(int *)(param_1 + 0x30030) + 1;
  do {
    fVar7 = (float)NEON_fminnm((int)(*(float *)(param_2 + lVar4 * 4) * 255.0),0x437f0000);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    local_108[lVar4] = (char)(int)fVar7;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0xc0);
  lVar4 = lVar2 + 0x30;
  FUN_0199fc70(lVar4,0);
  FUN_0199fccc(lVar4,local_108,0x40,1,1,0,0);
  FUN_019a02cc(lVar4,2,2,0);
  FUN_019a02fc(lVar4,1,1,0);
  *(undefined4 *)(lVar2 + 0x24) = 1;
  uVar5 = *(ushort *)(param_1 + 0x18000);
  if ((ulong)uVar5 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(param_1 + (ulong)uVar5 * 0x18);
    if (uVar5 == *(ushort *)(param_1 + 0x18002)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar3;
    }
    *(ushort *)(param_1 + 0x18000) = uVar5;
    *(undefined ***)puVar3 = &PTR_FUN_02baf370;
    *(int *)(param_1 + 0x18004) = *(int *)(param_1 + 0x18004) + 1;
  }
  *(long *)(puVar3 + 4) = lVar2;
  *(byte *)(puVar3 + 8) = (byte)puVar3[8] & 0xe0 | 0x1a;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ushort * FUN_01998bd4(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x18000);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 0x60);
    if (uVar1 == *(ushort *)(param_1 + 0x18002)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x18000) = uVar1;
    FUN_01997d34(puVar2);
    *(int *)(param_1 + 0x18004) = *(int *)(param_1 + 0x18004) + 1;
  }
  return puVar2;
}




void FUN_01998c58(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_01998c58(param_1,*param_2);
    FUN_01998c58(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_01998ca4(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_01998d1c;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_01998d1c:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_01998d70(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_01998d70(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined8 FUN_01998dc4(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    plVar2 = plVar3;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if (plVar2 != plVar3) {
      if (uVar1 < *(uint *)(plVar2 + 4)) {
        return 0;
      }
      FUN_01998e2c();
      return 1;
    }
  }
  return 0;
}




long * FUN_01998e2c(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_01998ec0(long param_1,undefined8 param_2)

{
  FUN_01997dd0(*(undefined8 *)(param_1 + 8),param_2,param_1);
  return;
}




void FUN_01998ed0(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02baf398;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}




void FUN_01998ef0(void)

{
  return;
}




undefined8
FUN_01998ef8(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00e7a7e4(0x38);
  FUN_00e7a3c0();
  puVar2[6] = 0;
  *puVar2 = &PTR_thunk_FUN_00e7a3d4_02baf3b8;
  puVar7 = puVar2 + 2;
  *puVar7 = &PTR_FUN_02baf3d8;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  *(undefined4 *)(puVar2 + 5) = param_1;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar7;
  local_60[1] = thunk_FUN_01999398;
  uVar3 = FUN_00e7b734(&local_60,0x8cc8426f);
  uVar3 = FUN_00e7b740(uVar3,param_5);
  FUN_00e7b7f0(uVar3,puVar2);
  uVar3 = FUN_00e7b844();
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar7;
  local_60[1] = thunk_FUN_01999638;
  uVar4 = FUN_00e7b734(&local_60,0x589a4f97);
  uVar5 = FUN_00e7a0d0();
  uVar4 = FUN_00e7b728(uVar4,uVar5);
  uVar4 = FUN_00e7b740(uVar4,uVar3);
  uVar4 = FUN_00e7b784(uVar4,param_6);
  FUN_00e7b7f0(uVar4,puVar2);
  uVar4 = FUN_00e7b844();
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar7;
  local_60[1] = thunk_FUN_019996cc;
  uVar5 = FUN_00e7b734(&local_60,0x94ef0e1d);
  uVar6 = FUN_00e7a0ec();
  uVar5 = FUN_00e7b728(uVar5,uVar6);
  uVar4 = FUN_00e7b740(uVar5,uVar4);
  FUN_00e7b7f0(uVar4,puVar2);
  uVar4 = FUN_00e7b844();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,uVar4);
}

