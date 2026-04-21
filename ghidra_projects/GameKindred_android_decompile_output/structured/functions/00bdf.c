// functions/00bdf — 33 functions
#include "libGameKindred.h"




void FUN_00bdf038(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbdf03c);
  (*pcVar1)();
}




void FUN_00bdf03c(undefined8 *param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 uVar10;
  long lVar11;
  byte *__s2;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  byte local_70 [16];
  void *local_60;
  ulong local_58;
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  *param_1 = &PTR_FUN_027ee750;
  pvVar6 = operator_new(200);
  FUN_00c4ae58();
  param_1[1] = pvVar6;
  *(undefined8 **)((long)pvVar6 + 0xb8) = param_1;
  puVar12 = param_1 + 2;
  *puVar12 = &PTR_FUN_027ee728;
  *param_1 = &PTR_FUN_027ee700;
  param_1[3] = 0;
  local_58 = 0;
  local_50 = 0;
  uVar7 = FUN_0096bfcc(&local_58);
  if ((uVar7 & 1) == 0) goto LAB_00bdf2a8;
  if ((int)local_58 != 0) {
    lVar14 = local_50 + (local_58 & 0xffffffff) * 0x78;
    lVar11 = local_50;
    do {
      pbVar8 = (byte *)FUN_00b2cdb0();
      bVar2 = *(byte *)(lVar11 + 0x18);
      bVar3 = *pbVar8;
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar11 + 0x20);
      }
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar8 + 8);
      }
      if (__n == sVar1) {
        pvVar6 = *(void **)(lVar11 + 0x28);
        __s2 = *(byte **)(pbVar8 + 0x10);
        if ((bVar2 & 1) == 0) {
          pvVar6 = (void *)(lVar11 + 0x19);
        }
        if ((bVar3 & 1) == 0) {
          __s2 = pbVar8 + 1;
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
LAB_00bdf170:
            if (*(uint *)(lVar11 + 8) != 0) {
              lVar14 = *(long *)(lVar11 + 0x10);
              lVar11 = (ulong)*(uint *)(lVar11 + 8) * 0x598;
              goto LAB_00bdf184;
            }
            break;
          }
          uVar7 = 0;
          while (*(byte *)(lVar11 + uVar7 + 0x19) == __s2[uVar7]) {
            uVar7 = uVar7 + 1;
            if (bVar2 >> 1 == uVar7) goto LAB_00bdf170;
          }
        }
        else if ((__n == 0) || (iVar5 = memcmp(pvVar6,__s2,__n), iVar5 == 0)) goto LAB_00bdf170;
      }
      lVar11 = lVar11 + 0x78;
    } while (lVar11 != lVar14);
  }
  goto LAB_00bdf200;
  while( true ) {
    lVar11 = lVar11 + -0x598;
    lVar14 = lVar14 + 0x598;
    if (lVar11 == 0) break;
LAB_00bdf184:
    if (*(char *)(lVar14 + 0x591) != '\0') {
      plVar13 = operator_new(0x168);
      FUN_00bdb170();
      param_1[3] = plVar13;
      FUN_0096bb84(local_70);
      lVar11 = FUN_00e85318(0);
      (**(code **)(*plVar13 + 0x30))(plVar13,local_70,lVar14,0,lVar11 + 1);
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      FUN_00c4aecc(param_1[1],*(undefined8 *)(param_1[3] + 8));
      break;
    }
  }
LAB_00bdf200:
  if (param_1[3] != 0) {
    lVar11 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))();
    lVar14 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))((long *)(param_1[3] + 0x10));
    FUN_0096bce8(lVar11 + 0x600,puVar12,lVar14 + 0x178);
    puVar9 = (uint *)(**(code **)(*(long *)(param_1[3] + 0x10) + 0x28))();
    if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
      plVar13 = *(long **)(puVar9 + 2);
      lVar11 = (ulong)*puVar9 << 3;
      do {
        lVar14 = *plVar13;
        if (lVar14 != 0) {
          pbVar8 = (byte *)FUN_00af6c04(lVar14);
          uVar7 = (ulong)(*pbVar8 >> 1);
          if ((*pbVar8 & 1) != 0) {
            uVar7 = *(ulong *)(pbVar8 + 8);
          }
          if (uVar7 != 0) {
            uVar10 = FUN_00af6c04(lVar14);
            FUN_0096bce8(uVar10,puVar12,lVar14);
          }
        }
        lVar11 = lVar11 + -8;
        plVar13 = plVar13 + 1;
      } while (lVar11 != 0);
    }
  }
LAB_00bdf2a8:
  FUN_00969c70(&local_58,1);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bdf2e0(void)

{
  return;
}




void FUN_00bdf2e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee700;
  param_1[2] = &PTR_FUN_027ee728;
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x28))();
  }
  param_1[2] = &PTR_FUN_027e0a68;
  param_1[3] = 0;
  FUN_0096bd60(param_1 + 2);
  *param_1 = &PTR_FUN_027ee750;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdf370(long param_1)

{
  FUN_00bdf2e4(param_1 + -0x10);
  return;
}




void FUN_00bdf378(void *param_1)

{
  FUN_00bdf2e4();
  operator_delete(param_1);
  return;
}




void FUN_00bdf39c(long param_1)

{
  FUN_00bdf2e4((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bdf3c4(long param_1)

{
  undefined8 in_x4;
  
  FUN_00af5c10(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00bdf3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 8) + 0x90))();
  return;
}




void FUN_00bdf400(long param_1)

{
  undefined8 in_x4;
  
  FUN_00af5c10(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00bdf438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 8) + 8) + 0x90))();
  return;
}




void FUN_00bdf43c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee750;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdf480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee750;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bdf4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong local_68 [2];
  void *local_58;
  ulong auStack_50 [2];
  void *pvStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvStack_40 = (void *)0x0;
  auStack_50[1] = 0;
  auStack_50[0] = 0;
  local_58 = (void *)0x0;
  local_68[1] = 0;
  local_68[0] = 0;
  FUN_008fce60(local_68);
  FUN_008fce60(auStack_50,param_3);
  FUN_00bdf56c(param_1 + 0x20,local_68);
  if ((auStack_50[0] & 1) != 0) {
    operator_delete(pvStack_40);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdf56c(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_00bdf5d8(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x20);
  }
  return;
}




void FUN_00bdf630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee770;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR___cxa_pure_virtual_027ee7a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdf6a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee770;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR___cxa_pure_virtual_027ee7a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bdf718(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ee7a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdf75c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbdf760);
  (*pcVar1)();
}




void FUN_00bdf760(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eebb0;
  pvVar1 = operator_new(0x3258);
  FUN_00c4f840();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0x1a0) = param_1;
  FUN_00948cd8(param_1 + 2);
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_027ee7d0;
  param_1[2] = &PTR_FUN_027ee818;
  param_1[5] = 0;
  return;
}




void FUN_00bdf7cc(undefined8 *param_1)

{
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027eebb0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdf818(long param_1)

{
  FUN_00948d58();
  *(undefined ***)(param_1 + -0x10) = &PTR___cxa_pure_virtual_027eebb0;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_00bdf860(undefined8 *param_1)

{
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027eebb0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bdf8ac(long param_1)

{
  FUN_00bdf860(param_1 + -0x10);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00bdf8b4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 **ppuVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 *puStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulong local_178;
  long local_170;
  ulong local_168;
  void *local_160;
  void *local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  byte local_138 [16];
  void *local_128;
  byte local_120 [16];
  void *local_110;
  undefined1 auStack_108 [16];
  undefined4 local_f8;
  ulong local_f0 [2];
  void *local_e0;
  ulong uStack_d8;
  void *local_d0;
  void *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  undefined1 auStack_88 [16];
  undefined4 local_78;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  thunk_FUN_008fa604();
  local_178 = 0;
  local_170 = 0;
  FUN_0096be94(&local_178);
  puStack_190 = &local_188;
  local_1a8 = &local_1a0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  local_1a0 = 0;
  if ((int)local_178 != 0) {
    uVar11 = 0;
    do {
      local_1b8 = 0;
      uStack_1b0 = 0;
      lVar2 = local_170 + uVar11 * 0x80;
      if (*(uint *)(lVar2 + 0x68) != 0) {
        lVar10 = 0;
        uVar9 = 0;
        plVar1 = (long *)(lVar2 + 0x70);
        do {
          uStack_d8 = 0;
          local_e0 = (void *)0x0;
          local_c8 = (void *)0x0;
          local_d0 = (void *)0x0;
          local_f0[1] = 0;
          local_f0[0] = 0;
          FUN_008fce60(local_f0,*plVar1 + lVar10);
          FUN_008fce60(&uStack_d8,*plVar1 + lVar10 + 0x18);
          local_c0 = *(undefined4 *)(*plVar1 + lVar10 + 0x30);
          FUN_00bdfc68(&local_1b8,local_f0);
          if ((uStack_d8 & 1) != 0) {
            operator_delete(local_c8);
          }
          if ((local_f0[0] & 1) != 0) {
            operator_delete(local_e0);
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0x38;
        } while (uVar9 < *(uint *)(lVar2 + 0x68));
      }
      ppuVar3 = &local_1a8;
      if (*(char *)(lVar2 + 0x7c) != '\0') {
        ppuVar3 = &puStack_190;
      }
      FUN_00bdfd10(&local_168,lVar2 + 8,lVar2 + 0x18,lVar2 + 0x28,lVar2 + 0x38,lVar2 + 0x50,0,
                   &local_1b8);
      local_f0[0] = CONCAT44(local_f0[0]._4_4_,*(undefined4 *)(lVar2 + 0x78));
      thunk_FUN_00e7051c(local_f0 + 1,&local_168);
      thunk_FUN_00e7051c(&uStack_d8,&local_158);
      thunk_FUN_00e7051c(&local_c8,&local_148);
      FUN_008fcdb8(local_b8,local_138);
      FUN_008fcdb8(local_a0,local_120);
      FUN_00be01b0(auStack_88,auStack_108);
      local_78 = local_f8;
      FUN_00be04ac(ppuVar3,local_f0,local_f0);
      FUN_00be03d8(auStack_88,1);
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
        operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
        local_c8 = (void *)0x0;
        uStack_bc = 0;
        local_c0 = 0;
      }
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        uStack_d8 = 0;
        local_d0 = (void *)0x0;
      }
      if (local_e0 != (void *)0x0) {
        operator_delete__(local_e0);
        local_f0[1] = 0;
        local_e0 = (void *)0x0;
      }
      FUN_00be03d8(auStack_108,1);
      if ((local_120[0] & 1) != 0) {
        operator_delete(local_110);
      }
      if ((local_138[0] & 1) != 0) {
        operator_delete(local_128);
      }
      if (local_140 != (void *)0x0) {
        operator_delete__(local_140);
        local_148 = 0;
        local_140 = (void *)0x0;
      }
      if (local_150 != (void *)0x0) {
        operator_delete__(local_150);
        local_158 = (void *)0x0;
        local_150 = (void *)0x0;
      }
      if (local_160 != (void *)0x0) {
        operator_delete__(local_160);
        local_168 = 0;
        local_160 = (void *)0x0;
      }
      FUN_00be03d8(&local_1b8,1);
      uVar11 = uVar11 + 1;
    } while (uVar11 < (local_178 & 0xffffffff));
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_008fa54c(local_f0,"3_9_BATTLEPASS_BUYIN");
  uVar6 = FUN_009580b8();
  uVar5 = FUN_00961758(uVar6,"__3_9_BATTLEPASS_BUYIN__");
  FUN_008fa54c(&local_168,"ASCENSION_NEXT_LEVEL_SUNLIGHT_GOLD_150");
  FUN_00c4fa08(uVar8,100,&puStack_190,&local_1a8,local_f0,uVar5 & 1,&local_168);
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  FUN_00be0334(&local_1a8,local_1a0);
  FUN_00be0334(&puStack_190,local_188);
  FUN_0097b6e8(&local_178,1);
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdfc68(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00be023c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_008fcdb8(lVar4 + -0x38,param_2);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_00bdfd10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  thunk_FUN_00e7051c();
  thunk_FUN_00e7051c(param_1 + 0x10,param_3);
  thunk_FUN_00e7051c(param_1 + 0x20,param_4);
  FUN_008fcdb8(param_1 + 0x30,param_5);
  FUN_008fcdb8(param_1 + 0x48,param_6);
  FUN_00be01b0(param_1 + 0x60,param_8);
  *(undefined4 *)(param_1 + 0x70) = param_7;
  return;
}




void thunk_FUN_00bdfda4(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  lVar7 = FUN_008fc920();
  lVar8 = FUN_008fc910();
  if ((lVar7 != 0) && (lVar8 != 0)) {
    uVar9 = FUN_00cb013c();
    if ((uVar9 & 1) != 0) {
      FUN_00c4fbec(*(undefined8 *)(param_1 + 8));
    }
    uVar5 = 0;
    uVar4 = 0;
    uVar11 = 1;
    do {
      uVar3 = FUN_009ee644(lVar8,1);
      if (uVar3 < uVar11) {
        uVar12 = 1;
        if (uVar11 <= *(uint *)(lVar7 + 0x60)) {
          uVar12 = 2;
        }
        if (((uVar4 & 1) == 0 && uVar11 <= *(uint *)(lVar7 + 0x60)) &&
           (uVar4 = FUN_00c4fafc(*(undefined8 *)(param_1 + 8),uVar11,1,uVar12), uVar12 = 3,
           (uVar4 & 1) == 0)) {
          uVar12 = 4;
        }
      }
      else {
        uVar12 = 4;
      }
      FUN_00c4fb2c(*(undefined8 *)(param_1 + 8),uVar11,1,uVar12);
      uVar10 = FUN_009580b8();
      uVar9 = FUN_00961758(uVar10,"__3_9_BATTLEPASS_BUYIN__");
      if ((uVar9 & 1) == 0) {
        uVar10 = *(undefined8 *)(param_1 + 8);
        uVar12 = 0;
      }
      else {
        uVar3 = FUN_009ee644(lVar8,0);
        if (uVar3 < uVar11) {
          uVar12 = 1;
          if (uVar11 <= *(uint *)(lVar7 + 0x60)) {
            uVar12 = 2;
          }
          if (((uVar5 & 1) == 0 && uVar11 <= *(uint *)(lVar7 + 0x60)) &&
             (uVar5 = FUN_00c4fafc(*(undefined8 *)(param_1 + 8),uVar11,0,uVar12), uVar12 = 3,
             (uVar5 & 1) == 0)) {
            uVar12 = 4;
          }
        }
        else {
          uVar12 = 4;
        }
        uVar10 = *(undefined8 *)(param_1 + 8);
      }
      FUN_00c4fb2c(uVar10,uVar11,0,uVar12);
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x65);
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar12 = *(undefined4 *)(lVar7 + 0x60);
    uVar1 = *(undefined4 *)(lVar7 + 100);
    uVar2 = *(undefined4 *)(lVar7 + 0x68);
    uVar6 = FUN_009ee38c(lVar8);
    FUN_00c4fac8(uVar10,uVar12,uVar1,uVar2,uVar6);
    return;
  }
  return;
}




void FUN_00bdfda4(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  lVar7 = FUN_008fc920();
  lVar8 = FUN_008fc910();
  if ((lVar7 != 0) && (lVar8 != 0)) {
    uVar9 = FUN_00cb013c();
    if ((uVar9 & 1) != 0) {
      FUN_00c4fbec(*(undefined8 *)(param_1 + 8));
    }
    uVar5 = 0;
    uVar4 = 0;
    uVar11 = 1;
    do {
      uVar3 = FUN_009ee644(lVar8,1);
      if (uVar3 < uVar11) {
        uVar12 = 1;
        if (uVar11 <= *(uint *)(lVar7 + 0x60)) {
          uVar12 = 2;
        }
        if (((uVar4 & 1) == 0 && uVar11 <= *(uint *)(lVar7 + 0x60)) &&
           (uVar4 = FUN_00c4fafc(*(undefined8 *)(param_1 + 8),uVar11,1,uVar12), uVar12 = 3,
           (uVar4 & 1) == 0)) {
          uVar12 = 4;
        }
      }
      else {
        uVar12 = 4;
      }
      FUN_00c4fb2c(*(undefined8 *)(param_1 + 8),uVar11,1,uVar12);
      uVar10 = FUN_009580b8();
      uVar9 = FUN_00961758(uVar10,"__3_9_BATTLEPASS_BUYIN__");
      if ((uVar9 & 1) == 0) {
        uVar10 = *(undefined8 *)(param_1 + 8);
        uVar12 = 0;
      }
      else {
        uVar3 = FUN_009ee644(lVar8,0);
        if (uVar3 < uVar11) {
          uVar12 = 1;
          if (uVar11 <= *(uint *)(lVar7 + 0x60)) {
            uVar12 = 2;
          }
          if (((uVar5 & 1) == 0 && uVar11 <= *(uint *)(lVar7 + 0x60)) &&
             (uVar5 = FUN_00c4fafc(*(undefined8 *)(param_1 + 8),uVar11,0,uVar12), uVar12 = 3,
             (uVar5 & 1) == 0)) {
            uVar12 = 4;
          }
        }
        else {
          uVar12 = 4;
        }
        uVar10 = *(undefined8 *)(param_1 + 8);
      }
      FUN_00c4fb2c(uVar10,uVar11,0,uVar12);
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x65);
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar12 = *(undefined4 *)(lVar7 + 0x60);
    uVar1 = *(undefined4 *)(lVar7 + 100);
    uVar2 = *(undefined4 *)(lVar7 + 0x68);
    uVar6 = FUN_009ee38c(lVar8);
    FUN_00c4fac8(uVar10,uVar12,uVar1,uVar2,uVar6);
    return;
  }
  return;
}




void FUN_00bdff58(long param_1)

{
  FUN_00bdfda4(param_1 + -0x10);
  return;
}




void FUN_00bdff60(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_009580b8();
  uVar1 = FUN_00961758(uVar2,"__3_9_BATTLEPASS_BUYIN__");
  FUN_00c4fbc8(uVar3,uVar1 & 1);
  FUN_00bdfda4(param_1);
  return;
}




void FUN_00bdffa0(long param_1)

{
  FUN_00bdff60(param_1 + -0x10);
  return;
}




void FUN_00bdffa8(undefined8 param_1,undefined4 param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00cb0050(param_3 & 1);
  if ((uVar1 & 1) != 0) {
    FUN_00cb00a4(param_3 & 1,param_2,FUN_00bdfff8,FUN_00be007c);
    return;
  }
  return;
}




void FUN_00bdfff8(undefined8 param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"rankUpRewards");
  FUN_00cab60c(0,0,0x3f99999a,param_1,local_40,1);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

