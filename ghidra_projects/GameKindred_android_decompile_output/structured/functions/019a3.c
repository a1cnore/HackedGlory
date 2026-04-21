// functions/019a3 — 5 functions
#include "libGameKindred.h"




ulong FUN_019a3558(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  size_t __n;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  
  iVar8 = *(int *)(param_1 + 0xd0);
  lVar16 = (long)*(int *)(param_1 + 0x8d0);
  iVar2 = *(int *)(param_1 + 0x8d4);
  lVar17 = *(long *)(param_1 + 0x8b8);
  bVar12 = (&DAT_01e1c510)[*(int *)(param_1 + 0x8f8)];
  iVar3 = *(int *)(param_1 + 0xd4);
  lVar18 = *(long *)(param_1 + 0x8c0);
  iVar4 = *(int *)(param_1 + 0x1a4);
  lVar19 = *(long *)(param_1 + 0x8c8);
  if (*(int *)(param_1 + 0xc0) == 2) {
    FUN_019a2f94(param_1);
  }
  __n = lVar16 * (ulong)bVar12;
  iVar14 = (uint)(bVar12 >> 1) * iVar2;
  if (*(int *)(param_1 + 0xd8) != 0) {
    iVar24 = *(int *)(param_1 + 0x198);
    lVar27 = (long)iVar24;
    if (iVar24 < *(int *)(param_1 + 0x1a0)) {
      iVar5 = *(int *)(param_1 + 0xd4);
      lVar21 = lVar27 << 2;
      iVar26 = iVar24 << 3;
      iVar24 = iVar24 << 4;
      do {
        lVar22 = *(long *)(param_1 + 0xe0);
        bVar9 = *(byte *)(lVar22 + lVar21);
        if (bVar9 != 0) {
          iVar6 = *(int *)(param_1 + 0x8d0);
          lVar25 = *(long *)(param_1 + 0x8b8) + (long)(*(int *)(param_1 + 0xd0) * iVar6 * 0x10) +
                   (long)iVar24;
          uVar23 = (uint)bVar9;
          if (*(int *)(param_1 + 0x8f8) == 1) {
            if (0 < lVar27) {
              (*DAT_0321a7c0)(lVar25,iVar6,uVar23 + 4);
            }
            if (*(char *)(lVar22 + lVar21 + 2) != '\0') {
              (*DAT_0321a760)(lVar25,iVar6,uVar23);
            }
            if (0 < iVar5) {
              (*DAT_0321a770)(lVar25,iVar6,uVar23 + 4);
            }
            if (*(char *)(lVar22 + lVar21 + 2) != '\0') {
              (*DAT_0321a7d8)(lVar25,iVar6,bVar9);
            }
          }
          else {
            iVar7 = *(int *)(param_1 + 0x8d4);
            bVar10 = ((byte *)(lVar22 + lVar21))[1];
            lVar22 = lVar22 + lVar21;
            uVar11 = *(undefined1 *)(lVar22 + 3);
            iVar13 = *(int *)(param_1 + 0xd0) * iVar7 * 8;
            lVar20 = *(long *)(param_1 + 0x8c0) + (long)iVar13 + (long)iVar26;
            lVar1 = *(long *)(param_1 + 0x8c8) + (long)iVar13 + (long)iVar26;
            if (0 < lVar27) {
              iVar13 = bVar9 + 4;
              (*DAT_0321a7a8)(lVar25,iVar6,iVar13,bVar10,uVar11);
              (*DAT_0321a7e0)(lVar20,lVar1,iVar7,iVar13,bVar10,uVar11);
            }
            if (*(char *)(lVar22 + 2) != '\0') {
              (*DAT_0321a778)(lVar25,iVar6,bVar9,bVar10,uVar11);
              (*DAT_0321a768)(lVar20,lVar1,iVar7,bVar9,bVar10,uVar11);
            }
            if (0 < iVar5) {
              (*DAT_0321a7c8)(lVar25,iVar6,uVar23 + 4,bVar10,uVar11);
              (*DAT_0321a7b0)(lVar20,lVar1,iVar7,uVar23 + 4,bVar10,uVar11);
            }
            if (*(char *)(lVar22 + 2) != '\0') {
              (*DAT_0321a758)(lVar25,iVar6,uVar23,bVar10,uVar11);
              (*DAT_0321a798)(lVar20,lVar1,iVar7,uVar23,bVar10,uVar11);
            }
          }
        }
        lVar27 = lVar27 + 1;
        lVar21 = lVar21 + 4;
        iVar26 = iVar26 + 8;
        iVar24 = iVar24 + 0x10;
      } while (lVar27 < *(int *)(param_1 + 0x1a0));
    }
  }
  lVar27 = (iVar8 << 4) * lVar16;
  iVar2 = iVar8 * iVar2 * 8;
  if (*(int *)(param_1 + 0x2f0) != 0) {
    iVar24 = *(int *)(param_1 + 0x198);
    lVar21 = (long)iVar24;
    iVar26 = *(int *)(param_1 + 0x1a0);
    if (iVar24 < iVar26) {
      iVar24 = iVar24 << 3;
      lVar22 = lVar21 * 800 + 0x31c;
      do {
        lVar25 = *(long *)(param_1 + 0xe8);
        if (3 < *(byte *)(lVar25 + lVar22)) {
          iVar26 = *(int *)(param_1 + 0x8d4);
          lVar20 = *(long *)(param_1 + 0x8c8);
          iVar5 = iVar26 * *(int *)(param_1 + 0xd0) * 8;
          FUN_019a41f0(param_1 + 0x2f4,*(long *)(param_1 + 0x8c0) + (long)iVar5 + (long)iVar24,
                       iVar26);
          FUN_019a41f0(param_1 + 0x2f4,lVar20 + iVar5 + (long)iVar24,iVar26,
                       *(undefined1 *)(lVar25 + lVar22));
          iVar26 = *(int *)(param_1 + 0x1a0);
        }
        lVar21 = lVar21 + 1;
        iVar24 = iVar24 + 8;
        lVar22 = lVar22 + 800;
      } while (lVar21 < iVar26);
    }
  }
  lVar19 = (lVar19 - iVar14) + (long)iVar2;
  lVar21 = (lVar17 - __n) + lVar27;
  lVar17 = (lVar18 - iVar14) + (long)iVar2;
  iVar4 = iVar4 + -1;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (iVar3 == 0) {
      iVar24 = 0;
      lVar27 = *(long *)(param_1 + 0x8b8) + lVar27;
      lVar18 = *(long *)(param_1 + 0x8c0) + (long)iVar2;
      lVar22 = *(long *)(param_1 + 0x8c8) + (long)iVar2;
    }
    else {
      iVar24 = iVar3 * 0x10 - (uint)bVar12;
      lVar27 = lVar21;
      lVar18 = lVar17;
      lVar22 = lVar19;
    }
    *(long *)(param_2 + 6) = lVar27;
    *(long *)(param_2 + 8) = lVar18;
    *(long *)(param_2 + 10) = lVar22;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    iVar2 = 0;
    if (iVar3 < iVar4) {
      iVar2 = -(uint)bVar12;
    }
    iVar2 = iVar3 * 0x10 + 0x10 + iVar2;
    iVar26 = param_2[0x21];
    if (iVar2 <= param_2[0x21]) {
      iVar26 = iVar2;
    }
    if (*(long *)(param_1 + 0x928) == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      if (iVar26 - iVar24 != 0 && iVar24 <= iVar26) {
        lVar18 = FUN_019b7dc0(param_1,iVar24,iVar26 - iVar24);
        *(long *)(param_2 + 0x26) = lVar18;
        if (lVar18 == 0) {
          uVar15 = FUN_019a57f0(param_1,3,"Could not decode alpha data.");
          return uVar15;
        }
      }
    }
    iVar2 = param_2[0x20];
    uVar23 = iVar2 - iVar24;
    if (uVar23 != 0 && iVar24 <= iVar2) {
      *(long *)(param_2 + 6) =
           *(long *)(param_2 + 6) + (long)*(int *)(param_1 + 0x8d0) * (long)(int)uVar23;
      lVar27 = (long)*(int *)(param_1 + 0x8d4) * ((long)((ulong)uVar23 << 0x20) >> 0x21);
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + lVar27;
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + lVar27;
      iVar24 = iVar2;
      if (lVar18 != 0) {
        lVar18 = lVar18 + (long)*param_2 * (long)(int)uVar23;
        *(long *)(param_2 + 0x26) = lVar18;
      }
    }
    if (iVar26 - iVar24 != 0 && iVar24 <= iVar26) {
      iVar5 = param_2[0x1e];
      *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + (long)iVar5;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)(iVar5 >> 1);
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + (long)(iVar5 >> 1);
      if (lVar18 != 0) {
        *(long *)(param_2 + 0x26) = lVar18 + iVar5;
      }
      param_2[2] = iVar24 - iVar2;
      param_2[3] = param_2[0x1f] - iVar5;
      param_2[4] = iVar26 - iVar24;
      uVar15 = (**(code **)(param_2 + 0x10))(param_2);
      uVar15 = uVar15 & 0xffffffff;
      goto LAB_019a3b88;
    }
  }
  uVar15 = 1;
LAB_019a3b88:
  if ((iVar3 < iVar4) && (iVar8 + 1 == *(int *)(param_1 + 200))) {
    memcpy((void *)(*(long *)(param_1 + 0x8b8) - lVar16 * (ulong)bVar12),
           (void *)(lVar21 + (long)*(int *)(param_1 + 0x8d0) * 0x10),__n);
    memcpy((void *)(*(long *)(param_1 + 0x8c0) + -(long)iVar14),
           (void *)(lVar17 + (long)*(int *)(param_1 + 0x8d4) * 8),(long)iVar14);
    memcpy((void *)(*(long *)(param_1 + 0x8c8) + -(long)iVar14),
           (void *)(lVar19 + (long)*(int *)(param_1 + 0x8d4) * 8),(long)iVar14);
  }
  return uVar15;
}




undefined4 FUN_019a3c24(undefined4 *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  
  if ((*(code **)(param_2 + 0x48) != (code *)0x0) &&
     (iVar6 = (**(code **)(param_2 + 0x48))(param_2), iVar6 == 0)) {
    FUN_019a57f0(param_1,6,"Frame setup failed");
    return *param_1;
  }
  if (*(int *)(param_2 + 0x70) == 0) {
    iVar6 = param_1[0x23e];
    uVar11 = (uint)(byte)(&DAT_01e1c510)[iVar6];
    if (iVar6 != 2) goto LAB_019a3c8c;
    iVar6 = 2;
    param_1[0x66] = 0;
  }
  else {
    uVar11 = 0;
    iVar6 = 0;
    param_1[0x23e] = 0;
LAB_019a3c8c:
    iVar4 = *(int *)(param_2 + 0x78) - uVar11;
    param_1[0x66] = iVar4 >> 4;
    iVar5 = *(int *)(param_2 + 0x80) - uVar11;
    param_1[0x67] = iVar5 >> 4;
    if (iVar4 < 0) {
      param_1[0x66] = 0;
    }
    if (-1 < iVar5) goto LAB_019a3ce4;
  }
  param_1[0x67] = 0;
LAB_019a3ce4:
  iVar4 = (int)(uVar11 + 0xf + *(int *)(param_2 + 0x84)) >> 4;
  param_1[0x69] = iVar4;
  iVar5 = (int)(uVar11 + 0xf + *(int *)(param_2 + 0x7c)) >> 4;
  iVar2 = param_1[100];
  if (iVar5 <= (int)param_1[100]) {
    iVar2 = iVar5;
  }
  param_1[0x68] = iVar2;
  if ((int)param_1[0x65] < iVar4) {
    param_1[0x69] = param_1[0x65];
  }
  if (0 < iVar6) {
    iVar6 = param_1[0x1e];
    iVar4 = param_1[0x15];
    lVar8 = 0;
    pcVar9 = (char *)(param_1 + 0x23f);
    do {
      if (iVar6 == 0) {
        uVar11 = param_1[0x13];
      }
      else {
        uVar11 = (uint)*(char *)((long)param_1 + lVar8 + 0x88);
        if (param_1[0x20] == 0) {
          uVar11 = param_1[0x13] + uVar11;
        }
      }
      lVar12 = 0;
      pcVar13 = pcVar9;
      do {
        uVar7 = uVar11;
        if ((iVar4 != 0) && (uVar7 = param_1[0x16] + uVar11, lVar12 != 0)) {
          uVar7 = param_1[0x1a] + uVar7;
        }
        uVar3 = uVar7;
        if (0x3e < (int)uVar7) {
          uVar3 = 0x3f;
        }
        if ((int)uVar7 < 1) {
          *pcVar13 = '\0';
        }
        else {
          iVar5 = param_1[0x14];
          uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
          uVar7 = uVar3;
          if (0 < iVar5) {
            uVar10 = 1;
            if (4 < iVar5) {
              uVar10 = 2;
            }
            uVar7 = 9U - iVar5;
            if ((int)(uVar3 >> (ulong)uVar10) <= (int)(9U - iVar5)) {
              uVar7 = uVar3 >> (ulong)uVar10;
            }
          }
          if ((int)uVar7 < 2) {
            uVar7 = 1;
          }
          pcVar13[1] = (char)uVar7;
          cVar1 = '\x02';
          if ((int)uVar3 < 0x28) {
            cVar1 = 0xe < (int)uVar3;
          }
          *pcVar13 = (char)uVar7 + (char)(uVar3 << 1);
          pcVar13[3] = cVar1;
        }
        pcVar13[2] = (char)lVar12;
        lVar12 = lVar12 + 1;
        pcVar13 = pcVar13 + 4;
      } while (lVar12 != 2);
      lVar8 = lVar8 + 1;
      pcVar9 = pcVar9 + 8;
    } while (lVar8 != 4);
  }
  return 0;
}




undefined4 FUN_019a3e38(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xc0) < 1) {
    uVar1 = 1;
  }
  else {
    lVar2 = FUN_019b7a58();
    uVar1 = (**(code **)(lVar2 + 0x10))(param_1 + 0x90);
  }
  if (*(code **)(param_2 + 0x50) != (code *)0x0) {
    (**(code **)(param_2 + 0x50))(param_2);
  }
  return uVar1;
}




undefined4 FUN_019a3e94(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      return 0;
    }
    uVar1 = 0;
    if (0x1ff < param_3) {
      uVar1 = 2;
    }
  }
  return uVar1;
}




undefined8 FUN_019a3eb8(long param_1,long param_2)

{
  size_t __n;
  ulong uVar1;
  void *pvVar2;
  void *__s;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  void *__ptr;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(int *)(param_1 + 0xc0) < 1) {
    iVar6 = 1;
LAB_019a3f34:
    *(int *)(param_1 + 200) = iVar6;
  }
  else {
    lVar7 = FUN_019b7a58();
    iVar6 = (**(code **)(lVar7 + 8))(param_1 + 0x90);
    if (iVar6 != 0) {
      *(long *)(param_1 + 0xb0) = param_1 + 0xf0;
      iVar6 = 2;
      if (0 < *(int *)(param_1 + 0x8f8)) {
        iVar6 = 3;
      }
      *(code **)(param_1 + 0xa0) = FUN_019a3558;
      *(long *)(param_1 + 0xa8) = param_1;
      goto LAB_019a3f34;
    }
    uVar8 = FUN_019a57f0(param_1,1,"thread initialization failed.");
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    iVar6 = *(int *)(param_1 + 200);
  }
  iVar12 = *(int *)(param_1 + 400);
  lVar7 = (long)iVar12;
  iVar11 = *(int *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0x8f8) < 1) {
    uVar15 = 0;
  }
  else {
    iVar10 = 1;
    if (0 < iVar11) {
      iVar10 = 2;
    }
    uVar15 = -(ulong)((uint)(iVar10 * iVar12) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)(iVar10 * iVar12) << 2;
  }
  __n = lVar7 * 2 + 2;
  iVar10 = 1;
  if (iVar11 == 2) {
    iVar10 = 2;
  }
  uVar3 = ((uint)(byte)(&DAT_01e1c510)[*(int *)(param_1 + 0x8f8)] + iVar6 * 0x10) * 3;
  lVar14 = (long)(iVar10 * iVar12) * 800;
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1;
  }
  lVar13 = lVar7 * 0x20 * ((long)((ulong)uVar3 << 0x20) >> 0x21);
  if (*(long *)(param_1 + 0x928) == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = (ulong)*(ushort *)(param_1 + 0x42) * (ulong)*(ushort *)(param_1 + 0x40);
  }
  __ptr = *(void **)(param_1 + 0x8d8);
  uVar1 = lVar7 * 0x24 + __n + lVar14 + uVar15 + lVar13 + lVar16 + 0x35f;
  if (*(ulong *)(param_1 + 0x8e0) < uVar1) {
    free(__ptr);
    *(undefined8 *)(param_1 + 0x8e0) = 0;
    __ptr = (void *)FUN_019a2d40(uVar1,1);
    *(void **)(param_1 + 0x8d8) = __ptr;
    if (__ptr == (void *)0x0) {
      uVar8 = FUN_019a57f0(param_1,1,"no memory during frame initialization.");
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      goto code_r0x019a4120;
    }
    *(ulong *)(param_1 + 0x8e0) = uVar1;
    iVar11 = *(int *)(param_1 + 0xc0);
  }
  pvVar2 = (void *)((long)__ptr + lVar7 * 4);
  __s = (void *)((long)pvVar2 + lVar7 * 0x20);
  *(void **)(param_1 + 0x898) = pvVar2;
  lVar9 = 0;
  if (uVar15 != 0) {
    lVar9 = (long)__s + __n;
  }
  uVar15 = (long)__s + __n + uVar15 + 0x1f & 0xffffffffffffffe0;
  *(long *)(param_1 + 0x8a8) = lVar9;
  lVar4 = lVar9 + lVar7 * 4;
  if (iVar11 < 1) {
    lVar4 = lVar9;
  }
  lVar9 = uVar15 + 0x340;
  *(void **)(param_1 + 0x888) = __ptr;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(long *)(param_1 + 0x8a0) = (long)__s + 2;
  *(ulong *)(param_1 + 0x8b0) = uVar15;
  *(long *)(param_1 + 0x8f0) = lVar9;
  *(long *)(param_1 + 0xe0) = lVar4;
  *(long *)(param_1 + 0xe8) = lVar9;
  if (iVar11 == 2) {
    *(long *)(param_1 + 0xe8) = lVar9 + lVar7 * 800;
  }
  lVar9 = lVar9 + lVar14;
  lVar14 = 0;
  if (lVar16 != 0) {
    lVar14 = lVar9 + lVar13;
  }
  *(long *)(param_1 + 0x940) = lVar14;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  iVar11 = (int)(lVar7 * 0x10);
  *(int *)(param_1 + 0x8d0) = iVar11;
  iVar12 = (int)(lVar7 * 8);
  *(int *)(param_1 + 0x8d4) = iVar12;
  lVar9 = lVar9 + lVar7 * 0x10 * (ulong)(byte)(&DAT_01e1c510)[*(int *)(param_1 + 0x8f8)];
  lVar13 = (ulong)((byte)(&DAT_01e1c510)[*(int *)(param_1 + 0x8f8)] >> 1) * (long)iVar12;
  *(long *)(param_1 + 0x8b8) = lVar9;
  lVar14 = lVar9 + iVar11 * iVar6 * 0x10 + lVar13;
  *(long *)(param_1 + 0x8c0) = lVar14;
  *(long *)(param_1 + 0x8c8) = lVar14 + (long)(iVar6 << 3) * lVar7 * 8 + lVar13;
  memset(__s,0,__n);
  FUN_019a6358(param_1);
  memset(*(void **)(param_1 + 0x888),0,lVar7 * 4);
code_r0x019a4120:
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x8b8);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x8c0);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x8c8);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x8d0);
  uVar5 = *(undefined4 *)(param_1 + 0x8d4);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0x34) = uVar5;
  FUN_019aa3b8();
  return 1;
}

