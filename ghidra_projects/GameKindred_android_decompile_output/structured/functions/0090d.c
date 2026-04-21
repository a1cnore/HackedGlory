// functions/0090d — 51 functions
#include "libGameKindred.h"




void FUN_0090d008(undefined8 param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "skin";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "rarity";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_2);
  local_78 = "fromInventory";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_3 & 1);
  FUN_00ec506c("Progression_DestroyBlueprint",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090d138(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "chestID";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "keyID";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  FUN_00ec506c("Inventory_OpenChestWithKey",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090d22c(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec516c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5184("Open In-App Web URL: %s",param_1);
    return;
  }
  return;
}




void FUN_0090d268(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec516c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5184("Open External URL: %s",param_1);
    return;
  }
  return;
}




void FUN_0090d2a4(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec516c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5184("Play Video: %s",param_1);
    return;
  }
  return;
}




void FUN_0090d2e0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0090d2e0(param_1,*param_2);
    FUN_0090d2e0(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 6) & 1) != 0) {
      operator_delete((void *)param_2[8]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_0090d33c(long param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < (ulong)puVar3[4]) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_0090d3b4;
      }
      if (*param_2 <= (ulong)puVar3[4]) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_0090d3b4:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x50);
    *(undefined8 *)((long)pvVar5 + 0x20) = *(undefined8 *)*param_4;
    FUN_00ec3d6c((long)pvVar5 + 0x28);
    FUN_0090d414(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




void FUN_0090d414(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_0090d468(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  while( true ) {
    if (bVar1) {
      return;
    }
    plVar3 = (long *)param_2[2];
    plVar4 = plVar3 + 3;
    if ((char)*plVar4 != '\0') break;
    plVar2 = (long *)plVar3[2];
    plVar7 = (long *)*plVar2;
    if (plVar7 == plVar3) {
      if ((plVar2[1] == 0) || (plVar7 = (long *)(plVar2[1] + 0x18), *(char *)plVar7 != '\0')) {
        if ((long *)*plVar3 != param_2) {
          plVar4 = (long *)plVar3[1];
          lVar5 = *plVar4;
          plVar3[1] = lVar5;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
          }
          plVar4[2] = (long)plVar2;
          lVar5 = 0;
          if (*(long **)plVar3[2] != plVar3) {
            lVar5 = 8;
          }
          *(long **)((long)plVar3[2] + lVar5) = plVar4;
          *plVar4 = (long)plVar3;
          plVar3[2] = (long)plVar4;
          plVar2 = (long *)plVar4[2];
          plVar4 = plVar4 + 3;
        }
        *(char *)plVar4 = '\x01';
        lVar5 = *plVar2;
        *(undefined1 *)(plVar2 + 3) = 0;
        lVar6 = *(long *)(lVar5 + 8);
        *plVar2 = lVar6;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar2;
        }
        *(long *)(lVar5 + 0x10) = plVar2[2];
        lVar6 = 0;
        if (*(long **)plVar2[2] != plVar2) {
          lVar6 = 8;
        }
        *(long *)((long)plVar2[2] + lVar6) = lVar5;
        *(long **)(lVar5 + 8) = plVar2;
        plVar2[2] = lVar5;
        return;
      }
    }
    else if ((plVar7 == (long *)0x0) || (plVar7 = plVar7 + 3, (char)*plVar7 != '\0')) {
      if ((long *)*plVar3 == param_2) {
        lVar5 = param_2[1];
        *plVar3 = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        param_2[2] = (long)plVar2;
        lVar5 = 0;
        if (*(long **)plVar3[2] != plVar3) {
          lVar5 = 8;
        }
        *(long **)((long)plVar3[2] + lVar5) = param_2;
        param_2[1] = (long)plVar3;
        plVar3[2] = (long)param_2;
        plVar2 = (long *)param_2[2];
        plVar4 = param_2 + 3;
      }
      *(char *)plVar4 = '\x01';
      plVar4 = (long *)plVar2[1];
      *(undefined1 *)(plVar2 + 3) = 0;
      lVar5 = *plVar4;
      plVar2[1] = lVar5;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar2;
      }
      plVar4[2] = plVar2[2];
      lVar5 = 0;
      if (*(long **)plVar2[2] != plVar2) {
        lVar5 = 8;
      }
      *(long **)((long)plVar2[2] + lVar5) = plVar4;
      *plVar4 = (long)plVar2;
      plVar2[2] = (long)plVar4;
      return;
    }
    bVar1 = plVar2 == param_1;
    *(char *)plVar4 = '\x01';
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar7 = '\x01';
    param_2 = plVar2;
  }
  return;
}




uint FUN_0090d610(byte *param_1,ulong param_2,ulong param_3,void *param_4,ulong param_5)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  bVar2 = *param_1;
  if ((bVar2 & 1) == 0) {
    uVar4 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((param_5 != 0xffffffffffffffff) && (param_2 <= uVar4)) {
    uVar1 = uVar4 - param_2;
    if (param_3 <= uVar4 - param_2) {
      uVar1 = param_3;
    }
    if ((bVar2 & 1) == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = *(byte **)(param_1 + 0x10);
    }
    __n = param_5;
    if (uVar1 <= param_5) {
      __n = uVar1;
    }
    if (((__n == 0) || (uVar3 = memcmp(param_1 + param_2,param_4,__n), uVar3 == 0)) &&
       (uVar3 = (uint)(param_5 < uVar1), uVar1 < param_5)) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_0090d694(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x188);
  FUN_0090df48();
  DAT_02c091c0 = pvVar1;
  return;
}




void FUN_0090d6c4(void)

{
  ulong uVar1;
  
  if ((DAT_02c091c0 != 0) && (uVar1 = FUN_0090e688(), (uVar1 & 1) == 0)) {
    FUN_0090e3e8(DAT_02c091c0);
    return;
  }
  return;
}




undefined8 FUN_0090d700(void)

{
  undefined8 uVar1;
  
  if (DAT_02c091c0 != 0) {
    uVar1 = FUN_0090e688();
    return uVar1;
  }
  return 1;
}




void FUN_0090d718(void)

{
  if (DAT_02c091c0 != (long *)0x0) {
    (**(code **)(*DAT_02c091c0 + 0x40))();
    DAT_02c091c0 = (long *)0x0;
  }
  return;
}




void FUN_0090d750(undefined8 param_1)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e670(DAT_02c091c0,param_1);
    return;
  }
  return;
}




void FUN_0090d76c(undefined8 param_1)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e678(DAT_02c091c0,param_1);
    return;
  }
  return;
}




void FUN_0090d788(undefined8 param_1,undefined8 param_2)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e680(DAT_02c091c0,param_1,param_2);
    return;
  }
  return;
}




void FUN_0090d7a8(undefined8 param_1,undefined8 param_2)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e2f0(DAT_02c091c0,param_1,param_2);
    return;
  }
  return;
}




void FUN_0090d7c8(undefined8 param_1)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e0ac(DAT_02c091c0,param_1);
    return;
  }
  return;
}




void FUN_0090d7e4(undefined8 param_1)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e2e8(DAT_02c091c0,param_1);
    return;
  }
  return;
}




void FUN_0090d800(void)

{
  ulong uVar1;
  
  if ((DAT_02c091c0 != 0) && (uVar1 = FUN_0090e690(), (uVar1 & 1) == 0)) {
    FUN_0090e438(DAT_02c091c0);
    return;
  }
  return;
}




void FUN_0090d83c(void)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e690();
    return;
  }
  return;
}




void FUN_0090d850(void)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e620();
    return;
  }
  return;
}




void FUN_0090d864(void)

{
  ulong uVar1;
  
  if ((DAT_02c091c0 != 0) && (uVar1 = FUN_0090e690(), (uVar1 & 1) != 0)) {
    FUN_0090e2f8(DAT_02c091c0);
    return;
  }
  return;
}




undefined8 FUN_0090d8a0(void)

{
  undefined8 uVar1;
  
  if (DAT_02c091c0 != 0) {
    uVar1 = FUN_0090e6a0();
    return uVar1;
  }
  return 1;
}




undefined8 FUN_0090d8b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c091c0 != 0) {
    uVar1 = FUN_0090e6b0(DAT_02c091c0,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_0090d8d8(undefined8 param_1,undefined4 param_2)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090f350(DAT_02c091c0,param_1,param_2);
    return;
  }
  return;
}




void FUN_0090d8f8(undefined8 param_1,undefined4 param_2)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090f360(DAT_02c091c0,param_1,param_2);
    return;
  }
  return;
}




undefined8 FUN_0090d918(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c091c0 != 0) {
    uVar1 = FUN_0090e6d0(DAT_02c091c0,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_0090d938(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c091c0 != 0) {
    uVar1 = FUN_0090e954(DAT_02c091c0,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_0090d958(undefined8 param_1)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e980(DAT_02c091c0,param_1);
    return;
  }
  return;
}




void FUN_0090d974(undefined8 param_1)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e994(DAT_02c091c0,param_1);
    return;
  }
  return;
}




void FUN_0090d990(undefined8 param_1,char param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) == 0) {
    FUN_008fcdb8(param_1,&DAT_0320ffa8);
  }
  else {
    lVar3 = FUN_00e829e0();
    FUN_008fcdb8(local_50,lVar3 + 0xa8);
    FUN_0090dab8(local_80,&DAT_01b9349c,local_50);
    FUN_008fcdb8(local_68,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (param_2 == '\x02') {
      pcVar4 = "teamright";
      uVar5 = 9;
    }
    else if (param_2 == '\x01') {
      pcVar4 = "teamleft";
      uVar5 = 8;
    }
    else {
      pcVar4 = "default";
      uVar5 = 7;
    }
    FUN_0090de84(local_68,pcVar4,uVar5);
    FUN_008fcdb8(param_1,local_68);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
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




void FUN_0090dab8(ulong *param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  byte bVar2;
  size_t __n;
  byte *pbVar3;
  void *__dest;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __n = strlen(param_2);
  bVar2 = *param_3;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  uVar4 = uVar1 + __n;
  if (uVar4 < 0xfffffffffffffff0) {
    if (uVar4 < 0x17) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
    }
    else {
      uVar4 = uVar4 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar4);
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar4 | 1;
    }
    if (__n != 0) {
      memcpy(__dest,param_2,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    pbVar3 = *(byte **)(param_3 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar3 = param_3 + 1;
    }
    FUN_0090de84(param_1,pbVar3,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_0090db90(undefined8 param_1)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090e9a8(DAT_02c091c0,param_1);
    return;
  }
  return;
}




void FUN_0090dbac(undefined8 param_1)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090eab8(DAT_02c091c0,param_1);
    return;
  }
  return;
}




void FUN_0090dbc8(void)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090eb48();
    return;
  }
  return;
}




undefined8 FUN_0090dbdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c091c0 != 0) {
    uVar1 = FUN_0090ebcc(DAT_02c091c0,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_0090dbfc(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c091c0 != 0) {
    uVar1 = FUN_0090ec38(DAT_02c091c0,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_0090dc1c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = DAT_02c091c0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_02c091c0 != 0) {
    thunk_FUN_00e7051c(&local_48);
    FUN_0090ecd4(lVar2,param_1,&local_48,param_3);
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




void FUN_0090dca4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = DAT_02c091c0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_02c091c0 != 0) {
    thunk_FUN_00e7051c(&local_48);
    FUN_0090ee78(lVar2,param_1,&local_48,param_3 & 1,0);
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




void FUN_0090dd30(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = DAT_02c091c0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_02c091c0 != 0) {
    thunk_FUN_00e7051c(&local_48);
    FUN_0090f23c(lVar2,param_1,&local_48);
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




undefined8 FUN_0090ddb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c091c0 != 0) {
    uVar1 = FUN_009101b4(DAT_02c091c0,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_0090dde0(void)

{
  if (DAT_02c091c0 != 0) {
    FUN_00910224();
  }
  return;
}




undefined8 FUN_0090de00(void)

{
  return 0;
}




void FUN_0090de08(undefined8 param_1,undefined8 param_2)

{
  if (DAT_02c091c0 != 0) {
    FUN_0090ffa4(DAT_02c091c0,param_1,param_2);
    return;
  }
  return;
}




void FUN_0090de28(undefined8 param_1,undefined8 param_2)

{
  if (DAT_02c091c0 != 0) {
    FUN_00910040(DAT_02c091c0,param_1,param_2);
    return;
  }
  return;
}




void FUN_0090de48(undefined8 param_1,undefined8 param_2)

{
  if (DAT_02c091c0 != 0) {
    FUN_009100e0(DAT_02c091c0,param_1,param_2);
    return;
  }
  return;
}




void FUN_0090de68(undefined8 param_1)

{
  if (DAT_02c091c0 != 0) {
    FUN_00910180(DAT_02c091c0,param_1);
    return;
  }
  return;
}




ulong * FUN_0090de84(ulong *param_1,void *param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
    lVar2 = 0x16;
  }
  else {
    uVar3 = param_1[1];
    lVar2 = (*param_1 & 0xfffffffffffffffe) - 1;
  }
  if (lVar2 - uVar3 < param_3) {
    FUN_008fcf6c(param_1,lVar2,(uVar3 + param_3) - lVar2,uVar3,uVar3,0,param_3);
  }
  else if (param_3 != 0) {
    if ((bVar1 & 1) == 0) {
      uVar4 = (long)param_1 + 1;
    }
    else {
      uVar4 = param_1[2];
    }
    memcpy((void *)(uVar4 + uVar3),param_2,param_3);
    uVar3 = uVar3 + param_3;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar3 << 1);
    }
    else {
      param_1[1] = uVar3;
    }
    *(undefined1 *)(uVar4 + uVar3) = 0;
  }
  return param_1;
}




void FUN_0090df48(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027b94c0;
  FUN_00e83560(param_1 + 1);
  FUN_00948cd8(param_1 + 4);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = &PTR_FUN_027b9128;
  param_1[1] = &PTR_FUN_027b90f8;
  *param_1 = &PTR_FUN_027b9068;
  FUN_009e1664(param_1 + 9);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar3 = FUN_00ec50f4();
  param_1[0x19] = uVar3;
  FUN_008fcdb8(param_1 + 0x1a,&DAT_0320ffa8);
  FUN_00e70570(param_1 + 0x1d,&DAT_0320ffa8);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_008fcdb8(param_1 + 0x22,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x25,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x28,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x2b,&DAT_0320ffa8);
  param_1[0x2f] = 0xdc;
  param_1[0x2e] = 0x200000000;
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_00ec6774(param_1[0x19],param_1);
  uVar3 = FUN_009f1f64();
  local_58 = 0;
  pcStack_40 = FUN_00910588;
  puStack_50 = param_1;
  local_48 = param_1;
  FUN_009104f8(uVar3,&local_58);
  bVar2 = FUN_009f1f70(0x10);
  *(byte *)(param_1 + 0x30) = bVar2 & 1;
  FUN_00ec7034(param_1[0x19],param_1 + 10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

