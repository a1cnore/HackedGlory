// functions/00ac2 — 22 functions
#include "libGameKindred.h"




void thunk_FUN_00ac2c50(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *__s2;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  void *pvVar13;
  long *plVar14;
  undefined8 uStack_180;
  void *pvStack_178;
  undefined8 uStack_170;
  void *pvStack_168;
  ulong auStack_160 [2];
  void *pvStack_150;
  ulong uStack_148;
  void *pvStack_140;
  long lStack_48;
  
  lVar4 = tpidr_el0;
  lStack_48 = *(long *)(lVar4 + 0x28);
  if ((*(long **)(param_1 + 0x4070) == (long *)0x0) ||
     (uVar8 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x38))(), (uVar8 & 1) == 0))
  goto LAB_00ac2fa4;
  pbVar1 = (byte *)(param_1 + 0x4088);
  bVar3 = *pbVar1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x4090);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar13 = *(void **)(param_1 + 0x4098);
    if ((bVar3 & 1) == 0) {
      pvVar13 = (void *)(param_1 + 0x4089);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar11 = (char *)(param_1 + 0x4089);
        lVar12 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar11 != *__s2) goto LAB_00ac2d28;
          pcVar11 = pcVar11 + 1;
          lVar12 = lVar12 + 1;
          __s2 = __s2 + 1;
        } while (lVar12 != 0);
      }
      goto LAB_00ac2fa4;
    }
    if ((__n == 0) || (iVar6 = memcmp(pvVar13,__s2,__n), iVar6 == 0)) goto LAB_00ac2fa4;
  }
LAB_00ac2d28:
  auStack_160[0] = 0;
  auStack_160[1] = 0;
  pvStack_150 = (void *)0x0;
  uVar9 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xb78) & 1) * 0x130 + 0x9e8);
  thunk_FUN_00e7051c(&uStack_170,uVar9);
  iVar6 = FUN_00e70b14(&uStack_170);
  if (iVar6 != 0) {
    sVar5 = FUN_00e70b28(&uStack_170,0);
    if (sVar5 == 0x2f) {
      FUN_00e705c8(&uStack_148,"/");
      FUN_00e705c8(&uStack_180,&DAT_01e45acc);
      FUN_00e71248(&uStack_170,0,&uStack_148,&uStack_180);
      if (pvStack_178 != (void *)0x0) {
        operator_delete__(pvStack_178);
        uStack_180 = 0;
        pvStack_178 = (void *)0x0;
      }
      if (pvStack_140 != (void *)0x0) {
        operator_delete__(pvStack_140);
        uStack_148 = 0;
        pvStack_140 = (void *)0x0;
      }
    }
    uVar7 = FUN_00e70b14(&uStack_170);
    if (*(uint *)(param_1 + 0x40e0) < uVar7) {
      FUN_00e71810(&uStack_148,&uStack_170,0);
      FUN_00910394(&uStack_170,&uStack_148);
      if (pvStack_140 != (void *)0x0) {
        operator_delete__(pvStack_140);
        uStack_148 = 0;
        pvStack_140 = (void *)0x0;
      }
    }
    uVar8 = FUN_00ac04b0(&uStack_170);
    if ((uVar8 & 1) == 0) {
      FUN_00e70a24(&uStack_170,auStack_160);
      if ((*pbVar1 & 1) == 0) {
        lVar12 = param_1 + 0x4089;
      }
      else {
        lVar12 = *(long *)(param_1 + 0x4098);
      }
      pvVar13 = (void *)((ulong)auStack_160 | 1);
      if ((auStack_160[0] & 1) != 0) {
        pvVar13 = pvStack_150;
      }
      (**(code **)(**(long **)(param_1 + 0x4070) + 0x70))
                (*(long **)(param_1 + 0x4070),lVar12,pvVar13);
      plVar14 = *(long **)(param_1 + 0x40c0);
      if (plVar14 != (long *)0x0) {
        uVar9 = FUN_00e6ce7c("MENU_CHAT_PLAYER_LABEL_YOU",0);
        if ((*pbVar1 & 1) == 0) {
          lVar12 = param_1 + 0x4089;
        }
        else {
          lVar12 = *(long *)(param_1 + 0x4098);
        }
        pvVar13 = (void *)((ulong)auStack_160 | 1);
        if ((auStack_160[0] & 1) != 0) {
          pvVar13 = pvStack_150;
        }
        uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,uVar9,lVar12,pvVar13);
        if ((uVar8 & 1) != 0) goto LAB_00ac2f84;
      }
      uStack_148 = uStack_148 & 0xffffffffffffff00;
      if ((*(long **)(param_1 + 0x4070) != (long *)0x0) &&
         (iVar6 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x40))(), iVar6 == 2)) {
        lVar12 = FUN_00e85318(0);
        FUN_00e6c2cc((double)lVar12,&uStack_148,0x100);
      }
      uVar9 = FUN_00e6ce7c("MENU_CHAT_PLAYER_LABEL_YOU",0);
      puVar10 = &uStack_170;
    }
    else {
      if (((DAT_031341b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_031341b0), iVar6 != 0)) {
        FUN_00e70770(&DAT_031341a0,&DAT_01b934d4);
        __cxa_atexit(FUN_0090e338,&DAT_031341a0,&PTR_LOOP_02be3000);
        __cxa_guard_release(&DAT_031341b0);
      }
      uStack_148 = uStack_148 & 0xffffffffffffff00;
      if ((*(long **)(param_1 + 0x4070) != (long *)0x0) &&
         (iVar6 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x40))(), iVar6 == 2)) {
        lVar12 = FUN_00e85318(0);
        FUN_00e6c2cc((double)lVar12,&uStack_148,0x100);
      }
      uVar9 = FUN_00e6ce7c("MENU_CHAT_PLAYER_LABEL_YOU",0);
      puVar10 = (undefined8 *)&DAT_031341a0;
    }
    FUN_00ac1474(param_1,uVar9,puVar10,&uStack_148,1,0);
  }
LAB_00ac2f84:
  if (pvStack_168 != (void *)0x0) {
    operator_delete__(pvStack_168);
    uStack_170 = 0;
    pvStack_168 = (void *)0x0;
  }
  if ((auStack_160[0] & 1) != 0) {
    operator_delete(pvStack_150);
  }
LAB_00ac2fa4:
  uVar9 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_00b02c3c(param_1 + 0x808,uVar9,0);
  *(undefined1 *)(param_1 + 0x40ea) = 0;
  FUN_00ed04ac(0,0,param_1 + 0x2d0);
  FUN_00ac19ec(param_1);
  if (*(long *)(lVar4 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ac20ac(long param_1)

{
  FUN_00ac1e70(param_1 + -0x88);
  return;
}




void FUN_00ac20b4(long param_1)

{
  *(uint *)(param_1 + 0x224c) = *(uint *)(param_1 + 0x224c) | 4;
  *(uint *)(param_1 + 0x297c) = *(uint *)(param_1 + 0x297c) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0x40eb) = 1;
  if (*(long **)(param_1 + 0x40c0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ac20e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x40c0) + 0x38))();
    return;
  }
  return;
}




void FUN_00ac20f0(long param_1)

{
  *(uint *)(param_1 + 0x21c4) = *(uint *)(param_1 + 0x21c4) | 4;
  *(uint *)(param_1 + 0x28f4) = *(uint *)(param_1 + 0x28f4) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0x4063) = 1;
  if (*(long **)(param_1 + 0x4038) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ac2124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x4038) + 0x38))();
    return;
  }
  return;
}




void FUN_00ac212c(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined4 local_6c;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) & 0xfffffffb;
  *(uint *)(param_1 + 0x224c) = *(uint *)(param_1 + 0x224c) & 0xfffffffb;
  FUN_00b16600(param_1 + 0x2380);
  *(uint *)(param_1 + 0x297c) = *(uint *)(param_1 + 0x297c) | 4;
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  FUN_00948284(local_50,local_68,&local_6c);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_0090cc90(pvVar1,pvVar2,local_6c);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac2220(long param_1)

{
  FUN_00ac212c(param_1 + -0x88);
  return;
}




void FUN_00ac2228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  byte local_70 [8];
  uint local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x40c0) != 0) {
    FUN_008fa54c(local_70,param_5);
    uVar3 = *(uint *)(param_1 + 0x40e0);
    uVar1 = (uint)(local_70[0] >> 1);
    if ((local_70[0] & 1) != 0) {
      uVar1 = local_68;
    }
    if (uVar3 < uVar1) {
      FUN_00924fa8(local_70,uVar3,uVar1 - uVar3);
    }
    pvVar2 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar2 = local_60;
    }
    (**(code **)(**(long **)(param_1 + 0x40c0) + 0x28))
              (*(long **)(param_1 + 0x40c0),param_3,param_4,pvVar2,param_6,param_7 & 1);
    *(uint *)(param_1 + 0x224c) = *(uint *)(param_1 + 0x224c) & 0xfffffffb;
    *(uint *)(param_1 + 0x297c) = *(uint *)(param_1 + 0x297c) & 0xfffffffb;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac233c(long param_1)

{
  FUN_00ac2228(param_1 + -0x88);
  return;
}




void FUN_00ac2348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40c0);
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_3,param_4), (uVar3 & 1) == 0)) {
    uVar4 = FUN_00e6ce7c("MENU_CHAT_PLAYER_HAS_JOINED_MESSAGE",0);
    thunk_FUN_00e7051c(&local_48,uVar4);
    FUN_00e70510(&local_58);
    FUN_00ac24bc(param_1,param_3,&local_58);
    uVar3 = FUN_00e70b34(&local_58,&DAT_03210450);
    if ((uVar3 & 1) != 0) {
      FUN_00e705c8(&local_68,&DAT_01baf162);
      FUN_00910394(&local_58,&local_68);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
    }
    FUN_00e705c8(&local_68,"[PLAYER_HANDLE]");
    FUN_00e71248(&local_48,0,&local_68,&local_58);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00ac1474(param_1,&local_48,&DAT_03210450,&DAT_01e277f2,0,1);
    *(uint *)(param_1 + 0x224c) = *(uint *)(param_1 + 0x224c) & 0xfffffffb;
    *(uint *)(param_1 + 0x297c) = *(uint *)(param_1 + 0x297c) & 0xfffffffb;
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac24bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40c0);
  if (plVar2 != (long *)0x0) {
    FUN_008fa54c(local_50);
    (**(code **)(*plVar2 + 0x10))(plVar2,local_50,param_3);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac2540(long param_1)

{
  FUN_00ac2348(param_1 + -0x88);
  return;
}




void FUN_00ac2548(void)

{
  return;
}




void FUN_00ac254c(void)

{
  return;
}




void FUN_00ac2550(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ac2558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))();
  return;
}




void FUN_00ac255c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ac2564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x88) + 0x148))();
  return;
}




void FUN_00ac2568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  byte local_70 [8];
  uint local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x40c0) != 0) {
    FUN_008fa54c(local_70,param_5);
    uVar3 = *(uint *)(param_1 + 0x40e0);
    uVar1 = (uint)(local_70[0] >> 1);
    if ((local_70[0] & 1) != 0) {
      uVar1 = local_68;
    }
    if (uVar3 < uVar1) {
      FUN_00924fa8(local_70,uVar3,uVar1 - uVar3);
    }
    pvVar2 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar2 = local_60;
    }
    (**(code **)(**(long **)(param_1 + 0x40c0) + 0x18))
              (*(long **)(param_1 + 0x40c0),param_3,param_4,pvVar2,param_6,param_7 & 1);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac2664(long param_1)

{
  FUN_00ac2568(param_1 + -0x88);
  return;
}




void FUN_00ac2670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40c0);
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,param_3,param_4), (uVar3 & 1) == 0)) {
    uVar4 = FUN_00e6ce7c("MENU_CHAT_PLAYER_HAS_LEFT_MESSAGE",0);
    thunk_FUN_00e7051c(&local_48,uVar4);
    FUN_00e70510(&local_58);
    FUN_00ac24bc(param_1,param_3,&local_58);
    FUN_00e705c8(&local_68,"[PLAYER_HANDLE]");
    FUN_00e71248(&local_48,0,&local_68,&local_58);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00ac1474(param_1,&local_48,&DAT_03210450,&DAT_01e277f2,0,1);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac278c(long param_1)

{
  FUN_00ac2670(param_1 + -0x88);
  return;
}




void FUN_00ac2794(long param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_84;
  undefined8 local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  uVar7 = FUN_0092ea9c();
  lVar1 = param_1 + 0x808;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar7 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  }
  FUN_00b0360c(lVar1,*ppuVar5,&DAT_01bee7fa);
  pfVar3 = (float *)(param_1 + 0x40b8);
  lVar2 = param_1 + 0xc08;
  FUN_00ab75d0(0x41400000,*pfVar3,*pfVar3,lVar2);
  fVar8 = *(float *)(param_1 + 0xc48);
  if ((fVar8 != *pfVar3 * 0.5) || (fVar8 = *(float *)(param_1 + 0xc4c), fVar8 != 0.0)) {
    *(float *)(param_1 + 0xc48) = *pfVar3 * 0.5;
    *(undefined4 *)(param_1 + 0xc4c) = 0;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xc08) + 0x28))(lVar2,&local_80);
  local_84 = 0;
  FUN_00967388(0,0,0,&local_84);
  fVar10 = *(float *)(param_1 + 0x40bc);
  FUN_00b02bd4(lVar1);
  fVar9 = (float)local_84;
  fVar8 = ((fVar10 - fVar8) + -20.0) - fVar9;
  if ((*(float *)(param_1 + 0x848) != 0.0) || (fVar9 = *(float *)(param_1 + 0x84c), fVar9 != fVar8))
  {
    *(undefined4 *)(param_1 + 0x848) = 0;
    *(float *)(param_1 + 0x84c) = fVar8;
    FUN_0091ada4(lVar1);
  }
  local_80 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x808) + 0x28))(lVar1,&local_80);
  fVar8 = *pfVar3;
  fVar10 = *(float *)(param_1 + 0x84c);
  FUN_00b02bd4(lVar1);
  FUN_00f13f08(fVar8,fVar10 + fVar9 * -0.5 + -30.0,param_1 + 0x130);
  if ((*(float *)(param_1 + 0xe8) != 0.0) || (fVar8 = *(float *)(param_1 + 0xec), fVar8 != 0.0)) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_0091ada4(param_1 + 0xa8);
    fVar8 = *(float *)(param_1 + 0xec);
  }
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x10;
  if ((*(float *)(param_1 + 0x2208) != 0.0) || (*(float *)(param_1 + 0x220c) != fVar8 + 60.0)) {
    *(undefined4 *)(param_1 + 0x2208) = 0;
    *(float *)(param_1 + 0x220c) = fVar8 + 60.0;
    FUN_0091ada4(param_1 + 0x21c8);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar7 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  lVar1 = param_1 + 0x2250;
  fVar8 = *pfVar3 * 0.9;
  if (*pfVar3 * 0.9 <= 50.0) {
    fVar8 = 50.0;
  }
  FUN_00f0d92c(lVar1,*ppuVar5,&DAT_01bee7fa);
  fVar9 = (float)FUN_00f13e54(param_1 + 0x130);
  fVar10 = *(float *)(param_1 + 0x2290);
  if ((fVar10 != fVar9 * 0.5) || (fVar10 = *(float *)(param_1 + 0x2294), fVar10 != 0.0)) {
    *(float *)(param_1 + 0x2290) = fVar9 * 0.5;
    *(undefined4 *)(param_1 + 0x2294) = 0;
    FUN_0091ada4(lVar1);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2250) + 0x28))(lVar1,&local_80);
  FUN_00f0dad0(fVar8,lVar1,1);
  FUN_00f0dac8(lVar1,3);
  fVar11 = *(float *)(param_1 + 0x2290);
  lVar2 = param_1 + 0x2380;
  fVar9 = (float)FUN_00f01c54(lVar2,0,0,1,1);
  fVar12 = *(float *)(param_1 + 0x2294);
  fVar11 = fVar11 - fVar9 * 0.5;
  FUN_00f0d4e0(lVar1);
  fVar9 = fVar12 + fVar10 * 0.5 + 30.0;
  if ((*(float *)(param_1 + 0x23c0) != fVar11) || (*(float *)(param_1 + 0x23c4) != fVar9)) {
    *(float *)(param_1 + 0x23c0) = fVar11;
    *(float *)(param_1 + 0x23c4) = fVar9;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0;
  (**(code **)(*(long *)(param_1 + 0x2380) + 0x28))(lVar2,&local_80);
  if ((*(float *)(param_1 + 0x2938) != *(float *)(param_1 + 0x2208)) ||
     (*(float *)(param_1 + 0x293c) != *(float *)(param_1 + 0x220c))) {
    *(float *)(param_1 + 0x2938) = *(float *)(param_1 + 0x2208);
    *(float *)(param_1 + 0x293c) = *(float *)(param_1 + 0x220c);
    FUN_0091ada4(param_1 + 0x28f8);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar7 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  lVar1 = param_1 + 0x2980;
  FUN_00f0d92c(lVar1,*ppuVar5,&DAT_01bee7fa);
  fVar9 = *(float *)(param_1 + 0x2294);
  if ((*(float *)(param_1 + 0x29c0) != *(float *)(param_1 + 0x2290)) ||
     (*(float *)(param_1 + 0x29c4) != fVar9)) {
    *(float *)(param_1 + 0x29c0) = *(float *)(param_1 + 0x2290);
    *(float *)(param_1 + 0x29c4) = fVar9;
    FUN_0091ada4(lVar1);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2980) + 0x28))(lVar1,&local_80);
  FUN_00f0dad0(fVar8,lVar1,1);
  FUN_00f0dac8(lVar1,3);
  fVar10 = *(float *)(param_1 + 0x29c0);
  fVar11 = *(float *)(param_1 + 0x29c4);
  plVar4 = (long *)(param_1 + 0x2ab0);
  FUN_00f0d4e0(lVar1);
  fVar8 = fVar9 * 0.5;
  FUN_00f13e54(plVar4);
  fVar8 = fVar11 + fVar8 + fVar9 * 0.5 + 30.0;
  if ((*(float *)(param_1 + 0x2af0) != fVar10) || (*(float *)(param_1 + 0x2af4) != fVar8)) {
    *(float *)(param_1 + 0x2af0) = fVar10;
    *(float *)(param_1 + 0x2af4) = fVar8;
    FUN_0091ada4(plVar4);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_80);
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac2c4c(void)

{
  return;
}




void FUN_00ac2c50(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *__s2;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  void *pvVar13;
  long *plVar14;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  ulong local_160 [2];
  void *local_150;
  ulong local_148;
  void *local_140;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((*(long **)(param_1 + 0x4070) == (long *)0x0) ||
     (uVar8 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x38))(), (uVar8 & 1) == 0))
  goto LAB_00ac2fa4;
  pbVar1 = (byte *)(param_1 + 0x4088);
  bVar3 = *pbVar1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x4090);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar13 = *(void **)(param_1 + 0x4098);
    if ((bVar3 & 1) == 0) {
      pvVar13 = (void *)(param_1 + 0x4089);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar11 = (char *)(param_1 + 0x4089);
        lVar12 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar11 != *__s2) goto LAB_00ac2d28;
          pcVar11 = pcVar11 + 1;
          lVar12 = lVar12 + 1;
          __s2 = __s2 + 1;
        } while (lVar12 != 0);
      }
      goto LAB_00ac2fa4;
    }
    if ((__n == 0) || (iVar6 = memcmp(pvVar13,__s2,__n), iVar6 == 0)) goto LAB_00ac2fa4;
  }
LAB_00ac2d28:
  local_160[0] = 0;
  local_160[1] = 0;
  local_150 = (void *)0x0;
  uVar9 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xb78) & 1) * 0x130 + 0x9e8);
  thunk_FUN_00e7051c(&local_170,uVar9);
  iVar6 = FUN_00e70b14(&local_170);
  if (iVar6 != 0) {
    sVar5 = FUN_00e70b28(&local_170,0);
    if (sVar5 == 0x2f) {
      FUN_00e705c8(&local_148,"/");
      FUN_00e705c8(&local_180,&DAT_01e45acc);
      FUN_00e71248(&local_170,0,&local_148,&local_180);
      if (local_178 != (void *)0x0) {
        operator_delete__(local_178);
        local_180 = 0;
        local_178 = (void *)0x0;
      }
      if (local_140 != (void *)0x0) {
        operator_delete__(local_140);
        local_148 = 0;
        local_140 = (void *)0x0;
      }
    }
    uVar7 = FUN_00e70b14(&local_170);
    if (*(uint *)(param_1 + 0x40e0) < uVar7) {
      FUN_00e71810(&local_148,&local_170,0);
      FUN_00910394(&local_170,&local_148);
      if (local_140 != (void *)0x0) {
        operator_delete__(local_140);
        local_148 = 0;
        local_140 = (void *)0x0;
      }
    }
    uVar8 = FUN_00ac04b0(&local_170);
    if ((uVar8 & 1) == 0) {
      FUN_00e70a24(&local_170,local_160);
      if ((*pbVar1 & 1) == 0) {
        lVar12 = param_1 + 0x4089;
      }
      else {
        lVar12 = *(long *)(param_1 + 0x4098);
      }
      pvVar13 = (void *)((ulong)local_160 | 1);
      if ((local_160[0] & 1) != 0) {
        pvVar13 = local_150;
      }
      (**(code **)(**(long **)(param_1 + 0x4070) + 0x70))
                (*(long **)(param_1 + 0x4070),lVar12,pvVar13);
      plVar14 = *(long **)(param_1 + 0x40c0);
      if (plVar14 != (long *)0x0) {
        uVar9 = FUN_00e6ce7c("MENU_CHAT_PLAYER_LABEL_YOU",0);
        if ((*pbVar1 & 1) == 0) {
          lVar12 = param_1 + 0x4089;
        }
        else {
          lVar12 = *(long *)(param_1 + 0x4098);
        }
        pvVar13 = (void *)((ulong)local_160 | 1);
        if ((local_160[0] & 1) != 0) {
          pvVar13 = local_150;
        }
        uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,uVar9,lVar12,pvVar13);
        if ((uVar8 & 1) != 0) goto LAB_00ac2f84;
      }
      local_148 = local_148 & 0xffffffffffffff00;
      if ((*(long **)(param_1 + 0x4070) != (long *)0x0) &&
         (iVar6 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x40))(), iVar6 == 2)) {
        lVar12 = FUN_00e85318(0);
        FUN_00e6c2cc((double)lVar12,&local_148,0x100);
      }
      uVar9 = FUN_00e6ce7c("MENU_CHAT_PLAYER_LABEL_YOU",0);
      puVar10 = &local_170;
    }
    else {
      if (((DAT_031341b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_031341b0), iVar6 != 0)) {
        FUN_00e70770(&DAT_031341a0,&DAT_01b934d4);
        __cxa_atexit(FUN_0090e338,&DAT_031341a0,&PTR_LOOP_02be3000);
        __cxa_guard_release(&DAT_031341b0);
      }
      local_148 = local_148 & 0xffffffffffffff00;
      if ((*(long **)(param_1 + 0x4070) != (long *)0x0) &&
         (iVar6 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x40))(), iVar6 == 2)) {
        lVar12 = FUN_00e85318(0);
        FUN_00e6c2cc((double)lVar12,&local_148,0x100);
      }
      uVar9 = FUN_00e6ce7c("MENU_CHAT_PLAYER_LABEL_YOU",0);
      puVar10 = (undefined8 *)&DAT_031341a0;
    }
    FUN_00ac1474(param_1,uVar9,puVar10,&local_148,1,0);
  }
LAB_00ac2f84:
  if (local_168 != (void *)0x0) {
    operator_delete__(local_168);
    local_170 = 0;
    local_168 = (void *)0x0;
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
LAB_00ac2fa4:
  uVar9 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_00b02c3c(param_1 + 0x808,uVar9,0);
  *(undefined1 *)(param_1 + 0x40ea) = 0;
  FUN_00ed04ac(0,0,param_1 + 0x2d0);
  FUN_00ac19ec(param_1);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

