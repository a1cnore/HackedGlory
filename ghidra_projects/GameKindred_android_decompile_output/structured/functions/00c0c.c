// functions/00c0c — 37 functions
#include "libGameKindred.h"




void FUN_00c0c004(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x80a;
  do {
    if (param_1[lVar1] != 0) {
      FUN_00f01980();
      *(uint *)(param_1[lVar1] + 0x84) = *(uint *)(param_1[lVar1] + 0x84) & 0xfffffffb;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x80f);
  do {
    if (param_1[lVar1] != 0) {
      FUN_00f01980();
      *(uint *)(param_1[lVar1] + 0x84) = *(uint *)(param_1[lVar1] + 0x84) & 0xfffffffb;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x814);
  *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x12904) = *(uint *)((long)param_1 + 0x12904) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1731c) = *(uint *)((long)param_1 + 0x1731c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x334) = *(uint *)((long)param_1 + 0x334) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x47c) = *(uint *)((long)param_1 + 0x47c) & 0xfffffffb;
  FUN_00c87888(param_1 + 0x15f6);
  *(byte *)(param_1 + 0x317f) = *(byte *)(param_1 + 0x317f) | 0x10;
                    /* WARNING: Could not recover jumptable at 0x00c0c0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00c0c0ec(long param_1)

{
  FUN_00c87990(param_1 + 0xafb0);
  return;
}




void FUN_00c0c0f8(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x4154) =
       *(uint *)(param_1 + 0x4154) & 0xfffffff8 |
       *(uint *)(param_1 + 0x4154) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c0c110(long param_1,byte param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pbVar1 = (byte *)(param_1 + 0x18bf8);
  *pbVar1 = *pbVar1 & 0xfe | param_2 & 1;
  if ((param_2 & 1) == 0) {
    FUN_00c0a5b0();
  }
  else {
    FUN_00c0b270();
  }
  pcVar2 = "HUD_SCOREBOARD_FIXED_ORDER_BUTTON";
  if ((*pbVar1 & 1) != 0) {
    pcVar2 = "HUD_SCOREBOARD_SORT_BY_GOLD_BUTTON";
  }
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00ab7498(param_1 + 0x29d8,uVar3);
  return;
}




void FUN_00c0c188(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  code *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  param_3[1] = *param_3;
  do {
    if (*param_2 == 0) break;
    if ((long *)param_3[1] == (long *)param_3[2]) {
      FUN_00c0c94c(param_3,param_2);
    }
    else {
      *(long *)param_3[1] = *param_2;
      param_3[1] = param_3[1] + 8;
    }
    uVar2 = uVar2 + 1;
    param_2 = param_2 + 1;
  } while (uVar2 < 5);
  local_40 = FUN_00c0c240;
  FUN_00c0ca38(*param_3,param_3[1],&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00c0c240(long param_1,long param_2)

{
  return *(float *)(param_2 + 0x9240) < *(float *)(param_1 + 0x9240);
}




void FUN_00c0c258(long param_1)

{
  FUN_00b89d24(0x3e800000,param_1 + 0x15400,0,4,1);
  return;
}




void FUN_00c0c278(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0c288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0x10))();
    return;
  }
  return;
}




void FUN_00c0c290(long param_1)

{
  if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0c2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 200))();
    return;
  }
  return;
}




void FUN_00c0c2a8(long param_1)

{
  FUN_00c883a8(param_1 + 0x17298);
  *(uint *)(param_1 + 0x244) = *(uint *)(param_1 + 0x244) ^ 4;
  return;
}




void FUN_00c0c2e4(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0c2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 8))();
    return;
  }
  return;
}




void FUN_00c0c2fc(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0c30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0x50))();
    return;
  }
  return;
}




void FUN_00c0c314(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00c0c344(param_1,1,uVar1);
  return;
}




void FUN_00c0c344(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  float *pfVar2;
  
  lVar1 = param_1 + 0x15400;
  FUN_00a485f0(lVar1,param_3,param_2 & 1);
  pfVar2 = (float *)(param_1 + 0x15440);
  if ((*pfVar2 != 0.0) || (*(float *)(param_1 + 0x15444) != 0.0)) {
    pfVar2[0] = 0.0;
    pfVar2[1] = 0.0;
    FUN_0091ada4(lVar1);
  }
  FUN_00b89d24(0x3e800000,lVar1,1,4,1);
  return;
}




void FUN_00c0c3cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00c0c344(param_1,0,uVar1);
  return;
}




void FUN_00c0c3fc(long param_1)

{
  FUN_00b89d24(0x3e800000,param_1 + 0x15400,0,4,1);
  return;
}




void FUN_00c0c41c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00c0c44c(param_1,1,uVar1);
  return;
}




void FUN_00c0c44c(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  float *pfVar2;
  
  lVar1 = param_1 + 0x15400;
  FUN_00a488d8(lVar1,param_3,param_2 & 1);
  pfVar2 = (float *)(param_1 + 0x15440);
  if ((*pfVar2 != 0.0) || (*(float *)(param_1 + 0x15444) != 0.0)) {
    pfVar2[0] = 0.0;
    pfVar2[1] = 0.0;
    FUN_0091ada4(lVar1);
  }
  FUN_00b89d24(0x3e800000,lVar1,1,4,1);
  return;
}




void FUN_00c0c4d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00c0c44c(param_1,0,uVar1);
  return;
}




void FUN_00c0c504(long param_1)

{
  FUN_00b89d24(0x3e800000,param_1 + 0x15400,0,4,1);
  return;
}




void FUN_00c0c524(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float local_48;
  undefined1 auStack_44 [4];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(auStack_44,&local_48);
  plVar1 = (long *)(param_1 + 0x15400);
  iVar3 = FUN_00f04924(param_2);
  fVar4 = ((local_48 * 0.5 - *(float *)(param_1 + 0x18bd4)) + -18.0) / *(float *)(param_1 + 0x4c);
  if ((*(float *)(param_1 + 0x15440) != *(float *)(&DAT_01bbb880 + (ulong)(iVar3 == 1) * 4)) ||
     (*(float *)(param_1 + 0x15444) != fVar4)) {
    *(float *)(param_1 + 0x15440) = *(float *)(&DAT_01bbb880 + (ulong)(iVar3 == 1) * 4);
    *(float *)(param_1 + 0x15444) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_40 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0c630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
    uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c0c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
    return;
  }
  return;
}




void FUN_00c0c674(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = FUN_00f04924(param_2);
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0c6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2,uVar1);
    return;
  }
  return;
}




void FUN_00c0c6bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00f04924(param_2);
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0c6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar1,*(undefined4 *)(lVar1 + 0x10),*(undefined1 *)(lVar1 + 0x14));
    return;
  }
  return;
}




void FUN_00c0c70c(long param_1)

{
  *(uint *)(param_1 + 0x1731c) = *(uint *)(param_1 + 0x1731c) & 0xfffffffb;
  *(uint *)(param_1 + 0x244) = *(uint *)(param_1 + 0x244) & 0xfffffffb;
  return;
}




void FUN_00c0c730(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
    uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c0c764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,uVar1);
    return;
  }
  return;
}




void FUN_00c0c774(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 200);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0c788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,param_3);
    return;
  }
  return;
}




void FUN_00c0c790(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0c7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0x40))();
    return;
  }
  return;
}




void FUN_00c0c7a8(long param_1)

{
  FUN_00c0c110(param_1,(*(byte *)(param_1 + 0x18bf8) & 1) == 0);
  return;
}




void FUN_00c0c7c0(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0x48))();
    return;
  }
  return;
}




void FUN_00c0c7d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f5fb0;
  FUN_00f0d3a4(param_1 + 0x2c9);
  FUN_009c7fa8(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00c0c820(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_027f5e68;
  FUN_009c7fa8(param_1 + 0xc51);
  FUN_00f0d3a4(param_1 + 0xc2b);
  FUN_00f13d08(param_1 + 0xc14);
  lVar3 = -0x5e00;
  puVar1 = param_1 + 0x924;
  puVar2 = param_1 + 0xbed;
  do {
    *puVar1 = &PTR_FUN_027f5fb0;
    FUN_00f0d3a4(puVar2);
    FUN_009c7fa8(puVar1 + 0x11);
    FUN_00f01868(puVar1);
    puVar1 = puVar1 + -0x2f0;
    lVar3 = lVar3 + 0x1780;
    puVar2 = puVar2 + -0x2f0;
  } while (lVar3 != 0);
  FUN_00f0d3a4(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c0c8fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f5fb0;
  FUN_00f0d3a4(param_1 + 0x2c9);
  FUN_009c7fa8(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c0c94c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
  if (uVar3 >> 0x3d != 0) {
LAB_00c0c9b4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)(param_1[2] - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = param_1[2] - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00c0c9c8;
    }
    if (uVar3 >> 0x3d != 0) goto LAB_00c0c9b4;
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_00c0c9c8:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *param_1 = __dest;
  param_1[1] = puVar1 + 1;
  param_1[2] = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}




void FUN_00c0ca38(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
LAB_00c0caf0:
  puVar11 = param_2 + -1;
  puVar12 = param_1;
LAB_00c0cb10:
  param_1 = puVar12;
  lVar7 = (long)param_2 - (long)param_1;
  uVar6 = lVar7 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    uVar6 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar6 & 1) != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
      return;
    }
    return;
  case 3:
    FUN_00c0ce54(param_1,param_1 + 1,puVar11,param_3);
    return;
  case 4:
    FUN_00c0cf4c(param_1,param_1 + 1,param_1 + 2,puVar11,param_3);
    return;
  case 5:
    FUN_00c0d01c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar11,param_3);
    return;
  }
  if (lVar7 < 0xf8) {
    FUN_00c0d124(param_1,param_2,param_3);
    return;
  }
  uVar4 = uVar6;
  if ((long)uVar6 < 0) {
    uVar4 = uVar6 + 1;
  }
  puVar12 = (undefined8 *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
  if (lVar7 < 0x1f39) {
    iVar3 = FUN_00c0ce54(param_1,puVar12,puVar11,param_3);
  }
  else {
    uVar4 = uVar6 + 3;
    if (-1 < (long)uVar6) {
      uVar4 = uVar6;
    }
    lVar7 = (uVar4 & 0x7ffffffffffffffc) * 2;
    iVar3 = FUN_00c0d01c(param_1,(long)param_1 + lVar7,puVar12,(long)puVar12 + lVar7,puVar11,param_3
                        );
  }
  uVar6 = (*(code *)*param_3)(*param_1,*puVar12);
  puVar13 = puVar11;
  puVar10 = param_2 + -2;
  if ((uVar6 & 1) == 0) {
LAB_00c0cbb4:
    puVar13 = puVar10;
    if (param_1 != puVar13) goto code_r0x00c0cbbc;
    puVar12 = param_1 + 1;
    uVar6 = (*(code *)*param_3)(*param_1,*puVar11);
    if ((uVar6 & 1) == 0) {
      if (puVar12 == puVar11) {
        return;
      }
      puVar12 = param_1 + 2;
      while (uVar6 = (*(code *)*param_3)(*param_1,puVar12[-1]), (uVar6 & 1) == 0) {
        puVar12 = puVar12 + 1;
        if (param_2 == puVar12) {
          return;
        }
      }
      uVar8 = puVar12[-1];
      puVar12[-1] = *puVar11;
      *puVar11 = uVar8;
    }
    if (puVar12 == puVar11) {
      return;
    }
    while( true ) {
      puVar13 = puVar12 + -1;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12 + 1;
        uVar6 = (*(code *)*param_3)(*param_1,*puVar13);
      } while ((uVar6 & 1) == 0);
      puVar12 = puVar12 + 2;
      do {
        puVar11 = puVar11 + -1;
        uVar6 = (*(code *)*param_3)(*param_1,*puVar11);
      } while ((uVar6 & 1) != 0);
      if (puVar11 <= puVar13) break;
      uVar8 = *puVar13;
      *puVar13 = *puVar11;
      *puVar11 = uVar8;
    }
    uVar5 = 4;
    param_1 = puVar13;
    goto LAB_00c0cab4;
  }
  goto LAB_00c0cbe4;
code_r0x00c0cbbc:
  uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
  puVar10 = puVar13 + -1;
  if ((uVar6 & 1) != 0) goto code_r0x00c0cbd0;
  goto LAB_00c0cbb4;
code_r0x00c0cbd0:
  uVar8 = *param_1;
  iVar3 = iVar3 + 1;
  *param_1 = *puVar13;
  *puVar13 = uVar8;
LAB_00c0cbe4:
  puVar10 = param_1 + 1;
  puVar9 = puVar10;
  puVar1 = puVar12;
  if (puVar10 < puVar13) {
    while( true ) {
      puVar12 = puVar1;
      puVar10 = puVar9 + -1;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + 1;
        uVar6 = (*(code *)*param_3)(*puVar10,*puVar12);
      } while ((uVar6 & 1) != 0);
      puVar9 = puVar9 + 2;
      do {
        puVar13 = puVar13 + -1;
        uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
      } while ((uVar6 & 1) == 0);
      if (puVar13 < puVar10) break;
      uVar8 = *puVar10;
      iVar3 = iVar3 + 1;
      *puVar10 = *puVar13;
      *puVar13 = uVar8;
      puVar1 = puVar13;
      if (puVar12 != puVar10) {
        puVar1 = puVar12;
      }
    }
  }
  if ((puVar10 != puVar12) && (uVar6 = (*(code *)*param_3)(*puVar12,*puVar10), (uVar6 & 1) != 0)) {
    uVar8 = *puVar10;
    iVar3 = iVar3 + 1;
    *puVar10 = *puVar12;
    *puVar12 = uVar8;
  }
  if (iVar3 == 0) {
    uVar6 = FUN_00c0d1f4(param_1,puVar10,param_3);
    uVar4 = FUN_00c0d1f4(puVar10 + 1,param_2,param_3);
    if ((uVar4 & 1) != 0) goto LAB_00c0cad8;
    puVar12 = puVar10 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00c0cb10;
  }
  if ((long)param_2 - (long)puVar10 <= (long)puVar10 - (long)param_1) {
    FUN_00c0ca38(puVar10 + 1,param_2,param_3);
    param_2 = puVar10;
    goto LAB_00c0caf0;
  }
  FUN_00c0ca38(param_1,puVar10,param_3);
  puVar12 = puVar10 + 1;
  goto LAB_00c0cb10;
LAB_00c0cad8:
  bVar2 = (uVar6 & 1) == 0;
  if (bVar2) {
    param_2 = puVar10;
  }
  uVar5 = 1;
  if (bVar2) {
    uVar5 = 2;
  }
LAB_00c0cab4:
  if (4 < uVar5) {
    return;
  }
  if ((1 << (ulong)uVar5 & 0x15U) == 0) {
    return;
  }
  goto LAB_00c0caf0;
}




undefined8
FUN_00c0ce54(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)*param_4)(*param_2,*param_1);
  uVar2 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = (*(code *)*param_4)(*param_3);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar3;
    }
  }
  return 1;
}




int FUN_00c0cf4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00c0ce54();
  uVar2 = (*(code *)*param_5)(*param_4,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar2 = (*(code *)*param_5)(*param_3,*param_2);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar2 = (*(code *)*param_5)(*param_2,*param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return iVar1;
}

