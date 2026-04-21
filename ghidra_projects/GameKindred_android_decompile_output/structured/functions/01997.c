// functions/01997 — 49 functions
#include "libGameKindred.h"




undefined8 thunk_FUN_01997b28(void)

{
  return DAT_03214f88;
}




long FUN_01997038(long *param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(ushort *)(param_1 + 2) != 0) {
    lVar1 = *param_1;
    uVar2 = 0;
    do {
      if (*(int *)(lVar1 + 4) == param_2) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (uVar2 < *(ushort *)(param_1 + 2));
  }
  return 0;
}




long FUN_01997070(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*(ushort *)(param_1 + 2) != 0) {
    lVar1 = *param_1;
    uVar2 = 0;
    do {
      if (*(int *)(lVar1 + 4) == param_2) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (uVar2 < *(ushort *)(param_1 + 2));
  }
  return 0;
}




bool FUN_019970a8(long *param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  
  if (*(ushort *)(param_1 + 2) != 0) {
    uVar1 = 0;
    piVar2 = (int *)(*param_1 + 4);
    do {
      if (*piVar2 == param_2) {
        return piVar2 != (int *)0x4;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar1 < *(ushort *)(param_1 + 2));
  }
  return false;
}




int FUN_019970ec(long *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = 0xffffffffffffffff;
  piVar4 = (int *)(*param_1 + 4);
  do {
    iVar1 = *piVar4;
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar1 != param_2);
  uVar2 = *(uint *)(*param_1 + (uVar3 & 0xffffffff) * 8);
  if ((uVar2 >> 0x1e & 1) == 0) {
    return (uVar2 >> 0x1c & 7) + 1;
  }
  return 0;
}




void FUN_0199712c(undefined4 param_1,long *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = 0xffffffffffffffff;
  piVar3 = (int *)(*param_2 + 4);
  do {
    iVar1 = *piVar3;
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar1 != param_3);
  *(undefined4 *)
   (param_2[1] + (ulong)(*(uint *)(*param_2 + (uVar2 & 0xffffffff) * 8) >> 0xc & 0xffff) * 4) =
       param_1;
  return;
}




void FUN_01997164(long *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = 0xffffffffffffffff;
  piVar4 = (int *)(*param_1 + 4);
  do {
    iVar1 = *piVar4;
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar1 != param_2);
  if (param_4 != 0) {
    puVar2 = (undefined4 *)
             (param_1[1] +
             (ulong)(*(uint *)(*param_1 + (uVar3 & 0xffffffff) * 8) >> 0xc & 0xffff) * 4);
    do {
      param_4 = param_4 + -1;
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    } while (param_4 != 0);
  }
  return;
}




void FUN_019971b0(long *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = 0xffffffffffffffff;
  piVar3 = (int *)(*param_1 + 4);
  do {
    iVar1 = *piVar3;
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar1 != param_2);
  uVar2 = *(uint *)(*param_1 + (uVar5 & 0xffffffff) * 8);
  lVar6 = param_1[1];
  lVar4 = 0;
  do {
    *(undefined4 *)(lVar6 + (ulong)(uVar2 >> 0xc & 0xffff) * 4 + lVar4) =
         *(undefined4 *)(param_3 + lVar4);
    lVar4 = lVar4 + 4;
  } while ((int)lVar4 != 8);
  return;
}




void FUN_01997200(long *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = 0xffffffffffffffff;
  piVar3 = (int *)(*param_1 + 4);
  do {
    iVar1 = *piVar3;
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar1 != param_2);
  uVar2 = *(uint *)(*param_1 + (uVar5 & 0xffffffff) * 8);
  lVar6 = param_1[1];
  lVar4 = 0;
  do {
    *(undefined4 *)(lVar6 + (ulong)(uVar2 >> 0xc & 0xffff) * 4 + lVar4) =
         *(undefined4 *)(param_3 + lVar4);
    lVar4 = lVar4 + 4;
  } while ((int)lVar4 != 0xc);
  return;
}




void FUN_01997250(long *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = 0xffffffffffffffff;
  piVar3 = (int *)(*param_1 + 4);
  do {
    iVar1 = *piVar3;
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar1 != param_2);
  uVar2 = *(uint *)(*param_1 + (uVar5 & 0xffffffff) * 8);
  lVar6 = param_1[1];
  lVar4 = 0;
  do {
    *(undefined4 *)(lVar6 + (ulong)(uVar2 >> 0xc & 0xffff) * 4 + lVar4) =
         *(undefined4 *)(param_3 + lVar4);
    lVar4 = lVar4 + 4;
  } while ((int)lVar4 != 0x10);
  return;
}




void FUN_019972a0(long *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  undefined1 local_8 [8];
  
  uVar5 = 0xffffffffffffffff;
  piVar3 = (int *)(*param_1 + 4);
  do {
    iVar2 = *piVar3;
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar2 != param_2);
  lVar4 = 0;
  puVar1 = (undefined4 *)
           (param_1[1] + (ulong)(*(uint *)(*param_1 + (uVar5 & 0xffffffff) * 8) >> 0xc & 0xffff) * 4
           );
  *puVar1 = param_3;
  do {
    *(undefined4 *)((long)puVar1 + lVar4 + 4) = *(undefined4 *)(((ulong)local_8 | 4) + lVar4);
    lVar4 = lVar4 + 4;
  } while ((int)lVar4 != 4);
  return;
}




uint * FUN_01997308(undefined8 *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  ulong uVar2;
  
  if (*(ushort *)(param_1 + 2) != 0) {
    puVar1 = (uint *)*param_1;
    uVar2 = 0;
    do {
      if (((*puVar1 & 0xfff) == param_2) &&
         ((param_3 == 4) == ((*puVar1 & 0x70000000) == 0x40000000))) {
        return puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (uVar2 < *(ushort *)(param_1 + 2));
  }
  return (uint *)0x0;
}




uint * FUN_01997360(undefined8 *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  ulong uVar2;
  
  if (*(ushort *)(param_1 + 2) != 0) {
    puVar1 = (uint *)*param_1;
    uVar2 = 0;
    do {
      if (((*puVar1 & 0xfff) == param_2) &&
         ((param_3 == 4) == ((*puVar1 & 0x70000000) == 0x40000000))) {
        return puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (uVar2 < *(ushort *)(param_1 + 2));
  }
  return (uint *)0x0;
}




void FUN_019973b8(undefined8 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar5;
  undefined1 local_8 [8];
  uint *puVar4;
  
  puVar3 = (uint *)*param_1;
  do {
    do {
      puVar4 = puVar3 + 2;
      uVar2 = *puVar3;
      puVar3 = puVar4;
    } while ((uVar2 & 0xfff) != param_2);
  } while ((uVar2 & 0x70000000) != 0x40000000);
  lVar5 = 0;
  puVar1 = (undefined4 *)(param_1[1] + (ulong)(uVar2 >> 0xc & 0xffff) * 4);
  *puVar1 = param_3;
  do {
    *(undefined4 *)((long)puVar1 + lVar5 + 4) = *(undefined4 *)(((ulong)local_8 | 4) + lVar5);
    lVar5 = lVar5 + 4;
  } while ((int)lVar5 != 4);
  return;
}




void FUN_0199741c(undefined8 *param_1,uint param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  for (puVar2 = (uint *)*param_1;
      (uVar1 = *puVar2, (uVar1 & 0xfff) != param_2 ||
      ((param_5 == 4) != ((uVar1 & 0x70000000) == 0x40000000))); puVar2 = puVar2 + 2) {
  }
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_1[1] + (ulong)(uVar1 >> 0xc & 0xffff) * 4);
    do {
      param_4 = param_4 + -1;
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    } while (param_4 != 0);
  }
  return;
}




void FUN_0199747c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    lVar6 = *param_1;
    lVar4 = 0;
    uVar5 = 1;
    lVar2 = lVar6;
    while( true ) {
      if ((*(uint *)(lVar2 + lVar4) & 0x70000000) != 0x40000000) {
        uVar1 = FUN_0199f5f8(param_2,*(uint *)(lVar2 + lVar4) & 0xfff);
        *(uint *)(*param_1 + lVar4) = *(uint *)(*param_1 + lVar4) & 0xfffff000 | uVar1 & 0xfff;
        lVar2 = *param_1;
      }
      if (lVar6 + lVar4 != lVar2 + lVar4) {
        *(undefined8 *)(lVar6 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
      }
      uVar1 = *(uint *)(param_1 + 2);
      if ((ushort)uVar1 <= uVar5) break;
      lVar2 = *param_1;
      lVar4 = lVar4 + 8;
      uVar5 = uVar5 + 1;
    }
    uVar3 = (uint)uVar5 & 0xffff;
  }
  *(uint *)(param_1 + 2) = uVar1 & 0xffff0000 | uVar3;
  return;
}




void FUN_01997550(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




void FUN_0199755c(void)

{
  return;
}




undefined8
FUN_01997560(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00e7a7e4(0x28);
  FUN_00e7a3c0();
  *puVar2 = &PTR_thunk_FUN_00e7a3d4_02baf308;
  puVar7 = puVar2 + 2;
  *puVar7 = param_2;
  puVar2[3] = param_3;
  *(undefined4 *)(puVar2 + 4) = param_1;
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar7;
  local_60[1] = thunk_FUN_019976e4;
  uVar3 = FUN_00e7b734(&local_60,0x959a5c8d);
  uVar3 = FUN_00e7b740(uVar3,param_5);
  FUN_00e7b7f0(uVar3,puVar2);
  uVar3 = FUN_00e7b844();
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar7;
  local_60[1] = thunk_FUN_019977d4;
  uVar4 = FUN_00e7b734(&local_60,0x91c1db3);
  uVar5 = FUN_00e7a0d0();
  uVar4 = FUN_00e7b728(uVar4,uVar5);
  uVar4 = FUN_00e7b740(uVar4,uVar3);
  uVar4 = FUN_00e7b784(uVar4,param_6);
  FUN_00e7b7f0(uVar4,puVar2);
  uVar4 = FUN_00e7b844();
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar7;
  local_60[1] = FUN_01997848;
  uVar5 = FUN_00e7b734(&local_60,0x5ff44943);
  uVar6 = FUN_00e7a0ec();
  uVar5 = FUN_00e7b728(uVar5,uVar6);
  uVar4 = FUN_00e7b740(uVar5,uVar4);
  FUN_00e7b7f0(uVar4,puVar2);
  uVar4 = FUN_00e7b844();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,uVar4);
}




void FUN_019976e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int local_460 [262];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e7a224();
  lVar4 = FUN_00e7a25c(uVar3,0x815f1c7b);
  puVar1 = (undefined8 *)0x0;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x10);
  }
  puVar5 = (undefined8 *)FUN_00e7a7e4(0x7880);
  FUN_00e7a3c0();
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)(puVar5 + 0xeff) = 0;
  *puVar5 = &PTR_FUN_02baf328;
  uVar3 = FUN_00e7a224();
  FUN_00e7a2d0(uVar3,puVar5,0xb875ca64);
  memset(local_460,0,0x418);
  FUN_019967f0(param_1[1],*param_1,local_460,puVar5 + 2,*puVar1,puVar1[1]);
  FUN_019967f8(param_1[1],*param_1,local_460);
  if (local_460[0] != 0) {
    local_460[0] = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019977d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00e7a224();
  lVar3 = FUN_00e7a25c(uVar2,0xb875ca64);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
  }
  FUN_0199680c(param_1[1],*param_1,lVar1);
  return;
}




void FUN_01997814(void)

{
  return;
}




void FUN_0199781c(void *param_1)

{
  FUN_00e7a3d4();
  operator_delete(param_1);
  return;
}




void thunk_FUN_019976e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int aiStack_460 [262];
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e7a224();
  lVar4 = FUN_00e7a25c(uVar3,0x815f1c7b);
  puVar1 = (undefined8 *)0x0;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x10);
  }
  puVar5 = (undefined8 *)FUN_00e7a7e4(0x7880);
  FUN_00e7a3c0();
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)(puVar5 + 0xeff) = 0;
  *puVar5 = &PTR_FUN_02baf328;
  uVar3 = FUN_00e7a224();
  FUN_00e7a2d0(uVar3,puVar5,0xb875ca64);
  memset(aiStack_460,0,0x418);
  FUN_019967f0(param_1[1],*param_1,aiStack_460,puVar5 + 2,*puVar1,puVar1[1]);
  FUN_019967f8(param_1[1],*param_1,aiStack_460);
  if (aiStack_460[0] != 0) {
    aiStack_460[0] = 0;
  }
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_019977d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00e7a224();
  lVar3 = FUN_00e7a25c(uVar2,0xb875ca64);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
  }
  FUN_0199680c(param_1[1],*param_1,lVar1);
  return;
}




void FUN_01997848(void)

{
  return;
}




void FUN_0199784c(long param_1)

{
  if (*(int *)(param_1 + 0x77f8) != 0) {
    *(int *)(param_1 + 0x77f8) = 0;
  }
  FUN_01996874(param_1 + 0x10);
  FUN_00e7a3d4(param_1);
  return;
}




void FUN_01997888(void *param_1)

{
  FUN_0199784c();
  operator_delete(param_1);
  return;
}




void FUN_019978ac(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  undefined **ppuVar5;
  
  pvVar3 = operator_new(0x10);
  FUN_01999d00(pvVar3,param_1);
  pvVar4 = operator_new(0x10);
  FUN_01999b98();
  DAT_03214f70 = pvVar3;
  DAT_03214f78 = pvVar4;
  pvVar3 = operator_new(0x30070);
  FUN_01998010();
  ppuVar1 = &PTR_s_OmniLight_Position_02bf2858;
  DAT_03214f80 = pvVar3;
  do {
    ppuVar5 = ppuVar1;
    iVar2 = strcmp("OmniLight.Position",*ppuVar5);
    ppuVar1 = ppuVar5 + 3;
  } while (iVar2 != 0);
  *(undefined4 *)((long)ppuVar5 + 0xc) = 2;
  ppuVar1 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    ppuVar5 = ppuVar1;
    iVar2 = strcmp("OmniLight.Color",*ppuVar5);
    ppuVar1 = ppuVar5 + 3;
  } while (iVar2 != 0);
  *(undefined4 *)((long)ppuVar5 + 0xc) = 2;
  ppuVar1 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    ppuVar5 = ppuVar1;
    iVar2 = strcmp("OmniLight.Attenuation",*ppuVar5);
    ppuVar1 = ppuVar5 + 3;
  } while (iVar2 != 0);
  *(undefined4 *)((long)ppuVar5 + 0xc) = 2;
  pvVar3 = operator_new(0x28);
  FUN_0199aaf8(pvVar3,&PTR_s_OmniLight_Position_02bf2858,0x17);
  DAT_03214f88 = pvVar3;
  FUN_0199b2ec(pvVar3,"CloudShadows.Texture",0,&PTR_PTR_02bf2828);
  FUN_0199b2ec(DAT_03214f88,"FogOfWar.Texture",0,&PTR_PTR_02bf2828);
  FUN_0199b2ec(DAT_03214f88,"Shadowing.mMap",0,&PTR_PTR_02bf2828);
  pvVar3 = operator_new(0x30);
  FUN_019963f4(pvVar3,DAT_03214f80);
  DAT_03214f90 = pvVar3;
  return;
}




void FUN_01997a24(void)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = DAT_03214f90;
  if (DAT_03214f90 != (void *)0x0) {
    FUN_0199643c(DAT_03214f90);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_03214f88;
  if (DAT_03214f88 != (void *)0x0) {
    FUN_0199ac48(DAT_03214f88);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_03214f80;
  if (DAT_03214f80 != (void *)0x0) {
    FUN_019980d0(DAT_03214f80);
    operator_delete(pvVar1);
  }
  lVar2 = 0;
  do {
    if (*(long **)((long)&DAT_03214f70 + lVar2) != (long *)0x0) {
      (**(code **)(**(long **)((long)&DAT_03214f70 + lVar2) + 8))();
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x10);
  return;
}




void FUN_01997abc(float param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_0199af30(DAT_03214f88,"World.Time",0);
  if (pfVar1 != (float *)0x0) {
    *pfVar1 = *pfVar1 + param_1;
  }
  return;
}




undefined8 FUN_01997b00(void)

{
  return DAT_03214f80;
}




undefined8 FUN_01997b0c(void)

{
  return DAT_03214f90;
}




undefined8 FUN_01997b18(ulong param_1)

{
  return (&DAT_03214f70)[param_1 & 0xffffffff];
}




undefined8 FUN_01997b28(void)

{
  return DAT_03214f88;
}




void FUN_01997b38(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0199d9b4(*(undefined4 *)(param_1 + 8));
  FUN_00f01264(param_2,uVar1);
  return;
}




void FUN_01997b64(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_0199f590(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    FUN_01996dbc(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}




void FUN_01997bb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_4 != (undefined8 *)0x0) {
    param_1[2] = *param_4;
  }
  return;
}




uint FUN_01997bcc(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (param_1 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (uint)*param_1;
    uVar2 = 0x811c9dc5;
    if (*param_1 != 0) {
      do {
        param_1 = param_1 + 1;
        uVar2 = (uVar2 ^ uVar1) * 0x1000193;
        uVar1 = (uint)*param_1;
      } while (*param_1 != 0);
    }
  }
  if (DAT_03214fdc != 0) {
    lVar3 = 0;
    do {
      if ((&DAT_03214f9c)[lVar3] == uVar2) {
        uVar2 = (uint)lVar3;
        goto LAB_01997c54;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < DAT_03214fdc);
  }
  (&DAT_03214f9c)[DAT_03214fdc] = uVar2;
  uVar2 = DAT_03214fdc;
  DAT_03214fdc = DAT_03214fdc + 1;
LAB_01997c54:
  return uVar2 & 0xff;
}




undefined4 FUN_01997c5c(void)

{
  return DAT_03214fdc;
}




void FUN_01997c68(uint param_1,undefined1 *param_2,undefined4 *param_3)

{
  *param_2 = (char)param_1;
  *param_3 = (&DAT_03214f9c)[param_1];
  return;
}




uint FUN_01997c80(int param_1)

{
  uint uVar1;
  
  if (DAT_03214fdc == 0) {
    return 0xff;
  }
  uVar1 = 0;
  do {
    if ((&DAT_03214f9c)[uVar1] == param_1) {
      return uVar1 & 0xff;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < DAT_03214fdc);
  return 0xff;
}




bool FUN_01997ccc(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((*(short *)((long)param_2 + 10) == *(short *)((long)param_1 + 10)) &&
       (bVar1 = false, *param_2 == *param_1)) &&
      (bVar1 = false, (short)param_2[2] == (short)param_1[2])) &&
     (bVar1 = false, (short)param_2[1] == (short)param_1[1])) {
    bVar1 = *(short *)((long)param_2 + 6) == *(short *)((long)param_1 + 6);
  }
  return bVar1;
}




void FUN_01997d34(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0x200000000;
  param_1[5] = 0;
  FUN_0199fb64(param_1 + 6);
  *(undefined1 *)((long)param_1 + 0x4a) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  return;
}




void FUN_01997d80(undefined8 *param_1)

{
  FUN_0199fc04(param_1 + 6);
  FUN_0199fb94(param_1 + 6);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_01997dd0(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x24) != 1) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x3c);
  bVar2 = *(byte *)(param_3 + 0x10);
  lVar1 = param_1 + 0x30;
  uVar4 = (uint)(uVar5 >> 0x20);
  if ((uVar4 & 3) == (bVar2 & 3)) {
    uVar3 = bVar2 >> 2 & 3;
    if ((uVar4 >> 2 & 3) == uVar3) goto LAB_01997e50;
  }
  else {
    uVar3 = bVar2 >> 2 & 3;
  }
  FUN_019a02cc(lVar1,bVar2 & 3,uVar3,uVar5 >> 0x24 & 3);
  uVar5 = *(ulong *)(param_1 + 0x3c);
  bVar2 = *(byte *)(param_3 + 0x10);
LAB_01997e50:
  uVar3 = (uint)(uVar5 >> 0x20);
  uVar6 = uVar3 >> 6 & 1;
  uVar4 = bVar2 >> 4 & 1;
  if ((uVar6 != uVar4) || ((uVar3 >> 7 & 1) != uVar6)) {
    FUN_019a02fc(lVar1,uVar4,uVar4,uVar5 >> 0x28 & 1);
  }
  FUN_00f01264(param_2,lVar1);
  return;
}




void FUN_01997e94(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  FUN_01997ee0(param_1,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_01997ee0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar5 = (ulong)uVar1 * (ulong)uVar2 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar2 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar2) break;
        iVar4 = (int)uVar5;
        uVar3 = iVar4 - 1;
        uVar5 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar4);
    }
    if ((int)uVar1 <= (int)uVar5) {
      return 0;
    }
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 2) + uVar5 * 4);
      if (uVar2 <= uVar3) {
        if (uVar3 != uVar2) {
          return 0;
        }
        return *(long *)(param_1 + 6) + uVar5 * 0xc;
      }
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar3;
    } while ((int)uVar3 < (int)uVar1);
  }
  return 0;
}




undefined4 FUN_01997f5c(char *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar3 = 0;
  }
  else {
    FUN_008fa54c(local_40);
    FUN_00e6ff54(local_40);
    pvVar1 = (void *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      pvVar1 = local_30;
    }
    uVar3 = FUN_00e6a474(pvVar1);
    uVar3 = FUN_0091ed5c(pvVar1,uVar3,0x12345678);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

