// functions/00914 — 22 functions
#include "libGameKindred.h"




undefined4 FUN_00914030(long param_1)

{
  return *(undefined4 *)(param_1 + 0x280);
}




ulong FUN_00914038(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *__s1;
  ulong uVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_1 + 0x280);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_1 + 0x288);
    uVar8 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = lVar9 + uVar8 * 0x188;
      bVar3 = *(byte *)(lVar5 + 8);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(lVar5 + 0x10);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar9 + uVar8 * 0x188 + 0x18);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar5 + 9);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) goto LAB_00914104;
          pbVar6 = (byte *)(lVar5 + 9);
          lVar5 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (*pbVar6 == *pbVar7) {
            pbVar6 = pbVar6 + 1;
            lVar5 = lVar5 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar5 == 0) goto LAB_00914104;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00914104;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  uVar8 = 0xffffffff;
LAB_00914104:
  return uVar8 & 0xffffffff;
}




long FUN_0091411c(long param_1,uint param_2)

{
  return *(long *)(param_1 + 0x288) + (ulong)param_2 * 0x188;
}




long FUN_0091412c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x280) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_00e70b34(*(long *)(param_1 + 0x288) + lVar2 + 0x20,param_2);
      if ((uVar1 & 1) != 0) {
        return *(long *)(param_1 + 0x288) + lVar2;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x188;
    } while (uVar3 < *(uint *)(param_1 + 0x280));
  }
  return 0;
}




long FUN_009141a0(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *__s1;
  long lVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x280);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(param_1 + 0x288);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = lVar8 + uVar9 * 0x188;
      bVar3 = *(byte *)(lVar5 + 8);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(lVar5 + 0x10);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar8 + uVar9 * 0x188 + 0x18);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar5 + 9);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
LAB_00914270:
            return lVar8 + (uVar9 & 0xffffffff) * 0x188;
          }
          pbVar6 = (byte *)(lVar5 + 9);
          lVar5 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (*pbVar6 == *pbVar7) {
            pbVar6 = pbVar6 + 1;
            lVar5 = lVar5 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar5 == 0) goto LAB_00914270;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00914270;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return 0;
}




void FUN_00914290(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e815e8(param_2,param_1 + 0x1b0);
    FUN_00904750();
    FUN_0096589c(param_1 + 0x30,1);
    if (0 < *(int *)(param_1 + 0x2b8)) {
      FUN_0099cf3c(param_1 + 0x2a0,0xffffffff);
      return;
    }
  }
  return;
}




void FUN_009142f4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e81620(param_2,param_1 + 0x210);
    FUN_0096589c(param_1 + 0x30,1);
    if (0 < *(int *)(param_1 + 0x2b8)) {
      FUN_0099cf3c(param_1 + 0x2a0,0xffffffff);
      return;
    }
  }
  return;
}




void FUN_00914354(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  void *pvVar13;
  char *pcVar14;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar8 = 0;
  if (((*param_3 ^ *param_2) & 0x1ffffffff) != 0) goto LAB_00914ab4;
  bVar3 = (byte)param_2[1];
  bVar4 = (byte)param_3[1];
  uVar8 = 0;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = param_2[2];
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = param_3[2];
  }
  if (sVar1 != sVar2) goto LAB_00914ab4;
  pvVar13 = (void *)param_2[3];
  pcVar14 = (char *)param_3[3];
  if ((bVar3 & 1) == 0) {
    pvVar13 = (void *)((long)param_2 + 9);
  }
  if ((bVar4 & 1) == 0) {
    pcVar14 = (char *)((long)param_3 + 9);
  }
  if ((bVar3 & 1) == 0) {
    if (sVar1 != 0) {
      pcVar11 = (char *)((long)param_2 + 9);
      lVar12 = -(ulong)(bVar3 >> 1);
      do {
        if (*pcVar11 != *pcVar14) goto LAB_00914ab0;
        pcVar11 = pcVar11 + 1;
        lVar12 = lVar12 + 1;
        pcVar14 = pcVar14 + 1;
      } while (lVar12 != 0);
    }
  }
  else if (sVar1 != 0) {
    iVar7 = memcmp(pvVar13,pcVar14,sVar1);
    uVar8 = 0;
    if (iVar7 != 0) goto LAB_00914ab4;
  }
  uVar6 = FUN_00e70b14(param_3 + 4);
  uVar9 = FUN_00e70ca0(param_2 + 4,param_3 + 4,uVar6);
  uVar8 = 0;
  if ((uVar9 & 1) == 0) goto LAB_00914ab4;
  uVar6 = FUN_00e70b14(param_3 + 6);
  uVar9 = FUN_00e70ca0(param_2 + 6,param_3 + 6,uVar6);
  uVar8 = 0;
  if ((uVar9 & 1) == 0) goto LAB_00914ab4;
  uVar6 = FUN_00e70b14(param_3 + 8);
  uVar9 = FUN_00e70ca0(param_2 + 8,param_3 + 8,uVar6);
  uVar8 = 0;
  if ((uVar9 & 1) == 0) goto LAB_00914ab4;
  bVar3 = (byte)param_2[10];
  bVar4 = (byte)param_3[10];
  uVar8 = 0;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = param_2[0xb];
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = param_3[0xb];
  }
  if (sVar1 != sVar2) goto LAB_00914ab4;
  pvVar13 = (void *)param_2[0xc];
  pcVar14 = (char *)param_3[0xc];
  if ((bVar3 & 1) == 0) {
    pvVar13 = (void *)((long)param_2 + 0x51);
  }
  if ((bVar4 & 1) == 0) {
    pcVar14 = (char *)((long)param_3 + 0x51);
  }
  if ((bVar3 & 1) == 0) {
    if (sVar1 != 0) {
      pcVar11 = (char *)((long)param_2 + 0x51);
      lVar12 = -(ulong)(bVar3 >> 1);
      do {
        if (*pcVar11 != *pcVar14) goto LAB_00914ab0;
        pcVar11 = pcVar11 + 1;
        lVar12 = lVar12 + 1;
        pcVar14 = pcVar14 + 1;
      } while (lVar12 != 0);
    }
  }
  else if (sVar1 != 0) {
    iVar7 = memcmp(pvVar13,pcVar14,sVar1);
    uVar8 = 0;
    if (iVar7 != 0) goto LAB_00914ab4;
  }
  uVar6 = FUN_00e70b14(param_3 + 0xd);
  uVar9 = FUN_00e70ca0(param_2 + 0xd,param_3 + 0xd,uVar6);
  uVar8 = 0;
  if ((uVar9 & 1) == 0) goto LAB_00914ab4;
  uVar6 = FUN_00e70b14(param_3 + 0xf);
  uVar9 = FUN_00e70ca0(param_2 + 0xf,param_3 + 0xf,uVar6);
  uVar8 = 0;
  if ((uVar9 & 1) == 0) goto LAB_00914ab4;
  bVar3 = (byte)param_2[0x11];
  bVar4 = (byte)param_3[0x11];
  uVar8 = 0;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = param_2[0x12];
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = param_3[0x12];
  }
  if (sVar1 != sVar2) goto LAB_00914ab4;
  pvVar13 = (void *)param_2[0x13];
  pcVar14 = (char *)param_3[0x13];
  if ((bVar3 & 1) == 0) {
    pvVar13 = (void *)((long)param_2 + 0x89);
  }
  if ((bVar4 & 1) == 0) {
    pcVar14 = (char *)((long)param_3 + 0x89);
  }
  if ((bVar3 & 1) == 0) {
    if (sVar1 != 0) {
      pcVar11 = (char *)((long)param_2 + 0x89);
      lVar12 = -(ulong)(bVar3 >> 1);
      do {
        if (*pcVar11 != *pcVar14) goto LAB_00914ab0;
        pcVar11 = pcVar11 + 1;
        lVar12 = lVar12 + 1;
        pcVar14 = pcVar14 + 1;
      } while (lVar12 != 0);
    }
  }
  else if (sVar1 != 0) {
    iVar7 = memcmp(pvVar13,pcVar14,sVar1);
    uVar8 = 0;
    if (iVar7 != 0) goto LAB_00914ab4;
  }
  uVar8 = 0;
  if (((((((double)param_2[0x14] != (double)param_3[0x14]) ||
         ((((*param_2 & 0xffff) == 2 || ((short)*param_3 == 2)) &&
          (uVar8 = 0, (uint)param_2[0x15] != (uint)param_3[0x15])))) ||
        (((uVar8 = 0, *(uint *)((long)param_2 + 0xac) != *(uint *)((long)param_3 + 0xac) ||
          (uVar8 = 0, (uint)param_2[0x16] != (uint)param_3[0x16])) ||
         (uVar8 = 0, (((uint)*param_3 ^ (uint)*param_2) & 0xff0000) != 0)))) ||
       ((uVar8 = 0, (uint)param_2[0x1d] != (uint)param_3[0x1d] ||
        (uVar8 = 0, *(uint *)((long)param_2 + 0xec) != *(uint *)((long)param_3 + 0xec))))) ||
      ((((uVar8 = 0, (uint)param_2[0x1e] != (uint)param_3[0x1e] ||
         ((((uVar8 = 0, *(float *)((long)param_2 + 0xf4) != *(float *)((long)param_3 + 0xf4) ||
            (uVar8 = 0, *(float *)(param_2 + 0x1f) != *(float *)(param_3 + 0x1f))) ||
           (uVar8 = 0, *(float *)((long)param_2 + 0xfc) != *(float *)((long)param_3 + 0xfc))) ||
          ((uVar8 = 0, *(float *)(param_2 + 0x20) != *(float *)(param_3 + 0x20) ||
           (uVar8 = 0, *(float *)((long)param_2 + 0x104) != *(float *)((long)param_3 + 0x104)))))))
        || ((uVar8 = 0, *(float *)(param_2 + 0x21) != *(float *)(param_3 + 0x21) ||
            ((uVar8 = 0, *(float *)((long)param_2 + 0x10c) != *(float *)((long)param_3 + 0x10c) ||
             (uVar8 = 0, param_2[0x22] != param_3[0x22])))))) ||
       ((((uVar8 = 0, (uint)param_2[0x17] != (uint)param_3[0x17] ||
          (((uVar8 = 0, *(uint *)((long)param_2 + 0xbc) != *(uint *)((long)param_3 + 0xbc) ||
            (uVar8 = 0, (uint)param_2[0x18] != (uint)param_3[0x18])) ||
           (uVar8 = 0, *(float *)((long)param_2 + 0xc4) != *(float *)((long)param_3 + 0xc4))))) ||
         (((uVar8 = 0, *(float *)(param_2 + 0x19) != *(float *)(param_3 + 0x19) ||
           (uVar8 = 0, *(float *)((long)param_2 + 0xcc) != *(float *)((long)param_3 + 0xcc))) ||
          (uVar8 = 0, *(float *)(param_2 + 0x1a) != *(float *)(param_3 + 0x1a))))) ||
        (((uVar8 = 0, *(float *)((long)param_2 + 0xd4) != *(float *)((long)param_3 + 0xd4) ||
          (uVar8 = 0, *(float *)(param_2 + 0x1b) != *(float *)(param_3 + 0x1b))) ||
         ((uVar8 = 0, *(float *)((long)param_2 + 0xdc) != *(float *)((long)param_3 + 0xdc) ||
          (((uVar8 = 0, param_2[0x1c] != param_3[0x1c] ||
            (uVar8 = 0, (uint)param_2[0x23] != (uint)param_3[0x23])) ||
           (uVar8 = 0, *(uint *)((long)param_2 + 0x11c) != *(uint *)((long)param_3 + 0x11c))))))))))
       ))) || (((uVar8 = 0, (uint)param_2[0x24] != (uint)param_3[0x24] ||
                (uVar8 = 0, *(float *)((long)param_2 + 0x124) != *(float *)((long)param_3 + 0x124)))
               || ((uVar8 = 0, *(float *)(param_2 + 0x25) != *(float *)(param_3 + 0x25) ||
                   (((uVar8 = 0, *(float *)((long)param_2 + 300) != *(float *)((long)param_3 + 300)
                     || (uVar8 = 0, *(float *)(param_2 + 0x26) != *(float *)(param_3 + 0x26))) ||
                    ((uVar8 = 0,
                     *(float *)((long)param_2 + 0x134) != *(float *)((long)param_3 + 0x134) ||
                     ((((uVar8 = 0, *(float *)(param_2 + 0x27) != *(float *)(param_3 + 0x27) ||
                        (uVar8 = 0,
                        *(float *)((long)param_2 + 0x13c) != *(float *)((long)param_3 + 0x13c))) ||
                       (uVar8 = 0, param_2[0x28] != param_3[0x28])) ||
                      (uVar8 = 0, (uint)param_2[0x29] != (uint)param_3[0x29]))))))))))))
  goto LAB_00914ab4;
  uVar8 = 0;
  if ((uint)param_2[0x2a] != (uint)param_3[0x2a]) goto LAB_00914ab4;
  if ((uint)param_2[0x2a] != 0) {
    lVar12 = 0;
    uVar9 = 0;
    do {
      thunk_FUN_00e7051c(&local_58,param_2[0x2b] + lVar12);
      thunk_FUN_00e7051c(&local_68,param_3[0x2b] + lVar12);
      uVar6 = FUN_00e70b14(&local_68);
      uVar10 = FUN_00e70ca0(&local_58,&local_68,uVar6);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      if ((uVar10 & 1) == 0) goto LAB_00914ab0;
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x10;
    } while (uVar9 < (uint)param_2[0x2a]);
  }
  uVar8 = 0;
  if ((uint)param_2[0x2c] != (uint)param_3[0x2c]) goto LAB_00914ab4;
  bVar3 = (byte)param_2[0x2d];
  bVar4 = (byte)param_3[0x2d];
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = param_2[0x2e];
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = param_3[0x2e];
  }
  if (sVar1 == sVar2) {
    pvVar13 = (void *)param_2[0x2f];
    pcVar14 = (char *)param_3[0x2f];
    if ((bVar3 & 1) == 0) {
      pvVar13 = (void *)((long)param_2 + 0x169);
    }
    if ((bVar4 & 1) == 0) {
      pcVar14 = (char *)((long)param_3 + 0x169);
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar11 = (char *)((long)param_2 + 0x169);
        lVar12 = -(ulong)(bVar3 >> 1);
        uVar8 = 1;
        do {
          if (*pcVar11 != *pcVar14) goto LAB_00914ab0;
          pcVar11 = pcVar11 + 1;
          pcVar14 = pcVar14 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0);
        goto LAB_00914ab4;
      }
    }
    else if ((sVar1 != 0) && (iVar7 = memcmp(pvVar13,pcVar14,sVar1), iVar7 != 0)) goto LAB_00914ab0;
    uVar8 = 1;
  }
  else {
LAB_00914ab0:
    uVar8 = 0;
  }
LAB_00914ab4:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}




undefined4 FUN_00914ae8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x290);
}




long FUN_00914af0(long param_1,uint param_2)

{
  return *(long *)(param_1 + 0x298) + (ulong)param_2 * 0x38;
}




long FUN_00914b00(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x290) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_00e70b34(*(long *)(param_1 + 0x298) + lVar2 + 0x20,param_2);
      if ((uVar1 & 1) != 0) {
        return *(long *)(param_1 + 0x298) + lVar2;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (uVar3 < *(uint *)(param_1 + 0x290));
  }
  return 0;
}




long FUN_00914b74(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *__s1;
  long lVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x290);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(param_1 + 0x298);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = lVar8 + uVar9 * 0x38;
      bVar3 = *(byte *)(lVar5 + 8);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(lVar5 + 0x10);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar8 + uVar9 * 0x38 + 0x18);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar5 + 9);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
LAB_00914c44:
            return lVar8 + (uVar9 & 0xffffffff) * 0x38;
          }
          pbVar6 = (byte *)(lVar5 + 9);
          lVar5 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (*pbVar6 == *pbVar7) {
            pbVar6 = pbVar6 + 1;
            lVar5 = lVar5 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar5 == 0) goto LAB_00914c44;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00914c44;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return 0;
}




void FUN_00914c64(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = FUN_00914b74(param_1,param_2 + 8);
  if ((lVar4 == 0) && (lVar4 = FUN_00913d4c(param_1,param_2 + 8), lVar4 == 0)) {
    piVar2 = (int *)(param_1 + 0x290);
    if (0x18 < *(uint *)(param_1 + 0x290)) {
      lVar4 = *(long *)(param_1 + 0x298) + (ulong)*(uint *)(param_1 + 0x290) * 0x38;
      if (*(void **)(lVar4 + -0x10) != (void *)0x0) {
        operator_delete__(*(void **)(lVar4 + -0x10));
        *(undefined8 *)(lVar4 + -0x18) = 0;
        *(undefined8 *)(lVar4 + -0x10) = 0;
      }
      if ((*(byte *)(lVar4 + -0x30) & 1) != 0) {
        operator_delete(*(void **)(lVar4 + -0x20));
      }
      *piVar2 = *piVar2 + -1;
    }
    FUN_0091681c(piVar2,*(undefined8 *)(param_1 + 0x298),param_2,param_2 + 0x38);
    if (DAT_02c091f8 != 0) {
      plVar3 = (long *)(DAT_02c091f8 + -8);
      while (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_00914d44(undefined8 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  FUN_00913b68(param_1,1);
  return;
}




void FUN_00914d58(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  FUN_00913b68(param_1 + -0x18,1);
  return;
}




void FUN_00914d70(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_00913b68(param_1,0);
  FUN_00e84dec(param_1 + 0x90);
  FUN_00e84dec(param_1 + 0xf0);
  FUN_00e84dec(param_1 + 0x150);
  FUN_00e84dec(param_1 + 0x1b0);
  FUN_00e84dec(param_1 + 0x210);
  lVar1 = *(long *)(param_1 + 0x278);
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 0x270) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x270) * 0x188;
      do {
        FUN_0091587c(lVar1);
        lVar2 = lVar2 + -0x188;
        lVar1 = lVar1 + 0x188;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 0x280) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x280) * 0x188;
      do {
        FUN_0091587c(lVar1);
        lVar2 = lVar2 + -0x188;
        lVar1 = lVar1 + 0x188;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  FUN_00914e9c(param_1 + 0x290,0);
  return;
}




void FUN_00914e2c(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x188;
      do {
        FUN_0091587c(lVar1);
        lVar2 = lVar2 + -0x188;
        lVar1 = lVar1 + 0x188;
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




void FUN_00914e9c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x28);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        if ((*(byte *)(puVar2 + -4) & 1) != 0) {
          operator_delete((void *)puVar2[-2]);
        }
        lVar1 = lVar1 + -0x38;
        puVar2 = puVar2 + 7;
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




void FUN_00914f28(long param_1)

{
  FUN_00914d70(param_1 + -0x18);
  return;
}




void FUN_00914f30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580b8();
  local_2c = 7;
  uVar3 = FUN_0095fc98(uVar2,&local_2c);
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_009658c8(param_1 + 0x30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00914f98(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_009580b8();
  if (*(int *)(lVar1 + 0x55dc) - 4U < 4) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0x55dc) != 8) {
      return;
    }
    uVar2 = 1;
  }
  FUN_00913b68(param_1,uVar2);
  return;
}




ulong FUN_00914ff4(double *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  double dVar17;
  undefined1 auVar18 [16];
  int local_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [8];
  int local_d0;
  undefined1 auStack_c8 [16];
  ulong local_b8;
  int local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  ulong uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    FUN_00916f0c(param_2,0);
    uVar5 = FUN_00916fd4(param_2);
    break;
  case 1:
    FUN_00916f0c(param_2,1);
    uVar7 = 0;
    goto LAB_009151f4;
  case 2:
    FUN_00916f0c(param_2,2);
    uVar7 = 1;
LAB_009151f4:
    uVar5 = FUN_009170c0(param_2,uVar7);
    break;
  case 3:
    uVar4 = FUN_00916df0(param_2);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(param_1 + 1) != 0) {
        puVar16 = (undefined8 *)*param_1;
        do {
          if ((*(byte *)((long)puVar16 + 0x12) >> 6 & 1) == 0) {
            iVar10 = *(int *)(puVar16 + 1);
            puVar14 = (undefined8 *)*puVar16;
          }
          else {
            iVar10 = 0xf - (uint)*(byte *)((long)puVar16 + 0xf);
            puVar14 = puVar16;
          }
          FUN_00916f0c(param_2,5);
          uVar5 = FUN_009172e8(param_2,puVar14,iVar10);
          if (((uVar5 & 1) == 0) || (uVar5 = FUN_00914ff4(puVar16 + 3,param_2), (uVar5 & 1) == 0))
          goto LAB_00915464;
          puVar16 = puVar16 + 6;
        } while (puVar16 != (undefined8 *)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30));
      }
      lVar12 = *param_2;
      param_2[4] = param_2[4] + -0x10;
      puVar8 = *(undefined1 **)(lVar12 + 0x18);
      puVar6 = puVar8 + 1;
      if (*(undefined1 **)(lVar12 + 0x20) <= puVar6) {
        FUN_008fe7c0(lVar12,1);
        puVar8 = *(undefined1 **)(lVar12 + 0x18);
        puVar6 = puVar8 + 1;
      }
      *(undefined1 **)(lVar12 + 0x18) = puVar6;
      uVar9 = 0x7d;
LAB_009151d8:
      *puVar8 = uVar9;
      goto LAB_009155c0;
    }
    goto LAB_009155c4;
  case 4:
    uVar4 = FUN_00916e7c(param_2);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(param_1 + 1) != 0) {
        dVar17 = *param_1;
        do {
          uVar5 = FUN_00914ff4(dVar17,param_2);
          if ((uVar5 & 1) == 0) goto LAB_00915464;
          dVar17 = (double)((long)dVar17 + 0x18);
        } while (dVar17 != (double)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x18));
      }
      lVar12 = *param_2;
      param_2[4] = param_2[4] + -0x10;
      puVar8 = *(undefined1 **)(lVar12 + 0x18);
      puVar6 = puVar8 + 1;
      if (*(undefined1 **)(lVar12 + 0x20) <= puVar6) {
        FUN_008fe7c0(lVar12,1);
        puVar8 = *(undefined1 **)(lVar12 + 0x18);
        puVar6 = puVar8 + 1;
      }
      *(undefined1 **)(lVar12 + 0x18) = puVar6;
      uVar9 = 0x5d;
      goto LAB_009151d8;
    }
    goto LAB_009155c4;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar10 = *(int *)(param_1 + 1);
      param_1 = (double *)*param_1;
    }
    else {
      iVar10 = 0xf - (uint)*(byte *)((long)param_1 + 0xf);
    }
    FUN_00916f0c(param_2,5);
    uVar5 = FUN_009172e8(param_2,param_1,iVar10);
    break;
  default:
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          if ((uVar1 >> 0xd & 1) == 0) {
            dVar17 = *param_1;
            FUN_00916f0c(param_2,6);
            lVar12 = *param_2;
            puVar15 = *(undefined2 **)(lVar12 + 0x18);
            puVar6 = (undefined1 *)((long)puVar15 + 0x19);
            if (*(undefined1 **)(lVar12 + 0x20) <= puVar6) {
              FUN_008fe7c0(lVar12,0x19);
              puVar15 = *(undefined2 **)(lVar12 + 0x18);
              puVar6 = (undefined1 *)((long)puVar15 + 0x19);
            }
            *(undefined1 **)(lVar12 + 0x18) = puVar6;
            if (ABS(dVar17) == 0.0) {
              puVar13 = puVar15;
              if ((long)dVar17 < 0) {
                puVar13 = (undefined2 *)((long)puVar15 + 1);
                *(undefined1 *)puVar15 = 0x2d;
              }
              *puVar13 = 0x2e30;
              *(undefined1 *)(puVar13 + 1) = 0x30;
              puVar6 = (undefined1 *)((long)puVar13 + 3);
            }
            else {
              puVar13 = puVar15;
              if (dVar17 < 0.0) {
                puVar13 = (undefined2 *)((long)puVar15 + 1);
                *(undefined1 *)puVar15 = 0x2d;
              }
              bVar3 = ((ulong)dVar17 >> 0x34 & 0x7ff) != 0;
              local_b8 = (ulong)dVar17 & 0xfffffffffffff;
              if (bVar3) {
                local_b8 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
              }
              local_b0 = -0x432;
              if (bVar3) {
                local_b0 = ((uint)((ulong)dVar17 >> 0x34) & 0x7ff) - 0x433;
              }
              FUN_00918050(&local_b8,auStack_c8,auStack_d8);
              local_98 = local_b8 << (LZCOUNT(local_b8) & 0x3fU);
              uStack_90 = (ulong)(uint)(local_b0 - (int)LZCOUNT(local_b8));
              dVar17 = (double)(-0x3d - local_d0) * 0.30102999566398114 + 347.0;
              iVar10 = (int)dVar17;
              uVar1 = ((int)((uint)(0.0 < dVar17 - (double)iVar10) + iVar10) >> 3) + 1;
              local_78 = *(undefined8 *)(&DAT_01b93840 + (ulong)uVar1 * 8);
              local_e0 = uVar1 * -8 + 0x15c;
              uStack_70 = (long)*(short *)(&DAT_01b93af8 + (ulong)uVar1 * 2) & 0xffffffff;
              local_88 = FUN_0091810c(&local_98,&local_78);
              auVar18 = FUN_0091810c(auStack_d8,&local_78);
              local_a0 = auVar18._8_8_;
              uVar5 = FUN_0091810c(auStack_c8,&local_78);
              local_a8 = auVar18._0_8_ + -1;
              FUN_00918168(local_88,&local_a8,local_a8 + ~uVar5,puVar13,&uStack_dc,&local_e0);
              puVar6 = (undefined1 *)FUN_00917e7c(puVar13,uStack_dc,local_e0);
            }
            lVar12 = *param_2;
            lVar11 = -0x19;
          }
          else {
            dVar17 = *param_1;
            FUN_00916f0c(param_2,6);
            lVar12 = *param_2;
            puVar15 = *(undefined2 **)(lVar12 + 0x18);
            puVar13 = puVar15 + 10;
            if (*(undefined2 **)(lVar12 + 0x20) <= puVar13) {
              FUN_008fe7c0(lVar12,0x14);
              puVar15 = *(undefined2 **)(lVar12 + 0x18);
              puVar13 = puVar15 + 10;
            }
            *(undefined2 **)(lVar12 + 0x18) = puVar13;
            puVar6 = (undefined1 *)FUN_00917824(dVar17,puVar15);
            lVar12 = *param_2;
            lVar11 = -0x14;
          }
        }
        else {
          dVar17 = *param_1;
          FUN_00916f0c(param_2,6);
          lVar12 = *param_2;
          puVar15 = *(undefined2 **)(lVar12 + 0x18);
          puVar6 = (undefined1 *)((long)puVar15 + 0x15);
          if (*(undefined1 **)(lVar12 + 0x20) <= puVar6) {
            FUN_008fe7c0(lVar12,0x15);
            puVar15 = *(undefined2 **)(lVar12 + 0x18);
            puVar6 = (undefined1 *)((long)puVar15 + 0x15);
          }
          *(undefined1 **)(lVar12 + 0x18) = puVar6;
          puVar13 = puVar15;
          if ((long)dVar17 < 0) {
            puVar13 = (undefined2 *)((long)puVar15 + 1);
            *(undefined1 *)puVar15 = 0x2d;
            dVar17 = (double)-(long)dVar17;
          }
          puVar6 = (undefined1 *)FUN_00917824(dVar17,puVar13);
          lVar12 = *param_2;
          lVar11 = -0x15;
        }
      }
      else {
        iVar10 = *(int *)param_1;
        FUN_00916f0c(param_2,6);
        lVar12 = *param_2;
        puVar15 = *(undefined2 **)(lVar12 + 0x18);
        puVar13 = puVar15 + 5;
        if (*(undefined2 **)(lVar12 + 0x20) <= puVar13) {
          FUN_008fe7c0(lVar12,10);
          puVar15 = *(undefined2 **)(lVar12 + 0x18);
          puVar13 = puVar15 + 5;
        }
        *(undefined2 **)(lVar12 + 0x18) = puVar13;
        puVar6 = (undefined1 *)FUN_0091754c(iVar10,puVar15);
        lVar12 = *param_2;
        lVar11 = -10;
      }
    }
    else {
      iVar10 = *(int *)param_1;
      FUN_00916f0c(param_2,6);
      lVar12 = *param_2;
      puVar15 = *(undefined2 **)(lVar12 + 0x18);
      puVar6 = (undefined1 *)((long)puVar15 + 0xb);
      if (*(undefined1 **)(lVar12 + 0x20) <= puVar6) {
        FUN_008fe7c0(lVar12,0xb);
        puVar15 = *(undefined2 **)(lVar12 + 0x18);
        puVar6 = (undefined1 *)((long)puVar15 + 0xb);
      }
      *(undefined1 **)(lVar12 + 0x18) = puVar6;
      puVar13 = puVar15;
      if (iVar10 < 0) {
        puVar13 = (undefined2 *)((long)puVar15 + 1);
        *(undefined1 *)puVar15 = 0x2d;
        iVar10 = -iVar10;
      }
      puVar6 = (undefined1 *)FUN_0091754c(iVar10,puVar13);
      lVar12 = *param_2;
      lVar11 = -0xb;
    }
    *(undefined1 **)(lVar12 + 0x18) = puVar6 + *(long *)(lVar12 + 0x18) + (lVar11 - (long)puVar15);
LAB_009155c0:
    uVar5 = 1;
LAB_009155c4:
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return uVar5;
    }
    goto LAB_009155f4;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (ulong)((uint)uVar5 & 1);
  }
LAB_009155f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
LAB_00915464:
  uVar5 = 0;
  goto LAB_009155c4;
}

