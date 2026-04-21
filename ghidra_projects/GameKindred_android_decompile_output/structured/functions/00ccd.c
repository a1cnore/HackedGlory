// functions/00ccd — 8 functions
#include "libGameKindred.h"




void FUN_00ccd1b0(undefined4 *param_1)

{
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}




void FUN_00ccd1c8(uint *param_1,undefined8 *param_2)

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
    FUN_00b8947c(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0xc;
  *(undefined4 *)(lVar2 + -4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + -0xc) = *param_2;
  return;
}




void FUN_00ccd25c(byte *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  long local_f0;
  ulong local_e8;
  int local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  byte *local_88;
  byte *local_80;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  local_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[1] = 0x10000;
  local_d8[2] = 0;
  *local_d8 = 0;
  local_88 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    local_88 = param_1 + 1;
  }
  local_d0 = local_d8;
  local_80 = local_88;
  FUN_008fd344(&local_f0,&local_88);
  if (local_98 == 0) {
    if (*(long *)(param_2 + 2) != 0) {
      *param_2 = 0;
    }
    if (local_e0 == 3) {
      lVar4 = FUN_008fd190(&local_f0,"season");
      if (local_f0 + (local_e8 & 0xffffffff) * 0x30 != lVar4) {
        local_78 = 0x100005;
        local_88 = (byte *)0x1b99fc2;
        local_80 = (byte *)0x6;
        lVar4 = FUN_008feca4(&local_f0,&local_88);
        if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
          lVar4 = FUN_008fd190(&local_f0,"season");
          if (local_f0 + (local_e8 & 0xffffffff) * 0x30 == lVar4) {
            uVar8 = 0;
          }
          else {
            local_88 = (byte *)0x1b99fc2;
            local_78 = 0x100005;
            local_80 = (byte *)0x6;
            lVar4 = FUN_008feca4(&local_f0,&local_88);
            uVar8 = 0;
            if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
              local_88 = (byte *)0x1b99fc2;
              local_78 = 0x100005;
              local_80 = (byte *)0x6;
              puVar5 = (undefined4 *)FUN_008feca4(&local_f0,&local_88);
              uVar8 = *puVar5;
            }
          }
          param_2[4] = uVar8;
        }
      }
      lVar4 = FUN_008fd190(&local_f0,"rewards");
      if (local_f0 + (local_e8 & 0xffffffff) * 0x30 != lVar4) {
        local_88 = (byte *)0x1ba390e;
        local_78 = 0x100005;
        local_80 = (byte *)0x7;
        lVar4 = FUN_008feca4(&local_f0,&local_88);
        if (*(int *)(lVar4 + 0x10) == 4) {
          local_88 = (byte *)0x1ba390e;
          local_78 = 0x100005;
          local_80 = (byte *)0x7;
          plVar6 = (long *)FUN_008feca4(&local_f0,&local_88);
          if ((int)plVar6[1] != 0) {
            lVar4 = 0;
            uVar9 = 0;
            do {
              plVar1 = (long *)(*plVar6 + lVar4);
              lVar7 = FUN_008fd190(plVar1,"tier");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                uVar8 = 0;
              }
              else {
                local_78 = 0x100005;
                local_88 = (byte *)0x1bf0b36;
                local_80 = (byte *)0x4;
                lVar7 = FUN_008feca4(plVar1,&local_88);
                uVar8 = 0;
                if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                  local_78 = 0x100005;
                  local_88 = (byte *)0x1bf0b36;
                  local_80 = (byte *)0x4;
                  puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_88);
                  uVar8 = *puVar5;
                }
              }
              local_100 = uVar8;
              lVar7 = FUN_008fd190(plVar1,"glory");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                uVar8 = 0;
              }
              else {
                local_78 = 0x100005;
                local_88 = (byte *)0x1bbe907;
                local_80 = (byte *)0x5;
                lVar7 = FUN_008feca4(plVar1,&local_88);
                uVar8 = 0;
                if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                  local_78 = 0x100005;
                  local_88 = (byte *)0x1bbe907;
                  local_80 = (byte *)0x5;
                  puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_88);
                  uVar8 = *puVar5;
                }
              }
              local_fc = uVar8;
              lVar7 = FUN_008fd190(plVar1,"ice");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                uVar8 = 0;
              }
              else {
                local_78 = 0x100005;
                local_88 = (byte *)0x1b9852f;
                local_80 = (byte *)0x3;
                lVar7 = FUN_008feca4(plVar1,&local_88);
                uVar8 = 0;
                if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                  local_78 = 0x100005;
                  local_88 = (byte *)0x1b9852f;
                  local_80 = (byte *)0x3;
                  puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_88);
                  uVar8 = *puVar5;
                }
              }
              local_f8 = uVar8;
              FUN_00ccd1c8(param_2,&local_100);
              uVar9 = uVar9 + 1;
              lVar4 = lVar4 + 0x18;
            } while (uVar9 < *(uint *)(plVar6 + 1));
          }
        }
      }
    }
  }
  puVar3 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_d0);
    operator_delete(puVar3);
  }
  free(local_b8);
  if (local_c0 != (void *)0x0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ccd6c0(long param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long local_1f0;
  ulong local_1e8;
  int local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  void *local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  int local_198;
  undefined8 local_190;
  long local_188;
  ulong local_180;
  int local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  void *local_158;
  void *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int local_130;
  undefined8 local_128;
  byte *local_120;
  byte *pbStack_118;
  void *local_110;
  ulong auStack_108 [2];
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  undefined4 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  *(undefined1 *)(param_1 + 0x20) = 1;
  FUN_00ccdd98(param_1,0);
  lVar8 = *(long *)(param_1 + 0x18);
  puVar1 = (uint *)(param_1 + 0x10);
  if (lVar8 != 0) {
    if (*puVar1 != 0) {
      lVar9 = (ulong)*puVar1 * 0x98;
      do {
        FUN_00b01800(lVar8);
        lVar9 = lVar9 + -0x98;
        lVar8 = lVar8 + 0x98;
      } while (lVar9 != 0);
    }
    *puVar1 = 0;
  }
  bVar2 = *param_2;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_00ccdd64;
  }
  else if ((int)*(undefined8 *)(param_2 + 8) == 0) goto LAB_00ccdd64;
  if ((*param_3 & 1) == 0) {
    if (*param_3 >> 1 == 0) goto LAB_00ccdd64;
  }
  else if ((int)*(undefined8 *)(param_3 + 8) == 0) goto LAB_00ccdd64;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (void *)0x0;
  local_150 = (void *)0x0;
  local_160 = 0;
  local_138 = 0x400;
  local_130 = 0;
  local_128 = 0;
  local_170 = operator_new(0x28);
  local_170[3] = 0;
  local_170[4] = 0;
  local_170[1] = 0x10000;
  local_170[2] = 0;
  *local_170 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = (void *)0x0;
  local_1b8 = (void *)0x0;
  local_1c8 = 0;
  local_1a0 = 0x400;
  local_198 = 0;
  local_190 = 0;
  local_168 = local_170;
  local_1d8 = operator_new(0x28);
  *local_1d8 = 0;
  local_1d8[1] = 0x10000;
  local_1d8[3] = 0;
  local_1d8[4] = 0;
  local_1d8[2] = 0;
  if ((bVar2 & 1) == 0) {
    local_120 = param_2 + 1;
  }
  else {
    local_120 = *(byte **)(param_2 + 0x10);
  }
  local_1d0 = local_1d8;
  pbStack_118 = local_120;
  FUN_008fd344(&local_188,&local_120);
  if ((*param_3 & 1) == 0) {
    local_120 = param_3 + 1;
  }
  else {
    local_120 = *(byte **)(param_3 + 0x10);
  }
  pbStack_118 = local_120;
  FUN_008fd344(&local_1f0,&local_120);
  if (local_198 == 0 && local_130 == 0) {
    if ((local_178 == 4) && ((int)local_180 != 0)) {
      lVar8 = 0;
      uVar10 = 0;
      do {
        auStack_108[0] = 0;
        local_110 = (void *)0x0;
        local_f8 = (void *)0x0;
        auStack_108[1] = 0;
        lVar9 = local_188 + lVar8;
        pbStack_118 = (byte *)0x0;
        local_120 = (byte *)0x0;
        local_88 = "hashedSku";
        local_78 = 0x100005;
        local_80 = 9;
        plVar4 = (long *)FUN_008feca4(lVar9,&local_88);
        if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(&local_88,plVar4);
        FUN_008fce60(&local_120,&local_88);
        if (((ulong)local_88 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_74,local_78));
        }
        local_88 = "assetType";
        local_78 = 0x100005;
        local_80 = 9;
        plVar4 = (long *)FUN_008feca4(lVar9,&local_88);
        if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(&local_88,plVar4);
        FUN_008fce60(auStack_108,&local_88);
        if (((ulong)local_88 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_74,local_78));
        }
        FUN_00ccde94(param_1,&local_120);
        if ((auStack_108[0] & 1) != 0) {
          operator_delete(local_f8);
        }
        if (((ulong)local_120 & 1) != 0) {
          operator_delete(local_110);
        }
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x18;
      } while (uVar10 < (local_180 & 0xffffffff));
    }
    if ((local_1e0 == 4) && ((int)local_1e8 != 0)) {
      lVar8 = 0;
      uVar10 = 0;
      do {
        lVar9 = local_1f0;
        memset(&local_120,0,0x93);
        local_90 = CONCAT13(0xff,(undefined3)local_90);
        lVar9 = lVar9 + lVar8;
        local_88 = "id";
        local_78 = 0x100005;
        local_80 = 2;
        plVar4 = (long *)FUN_008feca4(lVar9,&local_88);
        if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(&local_88,plVar4);
        FUN_008fce60(&local_120,&local_88);
        if (((ulong)local_88 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_74,local_78));
        }
        local_88 = "openSound";
        local_78 = 0x100005;
        local_80 = 9;
        plVar4 = (long *)FUN_008feca4(lVar9,&local_88);
        if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(&local_88,plVar4);
        FUN_008fce60(auStack_108,&local_88);
        if (((ulong)local_88 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_74,local_78));
        }
        local_88 = "mesh";
        local_78 = 0x100005;
        local_80 = 4;
        plVar4 = (long *)FUN_008feca4(lVar9,&local_88);
        if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(&local_88,plVar4);
        FUN_008fce60(local_f0,&local_88);
        if (((ulong)local_88 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_74,local_78));
        }
        local_78 = 0x100005;
        local_88 = "animationReady";
        local_80 = 0xe;
        plVar4 = (long *)FUN_008feca4(lVar9,&local_88);
        if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(&local_88,plVar4);
        FUN_008fce60(local_d8,&local_88);
        if (((ulong)local_88 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_74,local_78));
        }
        local_88 = "textureClosed";
        local_78 = 0x100005;
        local_80 = 0xd;
        plVar4 = (long *)FUN_008feca4(lVar9,&local_88);
        if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(&local_88,plVar4);
        FUN_008fce60(local_c0,&local_88);
        if (((ulong)local_88 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_74,local_78));
        }
        local_88 = "textureOpen";
        local_78 = 0x100005;
        local_80 = 0xb;
        plVar4 = (long *)FUN_008feca4(lVar9,&local_88);
        if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(&local_88,plVar4);
        FUN_008fce60(local_a8,&local_88);
        if (((ulong)local_88 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_74,local_78));
        }
        local_88 = "backgroundTint";
        local_78 = 0x100005;
        local_80 = 0xe;
        puVar5 = (undefined8 *)FUN_008feca4(lVar9,&local_88);
        uVar11 = 0;
        if ((((byte *)*puVar5)[0x11] >> 2 & 1) != 0) {
          uVar11 = (uint)*(byte *)*puVar5;
        }
        local_88 = "backgroundTint";
        local_78 = 0x100005;
        local_80 = 0xe;
        plVar4 = (long *)FUN_008feca4(lVar9,&local_88);
        uVar7 = 0;
        if ((*(byte *)(*plVar4 + 0x29) >> 2 & 1) != 0) {
          uVar7 = *(uint *)(*plVar4 + 0x18);
        }
        local_88 = "backgroundTint";
        local_78 = 0x100005;
        local_80 = 0xe;
        plVar4 = (long *)FUN_008feca4(lVar9,&local_88);
        iVar6 = 0;
        if ((*(byte *)(*plVar4 + 0x41) >> 2 & 1) != 0) {
          iVar6 = *(int *)(*plVar4 + 0x30);
        }
        local_90 = uVar11 | (uVar7 & 0xff) << 8 | iVar6 << 0x10 | 0xff000000;
        FUN_00ccdf30(puVar1,&local_120);
        if ((local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        if ((local_c0[0] & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((local_d8[0] & 1) != 0) {
          operator_delete(local_c8);
        }
        if ((local_f0[0] & 1) != 0) {
          operator_delete(local_e0);
        }
        if ((auStack_108[0] & 1) != 0) {
          operator_delete(local_f8);
        }
        if (((ulong)local_120 & 1) != 0) {
          operator_delete(local_110);
        }
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x18;
      } while (uVar10 < (local_1e8 & 0xffffffff));
    }
  }
  puVar5 = local_1d0;
  if (local_1d0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_1d0);
    operator_delete(puVar5);
  }
  free(local_1b8);
  if (local_1c0 != (void *)0x0) {
    operator_delete(local_1c0);
  }
  puVar5 = local_168;
  if (local_168 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_168);
    operator_delete(puVar5);
  }
  free(local_150);
  if (local_158 != (void *)0x0) {
    operator_delete(local_158);
  }
LAB_00ccdd64:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ccdd98(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x30;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x18);
      do {
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        lVar1 = lVar1 + -0x30;
        pbVar2 = pbVar2 + 0x30;
      } while (lVar1 != 0);
    }
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




void FUN_00ccde24(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x98;
      do {
        FUN_00b01800(lVar1);
        lVar2 = lVar2 + -0x98;
        lVar1 = lVar1 + 0x98;
      } while (lVar2 != 0);
    }
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




void FUN_00ccde94(uint *param_1,long param_2)

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
    FUN_00cd0a2c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_008fcdb8(lVar4 + -0x30,param_2);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x18);
  return;
}




void FUN_00ccdf30(uint *param_1,long param_2)

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
    FUN_00cd0b1c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x98;
  FUN_008fcdb8(lVar4 + -0x98,param_2);
  FUN_008fcdb8(lVar4 + -0x80,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x68,param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x50,param_2 + 0x48);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x60);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x78);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x90);
  return;
}

