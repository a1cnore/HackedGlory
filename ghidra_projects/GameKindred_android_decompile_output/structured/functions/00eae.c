// functions/00eae — 5 functions
#include "libGameKindred.h"




void FUN_00eae3cc(uint *param_1,long param_2)

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
    FUN_00955508(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_008fcdb8(lVar4 + -0x38,param_2);
  thunk_FUN_00e7051c(lVar4 + -0x20,param_2 + 0x18);
  *(undefined8 *)(lVar4 + -9) = *(undefined8 *)(param_2 + 0x2f);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x28);
  return;
}




void FUN_00eae47c(long param_1)

{
  FUN_008fa54c(param_1,&DAT_01e277f2);
  FUN_008fa54c(param_1 + 0x18,&DAT_01e277f2);
  FUN_008fa54c(param_1 + 0x30,&DAT_01e277f2);
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  return;
}




void FUN_00eae4c8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  char *local_f0;
  void *local_e8;
  ulong local_e0 [2];
  void *local_d0;
  ulong auStack_c8 [2];
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined1 local_90;
  char *local_88;
  void *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    uVar10 = 0;
  }
  else {
    local_f0 = "code";
    local_e0[0] = CONCAT44(local_e0[0]._4_4_,0x100005);
    local_e8 = (void *)0x4;
    lVar4 = FUN_008feca4(param_1,&local_f0);
    uVar10 = 0;
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_f0 = "code";
      local_e0[0] = CONCAT44(local_e0[0]._4_4_,0x100005);
      local_e8 = (void *)0x4;
      puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_f0);
      uVar10 = *puVar5;
    }
  }
  *(undefined4 *)(param_2 + 0x58) = uVar10;
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00eaed10;
  local_f0 = "returnValue";
  local_e0[0] = CONCAT44(local_e0[0]._4_4_,0x100005);
  local_e8 = (void *)0xb;
  lVar4 = FUN_008feca4(param_1,&local_f0);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00eaed10;
  FUN_00e70510(&local_f0);
  auStack_c8[0] = 0;
  local_d0 = (void *)0x0;
  local_b8 = (void *)0x0;
  auStack_c8[1] = 0;
  local_e0[1] = 0;
  local_e0[0] = 0;
  FUN_00e70510();
  FUN_00e70510();
  local_88 = "returnValue";
  local_78 = 0x100005;
  local_80 = (void *)0xb;
  plVar6 = (long *)FUN_008feca4(param_1,&local_88);
  lVar4 = FUN_008fd190(plVar6,"success");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
    bVar3 = false;
  }
  else {
    local_88 = "success";
    local_78 = 0x100005;
    local_80 = (void *)0x7;
    lVar4 = FUN_008feca4(plVar6,&local_88);
    bVar3 = false;
    if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
      local_88 = "success";
      local_78 = 0x100005;
      local_80 = (void *)0x7;
      lVar4 = FUN_008feca4(plVar6,&local_88);
      bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x38) = bVar3;
  FUN_008fce60(param_2 + 0x40,&DAT_0320ffa8);
  if (*(char *)(param_2 + 0x38) != '\0') {
    lVar4 = FUN_008fd190(plVar6,"pending");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
      local_88 = "pending";
      local_78 = 0x100005;
      local_80 = (void *)0x7;
      lVar4 = FUN_008feca4(plVar6,&local_88);
      if (*(int *)(lVar4 + 0x10) == 4) {
        FUN_00964bdc(param_2 + 0x28,0);
        local_88 = "pending";
        local_78 = 0x100005;
        local_80 = (void *)0x7;
        plVar7 = (long *)FUN_008feca4(plVar6,&local_88);
        if ((int)plVar7[1] != 0) {
          lVar4 = 0;
          uVar11 = 0;
          do {
            plVar1 = (long *)(*plVar7 + lVar4);
            lVar8 = FUN_008fd190(plVar1,"handle");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar8) {
              local_88 = "handle";
              local_78 = 0x100005;
              local_80 = (void *)0x6;
              lVar8 = FUN_008feca4(plVar1,&local_88);
              if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                local_88 = "handle";
                local_78 = 0x100005;
                local_80 = (void *)0x6;
                lVar8 = FUN_008feca4(plVar1,&local_88);
                if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                  lVar8 = FUN_008fd190(plVar1,"handle");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                  }
                  else {
                    local_88 = "handle";
                    local_78 = 0x100005;
                    local_80 = (void *)0x6;
                    lVar8 = FUN_008feca4(plVar1,&local_88);
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                    if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                      local_88 = "handle";
                      local_78 = 0x100005;
                      local_80 = (void *)0x6;
                      puVar9 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
                      if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
                        puVar9 = (undefined8 *)*puVar9;
                      }
                    }
                  }
                  FUN_00e705a0(&local_f0,puVar9);
                  lVar8 = FUN_008fd190(plVar1,"uuid");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                  }
                  else {
                    local_88 = "uuid";
                    local_78 = 0x100005;
                    local_80 = (void *)0x4;
                    lVar8 = FUN_008feca4(plVar1,&local_88);
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                    if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                      local_88 = "uuid";
                      local_78 = 0x100005;
                      local_80 = (void *)0x4;
                      puVar9 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
                      if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
                        puVar9 = (undefined8 *)*puVar9;
                      }
                    }
                  }
                  FUN_008fa54c(&local_88,puVar9);
                  FUN_008fce60(local_e0,&local_88);
                  if (((ulong)local_88 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_74,local_78));
                  }
                  lVar8 = FUN_008fd190(plVar1,"teamUUID");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                  }
                  else {
                    local_88 = "teamUUID";
                    local_78 = 0x100005;
                    local_80 = (void *)0x8;
                    lVar8 = FUN_008feca4(plVar1,&local_88);
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                    if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                      local_88 = "teamUUID";
                      local_78 = 0x100005;
                      local_80 = (void *)0x8;
                      puVar9 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
                      if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
                        puVar9 = (undefined8 *)*puVar9;
                      }
                    }
                  }
                  FUN_008fa54c(&local_88,puVar9);
                  FUN_008fce60(auStack_c8,&local_88);
                  if (((ulong)local_88 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_74,local_78));
                  }
                  lVar8 = FUN_008fd190(plVar1,"teamName");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                  }
                  else {
                    local_88 = "teamName";
                    local_78 = 0x100005;
                    local_80 = (void *)0x8;
                    lVar8 = FUN_008feca4(plVar1,&local_88);
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                    if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                      local_88 = "teamName";
                      local_78 = 0x100005;
                      local_80 = (void *)0x8;
                      puVar9 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
                      if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
                        puVar9 = (undefined8 *)*puVar9;
                      }
                    }
                  }
                  FUN_00e705c8(&local_88,puVar9);
                  FUN_00910394(&local_b0,&local_88);
                  if (local_80 != (void *)0x0) {
                    operator_delete__(local_80);
                    local_88 = (char *)0x0;
                    local_80 = (void *)0x0;
                  }
                  lVar8 = FUN_008fd190(plVar1,"teamTag");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                  }
                  else {
                    local_88 = "teamTag";
                    local_78 = 0x100005;
                    local_80 = (void *)0x7;
                    lVar8 = FUN_008feca4(plVar1,&local_88);
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                    if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                      local_88 = "teamTag";
                      local_78 = 0x100005;
                      local_80 = (void *)0x7;
                      puVar9 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
                      if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
                        puVar9 = (undefined8 *)*puVar9;
                      }
                    }
                  }
                  FUN_00e705c8(&local_88,puVar9);
                  FUN_00910394(&local_a0,&local_88);
                  if (local_80 != (void *)0x0) {
                    operator_delete__(local_80);
                    local_88 = (char *)0x0;
                    local_80 = (void *)0x0;
                  }
                  lVar8 = FUN_008fd190(plVar1,"unread");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
                    bVar3 = false;
                  }
                  else {
                    local_88 = "unread";
                    local_78 = 0x100005;
                    local_80 = (void *)0x6;
                    lVar8 = FUN_008feca4(plVar1,&local_88);
                    bVar3 = false;
                    if ((*(byte *)(lVar8 + 0x11) & 1) != 0) {
                      local_88 = "unread";
                      local_78 = 0x100005;
                      local_80 = (void *)0x6;
                      lVar8 = FUN_008feca4(plVar1,&local_88);
                      bVar3 = *(int *)(lVar8 + 0x10) == 0x102;
                    }
                  }
                  local_90 = bVar3;
                  FUN_00eaed70(param_2 + 0x28,&local_f0);
                }
              }
            }
            uVar11 = uVar11 + 1;
            lVar4 = lVar4 + 0x18;
          } while (uVar11 < *(uint *)(plVar7 + 1));
        }
        goto LAB_00eaec3c;
      }
    }
    *(undefined4 *)(param_2 + 0x58) = 0xfffffffa;
    FUN_00e83324(0xfffffffa);
  }
LAB_00eaec3c:
  lVar4 = FUN_008fd190(plVar6,"reason");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00eaec8c:
    puVar9 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_88 = "reason";
    local_78 = 0x100005;
    local_80 = (void *)0x6;
    lVar4 = FUN_008feca4(plVar6,&local_88);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00eaec8c;
    local_88 = "reason";
    local_78 = 0x100005;
    local_80 = (void *)0x6;
    puVar9 = (undefined8 *)FUN_008feca4(plVar6,&local_88);
    if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
      puVar9 = (undefined8 *)*puVar9;
    }
  }
  FUN_008fa54c(&local_88,puVar9);
  FUN_008fce60(param_2 + 0x40,&local_88);
  if (((ulong)local_88 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_74,local_78));
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
  }
  if ((auStack_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if ((local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = (char *)0x0;
    local_e8 = (void *)0x0;
  }
LAB_00eaed10:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00eaed70(uint *param_1,long param_2)

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
    FUN_00ebdedc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x68;
  thunk_FUN_00e7051c(lVar4 + -0x68,param_2);
  FUN_008fcdb8(lVar4 + -0x58,param_2 + 0x10);
  FUN_008fcdb8(lVar4 + -0x40,param_2 + 0x28);
  thunk_FUN_00e7051c(lVar4 + -0x28,param_2 + 0x40);
  thunk_FUN_00e7051c(lVar4 + -0x18,param_2 + 0x50);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x60);
  return;
}




void FUN_00eaee3c(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  char **local_140 [2];
  void *local_130;
  ulong local_128 [2];
  void *local_118;
  undefined1 auStack_110 [8];
  char *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  void *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_108 = "code";
  local_f8 = 0x100005;
  local_100 = 4;
  puVar2 = (undefined4 *)FUN_008feca4(param_1,&local_108);
  *(undefined4 *)(param_2 + 0x38) = *puVar2;
  FUN_009528b8(param_2 + 0x28,0);
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_108 = "returnValue";
    local_f8 = 0x100005;
    local_100 = 0xb;
    lVar3 = FUN_008feca4(param_1,&local_108);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_108 = (char *)0x0;
      local_100 = 0;
      local_f8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = (void *)0x0;
      local_d0 = (void *)0x0;
      local_e0 = 0;
      local_b8 = 0x400;
      local_b0 = 0;
      local_a8 = 0;
      local_f0 = operator_new(0x28);
      local_f0[3] = 0;
      local_f0[4] = 0;
      local_f0[1] = 0x10000;
      local_f0[2] = 0;
      *local_f0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = "returnValue";
      local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
      local_80 = 0xb;
      local_e8 = local_f0;
      local_a0 = &local_98;
      plVar4 = (long *)FUN_008feca4(param_1,&local_88);
      lVar3 = FUN_008fd190(plVar4,"messages");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
        FUN_00e83324(0xfffffffa);
      }
      else {
        local_88 = "messages";
        local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
        local_80 = 8;
        plVar4 = (long *)FUN_008feca4(plVar4,&local_88);
        if ((int)plVar4[1] != 0) {
          uVar7 = 0;
          do {
            plVar8 = (long *)(*plVar4 + uVar7 * 0x18);
            FUN_00916394(&local_108,plVar8,local_f0);
            FUN_00941408(&local_a0,local_98);
            local_90 = 0;
            local_98 = 0;
            local_a0 = &local_98;
            if (*(uint *)(plVar8 + 1) != 0) {
              puVar6 = (undefined8 *)(*plVar8 + 0x18);
              do {
                local_88 = (char *)0x0;
                local_80 = 0;
                local_78 = (void *)0x0;
                local_128[0] = 0;
                local_128[1] = 0;
                local_118 = (void *)0x0;
                if ((*(byte *)((long)puVar6 + -6) >> 6 & 1) == 0) {
                  puVar5 = (undefined8 *)puVar6[-3];
                }
                else {
                  puVar5 = puVar6 + -3;
                }
                FUN_008fa54c(local_140,puVar5);
                FUN_008fce60(&local_88,local_140);
                if (((ulong)local_140[0] & 1) != 0) {
                  operator_delete(local_130);
                }
                if (*(uint *)(puVar6 + 2) != 0) {
                  puVar5 = puVar6;
                  if ((*(uint *)(puVar6 + 2) >> 0x16 & 1) == 0) {
                    puVar5 = (undefined8 *)*puVar6;
                  }
                  FUN_008fa54c(local_140,puVar5);
                  FUN_008fce60(local_128,local_140);
                  if (((ulong)local_140[0] & 1) != 0) {
                    operator_delete(local_130);
                  }
                }
                local_140[0] = &local_88;
                lVar3 = FUN_00ebe028(&local_a0,&local_88,&DAT_01bf11c8,local_140,auStack_110);
                FUN_008fce60(lVar3 + 0x38,local_128);
                if ((local_128[0] & 1) != 0) {
                  operator_delete(local_118);
                }
                if (((ulong)local_88 & 1) != 0) {
                  operator_delete(local_78);
                }
                puVar5 = puVar6 + 3;
                puVar6 = puVar6 + 6;
              } while (puVar5 != (undefined8 *)(*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30));
            }
            FUN_00eaf1b4(param_2 + 0x28,&local_108);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(plVar4 + 1));
        }
      }
      FUN_00941408(&local_a0,local_98);
      puVar6 = local_e8;
      if (local_e8 != (undefined8 *)0x0) {
        FUN_008fd2c4(local_e8);
        operator_delete(puVar6);
      }
      free(local_d0);
      if (local_d8 != (void *)0x0) {
        operator_delete(local_d8);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

