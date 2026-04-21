// functions/00f23 — 2 functions
#include "libGameKindred.h"




ulong FUN_00f23070(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((param_1 == 0) || (lVar8 = *(long *)(param_1 + 0x38), lVar8 == 0)) {
    uVar7 = 0xfffffffe;
  }
  else {
    uVar2 = 6;
    if (param_2 != 0xffffffff) {
      uVar2 = param_2;
    }
    uVar7 = 0xfffffffe;
    if ((param_3 < 5) && (uVar2 < 10)) {
      if (((*(uint *)(lVar8 + 0xb8) == param_3) &&
          ((&PTR_FUN_02828e18)[(long)*(int *)(lVar8 + 0xb4) * 2] ==
           (&PTR_FUN_02828e18)[(long)(int)uVar2 * 2])) || (*(long *)(param_1 + 0x10) == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00f23168(param_1,5);
        if ((int)uVar7 == -5) {
          uVar3 = 0;
          if (*(int *)(lVar8 + 0x28) != 0) {
            uVar3 = 0xfffffffb;
          }
          uVar7 = (ulong)uVar3;
        }
      }
      if (*(uint *)(lVar8 + 0xb4) != uVar2) {
        *(uint *)(lVar8 + 0xb4) = uVar2;
        lVar1 = (long)(int)uVar2 * 0x10;
        uVar4 = *(ushort *)(&DAT_02828e12 + lVar1);
        uVar5 = *(ushort *)(&DAT_02828e10 + lVar1);
        uVar6 = *(ushort *)(&DAT_02828e14 + lVar1);
        *(uint *)(lVar8 + 0xac) = (uint)*(ushort *)(&DAT_02828e16 + lVar1);
        *(uint *)(lVar8 + 0xb0) = (uint)uVar4;
        *(uint *)(lVar8 + 0xbc) = (uint)uVar5;
        *(uint *)(lVar8 + 0xc0) = (uint)uVar6;
      }
      *(uint *)(lVar8 + 0xb8) = param_3;
    }
  }
  return uVar7;
}




ulong FUN_00f23168(long *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  void *__s;
  long lVar12;
  undefined1 uVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  
  if (param_1 == (long *)0x0) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  plVar23 = (long *)param_1[7];
  if (plVar23 == (long *)0x0) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && ((int)param_1[1] != 0)))) ||
     ((iVar14 = (int)plVar23[1], param_2 != 4 && (iVar14 == 0x29a)))) {
    param_1[6] = (long)"stream error";
    return 0xfffffffe;
  }
  if ((int)param_1[4] == 0) goto LAB_00f23b58;
  lVar12 = plVar23[8];
  *plVar23 = (long)param_1;
  *(uint *)(plVar23 + 8) = param_2;
  if (iVar14 == 0x2a) {
    if (*(int *)((long)plVar23 + 0x2c) != 2) {
      uVar10 = 0;
      if ((int)plVar23[0x17] < 2) {
        iVar14 = *(int *)((long)plVar23 + 0xb4);
        uVar10 = 0;
        if (1 < iVar14) {
          if (iVar14 < 6) {
            uVar10 = 0x40;
          }
          else {
            uVar10 = 0x80;
            if (iVar14 != 6) {
              uVar10 = 0xc0;
            }
          }
        }
      }
      uVar10 = uVar10 | (int)plVar23[9] * 0x1000 - 0x7800U;
      *(undefined4 *)(plVar23 + 1) = 0x71;
      uVar16 = *(uint *)(plVar23 + 5);
      if (*(int *)((long)plVar23 + 0x9c) != 0) {
        uVar10 = uVar10 | 0x20;
      }
      *(uint *)(plVar23 + 5) = uVar16 + 1;
      *(char *)(plVar23[2] + (ulong)uVar16) = (char)(uVar10 >> 8);
      uVar16 = *(uint *)(plVar23 + 5);
      *(uint *)(plVar23 + 5) = uVar16 + 1;
      *(byte *)(plVar23[2] + (ulong)uVar16) =
           ((byte)uVar10 - ((char)(uVar10 / 0x1f) * ' ' - (char)(uVar10 / 0x1f)) | (byte)uVar10) ^
           0x1f;
      if (*(int *)((long)plVar23 + 0x9c) != 0) {
        lVar11 = param_1[0xc];
        uVar10 = *(uint *)(plVar23 + 5);
        *(uint *)(plVar23 + 5) = uVar10 + 1;
        *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar11 >> 0x18);
        uVar10 = *(uint *)(plVar23 + 5);
        *(uint *)(plVar23 + 5) = uVar10 + 1;
        *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar11 >> 0x10);
        lVar11 = param_1[0xc];
        uVar10 = *(uint *)(plVar23 + 5);
        *(uint *)(plVar23 + 5) = uVar10 + 1;
        *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar11 >> 8);
        uVar10 = *(uint *)(plVar23 + 5);
        *(uint *)(plVar23 + 5) = uVar10 + 1;
        *(char *)(plVar23[2] + (ulong)uVar10) = (char)lVar11;
      }
      lVar11 = FUN_00f26ad8(0,0,0);
      param_1[0xc] = lVar11;
      iVar14 = (int)plVar23[1];
      goto LAB_00f23638;
    }
    lVar11 = FUN_00f26efc(0,0,0);
    param_1[0xc] = lVar11;
    uVar10 = *(uint *)(plVar23 + 5);
    *(uint *)(plVar23 + 5) = uVar10 + 1;
    *(undefined1 *)(plVar23[2] + (ulong)uVar10) = 0x1f;
    uVar10 = *(uint *)(plVar23 + 5);
    *(uint *)(plVar23 + 5) = uVar10 + 1;
    *(undefined1 *)(plVar23[2] + (ulong)uVar10) = 0x8b;
    uVar10 = *(uint *)(plVar23 + 5);
    *(uint *)(plVar23 + 5) = uVar10 + 1;
    *(undefined1 *)(plVar23[2] + (ulong)uVar10) = 8;
    piVar15 = (int *)plVar23[6];
    if (piVar15 != (int *)0x0) {
      iVar14 = *piVar15;
      iVar19 = piVar15[0x11];
      uVar10 = *(uint *)(plVar23 + 5);
      lVar11 = *(long *)(piVar15 + 6);
      lVar21 = *(long *)(piVar15 + 10);
      lVar22 = *(long *)(piVar15 + 0xe);
      *(uint *)(plVar23 + 5) = uVar10 + 1;
      bVar8 = 0;
      if (iVar19 != 0) {
        bVar8 = 2;
      }
      bVar3 = 0;
      if (lVar11 != 0) {
        bVar3 = 4;
      }
      bVar4 = 0;
      if (lVar21 != 0) {
        bVar4 = 8;
      }
      bVar5 = 0;
      if (lVar22 != 0) {
        bVar5 = 0x10;
      }
      *(byte *)(plVar23[2] + (ulong)uVar10) = bVar8 | iVar14 != 0 | bVar3 | bVar4 | bVar5;
      uVar10 = *(uint *)(plVar23 + 5);
      uVar17 = *(undefined8 *)(plVar23[6] + 8);
      *(uint *)(plVar23 + 5) = uVar10 + 1;
      *(char *)(plVar23[2] + (ulong)uVar10) = (char)uVar17;
      uVar10 = *(uint *)(plVar23 + 5);
      uVar17 = *(undefined8 *)(plVar23[6] + 8);
      *(uint *)(plVar23 + 5) = uVar10 + 1;
      *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)uVar17 >> 8);
      uVar10 = *(uint *)(plVar23 + 5);
      uVar17 = *(undefined8 *)(plVar23[6] + 8);
      *(uint *)(plVar23 + 5) = uVar10 + 1;
      *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)uVar17 >> 0x10);
      uVar10 = *(uint *)(plVar23 + 5);
      uVar17 = *(undefined8 *)(plVar23[6] + 8);
      *(uint *)(plVar23 + 5) = uVar10 + 1;
      *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)uVar17 >> 0x18);
      uVar13 = 2;
      if (*(int *)((long)plVar23 + 0xb4) != 9) {
        uVar13 = 4;
        if ((int)plVar23[0x17] < 2 && 1 < *(int *)((long)plVar23 + 0xb4)) {
          uVar13 = 0;
        }
      }
      uVar10 = *(uint *)(plVar23 + 5);
      *(uint *)(plVar23 + 5) = uVar10 + 1;
      *(undefined1 *)(plVar23[2] + (ulong)uVar10) = uVar13;
      uVar10 = *(uint *)(plVar23 + 5);
      uVar6 = *(undefined4 *)(plVar23[6] + 0x14);
      *(uint *)(plVar23 + 5) = uVar10 + 1;
      *(char *)(plVar23[2] + (ulong)uVar10) = (char)uVar6;
      lVar11 = plVar23[6];
      if (*(long *)(lVar11 + 0x18) != 0) {
        uVar10 = *(uint *)(plVar23 + 5);
        uVar6 = *(undefined4 *)(lVar11 + 0x20);
        *(uint *)(plVar23 + 5) = uVar10 + 1;
        *(char *)(plVar23[2] + (ulong)uVar10) = (char)uVar6;
        uVar10 = *(uint *)(plVar23 + 5);
        uVar6 = *(undefined4 *)(plVar23[6] + 0x20);
        *(uint *)(plVar23 + 5) = uVar10 + 1;
        *(char *)(plVar23[2] + (ulong)uVar10) = (char)((uint)uVar6 >> 8);
        lVar11 = plVar23[6];
      }
      if (*(int *)(lVar11 + 0x44) != 0) {
        lVar11 = FUN_00f26efc(param_1[0xc],plVar23[2],(int)plVar23[5]);
        param_1[0xc] = lVar11;
      }
      *(undefined4 *)(plVar23 + 7) = 0;
      *(undefined4 *)(plVar23 + 1) = 0x45;
      goto LAB_00f23644;
    }
    uVar10 = *(uint *)(plVar23 + 5);
    *(uint *)(plVar23 + 5) = uVar10 + 1;
    *(undefined1 *)(plVar23[2] + (ulong)uVar10) = 0;
    uVar10 = *(uint *)(plVar23 + 5);
    *(uint *)(plVar23 + 5) = uVar10 + 1;
    *(undefined1 *)(plVar23[2] + (ulong)uVar10) = 0;
    uVar10 = *(uint *)(plVar23 + 5);
    *(uint *)(plVar23 + 5) = uVar10 + 1;
    *(undefined1 *)(plVar23[2] + (ulong)uVar10) = 0;
    uVar10 = *(uint *)(plVar23 + 5);
    *(uint *)(plVar23 + 5) = uVar10 + 1;
    *(undefined1 *)(plVar23[2] + (ulong)uVar10) = 0;
    uVar10 = *(uint *)(plVar23 + 5);
    *(uint *)(plVar23 + 5) = uVar10 + 1;
    *(undefined1 *)(plVar23[2] + (ulong)uVar10) = 0;
    if (*(int *)((long)plVar23 + 0xb4) == 9) {
      uVar13 = 2;
    }
    else {
      uVar13 = 4;
      if ((int)plVar23[0x17] < 2 && 1 < *(int *)((long)plVar23 + 0xb4)) {
        uVar13 = 0;
      }
    }
    uVar10 = *(uint *)(plVar23 + 5);
    *(uint *)(plVar23 + 5) = uVar10 + 1;
    *(undefined1 *)(plVar23[2] + (ulong)uVar10) = uVar13;
    uVar10 = *(uint *)(plVar23 + 5);
    *(uint *)(plVar23 + 5) = uVar10 + 1;
    *(undefined1 *)(plVar23[2] + (ulong)uVar10) = 3;
    *(undefined4 *)(plVar23 + 1) = 0x71;
  }
  else {
LAB_00f23638:
    if (iVar14 == 0x45) {
LAB_00f23644:
      lVar11 = plVar23[6];
      if (*(long *)(lVar11 + 0x18) != 0) {
        uVar10 = *(uint *)(plVar23 + 7);
        uVar16 = *(uint *)(plVar23 + 5);
        if (uVar10 < *(ushort *)(lVar11 + 0x20)) {
          uVar18 = (ulong)uVar16;
          while( true ) {
            if (plVar23[3] == (ulong)uVar16) {
              iVar14 = uVar16 - (uint)uVar18;
              if (((uint)uVar18 <= uVar16 && iVar14 != 0) && (*(int *)(lVar11 + 0x44) != 0)) {
                lVar11 = FUN_00f26efc(param_1[0xc],plVar23[2] + uVar18,iVar14);
                param_1[0xc] = lVar11;
              }
              FUN_00f24254(param_1);
              uVar16 = *(uint *)(plVar23 + 5);
              uVar20 = (ulong)uVar16;
              lVar11 = plVar23[6];
              if (plVar23[3] == uVar20) goto LAB_00f23708;
              uVar10 = *(uint *)(plVar23 + 7);
              uVar18 = (ulong)uVar16;
            }
            else {
              uVar20 = (ulong)uVar16;
            }
            uVar13 = *(undefined1 *)(*(long *)(lVar11 + 0x18) + (ulong)uVar10);
            *(uint *)(plVar23 + 5) = uVar16 + 1;
            *(undefined1 *)(plVar23[2] + uVar20) = uVar13;
            lVar11 = plVar23[6];
            uVar10 = (int)plVar23[7] + 1;
            *(uint *)(plVar23 + 7) = uVar10;
            if (*(ushort *)(lVar11 + 0x20) <= uVar10) break;
            uVar16 = *(uint *)(plVar23 + 5);
          }
          uVar16 = (uint)uVar18;
        }
LAB_00f23708:
        if ((*(int *)(lVar11 + 0x44) != 0) &&
           (iVar14 = *(uint *)(plVar23 + 5) - uVar16,
           uVar16 <= *(uint *)(plVar23 + 5) && iVar14 != 0)) {
          lVar11 = FUN_00f26efc(param_1[0xc],plVar23[2] + (ulong)uVar16,iVar14);
          param_1[0xc] = lVar11;
          lVar11 = plVar23[6];
        }
        if ((int)plVar23[7] != *(int *)(lVar11 + 0x20)) {
          iVar14 = (int)plVar23[1];
          goto LAB_00f23758;
        }
        *(undefined4 *)(plVar23 + 7) = 0;
      }
      *(undefined4 *)(plVar23 + 1) = 0x49;
LAB_00f23768:
      if (*(long *)(lVar11 + 0x28) != 0) {
        uVar20 = (ulong)*(uint *)(plVar23 + 5);
        uVar18 = uVar20;
        while( true ) {
          uVar10 = (uint)uVar20;
          if (plVar23[3] == uVar20) {
            iVar14 = uVar10 - (uint)uVar18;
            if (((uint)uVar18 <= uVar10 && iVar14 != 0) && (*(int *)(plVar23[6] + 0x44) != 0)) {
              lVar11 = FUN_00f26efc(param_1[0xc],plVar23[2] + uVar18,iVar14);
              param_1[0xc] = lVar11;
            }
            FUN_00f24254(param_1);
            uVar10 = *(uint *)(plVar23 + 5);
            uVar18 = (ulong)uVar10;
            uVar20 = uVar18;
            if (plVar23[3] == uVar18) {
              bVar9 = true;
              goto LAB_00f23818;
            }
          }
          uVar16 = *(uint *)(plVar23 + 7);
          lVar11 = *(long *)(plVar23[6] + 0x28);
          *(uint *)(plVar23 + 7) = uVar16 + 1;
          cVar7 = *(char *)(lVar11 + (ulong)uVar16);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + uVar20) = cVar7;
          if (cVar7 == '\0') break;
          uVar20 = (ulong)*(uint *)(plVar23 + 5);
        }
        bVar9 = false;
LAB_00f23818:
        if ((*(int *)(plVar23[6] + 0x44) != 0) &&
           (iVar14 = *(uint *)(plVar23 + 5) - (uint)uVar18,
           (uint)uVar18 <= *(uint *)(plVar23 + 5) && iVar14 != 0)) {
          lVar11 = FUN_00f26efc(param_1[0xc],plVar23[2] + uVar18,iVar14);
          param_1[0xc] = lVar11;
        }
        if (bVar9) {
          iVar14 = (int)plVar23[1];
          goto LAB_00f2384c;
        }
        *(undefined4 *)(plVar23 + 7) = 0;
      }
      *(undefined4 *)(plVar23 + 1) = 0x5b;
LAB_00f23868:
      plVar24 = plVar23 + 6;
      if (*(long *)(*plVar24 + 0x38) != 0) {
        uVar20 = (ulong)*(uint *)(plVar23 + 5);
        uVar18 = uVar20;
        while( true ) {
          uVar10 = (uint)uVar20;
          if (plVar23[3] == uVar20) {
            iVar14 = uVar10 - (uint)uVar18;
            if (((uint)uVar18 <= uVar10 && iVar14 != 0) && (*(int *)(*plVar24 + 0x44) != 0)) {
              lVar11 = FUN_00f26efc(param_1[0xc],plVar23[2] + uVar18,iVar14);
              param_1[0xc] = lVar11;
            }
            FUN_00f24254(param_1);
            uVar10 = *(uint *)(plVar23 + 5);
            uVar18 = (ulong)uVar10;
            uVar20 = uVar18;
            if (plVar23[3] == uVar18) {
              bVar9 = true;
              goto LAB_00f2391c;
            }
          }
          uVar16 = *(uint *)(plVar23 + 7);
          lVar11 = *(long *)(plVar23[6] + 0x38);
          *(uint *)(plVar23 + 7) = uVar16 + 1;
          cVar7 = *(char *)(lVar11 + (ulong)uVar16);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + uVar20) = cVar7;
          if (cVar7 == '\0') break;
          uVar20 = (ulong)*(uint *)(plVar23 + 5);
        }
        bVar9 = false;
LAB_00f2391c:
        if ((*(int *)(*plVar24 + 0x44) != 0) &&
           (iVar14 = *(uint *)(plVar23 + 5) - (uint)uVar18,
           (uint)uVar18 <= *(uint *)(plVar23 + 5) && iVar14 != 0)) {
          lVar11 = FUN_00f26efc(param_1[0xc],plVar23[2] + uVar18,iVar14);
          param_1[0xc] = lVar11;
        }
        if (bVar9) {
          iVar14 = (int)plVar23[1];
          goto LAB_00f23950;
        }
      }
      *(undefined4 *)(plVar23 + 1) = 0x67;
    }
    else {
LAB_00f23758:
      if (iVar14 == 0x49) {
        lVar11 = plVar23[6];
        goto LAB_00f23768;
      }
LAB_00f2384c:
      if (iVar14 == 0x5b) goto LAB_00f23868;
LAB_00f23950:
      if (iVar14 != 0x67) goto LAB_00f239f0;
    }
    if (*(int *)(plVar23[6] + 0x44) != 0) {
      uVar10 = *(uint *)(plVar23 + 5);
      uVar18 = plVar23[3];
      uVar20 = (ulong)(uVar10 + 2);
      if (uVar18 < uVar20) {
        FUN_00f24254(param_1);
        uVar10 = *(uint *)(plVar23 + 5);
        uVar18 = plVar23[3];
        uVar20 = (ulong)(uVar10 + 2);
      }
      if (uVar18 < uVar20) goto LAB_00f239f0;
      lVar11 = param_1[0xc];
      *(uint *)(plVar23 + 5) = uVar10 + 1;
      *(char *)(plVar23[2] + (ulong)uVar10) = (char)lVar11;
      lVar11 = param_1[0xc];
      uVar10 = *(uint *)(plVar23 + 5);
      *(uint *)(plVar23 + 5) = uVar10 + 1;
      *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar11 >> 8);
      lVar11 = FUN_00f26efc(0,0,0);
      param_1[0xc] = lVar11;
    }
    *(undefined4 *)(plVar23 + 1) = 0x71;
  }
LAB_00f239f0:
  if ((int)plVar23[5] == 0) {
    if ((int)param_1[1] == 0) {
      iVar19 = 9;
      iVar14 = iVar19;
      if ((int)param_2 < 5) {
        iVar14 = 0;
      }
      if ((int)lVar12 < 5) {
        iVar19 = 0;
      }
      if ((param_2 != 4) && ((int)(param_2 * 2 - iVar14) <= (int)lVar12 * 2 - iVar19))
      goto LAB_00f23b58;
    }
  }
  else {
    FUN_00f24254(param_1);
    if ((int)param_1[4] == 0) goto LAB_00f24090;
  }
  if ((int)plVar23[1] == 0x29a) {
    if ((int)param_1[1] != 0) {
LAB_00f23b58:
      param_1[6] = (long)"buffer error";
      return 0xfffffffb;
    }
LAB_00f23a30:
    if (((int)plVar23[1] == 0x29a || param_2 == 0) && (*(int *)((long)plVar23 + 0xa4) == 0))
    goto LAB_00f23fa8;
  }
  else if ((int)param_1[1] == 0) goto LAB_00f23a30;
  if ((int)plVar23[0x17] == 3) {
LAB_00f23b88:
    do {
      uVar10 = *(uint *)((long)plVar23 + 0xa4);
      if (uVar10 < 0x103) {
        FUN_00f22be0(plVar23);
        uVar10 = *(uint *)((long)plVar23 + 0xa4);
        if ((param_2 == 0) && (uVar10 < 0x103)) break;
        if (uVar10 == 0) goto LAB_00f23e4c;
        *(undefined4 *)(plVar23 + 0x12) = 0;
        if (2 < uVar10) goto LAB_00f23bc8;
        uVar18 = (ulong)*(uint *)((long)plVar23 + 0x9c);
LAB_00f23d78:
        uVar10 = *(uint *)((long)plVar23 + 0x16fc);
        bVar8 = *(byte *)(plVar23[10] + uVar18);
        *(undefined2 *)(plVar23[0x2e0] + (ulong)uVar10 * 2) = 0;
        *(uint *)((long)plVar23 + 0x16fc) = uVar10 + 1;
        *(byte *)(plVar23[0x2de] + (ulong)uVar10) = bVar8;
        *(short *)((long)plVar23 + (ulong)bVar8 * 4 + 0xc4) =
             *(short *)((long)plVar23 + (ulong)bVar8 * 4 + 0xc4) + 1;
        uVar10 = *(int *)((long)plVar23 + 0x9c) + 1;
        *(int *)((long)plVar23 + 0xa4) = *(int *)((long)plVar23 + 0xa4) + -1;
        *(uint *)((long)plVar23 + 0x9c) = uVar10;
        if (*(int *)((long)plVar23 + 0x16fc) != (int)plVar23[0x2df] + -1) goto LAB_00f23b88;
      }
      else {
        *(undefined4 *)(plVar23 + 0x12) = 0;
LAB_00f23bc8:
        uVar18 = (ulong)*(uint *)((long)plVar23 + 0x9c);
        if (*(uint *)((long)plVar23 + 0x9c) == 0) goto LAB_00f23d78;
        pcVar1 = (char *)(plVar23[10] + uVar18);
        cVar7 = pcVar1[-1];
        if (((cVar7 != *pcVar1) || (cVar7 != pcVar1[1])) || (cVar7 != pcVar1[2])) goto LAB_00f23d78;
        lVar12 = 0;
        iVar14 = (int)pcVar1;
        do {
          pcVar2 = pcVar1 + lVar12;
          if (cVar7 != pcVar2[3]) {
            iVar19 = (int)pcVar2 + 3;
            goto LAB_00f23cd4;
          }
          iVar19 = (int)lVar12;
          if (cVar7 != pcVar2[4]) {
            iVar19 = iVar14 + iVar19 + 4;
            goto LAB_00f23cd4;
          }
          pcVar2 = pcVar1 + lVar12;
          if (cVar7 != pcVar2[5]) {
            iVar19 = (int)pcVar2 + 5;
            goto LAB_00f23cd4;
          }
          if (cVar7 != pcVar2[6]) {
            iVar19 = iVar14 + iVar19 + 6;
            goto LAB_00f23cd4;
          }
          pcVar2 = pcVar1 + lVar12;
          if (cVar7 != pcVar2[7]) {
            iVar19 = (int)pcVar2 + 7;
            goto LAB_00f23cd4;
          }
          if (cVar7 != pcVar2[8]) {
            iVar19 = iVar14 + iVar19 + 8;
            goto LAB_00f23cd4;
          }
          pcVar2 = pcVar1 + lVar12;
          if (cVar7 != pcVar2[9]) {
            iVar19 = (int)pcVar2 + 9;
            goto LAB_00f23cd4;
          }
          uVar20 = lVar12 + 10;
          lVar12 = lVar12 + 8;
        } while ((uVar20 < 0x102) && (cVar7 == pcVar2[10]));
        iVar19 = iVar14 + (int)lVar12 + 2;
LAB_00f23cd4:
        uVar16 = 0x102 - ((iVar14 + 0x102) - iVar19);
        if (uVar16 <= uVar10) {
          uVar10 = uVar16;
        }
        *(uint *)(plVar23 + 0x12) = uVar10;
        if (uVar10 < 3) goto LAB_00f23d78;
        uVar16 = *(uint *)((long)plVar23 + 0x16fc);
        bVar8 = (&DAT_01bf4a98)[(ulong)(uVar10 - 3) & 0xff];
        *(undefined2 *)(plVar23[0x2e0] + (ulong)uVar16 * 2) = 1;
        uVar18 = (ulong)bVar8 << 2 | 0x400;
        *(uint *)((long)plVar23 + 0x16fc) = uVar16 + 1;
        *(char *)(plVar23[0x2de] + (ulong)uVar16) = (char)(uVar10 - 3);
        *(short *)((long)plVar23 + uVar18 + 200) = *(short *)((long)plVar23 + uVar18 + 200) + 1;
        *(short *)(plVar23 + 0x137) = (short)plVar23[0x137] + 1;
        uVar10 = *(int *)((long)plVar23 + 0x9c) + (int)plVar23[0x12];
        *(int *)((long)plVar23 + 0xa4) = *(int *)((long)plVar23 + 0xa4) - (int)plVar23[0x12];
        *(uint *)((long)plVar23 + 0x9c) = uVar10;
        *(undefined4 *)(plVar23 + 0x12) = 0;
        if (*(int *)((long)plVar23 + 0x16fc) != (int)plVar23[0x2df] + -1) goto LAB_00f23b88;
      }
      uVar18 = plVar23[0x11];
      if ((long)uVar18 < 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = plVar23[10] + (uVar18 & 0xffffffff);
      }
      FUN_00f2545c(plVar23,lVar12,uVar10 - uVar18,0);
      plVar23[0x11] = (ulong)*(uint *)((long)plVar23 + 0x9c);
      FUN_00f24254(*plVar23);
    } while (*(int *)(*plVar23 + 0x20) != 0);
  }
  else {
    if ((int)plVar23[0x17] != 2) {
      uVar10 = (*(code *)(&PTR_FUN_02828e18)[(long)*(int *)((long)plVar23 + 0xb4) * 2])
                         (plVar23,param_2);
      goto LAB_00f23ec4;
    }
    do {
      do {
        if ((*(int *)((long)plVar23 + 0xa4) == 0) &&
           (FUN_00f22be0(plVar23), *(int *)((long)plVar23 + 0xa4) == 0)) {
          if (param_2 != 0) goto LAB_00f23e4c;
          goto LAB_00f23ee4;
        }
        uVar10 = *(uint *)((long)plVar23 + 0x16fc);
        *(undefined4 *)(plVar23 + 0x12) = 0;
        bVar8 = *(byte *)(plVar23[10] + (ulong)*(uint *)((long)plVar23 + 0x9c));
        *(undefined2 *)(plVar23[0x2e0] + (ulong)uVar10 * 2) = 0;
        *(uint *)((long)plVar23 + 0x16fc) = uVar10 + 1;
        *(byte *)(plVar23[0x2de] + (ulong)uVar10) = bVar8;
        *(short *)((long)plVar23 + (ulong)bVar8 * 4 + 0xc4) =
             *(short *)((long)plVar23 + (ulong)bVar8 * 4 + 0xc4) + 1;
        uVar10 = *(int *)((long)plVar23 + 0x9c) + 1;
        *(int *)((long)plVar23 + 0xa4) = *(int *)((long)plVar23 + 0xa4) + -1;
        *(uint *)((long)plVar23 + 0x9c) = uVar10;
      } while (*(int *)((long)plVar23 + 0x16fc) != (int)plVar23[0x2df] + -1);
      uVar18 = plVar23[0x11];
      if ((long)uVar18 < 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = plVar23[10] + (uVar18 & 0xffffffff);
      }
      FUN_00f2545c(plVar23,lVar12,uVar10 - uVar18,0);
      plVar23[0x11] = (ulong)*(uint *)((long)plVar23 + 0x9c);
      FUN_00f24254(*plVar23);
    } while (*(int *)(*plVar23 + 0x20) != 0);
  }
LAB_00f23ee4:
  if ((int)param_1[4] != 0) {
    return 0;
  }
LAB_00f24090:
  *(undefined4 *)(plVar23 + 8) = 0xffffffff;
  return 0;
LAB_00f23e4c:
  *(undefined4 *)((long)plVar23 + 0x171c) = 0;
  if (param_2 == 4) {
    uVar18 = plVar23[0x11];
    if ((long)uVar18 < 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = plVar23[10] + (uVar18 & 0xffffffff);
    }
    FUN_00f2545c(plVar23,lVar12,*(uint *)((long)plVar23 + 0x9c) - uVar18,1);
    plVar23[0x11] = (ulong)*(uint *)((long)plVar23 + 0x9c);
    FUN_00f24254(*plVar23);
    uVar10 = 2;
    if (*(int *)(*plVar23 + 0x20) != 0) {
      uVar10 = 3;
    }
LAB_00f23ec4:
    if ((uVar10 | 1) == 3) {
      *(undefined4 *)(plVar23 + 1) = 0x29a;
    }
    if ((uVar10 | 2) != 2) {
      if (uVar10 != 1) goto LAB_00f23fa8;
LAB_00f23f34:
      if (param_2 != 5) {
        if (param_2 == 1) {
          FUN_00f25394();
        }
        else {
          FUN_00f251bc(plVar23,0,0,0);
          if (param_2 == 3) {
            __s = (void *)plVar23[0xd];
            uVar18 = (ulong)(*(int *)((long)plVar23 + 0x74) - 1);
            *(undefined2 *)((long)__s + uVar18 * 2) = 0;
            memset(__s,0,uVar18 << 1);
            if (*(int *)((long)plVar23 + 0xa4) == 0) {
              *(undefined4 *)((long)plVar23 + 0x9c) = 0;
              plVar23[0x11] = 0;
              *(undefined4 *)((long)plVar23 + 0x171c) = 0;
            }
          }
        }
      }
      FUN_00f24254(param_1);
      if ((int)param_1[4] != 0) {
LAB_00f23fa8:
        if (param_2 != 4) {
          return 0;
        }
        if (*(int *)((long)plVar23 + 0x2c) < 1) {
          return 1;
        }
        lVar12 = param_1[0xc];
        if (*(int *)((long)plVar23 + 0x2c) == 2) {
          uVar10 = *(uint *)(plVar23 + 5);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + (ulong)uVar10) = (char)lVar12;
          lVar12 = param_1[0xc];
          uVar10 = *(uint *)(plVar23 + 5);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar12 >> 8);
          lVar12 = param_1[0xc];
          uVar10 = *(uint *)(plVar23 + 5);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar12 >> 0x10);
          lVar12 = param_1[0xc];
          uVar10 = *(uint *)(plVar23 + 5);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar12 >> 0x18);
          uVar10 = *(uint *)(plVar23 + 5);
          lVar12 = param_1[2];
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + (ulong)uVar10) = (char)lVar12;
          lVar12 = param_1[2];
          uVar10 = *(uint *)(plVar23 + 5);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar12 >> 8);
          lVar12 = param_1[2];
          uVar10 = *(uint *)(plVar23 + 5);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar12 >> 0x10);
          uVar18 = (ulong)param_1[2] >> 0x18;
        }
        else {
          uVar10 = *(uint *)(plVar23 + 5);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar12 >> 0x18);
          uVar10 = *(uint *)(plVar23 + 5);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + (ulong)uVar10) = (char)((ulong)lVar12 >> 0x10);
          uVar18 = param_1[0xc];
          uVar10 = *(uint *)(plVar23 + 5);
          *(uint *)(plVar23 + 5) = uVar10 + 1;
          *(char *)(plVar23[2] + (ulong)uVar10) = (char)(uVar18 >> 8);
        }
        uVar10 = *(uint *)(plVar23 + 5);
        *(uint *)(plVar23 + 5) = uVar10 + 1;
        *(char *)(plVar23[2] + (ulong)uVar10) = (char)uVar18;
        FUN_00f24254(param_1);
        if (0 < *(int *)((long)plVar23 + 0x2c)) {
          *(int *)((long)plVar23 + 0x2c) = -*(int *)((long)plVar23 + 0x2c);
        }
        return (ulong)((int)plVar23[5] == 0);
      }
      goto LAB_00f24090;
    }
  }
  else {
    if (*(int *)((long)plVar23 + 0x16fc) == 0) goto LAB_00f23f34;
    uVar18 = plVar23[0x11];
    if ((long)uVar18 < 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = plVar23[10] + (uVar18 & 0xffffffff);
    }
    FUN_00f2545c(plVar23,lVar12,*(uint *)((long)plVar23 + 0x9c) - uVar18,0);
    plVar23[0x11] = (ulong)*(uint *)((long)plVar23 + 0x9c);
    FUN_00f24254(*plVar23);
    if (*(int *)(*plVar23 + 0x20) != 0) goto LAB_00f23f34;
  }
  goto LAB_00f23ee4;
}

