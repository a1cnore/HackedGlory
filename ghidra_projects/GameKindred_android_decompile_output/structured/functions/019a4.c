// functions/019a4 — 12 functions
#include "libGameKindred.h"




void FUN_019a41f0(int *param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = 0;
  do {
    lVar4 = 0;
    do {
      iVar1 = param_1[(long)*param_1 + 2];
      iVar2 = param_1[(long)param_1[1] + 2];
      param_1[(long)*param_1 + 2] = iVar1 - iVar2 & 0x7fffffff;
      iVar6 = (int)*(undefined8 *)param_1 + 1;
      iVar7 = (int)((ulong)*(undefined8 *)param_1 >> 0x20) + 1;
      iVar8 = -(uint)(iVar6 == 0x37);
      iVar9 = -(uint)(iVar7 == 0x37);
      *(ulong *)param_1 =
           CONCAT17((byte)((uint)iVar7 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                    CONCAT16((byte)((uint)iVar7 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                             CONCAT15((byte)((uint)iVar7 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                      CONCAT14((byte)iVar7 & ~(byte)iVar9,
                                               CONCAT13((byte)((uint)iVar6 >> 0x18) &
                                                        ~(byte)((uint)iVar8 >> 0x18),
                                                        CONCAT12((byte)((uint)iVar6 >> 0x10) &
                                                                 ~(byte)((uint)iVar8 >> 0x10),
                                                                 CONCAT11((byte)((uint)iVar6 >> 8) &
                                                                          ~(byte)((uint)iVar8 >> 8),
                                                                          (byte)iVar6 & ~(byte)iVar8
                                                                         )))))));
      iVar1 = (uint)*(byte *)(param_2 + lVar4) +
              ((((iVar1 - iVar2) * 2 >> 0x17) * param_4 >> 8) + 8 >> 4);
      if (iVar1 < 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0xff;
        if (iVar1 < 0x100) {
          uVar5 = (char)iVar1;
        }
      }
      *(undefined1 *)(param_2 + lVar4) = uVar5;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 8);
    iVar3 = iVar3 + 1;
    param_2 = param_2 + param_3;
  } while (iVar3 != 8);
  return;
}




void FUN_019a428c(undefined8 param_1,long param_2)

{
  *(code **)(param_2 + 0x50) = FUN_019a4810;
  *(code **)(param_2 + 0x48) = FUN_019a4338;
  *(code **)(param_2 + 0x40) = FUN_019a42bc;
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}




undefined8 FUN_019a42bc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if ((0 < *(int *)(param_1 + 0xc)) && (0 < *(int *)(param_1 + 0x10))) {
    lVar3 = *(long *)(param_1 + 0x38);
    iVar1 = (**(code **)(lVar3 + 0x1d8))(param_1,lVar3);
    if (*(code **)(lVar3 + 0x1e0) != (code *)0x0) {
      (**(code **)(lVar3 + 0x1e0))(param_1,lVar3);
    }
    uVar2 = 1;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + iVar1;
  }
  return uVar2;
}




undefined8 FUN_019a4338(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined4 uVar12;
  code *pcVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  
  puVar16 = *(undefined8 **)(param_1 + 0x38);
  uVar7 = *(uint *)*puVar16;
  if ((uVar7 - 1 < 0xc) && ((0x81dU >> (ulong)(uVar7 - 1 & 0x1f) & 1) != 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = uVar7 - 7 < 4;
  }
  uVar12 = 0xb;
  if (!bVar9) {
    uVar12 = 0xc;
  }
  puVar16[0x3b] = 0;
  puVar16[0x3a] = 0;
  puVar16[0x3d] = 0;
  puVar16[0x3c] = 0;
  iVar10 = FUN_019a2bc8(puVar16[5],param_1,uVar12);
  if (iVar10 == 0) {
    return 0;
  }
  if ((uVar7 - 7 < 4) && (!(bool)(bVar9 ^ 1))) {
    FUN_019afc84();
  }
  plVar1 = puVar16 + 0x3a;
  if (*(int *)(param_1 + 0x88) == 0) {
    if (uVar7 < 0xb) {
      puVar16[0x3b] = FUN_019a4838;
      if (*(int *)(param_1 + 0x58) == 0) {
        FUN_019b5710();
      }
      else {
        uVar8 = *(int *)(param_1 + 0xc) + 1;
        lVar11 = FUN_019a2d40(1,(long)(int)((uVar8 & 0xfffffffe) + *(int *)(param_1 + 0xc)));
        *plVar1 = lVar11;
        if (lVar11 == 0) {
          return 0;
        }
        puVar16[1] = lVar11;
        lVar11 = lVar11 + *(int *)(param_1 + 0xc);
        puVar16[2] = lVar11;
        puVar16[3] = lVar11 + ((int)uVar8 >> 1);
        puVar16[0x3b] = FUN_019a48a4;
        FUN_019afc84();
      }
    }
    else {
      puVar16[0x3b] = FUN_019a4abc;
    }
    if (!bVar9) {
      if (10 < uVar7) {
        return 1;
      }
      goto LAB_019a4670;
    }
    pcVar13 = FUN_019a4c1c;
    if ((uVar7 != 5) && (uVar7 != 10)) {
      pcVar13 = FUN_019a4d4c;
      if (10 < uVar7) {
        pcVar13 = FUN_019a4ea0;
      }
    }
    puVar16[0x3c] = pcVar13;
    if (10 < uVar7) {
      return 1;
    }
  }
  else {
    piVar15 = (int *)*puVar16;
    iVar10 = *piVar15;
    uVar8 = iVar10 - 1;
    if (10 < uVar7) {
      if ((uVar8 < 0xc) && ((0x81dU >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
        bVar9 = true;
      }
      else {
        bVar9 = iVar10 - 7U < 4;
      }
      iVar10 = *(int *)(param_1 + 0x8c);
      iVar5 = *(int *)(param_1 + 0x90);
      lVar14 = (long)iVar10;
      uVar7 = iVar10 + 1;
      iVar4 = *(int *)(param_1 + 0xc);
      iVar6 = *(int *)(param_1 + 0x10);
      lVar11 = lVar14 << 3;
      uVar8 = uVar7 & 0xfffffffe;
      if (!bVar9) {
        lVar11 = 0;
      }
      lVar11 = FUN_019a2d40(1,lVar11 + (lVar14 * 2 + (long)(int)uVar8 * 2) * 4);
      *plVar1 = lVar11;
      if (lVar11 == 0) {
        return 0;
      }
      iVar3 = iVar5 + 1 >> 1;
      iVar4 = iVar4 + 1 >> 1;
      iVar6 = iVar6 + 1 >> 1;
      FUN_019b76d0(puVar16 + 6,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                   *(undefined8 *)(piVar15 + 4),iVar10,iVar5,piVar15[0xc],1,lVar11);
      lVar11 = lVar11 + lVar14 * 8;
      FUN_019b76d0(puVar16 + 0x13,iVar4,iVar6,*(undefined8 *)(piVar15 + 6),(int)uVar7 >> 1,iVar3,
                   piVar15[0xd],1,lVar11);
      FUN_019b76d0(puVar16 + 0x20,iVar4,iVar6,*(undefined8 *)(piVar15 + 8),(int)uVar7 >> 1,iVar3,
                   piVar15[0xe],1,lVar11 + (long)(int)uVar8 * 4);
      puVar16[0x3b] = FUN_019a5424;
      if (bVar9) {
        FUN_019b76d0(puVar16 + 0x2d,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                     *(undefined8 *)(piVar15 + 10),iVar10,iVar5,piVar15[0xf],1,
                     lVar11 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar8 << 1) * 4
                    );
        puVar16[0x3c] = FUN_019a5500;
        FUN_019a96ec();
        return 1;
      }
      return 1;
    }
    if ((uVar8 < 0xc) && ((0x81dU >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
      bVar9 = true;
    }
    else {
      bVar9 = iVar10 - 7U < 4;
    }
    iVar10 = *(int *)(param_1 + 0x8c);
    uVar12 = *(undefined4 *)(param_1 + 0x90);
    lVar14 = (long)iVar10;
    iVar4 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(param_1 + 0x10);
    lVar11 = lVar14;
    if (!bVar9) {
      lVar11 = 0;
    }
    lVar2 = lVar14 << 3;
    if (!bVar9) {
      lVar2 = lVar14 * 6;
    }
    lVar11 = FUN_019a2d40(1,lVar11 + lVar14 * 3 + lVar2 * 4);
    *plVar1 = lVar11;
    if (lVar11 == 0) {
      return 0;
    }
    lVar2 = lVar11 + lVar2 * 4;
    iVar4 = iVar4 + 1 >> 1;
    iVar5 = iVar5 + 1 >> 1;
    FUN_019b76d0(puVar16 + 6,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),lVar2,
                 iVar10,uVar12,0,1,lVar11);
    FUN_019b76d0(puVar16 + 0x13,iVar4,iVar5,lVar2 + lVar14,iVar10,uVar12,0,1,lVar11 + lVar14 * 8);
    FUN_019b76d0(puVar16 + 0x20,iVar4,iVar5,lVar2 + lVar14 * 2,iVar10,uVar12,0,1,
                 lVar11 + lVar14 * 0x10);
    puVar16[0x3b] = FUN_019a4f50;
    if (!bVar9) goto LAB_019a4670;
    FUN_019b76d0(puVar16 + 0x2d,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 lVar2 + lVar14 * 3,iVar10,uVar12,0,1,lVar11 + lVar14 * 0x18);
    puVar16[0x3c] = FUN_019a512c;
    pcVar13 = FUN_019a51c4;
    if ((*(int *)*puVar16 != 5) && (*(int *)*puVar16 != 10)) {
      pcVar13 = FUN_019a52e4;
    }
    puVar16[0x3d] = pcVar13;
  }
  FUN_019a96ec();
LAB_019a4670:
  FUN_019b5650();
  return 1;
}




void FUN_019a4810(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  free(*(void **)(lVar1 + 0x1d0));
  *(undefined8 *)(lVar1 + 0x1d0) = 0;
  return;
}




undefined4 FUN_019a4838(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_2;
  FUN_019b5654(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x34),
               *(long *)(puVar1 + 4) + (long)(int)puVar1[6] * (long)*(int *)(param_1 + 8),
               (long)(int)puVar1[6],*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)(&DAT_0321a950 + (ulong)*puVar1 * 8));
  return *(undefined4 *)(param_1 + 0x10);
}




int FUN_019a48a4(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  void *__src;
  int iVar7;
  code *pcVar8;
  long lVar9;
  void *__src_00;
  int iVar10;
  uint *puVar11;
  
  puVar11 = (uint *)*param_2;
  iVar5 = *(int *)(param_1 + 0xc);
  iVar10 = *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x18);
  __src = *(void **)(param_1 + 0x20);
  __src_00 = *(void **)(param_1 + 0x28);
  pcVar8 = *(code **)(&DAT_0321a8e8 + (ulong)*puVar11 * 8);
  lVar9 = *(long *)(puVar11 + 4) + (long)(int)puVar11[6] * (long)iVar7;
  iVar1 = iVar5 + 2;
  uVar2 = iVar7 + iVar10;
  if (-1 < iVar5 + 1) {
    iVar1 = iVar5 + 1;
  }
  if (iVar7 == 0) {
    (*pcVar8)(lVar6,0,__src,__src_00,__src,__src_00,lVar9,0,iVar5);
  }
  else {
    (*pcVar8)(param_2[1],lVar6,param_2[2],param_2[3],__src,__src_00,lVar9 - (int)puVar11[6],lVar9,
              iVar5);
    iVar10 = iVar10 + 1;
  }
  while (iVar7 = iVar7 + 2, iVar7 < (int)uVar2) {
    pvVar3 = (void *)((long)__src + (long)*(int *)(param_1 + 0x34));
    pvVar4 = (void *)((long)__src_00 + (long)*(int *)(param_1 + 0x34));
    lVar9 = lVar9 + (long)(int)puVar11[6] * 2;
    lVar6 = lVar6 + (long)*(int *)(param_1 + 0x30) * 2;
    (*pcVar8)(lVar6 - *(int *)(param_1 + 0x30),lVar6,__src,__src_00,pvVar3,pvVar4,
              lVar9 - (int)puVar11[6],lVar9,iVar5);
    __src = pvVar3;
    __src_00 = pvVar4;
  }
  pvVar3 = (void *)(lVar6 + *(int *)(param_1 + 0x30));
  if ((int)(*(int *)(param_1 + 0x80) + uVar2) < *(int *)(param_1 + 0x84)) {
    memcpy((void *)param_2[1],pvVar3,(long)iVar5);
    memcpy((void *)param_2[2],__src,(long)(iVar1 >> 1));
    memcpy((void *)param_2[3],__src_00,(long)(iVar1 >> 1));
    iVar10 = iVar10 + -1;
  }
  else if ((uVar2 & 1) == 0) {
    (*pcVar8)(pvVar3,0,__src,__src_00,__src,__src_00,lVar9 + (int)puVar11[6],0,iVar5);
  }
  return iVar10;
}




undefined4 FUN_019a4abc(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  void *__dest;
  long lVar11;
  int iVar12;
  long lVar13;
  
  iVar10 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = iVar10 + 2;
  iVar2 = iVar3 + 2;
  if (-1 < iVar10 + 1) {
    iVar1 = iVar10 + 1;
  }
  if (-1 < iVar3 + 1) {
    iVar2 = iVar3 + 1;
  }
  if (0 < iVar3) {
    lVar11 = *param_2;
    iVar6 = *(int *)(param_1 + 8);
    lVar4 = *(long *)(lVar11 + 0x18);
    iVar7 = *(int *)(lVar11 + 0x38);
    iVar5 = *(int *)(lVar11 + 0x34);
    lVar9 = *(long *)(lVar11 + 0x20);
    __dest = (void *)(*(long *)(lVar11 + 0x10) + (long)*(int *)(lVar11 + 0x30) * (long)iVar6);
    memcpy(__dest,*(void **)(param_1 + 0x18),(long)iVar10);
    if (iVar3 != 1) {
      iVar12 = 1;
      do {
        memcpy((void *)((long)__dest + (long)*(int *)(lVar11 + 0x30) * (long)iVar12),
               (void *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x30) * (long)iVar12),
               (long)iVar10);
        iVar12 = iVar12 + 1;
      } while (iVar3 != iVar12);
    }
    if (0 < iVar3) {
      lVar8 = ((long)iVar6 << 0x20) >> 0x21;
      iVar10 = 0;
      do {
        lVar13 = (long)iVar10;
        memcpy((void *)(lVar4 + iVar5 * lVar8 + *(int *)(lVar11 + 0x34) * lVar13),
               (void *)(*(long *)(param_1 + 0x20) + *(int *)(param_1 + 0x34) * lVar13),
               (long)(iVar1 >> 1));
        memcpy((void *)(lVar9 + iVar7 * lVar8 + *(int *)(lVar11 + 0x38) * lVar13),
               (void *)(*(long *)(param_1 + 0x28) + *(int *)(param_1 + 0x34) * lVar13),
               (long)(iVar1 >> 1));
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar2 >> 1);
    }
  }
  return *(undefined4 *)(param_1 + 0x10);
}




undefined8 FUN_019a4c1c(int *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  int *piVar13;
  int local_54;
  long local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_50 = *(long *)(param_1 + 0x26);
  if (local_50 != 0) {
    piVar13 = (int *)*param_2;
    uVar2 = param_1[3];
    iVar3 = *piVar13;
    iVar6 = FUN_019a5614(param_1,&local_50,&local_54);
    if (0 < local_54) {
      iVar7 = piVar13[6];
      iVar8 = 0;
      pbVar1 = (byte *)(*(long *)(piVar13 + 4) + (long)(iVar7 * iVar6));
      bVar9 = 0xf;
      pbVar10 = pbVar1;
      do {
        if (0 < (int)uVar2) {
          uVar11 = 0;
          pbVar12 = pbVar10;
          do {
            bVar4 = *(byte *)(local_50 + uVar11);
            uVar11 = uVar11 + 1;
            *pbVar12 = *pbVar12 & 0xf0 | bVar4 >> 4;
            bVar9 = bVar9 & bVar4 >> 4;
            pbVar12 = pbVar12 + 2;
          } while (uVar2 != uVar11);
          iVar7 = piVar13[6];
        }
        iVar8 = iVar8 + 1;
        pbVar10 = pbVar10 + iVar7;
        local_50 = local_50 + *param_1;
      } while (iVar8 < local_54);
      if ((iVar3 - 7U < 4) && (bVar9 != 0xf)) {
        (*DAT_0321a740)(pbVar1,(ulong)uVar2);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_019a4d4c(int *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  int local_64;
  long local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_60 = *(long *)(param_1 + 0x26);
  if (local_60 != 0) {
    piVar13 = (int *)*param_2;
    uVar3 = param_1[3];
    iVar4 = *piVar13;
    iVar6 = FUN_019a5614(param_1,&local_60,&local_64);
    if (0 < local_64) {
      iVar7 = piVar13[6];
      lVar9 = 0;
      if (iVar4 != 4 && iVar4 != 9) {
        lVar9 = 3;
      }
      lVar2 = *(long *)(piVar13 + 4) + (long)(iVar7 * iVar6);
      iVar6 = 0;
      lVar9 = lVar2 + lVar9;
      bVar8 = 0xff;
      do {
        if (0 < (int)uVar3) {
          uVar10 = 0;
          uVar11 = 0;
          do {
            uVar12 = uVar10 & 0xfffffffc;
            uVar10 = uVar10 + 4;
            pbVar1 = (byte *)(local_60 + uVar11);
            uVar11 = uVar11 + 1;
            bVar8 = bVar8 & *pbVar1;
            *(byte *)(lVar9 + uVar12) = *pbVar1;
          } while (uVar3 != uVar11);
          iVar7 = piVar13[6];
        }
        iVar6 = iVar6 + 1;
        lVar9 = lVar9 + iVar7;
        local_60 = local_60 + *param_1;
      } while (iVar6 < local_64);
      if ((iVar4 - 7U < 4) && (bVar8 != 0xff)) {
        (*DAT_0321a748)(lVar2,iVar4 == 4 || iVar4 == 9,(ulong)uVar3);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_019a4ea0(int *param_1,long *param_2)

{
  int iVar1;
  void *__s;
  void *__src;
  long lVar2;
  int iVar3;
  
  lVar2 = *param_2;
  iVar1 = param_1[3];
  __src = *(void **)(param_1 + 0x26);
  iVar3 = param_1[4];
  __s = (void *)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x3c) * (long)param_1[2]);
  if (__src == (void *)0x0) {
    if ((*(long *)(lVar2 + 0x28) != 0) && (0 < iVar3)) {
      do {
        memset(__s,0xff,(long)iVar1);
        iVar3 = iVar3 + -1;
        __s = (void *)((long)__s + (long)*(int *)(lVar2 + 0x3c));
      } while (iVar3 != 0);
    }
  }
  else if (0 < iVar3) {
    do {
      memcpy(__s,__src,(long)iVar1);
      iVar3 = iVar3 + -1;
      __src = (void *)((long)__src + (long)*param_1);
      __s = (void *)((long)__s + (long)*(int *)(lVar2 + 0x3c));
    } while (iVar3 != 0);
  }
  return 0;
}




int FUN_019a4f50(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 1) {
    iVar5 = 0;
  }
  else {
    iVar9 = 0;
    iVar5 = 0;
    iVar1 = 0;
    do {
      iVar3 = FUN_019b789c(param_2 + 6,iVar2 - iVar9,
                           *(long *)(param_1 + 0x18) + (long)(*(int *)(param_1 + 0x30) * iVar9));
      iVar8 = (iVar2 + 1 >> 1) - iVar1;
      iVar4 = FUN_019b789c(param_2 + 0x13,iVar8,
                           *(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x34) * (long)iVar1)
      ;
      FUN_019b789c(param_2 + 0x20,iVar8,
                   *(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x34) * (long)iVar1);
      iVar1 = iVar4 + iVar1;
      iVar8 = 0;
      iVar9 = iVar3 + iVar9;
      if (*(int *)(param_2 + 0xe) < *(int *)(param_2 + 0xd)) {
        puVar10 = (uint *)*param_2;
        iVar8 = 0;
        pcVar6 = (code *)(&PTR_FUN_02baf9a0)[*puVar10];
        lVar7 = *(long *)(puVar10 + 4) +
                ((long)*(int *)(param_2 + 4) + (long)iVar5) * (long)(int)puVar10[6];
        do {
          if (((0 < *(int *)(param_2 + 9)) || (*(int *)(param_2 + 0x1a) <= *(int *)(param_2 + 0x1b))
              ) || (0 < *(int *)(param_2 + 0x16))) break;
          FUN_019b7490(param_2 + 6);
          FUN_019b7490(param_2 + 0x13);
          FUN_019b7490(param_2 + 0x20);
          (*pcVar6)(param_2[0xf],param_2[0x1c],param_2[0x29],lVar7,
                    *(undefined4 *)((long)param_2 + 100));
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + (int)puVar10[6];
        } while (*(int *)(param_2 + 0xe) < *(int *)(param_2 + 0xd));
      }
      iVar5 = iVar8 + iVar5;
    } while (iVar9 < iVar2);
  }
  return iVar5;
}

