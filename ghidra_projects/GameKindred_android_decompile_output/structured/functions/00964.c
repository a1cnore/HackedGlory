// functions/00964 — 47 functions
#include "libGameKindred.h"




ulong FUN_00964124(undefined8 param_1,byte *param_2,uint *param_3)

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
  ulong uVar8;
  long lVar9;
  
  uVar2 = *param_3;
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_3 + 2);
    uVar8 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar5 = (byte *)(lVar9 + uVar8 * 0x20);
      bVar3 = *pbVar5;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar5 + 8);
      }
      if (uVar1 == __n) {
        pbVar7 = *(byte **)(pbVar5 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar7 = pbVar5 + 1;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = __s2;
            do {
              pbVar5 = pbVar5 + 1;
              if (*pbVar5 != *pbVar7) goto LAB_009641e4;
              lVar6 = lVar6 + 1;
              pbVar7 = pbVar7 + 1;
            } while (lVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 != 0)) goto LAB_009641e4;
        if (*(char *)(lVar9 + uVar8 * 0x20 + 0x18) == '\0') goto LAB_009641f4;
      }
LAB_009641e4:
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  uVar8 = 0xffffffff;
LAB_009641f4:
  return uVar8 & 0xffffffff;
}




void FUN_0096420c(uint *param_1,long param_2)

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
    FUN_0096547c(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined1 *)(lVar1 + -8) = *(undefined1 *)(param_2 + 0x18);
  return;
}




ulong FUN_009642a0(undefined8 param_1,byte *param_2,uint *param_3)

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
  
  uVar2 = *param_3;
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_3 + 2);
    uVar8 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = lVar9 + uVar8 * 0x1a8;
      bVar3 = *(byte *)(lVar5 + 0x28);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(lVar5 + 0x30);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar9 + uVar8 * 0x1a8 + 0x38);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar5 + 0x29);
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            pbVar6 = (byte *)(lVar5 + 0x29);
            lVar5 = -(ulong)(bVar3 >> 1);
            pbVar7 = __s2;
            do {
              if (*pbVar6 != *pbVar7) goto LAB_00964368;
              pbVar6 = pbVar6 + 1;
              lVar5 = lVar5 + 1;
              pbVar7 = pbVar7 + 1;
            } while (lVar5 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00964368;
        if (*(char *)(lVar9 + uVar8 * 0x1a8 + 0x1a0) == '\0') goto LAB_00964378;
      }
LAB_00964368:
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  uVar8 = 0xffffffff;
LAB_00964378:
  return uVar8 & 0xffffffff;
}




void FUN_00964390(uint *param_1,long param_2)

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
    FUN_00965554(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x1a8;
  FUN_0096522c(lVar4 + -0x1a8,param_2);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x1a0);
  return;
}




ulong FUN_0096442c(undefined8 param_1,byte *param_2,uint *param_3)

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
  
  uVar2 = *param_3;
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_3 + 2);
    uVar8 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = lVar9 + uVar8 * 0x70;
      bVar3 = *(byte *)(lVar5 + 0x28);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(lVar5 + 0x30);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar9 + uVar8 * 0x70 + 0x38);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar5 + 0x29);
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            pbVar6 = (byte *)(lVar5 + 0x29);
            lVar5 = -(ulong)(bVar3 >> 1);
            pbVar7 = __s2;
            do {
              if (*pbVar6 != *pbVar7) goto LAB_009644f4;
              pbVar6 = pbVar6 + 1;
              lVar5 = lVar5 + 1;
              pbVar7 = pbVar7 + 1;
            } while (lVar5 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_009644f4;
        if (*(char *)(lVar9 + uVar8 * 0x70 + 0x68) == '\0') goto LAB_00964504;
      }
LAB_009644f4:
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  uVar8 = 0xffffffff;
LAB_00964504:
  return uVar8 & 0xffffffff;
}




void FUN_0096451c(uint *param_1,long param_2)

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
    FUN_00965624(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x70;
  thunk_FUN_00e7051c(lVar4 + -0x70,param_2);
  FUN_008fcdb8(lVar4 + -0x60,param_2 + 0x10);
  FUN_008fcdb8(lVar4 + -0x48,param_2 + 0x28);
  thunk_FUN_00e7051c(lVar4 + -0x30,param_2 + 0x40);
  thunk_FUN_00e7051c(lVar4 + -0x20,param_2 + 0x50);
  *(undefined1 *)(lVar4 + -0x10) = *(undefined1 *)(param_2 + 0x60);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x68);
  return;
}




void FUN_009645f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbd78;
  param_1[3] = &PTR_FUN_027bb448;
  FUN_009515b0(param_1 + 0x13);
  FUN_00951478(param_1 + 0xe,1);
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_0095132c(param_1 + 10,1);
  FUN_009512b0(param_1 + 8,1);
  FUN_00e84dd8(param_1 + 3);
  operator_delete(param_1);
  return;
}




void FUN_00964674(long param_1)

{
  FUN_00e812e8(param_1 + 0x18);
  return;
}




long FUN_0096467c(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00964684(long param_1)

{
  FUN_00e70510();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00e70510(param_1 + 0x28);
  FUN_00e70510(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_00e70510(param_1 + 0x60);
  FUN_00e70510(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  FUN_009513b8(param_1);
  return;
}




void FUN_009646f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbdb0;
  param_1[3] = &PTR_FUN_027bb538;
  FUN_00952050(param_1 + 0x11,1);
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    operator_delete((void *)param_1[0xd]);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00e84dd8(param_1 + 3);
  operator_delete(param_1);
  return;
}




void FUN_00964778(long param_1)

{
  FUN_00e81ab8(param_1 + 0x18);
  return;
}




long FUN_00964780(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00964788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbde8;
  FUN_00964d9c(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009647c8(void)

{
  return 0xe;
}




void FUN_009647d0(void *param_1)

{
  FUN_00e84dd8();
  operator_delete(param_1);
  return;
}




undefined8 FUN_009647f4(void)

{
  return 0xc;
}




void FUN_009647fc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027bbe48;
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    operator_delete((void *)param_1[0x8a]);
  }
  lVar1 = 0;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + 0x410) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x420));
    }
    if ((*(byte *)((long)param_1 + lVar1 + 0x3f8) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x408));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_00952050(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00964890(void)

{
  return 0x48;
}




void FUN_00964898(void)

{
  return;
}




void FUN_0096489c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbe78;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009648f4(void)

{
  return 0x49;
}




void FUN_009648fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbea8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00964944(void)

{
  return 0x2a;
}




void FUN_0096494c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbed8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00964994(void)

{
  return 0x29;
}




void FUN_0096499c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbf08;
  FUN_00948ab4(param_1 + 5,param_1[6]);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009649dc(void)

{
  return 0x1d;
}




void FUN_009649e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbf38;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00964a2c(void)

{
  return 0x1e;
}




void FUN_00964a34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbf68;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00964a7c(void)

{
  return 0x1f;
}




void FUN_00964a84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbf98;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00964acc(void)

{
  return 0x20;
}




void FUN_00964ad4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbfc8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00964b1c(void)

{
  return 0x28;
}




void FUN_00964b24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbff8;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00964c98(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00964b78(void)

{
  return 0x11;
}




void FUN_00964b80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc028;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00964bdc(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00964bd4(void)

{
  return 0x14;
}




void FUN_00964bdc(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x68;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x38);
      do {
        if ((void *)puVar2[4] != (void *)0x0) {
          operator_delete__((void *)puVar2[4]);
          puVar2[3] = 0;
          puVar2[4] = 0;
        }
        if ((void *)puVar2[2] != (void *)0x0) {
          operator_delete__((void *)puVar2[2]);
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        if ((*(byte *)(puVar2 + -5) & 1) != 0) {
          operator_delete((void *)puVar2[-3]);
        }
        if ((void *)puVar2[-6] != (void *)0x0) {
          operator_delete__((void *)puVar2[-6]);
          puVar2[-7] = 0;
          puVar2[-6] = 0;
        }
        lVar1 = lVar1 + -0x68;
        puVar2 = puVar2 + 0xd;
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




void FUN_00964c98(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x1a0;
      do {
        FUN_00964d08(lVar1);
        lVar2 = lVar2 + -0x1a0;
        lVar1 = lVar1 + 0x1a0;
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




void FUN_00964d08(undefined8 *param_1)

{
  FUN_00936630(param_1 + 0x17);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    operator_delete((void *)param_1[0x14]);
  }
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00964d9c(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x58;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x28);
      do {
        if ((pbVar2[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x28));
        }
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        if (*(void **)(pbVar2 + -0x20) != (void *)0x0) {
          operator_delete__(*(void **)(pbVar2 + -0x20));
          pbVar2[-0x28] = 0;
          pbVar2[-0x27] = 0;
          pbVar2[-0x26] = 0;
          pbVar2[-0x25] = 0;
          pbVar2[-0x24] = 0;
          pbVar2[-0x23] = 0;
          pbVar2[-0x22] = 0;
          pbVar2[-0x21] = 0;
          pbVar2[-0x20] = 0;
          pbVar2[-0x1f] = 0;
          pbVar2[-0x1e] = 0;
          pbVar2[-0x1d] = 0;
          pbVar2[-0x1c] = 0;
          pbVar2[-0x1b] = 0;
          pbVar2[-0x1a] = 0;
          pbVar2[-0x19] = 0;
        }
        lVar1 = lVar1 + -0x58;
        pbVar2 = pbVar2 + 0x58;
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




void FUN_00964e48(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_00954e24(param_1,1);
    FUN_0095491c(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = lVar2 + (ulong)*param_2 * 0x108;
      do {
        FUN_008fcdb8(lVar3,lVar2);
        thunk_FUN_00e7051c(lVar3 + 0x18,lVar2 + 0x18);
        FUN_008fcdb8(lVar3 + 0x28,lVar2 + 0x28);
        memcpy((void *)(lVar3 + 0x40),(void *)(lVar2 + 0x40),0xc3);
        lVar2 = lVar2 + 0x108;
        lVar3 = lVar3 + 0x108;
      } while (lVar2 != lVar4);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00964efc(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_009551c0(param_1,1);
    FUN_00954a38(param_1,*param_2);
    uVar3 = 0;
    if (*param_2 != 0) {
      lVar4 = *(long *)(param_2 + 2);
      lVar5 = *(long *)(param_1 + 2);
      lVar2 = lVar4 + (ulong)*param_2 * 0x20;
      do {
        FUN_008fcdb8(lVar5,lVar4);
        puVar1 = (undefined8 *)(lVar4 + 0x18);
        lVar4 = lVar4 + 0x20;
        *(undefined8 *)(lVar5 + 0x18) = *puVar1;
        lVar5 = lVar5 + 0x20;
      } while (lVar4 != lVar2);
      uVar3 = *param_2;
    }
    *param_1 = uVar3;
  }
  return;
}




void FUN_00964f8c(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_00955134(param_1,1);
    FUN_00954b10(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x38;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
        puVar1 = (undefined4 *)(lVar3 + 0x30);
        lVar3 = lVar3 + 0x38;
        *(undefined4 *)(lVar4 + 0x30) = *puVar1;
        lVar4 = lVar4 + 0x38;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}

