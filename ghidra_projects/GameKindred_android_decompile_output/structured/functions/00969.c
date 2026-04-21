// functions/00969 — 21 functions
#include "libGameKindred.h"




void FUN_00969100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00acd498(param_1,param_4,param_5);
  return;
}




void FUN_0096910c(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 0x2e) & 1) != 0) {
    operator_delete((void *)param_1[0x30]);
  }
  if ((*(byte *)(param_1 + 0x2b) & 1) != 0) {
    operator_delete((void *)param_1[0x2d]);
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    operator_delete((void *)param_1[0x2a]);
  }
  if ((*(byte *)(param_1 + 0x25) & 1) != 0) {
    operator_delete((void *)param_1[0x27]);
  }
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
    operator_delete((void *)param_1[0x24]);
  }
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    operator_delete((void *)param_1[0x21]);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    operator_delete((void *)param_1[0x1e]);
  }
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) {
    operator_delete((void *)param_1[0x1b]);
  }
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    operator_delete((void *)param_1[0x18]);
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15]);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    operator_delete((void *)param_1[0x13]);
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
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




undefined8 FUN_00969248(void)

{
  return DAT_02c7ed78;
}




bool FUN_00969254(void)

{
  return DAT_02c7ed78 != 0;
}




void FUN_00969268(uint *param_1,long param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  
  uVar2 = *param_1;
  iVar3 = (int)((ulong)((long)param_3 - param_2) >> 3);
  if (uVar2 != iVar3 * -0x49249249) {
    pbVar6 = (byte *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x38);
    lVar1 = (long)pbVar6 - (long)param_3;
    lVar5 = param_2;
    if (lVar1 != 0) {
      do {
        FUN_008fce60(lVar5,param_3);
        FUN_008fce60(lVar5 + 0x18,param_3 + 0x18);
        pbVar4 = param_3 + 0x30;
        param_3 = param_3 + 0x38;
        *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)pbVar4;
        lVar5 = lVar5 + 0x38;
      } while (param_3 != pbVar6);
      uVar2 = *param_1;
      pbVar6 = (byte *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x38);
    }
    pbVar4 = (byte *)(param_2 + ((lVar1 >> 3) * 0xb6db6db7 & 0xffffffffU) * 0x38);
    if (pbVar4 != pbVar6) {
      do {
        if ((pbVar4[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x28));
        }
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x10));
        }
        pbVar4 = pbVar4 + 0x38;
      } while (pbVar6 != pbVar4);
      uVar2 = *param_1;
    }
    *param_1 = uVar2 + iVar3 * 0x49249249;
    return;
  }
  FUN_0095132c(param_1,1);
  return;
}




void FUN_009693a0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_0096943c(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[4];
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x30;
  *(undefined8 *)(lVar2 + -8) = param_2[5];
  *(undefined8 *)(lVar2 + -0x10) = uVar5;
  uVar5 = param_2[2];
  *(undefined8 *)(lVar2 + -0x18) = param_2[3];
  *(undefined8 *)(lVar2 + -0x20) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar2 + -0x28) = param_2[1];
  *(undefined8 *)(lVar2 + -0x30) = uVar5;
  return;
}




void FUN_0096943c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x30);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x30;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[4];
        lVar3 = lVar3 + -0x30;
        puVar4[5] = puVar2[5];
        puVar4[4] = uVar5;
        uVar5 = puVar2[2];
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 6;
        puVar2 = puVar2 + 6;
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




void FUN_009694d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_027bc7d0;
  param_1[4] = 0;
  param_1[3] = param_1 + 4;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}




void FUN_00969500(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_027bc7d0;
  plVar5 = (long *)param_1[3];
  while (plVar5 != param_1 + 4) {
    pvVar4 = (void *)plVar5[7];
    if (pvVar4 != (void *)0x0) {
      FUN_0099cedc(pvVar4);
      operator_delete(pvVar4);
    }
    plVar5[7] = 0;
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar2 = plVar5 + 2;
      bVar1 = *(long **)*plVar2 != plVar5;
      plVar5 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar3);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00969ce8(param_1 + 3,param_1[4]);
  FUN_00969c70(param_1 + 1,1);
  return;
}




void FUN_009695e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9695e4);
  (*pcVar1)();
}




void FUN_009695e4(long *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  void *pvVar9;
  long lVar10;
  byte local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = (**(code **)(*param_1 + 0x18))();
  uVar6 = 0;
  if ((uVar5 & 1) != 0) {
    if ((int)param_1[1] != 0) {
      lVar10 = 0;
      uVar5 = 0;
      do {
        lVar7 = FUN_00969d44(param_1 + 3,param_1[2] + lVar10 + 0x18);
        if (lVar7 == 0) {
          FUN_009697c8(local_b8,param_1 + 6,".");
          lVar7 = param_1[2] + lVar10;
          uVar1 = (ulong)(*(byte *)(lVar7 + 0x18) >> 1);
          lVar4 = lVar7 + 0x19;
          if ((*(byte *)(lVar7 + 0x18) & 1) != 0) {
            uVar1 = *(ulong *)(lVar7 + 0x20);
            lVar4 = *(long *)(lVar7 + 0x28);
          }
          puVar8 = (ulong *)FUN_0090de84(local_b8,lVar4,uVar1);
          local_90 = (void *)puVar8[2];
          uStack_98 = puVar8[1];
          local_a0 = *puVar8;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          FUN_008fcdb8(local_80,&local_a0);
          if ((local_a0 & 1) != 0) {
            operator_delete(local_90);
          }
          if ((local_b8[0] & 1) != 0) {
            operator_delete(local_a8);
          }
          pvVar9 = operator_new(0x20);
          pvVar2 = (void *)((ulong)local_80 | 1);
          if ((local_80[0] & 1) != 0) {
            pvVar2 = local_70;
          }
          FUN_0099ceac(pvVar9,pvVar2,1);
          local_a0 = param_1[2] + lVar10 + 0x18;
          lVar7 = FUN_00969e3c(param_1 + 3,local_a0,&DAT_01b96a78,&local_a0,local_b8);
          *(void **)(lVar7 + 0x38) = pvVar9;
          if ((local_80[0] & 1) != 0) {
            operator_delete(local_70);
          }
        }
        uVar5 = uVar5 + 1;
        lVar10 = lVar10 + 0x78;
      } while (uVar5 < *(uint *)(param_1 + 1));
    }
    FUN_008fa54c(local_80,&DAT_01e277f2);
    FUN_009698b0(param_1,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    uVar6 = 1;
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}




void FUN_009697c8(ulong *param_1,byte *param_2,char *param_3)

{
  size_t sVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 & 1) == 0) {
    __n = (size_t)(*param_2 >> 1);
    sVar1 = strlen(param_3);
    param_2 = param_2 + 1;
  }
  else {
    __n = *(size_t *)(param_2 + 8);
    sVar1 = strlen(param_3);
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar2 = __n + sVar1;
  if (uVar2 < 0xfffffffffffffff0) {
    if (uVar2 < 0x17) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
    }
    else {
      uVar2 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar2);
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar2 | 1;
    }
    if (__n != 0) {
      memcpy(__dest,param_2,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    FUN_0090de84(param_1,param_3,sVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_009698b0(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  byte *__s2;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong local_108 [2];
  void *local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (*(int *)(param_1 + 8) != 0) {
    uVar14 = 0;
    do {
      lVar13 = *(long *)(param_1 + 0x10);
      bVar3 = *param_2;
      lVar11 = lVar13 + uVar14 * 0x78;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      pbVar1 = (byte *)(lVar11 + 0x18);
      if (__n == 0) {
LAB_009699c4:
        lVar7 = FUN_0096a06c(param_1 + 0x18,pbVar1);
        if (param_1 + 0x20 != lVar7) {
          uVar9 = *(undefined8 *)(lVar7 + 0x38);
          lVar7 = param_1 + 0x31;
          if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
            lVar7 = *(long *)(param_1 + 0x40);
          }
          if ((*pbVar1 & 1) == 0) {
            lVar11 = lVar11 + 0x19;
          }
          else {
            lVar11 = *(long *)(lVar13 + uVar14 * 0x78 + 0x28);
          }
          FUN_00969b40(auStack_f0,"%s_%s",lVar7,lVar11);
          FUN_008fa54c(local_108,auStack_f0);
          lVar11 = FUN_00939be8(local_108);
          if ((local_108[0] & 1) != 0) {
            operator_delete(local_f8);
          }
          lVar13 = *(long *)(param_1 + 0x10);
          if (*(int *)(lVar13 + uVar14 * 0x78 + 8) == 0) {
            iVar6 = 0;
          }
          else {
            uVar12 = 0;
            iVar6 = 0;
            lVar7 = 0x438;
            do {
              lVar10 = *(long *)(lVar13 + uVar14 * 0x78 + 0x10);
              local_108[0] = 0xffffffffffffffff;
              bVar3 = *(byte *)(lVar10 + lVar7);
              if ((bVar3 & 1) == 0) {
                if (bVar3 >> 1 != 0) {
LAB_00969a80:
                  if ((bVar3 & 1) == 0) {
                    lVar13 = lVar10 + lVar7 + 1;
                  }
                  else {
                    lVar13 = *(long *)(lVar10 + lVar7 + 0x10);
                  }
                  FUN_00e6acac(lVar13,&DAT_01b95673,local_108);
                  lVar13 = *(long *)(param_1 + 0x10);
                }
              }
              else if (*(long *)(lVar10 + lVar7 + 8) != 0) goto LAB_00969a80;
              uVar12 = uVar12 + 1;
              if (lVar11 < (long)local_108[0]) {
                iVar6 = iVar6 + 1;
              }
              lVar7 = lVar7 + 0x598;
            } while (uVar12 < *(uint *)(lVar13 + uVar14 * 0x78 + 8));
          }
          FUN_0099cf94(uVar9,iVar6);
        }
      }
      else {
        bVar4 = *pbVar1;
        sVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar2 = *(size_t *)(lVar13 + uVar14 * 0x78 + 0x20);
        }
        if (__n == sVar2) {
          __s2 = *(byte **)(lVar13 + uVar14 * 0x78 + 0x28);
          if ((bVar4 & 1) == 0) {
            __s2 = (byte *)(lVar11 + 0x19);
          }
          if ((bVar3 & 1) == 0) {
            lVar7 = -(ulong)(bVar3 >> 1);
            pbVar8 = param_2;
            do {
              pbVar8 = pbVar8 + 1;
              if (*pbVar8 != *__s2) goto LAB_00969af8;
              lVar7 = lVar7 + 1;
              __s2 = __s2 + 1;
            } while (lVar7 != 0);
          }
          else {
            iVar6 = memcmp(*(void **)(param_2 + 0x10),__s2,__n);
            if (iVar6 != 0) goto LAB_00969af8;
          }
          goto LAB_009699c4;
        }
      }
LAB_00969af8:
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_1 + 8));
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00969b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00e6a9d0(param_1,0x80,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00969be0(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0096a1d4(param_2,(int *)(param_1 + 8));
    return 1;
  }
  return 0;
}




void FUN_00969c14(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 8) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 8) * 0x78;
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x78;
        puVar2 = puVar2 + 0xf;
      } while (lVar1 != 0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




void FUN_00969c70(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x78;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x78;
        puVar2 = puVar2 + 0xf;
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




void FUN_00969ce8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00969ce8(param_1,*param_2);
    FUN_00969ce8(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




undefined8 FUN_00969d44(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(plVar5 + 4);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = plVar5[5];
      }
      __n = uVar1;
      if (uVar2 <= uVar1) {
        __n = uVar2;
      }
      if (__n == 0) {
LAB_00969dd0:
        if (uVar1 <= uVar2) {
          if (__n != 0) {
            __s2 = (void *)plVar5[6];
            if ((bVar3 & 1) == 0) {
              __s2 = (void *)((long)plVar5 + 0x21);
            }
            goto LAB_00969de8;
          }
LAB_00969e04:
          if (uVar2 <= uVar1) {
            return 1;
          }
LAB_00969e0c:
          plVar5 = plVar5 + 1;
        }
      }
      else {
        __s2 = (void *)plVar5[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar5 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) goto LAB_00969dd0;
        if (-1 < iVar4) {
LAB_00969de8:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00969e04;
          if (-1 < iVar4) {
            return 1;
          }
          goto LAB_00969e0c;
        }
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return 0;
}




void * FUN_00969e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00969eec(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined8 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_0096a018(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_00969eec(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_00969f50:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00969f6c;
          if (iVar4 < 0) goto LAB_00969f74;
          goto LAB_00969fec;
        }
LAB_00969fd8:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00969fd8;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00969f50;
      }
LAB_00969f6c:
      if (uVar2 <= uVar1) break;
LAB_00969f74:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00969fec:
    *param_2 = plVar7;
  }
  return plVar5;
}

