// functions/00b37 — 10 functions
#include "libGameKindred.h"




undefined8 FUN_00b374bc(long param_1)

{
  ulong uVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  void *__s1;
  char *__s2;
  
  if ((*(byte *)(param_1 + 0x480) & 1) == 0) {
    if (*(byte *)(param_1 + 0x480) >> 1 == 0) {
      return 0;
    }
  }
  else if (*(long *)(param_1 + 0x488) == 0) {
    return 0;
  }
  bVar3 = *(byte *)(param_1 + 0x498);
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0) {
      return 0;
    }
  }
  else if (*(long *)(param_1 + 0x4a0) == 0) {
    return 0;
  }
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x4a0);
  }
  if ((uVar1 == 4) &&
     (uVar6 = FUN_0090d610(param_1 + 0x498,0,0xffffffffffffffff,"none",4), (int)uVar6 == 0)) {
    return uVar6;
  }
  lVar7 = FUN_00940bc8();
  lVar8 = FUN_009ec4e0(lVar7 + 8,param_1 + 0x480);
  if (lVar7 + 0x10 != lVar8) {
    bVar3 = *(byte *)(lVar8 + 0x38);
    bVar4 = *(byte *)(param_1 + 0x498);
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = *(size_t *)(lVar8 + 0x40);
    }
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x4a0);
    }
    if (__n == sVar2) {
      __s1 = *(void **)(lVar8 + 0x48);
      __s2 = *(char **)(param_1 + 0x4a8);
      if ((bVar3 & 1) == 0) {
        __s1 = (void *)(lVar8 + 0x39);
      }
      if ((bVar4 & 1) == 0) {
        __s2 = (char *)(param_1 + 0x499);
      }
      if ((bVar3 & 1) == 0) {
        if (__n != 0) {
          pcVar9 = (char *)(lVar8 + 0x39);
          lVar7 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar9 != *__s2) {
              return 1;
            }
            pcVar9 = pcVar9 + 1;
            lVar7 = lVar7 + 1;
            __s2 = __s2 + 1;
          } while (lVar7 != 0);
          return 0;
        }
      }
      else if (__n != 0) {
        iVar5 = memcmp(__s1,__s2,__n);
        if (iVar5 != 0) {
          return 1;
        }
        return 0;
      }
      return 0;
    }
  }
  return 1;
}




undefined4 FUN_00b37614(long param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar5 = FUN_009fded0();
  if (lVar5 == 0) {
    uVar7 = 1;
  }
  else {
    uVar8 = *(uint *)(param_1 + 8);
    if (uVar8 == 0) {
LAB_00b3770c:
      uVar7 = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x10);
      uVar9 = 0;
      uVar7 = 0;
      do {
        if (*(int *)(lVar6 + uVar9 * 0x30 + 8) != 0) {
          lVar10 = 0;
          uVar11 = 0;
          do {
            lVar1 = *(long *)(lVar6 + uVar9 * 0x30 + 0x10) + lVar10;
            bVar3 = *(byte *)(lVar1 + 0x48);
            if ((bVar3 & 1) == 0) {
              if (bVar3 >> 1 != 0) {
LAB_00b37690:
                iVar4 = FUN_009fe4d0(lVar5);
                lVar6 = *(long *)(param_1 + 0x10);
                if (iVar4 == 0) {
                  uVar7 = 1;
                }
                else {
                  iVar2 = *(int *)(*(long *)(lVar6 + uVar9 * 0x30 + 0x10) + lVar10 + 0xc0);
                  if (((iVar2 == 2) || ((iVar4 == 1 && (iVar2 == 0)))) ||
                     ((uVar7 = 1, iVar4 == 2 && (iVar2 == 1)))) goto LAB_00b3770c;
                }
              }
            }
            else if (*(long *)(lVar1 + 0x50) != 0) goto LAB_00b37690;
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 0xd0;
          } while (uVar11 < *(uint *)(lVar6 + uVar9 * 0x30 + 8));
          uVar8 = *(uint *)(param_1 + 8);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
  }
  return uVar7;
}




bool FUN_00b37730(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *__s2;
  char *pcVar4;
  long lVar5;
  void *__s1;
  
  bVar2 = *(byte *)(param_1 + 8);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x10);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x18);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)(param_1 + 9);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar4 != *__s2) {
            return true;
          }
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if (__n != 0) {
      iVar3 = memcmp(__s1,__s2,__n);
      return iVar3 != 0;
    }
    return false;
  }
  return true;
}




bool FUN_00b377e8(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *__s2;
  char *pcVar4;
  long lVar5;
  void *__s1;
  
  bVar2 = *(byte *)(param_1 + 8);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x10);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x18);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)(param_1 + 9);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar4 != *__s2) {
            return true;
          }
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if (__n != 0) {
      iVar3 = memcmp(__s1,__s2,__n);
      return iVar3 != 0;
    }
    return false;
  }
  return true;
}




void FUN_00b378a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00f04924(param_2);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x3d0);
    if (lVar2 != lVar1) {
      if (lVar2 != 0) {
        FUN_00bdbdd4(lVar2,0);
      }
      *(long *)(param_1 + 0x3d0) = lVar1;
      FUN_00bdbdd4(lVar1,1);
      return;
    }
    if (lVar2 != 0) {
      FUN_00bdbdd4(lVar1,0);
      *(undefined8 *)(param_1 + 0x3d0) = 0;
    }
  }
  return;
}




void FUN_00b37910(void)

{
  return;
}




void FUN_00b37914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e0a68;
  FUN_0096bd60();
  return;
}




void FUN_00b37928(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb3792c);
  (*pcVar1)();
}




void FUN_00b3792c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00b379ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  uint *puVar23;
  undefined4 uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  uint uVar28;
  long *plVar29;
  long lVar30;
  code *local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  
  lVar25 = tpidr_el0;
  local_90 = *(long *)(lVar25 + 0x28);
  FUN_00b89cd8();
  plVar29 = param_1 + 0x19;
  *param_1 = (long)&PTR_FUN_027e0a90;
  FUN_00f0d160(plVar29);
  plVar1 = param_1 + 0x3f;
  FUN_00ac5ab8(plVar1,0);
  plVar2 = param_1 + 0x1c0;
  FUN_00f017e8(plVar2);
  param_1[0x1c0] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x1ef;
  FUN_00f11234(plVar3);
  plVar4 = param_1 + 0x223;
  FUN_00ecfd6c(plVar4,0);
  plVar5 = param_1 + 0x2ca;
  FUN_00f0e4a8();
  plVar6 = param_1 + 0x2e8;
  FUN_00f017e8(plVar6);
  plVar7 = param_1 + 0x2f9;
  param_1[0x2e8] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  lVar30 = 0;
  do {
    FUN_00f0d160((long)(param_1 + 0x317) + lVar30);
    lVar30 = lVar30 + 0x130;
  } while (lVar30 != 0x5f0);
  plVar8 = param_1 + 0x3d5;
  FUN_00f0d160();
  plVar9 = param_1 + 0x3fd;
  param_1[0x3fc] = 0;
  param_1[0x3fb] = 0;
  FUN_00f0d160(plVar9);
  plVar10 = param_1 + 0x423;
  FUN_00f0e4a8();
  plVar11 = param_1 + 0x441;
  FUN_00f0d160();
  plVar12 = param_1 + 0x467;
  FUN_00ab6c24(plVar12,0);
  plVar13 = param_1 + 0x71f;
  FUN_00ab6c24(plVar13,0);
  plVar14 = param_1 + 0x9d7;
  FUN_00f0d160();
  plVar15 = param_1 + 0x9fd;
  FUN_00f0e4a8();
  plVar16 = param_1 + 0xa1b;
  FUN_00f0e4a8();
  plVar17 = param_1 + 0xa39;
  FUN_00f11234();
  plVar18 = param_1 + 0xa6d;
  FUN_00f017e8(plVar18);
  plVar19 = param_1 + 0xa7e;
  param_1[0xa6d] = (long)&PTR_FUN_027c1f80;
  FUN_00ab6c24(plVar19,0);
  plVar20 = param_1 + 0xd36;
  FUN_00ab6c24(plVar20,0);
  plVar21 = param_1 + 0xfee;
  FUN_00ab6c24(plVar21,0);
  FUN_00b115dc(param_1 + 0x12a6);
  param_1[0x20b9] = -0xbbe70000;
  param_1[0x20bc] = 0;
  param_1[0x20bb] = 0;
  param_1[0x20ba] = 0;
  *(undefined4 *)(param_1 + 0x20bd) = 1;
  FUN_008fcdb8(param_1 + 0x20be,&DAT_0320ffa8);
  *(undefined2 *)(param_1 + 0x20c1) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00ed026c(plVar4,plVar29,1);
  FUN_00ed026c(plVar4,plVar1,1);
  FUN_00ed026c(plVar4,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  lVar30 = 0;
  do {
    FUN_00f023ec(plVar6,(long)param_1 + lVar30 + 0x18b8,1);
    lVar30 = lVar30 + 0x130;
  } while (lVar30 != 0x5f0);
  FUN_00ed026c(plVar4,plVar9,1);
  FUN_00ed026c(plVar4,plVar10,1);
  FUN_00ed026c(plVar4,plVar11,1);
  FUN_00ed026c(plVar4,plVar14,1);
  FUN_00ed026c(plVar4,plVar15,1);
  FUN_00ed026c(plVar4,plVar12,1);
  FUN_00ed026c(plVar4,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar16,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar17,1);
  FUN_00f023ec(plVar17,plVar18,1);
  FUN_00f023ec(plVar18,plVar19,1);
  uVar26 = FUN_0093d880();
  if ((uVar26 & 1) != 0) {
    FUN_00f023ec(plVar18,plVar20,1);
    FUN_00f023ec(plVar18,plVar21,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x12a6,1);
  FUN_00f0d92c(plVar29,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd8,&DAT_01bee7fa);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
  FUN_00ac5da8(plVar1,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10);
  FUN_00f0e548(param_1 + 0x1d1,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar28 = *(uint *)((long)param_1 + 0xf0c);
  if ((uVar28 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xf0c) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x2600;
    FUN_0091ada4(param_1 + 0x1d1);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  uVar28 = *(uint *)((long)param_1 + 0x16d4);
  if ((uVar28 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x16d4) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x2600;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0d92c(plVar9,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar27 = FUN_00e6ce7c("MENU_PROFILE_GUILD_HOW_TO_ADD",0);
  FUN_00f0d75c(plVar9,uVar27);
  uVar28 = *(uint *)((long)param_1 + 0x206c);
  if ((uVar28 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x206c) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x2600;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_guild_outline");
  uVar28 = *(uint *)((long)param_1 + 0x219c);
  if ((uVar28 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x219c) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x3300;
    FUN_0091ada4(plVar10);
  }
  if ((*(float *)(param_1 + 0x42c) != 0.9) || (*(float *)((long)param_1 + 0x2164) != 0.9)) {
    param_1[0x42c] = 0x3f6666663f666666;
    FUN_0091ada4(plVar10);
  }
  FUN_00f0d92c(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar27 = FUN_00e6ce7c("MENU_PROFILE_GUILD_MEMBER_COUNT",0);
  FUN_00f0d75c(plVar11,uVar27);
  uVar28 = *(uint *)((long)param_1 + 0x228c);
  if ((uVar28 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x228c) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x2600;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0d92c(plVar14,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar27 = FUN_00e6ce7c("MENU_PROFILE_GUILD_MORE_OPTIONS",0);
  FUN_00f0d75c(plVar14,uVar27);
  uVar28 = *(uint *)((long)param_1 + 0x4f3c);
  if ((uVar28 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x4f3c) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0xc80;
    FUN_0091ada4(plVar14);
  }
  FUN_00f0e548(plVar15,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_down");
  uVar28 = *(uint *)((long)param_1 + 0x506c);
  if ((uVar28 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x506c) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0xc80;
    FUN_0091ada4(plVar15);
  }
  uVar27 = FUN_00e6ce7c("MENU_PROFILE_GUILD_LEAVE_GUILD",0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42800000,0,0x447a0000,plVar12,0,uVar27,&local_c0,&DAT_03218ef8,0);
  FUN_00b09454(plVar12,1);
  FUN_00b09144(0x3e4ccccd,plVar12);
  uVar24 = DAT_03210c64;
  local_c0 = thunk_FUN_00b3c0d0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar24;
  FUN_009693a0(param_1 + 0x468,&local_c0);
  FUN_00b0914c(plVar12,1);
  uVar27 = FUN_00e6ce7c("MENU_PROFILE_GUILD_EDIT_TYPE",0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42800000,0,0x447a0000,plVar13,0,uVar27,&local_c0,&DAT_03218ef8,0);
  FUN_00b09454(plVar13,1);
  FUN_00b09144(0x3e4ccccd,plVar13);
  local_c0 = thunk_FUN_00b3c588;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar24;
  FUN_009693a0(param_1 + 0x720,&local_c0);
  FUN_00b0914c(plVar13,1);
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  if ((*(uint *)((long)param_1 + 0x184c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x184c) = *(uint *)((long)param_1 + 0x184c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar7);
  }
  uVar27 = FUN_00e6ce7c("MENU_PROFILE_GUILD_JOIN_DATE",0);
  FUN_00f0d75c(plVar8,uVar27);
  FUN_00f0d378(plVar8,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  if ((*(uint *)((long)param_1 + 0x1f2c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1f2c) = *(uint *)((long)param_1 + 0x1f2c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar8);
  }
  lVar30 = 0;
  do {
    lVar22 = (long)param_1 + lVar30 + 0x18b8;
    FUN_00f0d378(lVar22,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
    uVar28 = *(uint *)((long)param_1 + lVar30 + 0x193c);
    if ((uVar28 & 0x7f80) != 0x3f80) {
      *(uint *)((long)param_1 + lVar30 + 0x193c) = uVar28 & 0xffff807f | 0x3f80;
      FUN_0091ada4(lVar22);
    }
    lVar30 = lVar30 + 0x130;
  } while (lVar30 != 0x5f0);
  uVar27 = FUN_00e6ce7c("MENU_GUILD_HEADER_FAME",0);
  (**(code **)(param_1[0x317] + 0x138))(param_1 + 0x317,uVar27);
  uVar27 = FUN_00e6ce7c("MENU_GUILD_HEADER_BOOSTED",0);
  (**(code **)(param_1[0x33d] + 0x138))(param_1 + 0x33d,uVar27);
  uVar27 = FUN_00e6ce7c("GENERIC_5V5",0);
  (**(code **)(param_1[0x363] + 0x138))(param_1 + 0x363,uVar27);
  uVar27 = FUN_00e6ce7c("GENERIC_3V3",0);
  (**(code **)(param_1[0x389] + 0x138))(param_1 + 0x389,uVar27);
  uVar27 = FUN_00e6ce7c("MENU_GUILD_HEADER_STATUS",0);
  (**(code **)(param_1[0x3af] + 0x138))(param_1 + 0x3af,uVar27);
  FUN_00ed0680(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed04d8(plVar4,0,1);
  FUN_00f0e548(plVar16,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  puVar23 = (uint *)((long)param_1 + 0x515c);
  uVar28 = *puVar23;
  if ((uVar28 & 0x7f80) != 0x6600) {
    *puVar23 = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x6600;
    FUN_0091ada4(plVar16);
    uVar28 = *puVar23;
  }
  local_98 = DAT_03210f58;
  plVar1 = param_1 + 0xa1c;
  *puVar23 = uVar28 & 0xfffffffb | 0x10;
  local_c0 = FUN_00b38808;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_c0 = FUN_00b38808;
  local_98 = DAT_03210f84;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_c0 = FUN_00b38808;
  local_98 = DAT_03210f5c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_c0 = FUN_00b38808;
  local_98 = DAT_03210f88;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_c0 = FUN_00b38808;
  local_98 = DAT_03210f60;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_c0 = FUN_00b38808;
  local_98 = DAT_03210f8c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  *(uint *)((long)param_1 + 0x524c) = *(uint *)((long)param_1 + 0x524c) & 0xfffffffb;
  FUN_00f112f0(plVar17,1);
  uVar27 = FUN_00e6ce7c("MENU_PROFILE_GUILD_REMOVE_MEMBER",0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42800000,0,0x447a0000,plVar19,0,uVar27,&local_c0,&DAT_03218ef8,0);
  FUN_00b09454(plVar19,1);
  FUN_00b09144(0x3e4ccccd,plVar19);
  if ((*(float *)(param_1 + 0xa88) != 0.5) || (*(float *)((long)param_1 + 0x5444) != 0.5)) {
    param_1[0xa88] = 0x3f0000003f000000;
    FUN_0091ada4(plVar19);
  }
  local_c0 = thunk_FUN_00b3bee8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar24;
  FUN_009693a0(param_1 + 0xa7f,&local_c0);
  uVar26 = FUN_0093d880();
  if ((uVar26 & 1) != 0) {
    uVar27 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_PROMOTE_BUTTON_LABEL",0);
    local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
    FUN_00ab703c(0x42800000,0,0x447a0000,plVar20,0,uVar27,&local_c0,&DAT_03218ef8,0);
    FUN_00b09454(plVar20,1);
    FUN_00b09144(0x3e4ccccd,plVar20);
    if ((*(float *)(param_1 + 0xd40) != 0.5) || (*(float *)((long)param_1 + 0x6a04) != 0.5)) {
      param_1[0xd40] = 0x3f0000003f000000;
      FUN_0091ada4(plVar20);
    }
    local_c0 = thunk_FUN_00b3c21c;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = 0;
    plStack_b8 = param_1;
    local_98 = uVar24;
    FUN_009693a0(param_1 + 0xd37,&local_c0);
    uVar27 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_TRANSFER_LEADERSHIP_MEMBER",0);
    local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
    FUN_00ab703c(0x42800000,0,0x447a0000,plVar21,0,uVar27,&local_c0,&DAT_03218ef8,0);
    FUN_00b09454(plVar21,1);
    FUN_00b09144(0x3e4ccccd,plVar21);
    if ((*(float *)(param_1 + 0xff8) != 0.5) || (*(float *)((long)param_1 + 0x7fc4) != 0.5)) {
      param_1[0xff8] = 0x3f0000003f000000;
      FUN_0091ada4(plVar21);
    }
    local_c0 = thunk_FUN_00b3c3f4;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = 0;
    plStack_b8 = param_1;
    local_98 = uVar24;
    FUN_009693a0(param_1 + 0xfef,&local_c0);
  }
  local_98 = FUN_00f048a4("EVENT_DISPLAY_TOOLTIP");
  local_c0 = FUN_00b3883c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  FUN_009693a0(param_1 + 1,&local_c0);
  if (*(long *)(lVar25 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

