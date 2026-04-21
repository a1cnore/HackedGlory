// functions/00cdb — 145 functions
#include "libGameKindred.h"




void FUN_00cdb004(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = DAT_0313e340;
  if (0x12 < param_2) {
    if (DAT_0313e340 != 0) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(DAT_0313e340 + 0x2e7e4);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((long)DWORD_ARRAY_0010423c + lVar1 + 0x51d8)
      ;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(&__DT_SYMTAB[0xce6].st_info + lVar1);
      return;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}




void FUN_00cdb058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280e088;
  DAT_0313e348 = 0;
  return;
}




void FUN_00cdb074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280e0a8;
  DAT_0313e350 = 0;
  return;
}




void FUN_00cdb090(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280e0c8;
  DAT_0313e358 = 0;
  return;
}




void FUN_00cdb0ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280e088;
  DAT_0313e348 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00cdb0c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280e0a8;
  DAT_0313e350 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00cdb0e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280e0c8;
  DAT_0313e358 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00cdb100(void)

{
  return;
}




void FUN_00cdb108(void)

{
  return;
}




void FUN_00cdb10c(void *param_1)

{
  FUN_00cdb130();
  operator_delete(param_1);
  return;
}




void FUN_00cdb130(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_0280e130;
  plVar2 = param_1 + 1;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    FUN_00cdb1c4(plVar2,lVar1 + -8);
    FUN_00cd9600(DAT_0313e340 + 0x2e7f0,lVar1 + -8);
    lVar1 = *plVar2;
  }
  return;
}




void FUN_00cdb1a0(void *param_1)

{
  FUN_00cdb130();
  operator_delete(param_1);
  return;
}




void FUN_00cdb1c4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00cdb220(void)

{
  return;
}




void FUN_00cdb228(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00cd9444(DAT_0313e340 + 0x2e7f0);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




undefined8 FUN_00cdb260(long *param_1)

{
  (**(code **)(*param_1 + 0x28))();
  return 0;
}




void FUN_00cdb280(void)

{
  return;
}




void FUN_00cdb284(void)

{
  return;
}




void FUN_00cdb288(void)

{
  return;
}




long FUN_00cdb28c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00cdb294(void)

{
  return;
}




void FUN_00cdb29c(void)

{
  return;
}




void FUN_00cdb2a0(void)

{
  return;
}




void FUN_00cdb2a4(void)

{
  return;
}




void FUN_00cdb2a8(void)

{
  return;
}




void FUN_00cdb2ac(void)

{
  return;
}




void FUN_00cdb2b0(void)

{
  return;
}




void FUN_00cdb2b4(void)

{
  return;
}




void FUN_00cdb2b8(void)

{
  return;
}




void FUN_00cdb2bc(void)

{
  return;
}




void FUN_00cdb2c0(void)

{
  return;
}




void FUN_00cdb2c4(void)

{
  return;
}




void FUN_00cdb2c8(void)

{
  return;
}




void FUN_00cdb2d0(void)

{
  return;
}




void FUN_00cdb2d4(void)

{
  return;
}




long FUN_00cdb2d8(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00cdb2e4(void)

{
  return;
}




long FUN_00cdb2e8(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00cdb2f0(void)

{
  return;
}




void FUN_00cdb2f4(void)

{
  return;
}




void FUN_00cdb2f8(void)

{
  return;
}




void FUN_00cdb2fc(void)

{
  return;
}




void FUN_00cdb300(void)

{
  return;
}




void FUN_00cdb304(void)

{
  return;
}




void FUN_00cdb308(void)

{
  return;
}




void FUN_00cdb30c(void)

{
  return;
}




void FUN_00cdb310(void)

{
  return;
}




void FUN_00cdb314(void)

{
  return;
}




void FUN_00cdb318(void)

{
  return;
}




void FUN_00cdb31c(void)

{
  return;
}




void FUN_00cdb320(void)

{
  return;
}




void FUN_00cdb328(void)

{
  return;
}




void FUN_00cdb32c(void)

{
  return;
}




long FUN_00cdb330(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00cdb338(void)

{
  return;
}




void FUN_00cdb340(void)

{
  return;
}




void FUN_00cdb344(void)

{
  return;
}




long FUN_00cdb348(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00cdb350(void)

{
  return;
}




void FUN_00cdb358(void)

{
  return;
}




void FUN_00cdb35c(void)

{
  return;
}




void FUN_00cdb360(void)

{
  return;
}




void FUN_00cdb364(void)

{
  return;
}




void FUN_00cdb368(void)

{
  return;
}




void FUN_00cdb36c(void)

{
  return;
}




void FUN_00cdb370(void)

{
  return;
}




void FUN_00cdb374(void)

{
  return;
}




void FUN_00cdb378(void)

{
  return;
}




void FUN_00cdb37c(void)

{
  return;
}




void FUN_00cdb380(void)

{
  return;
}




void FUN_00cdb384(void)

{
  return;
}




void FUN_00cdb388(void)

{
  return;
}




void FUN_00cdb38c(void)

{
  return;
}




void FUN_00cdb390(void)

{
  return;
}




void FUN_00cdb394(void)

{
  return;
}




void FUN_00cdb398(void)

{
  return;
}




void FUN_00cdb39c(void)

{
  return;
}




void FUN_00cdb3a0(void)

{
  return;
}




void FUN_00cdb3a8(void)

{
  return;
}




void FUN_00cdb3ac(void)

{
  return;
}




void FUN_00cdb3b0(void)

{
  return;
}




void FUN_00cdb3b4(void)

{
  return;
}




void FUN_00cdb3b8(void)

{
  return;
}




long FUN_00cdb3bc(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00cdb3c4(void)

{
  return;
}




void FUN_00cdb3cc(void)

{
  return;
}




void FUN_00cdb3d0(void)

{
  return;
}




void FUN_00cdb3d4(void)

{
  return;
}




void FUN_00cdb3d8(void)

{
  return;
}




void FUN_00cdb3dc(void)

{
  return;
}




void FUN_00cdb3e0(void)

{
  return;
}




void FUN_00cdb3e4(void)

{
  return;
}




void FUN_00cdb3e8(void)

{
  return;
}




void FUN_00cdb3ec(void)

{
  return;
}




void FUN_00cdb3f0(void)

{
  return;
}




void FUN_00cdb3f4(void)

{
  return;
}




void FUN_00cdb3f8(void)

{
  return;
}




void FUN_00cdb3fc(void)

{
  return;
}




void FUN_00cdb400(void)

{
  return;
}




void FUN_00cdb404(void)

{
  return;
}




void FUN_00cdb408(void)

{
  return;
}




void FUN_00cdb410(void)

{
  return;
}




long FUN_00cdb414(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00cdb41c(void)

{
  return;
}




void FUN_00cdb424(void)

{
  return;
}




void FUN_00cdb428(void)

{
  return;
}




void FUN_00cdb42c(void)

{
  return;
}




void FUN_00cdb430(void)

{
  return;
}




void FUN_00cdb434(void)

{
  return;
}




void FUN_00cdb438(void)

{
  return;
}




void FUN_00cdb43c(void)

{
  return;
}




void FUN_00cdb440(void)

{
  return;
}




void FUN_00cdb444(void)

{
  return;
}




void FUN_00cdb448(void)

{
  return;
}




void FUN_00cdb44c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280e628;
  FUN_00cdb724(param_1 + 0xe);
  FUN_00cdb724(param_1 + 0xb);
  return;
}




void FUN_00cdb484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280e628;
  FUN_00cdb724(param_1 + 0xe);
  FUN_00cdb724(param_1 + 0xb);
  operator_delete(param_1);
  return;
}




void FUN_00cdb4c8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00cdaac4(DAT_0313e340 + 0x2e7f0);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00cdb500(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cdb508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_00cdb50c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cdb514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




bool FUN_00cdb518(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  if ((char)param_3[4] == '\0') {
    lVar4 = FUN_00cd9800(DAT_0313e340 + 0x109420);
    iVar3 = *(int *)((long)&__DT_SYMTAB[0x7c9].st_value + DAT_0313e340 + 4);
    piVar1 = (int *)((long)&__DT_SYMTAB[0xce6].st_size + DAT_0313e340);
    if (*piVar1 < iVar3) {
      *piVar1 = iVar3;
    }
    uVar9 = 0;
    plVar8 = param_3 + 3;
    *plVar8 = lVar4;
    plVar10 = (long *)(param_1 + 0x18);
    do {
      plVar5 = (long *)*plVar10;
      if (plVar5 == (long *)0x0) break;
      uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
      if ((uVar6 & 1) == 0) {
        lVar4 = *plVar8;
        param_1 = param_1 + 0x70;
        goto LAB_00cdb5f0;
      }
      uVar9 = uVar9 + 1;
      plVar10 = plVar10 + 4;
    } while (uVar9 < 2);
    lVar4 = *plVar8;
    param_1 = param_1 + 0x58;
LAB_00cdb5f0:
    FUN_00cdb7d4(param_1,lVar4);
    lVar7 = param_3[3];
    lVar4 = 0;
    if (*(long *)(lVar7 + 8) != 0) {
      lVar4 = *(long *)(lVar7 + 8) + -8;
    }
    *(long *)(lVar7 + 0x28) = lVar4;
    FUN_00cdb854(lVar7,param_2);
    *(undefined1 *)(param_3 + 4) = 1;
  }
  else if (*(long *)(param_3[3] + 0x28) != 0) {
    FUN_00cdb854(param_3[3],param_2);
  }
  bVar2 = *(long *)(param_3[3] + 0x28) == 0;
  if (bVar2) {
    (**(code **)(*param_3 + 0x10))(param_3);
  }
  return !bVar2;
}




void FUN_00cdb658(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (((char)param_3[4] != '\0') && (lVar1 = param_3[3], lVar1 != 0)) {
    if (*(long *)(lVar1 + 0x28) != 0) {
      (**(code **)(**(long **)(*(long *)(lVar1 + 0x28) + 0x10) + 0x20))();
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00cdb6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x10))(param_3);
    return;
  }
  return;
}




void FUN_00cdb6b8(void)

{
  return;
}




undefined8 FUN_00cdb6c0(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = 0;
  plVar4 = (long *)(param_1 + 8);
  while( true ) {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if ((uVar2 & 1) == 0) break;
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 4;
    if (1 < uVar3) {
      return 1;
    }
  }
  return 0;
}




void FUN_00cdb724(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    FUN_00cdb778(param_1,lVar1 + -8);
    FUN_00cd9514(DAT_0313e340,lVar1 + -8);
    lVar1 = *param_1;
  }
  return;
}




void FUN_00cdb778(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00cdb7d4(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((*param_1 != 0) && (plVar5 = (long *)(*param_1 + -8), plVar5 != (long *)0x0)) {
    do {
      lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
      puVar4 = (undefined8 *)(lVar3 + 8);
      *puVar4 = 0;
      puVar2 = (undefined8 *)(param_2 + 8);
      if (*(long *)(param_2 + 8) != 0) {
        puVar2 = *(undefined8 **)(param_2 + 0x10);
      }
      *puVar2 = puVar4;
      *(undefined8 **)(param_2 + 0x10) = puVar4;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      plVar1 = plVar5 + 1;
      plVar5 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar5 = (long *)(*plVar1 + -8);
      }
    } while (plVar5 != (long *)0x0);
  }
  return;
}




void FUN_00cdb854(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 &&
         (iVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))(*(long **)(lVar2 + 0x10),param_2),
         iVar1 != 1))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 + -8;
    }
    *(long *)(param_1 + 0x28) = lVar2;
  }
  return;
}




void FUN_00cdb8b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280e698;
  if (param_1[3] != 0) {
    FUN_00cd98a4(DAT_0313e340 + 0x109420);
    return;
  }
  return;
}




void FUN_00cdb8e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280e698;
  if (param_1[3] != 0) {
    FUN_00cd98a4(DAT_0313e340 + 0x109420);
  }
  operator_delete(param_1);
  return;
}




void FUN_00cdb938(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00cd98a4(DAT_0313e340 + 0x109420);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00cdb97c(long param_1)

{
  long lVar1;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cdbbf8();
  local_48 = 0;
  pcStack_30 = FUN_00cdbbf4;
  lStack_40 = param_1;
  local_38 = param_1;
  FUN_00ad97b4(param_1 + 0x30,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cdb9e0(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00ce9af4();
  plVar1 = (long *)*plVar1;
  do {
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (lVar2 != 0);
  return;
}




void FUN_00cdba00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (ulong)*(uint *)(param_1 + 0x30) << 5;
  lVar1 = *(long *)(param_1 + 0x38);
  do {
    lVar2 = lVar1;
    if (lVar3 == 0) goto LAB_00cdba3c;
    lVar3 = lVar3 + -0x20;
    lVar1 = lVar2 + 0x20;
  } while (*(long *)(lVar2 + 8) != param_1);
  FUN_00ad98d8((uint *)(param_1 + 0x30),lVar2);
LAB_00cdba3c:
  FUN_00cdbcc8(param_1);
  return;
}




void FUN_00cdba4c(void)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 local_48;
  void *pvStack_40;
  void *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0xd0);
  FUN_00cdbbf8();
  local_48 = 0;
  pcStack_30 = FUN_00cdbbf4;
  pvStack_40 = pvVar2;
  local_38 = pvVar2;
  FUN_00ad97b4((long)pvVar2 + 0x30,&local_48);
  DAT_0313e360 = pvVar2;
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    FUN_00cdf728();
    FUN_00ce04c8();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cdbad0(void)

{
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093dbe8();
  if ((uVar2 & 1) == 0) {
    FUN_00cdf790();
    FUN_00ce0530();
  }
  pvVar1 = DAT_0313e360;
  if (DAT_0313e360 != (void *)0x0) {
    FUN_00cdba00(DAT_0313e360);
    operator_delete(pvVar1);
  }
  DAT_0313e360 = (void *)0x0;
  return;
}




undefined8 FUN_00cdbb18(void)

{
  return DAT_0313e360;
}




void FUN_00cdbb24(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  FUN_00cdc608(DAT_0313e360,pbVar1);
  return;
}




bool FUN_00cdbb44(byte *param_1,byte *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  lVar2 = FUN_00cdc608(DAT_0313e360,pbVar4);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  lVar3 = FUN_00cdc608(DAT_0313e360,pbVar4);
  if (lVar2 != 0) {
    if (lVar3 == 0) {
      return true;
    }
    if ((*(ushort *)(lVar2 + 0xb0) & 0x100) == 0) {
      return true;
    }
    if ((*(ushort *)(lVar3 + 0xb0) >> 8 & 1) != 0) {
      lVar2 = FUN_00cdda38(lVar2);
      uVar1 = *(uint *)(lVar2 + 0x18);
      lVar2 = FUN_00cdda38(lVar3);
      return uVar1 < *(uint *)(lVar2 + 0x18);
    }
  }
  return true;
}




void FUN_00cdbbf4(void)

{
  return;
}




void FUN_00cdbbf8(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_0280e6c0;
  param_1[3] = &PTR_FUN_0280ea68;
  FUN_00948cd8(param_1 + 8);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[8] = &PTR_FUN_027c7ea0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  local_48 = 0;
  pcStack_30 = thunk_FUN_00cdc4c0;
  puStack_40 = param_1;
  local_38 = param_1;
  FUN_00cddfec(param_1 + 0xb,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cdbcc8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  
  *param_1 = &PTR_FUN_0280e6c0;
  param_1[3] = &PTR_FUN_0280ea68;
  puVar4 = (uint *)(param_1 + 0xb);
  lVar3 = (ulong)*puVar4 << 5;
  lVar1 = param_1[0xc];
  do {
    lVar2 = lVar1;
    if (lVar3 == 0) goto LAB_00cdbd30;
    lVar3 = lVar3 + -0x20;
    lVar1 = lVar2 + 0x20;
  } while (*(undefined8 **)(lVar2 + 8) != param_1);
  FUN_00cde10c(puVar4,lVar2);
LAB_00cdbd30:
  FUN_00cdbd9c(param_1);
  FUN_00cdbf50(param_1 + 0x13);
  FUN_00cdbff0(param_1 + 0xd);
  param_1[8] = &PTR_FUN_027c7ea0;
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[0xc] = 0;
  }
  FUN_00948d58(param_1 + 8);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_00cdbd9c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  void *pvVar8;
  long lVar9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78;
  undefined8 local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_88 = *(undefined8 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar9 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar4 = (uint)local_88;
  local_78 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  local_70 = *(undefined8 *)(param_1 + 0x80);
  lVar2 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_60 = *(undefined4 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  local_b8 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  local_b0 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  local_a8 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  local_a0 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  local_98 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  local_90 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  uVar5 = 0;
  do {
    uVar6 = uVar5;
    uVar7 = (uint)uVar6;
    if (uVar4 <= uVar7) break;
    uVar5 = (ulong)(uVar7 + 1);
  } while (*(int *)(lVar9 + uVar6 * 8 + 4) == -1);
  do {
    local_80 = lVar9;
    local_68 = lVar2;
    if (uVar4 == uVar7) {
      FUN_00cdbf50(&local_b8);
      FUN_00cdbff0(&local_88);
      if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar1 = lVar9 + uVar6 * 8;
    FUN_00cdc3d8(*(long *)(lVar2 + (ulong)*(uint *)(lVar1 + 4) * 8) + 0x10);
    pvVar8 = *(void **)(lVar2 + (ulong)*(uint *)(lVar1 + 4) * 8);
    if (pvVar8 != (void *)0x0) {
      FUN_00cdc444(pvVar8);
      operator_delete(pvVar8);
    }
    uVar7 = (uint)uVar6;
    *(undefined8 *)(lVar2 + (ulong)*(uint *)(lVar9 + uVar6 * 8 + 4) * 8) = 0;
    do {
      uVar7 = uVar7 + 1;
      uVar6 = (ulong)uVar7;
      lVar9 = local_80;
      lVar2 = local_68;
      if (uVar4 <= uVar7) break;
    } while (*(int *)(local_80 + uVar6 * 8 + 4) == -1);
  } while( true );
}




void FUN_00cdbf50(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar4 = 0;
    lVar5 = 4;
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + lVar5);
      if (uVar2 != 0xffffffff) {
        puVar1 = (uint *)(*(long *)(param_1 + 8) + (ulong)uVar2 * 0x10);
        FUN_00951534(puVar1,1);
        *puVar1 = param_1[10];
        uVar3 = *param_1;
        param_1[10] = uVar2;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 < uVar3);
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




void FUN_00cdbff0(uint *param_1)

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
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
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




void thunk_FUN_00cdbd9c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  uStack_88 = *(undefined8 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar9 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar4 = (uint)uStack_88;
  uStack_78 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  uStack_70 = *(undefined8 *)(param_1 + 0x80);
  lVar2 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = 0;
  uStack_60 = *(undefined4 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  uStack_b8 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  uStack_b0 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uStack_a8 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uStack_a0 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uStack_98 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uStack_90 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  uVar5 = 0;
  do {
    uVar6 = uVar5;
    uVar7 = (uint)uVar6;
    if (uVar4 <= uVar7) break;
    uVar5 = (ulong)(uVar7 + 1);
  } while (*(int *)(lVar9 + uVar6 * 8 + 4) == -1);
  do {
    lStack_80 = lVar9;
    lStack_68 = lVar2;
    if (uVar4 == uVar7) {
      FUN_00cdbf50(&uStack_b8);
      FUN_00cdbff0(&uStack_88);
      if (*(long *)(lVar3 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar1 = lVar9 + uVar6 * 8;
    FUN_00cdc3d8(*(long *)(lVar2 + (ulong)*(uint *)(lVar1 + 4) * 8) + 0x10);
    pvVar8 = *(void **)(lVar2 + (ulong)*(uint *)(lVar1 + 4) * 8);
    if (pvVar8 != (void *)0x0) {
      FUN_00cdc444(pvVar8);
      operator_delete(pvVar8);
    }
    uVar7 = (uint)uVar6;
    *(undefined8 *)(lVar2 + (ulong)*(uint *)(lVar9 + uVar6 * 8 + 4) * 8) = 0;
    do {
      uVar7 = uVar7 + 1;
      uVar6 = (ulong)uVar7;
      lVar9 = lStack_80;
      lVar2 = lStack_68;
      if (uVar4 <= uVar7) break;
    } while (*(int *)(lStack_80 + uVar6 * 8 + 4) == -1);
  } while( true );
}

