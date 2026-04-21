// functions/0199b — 44 functions
#include "libGameKindred.h"




undefined8 thunk_FUN_0199be4c(void)

{
  return DAT_03214ff0;
}




void FUN_0199b03c(undefined4 param_1,long *param_2,char *param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  uVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    iVar1 = strcmp(param_3,*ppuVar3);
    if (iVar1 == 0) goto LAB_0199b094;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (uVar2 < 0x17);
  uVar2 = 0xffffffff;
LAB_0199b094:
  *(undefined4 *)
   (param_2[3] + (long)*(int *)(param_2[2] + uVar2 * 4) * 4 +
   (ulong)(uint)(*(int *)(&DAT_01e1be18 + (ulong)*(uint *)(*param_2 + uVar2 * 0x18 + 8) * 4) *
                param_4) * 4) = param_1;
  return;
}




void FUN_0199b0dc(long *param_1,char *param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  uVar5 = 0;
  ppuVar6 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    iVar3 = strcmp(param_2,*ppuVar6);
    if (iVar3 == 0) goto LAB_0199b130;
    uVar5 = uVar5 + 1;
    ppuVar6 = ppuVar6 + 3;
  } while (uVar5 < 0x17);
  uVar5 = 0xffffffff;
LAB_0199b130:
  lVar1 = param_1[3];
  lVar4 = 0;
  iVar3 = *(int *)(&DAT_01e1be18 + (ulong)*(uint *)(*param_1 + uVar5 * 0x18 + 8) * 4);
  iVar2 = *(int *)(param_1[2] + uVar5 * 4);
  do {
    *(undefined4 *)(lVar1 + (long)iVar2 * 4 + (ulong)(uint)(iVar3 * param_3) * 4 + lVar4) =
         *(undefined4 *)(param_4 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 8);
  return;
}




void FUN_0199b18c(long *param_1,char *param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  uVar5 = 0;
  ppuVar6 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    iVar3 = strcmp(param_2,*ppuVar6);
    if (iVar3 == 0) goto LAB_0199b1e0;
    uVar5 = uVar5 + 1;
    ppuVar6 = ppuVar6 + 3;
  } while (uVar5 < 0x17);
  uVar5 = 0xffffffff;
LAB_0199b1e0:
  lVar1 = param_1[3];
  lVar4 = 0;
  iVar3 = *(int *)(&DAT_01e1be18 + (ulong)*(uint *)(*param_1 + uVar5 * 0x18 + 8) * 4);
  iVar2 = *(int *)(param_1[2] + uVar5 * 4);
  do {
    *(undefined4 *)(lVar1 + (long)iVar2 * 4 + (ulong)(uint)(iVar3 * param_3) * 4 + lVar4) =
         *(undefined4 *)(param_4 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  return;
}




void FUN_0199b23c(long *param_1,char *param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  uVar5 = 0;
  ppuVar6 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    iVar3 = strcmp(param_2,*ppuVar6);
    if (iVar3 == 0) goto LAB_0199b290;
    uVar5 = uVar5 + 1;
    ppuVar6 = ppuVar6 + 3;
  } while (uVar5 < 0x17);
  uVar5 = 0xffffffff;
LAB_0199b290:
  lVar1 = param_1[3];
  lVar4 = 0;
  iVar3 = *(int *)(&DAT_01e1be18 + (ulong)*(uint *)(*param_1 + uVar5 * 0x18 + 8) * 4);
  iVar2 = *(int *)(param_1[2] + uVar5 * 4);
  do {
    *(undefined4 *)(lVar1 + (long)iVar2 * 4 + (ulong)(uint)(iVar3 * param_3) * 4 + lVar4) =
         *(undefined4 *)(param_4 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  return;
}




void FUN_0199b2ec(long param_1,char *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  uVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    iVar1 = strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_0199b340;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (uVar2 < 0x17);
  uVar2 = 0xffffffff;
LAB_0199b340:
  *(undefined8 *)
   (*(long *)(param_1 + 0x20) + (long)*(int *)(*(long *)(param_1 + 0x10) + uVar2 * 4) * 8 +
   (ulong)param_3 * 8) = param_4;
  return;
}




void FUN_0199b368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baf520;
  param_1[8] = 0x3f80000000000000;
  param_1[7] = 0;
  param_1[6] = 0x3f800000;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[1] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[10] = 0;
  param_1[9] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0xf] = 0;
  return;
}




undefined8 * FUN_0199b3d0(long param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0xaf);
  puVar5 = (undefined8 *)(lVar4 + 7U & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar5 = &PTR_FUN_02baf520;
  memcpy(puVar5 + 1,(void *)(param_1 + 8),0x9c);
  pvVar6 = *(void **)(param_1 + 0x88);
  if (pvVar6 != (void *)0x0) {
    do {
      while (*param_2 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = 100;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x107);
    pvVar7 = (void *)(lVar4 + 3U & 0xfffffffffffffffc);
    *param_2 = 0;
    memmove(pvVar7,pvVar6,0x104);
    puVar5[0x11] = pvVar7;
  }
  pvVar6 = *(void **)(param_1 + 0x98);
  if (pvVar6 != (void *)0x0) {
    uVar1 = *(uint *)(param_1 + 0xa0);
    if (uVar1 != 0) {
      do {
        while (*param_2 != 0) {
          ClearExclusiveLocal();
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar3) {
          *param_2 = 100;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pvVar7 = (void *)FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,uVar1);
      *param_2 = 0;
      memmove(pvVar7,pvVar6,(ulong)uVar1);
      puVar5[0x13] = pvVar7;
    }
  }
  return puVar5;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0199b510(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  do {
    if ((float)(&DAT_03215478)[uVar2] != (float)(&DAT_01e632b0)[uVar2]) {
      DAT_0321561c = DAT_0321561c | 0x38;
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  DAT_0321561c = DAT_0321561c | 0xb8;
  uRam00000000032154a0 = 0x3f800000;
  _DAT_03215498 = 0;
  uRam00000000032154b0 = 0x3f80000000000000;
  _DAT_032154a8 = 0;
  uRam0000000003215480 = 0;
  _DAT_03215478 = 0x3f800000;
  uRam0000000003215490 = 0;
  _DAT_03215488 = 0x3f80000000000000;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 4;
    *(undefined4 *)((long)&DAT_032154b8 + lVar3) = *(undefined4 *)(param_1 + lVar3 + 8);
    lVar3 = lVar1;
  } while (lVar1 != 0x40);
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 4;
    *(undefined4 *)((long)&DAT_03215538 + lVar3) = *(undefined4 *)(param_1 + lVar3 + 0x48);
    lVar3 = lVar1;
  } while (lVar1 != 0x40);
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0199b5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x90))(param_1,*(undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}




void FUN_0199b5c8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}




void FUN_0199b5d4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = param_3;
  *(undefined4 *)(param_1 + 0xa0) = param_4;
  return;
}




void FUN_0199b5e0(void)

{
  DAT_03214fe0 = operator_new(0x4010);
  *DAT_03214fe0 = 0;
  DAT_03214fe0[0x1002] = 0;
  return;
}




void FUN_0199b60c(void)

{
  if (DAT_03214fe0 != (void *)0x0) {
    operator_delete(DAT_03214fe0);
  }
  DAT_03214fe0 = (void *)0x0;
  return;
}




void FUN_0199b638(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baf548;
  param_1[1] = DAT_03214fe8;
  DAT_03214fe8 = param_1;
  return;
}




void FUN_0199b65c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_02baf548;
  puVar2 = &DAT_03214fe8;
  do {
    puVar1 = (undefined8 *)*puVar2;
    if (puVar1 == (undefined8 *)0x0) break;
    puVar2 = puVar1 + 1;
  } while (puVar1 != param_1);
  if (DAT_03214fe8 != param_1) {
    return;
  }
  DAT_03214fe8 = (undefined8 *)param_1[1];
  return;
}




void FUN_0199b6a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x199b6ac);
  (*pcVar1)();
}




undefined8 FUN_0199b6ac(void)

{
  return DAT_03214fe8;
}




void FUN_0199b6b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int param_7)

{
  FUN_0199cd4c(param_1,param_5,param_6);
  param_1[9] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  *param_1 = &PTR_FUN_02baf590;
  FUN_0199bac8(param_1 + 0xc);
  *(uint *)(param_1 + 0x11) = param_7 << 0x1f | 1;
  return;
}




void FUN_0199b72c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  FUN_0199cd4c(param_1,param_6,param_7);
  param_1[9] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = param_5;
  *param_1 = &PTR_FUN_02baf590;
  FUN_0199bac8(param_1 + 0xc);
  *(uint *)(param_1 + 0x11) = param_4 & 0x3fffffff | param_8 << 0x1f | 0x40000000;
  return;
}




void FUN_0199b7a8(void)

{
  return;
}




undefined8 * FUN_0199b7b0(long param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x97);
  puVar9 = (undefined8 *)(lVar4 + 7U & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar9 = &PTR___cxa_pure_virtual_028256c8;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar9[2] = *(undefined8 *)(param_1 + 0x10);
  puVar9[1] = uVar6;
  *puVar9 = &PTR_FUN_02baf6e0;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puVar9[8] = *(undefined8 *)(param_1 + 0x40);
  puVar9[7] = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  puVar9[6] = *(undefined8 *)(param_1 + 0x30);
  puVar9[5] = uVar6;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *puVar9 = &PTR_FUN_02baf590;
  puVar9[4] = uVar10;
  puVar9[3] = uVar6;
  puVar9[0xb] = *(undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  puVar9[10] = *(undefined8 *)(param_1 + 0x50);
  puVar9[9] = uVar6;
  FUN_0199bae8(puVar9 + 0xc,param_1 + 0x60);
  *(undefined4 *)(puVar9 + 0x11) = *(undefined4 *)(param_1 + 0x88);
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = (**(code **)*puVar5)(puVar5,param_2);
    puVar9[3] = uVar6;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = (**(code **)*puVar5)(puVar5,param_2);
    puVar9[4] = uVar6;
  }
  uVar1 = *(uint *)(param_1 + 0x88);
  if ((uVar1 >> 0x1e & 1) != 0) {
    do {
      while (*param_2 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = 100;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,uVar1 << 3 | 7);
    *param_2 = 0;
    uVar7 = lVar4 + 7U & 0xfffffffffffffff8;
    if ((*(uint *)(param_1 + 0x88) & 0x3fffffff) != 0) {
      uVar8 = 0;
      do {
        *(undefined8 *)(uVar7 + uVar8 * 8) = *(undefined8 *)(*(long *)(param_1 + 0x50) + uVar8 * 8);
        uVar8 = uVar8 + 1;
      } while (uVar8 < ((ulong)*(uint *)(param_1 + 0x88) & 0x3fffffff));
    }
    puVar9[10] = uVar7;
  }
  return puVar9;
}




void FUN_0199b944(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  puVar3 = (undefined8 *)(param_1 + 0x50);
  if ((uVar2 >> 0x1e & 1) != 0) {
    puVar3 = (undefined8 *)*puVar3;
  }
  if (param_3 == (long *)0x0) {
    if ((uVar2 & 0x3fffffff) != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(long **)(puVar3[lVar4] + 8);
        (**(code **)(*plVar1 + 0x10))
                  (plVar1,param_2,*(undefined8 *)(param_1 + 0x58),param_1,puVar3[lVar4],
                   param_1 + 0x60);
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < (*(uint *)(param_1 + 0x88) & 0x3fffffff));
    }
  }
  else if ((uVar2 & 0x3fffffff) != 0) {
    lVar4 = 0;
    do {
      if (*(long **)(puVar3[lVar4] + 8) == param_3) {
        (**(code **)(*param_3 + 0x10))
                  (param_3,param_2,*(undefined8 *)(param_1 + 0x58),param_1,puVar3[lVar4],
                   param_1 + 0x60);
        uVar2 = *(uint *)(param_1 + 0x88);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < (uVar2 & 0x3fffffff));
  }
  return;
}




void FUN_0199ba28(long param_1)

{
  if (-1 < *(int *)(param_1 + 0x88)) {
    return;
  }
  FUN_0199bbe0(param_1 + 0x60);
  return;
}




void FUN_0199ba40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0199ba54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x18))(*(long **)(param_1 + 0x58),param_1 + 0x60);
  return;
}




void FUN_0199ba58(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  for (plVar2 = *(long **)(param_2 + 0x10); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    lVar1 = plVar2[1];
    (**(code **)*plVar2)(plVar2);
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x20))(param_1,lVar1);
    }
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}




void FUN_0199bac4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x199bac8);
  (*pcVar1)();
}




void FUN_0199bac8(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_02baf630;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}




void FUN_0199bae8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_02baf630;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}




void FUN_0199bb10(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    while (*piVar1 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(long *)(param_1 + 0x10) == 0) {
    *(long *)(param_1 + 0x10) = param_2;
  }
  else {
    *(long *)(*(long *)(param_1 + 0x18) + 0x10) = param_2;
  }
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}




void FUN_0199bb68(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    while (*piVar1 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  lVar4 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar4;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}




void FUN_0199bbd8(void)

{
  return;
}




void FUN_0199bbe0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long alStack_50 [2];
  
  lVar2 = tpidr_el0;
  alStack_50[1] = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = (ulong)uVar1;
  if (uVar1 != 0) {
    plVar4 = alStack_50 + uVar5 * -2;
    for (lVar3 = *(long *)(param_1 + 0x10); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
      *plVar4 = *(long *)(lVar3 + 0x18);
      plVar4[1] = lVar3;
      plVar4 = plVar4 + 2;
    }
    FUN_0199bc98(alStack_50 + uVar5 * -2,0,uVar1 - 1);
    *(long *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    plVar4 = alStack_50 + uVar5 * -2 + 1;
    do {
      FUN_0199bb10(param_1,*plVar4);
      uVar1 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar1;
      plVar4 = plVar4 + 2;
    } while (uVar1 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == alStack_50[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199bc98(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar8;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar7;
  ulong *puVar9;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  iVar1 = param_3 + param_2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  iVar10 = param_2;
  iVar3 = param_3;
  if (param_2 <= param_3) {
    uVar4 = *(ulong *)(param_1 +
                      (-(ulong)((uint)(iVar1 >> 1) >> 0x1f) & 0xfffffff000000000 |
                      (ulong)(uint)(iVar1 >> 1) << 4));
    do {
      puVar6 = (ulong *)(param_1 + -0x10 + (long)iVar10 * 0x10);
      iVar1 = iVar10;
      do {
        iVar10 = iVar1;
        puVar7 = puVar6;
        puVar6 = puVar7 + 2;
        iVar1 = iVar10 + 1;
      } while (*puVar6 < uVar4);
      puVar8 = (ulong *)(param_1 + 0x10 + (long)iVar3 * 0x10);
      iVar1 = iVar3;
      do {
        iVar3 = iVar1;
        puVar9 = puVar8;
        puVar8 = puVar9 + -2;
        iVar1 = iVar3 + -1;
      } while (uVar4 < *puVar8);
      if (iVar10 <= iVar3) {
        uVar13 = puVar7[3];
        uVar11 = *puVar6;
        uVar12 = *puVar8;
        puVar7[3] = puVar9[-1];
        *puVar6 = uVar12;
        puVar9[-1] = uVar13;
        *puVar8 = uVar11;
        iVar10 = iVar10 + 1;
        iVar3 = iVar3 + -1;
      }
    } while (iVar10 <= iVar3);
  }
  if (param_2 < iVar3) {
    FUN_0199bc98(param_1);
  }
  if (iVar10 < param_3) {
    FUN_0199bc98(param_1,iVar10,param_3);
  }
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0199bda8(undefined8 param_1)

{
  void *pvVar1;
  
  FUN_0199b5e0();
  pvVar1 = operator_new(0x38);
  FUN_0199c24c(pvVar1,param_1);
  DAT_03214ff0 = pvVar1;
  FUN_0199be5c();
  FUN_0199c090();
  return;
}




void FUN_0199bde8(void)

{
  void *pvVar1;
  
  FUN_0199c0dc();
  FUN_0199becc();
  pvVar1 = DAT_03214ff0;
  if (DAT_03214ff0 != (void *)0x0) {
    FUN_0199c264(DAT_03214ff0);
    operator_delete(pvVar1);
  }
  DAT_03214ff0 = (void *)0x0;
  FUN_0199b60c();
  return;
}




void FUN_0199be28(undefined8 param_1,uint param_2)

{
  FUN_0199c358(DAT_03214ff0,param_1,param_2 & 1);
  return;
}




void FUN_0199be40(void)

{
  FUN_0199c474(DAT_03214ff0);
  return;
}




undefined8 FUN_0199be4c(void)

{
  return DAT_03214ff0;
}




void FUN_0199be5c(void)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00e78248();
  if ((uVar1 & 1) != 0) {
    pvVar2 = operator_new(0xa8);
    FUN_00e7996c(pvVar2,1,FUN_01988d6c,"Render thread",2);
    DAT_032150f0 = pvVar2;
    FUN_00e78608(&DAT_03214ff8,2,PTR_s___Render_Serial_Queue_02bf24f0);
    return;
  }
  return;
}




void FUN_0199becc(void)

{
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e78714(&DAT_03214ff8);
  if ((uVar2 & 1) != 0) {
    FUN_00e7bae8(&DAT_03214ff8,1);
    FUN_00e78724(&DAT_03214ff8);
    pvVar1 = DAT_032150f0;
    if (DAT_032150f0 != (void *)0x0) {
      FUN_00e79b10(DAT_032150f0);
      operator_delete(pvVar1);
    }
    DAT_032150f0 = (void *)0x0;
  }
  return;
}




void FUN_0199bf28(void)

{
  FUN_00e78714(&DAT_03214ff8);
  return;
}




void FUN_0199bf34(void)

{
  FUN_00e78a6c(&DAT_03214ff8);
  return;
}




void FUN_0199bf40(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03214ff8);
  if ((uVar1 & 1) != 0) {
    if ((DAT_032150f0 != 0) && (uVar1 = FUN_00e78a6c(&DAT_03214ff8), (uVar1 & 1) != 0)) {
      FUN_0199bfc8();
      FUN_00e78948(&DAT_03214ff8);
      FUN_00e788e4(&DAT_03214ff8);
    }
    uVar1 = FUN_00e788d4(&DAT_03214ff8);
    if ((uVar1 & 1) != 0) {
      FUN_00e7bae8(&DAT_03214ff8,0);
      return;
    }
  }
  return;
}




void FUN_0199bfc8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03214ff8);
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00e78a6c(&DAT_03214ff8), (uVar1 & 1) != 0)) {
    FUN_00e7893c(&DAT_03214ff8);
    return;
  }
  return;
}

