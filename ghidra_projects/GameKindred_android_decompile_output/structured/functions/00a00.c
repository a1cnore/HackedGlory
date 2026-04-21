// functions/00a00 — 23 functions
#include "libGameKindred.h"




void FUN_00a00008(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  cVar1 = *(char *)(param_1 + 0xa0);
  uVar2 = FUN_009580b8();
  if (cVar1 == '\0') {
    FUN_00960a74(uVar2,DAT_031308c8 + 0x88);
  }
  else {
    FUN_00961e80(uVar2,param_1 + 0x88,param_1 + 0x78);
  }
  FUN_00952050(param_1 + 0x78,0);
  FUN_009fef88(param_1,0);
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar3 = *(long *)(param_1 + 0x48);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x40) * 0x20);
  }
  return;
}




long FUN_00a000e8(long param_1)

{
  return param_1 + 0x78;
}




void FUN_00a000f0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  return;
}




void FUN_00a000f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c6aa8;
  param_1[3] = &PTR_FUN_027c6b18;
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    operator_delete((void *)param_1[0x13]);
  }
  FUN_00952050(param_1 + 0xf,1);
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00948d58(param_1 + 3);
  FUN_00e835e0(param_1);
  return;
}




void FUN_00a00198(void *param_1)

{
  FUN_00a000f8();
  operator_delete(param_1);
  return;
}




void FUN_00a001bc(void)

{
  return;
}




void FUN_00a001c0(long param_1)

{
  FUN_00a000f8(param_1 + -0x18);
  return;
}




void FUN_00a001c8(long param_1)

{
  FUN_00a000f8((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_00a001f0(uint *param_1,long param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar2 = *param_1;
  iVar3 = (int)((ulong)((long)param_3 - param_2) >> 3);
  if (uVar2 != iVar3 * -0xf0f0f0f) {
    pbVar6 = (byte *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x88);
    lVar1 = (long)pbVar6 - (long)param_3;
    lVar5 = param_2;
    if (lVar1 != 0) {
      do {
        FUN_008fce60(lVar5,param_3);
        FUN_00910394(lVar5 + 0x18,param_3 + 0x18);
        *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(param_3 + 0x38);
        uVar7 = *(undefined8 *)(param_3 + 0x28);
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(param_3 + 0x30);
        *(undefined8 *)(lVar5 + 0x28) = uVar7;
        FUN_008fce60(lVar5 + 0x40,param_3 + 0x40);
        FUN_008fce60(lVar5 + 0x58,param_3 + 0x58);
        FUN_008fce60(lVar5 + 0x70,param_3 + 0x70);
        param_3 = param_3 + 0x88;
        lVar5 = lVar5 + 0x88;
      } while (param_3 != pbVar6);
      uVar2 = *param_1;
      pbVar6 = (byte *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x88);
    }
    pbVar4 = (byte *)(param_2 + ((lVar1 >> 3) * -0xf0f0f0f0f0f0f0f & 0xffffffffU) * 0x88);
    if (pbVar4 != pbVar6) {
      do {
        if ((pbVar4[0x70] & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x80));
        }
        if ((pbVar4[0x58] & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x68));
        }
        if ((pbVar4[0x40] & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x50));
        }
        if (*(void **)(pbVar4 + 0x20) != (void *)0x0) {
          operator_delete__(*(void **)(pbVar4 + 0x20));
          pbVar4[0x18] = 0;
          pbVar4[0x19] = 0;
          pbVar4[0x1a] = 0;
          pbVar4[0x1b] = 0;
          pbVar4[0x1c] = 0;
          pbVar4[0x1d] = 0;
          pbVar4[0x1e] = 0;
          pbVar4[0x1f] = 0;
          pbVar4[0x20] = 0;
          pbVar4[0x21] = 0;
          pbVar4[0x22] = 0;
          pbVar4[0x23] = 0;
          pbVar4[0x24] = 0;
          pbVar4[0x25] = 0;
          pbVar4[0x26] = 0;
          pbVar4[0x27] = 0;
        }
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x10));
        }
        pbVar4 = pbVar4 + 0x88;
      } while (pbVar6 != pbVar4);
      uVar2 = *param_1;
    }
    *param_1 = uVar2 + iVar3 * 0xf0f0f0f;
    return;
  }
  FUN_00952050(param_1,1);
  return;
}




void thunk_FUN_00a00380(long param_1)

{
  uint *puVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x80) = 0;
  puVar1 = (uint *)0x0;
  if (DAT_031308d0 != 0) {
    puVar1 = (uint *)(DAT_031308d0 + 0x60);
  }
  if (*puVar1 != 0) {
    lVar2 = *(long *)(puVar1 + 2);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(puVar1 + 2) + (ulong)*puVar1 * 0x20);
  }
  FUN_00a01eec(param_1);
  return;
}




void FUN_00a00380(long param_1)

{
  uint *puVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x80) = 0;
  puVar1 = (uint *)0x0;
  if (DAT_031308d0 != 0) {
    puVar1 = (uint *)(DAT_031308d0 + 0x60);
  }
  if (*puVar1 != 0) {
    lVar2 = *(long *)(puVar1 + 2);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(puVar1 + 2) + (ulong)*puVar1 * 0x20);
  }
  FUN_00a01eec(param_1);
  return;
}




void FUN_00a003fc(long param_1)

{
  FUN_00a00380(param_1 + -0x18);
  return;
}




void thunk_FUN_00a00380(long param_1)

{
  uint *puVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x80) = 0;
  puVar1 = (uint *)0x0;
  if (DAT_031308d0 != 0) {
    puVar1 = (uint *)(DAT_031308d0 + 0x60);
  }
  if (*puVar1 != 0) {
    lVar2 = *(long *)(puVar1 + 2);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(puVar1 + 2) + (ulong)*puVar1 * 0x20);
  }
  FUN_00a01eec(param_1);
  return;
}




void FUN_00a00408(long param_1)

{
  FUN_00a00380(param_1 + -0x18);
  return;
}




void FUN_00a00410(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  void *pvVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  byte local_f8 [16];
  void *local_e8;
  long local_e0;
  void *local_d8;
  void *local_88;
  ulong local_80;
  void *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_80 = 0;
  local_78 = (void *)0x0;
  puVar12 = (uint *)(param_1 + 0x30);
  uVar11 = 0;
  do {
    uVar10 = uVar11;
    uVar9 = (ulong)uVar10;
    if (*puVar12 <= uVar10) break;
    uVar11 = uVar10 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x38) + uVar9 * 8 + 4) == -1);
  if (*puVar12 != uVar10) {
    do {
      puVar6 = (undefined8 *)
               (*(long *)(param_1 + 0x50) +
               (ulong)*(uint *)(*(long *)(param_1 + 0x38) + uVar9 * 8 + 4) * 8);
      pvVar13 = (void *)*puVar6;
      if (*(char *)((long)pvVar13 + 0xda) == '\0') {
        if (pvVar13 != (void *)0x0) {
          FUN_00a00a80(pvVar13);
          operator_delete(pvVar13);
          puVar6 = (undefined8 *)
                   (*(long *)(param_1 + 0x50) +
                   (ulong)*(uint *)(*(long *)(param_1 + 0x38) + uVar9 * 8 + 4) * 8);
        }
        *puVar6 = 0;
      }
      else {
        FUN_00a00b1c(&local_80);
      }
      uVar11 = (uint)uVar9;
      do {
        uVar11 = uVar11 + 1;
        uVar9 = (ulong)uVar11;
        if (*puVar12 <= uVar11) break;
      } while (*(int *)(*(long *)(param_1 + 0x38) + uVar9 * 8 + 4) == -1);
    } while (*puVar12 != uVar11);
  }
  FUN_00a00ba4(puVar12);
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar14 = *(long *)(param_2 + 0x30);
    do {
      pvVar13 = operator_new(0xe0);
      FUN_009f63a0();
      local_88 = pvVar13;
      FUN_008fce60((long)pvVar13 + 0x48,lVar14);
      if ((*(byte *)(lVar14 + 0x18) & 1) == 0) {
        pcVar15 = (char *)(lVar14 + 0x19);
      }
      else {
        pcVar15 = *(char **)(lVar14 + 0x28);
      }
      uVar9 = 0;
      do {
        iVar3 = strcmp((&PTR_s_player_02be3308)[uVar9],pcVar15);
        if (iVar3 == 0) goto LAB_00a005bc;
        uVar9 = uVar9 + 1;
      } while (uVar9 < 10);
      uVar9 = 10;
LAB_00a005bc:
      *(int *)((long)local_88 + 0x40) = (int)uVar9;
      if ((*(byte *)(lVar14 + 0x30) & 1) == 0) {
        pcVar15 = (char *)(lVar14 + 0x31);
      }
      else {
        pcVar15 = *(char **)(lVar14 + 0x40);
      }
      uVar9 = 0;
      do {
        iVar3 = strcmp((&PTR_s_generic_quest_02be3358)[uVar9],pcVar15);
        if (iVar3 == 0) goto LAB_00a00600;
        uVar9 = uVar9 + 1;
      } while (uVar9 < 10);
      uVar9 = 10;
LAB_00a00600:
      *(int *)((long)local_88 + 0x44) = (int)uVar9;
      *(undefined1 *)((long)local_88 + 0xd8) = *(undefined1 *)(lVar14 + 0x10c);
      *(undefined1 *)((long)local_88 + 0xd9) = *(undefined1 *)(lVar14 + 0x10d);
      *(undefined4 *)((long)local_88 + 200) = *(undefined4 *)(lVar14 + 0x108);
      *(undefined4 *)((long)local_88 + 0xcc) = *(undefined4 *)(lVar14 + 0xf8);
      *(undefined8 *)((long)local_88 + 0xd0) = *(undefined8 *)(lVar14 + 0x100);
      FUN_008fce60((long)local_88 + 0x60,lVar14 + 0xc0);
      if (*(int *)(lVar14 + 0xe8) != 0) {
        plVar4 = (long *)(*(long *)(lVar14 + 0xf0) + 0x10);
        do {
          if ((*(byte *)(plVar4 + -2) & 1) == 0) {
            local_e0 = (long)plVar4 + -0xf;
          }
          else {
            local_e0 = *plVar4;
          }
          FUN_00a00cbc((long)local_88 + 0x10,&local_e0,plVar4 + 1);
          plVar1 = plVar4 + 2;
          plVar4 = plVar4 + 4;
        } while (plVar1 != (long *)(*(long *)(lVar14 + 0xf0) +
                                   (ulong)*(uint *)(lVar14 + 0xe8) * 0x20));
      }
      FUN_00a00e94(local_88,*(undefined4 *)(lVar14 + 0xd8));
      if (*(int *)(lVar14 + 0xd8) != 0) {
        lVar8 = *(long *)(lVar14 + 0xe0) + 0x19;
        do {
          pvVar13 = local_88;
          if ((*(byte *)(lVar8 + -0x19) & 1) == 0) {
            lVar16 = lVar8 + -0x18;
          }
          else {
            lVar16 = *(long *)(lVar8 + -9);
          }
          lVar7 = lVar8;
          if ((*(byte *)(lVar8 + -1) & 1) != 0) {
            lVar7 = *(long *)(lVar8 + 0xf);
          }
          FUN_008fa54c(local_f8,lVar7);
          FUN_009f698c(&local_e0,lVar16,&DAT_01e277f2,local_f8);
          FUN_00a00f80(pvVar13,&local_e0);
          FUN_009f69d8(&local_e0);
          if ((local_f8[0] & 1) != 0) {
            operator_delete(local_e8);
          }
          lVar16 = lVar8 + 0x17;
          lVar8 = lVar8 + 0x30;
        } while (lVar16 != *(long *)(lVar14 + 0xe0) + (ulong)*(uint *)(lVar14 + 0xd8) * 0x30);
      }
      if ((*(byte *)(lVar14 + 0x48) & 1) == 0) {
        lVar8 = lVar14 + 0x49;
      }
      else {
        lVar8 = *(long *)(lVar14 + 0x58);
      }
      FUN_009f641c(&local_e0,local_88,lVar8);
      FUN_00910394((long)local_88 + 0x78,&local_e0);
      if (local_d8 != (void *)0x0) {
        operator_delete__(local_d8);
        local_e0 = 0;
        local_d8 = (void *)0x0;
      }
      if ((*(byte *)(lVar14 + 0x60) & 1) == 0) {
        lVar8 = lVar14 + 0x61;
      }
      else {
        lVar8 = *(long *)(lVar14 + 0x70);
      }
      FUN_009f641c(&local_e0,local_88,lVar8);
      FUN_00910394((long)local_88 + 0x88,&local_e0);
      if (local_d8 != (void *)0x0) {
        operator_delete__(local_d8);
        local_e0 = 0;
        local_d8 = (void *)0x0;
      }
      if ((*(byte *)(lVar14 + 0x78) & 1) == 0) {
        lVar8 = lVar14 + 0x79;
      }
      else {
        lVar8 = *(long *)(lVar14 + 0x88);
      }
      FUN_009f641c(&local_e0,local_88,lVar8);
      FUN_00910394((long)local_88 + 0x98,&local_e0);
      if (local_d8 != (void *)0x0) {
        operator_delete__(local_d8);
        local_e0 = 0;
        local_d8 = (void *)0x0;
      }
      if ((*(byte *)(lVar14 + 0x90) & 1) == 0) {
        lVar8 = lVar14 + 0x91;
      }
      else {
        lVar8 = *(long *)(lVar14 + 0xa0);
      }
      FUN_009f641c(&local_e0,local_88,lVar8);
      FUN_00910394((long)local_88 + 0xa8,&local_e0);
      if (local_d8 != (void *)0x0) {
        operator_delete__(local_d8);
        local_e0 = 0;
        local_d8 = (void *)0x0;
      }
      if ((*(byte *)(lVar14 + 0xa8) & 1) == 0) {
        lVar8 = lVar14 + 0xa9;
      }
      else {
        lVar8 = *(long *)(lVar14 + 0xb8);
      }
      FUN_009f641c(&local_e0,local_88,lVar8);
      FUN_00910394((long)local_88 + 0xb8,&local_e0);
      if (local_d8 != (void *)0x0) {
        operator_delete__(local_d8);
        local_d8 = (void *)0x0;
      }
      if ((*(byte *)((long)local_88 + 0x48) & 1) == 0) {
        local_e0 = (long)local_88 + 0x49;
      }
      else {
        local_e0 = *(long *)((long)local_88 + 0x58);
      }
      FUN_00a01034(puVar12,&local_e0,&local_88);
      lVar14 = lVar14 + 0x110;
    } while (lVar14 != *(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x28) * 0x110);
  }
  if ((int)local_80 != 0) {
    lVar14 = 0;
    uVar9 = 0;
    do {
      local_e0 = *(long *)((long)local_78 + lVar14);
      if ((*(byte *)(local_e0 + 0x48) & 1) == 0) {
        local_e0 = local_e0 + 0x49;
      }
      else {
        local_e0 = *(long *)(local_e0 + 0x58);
      }
      plVar4 = (long *)FUN_00a0120c(puVar12,&local_e0);
      if (plVar4 == (long *)0x0) {
        local_e0 = *(long *)((long)local_78 + lVar14);
        if ((*(byte *)(local_e0 + 0x48) & 1) == 0) {
          local_e0 = local_e0 + 0x49;
        }
        else {
          local_e0 = *(long *)(local_e0 + 0x58);
        }
        FUN_00a01034(puVar12,&local_e0);
LAB_00a00998:
        puVar6 = (undefined8 *)((long)local_78 + uVar9 * 8);
      }
      else {
        *(undefined1 *)(*plVar4 + 0xda) = 1;
        pvVar13 = *(void **)((long)local_78 + lVar14);
        if (pvVar13 == (void *)0x0) goto LAB_00a00998;
        FUN_00a00a80(pvVar13);
        operator_delete(pvVar13);
        puVar6 = (undefined8 *)((long)local_78 + lVar14);
      }
      *puVar6 = 0;
      uVar9 = uVar9 + 1;
      lVar14 = lVar14 + 8;
    } while (uVar9 < (local_80 & 0xffffffff));
  }
  if (local_78 != (void *)0x0) {
    local_80 = local_80 & 0xffffffff00000000;
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  puVar12 = (uint *)0x0;
  if (DAT_031308d0 != 0) {
    puVar12 = (uint *)(DAT_031308d0 + 0x60);
  }
  if (*puVar12 != 0) {
    lVar14 = *(long *)(puVar12 + 2);
    do {
      if (*(code **)(lVar14 + 8) == (code *)0x0) {
        (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x10));
      }
      else {
        (**(code **)(lVar14 + 8))();
      }
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != *(long *)(puVar12 + 2) + (ulong)*puVar12 * 0x20);
  }
  if (*(char *)(param_1 + 0x81) != '\0') {
    uVar5 = FUN_009580b8();
    FUN_00962a18(uVar5,1);
    *(undefined1 *)(param_1 + 0x81) = 0;
  }
  FUN_00a012cc(param_1);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a00a80(long param_1)

{
  if (*(void **)(param_1 + 0xc0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  FUN_00a02470(param_1 + 0x10);
  FUN_00a024f0(param_1,1);
  return;
}




void FUN_00a00b1c(uint *param_1,undefined8 *param_2)

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
    FUN_00a025e4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a00ba4(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




ulong FUN_00a00c14(char *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = strcmp((&PTR_s_player_02be3308)[uVar2],param_1);
    if (iVar1 == 0) goto LAB_00a00c54;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  uVar2 = 10;
LAB_00a00c54:
  return uVar2 & 0xffffffff;
}




ulong FUN_00a00c68(char *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = strcmp((&PTR_s_generic_quest_02be3358)[uVar2],param_1);
    if (iVar1 == 0) goto LAB_00a00ca8;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  uVar2 = 10;
LAB_00a00ca8:
  return uVar2 & 0xffffffff;
}




void FUN_00a00cbc(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  uVar4 = FUN_00e6a474(uVar14);
  uVar5 = FUN_0091ed5c(uVar14,uVar4,0x12345678);
  uVar10 = param_1[4];
  uVar9 = *param_1;
  param_1[4] = uVar10 + 1;
  if (uVar9 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar2 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar1 = *piVar13;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar2 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar2 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar1 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar6;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar9 = *param_1;
    }
  }
  lVar8 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar5 / uVar9;
  }
  uVar12 = (ulong)(uVar5 - uVar10 * uVar9);
  piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
  iVar6 = *piVar13;
  while (iVar6 != -1) {
    uVar10 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
    iVar6 = *piVar13;
  }
  *(uint *)(lVar8 + uVar12 * 8) = uVar5;
  iVar6 = FUN_00a02664(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a00e94(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x58);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar5 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x58);
      pvVar4 = pvVar1;
      do {
        FUN_008fcdb8(pvVar4,pvVar2);
        FUN_008fcdb8((long)pvVar4 + 0x18,(long)pvVar2 + 0x18);
        FUN_008fcdb8((long)pvVar4 + 0x30,(long)pvVar2 + 0x30);
        FUN_00a02800((long)pvVar4 + 0x48,(long)pvVar2 + 0x48);
        pvVar2 = (void *)((long)pvVar2 + 0x58);
        pvVar4 = (void *)((long)pvVar4 + 0x58);
      } while (pvVar2 != pvVar5);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x58;
        do {
          FUN_009f69d8(pvVar2);
          lVar3 = lVar3 + -0x58;
          pvVar2 = (void *)((long)pvVar2 + 0x58);
        } while (lVar3 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_00a00f80(uint *param_1,long param_2)

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
    FUN_00a00e94(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x58;
  FUN_008fcdb8(lVar4 + -0x58,param_2);
  FUN_008fcdb8(lVar4 + -0x40,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x28,param_2 + 0x30);
  FUN_00a02800(lVar4 + -0x10,param_2 + 0x48);
  return;
}

