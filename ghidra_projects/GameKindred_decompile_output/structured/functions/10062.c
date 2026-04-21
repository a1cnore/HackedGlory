// functions/10062 — 231 functions
#include "GameKindred.h"




void FUN_1006200a0(long *param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,
                  int *param_7,int *param_8,int *param_9,int *param_10,int *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = **(int **)(*param_1 + 0x30);
  iVar1 = iVar7 >> 1;
  iVar7 = iVar7 >> 2;
  iVar8 = (*(int **)(*param_1 + 0x30))[2];
  iVar2 = iVar8 >> 2;
  lVar6 = param_1[6];
  if (param_1[5] == 0) {
    iVar8 = iVar1 - param_2;
    if (param_2 <= iVar7) {
      iVar8 = param_2;
    }
    *param_4 = 0;
    if (lVar6 == 0) {
      *param_7 = 0;
      iVar2 = iVar7;
      if (param_3 <= iVar7) {
        iVar2 = param_3;
      }
      iVar5 = param_2;
      if (param_2 < 1) {
        iVar5 = 0;
      }
      iVar9 = 0;
      if (param_2 <= iVar7) {
        iVar9 = iVar2 - iVar5;
      }
      *param_5 = iVar9;
      iVar2 = iVar1;
      if (param_3 <= iVar1) {
        iVar2 = param_3;
      }
      iVar5 = param_2;
      if (param_2 <= iVar7) {
        iVar5 = iVar7;
      }
      iVar9 = 0;
      if (iVar7 <= param_3) {
        iVar9 = iVar2 - iVar5;
      }
      *param_6 = iVar9;
      *param_8 = iVar7 - iVar8;
      *param_9 = iVar8;
    }
    else {
      iVar5 = iVar2 + iVar7;
      if (param_3 <= iVar2 + iVar7) {
        iVar5 = param_3;
      }
      iVar9 = param_2;
      if (param_2 <= iVar1) {
        iVar9 = iVar1;
      }
      iVar3 = 0;
      if (iVar1 <= param_3) {
        iVar3 = iVar5 - iVar9;
      }
      *param_7 = iVar3;
      iVar5 = iVar7;
      if (param_3 <= iVar7) {
        iVar5 = param_3;
      }
      iVar9 = param_2;
      if (param_2 < 1) {
        iVar9 = 0;
      }
      iVar3 = 0;
      if (param_2 <= iVar7) {
        iVar3 = iVar5 - iVar9;
      }
      *param_5 = iVar3;
      iVar5 = iVar1;
      if (param_3 <= iVar1) {
        iVar5 = param_3;
      }
      iVar9 = param_2;
      if (param_2 <= iVar7) {
        iVar9 = iVar7;
      }
      iVar3 = 0;
      if (param_2 <= iVar1 && iVar7 <= param_3) {
        iVar3 = iVar5 - iVar9;
      }
      *param_6 = iVar3;
      *param_8 = iVar7 - iVar8;
      *param_9 = (iVar2 - iVar7) + iVar8;
    }
    *param_10 = iVar1 - param_2;
    *param_11 = param_2;
    return;
  }
  iVar8 = iVar8 >> 1;
  if (lVar6 != 0) {
    iVar1 = iVar2;
    if (param_3 <= iVar2) {
      iVar1 = param_3;
    }
    iVar7 = param_2;
    if (param_2 < 1) {
      iVar7 = 0;
    }
    iVar5 = iVar8 - param_2;
    if (param_2 <= iVar2) {
      iVar5 = param_2;
    }
    *param_4 = 0;
    *param_7 = 0;
    iVar9 = 0;
    if (param_2 <= iVar2) {
      iVar9 = iVar1 - iVar7;
    }
    *param_5 = iVar9;
    iVar1 = iVar8;
    if (param_3 <= iVar8) {
      iVar1 = param_3;
    }
    iVar7 = iVar2;
    if (iVar2 <= param_2) {
      iVar7 = param_2;
    }
    iVar9 = 0;
    if (iVar2 <= param_3) {
      iVar9 = iVar1 - iVar7;
    }
    *param_6 = iVar9;
    *param_8 = iVar2 - iVar5;
    *param_9 = iVar5;
    *param_10 = iVar8 - param_2;
    *param_11 = param_2;
    return;
  }
  *param_7 = 0;
  iVar9 = iVar2 - iVar7;
  iVar5 = param_3;
  if (iVar9 <= param_3) {
    iVar5 = iVar9;
  }
  iVar3 = 0;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  iVar4 = 0;
  if (param_2 <= iVar9) {
    iVar4 = iVar5 - iVar3;
  }
  *param_4 = iVar4;
  iVar5 = iVar2;
  if (param_3 <= iVar2) {
    iVar5 = param_3;
  }
  iVar3 = param_2;
  if (param_2 <= iVar9) {
    iVar3 = iVar9;
  }
  iVar4 = 0;
  if (param_2 <= iVar2 && iVar9 <= param_3) {
    iVar4 = iVar5 - iVar3;
  }
  *param_5 = iVar4;
  iVar5 = iVar2 + iVar7;
  if (param_3 <= iVar2 + iVar7) {
    iVar5 = param_3;
  }
  iVar3 = param_2;
  if (param_2 <= iVar2) {
    iVar3 = iVar2;
  }
  iVar4 = 0;
  if (iVar2 <= param_3) {
    iVar4 = iVar5 - iVar3;
  }
  *param_6 = iVar4;
  iVar8 = iVar8 - param_2;
  if (param_2 <= iVar2) {
    iVar8 = param_2;
  }
  *param_8 = iVar2 - iVar8;
  param_2 = param_2 - iVar9;
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if (iVar7 < param_2) {
    iVar2 = iVar1 - param_2;
  }
  *param_9 = iVar2;
  iVar7 = 0;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  *param_10 = iVar1 - iVar7;
  *param_11 = iVar7;
  return;
}




int FUN_1006202e4(long *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  iVar1 = (int)param_1[3];
  if (iVar1 < 0) {
    iVar5 = 0;
  }
  else {
    iVar3 = *(int *)((long)param_1 + 0x1c) - iVar1;
    if (iVar3 == 0 || *(int *)((long)param_1 + 0x1c) < iVar1) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar3;
      if (param_2 != 0) {
        lVar6 = *param_1;
        uVar2 = *(undefined4 *)(lVar6 + 4);
        iVar5 = param_3;
        if (iVar3 <= param_3) {
          iVar5 = iVar3;
        }
        FUN_1006200a0(param_1,iVar1,iVar5 + iVar1,&local_64,&uStack_6c,&local_70,&local_68,&local_74
                      ,&local_78,&local_7c,&local_80);
        if (param_1[6] == 0) {
          lVar4 = 0x10186ed14;
        }
        else {
          lVar4 = 0x10186dd14;
          if (param_1[5] == 0) {
            lVar4 = 0x10186ed14;
          }
        }
        if (0 < *(int *)(lVar6 + 4)) {
          lVar7 = 0;
          do {
            FUN_10061fe94(param_2,lVar4 + (long)local_7c * 4,lVar4 + (long)local_80 * 4,
                          *(long *)(param_1[2] + lVar7 * 8) + (long)local_74 * 4,
                          *(long *)(param_1[1] + lVar7 * 8) + (long)local_78 * 4,uVar2,local_64,
                          uStack_6c,CONCAT44(local_68,local_70));
            lVar7 = lVar7 + 1;
            param_2 = param_2 + 2;
          } while (lVar7 < *(int *)(lVar6 + 4));
        }
      }
    }
  }
  return iVar5;
}




undefined8 FUN_100620470(long param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18) + param_2)) {
    return 0xffffff7d;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  return 0;
}




undefined8 FUN_1006204a8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(lVar5 + 0x10);
  lVar2 = FUN_10061e1a8(param_2,1);
  if (lVar2 == 0) {
    iVar4 = 0;
    for (; 1 < iVar1; iVar1 = iVar1 >> 1) {
      iVar4 = iVar4 + 1;
    }
    iVar1 = FUN_10061e1a8(param_2,iVar4);
    if (iVar1 == -1) {
      uVar3 = 0xffffffffffffff78;
    }
    else {
      uVar3 = *(undefined8 *)
               (lVar5 + (ulong)*(byte *)(*(long *)(lVar5 + 0x28) + (long)iVar1 * 2) * 8);
    }
  }
  else {
    uVar3 = 0xffffffffffffff79;
  }
  return uVar3;
}




undefined8 FUN_100620534(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *param_1;
  lVar9 = *(long *)(lVar10 + 0x30);
  lVar4 = FUN_10061e1a8(param_2,1);
  if (lVar4 == 0) {
    iVar2 = 0;
    uVar1 = *(int *)(lVar9 + 0x10) - 1;
    uVar6 = (ulong)uVar1;
    if (*(int *)(lVar9 + 0x10) != 0 && uVar1 != 0) {
      do {
        iVar2 = iVar2 + 1;
        uVar6 = uVar6 >> 1;
      } while ((int)uVar6 != 0);
    }
    iVar2 = FUN_10061e1a8(param_2,iVar2);
    if (iVar2 == -1) {
      uVar5 = 0xffffff78;
    }
    else if (iVar2 < *(int *)(lVar9 + 0x10)) {
      lVar4 = param_1[6];
      param_1[5] = lVar4;
      uVar6 = (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + (long)iVar2 * 2);
      param_1[6] = uVar6;
      if (0 < *(int *)(lVar10 + 4)) {
        lVar11 = 0;
        while( true ) {
          uVar6 = *(ulong *)(lVar9 + lVar4 * 8) & 0xfffffffffffffffc;
          _memcpy(*(void **)(param_1[2] + lVar11 * 8),
                  (void *)(*(long *)(param_1[1] + lVar11 * 8) + uVar6),uVar6);
          lVar11 = lVar11 + 1;
          if (*(int *)(lVar10 + 4) <= lVar11) break;
          lVar4 = param_1[5];
        }
        uVar6 = param_1[6];
      }
      if (uVar6 != 0) {
        FUN_10061e1a8(param_2,1);
        iVar3 = FUN_10061e1a8(param_2,1);
        if (iVar3 == -1) {
          return 0xffffff78;
        }
      }
      if (param_3 != 0) {
        FUN_1006220e4(param_1,param_2,
                      *(long *)(lVar9 + 0x30) +
                      (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + (long)iVar2 * 2 + 1) * 0x28);
      }
      iVar2 = 0;
      lVar4 = param_1[3];
      *(undefined4 *)(param_1 + 3) = 0;
      if ((int)lVar4 != -1) {
        uVar7 = *(ulong *)(lVar9 + param_1[5] * 8);
        uVar6 = uVar7 + 3;
        if (-1 < (long)uVar7) {
          uVar6 = uVar7;
        }
        uVar8 = *(ulong *)(lVar9 + param_1[6] * 8);
        uVar7 = uVar8 + 3;
        if (-1 < (long)uVar8) {
          uVar7 = uVar8;
        }
        iVar2 = (int)(uVar7 >> 2) + (int)(uVar6 >> 2);
      }
      *(int *)((long)param_1 + 0x1c) = iVar2;
      if (param_1[8] == -1) {
        lVar4 = 0;
        param_1[7] = -1;
        param_1[9] = -1;
        param_1[8] = 0;
      }
      else {
        param_1[8] = param_1[8] + 1;
        if (param_1[9] == -1) {
          lVar4 = 0;
        }
        else {
          lVar10 = *(long *)(lVar9 + param_1[5] * 8);
          lVar11 = *(long *)(lVar9 + param_1[6] * 8);
          lVar4 = lVar10 + 3;
          if (-1 < lVar10) {
            lVar4 = lVar10;
          }
          lVar10 = lVar11 + 3;
          if (-1 < lVar11) {
            lVar10 = lVar11;
          }
          lVar4 = param_1[9] + (lVar4 >> 2) + (lVar10 >> 2);
        }
      }
      param_1[9] = lVar4;
      if (param_1[7] == -1) {
        lVar4 = 0;
      }
      else {
        lVar10 = *(long *)(lVar9 + param_1[5] * 8);
        lVar9 = *(long *)(lVar9 + param_1[6] * 8);
        lVar4 = lVar10 + 3;
        if (-1 < lVar10) {
          lVar4 = lVar10;
        }
        lVar10 = lVar9 + 3;
        if (-1 < lVar9) {
          lVar10 = lVar9;
        }
        lVar4 = param_1[7] + (lVar4 >> 2) + (lVar10 >> 2);
      }
      uVar5 = 0;
      param_1[7] = lVar4;
    }
    else {
      uVar5 = 0xffffff78;
    }
  }
  else {
    uVar5 = 0xffffff79;
  }
  return uVar5;
}




long * FUN_1006207a4(long param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ushort uVar19;
  ulong uVar20;
  undefined4 uVar21;
  char *pcVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  lVar24 = *(long *)(param_1 + 0x30);
  plVar12 = (long *)FUN_100623bcc(1,0x40);
  uVar9 = FUN_10061e1a8(param_2,5);
  *(undefined4 *)(plVar12 + 6) = uVar9;
  lVar13 = FUN_100623b78();
  plVar12[1] = lVar13;
  iVar11 = -1;
  if (0 < (int)plVar12[6]) {
    lVar13 = 0;
    iVar10 = iVar11;
    do {
      uVar5 = FUN_10061e1a8(param_2,4);
      *(undefined1 *)(plVar12[1] + lVar13) = uVar5;
      iVar11 = (int)*(char *)(plVar12[1] + lVar13);
      if (*(char *)(plVar12[1] + lVar13) <= iVar10) {
        iVar11 = iVar10;
      }
      lVar13 = lVar13 + 1;
      iVar10 = iVar11;
    } while (lVar13 < (int)plVar12[6]);
  }
  lVar13 = FUN_100623b78((iVar11 + 1) * 0xb);
  *plVar12 = lVar13;
  if (-1 < iVar11) {
    lVar13 = 0;
    lVar25 = 3;
    do {
      cVar6 = FUN_10061e1a8(param_2,3);
      *(char *)(*plVar12 + lVar13 * 0xb) = cVar6 + '\x01';
      uVar5 = FUN_10061e1a8(param_2,2);
      *(undefined1 *)(*plVar12 + lVar13 * 0xb + 1) = uVar5;
      iVar10 = FUN_10061e19c(param_2);
      if (iVar10 < 0) {
        return (long *)0x0;
      }
      lVar16 = *plVar12;
      if (*(char *)(lVar16 + lVar13 * 0xb + 1) == '\0') {
        bVar7 = 0;
        *(undefined1 *)(lVar16 + lVar13 * 0xb + 2) = 0;
      }
      else {
        bVar7 = FUN_10061e1a8(param_2,8);
        lVar16 = *plVar12;
        *(byte *)(lVar16 + lVar13 * 0xb + 2) = bVar7;
      }
      if (*(int *)(lVar24 + 0x20) <= (int)(uint)bVar7) {
        return (long *)0x0;
      }
      if (*(char *)(lVar16 + lVar13 * 0xb + 1) != '\x1f') {
        lVar16 = 0;
        lVar26 = lVar25;
        do {
          cVar6 = FUN_10061e1a8(param_2,8);
          *(char *)(*plVar12 + lVar26) = cVar6 + -1;
          uVar18 = (uint)*(byte *)(*plVar12 + lVar26);
          if (uVar18 != 0xff && *(int *)(lVar24 + 0x20) <= (int)uVar18) {
            return (long *)0x0;
          }
          lVar16 = lVar16 + 1;
          lVar26 = lVar26 + 1;
        } while (lVar16 < 1 << (ulong)((int)*(char *)(*plVar12 + lVar13 * 0xb + 1) & 0x1f));
      }
      lVar13 = lVar13 + 1;
      lVar25 = lVar25 + 0xb;
    } while (lVar13 < iVar11 + 1);
  }
  iVar11 = FUN_10061e1a8(param_2,2);
  *(int *)(plVar12 + 7) = iVar11 + 1;
  uVar14 = FUN_10061e1a8(param_2,4);
  iVar11 = (int)plVar12[6];
  uVar17 = (ulong)iVar11;
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  else {
    lVar13 = *plVar12;
    if (iVar11 == 0) {
      uVar20 = 0;
      iVar11 = 0;
    }
    else {
      uVar20 = uVar17 & 0xfffffffffffffffe;
      if (uVar20 == 0) {
        uVar20 = 0;
        iVar10 = 0;
        iVar11 = 0;
      }
      else {
        iVar10 = 0;
        iVar11 = 0;
        pcVar22 = (char *)(plVar12[1] + 1);
        uVar23 = uVar20;
        do {
          iVar10 = *(char *)(lVar13 + (long)pcVar22[-1] * 0xb) + iVar10;
          iVar11 = *(char *)(lVar13 + (long)*pcVar22 * 0xb) + iVar11;
          uVar23 = uVar23 - 2;
          pcVar22 = pcVar22 + 2;
        } while (uVar23 != 0);
      }
      iVar11 = iVar11 + iVar10;
      if (uVar17 == uVar20) goto LAB_100620a40;
    }
    do {
      iVar11 = *(char *)(lVar13 + (long)*(char *)(plVar12[1] + uVar20) * 0xb) + iVar11;
      uVar20 = uVar20 + 1;
    } while ((long)uVar20 < (long)uVar17);
  }
LAB_100620a40:
  lVar13 = FUN_100623b78((iVar11 + 2) * 2);
  plVar12[2] = lVar13;
  lVar13 = FUN_100623b78(iVar11 + 2);
  plVar12[3] = lVar13;
  lVar13 = FUN_100623b78(iVar11);
  plVar12[5] = lVar13;
  lVar13 = FUN_100623b78(iVar11);
  plVar12[4] = lVar13;
  iVar11 = (int)plVar12[6];
  if (iVar11 < 1) {
    lVar13 = 0;
  }
  else {
    lVar25 = 0;
    lVar24 = 0;
    lVar13 = 0;
    do {
      lVar13 = (long)*(char *)(*plVar12 + (long)*(char *)(plVar12[1] + lVar25) * 0xb) +
               (long)(int)lVar13;
      if ((int)lVar24 < (int)lVar13) {
        lVar24 = (long)(int)lVar24;
        do {
          uVar8 = FUN_10061e1a8(param_2,uVar14);
          *(ushort *)(plVar12[2] + lVar24 * 2 + 4) = uVar8;
          if (1 << (ulong)((uint)uVar14 & 0x1f) <= (int)(uint)uVar8) {
            return (long *)0x0;
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 < lVar13);
        iVar11 = (int)plVar12[6];
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < iVar11);
  }
  iVar11 = FUN_10061e19c(param_2);
  if (iVar11 == 0) {
    puVar15 = (undefined2 *)plVar12[2];
    *puVar15 = 0;
    puVar15[1] = (short)(1 << (ulong)((uint)uVar14 & 0x1f));
    uVar18 = (int)lVar13 + 2;
    *(uint *)((long)plVar12 + 0x34) = uVar18;
    if (-2 < (int)lVar13) {
      lVar13 = 0;
      do {
        *(char *)(plVar12[3] + lVar13) = (char)lVar13;
        lVar13 = lVar13 + 1;
        uVar18 = *(uint *)((long)plVar12 + 0x34);
      } while (lVar13 < (int)uVar18);
      puVar15 = (undefined2 *)plVar12[2];
    }
    FUN_100620c34(plVar12[3],puVar15,uVar18 & 0xffff);
    if (2 < *(int *)((long)plVar12 + 0x34)) {
      lVar13 = 0;
      do {
        lVar24 = 0;
        uVar9 = 0;
        lVar25 = plVar12[2];
        uVar2 = *(ushort *)(lVar25 + (lVar13 + 2) * 2);
        uVar8 = *(ushort *)(lVar25 + 2);
        uVar21 = 1;
        uVar19 = 0;
        do {
          uVar3 = *(ushort *)(lVar25 + lVar24 * 2);
          uVar4 = (int)lVar24;
          uVar1 = uVar3;
          if (uVar2 <= uVar3 || uVar3 <= uVar19) {
            uVar4 = uVar9;
            uVar1 = uVar19;
          }
          uVar9 = uVar4;
          uVar4 = (int)lVar24;
          if (uVar3 <= uVar2 || uVar8 <= uVar3) {
            uVar4 = uVar21;
            uVar3 = uVar8;
          }
          uVar8 = uVar3;
          uVar21 = uVar4;
          lVar24 = lVar24 + 1;
          uVar19 = uVar1;
        } while (lVar24 < lVar13 + 2);
        *(char *)(plVar12[5] + lVar13) = (char)uVar9;
        *(char *)(plVar12[4] + lVar13) = (char)uVar21;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (long)*(int *)((long)plVar12 + 0x34) + -2);
    }
  }
  else {
    plVar12 = (long *)0x0;
  }
  return plVar12;
}




void FUN_100620c34(undefined1 *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined1 auStack_70 [8];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  puVar23 = auStack_70 + -(param_3 + 0xfU & 0xfffffffffffffff0);
  uVar19 = (uint)param_3;
  puVar20 = param_1;
  if (1 < uVar19) {
    uVar6 = ~uVar19;
    uVar22 = 1;
    puVar8 = puVar23;
    do {
      puVar23 = puVar20;
      puVar20 = puVar8;
      uVar21 = (uint)uVar22;
      if (uVar21 < uVar19) {
        uVar15 = 0;
        uVar13 = 0;
        uVar3 = uVar21 << 1 ^ 0xffffffff;
        do {
          uVar14 = (uint)uVar15;
          uVar1 = uVar14 + uVar21 * 2;
          if (uVar19 <= uVar1) {
            uVar1 = uVar19;
          }
          uVar17 = (uint)uVar22;
          if ((uVar14 < uVar17) && ((int)uVar17 < (int)uVar1)) {
            do {
              uVar22 = (ulong)(int)uVar22;
              cVar5 = puVar23[uVar15];
              uVar11 = uVar13;
              while( true ) {
                if (*(ushort *)(param_2 + (long)cVar5 * 2) <
                    *(ushort *)(param_2 + (long)(char)puVar23[uVar22] * 2)) break;
                uVar13 = (ulong)((int)uVar11 + 1);
                puVar20[uVar11 & 0xffff] = puVar23[uVar22];
                uVar22 = uVar22 + 1;
                uVar11 = uVar13;
                if ((int)uVar1 <= (int)uVar22) goto LAB_100620d68;
              }
              uVar15 = uVar15 + 1;
              uVar13 = (ulong)((int)uVar11 + 1);
              puVar20[uVar11 & 0xffff] = cVar5;
            } while (((long)uVar15 < (long)(int)uVar17) && ((int)uVar22 < (int)uVar1));
          }
LAB_100620d68:
          iVar16 = (int)uVar15;
          if (iVar16 < (int)uVar17) {
            lVar7 = (long)iVar16;
            uVar11 = (ulong)((uVar17 - 1) - iVar16);
            uVar15 = uVar11 + 1;
            lVar18 = uVar15 + lVar7;
            uVar15 = uVar15 & 0x1fffffffe;
            iVar12 = (int)uVar13;
            if (uVar15 != 0) {
              uVar10 = 0;
              lVar7 = uVar15 + lVar7;
              uVar13 = (ulong)(uint)(iVar12 + (int)uVar15);
              do {
                uVar2 = iVar12 + (int)uVar10;
                uVar4 = (puVar23 + uVar10 + (long)iVar16)[1];
                puVar20[(ulong)uVar2 & 0xffff] = puVar23[uVar10 + (long)iVar16];
                puVar20[(ulong)(uVar2 + 1) & 0xffff] = uVar4;
                uVar10 = uVar10 + 2;
              } while ((uVar11 + 1 & 0xfffffffffffffffe) != uVar10);
            }
            if (lVar18 != lVar7) {
              iVar9 = uVar17 - (int)lVar7;
              puVar8 = puVar23 + lVar7;
              do {
                uVar15 = uVar13 & 0xffff;
                uVar13 = (ulong)((int)uVar13 + 1);
                puVar20[uVar15] = *puVar8;
                iVar9 = iVar9 + -1;
                puVar8 = puVar8 + 1;
              } while (iVar9 != 0);
            }
            uVar13 = (ulong)((iVar12 + uVar17) - iVar16);
          }
          iVar16 = (int)uVar22;
          if (iVar16 < (int)uVar1) {
            lVar18 = (long)iVar16;
            uVar17 = ~(uVar21 * 2) - uVar14;
            uVar1 = uVar17;
            if (uVar17 <= uVar6) {
              uVar1 = uVar6;
            }
            if (uVar17 <= uVar6) {
              uVar17 = uVar6;
            }
            uVar22 = (ulong)((-2 - iVar16) - uVar17) + 1;
            lVar7 = uVar22 + lVar18;
            uVar22 = uVar22 & 0x1fffffffe;
            iVar12 = (int)uVar13;
            if (uVar22 != 0) {
              uVar15 = 0;
              lVar18 = uVar22 + lVar18;
              uVar13 = (ulong)(uint)(iVar12 + (int)uVar22);
              uVar17 = uVar3 - uVar14;
              if (uVar17 <= uVar6) {
                uVar17 = uVar6;
              }
              do {
                uVar2 = iVar12 + (int)uVar15;
                uVar4 = (puVar23 + uVar15 + (long)iVar16)[1];
                puVar20[(ulong)uVar2 & 0xffff] = puVar23[uVar15 + (long)iVar16];
                puVar20[(ulong)(uVar2 + 1) & 0xffff] = uVar4;
                uVar15 = uVar15 + 2;
              } while (((ulong)((-2 - iVar16) - uVar17) + 1 & 0xfffffffffffffffe) != uVar15);
            }
            if (lVar7 != lVar18) {
              uVar14 = uVar3 - uVar14;
              if (uVar14 <= uVar6) {
                uVar14 = uVar6;
              }
              iVar9 = ~uVar14 - (int)lVar18;
              puVar8 = puVar23 + lVar18;
              do {
                uVar22 = uVar13 & 0xffff;
                uVar13 = (ulong)((int)uVar13 + 1);
                puVar20[uVar22] = *puVar8;
                iVar9 = iVar9 + -1;
                puVar8 = puVar8 + 1;
              } while (iVar9 != 0);
            }
            uVar13 = (ulong)((iVar12 + (uVar1 ^ 0xffff)) - iVar16);
          }
          uVar1 = (uint)uVar13 & 0xffff;
          uVar15 = (ulong)uVar1;
          uVar1 = uVar1 + uVar21;
          uVar22 = (ulong)uVar1;
        } while (uVar1 < uVar19);
      }
      else {
        uVar13 = 0;
      }
      if (((uint)uVar13 & 0xffff) < uVar19) {
        _memcpy(puVar20 + (uVar13 & 0xffff),puVar23 + (uVar13 & 0xffff),
                ((ulong)((uVar19 - 1) - (uint)uVar13) & 0xffff) + 1);
      }
      uVar21 = (uVar21 & 0x7fff) << 1;
      uVar22 = (ulong)uVar21;
      puVar8 = puVar23;
    } while (uVar21 < uVar19);
  }
  if (puVar23 == param_1 && uVar19 != 0) {
    _memcpy(param_1,puVar20,((ulong)(uVar19 - 1) & 0xffff) + 1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100620fa0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  char acStack_70 [8];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_10061e1a8(param_2,5);
  lVar13 = -((long)(int)uVar2 + 0xfU & 0xfffffffffffffff0);
  pcVar11 = acStack_70 + lVar13;
  iVar14 = -1;
  pcVar8 = pcVar11;
  iVar4 = iVar14;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    do {
      cVar1 = FUN_10061e1a8(param_2,4);
      *pcVar8 = cVar1;
      iVar4 = (int)cVar1;
      if (cVar1 <= iVar14) {
        iVar4 = iVar14;
      }
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar8 + 1;
      iVar14 = iVar4;
    } while (uVar3 != 0);
  }
  iVar14 = iVar4 + 1;
  uVar6 = (long)iVar14 + 0xfU & 0xfffffffffffffff0;
  if (-1 < iVar4) {
    lVar15 = 0;
    do {
      cVar1 = FUN_10061e1a8(param_2,3);
      pcVar11[lVar15 - uVar6] = cVar1 + '\x01';
      uVar3 = FUN_10061e1a8(param_2,2);
      if ((uVar3 == 0) || (FUN_10061e14c(param_2,8), uVar3 != 0x1f)) {
        iVar4 = 0;
        do {
          FUN_10061e14c(param_2,8);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 1 << (ulong)(uVar3 & 0x1f));
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar14);
  }
  FUN_10061e14c(param_2,2);
  uVar5 = FUN_10061e1a8(param_2,4);
  if ((int)uVar2 < 1) {
    iVar4 = 0;
  }
  else {
    lVar15 = (ulong)(uVar2 - 1) + 1;
    lVar7 = lVar15 - ((ulong)~(uVar2 - 1) & 1);
    if (lVar7 == 0) {
      lVar7 = 0;
      iVar9 = 0;
      iVar4 = 0;
    }
    else {
      iVar9 = 0;
      iVar4 = 0;
      lVar10 = ((ulong)(uVar2 - 1) + 1) - ((ulong)uVar2 & 1);
      pcVar8 = acStack_70 + lVar13 + 1;
      do {
        iVar9 = pcVar11[(long)pcVar8[-1] - uVar6] + iVar9;
        iVar4 = pcVar11[(long)*pcVar8 - uVar6] + iVar4;
        lVar10 = lVar10 + -2;
        pcVar8 = pcVar8 + 2;
      } while (lVar10 != 0);
    }
    iVar4 = iVar4 + iVar9;
    if (lVar15 != lVar7) {
      iVar9 = uVar2 - (int)lVar7;
      pcVar8 = pcVar11 + lVar7;
      do {
        iVar4 = pcVar11[(long)*pcVar8 - uVar6] + iVar4;
        iVar9 = iVar9 + -1;
        pcVar8 = pcVar8 + 1;
      } while (iVar9 != 0);
    }
  }
  uVar3 = iVar4 + 3 +
          (iVar4 + 3 +
           ((int)((((ulong)((iVar4 + 2) * 2 +
                           (((int)(((ulong)uVar2 << 0x20) + 0x4000000000 >> 0x20) + 3U | 3) +
                            iVar14 * 0xb & 0xfffffffc)) << 0x20) + 0x300000000 & 0xfffffffc00000000)
                  + ((long)(iVar4 + 2) << 0x20) >> 0x20) + 3U & 0xfffffffc) & 0xfffffffc) &
          0xfffffffc;
  if (0 < (int)uVar2) {
    lVar13 = 0;
    iVar14 = 0;
    iVar4 = 0;
    do {
      iVar9 = pcVar11[(long)pcVar11[lVar13] - uVar6] + iVar4;
      if (iVar14 < iVar9) {
        iVar4 = (iVar4 + pcVar11[(long)pcVar11[lVar13] - uVar6]) - iVar14;
        do {
          FUN_10061e14c(param_2,uVar5);
          iVar4 = iVar4 + -1;
          iVar14 = iVar9;
        } while (iVar4 != 0);
      }
      iVar12 = (int)lVar13;
      lVar13 = lVar13 + 1;
      iVar4 = iVar9;
    } while (iVar12 != uVar2 - 1);
  }
  iVar4 = FUN_10061e19c(param_2);
  if (iVar4 != 0) {
    uVar3 = 0xffffffff;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3);
  }
  return;
}




undefined4 FUN_10062129c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}




undefined4 * FUN_1006212a4(long *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  int local_74;
  
  lVar16 = *(long *)(*(long *)(*param_1 + 0x30) + 0x50);
  lVar22 = param_3[7];
  lVar15 = FUN_10061e1a8(param_2,1);
  if (lVar15 == 1) {
    iVar4 = *(int *)(&DAT_1011605ac + (long)(int)lVar22 * 4);
    uVar13 = iVar4 - 1;
    uVar21 = (ulong)uVar13;
    if (uVar13 == 0) {
      uVar12 = FUN_10061e1a8(param_2,0);
      iVar14 = 0;
      *param_4 = uVar12;
    }
    else {
      iVar14 = 0;
      uVar17 = uVar21;
      do {
        iVar14 = iVar14 + 1;
        uVar17 = uVar17 >> 1;
      } while ((int)uVar17 != 0);
      uVar12 = FUN_10061e1a8(param_2,iVar14);
      iVar14 = 0;
      *param_4 = uVar12;
      do {
        iVar14 = iVar14 + 1;
        uVar21 = uVar21 >> 1;
      } while ((int)uVar21 != 0);
    }
    uVar12 = FUN_10061e1a8(param_2,iVar14);
    param_4[1] = uVar12;
    if (0 < (int)param_3[6]) {
      lVar22 = 0;
      local_74 = 2;
      do {
        lVar15 = (long)*(char *)(param_3[1] + lVar22);
        pcVar18 = (char *)(*param_3 + lVar15 * 0xb);
        cVar5 = *pcVar18;
        cVar6 = pcVar18[1];
        if ((int)cVar6 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = FUN_10061f5ec(lVar16 + (ulong)*(byte *)(*param_3 + lVar15 * 0xb + 2) * 0x40,
                                 param_2);
          if (uVar13 == 0xffffffff) {
            return (undefined4 *)0x0;
          }
        }
        if ('\0' < cVar5) {
          lVar23 = 0;
          do {
            uVar21 = (ulong)*(byte *)(*param_3 + lVar15 * 0xb +
                                      (long)(int)(uVar13 & (1 << (ulong)((int)cVar6 & 0x1f)) - 1U) +
                                     3);
            if (uVar21 == 0xff) {
              param_4[local_74 + lVar23] = 0;
            }
            else {
              iVar14 = FUN_10061f5ec(lVar16 + uVar21 * 0x40,param_2);
              param_4[local_74 + lVar23] = iVar14;
              if (iVar14 == -1) {
                return (undefined4 *)0x0;
              }
            }
            uVar13 = (int)uVar13 >> ((int)cVar6 & 0x1fU);
            lVar23 = lVar23 + 1;
          } while (lVar23 < (int)cVar5);
        }
        local_74 = cVar5 + local_74;
        lVar22 = lVar22 + 1;
      } while (lVar22 < (int)param_3[6]);
    }
    if (2 < *(int *)((long)param_3 + 0x34)) {
      lVar22 = 0;
      lVar15 = param_3[4];
      lVar16 = param_3[5];
      lVar23 = param_3[2];
      do {
        lVar19 = (long)*(char *)(lVar16 + lVar22);
        lVar20 = (long)*(char *)(lVar15 + lVar22);
        iVar8 = (param_4[lVar20] & 0x7fff) - (param_4[lVar19] & 0x7fff);
        uVar13 = (uint)*(ushort *)(lVar23 + lVar19 * 2);
        iVar9 = *(ushort *)(lVar23 + lVar20 * 2) - uVar13;
        iVar14 = -iVar8;
        if (-1 < iVar8) {
          iVar14 = iVar8;
        }
        iVar7 = 0;
        if (iVar9 != 0) {
          iVar7 = (int)(iVar14 * (*(ushort *)(lVar23 + 4 + lVar22 * 2) - uVar13)) / iVar9;
        }
        iVar14 = -iVar7;
        if (-1 < iVar8) {
          iVar14 = iVar7;
        }
        uVar13 = iVar14 + (param_4[lVar19] & 0x7fff);
        uVar3 = param_4[lVar22 + 2];
        if (uVar3 == 0) {
          param_4[lVar22 + 2] = uVar13 | 0x8000;
        }
        else {
          uVar10 = iVar4 - uVar13;
          uVar1 = uVar10;
          if ((int)uVar13 <= (int)uVar10) {
            uVar1 = uVar13;
          }
          uVar2 = (int)uVar3 >> 1;
          if ((uVar3 & 1) != 0) {
            uVar2 = -((int)(uVar3 + 1) >> 1);
          }
          uVar11 = uVar3 - uVar13;
          if ((int)uVar10 <= (int)uVar13) {
            uVar11 = ~(uVar3 - uVar10);
          }
          if ((int)(uVar1 * 2) <= (int)uVar3) {
            uVar2 = uVar11;
          }
          param_4[lVar22 + 2] = uVar2 + uVar13;
          cVar5 = *(char *)(lVar16 + lVar22);
          param_4[cVar5] = param_4[cVar5] & 0x7fff;
          cVar5 = *(char *)(lVar15 + lVar22);
          param_4[cVar5] = param_4[cVar5] & 0x7fff;
        }
        lVar19 = lVar22 + 3;
        lVar22 = lVar22 + 1;
      } while (lVar19 < *(int *)((long)param_3 + 0x34));
    }
  }
  else {
    param_4 = (undefined4 *)0x0;
  }
  return param_4;
}




undefined8 FUN_1006215a4(long *param_1,long param_2,int *param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  float *pfVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  iVar22 = *(int *)(*(long *)(*param_1 + 0x30) + param_1[6] * 8);
  if (iVar22 < 0) {
    iVar22 = iVar22 + 1;
  }
  uVar1 = iVar22 >> 1;
  if (param_3 == (int *)0x0) {
    _bzero(param_4,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
    uVar12 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x34);
    iVar5 = *(int *)(param_2 + 0x38);
    iVar22 = iVar5 * *param_3;
    if (iVar4 < 2) {
      iVar17 = 0;
    }
    else {
      uVar18 = 0;
      lVar23 = *(long *)(param_2 + 0x18);
      lVar25 = 1;
      uVar24 = 0;
      do {
        lVar15 = (long)*(char *)(lVar23 + lVar25);
        uVar6 = param_3[lVar15];
        uVar19 = uVar24;
        iVar17 = iVar22;
        if ((uVar6 & 0x7fff) == uVar6) {
          iVar17 = iVar5 * uVar6;
          uVar7 = *(ushort *)(*(long *)(param_2 + 0x10) + lVar15 * 2);
          uVar19 = (ulong)uVar7;
          iVar10 = iVar17 - iVar22;
          iVar13 = (int)uVar24;
          iVar9 = (uint)uVar7 - iVar13;
          iVar2 = -iVar10;
          if (-1 < iVar10) {
            iVar2 = iVar10;
          }
          iVar8 = 0;
          if (iVar9 != 0) {
            iVar8 = iVar10 / iVar9;
          }
          iVar26 = iVar9 * iVar8;
          iVar3 = -iVar26;
          if (-1 < iVar26) {
            iVar3 = iVar26;
          }
          uVar16 = (uint)uVar7;
          uVar6 = uVar16;
          if (uVar1 == uVar16 || (int)uVar1 < (int)(uint)uVar7) {
            uVar6 = uVar1;
          }
          if (iVar13 < (int)uVar6) {
            *(float *)((long)param_4 + uVar24 * 4) =
                 *(float *)(&DAT_1011601b0 + (long)iVar22 * 4) *
                 *(float *)((long)param_4 + uVar24 * 4);
          }
          uVar18 = uVar19;
          if (iVar13 + 1 < (int)uVar6) {
            iVar26 = 0;
            uVar6 = ~uVar1;
            if ((int)~uVar1 <= (int)~uVar16) {
              uVar6 = ~uVar16;
            }
            iVar14 = (-2 - iVar13) - uVar6;
            pfVar21 = (float *)((long)param_4 + (long)(iVar13 + 1) * 4);
            do {
              iVar26 = iVar26 + (iVar2 - iVar3);
              uVar6 = 0;
              if (iVar9 <= iVar26) {
                uVar6 = iVar10 >> 0x1f | 1;
              }
              iVar13 = 0;
              if (iVar9 <= iVar26) {
                iVar13 = iVar9;
              }
              iVar22 = iVar22 + iVar8 + uVar6;
              iVar26 = iVar26 - iVar13;
              *pfVar21 = *(float *)(&DAT_1011601b0 + (long)iVar22 * 4) * *pfVar21;
              iVar14 = iVar14 + -1;
              pfVar21 = pfVar21 + 1;
            } while (iVar14 != 0);
          }
        }
        iVar22 = iVar17;
        iVar17 = (int)uVar18;
        lVar25 = lVar25 + 1;
        uVar24 = uVar19;
      } while (lVar25 < iVar4);
    }
    if (iVar17 < (int)uVar1) {
      fVar27 = *(float *)(&DAT_1011601b0 + (long)iVar22 * 4);
      lVar23 = (long)iVar17;
      uVar18 = (ulong)((uVar1 - 1) - iVar17);
      uVar24 = uVar18 + 1;
      lVar25 = uVar24 + lVar23;
      uVar24 = uVar24 & 0x1fffffff8;
      if (uVar24 != 0) {
        lVar23 = uVar24 + lVar23;
        uVar24 = uVar18 + 1 & 0xfffffffffffffff8;
        puVar20 = (undefined8 *)((long)param_4 + (long)iVar17 * 4 + 0x10);
        do {
          auVar28._0_8_ =
               CONCAT44(fVar27 * *(float *)((long)puVar20 + -0xc),fVar27 * *(float *)(puVar20 + -2))
          ;
          auVar28._8_4_ = fVar27 * *(float *)(puVar20 + -1);
          auVar28._12_4_ = fVar27 * *(float *)((long)puVar20 + -4);
          fVar30 = fVar27 * (float)*puVar20;
          fVar31 = fVar27 * (float)((ulong)*puVar20 >> 0x20);
          fVar32 = fVar27 * (float)puVar20[1];
          fVar33 = fVar27 * (float)((ulong)puVar20[1] >> 0x20);
          puVar20[-2] = auVar28._0_8_;
          auVar29 = NEON_ext(auVar28,auVar28,8,1);
          puVar20[-1] = auVar29._0_8_;
          *puVar20 = CONCAT44(fVar31,fVar30);
          auVar29._4_4_ = fVar31;
          auVar29._0_4_ = fVar30;
          auVar29._8_4_ = fVar32;
          auVar29._12_4_ = fVar33;
          auVar11._4_4_ = fVar31;
          auVar11._0_4_ = fVar30;
          auVar11._8_4_ = fVar32;
          auVar11._12_4_ = fVar33;
          auVar29 = NEON_ext(auVar29,auVar11,8,1);
          puVar20[1] = auVar29._0_8_;
          uVar24 = uVar24 - 8;
          puVar20 = puVar20 + 4;
        } while (uVar24 != 0);
      }
      if (lVar25 == lVar23) {
        uVar12 = 1;
      }
      else {
        iVar22 = uVar1 - (int)lVar23;
        pfVar21 = (float *)((long)param_4 + lVar23 * 4);
        do {
          *pfVar21 = fVar27 * *pfVar21;
          iVar22 = iVar22 + -1;
          pfVar21 = pfVar21 + 1;
        } while (iVar22 != 0);
        uVar12 = 1;
      }
    }
    else {
      uVar12 = 1;
    }
  }
  return uVar12;
}




undefined4 FUN_1006217e0(long param_1,ulong param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    return *(undefined4 *)
            (*(long *)(param_1 + 0x30) +
            (-(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3));
  }
  return 0xffffffff;
}




undefined8 FUN_1006217fc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) {
    uVar4 = 0xffffff7f;
  }
  else {
    iVar3 = FUN_10061e1a8(param_2,8);
    *(int *)(lVar6 + 0x20) = iVar3 + 1;
    uVar4 = FUN_100623b18(0x10,(iVar3 + 1) * 0x40);
    *(undefined8 *)(lVar6 + 0x50) = uVar4;
    if (*(int *)(lVar6 + 0x20) < 1) {
LAB_1006218a4:
      iVar3 = FUN_10061e1a8(param_2,6);
      if (-1 < iVar3) {
        iVar3 = iVar3 + 1;
        do {
          lVar7 = FUN_10061e1a8(param_2,0x10);
          if (lVar7 != 0) goto LAB_100621b18;
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
      }
      iVar3 = FUN_10061e1a8(param_2,6);
      *(int *)(lVar6 + 0x18) = iVar3 + 1;
      uVar4 = FUN_100623b78((iVar3 + 1) * 8);
      *(undefined8 *)(lVar6 + 0x40) = uVar4;
      uVar4 = FUN_100623b78(*(undefined4 *)(lVar6 + 0x18));
      *(undefined8 *)(lVar6 + 0x38) = uVar4;
      if (0 < *(int *)(lVar6 + 0x18)) {
        lVar7 = 0;
        do {
          uVar1 = FUN_10061e1a8(param_2,0x10);
          *(undefined1 *)(*(long *)(lVar6 + 0x38) + lVar7) = uVar1;
          bVar2 = *(byte *)(*(long *)(lVar6 + 0x38) + lVar7);
          if (1 < bVar2) goto LAB_100621b18;
          if (bVar2 != 0) {
            uVar4 = FUN_1006207a4(param_1,param_2);
            *(undefined8 *)(*(long *)(lVar6 + 0x40) + lVar7 * 8) = uVar4;
          }
          if (*(long *)(*(long *)(lVar6 + 0x40) + lVar7 * 8) == 0) goto LAB_100621b18;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(lVar6 + 0x18));
      }
      iVar3 = FUN_10061e1a8(param_2,6);
      *(int *)(lVar6 + 0x1c) = iVar3 + 1;
      uVar4 = FUN_100623b78((iVar3 + 1) * 0x30);
      *(undefined8 *)(lVar6 + 0x48) = uVar4;
      if (*(int *)(lVar6 + 0x1c) < 1) {
LAB_1006219e4:
        iVar3 = FUN_10061e1a8(param_2,6);
        *(int *)(lVar6 + 0x14) = iVar3 + 1;
        uVar4 = FUN_100623b78((iVar3 + 1) * 0x28);
        *(undefined8 *)(lVar6 + 0x30) = uVar4;
        if (0 < *(int *)(lVar6 + 0x14)) {
          lVar8 = 0;
          lVar7 = 0;
          do {
            lVar5 = FUN_10061e1a8(param_2,0x10);
            if ((lVar5 != 0) ||
               (iVar3 = FUN_100621d48(*(long *)(lVar6 + 0x30) + lVar8,param_1,param_2), iVar3 != 0))
            goto LAB_100621b18;
            lVar7 = lVar7 + 1;
            lVar8 = lVar8 + 0x28;
          } while (lVar7 < *(int *)(lVar6 + 0x14));
        }
        iVar3 = FUN_10061e1a8(param_2,6);
        *(int *)(lVar6 + 0x10) = iVar3 + 1;
        uVar4 = FUN_100623b78((iVar3 + 1) * 2);
        *(undefined8 *)(lVar6 + 0x28) = uVar4;
        iVar3 = *(int *)(lVar6 + 0x10);
        lVar7 = FUN_10061e1a8(param_2,1);
        if (0 < iVar3) {
          lVar5 = 0;
          lVar8 = 0;
          do {
            *(char *)(*(long *)(lVar6 + 0x28) + lVar5) = (char)lVar7;
            lVar7 = FUN_10061e1a8(param_2,0x10);
            if ((lVar7 != 0) || (lVar7 = FUN_10061e1a8(param_2,0x10), lVar7 != 0))
            goto LAB_100621b18;
            bVar2 = FUN_10061e1a8(param_2,8);
            *(byte *)(*(long *)(lVar6 + 0x28) + lVar5 + 1) = bVar2;
            if (*(int *)(lVar6 + 0x14) <= (int)(uint)bVar2) goto LAB_100621b18;
            lVar8 = lVar8 + 1;
            iVar3 = *(int *)(lVar6 + 0x10);
            lVar7 = FUN_10061e1a8(param_2,1);
            lVar5 = lVar5 + 2;
          } while (lVar8 < iVar3);
        }
        if (lVar7 == 1) {
          return 0;
        }
      }
      else {
        iVar3 = FUN_100622f68(uVar4,param_1,param_2);
        if (iVar3 == 0) {
          lVar7 = 0;
          lVar8 = 0x30;
          do {
            lVar7 = lVar7 + 1;
            if (*(int *)(lVar6 + 0x1c) <= lVar7) goto LAB_1006219e4;
            iVar3 = FUN_100622f68(*(long *)(lVar6 + 0x48) + lVar8,param_1,param_2);
            lVar8 = lVar8 + 0x30;
          } while (iVar3 == 0);
        }
      }
    }
    else {
      iVar3 = FUN_10061e228(param_2,uVar4);
      if (iVar3 == 0) {
        lVar7 = 0;
        lVar8 = 0x40;
        do {
          lVar7 = lVar7 + 1;
          if (*(int *)(lVar6 + 0x20) <= lVar7) goto LAB_1006218a4;
          iVar3 = FUN_10061e228(param_2,*(long *)(lVar6 + 0x50) + lVar8);
          lVar8 = lVar8 + 0x40;
        } while (iVar3 == 0);
      }
    }
LAB_100621b18:
    uVar4 = 0xffffff7b;
  }
  return uVar4;
}




uint FUN_100621b30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = FUN_10061e1a8(param_2,8);
  iVar4 = (iVar1 + 1) * 0x40;
  if (-1 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_10061f0fc(param_2);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      iVar4 = iVar2 + (iVar4 + 0xfU & 0xfffffff0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1 + 1);
  }
  iVar1 = FUN_10061e1a8(param_2,6);
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    do {
      FUN_10061e14c(param_2,0x10);
      iVar1 = iVar1 + -1;
    } while (0 < iVar1);
  }
  iVar1 = FUN_10061e1a8(param_2,6);
  uVar5 = (iVar4 + 3U | 3) + (iVar1 + 1) * 9 & 0xfffffffc;
  if (-1 < iVar1) {
    iVar4 = 0;
    do {
      FUN_10061e1a8(param_2,0x10);
      iVar3 = FUN_100620fa0(param_1,param_2);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      uVar5 = (iVar3 + 3U & 0xfffffffc) + uVar5;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1 + 1);
  }
  iVar4 = FUN_10061e1a8(param_2,6);
  uVar5 = uVar5 + (iVar4 + 1) * 0x30;
  if (-1 < iVar4) {
    iVar1 = 0;
    do {
      iVar3 = FUN_100623168(param_1,param_2);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      iVar1 = iVar1 + 1;
      uVar5 = iVar3 + uVar5 + 3 & 0xfffffffc;
    } while (iVar1 < iVar4 + 1);
  }
  iVar4 = FUN_10061e1a8(param_2,6);
  uVar5 = uVar5 + (iVar4 + 1) * 0x28;
  if (-1 < iVar4) {
    iVar1 = 0;
    do {
      FUN_10061e14c(param_2,0x10);
      iVar3 = FUN_100621fac(param_1,param_2);
      iVar1 = iVar1 + 1;
      uVar5 = (uVar5 | 3) + iVar3 & 0xfffffffc;
    } while (iVar1 < iVar4 + 1);
  }
  iVar4 = FUN_10061e1a8(param_2,6);
  if (-1 < iVar4) {
    iVar1 = 0;
    do {
      FUN_10061e14c(param_2,1);
      FUN_10061e14c(param_2,0x10);
      FUN_10061e14c(param_2,0x10);
      FUN_10061e14c(param_2,8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar4 + 1);
  }
  return uVar5 + (iVar4 + 1) * 2 + 3 & 0xfffffffc;
}




undefined8 FUN_100621d48(int *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_2 + 0x30);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  iVar5 = 1;
  lVar6 = FUN_10061e1a8(param_3,1);
  if (lVar6 != 0) {
    iVar5 = FUN_10061e1a8(param_3,4);
    iVar5 = iVar5 + 1;
  }
  *param_1 = iVar5;
  lVar6 = FUN_10061e1a8(param_3,1);
  if (lVar6 != 0) {
    iVar5 = FUN_10061e1a8(param_3,8);
    param_1[6] = iVar5 + 1;
    uVar7 = FUN_100623b78((iVar5 + 1) * 2);
    *(undefined8 *)(param_1 + 8) = uVar7;
    if (0 < param_1[6]) {
      lVar6 = 0;
      iVar5 = *(int *)(param_2 + 4);
      do {
        iVar8 = 0;
        if (iVar5 != 0) {
          uVar9 = iVar5 - 1;
          uVar10 = (ulong)uVar9;
          while (uVar9 != 0) {
            iVar8 = iVar8 + 1;
            uVar10 = uVar10 >> 1;
            uVar9 = (uint)uVar10;
          }
        }
        bVar1 = FUN_10061e1a8(param_3,iVar8);
        iVar5 = 0;
        *(byte *)(*(long *)(param_1 + 8) + lVar6 * 2) = bVar1;
        uVar9 = *(int *)(param_2 + 4) - 1;
        uVar10 = (ulong)uVar9;
        if (*(int *)(param_2 + 4) != 0 && uVar9 != 0) {
          do {
            iVar5 = iVar5 + 1;
            uVar10 = uVar10 >> 1;
          } while ((int)uVar10 != 0);
        }
        bVar2 = FUN_10061e1a8(param_3,iVar5);
        *(byte *)(*(long *)(param_1 + 8) + lVar6 * 2 + 1) = bVar2;
        if (((uint)bVar1 == (uint)bVar2) ||
           (iVar5 = *(int *)(param_2 + 4), iVar5 <= (int)(uint)bVar1 || iVar5 <= (int)(uint)bVar2))
        goto LAB_100621f8c;
        lVar6 = lVar6 + 1;
      } while (lVar6 < param_1[6]);
    }
  }
  lVar6 = FUN_10061e1a8(param_3,2);
  if (lVar6 < 1) {
    iVar5 = *param_1;
    if (1 < iVar5) {
      uVar7 = FUN_100623b78(*(undefined4 *)(param_2 + 4));
      *(undefined8 *)(param_1 + 2) = uVar7;
      if (*(int *)(param_2 + 4) < 1) {
        iVar5 = *param_1;
      }
      else {
        lVar6 = 0;
        do {
          uVar3 = FUN_10061e1a8(param_3,4);
          *(undefined1 *)(*(long *)(param_1 + 2) + lVar6) = uVar3;
          iVar5 = *param_1;
          if (iVar5 <= (int)(uint)*(byte *)(*(long *)(param_1 + 2) + lVar6)) goto LAB_100621f8c;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_2 + 4));
      }
    }
    uVar7 = FUN_100623b78(iVar5 << 1);
    *(undefined8 *)(param_1 + 4) = uVar7;
    if (*param_1 < 1) {
      uVar7 = 0;
    }
    else {
      lVar11 = 0;
      lVar6 = 0;
      do {
        FUN_10061e1a8(param_3,8);
        cVar4 = FUN_10061e1a8(param_3,8);
        *(char *)(*(long *)(param_1 + 4) + lVar11) = cVar4;
        if (*(int *)(lVar12 + 0x18) <= (int)cVar4) goto LAB_100621f8c;
        cVar4 = FUN_10061e1a8(param_3,8);
        *(char *)(*(long *)(param_1 + 4) + lVar11 + 1) = cVar4;
        if (*(int *)(lVar12 + 0x1c) <= (int)cVar4) goto LAB_100621f8c;
        lVar6 = lVar6 + 1;
        lVar11 = lVar11 + 2;
      } while (lVar6 < *param_1);
      uVar7 = 0;
    }
  }
  else {
LAB_100621f8c:
    uVar7 = 0xffffffff;
  }
  return uVar7;
}




uint FUN_100621fac(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = 1;
  lVar3 = FUN_10061e1a8(param_2,1);
  if (lVar3 != 0) {
    iVar1 = FUN_10061e1a8(param_2,4);
    iVar1 = iVar1 + 1;
  }
  lVar3 = FUN_10061e1a8(param_2,1);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    iVar2 = FUN_10061e1a8(param_2,8);
    uVar6 = (iVar2 + 1) * 2 + 3U & 0xfffffffc;
    if (-1 < iVar2) {
      iVar7 = 0;
      do {
        iVar4 = 0;
        uVar5 = *(int *)(param_1 + 4) - 1;
        if (*(int *)(param_1 + 4) != 0 && uVar5 != 0) {
          do {
            iVar4 = iVar4 + 1;
            uVar5 = uVar5 >> 1;
          } while (uVar5 != 0);
        }
        FUN_10061e14c(param_2,iVar4 << 1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2 + 1);
    }
  }
  FUN_10061e14c(param_2,2);
  if (iVar1 < 2) {
    uVar6 = uVar6 + iVar1 * 2 + 3 & 0xfffffffc;
    if (iVar1 < 1) {
      return uVar6;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    FUN_10061e14c(param_2,iVar2 << 2);
    uVar6 = ((uVar6 | 3) + iVar2 & 0xfffffffc) + iVar1 * 2 + 3 & 0xfffffffc;
  }
  do {
    FUN_10061e14c(param_2,0x18);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return uVar6;
}




undefined8 FUN_1006220e4(long *param_1,undefined8 param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  ulong local_80 [4];
  
  local_80[1] = param_2;
  local_80[3] = *(long *)PTR____stack_chk_guard_101444218;
  lVar15 = *param_1;
  lVar16 = *(long *)(lVar15 + 0x30);
  uVar4 = *(ulong *)(lVar16 + param_1[6] * 8);
  local_80[0] = uVar4;
  iVar3 = *(int *)(lVar15 + 4);
  uVar7 = (long)iVar3 * 8 + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)local_80 - uVar7;
  uVar11 = (long)iVar3 * 4 + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar6 - uVar11;
  lVar14 = lVar13 - uVar11;
  local_80[2] = lVar14 - uVar7;
  if (0 < iVar3) {
    lVar17 = 0;
    do {
      if ((int)*param_3 < 2) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulong)*(byte *)(*(long *)(param_3 + 2) + lVar17);
      }
      lVar5 = (long)*(char *)(*(long *)(param_3 + 4) + uVar7 * 2);
      if (*(char *)(*(long *)(lVar16 + 0x38) + lVar5) == '\0') {
        lVar5 = *(long *)(local_80[2] + lVar17 * 8);
      }
      else {
        lVar5 = lVar5 * 8;
        FUN_10062129c(*(undefined8 *)(*(long *)(lVar16 + 0x40) + lVar5));
        lVar5 = FUN_1006212a4(param_1,local_80[1],*(undefined8 *)(*(long *)(lVar16 + 0x40) + lVar5))
        ;
        *(long *)(local_80[2] + lVar17 * 8) = lVar5;
      }
      *(uint *)(lVar14 + lVar17 * 4) = (uint)(lVar5 != 0);
      _bzero(*(void **)(param_1[1] + lVar17 * 8),(uVar4 & 0x3fffffffffffffff) << 1);
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(lVar15 + 4));
  }
  uVar10 = param_3[6];
  if (0 < (int)uVar10) {
    lVar17 = 0;
    pbVar8 = (byte *)(*(long *)(param_3 + 8) + 1);
    do {
      if ((*(int *)(lVar14 + (ulong)pbVar8[-1] * 4) != 0) ||
         (*(int *)(lVar14 + (ulong)*pbVar8 * 4) != 0)) {
        *(undefined4 *)(lVar14 + (ulong)pbVar8[-1] * 4) = 1;
        *(undefined4 *)(lVar14 + (ulong)*pbVar8 * 4) = 1;
      }
      lVar17 = lVar17 + 1;
      pbVar8 = pbVar8 + 2;
    } while (lVar17 < (int)uVar10);
  }
  uVar4 = (ulong)*param_3;
  if (0 < (int)*param_3) {
    lVar17 = 0;
    do {
      iVar3 = *(int *)(lVar15 + 4);
      if (iVar3 < 1) {
        iVar2 = 0;
      }
      else {
        lVar5 = 0;
        iVar2 = 0;
        lVar9 = *(long *)(param_3 + 2);
        do {
          if ((lVar9 == 0) || ((uint)*(byte *)(lVar9 + lVar5) == (uint)lVar17)) {
            *(uint *)(lVar13 + (long)iVar2 * 4) = (uint)(*(int *)(lVar14 + lVar5 * 4) != 0);
            *(undefined8 *)(lVar6 + (long)iVar2 * 8) = *(undefined8 *)(param_1[1] + lVar5 * 8);
            iVar2 = iVar2 + 1;
            iVar3 = *(int *)(lVar15 + 4);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar3);
      }
      FUN_100623330(param_1,local_80[1],
                    *(long *)(lVar16 + 0x48) +
                    (long)*(char *)(*(long *)(param_3 + 4) + lVar17 * 2 + 1) * 0x30,lVar6,lVar13,
                    iVar2);
      lVar17 = lVar17 + 1;
      uVar4 = (ulong)(int)*param_3;
    } while (lVar17 < (long)uVar4);
    uVar10 = param_3[6];
  }
  if (0 < (int)uVar10) {
    lVar6 = *(long *)(param_3 + 8);
    lVar13 = param_1[1];
    uVar7 = local_80[0];
    if ((long)local_80[0] < 0) {
      uVar7 = local_80[0] + 1;
    }
    lVar14 = (long)(int)uVar10;
    do {
      pbVar8 = (byte *)(lVar6 + (lVar14 + -1) * 2);
      if (1 < (long)local_80[0]) {
        lVar17 = 0;
        lVar5 = *(long *)(lVar13 + (ulong)*pbVar8 * 8);
        lVar9 = *(long *)(lVar13 + (ulong)pbVar8[1] * 8);
        do {
          lVar12 = lVar17 * 4;
          fVar18 = *(float *)(lVar5 + lVar12);
          fVar19 = *(float *)(lVar9 + lVar12);
          if (fVar18 <= 0.0) {
            if (fVar19 <= 0.0) {
              *(float *)(lVar9 + lVar12) = fVar18;
              fVar18 = fVar18 - fVar19;
              goto LAB_1006223f0;
            }
            *(float *)(lVar5 + lVar12) = fVar18;
            *(float *)(lVar9 + lVar12) = fVar18 + fVar19;
          }
          else if (fVar19 <= 0.0) {
            *(float *)(lVar9 + lVar12) = fVar18;
            fVar18 = fVar18 + fVar19;
LAB_1006223f0:
            *(float *)(lVar5 + lVar12) = fVar18;
          }
          else {
            *(float *)(lVar5 + lVar12) = fVar18;
            *(float *)(lVar9 + lVar12) = fVar18 - fVar19;
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < (long)uVar7 >> 1);
      }
      bVar1 = 1 < lVar14;
      lVar14 = lVar14 + -1;
    } while (bVar1);
  }
  iVar3 = *(int *)(lVar15 + 4);
  if (0 < iVar3) {
    lVar6 = 0;
    while( true ) {
      if ((int)uVar4 < 2) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)*(byte *)(*(long *)(param_3 + 2) + lVar6);
      }
      lVar13 = (long)*(char *)(*(long *)(param_3 + 4) + uVar4 * 2);
      if (*(char *)(*(long *)(lVar16 + 0x38) + lVar13) != '\0') {
        FUN_1006215a4(param_1,*(undefined8 *)(*(long *)(lVar16 + 0x40) + lVar13 * 8),
                      *(undefined8 *)(local_80[2] + lVar6 * 8),
                      *(undefined8 *)(param_1[1] + lVar6 * 8));
        iVar3 = *(int *)(lVar15 + 4);
      }
      lVar6 = lVar6 + 1;
      if (iVar3 <= lVar6) break;
      uVar4 = (ulong)*param_3;
    }
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        FUN_1006224f0((int)param_1[6],*(undefined8 *)(param_1[1] + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar15 + 4));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80[3]) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1006224f0(int param_1,float *param_2)

{
  float *pfVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_80 [4];
  undefined8 local_70;
  long local_68;
  
  bVar5 = param_1 == 0;
  uVar8 = 0x800;
  if (bVar5) {
    uVar8 = 0x100;
  }
  uVar17 = (ulong)(uVar8 >> 1);
  uVar13 = (ulong)(uVar8 >> 2);
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  ppuVar2 = &PTR_DAT_101872520;
  if (bVar5) {
    ppuVar2 = &PTR_DAT_101872518;
  }
  pfVar18 = (float *)*ppuVar2;
  piVar20 = (int *)0x101871d18;
  if (bVar5) {
    piVar20 = &DAT_10186f418;
  }
  lVar19 = -(ulong)(uVar8 << 1);
  pfVar15 = (float *)((long)&local_70 + lVar19);
  pfVar16 = (float *)((long)pfVar15 - (ulong)(uVar8 << 1));
  pfVar11 = param_2 + (uVar17 - 7);
  pfVar7 = pfVar15 + uVar13;
  pfVar10 = pfVar7 + -2;
  pfVar6 = pfVar18 + uVar13 + 3;
  do {
    fVar21 = pfVar11[2];
    fVar22 = *pfVar11;
    pfVar10[-2] = -(fVar21 * *pfVar6) - fVar22 * pfVar6[-1];
    pfVar10[-1] = fVar22 * *pfVar6 - fVar21 * pfVar6[-1];
    fVar21 = pfVar11[6];
    fVar22 = pfVar11[4];
    *pfVar10 = -(fVar21 * pfVar6[-2]) - fVar22 * pfVar6[-3];
    pfVar10[1] = fVar22 * pfVar6[-2] - fVar21 * pfVar6[-3];
    pfVar11 = pfVar11 + -8;
    pfVar10 = pfVar10 + -4;
    pfVar6 = pfVar6 + 4;
  } while (param_2 <= pfVar11);
  iVar9 = 6;
  if (param_1 == 0) {
    iVar9 = 3;
  }
  pfVar6 = param_2 + (uVar17 - 8);
  pfVar11 = (float *)((long)pfVar18 + ((ulong)uVar8 - 8));
  do {
    fVar21 = pfVar6[4];
    fVar22 = pfVar6[6];
    *pfVar7 = fVar21 * pfVar11[1] + fVar22 * *pfVar11;
    pfVar7[1] = fVar21 * *pfVar11 - fVar22 * pfVar11[1];
    fVar21 = *pfVar6;
    fVar22 = pfVar6[2];
    pfVar7[2] = fVar21 * pfVar11[-1] + fVar22 * pfVar11[-2];
    pfVar7[3] = fVar21 * pfVar11[-2] - fVar22 * pfVar11[-1];
    pfVar6 = pfVar6 + -8;
    pfVar11 = pfVar11 + -4;
    pfVar7 = pfVar7 + 4;
  } while (param_2 <= pfVar6);
  pfVar6 = pfVar15 + (int)((uVar8 >> 2) - 8);
  pfVar11 = pfVar15 + (uVar17 - 4);
  pfVar7 = pfVar18 + 8;
  do {
    fVar22 = pfVar11[2] - pfVar6[6];
    fVar21 = pfVar11[3] - pfVar6[7];
    pfVar11[2] = pfVar11[2] + pfVar6[6];
    pfVar11[3] = pfVar11[3] + pfVar6[7];
    pfVar6[6] = fVar21 * pfVar7[-7] + fVar22 * pfVar7[-8];
    pfVar6[7] = fVar21 * pfVar7[-8] - fVar22 * pfVar7[-7];
    fVar22 = *pfVar11 - pfVar6[4];
    fVar21 = pfVar11[1] - pfVar6[5];
    *pfVar11 = *pfVar11 + pfVar6[4];
    pfVar11[1] = pfVar11[1] + pfVar6[5];
    pfVar6[4] = fVar21 * pfVar7[-3] + fVar22 * pfVar7[-4];
    pfVar6[5] = fVar21 * pfVar7[-4] - fVar22 * pfVar7[-3];
    fVar22 = pfVar11[-2] - pfVar6[2];
    fVar21 = pfVar11[-1] - pfVar6[3];
    pfVar11[-2] = pfVar11[-2] + pfVar6[2];
    pfVar11[-1] = pfVar11[-1] + pfVar6[3];
    pfVar6[2] = fVar21 * pfVar7[1] + fVar22 * *pfVar7;
    pfVar6[3] = fVar21 * *pfVar7 - fVar22 * pfVar7[1];
    fVar22 = pfVar11[-4] - *pfVar6;
    fVar21 = pfVar11[-3] - pfVar6[1];
    pfVar11[-4] = pfVar11[-4] + *pfVar6;
    pfVar11[-3] = pfVar11[-3] + pfVar6[1];
    *pfVar6 = fVar21 * pfVar7[5] + fVar22 * pfVar7[4];
    pfVar6[1] = fVar21 * pfVar7[4] - fVar22 * pfVar7[5];
    pfVar6 = pfVar6 + -8;
    pfVar11 = pfVar11 + -8;
    pfVar7 = pfVar7 + 0x10;
  } while (pfVar15 <= pfVar6);
  local_70 = uVar13;
  if (1 < iVar9 - 1U) {
    uVar12 = 1;
    do {
      if (uVar12 != 0x1f) {
        lVar14 = 0;
        uVar4 = (uVar8 >> 1) >> (ulong)(uVar12 & 0x1f);
        uVar3 = 4 << (ulong)(uVar12 & 0x1f);
        uVar13 = (ulong)uVar3;
        pfVar6 = (float *)((long)local_80 + lVar19);
        do {
          pfVar6 = (float *)((long)pfVar6 +
                            (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2));
          pfVar7 = pfVar15 + lVar14 * (int)uVar4 + (long)(((int)uVar4 >> 1) + -8);
          pfVar11 = pfVar18;
          pfVar10 = pfVar6;
          do {
            fVar22 = pfVar10[2] - pfVar7[6];
            fVar21 = pfVar10[3] - pfVar7[7];
            pfVar10[2] = pfVar10[2] + pfVar7[6];
            pfVar10[3] = pfVar10[3] + pfVar7[7];
            pfVar7[6] = fVar21 * pfVar11[1] + fVar22 * *pfVar11;
            pfVar7[7] = fVar21 * *pfVar11 - fVar22 * pfVar11[1];
            fVar22 = *pfVar10 - pfVar7[4];
            fVar21 = pfVar10[1] - pfVar7[5];
            *pfVar10 = *pfVar10 + pfVar7[4];
            pfVar10[1] = pfVar10[1] + pfVar7[5];
            pfVar1 = (float *)((long)pfVar11 +
                              (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2));
            pfVar7[4] = fVar21 * pfVar1[1] + fVar22 * *pfVar1;
            pfVar7[5] = fVar21 * *pfVar1 - fVar22 * pfVar1[1];
            fVar22 = pfVar10[-2] - pfVar7[2];
            fVar21 = pfVar10[-1] - pfVar7[3];
            pfVar10[-2] = pfVar10[-2] + pfVar7[2];
            pfVar10[-1] = pfVar10[-1] + pfVar7[3];
            pfVar1 = (float *)((long)pfVar11 +
                              (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
            pfVar7[2] = fVar21 * pfVar1[1] + fVar22 * *pfVar1;
            pfVar7[3] = fVar21 * *pfVar1 - fVar22 * pfVar1[1];
            fVar22 = pfVar10[-4] - *pfVar7;
            fVar21 = pfVar10[-3] - pfVar7[1];
            pfVar10[-4] = pfVar10[-4] + *pfVar7;
            pfVar10[-3] = pfVar10[-3] + pfVar7[1];
            pfVar1 = pfVar11 + (long)(int)uVar3 * 3;
            *pfVar7 = fVar21 * pfVar1[1] + fVar22 * *pfVar1;
            pfVar7[1] = fVar21 * *pfVar1 - fVar22 * pfVar1[1];
            pfVar7 = pfVar7 + -8;
            pfVar10 = pfVar10 + -8;
            pfVar11 = (float *)((long)pfVar11 +
                               (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4));
          } while (pfVar15 + lVar14 * (int)uVar4 <= pfVar7);
          lVar14 = lVar14 + 1;
        } while (lVar14 < 1 << (ulong)(uVar12 & 0x1f));
      }
      bVar5 = uVar12 != iVar9 - 2U;
      uVar12 = uVar12 + 1;
    } while (bVar5);
  }
  lVar19 = 0;
  pfVar6 = pfVar15;
  do {
    fVar21 = pfVar6[0x1e];
    fVar22 = pfVar6[0x1f];
    pfVar6[0x1e] = fVar21 + pfVar6[0xe];
    pfVar6[0x1f] = fVar22 + pfVar6[0xf];
    pfVar6[0xe] = fVar21 - pfVar6[0xe];
    pfVar6[0xf] = fVar22 - pfVar6[0xf];
    fVar32 = pfVar6[0x1c] - pfVar6[0xc];
    fVar22 = pfVar6[0x1d] - pfVar6[0xd];
    pfVar6[0x1c] = pfVar6[0x1c] + pfVar6[0xc];
    pfVar6[0x1d] = pfVar6[0x1d] + pfVar6[0xd];
    fVar23 = pfVar6[0x1a] - pfVar6[10];
    fVar24 = pfVar6[0x1b] - pfVar6[0xb];
    fVar25 = pfVar6[0x18] - pfVar6[8];
    fVar27 = pfVar6[0x19] - pfVar6[9];
    fVar29 = pfVar6[4] - pfVar6[0x14];
    fVar21 = pfVar6[5] - pfVar6[0x15];
    pfVar6[0x1a] = pfVar6[0x1a] + pfVar6[10];
    pfVar6[0xc] = fVar32 * 0.9238795 - fVar22 * 0.38268343;
    fVar30 = pfVar6[0x16];
    fVar31 = pfVar6[0x17];
    fVar28 = pfVar6[6];
    pfVar6[0xd] = fVar32 * 0.38268343 + fVar22 * 0.9238795;
    pfVar6[0x1b] = pfVar6[0x1b] + pfVar6[0xb];
    pfVar6[10] = (fVar23 - fVar24) * 0.70710677;
    pfVar6[0xb] = (fVar23 + fVar24) * 0.70710677;
    pfVar6[0x18] = pfVar6[0x18] + pfVar6[8];
    pfVar6[0x19] = pfVar6[0x19] + pfVar6[9];
    pfVar6[8] = fVar25 * 0.38268343 - fVar27 * 0.9238795;
    pfVar6[9] = fVar25 * 0.9238795 + fVar27 * 0.38268343;
    pfVar6[0x16] = fVar30 + fVar28;
    pfVar6[0x17] = pfVar6[7] + fVar31;
    pfVar6[6] = pfVar6[7] - fVar31;
    pfVar6[7] = fVar30 - fVar28;
    pfVar6[0x14] = pfVar6[4] + pfVar6[0x14];
    pfVar6[0x15] = pfVar6[5] + pfVar6[0x15];
    pfVar6[4] = fVar29 * 0.38268343 + fVar21 * 0.9238795;
    pfVar6[5] = fVar21 * 0.38268343 - fVar29 * 0.9238795;
    fVar21 = pfVar6[2] - pfVar6[0x12];
    fVar22 = pfVar6[3] - pfVar6[0x13];
    pfVar6[0x12] = pfVar6[2] + pfVar6[0x12];
    pfVar6[0x13] = pfVar6[3] + pfVar6[0x13];
    pfVar6[2] = (fVar21 + fVar22) * 0.70710677;
    pfVar6[3] = (fVar22 - fVar21) * 0.70710677;
    pfVar7 = pfVar6 + 0x10;
    fVar21 = *pfVar6 - *pfVar7;
    fVar22 = pfVar6[1] - pfVar6[0x11];
    *pfVar7 = *pfVar6 + *pfVar7;
    pfVar6[0x11] = pfVar6[1] + pfVar6[0x11];
    *pfVar6 = fVar21 * 0.9238795 + fVar22 * 0.38268343;
    pfVar6[1] = fVar22 * 0.9238795 - fVar21 * 0.38268343;
    FUN_100622e24(pfVar6);
    FUN_100622e24(pfVar7);
    lVar19 = lVar19 + 0x20;
    pfVar6 = pfVar6 + 0x20;
  } while (lVar19 < (long)uVar17);
  pfVar11 = pfVar16 + uVar17;
  pfVar6 = pfVar18 + uVar8;
  pfVar7 = pfVar16;
  pfVar10 = pfVar11;
  do {
    fVar21 = pfVar15[*piVar20];
    fVar22 = (pfVar15 + *piVar20)[1];
    fVar23 = pfVar15[piVar20[1]];
    fVar24 = (pfVar15 + piVar20[1])[1];
    fVar28 = fVar22 - fVar24;
    fVar30 = fVar21 + fVar23;
    fVar31 = pfVar15[piVar20[3]];
    fVar29 = (pfVar15 + piVar20[3])[1];
    fVar27 = pfVar15[piVar20[2]];
    fVar32 = (pfVar15 + piVar20[2])[1];
    fVar25 = fVar32 - fVar29;
    fVar26 = fVar27 + fVar31;
    fVar24 = (fVar22 + fVar24) * 0.5;
    fVar23 = (fVar21 - fVar23) * 0.5;
    fVar29 = (fVar32 + fVar29) * 0.5;
    fVar27 = (fVar27 - fVar31) * 0.5;
    fVar22 = fVar30 * *pfVar6 + fVar28 * pfVar6[1];
    fVar21 = fVar30 * pfVar6[1] - fVar28 * *pfVar6;
    *pfVar7 = fVar24 + fVar22;
    pfVar10[-2] = fVar24 - fVar22;
    pfVar7[1] = fVar23 + fVar21;
    pfVar10[-1] = fVar21 - fVar23;
    fVar22 = fVar26 * pfVar6[2] + fVar25 * pfVar6[3];
    fVar21 = fVar26 * pfVar6[3] - fVar25 * pfVar6[2];
    pfVar7[2] = fVar29 + fVar22;
    pfVar10[-4] = fVar29 - fVar22;
    pfVar7[3] = fVar27 + fVar21;
    pfVar10[-3] = fVar21 - fVar27;
    pfVar10 = pfVar10 + -4;
    pfVar7 = pfVar7 + 4;
    piVar20 = piVar20 + 4;
    pfVar6 = pfVar6 + 4;
  } while (pfVar7 < pfVar10);
  pfVar6 = param_2 + local_70;
  pfVar18 = pfVar18 + uVar17 + 4;
  param_2 = (float *)((long)param_2 + ((ulong)uVar8 - 8));
  do {
    fVar21 = *pfVar16;
    fVar22 = pfVar16[1];
    param_2[1] = fVar21 * pfVar18[-3] - fVar22 * pfVar18[-4];
    *pfVar6 = -(fVar21 * pfVar18[-4] + fVar22 * pfVar18[-3]);
    fVar21 = pfVar16[2];
    fVar22 = pfVar16[3];
    *param_2 = fVar21 * pfVar18[-1] - fVar22 * pfVar18[-2];
    pfVar6[1] = -(fVar21 * pfVar18[-2] + fVar22 * pfVar18[-1]);
    fVar21 = pfVar16[4];
    fVar22 = pfVar16[5];
    param_2[-1] = fVar21 * pfVar18[1] - fVar22 * *pfVar18;
    pfVar6[2] = -(fVar21 * *pfVar18 + fVar22 * pfVar18[1]);
    fVar21 = pfVar16[6];
    fVar22 = pfVar16[7];
    param_2[-2] = fVar21 * pfVar18[3] - fVar22 * pfVar18[2];
    pfVar6[3] = -(fVar21 * pfVar18[2] + fVar22 * pfVar18[3]);
    pfVar18 = pfVar18 + 8;
    param_2 = param_2 + -4;
    pfVar16 = pfVar16 + 8;
    pfVar6 = pfVar6 + 4;
  } while (pfVar16 < pfVar11);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100622e24(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar15 = param_1[1] - param_1[9];
  fVar17 = *param_1 - param_1[8];
  fVar1 = *param_1 + param_1[8];
  fVar2 = param_1[1] + param_1[9];
  fVar3 = param_1[3] - param_1[0xb];
  fVar4 = param_1[3] + param_1[0xb];
  fVar6 = param_1[0xc] - param_1[4];
  fVar13 = param_1[0xd] - param_1[5];
  fVar19 = param_1[10] - param_1[2];
  fVar5 = param_1[10] + param_1[2];
  fVar7 = param_1[0xc] + param_1[4];
  fVar8 = param_1[5] + param_1[0xd];
  fVar10 = param_1[0xe] - param_1[6];
  fVar9 = param_1[0xe] + param_1[6];
  fVar18 = param_1[0xf] - param_1[7];
  fVar11 = param_1[7] + param_1[0xf];
  fVar14 = fVar11 - fVar4;
  fVar11 = fVar11 + fVar4;
  fVar12 = fVar10 - fVar3;
  fVar16 = (fVar15 + fVar17) * 0.70710677;
  fVar17 = (fVar15 - fVar17) * 0.70710677;
  fVar15 = (fVar6 + fVar13) * 0.70710677;
  fVar4 = (fVar6 - fVar13) * 0.70710677;
  fVar10 = fVar10 + fVar3;
  fVar3 = fVar18 - fVar19;
  fVar18 = fVar18 + fVar19;
  fVar6 = fVar9 - fVar5;
  fVar13 = fVar8 - fVar2;
  fVar8 = fVar8 + fVar2;
  fVar2 = fVar7 - fVar1;
  fVar9 = fVar9 + fVar5;
  fVar7 = fVar7 + fVar1;
  fVar5 = fVar4 + fVar16;
  fVar4 = fVar4 - fVar16;
  fVar1 = fVar15 - fVar17;
  param_1[0xe] = fVar9 + fVar7;
  param_1[0xc] = fVar9 - fVar7;
  param_1[8] = fVar6 + fVar13;
  param_1[10] = fVar6 - fVar13;
  param_1[0xb] = fVar2 + fVar14;
  fVar15 = fVar15 + fVar17;
  param_1[6] = fVar10 + fVar5;
  param_1[4] = fVar10 - fVar5;
  *param_1 = fVar12 + fVar1;
  param_1[2] = fVar12 - fVar1;
  param_1[3] = fVar4 + fVar3;
  param_1[1] = fVar3 - fVar4;
  param_1[7] = fVar15 + fVar18;
  param_1[5] = fVar18 - fVar15;
  param_1[9] = fVar14 - fVar2;
  param_1[0xf] = fVar8 + fVar11;
  param_1[0xd] = fVar11 - fVar8;
  return;
}




undefined8 FUN_100622f68(uint *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_2 + 0x30);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = FUN_10061e1a8(param_3,0x10);
  *param_1 = uVar3;
  if (uVar3 < 3) {
    uVar5 = FUN_10061e1a8(param_3,0x18);
    *(undefined8 *)(param_1 + 6) = uVar5;
    uVar5 = FUN_10061e1a8(param_3,0x18);
    *(undefined8 *)(param_1 + 8) = uVar5;
    iVar4 = FUN_10061e1a8(param_3,0x18);
    param_1[10] = iVar4 + 1;
    cVar1 = FUN_10061e1a8(param_3,6);
    *(char *)(param_1 + 0xb) = cVar1 + '\x01';
    bVar2 = FUN_10061e1a8(param_3,8);
    *(byte *)((long)param_1 + 0x2d) = bVar2;
    if ((int)(uint)bVar2 < *(int *)(lVar7 + 0x20)) {
      uVar5 = FUN_100623b78((long)(char)param_1[0xb]);
      *(undefined8 *)(param_1 + 2) = uVar5;
      uVar5 = FUN_100623b78((int)(char)param_1[0xb] << 3);
      *(undefined8 *)(param_1 + 4) = uVar5;
      if ('\0' < (char)param_1[0xb]) {
        lVar8 = 0;
        do {
          bVar2 = FUN_10061e1a8(param_3,3);
          lVar6 = FUN_10061e1a8(param_3,1);
          if (lVar6 != 0) {
            cVar1 = FUN_10061e1a8(param_3,5);
            bVar2 = bVar2 | cVar1 << 3;
          }
          *(byte *)(*(long *)(param_1 + 2) + lVar8) = bVar2;
          lVar8 = lVar8 + 1;
        } while (lVar8 < (char)param_1[0xb]);
        if ('\0' < (char)param_1[0xb]) {
          iVar4 = 0;
          lVar8 = 0;
          do {
            lVar6 = 0;
            do {
              if (((uint)*(byte *)(*(long *)(param_1 + 2) + lVar8) &
                  1 << (ulong)((uint)lVar6 & 0x1f)) == 0) {
                *(undefined1 *)(*(long *)(param_1 + 4) + (long)iVar4 + lVar6) = 0xff;
              }
              else {
                bVar2 = FUN_10061e1a8(param_3,8);
                if (*(int *)(lVar7 + 0x20) <= (int)(uint)bVar2) {
                  return 1;
                }
                *(byte *)(*(long *)(param_1 + 4) + (long)iVar4 + lVar6) = bVar2;
                if (*(char *)((long)param_1 + 0x2e) <= lVar6) {
                  *(char *)((long)param_1 + 0x2e) = (char)lVar6 + '\x01';
                }
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < 8);
            lVar8 = lVar8 + 1;
            iVar4 = iVar4 + 8;
          } while (lVar8 < (char)param_1[0xb]);
        }
      }
      iVar4 = FUN_10061e19c(param_3);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  return 1;
}




void FUN_100623168(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte abStack_60 [8];
  long local_58;
  
  lVar7 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar7;
  FUN_10061e14c(param_2,0x10);
  FUN_10061e14c(param_2,0x18);
  FUN_10061e14c(param_2,0x18);
  FUN_10061e14c(param_2,0x18);
  iVar5 = FUN_10061e1a8(param_2,6);
  FUN_10061e14c(param_2,8);
  lVar8 = (long)(iVar5 + 1);
  iVar1 = (iVar5 + 4U & 0xfffffffc) + (iVar5 + 1) * 8;
  lVar2 = -0x60 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  if (-1 < iVar5) {
    lVar9 = 0;
    do {
      bVar3 = FUN_10061e1a8(param_2,3);
      lVar6 = FUN_10061e1a8(param_2,1);
      if (lVar6 != 0) {
        cVar4 = FUN_10061e1a8(param_2,5);
        bVar3 = bVar3 | cVar4 << 3;
      }
      abStack_60[lVar9 + lVar2 + 0x60] = bVar3;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar8);
    if (-1 < iVar5) {
      lVar9 = 0;
      do {
        bVar3 = abStack_60[lVar9 + lVar2 + 0x60];
        if ((bVar3 & 1) != 0) {
          FUN_10061e14c(param_2,8);
        }
        if ((bVar3 >> 1 & 1) != 0) {
          FUN_10061e14c(param_2,8);
        }
        if ((bVar3 >> 2 & 1) != 0) {
          FUN_10061e14c(param_2,8);
        }
        if ((bVar3 >> 3 & 1) != 0) {
          FUN_10061e14c(param_2,8);
        }
        if ((bVar3 >> 4 & 1) != 0) {
          FUN_10061e14c(param_2,8);
        }
        if ((bVar3 >> 5 & 1) != 0) {
          FUN_10061e14c(param_2,8);
        }
        if ((bVar3 >> 6 & 1) != 0) {
          FUN_10061e14c(param_2,8);
        }
        if ((char)bVar3 < '\0') {
          FUN_10061e14c(param_2,8);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar8);
    }
  }
  iVar5 = FUN_10061e19c(param_2);
  if (iVar5 != 0) {
    iVar1 = -1;
  }
  if (lVar7 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar1);
}




undefined8
FUN_100623330(long *param_1,undefined8 param_2,int *param_3,undefined8 *param_4,int *param_5,
             ulong param_6)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  char cVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong *puVar23;
  int iVar24;
  int iVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  ulong *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulong local_118;
  ulong local_110 [5];
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  int local_b4;
  long local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  uint local_8c;
  long local_88;
  undefined8 local_80;
  undefined8 *local_78;
  long local_70;
  
  local_80 = param_2;
  local_78 = param_4;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  iVar29 = param_3[10];
  local_98 = (long)iVar29;
  local_88 = *(long *)(*param_1 + 0x30);
  local_a0 = *(long *)(local_88 + 0x50) + (ulong)*(byte *)((long)param_3 + 0x2d) * 0x40;
  cVar12 = *(char *)(local_a0 + 0x34);
  iVar24 = (int)cVar12;
  uVar27 = (ulong)(int)cVar12;
  iVar25 = *(int *)(local_88 + param_1[6] * 8);
  iVar13 = (int)param_6;
  if (*param_3 < 2) {
    iVar25 = iVar25 >> 1;
    iVar18 = (int)*(long *)(param_3 + 8);
    if ((long)iVar25 <= *(long *)(param_3 + 8)) {
      iVar18 = iVar25;
    }
    if ((0 < iVar18 - param_3[6]) && (0 < iVar13)) {
      uVar30 = 0;
      uVar20 = 0;
      if (iVar29 != 0) {
        uVar20 = (iVar18 - param_3[6]) / iVar29;
      }
      local_a8 = (ulong)uVar20;
      iVar25 = (int)cVar12;
      local_b4 = iVar25 + -1;
      puVar14 = param_4;
      do {
        if (*param_5 != 0) {
          param_4[(int)uVar30] = *puVar14;
          uVar30 = (ulong)((int)uVar30 + 1);
        }
        uVar6 = (int)param_6 - 1;
        param_6 = (ulong)uVar6;
        puVar14 = puVar14 + 1;
        param_5 = param_5 + 1;
      } while (uVar6 != 0);
      iVar29 = (int)uVar30;
      if (iVar29 != 0) {
        lVar21 = -((-(uVar30 >> 0x1f) & 0xfffffff800000000 | uVar30 << 3) + 0xf & 0xfffffffffffffff0
                  );
        puVar31 = (ulong *)((long)local_110 + lVar21);
        uVar30 = (ulong)(iVar29 - 1);
        if (0 < iVar29) {
          iVar13 = 0;
          if (iVar25 != 0) {
            iVar13 = (int)(iVar25 + -1 + uVar20) / iVar24;
          }
          uVar15 = uVar30 + 1 & 0x1fffffffe;
          if (uVar15 == 0) {
            uVar15 = 0;
            puVar23 = puVar31;
          }
          else {
            uVar19 = uVar30 + 1 & 0xfffffffffffffffe;
            puVar23 = puVar31;
            puVar14 = (undefined8 *)((long)local_110 + lVar21 + 8);
            do {
              uVar22 = (long)(iVar13 * iVar24) + 0xfU & 0xfffffffffffffff0;
              lVar21 = (long)puVar23 - uVar22;
              puVar23 = (ulong *)(lVar21 - uVar22);
              puVar14[-1] = lVar21;
              *puVar14 = puVar23;
              uVar19 = uVar19 - 2;
              puVar14 = puVar14 + 2;
            } while (uVar19 != 0);
          }
          if (uVar30 + 1 != uVar15) {
            iVar18 = iVar29 - (int)uVar15;
            puVar16 = puVar31 + uVar15;
            do {
              puVar23 = (ulong *)((long)puVar23 +
                                 -((long)(iVar13 * iVar24) + 0xfU & 0xfffffffffffffff0));
              *puVar16 = (ulong)puVar23;
              iVar18 = iVar18 + -1;
              puVar16 = puVar16 + 1;
            } while (iVar18 != 0);
          }
        }
        local_c8 = uVar30;
        cVar8 = *(char *)((long)param_3 + 0x2e);
        if ('\0' < cVar8) {
          uVar20 = 0;
          local_c0 = uVar27;
          local_d0 = *puVar31;
          local_e8 = (ulong)(iVar25 - 2U);
          local_b0 = (long)(int)local_a8;
          uVar30 = 0xfffffffffffffffe;
          if (-2 < (long)~uVar27) {
            uVar30 = ~uVar27;
          }
          local_110[4] = uVar30 + uVar27;
          local_110[3] = uVar30 + uVar27 + 2;
          local_110[1] = uVar27 - 1;
          local_110[2] = local_110[1];
          if ('\0' < cVar12) {
            local_110[1] = 0;
          }
          local_110[0] = (long)(int)(iVar25 - 2U) + 1;
          uVar30 = 0xfffffffffffffffe;
          if (-2 < (long)~uVar27) {
            uVar30 = ~uVar27;
          }
          local_d8 = uVar30 + uVar27 + 2 & 0xffffffffffffffe0;
          local_e0 = uVar27 - 0x10;
          do {
            local_8c = uVar20;
            if (0 < (int)local_a8) {
              lVar21 = 0;
              do {
                iVar25 = (int)lVar21;
                cVar12 = (char)uVar27;
                if (local_8c == 0) {
                  *(undefined1 *)(local_d0 + (long)(local_b4 + iVar25)) = 1;
                  if (-1 < (int)local_e8) {
                    uVar30 = local_110[0];
                    do {
                      pcVar11 = (char *)(local_d0 + (long)iVar25 + uVar30);
                      pcVar11[-1] = (char)param_3[0xb] * *pcVar11;
                      uVar30 = uVar30 - 1;
                    } while (0 < (long)uVar30);
                  }
                  if (1 < iVar29) {
                    lVar10 = (long)iVar25;
                    lVar17 = 1;
                    do {
                      if ('\0' < cVar12) {
                        uVar15 = (puVar31 + lVar17)[-1];
                        uVar19 = puVar31[lVar17];
                        uVar30 = uVar27;
                        if (local_110[4] != -2) {
                          uVar22 = local_110[3] & 0xffffffffffffffe0;
                          if ((uVar22 == 0) ||
                             (uVar19 + local_110[2] + lVar10 <= uVar15 + local_110[1] + lVar10 &&
                              uVar15 + local_110[2] + lVar10 <= uVar19 + local_110[1] + lVar10)) {
                            uVar22 = 0;
                          }
                          else {
                            uVar30 = uVar27 - uVar22;
                            puVar14 = (undefined8 *)(uVar19 + local_e0 + lVar10);
                            puVar26 = (undefined8 *)(uVar15 + local_e0 + lVar10);
                            uVar28 = local_d8;
                            do {
                              uVar32 = *puVar26;
                              uVar34 = puVar26[-1];
                              uVar33 = puVar26[-2];
                              puVar14[1] = puVar26[1];
                              *puVar14 = uVar32;
                              puVar14[-1] = uVar34;
                              puVar14[-2] = uVar33;
                              uVar28 = uVar28 - 0x20;
                              puVar14 = puVar14 + -4;
                              puVar26 = puVar26 + -4;
                            } while (uVar28 != 0);
                          }
                          if (local_110[4] + 2 == uVar22) goto LAB_10062395c;
                        }
                        do {
                          *(undefined1 *)(uVar19 + lVar10 + -1 + uVar30) =
                               *(undefined1 *)(uVar15 + lVar10 + -1 + uVar30);
                          uVar22 = uVar30 - 1;
                          bVar1 = 0 < (long)uVar30;
                          uVar30 = uVar22;
                        } while (uVar22 != 0 && bVar1);
                      }
LAB_10062395c:
                      iVar13 = (int)lVar17;
                      lVar17 = lVar17 + 1;
                    } while (iVar13 != (int)local_c8);
                  }
                  if (0 < iVar29) {
                    lVar17 = 0;
                    do {
                      uVar6 = FUN_10061f5ec(local_a0,local_80);
                      if (uVar6 == 0xffffffff) goto LAB_100623ad8;
                      if ('\0' < cVar12) {
                        pcVar11 = (char *)(puVar31[lVar17] + (long)iVar25);
                        uVar30 = uVar27;
                        do {
                          cVar8 = *pcVar11;
                          cVar4 = '\0';
                          if ((int)cVar8 != 0) {
                            cVar4 = (char)(uVar6 / (uint)(int)cVar8);
                          }
                          *pcVar11 = cVar4;
                          uVar6 = uVar6 - (int)cVar4 * (int)cVar8;
                          uVar3 = (int)uVar30 - 1;
                          uVar30 = (ulong)uVar3;
                          pcVar11 = pcVar11 + 1;
                        } while (uVar3 != 0);
                      }
                      lVar17 = lVar17 + 1;
                    } while (lVar17 < iVar29);
                  }
                }
                if (('\0' < cVar12) && (iVar25 < (int)local_a8)) {
                  iVar13 = 0;
                  lVar21 = (long)iVar25;
                  do {
                    if (0 < iVar29) {
                      lVar17 = 0;
                      lVar10 = lVar21 * local_98;
                      do {
                        if (((uint)*(byte *)(*(long *)(param_3 + 2) +
                                            (long)*(char *)(puVar31[lVar17] + lVar21)) &
                            1 << (ulong)(uVar20 & 0x1f)) != 0) {
                          lVar7 = *(long *)(local_88 + 0x50) +
                                  (ulong)*(byte *)(*(long *)(param_3 + 4) +
                                                  (long)*(char *)(puVar31[lVar17] + lVar21) * 8 +
                                                  (long)(int)local_8c) * 0x40;
                          lVar9 = local_78[lVar17] + (*(long *)(param_3 + 6) + lVar10) * 4;
                          if (*param_3 == 0) {
                            lVar7 = FUN_10061f7e0(lVar7,lVar9,local_80,local_98);
                          }
                          else {
                            lVar7 = FUN_10061fa20(lVar7,lVar9,local_80,local_98);
                          }
                          if (lVar7 == -1) goto LAB_100623ad8;
                        }
                        lVar17 = lVar17 + 1;
                      } while (lVar17 < iVar29);
                    }
                    iVar13 = iVar13 + 1;
                    lVar21 = lVar21 + 1;
                    uVar27 = local_c0;
                  } while ((iVar13 < iVar24) && (lVar21 < local_b0));
                }
              } while ((int)lVar21 < (int)local_a8);
              cVar8 = *(char *)((long)param_3 + 0x2e);
            }
            uVar20 = local_8c + 1;
          } while ((int)uVar20 < (int)cVar8);
        }
      }
    }
  }
  else {
    iVar25 = iVar25 * iVar13 >> 1;
    iVar18 = (int)*(long *)(param_3 + 8);
    if ((long)iVar25 <= *(long *)(param_3 + 8)) {
      iVar18 = iVar25;
    }
    iVar18 = iVar18 - param_3[6];
    if (0 < iVar18) {
      uVar20 = 0;
      if (iVar29 != 0) {
        uVar20 = iVar18 / iVar29;
      }
      local_a8 = (ulong)uVar20;
      local_b4 = cVar12 + -1;
      iVar25 = 0;
      if (iVar24 != 0) {
        iVar25 = (int)(local_b4 + uVar20) / iVar24;
      }
      local_b0 = (long)local_110 - ((long)(iVar25 * iVar24) + 0xfU & 0xfffffffffffffff0);
      if (iVar13 < 1) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        do {
          if (param_5[lVar21] != 0) break;
          lVar21 = lVar21 + 1;
        } while (lVar21 < iVar13);
      }
      if (((int)lVar21 != iVar13) && (cVar12 = *(char *)((long)param_3 + 0x2e), '\0' < cVar12)) {
        local_8c = 0;
        iVar25 = 0;
        if (iVar13 != 0) {
          iVar25 = param_3[6] / iVar13;
        }
        local_d0 = (ulong)(iVar24 - 2U);
        local_d8 = (long)(int)(iVar24 - 2U) + 1;
        local_c8 = (ulong)iVar25;
        uVar6 = 0;
        if (iVar13 != 0) {
          uVar6 = iVar29 / iVar13;
        }
        local_98 = (ulong)uVar6;
        do {
          if (0 < (int)local_a8) {
            lVar21 = 0;
            uVar3 = local_8c & 0x1f;
            local_c0 = uVar27;
            do {
              iVar25 = (int)lVar21;
              if (local_8c == 0) {
                *(undefined1 *)(local_b0 + (local_b4 + iVar25)) = 1;
                if (-1 < (int)local_d0) {
                  iVar29 = param_3[0xb];
                  uVar30 = local_d8;
                  do {
                    pcVar11 = (char *)(local_b0 + iVar25 + uVar30);
                    pcVar11[-1] = (char)iVar29 * *pcVar11;
                    uVar30 = uVar30 - 1;
                  } while (0 < (long)uVar30);
                }
                uVar5 = FUN_10061f5ec(local_a0,local_80);
                if (uVar5 == 0xffffffff) goto LAB_100623ad8;
                if (0 < iVar24) {
                  pcVar11 = (char *)(local_b0 + iVar25);
                  iVar29 = iVar24;
                  do {
                    cVar12 = *pcVar11;
                    cVar8 = '\0';
                    if ((int)cVar12 != 0) {
                      cVar8 = (char)(uVar5 / (uint)(int)cVar12);
                    }
                    *pcVar11 = cVar8;
                    uVar5 = uVar5 - (int)cVar8 * (int)cVar12;
                    iVar29 = iVar29 + -1;
                    pcVar11 = pcVar11 + 1;
                  } while (iVar29 != 0);
                  goto LAB_100623648;
                }
              }
              else {
LAB_100623648:
                if (('\0' < (char)uVar27) && (iVar25 < (int)local_a8)) {
                  lVar21 = (long)iVar25;
                  lVar10 = local_c8 + (int)uVar6 * lVar21;
                  lVar17 = local_b0 + lVar21;
                  lVar7 = 0;
                  do {
                    lVar9 = (long)*(char *)(lVar17 + lVar7);
                    if ((((uint)*(byte *)(*(long *)(param_3 + 2) + lVar9) & 1 << (ulong)uVar3) != 0)
                       && (lVar9 = FUN_10061fd00(*(long *)(local_88 + 0x50) +
                                                 (ulong)*(byte *)(*(long *)(param_3 + 4) +
                                                                 lVar9 * 8 + (long)(int)local_8c) *
                                                 0x40,local_78,lVar10,param_6,local_80,local_98),
                          lVar9 == -1)) goto LAB_100623ad8;
                    lVar9 = lVar7 + 1;
                  } while (((int)lVar7 + 1 < iVar24) &&
                          (lVar2 = lVar21 + lVar7, lVar10 = lVar10 + (int)uVar6, lVar7 = lVar9,
                          lVar2 + 1 < (long)(int)uVar20));
                  lVar21 = lVar21 + lVar9;
                  uVar27 = local_c0;
                }
              }
            } while ((int)lVar21 < (int)local_a8);
            cVar12 = *(char *)((long)param_3 + 0x2e);
          }
          local_8c = local_8c + 1;
        } while ((int)local_8c < (int)cVar12);
      }
    }
  }
LAB_100623ad8:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




ulong FUN_100623b18(int param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  if (DAT_101ea47f0 != 0 && 0 < DAT_101ea47f8) {
    uVar2 = (DAT_101ea47f0 + param_1) - 1U & (long)-param_1;
    iVar3 = (int)DAT_101ea47f0;
    uVar1 = (param_1 + param_2) - 1U & -param_1;
    DAT_101ea47f0 = uVar2 + (long)(int)uVar1;
    DAT_101ea47f8 = DAT_101ea47f8 - (((int)uVar2 - iVar3) + uVar1);
    return uVar2;
  }
  return 0;
}




ulong FUN_100623b78(int param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  if (DAT_101ea47f0 != 0 && 0 < DAT_101ea47f8) {
    uVar2 = DAT_101ea47f0 + 3U & 0xfffffffffffffffc;
    iVar3 = (int)DAT_101ea47f0;
    uVar1 = param_1 + 3U & 0xfffffffc;
    DAT_101ea47f0 = uVar2 + (long)(int)uVar1;
    DAT_101ea47f8 = DAT_101ea47f8 - (((int)uVar2 - iVar3) + uVar1);
    return uVar2;
  }
  return 0;
}




ulong FUN_100623bcc(int param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  if (DAT_101ea47f0 != 0 && 0 < DAT_101ea47f8) {
    uVar2 = DAT_101ea47f0 + 3U & 0xfffffffffffffffc;
    iVar3 = (int)DAT_101ea47f0;
    uVar1 = param_2 * param_1 + 3U & 0xfffffffc;
    DAT_101ea47f0 = uVar2 + (long)(int)uVar1;
    DAT_101ea47f8 = DAT_101ea47f8 - (((int)uVar2 - iVar3) + uVar1);
    return uVar2;
  }
  return 0;
}




undefined8 FUN_100623c24(void)

{
  return 0;
}




void FUN_100623c2c(void)

{
  return;
}




void FUN_100623c30(void)

{
  DAT_101ea4800 = "FMOD Vorbis Codec";
  DAT_101ea4808 = 0x10100;
  DAT_101ea4810 = 2;
  DAT_101ea4818 = FUN_100623cb4;
  DAT_101ea4820 = FUN_100623cbc;
  DAT_101ea4828 = thunk_FUN_100624a20;
  DAT_101ea4838 = thunk_FUN_100624bb4;
  DAT_101ea4858 = 0x14;
  DAT_101ea485c = 0x200;
  DAT_101ea486c = 5;
  DAT_101ea48c0 = FUN_100623d10;
  DAT_101ea48c8 = FUN_100623d40;
  return;
}




undefined8 FUN_100623cb4(void)

{
  return 0x13;
}




undefined8 FUN_100623cbc(long param_1)

{
  if (*(long *)(param_1 + 0x1d8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1d8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                  ,0xde);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  return 0;
}




void thunk_FUN_100624a20(long param_1,long param_2,ulong param_3,int *param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_1888 [30];
  ushort uStack_186a;
  undefined1 auStack_1868 [6144];
  long lStack_68;
  
  iVar6 = 0;
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  *param_4 = 0;
  lStack_68 = lVar5;
  if ((int)param_3 != 0) {
    iVar6 = 0;
    do {
      iVar3 = FUN_1006202e4(*(undefined8 *)(param_1 + 0x1d0),0,0);
      if (iVar3 != 0) {
        uVar4 = FUN_1006202e4(*(undefined8 *)(param_1 + 0x1d0),
                              param_2 + (ulong)(uint)(*(int *)(*(long *)(param_1 + 8) + 0x104) *
                                                     iVar6) * 2,param_3);
        iVar6 = (int)uVar4 + iVar6;
        FUN_100620470(*(undefined8 *)(param_1 + 0x1d0),uVar4);
        uVar1 = (int)param_3 - (int)uVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0) break;
      }
      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&uStack_186a,1,2,0);
      uVar2 = uStack_186a;
      if ((int)uVar4 != 0) goto LAB_100624b84;
      if (0x1800 < uStack_186a) {
        uVar4 = 0x1c;
        goto LAB_100624b84;
      }
      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_1868,1,uStack_186a,0);
      if ((int)uVar4 != 0) goto LAB_100624b84;
      FUN_10061e218(auStack_1888,auStack_1868,uVar2);
      iVar3 = FUN_100620534(*(undefined8 *)(param_1 + 0x1d0),auStack_1888,1);
      if (iVar3 != 0) {
        uVar4 = 0xd;
        goto LAB_100624b84;
      }
      uVar4 = FUN_1006202e4(*(undefined8 *)(param_1 + 0x1d0),
                            param_2 + (ulong)(uint)(*(int *)(*(long *)(param_1 + 8) + 0x104) * iVar6
                                                   ) * 2,param_3);
      iVar6 = (int)uVar4 + iVar6;
      FUN_100620470(*(undefined8 *)(param_1 + 0x1d0),uVar4);
      uVar1 = (int)param_3 - (int)uVar4;
      param_3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  uVar4 = 0;
  *param_4 = iVar6;
LAB_100624b84:
  if (lVar5 == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




void thunk_FUN_100624bb4(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_18a0 [24];
  undefined1 auStack_1888 [30];
  ushort uStack_186a;
  undefined1 auStack_1868 [6144];
  long lStack_68;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  lStack_68 = lVar8;
  FUN_10061fe3c(*(undefined8 *)(param_1 + 0x1d0));
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x108);
  if (uVar1 < param_3) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_3 / uVar1;
    }
    uVar2 = uVar2 - 1;
    iVar9 = *(int *)(*(long *)(param_1 + 0x1f8) +
                    (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3));
    FUN_1005d1d28(*(undefined8 *)(param_1 + 400),
                  *(int *)(param_1 + 0x130) +
                  *(int *)(*(long *)(param_1 + 0x1f8) + ((long)(int)uVar2 << 3 | 4U)),0);
  }
  else {
    FUN_1005d1d28(*(undefined8 *)(param_1 + 400),*(int *)(param_1 + 0x130),0);
    iVar9 = 0;
  }
  iVar7 = 0;
  while( true ) {
    do {
      uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&uStack_186a,1,2,0);
      uVar3 = uStack_186a;
      if (((int)uVar6 != 0) ||
         (uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_1868,1,1,0), (int)uVar6 != 0)
         ) goto LAB_100624e3c;
      uVar1 = (uint)uVar3;
      uVar6 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),uVar1 - 1,1);
      if ((int)uVar6 != 0) goto LAB_100624e3c;
      FUN_10061e218(auStack_1888,auStack_1868,uVar1);
      iVar4 = FUN_1006204a8(param_1 + 0x198,auStack_1888);
    } while (iVar4 < 0);
    if (iVar7 != 0) {
      iVar9 = iVar9 + (iVar4 + iVar7 >> 2);
    }
    iVar5 = FUN_1006217e0(param_1 + 0x198,1);
    if ((int)param_3 <= iVar9 + (iVar5 + iVar4 >> 2)) break;
    FUN_10061e218(auStack_1888,auStack_1868,uVar1);
    FUN_100620534(*(undefined8 *)(param_1 + 0x1d0),auStack_1888,0);
    uVar6 = FUN_1006202e4(*(undefined8 *)(param_1 + 0x1d0),0,0);
    FUN_100620470(*(undefined8 *)(param_1 + 0x1d0),uVar6);
    iVar7 = iVar4;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar4 + iVar7 >> 2;
  }
  iVar9 = iVar9 - iVar7;
  FUN_1005d1d28(*(undefined8 *)(param_1 + 400),-2 - uVar1,1);
  if (iVar9 < (int)param_3) goto LAB_100624d80;
  uVar6 = 0;
  goto LAB_100624e3c;
LAB_100624d80:
  do {
    iVar4 = param_3 - iVar9;
    iVar5 = FUN_1006202e4(*(undefined8 *)(param_1 + 0x1d0),0,0);
    iVar7 = iVar4;
    if (iVar5 <= iVar4) {
      iVar7 = iVar5;
    }
    FUN_100620470(*(undefined8 *)(param_1 + 0x1d0),iVar7);
    if (iVar7 < iVar4) {
      uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&uStack_186a,1,2,0);
      uVar3 = uStack_186a;
      if ((int)uVar6 != 0) break;
      if (0x1800 < uStack_186a) {
        uVar6 = 0x1c;
        break;
      }
      uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_1868,1,uStack_186a,0);
      if ((int)uVar6 != 0) break;
      FUN_10061e218(auStack_18a0,auStack_1868,uVar3);
      FUN_100620534(*(undefined8 *)(param_1 + 0x1d0),auStack_18a0,1);
    }
    uVar6 = 0;
    iVar9 = iVar7 + iVar9;
  } while (iVar9 < (int)param_3);
LAB_100624e3c:
  if (lVar8 != lStack_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6);
  }
  return;
}




undefined8 FUN_100623d10(undefined8 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  if (param_3 != (int *)0x0) {
    *param_3 = param_2 * 0x1810 + 0x50;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return 0;
}




void FUN_100623d40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined4 *local_28;
  
  *(undefined8 *)(param_1 + 0x1d0) = param_5;
  local_28 = (undefined4 *)0x0;
  iVar1 = (**(code **)(param_6 + 0x110))(param_6,param_4,&local_28,0);
  if (iVar1 == 0) {
    FUN_1006242ec(param_1,param_2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x108),*local_28,
                  local_28 + 2);
  }
  return;
}




undefined8 FUN_100623da8(void)

{
  return 0x13;
}




undefined8 FUN_100623db0(long param_1)

{
  if (*(long *)(param_1 + 0x1d8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1d8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                  ,0xde);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  return 0;
}




undefined4 FUN_100623dfc(uint param_1,int param_2,int param_3,char *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_1778 [24];
  long local_1760;
  long local_1758;
  undefined8 uStack_1750;
  undefined8 local_1748;
  undefined8 uStack_1740;
  undefined8 local_1738;
  undefined8 *local_1730;
  char local_1728 [5824];
  long local_68;
  
  lVar11 = *(long *)PTR____stack_chk_guard_101444218;
  uVar10 = *(undefined8 *)(PTR_DAT_10186d408 + 0x58);
  local_68 = lVar11;
  FUN_1005dbee4(uVar10);
  for (ppuVar7 = (undefined **)PTR_LOOP_101872528; ppuVar7 != &PTR_LOOP_101872528;
      ppuVar7 = (undefined **)*ppuVar7) {
    if (*(int *)(ppuVar7 + 3) == param_3) {
      uVar6 = 0;
      *(int *)((long)ppuVar7 + 0x34) = *(int *)((long)ppuVar7 + 0x34) + 1;
      goto LAB_1006240a4;
    }
  }
  puVar3 = (undefined8 *)
           FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x38,
                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                         ,0x106,0);
  *puVar3 = puVar3;
  puVar3[1] = puVar3;
  puVar3[2] = 0;
  if (puVar3 == (undefined8 *)0x0) {
    uVar6 = 0x26;
    goto LAB_1006240a4;
  }
  *(int *)(puVar3 + 3) = param_3;
  *(undefined4 *)((long)puVar3 + 0x34) = 1;
  if (param_4 == (char *)0x0) {
    lVar8 = 0;
    piVar9 = &DAT_1014a36cc;
    do {
      if (*piVar9 == param_3) {
        iVar2 = (int)lVar8;
        if (iVar2 != -1) {
          lVar8 = (long)iVar2 * 0x20;
          param_5 = *(int *)(&DAT_1014a36c8 + lVar8);
          param_4 = (&PTR_DAT_1014a36c0)[(long)iVar2 * 4];
          if (*(void **)(&DAT_1014a36d0 + lVar8) != (void *)0x0) {
            _memcpy(local_1728,*(void **)(&DAT_1014a36d0 + lVar8),(long)param_5);
            _memcpy(local_1728 + *(int *)(&DAT_1014a36d8 + lVar8),param_4,
                    (long)*(int *)(&DAT_1014a36dc + lVar8));
            param_4 = local_1728;
          }
          goto LAB_100623f54;
        }
        break;
      }
      lVar8 = lVar8 + 1;
      piVar9 = piVar9 + 8;
    } while (lVar8 < 0xa1);
    uVar4 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
    uVar5 = 299;
LAB_10062409c:
    FUN_1005d7f1c(uVar4,puVar3,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                  ,uVar5);
    uVar6 = 0x1c;
  }
  else {
LAB_100623f54:
    if ((((*param_4 != '\x05') || (param_4[1] != 'v')) || (param_4[2] != 'o')) ||
       (((param_4[3] != 'r' || (param_4[4] != 'b')) || ((param_4[5] != 'i' || (param_4[6] != 's'))))
       )) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar3,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                    ,0x144);
      uVar6 = 0x13;
      goto LAB_1006240a4;
    }
    local_1738 = 0;
    local_1730 = (undefined8 *)0x0;
    local_1748 = 0;
    uStack_1740 = 0;
    uStack_1750 = 0;
    local_1760 = (ulong)param_1 << 0x20;
    local_1758 = (long)param_2;
    FUN_10061e218(auStack_1778,param_4 + 7,(long)(param_5 + -7));
    iVar2 = FUN_100621b30(&local_1760,auStack_1778);
    if (iVar2 < 0) {
      uVar4 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
      uVar5 = 0x15e;
    }
    else {
      uVar1 = iVar2 + 0x6fU & 0xfffffff0;
      *(uint *)(puVar3 + 6) = uVar1;
      lVar8 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar2 + 0x6fU | 0xf,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                            ,0x17d,0,0);
      puVar3[5] = lVar8;
      if (lVar8 == 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar3,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                      ,0x180);
        uVar6 = 0x26;
        goto LAB_1006240a4;
      }
      DAT_101ea47f0 = (undefined8 *)(lVar8 + 0xfU & 0xfffffffffffffff0);
      if ((int)uVar1 < 1 || DAT_101ea47f0 == (undefined8 *)0x0) {
        local_1730 = (undefined8 *)0x0;
        DAT_101ea47f8 = uVar1;
      }
      else {
        local_1730 = DAT_101ea47f0;
        DAT_101ea47f0 = DAT_101ea47f0 + 0xb;
        DAT_101ea47f8 = uVar1 - 0x58;
      }
      puVar3[4] = local_1730;
      *local_1730 = 0x100;
      local_1730[1] = 0x800;
      FUN_10061e218(auStack_1778,param_4 + 7,(long)(param_5 + -7));
      iVar2 = FUN_1006217fc(&local_1760,auStack_1778);
      if (-1 < iVar2) {
        DAT_101ea47f0 = (undefined8 *)0x0;
        if ((int)DAT_101ea47f8 < 0x11) {
          *puVar3 = &PTR_LOOP_101872528;
          puVar3[1] = PTR_LOOP_101872530;
          PTR_LOOP_101872530 = (undefined *)puVar3;
          *(undefined8 **)puVar3[1] = puVar3;
          uVar6 = 0;
          if (iVar2 != 0) {
            uVar6 = 0xd;
          }
          goto LAB_1006240a4;
        }
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar3[5],
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                      ,0x19a);
        uVar4 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
        uVar5 = 0x19b;
        goto LAB_10062409c;
      }
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar3[5],
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                    ,0x191);
      uVar4 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
      uVar5 = 0x192;
    }
    FUN_1005d7f1c(uVar4,puVar3,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                  ,uVar5);
    uVar6 = 0xd;
  }
LAB_1006240a4:
  FUN_1005dbf14(uVar10);
  if (lVar11 == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100624208(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(PTR_DAT_10186d408 + 0x58);
  FUN_1005dbee4(uVar3);
  ppuVar4 = (undefined **)PTR_LOOP_101872528;
  if ((undefined **)PTR_LOOP_101872528 == &PTR_LOOP_101872528) {
    uVar5 = 0x1c;
  }
  else {
    do {
      if (*(int *)(ppuVar4 + 3) == param_1) {
        iVar2 = *(int *)((long)ppuVar4 + 0x34) + -1;
        *(int *)((long)ppuVar4 + 0x34) = iVar2;
        if (iVar2 == 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),ppuVar4[5],
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                        ,0x1c2);
          puVar1 = (undefined8 *)ppuVar4[1];
          *puVar1 = *ppuVar4;
          *(undefined8 **)(*ppuVar4 + 8) = puVar1;
          *ppuVar4 = (undefined *)ppuVar4;
          ppuVar4[1] = (undefined *)ppuVar4;
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),ppuVar4,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsbvorbis.cpp"
                        ,0x1c4);
        }
        uVar5 = 0;
        goto LAB_1006242d0;
      }
      ppuVar4 = (undefined **)*ppuVar4;
    } while (ppuVar4 != &PTR_LOOP_101872528);
    uVar5 = 0x1c;
  }
LAB_1006242d0:
  FUN_1005dbf14(uVar3);
  return uVar5;
}




undefined8 FUN_1006242ec(long param_1,ulong param_2,int param_3,int param_4,undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  *(int *)(param_1 + 0x1e4) = param_4;
  *(undefined8 *)(param_1 + 0x1f8) = param_5;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  iVar5 = (int)param_2;
  *(int *)(param_1 + 0x19c) = iVar5;
  *(long *)(param_1 + 0x1a0) = (long)param_3;
  uVar6 = *(undefined8 *)(PTR_DAT_10186d408 + 0x58);
  FUN_1005dbee4(uVar6);
  ppuVar7 = (undefined **)PTR_LOOP_101872528;
  while( true ) {
    if (ppuVar7 == &PTR_LOOP_101872528) {
      FUN_1005dbf14(uVar6);
      return 0x1c;
    }
    if (*(int *)(ppuVar7 + 3) == param_4) break;
    ppuVar7 = (undefined **)*ppuVar7;
  }
  FUN_1005dbf14(uVar6);
  puVar2 = ppuVar7[4];
  *(undefined **)(param_1 + 0x1e8) = puVar2;
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(ppuVar7 + 6);
  *(undefined **)(param_1 + 0x1c8) = puVar2;
  plVar1 = *(long **)(param_1 + 0x1d0);
  plVar1[2] = (long)(plVar1 + 10);
  uVar3 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
  lVar4 = uVar3 + 0x50;
  plVar1[1] = (long)plVar1 + lVar4;
  if (iVar5 < 1) {
    *(long **)(param_1 + 0x1d0) = plVar1;
    *plVar1 = param_1 + 0x198;
    FUN_10061fe3c();
  }
  else {
    uVar3 = (long)plVar1 + uVar3 + lVar4 + 0xf & 0xfffffffffffffff0;
    plVar1[10] = uVar3;
    *(ulong *)((long)plVar1 + lVar4) = uVar3 + 0x800;
    if (iVar5 != 1) {
      lVar4 = 1;
      do {
        *(ulong *)(plVar1[2] + lVar4 * 8) = uVar3 + 0x1800;
        *(ulong *)(plVar1[1] + lVar4 * 8) = uVar3 + 0x2000;
        lVar4 = lVar4 + 1;
        uVar3 = uVar3 + 0x1800;
      } while (iVar5 != (int)lVar4);
    }
    *(long **)(param_1 + 0x1d0) = plVar1;
    *plVar1 = param_1 + 0x198;
    FUN_10061fe3c();
    if (0 < iVar5) {
      lVar4 = 0;
      do {
        _bzero(*(void **)(*(long *)(*(long *)(param_1 + 0x1d0) + 0x10) + lVar4 * 8),0x800);
        _bzero(*(void **)(*(long *)(*(long *)(param_1 + 0x1d0) + 8) + lVar4 * 8),0x1000);
        lVar4 = lVar4 + 1;
      } while (iVar5 != (int)lVar4);
    }
  }
  return 0;
}




undefined8 FUN_100624498(long param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  
  param_2[2] = (long)(param_2 + 10);
  uVar1 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3;
  lVar2 = uVar1 + 0x50;
  param_2[1] = (long)param_2 + lVar2;
  if (0 < (int)param_3) {
    uVar1 = (long)param_2 + uVar1 + lVar2 + 0xf & 0xfffffffffffffff0;
    param_2[10] = uVar1;
    *(ulong *)((long)param_2 + lVar2) = uVar1 + 0x800;
    if (param_3 != 1) {
      lVar2 = 1;
      do {
        *(ulong *)(param_2[2] + lVar2 * 8) = uVar1 + 0x1800;
        *(ulong *)(param_2[1] + lVar2 * 8) = uVar1 + 0x2000;
        lVar2 = lVar2 + 1;
        uVar1 = uVar1 + 0x1800;
      } while (param_3 != (uint)lVar2);
    }
  }
  *(long **)(param_1 + 0x1d0) = param_2;
  *param_2 = param_1 + 0x198;
  return 0;
}




undefined8 FUN_100624528(int param_1,int *param_2,undefined4 *param_3)

{
  if (param_2 != (int *)0x0) {
    *param_2 = param_1 * 0x1810 + 0x50;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}




int FUN_100624558(int param_1)

{
  return param_1 * 0x1810 + 0x50;
}




undefined8 FUN_100624574(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x10) = param_1 + 0x50;
  uVar1 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
  lVar2 = uVar1 + 0x50;
  *(long *)(param_1 + 8) = param_1 + lVar2;
  if (0 < (int)param_2) {
    uVar1 = uVar1 + lVar2 + param_1 + 0xf & 0xfffffffffffffff0;
    *(ulong *)(param_1 + 0x50) = uVar1;
    **(long **)(param_1 + 8) = uVar1 + 0x800;
    if (param_2 != 1) {
      lVar2 = 1;
      do {
        *(ulong *)(*(long *)(param_1 + 0x10) + lVar2 * 8) = uVar1 + 0x1800;
        *(ulong *)(*(long *)(param_1 + 8) + lVar2 * 8) = uVar1 + 0x2000;
        lVar2 = lVar2 + 1;
        uVar1 = uVar1 + 0x1800;
      } while (param_2 != (uint)lVar2);
    }
  }
  return 0;
}




undefined8
FUN_1006245fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  if (param_5 != 0) {
    FUN_100624634(param_2,param_3);
  }
  *(undefined8 *)(param_1 + 0x1c8) = param_2;
  return 0;
}




undefined8 FUN_100624634(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar9 = param_1 + 0x67U & 0xfffffffffffffff0;
  *(ulong *)(param_1 + 0x50) = uVar9;
  iVar5 = *(int *)(param_1 + 0x20);
  lVar14 = uVar9 + (long)iVar5 * 0x40;
  if (0 < iVar5) {
    lVar8 = 0;
    pcVar6 = (char *)(uVar9 + 0x3a);
    do {
      *(ulong *)(pcVar6 + -0x32) = lVar14 + 0xfU & 0xfffffffffffffff0;
      iVar13 = (int)*(short *)(pcVar6 + -8);
      uVar9 = (lVar14 + 0xfU | 0xf) + (long)(int)((uint)(byte)pcVar6[-2] * (iVar13 + 1)) &
              0xfffffffffffffff0;
      if (pcVar6[-4] == '\0') {
        *(ulong *)(pcVar6 + -0x12) = uVar9;
        lVar14 = (long)iVar13 << 1;
      }
      else {
        *(ulong *)(pcVar6 + -0x1a) = uVar9;
        lVar14 = (long)(int)((uint)(byte)pcVar6[-1] * iVar13);
      }
      uVar9 = (uVar9 | 3) + lVar14 & 0xfffffffffffffffc;
      *(ulong *)(pcVar6 + -0x2a) = uVar9;
      uVar9 = (long)iVar13 + uVar9 + 3 & 0xfffffffffffffffc;
      *(ulong *)(pcVar6 + -0x22) = uVar9;
      lVar14 = uVar9 + (2L << ((long)*pcVar6 & 0x3fU));
      lVar8 = lVar8 + 1;
      pcVar6 = pcVar6 + 0x40;
    } while (lVar8 < iVar5);
  }
  uVar9 = lVar14 + 3U & 0xfffffffffffffffc;
  *(ulong *)(param_1 + 0x40) = uVar9;
  lVar8 = (long)*(int *)(param_1 + 0x18);
  lVar14 = uVar9 + lVar8 * 8;
  *(long *)(param_1 + 0x38) = lVar14;
  uVar10 = lVar14 + lVar8 + 3U & 0xfffffffffffffffc;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar14 = 0;
    do {
      *(ulong *)(uVar9 + lVar14 * 8) = uVar10;
      uVar9 = *(ulong *)(param_1 + 0x40);
      puVar11 = *(ulong **)(uVar9 + lVar14 * 8);
      uVar12 = uVar10 + 0x40;
      puVar11[1] = uVar12;
      iVar5 = (int)puVar11[6];
      uVar15 = (ulong)iVar5;
      uVar17 = uVar10 + 0x43 + uVar15;
      uVar16 = uVar17 & 0xfffffffffffffffc;
      if (iVar5 < 1) {
        uVar2 = 0xffffffff;
      }
      else {
        if (iVar5 == 0) {
          uVar18 = 0;
          uVar4 = 0xffffffff;
        }
        else {
          uVar18 = uVar15 & 0xfffffffffffffffe;
          if (uVar18 == 0) {
            uVar18 = 0;
            uVar2 = 0xffffffff;
            uVar4 = 0xffffffff;
          }
          else {
            pcVar6 = (char *)(uVar10 + 0x41);
            uVar7 = uVar18;
            uVar1 = 0xffffffff;
            uVar3 = 0xffffffff;
            do {
              uVar2 = (uint)(byte)pcVar6[-1];
              if ((int)(uint)(byte)pcVar6[-1] <= (int)uVar1) {
                uVar2 = uVar1;
              }
              uVar4 = (int)*pcVar6;
              if ((int)*pcVar6 <= (int)uVar3) {
                uVar4 = uVar3;
              }
              uVar7 = uVar7 - 2;
              pcVar6 = pcVar6 + 2;
              uVar1 = uVar2;
              uVar3 = uVar4;
            } while (uVar7 != 0);
          }
          if ((int)uVar2 <= (int)uVar4) {
            uVar2 = uVar4;
          }
          uVar4 = uVar2;
          if (uVar15 == uVar18) goto LAB_1006247e0;
        }
        do {
          uVar2 = (int)*(char *)(uVar12 + uVar18);
          if ((int)*(char *)(uVar12 + uVar18) <= (int)uVar4) {
            uVar2 = uVar4;
          }
          uVar18 = uVar18 + 1;
          uVar4 = uVar2;
        } while ((long)uVar18 < (long)uVar15);
      }
LAB_1006247e0:
      *puVar11 = uVar16;
      uVar17 = (uVar17 | 3) + (long)(int)(uVar2 + 1) * 0xb;
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      else {
        if (iVar5 == 0) {
          uVar18 = 0;
          iVar5 = 0;
        }
        else {
          uVar18 = uVar15 & 0xfffffffffffffffe;
          if (uVar18 == 0) {
            uVar18 = 0;
            iVar13 = 0;
            iVar5 = 0;
          }
          else {
            iVar13 = 0;
            iVar5 = 0;
            pcVar6 = (char *)(uVar10 + 0x41);
            uVar10 = uVar18;
            do {
              iVar13 = *(char *)(uVar16 + ((long)pcVar6[-1] & 0xffffffffU) * 0xb) + iVar13;
              iVar5 = *(char *)(uVar16 + ((long)*pcVar6 & 0xffffffffU) * 0xb) + iVar5;
              uVar10 = uVar10 - 2;
              pcVar6 = pcVar6 + 2;
            } while (uVar10 != 0);
          }
          iVar5 = iVar5 + iVar13;
          if (uVar15 == uVar18) goto LAB_1006248a0;
        }
        do {
          iVar5 = *(char *)(uVar16 + ((long)*(char *)(uVar12 + uVar18) & 0xffffffffU) * 0xb) + iVar5
          ;
          uVar18 = uVar18 + 1;
        } while ((long)uVar18 < (long)uVar15);
      }
LAB_1006248a0:
      uVar10 = (uVar17 | 3) + (long)(iVar5 + 2) * 2 & 0xfffffffffffffffc;
      puVar11[2] = uVar17 & 0xfffffffffffffffc;
      puVar11[3] = uVar10;
      uVar10 = (long)(iVar5 + 2) + uVar10 + 3 & 0xfffffffffffffffc;
      puVar11[5] = uVar10;
      uVar10 = (long)iVar5 + uVar10 + 3 & 0xfffffffffffffffc;
      puVar11[4] = uVar10;
      lVar14 = lVar14 + 1;
      uVar10 = uVar10 + (long)iVar5 + 3 & 0xfffffffffffffffc;
    } while (lVar14 < lVar8);
  }
  *(ulong *)(param_1 + 0x48) = uVar10;
  iVar5 = *(int *)(param_1 + 0x1c);
  lVar14 = uVar10 + (long)iVar5 * 0x30;
  if (0 < iVar5) {
    lVar8 = 0;
    pcVar6 = (char *)(uVar10 + 0x2c);
    do {
      *(long *)(pcVar6 + -0x24) = lVar14;
      uVar9 = lVar14 + *pcVar6 + 3U & 0xfffffffffffffffc;
      *(ulong *)(pcVar6 + -0x1c) = uVar9;
      lVar14 = uVar9 + (long)*pcVar6 * 8;
      lVar8 = lVar8 + 1;
      pcVar6 = pcVar6 + 0x30;
    } while (lVar8 < iVar5);
  }
  *(long *)(param_1 + 0x30) = lVar14;
  iVar5 = *(int *)(param_1 + 0x14);
  uVar9 = lVar14 + (long)iVar5 * 0x28;
  if (0 < iVar5) {
    lVar8 = 0;
    puVar11 = (ulong *)(lVar14 + 0x10);
    do {
      if ((int)puVar11[1] != 0) {
        puVar11[2] = uVar9;
        uVar9 = (uVar9 | 3) + (long)(int)puVar11[1] * 2 & 0xfffffffffffffffc;
      }
      if (1 < (int)puVar11[-2]) {
        puVar11[-1] = uVar9;
        uVar9 = (long)param_2 + 3 + uVar9 & 0xfffffffffffffffc;
      }
      *puVar11 = uVar9;
      lVar8 = lVar8 + 1;
      uVar9 = uVar9 + (long)(int)puVar11[-2] * 2 + 3 & 0xfffffffffffffffc;
      puVar11 = puVar11 + 5;
    } while (lVar8 < iVar5);
  }
  *(ulong *)(param_1 + 0x28) = uVar9;
  return 0;
}




undefined8 FUN_1006249cc(long param_1,uint *param_2)

{
  undefined8 uVar1;
  ushort local_22;
  
  uVar1 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_22,1,2,0);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    *param_2 = (uint)local_22;
  }
  return uVar1;
}




void FUN_100624a20(long param_1,long param_2,ulong param_3,int *param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_1888 [30];
  ushort local_186a;
  undefined1 auStack_1868 [6144];
  long local_68;
  
  iVar6 = 0;
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  *param_4 = 0;
  local_68 = lVar5;
  if ((int)param_3 != 0) {
    iVar6 = 0;
    do {
      iVar3 = FUN_1006202e4(*(undefined8 *)(param_1 + 0x1d0),0,0);
      if (iVar3 != 0) {
        uVar4 = FUN_1006202e4(*(undefined8 *)(param_1 + 0x1d0),
                              param_2 + (ulong)(uint)(*(int *)(*(long *)(param_1 + 8) + 0x104) *
                                                     iVar6) * 2,param_3);
        iVar6 = (int)uVar4 + iVar6;
        FUN_100620470(*(undefined8 *)(param_1 + 0x1d0),uVar4);
        uVar1 = (int)param_3 - (int)uVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0) break;
      }
      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_186a,1,2,0);
      uVar2 = local_186a;
      if ((int)uVar4 != 0) goto LAB_100624b84;
      if (0x1800 < local_186a) {
        uVar4 = 0x1c;
        goto LAB_100624b84;
      }
      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_1868,1,local_186a,0);
      if ((int)uVar4 != 0) goto LAB_100624b84;
      FUN_10061e218(auStack_1888,auStack_1868,uVar2);
      iVar3 = FUN_100620534(*(undefined8 *)(param_1 + 0x1d0),auStack_1888,1);
      if (iVar3 != 0) {
        uVar4 = 0xd;
        goto LAB_100624b84;
      }
      uVar4 = FUN_1006202e4(*(undefined8 *)(param_1 + 0x1d0),
                            param_2 + (ulong)(uint)(*(int *)(*(long *)(param_1 + 8) + 0x104) * iVar6
                                                   ) * 2,param_3);
      iVar6 = (int)uVar4 + iVar6;
      FUN_100620470(*(undefined8 *)(param_1 + 0x1d0),uVar4);
      uVar1 = (int)param_3 - (int)uVar4;
      param_3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  uVar4 = 0;
  *param_4 = iVar6;
LAB_100624b84:
  if (lVar5 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




void FUN_100624bb4(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_18a0 [24];
  undefined1 auStack_1888 [30];
  ushort local_186a;
  undefined1 auStack_1868 [6144];
  long local_68;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar8;
  FUN_10061fe3c(*(undefined8 *)(param_1 + 0x1d0));
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x108);
  if (uVar1 < param_3) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_3 / uVar1;
    }
    uVar2 = uVar2 - 1;
    iVar9 = *(int *)(*(long *)(param_1 + 0x1f8) +
                    (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3));
    FUN_1005d1d28(*(undefined8 *)(param_1 + 400),
                  *(int *)(param_1 + 0x130) +
                  *(int *)(*(long *)(param_1 + 0x1f8) + ((long)(int)uVar2 << 3 | 4U)),0);
  }
  else {
    FUN_1005d1d28(*(undefined8 *)(param_1 + 400),*(int *)(param_1 + 0x130),0);
    iVar9 = 0;
  }
  iVar7 = 0;
  while( true ) {
    do {
      uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_186a,1,2,0);
      uVar3 = local_186a;
      if (((int)uVar6 != 0) ||
         (uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_1868,1,1,0), (int)uVar6 != 0)
         ) goto LAB_100624e3c;
      uVar1 = (uint)uVar3;
      uVar6 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),uVar1 - 1,1);
      if ((int)uVar6 != 0) goto LAB_100624e3c;
      FUN_10061e218(auStack_1888,auStack_1868,uVar1);
      iVar4 = FUN_1006204a8(param_1 + 0x198,auStack_1888);
    } while (iVar4 < 0);
    if (iVar7 != 0) {
      iVar9 = iVar9 + (iVar4 + iVar7 >> 2);
    }
    iVar5 = FUN_1006217e0(param_1 + 0x198,1);
    if ((int)param_3 <= iVar9 + (iVar5 + iVar4 >> 2)) break;
    FUN_10061e218(auStack_1888,auStack_1868,uVar1);
    FUN_100620534(*(undefined8 *)(param_1 + 0x1d0),auStack_1888,0);
    uVar6 = FUN_1006202e4(*(undefined8 *)(param_1 + 0x1d0),0,0);
    FUN_100620470(*(undefined8 *)(param_1 + 0x1d0),uVar6);
    iVar7 = iVar4;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar4 + iVar7 >> 2;
  }
  iVar9 = iVar9 - iVar7;
  FUN_1005d1d28(*(undefined8 *)(param_1 + 400),-2 - uVar1,1);
  if (iVar9 < (int)param_3) goto LAB_100624d80;
  uVar6 = 0;
  goto LAB_100624e3c;
LAB_100624d80:
  do {
    iVar4 = param_3 - iVar9;
    iVar5 = FUN_1006202e4(*(undefined8 *)(param_1 + 0x1d0),0,0);
    iVar7 = iVar4;
    if (iVar5 <= iVar4) {
      iVar7 = iVar5;
    }
    FUN_100620470(*(undefined8 *)(param_1 + 0x1d0),iVar7);
    if (iVar7 < iVar4) {
      uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_186a,1,2,0);
      uVar3 = local_186a;
      if ((int)uVar6 != 0) break;
      if (0x1800 < local_186a) {
        uVar6 = 0x1c;
        break;
      }
      uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_1868,1,local_186a,0);
      if ((int)uVar6 != 0) break;
      FUN_10061e218(auStack_18a0,auStack_1868,uVar3);
      FUN_100620534(*(undefined8 *)(param_1 + 0x1d0),auStack_18a0,1);
    }
    uVar6 = 0;
    iVar9 = iVar7 + iVar9;
  } while (iVar9 < (int)param_3);
LAB_100624e3c:
  if (lVar8 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6);
  }
  return;
}




void FUN_100624e6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined4 *local_28;
  
  *(undefined8 *)(param_1 + 0x1d0) = param_5;
  local_28 = (undefined4 *)0x0;
  iVar1 = (**(code **)(param_6 + 0x110))(param_6,param_4,&local_28,0);
  if (iVar1 == 0) {
    FUN_1006242ec(param_1,param_2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x108),*local_28,
                  local_28 + 2);
  }
  return;
}




undefined8 FUN_100624ed4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_10062ad38(param_1,&local_150,0);
  if (((int)uVar1 == 0) && (uVar1 = (**(code **)*local_150)(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,4,param_1,"ChannelControl::getSystemObject",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100624fa8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_148;
  long *local_140;
  undefined1 local_138 [256];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_148 = 0;
  local_38 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_140,&local_148);
  if (((int)uVar2 == 0) && (uVar2 = (**(code **)(*local_140 + 8))(), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::stop",local_138);
  }
  if ((local_148 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_148 = 0;
  }
  if (lVar3 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625078(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x10))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562e5c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::setPaused",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625164(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x18))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056322c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::getPaused",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625250(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar2 = FUN_10062ad38(param_2,&local_160,&local_168);
  if ((int)uVar2 == 0) {
    uVar2 = (**(code **)(*local_160 + 0x20))(param_1,local_160,0);
    uVar3 = 0;
    if ((int)uVar2 == 0) goto LAB_100625304;
  }
  uVar3 = uVar2;
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_158,0x100);
    FUN_1005acff8(uVar2,4,param_2,"ChannelControl::setVolume",auStack_158);
  }
LAB_100625304:
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}




undefined8 FUN_100625348(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x28))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::getVolume",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625434(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x30))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562e5c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::setVolumeRamp",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625520(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x38))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056322c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::getVolumeRamp",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10062560c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x40))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::getAudibility",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006256f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_2,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = (**(code **)(*local_150 + 0x48))(param_1), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_148,0x100);
    FUN_1005acff8(uVar2,4,param_2,"ChannelControl::setPitch",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006257e4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x50))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::getPitch",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006258d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x58))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562e5c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::setMute",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006259bc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x60))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056322c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::getMute",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_2,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 0x68))(param_1,local_170,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_3);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    FUN_100562dfc(param_1,auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,4,param_2,"ChannelControl::setReverbProperties",auStack_168);
  }
  if ((local_178 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0x70))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005631e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::getReverbProperties",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625d10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_2,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = (**(code **)(*local_150 + 0x78))(param_1), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_148,0x100);
    FUN_1005acff8(uVar2,4,param_2,"ChannelControl::setLowPassGain",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625dfc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x80))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::getLowPassGain",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625ee8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x88))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d60(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::setMode",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100625fd4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x90))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100563124(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::getMode",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006260c0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x98))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562e5c(auStack_148,0x100,param_2 != 0);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::setCallback",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006261b0(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0xa0))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056322c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::isPlaying",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006262a8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_2,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = (**(code **)(*local_150 + 0xa8))(param_1), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_148,0x100);
    FUN_1005acff8(uVar2,4,param_2,"ChannelControl::setPan",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_100626394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_188;
  long *local_180;
  undefined1 auStack_178 [256];
  long local_78;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_188 = 0;
  local_78 = lVar3;
  uVar2 = FUN_10062ad38(param_9,&local_180,&local_188);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_180 + 0xb0))
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_180,1
                        ), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10063d7a8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_178,0x100)
    ;
    FUN_1005acff8(uVar2,4,param_9,"ChannelControl::setMixLevelsOutput",auStack_178);
  }
  if ((local_188 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_188 = 0;
  }
  if (lVar3 == local_78) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006264f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0xb8))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562d14(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::setMixLevelsInput",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_100626620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 0xc0))(local_170,param_2,param_3,param_4,param_5,1),
     (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::setMixMatrix",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1006267c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 200))(local_170,param_2,param_3,param_4,param_5),
     (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::getMixMatrix",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10062695c(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0xd0))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    if (param_2 != (ulong *)0x0) {
      *param_2 = *param_2 >> 0x14;
    }
    if (param_3 != (ulong *)0x0) {
      *param_3 = *param_3 >> 0x14;
    }
    uVar3 = FUN_10062ad38(param_1,&local_160,0);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
      goto LAB_100626a74;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631a4(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005631a4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::getDSPClock",auStack_158);
  }
LAB_100626a74:
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100626aac(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    param_2 = param_2 << 0x14;
    param_3 = param_3 << 0x14;
    uVar3 = (**(code **)(*local_170 + 0xd8))(local_170,param_2,param_3,param_4);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
      goto LAB_100626bd8;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562dd4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562dd4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562e5c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::setDelay",auStack_168);
  }
LAB_100626bd8:
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100626c20(undefined8 param_1,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 0xe0))(local_170,param_2,param_3,param_4), (int)uVar3 == 0))
  {
    if (param_2 != (ulong *)0x0) {
      *param_2 = *param_2 >> 0x14;
    }
    if (param_3 == (ulong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      *param_3 = *param_3 >> 0x14;
    }
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631a4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631a4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056322c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::getDelay",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100626db4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_2,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    param_3 = param_3 << 0x14;
    uVar3 = (**(code **)(*local_170 + 0xe8))(param_1,local_170,param_3);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
      goto LAB_100626ea8;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562dd4(auStack_168,0x100,param_3);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    FUN_100562dfc(param_1,auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,4,param_2,"ChannelControl::addFadePoint",auStack_168);
  }
LAB_100626ea8:
  if ((local_178 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100626ef0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_2,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    param_3 = param_3 << 0x14;
    uVar3 = (**(code **)(*local_170 + 0xf0))(param_1,local_170,param_3);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
      goto LAB_100626fe4;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562dd4(auStack_168,0x100,param_3);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    FUN_100562dfc(param_1,auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,4,param_2,"ChannelControl::setFadePointRamp",auStack_168);
  }
LAB_100626fe4:
  if ((local_178 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10062702c(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if ((int)uVar3 == 0) {
    param_2 = param_2 << 0x14;
    param_3 = param_3 << 0x14;
    uVar3 = (**(code **)(*local_160 + 0xf8))(local_160,param_2,param_3);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
      goto LAB_100627120;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562dd4(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562dd4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::removeFadePoints",auStack_158);
  }
LAB_100627120:
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100627164(undefined8 param_1,int *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar8;
  uVar4 = FUN_10062ad38(param_1,&local_170,&local_178);
  if ((int)uVar4 == 0) {
    uVar4 = (**(code **)(*local_170 + 0x100))(local_170,param_2,param_3,param_4);
    if (((param_3 != 0) && ((int)uVar4 == 0)) && (iVar3 = *param_2, iVar3 != 0)) {
      uVar1 = (ulong)(iVar3 - 1) + 1;
      uVar5 = uVar1 & 0x1fffffffe;
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar7 = (ulong)(iVar3 - 1) + 1 & 0xfffffffffffffffe;
        puVar6 = (ulong *)(param_3 + 8);
        do {
          puVar6[-1] = puVar6[-1] >> 0x14;
          *puVar6 = *puVar6 >> 0x14;
          uVar7 = uVar7 - 2;
          puVar6 = puVar6 + 2;
        } while (uVar7 != 0);
      }
      if (uVar1 != uVar5) {
        iVar3 = iVar3 - (int)uVar5;
        puVar6 = (ulong *)(param_3 + uVar5 * 8);
        do {
          *puVar6 = *puVar6 >> 0x14;
          iVar3 = iVar3 + -1;
          puVar6 = puVar6 + 1;
        } while (iVar3 != 0);
      }
    }
    if ((int)uVar4 == 0) {
      uVar4 = 0;
      goto LAB_100627300;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_100563124(auStack_168,0x100,param_2);
    iVar3 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar3 = iVar3 + iVar2;
    iVar2 = FUN_1005631a4(auStack_168 + iVar3,0x100 - iVar3,param_3);
    iVar3 = iVar3 + iVar2;
    iVar2 = FUN_100562eec(auStack_168 + iVar3,0x100 - iVar3,", ");
    FUN_1005631e4(auStack_168 + (iVar3 + iVar2),0x100 - (iVar3 + iVar2),param_4);
    FUN_1005acff8(uVar4,4,param_1,"ChannelControl::getFadePoints",auStack_168);
  }
LAB_100627300:
  if ((local_178 == 0) || (iVar3 = FUN_100570c30(), iVar3 == 0)) {
    local_178 = 0;
  }
  if (lVar8 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}




undefined8 FUN_100627348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0x118))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::getDSP",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100627478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0x108))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::addDSP",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006275a8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x110))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::removeDSP",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100627694(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x120))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::getNumDSPs",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100627780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0x128))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562d14(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::setDSPIndex",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006278b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0x130))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005630e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::getDSPIndex",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006279e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x138))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::overridePanDSP",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_100627acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 0x140))(local_170,param_2,param_3,param_4), (int)uVar3 == 0)
     ) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100563284(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563284(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100563284(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::set3DAttributes",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_100627c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 0x148))(local_170,param_2,param_3,param_4), (int)uVar3 == 0)
     ) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100563284(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563284(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100563284(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::get3DAttributes",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100627da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_3,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 0x150))(param_1,param_2), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562dfc(param_1,auStack_168,0x100);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    FUN_100562dfc(param_2,auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,4,param_3,"ChannelControl::set3DMinMaxDistance",auStack_168);
  }
  if ((local_178 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100627edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0x158))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005631e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::get3DMinMaxDistance",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_10062800c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_188;
  long *local_180;
  undefined1 auStack_178 [256];
  long local_78;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_188 = 0;
  local_78 = lVar4;
  uVar3 = FUN_10062ad38(param_4,&local_180,&local_188);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_180 + 0x160))(param_1,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562dfc(param_1,auStack_178,0x100);
    iVar2 = FUN_100562eec(auStack_178 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562dfc(param_2,auStack_178 + iVar2,0x100 - iVar2);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_178 + iVar2,0x100 - iVar2,", ");
    FUN_100562dfc(param_3,auStack_178 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,4,param_4,"ChannelControl::set3DConeSettings",auStack_178);
  }
  if ((local_188 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_188 = 0;
  }
  if (lVar4 == local_78) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_100628180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 0x168))(local_170,param_2,param_3,param_4), (int)uVar3 == 0)
     ) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005631e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::get3DConeSettings",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006282ec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x170))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100563284(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::set3DConeOrientation",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006283d8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x178))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100563284(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::get3DConeOrientation",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006284c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0x180))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100563284(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562d14(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::set3DCustomRolloff",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006285f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0x188))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005630e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::get3DCustomRolloff",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100628724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_3,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 400))(param_1,param_2), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562dfc(param_1,auStack_168,0x100);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    FUN_100562dfc(param_2,auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,4,param_3,"ChannelControl::set3DOcclusion",auStack_168);
  }
  if ((local_178 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10062885c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_160 + 0x1a0))(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005631e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::get3DOcclusion",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10062898c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_2,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = (**(code **)(*local_150 + 0x1a8))(param_1), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_148,0x100);
    FUN_1005acff8(uVar2,4,param_2,"ChannelControl::set3DSpread",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100628a78(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x1b0))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::get3DSpread",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100628b64(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_2,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = (**(code **)(*local_150 + 0x1b8))(param_1), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_148,0x100);
    FUN_1005acff8(uVar2,4,param_2,"ChannelControl::set3DLevel",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100628c50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x1c0))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::get3DLevel",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100628d3c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_2,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = (**(code **)(*local_150 + 0x1c8))(param_1), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_148,0x100);
    FUN_1005acff8(uVar2,4,param_2,"ChannelControl::set3DDopplerLevel",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100628e28(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(*local_150 + 0x1d0))(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::get3DDopplerLevel",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_100628f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_3,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 0x1d8))(param_1,param_2,local_170,param_4), (int)uVar3 == 0)
     ) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562e5c(auStack_168,0x100,param_4);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562dfc(param_1,auStack_168 + iVar2,0x100 - iVar2);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562dfc(param_2,auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,4,param_3,"ChannelControl::set3DDistanceFilter",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_100629080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_10062ad38(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 0x1e0))(local_170,param_2,param_3,param_4), (int)uVar3 == 0)
     ) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056322c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005631e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,4,param_1,"ChannelControl::get3DDistanceFilter",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006291ec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_10062ce4c(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::setUserData",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006292d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_10062ad38(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_10062ce58(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,4,param_1,"ChannelControl::getUserData",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006293b4(long param_1,long param_2,undefined8 param_3,float *param_4)

{
  undefined1 auStack_48 [16];
  float local_38;
  undefined1 auStack_34 [4];
  
  if (param_4 != (float *)0x0) {
    if (param_2 == 0) {
      *param_4 = 1.0;
    }
    else {
      FUN_1005e3a84(param_2,param_3,param_4,0);
      if (0.0 < *param_4) {
        FUN_1005e39bc(param_2,auStack_48,0,0);
        FUN_1005d48c4(*(long *)(param_1 + 8) + 0x16450,param_3,auStack_48,auStack_34,&local_38);
        *param_4 = *param_4 * (1.0 - local_38);
      }
    }
  }
  return 0;
}




undefined4 FUN_100629474(undefined4 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  
  if (param_3 < 0x800000) {
    uVar1 = 0;
    if (param_3 != 0x400000) {
      uVar1 = 2;
    }
    uVar2 = 1;
    if (param_3 != 0x200000) {
      uVar2 = uVar1;
    }
  }
  else if (param_3 == 0x800000) {
    uVar2 = 3;
  }
  else {
    uVar2 = 2;
    if (param_3 == 0x4000000) {
      return 0x3f800000;
    }
  }
  FUN_10056a458(param_1,*(undefined4 *)(param_2 + 0x84),*(undefined4 *)(param_2 + 0x88),
                *(undefined4 *)(*(long *)(param_2 + 8) + 0x15a48),uVar2,&local_14);
  return local_14;
}




void FUN_1006294f4(long *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  int iVar16;
  char *pcVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  float *pfVar21;
  long lVar22;
  uint *puVar23;
  int iVar24;
  undefined4 *puVar25;
  uint *puVar26;
  float *pfVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  uint *puVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auStack_15d0 [4];
  int local_15cc;
  int local_15c8;
  undefined1 auStack_15c4 [4];
  float local_15c0;
  float local_15bc;
  float local_15b8;
  float local_15b4;
  float local_15b0;
  undefined4 local_15ac;
  float local_15a8 [1024];
  float local_5a8 [32];
  float local_528 [32];
  float local_4a8 [32];
  undefined4 local_428 [32];
  float local_3a8 [32];
  float local_328 [32];
  float local_2a8 [32];
  float local_228 [32];
  float local_1a8 [32];
  float local_128 [32];
  long local_a8;
  
  lVar30 = *(long *)PTR____stack_chk_guard_101444218;
  local_15ac = 0;
  local_a8 = lVar30;
  uVar11 = (**(code **)(*param_1 + 0x90))(param_1,&local_15ac);
  if ((int)uVar11 != 0) goto LAB_10062aacc;
  if ((local_15ac & 0x40000010) == 0x10) {
    pfVar14 = (float *)(param_1 + 0x16);
    fVar40 = *pfVar14;
    pfVar27 = (float *)((long)param_1 + 0xb4);
    fVar39 = *pfVar27;
    lVar13 = param_1[1];
    if ((*(byte *)(param_1 + 9) >> 2 & 1) == 0) {
      if (0 < *(int *)(lVar13 + 0x15a40)) {
        lVar20 = 0;
        pcVar17 = (char *)(lVar13 + 0x1572c);
        do {
          if (*pcVar17 != '\0') goto LAB_1006295e4;
          lVar20 = lVar20 + 1;
          pcVar17 = pcVar17 + 0x70;
        } while (lVar20 < *(int *)(lVar13 + 0x15a40));
      }
      if (*(char *)(lVar13 + 0x16458) != '\0' || param_3 != 0) goto LAB_1006295e4;
LAB_100629618:
      if ((param_3 & 1) == 0) {
LAB_1006296b8:
        lVar13 = FUN_1005d4b30(lVar13 + 0x16460,param_1[10]);
        if ((lVar13 != 0) && (*(long *)(lVar13 + 0x20) == param_1[10])) {
          *pfVar14 = *(float *)(lVar13 + 0x34);
          *pfVar27 = *(float *)(lVar13 + 0x38);
          goto LAB_1006296f0;
        }
      }
    }
    else {
LAB_1006295e4:
      if (*(long *)(lVar13 + 0x16448) == 0) goto LAB_100629618;
      local_15b8 = *(float *)(param_1 + 0xd);
      if ((local_15ac >> 0x12 & 1) == 0) {
        local_15b4 = *(float *)((long)param_1 + 0x6c);
        local_15b0 = *(float *)(param_1 + 0xe);
      }
      else {
        local_15b8 = local_15b8 + *(float *)(lVar13 + 0x156c0);
        local_15b4 = *(float *)((long)param_1 + 0x6c) + *(float *)(lVar13 + 0x156c4);
        local_15b0 = *(float *)(param_1 + 0xe) + *(float *)(lVar13 + 0x156c8);
      }
      if (param_3 == 0) {
        FUN_1005d49c0(lVar13 + 0x16460,param_1[10],&local_15b8);
        lVar13 = param_1[1];
        goto LAB_1006296b8;
      }
      FUN_1005d48c4(lVar13 + 0x16450,lVar13 + 0x156c0,&local_15b8,pfVar14,pfVar27);
LAB_1006296f0:
      if (param_1[0x25] != 0) {
        lVar13 = param_1[10];
        uVar11 = FUN_1005709a4(param_1[1],0);
        if ((int)uVar11 != 0) goto LAB_10062aacc;
        uVar9 = (*(code *)param_1[0x25])(lVar13,0,3,pfVar14,pfVar27);
        uVar10 = FUN_100570a60(param_1[1]);
        if (uVar10 != 0) {
          uVar9 = uVar10;
        }
        uVar11 = (ulong)uVar9;
        if (uVar9 != 0) goto LAB_10062aacc;
      }
    }
    if (*(uint *)(param_1[1] + 0x15c70) == 0) {
      fVar36 = 500.0;
    }
    else {
      fVar36 = (float)*(uint *)(param_1[1] + 0x15c70);
    }
    fVar32 = *pfVar14;
    if (fVar40 != fVar32) {
      fVar40 = (fVar32 - *(float *)(param_1 + 0x15)) / fVar36;
      *(float *)(param_1 + 0x18) = fVar40;
      if (0.0 <= fVar40) {
        fVar33 = 0.0001;
        if (0.0001 <= fVar40) {
          fVar33 = fVar40;
        }
      }
      else {
        fVar33 = -0.0001;
        if (fVar40 <= -0.0001) {
          fVar33 = fVar40;
        }
      }
      *(float *)(param_1 + 0x18) = fVar33;
    }
    fVar40 = *pfVar27;
    if (fVar39 != fVar40) {
      fVar36 = (fVar40 - *(float *)((long)param_1 + 0xac)) / fVar36;
      *(float *)((long)param_1 + 0xc4) = fVar36;
      if (0.0 <= fVar36) {
        fVar39 = 0.0001;
        if (0.0001 <= fVar36) {
          fVar39 = fVar36;
        }
      }
      else {
        fVar39 = -0.0001;
        if (fVar36 <= -0.0001) {
          fVar39 = fVar36;
        }
      }
      *(float *)((long)param_1 + 0xc4) = fVar39;
    }
    if (*(float *)(param_1 + 0x15) == fVar32) {
      if (((param_2 != 0 | param_3) == 1) && (*(float *)((long)param_1 + 0xac) != fVar40))
      goto LAB_100629838;
    }
    else if ((param_2 != 0) || (param_3 != 0)) {
LAB_100629838:
      if (param_3 == 0) {
        fVar36 = *(float *)(param_1 + 0x15) + (float)param_2 * *(float *)(param_1 + 0x18);
        *(float *)(param_1 + 0x15) = fVar36;
        fVar39 = *(float *)((long)param_1 + 0xac) +
                 (float)param_2 * *(float *)((long)param_1 + 0xc4);
        *(float *)((long)param_1 + 0xac) = fVar39;
        if (*(float *)(param_1 + 0x18) <= 0.0) {
          if (fVar36 < fVar32) goto LAB_100629884;
        }
        else if (fVar32 < fVar36) {
LAB_100629884:
          *(float *)(param_1 + 0x15) = fVar32;
          fVar36 = fVar32;
        }
        fVar32 = fVar36;
        if (*(float *)((long)param_1 + 0xc4) <= 0.0) {
          if (fVar39 < fVar40) goto LAB_1006298a8;
        }
        else if (fVar40 < fVar39) {
LAB_1006298a8:
          *(float *)((long)param_1 + 0xac) = fVar40;
          fVar39 = fVar40;
        }
      }
      else {
        *(float *)(param_1 + 0x15) = fVar32;
        *(float *)((long)param_1 + 0xac) = fVar40;
        fVar39 = fVar40;
      }
      (**(code **)(*param_1 + 0x198))(fVar32,fVar39,param_1,0);
    }
  }
  plVar29 = param_1 + 1;
  uVar11 = FUN_1005f92f8(*plVar29,&local_15bc,&local_15c0,auStack_15c4);
  if ((int)uVar11 != 0) goto LAB_10062aacc;
  local_15bc = *(float *)((long)param_1 + 0xdc) * local_15bc;
  lVar13 = *plVar29;
  if ((*(byte *)(param_1 + 9) >> 2 & 1) == 0) {
    if (0 < *(int *)(lVar13 + 0x15a40)) {
      lVar20 = 0;
      pcVar17 = (char *)(lVar13 + 0x1572c);
      do {
        if (*pcVar17 != '\0') goto LAB_100629940;
        lVar20 = lVar20 + 1;
        pcVar17 = pcVar17 + 0x70;
      } while (lVar20 < *(int *)(lVar13 + 0x15a40));
    }
  }
  else {
LAB_100629940:
    uVar11 = FUN_1005f91ec(lVar13,&local_15c8);
    if ((int)uVar11 != 0) goto LAB_10062aacc;
    if (0 < local_15c8) {
      lVar13 = 0;
      fVar39 = 3.4028235e+38;
      do {
        lVar20 = *plVar29;
        pfVar27 = (float *)(lVar20 + lVar13 * 0x70 + 0x156c0);
        if ((local_15ac >> 0x12 & 1) == 0) {
          lVar28 = lVar20 + lVar13 * 0x70;
          fVar36 = *(float *)(param_1 + 0xd) - *pfVar27;
          fVar32 = *(float *)((long)param_1 + 0x6c) - *(float *)(lVar28 + 0x156c4);
          fVar40 = *(float *)(param_1 + 0xe) - *(float *)(lVar28 + 0x156c8);
        }
        else {
          fVar36 = *(float *)(param_1 + 0xd);
          fVar32 = *(float *)((long)param_1 + 0x6c);
          fVar40 = *(float *)(param_1 + 0xe);
        }
        if ((*(byte *)(lVar20 + 0x48) & 4) != 0) {
          fVar40 = -fVar40;
        }
        fVar33 = SQRT(fVar36 * fVar36 + fVar32 * fVar32 + fVar40 * fVar40);
        if (fVar33 < fVar39) {
          *(float *)(param_1 + 0x10) = fVar33;
          if (*(long *)(lVar20 + 0x15a50) == 0) {
            if ((local_15ac >> 0x1a & 1) == 0) {
              uVar9 = local_15ac & 0x4700000;
              if (uVar9 == 0x200000) {
                uVar12 = 1;
LAB_100629b60:
                FUN_10056a458(fVar33,*(undefined4 *)((long)param_1 + 0x84),(int)param_1[0x11],
                              (char)*(undefined4 *)(lVar20 + 0x15a48),uVar12,local_15a8);
                fVar39 = local_15a8[0];
              }
              else {
                fVar39 = 1.0;
                if (uVar9 != 0x4000000) {
                  if (uVar9 == 0x400000) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 2;
                  }
                  goto LAB_100629b60;
                }
              }
              *(float *)(param_1 + 0xc) = fVar39;
              goto LAB_100629b88;
            }
            pfVar14 = (float *)param_1[0x19];
            if (pfVar14 != (float *)0x0) {
              iVar24 = (int)param_1[0x1a];
              if (iVar24 != 0) {
                lVar28 = (long)iVar24 + -1;
                if (fVar33 < pfVar14[lVar28 * 3]) {
                  if (1 < iVar24) {
                    lVar28 = 0;
                    pfVar21 = pfVar14;
                    do {
                      fVar39 = *pfVar21;
                      if ((fVar39 <= fVar33) && (fVar33 < pfVar21[3])) {
                        fVar39 = (fVar33 - fVar39) / (pfVar21[3] - fVar39);
                        fVar39 = (1.0 - fVar39) * pfVar14[lVar28 * 3 + 1] +
                                 fVar39 * pfVar14[(lVar28 + 1) * 3 + 1];
                        *(float *)(param_1 + 0xc) = fVar39;
                        goto LAB_100629b88;
                      }
                      lVar18 = lVar28 + 2;
                      pfVar21 = pfVar21 + 3;
                      lVar28 = lVar28 + 1;
                    } while (lVar18 < iVar24);
                  }
                  goto LAB_100629a98;
                }
                fVar39 = pfVar14[lVar28 * 3 + 1];
                *(float *)(param_1 + 0xc) = fVar39;
                goto LAB_100629b88;
              }
            }
LAB_100629ba0:
            *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
          }
          else {
            uVar11 = FUN_1005709a4(lVar20,0);
            if ((int)uVar11 != 0) goto LAB_10062aacc;
            uVar34 = (**(code **)(*plVar29 + 0x15a50))((int)param_1[0x10],param_1[10]);
            *(undefined4 *)(param_1 + 0xc) = uVar34;
            uVar11 = FUN_100570a60(*plVar29);
            if ((int)uVar11 != 0) goto LAB_10062aacc;
LAB_100629a98:
            fVar39 = *(float *)(param_1 + 0xc);
LAB_100629b88:
            if (0.0 <= fVar39) {
              if (1.0 < fVar39) goto LAB_100629ba0;
            }
            else {
              *(undefined4 *)(param_1 + 0xc) = 0;
            }
          }
          fVar35 = *(float *)((long)param_1 + 0x94);
          fVar39 = fVar33;
          if ((fVar35 < 360.0) || (*(float *)(param_1 + 0x12) < 360.0)) {
            if (*(float *)(param_1 + 0x10) <= 0.0) {
              fVar40 = 0.0;
            }
            else {
              fVar37 = 1.0 / *(float *)(param_1 + 0x10);
              fVar33 = *(float *)((long)param_1 + 0xa4);
              fVar38 = -fVar33;
              uVar41 = SUB41(fVar33,0);
              uVar42 = (undefined1)((uint)fVar33 >> 8);
              uVar43 = (undefined1)((uint)fVar33 >> 0x10);
              uVar44 = (undefined1)((uint)fVar33 >> 0x18);
              if ((*(byte *)(*plVar29 + 0x48) & 4) != 0) {
                uVar41 = SUB41(fVar38,0);
                uVar42 = (undefined1)((uint)fVar38 >> 8);
                uVar43 = (undefined1)((uint)fVar38 >> 0x10);
                uVar44 = (undefined1)((uint)fVar38 >> 0x18);
              }
              fVar36 = fVar36 * fVar37 * *(float *)((long)param_1 + 0x9c) +
                       fVar32 * fVar37 * *(float *)(param_1 + 0x14) +
                       fVar40 * fVar37 *
                       (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
              fVar40 = -1.0;
              if (fVar36 <= 1.0) {
                fVar40 = 1.0;
                if (-1.0 <= fVar36) {
                  fVar40 = -fVar36;
                }
              }
              fVar40 = (float)_acosf(fVar40);
              fVar40 = (fVar40 / 3.1415927) * 180.0;
              fVar40 = fVar40 + fVar40;
            }
            fVar36 = *(float *)(param_1 + 0x12);
            if (fVar36 <= fVar40) {
              if (fVar40 < fVar35) {
                fVar40 = (fVar40 - fVar36) / (fVar35 - fVar36);
                *(float *)((long)param_1 + 0x8c) =
                     (1.0 - fVar40) + fVar40 * *(float *)(param_1 + 0x13);
                goto LAB_100629ca8;
              }
              uVar34 = (undefined4)param_1[0x13];
            }
            else {
              uVar34 = 0x3f800000;
            }
            *(undefined4 *)((long)param_1 + 0x8c) = uVar34;
          }
        }
LAB_100629ca8:
        if ((local_15bc <= 0.0) || (local_15c8 != 1)) {
          fVar40 = *(float *)((long)param_1 + 100);
        }
        else {
          fVar40 = *(float *)((long)param_1 + 0x74);
          if ((local_15ac._2_1_ >> 2 & 1) == 0) {
            lVar20 = lVar20 + lVar13 * 0x70;
            fVar40 = fVar40 - *(float *)(lVar20 + 0x156d8);
            fVar36 = *(float *)(param_1 + 0xf) - *(float *)(lVar20 + 0x156dc);
            uVar41 = SUB41(fVar36,0);
            uVar42 = (undefined1)((uint)fVar36 >> 8);
            uVar43 = (undefined1)((uint)fVar36 >> 0x10);
            uVar44 = (undefined1)((uint)fVar36 >> 0x18);
            fVar36 = *(float *)((long)param_1 + 0x7c) - *(float *)(lVar20 + 0x156e0);
            fVar32 = *(float *)(param_1 + 0xd) - *pfVar27;
            fVar33 = *(float *)((long)param_1 + 0x6c) - *(float *)(lVar20 + 0x156c4);
            fVar35 = *(float *)(param_1 + 0xe) - *(float *)(lVar20 + 0x156c8);
          }
          else {
            uVar34 = (undefined4)param_1[0xf];
            uVar41 = (undefined1)uVar34;
            uVar42 = (undefined1)((uint)uVar34 >> 8);
            uVar43 = (undefined1)((uint)uVar34 >> 0x10);
            uVar44 = (undefined1)((uint)uVar34 >> 0x18);
            fVar36 = *(float *)((long)param_1 + 0x7c);
            fVar32 = *(float *)(param_1 + 0xd);
            fVar33 = *(float *)((long)param_1 + 0x6c);
            fVar35 = *(float *)(param_1 + 0xe);
          }
          fVar37 = SQRT(fVar32 * fVar32 + fVar33 * fVar33 + fVar35 * fVar35);
          if (fVar37 <= 0.0) {
            fVar37 = 0.0;
          }
          else {
            fVar37 = (fVar32 * fVar40 +
                      fVar33 * (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) +
                     fVar35 * fVar36) / fVar37;
          }
          fVar40 = (local_15c0 * 340.0 - fVar37 * local_15bc) / (local_15c0 * 340.0);
          *(float *)((long)param_1 + 100) = fVar40;
        }
        if (fVar40 < 1e-06) {
          *(undefined4 *)((long)param_1 + 100) = 0x358637bd;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < local_15c8);
    }
  }
  _memset(local_128,0,0x80);
  _memset(local_1a8,0,0x80);
  uVar11 = (**(code **)(*param_1 + 0x208))(param_1,&local_15cc);
  if ((int)uVar11 != 0) goto LAB_10062aacc;
  lVar13 = *plVar29;
  if (*(int *)(lVar13 + 0x15a40) == 1) {
    fVar39 = *(float *)(param_1 + 0xd);
    uVar41 = SUB41(fVar39,0);
    uVar42 = (undefined1)((uint)fVar39 >> 8);
    uVar43 = (undefined1)((uint)fVar39 >> 0x10);
    uVar44 = (undefined1)((uint)fVar39 >> 0x18);
    fVar40 = *(float *)((long)param_1 + 0x6c);
    fVar36 = *(float *)(param_1 + 0xe);
    if ((local_15ac._2_1_ >> 2 & 1) == 0) {
      fVar35 = *(float *)(lVar13 + 0x15708);
      fVar33 = *(float *)(lVar13 + 0x1570c);
      uVar34 = *(undefined4 *)(lVar13 + 0x15710);
      uVar45 = (undefined1)uVar34;
      uVar46 = (undefined1)((uint)uVar34 >> 8);
      uVar47 = (undefined1)((uint)uVar34 >> 0x10);
      uVar48 = (undefined1)((uint)uVar34 >> 0x18);
      fVar32 = *(float *)(lVar13 + 0x15720);
      fVar38 = *(float *)(lVar13 + 0x15724);
      fVar37 = *(float *)(lVar13 + 0x15728);
      fVar39 = fVar39 - *(float *)(lVar13 + 0x156c0);
      uVar41 = SUB41(fVar39,0);
      uVar42 = (undefined1)((uint)fVar39 >> 8);
      uVar43 = (undefined1)((uint)fVar39 >> 0x10);
      uVar44 = (undefined1)((uint)fVar39 >> 0x18);
      fVar40 = fVar40 - *(float *)(lVar13 + 0x156c4);
      fVar36 = fVar36 - *(float *)(lVar13 + 0x156c8);
    }
    else {
      uVar45 = 0;
      uVar46 = 0;
      uVar47 = 0x80;
      uVar48 = 0x3f;
      fVar33 = 0.0;
      fVar35 = 0.0;
      fVar37 = 0.0;
      fVar38 = 0.0;
      fVar32 = 1.0;
    }
    bVar8 = (*(byte *)(lVar13 + 0x48) & 4) != 0;
    if (bVar8) {
      fVar36 = -fVar36;
    }
    fVar39 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
    if (bVar8) {
      fVar39 = -(float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
    }
    fVar50 = SQRT(fVar40 * fVar40 +
                  (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) *
                  (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) + fVar36 * fVar36
                 );
    if (fVar50 <= 0.0) {
      fVar36 = 0.0;
      uVar41 = 0;
      uVar42 = 0;
      uVar43 = 0;
      uVar44 = 0;
      uVar45 = 0;
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
    }
    else {
      fVar51 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) / fVar50;
      uVar45 = SUB41(fVar51,0);
      uVar46 = (undefined1)((uint)fVar51 >> 8);
      uVar47 = (undefined1)((uint)fVar51 >> 0x10);
      uVar48 = (undefined1)((uint)fVar51 >> 0x18);
      fVar40 = fVar40 / fVar50;
      uVar41 = SUB41(fVar40,0);
      uVar42 = (undefined1)((uint)fVar40 >> 8);
      uVar43 = (undefined1)((uint)fVar40 >> 0x10);
      uVar44 = (undefined1)((uint)fVar40 >> 0x18);
      fVar36 = fVar36 / fVar50;
    }
    fVar40 = fVar37 * fVar36 +
             fVar38 * (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) +
             fVar32 * (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
    uVar11 = 0x24;
    if ((1.01 < fVar40) || (fVar40 < -1.01)) goto LAB_10062aacc;
    fVar39 = fVar39 * fVar36 +
             fVar33 * (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) +
             fVar35 * (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
    uVar11 = 0x24;
    if ((1.01 < fVar39) || (fVar39 < -1.01)) goto LAB_10062aacc;
    fVar36 = 1.0;
    if (fVar40 <= 1.0) {
      fVar36 = fVar40;
    }
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0x80;
    uVar44 = 0xbf;
    if (-1.0 <= fVar36) {
      uVar41 = SUB41(fVar36,0);
      uVar42 = (undefined1)((uint)fVar36 >> 8);
      uVar43 = (undefined1)((uint)fVar36 >> 0x10);
      uVar44 = (undefined1)((uint)fVar36 >> 0x18);
    }
    fVar36 = 1.0;
    if (fVar39 <= 1.0) {
      fVar36 = fVar39;
    }
    fVar40 = -1.0;
    if (-1.0 <= fVar36) {
      fVar40 = fVar36;
    }
    if ((NAN((float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)))) ||
         (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) != 0.0) || (fVar40 != 0.0)
       ) {
      fVar39 = fVar40;
      if (fVar40 < 0.0) {
        fVar39 = -fVar40;
      }
      fVar36 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
      if (!NAN((float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)))) &&
          (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) < 0.0) {
        fVar36 = -(float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
      }
      if (fVar36 <= fVar39) {
        fVar36 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) / fVar39 + 1.0;
        if (0.0 <= fVar40) goto LAB_10062a038;
        fVar32 = 6.0;
      }
      else {
        fVar36 = 3.0 - fVar40 / fVar36;
        if (NAN((float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)))) ||
            0.0 <= (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)))) {
LAB_10062a038:
          fVar39 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
          goto LAB_10062a040;
        }
        fVar32 = 10.0;
      }
      fVar39 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
      fVar36 = fVar32 - fVar36;
    }
    else {
      fVar39 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
      fVar36 = 0.0;
    }
LAB_10062a040:
    fVar32 = (float)_acosf(0x24);
    *(float *)(param_1 + 0x1d) = fVar32 * 57.295776;
    fVar32 = *(float *)((long)param_1 + 0xd4);
    if ((fVar32 == 0.0) || (local_15cc != 1)) {
      bVar8 = false;
      if (local_15cc < 1) goto LAB_10062a1e0;
    }
    else {
      local_15cc = 2;
      bVar8 = true;
    }
    iVar24 = local_15cc;
    lVar20 = 0;
    fVar33 = 180.0;
    lVar28 = (long)local_15cc;
    do {
      if ((iVar24 == 1) || (fVar32 == 0.0)) {
        local_128[lVar20] = fVar39;
        local_1a8[lVar20] = fVar40;
      }
      else {
        uVar9 = (uint)lVar20;
        if (iVar24 == 8) {
          if (uVar9 < 8) {
            fVar35 = *(float *)(&UNK_10117d910 + lVar20 * 4);
          }
          else {
            fVar35 = 0.0;
          }
        }
        else if (iVar24 == 6) {
          if (uVar9 < 6) {
            fVar35 = *(float *)(&UNK_10117d8f0 + lVar20 * 4);
          }
          else {
            fVar35 = 0.0;
          }
        }
        else if (iVar24 == 4) {
          if (uVar9 < 4) {
            fVar35 = (float)(&DAT_10115dad0)[lVar20];
          }
          else {
            fVar35 = 0.0;
          }
        }
        else {
          fVar33 = (float)(iVar24 + -1);
          fVar35 = ((float)(int)uVar9 + (float)(int)uVar9) / fVar33 + -1.0;
        }
        fVar35 = (float)___sincosf_stret(((fVar32 * 3.1415927) / 180.0) * fVar35 * -0.5);
        local_128[lVar20] = fVar39 * fVar33 - fVar40 * fVar35;
        fVar33 = fVar40 * fVar33;
        local_1a8[lVar20] = fVar33 + fVar39 * fVar35;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < lVar28);
  }
  else {
    bVar8 = false;
    fVar39 = 0.0;
    fVar40 = 0.0;
    fVar36 = 0.0;
  }
LAB_10062a1e0:
  if (1 < *(int *)(lVar13 + 0x160b0) - 1U) {
    _bzero(local_5a8,0x400);
    lVar20 = (long)local_15cc;
    if (0 < local_15cc) {
      lVar18 = 0;
      lVar28 = 0;
      lVar22 = param_1[8];
      do {
        if (lVar22 == 0) {
          uVar34 = 0;
        }
        else if (*(char *)(lVar13 + 0x1615c) == '\0') {
          uVar34 = 0;
        }
        else {
          puVar25 = &DAT_101ea48d8;
          if ((3 < *(short *)((long)param_1 + 0x3a)) && (lVar28 < (short)param_1[7])) {
            puVar25 = (undefined4 *)
                      (lVar22 + (lVar18 + (long)(short)param_1[7] * 0x300000000 >> 0x20) * 4);
          }
          uVar34 = *puVar25;
        }
        local_428[lVar28] = uVar34;
        lVar28 = lVar28 + 1;
        lVar18 = lVar18 + 0x100000000;
      } while (lVar28 < lVar20);
    }
    iVar24 = *(int *)(lVar13 + 0x160b0);
    uVar9 = iVar24 - 3;
    if (uVar9 < 4) {
      uVar11 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
      uVar9 = *(uint *)(&DAT_10115dae0 + uVar11);
      iVar16 = *(int *)(&DAT_10115daf0 + uVar11);
    }
    else {
      uVar9 = 7;
      if (iVar24 != 7) {
        uVar9 = 0;
      }
      iVar16 = (uint)(iVar24 == 7) << 3;
    }
    fVar32 = *(float *)(param_1 + 0x1b);
    if ((0.0 < fVar32) && (0 < local_15cc)) {
      lVar28 = 0;
      fVar33 = 1.4142135 / (float)(int)uVar9;
      uVar41 = 0;
LAB_10062a3cc:
      fVar35 = local_1a8[lVar28];
      fVar37 = local_128[lVar28];
      if ((fVar35 == 0.0) && (fVar37 == 0.0)) {
        uVar42 = SUB41(fVar33,0);
        uVar47 = (undefined1)((uint)fVar33 >> 8);
        uVar48 = (undefined1)((uint)fVar33 >> 0x10);
        uVar49 = (undefined1)((uint)fVar33 >> 0x18);
        uVar43 = uVar42;
        uVar44 = uVar47;
        uVar45 = uVar48;
        uVar46 = uVar49;
        if (*(char *)(lVar13 + 0x160d8) == '\0') {
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar43 = uVar41;
        }
        local_5a8[lVar28] = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
        uVar43 = uVar42;
        uVar44 = uVar47;
        uVar45 = uVar48;
        uVar46 = uVar49;
        if (*(char *)(lVar13 + 0x16104) == '\0') {
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar43 = uVar41;
        }
        local_528[lVar28] = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
        uVar43 = uVar42;
        uVar44 = uVar47;
        uVar45 = uVar48;
        uVar46 = uVar49;
        if (*(char *)(lVar13 + 0x16130) == '\0') {
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar43 = uVar41;
        }
        local_4a8[lVar28] = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
        uVar43 = uVar42;
        uVar44 = uVar47;
        uVar45 = uVar48;
        uVar46 = uVar49;
        if (*(char *)(lVar13 + 0x16188) == '\0') {
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar43 = uVar41;
        }
        local_3a8[lVar28] = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
        uVar43 = uVar42;
        uVar44 = uVar47;
        uVar45 = uVar48;
        uVar46 = uVar49;
        if (*(char *)(lVar13 + 0x161b4) == '\0') {
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar43 = uVar41;
        }
        local_328[lVar28] = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
        uVar43 = uVar42;
        uVar44 = uVar47;
        uVar45 = uVar48;
        uVar46 = uVar49;
        if (*(char *)(lVar13 + 0x161e0) == '\0') {
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar43 = uVar41;
        }
        local_2a8[lVar28] = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
        if (*(char *)(lVar13 + 0x1620c) == '\0') {
          uVar47 = 0;
          uVar48 = 0;
          uVar49 = 0;
          uVar42 = uVar41;
        }
        local_228[lVar28] = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar42)));
      }
      else {
        bVar5 = false;
        if ((fVar37 == fVar39) && (bVar5 = false, !NAN(fVar35) && !NAN(fVar40))) {
          bVar5 = fVar35 == fVar40;
        }
        fVar38 = fVar36;
        if (!bVar5) {
          if ((fVar35 == 0.0) && (fVar37 == 0.0)) {
            fVar38 = 0.0;
          }
          else {
            fVar38 = fVar35;
            if (fVar35 < 0.0) {
              fVar38 = -fVar35;
            }
            fVar50 = fVar37;
            if (fVar37 < 0.0) {
              fVar50 = -fVar37;
            }
            if (fVar50 <= fVar38) {
              fVar38 = fVar37 / fVar38 + 1.0;
              if (fVar35 < 0.0) {
                fVar38 = 6.0 - fVar38;
              }
            }
            else {
              fVar38 = 3.0 - fVar35 / fVar50;
              if (fVar37 < 0.0) {
                fVar38 = 10.0 - fVar38;
              }
            }
          }
        }
        puVar26 = *(uint **)(lVar13 + 0x16218);
        if (puVar26 != (uint *)0x0) {
          if (*(long *)(lVar13 + 0x16220) == 0) {
            local_5a8[(ulong)*puVar26 * 0x20 + lVar28] = 1.0;
          }
          else if (0 < (int)uVar9) {
            lVar18 = 0;
            fVar50 = fVar38 + 8.0;
            puVar23 = puVar26;
            do {
              if (puVar23 == (uint *)0x0) {
                lVar18 = 0;
                goto LAB_10062a5cc;
              }
              puVar31 = *(uint **)(lVar13 + 0x16220 + lVar18 * 8);
              puVar1 = puVar26;
              if (puVar31 != (uint *)0x0) {
                puVar1 = puVar31;
              }
              fVar51 = (float)puVar23[7];
              fVar52 = (float)puVar1[7];
              if (fVar51 != fVar52) {
                if (fVar52 < fVar51) {
                  fVar52 = fVar52 + 8.0;
                }
                bVar5 = false;
                bVar6 = true;
                bVar7 = false;
                if (fVar51 <= fVar38) {
                  bVar5 = false;
                  bVar6 = false;
                  bVar7 = true;
                  if (!NAN(fVar52) && !NAN(fVar38)) {
                    bVar5 = fVar52 < fVar38;
                    bVar6 = fVar52 == fVar38;
                    bVar7 = false;
                  }
                }
                if (bVar6 || bVar5 != bVar7) {
                  bVar5 = false;
                  if ((fVar51 <= fVar50) && (bVar5 = false, !NAN(fVar50) && !NAN(fVar52))) {
                    bVar5 = fVar50 < fVar52;
                  }
                  if (!bVar5) goto LAB_10062a544;
                }
                if (*(char *)((long)puVar23 + 0x25) == '\0') {
                  fVar35 = fVar37 * (float)puVar23[4] + fVar35 * (float)puVar23[6];
                  fVar37 = SQRT(2.0 - fVar35 * fVar35);
                  local_5a8[(ulong)*puVar23 * 0x20 + lVar28] = (fVar37 + fVar35) * 0.5;
                  fVar35 = (fVar37 - fVar35) * 0.5;
                  uVar42 = SUB41(fVar35,0);
                  uVar43 = (undefined1)((uint)fVar35 >> 8);
                  uVar44 = (undefined1)((uint)fVar35 >> 0x10);
                  uVar45 = (undefined1)((uint)fVar35 >> 0x18);
                }
                else {
                  fVar38 = fVar37 * (float)puVar1[6] - fVar35 * (float)puVar1[4];
                  fVar35 = fVar35 * (float)puVar23[4] - fVar37 * (float)puVar23[6];
                  fVar37 = (float)puVar23[10] / SQRT(fVar38 * fVar38 + fVar35 * fVar35);
                  local_5a8[(ulong)*puVar23 * 0x20 + lVar28] = fVar38 * fVar37;
                  fVar35 = fVar35 * fVar37;
                  uVar42 = SUB41(fVar35,0);
                  uVar43 = (undefined1)((uint)fVar35 >> 8);
                  uVar44 = (undefined1)((uint)fVar35 >> 0x10);
                  uVar45 = (undefined1)((uint)fVar35 >> 0x18);
                }
                local_5a8[(ulong)*puVar1 * 0x20 + lVar28] =
                     (float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42)));
                break;
              }
LAB_10062a544:
              lVar18 = lVar18 + 1;
              puVar23 = puVar31;
            } while (lVar18 < (int)uVar9);
          }
        }
      }
      goto LAB_10062a634;
    }
LAB_10062a640:
    if (fVar32 < 1.0) {
      lVar13 = param_1[8];
      if (lVar13 == 0) {
        FUN_1005cc2dc(0x3f3504f3,0x3f3504f3,0,0,iVar24,local_15cc,0,local_15a8,auStack_15d0);
      }
      else {
        if (local_15cc < 1) goto LAB_10062a9c4;
        lVar22 = 0;
        lVar18 = 0;
        lVar28 = 0;
        lVar3 = (long)(local_15cc * 6) * 4 + -0x15a8;
        lVar4 = (long)(local_15cc * 4) * 4 + -0x15a8;
        sVar2 = *(short *)((long)param_1 + 0x3a);
        do {
          puVar25 = &DAT_101ea48d8;
          if ((0 < sVar2) && (lVar28 < (short)param_1[7])) {
            puVar25 = (undefined4 *)(lVar13 + lVar18);
          }
          *(undefined4 *)((long)local_15a8 + lVar18) = *puVar25;
          iVar24 = (int)lVar28;
          puVar25 = &DAT_101ea48d8;
          if ((1 < sVar2) && (lVar28 < (short)param_1[7])) {
            puVar25 = (undefined4 *)(lVar13 + (long)(iVar24 + (short)param_1[7]) * 4);
          }
          *(undefined4 *)((long)local_15a8 + lVar18 + lVar20 * 4) = *puVar25;
          if (2 < uVar9) {
            puVar25 = &DAT_101ea48d8;
            if ((2 < sVar2) && (lVar28 < (short)param_1[7])) {
              puVar25 = (undefined4 *)(lVar13 + (long)(iVar24 + (short)param_1[7] * 2) * 4);
            }
            *(undefined4 *)((long)local_15a8 + lVar18 + (long)(local_15cc << 1) * 4) = *puVar25;
            if (3 < uVar9) {
              if (sVar2 < 5) {
                *(undefined4 *)((long)local_15a8 + lVar18 + lVar4 + 0x15a8) = DAT_101ea48d8;
                puVar25 = &DAT_101ea48d8;
              }
              else {
                puVar25 = &DAT_101ea48d8;
                if (lVar28 < (short)param_1[7]) {
                  puVar25 = (undefined4 *)(lVar13 + (long)(iVar24 + (short)param_1[7] * 4) * 4);
                }
                *(undefined4 *)((long)local_15a8 + lVar18 + lVar4 + 0x15a8) = *puVar25;
                puVar25 = &DAT_101ea48d8;
                if ((5 < sVar2) && (lVar28 < (short)param_1[7])) {
                  puVar25 = (undefined4 *)
                            (lVar13 + (lVar22 + (long)(short)param_1[7] * 0x500000000 >> 0x20) * 4);
                }
              }
              *(undefined4 *)((long)local_15a8 + lVar18 + (long)(local_15cc * 5) * 4) = *puVar25;
              if (5 < uVar9) {
                if (sVar2 < 7) {
                  *(undefined4 *)((long)local_15a8 + lVar18 + lVar3 + 0x15a8) = DAT_101ea48d8;
                  puVar25 = &DAT_101ea48d8;
                }
                else {
                  puVar25 = &DAT_101ea48d8;
                  if (lVar28 < (short)param_1[7]) {
                    puVar25 = (undefined4 *)
                              (lVar13 + (lVar22 + (long)(short)param_1[7] * 0x600000000 >> 0x20) * 4
                              );
                  }
                  *(undefined4 *)((long)local_15a8 + lVar18 + lVar3 + 0x15a8) = *puVar25;
                  puVar25 = &DAT_101ea48d8;
                  if ((7 < sVar2) && (lVar28 < (short)param_1[7])) {
                    puVar25 = (undefined4 *)
                              (lVar13 + (lVar22 + (long)(short)param_1[7] * 0x700000000 >> 0x20) * 4
                              );
                  }
                }
                *(undefined4 *)((long)local_15a8 + lVar18 + (long)(local_15cc * 7) * 4) = *puVar25;
              }
            }
          }
          lVar28 = lVar28 + 1;
          lVar18 = lVar18 + 4;
          lVar22 = lVar22 + 0x100000000;
        } while (lVar28 < lVar20);
      }
      if (0 < local_15cc) {
        lVar20 = 0;
        lVar13 = 0;
        fVar39 = 1.0 - fVar32;
        do {
          *(float *)((long)local_5a8 + lVar20) =
               fVar32 * *(float *)((long)local_5a8 + lVar20) +
               fVar39 * *(float *)((long)local_15a8 + lVar20);
          *(float *)((long)local_528 + lVar20) =
               fVar32 * *(float *)((long)local_528 + lVar20) +
               fVar39 * *(float *)((long)local_15a8 + lVar20 + (long)local_15cc * 4);
          if ((2 < uVar9) &&
             (*(float *)((long)local_4a8 + lVar20) =
                   fVar32 * *(float *)((long)local_4a8 + lVar20) +
                   fVar39 * *(float *)((long)local_15a8 + lVar20 + (long)(local_15cc << 1) * 4),
             3 < uVar9)) {
            *(float *)((long)local_3a8 + lVar20) =
                 fVar32 * *(float *)((long)local_3a8 + lVar20) +
                 fVar39 * *(float *)((long)local_15a8 + lVar20 + (long)(local_15cc * 4) * 4);
            *(float *)((long)local_328 + lVar20) =
                 fVar32 * *(float *)((long)local_328 + lVar20) +
                 fVar39 * *(float *)((long)local_15a8 + lVar20 + (long)(local_15cc * 5) * 4);
            if (5 < uVar9) {
              *(float *)((long)local_2a8 + lVar20) =
                   fVar32 * *(float *)((long)local_2a8 + lVar20) +
                   fVar39 * *(float *)((long)local_15a8 + lVar20 + (long)(local_15cc * 6) * 4);
              *(float *)((long)local_228 + lVar20) =
                   fVar32 * *(float *)((long)local_228 + lVar20) +
                   fVar39 * *(float *)((long)local_15a8 + lVar20 + (long)(local_15cc * 7) * 4);
            }
          }
          lVar13 = lVar13 + 1;
          lVar20 = lVar20 + 4;
        } while (lVar13 < local_15cc);
      }
    }
LAB_10062a9c4:
    if (bVar8) {
      local_15cc = 1;
      if (0 < iVar16) {
        uVar11 = (ulong)(iVar16 - 1) + 1;
        uVar15 = uVar11 & 0x1fffffffe;
        if (uVar15 == 0) {
          uVar15 = 0;
        }
        else {
          uVar19 = (ulong)(iVar16 - 1) + 1 & 0xfffffffffffffffe;
          pfVar27 = local_528 + 1;
          do {
            pfVar27[-0x21] = (pfVar27[-0x21] + pfVar27[-0x20]) * 0.5;
            pfVar27[-1] = (pfVar27[-1] + *pfVar27) * 0.5;
            uVar19 = uVar19 - 2;
            pfVar27 = pfVar27 + 0x40;
          } while (uVar19 != 0);
        }
        if (uVar11 != uVar15) {
          iVar24 = iVar16 - (int)uVar15;
          pfVar27 = local_5a8 + uVar15 * 0x20 + 1;
          do {
            pfVar27[-1] = (pfVar27[-1] + *pfVar27) * 0.5;
            iVar24 = iVar24 + -1;
            pfVar27 = pfVar27 + 0x20;
          } while (iVar24 != 0);
        }
      }
    }
    (**(code **)(*param_1 + 0xc0))(param_1,local_5a8,iVar16,local_15cc,0x20,0);
  }
  (**(code **)(*param_1 + 0x48))(*(undefined4 *)((long)param_1 + 0x34),param_1);
  (**(code **)(*param_1 + 0x20))((int)param_1[6],param_1,0);
  uVar11 = 0;
LAB_10062aacc:
  if (lVar30 == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar11);
  while( true ) {
    local_5a8[(ulong)*puVar26 * 0x20 + lVar28] = 1.0;
    lVar18 = lVar18 + 1;
    if ((int)uVar9 <= lVar18) break;
LAB_10062a5cc:
    puVar26 = *(uint **)(lVar13 + 0x16218 + lVar18 * 8);
    if (puVar26 == (uint *)0x0) break;
  }
LAB_10062a634:
  lVar28 = lVar28 + 1;
  if (lVar20 <= lVar28) goto LAB_10062a640;
  goto LAB_10062a3cc;
}




ulong FUN_10062ab0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = FUN_1005709a4(*(undefined8 *)(param_1 + 8),0);
  if ((int)uVar3 == 0) {
    uVar1 = (**(code **)(param_1 + 0x128))(param_2,param_3,param_4,param_5,param_6);
    uVar2 = FUN_100570a60(*(undefined8 *)(param_1 + 8));
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}




void FUN_10062ab8c(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *local_88;
  long local_80;
  int local_74;
  
  fVar8 = *(float *)(param_1 + 0xb);
  fVar9 = *(float *)((long)param_1 + 0x5c);
  local_74 = 0;
  iVar3 = (**(code **)(*param_1 + 0x118))(param_1,0xfffffffe,&local_80);
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x130))(param_1,local_80,&local_74);
    plVar5 = param_1 + 0x1f;
    if ((long *)*plVar5 == plVar5) {
      bVar2 = 0;
      fVar10 = 1.0;
      fVar7 = 0.0;
    }
    else {
      bVar2 = 0;
      fVar10 = 1.0;
      fVar7 = 0.0;
      plVar4 = (long *)*plVar5;
      iVar3 = -1;
      do {
        plVar6 = (long *)*plVar4;
        iVar1 = (int)plVar4[2] >> 0x10;
        if (iVar3 < local_74 && local_74 < iVar1) {
          fVar7 = fVar7 * *(float *)(local_80 + 0x250) * *(float *)(param_1 + 6);
          fVar10 = fVar10 * *(float *)(local_80 + 0x250) * *(float *)(param_1 + 6);
          bVar2 = 1;
        }
        local_88 = (float *)0x0;
        iVar3 = FUN_1005cf4a8(plVar4 + -0xd,(int)(short)(int)plVar4[2],&local_88,0,0,0);
        if (iVar3 != 0) {
          return;
        }
        fVar7 = fVar7 * *local_88 + local_88[1];
        fVar10 = fVar10 * *local_88;
        plVar4 = plVar6;
        iVar3 = iVar1;
      } while (plVar6 != plVar5);
    }
    if ((local_80 != 0) && ((bool)(bVar2 ^ 1))) {
      fVar7 = fVar7 * *(float *)(local_80 + 0x250) * *(float *)(param_1 + 6);
      fVar10 = fVar10 * *(float *)(local_80 + 0x250) * *(float *)(param_1 + 6);
    }
    *(float *)(param_1 + 0xb) = fVar10;
    *(float *)((long)param_1 + 0x5c) = fVar7;
    if ((fVar7 + fVar10 == fVar8 + fVar9 && param_4 == 0) ||
       (iVar3 = (**(code **)(*param_1 + 0x210))(param_1), iVar3 == 0)) {
      (**(code **)(*param_1 + 0x220))(param_1);
    }
  }
  return;
}




void FUN_10062ad38(uint param_1)

{
  if ((param_1 & 1) == 0) {
    FUN_10057f6ec();
    return;
  }
  FUN_10058193c();
  return;
}




undefined8 FUN_10062ad44(void)

{
  return 0;
}




undefined8 FUN_10062ad4c(void)

{
  return 0;
}




undefined8 FUN_10062ad54(void)

{
  return 0;
}




undefined8 FUN_10062ad5c(void)

{
  return 0;
}




undefined8 FUN_10062ad64(void)

{
  return 0;
}




undefined8 FUN_10062ad6c(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x48) & 0xffffffdf;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x48) | 0x20;
  }
  *(uint *)(param_1 + 0x48) = uVar1;
  return 0;
}




undefined8 FUN_10062ad8c(long param_1,byte *param_2)

{
  if (param_2 != (byte *)0x0) {
    *param_2 = ((byte)(*(uint *)(param_1 + 0x48) >> 5) ^ 0xff) & 1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_10062adb8(float param_1,long param_2)

{
  float fVar1;
  
  if ((((uint)param_1 & 0x7fffff) != 0) && (((uint)param_1 & 0x7f800000) == 0x7f800000)) {
    return 0x1d;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x34) = fVar1;
  return 0;
}




undefined8 FUN_10062adfc(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x34);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_10062ae20(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *(uint *)(param_1 + 9);
  if ((param_2 ^ (uVar2 & 2) >> 1) == 1) {
    uVar1 = uVar2 | 2;
    if (param_2 == 0) {
      uVar1 = uVar2 & 0xfffffffd;
    }
    *(uint *)(param_1 + 9) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010062ae58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x20))((int)param_1[6],param_1,1);
    return uVar3;
  }
  return 0;
}




undefined8 FUN_10062ae64(long param_1,byte *param_2)

{
  if (param_2 != (byte *)0x0) {
    *param_2 = (byte)(*(uint *)(param_1 + 0x48) >> 1) & 1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_10062ae8c(void)

{
  return 0;
}




undefined8 FUN_10062ae94(void)

{
  return 0;
}




undefined4 FUN_10062ae9c(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x1d;
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_10062aeb8(void)

{
  return 0;
}




undefined8 FUN_10062aec0(void)

{
  return 0;
}




undefined8 FUN_10062aec8(void)

{
  return 0;
}




undefined8 FUN_10062aed0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x128) = param_2;
  return 0;
}




undefined8 FUN_10062aedc(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return 0;
}




undefined8 FUN_10062aeec(float param_1,long *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  if (-1.0 <= param_1) {
    fVar2 = 1.0;
    if (param_1 <= 1.0) {
      fVar2 = (param_1 + 1.0) * 0.5;
    }
  }
  else {
    fVar2 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010062af6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_2 + 0xb0))(SQRT(1.0 - fVar2),SQRT(fVar2),0,0,0,0,0,0,param_2,1);
  return uVar1;
}




undefined8 FUN_10062af70(void)

{
  return 0;
}




undefined8 FUN_10062af78(void)

{
  return 0;
}




undefined8
FUN_10062af80(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_6 == 0) {
    return 0;
  }
  if (param_2 == (uint *)0x0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      return 0;
    }
    FUN_1005d7f1c(*(long *)(param_1 + 8) + 0x14f68,*(long *)(param_1 + 0x40),"",0);
    *(undefined2 *)(param_1 + 0x38) = 0;
    *(undefined2 *)(param_1 + 0x3a) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    return 0;
  }
  uVar8 = (uint)param_3;
  uVar7 = (uint)param_4;
  if (0 < (int)uVar8) {
    lVar3 = 0;
    uVar1 = (uint)param_5;
    if ((uint)param_5 == 0) {
      uVar1 = uVar7;
    }
    puVar4 = param_2;
    do {
      if (0 < (int)uVar7) {
        lVar5 = 0;
        puVar6 = puVar4;
        do {
          if ((*puVar6 & 0x7f800000) == 0x7f800000) {
            return 0x1d;
          }
          lVar5 = lVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar5 < (int)uVar7);
      }
      lVar3 = lVar3 + 1;
      puVar4 = (uint *)((long)puVar4 +
                       (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
    } while (lVar3 < (int)uVar8);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    if (((int)uVar7 <= (int)*(short *)(param_1 + 0x38)) &&
       ((int)uVar8 <= (int)*(short *)(param_1 + 0x3a))) goto LAB_10062b0a8;
    FUN_1005d7f1c(*(long *)(param_1 + 8) + 0x14f68,*(long *)(param_1 + 0x40),"",0);
  }
  if ((int)uVar7 <= (int)uVar8) {
    uVar7 = uVar8;
  }
  lVar3 = FUN_1005d7708(*(long *)(param_1 + 8) + 0x14f68,uVar8 * uVar7 * 4,"",0,0,0);
  if (lVar3 == 0) {
    return 0x26;
  }
  *(short *)(param_1 + 0x38) = (short)uVar7;
  *(short *)(param_1 + 0x3a) = (short)param_3;
  *(long *)(param_1 + 0x40) = lVar3;
LAB_10062b0a8:
  uVar2 = FUN_10062f024((short *)(param_1 + 0x38),param_2,param_3,param_4,param_5);
  if ((int)uVar2 == 0) {
    return 0;
  }
  return uVar2;
}




void FUN_10062b128(long param_1)

{
  FUN_10062f120(param_1 + 0x38);
  return;
}




undefined8 FUN_10062b130(void)

{
  return 0;
}




undefined8 FUN_10062b138(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long local_38;
  
  if (((param_1[0x22] == param_2) && (param_1[0x23] == param_3)) &&
     ((uint)param_4 == (uint)*(byte *)(param_1 + 0x24))) {
    uVar1 = 0;
  }
  else {
    param_1[0x22] = param_2;
    param_1[0x23] = param_3;
    *(char *)(param_1 + 0x24) = (char)param_4;
    uVar1 = (**(code **)(*param_1 + 0x118))(param_1,0,&local_38);
    if ((int)uVar1 == 0) {
      if (local_38 == 0) {
        uVar1 = 9;
      }
      else {
        uVar1 = FUN_1005c9b2c(local_38,param_2,param_3,param_4);
      }
    }
  }
  return uVar1;
}




undefined8 FUN_10062b1d8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x110);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x118);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = *(undefined1 *)(param_1 + 0x120);
  }
  return 0;
}




undefined8 FUN_10062b204(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    uVar1 = 0x1d;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x118))(param_2,0xfffffffe,&local_38);
    if (((int)uVar1 == 0) && (uVar1 = FUN_10062dce8(param_1,local_38,param_3), (int)uVar1 == 0)) {
      uVar1 = (**(code **)(*param_2 + 0x218))(param_2);
    }
  }
  return uVar1;
}




undefined8 FUN_10062b294(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    uVar1 = 0x1d;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x118))(param_2,0xfffffffe,&local_38);
    if (((int)uVar1 == 0) && (uVar1 = FUN_10062e078(param_1,local_38,param_3), (int)uVar1 == 0)) {
      uVar1 = (**(code **)(*param_2 + 0x218))(param_2);
    }
  }
  return uVar1;
}




void FUN_10062b324(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long local_38;
  
  iVar1 = (**(code **)(*param_1 + 0x118))(param_1,0xfffffffe,&local_38);
  if ((iVar1 == 0) &&
     ((local_38 == 0 || (iVar1 = FUN_10062de84(local_38,param_2,param_3,1), iVar1 == 0)))) {
    (**(code **)(*param_1 + 0x218))(param_1);
  }
  return;
}




void FUN_10062b39c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_38;
  
  iVar1 = (**(code **)(*param_1 + 0x118))(param_1,0xfffffffe,&local_38);
  if (iVar1 == 0) {
    FUN_10062e438(local_38,param_2,param_3,param_4);
  }
  return;
}




undefined8 FUN_10062b3fc(long *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint local_6c;
  long local_68;
  long local_60;
  undefined8 *local_58;
  long local_50;
  uint local_44;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0x1f;
  }
  local_44 = param_2;
  iVar4 = (**(code **)(*param_1 + 0x130))(param_1,param_3,0);
  if ((iVar4 == 0) && (uVar5 = (**(code **)(*param_1 + 0x110))(param_1,param_3), (int)uVar5 != 0)) {
    return uVar5;
  }
  (**(code **)(*param_1 + 0x1f8))(param_1,&local_50,&local_58,&local_68,&local_60);
  if (local_50 == 0) {
    return 9;
  }
  switch(local_44) {
  case 0xfffffffc:
    local_44 = *(uint *)(param_1 + 3);
    break;
  case 0xfffffffd:
    if (local_60 == 0) {
      return 9;
    }
    pcVar6 = *(code **)(*param_1 + 0x130);
    goto LAB_10062b4e4;
  case 0xfffffffe:
    pcVar6 = *(code **)(*param_1 + 0x130);
    local_60 = local_68;
LAB_10062b4e4:
    uVar5 = (*pcVar6)(param_1,local_60,&local_44);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    break;
  case 0xffffffff:
    local_44 = 0;
    goto LAB_10062b510;
  }
  if ((int)local_44 < 0) {
    uVar5 = 0x1f;
  }
  else {
LAB_10062b510:
    if ((int)param_1[3] < (int)local_44) {
      uVar5 = 0x1f;
    }
    else {
      param_3[0x36] = param_1;
      uVar5 = FUN_1005cede0(param_3);
      if ((int)uVar5 == 0) {
        *param_3 = *local_58;
        param_3[1] = local_58[1];
        *(ushort *)((long)param_3 + 0x3c) = *(ushort *)((long)param_3 + 0x3c) | 0x100;
        uVar5 = FUN_1005c986c(param_3,1,1);
        if ((int)uVar5 == 0) {
          lVar11 = param_1[1];
          if (lVar11 != 0) {
            FUN_10057097c(lVar11,1);
          }
          uVar5 = FUN_1005ce304(local_50,param_3,0xffffffff,local_44,1,0);
          if ((int)uVar5 == 0) {
            if ((local_44 == 0) && (uVar5 = FUN_10062e538(local_68,param_3,0), (int)uVar5 != 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
          }
          else {
            bVar3 = false;
          }
          if ((lVar11 != 0) && (lVar11 != 0)) {
            FUN_100570990(lVar11,1);
          }
          if (bVar3) {
            plVar9 = param_1 + 0x1f;
            for (plVar7 = (long *)*plVar9; plVar7 != plVar9; plVar7 = (long *)*plVar7) {
              iVar4 = (int)plVar7[2];
              if ((int)local_44 <= iVar4 >> 0x10) {
                plVar7[2] = (ulong)(iVar4 + 0x10000) & 0xffff0000 | plVar7[2] & 0xffffffff0000ffffU;
              }
            }
            iVar4 = FUN_1005c964c(param_3,0xffffffff,&local_6c);
            if (iVar4 == 0) {
              puVar8 = param_3 + 0xd;
              if ((undefined8 *)*puVar8 != puVar8) {
                return 0x1c;
              }
              if ((undefined8 *)param_3[0xe] != puVar8) {
                return 0x1c;
              }
              if (0x7ffe < (int)local_6c) {
                return 0x1c;
              }
              if (0x7ffe < (int)local_44) {
                return 0x1c;
              }
              param_3[0xf] = (ulong)local_6c & 0xffff | ((ulong)local_44 & 0xffff) << 0x10;
              for (plVar7 = (long *)*plVar9; plVar7 != plVar9; plVar7 = (long *)*plVar7) {
                uVar1 = (int)plVar7[2] >> 0x10;
                if ((int)local_44 <= (int)uVar1) {
                  plVar9 = plVar7;
                  if (uVar1 == local_44) {
                    return 0x1c;
                  }
                  break;
                }
              }
              lVar11 = plVar9[1];
              param_3[0xd] = plVar9;
              param_3[0xe] = lVar11;
              plVar9[1] = (long)puVar8;
              *(undefined8 **)param_3[0xe] = puVar8;
              uVar5 = (**(code **)(*param_1 + 0x218))(param_1);
              if ((int)uVar5 != 0) {
                return uVar5;
              }
            }
            plVar7 = (long *)FUN_1005d7708(param_1[1] + 0x148b8,(int)param_1[3] * 8 + 8,"",0,0,0);
            if (plVar7 == (long *)0x0) {
              uVar5 = 0x26;
            }
            else {
              lVar10 = param_1[3];
              lVar11 = (long)(int)lVar10 + 1;
              *(int *)(param_1 + 3) = (int)lVar11;
              if (-1 < (int)lVar10) {
                lVar10 = 0;
                iVar4 = 0;
                plVar9 = plVar7;
                do {
                  if (local_44 == (uint)lVar10) {
                    *plVar9 = (long)param_3;
                  }
                  else {
                    plVar2 = &local_50;
                    if (param_1[2] != 0) {
                      plVar2 = (long *)(param_1[2] + (long)iVar4 * 8);
                    }
                    *plVar9 = *plVar2;
                    iVar4 = iVar4 + 1;
                  }
                  lVar10 = lVar10 + 1;
                  plVar9 = plVar9 + 1;
                } while (lVar10 < lVar11);
              }
              lVar11 = param_1[2];
              if (lVar11 != 0) {
                FUN_1005d7f1c(param_1[1] + 0x148b8,lVar11,"",0);
              }
              param_1[2] = (long)plVar7;
              uVar1 = (int)param_1[3] - 1;
              if ((local_44 == 0) || (local_44 == uVar1)) {
                puVar8 = param_3;
                if (local_44 != 0) {
                  puVar8 = (undefined8 *)0x0;
                }
                if (local_44 != uVar1) {
                  param_3 = (undefined8 *)0x0;
                }
                uVar5 = (**(code **)(*param_1 + 0x1e8))(param_1,puVar8,param_3,0,0);
                if ((int)uVar5 != 0) {
                  return uVar5;
                }
              }
              uVar5 = 0;
            }
          }
        }
      }
    }
  }
  return uVar5;
}




undefined8 FUN_10062b878(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long local_a0;
  long local_98;
  long local_90;
  int local_84;
  long local_80;
  int local_74;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  uVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,&local_58,&local_60,&local_68,&local_70);
  if ((int)uVar3 == 0) {
    if (local_58 == 0) {
      uVar3 = 9;
    }
    else if (local_58 == local_60) {
      uVar3 = 0;
    }
    else {
      if (param_2 == 0) {
        uVar3 = (**(code **)(*param_1 + 0x120))(param_1,&local_74);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (0 < local_74) {
          iVar6 = 0;
          iVar8 = 0;
          do {
            uVar3 = (**(code **)(*param_1 + 0x118))(param_1,iVar8,&local_80);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            if (local_80 == local_68) {
              iVar8 = iVar8 + 1;
            }
            else {
              (**(code **)(*param_1 + 0x110))(param_1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_74);
        }
      }
      else {
        local_98 = 0;
        local_90 = 0;
        if (*(char *)(param_2 + 0x3c) < '\0') {
          return 10;
        }
        uVar3 = (**(code **)(*param_1 + 0x120))(param_1,&local_84);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (local_84 < 1) {
          iVar8 = 0;
        }
        else {
          iVar8 = 0;
          do {
            local_a0 = 0;
            uVar3 = (**(code **)(*param_1 + 0x118))(param_1,iVar8,&local_a0);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
          } while ((local_a0 != param_2) && (iVar8 = iVar8 + 1, iVar8 < local_84));
        }
        if (local_84 <= iVar8) {
          return 9;
        }
        if (iVar8 == 0) {
          (**(code **)(*param_1 + 0x118))(param_1,1,&local_90);
        }
        else if (iVar8 == local_84 + -1) {
          (**(code **)(*param_1 + 0x118))(param_1,local_84 + -2,&local_98);
        }
        lVar9 = param_1[1];
        if (lVar9 != 0) {
          FUN_10057097c(lVar9,1);
        }
        *(ushort *)(param_2 + 0x3c) = *(ushort *)(param_2 + 0x3c) & 0xfeff;
        *(undefined8 *)(param_2 + 0x1b0) = 0;
        uVar3 = FUN_1005c986c(param_2,0,0);
        if ((int)uVar3 == 0) {
          uVar3 = FUN_1005ced7c(param_2,param_2,0);
          if ((int)uVar3 == 0) {
            if ((local_90 == 0) || (uVar3 = FUN_10062e538(local_68,local_90,0), (int)uVar3 == 0)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
        }
        if ((lVar9 != 0) && (lVar9 != 0)) {
          FUN_100570990(lVar9,1);
        }
        if (!bVar1) {
          return uVar3;
        }
        plVar4 = (long *)(param_2 + 0x68);
        plVar7 = *(long **)(param_2 + 0x70);
        *plVar7 = *plVar4;
        *(long **)(*plVar4 + 8) = plVar7;
        *plVar4 = (long)plVar4;
        *(long **)(param_2 + 0x70) = plVar4;
        for (plVar4 = (long *)param_1[0x1f]; plVar4 != param_1 + 0x1f; plVar4 = (long *)*plVar4) {
          iVar6 = (int)plVar4[2];
          if (iVar8 < iVar6 >> 0x10) {
            plVar4[2] = (ulong)(iVar6 - 0x10000) & 0xffff0000 | plVar4[2] & 0xffffffff0000ffffU;
          }
        }
        if ((int)param_1[3] < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = FUN_1005d7708(param_1[1] + 0x148b8,(int)param_1[3] * 8 + -8,"",0,0,0);
          if (lVar9 == 0) {
            return 0x26;
          }
          lVar2 = param_1[3];
          if (1 < (int)lVar2) {
            lVar5 = 0;
            iVar6 = 0;
            do {
              if (iVar8 == (int)lVar5) {
                iVar6 = iVar6 + 1;
              }
              *(undefined8 *)(lVar9 + lVar5 * 8) = *(undefined8 *)(param_1[2] + (long)iVar6 * 8);
              iVar6 = iVar6 + 1;
              lVar5 = lVar5 + 1;
            } while (lVar5 < (long)(int)lVar2 + -1);
          }
        }
        if (param_1[2] != 0) {
          FUN_1005d7f1c(param_1[1] + 0x148b8,param_1[2],"",0);
        }
        param_1[2] = lVar9;
        if (((local_70 == param_2 || local_90 != 0) || local_98 != 0) &&
           (uVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,local_90,local_98,0,local_70 == param_2)
           , (int)uVar3 != 0)) {
          return uVar3;
        }
        *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      }
      uVar3 = (**(code **)(*param_1 + 0x218))(param_1);
    }
  }
  return uVar3;
}




undefined8 FUN_10062bcac(long *param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  int local_54;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_54 = 0;
  if (param_3 == (long *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    (**(code **)(*param_1 + 0x1f8))(param_1,&local_38,&local_40,&local_48,&local_50);
    if (local_38 == 0) {
      uVar1 = 9;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x120))(param_1,&local_54);
      if ((int)uVar1 == 0) {
        if ((((1 < param_2 + 1U) && (local_38 = local_40, param_2 != -4)) &&
            (local_54 + -1 != param_2)) &&
           ((local_38 = local_50, param_2 != -3 && (local_38 = local_48, param_2 != -2)))) {
          if (local_54 <= param_2) {
            return 9;
          }
          local_38 = *(long *)(param_1[2] + (long)param_2 * 8);
        }
        uVar1 = 0;
        *param_3 = local_38;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_10062bdbc(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_10062bde0(long *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  int local_74;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  int local_44;
  
  local_60 = 0;
  local_58 = 0;
  local_44 = param_3;
  (**(code **)(*param_1 + 0x1f8))(param_1,&local_50,0,&local_70,&local_68);
  if (local_50 == 0) {
    return 9;
  }
  switch(param_3) {
  case -4:
    param_3 = (int)param_1[3] + -1;
    local_44 = param_3;
    break;
  case -3:
    if (local_68 == 0) {
      return 9;
    }
    pcVar5 = *(code **)(*param_1 + 0x130);
    goto LAB_10062be88;
  case -2:
    pcVar5 = *(code **)(*param_1 + 0x130);
    local_68 = local_70;
LAB_10062be88:
    uVar7 = (*pcVar5)(param_1,local_68,&local_44);
    param_3 = local_44;
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    break;
  case -1:
    param_3 = 0;
    local_44 = 0;
    goto LAB_10062beb4;
  }
  if (param_3 < 0) {
    uVar7 = 0x1f;
  }
  else {
LAB_10062beb4:
    if (param_3 < (int)param_1[3]) {
      uVar7 = (**(code **)(*param_1 + 0x130))(param_1,param_2,&local_74);
      if ((int)uVar7 == 0) {
        if (local_44 != local_74) {
          if (local_74 == 0) {
            uVar7 = (**(code **)(*param_1 + 0x118))(param_1,1,&local_58);
            if ((int)uVar7 != 0) {
              return uVar7;
            }
          }
          else if (local_44 == 0) {
            local_58 = param_2;
          }
          iVar2 = (int)param_1[3] + -1;
          if (local_74 == iVar2) {
            uVar7 = (**(code **)(*param_1 + 0x118))(param_1,(int)param_1[3] + -2,&local_60);
            iVar4 = local_44;
            if ((int)uVar7 != 0) {
              return uVar7;
            }
          }
          else {
            iVar4 = local_44;
            if (local_44 == iVar2) {
              local_60 = param_2;
              iVar4 = iVar2;
            }
          }
          if (local_74 < iVar4) {
            lVar6 = (long)local_74;
            do {
              puVar1 = (undefined8 *)(param_1[2] + lVar6 * 8);
              lVar6 = lVar6 + 1;
              *puVar1 = puVar1[1];
            } while (lVar6 < iVar4);
          }
          else if (iVar4 < local_74) {
            lVar6 = (long)local_74;
            do {
              puVar1 = (undefined8 *)(param_1[2] + lVar6 * 8);
              lVar6 = lVar6 + -1;
              *puVar1 = puVar1[-1];
            } while (iVar4 < lVar6);
          }
          *(long *)(param_1[2] + (long)iVar4 * 8) = param_2;
          lVar6 = param_1[1];
          if (lVar6 != 0) {
            FUN_10057097c(lVar6,1);
            iVar4 = local_44;
          }
          uVar7 = FUN_1005ce304(local_50,param_2,local_74,iVar4,1,0);
          if ((int)uVar7 == 0) {
            if ((local_58 == 0) || (uVar7 = FUN_10062e538(local_70,local_58,0), (int)uVar7 == 0)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
          }
          else {
            bVar3 = false;
          }
          if ((lVar6 != 0) && (lVar6 != 0)) {
            FUN_100570990(lVar6,1);
          }
          if (!bVar3) {
            return uVar7;
          }
          if ((local_58 != 0 || local_60 != 0) &&
             (uVar7 = (**(code **)(*param_1 + 0x1e8))(param_1,local_58,local_60,0,0),
             (int)uVar7 != 0)) {
            return uVar7;
          }
        }
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0x1f;
    }
  }
  return uVar7;
}




undefined8 FUN_10062c0d0(long *param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long local_28;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1[2] == 0) {
    uVar1 = (**(code **)(*param_1 + 0x1f8))(param_1,&local_28,0,0,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (local_28 == param_2) {
      return 0;
    }
  }
  else if (0 < (int)param_1[3]) {
    lVar2 = 0;
    do {
      if (*(long *)(param_1[2] + lVar2 * 8) == param_2) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)lVar2;
          return 0;
        }
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_1[3]);
  }
  return 9;
}




undefined8 FUN_10062c18c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_2 + 0xe8) == 0x1b) {
    uVar1 = (**(code **)(*param_1 + 0x1f8))(param_1,&uStack_28,&local_30,&local_38,0);
    if ((int)uVar1 == 0) {
      uVar1 = (**(code **)(*param_1 + 0x1f0))(param_1,uStack_28,local_30,local_38,param_2);
    }
  }
  else {
    uVar1 = 0xc;
  }
  return uVar1;
}




ulong FUN_10062c208(long *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte local_34 [4];
  
  uVar2 = (**(code **)(*param_1 + 0x90))(param_1,local_34);
  if ((int)uVar2 == 0) {
    if ((local_34[0] >> 4 & 1) == 0) {
      uVar2 = 0x28;
    }
    else {
      if (param_2 != (float *)0x0) {
        uVar3 = 0x1d;
        uVar1 = uVar3;
        if (((uint)*param_2 & 0x7f800000) != 0x7f800000) {
          uVar1 = 0;
        }
        if (((uint)param_2[1] & 0x7f800000) != 0x7f800000) {
          uVar3 = 0;
        }
        uVar4 = 0x1d;
        if (((uint)param_2[2] & 0x7f800000) != 0x7f800000) {
          uVar4 = 0;
        }
        uVar4 = uVar3 | uVar1 | uVar4;
        if (uVar4 != 0) {
          return (ulong)uVar4;
        }
        if (((*(float *)(param_1 + 0xd) != *param_2) ||
            (*(float *)((long)param_1 + 0x6c) != param_2[1])) ||
           (*(float *)(param_1 + 0xe) != param_2[2])) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
        }
        *(float *)(param_1 + 0xe) = param_2[2];
        param_1[0xd] = *(long *)param_2;
      }
      if (param_3 == (float *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar3 = 0x1d;
        uVar1 = uVar3;
        if (((uint)*param_3 & 0x7f800000) != 0x7f800000) {
          uVar1 = 0;
        }
        if (((uint)param_3[1] & 0x7f800000) != 0x7f800000) {
          uVar3 = 0;
        }
        uVar4 = 0x1d;
        if (((uint)param_3[2] & 0x7f800000) != 0x7f800000) {
          uVar4 = 0;
        }
        uVar4 = uVar3 | uVar1 | uVar4;
        uVar2 = (ulong)uVar4;
        if (uVar4 == 0) {
          if (((*(float *)((long)param_1 + 0x74) != *param_3) ||
              (*(float *)(param_1 + 0xf) != param_3[1])) ||
             (*(float *)((long)param_1 + 0x7c) != param_3[2])) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
          }
          uVar2 = 0;
          *(float *)((long)param_1 + 0x7c) = param_3[2];
          *(undefined8 *)((long)param_1 + 0x74) = *(undefined8 *)param_3;
        }
      }
    }
  }
  return uVar2;
}




undefined8 FUN_10062c394(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  byte local_34 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_34);
  if ((int)uVar1 == 0) {
    if ((local_34[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = (int)param_1[0xd];
        param_2[1] = *(undefined4 *)((long)param_1 + 0x6c);
        param_2[2] = (int)param_1[0xe];
      }
      if (param_3 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        *param_3 = *(undefined4 *)((long)param_1 + 0x74);
        param_3[1] = (int)param_1[0xf];
        param_3[2] = *(undefined4 *)((long)param_1 + 0x7c);
      }
    }
  }
  return uVar1;
}




undefined8 FUN_10062c430(float param_1,float param_2,long *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  uint local_34;
  
  auVar2 = (**(code **)(*param_3 + 0x90))(param_3,&local_34);
  uVar1 = auVar2._0_8_;
  if (auVar2._0_4_ == 0) {
    if ((local_34 >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
      uVar1 = 0x1d;
    }
    else if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
      uVar1 = 0x1d;
    }
    else {
      uVar1 = 0x1f;
      if (((param_1 <= param_2) && (0.0 <= param_1)) && (0.0 <= param_2)) {
        if ((*(float *)((long)param_3 + 0x84) == param_1) && (*(float *)(param_3 + 0x11) == param_2)
           ) {
          uVar1 = 0;
        }
        else {
          *(float *)((long)param_3 + 0x84) = param_1;
          *(float *)(param_3 + 0x11) = param_2;
          if (((local_34 & 0x4700000) == 0) && (*(long *)(param_3[1] + 0x15a50) == 0)) {
            uVar1 = 0;
            *(uint *)(param_3 + 9) = *(uint *)(param_3 + 9) | 4;
          }
          else {
            *(uint *)(param_3 + 9) = *(uint *)(param_3 + 9) | 4;
            uVar1 = FUN_10062ab8c(param_3,auVar2._8_8_,0,0);
            if ((int)uVar1 == 0) {
              uVar1 = (**(code **)(*param_3 + 0x20))((int)param_3[6],param_3,0);
            }
          }
        }
      }
    }
  }
  return uVar1;
}




undefined8 FUN_10062c568(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  byte local_34 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_34);
  if ((int)uVar1 == 0) {
    if ((local_34[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)((long)param_1 + 0x84);
      }
      if (param_3 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        *param_3 = (int)param_1[0x11];
      }
    }
  }
  return uVar1;
}




undefined8 FUN_10062c5e4(float param_1,float param_2,float param_3,long *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  byte local_44 [4];
  
  uVar1 = (**(code **)(*param_4 + 0x90))(param_4,local_44);
  if ((int)uVar1 == 0) {
    if ((local_44[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
      uVar1 = 0x1d;
    }
    else if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
      uVar1 = 0x1d;
    }
    else if (((uint)param_3 & 0x7f800000) == 0x7f800000) {
      uVar1 = 0x1d;
    }
    else if (param_1 <= param_2) {
      uVar1 = 0;
      fVar2 = 1.0;
      if (param_3 <= 1.0) {
        fVar2 = param_3;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar2) {
        fVar3 = fVar2;
      }
      *(float *)(param_4 + 0x12) = param_1;
      *(float *)((long)param_4 + 0x94) = param_2;
      *(float *)(param_4 + 0x13) = fVar3;
      *(uint *)(param_4 + 9) = *(uint *)(param_4 + 9) | 4;
    }
    else {
      uVar1 = 0x1f;
    }
  }
  return uVar1;
}




undefined8 FUN_10062c6d8(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  byte local_34 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_34);
  if ((int)uVar1 == 0) {
    if ((local_34[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = (int)param_1[0x12];
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((long)param_1 + 0x94);
      }
      if (param_4 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        *param_4 = (int)param_1[0x13];
      }
    }
  }
  return uVar1;
}




ulong FUN_10062c764(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte local_24 [4];
  
  uVar2 = (**(code **)(*param_1 + 0x90))(param_1,local_24);
  if ((int)uVar2 == 0) {
    if ((local_24[0] >> 4 & 1) == 0) {
      uVar2 = 0x28;
    }
    else if (param_2 == (uint *)0x0) {
      uVar2 = 0x1f;
    }
    else {
      uVar3 = 0x1d;
      uVar1 = uVar3;
      if ((*param_2 & 0x7f800000) != 0x7f800000) {
        uVar1 = 0;
      }
      if ((param_2[1] & 0x7f800000) != 0x7f800000) {
        uVar3 = 0;
      }
      uVar4 = 0x1d;
      if ((param_2[2] & 0x7f800000) != 0x7f800000) {
        uVar4 = 0;
      }
      uVar4 = uVar3 | uVar1 | uVar4;
      uVar2 = (ulong)uVar4;
      if (uVar4 == 0) {
        uVar2 = 0;
        *(uint *)((long)param_1 + 0xa4) = param_2[2];
        *(undefined8 *)((long)param_1 + 0x9c) = *(undefined8 *)param_2;
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
      }
    }
  }
  return uVar2;
}




undefined8 FUN_10062c81c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte local_24 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_24);
  if ((int)uVar1 == 0) {
    if ((local_24[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else if (param_2 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)((long)param_1 + 0xa4);
      *param_2 = *(undefined8 *)((long)param_1 + 0x9c);
    }
  }
  return uVar1;
}




uint FUN_10062c888(long param_1,long param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_3 < 0) {
    return 0x1f;
  }
  if ((param_2 != 0) && (0 < param_3)) {
    lVar6 = 0;
    puVar7 = (uint *)(param_2 + 8);
    do {
      fVar2 = (float)puVar7[-1];
      uVar8 = 0x1d;
      uVar1 = uVar8;
      if ((puVar7[-2] & 0x7f800000) != 0x7f800000) {
        uVar1 = 0;
      }
      if (((uint)fVar2 & 0x7f800000) != 0x7f800000) {
        uVar8 = 0;
      }
      uVar9 = 0x1d;
      if ((*puVar7 & 0x7f800000) != 0x7f800000) {
        uVar9 = 0;
      }
      uVar9 = uVar8 | uVar1 | uVar9;
      if (uVar9 != 0) {
        return uVar9;
      }
      if ((0 < lVar6) && ((float)puVar7[-2] <= (float)puVar7[-5])) {
        return 0x1f;
      }
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if (0.0 <= fVar2) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar2)) {
          bVar3 = fVar2 < 1.0;
          bVar4 = fVar2 == 1.0;
          bVar5 = false;
        }
      }
      if (!bVar4 && bVar3 == bVar5) {
        return 0x1f;
      }
      lVar6 = lVar6 + 1;
      puVar7 = puVar7 + 3;
    } while (lVar6 < param_3);
  }
  *(long *)(param_1 + 200) = param_2;
  *(int *)(param_1 + 0xd0) = param_3;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 4;
  return 0;
}




undefined8 FUN_10062c964(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 200);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xd0);
  }
  return 0;
}




undefined8 FUN_10062c984(uint param_1,uint param_2,long *param_3)

{
  undefined8 uVar1;
  
  if (((param_1 & 0x7f800000) != 0x7f800000) && ((param_2 & 0x7f800000) != 0x7f800000)) {
    *(uint *)(param_3 + 0x15) = param_1;
    *(uint *)((long)param_3 + 0xac) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010062c9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_3 + 0x20))((int)param_3[6],param_3,0);
    return uVar1;
  }
  return 0x1d;
}




undefined8 FUN_10062c9c8(void)

{
  return 0;
}




undefined8 FUN_10062c9d0(float param_1,long *param_2)

{
  undefined8 uVar1;
  byte local_34 [4];
  
  uVar1 = (**(code **)(*param_2 + 0x90))(param_2,local_34);
  if ((int)uVar1 == 0) {
    if ((local_34[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
      uVar1 = 0x1d;
    }
    else {
      uVar1 = 0x1f;
      if ((0.0 <= param_1) && (param_1 <= 360.0)) {
        uVar1 = 0;
        *(float *)((long)param_2 + 0xd4) = param_1;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_10062ca64(long *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  byte local_24 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_24);
  if ((int)uVar1 == 0) {
    if ((local_24[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else if (param_2 == (undefined4 *)0x0) {
      uVar1 = 0x1f;
    }
    else {
      uVar1 = 0;
      *param_2 = *(undefined4 *)((long)param_1 + 0xd4);
    }
  }
  return uVar1;
}




undefined8 FUN_10062cac8(float param_1,long *param_2)

{
  undefined8 uVar1;
  byte local_34 [4];
  
  uVar1 = (**(code **)(*param_2 + 0x90))(param_2,local_34);
  if ((int)uVar1 == 0) {
    if ((local_34[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
      uVar1 = 0x1d;
    }
    else {
      uVar1 = 0x1f;
      if ((0.0 <= param_1) && (param_1 <= 1.0)) {
        uVar1 = 0;
        *(float *)(param_2 + 0x1b) = param_1;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_10062cb58(long *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  byte local_24 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_24);
  if ((int)uVar1 == 0) {
    if ((local_24[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else if (param_2 == (undefined4 *)0x0) {
      uVar1 = 0x1f;
    }
    else {
      uVar1 = 0;
      *param_2 = (int)param_1[0x1b];
    }
  }
  return uVar1;
}




undefined8 FUN_10062cbbc(float param_1,long *param_2)

{
  undefined8 uVar1;
  byte local_34 [4];
  
  uVar1 = (**(code **)(*param_2 + 0x90))(param_2,local_34);
  if ((int)uVar1 == 0) {
    if ((local_34[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
      uVar1 = 0x1d;
    }
    else {
      uVar1 = 0x1f;
      if ((0.0 <= param_1) && (param_1 <= 5.0)) {
        uVar1 = 0;
        *(float *)((long)param_2 + 0xdc) = param_1;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_10062cc4c(long *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  byte local_24 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_24);
  if ((int)uVar1 == 0) {
    if ((local_24[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else if (param_2 == (undefined4 *)0x0) {
      uVar1 = 0x1f;
    }
    else {
      uVar1 = 0;
      *param_2 = *(undefined4 *)((long)param_1 + 0xdc);
    }
  }
  return uVar1;
}




undefined8 FUN_10062ccb0(float param_1,float param_2,long *param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  byte local_34 [4];
  
  uVar2 = (**(code **)(*param_3 + 0x90))(param_3,local_34);
  if ((int)uVar2 == 0) {
    if ((local_34[0] >> 4 & 1) == 0) {
      uVar2 = 0x28;
    }
    else if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
      uVar2 = 0x1d;
    }
    else if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
      uVar2 = 0x1d;
    }
    else {
      uVar2 = 0x1f;
      if ((0.0 <= param_1) && (param_1 <= 1.0)) {
        if (0.0001 <= param_2) {
          if (param_2 < 10.0) {
            return 0x1f;
          }
          if (22050.0 < param_2) {
            return 0x1f;
          }
        }
        else {
          param_2 = *(float *)(param_3[1] + 0x15c74);
        }
        uVar2 = 0;
        uVar1 = *(uint *)(param_3 + 9) | 0x100000;
        if (param_4 == 0) {
          uVar1 = *(uint *)(param_3 + 9) & 0xffefffff;
        }
        *(uint *)(param_3 + 9) = uVar1;
        *(float *)(param_3 + 0x1c) = param_1;
        *(float *)((long)param_3 + 0xe4) = param_2;
      }
    }
  }
  return uVar2;
}




undefined8 FUN_10062cdbc(long *param_1,byte *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  byte local_34 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_34);
  if ((int)uVar1 == 0) {
    if ((local_34[0] >> 4 & 1) == 0) {
      uVar1 = 0x28;
    }
    else {
      if (param_2 != (byte *)0x0) {
        *param_2 = (byte)(*(uint *)(param_1 + 9) >> 0x14) & 1;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (int)param_1[0x1c];
      }
      if (param_4 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        *param_4 = *(undefined4 *)((long)param_1 + 0xe4);
      }
    }
  }
  return uVar1;
}




undefined8 FUN_10062ce4c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 0;
}




undefined8 FUN_10062ce58(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x28);
    return 0;
  }
  return 0x1f;
}




undefined8 * FUN_10062ce7c(void)

{
  if (DAT_101dbd2d4 == '\0') {
    DAT_101ea48e0 = &DAT_101872560;
    DAT_101ea48f8 = 7;
    DAT_101ea48f0 = 600;
    DAT_101ea4900 = FUN_10062cec4;
  }
  return &DAT_101ea48e0;
}




undefined8 FUN_10062cec4(undefined8 *param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_10062d270(*param_1);
  }
  return 0;
}




ulong FUN_10062cee4(long param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = 1;
  if (*(uint *)((long)param_2 + 0x24) != 0) {
    uVar1 = *(uint *)((long)param_2 + 0x24);
  }
  uVar5 = (ulong)uVar1;
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 0x10) <= *param_2) {
    uVar2 = *param_2;
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = (uVar2 - param_3) / uVar5;
  }
  uVar4 = 0;
  if (uVar5 != 0) {
    uVar4 = (param_3 - uVar2) / uVar5;
  }
  if (param_3 < uVar2) {
    uVar4 = -uVar3;
  }
  return uVar4;
}




undefined8 FUN_10062cf28(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = param_1 + 0x3d;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0xffffffffffffffff;
  param_1[0x3d] = puVar1;
  param_1[0x3e] = puVar1;
  param_1[0x3f] = 0;
  uVar2 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::alloc
                    ((DSPConnectionI **)(param_1[0x12] + 0x790),(bool)((char)param_1 + -0x38));
  if ((int)uVar2 == 0) {
    lVar3 = param_1[0x1a];
    if (0 < *(int *)(lVar3 + 0x60)) {
      lVar4 = 0;
      do {
        uVar2 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar3 + 0x68) + lVar4 * 8) + 0x38)
                              ,param_1,lVar4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar4 = lVar4 + 1;
        lVar3 = param_1[0x1a];
      } while (lVar4 < *(int *)(lVar3 + 0x60));
    }
    param_1[0x40] = 0xffffffffffffffff;
    param_1[0x3d] = puVar1;
    param_1[0x3e] = puVar1;
    param_1[0x3f] = 0;
    *(undefined4 *)(param_1 + 0x49) = 0;
    *(undefined4 *)((long)param_1 + 0x24c) = 0;
    *(undefined4 *)(param_1 + 0x4a) = 0x3f800000;
    *(undefined4 *)((long)param_1 + 0x254) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    *(ushort *)((long)param_1 + 0x3c) = *(ushort *)((long)param_1 + 0x3c) | 0x20;
    FUN_100612958(param_1[0x39],1);
    uVar2 = 0;
    *(undefined2 *)((long)param_1 + 0x86) = 0;
    *(undefined2 *)((long)param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x4a) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x42) = 0;
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    param_1[0x43] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x49) = 1;
    *(undefined4 *)((long)param_1 + 0x24c) = 0;
    *(undefined4 *)((long)param_1 + 0x254) = 1;
    param_1[0x3a] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 4) = 0x100000;
    *(undefined4 *)((long)param_1 + 0x24) = 0x100000;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((long)param_1 + 0x29) = 0;
    param_1[6] = 0;
  }
  return uVar2;
}




undefined8 FUN_10062d060(undefined8 *param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(ushort *)((long)param_1 + 0x3c) = *(ushort *)((long)param_1 + 0x3c) | 0x20;
  FUN_100612958(param_1[0x39]);
  *(undefined2 *)((long)param_1 + 0x86) = 0;
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x49) = 1;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x254) = 1;
  if (param_2 != 0) {
    param_1[0x3a] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 4) = 0x100000;
    *(undefined4 *)((long)param_1 + 0x24) = 0x100000;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((long)param_1 + 0x29) = 0;
    param_1[6] = 0;
  }
  return 0;
}




undefined8 FUN_10062d108(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x1c8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::free
                      ((DSPConnectionI *)(*(long *)(param_1 + 0x90) + 0x790),
                       SUB81(*(long *)(param_1 + 0x1c8),0));
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_10062d150(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 != 0) {
    FUN_10057097c(lVar5,5);
  }
  puVar1 = (undefined8 *)(param_1 + 0x1e8);
  puVar3 = *(undefined8 **)(param_1 + 0x1e8);
  *(ulong *)(param_1 + 0x208) = *(ulong *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x240);
  do {
    if (puVar3 == puVar1) {
LAB_10062d204:
      *(undefined4 *)(param_1 + 0x220) = 0;
      *(undefined8 *)(param_1 + 0x218) = 0;
      uVar2 = 1;
LAB_10062d210:
      *(undefined4 *)(param_1 + 0x230) = 0;
      *(undefined8 *)(param_1 + 0x228) = 0;
LAB_10062d218:
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x240) = 0;
LAB_10062d220:
      *(undefined8 *)(param_1 + 0x238) = uVar4;
      *(undefined4 *)(param_1 + 0x24c) = uVar2;
      *(undefined4 *)(param_1 + 0x248) = 1;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = uVar2;
      }
      if ((lVar5 != 0) && (lVar5 != 0)) {
        FUN_100570990(lVar5,5);
      }
      return 0;
    }
    if (*(ulong *)(param_1 + 0x238) < (ulong)puVar3[3]) {
      if (puVar3 != puVar1) {
        uVar4 = puVar3[3];
        *(int *)(param_1 + 0x220) = (int)puVar3[2];
        puVar3 = (undefined8 *)*puVar3;
        *(undefined8 *)(param_1 + 0x218) = uVar4;
        if (puVar3 == puVar1) {
          uVar2 = 2;
          goto LAB_10062d210;
        }
        uVar4 = puVar3[3];
        *(int *)(param_1 + 0x230) = (int)puVar3[2];
        puVar3 = (undefined8 *)*puVar3;
        *(undefined8 *)(param_1 + 0x228) = uVar4;
        if (puVar3 == puVar1) {
          uVar2 = 3;
          goto LAB_10062d218;
        }
        uVar4 = puVar3[3];
        *(int *)(param_1 + 0x240) = (int)puVar3[2];
        uVar2 = 4;
        goto LAB_10062d220;
      }
      goto LAB_10062d204;
    }
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}




undefined8 FUN_10062d270(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong *puVar6;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar7;
  
  lVar10 = *(long *)(param_1 + 0x90);
  if (lVar10 != 0) {
    FUN_10057097c(lVar10,5);
  }
  if ((*(byte *)(param_1 + 0x17c) >> 4 & 1) != 0) {
    FUN_100612a50(*(undefined8 *)(param_1 + 0x1c8));
    *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) & 0xffffffef;
  }
  lVar7 = *(long *)(param_1 + 0x1d0);
  if (*(long *)(param_1 + 0x1d0) == 0) {
    *(long *)(param_1 + 0x1d0) = param_1;
    lVar7 = param_1;
  }
  puVar6 = *(ulong **)(lVar7 + 0x30);
  *(ulong **)(param_1 + 0x1d8) = puVar6;
  if (puVar6 == (ulong *)0x0) {
    puVar6 = *(ulong **)(param_1 + 0x30);
    *(ulong **)(param_1 + 0x1d8) = puVar6;
  }
  if (*(int *)(param_1 + 0x248) == 0) {
    if (*(int *)(param_1 + 0x24c) < 1) goto LAB_10062d350;
    uVar8 = *(ulong *)(param_1 + (ulong)(1 < *(int *)(param_1 + 0x24c)) * 0x10 + 0x208);
    uVar1 = 1;
    if (*(uint *)((long)puVar6 + 0x24) != 0) {
      uVar1 = *(uint *)((long)puVar6 + 0x24);
    }
    uVar9 = (ulong)uVar1;
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (*(ulong *)(param_1 + 0x10) <= *puVar6) {
      uVar2 = *puVar6;
    }
    uVar3 = 0;
    if (uVar9 != 0) {
      uVar3 = (uVar2 - uVar8) / uVar9;
    }
    uVar4 = 0;
    if (uVar9 != 0) {
      uVar4 = (uVar8 - uVar2) / uVar9;
    }
    if (uVar8 < uVar2) {
      uVar4 = -uVar3;
    }
    if (-1 < (long)uVar4) goto LAB_10062d350;
  }
  FUN_10062d3a4(param_1);
LAB_10062d350:
  if ((*(long *)(param_1 + 0x1e8) == param_1 + 0x1e8) &&
     (*(long *)(param_1 + 0x1f0) == param_1 + 0x1e8)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0x254) = uVar5;
  if ((lVar10 != 0) && (lVar10 != 0)) {
    FUN_100570990(lVar10,5);
  }
  return 0;
}




undefined8 FUN_10062d3a4(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar19 = *(long *)(param_1 + 0x90);
  if (lVar19 != 0) {
    FUN_10057097c(lVar19,5);
  }
  plVar1 = (long *)(param_1 + 0x1e8);
  if ((*(long **)(param_1 + 0x1e8) == plVar1) && (*(long **)(param_1 + 0x1f0) == plVar1)) {
    iVar9 = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    bVar6 = true;
    fVar23 = 1.0;
    fVar21 = fVar23;
LAB_10062d584:
    iVar10 = 4 - iVar9;
    puVar14 = (undefined4 *)(param_1 + (long)iVar9 * 0x10 + 0x210);
    do {
      *(undefined8 *)(puVar14 + -2) = 0;
      *puVar14 = 0;
      iVar10 = iVar10 + -1;
      puVar14 = puVar14 + 4;
    } while (iVar10 != 0);
  }
  else {
    bVar6 = false;
    iVar9 = 0;
    fVar21 = 1.0;
    plVar13 = *(long **)(param_1 + 0x1e8);
    fVar23 = fVar21;
    do {
      plVar16 = (long *)*plVar13;
      plVar2 = plVar13;
      if (plVar16 != plVar1) {
        plVar2 = plVar16;
      }
      uVar17 = plVar2[3];
      uVar3 = *(uint *)((long)*(ulong **)(param_1 + 0x1d8) + 0x24);
      uVar4 = 1;
      if (uVar3 != 0) {
        uVar4 = uVar3;
      }
      uVar8 = (ulong)uVar4;
      uVar7 = **(ulong **)(param_1 + 0x1d8);
      uVar15 = *(ulong *)(param_1 + 0x10);
      if (*(ulong *)(param_1 + 0x10) <= uVar7) {
        uVar15 = uVar7;
      }
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = (uVar15 - uVar17) / uVar8;
      }
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = (uVar17 - uVar15) / uVar8;
      }
      if (uVar17 < uVar15) {
        uVar5 = -uVar7;
      }
      if ((long)uVar5 < 0) {
        fVar23 = *(float *)(plVar13 + 2);
        if (!bVar6) {
          fVar21 = fVar23;
        }
        lVar11 = *(long *)(param_1 + 0x90);
        puVar18 = (undefined8 *)plVar13[1];
        *puVar18 = plVar16;
        *(undefined8 **)(*plVar13 + 8) = puVar18;
        plVar13[1] = (long)plVar13;
        plVar13[2] = 0;
        plVar13[3] = -1;
        lVar12 = *(long *)(lVar11 + 0x14888);
        *plVar13 = lVar11 + 0x14880;
        plVar13[1] = lVar12;
        *(long **)(lVar11 + 0x14888) = plVar13;
        *(long **)plVar13[1] = plVar13;
        bVar6 = true;
        *(undefined4 *)(param_1 + 0x248) = 1;
      }
      else {
        lVar12 = param_1 + (long)iVar9 * 0x10;
        *(long *)(lVar12 + 0x208) = plVar13[3];
        *(int *)(lVar12 + 0x210) = (int)plVar13[2];
        iVar9 = iVar9 + 1;
      }
    } while ((plVar16 != plVar1) && (plVar13 = plVar16, iVar9 < 4));
    *(int *)(param_1 + 0x24c) = iVar9;
    *(undefined4 *)(param_1 + 0x248) = 0;
    if ((iVar9 == 0) && (bVar6)) {
      bVar6 = false;
      lVar12 = *(long *)(param_1 + 0x1c8);
      *(undefined4 *)(lVar12 + 0x6c) = 0;
      *(float *)(lVar12 + 0x70) = fVar23;
      *(float *)(lVar12 + 0x74) = fVar23;
      *(float *)(param_1 + 0x250) = fVar23;
    }
    else {
      if ((bVar6) &&
         ((plVar13 = (long *)*plVar1, plVar13 != plVar1 || (*(long **)(param_1 + 0x1f0) != plVar1)))
         ) {
        fVar22 = 0.0;
        for (; plVar13 != plVar1; plVar13 = (long *)*plVar13) {
          if (fVar22 <= *(float *)(plVar13 + 2)) {
            fVar22 = *(float *)(plVar13 + 2);
          }
        }
        *(float *)(param_1 + 0x250) = fVar22;
      }
      bVar6 = true;
    }
    if (iVar9 < 4) goto LAB_10062d584;
  }
  if (bVar6) {
    uVar20 = 0;
  }
  else {
    bVar6 = false;
    if ((fVar21 != fVar23) && (bVar6 = false, !NAN(fVar21) && !NAN(*(float *)(param_1 + 0x1e0)))) {
      bVar6 = fVar21 == *(float *)(param_1 + 0x1e0);
    }
    if (bVar6) {
      uVar15 = **(ulong **)(param_1 + 0x1d8);
      uVar17 = *(ulong *)(param_1 + 0x10);
      if (*(ulong *)(param_1 + 0x10) <= uVar15) {
        uVar17 = uVar15;
      }
      uVar4 = *(uint *)((long)*(ulong **)(param_1 + 0x1d8) + 0x24);
      uVar20 = FUN_10062dce8(param_1,uVar17);
      if ((((int)uVar20 != 0) ||
          (uVar20 = FUN_10062dce8(fVar23,param_1,uVar17 + (ulong)uVar4 * 0x40), (int)uVar20 != 0))
         || (uVar20 = FUN_10062d3a4(param_1), (int)uVar20 != 0)) goto LAB_10062d61c;
    }
    uVar20 = 0;
    *(float *)(param_1 + 0x1e0) = fVar23;
  }
LAB_10062d61c:
  if ((lVar19 != 0) && (lVar19 != 0)) {
    FUN_100570990(lVar19,5);
  }
  return uVar20;
}




undefined8 FUN_10062d64c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x1e8);
  puVar2 = *(undefined8 **)(param_1 + 0x1e8);
  if ((puVar2 != puVar1) || (*(undefined8 **)(param_1 + 0x1f0) != puVar1)) {
    fVar3 = 0.0;
    for (; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if (fVar3 <= *(float *)(puVar2 + 2)) {
        fVar3 = *(float *)(puVar2 + 2);
      }
    }
    *(float *)(param_1 + 0x250) = fVar3;
  }
  return 0;
}




undefined8 FUN_10062d694(long param_1,int param_2,long param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  void *pvVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong local_98 [4];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_3 == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = **(int **)(param_3 + 8);
  }
  if (param_4 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = (ulong)**(uint **)(param_4 + 8);
  }
  if ((param_3 == 0) || (*(long **)(param_3 + 0x18) == (long *)0x0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = **(long **)(param_3 + 0x18);
  }
  if (param_4 == 0) {
    pvVar16 = (void *)0x0;
  }
  else if (*(undefined8 **)(param_4 + 0x18) == (undefined8 *)0x0) {
    pvVar16 = (void *)0x0;
  }
  else {
    pvVar16 = (void *)**(undefined8 **)(param_4 + 0x18);
  }
  if (param_6 == 1) {
    uVar18 = *(uint *)(param_1 + 0x17c);
    *(uint *)(param_1 + 0x17c) = uVar18 & 0xffffffef;
    lVar11 = *(long *)(param_1 + 0x1c8);
    if (param_5 == 0) {
      if (*(long *)(lVar11 + 0x40) != 0) {
        sVar5 = *(short *)(lVar11 + 0x3a);
        **(int **)(param_4 + 8) = (int)sVar5;
        *(undefined4 *)(param_4 + 0x20) = 0;
        if (sVar5 < iVar17) {
          **(undefined4 **)(param_4 + 0x10) = 0;
        }
      }
      if (*(int *)(param_1 + 0x24c) < 1) {
        if (*(float *)(lVar11 + 0x70) == 1.0) {
          if (*(long *)(lVar11 + 0x50) == 0) {
            fVar27 = *(float *)(lVar11 + 0x7c);
            fVar29 = *(float *)(lVar11 + 0x88);
            bVar8 = false;
            if ((fVar27 == 1.0) && (bVar8 = false, !NAN(fVar29))) {
              bVar8 = fVar29 == 1.0;
            }
            if (bVar8) {
              uVar23 = 6;
              goto LAB_10062dbe4;
            }
            if (((fVar29 == 0.0) && (*(int *)(lVar11 + 0x80) == 0)) && (fVar27 != 0.0)) {
              FUN_100612a50();
              lVar11 = *(long *)(param_1 + 0x1c8);
              *(uint *)(lVar11 + 0x78) = *(uint *)(lVar11 + 0x78) | 8;
              fVar27 = *(float *)(lVar11 + 0x7c);
            }
            if ((fVar27 == 0.0) && (*(float *)(lVar11 + 0x88) == 0.0)) {
              uVar23 = 0xb;
              goto LAB_10062dbe4;
            }
          }
          uVar23 = 0;
        }
        else {
          uVar23 = 0;
        }
      }
      else {
        uVar23 = 0;
      }
    }
    else if (*(float *)(lVar11 + 0x7c) == *(float *)(lVar11 + 0x88)) {
      uVar23 = 0xb;
    }
    else {
      *(uint *)(param_1 + 0x17c) = uVar18 | 0x10;
      uVar23 = 0xb;
    }
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0x84);
    uVar25 = (ulong)uVar3;
    uVar4 = *(ushort *)(param_1 + 0x86);
    uVar19 = (ulong)uVar4;
    puVar14 = *(ulong **)(param_1 + 0x1d8);
    uVar22 = *(ulong *)(param_1 + 0x10);
    if (*(ulong *)(param_1 + 0x10) <= *puVar14) {
      uVar22 = *puVar14;
    }
    uVar12 = 1;
    if (*(uint *)((long)puVar14 + 0x24) != 0) {
      uVar12 = (ulong)*(uint *)((long)puVar14 + 0x24);
    }
    uVar15 = *(ulong *)(param_1 + 0x208);
    if (uVar22 < uVar15 || uVar22 - uVar15 == 0) {
      local_98[0] = 0;
      if (uVar12 != 0) {
        local_98[0] = (uVar15 - uVar22) / uVar12;
      }
    }
    else {
      local_98[0] = 0;
      if (uVar12 != 0) {
        local_98[0] = (uVar22 - uVar15) / uVar12;
      }
      local_98[0] = -local_98[0];
    }
    uVar15 = *(ulong *)(param_1 + 0x218);
    if (uVar22 < uVar15 || uVar22 - uVar15 == 0) {
      local_98[1] = 0;
      if (uVar12 != 0) {
        local_98[1] = (uVar15 - uVar22) / uVar12;
      }
    }
    else {
      local_98[1] = 0;
      if (uVar12 != 0) {
        local_98[1] = (uVar22 - uVar15) / uVar12;
      }
      local_98[1] = -local_98[1];
    }
    uVar15 = *(ulong *)(param_1 + 0x228);
    if (uVar22 < uVar15 || uVar22 - uVar15 == 0) {
      local_98[2] = 0;
      if (uVar12 != 0) {
        local_98[2] = (uVar15 - uVar22) / uVar12;
      }
    }
    else {
      local_98[2] = 0;
      if (uVar12 != 0) {
        local_98[2] = (uVar22 - uVar15) / uVar12;
      }
      local_98[2] = -local_98[2];
    }
    uVar15 = *(ulong *)(param_1 + 0x238);
    if (uVar22 < uVar15 || uVar22 - uVar15 == 0) {
      local_98[3] = 0;
      if (uVar12 != 0) {
        local_98[3] = (uVar15 - uVar22) / uVar12;
      }
    }
    else {
      local_98[3] = 0;
      if (uVar12 != 0) {
        local_98[3] = (uVar22 - uVar15) / uVar12;
      }
      local_98[3] = -local_98[3];
    }
    uVar22 = -(uVar20 >> 0x1f) & 0xfffffffc00000000 | uVar20 << 2;
    _bzero(pvVar16,uVar25 * uVar22);
    _bzero((void *)((long)pvVar16 + (ulong)(((uint)uVar4 + (uint)uVar3) * (int)uVar20) * 4),
           ((param_2 - (uint)uVar3) - (uint)uVar4) * uVar22);
    iVar21 = 0;
    lVar26 = 0;
    uVar23 = 0;
    do {
      iVar10 = *(int *)(param_1 + 0x24c);
      uVar18 = (uint)uVar19;
      uVar22 = uVar19;
      if (iVar10 == 0) {
        lVar9 = *(long *)(param_1 + 0x1c8);
        *(undefined4 *)(lVar9 + 0x74) = *(undefined4 *)(lVar9 + 0x70);
        *(undefined4 *)(lVar9 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(lVar9 + 0x70);
      }
      else {
        uVar12 = local_98[iVar21];
        lVar7 = uVar12 - lVar26;
        if (lVar7 == 0 || (long)uVar12 < lVar26) {
          if (2 < iVar21) {
            FUN_10062d150(param_1,0);
            uVar19 = *(ulong *)(param_1 + 0x10);
            if (*(ulong *)(param_1 + 0x10) <= *puVar14) {
              uVar19 = *puVar14;
            }
            uVar15 = 1;
            if (*(uint *)((long)puVar14 + 0x24) != 0) {
              uVar15 = (ulong)*(uint *)((long)puVar14 + 0x24);
            }
            uVar13 = *(ulong *)(param_1 + 0x208);
            if (uVar19 < uVar13 || uVar19 - uVar13 == 0) {
              uVar12 = 0;
              if (uVar15 != 0) {
                uVar12 = (uVar13 - uVar19) / uVar15;
              }
            }
            else {
              uVar12 = 0;
              if (uVar15 != 0) {
                uVar12 = (uVar19 - uVar13) / uVar15;
              }
              uVar12 = -uVar12;
            }
            local_98[0] = uVar12;
            uVar13 = *(ulong *)(param_1 + 0x218);
            if (uVar19 < uVar13 || uVar19 - uVar13 == 0) {
              local_98[1] = 0;
              if (uVar15 != 0) {
                local_98[1] = (uVar13 - uVar19) / uVar15;
              }
            }
            else {
              local_98[1] = 0;
              if (uVar15 != 0) {
                local_98[1] = (uVar19 - uVar13) / uVar15;
              }
              local_98[1] = -local_98[1];
            }
            uVar13 = *(ulong *)(param_1 + 0x228);
            if (uVar19 < uVar13 || uVar19 - uVar13 == 0) {
              local_98[2] = 0;
              if (uVar15 != 0) {
                local_98[2] = (uVar13 - uVar19) / uVar15;
              }
            }
            else {
              local_98[2] = 0;
              if (uVar15 != 0) {
                local_98[2] = (uVar19 - uVar13) / uVar15;
              }
              local_98[2] = -local_98[2];
            }
            uVar13 = *(ulong *)(param_1 + 0x238);
            if (uVar19 < uVar13 || uVar19 - uVar13 == 0) {
              local_98[3] = 0;
              if (uVar15 != 0) {
                local_98[3] = (uVar13 - uVar19) / uVar15;
              }
            }
            else {
              local_98[3] = 0;
              if (uVar15 != 0) {
                local_98[3] = (uVar19 - uVar13) / uVar15;
              }
              local_98[3] = -local_98[3];
            }
            iVar21 = 0;
            iVar10 = *(int *)(param_1 + 0x24c);
          }
          iVar1 = iVar21 + 1;
          if (iVar1 < iVar10) {
            uVar22 = local_98[iVar1];
            if ((long)uVar22 < 0) {
              uVar2 = *(undefined4 *)(param_1 + (long)iVar1 * 0x10 + 0x210);
              lVar9 = *(long *)(param_1 + 0x1c8);
              *(undefined4 *)(lVar9 + 0x70) = uVar2;
              *(undefined4 *)(lVar9 + 0x74) = uVar2;
              *(undefined4 *)(lVar9 + 0x6c) = 0;
              *(undefined4 *)(param_1 + 0x1e0) = uVar2;
              uVar22 = 0;
              iVar21 = iVar1;
            }
            else {
              fVar27 = (float)(long)(lVar26 - uVar12) / (float)(long)(uVar22 - uVar12);
              if (0.0 <= fVar27) {
                fVar29 = 1.0;
                if (fVar27 <= 1.0) {
                  fVar29 = fVar27;
                }
              }
              else {
                fVar29 = 0.0;
              }
              iVar10 = (int)lVar26;
              if (lVar26 <= (long)uVar12) {
                iVar10 = (int)uVar12;
              }
              fVar27 = *(float *)(param_1 + 0x208 + (long)iVar21 * 0x10 + 8);
              fVar28 = *(float *)(param_1 + 0x208 + (long)iVar1 * 0x10 + 8);
              lVar9 = *(long *)(param_1 + 0x1c8);
              fVar27 = fVar27 + fVar29 * (fVar28 - fVar27);
              *(float *)(lVar9 + 0x70) = fVar27;
              *(float *)(lVar9 + 0x74) = fVar28;
              uVar6 = (int)uVar22 - iVar10;
              *(uint *)(lVar9 + 0x6c) = uVar6;
              uVar24 = uVar6;
              if (uVar18 <= uVar6) {
                uVar24 = uVar18;
              }
              uVar22 = (ulong)uVar24;
              *(float *)(param_1 + 0x1e0) = fVar28;
              iVar21 = iVar1;
              if (uVar24 < uVar6) {
                *(float *)(param_1 + 0x1e0) =
                     fVar27 + ((float)uVar22 / (float)uVar6) * (fVar28 - fVar27);
              }
            }
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + (long)iVar21 * 0x10 + 0x210);
            lVar9 = *(long *)(param_1 + 0x1c8);
            *(undefined4 *)(lVar9 + 0x70) = uVar2;
            *(undefined4 *)(lVar9 + 0x74) = uVar2;
            *(undefined4 *)(lVar9 + 0x6c) = 0;
            *(undefined4 *)(param_1 + 0x1e0) = uVar2;
            iVar21 = iVar1;
          }
        }
        else {
          lVar9 = *(long *)(param_1 + 0x1c8);
          uVar24 = (uint)lVar7;
          if ((long)uVar19 <= lVar7) {
            uVar24 = uVar18;
          }
          *(undefined4 *)(lVar9 + 0x74) = *(undefined4 *)(lVar9 + 0x70);
          *(undefined4 *)(lVar9 + 0x6c) = 0;
          *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(lVar9 + 0x70);
          uVar22 = (ulong)uVar24;
        }
      }
      uVar24 = (uint)uVar22;
      iVar10 = (int)uVar25;
      if (uVar24 == 0) {
        uVar19 = 0;
      }
      else {
        if (*(int *)(param_4 + 0x20) == 1) {
          bVar8 = true;
        }
        else {
          bVar8 = *(int *)(param_3 + 0x20) == 1;
        }
        uVar23 = FUN_100613a18(lVar9,(void *)((long)pvVar16 +
                                             (ulong)(uint)(iVar10 * (int)uVar20) * 4),
                               lVar11 + (ulong)(uint)(iVar10 * iVar17) * 4,bVar8,uVar20,iVar17,0,
                               uVar22,1);
        uVar19 = uVar22;
      }
      uVar25 = (ulong)(uVar24 + iVar10);
      uVar19 = (ulong)(uVar18 - (int)uVar19);
      lVar26 = lVar26 + uVar22;
    } while (uVar18 != uVar24);
  }
LAB_10062dbe4:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return uVar23;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10062dc28(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x90);
  bVar2 = true;
  lVar3 = lVar5;
  if ((lVar5 != 0) && (((param_3 ^ 1) & 1) == 0)) {
    FUN_10057097c(lVar5,5);
    bVar2 = false;
    lVar3 = *(long *)(param_1 + 0x90);
  }
  plVar1 = (long *)param_2[1];
  *plVar1 = *param_2;
  *(long **)(*param_2 + 8) = plVar1;
  param_2[1] = (long)param_2;
  param_2[2] = 0;
  param_2[3] = -1;
  lVar4 = *(long *)(lVar3 + 0x14888);
  *param_2 = lVar3 + 0x14880;
  param_2[1] = lVar4;
  *(long **)(lVar3 + 0x14888) = param_2;
  *(long **)param_2[1] = param_2;
  *(undefined4 *)(param_1 + 0x248) = 1;
  if ((lVar5 != 0) && (!bVar2)) {
    FUN_100570990(lVar5,5);
  }
  return 0;
}




undefined8 FUN_10062dce8(float param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  
  lVar6 = *(long *)(param_2 + 0x90);
  if (lVar6 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10057097c(lVar6,5);
    lVar2 = *(long *)(param_2 + 0x90);
  }
  plVar7 = *(long **)(lVar2 + 0x14880);
  if (plVar7 == (long *)(lVar2 + 0x14880)) {
    uVar3 = FUN_10056b860();
    if ((int)uVar3 != 0) goto LAB_10062de4c;
    plVar1 = (long *)(*(long *)(param_2 + 0x90) + 0x14880);
    plVar7 = (long *)*plVar1;
    if (plVar7 == plVar1) {
      uVar3 = 0x1c;
      goto LAB_10062de4c;
    }
  }
  uVar3 = FUN_10062de84(param_2,param_3,param_3,0);
  if ((int)uVar3 == 0) {
    plVar1 = (long *)(param_2 + 0x1e8);
    if ((*(long **)(param_2 + 0x1e8) == plVar1) && (*(long **)(param_2 + 0x1f0) == plVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    plVar5 = (long *)plVar7[1];
    *plVar5 = *plVar7;
    *(long **)(*plVar7 + 8) = plVar5;
    *plVar7 = (long)plVar7;
    plVar7[1] = (long)plVar7;
    plVar7[2] = 0;
    plVar7[3] = -1;
    plVar5 = (long *)*plVar1;
    do {
      if (param_3 < (ulong)plVar5[3]) {
        plVar7[3] = param_3;
        lVar2 = plVar5[1];
        *plVar7 = (long)plVar5;
        plVar7[1] = lVar2;
        plVar5[1] = (long)plVar7;
        goto LAB_10062de10;
      }
      plVar5 = (long *)*plVar5;
    } while ((long *)plVar5[1] != plVar1);
    plVar7[3] = param_3;
    lVar2 = *(long *)(param_2 + 0x1f0);
    *plVar7 = (long)plVar1;
    plVar7[1] = lVar2;
    *(long **)(param_2 + 0x1f0) = plVar7;
LAB_10062de10:
    *(long **)plVar7[1] = plVar7;
    plVar7[2] = (ulong)(uint)param_1;
    fVar8 = param_1;
    if ((!bVar4) && (fVar8 = *(float *)(param_2 + 0x250), *(float *)(param_2 + 0x250) <= param_1)) {
      fVar8 = param_1;
    }
    uVar3 = 0;
    *(float *)(param_2 + 0x250) = fVar8;
    *(undefined4 *)(param_2 + 0x248) = 1;
    *(undefined4 *)(param_2 + 0x254) = 0;
  }
LAB_10062de4c:
  if ((lVar6 != 0) && (lVar6 != 0)) {
    FUN_100570990(lVar6,5);
  }
  return uVar3;
}




undefined8 FUN_10062de84(long param_1,ulong param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  
  bVar4 = false;
  lVar9 = *(long *)(param_1 + 0x90);
  if ((lVar9 != 0) && (((param_4 ^ 1) & 1) == 0)) {
    FUN_10057097c(lVar9,5);
    bVar4 = true;
  }
  if (param_3 < param_2) {
    uVar10 = 0x1f;
  }
  else {
    bVar3 = false;
    plVar1 = (long *)(param_1 + 0x1e8);
    plVar13 = *(long **)(param_1 + 0x1e8);
    while (plVar12 = plVar13, plVar12 != plVar1) {
      plVar13 = (long *)*plVar12;
      if (param_2 <= (ulong)plVar12[3] && (ulong)plVar12[3] <= param_3) {
        lVar11 = *(long *)(param_1 + 0x90);
        bVar3 = true;
        bVar2 = ((param_4 ^ 1) & 1) == 0;
        lVar5 = lVar11;
        plVar6 = plVar13;
        if (lVar11 != 0 && bVar2) {
          FUN_10057097c(lVar11,5);
          lVar5 = *(long *)(param_1 + 0x90);
          plVar6 = (long *)*plVar12;
        }
        plVar7 = (long *)plVar12[1];
        *plVar7 = (long)plVar6;
        *(long **)(*plVar12 + 8) = plVar7;
        plVar12[1] = (long)plVar12;
        plVar12[2] = 0;
        plVar12[3] = -1;
        lVar8 = *(long *)(lVar5 + 0x14888);
        *plVar12 = lVar5 + 0x14880;
        plVar12[1] = lVar8;
        *(long **)(lVar5 + 0x14888) = plVar12;
        *(long **)plVar12[1] = plVar12;
        *(undefined4 *)(param_1 + 0x248) = 1;
        if ((lVar11 != 0) && (lVar11 != 0 && bVar2)) {
          FUN_100570990(lVar11,5);
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      *(undefined4 *)(param_1 + 0x248) = 1;
    }
    if (((param_2 == 0) && (param_3 == 0xfffffffffff00000)) &&
       (lVar5 = *(long *)(param_1 + 0x1c8), lVar5 != 0)) {
      *(undefined4 *)(lVar5 + 0x6c) = 0;
      *(undefined4 *)(lVar5 + 0x70) = 0x3f800000;
      *(undefined4 *)(lVar5 + 0x74) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x250) = 0x3f800000;
    }
    else if ((bVar3) &&
            ((plVar13 = (long *)*plVar1, plVar13 != plVar1 ||
             (*(long **)(param_1 + 0x1f0) != plVar1)))) {
      fVar14 = 0.0;
      for (; plVar13 != plVar1; plVar13 = (long *)*plVar13) {
        if (fVar14 <= *(float *)(plVar13 + 2)) {
          fVar14 = *(float *)(plVar13 + 2);
        }
      }
      *(float *)(param_1 + 0x250) = fVar14;
    }
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x254) = 0;
  }
  if (lVar9 != 0 && bVar4) {
    FUN_100570990(lVar9,5);
  }
  return uVar10;
}




undefined8 FUN_10062e078(undefined8 param_1,long param_2,ulong param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  lVar6 = *(long *)(param_2 + 0x90);
  if (lVar6 != 0) {
    FUN_10057097c(lVar6,5);
  }
  uVar3 = (param_3 >> 0x14) - 0x40;
  if (param_3 >> 0x1a == 0) {
    uVar3 = 0;
  }
  fVar8 = *(float *)(param_2 + 0x1e0);
  if (*(long **)(param_2 + 0x1e8) != (long *)(param_2 + 0x1e8)) {
    plVar1 = *(long **)(param_2 + 0x1e8);
    plVar5 = (long *)0x0;
    do {
      plVar4 = plVar1;
      fVar7 = *(float *)(plVar4 + 2);
      if (uVar3 <= (ulong)plVar4[3] >> 0x14) {
        if (plVar5 != (long *)0x0) {
          fVar8 = (float)(uVar3 - ((ulong)plVar5[3] >> 0x14)) /
                  (float)(((ulong)plVar4[3] >> 0x14) - ((ulong)plVar5[3] >> 0x14));
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          fVar8 = *(float *)(plVar5 + 2) + (fVar7 - *(float *)(plVar5 + 2)) * fVar8;
        }
        break;
      }
      plVar1 = (long *)*plVar4;
      plVar5 = plVar4;
      fVar8 = fVar7;
    } while ((long *)*plVar4 != (long *)(param_2 + 0x1e8));
  }
  uVar2 = FUN_10062de84(param_2,uVar3 << 0x14,0xfffffffffff00000,0);
  if (((int)uVar2 == 0) && (uVar2 = FUN_10062dce8(fVar8,param_2,uVar3 << 0x14), (int)uVar2 == 0)) {
    uVar2 = FUN_10062dce8(param_1,param_2,param_3);
  }
  if ((lVar6 != 0) && (lVar6 != 0)) {
    FUN_100570990(lVar6,5);
  }
  return uVar2;
}




undefined8 FUN_10062e1d0(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  bVar4 = false;
  lVar8 = *(long *)(param_1 + 0x90);
  if ((lVar8 != 0) && (((param_2 ^ 1) & 1) == 0)) {
    FUN_10057097c(lVar8,5);
    bVar4 = true;
  }
  if (*(long **)(param_1 + 0x1e8) != (long *)(param_1 + 0x1e8)) {
    lVar6 = *(long *)(param_1 + 0x90);
    plVar1 = (long *)(lVar6 + 0x14888);
    plVar5 = *(long **)(param_1 + 0x1e8);
    do {
      plVar2 = (long *)*plVar5;
      puVar3 = (undefined8 *)plVar5[1];
      *puVar3 = plVar2;
      *(undefined8 **)(*plVar5 + 8) = puVar3;
      plVar5[1] = (long)plVar5;
      plVar5[2] = 0;
      plVar5[3] = -1;
      lVar7 = *plVar1;
      *plVar5 = lVar6 + 0x14880;
      plVar5[1] = lVar7;
      *plVar1 = (long)plVar5;
      *(long **)plVar5[1] = plVar5;
      plVar5 = plVar2;
    } while (plVar2 != (long *)(param_1 + 0x1e8));
  }
  *(undefined4 *)(param_1 + 0x248) = 1;
  if ((lVar8 != 0) && (bVar4)) {
    FUN_100570990(lVar8,5);
  }
  return 0;
}




undefined8 FUN_10062e298(long param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x90);
  if (lVar8 != 0) {
    FUN_10057097c(lVar8,5);
  }
  if (*(long **)(param_2 + 0x1e8) != (long *)(param_2 + 0x1e8)) {
    lVar6 = *(long *)(param_2 + 0x90);
    plVar1 = (long *)(lVar6 + 0x14888);
    plVar4 = *(long **)(param_2 + 0x1e8);
    do {
      plVar5 = (long *)*plVar4;
      puVar2 = (undefined8 *)plVar4[1];
      *puVar2 = plVar5;
      *(undefined8 **)(*plVar4 + 8) = puVar2;
      plVar4[1] = (long)plVar4;
      plVar4[2] = 0;
      plVar4[3] = -1;
      lVar7 = *plVar1;
      *plVar4 = lVar6 + 0x14880;
      plVar4[1] = lVar7;
      *plVar1 = (long)plVar4;
      *(long **)plVar4[1] = plVar4;
      plVar4 = plVar5;
    } while (plVar5 != (long *)(param_2 + 0x1e8));
  }
  *(undefined4 *)(param_2 + 0x248) = 1;
  plVar1 = (long *)(param_1 + 0x1e8);
  plVar4 = *(long **)(param_1 + 0x1e8);
  if (plVar4 == plVar1) {
    plVar5 = *(long **)(param_1 + 0x1f0);
    if (plVar5 == plVar1) goto LAB_10062e3a8;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x1f0);
  }
  *plVar5 = (long)plVar4;
  *(long **)(*(long *)(param_1 + 0x1e8) + 8) = plVar5;
  *(long **)(param_1 + 0x1e8) = plVar1;
  *(long **)(param_1 + 0x1f0) = plVar1;
  *(undefined8 *)(param_1 + 0x200) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x248) = 1;
  lVar6 = plVar4[1];
  *(long **)(param_2 + 0x1e8) = plVar4;
  *(long *)(param_2 + 0x1f0) = lVar6;
  plVar4[1] = param_2 + 0x1e8;
  **(long **)(param_2 + 0x1f0) = param_2 + 0x1e8;
  *(undefined4 *)(param_2 + 0x248) = 1;
LAB_10062e3a8:
  lVar6 = *(long *)(param_1 + 0x1c8);
  lVar7 = *(long *)(param_2 + 0x1c8);
  *(undefined4 *)(lVar7 + 0x6c) = *(undefined4 *)(lVar6 + 0x6c);
  *(undefined4 *)(lVar7 + 0x70) = *(undefined4 *)(lVar6 + 0x70);
  *(undefined4 *)(lVar7 + 0x74) = *(undefined4 *)(lVar6 + 0x74);
  *(undefined4 *)(param_2 + 0x250) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(param_2 + 0x254) = 0;
  *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  lVar6 = *(long *)(param_1 + 0x1c8);
  *(undefined4 *)(lVar6 + 0x6c) = 0;
  if (param_3 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x1e0);
    *(undefined4 *)(lVar6 + 0x70) = uVar3;
    *(undefined4 *)(lVar6 + 0x74) = uVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
    *(undefined8 *)(lVar6 + 0x70) = 0x3f8000003f800000;
  }
  *(undefined4 *)(param_1 + 0x250) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x254) = 0;
  if ((lVar8 != 0) && (lVar8 != 0)) {
    FUN_100570990(lVar8,5);
  }
  return 0;
}




undefined8 FUN_10062e438(long param_1,uint *param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(param_1 + 0x90);
  if (lVar6 != 0) {
    FUN_10057097c(lVar6,5);
  }
  if (param_2 == (uint *)0x0) {
    uVar7 = 0x1f;
  }
  else {
    plVar2 = (long *)(param_1 + 0x1e8);
    uVar3 = 0xffffffff;
    plVar4 = plVar2;
    do {
      plVar4 = (long *)*plVar4;
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
    } while (plVar4 != plVar2);
    plVar2 = (long *)*plVar2;
    if ((param_3 == 0) && (param_4 == 0)) {
      uVar7 = 0;
      *param_2 = uVar1;
    }
    else {
      uVar5 = (ulong)*param_2;
      if (uVar1 < *param_2) {
        *param_2 = uVar1;
        uVar5 = uVar3;
      }
      if ((int)uVar5 != 0) {
        uVar3 = 0;
        do {
          if (param_3 != 0) {
            *(long *)(param_3 + uVar3 * 8) = plVar2[3];
          }
          if (param_4 != 0) {
            *(int *)(param_4 + uVar3 * 4) = (int)plVar2[2];
          }
          plVar2 = (long *)*plVar2;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar5);
      }
      uVar7 = 0;
    }
  }
  if (lVar6 != 0) {
    FUN_100570990(lVar6,5);
  }
  return uVar7;
}




undefined8 FUN_10062e538(long param_1,undefined8 param_2)

{
  undefined4 local_38 [2];
  long local_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) == 0) {
    local_38[0] = 0x12;
    local_30 = param_1;
    uStack_28 = param_2;
    FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_38);
  }
  else {
    *(undefined8 *)(param_1 + 0x1d0) = param_2;
  }
  return 0;
}




void FUN_10062e57c(undefined8 *param_1)

{
  FUN_10062cf28(*param_1);
  return;
}




undefined8 FUN_10062e584(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x1c8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::free
                      ((DSPConnectionI *)(*(long *)(lVar2 + 0x90) + 0x790),
                       SUB81(*(long *)(lVar2 + 0x1c8),0));
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined8 *)(lVar2 + 0x1c8) = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_10062e5cc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x1e0) = 0x3f800000;
  *(ushort *)(lVar1 + 0x3c) = *(ushort *)(lVar1 + 0x3c) | 0x20;
  FUN_100612958(*(undefined8 *)(lVar1 + 0x1c8),0);
  *(undefined2 *)(lVar1 + 0x86) = 0;
  *(undefined2 *)(lVar1 + 0x84) = 0;
  *(undefined4 *)(lVar1 + 0x210) = 0;
  *(undefined8 *)(lVar1 + 0x208) = 0;
  *(undefined4 *)(lVar1 + 0x220) = 0;
  *(undefined8 *)(lVar1 + 0x218) = 0;
  *(undefined4 *)(lVar1 + 0x230) = 0;
  *(undefined8 *)(lVar1 + 0x228) = 0;
  *(undefined4 *)(lVar1 + 0x240) = 0;
  *(undefined8 *)(lVar1 + 0x238) = 0;
  *(undefined4 *)(lVar1 + 0x248) = 1;
  *(undefined4 *)(lVar1 + 0x24c) = 0;
  *(undefined4 *)(lVar1 + 0x250) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0x254) = 1;
  return 0;
}




void FUN_10062e648(undefined8 *param_1)

{
  FUN_10062d694(*param_1);
  return;
}




void FUN_10062e650(void)

{
  _memset(&DAT_101ea4918,0,0x60);
  FUN_1005ecc98(&DAT_101ea491c,"Release Time",0x10);
  FUN_1005ecc98(&DAT_101ea492c,"ms",0x10);
  DAT_101ea4948 = 0x3f800000;
  DAT_101ea4940 = "Time to ramp the silence to full in ms.  0.0 to 1000.0. Default = 10.0.";
  DAT_101ea494c = 0x447a0000;
  DAT_101ea4950 = 0x41200000;
  DAT_101ea4958 = 1;
  _memset(&DAT_101ea4978,0,0x60);
  FUN_1005ecc98(&DAT_101ea497c,"Ceiling",0x10);
  FUN_1005ecc98(&DAT_101ea498c,"dB",0x10);
  DAT_101ea49a0 = "Maximum level of the output signal in dB.  -12.0 to 0.0.  Default = 0.0.";
  DAT_101ea49a8 = 0xc1400000;
  DAT_101ea49ac = 0;
  DAT_101ea49b0 = 0;
  DAT_101ea49b8 = 1;
  _memset(&DAT_101ea49d8,0,0x60);
  FUN_1005ecc98(&DAT_101ea49dc,"Maximizer Gain",0x10);
  FUN_1005ecc98(&DAT_101ea49ec,"dB",0x10);
  DAT_101ea4a00 =
       "Maximum amplification allowed in dB.  0.0 to 12.0.  Default = 0.0. 0.0 = no amplifaction, higher values allow more boost."
  ;
  DAT_101ea4a08 = 0;
  DAT_101ea4a0c = 0x41400000;
  DAT_101ea4a10 = 0x3f800000;
  DAT_101ea4a18 = 1;
  _memset(&DAT_101ea4a38,0,0x60);
  DAT_101ea4a38 = 2;
  FUN_1005ecc98(&DAT_101ea4a3c,"Mode",0x10);
  FUN_1005ecc98(&DAT_101ea4a4c,"",0x10);
  DAT_101ea4a68 = 0;
  DAT_101ea4a70 = 0;
  DAT_101ea4a60 =
       "Channel processing mode.  true or false.  Default = false.  false = Independent (limiter per channel), true = Linked"
  ;
  DAT_101ea4a98 = &DAT_101872658;
  DAT_101ea4ab0 = 0xb;
  DAT_101ea4aa8 = 0x260;
  return;
}




undefined8 FUN_10062e814(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  _memset_pattern16((void *)(param_1 + 0x1c8),&DAT_10117d930,0x80);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x708);
  lVar2 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar4 = 0;
    do {
      piVar3 = *(int **)(*(long *)(lVar2 + 0x68) + lVar4 * 8);
      if (*piVar3 == 2) {
        uVar1 = FUN_1005ceffc(param_1,lVar4,piVar3[0xc] != 0);
LAB_10062e89c:
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = *(long *)(param_1 + 0xd0);
      }
      else if (*piVar3 == 0) {
        uVar1 = FUN_1005cef0c(piVar3[0xe],param_1,lVar4);
        goto LAB_10062e89c;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(lVar2 + 0x60));
  }
  return 0;
}




undefined8 FUN_10062e8c4(void)

{
  return 0;
}




undefined8 FUN_10062e8cc(long param_1)

{
  _memset_pattern16((void *)(param_1 + 0x1c8),&DAT_10117d930,0x80);
  return 0;
}




undefined8 FUN_10062e8f4(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((param_2 != 0) && (param_4 != 0)) {
    uVar3 = 0;
    iVar4 = 0;
    fVar9 = *(float *)(param_1 + 0x254);
    fVar10 = *(float *)(param_1 + 0x250);
    iVar2 = *(int *)(param_1 + 0x25c);
    do {
      if (iVar2 != 0) {
        *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 600) * *(float *)(param_1 + 0x1c8);
      }
      if (param_5 != 0) {
        lVar5 = 0;
        iVar6 = 0;
        uVar7 = uVar3;
        do {
          if (iVar2 == 0) {
            lVar1 = param_1 + (lVar5 >> 0x20) * 4;
            fVar11 = *(float *)(param_1 + 600) * *(float *)(lVar1 + 0x1c8);
            *(float *)(lVar1 + 0x1c8) = fVar11;
            iVar8 = iVar6;
          }
          else {
            fVar11 = *(float *)(param_1 + 0x1c8);
            iVar8 = 0;
          }
          fVar12 = *(float *)(param_2 + uVar7 * 4);
          fVar13 = ABS(fVar12);
          if (fVar11 < fVar13) {
            *(float *)(param_1 + (long)iVar8 * 4 + 0x1c8) = fVar13;
            fVar12 = *(float *)(param_2 + uVar7 * 4);
            fVar11 = fVar13;
          }
          fVar11 = fVar10 / fVar11;
          fVar13 = fVar9;
          if (fVar11 <= fVar9) {
            fVar13 = fVar11;
          }
          *(float *)(param_3 + uVar7 * 4) = fVar12 * fVar13;
          iVar6 = iVar6 + 1;
          uVar7 = (ulong)((int)uVar7 + 1);
          lVar5 = lVar5 + 0x100000000;
        } while (param_5 != iVar6);
      }
      iVar4 = iVar4 + 1;
      uVar3 = (ulong)(uint)((int)uVar3 + param_5);
    } while (iVar4 != param_4);
  }
  return 0;
}




undefined8 FUN_10062e9cc(float param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_3 == 2) {
    if (param_1 <= -80.0) {
      uVar1 = 0;
    }
    else {
      uVar1 = _powf(0x41200000,param_1 / 20.0);
    }
    *(undefined4 *)(param_2 + 0x254) = uVar1;
  }
  else if (param_3 == 1) {
    if (param_1 <= -80.0) {
      *(undefined4 *)(param_2 + 0x250) = 0;
    }
    else {
      uVar1 = _powf(0x41200000,param_1 / 20.0);
      *(undefined4 *)(param_2 + 0x250) = uVar1;
    }
  }
  else {
    if (param_3 != 0) {
      return 0x1f;
    }
    *(float *)(param_2 + 0x24c) = param_1;
  }
  fVar2 = *(float *)(param_2 + 0x24c) / 1000.0;
  *(float *)(param_2 + 600) = fVar2 / (fVar2 + 1.0 / (float)*(int *)(param_2 + 0x248));
  return 0;
}




undefined8 FUN_10062ea9c(long param_1,int param_2,float *param_3,char *param_4)

{
  float fVar1;
  
  if (param_2 == 2) {
    if (*(float *)(param_1 + 0x254) <= 0.0) {
      fVar1 = -80.0;
    }
    else {
      fVar1 = (float)_log10f();
      fVar1 = fVar1 * 20.0;
    }
    *param_3 = fVar1;
    if (param_4 == (char *)0x0) {
      return 0;
    }
    fVar1 = *(float *)(param_1 + 0x254);
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return 0x1f;
      }
      *param_3 = *(float *)(param_1 + 0x24c);
      if (param_4 == (char *)0x0) {
        return 0;
      }
      goto LAB_10062eb6c;
    }
    if (*(float *)(param_1 + 0x250) <= 0.0) {
      fVar1 = -80.0;
    }
    else {
      fVar1 = (float)_log10f();
      fVar1 = fVar1 * 20.0;
    }
    *param_3 = fVar1;
    if (param_4 == (char *)0x0) {
      return 0;
    }
    fVar1 = *(float *)(param_1 + 0x250);
  }
  if (0.0 < fVar1) {
    _log10f();
  }
LAB_10062eb6c:
  _sprintf(param_4,"%.02f");
  return 0;
}




undefined8 FUN_10062eba0(long param_1,int param_2,int param_3)

{
  if (param_2 == 3) {
    *(uint *)(param_1 + 0x25c) = (uint)(param_3 != 0);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_10062ebcc(long param_1,int param_2,undefined4 *param_3,void *param_4)

{
  char *pcVar1;
  bool bVar2;
  size_t sVar3;
  
  if (param_2 == 3) {
    *param_3 = *(undefined4 *)(param_1 + 0x25c);
    if (param_4 != (void *)0x0) {
      bVar2 = *(int *)(param_1 + 0x25c) == 0;
      pcVar1 = "Linked";
      if (bVar2) {
        pcVar1 = "Independent";
      }
      sVar3 = 7;
      if (bVar2) {
        sVar3 = 0xc;
      }
      _memcpy(param_4,pcVar1,sVar3);
    }
    return 0;
  }
  return 0x1f;
}




void FUN_10062ec30(undefined8 *param_1)

{
  FUN_10062e814(*param_1);
  return;
}




undefined8 FUN_10062ec38(void)

{
  return 0;
}




undefined8 FUN_10062ec40(long *param_1)

{
  _memset_pattern16((void *)(*param_1 + 0x1c8),&DAT_10117d930,0x80);
  return 0;
}




undefined8 FUN_10062ec6c(long *param_1,long param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((param_2 != 0) && (param_4 != 0)) {
    uVar4 = 0;
    iVar5 = 0;
    lVar6 = *param_1;
    fVar10 = *(float *)(lVar6 + 0x254);
    fVar11 = *(float *)(lVar6 + 0x250);
    iVar2 = *(int *)(lVar6 + 0x25c);
    do {
      if (iVar2 != 0) {
        *(float *)(lVar6 + 0x1c8) = *(float *)(lVar6 + 600) * *(float *)(lVar6 + 0x1c8);
      }
      if (param_5 != 0) {
        lVar7 = 0;
        iVar8 = 0;
        uVar9 = uVar4;
        do {
          if (iVar2 == 0) {
            lVar1 = lVar6 + (lVar7 >> 0x20) * 4;
            fVar12 = *(float *)(lVar6 + 600) * *(float *)(lVar1 + 0x1c8);
            *(float *)(lVar1 + 0x1c8) = fVar12;
            iVar3 = iVar8;
          }
          else {
            fVar12 = *(float *)(lVar6 + 0x1c8);
            iVar3 = 0;
          }
          fVar13 = *(float *)(param_2 + uVar9 * 4);
          fVar14 = ABS(fVar13);
          if (fVar12 < fVar14) {
            *(float *)(lVar6 + (long)iVar3 * 4 + 0x1c8) = fVar14;
            fVar13 = *(float *)(param_2 + uVar9 * 4);
            fVar12 = fVar14;
          }
          fVar12 = fVar11 / fVar12;
          fVar14 = fVar10;
          if (fVar12 <= fVar10) {
            fVar14 = fVar12;
          }
          *(float *)(param_3 + uVar9 * 4) = fVar13 * fVar14;
          iVar8 = iVar8 + 1;
          uVar9 = (ulong)((int)uVar9 + 1);
          lVar7 = lVar7 + 0x100000000;
        } while (param_5 != iVar8);
      }
      iVar5 = iVar5 + 1;
      uVar4 = (ulong)(uint)((int)uVar4 + param_5);
    } while (iVar5 != param_4);
  }
  return 0;
}




undefined8 FUN_10062ed48(float param_1,long *param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  
  lVar1 = *param_2;
  if (param_3 == 2) {
    if (param_1 <= -80.0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _powf(0x41200000,param_1 / 20.0);
    }
    *(undefined4 *)(lVar1 + 0x254) = uVar2;
  }
  else if (param_3 == 1) {
    if (param_1 <= -80.0) {
      *(undefined4 *)(lVar1 + 0x250) = 0;
    }
    else {
      uVar2 = _powf(0x41200000,param_1 / 20.0);
      *(undefined4 *)(lVar1 + 0x250) = uVar2;
    }
  }
  else {
    if (param_3 != 0) {
      return 0x1f;
    }
    *(float *)(lVar1 + 0x24c) = param_1;
  }
  fVar3 = *(float *)(lVar1 + 0x24c) / 1000.0;
  *(float *)(lVar1 + 600) = fVar3 / (fVar3 + 1.0 / (float)*(int *)(lVar1 + 0x248));
  return 0;
}




void FUN_10062ee18(undefined8 *param_1)

{
  FUN_10062ea9c(*param_1);
  return;
}




undefined8 FUN_10062ee20(long *param_1,int param_2,int param_3)

{
  if (param_2 == 3) {
    *(uint *)(*param_1 + 0x25c) = (uint)(param_3 != 0);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_10062ee4c(long *param_1,int param_2,undefined4 *param_3,void *param_4)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  size_t sVar4;
  
  if (param_2 == 3) {
    lVar3 = *param_1;
    *param_3 = *(undefined4 *)(lVar3 + 0x25c);
    if (param_4 != (void *)0x0) {
      bVar2 = *(int *)(lVar3 + 0x25c) == 0;
      pcVar1 = "Linked";
      if (bVar2) {
        pcVar1 = "Independent";
      }
      sVar4 = 7;
      if (bVar2) {
        sVar4 = 0xc;
      }
      _memcpy(param_4,pcVar1,sVar4);
    }
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_10062eeb4(short *param_1,long param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 4);
  if (pvVar4 != (void *)0x0) {
    if ((int)param_1[1] * (int)*param_1 == (int)param_3[1] * (int)*param_3) goto LAB_10062ef7c;
    FUN_1005d7f1c(param_2 + 0x14f68,pvVar4,"",0);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (*(long *)(param_3 + 4) == 0) {
    return 0;
  }
  pvVar4 = (void *)FUN_1005d7708(param_2 + 0x14f68,(int)*param_3 * (int)param_3[1] * 4,"",0,0,0);
  if (pvVar4 == (void *)0x0) {
    return 0x26;
  }
  sVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = sVar1;
  *(void **)(param_1 + 4) = pvVar4;
LAB_10062ef7c:
  if (param_1 == param_3) {
    return 0;
  }
  pvVar3 = *(void **)(param_3 + 4);
  if (pvVar3 != (void *)0x0) {
    sVar1 = *param_3;
    *param_1 = sVar1;
    sVar2 = param_3[1];
    param_1[1] = sVar2;
    _memcpy(pvVar4,pvVar3,(long)((ulong)(uint)((int)sVar1 * (int)sVar2) << 0x20) >> 0x1e);
    return 0;
  }
  return 0;
}




undefined8 FUN_10062efd0(undefined2 *param_1,long param_2)

{
  if (*(long *)(param_1 + 4) != 0) {
    FUN_1005d7f1c(param_2 + 0x14f68,*(long *)(param_1 + 4),"",0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return 0;
}




undefined8 FUN_10062f024(short *param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5)

{
  short sVar1;
  short sVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  
  if (param_5 == 0) {
    param_5 = param_4;
  }
  pvVar3 = *(void **)(param_1 + 4);
  if (pvVar3 != (void *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      sVar1 = param_1[1];
      if (((param_5 == param_4) && (sVar1 == param_3)) && ((int)*param_1 == param_4)) {
        _memcpy(pvVar3,param_2,
                -(ulong)(param_4 * param_3 >> 0x1f) & 0xfffffffc00000000 |
                (ulong)(param_4 * param_3) << 2);
      }
      else if (0 < sVar1) {
        iVar5 = 0;
        lVar6 = 0;
        sVar2 = *param_1;
        do {
          if (0 < sVar2) {
            lVar7 = 0;
            puVar8 = param_2;
            iVar4 = iVar5;
            do {
              if ((lVar6 < param_3) && (lVar7 < (int)param_4)) {
                *(undefined4 *)((long)pvVar3 + (long)iVar4 * 4) = *puVar8;
              }
              else {
                *(undefined4 *)((long)pvVar3 + (long)iVar4 * 4) = 0;
              }
              lVar7 = lVar7 + 1;
              iVar4 = iVar4 + 1;
              puVar8 = puVar8 + 1;
            } while (lVar7 < (int)sVar2);
          }
          lVar6 = lVar6 + 1;
          iVar5 = iVar5 + sVar2;
          param_2 = (undefined4 *)
                    ((long)param_2 +
                    (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2));
        } while (lVar6 < (int)sVar1);
      }
      return 0;
    }
    return 0x1f;
  }
  return 0x1e;
}




undefined8 FUN_10062f120(short *param_1,undefined4 *param_2,int *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  
  if (param_2 == (undefined4 *)0x0) {
    if (param_3 == (int *)0x0 && param_4 == (uint *)0x0) {
      return 0x1f;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_1[1];
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (int)*param_1;
      return 0;
    }
  }
  else {
    if (param_3 == (int *)0x0) {
      return 0x1f;
    }
    if (param_4 == (uint *)0x0) {
      return 0x1f;
    }
    iVar5 = *param_3;
    if (iVar5 == 0) {
      iVar5 = (int)param_1[1];
      *param_3 = iVar5;
    }
    uVar3 = *param_4;
    if (uVar3 == 0) {
      uVar3 = (uint)*param_1;
      *param_4 = uVar3;
      iVar5 = *param_3;
    }
    if (0x20 < iVar5) {
      return 0x1f;
    }
    if (iVar5 < 0) {
      return 0x1f;
    }
    if (0x20 < uVar3) {
      return 0x1f;
    }
    uVar1 = uVar3;
    if (param_5 != 0) {
      uVar1 = param_5;
    }
    pvVar2 = *(void **)(param_1 + 4);
    if (((pvVar2 == (void *)0x0) || (iVar5 != param_1[1])) || (uVar1 != (int)*param_1)) {
      if (0 < iVar5) {
        lVar4 = 0;
        do {
          if (0 < (int)uVar3) {
            lVar6 = 0;
            puVar7 = param_2;
            do {
              if (((int)lVar4 == (int)lVar6) && (pvVar2 == (void *)0x0)) {
                *puVar7 = 0x3f800000;
              }
              else if ((pvVar2 == (void *)0x0) || ((param_1[1] <= lVar4 || (*param_1 <= lVar6)))) {
                *puVar7 = 0;
              }
              else {
                *puVar7 = *(undefined4 *)
                           ((long)pvVar2 + (long)((int)lVar6 + (int)lVar4 * (int)*param_1) * 4);
              }
              lVar6 = lVar6 + 1;
              puVar7 = puVar7 + 1;
            } while (lVar6 < (int)uVar3);
          }
          lVar4 = lVar4 + 1;
          param_2 = (undefined4 *)
                    ((long)param_2 +
                    (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
        } while (lVar4 < iVar5);
      }
    }
    else {
      _memcpy(param_2,pvVar2,
              -(ulong)(uVar3 * iVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar3 * iVar5) << 2);
    }
  }
  return 0;
}




undefined8 * FUN_10062f284(void)

{
  if (DAT_101dbd2d5 == '\0') {
    _memset(&DAT_101ea4ad0,0,0x60);
    DAT_101ea4ad0 = 1;
    FUN_1005ecc98(&DAT_101ea4ad4,"Panning Mode",0x10);
    FUN_1005ecc98(&DAT_101ea4ae4,"",0x10);
    DAT_101ea4af8 = "Output speaker mode";
    DAT_101ea4b00 = 0;
    DAT_101ea4b04 = 2;
    DAT_101ea4b08 = 2;
    DAT_101ea4b0c = 0;
    DAT_101ea4b10 = 0;
    _memset(&DAT_101ea4b30,0,0x60);
    FUN_1005ecc98(&DAT_101ea4b34,"Stereo Position",0x10);
    FUN_1005ecc98(&DAT_101ea4b44,"",0x10);
    DAT_101ea4b58 = "Stereo pan position";
    DAT_101ea4b60 = 0xc2c80000;
    DAT_101ea4b64 = 0x42c80000;
    DAT_101ea4b68 = 0;
    DAT_101ea4b70 = 1;
    _memset(&DAT_101ea4b90,0,0x60);
    FUN_1005ecc98(&DAT_101ea4b94,"Surr. Direction",0x10);
    FUN_1005ecc98(&DAT_101ea4ba4,"Deg.",0x10);
    DAT_101ea4bb8 = "Surround pan direction";
    DAT_101ea4bc0 = 0xc3340000;
    DAT_101ea4bc4 = 0x43340000;
    DAT_101ea4bc8 = 0;
    DAT_101ea4bd0 = 1;
    _memset(&DAT_101ea4bf0,0,0x60);
    FUN_1005ecc98(&DAT_101ea4bf4,"Surr. Extent",0x10);
    FUN_1005ecc98(&DAT_101ea4c04,"Deg.",0x10);
    DAT_101ea4c18 = "Surround pan extent";
    DAT_101ea4c20 = 0;
    DAT_101ea4c24 = 0x43b40000;
    DAT_101ea4c28 = 0x43b40000;
    DAT_101ea4c30 = 1;
    _memset(&DAT_101ea4c50,0,0x60);
    FUN_1005ecc98(&DAT_101ea4c54,"Surr. Rotation",0x10);
    FUN_1005ecc98(&DAT_101ea4c64,"Deg.",0x10);
    DAT_101ea4c78 = "Surround pan rotation";
    DAT_101ea4c80 = 0xc3340000;
    DAT_101ea4c84 = 0x43340000;
    DAT_101ea4c88 = 0;
    DAT_101ea4c90 = 1;
    _memset(&DAT_101ea4cb0,0,0x60);
    FUN_1005ecc98(&DAT_101ea4cb4,"Surr. LFE Level",0x10);
    FUN_1005ecc98(&DAT_101ea4cc4,"dB",0x10);
    DAT_101ea4cd8 = "Surround pan LFE level";
    DAT_101ea4ce0 = 0xc2a00000;
    DAT_101ea4ce4 = 0x41a00000;
    DAT_101ea4ce8 = 0;
    DAT_101ea4cf0 = 1;
    _memset(&DAT_101ea4d10,0,0x60);
    DAT_101ea4d10 = 1;
    FUN_1005ecc98(&DAT_101ea4d14,"Stereo-Surround Mode",0x10);
    FUN_1005ecc98(&DAT_101ea4d24,"",0x10);
    DAT_101ea4d38 = "Stereo-To-Surround Mode";
    DAT_101ea4d40 = 0;
    DAT_101ea4d44 = 1;
    DAT_101ea4d48 = 1;
    DAT_101ea4d4c = 0;
    DAT_101ea4d50 = 0;
    _memset(&DAT_101ea4d70,0,0x60);
    FUN_1005ecc98(&DAT_101ea4d74,"Surr. Stereo Separation",0x10);
    FUN_1005ecc98(&DAT_101ea4d84,"Deg.",0x10);
    DAT_101ea4d98 = "Stereo-To-Surround Stereo Separation";
    DAT_101ea4da0 = 0xc3340000;
    DAT_101ea4da4 = 0x43340000;
    DAT_101ea4da8 = 0x42700000;
    DAT_101ea4db0 = 1;
    _memset(&DAT_101ea4dd0,0,0x60);
    FUN_1005ecc98(&DAT_101ea4dd4,"Surr. Stereo Axis",0x10);
    FUN_1005ecc98(&DAT_101ea4de4,"Deg.",0x10);
    DAT_101ea4df8 = "Stereo-To-Surround Stereo Axis";
    DAT_101ea4e00 = 0xc3340000;
    DAT_101ea4e04 = 0x43340000;
    DAT_101ea4e08 = 0;
    DAT_101ea4e10 = 1;
    _memset(&DAT_101ea4e30,0,0x60);
    DAT_101ea4e30 = 1;
    FUN_1005ecc98(&DAT_101ea4e34,"Surr. Speakers Enabled",0x10);
    FUN_1005ecc98(&DAT_101ea4e44,"",0x10);
    DAT_101ea4e58 = "Surround Speakers Enabled";
    DAT_101ea4e60 = 0;
    DAT_101ea4e64 = 0xfff;
    DAT_101ea4e68 = 0xfff;
    DAT_101ea4e6c = 0;
    DAT_101ea4e70 = 0;
    _memset(&DAT_101ea4e90,0,0x60);
    DAT_101ea4e90 = 3;
    FUN_1005ecc98(&DAT_101ea4e94,"3D Position",0x10);
    FUN_1005ecc98(&DAT_101ea4ea4,"Deg.",0x10);
    DAT_101ea4eb8 = "3D Position";
    DAT_101ea4ec0 = 0xfffffffb;
    _memset(&DAT_101ea4ef0,0,0x60);
    DAT_101ea4ef0 = 1;
    FUN_1005ecc98(&DAT_101ea4ef4,"3D Rolloff",0x10);
    FUN_1005ecc98(&DAT_101ea4f04,"",0x10);
    DAT_101ea4f18 = "3D Rolloff";
    DAT_101ea4f20 = 0;
    DAT_101ea4f24 = 4;
    DAT_101ea4f28 = 0;
    DAT_101ea4f2c = 0;
    DAT_101ea4f30 = 0;
    _memset(&DAT_101ea4f50,0,0x60);
    FUN_1005ecc98(&DAT_101ea4f54,"3D Min Distance",0x10);
    FUN_1005ecc98(&DAT_101ea4f64,"",0x10);
    DAT_101ea4f78 = "3D Min Distance";
    DAT_101ea4f80 = 0;
    DAT_101ea4f84 = 0x5d5e0b6b;
    DAT_101ea4f88 = 0x3f800000;
    DAT_101ea4f90 = 1;
    _memset(&DAT_101ea4fb0,0,0x60);
    FUN_1005ecc98(&DAT_101ea4fb4,"3D Max Distance",0x10);
    FUN_1005ecc98(&DAT_101ea4fc4,"",0x10);
    DAT_101ea4fd8 = "3D Max Distance";
    DAT_101ea4fe0 = 0;
    DAT_101ea4fe4 = 0x5d5e0b6b;
    DAT_101ea4fe8 = 0x41a00000;
    DAT_101ea4ff0 = 1;
    _memset(&DAT_101ea5010,0,0x60);
    DAT_101ea5010 = 1;
    FUN_1005ecc98(&DAT_101ea5014,"3D Extent Mode",0x10);
    FUN_1005ecc98(&DAT_101ea5024,"",0x10);
    DAT_101ea5038 = "3D Extent Mode";
    DAT_101ea5040 = 0;
    DAT_101ea5044 = 2;
    DAT_101ea5048 = 0;
    DAT_101ea504c = 0;
    DAT_101ea5050 = 0;
    _memset(&DAT_101ea5070,0,0x60);
    FUN_1005ecc98(&DAT_101ea5074,"3D Sound Size",0x10);
    FUN_1005ecc98(&DAT_101ea5084,"",0x10);
    DAT_101ea5098 = "3D Sound Size";
    DAT_101ea50a0 = 0;
    DAT_101ea50a4 = 0x5d5e0b6b;
    DAT_101ea50a8 = 0;
    DAT_101ea50b0 = 1;
    _memset(&DAT_101ea50d0,0,0x60);
    FUN_1005ecc98(&DAT_101ea50d4,"3D Min Extent",0x10);
    FUN_1005ecc98(&DAT_101ea50e4,"",0x10);
    DAT_101ea50f8 = "3D Min Extent";
    DAT_101ea5100 = 0;
    DAT_101ea5104 = 0x43b40000;
    DAT_101ea5108 = 0;
    DAT_101ea5110 = 1;
    _memset(&DAT_101ea5130,0,0x60);
    FUN_1005ecc98(&DAT_101ea5134,"3D Pan Blend",0x10);
    FUN_1005ecc98(&DAT_101ea5144,"",0x10);
    DAT_101ea5158 = "3D Pan Blend";
    DAT_101ea5160 = 0;
    DAT_101ea5164 = 0x3f800000;
    DAT_101ea5168 = 0;
    DAT_101ea5170 = 1;
    _memset(&DAT_101ea5190,0,0x60);
    DAT_101ea5190 = 1;
    FUN_1005ecc98(&DAT_101ea5194,"LFE Upmix Enabled",0x10);
    FUN_1005ecc98(&DAT_101ea51a4,"",0x10);
    DAT_101ea51b8 = "LFE Upmix Enabled";
    DAT_101ea51c0 = 0;
    DAT_101ea51c4 = 1;
    DAT_101ea51c8 = 0;
    DAT_101ea51cc = 0;
    DAT_101ea51d0 = 0;
    _memset(&DAT_101ea51f0,0,0x60);
    DAT_101ea51f0 = 3;
    FUN_1005ecc98(&DAT_101ea51f4,"Overall Gain",0x10);
    FUN_1005ecc98(&DAT_101ea5204,"",0x10);
    DAT_101ea5218 = "Overall Gain";
    DAT_101ea5220 = 0xffffffff;
    _memset(&DAT_101ea5250,0,0x60);
    DAT_101ea5250 = 1;
    FUN_1005ecc98(&DAT_101ea5254,"Output Speaker Mode",0x10);
    FUN_1005ecc98(&DAT_101ea5264,"",0x10);
    DAT_101ea5280 = 0;
    DAT_101ea5284 = 7;
    DAT_101ea5288 = 0;
    DAT_101ea528c = 0;
    DAT_101ea5290 = 0;
    DAT_101ea5278 = "Target speaker mode for surround panning";
    DAT_101ea52b0 = &DAT_101872730;
    DAT_101ea52c8 = 0x1b;
    DAT_101ea52c0 = 0x2d8;
    DAT_101ea52d0 = FUN_10062fa40;
  }
  return &DAT_101ea52b0;
}




void FUN_10062fa40(undefined8 *param_1)

{
  FUN_100630348(*param_1);
  return;
}




undefined8 FUN_10062fa48(int param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (param_1 == 5) {
    if (iVar1 == 3) {
      return 4;
    }
    if (iVar1 != 4) {
      return param_2;
    }
  }
  else {
    if (param_1 != 4) {
      return param_2;
    }
    if (iVar1 == 2) {
      return 4;
    }
    if (iVar1 != 3) {
      return param_2;
    }
  }
  return 5;
}




void FUN_10062faa0(long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  iVar1 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::alloc
                    ((DSPConnectionI **)(*(long *)(param_1 + 0x90) + 0x790),
                     (bool)((char)param_1 + -0x38));
  if (iVar1 == 0) {
    FUN_100612958(*(undefined8 *)(param_1 + 0x1c8),1);
    iVar1 = FUN_1005705bc(*(long *)(param_1 + 0x90),
                          *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x160b0),param_1 + 0x200);
    if (iVar1 == 0) {
      *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 0x20;
      lVar2 = *(long *)(param_1 + 0xd0);
      if (0 < *(int *)(lVar2 + 0x60)) {
        lVar4 = 0;
        do {
          piVar3 = *(int **)(*(long *)(lVar2 + 0x68) + lVar4 * 8);
          if (*piVar3 == 0) {
            iVar1 = FUN_1005cef0c(piVar3[0xe],param_1,lVar4);
joined_r0x00010062fb50:
            if (iVar1 != 0) {
              return;
            }
          }
          else if (*piVar3 == 1) {
            iVar1 = FUN_1005cef94(param_1,lVar4,piVar3[0xe]);
            goto joined_r0x00010062fb50;
          }
          lVar4 = lVar4 + 1;
          lVar2 = *(long *)(param_1 + 0xd0);
        } while (lVar4 < *(int *)(lVar2 + 0x60));
      }
      *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x160b0);
      *(undefined4 *)(param_1 + 0x270) = 0;
      *(undefined4 *)(param_1 + 0x26c) = 0;
      FUN_10062fbb8(param_1,1);
      return;
    }
  }
  return;
}




undefined4 FUN_10062fba4(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x160b0);
}




undefined8 FUN_10062fbb8(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  long local_70;
  undefined4 local_64;
  
  iVar5 = *(int *)(param_1 + 500);
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x278)) ||
     (iVar9 = param_2, *(int *)(param_1 + 0x214) != *(int *)(param_1 + 0x27c))) {
    iVar9 = 1;
  }
  fVar10 = *(float *)(param_1 + 0x228);
  fVar12 = *(float *)(param_1 + 0x290);
  if (((((*(float *)(param_1 + 0x23c) == *(float *)(param_1 + 0x2a4)) &&
        (*(float *)(param_1 + 0x240) == *(float *)(param_1 + 0x2a8))) &&
       (*(float *)(param_1 + 0x24c) == *(float *)(param_1 + 0x2b4))) &&
      ((*(int *)(param_1 + 0x254) == *(int *)(param_1 + 700) &&
       (*(float *)(param_1 + 600) == *(float *)(param_1 + 0x2c0))))) &&
     (*(float *)(param_1 + 0x260) == *(float *)(param_1 + 0x2c8))) {
    iVar7 = param_2;
    if ((*(int *)(param_1 + 0x248) != *(int *)(param_1 + 0x2b0)) ||
       (iVar8 = param_2, *(float *)(param_1 + 0x250) != *(float *)(param_1 + 0x2b8))) {
      iVar8 = 1;
    }
  }
  else {
    iVar7 = 1;
    iVar8 = 1;
  }
  if ((*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x2d0)) ||
     (iVar6 = param_2, *(int *)(param_1 + 0x214) != *(int *)(param_1 + 0x27c))) {
    iVar6 = 1;
  }
  _memcpy((int *)(param_1 + 0x210),(void *)(param_1 + 0x278),0x5c);
  *(int *)(param_1 + 500) = iVar1;
  if (iVar5 != iVar1 || param_2 != 0) {
    local_64 = 0;
    FUN_100570618(*(undefined8 *)(param_1 + 0x90),iVar1,&local_64);
    *(undefined4 *)(param_1 + 0x1ec) = local_64;
  }
  if (iVar9 != 0) {
    iVar5 = *(int *)(param_1 + 0x210);
    if (iVar5 == 0) {
      iVar5 = 2;
    }
    else if (iVar5 == 1) {
      iVar5 = 3;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x214);
      if (iVar5 == 0) {
        iVar5 = *(int *)(*(long *)(param_1 + 0x90) + 0x160b0);
      }
    }
    local_64 = 0;
    FUN_100570618(*(undefined8 *)(param_1 + 0x90),iVar5,&local_64);
    *(undefined4 *)(param_1 + 0x1f0) = local_64;
  }
  if (fVar10 != fVar12 || param_2 != 0) {
    if (*(float *)(param_1 + 0x228) <= -80.0) {
      uVar11 = 0;
    }
    else {
      uVar11 = _powf(0x41200000,*(float *)(param_1 + 0x228) / 20.0);
    }
    *(undefined4 *)(param_1 + 0x1d8) = uVar11;
  }
  if (iVar7 != 0) {
    FUN_100630848(param_1);
  }
  if (iVar8 != 0) {
    FUN_10056a458(*(undefined4 *)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x24c),
                  *(undefined4 *)(param_1 + 0x250),
                  *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x15a48),
                  *(undefined4 *)(param_1 + 0x248),param_1 + 0x1dc);
  }
  if (iVar6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x268);
    *(byte *)(param_1 + 0x1d0) = (byte)uVar2 & 1;
    *(byte *)(param_1 + 0x1d1) = (byte)(uVar2 >> 1) & 1;
    *(byte *)(param_1 + 0x1d2) = (byte)(uVar2 >> 2) & 1;
    *(byte *)(param_1 + 0x1d3) = (byte)(uVar2 >> 3) & 1;
    *(byte *)(param_1 + 0x1d4) = (byte)(uVar2 >> 4) & 1;
    *(byte *)(param_1 + 0x1d5) = (byte)(uVar2 >> 5) & 1;
    *(byte *)(param_1 + 0x1d6) = (byte)(uVar2 >> 6) & 1;
    *(byte *)(param_1 + 0x1d7) = (byte)(uVar2 >> 7) & 1;
    uVar3 = FUN_1005705bc(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x214),&local_70
                         );
    if ((int)uVar3 == 0) {
      uVar2 = (1 << (ulong)(*(uint *)(local_70 + 0x10) & 0x1f)) - 1;
      if ((uVar2 & *(uint *)(param_1 + 0x268)) != uVar2) {
        if (*(long *)(param_1 + 0x208) == 0) {
          lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0xd8,
                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_pan.cpp"
                                ,0x354,0);
          *(undefined8 *)(lVar4 + 0x78) = 0;
          *(undefined8 *)(lVar4 + 0x80) = 0;
          *(undefined8 *)(lVar4 + 0x68) = 0;
          *(undefined8 *)(lVar4 + 0x70) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x60) = 0;
          *(long *)(param_1 + 0x208) = lVar4;
        }
        uVar3 = FUN_100568558();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_100567fe4(*(undefined8 *)(param_1 + 0x208),local_70,param_1 + 0x1d0);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        local_70 = *(long *)(param_1 + 0x208);
      }
      uVar3 = 0;
      *(long *)(param_1 + 0x200) = local_70;
    }
  }
  return uVar3;
}




undefined8 FUN_10062ff04(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x208) != 0) {
    FUN_100568558();
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x208),
                  "../../src/fmod_memory.h",0xd4);
    *(undefined8 *)(param_1 + 0x208) = 0;
  }
  if (*(long *)(param_1 + 0x1c8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::free
                      ((DSPConnectionI *)(*(long *)(param_1 + 0x90) + 0x790),
                       SUB81(*(long *)(param_1 + 0x1c8),0));
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_10062ff80(long param_1)

{
  *(undefined1 *)(param_1 + 0x274) = 1;
  return 0;
}




undefined8 FUN_10062ff90(long *param_1)

{
  *(undefined1 *)(*param_1 + 0x274) = 1;
  return 0;
}




bool FUN_10062ffa4(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  int local_34;
  
  if (*(float *)(param_1 + 0x2c4) != 0.0) {
    return true;
  }
  iVar1 = *(int *)(param_1 + 0x278);
  if (iVar1 == 0) {
    bVar2 = param_2 == 2;
  }
  else {
    if (iVar1 == 1) {
      if (param_2 != 3) {
        return true;
      }
      fVar4 = *(float *)(param_1 + 0x280);
    }
    else {
      if (iVar1 != 2) {
        return true;
      }
      local_34 = 0;
      FUN_100570618(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x27c),&local_34);
      if (0 < local_34) {
        uVar3 = 0;
        do {
          if ((*(uint *)(param_1 + 0x2d0) & 1 << (ulong)(uVar3 & 0x1f)) == 0) {
            return true;
          }
          uVar3 = uVar3 + 1;
          local_34 = 0;
          FUN_100570618(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x27c),&local_34);
        } while ((int)uVar3 < local_34);
      }
      if ((param_2 != 0) && (*(int *)(*(long *)(param_1 + 0x90) + 0x160b0) != param_2)) {
        return true;
      }
      if (*(float *)(param_1 + 0x288) != 360.0) {
        return true;
      }
      if (*(float *)(param_1 + 0x28c) != 0.0) {
        return true;
      }
      fVar4 = *(float *)(param_1 + 0x290);
    }
    bVar2 = fVar4 == 0.0;
  }
  return !bVar2;
}

