// functions/00cf4 — 47 functions
#include "libGameKindred.h"




void FUN_00cf4010(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf4018(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = FUN_00d5048c(param_2);
  FUN_00d5a70c(uVar2,*(undefined4 *)(param_1 + 0x10));
  return;
}




void FUN_00cf4058(undefined8 *param_1)

{
  FUN_00cfc438();
  *(undefined8 *)((long)param_1 + 0x3c) = 0xffffffff3f800000;
  *param_1 = &PTR_FUN_0280f608;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xf0 | 1;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}




void FUN_00cf40b8(float param_1,undefined4 param_2,long param_3,undefined8 param_4,byte param_5,
                 byte param_6,undefined4 param_7,undefined8 param_8,byte param_9)

{
  *(undefined8 *)(param_3 + 0x10) = param_4;
  *(undefined4 *)(param_3 + 0x40) = param_7;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x3c) = param_2;
  *(undefined1 *)(param_3 + 0x31) = 1;
  *(byte *)(param_3 + 0x38) =
       param_5 & 1 | (param_6 & 1) << 1 | (param_9 & 1) << 2 | *(byte *)(param_3 + 0x38) & 0xf8;
  *(char *)(param_3 + 0x30) = (char)(int)(param_1 * 255.0);
  *(undefined8 *)(param_3 + 0x48) = param_8;
  return;
}




void FUN_00cf4110(float param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9,byte param_10)

{
  *(undefined1 *)(param_3 + 0x31) = 1;
  *(undefined8 *)(param_3 + 0x10) = param_4;
  *(undefined4 *)(param_3 + 0x34) = param_6;
  *(undefined4 *)(param_3 + 0x3c) = param_2;
  *(undefined4 *)(param_3 + 0x40) = param_8;
  *(char *)(param_3 + 0x30) = (char)(int)(param_1 * 255.0);
  *(byte *)(param_3 + 0x38) = *(byte *)(param_3 + 0x38) & 0xf8 | (param_10 & 1) << 2;
  *(undefined8 *)(param_3 + 0x48) = param_9;
  return;
}




void FUN_00cf4164(float param_1,undefined4 param_2,long param_3,undefined8 param_4,byte param_5,
                 byte param_6,undefined4 param_7,undefined8 param_8,byte param_9)

{
  *(undefined4 *)(param_3 + 0x3c) = param_2;
  *(undefined8 *)(param_3 + 0x10) = param_4;
  *(undefined4 *)(param_3 + 0x40) = param_7;
  *(undefined1 *)(param_3 + 0x31) = 1;
  *(undefined4 *)(param_3 + 0x34) = 1;
  *(byte *)(param_3 + 0x38) =
       param_5 & 1 | (param_6 & 1) << 1 | (param_9 & 1) << 2 | *(byte *)(param_3 + 0x38) & 0xf8;
  *(char *)(param_3 + 0x30) = (char)(int)(param_1 * 255.0);
  *(undefined8 *)(param_3 + 0x48) = param_8;
  return;
}




void FUN_00cf41bc(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x31);
  *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x10) = param_2;
  *(byte *)(param_1 + 0x31) = bVar1 + 1;
  return;
}




void FUN_00cf41d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_00cf41dc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf7 | (param_2 & 1) << 3;
  return;
}




void FUN_00cf41f4(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_60;
  char local_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar6 = FUN_00d5048c(param_2);
  plVar7 = (long *)FUN_00d5bae0();
  if ((plVar7 != (long *)0x0) &&
     (((*(byte *)(param_1 + 0x38) >> 3 & 1) == 0 ||
      ((iVar4 = FUN_00d51a94(param_2), iVar4 == 1 &&
       ((lVar10 = FUN_00d51778(param_2), lVar10 == 0 ||
        (uVar8 = FUN_00ced270(*(undefined4 *)(lVar10 + 0x260)), (uVar8 & 1) != 0)))))))) {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      local_5c[0] = '\0';
      (**(code **)(param_1 + 0x48))(param_2,local_5c);
      if (local_5c[0] == '\0') goto LAB_00cf43bc;
    }
    iVar4 = rand();
    if ((iVar4 % 0x100 <= (int)(uint)*(byte *)(param_1 + 0x30)) &&
       (((*(byte *)(param_1 + 0x38) & 1) == 0 ||
        (uVar8 = FUN_00ced270(*(undefined4 *)(lVar6 + 0x260)), (uVar8 & 1) != 0)))) {
      bVar1 = *(byte *)(param_1 + 0x31);
      iVar5 = rand();
      iVar4 = 0;
      if (bVar1 != 0) {
        iVar4 = iVar5 / (int)(uint)bVar1;
      }
      local_60 = iVar5 - iVar4 * (uint)bVar1;
      if (*(code **)(param_1 + 0x50) != (code *)0x0) {
        (**(code **)(param_1 + 0x50))(param_2,&local_60);
      }
      uVar11 = *(undefined8 *)(param_1 + (ulong)local_60 * 8 + 0x10);
      iVar4 = FUN_00d5cf60(lVar6);
      if (iVar4 != -1) {
        FUN_00d5cf60(lVar6);
        lVar6 = FUN_00d9e390();
      }
      if (*(int *)(param_1 + 0x34) == 1) {
        bVar1 = *(byte *)(param_1 + 0x38);
        uVar13 = *(undefined4 *)(param_1 + 0x3c);
        uVar12 = *(undefined4 *)(param_1 + 0x40);
        bVar3 = bVar1 >> 2 & 1;
        uVar9 = FUN_00d5babc(lVar6);
        (**(code **)(*plVar7 + 0x100))(uVar13,plVar7,uVar11,bVar1 >> 1 & 1,bVar3,uVar12,bVar3,uVar9)
        ;
      }
      else if (*(int *)(param_1 + 0x34) == 0) {
        bVar1 = *(byte *)(param_1 + 0x38);
        uVar12 = *(undefined4 *)(param_1 + 0x3c);
        uVar9 = FUN_00d5babc(lVar6);
        (**(code **)(*plVar7 + 0xf8))(uVar12,plVar7,uVar11,bVar1 >> 1 & 1,uVar9);
      }
    }
  }
LAB_00cf43bc:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf43f0(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f668;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return;
}




void FUN_00cf4428(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf4430(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_00d5048c(param_2);
  plVar1 = (long *)FUN_00d5bae0();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cf4464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}




void FUN_00cf4474(undefined8 param_1,undefined8 param_2)

{
  FUN_00d51a20(param_2);
  return;
}




void FUN_00cf447c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d51a3c(param_2);
  return;
}




void FUN_00cf4484(undefined8 param_1,undefined8 param_2)

{
  FUN_00d509e0(param_2);
  return;
}




void FUN_00cf448c(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_0280f6c8;
  memset(param_1 + 4,0,0x48);
  *(undefined2 *)(param_1 + 0xd) = 1;
  *(byte *)((long)param_1 + 0x6a) = *(byte *)((long)param_1 + 0x6a) & 0xf0;
  return;
}




void FUN_00cf44e8(undefined4 param_1,long param_2,undefined8 param_3,undefined2 param_4,byte param_5
                 )

{
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x18) = param_1;
  *(undefined2 *)(param_2 + 0x68) = param_4;
  *(byte *)(param_2 + 0x6a) = *(byte *)(param_2 + 0x6a) & 0xfe | param_5 & 1;
  return;
}




void FUN_00cf4514(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,byte param_5
                 )

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined2 *)(param_1 + 0x68) = param_4;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfe | param_5 & 1;
  return;
}




void FUN_00cf4540(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,byte param_5
                 )

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined2 *)(param_1 + 0x68) = param_4;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfe | param_5 & 1;
  return;
}




void FUN_00cf456c(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,byte param_5
                 )

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined2 *)(param_1 + 0x68) = param_4;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfe | param_5 & 1;
  return;
}




void FUN_00cf4598(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00cf45a0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 == 2) {
    puVar1 = (undefined8 *)(param_1 + 0x48);
  }
  else {
    if (param_3 != 1) {
      return;
    }
    puVar1 = (undefined8 *)(param_1 + 0x40);
  }
  *puVar1 = param_2;
  return;
}




void FUN_00cf45c4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}




void FUN_00cf45cc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_00cf45d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}




void FUN_00cf45dc(long param_1)

{
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x68);
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) | 2;
  return;
}




void FUN_00cf4600(long param_1)

{
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x68);
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) | 4;
  return;
}




void FUN_00cf4624(long param_1)

{
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x68);
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) | 8;
  return;
}




void FUN_00cf4648(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                 undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  uint uVar14;
  code *pcVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float __x;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_e0;
  undefined4 local_dc;
  float local_d8 [2];
  float local_d0 [2];
  float local_c8;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar9 = FUN_00ceab48();
  if ((uVar9 & 1) != 0) {
    bVar1 = *(byte *)(param_4 + 0x6a);
    lVar10 = FUN_00d5048c(param_5);
    if ((bVar1 & 1) == 0) {
      uVar4 = *(undefined4 *)(lVar10 + 0x260);
    }
    else {
      uVar4 = FUN_00d5cf60();
    }
    iVar5 = FUN_00d51964(param_5);
    if (iVar5 != 0) {
      uVar14 = 0;
      do {
        lVar10 = FUN_00d51954(param_5,uVar14);
        if ((lVar10 != 0) &&
           ((*(code **)(param_4 + 0x60) == (code *)0x0 ||
            (uVar9 = (**(code **)(param_4 + 0x60))(param_5,lVar10), (uVar9 & 1) != 0)))) {
          FUN_00d9ff2c(local_d8);
          if (*(long *)(param_4 + 0x10) == 0) {
            if (*(code **)(param_4 + 0x20) != (code *)0x0) {
              (**(code **)(param_4 + 0x20))(param_5,lVar10,local_d8);
            }
          }
          else {
            thunk_FUN_00d9ff34(local_d0);
            local_d8[0] = local_d0[0];
          }
          local_dc = *(undefined4 *)(param_4 + 0x18);
          local_e0 = (uint)*(ushort *)(param_4 + 0x68);
          if (*(code **)(param_4 + 0x28) == (code *)0x0) {
            pcVar15 = *(code **)(param_4 + 0x30);
            if (pcVar15 != (code *)0x0) {
              FUN_00d5048c(param_5);
              local_dc = (*pcVar15)();
            }
          }
          else {
            (**(code **)(param_4 + 0x28))(param_5,lVar10,&local_dc);
          }
          if (*(code **)(param_4 + 0x38) != (code *)0x0) {
            (**(code **)(param_4 + 0x38))(param_5,&local_e0);
          }
          local_f0 = 0;
          local_e8 = 0;
          if ((*(byte *)(param_4 + 0x6a) & 4) == 0) {
            if ((*(byte *)(param_4 + 0x6a) & 8) != 0) {
              uVar11 = FUN_00d5048c(param_5);
              FUN_00d55794(uVar11,local_d0,0);
              fVar16 = (float)FUN_00d51820(param_5);
              fVar16 = fVar16 - local_d0[0];
              param_3 = param_3 - local_c8;
              __x = fVar16 * fVar16 + 0.0 + param_3 * param_3;
              fVar13 = (float)DAT_03218f68;
              fVar18 = DAT_03218f70;
              if (1e-08 <= __x) {
                fVar18 = SQRT(__x);
                if (NAN(fVar18)) {
                  fVar18 = sqrtf(__x);
                }
                fVar13 = fVar16 / fVar18;
                fVar18 = param_3 / fVar18;
              }
              local_e8 = CONCAT44(fVar13,fVar18);
            }
          }
          else {
            uVar17 = FUN_00d51820(param_5);
            local_e8._4_4_ = uVar17;
            FUN_00d51820(param_5);
            local_e8 = CONCAT44(local_e8._4_4_,param_3);
          }
          if (((((uint)*(byte *)(param_4 + 0x6a) << 0x10) >> 0x11 & 1) == 0) ||
             (lVar12 = FUN_00d51778(param_5), lVar12 == 0)) {
            if (*(code **)(param_4 + 0x50) != (code *)0x0) {
              (**(code **)(param_4 + 0x50))(param_5,lVar10,(long)&local_f0 + 4);
            }
          }
          else {
            lVar12 = FUN_00d51778(param_5);
            local_f0 = CONCAT44(*(undefined4 *)(lVar12 + 0x260),(undefined4)local_f0);
          }
          if (*(code **)(param_4 + 0x40) != (code *)0x0) {
            (**(code **)(param_4 + 0x40))(param_5,lVar10,(long)&local_e8 + 4);
          }
          if (*(code **)(param_4 + 0x48) != (code *)0x0) {
            (**(code **)(param_4 + 0x48))(param_5,lVar10,&local_e8);
          }
          if (*(code **)(param_4 + 0x58) != (code *)0x0) {
            (**(code **)(param_4 + 0x58))
                      (param_5,(long)&local_e8 + 4,&local_e8,(long)&local_f0 + 4,&local_f0);
          }
          uVar17 = *(undefined4 *)(lVar10 + 0x260);
          uVar6 = FUN_00d428b0(local_d8[0]);
          uVar3 = local_dc;
          uVar7 = FUN_00ceb350();
          param_3 = (float)local_e8;
          FUN_00cfe8d0(uVar3,local_e8._4_4_,local_d0,uVar4,uVar17,uVar6,uVar7,local_e0,
                       local_f0._4_4_,local_f0 & 0xffffffff);
          FUN_00ce20fc(local_d0);
        }
        uVar14 = uVar14 + 1;
        uVar8 = FUN_00d51964(param_5);
      } while (uVar14 < uVar8);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf4970(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f728;
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  return;
}




void FUN_00cf49b0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf49b8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00cf49c0(long param_1)

{
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
  return;
}




void FUN_00cf49d0(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  char *__s1;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined1 auStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00ceab48();
  if (((uVar6 & 1) != 0) && (iVar2 = FUN_00d51964(param_2), iVar2 != 0)) {
    uVar9 = 0;
    do {
      lVar7 = FUN_00d51954(param_2,uVar9);
      if (lVar7 != 0) {
        lVar10 = *(long *)(lVar7 + 0x18);
        while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_02c7bf48))) {
          lVar10 = *(long *)(lVar10 + 0x20);
        }
        iVar2 = FUN_00d6ad98(lVar10);
        if (iVar2 != 0) {
          uVar5 = 0;
          do {
            uVar3 = FUN_00d6b5f0(lVar10,uVar5);
            __s1 = (char *)FUN_00d6b898(lVar10,uVar5);
            if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
LAB_00cf4ab4:
              iVar2 = strcmp(__s1,*(char **)(param_1 + 0x10));
              if ((iVar2 == 0) &&
                 ((*(code **)(param_1 + 0x18) == (code *)0x0 ||
                  (uVar6 = (**(code **)(param_1 + 0x18))(param_2,lVar7), (uVar6 & 1) != 0)))) {
                FUN_00d009d0(auStack_90,*(undefined4 *)(lVar7 + 0x260),uVar3);
                FUN_00ce20fc(auStack_90);
              }
            }
            else {
              iVar2 = FUN_00d6b8f8(lVar10,uVar3);
              lVar8 = FUN_00d5048c(param_2);
              if (iVar2 == *(int *)(lVar8 + 0x260)) goto LAB_00cf4ab4;
            }
            uVar5 = uVar5 + 1;
            uVar4 = FUN_00d6ad98(lVar10);
          } while (uVar5 < uVar4);
        }
      }
      uVar9 = uVar9 + 1;
      uVar5 = FUN_00d51964(param_2);
    } while (uVar9 < uVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf4b50(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *param_1 = &PTR_FUN_0280f788;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return;
}




void FUN_00cf4b90(long param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(byte *)(param_1 + 0x24) = param_4 & 1;
  return;
}




void FUN_00cf4ba4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf4bac(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00ceab48();
  if (((uVar5 & 1) != 0) && (iVar2 = FUN_00d51964(param_2), iVar2 != 0)) {
    uVar7 = 0;
    do {
      lVar6 = FUN_00d51954(param_2,uVar7);
      if (lVar6 != 0) {
        lVar8 = *(long *)(lVar6 + 0x18);
        while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02c7bf48))) {
          lVar8 = *(long *)(lVar8 + 0x20);
        }
        uVar9 = *(undefined8 *)(param_1 + 0x18);
        uVar3 = FUN_00e6a474(uVar9);
        uVar3 = FUN_0091ed5c(uVar9,uVar3,0x12345678);
        FUN_00d9ff84(&local_98,uVar3);
        uVar5 = FUN_00d6bbac(lVar8,local_98,&local_94);
        if ((uVar5 & 1) != 0) {
          uVar4 = FUN_00d6bb04(lVar8,local_94);
          if (*(code **)(param_1 + 0x10) != (code *)0x0) {
            (**(code **)(param_1 + 0x10))(param_2,(uint *)(param_1 + 0x20));
          }
          if ((*(uint *)(param_1 + 0x20) < uVar4) || (*(char *)(param_1 + 0x24) == '\0')) {
            FUN_00d0108c(auStack_90,*(undefined4 *)(lVar6 + 0x260),local_94);
          }
          else {
            FUN_00d009d0(auStack_90,*(undefined4 *)(lVar6 + 0x260),local_94);
          }
          FUN_00ce20fc(auStack_90);
        }
      }
      uVar7 = uVar7 + 1;
      uVar4 = FUN_00d51964(param_2);
    } while (uVar7 < uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf4d24(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = FUN_00ceab48();
  if (((uVar3 & 1) != 0) && (iVar1 = FUN_00d51964(param_2), iVar1 != 0)) {
    uVar4 = 0;
    do {
      FUN_00d51954(param_2,uVar4);
      FUN_00d5c594();
      uVar4 = uVar4 + 1;
      uVar2 = FUN_00d51964(param_2);
    } while (uVar4 < uVar2);
  }
  return;
}




void FUN_00cf4d7c(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f7e8;
  FUN_00d9ff2c(param_1 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
  return;
}




void FUN_00cf4dc4(long param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  long lVar1;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_40);
  *(undefined4 *)(param_1 + 0x10) = local_40[0];
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe | param_4 & 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf4e34(long param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe | param_4 & 1;
  return;
}




void FUN_00cf4e48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d5048c(param_2);
    for (lVar6 = *(long *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
      if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02c7bf48) {
        uVar4 = FUN_00d6bbac(lVar6,*(undefined4 *)(param_1 + 0x10),0);
        if ((uVar4 & 1) != 0) {
          uVar2 = FUN_00d6b630(lVar6,*(undefined4 *)(param_1 + 0x10),0xffffffff);
          if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
            iVar3 = FUN_00d6bb04(lVar6,uVar2);
            iVar3 = *(int *)(param_1 + 0x14) + iVar3;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x14);
          }
          fVar7 = (float)iVar3;
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          FUN_00d048bc(auStack_78,*(undefined4 *)(lVar5 + 0x260),uVar2,(int)fVar7,1);
          FUN_00ce20fc(auStack_78);
        }
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf4f60(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f848;
  param_1[2] = 0xffffffff;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
  return;
}




void FUN_00cf4fa4(long param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe | param_4 & 1;
  return;
}




void FUN_00cf4fb8(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00d5048c(param_2);
    for (lVar5 = *(long *)(lVar4 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_02e3ef78) {
        iVar2 = FUN_00d535a4(lVar5,*(undefined4 *)(param_1 + 0x10));
        if (iVar2 != 0) {
          FUN_00d040ec(auStack_68,*(undefined4 *)(lVar4 + 0x260),*(undefined4 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x14),*(byte *)(param_1 + 0x18) & 1);
          FUN_00ce20fc(auStack_68);
        }
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

