// functions/0099b — 55 functions
#include "libGameKindred.h"




void FUN_0099b05c(void)

{
  return;
}




void FUN_0099b060(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_027bfa98;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}




void FUN_0099b09c(long param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(byte *)(param_1 + 0x28) = param_3 & 1;
  return;
}




undefined8 FUN_0099b0ac(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_00e6a474("__HUD__");
  uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
  puVar2 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_009c6214(*puVar2,*(undefined4 *)(param_1 + 0x24));
  }
  else {
    FUN_009c61d8();
  }
  return 1;
}




void FUN_0099b134(void)

{
  return;
}




void FUN_0099b138(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bfb20;
  return;
}




void FUN_0099b168(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return;
}




undefined8 FUN_0099b170(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float local_1a0;
  float fStack_19c;
  float local_198;
  undefined1 auStack_168 [96];
  long local_108 [20];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 0x24) == 1) {
    FUN_00d4d9e8(auStack_168);
    FUN_00d4dabc(auStack_168,0x2000);
    FUN_00d4d364(auStack_168,0);
    local_1a8 = DAT_03218f38;
    local_1b0 = (float)DAT_03218f30;
    fStack_1ac = (float)((ulong)DAT_03218f30 >> 0x20);
    uVar6 = FUN_00d25570(param_2);
    FUN_00d55794(uVar6,&local_1b0,0);
    uVar5 = FUN_00d9e840(auStack_168,local_108,0x20,0);
    if (uVar5 != 0) {
      uVar10 = (ulong)uVar5;
      fVar13 = -1.0;
      plVar11 = local_108;
      lVar7 = 0;
      do {
        lVar9 = *plVar11;
        cVar4 = FUN_00d55870(lVar9);
        lVar8 = lVar7;
        fVar12 = fVar13;
        if (cVar4 == '\x02') {
          local_198 = DAT_03218f38;
          local_1a0 = (float)DAT_03218f30;
          fStack_19c = (float)((ulong)DAT_03218f30 >> 0x20);
          FUN_00d55794(lVar9,&local_1a0,0);
          fVar12 = (local_1a0 - local_1b0) * (local_1a0 - local_1b0) +
                   (fStack_19c - fStack_1ac) * (fStack_19c - fStack_1ac) +
                   (local_198 - local_1a8) * (local_198 - local_1a8);
          lVar8 = lVar9;
          if (lVar7 != 0 && fVar13 <= fVar12) {
            lVar8 = lVar7;
            fVar12 = fVar13;
          }
        }
        fVar13 = fVar12;
        uVar10 = uVar10 - 1;
        plVar11 = plVar11 + 1;
        lVar7 = lVar8;
      } while (uVar10 != 0);
      if (lVar8 != 0) {
        local_1b8 = DAT_03218f38;
        local_1c0 = DAT_03218f30;
        FUN_00d55794(lVar8,&local_1c0,0);
        lVar7 = FUN_00d25570(param_2);
        uVar2 = *(undefined4 *)(lVar7 + 0x260);
        uVar1 = 0xffffffff;
LAB_0099b434:
        uVar6 = 1;
        FUN_00d061a8(&local_1a0,uVar2,uVar1,&local_1c0,*(undefined4 *)(param_1 + 0x28),1);
        FUN_00ce20fc(&local_1a0);
        goto LAB_0099b45c;
      }
    }
  }
  else if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00d4d9e8(auStack_168);
    FUN_00d4dabc(auStack_168,0x10);
    FUN_00d4d364(auStack_168,0);
    local_1a8 = DAT_03218f38;
    local_1b0 = (float)DAT_03218f30;
    fStack_1ac = (float)((ulong)DAT_03218f30 >> 0x20);
    uVar6 = FUN_00d25570(param_2);
    FUN_00d55794(uVar6,&local_1b0,0);
    uVar5 = FUN_00d9e840(auStack_168,local_108,200,0);
    if (uVar5 != 0) {
      uVar10 = (ulong)uVar5;
      fVar13 = -1.0;
      plVar11 = local_108;
      lVar7 = 0;
      do {
        lVar9 = *plVar11;
        cVar4 = FUN_00d55870(lVar9);
        lVar8 = lVar7;
        fVar12 = fVar13;
        if (cVar4 == '\x01') {
          local_198 = DAT_03218f38;
          local_1a0 = (float)DAT_03218f30;
          fStack_19c = (float)((ulong)DAT_03218f30 >> 0x20);
          FUN_00d55794(lVar9,&local_1a0,0);
          fVar12 = (local_1a0 - local_1b0) * (local_1a0 - local_1b0) +
                   (fStack_19c - fStack_1ac) * (fStack_19c - fStack_1ac) +
                   (local_198 - local_1a8) * (local_198 - local_1a8);
          lVar8 = lVar9;
          if (lVar7 != 0 && fVar13 <= fVar12) {
            lVar8 = lVar7;
            fVar12 = fVar13;
          }
        }
        fVar13 = fVar12;
        uVar10 = uVar10 - 1;
        plVar11 = plVar11 + 1;
        lVar7 = lVar8;
      } while (uVar10 != 0);
      if (lVar8 != 0) {
        local_1b8 = DAT_03218f38;
        local_1c0 = DAT_03218f30;
        FUN_00d55794(lVar8,&local_1c0,0);
        uVar1 = *(undefined4 *)(lVar8 + 0x260);
        uVar2 = 0xffffffff;
        goto LAB_0099b434;
      }
    }
  }
  uVar6 = 2;
LAB_0099b45c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}




void FUN_0099b498(void)

{
  return;
}




void FUN_0099b49c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bfba8;
  FUN_008fa54c(param_1 + 5,&DAT_01e277f2);
  *(undefined4 *)(param_1 + 9) = DAT_03218f38;
  param_1[8] = DAT_03218f30;
  return;
}




void FUN_0099b4f4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  FUN_008fce60(param_1 + 0x28,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x40) = *param_3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0099b578(long param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x30);
    }
    if ((uVar4 != 0) ||
       (iVar3 = FUN_0090d610((byte *)(param_1 + 0x28),0,0xffffffffffffffff,&DAT_01e277f2,0),
       iVar3 != 0)) {
      FUN_019889cc(&local_88,1,DAT_02e3ef88,0);
      local_44 = 0x3f800000;
      uStack_78 = 0;
      local_80 = 0x3f800000;
      uStack_68 = 0;
      uStack_70 = 0x3f80000000000000;
      uStack_58 = 0x3f800000;
      local_60 = 0;
      local_50 = *(float *)(param_1 + 0x40) + 0.0;
      fStack_4c = *(float *)(param_1 + 0x44) + 0.0;
      local_48 = *(float *)(param_1 + 0x48) + 0.0;
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        param_1 = param_1 + 0x29;
      }
      else {
        param_1 = *(long *)(param_1 + 0x38);
      }
      FUN_00d76078(local_88,param_1,&local_80);
      uVar5 = 1;
      goto LAB_0099b66c;
    }
  }
  uVar5 = 2;
LAB_0099b66c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_0099b694(void)

{
  return;
}




void FUN_0099b698(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bfc30;
  FUN_008fa54c(param_1 + 5,&DAT_01e277f2);
  *(undefined4 *)(param_1 + 9) = DAT_03218f38;
  param_1[8] = DAT_03218f30;
  return;
}




void FUN_0099b6f0(undefined4 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  FUN_008fce60(param_2 + 0x28,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  *(undefined4 *)(param_2 + 0x4c) = param_1;
  *(undefined8 *)(param_2 + 0x40) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0099b784(long param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x30);
    }
    if ((uVar4 != 0) ||
       (iVar3 = FUN_0090d610((byte *)(param_1 + 0x28),0,0xffffffffffffffff,&DAT_01e277f2,0),
       iVar3 != 0)) {
      FUN_019889cc(&local_90,1,DAT_02e3ef88,0);
      local_4c = 0x3f800000;
      uStack_70 = 0;
      local_78 = 0x3f80000000000000;
      fVar7 = *(float *)(param_1 + 0x4c);
      fVar6 = sinf(fVar7);
      fVar7 = cosf(fVar7);
      local_60 = fVar6 * 0.0;
      fStack_64 = fVar7 * 0.0;
      local_88 = fVar7 - local_60;
      fStack_84 = fStack_64 - local_60;
      local_80 = fStack_64 - fVar6;
      local_68 = fVar6 + fStack_64;
      fStack_64 = local_60 + fStack_64;
      local_60 = local_60 + fVar7;
      local_58 = *(float *)(param_1 + 0x40) + 0.0;
      fStack_54 = *(float *)(param_1 + 0x44) + 0.0;
      local_50 = *(float *)(param_1 + 0x48) + 0.0;
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        param_1 = param_1 + 0x29;
      }
      else {
        param_1 = *(long *)(param_1 + 0x38);
      }
      fStack_7c = fStack_84;
      fStack_5c = fStack_64;
      FUN_00d76078(local_90,param_1,&local_88);
      uVar5 = 1;
      goto LAB_0099b8b4;
    }
  }
  uVar5 = 2;
LAB_0099b8b4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_0099b8e0(void)

{
  return;
}




void FUN_0099b8e4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bfcb8;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_0099b918(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_0099b920(long param_1)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return 2;
  }
  lVar2 = FUN_00940c10();
  uVar4 = 2;
  if (5 < *(int *)(param_1 + 0x24) - 1U) {
    return 2;
  }
  cVar3 = *(char *)(lVar2 + 0x29);
  switch(*(int *)(param_1 + 0x24)) {
  case 1:
    lVar2 = FUN_00940c10();
    cVar3 = *(char *)(lVar2 + 0x28);
  case 6:
    uVar4 = 1;
    if (cVar3 == '\0') {
      uVar4 = 2;
    }
    goto switchD_0099b96c_caseD_3;
  case 2:
    if (cVar3 != '\0') {
      return 1;
    }
    lVar2 = FUN_00940c10();
    cVar3 = *(char *)(lVar2 + 0x2b);
    break;
  default:
    goto switchD_0099b96c_caseD_3;
  case 4:
    if (cVar3 != '\0') {
      return 1;
    }
    lVar2 = FUN_00940c10();
    cVar3 = *(char *)(lVar2 + 0x2c);
  }
  uVar4 = 1;
  if (cVar3 == '\0') {
    uVar4 = 2;
  }
switchD_0099b96c_caseD_3:
  return uVar4;
}




void FUN_0099b9c4(void)

{
  return;
}




void FUN_0099b9c8(undefined8 *param_1)

{
  FUN_00d0aac4();
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_027bfd40;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_0099ba00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  return;
}




undefined8 FUN_0099ba0c(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 == 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x38);
  }
  else {
    puVar4 = auStack_c8;
    uVar2 = FUN_00e6a474(lVar5);
    uVar2 = FUN_0091ed5c(lVar5,uVar2,0x12345678);
    puVar3 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2)
    ;
    FUN_00e6a93c(auStack_c8,0x80,"%s-%d",*(undefined8 *)(param_1 + 0x38),*puVar3);
  }
  FUN_00907848(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0099badc(void)

{
  return;
}




void FUN_0099bae0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bfdc8;
  param_1[5] = 0;
  return;
}




void FUN_0099bb14(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_0099bb1c(long param_1)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0x811c9dc5;
  pbVar3 = *(byte **)(param_1 + 0x28);
  uVar4 = (uint)*pbVar3;
  if (*pbVar3 != 0) {
    do {
      pbVar3 = pbVar3 + 1;
      uVar2 = (uVar2 ^ uVar4) * 0x1000193;
      uVar4 = (uint)*pbVar3;
    } while (*pbVar3 != 0);
  }
  FUN_00984fe4(auStack_50,uVar2);
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}




void FUN_0099bba4(void)

{
  return;
}




void FUN_0099bba8(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




undefined8 FUN_0099bbcc(void)

{
  return 2;
}




undefined8 FUN_0099bbd4(void)

{
  return 1;
}




void FUN_0099bbdc(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bc00(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bc24(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bc48(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bc6c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bc90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027beed8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  return;
}




void FUN_0099bcd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027beed8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_0099bd18(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bd3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027befe8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  return;
}




void FUN_0099bd7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027befe8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_0099bdc4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bde8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bf0f8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  return;
}




void FUN_0099be28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bf0f8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_0099be70(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099be94(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099beb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bf290;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  return;
}




void FUN_0099bef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bf290;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_0099bf40(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bf64(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bf88(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bfac(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bfd0(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_0099bff4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}

