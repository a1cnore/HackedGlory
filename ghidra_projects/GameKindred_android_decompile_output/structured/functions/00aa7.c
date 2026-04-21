// functions/00aa7 — 7 functions
#include "libGameKindred.h"




undefined8 FUN_00aa7060(long param_1,undefined8 param_2)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  byte *__s2;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  
  uVar7 = FUN_0093dbe8();
  uVar8 = 0;
  if ((uVar7 & 1) == 0) {
    lVar9 = FUN_00aa69c0(param_1,param_2);
    uVar8 = 0;
    if (lVar9 != 0) {
      uVar7 = FUN_00aa6250(lVar9);
      uVar8 = 0;
      if ((uVar7 & 1) != 0) {
        uVar2 = *(uint *)(lVar9 + 0x10);
        if (uVar2 == 0) {
          uVar8 = 1;
        }
        else {
          lVar9 = *(long *)(lVar9 + 0x18);
          uVar7 = 0;
          uVar3 = *(uint *)(param_1 + 0x460);
          do {
            if (uVar3 == 0) {
              return 0;
            }
            lVar13 = *(long *)(param_1 + 0x468);
            uVar16 = 0;
            pbVar12 = (byte *)0x0;
            pbVar15 = *(byte **)(lVar9 + uVar7 * 8);
            bVar4 = *pbVar15;
            __n = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              __n = *(size_t *)(pbVar15 + 8);
            }
            do {
              pbVar14 = *(byte **)(lVar13 + uVar16 * 8);
              bVar5 = *pbVar14;
              sVar1 = (ulong)(bVar5 >> 1);
              if ((bVar5 & 1) != 0) {
                sVar1 = *(size_t *)(pbVar14 + 8);
              }
              if (sVar1 == __n) {
                pbVar11 = *(byte **)(pbVar14 + 0x10);
                if ((bVar5 & 1) == 0) {
                  pbVar11 = pbVar14 + 1;
                }
                __s2 = pbVar15 + 1;
                if ((bVar4 & 1) != 0) {
                  __s2 = *(byte **)(pbVar15 + 0x10);
                }
                if ((bVar5 & 1) == 0) {
                  if (__n != 0) {
                    lVar10 = -(ulong)(bVar5 >> 1);
                    pbVar11 = pbVar14;
                    do {
                      pbVar11 = pbVar11 + 1;
                      if (*pbVar11 != *__s2) goto LAB_00aa718c;
                      lVar10 = lVar10 + 1;
                      __s2 = __s2 + 1;
                    } while (lVar10 != 0);
                  }
                }
                else if ((__n != 0) && (iVar6 = memcmp(pbVar11,__s2,__n), iVar6 != 0))
                goto LAB_00aa718c;
                pbVar12 = pbVar14;
              }
LAB_00aa718c:
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar3);
            if (pbVar12 == (byte *)0x0) {
              return 0;
            }
            if (*(int *)(pbVar12 + 0x60) < *(int *)(pbVar15 + 0x18)) {
              return 0;
            }
            uVar7 = uVar7 + 1;
            uVar8 = 1;
          } while (uVar7 < uVar2);
        }
      }
    }
  }
  return uVar8;
}




void FUN_00aa71f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  int *piVar10;
  undefined8 *puVar11;
  long *plVar12;
  byte *pbVar13;
  long *plVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined4 uVar20;
  void *local_1d0;
  ulong local_1c8;
  void *local_1c0;
  void *local_1b8;
  ushort local_1b0 [4];
  ulong local_1a8;
  undefined1 *local_1a0;
  byte local_198 [8];
  ulong local_190;
  void *local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_168;
  ulong local_160;
  int local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 local_140;
  void *local_138;
  void *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int local_110;
  undefined8 local_108;
  undefined8 *local_100;
  ulong local_f8;
  int local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  byte *local_90;
  char *local_88;
  char *local_80;
  void *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_0093dbe8();
  if ((uVar6 & 1) != 0) goto LAB_00aa7c84;
  FUN_00aa7cb8(param_1);
  local_100 = (undefined8 *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = (void *)0x0;
  local_c8 = (void *)0x0;
  local_d8 = 0;
  local_b0 = 0x400;
  local_a8 = 0;
  local_a0 = 0;
  local_e8 = operator_new(0x28);
  local_e8[3] = 0;
  local_e8[4] = 0;
  local_e8[1] = 0x10000;
  local_e8[2] = 0;
  *local_e8 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = (void *)0x0;
  local_130 = (void *)0x0;
  local_140 = 0;
  local_118 = 0x400;
  local_110 = 0;
  local_108 = 0;
  local_e0 = local_e8;
  local_150 = operator_new(0x28);
  *local_150 = 0;
  local_150[1] = 0x10000;
  local_150[3] = 0;
  local_150[4] = 0;
  local_150[2] = 0;
  local_148 = local_150;
  if (*(int *)(param_2 + 0x28) == 0) {
LAB_00aa73bc:
    if (local_158 == 3) {
      uVar6 = local_160 & 0xffffffff;
      local_178 = 0;
      uStack_170 = 0;
      local_180 = &local_178;
      if ((int)local_160 != 0) {
        plVar12 = (long *)(local_168 + 0x18);
        lVar19 = local_168;
        do {
          if (((*(uint *)(plVar12 + -1) >> 0x14 & 1) != 0) && ((int)plVar12[2] == 3)) {
            if ((*(uint *)(plVar12 + -1) >> 0x16 & 1) == 0) {
              plVar14 = (long *)plVar12[-3];
            }
            else {
              plVar14 = plVar12 + -3;
            }
            FUN_008fa54c(local_198,plVar14);
            lVar19 = FUN_008fd190(plVar12,"quantity");
            if (*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x30 == lVar19) {
              uVar20 = 0;
            }
            else {
              local_88 = "quantity";
              local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
              local_80 = (char *)0x8;
              lVar19 = FUN_008feca4(plVar12,&local_88);
              uVar20 = 0;
              if ((*(byte *)(lVar19 + 0x11) >> 2 & 1) != 0) {
                local_88 = "quantity";
                local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
                local_80 = (char *)0x8;
                puVar7 = (undefined4 *)FUN_008feca4(plVar12,&local_88);
                uVar20 = *puVar7;
              }
            }
            lVar19 = FUN_008fd190(plVar12,"title");
            if (*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x30 == lVar19) {
              puVar8 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_88 = "title";
              local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
              local_80 = (char *)0x5;
              lVar19 = FUN_008feca4(plVar12,&local_88);
              puVar8 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar19 + 0x12) >> 4 & 1) != 0) {
                local_88 = "title";
                local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
                local_80 = (char *)0x5;
                puVar8 = (undefined8 *)FUN_008feca4(plVar12,&local_88);
                if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                  puVar8 = (undefined8 *)*puVar8;
                }
              }
            }
            FUN_008fa54c(local_1b0,puVar8);
            lVar19 = FUN_008fd190(plVar12,"texture");
            if (*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x30 == lVar19) {
              puVar8 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_88 = "texture";
              local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
              local_80 = (char *)0x7;
              lVar19 = FUN_008feca4(plVar12,&local_88);
              puVar8 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar19 + 0x12) >> 4 & 1) != 0) {
                local_88 = "texture";
                local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
                local_80 = (char *)0x7;
                puVar8 = (undefined8 *)FUN_008feca4(plVar12,&local_88);
                if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                  puVar8 = (undefined8 *)*puVar8;
                }
              }
            }
            FUN_008fa54c(&local_1c8,puVar8);
            lVar19 = FUN_008fd190(plVar12,"subTexture");
            if (*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x30 == lVar19) {
              puVar8 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_88 = "subTexture";
              local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
              local_80 = (char *)0xa;
              lVar19 = FUN_008feca4(plVar12,&local_88);
              puVar8 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar19 + 0x12) >> 4 & 1) != 0) {
                local_88 = "subTexture";
                local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
                local_80 = (char *)0xa;
                puVar8 = (undefined8 *)FUN_008feca4(plVar12,&local_88);
                if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                  puVar8 = (undefined8 *)*puVar8;
                }
              }
            }
            FUN_008fa54c(&local_88,puVar8);
            pvVar9 = operator_new(0x68);
            FUN_00aa7d74(pvVar9,local_198,local_1b0,&local_1c8,&local_88,uVar20);
            local_1d0 = pvVar9;
            FUN_00aa7ddc(param_1 + 0x460,&local_1d0);
            pvVar9 = local_1d0;
            local_90 = local_198;
            lVar19 = FUN_00aa830c(&local_180,local_198,&DAT_01ba3dbd,&local_90,auStack_98);
            *(void **)(lVar19 + 0x38) = pvVar9;
            if (((ulong)local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
            if ((local_1b0[0] & 1) != 0) {
              operator_delete(local_1a0);
            }
            if ((local_198[0] & 1) != 0) {
              operator_delete(local_188);
            }
            uVar6 = local_160 & 0xffffffff;
            lVar19 = local_168;
          }
          plVar14 = plVar12 + 3;
          plVar12 = plVar12 + 6;
        } while (plVar14 != (long *)(lVar19 + uVar6 * 0x30));
      }
      if ((local_a8 == 0) && (local_f0 == 3)) {
        uVar6 = local_f8 & 0xffffffff;
        puVar17 = local_100;
        puVar8 = local_100;
        if ((int)local_f8 != 0) {
          do {
            if ((*(uint *)(puVar8 + 2) >> 0x14 & 1) != 0) {
              puVar17 = puVar8;
              if ((*(uint *)(puVar8 + 2) >> 0x16 & 1) == 0) {
                puVar17 = (undefined8 *)*puVar8;
              }
              FUN_008fa54c(local_198,puVar17);
              puVar17 = puVar8 + 3;
              lVar19 = FUN_008fd190(puVar17,"quantity");
              if (puVar8[3] + (ulong)*(uint *)(puVar8 + 4) * 0x30 == lVar19) {
                iVar5 = 0;
              }
              else {
                local_88 = "quantity";
                local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
                local_80 = (char *)0x8;
                lVar19 = FUN_008feca4(puVar17,&local_88);
                iVar5 = 0;
                if ((*(byte *)(lVar19 + 0x11) >> 2 & 1) != 0) {
                  local_88 = "quantity";
                  local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
                  local_80 = (char *)0x8;
                  piVar10 = (int *)FUN_008feca4(puVar17,&local_88);
                  iVar5 = *piVar10;
                }
              }
              lVar19 = FUN_008fd190(puVar17,"craftingSKU");
              if (puVar8[3] + (ulong)*(uint *)(puVar8 + 4) * 0x30 == lVar19) {
                puVar11 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_88 = "craftingSKU";
                local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
                local_80 = (char *)0xb;
                lVar19 = FUN_008feca4(puVar17,&local_88);
                puVar11 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar19 + 0x12) >> 4 & 1) != 0) {
                  local_88 = "craftingSKU";
                  local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
                  local_80 = (char *)0xb;
                  puVar11 = (undefined8 *)FUN_008feca4(puVar17,&local_88);
                  if ((*(byte *)((long)puVar11 + 0x12) >> 6 & 1) == 0) {
                    puVar11 = (undefined8 *)*puVar11;
                  }
                }
              }
              FUN_008fa54c(local_1b0,puVar11);
              local_1c8 = 0;
              local_1c0 = (void *)0x0;
              lVar19 = FUN_008fd190(puVar17,"craftingRequirements");
              if (puVar8[3] + (ulong)*(uint *)(puVar8 + 4) * 0x30 == lVar19) {
LAB_00aa79e4:
                uVar6 = (ulong)((byte)local_1b0[0] >> 1);
                if ((local_1b0[0] & 1) != 0) {
                  uVar6 = local_1a8;
                }
                if (uVar6 == 0) goto LAB_00aa7a04;
                uVar20 = 1;
              }
              else {
                local_88 = "craftingRequirements";
                local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
                local_80 = (char *)0x14;
                lVar19 = FUN_008feca4(puVar17,&local_88);
                if (*(int *)(lVar19 + 0x10) != 3) goto LAB_00aa79e4;
                local_88 = "craftingRequirements";
                local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
                local_80 = (char *)0x14;
                plVar12 = (long *)FUN_008feca4(puVar17,&local_88);
                if ((int)plVar12[1] == 0) goto LAB_00aa79e4;
                puVar17 = (undefined8 *)*plVar12;
                bVar4 = true;
                do {
                  puVar11 = puVar17;
                  if ((*(byte *)((long)puVar17 + 0x12) >> 6 & 1) == 0) {
                    puVar11 = (undefined8 *)*puVar17;
                  }
                  FUN_008fa54c(&local_88,puVar11);
                  puVar11 = (undefined8 *)FUN_00aa853c(&local_180,&local_88);
                  bVar3 = false;
                  if ((*(byte *)((long)puVar17 + 0x12) >> 4 & 1) != 0) {
                    if (&local_178 == puVar11) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = false;
                      if ((*(uint *)(puVar17 + 5) >> 9 & 1) != 0) {
                        pbVar13 = operator_new(0x20);
                        uVar20 = *(undefined4 *)(puVar17 + 3);
                        FUN_008fcdb8(pbVar13,&local_88);
                        *(undefined4 *)(pbVar13 + 0x18) = uVar20;
                        local_90 = pbVar13;
                        FUN_00aa7e64(&local_1c8,&local_90);
                        bVar3 = bVar4;
                      }
                    }
                  }
                  if (((ulong)local_88 & 1) != 0) {
                    operator_delete(local_78);
                  }
                  puVar17 = puVar17 + 6;
                  bVar4 = bVar3;
                } while (puVar17 != (undefined8 *)(*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x30))
                ;
                if (bVar3) goto LAB_00aa79e4;
LAB_00aa7a04:
                if ((uint)local_1c8 != 0) {
                  lVar19 = 0;
                  uVar6 = 0;
                  uVar15 = (uint)local_1c8;
                  do {
                    pbVar13 = *(byte **)((long)local_1c0 + lVar19);
                    if (pbVar13 == (byte *)0x0) {
                      puVar17 = (undefined8 *)((long)local_1c0 + uVar6 * 8);
                    }
                    else {
                      if ((*pbVar13 & 1) != 0) {
                        operator_delete(*(void **)(pbVar13 + 0x10));
                      }
                      operator_delete(pbVar13);
                      puVar17 = (undefined8 *)((long)local_1c0 + lVar19);
                      uVar15 = (uint)local_1c8;
                    }
                    uVar6 = uVar6 + 1;
                    lVar19 = lVar19 + 8;
                    *puVar17 = 0;
                  } while (uVar6 < uVar15);
                }
                if (local_1c0 != (void *)0x0) {
                  local_1c8 = local_1c8 & 0xffffffff00000000;
                }
                if ((local_1b0[0] & 1) == 0) {
                  local_1b0[0] = 0;
                }
                else {
                  *local_1a0 = 0;
                  local_1a8 = 0;
                }
                uVar20 = 0;
              }
              lVar19 = FUN_00aa69c0(param_1,local_198);
              if (lVar19 != 0) {
                if (iVar5 < 1) {
                  uVar6 = FUN_00aa7060(param_1,lVar19 + 0x20);
                  if ((uVar6 & 1) == 0) {
                    uVar16 = 4;
                  }
                  else {
                    uVar16 = 3;
                  }
LAB_00aa7af0:
                  *(undefined4 *)(lVar19 + 0x98) = uVar16;
                }
                else if (*(int *)(lVar19 + 0x98) == 4) {
                  uVar16 = 2;
                  goto LAB_00aa7af0;
                }
                FUN_00aa61e8(lVar19,uVar20,&local_1c8,local_1b0);
              }
              if (local_1c0 != (void *)0x0) {
                operator_delete__(local_1c0);
                local_1c8 = 0;
                local_1c0 = (void *)0x0;
              }
              if ((local_1b0[0] & 1) != 0) {
                operator_delete(local_1a0);
              }
              if ((local_198[0] & 1) != 0) {
                operator_delete(local_188);
              }
              uVar6 = local_f8 & 0xffffffff;
              puVar17 = local_100;
            }
            puVar8 = puVar8 + 6;
          } while (puVar8 != puVar17 + uVar6 * 6);
        }
        local_80 = (char *)0x0;
        local_78 = (void *)0x0;
        local_88 = (char *)0x0;
        uVar6 = (ulong)*(uint *)(param_1 + 0x450);
        if (*(uint *)(param_1 + 0x450) == 0) {
LAB_00aa7bf0:
          pvVar9 = (void *)((ulong)&local_88 | 1);
        }
        else {
          uVar18 = 0;
          do {
            lVar19 = *(long *)(*(long *)(param_1 + 0x458) + uVar18 * 8);
            if ((*(uint *)(lVar19 + 0x98) | 2) == 2) {
              FUN_008fcdb8(local_198,lVar19 + 0x20);
              uVar6 = (ulong)(local_198[0] >> 1);
              pvVar9 = (void *)((ulong)local_198 | 1);
              if ((local_198[0] & 1) != 0) {
                uVar6 = local_190;
                pvVar9 = local_188;
              }
              FUN_0090de84(&local_88,pvVar9,uVar6);
              FUN_0090de84(&local_88,",",1);
              if ((local_198[0] & 1) != 0) {
                operator_delete(local_188);
              }
              uVar6 = (ulong)*(uint *)(param_1 + 0x450);
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar6);
          pvVar9 = local_78;
          if (((ulong)local_88 & 1) == 0) goto LAB_00aa7bf0;
        }
        FUN_008ffc4c("HatsOwned",pvVar9,1);
        if (((ulong)local_88 & 1) != 0) {
          operator_delete(local_78);
        }
      }
      FUN_00aa8230(&local_180,local_178);
    }
  }
  else {
    lVar19 = 0;
    uVar6 = 0;
    do {
      pbVar13 = (byte *)(*(long *)(param_2 + 0x30) + lVar19);
      uVar18 = (ulong)(*pbVar13 >> 1);
      if ((*pbVar13 & 1) != 0) {
        uVar18 = *(ulong *)(pbVar13 + 8);
      }
      if ((uVar18 == 3) && (iVar5 = FUN_0090d610(pbVar13,0,0xffffffffffffffff,"hat",3), iVar5 == 0))
      {
        lVar1 = *(long *)(param_2 + 0x30) + lVar19;
        if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
          local_88 = (char *)(lVar1 + 0x19);
        }
        else {
          local_88 = *(char **)(lVar1 + 0x28);
        }
        local_80 = local_88;
        FUN_008fd344(&local_100,&local_88);
      }
      pbVar13 = (byte *)(*(long *)(param_2 + 0x30) + lVar19);
      uVar18 = (ulong)(*pbVar13 >> 1);
      if ((*pbVar13 & 1) != 0) {
        uVar18 = *(ulong *)(pbVar13 + 8);
      }
      if ((uVar18 == 0x10) &&
         (iVar5 = FUN_0090d610(pbVar13,0,0xffffffffffffffff,"craftingmaterial",0x10), iVar5 == 0)) {
        lVar1 = *(long *)(param_2 + 0x30) + lVar19;
        if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
          local_88 = (char *)(lVar1 + 0x19);
        }
        else {
          local_88 = *(char **)(lVar1 + 0x28);
        }
        local_80 = local_88;
        FUN_008fd344(&local_168,&local_88);
      }
      uVar6 = uVar6 + 1;
      lVar19 = lVar19 + 0x30;
    } while (uVar6 < *(uint *)(param_2 + 0x28));
    if (local_110 == 0) goto LAB_00aa73bc;
  }
  puVar8 = local_148;
  if (local_148 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_148);
    operator_delete(puVar8);
  }
  free(local_130);
  if (local_138 != (void *)0x0) {
    operator_delete(local_138);
  }
  puVar8 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_e0);
    operator_delete(puVar8);
  }
  free(local_c8);
  if (local_d0 != (void *)0x0) {
    operator_delete(local_d0);
  }
LAB_00aa7c84:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa7cb8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x460);
  if (uVar1 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      pbVar3 = *(byte **)(*(long *)(param_1 + 0x468) + lVar4);
      if (pbVar3 == (byte *)0x0) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x468) + uVar5 * 8);
      }
      else {
        if ((pbVar3[0x48] & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x58));
        }
        if ((pbVar3[0x30] & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x40));
        }
        if ((pbVar3[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x28));
        }
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x10));
        }
        operator_delete(pbVar3);
        uVar1 = *(uint *)(param_1 + 0x460);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x468) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar2 = 0;
    } while (uVar5 < uVar1);
  }
  if (*(long *)(param_1 + 0x468) != 0) {
    *(undefined4 *)(param_1 + 0x460) = 0;
  }
  return;
}




void FUN_00aa7d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  FUN_008fcdb8();
  FUN_008fcdb8(param_1 + 0x18,param_3);
  FUN_008fcdb8(param_1 + 0x30,param_4);
  FUN_008fcdb8(param_1 + 0x48,param_5);
  *(undefined4 *)(param_1 + 0x60) = param_6;
  return;
}




void FUN_00aa7ddc(uint *param_1,undefined8 *param_2)

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
    FUN_00aa828c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00aa7e64(uint *param_1,undefined8 *param_2)

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
    FUN_00aa62ec(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00aa7eec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x470) = 0;
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) != 0) {
    FUN_00aa6a98(param_1,&DAT_0320ffa8);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    lVar6 = 0;
    uVar3 = 0;
    do {
      lVar7 = *(long *)(param_2 + 0x40);
      lVar1 = lVar7 + lVar6;
      lVar5 = FUN_00aa69c0(param_1,lVar1 + 0x10);
      if (lVar5 != 0) {
        if (*(char *)(lVar1 + 0x28) == '\0') {
          if (*(char *)(lVar7 + lVar6 + 0x29) == '\0') {
            uVar4 = FUN_00aa7060(param_1,lVar5 + 0x20);
            if ((uVar4 & 1) == 0) {
              *(undefined4 *)(lVar5 + 0x98) = 4;
            }
            else {
              *(undefined4 *)(lVar5 + 0x98) = 3;
            }
          }
          else {
            *(undefined4 *)(lVar5 + 0x98) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar5 + 0x98) = 0;
          *(long *)(param_1 + 0x470) = lVar5;
          if ((*(byte *)(lVar5 + 0x20) & 1) == 0) {
            lVar5 = lVar5 + 0x21;
          }
          else {
            lVar5 = *(long *)(lVar5 + 0x30);
          }
          FUN_008fa54c(local_80,lVar5);
          FUN_00aa6a98(param_1,local_80);
          if ((local_80[0] & 1) != 0) {
            operator_delete(local_70);
          }
        }
      }
      uVar3 = uVar3 + 1;
      lVar6 = lVar6 + 0x30;
    } while (uVar3 < *(uint *)(param_2 + 0x38));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    do {
      if (*(code **)(lVar6 + 8) == (code *)0x0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x10));
      }
      else {
        (**(code **)(lVar6 + 8))();
      }
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x28) * 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

