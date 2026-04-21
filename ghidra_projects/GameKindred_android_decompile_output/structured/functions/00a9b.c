// functions/00a9b — 42 functions
#include "libGameKindred.h"




void FUN_00a9b054(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    do {
      if (*(long *)(param_1 + 0x20) == lVar1) {
        *(long *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      else {
        lVar1 = *(long *)(lVar1 + 0x50);
        *(long *)(param_1 + 0x28) = lVar1;
        *(undefined8 *)(lVar1 + 0x58) = 0;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      FUN_00a9aefc(param_1);
      lVar1 = *(long *)(param_1 + 0x28);
    } while (lVar1 != 0);
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    do {
      if (*(long *)(param_1 + 0x38) == lVar1) {
        *(long *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      else {
        lVar2 = *(long *)(lVar1 + 0x50);
        *(long *)(param_1 + 0x40) = lVar2;
        *(undefined8 *)(lVar2 + 0x58) = 0;
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      FUN_019be4c8(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar1 + 0x28));
      FUN_019bc688(*(undefined8 *)(lVar1 + 0x28));
      FUN_00a9aefc(param_1,lVar1);
      lVar1 = *(long *)(param_1 + 0x40);
    } while (lVar1 != 0);
  }
  for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x58)) {
    *(uint *)(lVar1 + 0x48) = *(uint *)(lVar1 + 0x48) | 0x80000000;
  }
  return;
}




void FUN_00a9b13c(void)

{
  return;
}




void FUN_00a9b140(void)

{
  return;
}




void FUN_00a9b144(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  FUN_008fce60(param_1 + 4,&DAT_0320ffa8);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  if (*(long *)(param_1 + 0x1a) != 0) {
    param_1[0x18] = 0;
  }
  return;
}




void FUN_00a9b19c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  FUN_008fce60(param_1 + 4,&DAT_0320ffa8);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  if (*(long *)(param_1 + 0x1a) != 0) {
    param_1[0x18] = 0;
  }
  return;
}




undefined4 * FUN_00a9b1ec(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = operator_new(0x70);
    FUN_00a9b144();
    puVar3 = (undefined8 *)(puVar2 + 0x14);
  }
  else {
    if (*(undefined4 **)(param_1 + 8) == puVar2) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      lVar1 = *(long *)(puVar2 + 0x14);
      *(long *)(param_1 + 0x10) = lVar1;
      *(undefined8 *)(lVar1 + 0x58) = 0;
    }
    puVar3 = (undefined8 *)(puVar2 + 0x14);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    FUN_008fce60(puVar2 + 4,&DAT_0320ffa8);
    puVar2[0x12] = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *puVar3 = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    if (*(long *)(puVar2 + 0x1a) != 0) {
      puVar2[0x18] = 0;
    }
  }
  *(undefined8 *)(puVar2 + 0x16) = 0;
  *puVar3 = 0;
  return puVar2;
}




uint FUN_00a9b29c(void *param_1,int param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 * param_2;
  if (uVar2 != 0) {
    uVar1 = *(uint *)(param_4 + 0x60);
    FUN_0091aea8((uint *)(param_4 + 0x60),uVar1 + uVar2,0);
    memmove((void *)(*(long *)(param_4 + 0x68) + (ulong)uVar1),param_1,(ulong)uVar2);
  }
  return uVar2;
}




void FUN_00a9b304(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x48);
  if (-1 < (int)uVar2) {
    local_48 = 0;
    local_40 = 0;
    uVar2 = FUN_00ed9850(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60),&local_40,
                         (long)&local_48 + 4,&local_48);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00cea6b4(param_1 + 0x10,0);
      if ((uVar3 & 1) == 0) {
        FUN_00cea538(param_1 + 0x10,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60))
        ;
      }
    }
    *(undefined8 *)(param_1 + 0x40) = local_40;
    *(uint *)(param_1 + 0x48) =
         *(uint *)(param_1 + 0x48) & 0xc0000000 | (uVar2 & 1) << 0x1d |
         local_48._4_4_ & 0x3fff | ((uint)local_48 & 0x3fff) << 0xe;
    uVar3 = FUN_0092ea78();
    if (((uVar3 & 1) == 0) || (uVar3 = FUN_0092ea58(), (uVar3 & 1) == 0)) {
      FUN_00e6c810(local_40,local_40,local_48._4_4_,local_48 & 0xffffffff);
      uVar2 = *(uint *)(param_1 + 0x48) | 0x10000000;
      *(uint *)(param_1 + 0x48) = uVar2;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x48);
    }
  }
  *(uint *)(param_1 + 0x48) = uVar2 | 0x40000000;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9b404(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_88 = 0;
  local_60 = 0x400;
  local_58 = 0;
  local_50 = 0;
  local_98 = operator_new(0x28);
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[1] = 0x10000;
  local_98[2] = 0;
  *local_98 = 0;
  local_48 = local_48 & 0xffffffffffffff00;
  local_90 = local_98;
  FUN_00a9b508(param_2 + 0x60,&local_48);
  local_48 = *(ulong *)(param_2 + 0x68);
  uStack_40 = local_48;
  FUN_008fd344(&local_b0,&local_48);
  if (local_58 == 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_b0,*(undefined8 *)(param_2 + 0x38));
  }
  puVar2 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_90);
    operator_delete(puVar2);
  }
  free(local_78);
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9b508(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_0091af28(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) + -1) = *param_2;
  return;
}




void FUN_00a9b590(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 0x60) != 0) {
    uVar2 = *(uint *)(param_2 + 0x48);
    if ((uVar2 >> 0x1d & 1) != 0) {
      plVar1 = *(long **)(param_2 + 0x30);
      if (plVar1 == (long *)0x0) {
        (**(code **)(*param_1 + 0x28))
                  (param_1,*(undefined8 *)(param_2 + 0x40),uVar2 & 0x3fff,uVar2 >> 0xe & 0x3fff,
                   *(undefined8 *)(param_2 + 0x38),uVar2 >> 0x1c & 1);
      }
      else {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    if (*(void **)(param_2 + 0x40) != (void *)0x0) {
      operator_delete__(*(void **)(param_2 + 0x40));
    }
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return;
}




void FUN_00a9b618(long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
                 )

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
    *(undefined8 *)(puVar3 + 0xc) = param_4;
    *(undefined8 *)(puVar3 + 0xe) = param_5;
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




void FUN_00a9b70c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00e6b5e4();
  if (*(long *)(param_1 + 0x90) + 0xe10 < lVar1) {
    FUN_00a9a950(param_1);
    return;
  }
  return;
}




void FUN_00a9b74c(undefined8 *param_1)

{
  FUN_00f048e0(param_1,DAT_03133750,0);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c2790;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}




void FUN_00a9b794(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f048e0(param_1,DAT_03133750,0);
  *param_1 = &PTR_FUN_027c2790;
  FUN_008fcdb8(param_1 + 4,param_2);
  FUN_008fcdb8(param_1 + 7,param_3);
  return;
}




void FUN_00a9b7f4(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x50d0);
  FUN_00ac62e0();
  DAT_03133790 = pvVar1;
                    /* WARNING: Could not recover jumptable at 0x00a9b838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,(long)pvVar1 + 0x30,1);
  return;
}




void FUN_00a9b83c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00f02540(DAT_03133790 + 6);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(DAT_03133790 + 6,1);
  }
  if (DAT_03133790 != (long *)0x0) {
    (**(code **)(*DAT_03133790 + 0x60))();
  }
  DAT_03133790 = (long *)0x0;
  return;
}




bool FUN_00a9b890(void)

{
  return DAT_03133790 != 0;
}




void FUN_00a9b8a4(void)

{
  if (DAT_03133790 != 0) {
    FUN_00ecfbc4();
    return;
  }
  return;
}




void FUN_00a9b8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  
  uVar1 = FUN_00ecfbc4(DAT_03133790);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00ac6a04(DAT_03133790,param_1,param_2,param_3);
  FUN_00ecfc98(DAT_03133790,param_4,param_5,0,0);
  FUN_00ecfb3c(DAT_03133790);
  return;
}




void FUN_00a9b94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  
  uVar1 = FUN_00ecfbc4(DAT_03133790);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00ac6a6c(DAT_03133790,param_1,param_2,param_3,param_4);
  FUN_00ecfc98(DAT_03133790,param_5,param_6,param_7,0);
  FUN_00ecfb3c(DAT_03133790);
  return;
}




void FUN_00a9b9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  ulong uVar1;
  
  uVar1 = FUN_00ecfbc4(DAT_03133790);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00ac6ad8(DAT_03133790,param_1,param_2,param_3,param_4,param_5);
  FUN_00ecfc98(DAT_03133790,param_6,param_7,param_8,param_9);
  FUN_00ecfb3c(DAT_03133790);
  return;
}




void FUN_00a9babc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  uVar1 = FUN_00ecfbc4(DAT_03133790);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00ac6a04(DAT_03133790,param_1,param_2,param_3);
  FUN_00ecfc98(DAT_03133790,param_5,param_6,0,0);
  (**(code **)(*DAT_03133790 + 0x18))((float)param_4);
  FUN_00ecfb3c(DAT_03133790);
  return;
}




void FUN_00a9bb74(void)

{
  ulong uVar1;
  
  if ((DAT_03133790 != 0) && (uVar1 = FUN_00ecfbc4(), (uVar1 & 1) != 0)) {
    FUN_00ecfb78(DAT_03133790,1);
    return;
  }
  return;
}




long FUN_00a9bbb4(void)

{
  return DAT_03133790 + 0xb8;
}




void FUN_00a9bbc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f0a784(auStack_48);
  FUN_00f0a814(auStack_48,PTR_s_build___MenuCharPortraitsHD_png_02be35b0);
  lVar2 = FUN_00f0a7e0(auStack_48,param_2);
  puVar3 = PTR_s_build___MenuCharPortraitsHD2_atl_02be35b8;
  if (lVar2 != 0) {
    puVar3 = PTR_s_build___MenuCharPortraitsHD_png_02be35b0;
  }
  FUN_00f0e5bc(param_1,puVar3,param_2);
  FUN_00f0a79c(auStack_48);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a9bc60(undefined8 param_1,char *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_008fa54c(local_50,"build://Splash_");
  sVar3 = strlen(param_2);
  FUN_0090de84(local_50,param_2,sVar3);
  FUN_0090de84(local_50,".png",4);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00f0e548(param_1,pvVar1,"full_splash_1k");
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9bd24(undefined1 param_1 [16],undefined4 param_2,long *param_3,ulong param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  
  *param_7 = 0;
  if ((param_4 & 1) == 0) {
    FUN_00f00298(param_5,param_6);
    *param_7 = DAT_031339d4;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
    *param_5 = uVar1;
    (**(code **)(*param_3 + 0x48))(param_3);
    *param_6 = param_2;
  }
  return;
}




void FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void FUN_00a9bdb0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  long lVar12;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d0f28;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x28;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x46;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 100;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x82;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0xa8;
  FUN_00abaee8(plVar6,0);
  FUN_00f13ca4();
  plVar7 = param_1 + 0x17e;
  FUN_00abaee8(plVar7,0);
  plVar8 = param_1 + 0x23d;
  FUN_00abaee8(plVar8,0);
  plVar9 = param_1 + 0x2fc;
  FUN_00f0e4a8(plVar9);
  FUN_00f13ca4();
  *(undefined4 *)(param_1 + 0x331) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x198c) = 0;
  *(undefined4 *)(param_1 + 0x332) = 0xbf800000;
  *(undefined1 *)((long)param_1 + 0x1994) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar1,plVar7,1);
  FUN_00f023ec(plVar1,plVar8,1);
  FUN_00f023ec(plVar1,plVar9,1);
  FUN_00f023ec(plVar1,param_1 + 0x167,1);
  FUN_00f023ec(plVar1,param_1 + 0x31a,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"alert_top");
  if ((*(float *)(param_1 + 0x31) != 2.0) || (*(float *)((long)param_1 + 0x18c) != 2.0)) {
    param_1[0x31] = 0x4000000040000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar10 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar10 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x1c4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x7900;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"alert_mid");
  if ((*(float *)(param_1 + 0x4f) != 2.0) || (*(float *)((long)param_1 + 0x27c) != 2.0)) {
    param_1[0x4f] = 0x4000000040000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar10 = *(uint *)((long)param_1 + 0x2b4);
  if ((uVar10 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x2b4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x7900;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"alert_bot");
  if ((*(float *)(param_1 + 0x6d) != 2.0) || (*(float *)((long)param_1 + 0x36c) != 2.0)) {
    param_1[0x6d] = 0x4000000040000000;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar10 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar10 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x3a4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x7900;
    FUN_0091ada4(plVar4);
  }
  fVar11 = (float)FUN_00f0e700(plVar2);
  DAT_03133aa0 = fVar11 * *(float *)(param_1 + 0x31);
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0x8a) != 42.0) || (*(float *)((long)param_1 + 0x454) != 30.0)) {
    param_1[0x8a] = 0x41f0000042280000;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0dad0(0x43f28000,plVar5,1);
  FUN_00f0e578(param_1 + 0x143,"generic_x");
  *(uint *)((long)param_1 + 0x8bc) = *(uint *)((long)param_1 + 0x8bc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x9ac) = *(uint *)((long)param_1 + 0x9ac) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar6);
  lVar12 = NEON_fmov(0xc1200000,4);
  param_1[0xb3] = lVar12;
  FUN_00f0e578(param_1 + 0x219,"generic_check");
  *(uint *)((long)param_1 + 0xf6c) = *(uint *)((long)param_1 + 0xf6c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x105c) = *(uint *)((long)param_1 + 0x105c) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar7);
  param_1[0x189] = lVar12;
  FUN_00f0e578(param_1 + 0x2d8,"generic_x");
  *(uint *)((long)param_1 + 0x1564) = *(uint *)((long)param_1 + 0x1564) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1654) = *(uint *)((long)param_1 + 0x1654) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar8);
  param_1[0x248] = lVar12;
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar10 = *(uint *)((long)param_1 + 0x1864);
  if ((uVar10 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1864) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x2600;
    FUN_0091ada4(plVar9);
  }
  FUN_00f13f08(0x40000000,0x429a0000,plVar9);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00a9bda0(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}

