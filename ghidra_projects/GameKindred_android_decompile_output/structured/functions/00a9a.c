// functions/00a9a — 34 functions
#include "libGameKindred.h"




void FUN_00a9a024(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar1 [16];
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    auVar1 = FUN_00efcb34();
                    /* WARNING: Could not recover jumptable at 0x00a9a058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar1,0,0x3f800000,0x3f800000);
    return;
  }
  FUN_00efcb54();
  return;
}




void FUN_00a9a060(undefined8 param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  FUN_00efcb8c();
  FUN_00efcb8c(param_1,param_2,param_3);
  if (*(char *)(param_2 + 0x2c) == '\0') {
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    *(ulong *)(param_2 + 0x24) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20),
                  (float)uVar3 - (float)*(undefined8 *)(param_2 + 0x1c));
  }
  fVar1 = (float)FUN_00a99fe8(param_2);
  fVar2 = (float)FUN_00a9a024(param_2);
  fVar1 = (1.0 - fVar1) * *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x1c);
  fVar2 = (1.0 - fVar2) * *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x20);
  if ((*(float *)(param_3 + 0x40) == fVar1) && (*(float *)(param_3 + 0x44) == fVar2)) {
    return;
  }
  *(float *)(param_3 + 0x40) = fVar1;
  *(float *)(param_3 + 0x44) = fVar2;
  FUN_0091ada4(param_3);
  return;
}




void FUN_00a9a124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0db0;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  FUN_00efc904(param_1);
  return;
}




void FUN_00a9a164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0db0;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  FUN_00efc904(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a9a1ac(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00a9a1d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0c48;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00efc904(param_1);
  return;
}




void FUN_00a9a210(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0c48;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00efc904(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a9a258(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00a9a27c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0cd8;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  FUN_00efc904(param_1);
  return;
}




void FUN_00a9a2bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0cd8;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  FUN_00efc904(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a9a304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0d20;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00efc904(param_1);
  return;
}




void FUN_00a9a344(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0d20;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00efc904(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a9a38c(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00a9a3b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0df8;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00efc904(param_1);
  return;
}




void FUN_00a9a400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0df8;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00efc904(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a9a458(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00a9a47c(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00a9a4a0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_0091f484(param_1,*param_2);
    if (*param_2 == 0) {
      uVar1 = 0;
    }
    else {
      lVar4 = (ulong)*param_2 << 2;
      puVar2 = *(undefined4 **)(param_2 + 2);
      puVar3 = *(undefined4 **)(param_1 + 2);
      do {
        lVar4 = lVar4 + -4;
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00a9a518(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_027d0ed0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  FUN_019bc1f4(3);
  uVar1 = FUN_019be0f4();
  param_1[0xd] = uVar1;
  return;
}




void FUN_00a9a58c(long param_1)

{
  undefined8 uVar1;
  
  FUN_019bc1f4(3);
  uVar1 = FUN_019be0f4();
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}




void FUN_00a9a5b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0ed0;
  FUN_00a9a618();
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}




void FUN_00a9a618(long param_1)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  
  FUN_00a9b054();
  FUN_00e7a124();
  FUN_00e7893c();
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    do {
      if (*(long *)(param_1 + 0x50) == lVar2) {
        *(long *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      else {
        lVar2 = *(long *)(lVar2 + 0x50);
        *(long *)(param_1 + 0x58) = lVar2;
        *(undefined8 *)(lVar2 + 0x58) = 0;
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      FUN_00a9aefc(param_1);
      lVar2 = *(long *)(param_1 + 0x58);
    } while (lVar2 != 0);
  }
  pvVar1 = *(void **)(param_1 + 8);
  while (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar1 + 0x58);
    FUN_00a9ac78((undefined8 *)(param_1 + 8),pvVar1);
    if (*(void **)((long)pvVar1 + 0x68) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 0x68));
      *(undefined8 *)((long)pvVar1 + 0x60) = 0;
      *(undefined8 *)((long)pvVar1 + 0x68) = 0;
    }
    if ((*(byte *)((long)pvVar1 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar1 + 0x20));
    }
    operator_delete(pvVar1);
    pvVar1 = pvVar3;
  }
  FUN_019c003c(*(undefined8 *)(param_1 + 0x68));
  FUN_019bc360();
  return;
}




void FUN_00a9a6e4(void *param_1)

{
  FUN_00a9a5b8();
  operator_delete(param_1);
  return;
}




void FUN_00a9a708(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  char *__s1;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    __s1 = (char *)(param_1 + 0x79);
  }
  else {
    __s1 = *(char **)(param_1 + 0x88);
  }
  iVar2 = strcmp(__s1,param_2);
  if (iVar2 != 0) {
    FUN_008fa54c(local_50,param_2);
    FUN_008fce60((byte *)(param_1 + 0x78),local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_00a9a7c8(param_1,param_2,1,0);
    uVar3 = FUN_00e6b5e4();
    *(undefined8 *)(param_1 + 0x90) = uVar3;
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9a7c8(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((param_2 != 0) && (iVar2 = FUN_00e6a474(param_2), iVar2 != 0)) &&
     (puVar3 = (undefined4 *)FUN_00a9b1ec(param_1), puVar3 != (undefined4 *)0x0)) {
    *puVar3 = param_3;
    FUN_008fa54c(local_70,param_2);
    FUN_008fce60(puVar3 + 4,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    *(undefined8 *)(puVar3 + 0xe) = param_4;
    *(undefined8 *)(puVar3 + 2) = 0;
    plVar4 = (long *)(param_1 + 0x20);
    lVar5 = *plVar4;
    *(undefined8 *)(puVar3 + 0x14) = 0;
    *(long *)(puVar3 + 0x16) = lVar5;
    if (lVar5 == 0) {
      *(undefined4 **)(param_1 + 0x20) = puVar3;
      plVar4 = (long *)(param_1 + 0x28);
    }
    else {
      *(undefined4 **)(lVar5 + 0x50) = puVar3;
    }
    *plVar4 = (long)puVar3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9a8b8(long *param_1,undefined8 param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((char)param_1[0x13] != '\0') {
    FUN_008fa54c(local_50,&DAT_01e277f2);
    FUN_008fce60(param_1 + 0xf,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9a950(long *param_1)

{
  void *pvVar1;
  long lVar2;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((char)param_1[0x13] != '\0') {
    FUN_008fcdb8(local_50,param_1 + 0xf);
    FUN_008fa54c(local_68,&DAT_01e277f2);
    FUN_008fce60(param_1 + 0xf,local_68);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    (**(code **)(*param_1 + 0x10))(param_1,pvVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9aa18(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  long local_78;
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar6 = FUN_00e6b5e4();
  plVar9 = param_1 + 4;
  lVar10 = *plVar9;
  while (lVar2 = lVar10, lVar2 != 0) {
    lVar10 = *(long *)(lVar2 + 0x58);
    if (*(long *)(lVar2 + 8) <= lVar6) {
      FUN_00a9ac78(plVar9,lVar2);
      FUN_00a9acd8(param_1,lVar2);
    }
  }
  do {
    iVar5 = FUN_019befa4(param_1[0xd],auStack_6c);
  } while (iVar5 == -1);
  piVar7 = (int *)FUN_019c01d8(param_1[0xd],param_1 + 0xe);
  if (piVar7 != (int *)0x0) {
    do {
      if (*piVar7 == 1) {
        lVar10 = *(long *)(piVar7 + 2);
        iVar5 = piVar7[4];
        local_78 = 0;
        FUN_019bc74c(lVar10,0x200002,&local_78);
        FUN_019be4c8(param_1[0xd],lVar10);
        FUN_019bc688(lVar10);
        for (puVar11 = (undefined4 *)param_1[7]; puVar11 != (undefined4 *)0x0;
            puVar11 = *(undefined4 **)(puVar11 + 0x16)) {
          if (*(long *)(puVar11 + 10) == lVar10) {
            FUN_00a9ac78(param_1 + 7,puVar11);
            if ((iVar5 == 0) && (local_78 == 200)) {
              *(undefined8 *)(puVar11 + 10) = 0;
              FUN_00a9ae54(param_1,puVar11);
            }
            else {
              FUN_019c12d8(iVar5);
              if (*(long *)(puVar11 + 0x1a) != 0) {
                puVar11[0x18] = 0;
              }
              *(long *)(puVar11 + 2) = lVar6 + 5;
              lVar10 = param_1[4];
              *(undefined8 *)(puVar11 + 0x14) = 0;
              *(long *)(puVar11 + 0x16) = lVar10;
              plVar1 = plVar9;
              if (lVar10 != 0) {
                plVar1 = (long *)(lVar10 + 0x50);
              }
              lVar2 = 0x28;
              if (lVar10 != 0) {
                lVar2 = 0x20;
              }
              *plVar1 = (long)puVar11;
              *(undefined4 **)((long)param_1 + lVar2) = puVar11;
              *(int *)(param_1 + 6) = (int)param_1[6] + 1;
              (**(code **)(*param_1 + 0x30))(param_1,puVar11 + 4,*puVar11,local_78);
            }
            break;
          }
        }
      }
      piVar7 = (int *)FUN_019c01d8(param_1[0xd],param_1 + 0xe);
    } while (piVar7 != (int *)0x0);
  }
  plVar9 = param_1 + 10;
  piVar7 = (int *)*plVar9;
  do {
    do {
      piVar4 = piVar7;
      if (piVar4 == (int *)0x0) goto LAB_00a9ac44;
      piVar7 = *(int **)(piVar4 + 0x16);
    } while (((uint)piVar4[0x12] >> 0x1e & 1) == 0);
    iVar5 = *piVar4;
    if (-1 < piVar4[0x12]) {
      if (iVar5 == 2) {
        pcVar8 = *(code **)(*param_1 + 0x40);
      }
      else {
        if (iVar5 != 1) goto LAB_00a9ac14;
        pcVar8 = *(code **)(*param_1 + 0x38);
      }
      (*pcVar8)(param_1,piVar4);
    }
LAB_00a9ac14:
    if (*plVar9 == 0) break;
    FUN_00a9ac78(plVar9,piVar4);
    FUN_00a9aefc(param_1,piVar4);
  } while (iVar5 != 2);
LAB_00a9ac44:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a9ac78(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x58);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x50);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x58) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x50);
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(long *)(*(long *)(param_2 + 0x58) + 0x50) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00a9acd8(long param_1,int *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*param_2 == 2) && (uVar3 = FUN_00cea6b4(param_2 + 4,param_2 + 0x18), (uVar3 & 1) != 0)) {
    FUN_00a9ae54(param_1,param_2);
    return;
  }
  lVar4 = FUN_019bc3b0();
  if (lVar4 != 0) {
    lVar1 = (long)param_2 + 0x11;
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      lVar1 = *(long *)(param_2 + 8);
    }
    *(long *)(param_2 + 10) = lVar4;
    FUN_019bc404(lVar4,0x2712,lVar1);
    FUN_019bc404(lVar4,0x4e2b,FUN_00a9b29c);
    FUN_019bc404(lVar4,0x2711,param_2);
    FUN_019bc404(lVar4,0xd,10);
    FUN_019bc404(lVar4,0x2776,DAT_02be34f8);
    FUN_019bc404(lVar4,99,1);
    FUN_019bc1ac(lVar4);
    FUN_019be100(*(undefined8 *)(param_1 + 0x68),lVar4);
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    lVar4 = *(long *)(param_1 + 0x40);
    *(long *)(param_2 + 0x14) = lVar4;
    plVar2 = (long *)(param_1 + 0x38);
    if (*(long *)(param_1 + 0x38) != 0) {
      plVar2 = (long *)(lVar4 + 0x58);
    }
    *plVar2 = (long)param_2;
    *(int **)(param_1 + 0x40) = param_2;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    return;
  }
  FUN_00a9aefc(param_1,param_2);
  return;
}




void FUN_00a9ae1c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  *(undefined8 *)(param_2 + 8) = param_3;
  plVar1 = (long *)(param_1 + 0x20);
  lVar2 = *plVar1;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(long *)(param_2 + 0x58) = lVar2;
  if (lVar2 == 0) {
    *(long *)(param_1 + 0x20) = param_2;
    plVar1 = (long *)(param_1 + 0x28);
  }
  else {
    *(long *)(lVar2 + 0x50) = param_2;
  }
  *plVar1 = param_2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return;
}




void FUN_00a9ae54(long param_1,int *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  lVar3 = *(long *)(param_1 + 0x58);
  *(long *)(param_2 + 0x14) = lVar3;
  plVar1 = (long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar1 = (long *)(lVar3 + 0x58);
  }
  *plVar1 = (long)param_2;
  *(int **)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (*param_2 == 2) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0x40000000;
    if (param_2[0x18] != 0) {
      param_2[0x12] = 0;
      uVar2 = FUN_00e7a124();
      FUN_00e78ecc(uVar2,FUN_00a9b304,param_2);
      return;
    }
  }
  else if (*param_2 == 1) {
    param_2[0x12] = param_2[0x12] | 0x40000000;
  }
  return;
}




void FUN_00a9aefc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0x40));
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    *(undefined4 *)(param_2 + 0x60) = 0;
  }
  *(undefined8 *)(param_2 + 0x58) = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_2 + 0x50) = lVar2;
  plVar1 = (long *)(param_1 + 8);
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(lVar2 + 0x58);
  }
  *plVar1 = param_2;
  *(long *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}




void FUN_00a9af6c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  while (lVar1 = lVar2, lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x58);
    if (*(long *)(lVar1 + 0x30) == param_2) {
      FUN_00a9ac78((long *)(param_1 + 0x20),lVar1);
      FUN_00a9aefc(param_1,lVar1);
    }
  }
  lVar2 = *(long *)(param_1 + 0x38);
  while (lVar1 = lVar2, lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x58);
    if (*(long *)(lVar1 + 0x30) == param_2) {
      FUN_019be4c8(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar1 + 0x28));
      FUN_019bc688(*(undefined8 *)(lVar1 + 0x28));
      FUN_00a9ac78((long *)(param_1 + 0x38),lVar1);
      FUN_00a9aefc(param_1,lVar1);
    }
  }
  lVar2 = *(long *)(param_1 + 0x50);
  while (lVar1 = lVar2, lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x58);
    if (*(long *)(lVar1 + 0x30) == param_2) {
      *(uint *)(lVar1 + 0x48) = *(uint *)(lVar1 + 0x48) | 0x80000000;
    }
  }
  return;
}

