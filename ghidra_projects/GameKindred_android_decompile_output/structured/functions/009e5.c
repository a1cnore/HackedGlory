// functions/009e5 — 48 functions
#include "libGameKindred.h"




void FUN_009e5028(void *param_1)

{
  FUN_00b563ac();
  operator_delete(param_1);
  return;
}




void FUN_009e504c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | (param_2 & 1) << 1;
  return;
}




void FUN_009e5064(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfe | param_2 & 1;
  return;
}




void FUN_009e5074(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x371) = param_2 & 1;
  return;
}




void FUN_009e5080(long param_1)

{
  FUN_00b563ac(param_1 + -0x368);
  return;
}




void FUN_009e5088(long param_1)

{
  FUN_00b563ac((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_009e50b0(long param_1)

{
  FUN_00b563ac(param_1 + -0xbf0);
  return;
}




void FUN_009e50b8(long param_1)

{
  FUN_00b563ac((void *)(param_1 + -0xbf0));
  operator_delete((void *)(param_1 + -0xbf0));
  return;
}




void FUN_009e50e0(void)

{
  void *pvVar1;
  
  if (DAT_0312fce8 == (void *)0x0) {
    pvVar1 = operator_new(0xb0);
    FUN_009e5184();
    DAT_0312fce8 = pvVar1;
  }
  return;
}




void FUN_009e5118(void)

{
  if (DAT_0312fce8 != (long *)0x0) {
    (**(code **)(*DAT_0312fce8 + 8))();
    DAT_0312fce8 = (long *)0x0;
  }
  return;
}




undefined8 FUN_009e514c(void)

{
  return DAT_0312fce8;
}




undefined * FUN_009e5158(ulong param_1)

{
  return (&PTR_s_cloud9_027c4810)[(param_1 & 0xffffffff) * 2];
}




undefined * FUN_009e5170(ulong param_1)

{
  return (&PTR_s_com_superevilmegacorp_vg_esports_027c4818)[(param_1 & 0xffffffff) * 2];
}




void FUN_009e5184(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  byte local_80 [16];
  void *local_70;
  undefined8 *local_68;
  code *pcStack_60;
  void *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00e83560();
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027c4910;
  FUN_00e84dac(param_1 + 5);
  lVar2 = 0;
  param_1[5] = &PTR_FUN_027c4940;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  do {
    local_68 = (undefined8 *)0x0;
    pcStack_60 = (code *)0x0;
    local_58 = (void *)0x0;
    FUN_008fa54c(local_80,*(undefined8 *)((long)&PTR_s_cloud9_027c4810 + lVar2));
    FUN_008fce60(&local_68,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    local_50 = 0;
    local_4c = 0;
    FUN_009e52bc(param_1 + 0x10,&local_68);
    if (((ulong)local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xf0);
  pcStack_60 = thunk_FUN_009e5570;
  local_68 = param_1;
  FUN_00f02e98(0x3dcccccd,&local_68,0,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e52bc(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_009e58b0(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined1 *)(lVar1 + -4) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




void FUN_009e5358(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c4910;
  pcStack_40 = thunk_FUN_009e5570;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    operator_delete((void *)param_1[0x14]);
  }
  FUN_009e5838(param_1 + 0x10,1);
  param_1[5] = &PTR_FUN_027c4940;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  FUN_009e57c0(param_1 + 10,1);
  FUN_00e84dd8(param_1 + 5);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00e835e0(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e5434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c4940;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_009e57c0(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_009e5480(void *param_1)

{
  FUN_009e5358();
  operator_delete(param_1);
  return;
}




undefined1 FUN_009e54a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xaa);
}




void FUN_009e54ac(long param_1)

{
  if (*(char *)(param_1 + 0xaa) != '\0') {
    return;
  }
  FUN_00e828c0(param_1 + 0x28);
  return;
}




void FUN_009e54c0(long param_1)

{
  FUN_00e828c0(param_1 + 0x28);
  return;
}




void FUN_009e54c8(long param_1)

{
  *(undefined1 *)(param_1 + 0xaa) = 0;
  return;
}




undefined1 FUN_009e54d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}




long FUN_009e54d8(long param_1)

{
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    return param_1 + 0x91;
  }
  return *(long *)(param_1 + 0xa0);
}




undefined4 FUN_009e54f4(long param_1,char *param_2)

{
  int iVar1;
  byte *__s1;
  byte *pbVar2;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x88);
    do {
      if ((*pbVar2 & 1) == 0) {
        __s1 = pbVar2 + 1;
      }
      else {
        __s1 = *(byte **)(pbVar2 + 0x10);
      }
      iVar1 = strcmp((char *)__s1,param_2);
      if (iVar1 == 0) {
        return *(undefined4 *)(pbVar2 + 0x18);
      }
      pbVar2 = pbVar2 + 0x20;
    } while (pbVar2 != (byte *)(*(long *)(param_1 + 0x88) + (ulong)*(uint *)(param_1 + 0x80) * 0x20)
            );
  }
  return 0;
}




void thunk_FUN_009e5570(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte *__s2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  byte *__s1;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  uVar8 = FUN_00e84e74(param_1 + 0x28);
  if (((uVar8 & 1) == 0) || (uVar8 = FUN_00e84e5c(param_1 + 0x28), (uVar8 & 1) == 0)) {
    return;
  }
  uVar8 = (ulong)(*(byte *)(param_1 + 0x60) >> 1);
  lVar6 = param_1 + 0x61;
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 0x68);
    lVar6 = *(long *)(param_1 + 0x70);
  }
  FUN_008fcea8(param_1 + 0x90,lVar6,uVar8);
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_1 + 0x78);
  if (*(uint *)(param_1 + 0x50) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x58);
    pbVar10 = *(byte **)(param_1 + 0x88);
    uVar3 = *(uint *)(param_1 + 0x80);
    pbVar1 = pbVar9 + (ulong)*(uint *)(param_1 + 0x50) * 0x20;
    do {
      if (uVar3 != 0) {
        pbVar11 = pbVar10;
        do {
          bVar4 = *pbVar11;
          bVar5 = *pbVar9;
          __n = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            __n = *(size_t *)(pbVar11 + 8);
          }
          sVar2 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar9 + 8);
          }
          if (__n == sVar2) {
            __s1 = *(byte **)(pbVar11 + 0x10);
            if ((bVar4 & 1) == 0) {
              __s1 = pbVar11 + 1;
            }
            __s2 = pbVar9 + 1;
            if ((bVar5 & 1) != 0) {
              __s2 = *(byte **)(pbVar9 + 0x10);
            }
            if ((bVar4 & 1) == 0) {
              if (__n != 0) {
                uVar8 = 0;
                do {
                  if (pbVar11[uVar8 + 1] != __s2[uVar8]) goto LAB_009e5694;
                  uVar8 = uVar8 + 1;
                } while (bVar4 >> 1 != uVar8);
              }
            }
            else if ((__n != 0) && (iVar7 = memcmp(__s1,__s2,__n), iVar7 != 0)) goto LAB_009e5694;
            *(undefined4 *)(pbVar11 + 0x18) = *(undefined4 *)(pbVar9 + 0x18);
            pbVar11[0x1c] = pbVar9[0x1c];
          }
LAB_009e5694:
          pbVar11 = pbVar11 + 0x20;
        } while (pbVar11 != pbVar10 + (ulong)uVar3 * 0x20);
      }
      pbVar9 = pbVar9 + 0x20;
    } while (pbVar9 != pbVar1);
  }
  *(undefined1 *)(param_1 + 0xaa) = 1;
  FUN_009e56f0(param_1 + 0x18,param_1);
  return;
}




void FUN_009e5570(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte *__s2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  byte *__s1;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  uVar8 = FUN_00e84e74(param_1 + 0x28);
  if (((uVar8 & 1) == 0) || (uVar8 = FUN_00e84e5c(param_1 + 0x28), (uVar8 & 1) == 0)) {
    return;
  }
  uVar8 = (ulong)(*(byte *)(param_1 + 0x60) >> 1);
  lVar6 = param_1 + 0x61;
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 0x68);
    lVar6 = *(long *)(param_1 + 0x70);
  }
  FUN_008fcea8(param_1 + 0x90,lVar6,uVar8);
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_1 + 0x78);
  if (*(uint *)(param_1 + 0x50) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x58);
    pbVar10 = *(byte **)(param_1 + 0x88);
    uVar3 = *(uint *)(param_1 + 0x80);
    pbVar1 = pbVar9 + (ulong)*(uint *)(param_1 + 0x50) * 0x20;
    do {
      if (uVar3 != 0) {
        pbVar11 = pbVar10;
        do {
          bVar4 = *pbVar11;
          bVar5 = *pbVar9;
          __n = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            __n = *(size_t *)(pbVar11 + 8);
          }
          sVar2 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar9 + 8);
          }
          if (__n == sVar2) {
            __s1 = *(byte **)(pbVar11 + 0x10);
            if ((bVar4 & 1) == 0) {
              __s1 = pbVar11 + 1;
            }
            __s2 = pbVar9 + 1;
            if ((bVar5 & 1) != 0) {
              __s2 = *(byte **)(pbVar9 + 0x10);
            }
            if ((bVar4 & 1) == 0) {
              if (__n != 0) {
                uVar8 = 0;
                do {
                  if (pbVar11[uVar8 + 1] != __s2[uVar8]) goto LAB_009e5694;
                  uVar8 = uVar8 + 1;
                } while (bVar4 >> 1 != uVar8);
              }
            }
            else if ((__n != 0) && (iVar7 = memcmp(__s1,__s2,__n), iVar7 != 0)) goto LAB_009e5694;
            *(undefined4 *)(pbVar11 + 0x18) = *(undefined4 *)(pbVar9 + 0x18);
            pbVar11[0x1c] = pbVar9[0x1c];
          }
LAB_009e5694:
          pbVar11 = pbVar11 + 0x20;
        } while (pbVar11 != pbVar10 + (ulong)uVar3 * 0x20);
      }
      pbVar9 = pbVar9 + 0x20;
    } while (pbVar9 != pbVar1);
  }
  *(undefined1 *)(param_1 + 0xaa) = 1;
  FUN_009e56f0(param_1 + 0x18,param_1);
  return;
}




void FUN_009e56f0(uint *param_1,undefined8 param_2)

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




void FUN_009e575c(long param_1)

{
  *(undefined1 *)(param_1 + 0xaa) = 0;
  return;
}




void FUN_009e5764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c4940;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_009e57c0(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009e57b8(void)

{
  return 0x39;
}




void FUN_009e57c0(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
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




void FUN_009e5838(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
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




void FUN_009e58b0(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        *(undefined1 *)((long)pvVar7 + 0x1c) = *(undefined1 *)((long)pvVar4 + 0x1c);
        puVar1 = (undefined4 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined4 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void thunk_FUN_009e5570(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte *__s2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  byte *__s1;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  uVar8 = FUN_00e84e74(param_1 + 0x28);
  if (((uVar8 & 1) == 0) || (uVar8 = FUN_00e84e5c(param_1 + 0x28), (uVar8 & 1) == 0)) {
    return;
  }
  uVar8 = (ulong)(*(byte *)(param_1 + 0x60) >> 1);
  lVar6 = param_1 + 0x61;
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 0x68);
    lVar6 = *(long *)(param_1 + 0x70);
  }
  FUN_008fcea8(param_1 + 0x90,lVar6,uVar8);
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_1 + 0x78);
  if (*(uint *)(param_1 + 0x50) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x58);
    pbVar10 = *(byte **)(param_1 + 0x88);
    uVar3 = *(uint *)(param_1 + 0x80);
    pbVar1 = pbVar9 + (ulong)*(uint *)(param_1 + 0x50) * 0x20;
    do {
      if (uVar3 != 0) {
        pbVar11 = pbVar10;
        do {
          bVar4 = *pbVar11;
          bVar5 = *pbVar9;
          __n = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            __n = *(size_t *)(pbVar11 + 8);
          }
          sVar2 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar9 + 8);
          }
          if (__n == sVar2) {
            __s1 = *(byte **)(pbVar11 + 0x10);
            if ((bVar4 & 1) == 0) {
              __s1 = pbVar11 + 1;
            }
            __s2 = pbVar9 + 1;
            if ((bVar5 & 1) != 0) {
              __s2 = *(byte **)(pbVar9 + 0x10);
            }
            if ((bVar4 & 1) == 0) {
              if (__n != 0) {
                uVar8 = 0;
                do {
                  if (pbVar11[uVar8 + 1] != __s2[uVar8]) goto LAB_009e5694;
                  uVar8 = uVar8 + 1;
                } while (bVar4 >> 1 != uVar8);
              }
            }
            else if ((__n != 0) && (iVar7 = memcmp(__s1,__s2,__n), iVar7 != 0)) goto LAB_009e5694;
            *(undefined4 *)(pbVar11 + 0x18) = *(undefined4 *)(pbVar9 + 0x18);
            pbVar11[0x1c] = pbVar9[0x1c];
          }
LAB_009e5694:
          pbVar11 = pbVar11 + 0x20;
        } while (pbVar11 != pbVar10 + (ulong)uVar3 * 0x20);
      }
      pbVar9 = pbVar9 + 0x20;
    } while (pbVar9 != pbVar1);
  }
  *(undefined1 *)(param_1 + 0xaa) = 1;
  FUN_009e56f0(param_1 + 0x18,param_1);
  return;
}




void FUN_009e5994(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x108);
  FUN_009e5d18();
  DAT_0312fcf0 = pvVar1;
  pvVar1 = operator_new(0x28);
  FUN_00e77acc(pvVar1,0);
  DAT_0312fcf8 = pvVar1;
  return;
}




void FUN_009e59e0(void)

{
  pthread_mutex_t *ppVar1;
  
  if (DAT_0312fcf0 != (long *)0x0) {
    (**(code **)(*DAT_0312fcf0 + 8))();
  }
  ppVar1 = DAT_0312fcf8;
  DAT_0312fcf0 = (long *)0x0;
  if (DAT_0312fcf8 != (pthread_mutex_t *)0x0) {
    pthread_mutex_destroy(DAT_0312fcf8);
    operator_delete(ppVar1);
  }
  DAT_0312fcf8 = (pthread_mutex_t *)0x0;
  return;
}




bool FUN_009e5a3c(void)

{
  return DAT_0312fcf0 != 0;
}




undefined8 FUN_009e5a50(void)

{
  return DAT_0312fcf0;
}




bool FUN_009e5a5c(void)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  byte local_58 [8];
  ulong local_50;
  void *local_48;
  byte local_40 [8];
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00ec52d8(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((uVar1 == 7) && (iVar4 = FUN_0090d610(local_40,0,0xffffffffffffffff,"neunion",7), iVar4 == 0))
  {
    bVar3 = false;
  }
  else {
    iVar4 = FUN_00966da4();
    if (iVar4 == 7) {
      bVar3 = true;
    }
    else {
      FUN_00ec52d8(local_58);
      uVar1 = (ulong)(local_58[0] >> 1);
      if ((local_58[0] & 1) != 0) {
        uVar1 = local_50;
      }
      if (uVar1 == 5) {
        iVar4 = FUN_0090d610(local_58,0,0xffffffffffffffff,"giant",5);
        bVar3 = iVar4 == 0;
      }
      else {
        bVar3 = false;
      }
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
    }
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_009e5b74(undefined8 param_1)

{
  bool bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = FUN_00e70b14();
  bVar1 = false;
  if (iVar4 == 0x12) {
    iVar4 = FUN_00e70b14(param_1);
    if (iVar4 != 1) {
      uVar5 = 0;
      do {
        sVar2 = FUN_00e70b1c(param_1,uVar5);
        if (9 < (ushort)(sVar2 - 0x30U)) {
          return false;
        }
        uVar5 = uVar5 + 1;
        iVar4 = FUN_00e70b14(param_1);
      } while (uVar5 < iVar4 - 1U);
    }
    iVar4 = FUN_00e70b14(param_1);
    uVar3 = FUN_00e70b1c(param_1,iVar4 + -1);
    bVar1 = false;
    if (0x2f < uVar3) {
      if ((0x39 < uVar3) && ((uVar3 | 0x20) != 0x78)) {
        return false;
      }
      uVar5 = FUN_00e70b1c(param_1,6);
      uVar6 = FUN_00e70b1c(param_1,7);
      uVar7 = FUN_00e70b1c(param_1,8);
      uVar8 = FUN_00e70b1c(param_1,9);
      bVar1 = false;
      if (((uVar6 & 0xffff) * 100 + (uVar5 & 0xffff) * 1000 + (uVar7 & 0xffff) * 10 +
          (uVar8 & 0xffff)) - 0xd7bc < 0x7e) {
        uVar5 = FUN_00e70b1c(param_1,10);
        uVar6 = FUN_00e70b1c(param_1,0xb);
        bVar1 = false;
        if (((uVar5 & 0xffff) * 10 + (uVar6 & 0xffff)) - 0x210 < 0xd) {
          uVar5 = FUN_00e70b1c(param_1,0xc);
          uVar6 = FUN_00e70b1c(param_1,0xd);
          bVar1 = ((uVar5 & 0xffff) * 10 + (uVar6 & 0xffff)) - 0x210 < 0x20;
        }
      }
    }
  }
  return bVar1;
}




void FUN_009e5d18(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e83560();
  FUN_00948cd8(param_1 + 3);
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c4970;
  param_1[3] = &PTR_FUN_027c49a8;
  FUN_00e84dac(param_1 + 8);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[8] = &PTR_FUN_027b99b0;
  FUN_00e84dac(param_1 + 0x14);
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xf0;
  param_1[0x14] = &PTR_FUN_027b99b0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  pcStack_40 = FUN_009e6604;
  local_48 = param_1;
  FUN_00f02e98(0x3dcccccd,&local_48,0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e5e00(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c4970;
  param_1[3] = &PTR_FUN_027c49a8;
  pcStack_50 = FUN_009e6604;
  local_58 = param_1;
  FUN_00f03390(&local_58);
  param_1[0x14] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    operator_delete((void *)param_1[0x1f]);
  }
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) {
    operator_delete((void *)param_1[0x1b]);
  }
  FUN_00e84dd8(param_1 + 0x14);
  param_1[8] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    operator_delete((void *)param_1[0x13]);
  }
  if ((*(byte *)(param_1 + 0xd) & 1) != 0) {
    operator_delete((void *)param_1[0xf]);
  }
  FUN_00e84dd8(param_1 + 8);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00948d58(param_1 + 3);
  FUN_00e835e0(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e5f14(long param_1)

{
  FUN_009e5e00(param_1 + -0x18);
  return;
}




void FUN_009e5f1c(void *param_1)

{
  FUN_009e5e00();
  operator_delete(param_1);
  return;
}




void FUN_009e5f40(long param_1)

{
  FUN_009e5e00((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_009e5f68(undefined8 param_1)

{
  FUN_009e5f8c();
  FUN_009e624c(param_1);
  return;
}




void FUN_009e5f8c(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 local_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  byte local_80 [16];
  void *local_70;
  undefined4 local_68;
  char local_64;
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e84e74(param_1 + 0x40);
  if ((uVar3 & 1) == 0) goto LAB_009e6220;
  pthread_mutex_lock(DAT_0312fcf8);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x5d);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x5d) >> 0x18);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x55) >> 0x18);
  local_a0 = *(undefined8 *)(param_1 + 0x48);
  uStack_98 = (undefined5)*(undefined8 *)(param_1 + 0x50);
  local_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x28);
  local_a8 = &PTR_FUN_027b99b0;
  FUN_008fcdb8(local_80,param_1 + 0x68);
  local_64 = *(char *)(param_1 + 0x84);
  local_68 = *(undefined4 *)(param_1 + 0x80);
  FUN_008fcdb8(local_60,param_1 + 0x88);
  local_a0 = 0;
  uStack_98 = 0;
  local_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  pthread_mutex_unlock(DAT_0312fcf8);
  uVar3 = FUN_00e84e5c(&local_a8);
  if ((uVar3 & 1) != 0) {
    if (local_64 == '\0') {
      uVar8 = (ulong)(local_60[0] >> 1);
      uVar3 = uVar8;
      if ((local_60[0] & 1) != 0) {
        uVar3 = local_58;
      }
      if (uVar3 == 0x16) {
        iVar2 = FUN_0090d610(local_60,0,0xffffffffffffffff,"duplicate_phone_number",0x16);
        if (iVar2 != 0) {
          uVar8 = (ulong)(local_60[0] >> 1);
          goto LAB_009e60f4;
        }
        uVar4 = FUN_00e6ce7c("GOVERNMENTID_DIALOG_TITLE_REGISTRATION_FAILED",0);
        pcVar6 = "GOVERNMENTID_DIALOG_TEXT_DUPE_PHONE_NUMBER";
      }
      else {
LAB_009e60f4:
        uVar3 = uVar8;
        if ((local_60[0] & 1) != 0) {
          uVar3 = local_58;
        }
        if (uVar3 == 0x10) {
          iVar2 = FUN_0090d610(local_60,0,0xffffffffffffffff,"player_too_young",0x10);
          if (iVar2 == 0) {
            uVar4 = FUN_00e6ce7c("GOVERNMENTID_DIALOG_TITLE_REGISTRATION_FAILED",0);
            pcVar6 = "GOVERNMENTID_DIALOG_TEXT_TOO_YOUNG";
            goto LAB_009e61c0;
          }
          uVar8 = (ulong)(local_60[0] >> 1);
        }
        if ((local_60[0] & 1) != 0) {
          uVar8 = local_58;
        }
        if ((uVar8 != 10) ||
           (iVar2 = FUN_0090d610(local_60,0,0xffffffffffffffff,"invalid_id",10), iVar2 != 0))
        goto LAB_009e61f4;
        uVar4 = FUN_00e6ce7c("GOVERNMENTID_DIALOG_TITLE_REGISTRATION_FAILED",0);
        pcVar6 = "GOVERNMENTID_DIALOG_TEXT_INVALID_ID";
      }
LAB_009e61c0:
      uVar5 = FUN_00e6ce7c(pcVar6,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar4,uVar5,uVar7,0,0);
    }
    else {
      uVar4 = FUN_00e6ce7c("MAIN_PROFILE_REG_STATUS_SUCCESS",0);
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar4,&DAT_03210450,uVar5,0,0);
      *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfc | 2;
      FUN_009e652c(param_1 + 0x30,param_1);
    }
  }
LAB_009e61f4:
  local_a8 = &PTR_FUN_027b99b0;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  FUN_00e84dd8(&local_a8);
LAB_009e6220:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

