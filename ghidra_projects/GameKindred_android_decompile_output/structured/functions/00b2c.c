// functions/00b2c — 38 functions
#include "libGameKindred.h"




undefined4 FUN_00b2c214(long param_1,uint param_2)

{
  if (-1 < (int)param_2) {
    if (*(uint *)(param_1 + 0x6b0) <= param_2) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 0x6b8) + (ulong)param_2 * 8) != 0) {
      FUN_00b2bfe8();
      return 1;
    }
  }
  return 0;
}




void FUN_00b2c258(long param_1,byte param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x6b0);
  if (*(uint *)(param_1 + 0x6b0) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x6b8) + uVar3 * 8);
      if ((lVar1 != 0) && (((param_2 ^ *(byte *)(lVar1 + 0x26c) >> 4) & 1) != 0)) {
        FUN_00b09454(lVar1,param_2 & 1);
        uVar2 = (ulong)*(uint *)(param_1 + 0x6b0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}




void FUN_00b2c2bc(long param_1,byte *param_2,byte param_3)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x6b0);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_1 + 0x6b8);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar8 = *(long *)(lVar10 + uVar9 * 8);
      if (lVar8 != 0) {
        bVar3 = *(byte *)(lVar8 + 0x1680);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = *(ulong *)(lVar8 + 0x1688);
        }
        if (uVar1 == __n) {
          __s1 = *(void **)(lVar8 + 0x1690);
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)(lVar8 + 0x1681);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              pbVar5 = (byte *)(lVar8 + 0x1681);
              lVar6 = -(ulong)(bVar3 >> 1);
              pbVar7 = __s2;
              do {
                if (*pbVar5 != *pbVar7) goto LAB_00b2c390;
                pbVar5 = pbVar5 + 1;
                lVar6 = lVar6 + 1;
                pbVar7 = pbVar7 + 1;
              } while (lVar6 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00b2c390;
          if (((param_3 ^ *(byte *)(lVar8 + 0x26c) >> 4) & 1) != 0) {
            FUN_00b09454(lVar8,param_3 & 1);
            return;
          }
        }
      }
LAB_00b2c390:
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return;
}




void FUN_00b2c3d4(long param_1,uint param_2)

{
  FUN_00ed04d8(param_1 + 0x178,0,param_2 & 1);
  return;
}




void FUN_00b2c3e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_00b2bfe8(param_1,param_3);
    return;
  }
  return;
}




void FUN_00b2c3f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027df000;
  if ((*(byte *)(param_1 + 0x2d0) & 1) != 0) {
    operator_delete((void *)param_1[0x2d2]);
  }
  param_1[0x222] = &PTR_FUN_027dc7d8;
  param_1[0x2b1] = &PTR_FUN_028266f0;
  param_1[0x2c8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2cb);
  FUN_00f13d08(param_1 + 0x2b1);
  param_1[0x293] = &PTR_FUN_028266f0;
  param_1[0x2aa] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2ad);
  FUN_00f13d08(param_1 + 0x293);
  param_1[0x275] = &PTR_FUN_028266f0;
  param_1[0x28c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x28f);
  FUN_00f13d08(param_1 + 0x275);
  param_1[599] = &PTR_FUN_028266f0;
  param_1[0x26e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x271);
  FUN_00f13d08(param_1 + 599);
  param_1[0x239] = &PTR_FUN_028266f0;
  param_1[0x250] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x253);
  FUN_00f13d08(param_1 + 0x239);
  FUN_00f13d08(param_1 + 0x222);
  param_1[0x175] = &PTR_FUN_027dc7d8;
  param_1[0x204] = &PTR_FUN_028266f0;
  param_1[0x21b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x21e);
  FUN_00f13d08(param_1 + 0x204);
  param_1[0x1e6] = &PTR_FUN_028266f0;
  param_1[0x1fd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x200);
  FUN_00f13d08(param_1 + 0x1e6);
  param_1[0x1c8] = &PTR_FUN_028266f0;
  param_1[0x1df] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1e2);
  FUN_00f13d08(param_1 + 0x1c8);
  param_1[0x1aa] = &PTR_FUN_028266f0;
  param_1[0x1c1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1c4);
  FUN_00f13d08(param_1 + 0x1aa);
  param_1[0x18c] = &PTR_FUN_028266f0;
  param_1[0x1a3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a6);
  FUN_00f13d08(param_1 + 0x18c);
  FUN_00f13d08(param_1 + 0x175);
  FUN_00f01868(param_1 + 0x164);
  FUN_00f0d3a4(param_1 + 0x13e);
  param_1[0x120] = &PTR_FUN_028266f0;
  param_1[0x137] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13a);
  FUN_00f13d08(param_1 + 0x120);
  param_1[0x102] = &PTR_FUN_028266f0;
  param_1[0x119] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11c);
  FUN_00f13d08(param_1 + 0x102);
  param_1[0x6c] = &PTR_FUN_027dc928;
  param_1[0xd7] = &PTR_FUN_02826f38;
  param_1[0xee] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xf1);
  FUN_00f13d08(param_1 + 0xd7);
  param_1[0xad] = &PTR_FUN_02826f38;
  param_1[0xc4] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 199);
  FUN_00f13d08(param_1 + 0xad);
  param_1[0x83] = &PTR_FUN_02826f38;
  param_1[0x9a] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x9d);
  FUN_00f13d08(param_1 + 0x83);
  FUN_00f13d08(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00b2c6bc(void *param_1)

{
  FUN_00b2c3f4();
  operator_delete(param_1);
  return;
}




void FUN_00b2c6e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027df190;
  param_1[0x306] = &PTR_FUN_028266f0;
  param_1[0x31d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 800);
  FUN_00f13d08(param_1 + 0x306);
  param_1[0x2e8] = &PTR_FUN_028266f0;
  param_1[0x2ff] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x302);
  FUN_00f13d08(param_1 + 0x2e8);
  FUN_00f01868(param_1 + 0x2d7);
  FUN_00b2c3f4(param_1);
  return;
}




void FUN_00b2c77c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027df190;
  param_1[0x306] = &PTR_FUN_028266f0;
  param_1[0x31d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 800);
  FUN_00f13d08(param_1 + 0x306);
  param_1[0x2e8] = &PTR_FUN_028266f0;
  param_1[0x2ff] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x302);
  FUN_00f13d08(param_1 + 0x2e8);
  FUN_00f01868(param_1 + 0x2d7);
  FUN_00b2c3f4(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b2c820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027df320;
  if ((void *)param_1[0xd7] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd7]);
    param_1[0xd7] = 0;
    param_1[0xd6] = 0;
  }
  FUN_00ed00e0(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b2c874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027df320;
  if ((void *)param_1[0xd7] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd7]);
    param_1[0xd7] = 0;
    param_1[0xd6] = 0;
  }
  FUN_00ed00e0(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b2c8d0(uint *param_1,uint param_2)

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




void FUN_00b2c950(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_027d1ce8;
  FUN_00948cd8(param_1 + 2);
  FUN_00e83560(param_1 + 5);
  *param_1 = &PTR_FUN_027df468;
  param_1[2] = &PTR_FUN_027df4b0;
  param_1[5] = &PTR_FUN_027df848;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00b2c9d0,0);
  return;
}




void FUN_00b2c9d0(void)

{
  FUN_00b2cbf0();
  return;
}




void FUN_00b2c9fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027df468;
  param_1[2] = &PTR_FUN_027df4b0;
  param_1[5] = &PTR_FUN_027df848;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  FUN_00e835e0(param_1 + 5);
  FUN_00948d58(param_1 + 2);
  FUN_00aa32e8(param_1);
  return;
}




void FUN_00b2ca74(long param_1)

{
  FUN_00b2c9fc(param_1 + -0x10);
  return;
}




void FUN_00b2ca7c(long param_1)

{
  FUN_00b2c9fc(param_1 + -0x28);
  return;
}




void FUN_00b2ca84(void *param_1)

{
  FUN_00b2c9fc();
  operator_delete(param_1);
  return;
}




void FUN_00b2caa8(long param_1)

{
  FUN_00b2c9fc((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00b2cad0(long param_1)

{
  FUN_00b2c9fc((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00b2caf8(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar1 = operator_new(0x20);
  FUN_00bdf03c();
  pvVar2 = operator_new(0xc0);
  FUN_00b2cb70(pvVar2,pvVar1);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_FEATURED_RECOMMENDED",0);
                    /* WARNING: Could not recover jumptable at 0x00b2cb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,uVar3,500,pvVar2,&DAT_01e277f2);
  return;
}




void FUN_00b2cb70(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027df878;
  param_1[0x17] = param_2;
  FUN_00f023ec(param_1,*(undefined8 *)(param_2 + 8),1);
  plVar1 = (long *)FUN_00f1357c();
  FUN_00f13fd8(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x00b2cbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(param_2 + 8));
  return;
}




void FUN_00b2cbe4(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_00b2cbf0();
  return;
}




void FUN_00b2cbf0(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  char *pcVar9;
  void *__s1;
  byte *__s2;
  long lVar10;
  long lVar11;
  ulong local_48;
  long local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((*(char *)(param_1 + 0x40) == '\0') || (uVar6 = FUN_0096bc2c(), (uVar6 & 1) == 0)) {
    FUN_00aa32f0(param_1,0);
    goto LAB_00b2cd3c;
  }
  local_48 = 0;
  local_40 = 0;
  uVar6 = FUN_0096bfcc(&local_48);
  if ((uVar6 & 1) != 0) {
    if ((int)local_48 != 0) {
      lVar11 = local_40 + (local_48 & 0xffffffff) * 0x78;
      lVar10 = local_40;
      do {
        pbVar7 = (byte *)FUN_00b2cdb0();
        bVar2 = *(byte *)(lVar10 + 0x18);
        bVar3 = *pbVar7;
        __n = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          __n = *(size_t *)(lVar10 + 0x20);
        }
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar7 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar10 + 0x28);
          __s2 = *(byte **)(pbVar7 + 0x10);
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)(lVar10 + 0x19);
          }
          if ((bVar3 & 1) == 0) {
            __s2 = pbVar7 + 1;
          }
          if ((bVar2 & 1) == 0) {
            if (__n == 0) {
LAB_00b2ccf8:
              if (*(uint *)(lVar10 + 8) != 0) {
                lVar11 = (ulong)*(uint *)(lVar10 + 8) * 0x598;
                pcVar9 = (char *)(*(long *)(lVar10 + 0x10) + 0x591);
                goto LAB_00b2cd10;
              }
              break;
            }
            uVar6 = 0;
            while (*(byte *)(lVar10 + uVar6 + 0x19) == __s2[uVar6]) {
              uVar6 = uVar6 + 1;
              if (bVar2 >> 1 == uVar6) goto LAB_00b2ccf8;
            }
          }
          else if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00b2ccf8;
        }
        lVar10 = lVar10 + 0x78;
      } while (lVar10 != lVar11);
    }
  }
  goto LAB_00b2cd24;
  while( true ) {
    lVar11 = lVar11 + -0x598;
    pcVar9 = pcVar9 + 0x598;
    if (lVar11 == 0) break;
LAB_00b2cd10:
    if (*pcVar9 != '\0') {
      uVar8 = 2;
      goto LAB_00b2cd28;
    }
  }
LAB_00b2cd24:
  uVar8 = 1;
LAB_00b2cd28:
  FUN_00aa32f0(param_1,uVar8);
  FUN_00969c70(&local_48,1);
LAB_00b2cd3c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b2cd6c(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_00b2cbf0(param_1 + -0x10);
  return;
}




void FUN_00b2cd80(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_00b2cbf0();
  return;
}




void FUN_00b2cd88(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00b2cbf0(param_1 + -0x28);
  return;
}




void FUN_00b2cd98(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_00b2cbf0();
  return;
}




void FUN_00b2cda0(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00b2cbf0(param_1 + -0x28);
  return;
}




undefined * FUN_00b2cdb0(void)

{
  int iVar1;
  
  if (((DAT_0313a0b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0313a0b0), iVar1 != 0)) {
    FUN_008fa54c(&DAT_0313a098,"MENU_MARKET_TAB_NAME_POPUPS");
    __cxa_atexit(FUN_008fa5ec,&DAT_0313a098,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313a0b0);
  }
  return &DAT_0313a098;
}




void FUN_00b2ce30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027df878;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  param_1[0x17] = 0;
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b2ce78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027df878;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  param_1[0x17] = 0;
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b2cec8(undefined8 *param_1)

{
  long lVar1;
  code *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027df9c0;
  param_1[0x17] = 0;
  FUN_00f13f08(0x42200000,0x42c80000,param_1);
  local_40 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  local_68 = FUN_00b2cfac;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  local_68 = FUN_00b2cfac;
  local_40 = DAT_03210f8c;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2cfac(long param_1)

{
  FUN_00b2dd90(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x568),param_1);
  return;
}




void FUN_00b2cfbc(long param_1)

{
  FUN_00b2dd90(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x568),param_1);
  return;
}




void FUN_00b2cfcc(long param_1)

{
  FUN_00b2dd90(*(undefined8 *)(param_1 + 0x568));
  return;
}




void FUN_00b2cfd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027df9c0;
  param_1[0x17] = 0;
  FUN_00f13d08();
  return;
}




void FUN_00b2cfec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027df9c0;
  param_1[0x17] = 0;
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}

