// functions/00f1d — 17 functions
#include "libGameKindred.h"




bool FUN_00f1d054(long *param_1,undefined8 param_2)

{
  char *__file;
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  stat sStack_d0;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sStack_d0.__unused[1] = 0;
  sStack_d0.__unused[2] = 0;
  local_40 = (char *)0x0;
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_2,sStack_d0.__unused + 1);
  bVar2 = false;
  if ((uVar4 & 1) != 0) {
    __file = (char *)((ulong)(sStack_d0.__unused + 1) | 1);
    if ((sStack_d0.__unused[1] & 1U) != 0) {
      __file = local_40;
    }
    iVar3 = lstat(__file,&sStack_d0);
    bVar2 = iVar3 == 0;
  }
  if ((sStack_d0.__unused[1] & 1U) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00f1d0f8(long *param_1,undefined8 param_2)

{
  char *__file;
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  stat sStack_d0;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sStack_d0.__unused[1] = 0;
  sStack_d0.__unused[2] = 0;
  local_40 = (char *)0x0;
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_2,sStack_d0.__unused + 1);
  bVar2 = false;
  if ((uVar4 & 1) != 0) {
    __file = (char *)((ulong)(sStack_d0.__unused + 1) | 1);
    if ((sStack_d0.__unused[1] & 1U) != 0) {
      __file = local_40;
    }
    iVar3 = lstat(__file,&sStack_d0);
    bVar2 = false;
    if (iVar3 == 0) {
      bVar2 = ((uint)sStack_d0.st_nlink & 0xf000) == 0x4000;
    }
  }
  if ((sStack_d0.__unused[1] & 1U) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00f1d1ac(long *param_1,undefined8 param_2)

{
  char *__file;
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  stat sStack_d0;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sStack_d0.__unused[1] = 0;
  sStack_d0.__unused[2] = 0;
  local_40 = (char *)0x0;
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_2,sStack_d0.__unused + 1);
  bVar2 = false;
  if ((uVar4 & 1) != 0) {
    __file = (char *)((ulong)(sStack_d0.__unused + 1) | 1);
    if ((sStack_d0.__unused[1] & 1U) != 0) {
      __file = local_40;
    }
    iVar3 = lstat(__file,&sStack_d0);
    bVar2 = false;
    if (iVar3 == 0) {
      bVar2 = ((uint)sStack_d0.st_nlink & 0xf000) == 0xa000;
    }
  }
  if ((sStack_d0.__unused[1] & 1U) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




__off_t FUN_00f1d260(long *param_1,undefined8 param_2)

{
  char *__file;
  long lVar1;
  int iVar2;
  ulong uVar3;
  __off_t _Var4;
  stat sStack_d0;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sStack_d0.__unused[1] = 0;
  sStack_d0.__unused[2] = 0;
  local_40 = (char *)0x0;
  uVar3 = (**(code **)(*param_1 + 0x38))(param_1,param_2,sStack_d0.__unused + 1);
  _Var4 = 0;
  if ((uVar3 & 1) != 0) {
    __file = (char *)((ulong)(sStack_d0.__unused + 1) | 1);
    if ((sStack_d0.__unused[1] & 1U) != 0) {
      __file = local_40;
    }
    iVar2 = lstat(__file,&sStack_d0);
    _Var4 = sStack_d0.st_size;
    if (iVar2 != 0) {
      _Var4 = 0;
    }
  }
  if ((sStack_d0.__unused[1] & 1U) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var4;
}




undefined8 FUN_00f1d308(long param_1,char *param_2)

{
  if (*param_2 != '\0') {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      param_1 = param_1 + 0x29;
    }
    else {
      param_1 = *(long *)(param_1 + 0x38);
    }
    FUN_00f1cd74(param_1);
    return 1;
  }
  return 0;
}




void FUN_00f1d348(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar1 = (uint)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(uint *)(param_2 + 8);
  }
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = uVar1 - 1;
  }
  FUN_0093ddb0(local_58,param_2,0,iVar2,param_2);
  FUN_008fcdb8(local_40,local_58);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1d3f4(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  DIR *__dirp;
  dirent *pdVar6;
  size_t sVar7;
  ulong *puVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulong local_110;
  undefined8 *puStack_108;
  undefined8 *local_100;
  undefined8 *puStack_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  undefined4 *puStack_e0;
  FILE *local_d8;
  ulong local_d0;
  byte local_c0 [16];
  char *local_b0;
  byte local_a8 [8];
  uint local_a0;
  void *local_98;
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_00f1ce5c();
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_02828bb0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  __dirp = opendir(param_3);
  pdVar6 = readdir(__dirp);
  if (pdVar6 != (dirent *)0x0) {
    do {
      if (pdVar6->d_type == '\b') {
        pcVar2 = pdVar6->d_name;
        FUN_008fa54c(local_a8,pcVar2);
        uVar1 = (uint)(local_a8[0] >> 1);
        if ((local_a8[0] & 1) != 0) {
          uVar1 = local_a0;
        }
        if (1 < uVar1) {
          FUN_0093ddb0(&local_90,local_a8,0,2,local_a8);
          FUN_008fcdb8(&local_110,&local_90);
          FUN_008fce60(local_a8,&local_110);
          if ((local_110 & 1) != 0) {
            operator_delete(local_100);
          }
          if (((ulong)local_90 & 1) != 0) {
            operator_delete(local_80);
          }
          FUN_0090dab8(&local_90,param_3,&DAT_03211270);
          sVar7 = strlen(pcVar2);
          puVar8 = (ulong *)FUN_0090de84(&local_90,pcVar2,sVar7);
          local_100 = (undefined8 *)puVar8[2];
          puStack_108 = (undefined8 *)puVar8[1];
          local_110 = *puVar8;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          FUN_008fcdb8(local_c0,&local_110);
          if ((local_110 & 1) != 0) {
            operator_delete(local_100);
          }
          if (((ulong)local_90 & 1) != 0) {
            operator_delete(local_80);
          }
          pcVar2 = (char *)((ulong)local_c0 | 1);
          if ((local_c0[0] & 1) != 0) {
            pcVar2 = local_b0;
          }
          local_110 = local_110 & 0xffffffff00000000;
          puStack_e0 = (undefined4 *)0x0;
          local_e8 = (undefined4 *)0x0;
          local_d0 = 0;
          local_d8 = (FILE *)0x0;
          local_100 = (undefined8 *)0x0;
          puStack_108 = (undefined8 *)0x0;
          local_f0 = (undefined4 *)0x0;
          puStack_f8 = (undefined8 *)0x0;
          local_d8 = fopen(pcVar2,"rb");
          pcVar2 = (char *)((ulong)local_c0 | 1);
          if ((local_c0[0] & 1) != 0) {
            pcVar2 = local_b0;
          }
          uVar4 = FUN_00e6af84(pcVar2);
          local_d0 = CONCAT44(local_d0._4_4_,uVar4);
          piVar9 = (int *)FUN_00e6b098(0,uVar4,local_d8,0);
          piVar11 = piVar9 + 1;
          dVar13 = (double)NEON_ucvtf(local_d0 & 0xffffffff);
          local_110 = CONCAT44(local_110._4_4_,*piVar9);
          local_d0 = CONCAT44(*piVar9 * 0x18,(undefined4)local_d0) | 0x400000000;
          lVar12 = (long)(dVar13 / (double)DAT_03211288);
          FUN_00f1d7f0(&puStack_108);
          if ((int)local_110 != 0) {
            uVar10 = 0;
            do {
              local_80 = *(void **)(piVar11 + 4);
              uStack_88 = *(undefined8 *)(piVar11 + 2);
              local_90 = *(void **)piVar11;
              dVar14 = (double)NEON_ucvtf(local_d0 >> 0x20);
              dVar13 = (double)NEON_ucvtf((ulong)local_80 & 0xffffffff);
              dVar15 = (double)NEON_ucvtf((ulong)local_80 >> 0x20);
              uStack_78 = CONCAT44((int)((dVar14 + dVar13 + dVar15) / (double)DAT_03211288),
                                   (int)((dVar14 + dVar13) / (double)DAT_03211288));
              if (local_100 == puStack_f8) {
                FUN_00f1e800(&puStack_108,&local_90);
              }
              else {
                local_100[3] = uStack_78;
                local_100[2] = local_80;
                local_100[1] = uStack_88;
                *local_100 = local_90;
                local_100 = local_100 + 4;
              }
              uVar10 = uVar10 + 1;
              piVar11 = piVar11 + 6;
            } while (uVar10 < (local_110 & 0xffffffff));
          }
          FUN_00f1d89c(&local_f0,lVar12);
          if (0 < lVar12) {
            do {
              local_90 = (void *)((ulong)local_90 & 0xffffffff00000000);
              if (local_e8 < puStack_e0) {
                *local_e8 = 0;
                local_e8 = local_e8 + 1;
              }
              else {
                FUN_00f1e8f8(&local_f0,&local_90);
              }
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
          FUN_00e6b0f4(piVar9,local_d0 & 0xffffffff);
          local_90 = (void *)((ulong)local_a8 | 1);
          if ((local_a8[0] & 1) != 0) {
            local_90 = local_98;
          }
          FUN_00f1d948(param_1 + 8,&local_90,&local_110);
          if (local_f0 != (undefined4 *)0x0) {
            local_e8 = local_f0;
            operator_delete(local_f0);
          }
          if (puStack_108 != (undefined8 *)0x0) {
            local_100 = puStack_108;
            operator_delete(puStack_108);
          }
          if ((local_c0[0] & 1) != 0) {
            operator_delete(local_b0);
          }
        }
        if ((local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
      }
      pdVar6 = readdir(__dirp);
    } while (pdVar6 != (dirent *)0x0);
  }
  iVar5 = closedir(__dirp);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}




void FUN_00f1d7f0(undefined8 *param_1,ulong param_2)

{
  void *__dest;
  void *__src;
  size_t __n;
  
  __src = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)__src >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __n = param_1[1] - (long)__src;
    __dest = operator_new(param_2 << 5);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *param_1 = __dest;
    param_1[1] = (long)__dest + __n;
    param_1[2] = (void *)((long)__dest + param_2 * 0x20);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}




void FUN_00f1d89c(undefined8 *param_1,ulong param_2)

{
  void *__dest;
  void *__src;
  size_t __n;
  
  __src = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)__src >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __n = param_1[1] - (long)__src;
    __dest = operator_new(param_2 << 2);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *param_1 = __dest;
    param_1[1] = (long)__dest + __n;
    param_1[2] = (void *)((long)__dest + param_2 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}




void FUN_00f1d948(uint *param_1,undefined8 *param_2,undefined8 param_3)

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
  iVar6 = FUN_00f1e9e4(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1db20(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  *param_1 = &PTR_FUN_02828bb0;
  puVar4 = (uint *)(param_1 + 8);
  uVar3 = 0;
  do {
    uVar2 = uVar3;
    uVar1 = (ulong)uVar2;
    if (*puVar4 <= uVar2) break;
    uVar3 = uVar2 + 1;
  } while (*(int *)(param_1[9] + uVar1 * 8 + 4) == -1);
  if (*puVar4 != uVar2) {
    do {
      fclose(*(FILE **)(param_1[0xc] + (ulong)*(uint *)(param_1[9] + uVar1 * 8 + 4) * 0x48 + 0x38));
      uVar3 = (uint)uVar1;
      do {
        uVar3 = uVar3 + 1;
        uVar1 = (ulong)uVar3;
        if (*(uint *)(param_1 + 8) <= uVar3) break;
      } while (*(int *)(param_1[9] + uVar1 * 8 + 4) == -1);
    } while (*(uint *)(param_1 + 8) != uVar3);
  }
  FUN_00f1dc08(puVar4);
  FUN_00f1dc8c(puVar4);
  FUN_00f1cef4(param_1);
  return;
}




void FUN_00f1dc08(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + lVar3) != -1) {
        FUN_00f1e77c(param_1);
        uVar1 = (ulong)*param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar1);
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




void FUN_00f1dc8c(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + lVar3) != -1) {
        FUN_00f1e77c(param_1);
        uVar1 = (ulong)*param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar1);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00f1dd0c(void *param_1)

{
  FUN_00f1db20();
  operator_delete(param_1);
  return;
}




void * FUN_00f1dd30(long *param_1,long param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  void *pvVar13;
  byte local_a8 [16];
  void *local_98;
  undefined4 local_8c;
  void *local_88;
  undefined8 uStack_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar7 = param_2 + 0x39;
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    lVar7 = *(long *)(param_2 + 0x48);
  }
  uVar6 = FUN_00e6a474(lVar7);
  pvVar13 = (void *)0x0;
  if (1 < uVar6) {
    lVar7 = param_2 + 0x39;
    if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
      lVar7 = *(long *)(param_2 + 0x48);
    }
    FUN_008fa54c(local_70,lVar7);
    FUN_00f1d348(local_70,local_70);
    local_88 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      local_88 = local_60;
    }
    lVar7 = FUN_00f1df68(param_1 + 8,&local_88);
    if (lVar7 == 0) {
      pvVar13 = (void *)0x0;
    }
    else {
      local_88 = (void *)0x0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar8 = (**(code **)(*param_1 + 0x38))(param_1,param_2,&local_88);
      pvVar13 = (void *)0x0;
      if ((uVar8 & 1) != 0) {
        local_8c = 0xffffffff;
        lVar9 = param_2 + 0x51;
        if ((*(byte *)(param_2 + 0x50) & 1) != 0) {
          lVar9 = *(long *)(param_2 + 0x60);
        }
        FUN_008fa54c(local_a8,lVar9);
        lVar9 = FUN_00f1e014(lVar7,local_a8,&local_8c);
        if ((local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        lVar5 = DAT_03211288;
        uVar6 = *(uint *)(lVar9 + 0x18);
        uVar11 = *(uint *)(lVar9 + 0x1c);
        uVar8 = (ulong)(int)uVar6;
        lVar10 = DAT_03211288 * uVar8;
        if (uVar6 <= uVar11) {
          lVar12 = *(long *)(lVar7 + 0x20);
          do {
            *(int *)(lVar12 + (uVar8 & 0xffffffff) * 4) =
                 *(int *)(lVar12 + (uVar8 & 0xffffffff) * 4) + 1;
            uVar11 = *(uint *)(lVar9 + 0x1c);
            uVar6 = (int)uVar8 + 1;
            uVar8 = (ulong)uVar6;
          } while (uVar6 <= uVar11);
          uVar6 = *(uint *)(lVar9 + 0x18);
        }
        uVar6 = ((uVar11 + 1) - uVar6) * (int)lVar5;
        lVar10 = lVar10 + (ulong)uVar6;
        iVar3 = *(uint *)(lVar7 + 0x40) - (int)lVar10;
        if (lVar10 <= (long)(ulong)*(uint *)(lVar7 + 0x40)) {
          iVar3 = 0;
        }
        lVar10 = FUN_00e6b098(0,iVar3 + uVar6,*(undefined8 *)(lVar7 + 0x38));
        iVar3 = *(int *)(lVar7 + 0x44);
        iVar2 = *(int *)(lVar9 + 0x10);
        lVar7 = DAT_03211288 * *(int *)(lVar9 + 0x18);
        pvVar13 = operator_new(0x48);
        pvVar1 = (void *)((ulong)local_70 | 1);
        if ((local_70[0] & 1) != 0) {
          pvVar1 = local_60;
        }
        FUN_00f205f0(pvVar13,lVar10 + ((ulong)(uint)(iVar2 + iVar3) - lVar7),
                     *(undefined4 *)(lVar9 + 0x14),param_3,param_1,pvVar1,local_8c);
      }
      if (((ulong)local_88 & 1) != 0) {
        operator_delete(local_78);
      }
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return pvVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00f1df68(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 0x48;
    }
  }
  return 0;
}




undefined8 thunk_FUN_00f1d308(long param_1,char *param_2)

{
  if (*param_2 != '\0') {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      param_1 = param_1 + 0x29;
    }
    else {
      param_1 = *(long *)(param_1 + 0x38);
    }
    FUN_00f1cd74(param_1);
    return 1;
  }
  return 0;
}

