// functions/00d21 — 66 functions
#include "libGameKindred.h"




void FUN_00d21068(void)

{
  return;
}




void FUN_00d2106c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d21090(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d210b4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d210d8(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d210fc(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d21120(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d21144(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d21168(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d2118c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d211b0(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d211d4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d211f8(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d2121c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d21240(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d21264(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d21288(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d212ac(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d212d0(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d212f4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xbf800000;
  (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d21350(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00d255c4(param_2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
    *(long *)(param_2 + 0x1428) = param_2 + 0x18;
  }
  return uVar2;
}




void FUN_00d2138c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819c10;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d213c0(long param_1)

{
  *(undefined1 *)(param_1 + 0x24) = 1;
  return;
}




undefined8 FUN_00d213cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x1420;
  if (*(char *)(param_1 + 0x24) != '\0') {
    lVar1 = 0x1428;
  }
  FUN_00d26b40(&DAT_031502e0,*(undefined8 *)(param_2 + lVar1));
  return 1;
}




void FUN_00d21404(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_thunk_FUN_00d0aae0_02819c98;
  FUN_00d4d9e8(param_1 + 5);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return;
}




long FUN_00d21448(long param_1)

{
  return param_1 + 0x28;
}




void FUN_00d21450(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xbf800000;
  (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d214ac(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_6c0 [16];
  undefined1 auStack_6b0 [40];
  undefined1 auStack_688 [1600];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0xe0);
  if (-1 < (int)uVar2) goto LAB_00d21578;
  if (*(int *)(param_1 + 0x88) == 1) {
    uVar3 = FUN_00d25570(param_2);
    FUN_00d55794(uVar3,auStack_6c0,0);
    FUN_00d4eb08(auStack_6b0,auStack_6c0,1,0);
    puVar4 = auStack_6b0;
LAB_00d21548:
    uVar2 = FUN_00d9e840(param_1 + 0x28,auStack_688,200,puVar4);
  }
  else {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x88) == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_00d21548;
    }
  }
  fVar6 = (float)uVar2;
  if (fVar6 <= 10.0) {
    fVar6 = 10.0;
  }
  *(int *)(param_1 + 0xe0) = (int)fVar6;
  memcpy((void *)(param_1 + 0x90),auStack_688,(ulong)(uint)((int)fVar6 << 3));
LAB_00d21578:
  uVar5 = 1;
  if (uVar2 == 0) {
    uVar5 = 2;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




bool FUN_00d215ac(long param_1,int param_2)

{
  return param_2 < *(int *)(param_1 + 0xe0);
}




void FUN_00d215bc(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d215e0(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d21608(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00d2162c(void)

{
  return 1;
}




int FUN_00d21634(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  FUN_00d26b60(&DAT_031502e0);
  lVar2 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar2 == 0) {
      FUN_00d26bac(&DAT_031502e0);
      return 1;
    }
    iVar1 = FUN_00d0ab34(lVar2,param_2,param_3);
    if (iVar1 != 1) break;
    lVar2 = *(long *)(lVar2 + 0x18);
  }
  FUN_00d26bac(&DAT_031502e0);
  return iVar1;
}




undefined1  [16] FUN_00d216bc(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d216cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




void FUN_00d216d8(void)

{
  return;
}




int FUN_00d216dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  FUN_00d26b60(&DAT_031502e0);
  lVar2 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar2 == 0) {
      FUN_00d26bac(&DAT_031502e0);
      return 2;
    }
    iVar1 = FUN_00d0ab34(lVar2,param_2,param_3);
    if (iVar1 != 2) break;
    lVar2 = *(long *)(lVar2 + 0x18);
  }
  FUN_00d26bac(&DAT_031502e0);
  return iVar1;
}




float FUN_00d21764(long param_1,undefined8 param_2)

{
  float fVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = *(long **)(param_1 + 0x10);
  fVar1 = 0.0;
  while (plVar2 != (long *)0x0) {
    fVar3 = (float)(**(code **)(*plVar2 + 0x40))(plVar2,param_2);
    plVar2 = (long *)plVar2[3];
    if (fVar1 <= fVar3) {
      fVar1 = fVar3;
    }
  }
  return fVar1;
}




void FUN_00d217bc(void)

{
  return;
}




void FUN_00d217c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = FUN_00d0ac48();
  iVar3 = rand();
  lVar4 = *(long *)(param_1 + 0x10);
  iVar2 = (iVar2 - 1U & ((int)(iVar2 - 1U) >> 0x1f ^ 0xffffffffU)) + 1;
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar3 / iVar2;
  }
  for (iVar3 = iVar3 - iVar1 * iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  FUN_00d0ab34(lVar4,param_2,param_3);
  return;
}




void FUN_00d21828(void)

{
  return;
}




void FUN_00d2182c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar6 = (uint *)(param_1 + 0x28);
  uVar4 = (ulong)*puVar6;
  if (*puVar6 == 0) {
    uVar10 = FUN_00d0ac48(param_1);
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    FUN_00d219a0(puVar6,uVar10,&local_78);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x30) + 0x10);
      do {
        *(long *)(puVar5 + -4) = lVar2;
        *puVar5 = 0;
        lVar2 = *(long *)(lVar2 + 0x18);
        puVar5 = puVar5 + 6;
      } while (lVar2 != 0);
    }
    lVar2 = *(long *)(param_1 + 0x30);
    uVar4 = (ulong)*(uint *)(param_1 + 0x28);
    if (*(uint *)(param_1 + 0x28) == 0) goto LAB_00d2191c;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  lVar7 = 0;
  uVar8 = 0;
  do {
    fVar9 = *(float *)(lVar2 + lVar7 + 0x10);
    if (fVar9 <= 0.0) {
      uVar10 = (**(code **)(**(long **)(lVar2 + lVar7) + 0x40))(*(long **)(lVar2 + lVar7),param_2);
      lVar2 = *(long *)(param_1 + 0x30);
      *(undefined4 *)(lVar2 + lVar7 + 8) = uVar10;
      uVar4 = (ulong)*puVar6;
    }
    else {
      *(float *)(lVar2 + lVar7 + 0x10) = fVar9 - *(float *)(param_2 + 0x6c);
    }
    uVar8 = uVar8 + 1;
    lVar7 = lVar7 + 0x18;
  } while (uVar8 < uVar4);
LAB_00d2191c:
  FUN_00d229c0(lVar2,lVar2 + uVar4 * 0x18,auStack_60);
  if (*puVar6 != 0) {
    lVar2 = 0;
    uVar4 = 0;
    do {
      uVar3 = FUN_00d0ab34(*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar2),param_2,param_3);
      if ((int)uVar3 != 2) goto LAB_00d21970;
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar4 < *puVar6);
  }
  uVar3 = 2;
LAB_00d21970:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d219a0(uint *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00d22930(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 * 0x18;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar4 = lVar4 + -1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar3);
        puVar1[2] = param_3[2];
        uVar5 = *param_3;
        lVar3 = lVar3 + 0x18;
        puVar1[1] = param_3[1];
        *puVar1 = uVar5;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00d21a3c(void)

{
  return;
}




void FUN_00d21a40(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  float *pfVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  puVar12 = (uint *)(param_1 + 0x28);
  uVar13 = *puVar12;
  if (uVar13 == 0) {
    uVar3 = FUN_00d0ac48(param_1);
    local_88 = 0;
    uStack_80 = 0;
    local_90 = 0;
    FUN_00d219a0(puVar12,uVar3,&local_90);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      puVar9 = (undefined4 *)(*(long *)(param_1 + 0x30) + 0x10);
      do {
        *(long *)(puVar9 + -4) = lVar8;
        *puVar9 = 0;
        lVar8 = *(long *)(lVar8 + 0x18);
        puVar9 = puVar9 + 6;
      } while (lVar8 != 0);
    }
    uVar13 = *puVar12;
    if (uVar13 == 0) goto LAB_00d21bf4;
  }
  uVar7 = (ulong)uVar13;
  lVar10 = *(long *)(param_1 + 0x30);
  lVar8 = 0;
  uVar14 = 0;
  fVar16 = 0.0;
  do {
    lVar1 = lVar10 + lVar8;
    if (*(float *)(lVar1 + 0x10) <= 0.0) {
      fVar15 = (float)(**(code **)(**(long **)(lVar10 + lVar8) + 0x40))
                                (*(long **)(lVar10 + lVar8),param_2);
      lVar10 = *(long *)(param_1 + 0x30);
      *(float *)(lVar10 + lVar8 + 8) = fVar15;
      uVar7 = (ulong)*(uint *)(param_1 + 0x28);
    }
    else {
      fVar15 = *(float *)(lVar1 + 8);
      *(float *)(lVar1 + 0x10) = *(float *)(lVar1 + 0x10) - *(float *)(param_2 + 0x6c);
    }
    uVar14 = uVar14 + 1;
    lVar1 = lVar10 + lVar8;
    fVar16 = fVar16 + fVar15;
    lVar8 = lVar8 + 0x18;
    *(undefined1 *)(lVar1 + 0xc) = 0;
  } while (uVar14 < uVar7);
  if ((int)uVar7 != 0) {
    uVar13 = 0;
    do {
      iVar4 = rand();
      uVar6 = *puVar12;
      if (uVar6 != 0) {
        lVar8 = 0;
        uVar14 = 0;
        fVar15 = 0.0;
        do {
          lVar10 = *(long *)(param_1 + 0x30) + lVar8;
          if ((*(char *)(lVar10 + 0xc) == '\0') &&
             (fVar15 = fVar15 + *(float *)(lVar10 + 8),
             fVar16 * (float)iVar4 * 4.656613e-10 + 0.0 <= fVar15)) {
            uVar5 = FUN_00d0ab34(*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar8),param_2,param_3)
            ;
            lVar10 = *(long *)(param_1 + 0x30);
            if ((int)uVar5 != 2) {
              pfVar11 = (float *)(lVar10 + (ulong)uVar13 * 0x18 + 0x10);
              if (*pfVar11 <= 0.0) {
                *(undefined4 *)(lVar10 + (ulong)uVar13 * 0x18 + 8) = 0x40000000;
                *pfVar11 = 3.0;
              }
              goto LAB_00d21bf8;
            }
            *(undefined1 *)(lVar10 + lVar8 + 0xc) = 1;
            uVar6 = *puVar12;
            fVar16 = fVar16 - *(float *)(lVar10 + lVar8 + 8);
            break;
          }
          uVar14 = uVar14 + 1;
          lVar8 = lVar8 + 0x18;
        } while (uVar14 < uVar6);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar6);
  }
LAB_00d21bf4:
  uVar5 = 2;
LAB_00d21bf8:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00d21c64(void)

{
  return;
}




void FUN_00d21c68(long param_1)

{
  FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
  return;
}




int FUN_00d21c70(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 2) {
    iVar1 = 1;
  }
  return iVar1;
}




void FUN_00d21c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d21c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




int FUN_00d21ca0(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
  iVar1 = (uint)(iVar2 == 1) << 1;
  if (iVar2 == 2) {
    iVar1 = 1;
  }
  return iVar1;
}




void FUN_00d21ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d21cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




void FUN_00d21cdc(long param_1)

{
  FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_00d21ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d21cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




undefined8 FUN_00d21cf4(long param_1)

{
  FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
  return 2;
}




void FUN_00d21d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d21d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




void FUN_00d21d20(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819da8;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d21d54(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined8 FUN_00d21d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x24);
  iVar1 = rand();
  if (fVar3 < (float)iVar1 * 4.656613e-10 + 0.0) {
    return 2;
  }
  uVar2 = FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return uVar2;
}




void FUN_00d21ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d21de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




void FUN_00d21dec(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819e30;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0xff7fffff;
  return;
}




undefined8 FUN_00d21e34(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)FUN_009bc24c();
  fVar4 = *(float *)(param_1 + 5);
  fVar3 = (float)(**(code **)(*param_1 + 0x78))(param_1,param_2);
  if (fVar3 <= fVar2 - fVar4) {
    uVar1 = FUN_00d0ab34(param_1[2],param_2,param_3);
    if ((int)uVar1 == 2) {
      *(float *)(param_1 + 5) = fVar2;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d21eb8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined4 FUN_00d21ec0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




void FUN_00d21ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d21ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




void FUN_00d21ed8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *param_1 = &PTR_FUN_02819ec0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0xbf80000000000000;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}




uint FUN_00d21f1c(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  long lVar7;
  float fVar8;
  
  if (0.0 < *(float *)(param_1 + 6)) {
    fVar4 = (float)FUN_009bc24c();
    fVar8 = *(float *)(param_1 + 6);
    fVar5 = (float)(**(code **)(*param_1 + 0x78))(param_1,param_2);
    if (fVar4 - fVar8 < fVar5) {
      if ((*(char *)((long)param_1 + 0x34) != '\0') &&
         (uVar3 = FUN_00d2201c(param_1,param_2), (uVar3 & 1) != 0)) {
        lVar7 = param_1[7];
        *(long *)(param_2 + 0x1428) = param_1[8];
        *(long *)(param_2 + 0x1420) = lVar7;
      }
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = FUN_00d0ab34(param_1[2],param_2,param_3);
  if ((uVar1 | 2) == 3) {
    if (*(char *)((long)param_1 + 0x34) != '\0') {
      lVar7 = *(long *)(param_2 + 0x1420);
      param_1[8] = *(long *)(param_2 + 0x1428);
      param_1[7] = lVar7;
    }
    uVar6 = FUN_009bc24c();
    fVar5 = *(float *)((long)param_1 + 0x24);
    fVar4 = *(float *)(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = uVar6;
    if (fVar5 != fVar4) {
      iVar2 = rand();
      fVar4 = fVar5 + (fVar4 - fVar5) * (float)iVar2 * 4.656613e-10;
    }
    *(float *)((long)param_1 + 0x2c) = fVar4;
  }
  return uVar1;
}

