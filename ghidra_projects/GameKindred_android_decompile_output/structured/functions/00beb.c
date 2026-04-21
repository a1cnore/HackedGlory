// functions/00beb — 28 functions
#include "libGameKindred.h"




void FUN_00beb010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efc08;
  FUN_00beb268(param_1 + 2,param_1[3]);
  *param_1 = &PTR_FUN_027efc28;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00beb06c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efc28;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00beb0b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efc28;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00beb0f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efc68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00beb138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efc68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00beb17c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efc88;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_027efca8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00beb1e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efca8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00beb224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efca8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00beb268(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00beb268(param_1,*param_2);
    FUN_00beb268(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00beb2c4(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 != param_2) {
    FUN_009ec3a8(param_1,1);
    FUN_009ed138(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      puVar4 = puVar2 + (ulong)*param_2 * 5;
      do {
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar3 = *puVar2;
        FUN_008fcdb8(puVar3 + 2,puVar2 + 2);
        puVar2 = puVar2 + 5;
        puVar3 = puVar3 + 5;
      } while (puVar2 != puVar4);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00beb360(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if (param_1 != param_2) {
    FUN_009ec324(param_1,1);
    FUN_009ed21c(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      puVar7 = *(undefined8 **)(param_2 + 2);
      puVar5 = *(undefined8 **)(param_1 + 2);
      puVar8 = puVar7 + (ulong)*param_2 * 5;
      do {
        puVar6 = puVar5 + 1;
        *puVar6 = 0;
        puVar5[2] = 0;
        *puVar5 = puVar6;
        plVar9 = (long *)*puVar7;
        while (plVar9 != puVar7 + 1) {
          FUN_009ed38c(puVar5,puVar6,plVar9 + 4,plVar9 + 4);
          plVar3 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            plVar3 = plVar9 + 2;
            bVar1 = *(long **)*plVar3 != plVar9;
            plVar9 = (long *)*plVar3;
            if (bVar1) {
              do {
                lVar4 = *plVar3;
                plVar3 = (long *)(lVar4 + 0x10);
                plVar9 = (long *)*plVar3;
              } while (*plVar9 != lVar4);
            }
          }
          else {
            do {
              plVar9 = plVar3;
              plVar3 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
        }
        thunk_FUN_00e7051c(puVar5 + 3,puVar7 + 3);
        puVar7 = puVar7 + 5;
        puVar5 = puVar5 + 5;
      } while (puVar7 != puVar8);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_00beb478(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    FUN_009ec250(param_1,1);
    FUN_009ed8a4(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      puVar3 = *(undefined4 **)(param_2 + 2);
      puVar4 = *(undefined4 **)(param_1 + 2);
      puVar1 = puVar3 + (ulong)*param_2 * 0x20;
      do {
        *puVar4 = *puVar3;
        FUN_008fcdb8(puVar4 + 2,puVar3 + 2);
        FUN_008fcdb8(puVar4 + 8,puVar3 + 8);
        FUN_008fcdb8(puVar4 + 0xe,puVar3 + 0xe);
        FUN_008fcdb8(puVar4 + 0x14,puVar3 + 0x14);
        FUN_008fcdb8(puVar4 + 0x1a,puVar3 + 0x1a);
        puVar3 = puVar3 + 0x20;
        puVar4 = puVar4 + 0x20;
      } while (puVar3 != puVar1);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_00beb548(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02805798;
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    operator_delete((void *)param_1[0x1a]);
  }
  if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
    operator_delete((void *)param_1[0x17]);
  }
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    operator_delete((void *)param_1[0x14]);
  }
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}




void FUN_00beb5fc(void *param_1)

{
  FUN_00beb548();
  operator_delete(param_1);
  return;
}




void FUN_00beb620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efcf0;
  if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
    operator_delete((void *)param_1[0x25]);
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete((void *)param_1[0x22]);
  }
  if ((void *)param_1[0x1f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f]);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  FUN_00beb548(param_1);
  return;
}




void FUN_00beb680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efcf0;
  if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
    operator_delete((void *)param_1[0x25]);
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete((void *)param_1[0x22]);
  }
  if ((void *)param_1[0x1f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f]);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  FUN_00beb548(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00beb6e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efd18;
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    operator_delete((void *)param_1[0x21]);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    operator_delete((void *)param_1[0x1e]);
  }
  FUN_00beb548(param_1);
  return;
}




void FUN_00beb738(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efd18;
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    operator_delete((void *)param_1[0x21]);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    operator_delete((void *)param_1[0x1e]);
  }
  FUN_00beb548(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00beb790(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027efd40;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00beb7d4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbeb7d8);
  (*pcVar1)();
}




void FUN_00beb7d8(uint *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    FUN_00beb82c(lVar1,lVar1 + (ulong)*param_1 * 0xb0);
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




void FUN_00beb82c(long param_1,long param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xb0) {
    if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x98));
    }
    if (*(void **)(param_1 + 0x78) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0x78));
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x60));
    }
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x48));
    }
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  return;
}




void FUN_00beb8c0(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1 + ((long)param_3 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00beb8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




void FUN_00beb8e4(float param_1,long param_2)

{
  *(float *)(param_2 + 0x728) = *(float *)(param_2 + 0x728) + param_1;
  FUN_00be99d8(param_2 + 0x178);
  return;
}




void FUN_00beb8fc(uint *param_1,uint param_2)

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




void FUN_00beb97c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1[1] < param_2) {
    puVar2 = operator_new__((ulong)param_2 * 0xb0);
    puVar4 = *(undefined4 **)(param_1 + 2);
    if (*param_1 == 0) {
      uVar3 = 0;
    }
    else {
      puVar5 = puVar4 + (ulong)*param_1 * 0x2c;
      puVar6 = puVar2;
      do {
        *puVar6 = *puVar4;
        FUN_008fcdb8(puVar6 + 2,puVar4 + 2);
        FUN_008fcdb8(puVar6 + 8,puVar4 + 8);
        FUN_008fcdb8(puVar6 + 0xe,puVar4 + 0xe);
        FUN_008fcdb8(puVar6 + 0x14,puVar4 + 0x14);
        puVar6[0x1a] = puVar4[0x1a];
        thunk_FUN_00e7051c(puVar6 + 0x1c,puVar4 + 0x1c);
        puVar6[0x20] = puVar4[0x20];
        FUN_008fcdb8(puVar6 + 0x22,puVar4 + 0x22);
        *(undefined8 *)((long)puVar6 + 0xa5) = *(undefined8 *)((long)puVar4 + 0xa5);
        puVar1 = (undefined8 *)(puVar4 + 0x28);
        puVar4 = puVar4 + 0x2c;
        *(undefined8 *)(puVar6 + 0x28) = *puVar1;
        puVar6 = puVar6 + 0x2c;
      } while (puVar4 != puVar5);
      puVar4 = *(undefined4 **)(param_1 + 2);
      uVar3 = (ulong)*param_1;
    }
    param_1[1] = param_2;
    FUN_00beb82c(puVar4,puVar4 + uVar3 * 0x2c);
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
    }
    *(undefined4 **)(param_1 + 2) = puVar2;
  }
  return;
}




void * FUN_00beba90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_009ed778(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined4 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_009ed724(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




void FUN_00bebb40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *local_1a0;
  undefined8 *local_190;
  byte local_118 [16];
  void *local_108;
  byte local_100 [16];
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined4 local_a0;
  byte local_98 [16];
  void *local_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  local_1a0 = param_2;
LAB_00bebe44:
  local_190 = local_1a0 + -0x16;
  puVar9 = param_1;
LAB_00bebe70:
  param_1 = puVar9;
  uVar8 = (long)local_1a0 - (long)param_1;
  if ((ulong)(((long)uVar8 >> 4) * 0x2e8ba2e8ba2e8ba3) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00bec8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01bbaf90 + *(int *)(&DAT_01bbaf90 + ((long)uVar8 >> 4) * -0x45d1745d1745d174)))
              ();
    return;
  }
  if ((long)uVar8 < 0x4d0) {
    FUN_00bee7d4(param_1,local_1a0,param_3);
    goto LAB_00becae4;
  }
  puVar9 = param_1 + (uVar8 / 0x160) * 0x16;
  if ((long)uVar8 < 0x2aed1) {
    iVar4 = FUN_00becb70(param_1,puVar9,local_190,param_3);
  }
  else {
    iVar4 = FUN_00bede0c(param_1,param_1 + (uVar8 / 0x2c0) * 0x16,puVar9,
                         puVar9 + (uVar8 / 0x2c0) * 0x16,local_190,param_3);
  }
  uVar8 = (*(code *)*param_3)(param_1,puVar9);
  puVar13 = local_190;
  puVar14 = local_1a0 + -0x2c;
  if ((uVar8 & 1) == 0) {
    do {
      puVar13 = puVar14;
      if (param_1 == puVar13) {
        puVar9 = param_1 + 0x16;
        uVar8 = (*(code *)*param_3)(param_1,local_190);
        if ((uVar8 & 1) != 0) goto LAB_00bec894;
        if (puVar9 == local_190) goto LAB_00becae4;
        puVar9 = param_1 + 0x2c;
        goto LAB_00bec670;
      }
      uVar8 = (*(code *)*param_3)(puVar13,puVar9);
      puVar14 = puVar13 + -0x16;
    } while ((uVar8 & 1) == 0);
    uVar1 = *(undefined4 *)param_1;
    FUN_008fcdb8(local_118,param_1 + 1);
    FUN_008fcdb8(local_100,param_1 + 4);
    FUN_008fcdb8(local_e8,param_1 + 7);
    FUN_008fcdb8(local_d0,param_1 + 10);
    local_b8 = *(undefined4 *)(param_1 + 0xd);
    thunk_FUN_00e7051c(&local_b0);
    local_a0 = *(undefined4 *)(param_1 + 0x10);
    FUN_008fcdb8(local_98);
    uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xa5) >> 0x18);
    uStack_80 = (undefined5)param_1[0x14];
    local_7b = (undefined3)((ulong)param_1[0x14] >> 0x28);
    *(undefined4 *)param_1 = *(undefined4 *)puVar13;
    FUN_008fce60(param_1 + 1);
    FUN_008fce60(param_1 + 4,puVar13 + 4);
    FUN_008fce60(param_1 + 7,puVar13 + 7);
    FUN_008fce60(param_1 + 10,puVar13 + 10);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(puVar13 + 0xd);
    FUN_00910394(param_1 + 0xe,puVar13 + 0xe);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar13 + 0x10);
    FUN_008fce60(param_1 + 0x11,puVar13 + 0x11);
    *(undefined8 *)((long)param_1 + 0xa5) = *(undefined8 *)((long)puVar13 + 0xa5);
    param_1[0x14] = puVar13[0x14];
    *(undefined4 *)puVar13 = uVar1;
    FUN_008fce60(puVar13 + 1,local_118);
    FUN_008fce60(puVar13 + 4,local_100);
    FUN_008fce60(puVar13 + 7,local_e8);
    FUN_008fce60(puVar13 + 10,local_d0);
    *(undefined4 *)(puVar13 + 0xd) = local_b8;
    FUN_00910394(puVar13 + 0xe,&local_b0);
    *(undefined4 *)(puVar13 + 0x10) = local_a0;
    FUN_008fce60(puVar13 + 0x11,local_98);
    *(ulong *)((long)puVar13 + 0xa5) = CONCAT53(uStack_78,local_7b);
    puVar13[0x14] = CONCAT35(local_7b,uStack_80);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_100[0] & 1) != 0) {
      operator_delete(local_f0);
    }
    if ((local_118[0] & 1) != 0) {
      operator_delete(local_108);
    }
    iVar4 = iVar4 + 1;
  }
  puVar14 = param_1 + 0x16;
  puVar15 = puVar14;
  puVar10 = puVar9;
  if (puVar14 < puVar13) {
    while( true ) {
      puVar9 = puVar10;
      puVar15 = puVar14 + -0x16;
      do {
        puVar10 = puVar15;
        puVar15 = puVar10 + 0x16;
        uVar8 = (*(code *)*param_3)(puVar15,puVar9);
      } while ((uVar8 & 1) != 0);
      puVar14 = puVar10 + 0x2c;
      puVar12 = puVar13 + 0x14;
      do {
        puVar11 = puVar12;
        puVar12 = puVar11 + -0x16;
        uVar8 = (*(code *)*param_3)(puVar11 + -0x2a,puVar9);
      } while ((uVar8 & 1) == 0);
      puVar13 = puVar11 + -0x2a;
      if (puVar13 < puVar15) break;
      uVar1 = *(undefined4 *)puVar15;
      FUN_008fcdb8(local_118,puVar10 + 0x17);
      FUN_008fcdb8(local_100,puVar10 + 0x1a);
      FUN_008fcdb8(local_e8,puVar10 + 0x1d);
      FUN_008fcdb8(local_d0,puVar10 + 0x20);
      local_b8 = *(undefined4 *)(puVar10 + 0x23);
      thunk_FUN_00e7051c(&local_b0,puVar10 + 0x24);
      local_a0 = *(undefined4 *)(puVar10 + 0x26);
      FUN_008fcdb8(local_98);
      uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)puVar10 + 0x155) >> 0x18);
      uStack_80 = (undefined5)puVar10[0x2a];
      local_7b = (undefined3)((ulong)puVar10[0x2a] >> 0x28);
      *(undefined4 *)puVar15 = *(undefined4 *)(puVar11 + -0x2a);
      FUN_008fce60(puVar10 + 0x17);
      FUN_008fce60(puVar10 + 0x1a,puVar11 + -0x26);
      FUN_008fce60(puVar10 + 0x1d,puVar11 + -0x23);
      FUN_008fce60(puVar10 + 0x20,puVar11 + -0x20);
      *(undefined4 *)(puVar10 + 0x23) = *(undefined4 *)(puVar11 + -0x1d);
      FUN_00910394(puVar10 + 0x24,puVar11 + -0x1c);
      *(undefined4 *)(puVar10 + 0x26) = *(undefined4 *)(puVar11 + -0x1a);
      FUN_008fce60(puVar10 + 0x27,puVar11 + -0x19);
      *(undefined8 *)((long)puVar10 + 0x155) = *(undefined8 *)((long)puVar11 + -0xab);
      puVar10[0x2a] = *puVar12;
      *(undefined4 *)(puVar11 + -0x2a) = uVar1;
      FUN_008fce60(puVar11 + -0x29,local_118);
      FUN_008fce60(puVar11 + -0x26,local_100);
      FUN_008fce60(puVar11 + -0x23,local_e8);
      FUN_008fce60(puVar11 + -0x20,local_d0);
      *(undefined4 *)(puVar11 + -0x1d) = local_b8;
      FUN_00910394(puVar11 + -0x1c,&local_b0);
      *(undefined4 *)(puVar11 + -0x1a) = local_a0;
      FUN_008fce60(puVar11 + -0x19,local_98);
      *(ulong *)((long)puVar11 + -0xab) = CONCAT53(uStack_78,local_7b);
      *puVar12 = CONCAT35(local_7b,uStack_80);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
        local_b0 = 0;
        local_a8 = (void *)0x0;
      }
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_100[0] & 1) != 0) {
        operator_delete(local_f0);
      }
      if ((local_118[0] & 1) != 0) {
        operator_delete(local_108);
      }
      iVar4 = iVar4 + 1;
      puVar10 = puVar13;
      if (puVar9 != puVar15) {
        puVar10 = puVar9;
      }
    }
  }
  if ((puVar15 != puVar9) && (uVar8 = (*(code *)*param_3)(puVar9,puVar15), (uVar8 & 1) != 0)) {
    uVar1 = *(undefined4 *)puVar15;
    FUN_008fcdb8(local_118,puVar15 + 1);
    FUN_008fcdb8(local_100,puVar15 + 4);
    FUN_008fcdb8(local_e8,puVar15 + 7);
    FUN_008fcdb8(local_d0,puVar15 + 10);
    local_b8 = *(undefined4 *)(puVar15 + 0xd);
    thunk_FUN_00e7051c(&local_b0,puVar15 + 0xe);
    local_a0 = *(undefined4 *)(puVar15 + 0x10);
    FUN_008fcdb8(local_98);
    uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)puVar15 + 0xa5) >> 0x18);
    uStack_80 = (undefined5)puVar15[0x14];
    local_7b = (undefined3)((ulong)puVar15[0x14] >> 0x28);
    *(undefined4 *)puVar15 = *(undefined4 *)puVar9;
    FUN_008fce60(puVar15 + 1,puVar9 + 1);
    FUN_008fce60(puVar15 + 4,puVar9 + 4);
    FUN_008fce60(puVar15 + 7,puVar9 + 7);
    FUN_008fce60(puVar15 + 10,puVar9 + 10);
    *(undefined4 *)(puVar15 + 0xd) = *(undefined4 *)(puVar9 + 0xd);
    FUN_00910394(puVar15 + 0xe,puVar9 + 0xe);
    *(undefined4 *)(puVar15 + 0x10) = *(undefined4 *)(puVar9 + 0x10);
    FUN_008fce60(puVar15 + 0x11,puVar9 + 0x11);
    *(undefined8 *)((long)puVar15 + 0xa5) = *(undefined8 *)((long)puVar9 + 0xa5);
    puVar15[0x14] = puVar9[0x14];
    *(undefined4 *)puVar9 = uVar1;
    FUN_008fce60(puVar9 + 1,local_118);
    FUN_008fce60(puVar9 + 4,local_100);
    FUN_008fce60(puVar9 + 7,local_e8);
    FUN_008fce60(puVar9 + 10,local_d0);
    *(undefined4 *)(puVar9 + 0xd) = local_b8;
    FUN_00910394(puVar9 + 0xe,&local_b0);
    *(undefined4 *)(puVar9 + 0x10) = local_a0;
    FUN_008fce60(puVar9 + 0x11,local_98);
    *(ulong *)((long)puVar9 + 0xa5) = CONCAT53(uStack_78,local_7b);
    puVar9[0x14] = CONCAT35(local_7b,uStack_80);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_100[0] & 1) != 0) {
      operator_delete(local_f0);
    }
    if ((local_118[0] & 1) != 0) {
      operator_delete(local_108);
    }
    iVar4 = iVar4 + 1;
  }
  if (iVar4 != 0) goto LAB_00bec5fc;
  uVar8 = FUN_00beeb08(param_1,puVar15,param_3);
  uVar5 = FUN_00beeb08(puVar15 + 0x16,local_1a0,param_3);
  if ((uVar5 & 1) == 0) goto code_r0x00bec5f8;
  bVar3 = (uVar8 & 1) == 0;
  if (bVar3) {
    local_1a0 = puVar15;
  }
  uVar6 = 1;
  if (bVar3) {
    uVar6 = 2;
  }
  goto LAB_00bebe04;
LAB_00bec670:
  uVar8 = (*(code *)*param_3)(param_1,puVar9 + -0x16);
  if ((uVar8 & 1) != 0) goto LAB_00bec698;
  puVar9 = puVar9 + 0x16;
  if (local_1a0 == puVar9) goto LAB_00becae4;
  goto LAB_00bec670;
LAB_00bec698:
  uVar1 = *(undefined4 *)(puVar9 + -0x16);
  FUN_008fcdb8(local_118,puVar9 + -0x15);
  FUN_008fcdb8(local_100,puVar9 + -0x12);
  FUN_008fcdb8(local_e8,puVar9 + -0xf);
  FUN_008fcdb8(local_d0,puVar9 + -0xc);
  local_b8 = *(undefined4 *)(puVar9 + -9);
  thunk_FUN_00e7051c(&local_b0);
  local_a0 = *(undefined4 *)(puVar9 + -6);
  FUN_008fcdb8(local_98);
  uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)puVar9 - 0xb) >> 0x18);
  uStack_80 = (undefined5)puVar9[-2];
  local_7b = (undefined3)((ulong)puVar9[-2] >> 0x28);
  *(undefined4 *)(puVar9 + -0x16) = *(undefined4 *)(local_1a0 + -0x16);
  FUN_008fce60(puVar9 + -0x15,local_1a0 + -0x15);
  FUN_008fce60(puVar9 + -0x12,local_1a0 + -0x12);
  FUN_008fce60(puVar9 + -0xf,local_1a0 + -0xf);
  FUN_008fce60(puVar9 + -0xc,local_1a0 + -0xc);
  *(undefined4 *)(puVar9 + -9) = *(undefined4 *)(local_1a0 + -9);
  FUN_00910394(puVar9 + -8,local_1a0 + -8);
  *(undefined4 *)(puVar9 + -6) = *(undefined4 *)(local_1a0 + -6);
  FUN_008fce60(puVar9 + -5,local_1a0 + -5);
  *(undefined8 *)((long)puVar9 - 0xb) = *(undefined8 *)((long)local_1a0 - 0xb);
  puVar9[-2] = local_1a0[-2];
  *(undefined4 *)(local_1a0 + -0x16) = uVar1;
  FUN_008fce60(local_1a0 + -0x15,local_118);
  FUN_008fce60(local_1a0 + -0x12,local_100);
  FUN_008fce60(local_1a0 + -0xf,local_e8);
  FUN_008fce60(local_1a0 + -0xc,local_d0);
  *(undefined4 *)(local_1a0 + -9) = local_b8;
  FUN_00910394(local_1a0 + -8,&local_b0);
  *(undefined4 *)(local_1a0 + -6) = local_a0;
  FUN_008fce60(local_1a0 + -5,local_98);
  *(ulong *)((long)local_1a0 - 0xb) = CONCAT53(uStack_78,local_7b);
  local_1a0[-2] = CONCAT35(local_7b,uStack_80);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  if ((local_118[0] & 1) != 0) {
    operator_delete(local_108);
  }
LAB_00bec894:
  if (puVar9 == local_190) {
LAB_00becae4:
    if (*(long *)(lVar2 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  while( true ) {
    puVar13 = puVar9 + -0x16;
    do {
      puVar14 = puVar13;
      puVar13 = puVar14 + 0x16;
      uVar8 = (*(code *)*param_3)(param_1,puVar13);
    } while ((uVar8 & 1) == 0);
    puVar9 = puVar14 + 0x2c;
    puVar15 = local_190 + 0x14;
    do {
      puVar10 = puVar15;
      puVar15 = puVar10 + -0x16;
      uVar8 = (*(code *)*param_3)(param_1,puVar10 + -0x2a);
    } while ((uVar8 & 1) != 0);
    local_190 = puVar10 + -0x2a;
    if (local_190 <= puVar13) break;
    uVar1 = *(undefined4 *)puVar13;
    FUN_008fcdb8(local_118,puVar14 + 0x17);
    FUN_008fcdb8(local_100,puVar14 + 0x1a);
    FUN_008fcdb8(local_e8,puVar14 + 0x1d);
    FUN_008fcdb8(local_d0,puVar14 + 0x20);
    local_b8 = *(undefined4 *)(puVar14 + 0x23);
    thunk_FUN_00e7051c(&local_b0,puVar14 + 0x24);
    local_a0 = *(undefined4 *)(puVar14 + 0x26);
    FUN_008fcdb8(local_98);
    uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)puVar14 + 0x155) >> 0x18);
    uStack_80 = (undefined5)puVar14[0x2a];
    local_7b = (undefined3)((ulong)puVar14[0x2a] >> 0x28);
    *(undefined4 *)puVar13 = *(undefined4 *)(puVar10 + -0x2a);
    FUN_008fce60(puVar14 + 0x17,puVar10 + -0x29);
    FUN_008fce60(puVar14 + 0x1a,puVar10 + -0x26);
    FUN_008fce60(puVar14 + 0x1d,puVar10 + -0x23);
    FUN_008fce60(puVar14 + 0x20,puVar10 + -0x20);
    *(undefined4 *)(puVar14 + 0x23) = *(undefined4 *)(puVar10 + -0x1d);
    FUN_00910394(puVar14 + 0x24,puVar10 + -0x1c);
    *(undefined4 *)(puVar14 + 0x26) = *(undefined4 *)(puVar10 + -0x1a);
    FUN_008fce60(puVar14 + 0x27,puVar10 + -0x19);
    *(undefined8 *)((long)puVar14 + 0x155) = *(undefined8 *)((long)puVar10 + -0xab);
    puVar14[0x2a] = *puVar15;
    *(undefined4 *)(puVar10 + -0x2a) = uVar1;
    FUN_008fce60(puVar10 + -0x29,local_118);
    FUN_008fce60(puVar10 + -0x26,local_100);
    FUN_008fce60(puVar10 + -0x23,local_e8);
    FUN_008fce60(puVar10 + -0x20,local_d0);
    *(undefined4 *)(puVar10 + -0x1d) = local_b8;
    FUN_00910394(puVar10 + -0x1c,&local_b0);
    *(undefined4 *)(puVar10 + -0x1a) = local_a0;
    FUN_008fce60(puVar10 + -0x19,local_98);
    *(ulong *)((long)puVar10 + -0xab) = CONCAT53(uStack_78,local_7b);
    *puVar15 = CONCAT35(local_7b,uStack_80);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_100[0] & 1) != 0) {
      operator_delete(local_f0);
    }
    if ((local_118[0] & 1) != 0) {
      operator_delete(local_108);
    }
  }
  uVar6 = 4;
  param_1 = puVar13;
LAB_00bebe04:
  if ((4 < uVar6) || ((1 << (ulong)uVar6 & 0x15U) == 0)) goto LAB_00becae4;
  goto LAB_00bebe44;
code_r0x00bec5f8:
  puVar9 = puVar15 + 0x16;
  if ((uVar8 & 1) == 0) {
LAB_00bec5fc:
    if (((long)local_1a0 - (long)puVar15 >> 4) * 0x2e8ba2e8ba2e8ba3 <=
        ((long)puVar15 - (long)param_1 >> 4) * 0x2e8ba2e8ba2e8ba3) {
      FUN_00bebb40(puVar15 + 0x16,local_1a0,param_3);
      local_1a0 = puVar15;
      goto LAB_00bebe44;
    }
    FUN_00bebb40(param_1,puVar15,param_3);
    puVar9 = puVar15 + 0x16;
  }
  goto LAB_00bebe70;
}

