// functions/00b62 — 17 functions
#include "libGameKindred.h"




void thunk_FUN_00b6266c(long param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong auStack_68 [2];
  void *pvStack_58;
  ulong auStack_50 [2];
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e80f58();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_009580b8();
    FUN_0095ea84(uVar4,1);
    FUN_00952050(param_1 + 0x2ced0,0);
    FUN_00b5ec30(param_1);
    FUN_009580b8();
    FUN_00960c18();
    *(uint *)(param_1 + 0xb194) = *(uint *)(param_1 + 0xb194) | 4;
    uVar3 = FUN_0093dbe8();
    if ((uVar3 & 1) != 0) {
      auStack_50[0] = 0;
      auStack_50[1] = 0;
      pvStack_40 = (void *)0x0;
      auStack_68[0] = 0;
      auStack_68[1] = 0;
      pvStack_58 = (void *)0x0;
      uVar3 = FUN_00e81200(auStack_50);
      if ((uVar3 & 1) != 0) {
        pvVar1 = (void *)((ulong)auStack_50 | 1);
        if ((auStack_50[0] & 1) != 0) {
          pvVar1 = pvStack_40;
        }
        FUN_00e71d1c(pvVar1,auStack_68);
        FUN_008fce60(param_1 + 0x2d040,auStack_68);
        uVar4 = FUN_009580b8();
        uVar5 = FUN_00ac9cd0(param_1 + 0xb110);
        FUN_00960748(uVar4,auStack_68,uVar5);
        if ((auStack_68[0] & 1) != 0) {
          operator_delete(pvStack_58);
        }
      }
      if ((auStack_50[0] & 1) != 0) {
        operator_delete(pvStack_40);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b627ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong auStack_40 [2];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    FUN_00952050(param_1 + 0x2ced0,0);
    FUN_00b5ec30(param_1);
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    pvStack_30 = (void *)0x0;
    uVar3 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x5da0) & 1) * 0x130 + 0x5c10);
    FUN_00e70a24(uVar3,auStack_40);
    uVar3 = FUN_009580b8();
    FUN_009607b8(uVar3,auStack_40);
    if ((auStack_40[0] & 1) != 0) {
      operator_delete(pvStack_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b62860(long param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  byte abStack_60 [16];
  void *pvStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00b5ea04();
  if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x2cf98) != '\0')) {
    lVar8 = 0xe;
    lVar6 = param_1 + 0x13818;
    do {
      FUN_00b09454(lVar6,0);
      lVar8 = lVar8 + -1;
      lVar6 = lVar6 + 0x1328;
    } while (lVar8 != 0);
    FUN_00ac9cd0(param_1 + 0xb110);
    piVar3 = (int *)FUN_00cead68();
    if (piVar3 != (int *)0x0) {
      uVar4 = FUN_009580b8();
      FUN_009fece0();
      uVar5 = FUN_00a000e8();
      lVar6 = FUN_009fece0();
      FUN_008fa54c(abStack_60,*(undefined8 *)(piVar3 + 6));
      if ((*(byte *)(param_1 + 0xdacc) >> 2 & 1) == 0) {
        puVar7 = &DAT_0320ffa8;
      }
      else {
        puVar7 = (undefined1 *)FUN_00ac9cd0(param_1 + 0xda48);
      }
      FUN_00961184(uVar4,uVar5,lVar6 + 0x88,abStack_60,puVar7);
      if ((abStack_60[0] & 1) != 0) {
        operator_delete(pvStack_50);
      }
    }
    if ((*(char *)(param_1 + 0x2cf9b) != '\0') && (1 < *(uint *)(param_1 + 0x2cf88))) {
      FUN_00900dcc(*piVar3 == 0);
    }
    FUN_00b09454(param_1 + 0x10808,0);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b62418(long param_1)

{
  FUN_00b61e68(param_1 + -0x2c38);
  return;
}




void FUN_00b62424(long param_1)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  short *psVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)(param_1 + 0x2cec8);
  puVar1 = (uint *)(param_1 + 0x2cec0);
  if (lVar9 != 0) {
    if (*puVar1 != 0) {
      lVar12 = (ulong)*puVar1 * 0x188;
      do {
        FUN_0091587c(lVar9);
        lVar12 = lVar12 + -0x188;
        lVar9 = lVar9 + 0x188;
      } while (lVar12 != 0);
    }
    *puVar1 = 0;
  }
  iVar3 = FUN_00915fe4();
  if (iVar3 == 0) {
    pcVar5 = "MENU_PARTY_SAD_AND_EMPTY";
  }
  else {
    pcVar5 = "MENU_PARTY_NO_FRIENDS_ONLINE";
  }
  uVar6 = FUN_00e6ce7c(pcVar5,0);
  FUN_00f0d75c(param_1 + 0x28c08,uVar6);
  iVar3 = FUN_00915ff4();
  if ((iVar3 != 0) && (iVar3 = FUN_00915ff4(), iVar3 != 0)) {
    uVar8 = 0;
    uVar11 = 0;
    do {
      psVar7 = (short *)FUN_00916004(uVar11);
      uVar11 = uVar11 + 1;
      if (*psVar7 != 0) {
        uVar8 = uVar8 + 1;
      }
      uVar4 = FUN_00915ff4();
    } while (uVar11 < uVar4);
    if (uVar8 != 0) {
      local_58 = 0;
      local_50 = (void *)0x0;
      FUN_00b625e0(&local_58,uVar8,0);
      iVar3 = FUN_00915ff4();
      if (iVar3 != 0) {
        uVar11 = 0;
        do {
          psVar7 = (short *)FUN_00916004(uVar11);
          if (*psVar7 != 0) {
            uVar8 = uVar8 - 1;
            *(short **)((long)local_50 + (ulong)uVar8 * 8) = psVar7;
          }
          uVar11 = uVar11 + 1;
          uVar4 = FUN_00915ff4();
        } while (uVar11 < uVar4);
      }
      qsort(local_50,local_58 & 0xffffffff,8,FUN_0091593c);
      if ((int)local_58 != 0) {
        uVar10 = 0;
        do {
          FUN_0091564c(puVar1,*(undefined8 *)((long)local_50 + uVar10 * 8));
          uVar10 = uVar10 + 1;
        } while (uVar10 < (local_58 & 0xffffffff));
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
    }
  }
  FUN_00b5f300(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b625e0(uint *param_1,uint param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00b63f40(param_1,param_2);
    }
    uVar1 = (ulong)*param_1;
    if (*param_1 < param_2) {
      do {
        *(undefined8 *)(*(long *)(param_1 + 2) + uVar1 * 8) = param_3;
        uVar1 = uVar1 + 1;
      } while (param_2 != uVar1);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00b62660(long param_1)

{
  FUN_00b62424(param_1 + -0x2c60);
  return;
}




void FUN_00b6266c(long param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e80f58();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_009580b8();
    FUN_0095ea84(uVar4,1);
    FUN_00952050(param_1 + 0x2ced0,0);
    FUN_00b5ec30(param_1);
    FUN_009580b8();
    FUN_00960c18();
    *(uint *)(param_1 + 0xb194) = *(uint *)(param_1 + 0xb194) | 4;
    uVar3 = FUN_0093dbe8();
    if ((uVar3 & 1) != 0) {
      local_50[0] = 0;
      local_50[1] = 0;
      local_40 = (void *)0x0;
      local_68[0] = 0;
      local_68[1] = 0;
      local_58 = (void *)0x0;
      uVar3 = FUN_00e81200(local_50);
      if ((uVar3 & 1) != 0) {
        pvVar1 = (void *)((ulong)local_50 | 1);
        if ((local_50[0] & 1) != 0) {
          pvVar1 = local_40;
        }
        FUN_00e71d1c(pvVar1,local_68);
        FUN_008fce60(param_1 + 0x2d040,local_68);
        uVar4 = FUN_009580b8();
        uVar5 = FUN_00ac9cd0(param_1 + 0xb110);
        FUN_00960748(uVar4,local_68,uVar5);
        if ((local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
      }
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6279c(long param_1)

{
  FUN_008fce60(param_1 + 0x2d040);
  return;
}




void FUN_00b627ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    FUN_00952050(param_1 + 0x2ced0,0);
    FUN_00b5ec30(param_1);
    local_40[0] = 0;
    local_40[1] = 0;
    local_30 = (void *)0x0;
    uVar3 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x5da0) & 1) * 0x130 + 0x5c10);
    FUN_00e70a24(uVar3,local_40);
    uVar3 = FUN_009580b8();
    FUN_009607b8(uVar3,local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b62860(long param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00b5ea04();
  if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x2cf98) != '\0')) {
    lVar8 = 0xe;
    lVar6 = param_1 + 0x13818;
    do {
      FUN_00b09454(lVar6,0);
      lVar8 = lVar8 + -1;
      lVar6 = lVar6 + 0x1328;
    } while (lVar8 != 0);
    FUN_00ac9cd0(param_1 + 0xb110);
    piVar3 = (int *)FUN_00cead68();
    if (piVar3 != (int *)0x0) {
      uVar4 = FUN_009580b8();
      FUN_009fece0();
      uVar5 = FUN_00a000e8();
      lVar6 = FUN_009fece0();
      FUN_008fa54c(local_60,*(undefined8 *)(piVar3 + 6));
      if ((*(byte *)(param_1 + 0xdacc) >> 2 & 1) == 0) {
        puVar7 = &DAT_0320ffa8;
      }
      else {
        puVar7 = (undefined1 *)FUN_00ac9cd0(param_1 + 0xda48);
      }
      FUN_00961184(uVar4,uVar5,lVar6 + 0x88,local_60,puVar7);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
    }
    if ((*(char *)(param_1 + 0x2cf9b) != '\0') && (1 < *(uint *)(param_1 + 0x2cf88))) {
      FUN_00900dcc(*piVar3 == 0);
    }
    FUN_00b09454(param_1 + 0x10808,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b629cc(long param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x2cec0))) {
    uVar3 = FUN_009580b8();
    FUN_00960db0(uVar3,*(long *)(param_1 + 0x2cec8) + (ulong)param_3 * 0x188 + 8);
    FUN_00b5f1b4(param_1,*(long *)(param_1 + 0x2cec8) + (ulong)param_3 * 0x188 + 0x20,1);
    puVar1 = (uint *)(param_1 + 0x2cf88);
    *puVar1 = *puVar1 + 1;
    FUN_00b605cc(param_1,0);
    *(undefined1 *)(param_1 + 0x2cf99) = 0;
    uVar4 = *puVar1;
    if ((*(uint *)(param_1 + 0x2cfcc) < uVar4) && (*(char *)(param_1 + 0x2cf9b) != '\0')) {
      FUN_008fa54c(local_50,"*GameMode_HF_Private*");
      FUN_00ac9b64(param_1 + 0xb110,local_50,0,0);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar4 = *puVar1;
    }
    if (0xd < uVar4) {
      *(undefined1 *)(param_1 + 0x2cf9a) = 1;
      *(uint *)(param_1 + 0x28dbc) = *(uint *)(param_1 + 0x28dbc) | 4;
      *(uint *)(param_1 + 0x262cc) = *(uint *)(param_1 + 0x262cc) & 0xfffffffb;
      FUN_0099cf94(param_1 + 0x2cee0,0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b62b5c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*(char *)(param_1 + 0x2cf9d) == '\0') && (*(char *)(param_1 + 0x2cf98) != '\0')) {
    plVar1 = (long *)(param_1 + 0x2ced8);
    lVar5 = *plVar1;
    uVar6 = (ulong)*(uint *)(param_1 + ((param_3 << 0x20) >> 0x1e) + 0x2cf50);
    lVar2 = FUN_00e829e0();
    uVar3 = FUN_00e70b88(lVar5 + uVar6 * 0x88 + 0x18,lVar2 + 0xd8);
    if (((uVar3 & 1) != 0) && (*(int *)(*plVar1 + uVar6 * 0x88 + 0x2c) != 2)) {
      uVar3 = FUN_0093dbe8();
      if ((uVar3 & 1) != 0) {
        uVar4 = FUN_009fece0();
        FUN_009fff44(uVar4,*plVar1 + uVar6 * 0x88);
        return;
      }
      uVar4 = FUN_009580b8();
      FUN_00960e18(uVar4,*plVar1 + uVar6 * 0x88,&DAT_0320ffa8);
      return;
    }
  }
  return;
}




void FUN_00b62c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00b62c58(param_1,param_3);
  return;
}




void FUN_00b62c58(long param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  ushort *puVar8;
  long lVar9;
  float fVar10;
  
  if ((*(char *)(param_1 + 0x2cf98) != '\0') && (*(char *)(param_1 + 0x2cf9b) == '\0')) {
    if (*(char *)(param_1 + 0x2cf9d) == '\0') {
      if ((param_2 != 0xffffffff) &&
         (puVar2 = (uint *)(param_1 + (long)(int)param_2 * 4 + 0x2cf50),
         *puVar2 < *(uint *)(param_1 + 0x2ced0))) {
        lVar9 = 0xe;
        lVar7 = param_1 + 0x13660;
        *(char *)(param_1 + 0x2cf9d) = '\x01';
        do {
          FUN_00ae8058(lVar7,0);
          lVar9 = lVar9 + -1;
          lVar7 = lVar7 + 0x1328;
        } while (lVar9 != 0);
        *(uint *)(param_1 + 0x2cf8c) = param_2;
        uVar5 = *puVar2;
        puVar2 = (uint *)(param_1 + (long)(int)param_2 * 0x1328 + 0x136e4);
        *(uint *)(param_1 + 0x2cf90) = uVar5;
        uVar3 = *puVar2;
        if ((uVar3 & 0x7f80) != 0x3300) {
          *puVar2 = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x3300;
          FUN_0091ada4(param_1 + (long)(int)param_2 * 0x1328 + 0x13660);
          uVar5 = *(uint *)(param_1 + 0x2cf90);
        }
        *(uint *)(param_1 + 0x24314) = *(uint *)(param_1 + 0x24314) | 4;
        FUN_00ae7fcc(param_1 + 0x24290,*(long *)(param_1 + 0x2ced8) + (ulong)uVar5 * 0x88 + 0x18);
        fVar10 = (float)FUN_00f13e54(param_1 + 0x24a40);
        FUN_00f0db64(fVar10 + -316.0,0,0x3f800000,param_1 + 0x24318);
        *(uint *)(param_1 + 0x24314) = *(uint *)(param_1 + 0x24314) | 0x10;
        FUN_00b5d348(param_1);
        FUN_00ed04d8(param_1 + 0x26470,0,0);
        if (0.0 < (float)(*(uint *)(param_1 + 0x105e4) >> 7 & 0xff) / 255.0) {
          FUN_00f01980(param_1 + 0x10560);
          uVar4 = FUN_00efee28(0,0x3dcccccd,FUN_009a71a4);
          lVar7 = DAT_03210d00;
          uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
          if ((ulong)uVar6 == 0xffff) {
            puVar8 = (ushort *)0x0;
          }
          else {
            puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
            if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
              uVar6 = 0xffff;
            }
            else {
              uVar6 = *puVar8;
            }
            *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
            *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
            FUN_00efc8e8(puVar8);
            *(undefined ***)puVar8 = &PTR_FUN_02825148;
            *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
          }
          FUN_00f02308(param_1 + 0x10560,uVar4,puVar8,0);
        }
        FUN_00ed04d8(param_1 + 0x7f88,0,0);
        *(uint *)(param_1 + 0x800c) = *(uint *)(param_1 + 0x800c) & 0xffffffef;
      }
    }
    else {
      plVar1 = (long *)(param_1 + 0x255b8);
      if (*plVar1 != 0) {
        FUN_00ae8170(*plVar1,0);
      }
      if (param_2 < 0xe) {
        lVar7 = param_1 + (long)(int)param_2 * 0x1328 + 0x13660;
        *plVar1 = lVar7;
        FUN_00ae8170(lVar7,1);
        return;
      }
      *plVar1 = 0;
    }
  }
  return;
}




void FUN_00b62fcc(long param_1)

{
  FUN_00b62fdc(param_1,*(undefined4 *)(param_1 + 0x2cf8c));
  return;
}




void FUN_00b62fdc(long param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_13c8;
  void *local_13c0;
  undefined8 local_13b8;
  void *local_13b0;
  undefined1 auStack_13a8 [2392];
  undefined8 local_a50;
  undefined1 local_a44;
  undefined1 local_a42;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  pcVar1 = (char *)(param_1 + 0x2cf98);
  if ((*pcVar1 != '\0') && (pcVar2 = (char *)(param_1 + 0x2cf9b), *pcVar2 == '\0')) {
    cVar5 = *(char *)(param_1 + 0x2cf9d);
    FUN_00b5f024(param_1);
    if ((-1 < (int)(param_3 | param_2)) && (cVar5 != '\0')) {
      lVar11 = param_1 + 0x13660 + (long)(int)param_3 * 0x1328;
      uVar7 = FUN_00f08be8(lVar11 + 0x158);
      thunk_FUN_00e7051c(&local_13b8,uVar7);
      FUN_00ae7080(auStack_13a8);
      local_a50 = *(undefined8 *)(lVar11 + 0x958);
      lVar12 = param_1 + 0x13660 + (long)(int)param_2 * 0x1328;
      lVar9 = (long)(int)param_2;
      local_a44 = *(undefined1 *)(lVar11 + 0x964);
      local_a42 = *(undefined1 *)(lVar11 + 0x966);
      uVar7 = FUN_00f08be8(lVar12 + 0x158);
      thunk_FUN_00e7051c(&local_13c8,uVar7);
      FUN_00ae7fcc(lVar11,&local_13c8);
      *(undefined8 *)(lVar11 + 0x958) = *(undefined8 *)(lVar12 + 0x958);
      *(undefined1 *)(lVar11 + 0x964) = *(undefined1 *)(lVar12 + 0x964);
      *(undefined1 *)(lVar11 + 0x966) = *(undefined1 *)(lVar12 + 0x966);
      FUN_00ae7fcc(lVar12,&local_13b8);
      *(undefined8 *)(lVar12 + 0x958) = local_a50;
      *(undefined1 *)(lVar12 + 0x964) = local_a44;
      *(undefined1 *)(lVar12 + 0x966) = local_a42;
      if (*pcVar1 == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if (*(char *)(lVar11 + 0x964) == '\0') {
          uVar8 = *(uint *)(param_1 + lVar9 * 4 + 0x2cf50) >> 0x1f ^ 1;
        }
      }
      lVar14 = (long)(int)param_3;
      FUN_00ae8058(lVar11,uVar8);
      if (*pcVar1 == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if (*(char *)(lVar12 + 0x964) == '\0') {
          uVar8 = *(uint *)(param_1 + lVar14 * 4 + 0x2cf50) >> 0x1f ^ 1;
        }
      }
      FUN_00ae8058(lVar12,uVar8);
      if (*pcVar1 == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if (*pcVar2 == '\0') {
          uVar8 = *(uint *)(param_1 + lVar9 * 4 + 0x2cf50) >> 0x1f ^ 1;
        }
      }
      FUN_00ae806c(lVar11,uVar8);
      if (*pcVar1 == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if (*pcVar2 == '\0') {
          uVar8 = *(uint *)(param_1 + lVar14 * 4 + 0x2cf50) >> 0x1f ^ 1;
        }
      }
      FUN_00ae806c(lVar12,uVar8);
      FUN_00ae78e4(*(undefined4 *)(param_1 + 0x2d028),0x42a00000,0,0,lVar11,*pcVar2);
      FUN_00ae78e4(*(undefined4 *)(param_1 + 0x2d028),0x42a00000,0,0,lVar12,*pcVar2);
      FUN_00ae78d0(lVar11,*(undefined4 *)(lVar11 + 0x958),*(undefined4 *)(lVar11 + 0x95c),
                   *(char *)(lVar11 + 0x964));
      FUN_00ae78d0(lVar12,*(undefined4 *)(lVar12 + 0x958),*(undefined4 *)(lVar12 + 0x95c),
                   *(char *)(lVar12 + 0x964));
      FUN_00b5acf8(param_1);
      *(undefined4 *)(param_1 + 0x2cf8c) = 0xffffffff;
      lVar11 = param_1 + 0x2cf50;
      uVar3 = *(undefined4 *)(lVar11 + lVar14 * 4);
      *(undefined4 *)(lVar11 + lVar14 * 4) = *(undefined4 *)(lVar11 + lVar9 * 4);
      lVar12 = param_1 + 0x2cf00;
      *(undefined4 *)(lVar11 + lVar9 * 4) = uVar3;
      uVar3 = *(undefined4 *)(lVar12 + lVar14 * 4);
      *(undefined4 *)(lVar12 + lVar14 * 4) = *(undefined4 *)(lVar12 + lVar9 * 4);
      *(undefined4 *)(lVar12 + lVar9 * 4) = uVar3;
      uVar8 = *(uint *)(param_1 + 0x2cfc8);
      if ((int)uVar8 < 1) {
        uVar13 = (ulong)uVar8;
      }
      else {
        uVar13 = 0;
        do {
          iVar4 = *(int *)(param_1 + 0x2cfd0 + uVar13 * 4);
          uVar10 = param_2 - iVar4;
          if ((int)param_2 < iVar4) goto LAB_00b6339c;
          uVar13 = uVar13 + 1;
          param_2 = uVar10;
        } while ((long)uVar13 < (long)(int)uVar8);
        uVar13 = (ulong)uVar8;
LAB_00b6339c:
        lVar9 = 0;
        uVar10 = param_3;
        do {
          iVar4 = *(int *)(param_1 + 0x2cfd0 + lVar9 * 4);
          param_3 = uVar10 - iVar4;
          if ((int)uVar10 < iVar4) {
            uVar8 = (uint)lVar9;
            param_3 = uVar10;
            break;
          }
          lVar9 = lVar9 + 1;
          uVar10 = param_3;
        } while (lVar9 < (int)uVar8);
      }
      uVar7 = FUN_009580b8();
      FUN_00960e9c(uVar7,uVar13 & 0xffffffff,param_2,uVar8,param_3);
      if (local_13c0 != (void *)0x0) {
        operator_delete__(local_13c0);
        local_13c8 = 0;
        local_13c0 = (void *)0x0;
      }
      FUN_00ae7558(auStack_13a8);
      if (local_13b0 != (void *)0x0) {
        operator_delete__(local_13b0);
        local_13b8 = 0;
        local_13b0 = (void *)0x0;
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

