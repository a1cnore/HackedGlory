// functions/01995 — 28 functions
#include "libGameKindred.h"




undefined4 FUN_01995118(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_01995120(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void thunk_FUN_01995134(undefined4 *param_1)

{
  *param_1 = 0;
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
  }
  *(undefined8 *)(param_1 + 2) = 0;
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 6));
  }
  *(undefined8 *)(param_1 + 6) = 0;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 4));
  }
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}




void FUN_01995134(undefined4 *param_1)

{
  *param_1 = 0;
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
  }
  *(undefined8 *)(param_1 + 2) = 0;
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 6));
  }
  *(undefined8 *)(param_1 + 6) = 0;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 4));
  }
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}




long FUN_01995184(long param_1,int param_2)

{
  long lVar1;
  
  if (*(ushort *)(param_1 + 2) != 0) {
    lVar1 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 8) + lVar1 * 4) == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < (uint)*(ushort *)(param_1 + 2));
  }
  return 0xffff;
}




ulong FUN_019951b4(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_01995208(param_2);
  if ((ulong)*(ushort *)(param_1 + 2) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 8) + uVar2 * 4) == iVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_1 + 2));
  }
  return 0xffff;
}




undefined8 FUN_01995208(char *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar1 = FUN_00e6a474(param_1);
    uVar2 = FUN_0091ed5c(param_1,uVar1,0x12345678);
    return uVar2;
  }
  return 0;
}




void FUN_01995258(long param_1,ushort param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  
  uVar1 = 0;
  if (param_2 != 0xffff) {
    uVar4 = param_2;
    do {
      uVar4 = *(ushort *)(*(long *)(param_1 + 0x10) + (ulong)uVar4 * 2);
      uVar1 = uVar1 + 1;
    } while (uVar4 != 0xffff);
    if (param_2 != 0xffff) {
      lVar2 = *(long *)(param_1 + 0x10);
      uVar3 = (ulong)uVar1;
      do {
        uVar3 = (ulong)((int)uVar3 - 1);
        *(ushort *)(param_3 + (uVar3 & 0xffff) * 2) = param_2;
        param_2 = *(ushort *)(lVar2 + (ulong)param_2 * 2);
      } while (param_2 != 0xffff);
    }
  }
  return;
}




void FUN_019952c4(undefined2 *param_1,undefined8 param_2)

{
  undefined2 *__src;
  long lVar1;
  int iVar2;
  void *pvVar3;
  void *__dest;
  void *__dest_00;
  float *pfVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined2 *local_88;
  ulong local_80 [2];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80[0] = 0;
  local_80[1] = 0;
  local_70 = (void *)0x0;
  FUN_00f1c904(param_2,local_80);
  pvVar3 = (void *)((ulong)local_80 | 1);
  if ((local_80[0] & 1) != 0) {
    pvVar3 = local_70;
  }
  iVar2 = FUN_00f1c7b0(pvVar3,1);
  if (iVar2 != -1) {
    local_88 = (undefined2 *)0x0;
    FUN_00f1c844(iVar2,&local_88);
    FUN_00f1c7c8(iVar2);
    __src = local_88 + 2;
    *param_1 = *local_88;
    uVar5 = (ulong)(ushort)local_88[1];
    param_1[1] = local_88[1];
    pvVar3 = operator_new__(uVar5 << 2);
    *(void **)(param_1 + 4) = pvVar3;
    __dest = operator_new__(uVar5 << 1);
    *(void **)(param_1 + 8) = __dest;
    __dest_00 = operator_new__(uVar5 * 0x30);
    *(void **)(param_1 + 0xc) = __dest_00;
    memmove(pvVar3,__src,uVar5 << 2);
    memmove(__dest,__src + uVar5 * 2,uVar5 << 1);
    memmove(__dest_00,__src + uVar5 * 2 + uVar5,uVar5 * 0x30);
    FUN_01990f10(__dest_00,__dest_00,param_1);
    if (param_1[1] != 0) {
      uVar5 = 0;
      pfVar4 = (float *)(*(long *)(param_1 + 0xc) + 0x18);
      uVar6 = NEON_fmov(0x3f800000,4);
      do {
        fVar11 = pfVar4[-6];
        fVar12 = pfVar4[-5];
        fVar13 = pfVar4[-4];
        fVar14 = pfVar4[-3];
        fVar7 = 0.0;
        fVar8 = 0.0;
        fVar17 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
        fVar10 = 0.0;
        fVar9 = 0.0;
        if (1.1920929e-07 < fVar17) {
          fVar17 = 1.0 / fVar17;
          fVar10 = -fVar17;
          fVar7 = fVar11 * fVar10;
          fVar8 = fVar12 * fVar10;
          fVar10 = fVar13 * fVar10;
          fVar9 = fVar14 * fVar17;
        }
        fVar17 = pfVar4[-2];
        fVar15 = pfVar4[-1];
        fVar12 = *pfVar4;
        fVar13 = pfVar4[1];
        pfVar4[-6] = fVar7;
        pfVar4[-5] = fVar8;
        *(ulong *)(pfVar4 + 2) =
             CONCAT44((float)((ulong)uVar6 >> 0x20) /
                      (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20),
                      (float)uVar6 / (float)*(undefined8 *)(pfVar4 + 2));
        pfVar4[4] = 1.0 / pfVar4[4];
        fVar16 = (fVar8 * fVar12 + fVar9 * fVar17 + fVar7 * fVar13) - fVar10 * fVar15;
        fVar11 = fVar10 * fVar17 + fVar8 * fVar13 + (fVar9 * fVar15 - fVar7 * fVar12);
        fVar14 = fVar10 * fVar13 + ((fVar7 * fVar15 + fVar9 * fVar12) - fVar8 * fVar17);
        fVar17 = ((fVar9 * fVar13 - fVar7 * fVar17) - fVar8 * fVar15) - fVar10 * fVar12;
        pfVar4[-4] = fVar10;
        pfVar4[-3] = fVar9;
        pfVar4[1] = 0.0;
        pfVar4[-2] = -(((fVar9 * fVar16 - fVar17 * fVar7) - fVar11 * fVar10) + fVar14 * fVar8);
        pfVar4[-1] = -((fVar9 * fVar11 + (fVar16 * fVar10 - fVar17 * fVar8)) - fVar14 * fVar7);
        *pfVar4 = -(fVar9 * fVar14 + (fVar17 * -fVar10 - fVar16 * fVar8) + fVar11 * fVar7);
        pfVar4[5] = 0.0;
        uVar5 = uVar5 + 1;
        pfVar4 = pfVar4 + 0xc;
      } while (uVar5 < (ushort)param_1[1]);
    }
    FUN_00f1c874(local_88);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019955d4(long param_1)

{
  FUN_019957f4(param_1,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_019955dc(long param_1)

{
  FUN_01995850(param_1,*(undefined8 *)(param_1 + 8));
  return;
}




undefined4 * FUN_019955e4(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_78;
  byte local_70 [8];
  void *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,param_1);
  puVar2 = (undefined8 *)FUN_019958ac(&DAT_03214f40,local_50);
  if (puVar2 == &DAT_03214f48) {
    puVar3 = operator_new(0x20);
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0;
    *(undefined8 *)(puVar3 + 2) = 0;
    FUN_019952c4(puVar3,param_1);
    FUN_008fcdb8(&local_78,local_50);
    local_60 = 1;
    local_58 = puVar3;
    FUN_01995a14(&DAT_03214f40,&local_78,&local_78);
    if (((byte)local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    local_78 = puVar3;
    FUN_008fcdb8(local_70,local_50);
    FUN_01995c48(&DAT_03214f58,&local_78,&local_78);
    if ((local_70[0] & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
  }
  else {
    puVar3 = (undefined4 *)puVar2[8];
    *(int *)(puVar2 + 7) = *(int *)(puVar2 + 7) + 1;
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01995718(ulong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  if (DAT_03214f60 != (undefined8 *)0x0) {
    puVar3 = &DAT_03214f60;
    puVar2 = DAT_03214f60;
    do {
      if ((ulong)puVar2[4] >= param_1) {
        puVar3 = puVar2;
      }
      puVar2 = (undefined8 *)puVar2[(ulong)puVar2[4] < param_1];
    } while (puVar2 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar3 != &DAT_03214f60) && ((ulong)puVar3[4] <= param_1)) &&
       (puVar2 = (undefined8 *)FUN_019958ac(&DAT_03214f40,puVar3 + 5), puVar2 != &DAT_03214f48)) {
      iVar1 = *(int *)(puVar2 + 7);
      *(int *)(puVar2 + 7) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        pvVar4 = (void *)puVar2[8];
        if (pvVar4 != (void *)0x0) {
          FUN_01995134(pvVar4);
          operator_delete(pvVar4);
        }
        FUN_01995d74(&DAT_03214f40,puVar2);
        FUN_01995e18(&DAT_03214f58,puVar3);
        return;
      }
    }
  }
  return;
}




void FUN_019957f4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_019957f4(param_1,*param_2);
    FUN_019957f4(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_01995850(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_01995850(param_1,*param_2);
    FUN_01995850(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      operator_delete((void *)param_2[7]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




undefined8 * FUN_019958ac(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_01995964(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_01995964(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_019959d8:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_019959d8;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void * FUN_01995a14(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_01995ac8(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x48);
    FUN_008fcdb8((long)pvVar4 + 0x20,param_3);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)((long)pvVar4 + 0x40) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)((long)pvVar4 + 0x38) = uVar5;
    puVar3 = (undefined8 *)FUN_01995bf4(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_01995ac8(long param_1,undefined8 *param_2,byte *param_3)

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
LAB_01995b2c:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_01995b48;
          if (iVar4 < 0) goto LAB_01995b50;
          goto LAB_01995bc8;
        }
LAB_01995bb4:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_01995bb4;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_01995b2c;
      }
LAB_01995b48:
      if (uVar2 <= uVar1) break;
LAB_01995b50:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_01995bc8:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_01995bf4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined1  [16] FUN_01995c48(long param_1,ulong *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < (ulong)puVar3[4]) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_01995cc0;
      }
      if (*param_2 <= (ulong)puVar3[4]) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_01995cc0:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x40);
    *(undefined8 *)((long)pvVar5 + 0x20) = *param_3;
    FUN_008fcdb8((long)pvVar5 + 0x28,param_3 + 1);
    FUN_01995d20(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




void FUN_01995d20(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_01995d74(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  if ((*(byte *)((long)param_2 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_2 + 0x30));
  }
  operator_delete(param_2);
  return plVar3;
}




long * FUN_01995e18(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  if ((*(byte *)((long)param_2 + 0x28) & 1) != 0) {
    operator_delete(*(void **)((long)param_2 + 0x38));
  }
  operator_delete(param_2);
  return plVar3;
}




void FUN_01995ebc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  FUN_01996d78(pvVar1,0x200,0x800);
  *param_1 = pvVar1;
  return;
}




void FUN_01995ef4(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_01996e00(*param_1,0);
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_01996dbc(pvVar1);
    operator_delete(pvVar1);
  }
  *param_1 = 0;
  return;
}




void FUN_01995f38(long *param_1)

{
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffff0000;
  *(uint *)(*param_1 + 0x10) = (uint)*(ushort *)(*param_1 + 0x10);
  return;
}




void FUN_01995f58(long *param_1,uint param_2,undefined8 *param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  uVar1 = *(uint *)((long *)*param_1 + 2);
  lVar4 = *(long *)*param_1;
  lVar5 = ((ulong)uVar1 & 0xffff) * 8;
  *(uint *)(lVar4 + lVar5) = *(uint *)(lVar4 + lVar5) & 0xfffff000 | param_2 & 0xfff;
  uVar3 = uVar1 >> 0x10;
  uVar2 = *(uint *)(*(long *)*param_1 + lVar5);
  *(uint *)(*(long *)*param_1 + lVar5) = uVar2 & 0xf0000000 | uVar2 & 0xfff | uVar3 << 0xc;
  *(uint *)(*(long *)*param_1 + lVar5) =
       *(uint *)(*(long *)*param_1 + lVar5) & 0x8fffffff | 0x40000000;
  *(uint *)(*(long *)*param_1 + lVar5) =
       *(uint *)(*(long *)*param_1 + lVar5) & 0x7fffffff | param_4 << 0x1f;
  plVar6 = (long *)*param_1;
  *(undefined4 *)(*plVar6 + (ulong)(ushort)uVar1 * 8 + 4) = param_5;
  if ((param_4 & 1) == 0) {
    *(undefined8 **)(plVar6[1] + (ulong)uVar3 * 4) = param_3;
  }
  else {
    *(undefined8 *)(plVar6[1] + (ulong)uVar3 * 4) = *param_3;
  }
  *(short *)(*param_1 + 0x10) = (short)*(undefined4 *)(*param_1 + 0x10) + 1;
  *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 0x20000;
  return;
}

