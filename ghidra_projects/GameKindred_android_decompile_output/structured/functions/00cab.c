// functions/00cab — 20 functions
#include "libGameKindred.h"




void FUN_00cab104(int *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar3 = false;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + 0x48);
      if (uVar1 != 0) {
        lVar6 = (ulong)uVar1 * 0x70;
        puVar5 = (undefined4 *)(*(long *)(*(long *)(param_1 + 2) + 0x50) + 0x30);
        do {
          local_60[0] = 0;
          local_60[1] = 0;
          local_50 = (void *)0x0;
          uVar4 = FUN_00caaa48(puVar5 + -0xc,puVar5 + -6,*puVar5,local_60);
          if ((uVar4 & 1) != 0) {
            FUN_0096204c(param_2,local_60);
            FUN_00933c34(param_3,puVar5);
          }
          if ((local_60[0] & 1) != 0) {
            operator_delete(local_50);
          }
          lVar6 = lVar6 + -0x70;
          puVar5 = puVar5 + 0x1c;
        } while (lVar6 != 0);
      }
    }
    bVar3 = *param_2 != 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}




void FUN_00cab1e4(uint *param_1,int *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  bVar2 = false;
  if (param_1 != (uint *)0x0) {
    if (*param_1 != 0) {
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar4 + (ulong)*param_1 * 0x58;
      do {
        if (*(uint *)(lVar4 + 0x48) != 0) {
          lVar6 = (ulong)*(uint *)(lVar4 + 0x48) * 0x70;
          lVar3 = *(long *)(lVar4 + 0x50) + 0x38;
          do {
            memset(local_d0,0,0x60);
            FUN_008fce60(local_d0,lVar3 + -0x20);
            FUN_008fce60(local_b8,lVar3 + -0x38);
            local_70 = *(undefined4 *)(lVar3 + -8);
            FUN_008fce60(local_a0,lVar3 + 0x18);
            FUN_008fce60(local_88,lVar3);
            local_6c = *(undefined4 *)(lVar3 + 0x30);
            FUN_00a87660(param_2,local_d0);
            if ((local_88[0] & 1) != 0) {
              operator_delete(local_78);
            }
            if ((local_a0[0] & 1) != 0) {
              operator_delete(local_90);
            }
            if ((local_b8[0] & 1) != 0) {
              operator_delete(local_a8);
            }
            if ((local_d0[0] & 1) != 0) {
              operator_delete(local_c0);
            }
            lVar6 = lVar6 + -0x70;
            lVar3 = lVar3 + 0x70;
          } while (lVar6 != 0);
        }
        lVar4 = lVar4 + 0x58;
      } while (lVar4 != lVar5);
    }
    bVar2 = *param_2 != 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




undefined4 FUN_00cab348(uint *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong local_f0 [2];
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  byte local_c0;
  void *local_b0;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if (*param_1 != 0) {
    lVar4 = (ulong)*param_1 * 0x68;
    lVar3 = *(long *)(param_1 + 2) + 0x48;
    do {
      local_f0[0] = 0;
      local_f0[1] = 0;
      local_e0 = (void *)0x0;
      uVar2 = FUN_00caaa48(lVar3 + -0x30,lVar3 + -0x48,*(undefined4 *)(lVar3 + 0x18),local_f0);
      if ((uVar2 & 1) != 0) {
        FUN_00cab4d4(local_d8,local_f0,lVar3 + -0x30,*(undefined4 *)(lVar3 + 0x18),&DAT_0320ffa8,
                     &DAT_0320ffa8,0);
        uVar2 = FUN_00caa9f4(lVar3);
        if (((uVar2 & 1) != 0) &&
           (uVar2 = FUN_00caaa48(lVar3,lVar3 + -0x18,*(undefined4 *)(lVar3 + 0x1c),local_f0),
           (uVar2 & 1) != 0)) {
          FUN_008fce60(local_a0,local_f0);
          local_70 = *(undefined4 *)(lVar3 + 0x1c);
          FUN_008fce60(local_88,lVar3);
        }
        FUN_00cab544(param_2,local_d8);
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if ((local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((local_d8[0] & 1) != 0) {
          operator_delete(local_c8);
        }
        uVar5 = 1;
      }
      if ((local_f0[0] & 1) != 0) {
        operator_delete(local_e0);
      }
      lVar4 = lVar4 + -0x68;
      lVar3 = lVar3 + 0x68;
    } while (lVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cab4d4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_008fcdb8();
  FUN_008fcdb8(param_1 + 0x18,param_3);
  *(undefined4 *)(param_1 + 0x30) = param_4;
  FUN_008fcdb8(param_1 + 0x38,param_5);
  FUN_008fcdb8(param_1 + 0x50,param_6);
  *(undefined4 *)(param_1 + 0x68) = param_7;
  return;
}




void FUN_00cab544(uint *param_1,long param_2)

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
    FUN_00af41b4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x70;
  FUN_008fcdb8(lVar4 + -0x70,param_2);
  FUN_008fcdb8(lVar4 + -0x58,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -0x40) = *(undefined4 *)(param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x38);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x50);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x68);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00cab60c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined8 param_5,byte param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  byte local_88 [16];
  void *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  byte local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*param_4 == 0) {
    uVar5 = 1;
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
    FUN_008fcdb8(local_88);
    local_68 = _DAT_03218ef8;
    local_70 = param_1;
    uStack_6c = param_2;
    local_60 = param_3;
    local_5c = param_6 & 1;
    uVar2 = FUN_00cab348(param_4,&local_98);
    uVar5 = 0;
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00f00438("main_nav_heroes");
      if (lVar3 != 0) {
        FUN_00f0036c(local_a0,(ulong)local_a0 | 4);
        lVar4 = FUN_009b8d90();
        lVar3 = FUN_00965ecc(lVar3);
        *(ulong *)(lVar4 + 0xe1b0) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20) / local_a0._4_4_,
                      (float)*(undefined8 *)(lVar3 + 8) / local_a0._0_4_);
      }
      local_5c = param_6 & 1;
      lVar3 = FUN_009b8d90();
      FUN_00af2024(lVar3 + 0xc6e8,&local_98);
      uVar5 = 1;
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    FUN_00af405c(&local_98,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cab74c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_70 [8];
  undefined4 local_68 [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_01995ebc(auStack_70);
  puVar4 = (undefined8 *)*param_3;
  if (puVar4 != (undefined8 *)0x0) {
    iVar8 = 0;
    do {
      puVar6 = (undefined8 *)puVar4[1];
      puVar5 = (undefined4 *)*puVar6;
      if (puVar5 != (undefined4 *)0x0) {
        lVar7 = 0;
        do {
          local_68[lVar7] = *puVar5;
          puVar5 = (undefined4 *)puVar6[lVar7 + 1];
          lVar7 = lVar7 + 1;
        } while (puVar5 != (undefined4 *)0x0);
        switch((uint)lVar7 & 0x7fffffff) {
        case 1:
          uVar3 = *puVar4;
          uVar2 = 1;
          break;
        case 2:
          uVar3 = *puVar4;
          uVar2 = 2;
          break;
        case 3:
          uVar3 = *puVar4;
          uVar2 = 3;
          break;
        case 4:
          uVar3 = *puVar4;
          uVar2 = 4;
          break;
        default:
          goto switchD_00cab7e0_default;
        }
        FUN_01996270(auStack_70,iVar8,local_68,uVar2,1,uVar3);
      }
switchD_00cab7e0_default:
      param_3 = param_3 + 1;
      puVar4 = (undefined8 *)*param_3;
      iVar8 = iVar8 + 1;
    } while (puVar4 != (undefined8 *)0x0);
    if (iVar8 != 0) {
      uVar2 = FUN_019962e8(auStack_70);
      *param_2 = uVar2;
      FUN_00e7cdd0(param_1,uVar2);
    }
  }
  FUN_01995ef4(auStack_70);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cab89c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00cab8a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




bool FUN_00cab8b4(int *param_1)

{
  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) &&
     ((param_1[3] == 0 && (param_1[4] == 0)))) {
    return param_1[5] != 0;
  }
  return true;
}




bool FUN_00cab8f4(int *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 1;
  if (*param_1 != 0) {
    bVar2 = 2;
  }
  bVar1 = *param_1 != 0;
  if (param_1[1] != 0) {
    bVar1 = bVar2;
  }
  if (param_1[2] != 0) {
    bVar1 = bVar1 + 1;
  }
  if (param_1[3] != 0) {
    bVar1 = bVar1 + 1;
  }
  if (param_1[4] != 0) {
    bVar1 = bVar1 + 1;
  }
  if (param_1[5] != 0) {
    bVar1 = bVar1 + 1;
  }
  return bVar1 < 2;
}




int FUN_00cab944(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((iVar1 == 0) && (iVar1 = param_1[1], iVar1 == 0)) && (iVar1 = param_1[2], iVar1 == 0)) &&
     ((iVar1 = param_1[3], iVar1 == 0 && (iVar1 = param_1[4], iVar1 == 0)))) {
    iVar1 = param_1[5];
  }
  return iVar1;
}




char * FUN_00cab978(int *param_1)

{
  char *pcVar1;
  
  if (*param_1 != 0) {
    return "gold";
  }
  if (param_1[1] != 0) {
    return "silver";
  }
  if (param_1[2] != 0) {
    return "opal";
  }
  if (param_1[3] != 0) {
    return "essence";
  }
  if (param_1[4] != 0) {
    return "seasonalKey";
  }
  pcVar1 = "";
  if (param_1[5] != 0) {
    pcVar1 = "epicKey";
  }
  return pcVar1;
}




bool FUN_00cab9fc(undefined8 param_1,byte *param_2)

{
  int iVar1;
  char *__s1;
  byte *__s2;
  
  __s1 = (char *)FUN_00cab978();
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  iVar1 = strcmp(__s1,(char *)__s2);
  return iVar1 == 0;
}




void FUN_00caba38(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00cabab8(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_00cab8b4((int *)(param_1 + 0x18));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar1 = 0;
      goto LAB_00cabb08;
    }
    lVar3 = FUN_009580b8(0);
    lVar4 = 0x5454;
  }
  else {
    lVar3 = FUN_009580b8(0);
    lVar4 = 0x5450;
  }
  uVar1 = *(undefined4 *)(lVar3 + lVar4);
LAB_00cabb08:
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = FUN_009580b8(uVar1);
    uVar1 = *(undefined4 *)(lVar3 + 0x545c);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = FUN_009580b8(uVar1);
    uVar1 = *(undefined4 *)(lVar3 + 0x5458);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = FUN_009580b8(uVar1);
    uVar1 = *(undefined4 *)(lVar3 + 0x5460);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    lVar3 = FUN_009580b8(uVar1);
    uVar1 = *(undefined4 *)(lVar3 + 0x5464);
  }
  return uVar1;
}




bool FUN_00cabb6c(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00cab8b4((uint *)(param_1 + 0x18));
  if ((uVar4 & 1) == 0) {
    bVar3 = true;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 == 0) {
      bVar3 = true;
    }
    else {
      lVar5 = FUN_009580b8();
      bVar3 = uVar1 <= *(uint *)(lVar5 + 0x5450);
    }
    uVar1 = *(uint *)(param_1 + 0x1c);
    bVar2 = bVar3;
    if (uVar1 != 0) {
      lVar5 = FUN_009580b8();
      bVar2 = false;
      if (uVar1 <= *(uint *)(lVar5 + 0x5454)) {
        bVar2 = bVar3;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    bVar3 = bVar2;
    if (uVar1 != 0) {
      lVar5 = FUN_009580b8();
      bVar3 = false;
      if (uVar1 <= *(uint *)(lVar5 + 0x545c)) {
        bVar3 = bVar2;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x24);
    bVar2 = bVar3;
    if (uVar1 != 0) {
      lVar5 = FUN_009580b8();
      bVar2 = false;
      if (uVar1 <= *(uint *)(lVar5 + 0x5458)) {
        bVar2 = bVar3;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    bVar3 = bVar2;
    if (uVar1 != 0) {
      lVar5 = FUN_009580b8();
      bVar3 = false;
      if (uVar1 <= *(uint *)(lVar5 + 0x5460)) {
        bVar3 = bVar2;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x2c);
    if (uVar1 != 0) {
      lVar5 = FUN_009580b8();
      bVar3 = bVar3 && uVar1 <= *(uint *)(lVar5 + 0x5464);
    }
  }
  return bVar3;
}




int FUN_00cabc6c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  
  puVar1 = (uint *)(param_1 + 0x18);
  uVar3 = FUN_00cab8b4(puVar1);
  if ((uVar3 & 1) == 0) {
    iVar5 = -1;
  }
  else {
    if (*puVar1 == 0) {
      iVar5 = -1;
    }
    else {
      lVar4 = FUN_009580b8();
      uVar2 = 0;
      if (*puVar1 != 0) {
        uVar2 = *(uint *)(lVar4 + 0x5450) / *puVar1;
      }
      iVar5 = (int)(float)(int)uVar2;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      lVar4 = FUN_009580b8();
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x1c) != 0) {
        uVar2 = *(uint *)(lVar4 + 0x5454) / *(uint *)(param_1 + 0x1c);
      }
      if (iVar5 < 0) {
        fVar6 = (float)(int)uVar2;
      }
      else {
        fVar6 = (float)iVar5;
        if ((float)(int)uVar2 <= (float)iVar5) {
          fVar6 = (float)(int)uVar2;
        }
      }
      iVar5 = (int)fVar6;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar4 = FUN_009580b8();
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x20) != 0) {
        uVar2 = *(uint *)(lVar4 + 0x545c) / *(uint *)(param_1 + 0x20);
      }
      if (iVar5 < 0) {
        fVar6 = (float)(int)uVar2;
      }
      else {
        fVar6 = (float)iVar5;
        if ((float)(int)uVar2 <= (float)iVar5) {
          fVar6 = (float)(int)uVar2;
        }
      }
      iVar5 = (int)fVar6;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      lVar4 = FUN_009580b8();
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x24) != 0) {
        uVar2 = *(uint *)(lVar4 + 0x5458) / *(uint *)(param_1 + 0x24);
      }
      if (iVar5 < 0) {
        fVar6 = (float)(int)uVar2;
      }
      else {
        fVar6 = (float)iVar5;
        if ((float)(int)uVar2 <= (float)iVar5) {
          fVar6 = (float)(int)uVar2;
        }
      }
      iVar5 = (int)fVar6;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      lVar4 = FUN_009580b8();
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x28) != 0) {
        uVar2 = *(uint *)(lVar4 + 0x5460) / *(uint *)(param_1 + 0x28);
      }
      if (iVar5 < 0) {
        fVar6 = (float)(int)uVar2;
      }
      else {
        fVar6 = (float)iVar5;
        if ((float)(int)uVar2 <= (float)iVar5) {
          fVar6 = (float)(int)uVar2;
        }
      }
      iVar5 = (int)fVar6;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      lVar4 = FUN_009580b8();
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x2c) != 0) {
        uVar2 = *(uint *)(lVar4 + 0x5464) / *(uint *)(param_1 + 0x2c);
      }
      if (iVar5 < 0) {
        fVar6 = (float)(int)uVar2;
      }
      else {
        fVar6 = (float)iVar5;
        if ((float)(int)uVar2 <= (float)iVar5) {
          fVar6 = (float)(int)uVar2;
        }
      }
      iVar5 = (int)fVar6;
    }
  }
  fVar6 = (float)iVar5;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return (int)fVar6;
}




bool FUN_00cabe08(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar2 = *param_1;
  uVar5 = *(ulong *)(param_1 + 8);
  uVar6 = (ulong)(bVar2 >> 1);
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 4) {
    iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"gold",4);
    if (iVar4 != 0) {
      bVar2 = *param_1;
      uVar5 = *(ulong *)(param_1 + 8);
      uVar6 = (ulong)(bVar2 >> 1);
      goto LAB_00cabe6c;
    }
LAB_00cabf28:
    bVar3 = true;
  }
  else {
LAB_00cabe6c:
    uVar1 = uVar6;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar5;
    }
    if (uVar1 == 6) {
      iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"silver",6);
      if (iVar4 == 0) goto LAB_00cabf28;
      bVar2 = *param_1;
      uVar5 = *(ulong *)(param_1 + 8);
      uVar6 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar6;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar5;
    }
    if (uVar1 == 4) {
      iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"opal",4);
      if (iVar4 == 0) goto LAB_00cabf28;
      bVar2 = *param_1;
      uVar5 = *(ulong *)(param_1 + 8);
      uVar6 = (ulong)(bVar2 >> 1);
    }
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar5;
    }
    bVar3 = false;
    if (uVar6 == 7) {
      iVar4 = FUN_0090d610(param_1,0,0xffffffffffffffff,"essence",7);
      bVar3 = iVar4 == 0;
    }
  }
  return bVar3;
}




void FUN_00cabf38(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_1,"gold");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "gold";
    local_50 = 0x100005;
    local_58 = 4;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "gold";
      local_50 = 0x100005;
      local_58 = 4;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  *param_2 = uVar4;
  lVar2 = FUN_008fd190(param_1,"silver");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "silver";
    local_50 = 0x100005;
    local_58 = 6;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "silver";
      local_50 = 0x100005;
      local_58 = 6;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  param_2[1] = uVar4;
  lVar2 = FUN_008fd190(param_1,"opal");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "opal";
    local_50 = 0x100005;
    local_58 = 4;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "opal";
      local_50 = 0x100005;
      local_58 = 4;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  param_2[2] = uVar4;
  lVar2 = FUN_008fd190(param_1,"essence");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "essence";
    local_50 = 0x100005;
    local_58 = 7;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "essence";
      local_50 = 0x100005;
      local_58 = 7;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  param_2[3] = uVar4;
  lVar2 = FUN_008fd190(param_1,"seasonal_key");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "seasonal_key";
    local_50 = 0x100005;
    local_58 = 0xc;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "seasonal_key";
      local_50 = 0x100005;
      local_58 = 0xc;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  param_2[4] = uVar4;
  lVar2 = FUN_008fd190(param_1,"epic_key");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "epic_key";
    local_50 = 0x100005;
    local_58 = 8;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "epic_key";
      local_50 = 0x100005;
      local_58 = 8;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  param_2[5] = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

