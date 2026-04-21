// functions/00f1b — 10 functions
#include "libGameKindred.h"




void FUN_00f1b0a4(float param_1,float param_2,long param_3,undefined8 param_4,int *param_5,
                 int *param_6,int *param_7,int *param_8)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  
  iVar5 = FUN_00f1b1d0();
  if (iVar5 < 0) {
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = 0;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = 0;
    }
    if (param_8 != (int *)0x0) {
      *param_8 = 0;
    }
  }
  else {
    lVar1 = *(long *)(param_3 + 8) + (long)iVar5;
    uVar2 = *(ushort *)(lVar1 + 4);
    uVar3 = *(ushort *)(lVar1 + 6);
    uVar4 = *(ushort *)(lVar1 + 8);
    if (param_5 != (int *)0x0) {
      *param_5 = (int)((float)(int)(short)(*(ushort *)(lVar1 + 2) >> 8 | *(ushort *)(lVar1 + 2) << 8
                                          ) * param_1 + 0.0);
    }
    if (param_6 != (int *)0x0) {
      *param_6 = (int)((float)-(int)(short)(uVar4 >> 8 | uVar4 << 8) * param_2 + 0.0);
    }
    if (param_7 != (int *)0x0) {
      *param_7 = (int)((float)(int)(short)(uVar3 >> 8 | uVar3 << 8) * param_1 + 0.0);
    }
    if (param_8 != (int *)0x0) {
      *param_8 = (int)((float)-(int)(short)(uVar2 >> 8 | uVar2 << 8) * param_2 + 0.0);
    }
  }
  return;
}




int FUN_00f1b1d0(long param_1,int param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_2 < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x34) < 2)) {
    lVar4 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x34) == 0) {
      puVar2 = (undefined1 *)(lVar4 + (long)param_2 * 2);
      uVar5 = (uint)CONCAT11(*puVar2,puVar2[1]) << 1;
      uVar6 = (uint)CONCAT11(puVar2[2],puVar2[3]) << 1;
    }
    else {
      puVar1 = (uint *)(lVar4 + (long)param_2 * 4);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    }
    iVar3 = uVar5 + *(int *)(param_1 + 0x20);
    if (uVar5 == uVar6) {
      iVar3 = -1;
    }
    return iVar3;
  }
  return -1;
}




uint FUN_00f1b24c(long param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5));
  if (uVar1 != 0) {
    uVar2 = 0;
    param_1 = param_1 + 0x17;
    do {
      if ((((*(char *)(param_1 + -0xb) == *param_2) && (*(char *)(param_1 + -10) == param_2[1])) &&
          (*(char *)(param_1 + -9) == param_2[2])) && (*(char *)(param_1 + -8) == param_2[3])) {
        uVar1 = (*(uint *)(param_1 + -3) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + -3) & 0xff00ff) << 8;
        return uVar1 >> 0x10 | uVar1 << 0x10;
      }
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 0x10;
    } while (uVar2 < uVar1);
  }
  return 0;
}




int FUN_00f1b2c8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  long lVar7;
  ushort uVar8;
  void *__src;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  void *__dest;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined2 *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  short *psVar19;
  byte bVar20;
  short sVar21;
  byte bVar22;
  byte *pbVar23;
  long lVar24;
  long lVar25;
  ushort *puVar26;
  void *__src_00;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 local_b8;
  void *local_b0;
  long local_a8;
  
  lVar7 = tpidr_el0;
  local_a8 = *(long *)(lVar7 + 0x28);
  lVar25 = param_1[1];
  iVar9 = FUN_00f1b1d0();
  *param_3 = 0;
  if (iVar9 < 0) {
LAB_00f1b6d4:
    iVar11 = 0;
  }
  else {
    puVar26 = (ushort *)(lVar25 + iVar9);
    uVar12 = (uint)(short)(*puVar26 >> 8 | *puVar26 << 8);
    if ((int)uVar12 < 1) {
      if (uVar12 == 0xffffffff) {
        __dest = (void *)0x0;
        __src_00 = (void *)0x0;
        puVar26 = puVar26 + 5;
        iVar9 = 0;
        do {
          local_b0 = (void *)0x0;
          bVar20 = *(byte *)((long)puVar26 + 1);
          uVar8 = puVar26[1];
          cVar2 = *(char *)((long)puVar26 + 3);
          puVar17 = puVar26 + 2;
          fVar40 = 0.0;
          if ((bVar20 >> 1 & 1) == 0) {
            fVar41 = 0.0;
joined_r0x00f1b838:
            if ((bVar20 >> 3 & 1) == 0) goto LAB_00f1b798;
LAB_00f1b83c:
            puVar26 = puVar17 + 1;
            fVar42 = 0.0;
            fVar38 = 0.0;
            fVar43 = (float)(int)(short)(*puVar17 >> 8 | *puVar17 << 8) * 6.1035156e-05;
            fVar39 = fVar43;
          }
          else {
            if ((bVar20 & 1) != 0) {
              fVar41 = (float)(int)CONCAT11((char)*puVar17,*(char *)((long)puVar26 + 5));
              fVar40 = (float)(int)(short)(puVar26[3] >> 8 | puVar26[3] << 8);
              puVar17 = puVar26 + 4;
              goto joined_r0x00f1b838;
            }
            fVar41 = (float)(int)(char)*puVar17;
            puVar17 = puVar26 + 3;
            fVar40 = (float)(int)*(char *)((long)puVar26 + 5);
            if ((bVar20 >> 3 & 1) != 0) goto LAB_00f1b83c;
LAB_00f1b798:
            if ((bVar20 >> 6 & 1) == 0) {
              if ((char)bVar20 < '\0') {
                puVar26 = puVar17 + 4;
                fVar43 = (float)(int)(short)(*puVar17 >> 8 | *puVar17 << 8) * 6.1035156e-05;
                fVar38 = (float)(int)(short)(puVar17[1] >> 8 | puVar17[1] << 8) * 6.1035156e-05;
                fVar42 = (float)(int)(short)(puVar17[2] >> 8 | puVar17[2] << 8) * 6.1035156e-05;
                fVar39 = (float)(int)(short)(puVar17[3] >> 8 | puVar17[3] << 8) * 6.1035156e-05;
                goto LAB_00f1b864;
              }
              fVar39 = 1.0;
              fVar43 = fVar39;
            }
            else {
              uVar3 = *puVar17;
              puVar26 = puVar17 + 1;
              puVar17 = puVar17 + 2;
              fVar43 = (float)(int)(short)(uVar3 >> 8 | uVar3 << 8) * 6.1035156e-05;
              fVar39 = (float)(int)(short)(*puVar26 >> 8 | *puVar26 << 8) * 6.1035156e-05;
            }
            fVar42 = 0.0;
            fVar38 = 0.0;
            puVar26 = puVar17;
          }
LAB_00f1b864:
          fVar35 = fVar38 * fVar38 + fVar43 * fVar43;
          fVar36 = SQRT(fVar35);
          if (NAN(fVar36)) {
            fVar36 = sqrtf(fVar35);
          }
          fVar35 = fVar39 * fVar39 + fVar42 * fVar42;
          fVar37 = SQRT(fVar35);
          if (NAN(fVar37)) {
            fVar37 = sqrtf(fVar35);
          }
          uVar12 = FUN_00f1b2c8(param_1,CONCAT11((char)uVar8,cVar2),&local_b0);
          __src = local_b0;
          uVar30 = (ulong)uVar12;
          iVar11 = iVar9;
          if (0 < (int)uVar12) {
            psVar19 = (short *)((long)local_b0 + 4);
            do {
              sVar21 = psVar19[-2];
              uVar30 = uVar30 - 1;
              psVar19[-2] = (short)(int)(fVar36 * (fVar41 + fVar43 * (float)(int)sVar21 +
                                                            fVar42 * (float)(int)psVar19[-1]));
              psVar19[-1] = (short)(int)(fVar37 * (fVar40 + fVar38 * (float)(int)sVar21 +
                                                            fVar39 * (float)(int)psVar19[-1]));
              sVar21 = *psVar19;
              *psVar19 = (short)(int)(fVar36 * (fVar41 + fVar43 * (float)(int)sVar21 +
                                                         fVar42 * (float)(int)psVar19[1]));
              psVar19[1] = (short)(int)(fVar37 * (fVar40 + fVar38 * (float)(int)sVar21 +
                                                           fVar39 * (float)(int)psVar19[1]));
              psVar19 = psVar19 + 5;
            } while (uVar30 != 0);
            iVar11 = uVar12 + iVar9;
            __dest = (void *)FUN_00f1ba1c((long)iVar11 * 10,*param_1);
            if (__dest == (void *)0x0) {
              iVar11 = 0;
              goto LAB_00f1b9cc;
            }
            if (0 < iVar9) {
              memcpy(__dest,__src_00,(long)iVar9 * 10);
            }
            memcpy((void *)((long)__dest + (long)iVar9 * 10),__src,(long)(int)uVar12 * 10);
            __src_00 = __dest;
          }
          iVar9 = iVar11;
        } while ((bVar20 >> 5 & 1) != 0);
      }
      else {
        iVar11 = 0;
        __dest = (void *)0x0;
      }
    }
    else {
      puVar17 = puVar26 + (long)(int)uVar12 + 5;
      uVar30 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar12 << 1;
      uVar29 = (uint)((ulong)uVar12 << 1);
      uVar12 = (uint)CONCAT11((char)puVar17[-1],*(undefined1 *)((long)puVar17 + -1));
      uVar8 = *puVar17;
      uVar1 = *(undefined1 *)((long)puVar17 + 1);
      __dest = (void *)FUN_00f1ba1c((long)(int)(((uVar29 | 1) + uVar12) * 10),*param_1);
      if (__dest == (void *)0x0) goto LAB_00f1b6d4;
      bVar20 = 0;
      bVar22 = 0;
      lVar25 = -1;
      puVar17 = (ushort *)((long)puVar17 + (ulong)CONCAT11((char)uVar8,uVar1) + 2);
      pbVar23 = (byte *)((long)__dest + uVar30 * 10 + 8);
      do {
        if (bVar22 == 0) {
          puVar18 = (ushort *)((long)puVar17 + 1);
          bVar20 = (byte)*puVar17;
          if ((bVar20 >> 3 & 1) == 0) {
            bVar22 = 0;
          }
          else {
            bVar22 = *(byte *)((long)puVar17 + 1);
            puVar18 = puVar17 + 1;
          }
        }
        else {
          bVar22 = bVar22 - 1;
          puVar18 = puVar17;
        }
        lVar25 = lVar25 + 1;
        *pbVar23 = bVar20;
        puVar17 = puVar18;
        pbVar23 = pbVar23 + 10;
      } while ((ulong)(uVar12 + 1) - 1 != lVar25);
      sVar21 = 0;
      pbVar23 = (byte *)((long)__dest + uVar30 * 10 + 8);
      lVar24 = -1;
      do {
        bVar20 = *pbVar23;
        if ((bVar20 >> 1 & 1) == 0) {
          puVar17 = puVar18;
          if ((bVar20 >> 4 & 1) == 0) {
            puVar17 = puVar18 + 1;
            sVar21 = sVar21 + (*puVar18 >> 8 | *puVar18 << 8);
          }
        }
        else {
          puVar17 = (ushort *)((long)puVar18 + 1);
          uVar8 = -(ushort)(byte)*puVar18;
          if ((bVar20 & 0x10) != 0) {
            uVar8 = (ushort)(byte)*puVar18;
          }
          sVar21 = uVar8 + sVar21;
        }
        lVar24 = lVar24 + 1;
        *(short *)(pbVar23 + -8) = sVar21;
        pbVar23 = pbVar23 + 10;
        puVar18 = puVar17;
      } while (lVar25 != lVar24);
      sVar21 = 0;
      pbVar23 = (byte *)((long)__dest + uVar30 * 10 + 8);
      lVar24 = -1;
      do {
        bVar20 = *pbVar23;
        if ((bVar20 >> 2 & 1) == 0) {
          puVar18 = puVar17;
          if ((bVar20 >> 5 & 1) == 0) {
            puVar18 = puVar17 + 1;
            sVar21 = sVar21 + (*puVar17 >> 8 | *puVar17 << 8);
          }
        }
        else {
          puVar18 = (ushort *)((long)puVar17 + 1);
          uVar8 = -(ushort)(byte)*puVar17;
          if ((bVar20 & 0x20) != 0) {
            uVar8 = (ushort)(byte)*puVar17;
          }
          sVar21 = uVar8 + sVar21;
        }
        lVar24 = lVar24 + 1;
        *(short *)(pbVar23 + -6) = sVar21;
        pbVar23 = pbVar23 + 10;
        puVar17 = puVar18;
      } while (lVar25 != lVar24);
      iVar33 = 0;
      iVar9 = 0;
      iVar11 = 0;
      uVar28 = 0;
      uVar32 = 0;
      uVar15 = 0;
      uVar30 = 0;
      bVar20 = 0;
      iVar14 = 0;
      local_b8 = 0;
      iVar10 = 0;
      do {
        iVar34 = iVar33 + uVar29;
        psVar19 = (short *)((long)__dest + (long)iVar34 * 10);
        bVar22 = *(byte *)(psVar19 + 4);
        sVar21 = *psVar19;
        uVar31 = (uint)sVar21;
        sVar4 = psVar19[1];
        uVar27 = (uint)sVar4;
        if (iVar11 == iVar33) {
          if (iVar33 != 0) {
            iVar10 = FUN_00f1ba80(__dest,iVar10,iVar14,bVar20,uVar30,uVar15,uVar32,uVar28,
                                  local_b8._4_4_,(int)local_b8);
          }
          bVar20 = ~bVar22 & 1;
          if ((bVar22 & 1) == 0) {
            lVar25 = (long)iVar34 + 1;
            psVar19 = (short *)((long)__dest + lVar25 * 10);
            sVar5 = *psVar19;
            uVar30 = (ulong)sVar5;
            uVar32 = uVar31;
            uVar28 = uVar27;
            if ((*(byte *)(psVar19 + 4) & 1) == 0) {
              uVar30 = (ulong)(uint)((int)sVar5 + (int)sVar21 >> 1);
              uVar15 = (ulong)(uint)((int)*(short *)((long)__dest + lVar25 * 10 + 2) + (int)sVar4 >>
                                    1);
            }
            else {
              uVar15 = (ulong)*(short *)((long)__dest + lVar25 * 10 + 2);
              iVar33 = iVar33 + 1;
            }
          }
          else {
            uVar30 = (ulong)uVar31;
            uVar15 = (ulong)uVar27;
          }
          puVar16 = (undefined2 *)((long)__dest + (long)iVar10 * 10);
          *(undefined1 *)(puVar16 + 4) = 1;
          lVar25 = (long)iVar9;
          *puVar16 = (short)uVar30;
          puVar16[1] = (short)uVar15;
          *(undefined4 *)(puVar16 + 2) = 0;
          iVar14 = 0;
          iVar9 = iVar9 + 1;
          iVar11 = CONCAT11((char)puVar26[lVar25 + 5],
                            *(undefined1 *)((long)(puVar26 + lVar25 + 5) + 1)) + 1;
LAB_00f1b664:
          iVar34 = iVar33;
          iVar13 = iVar10 + 1;
        }
        else {
          uVar6 = (undefined2)((ulong)local_b8 >> 0x20);
          iVar34 = iVar33;
          if ((bVar22 & 1) == 0) {
            if (iVar14 != 0) {
              puVar16 = (undefined2 *)((long)__dest + (long)iVar10 * 10);
              *(undefined1 *)(puVar16 + 4) = 3;
              puVar16[2] = uVar6;
              puVar16[3] = (short)local_b8;
              *puVar16 = (short)((uint)(local_b8._4_4_ + sVar21) >> 1);
              puVar16[1] = (short)((uint)((int)local_b8 + sVar4) >> 1);
              iVar14 = 1;
              local_b8 = CONCAT44((int)sVar21,(int)sVar4);
              goto LAB_00f1b664;
            }
            iVar14 = 1;
            local_b8 = CONCAT44((int)sVar21,(int)sVar4);
            iVar13 = iVar10;
          }
          else {
            psVar19 = (short *)((long)__dest + (long)iVar10 * 10);
            iVar13 = iVar10 + 1;
            lVar25 = (long)iVar10;
            if (iVar14 == 0) {
              *(undefined1 *)(psVar19 + 4) = 2;
              *psVar19 = sVar21;
              *(short *)((long)__dest + lVar25 * 10 + 2) = sVar4;
              *(undefined4 *)((long)__dest + lVar25 * 10 + 4) = 0;
            }
            else {
              *(undefined1 *)(psVar19 + 4) = 3;
              *psVar19 = sVar21;
              *(short *)((long)__dest + lVar25 * 10 + 2) = sVar4;
              iVar14 = 0;
              *(undefined2 *)((long)__dest + lVar25 * 10 + 4) = uVar6;
              *(short *)((long)__dest + lVar25 * 10 + 6) = (short)local_b8;
            }
          }
        }
        iVar33 = iVar34 + 1;
        iVar10 = iVar13;
      } while (iVar34 < (int)uVar12);
      iVar11 = FUN_00f1ba80(__dest,iVar13,iVar14,bVar20,uVar30,uVar15,uVar32,uVar28,local_b8._4_4_,
                            (int)local_b8);
    }
    *param_3 = (long)__dest;
  }
LAB_00f1b9cc:
  if (*(long *)(lVar7 + 0x28) == local_a8) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00f1ba1c(int param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(long *)(param_2 + 2) + (ulong)*param_2;
  uVar1 = *param_2 + param_1;
  if ((uVar2 & 0xf) == 0) {
    uVar3 = 0;
    if (uVar1 < (param_2[4] & 0x7fffffff)) {
      *param_2 = uVar1;
      return uVar2;
    }
  }
  else {
    uVar3 = 0;
    if (uVar1 + 0xf < (param_2[4] & 0x7fffffff)) {
      uVar3 = uVar2 + 0xf & 0xfffffffffffffff0;
      *param_2 = uVar1 + 0xf;
    }
  }
  return uVar3;
}




int FUN_00f1ba80(long param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                undefined2 param_6,int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined2 *puVar4;
  long lVar5;
  
  if (param_4 == 0) {
    puVar4 = (undefined2 *)(param_1 + (long)param_2 * 10);
    iVar2 = param_2 + 1;
    lVar3 = (long)param_2;
    if (param_3 == 0) {
      param_8 = 0;
      *(undefined1 *)(puVar4 + 4) = 2;
      lVar5 = param_1 + lVar3 * 10;
      *puVar4 = param_5;
      *(undefined2 *)(lVar5 + 2) = param_6;
      *(undefined2 *)(lVar5 + 4) = 0;
    }
    else {
      *(undefined1 *)(puVar4 + 4) = 3;
      *puVar4 = param_5;
      lVar5 = param_1 + lVar3 * 10;
      *(undefined2 *)(lVar5 + 2) = param_6;
      *(short *)(lVar5 + 4) = (short)param_9;
      param_8 = param_10;
    }
  }
  else {
    iVar1 = param_2;
    if (param_3 != 0) {
      iVar1 = param_2 + 1;
      puVar4 = (undefined2 *)(param_1 + (long)param_2 * 10);
      *(undefined1 *)(puVar4 + 4) = 3;
      *puVar4 = (short)((uint)(param_9 + param_7) >> 1);
      puVar4[1] = (short)((uint)(param_10 + param_8) >> 1);
      puVar4[2] = (short)param_9;
      puVar4[3] = (short)param_10;
    }
    puVar4 = (undefined2 *)(param_1 + (long)iVar1 * 10);
    iVar2 = iVar1 + 1;
    lVar3 = (long)iVar1;
    *(undefined1 *)(puVar4 + 4) = 3;
    *puVar4 = param_5;
    puVar4[1] = param_6;
    puVar4[2] = (short)param_7;
  }
  *(short *)(param_1 + lVar3 * 10 + 6) = (short)param_8;
  return iVar2;
}




void FUN_00f1bb68(ulong param_1,ulong param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined8 param_7,long param_8,int *param_9,int param_10)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  ulong uVar6;
  undefined8 uVar8;
  float fVar9;
  
  if (param_10 < 0x11) {
    uVar8 = NEON_fmov(0x3e800000,4);
    fVar5 = (param_6 + (float)param_2 + param_4 + param_4) * (float)uVar8;
    fVar9 = (float)((ulong)uVar8 >> 0x20);
    fVar7 = (param_5 + (float)param_1 + param_3 + param_3) * fVar9;
    param_10 = param_10 + -1;
    fVar3 = (param_6 + (float)param_2) * 0.5 - fVar5;
    fVar4 = (param_5 + (float)param_1) * 0.5 - fVar7;
    uVar6 = CONCAT44(fVar7,fVar5);
    do {
      if (fVar3 * fVar3 + fVar4 * fVar4 <= (float)param_7) {
        iVar2 = *param_9;
        if (param_8 != 0) {
          pfVar1 = (float *)(param_8 + (long)iVar2 * 8);
          *pfVar1 = param_5;
          pfVar1[1] = param_6;
        }
        *param_9 = iVar2 + 1;
        return;
      }
      FUN_00f1bb68(param_1,param_2,((float)param_1 + param_3) * 0.5,((float)param_2 + param_4) * 0.5
                   ,uVar6 >> 0x20,uVar6,param_7,param_8,param_9,param_10 + 2);
      param_10 = param_10 + 1;
      fVar4 = (float)(uVar6 >> 0x20);
      param_4 = (param_6 + param_4) * 0.5;
      param_3 = (param_5 + param_3) * 0.5;
      fVar5 = (param_6 + (float)uVar6 + param_4 + param_4) * (float)uVar8;
      fVar7 = (param_5 + fVar4 + param_3 + param_3) * fVar9;
      fVar3 = (param_6 + (float)uVar6) * 0.5 - fVar5;
      fVar4 = (param_5 + fVar4) * 0.5 - fVar7;
      param_1 = uVar6 >> 0x20;
      param_2 = uVar6;
      uVar6 = CONCAT44(fVar7,fVar5);
    } while (param_10 < 0x10);
  }
  return;
}




void FUN_00f1bcc0(undefined8 *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  uVar14 = (ulong)param_2;
  while (0xc < (int)param_2) {
    puVar10 = (undefined8 *)((long)param_1 + (uVar14 >> 1) * 0x14);
    uVar7 = (long)(int)uVar14 - 1;
    fVar19 = *(float *)((long)puVar10 + 4);
    fVar18 = *(float *)((long)param_1 + uVar7 * 0x14 + 4);
    if (*(float *)((long)param_1 + 4) < fVar19 != fVar19 < fVar18) {
      uVar8 = uVar7;
      if (*(float *)((long)param_1 + 4) < fVar18 == fVar19 < fVar18) {
        uVar8 = 0;
      }
      puVar9 = (undefined8 *)((long)param_1 + uVar8 * 0x14);
      uVar1 = *(undefined4 *)(puVar9 + 2);
      uVar17 = puVar9[1];
      uVar15 = *puVar9;
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar10 + 2);
      uVar16 = *puVar10;
      puVar9[1] = puVar10[1];
      *puVar9 = uVar16;
      *(undefined4 *)(puVar10 + 2) = uVar1;
      puVar10[1] = uVar17;
      *puVar10 = uVar15;
    }
    uVar1 = *(undefined4 *)(param_1 + 2);
    uVar17 = param_1[1];
    uVar15 = *param_1;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar10 + 2);
    uVar16 = *puVar10;
    param_1[1] = puVar10[1];
    *param_1 = uVar16;
    *(undefined4 *)(puVar10 + 2) = uVar1;
    puVar10[1] = uVar17;
    *puVar10 = uVar15;
    lVar11 = 1;
    while( true ) {
      iVar5 = (int)lVar11;
      lVar11 = (long)iVar5;
      iVar12 = iVar5 + -1;
      lVar4 = (lVar11 * 4 + (long)iVar5) * 4;
      do {
        lVar13 = lVar4;
        lVar11 = lVar11 + 1;
        iVar12 = iVar12 + 1;
        lVar4 = lVar13 + 0x14;
      } while (*(float *)((long)param_1 + lVar13 + 4) < *(float *)((long)param_1 + 4));
      puVar10 = (undefined8 *)((long)param_1 + (long)(int)uVar7 * 0x14 + 0x14);
      do {
        puVar9 = puVar10;
        uVar8 = uVar7;
        iVar5 = (int)uVar8;
        uVar7 = (ulong)(iVar5 - 1);
        puVar10 = (undefined8 *)((long)puVar9 + -0x14);
      } while (*(float *)((long)param_1 + 4) < *(float *)(puVar9 + -2));
      if (iVar5 <= iVar12) break;
      uVar1 = *(undefined4 *)((long)param_1 + lVar13 + 0x10);
      uVar17 = *(undefined8 *)((long)param_1 + lVar13 + 8);
      uVar15 = *(undefined8 *)((long)param_1 + lVar13);
      *(undefined4 *)((long)param_1 + lVar13 + 0x10) = *(undefined4 *)((long)puVar9 + -4);
      uVar16 = *puVar10;
      *(undefined8 *)((long)param_1 + lVar13 + 8) = *(undefined8 *)((long)puVar9 + -0xc);
      *(undefined8 *)((long)param_1 + lVar13) = uVar16;
      *(undefined4 *)((long)puVar9 + -4) = uVar1;
      *(undefined8 *)((long)puVar9 + -0xc) = uVar17;
      *puVar10 = uVar15;
    }
    uVar2 = (int)uVar14 - iVar12;
    uVar14 = (ulong)uVar2;
    if (iVar5 < (int)uVar2) {
      FUN_00f1bcc0(param_1,uVar8 & 0xffffffff);
      param_1 = (undefined8 *)((long)param_1 + lVar13);
    }
    else {
      FUN_00f1bcc0((undefined8 *)((long)param_1 + lVar13),uVar14);
      uVar14 = uVar8 & 0xffffffff;
    }
    param_2 = (uint)uVar14;
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1beb4(float param_1,float param_2,float param_3,float param_4,long param_5,int param_6,
                 long param_7)

{
  float fVar1;
  float fVar2;
  
  if (((param_2 != param_4) && (fVar1 = *(float *)(param_7 + 0x1c), param_2 <= fVar1)) &&
     (fVar2 = *(float *)(param_7 + 0x18), fVar2 <= param_4)) {
    if (param_2 < fVar2) {
      param_1 = ((param_3 - param_1) * (fVar2 - param_2)) / (param_4 - param_2) + param_1;
      param_2 = fVar2;
    }
    if (fVar1 < param_4) {
      param_3 = ((fVar1 - param_4) * (param_3 - param_1)) / (param_4 - param_2) + param_3;
      param_4 = fVar1;
    }
    fVar1 = (float)param_6;
    if ((fVar1 < param_1) || (fVar1 < param_3)) {
      if (((float)(param_6 + 1) <= param_1) && ((float)(param_6 + 1) <= param_3)) {
        return;
      }
      fVar1 = *(float *)(param_5 + (long)param_6 * 4) +
              (((param_1 - fVar1) + (param_3 - fVar1)) * -0.5 + 1.0) *
              (param_4 - param_2) * *(float *)(param_7 + 0x14);
    }
    else {
      fVar1 = *(float *)(param_5 + (long)param_6 * 4) +
              (param_4 - param_2) * *(float *)(param_7 + 0x14);
    }
    *(float *)(param_5 + (long)param_6 * 4) = fVar1;
  }
  return;
}




void FUN_00f1bfa4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x28;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x28;
        puVar4[4] = puVar2[4];
        uVar5 = puVar2[2];
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 5;
        puVar2 = puVar2 + 5;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}

