// functions/00edd — 9 functions
#include "libGameKindred.h"




void FUN_00edd064(long *param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_2 == 0xfe) {
    *(undefined8 *)(param_1[0x4d] + 0x28) = param_3;
    return;
  }
  if ((param_2 & 0xfffffff0) == 0xe0) {
    *(undefined8 *)(param_1[0x4d] + (long)(int)param_2 * 8 + -0x6d0) = param_3;
    return;
  }
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0x46;
  *(uint *)(lVar1 + 0x2c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00edd0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00edd0ac(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  undefined1 *puVar15;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 *puVar16;
  
  plVar13 = (long *)param_1[5];
  puVar16 = (undefined1 *)*plVar13;
  lVar7 = plVar13[1];
  *(undefined4 *)(param_1 + 0x27) = param_2;
  *(undefined4 *)((long)param_1 + 0x13c) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  if (lVar7 == 0) {
    iVar4 = (*(code *)plVar13[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    puVar16 = (undefined1 *)*plVar13;
    lVar7 = plVar13[1];
  }
  puVar15 = puVar16 + 1;
  uVar1 = *puVar16;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    iVar4 = (*(code *)plVar13[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    puVar15 = (undefined1 *)*plVar13;
    lVar7 = plVar13[1];
  }
  pbVar17 = puVar15 + 1;
  uVar2 = *puVar15;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    iVar4 = (*(code *)plVar13[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar17 = (byte *)*plVar13;
    lVar7 = plVar13[1];
  }
  pbVar18 = pbVar17 + 1;
  lVar7 = lVar7 + -1;
  *(uint *)(param_1 + 0x25) = (uint)*pbVar17;
  if (lVar7 == 0) {
    iVar4 = (*(code *)plVar13[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar18 = (byte *)*plVar13;
    lVar7 = plVar13[1];
  }
  pbVar17 = pbVar18 + 1;
  lVar7 = lVar7 + -1;
  iVar4 = (uint)*pbVar18 << 8;
  *(int *)((long)param_1 + 0x34) = iVar4;
  if (lVar7 == 0) {
    iVar4 = (*(code *)plVar13[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar17 = (byte *)*plVar13;
    lVar7 = plVar13[1];
    iVar4 = *(int *)((long)param_1 + 0x34);
  }
  pbVar18 = pbVar17 + 1;
  lVar7 = lVar7 + -1;
  *(uint *)((long)param_1 + 0x34) = iVar4 + (uint)*pbVar17;
  if (lVar7 == 0) {
    iVar4 = (*(code *)plVar13[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar18 = (byte *)*plVar13;
    lVar7 = plVar13[1];
  }
  pbVar17 = pbVar18 + 1;
  lVar7 = lVar7 + -1;
  iVar4 = (uint)*pbVar18 << 8;
  *(int *)(param_1 + 6) = iVar4;
  if (lVar7 == 0) {
    iVar4 = (*(code *)plVar13[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar17 = (byte *)*plVar13;
    lVar7 = plVar13[1];
    iVar4 = (int)param_1[6];
  }
  pbVar18 = pbVar17 + 1;
  lVar7 = lVar7 + -1;
  *(uint *)(param_1 + 6) = iVar4 + (uint)*pbVar17;
  if (lVar7 == 0) {
    iVar4 = (*(code *)plVar13[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar18 = (byte *)*plVar13;
    lVar7 = plVar13[1];
  }
  lVar9 = *param_1;
  *(uint *)(param_1 + 7) = (uint)*pbVar18;
  *(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)((long)param_1 + 0x23c);
  *(int *)(lVar9 + 0x30) = (int)param_1[6];
  *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)((long)param_1 + 0x34);
  lVar5 = param_1[7];
  *(undefined4 *)(lVar9 + 0x28) = 0x66;
  *(int *)(lVar9 + 0x38) = (int)lVar5;
  (**(code **)(lVar9 + 8))(param_1,1);
  if (*(int *)(param_1[0x4d] + 0x1c) != 0) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x3d;
    (*(code *)*puVar6)(param_1);
  }
  if (((*(int *)((long)param_1 + 0x34) == 0) || ((int)param_1[6] == 0)) ||
     (iVar4 = (int)param_1[7], iVar4 < 1)) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x21;
    (*(code *)*puVar6)(param_1);
    iVar4 = (int)param_1[7];
  }
  if ((ulong)CONCAT11(uVar1,uVar2) - 8 != (long)(iVar4 * 3)) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0xc;
    (*(code *)*puVar6)(param_1);
  }
  if (param_1[0x26] == 0) {
    lVar5 = (**(code **)param_1[1])(param_1,1,(long)(int)param_1[7] * 0x60);
    param_1[0x26] = lVar5;
  }
  pbVar18 = pbVar18 + 1;
  lVar7 = lVar7 + -1;
  if (0 < (int)param_1[7]) {
    uVar14 = 0;
    uVar20 = 0xfffffffe;
    do {
      if (lVar7 == 0) {
        iVar4 = (*(code *)plVar13[3])(param_1);
        if (iVar4 == 0) {
          return;
        }
        pbVar18 = (byte *)*plVar13;
        lVar7 = plVar13[1];
      }
      pbVar17 = pbVar18 + 1;
      uVar11 = (uint)*pbVar18;
      puVar21 = (uint *)param_1[0x26];
      lVar7 = lVar7 + -1;
      puVar10 = puVar21;
      if (uVar14 != 0) {
        uVar8 = 0;
LAB_00edd358:
        if (*puVar10 != (uint)*pbVar18) goto code_r0x00edd364;
        puVar10 = puVar21 + 0x18;
        uVar11 = *puVar21;
        if (1 < uVar14) {
          uVar8 = 1;
          uVar12 = uVar11;
          do {
            uVar8 = uVar8 + 1;
            uVar11 = *puVar10;
            if ((int)*puVar10 <= (int)uVar12) {
              uVar11 = uVar12;
            }
            puVar10 = puVar10 + 0x18;
            uVar12 = uVar11;
          } while (uVar14 != uVar8);
          puVar10 = puVar21 + (ulong)uVar20 * 0x18 + 0x30;
        }
        uVar11 = uVar11 + 1;
      }
LAB_00edd3b8:
      *puVar10 = uVar11;
      puVar10[1] = uVar14;
      if (lVar7 == 0) {
        iVar4 = (*(code *)plVar13[3])(param_1);
        if (iVar4 == 0) {
          return;
        }
        pbVar17 = (byte *)*plVar13;
        lVar7 = plVar13[1];
      }
      pbVar19 = pbVar17 + 1;
      bVar3 = *pbVar17;
      lVar7 = lVar7 + -1;
      puVar10[2] = (uint)(bVar3 >> 4);
      puVar10[3] = bVar3 & 0xf;
      if (lVar7 == 0) {
        iVar4 = (*(code *)plVar13[3])(param_1);
        if (iVar4 == 0) {
          return;
        }
        pbVar19 = (byte *)*plVar13;
        lVar7 = plVar13[1];
      }
      pbVar18 = pbVar19 + 1;
      puVar10[4] = (uint)*pbVar19;
      lVar5 = *param_1;
      *(uint *)(lVar5 + 0x2c) = *puVar10;
      *(uint *)(lVar5 + 0x30) = puVar10[2];
      *(uint *)(lVar5 + 0x34) = puVar10[3];
      uVar11 = puVar10[4];
      *(undefined4 *)(lVar5 + 0x28) = 0x67;
      *(uint *)(lVar5 + 0x38) = uVar11;
      (**(code **)(lVar5 + 8))(param_1,1);
      uVar14 = uVar14 + 1;
      lVar7 = lVar7 + -1;
      uVar20 = uVar20 + 1;
    } while ((int)uVar14 < (int)param_1[7]);
  }
  *(undefined4 *)(param_1[0x4d] + 0x1c) = 1;
  *plVar13 = (long)pbVar18;
  plVar13[1] = lVar7;
  return;
code_r0x00edd364:
  uVar8 = uVar8 + 1;
  puVar10 = puVar10 + 0x18;
  if (uVar14 <= uVar8) goto LAB_00edd3b8;
  goto LAB_00edd358;
}




void FUN_00edd484(long *param_1,char *param_2,uint param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  uVar11 = (undefined4)(param_4 + (ulong)param_3);
  if (param_3 < 0xe) {
    if ((5 < param_3) && (*param_2 == 'J')) goto LAB_00edd614;
LAB_00edd640:
    lVar6 = *param_1;
    uVar8 = 0x4f;
  }
  else {
    if (*param_2 != 'J') goto LAB_00edd640;
    if ((((param_2[1] == 'F') && (param_2[2] == 'I')) && (param_2[3] == 'F')) &&
       (param_2[4] == '\0')) {
      *(undefined4 *)(param_1 + 0x2f) = 1;
      bVar1 = param_2[5];
      *(byte *)((long)param_1 + 0x17c) = bVar1;
      bVar2 = param_2[6];
      *(byte *)((long)param_1 + 0x17d) = bVar2;
      bVar3 = param_2[7];
      *(byte *)((long)param_1 + 0x17e) = bVar3;
      uVar9 = (uint)(*(ushort *)(param_2 + 8) >> 8) | (*(ushort *)(param_2 + 8) & 0xff00ff) << 8;
      *(short *)(param_1 + 0x30) = (short)uVar9;
      uVar10 = (uint)(*(ushort *)(param_2 + 10) >> 8) | (*(ushort *)(param_2 + 10) & 0xff00ff) << 8;
      *(short *)((long)param_1 + 0x182) = (short)uVar10;
      bVar4 = 1;
      if (bVar1 != 1) {
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x7a;
        *(uint *)(lVar6 + 0x2c) = (uint)bVar1;
        *(uint *)(*param_1 + 0x30) = (uint)*(byte *)((long)param_1 + 0x17d);
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        bVar2 = *(byte *)((long)param_1 + 0x17d);
        uVar9 = (uint)*(ushort *)(param_1 + 0x30);
        uVar10 = (uint)*(ushort *)((long)param_1 + 0x182);
        bVar3 = *(byte *)((long)param_1 + 0x17e);
        bVar4 = *(byte *)((long)param_1 + 0x17c);
      }
      lVar6 = *param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x59;
      *(uint *)(lVar6 + 0x2c) = (uint)bVar4;
      *(uint *)(lVar6 + 0x30) = (uint)bVar2;
      *(uint *)(lVar6 + 0x34) = uVar9;
      *(uint *)(lVar6 + 0x38) = uVar10;
      *(uint *)(lVar6 + 0x3c) = (uint)bVar3;
      (**(code **)(lVar6 + 8))(param_1,1);
      bVar1 = param_2[0xc];
      bVar2 = param_2[0xd];
      if (bVar2 != 0 || bVar1 != 0) {
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x5c;
        *(uint *)(lVar6 + 0x2c) = (uint)(byte)param_2[0xc];
        *(uint *)(*param_1 + 0x30) = (uint)(byte)param_2[0xd];
        (**(code **)(*param_1 + 8))(param_1,1);
        bVar1 = param_2[0xc];
        bVar2 = param_2[0xd];
      }
      lVar6 = param_4 + (ulong)param_3 + -0xe;
      if (lVar6 == (ulong)bVar1 * (ulong)bVar2 * 2 + (ulong)bVar1 * (ulong)bVar2) {
        return;
      }
      lVar7 = *param_1;
      *(undefined4 *)(lVar7 + 0x28) = 0x5a;
      *(int *)(lVar7 + 0x2c) = (int)lVar6;
      goto LAB_00edd64c;
    }
LAB_00edd614:
    if (((param_2[1] != 'F') || (param_2[2] != 'X')) ||
       ((param_2[3] != 'X' || (param_2[4] != '\0')))) goto LAB_00edd640;
    cVar5 = param_2[5];
    if (cVar5 == '\x13') {
      lVar6 = *param_1;
      uVar8 = 0x70;
    }
    else if (cVar5 == '\x11') {
      lVar6 = *param_1;
      uVar8 = 0x6f;
    }
    else {
      if (cVar5 != '\x10') {
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x5b;
        *(uint *)(lVar6 + 0x2c) = (uint)(byte)param_2[5];
        *(undefined4 *)(*param_1 + 0x30) = uVar11;
        goto LAB_00edd64c;
      }
      lVar6 = *param_1;
      uVar8 = 0x6e;
    }
  }
  *(undefined4 *)(lVar6 + 0x28) = uVar8;
  *(undefined4 *)(lVar6 + 0x2c) = uVar11;
LAB_00edd64c:
                    /* WARNING: Could not recover jumptable at 0x00edd668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}




void FUN_00edd6dc(long *param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  
  if ((((0xb < param_3) && (*param_2 == 'A')) && (param_2[1] == 'd')) &&
     (((param_2[2] == 'o' && (param_2[3] == 'b')) && (param_2[4] == 'e')))) {
    cVar1 = param_2[5];
    cVar2 = param_2[6];
    cVar3 = param_2[7];
    cVar4 = param_2[8];
    cVar5 = param_2[9];
    cVar6 = param_2[10];
    lVar8 = *param_1;
    bVar7 = param_2[0xb];
    *(undefined4 *)(lVar8 + 0x28) = 0x4e;
    *(uint *)(lVar8 + 0x2c) = (uint)CONCAT11(cVar1,cVar2);
    *(uint *)(lVar8 + 0x30) = (uint)CONCAT11(cVar3,cVar4);
    *(uint *)(lVar8 + 0x34) = (uint)CONCAT11(cVar5,cVar6);
    *(uint *)(lVar8 + 0x38) = (uint)bVar7;
    (**(code **)(lVar8 + 8))(param_1,1);
    *(undefined4 *)((long)param_1 + 0x184) = 1;
    *(byte *)(param_1 + 0x31) = bVar7;
    return;
  }
  lVar8 = *param_1;
  *(undefined4 *)(lVar8 + 0x28) = 0x50;
  *(uint *)(lVar8 + 0x2c) = param_4 + param_3;
                    /* WARNING: Could not recover jumptable at 0x00edd7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}




void FUN_00edd7cc(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  
  iVar8 = *(int *)((long)param_1 + 0x24);
  if (iVar8 != 0xca) {
    lVar9 = *param_1;
    *(undefined4 *)(lVar9 + 0x28) = 0x15;
    *(int *)(lVar9 + 0x2c) = iVar8;
    (**(code **)*param_1)(param_1);
  }
  FUN_00eda6f0(param_1);
  iVar8 = (int)param_1[7];
  if (0 < iVar8) {
    lVar10 = param_1[0x26];
    iVar1 = (int)param_1[0x35];
    iVar2 = *(int *)((long)param_1 + 0x1ac);
    iVar11 = 0;
    iVar12 = 4;
    lVar9 = lVar10;
    if (*(int *)((long)param_1 + 100) != 0) {
      iVar12 = 8;
    }
    do {
      iVar13 = iVar1;
      if (iVar1 <= iVar12) {
        iVar14 = 1;
        do {
          iVar14 = iVar14 * 2;
          iVar6 = iVar14 * *(int *)(lVar9 + 8);
          iVar3 = 0;
          if (iVar6 != 0) {
            iVar3 = (int)param_1[0x34] / iVar6;
          }
        } while (((int)param_1[0x34] == iVar3 * iVar6) &&
                (iVar13 = iVar1 * iVar14, iVar13 <= iVar12));
      }
      *(int *)(lVar9 + 0x24) = iVar13;
      iVar14 = iVar2;
      if (iVar2 <= iVar12) {
        iVar6 = 1;
        do {
          iVar6 = iVar6 * 2;
          iVar3 = iVar6 * *(int *)(lVar9 + 0xc);
          iVar4 = 0;
          if (iVar3 != 0) {
            iVar4 = *(int *)((long)param_1 + 0x1a4) / iVar3;
          }
        } while ((*(int *)((long)param_1 + 0x1a4) == iVar4 * iVar3) &&
                (iVar14 = iVar2 * iVar6, iVar14 <= iVar12));
      }
      *(int *)(lVar9 + 0x28) = iVar14;
      if (iVar14 * 2 < iVar13) {
        *(int *)(lVar9 + 0x24) = iVar14 << 1;
      }
      else if (iVar13 * 2 < iVar14) {
        *(int *)(lVar9 + 0x28) = iVar13 << 1;
      }
      iVar11 = iVar11 + 1;
      lVar9 = lVar9 + 0x60;
    } while (iVar11 < iVar8);
    if (0 < iVar8) {
      iVar11 = 0;
      puVar15 = (undefined4 *)(lVar10 + 0x30);
      do {
        uVar7 = FUN_00ee123c((long)(int)puVar15[-3] * (long)(int)puVar15[-10] *
                             (ulong)*(uint *)(param_1 + 6),
                             (long)*(int *)((long)param_1 + 0x22c) * (long)(int)param_1[0x34]);
        puVar15[-1] = uVar7;
        uVar7 = FUN_00ee123c((long)(int)puVar15[-2] * (long)(int)puVar15[-9] *
                             (ulong)*(uint *)((long)param_1 + 0x34),
                             (long)*(int *)((long)param_1 + 0x22c) *
                             (long)*(int *)((long)param_1 + 0x1a4));
        *puVar15 = uVar7;
        iVar8 = (int)param_1[7];
        iVar11 = iVar11 + 1;
        puVar15 = puVar15 + 0x18;
      } while (iVar11 < iVar8);
    }
  }
  uVar5 = (int)param_1[8] - 1;
  if (uVar5 < 5) {
    iVar8 = *(int *)(&DAT_01bf1d60 + (long)(int)uVar5 * 4);
  }
  iVar11 = iVar8;
  if (*(int *)((long)param_1 + 0x6c) != 0) {
    iVar11 = 1;
  }
  *(int *)(param_1 + 0x12) = iVar8;
  *(int *)((long)param_1 + 0x94) = iVar11;
  iVar8 = FUN_00edd9c0(param_1);
  if (iVar8 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(undefined4 *)((long)param_1 + 0x1a4);
  }
  *(undefined4 *)(param_1 + 0x13) = uVar7;
  return;
}




bool FUN_00edd9c0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((((((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 400) == 0)) &&
         (*(int *)(param_1 + 0x3c) == 3)) &&
        ((*(int *)(param_1 + 0x38) == 3 && (*(int *)(param_1 + 0x40) == 2)))) &&
       ((*(int *)(param_1 + 0x90) == 3 &&
        ((lVar2 = *(long *)(param_1 + 0x130), *(int *)(lVar2 + 8) == 2 &&
         (*(int *)(lVar2 + 0x68) == 1)))))) && (*(int *)(lVar2 + 200) == 1)) &&
     ((((*(int *)(lVar2 + 0xc) < 3 && (*(int *)(lVar2 + 0x6c) == 1)) &&
       (*(int *)(lVar2 + 0xcc) == 1)) &&
      (((iVar1 = *(int *)(lVar2 + 0x24), iVar1 == *(int *)(param_1 + 0x1a8) &&
        (*(int *)(lVar2 + 0x84) == iVar1)) &&
       ((*(int *)(lVar2 + 0xe4) == iVar1 &&
        ((iVar1 = *(int *)(lVar2 + 0x28), iVar1 == *(int *)(param_1 + 0x1ac) &&
         (*(int *)(lVar2 + 0x88) == iVar1)))))))))) {
    return *(int *)(lVar2 + 0xe8) == iVar1;
  }
  return false;
}




void FUN_00eddaa8(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  lVar4 = param_1[0x48];
  if (iVar1 != 0xcf) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x15;
    *(int *)(lVar3 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  if (((*(int *)((long)param_1 + 0x6c) != 0) && ((int)param_1[0x10] != 0)) && (param_1[0x14] != 0))
  {
    lVar3 = *(long *)(lVar4 + 0x28);
    param_1[0x52] = lVar3;
    (**(code **)(lVar3 + 0x18))(param_1);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    return;
  }
  puVar2 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar2 + 5) = 0x2f;
                    /* WARNING: Could not recover jumptable at 0x00eddb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1);
  return;
}




void FUN_00eddb40(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  void *__s;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x48] = (long)puVar7;
  puVar7[1] = FUN_00ede030;
  *puVar7 = FUN_00edde70;
  *(undefined4 *)(puVar7 + 2) = 0;
  FUN_00edd7cc(param_1);
  __s = (void *)(**(code **)param_1[1])(param_1,1,0x580);
  param_1[0x37] = (long)__s + 0x100;
  memset(__s,0,0x100);
  uVar11 = 0xf0e0d0c0b0a0908;
  uVar10 = 0x706050403020100;
  lVar8 = 0;
  do {
    puVar9 = (undefined8 *)((long)__s + 0x100 + lVar8);
    puVar9[1] = uVar11;
    *puVar9 = uVar10;
    lVar8 = lVar8 + 0x10;
    uVar10 = CONCAT17((char)((ulong)uVar10 >> 0x38) + '\x10',
                      CONCAT16((char)((ulong)uVar10 >> 0x30) + '\x10',
                               CONCAT15((char)((ulong)uVar10 >> 0x28) + '\x10',
                                        CONCAT14((char)((ulong)uVar10 >> 0x20) + '\x10',
                                                 CONCAT13((char)((ulong)uVar10 >> 0x18) + '\x10',
                                                          CONCAT12((char)((ulong)uVar10 >> 0x10) +
                                                                   '\x10',CONCAT11((char)((ulong)
                                                  uVar10 >> 8) + '\x10',(char)uVar10 + '\x10')))))))
    ;
    uVar11 = CONCAT17((char)((ulong)uVar11 >> 0x38) + '\x10',
                      CONCAT16((char)((ulong)uVar11 >> 0x30) + '\x10',
                               CONCAT15((char)((ulong)uVar11 >> 0x28) + '\x10',
                                        CONCAT14((char)((ulong)uVar11 >> 0x20) + '\x10',
                                                 CONCAT13((char)((ulong)uVar11 >> 0x18) + '\x10',
                                                          CONCAT12((char)((ulong)uVar11 >> 0x10) +
                                                                   '\x10',CONCAT11((char)((ulong)
                                                  uVar11 >> 8) + '\x10',(char)uVar11 + '\x10')))))))
    ;
  } while (lVar8 != 0x100);
  memset((void *)((long)__s + 0x200),0xff,0x180);
  memset((void *)((long)__s + 0x380),0,0x180);
  memcpy((void *)((long)__s + 0x500),(void *)param_1[0x37],0x80);
  if (((long)(int)param_1[0x12] * (ulong)*(uint *)(param_1 + 0x11) & 0xffffffff00000000) != 0) {
    puVar9 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar9 + 5) = 0x48;
    (*(code *)*puVar9)(param_1);
  }
  *(undefined4 *)(puVar7 + 3) = 0;
  uVar6 = FUN_00edd9c0(param_1);
  puVar7[4] = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = uVar6;
  puVar7[5] = 0;
  if (*(int *)((long)param_1 + 0x6c) == 0) {
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
    param_1[0x10] = 0;
  }
  else {
    if ((int)param_1[0xb] == 0) {
      *(undefined4 *)((long)param_1 + 0x7c) = 0;
      param_1[0x10] = 0;
    }
    if (*(int *)((long)param_1 + 0x5c) != 0) {
      puVar9 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar9 + 5) = 0x30;
      (*(code *)*puVar9)(param_1);
    }
    if ((int)param_1[0x12] == 3) {
      if (param_1[0x14] == 0) {
        if (*(int *)((long)param_1 + 0x74) == 0) {
          *(undefined4 *)((long)param_1 + 0x7c) = 1;
        }
        else {
          *(undefined4 *)((long)param_1 + 0x84) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
    }
    else {
      *(undefined4 *)((long)param_1 + 0x84) = 0;
      param_1[0x14] = 0;
      *(undefined8 *)((long)param_1 + 0x7c) = 1;
    }
    if (*(int *)((long)param_1 + 0x7c) != 0) {
      FUN_00edf31c(param_1);
      puVar7[4] = param_1[0x52];
    }
    if ((*(int *)((long)param_1 + 0x84) != 0) || ((int)param_1[0x10] != 0)) {
      FUN_00edff28(param_1);
      puVar7[5] = param_1[0x52];
    }
  }
  if (*(int *)((long)param_1 + 0x5c) == 0) {
    if (*(int *)((long)puVar7 + 0x1c) == 0) {
      FUN_00ee46c0(param_1);
      FUN_00edeb7c(param_1);
    }
    else {
      FUN_00ede06c(param_1);
    }
    FUN_00ede714(param_1,*(undefined4 *)((long)param_1 + 0x84));
  }
  FUN_00ee4fa8(param_1);
  if ((int)param_1[0x28] == 0) {
    FUN_00ee55e0(param_1);
  }
  else {
    FUN_00ee250c(param_1);
  }
  if (*(int *)(param_1[0x4c] + 0x20) == 0) {
    bVar5 = (int)param_1[0xb] != 0;
  }
  else {
    bVar5 = true;
  }
  FUN_00ee3664(param_1,bVar5);
  if (*(int *)((long)param_1 + 0x5c) == 0) {
    FUN_00ee74dc(param_1,0);
  }
  (**(code **)(param_1[1] + 0x30))(param_1);
  (**(code **)(param_1[0x4c] + 0x10))(param_1);
  lVar8 = param_1[2];
  if (((lVar8 != 0) && ((int)param_1[0xb] == 0)) && (*(int *)(param_1[0x4c] + 0x20) != 0)) {
    iVar2 = *(int *)((long)param_1 + 0x13c);
    lVar4 = param_1[7];
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar3 = *(uint *)(param_1 + 0x36);
    iVar1 = (int)lVar4;
    if (iVar2 != 0) {
      iVar1 = (int)lVar4 * 3 + 2;
    }
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(ulong *)(lVar8 + 0x10) = (long)iVar1 * (ulong)uVar3;
    uVar6 = 2;
    if (*(int *)((long)param_1 + 0x84) != 0) {
      uVar6 = 3;
    }
    *(undefined4 *)(lVar8 + 0x1c) = uVar6;
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  }
  return;
}




void FUN_00edde70(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = param_1[0x48];
  if (*(int *)(lVar7 + 0x10) == 0) {
    if ((*(int *)((long)param_1 + 0x6c) != 0) && (param_1[0x14] == 0)) {
      if ((*(int *)((long)param_1 + 0x74) == 0) || (*(int *)((long)param_1 + 0x84) == 0)) {
        if (*(int *)((long)param_1 + 0x7c) == 0) {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x2f;
          (*(code *)*puVar3)(param_1);
        }
        else {
          param_1[0x52] = *(long *)(lVar7 + 0x20);
        }
      }
      else {
        param_1[0x52] = *(long *)(lVar7 + 0x28);
        *(undefined4 *)(lVar7 + 0x10) = 1;
      }
    }
    (**(code **)param_1[0x4f])(param_1);
    (**(code **)(param_1[0x4a] + 0x10))(param_1);
    if (*(int *)((long)param_1 + 0x5c) != 0) goto LAB_00eddf08;
    if (*(int *)(lVar7 + 0x1c) == 0) {
      (**(code **)param_1[0x51])(param_1);
    }
    (**(code **)param_1[0x50])(param_1);
    if (*(int *)((long)param_1 + 0x6c) != 0) {
      (**(code **)param_1[0x52])(param_1,*(undefined4 *)(lVar7 + 0x10));
    }
    uVar1 = 0;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar1 = 3;
    }
    (**(code **)param_1[0x4b])(param_1,uVar1);
    puVar3 = (undefined8 *)param_1[0x49];
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(lVar7 + 0x10) = 0;
    (**(code **)param_1[0x52])(param_1,0);
    (**(code **)param_1[0x4b])(param_1,2);
    puVar3 = (undefined8 *)param_1[0x49];
    uVar2 = 2;
  }
  (*(code *)*puVar3)(param_1,uVar2);
LAB_00eddf08:
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    iVar6 = *(int *)(lVar7 + 0x18);
    *(int *)(lVar4 + 0x18) = iVar6;
    iVar5 = 1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      iVar5 = 2;
    }
    iVar5 = iVar5 + iVar6;
    *(int *)(lVar4 + 0x1c) = iVar5;
    if (((int)param_1[0xb] != 0) && (*(int *)(param_1[0x4c] + 0x24) == 0)) {
      iVar6 = 1;
      if (*(int *)((long)param_1 + 0x84) != 0) {
        iVar6 = 2;
      }
      *(int *)(lVar4 + 0x1c) = iVar6 + iVar5;
    }
  }
  return;
}

