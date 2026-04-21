// functions/00c98 — 23 functions
#include "libGameKindred.h"




void thunk_FUN_00c98204(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 1) {
    uVar2 = 1;
  }
  FUN_00c97d4c(param_1,uVar2);
  FUN_00f048e0(auStack_48,DAT_0313c88c,*(undefined4 *)(param_1 + 0xbc));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c98280(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 2) {
    uVar2 = 2;
  }
  FUN_00c97d4c(param_1,uVar2);
  FUN_00f048e0(auStack_48,DAT_0313c88c,*(undefined4 *)(param_1 + 0xbc));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c98300(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar2 = 0;
  }
  FUN_00c97d4c(param_1,uVar2);
  FUN_00f048e0(auStack_48,DAT_0313c88c,*(undefined4 *)(param_1 + 0xbc));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9802c(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int local_3c;
  undefined1 auStack_38 [8];
  int *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0xff) {
    for (plVar3 = *(long **)(param_1 + 0x2b0); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (*(int *)(plVar3 + 4) <= param_2) {
        if (param_2 <= *(int *)(plVar3 + 4)) {
          local_30 = &local_3c;
          local_3c = param_2;
          lVar2 = FUN_00c983dc(param_1 + 0x2a8,&local_3c,&DAT_01bbf966,&local_30,auStack_38);
          FUN_00aade34(*(undefined8 *)(lVar2 + 0x28),param_3);
          break;
        }
        plVar3 = plVar3 + 1;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00c980d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}




void FUN_00c980dc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x2760) = param_2 & 1;
  return;
}




void * FUN_00c980ec(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1738);
  FUN_00aad020();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c98154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c9815c(param_1,param_2,param_5);
  return;
}




void FUN_00c9815c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(char *)(param_1 + 0x2761) == '\0') || (*(char *)(param_1 + 0x2760) == '\0')) {
    iVar1 = 0xff;
    if (*(int *)(param_3 + 0x1728) != *(int *)(param_1 + 0xb8)) {
      iVar1 = *(int *)(param_3 + 0x1728);
    }
    FUN_00c97af0(param_1,iVar1);
    FUN_00f048e0(auStack_58,DAT_0313c888,iVar1);
    FUN_00f04760(param_1,auStack_58,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c98204(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 1) {
    uVar2 = 1;
  }
  FUN_00c97d4c(param_1,uVar2);
  FUN_00f048e0(auStack_48,DAT_0313c88c,*(undefined4 *)(param_1 + 0xbc));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c98280(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 2) {
    uVar2 = 2;
  }
  FUN_00c97d4c(param_1,uVar2);
  FUN_00f048e0(auStack_48,DAT_0313c88c,*(undefined4 *)(param_1 + 0xbc));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c98300(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar2 = 0;
  }
  FUN_00c97d4c(param_1,uVar2);
  FUN_00f048e0(auStack_48,DAT_0313c88c,*(undefined4 *)(param_1 + 0xbc));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9837c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_00c98384(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  *param_3 = param_4;
  *(undefined4 *)(param_3 + 1) = param_1;
  *(undefined4 *)((long)param_3 + 0xc) = param_2;
  return;
}




void FUN_00c98390(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00c98390(param_1,*param_2);
    FUN_00c98390(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_00c983dc(long param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar4 = (undefined8 *)(param_1 + 8);
  puVar5 = puVar4;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar5 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar4 = puVar3, *param_2 < *(int *)(puVar4 + 4)) {
        puVar3 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_00c98454;
      }
      if (*param_2 <= *(int *)(puVar4 + 4)) break;
      puVar5 = puVar4 + 1;
      puVar3 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
LAB_00c98454:
  pvVar6 = (void *)*puVar5;
  bVar1 = pvVar6 == (void *)0x0;
  if (bVar1) {
    pvVar6 = operator_new(0x38);
    uVar2 = *(undefined4 *)*param_4;
    *(undefined8 *)((long)pvVar6 + 0x28) = 0;
    *(undefined8 *)((long)pvVar6 + 0x30) = 0;
    *(undefined4 *)((long)pvVar6 + 0x20) = uVar2;
    FUN_00c984b0(param_1,puVar4,puVar5,pvVar6);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar6;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_00c984b0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c98504(long *param_1,undefined4 *param_2,ulong param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  char *__s;
  float fVar9;
  float fVar10;
  long lVar11;
  float fVar12;
  ulong local_90 [2];
  void *local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02806e48;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x71;
  FUN_00f017e8(plVar4);
  param_1[0x71] = (long)&PTR_FUN_027c1f80;
  memset(param_1 + 0x82,0,0x78);
  *(undefined4 *)(param_1 + 0x92) = param_4;
  *(undefined1 *)((long)param_1 + 0x494) = 0;
  FUN_008fa54c(local_90,"skins_card_back");
  FUN_008fce60(param_1 + 0x82,local_90);
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x92) = *param_2;
  }
  if ((*(float *)(param_1 + 0x79) != -286.5) || (*(float *)((long)param_1 + 0x3cc) != -379.0)) {
    param_1[0x79] = -0x3c427fff3c70c000;
    FUN_0091ada4(plVar4);
  }
  local_90[0] = 0;
  (**(code **)(param_1[0x71] + 0x28))(plVar4,local_90);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar1,1);
  FUN_00f023ec(plVar4,plVar2,1);
  FUN_00f023ec(plVar4,plVar3,1);
  local_90[0] = 0x443d8000440f4000;
  FUN_00f13f18(param_1,local_90);
  fVar9 = _DAT_03218efc;
  fVar10 = DAT_03218ef8;
  if (*(uint *)(param_1 + 0x92) < 4) {
    plVar4 = param_1 + 0x85;
    switch(*(uint *)(param_1 + 0x92)) {
    case 0:
      FUN_008fa54c(local_90,"blueprint_frame_rare");
      FUN_008fce60(plVar4,local_90);
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      lVar11 = -0x3d6bffff3dc40000;
      fVar12 = 130.0;
      break;
    case 1:
      FUN_008fa54c(local_90,"blueprint_frame_rare");
      FUN_008fce60(plVar4,local_90);
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      fVar12 = 130.0;
      fVar9 = 89.0;
      fVar10 = 90.0;
      lVar11 = NEON_fmov(0xc1800000,4);
      break;
    case 2:
      FUN_008fa54c(local_90,"blueprint_frame_epic");
      FUN_008fce60(plVar4,local_90);
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      lVar11 = -0x3e7fffff3e700000;
      fVar12 = 130.0;
      fVar9 = 70.0;
      fVar10 = 72.0;
      break;
    case 3:
      FUN_008fa54c(local_90,"blueprint_frame_legendary");
      FUN_008fce60(plVar4,local_90);
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      lVar11 = -0x3e57ffff3e400000;
      fVar12 = 120.0;
      fVar10 = 62.0;
      fVar9 = 62.0;
    }
    param_1[0x91] = lVar11;
  }
  else {
    fVar12 = 130.0;
  }
  FUN_00f0e6e8(plVar2,0);
  FUN_00f0e6e8(plVar1,0);
  FUN_00c989f8(param_1,param_2);
  if ((*(float *)(param_1 + 0x1f) != 286.5) || (*(float *)((long)param_1 + 0xfc) != fVar12)) {
    *(undefined4 *)(param_1 + 0x1f) = 0x438f4000;
    *(float *)((long)param_1 + 0xfc) = fVar12;
    FUN_0091ada4(plVar1);
  }
  local_90[0] = 0x3f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,local_90);
  FUN_00f13f08(0x43b90000,0x43b90000,plVar1);
  uVar7 = FUN_00e6a488(*(undefined8 *)(param_2 + 4));
  if ((uVar7 & 1) == 0) {
    FUN_008fa54c(local_90,"skins_card_hero_");
    FUN_008fce60(param_1 + 0x8e,local_90);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    __s = *(char **)(param_2 + 4);
    sVar8 = strlen(__s);
    FUN_0090de84(param_1 + 0x8e,__s,sVar8);
    if ((*(float *)(param_1 + 0x5b) != fVar10) || (*(float *)((long)param_1 + 0x2dc) != fVar9)) {
      *(float *)(param_1 + 0x5b) = fVar10;
      *(float *)((long)param_1 + 0x2dc) = fVar9;
      FUN_0091ada4(plVar3);
    }
    if ((*(float *)(param_1 + 0x5d) != 0.5) || (*(float *)((long)param_1 + 0x2ec) != 0.5)) {
      param_1[0x5d] = 0x3f0000003f000000;
      FUN_0091ada4(plVar3);
    }
    FUN_00f0e6e8(plVar3,0);
    uVar5 = *(uint *)((long)param_1 + 0x31c);
    if ((uVar5 & 0x7f80) != 0x3300) {
      *(uint *)((long)param_1 + 0x31c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x3300;
      FUN_0091ada4(plVar3);
    }
  }
  if ((*(float *)(param_1 + 0x3d) != *(float *)(param_1 + 0x91)) ||
     (*(float *)((long)param_1 + 0x1ec) != *(float *)((long)param_1 + 0x48c))) {
    param_1[0x3d] = param_1[0x91];
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0x3e) != 2.0) || (*(float *)((long)param_1 + 500) != 2.0)) {
    param_1[0x3e] = 0x4000000040000000;
    FUN_0091ada4(plVar2);
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c989f8(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == (int *)0x0) goto LAB_00c98c40;
  iVar2 = FUN_00e6a474(*(undefined8 *)(param_2 + 0x10));
  if (iVar2 != 0) {
    FUN_00e6a8a8(local_b8,"build://%s",*(undefined8 *)(param_2 + 0x10));
    FUN_008fa54c(local_d0,local_b8);
    FUN_008fce60(param_1 + 0x440,local_d0);
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
  }
  iVar2 = FUN_00e6a474(*(undefined8 *)(param_2 + 0x12));
  if (iVar2 != 0) {
    FUN_008fa54c(local_b8,*(undefined8 *)(param_2 + 0x12));
    FUN_008fce60(param_1 + 0x458,local_b8);
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  if (*param_2 == 0) {
    if ((*(byte *)(param_1 + 0x440) & 1) == 0) {
      if (*(byte *)(param_1 + 0x440) >> 1 == 0) {
LAB_00c98b68:
        FUN_00e6a8a8(local_b8,"build://Common_%02d.png",param_2[0x15] / 6 + 1);
        FUN_008fa54c(local_d0,local_b8);
        FUN_008fce60(param_1 + 0x440,local_d0);
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
      }
    }
    else if (*(long *)(param_1 + 0x448) == 0) goto LAB_00c98b68;
    if ((*(byte *)(param_1 + 0x458) & 1) == 0) {
      if (*(byte *)(param_1 + 0x458) >> 1 != 0) goto LAB_00c98c40;
    }
    else if (*(long *)(param_1 + 0x460) != 0) goto LAB_00c98c40;
    iVar2 = param_2[0x15] % 6;
  }
  else {
    if ((*(byte *)(param_1 + 0x440) & 1) == 0) {
      if (*(byte *)(param_1 + 0x440) >> 1 == 0) {
LAB_00c98ad8:
        FUN_00e6a8a8(local_b8,"build://%s.png",*(undefined8 *)(param_2 + 8));
        FUN_008fa54c(local_d0,local_b8);
        FUN_008fce60(param_1 + 0x440,local_d0);
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
      }
    }
    else if (*(long *)(param_1 + 0x448) == 0) goto LAB_00c98ad8;
    if ((*(byte *)(param_1 + 0x458) & 1) == 0) {
      if (*(byte *)(param_1 + 0x458) >> 1 != 0) goto LAB_00c98c40;
    }
    else if (*(long *)(param_1 + 0x460) != 0) goto LAB_00c98c40;
    iVar2 = param_2[0x15] % 9;
  }
  FUN_00e6a8a8(local_b8,"card_image_%d",iVar2);
  FUN_008fa54c(local_d0,local_b8);
  FUN_008fce60(param_1 + 0x458,local_d0);
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
LAB_00c98c40:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c98c68(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  void *pvVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  void *pvVar10;
  size_t sVar11;
  byte bVar12;
  size_t sVar13;
  
  FUN_00c98eb8();
  bVar4 = *(byte *)(param_1 + 0x440);
  *(undefined1 *)(param_1 + 0x494) = 1;
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 != 0) {
LAB_00c98ca8:
      bVar12 = *(byte *)(param_1 + 0x458);
      if ((bVar12 & 1) == 0) {
        if (bVar12 >> 1 != 0) {
LAB_00c98cc4:
          if ((bVar4 & 1) == 0) {
            lVar9 = param_1 + 0x441;
            if ((bVar12 & 1) == 0) goto LAB_00c98ce8;
LAB_00c98cd8:
            lVar7 = *(long *)(param_1 + 0x468);
          }
          else {
            lVar9 = *(long *)(param_1 + 0x450);
            if ((bVar12 & 1) != 0) goto LAB_00c98cd8;
LAB_00c98ce8:
            lVar7 = param_1 + 0x459;
          }
          FUN_00f0e548(param_1 + 0xb8,lVar9,lVar7);
        }
      }
      else if (*(long *)(param_1 + 0x460) != 0) goto LAB_00c98cc4;
    }
  }
  else if (*(long *)(param_1 + 0x448) != 0) goto LAB_00c98ca8;
  sVar11 = DAT_0320ffb0;
  bVar4 = *(byte *)(param_1 + 0x428);
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x430);
  }
  sVar13 = (size_t)(DAT_0320ffa8 >> 1);
  sVar1 = sVar13;
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (sVar2 == sVar1) {
    pvVar10 = *(void **)(param_1 + 0x438);
    bVar12 = DAT_0320ffa8 & 1;
    pvVar3 = pvVar10;
    if ((bVar4 & 1) == 0) {
      pvVar3 = (void *)(param_1 + 0x429);
    }
    pcVar6 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar6 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar8 = (char *)(param_1 + 0x429);
        lVar9 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar8 != *pcVar6) goto LAB_00c98d80;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar5 = memcmp(pvVar3,pcVar6,sVar2), iVar5 != 0)) goto LAB_00c98dc0;
  }
  else {
LAB_00c98d80:
    if ((bVar4 & 1) == 0) {
      pvVar10 = (void *)(param_1 + 0x429);
    }
    else {
      pvVar10 = *(void **)(param_1 + 0x438);
    }
LAB_00c98dc0:
    FUN_00f0e548(param_1 + 0x1a8,PTR_s_build___MenuSkinsHeroesBlueprint_02be3630,pvVar10);
    bVar12 = DAT_0320ffa8 & 1;
    sVar13 = (size_t)(DAT_0320ffa8 >> 1);
    sVar11 = DAT_0320ffb0;
  }
  bVar4 = *(byte *)(param_1 + 0x470);
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x478);
  }
  if (bVar12 != 0) {
    sVar13 = sVar11;
  }
  if (sVar2 != sVar13) {
LAB_00c98e4c:
    if ((bVar4 & 1) == 0) {
      pvVar10 = (void *)(param_1 + 0x471);
    }
    else {
      pvVar10 = *(void **)(param_1 + 0x480);
    }
LAB_00c98e8c:
    FUN_00f0e548(param_1 + 0x298,PTR_s_build___MenuSkinsHeroesBlueprint_02be3630,pvVar10);
    return;
  }
  pvVar10 = *(void **)(param_1 + 0x480);
  pvVar3 = pvVar10;
  if ((bVar4 & 1) == 0) {
    pvVar3 = (void *)(param_1 + 0x471);
  }
  pcVar6 = DAT_0320ffb8;
  if (bVar12 == 0) {
    pcVar6 = &DAT_0320ffa9;
  }
  if ((bVar4 & 1) == 0) {
    if (sVar2 != 0) {
      pcVar8 = (char *)(param_1 + 0x471);
      lVar9 = -(ulong)(bVar4 >> 1);
      do {
        if (*pcVar8 != *pcVar6) goto LAB_00c98e4c;
        pcVar8 = pcVar8 + 1;
        lVar9 = lVar9 + 1;
        pcVar6 = pcVar6 + 1;
      } while (lVar9 != 0);
    }
  }
  else if ((sVar2 != 0) && (iVar5 = memcmp(pvVar3,pcVar6,sVar2), iVar5 != 0)) goto LAB_00c98e8c;
  return;
}




void FUN_00c98eb8(long param_1)

{
  *(undefined1 *)(param_1 + 0x494) = 0;
  if (*(long *)(param_1 + 0x188) != 0) {
    FUN_00f0e628(param_1 + 0xb8);
  }
  if (*(long *)(param_1 + 0x278) != 0) {
    FUN_00f0e628(param_1 + 0x1a8);
  }
  if (*(long *)(param_1 + 0x368) != 0) {
    FUN_00f0e628(param_1 + 0x298);
    return;
  }
  return;
}




void FUN_00c98f10(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  FUN_00f0e6bc(uVar2,param_1 + 0x1a8);
  FUN_00f0e6bc(uVar2,param_1 + 0x298);
  FUN_00f0e6bc(uVar2,param_1 + 0xb8);
  uVar1 = *(uint *)(param_1 + 0x84);
  if ((uVar1 & 0x7f80) == 0x6600) {
    return;
  }
  *(uint *)(param_1 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x6600;
  FUN_0091ada4(param_1);
  return;
}




void FUN_00c98f9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02806e48;
  if ((*(byte *)(param_1 + 0x8e) & 1) != 0) {
    operator_delete((void *)param_1[0x90]);
  }
  if ((*(byte *)(param_1 + 0x8b) & 1) != 0) {
    operator_delete((void *)param_1[0x8d]);
  }
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    operator_delete((void *)param_1[0x8a]);
  }
  if ((*(byte *)(param_1 + 0x85) & 1) != 0) {
    operator_delete((void *)param_1[0x87]);
  }
  if ((*(byte *)(param_1 + 0x82) & 1) != 0) {
    operator_delete((void *)param_1[0x84]);
  }
  FUN_00f01868(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

