// functions/00946 — 15 functions
#include "libGameKindred.h"




void FUN_00946090(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_00e829e0();
  uVar1 = FUN_00e83340();
  if ((uVar1 < 2) || (*(int *)(lVar2 + 0xa0) != 0)) {
    if (*(int *)(lVar2 + 0xa0) != 0) {
      FUN_00946864(param_1,6,0,0);
      return;
    }
    return;
  }
  if (uVar1 == 0xfffffff2) {
    uVar3 = 3;
  }
  else if (uVar1 == 0xfffffffd) {
    uVar3 = 4;
  }
  else {
    if (uVar1 != 0xfffffff7) {
      uVar3 = 1;
      uVar4 = 0;
      goto LAB_00946134;
    }
    uVar3 = 5;
  }
  uVar4 = 1;
LAB_00946134:
  FUN_009478b4(param_1,uVar3,1,uVar4);
  return;
}




void FUN_00946140(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00e83340();
  switch(iVar1) {
  case 1:
    return;
  case -5:
    uVar2 = 2;
    break;
  case -4:
  case -1:
switchD_00946170_caseD_fffffffc:
    iVar1 = *(int *)(param_1 + 0x284);
    if (*(char *)(param_1 + 0x27a) != '\0') {
      iVar1 = iVar1 + 1;
      *(int *)(param_1 + 0x284) = iVar1;
    }
    if (iVar1 < 6) goto LAB_00946208;
    FUN_009478b4(param_1,2,1,1);
  case 0:
    *(undefined4 *)(param_1 + 0x284) = 0;
    goto LAB_00946208;
  case -3:
    uVar2 = 4;
    break;
  case -2:
    uVar2 = 7;
    uVar3 = 0;
    goto LAB_00946204;
  default:
    if (iVar1 == -0xc9) {
      uVar2 = 8;
    }
    else {
      if (iVar1 != -0xe) goto switchD_00946170_caseD_fffffffc;
      uVar2 = 3;
    }
  }
  uVar3 = 1;
LAB_00946204:
  FUN_009478b4(param_1,uVar2,1,uVar3);
LAB_00946208:
  FUN_00e83330();
  return;
}




void FUN_00946214(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    if (*(byte *)(param_1 + 0x1b8) >> 1 == 0) goto LAB_00946248;
  }
  else if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_00946248;
  FUN_00e8323c(param_1 + 0x1b8);
LAB_00946248:
  uVar2 = FUN_00e82980(param_1 + 0x628);
  if (((uVar2 & 1) == 0) && (iVar1 = FUN_00e83340(), iVar1 == -0x1a)) {
    *(undefined2 *)(param_1 + 0x27b) = 0;
    *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 0x27b) = 1;
  }
  FUN_00901cd8();
  return;
}




void FUN_00946288(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *__s1;
  undefined4 local_b4;
  ulong local_b0 [2];
  void *local_a0;
  ulong local_98 [2];
  void *local_88;
  ulong local_80 [2];
  void *local_70;
  ulong local_68 [2];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar5 = thunk_FUN_00ec9510();
  if ((uVar5 & 1) == 0) goto LAB_0094640c;
  thunk_FUN_00ec9538(local_50);
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_70 = (void *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = (void *)0x0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_a0 = (void *)0x0;
  FUN_00938640(local_68,&local_b4,local_80,local_98,local_b0);
  bVar2 = *(byte *)(param_1 + 0x2c8);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2d0);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x2d8);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x2c9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(param_1 + 0x2c9);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_00946388;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00946388;
  }
  else {
LAB_00946388:
    if (0 < *(int *)(param_1 + 0x2e0)) {
      FUN_008fce60(local_68,param_1 + 0x2c8);
      local_b4 = *(undefined4 *)(param_1 + 0x2e0);
    }
  }
  FUN_009473a8(param_1,local_68,local_b4,local_50);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0094640c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00946434(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_00946468;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00946468:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_009464bc(long param_1)

{
  FUN_008fce60(param_1 + 0x198,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  FUN_008fce60(param_1 + 0x1b8,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x1d0,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x200,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x1e8,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  FUN_008fce60(param_1 + 0x2c8,&DAT_0320ffa8);
  *(undefined1 *)(param_1 + 0x2e4) = 0;
  *(undefined1 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0xffffffff;
  FUN_00e70314(param_1 + 0x268);
  FUN_00946864(param_1,1,0,0);
  FUN_00e84dec(param_1 + 0x628);
  return;
}




void FUN_0094656c(long param_1)

{
  if (*(void **)(param_1 + 0x660) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x660));
  }
  *(undefined ***)(param_1 + 0x628) = &PTR_FUN_027bb058;
  FUN_00947050(param_1 + 0x650,1);
  FUN_00e84dd8(param_1 + 0x628);
  FUN_0094669c(param_1 + 0x2f8);
  if ((*(byte *)(param_1 + 0x2c8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x2d8));
  }
  FUN_00e7fa1c(param_1 + 0x290);
  if ((*(byte *)(param_1 + 0x250) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x260));
  }
  if ((*(byte *)(param_1 + 0x230) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x240));
  }
  if ((*(byte *)(param_1 + 0x218) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x228));
  }
  if ((*(byte *)(param_1 + 0x200) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x210));
  }
  if ((*(byte *)(param_1 + 0x1e8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x1f8));
  }
  if ((*(byte *)(param_1 + 0x1d0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x1e0));
  }
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x1c8));
  }
  if ((*(byte *)(param_1 + 0x198) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x1a8));
  return;
}




void FUN_00946664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb058;
  FUN_00947050(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094669c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb028;
  if ((*(byte *)(param_1 + 0x62) & 1) != 0) {
    operator_delete((void *)param_1[100]);
  }
  if ((*(byte *)(param_1 + 0x5f) & 1) != 0) {
    operator_delete((void *)param_1[0x61]);
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    operator_delete((void *)param_1[0x5e]);
  }
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    operator_delete((void *)param_1[0x5a]);
  }
  if ((*(byte *)(param_1 + 0x55) & 1) != 0) {
    operator_delete((void *)param_1[0x57]);
  }
  if ((*(byte *)(param_1 + 0x51) & 1) != 0) {
    operator_delete((void *)param_1[0x53]);
  }
  if ((*(byte *)(param_1 + 0x4e) & 1) != 0) {
    operator_delete((void *)param_1[0x50]);
  }
  if ((*(byte *)(param_1 + 0x4b) & 1) != 0) {
    operator_delete((void *)param_1[0x4d]);
  }
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    operator_delete((void *)param_1[0x4a]);
  }
  if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
    operator_delete((void *)param_1[0x46]);
  }
  if ((*(byte *)(param_1 + 0x41) & 1) != 0) {
    operator_delete((void *)param_1[0x43]);
  }
  if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
    operator_delete((void *)param_1[0x40]);
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete((void *)param_1[0x3a]);
  }
  if ((*(byte *)(param_1 + 0x35) & 1) != 0) {
    operator_delete((void *)param_1[0x37]);
  }
  FUN_00941408(param_1 + 0x32,param_1[0x33]);
  FUN_00948824(param_1 + 0x30,1);
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    operator_delete((void *)param_1[0x2e]);
  }
  if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
    operator_delete((void *)param_1[0x2b]);
  }
  if ((*(byte *)(param_1 + 0x26) & 1) != 0) {
    operator_delete((void *)param_1[0x28]);
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
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    operator_delete((void *)param_1[0x15]);
  }
  FUN_009488b0(param_1 + 6);
  FUN_009488e8(param_1 + 0xb);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00946864(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_009468ac;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_009468ac:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 200) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 200) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00946918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_0094699c(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_008fce60(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2e0) = param_3;
  *(undefined1 *)(param_1 + 0x2e4) = 1;
  return;
}




undefined1 FUN_009469d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x27c);
}




void FUN_009469d8(long param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((*(int *)(param_1 + 0x280) != -1) && (*(int *)(param_1 + 0x280) <= param_4)) {
    FUN_0090c4b8(param_2,param_3,param_4);
    return;
  }
  return;
}




void FUN_00946a00(long param_1)

{
  byte *pbVar1;
  void *pvVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  void *pvVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  short *psVar16;
  bool bVar17;
  void *pvVar18;
  long lVar19;
  long lVar20;
  void *pvVar21;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_00946fc0();
  FUN_00e80fc0();
  FUN_00947008(param_1);
  lVar19 = param_1 + 0x2f8;
  uVar8 = FUN_00e84e74(lVar19);
  if ((uVar8 & 1) == 0) goto LAB_00946e10;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  FUN_00e81200(&local_80);
  pvVar21 = (void *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pvVar21 = local_70;
  }
  FUN_008ffcd4(pvVar21);
  uVar8 = FUN_00e84e5c(lVar19);
  if (((uVar8 & 1) != 0) && (*(int *)(param_1 + 800) == 0)) {
    FUN_00e85380(*(undefined8 *)(param_1 + 0x4d8));
    if ((*(byte *)(param_1 + 0x4a0) & 1) == 0) {
      lVar14 = param_1 + 0x4a1;
    }
    else {
      lVar14 = *(long *)(param_1 + 0x4b0);
    }
    FUN_00966d2c(lVar14);
  }
  bVar4 = *(byte *)(param_1 + 0x440);
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 != 0) goto LAB_00946ac4;
LAB_00946ae0:
    FUN_008fa54c(local_98,&DAT_01b95f90);
    FUN_008fce60(param_1 + 0x218,local_98);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    FUN_008fa54c(local_98,&DAT_01e277f2);
    FUN_008fce60(param_1 + 0x230,local_98);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    uVar7 = 0xffffffff;
LAB_00946d38:
    *(undefined4 *)(param_1 + 0x248) = uVar7;
  }
  else {
    if (*(long *)(param_1 + 0x448) == 0) goto LAB_00946ae0;
LAB_00946ac4:
    pbVar1 = (byte *)(param_1 + 0x440);
    if ((bVar4 & 1) == 0) {
      pvVar21 = (void *)(param_1 + 0x441);
      uVar8 = (ulong)(bVar4 >> 1);
    }
    else {
      pvVar21 = *(void **)(param_1 + 0x450);
      uVar8 = *(ulong *)(param_1 + 0x448);
    }
    pvVar2 = (void *)((long)pvVar21 + uVar8);
    pvVar9 = pvVar21;
    while ((((pvVar18 = pvVar2, 2 < (long)uVar8 && (uVar8 - 2 != 0)) &&
            (pvVar9 = memchr(pvVar9,0x3a,uVar8 - 2), pvVar9 != (void *)0x0)) &&
           (iVar6 = memcmp(pvVar9,"://",3), pvVar18 = pvVar9, iVar6 != 0))) {
      pvVar9 = (void *)((long)pvVar9 + 1);
      uVar8 = (long)pvVar2 - (long)pvVar9;
    }
    lVar14 = (long)pvVar18 - (long)pvVar21;
    if (pvVar18 == pvVar2) {
      lVar14 = -1;
    }
    uVar8 = 0;
    if (lVar14 != -1) {
      uVar8 = lVar14 + 3;
    }
    if ((bVar4 & 1) == 0) {
      lVar20 = param_1 + 0x441;
      uVar15 = (ulong)(bVar4 >> 1);
    }
    else {
      lVar20 = *(long *)(param_1 + 0x450);
      uVar15 = *(ulong *)(param_1 + 0x448);
    }
    if (uVar15 < uVar8) {
      lVar20 = -1;
    }
    else {
      pcVar10 = (char *)(lVar20 + uVar8);
      pcVar3 = (char *)(lVar20 + uVar15);
      while (((pcVar11 = pcVar3, 0 < (long)pcVar3 - (long)pcVar10 &&
              (pcVar10 = memchr(pcVar10,0x3a,(long)pcVar3 - (long)pcVar10), pcVar10 != (char *)0x0))
             && (pcVar11 = pcVar10, *pcVar10 != ':'))) {
        pcVar10 = pcVar10 + 1;
      }
      lVar20 = (long)pcVar11 - lVar20;
      if (pcVar11 == pcVar3) {
        lVar20 = -1;
      }
    }
    if (lVar14 == -1) {
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      local_b0 = 0x63726906;
    }
    else {
      FUN_0093ddb0(&local_b0,pbVar1,0,lVar14,pbVar1);
    }
    FUN_008fcdb8(local_98,&local_b0);
    FUN_008fce60(param_1 + 0x218,local_98);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    FUN_0093ddb0(&local_b0,pbVar1,uVar8,lVar20 - uVar8,pbVar1);
    FUN_008fcdb8(local_98,&local_b0);
    FUN_008fce60(param_1 + 0x230,local_98);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    uVar8 = (ulong)(*(byte *)(param_1 + 0x458) >> 1);
    lVar14 = param_1 + 0x459;
    if ((*(byte *)(param_1 + 0x458) & 1) != 0) {
      uVar8 = *(ulong *)(param_1 + 0x460);
      lVar14 = *(long *)(param_1 + 0x468);
    }
    FUN_008fcea8(param_1 + 0x250,lVar14,uVar8);
    if (lVar20 == -1) {
      uVar7 = 0x1a0b;
      goto LAB_00946d38;
    }
    if ((*pbVar1 & 1) == 0) {
      lVar14 = param_1 + 0x441;
    }
    else {
      lVar14 = *(long *)(param_1 + 0x450);
    }
    local_98[0] = 0;
    uVar7 = FUN_00e6ab4c(lVar14 + lVar20 + 1,local_98);
    *(undefined4 *)(param_1 + 0x248) = uVar7;
  }
  iVar6 = *(int *)(param_1 + 0x478);
  *(undefined1 *)(param_1 + 0x27c) = *(undefined1 *)(param_1 + 0x470);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x474);
  FUN_009437b0();
  if (iVar6 != 0) {
    if (*(int *)(param_1 + 0x478) != 0) {
      lVar14 = 0;
      uVar8 = 0;
      do {
        lVar20 = *(long *)(param_1 + 0x480);
        if ((*(byte *)(lVar20 + lVar14) & 1) == 0) {
          lVar12 = lVar20 + lVar14 + 1;
        }
        else {
          lVar12 = *(long *)(lVar20 + lVar14 + 0x10);
        }
        lVar20 = lVar20 + lVar14;
        if ((*(byte *)(lVar20 + 0x20) & 1) == 0) {
          lVar13 = lVar20 + 0x21;
        }
        else {
          lVar13 = *(long *)(lVar20 + 0x30);
        }
        FUN_00943868(lVar12,*(undefined4 *)(lVar20 + 0x18),lVar13,*(undefined1 *)(param_1 + 0x4e0));
        uVar8 = uVar8 + 1;
        lVar14 = lVar14 + 0x38;
      } while (uVar8 < *(uint *)(param_1 + 0x478));
    }
    FUN_00943294(3000);
  }
  uVar8 = thunk_FUN_00ec9300();
  if ((uVar8 & 1) != 0) {
    FUN_00ec645c(*(undefined1 *)(param_1 + 0x620));
  }
  FUN_00e836c0(lVar19);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00946e10:
  if (((*(char *)(param_1 + 0x27b) == '\0') && (uVar8 = FUN_00e80f58(), (uVar8 & 1) != 0)) &&
     (uVar8 = FUN_00e82a48(), (uVar8 & 1) != 0)) {
    FUN_009052d8();
    *(undefined1 *)(param_1 + 0x27b) = 1;
  }
  uVar8 = FUN_00e80f6c();
  bVar17 = false;
  if ((uVar8 & 1) != 0) {
    if (*(char *)(param_1 + 0x27b) == '\0') {
      bVar17 = false;
    }
    else {
      lVar19 = param_1 + 0x628;
      uVar8 = FUN_00e84e74(lVar19);
      bVar17 = false;
      if ((uVar8 & 1) != 0) {
        if (*(uint *)(param_1 + 0x650) == 0) {
          bVar17 = false;
        }
        else {
          bVar17 = false;
          lVar20 = (ulong)*(uint *)(param_1 + 0x650) * 0x148;
          lVar14 = *(long *)(param_1 + 0x658) + 0x140;
          do {
            if (((*(byte *)(lVar14 + 2) & 8) == 0) || (DAT_02c7ece0 == (code *)0x0)) {
              if ((*(byte *)(lVar14 + 2) & 1) == 0) {
                bVar17 = true;
              }
            }
            else {
              (*DAT_02c7ece0)(lVar14 + -0x110);
            }
            lVar20 = lVar20 + -0x148;
            lVar14 = lVar14 + 0x148;
          } while (lVar20 != 0);
        }
      }
      uVar8 = FUN_00e84e4c(lVar19);
      if ((uVar8 & 1) == 0) {
        FUN_00e84dec(lVar19);
        FUN_00e82980(lVar19);
      }
    }
  }
  if (DAT_032106f0 != 0) {
    psVar16 = (short *)(DAT_032106f8 + 0x140);
    lVar19 = (ulong)DAT_032106f0 * 0x148;
    do {
      if (*psVar16 != -6) {
        if (((*(byte *)(psVar16 + 1) & 8) == 0) || (DAT_02c7ece0 == (code *)0x0)) {
          bVar17 = (bool)(bVar17 | (*(byte *)(psVar16 + 1) & 1) == 0);
        }
        else {
          (*DAT_02c7ece0)(psVar16 + -0x88);
        }
      }
      lVar19 = lVar19 + -0x148;
      psVar16 = psVar16 + 0xa4;
    } while (lVar19 != 0);
  }
  if (DAT_032106f8 != 0) {
    if (DAT_032106f0 != 0) {
      lVar14 = (ulong)DAT_032106f0 * 0x148;
      lVar19 = DAT_032106f8;
      do {
        FUN_00948920(lVar19);
        lVar14 = lVar14 + -0x148;
        lVar19 = lVar19 + 0x148;
      } while (lVar14 != 0);
    }
    DAT_032106f0 = 0;
  }
  if (bVar17) {
    FUN_00e829b4();
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00946fc0(long param_1)

{
  ulong uVar1;
  
  if ((((*(char *)(param_1 + 0x27a) != '\0') && (uVar1 = FUN_00a9b890(), (uVar1 & 1) != 0)) &&
      (uVar1 = FUN_00a9b8a4(), (uVar1 & 1) == 0)) && (*(int *)(param_1 + 0x288) != 0)) {
    FUN_00947980(param_1);
    *(undefined4 *)(param_1 + 0x288) = 0;
  }
  return;
}

