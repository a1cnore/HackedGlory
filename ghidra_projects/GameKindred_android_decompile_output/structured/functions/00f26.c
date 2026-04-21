// functions/00f26 — 17 functions
#include "libGameKindred.h"




void FUN_00f261e4(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_1 + 0x1724) < 9) {
    if (*(int *)(param_1 + 0x1724) < 1) goto LAB_00f2624c;
    uVar2 = *(undefined1 *)(param_1 + 0x1720);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1720);
    uVar2 = *(undefined1 *)(param_1 + 0x1721);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = uVar2;
LAB_00f2624c:
  *(undefined2 *)(param_1 + 0x1720) = 0;
  *(undefined4 *)(param_1 + 0x1724) = 0;
  return;
}




bool FUN_00f26258(long param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  short *psVar5;
  
  uVar2 = *(uint *)(param_1 + 0x16fc);
  *(short *)(*(long *)(param_1 + 0x1700) + (ulong)uVar2 * 2) = (short)param_2;
  *(uint *)(param_1 + 0x16fc) = uVar2 + 1;
  *(char *)(*(long *)(param_1 + 0x16f0) + (ulong)uVar2) = (char)param_3;
  if (param_2 == 0) {
    psVar5 = (short *)(param_1 + (ulong)param_3 * 4 + 0xc4);
  }
  else {
    uVar2 = param_2 - 1;
    bVar3 = (&DAT_01bf4a98)[param_3];
    if (0xff < uVar2) {
      uVar2 = (uVar2 >> 7) + 0x100;
    }
    bVar4 = (&DAT_01bf4898)[uVar2];
    *(int *)(param_1 + 0x1718) = *(int *)(param_1 + 0x1718) + 1;
    lVar1 = param_1 + ((ulong)bVar3 << 2 | 0x400);
    *(short *)(lVar1 + 200) = *(short *)(lVar1 + 200) + 1;
    psVar5 = (short *)(param_1 + (ulong)bVar4 * 4 + 0x9b8);
  }
  *psVar5 = *psVar5 + 1;
  return *(int *)(param_1 + 0x16fc) == *(int *)(param_1 + 0x16f8) + -1;
}




void FUN_00f26300(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  
  iVar7 = *(int *)(param_1 + 0x14a4);
  lVar9 = param_1 + (long)(int)param_3 * 4;
  iVar2 = *(int *)(lVar9 + 0xbb0);
  uVar5 = param_3 * 2;
  if ((int)uVar5 <= iVar7) {
    do {
      uVar6 = uVar5;
      if ((int)uVar5 < iVar7) {
        puVar1 = (uint *)(param_1 + 0xbb0 + (long)(int)(uVar5 | 1) * 4);
        puVar8 = (uint *)(param_1 + 0xbb0 + (long)(int)uVar5 * 4);
        lVar9 = (long)(int)*puVar1;
        uVar3 = *(ushort *)(param_2 + lVar9 * 4);
        uVar4 = *(ushort *)(param_2 + (long)(int)*puVar8 * 4);
        if ((uVar3 < uVar4) ||
           ((uVar3 == uVar4 &&
            (*(byte *)(param_1 + 0x14ac + lVar9) <= *(byte *)(param_1 + 0x14ac + (long)(int)*puVar8)
            )))) {
          puVar8 = puVar1;
          uVar6 = uVar5 | 1;
        }
      }
      else {
        puVar8 = (uint *)(param_1 + (long)(int)uVar5 * 4 + 0xbb0);
      }
      uVar5 = *puVar8;
      uVar3 = *(ushort *)(param_2 + (long)iVar2 * 4);
      uVar4 = *(ushort *)
               (param_2 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2));
      if ((uVar3 < uVar4) ||
         ((uVar3 == uVar4 &&
          (*(byte *)(param_1 + iVar2 + 0x14ac) <= *(byte *)(param_1 + (int)uVar5 + 0x14ac)))))
      break;
      *(uint *)(param_1 + (long)(int)param_3 * 4 + 0xbb0) = uVar5;
      iVar7 = *(int *)(param_1 + 0x14a4);
      uVar5 = uVar6 * 2;
      param_3 = uVar6;
    } while ((int)uVar5 <= iVar7);
    lVar9 = param_1 + (long)(int)param_3 * 4;
  }
  *(int *)(lVar9 + 0xbb0) = iVar2;
  return;
}




void FUN_00f2640c(long param_1,long param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  short *psVar15;
  
  uVar2 = *(ushort *)(param_2 + 2);
  *(undefined2 *)(param_2 + (long)(int)(param_3 + 1U) * 4 + 2) = 0xffff;
  if (-1 < param_3) {
    iVar5 = 0;
    uVar9 = (ulong)(param_3 + 1U);
    puVar10 = (ushort *)(param_2 + 6);
    uVar6 = 0xffffffff;
    iVar14 = 3;
    if (uVar2 != 0) {
      iVar14 = 4;
    }
    iVar11 = 0x8a;
    if (uVar2 != 0) {
      iVar11 = 7;
    }
    do {
      uVar8 = (ulong)uVar2;
      uVar3 = *puVar10;
      iVar4 = iVar5 + 1;
      uVar7 = (uint)uVar3;
      uVar12 = (uint)uVar2;
      if ((iVar11 <= iVar4) || (uVar12 != uVar7)) {
        if (iVar4 < iVar14) {
          lVar1 = param_1 + uVar8 * 4;
          psVar15 = (short *)(lVar1 + 0xaac);
          sVar13 = *(short *)(lVar1 + 0xaac) + (short)iVar4;
        }
        else {
          if (uVar12 == 0) {
            if (iVar5 < 10) {
              sVar13 = *(short *)(param_1 + 0xaf0);
              psVar15 = (short *)(param_1 + 0xaf0);
            }
            else {
              sVar13 = *(short *)(param_1 + 0xaf4);
              psVar15 = (short *)(param_1 + 0xaf4);
            }
          }
          else {
            if (uVar12 != (uint)uVar6) {
              lVar1 = param_1 + uVar8 * 4;
              *(short *)(lVar1 + 0xaac) = *(short *)(lVar1 + 0xaac) + 1;
            }
            sVar13 = *(short *)(param_1 + 0xaec);
            psVar15 = (short *)(param_1 + 0xaec);
          }
          sVar13 = sVar13 + 1;
        }
        iVar4 = 0;
        *psVar15 = sVar13;
        uVar6 = uVar8;
        if (uVar7 == 0) {
          iVar14 = 3;
          iVar11 = 0x8a;
        }
        else {
          iVar14 = 3;
          iVar11 = 6;
          if (uVar12 != uVar7) {
            iVar11 = 7;
            iVar14 = 4;
          }
        }
      }
      iVar5 = iVar4;
      uVar9 = uVar9 - 1;
      puVar10 = puVar10 + 2;
      uVar2 = uVar3;
    } while (uVar9 != 0);
  }
  return;
}




void FUN_00f26520(long param_1,long param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  
  if (-1 < param_3) {
    uVar2 = *(ushort *)(param_2 + 2);
    uVar10 = 0;
    uVar6 = 0;
    uVar9 = 0xffffffff;
    iVar13 = 0x8a;
    iVar5 = 3;
    if (uVar2 != 0) {
      iVar13 = 7;
      iVar5 = 4;
    }
    do {
      uVar12 = (ulong)uVar2;
      uVar10 = uVar10 + 1;
      uVar3 = *(ushort *)(param_2 + uVar10 * 4 + 2);
      uVar8 = uVar6 + 1;
      uVar11 = (uint)uVar3;
      uVar14 = (uint)uVar2;
      if ((iVar13 <= (int)uVar8) || (uVar14 != uVar11)) {
        if ((int)uVar8 < iVar5) {
          uVar8 = *(uint *)(param_1 + 0x1724);
          lVar1 = param_1 + uVar12 * 4;
          uVar6 = ~uVar6;
          do {
            uVar2 = *(ushort *)(lVar1 + 0xaae);
            uVar4 = *(ushort *)(lVar1 + 0xaac);
            uVar7 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar4 << (ulong)(uVar8 & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar7;
            if ((int)(0x10 - (uint)uVar2) < (int)uVar8) {
              uVar8 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar8 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) = (char)uVar7;
              uVar8 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar8 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                   *(undefined1 *)(param_1 + 0x1721);
              *(ushort *)(param_1 + 0x1720) =
                   uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
              uVar8 = ((uint)uVar2 + *(int *)(param_1 + 0x1724)) - 0x10;
            }
            else {
              uVar8 = uVar8 + uVar2;
            }
            uVar6 = uVar6 + 1;
            *(uint *)(param_1 + 0x1724) = uVar8;
          } while (uVar6 != 0);
        }
        else {
          if (uVar14 == 0) {
            if ((int)uVar6 < 10) {
              uVar2 = *(ushort *)(param_1 + 0xaf2);
              uVar8 = *(uint *)(param_1 + 0x1724);
              uVar4 = *(ushort *)(param_1 + 0xaf0);
              uVar7 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar4 << (ulong)(uVar8 & 0x1f);
              *(short *)(param_1 + 0x1720) = (short)uVar7;
              if ((int)(0x10 - (uint)uVar2) < (int)uVar8) {
                uVar8 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar8 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) = (char)uVar7;
                uVar8 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar8 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                     *(undefined1 *)(param_1 + 0x1721);
                uVar4 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
                uVar7 = (uint)uVar4;
                *(ushort *)(param_1 + 0x1720) = uVar4;
                uVar8 = ((uint)uVar2 + *(int *)(param_1 + 0x1724)) - 0x10;
              }
              else {
                uVar8 = uVar8 + uVar2;
              }
              uVar6 = uVar6 + 0xfffe & 0xffff;
              uVar7 = uVar7 | uVar6 << (ulong)(uVar8 & 0x1f);
              *(uint *)(param_1 + 0x1724) = uVar8;
              *(short *)(param_1 + 0x1720) = (short)uVar7;
              if ((int)uVar8 < 0xe) {
                iVar5 = uVar8 + 3;
              }
              else {
                uVar8 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar8 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) = (char)uVar7;
                uVar8 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar8 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                     *(undefined1 *)(param_1 + 0x1721);
                *(short *)(param_1 + 0x1720) =
                     (short)(uVar6 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f));
                iVar5 = *(int *)(param_1 + 0x1724) + -0xd;
              }
            }
            else {
              uVar2 = *(ushort *)(param_1 + 0xaf6);
              uVar8 = *(uint *)(param_1 + 0x1724);
              uVar4 = *(ushort *)(param_1 + 0xaf4);
              uVar7 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar4 << (ulong)(uVar8 & 0x1f);
              *(short *)(param_1 + 0x1720) = (short)uVar7;
              if ((int)(0x10 - (uint)uVar2) < (int)uVar8) {
                uVar8 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar8 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) = (char)uVar7;
                uVar8 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar8 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                     *(undefined1 *)(param_1 + 0x1721);
                uVar4 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
                uVar7 = (uint)uVar4;
                *(ushort *)(param_1 + 0x1720) = uVar4;
                uVar8 = ((uint)uVar2 + *(int *)(param_1 + 0x1724)) - 0x10;
              }
              else {
                uVar8 = uVar8 + uVar2;
              }
              uVar6 = uVar6 + 0xfff6 & 0xffff;
              uVar7 = uVar7 | uVar6 << (ulong)(uVar8 & 0x1f);
              *(uint *)(param_1 + 0x1724) = uVar8;
              *(short *)(param_1 + 0x1720) = (short)uVar7;
              if ((int)uVar8 < 10) {
                iVar5 = uVar8 + 7;
              }
              else {
                uVar8 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar8 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) = (char)uVar7;
                uVar8 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar8 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                     *(undefined1 *)(param_1 + 0x1721);
                *(short *)(param_1 + 0x1720) =
                     (short)(uVar6 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f));
                iVar5 = *(int *)(param_1 + 0x1724) + -9;
              }
            }
          }
          else {
            if (uVar14 == (uint)uVar9) {
              uVar7 = *(uint *)(param_1 + 0x1724);
              uVar6 = uVar8;
            }
            else {
              lVar1 = param_1 + uVar12 * 4;
              uVar7 = *(uint *)(param_1 + 0x1724);
              uVar2 = *(ushort *)(lVar1 + 0xaae);
              uVar4 = *(ushort *)(lVar1 + 0xaac);
              uVar8 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar4 << (ulong)(uVar7 & 0x1f);
              *(short *)(param_1 + 0x1720) = (short)uVar8;
              if ((int)(0x10 - (uint)uVar2) < (int)uVar7) {
                uVar7 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar7 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar7) = (char)uVar8;
                uVar8 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar8 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                     *(undefined1 *)(param_1 + 0x1721);
                *(ushort *)(param_1 + 0x1720) =
                     uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
                uVar7 = ((uint)uVar2 + *(int *)(param_1 + 0x1724)) - 0x10;
              }
              else {
                uVar7 = uVar7 + uVar2;
              }
              *(uint *)(param_1 + 0x1724) = uVar7;
            }
            uVar2 = *(ushort *)(param_1 + 0xaee);
            uVar4 = *(ushort *)(param_1 + 0xaec);
            uVar8 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar4 << (ulong)(uVar7 & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar8;
            if ((int)(0x10 - (uint)uVar2) < (int)uVar7) {
              uVar7 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar7 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar7) = (char)uVar8;
              uVar8 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar8 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                   *(undefined1 *)(param_1 + 0x1721);
              uVar4 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
              uVar8 = (uint)uVar4;
              *(ushort *)(param_1 + 0x1720) = uVar4;
              uVar7 = ((uint)uVar2 + *(int *)(param_1 + 0x1724)) - 0x10;
            }
            else {
              uVar7 = uVar7 + uVar2;
            }
            uVar6 = uVar6 + 0xfffd & 0xffff;
            uVar8 = uVar8 | uVar6 << (ulong)(uVar7 & 0x1f);
            *(uint *)(param_1 + 0x1724) = uVar7;
            *(short *)(param_1 + 0x1720) = (short)uVar8;
            if ((int)uVar7 < 0xf) {
              iVar5 = uVar7 + 2;
            }
            else {
              uVar7 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar7 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar7) = (char)uVar8;
              uVar8 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar8 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                   *(undefined1 *)(param_1 + 0x1721);
              *(short *)(param_1 + 0x1720) =
                   (short)(uVar6 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f));
              iVar5 = *(int *)(param_1 + 0x1724) + -0xe;
            }
          }
          *(int *)(param_1 + 0x1724) = iVar5;
        }
        uVar8 = 0;
        uVar9 = uVar12;
        if (uVar11 == 0) {
          iVar13 = 0x8a;
          iVar5 = 3;
        }
        else {
          iVar13 = 6;
          iVar5 = 3;
          if (uVar14 != uVar11) {
            iVar5 = 4;
            iVar13 = 7;
          }
        }
      }
      uVar6 = uVar8;
      uVar2 = uVar3;
    } while (uVar10 != param_3 + 1);
  }
  return;
}




int FUN_00f269ac(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_90;
  undefined4 local_88;
  ulong local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_38;
  
  local_a0 = (int)param_4;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = param_3;
  if ((int)((ulong)param_4 >> 0x20) == 0) {
    local_88 = (undefined4)*param_2;
    local_90 = param_1;
    if ((*param_2 & 0xffffffff00000000) == 0) {
      local_68 = 0;
      uStack_60 = 0;
      iVar2 = FUN_00f2762c(&local_a8,"1.2.8",0x70);
      if (iVar2 == 0) {
        iVar2 = FUN_00f276ac(&local_a8,4);
        if (iVar2 == 1) {
          *param_2 = local_80;
          iVar2 = FUN_00f28f48(&local_a8);
        }
        else {
          FUN_00f28f48(&local_a8);
          if ((iVar2 == 2) || ((iVar2 == -5 && (local_a0 == 0)))) {
            iVar2 = -3;
          }
        }
      }
      goto LAB_00f26a48;
    }
  }
  iVar2 = -5;
LAB_00f26a48:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




char * FUN_00f26a9c(void)

{
  return "1.2.8";
}




undefined8 FUN_00f26aa8(void)

{
  return 0xa9;
}




undefined * FUN_00f26ab0(int param_1)

{
  return (&PTR_s_need_dictionary_02828eb0)[2 - (long)param_1];
}




void FUN_00f26ac8(undefined8 param_1,int param_2,int param_3)

{
  malloc((ulong)(uint)(param_3 * param_2));
  return;
}




void FUN_00f26ad0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




ulong FUN_00f26ad8(ulong param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong uVar24;
  byte *pbVar25;
  long lVar26;
  int iVar27;
  
  uVar24 = param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = param_1 + *param_2;
    uVar17 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar17 = param_1;
    }
    uVar24 = uVar17 + uVar24;
    uVar18 = uVar24 * 0x10000 - 0xfff10000;
    if (uVar24 < 0xfff1) {
      uVar18 = uVar24 * 0x10000;
    }
    return uVar18 | uVar17;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  uVar17 = param_1;
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar24 = uVar17 + *param_2 + uVar24;
      uVar17 = uVar17 + *param_2;
      param_2 = param_2 + 1;
    }
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar24;
    param_1 = uVar17 - 0xfff1;
    if (uVar17 < 0xfff1) {
      param_1 = uVar17;
    }
    auVar22._8_8_ = 1;
    auVar22._0_8_ = 0xf00e10d2fc5cd;
    uVar17 = SUB168(auVar20 * auVar22,8);
  }
  else {
    if (param_3 >> 4 < 0x15b) {
LAB_00f26cd8:
      uVar19 = param_3 - 0x10;
      pbVar25 = param_2;
      do {
        param_3 = param_3 - 0x10;
        lVar26 = param_1 + *pbVar25;
        lVar2 = lVar26 + (ulong)pbVar25[1];
        lVar3 = lVar2 + (ulong)pbVar25[2];
        lVar4 = lVar3 + (ulong)pbVar25[3];
        lVar5 = lVar4 + (ulong)pbVar25[4];
        lVar6 = lVar5 + (ulong)pbVar25[5];
        lVar7 = lVar6 + (ulong)pbVar25[6];
        lVar8 = lVar7 + (ulong)pbVar25[7];
        lVar9 = lVar8 + (ulong)pbVar25[8];
        lVar10 = lVar9 + (ulong)pbVar25[9];
        lVar11 = lVar10 + (ulong)pbVar25[10];
        lVar12 = lVar11 + (ulong)pbVar25[0xb];
        lVar13 = lVar12 + (ulong)pbVar25[0xc];
        lVar14 = lVar13 + (ulong)pbVar25[0xd];
        lVar15 = lVar14 + (ulong)pbVar25[0xe];
        pbVar1 = pbVar25 + 0xf;
        pbVar25 = pbVar25 + 0x10;
        param_1 = lVar15 + (ulong)*pbVar1;
        uVar24 = lVar26 + uVar24 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
      } while (0xf < param_3);
      param_3 = uVar19 & 0xf;
      if (param_3 != 0) {
        param_2 = param_2 + (ulong)(uVar19 & 0xfffffff0) + 0x10;
        goto LAB_00f26dc4;
      }
    }
    else {
      do {
        lVar26 = 0;
        param_3 = param_3 - 0x15b0;
        iVar27 = -0x15b;
        do {
          pbVar25 = param_2 + lVar26;
          iVar27 = iVar27 + 1;
          lVar26 = lVar26 + 0x10;
          lVar2 = param_1 + *pbVar25;
          lVar3 = lVar2 + (ulong)pbVar25[1];
          lVar4 = lVar3 + (ulong)pbVar25[2];
          lVar5 = lVar4 + (ulong)pbVar25[3];
          lVar6 = lVar5 + (ulong)pbVar25[4];
          lVar7 = lVar6 + (ulong)pbVar25[5];
          lVar8 = lVar7 + (ulong)pbVar25[6];
          lVar9 = lVar8 + (ulong)pbVar25[7];
          lVar10 = lVar9 + (ulong)pbVar25[8];
          lVar11 = lVar10 + (ulong)pbVar25[9];
          lVar12 = lVar11 + (ulong)pbVar25[10];
          lVar13 = lVar12 + (ulong)pbVar25[0xb];
          lVar14 = lVar13 + (ulong)pbVar25[0xc];
          lVar15 = lVar14 + (ulong)pbVar25[0xd];
          lVar16 = lVar15 + (ulong)pbVar25[0xe];
          param_1 = lVar16 + (ulong)pbVar25[0xf];
          uVar24 = lVar2 + uVar24 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 +
                   lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + lVar16 + param_1;
        } while (iVar27 != 0);
        param_2 = param_2 + 0x15b0;
        param_1 = param_1 % 0xfff1;
        uVar24 = uVar24 % 0xfff1;
      } while (0x15a < param_3 >> 4);
      if (param_3 == 0) goto LAB_00f26e14;
      if (0xf < param_3) goto LAB_00f26cd8;
LAB_00f26dc4:
      do {
        param_3 = param_3 - 1;
        param_1 = param_1 + *param_2;
        uVar24 = param_1 + uVar24;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar24;
    auVar23._8_8_ = 1;
    auVar23._0_8_ = 0xf00e10d2fc5cd;
    uVar17 = SUB168(auVar21 * auVar23,8);
    param_1 = param_1 % 0xfff1;
  }
  uVar24 = uVar24 + (uVar17 >> 0x10) * -0xfff1;
LAB_00f26e14:
  return param_1 | uVar24 << 0x10;
}




ulong thunk_FUN_00f26e20(ulong param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (-1 < (long)param_3) {
    lVar1 = (param_1 & 0xffff) + (ulong)(ushort)param_2;
    uVar2 = lVar1 + 0xfff0;
    uVar4 = lVar1 - 1;
    if (uVar2 < 0xfff1) {
      uVar4 = uVar2;
    }
    uVar2 = (((param_1 >> 0x10 & 0xffff) + (ulong)(ushort)((uint)param_2 >> 0x10) + 0xfff1) -
            param_3 % 0xfff1) + ((param_3 % 0xfff1) * (param_1 & 0xffff)) % 0xfff1;
    uVar3 = uVar4 - 0xfff1;
    if (uVar4 < 0xfff1) {
      uVar3 = uVar4;
    }
    uVar4 = uVar2 - 0x1ffe2;
    if (uVar2 < 0x1ffe2) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 * 0x10000 - 0xfff10000;
    if (uVar4 < 0xfff1) {
      uVar2 = uVar4 << 0x10;
    }
    return uVar2 | uVar3;
  }
  return 0xffffffff;
}




ulong FUN_00f26e20(ulong param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (-1 < (long)param_3) {
    lVar1 = (param_1 & 0xffff) + (ulong)(ushort)param_2;
    uVar2 = lVar1 + 0xfff0;
    uVar4 = lVar1 - 1;
    if (uVar2 < 0xfff1) {
      uVar4 = uVar2;
    }
    uVar2 = (((param_1 >> 0x10 & 0xffff) + (ulong)(ushort)((uint)param_2 >> 0x10) + 0xfff1) -
            param_3 % 0xfff1) + ((param_3 % 0xfff1) * (param_1 & 0xffff)) % 0xfff1;
    uVar3 = uVar4 - 0xfff1;
    if (uVar4 < 0xfff1) {
      uVar3 = uVar4;
    }
    uVar4 = uVar2 - 0x1ffe2;
    if (uVar2 < 0x1ffe2) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 * 0x10000 - 0xfff10000;
    if (uVar4 < 0xfff1) {
      uVar2 = uVar4 << 0x10;
    }
    return uVar2 | uVar3;
  }
  return 0xffffffff;
}




ulong thunk_FUN_00f26e20(ulong param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (-1 < (long)param_3) {
    lVar1 = (param_1 & 0xffff) + (ulong)(ushort)param_2;
    uVar2 = lVar1 + 0xfff0;
    uVar4 = lVar1 - 1;
    if (uVar2 < 0xfff1) {
      uVar4 = uVar2;
    }
    uVar2 = (((param_1 >> 0x10 & 0xffff) + (ulong)(ushort)((uint)param_2 >> 0x10) + 0xfff1) -
            param_3 % 0xfff1) + ((param_3 % 0xfff1) * (param_1 & 0xffff)) % 0xfff1;
    uVar3 = uVar4 - 0xfff1;
    if (uVar4 < 0xfff1) {
      uVar3 = uVar4;
    }
    uVar4 = uVar2 - 0x1ffe2;
    if (uVar2 < 0x1ffe2) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 * 0x10000 - 0xfff10000;
    if (uVar4 < 0xfff1) {
      uVar2 = uVar4 << 0x10;
    }
    return uVar2 | uVar3;
  }
  return 0xffffffff;
}




undefined * FUN_00f26ef0(void)

{
  return &DAT_01bf533c;
}




uint FUN_00f26efc(uint param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  
  if (param_2 == 0) {
    return 0;
  }
  param_1 = ~param_1;
  if (param_3 != 0) {
    lVar6 = 0;
    uVar4 = param_3 - 0x20;
    do {
      puVar9 = (uint *)(param_2 + lVar6);
      if (((ulong)puVar9 & 3) == 0) {
        uVar5 = (ulong)param_3 - lVar6;
        if (0x1f < (uint)uVar5) {
          lVar8 = 0;
          do {
            param_1 = *(uint *)(param_2 + lVar6 + lVar8) ^ param_1;
            lVar1 = param_2 + lVar8 + lVar6;
            uVar3 = (int)uVar5 - 0x20;
            uVar5 = (ulong)uVar3;
            uVar2 = *(uint *)(&DAT_01bf5b3c + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf5f3c + (ulong)(param_1 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf573c + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf533c + (ulong)(param_1 >> 0x18) * 4) ^ *(uint *)(lVar1 + 4);
            uVar2 = *(uint *)(&DAT_01bf5b3c + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf5f3c + (ulong)(uVar2 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf573c + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf533c + (ulong)(uVar2 >> 0x18) * 4) ^ *(uint *)(lVar1 + 8);
            uVar2 = *(uint *)(&DAT_01bf5b3c + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf5f3c + (ulong)(uVar2 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf573c + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf533c + (ulong)(uVar2 >> 0x18) * 4) ^ *(uint *)(lVar1 + 0xc);
            uVar2 = *(uint *)(&DAT_01bf5b3c + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf5f3c + (ulong)(uVar2 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf573c + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf533c + (ulong)(uVar2 >> 0x18) * 4) ^
                    *(uint *)(param_2 + lVar6 + lVar8 + 0x10);
            uVar2 = *(uint *)(&DAT_01bf5b3c + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf5f3c + (ulong)(uVar2 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf573c + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf533c + (ulong)(uVar2 >> 0x18) * 4) ^ *(uint *)(lVar1 + 0x14);
            uVar2 = *(uint *)(&DAT_01bf5b3c + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf5f3c + (ulong)(uVar2 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf573c + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf533c + (ulong)(uVar2 >> 0x18) * 4) ^ *(uint *)(lVar1 + 0x18);
            lVar8 = lVar8 + 0x20;
            uVar2 = *(uint *)(&DAT_01bf5b3c + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf5f3c + (ulong)(uVar2 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf573c + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01bf533c + (ulong)(uVar2 >> 0x18) * 4) ^ *(uint *)(lVar1 + 0x1c);
            param_1 = *(uint *)(&DAT_01bf5b3c + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                      *(uint *)(&DAT_01bf5f3c + (ulong)(uVar2 & 0xff) * 4) ^
                      *(uint *)(&DAT_01bf573c + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(&DAT_01bf533c + (ulong)(uVar2 >> 0x18) * 4);
          } while (0x1f < uVar3);
          puVar9 = (uint *)(param_2 + (ulong)(uVar4 & 0xffffffe0) + lVar6 + 0x20);
          uVar5 = (ulong)((param_3 - 0x20) - (int)lVar6 & 0x1f);
        }
        uVar4 = (uint)uVar5 - 4;
        if (3 < (uint)uVar5) {
          puVar7 = puVar9;
          do {
            uVar2 = (int)uVar5 - 4;
            uVar5 = (ulong)uVar2;
            param_1 = *puVar7 ^ param_1;
            param_1 = *(uint *)(&DAT_01bf5b3c + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                      *(uint *)(&DAT_01bf5f3c + (ulong)(param_1 & 0xff) * 4) ^
                      *(uint *)(&DAT_01bf573c + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(&DAT_01bf533c + (ulong)(param_1 >> 0x18) * 4);
            puVar7 = puVar7 + 1;
          } while (3 < uVar2);
          puVar9 = puVar9 + ((uVar4 >> 2) + 1);
          uVar5 = (ulong)(uVar4 & 3);
        }
        uVar4 = (uint)uVar5;
        while (uVar4 != 0) {
          uVar4 = (int)uVar5 - 1;
          uVar5 = (ulong)uVar4;
          param_1 = *(uint *)(&DAT_01bf533c + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar9) * 4) ^
                    param_1 >> 8;
          puVar9 = (uint *)((long)puVar9 + 1);
        }
        break;
      }
      lVar6 = lVar6 + 1;
      uVar4 = uVar4 - 1;
      param_1 = *(uint *)(&DAT_01bf533c + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar9) * 4) ^
                param_1 >> 8;
    } while (param_3 != (uint)lVar6);
  }
  return ~param_1;
}

