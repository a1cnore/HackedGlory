// functions/00e99 — 9 functions
#include "libGameKindred.h"




void FUN_00e99090(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  size_t __n;
  void *__dest;
  ulong uVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar3)) {
    do {
      *puVar3 = 0;
      param_2 = param_2 - 1;
      puVar3 = (undefined1 *)(param_1[1] + 1);
      param_1[1] = puVar3;
    } while (param_2 != 0);
    return;
  }
  __src = (void *)*param_1;
  __n = (long)puVar3 - (long)__src;
  uVar2 = __n + param_2;
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = param_1[2] - (long)__src;
  if (uVar1 < 0x3fffffffffffffff) {
    uVar1 = uVar1 * 2;
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    if (uVar2 == 0) {
      __dest = (void *)0x0;
      goto LAB_00e99124;
    }
  }
  else {
    uVar2 = 0x7fffffffffffffff;
  }
  __dest = operator_new(uVar2);
LAB_00e99124:
  memset((void *)((long)__dest + __n),0,param_2);
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *param_1 = __dest;
  param_1[1] = (undefined1 *)((long)__dest + (long)(puVar3 + (param_2 - (long)__src)));
  param_1[2] = (long)__dest + uVar2;
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}




void FUN_00e991a0(long param_1,byte param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  undefined1 local_74 [4];
  byte *local_70;
  byte *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (1 < *(uint *)(param_1 + 0x54)) {
    local_68 = (byte *)0x0;
    uStack_60 = 0;
    local_70 = (byte *)0x0;
    lVar8 = 6;
    lVar1 = 4;
    if (param_3 < 0x7e) {
      lVar1 = 2;
    }
    if (param_3 >> 0x10 == 0) {
      lVar8 = 0;
    }
    lVar2 = 0;
    if (*(char *)(param_1 + 0x58) != '\0') {
      lVar2 = 4;
    }
    local_74[0] = 0;
    FUN_00e99430(&local_70,lVar1 + lVar8 + lVar2,local_74);
    *local_70 = param_2 | 0x80;
    bVar5 = (byte)param_3;
    if (param_3 < 0x7e) {
      bVar6 = 0;
      if (*(char *)(param_1 + 0x58) != '\0') {
        bVar6 = 0x80;
      }
      local_70[1] = bVar6 | bVar5;
      if (*(char *)(param_1 + 0x58) != '\0') {
        local_70[2] = 0x12;
        local_70[3] = 0x34;
        local_70[4] = 0x56;
        local_70[5] = 0x78;
      }
    }
    else {
      bVar6 = 0;
      if (*(char *)(param_1 + 0x58) != '\0') {
        bVar6 = 0x80;
      }
      bVar3 = (byte)(param_3 >> 8);
      if (param_3 >> 0x10 == 0) {
        local_70[1] = bVar6 | 0x7e;
        local_70[2] = bVar3;
        local_70[3] = bVar5;
        if (*(char *)(param_1 + 0x58) != '\0') {
          local_70[4] = 0x12;
          local_70[5] = 0x34;
          local_70[6] = 0x56;
          local_70[7] = 0x78;
        }
      }
      else {
        local_70[1] = bVar6 | 0x7f;
        local_70[2] = (byte)(param_3 >> 0x38);
        local_70[3] = (byte)(param_3 >> 0x30);
        local_70[4] = (byte)(param_3 >> 0x28);
        local_70[5] = (byte)(param_3 >> 0x20);
        local_70[6] = (byte)(param_3 >> 0x18);
        local_70[7] = (byte)(param_3 >> 0x10);
        local_70[8] = bVar3;
        local_70[9] = bVar5;
        if (*(char *)(param_1 + 0x58) != '\0') {
          local_70[10] = 0x12;
          local_70[0xb] = 0x34;
          local_70[0xc] = 0x56;
          local_70[0xd] = 0x78;
        }
      }
    }
    FUN_00e99550(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),local_70,local_68);
    FUN_00e99760(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),param_4,param_5);
    if ((*(char *)(param_1 + 0x58) != '\0') && (param_3 != 0)) {
      uVar7 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x28) - param_3;
        *(byte *)(lVar1 + uVar7) = *(byte *)(lVar1 + uVar7) ^ (&DAT_01bf0623)[uVar7 & 3];
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_3);
    }
    if (local_70 != (byte *)0x0) {
      local_68 = local_70;
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e99430(long *param_1,ulong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  
  uVar2 = param_1[2];
  puVar1 = (undefined1 *)*param_1;
  if (uVar2 - (long)puVar1 < param_2) {
    if (puVar1 != (undefined1 *)0x0) {
      param_1[1] = (long)puVar1;
      operator_delete(puVar1);
      uVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar2 < 0x3fffffffffffffff) {
      uVar3 = param_2;
      if (param_2 <= uVar2 << 1) {
        uVar3 = uVar2 << 1;
      }
    }
    else {
      uVar3 = 0x7fffffffffffffff;
    }
    FUN_00e99978(param_1,uVar3);
    puVar1 = (undefined1 *)param_1[1];
    do {
      param_2 = param_2 - 1;
      *puVar1 = *param_3;
      puVar1 = (undefined1 *)(param_1[1] + 1);
      param_1[1] = (long)puVar1;
    } while (param_2 != 0);
  }
  else {
    uVar3 = param_1[1] - (long)puVar1;
    uVar2 = uVar3;
    if (param_2 <= uVar3) {
      uVar2 = param_2;
    }
    if (uVar2 != 0) {
      puVar5 = puVar1 + (-1 - param_1[1]);
      if (puVar5 <= (undefined1 *)~param_2) {
        puVar5 = (undefined1 *)~param_2;
      }
      puVar5 = puVar5 + 1;
      do {
        puVar5 = puVar5 + 1;
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
      } while (puVar5 != (undefined1 *)0x0);
    }
    lVar4 = uVar3 - param_2;
    if (uVar3 < param_2) {
      puVar1 = (undefined1 *)param_1[1];
      do {
        lVar4 = lVar4 + 1;
        *puVar1 = *param_3;
        puVar1 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar1;
      } while (lVar4 != 0);
    }
    else {
      param_1[1] = *param_1 + param_2;
    }
  }
  return;
}




undefined1 * FUN_00e99550(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  size_t sVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  void *__src;
  undefined1 *puVar9;
  void *pvVar10;
  size_t __n;
  
  lVar5 = (long)param_4 - (long)param_3;
  if (lVar5 < 1) {
    return param_2;
  }
  puVar9 = (undefined1 *)param_1[1];
  if (lVar5 <= param_1[2] - (long)puVar9) {
    lVar6 = (long)puVar9 - (long)param_2;
    puVar3 = puVar9;
    puVar4 = param_4;
    if (lVar6 < lVar5) {
      puVar4 = param_3 + lVar6;
      for (puVar7 = puVar4; puVar7 != param_4; puVar7 = puVar7 + 1) {
        *puVar3 = *puVar7;
        puVar3 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar3;
      }
      if (lVar6 < 1) {
        return param_2;
      }
    }
    puVar7 = param_2 + lVar5;
    sVar1 = (long)puVar3 - (long)puVar7;
    if (puVar3 + -lVar5 < puVar9) {
      puVar9 = puVar9 + (long)(puVar7 + (-(long)param_2 - (long)puVar3));
      puVar8 = puVar3 + (long)param_2 + -(long)puVar7;
      puVar7 = puVar3;
      do {
        puVar9 = puVar9 + -1;
        *puVar7 = *puVar8;
        puVar7 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar7;
        puVar8 = puVar8 + 1;
      } while (puVar9 != (undefined1 *)0x0);
    }
    if (sVar1 != 0) {
      memmove(puVar3 + -sVar1,param_2,sVar1);
    }
    if ((long)puVar4 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)puVar4 - (long)param_3);
    return param_2;
  }
  __src = (void *)*param_1;
  puVar9 = puVar9 + (lVar5 - (long)__src);
  if ((long)puVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = param_1[2] - (long)__src;
  if (uVar2 < 0x3fffffffffffffff) {
    puVar3 = (undefined1 *)(uVar2 * 2);
    if (puVar9 <= puVar3) {
      puVar9 = puVar3;
    }
    if (puVar9 == (undefined1 *)0x0) {
      pvVar10 = (void *)0x0;
      goto LAB_00e996a4;
    }
  }
  else {
    puVar9 = (undefined1 *)0x7fffffffffffffff;
  }
  pvVar10 = operator_new((ulong)puVar9);
LAB_00e996a4:
  puVar3 = (undefined1 *)((long)pvVar10 + ((long)param_2 - (long)__src));
  puVar4 = puVar3;
  if (param_3 != param_4) {
    lVar5 = -(long)__src;
    puVar7 = param_3;
    do {
      puVar8 = puVar7 + 1;
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
      puVar7 = puVar8;
    } while (param_4 != puVar8);
    __src = (void *)*param_1;
    puVar4 = (undefined1 *)
             ((long)pvVar10 + (long)(param_4 + (long)(param_2 + (lVar5 - (long)param_3))));
  }
  sVar1 = (long)param_2 - (long)__src;
  if (0 < (long)sVar1) {
    memcpy(puVar3 + -sVar1,__src,sVar1);
  }
  __n = param_1[1] - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar4,param_2,__n);
    puVar4 = puVar4 + __n;
  }
  *param_1 = (long)(puVar3 + -sVar1);
  param_1[1] = (long)puVar4;
  param_1[2] = (long)((long)pvVar10 + (long)puVar9);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return puVar3;
}




undefined1 * FUN_00e99760(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  size_t sVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  void *__src;
  undefined1 *puVar9;
  void *pvVar10;
  size_t __n;
  
  lVar5 = (long)param_4 - (long)param_3;
  if (lVar5 < 1) {
    return param_2;
  }
  puVar9 = (undefined1 *)param_1[1];
  if (lVar5 <= param_1[2] - (long)puVar9) {
    lVar6 = (long)puVar9 - (long)param_2;
    puVar3 = puVar9;
    puVar4 = param_4;
    if (lVar6 < lVar5) {
      puVar4 = param_3 + lVar6;
      for (puVar7 = puVar4; puVar7 != param_4; puVar7 = puVar7 + 1) {
        *puVar3 = *puVar7;
        puVar3 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar3;
      }
      if (lVar6 < 1) {
        return param_2;
      }
    }
    puVar7 = param_2 + lVar5;
    sVar1 = (long)puVar3 - (long)puVar7;
    if (puVar3 + -lVar5 < puVar9) {
      puVar9 = puVar9 + (long)(puVar7 + (-(long)param_2 - (long)puVar3));
      puVar8 = puVar3 + (long)param_2 + -(long)puVar7;
      puVar7 = puVar3;
      do {
        puVar9 = puVar9 + -1;
        *puVar7 = *puVar8;
        puVar7 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar7;
        puVar8 = puVar8 + 1;
      } while (puVar9 != (undefined1 *)0x0);
    }
    puVar9 = param_2;
    if (sVar1 != 0) {
      memmove(puVar3 + -sVar1,param_2,sVar1);
    }
    for (; param_3 != puVar4; param_3 = param_3 + 1) {
      *puVar9 = *param_3;
      puVar9 = puVar9 + 1;
    }
    return param_2;
  }
  __src = (void *)*param_1;
  puVar9 = puVar9 + (lVar5 - (long)__src);
  if ((long)puVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = param_1[2] - (long)__src;
  if (uVar2 < 0x3fffffffffffffff) {
    puVar3 = (undefined1 *)(uVar2 * 2);
    if (puVar9 <= puVar3) {
      puVar9 = puVar3;
    }
    if (puVar9 == (undefined1 *)0x0) {
      pvVar10 = (void *)0x0;
      goto LAB_00e998c0;
    }
  }
  else {
    puVar9 = (undefined1 *)0x7fffffffffffffff;
  }
  pvVar10 = operator_new((ulong)puVar9);
LAB_00e998c0:
  puVar3 = (undefined1 *)((long)pvVar10 + ((long)param_2 - (long)__src));
  puVar4 = puVar3;
  if (param_3 != param_4) {
    lVar5 = -(long)__src;
    puVar7 = param_3;
    do {
      puVar8 = puVar7 + 1;
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
      puVar7 = puVar8;
    } while (param_4 != puVar8);
    __src = (void *)*param_1;
    puVar4 = (undefined1 *)
             ((long)pvVar10 + (long)(param_4 + (long)(param_2 + (lVar5 - (long)param_3))));
  }
  sVar1 = (long)param_2 - (long)__src;
  if (0 < (long)sVar1) {
    memcpy(puVar3 + -sVar1,__src,sVar1);
  }
  __n = param_1[1] - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar4,param_2,__n);
    puVar4 = puVar4 + __n;
  }
  *param_1 = (long)(puVar3 + -sVar1);
  param_1[1] = (long)puVar4;
  param_1[2] = (long)((long)pvVar10 + (long)puVar9);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return puVar3;
}




void FUN_00e99978(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (-1 < (long)param_2) {
    pvVar1 = operator_new(param_2);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (long)pvVar1 + param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




undefined1 * FUN_00e999b4(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  size_t sVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  void *__src;
  undefined1 *puVar9;
  void *pvVar10;
  size_t __n;
  
  lVar5 = (long)param_4 - (long)param_3;
  if (lVar5 < 1) {
    return param_2;
  }
  puVar9 = (undefined1 *)param_1[1];
  if (lVar5 <= param_1[2] - (long)puVar9) {
    lVar6 = (long)puVar9 - (long)param_2;
    puVar3 = puVar9;
    puVar4 = param_4;
    if (lVar6 < lVar5) {
      puVar4 = param_3 + lVar6;
      for (puVar7 = puVar4; puVar7 != param_4; puVar7 = puVar7 + 1) {
        *puVar3 = *puVar7;
        puVar3 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar3;
      }
      if (lVar6 < 1) {
        return param_2;
      }
    }
    puVar7 = param_2 + lVar5;
    sVar1 = (long)puVar3 - (long)puVar7;
    if (puVar3 + -lVar5 < puVar9) {
      puVar9 = puVar9 + (long)(puVar7 + (-(long)param_2 - (long)puVar3));
      puVar8 = puVar3 + (long)param_2 + -(long)puVar7;
      puVar7 = puVar3;
      do {
        puVar9 = puVar9 + -1;
        *puVar7 = *puVar8;
        puVar7 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar7;
        puVar8 = puVar8 + 1;
      } while (puVar9 != (undefined1 *)0x0);
    }
    puVar9 = param_2;
    if (sVar1 != 0) {
      memmove(puVar3 + -sVar1,param_2,sVar1);
    }
    for (; param_3 != puVar4; param_3 = param_3 + 1) {
      *puVar9 = *param_3;
      puVar9 = puVar9 + 1;
    }
    return param_2;
  }
  __src = (void *)*param_1;
  puVar9 = puVar9 + (lVar5 - (long)__src);
  if ((long)puVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = param_1[2] - (long)__src;
  if (uVar2 < 0x3fffffffffffffff) {
    puVar3 = (undefined1 *)(uVar2 * 2);
    if (puVar9 <= puVar3) {
      puVar9 = puVar3;
    }
    if (puVar9 == (undefined1 *)0x0) {
      pvVar10 = (void *)0x0;
      goto LAB_00e99b14;
    }
  }
  else {
    puVar9 = (undefined1 *)0x7fffffffffffffff;
  }
  pvVar10 = operator_new((ulong)puVar9);
LAB_00e99b14:
  puVar3 = (undefined1 *)((long)pvVar10 + ((long)param_2 - (long)__src));
  puVar4 = puVar3;
  if (param_3 != param_4) {
    lVar5 = -(long)__src;
    puVar7 = param_3;
    do {
      puVar8 = puVar7 + 1;
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
      puVar7 = puVar8;
    } while (param_4 != puVar8);
    __src = (void *)*param_1;
    puVar4 = (undefined1 *)
             ((long)pvVar10 + (long)(param_4 + (long)(param_2 + (lVar5 - (long)param_3))));
  }
  sVar1 = (long)param_2 - (long)__src;
  if (0 < (long)sVar1) {
    memcpy(puVar3 + -sVar1,__src,sVar1);
  }
  __n = param_1[1] - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar4,param_2,__n);
    puVar4 = puVar4 + __n;
  }
  *param_1 = (long)(puVar3 + -sVar1);
  param_1[1] = (long)puVar4;
  param_1[2] = (long)((long)pvVar10 + (long)puVar9);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return puVar3;
}




void FUN_00e99bcc(long param_1,byte param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  undefined1 local_74 [4];
  byte *local_70;
  byte *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (1 < *(uint *)(param_1 + 0x54)) {
    local_68 = (byte *)0x0;
    uStack_60 = 0;
    local_70 = (byte *)0x0;
    lVar8 = 6;
    lVar1 = 4;
    if (param_3 < 0x7e) {
      lVar1 = 2;
    }
    if (param_3 >> 0x10 == 0) {
      lVar8 = 0;
    }
    lVar2 = 0;
    if (*(char *)(param_1 + 0x58) != '\0') {
      lVar2 = 4;
    }
    local_74[0] = 0;
    FUN_00e99430(&local_70,lVar1 + lVar8 + lVar2,local_74);
    *local_70 = param_2 | 0x80;
    bVar5 = (byte)param_3;
    if (param_3 < 0x7e) {
      bVar6 = 0;
      if (*(char *)(param_1 + 0x58) != '\0') {
        bVar6 = 0x80;
      }
      local_70[1] = bVar6 | bVar5;
      if (*(char *)(param_1 + 0x58) != '\0') {
        local_70[2] = 0x12;
        local_70[3] = 0x34;
        local_70[4] = 0x56;
        local_70[5] = 0x78;
      }
    }
    else {
      bVar6 = 0;
      if (*(char *)(param_1 + 0x58) != '\0') {
        bVar6 = 0x80;
      }
      bVar3 = (byte)(param_3 >> 8);
      if (param_3 >> 0x10 == 0) {
        local_70[1] = bVar6 | 0x7e;
        local_70[2] = bVar3;
        local_70[3] = bVar5;
        if (*(char *)(param_1 + 0x58) != '\0') {
          local_70[4] = 0x12;
          local_70[5] = 0x34;
          local_70[6] = 0x56;
          local_70[7] = 0x78;
        }
      }
      else {
        local_70[1] = bVar6 | 0x7f;
        local_70[2] = (byte)(param_3 >> 0x38);
        local_70[3] = (byte)(param_3 >> 0x30);
        local_70[4] = (byte)(param_3 >> 0x28);
        local_70[5] = (byte)(param_3 >> 0x20);
        local_70[6] = (byte)(param_3 >> 0x18);
        local_70[7] = (byte)(param_3 >> 0x10);
        local_70[8] = bVar3;
        local_70[9] = bVar5;
        if (*(char *)(param_1 + 0x58) != '\0') {
          local_70[10] = 0x12;
          local_70[0xb] = 0x34;
          local_70[0xc] = 0x56;
          local_70[0xd] = 0x78;
        }
      }
    }
    FUN_00e99550(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),local_70,local_68);
    FUN_00e99e5c(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),param_4,param_5);
    if ((*(char *)(param_1 + 0x58) != '\0') && (param_3 != 0)) {
      uVar7 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x28) - param_3;
        *(byte *)(lVar1 + uVar7) = *(byte *)(lVar1 + uVar7) ^ (&DAT_01bf0623)[uVar7 & 3];
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_3);
    }
    if (local_70 != (byte *)0x0) {
      local_68 = local_70;
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 * FUN_00e99e5c(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  size_t sVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  void *__src;
  undefined1 *puVar9;
  void *pvVar10;
  size_t __n;
  
  lVar5 = (long)param_4 - (long)param_3;
  if (lVar5 < 1) {
    return param_2;
  }
  puVar9 = (undefined1 *)param_1[1];
  if (lVar5 <= param_1[2] - (long)puVar9) {
    lVar6 = (long)puVar9 - (long)param_2;
    puVar3 = puVar9;
    puVar4 = param_4;
    if (lVar6 < lVar5) {
      puVar4 = param_3 + lVar6;
      for (puVar7 = puVar4; puVar7 != param_4; puVar7 = puVar7 + 1) {
        *puVar3 = *puVar7;
        puVar3 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar3;
      }
      if (lVar6 < 1) {
        return param_2;
      }
    }
    puVar7 = param_2 + lVar5;
    sVar1 = (long)puVar3 - (long)puVar7;
    if (puVar3 + -lVar5 < puVar9) {
      puVar9 = puVar9 + (long)(puVar7 + (-(long)param_2 - (long)puVar3));
      puVar8 = puVar3 + (long)param_2 + -(long)puVar7;
      puVar7 = puVar3;
      do {
        puVar9 = puVar9 + -1;
        *puVar7 = *puVar8;
        puVar7 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar7;
        puVar8 = puVar8 + 1;
      } while (puVar9 != (undefined1 *)0x0);
    }
    puVar9 = param_2;
    if (sVar1 != 0) {
      memmove(puVar3 + -sVar1,param_2,sVar1);
    }
    for (; param_3 != puVar4; param_3 = param_3 + 1) {
      *puVar9 = *param_3;
      puVar9 = puVar9 + 1;
    }
    return param_2;
  }
  __src = (void *)*param_1;
  puVar9 = puVar9 + (lVar5 - (long)__src);
  if ((long)puVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = param_1[2] - (long)__src;
  if (uVar2 < 0x3fffffffffffffff) {
    puVar3 = (undefined1 *)(uVar2 * 2);
    if (puVar9 <= puVar3) {
      puVar9 = puVar3;
    }
    if (puVar9 == (undefined1 *)0x0) {
      pvVar10 = (void *)0x0;
      goto LAB_00e99fbc;
    }
  }
  else {
    puVar9 = (undefined1 *)0x7fffffffffffffff;
  }
  pvVar10 = operator_new((ulong)puVar9);
LAB_00e99fbc:
  puVar3 = (undefined1 *)((long)pvVar10 + ((long)param_2 - (long)__src));
  puVar4 = puVar3;
  if (param_3 != param_4) {
    lVar5 = -(long)__src;
    puVar7 = param_3;
    do {
      puVar8 = puVar7 + 1;
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
      puVar7 = puVar8;
    } while (param_4 != puVar8);
    __src = (void *)*param_1;
    puVar4 = (undefined1 *)
             ((long)pvVar10 + (long)(param_4 + (long)(param_2 + (lVar5 - (long)param_3))));
  }
  sVar1 = (long)param_2 - (long)__src;
  if (0 < (long)sVar1) {
    memcpy(puVar3 + -sVar1,__src,sVar1);
  }
  __n = param_1[1] - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar4,param_2,__n);
    puVar4 = puVar4 + __n;
  }
  *param_1 = (long)(puVar3 + -sVar1);
  param_1[1] = (long)puVar4;
  param_1[2] = (long)((long)pvVar10 + (long)puVar9);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return puVar3;
}

