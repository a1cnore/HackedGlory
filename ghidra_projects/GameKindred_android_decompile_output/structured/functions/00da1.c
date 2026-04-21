// functions/00da1 — 48 functions
#include "libGameKindred.h"




undefined8 thunk_FUN_00da17a0(void)

{
  return 1;
}




void FUN_00da1044(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00cf99dc();
  uVar1 = FUN_00cfa00c(param_1);
  FUN_00cf6bb0(uVar1,param_2);
  FUN_00cf9eec(param_1);
  return;
}




void FUN_00da107c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00cf9f7c();
  lVar2 = FUN_00da1124(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 8) = 0;
  *(undefined4 *)(lVar2 + 0x10) = 1;
  FUN_00da0f04(param_1,lVar1 + 0xb0,PTR_s_Buff_LockedFromMissing_02beb4e0);
  return;
}




void FUN_00da10d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00cf9f7c();
  lVar2 = FUN_00da1124(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 8) = 0;
  *(undefined4 *)(lVar2 + 0x10) = 1;
  FUN_00da0f54(lVar1 + 200,PTR_s_Buff_LockedFromMissing_02beb4e0,param_2);
  return;
}




undefined8 * FUN_00da1124(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_0281f460;
      puVar1[1] = 0;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 9;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




undefined8 FUN_00da1180(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((((*(byte *)(param_2 + 0x2f6) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x2f9) & 1) == 0)) &&
     ((uVar1 = *(ushort *)(param_2 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(param_2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    uVar2 = FUN_00d55870(param_1);
    uVar3 = FUN_00d7d0a0(*(undefined8 *)(param_2 + 0x80),uVar2);
    if ((uVar3 & 1) != 0) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x38) + 200);
      lVar6 = *plVar4;
      if (lVar6 != 0) {
        do {
          plVar4 = plVar4 + 1;
          uVar3 = FUN_00da1284(lVar6,param_1,param_2,param_3 & 1);
          if (((uVar3 & 1) != 0) &&
             ((puVar5 = (undefined8 *)**(undefined8 **)(lVar6 + 0x38), puVar5 != (undefined8 *)0x0
              || (puVar5 = (undefined8 *)**(undefined8 **)(lVar6 + 0x40),
                 puVar5 != (undefined8 *)0x0)))) {
            return *puVar5;
          }
          lVar6 = *plVar4;
        } while (lVar6 != 0);
      }
    }
  }
  return 0;
}




void FUN_00da1284(int *param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar5 = *param_1;
  if (iVar5 == 0) {
    cVar2 = FUN_00d55870(param_3);
    cVar3 = FUN_00d55870(param_2);
    uVar7 = 0;
    if (cVar2 == cVar3) goto LAB_00da1660;
    iVar5 = *param_1;
  }
  if (iVar5 == 2) {
    cVar2 = FUN_00d55870(param_3);
    cVar3 = FUN_00d55870(param_2);
    uVar7 = 0;
    if (cVar2 != cVar3) goto LAB_00da1660;
    iVar5 = *param_1;
  }
  if (iVar5 == 1) {
    cVar2 = FUN_00d55870(param_3);
    cVar3 = FUN_00d55870(param_2);
    uVar7 = 0;
    if ((cVar2 != cVar3) || (uVar7 = 0, *(int *)(param_3 + 0x260) == *(int *)(param_2 + 0x260)))
    goto LAB_00da1660;
    iVar5 = *param_1;
  }
  if (((iVar5 != 3) || (uVar7 = 0, *(int *)(param_3 + 0x260) == *(int *)(param_2 + 0x260))) &&
     (((char)param_1[1] == '\0' || (uVar7 = 0, (*(byte *)(param_3 + 0x2f4) & 1) != 0)))) {
    if (((undefined8 *)**(undefined8 **)(param_1 + 0xe) != (undefined8 *)0x0) &&
       (uVar8 = FUN_00e6a488(*(undefined8 *)**(undefined8 **)(param_1 + 0xe)), (uVar8 & 1) == 0)) {
      lVar9 = FUN_00d9eb64(param_2);
      uVar4 = FUN_00d5401c(lVar9,*(undefined8 *)**(undefined8 **)(param_1 + 0xe));
      if ((lVar9 != 0) &&
         (((char)param_1[5] == '\0' && (iVar5 = FUN_00d53990(lVar9,uVar4), iVar5 != 2)))) {
        fVar10 = (float)FUN_00d539e8(lVar9,uVar4);
        uVar7 = 0;
        if (0.5 < fVar10) goto LAB_00da1660;
      }
      if ((lVar9 != 0) && (lVar9 = FUN_00d53914(lVar9,uVar4), *(char *)(lVar9 + 0x5f) == '\0')) {
        uVar8 = FUN_00d58594(param_2);
        uVar7 = 0;
        if ((uVar8 & 1) != 0) goto LAB_00da1660;
      }
    }
    if (((param_4 & 1) == 0) && ((0.0 < (float)param_1[2] || (0.0 < (float)param_1[3])))) {
      fVar10 = (float)FUN_00d9e0c4(param_2,param_3);
      if (((0.0 < (float)param_1[2]) &&
          (uVar7 = 0, fVar11 = *(float *)(*(long *)(param_3 + 0x38) + 100),
          fVar11 = (float)param_1[2] +
                   (*(float *)(*(long *)(param_3 + 0x38) + 0x68) *
                   (fVar11 + *(float *)(param_3 + 0x2e8))) / fVar11, fVar10 < fVar11 * fVar11)) ||
         ((0.0 < (float)param_1[3] &&
          (uVar7 = 0, fVar11 = *(float *)(*(long *)(param_3 + 0x38) + 100),
          fVar11 = (float)param_1[3] +
                   (*(float *)(*(long *)(param_3 + 0x38) + 0x68) *
                   (fVar11 + *(float *)(param_3 + 0x2e8))) / fVar11, fVar11 * fVar11 < fVar10))))
      goto LAB_00da1660;
    }
    if (param_1[4] != 0) {
      iVar6 = FUN_00da2f68(param_2);
      iVar5 = param_1[4];
      if ((((iVar6 != 0) && (uVar7 = 0, iVar5 == 1)) || ((iVar6 != 3 && (uVar7 = 0, iVar5 == 2))))
         || ((iVar6 != 4 && (uVar7 = 0, iVar5 == 3)))) goto LAB_00da1660;
    }
    uVar8 = FUN_00e6a488(*(undefined8 *)(param_1 + 6));
    if (((uVar8 & 1) == 0) || (uVar8 = FUN_00e6a488(*(undefined8 *)(param_1 + 8)), (uVar8 & 1) == 0)
       ) {
      lVar9 = FUN_00d9ea34(param_2);
      uVar7 = 0;
      if (lVar9 == 0) goto LAB_00da1660;
      uVar8 = FUN_00e6a488(*(undefined8 *)(param_1 + 6));
      if ((uVar8 & 1) == 0) {
        thunk_FUN_00d9ff34(local_68,*(undefined8 *)(param_1 + 6));
        FUN_00d9ff84(local_60,local_68[0]);
        uVar8 = FUN_00d6bbac(lVar9,local_60[0],0);
        uVar7 = 0;
        if ((uVar8 & 1) == 0) goto LAB_00da1660;
      }
      uVar8 = FUN_00e6a488(*(undefined8 *)(param_1 + 8));
      if ((uVar8 & 1) == 0) {
        thunk_FUN_00d9ff34(local_68,*(undefined8 *)(param_1 + 8));
        FUN_00d9ff84(local_70,local_68[0]);
        uVar8 = FUN_00d6bbac(lVar9,local_70[0],0);
        uVar7 = 0;
        if ((uVar8 & 1) == 0) goto LAB_00da1660;
      }
    }
    uVar8 = FUN_00e6a488(*(undefined8 *)(param_1 + 10));
    if (((uVar8 & 1) == 0) ||
       (uVar8 = FUN_00e6a488(*(undefined8 *)(param_1 + 0xc)), (uVar8 & 1) == 0)) {
      lVar9 = FUN_00d9ea34(param_3);
      uVar7 = 0;
      if (lVar9 == 0) goto LAB_00da1660;
      uVar8 = FUN_00e6a488(*(undefined8 *)(param_1 + 10));
      if ((uVar8 & 1) == 0) {
        thunk_FUN_00d9ff34(local_68,*(undefined8 *)(param_1 + 10));
        FUN_00d9ff84(local_78,local_68[0]);
        uVar8 = FUN_00d6bbac(lVar9,local_78[0],0);
        uVar7 = 0;
        if ((uVar8 & 1) == 0) goto LAB_00da1660;
      }
      uVar8 = FUN_00e6a488(*(undefined8 *)(param_1 + 0xc));
      if ((uVar8 & 1) == 0) {
        thunk_FUN_00d9ff34(local_68,*(undefined8 *)(param_1 + 0xc));
        FUN_00d9ff84(local_80,local_68[0]);
        uVar8 = FUN_00d6bbac(lVar9,local_80[0],0);
        uVar7 = 0;
        if ((uVar8 & 1) == 0) goto LAB_00da1660;
      }
    }
    uVar7 = 1;
  }
LAB_00da1660:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}




bool FUN_00da1690(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_00da1180(param_1,param_2,param_3 & 1);
  return lVar1 != 0;
}




float FUN_00da16b0(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x38) + 200);
  lVar2 = *plVar3;
  if (lVar2 == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.0;
    do {
      plVar3 = plVar3 + 1;
      fVar7 = *(float *)(lVar2 + 0xc);
      if (*(float *)(lVar2 + 0xc) <= 0.0) {
        lVar4 = *(long *)(param_1 + 0x40);
        fVar5 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
                (*(float *)(lVar4 + 0x78) +
                *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0));
        if (DAT_031abe80 <= fVar5) {
          fVar5 = DAT_031abe80;
        }
        fVar7 = DAT_031abdc0;
        if (DAT_031abdc0 <= fVar5) {
          fVar7 = fVar5;
        }
      }
      bVar1 = FUN_00da1284(lVar2,param_1,param_2,1);
      lVar2 = *plVar3;
      if ((bVar1 & fVar6 < fVar7) == 0) {
        fVar7 = fVar6;
      }
      fVar6 = fVar7;
    } while (lVar2 != 0);
  }
  return fVar6;
}




undefined8 FUN_00da17a0(void)

{
  return 1;
}




undefined8 FUN_00da17a8(void)

{
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00da17b0(void *param_1)

{
  memset(param_1,0,0x50);
  *(undefined4 *)((long)param_1 + 0x50) = 0xbf800000;
  *(undefined8 *)((long)param_1 + 0x54) = _DAT_03218ef8;
  *(ushort *)((long)param_1 + 100) = *(ushort *)((long)param_1 + 100) & 0xf800 | 0x30;
  *(int *)((long)param_1 + 0x5c) = (int)param_1;
  *(undefined4 *)((long)param_1 + 0x60) = 0xff000000;
  return;
}




void FUN_00da1810(long param_1)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff98 | 0x21;
  return;
}




void FUN_00da182c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff98 | 0x22;
  return;
}




void FUN_00da184c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff98 | 0x43;
  return;
}




void FUN_00da186c(undefined8 *param_1)

{
  param_1[2] = "CenterBody";
  *param_1 = "Effect_TalentStandard";
  *(ushort *)((long)param_1 + 100) = *(ushort *)((long)param_1 + 100) & 0xfff0 | 10;
  return;
}




void FUN_00da189c(undefined8 *param_1)

{
  param_1[2] = "CenterBody";
  *param_1 = "Effect_TalentStrong";
  *(ushort *)((long)param_1 + 100) = *(ushort *)((long)param_1 + 100) & 0xfff0 | 10;
  return;
}




void FUN_00da18cc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00da18d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00da18dc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00da18e4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x48) = param_1;
  return;
}




void FUN_00da18ec(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}




void FUN_00da18f4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00da18fc(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff7 | (param_2 & 1) << 3;
  return;
}




void FUN_00da1914(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xffef | (param_2 & 1) << 4;
  return;
}




void FUN_00da192c(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff7f | (param_2 & 1) << 7;
  return;
}




void FUN_00da1944(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x4c) = param_1;
  *(ushort *)(param_2 + 100) = *(ushort *)(param_2 + 100) | 0x100;
  return;
}




void FUN_00da1958(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00da1960(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00da1968(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfdff | (param_2 & 1) << 9;
  return;
}




void FUN_00da1980(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff9f | (param_2 & 3) << 5;
  return;
}




void FUN_00da1998(float param_1,float param_2,float param_3,long param_4)

{
  *(char *)(param_4 + 0x60) = (char)(int)(param_1 * 255.0);
  *(char *)(param_4 + 0x61) = (char)(int)(param_2 * 255.0);
  *(char *)(param_4 + 0x62) = (char)(int)(param_3 * 255.0);
  return;
}




void FUN_00da19c8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x50) = param_1;
  return;
}




void FUN_00da19d0(float param_1,long param_2)

{
  *(char *)(param_2 + 99) = (char)(int)(param_1 * 255.0);
  return;
}




void FUN_00da19e8(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x54) = param_1;
  *(undefined4 *)(param_3 + 0x58) = param_2;
  return;
}




void FUN_00da19f0(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x54) = *param_2;
  return;
}




void FUN_00da19fc(long param_1)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 0x400;
  return;
}




void FUN_00da1a0c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00da1a14(long param_1,long param_2,long param_3,undefined8 param_4)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint local_e8 [2];
  byte *local_e0;
  int local_d8 [2];
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined1 local_54;
  undefined4 local_53;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    local_c0 = 0;
    uVar3 = *(ushort *)(param_2 + 0x88) & 0x1f;
    if (((uVar3 == 0x1f) || (1 < *(ushort *)(param_2 + (ulong)uVar3 * 0x38 + 0x90) - 3)) ||
       (*(char *)(param_1 + 100) < '\0')) {
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_4,param_1 + 0x5c);
      }
      if (param_3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00d9e99c(param_3);
      }
      local_d8[0] = 0;
      FUN_00da1cfc(param_1,uVar3 & 1,param_4,local_d8);
      if (local_d8[0] != 0) {
        uStack_a0 = 0;
        local_a8 = (undefined1 *)0x0;
        lStack_b0 = 0;
        local_b8 = 0;
        local_98 = local_d8[0];
        local_94 = 0xffffffff00000000;
        local_84 = 0xff000000;
        local_7c = _DAT_03218ef8;
        local_74 = DAT_03218f40;
        local_6c = DAT_03218f48;
        local_8c = 0;
        local_68 = 0;
        local_60 = 0;
        local_5c = 2;
        local_54 = 1;
        local_53 = 1;
        FUN_00da1dc4(param_1,&local_b8,param_3,param_2);
        if (*(code **)(param_1 + 0x40) != (code *)0x0) {
          (**(code **)(param_1 + 0x40))(param_4,&local_74,&local_68,(long)&local_68 + 4,&local_60);
        }
        local_e0 = (byte *)0x0;
        if (*(code **)(param_1 + 0x30) == (code *)0x0) {
          if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(param_4,auStack_d0);
          }
        }
        else {
          (**(code **)(param_1 + 0x30))(param_4,&local_c0,&local_e0,&lStack_b0);
          if (lStack_b0 != 0) {
            lStack_b0 = FUN_00d5a5c4(param_2);
          }
        }
        local_e8[0] = 0x811c9dc5;
        local_b8 = local_c0;
        if (local_e0 == (byte *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0x811c9dc5;
          if (*local_e0 != 0) {
            uVar3 = 0x811c9dc5;
            uVar6 = (uint)*local_e0;
            pbVar7 = local_e0;
            do {
              pbVar7 = pbVar7 + 1;
              uVar3 = (uVar3 ^ uVar6) * 0x1000193;
              uVar6 = (uint)*pbVar7;
            } while (*pbVar7 != 0);
          }
        }
        local_8c = CONCAT44(uVar3,(undefined4)local_8c);
        local_a8 = (undefined1 *)0x0;
        if (*(long *)(param_1 + 0x38) != 0) {
          local_a8 = auStack_d0;
        }
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar7 == (byte *)0x0) {
          local_e8[0] = 0;
        }
        else {
          uVar3 = (uint)*pbVar7;
          if (*pbVar7 != 0) {
            do {
              pbVar7 = pbVar7 + 1;
              local_e8[0] = (local_e8[0] ^ uVar3) * 0x1000193;
              uVar3 = (uint)*pbVar7;
            } while (*pbVar7 != 0);
          }
        }
        uVar1 = *(ushort *)(param_1 + 100) & 7;
        if (uVar1 == 3) {
          FUN_00d5a578(param_2,&local_b8,*(undefined8 *)(param_1 + 0x18));
        }
        else if (uVar1 == 2) {
          FUN_00d5a560(param_2,&local_b8,local_e8);
        }
        else if (uVar1 == 1) {
          FUN_00d5a548(param_2,&local_b8);
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00da1cfc(undefined8 *param_1,ulong param_2,undefined8 param_3,uint *param_4)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_5c [36];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar4 = (byte *)*param_1;
  if (pbVar4 == (byte *)0x0) {
    if ((code *)param_1[4] != (code *)0x0) {
      (*(code *)param_1[4])(param_3,local_5c,0x24);
      pbVar4 = local_5c;
      goto LAB_00da1d60;
    }
  }
  else {
    pbVar1 = (byte *)param_1[1];
    if ((param_2 & 1) == 0) {
      pbVar1 = pbVar4;
    }
    if ((byte *)param_1[1] != (byte *)0x0) {
      pbVar4 = pbVar1;
    }
LAB_00da1d60:
    if (*pbVar4 != 0) {
      uVar3 = 0x811c9dc5;
      uVar5 = (uint)*pbVar4;
      do {
        pbVar4 = pbVar4 + 1;
        uVar3 = (uVar3 ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar4;
      } while (*pbVar4 != 0);
      goto LAB_00da1d98;
    }
  }
  uVar3 = 0;
LAB_00da1d98:
  *param_4 = uVar3;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00da1dc4(long param_1,long param_2,long param_3,long param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00d9e99c(param_3);
    uVar2 = ~uVar2 & 1;
  }
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x48);
  *(byte *)(param_2 + 100) = (byte)(*(ushort *)(param_1 + 100) >> 3) & 1;
  *(byte *)(param_2 + 0x65) = (byte)(*(ushort *)(param_1 + 100) >> 4) & 1;
  *(uint *)(param_2 + 0x5c) = *(ushort *)(param_1 + 100) >> 5 & 3;
  uVar1 = *(ushort *)(param_1 + 100);
  *(uint *)(param_2 + 0x60) = uVar2;
  *(byte *)(param_2 + 0x66) = (byte)(uVar1 >> 7) & 1;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x5c);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00d5babc(param_3);
  }
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *(byte *)(param_2 + 0x67) = *(byte *)(param_1 + 0x65) & 1;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x4c);
  *(byte *)(param_2 + 0x68) = (byte)((ushort)*(undefined2 *)(param_1 + 100) >> 9) & 1;
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x60);
  if (*(float *)(param_1 + 0x50) <= 0.0) {
    if ((*(byte *)(param_1 + 0x65) >> 2 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(*(long *)(param_4 + 0x38) + 0x1d0);
    }
  }
  else {
    *(float *)(param_2 + 0x38) = *(float *)(param_1 + 0x50);
  }
  *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_1 + 0x54);
  return;
}




void FUN_00da1ecc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x65) >> 1 & 1) == 0) {
    FUN_00d5a6dc();
    return;
  }
  FUN_00d5a6f4(param_2,*(undefined4 *)(param_1 + 0x5c));
  return;
}




undefined4 FUN_00da1f1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00da1f24(void *param_1)

{
  memset(param_1,0,0x50);
  *(undefined4 *)((long)param_1 + 0x50) = 0xbf800000;
  *(undefined8 *)((long)param_1 + 0x54) = _DAT_03218ef8;
  *(ushort *)((long)param_1 + 100) = *(ushort *)((long)param_1 + 100) & 0xf800 | 0x30;
  *(int *)((long)param_1 + 0x5c) = (int)param_1;
  *(undefined4 *)((long)param_1 + 0x60) = 0xff000000;
  return;
}




void FUN_00da1f84(long param_1)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff98 | 0x21;
  return;
}




void FUN_00da1fa0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff98 | 0x22;
  return;
}




void FUN_00da1fc0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff98 | 0x43;
  return;
}




void FUN_00da1fe0(undefined8 *param_1)

{
  param_1[2] = "CenterBody";
  *param_1 = "Effect_TalentStandard";
  *(ushort *)((long)param_1 + 100) = *(ushort *)((long)param_1 + 100) & 0xfff0 | 10;
  return;
}

