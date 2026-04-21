// functions/00f24 — 8 functions
#include "libGameKindred.h"




undefined8
FUN_00f24134(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
    *(undefined4 *)(lVar1 + 0xac) = param_5;
    *(undefined4 *)(lVar1 + 0xb0) = param_3;
    *(undefined4 *)(lVar1 + 0xbc) = param_2;
    *(undefined4 *)(lVar1 + 0xc0) = param_4;
    return 0;
  }
  return 0xfffffffe;
}




long FUN_00f24158(long param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  lVar3 = param_2 + (param_2 + 7 >> 3) + (param_2 + 0x3f >> 6);
  if ((param_1 != 0) && (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x2c);
    if (iVar1 == 0) {
      lVar5 = 0;
    }
    else if (iVar1 == 2) {
      lVar6 = *(long *)(lVar4 + 0x30);
      if (lVar6 == 0) {
        lVar5 = 0x12;
      }
      else {
        if (*(long *)(lVar6 + 0x18) == 0) {
          lVar5 = 0x12;
        }
        else {
          lVar5 = (ulong)(*(int *)(lVar6 + 0x20) + 2) + 0x12;
        }
        pcVar7 = *(char **)(lVar6 + 0x28);
        if (*(char **)(lVar6 + 0x28) != (char *)0x0) {
          do {
            cVar2 = *pcVar7;
            lVar5 = lVar5 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
        }
        pcVar7 = *(char **)(lVar6 + 0x38);
        if (*(char **)(lVar6 + 0x38) != (char *)0x0) {
          do {
            cVar2 = *pcVar7;
            lVar5 = lVar5 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
        }
        if (*(int *)(lVar6 + 0x44) != 0) {
          lVar5 = lVar5 + 2;
        }
      }
    }
    else if (iVar1 == 1) {
      lVar5 = 6;
      if (*(int *)(lVar4 + 0x9c) != 0) {
        lVar5 = 10;
      }
    }
    else {
      lVar5 = 6;
    }
    if ((*(int *)(lVar4 + 0x48) == 0xf) && (*(int *)(lVar4 + 0x78) == 0xf)) {
      lVar3 = param_2 + 7 + (param_2 >> 0xc) + (param_2 >> 0xe) + (param_2 >> 0x19);
    }
    else {
      lVar3 = lVar3 + 5;
    }
    return lVar3 + lVar5;
  }
  return lVar3 + 0xb;
}




void FUN_00f24254(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  thunk_FUN_00f25304(lVar3);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(uint *)(lVar3 + 0x28) <= *(uint *)(param_1 + 0x20)) {
    uVar1 = *(uint *)(lVar3 + 0x28);
  }
  if (uVar1 != 0) {
    memcpy(*(void **)(param_1 + 0x18),*(void **)(lVar3 + 0x20),(ulong)uVar1);
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + (ulong)uVar1;
    *(ulong *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + (ulong)uVar1;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + (ulong)uVar1;
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - uVar1;
    iVar2 = *(int *)(lVar3 + 0x28) - uVar1;
    *(int *)(lVar3 + 0x28) = iVar2;
    if (iVar2 == 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
    }
  }
  return;
}




undefined8 FUN_00f242f0(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 *__dest;
  long lVar2;
  long lVar3;
  long lVar4;
  void *__src;
  
  uVar1 = 0xfffffffe;
  if ((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) {
    __src = *(void **)((long)param_2 + 0x38);
    if (__src == (void *)0x0) {
      uVar1 = 0xfffffffe;
    }
    else {
      memcpy(param_1,param_2,0x70);
      __dest = (undefined8 *)
               (**(code **)((long)param_1 + 0x40))(*(undefined8 *)((long)param_1 + 0x50),1,0x1730);
      if (__dest != (undefined8 *)0x0) {
        *(undefined8 **)((long)param_1 + 0x38) = __dest;
        memcpy(__dest,__src,0x1730);
        *__dest = param_1;
        uVar1 = (**(code **)((long)param_1 + 0x40))
                          (*(undefined8 *)((long)param_1 + 0x50),
                           *(undefined4 *)((long)__dest + 0x44),2);
        __dest[10] = uVar1;
        uVar1 = (**(code **)((long)param_1 + 0x40))
                          (*(undefined8 *)((long)param_1 + 0x50),
                           *(undefined4 *)((long)__dest + 0x44),2);
        __dest[0xc] = uVar1;
        uVar1 = (**(code **)((long)param_1 + 0x40))
                          (*(undefined8 *)((long)param_1 + 0x50),
                           *(undefined4 *)((long)__dest + 0x74),2);
        __dest[0xd] = uVar1;
        lVar2 = (**(code **)((long)param_1 + 0x40))
                          (*(undefined8 *)((long)param_1 + 0x50),*(undefined4 *)(__dest + 0x2df),4);
        __dest[2] = lVar2;
        if (((((void *)__dest[10] != (void *)0x0) && (__dest[0xc] != 0)) && (lVar2 != 0)) &&
           (__dest[0xd] != 0)) {
          memcpy((void *)__dest[10],*(void **)((long)__src + 0x50),
                 (ulong)(uint)(*(int *)((long)__dest + 0x44) << 1));
          memcpy((void *)__dest[0xc],*(void **)((long)__src + 0x60),
                 (ulong)*(uint *)((long)__dest + 0x44) << 1);
          memcpy((void *)__dest[0xd],*(void **)((long)__src + 0x68),
                 (ulong)*(uint *)((long)__dest + 0x74) << 1);
          memcpy((void *)__dest[2],*(void **)((long)__src + 0x10),(ulong)*(uint *)(__dest + 3));
          lVar3 = *(long *)((long)__src + 0x20);
          lVar4 = *(long *)((long)__src + 0x10);
          __dest[0x169] = (long)__dest + 0xc4;
          __dest[0x16c] = __dest + 0x137;
          __dest[4] = __dest[2] + (lVar3 - lVar4);
          __dest[0x2e0] = lVar2 + (ulong)(*(uint *)(__dest + 0x2df) & 0xfffffffe);
          __dest[0x2de] = __dest[2] + (ulong)*(uint *)(__dest + 0x2df) * 3;
          __dest[0x16f] = (long)__dest + 0xaac;
          return 0;
        }
        FUN_00f22898(param_1);
      }
      uVar1 = 0xfffffffc;
    }
  }
  return uVar1;
}




undefined4 FUN_00f2449c(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = param_1[3] - 5;
  if (0xfffe < uVar3) {
    uVar3 = 0xffff;
  }
  do {
    uVar5 = *(uint *)((long)param_1 + 0xa4);
    if (uVar5 < 2) {
      FUN_00f22be0(param_1);
      uVar5 = *(uint *)((long)param_1 + 0xa4);
      if (uVar5 == 0 && param_2 == 0) {
        return 0;
      }
      if (uVar5 == 0) {
        *(undefined4 *)((long)param_1 + 0x171c) = 0;
        if (param_2 == 4) {
          uVar3 = param_1[0x11];
          if ((long)uVar3 < 0) {
            lVar2 = 0;
          }
          else {
            lVar2 = param_1[10] + (uVar3 & 0xffffffff);
          }
          FUN_00f2545c(param_1,lVar2,*(uint *)((long)param_1 + 0x9c) - uVar3,1);
          param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
          FUN_00f24254(*param_1);
          if (*(int *)(*param_1 + 0x20) != 0) {
            return 3;
          }
          return 2;
        }
        uVar3 = param_1[0x11];
        if ((long)uVar3 < (long)(ulong)*(uint *)((long)param_1 + 0x9c)) {
          if ((long)uVar3 < 0) {
            lVar2 = 0;
          }
          else {
            lVar2 = param_1[10] + (uVar3 & 0xffffffff);
          }
          FUN_00f2545c(param_1,lVar2,*(uint *)((long)param_1 + 0x9c) - uVar3,0);
          param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
          FUN_00f24254(*param_1);
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
    uVar4 = param_1[0x11];
    *(undefined4 *)((long)param_1 + 0xa4) = 0;
    uVar5 = *(int *)((long)param_1 + 0x9c) + uVar5;
    uVar1 = uVar4 + uVar3;
    *(uint *)((long)param_1 + 0x9c) = uVar5;
    if ((uVar5 == 0) || (uVar1 <= uVar5)) {
      *(uint *)((long)param_1 + 0xa4) = uVar5 - (int)uVar1;
      *(int *)((long)param_1 + 0x9c) = (int)uVar1;
      if ((long)uVar4 < 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_1[10] + (uVar4 & 0xffffffff);
      }
      FUN_00f2545c(param_1,lVar2,(uVar1 & 0xffffffff) - uVar4,0);
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      FUN_00f24254(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
      uVar5 = *(uint *)((long)param_1 + 0x9c);
      uVar4 = param_1[0x11];
    }
    if (*(int *)((long)param_1 + 0x44) - 0x106U <= uVar5 - (int)uVar4) {
      if ((long)uVar4 < 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_1[10] + (uVar4 & 0xffffffff);
      }
      FUN_00f2545c(param_1,lVar2,uVar5 - uVar4,0);
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      FUN_00f24254(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  } while( true );
}




undefined4 FUN_00f2468c(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  
  do {
    if (*(uint *)((long)param_1 + 0xa4) < 0x106) {
      FUN_00f22be0(param_1);
      uVar8 = *(uint *)((long)param_1 + 0xa4);
      if ((param_2 == 0) && (uVar8 < 0x106)) {
        return 0;
      }
      if (uVar8 == 0) {
        uVar8 = *(uint *)((long)param_1 + 0x9c);
        uVar12 = (ulong)uVar8;
        if (1 < uVar8) {
          uVar8 = 2;
        }
        *(uint *)((long)param_1 + 0x171c) = uVar8;
        if (param_2 == 4) {
          uVar10 = param_1[0x11];
          if ((long)uVar10 < 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = param_1[10] + (uVar10 & 0xffffffff);
          }
          FUN_00f2545c(param_1,lVar9,uVar12 - uVar10,1);
          param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
          FUN_00f24254(*param_1);
          if (*(int *)(*param_1 + 0x20) != 0) {
            return 3;
          }
          return 2;
        }
        if (*(int *)((long)param_1 + 0x16fc) != 0) {
          uVar10 = param_1[0x11];
          if ((long)uVar10 < 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = param_1[10] + (uVar10 & 0xffffffff);
          }
          FUN_00f2545c(param_1,lVar9,uVar12 - uVar10,0);
          param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
          FUN_00f24254(*param_1);
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar8) goto LAB_00f246e4;
LAB_00f2473c:
      uVar8 = *(uint *)(param_1 + 0x12);
    }
    else {
LAB_00f246e4:
      uVar11 = *(uint *)((long)param_1 + 0x9c);
      lVar9 = param_1[0xd];
      uVar8 = ((int)param_1[0xe] << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) ^
              (uint)*(byte *)(param_1[10] + (ulong)(uVar11 + 2))) & *(uint *)((long)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar8;
      uVar6 = *(ushort *)(lVar9 + (ulong)uVar8 * 2);
      *(ushort *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar11) * 2) = uVar6;
      *(short *)(lVar9 + (ulong)uVar8 * 2) = (short)uVar11;
      if ((uVar6 == 0) || (*(int *)((long)param_1 + 0x44) - 0x106U < uVar11 - uVar6))
      goto LAB_00f2473c;
      uVar8 = FUN_00f24ef4(param_1);
      *(uint *)(param_1 + 0x12) = uVar8;
    }
    if (uVar8 < 3) {
      uVar8 = *(uint *)((long)param_1 + 0x16fc);
      bVar5 = *(byte *)(param_1[10] + (ulong)*(uint *)((long)param_1 + 0x9c));
      *(undefined2 *)(param_1[0x2e0] + (ulong)uVar8 * 2) = 0;
      *(uint *)((long)param_1 + 0x16fc) = uVar8 + 1;
      *(byte *)(param_1[0x2de] + (ulong)uVar8) = bVar5;
      *(short *)((long)param_1 + (ulong)bVar5 * 4 + 0xc4) =
           *(short *)((long)param_1 + (ulong)bVar5 * 4 + 0xc4) + 1;
      bVar7 = *(int *)((long)param_1 + 0x16fc) == (int)param_1[0x2df] + -1;
      uVar8 = *(int *)((long)param_1 + 0x9c) + 1;
      *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
LAB_00f248d0:
      *(uint *)((long)param_1 + 0x9c) = uVar8;
    }
    else {
      uVar3 = *(uint *)((long)param_1 + 0x16fc);
      iVar14 = *(int *)((long)param_1 + 0x9c) - (int)param_1[0x14];
      uVar12 = (ulong)(byte)(&DAT_01bf4a98)[(ulong)(uVar8 - 3) & 0xff] << 2 | 0x400;
      *(short *)(param_1[0x2e0] + (ulong)uVar3 * 2) = (short)iVar14;
      *(uint *)((long)param_1 + 0x16fc) = uVar3 + 1;
      uVar11 = iVar14 - 1;
      if (0xff < (uVar11 & 0xffff)) {
        uVar11 = (uVar11 >> 7 & 0x1ff) + 0x100;
      }
      *(char *)(param_1[0x2de] + (ulong)uVar3) = (char)(uVar8 - 3);
      bVar5 = (&DAT_01bf4898)[(ulong)uVar11 & 0xffff];
      *(short *)((long)param_1 + uVar12 + 200) = *(short *)((long)param_1 + uVar12 + 200) + 1;
      *(short *)((long)param_1 + (ulong)bVar5 * 4 + 0x9b8) =
           *(short *)((long)param_1 + (ulong)bVar5 * 4 + 0x9b8) + 1;
      uVar8 = *(uint *)(param_1 + 0x12);
      uVar11 = *(int *)((long)param_1 + 0xa4) - uVar8;
      bVar7 = *(int *)((long)param_1 + 0x16fc) == (int)param_1[0x2df] + -1;
      *(uint *)((long)param_1 + 0xa4) = uVar11;
      if ((2 < uVar11) && (uVar8 <= *(uint *)(param_1 + 0x16))) {
        uVar11 = *(uint *)(param_1 + 0xe);
        uVar3 = *(uint *)((long)param_1 + 0x7c);
        uVar1 = *(uint *)(param_1 + 0x10);
        lVar13 = param_1[10];
        lVar9 = param_1[0xc];
        lVar2 = param_1[0xd];
        uVar4 = *(uint *)((long)param_1 + 0x4c);
        *(uint *)(param_1 + 0x12) = uVar8 - 1;
        iVar14 = uVar8 - 2;
        uVar8 = *(int *)((long)param_1 + 0x9c) + 1;
        do {
          *(uint *)((long)param_1 + 0x9c) = uVar8;
          uVar11 = (uVar11 << (ulong)(uVar1 & 0x1f) ^ (uint)*(byte *)(lVar13 + (ulong)(uVar8 + 2)))
                   & uVar3;
          *(uint *)(param_1 + 0xe) = uVar11;
          *(undefined2 *)(lVar9 + (ulong)(uVar4 & uVar8) * 2) =
               *(undefined2 *)(lVar2 + (ulong)uVar11 * 2);
          *(short *)(lVar2 + (ulong)uVar11 * 2) = (short)uVar8;
          *(int *)(param_1 + 0x12) = iVar14;
          iVar14 = iVar14 + -1;
          uVar8 = uVar8 + 1;
        } while (iVar14 != -1);
        goto LAB_00f248d0;
      }
      *(undefined4 *)(param_1 + 0x12) = 0;
      uVar8 = *(int *)((long)param_1 + 0x9c) + uVar8;
      *(uint *)((long)param_1 + 0x9c) = uVar8;
      uVar11 = (uint)*(byte *)(param_1[10] + (ulong)uVar8);
      *(uint *)(param_1 + 0xe) = uVar11;
      *(uint *)(param_1 + 0xe) =
           (uVar11 << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) ^
           (uint)*(byte *)(param_1[10] + (ulong)(uVar8 + 1))) & *(uint *)((long)param_1 + 0x7c);
    }
    if (bVar7) {
      uVar12 = param_1[0x11];
      if ((long)uVar12 < 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = param_1[10] + (uVar12 & 0xffffffff);
      }
      FUN_00f2545c(param_1,lVar9,uVar8 - uVar12,0);
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      FUN_00f24254(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  } while( true );
}




undefined4 FUN_00f24a34(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  
LAB_00f24a68:
  do {
    if (*(uint *)((long)param_1 + 0xa4) < 0x106) {
      FUN_00f22be0(param_1);
      uVar11 = *(uint *)((long)param_1 + 0xa4);
      if ((param_2 == 0) && (uVar11 < 0x106)) {
        return 0;
      }
      if (uVar11 == 0) {
        if ((int)param_1[0x13] != 0) {
          uVar11 = *(uint *)((long)param_1 + 0x16fc);
          bVar6 = *(byte *)(param_1[10] + (ulong)(*(int *)((long)param_1 + 0x9c) - 1));
          *(undefined2 *)(param_1[0x2e0] + (ulong)uVar11 * 2) = 0;
          *(uint *)((long)param_1 + 0x16fc) = uVar11 + 1;
          *(byte *)(param_1[0x2de] + (ulong)uVar11) = bVar6;
          *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0xc4) =
               *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0xc4) + 1;
          *(undefined4 *)(param_1 + 0x13) = 0;
        }
        uVar11 = *(uint *)((long)param_1 + 0x9c);
        uVar13 = (ulong)uVar11;
        if (1 < uVar11) {
          uVar11 = 2;
        }
        *(uint *)((long)param_1 + 0x171c) = uVar11;
        if (param_2 != 4) {
          if (*(int *)((long)param_1 + 0x16fc) != 0) {
            uVar12 = param_1[0x11];
            if ((long)uVar12 < 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = param_1[10] + (uVar12 & 0xffffffff);
            }
            FUN_00f2545c(param_1,lVar10,uVar13 - uVar12,0);
            param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
            FUN_00f24254(*param_1);
            if (*(int *)(*param_1 + 0x20) == 0) {
              return 0;
            }
          }
          return 1;
        }
        uVar12 = param_1[0x11];
        if ((long)uVar12 < 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = param_1[10] + (uVar12 & 0xffffffff);
        }
        FUN_00f2545c(param_1,lVar10,uVar13 - uVar12,1);
        param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
        FUN_00f24254(*param_1);
        if (*(int *)(*param_1 + 0x20) != 0) {
          return 3;
        }
        return 2;
      }
      if (2 < uVar11) goto LAB_00f24a98;
      uVar11 = *(uint *)(param_1 + 0x12);
      uVar9 = 2;
      *(uint *)(param_1 + 0x15) = uVar11;
      *(undefined4 *)(param_1 + 0x12) = 2;
      *(int *)((long)param_1 + 0x94) = (int)param_1[0x14];
    }
    else {
LAB_00f24a98:
      uVar2 = *(uint *)((long)param_1 + 0x9c);
      uVar9 = 2;
      lVar10 = param_1[0xd];
      uVar11 = ((int)param_1[0xe] << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) ^
               (uint)*(byte *)(param_1[10] + (ulong)(uVar2 + 2))) & *(uint *)((long)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar11;
      uVar7 = *(ushort *)(lVar10 + (ulong)uVar11 * 2);
      *(ushort *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar2) * 2) = uVar7;
      *(short *)(lVar10 + (ulong)uVar11 * 2) = (short)uVar2;
      uVar11 = *(uint *)(param_1 + 0x12);
      *(uint *)(param_1 + 0x15) = uVar11;
      *(undefined4 *)(param_1 + 0x12) = 2;
      *(int *)((long)param_1 + 0x94) = (int)param_1[0x14];
      if (uVar7 != 0) {
        if ((uVar11 < *(uint *)(param_1 + 0x16)) &&
           (*(int *)((long)param_1 + 0x9c) - (uint)uVar7 <= *(int *)((long)param_1 + 0x44) - 0x106U)
           ) {
          uVar9 = FUN_00f24ef4(param_1);
          *(uint *)(param_1 + 0x12) = uVar9;
          if (uVar9 < 6) {
            if ((int)param_1[0x17] == 1) {
LAB_00f24d38:
              uVar9 = 2;
              *(undefined4 *)(param_1 + 0x12) = 2;
            }
            else if (uVar9 == 3) {
              if (0x1000 < (uint)(*(int *)((long)param_1 + 0x9c) - (int)param_1[0x14]))
              goto LAB_00f24d38;
              uVar9 = 3;
            }
          }
        }
        else {
          uVar9 = 2;
        }
        uVar11 = *(uint *)(param_1 + 0x15);
      }
    }
    if ((uVar11 < 3) || (uVar11 < uVar9)) {
      if ((int)param_1[0x13] == 0) {
        *(undefined4 *)(param_1 + 0x13) = 1;
        *(int *)((long)param_1 + 0x9c) = *(int *)((long)param_1 + 0x9c) + 1;
        *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
        goto LAB_00f24a68;
      }
      uVar11 = *(uint *)((long)param_1 + 0x16fc);
      bVar6 = *(byte *)(param_1[10] + (ulong)(*(int *)((long)param_1 + 0x9c) - 1));
      *(undefined2 *)(param_1[0x2e0] + (ulong)uVar11 * 2) = 0;
      *(uint *)((long)param_1 + 0x16fc) = uVar11 + 1;
      *(byte *)(param_1[0x2de] + (ulong)uVar11) = bVar6;
      *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0xc4) =
           *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0xc4) + 1;
      if (*(int *)((long)param_1 + 0x16fc) == (int)param_1[0x2df] + -1) {
        uVar13 = param_1[0x11];
        if ((long)uVar13 < 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = param_1[10] + (uVar13 & 0xffffffff);
        }
        FUN_00f2545c(param_1,lVar10,*(uint *)((long)param_1 + 0x9c) - uVar13,0);
        param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
        FUN_00f24254(*param_1);
      }
      *(int *)((long)param_1 + 0x9c) = *(int *)((long)param_1 + 0x9c) + 1;
      *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
      iVar3 = *(int *)(*param_1 + 0x20);
    }
    else {
      iVar3 = *(int *)((long)param_1 + 0x9c);
      uVar9 = *(uint *)((long)param_1 + 0x16fc);
      uVar13 = (ulong)(byte)(&DAT_01bf4a98)[(ulong)(uVar11 - 3) & 0xff] << 2 | 0x400;
      iVar8 = (iVar3 + -1) - *(int *)((long)param_1 + 0x94);
      iVar4 = *(int *)((long)param_1 + 0xa4);
      *(short *)(param_1[0x2e0] + (ulong)uVar9 * 2) = (short)iVar8;
      uVar2 = iVar8 - 1;
      *(uint *)((long)param_1 + 0x16fc) = uVar9 + 1;
      if (0xff < (uVar2 & 0xffff)) {
        uVar2 = (uVar2 >> 7 & 0x1ff) + 0x100;
      }
      *(char *)(param_1[0x2de] + (ulong)uVar9) = (char)(uVar11 - 3);
      bVar6 = (&DAT_01bf4898)[(ulong)uVar2 & 0xffff];
      *(short *)((long)param_1 + uVar13 + 200) = *(short *)((long)param_1 + uVar13 + 200) + 1;
      *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0x9b8) =
           *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0x9b8) + 1;
      lVar10 = param_1[0x2df];
      iVar8 = (int)param_1[0x15];
      iVar5 = *(int *)((long)param_1 + 0x16fc);
      iVar14 = iVar8 + -3;
      *(int *)((long)param_1 + 0xa4) = (1 - iVar8) + *(int *)((long)param_1 + 0xa4);
      *(int *)(param_1 + 0x15) = iVar8 + -2;
      uVar11 = *(int *)((long)param_1 + 0x9c) + 1;
      do {
        *(uint *)((long)param_1 + 0x9c) = uVar11;
        if (uVar11 <= (iVar3 + iVar4) - 3U) {
          lVar1 = param_1[0xd];
          uVar2 = ((int)param_1[0xe] << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) ^
                  (uint)*(byte *)(param_1[10] + (ulong)(uVar11 + 2))) &
                  *(uint *)((long)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar2;
          *(undefined2 *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar11) * 2) =
               *(undefined2 *)(lVar1 + (ulong)uVar2 * 2);
          *(short *)(lVar1 + (ulong)uVar2 * 2) = (short)uVar11;
        }
        *(int *)(param_1 + 0x15) = iVar14;
        iVar14 = iVar14 + -1;
        uVar11 = uVar11 + 1;
      } while (iVar14 != -1);
      *(undefined4 *)(param_1 + 0x12) = 2;
      *(undefined4 *)(param_1 + 0x13) = 0;
      *(uint *)((long)param_1 + 0x9c) = uVar11;
      if (iVar5 != (int)lVar10 + -1) goto LAB_00f24a68;
      uVar13 = param_1[0x11];
      if ((long)uVar13 < 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = param_1[10] + (uVar13 & 0xffffffff);
      }
      FUN_00f2545c(param_1,lVar10,uVar11 - uVar13,0);
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      FUN_00f24254(*param_1);
      iVar3 = *(int *)(*param_1 + 0x20);
    }
    if (iVar3 == 0) {
      return 0;
    }
  } while( true );
}




uint FUN_00f24ef4(long param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  
  lVar18 = *(long *)(param_1 + 0x50);
  uVar7 = *(uint *)(param_1 + 0x9c);
  uVar20 = (ulong)(int)*(uint *)(param_1 + 0xa8);
  uVar8 = *(uint *)(param_1 + 0xa4);
  pcVar3 = (char *)(lVar18 + (ulong)uVar7);
  uVar10 = *(int *)(param_1 + 0x44) - 0x106;
  cVar12 = (pcVar3 + uVar20)[-1];
  cVar13 = pcVar3[uVar20];
  if (uVar7 <= uVar10) {
    uVar7 = uVar10;
  }
  uVar21 = *(uint *)(param_1 + 0xac);
  if (*(uint *)(param_1 + 0xbc) <= *(uint *)(param_1 + 0xa8)) {
    uVar21 = *(uint *)(param_1 + 0xac) >> 2;
  }
  iVar11 = (int)pcVar3;
  uVar6 = uVar8;
  if (*(uint *)(param_1 + 0xc0) <= uVar8) {
    uVar6 = *(uint *)(param_1 + 0xc0);
  }
  do {
    pcVar1 = (char *)(lVar18 + (ulong)param_2);
    iVar19 = (int)uVar20;
    if ((((pcVar1[iVar19] == cVar13) && (pcVar1[(long)iVar19 + -1] == cVar12)) &&
        (*pcVar1 == *pcVar3)) && (pcVar1[1] == pcVar3[1])) {
      lVar4 = lVar18 + 5 + (ulong)param_2;
      lVar16 = 0;
      do {
        pcVar1 = pcVar3 + lVar16;
        if (pcVar1[3] != *(char *)(lVar4 + lVar16 + -2)) {
          iVar14 = (int)pcVar1 + 3;
          goto LAB_00f250b0;
        }
        iVar14 = (int)lVar16;
        if (pcVar1[4] != *(char *)(lVar4 + lVar16 + -1)) {
          iVar14 = iVar11 + iVar14 + 4;
          goto LAB_00f250b0;
        }
        pcVar1 = pcVar3 + lVar16;
        if (pcVar1[5] != *(char *)(lVar4 + lVar16)) {
          iVar14 = (int)pcVar1 + 5;
          goto LAB_00f250b0;
        }
        if (pcVar1[6] != *(char *)(lVar4 + lVar16 + 1)) {
          iVar14 = iVar11 + iVar14 + 6;
          goto LAB_00f250b0;
        }
        pcVar1 = pcVar3 + lVar16;
        if (pcVar1[7] != *(char *)(lVar4 + lVar16 + 2)) {
          iVar14 = (int)pcVar1 + 7;
          goto LAB_00f250b0;
        }
        if (pcVar1[8] != *(char *)(lVar4 + lVar16 + 3)) {
          iVar14 = iVar11 + iVar14 + 8;
          goto LAB_00f250b0;
        }
        pcVar1 = pcVar3 + lVar16;
        if (pcVar1[9] != *(char *)(lVar4 + lVar16 + 4)) {
          iVar14 = (int)pcVar1 + 9;
          goto LAB_00f250b0;
        }
        lVar2 = lVar16 + 8;
      } while ((lVar16 + 2U < 0xfa) &&
              (lVar5 = lVar4 + lVar16, lVar16 = lVar2, pcVar1[10] == *(char *)(lVar5 + 5)));
      iVar14 = iVar11 + (int)lVar2 + 2;
LAB_00f250b0:
      uVar17 = 0x102 - (long)((iVar11 + 0x102) - iVar14);
      uVar15 = (uint)uVar17;
      if (iVar19 < (int)uVar15) {
        *(uint *)(param_1 + 0xa0) = param_2;
        if ((int)uVar6 <= (int)uVar15) {
LAB_00f250f4:
          if (uVar15 <= uVar8) {
            uVar8 = uVar15;
          }
          return uVar8;
        }
        cVar12 = pcVar3[(long)(int)uVar15 + -1];
        cVar13 = pcVar3[uVar17];
        uVar20 = uVar17 & 0xffffffff;
      }
    }
    uVar15 = (uint)uVar20;
    uVar9 = *(ushort *)
             (*(long *)(param_1 + 0x60) + (ulong)(param_2 & *(uint *)(param_1 + 0x4c)) * 2);
    param_2 = (uint)uVar9;
    if (((uint)uVar9 <= uVar7 - uVar10) || (uVar21 = uVar21 - 1, uVar21 == 0)) goto LAB_00f250f4;
  } while( true );
}

