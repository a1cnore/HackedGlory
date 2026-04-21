// functions/00a7c — 16 functions
#include "libGameKindred.h"




void FUN_00a7c060(long param_1,undefined8 param_2)

{
  FUN_009d3440(0,param_2);
  if (*(char *)(param_1 + 0x90) != '\0') {
    FUN_009d3430(param_2);
    return;
  }
  FUN_009d340c(param_2);
  return;
}




undefined8 FUN_00a7c0a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00a7c0b0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = (long *)param_1[5];
  *param_1 = &PTR_FUN_027cde70;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 6) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_00a7c174;
      plVar1 = (long *)param_1[5];
      if (plVar1 == (long *)0x0) {
        uVar3 = 0;
      }
      else if (*(int *)(param_1 + 6) == (int)plVar1[1]) {
        uVar3 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        param_1[5] = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 6) = DAT_03214ce8;
      }
      FUN_00a7c060(param_1,uVar3);
      uVar4 = DAT_03214ce8;
      param_1[5] = 0;
    }
    else {
      param_1[5] = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 6) = uVar4;
  }
LAB_00a7c174:
  plVar1 = (long *)param_1[7];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 8) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_00a7c218;
      plVar1 = (long *)param_1[7];
      if (plVar1 == (long *)0x0) {
        uVar3 = 0;
      }
      else if (*(int *)(param_1 + 8) == (int)plVar1[1]) {
        uVar3 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        param_1[7] = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 8) = DAT_03214ce8;
      }
      FUN_00a7c060(param_1,uVar3);
      uVar4 = DAT_03214ce8;
      param_1[7] = 0;
    }
    else {
      param_1[7] = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
LAB_00a7c218:
  plVar1 = (long *)param_1[9];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 10) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_00a7c2bc;
      plVar1 = (long *)param_1[9];
      if (plVar1 == (long *)0x0) {
        uVar3 = 0;
      }
      else if (*(int *)(param_1 + 10) == (int)plVar1[1]) {
        uVar3 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        param_1[9] = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 10) = DAT_03214ce8;
      }
      FUN_00a7c060(param_1,uVar3);
      uVar4 = DAT_03214ce8;
      param_1[9] = 0;
    }
    else {
      param_1[9] = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 10) = uVar4;
  }
LAB_00a7c2bc:
  plVar1 = (long *)param_1[0xd];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_00a7c360;
      plVar1 = (long *)param_1[0xd];
      if (plVar1 == (long *)0x0) {
        uVar3 = 0;
      }
      else if (*(int *)(param_1 + 0xe) == (int)plVar1[1]) {
        uVar3 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        param_1[0xd] = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0xe) = DAT_03214ce8;
      }
      FUN_00a7c060(param_1,uVar3);
      uVar4 = DAT_03214ce8;
      param_1[0xd] = 0;
    }
    else {
      param_1[0xd] = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0xe) = uVar4;
  }
LAB_00a7c360:
  plVar1 = (long *)param_1[0xb];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_00a7c404;
      plVar1 = (long *)param_1[0xb];
      if (plVar1 == (long *)0x0) {
        uVar3 = 0;
      }
      else if (*(int *)(param_1 + 0xc) == (int)plVar1[1]) {
        uVar3 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        param_1[0xb] = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0xc) = DAT_03214ce8;
      }
      FUN_00a7c060(param_1,uVar3);
      uVar4 = DAT_03214ce8;
      param_1[0xb] = 0;
    }
    else {
      param_1[0xb] = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar4;
  }
LAB_00a7c404:
  FUN_01985bd0(param_1);
  return;
}




void FUN_00a7c414(void *param_1)

{
  FUN_00a7c0b0();
  operator_delete(param_1);
  return;
}




void FUN_00a7c438(long param_1)

{
  long lVar1;
  
  DAT_03133524 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_03133524 + 1;
  lVar1 = param_1 + (ulong)DAT_03133524 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a7ce64;
  *(code **)(lVar1 + 0xb8) = FUN_00a7ceb8;
  *(uint *)(lVar1 + 0xa4) = DAT_03133524;
  *(undefined4 *)(lVar1 + 0xa8) = 0x98;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_00a7c4dc,0);
  FUN_019867cc(param_1,0x2ffd05a3,FUN_00a7c808,0);
  return;
}




void FUN_00a7c4dc(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = (undefined8 *)FUN_00d80eb4(uVar8);
  uVar1 = *(undefined4 *)(puVar4 + 6);
  plVar5 = *(long **)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(puVar4 + 7);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        plVar5 = *(long **)(param_1 + 0x28);
        uVar7 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
            uVar7 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar7 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
          }
        }
        FUN_009d34d4(uVar7,puVar4);
        plVar5 = *(long **)(param_1 + 0x28);
        if (plVar5 == (long *)0x0) {
          uVar7 = 0;
        }
        else if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
          uVar7 = (**(code **)(*plVar5 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x28) = 0;
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
        }
        if (*(float *)(param_1 + 0x8c) < 0.0) {
          FUN_00d80ebc(uVar8);
        }
        FUN_009d3ec8(uVar7);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        plVar5 = *(long **)(param_1 + 0x38);
        uVar8 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x40) == (int)plVar5[1]) {
            uVar8 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x38) = 0;
            uVar8 = 0;
            *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
          }
        }
        FUN_009d34d4(uVar8,puVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
    }
  }
  plVar5 = *(long **)(param_1 + 0x68);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x70) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        plVar5 = *(long **)(param_1 + 0x68);
        uVar8 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x70) == (int)plVar5[1]) {
            uVar8 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x68) = 0;
            uVar8 = 0;
            *(undefined4 *)(param_1 + 0x70) = DAT_03214ce8;
          }
        }
        FUN_009d34d4(uVar8,puVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x70) = DAT_03214ce8;
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        uStack_78 = puVar4[5];
        local_80 = puVar4[4];
        uStack_88 = puVar4[3];
        local_90 = puVar4[2];
        uStack_98 = puVar4[1];
        local_a0 = *puVar4;
        _local_70 = CONCAT44(0x3c23d70a,uVar1);
        _uStack_68 = CONCAT44((int)((ulong)puVar4[7] >> 0x20),uVar2);
        plVar5 = *(long **)(param_1 + 0x58);
        uVar8 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x60) == (int)plVar5[1]) {
            uVar8 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x58) = 0;
            uVar8 = 0;
            *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
          }
        }
        FUN_009d34d4(uVar8,&local_a0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7c8c4(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      if (lVar7 == 0) goto LAB_00a7c9a8;
      plVar6 = *(long **)(param_1 + 0x28);
      if (plVar6 == (long *)0x0) {
        uVar8 = 0;
      }
      else if (*(int *)(param_1 + 0x30) == (int)plVar6[1]) {
        uVar8 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x28) = 0;
        uVar8 = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      }
      FUN_00a7c060(param_1,uVar8);
      uVar11 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar11 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar11;
  }
LAB_00a7c9a8:
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      if (lVar7 == 0) goto LAB_00a7ca4c;
      plVar6 = *(long **)(param_1 + 0x38);
      if (plVar6 == (long *)0x0) {
        uVar8 = 0;
      }
      else if (*(int *)(param_1 + 0x40) == (int)plVar6[1]) {
        uVar8 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x38) = 0;
        uVar8 = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
      }
      FUN_00a7c060(param_1,uVar8);
      uVar11 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar11 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x40) = uVar11;
  }
LAB_00a7ca4c:
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_1 + 0x70) == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      if (lVar7 == 0) goto LAB_00a7caf0;
      plVar6 = *(long **)(param_1 + 0x68);
      if (plVar6 == (long *)0x0) {
        uVar8 = 0;
      }
      else if (*(int *)(param_1 + 0x70) == (int)plVar6[1]) {
        uVar8 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x68) = 0;
        uVar8 = 0;
        *(undefined4 *)(param_1 + 0x70) = DAT_03214ce8;
      }
      FUN_00a7c060(param_1,uVar8);
      uVar11 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = 0;
      uVar11 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x70) = uVar11;
  }
LAB_00a7caf0:
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      if (lVar7 == 0) goto LAB_00a7cb94;
      plVar6 = *(long **)(param_1 + 0x58);
      if (plVar6 == (long *)0x0) {
        uVar8 = 0;
      }
      else if (*(int *)(param_1 + 0x60) == (int)plVar6[1]) {
        uVar8 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x58) = 0;
        uVar8 = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
      }
      FUN_00a7c060(param_1,uVar8);
      uVar11 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar11 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar11;
  }
LAB_00a7cb94:
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = FUN_00d817fc(uVar8);
  uVar10 = FUN_00d818a4(uVar8);
  fVar5 = DAT_03218f80;
  fVar4 = DAT_03218f7c;
  fVar3 = DAT_03218f78;
  if (((uVar9 & 1) == 0) && ((uVar10 & 1) == 0)) goto LAB_00a7ce24;
  iVar1 = *(int *)(param_1 + 0x78);
  if ((iVar1 != -0x7ee3623b) && (iVar1 != 0)) {
    uStack_b8 = param_2[5];
    uVar8 = param_2[4];
    uStack_a8 = param_2[7];
    local_b0 = param_2[6];
    uStack_c8 = param_2[3];
    local_d0 = param_2[2];
    local_c0._0_4_ = (float)uVar8;
    uStack_d8 = param_2[1];
    local_e0 = *param_2;
    local_c0._4_4_ = (float)((ulong)uVar8 >> 0x20);
    fVar15 = (float)uStack_b8 * DAT_03218f7c - local_c0._4_4_ * DAT_03218f80;
    fVar16 = (float)local_c0 * DAT_03218f80 - (float)uStack_b8 * DAT_03218f78;
    fVar17 = local_c0._4_4_ * DAT_03218f78 - (float)local_c0 * DAT_03218f7c;
    fVar12 = fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16;
    local_c0 = uVar8;
    if (0.001 < fVar12) {
      fVar13 = SQRT(fVar12);
      if (NAN(fVar13)) {
        fVar13 = sqrtf(fVar12);
      }
      fVar15 = fVar15 / fVar13;
      fVar16 = fVar16 / fVar13;
      fVar17 = fVar17 / fVar13;
      fVar13 = fVar16 * fVar5 - fVar17 * fVar4;
      fVar19 = fVar17 * fVar3 - fVar15 * fVar5;
      fVar18 = fVar15 * fVar4 - fVar16 * fVar3;
      fVar12 = fVar18 * fVar18 + fVar13 * fVar13 + fVar19 * fVar19;
      if (0.001 < fVar12) {
        fVar14 = SQRT(fVar12);
        if (NAN(fVar14)) {
          fVar14 = sqrtf(fVar12);
        }
        local_e0 = CONCAT44(fVar16,fVar15);
        uStack_d8 = CONCAT44(uStack_d8._4_4_,fVar17);
        local_d0 = CONCAT44(fVar4,fVar3);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar5);
        local_c0 = CONCAT44(fVar19 / fVar14,fVar13 / fVar14);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,fVar18 / fVar14);
      }
    }
    FUN_00a7bde0(param_1,(long *)(param_1 + 0x48),(int *)(param_1 + 0x78),&local_e0,0);
    plVar6 = *(long **)(param_1 + 0x48);
    if (plVar6 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar6[1]) {
        lVar7 = (**(code **)(*plVar6 + 0x10))();
        if (lVar7 == 0) goto LAB_00a7cdbc;
        plVar6 = *(long **)(param_1 + 0x48);
        uVar8 = 0;
        if (plVar6 != (long *)0x0) {
          if (*(int *)(param_1 + 0x50) == (int)plVar6[1]) {
            uVar8 = (**(code **)(*plVar6 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x48) = 0;
            uVar8 = 0;
            *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
          }
        }
        FUN_009d3440(0,uVar8);
        uVar11 = DAT_03214ce8;
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar11 = DAT_03214ce8;
      }
      *(undefined4 *)(param_1 + 0x50) = uVar11;
    }
  }
LAB_00a7cdbc:
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar8 = FUN_009bbfb0();
    lVar7 = FUN_01985d44(uVar8,DAT_0312ebc0);
    if (lVar7 != 0) {
      local_e0 = param_2[6];
      uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(param_2 + 7));
      FUN_009db1ac(*(undefined4 *)(param_1 + 0x88),lVar7,*(undefined8 *)(param_1 + 0x80),0,0,0,1,
                   0xffffffff);
      FUN_009db344(lVar7,&local_e0);
      FUN_009db36c(lVar7);
    }
  }
LAB_00a7ce24:
  if (*(long *)(lVar2 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a7ce64(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027cde70;
  uVar1 = DAT_03214ce8;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}




void FUN_00a7ceb8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7cec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00a7cec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cdea0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)((long)param_1 + 0x24) = *(byte *)((long)param_1 + 0x24) & 0xf0 | 4;
  return;
}




void FUN_00a7cef4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00a7cefc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}




void FUN_00a7cf04(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 8;
  return;
}




void FUN_00a7cf18(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 1;
  return;
}




void FUN_00a7cf28(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xfb;
  return;
}




void FUN_00a7cf38(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  float fVar7;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_1 + 0x24) >> 3 & 1) == 0) {
    plVar4 = *(long **)(param_2 + 0x18);
    while ((plVar4 != (long *)0x0 && (*(int *)(plVar4[1] + 0xa4) != DAT_0312e4a8))) {
      plVar4 = (long *)plVar4[4];
    }
    uVar1 = *(ushort *)(param_2 + 0x88) & 0x1f;
    if (uVar1 == 0x1f) {
      bVar2 = *(byte *)(param_2 + 0x303);
    }
    else {
      bVar2 = *(byte *)(param_2 + 0x303);
      if (*(short *)(param_2 + (ulong)uVar1 * 0x38 + 0x90) == 2) {
        pcVar6 = "MoveStartToMove";
        if ((bVar2 & 1) != 0) {
          uVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,"MoveCombat");
          pcVar6 = "MoveStartToMoveCombat";
          if ((uVar5 & 1) == 0) {
            pcVar6 = "MoveStartToMove";
          }
        }
        goto LAB_00a7d060;
      }
    }
    if ((bVar2 & 1) == 0) {
      pcVar6 = "AttackToIdle";
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,"IdleCombat");
      pcVar6 = "AttackToIdleCombat";
      if ((uVar5 & 1) == 0) {
        pcVar6 = "AttackToIdle";
      }
    }
  }
  else {
    pcVar6 = *(char **)(param_1 + 0x10);
  }
LAB_00a7d060:
  fVar7 = *(float *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    local_4c = 1.0;
    (**(code **)(param_1 + 0x18))(0x3f800000,param_3,&local_4c);
    fVar7 = fVar7 / local_4c;
  }
  bVar2 = *(byte *)(param_1 + 0x24);
  if ((((bVar2 >> 1 & 1) != 0) || (uVar1 = *(ushort *)(param_2 + 0x88) & 0x1f, uVar1 == 0x1f)) ||
     (1 < *(ushort *)(param_2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    FUN_00d5a450(fVar7,param_2,*(undefined8 *)(param_1 + 8),bVar2 & 1,bVar2 >> 2 & 1,pcVar6);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

