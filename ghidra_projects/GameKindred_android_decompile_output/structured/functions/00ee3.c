// functions/00ee3 — 12 functions
#include "libGameKindred.h"




undefined8 FUN_00ee3024(long *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined2 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  
  lVar16 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar3 = *(int *)(lVar16 + 0x44);
    if (iVar3 == 0) {
      FUN_00ee33a0(param_1);
      iVar3 = *(int *)(lVar16 + 0x44);
    }
    *(int *)(lVar16 + 0x44) = iVar3 + -1;
  }
  if ((*(int *)(lVar16 + 0x20) != -1) && (0 < (int)param_1[0x3e])) {
    lVar9 = param_1[0x46];
    lVar17 = 0;
    do {
      lVar18 = (long)*(int *)((long)param_1 + lVar17 * 4 + 500);
      lVar15 = param_1[lVar18 + 0x39];
      puVar10 = *(undefined2 **)(param_2 + lVar17 * 8);
      lVar11 = lVar16 + lVar18 * 4;
      lVar12 = (long)*(int *)(lVar15 + 0x14);
      plVar13 = (long *)(lVar16 + lVar12 * 8 + 0x48);
      piVar19 = (int *)(lVar11 + 0x34);
      lVar14 = *plVar13 + (long)*piVar19;
      iVar3 = FUN_00ee34a0(param_1,lVar14);
      if (iVar3 == 0) {
        *piVar19 = 0;
        iVar3 = *(int *)(lVar11 + 0x24);
      }
      else {
        iVar3 = FUN_00ee34a0(param_1,lVar14 + 1);
        lVar11 = lVar14 + iVar3 + 2;
        uVar4 = FUN_00ee34a0(param_1,lVar11);
        if (uVar4 != 0) {
          lVar11 = *plVar13 + 0x14;
          while (iVar5 = FUN_00ee34a0(param_1,lVar11), iVar5 != 0) {
            uVar4 = uVar4 << 1;
            if (uVar4 == 0x8000) {
LAB_00ee3358:
              lVar17 = *param_1;
              *(undefined4 *)(lVar17 + 0x28) = 0x75;
              (**(code **)(lVar17 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar16 + 0x20) = 0xffffffff;
              return 1;
            }
            lVar11 = lVar11 + 1;
          }
        }
        iVar5 = 0;
        if ((int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar12 + 0x144) & 0x3f)) >> 1) <=
            (int)uVar4) {
          if ((int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar12 + 0x154) & 0x3f)) >> 1) <
              (int)uVar4) {
            iVar5 = iVar3 * 4 + 0xc;
          }
          else {
            iVar5 = iVar3 * 4 + 4;
          }
        }
        uVar7 = (int)uVar4 >> 1;
        *piVar19 = iVar5;
        if (uVar7 != 0) {
          do {
            iVar5 = FUN_00ee34a0(param_1,lVar11 + 0xe);
            uVar1 = 0;
            if (iVar5 != 0) {
              uVar1 = uVar7;
            }
            uVar7 = (int)uVar7 >> 1;
            uVar4 = uVar1 | uVar4;
          } while (uVar7 != 0);
        }
        lVar11 = lVar16 + lVar18 * 4;
        uVar7 = ~uVar4;
        if (iVar3 == 0) {
          uVar7 = uVar4 + 1;
        }
        iVar3 = *(int *)(lVar11 + 0x24) + uVar7;
        *(int *)(lVar11 + 0x24) = iVar3;
      }
      *puVar10 = (short)iVar3;
      if ((int)param_1[0x47] != 0) {
        lVar11 = (long)*(int *)(lVar15 + 0x18);
        iVar3 = 0;
        plVar13 = (long *)(lVar16 + lVar11 * 8 + 200);
        do {
          lVar14 = *plVar13;
          iVar5 = FUN_00ee34a0(param_1,lVar14 + iVar3 * 3);
          if (iVar5 != 0) break;
          lVar14 = lVar14 + iVar3 * 3 + 2;
          piVar19 = (int *)(lVar9 + (long)(iVar3 + 1) * 4);
          iVar5 = iVar3;
          while( true ) {
            iVar3 = iVar5 + 1;
            iVar6 = FUN_00ee34a0(param_1,lVar14 + -1);
            if (iVar6 != 0) break;
            lVar14 = lVar14 + 3;
            piVar19 = piVar19 + 1;
            iVar5 = iVar3;
            if ((int)param_1[0x47] <= iVar3) goto LAB_00ee3358;
          }
          iVar6 = FUN_00ee34a0(param_1,lVar16 + 0x148);
          uVar7 = FUN_00ee34a0(param_1,lVar14);
          uVar4 = 0;
          if (uVar7 != 0) {
            iVar8 = FUN_00ee34a0(param_1,lVar14);
            uVar4 = uVar7;
            if (iVar8 != 0) {
              uVar4 = uVar7 << 1;
              lVar14 = 0xbd;
              if ((int)(uint)*(byte *)((long)param_1 + lVar11 + 0x164) <= iVar5) {
                lVar14 = 0xd9;
              }
              lVar14 = *plVar13 + lVar14;
              while (iVar5 = FUN_00ee34a0(param_1,lVar14), iVar5 != 0) {
                uVar4 = uVar4 << 1;
                if (uVar4 == 0x8000) goto LAB_00ee3358;
                lVar14 = lVar14 + 1;
              }
            }
            uVar7 = (int)uVar4 >> 1;
            if (uVar7 != 0) {
              do {
                iVar5 = FUN_00ee34a0(param_1,lVar14 + 0xe);
                uVar1 = 0;
                if (iVar5 != 0) {
                  uVar1 = uVar7;
                }
                uVar7 = (int)uVar7 >> 1;
                uVar4 = uVar1 | uVar4;
              } while (uVar7 != 0);
            }
          }
          uVar2 = ~(ushort)uVar4;
          if (iVar6 == 0) {
            uVar2 = (ushort)uVar4 + 1;
          }
          puVar10[*piVar19] = uVar2;
        } while (iVar3 < (int)param_1[0x47]);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0x3e]);
  }
  return 1;
}




void FUN_00ee33a0(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1[0x4e];
  iVar2 = (**(code **)(param_1[0x4d] + 0x10))();
  if (iVar2 == 0) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  if (0 < (int)param_1[0x38]) {
    lVar6 = 0;
    do {
      lVar4 = param_1[lVar6 + 0x39];
      if (*(int *)((long)param_1 + 0x13c) == 0) {
LAB_00ee3420:
        lVar1 = lVar5 + lVar6 * 4;
        puVar3 = *(undefined8 **)(lVar5 + (long)*(int *)(lVar4 + 0x14) * 8 + 0x48);
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        *(undefined4 *)(lVar1 + 0x24) = 0;
        *(undefined4 *)(lVar1 + 0x34) = 0;
        if (*(int *)((long)param_1 + 0x13c) == 0) {
          iVar2 = (int)param_1[0x47];
        }
        else {
          iVar2 = *(int *)((long)param_1 + 0x21c);
        }
        if (iVar2 != 0) {
LAB_00ee3454:
          memset(*(void **)(lVar5 + (long)*(int *)(lVar4 + 0x18) * 8 + 200),0,0x100);
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x21c) != 0) goto LAB_00ee3454;
        if (*(int *)((long)param_1 + 0x224) == 0) goto LAB_00ee3420;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x38]);
  }
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined4 *)(lVar5 + 0x20) = 0xfffffff0;
  *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)((long)param_1 + 0x174);
  return;
}




uint FUN_00ee34a0(long param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x270);
  lVar9 = *(long *)(lVar11 + 0x18);
  if (lVar9 < 0x8000) {
    uVar6 = (ulong)*(uint *)(lVar11 + 0x20);
    do {
      iVar4 = (int)uVar6;
      uVar8 = iVar4 - 1;
      uVar6 = (ulong)uVar8;
      *(uint *)(lVar11 + 0x20) = uVar8;
      if (iVar4 < 1) {
        iVar4 = 0;
        if (*(int *)(param_1 + 0x23c) == 0) {
          iVar4 = FUN_00ee3600(param_1);
          if (iVar4 == 0xff) {
            do {
              iVar5 = FUN_00ee3600(param_1);
            } while (iVar5 == 0xff);
            if (iVar5 == 0) {
              iVar4 = 0xff;
            }
            else {
              iVar4 = 0;
              *(int *)(param_1 + 0x23c) = iVar5;
            }
          }
          uVar8 = *(uint *)(lVar11 + 0x20);
        }
        uVar2 = uVar8 + 9;
        uVar6 = (ulong)(uVar8 + 8);
        *(long *)(lVar11 + 0x10) = (long)iVar4 | *(long *)(lVar11 + 0x10) << 8;
        *(uint *)(lVar11 + 0x20) = uVar8 + 8;
        if (uVar2 == 0 || (int)uVar8 < -9) {
          uVar6 = (ulong)uVar2;
          *(uint *)(lVar11 + 0x20) = uVar2;
          if (uVar2 == 0) {
            uVar6 = 0;
            *(undefined8 *)(lVar11 + 0x18) = 0x8000;
          }
        }
      }
      lVar9 = *(long *)(lVar11 + 0x18) * 2;
      *(long *)(lVar11 + 0x18) = lVar9;
    } while (lVar9 < 0x8000);
  }
  else {
    uVar6 = (ulong)*(uint *)(lVar11 + 0x20);
  }
  bVar3 = *param_2;
  uVar8 = (uint)bVar3;
  lVar10 = *(long *)(&DAT_01bf3ab0 + (ulong)(bVar3 & 0x7f) * 8);
  lVar1 = lVar10 >> 0x10;
  lVar9 = lVar9 - lVar1;
  lVar7 = lVar9 << (uVar6 & 0x3f);
  *(long *)(lVar11 + 0x18) = lVar9;
  if (*(long *)(lVar11 + 0x10) < lVar7) {
    if (0x7fff < lVar9) goto LAB_00ee35ec;
    if (lVar9 < lVar1) goto LAB_00ee35e0;
  }
  else {
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) - lVar7;
    *(long *)(lVar11 + 0x18) = lVar1;
    if (lVar1 <= lVar9) {
LAB_00ee35e0:
      *param_2 = bVar3 & 0x80 ^ (byte)lVar10;
      uVar8 = bVar3 ^ 0x80;
      goto LAB_00ee35ec;
    }
  }
  *param_2 = bVar3 & 0x80 ^ (byte)((ulong)lVar10 >> 8);
LAB_00ee35ec:
  return uVar8 >> 7;
}




undefined1 FUN_00ee3600(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[5];
  if ((plVar4[1] == 0) && (iVar2 = (*(code *)plVar4[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar1 = (undefined1 *)*plVar4;
  *plVar4 = (long)(puVar1 + 1);
  plVar4[1] = plVar4[1] + -1;
  return *puVar1;
}




void FUN_00ee3664(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *__s;
  long lVar7;
  undefined4 *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  
  puVar5 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0xe0);
  *(undefined8 **)(param_1 + 0x250) = puVar5;
  *puVar5 = FUN_00ee3804;
  puVar5[2] = FUN_00ee380c;
  puVar5[0x1b] = 0;
  if (param_2 == 0) {
    __s = (void *)(**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,0x500);
    lVar11 = 1;
    lVar10 = 0;
    lVar7 = 0;
    do {
      puVar2 = (undefined8 *)((long)puVar5 + lVar7 + 0x38);
      puVar2[1] = (void *)((long)__s + lVar11 * 0x80);
      *puVar2 = (void *)((long)__s + lVar10 * 0x80);
      lVar7 = lVar7 + 0x10;
      lVar10 = lVar10 + 2;
      lVar11 = lVar11 + 2;
    } while (lVar7 != 0x50);
    if (*(int *)(param_1 + 0x238) == 0) {
      memset(__s,0,0x500);
    }
    puVar5[1] = FUN_00ee3d20;
    puVar5[3] = FUN_00ee3d28;
    puVar5[4] = 0;
  }
  else {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar7 = 0;
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x130) + 0x1c);
      do {
        pcVar9 = *(code **)(*(long *)(param_1 + 8) + 0x28);
        iVar3 = puVar8[-4] * 3;
        iVar1 = puVar8[-4];
        if (*(int *)(param_1 + 0x13c) != 0) {
          iVar1 = iVar3;
        }
        uVar4 = FUN_00ee124c(iVar3,*puVar8,(long)(int)puVar8[-5]);
        uVar6 = FUN_00ee124c(puVar8[1],(long)(int)puVar8[-4]);
        uVar6 = (*pcVar9)(param_1,1,1,uVar4,uVar6,iVar1);
        puVar5[lVar7 + 0x11] = uVar6;
        lVar7 = lVar7 + 1;
        puVar8 = puVar8 + 0x18;
      } while (lVar7 < *(int *)(param_1 + 0x38));
    }
    puVar5[1] = FUN_00ee394c;
    puVar5[3] = FUN_00ee3b50;
    puVar5[4] = puVar5 + 0x11;
  }
  return;
}




void FUN_00ee3804(long param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_00ee3fc8();
  return;
}




void FUN_00ee380c(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x250);
  if (*(long *)(lVar10 + 0x20) == 0) goto LAB_00ee3938;
  if (((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x13c) == 0)) ||
     (*(long *)(param_1 + 0xc0) == 0)) {
LAB_00ee392c:
    pcVar6 = FUN_00ee3b50;
  }
  else {
    lVar4 = *(long *)(lVar10 + 0xd8);
    if (lVar4 == 0) {
      lVar4 = (*(code *)**(undefined8 **)(param_1 + 8))
                        (param_1,1,(long)*(int *)(param_1 + 0x38) * 0x18);
      *(long *)(lVar10 + 0xd8) = lVar4;
    }
    if (*(int *)(param_1 + 0x38) < 1) goto LAB_00ee392c;
    lVar7 = *(long *)(param_1 + 0x130);
    lVar5 = 0;
    bVar3 = false;
    do {
      psVar8 = *(short **)(lVar7 + 0x50);
      if (((((psVar8 == (short *)0x0) || (*psVar8 == 0)) ||
           ((psVar8[1] == 0 || ((psVar8[8] == 0 || (psVar8[0x10] == 0)))))) || (psVar8[9] == 0)) ||
         ((psVar8[2] == 0 || (*(int *)(*(long *)(param_1 + 0xc0) + lVar5 * 0x100) < 0))))
      goto LAB_00ee392c;
      lVar2 = *(long *)(param_1 + 0xc0) + lVar5 * 0x100;
      lVar9 = 4;
      do {
        *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar2 + lVar9);
        piVar1 = (int *)(lVar2 + lVar9);
        lVar9 = lVar9 + 4;
        if (*piVar1 != 0) {
          bVar3 = true;
        }
      } while (lVar9 != 0x18);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x18;
      lVar7 = lVar7 + 0x60;
    } while (lVar5 < *(int *)(param_1 + 0x38));
    if (!bVar3) goto LAB_00ee392c;
    pcVar6 = FUN_00ee4010;
  }
  *(code **)(lVar10 + 0x18) = pcVar6;
LAB_00ee3938:
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}




void FUN_00ee394c(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long local_78 [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar15 = *(long *)(param_1 + 0x250);
  if (0 < *(int *)(param_1 + 0x1c0)) {
    lVar14 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x1c8 + lVar14 * 8);
      iVar7 = *(int *)(lVar8 + 0xc);
      lVar8 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar15 + (long)*(int *)(lVar8 + 4) * 8 + 0x88),
                         iVar7 * *(int *)(param_1 + 0xb0),iVar7,1);
      local_78[lVar14] = lVar8;
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_1 + 0x1c0));
  }
  iVar7 = *(int *)(lVar15 + 0x30);
  lVar14 = (long)*(int *)(lVar15 + 0x2c);
  if (*(int *)(lVar15 + 0x2c) < iVar7) {
    uVar16 = *(uint *)(lVar15 + 0x28);
    uVar9 = *(uint *)(param_1 + 0x1e8);
    do {
      if (uVar16 < uVar9) {
        do {
          iVar7 = *(int *)(param_1 + 0x1c0);
          if (0 < iVar7) {
            lVar8 = 0;
            iVar10 = 0;
            do {
              lVar11 = *(long *)(param_1 + lVar8 * 8 + 0x1c8);
              iVar2 = *(int *)(lVar11 + 0x3c);
              iVar1 = iVar10;
              if (0 < iVar2) {
                uVar9 = *(uint *)(lVar11 + 0x38);
                lVar12 = local_78[lVar8];
                lVar11 = 0;
                do {
                  iVar1 = iVar10;
                  if (0 < (int)uVar9) {
                    lVar5 = *(long *)(lVar12 + (lVar11 + lVar14) * 8) +
                            (ulong)(uVar9 * uVar16) * 0x80;
                    plVar13 = (long *)(lVar15 + 0x38 + (long)iVar10 * 8);
                    uVar3 = uVar9;
                    do {
                      uVar3 = uVar3 - 1;
                      *plVar13 = lVar5;
                      lVar5 = lVar5 + 0x80;
                      plVar13 = plVar13 + 1;
                    } while (uVar3 != 0);
                    iVar1 = uVar9 + iVar10;
                  }
                  lVar11 = lVar11 + 1;
                  iVar10 = iVar10 + (uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU));
                } while (lVar11 < iVar2);
              }
              iVar10 = iVar1;
              lVar8 = lVar8 + 1;
            } while (lVar8 < iVar7);
          }
          uVar6 = (**(code **)(*(long *)(param_1 + 0x270) + 8))(param_1,lVar15 + 0x38);
          if ((int)uVar6 == 0) {
            *(uint *)(lVar15 + 0x28) = uVar16;
            *(int *)(lVar15 + 0x2c) = (int)lVar14;
            goto LAB_00ee3b20;
          }
          uVar9 = *(uint *)(param_1 + 0x1e8);
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar9);
        iVar7 = *(int *)(lVar15 + 0x30);
      }
      lVar14 = lVar14 + 1;
      uVar16 = 0;
      *(undefined4 *)(lVar15 + 0x28) = 0;
    } while (lVar14 < iVar7);
  }
  uVar16 = *(int *)(param_1 + 0xb0) + 1;
  *(uint *)(param_1 + 0xb0) = uVar16;
  if (uVar16 < *(uint *)(param_1 + 0x1b0)) {
    FUN_00ee3fc8(param_1);
    uVar6 = 3;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(param_1);
    uVar6 = 4;
  }
LAB_00ee3b20:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}




ulong FUN_00ee3b50(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  uint uVar12;
  long local_68;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  lVar6 = *(long *)(param_1 + 0x250);
  while ((*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xb4) ||
         ((*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4) &&
          (*(uint *)(param_1 + 0xb0) <= *(uint *)(param_1 + 0xb8)))))) {
    uVar2 = (*(code *)**(undefined8 **)(param_1 + 0x260))(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar7 = *(long *)(param_1 + 0x130);
    local_68 = 0;
    do {
      if (*(int *)(lVar7 + 0x34) != 0) {
        lVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                          (param_1,*(undefined8 *)(lVar6 + local_68 * 8 + 0x88),
                           *(int *)(lVar7 + 0xc) * *(int *)(param_1 + 0xb8),*(int *)(lVar7 + 0xc),0)
        ;
        if (*(uint *)(param_1 + 0xb8) < iVar1 - 1U) {
          uVar5 = *(uint *)(lVar7 + 0xc);
        }
        else {
          uVar5 = *(uint *)(lVar7 + 0xc);
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = *(uint *)(lVar7 + 0x20) / uVar5;
          }
          uVar4 = *(uint *)(lVar7 + 0x20) - uVar4 * uVar5;
          if (uVar4 != 0) {
            uVar5 = uVar4;
          }
        }
        if (0 < (int)uVar5) {
          uVar2 = 0;
          lVar8 = *(long *)(param_2 + local_68 * 8);
          pcVar11 = *(code **)(*(long *)(param_1 + 0x278) + local_68 * 8 + 8);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          do {
            if (uVar4 != 0) {
              lVar10 = *(long *)(lVar3 + uVar2 * 8);
              iVar9 = 0;
              uVar12 = 0;
              do {
                (*pcVar11)(param_1,lVar7,lVar10,lVar8,iVar9);
                uVar4 = *(uint *)(lVar7 + 0x1c);
                uVar12 = uVar12 + 1;
                lVar10 = lVar10 + 0x80;
                iVar9 = *(int *)(lVar7 + 0x24) + iVar9;
              } while (uVar12 < uVar4);
            }
            uVar2 = uVar2 + 1;
            lVar8 = lVar8 + (long)*(int *)(lVar7 + 0x28) * 8;
          } while (uVar2 != uVar5);
        }
      }
      lVar7 = lVar7 + 0x60;
      local_68 = local_68 + 1;
    } while (local_68 < *(int *)(param_1 + 0x38));
  }
  uVar5 = *(int *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb8) = uVar5;
  uVar4 = 3;
  if (*(uint *)(param_1 + 0x1b0) <= uVar5) {
    uVar4 = 4;
  }
  return (ulong)uVar4;
}




undefined8 FUN_00ee3d20(void)

{
  return 0;
}




undefined8 FUN_00ee3d28(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  code *pcVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  int local_74;
  
  lVar9 = *(long *)(param_1 + 0x250);
  uVar8 = *(uint *)(param_1 + 0x1b0);
  local_74 = *(int *)(lVar9 + 0x2c);
  iVar6 = *(int *)(lVar9 + 0x30);
  if (local_74 < iVar6) {
    uVar12 = *(uint *)(lVar9 + 0x28);
    puVar1 = (undefined8 *)(lVar9 + 0x38);
    uVar4 = *(int *)(param_1 + 0x1e8) - 1;
    do {
      if (uVar12 <= uVar4) {
        do {
          if (*(int *)(param_1 + 0x238) != 0) {
            memset((void *)*puVar1,0,(long)*(int *)(param_1 + 0x1f0) << 7);
          }
          uVar5 = (**(code **)(*(long *)(param_1 + 0x270) + 8))(param_1,puVar1);
          if ((int)uVar5 == 0) {
            *(uint *)(lVar9 + 0x28) = uVar12;
            *(int *)(lVar9 + 0x2c) = local_74;
            return uVar5;
          }
          iVar6 = *(int *)(param_1 + 0x1c0);
          if (0 < iVar6) {
            lVar11 = 0;
            iVar16 = 0;
            do {
              lVar14 = *(long *)(param_1 + lVar11 * 8 + 0x1c8);
              if (*(int *)(lVar14 + 0x34) == 0) {
                iVar16 = *(int *)(lVar14 + 0x40) + iVar16;
              }
              else {
                iVar15 = *(int *)(lVar14 + 0x3c);
                lVar10 = 0x38;
                if (uVar4 <= uVar12) {
                  lVar10 = 0x48;
                }
                if (0 < iVar15) {
                  iVar2 = *(int *)(lVar14 + 0x44);
                  iVar3 = *(int *)(lVar14 + lVar10);
                  iVar7 = *(int *)(lVar14 + 0x28);
                  pcVar13 = *(code **)(*(long *)(param_1 + 0x278) + (long)*(int *)(lVar14 + 4) * 8 +
                                      8);
                  iVar6 = 0;
                  lVar10 = *(long *)(param_2 + (long)*(int *)(lVar14 + 4) * 8) +
                           (long)(iVar7 * local_74) * 8;
                  do {
                    if (*(uint *)(param_1 + 0xb0) < uVar8 - 1) {
                      if (0 < iVar3) {
LAB_00ee3e9c:
                        lVar17 = 0;
                        iVar15 = iVar2 * uVar12;
                        do {
                          (*pcVar13)(param_1,lVar14,puVar1[iVar16 + lVar17],lVar10,iVar15);
                          lVar17 = lVar17 + 1;
                          iVar15 = *(int *)(lVar14 + 0x24) + iVar15;
                        } while (lVar17 < iVar3);
                        iVar7 = *(int *)(lVar14 + 0x28);
                        iVar15 = *(int *)(lVar14 + 0x3c);
                      }
                    }
                    else if (iVar6 + local_74 < *(int *)(lVar14 + 0x4c) && 0 < iVar3)
                    goto LAB_00ee3e9c;
                    iVar6 = iVar6 + 1;
                    lVar10 = lVar10 + (long)iVar7 * 8;
                    iVar16 = *(int *)(lVar14 + 0x38) + iVar16;
                  } while (iVar6 < iVar15);
                  iVar6 = *(int *)(param_1 + 0x1c0);
                }
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < iVar6);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 <= uVar4);
        iVar6 = *(int *)(lVar9 + 0x30);
      }
      uVar12 = 0;
      *(undefined4 *)(lVar9 + 0x28) = 0;
      local_74 = local_74 + 1;
    } while (local_74 < iVar6);
    uVar8 = *(uint *)(param_1 + 0x1b0);
  }
  uVar12 = *(int *)(param_1 + 0xb0) + 1;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb0) = uVar12;
  if (uVar12 < uVar8) {
    FUN_00ee3fc8(param_1);
    uVar5 = 3;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(param_1);
    uVar5 = 4;
  }
  return uVar5;
}




void FUN_00ee3fc8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x250);
  if (*(int *)(param_1 + 0x1c0) < 2) {
    lVar3 = 0xc;
    if (*(int *)(param_1 + 0x1b0) - 1U <= *(uint *)(param_1 + 0xb0)) {
      lVar3 = 0x4c;
    }
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x1c8) + lVar3);
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}

