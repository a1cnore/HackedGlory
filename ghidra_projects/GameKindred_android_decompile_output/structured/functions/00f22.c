// functions/00f22 — 26 functions
#include "libGameKindred.h"




undefined1 * FUN_00f22070(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  bVar1 = *(byte *)(param_1 + 0xc0);
  if ((ulong)bVar1 == 0xff) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = (undefined1 *)(param_1 + (ulong)bVar1 * 0x60);
    if (bVar1 == *(byte *)(param_1 + 0xc1)) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(undefined1 *)(param_1 + 0xc0) = uVar2;
    FUN_00f223b0(puVar3);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  }
  return puVar3;
}




void FUN_00f220dc(undefined8 *param_1,int param_2)

{
  if (param_2 == 3) {
    FUN_00f1c874(*param_1);
    return;
  }
  if (param_2 != 2) {
    if (param_2 == 1) {
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete__((void *)*param_1);
      }
      *param_1 = 0;
    }
    return;
  }
  FUN_00e6b0f4(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}




void FUN_00f22144(long param_1)

{
  long lVar1;
  char cVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cVar2 = thunk_FUN_019a1414();
  if (cVar2 != '\0') {
    FUN_019a146c(param_1,&uStack_2c,&local_30);
    FUN_019a1194(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),uStack_2c,local_30)
    ;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00f221b4(long param_1)

{
  long lVar1;
  void *pvVar2;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = *(uint *)(param_1 + 8);
  pvVar2 = operator_new__((ulong)local_2c);
  FUN_00f224a8(pvVar2,&local_2c,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2221c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  param_1 = param_1 & 0xff;
  puVar4 = &DAT_02bf25c0 + param_1 * 0x60;
  FUN_00f22144(puVar4);
  uVar2 = FUN_00f22430(puVar4);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_1 * 0x60;
    *(undefined8 *)(&DAT_02bf2608 + lVar1) = *(undefined8 *)(lVar1 + 0x2bf25f8);
    *(undefined8 *)(&DAT_02bf2600 + lVar1) = *(undefined8 *)(&DAT_02bf25f0 + lVar1);
    if ((&DAT_02bf2614)[lVar1] == '\0') {
      return;
    }
  }
  else {
    uVar3 = FUN_00f221b4(puVar4);
    lVar1 = param_1 * 0x60;
    (&DAT_02bf2614)[lVar1] = 1;
    *(undefined8 *)(&DAT_02bf2600 + lVar1) = uVar3;
    *(ulong *)(&DAT_02bf2608 + lVar1) = (ulong)*(uint *)(&DAT_02bf25c8 + lVar1);
  }
  lVar1 = param_1 * 0x60;
  FUN_00f220dc(&DAT_02bf25e0 + lVar1,*(undefined4 *)(&DAT_02bf2610 + lVar1));
  *(undefined8 *)(lVar1 + 0x2bf25e8) = 0;
  *(undefined8 *)(&DAT_02bf25e0 + lVar1) = 0;
  *(undefined8 *)(lVar1 + 0x2bf25f8) = 0;
  *(undefined8 *)(&DAT_02bf25f0 + lVar1) = 0;
  return;
}




void FUN_00f222bc(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (param_2 & 0xff) * 0x60;
  uVar2 = *(undefined8 *)(&DAT_02bf2600 + lVar1);
  param_1[1] = *(undefined8 *)(&DAT_02bf2608 + lVar1);
  *param_1 = uVar2;
  return;
}




void FUN_00f222dc(ulong param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  
  param_1 = param_1 & 0xff;
  uVar1 = (uint)(param_1 * 0x60);
  if ((&DAT_02bf2614)[param_1 * 0x60] != '\0') {
    pvVar2 = *(void **)(&DAT_02bf2600 + param_1 * 0x60);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(undefined8 *)(&DAT_02bf2600 + param_1 * 0x60) = 0;
  }
  if (*(long *)(&DAT_02bf25e0 + param_1 * 0x60) != 0) {
    FUN_00f220dc(&DAT_02bf25e0 + param_1 * 0x60,*(undefined4 *)(&DAT_02bf2610 + param_1 * 0x60));
  }
  if (DAT_02bf2680 == -1) {
    DAT_02bf2680 = (char)(uVar1 >> 5) * -0x55;
    DAT_02bf2681 = DAT_02bf2680;
  }
  else {
    uVar3 = (ulong)DAT_02bf2681;
    DAT_02bf2681 = (char)(uVar1 >> 5) * -0x55;
    (&DAT_02bf25c0)[uVar3 * 0x60] = DAT_02bf2681;
  }
  DAT_02bf2684 = DAT_02bf2684 + -1;
  return;
}




void FUN_00f223b0(long param_1)

{
  FUN_019a13f8();
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_00f223e0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar2;
  puVar1 = (undefined8 *)FUN_019a1410(param_1[4]);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  uVar3 = puVar1[3];
  uVar2 = puVar1[2];
  *(undefined4 *)(param_1 + 10) = param_3;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[6] = puVar1 + 4;
  param_1[7] = (ulong)*(uint *)((long)param_1 + 4);
  return;
}




byte FUN_00f22430(long param_1)

{
  return *(byte *)(param_1 + 0xc) & 1;
}




void FUN_00f22440(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (ulong)*param_2;
  iVar2 = FUN_00f22528(param_1,&local_30,param_3,param_4);
  *param_2 = (uint)local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}




void FUN_00f224a8(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (ulong)*param_2;
  iVar2 = FUN_00f269ac(param_1,&local_30,param_3,param_4);
  *param_2 = (uint)local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}




void FUN_00f22510(undefined4 param_1)

{
  FUN_00f22604(param_1);
  return;
}




void FUN_00f22528(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined4 local_88;
  ulong local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_88 = (undefined4)*param_2;
  local_a8 = param_3;
  local_a0 = param_4;
  local_90 = param_1;
  if ((*param_2 & 0xffffffff00000000) == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uVar4 = FUN_00f22618(&local_a8,param_5,"1.2.8",0x70);
    if ((int)uVar4 == 0) {
      uVar3 = FUN_00f23168(&local_a8,4);
      if (uVar3 == 1) {
        *param_2 = local_80;
        uVar4 = FUN_00f22898(&local_a8);
      }
      else {
        FUN_00f22898(&local_a8);
        uVar1 = 0xfffffffb;
        if (uVar3 != 0) {
          uVar1 = uVar3;
        }
        uVar4 = (ulong)uVar1;
      }
    }
  }
  else {
    uVar4 = 0xfffffffb;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00f225fc(void)

{
  FUN_00f22528();
  return;
}




long FUN_00f22604(ulong param_1)

{
  return param_1 + (param_1 >> 0xc) + (param_1 >> 0xe) + (param_1 >> 0x19) + 0xd;
}




void FUN_00f22618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_00f22634(param_1,param_2,8,0xf,8,0,param_3,param_4);
  return;
}




undefined8
FUN_00f22634(long param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
            char *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  
  if (param_7 == (char *)0x0) {
    uVar5 = 0xfffffffa;
  }
  else {
    uVar5 = 0xfffffffa;
    if ((param_8 == 0x70) && (*param_7 == '1')) {
      if (param_1 == 0) {
        uVar5 = 0xfffffffe;
      }
      else {
        pcVar8 = *(code **)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (pcVar8 == (code *)0x0) {
          pcVar8 = FUN_00f26ac8;
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(code **)(param_1 + 0x40) = FUN_00f26ac8;
        }
        if (*(long *)(param_1 + 0x48) == 0) {
          *(code **)(param_1 + 0x48) = FUN_00f26ad0;
        }
        uVar1 = 6;
        if (param_2 != 0xffffffff) {
          uVar1 = param_2;
        }
        if ((int)param_4 < 0) {
          uVar10 = 0;
          uVar9 = -param_4;
        }
        else {
          uVar9 = param_4 - 0x10;
          if ((int)param_4 < 0x10) {
            uVar9 = param_4;
          }
          uVar10 = 1;
          if (0xf < (int)param_4) {
            uVar10 = 2;
          }
        }
        uVar5 = 0xfffffffe;
        if ((((param_6 < 5) && (uVar1 < 10)) && (param_3 == 8)) &&
           ((param_5 - 1U < 9 && ((uVar9 & 0xfffffff8) == 8)))) {
          uVar2 = 9;
          if (uVar9 != 8) {
            uVar2 = uVar9;
          }
          plVar6 = (long *)(*pcVar8)(*(undefined8 *)(param_1 + 0x50),1,0x1730);
          if (plVar6 != (long *)0x0) {
            iVar3 = 1 << (ulong)(uVar2 & 0x1f);
            *(long **)(param_1 + 0x38) = plVar6;
            *(int *)((long)plVar6 + 0x4c) = iVar3 + -1;
            iVar4 = 1 << (ulong)(param_5 + 7U & 0x1f);
            *(int *)((long)plVar6 + 0x74) = iVar4;
            *(uint *)(plVar6 + 0xf) = param_5 + 7U;
            *(undefined4 *)((long)plVar6 + 0x2c) = uVar10;
            *(int *)((long)plVar6 + 0x44) = iVar3;
            *(uint *)(plVar6 + 9) = uVar2;
            *plVar6 = param_1;
            plVar6[6] = 0;
            *(int *)((long)plVar6 + 0x7c) = iVar4 + -1;
            *(uint *)(plVar6 + 0x10) = (param_5 + 9U & 0xff) / 3;
            lVar7 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar3,2);
            plVar6[10] = lVar7;
            lVar7 = (**(code **)(param_1 + 0x40))
                              (*(undefined8 *)(param_1 + 0x50),*(undefined4 *)((long)plVar6 + 0x44),
                               2);
            plVar6[0xc] = lVar7;
            lVar7 = (**(code **)(param_1 + 0x40))
                              (*(undefined8 *)(param_1 + 0x50),*(undefined4 *)((long)plVar6 + 0x74),
                               2);
            iVar3 = 1 << (ulong)(param_5 + 6U & 0x1f);
            plVar6[0xd] = lVar7;
            plVar6[0x2e5] = 0;
            *(int *)(plVar6 + 0x2df) = iVar3;
            lVar7 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar3,4);
            uVar9 = *(uint *)(plVar6 + 0x2df);
            plVar6[2] = lVar7;
            plVar6[3] = (ulong)uVar9 << 2;
            if (((plVar6[10] != 0) && (plVar6[0xc] != 0)) && ((lVar7 != 0 && (plVar6[0xd] != 0)))) {
              *(uint *)((long)plVar6 + 0xb4) = uVar1;
              *(uint *)(plVar6 + 0x17) = param_6;
              plVar6[0x2e0] = lVar7 + (ulong)(uVar9 & 0xfffffffe);
              plVar6[0x2de] = lVar7 + (ulong)uVar9 * 3;
              *(undefined1 *)((long)plVar6 + 0x3c) = 8;
              uVar5 = FUN_00f2297c(param_1);
              return uVar5;
            }
            *(undefined4 *)(plVar6 + 1) = 0x29a;
            *(char **)(param_1 + 0x30) = "insufficient memory";
            FUN_00f22898(param_1);
          }
          uVar5 = 0xfffffffc;
        }
      }
    }
  }
  return uVar5;
}




undefined4 FUN_00f22898(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 8);
    if (((iVar1 - 0x45U < 0x2d) && ((1L << ((ulong)(iVar1 - 0x45U) & 0x3f) & 0x100400400011U) != 0))
       || ((iVar1 == 0x29a || (iVar1 == 0x2a)))) {
      if (*(long *)(lVar2 + 0x10) != 0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x10));
        lVar2 = *(long *)(param_1 + 0x38);
      }
      if (*(long *)(lVar2 + 0x68) != 0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x68));
        lVar2 = *(long *)(param_1 + 0x38);
      }
      if (*(long *)(lVar2 + 0x60) != 0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x60));
        lVar2 = *(long *)(param_1 + 0x38);
      }
      if (*(long *)(lVar2 + 0x50) != 0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x50));
        lVar2 = *(long *)(param_1 + 0x38);
      }
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),lVar2);
      uVar3 = 0xfffffffd;
      if (iVar1 != 0x71) {
        uVar3 = 0;
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      return uVar3;
    }
  }
  return 0xfffffffe;
}




int FUN_00f2297c(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  void *__s;
  ulong uVar5;
  long lVar6;
  
  iVar4 = FUN_00f22ea0();
  if (iVar4 == 0) {
    lVar6 = *(long *)(param_1 + 0x38);
    __s = *(void **)(lVar6 + 0x68);
    uVar5 = (ulong)(*(int *)(lVar6 + 0x74) - 1);
    *(ulong *)(lVar6 + 0x58) = (ulong)*(uint *)(lVar6 + 0x44) << 1;
    *(undefined2 *)((long)__s + uVar5 * 2) = 0;
    memset(__s,0,uVar5 << 1);
    *(undefined4 *)(lVar6 + 0x90) = 2;
    lVar1 = (long)*(int *)(lVar6 + 0xb4) * 0x10;
    uVar2 = *(ushort *)(&DAT_02828e16 + lVar1);
    uVar3 = *(ushort *)(&DAT_02828e12 + lVar1);
    *(undefined8 *)(lVar6 + 0x88) = 0;
    *(undefined4 *)(lVar6 + 0x171c) = 0;
    *(uint *)(lVar6 + 0xac) = (uint)uVar2;
    *(uint *)(lVar6 + 0xb0) = (uint)uVar3;
    uVar2 = *(ushort *)(&DAT_02828e10 + lVar1);
    uVar3 = *(ushort *)(&DAT_02828e14 + lVar1);
    *(undefined8 *)(lVar6 + 0x98) = 0;
    *(undefined8 *)(lVar6 + 0xa4) = 0x200000000;
    *(undefined4 *)(lVar6 + 0x70) = 0;
    *(uint *)(lVar6 + 0xbc) = (uint)uVar2;
    *(uint *)(lVar6 + 0xc0) = (uint)uVar3;
  }
  return iVar4;
}




undefined8 FUN_00f22a20(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  void *__s;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  
  if (param_1 != (long *)0x0) {
    if (param_2 == 0) {
      return 0xfffffffe;
    }
    lVar14 = param_1[7];
    if (lVar14 == 0) {
      return 0xfffffffe;
    }
    iVar6 = *(int *)(lVar14 + 0x2c);
    if ((iVar6 != 2) &&
       (((iVar6 != 1 || (*(int *)(lVar14 + 8) == 0x2a)) && (*(int *)(lVar14 + 0xa4) == 0)))) {
      if (iVar6 == 1) {
        lVar9 = FUN_00f26ad8(param_1[0xc],param_2,param_3);
        param_1[0xc] = lVar9;
      }
      *(undefined4 *)(lVar14 + 0x2c) = 0;
      uVar15 = param_3;
      if (*(uint *)(lVar14 + 0x44) <= param_3) {
        uVar15 = *(uint *)(lVar14 + 0x44);
        if (iVar6 == 0) {
          __s = *(void **)(lVar14 + 0x68);
          uVar10 = (ulong)(*(int *)(lVar14 + 0x74) - 1);
          *(undefined2 *)((long)__s + uVar10 * 2) = 0;
          memset(__s,0,uVar10 << 1);
          uVar15 = *(uint *)(lVar14 + 0x44);
          *(undefined4 *)(lVar14 + 0x9c) = 0;
          *(undefined8 *)(lVar14 + 0x88) = 0;
          *(undefined4 *)(lVar14 + 0x171c) = 0;
        }
        param_2 = param_2 + (ulong)(param_3 - uVar15);
      }
      lVar9 = param_1[1];
      lVar16 = *param_1;
      *(uint *)(param_1 + 1) = uVar15;
      *param_1 = param_2;
      FUN_00f22be0(lVar14);
      uVar7 = *(uint *)(lVar14 + 0x9c);
      uVar15 = *(uint *)(lVar14 + 0xa4);
      while (2 < uVar15) {
        uVar12 = *(uint *)(lVar14 + 0x70);
        uVar2 = *(uint *)(lVar14 + 0x7c);
        uVar3 = *(uint *)(lVar14 + 0x80);
        lVar13 = *(long *)(lVar14 + 0x50);
        lVar4 = *(long *)(lVar14 + 0x60);
        lVar5 = *(long *)(lVar14 + 0x68);
        uVar8 = *(uint *)(lVar14 + 0x4c);
        iVar11 = 2 - uVar15;
        uVar1 = uVar7;
        do {
          iVar11 = iVar11 + 1;
          uVar12 = (uVar12 << (ulong)(uVar3 & 0x1f) ^ (uint)*(byte *)(lVar13 + (ulong)(uVar1 + 2)))
                   & uVar2;
          *(uint *)(lVar14 + 0x70) = uVar12;
          *(undefined2 *)(lVar4 + (ulong)(uVar8 & uVar1) * 2) =
               *(undefined2 *)(lVar5 + (ulong)uVar12 * 2);
          *(short *)(lVar5 + (ulong)uVar12 * 2) = (short)uVar1;
          uVar1 = uVar1 + 1;
        } while (iVar11 != 0);
        *(uint *)(lVar14 + 0x9c) = (uVar15 - 2) + uVar7;
        *(undefined4 *)(lVar14 + 0xa4) = 2;
        FUN_00f22be0(lVar14);
        uVar7 = *(uint *)(lVar14 + 0x9c);
        uVar15 = *(uint *)(lVar14 + 0xa4);
      }
      *(uint *)(lVar14 + 0x171c) = uVar15;
      *(undefined4 *)(lVar14 + 0x98) = 0;
      *(uint *)(lVar14 + 0x9c) = uVar7 + uVar15;
      *(ulong *)(lVar14 + 0x88) = (ulong)(uVar7 + uVar15);
      *(undefined4 *)(lVar14 + 0x90) = 2;
      *(undefined8 *)(lVar14 + 0xa4) = 0x200000000;
      *param_1 = lVar16;
      *(int *)(param_1 + 1) = (int)lVar9;
      *(int *)(lVar14 + 0x2c) = iVar6;
      return 0;
    }
  }
  return 0xfffffffe;
}




void FUN_00f22be0(long *param_1)

{
  void *__dest;
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  size_t __n;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  
  uVar4 = *(uint *)((long)param_1 + 0x44);
  uVar13 = (ulong)uVar4;
  uVar12 = *(uint *)((long)param_1 + 0xa4);
  uVar10 = uVar4;
  while( true ) {
    uVar16 = *(uint *)((long)param_1 + 0x9c);
    uVar14 = ((int)param_1[0xb] - uVar12) - uVar16;
    if ((uVar4 - 0x106) + uVar10 <= uVar16) {
      memcpy((void *)param_1[10],(void *)(param_1[10] + uVar13),uVar13);
      lVar7 = param_1[0xd];
      uVar9 = (ulong)*(uint *)((long)param_1 + 0x74);
      uVar16 = (int)*(undefined8 *)((long)param_1 + 0x9c) - uVar4;
      *(ulong *)((long)param_1 + 0x9c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x9c) >> 0x20) - uVar4,uVar16);
      param_1[0x11] = param_1[0x11] - uVar13;
      do {
        lVar1 = lVar7 + uVar9 * 2;
        uVar6 = *(ushort *)(lVar1 + -2);
        uVar9 = uVar9 - 1;
        uVar12 = uVar4;
        if (uVar4 <= uVar6) {
          uVar12 = (uint)uVar6;
        }
        *(short *)(lVar1 + -2) = (short)uVar12 - (short)uVar4;
      } while ((int)uVar9 != 0);
      lVar7 = param_1[0xc];
      uVar9 = uVar13;
      do {
        lVar1 = lVar7 + uVar9 * 2;
        uVar6 = *(ushort *)(lVar1 + -2);
        uVar9 = uVar9 - 1;
        uVar12 = uVar4;
        if (uVar4 <= uVar6) {
          uVar12 = (uint)uVar6;
        }
        *(short *)(lVar1 + -2) = (short)uVar12 - (short)uVar4;
      } while ((int)uVar9 != 0);
      uVar14 = uVar14 + uVar4;
    }
    plVar15 = (long *)*param_1;
    uVar10 = *(uint *)(plVar15 + 1);
    if (uVar10 == 0) break;
    uVar12 = *(uint *)((long)param_1 + 0xa4);
    if (uVar10 <= uVar14) {
      uVar14 = uVar10;
    }
    if (uVar14 != 0) {
      uVar9 = (ulong)uVar14;
      __dest = (void *)(param_1[10] + (ulong)uVar16 + (ulong)uVar12);
      *(uint *)(plVar15 + 1) = uVar10 - uVar14;
      memcpy(__dest,(void *)*plVar15,uVar9);
      if (*(int *)(plVar15[7] + 0x2c) == 2) {
        lVar7 = FUN_00f26efc(plVar15[0xc],__dest,uVar14);
LAB_00f22c8c:
        plVar15[0xc] = lVar7;
      }
      else if (*(int *)(plVar15[7] + 0x2c) == 1) {
        lVar7 = FUN_00f26ad8(plVar15[0xc],__dest,uVar14);
        goto LAB_00f22c8c;
      }
      *plVar15 = *plVar15 + uVar9;
      plVar15[2] = plVar15[2] + uVar9;
      uVar12 = *(uint *)((long)param_1 + 0xa4);
    }
    iVar8 = *(int *)((long)param_1 + 0x171c);
    uVar12 = uVar12 + uVar14;
    *(uint *)((long)param_1 + 0xa4) = uVar12;
    if (2 < iVar8 + uVar12) {
      lVar7 = param_1[10];
      uVar10 = *(int *)((long)param_1 + 0x9c) - iVar8;
      bVar5 = *(byte *)(lVar7 + (ulong)uVar10);
      *(uint *)(param_1 + 0xe) = (uint)bVar5;
      uVar16 = *(uint *)((long)param_1 + 0x7c);
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar14 = ((uint)bVar5 << (ulong)(uVar3 & 0x1f) ^ (uint)*(byte *)(lVar7 + (ulong)(uVar10 + 1)))
               & uVar16;
      *(uint *)(param_1 + 0xe) = uVar14;
      do {
        if (iVar8 == 0) break;
        lVar1 = param_1[0xd];
        uVar14 = (uVar14 << (ulong)(uVar3 & 0x1f) ^ (uint)*(byte *)(lVar7 + (ulong)(uVar10 + 2))) &
                 uVar16;
        *(uint *)(param_1 + 0xe) = uVar14;
        iVar8 = iVar8 + -1;
        *(undefined2 *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar10) * 2) =
             *(undefined2 *)(lVar1 + (ulong)uVar14 * 2);
        *(short *)(lVar1 + (ulong)uVar14 * 2) = (short)uVar10;
        uVar10 = uVar10 + 1;
        *(int *)((long)param_1 + 0x171c) = iVar8;
      } while (2 < uVar12 + iVar8);
    }
    if ((0x105 < uVar12) || (*(int *)(*param_1 + 8) == 0)) break;
    uVar10 = *(uint *)((long)param_1 + 0x44);
  }
  uVar9 = param_1[0x2e5];
  uVar11 = param_1[0xb];
  uVar13 = uVar11 - uVar9;
  if (uVar9 <= uVar11 && uVar13 != 0) {
    uVar2 = (ulong)*(uint *)((long)param_1 + 0xa4) + (ulong)*(uint *)((long)param_1 + 0x9c);
    if (uVar9 < uVar2) {
      __n = uVar11 - uVar2;
      if (0x101 < __n) {
        __n = 0x102;
      }
      memset((void *)(param_1[10] + uVar2),0,__n);
      lVar7 = __n + uVar2;
    }
    else {
      uVar11 = (uVar2 + 0x102) - uVar9;
      if (uVar2 + 0x102 < uVar9 || uVar11 == 0) {
        return;
      }
      if (uVar11 <= uVar13) {
        uVar13 = uVar11;
      }
      memset((void *)(param_1[10] + uVar9),0,uVar13 & 0xffffffff);
      lVar7 = param_1[0x2e5] + uVar13;
    }
    param_1[0x2e5] = lVar7;
  }
  return;
}




undefined8 FUN_00f22ea0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((((param_1 == 0) || (lVar4 = *(long *)(param_1 + 0x38), lVar4 == 0)) ||
      (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x58) = 2;
    iVar1 = *(int *)(lVar4 + 0x2c);
    *(undefined4 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
      *(int *)(lVar4 + 0x2c) = iVar1;
    }
    uVar3 = 0x71;
    if (iVar1 != 0) {
      uVar3 = 0x2a;
    }
    *(undefined4 *)(lVar4 + 8) = uVar3;
    if (iVar1 == 2) {
      uVar2 = FUN_00f26efc();
    }
    else {
      uVar2 = FUN_00f26ad8(0,0,0);
    }
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    *(undefined4 *)(lVar4 + 0x40) = 0;
    FUN_00f25110(lVar4);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_00f22f54(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) &&
     (*(int *)(lVar1 + 0x2c) == 2)) {
    *(undefined8 *)(lVar1 + 0x30) = param_2;
    return 0;
  }
  return 0xfffffffe;
}




undefined8 FUN_00f22f80(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x38), lVar1 == 0)) {
    return 0xfffffffe;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar1 + 0x28);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar1 + 0x1724);
    return 0;
  }
  return 0;
}




undefined8 FUN_00f22fbc(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_1 == 0) || (lVar4 = *(long *)(param_1 + 0x38), lVar4 == 0)) {
    uVar3 = 0xfffffffe;
  }
  else if (*(ulong *)(lVar4 + 0x1700) < *(long *)(lVar4 + 0x20) + 2U) {
    uVar3 = 0xfffffffb;
  }
  else {
    do {
      uVar2 = *(uint *)(lVar4 + 0x1724);
      uVar1 = param_2;
      if ((int)(0x10 - uVar2) <= (int)param_2) {
        uVar1 = 0x10 - uVar2;
      }
      *(ushort *)(lVar4 + 0x1720) =
           *(ushort *)(lVar4 + 0x1720) |
           (ushort)(((1 << (ulong)(uVar1 & 0x1f)) - 1U & param_3) << (ulong)(uVar2 & 0x1f));
      *(uint *)(lVar4 + 0x1724) = uVar1 + uVar2;
      thunk_FUN_00f25304(lVar4);
      param_2 = param_2 - uVar1;
      param_3 = (int)param_3 >> (uVar1 & 0x1f);
    } while (param_2 != 0);
    uVar3 = 0;
  }
  return uVar3;
}

