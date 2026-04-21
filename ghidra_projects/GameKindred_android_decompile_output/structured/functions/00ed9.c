// functions/00ed9 — 33 functions
#include "libGameKindred.h"




void FUN_00ed90a4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x90))();
  (**(code **)(*plVar2 + 0x68))(plVar2,auStack_30,local_38);
  local_40 = CONCAT44(local_38._4_4_ - auStack_30._4_4_,local_38._0_4_ - auStack_30._0_4_);
  FUN_01980980(auStack_30,&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed9128(void)

{
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed912c(undefined8 *param_1)

{
  FUN_00ed87f8();
  *param_1 = &PTR_FUN_02823fc8;
  param_1[0x17] = &PTR_FUN_02824128;
  param_1[0x1a] = _DAT_03218ef8;
  *(undefined4 *)((long)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  FUN_00ed9190(param_1);
  return;
}




void FUN_00ed9190(long param_1)

{
  long lVar1;
  long lVar2;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 8;
  local_40 = DAT_03210fb4;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff3;
  local_68 = FUN_00ed9420;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  local_68 = FUN_00ed9420;
  local_40 = DAT_03210fac;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  local_68 = FUN_00ed9420;
  local_40 = DAT_03210fb8;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  local_68 = FUN_00ed9420;
  local_40 = DAT_03210fb0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  local_68 = FUN_00ed9420;
  local_40 = DAT_03210fbc;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar1,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed92bc(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  FUN_00ed87f8();
  *param_3 = &PTR_FUN_02823fc8;
  param_3[0x17] = &PTR_FUN_02824128;
  param_3[0x1a] = _DAT_03218ef8;
  *(undefined4 *)((long)param_3 + 0xdc) = param_2;
  *(undefined4 *)(param_3 + 0x1c) = param_1;
  *(undefined4 *)((long)param_3 + 0xe4) = 0;
  *(undefined1 *)(param_3 + 0x1d) = 0;
  *(undefined4 *)(param_3 + 0x1b) = 0xffffffff;
  FUN_00ed9190(param_3);
  return;
}




void FUN_00ed9334(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03210fb4;
  *param_1 = &PTR_FUN_02823fc8;
  param_1[0x17] = &PTR_FUN_02824128;
  FUN_00f04694(param_1,uVar1);
  FUN_00f04694(param_1,DAT_03210fac);
  FUN_00f04694(param_1,DAT_03210fb8);
  FUN_00f04694(param_1,DAT_03210fb0);
  FUN_00f04694(param_1,DAT_03210fbc);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ed93cc(long param_1)

{
  FUN_00ed9334(param_1 + -0xb8);
  return;
}




void FUN_00ed93d4(void *param_1)

{
  FUN_00ed9334();
  operator_delete(param_1);
  return;
}




void FUN_00ed93f8(long param_1)

{
  FUN_00ed9334((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00ed9420(long param_1)

{
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}




void FUN_00ed9428(float param_1,long param_2)

{
  param_1 = *(float *)(param_2 + 0xe4) + param_1;
  *(float *)(param_2 + 0xe4) = param_1;
  if (0.33 <= param_1) {
    *(byte *)(param_2 + 0xe8) = *(byte *)(param_2 + 0xe8) ^ 1;
    *(float *)(param_2 + 0xe4) = param_1 + -0.33;
  }
  return;
}




void FUN_00ed9464(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xe8) = param_2 & 1;
  return;
}




undefined1 FUN_00ed9470(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe8);
}




undefined8 FUN_00ed9478(void)

{
  return 0;
}




undefined8 FUN_00ed9480(void)

{
  return 0;
}




void FUN_00ed9488(void)

{
  FUN_0199d9a4(0);
  return;
}




void FUN_00ed94a0(void)

{
  FUN_0199d9a4(0);
  return;
}




void FUN_00ed94b8(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  if (*(char *)(param_1 + 0xe8) != '\0') {
    puVar5 = (undefined8 *)FUN_00965ecc(param_1);
    uVar1 = *(undefined1 *)(param_1 + 0xd8);
    uVar2 = *(undefined1 *)(param_1 + 0xd9);
    uVar3 = *(undefined1 *)(param_1 + 0xda);
    uVar4 = *(undefined1 *)(param_1 + 0xdb);
    puVar6 = (undefined8 *)*param_2;
    fVar8 = (float)*puVar5 + (float)*(undefined8 *)(param_1 + 0xd0);
    fVar9 = (float)((ulong)*puVar5 >> 0x20) +
            (float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20);
    fVar10 = *(float *)(param_1 + 0xdc);
    fVar12 = *(float *)(param_1 + 0xe0);
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined1 *)((long)puVar6 + 0xc) = uVar1;
    *(undefined1 *)((long)puVar6 + 0xd) = uVar2;
    *(undefined1 *)((long)puVar6 + 0xe) = uVar3;
    *(undefined1 *)((long)puVar6 + 0xf) = uVar4;
    *puVar6 = CONCAT44(fVar9,fVar8);
    puVar6[2] = 0x3f80000000000000;
    lVar7 = *param_2;
    fVar10 = fVar9 + fVar10;
    *param_2 = lVar7 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar7 + 0x18) = fVar8;
    *(float *)(lVar7 + 0x1c) = fVar10;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = uVar1;
    *(undefined1 *)(lVar7 + 0x25) = uVar2;
    *(undefined1 *)(lVar7 + 0x26) = uVar3;
    *(undefined1 *)(lVar7 + 0x27) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    lVar7 = *param_2;
    uVar11 = NEON_fmov(0x3f800000,4);
    fVar12 = fVar8 + fVar12;
    *param_2 = lVar7 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar7 + 0x18) = fVar12;
    *(float *)(lVar7 + 0x1c) = fVar9;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = uVar1;
    *(undefined1 *)(lVar7 + 0x25) = uVar2;
    *(undefined1 *)(lVar7 + 0x26) = uVar3;
    *(undefined1 *)(lVar7 + 0x27) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = uVar11;
    lVar7 = *param_2;
    *param_2 = lVar7 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar7 + 0x18) = fVar8;
    *(float *)(lVar7 + 0x1c) = fVar10;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = uVar1;
    *(undefined1 *)(lVar7 + 0x25) = uVar2;
    *(undefined1 *)(lVar7 + 0x26) = uVar3;
    *(undefined1 *)(lVar7 + 0x27) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    lVar7 = *param_2;
    *param_2 = lVar7 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar7 + 0x18) = fVar12;
    *(float *)(lVar7 + 0x1c) = fVar10;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = uVar1;
    *(undefined1 *)(lVar7 + 0x25) = uVar2;
    *(undefined1 *)(lVar7 + 0x26) = uVar3;
    *(undefined1 *)(lVar7 + 0x27) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = 0x3f800000;
    lVar7 = *param_2;
    *param_2 = lVar7 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar7 + 0x18) = fVar12;
    *(float *)(lVar7 + 0x1c) = fVar9;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = uVar1;
    *(undefined1 *)(lVar7 + 0x25) = uVar2;
    *(undefined1 *)(lVar7 + 0x26) = uVar3;
    *(undefined1 *)(lVar7 + 0x27) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = uVar11;
    *param_2 = *param_2 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  return;
}




void FUN_00ed9680(long param_1)

{
  FUN_00ed94b8(param_1 + -0xb8);
  return;
}




void FUN_00ed9688(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x84) =
       (param_2 & 1) << 3 | (param_2 & 1) << 2 | *(uint *)(param_1 + 0x84) & 0xfffffff3;
  return;
}




void FUN_00ed96a8(undefined4 param_1,undefined4 param_2,long param_3,byte param_4)

{
  *(undefined4 *)(param_3 + 0xd0) = param_1;
  *(undefined4 *)(param_3 + 0xd4) = param_2;
  *(byte *)(param_3 + 0xe8) = param_4 & 1;
  return;
}




void FUN_00ed96b8(long param_1)

{
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}




void FUN_00ed96c0(char *param_1)

{
  long lVar1;
  int iVar2;
  FILE *__stream;
  undefined8 uVar3;
  code *local_478 [21];
  __jmp_buf_tag _Stack_3d0;
  undefined8 local_2d0;
  long local_2c8;
  int local_248;
  uint local_244;
  int local_23c;
  uint local_228;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __stream = fopen(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    fprintf((FILE *)glClearDepthf,"can\'t open %s\n",param_1);
  }
  else {
    local_2d0 = FUN_00edf0f0(local_478);
    local_478[0] = FUN_00ed9824;
    iVar2 = setjmp(&_Stack_3d0);
    if (iVar2 == 0) {
      FUN_00ed99bc(&local_2d0,0x5a,0x298);
      FUN_00eda430(&local_2d0,__stream);
      FUN_00ed9ab4(&local_2d0,1);
      FUN_00ed9f00(&local_2d0);
      uVar3 = (**(code **)(local_2c8 + 0x10))(&local_2d0,1,local_23c * local_248,1);
      if (local_228 < local_244) {
        do {
          FUN_00eda11c(&local_2d0,uVar3,1);
        } while (local_228 < local_244);
      }
      FUN_00ed9e20(&local_2d0);
      thunk_FUN_00ee2484(&local_2d0);
      fclose(__stream);
      uVar3 = 1;
      goto LAB_00ed97fc;
    }
    thunk_FUN_00ee2484(&local_2d0);
    fclose(__stream);
  }
  uVar3 = 0;
LAB_00ed97fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00ed9824(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(lVar1 + 0xa8),1);
}




void FUN_00ed9850(undefined8 param_1,undefined4 param_2,undefined8 *param_3,int *param_4,
                 uint *param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  long local_4b0;
  code *local_4a8 [21];
  __jmp_buf_tag _Stack_400;
  undefined8 local_300 [17];
  int local_278;
  uint local_274;
  int local_26c;
  uint local_258;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_300[0] = FUN_00edf0f0(local_4a8);
  local_4a8[0] = FUN_00ed9824;
  iVar3 = setjmp(&_Stack_400);
  if (iVar3 == 0) {
    FUN_00ed99bc(local_300,0x5a,0x298);
    FUN_00eda5f8(local_300,param_1,param_2);
    iVar3 = FUN_00ed9ab4(local_300,1);
    uVar4 = 0;
    if (iVar3 == 1) {
      FUN_00ed9f00(local_300);
      uVar2 = local_274;
      pvVar5 = operator_new__((ulong)(local_26c * local_278 * local_274));
      if (local_258 < uVar2) {
        do {
          local_4b0 = (long)pvVar5 + (ulong)(local_26c * local_278 * local_258);
          FUN_00eda11c(local_300,&local_4b0,1);
        } while (local_258 < local_274);
      }
      FUN_00ed9e20(local_300);
      thunk_FUN_00ee2484(local_300);
      if (param_4 != (int *)0x0) {
        *param_4 = local_278;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar2;
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = pvVar5;
      }
      uVar4 = 1;
    }
  }
  else {
    thunk_FUN_00ee2484(local_300);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00ed99bc(long *param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x5a) {
    *(undefined8 *)(*param_1 + 0x28) = 0x5a0000000d;
    *(int *)(*param_1 + 0x30) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x298) {
    *(undefined8 *)(*param_1 + 0x28) = 0x29800000016;
    *(int *)(*param_1 + 0x30) = (int)param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  memset(param_1 + 1,0,0x290);
  *param_1 = lVar1;
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_00ee12cc(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x33] = 0;
  memset(param_1 + 0x19,0,0x60);
  FUN_00edb564(param_1);
  FUN_00eda9f4(param_1);
  *(undefined4 *)((long)param_1 + 0x24) = 200;
  return;
}




undefined8 FUN_00ed9ab4(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar1 = *(uint *)((long)param_1 + 0x24);
  if ((uVar1 & 0xfffffffe) != 200) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x15;
    *(uint *)(lVar4 + 0x2c) = uVar1;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = FUN_00ed9b40(param_1);
  if ((int)uVar2 == 2) {
    if (param_2 != 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x35;
      (*(code *)*puVar3)(param_1);
    }
    FUN_00ee2430(param_1);
    uVar2 = 2;
  }
  return uVar2;
}




undefined8 FUN_00ed9b40(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  
  uVar6 = *(undefined4 *)((long)param_1 + 0x24);
  uVar5 = 1;
  switch(uVar6) {
  case 200:
    break;
  case 0xc9:
    goto switchD_00ed9b74_caseD_c9;
  case 0xca:
    goto switchD_00ed9b74_caseD_ca;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
                    /* WARNING: Could not recover jumptable at 0x00ed9b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)param_1[0x4c])(param_1);
    return uVar5;
  default:
    lVar8 = *param_1;
    *(undefined4 *)(lVar8 + 0x28) = 0x15;
    *(undefined4 *)(lVar8 + 0x2c) = uVar6;
    (**(code **)*param_1)(param_1);
    uVar5 = 0;
    goto switchD_00ed9b74_caseD_ca;
  }
  (**(code **)(param_1[0x4c] + 8))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  *(undefined4 *)((long)param_1 + 0x24) = 0xc9;
switchD_00ed9b74_caseD_c9:
  uVar5 = (**(code **)param_1[0x4c])(param_1);
  if ((int)uVar5 != 1) {
    return uVar5;
  }
  iVar1 = (int)param_1[7];
  if (iVar1 == 1) {
    uVar6 = 1;
    uVar7 = 1;
  }
  else if (iVar1 == 4) {
    if ((*(int *)((long)param_1 + 0x184) == 0) || (bVar4 = *(byte *)(param_1 + 0x31), bVar4 == 0)) {
      uVar6 = 4;
      uVar7 = 4;
    }
    else {
      if (bVar4 != 2) {
        lVar8 = *param_1;
        *(undefined4 *)(lVar8 + 0x28) = 0x74;
        *(uint *)(lVar8 + 0x2c) = (uint)bVar4;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
      }
      uVar7 = 4;
      uVar6 = 5;
    }
  }
  else if (iVar1 == 3) {
    if ((int)param_1[0x2f] == 0) {
      if (*(int *)((long)param_1 + 0x184) == 0) {
        piVar9 = (int *)param_1[0x26];
        iVar1 = *piVar9;
        iVar2 = piVar9[0x18];
        iVar3 = piVar9[0x30];
        if (((iVar1 != 1) || (iVar2 != 2)) || (iVar3 != 3)) {
          if (((iVar1 == 0x52) && (iVar2 == 0x47)) && (iVar3 == 0x42)) goto LAB_00ed9d50;
          lVar8 = *param_1;
          *(undefined4 *)(lVar8 + 0x28) = 0x71;
          *(int *)(lVar8 + 0x2c) = iVar1;
          *(int *)(lVar8 + 0x30) = iVar2;
          *(int *)(lVar8 + 0x34) = iVar3;
          (**(code **)(lVar8 + 8))(param_1,1);
        }
      }
      else {
        bVar4 = *(byte *)(param_1 + 0x31);
        if (bVar4 == 0) {
LAB_00ed9d50:
          uVar6 = 2;
          uVar7 = 2;
          goto LAB_00ed9c84;
        }
        if (bVar4 != 1) {
          lVar8 = *param_1;
          *(undefined4 *)(lVar8 + 0x28) = 0x74;
          *(uint *)(lVar8 + 0x2c) = (uint)bVar4;
          (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        }
      }
    }
    uVar7 = 2;
    uVar6 = 3;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
  }
LAB_00ed9c84:
  *(undefined4 *)((long)param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 8) = uVar7;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xc] = 0x100000000;
  param_1[0xb] = 0;
  param_1[0xf] = 0x100;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0xca;
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_1 + 0x22c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_1 + 0x22c);
  param_1[0xe] = 0x100000002;
  param_1[0xd] = 1;
  uVar5 = 1;
switchD_00ed9b74_caseD_ca:
  return uVar5;
}




undefined4 FUN_00ed9d80(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (10 < iVar1 - 200U) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x15;
    *(int *)(lVar2 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  return *(undefined4 *)(param_1[0x4c] + 0x24);
}




undefined4 FUN_00ed9dd0(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (8 < iVar1 - 0xcaU) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x15;
    *(int *)(lVar2 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  return *(undefined4 *)(param_1[0x4c] + 0x20);
}




undefined8 FUN_00ed9e20(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if ((iVar1 - 0xcdU < 2) && ((int)param_1[0xb] == 0)) {
    if (*(uint *)(param_1 + 0x15) < *(uint *)((long)param_1 + 0x8c)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x45;
      (*(code *)*puVar3)(param_1);
    }
    (**(code **)(param_1[0x48] + 8))(param_1);
  }
  else {
    if (iVar1 == 0xd2) goto LAB_00ed9eb8;
    if (iVar1 != 0xcf) {
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + 0x28) = 0x15;
      *(int *)(lVar4 + 0x2c) = iVar1;
      (**(code **)*param_1)(param_1);
      goto LAB_00ed9eb8;
    }
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0xd2;
LAB_00ed9eb8:
  do {
    if (*(int *)(param_1[0x4c] + 0x24) != 0) {
      (**(code **)(param_1[5] + 0x30))(param_1);
      FUN_00ee2430(param_1);
      return 1;
    }
    uVar2 = (**(code **)param_1[0x4c])(param_1);
  } while ((int)uVar2 != 0);
  return uVar2;
}




undefined8 FUN_00ed9f00(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 0xcc) {
    if (iVar1 != 0xcb) {
      if (iVar1 != 0xca) {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x15;
        *(int *)(lVar5 + 0x2c) = iVar1;
        (**(code **)*param_1)(param_1);
        goto LAB_00ed9ffc;
      }
      FUN_00eddb40(param_1);
      if ((int)param_1[0xb] != 0) {
        *(undefined4 *)((long)param_1 + 0x24) = 0xcf;
        return 1;
      }
      *(undefined4 *)((long)param_1 + 0x24) = 0xcb;
    }
    if (*(int *)(param_1[0x4c] + 0x20) != 0) {
      puVar4 = (undefined8 *)param_1[2];
      while( true ) {
        if (puVar4 != (undefined8 *)0x0) {
          (*(code *)*puVar4)(param_1);
        }
        uVar3 = (**(code **)param_1[0x4c])(param_1);
        uVar2 = (uint)uVar3;
        if (uVar2 == 0) {
          return uVar3;
        }
        if (uVar2 == 2) break;
        puVar4 = (undefined8 *)param_1[2];
        if (((uVar2 | 2) == 3) && (puVar4 != (undefined8 *)0x0)) {
          lVar5 = puVar4[1];
          puVar4[1] = lVar5 + 1;
          if ((long)puVar4[2] <= lVar5 + 1) {
            puVar4[2] = puVar4[2] + (ulong)*(uint *)(param_1 + 0x36);
          }
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)((long)param_1 + 0xac);
  }
LAB_00ed9ffc:
  uVar3 = FUN_00eda00c(param_1);
  return uVar3;
}




void thunk_FUN_00ed9850(undefined8 param_1,undefined4 param_2,undefined8 *param_3,int *param_4,
                       uint *param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lStack_4b0;
  code *apcStack_4a8 [21];
  __jmp_buf_tag _Stack_400;
  undefined8 auStack_300 [17];
  int iStack_278;
  uint uStack_274;
  int iStack_26c;
  uint uStack_258;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  auStack_300[0] = FUN_00edf0f0(apcStack_4a8);
  apcStack_4a8[0] = FUN_00ed9824;
  iVar3 = setjmp(&_Stack_400);
  if (iVar3 == 0) {
    FUN_00ed99bc(auStack_300,0x5a,0x298);
    FUN_00eda5f8(auStack_300,param_1,param_2);
    iVar3 = FUN_00ed9ab4(auStack_300,1);
    uVar4 = 0;
    if (iVar3 == 1) {
      FUN_00ed9f00(auStack_300);
      uVar2 = uStack_274;
      pvVar5 = operator_new__((ulong)(iStack_26c * iStack_278 * uStack_274));
      if (uStack_258 < uVar2) {
        do {
          lStack_4b0 = (long)pvVar5 + (ulong)(iStack_26c * iStack_278 * uStack_258);
          FUN_00eda11c(auStack_300,&lStack_4b0,1);
        } while (uStack_258 < uStack_274);
      }
      FUN_00ed9e20(auStack_300);
      thunk_FUN_00ee2484(auStack_300);
      if (param_4 != (int *)0x0) {
        *param_4 = iStack_278;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar2;
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = pvVar5;
      }
      uVar4 = 1;
    }
  }
  else {
    thunk_FUN_00ee2484(auStack_300);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

