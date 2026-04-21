// functions/00be9 — 23 functions
#include "libGameKindred.h"




void FUN_00be9018(void)

{
  return;
}




void FUN_00be901c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00beaef4();
  if ((uVar1 & 1) != 0) {
    FUN_00be9550(param_1 + 0x178,0xb);
    return;
  }
  return;
}




void FUN_00be9054(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::HIDE_SILK_SCREEN");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  FUN_00c5ebe0(0,0x3e99999a,*(undefined8 *)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be90d8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00beaef4();
  if ((uVar1 & 1) != 0) {
    FUN_00be9550(param_1 + 0x178,0xd);
    return;
  }
  return;
}




void FUN_00be9110(long param_1)

{
  FUN_00c1634c(0x3f400000,*(undefined8 *)(param_1 + 0x670));
  return;
}




void FUN_00be911c(void)

{
  return;
}




void FUN_00be9120(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_031341c4,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be918c(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x4e8) >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    piVar4 = (int *)(param_1 + 0x10);
    do {
      if (*piVar4 == param_2) goto LAB_00be91c0;
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 0x16;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00be91c0:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      piVar4 = (int *)(param_1 + 0x10);
      do {
        if (*piVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1 = param_1 + (long)(int)uVar2 * 0x58;
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar3 & 0x1f);
          return;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 0x16;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_00be9214(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027efba8;
  FUN_00be9550(param_1 + 0x2f,0xd);
  pcStack_50 = FUN_00beb8e4;
  local_58 = param_1;
  FUN_00f03390(&local_58);
  uVar4 = *(uint *)(param_1 + 0xda);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      plVar2 = *(long **)(param_1[0xdb] + lVar6);
      if (plVar2 == (long *)0x0) {
        puVar5 = (undefined8 *)(param_1[0xdb] + uVar7 * 8);
      }
      else {
        (**(code **)(*plVar2 + 8))();
        uVar4 = *(uint *)(param_1 + 0xda);
        puVar5 = (undefined8 *)(param_1[0xdb] + lVar6);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
      *puVar5 = 0;
    } while (uVar7 < uVar4);
  }
  plVar2 = (long *)param_1[0xe1];
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe2) == (int)plVar2[1]) {
      lVar6 = (**(code **)(*plVar2 + 0x10))();
      if (lVar6 != 0) {
        plVar2 = (long *)param_1[0xe1];
        uVar3 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0xe2) == (int)plVar2[1]) {
            uVar3 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            param_1[0xe1] = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0xe2) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0x3e800000,uVar3);
      }
    }
    else {
      param_1[0xe1] = 0;
      *(undefined4 *)(param_1 + 0xe2) = DAT_03214ce8;
    }
  }
  plVar2 = (long *)param_1[0xdf];
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe0) == (int)plVar2[1]) {
      lVar6 = (**(code **)(*plVar2 + 0x10))();
      if (lVar6 != 0) {
        plVar2 = (long *)param_1[0xdf];
        uVar3 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0xe0) == (int)plVar2[1]) {
            uVar3 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            param_1[0xdf] = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0x3e800000,uVar3);
      }
    }
    else {
      param_1[0xdf] = 0;
      *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
    }
  }
  FUN_008fa278();
  if ((*(byte *)(param_1 + 0xdc) & 1) != 0) {
    operator_delete((void *)param_1[0xde]);
  }
  if ((void *)param_1[0xdb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdb]);
    param_1[0xda] = 0;
    param_1[0xdb] = 0;
  }
  FUN_00beb7d8(param_1 + 0xd8,1);
  param_1[0xd4] = &PTR_FUN_027efc88;
  if ((void *)param_1[0xd7] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd7]);
    param_1[0xd7] = 0;
    param_1[0xd6] = 0;
  }
  param_1[0xd4] = &PTR_FUN_027efca8;
  if ((long *)param_1[0xd5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd5] + 8))();
  }
  param_1[0xd5] = 0;
  param_1[0xd2] = &PTR_FUN_027efc68;
  if ((long *)param_1[0xd3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd3] + 8))();
  }
  param_1[0xd3] = 0;
  param_1[0xcd] = &PTR_FUN_027efc08;
  FUN_00beb268(param_1 + 0xcf,param_1[0xd0]);
  param_1[0xcd] = &PTR_FUN_027efc28;
  if ((long *)param_1[0xce] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xce] + 8))();
  }
  param_1[0xce] = 0;
  FUN_00be9780(param_1 + 0x2f);
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    operator_delete((void *)param_1[0x15]);
  }
  FUN_009ec250(param_1 + 6,1);
  FUN_009ec324(param_1 + 4,1);
  FUN_009ec3a8(param_1 + 2,1);
  *param_1 = &PTR___cxa_pure_virtual_027efd40;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be9550(int *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  
  uVar3 = *(ushort *)(param_1 + 0x13a);
  if ((uVar3 & 0x7c00) != 0) {
    uVar4 = 0;
    piVar6 = param_1 + 4;
    do {
      if (*piVar6 == param_2) goto LAB_00be9598;
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 0x16;
    } while (uVar4 < (uVar3 >> 10 & 0x1f));
  }
  uVar4 = 0x1f;
LAB_00be9598:
  uVar1 = uVar3 & 0x1f;
  uVar5 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar3 = uVar3 & 0xfc1f | (ushort)((uVar4 & 0x1f) << 5);
    *(ushort *)(param_1 + 0x13a) = uVar3;
  }
  else {
    if (uVar4 == uVar1) {
      return;
    }
    if ((param_1[uVar5 * 0x16 + 0x18] & 1 << (ulong)(uVar4 & 0x1f)) == 0) {
      return;
    }
    *(ushort *)(param_1 + 0x13a) = uVar3 & 0xfc1f | (ushort)((uVar4 & 0x1f) << 5);
    if (*param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + uVar5 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + uVar5 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + uVar5 * 0x16 + 0x10),uVar2);
    uVar3 = *(ushort *)(param_1 + 0x13a);
  }
  uVar4 = uVar4 & 0x1f;
  *(ushort *)(param_1 + 0x13a) = (ushort)uVar4 | uVar3 & 0xfc00 | 0x3e0;
  if (uVar4 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00be9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar4 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + (ulong)uVar4 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar4 * 0x16 + 0xc),uVar2);
  return;
}




void FUN_00be967c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efc88;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_027efca8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be96e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efc68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be9724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efc08;
  FUN_00beb268(param_1 + 2,param_1[3]);
  *param_1 = &PTR_FUN_027efc28;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be9780(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x13a) & 0x1f;
  *(ushort *)(param_1 + 0x13a) = *(ushort *)(param_1 + 0x13a) | 0x3e0;
  if (uVar1 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00be97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
            (*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
             *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar2);
  return;
}




void FUN_00be97d0(void *param_1)

{
  FUN_00be9214();
  operator_delete(param_1);
  return;
}




void FUN_00be97f4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00be984c(param_1 + 0x178,7);
  if (((uVar1 & 1) != 0) && (0.15 <= *(float *)(param_1 + 0x728))) {
    FUN_00be9550(param_1 + 0x178,7);
    return;
  }
  return;
}




bool FUN_00be984c(long param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x4e8) & 0x1f;
  if (uVar1 == 0x1f) {
    bVar3 = true;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x4e8) >> 10;
    if ((uVar2 & 0x1f) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(param_1 + 0x10);
      do {
        if (*piVar5 == param_2) goto LAB_00be9894;
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 0x16;
      } while (uVar4 < (uVar2 & 0x1f));
    }
    uVar4 = 0x1f;
LAB_00be9894:
    bVar3 = true;
    if (uVar4 != uVar1) {
      bVar3 = (*(uint *)(param_1 + (ulong)uVar1 * 0x58 + 0x60) & 1 << (ulong)(uVar4 & 0x1f)) != 0;
    }
  }
  return bVar3;
}




void FUN_00be98c4(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  FUN_0096beb0(local_50,local_68);
  lVar3 = FUN_009fded0();
  if ((lVar3 != 0) && (iVar2 = FUN_009fe4d0(lVar3,local_68), iVar2 == 1)) {
    FUN_009fea24(lVar3,local_50,local_68);
  }
  FUN_00be9550(param_1 + 0x178,0xd);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be9988(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x660) & 0x1f;
  if ((uVar1 != 0x1f) && (*(int *)(param_1 + (ulong)uVar1 * 0x58 + 0x188) == 9)) {
    FUN_00be9550(param_1 + 0x178,10);
    return;
  }
  return;
}




void FUN_00be99c0(float param_1,long param_2)

{
  *(float *)(param_2 + 0x728) = *(float *)(param_2 + 0x728) + param_1;
  FUN_00be99d8(param_2 + 0x178);
  return;
}




void FUN_00be99d8(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x13a) & 0x1f;
  if (uVar1 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00be9a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x12))
            (*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 6),
             *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 8),uVar2);
  return;
}




undefined8 * FUN_00be9a20(long *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  param_1 = (long *)*param_1;
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    param_1 = param_1 + 1;
    iVar1 = strcmp((char *)*puVar2,param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined8 *)*param_1;
  }
  return puVar2;
}




void FUN_00be9a70(long param_1,long param_2,long param_3)

{
  void *__dest;
  int *piVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  byte *pbVar18;
  byte local_1a0 [16];
  void *local_190;
  ulong local_188 [2];
  void *local_178;
  undefined1 auStack_170 [16];
  code *local_160;
  ulong local_158;
  void *local_150;
  void *local_148;
  void *local_140 [2];
  void *local_130;
  byte local_128 [16];
  void *local_118;
  byte local_110;
  void *local_100;
  int local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined4 local_e0;
  byte local_d8;
  void *local_c8;
  long local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  long *local_b0 [2];
  void *local_a0;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_00beb2c4();
  lVar11 = param_1 + 0x20;
  FUN_00beb360(lVar11,param_2 + 0x10);
  FUN_00beb478(param_1 + 0x30,param_2 + 0x20);
  __dest = (void *)(param_1 + 0x40);
  memcpy(__dest,(void *)(param_2 + 0x30),0x58);
  FUN_008fce60((byte *)(param_1 + 0x98),param_2 + 0x88);
  memcpy((void *)(param_1 + 0xb0),(void *)(param_2 + 0xa0),200);
  uVar6 = FUN_00d6eb50();
  uVar6 = FUN_00d6eb5c(uVar6,"*SpoilsOfWarRewardConfig*");
  if ((*(float *)(param_1 + 0x134) != *(float *)(param_1 + 0x164)) &&
     (lVar7 = FUN_00be9a20(uVar6,"ranked_3v3"), lVar7 != 0)) {
    uVar8 = FUN_0093dbe8();
    if ((uVar8 & 1) != 0) {
      FUN_009370dc("prev3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x11c));
      FUN_009370dc("new3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x14c));
      FUN_009370dc("prev3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x118));
      FUN_009370dc("new3v3RankedDatamEloBucket",*(undefined4 *)(param_1 + 0x148));
      FUN_009370dc("prev3v3RankedDatamEloEarned",(int)*(float *)(param_1 + 0x134));
      FUN_009370dc("new3v3RankedDatamEloEarned",(int)*(float *)(param_1 + 0x164));
    }
    pcVar9 = operator_new(0x138);
    *(long *)(pcVar9 + 0x10) = 0;
    *(long *)(pcVar9 + 0x18) = 0;
    *(long *)(pcVar9 + 8) = 0;
    *(undefined8 *)(pcVar9 + 0x4c) = 0;
    *(undefined8 *)(pcVar9 + 0x44) = 0;
    *(undefined8 *)(pcVar9 + 0x3c) = 0;
    *(undefined8 *)(pcVar9 + 0x34) = 0;
    *(undefined8 *)(pcVar9 + 0x2c) = 0;
    *(undefined8 *)(pcVar9 + 0x24) = 0;
    *(undefined4 *)(pcVar9 + 0x54) = 0;
    memset(pcVar9 + 0x60,0,0x78);
    *(undefined4 *)(pcVar9 + 0x58) = 0x3f800000;
    *(undefined ***)pcVar9 = &PTR_FUN_027efcc8;
    FUN_00a0767c(pcVar9 + 0xd8);
    FUN_00a0767c(pcVar9 + 0x108);
    *(undefined4 *)(pcVar9 + 0x20) = 2;
    lVar12 = *(long *)(param_1 + 0x138);
    *(long *)(pcVar9 + 0x100) = *(long *)(param_1 + 0x140);
    *(long *)(pcVar9 + 0xf8) = lVar12;
    lVar12 = *(long *)(param_1 + 0x128);
    *(long *)(pcVar9 + 0xf0) = *(long *)(param_1 + 0x130);
    *(long *)(pcVar9 + 0xe8) = lVar12;
    lVar12 = *(long *)(param_1 + 0x118);
    *(long *)(pcVar9 + 0xe0) = *(long *)(param_1 + 0x120);
    *(long *)(pcVar9 + 0xd8) = lVar12;
    lVar12 = *(long *)(param_1 + 0x148);
    *(long *)(pcVar9 + 0x110) = *(long *)(param_1 + 0x150);
    *(long *)(pcVar9 + 0x108) = lVar12;
    lVar12 = *(long *)(param_1 + 0x158);
    *(long *)(pcVar9 + 0x120) = *(long *)(param_1 + 0x160);
    *(long *)(pcVar9 + 0x118) = lVar12;
    lVar12 = *(long *)(param_1 + 0x168);
    *(long *)(pcVar9 + 0x130) = *(long *)(param_1 + 0x170);
    *(long *)(pcVar9 + 0x128) = lVar12;
    FUN_008fa54c(&local_160,"ranked_3v3");
    FUN_008fce60(pcVar9 + 8,&local_160);
    if (((byte)local_160 & 1) != 0) {
      operator_delete(local_150);
    }
    (**(code **)(*(long *)pcVar9 + 0x10))(pcVar9,lVar7);
    local_160 = pcVar9;
    FUN_00beacd4(param_1 + 0x6d0,&local_160);
    FUN_00bead5c(&local_160);
    FUN_008fa54c(local_b0,"ranked_3v3");
    FUN_008fce60(&local_158,local_b0);
    if (((ulong)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    local_f8 = (int)(*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x134));
    plVar14 = (long *)(param_3 + 8);
    plVar17 = (long *)*plVar14;
    if (plVar17 != (long *)0x0) {
      uVar2 = *(uint *)(lVar7 + 0x58);
      plVar15 = plVar14;
      do {
        bVar4 = *(uint *)((long)plVar17 + 0x1c) < uVar2;
        if (!bVar4) {
          plVar15 = plVar17;
        }
        plVar17 = (long *)plVar17[bVar4];
      } while (plVar17 != (long *)0x0);
      if ((plVar15 != plVar14) && (*(uint *)((long)plVar15 + 0x1c) <= uVar2)) {
        local_c0 = plVar15[4];
      }
    }
    FUN_00c88cb8(&local_160,lVar7);
    FUN_00beae00(param_1 + 0x6c0,&local_160);
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_f0 = 0;
      local_e8 = (void *)0x0;
    }
    if ((local_110 & 1) != 0) {
      operator_delete(local_100);
    }
    if ((local_128[0] & 1) != 0) {
      operator_delete(local_118);
    }
    if (((ulong)local_140[0] & 1) != 0) {
      operator_delete(local_130);
    }
    if ((local_158 & 1) != 0) {
      operator_delete(local_148);
    }
  }
  if ((*(float *)(param_1 + 0xd4) != *(float *)(param_1 + 0x104)) &&
     (lVar7 = FUN_00be9a20(uVar6,"ranked_5v5"), lVar7 != 0)) {
    uVar8 = FUN_0093dbe8();
    if ((uVar8 & 1) != 0) {
      FUN_009370dc("prev5v5RankedDataEloBucket",*(undefined4 *)(param_1 + 0xbc));
      FUN_009370dc("new5v5RankedDataEloBucket",*(undefined4 *)(param_1 + 0xec));
      FUN_009370dc("prev5v5RankedDataEloBucket",*(undefined4 *)(param_1 + 0xb8));
      FUN_009370dc("new5v5RankedDatamEloBucket",*(undefined4 *)(param_1 + 0xe8));
      FUN_009370dc("prev5v5RankedDatamEloEarned",(int)*(float *)(param_1 + 0xd4));
      FUN_009370dc("new5v5RankedDatamEloEarned",(int)*(float *)(param_1 + 0x104));
    }
    pcVar9 = operator_new(0x138);
    *(long *)(pcVar9 + 0x10) = 0;
    *(long *)(pcVar9 + 0x18) = 0;
    *(long *)(pcVar9 + 8) = 0;
    *(undefined8 *)(pcVar9 + 0x4c) = 0;
    *(undefined8 *)(pcVar9 + 0x44) = 0;
    *(undefined8 *)(pcVar9 + 0x3c) = 0;
    *(undefined8 *)(pcVar9 + 0x34) = 0;
    *(undefined8 *)(pcVar9 + 0x2c) = 0;
    *(undefined8 *)(pcVar9 + 0x24) = 0;
    *(undefined4 *)(pcVar9 + 0x54) = 0;
    memset(pcVar9 + 0x60,0,0x78);
    *(undefined4 *)(pcVar9 + 0x58) = 0x3f800000;
    *(undefined ***)pcVar9 = &PTR_FUN_027efcc8;
    FUN_00a0767c(pcVar9 + 0xd8);
    FUN_00a0767c(pcVar9 + 0x108);
    *(undefined4 *)(pcVar9 + 0x20) = 2;
    lVar12 = *(long *)(param_1 + 0xd8);
    *(long *)(pcVar9 + 0x100) = *(long *)(param_1 + 0xe0);
    *(long *)(pcVar9 + 0xf8) = lVar12;
    lVar12 = *(long *)(param_1 + 200);
    *(long *)(pcVar9 + 0xf0) = *(long *)(param_1 + 0xd0);
    *(long *)(pcVar9 + 0xe8) = lVar12;
    lVar12 = *(long *)(param_1 + 0xb8);
    *(long *)(pcVar9 + 0xe0) = *(long *)(param_1 + 0xc0);
    *(long *)(pcVar9 + 0xd8) = lVar12;
    lVar12 = *(long *)(param_1 + 0xe8);
    *(long *)(pcVar9 + 0x110) = *(long *)(param_1 + 0xf0);
    *(long *)(pcVar9 + 0x108) = lVar12;
    lVar12 = *(long *)(param_1 + 0xf8);
    *(long *)(pcVar9 + 0x120) = *(long *)(param_1 + 0x100);
    *(long *)(pcVar9 + 0x118) = lVar12;
    lVar12 = *(long *)(param_1 + 0x108);
    *(long *)(pcVar9 + 0x130) = *(long *)(param_1 + 0x110);
    *(long *)(pcVar9 + 0x128) = lVar12;
    FUN_008fa54c(&local_160,"ranked_5v5");
    FUN_008fce60(pcVar9 + 8,&local_160);
    if (((ulong)local_160 & 1) != 0) {
      operator_delete(local_150);
    }
    (**(code **)(*(long *)pcVar9 + 0x10))(pcVar9,lVar7);
    local_160 = pcVar9;
    FUN_00beacd4(param_1 + 0x6d0,&local_160);
    FUN_00bead5c(&local_160);
    FUN_008fa54c(local_b0,"ranked_5v5");
    FUN_008fce60(&local_158,local_b0);
    if (((ulong)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    local_f8 = (int)(*(float *)(param_1 + 0x104) - *(float *)(param_1 + 0xd4));
    plVar14 = (long *)(param_3 + 8);
    plVar17 = (long *)*plVar14;
    if (plVar17 != (long *)0x0) {
      uVar2 = *(uint *)(lVar7 + 0x58);
      plVar15 = plVar14;
      do {
        bVar4 = *(uint *)((long)plVar17 + 0x1c) < uVar2;
        if (!bVar4) {
          plVar15 = plVar17;
        }
        plVar17 = (long *)plVar17[bVar4];
      } while (plVar17 != (long *)0x0);
      if ((plVar15 != plVar14) && (*(uint *)((long)plVar15 + 0x1c) <= uVar2)) {
        local_c0 = plVar15[4];
      }
    }
    FUN_00c88cb8(&local_160,lVar7);
    FUN_00beae00(param_1 + 0x6c0,&local_160);
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_f0 = 0;
      local_e8 = (void *)0x0;
    }
    if ((local_110 & 1) != 0) {
      operator_delete(local_100);
    }
    if ((local_128[0] & 1) != 0) {
      operator_delete(local_118);
    }
    if (((ulong)local_140[0] & 1) != 0) {
      operator_delete(local_130);
    }
    if ((local_158 & 1) != 0) {
      operator_delete(local_148);
    }
  }
  if (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 100)) {
    FUN_008fa54c(&local_160,"xp");
    iVar5 = FUN_00be751c(lVar11,&local_160);
    if (((ulong)local_160 & 1) != 0) {
      operator_delete(local_150);
    }
    lVar7 = FUN_00be9a20(uVar6,"xp");
    if (lVar7 != 0) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - iVar5;
      uVar10 = FUN_00e6ce7c("MENU_SPOILS_TITLE_SPOILS_LEVEL_UP",0);
      local_160 = (code *)FUN_00be7398(param_1 + 0x60,lVar7,"xp",uVar10);
      FUN_00beacd4(param_1 + 0x6d0,&local_160);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar5;
      FUN_00bead5c(&local_160);
      FUN_00be72b0(param_1 + 0x60,&local_160,lVar7,"xp",param_3);
      FUN_00beae00(param_1 + 0x6c0,&local_160);
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
        local_f0 = 0;
        local_e8 = (void *)0x0;
      }
      if ((local_110 & 1) != 0) {
        operator_delete(local_100);
      }
      if ((local_128[0] & 1) != 0) {
        operator_delete(local_118);
      }
      if (((ulong)local_140[0] & 1) != 0) {
        operator_delete(local_130);
      }
      if ((local_158 & 1) != 0) {
        operator_delete(local_148);
      }
    }
  }
  if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0x44)) {
    FUN_008fa54c(&local_160,"guild");
    iVar5 = FUN_00be751c(lVar11,&local_160);
    if (((ulong)local_160 & 1) != 0) {
      operator_delete(local_150);
    }
    lVar11 = FUN_00be9a20(uVar6,"guild");
    if (lVar11 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar5;
      uVar10 = FUN_00e6ce7c("MENU_SPOILS_GUILD_LEVELED_UP",0);
      local_160 = (code *)FUN_00be7398(__dest,lVar11,"guild",uVar10);
      FUN_00beacd4(param_1 + 0x6d0,&local_160);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      FUN_00bead5c(&local_160);
      FUN_00be72b0(__dest,&local_160,lVar11,"guild",param_3);
      FUN_00beae00(param_1 + 0x6c0,&local_160);
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
        local_f0 = 0;
        local_e8 = (void *)0x0;
      }
      if ((local_110 & 1) != 0) {
        operator_delete(local_100);
      }
      if ((local_128[0] & 1) != 0) {
        operator_delete(local_118);
      }
      if (((ulong)local_140[0] & 1) != 0) {
        operator_delete(local_130);
      }
      if ((local_158 & 1) != 0) {
        operator_delete(local_148);
      }
    }
  }
  if (*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x88)) {
    lVar11 = FUN_00be9a20(uVar6,"heromastery");
    if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
      lVar7 = param_1 + 0x99;
    }
    else {
      lVar7 = *(long *)(param_1 + 0xa8);
    }
    lVar7 = FUN_00ce9b48(lVar7);
    if ((lVar11 != 0) && (lVar7 != 0)) {
      FUN_008fff20(local_b0,"portrait_%s",*(undefined8 *)(lVar7 + 0x10));
      local_188[0] = 0;
      local_188[1] = 0;
      local_178 = (void *)0x0;
      FUN_00f0a784(auStack_170);
      FUN_00f0a814(auStack_170,PTR_s_build___MenuCharPortraitsHD_png_02be35b0);
      lVar12 = FUN_00f0a7e0(auStack_170,local_b0);
      puVar13 = PTR_s_build___MenuCharPortraitsHD2_atl_02be35b8;
      if (lVar12 != 0) {
        puVar13 = PTR_s_build___MenuCharPortraitsHD_png_02be35b0;
      }
      FUN_008fa54c(&local_160,puVar13);
      FUN_008fce60(local_188,&local_160);
      if (((ulong)local_160 & 1) != 0) {
        operator_delete(local_150);
      }
      pcVar9 = operator_new(0x130);
      *(long *)(pcVar9 + 0x18) = 0;
      *(long *)(pcVar9 + 0x10) = 0;
      *(long *)(pcVar9 + 8) = 0;
      *(undefined8 *)(pcVar9 + 0x4c) = 0;
      *(undefined8 *)(pcVar9 + 0x44) = 0;
      *(undefined8 *)(pcVar9 + 0x3c) = 0;
      *(undefined8 *)(pcVar9 + 0x34) = 0;
      *(undefined8 *)(pcVar9 + 0x2c) = 0;
      *(undefined8 *)(pcVar9 + 0x24) = 0;
      *(undefined4 *)(pcVar9 + 0x54) = 0;
      memset(pcVar9 + 0x60,0,0x78);
      *(undefined4 *)(pcVar9 + 0x58) = 0x3f800000;
      *(undefined ***)pcVar9 = &PTR_FUN_027efcf0;
      FUN_00e70510(pcVar9 + 0xf0);
      *(long *)(pcVar9 + 0x118) = 0;
      *(long *)(pcVar9 + 0x110) = 0;
      *(long *)(pcVar9 + 0x128) = 0;
      *(long *)(pcVar9 + 0x120) = 0;
      *(long *)(pcVar9 + 0x108) = 0;
      *(long *)(pcVar9 + 0x100) = 0;
      *(undefined4 *)(pcVar9 + 0x20) = 4;
      FUN_008fa54c(&local_160,"heromastery");
      FUN_008fce60(pcVar9 + 8,&local_160);
      if (((ulong)local_160 & 1) != 0) {
        operator_delete(local_150);
      }
      FUN_008fa54c(&local_160,local_b0);
      FUN_008fce60(pcVar9 + 0x100,&local_160);
      if (((ulong)local_160 & 1) != 0) {
        operator_delete(local_150);
      }
      FUN_008fce60(pcVar9 + 0x118,local_188);
      *(undefined4 *)(pcVar9 + 0xec) = *(undefined4 *)(param_1 + 0x84);
      *(undefined4 *)(pcVar9 + 0xe8) = *(undefined4 *)(param_1 + 0x80);
      lVar12 = *(long *)(param_1 + 0x88);
      *(long *)(pcVar9 + 0xe0) = *(long *)(param_1 + 0x90);
      *(long *)(pcVar9 + 0xd8) = lVar12;
      uVar10 = FUN_00e6ce7c(*(undefined8 *)(lVar7 + 0x18),0);
      FUN_00910394(pcVar9 + 0xf0,uVar10);
      (**(code **)(*(long *)pcVar9 + 0x10))(pcVar9,lVar11);
      local_160 = pcVar9;
      FUN_00beacd4(param_1 + 0x6d0,&local_160);
      FUN_00bead5c(&local_160);
      FUN_008fa54c(local_1a0,"heromastery");
      FUN_008fce60(&local_158,local_1a0);
      if ((local_1a0[0] & 1) != 0) {
        operator_delete(local_190);
      }
      plVar14 = (long *)(param_3 + 8);
      plVar17 = (long *)*plVar14;
      if (plVar17 != (long *)0x0) {
        uVar2 = *(uint *)(lVar11 + 0x58);
        plVar15 = plVar14;
        do {
          bVar4 = *(uint *)((long)plVar17 + 0x1c) < uVar2;
          if (!bVar4) {
            plVar15 = plVar17;
          }
          plVar17 = (long *)plVar17[bVar4];
        } while (plVar17 != (long *)0x0);
        if ((plVar15 != plVar14) && (*(uint *)((long)plVar15 + 0x1c) <= uVar2)) {
          local_c0 = plVar15[4];
        }
      }
      FUN_00c88cb8(&local_160,lVar11);
      local_160 = (code *)CONCAT44(local_160._4_4_,1);
      FUN_008fa54c(local_1a0,local_b0);
      FUN_008fce60(local_128,local_1a0);
      if ((local_1a0[0] & 1) != 0) {
        operator_delete(local_190);
      }
      FUN_008fce60(local_140,local_188);
      local_f8 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88);
      FUN_00beae00(param_1 + 0x6c0,&local_160);
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
        local_f0 = 0;
        local_e8 = (void *)0x0;
      }
      if ((local_110 & 1) != 0) {
        operator_delete(local_100);
      }
      if ((local_128[0] & 1) != 0) {
        operator_delete(local_118);
      }
      if (((ulong)local_140[0] & 1) != 0) {
        operator_delete(local_130);
      }
      if ((local_158 & 1) != 0) {
        operator_delete(local_148);
      }
      FUN_00f0a79c(auStack_170);
      if ((local_188[0] & 1) != 0) {
        operator_delete(local_178);
      }
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar14 = (long *)(param_3 + 8);
    uVar8 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x38);
      lVar11 = lVar7 + uVar8 * 0x80;
      pbVar18 = (byte *)(lVar11 + 0x50);
      if ((*pbVar18 & 1) == 0) {
        lVar11 = lVar11 + 0x51;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x60);
      }
      lVar11 = FUN_00be9a20(uVar6,lVar11);
      if ((lVar11 != 0) && (piVar1 = (int *)(lVar7 + uVar8 * 0x80), *piVar1 != 0)) {
        pcVar9 = operator_new(0x110);
        *(long *)(pcVar9 + 0x10) = 0;
        *(long *)(pcVar9 + 0x18) = 0;
        *(long *)(pcVar9 + 8) = 0;
        *(undefined8 *)(pcVar9 + 0x4c) = 0;
        *(undefined8 *)(pcVar9 + 0x44) = 0;
        *(undefined8 *)(pcVar9 + 0x3c) = 0;
        *(undefined8 *)(pcVar9 + 0x34) = 0;
        *(undefined8 *)(pcVar9 + 0x2c) = 0;
        *(undefined8 *)(pcVar9 + 0x24) = 0;
        *(undefined4 *)(pcVar9 + 0x54) = 0;
        memset(pcVar9 + 0x60,0,0x78);
        *(undefined4 *)(pcVar9 + 0x58) = 0x3f800000;
        *(long *)(pcVar9 + 0x100) = 0;
        *(long *)(pcVar9 + 0x108) = 0;
        *(undefined ***)pcVar9 = &PTR_FUN_027efd18;
        *(long *)(pcVar9 + 0xe8) = 0;
        *(long *)(pcVar9 + 0xf0) = 0;
        *(long *)(pcVar9 + 0xf8) = 0;
        *(long *)(pcVar9 + 0xe0) = 0;
        *(undefined4 *)(pcVar9 + 0x20) = 1;
        *(int *)(pcVar9 + 0xd8) = *piVar1;
        FUN_008fce60(pcVar9 + 8,pbVar18);
        FUN_008fce60(pcVar9 + 0xe0,piVar1 + 2);
        FUN_008fce60(pcVar9 + 0xf8,piVar1 + 8);
        (**(code **)(*(long *)pcVar9 + 0x10))(pcVar9,lVar11);
        local_160 = pcVar9;
        FUN_00beacd4(param_1 + 0x6d0,&local_160);
        FUN_00bead5c(&local_160);
        FUN_008fce60(&local_158,pbVar18);
        local_f8 = *piVar1;
        plVar15 = (long *)*plVar14;
        plVar17 = plVar14;
        if (plVar15 != (long *)0x0) {
          do {
            bVar4 = *(uint *)((long)plVar15 + 0x1c) < 3;
            if (!bVar4) {
              plVar17 = plVar15;
            }
            plVar15 = (long *)plVar15[bVar4];
          } while (plVar15 != (long *)0x0);
          if ((plVar17 != plVar14) && (*(uint *)((long)plVar17 + 0x1c) < 4)) {
            local_c0 = plVar17[4];
          }
        }
        lVar7 = lVar7 + uVar8 * 0x80;
        if ((*(byte *)(lVar7 + 0x38) & 1) == 0) {
          lVar7 = lVar7 + 0x39;
        }
        else {
          lVar7 = *(long *)(lVar7 + 0x48);
        }
        uVar10 = FUN_00e6ce7c(lVar7,0);
        FUN_00910394(&local_f0,uVar10);
        FUN_008fce60(local_128,piVar1 + 2);
        FUN_008fce60(local_140,piVar1 + 8);
        local_e0 = *(undefined4 *)(lVar11 + 0x60);
        local_b8 = *(undefined4 *)(lVar11 + 0x5c);
        local_b4 = 1;
        FUN_00beae00(param_1 + 0x6c0,&local_160);
        if ((local_d8 & 1) != 0) {
          operator_delete(local_c8);
        }
        if (local_e8 != (void *)0x0) {
          operator_delete__(local_e8);
          local_f0 = 0;
          local_e8 = (void *)0x0;
        }
        if ((local_110 & 1) != 0) {
          operator_delete(local_100);
        }
        if ((local_128[0] & 1) != 0) {
          operator_delete(local_118);
        }
        if (((ulong)local_140[0] & 1) != 0) {
          operator_delete(local_130);
        }
        if ((local_158 & 1) != 0) {
          operator_delete(local_148);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x30));
  }
  if (*(uint *)(param_1 + 0x10) != 0) {
    plVar14 = (long *)(param_3 + 8);
    uVar8 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0x18) + uVar8 * 0x28;
      if ((*(byte *)(lVar11 + 0x10) & 1) == 0) {
        lVar11 = lVar11 + 0x11;
      }
      else {
        lVar11 = *(long *)(*(long *)(param_1 + 0x18) + uVar8 * 0x28 + 0x20);
      }
      lVar11 = FUN_00be9a20(uVar6,lVar11);
      if ((lVar11 != 0) && (*(int *)(*(long *)(param_1 + 0x18) + uVar8 * 0x28 + 8) != 0)) {
        pcVar9 = operator_new(0x110);
        *(long *)(pcVar9 + 0x10) = 0;
        *(long *)(pcVar9 + 0x18) = 0;
        *(long *)(pcVar9 + 8) = 0;
        *(undefined8 *)(pcVar9 + 0x4c) = 0;
        *(undefined8 *)(pcVar9 + 0x44) = 0;
        *(undefined8 *)(pcVar9 + 0x3c) = 0;
        *(undefined8 *)(pcVar9 + 0x34) = 0;
        *(undefined8 *)(pcVar9 + 0x2c) = 0;
        *(undefined8 *)(pcVar9 + 0x24) = 0;
        *(undefined4 *)(pcVar9 + 0x54) = 0;
        memset(pcVar9 + 0x60,0,0x78);
        *(undefined4 *)(pcVar9 + 0x58) = 0x3f800000;
        *(undefined ***)pcVar9 = &PTR_FUN_028057c0;
        *(long *)(pcVar9 + 0xd8) = 0;
        FUN_008fa54c(pcVar9 + 0xe0,PTR_s_build___SpoilsOfWarPartsCommon_t_02be3638);
        *(long *)(pcVar9 + 0x100) = 0;
        *(long *)(pcVar9 + 0x108) = 0;
        *(long *)(pcVar9 + 0xf8) = 0;
        *(undefined4 *)(pcVar9 + 0x20) = 0;
        plVar17 = (long *)(*(long *)(param_1 + 0x18) + uVar8 * 0x28);
        *(long *)(pcVar9 + 0xd8) = *plVar17;
        FUN_008fce60(pcVar9 + 8,plVar17 + 2);
        (**(code **)(*(long *)pcVar9 + 0x10))(pcVar9,lVar11);
        local_160 = pcVar9;
        FUN_00beacd4(param_1 + 0x6d0,&local_160);
        FUN_00bead5c(&local_160);
        FUN_008fce60(&local_158,*(long *)(param_1 + 0x18) + uVar8 * 0x28 + 0x10);
        local_f8 = *(int *)(*(long *)(param_1 + 0x18) + uVar8 * 0x28 + 8);
        plVar17 = (long *)*plVar14;
        if (plVar17 != (long *)0x0) {
          uVar2 = *(uint *)(lVar11 + 0x58);
          plVar15 = plVar14;
          do {
            bVar4 = *(uint *)((long)plVar17 + 0x1c) < uVar2;
            if (!bVar4) {
              plVar15 = plVar17;
            }
            plVar17 = (long *)plVar17[bVar4];
          } while (plVar17 != (long *)0x0);
          if ((plVar15 != plVar14) && (*(uint *)((long)plVar15 + 0x1c) <= uVar2)) {
            local_c0 = plVar15[4];
          }
        }
        FUN_00c88cb8(&local_160,lVar11);
        FUN_00beae00(param_1 + 0x6c0,&local_160);
        if ((local_d8 & 1) != 0) {
          operator_delete(local_c8);
        }
        if (local_e8 != (void *)0x0) {
          operator_delete__(local_e8);
          local_f0 = 0;
          local_e8 = (void *)0x0;
        }
        if ((local_110 & 1) != 0) {
          operator_delete(local_100);
        }
        if ((local_128[0] & 1) != 0) {
          operator_delete(local_118);
        }
        if (((ulong)local_140[0] & 1) != 0) {
          operator_delete(local_130);
        }
        if ((local_158 & 1) != 0) {
          operator_delete(local_148);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar8 = 0;
    do {
      local_158 = 0;
      local_150 = (void *)0x0;
      local_160 = (code *)&local_158;
      FUN_00e70510(&local_148);
      lVar11 = *(long *)(param_1 + 0x28);
      puVar16 = (undefined8 *)(lVar11 + uVar8 * 0x28);
      plVar14 = (long *)*puVar16;
      while (plVar14 != puVar16 + 1) {
        lVar11 = plVar14[7];
        local_b0[0] = plVar14 + 4;
        lVar7 = FUN_00beba90(&local_160,local_b0[0],&DAT_01bbb27b,local_b0,local_188);
        *(int *)(lVar7 + 0x38) = (int)lVar11;
        plVar17 = (long *)plVar14[1];
        if ((long *)plVar14[1] == (long *)0x0) {
          plVar17 = plVar14 + 2;
          plVar15 = (long *)*plVar17;
          if ((long *)*plVar15 != plVar14) {
            do {
              lVar11 = *plVar17;
              plVar17 = (long *)(lVar11 + 0x10);
              plVar15 = (long *)*plVar17;
            } while (*plVar15 != lVar11);
          }
        }
        else {
          do {
            plVar15 = plVar17;
            plVar17 = (long *)*plVar15;
          } while ((long *)*plVar15 != (long *)0x0);
        }
        lVar11 = *(long *)(param_1 + 0x28);
        plVar14 = plVar15;
        puVar16 = (undefined8 *)(lVar11 + uVar8 * 0x28);
      }
      FUN_00910394(&local_148,lVar11 + uVar8 * 0x28 + 0x18);
      FUN_00bc4a3c(param_1 + 0x6a0,&local_160);
      if (local_140[0] != (void *)0x0) {
        operator_delete__(local_140[0]);
        local_148 = (void *)0x0;
        local_140[0] = (void *)0x0;
      }
      FUN_00948ab4(&local_160,local_158);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x20));
  }
  local_160 = FUN_00be80c4;
  FUN_00bebb40(*(long *)(param_1 + 0x6c8),
               *(long *)(param_1 + 0x6c8) + (ulong)*(uint *)(param_1 + 0x6c0) * 0xb0,&local_160);
  local_160 = FUN_00be80d8;
  FUN_00bef128(*(long *)(param_1 + 0x6d8),
               *(long *)(param_1 + 0x6d8) + (ulong)*(uint *)(param_1 + 0x6d0) * 8,&local_160);
  FUN_00be9550(param_1 + 0x178,0);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

