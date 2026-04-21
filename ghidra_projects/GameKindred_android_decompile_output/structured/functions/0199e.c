// functions/0199e — 27 functions
#include "libGameKindred.h"




void thunk_FUN_0199eb88(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03215440;
  if (DAT_03215440 != (void *)0x0) {
    FUN_0199e0b0(DAT_03215440);
    operator_delete(pvVar1);
  }
  DAT_03215440 = (void *)0x0;
  return;
}




void thunk_FUN_0199ea88(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  void *pvVar6;
  ulong auStack_1050 [2];
  void *pvStack_1040;
  char acStack_1038 [4096];
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_0199d920();
  if (*(char *)(lVar3 + 1) != '\0') {
    FUN_00e772cc(&DAT_0320ffc0,2,acStack_1038,0x1000);
    uVar4 = FUN_00e6a488(acStack_1038);
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_00e6af2c(acStack_1038), (uVar4 & 1) != 0)) {
      auStack_1050[0] = 0;
      auStack_1050[1] = 0;
      pvStack_1040 = (void *)0x0;
      sVar5 = strlen(acStack_1038);
      FUN_0090de84(auStack_1050,acStack_1038,sVar5);
      FUN_0090de84(auStack_1050,"shadercache.bin",0xf);
      pvVar6 = operator_new(0x48);
      pvVar1 = (void *)((ulong)auStack_1050 | 1);
      if ((auStack_1050[0] & 1) != 0) {
        pvVar1 = pvStack_1040;
      }
      FUN_0199dca4(pvVar6,pvVar1);
      DAT_03215440 = pvVar6;
      if ((auStack_1050[0] & 1) != 0) {
        operator_delete(pvStack_1040);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199e0b0(byte *param_1)

{
  FUN_0199e0fc();
  FUN_0199df78(param_1,0);
  FUN_0199e36c(param_1 + 0x18);
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_0199e0fc(byte *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  byte *__filename;
  FILE *__stream;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 auStack_d8 [128];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*param_1 & 1) == 0) {
    __filename = param_1 + 1;
  }
  else {
    __filename = *(byte **)(param_1 + 0x10);
  }
  __stream = fopen((char *)__filename,"wb");
  iVar4 = 0;
  if (__stream != (FILE *)0x0) {
    uVar5 = glGetString(0x1f00);
    uVar6 = glGetString(0x1f01);
    uVar7 = glGetString(0x1f02);
    memset(auStack_d8,0,0x80);
    FUN_00e6a93c(auStack_d8,0x80,"%s",uVar5);
    FUN_00e6af10(auStack_d8,0x80,1,__stream);
    memset(auStack_d8,0,0x80);
    FUN_00e6a93c(auStack_d8,0x80,"%s",uVar6);
    FUN_00e6af10(auStack_d8,0x80,1,__stream);
    memset(auStack_d8,0,0x80);
    FUN_00e6a93c(auStack_d8,0x80,"%s",uVar7);
    FUN_00e6af10(auStack_d8,0x80,1,__stream);
    local_dc = *(undefined4 *)(param_1 + 0x28);
    FUN_00e6af10(&local_dc,4,1,__stream);
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = 0;
    do {
      uVar10 = uVar3;
      uVar8 = (ulong)uVar10;
      if (uVar1 <= uVar10) break;
      uVar3 = uVar10 + 1;
    } while (*(int *)(*(long *)(param_1 + 0x20) + uVar8 * 8 + 4) == -1);
joined_r0x0199e270:
    if (uVar1 != uVar10) {
      puVar9 = (undefined8 *)
               (*(long *)(param_1 + 0x38) +
               (ulong)*(uint *)(*(long *)(param_1 + 0x20) + uVar8 * 8 + 4) * 0x18);
      local_e0 = *(undefined4 *)(puVar9 + 1);
      uVar5 = *puVar9;
      local_e4 = *(undefined4 *)((long)puVar9 + 0xc);
      local_e8 = *(undefined4 *)(puVar9 + 2);
      FUN_00e6af10(&local_e0,4,1,__stream);
      FUN_00e6af10(&local_e4,4,1,__stream);
      FUN_00e6af10(&local_e8,4,1,__stream);
      FUN_00e6af10(uVar5,local_e4,1,__stream);
      uVar10 = (uint)uVar8;
      do {
        uVar10 = uVar10 + 1;
        uVar8 = (ulong)uVar10;
        if (*(uint *)(param_1 + 0x18) <= uVar10) break;
      } while (*(int *)(*(long *)(param_1 + 0x20) + uVar8 * 8 + 4) == -1);
      goto joined_r0x0199e270;
    }
    iVar4 = fclose(__stream);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}




void FUN_0199e36c(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x18) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_0199e3f4(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x18) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_0199e468(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  void *local_68;
  undefined4 local_60;
  int local_5c [4];
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_5c[0] = 0;
  local_5c[1] = 0;
  local_68 = (void *)0x0;
  local_60 = param_2;
  local_4c = param_2;
  glGetProgramiv(param_3,0x8741,local_5c);
  iVar2 = local_5c[0];
  if (local_5c[0] != 0) {
    local_68 = operator_new__((long)local_5c[0]);
    glGetProgramBinaryOES(param_3,iVar2,0,local_5c + 1,local_68);
    FUN_0199e524(param_1 + 0x18,&local_4c,&local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199e524(uint *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0091ed5c(0,0,*param_2);
  uVar9 = param_1[4];
  uVar8 = *param_1;
  param_1[4] = uVar9 + 1;
  if (uVar8 >> 1 < uVar9 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar9 = *param_1;
    uVar10 = uVar9 - 1;
    uVar8 = (uint)local_58;
    if ((int)uVar10 < 0) {
      pvVar6 = *(void **)(param_1 + 2);
    }
    else {
      pvVar6 = *(void **)(param_1 + 2);
      do {
        iVar5 = *(int *)((long)pvVar6 + (ulong)uVar10 * 8 + 4);
        if (iVar5 != -1) {
          uVar9 = *(uint *)((long)pvVar6 + (ulong)uVar10 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar9 / (uint)local_58;
          }
          uVar11 = (ulong)(uVar9 - uVar2 * (uint)local_58);
          piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
          iVar1 = *piVar12;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar11) {
              uVar2 = (uint)uVar11;
            }
            uVar11 = (ulong)(uVar2 - 1);
            piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
            iVar1 = *piVar12;
          }
          *(uint *)((long)local_50 + uVar11 * 8) = uVar9;
          *piVar12 = iVar5;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar9 = *param_1;
    }
    uVar10 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar10,uVar9);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar6;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar8 = *param_1;
    }
  }
  lVar7 = *(long *)(param_1 + 2);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar4 / uVar8;
  }
  uVar11 = (ulong)(uVar4 - uVar9 * uVar8);
  piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
  iVar5 = *piVar12;
  while (iVar5 != -1) {
    uVar9 = uVar8;
    if (0 < (int)(uint)uVar11) {
      uVar9 = (uint)uVar11;
    }
    uVar11 = (ulong)(uVar9 - 1);
    piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
    iVar5 = *piVar12;
  }
  *(uint *)(lVar7 + uVar11 * 8) = uVar4;
  iVar5 = FUN_0199ed10(param_1,param_3);
  *piVar12 = iVar5;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199e6ec(long param_1,undefined4 param_2,undefined4 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  int local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = param_2;
  puVar3 = (undefined8 *)FUN_0199e7a4(param_1 + 0x18,&local_3c);
  bVar2 = puVar3 != (undefined8 *)0x0;
  if ((param_3 != (undefined4 *)0x0) && (puVar3 != (undefined8 *)0x0)) {
    glProgramBinaryOES(*param_3,*(undefined4 *)(puVar3 + 2),*puVar3,
                       *(undefined4 *)((long)puVar3 + 0xc));
    local_40 = 0;
    glGetProgramiv(*param_3,0x8b82,&local_40);
    if (local_40 == 0) {
      FUN_0199df78(param_1,1);
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




long FUN_0199e7a4(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = FUN_0091ed5c(0,0,*param_2);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar4 / uVar2;
    }
    uVar3 = uVar4 - uVar3 * uVar2;
    while ((*(uint *)(lVar5 + (ulong)uVar3 * 8) != uVar4 &&
           (*(int *)(lVar5 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar5 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 0x18;
    }
  }
  return 0;
}




void FUN_0199e840(uint *param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0091ed5c(0,0,*param_2);
  uVar8 = *param_1;
  if (uVar8 != 0) {
    lVar10 = *(long *)(param_1 + 2);
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar4 / uVar8;
    }
    uVar11 = uVar4 - uVar11 * uVar8;
    while ((*(uint *)(lVar10 + (ulong)uVar11 * 8) != uVar4 &&
           (*(int *)(lVar10 + (ulong)uVar11 * 8 + 4) != -1))) {
      uVar12 = uVar8;
      if (0 < (int)uVar11) {
        uVar12 = uVar11;
      }
      uVar11 = uVar12 - 1;
    }
    if ((uVar11 != 0xffffffff) &&
       (uVar11 = *(uint *)(lVar10 + (ulong)uVar11 * 8 + 4), uVar11 != 0xffffffff)) {
      uVar6 = 0;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar11 * 0x18);
      puVar9[2] = param_3[2];
      uVar15 = *param_3;
      puVar9[1] = param_3[1];
      *puVar9 = uVar15;
      goto LAB_0199ea5c;
    }
  }
  uVar11 = param_1[4];
  param_1[4] = uVar11 + 1;
  if (uVar8 >> 1 < uVar11 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar11 = *param_1;
    uVar12 = uVar11 - 1;
    uVar8 = (uint)local_58;
    if ((int)uVar12 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar5 = *(int *)((long)pvVar7 + (ulong)uVar12 * 8 + 4);
        if (iVar5 != -1) {
          uVar11 = *(uint *)((long)pvVar7 + (ulong)uVar12 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar11 / (uint)local_58;
          }
          uVar13 = (ulong)(uVar11 - uVar2 * (uint)local_58);
          piVar14 = (int *)((long)local_50 + uVar13 * 8 + 4);
          iVar1 = *piVar14;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar13) {
              uVar2 = (uint)uVar13;
            }
            uVar13 = (ulong)(uVar2 - 1);
            piVar14 = (int *)((long)local_50 + uVar13 * 8 + 4);
            iVar1 = *piVar14;
          }
          *(uint *)((long)local_50 + uVar13 * 8) = uVar11;
          *piVar14 = iVar5;
        }
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
      uVar11 = *param_1;
    }
    uVar12 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar12,uVar11);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar8 = *param_1;
    }
  }
  lVar10 = *(long *)(param_1 + 2);
  uVar11 = 0;
  if (uVar8 != 0) {
    uVar11 = uVar4 / uVar8;
  }
  uVar13 = (ulong)(uVar4 - uVar11 * uVar8);
  piVar14 = (int *)(lVar10 + uVar13 * 8 + 4);
  iVar5 = *piVar14;
  while (iVar5 != -1) {
    uVar11 = uVar8;
    if (0 < (int)(uint)uVar13) {
      uVar11 = (uint)uVar13;
    }
    uVar13 = (ulong)(uVar11 - 1);
    piVar14 = (int *)(lVar10 + uVar13 * 8 + 4);
    iVar5 = *piVar14;
  }
  *(uint *)(lVar10 + uVar13 * 8) = uVar4;
  iVar5 = FUN_0199ed10(param_1,param_3);
  *piVar14 = iVar5;
  uVar6 = 1;
LAB_0199ea5c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




void FUN_0199ea88(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  void *pvVar6;
  ulong local_1050 [2];
  void *local_1040;
  char acStack_1038 [4096];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_0199d920();
  if (*(char *)(lVar3 + 1) != '\0') {
    FUN_00e772cc(&DAT_0320ffc0,2,acStack_1038,0x1000);
    uVar4 = FUN_00e6a488(acStack_1038);
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_00e6af2c(acStack_1038), (uVar4 & 1) != 0)) {
      local_1050[0] = 0;
      local_1050[1] = 0;
      local_1040 = (void *)0x0;
      sVar5 = strlen(acStack_1038);
      FUN_0090de84(local_1050,acStack_1038,sVar5);
      FUN_0090de84(local_1050,"shadercache.bin",0xf);
      pvVar6 = operator_new(0x48);
      pvVar1 = (void *)((ulong)local_1050 | 1);
      if ((local_1050[0] & 1) != 0) {
        pvVar1 = local_1040;
      }
      FUN_0199dca4(pvVar6,pvVar1);
      DAT_03215440 = pvVar6;
      if ((local_1050[0] & 1) != 0) {
        operator_delete(local_1040);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199eb88(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03215440;
  if (DAT_03215440 != (void *)0x0) {
    FUN_0199e0b0(DAT_03215440);
    operator_delete(pvVar1);
  }
  DAT_03215440 = (void *)0x0;
  return;
}




bool FUN_0199ebc0(void)

{
  return DAT_03215440 != 0;
}




void FUN_0199ebd4(void)

{
  if (DAT_03215440 != 0) {
    FUN_0199df78(DAT_03215440,1);
    return;
  }
  return;
}




void FUN_0199ebec(undefined4 param_1,undefined4 param_2)

{
  if (DAT_03215440 != 0) {
    FUN_0199e468(DAT_03215440,param_1,param_2);
    return;
  }
  return;
}




undefined8 FUN_0199ec0c(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_03215440 != 0) {
    uVar1 = FUN_0199e6ec(DAT_03215440,param_1,param_2);
    return uVar1;
  }
  return 0;
}




void FUN_0199ec30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0199ec74();
  if (DAT_03215440 != 0) {
    FUN_0199e468(DAT_03215440,uVar1,param_3);
    return;
  }
  return;
}




void FUN_0199ec74(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00e6a474();
  uVar1 = FUN_0091ed5c(param_1,uVar1,0x12345678);
  uVar2 = FUN_00e6a474(param_2);
  FUN_0091ed5c(param_2,uVar2,uVar1);
  return;
}




undefined8 FUN_0199ecc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0199ec74();
  if (DAT_03215440 != 0) {
    uVar2 = FUN_0199e6ec(DAT_03215440,uVar1,param_3);
    return uVar2;
  }
  return 0;
}




void FUN_0199ed0c(void)

{
  return;
}




void FUN_0199ed10(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_0199edb4(param_1 + 0x18,auStack_50);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar2 * 0x18);
  }
  puVar4 = (undefined8 *)(lVar3 + uVar2 * 0x18);
  puVar4[2] = param_2[2];
  uVar5 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199edb4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_0199ee48(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x18;
  *(undefined8 *)(lVar2 + -8) = param_2[2];
  uVar5 = *param_2;
  *(undefined8 *)(lVar2 + -0x10) = param_2[1];
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  return;
}




void FUN_0199ee48(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x18;
        puVar4[2] = puVar2[2];
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 3;
        puVar2 = puVar2 + 3;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_0199eed8(long param_1)

{
  FUN_0199f628(param_1,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_0199eee0(void)

{
  FUN_0199f628(&DAT_03215448,DAT_03215450);
  DAT_03215448 = &DAT_03215450;
  DAT_03215458 = 0;
  DAT_03215450 = 0;
  FUN_0199f628(&DAT_03215460,DAT_03215468);
  DAT_03215460 = &DAT_03215468;
  DAT_03215470 = 0;
  DAT_03215468 = 0;
  return;
}




ulong FUN_0199ef40(undefined8 param_1,int param_2,uint *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint local_60;
  ulong local_5c;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = param_1;
  uVar4 = FUN_00e6a474();
  uVar5 = FUN_0091ed5c(param_1,uVar4,0x12345678);
  puVar1 = &DAT_03215448;
  if (param_2 != 0x8b31) {
    puVar1 = &DAT_03215460;
  }
  *param_3 = uVar5;
  puVar8 = puVar1 + 1;
  puVar9 = (undefined8 *)*puVar8;
  puVar7 = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      bVar3 = *(uint *)((long)puVar9 + 0x1c) < uVar5;
      if (!bVar3) {
        puVar7 = puVar9;
      }
      puVar9 = (undefined8 *)puVar9[bVar3];
    } while (puVar9 != (undefined8 *)0x0);
    if ((puVar7 != puVar8) && (*(uint *)((long)puVar7 + 0x1c) <= uVar5)) {
      uVar10 = (ulong)*(uint *)(puVar7 + 4);
      *(int *)((long)puVar7 + 0x24) = *(int *)((long)puVar7 + 0x24) + 1;
      goto LAB_0199f030;
    }
  }
  uVar6 = glCreateShader(param_2);
  uVar10 = uVar6 & 0xffffffff;
  glShaderSource(uVar6,1,&local_50,0);
  glCompileShader(uVar10);
  local_5c = uVar10 | 0x100000000;
  local_60 = uVar5;
  FUN_0199f674(puVar1,&local_60,&local_60);
LAB_0199f030:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

