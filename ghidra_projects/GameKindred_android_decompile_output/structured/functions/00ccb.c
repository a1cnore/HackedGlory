// functions/00ccb — 21 functions
#include "libGameKindred.h"




void FUN_00ccb120(long param_1)

{
  FUN_008fa54c(param_1,&DAT_01e277f2);
  FUN_008fa54c(param_1 + 0x18,&DAT_01e277f2);
  FUN_008fa54c(param_1 + 0x30,&DAT_01e277f2);
  FUN_008fa54c(param_1 + 0x48,&DAT_01e277f2);
  FUN_008fa54c(param_1 + 0x60,&DAT_01e277f2);
  FUN_008fa54c(param_1 + 0x78,&DAT_01e277f2);
  *(undefined2 *)(param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  memset((void *)(param_1 + 0x90),0,0x5d);
  return;
}




void FUN_00ccb1a0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00ccfd40(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_008fcdb8(lVar4 + -0x28,param_2);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x18);
  return;
}




void FUN_00ccb244(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x28;
        puVar2 = puVar2 + 5;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




byte * FUN_00ccb2c0(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x90);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_1 + 0x98);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar8 = (byte *)(lVar10 + uVar9 * 0x28);
      bVar3 = *pbVar8;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar8 + 8);
      }
      if (uVar1 == __n) {
        pbVar7 = *(byte **)(lVar10 + uVar9 * 0x28 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar7 = pbVar8 + 1;
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
            return pbVar8;
          }
          lVar6 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          pbVar5 = pbVar8;
          while (pbVar5 = pbVar5 + 1, *pbVar5 == *pbVar7) {
            lVar6 = lVar6 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar6 == 0) {
              return pbVar8;
            }
          }
        }
        else {
          if (__n == 0) {
            return pbVar8;
          }
          iVar4 = memcmp(pbVar7,__s2,__n);
          if (iVar4 == 0) {
            return pbVar8;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return (byte *)0x0;
}




void FUN_00ccb3ac(long param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long local_70;
  ulong local_68;
  void *local_60;
  ulong local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  local_50 = 0;
  piVar2 = (int *)(param_1 + 0x90);
  if (*piVar2 == 0) {
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  else {
    lVar3 = 0;
    uVar4 = 0;
    do {
      FUN_00ccb1a0(&local_58,*(long *)(param_1 + 0x98) + lVar3);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x28;
    } while (uVar4 < *(uint *)(param_1 + 0x90));
    local_68 = 0;
    local_60 = (void *)0x0;
    if ((int)local_58 != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        local_70 = local_50 + lVar3;
        FUN_00ccbec8(&local_68,&local_70);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x28;
      } while (uVar4 < (local_58 & 0xffffffff));
      if ((int)local_68 != 0) {
        qsort(local_60,local_68 & 0xffffffff,8,FUN_00ccbf50);
      }
    }
  }
  FUN_00ccb244(piVar2,0);
  if ((int)local_68 != 0) {
    uVar4 = 0;
    do {
      FUN_00ccb1a0(piVar2,*(undefined8 *)((long)local_60 + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < (local_68 & 0xffffffff));
    if ((int)local_68 != 0) {
      qsort(local_60,local_68 & 0xffffffff,8,FUN_00ccc000);
    }
  }
  FUN_00ccb244(param_1 + 0xa0,0);
  if ((int)local_68 != 0) {
    uVar4 = 0;
    do {
      FUN_00ccb1a0(param_1 + 0xa0,*(undefined8 *)((long)local_60 + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < (local_68 & 0xffffffff));
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00ccb244(&local_58,1);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ccb56c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00ccfb70(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xf8;
  FUN_008fcdb8(lVar4 + -0xf8,param_2);
  FUN_008fcdb8(lVar4 + -0xe0,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -200,param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0xb0,param_2 + 0x48);
  FUN_008fcdb8(lVar4 + -0x98,param_2 + 0x60);
  FUN_008fcdb8(lVar4 + -0x80,param_2 + 0x78);
  FUN_00ccfcb8(lVar4 + -0x68,param_2 + 0x90);
  FUN_00ccfcb8(lVar4 + -0x58,param_2 + 0xa0);
  FUN_00951160(lVar4 + -0x48,param_2 + 0xb0);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0xf0);
  uVar5 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(lVar4 + -0x20) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(lVar4 + -0x28) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(lVar4 + -0x30) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(lVar4 + -0x38) = uVar5;
  return;
}




void FUN_00ccb680(byte *param_1)

{
  FUN_00951534(param_1 + 0xb0,1);
  FUN_00ccb244(param_1 + 0xa0,1);
  FUN_00ccb244(param_1 + 0x90,1);
  if ((param_1[0x78] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if ((param_1[0x60] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
  if ((param_1[0x48] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  if ((param_1[0x30] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_00ccb728(uint *param_1,uint param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00cd087c(param_1,param_2);
    }
    uVar1 = (ulong)*param_1;
    if (*param_1 < param_2) {
      do {
        *(undefined8 *)(*(long *)(param_1 + 2) + uVar1 * 8) = param_3;
        uVar1 = uVar1 + 1;
      } while (param_2 != uVar1);
    }
    *param_1 = param_2;
  }
  return;
}




uint FUN_00ccb7a8(long *param_1,long *param_2)

{
  ulong uVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  void *__s2;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  void *__s1;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar7 = *param_1;
  lVar8 = *param_2;
  iVar2 = *(int *)(lVar7 + 0xe8);
  iVar3 = *(int *)(lVar8 + 0xe8);
  bVar4 = SBORROW4(iVar2,iVar3);
  bVar5 = iVar2 - iVar3 < 0;
  if (iVar2 == iVar3) {
    lVar9 = *(long *)(lVar7 + 0xc0);
    lVar10 = *(long *)(lVar8 + 0xc0);
    bVar4 = SBORROW8(lVar9,lVar10);
    bVar5 = lVar9 - lVar10 < 0;
    if (lVar9 == lVar10) {
      uVar1 = (ulong)(*(byte *)(lVar8 + 0x30) >> 1);
      __s2 = (void *)(lVar8 + 0x31);
      if ((*(byte *)(lVar8 + 0x30) & 1) != 0) {
        uVar1 = *(ulong *)(lVar8 + 0x38);
        __s2 = *(void **)(lVar8 + 0x40);
      }
      if ((*(byte *)(lVar7 + 0x30) & 1) == 0) {
        uVar11 = (ulong)(*(byte *)(lVar7 + 0x30) >> 1);
        __s1 = (void *)(lVar7 + 0x31);
      }
      else {
        uVar11 = *(ulong *)(lVar7 + 0x38);
        __s1 = *(void **)(lVar7 + 0x40);
      }
      __n = uVar1;
      if (uVar11 <= uVar1) {
        __n = uVar11;
      }
      if ((__n != 0) && (uVar6 = memcmp(__s1,__s2,__n), uVar6 != 0)) {
        return uVar6;
      }
      if (uVar1 <= uVar11) {
        return (uint)(uVar1 < uVar11);
      }
      return 0xffffffff;
    }
  }
  uVar6 = 1;
  if (bVar5 != bVar4) {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}




void FUN_00ccb850(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0xf8;
      do {
        FUN_00ccb680(lVar1);
        lVar2 = lVar2 + -0xf8;
        lVar1 = lVar1 + 0xf8;
      } while (lVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00ccb8c0(undefined8 param_1,byte *param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar3 = FUN_00cc7c74();
  if (*param_3 != 0) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      lVar5 = *(long *)(param_3 + 2);
      uVar4 = FUN_00cc7b20(lVar5 + lVar10);
      lVar5 = FUN_00ccb2c0(lVar3,lVar5 + lVar10);
      pbVar1 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        pbVar1 = *(byte **)(param_2 + 0x10);
      }
      FUN_00904594(pbVar1,uVar4);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x18;
      uVar2 = *(int *)(lVar5 + 0x1c) - 1;
      *(uint *)(lVar5 + 0x1c) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    } while (uVar11 < *param_3);
  }
  uVar11 = (ulong)*(uint *)(lVar3 + 0x90);
  if (*(uint *)(lVar3 + 0x90) != 0) {
    iVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0x98) + 0x1c);
    uVar9 = uVar11;
    do {
      uVar9 = uVar9 - 1;
      iVar7 = *piVar8 + iVar7;
      piVar8 = piVar8 + 10;
    } while (uVar9 != 0);
    if (iVar7 == 0) {
      puVar6 = (undefined4 *)(*(long *)(lVar3 + 0x98) + 0x1c);
      do {
        uVar11 = uVar11 - 1;
        *puVar6 = puVar6[-1];
        puVar6 = puVar6 + 10;
      } while (uVar11 != 0);
    }
  }
  FUN_00ccb3ac(lVar3);
  return;
}




bool FUN_00ccb9b8(long param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  if (*(uint *)(param_1 + 0x90) != 0) {
    uVar2 = 0;
    iVar1 = 0;
    piVar3 = (int *)(*(long *)(param_1 + 0x98) + 0x1c);
    do {
      uVar2 = uVar2 + 1;
      iVar1 = *piVar3 + iVar1;
      piVar3 = piVar3 + 10;
    } while (uVar2 < *(uint *)(param_1 + 0x90));
    return iVar1 == 0;
  }
  return true;
}




void FUN_00ccb9f8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if (uVar1 != 0) {
    uVar2 = 0;
    puVar3 = (undefined4 *)(*(long *)(param_1 + 0x98) + 0x1c);
    do {
      uVar2 = uVar2 + 1;
      *puVar3 = puVar3[-1];
      puVar3 = puVar3 + 10;
    } while (uVar2 < uVar1);
  }
  return;
}




byte * FUN_00ccba24(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x90);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_1 + 0x98);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar8 = (byte *)(lVar10 + uVar9 * 0x28);
      bVar3 = *pbVar8;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar8 + 8);
      }
      if (uVar1 == __n) {
        pbVar7 = *(byte **)(lVar10 + uVar9 * 0x28 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar7 = pbVar8 + 1;
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
            return pbVar8;
          }
          lVar6 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          pbVar5 = pbVar8;
          while (pbVar5 = pbVar5 + 1, *pbVar5 == *pbVar7) {
            lVar6 = lVar6 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar6 == 0) {
              return pbVar8;
            }
          }
        }
        else {
          if (__n == 0) {
            return pbVar8;
          }
          iVar4 = memcmp(pbVar7,__s2,__n);
          if (iVar4 == 0) {
            return pbVar8;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return (byte *)0x0;
}




void FUN_00ccbb10(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = 0;
  local_50 = 0;
  FUN_00ccbc34(param_1,(long)&local_50 + 4,&local_50,(long)&local_58 + 4,&local_58);
  switch(param_2) {
  case 0:
    iVar5 = local_50._4_4_;
    break;
  case 1:
    iVar5 = (int)local_50;
    break;
  case 2:
    iVar5 = local_58._4_4_;
    goto joined_r0x00ccbb90;
  case 3:
    iVar5 = (int)local_58;
joined_r0x00ccbb90:
    if (iVar5 == 0) goto LAB_00ccbc04;
    goto LAB_00ccbba0;
  default:
    iVar5 = 0;
    goto LAB_00ccbbc0;
  }
  if (iVar5 != 0) {
LAB_00ccbba0:
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    iVar3 = rand();
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = iVar3 / iVar5;
    }
    iVar5 = (iVar3 - iVar1 * iVar5) + 1;
LAB_00ccbbc0:
    if (*(int *)(param_1 + 0x90) != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        piVar4 = (int *)FUN_00cc7b20(*(long *)(param_1 + 0x98) + lVar6);
        iVar5 = iVar5 - (uint)(*piVar4 == param_2);
        if (iVar5 == 0) goto LAB_00ccbc08;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar7 < *(uint *)(param_1 + 0x90));
    }
  }
LAB_00ccbc04:
  piVar4 = (int *)0x0;
LAB_00ccbc08:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar4);
}




void FUN_00ccbc34(long param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      puVar1 = (undefined4 *)FUN_00cc7b20(*(long *)(param_1 + 0x98) + lVar3);
      piVar2 = param_2;
      switch(*puVar1) {
      case 0:
        break;
      case 1:
        piVar2 = param_3;
        break;
      case 2:
        piVar2 = param_4;
        break;
      case 3:
        piVar2 = param_5;
        break;
      default:
        goto switchD_00ccbcac_default;
      }
      *piVar2 = *piVar2 + 1;
switchD_00ccbcac_default:
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x28;
    } while (uVar4 < *(uint *)(param_1 + 0x90));
  }
  return;
}




int FUN_00ccbcfc(long param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  if (*(uint *)(param_1 + 0x90) != 0) {
    uVar3 = 0;
    iVar1 = 0;
    piVar2 = (int *)(*(long *)(param_1 + 0x98) + 0x18);
    do {
      uVar3 = uVar3 + 1;
      iVar1 = *piVar2 + iVar1;
      piVar2 = piVar2 + 10;
    } while (uVar3 < *(uint *)(param_1 + 0x90));
    return iVar1;
  }
  return 0;
}




int FUN_00ccbd38(long param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  if (*(uint *)(param_1 + 0x90) != 0) {
    uVar3 = 0;
    iVar1 = 0;
    piVar2 = (int *)(*(long *)(param_1 + 0x98) + 0x1c);
    do {
      uVar3 = uVar3 + 1;
      iVar1 = *piVar2 + iVar1;
      piVar2 = piVar2 + 10;
    } while (uVar3 < *(uint *)(param_1 + 0x90));
    return iVar1;
  }
  return 0;
}




int FUN_00ccbd74(long param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  undefined4 *puVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x98);
    uVar5 = 0;
    iVar4 = 0;
    lVar6 = 0x1c;
    do {
      puVar1 = (undefined4 *)FUN_00cc7b20(lVar2 + lVar6 + -0x1c);
      switch(*puVar1) {
      case 0:
        lVar2 = *(long *)(param_1 + 0x98);
        piVar3 = (int *)(lVar2 + uVar5 * 0x28 + 0x1c);
        *param_2 = *param_2 + *(int *)(lVar2 + lVar6);
        break;
      case 1:
        lVar2 = *(long *)(param_1 + 0x98);
        piVar3 = (int *)(lVar2 + uVar5 * 0x28 + 0x1c);
        *param_3 = *param_3 + *(int *)(lVar2 + lVar6);
        break;
      case 2:
        lVar2 = *(long *)(param_1 + 0x98);
        piVar3 = (int *)(lVar2 + uVar5 * 0x28 + 0x1c);
        *param_4 = *param_4 + *(int *)(lVar2 + lVar6);
        break;
      case 3:
        lVar2 = *(long *)(param_1 + 0x98);
        piVar3 = (int *)(lVar2 + uVar5 * 0x28 + 0x1c);
        *param_5 = *param_5 + *(int *)(lVar2 + lVar6);
        break;
      default:
        lVar2 = *(long *)(param_1 + 0x98);
        piVar3 = (int *)(lVar2 + lVar6);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
      iVar4 = *piVar3 + iVar4;
    } while (uVar5 < *(uint *)(param_1 + 0x90));
  }
  return iVar4;
}




void FUN_00ccbec8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00cd08fc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_00ccbf50(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)FUN_00cc7b20(*param_1);
  piVar3 = (int *)FUN_00cc7b20(*param_2);
  if (piVar2 == (int *)0x0 && piVar3 == (int *)0x0) {
    iVar1 = 1;
    if (param_1 < param_2) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = 1;
    if ((piVar2 != (int *)0x0) && (iVar1 = -1, piVar3 != (int *)0x0)) {
      if (*piVar2 == *piVar3) {
        iVar1 = strcmp(*(char **)(piVar2 + 8),*(char **)(piVar3 + 8));
        if (iVar1 == 0) {
          iVar1 = strcmp(*(char **)(piVar2 + 10),*(char **)(piVar3 + 10));
          return iVar1;
        }
      }
      else {
        iVar1 = -1;
        if (*piVar2 < *piVar3) {
          iVar1 = 1;
        }
      }
    }
  }
  return iVar1;
}

