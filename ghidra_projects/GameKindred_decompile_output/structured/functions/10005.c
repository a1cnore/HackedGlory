// functions/10005 — 520 functions
#include "GameKindred.h"




void thunk_FUN_100050910(void)

{
  FUN_100050910();
  return;
}




void thunk_FUN_100050910(void)

{
  FUN_100050910();
  return;
}




void thunk_FUN_100050910(void)

{
  FUN_100050910();
  return;
}




void FUN_100050308(long param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 1;
  return;
}




void FUN_100050314(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 2;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x48) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return;
}




void FUN_100050330(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 3;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x48) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return;
}




void FUN_10005034c(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 4;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x48) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return;
}




void FUN_100050368(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 5;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x38) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}




void FUN_100050384(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}




void FUN_10005038c(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_1000503b4(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000503e0(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100050404(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_10005042c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100050434(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_10005043c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10144d1a8;
  param_1[5] = &PTR_FUN_10144d1d8;
  param_1[7] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 8) = DAT_101dc0b88;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = uVar1;
  param_1[0xb] = 0;
  return param_1;
}




void FUN_1000504a4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000504ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1000504b0(void)

{
  if ((DAT_10184db80 & 1) == 0) {
    DAT_10184db78 = DAT_101872e38;
    DAT_10184db80 = 1;
  }
  return;
}




undefined8 * FUN_1000504dc(undefined8 *param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(param_1 + 5);
  *param_1 = &PTR_FUN_10144d208;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xb4) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = FUN_10005059c;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  param_1[0xe] = FUN_1000505fc;
  param_1[0x13] = 0;
  param_1[0x14] = param_1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0xbff;
  FUN_100050770(puVar1,0,1);
  FUN_1000507f4(puVar1,0,0,0);
  return param_1;
}




void FUN_10005059c(long param_1)

{
  long lVar1;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0xa4) == DAT_10184dd68)) &&
     (lVar1 = FUN_1003a3524(), lVar1 != 0)) {
    FUN_1000507f4(param_1 + 0x28,1,0,0);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000505fc(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_54;
  
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    lVar3 = 0;
  }
  if ((int)param_1[0x15] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (iVar1 == 0) {
      uVar4 = (ulong)*(uint *)(param_1 + 0x15);
      if (*(uint *)(param_1 + 0x15) != 0) {
        uVar5 = 0;
        do {
          piVar6 = (int *)((long)param_1 + uVar5 * 4 + 0xac);
          if (*piVar6 != -1) {
            lVar2 = *(long *)(lVar3 + 0x18);
            while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dc68))) {
              lVar2 = *(long *)(lVar2 + 0x20);
            }
            FUN_10002a9bc();
            *piVar6 = -1;
            uVar4 = (ulong)*(uint *)(param_1 + 0x15);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dc68))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      if ((int)param_1[0x15] != 0) {
        uVar4 = 0;
        do {
          FUN_10002a880(lVar3,auStack_88,param_1[uVar4 + 0x18]);
          uStack_60 = uRam0000000101dc1cc8;
          local_68 = _DAT_101dc1cc0;
          FUN_10002a8e4(lVar3,auStack_88,param_1[uVar4 + 0x18],&local_54);
          *(undefined4 *)((long)param_1 + uVar4 * 4 + 0xac) = local_54;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x15));
      }
    }
  }
  return;
}




void FUN_100050770(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_1000507a4;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_1000507a4:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_1000507f4(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_100050838;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_100050838:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010005089c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_100050910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d208;
  FUN_1010a0064();
  return;
}




void FUN_100050920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d208;
  FUN_1010a0064();
  return;
}




void FUN_100050930(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144d208;
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100050950(long param_1)

{
  FUN_100050958(param_1 + 0x28);
  return;
}




void FUN_100050958(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x000100050994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




long FUN_10005099c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}




void FUN_1000509c8(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = uVar1 + 1;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0xc0) = param_2;
  return;
}




undefined8 FUN_1000509e0(void)

{
  return 0;
}




void FUN_1000509e8(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_100050a14(void)

{
  if ((DAT_10184dc70 & 1) == 0) {
    DAT_10184dc68 = DAT_101872e38;
    DAT_10184dc70 = 1;
  }
  return;
}




undefined8 FUN_100050a40(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
  if (((int)uVar4 == 0x1f) || (1 < *(ushort *)(param_2 + uVar4 * 0x38 + 0x90) - 3)) {
    iVar1 = FUN_1001018d0(param_3);
    if (iVar1 == 1) {
      lVar2 = FUN_10048c8e4(param_2);
      if (lVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_1001018e0(param_3);
      uVar3 = FUN_1003d77ec(lVar2,uVar3);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar3 = FUN_1001018e0(param_3);
      uVar4 = FUN_10046e6fc(lVar2,uVar3);
      if ((uVar4 & 1) == 0) goto LAB_100050acc;
    }
    else {
      iVar1 = FUN_1001018d0(param_3);
      if (iVar1 == 0) {
        uVar3 = FUN_1001018d8(param_3);
        uVar3 = FUN_1003c1088(param_2,uVar3);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
      }
    }
    uVar3 = 1;
  }
  else {
LAB_100050acc:
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_100050b08(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_10144d240;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}




void FUN_100050b20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100345b94();
  uVar1 = FUN_10034c450(uVar1,"*PretargetModalSelector*");
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}




undefined8
FUN_100050b50(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char local_81;
  long local_80 [5];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  uVar4 = FUN_100060a70();
  if ((uVar4 & 1) == 0) {
    iVar1 = FUN_10012709c();
    iVar3 = (int)param_7;
    iVar8 = (int)param_6;
    if (iVar1 == 1) {
      uVar4 = FUN_10031615c(9);
      if (((uVar4 & 1) == 0) || (iVar1 = FUN_10031615c(10), iVar1 == 0)) goto LAB_100050bd0;
LAB_100050d18:
      if ((iVar3 != 4) && (iVar3 != 1 || iVar8 != 3)) {
        iVar3 = FUN_100060abc();
        iVar1 = 3;
        if (iVar3 == 0) {
          iVar1 = 1;
        }
        if (iVar1 != iVar8) goto LAB_100050d50;
      }
    }
    else {
      iVar1 = FUN_10012709c();
      if (((iVar1 == 0) && (iVar1 = FUN_10031615c(0xb), iVar1 != 0)) && (iVar3 == 0))
      goto LAB_100050d18;
LAB_100050bd0:
      if (((iVar3 != 4) && (*(long *)(param_3 + 0x28) != 0)) &&
         (*(long *)(param_3 + 0x28) != param_4)) goto LAB_100050d50;
      lVar6 = param_4;
      if (iVar8 != 1) {
        if (iVar8 != 3) goto LAB_100050bf4;
        lVar6 = 0;
      }
      *(long *)(param_3 + 0x28) = lVar6;
    }
LAB_100050bf4:
    local_81 = '\0';
    uStack_98 = param_5[1];
    local_a0 = *param_5;
    local_90 = param_5[2];
    FUN_1000bda58(param_1,param_2,&local_a0);
    FUN_1000e8d1c(0,&local_a0,auStack_b0);
    uVar2 = FUN_1010a0218(*(undefined8 *)(param_3 + 0x10),local_80,5,DAT_10184db30);
    if (uVar2 != 0) {
      uVar4 = 0;
      uVar10 = (ulong)uVar2;
      do {
        if ((local_80[uVar4] != 0) &&
           (uVar5 = FUN_100054f58(local_80[uVar4],auStack_b0), (uVar5 & 1) != 0))
        goto LAB_100050cb0;
        uVar4 = uVar4 + 1;
      } while (uVar10 != uVar4);
      uVar4 = 0;
      do {
        if ((local_80[uVar4] != 0) &&
           (uVar5 = FUN_100055040(local_80[uVar4],auStack_b0), (uVar5 & 1) != 0))
        goto LAB_100050cb0;
        uVar4 = uVar4 + 1;
      } while (uVar10 != uVar4);
    }
  }
LAB_100050d50:
  uVar7 = 0;
LAB_100050d54:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
LAB_100050cb0:
  uVar7 = FUN_1000548e8(local_80[uVar4 & 0xffffffff],&local_a0,auStack_b0,param_4,param_6,param_7,
                        &local_81);
  if (local_81 != '\0') {
    plVar9 = local_80;
    do {
      if ((uVar4 != 0) && (*plVar9 != 0)) {
        FUN_100054bc0();
      }
      uVar4 = uVar4 - 1;
      plVar9 = plVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  goto LAB_100050d54;
}




bool FUN_100050d90(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x28) == param_2;
}




void FUN_100050da0(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  ulong uVar14;
  long local_150;
  undefined4 local_140 [2];
  undefined1 auStack_138 [112];
  undefined1 auStack_c8 [16];
  long local_b8 [5];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined8 *)(param_1 + 8) = param_3;
  FUN_10010187c(auStack_c8);
  FUN_100051124(param_1,auStack_c8);
  uVar4 = FUN_100101910(param_3,auStack_c8);
  if ((uVar4 & 1) == 0) {
    iVar1 = FUN_1001018f0(param_3);
    if (iVar1 == 0) {
      lVar9 = *(long *)(param_2 + 0x18);
      while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184e000))) {
        lVar9 = *(long *)(lVar9 + 0x20);
      }
      uVar5 = FUN_1001018e0(param_3);
      pcVar6 = (char *)FUN_10046e620(lVar9,uVar5);
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(param_2 + 0x18);
      while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_10184dab8))) {
        lVar10 = *(long *)(lVar10 + 0x20);
      }
      uVar5 = FUN_1001018d8(param_3);
      pcVar6 = (char *)FUN_1004612e0(lVar10,uVar5);
      lVar9 = 0;
    }
    if ((pcVar6 != (char *)0x0) || (pcVar6 = *(char **)(param_1 + 0x18), pcVar6 != (char *)0x0)) {
      *(char **)(param_1 + 0x20) = pcVar6;
      iVar1 = FUN_1004d2524(*(undefined8 *)(pcVar6 + 0x20));
      if (iVar1 == 0) {
        local_150 = 0;
        uVar2 = 1;
      }
      else {
        FUN_10034cb1c(local_b8,*(undefined8 *)(pcVar6 + 0x20));
        FUN_1003ba954(local_140,(undefined4)local_b8[0]);
        FUN_1003b05e8(auStack_138,local_140[0]);
        FUN_1003b1658(auStack_138,*(undefined4 *)(param_2 + 0x260));
        uVar2 = FUN_1003a6ce4(auStack_138,local_b8,5,0);
        if ((int)uVar2 < 1) goto LAB_100050e10;
        local_150 = (long)(int)uVar2;
      }
      uVar4 = 0;
      do {
        uVar5 = FUN_1010a0298(*(undefined8 *)(param_1 + 0x10),DAT_10184db30);
        fVar13 = *(float *)(pcVar6 + 0x40);
        iVar3 = FUN_1001018f0(param_3);
        if (iVar3 == 0) {
          uVar7 = FUN_1001018e0(param_3);
          uVar12 = FUN_10046e668(lVar9,uVar7);
        }
        else {
          uVar7 = FUN_1001018d8(param_3);
          uVar12 = FUN_1003e1f70(lVar10,uVar7);
        }
        if (*pcVar6 == '\0') {
          uVar14 = (ulong)(uint)(fVar13 * 0.5);
          iVar3 = FUN_100060a70();
          if ((iVar3 != 0) && (pcVar6[0x58] == '\0')) goto LAB_100050fac;
        }
        else {
LAB_100050fac:
          uVar14 = uVar12;
        }
        lVar11 = param_2;
        if (iVar1 != 0 && (long)uVar4 < local_150) {
          lVar11 = local_b8[uVar4];
        }
        iVar3 = FUN_1001018f0(param_3);
        if (iVar3 == 0) {
          uVar7 = FUN_1001018e0(param_3);
          uVar7 = FUN_10046e774(lVar9,uVar7);
        }
        else {
          uVar7 = FUN_1001018d8(param_3);
          uVar7 = FUN_100461870(lVar10,uVar7);
        }
        iVar3 = FUN_1001018f0(param_3);
        if (iVar3 == 0) {
          uVar8 = FUN_1001018e0(param_3);
          uVar8 = FUN_10046e7a4(lVar9,uVar8);
        }
        else {
          uVar8 = FUN_1001018d8(param_3);
          uVar8 = FUN_10046187c(lVar10,uVar8);
        }
        FUN_1000542ec(uVar14,uVar12,uVar5,pcVar6,param_1,param_2,lVar11,param_3,uVar7,uVar8);
        iVar3 = FUN_100060a70();
        if (iVar3 != 0) {
          uVar7 = FUN_100061d48();
          uVar8 = FUN_100061ce8();
          FUN_100054614(uVar5,uVar7,uVar8);
        }
        FUN_100054624(uVar5,param_4);
        FUN_100055a88(uVar5);
        FUN_1000bd9b4();
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
      uVar5 = 1;
      goto LAB_1000510e0;
    }
  }
LAB_100050e10:
  uVar5 = 0;
LAB_1000510e0:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar5);
}




void FUN_100051124(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 auStack_70 [5];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_1010a0218(*(undefined8 *)(param_1 + 0x10),auStack_70,5,DAT_10184db30);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    uVar5 = (ulong)(uVar2 - 1);
    puVar6 = auStack_70;
    do {
      if ((param_2 != (undefined8 *)0x0) && (uVar5 == 0)) {
        puVar3 = (undefined8 *)FUN_100055a80(auStack_70[uVar2 - 1]);
        uVar1 = *(undefined4 *)(puVar3 + 1);
        *param_2 = *puVar3;
        *(undefined4 *)(param_2 + 1) = uVar1;
      }
      FUN_1010a1830(*puVar6);
      uVar5 = uVar5 - 1;
      uVar4 = uVar4 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
    FUN_1000bd9a0();
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000511ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [56];
  
  iVar2 = FUN_100050a40();
  if (iVar2 != 0) {
    iVar2 = FUN_1001018f0(param_3);
    if (iVar2 == 0) {
      uVar4 = *param_4;
      uVar5 = param_4[1];
      uVar6 = param_4[2];
      uVar3 = FUN_1001018e0(param_3);
      FUN_100011228(uVar4,uVar5,uVar6,auStack_78,uVar3);
    }
    else {
      uVar1 = FUN_1001018d8(param_3);
      FUN_1003d4214(auStack_78,param_4,uVar1);
    }
    FUN_100345498(auStack_78);
  }
  return;
}




void FUN_100051284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [56];
  
  iVar2 = FUN_100050a40();
  if (iVar2 != 0) {
    iVar2 = FUN_1001018f0(param_3);
    if (iVar2 == 0) {
      uVar3 = FUN_1001018e0(param_3);
      FUN_1000111f4(auStack_58,param_4,uVar3);
    }
    else {
      uVar1 = FUN_1001018d8(param_3);
      FUN_1003d41e4(auStack_58,param_4,uVar1);
    }
    FUN_100345498(auStack_58);
  }
  return;
}




undefined8 FUN_1000512fc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_10005a95c(*(undefined8 *)(param_1 + 0x10));
  iVar1 = FUN_1001018d0(*(undefined8 *)(param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = FUN_1003a7540(uVar2);
    uVar3 = FUN_1001018d8(*(undefined8 *)(param_1 + 8));
    uVar2 = FUN_1003c1b18(uVar2,uVar3);
    return uVar2;
  }
  iVar1 = FUN_1001018d0(*(undefined8 *)(param_1 + 8));
  if (iVar1 == 1) {
    uVar2 = FUN_100490234(uVar2);
    uVar3 = FUN_1001018e0(*(undefined8 *)(param_1 + 8));
    uVar2 = FUN_10046e6c4(uVar2,uVar3);
    return uVar2;
  }
  return 0;
}




void FUN_100051394(void)

{
  if ((DAT_10184db38 & 1) == 0) {
    DAT_10184db30 = DAT_101872e38;
    DAT_10184db38 = 1;
  }
  return;
}




void FUN_1000513c0(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




void FUN_1000513ec(void)

{
  if ((DAT_10184e008 & 1) == 0) {
    DAT_10184e000 = DAT_101872e38;
    DAT_10184e008 = 1;
  }
  return;
}




void FUN_100051418(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  undefined4 local_38;
  
  local_40 = param_2 + 0x28;
  local_38 = *(undefined4 *)(param_2 + 0x30);
  param_1 = param_1 + 0x28;
  FUN_1003e01e4(param_1,&local_40);
  FUN_1003e0980(param_1,0);
  FUN_1003e0994(param_1,param_3,param_4);
  lVar2 = FUN_1003e098c(param_1);
  uVar1 = FUN_1004d2524("__PLAYER_LOCK__");
  uVar3 = FUN_100015208("__PLAYER_LOCK__",uVar1,0x12345678);
  (**(code **)(*(long *)(lVar2 + 0x1688) + 8))(lVar2 + 0x1688,uVar3);
  return;
}




void FUN_1000514d0(long param_1)

{
  long lVar1;
  
  DAT_10184db08 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184db08 + 1;
  lVar1 = param_1 + (ulong)DAT_10184db08 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_100051788;
  *(code **)(lVar1 + 0xb8) = FUN_1000517b8;
  *(uint *)(lVar1 + 0xa4) = DAT_10184db08;
  *(undefined4 *)(lVar1 + 0xa8) = 0x1e88;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_100051570,0);
  FUN_1010a0990(param_1,0x377a062d,FUN_100051590,0);
  return;
}




void FUN_100051570(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184db08) {
    param_1 = 0;
  }
  FUN_1003e0630(param_1 + 0x28);
  return;
}




void FUN_100051590(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_1000516e8(param_1,in_stack_00000000);
  return;
}




void FUN_1000515bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003e098c(param_1 + 0x28);
  FUN_1003e49f0(uVar1,param_2);
  return;
}




void FUN_1000515e4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_1003e098c(param_1 + 0x28);
  uVar1 = FUN_1004d2524("__HUD__");
  uVar3 = FUN_100015208("__HUD__",uVar1,0x12345678);
  (**(code **)(*(long *)(lVar2 + 0x1688) + 8))(lVar2 + 0x1688,uVar3);
  lVar2 = FUN_1003e098c(param_1 + 0x28);
  uVar1 = FUN_1004d2524("__HUD__");
  uVar3 = FUN_100015208("__HUD__",uVar1,0x12345678);
  puVar4 = (undefined8 *)(**(code **)(*(long *)(lVar2 + 0x1688) + 0x10))(lVar2 + 0x1688,uVar3);
  *puVar4 = param_2;
  return;
}




void FUN_1000516a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003e098c(param_1 + 0x28);
  FUN_1003e49f8(uVar1,0x3f2);
  return;
}




void FUN_1000516c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003e098c(param_1 + 0x28);
  FUN_1003e49f8(uVar1,param_2);
  return;
}




void FUN_1000516e8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_40 [2];
  int local_38 [2];
  
  iVar1 = FUN_1003bb288(param_2);
  FUN_10034cb1c(local_38,"5v5_Blackclaw_Uncaptured");
  if (iVar1 == local_38[0]) {
    uVar2 = FUN_1003e098c(param_1 + 0x28);
    FUN_1003e49f8(uVar2,0x18);
  }
  iVar1 = FUN_1003bb288(param_2);
  FUN_10034cb1c(local_40,"5v5_Ghostwing");
  if (iVar1 == local_40[0]) {
    uVar2 = FUN_1003e098c(param_1 + 0x28);
    FUN_1003e49f8(uVar2,0x19);
  }
  return;
}




undefined8 * FUN_100051788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d258;
  FUN_1003e0174(param_1 + 5);
  return param_1;
}




void FUN_1000517b8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000517c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1000517c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d258;
  FUN_1003e01b8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_1000517f4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144d258;
  FUN_1003e01b8(param_1 + 5);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100051828(void)

{
  if ((DAT_10184db10 & 1) == 0) {
    DAT_10184db08 = DAT_101872e38;
    DAT_10184db10 = 1;
  }
  return;
}




void FUN_100051854(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  uVar2 = FUN_1010a0298(param_1,DAT_10184dee0);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  iVar1 = FUN_1004e2f38(&DAT_101d911b0);
  if (iVar1 == 2) {
    uVar3 = 2;
  }
  else {
    iVar1 = FUN_1004e2f38(&DAT_101d911b0);
    uVar3 = 1;
    if (iVar1 == 3) {
      uVar3 = 2;
    }
  }
  FUN_10003caac(*(undefined8 *)(param_1 + 0x38),uVar3,0);
  return;
}




void FUN_1000518c0(long param_1)

{
  long lVar1;
  
  DAT_10184e010 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e010 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e010 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_100051ff8;
  *(code **)(lVar1 + 0xb8) = FUN_100052038;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e010;
  *(undefined4 *)(lVar1 + 0xa8) = 0x98;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,thunk_FUN_100051a70,0);
  FUN_1010a0990(param_1,0x8b950a0d,FUN_1000519b8,0);
  FUN_1010a0990(param_1,0x5ae807ed,FUN_1000519ec,0);
  FUN_1010a0990(param_1,0x80a40995,FUN_100051a20,0);
  FUN_1010a0990(param_1,0x76660925,FUN_100051a50,0);
  return;
}




void thunk_FUN_100051a70(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x40);
  fVar1 = (float)FUN_1010a1cd4();
  fVar2 = fVar2 - fVar1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x40) = fVar2;
  if ((((fVar2 <= 0.0) && (*(int *)(param_1 + 0x48) == 1)) && (*(long *)(param_1 + 0x30) != 0)) &&
     ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2f8) >> 1 & 1) == 0)) {
    FUN_100051b08(param_1);
    return;
  }
  return;
}




void FUN_1000519b8(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100051b70(param_1,in_stack_00000000,*(undefined8 *)((ulong)&stack0x00000000 | 8),
                *(undefined4 *)((undefined8 *)((ulong)&stack0x00000000 | 8) + 1));
  return;
}




void FUN_1000519ec(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100051d44(param_1,in_stack_00000000,*(undefined8 *)((ulong)&stack0x00000000 | 8),
                *(undefined4 *)((undefined8 *)((ulong)&stack0x00000000 | 8) + 1));
  return;
}




void FUN_100051a20(undefined8 param_1,undefined8 param_2)

{
  FUN_100051e98(param_1,param_2,*(undefined8 *)((ulong)&stack0x00000000 | 8),
                *(undefined4 *)((undefined8 *)((ulong)&stack0x00000000 | 8) + 1));
  return;
}




void FUN_100051a50(long param_1)

{
  if (*(int *)(param_1 + 0x48) == 2) {
    *(undefined1 *)(param_1 + 0x5c) = 0;
    if (*(long *)(param_1 + 0x50) == 0) {
      FUN_100051f48();
      return;
    }
  }
  return;
}




void FUN_100051a70(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x40);
  fVar1 = (float)FUN_1010a1cd4();
  fVar2 = fVar2 - fVar1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x40) = fVar2;
  if ((((fVar2 <= 0.0) && (*(int *)(param_1 + 0x48) == 1)) && (*(long *)(param_1 + 0x30) != 0)) &&
     ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2f8) >> 1 & 1) == 0)) {
    FUN_100051b08(param_1);
    return;
  }
  return;
}




bool FUN_100051ae4(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x50) != param_2) {
    return *(long *)(param_1 + 0x78) == param_2;
  }
  return true;
}




void FUN_100051b08(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [32];
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = *(undefined8 *)(param_1 + 0x60);
  local_28 = *(undefined4 *)(param_1 + 0x68);
  lVar1 = *(long *)(param_1 + 0x28);
  FUN_10005ecec(0x3f800000,auStack_50,&local_30,0);
  FUN_10005f394(lVar1 + 0x260,auStack_50);
  *(undefined4 *)(param_1 + 0x40) = 0x3e4ccccd;
  return;
}




void FUN_100051b70(long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_40;
  undefined4 local_38;
  
  iVar1 = FUN_100316180(3);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  if ((param_4 == 0) || (iVar2 == param_4)) {
    for (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x18); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184db30) goto LAB_100051bf4;
    }
    if (((*(ushort *)(*(long *)(param_1 + 0x30) + 0x2f8) & 0x2004) == 0) &&
       (lVar5 = FUN_1000e8ca8(param_2), lVar5 != 0)) {
      if ((*(byte *)(lVar5 + 0x2f7) >> 3 & 1) == 0) {
        if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x50) != param_3)) {
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x50);
          *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x58);
          *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x68);
        }
        *(undefined4 *)(param_1 + 0x58) = 5;
        *(undefined4 *)(param_1 + 0x48) = 2;
        *(long *)(param_1 + 0x50) = param_3;
        *(undefined1 *)(param_1 + 0x5c) = 1;
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar5 + 0x260);
        FUN_10005a6a0(*(undefined8 *)(param_1 + 0x28),lVar5,1,0);
        FUN_10003cc98(*(undefined8 *)(param_1 + 0x38));
        return;
      }
      uVar4 = FUN_100126a08();
      if ((uVar4 & 1) == 0) {
        FUN_10005a48c(*(undefined8 *)(param_1 + 0x28),lVar5);
        *(undefined4 *)(param_1 + 0x40) = 0x3e4ccccd;
        return;
      }
    }
LAB_100051bf4:
    if ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2f8) >> 1 & 1) == 0) {
      uVar3 = FUN_1003a3e24();
      iVar2 = FUN_1000e8dc8(param_2,uVar3,&local_40);
      if (iVar2 != 0) {
        if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x50) != param_3)) {
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x50);
          *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x58);
          *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x68);
        }
        *(undefined4 *)(param_1 + 0x58) = 5;
        *(undefined1 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x48) = 1;
        *(long *)(param_1 + 0x50) = param_3;
        *(undefined8 *)(param_1 + 0x60) = local_40;
        *(undefined4 *)(param_1 + 0x68) = local_38;
        FUN_100051b08(param_1);
        FUN_10003cbfc(*(undefined8 *)(param_1 + 0x38),&local_40);
        FUN_10003cc58(*(undefined8 *)(param_1 + 0x38));
      }
    }
  }
  return;
}




void FUN_100051d44(long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((*(long *)(param_1 + 0x50) == param_3) || (*(long *)(param_1 + 0x78) == param_3)) {
    iVar1 = FUN_100316180(3);
    iVar3 = 1;
    if (iVar1 != 0) {
      iVar3 = 2;
    }
    if ((param_4 == 0) || (iVar3 == param_4)) {
      if (*(long *)(param_1 + 0x50) == param_3) {
        lVar2 = param_1 + 0x48;
      }
      else {
        if (*(long *)(param_1 + 0x78) != param_3) {
          return;
        }
        lVar2 = param_1 + 0x70;
      }
      FUN_100051de8(param_1,lVar2,param_2);
      return;
    }
  }
  return;
}




void FUN_100051de8(long param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_40;
  int local_38;
  
  if (*param_2 == 1) {
    if ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2f8) >> 1 & 1) == 0) {
      uVar2 = FUN_1003a3e24();
      iVar1 = FUN_1000e8dc8(param_3,uVar2,&local_40);
      if (iVar1 == 0) {
        puVar3 = (undefined8 *)FUN_10045154c(*(undefined8 *)(param_1 + 0x30));
        local_38 = *(int *)(puVar3 + 1);
        local_40 = *puVar3;
      }
      else {
        *(undefined8 *)(param_2 + 6) = local_40;
        param_2[8] = local_38;
      }
      if ((int *)(param_1 + 0x48) == param_2) {
        FUN_10003cbfc(*(undefined8 *)(param_1 + 0x38),&local_40);
        FUN_10003cc58(*(undefined8 *)(param_1 + 0x38));
      }
    }
  }
  return;
}




void FUN_100051e98(long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if ((*(long *)(param_1 + 0x50) == param_3) || (*(long *)(param_1 + 0x78) == param_3)) {
    iVar1 = FUN_100316180(3);
    iVar2 = 1;
    if (iVar1 != 0) {
      iVar2 = 2;
    }
    if ((param_4 == 0) || (iVar2 == param_4)) {
      if (*(long *)(param_1 + 0x50) == param_3) {
        if ((*(char *)(param_1 + 0x5c) == '\0') || (*(long *)(param_1 + 0x78) == 0)) {
          FUN_100051f48(param_1);
        }
        else {
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
      }
      if (*(long *)(param_1 + 0x78) == param_3) {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x80) = 5;
        *(undefined1 *)(param_1 + 0x84) = 0;
      }
    }
  }
  return;
}




void FUN_100051f48(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 5;
  *(undefined1 *)(param_1 + 0x84) = 0;
  if (*(int *)(param_1 + 0x48) == 2) {
    lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x60));
    if (lVar1 != 0) {
      FUN_10005a6a0(*(undefined8 *)(param_1 + 0x28),lVar1,1,0);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) == 1) {
    FUN_100051b08(param_1);
    FUN_10003cc58(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}




void FUN_100051fe4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100051ff8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10144d288;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xb) = 5;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 5;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  return;
}




void FUN_100052038(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100052040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100052044(void)

{
  if ((DAT_10184dee8 & 1) == 0) {
    DAT_10184dee0 = DAT_101872e38;
    DAT_10184dee8 = 1;
  }
  return;
}




void FUN_100052070(void)

{
  if ((DAT_10184e018 & 1) == 0) {
    DAT_10184e010 = DAT_101872e38;
    DAT_10184e018 = 1;
  }
  return;
}




void FUN_10005209c(void)

{
  if ((DAT_10184db38 & 1) == 0) {
    DAT_10184db30 = DAT_101872e38;
    DAT_10184db38 = 1;
  }
  return;
}




undefined8 * FUN_1000520c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_10005ebfc(param_1 + 5);
  *param_1 = &PTR_FUN_10144d2b8;
  param_1[5] = &PTR_FUN_10144d300;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = DAT_101dc0b88;
  FUN_1004e3004(param_1 + 0xe);
  FUN_1004e3004(param_1 + 0xf);
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  uVar1 = FUN_100345b94();
  uVar1 = FUN_10034c450(uVar1,"*JoystickBasicAttackRingIndicator*");
  param_1[10] = uVar1;
  uVar1 = FUN_100345b94();
  uVar1 = FUN_10034c450(uVar1,"*JoystickBasicAttackReticle*");
  param_1[0xb] = uVar1;
  return param_1;
}




void FUN_100052170(long param_1)

{
  FUN_10005ec0c(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100052198(long param_1)

{
  FUN_10005ec0c();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_1000521bc(long param_1)

{
  void *pvVar1;
  
  FUN_10005ec0c(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000521e8(long param_1)

{
  void *pvVar1;
  
  FUN_10005ec0c();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_100052210(long param_1)

{
  long lVar1;
  
  DAT_10184e020 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e020 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e020 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_1000520c8;
  *(code **)(lVar1 + 0xb8) = FUN_100053054;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e020;
  *(undefined4 *)(lVar1 + 0xa8) = 0x88;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,thunk_FUN_100052c38,0);
  FUN_1010a0990(param_1,0xdc302c4,thunk_FUN_100052a08,0);
  FUN_1010a0990(param_1,0xedbb0d48,FUN_1000522d4,0);
  return;
}




void thunk_FUN_100052c38(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint64_t uVar6;
  ulong uVar7;
  float fVar8;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar4 = FUN_10005a95c(*(undefined8 *)(param_1 + 0x38));
        lVar3 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
        if ((*(byte *)(lVar3 + 0x2f9) & 1) == 0) {
          plVar2 = *(long **)(param_1 + 0x60);
          lVar3 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
              lVar3 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              lVar3 = 0;
              *(undefined8 *)(param_1 + 0x60) = 0;
              *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
            }
          }
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f;
          if (((int)uVar7 == 0x1f) || (1 < *(ushort *)(lVar3 + uVar7 * 0x38 + 0x90) - 3)) {
            uVar5 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
            iVar1 = FUN_10045c7e4(uVar4,uVar5,1);
            if (iVar1 != 0) {
              uVar5 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
              fVar8 = (float)FUN_1003e4e34(uVar4,uVar5);
              if ((fVar8 <= 144.0) &&
                 (uVar6 = _mach_absolute_time(),
                 (double)((uVar6 - *(long *)(param_1 + 0x70)) * DAT_101d91638) * 1e-09 <= 7.0)) {
                return;
              }
            }
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
    }
  }
  FUN_100052e80(param_1);
  return;
}




void thunk_FUN_100052a08(void)

{
  FUN_100052a08();
  return;
}




void FUN_1000522d4(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100052db4(param_1,in_stack_00000000);
  return;
}




void FUN_100052300(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_100052308(long param_1)

{
  int iVar1;
  
  FUN_10005234c();
  if ((*(int *)(param_1 + 0x84) == 0) && (iVar1 = FUN_10005241c(param_1), iVar1 != 0)) {
    FUN_1004e3004(param_1 + 0x78);
  }
  *(undefined2 *)(param_1 + 0x80) = 1;
  return;
}




void FUN_10005234c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  long local_40;
  undefined4 local_38;
  
  if ((*(long *)(param_1 + 0x40) == 0) && (*(long *)(param_1 + 0x38) != 0)) {
    lVar1 = FUN_10005a95c();
    lVar2 = FUN_10005a95c(*(undefined8 *)(param_1 + 0x38));
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar4 = *(float *)(lVar2 + 0x78) + *(float *)(lVar2 + 300) * (*(float *)(lVar2 + 0x294) + 1.0);
    fVar5 = (float)NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar2 + 0x1e0),DAT_101dc3510);
    fVar4 = (float)DAT_101dc3450;
    if ((float)DAT_101dc3450 <= fVar5) {
      fVar4 = fVar5;
    }
    uVar3 = FUN_1010a0298(param_1,DAT_10184dc88);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    local_40 = lVar1 + 0x28;
    local_38 = *(undefined4 *)(lVar1 + 0x30);
    FUN_10004a1e8(fVar4,uVar3,&local_40,*(undefined8 *)(*(long *)(param_1 + 0x50) + 8));
    FUN_10004a394(*(undefined8 *)(param_1 + 0x40));
    FUN_10004a2a0(*(undefined8 *)(param_1 + 0x40));
  }
  return;
}




undefined8 FUN_10005241c(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_48 [40];
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return 0;
  }
  uVar1 = FUN_10005a95c();
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x60);
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x68) != (int)plVar2[1]) {
          *(undefined8 *)(param_1 + 0x60) = 0;
          *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
          return 0;
        }
        lVar3 = (**(code **)(*plVar2 + 0x10))();
        goto LAB_1000524bc;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
    }
  }
  FUN_10045c734(auStack_48,uVar1);
  lVar3 = FUN_100052f88(param_1,auStack_48);
LAB_1000524bc:
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100052880(param_1,lVar3);
  }
  return uVar1;
}




void FUN_100052500(long param_1)

{
  FUN_100052308(param_1 + -0x28);
  return;
}




void FUN_100052508(undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_3 != 0) {
    if (*(char *)(param_2 + 0x81) == '\0') {
      FUN_100052570(param_2);
      lVar1 = FUN_100061ce8();
      if (lVar1 != 0) {
        FUN_100061ce8();
        FUN_100053760();
      }
    }
    *(undefined1 *)(param_2 + 0x81) = 1;
    FUN_100052624(param_1,param_2,param_4);
    return;
  }
  return;
}




void FUN_100052570(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_50 [32];
  
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar3 = FUN_10005a95c();
    lVar3 = *(long *)(lVar3 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    iVar1 = FUN_100346244(lVar3);
    if (iVar1 != 0) {
      uVar4 = 0;
      do {
        iVar1 = FUN_100345b54(lVar3,uVar4);
        if (iVar1 != 0) {
          thunk_FUN_100011344(auStack_50,uVar4 & 0xff,1);
          FUN_100345498(auStack_50);
        }
        uVar4 = uVar4 + 1;
        uVar2 = FUN_100346244(lVar3);
      } while (uVar4 < uVar2);
    }
    FUN_10005a86c(*(undefined8 *)(param_1 + 0x38));
  }
  return;
}




void FUN_100052624(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  long local_60;
  undefined4 local_58;
  
  if (*(long *)(param_2 + 0x38) != 0) {
    lVar1 = FUN_10005a95c();
    if (*(long *)(param_2 + 0x48) == 0) {
      uVar2 = FUN_1010a0298(param_2,DAT_10184dc88);
      *(undefined8 *)(param_2 + 0x48) = uVar2;
      local_60 = lVar1 + 0x28;
      local_58 = *(undefined4 *)(lVar1 + 0x30);
      FUN_10004a1e8(0x3f800000,uVar2,&local_60,*(undefined8 *)(*(long *)(param_2 + 0x58) + 8));
      FUN_10004a2a0(*(undefined8 *)(param_2 + 0x48));
    }
    lVar3 = *(long *)(lVar1 + 0x40);
    fVar4 = *(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0);
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1e0),DAT_101dc3510);
    fVar4 = (float)DAT_101dc3450;
    if ((float)DAT_101dc3450 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar5 = DAT_101dc3510;
    fStack_6c = param_1;
    local_70 = (float)FUN_100061350(fVar4,param_3);
    local_68 = fVar5;
    FUN_10004a284(*(undefined8 *)(param_2 + 0x48),&local_70);
    FUN_100345b68(lVar1,&local_80,0);
    local_80 = CONCAT44(fStack_6c + (float)((ulong)local_80 >> 0x20),local_70 + (float)local_80);
    local_78 = local_68 + local_78;
    FUN_10045c734(auStack_a8,lVar1);
    lVar3 = *(long *)(lVar1 + 0x40);
    fVar4 = *(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0);
    fVar5 = (float)NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1e0),DAT_101dc3510);
    fVar4 = (float)DAT_101dc3450;
    if ((float)DAT_101dc3450 <= fVar5) {
      fVar4 = fVar5;
    }
    lVar1 = FUN_10006103c(0x40900000,fVar4,auStack_a8,&local_80,lVar1,0);
    if (lVar1 == 0) {
      FUN_100052e80(param_2);
    }
    else {
      FUN_100052f44(param_2,lVar1);
      uVar2 = FUN_100061d30();
      FUN_10005fa58(uVar2,lVar1);
    }
  }
  return;
}




void FUN_1000527d4(long param_1)

{
  FUN_100052508(param_1 + -0x28);
  return;
}




void FUN_1000527dc(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x81) == '\0') {
    if (*(int *)(param_1 + 0x84) == 1) {
      FUN_10005241c(param_1);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 0x60);
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0x68) == (int)plVar1[1]) {
        lVar2 = (**(code **)(*plVar1 + 0x10))();
        if (lVar2 != 0) {
          uVar3 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
          FUN_100052880(param_1,uVar3);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
      }
    }
  }
  FUN_100052a08(param_1);
  *(undefined2 *)(param_1 + 0x80) = 0;
  return;
}




undefined8 FUN_100052880(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar3 = FUN_10005a95c();
    uVar1 = DAT_101dc3510;
    fVar8 = (float)DAT_101dc3450;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f;
    if ((((int)uVar5 == 0x1f) || (1 < *(ushort *)(lVar3 + uVar5 * 0x38 + 0x90) - 3)) &&
       ((*(byte *)(lVar3 + 0x2f9) >> 5 & 1) == 0)) {
      lVar6 = *(long *)(lVar3 + 0x40);
      fVar7 = *(float *)(lVar6 + 0x78);
      fVar9 = *(float *)(lVar6 + 300);
      fVar11 = *(float *)(lVar6 + 0x294);
      fVar10 = *(float *)(lVar6 + 0x1e0);
      iVar2 = FUN_10005a904(*(undefined8 *)(param_1 + 0x38));
      if (iVar2 != 0) {
        fVar7 = fVar7 + fVar9 * (fVar11 + 1.0);
        fVar7 = (float)NEON_fminnm(fVar7 + fVar7 * fVar10,uVar1);
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
        fVar7 = (float)FUN_1003ace34(lVar3,param_2);
        fVar9 = *(float *)(*(long *)(param_2 + 0x38) + 100);
        fVar7 = fVar7 - ((*(float *)(param_2 + 0x2e8) + fVar9) *
                        *(float *)(*(long *)(param_2 + 0x38) + 0x68)) / fVar9;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        if ((fVar8 < fVar7) && (lVar3 = FUN_100061ce8(), lVar3 != 0)) {
          FUN_100061ce8();
          FUN_100053754(0x3e99999a);
        }
      }
      FUN_10005a6a0(*(undefined8 *)(param_1 + 0x38),param_2,1,1);
      plVar4 = *(long **)(param_1 + 0x60);
      if (plVar4 == (long *)0x0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x68) == (int)plVar4[1]) {
        lVar3 = (**(code **)(*plVar4 + 0x10))();
        if (lVar3 != 0) {
          FUN_1004e3004(param_1 + 0x70);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
      }
      return 1;
    }
  }
  return 0;
}




void FUN_100052a08(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1010a1830();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1010a1830();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) goto LAB_100052a80;
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
    }
  }
  FUN_100052e80(param_1);
LAB_100052a80:
  uVar3 = FUN_100061d30();
  FUN_10005fb90(uVar3,0);
  return;
}




void FUN_100052a94(long param_1)

{
  FUN_1000527dc(param_1 + -0x28,0);
  return;
}




void FUN_100052aa0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_10005234c();
  if ((*(int *)(param_1 + 0x84) == 0) && (iVar1 = FUN_100052aec(param_1,param_2), iVar1 != 0)) {
    FUN_1004e3004(param_1 + 0x78);
    return;
  }
  return;
}




void FUN_100052aec(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_10005a95c();
    FUN_10045c734(auStack_48,uVar1);
    if (param_2 == 1) {
      FUN_10045c75c(auStack_48,0x1000);
    }
    else if (param_2 == 0) {
      FUN_10045c764(auStack_48,0x1001);
    }
    lVar2 = FUN_100052f88(param_1,auStack_48);
    if (lVar2 != 0) {
      FUN_100052880(param_1,lVar2);
    }
  }
  return;
}




void FUN_100052b70(long param_1,undefined8 param_2)

{
  int iVar1;
  uint64_t uVar2;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar2 = _mach_absolute_time();
    if ((0.10000000149011612 < (double)((uVar2 - *(long *)(param_1 + 0x78)) * DAT_101d91638) * 1e-09
        ) && (iVar1 = FUN_100052aec(param_1,param_2), iVar1 != 0)) {
      FUN_1004e3004((long *)(param_1 + 0x78));
      return;
    }
  }
  return;
}




void FUN_100052c04(long param_1)

{
  if (*(int *)(param_1 + 0x84) == 1) {
    FUN_100052aec(param_1);
  }
  FUN_100052a08(param_1);
  return;
}




void FUN_100052c38(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint64_t uVar6;
  ulong uVar7;
  float fVar8;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar4 = FUN_10005a95c(*(undefined8 *)(param_1 + 0x38));
        lVar3 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
        if ((*(byte *)(lVar3 + 0x2f9) & 1) == 0) {
          plVar2 = *(long **)(param_1 + 0x60);
          lVar3 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
              lVar3 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              lVar3 = 0;
              *(undefined8 *)(param_1 + 0x60) = 0;
              *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
            }
          }
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f;
          if (((int)uVar7 == 0x1f) || (1 < *(ushort *)(lVar3 + uVar7 * 0x38 + 0x90) - 3)) {
            uVar5 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
            iVar1 = FUN_10045c7e4(uVar4,uVar5,1);
            if (iVar1 != 0) {
              uVar5 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
              fVar8 = (float)FUN_1003e4e34(uVar4,uVar5);
              if ((fVar8 <= 144.0) &&
                 (uVar6 = _mach_absolute_time(),
                 (double)((uVar6 - *(long *)(param_1 + 0x70)) * DAT_101d91638) * 1e-09 <= 7.0)) {
                return;
              }
            }
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
    }
  }
  FUN_100052e80(param_1);
  return;
}




void FUN_100052db4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar2 = FUN_1000e8ca8(param_2);
    if (lVar2 != 0) {
      plVar3 = *(long **)(param_1 + 0x60);
      lVar4 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_1 + 0x68) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          lVar4 = 0;
          *(undefined8 *)(param_1 + 0x60) = 0;
          *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
        }
      }
      if (lVar4 == lVar2) {
        FUN_100052e80(param_1);
      }
      else {
        uVar5 = FUN_10005a95c(*(undefined8 *)(param_1 + 0x38));
        iVar1 = FUN_10045c7e4(uVar5,lVar2,1);
        if (iVar1 != 0) {
          FUN_100052f44(param_1,lVar2);
          FUN_100052880(param_1,lVar2);
        }
      }
    }
    uVar5 = FUN_100061d30();
    FUN_10005fb90(uVar5,0);
    return;
  }
  return;
}




void FUN_100052e80(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (((plVar2 != (long *)0x0) && (*(int *)(param_1 + 0x68) == (int)plVar2[1])) &&
     (lVar3 = (**(code **)(*plVar2 + 0x10))(), lVar3 != 0)) {
    uVar4 = FUN_100061d30();
    FUN_10005f918(uVar4,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar5 = FUN_1000596b0();
      plVar2 = *(long **)(param_1 + 0x60);
      lVar3 = 0;
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
          lVar3 = (**(code **)(*plVar2 + 0x10))();
        }
        else {
          lVar3 = 0;
          *(undefined8 *)(param_1 + 0x60) = 0;
          *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
        }
      }
      if (lVar5 == lVar3) {
        FUN_10005a86c(*(undefined8 *)(param_1 + 0x38));
      }
    }
  }
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return;
}




void FUN_100052f44(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_100052e80();
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x60) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar2 = FUN_100061d30();
  FUN_10005f9b8(uVar2,param_2);
  FUN_1004e3004(param_1 + 0x70);
  return;
}




void FUN_100052f88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  lVar1 = FUN_10005a95c();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x78) + *(float *)(lVar2 + 300) * (*(float *)(lVar2 + 0x294) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1e0),DAT_101dc3510);
  fVar3 = (float)DAT_101dc3450 + 0.5;
  FUN_10005a904((float)DAT_101dc3450,0x3f000000,DAT_101dc3510,0x3f800000,
                *(undefined8 *)(param_1 + 0x38));
  FUN_10006137c(fVar3,fVar3,param_2,lVar1,1,4);
  return;
}




void FUN_10005304c(void)

{
  return;
}




undefined8 * thunk_FUN_1000520c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_10005ebfc(param_1 + 5);
  *param_1 = &PTR_FUN_10144d2b8;
  param_1[5] = &PTR_FUN_10144d300;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = DAT_101dc0b88;
  FUN_1004e3004(param_1 + 0xe);
  FUN_1004e3004(param_1 + 0xf);
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  uVar1 = FUN_100345b94();
  uVar1 = FUN_10034c450(uVar1,"*JoystickBasicAttackRingIndicator*");
  param_1[10] = uVar1;
  uVar1 = FUN_100345b94();
  uVar1 = FUN_10034c450(uVar1,"*JoystickBasicAttackReticle*");
  param_1[0xb] = uVar1;
  return param_1;
}




void FUN_100053054(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010005305c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100053060(void)

{
  if ((DAT_10184e028 & 1) == 0) {
    DAT_10184e020 = DAT_101872e38;
    DAT_10184e028 = 1;
  }
  return;
}




void FUN_10005308c(void)

{
  if ((DAT_10184dc90 & 1) == 0) {
    DAT_10184dc88 = DAT_101872e38;
    DAT_10184dc90 = 1;
  }
  return;
}




void FUN_1000530b8(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000530e4(void)

{
  uRam0000000101dc34d8 = 0x7f7fffff7f7fffff;
  _DAT_101dc34d0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc34e8 = 0x7f7fffff7f7fffff;
  _DAT_101dc34e0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc34f8 = 0x7f7fffff7f7fffff;
  _DAT_101dc34f0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3508 = 0x7f7fffff7f7fffff;
  _DAT_101dc3500 = 0x7f7fffff7f7fffff;
  DAT_101dc3510 = 0x7f7fffff;
  DAT_101dc3514 = 0x7f7fffff;
  DAT_101dc3518 = 0x7f7fffff;
  DAT_101dc351c = 0x3f800000;
  uRam0000000101dc3528 = 0x7f7fffff7f7fffff;
  _DAT_101dc3520 = 0x7f7fffff7f7fffff;
  DAT_101dc3530 = 0x7f7fffff;
  DAT_101dc3534 = 0x3eb33333;
  uRam0000000101dc3540 = 0x7f7fffff7f7fffff;
  _DAT_101dc3538 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3550 = 0x7f7fffff7f7fffff;
  _DAT_101dc3548 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3560 = 0x7f7fffff7f7fffff;
  _DAT_101dc3558 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3570 = 0x7f7fffff7f7fffff;
  _DAT_101dc3568 = 0x7f7fffff7f7fffff;
  DAT_101dc3578 = 0x7f7fffff;
  DAT_101dc357c = 0x7f7fffff;
  DAT_101dc3580 = 0x7f7fffff;
  uRam0000000101dc3418 = 0xff7fffffff7fffff;
  _DAT_101dc3410 = 0xff7fffffff7fffff;
  DAT_101dc3420 = 0;
  DAT_101dc3428 = 0;
  uRam0000000101dc3434 = 0xff7fffffff7fffff;
  _DAT_101dc342c = 0xff7fffffff7fffff;
  DAT_101dc343c = 0xff7fffff;
  DAT_101dc3440 = 0xff7fffff;
  DAT_101dc3444 = NEON_fmov(0xbf800000,4);
  DAT_101dc344c = 0x3f000000;
  DAT_101dc3450 = 0;
  DAT_101dc3458 = 0;
  uRam0000000101dc3468 = 0xff7fffffff7fffff;
  _DAT_101dc3460 = 0xff7fffffff7fffff;
  uRam0000000101dc3478 = 0xff7fffffff7fffff;
  _DAT_101dc3470 = 0xff7fffffff7fffff;
  uRam0000000101dc3488 = 0xff7fffffff7fffff;
  _DAT_101dc3480 = 0xff7fffffff7fffff;
  uRam0000000101dc3498 = 0xbf800000bf800000;
  _DAT_101dc3490 = 0xbf80000000000000;
  DAT_101dc34a0 = 0xbf800000;
  DAT_101dc34a4 = 0xff7fffff;
  DAT_101dc34a8 = 0xff7fffff;
  DAT_101dc34ac = 0xff7fffff;
  DAT_101dc34b0 = 0;
  DAT_101dc34b4 = 0xff7fffff;
  DAT_101dc34b8 = 0;
  DAT_101dc34c0 = 0;
  return;
}




void FUN_1000531b0(long param_1)

{
  FUN_10005ec0c(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_1000531d8(long param_1)

{
  FUN_10005ec0c();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_1000531fc(long param_1)

{
  void *pvVar1;
  
  FUN_10005ec0c(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100053228(long param_1)

{
  void *pvVar1;
  
  FUN_10005ec0c();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_100053250(long param_1)

{
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return;
}




void FUN_100053258(long param_1)

{
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}




void FUN_100053260(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_100053270(param_1,param_3);
    return;
  }
  return;
}




void FUN_100053270(float param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_78;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  undefined4 local_54;
  float fStack_50;
  undefined8 local_48;
  
  if ((*(long *)(param_2 + 0x40) != 0) && (lVar1 = FUN_10002ea68(), lVar1 != 0)) {
    if (*(char *)(param_2 + 0x5c) == '\0') {
      *(undefined1 *)(param_2 + 0x5c) = 1;
      *(ulong *)(param_2 + 0x48) =
           CONCAT44((float)((ulong)*param_3 >> 0x20) * param_1,(float)*param_3 * param_1);
      lVar2 = FUN_10002ea68(*(undefined8 *)(param_2 + 0x40));
      if (lVar2 != 0) {
        uVar3 = FUN_10002ea68(*(undefined8 *)(param_2 + 0x40));
        FUN_100345b68(uVar3,param_2 + 0x50,0);
        FUN_10002e61c(*(undefined8 *)(param_2 + 0x40),1);
        uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x70);
        *(ulong *)(param_2 + 0x50) =
             CONCAT44((float)((ulong)uVar3 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20),
                      (float)uVar3 + (float)*(undefined8 *)(param_2 + 0x50));
        *(float *)(param_2 + 0x58) =
             *(float *)(*(long *)(param_2 + 0x40) + 0x78) + *(float *)(param_2 + 0x58);
      }
    }
    uVar3 = CONCAT44(-(float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20) +
                     (float)((ulong)*param_3 >> 0x20) * param_1,
                     -(float)*(undefined8 *)(param_2 + 0x48) + (float)*param_3 * param_1);
    local_48 = uVar3;
    fVar5 = param_1;
    fVar4 = (float)FUN_1000e8c04(&local_48);
    fVar6 = param_1 * 95.0 + 80.0;
    FUN_100345b68(lVar1,&local_68,0);
    local_78 = CONCAT44(((float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) - fStack_64) +
                        (float)uVar3 * fVar6 + fStack_64,
                        ((float)*(undefined8 *)(param_2 + 0x50) - local_68) + fVar4 * fVar6 +
                        local_68);
    local_70 = (*(float *)(param_2 + 0x58) - local_60) + fVar6 * fVar5 + local_60;
    FUN_1000e8ef4(&local_78);
    local_58 = (float)local_78 - local_68;
    fStack_50 = local_70 - local_60;
    local_54 = *(undefined4 *)(*(long *)(param_2 + 0x40) + 0x74);
    FUN_10002e688(*(long *)(param_2 + 0x40),&local_58);
    if (*(long *)(param_2 + 0x38) != 0) {
      FUN_10005a128(*(long *)(param_2 + 0x38),1);
    }
  }
  return;
}




void FUN_100053400(long param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_100053270(param_1 + -0x28,param_3);
    return;
  }
  return;
}




void FUN_100053414(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x5c) = 0;
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_10002e688(lVar1,lVar1 + 0x70);
    FUN_10002e61c(*(undefined8 *)(param_1 + 0x40),1);
    FUN_10002e624(*(undefined8 *)(param_1 + 0x40),2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10005a128(*(long *)(param_1 + 0x38),0);
    return;
  }
  return;
}




void FUN_100053474(long param_1)

{
  FUN_100053414(param_1 + -0x28,0);
  return;
}




void FUN_100053480(long param_1)

{
  long lVar1;
  
  DAT_10184e030 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e030 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e030 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_1000534e4;
  *(code **)(lVar1 + 0xb8) = FUN_100053544;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e030;
  *(undefined4 *)(lVar1 + 0xa8) = 0x60;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_1000534dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}




undefined8 * FUN_1000534e4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_10005ebfc(param_1 + 5);
  *param_1 = &PTR_FUN_10144d340;
  param_1[5] = &PTR_FUN_10144d388;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = DAT_101dc1cb8;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  return param_1;
}




void FUN_100053544(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010005354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100053550(void)

{
  if ((DAT_10184e038 & 1) == 0) {
    DAT_10184e030 = DAT_101872e38;
    DAT_10184e038 = 1;
  }
  return;
}




undefined8 * FUN_10005357c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_10005ebfc(param_1 + 5);
  *param_1 = &PTR_FUN_10144d3c8;
  param_1[5] = &PTR_FUN_10144d418;
  uVar1 = DAT_101dc1cb8;
  param_1[7] = 0;
  param_1[8] = uVar1;
  FUN_1004e3004(param_1 + 9);
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_1004e3004(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_1004e3004(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}




void FUN_1000535f8(long param_1)

{
  FUN_10005ec0c(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100053620(long param_1)

{
  FUN_10005ec0c();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100053644(long param_1)

{
  void *pvVar1;
  
  FUN_10005ec0c(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100053670(long param_1)

{
  void *pvVar1;
  
  FUN_10005ec0c();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_100053698(long param_1)

{
  long lVar1;
  
  DAT_10184e040 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e040 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e040 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10005357c;
  *(code **)(lVar1 + 0xb8) = FUN_100053ed0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e040;
  *(undefined4 *)(lVar1 + 0xa8) = 0x88;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,thunk_FUN_100053900,0);
  FUN_1010a0990(param_1,0x6d6a08d2,FUN_10005373c,0);
  return;
}




void thunk_FUN_100053900(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint64_t uVar4;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = FUN_10005a95c();
    if (*(char *)(param_1 + 0x52) != '\0') {
      iVar1 = FUN_1004642fc();
      if ((iVar1 != 0) && (*(char *)(param_1 + 0x70) == '\0')) {
        *(undefined1 *)(param_1 + 0x70) = 1;
        FUN_1004e3004(param_1 + 0x68);
      }
      uVar3 = FUN_1004642c0(uVar2);
      if ((uVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0x70) == '\0') {
          return;
        }
        uVar4 = _mach_absolute_time();
        if ((double)((uVar4 - *(long *)(param_1 + 0x68)) * DAT_101d91638) * 1e-09 <=
            0.07999999821186066) {
          return;
        }
      }
      *(undefined2 *)(param_1 + 0x52) = 0x100;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}




void FUN_10005373c(long param_1)

{
  *(undefined1 *)(param_1 + 0x52) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}




void FUN_10005374c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_100053754(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x60) = param_1;
  FUN_1004e3004(param_2 + 0x58);
  return;
}




void FUN_100053760(long param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}




undefined1 FUN_100053768(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}




void FUN_100053770(long param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0x1000000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined1 *)(param_1 + 0x82) = 1;
  return;
}




void FUN_10005378c(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0x1000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  return;
}




void FUN_1000537a8(undefined4 param_1,long param_2,int param_3,undefined8 *param_4)

{
  if (param_3 != 0) {
    FUN_1000539b4(param_2,param_4);
    *(undefined1 *)(param_2 + 0x51) = 1;
    *(undefined1 *)(param_2 + 0x81) = 1;
  }
  *(undefined8 *)(param_2 + 0x74) = *param_4;
  *(undefined4 *)(param_2 + 0x7c) = param_1;
  return;
}




void FUN_1000537fc(undefined4 param_1,long param_2,int param_3,undefined8 *param_4)

{
  if (param_3 != 0) {
    FUN_1000539b4(param_2 + -0x28,param_4);
    *(undefined1 *)(param_2 + 0x29) = 1;
    *(undefined1 *)(param_2 + 0x59) = 1;
  }
  *(undefined8 *)(param_2 + 0x4c) = *param_4;
  *(undefined4 *)(param_2 + 0x54) = param_1;
  return;
}




void FUN_100053850(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100053890();
  if ((iVar1 != 0) && (param_2 != 0)) {
    FUN_100059da4(*(undefined8 *)(param_1 + 0x38),1);
  }
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  return;
}




bool FUN_100053890(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_10005a95c(*(undefined8 *)(param_1 + 0x38));
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f;
  if (((int)uVar3 == 0x1f) || (1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3)) {
    bVar1 = (*(byte *)(lVar2 + 0x2f8) & 2) == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




void FUN_1000538e4(long param_1)

{
  FUN_100053850(param_1 + -0x28);
  return;
}




void FUN_1000538ec(long param_1)

{
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x82) = 1;
  return;
}




void FUN_100053900(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint64_t uVar4;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = FUN_10005a95c();
    if (*(char *)(param_1 + 0x52) != '\0') {
      iVar1 = FUN_1004642fc();
      if ((iVar1 != 0) && (*(char *)(param_1 + 0x70) == '\0')) {
        *(undefined1 *)(param_1 + 0x70) = 1;
        FUN_1004e3004(param_1 + 0x68);
      }
      uVar3 = FUN_1004642c0(uVar2);
      if ((uVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0x70) == '\0') {
          return;
        }
        uVar4 = _mach_absolute_time();
        if ((double)((uVar4 - *(long *)(param_1 + 0x68)) * DAT_101d91638) * 1e-09 <=
            0.07999999821186066) {
          return;
        }
      }
      *(undefined2 *)(param_1 + 0x52) = 0x100;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}




void FUN_1000539b4(long param_1,float *param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  float local_a0;
  undefined1 local_98 [8];
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  
  uVar5 = _mach_absolute_time();
  lVar8 = DAT_101d91638;
  lVar10 = *(long *)(param_1 + 0x48);
  if ((0.1 <= ABS(*(float *)(param_1 + 0x40))) || (0.1 <= ABS(*(float *)(param_1 + 0x44)))) {
    bVar2 = *param_2 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44) * param_2[1] < 0.866;
  }
  else {
    bVar2 = false;
  }
  uVar3 = FUN_10005a8d4(*(undefined8 *)(param_1 + 0x38));
  uVar6 = _mach_absolute_time();
  lVar1 = DAT_101d91638;
  lVar9 = *(long *)(param_1 + 0x58);
  fVar16 = *(float *)(param_1 + 0x60);
  iVar4 = FUN_100053890(param_1);
  if (iVar4 != 0) {
    dVar15 = (double)((uVar5 - lVar10) * lVar8) * 1e-09;
    dVar14 = (double)fVar16;
    if ((((0.25 <= dVar15 || bVar2) || (((uVar3 ^ 1) & 1) != 0)) ||
        (*(char *)(param_1 + 0x53) != '\0')) &&
       ((dVar14 < (double)((uVar6 - lVar9) * lVar1) * 1e-09 && (*(long *)(param_1 + 0x38) != 0)))) {
      uVar7 = FUN_10005a95c();
      uVar12 = FUN_1000e8c04(param_2);
      local_88 = (float)uVar12;
      fStack_84 = SUB84(dVar14,0);
      local_80 = SUB84(dVar15,0);
      fVar11 = (float)FUN_1003e4a18(uVar7);
      fVar16 = fVar11 * 0.375;
      if (fVar11 * 0.375 <= 2.0) {
        fVar16 = 2.0;
      }
      uVar13 = FUN_100053c00(uVar12,dVar14,dVar15,fVar16,uVar7,3);
      if ((float)uVar13 < fVar16) {
        uVar13 = FUN_100053d44(uVar13,fVar16,auStack_c8,uVar7,&local_88);
      }
      fVar16 = (float)uVar13;
      if (0.0 < fVar16) {
        FUN_100345b68(uVar7,local_98,0);
        local_a8 = CONCAT44(local_98._4_4_ + SUB84(dVar14,0) * fVar16,
                            local_98._0_4_ + (float)uVar12 * fVar16);
        local_a0 = local_90 + SUB84(dVar15,0) * fVar16;
        if ((*(char *)(param_1 + 0x50) == '\0') || (*(char *)(param_1 + 0x52) == '\0')) {
          lVar8 = *(long *)(param_1 + 0x38);
          FUN_10005ecec(0x3f000000,auStack_c8,&local_a8,*(char *)(param_1 + 0x50) != '\0');
          FUN_10005f394(lVar8 + 0x260,auStack_c8);
          *(undefined1 *)(param_1 + 0x53) = 0;
          *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)param_2;
          FUN_1004e3004((long *)(param_1 + 0x48));
          *(undefined1 *)(param_1 + 0x50) = 1;
        }
      }
    }
  }
  return;
}




undefined1  [16]
FUN_100053c00(float param_1,float param_2,float param_3,undefined1 param_4 [16],undefined8 param_5,
             int param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  float local_48;
  undefined1 local_40 [8];
  float local_38;
  
  fVar9 = param_4._0_4_;
  FUN_100345b68(param_5,local_40,0);
  if (param_6 == 0) {
    uVar10 = param_4._4_4_;
  }
  else {
    uVar1 = param_6 - 1;
    auVar7 = NEON_fmov(0x3f800000,4);
    auVar7._0_4_ = fVar9;
    uVar2 = 0;
    do {
      uVar5 = uVar2;
      auVar8 = auVar7;
      auVar7._0_4_ = auVar8._0_4_ * 0.5;
      auVar7._4_4_ = auVar8._4_4_ * 0.5;
      auVar7._8_4_ = auVar8._8_4_ * 0.5;
      auVar7._12_4_ = auVar8._12_4_ * 0.5;
      uVar2 = uVar5 + 4;
    } while ((param_6 + 3U & 0xfffffffc) != uVar5 + 4);
    auVar6._0_4_ = -(uint)(uVar1 < uVar5);
    auVar6._4_4_ = -(uint)(uVar1 < (uVar5 | 1));
    auVar6._8_4_ = -(uint)(uVar1 < (uVar5 | 2));
    auVar6._12_4_ = -(uint)(uVar1 < (uVar5 | 3));
    auVar7 = auVar7 ^ (auVar7 ^ auVar8) & auVar6;
    auVar8 = NEON_ext(auVar7,auVar7,8,1);
    fVar9 = auVar7._0_4_ * auVar8._0_4_ * auVar7._4_4_ * auVar8._4_4_;
    uVar10 = 0;
    uStack_58 = 0;
  }
  local_60 = 0;
  uVar11 = 0;
  if (-1 < param_6) {
    local_50 = CONCAT44(local_40._4_4_ + param_2 * fVar9,local_40._0_4_ + param_1 * fVar9);
    local_48 = local_38 + param_3 * fVar9;
    iVar4 = FUN_100053e70(param_5,&local_50);
    if (iVar4 != 0) {
      param_6 = param_6 + 1;
      uVar3 = CONCAT44(uVar10,fVar9);
      do {
        local_60 = uVar3;
        uVar11 = uStack_58;
        param_6 = param_6 + -1;
        if (param_6 < 1) break;
        fVar9 = (float)local_60 + (float)local_60;
        local_50 = CONCAT44(local_40._4_4_ + param_2 * fVar9,local_40._0_4_ + param_1 * fVar9);
        uStack_58 = 0;
        local_48 = local_38 + param_3 * fVar9;
        iVar4 = FUN_100053e70(param_5,&local_50);
        uVar3 = (ulong)(uint)fVar9;
      } while (iVar4 != 0);
    }
  }
  auVar8._8_8_ = uVar11;
  auVar8._0_8_ = local_60;
  return auVar8;
}




undefined1  [16]
FUN_100053d44(undefined1 param_1 [16],undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined8 local_70;
  undefined4 local_68;
  
  uVar4 = *param_5;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_5 + 1);
  *param_3 = uVar4;
  iVar5 = 10;
  fVar8 = 15.0;
  auVar2 = param_1;
  do {
    uVar4 = auVar2._8_8_;
    local_70 = *param_5;
    local_68 = *(undefined4 *)(param_5 + 1);
    auVar6 = FUN_100053e1c(param_2,fVar8,&local_70,param_4);
    auVar3._8_8_ = uVar4;
    auVar3._0_8_ = auVar2._0_8_;
    auVar2 = auVar3;
    if (param_1._0_4_ < auVar6._0_4_) {
      *param_3 = local_70;
      *(undefined4 *)(param_3 + 1) = local_68;
      auVar2 = auVar6;
      if ((float)param_2 <= auVar6._0_4_) {
        return auVar6;
      }
    }
    fVar7 = 15.0 - fVar8;
    bVar1 = fVar8 <= 0.0;
    fVar8 = -fVar8;
    if (bVar1) {
      fVar8 = fVar7;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return auVar2;
}




void FUN_100053e1c(undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1000e8c68(param_2 * 0.017453292);
  *param_4 = uVar1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  FUN_100053c00(param_5,0);
  return;
}




void FUN_100053e70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 uStack_28;
  
  local_30 = 0x4120000000000000;
  uStack_28 = 0;
  local_34 = 0;
  uVar1 = FUN_1003a3e24();
  FUN_10054e07c(uVar1,param_2,&local_34,0,&local_30);
  return;
}




undefined8 * thunk_FUN_10005357c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_10005ebfc(param_1 + 5);
  *param_1 = &PTR_FUN_10144d3c8;
  param_1[5] = &PTR_FUN_10144d418;
  uVar1 = DAT_101dc1cb8;
  param_1[7] = 0;
  param_1[8] = uVar1;
  FUN_1004e3004(param_1 + 9);
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_1004e3004(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_1004e3004(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}




void FUN_100053ed0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100053ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100053edc(void)

{
  if ((DAT_10184e048 & 1) == 0) {
    DAT_10184e040 = DAT_101872e38;
    DAT_10184e048 = 1;
  }
  return;
}




undefined8 * FUN_100053f08(undefined8 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_1 = &PTR_thunk_FUN_100054038_10144d458;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 10) = DAT_101dc0b88;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  uVar3 = NEON_fmov(0x3f800000,4);
  param_1[0x11] = uVar3;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_10010187c((long)param_1 + 0x94);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  fVar2 = *(float *)(param_1 + 0x17);
  fVar4 = *(float *)((long)param_1 + 0xbc);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar5 = 1.0 / SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6);
  *(float *)(param_1 + 0x17) = fVar2 * fVar5;
  *(float *)((long)param_1 + 0xbc) = fVar4 * fVar5;
  *(float *)(param_1 + 0x18) = fVar6 * fVar5;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((long)param_1 + 0x11c) = 1;
  param_1[0x24] = 0;
  return param_1;
}




void FUN_100054038(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100054038_10144d458;
  FUN_1000540ac();
  if (param_1[0xd] != 0) {
    FUN_1010a1830();
  }
  if (param_1[0x1e] != 0) {
    FUN_1010a1830();
  }
  if (param_1[0x1f] != 0) {
    FUN_1010a1830();
  }
  if (param_1[0x20] != 0) {
    FUN_1010a1830();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  FUN_1010a0064(param_1);
  return;
}




void FUN_1000540ac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  iVar1 = FUN_100057f40();
  if (iVar1 != 0) {
    uVar2 = FUN_100061d30();
    FUN_10005fb90(uVar2,0);
    FUN_100061d30();
    FUN_10005fcf0();
  }
  FUN_100056a1c(param_1);
  return;
}




void thunk_FUN_100054038(void)

{
  FUN_100054038();
  return;
}




void FUN_100054108(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100054038();
  operator_delete(pvVar1);
  return;
}




void FUN_10005411c(long param_1)

{
  long lVar1;
  
  DAT_10184db30 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184db30 + 1;
  lVar1 = param_1 + (ulong)DAT_10184db30 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100053f08;
  *(code **)(lVar1 + 0xb8) = FUN_1000573fc;
  *(uint *)(lVar1 + 0xa4) = DAT_10184db30;
  *(undefined4 *)(lVar1 + 0xa8) = 0x128;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 5;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_1000541f4,0);
  FUN_1010a0990(param_1,0x4ad10727,thunk_FUN_100054bc0,0);
  FUN_1010a0990(param_1,0x647c0866,FUN_100054290,0);
  FUN_1010a0990(param_1,0x9fa20a9e,FUN_1000542c0,0);
  return;
}




void FUN_1000541f4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_10005462c();
  if ((uVar1 & 1) == 0) {
    FUN_10005487c(param_1);
  }
  plVar2 = *(long **)(param_1 + 0x108);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x110) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = (**(code **)(**(long **)(param_1 + 0x108) + 0x10))();
      uVar4 = DAT_101dc0b88;
      if ((*(byte *)(lVar3 + 0x2fc) & 0x1f) != 0) {
        return;
      }
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x108) = 0;
      uVar4 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x110) = uVar4;
  }
  return;
}




void thunk_FUN_100054bc0(void)

{
  FUN_100054bc0();
  return;
}




void FUN_100054290(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100055b10(param_1,in_stack_00000000,*(undefined8 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_1000542c0(undefined8 param_1)

{
  undefined2 in_stack_00000000;
  
  FUN_100055c5c(param_1,in_stack_00000000);
  return;
}




void FUN_1000542ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,undefined8 *param_9,
                  undefined4 param_10,undefined8 param_11)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long local_70;
  undefined4 local_68;
  
  *(undefined8 *)(param_4 + 0x70) = param_6;
  *(long *)(param_4 + 0x28) = param_5;
  uVar6 = param_2;
  uVar2 = FUN_1000512fc(param_6);
  *(undefined8 *)(param_4 + 0x30) = uVar2;
  uVar5 = *(undefined4 *)(param_7 + 0x30);
  *(long *)(param_4 + 0x48) = param_7 + 0x28;
  *(undefined4 *)(param_4 + 0x50) = uVar5;
  uVar5 = *(undefined4 *)(param_8 + 0x30);
  *(long *)(param_4 + 0x58) = param_8 + 0x28;
  *(undefined4 *)(param_4 + 0x60) = uVar5;
  uVar2 = FUN_1010a0298(param_4,DAT_10184dc88);
  *(undefined8 *)(param_4 + 0x68) = uVar2;
  *(undefined4 *)(param_4 + 0x88) = param_1;
  *(undefined4 *)(param_4 + 0x8c) = param_2;
  *(undefined4 *)(param_4 + 0x90) = param_10;
  uVar5 = FUN_10005443c(param_4);
  *(undefined4 *)(param_4 + 0xd0) = uVar5;
  *(undefined4 *)(param_4 + 0xd4) = uVar6;
  *(undefined4 *)(param_4 + 0xd8) = param_3;
  pcVar3 = *(char **)(param_5 + 0x38);
  iVar1 = FUN_100060a70();
  pcVar4 = pcVar3;
  if (iVar1 != 0) {
    iVar1 = _strcmp(pcVar3,"build://UI/Ring/Ring.mesh");
    pcVar4 = "build://UI/Ring_FallOff/Ring_FallOff.mesh";
    if (iVar1 != 0) {
      pcVar4 = pcVar3;
    }
  }
  local_68 = *(undefined4 *)(param_8 + 0x30);
  local_70 = param_8 + 0x28;
  FUN_10004a1e8(*(undefined4 *)(param_4 + 0x88),*(undefined8 *)(param_4 + 0x68),&local_70,pcVar4,
                param_5 + 0x30);
  FUN_10004a2a0(*(undefined8 *)(param_4 + 0x68));
  *(undefined8 *)(param_4 + 0x38) = param_11;
  uVar2 = *param_9;
  *(undefined4 *)(param_4 + 0x9c) = *(undefined4 *)(param_9 + 1);
  *(undefined8 *)(param_4 + 0x94) = uVar2;
  if (*(long *)(param_4 + 0x40) == 0) {
    uVar2 = FUN_1000544ac(param_4);
    *(undefined8 *)(param_4 + 0x40) = uVar2;
  }
  return;
}




undefined4 FUN_10005443c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 local_20 [4];
  
  plVar1 = *(long **)(param_1 + 0x58);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar1[1]) {
      uVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
    }
  }
  FUN_100345b68(uVar2,local_20,0);
  return local_20[0];
}




void * FUN_1000544ac(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  
  iVar4 = FUN_1004d2524(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28));
  if (iVar4 == 0) {
    pvVar5 = operator_new(0x60);
    thunk_FUN_10045cc04();
  }
  else {
    pvVar5 = operator_new(0x70);
    if (*(long *)(*(long *)(param_1 + 0x28) + 0x28) == 0) {
      local_50[0] = 0xffffffff;
    }
    else {
      FUN_10034cb1c(local_50);
    }
    FUN_1003ba954(local_48,local_50[0]);
    uVar6 = FUN_1003b05e8(pvVar5,local_48[0]);
    FUN_1003b062c(uVar6,1);
  }
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) == '\0') {
    FUN_1003b0624(pvVar5,*(undefined4 *)(param_1 + 0x90));
    FUN_10045cce8(pvVar5,*(char *)(*(long *)(param_1 + 0x28) + 8) == '\0');
  }
  pcVar8 = *(char **)(param_1 + 0x38);
  cVar1 = *pcVar8;
  cVar2 = pcVar8[1];
  cVar3 = pcVar8[2];
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 == (long *)0x0) {
    uVar6 = 0;
  }
  else if (*(int *)(param_1 + 0x50) == (int)plVar7[1]) {
    uVar6 = (**(code **)(*plVar7 + 0x10))();
  }
  else {
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
  }
  FUN_1003a25f4(pvVar5,cVar1 != '\0',cVar2 != '\0',cVar3 != '\0',uVar6);
  FUN_1003a598c(pvVar5,0);
  FUN_1003a5964(pvVar5,1);
  return pvVar5;
}




void FUN_100054614(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x118) = 1;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}




void FUN_100054624(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x11b) = param_2;
  return;
}




undefined8 FUN_10005462c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  
  plVar7 = (long *)(param_1 + 0x48);
  plVar2 = (long *)*plVar7;
  if (plVar2 == (long *)0x0) goto LAB_100054700;
  piVar9 = (int *)(param_1 + 0x50);
  if (*piVar9 == (int)plVar2[1]) {
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    if (lVar3 == 0) goto LAB_100054700;
    plVar7 = (long *)(param_1 + 0x58);
    plVar2 = (long *)*plVar7;
    if (plVar2 == (long *)0x0) goto LAB_100054700;
    piVar9 = (int *)(param_1 + 0x60);
    if (*piVar9 == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 == 0) goto LAB_100054700;
      lVar3 = (**(code **)(*(long *)*plVar7 + 0x10))();
      uVar4 = FUN_10034ea2c(*(undefined4 *)(lVar3 + 0x260));
      if ((uVar4 & 1) == 0) {
        FUN_10034ee90();
        uVar5 = FUN_100345d90();
        plVar2 = (long *)*plVar7;
        if (plVar2 == (long *)0x0) {
          lVar3 = 0;
        }
        else if (*piVar9 == (int)plVar2[1]) {
          lVar3 = (**(code **)(*plVar2 + 0x10))();
        }
        else {
          lVar3 = 0;
          *plVar7 = 0;
          *piVar9 = DAT_101dc0b88;
        }
        uVar5 = FUN_100345bbc(uVar5);
        uVar4 = FUN_1003dcd70(*(undefined8 *)(lVar3 + 0x80),uVar5);
        if ((uVar4 & 1) == 0) goto LAB_100054700;
        if ((*(long *)(*(long *)(param_1 + 0x28) + 0x20) != 0) &&
           (uVar4 = FUN_1004d2538(), (uVar4 & 1) == 0)) {
          lVar3 = (**(code **)(*(long *)*plVar7 + 0x10))();
          for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
            if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184daa8) {
              uVar4 = FUN_1003ba8f4(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
              if ((uVar4 & 1) != 0) goto LAB_1000546c4;
              break;
            }
          }
          goto LAB_100054700;
        }
      }
LAB_1000546c4:
      FUN_100055a94(param_1);
      uVar5 = FUN_10034ea2c();
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      lVar3 = param_1 + 0x94;
      iVar1 = FUN_1001018d0(lVar3);
      if (iVar1 != 0) {
        return 0;
      }
      FUN_100055a94(param_1);
      lVar6 = FUN_100345d90();
      lVar8 = *(long *)(lVar6 + 0x18);
      while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dab8))) {
        lVar8 = *(long *)(lVar8 + 0x20);
      }
      fVar11 = *(float *)(*(long *)(lVar6 + 0x40) + 0x310);
      uVar5 = FUN_1001018d8(lVar3);
      fVar10 = (float)FUN_1003e118c(lVar8,uVar5);
      if (fVar10 <= fVar11) {
        fVar11 = *(float *)(*(long *)(lVar6 + 0x40) + 0x314);
        uVar5 = FUN_1001018d8(lVar3);
        fVar10 = (float)FUN_1003e11c0(lVar8,uVar5);
        if (fVar10 <= fVar11) {
          return 0;
        }
      }
      goto LAB_100054700;
    }
  }
  *plVar7 = 0;
  *piVar9 = DAT_101dc0b88;
LAB_100054700:
  FUN_100054bc0(param_1);
  return 1;
}




void FUN_10005487c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x11b) == '\0') || (lVar2 = *(long *)(param_1 + 0x80), lVar2 == 0)) {
    if (*(char *)(lVar1 + 0x1c) == '\0') {
      if (*(char *)(param_1 + 0x119) == '\0') {
        return;
      }
      if (*(char *)(lVar1 + 0x1e) != '\0') {
        FUN_100054bc0();
        return;
      }
      goto LAB_1000548e4;
    }
    if (*(char *)(param_1 + 0x119) != '\0') {
      FUN_100056484();
      return;
    }
  }
  else {
    if (*(char *)(lVar2 + 0x80) == '\0') {
      if (*(char *)(param_1 + 0x119) == '\0') {
        return;
      }
      if (*(char *)(lVar2 + 0x82) != '\0') {
        FUN_100054bc0();
        return;
      }
LAB_1000548e4:
      FUN_1000565b8();
      return;
    }
    if (*(char *)(param_1 + 0x119) != '\0') {
      FUN_100056484();
      return;
    }
  }
  FUN_100056038();
  return;
}




undefined8
FUN_1000548e8(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4,int param_5,
             int param_6,char *param_7)

{
  undefined4 uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  if (*(char *)(param_1 + 0x118) != '\0') {
    return 0;
  }
  plVar9 = (long *)(param_1 + 0x48);
  plVar7 = (long *)*plVar9;
  if (plVar7 == (long *)0x0) goto LAB_100054ab0;
  piVar10 = (int *)(param_1 + 0x50);
  if (*piVar10 != (int)plVar7[1]) {
LAB_1000549e0:
    uVar11 = 0;
    *plVar9 = 0;
    *piVar10 = DAT_101dc0b88;
    goto LAB_100054ab4;
  }
  lVar8 = (**(code **)(*plVar7 + 0x10))();
  if (lVar8 != 0) {
    plVar9 = (long *)(param_1 + 0x58);
    plVar7 = (long *)*plVar9;
    if (plVar7 != (long *)0x0) {
      piVar10 = (int *)(param_1 + 0x60);
      if (*piVar10 != (int)plVar7[1]) goto LAB_1000549e0;
      lVar8 = (**(code **)(*plVar7 + 0x10))();
      if (lVar8 == 0) goto LAB_100054ab0;
      uVar1 = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(param_1 + 0xa0) = *param_3;
      *(undefined4 *)(param_1 + 0xa8) = uVar1;
      uVar13 = param_2[1];
      uVar11 = *param_2;
      *(undefined8 *)(param_1 + 0xbc) = param_2[2];
      *(undefined8 *)(param_1 + 0xb4) = uVar13;
      *(undefined8 *)(param_1 + 0xac) = uVar11;
      iVar6 = FUN_10012709c();
      if (iVar6 == 1) {
        iVar6 = FUN_10031615c(9);
        if (iVar6 == 0) {
LAB_100054a1c:
          uVar12 = FUN_100060abc();
          bVar4 = 0;
        }
        else {
          bVar4 = FUN_10031615c(10);
          uVar12 = 0;
        }
      }
      else {
        iVar6 = FUN_10012709c();
        if ((iVar6 != 0) || (uVar12 = FUN_10031615c(0xb), (uVar12 & 1) == 0)) goto LAB_100054a1c;
        bVar4 = 1;
        uVar12 = 1;
      }
      if (param_6 == 2) {
        if (*(char *)(param_1 + 0x11b) == '\0' && (bVar4 & 1) == 0) goto LAB_100054a6c;
LAB_100054a50:
        bVar3 = 1;
      }
      else {
        if (param_6 == 0) {
          bVar3 = FUN_100060abc();
          if (((bVar3 | bVar4) & 1) != 0) {
            bVar3 = bVar3 ^ 1;
            goto LAB_100054a7c;
          }
        }
        else if ((bVar4 & 1) != 0) goto LAB_100054a50;
LAB_100054a6c:
        bVar3 = *(char *)(*(long *)(param_1 + 0x28) + 0x18) == '\0';
      }
LAB_100054a7c:
      iVar6 = FUN_100316180(3);
      bVar2 = param_6 == 2 && param_5 == 1;
      if (iVar6 != 0) {
        bVar2 = *(char *)(param_1 + 0x11b) == '\0' && bVar2;
      }
      if (!bVar2) {
        if ((bVar3 & param_5 == 1) == 0) {
          bVar4 = param_5 == 3 & (bVar3 ^ 0xff);
          if (bVar4 == 0 && (uVar12 & 1) == 0) {
            if ((param_5 == 1) &&
               (iVar6 = FUN_100054c80(*(undefined4 *)(*(long *)(param_1 + 0x28) + 4),param_1,
                                      (undefined8 *)(param_1 + 0xa0)), iVar6 != 0)) {
              *(long *)(param_1 + 0x120) = param_4;
            }
            if (param_6 != 4) {
              uVar11 = 0;
              if ((*(long *)(param_1 + 0x120) == 0) || (*(long *)(param_1 + 0x120) != param_4))
              goto LAB_100054ba4;
            }
            FUN_100054ddc(param_1);
            iVar6 = FUN_10012709c();
            if ((iVar6 != 1) ||
               ((iVar6 = FUN_10031615c(9), iVar6 == 0 ||
                (uVar12 = FUN_10031615c(10), (uVar12 & 1) == 0)))) {
              FUN_100054e9c(0,0x4479c000,param_1);
            }
            uVar11 = 1;
          }
          else {
            if (bVar4 != 0) goto LAB_100054aec;
            uVar11 = 0;
          }
        }
        else {
LAB_100054aec:
          cVar5 = FUN_100054cf8(param_1);
          uVar11 = 0;
          *param_7 = cVar5;
        }
LAB_100054ba4:
        if (param_5 == 3) {
          *(undefined8 *)(param_1 + 0x120) = 0;
        }
        if (*param_7 == '\0') {
          return uVar11;
        }
        uVar11 = 1;
        goto LAB_100054ab4;
      }
    }
  }
LAB_100054ab0:
  uVar11 = 0;
LAB_100054ab4:
  FUN_100054bc0(param_1);
  return uVar11;
}




void FUN_100054bc0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xccc11f8e) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xccc11f8e];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xccc11f8f)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  FUN_1000540ac(param_1);
  FUN_1010a17e4(param_1);
  return;
}




bool FUN_100054c80(float param_1,float param_2,float param_3,long param_4,float *param_5)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  
  uVar2 = FUN_100126d48();
  if ((uVar2 & 1) == 0) {
    fVar3 = (float)FUN_10005443c(param_4);
    param_1 = *(float *)(param_4 + 0x88) + param_1;
    bVar1 = (*param_5 - fVar3) * (*param_5 - fVar3) +
            (param_5[1] - param_2) * (param_5[1] - param_2) +
            (param_5[2] - param_3) * (param_5[2] - param_3) <= param_1 * param_1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




undefined8 FUN_100054cf8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) != '\0') {
    uVar1 = FUN_100055698(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),
                          *(undefined4 *)(param_1 + 0xa8),param_1);
    return uVar1;
  }
  local_28 = FUN_10049001c(param_1 + 0xac,*(undefined8 *)(param_1 + 0x40));
  plVar2 = *(long **)(param_1 + 0x108);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x110) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        lVar3 = (**(code **)(**(long **)(param_1 + 0x108) + 0x10))();
        goto LAB_100054db4;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x110) = DAT_101dc0b88;
    }
  }
  FUN_100055930(param_1,&local_28,param_1 + 0xac);
  lVar3 = local_28;
  if (local_28 == 0) {
    return 0;
  }
LAB_100054db4:
  uVar1 = FUN_1000557d8(param_1,lVar3);
  return uVar1;
}




undefined8 FUN_100054ddc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  FUN_100055188();
  uVar3 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  if (uVar3 < 2) {
    FUN_1000553dc(param_1,uVar3 == 1);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  }
  if (uVar3 - 2 < 3) {
    FUN_1000554f4(param_1);
    plVar1 = *(long **)(param_1 + 0x58);
    uVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0x60) == (int)plVar1[1]) {
        uVar2 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        uVar2 = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
      }
    }
    FUN_100345b68(uVar2,&local_30,0);
    FUN_100044108(local_30,uStack_2c,local_28,*(undefined8 *)(param_1 + 0x100));
  }
  return 1;
}




void FUN_100054e9c(float param_1,float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_40;
  float local_38;
  
  if (*(char *)(*(long *)(param_4 + 0x28) + 0x18) == '\0') {
    uVar4 = *(undefined8 *)(param_4 + 0x40);
    fVar6 = param_2;
    fVar5 = (float)FUN_10005443c();
    local_38 = *(float *)(param_4 + 0xcc) + param_3;
    local_40 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xc4) >> 0x20) + fVar6,
                        (float)*(undefined8 *)(param_4 + 0xc4) + fVar5);
    uVar2 = (**(code **)(**(long **)(param_4 + 0x58) + 0x10))();
    lVar3 = FUN_10006103c(param_1 + 4.5,*(float *)(param_4 + 0x88) + param_2,uVar4,&local_40,uVar2,0
                         );
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x30);
      *(long *)(param_4 + 0x108) = lVar3 + 0x28;
      *(undefined4 *)(param_4 + 0x110) = uVar1;
      uVar2 = FUN_100061d30();
      FUN_10005fa58(uVar2,lVar3);
    }
  }
  return;
}




bool FUN_100054f58(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  plVar2 = *(long **)(param_4 + 0x48);
  bVar1 = false;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_4 + 0x50) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      bVar1 = false;
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_4 + 0x58);
        bVar1 = false;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_4 + 0x60) == (int)plVar2[1]) {
            lVar3 = (**(code **)(*plVar2 + 0x10))();
            bVar1 = false;
            if (lVar3 != 0) {
              fVar5 = *(float *)(param_4 + 0x88);
              fVar4 = (float)FUN_10005443c(param_4);
              bVar1 = (*param_5 - fVar4) * (*param_5 - fVar4) +
                      (param_5[1] - param_2) * (param_5[1] - param_2) +
                      (param_5[2] - param_3) * (param_5[2] - param_3) <= fVar5 * fVar5;
            }
          }
          else {
            bVar1 = false;
            *(undefined8 *)(param_4 + 0x58) = 0;
            *(undefined4 *)(param_4 + 0x60) = DAT_101dc0b88;
          }
        }
      }
    }
    else {
      bVar1 = false;
      *(undefined8 *)(param_4 + 0x48) = 0;
      *(undefined4 *)(param_4 + 0x50) = DAT_101dc0b88;
    }
  }
  return bVar1;
}




void FUN_100055040(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = *param_5;
  local_28 = *(undefined4 *)(param_5 + 1);
  local_40 = FUN_10005443c();
  uStack_3c = param_2;
  local_38 = param_3;
  FUN_100055090(param_4,&local_30,&local_40);
  return;
}




undefined8 FUN_100055090(long param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = (float)*(undefined8 *)(param_2 + 1) - (float)*(undefined8 *)(param_3 + 1);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar3 = fVar3 * fVar3 + (*param_2 - *param_3) * (*param_2 - *param_3) + fVar4 * fVar4;
  if (*(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88) < fVar3) {
    iVar1 = FUN_100126d48();
    if (iVar1 == 0) {
      fVar4 = *(float *)(*(long *)(param_1 + 0x28) + 4);
      if ((fVar4 <= 0.0) ||
         (fVar2 = *(float *)(param_1 + 0x88), fVar4 = fVar2 + fVar4, fVar4 * fVar4 < fVar3)) {
        return 0;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x88);
    }
    fVar5 = (float)*(undefined8 *)param_3;
    fVar3 = (float)*(undefined8 *)param_2 - fVar5;
    fVar6 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) - fVar6;
    fVar8 = param_3[2];
    fVar7 = param_2[2] - fVar8;
    fVar9 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7);
    *(ulong *)param_2 = CONCAT44((fVar4 * fVar2) / fVar9 + fVar6,(fVar3 * fVar2) / fVar9 + fVar5);
    param_2[2] = (fVar7 * fVar2) / fVar9 + fVar8;
  }
  return 1;
}




void FUN_100055188(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long local_50;
  undefined4 local_48;
  long local_40;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 0x11d) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x11d) = 1;
  uVar5 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  if (((uVar5 | 4) == 4) && (*(char *)(param_1 + 0x118) != '\0')) {
    if (*(long *)(param_1 + 0xf0) == 0) {
      uVar1 = FUN_100345b94();
      lVar2 = FUN_10034c450(uVar1,"*JoystickBasicAttackReticle*");
      uVar1 = FUN_1010a0298(param_1,DAT_10184dc88);
      *(undefined8 *)(param_1 + 0xf0) = uVar1;
      lVar3 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
      local_40 = lVar3 + 0x28;
      local_38 = *(undefined4 *)(lVar3 + 0x30);
      FUN_10004a1e8(0x3f800000,uVar1,&local_40,*(undefined8 *)(lVar2 + 8),lVar2);
      FUN_10004a2a0(*(undefined8 *)(param_1 + 0xf0));
    }
    if (*(long *)(param_1 + 0xf8) == 0) {
      uVar1 = FUN_100345b94();
      puVar4 = (undefined8 *)FUN_10034c450(uVar1,"*JoystickBasicAttackReticle*");
      uVar1 = FUN_1010a0298(param_1,DAT_10184dc88);
      *(undefined8 *)(param_1 + 0xf8) = uVar1;
      lVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
      local_50 = lVar2 + 0x28;
      local_48 = *(undefined4 *)(lVar2 + 0x30);
      FUN_10004a1e8(0x3f800000,uVar1,&local_50,*puVar4,puVar4);
      FUN_10004a2a0(*(undefined8 *)(param_1 + 0xf8));
    }
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xf0);
    uVar5 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  }
  if (uVar5 == 1) {
    if (*(long *)(param_1 + 0x100) != 0) goto LAB_1000553c0;
    uVar1 = FUN_1010a0298(param_1,DAT_10184df70);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    FUN_100043d50(uVar1,0);
    FUN_100043dc0(*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x4c),*(undefined8 *)(param_1 + 0x100)
                 );
    FUN_10004420c(*(undefined8 *)(param_1 + 0x100));
    uVar5 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  }
  if ((uVar5 == 4 || uVar5 == 2) && (*(long *)(param_1 + 0x100) == 0)) {
    uVar1 = FUN_1010a0298(param_1,DAT_10184df70);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    FUN_100043d50(uVar1,1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (*(char *)(lVar2 + 0x59) == '\0') {
      FUN_100043f90(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(lVar2 + 0x54),
                    *(undefined8 *)(param_1 + 0x100));
    }
    else {
      FUN_100044054(*(undefined4 *)(lVar2 + 0x54));
    }
    FUN_10004420c(*(undefined8 *)(param_1 + 0x100));
    uVar5 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  }
  if ((uVar5 == 3) && (*(long *)(param_1 + 0x100) == 0)) {
    uVar1 = FUN_1010a0298(param_1,DAT_10184df70);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    FUN_100043d50(uVar1,2);
    FUN_100043e68(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x50),
                  *(undefined8 *)(param_1 + 0x100));
    FUN_10004420c(*(undefined8 *)(param_1 + 0x100));
  }
LAB_1000553c0:
  FUN_100061d30();
  FUN_10005fc30();
  return;
}




void FUN_1000553dc(undefined1 param_1 [16],float param_2,float param_3,long param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_40;
  float local_38;
  
  fVar3 = *(float *)(*(long *)(param_4 + 0x28) + 0x5c);
  fVar1 = (float)FUN_10005443c();
  fVar1 = (float)*(undefined8 *)(param_4 + 0xa0) - fVar1;
  param_2 = (float)((ulong)*(undefined8 *)(param_4 + 0xa0) >> 0x20) - param_2;
  local_40 = CONCAT44(param_2,fVar1);
  local_38 = *(float *)(param_4 + 0xa8) - param_3;
  if (fVar3 <= 0.0) {
    if (param_5 != 0) {
      fVar2 = fVar1 * fVar1 + param_2 * param_2 + local_38 * local_38;
      fVar3 = *(float *)(param_4 + 0x88);
      if (fVar3 * fVar3 < fVar2) {
        fVar2 = SQRT(fVar2);
        local_40 = CONCAT44((param_2 * fVar3) / fVar2,(fVar1 * fVar3) / fVar2);
        local_38 = (local_38 * fVar3) / fVar2;
      }
    }
  }
  else {
    fVar3 = fVar1 * fVar1 + param_2 * param_2 + local_38 * local_38;
    if (1e-08 <= fVar3) {
      fVar3 = SQRT(fVar3);
      fVar1 = fVar1 / fVar3;
      param_2 = param_2 / fVar3;
      local_38 = local_38 / fVar3;
    }
    else {
      fVar1 = 0.0;
      param_2 = 0.0;
      local_38 = 0.0;
    }
    fVar3 = *(float *)(*(long *)(param_4 + 0x28) + 0x5c);
    local_40 = CONCAT44(param_2 * fVar3,fVar1 * fVar3);
    local_38 = local_38 * fVar3;
  }
  FUN_1000572a4(param_4,&local_40);
  return;
}




void FUN_1000554f4(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)FUN_10005443c();
  fVar2 = *(float *)(param_4 + 0xa0) - fVar2;
  param_2 = *(float *)(param_4 + 0xa4) - param_2;
  param_3 = *(float *)(param_4 + 0xa8) - param_3;
  *(float *)(param_4 + 0xc4) = fVar2;
  *(float *)(param_4 + 200) = param_2;
  *(float *)(param_4 + 0xcc) = param_3;
  fVar4 = fVar2 * fVar2 + param_2 * param_2 + param_3 * param_3;
  fVar3 = *(float *)(param_4 + 0x88);
  if (fVar3 * fVar3 < fVar4) {
    fVar4 = 1.0 / SQRT(fVar4);
    *(float *)(param_4 + 0xc4) = fVar2 * fVar3 * fVar4;
    *(float *)(param_4 + 200) = param_2 * fVar3 * fVar4;
    *(float *)(param_4 + 0xcc) = param_3 * fVar3 * fVar4;
  }
  uVar1 = *(undefined8 *)(param_4 + 0x100);
  _atan2f();
  FUN_1000441ac(uVar1);
  return;
}




void FUN_100055584(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0x94;
  iVar2 = FUN_1001018d0(lVar1);
  if ((iVar2 == 0) &&
     ((iVar2 = FUN_1001018d8(lVar1), iVar2 == param_2 ||
      (iVar2 = FUN_1001018e8(lVar1), iVar2 == param_3)))) {
    iVar2 = FUN_100054cf8(param_1);
    if (iVar2 != 0) {
      FUN_100054bc0(param_1);
    }
    iVar2 = FUN_10012709c();
    if (((iVar2 == 1) && (iVar2 = FUN_10031615c(9), iVar2 != 0)) &&
       (iVar2 = FUN_10031615c(10), iVar2 != 0)) {
      FUN_100054bc0(param_1);
      return;
    }
  }
  return;
}




void FUN_10005562c(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_1001018d0(param_1 + 0x94);
  if (((iVar1 == 1) && (iVar1 = FUN_1001018e0(param_1 + 0x94), iVar1 == param_2)) &&
     (iVar1 = FUN_100054cf8(param_1), iVar1 != 0)) {
    FUN_100054bc0(param_1);
    return;
  }
  return;
}




uint FUN_100055698(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  local_50 = param_1;
  uStack_4c = param_2;
  local_48 = param_3;
  local_60 = FUN_10005443c();
  uStack_5c = param_2;
  local_58 = param_3;
  uVar2 = FUN_100055090(param_4,&local_50,&local_60);
  uVar3 = FUN_100055e14(param_4,&local_50);
  if ((uVar2 & uVar3) == 1) {
    lVar5 = *(long *)(param_4 + 0x10);
    if (lVar5 != 0) {
      uVar8 = 0x10000;
LAB_100055700:
      do {
        do {
          lVar6 = lVar5;
          lVar5 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0xfb380daa);
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 8))(lVar6);
          }
          if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar5 = *(long *)(lVar6 + 0x18), lVar5 != 0)) {
            uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
            goto LAB_100055700;
          }
          if ((uVar8 & 0xffff) == 0) goto LAB_100055794;
          lVar5 = *(long *)(lVar6 + 0x20);
        } while (*(long *)(lVar6 + 0x20) != 0);
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((lVar6 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) break;
        uVar8 = uVar1 | uVar8 & 0xffff0000;
        while (lVar5 = *(long *)(lVar6 + 0x20), lVar5 == 0) {
          if ((uVar8 - 1 & 0xffff) == 0) goto LAB_100055794;
          lVar6 = *(long *)(lVar6 + 0x10);
          uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
          if (lVar6 == 0) goto LAB_100055794;
        }
      } while( true );
    }
LAB_100055794:
    uVar7 = *(undefined8 *)(param_4 + 0x70);
    uVar4 = (**(code **)(**(long **)(param_4 + 0x48) + 0x10))();
    FUN_1000511ec(uVar7,uVar4,param_4 + 0x94,&local_50);
  }
  return uVar2 & uVar3;
}




bool FUN_1000557d8(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
  fVar9 = (float)FUN_1003ace34(uVar4,param_2);
  bVar1 = fVar9 <= *(float *)(param_1 + 0x88);
  bVar3 = *(char *)(*(long *)(param_1 + 0x28) + 1) != '\0';
  if (bVar3 || bVar1) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      uVar8 = 0x10000;
LAB_100055850:
      do {
        do {
          lVar6 = lVar5;
          lVar5 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0xd22b0c6a);
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 8))(lVar6);
          }
          if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar5 = *(long *)(lVar6 + 0x18), lVar5 != 0)) {
            uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
            goto LAB_100055850;
          }
          if ((uVar8 & 0xffff) == 0) goto LAB_1000558e8;
          lVar5 = *(long *)(lVar6 + 0x20);
        } while (*(long *)(lVar6 + 0x20) != 0);
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((lVar6 == 0) || (uVar2 = uVar8 - 1 & 0xffff, uVar2 == 0)) break;
        uVar8 = uVar2 | uVar8 & 0xffff0000;
        while (lVar5 = *(long *)(lVar6 + 0x20), lVar5 == 0) {
          if ((uVar8 - 1 & 0xffff) == 0) goto LAB_1000558e8;
          lVar6 = *(long *)(lVar6 + 0x10);
          uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
          if (lVar6 == 0) goto LAB_1000558e8;
        }
      } while( true );
    }
LAB_1000558e8:
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    uVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
    FUN_100051284(uVar7,uVar4,param_1 + 0x94,*(undefined4 *)(param_2 + 0x260));
  }
  return bVar3 || bVar1;
}




void FUN_100055930(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_98 [4];
  float local_88 [4];
  long local_78 [6];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if ((((*(byte *)(param_1 + 0x90) & 1) != 0) && (*param_2 != 0)) &&
     ((*(byte *)(*param_2 + 0x2f4) & 1) == 0)) {
    uVar2 = FUN_1000544ac();
    FUN_1003b0624(uVar2,1);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
    uVar3 = FUN_1003a3e24();
    FUN_1000e8dc8(param_3,uVar3,local_88);
    FUN_1003a6cbc(0x3fb33333,uVar2,local_88);
    uVar1 = FUN_1003a6ce4(uVar2,local_78,6,0);
    if (uVar1 != 0) {
      lVar4 = 0;
      uVar5 = (ulong)uVar1;
      plVar6 = local_78;
      fVar9 = 1.9599999;
      do {
        FUN_100345b68(*plVar6,local_98,0);
        fVar7 = (float)local_98._4_8_ - (float)local_88._4_8_;
        fVar8 = SUB84(local_98._4_8_,4) - SUB84(local_88._4_8_,4);
        fVar7 = fVar7 * fVar7 + (local_98[0] - local_88[0]) * (local_98[0] - local_88[0]) +
                fVar8 * fVar8;
        if (fVar7 < fVar9) {
          lVar4 = *plVar6;
          fVar9 = fVar7;
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      if (lVar4 != 0) {
        *param_2 = lVar4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




long FUN_100055a80(long param_1)

{
  return param_1 + 0x94;
}




undefined8 FUN_100055a88(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
}




undefined4 FUN_100055a94(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  
  plVar1 = *(long **)(param_1 + 0x48);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        lVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
        puVar3 = (undefined4 *)(lVar2 + 0x260);
        goto LAB_100055b00;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
    }
  }
  puVar3 = &DAT_101159f80;
LAB_100055b00:
  return *puVar3;
}




void FUN_100055b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  
  plVar3 = *(long **)(param_1 + 0x48);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        lVar4 = param_1 + 0x94;
        iVar1 = FUN_1001018d0(lVar4);
        if (iVar1 == 0) {
          lVar5 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
          lVar5 = *(long *)(lVar5 + 0x18);
          while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dab8))) {
            lVar5 = *(long *)(lVar5 + 0x20);
          }
          iVar1 = FUN_1003be070(lVar5,param_2);
          iVar2 = FUN_1001018d8(lVar4);
          if (iVar1 == iVar2) {
            uVar6 = FUN_1003be070(lVar5,param_3);
            lVar7 = FUN_1004612e0(lVar5,uVar6);
            if (lVar7 != 0) {
              FUN_10010189c(lVar4);
              FUN_1001018b4(lVar4,uVar6);
              uVar8 = FUN_1003e1f70(lVar5,uVar6);
              *(undefined4 *)(param_1 + 0x88) = uVar8;
              FUN_10004a298(*(undefined8 *)(param_1 + 0x68));
              return;
            }
            goto LAB_100055c30;
          }
        }
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
    }
  }
LAB_100055c30:
  FUN_100054bc0(param_1);
  return;
}




void FUN_100055c5c(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((param_2 >> 5 & 1) != 0) {
    iVar1 = FUN_1001018d0(param_1 + 0x94);
    if (iVar1 == 0) {
      lVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
      lVar2 = *(long *)(lVar2 + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      uVar3 = FUN_1001018d8(param_1 + 0x94);
      uVar4 = FUN_100461890(lVar2,uVar3);
      if ((uVar4 & 1) == 0) {
        FUN_100054bc0(param_1);
        return;
      }
    }
  }
  return;
}




undefined8 FUN_100055cf8(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x94;
  iVar2 = FUN_1001018d0(lVar1);
  if (iVar2 == 1) {
    lVar5 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
    lVar5 = *(long *)(lVar5 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184e000))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    uVar4 = FUN_1001018e0(lVar1);
    iVar2 = FUN_1003d77ec(lVar5,uVar4);
    if (iVar2 != 0) {
      uVar4 = FUN_1001018e0(lVar1);
      uVar4 = FUN_10046e6fc(lVar5,uVar4);
      return uVar4;
    }
  }
  else if (iVar2 == 0) {
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 == (long *)0x0) {
      uVar4 = 0;
    }
    else if (*(int *)(param_1 + 0x50) == (int)plVar3[1]) {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
    }
    uVar6 = FUN_1001018d8(lVar1);
    uVar4 = FUN_1003c1088(uVar4,uVar6);
    return uVar4;
  }
  return 0;
}




undefined8 FUN_100055e14(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [32];
  undefined1 local_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [100];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(*(long *)(param_1 + 0x28) + 8) == '\0') {
    local_50 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc);
    local_4c = 0x41200000;
    local_54 = 0;
    plVar2 = *(long **)(param_1 + 0x48);
    local_48 = local_50;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
        if (lVar3 != 0) {
          (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
          uVar5 = FUN_1003a3e24();
          uVar4 = FUN_10054e07c(uVar5,param_2,&local_54,param_2,&local_50);
          if ((uVar4 & 1) != 0) goto LAB_100055e44;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
      }
    }
    thunk_FUN_10045cc04(auStack_b8);
    FUN_1003a2644(auStack_b8,0x1000);
    FUN_10045ccc4(0x3c23d70a,auStack_b8,param_2);
    uVar5 = 1;
    FUN_1003a5964(auStack_b8,1);
    iVar1 = FUN_1003a6ce4(auStack_b8,auStack_40,1,0);
    if (iVar1 != 1) {
      plVar2 = *(long **)(param_1 + 0x48);
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_1 + 0x50) != (int)plVar2[1]) {
          uVar5 = 0;
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
          goto LAB_100056004;
        }
        lVar3 = (**(code **)(*plVar2 + 0x10))();
        if (lVar3 != 0) {
          plVar2 = *(long **)(param_1 + 0x48);
          uVar5 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x50) == (int)plVar2[1]) {
              uVar5 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar5 = 0;
              *(undefined8 *)(param_1 + 0x48) = 0;
              *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
            }
          }
          FUN_100345b68(uVar5,auStack_c8,0);
          (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
          uVar5 = FUN_1003a3e24();
          FUN_1003a7f08(auStack_f0,auStack_c8,param_2,uVar5);
          uVar5 = 1;
          local_d0 = 1;
          FUN_1003a7f34(auStack_f0,param_2,0);
          goto LAB_100056004;
        }
      }
      uVar5 = 0;
    }
  }
  else {
LAB_100055e44:
    uVar5 = 1;
  }
LAB_100056004:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}




void FUN_100056038(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  
  *(undefined1 *)(param_1 + 0x119) = 1;
  if (*(char *)(param_1 + 0x11b) != '\0') {
    return;
  }
  FUN_100055188();
  lVar3 = FUN_100061d30();
  plVar6 = *(long **)(lVar3 + 0x10);
  if (plVar6 == (long *)0x0) {
    lVar4 = 0;
  }
  else if (*(int *)(lVar3 + 0x18) == (int)plVar6[1]) {
    lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  else {
    lVar4 = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined4 *)(lVar3 + 0x18) = DAT_101dc0b88;
  }
  plVar6 = (long *)FUN_100061d30();
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    lVar3 = 0;
  }
  else if ((int)plVar6[1] == (int)plVar7[1]) {
    lVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  else {
    lVar3 = 0;
    *plVar6 = 0;
    *(undefined4 *)(plVar6 + 1) = DAT_101dc0b88;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 0x118);
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) != '\0') {
    switch(iVar2) {
    case 0:
    case 4:
    case 5:
    case 6:
      goto switchD_100056148_caseD_0;
    case 1:
switchD_100056148_caseD_1:
      uVar5 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
      FUN_100056738(param_1,uVar5);
      return;
    case 2:
      *(undefined8 *)(param_1 + 0xc4) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      FUN_100057340(param_1);
      return;
    default:
      return;
    }
  }
  if (iVar2 - 4U < 4) {
LAB_100056178:
    if ((lVar4 == 0) || (iVar2 = FUN_10045bd00(*(undefined8 *)(param_1 + 0x40),lVar4), iVar2 == 0))
    {
      if ((lVar3 != 0) && (iVar2 = FUN_10045bd00(*(undefined8 *)(param_1 + 0x40),lVar3), iVar2 != 0)
         ) {
        uVar1 = *(undefined4 *)(lVar3 + 0x30);
        *(long *)(param_1 + 0x108) = lVar3 + 0x28;
        *(undefined4 *)(param_1 + 0x110) = uVar1;
        uVar5 = FUN_100061d30();
        goto LAB_100056298;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
      lVar4 = FUN_10006137c(*(float *)(param_1 + 0x88),*(float *)(param_1 + 0x88) + 3.0,uVar8,uVar5,
                            0,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x118));
      if (lVar4 == 0) {
        return;
      }
    }
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 != 0) {
        return;
      }
      goto LAB_100056178;
    }
    plVar6 = *(long **)(param_1 + 0x48);
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (*(int *)(param_1 + 0x50) != (int)plVar6[1]) {
LAB_1000563a0:
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
      return;
    }
    lVar3 = (**(code **)(*plVar6 + 0x10))();
    if (lVar3 == 0) {
      return;
    }
    plVar6 = *(long **)(param_1 + 0x48);
    if (plVar6 == (long *)0x0) {
      lVar4 = 0;
    }
    else if (*(int *)(param_1 + 0x50) == (int)plVar6[1]) {
      lVar4 = (**(code **)(*plVar6 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
      lVar4 = 0;
    }
  }
  lVar3 = lVar4;
  uVar1 = *(undefined4 *)(lVar3 + 0x30);
  *(long *)(param_1 + 0x108) = lVar3 + 0x28;
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  uVar5 = FUN_100061d30();
LAB_100056298:
  FUN_10005fa58(uVar5,lVar3);
  return;
switchD_100056148_caseD_0:
  if (((lVar4 == 0) || (iVar2 = FUN_10045bd00(*(undefined8 *)(param_1 + 0x40),lVar4), iVar2 == 0))
     && ((lVar3 == 0 ||
         (iVar2 = FUN_10045bd00(*(undefined8 *)(param_1 + 0x40),lVar3), lVar4 = lVar3, iVar2 == 0)))
     ) {
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
    lVar4 = FUN_10006137c(*(float *)(param_1 + 0x88),*(float *)(param_1 + 0x88) + 3.0,uVar8,uVar5,0,
                          *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x118));
    if (lVar4 == 0) {
      plVar6 = *(long **)(param_1 + 0x58);
      if (plVar6 == (long *)0x0) {
        return;
      }
      if (*(int *)(param_1 + 0x60) != (int)plVar6[1]) {
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
        return;
      }
      lVar3 = (**(code **)(*plVar6 + 0x10))();
      if (lVar3 == 0) {
        return;
      }
      plVar6 = *(long **)(param_1 + 0x48);
      if (plVar6 == (long *)0x0) {
        return;
      }
      if (*(int *)(param_1 + 0x50) != (int)plVar6[1]) goto LAB_1000563a0;
      lVar3 = (**(code **)(*plVar6 + 0x10))();
      if (lVar3 == 0) {
        return;
      }
      plVar6 = *(long **)(param_1 + 0x58);
      if (plVar6 == (long *)0x0) {
        lVar3 = 0;
      }
      else if (*(int *)(param_1 + 0x60) == (int)plVar6[1]) {
        lVar3 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        lVar3 = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
      }
      plVar6 = *(long **)(param_1 + 0x48);
      lVar4 = 0;
      if (plVar6 != (long *)0x0) {
        if (*(int *)(param_1 + 0x50) == (int)plVar6[1]) {
          lVar4 = (**(code **)(*plVar6 + 0x10))();
        }
        else {
          lVar4 = 0;
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
        }
      }
      if (lVar3 != lVar4) {
        return;
      }
      goto switchD_100056148_caseD_1;
    }
  }
  FUN_100056684(param_1,lVar4);
  return;
}




void FUN_100056484(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_48;
  
  lVar4 = *(long *)(param_1 + 0x78);
  if (*(char *)(lVar4 + 0x1d) == '\0') {
    if ((*(char *)(*(long *)(param_1 + 0x80) + 0x81) != '\0') &&
       (FUN_100055188(param_1), *(char *)(param_1 + 0x11b) != '\0')) {
      lVar4 = *(long *)(param_1 + 0x80);
      fVar8 = *(float *)(lVar4 + 0x78);
      fVar13 = *(float *)(lVar4 + 0x7c);
      fVar11 = fVar13;
      FUN_10005684c(*(undefined4 *)(lVar4 + 0x74),fVar8,fVar13,param_1,1);
      if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) != '\0') {
        bVar1 = true;
        bVar2 = false;
        if ((*(uint *)(*(long *)(param_1 + 0x28) + 0x48) & 0xfffffffe) == 2) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar13)) {
            bVar1 = fVar13 < 0.5;
            bVar2 = false;
          }
        }
        if (bVar1 == bVar2) {
          local_48 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x74);
          fVar5 = (float)FUN_1000e8c04(&local_48);
          fVar13 = fVar8;
          fVar12 = fVar11;
          fVar6 = (float)FUN_10005443c(param_1);
          FUN_100055698(fVar6 + fVar5,fVar13 + fVar8,fVar12 + fVar11,param_1);
        }
      }
      return;
    }
    uVar10 = 0;
    uVar3 = 0;
    uVar9 = DAT_101873a50._4_4_;
    uVar7 = (undefined4)DAT_101873a50;
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) == '\0') {
      FUN_100055188(param_1);
      lVar4 = *(long *)(param_1 + 0x78);
    }
    uVar10 = *(undefined4 *)(lVar4 + 0x18);
    uVar3 = 1;
    uVar9 = *(undefined4 *)(lVar4 + 0x14);
    uVar7 = *(undefined4 *)(lVar4 + 0x10);
  }
  FUN_10005684c(uVar7,uVar9,uVar10,param_1,uVar3);
  return;
}




void FUN_1000565b8(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if (*(char *)(param_4 + 0x11b) != '\0') {
    return;
  }
  iVar1 = FUN_100055cf8();
  if (iVar1 != 0) {
    if (*(char *)(*(long *)(param_4 + 0x28) + 0x18) == '\0') {
      plVar2 = *(long **)(param_4 + 0x108);
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_4 + 0x110) == (int)plVar2[1]) {
          lVar3 = (**(code **)(*plVar2 + 0x10))();
          if (lVar3 != 0) {
            uVar4 = (**(code **)(**(long **)(param_4 + 0x108) + 0x10))();
            FUN_1000557d8(param_4,uVar4);
          }
        }
        else {
          *(undefined8 *)(param_4 + 0x108) = 0;
          *(undefined4 *)(param_4 + 0x110) = DAT_101dc0b88;
        }
      }
    }
    else {
      fVar5 = (float)FUN_10005443c(param_4);
      FUN_100055698(*(float *)(param_4 + 0xc4) + fVar5,*(float *)(param_4 + 200) + param_2,
                    *(float *)(param_4 + 0xcc) + param_3,param_4);
    }
  }
  FUN_100054bc0(param_4);
  return;
}




void FUN_100056684(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 local_30 [8];
  float local_28;
  
  FUN_100345b68(param_5,local_30,0);
  fVar1 = (float)FUN_10005443c(param_4);
  fVar1 = local_30._0_4_ - fVar1;
  param_2 = local_30._4_4_ - param_2;
  local_28 = local_28 - param_3;
  fVar3 = fVar1 * fVar1 + param_2 * param_2 + local_28 * local_28;
  fVar2 = *(float *)(param_4 + 0x88);
  if (fVar2 * fVar2 < fVar3) {
    fVar3 = SQRT(fVar3);
    fVar4 = *(float *)(*(long *)(param_4 + 0x28) + 0x5c);
    if (fVar4 <= 0.0) {
      fVar1 = (fVar1 / fVar3) * fVar2;
      param_2 = (param_2 / fVar3) * fVar2;
      local_28 = (local_28 / fVar3) * fVar2;
    }
    else {
      fVar1 = (fVar1 / fVar3) * fVar4;
      param_2 = (param_2 / fVar3) * fVar4;
      local_28 = fVar4 * (local_28 / fVar3);
    }
  }
  *(ulong *)(param_4 + 0xc4) = CONCAT44(param_2,fVar1);
  *(float *)(param_4 + 0xcc) = local_28;
  FUN_100057340(param_4);
  return;
}




void FUN_100056738(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_30;
  float fStack_2c;
  float local_28;
  
  puVar1 = (undefined8 *)FUN_10044b4a4(param_2);
  local_28 = *(float *)(puVar1 + 1);
  local_30 = (float)*puVar1;
  fStack_2c = (float)((ulong)*puVar1 >> 0x20);
  if (((ABS(local_30) < 1.1920929e-07) && (ABS(fStack_2c) < 1.1920929e-07)) &&
     (ABS(local_28) < 1.1920929e-07)) {
    FUN_1003a31c8(param_2,&local_30,&DAT_1013cd800);
  }
  if (((local_30 != 0.0) || (fStack_2c != 0.0)) || (local_28 != 0.0)) {
    fVar2 = *(float *)(*(long *)(param_1 + 0x28) + 0x5c);
    fVar3 = fVar2;
    fVar4 = fVar2;
    fVar5 = fStack_2c;
    fVar6 = local_28;
    if (fVar2 <= 0.0) {
      fVar2 = *(float *)(param_1 + 0x88) * 0.95;
      fVar3 = fStack_2c;
      fVar4 = local_28;
      fVar5 = fVar2;
      fVar6 = fVar2;
    }
    *(float *)(param_1 + 0xc4) = fVar2 * local_30;
    *(ulong *)(param_1 + 200) = CONCAT44(fVar6 * fVar4,fVar5 * fVar3);
    FUN_100057340(param_1);
  }
  return;
}




void FUN_10005684c(undefined4 param_1,float param_2,undefined1 param_3 [16],long param_4,
                  uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  float fStack_44;
  
  fVar9 = param_3._0_4_;
  if (*(char *)(param_4 + 0x11d) == '\0') {
    return;
  }
  local_48 = param_1;
  fStack_44 = param_2;
  FUN_100056a74();
  iVar2 = FUN_100061df0();
  if ((iVar2 == 0) || (*(char *)(*(long *)(param_4 + 0x28) + 0x59) == '\0')) {
    fVar7 = (float)FUN_10005443c(param_4);
    fVar8 = (float)((ulong)*(undefined8 *)(param_4 + 0xdc) >> 0x20) + param_2;
    param_2 = *(float *)(param_4 + 0xe4) + fVar9;
    *(ulong *)(param_4 + 0xd0) = CONCAT44(fVar8,(float)*(undefined8 *)(param_4 + 0xdc) + fVar7);
    *(float *)(param_4 + 0xd8) = param_2;
  }
  else {
    FUN_1000320fc();
    FUN_100033428();
    puVar3 = (undefined8 *)FUN_10002e57c();
    uVar1 = *(undefined4 *)(puVar3 + 1);
    *(undefined8 *)(param_4 + 0xd0) = *puVar3;
    *(undefined4 *)(param_4 + 0xd8) = uVar1;
  }
  uVar6 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
  if (uVar6 < 5 && (1 << (ulong)(uVar6 & 0x1f) & 0x13U) != 0) {
    if ((param_5 & 1) == 0) {
      if (uVar6 == 1) {
        uVar5 = *(undefined8 *)(param_4 + 0x100);
        fVar7 = (float)FUN_10005443c(param_4);
        FUN_100044108(*(float *)(param_4 + 0xc4) + fVar7,*(float *)(param_4 + 200) + param_2,
                      *(float *)(param_4 + 0xcc) + fVar9,uVar5);
        uVar6 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
      }
      goto LAB_100056960;
    }
    FUN_100056b1c(param_3._0_8_,param_4,&local_48);
    if (2 < *(int *)(*(long *)(param_4 + 0x28) + 0x48) - 2U) goto LAB_1000569e0;
LAB_100056970:
    FUN_100056bf0(param_3._0_8_,param_4,&local_48);
LAB_100056980:
    plVar4 = *(long **)(param_4 + 0x58);
    uVar5 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_4 + 0x60) == (int)plVar4[1]) {
        uVar5 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        uVar5 = 0;
        *(undefined8 *)(param_4 + 0x58) = 0;
        *(undefined4 *)(param_4 + 0x60) = DAT_101dc0b88;
      }
    }
    FUN_100345b68(uVar5,&local_58,0);
    FUN_100044108(local_58,uStack_54,local_50,*(undefined8 *)(param_4 + 0x100));
  }
  else {
LAB_100056960:
    if (uVar6 - 2 < 3) {
      if (param_5 != 0) goto LAB_100056970;
      goto LAB_100056980;
    }
  }
  if (param_5 == 0) {
    FUN_10005704c(param_4);
    return;
  }
LAB_1000569e0:
  FUN_100056c68(param_4);
  FUN_100054e9c(0,0,param_4);
  return;
}




void FUN_100056a1c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x11a) != '\0') {
    FUN_1000320fc();
    lVar1 = FUN_100033428();
    FUN_10002e688(lVar1,lVar1 + 0x70);
    FUN_10002e61c(lVar1,4);
    FUN_10002e624(lVar1,2);
    *(undefined1 *)(param_1 + 0x11a) = 1;
  }
  return;
}




void FUN_100056a74(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = FUN_100057204();
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x100) != 0) {
      FUN_10004424c();
    }
    FUN_10004a310(*(undefined8 *)(param_1 + 0x68));
    plVar4 = (long *)(param_1 + 0xf0);
    if (*plVar4 != 0) {
      FUN_10004a2a0();
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      FUN_10004a308();
    }
    uVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x100) != 0) {
      FUN_10004428c();
    }
    FUN_10004a34c(*(undefined8 *)(param_1 + 0x68));
    if (*(long *)(param_1 + 0xf0) != 0) {
      FUN_10004a308();
    }
    plVar4 = (long *)(param_1 + 0xf8);
    if (*plVar4 == 0) {
      lVar3 = 0;
      uVar2 = 0;
      goto LAB_100056b08;
    }
    FUN_10004a2a0();
    uVar2 = 0;
  }
  lVar3 = *plVar4;
LAB_100056b08:
  *(long *)(param_1 + 0xe8) = lVar3;
  *(undefined1 *)(param_1 + 0x11c) = uVar2;
  return;
}




void FUN_100056b1c(float param_1,undefined1 param_2 [16],float param_3,long param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_50;
  float fStack_4c;
  float local_48;
  
  if (*(float *)(*(long *)(param_4 + 0x28) + 0x5c) <= 0.0) {
    fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_4 + 0x88),0x41800000);
    fVar5 = 6.0;
    if (fVar1 <= 6.0) {
      fVar1 = 6.0;
    }
    fVar2 = (float)FUN_100061350(fVar1,param_5);
    fVar1 = fVar5;
    fVar4 = param_1;
    fVar3 = (float)FUN_10005443c(param_4);
    local_50 = (*(float *)(param_4 + 0xd0) - fVar3) + fVar2;
    fStack_4c = (*(float *)(param_4 + 0xd4) - fVar4) + param_1;
    local_48 = (*(float *)(param_4 + 0xd8) - fVar1) + fVar5;
  }
  else {
    local_50 = (float)FUN_1000e8c04(param_5);
    local_48 = *(float *)(*(long *)(param_4 + 0x28) + 0x5c);
    local_50 = local_48 * local_50;
    fStack_4c = local_48 * param_1;
    local_48 = local_48 * param_3;
  }
  FUN_1000572a4(param_4,&local_50);
  return;
}




void FUN_100056bf0(float param_1,undefined1 param_2 [16],float param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (float)FUN_100061350(0x41800000,param_5);
  fVar4 = *(float *)(param_4 + 0xd0);
  fVar5 = *(float *)(param_4 + 0xd4) + param_1;
  fVar6 = *(float *)(param_4 + 0xd8) + param_3;
  fVar3 = (float)FUN_10005443c(param_4);
  *(float *)(param_4 + 0xc4) = (fVar4 + fVar2) - fVar3;
  *(float *)(param_4 + 200) = fVar5 - param_1;
  *(float *)(param_4 + 0xcc) = fVar6 - param_3;
  uVar1 = *(undefined8 *)(param_4 + 0x100);
  _atan2f();
  FUN_1000441ac(uVar1);
  return;
}




void FUN_100056c68(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_70;
  float local_68;
  undefined8 local_60;
  float local_58;
  
  FUN_1000320fc();
  lVar3 = FUN_100033428();
  uVar4 = FUN_100061df0();
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = FUN_10002ea68(lVar3);
  if (lVar5 != 0) {
    lVar6 = FUN_10002ea68(lVar3);
    plVar7 = *(long **)(param_4 + 0x58);
    lVar5 = 0;
    if (plVar7 != (long *)0x0) {
      if (*(int *)(param_4 + 0x60) == (int)plVar7[1]) {
        lVar5 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        lVar5 = 0;
        *(undefined8 *)(param_4 + 0x58) = 0;
        *(undefined4 *)(param_4 + 0x60) = DAT_101dc0b88;
      }
    }
    if (lVar6 != lVar5) {
      plVar7 = *(long **)(param_4 + 0x58);
      if (plVar7 == (long *)0x0) {
        return;
      }
      if (*(int *)(param_4 + 0x60) != (int)plVar7[1]) {
        *(undefined8 *)(param_4 + 0x58) = 0;
        *(undefined4 *)(param_4 + 0x60) = DAT_101dc0b88;
        return;
      }
      lVar5 = (**(code **)(*plVar7 + 0x10))();
      if (lVar5 == 0) {
        return;
      }
      plVar7 = *(long **)(param_4 + 0x48);
      if (plVar7 == (long *)0x0) {
        return;
      }
      if (*(int *)(param_4 + 0x50) != (int)plVar7[1]) {
        *(undefined8 *)(param_4 + 0x48) = 0;
        *(undefined4 *)(param_4 + 0x50) = DAT_101dc0b88;
        return;
      }
      lVar5 = (**(code **)(*plVar7 + 0x10))();
      if (lVar5 == 0) {
        return;
      }
      uVar8 = FUN_10002ea68(lVar3);
      FUN_100345b68(uVar8,&local_60,0);
      fVar10 = (float)FUN_10005443c(param_4);
      fVar17 = (float)((ulong)local_60 >> 0x20);
      local_70 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20) -
                          (fVar17 + (fVar17 + param_2) * -0.5),
                          (float)*(undefined8 *)(lVar3 + 0x70) -
                          ((float)local_60 + ((float)local_60 + fVar10) * -0.5));
      local_68 = *(float *)(lVar3 + 0x78) - (local_58 + (local_58 + param_3) * -0.5);
      puVar9 = &local_70;
      goto LAB_100056ffc;
    }
  }
  if (*(float *)(param_4 + 0x88) < 10.0) {
    return;
  }
  fVar10 = 16.0;
  fVar17 = (float)NEON_fminnm(*(float *)(param_4 + 0x88),0x41800000);
  if (fVar17 == 16.0) {
    fVar11 = (float)FUN_10005443c(param_4);
    fVar11 = (fVar11 + *(float *)(param_4 + 0xc4)) - *(float *)(param_4 + 0xd0);
    fVar13 = (*(float *)(param_4 + 200) + fVar10) - *(float *)(param_4 + 0xd4);
    fVar10 = (*(float *)(param_4 + 0xcc) + param_3) - *(float *)(param_4 + 0xd8);
    fVar15 = fVar11 * fVar11 + fVar13 * fVar13 + fVar10 * fVar10;
    if (225.0 < fVar15) {
      if (1e-08 <= fVar15) {
        fVar15 = 1.0 / SQRT(fVar15);
        fVar11 = fVar11 * fVar15;
        fVar13 = fVar13 * fVar15;
        fVar10 = fVar10 * fVar15;
      }
      else {
        fVar11 = 0.0;
        fVar13 = 0.0;
        fVar10 = 0.0;
      }
      bVar1 = false;
      if ((fVar11 == 0.0) && (bVar1 = false, !NAN(fVar13))) {
        bVar1 = fVar13 == 0.0;
      }
      bVar2 = false;
      if ((bVar1) && (bVar2 = false, !NAN(fVar10))) {
        bVar2 = fVar10 == 0.0;
      }
      if (!bVar2) {
        fVar15 = (float)FUN_1010a1cd4();
        fVar15 = fVar15 * 8.0;
        fVar12 = *(float *)(param_4 + 0xdc) + fVar11 * fVar15;
        fVar14 = *(float *)(param_4 + 0xe0) + fVar13 * fVar15;
        *(float *)(param_4 + 0xdc) = fVar12;
        *(float *)(param_4 + 0xe0) = fVar14;
        fVar16 = *(float *)(param_4 + 0xe4) + fVar10 * fVar15;
        *(float *)(param_4 + 0xe4) = fVar16;
        fVar15 = *(float *)(param_4 + 0x88) + -16.0;
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        if (fVar15 * fVar15 < fVar12 * fVar12 + fVar14 * fVar14 + fVar16 * fVar16) {
          *(float *)(param_4 + 0xdc) = fVar15 * fVar11;
          *(float *)(param_4 + 0xe0) = fVar15 * fVar13;
          *(float *)(param_4 + 0xe4) = fVar15 * fVar10;
        }
      }
    }
  }
  fVar10 = *(float *)(param_4 + 0xcc);
  fVar11 = (float)*(undefined8 *)(param_4 + 0xc4);
  fVar13 = (float)((ulong)*(undefined8 *)(param_4 + 0xc4) >> 0x20);
  if (((ABS(fVar11) < 0.01) && (ABS(fVar13) < 0.01)) && (ABS(fVar10) < 0.01)) {
    return;
  }
  fVar12 = SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar10 * fVar10);
  fVar15 = (float)NEON_fminnm(fVar12 / fVar17,0x3f800000);
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar15 = fVar15 * (fVar17 + -10.0);
  fVar11 = fVar11 / fVar12;
  fVar13 = fVar13 / fVar12;
  fVar10 = fVar10 / fVar12;
  local_60 = *(undefined8 *)(lVar3 + 0x70);
  local_58 = *(float *)(lVar3 + 0x78);
  local_70 = 0x3f80000000000000;
  fVar17 = fVar11;
  fVar14 = (float)FUN_1000e8c04(&local_70);
  fVar17 = (float)NEON_fminnm(fVar14 * fVar11 + fVar17 * fVar13 + fVar10 * fVar12,0x3f800000);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar15 = fVar15 + fVar15 * fVar17 * 0.75;
  local_60 = CONCAT44((float)((ulong)local_60 >> 0x20) + fVar13 * fVar15 +
                      (float)((ulong)*(undefined8 *)(param_4 + 0xdc) >> 0x20),
                      (float)local_60 + fVar11 * fVar15 + (float)*(undefined8 *)(param_4 + 0xdc));
  local_58 = *(float *)(param_4 + 0xe4) + local_58 + fVar10 * fVar15;
  puVar9 = &local_60;
LAB_100056ffc:
  FUN_10002e688(lVar3,puVar9);
  FUN_10002e61c(lVar3,4);
  *(undefined1 *)(param_4 + 0x11a) = 1;
  return;
}




void FUN_10005704c(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  if (*(char *)(param_4 + 0x118) == '\0') {
    return;
  }
  iVar2 = FUN_100061df0();
  if (iVar2 == 0) {
    return;
  }
  if (*(char *)(*(long *)(param_4 + 0x28) + 0x59) == '\0') {
    return;
  }
  uVar1 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
  if (4 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x13U) == 0) goto LAB_100057118;
  FUN_1000320fc();
  FUN_100033428();
  pfVar3 = (float *)FUN_10002e57c();
  fVar11 = *pfVar3;
  fVar13 = pfVar3[1];
  fVar14 = pfVar3[2];
  fVar10 = (float)FUN_10005443c(param_4);
  param_2 = fVar13 - param_2;
  param_3 = fVar14 - param_3;
  *(float *)(param_4 + 0xc4) = fVar11 - fVar10;
  *(float *)(param_4 + 200) = param_2;
  *(float *)(param_4 + 0xcc) = param_3;
  iVar2 = *(int *)(*(long *)(param_4 + 0x28) + 0x48);
  if (iVar2 != 4) {
    if (iVar2 == 1) {
      param_2 = fVar13;
      param_3 = fVar14;
      FUN_100044108(fVar11,*(undefined8 *)(param_4 + 0x100));
      goto LAB_100057118;
    }
    if (iVar2 != 0) goto LAB_100057118;
  }
  FUN_10004a284(*(undefined8 *)(param_4 + 0xe8),param_4 + 0xc4);
LAB_100057118:
  if (*(int *)(*(long *)(param_4 + 0x28) + 0x48) - 2U < 3) {
    FUN_1000320fc();
    FUN_100033428();
    puVar4 = (undefined8 *)FUN_10002e57c();
    uVar12 = *puVar4;
    fVar11 = *(float *)(puVar4 + 1);
    fVar10 = (float)FUN_10005443c(param_4);
    *(ulong *)(param_4 + 0xc4) =
         CONCAT44((float)((ulong)uVar12 >> 0x20) - param_2,(float)uVar12 - fVar10);
    *(float *)(param_4 + 0xcc) = fVar11 - param_3;
    _atan2f();
    FUN_1000441ac(*(undefined8 *)(param_4 + 0x100));
  }
  lVar5 = FUN_1000bdb98();
  plVar6 = (long *)(lVar5 + 0x10);
  plVar7 = (long *)*plVar6;
  plVar8 = plVar6;
  if (plVar7 != (long *)0x0) {
    do {
      if (*(uint *)(plVar7 + 4) >= 0x646552f8) {
        plVar8 = plVar7;
      }
      plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < 0x646552f8];
    } while (plVar7 != (long *)0x0);
    if (((plVar8 != plVar6) && (*(uint *)(plVar8 + 4) < 0x646552f9)) && ((int)plVar8[5] != 0)) {
      lVar5 = 0;
      uVar9 = 0;
      do {
        (*(code *)((undefined8 *)(plVar8[6] + lVar5))[1])(*(undefined8 *)(plVar8[6] + lVar5));
        uVar9 = uVar9 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar9 < *(uint *)(plVar8 + 5));
    }
  }
  return;
}




undefined8 FUN_100057204(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x94;
  iVar2 = FUN_1001018d0(lVar1);
  if (iVar2 == 1) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
    uVar3 = FUN_100490234();
    uVar4 = FUN_1001018e0(lVar1);
    uVar3 = FUN_10046e740(uVar3,uVar4);
    return uVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
    uVar3 = FUN_1003a7540();
    uVar4 = FUN_1001018d8(lVar1);
    uVar3 = FUN_100461350(uVar3,uVar4);
    return uVar3;
  }
  return 0x400;
}




void FUN_1000572a4(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = *(undefined8 *)param_5;
  *(float *)(param_4 + 0xcc) = param_5[2];
  *(undefined8 *)(param_4 + 0xc4) = uVar1;
  if ((*(long *)(param_4 + 0xe8) != 0) && ((*(uint *)(*(long *)(param_4 + 0x28) + 0x48) | 4) == 4))
  {
    FUN_10004a284(*(long *)(param_4 + 0xe8),param_5);
    return;
  }
  lVar2 = *(long *)(param_4 + 0x100);
  if ((lVar2 != 0) && (*(int *)(*(long *)(param_4 + 0x28) + 0x48) == 1)) {
    fVar3 = (float)FUN_10005443c();
    FUN_100044108(*param_5 + fVar3,param_5[1] + param_2,param_5[2] + param_3,lVar2);
    return;
  }
  return;
}




void FUN_100057340(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar1 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
  if ((uVar1 | 4) == 4) {
    FUN_10004a284(*(undefined8 *)(param_4 + 0xe8),param_4 + 0xc4);
    uVar1 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
  }
  if (uVar1 == 1) {
    uVar2 = *(undefined8 *)(param_4 + 0x100);
    fVar3 = (float)FUN_10005443c(param_4);
    FUN_100044108(*(float *)(param_4 + 0xc4) + fVar3,*(float *)(param_4 + 200) + param_2,
                  *(float *)(param_4 + 0xcc) + param_3,uVar2);
    uVar1 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
  }
  if (uVar1 - 2 < 3) {
    uVar2 = *(undefined8 *)(param_4 + 0x100);
    FUN_10005443c(param_4);
    FUN_100044108(uVar2);
    _atan2f(*(undefined4 *)(param_4 + 0xc4),*(undefined4 *)(param_4 + 0xcc));
    FUN_1000441ac(*(undefined8 *)(param_4 + 0x100));
    return;
  }
  return;
}




undefined8 * thunk_FUN_100053f08(undefined8 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_1 = &PTR_thunk_FUN_100054038_10144d458;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 10) = DAT_101dc0b88;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  uVar3 = NEON_fmov(0x3f800000,4);
  param_1[0x11] = uVar3;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_10010187c((long)param_1 + 0x94);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  fVar2 = *(float *)(param_1 + 0x17);
  fVar4 = *(float *)((long)param_1 + 0xbc);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar5 = 1.0 / SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6);
  *(float *)(param_1 + 0x17) = fVar2 * fVar5;
  *(float *)((long)param_1 + 0xbc) = fVar4 * fVar5;
  *(float *)(param_1 + 0x18) = fVar6 * fVar5;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((long)param_1 + 0x11c) = 1;
  param_1[0x24] = 0;
  return param_1;
}




void FUN_1000573fc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100057404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100057408(void)

{
  if ((DAT_10184db38 & 1) == 0) {
    DAT_10184db30 = DAT_101872e38;
    DAT_10184db38 = 1;
  }
  return;
}




void FUN_100057434(void)

{
  if ((DAT_10184dc90 & 1) == 0) {
    DAT_10184dc88 = DAT_101872e38;
    DAT_10184dc90 = 1;
  }
  return;
}




void FUN_100057460(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




void FUN_10005748c(void)

{
  if ((DAT_10184dab0 & 1) == 0) {
    DAT_10184daa8 = DAT_101872e38;
    DAT_10184dab0 = 1;
  }
  return;
}




void FUN_1000574b8(void)

{
  if ((DAT_10184e008 & 1) == 0) {
    DAT_10184e000 = DAT_101872e38;
    DAT_10184e008 = 1;
  }
  return;
}




void FUN_1000574e4(void)

{
  if ((DAT_10184df78 & 1) == 0) {
    DAT_10184df70 = DAT_101872e38;
    DAT_10184df78 = 1;
  }
  return;
}




void FUN_100057510(long param_1)

{
  long lVar1;
  
  DAT_10184da88 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184da88 + 1;
  lVar1 = param_1 + (ulong)DAT_10184da88 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_100057e64;
  *(code **)(lVar1 + 0xb8) = FUN_100057ed0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184da88;
  *(undefined4 *)(lVar1 + 0xa8) = 0x848;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_10005757c,0);
  return;
}




void FUN_10005757c(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_100473734(param_1 + 0x28,*(undefined4 *)(param_1 + 0x844));
  plVar2 = *(long **)(param_1 + 0x808);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x810) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        fVar5 = (float)FUN_1010a1cd4();
        lVar3 = (**(code **)(**(long **)(param_1 + 0x808) + 0x10))();
        plVar2 = *(long **)(param_1 + 0x808);
        *(float *)(lVar3 + 0x818) = *(float *)(lVar3 + 0x818) - fVar5;
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (*(float *)(lVar3 + 0x818) <= 0.0) {
          puVar4 = (undefined8 *)FUN_100473b68(param_1 + 0x28);
          fVar5 = *(float *)(puVar4 + 1);
          *(ulong *)(param_1 + 0x830) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x818) >> 0x20) -
                        (float)((ulong)*puVar4 >> 0x20),
                        (float)*(undefined8 *)(param_1 + 0x818) - (float)*puVar4);
          *(float *)(param_1 + 0x838) = *(float *)(param_1 + 0x820) - fVar5;
          *(undefined8 *)(param_1 + 0x83c) = 0x4000000040000000;
          FUN_1000577b4(param_1);
        }
        else {
          plVar2 = *(long **)(param_1 + 0x808);
          lVar3 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x810) == (int)plVar2[1]) {
              lVar3 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              lVar3 = 0;
              *(undefined8 *)(param_1 + 0x808) = 0;
              *(undefined4 *)(param_1 + 0x810) = DAT_101dc0b88;
            }
          }
          FUN_100473734(lVar3 + 0x38,*(undefined4 *)(param_1 + 0x844));
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x808) = 0;
      *(undefined4 *)(param_1 + 0x810) = DAT_101dc0b88;
    }
  }
  fVar5 = *(float *)(param_1 + 0x83c);
  fVar6 = (float)FUN_1010a1cd4();
  fVar5 = fVar5 - fVar6;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x83c) = fVar5;
  if (*(float *)(param_1 + 0x840) <= 0.0) {
    fVar6 = 0.0;
    fVar8 = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar5 = fVar5 / *(float *)(param_1 + 0x840);
    fVar6 = (float)*(undefined8 *)(param_1 + 0x830) * fVar5;
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x830) >> 0x20) * fVar5;
    fVar5 = *(float *)(param_1 + 0x838) * fVar5;
  }
  FUN_100057d3c(param_1);
  puVar4 = (undefined8 *)FUN_100473b68();
  fVar7 = *(float *)(puVar4 + 1);
  *(ulong *)(param_1 + 0x818) =
       CONCAT44((float)((ulong)*puVar4 >> 0x20) + fVar8,(float)*puVar4 + fVar6);
  *(float *)(param_1 + 0x820) = fVar7 + fVar5;
  FUN_100057d3c(param_1);
  puVar4 = (undefined8 *)FUN_100473b70();
  uVar1 = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(param_1 + 0x824) = *puVar4;
  *(undefined4 *)(param_1 + 0x82c) = uVar1;
  return;
}




void FUN_100057750(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_1000577b4();
  FUN_1004736d8(param_1 + 0x28,param_2,param_3);
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x818) = uVar1;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x824) = uVar1;
  return;
}




void FUN_1000577b4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x808);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x810) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x808) + 0x10))();
      FUN_1010a1830();
      uVar3 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x808) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x808) = 0;
      uVar3 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x810) = uVar3;
  }
  return;
}




void FUN_100057834(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1004737f0(*param_1,param_1 + 1);
    return;
  }
  return;
}




void FUN_10005784c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_28 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*param_1 != 0) {
    local_18 = (undefined4)param_1[1];
    uStack_14 = (undefined4)param_1[2];
    FUN_100473888(*param_1,&local_18,param_2,param_3,auStack_28);
  }
  return;
}




void FUN_100057890(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_64;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (*param_2 != 0) {
    local_40 = *param_3;
    local_38 = param_3[1];
    local_3c = 0;
    local_50 = 0x3e800000;
    local_4c = 0x7f7fffff;
    local_48 = 0x3e800000;
    local_64 = 0;
    iVar1 = FUN_10054e07c(*(undefined4 *)((long)param_2 + 0x14),&local_40,&local_64,auStack_60,
                          &local_50);
    if (iVar1 != 0) {
      local_3c = local_64;
    }
    FUN_1004739ac(param_1,*param_2,param_2 + 1,&local_40);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100057930(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  plVar4 = *(long **)(param_2 + 0x808);
  if (plVar4 == (long *)0x0) {
LAB_1000579b4:
    lVar5 = param_2 + 0x28;
    plVar7 = (long *)FUN_100473b68(lVar5);
    lVar6 = FUN_1010a0298(param_2,DAT_10184e050);
    plVar4 = (long *)0x0;
    if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 0x28);
    }
    plVar1 = (long *)&DAT_101dc0b88;
    if (lVar6 != 0) {
      plVar1 = plVar4 + 1;
    }
    lVar3 = *plVar1;
    *(long **)(param_2 + 0x808) = plVar4;
    *(int *)(param_2 + 0x810) = (int)lVar3;
    lVar10 = 0;
    if (lVar6 == 0) goto LAB_100057b54;
    if ((int)lVar3 == (int)plVar4[1]) {
      lVar6 = (**(code **)(*plVar4 + 0x10))();
      if (lVar6 != 0) {
        plVar4 = *(long **)(param_2 + 0x808);
        lVar6 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_2 + 0x810) == (int)plVar4[1]) {
            lVar6 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            lVar6 = 0;
            *(undefined8 *)(param_2 + 0x808) = 0;
            *(undefined4 *)(param_2 + 0x810) = DAT_101dc0b88;
          }
        }
        uVar8 = FUN_100473b68(lVar5);
        uVar9 = FUN_100473b70(lVar5);
        FUN_1004736d8(lVar6 + 0x38,uVar8,uVar9);
      }
      goto LAB_100057a98;
    }
LAB_100057b18:
    lVar10 = 0;
    *(undefined8 *)(param_2 + 0x808) = 0;
    *(undefined4 *)(param_2 + 0x810) = DAT_101dc0b88;
    goto LAB_100057b54;
  }
  if (*(int *)(param_2 + 0x810) != (int)plVar4[1]) {
    *(undefined8 *)(param_2 + 0x808) = 0;
    *(undefined4 *)(param_2 + 0x810) = DAT_101dc0b88;
    goto LAB_1000579b4;
  }
  lVar5 = (**(code **)(*plVar4 + 0x10))();
  if (lVar5 == 0) goto LAB_1000579b4;
  plVar4 = *(long **)(param_2 + 0x808);
  lVar5 = 0;
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_2 + 0x810) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      lVar5 = 0;
      *(undefined8 *)(param_2 + 0x808) = 0;
      *(undefined4 *)(param_2 + 0x810) = DAT_101dc0b88;
    }
  }
  plVar7 = (long *)FUN_100473b68(lVar5 + 0x38);
LAB_100057a98:
  plVar4 = *(long **)(param_2 + 0x808);
  if (plVar4 == (long *)0x0) {
LAB_100057b2c:
    lVar10 = 0;
    goto LAB_100057b54;
  }
  if (*(int *)(param_2 + 0x810) != (int)plVar4[1]) goto LAB_100057b18;
  lVar5 = (**(code **)(*plVar4 + 0x10))();
  if (lVar5 == 0) goto LAB_100057b2c;
  plVar4 = *(long **)(param_2 + 0x808);
  if (plVar4 == (long *)0x0) {
LAB_100057b40:
    lVar10 = 0;
    _DAT_00000818 = 0x40000000;
  }
  else {
    if (*(int *)(param_2 + 0x810) != (int)plVar4[1]) {
      *(undefined8 *)(param_2 + 0x808) = 0;
      *(undefined4 *)(param_2 + 0x810) = DAT_101dc0b88;
      goto LAB_100057b40;
    }
    lVar5 = (**(code **)(*plVar4 + 0x10))();
    plVar4 = *(long **)(param_2 + 0x808);
    *(undefined4 *)(lVar5 + 0x818) = 0x40000000;
    lVar10 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_2 + 0x810) == (int)plVar4[1]) {
        lVar10 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        lVar10 = 0;
        *(undefined8 *)(param_2 + 0x808) = 0;
        *(undefined4 *)(param_2 + 0x810) = DAT_101dc0b88;
      }
    }
  }
  lVar10 = lVar10 + 0x38;
LAB_100057b54:
  uVar2 = *(undefined4 *)(param_2 + 0x844);
  *param_1 = lVar10;
  lVar5 = plVar7[1];
  param_1[1] = *plVar7;
  *(int *)(param_1 + 2) = (int)lVar5;
  *(undefined4 *)((long)param_1 + 0x14) = uVar2;
  return;
}




void FUN_100057b98(long *param_1,long param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  float local_54;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_30;
  float fStack_2c;
  float local_28;
  
  local_30 = *param_3;
  local_28 = param_3[1];
  fStack_2c = 0.0;
  local_40 = 0x3e800000;
  local_3c = 0x7f7fffff;
  local_38 = 0x3e800000;
  local_54 = 0.0;
  iVar2 = FUN_10054e07c(*(undefined4 *)(param_2 + 0x844),&local_30,&local_54,auStack_50,&local_40);
  if (iVar2 != 0) {
    fStack_2c = local_54;
  }
  FUN_1000577b4(param_2);
  *(ulong *)(param_2 + 0x830) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x818) >> 0x20) - fStack_2c,
                (float)*(undefined8 *)(param_2 + 0x818) - local_30);
  *(float *)(param_2 + 0x838) = *(float *)(param_2 + 0x820) - local_28;
  *(undefined8 *)(param_2 + 0x83c) = 0x4000000040000000;
  uVar1 = *(undefined4 *)(param_2 + 0x844);
  *param_1 = param_2 + 0x28;
  param_1[1] = CONCAT44(fStack_2c,local_30);
  *(float *)(param_1 + 2) = local_28;
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  return;
}




void FUN_100057c60(long param_1)

{
  FUN_100473a84(param_1 + 0x28);
  FUN_1000577b4(param_1);
  return;
}




void FUN_100057c88(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_30 = 0x3e800000;
  uStack_2c = 0x7f7fffff;
  local_28 = 0x3e800000;
  local_40 = *param_2;
  local_38 = param_2[1];
  local_3c = 0;
  FUN_10054e044(*(undefined4 *)(param_1 + 0x844),&local_40,&local_50,&local_30);
  local_30 = *param_3;
  local_28 = param_3[1];
  uStack_2c = 0;
  FUN_1000577b4(param_1);
  FUN_1004736d8(param_1 + 0x28,&local_50,&local_30);
  *(undefined8 *)(param_1 + 0x818) = local_50;
  *(undefined4 *)(param_1 + 0x820) = local_48;
  *(ulong *)(param_1 + 0x824) = CONCAT44(uStack_2c,local_30);
  *(undefined4 *)(param_1 + 0x82c) = local_28;
  return;
}




long FUN_100057d3c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x808);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x810) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x808);
        lVar2 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x810) == (int)plVar1[1]) {
            lVar2 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            lVar2 = 0;
            *(undefined8 *)(param_1 + 0x808) = 0;
            *(undefined4 *)(param_1 + 0x810) = DAT_101dc0b88;
          }
        }
        return lVar2 + 0x38;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x808) = 0;
      *(undefined4 *)(param_1 + 0x810) = DAT_101dc0b88;
    }
  }
  return param_1 + 0x28;
}




void FUN_100057de0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d488;
  if ((undefined8 *)param_1[0xfc] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xfc])();
  }
  FUN_1010a0064(param_1);
  return;
}




void FUN_100057e20(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144d488;
  if ((undefined8 *)param_1[0xfc] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xfc])();
  }
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_100057e64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d488;
  FUN_1004736c4(param_1 + 5);
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = DAT_101dc0b88;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x107) = 0;
  *(undefined8 *)((long)param_1 + 0x83c) = 0;
  *(undefined4 *)((long)param_1 + 0x844) = 0;
  return param_1;
}




void FUN_100057ed0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100057ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100057edc(void)

{
  if ((DAT_10184da90 & 1) == 0) {
    DAT_10184da88 = DAT_101872e38;
    DAT_10184da90 = 1;
  }
  return;
}




void FUN_100057f08(void)

{
  if ((DAT_10184e058 & 1) == 0) {
    DAT_10184e050 = DAT_101872e38;
    DAT_10184e058 = 1;
  }
  return;
}




undefined8 FUN_100057f34(void)

{
  return DAT_101dc3708;
}




bool FUN_100057f40(void)

{
  return DAT_101dc3708 != 0;
}




undefined8 * FUN_100057f54(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *param_1 = &PTR_thunk_FUN_1000588d4_10144d4b8;
  puVar7 = (ushort *)(param_1 + 5);
  *puVar7 = *puVar7 & 0x8000 | 0x3ff;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  puVar8 = param_1 + 6;
  *(undefined4 *)puVar8 = 0;
  param_1[0x29] = param_1;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  FUN_100060fa8(param_1 + 0x2d);
  FUN_100060b8c(param_1 + 0x31);
  FUN_10005f7fc(param_1 + 0x37);
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = DAT_101dc0b88;
  FUN_10005f3dc(param_1 + 0x3f,param_1);
  FUN_100050b08(param_1 + 0x43,param_1);
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)((long)param_1 + 0x334) = 0;
  *(undefined8 *)((long)param_1 + 0x32c) = 0x3f800000;
  fVar9 = *(float *)((long)param_1 + 0x32c);
  fVar11 = *(float *)(param_1 + 0x66);
  fVar12 = *(float *)((long)param_1 + 0x334);
  fVar10 = 1.0 / SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12);
  *(float *)((long)param_1 + 0x32c) = fVar9 * fVar10;
  *(float *)(param_1 + 0x66) = fVar11 * fVar10;
  *(float *)((long)param_1 + 0x334) = fVar12 * fVar10;
  *(undefined1 *)(param_1 + 0x67) = 1;
  *(undefined4 *)((long)param_1 + 0x36c) = 0;
  param_1[0x6e] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)((long)param_1 + 0x364) = 0;
  *(undefined4 *)((long)param_1 + 0x367) = 0;
  *(undefined4 *)((long)param_1 + 0x37c) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  uVar3 = *puVar7;
  puVar6 = puVar8 + ((ulong)(uVar3 >> 10) & 0x1f) * 7;
  *(undefined4 *)puVar6 = 0;
  puVar6[1] = FUN_1000583ac;
  uVar1 = uVar3 + 0x400;
  uVar2 = uVar3 & 0xffff83ff;
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6 = puVar8 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar6 = 1;
  puVar6[1] = FUN_10005844c;
  puVar6[2] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[3] = FUN_100058500;
  puVar6[4] = 0;
  puVar6 = puVar8 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined2 *)puVar6 = 2;
  puVar6[1] = FUN_100058510;
  puVar6[2] = 0;
  puVar6[3] = FUN_1000585b4;
  puVar6[4] = 0;
  puVar6[5] = FUN_100058664;
  puVar6[6] = 0;
  *(undefined2 *)((long)puVar6 + 2) = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar6 = puVar8 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar6 = 3;
  puVar6[1] = 0;
  puVar6[2] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar6[3] = FUN_1000586d4;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar8 = puVar8 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar8 = 4;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = FUN_1000586e8;
  puVar8[4] = 0;
  puVar8[5] = FUN_1000586ec;
  puVar8[6] = 0;
  *puVar7 = ((ushort)uVar1 & 0x7c00 | (ushort)uVar2) + 0x400 & 0x7c00 | (ushort)uVar2;
  FUN_1000586f0(puVar7,0,1);
  FUN_1000586f0(puVar7,0,2);
  FUN_1000586f0(puVar7,0,3);
  FUN_1000586f0(puVar7,1,0);
  FUN_1000586f0(puVar7,1,2);
  FUN_1000586f0(puVar7,1,3);
  FUN_1000586f0(puVar7,2,0);
  FUN_1000586f0(puVar7,2,3);
  FUN_1000586f0(puVar7,0,4);
  FUN_1000586f0(puVar7,1,4);
  FUN_1000586f0(puVar7,2,4);
  FUN_1000586f0(puVar7,3,4);
  FUN_1000586f0(puVar7,4,4);
  FUN_1000586f0(puVar7,4,0);
  FUN_1000586f0(puVar7,4,1);
  FUN_1000586f0(puVar7,4,2);
  FUN_1000586f0(puVar7,4,3);
  FUN_100058774(puVar7,0,0,0);
  uVar4 = FUN_1000bdb98();
  FUN_1004e18bc(uVar4,param_1,0x461d39a,thunk_FUN_1000598fc,0);
  uVar4 = FUN_1000bdb98();
  FUN_1004e18bc(uVar4,param_1,0xc8e15bb6,thunk_FUN_1000599f8,0);
  uVar4 = FUN_1000bdb98();
  FUN_1004e18bc(uVar4,param_1,0xf0abc88a,FUN_100058898,0);
  lVar5 = 0x350;
  do {
    *(undefined4 *)((long)param_1 + lVar5) = 0xffffffff;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x35c);
  *(undefined4 *)((long)param_1 + 0x35c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  uVar4 = FUN_100345b94();
  uVar4 = FUN_10034c450(uVar4,"*JoystickBasicAttackRingIndicator*");
  param_1[99] = uVar4;
  DAT_101dc3708 = param_1;
  return param_1;
}




void FUN_1000583ac(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x37c) == '\0') {
    lVar3 = FUN_10034d734(param_1 + 0x1e8);
    if (((lVar3 != 0) && (iVar2 = FUN_10049015c(), iVar2 != 0)) &&
       (((uVar4 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f, (int)uVar4 != 0x1f &&
         (*(ushort *)(lVar3 + uVar4 * 0x38 + 0x90) - 3 < 2)) ||
        ((*(byte *)(lVar3 + 0x2f9) & 1) != 0)))) {
      FUN_100169d54(param_1 + 0x1e8);
      uVar1 = DAT_101dc0b88;
      lVar3 = *(long *)(param_1 + 0x340);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x2b0) = 0;
        *(undefined4 *)(lVar3 + 0x2b8) = uVar1;
      }
    }
  }
  return;
}




void FUN_10005844c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined **local_30;
  undefined4 local_28;
  
  if ((*(char *)(param_1 + 0x369) != '\0') &&
     (iVar1 = FUN_10049057c(*(undefined8 *)(param_1 + 0x340)), iVar1 != 0)) {
    local_28 = 0x18;
    local_30 = &PTR_FUN_10144d738;
    FUN_10005f394(param_1 + 0x260,&local_30);
    *(undefined1 *)(param_1 + 0x369) = 0;
    FUN_100059da4(param_1,0);
  }
  if (*(float *)(param_1 + 0x364) == 0.0) {
    uVar2 = (ulong)*(ushort *)(*(long *)(param_1 + 0x340) + 0x88) & 0x1f;
    if (((int)uVar2 == 0x1f) || (*(short *)(*(long *)(param_1 + 0x340) + uVar2 * 0x38 + 0x90) != 2))
    {
      FUN_100058774(param_1 + 0x28,0,0,0);
    }
  }
  return;
}




void FUN_100058500(long param_1)

{
  *(undefined4 *)(param_1 + 0x364) = 0x3e800000;
  FUN_10005f414(param_1 + 0x1f8);
  return;
}




void FUN_100058510(long param_1)

{
  ulong uVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x374) <= 0.0) {
    uVar1 = FUN_100060a94();
    if ((uVar1 & 1) == 0) {
      FUN_1000320fc();
      FUN_100033428();
      FUN_10002e944();
      FUN_10005a964(param_1,1);
    }
  }
  else {
    fVar2 = (float)FUN_1010a1cd4();
    *(float *)(param_1 + 0x374) = *(float *)(param_1 + 0x374) - fVar2;
  }
  uVar1 = (ulong)*(ushort *)(*(long *)(param_1 + 0x340) + 0x88) & 0x1f;
  if (((int)uVar1 != 0x1f) &&
     (*(ushort *)(*(long *)(param_1 + 0x340) + uVar1 * 0x38 + 0x90) - 3 < 2)) {
    return;
  }
  FUN_100058774(param_1 + 0x28,0,0,0);
  return;
}




void FUN_1000585b4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  FUN_100169d54(param_1 + 0x1e8);
  uVar3 = DAT_101dc0b88;
  lVar4 = *(long *)(param_1 + 0x340);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x2b0) = 0;
    *(undefined4 *)(lVar4 + 0x2b8) = uVar3;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  do {
    if (lVar4 == 0) {
LAB_100058620:
      FUN_1000320fc();
      uVar2 = FUN_100033428();
      iVar1 = FUN_10002e614();
      uVar3 = 3;
      if (iVar1 == 2) {
        uVar3 = 4;
      }
      FUN_10002d7b8(0x44480000,uVar2,uVar3);
      *(undefined4 *)(param_1 + 0x374) = 0x3f000000;
      FUN_100059530(param_1);
      return;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184db30) {
      FUN_1010a1830();
      FUN_10003ab44(*(undefined8 *)(param_1 + 0x348));
      goto LAB_100058620;
    }
    lVar4 = *(long *)(lVar4 + 0x20);
  } while( true );
}




void FUN_100058664(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_100060a94();
  if ((uVar2 & 1) == 0) {
    FUN_10005a964(param_1,0);
  }
  else {
    FUN_10005a130();
  }
  FUN_1000320fc();
  uVar3 = FUN_100033428();
  iVar1 = FUN_10002e614();
  uVar4 = 1;
  if (iVar1 == 4) {
    uVar4 = 2;
  }
  FUN_10002d7b8(0x42c80000,uVar3,uVar4);
  *(undefined4 *)(param_1 + 0x374) = 0;
  FUN_1000595bc(param_1,1);
  return;
}




void FUN_1000586d4(long param_1)

{
  FUN_10003875c(*(undefined8 *)(param_1 + 0x348),*(undefined1 *)(param_1 + 0x368),
                *(undefined4 *)(param_1 + 0x378));
  return;
}




void FUN_1000586e8(void)

{
  return;
}




void FUN_1000586ec(void)

{
  return;
}




void FUN_1000586f0(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_100058724;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_100058724:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_100058774(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_1000587b8;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_1000587b8:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x90) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x90) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010005881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void thunk_FUN_1000598fc(void)

{
  FUN_1000598fc();
  return;
}




void thunk_FUN_1000599f8(void)

{
  FUN_1000599f8();
  return;
}




void FUN_100058898(undefined8 param_1)

{
  double in_stack_00000000;
  
  FUN_10005cbc4((float)in_stack_00000000,(float)*(double *)((ulong)&stack0x00000000 | 8),param_1,
                *(undefined4 *)((double *)((ulong)&stack0x00000000 | 8) + 1));
  return;
}




void FUN_1000588d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1000588d4_10144d4b8;
  if (param_1[0x62] != 0) {
    FUN_1010a1830();
    param_1[0x62] = 0;
  }
  FUN_10005fdd4();
  uVar1 = FUN_1000bdb98();
  FUN_1004e1b58(uVar1,param_1);
  FUN_10005f824(param_1 + 0x37);
  FUN_100060bac(param_1 + 0x31);
  thunk_FUN_10005ec0c(param_1 + 0x2d);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_1000588d4(void)

{
  FUN_1000588d4();
  return;
}




void FUN_10005893c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000588d4();
  operator_delete(pvVar1);
  return;
}




void FUN_100058950(long param_1)

{
  long lVar1;
  
  DAT_10184da98 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184da98 + 1;
  lVar1 = param_1 + (ulong)DAT_10184da98 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100057f54;
  *(code **)(lVar1 + 0xb8) = FUN_10005cc30;
  *(uint *)(lVar1 + 0xa4) = DAT_10184da98;
  *(undefined4 *)(lVar1 + 0xa8) = 0x388;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0990(param_1,0xb0d0275,FUN_100058d50,0);
  FUN_1010a0990(param_1,0xdc302c4,thunk_FUN_10005c3a8,0);
  FUN_1010a0990(param_1,0x163803be,thunk_FUN_10005c47c,0);
  FUN_1010a0990(param_1,0x11a60336,FUN_100058db4,0);
  FUN_1010a0990(param_1,0x295f0542,FUN_100058e10,0);
  FUN_1010a0990(param_1,0x1ab4042d,FUN_100058e3c,0);
  FUN_1010a0990(param_1,0x284e050e,FUN_100058e6c,0);
  FUN_1010a0990(param_1,0xaf0026c,FUN_100058eb0,0);
  FUN_1010a0990(param_1,0x299d0531,FUN_100058f1c,0);
  FUN_1010a0990(param_1,0x4a290718,FUN_100058f58,0);
  FUN_1010a0990(param_1,0x647c0866,FUN_100058f68,0);
  FUN_1010a0990(param_1,0x623d0838,FUN_100058f98,0);
  FUN_1010a0990(param_1,0x59fc07dd,FUN_100058fe8,0);
  FUN_1010a0990(param_1,0x9dd50aa9,FUN_100059038,0);
  FUN_1010a0990(param_1,0x938b0a4e,FUN_100059050,0);
  FUN_1010a0990(param_1,0x35850600,FUN_100059068,0);
  FUN_1010a0990(param_1,0x3f020699,FUN_100059094,0);
  FUN_1010a0990(param_1,0x828f09a8,FUN_1000590c4,0);
  FUN_1010a0990(param_1,0xe3e02dc,FUN_1000590cc,0);
  FUN_1010a0990(param_1,0x22ef04a2,FUN_10005911c,0);
  FUN_1010a0990(param_1,0x1eda0467,FUN_100059150,0);
  FUN_1010a0990(param_1,0xfb380daa,FUN_10005917c,0);
  FUN_1010a0990(param_1,0xd22b0c6a,FUN_100059184,0);
  FUN_1010a0990(param_1,0x5d1d082f,FUN_1000591b4,0);
  FUN_1010a0990(param_1,0x6f0608f1,FUN_1000591f8,0);
  FUN_1010a0990(param_1,0x5d430830,FUN_100059228,0);
  FUN_1010a0990(param_1,0x6f2e08f2,FUN_100059264,0);
  FUN_1010a0990(param_1,0x4ad10727,FUN_100059290,0);
  FUN_1010a0990(param_1,0x1b0a0423,FUN_100059298,0);
  FUN_1010a0990(param_1,0x15ad039b,FUN_1000592c8,0);
  FUN_1010a0990(param_1,0x3bb20643,FUN_1000592f4,0);
  FUN_1010a0944(param_1,2,FUN_100059324,0);
  FUN_1010a0944(param_1,4,FUN_100059388,0);
  return;
}




void FUN_100058d50(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int in_stack_00000000;
  
  if (in_stack_00000000 == 0) {
    FUN_100169d54(param_1 + 0x1e8);
    uVar1 = DAT_101dc0b88;
    lVar2 = *(long *)(param_1 + 0x340);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x2b0) = 0;
      *(undefined4 *)(lVar2 + 0x2b8) = uVar1;
    }
  }
  return;
}




void thunk_FUN_10005c3a8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_10005c3cc:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xdc302c4), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_10005c3cc;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void thunk_FUN_10005c47c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_10005c4a0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x163803be), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_10005c4a0;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100058db4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_stack_00000000;
  
  if (in_stack_00000000 == 0) {
    FUN_100169d54(param_1 + 0x1e8);
    uVar1 = DAT_101dc0b88;
    lVar2 = *(long *)(param_1 + 0x340);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x2b0) = 0;
      *(undefined4 *)(lVar2 + 0x2b8) = uVar1;
    }
  }
  return;
}




void FUN_100058e10(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10005c550(param_1,in_stack_00000000);
  return;
}




void FUN_100058e3c(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10005c6b8(param_1,in_stack_00000000,*(undefined8 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_100058e6c(long param_1)

{
  int in_stack_00000000;
  
  FUN_100058774(param_1 + 0x28,(ulong)(in_stack_00000000 != 0) << 2,0,0);
  return;
}




void FUN_100058eb0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 in_stack_00000000;
  
  uVar4 = in_stack_00000000;
  puVar6 = (undefined4 *)((ulong)&stack0x00000000 | 8);
  uVar1 = *puVar6;
  uVar7 = *(undefined8 *)(puVar6 + 2);
  uVar2 = puVar6[4];
  uVar3 = puVar6[6];
  uVar5 = FUN_10005fe04();
  FUN_10005ff9c(uVar5,uVar4,uVar1,uVar7,uVar2,uVar3);
  return;
}




void FUN_100058f1c(long param_1)

{
  undefined4 in_stack_00000000;
  
  *(undefined1 *)(param_1 + 0x36a) = 1;
  *(undefined4 *)(param_1 + 0x36c) = in_stack_00000000;
  FUN_100039c5c(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_100058f58(long param_1)

{
  *(undefined1 *)(param_1 + 0x36a) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  FUN_100039c8c(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_100058f68(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10005c730(param_1,in_stack_00000000,*(undefined8 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_100058f98(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  
  uVar2 = in_stack_00000000;
  iVar1 = *(int *)((ulong)&stack0x00000000 | 8);
  FUN_1000320fc();
  uVar3 = FUN_100033428();
  FUN_10002e8bc(uVar3,uVar2,iVar1 != 0);
  return;
}




void FUN_100058fe8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  
  uVar2 = in_stack_00000000;
  iVar1 = *(int *)((ulong)&stack0x00000000 | 8);
  FUN_1000320fc();
  uVar3 = FUN_100033428();
  FUN_10002e8f0(uVar3,uVar2,iVar1 != 0);
  return;
}




void FUN_100059038(void)

{
  FUN_1000320fc();
  FUN_100033428();
  FUN_10002e914();
  return;
}




void FUN_100059050(void)

{
  FUN_1000320fc();
  FUN_100033428();
  FUN_10002e92c();
  return;
}




void FUN_100059068(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10005c7f4(param_1,in_stack_00000000);
  return;
}




void FUN_100059094(long param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100039cbc(*(undefined8 *)(param_1 + 0x348),in_stack_00000000);
  return;
}




void FUN_1000590c4(long param_1)

{
  FUN_1000381e0(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_1000590cc(long param_1)

{
  int in_stack_00000000;
  
  if (in_stack_00000000 != 0) {
    FUN_100059da4(param_1,0);
    *(undefined4 *)(param_1 + 0x364) = 0;
  }
  *(bool *)(param_1 + 0x37d) = in_stack_00000000 != 0;
  return;
}




void FUN_10005911c(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100059c48((float)*(double *)((ulong)&stack0x00000000 | 8),param_1,in_stack_00000000);
  return;
}




void FUN_100059150(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100059d38(param_1,in_stack_00000000);
  return;
}




void FUN_10005917c(long param_1)

{
  FUN_10003ab44(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_100059184(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10005c928(param_1,in_stack_00000000,0);
  return;
}




void FUN_1000591b4(long param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10005f514(param_1 + 0x1f8,in_stack_00000000,*(undefined4 *)((ulong)&stack0x00000000 | 8),1,
                ((undefined4 *)((ulong)&stack0x00000000 | 8))[2] != 0);
  return;
}




void FUN_1000591f8(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10005b4fc(param_1,in_stack_00000000,*(undefined4 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_100059228(long param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10005f514(param_1 + 0x1f8,in_stack_00000000,3,0,0);
  return;
}




void FUN_100059264(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10005c8cc(param_1,in_stack_00000000);
  return;
}




void FUN_100059290(long param_1)

{
  FUN_10003ab44(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_100059298(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10005c9e8(param_1,in_stack_00000000,*(undefined8 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_1000592c8(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10005ca4c(param_1,in_stack_00000000);
  return;
}




void FUN_1000592f4(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10005caf4(param_1,in_stack_00000000,*(undefined4 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_100059324(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (*(char *)(param_1 + 0x37e) == '\0') {
    iVar1 = FUN_1010a14f0();
    if (iVar1 != 0) {
      FUN_100059530(param_1);
      uVar3 = 1;
      goto LAB_10005936c;
    }
    if (*(char *)(param_1 + 0x37e) == '\0') {
      return;
    }
  }
  uVar2 = FUN_1010a14f0();
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_1000595bc(param_1,0);
  uVar3 = 0;
LAB_10005936c:
  *(undefined1 *)(param_1 + 0x37e) = uVar3;
  return;
}




void FUN_100059388(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  
  if (*(char *)(param_1 + 0x37d) == '\0') {
    puVar6 = (ushort *)(param_1 + 0x28);
    if (((int)((ulong)*puVar6 & 0x1f) == 0x1f) || (puVar6[((ulong)*puVar6 & 0x1f) * 0x1c + 4] != 3))
    {
      fVar8 = *(float *)(param_1 + 0x364);
      fVar7 = (float)FUN_1010a1cd4();
      fVar8 = fVar8 - fVar7;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      *(float *)(param_1 + 0x364) = fVar8;
      fVar8 = *(float *)(param_1 + 0x370);
      fVar7 = (float)FUN_1010a1cd4();
      fVar8 = fVar8 - fVar7;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      *(float *)(param_1 + 0x370) = fVar8;
      FUN_100059678(param_1);
      uVar5 = (ulong)*(ushort *)(*(long *)(param_1 + 0x340) + 0x88) & 0x1f;
      if (((int)uVar5 != 0x1f) &&
         (*(ushort *)(*(long *)(param_1 + 0x340) + uVar5 * 0x38 + 0x90) - 3 < 2)) {
        FUN_100058774(puVar6,2,0,0);
      }
      lVar4 = param_1 + 0x1e8;
      lVar2 = FUN_10034d734(lVar4);
      if (lVar2 != 0) {
        lVar2 = FUN_10034d734(lVar4);
        if ((*(byte *)(lVar2 + 0x2fc) & 0x1f) == 0) {
          FUN_100169d54(lVar4);
          uVar1 = DAT_101dc0b88;
          lVar4 = *(long *)(param_1 + 0x340);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x2b0) = 0;
            *(undefined4 *)(lVar4 + 0x2b8) = uVar1;
          }
        }
      }
      plVar3 = *(long **)(param_1 + 0x1d8);
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_1 + 0x1e0) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          if (lVar4 != 0) {
            lVar4 = (**(code **)(**(long **)(param_1 + 0x1d8) + 0x10))();
            if ((*(byte *)(lVar4 + 0x2fc) & 0x1f) == 0) {
              FUN_10005fb90(param_1 + 0x1b8,0);
            }
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x1d8) = 0;
          *(undefined4 *)(param_1 + 0x1e0) = DAT_101dc0b88;
        }
      }
      FUN_1000596b8(puVar6);
      lVar4 = FUN_10005fe04();
      if (lVar4 != 0) {
        FUN_10005fe04();
        FUN_10005fef0();
        return;
      }
    }
  }
  return;
}




void FUN_100059530(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = lVar2;
  if (lVar2 != 0) {
    do {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184e060) {
        FUN_1010a1830(lVar3);
        lVar2 = *(long *)(param_1 + 0x18);
        break;
      }
      plVar1 = (long *)(lVar3 + 0x20);
      lVar3 = *plVar1;
    } while (*plVar1 != 0);
    for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184e010) {
        FUN_1010a1830();
        return;
      }
    }
  }
  return;
}




void FUN_1000595bc(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x28) & 0x1f;
  if (((int)uVar3 == 0x1f) || (*(short *)(param_1 + uVar3 * 0x38 + 0x30) != 2 || param_2 != 0)) {
    FUN_100059530(param_1);
    iVar1 = FUN_100060a5c();
    if ((iVar1 != 0) &&
       ((iVar1 = FUN_100060a84(), iVar1 != 0 && (uVar3 = FUN_100060abc(), (uVar3 & 1) == 0)))) {
      uVar2 = FUN_1010a0298(param_1,DAT_10184e010);
      FUN_100051854(uVar2,param_1,*(undefined8 *)(param_1 + 0x340));
      return;
    }
    uVar3 = FUN_100060a5c();
    if (((uVar3 & 1) != 0) || (iVar1 = FUN_100060a70(), iVar1 != 0)) {
      uVar2 = FUN_1010a0298(param_1,DAT_10184e060);
      FUN_10005e83c(uVar2,param_1,*(undefined8 *)(param_1 + 0x340));
      return;
    }
  }
  return;
}




void FUN_100059678(long param_1)

{
  int iVar1;
  
  FUN_10005bec4();
  iVar1 = FUN_10109c3f4();
  if (iVar1 != 0) {
    FUN_100060bc0(param_1 + 0x188);
    return;
  }
  return;
}




void FUN_1000596b0(long param_1)

{
  FUN_10034d734(param_1 + 0x1e8);
  return;
}




void FUN_1000596b8(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x90) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x0001000596f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_1000596fc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  
  *(long *)(param_2 + 0x340) = param_3;
  FUN_10005fdb0();
  lVar2 = FUN_10005fe04();
  if (lVar2 != 0) {
    uVar3 = FUN_10005fe04();
    FUN_10005ff94(uVar3,param_3);
  }
  FUN_1000598fc(param_2);
  FUN_1000599f8(param_2);
  if (*(long *)(param_2 + 0x310) != 0) {
    FUN_1010a1830();
    *(undefined8 *)(param_2 + 0x310) = 0;
  }
  if (*(long *)(param_2 + 0x348) != 0) {
    FUN_1010a17e4();
    *(undefined8 *)(param_2 + 0x348) = 0;
  }
  uVar3 = FUN_1010a0298(param_2,DAT_10184deb0);
  *(undefined8 *)(param_2 + 0x348) = uVar3;
  FUN_10003874c(uVar3,param_3);
  lVar2 = 0;
  do {
    lVar1 = param_2 + lVar2 * 8;
    lVar4 = *(long *)(lVar1 + 0x248);
    if (lVar4 == 0) {
      operator_new(0x68);
      lVar4 = thunk_FUN_1000c5ee0();
      *(long *)(lVar1 + 0x248) = lVar4;
    }
    FUN_1000c5fd8(lVar4,lVar2,param_3,param_2 + 0x1f8);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  FUN_1000381f0(param_1,*(undefined8 *)(param_2 + 0x348),param_3,param_2,1);
  uVar3 = FUN_1003a7540(param_3);
  lVar2 = FUN_100460e78();
  *(undefined4 *)(param_2 + 0x350) = *(undefined4 *)(lVar2 + 0x48);
  lVar2 = FUN_100460e78(uVar3);
  *(undefined4 *)(param_2 + 0x354) = *(undefined4 *)(lVar2 + 0x4c);
  lVar2 = FUN_100460e78(uVar3);
  *(undefined4 *)(param_2 + 0x358) = *(undefined4 *)(lVar2 + 0x50);
  FUN_100059a90(param_2);
  lVar2 = *(long *)(param_3 + 0x40);
  fVar5 = *(float *)(lVar2 + 0x78) + *(float *)(lVar2 + 300) * (*(float *)(lVar2 + 0x294) + 1.0);
  fVar6 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x1e0),DAT_101dc3810);
  fVar5 = (float)DAT_101dc3750;
  if ((float)DAT_101dc3750 <= fVar6) {
    fVar5 = fVar6;
  }
  uVar3 = FUN_1010a0298(param_2,DAT_10184dc88);
  *(undefined8 *)(param_2 + 0x310) = uVar3;
  local_60 = param_3 + 0x28;
  local_58 = *(undefined4 *)(param_3 + 0x30);
  FUN_10004a1e8(fVar5,uVar3,&local_60,*(undefined8 *)(*(long *)(param_2 + 0x318) + 8));
  FUN_10005f40c(param_2 + 0x1f8,*(undefined8 *)(param_2 + 0x348));
  FUN_100050b20(param_2 + 0x218);
  local_68 = 0xffffffff;
  FUN_10005f16c(param_2 + 0x260,&local_68);
  uVar3 = FUN_1010a0298(param_2,DAT_10184dee0);
  *(undefined8 *)(param_2 + 0x308) = uVar3;
  FUN_10003caac(uVar3,0,1);
  return;
}




void FUN_1000598fc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1000595bc(param_1,0);
  iVar1 = FUN_100060a70();
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0x150) == 0) {
      uVar2 = FUN_1010a0298(param_1,DAT_10184e040);
      *(undefined8 *)(param_1 + 0x150) = uVar2;
      FUN_10005374c(uVar2,param_1);
    }
    if (*(long *)(param_1 + 0x158) == 0) {
      uVar2 = FUN_1010a0298(param_1,DAT_10184e020);
      *(undefined8 *)(param_1 + 0x158) = uVar2;
      FUN_100052300(uVar2,param_1);
    }
    if (*(long *)(param_1 + 0x160) == 0) {
      uVar2 = FUN_1010a0298(param_1,DAT_10184e030);
      *(undefined8 *)(param_1 + 0x160) = uVar2;
      FUN_1000320fc();
      uVar3 = FUN_100033428();
      FUN_1000534dc(uVar2,param_1,uVar3);
    }
    FUN_100060bb4(param_1 + 0x188,*(long *)(param_1 + 0x150) + 0x28,
                  *(long *)(param_1 + 0x158) + 0x28,param_1 + 0x168);
    return;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN_1010a1830();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_1010a1830();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    FUN_1010a1830();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  return;
}




void FUN_1000599f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_100060a94();
  FUN_10005a964(param_1,uVar2);
  FUN_1000595bc(param_1,0);
  iVar1 = FUN_100060a94();
  FUN_1000320fc();
  FUN_100033428();
  if (iVar1 == 0) {
    FUN_10002e8e0();
  }
  else {
    FUN_10002e944();
  }
  lVar3 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184de90) break;
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar2 = FUN_100060b04();
  FUN_100036028(lVar3,uVar2);
  return;
}




void FUN_100059a90(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  
  if ((((*(int *)(param_1 + 0x35c) == -1) || (*(int *)(param_1 + 0x360) == -1)) &&
      (*(long *)(param_1 + 0x340) != 0)) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x340) + 0x18), lVar9 != 0)) {
    do {
      if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == DAT_10184e000) {
        iVar1 = FUN_1003e1b24(lVar9);
        if (iVar1 == 0) {
          return;
        }
        uVar10 = 0;
        do {
          uVar3 = FUN_10044d868(lVar9,uVar10);
          puVar4 = (undefined8 *)FUN_10044d88c(lVar9,uVar3);
          iVar1 = _strcmp((char *)*puVar4,PTR_s_Healing_Flask_10184e160);
          puVar7 = (undefined4 *)(param_1 + 0x35c);
          if ((iVar1 == 0) ||
             (iVar1 = _strcmp((char *)*puVar4,PTR_s_Vision_Totem_10184e168),
             puVar7 = (undefined4 *)(param_1 + 0x360), iVar1 == 0)) {
            *puVar7 = (int)uVar3;
            lVar5 = FUN_1000bdb98();
            plVar6 = (long *)(lVar5 + 0x10);
            plVar8 = (long *)*plVar6;
            plVar12 = plVar6;
            if (plVar8 != (long *)0x0) {
              do {
                if (*(uint *)(plVar8 + 4) >= 0x8a579c5c) {
                  plVar12 = plVar8;
                }
                plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < 0x8a579c5c];
              } while (plVar8 != (long *)0x0);
              if (((plVar12 != plVar6) && (*(uint *)(plVar12 + 4) < 0x8a579c5d)) &&
                 ((int)plVar12[5] != 0)) {
                lVar5 = 0;
                uVar11 = 0;
                do {
                  (*(code *)((undefined8 *)(plVar12[6] + lVar5))[1])
                            (*(undefined8 *)(plVar12[6] + lVar5));
                  uVar11 = uVar11 + 1;
                  lVar5 = lVar5 + 0x10;
                } while (uVar11 < *(uint *)(plVar12 + 5));
              }
            }
          }
          uVar10 = uVar10 + 1;
          uVar2 = FUN_1003e1b24(lVar9);
        } while (uVar10 < uVar2);
        return;
      }
      lVar9 = *(long *)(lVar9 + 0x20);
    } while (lVar9 != 0);
  }
  return;
}




void FUN_100059c40(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x37c) = param_2;
  return;
}




void FUN_100059c48(float param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  
  iVar1 = FUN_10031615c(0x14);
  if (((iVar1 != 0) && (param_1 < 0.0)) && ((*(uint *)(param_3 + 0x2f4) & 0x2205) != 0)) {
    lVar3 = *(long *)(param_3 + 0x40);
    fVar4 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1a0),DAT_101dc37d0);
    fVar4 = -param_1 / DAT_101dc3710;
    if (0.2 < fVar4 || (*(uint *)(param_3 + 0x2f4) & 0x2000) != 0) {
      uVar2 = FUN_10003a324(*(undefined8 *)(param_2 + 0x348));
      FUN_1000ab770(0x3d8f5c29,0x3ecccccd,fVar4 * fVar4 * 50.0,uVar2,0xff0f1ba9,0);
      return;
    }
  }
  return;
}




void FUN_100059d38(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_10031615c(0x14);
  if ((iVar1 != 0) && (iVar1 = FUN_10046abb8(param_2), iVar1 != 0)) {
    uVar2 = FUN_10003a324(*(undefined8 *)(param_1 + 0x348));
    FUN_1000ab770(0,0x3f800000,0x3e99999a,uVar2,0xffffffff,0);
    return;
  }
  return;
}




void FUN_100059da4(long param_1,undefined8 param_2)

{
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [16];
  
  FUN_100345b68(*(undefined8 *)(param_1 + 0x340),auStack_30,0);
  FUN_10001166c(auStack_60,auStack_30,param_2,0);
  FUN_100345498(auStack_60);
  return;
}




undefined8 FUN_100059df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **local_58;
  undefined4 local_50;
  undefined8 local_40;
  undefined4 local_38;
  
  local_40 = 0;
  local_38 = 0;
  if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0x370))) {
LAB_100059f20:
    uVar3 = 0;
  }
  else {
    FUN_10045c800(&local_58);
    FUN_1003a598c(&local_58,0);
    lVar2 = FUN_10048fd44(param_2,1,&local_58);
    if (lVar2 == 0) {
      lVar2 = FUN_10048fd44(param_2,0x40000,&local_58);
      if (lVar2 != 0) goto LAB_100059e8c;
LAB_100059ec0:
      uVar3 = FUN_1003a3e24(*(undefined8 *)(param_1 + 0x340));
      uVar4 = FUN_1000e8dc8(param_2,uVar3,&local_40);
      if ((uVar4 & 1) == 0) goto LAB_100059f20;
LAB_100059edc:
      uVar3 = FUN_10005fe04();
      FUN_1000605f8(uVar3,&local_40,param_3);
    }
    else {
      if (lVar2 == 0) goto LAB_100059ec0;
LAB_100059e8c:
      if ((int)param_3 == 3) goto LAB_100059ec0;
      iVar1 = *(int *)(lVar2 + 0x260);
      if (iVar1 == -1) goto LAB_100059edc;
      uVar3 = FUN_10005fe04();
      FUN_100060490(uVar3,iVar1,param_3);
    }
    *(undefined4 *)(param_1 + 0x370) = 0x3e800000;
    local_50 = 0x1d;
    local_58 = &PTR_FUN_10144d810;
    FUN_10005f394(param_1 + 0x260,&local_58);
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_100059f38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((int)param_2 == 0) {
    for (lVar2 = *(long *)(param_1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184de90) goto LAB_100059fb4;
    }
    FUN_1000320fc();
    uVar1 = FUN_100033428();
    FUN_10002e8e0();
    FUN_10002e61c(uVar1,1);
    FUN_10002e624(uVar1,2);
  }
  else {
    FUN_1000320fc();
    FUN_100033428();
    FUN_10002e944();
  }
LAB_100059fb4:
  *(char *)(param_1 + 0x37f) = (char)param_2;
  FUN_10003abf4(*(undefined8 *)(param_1 + 0x348),param_2);
  return;
}




void FUN_100059fd0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x100000001;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005a000(param_3,&local_28);
  return;
}




undefined8 FUN_10005a000(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined **local_30;
  undefined8 local_28;
  
  iVar1 = param_2[1];
  if (iVar1 == 1) {
    if (*param_2 == 3) {
      local_28 = CONCAT44(local_28._4_4_,0x1d);
      local_30 = &PTR_FUN_10144d7e0;
      FUN_10005f394(param_1 + 0x260,&local_30);
    }
    else if (*param_2 == 1) {
      iVar1 = FUN_10109c494(0x50);
      if (iVar1 != 0) {
        local_28 = 0x20000001d;
LAB_10005a0d4:
        local_30 = &PTR_FUN_10144d7c8;
        FUN_10005f394(param_1 + 0x260,&local_30);
        return 1;
      }
      iVar1 = FUN_10109c494(0x4e);
      if (iVar1 != 0) {
        local_28 = 0x40000001d;
        goto LAB_10005a0d4;
      }
    }
    iVar1 = param_2[1];
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  else {
    FUN_100060abc();
    iVar1 = param_2[1];
  }
  uVar2 = FUN_100050b50(param_2[4],param_2[5],param_1 + 0x218,*(undefined8 *)(param_2 + 2),
                        param_1 + 800,*param_2,iVar1);
  return uVar2;
}




void FUN_10005a0f4(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x100000003;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005a000(param_3,&local_28);
  return;
}




void FUN_10005a128(long param_1)

{
  FUN_10003abf4(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_10005a130(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float local_40;
  undefined4 local_3c;
  float local_38;
  
  iVar1 = FUN_100060abc();
  if (iVar1 != 0) {
    iVar1 = FUN_100060a94();
    if (iVar1 == 0) {
      FUN_1000320fc();
      uVar3 = FUN_100033428();
      FUN_1000320fc();
      lVar2 = FUN_100033428();
      FUN_10002e688(uVar3,lVar2 + 0x70);
      FUN_1000320fc();
      FUN_100033428();
      FUN_10002e8e0();
      return;
    }
    FUN_1000320fc();
    FUN_100033428();
    fVar4 = (float)FUN_10002ead8();
    FUN_1000320fc();
    lVar2 = FUN_100033428();
    local_40 = *(float *)(lVar2 + 0x420) + fVar4;
    local_38 = *(float *)(lVar2 + 0x428) + param_3;
    FUN_1000320fc();
    lVar2 = FUN_100033428();
    local_3c = *(undefined4 *)(lVar2 + 0x74);
    FUN_1000320fc();
    uVar3 = FUN_100033428();
    FUN_10002e63c(uVar3,&local_40,2);
  }
  return;
}




void FUN_10005a1fc(long param_1,undefined1 param_2,undefined4 param_3)

{
  FUN_100059530();
  *(undefined1 *)(param_1 + 0x368) = param_2;
  *(undefined4 *)(param_1 + 0x378) = param_3;
  FUN_100058774(param_1 + 0x28,3,0,0);
  return;
}




void FUN_10005a244(long param_1)

{
  if (*(long *)(param_1 + 0x348) != 0) {
    FUN_10003874c();
    return;
  }
  return;
}




void FUN_10005a254(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_100169d54(param_1 + 0x1e8);
    uVar2 = DAT_101dc0b88;
    lVar1 = *(long *)(param_1 + 0x340);
    if (lVar1 == 0) {
      return;
    }
    *(undefined8 *)(lVar1 + 0x2b0) = 0;
  }
  else {
    FUN_100169d10(param_1 + 0x1e8,param_2,1);
    lVar1 = *(long *)(param_1 + 0x340);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(lVar1 + 0x2b0) = param_2 + 0x28;
  }
  *(undefined4 *)(lVar1 + 0x2b8) = uVar2;
  return;
}




void FUN_10005a2bc(float param_1,long param_2,float *param_3,ulong param_4,undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_90 [48];
  float local_60 [4];
  
  iVar2 = FUN_10005a3e0(param_2 + 0x28,1);
  if ((iVar2 != 0) &&
     (FUN_100345b68(*(undefined8 *)(param_2 + 0x340),local_60,0),
     fVar4 = (float)local_60._4_8_ - (float)*(undefined8 *)(param_3 + 1),
     fVar5 = SUB84(local_60._4_8_,4) - (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20),
     lVar3 = *(long *)(*(long *)(param_2 + 0x340) + 0x38), fVar6 = *(float *)(lVar3 + 100),
     (*(float *)(lVar3 + 0x68) * param_1 * (*(float *)(*(long *)(param_2 + 0x340) + 0x2e8) + fVar6))
     / fVar6 < SQRT(fVar4 * fVar4 + (local_60[0] - *param_3) * (local_60[0] - *param_3) +
                    fVar5 * fVar5))) {
    FUN_10001166c(auStack_90,param_3,param_4,param_5);
    FUN_100345498(auStack_90);
    *(undefined4 *)(param_2 + 0x364) = 0;
    if ((param_4 & 1) == 0) {
      FUN_100169d54(param_2 + 0x1e8);
      uVar1 = DAT_101dc0b88;
      lVar3 = *(long *)(param_2 + 0x340);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x2b0) = 0;
        *(undefined4 *)(lVar3 + 0x2b8) = uVar1;
      }
    }
    *(undefined1 *)(param_2 + 0x369) = 0;
    FUN_100058774(param_2 + 0x28,1,0,0);
  }
  return;
}




ushort FUN_10005a3e0(ushort *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar2 = (ulong)*param_1 & 0x1f;
  uVar1 = (uint)uVar2;
  if (uVar1 != 0x1f) {
    uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
    if ((int)uVar4 != 0) {
      uVar3 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_10005a420;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 != uVar3);
    }
    uVar3 = 0x1f;
LAB_10005a420:
    if ((uint)uVar3 != uVar1) {
      return param_1[uVar2 * 0x1c + 5] >> (ulong)((uint)uVar3 & 0x1f) & 1;
    }
  }
  return 1;
}




void FUN_10005a448(long param_1)

{
  undefined1 auStack_50 [48];
  undefined1 auStack_20 [16];
  
  FUN_100345b68(*(undefined8 *)(param_1 + 0x340),auStack_20,0);
  FUN_10001166c(auStack_50,auStack_20,0,0);
  FUN_100345498(auStack_50);
  return;
}




void FUN_10005a48c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined **local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 auStack_90 [2];
  undefined8 local_80;
  float local_78;
  undefined1 local_70 [8];
  float local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  
  FUN_100345b68(param_2,&local_60,0);
  FUN_100345b68(*(undefined8 *)(param_1 + 0x340),local_70,0);
  fVar8 = local_58;
  fVar10 = fStack_5c;
  fVar9 = local_60;
  uVar2 = FUN_10049057c(*(undefined8 *)(param_1 + 0x340));
  if (uVar2 != 0) {
    local_c8 = 0x18;
    local_d0 = &PTR_FUN_10144d738;
    FUN_10005f394(param_1 + 0x260,&local_d0);
  }
  iVar3 = FUN_1003bb288(param_2);
  if (iVar3 != DAT_101d2d0c0) {
    return;
  }
  fVar9 = local_70._0_4_ - fVar9;
  fVar10 = local_70._4_4_ - fVar10;
  fVar8 = local_68 - fVar8;
  iVar3 = FUN_10049057c(*(undefined8 *)(param_1 + 0x340));
  if (iVar3 != 0) {
    uVar5 = (ulong)*(ushort *)(*(long *)(param_1 + 0x340) + 0x88) & 0x1f;
    if (((int)uVar5 == 0x1f) ||
       (1 < *(ushort *)(*(long *)(param_1 + 0x340) + uVar5 * 0x38 + 0x90) - 3)) goto LAB_10005a590;
  }
  if (SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8) <= 6.0) {
    pfVar4 = (float *)FUN_10045154c(*(undefined8 *)(param_1 + 0x340));
    fStack_5c = fStack_5c - (float)*(undefined8 *)(pfVar4 + 1);
    local_58 = local_58 - (float)((ulong)*(undefined8 *)(pfVar4 + 1) >> 0x20);
    if (SQRT(fStack_5c * fStack_5c + (local_60 - *pfVar4) * (local_60 - *pfVar4) +
             local_58 * local_58) <= 6.0) {
      return;
    }
    FUN_100059da4(param_1,0);
    return;
  }
LAB_10005a590:
  fVar6 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
  uVar7 = NEON_fmov(0x40a00000,4);
  local_80 = CONCAT44(fStack_5c + (fVar10 * (float)((ulong)uVar7 >> 0x20)) / fVar6,
                      local_60 + (fVar9 * (float)uVar7) / fVar6);
  local_78 = local_58 + (fVar8 * 5.0) / fVar6;
  local_a0 = 0x4000000040000000;
  local_98 = 0x40000000;
  uVar7 = FUN_1003a3e24();
  iVar3 = FUN_10054e044(uVar7,&local_80,auStack_90,&local_a0);
  puVar1 = auStack_90;
  if (iVar3 == 0) {
    puVar1 = &local_80;
  }
  FUN_10001166c(&local_d0,puVar1,0,0);
  FUN_100345498(&local_d0);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x369) = 1;
  }
  FUN_100058774(param_1 + 0x28,1,0,0);
  return;
}




void FUN_10005a6a0(long param_1,long param_2,int param_3,ulong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_68 [40];
  
  lVar6 = param_1 + 0x1e8;
  lVar3 = FUN_10034d734(lVar6);
  if ((lVar3 == param_2) && ((param_4 & 1) == 0)) {
    FUN_10005a820();
    return;
  }
  lVar3 = FUN_10034d734(lVar6);
  if (((lVar3 == 0) || (lVar3 != param_2)) || ((int)param_4 != 0)) {
    FUN_100169d10(lVar6,param_2,1);
    lVar6 = *(long *)(param_1 + 0x340);
    if (lVar6 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x30);
      *(long *)(lVar6 + 0x2b0) = param_2 + 0x28;
      *(undefined4 *)(lVar6 + 0x2b8) = uVar2;
    }
    if (param_3 != 0) {
      FUN_1000115c0(auStack_68,*(undefined4 *)(param_2 + 0x260),param_4);
      FUN_100345498(auStack_68);
      lVar6 = *(long *)(param_1 + 0x340);
    }
    if (lVar6 != 0) {
      uVar5 = 0x10000;
      lVar3 = lVar6;
LAB_10005a768:
      do {
        do {
          lVar4 = lVar3;
          if ((lVar4 != lVar6) &&
             (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x8a2209e7), lVar3 != 0)) {
            (**(code **)(lVar3 + 8))(lVar4);
          }
          if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
            uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
            goto LAB_10005a768;
          }
          if ((uVar5 & 0xffff) == 0) {
            return;
          }
          lVar3 = *(long *)(lVar4 + 0x20);
        } while (*(long *)(lVar4 + 0x20) != 0);
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          return;
        }
        uVar1 = uVar5 - 1 & 0xffff;
        if (uVar1 == 0) {
          return;
        }
        uVar5 = uVar1 | uVar5 & 0xffff0000;
        while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
          if ((uVar5 - 1 & 0xffff) == 0) {
            return;
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
          if (lVar4 == 0) {
            return;
          }
        }
      } while( true );
    }
  }
  return;
}




void FUN_10005a820(void)

{
  int iVar1;
  long local_18;
  
  FUN_1003467f8();
  iVar1 = FUN_10034cde0();
  if (iVar1 != 0) {
    local_18 = 0;
    FUN_1010a1958(&local_18,1,DAT_10184db08,0);
    if (local_18 != 0) {
      FUN_1000516a4();
    }
  }
  return;
}




void FUN_10005a86c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  FUN_100169d54(param_1 + 0x1e8);
  uVar1 = DAT_101dc0b88;
  lVar2 = *(long *)(param_1 + 0x340);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x2b0) = 0;
    *(undefined4 *)(lVar2 + 0x2b8) = uVar1;
  }
  FUN_1000115c0(auStack_48,0xffffffff,0);
  FUN_100345498(auStack_48);
  return;
}




bool FUN_10005a8d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x28) & 0x1f;
  if ((int)uVar1 == 0x1f) {
    return false;
  }
  return *(short *)(param_1 + uVar1 * 0x38 + 0x30) == 1;
}




void FUN_10005a904(long param_1)

{
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN_100053768();
    return;
  }
  return;
}




undefined8 FUN_10005a914(long param_1,uint param_2)

{
  if ((int)param_2 < 3) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x248);
  }
  return 0;
}




void FUN_10005a930(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184de90))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




undefined8 FUN_10005a95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x340);
}




void FUN_10005a964(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184de90) {
        FUN_1010a01dc();
        return;
      }
    }
  }
  else {
    for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184de90) {
        return;
      }
    }
    lVar1 = FUN_1010a0298(param_1);
    if (lVar1 != 0) {
      FUN_100036020(lVar1,*(undefined8 *)(param_1 + 0x340));
      return;
    }
  }
  return;
}




void FUN_10005a9fc(undefined4 param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined1 local_80 [8];
  float local_78;
  undefined8 local_70;
  float local_68;
  
  local_98 = CONCAT44(param_2,param_1);
  local_90 = 0.0;
  FUN_10011a108(&local_70,&local_98,1);
  local_98 = CONCAT44(param_2,param_1);
  local_90 = 1.0;
  FUN_10011a108(local_80,&local_98,1);
  fVar5 = local_80._0_4_ - (float)local_70;
  fVar6 = local_80._4_4_ - (float)((ulong)local_70 >> 0x20);
  local_78 = local_78 - local_68;
  local_98 = local_70;
  local_90 = local_68;
  local_84 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + local_78 * local_78);
  local_8c = CONCAT44(fVar6 / local_84,fVar5 / local_84);
  local_84 = local_78 / local_84;
  if (param_3 == 0) {
LAB_10005ab5c:
    FUN_10003ab4c(*(undefined8 *)(param_3 + 0x348));
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_3;
LAB_10005aabc:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_3) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xfc5f0dc0), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_10005aabc;
      }
      if ((uVar4 & 0xffff) == 0) goto LAB_10005ab5c;
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 == 0) || (uVar1 = uVar4 - 1 & 0xffff, uVar1 == 0)) goto LAB_10005ab5c;
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) goto LAB_10005ab5c;
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) goto LAB_10005ab5c;
    }
  } while( true );
}




void FUN_10005ab84(undefined4 param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined1 local_80 [8];
  float local_78;
  undefined8 local_70;
  float local_68;
  
  local_98 = CONCAT44(param_2,param_1);
  local_90 = 0.0;
  FUN_10011a108(&local_70,&local_98,1);
  local_98 = CONCAT44(param_2,param_1);
  local_90 = 1.0;
  FUN_10011a108(local_80,&local_98,1);
  fVar5 = local_80._0_4_ - (float)local_70;
  fVar6 = local_80._4_4_ - (float)((ulong)local_70 >> 0x20);
  local_78 = local_78 - local_68;
  local_98 = local_70;
  local_90 = local_68;
  local_84 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + local_78 * local_78);
  local_8c = CONCAT44(fVar6 / local_84,fVar5 / local_84);
  local_84 = local_78 / local_84;
  if (param_3 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_3;
LAB_10005ac44:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_3) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xb9330ba0), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_10005ac44;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10005ad04(undefined4 param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined1 local_80 [8];
  float local_78;
  undefined8 local_70;
  float local_68;
  
  local_98 = CONCAT44(param_2,param_1);
  local_90 = 0.0;
  FUN_10011a108(&local_70,&local_98,1);
  local_98 = CONCAT44(param_2,param_1);
  local_90 = 1.0;
  FUN_10011a108(local_80,&local_98,1);
  fVar5 = local_80._0_4_ - (float)local_70;
  fVar6 = local_80._4_4_ - (float)((ulong)local_70 >> 0x20);
  local_78 = local_78 - local_68;
  local_98 = local_70;
  local_90 = local_68;
  local_84 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + local_78 * local_78);
  local_8c = CONCAT44(fVar6 / local_84,fVar5 / local_84);
  local_84 = local_78 / local_84;
  if (param_3 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_3;
LAB_10005adc4:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_3) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xedbb0d48), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_10005adc4;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10005ae84(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 1;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005aeb8(long param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  
  cVar1 = *(char *)(param_1 + 0x380);
  if ((cVar1 != '\0') && (*param_2 == 1)) {
    FUN_10005bc84(param_1,0);
  }
  if (*(char *)(param_1 + 0x338) != '\0') {
    FUN_10005bd4c(param_2[4],param_2[5],param_1);
  }
  *(undefined1 *)(param_1 + 0x338) = 1;
  if (param_2[1] == 4) {
    FUN_10045c734(auStack_68,*(undefined8 *)(param_1 + 0x340));
    lVar4 = FUN_10048fd44(param_1 + 800,0,auStack_68);
    FUN_10011bd88(lVar4 != 0,0);
    FUN_100050b50(param_2[4],param_2[5],param_1 + 0x218,*(undefined8 *)(param_2 + 2),param_1 + 800,
                  *param_2,param_2[1]);
  }
  else if ((*param_2 & 0xfffffffe) == 2) {
    for (lVar4 = *(long *)(param_1 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184de90) {
        iVar2 = FUN_1000364f8(lVar4,*(undefined8 *)(param_2 + 2));
        if ((iVar2 != 0) &&
           (uVar6 = FUN_100036038(param_2[4],param_2[5],lVar4,*param_2,param_2[1],param_1 + 800,
                                  *(undefined8 *)(param_2 + 2)), (uVar6 & 1) != 0)) {
          return;
        }
        break;
      }
    }
    iVar2 = FUN_100050d90(param_1 + 0x218,*(undefined8 *)(param_2 + 2));
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_100050b50(param_2[4],param_2[5],param_1 + 0x218,*(undefined8 *)(param_2 + 2),
                            param_1 + 800,*param_2,param_2[1]);
    }
    for (lVar4 = *(long *)(param_1 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184e010) {
        iVar3 = FUN_100051ae4(lVar4,*(undefined8 *)(param_2 + 2));
        if (iVar3 != 0) {
          FUN_10005bf24(param_1,param_2,param_1 + 800,0);
          return;
        }
        break;
      }
    }
    if (iVar2 != 0) {
      return;
    }
  }
  lVar5 = *(long *)(param_1 + 0x18);
  for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184de90) goto LAB_10005b0a4;
  }
  goto LAB_10005b0cc;
  while (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0) {
LAB_10005b0a4:
    if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184de90) break;
  }
  uVar6 = FUN_100036038(param_2[4],param_2[5],lVar5,*param_2,param_2[1],param_1 + 800,
                        *(undefined8 *)(param_2 + 2));
  if ((uVar6 & 1) != 0) {
    return;
  }
LAB_10005b0cc:
  if (param_2[1] == 4) {
    uVar7 = 4;
  }
  else {
    FUN_100060abc();
    uVar7 = param_2[1];
  }
  lVar4 = param_1 + 800;
  uVar6 = FUN_100050b50(param_2[4],param_2[5],param_1 + 0x218,*(undefined8 *)(param_2 + 2),lVar4,
                        *param_2,uVar7);
  if (((uVar6 & 1) == 0) && (uVar6 = FUN_10005c238(param_1,param_2,lVar4), (uVar6 & 1) == 0)) {
    FUN_10005bf24(param_1,param_2,lVar4,cVar1 != '\0');
  }
  return;
}




void FUN_10005b14c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 2;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b180(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 3;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b1b4(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x100000001;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b1e4(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x100000002;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b218(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x100000003;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b24c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x200000001;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b280(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x200000002;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b2b0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x200000003;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b2e4(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x300000001;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b318(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x300000002;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b34c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0x300000003;
  local_20 = param_4;
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10005aeb8(param_3,&local_28);
  return;
}




void FUN_10005b37c(undefined1 param_1 [16],float param_2)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  if (param_2 <= 0.001) {
    if (0.001 <= param_2) {
      return;
    }
    fVar3 = 0.33333334;
  }
  else {
    fVar3 = -0.33333334;
  }
  FUN_1000320fc();
  lVar1 = FUN_100033428();
  fVar4 = (float)FUN_10002e60c();
  puVar2 = (undefined8 *)FUN_10002e58c(lVar1);
  NEON_fminnm(fVar4 + (*(float *)(lVar1 + 0x38) - *(float *)(lVar1 + 0x28)) * fVar3,
              *(float *)(lVar1 + 0x38));
  uVar5 = *(undefined8 *)(lVar1 + 0x58);
  uVar6 = *(undefined8 *)(lVar1 + 0x68);
  uVar5 = NEON_fminnm(CONCAT44((float)((ulong)*puVar2 >> 0x20) +
                               ((float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar6 >> 0x20)) *
                               fVar3,(float)*puVar2 + ((float)uVar5 - (float)uVar6) * fVar3),uVar5,4
                     );
  local_38 = NEON_fmaxnm(uVar6,uVar5,4);
  FUN_10002e4f4(*(float *)(lVar1 + 0x28),0x42c80000,lVar1,&local_38);
  return;
}




undefined8 FUN_10005b43c(long param_1,ulong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x350);
  uVar3 = FUN_1003a7540(*(undefined8 *)(param_1 + 0x340));
  iVar2 = FUN_100461350(uVar3,uVar1);
  if (iVar2 == 0) {
    FUN_1004645b8(*(undefined8 *)(param_1 + 0x340),uVar1,param_2);
    uVar3 = FUN_10005f514(param_1 + 0x1f8,uVar1,param_2,1,0);
    if ((((param_3 != 0) && (iVar2 = FUN_10012709c(), iVar2 == 1)) &&
        (iVar2 = FUN_10031615c(9), iVar2 != 0)) && (iVar2 = FUN_10031615c(10), iVar2 != 0)) {
      FUN_10005b4fc(param_1,uVar1,param_2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_10005b4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184db30) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_10005bec4();
  FUN_100055584(lVar1,param_2,param_3);
  return;
}




void FUN_10005b56c(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_10012709c();
  if (((iVar1 == 1) && (iVar1 = FUN_10031615c(9), iVar1 != 0)) &&
     (uVar2 = FUN_10031615c(10), (uVar2 & 1) == 0)) {
    for (lVar3 = *(long *)(param_1 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184db30) {
        uVar4 = FUN_100055a80();
        iVar1 = FUN_1001018f0();
        if (iVar1 == 0) {
          return;
        }
        iVar1 = FUN_1001018e8(uVar4);
        if (iVar1 != (int)param_2) {
          return;
        }
        FUN_10005b4fc(param_1,*(undefined4 *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x350),param_2)
        ;
        return;
      }
    }
  }
  return;
}




void FUN_10005b624(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_60 [32];
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x340) + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  uVar3 = FUN_1000c60f8(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x248));
  iVar1 = FUN_1003e11f8(lVar5,uVar3);
  if (iVar1 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x340) + 0x40);
    fVar7 = *(float *)(lVar4 + 0xac) + *(float *)(lVar4 + 0x160) * (*(float *)(lVar4 + 0x2c8) + 1.0)
    ;
    NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar4 + 0x214),DAT_101dc3844);
    if (0.0 < DAT_101dc3784) {
      fVar7 = *(float *)(lVar4 + 0xd8) +
              *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0);
      fVar6 = (float)NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar4 + 0x240),DAT_101dc3870);
      fVar7 = DAT_101dc37b0;
      if (DAT_101dc37b0 <= fVar6) {
        fVar7 = fVar6;
      }
      uVar2 = FUN_1003d9e44(lVar5,uVar3);
      if ((float)uVar2 <= fVar7) {
        FUN_100011880(auStack_60,param_2);
        FUN_100345498(auStack_60);
      }
    }
  }
  return;
}




void FUN_10005b750(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10005b784(param_1,param_2);
  FUN_10005b848(param_1,uVar1,param_3);
  return;
}




undefined8 FUN_10005b784(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = FUN_100490234(*(undefined8 *)(param_1 + 0x340));
  iVar1 = FUN_1003e1b24();
  if (iVar1 != 0) {
    uVar6 = 0;
    uVar7 = 0;
    do {
      uVar4 = FUN_10044d868(uVar3,uVar6);
      if ((int)uVar4 != -1) {
        FUN_10044d88c(uVar3,uVar4);
        uVar5 = FUN_1000bda94();
        if (((uVar5 & 1) == 0) && (iVar1 = FUN_10046e42c(uVar3,uVar4), iVar1 != 0)) {
          if (uVar7 == (param_2 & 0xff)) {
            return uVar4;
          }
          uVar7 = uVar7 + 1;
        }
      }
      uVar6 = uVar6 + 1;
      uVar2 = FUN_1003e1b24(uVar3);
    } while (uVar6 < uVar2);
  }
  return 0xffffffff;
}




undefined8 FUN_10005b848(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((int)param_2 != -1) {
    uVar2 = FUN_100490234(*(undefined8 *)(param_1 + 0x340));
    uVar3 = (ulong)*(ushort *)(*(long *)(param_1 + 0x340) + 0x88) & 0x1f;
    if (((((int)uVar3 == 0x1f) ||
         (1 < *(ushort *)(*(long *)(param_1 + 0x340) + uVar3 * 0x38 + 0x90) - 3)) &&
        (iVar1 = FUN_1003d77ec(uVar2,param_2), iVar1 != 0)) &&
       (iVar1 = FUN_10046e6fc(uVar2,param_2), iVar1 != 0)) {
      uVar2 = FUN_10005f514(param_1 + 0x1f8,param_2,3,0,0);
      if (param_3 == 0) {
        return uVar2;
      }
      iVar1 = FUN_10012709c();
      if (iVar1 != 1) {
        return uVar2;
      }
      iVar1 = FUN_10031615c(9);
      if (iVar1 == 0) {
        return uVar2;
      }
      iVar1 = FUN_10031615c(10);
      if (iVar1 == 0) {
        return uVar2;
      }
      FUN_10005c8cc(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}




void FUN_10005b93c(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10005b784(param_1,param_2);
  FUN_10005b968(param_1,uVar1);
  return;
}




void FUN_10005b968(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((((int)param_2 != -1) && (iVar1 = FUN_10012709c(), iVar1 == 1)) &&
      (iVar1 = FUN_10031615c(9), iVar1 != 0)) && (uVar2 = FUN_10031615c(10), (uVar2 & 1) == 0)) {
    for (lVar3 = *(long *)(param_1 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184db30) {
        uVar4 = FUN_100055a80();
        iVar1 = FUN_100101900();
        if (iVar1 == 0) {
          return;
        }
        iVar1 = FUN_1001018e0(uVar4);
        if (iVar1 != (int)param_2) {
          return;
        }
        uVar4 = FUN_100490234(*(undefined8 *)(param_1 + 0x340));
        uVar2 = (ulong)*(ushort *)(*(long *)(param_1 + 0x340) + 0x88) & 0x1f;
        if (((int)uVar2 != 0x1f) &&
           (*(ushort *)(*(long *)(param_1 + 0x340) + uVar2 * 0x38 + 0x90) - 3 < 2)) {
          return;
        }
        iVar1 = FUN_1003d77ec(uVar4,param_2);
        if (iVar1 == 0) {
          return;
        }
        iVar1 = FUN_10046e6fc(uVar4,param_2);
        if (iVar1 == 0) {
          return;
        }
        FUN_10005c8cc(param_1,param_2);
        return;
      }
    }
  }
  return;
}




void FUN_10005ba84(long param_1,ulong param_2)

{
  FUN_10005b848(param_1,*(undefined4 *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x35c));
  return;
}




void FUN_10005ba90(long param_1,ulong param_2)

{
  FUN_10005b968(param_1,*(undefined4 *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x35c));
  return;
}




void FUN_10005ba9c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_10012709c();
  if (((iVar1 == 1) && (iVar1 = FUN_10031615c(9), iVar1 != 0)) &&
     (iVar1 = FUN_10031615c(10), iVar1 != 0)) {
    FUN_10005baf4(param_1);
    return;
  }
  FUN_10005bc84(param_1,1);
  return;
}




void FUN_10005baf4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  undefined4 local_58 [10];
  undefined4 local_30 [4];
  
  if (*(char *)(param_1 + 0x338) != '\0') {
    FUN_10109c550(local_58,local_30,0,0);
    FUN_10005bd4c(local_58[0],local_30[0],param_1);
  }
  FUN_10005bc84(param_1,0);
  lVar2 = *(long *)(param_1 + 0x340);
  if ((lVar2 != 0) &&
     (((uVar4 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar4 == 0x1f ||
       (1 < *(ushort *)(lVar2 + uVar4 * 0x38 + 0x90) - 3)) &&
      ((*(byte *)(lVar2 + 0x2f9) >> 5 & 1) == 0)))) {
    uVar3 = FUN_1003a3e24();
    iVar1 = FUN_1000e8dc8(param_1 + 800,uVar3,local_30);
    if (iVar1 != 0) {
      FUN_10003cbfc(*(undefined8 *)(param_1 + 0x308),local_30);
      FUN_10003cc58(*(undefined8 *)(param_1 + 0x308));
      FUN_10045c734(local_58,*(undefined8 *)(param_1 + 0x340));
      uVar4 = FUN_10031615c(0x1f);
      if (((uVar4 & 1) != 0) ||
         (lVar2 = FUN_10006103c(0x40400000,0x42c60000,local_58,local_30,
                                *(undefined8 *)(param_1 + 0x340),0), lVar2 == 0)) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x340) + 0x40);
        fVar5 = *(float *)(lVar2 + 0x78) +
                *(float *)(lVar2 + 300) * (*(float *)(lVar2 + 0x294) + 1.0);
        NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x1e0),DAT_101dc3810);
        lVar2 = FUN_10006137c((float)DAT_101dc3750,(float)DAT_101dc3750 + 5.0,DAT_101dc3810,
                              0x3f800000,local_58,*(long *)(param_1 + 0x340),1,4);
        if (lVar2 == 0) {
          FUN_10005a2bc(0x3f800000,param_1,local_30,0,1);
          return;
        }
      }
      FUN_10005a6a0(param_1,lVar2,1,0);
    }
  }
  return;
}




void FUN_10005bc84(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x380) = 0;
    if (*(long *)(param_1 + 0x310) != 0) {
      FUN_10004a308();
    }
    FUN_10011bda4(2);
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x380) = 1;
    FUN_10004a394(*(undefined8 *)(param_1 + 0x310));
    FUN_10004a2a0(*(undefined8 *)(param_1 + 0x310));
    uVar1 = 1;
    uVar2 = 2;
  }
  FUN_10011bd88(uVar1,uVar2);
  return;
}




void FUN_10005bce8(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_10012709c();
  if ((((iVar1 == 1) && (iVar1 = FUN_10031615c(9), iVar1 != 0)) &&
      (uVar2 = FUN_10031615c(10), (uVar2 & 1) == 0)) && (*(char *)(param_1 + 0x380) != '\0')) {
    FUN_10005bc84(param_1,0);
    FUN_10005baf4(param_1);
    return;
  }
  return;
}




void FUN_10005bd4c(float param_1,float param_2,long param_3)

{
  float fVar1;
  float local_60;
  float fStack_5c;
  undefined4 local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined8 local_40;
  float local_38;
  
  local_48 = 0.0;
  local_50 = param_1;
  fStack_4c = param_2;
  FUN_10011a108(&local_40,&local_50,1);
  local_58 = 0x3f800000;
  local_60 = param_1;
  fStack_5c = param_2;
  FUN_10011a108(&local_50,&local_60,1);
  *(undefined8 *)(param_3 + 800) = local_40;
  local_50 = local_50 - (float)local_40;
  fStack_4c = fStack_4c - (float)((ulong)local_40 >> 0x20);
  local_48 = local_48 - local_38;
  fVar1 = SQRT(local_50 * local_50 + fStack_4c * fStack_4c + local_48 * local_48);
  *(float *)(param_3 + 0x328) = local_38;
  *(ulong *)(param_3 + 0x32c) = CONCAT44(fStack_4c / fVar1,local_50 / fVar1);
  *(float *)(param_3 + 0x334) = local_48 / fVar1;
  *(undefined1 *)(param_3 + 0x338) = 0;
  return;
}




void thunk_FUN_10005a448(long param_1)

{
  undefined1 auStack_50 [48];
  undefined1 auStack_20 [16];
  
  FUN_100345b68(*(undefined8 *)(param_1 + 0x340),auStack_20,0);
  FUN_10001166c(auStack_50,auStack_20,0,0);
  FUN_100345498(auStack_50);
  return;
}




void FUN_10005be0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x340) != 0) && (lVar1 = FUN_1003a7540(), lVar1 != 0)) {
    uVar2 = FUN_1003e1980();
    FUN_1004457b4(*(undefined8 *)(param_1 + 0x340),uVar2,3,0);
    return;
  }
  return;
}




void FUN_10005be58(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184de90) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_100035ee8();
  return;
}




void FUN_10005be88(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_100316150();
  uVar3 = FUN_100316150();
  uVar1 = FUN_100316174(uVar3,6);
  FUN_100316360(uVar2,6,~uVar1 & 1);
  return;
}




void FUN_10005bec4(undefined8 param_1)

{
  int iVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_10109c4dc();
  if (iVar1 != 0) {
    FUN_10109c550(&uStack_3c,&local_40,0,0);
    local_38 = 0x400000004;
    local_30 = 0;
    local_28 = uStack_3c;
    uStack_24 = local_40;
    FUN_10005aeb8(param_1,&local_38);
  }
  return;
}




undefined8 FUN_10005bf24(long param_1,int *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined **local_70;
  undefined4 local_68;
  
  iVar3 = *param_2;
  if (iVar3 == 1) {
    FUN_10003ab4c(*(undefined8 *)(param_1 + 0x348));
    iVar3 = *param_2;
  }
  if (iVar3 == 3) {
    if (param_1 != 0) {
      uVar6 = 0x10000;
      lVar4 = param_1;
LAB_10005c050:
      do {
        do {
          lVar5 = lVar4;
          if ((lVar5 != param_1) &&
             (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar5 + 8),0x80a40995), lVar4 != 0)) {
            (**(code **)(lVar4 + 8))(lVar5);
          }
          if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
            uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
            goto LAB_10005c050;
          }
          if ((uVar6 & 0xffff) == 0) goto LAB_10005c1ac;
          lVar4 = *(long *)(lVar5 + 0x20);
        } while (*(long *)(lVar5 + 0x20) != 0);
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((lVar5 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) break;
        uVar6 = uVar1 | uVar6 & 0xffff0000;
        while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
          if ((uVar6 - 1 & 0xffff) == 0) goto LAB_10005c1ac;
          lVar5 = *(long *)(lVar5 + 0x10);
          uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
          if (lVar5 == 0) goto LAB_10005c1ac;
        }
      } while( true );
    }
  }
  else if (iVar3 == 2) {
    if (param_1 != 0) {
      uVar6 = 0x10000;
      lVar4 = param_1;
LAB_10005c108:
      do {
        do {
          lVar5 = lVar4;
          if ((lVar5 != param_1) &&
             (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar5 + 8),0x5ae807ed), lVar4 != 0)) {
            (**(code **)(lVar4 + 8))(lVar5);
          }
          if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
            uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
            goto LAB_10005c108;
          }
          if ((uVar6 & 0xffff) == 0) goto LAB_10005c1ac;
          lVar4 = *(long *)(lVar5 + 0x20);
        } while (*(long *)(lVar5 + 0x20) != 0);
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((lVar5 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) break;
        uVar6 = uVar1 | uVar6 & 0xffff0000;
        while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
          if ((uVar6 - 1 & 0xffff) == 0) goto LAB_10005c1ac;
          lVar5 = *(long *)(lVar5 + 0x10);
          uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
          if (lVar5 == 0) goto LAB_10005c1ac;
        }
      } while( true );
    }
  }
  else if ((iVar3 == 1) && (param_1 != 0)) {
    uVar6 = 0x10000;
    lVar4 = param_1;
LAB_10005bf98:
    do {
      do {
        lVar5 = lVar4;
        if ((lVar5 != param_1) &&
           (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar5 + 8),0x8b950a0d), lVar4 != 0)) {
          (**(code **)(lVar4 + 8))(lVar5);
        }
        if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
          uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
          goto LAB_10005bf98;
        }
        if ((uVar6 & 0xffff) == 0) goto LAB_10005c1ac;
        lVar4 = *(long *)(lVar5 + 0x20);
      } while (*(long *)(lVar5 + 0x20) != 0);
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((lVar5 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) break;
      uVar6 = uVar1 | uVar6 & 0xffff0000;
      while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
        if ((uVar6 - 1 & 0xffff) == 0) goto LAB_10005c1ac;
        lVar5 = *(long *)(lVar5 + 0x10);
        uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
        if (lVar5 == 0) goto LAB_10005c1ac;
      }
    } while( true );
  }
LAB_10005c1ac:
  iVar3 = FUN_100316180(3);
  if (*param_2 == 1) {
    bVar2 = param_2[1] != 2;
    if (iVar3 != 0) {
      bVar2 = param_2[1] != 1;
    }
    if (((iVar3 == 0 | param_4) == 1) && (!bVar2)) {
      local_68 = 1;
      local_70 = &PTR_FUN_10144d678;
      FUN_10005f394(param_1 + 0x260,&local_70);
    }
  }
  return 1;
}




undefined8 FUN_10005c238(long param_1,int *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **local_40;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x36a) == '\0') {
LAB_10005c2f0:
    if (*param_2 == 3) {
      if (param_2[1] != 1) {
        return 0;
      }
      local_38 = CONCAT44(local_38._4_4_,0x1d);
      local_40 = &PTR_FUN_10144d7e0;
    }
    else {
      if ((*param_2 != 1) || (param_2[1] != 1)) {
        return 0;
      }
      iVar2 = FUN_10109c494(0x50);
      if (iVar2 == 0) {
        uVar4 = FUN_10109c494(0x4e);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        local_38 = 0x40000001d;
      }
      else {
        local_38 = 0x20000001d;
      }
      local_40 = &PTR_FUN_10144d7c8;
    }
    FUN_10005f394(param_1 + 0x260,&local_40);
  }
  else {
    for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184de90) goto LAB_10005c290;
    }
    iVar2 = FUN_100060abc();
    if (iVar2 == 0) {
LAB_10005c29c:
      for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
        if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184de90) goto LAB_10005c2f0;
      }
      uVar3 = FUN_100060abc();
      if (((uVar3 & 1) != 0) || (*param_2 != 1)) goto LAB_10005c2f0;
    }
    else {
LAB_10005c290:
      if (*param_2 != 3) goto LAB_10005c29c;
    }
    bVar1 = FUN_100059df4(param_1,param_3,*(undefined4 *)(param_1 + 0x36c));
    *(byte *)(param_1 + 0x36a) = bVar1 ^ 1;
  }
  return 1;
}




void FUN_10005c3a8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_10005c3cc:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xdc302c4), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_10005c3cc;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10005c47c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_10005c4a0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x163803be), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_10005c4a0;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10005c550(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    do {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184db30) {
        uVar3 = FUN_100055a80(lVar5);
        iVar2 = FUN_1001018d0();
        if (((iVar2 == 0) && (iVar2 = FUN_1001018d8(uVar3), iVar2 == param_2)) ||
           ((iVar2 = FUN_1001018d0(uVar3), iVar2 == 1 &&
            (iVar2 = FUN_1001018e0(uVar3), iVar2 == param_2)))) {
          FUN_1010a17e4(lVar5);
          FUN_10003ab44(*(undefined8 *)(param_1 + 0x348));
          goto LAB_10005c5f8;
        }
        break;
      }
      lVar5 = *(long *)(lVar5 + 0x20);
    } while (lVar5 != 0);
    if (param_1 == 0) {
      return;
    }
  }
LAB_10005c5f8:
  uVar6 = 0x10000;
  lVar5 = param_1;
LAB_10005c600:
  do {
    do {
      lVar4 = lVar5;
      if ((lVar4 != param_1) &&
         (lVar5 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x295f0542), lVar5 != 0)) {
        (**(code **)(lVar5 + 8))(lVar4);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar5 = *(long *)(lVar4 + 0x18), lVar5 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_10005c600;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar6 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10005c6b8(undefined8 param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)*(undefined8 *)(param_2 + 1) - (float)*(undefined8 *)(param_3 + 1);
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  if (400.0 < fVar2 * fVar2 + (*param_2 - *param_3) * (*param_2 - *param_3) + fVar3 * fVar3) {
    FUN_1000320fc();
    FUN_100033428();
    FUN_1000320fc();
    uVar1 = FUN_100033428();
    FUN_10002e63c(uVar1,param_3,2);
    return;
  }
  return;
}




void FUN_10005c730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_100039cb4(*(undefined8 *)(param_1 + 0x348));
  uVar4 = FUN_1003a7540(*(undefined8 *)(param_1 + 0x340));
  iVar2 = FUN_1003be070(uVar4,param_2);
  uVar4 = FUN_1003be070(uVar4,param_3);
  lVar5 = 0;
  lVar1 = param_1 + 0x350;
  while( true ) {
    if (*(int *)(lVar1 + lVar5 * 4) == iVar2) {
      *(int *)(lVar1 + lVar5 * 4) = (int)uVar4;
    }
    if ((*(long *)(lVar1 + lVar5 * 8 + -0x108) != 0) && (iVar3 = FUN_1000c60f0(), iVar3 == iVar2))
    break;
    lVar5 = lVar5 + 1;
    if (lVar5 == 3) {
      return;
    }
  }
  FUN_1000c6078(*(undefined8 *)(param_1 + lVar5 * 8 + 0x248),uVar4);
  return;
}




void FUN_10005c7f4(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)(param_1 + 0x28);
  if (((int)((ulong)*puVar5 & 0x1f) == 0x1f) ||
     (*(short *)(param_1 + ((ulong)*puVar5 & 0x1f) * 0x38 + 0x30) != 2)) {
    lVar4 = param_1 + 0x1e8;
    lVar3 = FUN_10034d734(lVar4);
    if ((lVar3 != 0) &&
       (lVar3 = FUN_10034d734(lVar4), *(int *)(lVar3 + 0x260) == param_2 || param_2 == -1)) {
      FUN_100169d54(lVar4);
      uVar1 = DAT_101dc0b88;
      lVar4 = *(long *)(param_1 + 0x340);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x2b0) = 0;
        *(undefined4 *)(lVar4 + 0x2b8) = uVar1;
      }
    }
    iVar2 = FUN_10005a3e0(puVar5,0);
    if (iVar2 != 0) {
      FUN_100058774(puVar5,0,0,0);
      return;
    }
  }
  return;
}




void FUN_10005c8cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184db30) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_10005bec4();
  FUN_10005562c(lVar1,param_2);
  return;
}




void FUN_10005c928(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  FUN_10003ab44(*(undefined8 *)(param_1 + 0x348));
  iVar2 = FUN_100345bbc(param_2);
  iVar3 = FUN_100345bbc(*(undefined8 *)(param_1 + 0x340));
  if (iVar2 != iVar3) {
    lVar5 = param_1 + 0x1e8;
    lVar4 = FUN_10034d734(lVar5);
    if (lVar4 != 0) {
      lVar4 = FUN_10034d734(lVar5);
      if (*(int *)(lVar4 + 0x260) != *(int *)(param_2 + 0x260)) {
        FUN_100169d54(lVar5);
        uVar1 = DAT_101dc0b88;
        lVar4 = *(long *)(param_1 + 0x340);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x2b0) = 0;
          *(undefined4 *)(lVar4 + 0x2b8) = uVar1;
        }
      }
    }
    FUN_100169d10(lVar5,param_2,1);
    lVar5 = *(long *)(param_1 + 0x340);
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x30);
      *(long *)(lVar5 + 0x2b0) = param_2 + 0x28;
      *(undefined4 *)(lVar5 + 0x2b8) = uVar1;
    }
  }
  return;
}




void FUN_10005c9e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (((param_2 != 0) && (lVar1 = FUN_10034d734(param_1 + 0x1e8), lVar1 == param_2)) &&
     (param_3 != 0)) {
    FUN_10005a6a0(param_1,param_3,0,0);
    return;
  }
  return;
}




void FUN_10005ca4c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xf4269e13) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xf4269e13];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xf4269e14)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_10005caf4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_1003da398();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xe4cbad13) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xe4cbad13];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xe4cbad14)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  FUN_100059a90(param_1);
  return;
}




void FUN_10005cbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [24];
  
  local_50 = (undefined4)param_1;
  uStack_4c = (undefined4)param_2;
  FUN_1000e8f48(auStack_48,&local_50);
  FUN_1000bda58(param_1,param_2,auStack_48);
  FUN_100059df4(param_3,auStack_48,param_4);
  return;
}




undefined8 * thunk_FUN_100057f54(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *param_1 = &PTR_thunk_FUN_1000588d4_10144d4b8;
  puVar7 = (ushort *)(param_1 + 5);
  *puVar7 = *puVar7 & 0x8000 | 0x3ff;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  puVar8 = param_1 + 6;
  *(undefined4 *)puVar8 = 0;
  param_1[0x29] = param_1;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  FUN_100060fa8(param_1 + 0x2d);
  FUN_100060b8c(param_1 + 0x31);
  FUN_10005f7fc(param_1 + 0x37);
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = DAT_101dc0b88;
  FUN_10005f3dc(param_1 + 0x3f,param_1);
  FUN_100050b08(param_1 + 0x43,param_1);
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)((long)param_1 + 0x334) = 0;
  *(undefined8 *)((long)param_1 + 0x32c) = 0x3f800000;
  fVar9 = *(float *)((long)param_1 + 0x32c);
  fVar11 = *(float *)(param_1 + 0x66);
  fVar12 = *(float *)((long)param_1 + 0x334);
  fVar10 = 1.0 / SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12);
  *(float *)((long)param_1 + 0x32c) = fVar9 * fVar10;
  *(float *)(param_1 + 0x66) = fVar11 * fVar10;
  *(float *)((long)param_1 + 0x334) = fVar12 * fVar10;
  *(undefined1 *)(param_1 + 0x67) = 1;
  *(undefined4 *)((long)param_1 + 0x36c) = 0;
  param_1[0x6e] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)((long)param_1 + 0x364) = 0;
  *(undefined4 *)((long)param_1 + 0x367) = 0;
  *(undefined4 *)((long)param_1 + 0x37c) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  uVar3 = *puVar7;
  puVar6 = puVar8 + ((ulong)(uVar3 >> 10) & 0x1f) * 7;
  *(undefined4 *)puVar6 = 0;
  puVar6[1] = FUN_1000583ac;
  uVar1 = uVar3 + 0x400;
  uVar2 = uVar3 & 0xffff83ff;
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6 = puVar8 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar6 = 1;
  puVar6[1] = FUN_10005844c;
  puVar6[2] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[3] = FUN_100058500;
  puVar6[4] = 0;
  puVar6 = puVar8 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined2 *)puVar6 = 2;
  puVar6[1] = FUN_100058510;
  puVar6[2] = 0;
  puVar6[3] = FUN_1000585b4;
  puVar6[4] = 0;
  puVar6[5] = FUN_100058664;
  puVar6[6] = 0;
  *(undefined2 *)((long)puVar6 + 2) = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar6 = puVar8 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar6 = 3;
  puVar6[1] = 0;
  puVar6[2] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar6[3] = FUN_1000586d4;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar8 = puVar8 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar8 = 4;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = FUN_1000586e8;
  puVar8[4] = 0;
  puVar8[5] = FUN_1000586ec;
  puVar8[6] = 0;
  *puVar7 = ((ushort)uVar1 & 0x7c00 | (ushort)uVar2) + 0x400 & 0x7c00 | (ushort)uVar2;
  FUN_1000586f0(puVar7,0,1);
  FUN_1000586f0(puVar7,0,2);
  FUN_1000586f0(puVar7,0,3);
  FUN_1000586f0(puVar7,1,0);
  FUN_1000586f0(puVar7,1,2);
  FUN_1000586f0(puVar7,1,3);
  FUN_1000586f0(puVar7,2,0);
  FUN_1000586f0(puVar7,2,3);
  FUN_1000586f0(puVar7,0,4);
  FUN_1000586f0(puVar7,1,4);
  FUN_1000586f0(puVar7,2,4);
  FUN_1000586f0(puVar7,3,4);
  FUN_1000586f0(puVar7,4,4);
  FUN_1000586f0(puVar7,4,0);
  FUN_1000586f0(puVar7,4,1);
  FUN_1000586f0(puVar7,4,2);
  FUN_1000586f0(puVar7,4,3);
  FUN_100058774(puVar7,0,0,0);
  uVar4 = FUN_1000bdb98();
  FUN_1004e18bc(uVar4,param_1,0x461d39a,thunk_FUN_1000598fc,0);
  uVar4 = FUN_1000bdb98();
  FUN_1004e18bc(uVar4,param_1,0xc8e15bb6,thunk_FUN_1000599f8,0);
  uVar4 = FUN_1000bdb98();
  FUN_1004e18bc(uVar4,param_1,0xf0abc88a,FUN_100058898,0);
  lVar5 = 0x350;
  do {
    *(undefined4 *)((long)param_1 + lVar5) = 0xffffffff;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x35c);
  *(undefined4 *)((long)param_1 + 0x35c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  uVar4 = FUN_100345b94();
  uVar4 = FUN_10034c450(uVar4,"*JoystickBasicAttackRingIndicator*");
  param_1[99] = uVar4;
  DAT_101dc3708 = param_1;
  return param_1;
}




void FUN_10005cc30(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010005cc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10005cc3c(void)

{
  if ((DAT_10184daa0 & 1) == 0) {
    DAT_10184da98 = DAT_101872e38;
    DAT_10184daa0 = 1;
  }
  return;
}




void FUN_10005cc68(void)

{
  if ((DAT_10184deb8 & 1) == 0) {
    DAT_10184deb0 = DAT_101872e38;
    DAT_10184deb8 = 1;
  }
  return;
}




void FUN_10005cc94(void)

{
  if ((DAT_10184dc90 & 1) == 0) {
    DAT_10184dc88 = DAT_101872e38;
    DAT_10184dc90 = 1;
  }
  return;
}




void FUN_10005ccc0(void)

{
  if ((DAT_10184dee8 & 1) == 0) {
    DAT_10184dee0 = DAT_101872e38;
    DAT_10184dee8 = 1;
  }
  return;
}




void FUN_10005ccec(void)

{
  if ((DAT_10184db38 & 1) == 0) {
    DAT_10184db30 = DAT_101872e38;
    DAT_10184db38 = 1;
  }
  return;
}




void FUN_10005cd18(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




void FUN_10005cd44(void)

{
  if ((DAT_10184e048 & 1) == 0) {
    DAT_10184e040 = DAT_101872e38;
    DAT_10184e048 = 1;
  }
  return;
}




void FUN_10005cd70(void)

{
  if ((DAT_10184e028 & 1) == 0) {
    DAT_10184e020 = DAT_101872e38;
    DAT_10184e028 = 1;
  }
  return;
}




void FUN_10005cd9c(void)

{
  if ((DAT_10184e038 & 1) == 0) {
    DAT_10184e030 = DAT_101872e38;
    DAT_10184e038 = 1;
  }
  return;
}




void FUN_10005cdc8(void)

{
  if ((DAT_10184e018 & 1) == 0) {
    DAT_10184e010 = DAT_101872e38;
    DAT_10184e018 = 1;
  }
  return;
}




void FUN_10005cdf4(void)

{
  if ((DAT_10184e068 & 1) == 0) {
    DAT_10184e060 = DAT_101872e38;
    DAT_10184e068 = 1;
  }
  return;
}




void FUN_10005ce20(void)

{
  if ((DAT_10184de98 & 1) == 0) {
    DAT_10184de90 = DAT_101872e38;
    DAT_10184de98 = 1;
  }
  return;
}




void FUN_10005ce4c(void)

{
  if ((DAT_10184db10 & 1) == 0) {
    DAT_10184db08 = DAT_101872e38;
    DAT_10184db10 = 1;
  }
  return;
}




void FUN_10005ce78(void)

{
  if ((DAT_10184e008 & 1) == 0) {
    DAT_10184e000 = DAT_101872e38;
    DAT_10184e008 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005cea4(void)

{
  uRam0000000101dc37d8 = 0x7f7fffff7f7fffff;
  _DAT_101dc37d0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc37e8 = 0x7f7fffff7f7fffff;
  _DAT_101dc37e0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc37f8 = 0x7f7fffff7f7fffff;
  _DAT_101dc37f0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3808 = 0x7f7fffff7f7fffff;
  _DAT_101dc3800 = 0x7f7fffff7f7fffff;
  DAT_101dc3810 = 0x7f7fffff;
  DAT_101dc3814 = 0x7f7fffff;
  DAT_101dc3818 = 0x7f7fffff;
  DAT_101dc381c = 0x3f800000;
  DAT_101dc3590 = 0xff;
  DAT_101dc3592 = 0xffff;
  uRam0000000101dc3828 = 0x7f7fffff7f7fffff;
  _DAT_101dc3820 = 0x7f7fffff7f7fffff;
  DAT_101dc3594 = 0xffff;
  DAT_101dc3834 = 0x3eb33333;
  DAT_101dc359a = 0xff1166f2;
  DAT_101dc3830 = 0x7f7fffff;
  DAT_101dc359e = 0xffe0e0e0;
  DAT_101dc35a2 = 0xffa0a0a0;
  DAT_101dc35aa = 0xff322213;
  DAT_101dc35ae = 0xff091911;
  DAT_101dc35b2 = 0xff170c19;
  DAT_101dc35b6 = 0xff241a14;
  DAT_101dc35ba = 0xff14171c;
  DAT_101dc35be = 0xff221911;
  DAT_101dc35c2 = 0xff1a1416;
  DAT_101dc35c6 = 0xff121414;
  DAT_101dc35ca = 0xff1a1809;
  DAT_101dc35ce = 0xff141414;
  uRam0000000101dc3840 = 0x7f7fffff7f7fffff;
  _DAT_101dc3838 = 0x7f7fffff7f7fffff;
  DAT_101dc35d2 = 0xff141414;
  DAT_101dc35d6 = 0xff2929c0;
  DAT_101dc35da = 0xff283082;
  DAT_101dc35e2 = 0xff283082;
  DAT_101dc35de = 0xff5262cc;
  uRam0000000101dc3850 = 0x7f7fffff7f7fffff;
  _DAT_101dc3848 = 0x7f7fffff7f7fffff;
  DAT_101dc35e6 = 0xff5262cc;
  DAT_101dc35ea = 0xff745c42;
  DAT_101dc35ee = 0xff184155;
  uRam0000000101dc3860 = 0x7f7fffff7f7fffff;
  _DAT_101dc3858 = 0x7f7fffff7f7fffff;
  DAT_101dc3596 = 0xffbc9c44;
  DAT_101dc35f6 = 0xffbc9c44;
  _DAT_101dc3870 = 0x7f7fffff7f7fffff;
  _DAT_101dc3868 = 0x7f7fffff7f7fffff;
  DAT_101dc35fa = 0xffbbae56;
  DAT_101dc35fe = 0xff8b7b01;
  DAT_101dc3602 = 0xff90b3ef;
  DAT_101dc3606 = 0xff728ebe;
  DAT_101dc360a = 0xff19459d;
  DAT_101dc3878 = 0x7f7fffff;
  DAT_101dc387c = 0x7f7fffff;
  DAT_101dc3880 = 0x7f7fffff;
  DAT_101dc360e = 0xff9d877b;
  DAT_101dc374c = 0x3f000000;
  DAT_101dc3612 = 0xffcbb1a3;
  DAT_101dc3616 = 0xff3f6fb5;
  DAT_101dc361a = 0xffc5c5c5;
  uRam0000000101dc3718 = 0xff7fffffff7fffff;
  _DAT_101dc3710 = 0xff7fffffff7fffff;
  DAT_101dc361e = 0xff4fc1f1;
  DAT_101dc3622 = 0xff606060;
  DAT_101dc3720 = 0;
  DAT_101dc3626 = 0xffc5ff7b;
  DAT_101dc362a = 0xff5271eb;
  DAT_101dc3728 = 0;
  DAT_101dc362e = 0xfffae076;
  DAT_101dc3632 = 0xff3ac8f6;
  uRam0000000101dc3734 = 0xff7fffffff7fffff;
  _DAT_101dc372c = 0xff7fffffff7fffff;
  DAT_101dc3636 = 0xffaaaaaa;
  DAT_101dc363a = 0xffe19400;
  DAT_101dc363e = 0xffe19400;
  DAT_101dc3642 = 0xffe550b2;
  DAT_101dc3646 = 0xfff22ae8;
  DAT_101dc373c = 0xff7fffff;
  DAT_101dc3740 = 0xff7fffff;
  DAT_101dc364a = 0xff005ae1;
  DAT_101dc364e = 0xff1addfa;
  DAT_101dc3744 = NEON_fmov(0xbf800000,4);
  DAT_101dc3652 = 0xff2424b3;
  DAT_101dc3656 = 0xff2424b3;
  DAT_101dc365a = 0xff646464;
  DAT_101dc35f2 = 0xff92665e;
  DAT_101dc365e = 0xff92665e;
  DAT_101dc3662 = 0xff646037;
  DAT_101dc37a0 = 0xbf800000;
  DAT_101dc366c = 0xff1111a1;
  DAT_101dc3674 = 0xffc8c8c8;
  DAT_101dc3668 = 0xffffffff;
  DAT_101dc3670 = 0xff321ee1;
  DAT_101dc3678 = 0xff321ee1;
  DAT_101dc3680 = 0xffffffff;
  DAT_101dc3684 = 0xff6259b3;
  DAT_101dc3688 = 0xff506e73;
  DAT_101dc3750 = 0;
  DAT_101dc3758 = 0;
  DAT_101dc368c = 0xff9dbf86;
  DAT_101dc3690 = 0xffa35244;
  DAT_101dc3694 = 0xffca828e;
  DAT_101dc3698 = 0xffa6a6a6;
  DAT_101dc369c = 0xffa6a6a6;
  DAT_101dc36a0 = 0xffffffff;
  uRam0000000101dc3768 = 0xff7fffffff7fffff;
  _DAT_101dc3760 = 0xff7fffffff7fffff;
  uRam0000000101dc3778 = 0xff7fffffff7fffff;
  _DAT_101dc3770 = 0xff7fffffff7fffff;
  DAT_101dc36a4 = 0xff88ea2f;
  DAT_101dc35a6 = 0xff8c8c8c;
  DAT_101dc36a8 = 0xff8c8c8c;
  DAT_101dc367c = 0xff7fe801;
  DAT_101dc36ac = 0xffffb400;
  DAT_101dc36b0 = 0xffff00ff;
  uRam0000000101dc3788 = 0xff7fffffff7fffff;
  _DAT_101dc3780 = 0xff7fffffff7fffff;
  uRam0000000101dc3798 = 0xbf800000bf800000;
  _DAT_101dc3790 = 0xbf80000000000000;
  DAT_101dc36b4 = 0xff00aded;
  DAT_101dc36b8 = 0xff33d3ff;
  DAT_101dc36bc = 0xff7fe801;
  DAT_101dc36c0 = 0xff282828;
  DAT_101dc37a4 = 0xff7fffff;
  DAT_101dc37a8 = 0xff7fffff;
  DAT_101dc36c4 = 0xfff0f0f0;
  DAT_101dc36c8 = 0xffa4781e;
  DAT_101dc36cc = 0xffa6654b;
  DAT_101dc37ac = 0xff7fffff;
  DAT_101dc36d0 = 0xff93435b;
  DAT_101dc37b0 = 0;
  DAT_101dc36d4 = 0xff387f9c;
  DAT_101dc36d8 = 0xffa3781e;
  DAT_101dc36dc = 0xffffd18a;
  DAT_101dc37b4 = 0xff7fffff;
  DAT_101dc36e0 = 0xffff61f7;
  DAT_101dc37b8 = 0;
  DAT_101dc36e4 = 0xff5de1f2;
  DAT_101dc37c0 = 0;
  DAT_101dc36e8 = 0xff80eaff;
  DAT_101dc36ec = 0xff32e00e;
  DAT_101dc36f0 = 0xff5a3c10;
  DAT_101dc36f4 = 0xff330b03;
  DAT_101dc36f8 = 0xff33031d;
  DAT_101dc36fc = 0xff032433;
  DAT_101dc3700 = 0xff9e8e8d;
  return;
}




undefined8 * FUN_10005d624(undefined8 *param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10144d4e8;
  puVar4 = (ushort *)(param_1 + 5);
  *puVar4 = *puVar4 & 0x8000 | 0x3ff;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[0x14] = param_1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = DAT_101dc1cb8;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined1 *)((long)param_1 + 0xe5) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  lVar2 = 0xf0;
  do {
    puVar3 = (undefined8 *)((long)param_1 + lVar2);
    *puVar3 = 0;
    *(byte *)(puVar3 + 1) = *(byte *)(puVar3 + 1) & 0xf8;
    lVar2 = lVar2 + 0xc;
  } while ((undefined8 *)((long)puVar3 + 0xc) != param_1 + 0x21);
  lVar2 = 0x108;
  do {
    puVar3 = (undefined8 *)((long)param_1 + lVar2);
    *puVar3 = 0;
    *(byte *)(puVar3 + 1) = *(byte *)(puVar3 + 1) & 0xf8;
    lVar2 = lVar2 + 0xc;
  } while ((undefined8 *)((long)puVar3 + 0xc) != param_1 + 0x24);
  uVar1 = *(ushort *)(param_1 + 5);
  puVar3 = param_1 + ((ulong)(uVar1 >> 10) & 0x1f) * 7 + 6;
  *(undefined4 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3 = param_1 + (ulong)(uVar1 + 0x400 >> 10 & 0x1f) * 7 + 6;
  *(undefined4 *)puVar3 = 1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = FUN_10005d794;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *(ushort *)(param_1 + 5) =
       ((ushort)(uVar1 + 0x400) & 0x7c00 | uVar1 & 0x83ff) + 0x400 & 0x7c00 | uVar1 & 0x83ff;
  FUN_10005d7a8(puVar4,0,1);
  FUN_10005d82c(puVar4,0,0,0);
  return param_1;
}




void FUN_10005d794(long param_1)

{
  FUN_10004ea28(*(undefined8 *)(param_1 + 0xa8),*(undefined1 *)(param_1 + 0xec),
                *(undefined4 *)(param_1 + 0xe8));
  return;
}




void FUN_10005d7a8(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_10005d7dc;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_10005d7dc:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_10005d82c(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_10005d870;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_10005d870:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010005d8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10005d948(long param_1)

{
  long lVar1;
  
  DAT_10184de60 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184de60 + 1;
  lVar1 = param_1 + (ulong)DAT_10184de60 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10005d624;
  *(code **)(lVar1 + 0xb8) = FUN_10005e584;
  *(uint *)(lVar1 + 0xa4) = DAT_10184de60;
  *(undefined4 *)(lVar1 + 0xa8) = 0x120;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,2,FUN_10005d9e4,0);
  FUN_1010a0944(param_1,4,FUN_10005d9e8,0);
  return;
}




void FUN_10005d9e4(void)

{
  return;
}




void FUN_10005d9e8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint local_34;
  
  local_34 = 0;
  puVar4 = (undefined4 *)(param_1 + 0xf0);
  iVar1 = FUN_10005dbec(param_1,puVar4,2,&local_34);
  uVar5 = (ulong)local_34;
  if (local_34 == 2) {
    if ((((*(byte *)(param_1 + 0x110) >> 2 & 1) == 0) ||
        ((*(byte *)(param_1 + 0x11c) >> 2 & 1) == 0)) ||
       (fVar6 = *(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0xfc),
       fVar7 = *(float *)(param_1 + 0xf4) - *(float *)(param_1 + 0x100),
       fVar8 = *(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x114),
       fVar9 = *(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x118),
       fVar6 = SQRT(fVar8 * fVar8 + fVar9 * fVar9) - SQRT(fVar6 * fVar6 + fVar7 * fVar7),
       ABS(fVar6 * 0.3) < 2.0)) {
      pfVar3 = (float *)(param_1 + 0xcc);
      fVar6 = (float)NEON_fminnm(*pfVar3 + (*(float *)(param_1 + 0xf4) - *(float *)(param_1 + 0x10c)
                                           ) * 0.3,0x420c0000);
      if (fVar6 <= -48.0) {
        fVar6 = -48.0;
      }
      *pfVar3 = fVar6;
      *(float *)(param_1 + 0xd0) =
           *(float *)(param_1 + 0xd0) +
           (*(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0x108)) * 0.3;
      FUN_1000320fc();
      uVar2 = FUN_100033428();
      FUN_10002e69c(uVar2,pfVar3);
    }
    else {
      fVar6 = (float)NEON_fminnm(*(float *)(param_1 + 0xd4) + fVar6 * 0.15,0x40a00000);
      if (fVar6 <= -20.0) {
        fVar6 = -20.0;
      }
      *(float *)(param_1 + 0xd4) = fVar6;
      FUN_1000320fc();
      FUN_100033428();
      FUN_10002e6ac(*(undefined4 *)(param_1 + 0xd4));
    }
    *(undefined1 *)(param_1 + 0xe4) = 0;
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  else if (iVar1 == 0) {
    *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) & 0xfd;
    *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) & 0xfd;
    if (*(char *)(param_1 + 200) == '\0') {
      if (*(char *)(param_1 + 0xe4) == '\0') goto LAB_10005db9c;
    }
    else {
      *(undefined2 *)(param_1 + 200) = 0;
      *(undefined1 *)(param_1 + 0xe4) = 1;
    }
    FUN_10005dec8(param_1);
  }
  else if (local_34 != 0) {
    do {
      if (((*(long *)(param_1 + 0xa8) == 0) || ((*(byte *)(puVar4 + 2) & 1) == 0)) ||
         (iVar1 = FUN_10004ea04(*puVar4,puVar4[1]), iVar1 == 0)) {
        if ((*(byte *)(puVar4 + 2) >> 1 & 1) == 0) {
          FUN_10005ddf0(param_1,puVar4);
        }
      }
      else {
        *(byte *)(puVar4 + 2) = *(byte *)(puVar4 + 2) | 2;
      }
      puVar4 = puVar4 + 3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
LAB_10005db9c:
  FUN_10005e074(param_1 + 0x28);
  return;
}




undefined8 FUN_10005dbec(long param_1,long param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xf0);
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfb;
  *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_1 + 0xfc);
  *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(param_1 + 0x104);
  *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) & 0xfb;
  iVar5 = FUN_10109c4dc();
  if (iVar5 == 0) {
    uVar10 = 0;
  }
  else {
    iVar5 = FUN_10109c4f0(0);
    uVar10 = 0;
    if (iVar5 != 0) {
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      bVar4 = FUN_10109c508(0);
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfe | bVar4;
      FUN_10109c550(param_2,param_2 + 4,0,0);
      uVar10 = 1;
      *param_4 = 1;
    }
  }
  iVar5 = FUN_10109c574();
  if (iVar5 != 0) {
    iVar5 = FUN_10109c588();
    if (iVar5 == 0) {
      *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xfb;
      *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xfb;
    }
    else {
      uVar6 = FUN_10109c588();
      fVar11 = (float)NEON_fminnm((float)param_3,(float)uVar6);
      uVar6 = (uint)fVar11;
      if (uVar6 == 0) {
        *param_4 = 0;
      }
      else {
        uVar9 = 0;
        pbVar8 = (byte *)(param_2 + 8);
        do {
          puVar7 = (uint *)FUN_10109c59c(uVar9);
          uVar2 = *puVar7;
          if ((int)uVar2 >> 3 == 1) {
LAB_10005dd10:
            bVar3 = *pbVar8;
            *pbVar8 = bVar3 | 4;
            *(undefined8 *)(pbVar8 + -8) = *(undefined8 *)(puVar7 + 1);
            iVar5 = (int)*puVar7 >> 3;
            bVar4 = 0;
            if (iVar5 == -1) {
              bVar4 = (byte)*puVar7 & 1;
            }
            bVar1 = 1;
            if (iVar5 != 1) {
              bVar1 = bVar4;
            }
            *pbVar8 = bVar3 & 0xfe | 4 | bVar1;
            uVar10 = 1;
          }
          else if ((int)uVar2 >> 3 == -1) {
            if ((uVar2 & 1) != 0) goto LAB_10005dd10;
          }
          else if (0xf < (int)uVar2 && (uVar2 & 1) != 0) goto LAB_10005dd10;
          uVar9 = uVar9 + 1;
          pbVar8 = pbVar8 + 0xc;
        } while (uVar6 != uVar9);
        *param_4 = uVar6;
        if ((1 < uVar6) && ((*(byte *)(param_1 + 0x110) >> 2 & 1) == 0)) {
          *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_1 + 0xf8);
          *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xf0);
          *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_1 + 0xfc);
          *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(param_1 + 0x104);
        }
      }
    }
  }
  return uVar10;
}




void FUN_10005ddf0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  float local_44;
  undefined1 local_40 [8];
  float local_38;
  undefined8 local_30;
  float local_28;
  
  local_58 = *param_2;
  local_50 = 0.0;
  FUN_10011a108(&local_30,&local_58,1);
  local_58 = *param_2;
  local_50 = 1.0;
  FUN_10011a108(local_40,&local_58,1);
  FUN_1000320fc();
  lVar1 = FUN_100033428();
  if ((*(byte *)(lVar1 + 0x7c) >> 4 & 1) == 0) {
    FUN_1000320fc();
    FUN_100033428();
    FUN_10002e944();
  }
  fVar2 = local_40._0_4_ - (float)local_30;
  fVar3 = local_40._4_4_ - (float)((ulong)local_30 >> 0x20);
  local_38 = local_38 - local_28;
  local_58 = local_30;
  local_50 = local_28;
  local_44 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + local_38 * local_38);
  local_4c = CONCAT44(fVar3 / local_44,fVar2 / local_44);
  local_44 = local_38 / local_44;
  FUN_10005e308(param_1,&local_58);
  return;
}




void FUN_10005dec8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_50;
  float local_48;
  
  pfVar3 = (float *)(param_1 + 0xd8);
  fVar5 = *pfVar3;
  fVar6 = *(float *)(param_1 + 0xdc);
  fVar7 = *(float *)(param_1 + 0xe0);
  fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
  if (1.1920929e-07 <= fVar4) {
    fVar8 = 1.0 / fVar4;
    if (150.0 < fVar4) {
      *(float *)(param_1 + 0xd8) = fVar5 * fVar8 * 150.0;
      *(float *)(param_1 + 0xdc) = fVar6 * fVar8 * 150.0;
      *(float *)(param_1 + 0xe0) = fVar7 * fVar8 * 150.0;
    }
    fVar4 = fVar4 * 5.5;
    if (fVar4 <= 2.0) {
      fVar4 = 2.0;
    }
    fVar4 = -fVar4;
    fVar9 = fVar5 * fVar8 * fVar4;
    fVar6 = fVar6 * fVar8 * fVar4;
    fVar4 = fVar7 * fVar8 * fVar4;
    fVar5 = (float)FUN_1010a1ce0();
    if (fVar5 * SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar4 * fVar4) <=
        SQRT(*(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xd8) +
             *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xdc) +
             *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xe0))) {
      fVar5 = (float)FUN_1010a1ce0();
      *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) + fVar9 * fVar5;
      *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) + fVar6 * fVar5;
      *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) + fVar4 * fVar5;
      FUN_1000320fc();
      lVar1 = FUN_100033428();
      fVar4 = (float)FUN_1010a1ce0();
      local_50 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x414) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20) * fVar4,
                          (float)*(undefined8 *)(lVar1 + 0x414) +
                          (float)*(undefined8 *)(param_1 + 0xd8) * fVar4);
      local_48 = *(float *)(lVar1 + 0x41c) + fVar4 * *(float *)(param_1 + 0xe0);
      FUN_1000e8ef4(&local_50);
      FUN_1000320fc();
      uVar2 = FUN_100033428();
      FUN_10002e63c(uVar2,&local_50,0);
    }
    else {
      pfVar3[0] = 0.0;
      pfVar3[1] = 0.0;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined1 *)(param_1 + 0xe4) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xe4) = 0;
    pfVar3[0] = 0.0;
    pfVar3[1] = 0.0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  return;
}




void FUN_10005e074(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010005e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10005e0b8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_1010a17e4();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  uVar1 = FUN_1010a0298(param_1,DAT_10184dff0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  FUN_10004e758(uVar1,1);
  return;
}




void FUN_10005e0fc(long param_1)

{
  FUN_10004eaa8(*(undefined8 *)(param_1 + 0xa8));
  return;
}




void FUN_10005e104(long param_1)

{
  FUN_10004e598(*(undefined8 *)(param_1 + 0xa8));
  return;
}




undefined8 FUN_10005e10c(undefined8 param_1,float *param_2,float *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_54;
  undefined8 local_50;
  undefined4 local_48;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  FUN_1010d0304(0,&local_40,&DAT_1013cd830);
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = local_40 * param_2[3] + fVar4 * fStack_3c + fVar5 * local_38;
  if (1e-06 <= ABS(fVar6)) {
    fVar8 = param_2[1];
    fVar7 = param_2[2];
    fVar6 = -(*param_2 * local_40 + fStack_3c * fVar8 + local_38 * fVar7 + local_34) / fVar6;
    *param_3 = *param_2 + param_2[3] * fVar6;
    param_3[1] = fVar8 + fVar4 * fVar6;
    param_3[2] = fVar7 + fVar5 * fVar6;
    local_50 = NEON_fmov(0x3fc00000,4);
    local_48 = 0x3fc00000;
    local_54 = 0.0;
    if (param_4 != 0) {
      iVar1 = FUN_10054e07c(0,param_3,&local_54,0,&local_50);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_1000320fc(0);
      FUN_100033428();
      puVar3 = (undefined8 *)FUN_10002e5ac();
      fVar6 = *(float *)(puVar3 + 1);
      fVar4 = (float)*puVar3;
      fVar5 = (float)((ulong)*puVar3 >> 0x20);
      fVar7 = -(fVar6 * local_54 * 0.0) - (local_54 * fVar5 * 1.0 + local_54 * fVar4 * 0.0);
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar5 * fVar7,
                    (float)*(undefined8 *)param_3 - fVar4 * fVar7);
      param_3[2] = param_3[2] - fVar6 * fVar7;
      FUN_10054e07c(0,param_3,param_3 + 1,0,&local_50);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_10005e278(long param_1,int param_2)

{
  undefined8 uVar1;
  
  FUN_1000320fc();
  uVar1 = FUN_100033428();
  if (param_2 != 0) {
    FUN_10002e944();
    *(undefined8 *)(param_1 + 0xcc) = DAT_101dc1cb8;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    FUN_10002e69c(uVar1,(undefined8 *)(param_1 + 0xcc));
    FUN_10002e6ac(*(undefined4 *)(param_1 + 0xd4),uVar1);
    return;
  }
  return;
}




void FUN_10005e2ec(long param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0xec) = param_2;
  *(undefined4 *)(param_1 + 0xe8) = param_3;
  FUN_10005d82c(param_1 + 0x28,1,0,0);
  return;
}




void FUN_10005e308(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 local_d0;
  float local_c8;
  undefined1 local_c0 [8];
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  undefined1 local_98 [8];
  float local_90;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  
  *(undefined1 *)(param_1 + 0xe4) = 0;
  if (*(char *)(param_1 + 200) != '\0') {
    FUN_10005e10c(param_1,param_2,&local_70,1);
    if ((*(char *)(param_1 + 0xe5) == '\0') ||
       (fVar3 = local_70 - *(float *)(param_1 + 0xb0),
       fVar4 = fStack_6c - (float)*(undefined8 *)(param_1 + 0xb4),
       fVar5 = fStack_68 - (float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20),
       0.65 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5))) {
      *(undefined1 *)(param_1 + 0xc9) = 1;
      FUN_1000320fc();
      FUN_100033428();
      lVar1 = FUN_10002e51c();
      uVar6 = *(undefined8 *)(lVar1 + 4);
      fVar5 = *(float *)(lVar1 + 0xc);
      uVar8 = *(undefined8 *)(param_1 + 0xb0);
      fVar7 = *(float *)(param_1 + 0xb8);
      local_78 = -1.0;
      fStack_74 = -1.0;
      FUN_100641464(&fStack_74,&local_78);
      local_b0 = CONCAT44(local_78 * 0.5,fStack_74 * 0.5);
      local_a8 = 0.0;
      FUN_10011a108(&local_88,&local_b0,0);
      local_b0 = CONCAT44(local_78 * 0.5,fStack_74 * 0.5);
      local_a8 = 1.0;
      uVar2 = FUN_10011a108(local_98,&local_b0,0);
      fVar3 = local_98._0_4_ - (float)local_88;
      fVar4 = local_98._4_4_ - (float)((ulong)local_88 >> 0x20);
      local_90 = local_90 - local_80;
      local_b0 = local_88;
      local_a8 = local_80;
      local_9c = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + local_90 * local_90);
      local_a4 = CONCAT44(fVar4 / local_9c,fVar3 / local_9c);
      local_9c = local_90 / local_9c;
      FUN_10005e10c(uVar2,&local_b0,local_c0,1);
      FUN_1000320fc();
      FUN_100033428();
      lVar1 = FUN_10002e51c();
      local_d0 = CONCAT44((((float)((ulong)uVar6 >> 0x20) - fStack_6c) +
                          (float)((ulong)uVar8 >> 0x20) + local_c0._4_4_) -
                          (float)((ulong)*(undefined8 *)(lVar1 + 4) >> 0x20),
                          (((float)uVar6 - local_70) + (float)uVar8 + local_c0._0_4_) -
                          (float)*(undefined8 *)(lVar1 + 4));
      local_c8 = ((fVar5 - fStack_68) + fVar7 + local_b8) - *(float *)(lVar1 + 0xc);
      FUN_1000e8ef4(&local_d0);
      FUN_1000320fc();
      lVar1 = FUN_100033428();
      fVar4 = (float)local_d0 - *(float *)(lVar1 + 0x414);
      fVar5 = local_c8 - *(float *)(lVar1 + 0x41c);
      fVar3 = (float)FUN_1010a1ce0();
      if (fVar3 <= 0.016666668) {
        fVar3 = 0.016666668;
      }
      *(float *)(param_1 + 0xd8) = fVar4 / fVar3;
      *(float *)(param_1 + 0xe0) = fVar5 / fVar3;
      *(undefined4 *)(param_1 + 0xdc) = 0;
      FUN_1000320fc();
      uVar2 = FUN_100033428();
      FUN_10002e63c(uVar2,&local_d0,0);
    }
    return;
  }
  *(undefined1 *)(param_1 + 200) = 1;
  FUN_10005e10c(param_1,param_2,param_1 + 0xb0,1);
  return;
}




void FUN_10005e56c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




undefined8 * thunk_FUN_10005d624(undefined8 *param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10144d4e8;
  puVar4 = (ushort *)(param_1 + 5);
  *puVar4 = *puVar4 & 0x8000 | 0x3ff;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[0x14] = param_1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = DAT_101dc1cb8;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined1 *)((long)param_1 + 0xe5) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  lVar2 = 0xf0;
  do {
    puVar3 = (undefined8 *)((long)param_1 + lVar2);
    *puVar3 = 0;
    *(byte *)(puVar3 + 1) = *(byte *)(puVar3 + 1) & 0xf8;
    lVar2 = lVar2 + 0xc;
  } while ((undefined8 *)((long)puVar3 + 0xc) != param_1 + 0x21);
  lVar2 = 0x108;
  do {
    puVar3 = (undefined8 *)((long)param_1 + lVar2);
    *puVar3 = 0;
    *(byte *)(puVar3 + 1) = *(byte *)(puVar3 + 1) & 0xf8;
    lVar2 = lVar2 + 0xc;
  } while ((undefined8 *)((long)puVar3 + 0xc) != param_1 + 0x24);
  uVar1 = *(ushort *)(param_1 + 5);
  puVar3 = param_1 + ((ulong)(uVar1 >> 10) & 0x1f) * 7 + 6;
  *(undefined4 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3 = param_1 + (ulong)(uVar1 + 0x400 >> 10 & 0x1f) * 7 + 6;
  *(undefined4 *)puVar3 = 1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = FUN_10005d794;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *(ushort *)(param_1 + 5) =
       ((ushort)(uVar1 + 0x400) & 0x7c00 | uVar1 & 0x83ff) + 0x400 & 0x7c00 | uVar1 & 0x83ff;
  FUN_10005d7a8(puVar4,0,1);
  FUN_10005d82c(puVar4,0,0,0);
  return param_1;
}




void FUN_10005e584(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010005e58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10005e590(void)

{
  if ((DAT_10184de68 & 1) == 0) {
    DAT_10184de60 = DAT_101872e38;
    DAT_10184de68 = 1;
  }
  return;
}




void FUN_10005e5bc(void)

{
  if ((DAT_10184dff8 & 1) == 0) {
    DAT_10184dff0 = DAT_101872e38;
    DAT_10184dff8 = 1;
  }
  return;
}




void FUN_10005e5e8(long param_1)

{
  long lVar1;
  
  DAT_10184e050 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e050 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e050 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10005e644;
  *(code **)(lVar1 + 0xb8) = FUN_10005e69c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e050;
  *(undefined4 *)(lVar1 + 0xa8) = 0x820;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




undefined8 * FUN_10005e644(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10144d518;
  param_1[5] = &PTR_FUN_10144d548;
  FUN_1004736c4(param_1 + 7);
  *(undefined4 *)(param_1 + 0x103) = 0xbf800000;
  return param_1;
}




void FUN_10005e69c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010005e6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10005e6a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d518;
  param_1[5] = &PTR_FUN_10144d548;
  if ((undefined8 *)param_1[0xfe] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xfe])();
  }
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10005e6fc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144d518;
  param_1[5] = &PTR_FUN_10144d548;
  if ((undefined8 *)param_1[0xfe] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xfe])();
  }
  FUN_1010a1da8(param_1 + 5);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10005e754(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_10144d518;
  *param_1 = &PTR_FUN_10144d548;
  if ((undefined8 *)param_1[0xf9] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xf9])();
  }
  FUN_1010a1da8(param_1);
  FUN_1010a0064(param_1 + -5);
  return;
}




void FUN_10005e7a8(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-5] = &PTR_FUN_10144d518;
  *param_1 = &PTR_FUN_10144d548;
  if ((undefined8 *)param_1[0xf9] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xf9])();
  }
  FUN_1010a1da8(param_1);
  pvVar1 = (void *)FUN_1010a0064(param_1 + -5);
  operator_delete(pvVar1);
  return;
}




long FUN_10005e800(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10005e808(long param_1)

{
  return param_1 + -0x28;
}




void FUN_10005e810(void)

{
  if ((DAT_10184e058 & 1) == 0) {
    DAT_10184e050 = DAT_101872e38;
    DAT_10184e058 = 1;
  }
  return;
}




void FUN_10005e83c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  uVar1 = FUN_1010a0298(param_1,DAT_10184dee0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  FUN_10003caac(uVar1,0,0);
  return;
}




void FUN_10005e874(long param_1)

{
  long lVar1;
  
  DAT_10184e060 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e060 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e060 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10005eb54;
  *(code **)(lVar1 + 0xb8) = FUN_10005eb6c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e060;
  *(undefined4 *)(lVar1 + 0xa8) = 0x40;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0990(param_1,0x8b950a0d,FUN_10005e918,0);
  FUN_1010a0990(param_1,0x80a40995,FUN_10005e948,0);
  return;
}




void FUN_10005e918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000010;
  
  FUN_10005e998(param_1,in_stack_00000000,param_3,in_stack_00000010);
  return;
}




void FUN_10005e948(undefined8 param_1)

{
  int iVar1;
  undefined8 in_stack_00000000;
  int in_stack_00000010;
  
  iVar1 = FUN_100060abc();
  if (in_stack_00000010 == 0 && iVar1 != 0) {
    FUN_10005ea0c(param_1,in_stack_00000000);
  }
  return;
}




void FUN_10005e998(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_100060abc();
  iVar2 = FUN_100316180(3);
  iVar3 = 1;
  if (iVar2 != 0) {
    iVar3 = 2;
  }
  if ((iVar3 != param_4) && ((param_4 != 0 || (iVar1 == 1)))) {
    return;
  }
  FUN_10005ea0c(param_1,param_2);
  return;
}




void FUN_10005ea0c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  for (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x18); lVar4 != 0;
      lVar4 = *(long *)(lVar4 + 0x20)) {
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184db30) goto LAB_10005ea68;
  }
  if (((*(ushort *)(*(long *)(param_1 + 0x30) + 0x2f8) & 0x2004) == 0) &&
     (lVar4 = FUN_1000e8ca8(param_2), lVar4 != 0)) {
    if ((*(byte *)(lVar4 + 0x2f7) >> 3 & 1) == 0) {
      FUN_10005a6a0(*(undefined8 *)(param_1 + 0x28),lVar4,1,0);
      return;
    }
    uVar3 = FUN_100126a08();
    if ((uVar3 & 1) == 0) {
      FUN_10005a48c(*(undefined8 *)(param_1 + 0x28),lVar4);
      return;
    }
  }
LAB_10005ea68:
  if ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2f8) >> 1 & 1) == 0) {
    uVar2 = FUN_1003a3e24();
    iVar1 = FUN_1000e8dc8(param_2,uVar2,auStack_40);
    if (iVar1 != 0) {
      FUN_10003cbfc(*(undefined8 *)(param_1 + 0x38),auStack_40);
      FUN_10003cc58(*(undefined8 *)(param_1 + 0x38));
      lVar4 = *(long *)(param_1 + 0x28);
      FUN_10005ecec(0x3f800000,auStack_60,auStack_40,0);
      FUN_10005f394(lVar4 + 0x260,auStack_60);
    }
  }
  return;
}




void FUN_10005eb40(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10005eb54(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10144d578;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  return;
}




void FUN_10005eb6c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010005eb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10005eb78(void)

{
  if ((DAT_10184dee8 & 1) == 0) {
    DAT_10184dee0 = DAT_101872e38;
    DAT_10184dee8 = 1;
  }
  return;
}




void FUN_10005eba4(void)

{
  if ((DAT_10184e068 & 1) == 0) {
    DAT_10184e060 = DAT_101872e38;
    DAT_10184e068 = 1;
  }
  return;
}




void FUN_10005ebd0(void)

{
  if ((DAT_10184db38 & 1) == 0) {
    DAT_10184db30 = DAT_101872e38;
    DAT_10184db38 = 1;
  }
  return;
}




void FUN_10005ebfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d5a8;
  param_1[1] = 0;
  return;
}




undefined8 * FUN_10005ec0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d5a8;
  if (param_1[1] != 0) {
    FUN_1000c0898();
  }
  return param_1;
}




undefined8 * FUN_10005ec44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d5a8;
  if (param_1[1] != 0) {
    FUN_1000c0898();
  }
  return param_1;
}




void FUN_10005ec7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d5a8;
  if (param_1[1] != 0) {
    FUN_1000c0898();
  }
  operator_delete(param_1);
  return;
}




void FUN_10005ecb4(long param_1,long param_2)

{
  if (*(long *)(param_1 + 8) != param_2) {
    *(long *)(param_1 + 8) = param_2;
    FUN_1000c0874(param_2,param_1);
    return;
  }
  return;
}




void FUN_10005ecd8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_10005ece0(void)

{
  return;
}




void FUN_10005ece4(void)

{
  return;
}




void FUN_10005ece8(void)

{
  return;
}




void FUN_10005ecec(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = &PTR_FUN_10144d5e8;
  uVar1 = *param_3;
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((long)param_2 + 0xc) = uVar1;
  *(undefined4 *)(param_2 + 3) = param_1;
  *(undefined1 *)((long)param_2 + 0x1c) = param_4;
  return;
}




void FUN_10005ed18(long param_1)

{
  long lVar1;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184da98) {
        FUN_10005a2bc(*(undefined4 *)(param_1 + 0x18),lVar1,param_1 + 0xc,
                      *(undefined1 *)(param_1 + 0x1c),0);
        return;
      }
    }
  }
  return;
}




void FUN_10005ed84(void)

{
  FUN_100057f34();
  thunk_FUN_10005a448();
  return;
}




void FUN_10005ed98(void)

{
  FUN_100057f34();
  FUN_10005ba9c();
  return;
}




void FUN_10005edac(void)

{
  FUN_100057f34();
  FUN_10005bce8();
  return;
}




void FUN_10005edc0(void)

{
  FUN_100057f34();
  FUN_10005baf4();
  return;
}




void FUN_10005edd4(undefined8 *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 4;
  *param_1 = &PTR____cxa_pure_virtual_10144d600;
  if (2 < param_2) {
    iVar1 = 0x1e;
  }
  *(int *)(param_1 + 1) = iVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(uint *)(param_1 + 2) = param_2;
  return;
}




void FUN_10005edfc(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 8;
  if (param_2 != 1) {
    uVar2 = 0x1e;
  }
  uVar1 = 7;
  if (param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = &PTR____cxa_pure_virtual_10144d600;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 1;
  *(int *)(param_1 + 2) = param_2;
  return;
}




void FUN_10005ee34(undefined8 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 9;
  if (5 < param_2) {
    iVar1 = 0x1e;
  }
  *param_1 = &PTR____cxa_pure_virtual_10144d600;
  *(int *)(param_1 + 1) = iVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 2;
  *(byte *)(param_1 + 2) = param_2;
  return;
}




void FUN_10005ee64(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 2) {
    uVar2 = FUN_100057f34();
    FUN_10005b750(uVar2,*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x14));
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      uVar2 = FUN_100057f34();
      FUN_10005b43c(uVar2,*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x14));
      return;
    }
    return;
  }
  uVar2 = FUN_100057f34();
  FUN_10005ba84(uVar2,*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x14));
  return;
}




void FUN_10005eee0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 2) {
    uVar2 = FUN_100057f34();
    FUN_10005b93c(uVar2,*(undefined1 *)(param_1 + 0x10));
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      uVar2 = FUN_100057f34();
      FUN_10005b56c(uVar2,*(undefined4 *)(param_1 + 0x10));
      return;
    }
    return;
  }
  uVar2 = FUN_100057f34();
  FUN_10005ba90(uVar2,*(undefined4 *)(param_1 + 0x10));
  return;
}




void FUN_10005ef50(void)

{
  FUN_100057f34();
  FUN_10005be0c();
  return;
}




void FUN_10005ef64(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x11;
  if (param_2 == 1) {
    uVar2 = 0x12;
  }
  *param_1 = &PTR_FUN_10144d618;
  uVar1 = 0x13;
  if (param_2 != 2) {
    uVar1 = uVar2;
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(int *)((long)param_1 + 0xc) = param_2;
  return;
}




void FUN_10005ef90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100057f34();
  FUN_10005b624(uVar1,*(undefined4 *)(param_1 + 0xc));
  return;
}




void FUN_10005efb4(void)

{
  FUN_100036688();
  FUN_10003a0c4();
  return;
}




void FUN_10005efc8(void)

{
  FUN_100057f34();
  FUN_10005be58();
  return;
}




void FUN_10005efdc(void)

{
  FUN_100057f34();
  FUN_10005be88();
  return;
}




void FUN_10005eff0(void)

{
  FUN_100036688();
  FUN_100039e00();
  return;
}




void FUN_10005f004(void)

{
  FUN_100036688();
  FUN_100039ff4();
  return;
}




void FUN_10005f018(void)

{
  FUN_100036688();
  FUN_10003a05c();
  return;
}




void FUN_10005f02c(void)

{
  int iVar1;
  
  iVar1 = FUN_100036694();
  if (iVar1 != 0) {
    FUN_100036688();
    FUN_10003a0cc();
    return;
  }
  return;
}




void FUN_10005f050(void)

{
  int iVar1;
  
  iVar1 = FUN_100036694();
  if (iVar1 != 0) {
    FUN_100036688();
    FUN_10003a1c4();
    return;
  }
  return;
}




void FUN_10005f074(void)

{
  int iVar1;
  
  iVar1 = FUN_100036694();
  if (iVar1 != 0) {
    FUN_100036688();
    FUN_10003a1f8();
    return;
  }
  return;
}




void FUN_10005f098(void)

{
  FUN_100036688();
  FUN_10003a31c();
  return;
}




void FUN_10005f0ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100036688();
  FUN_10003a280(uVar1,*(undefined4 *)(param_1 + 0xc));
  return;
}




void FUN_10005f0d0(void)

{
  FUN_100036688();
  FUN_10003a2c8();
  return;
}




void FUN_10005f0e4(long param_1)

{
  long lVar1;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    FUN_100466398(lVar1,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




void FUN_10005f11c(void)

{
  long lVar1;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    FUN_10046647c();
    return;
  }
  return;
}




void FUN_10005f140(void)

{
  if ((DAT_10184daa0 & 1) == 0) {
    DAT_10184da98 = DAT_101872e38;
    DAT_10184daa0 = 1;
  }
  return;
}




uint FUN_10005f16c(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  
  uVar3 = 0;
  do {
    if (*(char *)(param_1 + 0x98 + uVar3) == '\0') {
      uVar4 = 0;
      iVar5 = 1;
      *(undefined1 *)(param_1 + 0x98 + uVar3) = 1;
      lVar1 = param_1 + 0x98 + uVar3 * 2;
      uVar6 = (uint)*(ushort *)(lVar1 + -0x20);
      if ((uVar6 + 1 & 0x10000) == 0) {
        iVar5 = uVar6 + 1;
      }
      *(short *)(lVar1 + -0x20) = (short)iVar5;
      pbVar7 = (byte *)(param_1 + (uVar3 >> 3));
      do {
        uVar8 = uVar4 >> 3 & 0x1fffffff;
        uVar6 = 1 << (ulong)((uint)uVar4 & 7);
        bVar2 = (byte)(1 << (uVar3 & 7));
        if ((uVar6 & *(byte *)(param_2 + uVar8)) != 0) {
          *pbVar7 = *pbVar7 | bVar2;
        }
        if ((uVar6 & *(byte *)(param_2 + uVar8 + 4)) != 0) {
          pbVar7[0x3c] = pbVar7[0x3c] | bVar2;
        }
        uVar4 = uVar4 + 1;
        pbVar7 = pbVar7 + 2;
      } while (uVar4 != 0x1e);
      uVar6 = iVar5 << 0x10;
      goto LAB_10005f21c;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x10);
  uVar3 = 0;
  uVar6 = 0;
LAB_10005f21c:
  return uVar6 | (uint)uVar3;
}




void FUN_10005f224(long param_1,ushort *param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((param_2[1] != 0) && (*(char *)(param_1 + (ulong)*param_2 + 0x98) != '\0')) &&
     (*(ushort *)(param_1 + (ulong)*param_2 * 2 + 0x78) == param_2[1])) {
    uVar3 = 0;
    do {
      uVar4 = uVar3 >> 3 & 0x1fffffff;
      uVar2 = 1 << (ulong)((uint)uVar3 & 7);
      if ((uVar2 & *(byte *)(param_3 + uVar4)) != 0) {
        uVar5 = (ulong)(*param_2 >> 3);
        *(byte *)(param_1 + uVar5) = *(byte *)(param_1 + uVar5) | (byte)(1 << ((ulong)*param_2 & 7))
        ;
      }
      if ((uVar2 & *(byte *)(param_4 + uVar4)) != 0) {
        uVar5 = (ulong)(*param_2 >> 3);
        *(byte *)(param_1 + uVar5) =
             *(byte *)(param_1 + uVar5) & ((byte)(1 << ((ulong)*param_2 & 7)) ^ 0xff);
      }
      if ((uVar2 & *(byte *)(param_3 + uVar4 + 4)) != 0) {
        lVar1 = param_1 + (ulong)(*param_2 >> 3);
        *(byte *)(lVar1 + 0x3c) = *(byte *)(lVar1 + 0x3c) | (byte)(1 << ((ulong)*param_2 & 7));
      }
      if ((uVar2 & *(byte *)(param_4 + uVar4 + 4)) != 0) {
        lVar1 = param_1 + (ulong)(*param_2 >> 3);
        *(byte *)(lVar1 + 0x3c) =
             *(byte *)(lVar1 + 0x3c) & ((byte)(1 << ((ulong)*param_2 & 7)) ^ 0xff);
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 2;
    } while (uVar3 != 0x1e);
  }
  return;
}




void FUN_10005f31c(long param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  long lVar4;
  
  if (((param_2 != 0) &&
      (pcVar3 = (char *)(param_1 + (ulong)(ushort)param_2 + 0x98), *pcVar3 != '\0')) &&
     ((uint)*(ushort *)(param_1 + ((ulong)param_2 & 0xffff) * 2 + 0x78) == param_2 >> 0x10)) {
    lVar4 = 0;
    bVar2 = ~(byte)(1 << ((ulong)param_2 & 7));
    do {
      pbVar1 = (byte *)(param_1 + (((ulong)param_2 & 0xfff8) >> 3) + lVar4);
      *pbVar1 = *pbVar1 & bVar2;
      pbVar1[0x3c] = pbVar1[0x3c] & bVar2;
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0x3c);
    *pcVar3 = '\0';
  }
  return;
}




undefined8 FUN_10005f394(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + (ulong)*(uint *)(param_2 + 1) * 2) == '\0') ||
     (*(char *)(param_1 + (ulong)*(uint *)(param_2 + 1) * 2 + 0x3c) != '\0')) {
    uVar1 = 0;
  }
  else {
    (**(code **)*param_2)(param_2);
    uVar1 = 1;
  }
  return uVar1;
}




undefined8 FUN_10005f3dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_10010187c();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  FUN_10010189c();
  return param_1;
}




void FUN_10005f40c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_10005f414(undefined8 param_1)

{
  FUN_10010189c();
  FUN_1001018b4(param_1,0);
  return;
}




void FUN_10005f43c(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [56];
  
  iVar2 = FUN_1001018d0();
  if (iVar2 == 1) {
    uVar3 = FUN_1001018e0(param_1);
    FUN_1000111b0(auStack_58,uVar3);
  }
  else {
    uVar1 = FUN_1001018d8(param_1);
    FUN_1003d41b0(auStack_58,uVar1);
  }
  FUN_100345498(auStack_58);
  return;
}




void FUN_10005f4a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [56];
  
  iVar2 = FUN_1001018d0(param_2);
  if (iVar2 == 1) {
    uVar3 = FUN_1001018e0(param_2);
    FUN_1000111f4(auStack_58,param_1,uVar3);
  }
  else {
    uVar1 = FUN_1001018d8(param_2);
    FUN_1003d41e4(auStack_58,param_1,uVar1);
  }
  FUN_100345498(auStack_58);
  return;
}




undefined8
FUN_10005f514(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = FUN_10005a95c(*(undefined8 *)(param_1 + 0x10));
  FUN_10010189c(param_1);
  if (param_4 == 0) {
    uVar6 = FUN_100490234(uVar5);
    uVar3 = FUN_10046e694(uVar6,param_2);
    uVar4 = FUN_10046e774(uVar6,param_2);
    FUN_1001018bc(param_1,param_2);
  }
  else {
    uVar6 = FUN_1003a7540();
    uVar3 = FUN_100461470(uVar6,param_2);
    uVar4 = FUN_100461870(uVar6,param_2);
    FUN_1001018b4(param_1,param_2);
    FUN_1001018c8(param_1,param_3);
  }
  bVar2 = FUN_100060a70();
  uVar1 = 2;
  if ((bVar2 & uVar3 < 2) == 0) {
    uVar1 = uVar3;
  }
  switch(uVar1) {
  case 0:
    lVar8 = FUN_1000596b0(*(undefined8 *)(param_1 + 0x10));
    if ((lVar8 == 0) || ((*(uint *)(lVar8 + 0x2f4) & uVar4) == 0)) {
      FUN_1000bd9b4("HUD_NOTICE_CANTACTIVATE_PRESELECT");
      return 0;
    }
    goto LAB_10005f67c;
  case 1:
    lVar8 = FUN_1000596b0(*(undefined8 *)(param_1 + 0x10));
    if ((lVar8 == 0) || ((*(uint *)(lVar8 + 0x2f4) & uVar4) == 0)) {
      uVar7 = FUN_100126b24();
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 0x218))
                        (*(long *)(param_1 + 0x10) + 0x218,uVar5,param_1,param_5);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
LAB_10005f628:
      FUN_10005f6e4(param_1,param_5);
      return 1;
    }
LAB_10005f67c:
    FUN_10005f4a0(*(undefined4 *)(lVar8 + 0x260),param_1);
    break;
  case 2:
  case 3:
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 0x218))
                      (*(long *)(param_1 + 0x10) + 0x218,uVar5,param_1,param_5);
    if ((uVar7 & 1) != 0) goto LAB_10005f628;
    break;
  case 4:
    FUN_10005f43c(param_1);
  }
  return 0;
}




void FUN_10005f6e4(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_100060a70();
  if ((iVar1 != 0) && ((param_2 & 1) == 0)) {
    iVar1 = FUN_1001018d0(param_1);
    if (iVar1 == 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = FUN_1001018e0(param_1);
      FUN_10003b5e0(uVar3,uVar2);
      return;
    }
    if (iVar1 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = FUN_1001018e8(param_1);
      FUN_10003b5d0(uVar3,uVar2);
      return;
    }
  }
  return;
}




undefined8 FUN_10005f764(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_10005a95c(*(undefined8 *)(param_1 + 0x10));
  iVar1 = FUN_1001018d0(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_1003a7540(uVar2);
    uVar3 = FUN_1001018d8(param_1);
    uVar2 = FUN_1003c1b18(uVar2,uVar3);
    return uVar2;
  }
  iVar1 = FUN_1001018d0(param_1);
  if (iVar1 == 1) {
    uVar2 = FUN_100490234(uVar2);
    uVar3 = FUN_1001018e0(param_1);
    uVar2 = FUN_10046e6c4(uVar2,uVar3);
    return uVar2;
  }
  return 0;
}




void FUN_10005f7fc(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = uVar1;
  return;
}




void FUN_10005f824(void)

{
  return;
}




void FUN_10005f828(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_1003a3524(param_2);
  if (lVar2 != 0) {
    plVar3 = (long *)*param_1;
    if (plVar3 != (long *)0x0) {
      if ((int)param_1[1] == (int)plVar3[1]) {
        (**(code **)(*plVar3 + 0x10))();
        plVar3 = (long *)FUN_1003a3524();
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x40))();
        }
      }
      else {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
      }
    }
    plVar3 = (long *)FUN_1003a3524(param_2);
    (**(code **)(*plVar3 + 0x38))();
    iVar1 = *(int *)(param_2 + 0x30);
    *param_1 = param_2 + 0x28;
    *(int *)(param_1 + 1) = iVar1;
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      if ((int)param_1[3] == *(int *)(lVar2 + 8)) {
        if ((lVar2 != param_2 + 0x28) || (iVar1 != (int)param_1[3])) {
          FUN_10005f918(param_1,0);
          return;
        }
      }
      else {
        param_1[2] = 0;
        *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
      }
    }
  }
  return;
}




void FUN_10005f918(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 == (long *)0x0) goto LAB_10005f998;
  }
  else {
    plVar2 = (long *)(param_2 + 0x28);
    if (*(long **)(param_1 + 0x10) != plVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x30)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x18) == (int)plVar2[1]) {
    (**(code **)(*plVar2 + 0x10))();
    plVar2 = (long *)FUN_1003a3524();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x50))();
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
LAB_10005f998:
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}




void FUN_10005f9b8(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_1003a3524(param_2);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_1 + 0x18) == (int)plVar3[1]) {
        (**(code **)(*plVar3 + 0x10))();
        plVar3 = (long *)FUN_1003a3524();
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x50))();
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
      }
    }
    plVar3 = (long *)FUN_1003a3524(param_2);
    (**(code **)(*plVar3 + 0x48))();
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(param_1 + 0x10) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  return;
}




void FUN_10005fa58(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_1003a3524(param_2);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_1 + 0x28) == (int)plVar3[1]) {
        (**(code **)(*plVar3 + 0x10))();
        plVar3 = (long *)FUN_1003a3524();
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x60))();
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = DAT_101dc0b88;
      }
    }
    plVar3 = (long *)FUN_1003a3524(param_2);
    (**(code **)(*plVar3 + 0x58))();
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(param_1 + 0x20) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  return;
}




void FUN_10005faf8(long *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) goto LAB_10005fb70;
  }
  else {
    plVar2 = (long *)(param_2 + 0x28);
    if ((long *)*param_1 != plVar2) {
      return;
    }
    if ((int)param_1[1] != *(int *)(param_2 + 0x30)) {
      return;
    }
  }
  if ((int)param_1[1] == (int)plVar2[1]) {
    (**(code **)(*plVar2 + 0x10))();
    plVar2 = (long *)FUN_1003a3524();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x40))();
    }
  }
  else {
    *param_1 = 0;
  }
LAB_10005fb70:
  uVar1 = DAT_101dc0b88;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}




void FUN_10005fb90(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_10005fc10;
  }
  else {
    plVar2 = (long *)(param_2 + 0x28);
    if (*(long **)(param_1 + 0x20) != plVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x30)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x28) == (int)plVar2[1]) {
    (**(code **)(*plVar2 + 0x10))();
    plVar2 = (long *)FUN_1003a3524();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x60))();
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
LAB_10005fc10:
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_10005fc30(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)FUN_1003a3524();
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x40))();
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
    }
  }
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[3] == (int)plVar1[1]) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)FUN_1003a3524();
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010005fccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x50))();
        return;
      }
    }
    else {
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10005fcf0(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)FUN_1003a3524();
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
    }
  }
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[3] == (int)plVar1[1]) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)FUN_1003a3524();
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010005fd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x48))();
        return;
      }
    }
    else {
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10005fdb0(void)

{
  operator_new(0x28);
  DAT_101dc3888 = FUN_10005fe10();
  return;
}




void FUN_10005fdd4(void)

{
  void *pvVar1;
  
  if (DAT_101dc3888 != 0) {
    pvVar1 = (void *)FUN_10005feb4();
    operator_delete(pvVar1);
  }
  DAT_101dc3888 = 0;
  return;
}




undefined8 FUN_10005fe04(void)

{
  return DAT_101dc3888;
}




undefined8 * FUN_10005fe10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1004e3004(param_1 + 3);
  param_1[4] = 0x4100000000000000;
  uVar1 = FUN_1000bdb98();
  FUN_1004e18bc(uVar1,param_1,0x2e4f13dd,FUN_10005fe68,0);
  return param_1;
}




void FUN_10005fe68(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    FUN_1004e3004(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + 2;
  return;
}




long FUN_10005feb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1000bdb98();
  FUN_1004e1b58(uVar1,param_1);
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}




void FUN_10005fef0(long param_1)

{
  uint64_t uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = _mach_absolute_time();
  fVar3 = *(float *)(param_1 + 0x24);
  if ((double)fVar3 < (double)((uVar1 - *(long *)(param_1 + 0x18)) * DAT_101d91638) * 1e-09) {
    if (*(uint *)(param_1 + 0x20) < 4) {
      fVar2 = (float)FUN_1010a1cd4();
      fVar3 = fVar3 + fVar2 * -0.2;
      if (fVar3 <= 8.0) {
        fVar3 = 8.0;
      }
    }
    else {
      fVar3 = (float)NEON_fminnm(fVar3 + 6.0,0x42200000);
    }
    *(float *)(param_1 + 0x24) = fVar3;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}




void FUN_10005ff94(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_10005ff9c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_148 [96];
  long alStack_e8 [16];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (*param_1 == 0) goto LAB_1000601d8;
  iVar7 = (int)param_2;
  if (iVar7 == -1) {
    bVar2 = 0;
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_100345d90(param_2);
    if (lVar9 == 0) {
      bVar2 = 0;
    }
    else {
      iVar3 = FUN_100345bbc(*param_1);
      iVar4 = FUN_100345bbc(lVar9);
      if (iVar3 != iVar4) goto LAB_1000601d8;
      bVar2 = 1;
    }
  }
  puVar1 = &DAT_1013cd800;
  if (param_4 != (undefined8 *)0x0) {
    puVar1 = param_4;
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != 0) {
    if (*(int *)param_1[2] == iVar7) goto LAB_1000601d8;
    uVar10 = 1;
    do {
      uVar8 = uVar10;
      if (uVar5 == uVar8) break;
      uVar10 = uVar8 + 1;
    } while (((int *)param_1[2])[uVar8] != iVar7);
    if (uVar8 < uVar5) goto LAB_1000601d8;
  }
  if ((bool)(bVar2 & iVar7 == (int)param_3)) {
    thunk_FUN_10045cc04(auStack_148);
    FUN_1003a25f4(auStack_148,1,0,0,lVar9);
    FUN_1003a2644(auStack_148,1);
    FUN_1003c3608(auStack_148,1);
    uVar5 = FUN_1003a6ce4(auStack_148,alStack_e8,0x10,0);
    if (uVar5 != 0) {
      uVar10 = (ulong)uVar5;
      plVar6 = alStack_e8;
      do {
        FUN_100466550(*plVar6,param_2,*(undefined4 *)(*plVar6 + 0x260),param_5,param_6);
        uVar10 = uVar10 - 1;
        plVar6 = plVar6 + 1;
      } while (uVar10 != 0);
    }
  }
  else {
    uVar10 = FUN_10034cb58();
    if ((int)param_3 == -1) {
      if (((uVar10 & 1) != 0) ||
         (uVar10 = FUN_100060268(*param_1,lVar9,puVar1,param_5), (uVar10 & 1) != 0))
      goto LAB_1000601d8;
    }
    else {
      if (((uVar10 & 1) != 0) || (lVar9 = FUN_100345d90(param_3), lVar9 == 0)) goto LAB_1000601d8;
      FUN_100466550(lVar9,param_2,param_3,param_5,param_6);
    }
  }
  FUN_1000bd9d8(param_2,param_3,puVar1,param_5,param_6);
  for (plVar6 = *(long **)(*param_1 + 0x18); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[4]) {
    if (*(int *)(plVar6[1] + 0xa4) == DAT_10184db58) {
      (**(code **)(*plVar6 + 400))(plVar6,param_2,param_3,puVar1,param_5);
      break;
    }
  }
LAB_1000601d8:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 * thunk_FUN_10005ec0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d5a8;
  if (param_1[1] != 0) {
    FUN_1000c0898();
  }
  return param_1;
}

