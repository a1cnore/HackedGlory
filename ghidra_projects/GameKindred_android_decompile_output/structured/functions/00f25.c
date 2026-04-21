// functions/00f25 — 9 functions
#include "libGameKindred.h"




void FUN_00f25110(long param_1)

{
  *(long *)(param_1 + 0xb48) = param_1 + 0xc4;
  *(undefined ***)(param_1 + 0xb58) = &PTR_DAT_02bf2690;
  *(long *)(param_1 + 0xb60) = param_1 + 0x9b8;
  *(undefined ***)(param_1 + 0xb70) = &PTR_DAT_02bf26b0;
  *(long *)(param_1 + 0xb78) = param_1 + 0xaac;
  *(undefined2 *)(param_1 + 0x1720) = 0;
  *(undefined **)(param_1 + 0xb88) = &DAT_02bf26d0;
  *(undefined4 *)(param_1 + 0x1724) = 0;
  FUN_00f25158();
  return;
}




void FUN_00f25158(long param_1)

{
  long lVar1;
  
  lVar1 = 0xc4;
  do {
    *(undefined2 *)(param_1 + lVar1) = 0;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x53c);
  lVar1 = 0;
  do {
    *(undefined2 *)(param_1 + 0x9b8 + lVar1) = 0;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x78);
  lVar1 = 0;
  do {
    *(undefined2 *)(param_1 + 0xaac + lVar1) = 0;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x4c);
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined2 *)(param_1 + 0x4c4) = 1;
  *(undefined8 *)(param_1 + 0x1710) = 0;
  *(undefined8 *)(param_1 + 0x1708) = 0;
  *(undefined4 *)(param_1 + 0x1718) = 0;
  return;
}




void FUN_00f251bc(long param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1724);
  uVar3 = (uint)*(ushort *)(param_1 + 0x1720) | (param_4 & 0xffff) << (ulong)(uVar1 & 0x1f);
  *(short *)(param_1 + 0x1720) = (short)uVar3;
  if ((int)uVar1 < 0xe) {
    iVar4 = uVar1 + 3;
  }
  else {
    puVar5 = (uint *)(param_1 + 0x28);
    uVar1 = *puVar5;
    *puVar5 = uVar1 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)uVar3;
    uVar1 = *puVar5;
    *puVar5 = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1721);
    *(short *)(param_1 + 0x1720) =
         (short)((param_4 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f));
    iVar4 = *(int *)(param_1 + 0x1724) + -0xd;
  }
  *(int *)(param_1 + 0x1724) = iVar4;
  FUN_00f261e4(param_1);
  puVar5 = (uint *)(param_1 + 0x28);
  uVar1 = *puVar5;
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)param_3;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)(param_3 >> 8);
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)~param_3;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)(~param_3 >> 8);
  if (param_3 != 0) {
    iVar4 = -param_3;
    do {
      uVar2 = *param_2;
      uVar1 = *puVar5;
      iVar4 = iVar4 + 1;
      *puVar5 = uVar1 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = uVar2;
      param_2 = param_2 + 1;
    } while (iVar4 != 0);
  }
  return;
}




void thunk_FUN_00f25304(long param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1724) == 0x10) {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1720);
    uVar1 = *(uint *)(param_1 + 0x28);
    iVar2 = 0;
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1724) < 8) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1720);
    *(ushort *)(param_1 + 0x1720) = (ushort)*(byte *)(param_1 + 0x1721);
    iVar2 = *(int *)(param_1 + 0x1724) + -8;
  }
  *(int *)(param_1 + 0x1724) = iVar2;
  return;
}




void FUN_00f25304(long param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1724) == 0x10) {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1720);
    uVar1 = *(uint *)(param_1 + 0x28);
    iVar2 = 0;
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1724) < 8) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1720);
    *(ushort *)(param_1 + 0x1720) = (ushort)*(byte *)(param_1 + 0x1721);
    iVar2 = *(int *)(param_1 + 0x1724) + -8;
  }
  *(int *)(param_1 + 0x1724) = iVar2;
  return;
}




void FUN_00f25394(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x1724);
  uVar2 = (uint)*(ushort *)(param_1 + 0x1720) | 2 << (ulong)(uVar1 & 0x1f);
  *(short *)(param_1 + 0x1720) = (short)uVar2;
  if ((int)uVar1 < 0xe) {
    iVar3 = uVar1 + 3;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)uVar2;
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1721);
    uVar2 = 2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
    *(short *)(param_1 + 0x1720) = (short)uVar2;
    iVar3 = *(int *)(param_1 + 0x1724) + -0xd;
  }
  *(int *)(param_1 + 0x1724) = iVar3;
  if (iVar3 < 10) {
    iVar3 = iVar3 + 7;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)uVar2;
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
    iVar3 = *(int *)(param_1 + 0x1724) + -9;
  }
  *(int *)(param_1 + 0x1724) = iVar3;
  FUN_00f25304();
  return;
}




void FUN_00f2545c(long *param_1,long param_2,long param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  short *psVar14;
  uint uVar15;
  ulong uVar16;
  
  if (*(int *)((long)param_1 + 0xb4) < 1) {
    uVar13 = param_3 + 5;
    iVar9 = 0;
    uVar16 = uVar13;
  }
  else {
    if (*(int *)(*param_1 + 0x58) == 2) {
      uVar13 = 0;
      psVar14 = (short *)((long)param_1 + 0xc4);
      uVar16 = 0xf3ffc07f;
      do {
        if (((uVar16 & 1) != 0) && (*psVar14 != 0)) {
          uVar11 = 0;
          goto LAB_00f25528;
        }
        uVar13 = uVar13 + 1;
        uVar16 = uVar16 >> 1;
        psVar14 = psVar14 + 2;
      } while (uVar13 < 0x20);
      if ((((short)param_1[0x1d] == 0) && (*(short *)((long)param_1 + 0xec) == 0)) &&
         ((short)param_1[0x1f] == 0)) {
        psVar14 = (short *)((long)param_1 + 0x144);
        uVar13 = 0x20;
        do {
          if (*psVar14 != 0) goto LAB_00f2551c;
          uVar13 = uVar13 + 1;
          psVar14 = psVar14 + 2;
        } while (uVar13 < 0x100);
        uVar11 = 0;
      }
      else {
LAB_00f2551c:
        uVar11 = 1;
      }
LAB_00f25528:
      *(undefined4 *)(*param_1 + 0x58) = uVar11;
    }
    FUN_00f2596c(param_1,param_1 + 0x169);
    FUN_00f2596c(param_1,param_1 + 0x16c);
    FUN_00f2640c(param_1,(long)param_1 + 0xc4,(int)param_1[0x16a]);
    FUN_00f2640c(param_1,param_1 + 0x137,(int)param_1[0x16d]);
    FUN_00f2596c(param_1,param_1 + 0x16f);
    uVar13 = 0x12;
    do {
      if (*(short *)((long)param_1 + (ulong)(byte)(&DAT_01bf51c8)[uVar13] * 4 + 0xaae) != 0)
      goto LAB_00f255a0;
      uVar16 = uVar13 - 1;
      bVar1 = 3 < uVar13;
      uVar13 = uVar16;
    } while (bVar1);
    uVar13 = uVar16 & 0xffffffff;
LAB_00f255a0:
    iVar9 = (int)uVar13;
    lVar2 = param_1[0x2e1] + (long)(iVar9 * 3 + 0x11);
    param_1[0x2e1] = lVar2;
    uVar3 = lVar2 + 10;
    uVar13 = param_1[0x2e2] + 10U >> 3;
    uVar16 = uVar3 >> 3;
    if (uVar13 <= uVar3 >> 3) {
      uVar16 = uVar13;
    }
  }
  if ((param_2 == 0) || (uVar16 < param_3 + 4U)) {
    uVar15 = *(uint *)((long)param_1 + 0x1724);
    if ((uVar13 == uVar16) || ((int)param_1[0x17] == 4)) {
      uVar4 = param_4 + 2U & 0xffff;
      uVar12 = (uint)*(ushort *)(param_1 + 0x2e4) | uVar4 << (ulong)(uVar15 & 0x1f);
      *(short *)(param_1 + 0x2e4) = (short)uVar12;
      if ((int)uVar15 < 0xe) {
        iVar9 = uVar15 + 3;
      }
      else {
        uVar15 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar15 + 1;
        *(char *)(param_1[2] + (ulong)uVar15) = (char)uVar12;
        uVar15 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar15 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar15) = *(undefined1 *)((long)param_1 + 0x1721);
        *(short *)(param_1 + 0x2e4) =
             (short)(uVar4 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f));
        iVar9 = *(int *)((long)param_1 + 0x1724) + -0xd;
      }
      *(int *)((long)param_1 + 0x1724) = iVar9;
      puVar7 = &DAT_01bf4b98;
      plVar8 = (long *)&DAT_01bf5018;
    }
    else {
      uVar4 = param_4 + 4U & 0xffff;
      uVar12 = (uint)*(ushort *)(param_1 + 0x2e4) | uVar4 << (ulong)(uVar15 & 0x1f);
      *(short *)(param_1 + 0x2e4) = (short)uVar12;
      if ((int)uVar15 < 0xe) {
        uVar15 = uVar15 + 3;
      }
      else {
        uVar15 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar15 + 1;
        *(char *)(param_1[2] + (ulong)uVar15) = (char)uVar12;
        uVar15 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar15 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar15) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar12 = uVar4 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar12;
        uVar15 = *(int *)((long)param_1 + 0x1724) - 0xd;
      }
      uVar5 = *(uint *)(param_1 + 0x16d);
      uVar4 = (int)param_1[0x16a] + 0xff00U & 0xffff;
      uVar12 = uVar12 | uVar4 << (ulong)(uVar15 & 0x1f);
      *(uint *)((long)param_1 + 0x1724) = uVar15;
      *(short *)(param_1 + 0x2e4) = (short)uVar12;
      if ((int)uVar15 < 0xc) {
        uVar15 = uVar15 + 5;
      }
      else {
        uVar15 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar15 + 1;
        *(char *)(param_1[2] + (ulong)uVar15) = (char)uVar12;
        uVar15 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar15 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar15) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar12 = uVar4 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar12;
        uVar15 = *(int *)((long)param_1 + 0x1724) - 0xb;
      }
      uVar4 = uVar5 & 0xffff;
      uVar12 = uVar12 | uVar4 << (ulong)(uVar15 & 0x1f);
      *(uint *)((long)param_1 + 0x1724) = uVar15;
      *(short *)(param_1 + 0x2e4) = (short)uVar12;
      if ((int)uVar15 < 0xc) {
        uVar15 = uVar15 + 5;
      }
      else {
        uVar15 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar15 + 1;
        *(char *)(param_1[2] + (ulong)uVar15) = (char)uVar12;
        uVar15 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar15 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar15) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar12 = uVar4 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar12;
        uVar15 = *(int *)((long)param_1 + 0x1724) - 0xb;
      }
      uVar4 = iVar9 + 0xfffdU & 0xffff;
      uVar12 = uVar12 | uVar4 << (ulong)(uVar15 & 0x1f);
      *(uint *)((long)param_1 + 0x1724) = uVar15;
      *(short *)(param_1 + 0x2e4) = (short)uVar12;
      if ((int)uVar15 < 0xd) {
        uVar15 = uVar15 + 4;
      }
      else {
        uVar15 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar15 + 1;
        *(char *)(param_1[2] + (ulong)uVar15) = (char)uVar12;
        uVar15 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar15 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar15) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar12 = uVar4 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar12;
        uVar15 = *(int *)((long)param_1 + 0x1724) - 0xc;
      }
      *(uint *)((long)param_1 + 0x1724) = uVar15;
      if (-1 < iVar9) {
        pbVar10 = &DAT_01bf51c8;
        uVar13 = (ulong)(iVar9 + 1);
        do {
          uVar6 = *(ushort *)((long)param_1 + (ulong)*pbVar10 * 4 + 0xaae);
          uVar12 = uVar12 | (uint)uVar6 << (ulong)(uVar15 & 0x1f);
          *(short *)(param_1 + 0x2e4) = (short)uVar12;
          if ((int)uVar15 < 0xe) {
            uVar15 = uVar15 + 3;
          }
          else {
            uVar15 = *(uint *)(param_1 + 5);
            *(uint *)(param_1 + 5) = uVar15 + 1;
            *(char *)(param_1[2] + (ulong)uVar15) = (char)uVar12;
            uVar15 = *(uint *)(param_1 + 5);
            *(uint *)(param_1 + 5) = uVar15 + 1;
            *(undefined1 *)(param_1[2] + (ulong)uVar15) = *(undefined1 *)((long)param_1 + 0x1721);
            uVar6 = uVar6 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
            uVar12 = (uint)uVar6;
            *(ushort *)(param_1 + 0x2e4) = uVar6;
            uVar15 = *(int *)((long)param_1 + 0x1724) - 0xd;
          }
          uVar13 = uVar13 - 1;
          pbVar10 = pbVar10 + 1;
          *(uint *)((long)param_1 + 0x1724) = uVar15;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined *)((long)param_1 + 0xc4);
      FUN_00f26520(param_1,puVar7);
      plVar8 = param_1 + 0x137;
      FUN_00f26520(param_1,plVar8,uVar5);
    }
    FUN_00f25e2c(param_1,puVar7,plVar8);
  }
  else {
    FUN_00f251bc(param_1,param_2,param_3,param_4);
  }
  FUN_00f25158(param_1);
  if (param_4 == 0) {
    return;
  }
  FUN_00f261e4(param_1);
  return;
}




void FUN_00f2596c(long param_1,long *param_2)

{
  bool bVar1;
  uint *puVar2;
  short *psVar3;
  short *psVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  short sVar18;
  undefined2 *puVar19;
  long *plVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ushort uVar26;
  long lVar27;
  ushort *puVar28;
  long lVar29;
  ushort *puVar30;
  int iVar31;
  long lVar32;
  int iVar33;
  ulong uVar34;
  short *psVar35;
  ushort auStack_88 [16];
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  lVar32 = *param_2;
  lVar14 = *(long *)param_2[2];
  uVar25 = *(uint *)(param_2[2] + 0x14);
  puVar2 = (uint *)(param_1 + 0x14a4);
  puVar2[0] = 0;
  puVar2[1] = 0x23d;
  if ((int)uVar25 < 1) {
    uVar23 = 0;
    uVar34 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    puVar19 = (undefined2 *)(lVar32 + 2);
    uVar34 = 0xffffffff;
    do {
      if (puVar19[-1] == 0) {
        *puVar19 = 0;
      }
      else {
        uVar34 = uVar17 & 0xffffffff;
        lVar27 = (long)*(int *)(param_1 + 0x14a4) + 1;
        *(int *)(param_1 + 0x14a4) = (int)lVar27;
        *(int *)(param_1 + lVar27 * 4 + 0xbb0) = (int)uVar17;
        *(undefined1 *)(param_1 + 0x14ac + uVar17) = 0;
      }
      uVar24 = (uint)uVar34;
      uVar17 = uVar17 + 1;
      puVar19 = puVar19 + 2;
    } while (uVar25 != uVar17);
    uVar23 = *puVar2;
    if (1 < (int)uVar23) goto LAB_00f25aac;
  }
  do {
    uVar24 = (uint)uVar34;
    uVar9 = 0;
    if ((int)uVar24 < 2) {
      uVar9 = uVar24 + 1;
    }
    *(int *)(param_1 + 0x14a4) = (int)((long)(int)uVar23 + 1);
    *(uint *)(param_1 + ((long)(int)uVar23 + 1) * 4 + 0xbb0) = uVar9;
    *(undefined2 *)(lVar32 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2)) = 1
    ;
    *(undefined1 *)(param_1 + (int)uVar9 + 0x14ac) = 0;
    if ((int)uVar24 < 2) {
      uVar24 = uVar24 + 1;
    }
    uVar34 = (ulong)uVar24;
    *(long *)(param_1 + 0x1708) = *(long *)(param_1 + 0x1708) + -1;
    if (lVar14 != 0) {
      *(ulong *)(param_1 + 0x1710) =
           *(long *)(param_1 + 0x1710) - (ulong)*(ushort *)(lVar14 + (long)(int)uVar9 * 4 + 2);
    }
    uVar23 = *puVar2;
  } while ((int)uVar23 < 2);
LAB_00f25aac:
  *(uint *)(param_2 + 1) = uVar24;
  if (uVar23 >> 1 != 0) {
    iVar33 = (uVar23 >> 1) + 1;
    do {
      iVar33 = iVar33 + -1;
      FUN_00f26300(param_1,lVar32,iVar33);
    } while (1 < iVar33);
    uVar23 = *puVar2;
  }
  psVar35 = (short *)(lVar32 + (long)(int)uVar25 * 4);
  lVar14 = (long)(int)uVar25;
  do {
    *(uint *)(param_1 + 0x14a4) = uVar23 - 1;
    lVar27 = param_1 + 0xbb0;
    iVar33 = *(int *)(param_1 + 0xbb4);
    *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(lVar27 + (long)(int)uVar23 * 4);
    FUN_00f26300(param_1,lVar32,1);
    iVar22 = *(int *)(param_1 + 0xbb4);
    psVar3 = (short *)(lVar32 + (long)iVar33 * 4);
    lVar15 = (long)*(int *)(param_1 + 0x14a8) + -1;
    *(int *)(param_1 + 0x14a8) = (int)lVar15;
    *(int *)(lVar27 + lVar15 * 4) = iVar33;
    psVar4 = (short *)(lVar32 + (long)iVar22 * 4);
    lVar15 = (long)*(int *)(param_1 + 0x14a8) + -1;
    *(int *)(param_1 + 0x14a8) = (int)lVar15;
    *(int *)(lVar27 + lVar15 * 4) = iVar22;
    *psVar35 = *psVar4 + *psVar3;
    bVar6 = *(byte *)(param_1 + 0x14ac + (long)iVar33);
    bVar7 = *(byte *)(param_1 + 0x14ac + (long)iVar22);
    if (bVar7 <= bVar6) {
      bVar7 = bVar6;
    }
    *(byte *)(param_1 + 0x14ac + lVar14) = bVar7 + 1;
    psVar4[1] = (short)lVar14;
    psVar3[1] = (short)lVar14;
    *(int *)(param_1 + 0xbb4) = (int)lVar14;
    FUN_00f26300(param_1,lVar32,1);
    uVar23 = *(uint *)(param_1 + 0x14a4);
    psVar35 = psVar35 + 2;
    lVar14 = lVar14 + 1;
  } while (1 < (int)uVar23);
  lVar14 = (long)*(int *)(param_1 + 0x14a8) + -1;
  *(int *)(param_1 + 0x14a8) = (int)lVar14;
  *(undefined4 *)(lVar27 + lVar14 * 4) = *(undefined4 *)(param_1 + 0xbb4);
  plVar20 = (long *)param_2[2];
  lVar16 = *param_2;
  lVar12 = param_2[1];
  lVar14 = *plVar20;
  lVar15 = plVar20[1];
  lVar13 = plVar20[2];
  iVar33 = (int)plVar20[3];
  lVar21 = (long)iVar33;
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined8 *)(param_1 + 0xba0) = 0;
  *(undefined8 *)(param_1 + 0xb98) = 0;
  *(undefined8 *)(param_1 + 0xb90) = 0;
  *(undefined2 *)(lVar16 + (long)*(int *)(lVar27 + (long)*(int *)(param_1 + 0x14a8) * 4) * 4 + 2) =
       0;
  if (*(int *)(param_1 + 0x14a8) < 0x23c) {
    iVar22 = 0;
    lVar27 = (long)*(int *)(param_1 + 0x14a8) + 0x2ed;
    do {
      iVar8 = *(int *)(param_1 + lVar27 * 4);
      lVar29 = (long)iVar8;
      lVar5 = lVar16 + lVar29 * 4;
      uVar26 = *(ushort *)(lVar16 + (ulong)*(ushort *)(lVar5 + 2) * 4 + 2);
      if ((int)(uint)uVar26 < iVar33) {
        iVar11 = uVar26 + 1;
      }
      else {
        iVar22 = iVar22 + 1;
        iVar11 = iVar33;
      }
      *(short *)(lVar5 + 2) = (short)iVar11;
      if (iVar8 <= (int)lVar12) {
        lVar5 = param_1 + (long)iVar11 * 2;
        iVar31 = 0;
        *(short *)(lVar5 + 0xb90) = *(short *)(lVar5 + 0xb90) + 1;
        if ((int)lVar13 <= iVar8) {
          iVar31 = *(int *)(lVar15 + (long)(iVar8 - (int)lVar13) * 4);
        }
        uVar34 = (ulong)*(ushort *)(lVar16 + lVar29 * 4);
        *(ulong *)(param_1 + 0x1708) =
             *(long *)(param_1 + 0x1708) + uVar34 * (long)(iVar31 + iVar11);
        if (lVar14 != 0) {
          *(ulong *)(param_1 + 0x1710) =
               *(long *)(param_1 + 0x1710) +
               ((ulong)*(ushort *)(lVar14 + lVar29 * 4 + 2) + (long)iVar31) * uVar34;
        }
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != 0x529);
    if (iVar22 != 0) {
      puVar30 = (ushort *)(param_1 + lVar21 * 2 + 0xb90);
      lVar14 = (lVar21 << 0x20) + 0x100000000;
      puVar28 = puVar30;
      lVar27 = lVar14;
      do {
        do {
          puVar28 = puVar28 + -1;
          lVar27 = lVar27 + -0x100000000;
        } while (*puVar28 == 0);
        lVar27 = param_1 + (lVar27 >> 0x1f);
        *puVar28 = *puVar28 - 1;
        iVar8 = iVar22 + -2;
        *(short *)(lVar27 + 0xb90) = *(short *)(lVar27 + 0xb90) + 2;
        uVar26 = *puVar30 - 1;
        *puVar30 = uVar26;
        bVar1 = 1 < iVar22;
        puVar28 = puVar30;
        lVar27 = lVar14;
        iVar22 = iVar8;
      } while (iVar8 != 0 && bVar1);
      if (iVar33 != 0) {
        uVar34 = 0x23d;
LAB_00f25d00:
        uVar25 = (uint)uVar26;
        do {
          lVar14 = 0;
          do {
            if (uVar25 == 0) {
              lVar21 = lVar21 + -1;
              if ((int)lVar21 == 0) goto LAB_00f25d60;
              uVar26 = *(ushort *)(param_1 + lVar21 * 2 + 0xb90);
              uVar34 = uVar34 & 0xffffffff;
              goto LAB_00f25d00;
            }
            iVar33 = *(int *)(param_1 + 0xbac + (long)(int)uVar34 * 4 + lVar14 * 4);
            lVar14 = lVar14 + -1;
          } while ((int)lVar12 < iVar33);
          puVar30 = (ushort *)(lVar16 + (long)iVar33 * 4 + 2);
          uVar26 = *puVar30;
          uVar34 = lVar14 + (uVar34 & 0xffffffff);
          if ((uint)lVar21 != (uint)uVar26) {
            *(ulong *)(param_1 + 0x1708) =
                 *(long *)(param_1 + 0x1708) +
                 (lVar21 - (ulong)uVar26) * (ulong)*(ushort *)(lVar16 + (long)iVar33 * 4);
            *puVar30 = (ushort)lVar21;
          }
          uVar25 = uVar25 - 1;
        } while( true );
      }
    }
  }
LAB_00f25d60:
  lVar14 = 0;
  sVar18 = 0;
  do {
    sVar18 = (sVar18 + *(short *)(param_1 + 0xb90 + lVar14)) * 2;
    *(short *)(((ulong)auStack_88 | 2) + lVar14) = sVar18;
    lVar14 = lVar14 + 2;
  } while (lVar14 != 0x1e);
  if (-1 < (int)uVar24) {
    uVar34 = 0;
    do {
      uVar26 = *(ushort *)(lVar32 + uVar34 * 4 + 2);
      if (uVar26 != 0) {
        uVar23 = (uint)auStack_88[(uint)uVar26];
        uVar25 = 0;
        auStack_88[uVar26] = auStack_88[(uint)uVar26] + 1;
        iVar33 = uVar26 + 1;
        do {
          iVar33 = iVar33 + -1;
          uVar9 = uVar25 | uVar23 & 1;
          uVar23 = uVar23 >> 1;
          uVar25 = uVar9 << 1;
        } while (1 < iVar33);
        *(short *)(lVar32 + uVar34 * 4) = (short)uVar9;
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar24 + 1);
  }
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f25e2c(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
  if (*(int *)(param_1 + 0x16fc) == 0) {
    uVar11 = *(uint *)(param_1 + 0x1724);
    uVar10 = (uint)*(ushort *)(param_1 + 0x1720);
  }
  else {
    uVar14 = 0;
    puVar2 = (uint *)(param_1 + 0x1724);
    puVar3 = (ushort *)(param_1 + 0x1720);
    do {
      lVar1 = uVar14 * 2;
      bVar6 = *(byte *)(*(long *)(param_1 + 0x16f0) + uVar14);
      uVar14 = uVar14 + 1;
      uVar9 = (uint)*(ushort *)(*(long *)(param_1 + 0x1700) + lVar1);
      if (uVar9 == 0) {
        puVar4 = (ushort *)(param_2 + (ulong)bVar6 * 4);
        uVar11 = *puVar2;
        uVar7 = puVar4[1];
        uVar8 = *puVar4;
        uVar10 = (uint)*puVar3 | (uint)uVar8 << (ulong)(uVar11 & 0x1f);
        *puVar3 = (ushort)uVar10;
        if ((int)(0x10 - (uint)uVar7) < (int)uVar11) {
          uVar11 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar11 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) = (char)uVar10;
          uVar11 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar11 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar8 = uVar8 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          uVar10 = (uint)uVar8;
          *(ushort *)(param_1 + 0x1720) = uVar8;
          uVar11 = ((uint)uVar7 + *(int *)(param_1 + 0x1724)) - 0x10;
        }
        else {
          uVar11 = uVar11 + uVar7;
        }
LAB_00f26134:
        *puVar2 = uVar11;
      }
      else {
        uVar12 = (ulong)(byte)(&DAT_01bf4a98)[bVar6];
        uVar11 = *puVar2;
        lVar1 = param_2 + (uVar12 << 2 | 0x400);
        uVar7 = *(ushort *)(lVar1 + 6);
        uVar8 = *(ushort *)(lVar1 + 4);
        uVar10 = (uint)*puVar3 | (uint)uVar8 << (ulong)(uVar11 & 0x1f);
        *puVar3 = (ushort)uVar10;
        if ((int)(0x10 - (uint)uVar7) < (int)uVar11) {
          uVar11 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar11 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) = (char)uVar10;
          uVar11 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar11 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar8 = uVar8 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          uVar10 = (uint)uVar8;
          *(ushort *)(param_1 + 0x1720) = uVar8;
          uVar11 = ((uint)uVar7 + *(int *)(param_1 + 0x1724)) - 0x10;
        }
        else {
          uVar11 = uVar11 + uVar7;
        }
        *puVar2 = uVar11;
        if (uVar12 - 8 < 0x14) {
          iVar13 = *(int *)(&DAT_01bf5090 + uVar12 * 4);
          uVar5 = (uint)bVar6 - *(int *)(&DAT_01bf51dc + uVar12 * 4) & 0xffff;
          uVar10 = uVar10 | uVar5 << (ulong)(uVar11 & 0x1f);
          *puVar3 = (ushort)uVar10;
          if (0x10 - iVar13 < (int)uVar11) {
            uVar11 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar11 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) = (char)uVar10;
            uVar11 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar11 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar10 = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar10;
            uVar11 = (iVar13 + *(int *)(param_1 + 0x1724)) - 0x10;
          }
          else {
            uVar11 = iVar13 + uVar11;
          }
          *puVar2 = uVar11;
        }
        uVar9 = uVar9 - 1;
        uVar5 = uVar9;
        if (0xff < uVar9) {
          uVar5 = (uVar9 >> 7) + 0x100;
        }
        uVar12 = (ulong)(byte)(&DAT_01bf4898)[uVar5];
        puVar4 = (ushort *)(param_3 + uVar12 * 4);
        uVar7 = puVar4[1];
        uVar8 = *puVar4;
        uVar10 = uVar10 | (uint)uVar8 << (ulong)(uVar11 & 0x1f);
        *puVar3 = (ushort)uVar10;
        if ((int)(0x10 - (uint)uVar7) < (int)uVar11) {
          uVar11 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar11 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) = (char)uVar10;
          uVar11 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar11 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar8 = uVar8 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          uVar10 = (uint)uVar8;
          *(ushort *)(param_1 + 0x1720) = uVar8;
          uVar11 = ((uint)uVar7 + *(int *)(param_1 + 0x1724)) - 0x10;
        }
        else {
          uVar11 = uVar11 + uVar7;
        }
        *puVar2 = uVar11;
        if (uVar12 - 4 < 0x1a) {
          iVar13 = *(int *)(&DAT_01bf5104 + uVar12 * 4);
          uVar9 = uVar9 - *(int *)(&DAT_01bf5250 + uVar12 * 4) & 0xffff;
          uVar10 = uVar10 | uVar9 << (ulong)(uVar11 & 0x1f);
          *puVar3 = (ushort)uVar10;
          if (0x10 - iVar13 < (int)uVar11) {
            uVar11 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar11 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) = (char)uVar10;
            uVar11 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar11 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar10 = uVar9 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar10;
            uVar11 = (iVar13 + *(int *)(param_1 + 0x1724)) - 0x10;
          }
          else {
            uVar11 = iVar13 + uVar11;
          }
          goto LAB_00f26134;
        }
      }
    } while (uVar14 < *(uint *)(param_1 + 0x16fc));
  }
  uVar7 = *(ushort *)(param_2 + 0x402);
  uVar8 = *(ushort *)(param_2 + 0x400);
  uVar10 = uVar10 | (uint)uVar8 << (ulong)(uVar11 & 0x1f);
  *(short *)(param_1 + 0x1720) = (short)uVar10;
  if ((int)(0x10 - (uint)uVar7) < (int)uVar11) {
    uVar11 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar11 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) = (char)uVar10;
    uVar11 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar11 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar11) = *(undefined1 *)(param_1 + 0x1721);
    *(ushort *)(param_1 + 0x1720) = uVar8 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
    iVar13 = (uint)uVar7 + *(int *)(param_1 + 0x1724) + -0x10;
  }
  else {
    iVar13 = uVar11 + uVar7;
  }
  *(int *)(param_1 + 0x1724) = iVar13;
  return;
}

