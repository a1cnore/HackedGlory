// functions/00eb7 — 7 functions
#include "libGameKindred.h"




void FUN_00eb7890(uint *param_1,undefined8 *param_2)

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
    FUN_009561ac(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x58;
  *(undefined8 *)(lVar4 + -0x58) = *param_2;
  FUN_008fcdb8(lVar4 + -0x50,param_2 + 1);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 4);
  FUN_00951160(lVar4 + -0x20,param_2 + 7);
  FUN_009562e4(lVar4 + -0x10,param_2 + 9);
  return;
}




void FUN_00eb7954(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
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
    FUN_009564b0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_008fcdb8(lVar4 + -0x28,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




void FUN_00eb79f0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
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
    FUN_0095658c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_008fcdb8(lVar4 + -0x28,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




void FUN_00eb7a8c(uint *param_1,long param_2)

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
    FUN_00956668(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_008fcdb8(lVar4 + -0x28,param_2);
  *(undefined8 *)(lVar4 + -10) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x18);
  return;
}




void FUN_00eb7b30(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte local_128 [16];
  void *local_118;
  ulong local_110 [2];
  void *local_100;
  ulong auStack_f8 [2];
  void *local_e8;
  char local_e0 [8];
  void *pvStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_b0 = "returnValue";
    pvStack_a0 = (void *)CONCAT44(pvStack_a0._4_4_,0x100005);
    local_a8 = 0xb;
    lVar2 = FUN_008feca4(param_1,&local_b0);
    if (*(int *)(lVar2 + 0x10) == 3) {
      local_b0 = "returnValue";
      pvStack_a0 = (void *)CONCAT44(pvStack_a0._4_4_,0x100005);
      local_a8 = 0xb;
      plVar3 = (long *)FUN_008feca4(param_1,&local_b0);
      if (((int)plVar3[2] == 3) && ((int)plVar3[1] != 0)) {
        puVar6 = (undefined8 *)*plVar3;
        do {
          local_c0 = 0;
          uStack_b8 = 0x100;
          pvStack_d8 = (void *)0x0;
          local_e0[0] = '\0';
          local_e0[1] = '\0';
          local_e0[2] = '\0';
          local_e0[3] = '\0';
          local_e0[4] = '\0';
          local_e0[5] = '\0';
          local_e0[6] = '\0';
          local_e0[7] = '\0';
          uStack_c8 = 0;
          local_d0 = (void *)0x0;
          local_88 = 0;
          pvStack_a0 = (void *)0x0;
          local_a8 = 0;
          uStack_90 = 0;
          local_98 = (void *)0x0;
          local_80 = 0x200;
          local_78 = 0;
          local_b0 = local_e0;
          FUN_00914ff4(puVar6 + 3,&local_b0);
          auStack_f8[0] = 0;
          local_100 = (void *)0x0;
          local_e8 = (void *)0x0;
          auStack_f8[1] = 0;
          local_110[1] = 0;
          local_110[0] = 0;
          puVar5 = puVar6;
          if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
            puVar5 = (undefined8 *)*puVar6;
          }
          FUN_008fa54c(local_128,puVar5);
          FUN_008fce60(local_110,local_128);
          if ((local_128[0] & 1) != 0) {
            operator_delete(local_118);
          }
          uVar4 = FUN_009155f8(local_e0);
          FUN_008fa54c(local_128,uVar4);
          FUN_008fce60(auStack_f8,local_128);
          if ((local_128[0] & 1) != 0) {
            operator_delete(local_118);
          }
          FUN_00eb7d5c(param_2 + 0x28,local_110);
          if ((auStack_f8[0] & 1) != 0) {
            operator_delete(local_e8);
          }
          if ((local_110[0] & 1) != 0) {
            operator_delete(local_100);
          }
          free(local_98);
          if (pvStack_a0 != (void *)0x0) {
            operator_delete(pvStack_a0);
          }
          free(local_d0);
          if (pvStack_d8 != (void *)0x0) {
            operator_delete(pvStack_d8);
          }
          puVar6 = puVar6 + 6;
        } while (puVar6 != (undefined8 *)(*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30));
      }
      goto LAB_00eb7d28;
    }
  }
  FUN_00e83324(0xfffffffa);
LAB_00eb7d28:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00eb7d5c(uint *param_1,long param_2)

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
    FUN_00956b10(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_008fcdb8(lVar4 + -0x30,param_2);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x18);
  return;
}




void FUN_00eb7df8(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  byte local_168 [8];
  ulong local_160;
  void *local_158;
  byte local_150 [16];
  void *local_140;
  byte local_138 [16];
  void *local_128;
  byte local_120 [16];
  void *local_110;
  undefined4 local_108;
  undefined4 local_104;
  char *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  byte local_e8;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  byte local_b8;
  void *local_a8;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_00eb866c(param_2);
  lVar6 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar6) {
    local_100 = "returnValue";
    local_f0 = 0x100005;
    local_f8 = 0xb;
    lVar6 = FUN_008feca4(param_1,&local_100);
    if (*(int *)(lVar6 + 0x10) == 3) {
      local_100 = "returnValue";
      local_f0 = 0x100005;
      local_f8 = 0xb;
      plVar7 = (long *)FUN_008feca4(param_1,&local_100);
      lVar6 = FUN_008fd190(plVar7,"chestSku");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_00eb7efc:
        puVar10 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_100 = "chestSku";
        local_f0 = 0x100005;
        local_f8 = 8;
        lVar6 = FUN_008feca4(plVar7,&local_100);
        if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_00eb7efc;
        local_100 = "chestSku";
        local_f0 = 0x100005;
        local_f8 = 8;
        puVar10 = (undefined8 *)FUN_008feca4(plVar7,&local_100);
        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
          puVar10 = (undefined8 *)*puVar10;
        }
      }
      FUN_008fa54c(&local_100,puVar10);
      FUN_008fce60(param_2 + 0x38,&local_100);
      if (((ulong)local_100 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_ec,local_f0));
      }
      FUN_00956edc(param_2 + 0x28,0);
      lVar6 = FUN_008fd190(plVar7,"chestAwards");
      if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar6) {
        local_100 = "chestAwards";
        local_f0 = 0x100005;
        local_f8 = 0xb;
        lVar6 = FUN_008feca4(plVar7,&local_100);
        if (*(int *)(lVar6 + 0x10) == 4) {
          local_100 = "chestAwards";
          local_f0 = 0x100005;
          local_f8 = 0xb;
          plVar7 = (long *)FUN_008feca4(plVar7,&local_100);
          if ((int)plVar7[1] != 0) {
            lVar6 = 0;
            uVar12 = 0;
            do {
              plVar1 = (long *)(*plVar7 + lVar6);
              memset(local_168,0,0x60);
              lVar9 = FUN_008fd190(plVar1,"type");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
                puVar10 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_f0 = 0x100005;
                local_100 = "type";
                local_f8 = 4;
                lVar9 = FUN_008feca4(plVar1,&local_100);
                puVar10 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                  local_f0 = 0x100005;
                  local_100 = "type";
                  local_f8 = 4;
                  puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_100);
                  if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                    puVar10 = (undefined8 *)*puVar10;
                  }
                }
              }
              FUN_008fa54c(&local_100,puVar10);
              FUN_008fce60(local_168,&local_100);
              if (((ulong)local_100 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_ec,local_f0));
              }
              lVar9 = FUN_008fd190(plVar1,"id");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
                puVar10 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_f0 = 0x100005;
                local_100 = "id";
                local_f8 = 2;
                lVar9 = FUN_008feca4(plVar1,&local_100);
                puVar10 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                  local_f0 = 0x100005;
                  local_100 = "id";
                  local_f8 = 2;
                  puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_100);
                  if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                    puVar10 = (undefined8 *)*puVar10;
                  }
                }
              }
              FUN_008fa54c(&local_100,puVar10);
              FUN_008fce60(local_150,&local_100);
              if (((ulong)local_100 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_ec,local_f0));
              }
              lVar9 = FUN_008fd190(plVar1,"amount");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
                uVar4 = 0;
              }
              else {
                local_100 = "amount";
                local_f0 = 0x100005;
                local_f8 = 6;
                lVar9 = FUN_008feca4(plVar1,&local_100);
                uVar4 = 0;
                if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                  local_100 = "amount";
                  local_f0 = 0x100005;
                  local_f8 = 6;
                  puVar11 = (undefined4 *)FUN_008feca4(plVar1,&local_100);
                  uVar4 = *puVar11;
                }
              }
              local_108 = uVar4;
              lVar9 = FUN_008fd190(plVar1,"originalType");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
                puVar10 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_100 = "originalType";
                local_f0 = 0x100005;
                local_f8 = 0xc;
                lVar9 = FUN_008feca4(plVar1,&local_100);
                puVar10 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                  local_100 = "originalType";
                  local_f0 = 0x100005;
                  local_f8 = 0xc;
                  puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_100);
                  if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                    puVar10 = (undefined8 *)*puVar10;
                  }
                }
              }
              FUN_008fa54c(&local_100,puVar10);
              FUN_008fce60(local_138,&local_100);
              if (((ulong)local_100 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_ec,local_f0));
              }
              lVar9 = FUN_008fd190(plVar1,"originalId");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
                puVar10 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_100 = "originalId";
                local_f0 = 0x100005;
                local_f8 = 10;
                lVar9 = FUN_008feca4(plVar1,&local_100);
                puVar10 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                  local_100 = "originalId";
                  local_f0 = 0x100005;
                  local_f8 = 10;
                  puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_100);
                  if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                    puVar10 = (undefined8 *)*puVar10;
                  }
                }
              }
              FUN_008fa54c(&local_100,puVar10);
              FUN_008fce60(local_120,&local_100);
              if (((ulong)local_100 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_ec,local_f0));
              }
              lVar9 = FUN_008fd190(plVar1,"originalAmount");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
                uVar4 = 0;
              }
              else {
                local_100 = "originalAmount";
                local_f0 = 0x100005;
                local_f8 = 0xe;
                lVar9 = FUN_008feca4(plVar1,&local_100);
                uVar4 = 0;
                if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                  local_100 = "originalAmount";
                  local_f0 = 0x100005;
                  local_f8 = 0xe;
                  puVar11 = (undefined4 *)FUN_008feca4(plVar1,&local_100);
                  uVar4 = *puVar11;
                }
              }
              local_104 = uVar4;
              FUN_00eb86c4(param_2 + 0x28,local_168);
              uVar2 = (ulong)(local_168[0] >> 1);
              if ((local_168[0] & 1) != 0) {
                uVar2 = local_160;
              }
              if (((uVar2 == 6) &&
                  (iVar5 = FUN_0090d610(local_168,0,0xffffffffffffffff,"talent",6), iVar5 == 0)) &&
                 (lVar9 = FUN_008fd190(plVar1,"talentData"),
                 *plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar9)) {
                memset(&local_100,0,0x60);
                local_88 = "talentData";
                local_78 = 0x100005;
                local_80 = 10;
                uVar8 = FUN_008feca4(plVar1,&local_88);
                FUN_00eb35e8(uVar8,&local_100);
                FUN_00eb3af0(param_2 + 0x50,&local_100);
                if ((local_b8 & 1) != 0) {
                  operator_delete(local_a8);
                }
                if ((local_d0 & 1) != 0) {
                  operator_delete(local_c0);
                }
                if ((local_e8 & 1) != 0) {
                  operator_delete(local_d8);
                }
                if (((ulong)local_100 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_ec,local_f0));
                }
              }
              uVar2 = (ulong)(local_168[0] >> 1);
              if ((local_168[0] & 1) != 0) {
                uVar2 = local_160;
              }
              if ((uVar2 == 4) &&
                 (iVar5 = FUN_0090d610(local_168,0,0xffffffffffffffff,&DAT_01b9230f,4), iVar5 == 0))
              {
                FUN_0096204c(param_2 + 0x60,local_150);
              }
              uVar2 = (ulong)(local_168[0] >> 1);
              if ((local_168[0] & 1) != 0) {
                uVar2 = local_160;
              }
              if ((uVar2 == 9) &&
                 (iVar5 = FUN_0090d610(local_168,0,0xffffffffffffffff,"blueprint",9), iVar5 == 0)) {
                FUN_0096204c(param_2 + 0x70,local_150);
              }
              if ((local_120[0] & 1) != 0) {
                operator_delete(local_110);
              }
              if ((local_138[0] & 1) != 0) {
                operator_delete(local_128);
              }
              if ((local_150[0] & 1) != 0) {
                operator_delete(local_140);
              }
              if ((local_168[0] & 1) != 0) {
                operator_delete(local_158);
              }
              uVar12 = uVar12 + 1;
              lVar6 = lVar6 + 0x18;
            } while (uVar12 < *(uint *)(plVar7 + 1));
          }
        }
      }
      goto LAB_00eb8014;
    }
  }
  FUN_00e83324(0xfffffffa);
LAB_00eb8014:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

