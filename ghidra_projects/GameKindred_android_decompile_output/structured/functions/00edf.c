// functions/00edf — 18 functions
#include "libGameKindred.h"




void FUN_00edf0f0(undefined8 *param_1)

{
  *param_1 = FUN_00edf148;
  param_1[1] = FUN_00edf174;
  param_1[2] = FUN_00edf1d8;
  param_1[3] = FUN_00edf244;
  param_1[4] = FUN_00edf30c;
  param_1[0x10] = 0;
  param_1[0x11] = &PTR_s_Bogus_message_code__d_02824160;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x7e;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}




void FUN_00edf148(long *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_00ee2484(param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}




void FUN_00edf174(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (param_2 < 0) {
    lVar1 = *(long *)(lVar2 + 0x80);
    if ((lVar1 == 0) || (2 < *(int *)(lVar2 + 0x7c))) {
      (**(code **)(lVar2 + 0x10))();
      lVar1 = *(long *)(lVar2 + 0x80);
    }
    *(long *)(lVar2 + 0x80) = lVar1 + 1;
  }
  else if (param_2 <= *(int *)(lVar2 + 0x7c)) {
                    /* WARNING: Could not recover jumptable at 0x00edf1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))();
    return;
  }
  return;
}




void FUN_00edf1d8(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x18))(param_1,auStack_f0);
  iVar2 = fprintf((FILE *)glClearDepthf,"%s\n",auStack_f0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




int FUN_00edf244(long *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *__format;
  long lVar5;
  char *pcVar6;
  int iVar7;
  
  lVar5 = *param_1;
  iVar2 = *(int *)(lVar5 + 0x28);
  if ((iVar2 < 1) || (*(int *)(lVar5 + 0x90) < iVar2)) {
    lVar3 = *(long *)(lVar5 + 0x98);
    if ((lVar3 != 0) &&
       ((*(int *)(lVar5 + 0xa0) <= iVar2 &&
        (iVar7 = iVar2 - *(int *)(lVar5 + 0xa0), iVar2 <= *(int *)(lVar5 + 0xa4)))))
    goto LAB_00edf28c;
  }
  else {
    lVar3 = *(long *)(lVar5 + 0x88);
    iVar7 = iVar2;
LAB_00edf28c:
    pcVar4 = *(char **)(lVar3 + (long)iVar7 * 8);
    __format = pcVar4;
    if (pcVar4 != (char *)0x0) goto LAB_00edf2a4;
  }
  *(int *)(lVar5 + 0x2c) = iVar2;
  pcVar4 = (char *)**(undefined8 **)(lVar5 + 0x88);
  __format = pcVar4;
LAB_00edf2a4:
  do {
    pcVar6 = pcVar4 + 1;
    cVar1 = *pcVar4;
    if (cVar1 == '\0') goto LAB_00edf2d0;
    pcVar4 = pcVar6;
  } while (cVar1 != '%');
  if (*pcVar6 == 's') {
    iVar2 = sprintf(param_2,__format,lVar5 + 0x2c);
    return iVar2;
  }
LAB_00edf2d0:
  iVar2 = sprintf(param_2,__format,(ulong)*(uint *)(lVar5 + 0x2c),(ulong)*(uint *)(lVar5 + 0x30),
                  (ulong)*(uint *)(lVar5 + 0x34),(ulong)*(uint *)(lVar5 + 0x38),
                  (ulong)*(uint *)(lVar5 + 0x3c),(ulong)*(uint *)(lVar5 + 0x40),
                  *(undefined4 *)(lVar5 + 0x44),*(undefined4 *)(lVar5 + 0x48));
  return iVar2;
}




void FUN_00edf30c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}




void FUN_00edf31c(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  
  puVar5 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x98);
  param_1[0x52] = (long)puVar5;
  puVar5[0xe] = 0;
  *puVar5 = FUN_00edf67c;
  puVar5[3] = FUN_00edf8c4;
  puVar5[2] = FUN_00edf8c0;
  puVar5[10] = 0;
  if (4 < (int)param_1[0x12]) {
    *(undefined8 *)(*param_1 + 0x28) = 0x400000039;
    (**(code **)*param_1)(param_1);
  }
  iVar9 = (int)param_1[0xf];
  if (0x100 < iVar9) {
    *(undefined8 *)(*param_1 + 0x28) = 0x1000000003b;
    (**(code **)*param_1)(param_1);
    iVar9 = (int)param_1[0xf];
  }
  uVar1 = *(uint *)(param_1 + 0x12);
  uVar18 = (ulong)uVar1;
  lVar17 = param_1[0x52];
  lVar19 = (long)iVar9;
  lVar7 = 1;
  do {
    lVar15 = lVar7;
    lVar7 = lVar15 + 1;
    lVar10 = lVar7;
    iVar9 = uVar1 - 1;
    if (1 < (int)uVar1) {
      do {
        iVar9 = iVar9 + -1;
        lVar10 = lVar10 * lVar7;
      } while (iVar9 != 0);
    }
  } while (lVar10 <= lVar19);
  uVar16 = (uint)lVar15;
  if (uVar16 < 2) {
    lVar7 = *param_1;
    *(undefined4 *)(lVar7 + 0x28) = 0x3a;
    *(int *)(lVar7 + 0x2c) = (int)lVar10;
    (**(code **)*param_1)(param_1);
  }
  if ((int)uVar1 < 1) {
    uVar12 = 1;
  }
  else {
    uVar12 = 1;
    puVar8 = (uint *)(lVar17 + 0x3c);
    do {
      *puVar8 = uVar16;
      uVar18 = uVar18 - 1;
      uVar12 = uVar12 * uVar16;
      puVar8 = puVar8 + 1;
    } while (uVar18 != 0);
  }
  uVar18 = (ulong)uVar12;
  do {
    if ((int)uVar1 < 1) {
      uVar18 = (ulong)uVar12;
      break;
    }
    lVar10 = param_1[8];
    lVar7 = 0;
    bVar4 = false;
    do {
      if ((int)lVar10 == 2) {
        iVar9 = (&DAT_01bf30d8)[lVar7];
      }
      else {
        iVar9 = (int)lVar7;
      }
      piVar14 = (int *)(lVar17 + (long)iVar9 * 4 + 0x3c);
      iVar9 = *piVar14;
      iVar11 = 0;
      if (iVar9 != 0) {
        iVar11 = (int)uVar18 / iVar9;
      }
      uVar13 = (long)iVar11 * ((long)iVar9 + 1);
      if (uVar13 - lVar19 != 0 && lVar19 <= (long)uVar13) goto LAB_00edf4e4;
      lVar7 = lVar7 + 1;
      bVar4 = true;
      uVar18 = uVar13 & 0xffffffff;
      *piVar14 = (int)((long)iVar9 + 1);
    } while (lVar7 < (int)uVar1);
    bVar4 = true;
    uVar18 = uVar13 & 0xffffffff;
LAB_00edf4e4:
  } while (bVar4);
  lVar7 = *param_1;
  iVar9 = (int)uVar18;
  if ((int)param_1[0x12] == 3) {
    *(int *)(lVar7 + 0x2c) = iVar9;
    *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(lVar17 + 0x3c);
    *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)(lVar17 + 0x40);
    uVar2 = *(undefined4 *)(lVar17 + 0x44);
    *(undefined4 *)(lVar7 + 0x28) = 0x60;
    *(undefined4 *)(lVar7 + 0x38) = uVar2;
    (**(code **)(lVar7 + 8))(param_1,1);
  }
  else {
    *(undefined4 *)(lVar7 + 0x28) = 0x61;
    *(int *)(lVar7 + 0x2c) = iVar9;
    (**(code **)(*param_1 + 8))(param_1,1);
  }
  lVar7 = (**(code **)(param_1[1] + 0x10))(param_1,1,uVar18,(int)param_1[0x12]);
  iVar11 = (int)param_1[0x12];
  if (0 < iVar11) {
    lVar19 = 0;
    do {
      uVar1 = *(uint *)(lVar17 + lVar19 * 4 + 0x3c);
      uVar16 = 0;
      if (uVar1 != 0) {
        uVar16 = (int)uVar18 / (int)uVar1;
      }
      if (0 < (int)uVar1) {
        lVar10 = (long)(int)uVar1 + -1;
        uVar12 = (uint)lVar10;
        if ((int)uVar12 < 0) {
          uVar12 = uVar12 + 1;
        }
        uVar13 = 0;
        iVar11 = 0;
        do {
          if ((int)(uVar16 * (int)uVar13) < iVar9) {
            lVar15 = (long)iVar11;
            uVar3 = 0;
            if (lVar10 != 0) {
              uVar3 = (undefined1)
                      ((long)(uVar13 * 0xff + ((long)((ulong)uVar12 << 0x20) >> 0x21)) / lVar10);
            }
            do {
              if (0 < (int)uVar16) {
                uVar6 = 0;
                do {
                  *(undefined1 *)(*(long *)(lVar7 + lVar19 * 8) + lVar15 + uVar6) = uVar3;
                  uVar6 = uVar6 + 1;
                } while (uVar16 != uVar6);
              }
              lVar15 = lVar15 + (int)uVar18;
            } while (lVar15 < iVar9);
          }
          uVar13 = uVar13 + 1;
          iVar11 = iVar11 + uVar16;
        } while (uVar13 != uVar1);
        iVar11 = (int)param_1[0x12];
      }
      lVar19 = lVar19 + 1;
      uVar18 = (ulong)uVar16;
    } while (lVar19 < iVar11);
  }
  *(long *)(lVar17 + 0x20) = lVar7;
  *(int *)(lVar17 + 0x28) = iVar9;
  FUN_00edf8d8(param_1);
  if ((int)param_1[0xe] != 2) {
    return;
  }
  FUN_00edfa14(param_1);
  return;
}




void FUN_00edf67c(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  lVar14 = param_1[0x52];
  param_1[0x14] = *(undefined8 *)(lVar14 + 0x20);
  iVar11 = *(int *)(param_1 + 0xe);
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(lVar14 + 0x28);
  if (iVar11 == 2) {
    *(code **)(lVar14 + 8) = FUN_00edfd50;
    *(undefined4 *)(lVar14 + 0x90) = 0;
    if (*(long *)(lVar14 + 0x70) == 0) {
      FUN_00edfa14(param_1);
    }
    if (0 < *(int *)(param_1 + 0x12)) {
      iVar11 = *(int *)(param_1 + 0x11);
      lVar3 = 0;
      do {
        memset(*(void **)(lVar14 + 0x70 + lVar3 * 8),0,(ulong)(iVar11 + 2) << 1);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x12));
    }
  }
  else if (iVar11 == 1) {
    pcVar6 = FUN_00edfb8c;
    if (*(int *)(param_1 + 0x12) != 3) {
      pcVar6 = FUN_00edfc5c;
    }
    *(code **)(lVar14 + 8) = pcVar6;
    *(undefined4 *)(lVar14 + 0x4c) = 0;
    if (*(int *)(lVar14 + 0x38) == 0) {
      FUN_00edf8d8(param_1);
    }
    if ((*(long *)(lVar14 + 0x50) == 0) && (iVar11 = *(int *)(param_1 + 0x12), 0 < iVar11)) {
      lVar14 = param_1[0x52];
      uVar13 = 0;
      do {
        iVar1 = *(int *)(lVar14 + uVar13 * 4 + 0x3c);
        if (uVar13 != 0) {
          uVar7 = 0;
          do {
            if (iVar1 == *(int *)(lVar14 + 0x3c + uVar7 * 4)) {
              lVar3 = *(long *)(lVar14 + 0x3c + uVar7 * 8 + 0x14);
              if (lVar3 != 0) goto LAB_00edf858;
              break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar13);
        }
        lVar3 = (**(code **)param_1[1])(param_1,1,0x400);
        uVar2 = iVar1 - 1;
        lVar4 = 0;
        uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xfffffe0000000000 | (ulong)uVar2 << 9;
        puVar8 = &DAT_01bf2fd8;
        lVar9 = lVar3;
        do {
          lVar10 = 0;
          do {
            lVar12 = (ulong)(byte)puVar8[lVar10] * -2 + 0xff;
            if ((int)lVar12 < 0) {
              iVar11 = 0;
              if (uVar7 != 0) {
                iVar11 = (int)((lVar12 * -0xff) / (long)uVar7);
              }
              iVar11 = -iVar11;
            }
            else {
              iVar11 = 0;
              if (uVar7 != 0) {
                iVar11 = (int)((lVar12 * 0xff) / (long)uVar7);
              }
            }
            *(int *)(lVar9 + lVar10 * 4) = iVar11;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x10);
          lVar4 = lVar4 + 1;
          lVar9 = lVar9 + 0x40;
          puVar8 = puVar8 + 0x10;
        } while (lVar4 != 0x10);
        iVar11 = *(int *)(param_1 + 0x12);
LAB_00edf858:
        lVar4 = uVar13 * 8;
        uVar13 = uVar13 + 1;
        *(long *)(lVar14 + lVar4 + 0x50) = lVar3;
      } while ((long)uVar13 < (long)iVar11);
    }
  }
  else {
    if (iVar11 != 0) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x31;
                    /* WARNING: Could not recover jumptable at 0x00edf898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x12) == 3) {
      pcVar6 = FUN_00edfa88;
    }
    else {
      pcVar6 = FUN_00edfafc;
    }
    *(code **)(lVar14 + 8) = pcVar6;
  }
  return;
}




void FUN_00edf8c0(void)

{
  return;
}




void FUN_00edf8c4(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_1 + 5) = 0x2f;
                    /* WARNING: Could not recover jumptable at 0x00edf8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}




void FUN_00edf8d8(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  iVar2 = *(int *)(param_1 + 0x70);
  lVar14 = *(long *)(param_1 + 0x290);
  *(uint *)(lVar14 + 0x38) = (uint)(iVar2 == 1);
  uVar7 = 0x2fe;
  if (iVar2 != 1) {
    uVar7 = 0x100;
  }
  uVar5 = (**(code **)(*(long *)(param_1 + 8) + 0x10))
                    (param_1,1,uVar7,*(undefined4 *)(param_1 + 0x90));
  *(undefined8 *)(lVar14 + 0x30) = uVar5;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar8 = 0;
    iVar6 = *(int *)(lVar14 + 0x28);
    do {
      iVar3 = *(int *)(lVar14 + lVar8 * 4 + 0x3c);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = iVar6 / iVar3;
      }
      if (iVar2 == 1) {
        *(long *)(*(long *)(lVar14 + 0x30) + lVar8 * 8) =
             *(long *)(*(long *)(lVar14 + 0x30) + lVar8 * 8) + 0xff;
      }
      lVar12 = (long)iVar3 + -1;
      puVar9 = *(undefined1 **)(*(long *)(lVar14 + 0x30) + lVar8 * 8);
      lVar13 = (long)((int)lVar12 << 1);
      lVar10 = 0;
      iVar6 = 0;
      lVar11 = 0;
      if (lVar13 != 0) {
        lVar11 = ((long)iVar3 + 0xfe) / lVar13;
      }
      do {
        if ((int)lVar11 < lVar10) {
          uVar1 = iVar6 * 2 + 3;
          do {
            lVar11 = 0;
            if (lVar13 != 0) {
              lVar11 = (long)(((-(ulong)(uVar1 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar1 << 8) -
                              (long)(int)uVar1) + lVar12) / lVar13;
            }
            iVar6 = iVar6 + 1;
            uVar1 = uVar1 + 2;
          } while ((int)lVar11 < lVar10);
        }
        puVar9[lVar10] = (char)iVar6 * (char)iVar4;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x100);
      if (iVar2 == 1) {
        lVar11 = -1;
        lVar10 = 0x100;
        do {
          puVar9[lVar11] = *puVar9;
          lVar11 = lVar11 + -1;
          puVar9[lVar10] = puVar9[0xff];
          lVar10 = lVar10 + 1;
        } while (lVar11 != -0x100);
      }
      lVar8 = lVar8 + 1;
      iVar6 = iVar4;
    } while (lVar8 < *(int *)(param_1 + 0x90));
  }
  return;
}




void FUN_00edfa14(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(int *)(param_1 + 0x90)) {
    iVar1 = *(int *)(param_1 + 0x88);
    lVar3 = *(long *)(param_1 + 0x290);
    lVar4 = 0;
    do {
      uVar2 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,(ulong)(iVar1 + 2) << 1);
      *(undefined8 *)(lVar3 + 0x70 + lVar4 * 8) = uVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x90));
  }
  return;
}




void FUN_00edfa88(long param_1,long param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  byte *pbVar12;
  
  if (0 < (int)param_4) {
    iVar5 = *(int *)(param_1 + 0x88);
    uVar8 = 0;
    plVar9 = *(long **)(*(long *)(param_1 + 0x290) + 0x30);
    lVar3 = *plVar9;
    lVar4 = plVar9[1];
    lVar10 = plVar9[2];
    do {
      if (iVar5 != 0) {
        pbVar12 = *(byte **)(param_2 + uVar8 * 8);
        pcVar11 = *(char **)(param_3 + uVar8 * 8);
        iVar7 = iVar5;
        do {
          bVar6 = *pbVar12;
          pbVar1 = pbVar12 + 1;
          pbVar2 = pbVar12 + 2;
          iVar7 = iVar7 + -1;
          pbVar12 = pbVar12 + 3;
          *pcVar11 = *(char *)(lVar4 + (ulong)*pbVar1) + *(char *)(lVar3 + (ulong)bVar6) +
                     *(char *)(lVar10 + (ulong)*pbVar2);
          pcVar11 = pcVar11 + 1;
        } while (iVar7 != 0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_4);
  }
  return;
}




void FUN_00edfafc(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  byte *pbVar9;
  char cVar10;
  ulong uVar11;
  
  if (0 < (int)param_4) {
    uVar1 = *(uint *)(param_1 + 0x90);
    iVar2 = *(int *)(param_1 + 0x88);
    uVar6 = 0;
    plVar7 = *(long **)(*(long *)(param_1 + 0x290) + 0x30);
    do {
      if (iVar2 != 0) {
        pbVar9 = *(byte **)(param_2 + uVar6 * 8);
        pcVar8 = *(char **)(param_3 + uVar6 * 8);
        iVar3 = iVar2;
        do {
          if ((int)uVar1 < 1) {
            cVar10 = '\0';
          }
          else {
            cVar10 = '\0';
            plVar4 = plVar7;
            pbVar5 = pbVar9;
            uVar11 = (ulong)uVar1;
            do {
              uVar11 = uVar11 - 1;
              cVar10 = cVar10 + *(char *)(*plVar4 + (ulong)*pbVar5);
              plVar4 = plVar4 + 1;
              pbVar5 = pbVar5 + 1;
            } while (uVar11 != 0);
            pbVar9 = pbVar9 + (ulong)(uVar1 - 1) + 1;
          }
          iVar3 = iVar3 + -1;
          *pcVar8 = cVar10;
          pcVar8 = pcVar8 + 1;
        } while (iVar3 != 0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_4);
  }
  return;
}




void FUN_00edfb8c(long param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  long lVar19;
  long lVar18;
  
  if (0 < (int)param_4) {
    lVar14 = *(long *)(param_1 + 0x290);
    iVar8 = *(int *)(param_1 + 0x88);
    uVar13 = 0;
    plVar15 = *(long **)(lVar14 + 0x30);
    uVar17 = *(uint *)(lVar14 + 0x4c);
    lVar4 = *plVar15;
    lVar6 = plVar15[1];
    lVar16 = plVar15[2];
    do {
      lVar18 = (long)(int)uVar17;
      if (iVar8 != 0) {
        lVar5 = *(long *)(lVar14 + 0x50);
        lVar7 = *(long *)(lVar14 + 0x58);
        lVar19 = *(long *)(lVar14 + 0x60);
        pbVar12 = *(byte **)(param_2 + uVar13 * 8);
        uVar10 = 0;
        pcVar11 = *(char **)(param_3 + uVar13 * 8);
        iVar9 = iVar8;
        do {
          uVar1 = (ulong)uVar10;
          uVar2 = (ulong)uVar10;
          uVar3 = (ulong)uVar10;
          iVar9 = iVar9 + -1;
          uVar10 = uVar10 + 1 & 0xf;
          *pcVar11 = *(char *)(lVar6 + (long)*(int *)(lVar7 + lVar18 * 0x40 + uVar2 * 4) +
                                       (ulong)pbVar12[1]) +
                     *(char *)(lVar4 + (long)*(int *)(lVar5 + lVar18 * 0x40 + uVar1 * 4) +
                                       (ulong)*pbVar12) +
                     *(char *)(lVar16 + (long)*(int *)(lVar19 + lVar18 * 0x40 + uVar3 * 4) +
                                        (ulong)pbVar12[2]);
          pbVar12 = pbVar12 + 3;
          pcVar11 = pcVar11 + 1;
        } while (iVar9 != 0);
      }
      uVar13 = uVar13 + 1;
      uVar17 = uVar17 + 1 & 0xf;
      *(uint *)(lVar14 + 0x4c) = uVar17;
    } while (uVar13 != param_4);
  }
  return;
}




void FUN_00edfc5c(long param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  
  if (0 < (int)param_4) {
    uVar4 = *(uint *)(param_1 + 0x90);
    lVar14 = *(long *)(param_1 + 0x290);
    uVar3 = *(uint *)(param_1 + 0x88);
    uVar13 = 0;
    do {
      memset(*(void **)(param_3 + uVar13 * 8),0,(ulong)uVar3);
      iVar5 = *(int *)(lVar14 + 0x4c);
      if (0 < (int)uVar4) {
        uVar6 = 0;
        do {
          if (uVar3 != 0) {
            lVar9 = *(long *)(lVar14 + uVar6 * 8 + 0x50);
            lVar10 = *(long *)(*(long *)(lVar14 + 0x30) + uVar6 * 8);
            lVar11 = *(long *)(param_2 + uVar13 * 8);
            uVar7 = 0;
            pcVar8 = *(char **)(param_3 + uVar13 * 8);
            uVar12 = uVar3;
            do {
              pbVar2 = (byte *)(lVar11 + uVar6);
              uVar1 = (ulong)uVar7;
              uVar12 = uVar12 - 1;
              uVar7 = uVar7 + 1 & 0xf;
              lVar11 = lVar11 + (int)uVar4;
              *pcVar8 = *pcVar8 + *(char *)(lVar10 + (long)*(int *)(lVar9 + (long)iVar5 * 0x40 +
                                                                   uVar1 * 4) + (ulong)*pbVar2);
              pcVar8 = pcVar8 + 1;
            } while (uVar12 != 0);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar4);
      }
      uVar13 = uVar13 + 1;
      *(uint *)(lVar14 + 0x4c) = iVar5 + 1U & 0xf;
    } while (uVar13 != param_4);
  }
  return;
}




void FUN_00edfd50(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  undefined2 *puVar14;
  long lVar15;
  undefined2 uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  undefined2 *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  
  if (0 < (int)param_4) {
    uVar1 = *(uint *)(param_1 + 0x88);
    uVar2 = *(uint *)(param_1 + 0x90);
    lVar24 = *(long *)(param_1 + 0x290);
    lVar25 = *(long *)(param_1 + 0x1b8);
    uVar5 = uVar1 - 1;
    uVar23 = 0;
    do {
      memset(*(void **)(param_3 + uVar23 * 8),0,(ulong)uVar1);
      if (0 < (int)uVar2) {
        uVar11 = 0;
        do {
          lVar12 = *(long *)(param_3 + uVar23 * 8);
          pbVar13 = (byte *)(*(long *)(param_2 + uVar23 * 8) + uVar11);
          if (*(int *)(lVar24 + 0x90) == 0) {
            puVar22 = *(undefined2 **)(lVar24 + uVar11 * 8 + 0x70);
            lVar15 = 1;
            puVar14 = puVar22;
            uVar7 = uVar2;
            if (uVar1 != 0) goto LAB_00edfe24;
LAB_00edfed4:
            uVar16 = 0;
          }
          else {
            pbVar13 = pbVar13 + uVar5 * uVar2;
            lVar12 = lVar12 + (ulong)uVar5;
            lVar15 = -1;
            puVar22 = (undefined2 *)(*(long *)(lVar24 + uVar11 * 8 + 0x70) + (ulong)(uVar1 + 1) * 2)
            ;
            puVar14 = puVar22;
            uVar7 = -uVar2;
            if (uVar1 == 0) goto LAB_00edfed4;
LAB_00edfe24:
            lVar18 = 0;
            iVar10 = 0;
            lVar19 = *(long *)(*(long *)(lVar24 + 0x30) + uVar11 * 8);
            lVar20 = *(long *)(*(long *)(lVar24 + 0x20) + uVar11 * 8);
            iVar17 = 0;
            puVar22 = (undefined2 *)((long)puVar14 + ((ulong)uVar5 * 2 + 2) * lVar15);
            iVar21 = 0;
            uVar9 = uVar1;
            do {
              bVar3 = *pbVar13;
              pbVar13 = pbVar13 + (int)uVar7;
              uVar9 = uVar9 - 1;
              bVar3 = *(byte *)(lVar25 + (ulong)bVar3 +
                                         (long)(iVar10 + (short)puVar14[lVar15 + lVar18] + 8 >> 4));
              bVar4 = *(byte *)(lVar19 + (ulong)bVar3);
              *(byte *)(lVar12 + lVar18) = *(char *)(lVar12 + lVar18) + bVar4;
              iVar6 = (uint)bVar3 - (uint)*(byte *)(lVar20 + (ulong)bVar4);
              sVar8 = (short)iVar17;
              iVar17 = iVar6 * 5 + iVar21;
              uVar16 = (undefined2)iVar17;
              iVar10 = iVar6 * 7;
              puVar14[lVar18] = (short)iVar6 * 3 + sVar8;
              lVar18 = lVar18 + lVar15;
              iVar21 = iVar6;
            } while (uVar9 != 0);
          }
          uVar11 = uVar11 + 1;
          *puVar22 = uVar16;
        } while (uVar11 != uVar2);
      }
      uVar23 = uVar23 + 1;
      *(uint *)(lVar24 + 0x90) = (uint)(*(int *)(lVar24 + 0x90) == 0);
    } while (uVar23 != param_4);
  }
  return;
}




void FUN_00edff28(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x52] = (long)puVar2;
  puVar2[8] = 0;
  *puVar2 = FUN_00ee00c4;
  puVar2[3] = FUN_00ee0218;
  puVar2[10] = 0;
  if ((int)param_1[0x12] != 3) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x30;
    (*(code *)*puVar4)(param_1);
  }
  uVar3 = (**(code **)param_1[1])(param_1,1,0x100);
  lVar5 = 0;
  puVar2[6] = uVar3;
  do {
    uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
    *(undefined8 *)(puVar2[6] + lVar5) = uVar3;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x100);
  *(undefined4 *)(puVar2 + 7) = 1;
  if (*(int *)((long)param_1 + 0x84) == 0) {
    puVar2[4] = 0;
    goto LAB_00ee0068;
  }
  iVar1 = (int)param_1[0xf];
  if (iVar1 < 8) {
    lVar5 = *param_1;
    uVar3 = 0x80000003a;
LAB_00ee0030:
    *(undefined8 *)(lVar5 + 0x28) = uVar3;
    (**(code **)*param_1)(param_1);
  }
  else if (0x100 < iVar1) {
    lVar5 = *param_1;
    uVar3 = 0x1000000003b;
    goto LAB_00ee0030;
  }
  uVar3 = (**(code **)(param_1[1] + 0x10))(param_1,1,iVar1,3);
  puVar2[4] = uVar3;
  *(int *)(puVar2 + 5) = iVar1;
LAB_00ee0068:
  if ((int)param_1[0xe] != 0) {
    *(undefined4 *)(param_1 + 0xe) = 2;
    uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,(ulong)((int)param_1[0x11] + 2) * 6);
    puVar2[8] = uVar3;
    FUN_00ee0228(param_1);
    return;
  }
  return;
}

