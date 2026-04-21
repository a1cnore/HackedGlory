// functions/00bbd — 36 functions
#include "libGameKindred.h"




void FUN_00bbd020(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00cedf3c();
  FUN_00bff418(uVar2,0xc,uVar1 & 1);
  return;
}




void FUN_00bbd04c(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 1);
  return;
}




void FUN_00bbd060(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x18) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if (param_2 == 0xc) {
          uVar4 = FUN_00cedf3c();
          if ((uVar4 & 1) == 0) {
            uVar5 = *(undefined8 *)(param_1 + 8);
            uVar1 = FUN_00cedf3c();
            FUN_00bff418(uVar5,0xc,uVar1 & 1);
            return;
          }
          FUN_00a1ae38();
          fVar6 = (float)FUN_00a1b610();
          if (fVar6 <= 0.0) {
            FUN_00d5ae88(lVar3);
            uVar5 = FUN_00a1ae38();
            FUN_00a1b728(uVar5,1);
            return;
          }
        }
        else {
          lVar3 = FUN_00a1ae38();
          if (lVar3 != 0) {
            uVar5 = FUN_00a1ae38();
            if (param_3 == 0) {
              param_3 = 1;
            }
            FUN_00a1b810(uVar5,param_2,param_3);
            return;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00bbd158(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb138;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbd19c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbbd1a0);
  (*pcVar1)();
}




void FUN_00bbd1a0(undefined8 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027eb188;
  pvVar3 = operator_new(0xd0);
  FUN_00bff9f0();
  param_1[1] = pvVar3;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar3 + 0x88) = param_1;
  *param_1 = &PTR_thunk_FUN_00bbd724_027eb160;
  uVar2 = DAT_03214ce8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) & 0xf0 | 1;
  uVar4 = FUN_00d7e3d0();
  FUN_00e6ea58(uVar4,param_1,0x7b2a736,FUN_00bbd290,0);
  pcStack_40 = thunk_FUN_00bbd4a8;
  local_48 = param_1;
  FUN_00f02e98(0xbf800000,&local_48,0,1);
  FUN_00bbd2c8(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbd290(long param_1)

{
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 3;
  return;
}




void FUN_00bbd2c8(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar3 = FUN_00da414c();
  uVar7 = *(undefined8 *)(param_1 + 8);
  if (((DAT_0313a278 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0313a278), iVar1 != 0)) {
    FUN_00e70510(&DAT_0313a268);
    __cxa_atexit(FUN_0090e338,&DAT_0313a268,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313a278);
  }
  iVar1 = FUN_00da4284(uVar3);
  if (iVar1 != 0) {
    uVar8 = 0;
    do {
      lVar4 = FUN_00da428c(uVar3,uVar8);
      if (*(char *)(lVar4 + 4) != '\0') {
        pcVar6 = *(char **)(lVar4 + 0x10);
        if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
          pcVar6 = *(char **)(lVar4 + 8);
        }
        uVar5 = FUN_00e6ce7c(pcVar6,0);
        FUN_00910394(&DAT_0313a268,uVar5);
        FUN_00bffc60(uVar7,&DAT_0313a268,uVar8);
      }
      uVar8 = uVar8 + 1;
      uVar2 = FUN_00da4284(uVar3);
    } while ((uVar8 & 0xff) < uVar2);
  }
  FUN_00bfff7c(uVar7);
  return;
}




void FUN_00bbd3d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_thunk_FUN_00bbd724_027eb160;
  uVar2 = FUN_00d7e3d0();
  FUN_00e6ec98(uVar2,param_1);
  pcStack_30 = thunk_FUN_00bbd4a8;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x10))();
  }
  *param_1 = &PTR___cxa_pure_virtual_027eb188;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbd484(void *param_1)

{
  FUN_00bbd3d4();
  operator_delete(param_1);
  return;
}




void FUN_00bbd4a8(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_009bc24c();
  if ((60.0 <= fVar1) && (*(float *)(param_1 + 0x28) < 60.0)) {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
  }
  *(float *)(param_1 + 0x28) = fVar1;
  FUN_00bbd4f8(param_1);
  return;
}




void FUN_00bbd4f8(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    uVar4 = FUN_00da414c();
    iVar2 = FUN_00da4284();
    if (iVar2 != 0) {
      uVar7 = 0;
      do {
        lVar5 = FUN_00da428c(uVar4,uVar7);
        if (*(int *)(lVar5 + 0x20) == 2) {
          uVar6 = *(undefined8 *)(param_1 + 8);
          bVar1 = (*(byte *)(param_1 + 0x2c) & 6) != 0;
LAB_00bbd578:
          FUN_00bfff20(uVar6,uVar7,bVar1);
        }
        else if (*(int *)(lVar5 + 0x20) == 1) {
          uVar6 = *(undefined8 *)(param_1 + 8);
          bVar1 = *(float *)(param_1 + 0x28) <= 60.0;
          goto LAB_00bbd578;
        }
        uVar7 = uVar7 + 1;
        uVar3 = FUN_00da4284(uVar4);
      } while ((uVar7 & 0xff) < uVar3);
    }
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe;
  }
  return;
}




void FUN_00bbd5b4(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long local_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    pvVar2 = operator_new(0x20);
    FUN_00bbcee8();
    *(void **)(param_1 + 0x20) = pvVar2;
    FUN_00bbcfd4(pvVar2);
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      if (*(int *)(param_1 + 0x18) == *(int *)(lVar3 + 8)) {
        local_48 = lVar3;
        local_40 = *(int *)(param_1 + 0x18);
        FUN_00bbd04c(*(undefined8 *)(param_1 + 0x20),&local_48);
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
      }
    }
    FUN_00c0011c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  }
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 8;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbd684(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_38;
  int local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x10) = *param_2;
  *(int *)(param_1 + 0x18) = (int)param_2[1];
  if ((*(long *)(param_1 + 0x20) != 0) && (lVar2 = *param_2, lVar2 != 0)) {
    if ((int)param_2[1] == *(int *)(lVar2 + 8)) {
      local_38 = lVar2;
      local_30 = (int)param_2[1];
      FUN_00bbd04c(*(long *)(param_1 + 0x20),&local_38);
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bbd724(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auStack_78 [48];
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00da414c();
  FUN_00da428c(uVar3,param_2);
  uVar2 = FUN_00cedce4();
  FUN_009841dc(0,auStack_78,uVar2,param_2,0xffffffff,0);
  FUN_00ce20fc(auStack_78);
  lVar4 = FUN_00a1ffc0();
  plVar5 = (long *)(lVar4 + 0x10);
  plVar6 = (long *)*plVar5;
  plVar7 = plVar5;
  if (plVar6 != (long *)0x0) {
    do {
      if (*(uint *)(plVar6 + 4) >= 0x2e4f13dd) {
        plVar7 = plVar6;
      }
      plVar6 = (long *)plVar6[*(uint *)(plVar6 + 4) < 0x2e4f13dd];
    } while (plVar6 != (long *)0x0);
    if (((plVar7 != plVar5) && (*(uint *)(plVar7 + 4) < 0x2e4f13de)) && ((int)plVar7[5] != 0)) {
      lVar4 = 0;
      uVar8 = 0;
      do {
        (*(code *)((undefined8 *)(plVar7[6] + lVar4))[1])
                  (*(undefined8 *)(plVar7[6] + lVar4),param_2 & 0xff);
        uVar8 = uVar8 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar8 < *(uint *)(plVar7 + 5));
    }
  }
  if (*(long *)(lVar1 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bbd724(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00da414c();
  FUN_00da428c(uVar3,param_2);
  uVar2 = FUN_00cedce4();
  FUN_009841dc(0,auStack_78,uVar2,param_2,0xffffffff,0);
  FUN_00ce20fc(auStack_78);
  lVar4 = FUN_00a1ffc0();
  plVar5 = (long *)(lVar4 + 0x10);
  plVar6 = (long *)*plVar5;
  plVar7 = plVar5;
  if (plVar6 != (long *)0x0) {
    do {
      if (*(uint *)(plVar6 + 4) >= 0x2e4f13dd) {
        plVar7 = plVar6;
      }
      plVar6 = (long *)plVar6[*(uint *)(plVar6 + 4) < 0x2e4f13dd];
    } while (plVar6 != (long *)0x0);
    if (((plVar7 != plVar5) && (*(uint *)(plVar7 + 4) < 0x2e4f13de)) && ((int)plVar7[5] != 0)) {
      lVar4 = 0;
      uVar8 = 0;
      do {
        (*(code *)((undefined8 *)(plVar7[6] + lVar4))[1])
                  (*(undefined8 *)(plVar7[6] + lVar4),param_2 & 0xff);
        uVar8 = uVar8 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar8 < *(uint *)(plVar7 + 5));
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bbd834(long param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x2c) >> 2 & 1) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfb | (param_2 & 1) << 2 | 1;
  }
  return;
}




void FUN_00bbd85c(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00da414c();
  FUN_00da428c(uVar1,param_2);
  return;
}




void FUN_00bbd880(long param_1)

{
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 3;
  return;
}




void FUN_00bbd890(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb188;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbd8d4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbbd8d8);
  (*pcVar1)();
}




void thunk_FUN_00bbd4a8(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_009bc24c();
  if ((60.0 <= fVar1) && (*(float *)(param_1 + 0x28) < 60.0)) {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
  }
  *(float *)(param_1 + 0x28) = fVar1;
  FUN_00bbd4f8(param_1);
  return;
}




void FUN_00bbd8dc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &DAT_027cc248;
  pvVar1 = operator_new(0x1048);
  FUN_00c00664();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0x88) = param_1;
  *param_1 = &PTR_FUN_027eb1b0;
  *(undefined4 *)(param_1 + 2) = 0xffff;
  return;
}




void FUN_00bbd940(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  FUN_00cedce4();
  cVar1 = FUN_00cecb68();
  iVar3 = FUN_00ced6f8();
  if (iVar3 != 0) {
    iVar3 = 0;
    uVar13 = 0;
    do {
      iVar4 = FUN_00cedca4(uVar13);
      cVar2 = FUN_00cecb68();
      if ((cVar2 == cVar1) && (iVar5 = FUN_00cedce4(), iVar4 != iVar5)) {
        uVar6 = FUN_00cecbe0(iVar4);
        uVar8 = FUN_00d6eb50();
        lVar9 = FUN_00d6eb88(uVar8,uVar6);
        uVar15 = *(undefined8 *)(param_1 + 8);
        uVar16 = *(undefined8 *)(lVar9 + 0x20);
        uVar8 = FUN_00cec840(iVar4);
        FUN_00c008a0(uVar15,iVar4,uVar16,uVar8);
        iVar3 = iVar3 + 1;
      }
      uVar13 = uVar13 + 1;
      uVar7 = FUN_00ced6f8();
    } while (uVar13 < uVar7);
    if (iVar3 != 0) goto LAB_00bbda6c;
  }
  lVar9 = FUN_00a1ffc0();
  plVar10 = (long *)(lVar9 + 0x10);
  plVar11 = (long *)*plVar10;
  plVar12 = plVar10;
  if (plVar11 != (long *)0x0) {
    do {
      if (*(uint *)(plVar11 + 4) >= 0x9c723b68) {
        plVar12 = plVar11;
      }
      plVar11 = (long *)plVar11[*(uint *)(plVar11 + 4) < 0x9c723b68];
    } while (plVar11 != (long *)0x0);
    if (((plVar12 != plVar10) && (*(uint *)(plVar12 + 4) < 0x9c723b69)) && ((int)plVar12[5] != 0)) {
      lVar9 = 0;
      uVar14 = 0;
      do {
        (*(code *)((undefined8 *)(plVar12[6] + lVar9))[1])(*(undefined8 *)(plVar12[6] + lVar9));
        uVar14 = uVar14 + 1;
        lVar9 = lVar9 + 0x10;
      } while (uVar14 < *(uint *)(plVar12 + 5));
    }
  }
LAB_00bbda6c:
                    /* WARNING: Could not recover jumptable at 0x00bbda8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  return;
}




void FUN_00bbda90(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00bbda98(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00a1ae38();
  if (lVar4 != 0) {
    FUN_00a1ae38();
    fVar10 = (float)FUN_00a1b610();
    if (0.0 < fVar10) goto LAB_00bbdb94;
  }
  uVar5 = FUN_00da414c();
  uVar2 = FUN_00da45fc(uVar5,1);
  uVar3 = FUN_00cedce4();
  FUN_009841dc(0,auStack_78,uVar3,uVar2,param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_00ce20fc(auStack_78);
  lVar4 = FUN_00a1ffc0();
  plVar6 = (long *)(lVar4 + 0x10);
  plVar7 = (long *)*plVar6;
  plVar8 = plVar6;
  if (plVar7 != (long *)0x0) {
    do {
      if (*(uint *)(plVar7 + 4) >= 0x2e4f13dd) {
        plVar8 = plVar7;
      }
      plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < 0x2e4f13dd];
    } while (plVar7 != (long *)0x0);
    if (((plVar8 != plVar6) && (*(uint *)(plVar8 + 4) < 0x2e4f13de)) && ((int)plVar8[5] != 0)) {
      lVar4 = 0;
      uVar9 = 0;
      do {
        (*(code *)((undefined8 *)(plVar8[6] + lVar4))[1])
                  (*(undefined8 *)(plVar8[6] + lVar4),uVar2 & 0xff);
        uVar9 = uVar9 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar9 < *(uint *)(plVar8 + 5));
    }
  }
LAB_00bbdb94:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbdbc0(undefined8 *param_1)

{
  *param_1 = &DAT_027cc248;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bbdc04(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb200;
  pvVar1 = operator_new(0x8760);
  FUN_00c0131c();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027eb1d8;
  param_1[1] = pvVar1;
  return;
}




void FUN_00bbdc54(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb200;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbdc98(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb200;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bbdcdc(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00bbdd00();
    return;
  }
  FUN_009f2588();
  FUN_009f3190();
  FUN_009f1f64();
  FUN_009f2088();
  return;
}




void FUN_00bbdd00(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0;
  do {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_009f1f64();
    uVar1 = FUN_009f1f88(uVar2,iVar3);
    FUN_00c02498(uVar4,iVar3,uVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x22);
  return;
}




void FUN_00bbdd54(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,param_2,param_3);
  FUN_00bbdd00(param_1);
  if (param_2 == 0x19) {
    FUN_00cb9a60();
    return;
  }
  return;
}




void FUN_00bbddb0(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb200;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbddf4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbbddf8);
  (*pcVar1)();
}




void FUN_00bbddf8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[1] = param_2;
  *(undefined8 **)(param_2 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027eb228;
  FUN_00e70314(param_1 + 2);
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  pcStack_40 = thunk_FUN_00bbea14;
  local_48 = param_1;
  FUN_00f02e98(0xbf800000,&local_48,0,1);
  uVar2 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar2,param_1,0x646552f8,FUN_00bbdf00,0);
  uVar2 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar2,param_1,0xccc11f8e,FUN_00bbdfbc,0);
  pvVar3 = operator_new(0x20);
  FUN_00bbf19c();
  param_1[5] = pvVar3;
  uVar2 = FUN_00a1f2d4();
  FUN_00bbf434(pvVar3,uVar2);
  FUN_00c03548(param_1[1],*(undefined8 *)(param_1[5] + 8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

