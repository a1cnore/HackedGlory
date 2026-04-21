// functions/00cce — 24 functions
#include "libGameKindred.h"




void FUN_00cce008(long param_1,uint *param_2,byte *param_3)

{
  size_t __n;
  byte *__s2;
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  byte *__s1;
  byte *pbVar5;
  byte *pbVar6;
  byte local_90 [16];
  void *local_80;
  ulong local_78 [2];
  void *local_68;
  ulong auStack_60 [2];
  void *pvStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*param_2 != 0) {
    pbVar5 = *(byte **)(param_2 + 2);
    __n = *(size_t *)(param_3 + 8);
    __s2 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __s2 = param_3 + 1;
      __n = (ulong)(*param_3 >> 1);
    }
    pbVar6 = pbVar5 + (ulong)*param_2 * 0x30;
    do {
      bVar1 = *pbVar5;
      uVar4 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar5 + 8);
      }
      if (uVar4 == __n) {
        __s1 = *(byte **)(pbVar5 + 0x10);
        if ((bVar1 & 1) == 0) {
          __s1 = pbVar5 + 1;
        }
        if ((bVar1 & 1) == 0) {
          if (__n == 0) {
LAB_00cce154:
            FUN_008fcdb8(param_1,pbVar5);
            FUN_008fcdb8(param_1 + 0x18,pbVar5 + 0x18);
            goto LAB_00cce16c;
          }
          uVar4 = 0;
          while (pbVar5[uVar4 + 1] == __s2[uVar4]) {
            uVar4 = uVar4 + 1;
            if (bVar1 >> 1 == uVar4) goto LAB_00cce154;
          }
        }
        else if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00cce154;
      }
      pbVar5 = pbVar5 + 0x30;
    } while (pbVar5 != pbVar6);
  }
  pvStack_50 = (void *)0x0;
  auStack_60[1] = 0;
  auStack_60[0] = 0;
  local_68 = (void *)0x0;
  local_78[1] = 0;
  local_78[0] = 0;
  FUN_008fa54c(local_90,"opulent");
  FUN_008fce60(auStack_60,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  FUN_008fcdb8(param_1,local_78);
  FUN_008fcdb8(param_1 + 0x18,auStack_60);
  if ((auStack_60[0] & 1) != 0) {
    operator_delete(pvStack_50);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
LAB_00cce16c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cce198(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cce008(local_68);
  FUN_00cce224(param_1,param_2,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cce224(long param_1,long param_2,byte *param_3)

{
  size_t __n;
  byte *__s2;
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  byte *__s1;
  byte *pbVar5;
  byte *pbVar6;
  byte local_108 [16];
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(uint *)(param_2 + 0x10) != 0) {
    pbVar5 = *(byte **)(param_2 + 0x18);
    __n = *(size_t *)(param_3 + 8);
    __s2 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __s2 = param_3 + 1;
      __n = (ulong)(*param_3 >> 1);
    }
    pbVar6 = pbVar5 + (ulong)*(uint *)(param_2 + 0x10) * 0x98;
    do {
      bVar1 = *pbVar5;
      uVar4 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar5 + 8);
      }
      if (uVar4 == __n) {
        __s1 = *(byte **)(pbVar5 + 0x10);
        if ((bVar1 & 1) == 0) {
          __s1 = pbVar5 + 1;
        }
        if ((bVar1 & 1) == 0) {
          if (__n == 0) {
LAB_00cce4f4:
            FUN_008fcdb8(param_1,pbVar5);
            FUN_008fcdb8(param_1 + 0x18,pbVar5 + 0x18);
            FUN_008fcdb8(param_1 + 0x30,pbVar5 + 0x30);
            FUN_008fcdb8(param_1 + 0x48,pbVar5 + 0x48);
            FUN_008fcdb8(param_1 + 0x60,pbVar5 + 0x60);
            FUN_008fcdb8(param_1 + 0x78,pbVar5 + 0x78);
            *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(pbVar5 + 0x90);
            goto LAB_00cce544;
          }
          uVar4 = 0;
          while (pbVar5[uVar4 + 1] == __s2[uVar4]) {
            uVar4 = uVar4 + 1;
            if (bVar1 >> 1 == uVar4) goto LAB_00cce4f4;
          }
        }
        else if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00cce4f4;
      }
      pbVar5 = pbVar5 + 0x98;
    } while (pbVar5 != pbVar6);
  }
  memset(local_f0,0,0x93);
  local_60 = CONCAT13(0xff,(undefined3)local_60);
  FUN_008fa54c(local_108,"opulent");
  FUN_008fce60(local_f0,local_108);
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  FUN_008fa54c(local_108,"build://Sounds/UI.assetbundle/sfx_rare_chest_opens.mp3");
  FUN_008fce60(local_d8,local_108);
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  FUN_008fa54c(local_108,"*KindredMenuRewardsChestOpulent*");
  FUN_008fce60(local_c0,local_108);
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  FUN_008fa54c(local_108,"IDLE_READY");
  FUN_008fce60(local_a8,local_108);
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  FUN_008fa54c(local_108,"chest_opulent_closed");
  FUN_008fce60(local_90,local_108);
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  FUN_008fa54c(local_108,"chest_opulent_opened");
  FUN_008fce60(local_78,local_108);
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  local_60 = DAT_0313da98;
  FUN_008fcdb8(param_1,local_f0);
  FUN_008fcdb8(param_1 + 0x18,local_d8);
  FUN_008fcdb8(param_1 + 0x30,local_c0);
  FUN_008fcdb8(param_1 + 0x48,local_a8);
  FUN_008fcdb8(param_1 + 0x60,local_90);
  FUN_008fcdb8(param_1 + 0x78,local_78);
  *(undefined4 *)(param_1 + 0x90) = local_60;
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
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
LAB_00cce544:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00cce574(void)

{
  return &DAT_0313dbe8;
}




void FUN_00cce580(undefined8 *param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  char *__s2;
  char *pcVar9;
  long lVar10;
  void *__s1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_0093dbe8();
  if (((uVar6 & 1) == 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_008fa54c(local_50,*param_1);
    lVar7 = FUN_00cc8184(local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if ((lVar7 != 0) &&
       (((uVar6 = FUN_0093d7f8(), (uVar6 & 1) == 0 || (*(char *)(param_1 + 1) != '\0')) &&
        (*(char *)(lVar7 + 0xa4) != '\0')))) {
      bVar2 = *(byte *)(lVar7 + 0xb0);
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar7 + 0xb8);
      }
      sVar1 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar1 = DAT_0320ffb0;
      }
      if (__n == sVar1) {
        __s1 = *(void **)(lVar7 + 0xc0);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar7 + 0xb1);
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            pcVar9 = (char *)(lVar7 + 0xb1);
            lVar10 = -(ulong)(bVar2 >> 1);
            do {
              if (*pcVar9 != *__s2) goto LAB_00cce690;
              uVar5 = 0;
              pcVar9 = pcVar9 + 1;
              lVar10 = lVar10 + 1;
              __s2 = __s2 + 1;
            } while (lVar10 != 0);
            goto LAB_00cce6fc;
          }
        }
        else if (__n != 0) {
          iVar4 = memcmp(__s1,__s2,__n);
          uVar5 = 0;
          if (iVar4 == 0) goto LAB_00cce6fc;
          goto LAB_00cce690;
        }
      }
      else {
LAB_00cce690:
        if ((0 < *(long *)(lVar7 + 0x90)) &&
           (lVar10 = FUN_00e85318(0), *(long *)(lVar7 + 0x90) <= lVar10)) {
          uVar8 = FUN_009580b8();
          uVar6 = FUN_00961744(uVar8,lVar7);
          uVar5 = 0;
          if ((uVar6 & 1) == 0) goto LAB_00cce6fc;
        }
        if (((*(long *)(lVar7 + 0x98) < 1) ||
            (lVar10 = FUN_00e85318(0), *(long *)(lVar7 + 0x98) <= lVar10)) ||
           (*(char *)(lVar7 + 0xaa) != '\0')) goto LAB_00cce6f0;
      }
    }
    uVar5 = 0;
  }
  else {
LAB_00cce6f0:
    uVar5 = 1;
  }
LAB_00cce6fc:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




void FUN_00cce724(void)

{
  FUN_00cce738("*KindredSocialPingsManifest*","build://Progression/KindredSocialPingsManifest.def");
  return;
}




void FUN_00cce738(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    FUN_01988700(0,param_2);
    uVar1 = FUN_01988718();
    FUN_01987114(uVar1,0,param_1,0);
  }
  return;
}




undefined8 FUN_00cce78c(byte *param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  byte *__s1;
  undefined8 *puVar8;
  
  puVar5 = (undefined8 *)
           FUN_00cce738("*KindredSocialPingsManifest*",
                        "build://Progression/KindredSocialPingsManifest.def");
  puVar5 = (undefined8 *)*puVar5;
  puVar8 = (undefined8 *)*puVar5;
  if (puVar8 != (undefined8 *)0x0) {
    pbVar1 = param_1 + 1;
    do {
      bVar3 = *param_1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(param_1 + 0x10);
        pbVar7 = pbVar1;
        if ((bVar3 & 1) != 0) {
          pbVar7 = __s1;
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = pbVar1;
            do {
              if (*pbVar7 != *__s2) goto LAB_00cce860;
              pbVar7 = pbVar7 + 1;
              lVar6 = lVar6 + 1;
              __s2 = __s2 + 1;
            } while (lVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 != 0)) goto LAB_00cce86c;
      }
      else {
LAB_00cce860:
        __s1 = pbVar1;
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x10);
        }
LAB_00cce86c:
        iVar4 = strcmp((char *)__s1,(char *)*puVar8);
        if (iVar4 == 0) {
          return *puVar5;
        }
      }
      puVar5 = puVar5 + 1;
      puVar8 = (undefined8 *)*puVar5;
    } while (puVar8 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_00cce8a4(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  puVar1 = (undefined8 *)
           FUN_00cce738("*KindredSocialPingsManifest*",
                        "build://Progression/KindredSocialPingsManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pbVar5 = (byte *)*puVar2;
      uVar4 = 0x811c9dc5;
      if (*pbVar5 != 0) {
        uVar4 = 0x811c9dc5;
        uVar3 = (uint)*pbVar5;
        do {
          pbVar5 = pbVar5 + 1;
          uVar4 = (uVar4 ^ uVar3) * 0x1000193;
          uVar3 = (uint)*pbVar5;
        } while (*pbVar5 != 0);
      }
      if (*param_1 == uVar4) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_00cce934(void)

{
  FUN_00cce948("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  return;
}




void FUN_00cce948(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    FUN_01988700(0,param_2);
    uVar1 = FUN_01988718();
    FUN_01987114(uVar1,0,param_1,0);
  }
  return;
}




undefined8 FUN_00cce99c(byte *param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *__s2;
  byte *pbVar6;
  byte *__s1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = FUN_00cce948("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  puVar7 = *(undefined8 **)(lVar5 + 8);
  puVar8 = (undefined8 *)*puVar7;
  if (puVar8 != (undefined8 *)0x0) {
    pbVar1 = param_1 + 1;
    do {
      bVar3 = *param_1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(param_1 + 0x10);
        pbVar6 = pbVar1;
        if ((bVar3 & 1) != 0) {
          pbVar6 = __s1;
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar5 = -(ulong)(bVar3 >> 1);
            pbVar6 = pbVar1;
            do {
              if (*pbVar6 != *__s2) goto LAB_00ccea70;
              pbVar6 = pbVar6 + 1;
              lVar5 = lVar5 + 1;
              __s2 = __s2 + 1;
            } while (lVar5 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar6,__s2,__n), iVar4 != 0)) goto LAB_00ccea7c;
      }
      else {
LAB_00ccea70:
        __s1 = pbVar1;
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x10);
        }
LAB_00ccea7c:
        iVar4 = strcmp((char *)__s1,(char *)*puVar8);
        if (iVar4 == 0) {
          return *puVar7;
        }
      }
      puVar7 = puVar7 + 1;
      puVar8 = (undefined8 *)*puVar7;
    } while (puVar8 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_00cceab4(uint *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  lVar1 = FUN_00cce948("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  puVar3 = *(undefined8 **)(lVar1 + 8);
  puVar2 = (undefined8 *)*puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pbVar6 = (byte *)*puVar2;
      uVar5 = 0x811c9dc5;
      if (*pbVar6 != 0) {
        uVar5 = 0x811c9dc5;
        uVar4 = (uint)*pbVar6;
        do {
          pbVar6 = pbVar6 + 1;
          uVar5 = (uVar5 ^ uVar4) * 0x1000193;
          uVar4 = (uint)*pbVar6;
        } while (*pbVar6 != 0);
      }
      if (*param_1 == uVar5) {
        return;
      }
      puVar3 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar3;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_00cceb44(void)

{
  FUN_00cceb58("*KindredAttachableEquipmentManifest*",
               "build://Progression/KindredAttachableEquipmentManifest.def");
  return;
}




void FUN_00cceb58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    FUN_01988700(0,param_2);
    uVar1 = FUN_01988718();
    FUN_01987114(uVar1,0,param_1,0);
  }
  return;
}




undefined8 FUN_00ccebac(byte *param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  byte *__s1;
  undefined8 *puVar8;
  
  puVar5 = (undefined8 *)
           FUN_00cceb58("*KindredAttachableEquipmentManifest*",
                        "build://Progression/KindredAttachableEquipmentManifest.def");
  puVar5 = (undefined8 *)*puVar5;
  puVar8 = (undefined8 *)*puVar5;
  if (puVar8 != (undefined8 *)0x0) {
    pbVar1 = param_1 + 1;
    do {
      bVar3 = *param_1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(param_1 + 0x10);
        pbVar7 = pbVar1;
        if ((bVar3 & 1) != 0) {
          pbVar7 = __s1;
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = pbVar1;
            do {
              if (*pbVar7 != *__s2) goto LAB_00ccec80;
              pbVar7 = pbVar7 + 1;
              lVar6 = lVar6 + 1;
              __s2 = __s2 + 1;
            } while (lVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 != 0)) goto LAB_00ccec8c;
      }
      else {
LAB_00ccec80:
        __s1 = pbVar1;
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x10);
        }
LAB_00ccec8c:
        iVar4 = strcmp((char *)__s1,(char *)*puVar8);
        if (iVar4 == 0) {
          return *puVar5;
        }
      }
      puVar5 = puVar5 + 1;
      puVar8 = (undefined8 *)*puVar5;
    } while (puVar8 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_00ccecc4(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  puVar1 = (undefined8 *)
           FUN_00cceb58("*KindredAttachableEquipmentManifest*",
                        "build://Progression/KindredAttachableEquipmentManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pbVar5 = (byte *)*puVar2;
      uVar4 = 0x811c9dc5;
      if (*pbVar5 != 0) {
        uVar4 = 0x811c9dc5;
        uVar3 = (uint)*pbVar5;
        do {
          pbVar5 = pbVar5 + 1;
          uVar4 = (uVar4 ^ uVar3) * 0x1000193;
          uVar3 = (uint)*pbVar5;
        } while (*pbVar5 != 0);
      }
      if (*param_1 == uVar4) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_00cced54(void)

{
  FUN_00cced68("*KindredPlayerTitlesManifest*","build://Progression/KindredPlayerTitlesManifest.def"
              );
  return;
}




void FUN_00cced68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    FUN_01988700(0,param_2);
    uVar1 = FUN_01988718();
    FUN_01987114(uVar1,0,param_1,0);
  }
  return;
}




undefined8 FUN_00ccedbc(byte *param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  byte *__s1;
  undefined8 *puVar8;
  
  puVar5 = (undefined8 *)
           FUN_00cced68("*KindredPlayerTitlesManifest*",
                        "build://Progression/KindredPlayerTitlesManifest.def");
  puVar5 = (undefined8 *)*puVar5;
  puVar8 = (undefined8 *)*puVar5;
  if (puVar8 != (undefined8 *)0x0) {
    pbVar1 = param_1 + 1;
    do {
      bVar3 = *param_1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(param_1 + 0x10);
        pbVar7 = pbVar1;
        if ((bVar3 & 1) != 0) {
          pbVar7 = __s1;
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = pbVar1;
            do {
              if (*pbVar7 != *__s2) goto LAB_00ccee90;
              pbVar7 = pbVar7 + 1;
              lVar6 = lVar6 + 1;
              __s2 = __s2 + 1;
            } while (lVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 != 0)) goto LAB_00ccee9c;
      }
      else {
LAB_00ccee90:
        __s1 = pbVar1;
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x10);
        }
LAB_00ccee9c:
        iVar4 = strcmp((char *)__s1,(char *)*puVar8);
        if (iVar4 == 0) {
          return *puVar5;
        }
      }
      puVar5 = puVar5 + 1;
      puVar8 = (undefined8 *)*puVar5;
    } while (puVar8 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_00cceed4(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  puVar1 = (undefined8 *)
           FUN_00cced68("*KindredPlayerTitlesManifest*",
                        "build://Progression/KindredPlayerTitlesManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pbVar5 = (byte *)*puVar2;
      uVar4 = 0x811c9dc5;
      if (*pbVar5 != 0) {
        uVar4 = 0x811c9dc5;
        uVar3 = (uint)*pbVar5;
        do {
          pbVar5 = pbVar5 + 1;
          uVar4 = (uVar4 ^ uVar3) * 0x1000193;
          uVar3 = (uint)*pbVar5;
        } while (*pbVar5 != 0);
      }
      if (*param_1 == uVar4) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_00ccef64(void)

{
  FUN_00ccef78("*KindredPlayerAvatarsManifest*",
               "build://Progression/KindredPlayerAvatarsManifest.def");
  return;
}




void FUN_00ccef78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    FUN_01988700(0,param_2);
    uVar1 = FUN_01988718();
    FUN_01987114(uVar1,0,param_1,0);
  }
  return;
}




undefined8 FUN_00ccefcc(byte *param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  byte *__s1;
  undefined8 *puVar8;
  
  puVar5 = (undefined8 *)
           FUN_00ccef78("*KindredPlayerAvatarsManifest*",
                        "build://Progression/KindredPlayerAvatarsManifest.def");
  puVar5 = (undefined8 *)*puVar5;
  puVar8 = (undefined8 *)*puVar5;
  if (puVar8 != (undefined8 *)0x0) {
    pbVar1 = param_1 + 1;
    do {
      bVar3 = *param_1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(param_1 + 0x10);
        pbVar7 = pbVar1;
        if ((bVar3 & 1) != 0) {
          pbVar7 = __s1;
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = pbVar1;
            do {
              if (*pbVar7 != *__s2) goto LAB_00ccf0a0;
              pbVar7 = pbVar7 + 1;
              lVar6 = lVar6 + 1;
              __s2 = __s2 + 1;
            } while (lVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 != 0)) goto LAB_00ccf0ac;
      }
      else {
LAB_00ccf0a0:
        __s1 = pbVar1;
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x10);
        }
LAB_00ccf0ac:
        iVar4 = strcmp((char *)__s1,(char *)*puVar8);
        if (iVar4 == 0) {
          return *puVar5;
        }
      }
      puVar5 = puVar5 + 1;
      puVar8 = (undefined8 *)*puVar5;
    } while (puVar8 != (undefined8 *)0x0);
  }
  return 0;
}

