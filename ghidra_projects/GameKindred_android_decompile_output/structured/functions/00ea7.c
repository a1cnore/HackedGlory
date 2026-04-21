// functions/00ea7 — 6 functions
#include "libGameKindred.h"




void FUN_00ea7104(uint *param_1,long param_2)

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
    FUN_00954080(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_008fcdb8(lVar4 + -0x38,param_2);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_00ea71ac(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  char *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  byte local_110 [16];
  void *local_100;
  byte local_f8 [16];
  void *local_e8;
  undefined4 local_e0;
  byte local_d8 [16];
  void *local_c8;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  undefined1 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_128 = "code";
  local_118 = 0x100005;
  local_120 = 4;
  puVar4 = (undefined4 *)FUN_008feca4(param_1,&local_128);
  *(undefined4 *)(param_2 + 0x38) = *puVar4;
  lVar5 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar5) {
    local_128 = "returnValue";
    local_118 = 0x100005;
    local_120 = 0xb;
    lVar5 = FUN_008feca4(param_1,&local_128);
    if (*(int *)(lVar5 + 0x10) == 4) {
      local_128 = "returnValue";
      local_118 = 0x100005;
      local_120 = 0xb;
      plVar6 = (long *)FUN_008feca4(param_1,&local_128);
      if ((int)plVar6[1] != 0) {
        lVar5 = 0;
        uVar10 = 0;
        do {
          memset(&local_128,0,0x48);
          memset(local_d8,0,0x48);
          plVar1 = (long *)(*plVar6 + lVar5);
          lVar7 = FUN_008fd190(plVar1,"contents");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar7) {
            local_88 = "contents";
            local_78 = 0x100005;
            local_80 = 8;
            lVar7 = FUN_008feca4(plVar1,&local_88);
            if (*(int *)(lVar7 + 0x10) == 4) {
              local_88 = "contents";
              local_78 = 0x100005;
              local_80 = 8;
              puVar8 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
              plVar11 = (long *)*puVar8;
              lVar7 = FUN_008fd190(plVar11,"type");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar7) {
                puVar8 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_88 = "type";
                local_78 = 0x100005;
                local_80 = 4;
                lVar7 = FUN_008feca4(plVar11,&local_88);
                puVar8 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                  local_88 = "type";
                  local_78 = 0x100005;
                  local_80 = 4;
                  puVar8 = (undefined8 *)FUN_008feca4(plVar11,&local_88);
                  if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                    puVar8 = (undefined8 *)*puVar8;
                  }
                }
              }
              FUN_008fa54c(&local_88,puVar8);
              FUN_008fce60(local_110,&local_88);
              if (((ulong)local_88 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_74,local_78));
              }
              lVar7 = FUN_008fd190(plVar11,"id");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar7) {
                puVar8 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_88 = "id";
                local_78 = 0x100005;
                local_80 = 2;
                lVar7 = FUN_008feca4(plVar11,&local_88);
                puVar8 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                  local_88 = "id";
                  local_78 = 0x100005;
                  local_80 = 2;
                  puVar8 = (undefined8 *)FUN_008feca4(plVar11,&local_88);
                  if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                    puVar8 = (undefined8 *)*puVar8;
                  }
                }
              }
              FUN_008fa54c(&local_88,puVar8);
              FUN_008fce60(local_f8,&local_88);
              if (((ulong)local_88 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_74,local_78));
              }
              lVar7 = FUN_008fd190(plVar11,"amountRange");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar7) {
                local_88 = "amountRange";
                local_78 = 0x100005;
                local_80 = 0xb;
                lVar7 = FUN_008feca4(plVar11,&local_88);
                if (*(int *)(lVar7 + 0x10) == 4) {
                  local_88 = "amountRange";
                  local_78 = 0x100005;
                  local_80 = 0xb;
                  plVar9 = (long *)FUN_008feca4(plVar11,&local_88);
                  if ((*(byte *)(*plVar9 + 0x11) >> 2 & 1) != 0) {
                    local_88 = "amountRange";
                    local_78 = 0x100005;
                    local_80 = 0xb;
                    puVar8 = (undefined8 *)FUN_008feca4(plVar11,&local_88);
                    local_e0 = *(undefined4 *)*puVar8;
                    goto LAB_00ea75e4;
                  }
                }
              }
              local_e0 = 1;
            }
          }
LAB_00ea75e4:
          lVar7 = FUN_008fd190(plVar1,"hashedSku");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_88 = "hashedSku";
            local_78 = 0x100005;
            local_80 = 9;
            lVar7 = FUN_008feca4(plVar1,&local_88);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
              local_88 = "hashedSku";
              local_78 = 0x100005;
              local_80 = 9;
              puVar8 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(&local_88,puVar8);
          FUN_008fce60(&local_128,&local_88);
          if (((ulong)local_88 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_74,local_78));
          }
          lVar7 = FUN_008fd190(plVar1,"description");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_88 = "description";
            local_78 = 0x100005;
            local_80 = 0xb;
            lVar7 = FUN_008feca4(plVar1,&local_88);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
              local_88 = "description";
              local_78 = 0x100005;
              local_80 = 0xb;
              puVar8 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(&local_88,puVar8);
          FUN_008fce60(local_d8,&local_88);
          if (((ulong)local_88 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_74,local_78));
          }
          lVar7 = FUN_008fd190(plVar1,"image");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_88 = "image";
            local_78 = 0x100005;
            local_80 = 5;
            lVar7 = FUN_008feca4(plVar1,&local_88);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
              local_88 = "image";
              local_78 = 0x100005;
              local_80 = 5;
              puVar8 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(&local_88,puVar8);
          FUN_008fce60(local_a8,&local_88);
          if (((ulong)local_88 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_74,local_78));
          }
          lVar7 = FUN_008fd190(plVar1,"icon");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_88 = "icon";
            local_78 = 0x100005;
            local_80 = 4;
            lVar7 = FUN_008feca4(plVar1,&local_88);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
              local_88 = "icon";
              local_78 = 0x100005;
              local_80 = 4;
              puVar8 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(&local_88,puVar8);
          FUN_008fce60(local_c0,&local_88);
          if (((ulong)local_88 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_74,local_78));
          }
          lVar7 = FUN_008fd190(plVar1,"glow");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
            bVar3 = false;
          }
          else {
            local_88 = "glow";
            local_78 = 0x100005;
            local_80 = 4;
            lVar7 = FUN_008feca4(plVar1,&local_88);
            bVar3 = false;
            if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
              local_88 = "glow";
              local_78 = 0x100005;
              local_80 = 4;
              lVar7 = FUN_008feca4(plVar1,&local_88);
              bVar3 = *(int *)(lVar7 + 0x10) == 0x102;
            }
          }
          local_90 = bVar3;
          FUN_00ea7a1c(param_2 + 0x28,&local_128);
          if ((local_a8[0] & 1) != 0) {
            operator_delete(local_98);
          }
          if ((local_c0[0] & 1) != 0) {
            operator_delete(local_b0);
          }
          if ((local_d8[0] & 1) != 0) {
            operator_delete(local_c8);
          }
          if ((local_f8[0] & 1) != 0) {
            operator_delete(local_e8);
          }
          if ((local_110[0] & 1) != 0) {
            operator_delete(local_100);
          }
          if (((ulong)local_128 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_114,local_118));
          }
          uVar10 = uVar10 + 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar10 < *(uint *)(plVar6 + 1));
      }
      goto LAB_00ea79e4;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea79e4:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ea7a1c(uint *param_1,long param_2)

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
    FUN_00954310(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xa0;
  FUN_008fcdb8(lVar4 + -0xa0,param_2);
  FUN_008fcdb8(lVar4 + -0x88,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x70,param_2 + 0x30);
  *(undefined4 *)(lVar4 + -0x58) = *(undefined4 *)(param_2 + 0x48);
  FUN_008fcdb8(lVar4 + -0x50,param_2 + 0x50);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x68);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x80);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x98);
  return;
}




void FUN_00ea7afc(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 local_a0;
  undefined4 local_98;
  char *local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_90 = "code";
  local_80 = 0x100005;
  local_88 = 4;
  puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_90);
  *(undefined4 *)(param_2 + 0x38) = *puVar3;
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar4) {
    local_90 = "returnValue";
    local_80 = 0x100005;
    local_88 = 0xb;
    lVar4 = FUN_008feca4(param_1,&local_90);
    if (*(int *)(lVar4 + 0x10) == 4) {
      local_90 = "returnValue";
      local_80 = 0x100005;
      local_88 = 0xb;
      plVar5 = (long *)FUN_008feca4(param_1,&local_90);
      if ((int)plVar5[1] != 0) {
        lVar4 = 0;
        uVar8 = 0;
        do {
          plVar1 = (long *)(*plVar5 + lVar4);
          uVar7 = 0xffffffff;
          local_a0 = 0xffffffff00000000;
          local_98 = 0xffffffff;
          lVar6 = FUN_008fd190(plVar1,"rarity");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar6) {
            local_90 = "rarity";
            local_80 = 0x100005;
            local_88 = 6;
            lVar6 = FUN_008feca4(plVar1,&local_90);
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) == 0) {
              uVar7 = 0xffffffff;
            }
            else {
              local_90 = "rarity";
              local_80 = 0x100005;
              local_88 = 6;
              puVar3 = (undefined4 *)FUN_008feca4(plVar1,&local_90);
              uVar7 = *puVar3;
            }
          }
          local_a0 = CONCAT44(local_a0._4_4_,uVar7);
          lVar6 = FUN_008fd190(plVar1,"essenceCost");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
            uVar7 = 0xffffffff;
          }
          else {
            local_90 = "essenceCost";
            local_80 = 0x100005;
            local_88 = 0xb;
            lVar6 = FUN_008feca4(plVar1,&local_90);
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) == 0) {
              uVar7 = 0xffffffff;
            }
            else {
              local_90 = "essenceCost";
              local_80 = 0x100005;
              local_88 = 0xb;
              puVar3 = (undefined4 *)FUN_008feca4(plVar1,&local_90);
              uVar7 = *puVar3;
            }
          }
          local_a0 = CONCAT44(uVar7,(undefined4)local_a0);
          lVar6 = FUN_008fd190(plVar1,"essenceGain");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
LAB_00ea7d5c:
            local_98 = 0xffffffff;
          }
          else {
            local_90 = "essenceGain";
            local_80 = 0x100005;
            local_88 = 0xb;
            lVar6 = FUN_008feca4(plVar1,&local_90);
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) == 0) goto LAB_00ea7d5c;
            local_90 = "essenceGain";
            local_80 = 0x100005;
            local_88 = 0xb;
            puVar3 = (undefined4 *)FUN_008feca4(plVar1,&local_90);
            local_98 = *puVar3;
          }
          FUN_00ea7df4(param_2 + 0x28,&local_a0);
          uVar8 = uVar8 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar8 < *(uint *)(plVar5 + 1));
      }
      goto LAB_00ea7db8;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea7db8:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ea7df4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_00eba558(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0xc;
  *(undefined4 *)(lVar2 + -4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + -0xc) = *param_2;
  return;
}




void FUN_00ea7e88(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  bool bVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  char *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  float local_c8;
  undefined4 local_c4;
  char *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_c0 = "code";
  local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
  local_b8 = 4;
  puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_c0);
  *(undefined4 *)(param_2 + 0x60) = *puVar5;
  lVar6 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar6) {
    local_c0 = "returnValue";
    local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
    local_b8 = 0xb;
    lVar6 = FUN_008feca4(param_1,&local_c0);
    if (*(int *)(lVar6 + 0x10) == 3) {
      local_c0 = "returnValue";
      local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
      local_b8 = 0xb;
      uVar7 = FUN_008feca4(param_1,&local_c0);
      local_c0 = (char *)0x0;
      local_b8 = 0;
      local_b0 = (void *)0x0;
      local_a0 = 0;
      uStack_98 = 0;
      local_e0 = (void *)CONCAT44(local_e0._4_4_,0x100005);
      local_f0 = "isValid";
      local_e8 = 7;
      lVar6 = FUN_008feca4(uVar7,&local_f0);
      bVar4 = *(int *)(lVar6 + 0x10) == 0x102;
      *(bool *)(param_2 + 0x58) = bVar4;
      if (bVar4) {
        local_e0 = (void *)CONCAT44(local_e0._4_4_,0x100005);
        local_f0 = "matchId";
        local_e8 = 7;
        plVar8 = (long *)FUN_008feca4(uVar7,&local_f0);
        if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
          plVar8 = (long *)*plVar8;
        }
        FUN_008fa54c(&local_f0,plVar8);
        FUN_008fce60(param_2 + 0x28,&local_f0);
        if (((ulong)local_f0 & 1) != 0) {
          operator_delete(local_e0);
        }
        local_e0 = (void *)CONCAT44(local_e0._4_4_,0x100005);
        local_f0 = "ttl";
        local_e8 = 3;
        FUN_008feca4(uVar7,&local_f0);
        dVar3 = (double)FUN_008fc0f0();
        *(float *)(param_2 + 0x40) = (float)dVar3;
        FUN_00b89368(param_2 + 0x48,0);
        local_f0 = (char *)0x0;
        local_e8 = 0;
        local_e0 = (void *)0x0;
        FUN_00e70510();
        local_78 = 0x100005;
        local_88 = "responses";
        local_80 = 9;
        plVar8 = (long *)FUN_008feca4(uVar7,&local_88);
        if ((int)plVar8[1] != 0) {
          lVar6 = 0;
          uVar10 = 0;
          do {
            lVar1 = *plVar8 + lVar6;
            local_78 = 0x100005;
            local_88 = "playerUUID";
            local_80 = 10;
            plVar9 = (long *)FUN_008feca4(lVar1,&local_88);
            if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
              plVar9 = (long *)*plVar9;
            }
            FUN_008fa54c(&local_88,plVar9);
            FUN_008fce60(&local_f0,&local_88);
            if (((ulong)local_88 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_74,local_78));
            }
            local_88 = "response";
            local_78 = 0x100005;
            local_80 = 8;
            puVar5 = (undefined4 *)FUN_008feca4(lVar1,&local_88);
            local_c4 = *puVar5;
            local_88 = "acceptDelay";
            local_78 = 0x100005;
            local_80 = 0xb;
            FUN_008feca4(lVar1,&local_88);
            dVar3 = (double)FUN_008fc0f0();
            local_c8 = (float)dVar3;
            FUN_00ea81f4(param_2 + 0x48,&local_f0);
            uVar10 = uVar10 + 1;
            lVar6 = lVar6 + 0x18;
          } while (uVar10 < *(uint *)(plVar8 + 1));
        }
        if (local_d0 != (void *)0x0) {
          operator_delete__(local_d0);
          local_d8 = 0;
        }
        if (((ulong)local_f0 & 1) != 0) {
          operator_delete(local_e0);
        }
      }
      FUN_00b89368(&local_a0,1);
      if (((ulong)local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      goto LAB_00ea81c0;
    }
  }
  *(undefined4 *)(param_2 + 0x60) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea81c0:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

