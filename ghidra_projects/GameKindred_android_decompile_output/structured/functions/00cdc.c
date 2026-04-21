// functions/00cdc — 24 functions
#include "libGameKindred.h"




void FUN_00cdc074(long param_1)

{
  FUN_00cdbcc8(param_1 + -0x18);
  return;
}




void FUN_00cdc07c(void *param_1)

{
  FUN_00cdbcc8();
  operator_delete(param_1);
  return;
}




void FUN_00cdc0a0(long param_1)

{
  FUN_00cdbcc8((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_00cdc0c8(long param_1,byte *param_2)

{
  ulong uVar1;
  byte **ppbVar2;
  byte bVar3;
  long lVar4;
  byte **ppbVar5;
  byte *pbVar6;
  byte *local_58;
  byte *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_2;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0) {
    pbVar6 = (byte *)0x0;
  }
  else {
    local_50 = *(byte **)(param_2 + 0x10);
    if ((bVar3 & 1) == 0) {
      local_50 = param_2 + 1;
    }
    local_58 = (byte *)0x0;
    ppbVar5 = (byte **)FUN_00cde184(param_1 + 0x68,&local_50);
    ppbVar2 = &local_58;
    if (ppbVar5 != (byte **)0x0) {
      ppbVar2 = ppbVar5;
    }
    local_50 = *ppbVar2;
    pbVar6 = local_50;
    if (local_50 == (byte *)0x0) {
      pbVar6 = operator_new(0xb8);
      pbVar6[0x10] = 0;
      pbVar6[0x11] = 0;
      pbVar6[0x12] = 0;
      pbVar6[0x13] = 0;
      pbVar6[0x14] = 0;
      pbVar6[0x15] = 0;
      pbVar6[0x16] = 0;
      pbVar6[0x17] = 0;
      pbVar6[0x18] = 0;
      pbVar6[0x19] = 0;
      pbVar6[0x1a] = 0;
      pbVar6[0x1b] = 0;
      pbVar6[0x1c] = 0;
      pbVar6[0x1d] = 0;
      pbVar6[0x1e] = 0;
      pbVar6[0x1f] = 0;
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6[4] = 0;
      pbVar6[5] = 0;
      pbVar6[6] = 0;
      pbVar6[7] = 0;
      pbVar6[8] = 0;
      pbVar6[9] = 0;
      pbVar6[10] = 0;
      pbVar6[0xb] = 0;
      pbVar6[0xc] = 0;
      pbVar6[0xd] = 0;
      pbVar6[0xe] = 0;
      pbVar6[0xf] = 0;
      FUN_0099ce88(pbVar6 + 0x20);
      FUN_0099ce88(pbVar6 + 0x40);
      memset(pbVar6 + 0x60,0,0x48);
      pbVar6[0xa8] = 0;
      pbVar6[0xa9] = 0;
      pbVar6[0xaa] = 1;
      pbVar6[0xab] = 0;
      pbVar6[0xac] = 1;
      pbVar6[0xad] = 0;
      pbVar6[0xae] = 0;
      pbVar6[0xaf] = 0;
      *(ushort *)(pbVar6 + 0xb0) = *(ushort *)(pbVar6 + 0xb0) & 0xf000;
      local_50 = pbVar6;
      FUN_008fce60(pbVar6 + 0x90,param_2);
      local_58 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        local_58 = *(byte **)(param_2 + 0x10);
      }
      FUN_00cdc200(param_1 + 0x68,&local_58,&local_50);
      pbVar6 = local_50;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar6);
}




void FUN_00cdc200(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  uVar4 = FUN_00e6a474(uVar14);
  uVar5 = FUN_0091ed5c(uVar14,uVar4,0x12345678);
  uVar10 = param_1[4];
  uVar9 = *param_1;
  param_1[4] = uVar10 + 1;
  if (uVar9 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar2 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar1 = *piVar13;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar2 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar2 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar1 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar6;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar9 = *param_1;
    }
  }
  lVar8 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar5 / uVar9;
  }
  uVar12 = (ulong)(uVar5 - uVar10 * uVar9);
  piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
  iVar6 = *piVar13;
  while (iVar6 != -1) {
    uVar10 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
    iVar6 = *piVar13;
  }
  *(uint *)(lVar8 + uVar12 * 8) = uVar5;
  iVar6 = FUN_00cde22c(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cdc3d8(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_00cdc444(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    operator_delete((void *)param_1[0x14]);
  }
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  FUN_0099cedc(param_1 + 8);
  FUN_0099cedc(param_1 + 4);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00cdc4c0(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 200) != '\0') {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar1 = (ulong)uVar2;
      if (*(uint *)(param_1 + 0x68) <= uVar2) break;
      uVar3 = uVar2 + 1;
    } while (*(int *)(*(long *)(param_1 + 0x70) + uVar1 * 8 + 4) == -1);
    if (*(uint *)(param_1 + 0x68) != uVar2) {
      do {
        FUN_00cdc584(*(undefined8 *)
                      (*(long *)(param_1 + 0x88) +
                      (ulong)*(uint *)(*(long *)(param_1 + 0x70) + uVar1 * 8 + 4) * 8),
                     *(undefined4 *)(param_2 + 4));
        uVar3 = (uint)uVar1;
        do {
          uVar3 = uVar3 + 1;
          uVar1 = (ulong)uVar3;
          if (*(uint *)(param_1 + 0x68) <= uVar3) break;
        } while (*(int *)(*(long *)(param_1 + 0x70) + uVar1 * 8 + 4) == -1);
      } while (*(uint *)(param_1 + 0x68) != uVar3);
    }
  }
  return;
}




void FUN_00cdc584(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((((char)*(ushort *)(param_1 + 0xb0) < '\x01') || ((*(ushort *)(param_1 + 0xb0) >> 9 & 1) != 0)
      ) || (uVar2 = *(undefined8 *)(param_1 + 0xa8), (short)uVar2 < (short)((ulong)uVar2 >> 0x10)))
  {
    FUN_0093a024(param_1 + 0x90,0);
  }
  else if (((int)((ulong)uVar2 >> 0x20) <= param_2) &&
          (uVar1 = FUN_0093a180(param_1 + 0x90), (uVar1 & 1) == 0)) {
    uVar2 = 1;
    goto LAB_00cdc5fc;
  }
  uVar2 = 0;
LAB_00cdc5fc:
  FUN_0099cf94(param_1 + 0x20,uVar2);
  return;
}




undefined8 FUN_00cdc608(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40);
  uVar2 = FUN_00cdc0c8(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cdc678(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  if (*(char *)(param_1 + 200) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_00cdc6f4(param_1 + 0x98,&local_30);
    uVar3 = 0;
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00cdcc10(param_1 + 0x98,&local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




bool FUN_00cdc6f4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      return *(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1;
    }
  }
  return false;
}




long FUN_00cdc794(long param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 200) != '\0') {
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar2 = (ulong)uVar4;
      if (*(uint *)(param_1 + 0x68) <= uVar4) break;
      uVar5 = uVar4 + 1;
    } while (*(int *)(*(long *)(param_1 + 0x70) + uVar2 * 8 + 4) == -1);
    if (*(uint *)(param_1 + 0x68) == uVar4) {
      return 0;
    }
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x88) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x70) + uVar2 * 8 + 4) * 8);
      if ((*(byte *)(lVar3 + 0x60) & 1) == 0) {
        __s1 = (char *)(lVar3 + 0x61);
      }
      else {
        __s1 = *(char **)(lVar3 + 0x70);
      }
      iVar1 = strcmp(__s1,param_2);
      if (iVar1 == 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x88) +
                         (ulong)*(uint *)(*(long *)(param_1 + 0x70) + uVar2 * 8 + 4) * 8);
        if ((*(byte *)(lVar3 + 0x90) & 1) == 0) {
          return lVar3 + 0x91;
        }
        return *(long *)(lVar3 + 0xa0);
      }
      uVar5 = (uint)uVar2;
      do {
        uVar5 = uVar5 + 1;
        uVar2 = (ulong)uVar5;
        if (*(uint *)(param_1 + 0x68) <= uVar5) break;
      } while (*(int *)(*(long *)(param_1 + 0x70) + uVar2 * 8 + 4) == -1);
    } while (*(uint *)(param_1 + 0x68) != uVar5);
  }
  return 0;
}




int FUN_00cdc8b0(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 200) == '\0') {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  uVar5 = 0;
  do {
    uVar3 = uVar5;
    uVar4 = (ulong)uVar3;
    if (uVar1 <= uVar3) break;
    uVar5 = uVar3 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x70) + uVar4 * 8 + 4) == -1);
  iVar2 = 0;
  if (uVar1 != uVar3) {
    iVar2 = 0;
    do {
      uVar5 = (uint)uVar4;
      if ('\0' < (char)*(undefined2 *)
                        (*(long *)(*(long *)(param_1 + 0x88) +
                                  (ulong)*(uint *)(*(long *)(param_1 + 0x70) + uVar4 * 8 + 4) * 8) +
                        0xb0)) {
        iVar2 = iVar2 + 1;
      }
      do {
        uVar5 = uVar5 + 1;
        uVar4 = (ulong)uVar5;
        if (uVar1 <= uVar5) break;
      } while (*(int *)(*(long *)(param_1 + 0x70) + uVar4 * 8 + 4) == -1);
    } while (uVar1 != uVar5);
  }
  return iVar2;
}




undefined4 FUN_00cdc96c(long param_1)

{
  if (*(char *)(param_1 + 200) != '\0') {
    return *(undefined4 *)(param_1 + 0x78);
  }
  return 0;
}




undefined8 FUN_00cdc984(long param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *__s1;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = FUN_0093dbe8();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 200) != '\0') {
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar2 = (ulong)uVar5;
        if (*(uint *)(param_1 + 0x68) <= uVar5) break;
        uVar6 = uVar5 + 1;
      } while (*(int *)(*(long *)(param_1 + 0x70) + uVar2 * 8 + 4) == -1);
      if (*(uint *)(param_1 + 0x68) == uVar5) {
        return 0;
      }
      do {
        lVar4 = *(long *)(*(long *)(param_1 + 0x88) +
                         (ulong)*(uint *)(*(long *)(param_1 + 0x70) + uVar2 * 8 + 4) * 8);
        if ((*(byte *)(lVar4 + 0x78) & 1) == 0) {
          __s1 = (char *)(lVar4 + 0x79);
        }
        else {
          __s1 = *(char **)(lVar4 + 0x88);
        }
        iVar1 = strcmp(__s1,param_2);
        if ((iVar1 == 0) &&
           ('\0' < (char)*(undefined2 *)
                          (*(long *)(*(long *)(param_1 + 0x88) +
                                    (ulong)*(uint *)(*(long *)(param_1 + 0x70) + uVar2 * 8 + 4) * 8)
                          + 0xb0))) goto LAB_00cdc9a4;
        uVar6 = (uint)uVar2;
        do {
          uVar6 = uVar6 + 1;
          uVar2 = (ulong)uVar6;
          if (*(uint *)(param_1 + 0x68) <= uVar6) break;
        } while (*(int *)(*(long *)(param_1 + 0x70) + uVar2 * 8 + 4) == -1);
      } while (*(uint *)(param_1 + 0x68) != uVar6);
    }
    uVar3 = 0;
  }
  else {
LAB_00cdc9a4:
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00cdcaac(long param_1,byte *param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long local_58;
  byte *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 200) != '\0') {
    local_50 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      local_50 = param_2 + 1;
    }
    uVar4 = FUN_00cdc6f4(param_1 + 0x98,&local_50);
    uVar5 = 0;
    if ((uVar4 & 1) == 0) goto LAB_00cdcbdc;
    local_50 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      local_50 = *(byte **)(param_2 + 0x10);
    }
    puVar6 = (uint *)FUN_00cdcc10(param_1 + 0x98,&local_50);
    if (*puVar6 != 0) {
      lVar9 = 0;
      uVar4 = 0;
      do {
        lVar8 = *(long *)(puVar6 + 2);
        if ((*(byte *)(lVar8 + lVar9) & 1) == 0) {
          local_50 = (byte *)(lVar8 + lVar9 + 1);
        }
        else {
          local_50 = *(byte **)(lVar8 + lVar9 + 0x10);
        }
        local_58 = 0;
        plVar7 = (long *)FUN_00cde184(param_1 + 0x68,&local_50);
        plVar1 = &local_58;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7;
        }
        lVar8 = *plVar1;
        if ((lVar8 != 0) &&
           ((uVar2 = *(ushort *)(lVar8 + 0xb0), (uVar2 >> 10 & 1) != 0 ||
            ((('\0' < (char)uVar2 && ((uVar2 >> 9 & 1) == 0)) &&
             ((short)((ulong)*(undefined8 *)(lVar8 + 0xa8) >> 0x10) <=
              (short)*(undefined8 *)(lVar8 + 0xa8))))))) {
          uVar5 = 1;
          goto LAB_00cdcbdc;
        }
        uVar4 = uVar4 + 1;
        lVar9 = lVar9 + 0x18;
      } while (uVar4 < *puVar6);
    }
  }
  uVar5 = 0;
LAB_00cdcbdc:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




long FUN_00cdcc10(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_00e6a474(uVar8);
  uVar5 = FUN_0091ed5c(uVar8,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
      goto LAB_00cdcc9c;
    }
  }
  uVar7 = 0xffffffff;
LAB_00cdcc9c:
  return *(long *)(param_1 + 8) + uVar7 * 0x10;
}




bool FUN_00cdccb0(long param_1)

{
  if ('\0' < (char)*(ushort *)(param_1 + 0xb0)) {
    return (short)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x10) <=
           (short)*(undefined8 *)(param_1 + 0xa8) && (*(ushort *)(param_1 + 0xb0) & 0x200) == 0;
  }
  return false;
}




void FUN_00cdccf4(long param_1,byte *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long local_58;
  byte *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 200) != '\0') {
    local_50 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      local_50 = param_2 + 1;
    }
    uVar3 = FUN_00cdc6f4(param_1 + 0x98,&local_50);
    uVar4 = 0;
    if ((uVar3 & 1) == 0) goto LAB_00cdce20;
    local_50 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      local_50 = *(byte **)(param_2 + 0x10);
    }
    puVar5 = (uint *)FUN_00cdcc10(param_1 + 0x98,&local_50);
    if (*puVar5 != 0) {
      lVar8 = 0;
      uVar3 = 0;
      do {
        lVar7 = *(long *)(puVar5 + 2);
        if ((*(byte *)(lVar7 + lVar8) & 1) == 0) {
          local_50 = (byte *)(lVar7 + lVar8 + 1);
        }
        else {
          local_50 = *(byte **)(lVar7 + lVar8 + 0x10);
        }
        local_58 = 0;
        plVar6 = (long *)FUN_00cde184(param_1 + 0x68,&local_50);
        plVar1 = &local_58;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6;
        }
        lVar7 = *plVar1;
        if ((((lVar7 != 0) && ('\0' < (char)*(ushort *)(lVar7 + 0xb0))) &&
            ((*(ushort *)(lVar7 + 0xb0) >> 9 & 1) == 0)) &&
           ((short)((ulong)*(undefined8 *)(lVar7 + 0xa8) >> 0x10) <=
            (short)*(undefined8 *)(lVar7 + 0xa8))) {
          uVar4 = 1;
          goto LAB_00cdce20;
        }
        uVar3 = uVar3 + 1;
        lVar8 = lVar8 + 0x18;
      } while (uVar3 < *puVar5);
    }
  }
  uVar4 = 0;
LAB_00cdce20:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00cdce54(void)

{
  FUN_00cdbd9c();
  FUN_009580b8();
  FUN_00962918();
  return;
}




void FUN_00cdce6c(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  byte local_58 [16];
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_40 = param_2;
  FUN_008fa54c(local_58);
  FUN_0093a024(local_58,1);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
    param_2 = local_40;
  }
  uVar5 = FUN_00e6a474(param_2);
  uVar6 = FUN_0091ed5c(param_2,uVar5,0x12345678);
  puVar10 = (uint *)(param_1 + 0x68);
  uVar2 = *puVar10;
  if (uVar2 != 0) {
    lVar9 = *(long *)(param_1 + 0x70);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar6 / uVar2;
    }
    uVar3 = uVar6 - uVar3 * uVar2;
    while ((*(uint *)(lVar9 + (ulong)uVar3 * 8) != uVar6 &&
           (*(int *)(lVar9 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) && (*(int *)(lVar9 + (ulong)uVar3 * 8 + 4) != -1)) {
      puVar7 = (undefined8 *)FUN_00cdcfb0(puVar10,&local_40);
      uVar11 = *puVar7;
      uVar5 = FUN_00a0a728(param_1 + 0x40);
      FUN_00cdc584(uVar11,uVar5);
      plVar8 = (long *)FUN_00cdcfb0(puVar10,&local_40);
      lVar9 = *plVar8;
      *(ushort *)(lVar9 + 0xb0) = *(ushort *)(lVar9 + 0xb0) & 0xf3ff;
      FUN_0099cf94(lVar9 + 0x40,0);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00cdcfb0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_00e6a474(uVar8);
  uVar5 = FUN_0091ed5c(uVar8,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
      goto LAB_00cdd03c;
    }
  }
  uVar7 = 0xffffffff;
LAB_00cdd03c:
  return *(long *)(param_1 + 8) + uVar7 * 8;
}




void thunk_FUN_00cdc4c0(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 200) != '\0') {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar1 = (ulong)uVar2;
      if (*(uint *)(param_1 + 0x68) <= uVar2) break;
      uVar3 = uVar2 + 1;
    } while (*(int *)(*(long *)(param_1 + 0x70) + uVar1 * 8 + 4) == -1);
    if (*(uint *)(param_1 + 0x68) != uVar2) {
      do {
        FUN_00cdc584(*(undefined8 *)
                      (*(long *)(param_1 + 0x88) +
                      (ulong)*(uint *)(*(long *)(param_1 + 0x70) + uVar1 * 8 + 4) * 8),
                     *(undefined4 *)(param_2 + 4));
        uVar3 = (uint)uVar1;
        do {
          uVar3 = uVar3 + 1;
          uVar1 = (ulong)uVar3;
          if (*(uint *)(param_1 + 0x68) <= uVar3) break;
        } while (*(int *)(*(long *)(param_1 + 0x70) + uVar1 * 8 + 4) == -1);
      } while (*(uint *)(param_1 + 0x68) != uVar3);
    }
  }
  return;
}

