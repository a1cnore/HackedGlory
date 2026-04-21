// functions/0099c — 50 functions
#include "libGameKindred.h"




void FUN_0099c018(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c03c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c060(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c084(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c0a8(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c0cc(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c0f0(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c114(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c138(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c15c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bfba8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00d0aae0(param_1);
  return;
}




void FUN_0099c1c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bfba8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00d0aae0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_0099c208(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bfc30;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00d0aae0(param_1);
  return;
}




void FUN_0099c248(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bfc30;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00d0aae0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_0099c290(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c2b4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c2d8(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099c2fc(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  iVar2 = (int)((ulong)((long)param_3 - (long)param_2) >> 4);
  if (uVar4 == iVar2 * -0x55555555) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x30);
    if (puVar3 != param_3) {
      do {
        uVar5 = *(undefined8 *)((long)param_3 + 0x1c);
        *(undefined8 *)((long)param_2 + 0x24) = *(undefined8 *)((long)param_3 + 0x24);
        *(undefined8 *)((long)param_2 + 0x1c) = uVar5;
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar1 = param_3 + 6;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 6;
        param_3 = puVar1;
      } while (puVar3 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 + iVar2 * 0x55555555;
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

bool FUN_0099c38c(byte *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *__s1;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  char *__s2;
  size_t sVar10;
  char *pcVar11;
  uint uVar12;
  byte *__s1_00;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  byte local_78 [8];
  size_t local_70;
  char *local_68;
  byte local_60 [8];
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  bVar3 = *param_1;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  uVar12 = (uint)sVar1;
  if (uVar12 == 0) {
    bVar6 = false;
  }
  else {
    pbVar13 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar13 = param_1 + 1;
    }
    bVar6 = pbVar13[uVar12 - 1] == 0x2a;
  }
  bVar4 = *param_2;
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  uVar14 = (uint)sVar2;
  if (uVar14 == 0) {
    bVar7 = false;
  }
  else {
    pbVar13 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar13 = param_2 + 1;
    }
    bVar7 = pbVar13[uVar14 - 1] == 0x2a;
  }
  if (!bVar6 && !bVar7) {
    uVar8 = false;
    if (sVar1 == sVar2) {
      __s1_00 = *(byte **)(param_1 + 0x10);
      pbVar13 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        __s1_00 = param_1 + 1;
      }
      if ((bVar4 & 1) == 0) {
        pbVar13 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          lVar15 = -(ulong)(bVar3 >> 1);
          do {
            param_1 = param_1 + 1;
            if (*param_1 != *pbVar13) {
              uVar8 = false;
              goto LAB_0099c600;
            }
            lVar15 = lVar15 + 1;
            pbVar13 = pbVar13 + 1;
          } while (lVar15 != 0);
        }
      }
      else if (sVar1 != 0) {
        iVar9 = memcmp(__s1_00,pbVar13,sVar1);
        uVar8 = iVar9 == 0;
        goto LAB_0099c600;
      }
      uVar8 = true;
    }
    goto LAB_0099c600;
  }
  sVar10 = sVar1;
  if ((((bool)(bVar7 | bVar6 ^ 1U)) && (sVar10 = sVar2, (bool)(bVar6 | bVar7 ^ 1U))) &&
     (sVar10 = sVar1, uVar14 <= uVar12)) {
    sVar10 = sVar2;
  }
  lVar15 = (long)((sVar10 << 0x20) + -0x100000000) >> 0x20;
  FUN_0093ddb0(local_60,param_1,0,lVar15);
  FUN_0093ddb0(local_78,param_2,0,lVar15,param_2);
  bVar3 = local_60[0];
  sVar1 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    sVar1 = local_58;
  }
  sVar2 = (ulong)(local_78[0] >> 1);
  if ((local_78[0] & 1) != 0) {
    sVar2 = local_70;
  }
  uVar8 = false;
  if (sVar1 == sVar2) {
    pcVar11 = (char *)((ulong)local_60 | 1);
    __s1 = pcVar11;
    if ((local_60[0] & 1) != 0) {
      __s1 = local_50;
    }
    __s2 = (char *)((ulong)local_78 | 1);
    if ((local_78[0] & 1) != 0) {
      __s2 = local_68;
    }
    if ((local_60[0] & 1) == 0) {
      if (sVar1 != 0) {
        lVar15 = -(ulong)(local_60[0] >> 1);
        do {
          if (*pcVar11 != *__s2) {
            uVar8 = false;
            goto joined_r0x0099c5c0;
          }
          pcVar11 = pcVar11 + 1;
          lVar15 = lVar15 + 1;
          __s2 = __s2 + 1;
        } while (lVar15 != 0);
      }
    }
    else if (sVar1 != 0) {
      iVar9 = memcmp(__s1,__s2,sVar1);
      uVar8 = iVar9 == 0;
      goto joined_r0x0099c5c0;
    }
    uVar8 = true;
  }
joined_r0x0099c5c0:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
    bVar3 = local_60[0];
  }
  if ((bVar3 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0099c600:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)uVar8;
}




void FUN_0099c630(void)

{
  if (DAT_02e8b440 == (undefined8 *)0x0) {
    DAT_02e8b440 = operator_new(0x28);
    DAT_02e8b440[2] = 0;
    DAT_02e8b440[3] = 0;
    *DAT_02e8b440 = 0;
    DAT_02e8b440[1] = 0;
    *(undefined1 *)(DAT_02e8b440 + 4) = 1;
  }
  return;
}




void FUN_0099c670(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_0099c6d0(param_1 + 0x10,&local_30);
  FUN_0099c758(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0099c6d0(uint *param_1,undefined8 *param_2)

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
    FUN_0099cab8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_0099c758(uint *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 2);
    do {
      uVar1 = FUN_0099ce14(*puVar2,param_2);
      if ((uVar1 & 1) != 0) {
        FUN_0099cdb4(*puVar2);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 8));
  }
  return;
}




void FUN_0099c7bc(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = (ulong)*(uint *)(param_1 + 0x10) << 3;
  plVar1 = *(long **)(param_1 + 0x18);
  do {
    plVar2 = plVar1;
    if (lVar3 == 0) goto LAB_0099c7f8;
    lVar3 = lVar3 + -8;
    plVar1 = plVar2 + 1;
  } while (*plVar2 != param_2);
  FUN_0099cb38((uint *)(param_1 + 0x10),plVar2);
LAB_0099c7f8:
  FUN_0099c758(param_1,param_2);
  FUN_0099c814(param_1);
  return;
}




void FUN_0099c814(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 4;
  if ((*piVar1 == 0) && (*param_1 == 0)) {
    DAT_02e8b440 = 0;
    if (*(void **)(param_1 + 6) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 6));
      piVar1[0] = 0;
      piVar1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
    }
    operator_delete(param_1);
    return;
  }
  return;
}




void FUN_0099c878(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_0099c8c4(param_1,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0099c8c4(uint *param_1,undefined8 *param_2)

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
    FUN_0099cba4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_0099c94c(uint *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = (ulong)*param_1 << 3;
  plVar1 = *(long **)(param_1 + 2);
  do {
    plVar2 = plVar1;
    if (lVar3 == 0) goto LAB_0099c988;
    lVar3 = lVar3 + -8;
    plVar1 = plVar2 + 1;
  } while (*plVar2 != param_2);
  FUN_0099cc24(param_1,plVar2);
LAB_0099c988:
  FUN_0099c814(param_1);
  return;
}




ulong FUN_0099c998(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  
  if ((*(char *)(param_1 + 0x20) == '\0') || (*(int *)(param_1 + 0x10) == 0)) {
    iVar4 = 0;
    iVar5 = 2;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x18);
    iVar4 = 0;
    iVar5 = 2;
    do {
      if ((*(int *)(*plVar6 + 0x18) != 0) && (uVar2 = FUN_0099ce14(param_2), (uVar2 & 1) != 0)) {
        lVar3 = *plVar6;
        iVar1 = *(int *)(lVar3 + 0x1c);
        if (iVar1 < iVar5) {
          iVar4 = *(int *)(lVar3 + 0x18);
          iVar5 = iVar1;
        }
        else if (iVar1 == iVar5) {
          iVar4 = iVar4 + (uint)*(byte *)(lVar3 + 0x18);
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != (long *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 8));
  }
  return CONCAT44(iVar4,iVar5) & 0xffffffffff;
}




void FUN_0099ca54(long param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (((param_2 & 1) != *(byte *)(param_1 + 0x20)) &&
     (*(byte *)(param_1 + 0x20) = param_2 & 1, *(int *)(param_1 + 0x10) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    do {
      puVar2 = puVar1 + 1;
      FUN_0099c758(param_1,*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 8));
  }
  return;
}




void FUN_0099cab0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_0099cab8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_0099cb38(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_0099cba4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_0099cc24(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_0099cc90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  uVar1 = FUN_0099c630();
  FUN_0099c878(uVar1,param_1);
  return;
}




void FUN_0099ccc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0099c630();
  FUN_0099c94c(uVar1,param_1);
  FUN_00951534(param_1,1);
  return;
}




undefined8 FUN_0099ccf4(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar1 = FUN_0099c630();
    uVar1 = FUN_0099c998(uVar1,param_1);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return uVar1;
}




void FUN_0099cd34(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40);
  FUN_0096204c(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0099cdb4(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0099cdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_0099cdd0(long param_1)

{
  FUN_00951534(param_1,0);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0099ce04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}




undefined8 FUN_0099ce14(uint *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_0099c38c(param_2,*(long *)(param_1 + 2) + lVar2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < *param_1);
  }
  return 0;
}




void FUN_0099ce80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_0099ce88(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x200000000;
  return;
}




void FUN_0099ce98(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return;
}




void FUN_0099ceac(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_008fa54c();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  uVar1 = FUN_0099c630();
  FUN_0099c670(uVar1,param_1);
  return;
}




void FUN_0099cedc(byte *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_0099cf18;
  }
  else if (*(long *)(param_1 + 8) == 0) goto LAB_0099cf18;
  uVar1 = FUN_0099c630();
  FUN_0099c7bc(uVar1,param_1);
  bVar2 = *param_1;
LAB_0099cf18:
  if ((bVar2 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_0099cf3c(byte *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  if ((*param_1 & 1) == 0) {
    if (*param_1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  uVar1 = FUN_0099c630();
  FUN_0099c758(uVar1,param_1);
  return;
}




void FUN_0099cf94(byte *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x18) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x18) = param_2;
  if ((*param_1 & 1) == 0) {
    if (*param_1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  uVar1 = FUN_0099c630();
  FUN_0099c758(uVar1,param_1);
  return;
}




void FUN_0099cfec(byte *param_1,long param_2,undefined4 param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  byte *__s2;
  long lVar8;
  byte *pbVar9;
  byte local_70 [8];
  size_t local_68;
  byte *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_2 != 0) {
    FUN_008fa54c(local_70,param_2);
    bVar4 = local_70[0];
    bVar2 = *param_1;
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 8);
    }
    sVar1 = (ulong)(local_70[0] >> 1);
    if ((local_70[0] & 1) != 0) {
      sVar1 = local_68;
    }
    if (__n == sVar1) {
      pbVar9 = *(byte **)(param_1 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar9 = param_1 + 1;
      }
      __s2 = (byte *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        __s2 = local_60;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          lVar8 = -(ulong)(bVar2 >> 1);
          pbVar9 = param_1;
          do {
            pbVar9 = pbVar9 + 1;
            if (*pbVar9 != *__s2) goto joined_r0x0099d0ec;
            lVar8 = lVar8 + 1;
            __s2 = __s2 + 1;
          } while (lVar8 != 0);
        }
      }
      else if (__n != 0) {
        iVar6 = memcmp(pbVar9,__s2,__n);
        bVar5 = iVar6 == 0;
        goto joined_r0x0099d0e0;
      }
      bVar5 = true;
    }
    else {
joined_r0x0099d0ec:
      bVar5 = false;
    }
joined_r0x0099d0e0:
    if ((bVar4 & 1) != 0) {
      operator_delete(local_60);
    }
    if (bVar5) goto LAB_0099d15c;
  }
  if ((*param_1 & 1) == 0) {
    if (*param_1 >> 1 != 0) {
LAB_0099d118:
      uVar7 = FUN_0099c630();
      FUN_0099c7bc(uVar7,param_1);
    }
  }
  else if (*(long *)(param_1 + 8) != 0) goto LAB_0099d118;
  FUN_008fa54c(local_70,param_2);
  FUN_008fce60(param_1,local_70);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  uVar7 = FUN_0099c630();
  FUN_0099c670(uVar7,param_1);
LAB_0099d15c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

