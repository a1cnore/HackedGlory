// functions/00963 — 28 functions
#include "libGameKindred.h"




void FUN_00963084(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 18000);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81ce0(param_2,param_1 + 18000);
  return;
}




void FUN_009630c8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x46b0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81e4c(param_2,param_1 + 0x46b0);
  return;
}




void FUN_0096310c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4710);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81c04(param_1 + 0x4710);
  return;
}




void FUN_00963148(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  FUN_00e70a24(param_3,local_50);
  uVar2 = FUN_00e84e4c(param_1 + 0x4770);
  if ((uVar2 & 1) == 0) {
    FUN_00e81d18(param_2,local_50,param_1 + 0x4770);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009631e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  FUN_00e70a24(param_4,local_50);
  uVar2 = FUN_00e84e4c(param_1 + 0x47d0);
  if ((uVar2 & 1) == 0) {
    FUN_00e81d54(param_2,param_3,local_50,param_1 + 0x47d0);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00963280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  FUN_00e70a24(param_4,local_50);
  uVar2 = FUN_00e84e4c(param_1 + 0x4830);
  if ((uVar2 & 1) == 0) {
    FUN_00e81d94(param_2,param_3,local_50,param_1 + 0x4830);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00963320(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4890);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81dd4(param_2,param_3,param_1 + 0x4890);
  return;
}




void FUN_00963378(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x48f0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81e10(param_2,param_3,param_1 + 0x48f0);
  return;
}




void FUN_009633d0(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4950);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81e84(param_2,param_3,param_1 + 0x4950);
  return;
}




void FUN_00963428(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x49b0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81ec0(param_2,param_3,param_1 + 0x49b0);
  return;
}




void FUN_00963480(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4a10);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81f70(param_1 + 0x4a10);
  return;
}




void FUN_009634bc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4a50);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81fa4(param_1 + 0x4a50);
  return;
}




void FUN_009634f8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4a90);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81fd8(param_1 + 0x4a90);
  return;
}




void FUN_00963534(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4ad0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e8200c(param_2,param_3,param_1 + 0x4ad0);
  return;
}




void FUN_0096358c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4bf0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e821dc(param_1 + 0x4bf0);
  return;
}




void FUN_009635c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong local_78 [2];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e4c(param_1 + 0x4c50);
  if ((uVar2 & 1) == 0) {
    local_60[0] = 0;
    local_60[1] = 0;
    local_50 = (void *)0x0;
    FUN_00e70a24(param_3,local_60);
    local_78[0] = 0;
    local_78[1] = 0;
    local_68 = (void *)0x0;
    FUN_00e70a24(param_4,local_78);
    FUN_00e82048(param_2,local_60,local_78,param_1 + 0x4c50);
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00963694(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4cb0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e8212c(param_2,param_1 + 0x4cb0);
  return;
}




void FUN_009636d8(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  long lVar8;
  uint uVar9;
  
  uVar5 = FUN_00e84e4c(param_1 + 0x4d10);
  if ((uVar5 & 1) == 0) {
    FUN_00e820bc(param_2,param_1 + 0x4d10);
    uVar9 = *(uint *)(param_1 + 0x53e8);
    if (uVar9 != 0) {
      uVar5 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x53f0);
        lVar6 = lVar8 + uVar5 * 0x70;
        bVar2 = *(byte *)(lVar6 + 0x28);
        bVar3 = *param_2;
        __n = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          __n = *(size_t *)(lVar6 + 0x30);
        }
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar8 + uVar5 * 0x70 + 0x38);
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)(lVar6 + 0x29);
          }
          __s2 = param_2 + 1;
          if ((bVar3 & 1) != 0) {
            __s2 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pbVar7 = (byte *)(lVar6 + 0x29);
              lVar6 = -(ulong)(bVar2 >> 1);
              do {
                if (*pbVar7 != *__s2) goto LAB_00963800;
                pbVar7 = pbVar7 + 1;
                lVar6 = lVar6 + 1;
                __s2 = __s2 + 1;
              } while (lVar6 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00963800;
          *(undefined1 *)(lVar8 + uVar5 * 0x70 + 0x68) = 1;
        }
LAB_00963800:
        iVar4 = *(int *)(param_1 + 0x562c);
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x562c) = iVar4 + -1;
        }
        if (0 < *(int *)(param_1 + 0x55a8)) {
          FUN_0099cf3c(param_1 + 0x5590,0xffffffff);
          uVar9 = *(uint *)(param_1 + 0x53e8);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar9);
    }
  }
  return;
}




void FUN_00963858(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  long lVar8;
  uint uVar9;
  
  uVar5 = FUN_00e84e4c(param_1 + 0x4d70);
  if ((uVar5 & 1) == 0) {
    FUN_00e820f4(param_2,param_1 + 0x4d70);
    uVar9 = *(uint *)(param_1 + 0x53e8);
    if (uVar9 != 0) {
      uVar5 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x53f0);
        lVar6 = lVar8 + uVar5 * 0x70;
        bVar2 = *(byte *)(lVar6 + 0x28);
        bVar3 = *param_2;
        __n = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          __n = *(size_t *)(lVar6 + 0x30);
        }
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar8 + uVar5 * 0x70 + 0x38);
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)(lVar6 + 0x29);
          }
          __s2 = param_2 + 1;
          if ((bVar3 & 1) != 0) {
            __s2 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pbVar7 = (byte *)(lVar6 + 0x29);
              lVar6 = -(ulong)(bVar2 >> 1);
              do {
                if (*pbVar7 != *__s2) goto LAB_00963980;
                pbVar7 = pbVar7 + 1;
                lVar6 = lVar6 + 1;
                __s2 = __s2 + 1;
              } while (lVar6 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00963980;
          *(undefined1 *)(lVar8 + uVar5 * 0x70 + 0x68) = 1;
        }
LAB_00963980:
        iVar4 = *(int *)(param_1 + 0x562c);
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x562c) = iVar4 + -1;
        }
        if (0 < *(int *)(param_1 + 0x55a8)) {
          FUN_0099cf3c(param_1 + 0x5590,0xffffffff);
          uVar9 = *(uint *)(param_1 + 0x53e8);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar9);
    }
  }
  return;
}




void FUN_009639d8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4dd0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e82164(param_2,param_1 + 0x4dd0);
  return;
}




void FUN_00963a1c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4e30);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e82088(param_1 + 0x4e30);
  return;
}




void FUN_00963a58(void)

{
  return;
}




void FUN_00963a5c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x568b) = param_2 & 1;
  return;
}




void FUN_00963a6c(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e829e0();
    FUN_00e852fc();
    FUN_00e829b4();
    FUN_009615d0(param_1);
    return;
  }
  return;
}




void FUN_00963aac(long param_1)

{
  *(undefined1 *)(param_1 + 0x568d) = 1;
  return;
}




void FUN_00963abc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_58 [16];
  void *local_48;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  uVar2 = FUN_0095fdf0();
  FUN_00e70a24(uVar2,local_40);
  FUN_008fa54c(local_58,"[PLAYER_NAME]");
  FUN_00937db8(param_2,local_58,local_40);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00963b54(void)

{
  size_t sVar1;
  size_t sVar2;
  void *pvVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  size_t sVar10;
  char *pcVar11;
  byte local_4e8 [16];
  void *local_4d8;
  byte local_4d0 [8];
  size_t local_4c8;
  void *local_4c0;
  undefined1 auStack_4b4 [4];
  ulong local_4b0 [2];
  void *local_4a0;
  ulong local_498 [2];
  void *local_488;
  ulong local_480 [2];
  void *local_470;
  ulong local_468 [2];
  void *local_458;
  ulong local_450;
  size_t local_448;
  char *local_440;
  undefined1 auStack_438 [1024];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_450 = 0;
  local_448 = 0;
  local_440 = (char *)0x0;
  FUN_00e81200(&local_450);
  uVar6 = FUN_009480e0();
  local_468[0] = 0;
  local_468[1] = 0;
  local_458 = (void *)0x0;
  local_480[0] = 0;
  local_480[1] = 0;
  local_470 = (void *)0x0;
  local_498[0] = 0;
  local_498[1] = 0;
  local_488 = (void *)0x0;
  local_4b0[0] = 0;
  local_4b0[1] = 0;
  local_4a0 = (void *)0x0;
  FUN_00938640(local_468,auStack_4b4,local_480,local_498,local_4b0);
  FUN_009375d4("initialAccount",auStack_438,0x400,&DAT_01e277f2);
  uVar8 = FUN_008fa54c(local_4d0,auStack_438);
  sVar10 = (size_t)(local_4d0[0] >> 1);
  sVar1 = sVar10;
  if ((local_4d0[0] & 1) != 0) {
    sVar1 = local_4c8;
  }
  if (sVar1 == 0) {
    pcVar9 = (char *)((ulong)&local_450 | 1);
    if ((local_450 & 1) != 0) {
      pcVar9 = local_440;
    }
    uVar8 = FUN_0093727c("initialAccount",pcVar9);
    sVar10 = (size_t)(local_4d0[0] >> 1);
  }
  sVar1 = sVar10;
  if ((local_4d0[0] & 1) != 0) {
    sVar1 = local_4c8;
  }
  if (sVar1 == 0) {
    bVar5 = false;
  }
  else {
    sVar2 = local_450 >> 1 & 0x7f;
    if ((local_450 & 1) != 0) {
      sVar2 = local_448;
    }
    if (sVar1 != sVar2) {
LAB_00963ca0:
      pcVar9 = "alternateGuestPlayer";
      if ((uVar6 & 1) == 0) {
        pcVar9 = "authenticatedPlayer";
      }
      goto LAB_00963d0c;
    }
    pcVar9 = (char *)((ulong)&local_450 | 1);
    if ((local_450 & 1) != 0) {
      pcVar9 = local_440;
    }
    if ((local_4d0[0] & 1) == 0) {
      pcVar11 = (char *)((ulong)local_4d0 | 1);
      do {
        if (*pcVar11 != *pcVar9) goto LAB_00963ca0;
        sVar10 = sVar10 - 1;
        pcVar11 = pcVar11 + 1;
        pcVar9 = pcVar9 + 1;
      } while (sVar10 != 0);
      bVar5 = false;
    }
    else {
      uVar7 = memcmp(local_4c0,pcVar9,sVar1);
      uVar8 = (ulong)uVar7;
      bVar5 = uVar7 != 0;
    }
  }
  pcVar9 = "alternateGuestPlayer";
  if ((uVar6 & 1) == 0) {
    pcVar9 = "authenticatedPlayer";
  }
  if ((!bVar5) && (((uVar6 ^ 1) & 1) == 0)) {
    uVar8 = FUN_00938ac8(uVar8,pcVar9);
    pcVar9 = "alternateGuestPlayer";
    if ((uVar8 & 1) == 0) {
      pcVar9 = "pristineGuestPlayer";
    }
  }
LAB_00963d0c:
  FUN_008fa54c(local_4e8,pcVar9);
  pvVar3 = (void *)((ulong)local_4e8 | 1);
  if ((local_4e8[0] & 1) != 0) {
    pvVar3 = local_4d8;
  }
  FUN_008ffc4c("playerCategory",pvVar3,1);
  if ((local_4e8[0] & 1) != 0) {
    operator_delete(local_4d8);
  }
  if ((local_4d0[0] & 1) != 0) {
    operator_delete(local_4c0);
  }
  if ((local_4b0[0] & 1) != 0) {
    operator_delete(local_4a0);
  }
  if ((local_498[0] & 1) != 0) {
    operator_delete(local_488);
  }
  if ((local_480[0] & 1) != 0) {
    operator_delete(local_470);
  }
  if ((local_468[0] & 1) != 0) {
    operator_delete(local_458);
  }
  if ((local_450 & 1) != 0) {
    operator_delete(local_440);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00963dd4(long param_1,long param_2)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  undefined1 auStack_c4 [4];
  ulong local_c0 [2];
  void *local_b0;
  ulong local_a8 [2];
  void *local_98;
  ulong local_90 [2];
  void *local_80;
  ulong local_78 [2];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00e80f6c();
  if ((uVar5 & 1) != 0) {
    if (*(int *)(param_2 + 0x28) == 0) {
      lVar7 = *(long *)(param_1 + 0x53e0);
      if (lVar7 != 0) {
        uVar2 = *(uint *)(param_1 + 0x53d8);
        if (uVar2 != 0) {
          lVar9 = (ulong)uVar2 * 0x1a8;
          do {
            FUN_00964d08(lVar7);
            lVar9 = lVar9 + -0x1a8;
            lVar7 = lVar7 + 0x1a8;
          } while (lVar9 != 0);
        }
        *(uint *)(param_1 + 0x53d8) = 0;
      }
      FUN_009658c8(param_1 + 0x18);
      uVar5 = FUN_0093dbe8();
      if ((uVar5 & 1) == 0) {
        FUN_009658c8(param_1 + 0x278);
      }
      *(undefined2 *)(param_1 + 0x568e) = 0;
      FUN_008fce60(param_1 + 0x5538,param_2 + 0x310);
      uVar5 = FUN_0093dbe8();
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_00e84e4c(param_1 + 0x39c0);
        if ((uVar5 & 1) == 0) {
          FUN_00e82ec0(param_1 + 0x39c0);
        }
      }
      FUN_00e829e0();
      FUN_00e852fc();
      FUN_00e829b4();
      FUN_00900b68(2);
      local_60[0] = 0;
      local_60[1] = 0;
      local_50 = (void *)0x0;
      FUN_00e81200(local_60);
      FUN_008fce60(param_1 + 0x5520,param_2 + 0x1c0);
      pvVar8 = (void *)((ulong)local_60 | 1);
      *(undefined1 *)(param_1 + 0x5690) = *(undefined1 *)(param_2 + 0x1d8);
      pvVar1 = pvVar8;
      if ((local_60[0] & 1) != 0) {
        pvVar1 = local_50;
      }
      FUN_008ffc4c("playerID",pvVar1,1);
      uVar6 = FUN_00966db0();
      FUN_008ffc4c("region",uVar6,1);
      local_78[0] = 0;
      local_78[1] = 0;
      local_68 = (void *)0x0;
      local_90[0] = 0;
      local_90[1] = 0;
      local_80 = (void *)0x0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_98 = (void *)0x0;
      local_c0[0] = 0;
      local_c0[1] = 0;
      local_b0 = (void *)0x0;
      FUN_00938640(local_78,auStack_c4,local_90,local_a8,local_c0);
      pvVar1 = (void *)((ulong)local_90 | 1);
      if ((local_90[0] & 1) != 0) {
        pvVar1 = local_80;
      }
      FUN_008ffc4c("playerEmail",pvVar1,1);
      FUN_00963b54();
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      uVar5 = FUN_00ec516c();
      if (((uVar5 & 1) != 0) && (uVar5 = FUN_00e81254(), (uVar5 & 1) != 0)) {
        local_78[0] = 0;
        local_78[1] = 0;
        local_68 = (void *)0x0;
        FUN_00e81238(local_78);
        pvVar1 = pvVar8;
        if ((local_60[0] & 1) != 0) {
          pvVar1 = local_50;
        }
        FUN_00ec5178("player_uuid",pvVar1);
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
      }
      uVar5 = FUN_00ec5490();
      if (((uVar5 & 1) != 0) && (uVar5 = FUN_00e81254(), (uVar5 & 1) != 0)) {
        local_78[0] = 0;
        local_78[1] = 0;
        local_68 = (void *)0x0;
        FUN_00e81238(local_78);
        pvVar1 = (void *)((ulong)local_78 | 1);
        if ((local_78[0] & 1) != 0) {
          pvVar1 = local_68;
        }
        if ((local_60[0] & 1) != 0) {
          pvVar8 = local_50;
        }
        FUN_00ec54a4(pvVar1,pvVar8);
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
      }
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
    }
    else {
      uVar6 = FUN_009482e4();
      FUN_008fcdb8(local_60,uVar6);
      FUN_0094800c();
      FUN_009480a8();
      FUN_00948078();
      FUN_009482f4(local_60);
      FUN_009481cc(1);
      FUN_00948018();
      FUN_00900b68(1);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
    }
    bVar4 = FUN_009480e0();
    *(byte *)(param_1 + 0x568c) = bVar4 & 1;
    FUN_009658c8(param_1 + 0x18);
    FUN_009615d0(param_1);
    FUN_009606dc(param_1,0);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

