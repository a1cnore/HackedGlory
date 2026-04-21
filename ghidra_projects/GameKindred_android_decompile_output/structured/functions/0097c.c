// functions/0097c — 25 functions
#include "libGameKindred.h"




void FUN_0097c00c(void *param_1)

{
  FUN_0097bf50();
  operator_delete(param_1);
  return;
}




void FUN_0097c030(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  char *__s1;
  undefined8 *puVar8;
  ulong uVar9;
  undefined **local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  byte local_c8 [16];
  void *local_b8;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if ((int)param_2[0xb] != 0) goto LAB_0097c56c;
  (**(code **)(*param_1 + 0x10))(param_1);
  lVar4 = FUN_008fd190(param_2,"instant_tab_key");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_0097c0d8:
    puVar8 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_e0 = (undefined **)0x1b973ca;
    local_d0 = 0x100005;
    local_d8 = 0xf;
    lVar4 = FUN_008feca4(param_2,&local_e0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_0097c0d8;
    local_e0 = (undefined **)0x1b973ca;
    local_d0 = 0x100005;
    local_d8 = 0xf;
    puVar8 = (undefined8 *)FUN_008feca4(param_2,&local_e0);
    if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
      puVar8 = (undefined8 *)*puVar8;
    }
  }
  FUN_008fa54c(&local_e0,puVar8);
  FUN_008fce60(param_1 + 9,&local_e0);
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_cc,local_d0));
  }
  lVar4 = FUN_008fd190(param_2,"instant_tab_id");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_0097c154:
    puVar8 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_e0 = (undefined **)0x1b973da;
    local_d0 = 0x100005;
    local_d8 = 0xe;
    lVar4 = FUN_008feca4(param_2,&local_e0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_0097c154;
    local_e0 = (undefined **)0x1b973da;
    local_d0 = 0x100005;
    local_d8 = 0xe;
    puVar8 = (undefined8 *)FUN_008feca4(param_2,&local_e0);
    if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
      puVar8 = (undefined8 *)*puVar8;
    }
  }
  FUN_008fa54c(&local_e0,puVar8);
  FUN_008fce60(param_1 + 0xc,&local_e0);
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_cc,local_d0));
  }
  lVar4 = FUN_008fd190(param_2,"gamefeed");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4) {
    local_e0 = (undefined **)0x1b9732e;
    local_d0 = 0x100005;
    local_d8 = 8;
    plVar5 = (long *)FUN_008feca4(param_2,&local_e0);
    lVar4 = FUN_008fd190(plVar5,"sections");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
      local_e0 = (undefined **)0x1b97337;
      local_d0 = 0x100005;
      local_d8 = 8;
      plVar6 = (long *)FUN_008feca4(plVar5,&local_e0);
      if (((int)plVar6[2] == 4) && ((int)plVar6[1] != 0)) {
        lVar4 = 0;
        uVar9 = 0;
        do {
          FUN_00978928(&local_e0,*plVar6 + lVar4);
          FUN_00978858(param_1 + 1,&local_e0);
          local_e0 = &PTR_FUN_027bca40;
          if ((local_80[0] & 1) != 0) {
            operator_delete(local_70);
          }
          if ((local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
          if ((local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
          if ((local_c8[0] & 1) != 0) {
            operator_delete(local_b8);
          }
          FUN_00977e28(&local_d8,1);
          uVar9 = uVar9 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar9 < *(uint *)(plVar6 + 1));
      }
    }
    lVar4 = FUN_008fd190(plVar5,"landing_page");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
      local_e0 = (undefined **)0x1b973e9;
      local_d0 = 0x100005;
      local_d8 = 0xc;
      FUN_008feca4(plVar5,&local_e0);
      FUN_00978928(&local_e0);
      FUN_0097c674(param_1 + 0x13,&local_d8);
      FUN_008fce60(param_1 + 0x15,local_c8);
      FUN_008fce60(param_1 + 0x18,local_b0);
      FUN_008fce60(param_1 + 0x1b,local_98);
      FUN_008fce60(param_1 + 0x1e,local_80);
      local_e0 = &PTR_FUN_027bca40;
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      FUN_00977e28(&local_d8,1);
    }
    lVar4 = FUN_008fd190(plVar5,"profileExtras");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
      local_e0 = (undefined **)0x1b973f6;
      local_d0 = 0x100005;
      local_d8 = 0xd;
      plVar5 = (long *)FUN_008feca4(plVar5,&local_e0);
      if (((int)plVar5[2] == 4) && ((int)plVar5[1] != 0)) {
        lVar4 = 0;
        uVar9 = 0;
        do {
          plVar6 = (long *)(*plVar5 + lVar4);
          lVar7 = FUN_008fd190(plVar6,"label");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar7) {
            local_e0 = (undefined **)0x1e57d4b;
            local_d0 = 0x100005;
            local_d8 = 5;
            lVar7 = FUN_008feca4(plVar6,&local_e0);
            if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) &&
               (lVar7 = FUN_008fd190(plVar6,"url"),
               *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar7)) {
              local_e0 = (undefined **)0x1e4b8e1;
              local_d0 = 0x100005;
              local_d8 = 3;
              lVar7 = FUN_008feca4(plVar6,&local_e0);
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                local_e0 = (undefined **)0x1e57d4b;
                local_d0 = 0x100005;
                local_d8 = 5;
                __s1 = (char *)FUN_008feca4(plVar6,&local_e0);
                if (((byte)__s1[0x12] >> 6 & 1) == 0) {
                  __s1 = *(char **)__s1;
                }
                iVar2 = strcmp(__s1,"STATS");
                if (iVar2 == 0) {
                  local_e0 = (undefined **)0x1e4b8e1;
                  local_d0 = 0x100005;
                  local_d8 = 3;
                  plVar6 = (long *)FUN_008feca4(plVar6,&local_e0);
                  if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
                    plVar6 = (long *)*plVar6;
                  }
                  FUN_008fa54c(&local_e0,plVar6);
                  FUN_008fce60(param_1 + 0xf,&local_e0);
                  if (((ulong)local_e0 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_cc,local_d0));
                  }
                }
              }
            }
          }
          uVar9 = uVar9 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar9 < *(uint *)(plVar5 + 1));
      }
    }
  }
  uVar3 = 1;
LAB_0097c56c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_0097c5f8(undefined8 param_1,long param_2)

{
  FUN_008fcdb8(param_1,param_2 + 0x48);
  return;
}




void FUN_0097c604(undefined8 param_1,long param_2)

{
  FUN_008fcdb8(param_1,param_2 + 0x60);
  return;
}




void FUN_0097c610(undefined8 param_1,long param_2)

{
  FUN_008fcdb8(param_1,param_2 + 0x78);
  return;
}




void FUN_0097c61c(long param_1,long param_2)

{
  FUN_0097c674(param_2 + 8,param_1 + 0x98);
  FUN_008fce60(param_2 + 0x18,param_1 + 0xa8);
  FUN_008fce60(param_2 + 0x30,param_1 + 0xc0);
  FUN_008fce60(param_2 + 0x48,param_1 + 0xd8);
  FUN_008fce60(param_2 + 0x60,param_1 + 0xf0);
  return;
}




void FUN_0097c674(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_00977e28(param_1,1);
    FUN_0096a464(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0x598;
      do {
        FUN_0096a538(lVar3,lVar2);
        lVar2 = lVar2 + 0x598;
        lVar4 = lVar4 + -0x598;
        lVar3 = lVar3 + 0x598;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_0097c700(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_027bcbc0;
  param_1[2] = 0;
  return;
}




void FUN_0097c734(void)

{
  return;
}




void FUN_0097c738(void)

{
  return;
}




void FUN_0097c73c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_0097c760(void)

{
  return;
}




void FUN_0097c764(void)

{
  return;
}




void FUN_0097c768(void)

{
  return;
}




undefined1  [16] FUN_0097c76c(void)

{
  return ZEXT816(0);
}




undefined8 * FUN_0097c774(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bcc20;
    puVar6[2] = &PTR_FUN_027bcc88;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097c864(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_FUN_027bccc0;
    puVar6[2] = &PTR_FUN_027bcd28;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097c954(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cfc5a8(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097ca28(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bcd98;
    puVar6[2] = &PTR_FUN_027bce08;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097cb18(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cf6200(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097cbe8(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_FUN_027be0b8;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097ccc4(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_FUN_02810b08;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097cda0(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cf62cc(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097ce70(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_FUN_028106e8;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097cf4c(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cf6978(puVar6);
    *puVar6 = &PTR_FUN_028107a8;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}

