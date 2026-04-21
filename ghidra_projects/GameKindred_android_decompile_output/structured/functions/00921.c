// functions/00921 — 28 functions
#include "libGameKindred.h"




void FUN_00921018(code *UNRECOVERED_JUMPTABLE,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00e7a0ec();
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x009210a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
    return;
  }
  puVar2 = (undefined8 *)FUN_009210b4(&DAT_02c0a500);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = UNRECOVERED_JUMPTABLE;
    FUN_00920ebc(puVar2,param_2,param_3);
    uVar3 = FUN_00e7a0ec();
    FUN_00e78ecc(uVar3,FUN_00920f1c,puVar2);
    return;
  }
  return;
}




uint * FUN_009210b4(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x31810));
  uVar1 = *(uint *)(param_1 + 0x31800);
  if (uVar1 == 0xffffffff) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)(param_1 + (ulong)uVar1 * 0x318);
    if (uVar1 == *(uint *)(param_1 + 0x31804)) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(uint *)(param_1 + 0x31800) = uVar3;
    lVar2 = param_1 + (ulong)uVar1 * 0x318;
    *(undefined4 *)(lVar2 + 8) = 0;
    memset((void *)(lVar2 + 0x10),0,0x308);
    *(int *)(param_1 + 0x31808) = *(int *)(param_1 + 0x31808) + 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x31810));
  return puVar4;
}




void FUN_00921174(undefined4 param_1,undefined8 param_2)

{
  FUN_00921018(FUN_0092118c,param_1,param_2);
  return;
}




void FUN_0092118c(int param_1,long param_2)

{
  char *__s1;
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  void *local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009188a4();
  uVar3 = FUN_0091aaa8();
  if ((uVar3 & 1) != 0) {
    if (param_1 == 6) {
      FUN_00aa25b0(param_2,0);
    }
    else if (param_1 == 5) {
      __s1 = (char *)(param_2 + 0x100);
      iVar2 = strcmp(__s1,"a");
      if (iVar2 == 0) {
        FUN_00e70510(&local_50);
        FUN_00e705a0(&local_50,param_2);
        FUN_00a9da50(0xbf800000,&local_50,0,1);
      }
      else {
        iVar2 = strcmp(__s1,"f");
        if (iVar2 == 0) {
          FUN_00e70510(&local_50);
          FUN_00e705a0(&local_50,param_2);
          uVar4 = FUN_009b8d90();
          FUN_00a9daac(0xbf800000,&local_50,FUN_00921354,0,uVar4,0,1);
        }
        else {
          iVar2 = strcmp(__s1,"p");
          if (iVar2 != 0) goto LAB_0092132c;
          FUN_00e70510(&local_50);
          FUN_00e70510(&local_60);
          FUN_00e705a0(&local_60,param_2 + 0x200);
          FUN_00e705a0(&local_50,param_2);
          uVar4 = FUN_009b8d90();
          FUN_00a9daac(0xbf800000,&local_50,FUN_00921360,0,uVar4,0,1);
          if (local_58 != (void *)0x0) {
            operator_delete__(local_58);
            local_60 = 0;
            local_58 = (void *)0x0;
          }
        }
      }
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
        local_50 = 0;
        local_48 = (void *)0x0;
      }
    }
    else if (param_1 == 4) {
      FUN_008fa54c(&local_50,param_2);
      FUN_009482f4(&local_50);
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
LAB_0092132c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00921354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_009ba344(param_1,param_4,param_5);
  return;
}




void FUN_00921360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_009ba3d4(param_1,param_4,param_5);
  return;
}




void FUN_0092136c(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00921398(undefined8 param_1)

{
  FUN_00921504(param_1,1);
  return;
}




void FUN_009213a0(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_78;
  void *local_70;
  undefined4 local_68;
  int iStack_64;
  undefined1 local_60;
  long local_58;
  undefined8 *puVar9;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00ec86e4();
  FUN_00ec50e4();
  lVar3 = FUN_00940b8c();
  FUN_00921504(&DAT_02c3bd50,0);
  uVar4 = FUN_00ec53f4();
  if ((uVar4 & 1) != 0) {
    if ((uint)DAT_02c3bd40 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      puVar8 = DAT_02c3bd48;
      do {
        puVar9 = puVar8 + 1;
        plVar6 = (long *)*puVar8;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        iVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
        iVar5 = iVar2 + iVar5;
        puVar8 = puVar9;
      } while (puVar9 != DAT_02c3bd48 + (uint)DAT_02c3bd40);
    }
    if ((uint)DAT_02c3bd50 != 0) {
      lVar7 = DAT_02c3bd58;
      iVar2 = iVar5;
      if (iVar5 == 0) {
        iVar2 = 1;
      }
      do {
        thunk_FUN_00e7051c(&local_78,lVar7);
        local_60 = *(undefined1 *)(lVar3 + 0x3f);
        _local_68 = CONCAT44(iVar2,(int)*(undefined8 *)(lVar7 + 0x10));
        thunk_FUN_00ec8798(&local_78);
        if (local_70 != (void *)0x0) {
          operator_delete__(local_70);
          local_78 = 0;
          local_70 = (void *)0x0;
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != DAT_02c3bd58 + (ulong)(uint)DAT_02c3bd50 * 0x20);
    }
    FUN_00ec50e8(iVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00921504(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_0092157c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027b9e10;
  local_30 = param_1;
  FUN_009215e0(&DAT_02c3bd40,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009215e0(uint *param_1,undefined8 *param_2)

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
    FUN_0092177c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00921668(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027b9e10;
  if ((uint)DAT_02c3bd40 != 0) {
    lVar2 = (ulong)(uint)DAT_02c3bd40 << 3;
    puVar1 = DAT_02c3bd48;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_02c3bd48[(uint)DAT_02c3bd40 - 1];
        DAT_02c3bd40._0_4_ = (uint)DAT_02c3bd40 - 1;
        return;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_009216c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9216cc);
  (*pcVar1)();
}




void FUN_009216cc(void)

{
  FUN_009216d8(&DAT_02c3bd50);
  return;
}




void FUN_009216d8(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
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
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_009217fc(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  thunk_FUN_00e7051c(lVar1 + -0x20,param_2);
  *(undefined1 *)(lVar1 + -8) = *(undefined1 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_2 + 0x10);
  return;
}




undefined8 FUN_00921774(void)

{
  return 0;
}




void FUN_0092177c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_009217fc(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 << 5);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar1 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x20);
      pvVar6 = pvVar2;
      do {
        thunk_FUN_00e7051c(pvVar6,pvVar3);
        *(undefined1 *)((long)pvVar6 + 0x18) = *(undefined1 *)((long)pvVar3 + 0x18);
        puVar4 = (undefined8 *)((long)pvVar3 + 0x10);
        pvVar3 = (void *)((long)pvVar3 + 0x20);
        *(undefined8 *)((long)pvVar6 + 0x10) = *puVar4;
        pvVar6 = (void *)((long)pvVar6 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        puVar4 = (undefined8 *)((long)pvVar3 + 8);
        do {
          if ((void *)*puVar4 != (void *)0x0) {
            operator_delete__((void *)*puVar4);
            puVar4[-1] = 0;
            *puVar4 = 0;
          }
          lVar5 = lVar5 + -0x20;
          puVar4 = puVar4 + 4;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_009218dc(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00921908(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00921934(long param_1)

{
  FUN_00924f5c(param_1,*(undefined8 *)(param_1 + 8));
  return;
}




undefined8
FUN_0092193c(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,uint param_9,uint param_10)

{
  uint uVar1;
  long lVar2;
  undefined2 local_4c;
  uint local_4a;
  uint local_46;
  ushort local_42;
  uint local_40;
  ushort local_3c;
  ushort local_3a;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_42 = (ushort)(param_6 >> 8) & 0xff | (ushort)((param_6 & 0xff00ff) << 8);
  local_3c = (ushort)(param_5 >> 8) & 0xff | (ushort)((param_5 & 0xff00ff) << 8);
  local_3a = (ushort)(param_8 >> 8) & 0xff | (ushort)((param_8 & 0xff00ff) << 8);
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_46 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  local_4a = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_7 & 0xff00ff00) >> 8 | (param_7 & 0xff00ff) << 8;
  local_40 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_9 & 0xff00ff00) >> 8 | (param_9 & 0xff00ff) << 8;
  local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_10 & 0xff00ff00) >> 8 | (param_10 & 0xff00ff) << 8;
  uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
  local_4c = 0x3f04;
  FUN_00923768(&local_4c,0x24);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009219f0(uint param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined2 local_34;
  uint local_32;
  ushort local_2e;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_2e = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_32 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_34 = 0x4004;
  local_2c = 0;
  FUN_00923768(&local_34,0xc);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00921a60(undefined1 param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined2 local_34;
  undefined1 local_32;
  uint local_31;
  uint local_2d;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_34 = 0xf803;
  uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  local_31 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  local_2d = uVar1 >> 0x10 | uVar1 << 0x10;
  local_32 = param_1;
  FUN_00923768(&local_34,0xb);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00921ad4(undefined1 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  undefined2 local_3c;
  undefined1 local_3a;
  uint local_39;
  uint local_35;
  uint local_31;
  uint local_2d;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_3c = 0xfe03;
  uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  local_39 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  local_35 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  local_31 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
  local_2d = uVar1 >> 0x10 | uVar1 << 0x10;
  local_3a = param_1;
  FUN_00923768(&local_3c,0x13);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8
FUN_00921b58(uint param_1,uint param_2,uint param_3,undefined1 param_4,undefined1 param_5,
            uint *param_6,uint *param_7,uint *param_8,byte param_9,undefined1 param_10,
            undefined1 param_11,undefined1 param_12,undefined8 *param_13,undefined8 *param_14,
            undefined8 *param_15,uint param_16)

{
  uint uVar1;
  long lVar2;
  uint local_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  uint local_f8;
  undefined1 local_f4;
  byte local_f3;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined2 local_ec [62];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  memset(&local_144,0,0x56);
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_168 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_164 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_160 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_6 & 0xff00ff00) >> 8 | (*param_6 & 0xff00ff) << 8;
  uStack_15c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_6[1] & 0xff00ff00) >> 8 | (param_6[1] & 0xff00ff) << 8;
  local_158 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_6[2] & 0xff00ff00) >> 8 | (param_6[2] & 0xff00ff) << 8;
  local_154 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_7 & 0xff00ff00) >> 8 | (*param_7 & 0xff00ff) << 8;
  local_150 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_7[1] & 0xff00ff00) >> 8 | (param_7[1] & 0xff00ff) << 8;
  local_14c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_7[2] & 0xff00ff00) >> 8 | (param_7[2] & 0xff00ff) << 8;
  local_148 = uVar1 >> 0x10 | uVar1 << 0x10;
  if ((param_9 & 1) == 0) {
    uVar1 = (*param_8 & 0xff00ff00) >> 8 | (*param_8 & 0xff00ff) << 8;
    local_140 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0x2d] & 0xff00ff00) >> 8 | (param_8[0x2d] & 0xff00ff) << 8;
    local_13c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0x5a] & 0xff00ff00) >> 8 | (param_8[0x5a] & 0xff00ff) << 8;
    local_138 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0x12] & 0xff00ff00) >> 8 | (param_8[0x12] & 0xff00ff) << 8;
    local_134 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0x3f] & 0xff00ff00) >> 8 | (param_8[0x3f] & 0xff00ff) << 8;
    local_130 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0x6c] & 0xff00ff00) >> 8 | (param_8[0x6c] & 0xff00ff) << 8;
    local_12c = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0xf] & 0xff00ff00) >> 8 | (param_8[0xf] & 0xff00ff) << 8;
    local_128 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0x3c] & 0xff00ff00) >> 8 | (param_8[0x3c] & 0xff00ff) << 8;
    local_124 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0x69] & 0xff00ff00) >> 8 | (param_8[0x69] & 0xff00ff) << 8;
    local_120 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0x20] & 0xff00ff00) >> 8 | (param_8[0x20] & 0xff00ff) << 8;
    local_118 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0x28] & 0xff00ff00) >> 8 | (param_8[0x28] & 0xff00ff) << 8;
    local_114 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0xb4] & 0xff00ff00) >> 8 | (param_8[0xb4] & 0xff00ff) << 8;
    local_144 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_8[0xb8] & 0xff00ff00) >> 8 | (param_8[0xb8] & 0xff00ff) << 8;
    local_11c = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  local_110 = *param_13;
  local_108 = *param_14;
  uVar1 = (param_16 & 0xff00ff00) >> 8 | (param_16 & 0xff00ff) << 8;
  local_f8 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_100 = *param_15;
  local_ec[0] = 0xf203;
  local_f2 = param_10;
  local_f1 = param_12;
  local_f0 = param_11;
  local_f4 = param_4;
  local_f3 = param_9 & 1;
  local_ef = param_5;
  memcpy((void *)((ulong)local_ec | 2),&local_168,0x7a);
  FUN_00923768(local_ec,0x7c);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8
FUN_00921d9c(uint param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5,uint param_6,
            undefined1 param_7,undefined1 param_8,uint *param_9,uint *param_10,uint *param_11,
            byte param_12,uint param_13,uint *param_14,uint *param_15,uint *param_16,uint *param_17,
            uint *param_18,uint param_19,uint *param_20,uint *param_21,uint *param_22,
            undefined1 *param_23,uint param_24,uint param_25,uint param_26,uint param_27,
            uint *param_28,uint *param_29,uint *param_30,undefined8 param_31,undefined8 param_32,
            undefined8 *param_33,undefined8 *param_34,undefined8 *param_35,uint param_36,
            uint param_37)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  uint local_658;
  uint uStack_654;
  uint local_650;
  uint uStack_64c;
  undefined1 local_648;
  undefined1 local_647;
  uint local_646;
  uint local_642;
  uint local_63e;
  uint local_63a;
  uint local_636;
  uint local_632;
  uint local_62e;
  uint local_62a;
  uint local_626;
  uint local_622;
  uint local_61e;
  uint local_61a;
  uint local_616;
  uint local_612;
  uint local_60e;
  uint local_60a;
  uint local_606;
  uint local_5f6;
  uint local_5f2;
  uint local_5ee;
  uint local_5ea;
  uint local_5e6;
  uint local_5e2;
  uint local_5de;
  uint local_5da;
  uint local_5d6;
  uint local_5d2;
  uint local_5ce;
  uint local_5ca;
  uint local_5c6;
  uint local_5c2;
  uint local_5be;
  uint local_5ba;
  uint local_5b6;
  uint local_5b2;
  uint local_5ae;
  uint local_5aa;
  uint local_5a6;
  uint local_5a2;
  uint local_59e;
  uint local_59a;
  uint local_596;
  uint local_592;
  uint local_58e;
  uint local_58a;
  uint local_586;
  uint local_582;
  uint local_57e;
  uint local_57a;
  uint local_576;
  uint local_572;
  uint local_56e;
  uint local_56a;
  uint local_566;
  uint local_562;
  uint local_55e;
  uint local_55a;
  uint local_556;
  uint local_552;
  uint local_54e;
  uint local_54a;
  uint local_546;
  uint local_542;
  uint local_53e;
  uint local_53a;
  uint local_536;
  uint local_532;
  uint local_52e;
  uint local_52a;
  uint local_526;
  uint local_522;
  uint local_51e;
  uint local_51a;
  uint local_516;
  int local_512;
  uint local_50e;
  uint local_50a;
  uint local_506;
  uint local_502;
  uint local_4fe;
  uint local_4fa;
  uint local_4f6 [10];
  uint local_4ce [10];
  uint local_4a6 [10];
  uint local_47e [10];
  uint local_456 [10];
  uint local_42e [9];
  undefined1 auStack_40a [3];
  uint local_407;
  uint local_403;
  uint local_3ff [8];
  uint local_3df [8];
  uint auStack_3bf [10];
  uint local_397;
  uint local_393;
  undefined8 local_38f;
  undefined8 local_387;
  undefined8 local_37f;
  uint local_377;
  uint local_373;
  undefined1 local_36f;
  undefined2 local_36c [382];
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  memset(&local_658,0,0x2ea);
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_658 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uStack_654 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  local_650 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
  uStack_64c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_9 & 0xff00ff00) >> 8 | (*param_9 & 0xff00ff) << 8;
  local_646 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_9[1] & 0xff00ff00) >> 8 | (param_9[1] & 0xff00ff) << 8;
  local_642 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_9[2] & 0xff00ff00) >> 8 | (param_9[2] & 0xff00ff) << 8;
  local_63e = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_10 & 0xff00ff00) >> 8 | (*param_10 & 0xff00ff) << 8;
  local_63a = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_10[1] & 0xff00ff00) >> 8 | (param_10[1] & 0xff00ff) << 8;
  local_636 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_10[2] & 0xff00ff00) >> 8 | (param_10[2] & 0xff00ff) << 8;
  local_632 = uVar1 >> 0x10 | uVar1 << 0x10;
  if ((param_12 & 1) == 0) {
    uVar1 = (*param_11 & 0xff00ff00) >> 8 | (*param_11 & 0xff00ff) << 8;
    local_62a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x2d] & 0xff00ff00) >> 8 | (param_11[0x2d] & 0xff00ff) << 8;
    local_626 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x5a] & 0xff00ff00) >> 8 | (param_11[0x5a] & 0xff00ff) << 8;
    local_622 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x2c] & 0xff00ff00) >> 8 | (param_11[0x2c] & 0xff00ff) << 8;
    local_61a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x59] & 0xff00ff00) >> 8 | (param_11[0x59] & 0xff00ff) << 8;
    local_616 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x86] & 0xff00ff00) >> 8 | (param_11[0x86] & 0xff00ff) << 8;
    local_612 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x20] & 0xff00ff00) >> 8 | (param_11[0x20] & 0xff00ff) << 8;
    local_502 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x12] & 0xff00ff00) >> 8 | (param_11[0x12] & 0xff00ff) << 8;
    local_60e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x3f] & 0xff00ff00) >> 8 | (param_11[0x3f] & 0xff00ff) << 8;
    local_60a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x6c] & 0xff00ff00) >> 8 | (param_11[0x6c] & 0xff00ff) << 8;
    local_606 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xf] & 0xff00ff00) >> 8 | (param_11[0xf] & 0xff00ff) << 8;
    local_5f6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x3c] & 0xff00ff00) >> 8 | (param_11[0x3c] & 0xff00ff) << 8;
    local_5f2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x69] & 0xff00ff00) >> 8 | (param_11[0x69] & 0xff00ff) << 8;
    local_5ee = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x1e] & 0xff00ff00) >> 8 | (param_11[0x1e] & 0xff00ff) << 8;
    local_5ea = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x4b] & 0xff00ff00) >> 8 | (param_11[0x4b] & 0xff00ff) << 8;
    local_5e6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x78] & 0xff00ff00) >> 8 | (param_11[0x78] & 0xff00ff) << 8;
    local_5e2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[2] & 0xff00ff00) >> 8 | (param_11[2] & 0xff00ff) << 8;
    local_5da = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x2f] & 0xff00ff00) >> 8 | (param_11[0x2f] & 0xff00ff) << 8;
    local_5d6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x5c] & 0xff00ff00) >> 8 | (param_11[0x5c] & 0xff00ff) << 8;
    local_5d2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x2b] & 0xff00ff00) >> 8 | (param_11[0x2b] & 0xff00ff) << 8;
    local_5ca = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x58] & 0xff00ff00) >> 8 | (param_11[0x58] & 0xff00ff) << 8;
    local_5c6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x85] & 0xff00ff00) >> 8 | (param_11[0x85] & 0xff00ff) << 8;
    local_5c2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[5] & 0xff00ff00) >> 8 | (param_11[5] & 0xff00ff) << 8;
    local_5be = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x32] & 0xff00ff00) >> 8 | (param_11[0x32] & 0xff00ff) << 8;
    local_5ba = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x5f] & 0xff00ff00) >> 8 | (param_11[0x5f] & 0xff00ff) << 8;
    local_5b6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[6] & 0xff00ff00) >> 8 | (param_11[6] & 0xff00ff) << 8;
    local_5b2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x33] & 0xff00ff00) >> 8 | (param_11[0x33] & 0xff00ff) << 8;
    local_5ae = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x60] & 0xff00ff00) >> 8 | (param_11[0x60] & 0xff00ff) << 8;
    local_5aa = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x19] & 0xff00ff00) >> 8 | (param_11[0x19] & 0xff00ff) << 8;
    local_5a6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x46] & 0xff00ff00) >> 8 | (param_11[0x46] & 0xff00ff) << 8;
    local_5a2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x73] & 0xff00ff00) >> 8 | (param_11[0x73] & 0xff00ff) << 8;
    local_59e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[7] & 0xff00ff00) >> 8 | (param_11[7] & 0xff00ff) << 8;
    local_59a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x34] & 0xff00ff00) >> 8 | (param_11[0x34] & 0xff00ff) << 8;
    local_596 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x61] & 0xff00ff00) >> 8 | (param_11[0x61] & 0xff00ff) << 8;
    local_592 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[8] & 0xff00ff00) >> 8 | (param_11[8] & 0xff00ff) << 8;
    local_58e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x35] & 0xff00ff00) >> 8 | (param_11[0x35] & 0xff00ff) << 8;
    local_58a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x62] & 0xff00ff00) >> 8 | (param_11[0x62] & 0xff00ff) << 8;
    local_586 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[4] & 0xff00ff00) >> 8 | (param_11[4] & 0xff00ff) << 8;
    local_582 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x31] & 0xff00ff00) >> 8 | (param_11[0x31] & 0xff00ff) << 8;
    local_57e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x5e] & 0xff00ff00) >> 8 | (param_11[0x5e] & 0xff00ff) << 8;
    local_57a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x1f] & 0xff00ff00) >> 8 | (param_11[0x1f] & 0xff00ff) << 8;
    local_576 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x4c] & 0xff00ff00) >> 8 | (param_11[0x4c] & 0xff00ff) << 8;
    local_572 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x79] & 0xff00ff00) >> 8 | (param_11[0x79] & 0xff00ff) << 8;
    local_56e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[9] & 0xff00ff00) >> 8 | (param_11[9] & 0xff00ff) << 8;
    local_56a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x36] & 0xff00ff00) >> 8 | (param_11[0x36] & 0xff00ff) << 8;
    local_566 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[99] & 0xff00ff00) >> 8 | (param_11[99] & 0xff00ff) << 8;
    local_562 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[10] & 0xff00ff00) >> 8 | (param_11[10] & 0xff00ff) << 8;
    local_55e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x37] & 0xff00ff00) >> 8 | (param_11[0x37] & 0xff00ff) << 8;
    local_55a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[100] & 0xff00ff00) >> 8 | (param_11[100] & 0xff00ff) << 8;
    local_556 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb] & 0xff00ff00) >> 8 | (param_11[0xb] & 0xff00ff) << 8;
    local_552 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x38] & 0xff00ff00) >> 8 | (param_11[0x38] & 0xff00ff) << 8;
    local_54e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x65] & 0xff00ff00) >> 8 | (param_11[0x65] & 0xff00ff) << 8;
    local_54a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xc] & 0xff00ff00) >> 8 | (param_11[0xc] & 0xff00ff) << 8;
    local_546 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x39] & 0xff00ff00) >> 8 | (param_11[0x39] & 0xff00ff) << 8;
    local_542 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x66] & 0xff00ff00) >> 8 | (param_11[0x66] & 0xff00ff) << 8;
    local_53e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x28] & 0xff00ff00) >> 8 | (param_11[0x28] & 0xff00ff) << 8;
    local_532 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x29] & 0xff00ff00) >> 8 | (param_11[0x29] & 0xff00ff) << 8;
    local_52e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x2a] & 0xff00ff00) >> 8 | (param_11[0x2a] & 0xff00ff) << 8;
    local_52a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x1d] & 0xff00ff00) >> 8 | (param_11[0x1d] & 0xff00ff) << 8;
    local_51e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x27] & 0xff00ff00) >> 8 | (param_11[0x27] & 0xff00ff) << 8;
    local_516 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb4] & 0xff00ff00) >> 8 | (param_11[0xb4] & 0xff00ff) << 8;
    local_62e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb5] & 0xff00ff00) >> 8 | (param_11[0xb5] & 0xff00ff) << 8;
    local_61e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb8] & 0xff00ff00) >> 8 | (param_11[0xb8] & 0xff00ff) << 8;
    local_506 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb9] & 0xff00ff00) >> 8 | (param_11[0xb9] & 0xff00ff) << 8;
    local_4fe = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb6] & 0xff00ff00) >> 8 | (param_11[0xb6] & 0xff00ff) << 8;
    local_5de = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb7] & 0xff00ff00) >> 8 | (param_11[0xb7] & 0xff00ff) << 8;
    local_5ce = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xba] & 0xff00ff00) >> 8 | (param_11[0xba] & 0xff00ff) << 8;
    local_53a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xbb] & 0xff00ff00) >> 8 | (param_11[0xbb] & 0xff00ff) << 8;
    local_536 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xbc] & 0xff00ff00) >> 8 | (param_11[0xbc] & 0xff00ff) << 8;
    local_51a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xc2] & 0xff00ff00) >> 8 | (param_11[0xc2] & 0xff00ff) << 8;
    local_522 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xbf] & 0xff00ff00) >> 8 | (param_11[0xbf] & 0xff00ff) << 8;
    local_526 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  local_512 = (param_12 & 1) << 0x18;
  uVar1 = (param_13 & 0xff00ff00) >> 8 | (param_13 & 0xff00ff) << 8;
  local_50e = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_50a = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_19 & 0xff00ff00) >> 8 | (param_19 & 0xff00ff) << 8;
  local_4fa = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_26 & 0xff00ff00) >> 8 | (param_26 & 0xff00ff) << 8;
  local_397 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_25 & 0xff00ff00) >> 8 | (param_25 & 0xff00ff) << 8;
  local_393 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_37 & 0xff00ff00) >> 8 | (param_37 & 0xff00ff) << 8;
  local_377 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_36 & 0xff00ff00) >> 8 | (param_36 & 0xff00ff) << 8;
  local_373 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_38f = *param_33;
  local_387 = *param_34;
  local_37f = *param_35;
  local_36f = param_5;
  if (param_19 != 0) {
    uVar5 = (ulong)param_19;
    puVar4 = local_4a6;
    do {
      uVar5 = uVar5 - 1;
      uVar1 = (*param_14 & 0xff00ff00) >> 8 | (*param_14 & 0xff00ff) << 8;
      puVar4[-0x14] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_15 & 0xff00ff00) >> 8 | (*param_15 & 0xff00ff) << 8;
      puVar4[-10] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_16 & 0xff00ff00) >> 8 | (*param_16 & 0xff00ff) << 8;
      *puVar4 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_17 & 0xff00ff00) >> 8 | (*param_17 & 0xff00ff) << 8;
      puVar4[10] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_18 & 0xff00ff00) >> 8 | (*param_18 & 0xff00ff) << 8;
      puVar4[0x14] = uVar1 >> 0x10 | uVar1 << 0x10;
      puVar4 = puVar4 + 1;
      param_18 = param_18 + 1;
      param_17 = param_17 + 1;
      param_16 = param_16 + 1;
      param_15 = param_15 + 1;
      param_14 = param_14 + 1;
    } while (uVar5 != 0);
  }
  uVar1 = (param_24 & 0xff00ff00) >> 8 | (param_24 & 0xff00ff) << 8;
  local_407 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (param_24 != 0) {
    uVar5 = (ulong)param_24;
    puVar4 = local_42e + 3;
    puVar6 = auStack_40a;
    do {
      uVar5 = uVar5 - 1;
      uVar1 = (*param_21 & 0xff00ff00) >> 8 | (*param_21 & 0xff00ff) << 8;
      *puVar4 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_20 & 0xff00ff00) >> 8 | (*param_20 & 0xff00ff) << 8;
      puVar4[-3] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_22 & 0xff00ff00) >> 8 | (*param_22 & 0xff00ff) << 8;
      puVar4[3] = uVar1 >> 0x10 | uVar1 << 0x10;
      puVar4 = puVar4 + 1;
      *puVar6 = *param_23;
      param_23 = param_23 + 1;
      param_22 = param_22 + 1;
      param_21 = param_21 + 1;
      param_20 = param_20 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
  local_403 = param_27;
  if (param_27 != 0) {
    uVar5 = (ulong)param_27;
    puVar4 = auStack_3bf;
    do {
      uVar5 = uVar5 - 1;
      uVar1 = (*param_28 & 0xff00ff00) >> 8 | (*param_28 & 0xff00ff) << 8;
      puVar4[-0x10] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_29 & 0xff00ff00) >> 8 | (*param_29 & 0xff00ff) << 8;
      puVar4[-8] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_30 & 0xff00ff00) >> 8 | (*param_30 & 0xff00ff) << 8;
      *puVar4 = uVar1 >> 0x10 | uVar1 << 0x10;
      param_30 = param_30 + 1;
      param_29 = param_29 + 1;
      param_28 = param_28 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  local_36c[0] = 0xf303;
  local_648 = param_7;
  local_647 = param_8;
  memcpy((void *)((ulong)local_36c | 2),&local_658,0x2ea);
  FUN_00923768(local_36c,0x2ec);
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

