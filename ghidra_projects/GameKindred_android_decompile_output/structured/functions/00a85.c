// functions/00a85 — 27 functions
#include "libGameKindred.h"




void FUN_00a85034(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00d66d28(*param_2);
  lVar2 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312e4a8) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312eb80) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_009b0070(lVar2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_009b0048(lVar2,*(undefined4 *)(param_1 + 0x14));
  return;
}




void FUN_00a850d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312e4a8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312eb80) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_009b0048(lVar1,*(undefined4 *)(param_1 + 0x10));
  return;
}




void FUN_00a8515c(uint param_1)

{
  FUN_009affb0(param_1 & 1);
  return;
}




void FUN_00a85174(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00a85198(void)

{
  return;
}




void FUN_00a851a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cf4f8;
  param_1[1] = 0;
  memset(param_1 + 2,0,0xac);
  return;
}




void FUN_00a851d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00a851dc(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = uVar1 + 1;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x18) = param_2;
  return;
}




void FUN_00a851f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar6 = 0x811c9dc5;
  uVar3 = FUN_01985d44(*param_2,DAT_02e3efa8);
  FUN_009de2c0(uVar3,*(undefined8 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar7 = 0;
    do {
      pbVar4 = *(byte **)(param_1 + uVar7 * 8 + 0x18);
      if (pbVar4 == (byte *)0x0) {
        local_50[0] = 0;
      }
      else {
        local_50[0] = 0x811c9dc5;
        if (*pbVar4 != 0) {
          local_50[0] = 0x811c9dc5;
          uVar5 = (uint)*pbVar4;
          do {
            pbVar4 = pbVar4 + 1;
            local_50[0] = (local_50[0] ^ uVar5) * 0x1000193;
            uVar5 = (uint)*pbVar4;
          } while (*pbVar4 != 0);
        }
      }
      uVar2 = FUN_00a8de64();
      FUN_009de304(uVar3,local_50,uVar2);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0xb8));
  }
  pbVar4 = *(byte **)(param_1 + 0x18);
  if (pbVar4 == (byte *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar5 = (uint)*pbVar4;
    if (*pbVar4 != 0) {
      do {
        pbVar4 = pbVar4 + 1;
        uVar6 = (uVar6 ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar4;
      } while (*pbVar4 != 0);
    }
  }
  local_50[0] = uVar6;
  FUN_009de4c0(uVar3,local_50);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a8532c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_2 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3efa8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_009de640();
  return;
}




void FUN_00a85364(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027cf550;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00a85380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}




void FUN_00a8538c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00a85394(long param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x20);
  }
  else {
    lVar6 = *param_2;
    puVar4 = auStack_c8;
    uVar2 = FUN_00e6a474(lVar5);
    uVar2 = FUN_0091ed5c(lVar5,uVar2,0x12345678);
    puVar3 = (undefined4 *)
             (**(code **)(*(long *)(lVar6 + 0x68) + 0x18))((long *)(lVar6 + 0x68),uVar2);
    FUN_00e6a93c(auStack_c8,0x80,"%s-%d",*(undefined8 *)(param_1 + 0x20),*puVar3);
  }
  FUN_00907848(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),puVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a8545c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d66d28(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_0312e4a8) break;
    plVar2 = (long *)plVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x00a854ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x160))(plVar2,1);
  return;
}




void FUN_00a854b0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d66d28(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_0312e4a8) break;
    plVar2 = (long *)plVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x00a85500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x160))(plVar2,0);
  return;
}




void FUN_00a85504(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d66d28(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_0312e4a8) break;
    plVar2 = (long *)plVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x00a85554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x168))(plVar2,1);
  return;
}




void FUN_00a85558(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d66d28(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_0312e4a8) break;
    plVar2 = (long *)plVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x00a855a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x168))(plVar2,0);
  return;
}




void FUN_00a855ac(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312e4a8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_009ad494(lVar1,1);
  return;
}




void FUN_00a855f8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312e4a8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_009ad494(lVar1,0);
  return;
}




void FUN_00a85644(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00cedce4();
  uVar1 = FUN_00d9e390();
  uVar2 = FUN_00d66d28(*param_2);
  FUN_00d5e790(uVar1,uVar2);
  return;
}




void FUN_00a85680(void)

{
  return;
}




void FUN_00a85694(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_60 [16];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00948cd8();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_027cf690;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0099ceac(param_1 + 9,"INVENTORYCHEST",1);
  local_48 = 0;
  uStack_40 = 0;
  FUN_008fa54c(local_60,"chest");
  FUN_0096204c(&local_48,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_008fa54c(local_60,"key");
  FUN_0096204c(&local_48,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  uVar2 = FUN_009580b8();
  FUN_0095f0e8(uVar2,&local_48);
  FUN_0099cf94(param_1 + 9,0);
  FUN_00951534(&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a85798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cf690;
  FUN_00a85804();
  FUN_0099cedc(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00948d58(param_1);
  return;
}




void FUN_00a85804(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      pvVar4 = *(void **)(*(long *)(param_1 + 0x30) + lVar6);
      if (pvVar4 == (void *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar7 * 8);
      }
      else {
        FUN_00a87a10(pvVar4);
        operator_delete(pvVar4);
        uVar2 = (ulong)*(uint *)(param_1 + 0x28);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
      *puVar3 = 0;
    } while (uVar7 < uVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    lVar6 = 0;
    uVar2 = 0;
    do {
      pbVar5 = *(byte **)(*(long *)(param_1 + 0x40) + lVar6);
      if (pbVar5 == (byte *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x40) + uVar2 * 8);
      }
      else {
        if ((pbVar5[0x30] & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + 0x40));
        }
        if ((pbVar5[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + 0x28));
        }
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + 0x10));
        }
        operator_delete(pbVar5);
        uVar1 = *(uint *)(param_1 + 0x38);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar6);
      }
      uVar2 = uVar2 + 1;
      lVar6 = lVar6 + 8;
      *puVar3 = 0;
    } while (uVar2 < uVar1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}




void FUN_00a85910(void *param_1)

{
  FUN_00a85798();
  operator_delete(param_1);
  return;
}




void FUN_00a85934(long param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 local_36c;
  byte local_360 [16];
  void *local_350;
  byte local_348 [16];
  void *local_338;
  byte local_330 [16];
  void *local_320;
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [16];
  byte local_2f8 [16];
  void *local_2e8;
  byte local_2e0 [16];
  void *local_2d0;
  byte local_2c8 [16];
  void *local_2b8;
  byte local_2b0 [16];
  void *local_2a0;
  byte local_298 [16];
  void *local_288;
  byte local_280 [16];
  void *local_270;
  byte local_268 [8];
  ulong local_260;
  void *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  byte local_230 [16];
  void *local_220;
  byte local_218 [16];
  void *local_208;
  byte local_200 [16];
  void *local_1f0;
  byte local_1e8 [16];
  void *local_1d8;
  byte local_1d0 [16];
  void *local_1c0;
  byte local_1b8 [16];
  void *local_1a8;
  undefined8 *local_1a0;
  ulong local_198;
  int local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 local_178;
  void *local_170;
  void *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  int local_148;
  undefined8 local_140;
  undefined8 *local_138;
  ulong local_130;
  int local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 local_110;
  void *local_108;
  void *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  int local_e0;
  undefined8 local_d8;
  ulong local_d0 [2];
  void *local_c0;
  undefined4 local_b8;
  char *local_b0;
  char *pcStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_00a85804();
  local_130 = 0;
  local_138 = (undefined8 *)0x0;
  local_128 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = (void *)0x0;
  local_108 = (void *)0x0;
  local_110 = 0;
  local_e8 = 0x400;
  local_e0 = 0;
  local_d8 = 0;
  local_120 = operator_new(0x28);
  local_120[3] = 0;
  local_120[4] = 0;
  local_120[1] = 0x10000;
  local_120[2] = 0;
  *local_120 = 0;
  local_198 = 0;
  local_1a0 = (undefined8 *)0x0;
  local_190 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = (void *)0x0;
  local_170 = (void *)0x0;
  local_178 = 0;
  local_150 = 0x400;
  local_148 = 0;
  local_140 = 0;
  local_118 = local_120;
  local_188 = operator_new(0x28);
  *local_188 = 0;
  local_188[1] = 0x10000;
  local_188[3] = 0;
  local_188[4] = 0;
  local_188[2] = 0;
  local_180 = local_188;
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar14 = 0;
    uVar18 = 0;
    do {
      pbVar1 = (byte *)(*(long *)(param_2 + 0x30) + lVar14);
      uVar16 = (ulong)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        uVar16 = *(ulong *)(pbVar1 + 8);
      }
      if ((uVar16 == 5) && (iVar5 = FUN_0090d610(pbVar1,0,0xffffffffffffffff,"chest",5), iVar5 == 0)
         ) {
        lVar10 = *(long *)(param_2 + 0x30) + lVar14;
        if ((*(byte *)(lVar10 + 0x18) & 1) == 0) {
          local_b0 = (char *)(lVar10 + 0x19);
        }
        else {
          local_b0 = *(char **)(lVar10 + 0x28);
        }
        pcStack_a8 = local_b0;
        FUN_008fd344(&local_138,&local_b0);
      }
      pbVar1 = (byte *)(*(long *)(param_2 + 0x30) + lVar14);
      uVar16 = (ulong)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        uVar16 = *(ulong *)(pbVar1 + 8);
      }
      if ((uVar16 == 3) && (iVar5 = FUN_0090d610(pbVar1,0,0xffffffffffffffff,"key",3), iVar5 == 0))
      {
        lVar10 = *(long *)(param_2 + 0x30) + lVar14;
        if ((*(byte *)(lVar10 + 0x18) & 1) == 0) {
          local_b0 = (char *)(lVar10 + 0x19);
        }
        else {
          local_b0 = *(char **)(lVar10 + 0x28);
        }
        pcStack_a8 = local_b0;
        FUN_008fd344(&local_1a0,&local_b0);
      }
      uVar18 = uVar18 + 1;
      lVar14 = lVar14 + 0x30;
    } while (uVar18 < *(uint *)(param_2 + 0x28));
    if (local_e0 != 0) goto LAB_00a86a10;
  }
  if (local_128 == 3) {
    if ((int)local_130 != 0) {
      puVar17 = local_138;
      do {
        if ((*(uint *)(puVar17 + 2) >> 0x14 & 1) != 0) {
          puVar15 = puVar17;
          if ((*(uint *)(puVar17 + 2) >> 0x16 & 1) == 0) {
            puVar15 = (undefined8 *)*puVar17;
          }
          FUN_008fa54c(local_1b8,puVar15);
          puVar15 = puVar17 + 3;
          lVar14 = FUN_008fd190(puVar15,"quantity");
          if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
            uVar13 = 0;
          }
          else {
            local_b0 = "quantity";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            pcStack_a8 = (char *)0x8;
            lVar14 = FUN_008feca4(puVar15,&local_b0);
            uVar13 = 0;
            if ((*(byte *)(lVar14 + 0x11) >> 2 & 1) != 0) {
              local_b0 = "quantity";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x8;
              puVar7 = (undefined4 *)FUN_008feca4(puVar15,&local_b0);
              uVar13 = *puVar7;
            }
          }
          lVar14 = FUN_008fd190(puVar15,"title");
          if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_b0 = "title";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            pcStack_a8 = (char *)0x5;
            lVar14 = FUN_008feca4(puVar15,&local_b0);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar14 + 0x12) >> 4 & 1) != 0) {
              local_b0 = "title";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x5;
              puVar8 = (undefined8 *)FUN_008feca4(puVar15,&local_b0);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(local_1d0,puVar8);
          lVar14 = FUN_008fd190(puVar15,"description");
          if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_b0 = "description";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            pcStack_a8 = (char *)0xb;
            lVar14 = FUN_008feca4(puVar15,&local_b0);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar14 + 0x12) >> 4 & 1) != 0) {
              local_b0 = "description";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0xb;
              puVar8 = (undefined8 *)FUN_008feca4(puVar15,&local_b0);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(local_1e8,puVar8);
          lVar14 = FUN_008fd190(puVar15,"texture");
          if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_b0 = "texture";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            pcStack_a8 = (char *)0x7;
            lVar14 = FUN_008feca4(puVar15,&local_b0);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar14 + 0x12) >> 4 & 1) != 0) {
              local_b0 = "texture";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x7;
              puVar8 = (undefined8 *)FUN_008feca4(puVar15,&local_b0);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(local_200,puVar8);
          lVar14 = FUN_008fd190(puVar15,"assetType");
          if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_b0 = "assetType";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            pcStack_a8 = (char *)0x9;
            lVar14 = FUN_008feca4(puVar15,&local_b0);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar14 + 0x12) >> 4 & 1) != 0) {
              local_b0 = "assetType";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x9;
              puVar8 = (undefined8 *)FUN_008feca4(puVar15,&local_b0);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(local_218,puVar8);
          lVar14 = FUN_008fd190(puVar15,"url");
          if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_b0 = "url";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            pcStack_a8 = (char *)0x3;
            lVar14 = FUN_008feca4(puVar15,&local_b0);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar14 + 0x12) >> 4 & 1) != 0) {
              local_b0 = "url";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x3;
              puVar8 = (undefined8 *)FUN_008feca4(puVar15,&local_b0);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(local_230,puVar8);
          lVar14 = FUN_008fd190(puVar15,"enabled");
          if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
LAB_00a85f98:
            local_240 = 0;
            uStack_238 = 0;
            lVar14 = FUN_008fd190(puVar15,"openRequirements");
            if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
              local_36c = 0;
            }
            else {
              local_b0 = "openRequirements";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = &DAT_00000010;
              lVar14 = FUN_008feca4(puVar15,&local_b0);
              local_36c = 0;
              if (*(int *)(lVar14 + 0x10) == 3) {
                local_b0 = "openRequirements";
                local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
                pcStack_a8 = &DAT_00000010;
                plVar9 = (long *)FUN_008feca4(puVar15,&local_b0);
                if ((int)plVar9[1] == 0) {
                  local_36c = 0;
                }
                else {
                  puVar8 = (undefined8 *)*plVar9;
                  local_36c = 0;
                  do {
                    local_90 = 0;
                    pcStack_a8 = (char *)0x0;
                    local_b0 = (char *)0x0;
                    uStack_98 = 0;
                    local_a0 = (void *)0x0;
                    local_250 = 0;
                    uStack_248 = 0;
                    if ((*(uint *)(puVar8 + 2) >> 0x14 & 1) != 0) {
                      puVar11 = puVar8;
                      if ((*(uint *)(puVar8 + 2) >> 0x16 & 1) == 0) {
                        puVar11 = (undefined8 *)*puVar8;
                      }
                      FUN_008fa54c(local_268,puVar11);
                      if (*(int *)(puVar8 + 4) != 0) {
                        lVar14 = 0;
                        uVar18 = 0;
                        do {
                          local_b8 = 0;
                          local_d0[1] = 0;
                          local_c0 = (void *)0x0;
                          local_d0[0] = 0;
                          plVar2 = (long *)(puVar8[3] + lVar14);
                          lVar10 = FUN_008fd190(plVar2,"id");
                          if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar10) {
                            puVar11 = (undefined8 *)&DAT_01e277f2;
                          }
                          else {
                            local_88 = "id";
                            local_78 = 0x100005;
                            local_80 = 2;
                            lVar10 = FUN_008feca4(plVar2,&local_88);
                            puVar11 = (undefined8 *)&DAT_01e277f2;
                            if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) != 0) {
                              local_88 = "id";
                              local_78 = 0x100005;
                              local_80 = 2;
                              puVar11 = (undefined8 *)FUN_008feca4(plVar2,&local_88);
                              if ((*(byte *)((long)puVar11 + 0x12) >> 6 & 1) == 0) {
                                puVar11 = (undefined8 *)*puVar11;
                              }
                            }
                          }
                          FUN_008fa54c(&local_88,puVar11);
                          FUN_008fce60(local_d0,&local_88);
                          if (((ulong)local_88 & 1) != 0) {
                            operator_delete((void *)CONCAT44(uStack_74,local_78));
                          }
                          lVar10 = FUN_008fd190(plVar2,"amount");
                          if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar10) {
                            uVar4 = 0;
                          }
                          else {
                            local_88 = "amount";
                            local_78 = 0x100005;
                            local_80 = 6;
                            lVar10 = FUN_008feca4(plVar2,&local_88);
                            uVar4 = 0;
                            if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) != 0) {
                              local_88 = "amount";
                              local_78 = 0x100005;
                              local_80 = 6;
                              puVar7 = (undefined4 *)FUN_008feca4(plVar2,&local_88);
                              uVar4 = *puVar7;
                            }
                          }
                          local_b8 = uVar4;
                          FUN_00a86a9c(&local_250,local_d0);
                          if ((local_d0[0] & 1) != 0) {
                            operator_delete(local_c0);
                          }
                          uVar18 = uVar18 + 1;
                          lVar14 = lVar14 + 0x18;
                        } while (uVar18 < *(uint *)(puVar8 + 4));
                      }
                      FUN_008fce60(&local_b0,local_268);
                      FUN_00a88044(&uStack_98,&local_250);
                      FUN_00a86b30(&local_240,&local_b0);
                      uVar18 = (ulong)(local_268[0] >> 1);
                      if ((local_268[0] & 1) != 0) {
                        uVar18 = local_260;
                      }
                      if ((uVar18 == 9) &&
                         (iVar5 = FUN_0090d610(local_268,0,0xffffffffffffffff,"auto_open",9),
                         iVar5 == 0)) {
                        local_36c = 1;
                      }
                      if ((local_268[0] & 1) != 0) {
                        operator_delete(local_258);
                      }
                    }
                    FUN_00a87ef4(&local_250,1);
                    FUN_00a87ef4(&uStack_98,1);
                    if (((ulong)local_b0 & 1) != 0) {
                      operator_delete(local_a0);
                    }
                    puVar8 = puVar8 + 6;
                  } while (puVar8 != (undefined8 *)(*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30));
                }
              }
            }
            local_88 = (char *)0x0;
            local_80 = 0;
            lVar14 = FUN_008fd190(puVar15,"content");
            if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 != lVar14) {
              local_b0 = "content";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x7;
              lVar14 = FUN_008feca4(puVar15,&local_b0);
              if (*(int *)(lVar14 + 0x10) == 3) {
                local_b0 = "content";
                local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
                pcStack_a8 = (char *)0x7;
                plVar9 = (long *)FUN_008feca4(puVar15,&local_b0);
                if ((int)plVar9[1] != 0) {
                  puVar15 = (undefined8 *)*plVar9;
                  do {
                    local_90 = 0;
                    pcStack_a8 = (char *)0x0;
                    local_b0 = (char *)0x0;
                    uStack_98 = 0;
                    local_a0 = (void *)0x0;
                    puVar8 = puVar15;
                    if ((*(byte *)((long)puVar15 + 0x12) >> 6 & 1) == 0) {
                      puVar8 = (undefined8 *)*puVar15;
                    }
                    FUN_008fa54c(local_d0,puVar8);
                    FUN_008fce60(&local_b0,local_d0);
                    if ((local_d0[0] & 1) != 0) {
                      operator_delete(local_c0);
                    }
                    FUN_00a86bcc(local_d0);
                    FUN_00a88360(&uStack_98,local_d0);
                    FUN_00a882c4(local_d0,1);
                    FUN_00a86f04(&local_88,&local_b0);
                    FUN_00a882c4(&uStack_98,1);
                    if (((ulong)local_b0 & 1) != 0) {
                      operator_delete(local_a0);
                    }
                    puVar15 = puVar15 + 6;
                  } while (puVar15 != (undefined8 *)(*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30))
                  ;
                }
              }
            }
            pcVar12 = operator_new(0xb8);
            FUN_00a8878c();
            local_b0 = pcVar12;
            FUN_008fcdb8(local_280,local_1b8);
            FUN_008fcdb8(local_298,local_1d0);
            FUN_008fcdb8(local_2b0,local_1e8);
            FUN_008fcdb8(local_2c8,local_200);
            FUN_008fcdb8(local_2e0,local_218);
            FUN_008fcdb8(local_2f8,local_230);
            FUN_00a86fa0(auStack_308,&local_240);
            FUN_00a87024(auStack_318,&local_88);
            FUN_00a887a8(pcVar12,local_280,local_298,local_2b0,local_2c8,local_2e0,local_2f8,uVar13,
                         auStack_308,auStack_318,local_36c);
            FUN_00a8823c(auStack_318,1);
            FUN_00a87e6c(auStack_308,1);
            if ((local_2f8[0] & 1) != 0) {
              operator_delete(local_2e8);
            }
            if ((local_2e0[0] & 1) != 0) {
              operator_delete(local_2d0);
            }
            if ((local_2c8[0] & 1) != 0) {
              operator_delete(local_2b8);
            }
            if ((local_2b0[0] & 1) != 0) {
              operator_delete(local_2a0);
            }
            if ((local_298[0] & 1) != 0) {
              operator_delete(local_288);
            }
            if ((local_280[0] & 1) != 0) {
              operator_delete(local_270);
            }
            FUN_00a870a8(param_1 + 0x28,&local_b0);
            FUN_00a8823c(&local_88,1);
            FUN_00a87e6c(&local_240,1);
          }
          else {
            local_b0 = "enabled";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            pcStack_a8 = (char *)0x7;
            lVar14 = FUN_008feca4(puVar15,&local_b0);
            if ((*(byte *)(lVar14 + 0x11) & 1) == 0) goto LAB_00a85f98;
            local_b0 = "enabled";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            pcStack_a8 = (char *)0x7;
            lVar14 = FUN_008feca4(puVar15,&local_b0);
            if (*(int *)(lVar14 + 0x10) == 0x102) goto LAB_00a85f98;
          }
          if ((local_230[0] & 1) != 0) {
            operator_delete(local_220);
          }
          if ((local_218[0] & 1) != 0) {
            operator_delete(local_208);
          }
          if ((local_200[0] & 1) != 0) {
            operator_delete(local_1f0);
          }
          if ((local_1e8[0] & 1) != 0) {
            operator_delete(local_1d8);
          }
          if ((local_1d0[0] & 1) != 0) {
            operator_delete(local_1c0);
          }
          if ((local_1b8[0] & 1) != 0) {
            operator_delete(local_1a8);
          }
        }
        puVar17 = puVar17 + 6;
      } while (puVar17 != local_138 + (local_130 & 0xffffffff) * 6);
    }
    if ((local_148 == 0) && (local_190 == 3)) {
      uVar18 = local_198 & 0xffffffff;
      if ((int)local_198 != 0) {
        puVar15 = local_1a0;
        puVar17 = local_1a0;
        do {
          if ((*(uint *)(puVar17 + 2) >> 0x14 & 1) != 0) {
            puVar15 = puVar17;
            if ((*(uint *)(puVar17 + 2) >> 0x16 & 1) == 0) {
              puVar15 = (undefined8 *)*puVar17;
            }
            FUN_008fa54c(local_d0,puVar15);
            puVar15 = puVar17 + 3;
            lVar14 = FUN_008fd190(puVar15,"quantity");
            if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
              uVar13 = 0;
            }
            else {
              local_b0 = "quantity";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x8;
              lVar14 = FUN_008feca4(puVar15,&local_b0);
              uVar13 = 0;
              if ((*(byte *)(lVar14 + 0x11) >> 2 & 1) != 0) {
                local_b0 = "quantity";
                local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
                pcStack_a8 = (char *)0x8;
                puVar7 = (undefined4 *)FUN_008feca4(puVar15,&local_b0);
                uVar13 = *puVar7;
              }
            }
            lVar14 = FUN_008fd190(puVar15,"title");
            if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
              puVar8 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_b0 = "title";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x5;
              lVar14 = FUN_008feca4(puVar15,&local_b0);
              puVar8 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar14 + 0x12) >> 4 & 1) != 0) {
                local_b0 = "title";
                local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
                pcStack_a8 = (char *)0x5;
                puVar8 = (undefined8 *)FUN_008feca4(puVar15,&local_b0);
                if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                  puVar8 = (undefined8 *)*puVar8;
                }
              }
            }
            FUN_008fa54c(&local_88,puVar8);
            lVar14 = FUN_008fd190(puVar15,"texture");
            if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
              puVar8 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_b0 = "texture";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x7;
              lVar14 = FUN_008feca4(puVar15,&local_b0);
              puVar8 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar14 + 0x12) >> 4 & 1) != 0) {
                local_b0 = "texture";
                local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
                pcStack_a8 = (char *)0x7;
                puVar8 = (undefined8 *)FUN_008feca4(puVar15,&local_b0);
                if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                  puVar8 = (undefined8 *)*puVar8;
                }
              }
            }
            FUN_008fa54c(local_1b8,puVar8);
            lVar14 = FUN_008fd190(puVar15,"enabled");
            if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar14) {
LAB_00a86840:
              pcVar12 = operator_new(0x50);
              FUN_00a889c8();
              local_b0 = pcVar12;
              FUN_008fcdb8(local_330,local_d0);
              FUN_008fcdb8(local_348,&local_88);
              FUN_008fcdb8(local_360,local_1b8);
              FUN_00a889e4(pcVar12,local_330,local_348,local_360,uVar13);
              if ((local_360[0] & 1) != 0) {
                operator_delete(local_350);
              }
              if ((local_348[0] & 1) != 0) {
                operator_delete(local_338);
              }
              if ((local_330[0] & 1) != 0) {
                operator_delete(local_320);
              }
              FUN_00a87130(param_1 + 0x38,&local_b0);
            }
            else {
              local_b0 = "enabled";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x7;
              lVar14 = FUN_008feca4(puVar15,&local_b0);
              if ((*(byte *)(lVar14 + 0x11) & 1) == 0) goto LAB_00a86840;
              local_b0 = "enabled";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              pcStack_a8 = (char *)0x7;
              lVar14 = FUN_008feca4(puVar15,&local_b0);
              if (*(int *)(lVar14 + 0x10) == 0x102) goto LAB_00a86840;
            }
            if ((local_1b8[0] & 1) != 0) {
              operator_delete(local_1a8);
            }
            if (((ulong)local_88 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_74,local_78));
            }
            if ((local_d0[0] & 1) != 0) {
              operator_delete(local_c0);
            }
            uVar18 = local_198 & 0xffffffff;
            puVar15 = local_1a0;
          }
          puVar17 = puVar17 + 6;
        } while (puVar17 != puVar15 + uVar18 * 6);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        lVar14 = *(long *)(param_1 + 0x20);
        do {
          if (*(code **)(lVar14 + 8) == (code *)0x0) {
            (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x10));
          }
          else {
            (**(code **)(lVar14 + 8))();
          }
          lVar14 = lVar14 + 0x20;
        } while (lVar14 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
      }
      FUN_0099cf94(param_1 + 0x48,0);
      uVar18 = (ulong)*(uint *)(param_1 + 0x28);
      if (*(uint *)(param_1 + 0x28) != 0) {
        uVar16 = 0;
        do {
          if (0 < *(int *)(*(long *)(*(long *)(param_1 + 0x30) + uVar16 * 8) + 0xb0)) {
            FUN_00a86fa0(&local_b0);
            uVar18 = (ulong)local_b0 & 0xffffffff;
            if ((int)local_b0 == 0) {
              iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x30) + uVar16 * 8) + 0xb0);
LAB_00a869ec:
              FUN_0099cf3c(param_1 + 0x48,iVar5);
            }
            else {
              uVar19 = 0;
              pcVar12 = pcStack_a8 + 0x18;
              do {
                iVar6 = FUN_00a871b8(param_1,pcVar12);
                if (0 < iVar6) {
                  iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x30) + uVar16 * 8) + 0xb0);
                  if (iVar6 <= iVar5) {
                    iVar5 = iVar6;
                  }
                  goto LAB_00a869ec;
                }
                uVar19 = uVar19 + 1;
                pcVar12 = pcVar12 + 0x28;
              } while (uVar19 < uVar18);
            }
            FUN_00a87e6c(&local_b0,1);
            uVar18 = (ulong)*(uint *)(param_1 + 0x28);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar18);
      }
    }
  }
LAB_00a86a10:
  puVar17 = local_180;
  if (local_180 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_180);
    operator_delete(puVar17);
  }
  free(local_168);
  if (local_170 != (void *)0x0) {
    operator_delete(local_170);
  }
  puVar17 = local_118;
  if (local_118 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_118);
    operator_delete(puVar17);
  }
  free(local_100);
  if (local_108 != (void *)0x0) {
    operator_delete(local_108);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

