// functions/009ba — 39 functions
#include "libGameKindred.h"




void FUN_009ba04c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  int local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_00940b8c();
  if (*(char *)(lVar4 + 0x3e) != '\0') {
    lVar5 = FUN_00e85318(0);
    uVar6 = FUN_00a07558();
    lVar7 = FUN_00a0766c(uVar6,0);
    fVar13 = *(float *)(lVar7 + 0x1c);
    uVar6 = FUN_00a07558();
    lVar7 = FUN_00a0766c(uVar6,1);
    fVar12 = *(float *)(lVar7 + 0x1c);
    uVar6 = FUN_00a07558();
    lVar7 = FUN_00a0766c(uVar6,fVar13 < fVar12);
    lVar7 = *(long *)(lVar7 + 0x28);
    if (lVar5 <= lVar7) {
      uVar6 = FUN_00e6ce7c("PRE_ELO_DECAY_NOTIFICATION_PRE_DECAY",0);
      thunk_FUN_00e7051c(&local_88,uVar6);
      uVar6 = FUN_00e6ce7c("PRE_ELO_DECAY_NOTIFICATION_POST_DECAY",0);
      thunk_FUN_00e7051c(&local_98,uVar6);
      uVar9 = (ulong)*(uint *)(lVar4 + 0x28);
      if (*(uint *)(lVar4 + 0x28) != 0) {
        piVar10 = *(int **)(lVar4 + 0x30);
        piVar11 = piVar10;
        do {
          iVar2 = *piVar11;
          iVar1 = iVar2 + ((int)lVar7 - (int)lVar5);
          if (-1 < iVar1) {
            FUN_00ec5370(&local_78);
            if (iVar2 < 0) {
              puVar8 = &local_88;
            }
            else {
              puVar8 = &local_98;
            }
            local_68 = iVar1;
            FUN_00910394(&local_78,puVar8);
            FUN_009216cc(param_1 + 0x60,&local_78);
            if (local_70 != (void *)0x0) {
              operator_delete__(local_70);
              local_78 = 0;
              local_70 = (void *)0x0;
            }
            uVar9 = (ulong)*(uint *)(lVar4 + 0x28);
            piVar10 = *(int **)(lVar4 + 0x30);
          }
          piVar11 = piVar11 + 1;
        } while (piVar11 != piVar10 + uVar9);
      }
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
        local_88 = 0;
        local_80 = (void *)0x0;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ba1e0(long param_1)

{
  FUN_009ba04c(param_1 + -0x60);
  return;
}




void FUN_009ba1e8(void)

{
  uint uVar1;
  
  uVar1 = FUN_0092ea9c();
  DAT_02be366c = DAT_02be3668 * 88.0;
  if ((uVar1 & 1) == 0) {
    DAT_02be366c = 88.0;
  }
  DAT_031339d4 = DAT_02be366c + DAT_02be366c;
  DAT_02be3670 = 0x431a0000;
  return;
}




undefined1 FUN_009ba248(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe3cb);
}




void FUN_009ba254(long param_1)

{
  *(undefined1 *)(param_1 + 0xe3cb) = 0;
  return;
}




void FUN_009ba260(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e82a04();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009ba2b4(param_1,PTR_s_screen_main_hub_02be3690,1);
                    /* WARNING: Could not recover jumptable at 0x009ba2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0x138))();
  return;
}




void FUN_009ba2b4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ed4b68(*(undefined8 *)(param_1 + 0x70),param_2,param_3 & 1);
  FUN_008fa54c(local_50,param_2);
  FUN_008fce60(param_1 + 0xe3b0,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined1 *)(param_1 + 0xe3c9) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ba344(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e82a04();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009ba37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0x140))();
  return;
}




void FUN_009ba380(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e82a04();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009ba2b4(param_1,PTR_s_screen_main_hub_02be3690,1);
                    /* WARNING: Could not recover jumptable at 0x009ba3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0x148))();
  return;
}




void FUN_009ba3d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e82a04();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009ba2b4(param_1,PTR_s_screen_main_hub_02be3690,1);
                    /* WARNING: Could not recover jumptable at 0x009ba424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0x150))();
  return;
}




void FUN_009ba428(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  (**(code **)(**(long **)(param_1 + 0x78) + 0x160))();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_00b8bacc();
  }
  FUN_008fa278();
  if (DAT_0320ff80 != (undefined8 *)0x0) {
    puVar2 = &DAT_0320ff80;
    puVar1 = DAT_0320ff80;
    do {
      if (*(uint *)(puVar1 + 4) >= 0x1346de83) {
        puVar2 = puVar1;
      }
      puVar1 = (undefined8 *)puVar1[*(uint *)(puVar1 + 4) < 0x1346de83];
    } while (puVar1 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_0320ff80) && (*(uint *)(puVar2 + 4) < 0x1346de84)) &&
       (*(int *)(puVar2 + 5) != 0)) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        (*(code *)((undefined8 *)(puVar2[6] + lVar3))[1])(*(undefined8 *)(puVar2[6] + lVar3));
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar4 < *(uint *)(puVar2 + 5));
    }
  }
  uVar4 = FUN_009580c4();
  if ((uVar4 & 1) != 0) {
    FUN_009580b8();
    FUN_0095f598();
  }
  FUN_009b9c34(param_1);
  return;
}




void FUN_009ba500(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xe3cd) != '\0') {
    FUN_00ec5428(param_1 + 0x68);
    *(char *)(param_1 + 0xe3cd) = '\0';
  }
  (**(code **)(**(long **)(param_1 + 0x78) + 0x158))();
  FUN_019804cc();
  if (*(char *)(param_1 + 0xe3ca) != '\0') {
    *(undefined1 *)(param_1 + 0xe3c9) = 1;
    *(char *)(param_1 + 0xe3ca) = '\0';
  }
  lVar1 = FUN_00969248();
  if (*(int *)(lVar1 + 0x38) < 1) {
    return;
  }
  lVar1 = FUN_00969248();
  if ((*(int *)(lVar1 + 0x38) != 7) && (lVar1 = FUN_00969248(), *(int *)(lVar1 + 0x38) != 8)) {
    return;
  }
  uVar2 = FUN_00969248();
  FUN_0096875c(uVar2,1);
  return;
}




void FUN_009ba5b0(long param_1)

{
  if (*(char *)(param_1 + 0xe3ca) != '\0') {
    *(undefined1 *)(param_1 + 0xe3c9) = 1;
    *(char *)(param_1 + 0xe3ca) = '\0';
  }
  return;
}




void FUN_009ba5d4(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  FUN_00a99564(param_1 + 0x28,param_2,param_3 & 1,param_4 & 1);
  return;
}




void FUN_009ba5e4(long param_1)

{
  FUN_00addc0c(param_1 + 0x58b8);
  *(uint *)(param_1 + 0x593c) = *(uint *)(param_1 + 0x593c) | 4;
  return;
}




void FUN_009ba61c(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pbVar5 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar5 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(bVar2 >> 1);
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar5) goto LAB_009ba6c4;
          lVar6 = lVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_009ba780;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 == 0)) goto LAB_009ba780;
  }
LAB_009ba6c4:
  bVar3 = *(byte *)(param_1 + 0x5e10);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x5e18);
  }
  if (sVar1 != __n) {
    return;
  }
  __s1 = *(void **)(param_1 + 0x5e20);
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((bVar3 & 1) == 0) {
    __s1 = (void *)(param_1 + 0x5e11);
  }
  if ((bVar2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  if ((bVar3 & 1) == 0) {
    if (__n != 0) {
      pbVar5 = (byte *)(param_1 + 0x5e11);
      lVar6 = -(ulong)(bVar3 >> 1);
      do {
        if (*pbVar5 != *pbVar7) {
          return;
        }
        pbVar5 = pbVar5 + 1;
        lVar6 = lVar6 + 1;
        pbVar7 = pbVar7 + 1;
      } while (lVar6 != 0);
    }
  }
  else if ((__n != 0) && (iVar4 = memcmp(__s1,pbVar7,__n), iVar4 != 0)) {
    return;
  }
LAB_009ba780:
  *(uint *)(param_1 + 0x593c) = *(uint *)(param_1 + 0x593c) & 0xfffffffb;
  FUN_00add718(param_1 + 0x58b8);
  return;
}




void FUN_009ba7a8(long param_1)

{
  FUN_00adbc38(param_1 + 0x908);
  return;
}




void FUN_009ba7b0(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pbVar5 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar5 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(bVar2 >> 1);
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar5) goto LAB_009ba854;
          lVar6 = lVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_009ba908;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 == 0)) goto LAB_009ba908;
  }
LAB_009ba854:
  bVar3 = *(byte *)(param_1 + 0x5878);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x5880);
  }
  if (sVar1 != __n) {
    return;
  }
  __s1 = *(void **)(param_1 + 0x5888);
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((bVar3 & 1) == 0) {
    __s1 = (void *)(param_1 + 0x5879);
  }
  if ((bVar2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  if ((bVar3 & 1) == 0) {
    if (__n != 0) {
      pbVar5 = (byte *)(param_1 + 0x5879);
      lVar6 = -(ulong)(bVar3 >> 1);
      do {
        if (*pbVar5 != *pbVar7) {
          return;
        }
        pbVar5 = pbVar5 + 1;
        lVar6 = lVar6 + 1;
        pbVar7 = pbVar7 + 1;
      } while (lVar6 != 0);
    }
  }
  else if ((__n != 0) && (iVar4 = memcmp(__s1,pbVar7,__n), iVar4 != 0)) {
    return;
  }
LAB_009ba908:
  FUN_00adc98c(param_1 + 0x908);
  return;
}




byte FUN_009ba920(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pbVar5 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar5 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(bVar2 >> 1);
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar5) goto LAB_009ba9cc;
          lVar6 = lVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_009baa58;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 == 0)) goto LAB_009baa58;
  }
LAB_009ba9cc:
  bVar3 = *(byte *)(param_1 + 0x5878);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x5880);
  }
  if (sVar1 != __n) {
    return 0;
  }
  __s1 = *(void **)(param_1 + 0x5888);
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((bVar3 & 1) == 0) {
    __s1 = (void *)(param_1 + 0x5879);
  }
  if ((bVar2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  if ((bVar3 & 1) == 0) {
    if (__n != 0) {
      pbVar5 = (byte *)(param_1 + 0x5879);
      lVar6 = -(ulong)(bVar3 >> 1);
      do {
        if (*pbVar5 != *pbVar7) {
          return 0;
        }
        pbVar5 = pbVar5 + 1;
        lVar6 = lVar6 + 1;
        pbVar7 = pbVar7 + 1;
      } while (lVar6 != 0);
    }
  }
  else if ((__n != 0) && (iVar4 = memcmp(__s1,pbVar7,__n), iVar4 != 0)) {
    return 0;
  }
LAB_009baa58:
  return *(byte *)(param_1 + 0x9bc) >> 2 & 1;
}




void FUN_009baa78(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x664c) >> 2 & 1) == 0) {
    return;
  }
  FUN_00accdec(param_1 + 0x5e28);
  FUN_00acc5b0(param_1 + 0x5e28,param_2,param_3,0);
  return;
}




void FUN_009baadc(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pbVar5 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar5 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(bVar2 >> 1);
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar5) goto LAB_009bab84;
          lVar6 = lVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_009bac40;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 == 0)) goto LAB_009bac40;
  }
LAB_009bab84:
  bVar3 = *(byte *)(param_1 + 0x6630);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x6638);
  }
  if (sVar1 != __n) {
    return;
  }
  __s1 = *(void **)(param_1 + 0x6640);
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((bVar3 & 1) == 0) {
    __s1 = (void *)(param_1 + 0x6631);
  }
  if ((bVar2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  if ((bVar3 & 1) == 0) {
    if (__n != 0) {
      pbVar5 = (byte *)(param_1 + 0x6631);
      lVar6 = -(ulong)(bVar3 >> 1);
      do {
        if (*pbVar5 != *pbVar7) {
          return;
        }
        pbVar5 = pbVar5 + 1;
        lVar6 = lVar6 + 1;
        pbVar7 = pbVar7 + 1;
      } while (lVar6 != 0);
    }
  }
  else if ((__n != 0) && (iVar4 = memcmp(__s1,pbVar7,__n), iVar4 != 0)) {
    return;
  }
LAB_009bac40:
  FUN_00accdec(param_1 + 0x5e28);
  return;
}




byte FUN_009bac58(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pbVar5 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar5 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(bVar2 >> 1);
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar5) goto LAB_009bad04;
          lVar6 = lVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_009bad90;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 == 0)) goto LAB_009bad90;
  }
LAB_009bad04:
  bVar3 = *(byte *)(param_1 + 0x6630);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x6638);
  }
  if (sVar1 != __n) {
    return 0;
  }
  __s1 = *(void **)(param_1 + 0x6640);
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((bVar3 & 1) == 0) {
    __s1 = (void *)(param_1 + 0x6631);
  }
  if ((bVar2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  if ((bVar3 & 1) == 0) {
    if (__n != 0) {
      pbVar5 = (byte *)(param_1 + 0x6631);
      lVar6 = -(ulong)(bVar3 >> 1);
      do {
        if (*pbVar5 != *pbVar7) {
          return 0;
        }
        pbVar5 = pbVar5 + 1;
        lVar6 = lVar6 + 1;
        pbVar7 = pbVar7 + 1;
      } while (lVar6 != 0);
    }
  }
  else if ((__n != 0) && (iVar4 = memcmp(__s1,pbVar7,__n), iVar4 != 0)) {
    return 0;
  }
LAB_009bad90:
  return *(byte *)(param_1 + 0x5eac) >> 2 & 1;
}




void FUN_009badb4(long param_1)

{
  FUN_00b27e8c(param_1 + 0x6650);
  return;
}




void FUN_009badc0(long param_1)

{
  FUN_00b28094(param_1 + 0x6650);
  return;
}




void FUN_009badcc(long param_1,byte *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 != 0) {
    FUN_00b27f98();
    return;
  }
  FUN_00b27e8c(param_1 + 0x6650);
  return;
}




void FUN_009badf4(long param_1)

{
  FUN_00b27edc(param_1 + 0x6650);
  return;
}




void FUN_009bae00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009bae0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0x170))();
  return;
}




void FUN_009bae14(long param_1)

{
  FUN_009b9b8c(param_1 + -0x30);
  return;
}




void FUN_009bae1c(long param_1)

{
  *(undefined1 *)(param_1 + 0xe3cb) = 1;
  return;
}




void FUN_009bae2c(undefined8 param_1,int *param_2)

{
  if (*param_2 == 2) {
    FUN_009ba2b4(param_1,PTR_s_screen_main_hub_02be3690,1);
    return;
  }
  return;
}




void FUN_009bae50(undefined8 param_1)

{
  FUN_009ba2b4(param_1,PTR_s_screen_main_hub_02be3690,1);
  return;
}




void FUN_009bae64(undefined8 param_1,int *param_2)

{
  if (*param_2 == 3) {
    FUN_009baf00();
    return;
  }
  if (*param_2 == 2) {
    FUN_009bae84();
    return;
  }
  return;
}




void FUN_009bae84(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ed4748(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    FUN_00af3474(param_1 + 0xc6e8);
    FUN_009baf98(param_1);
  }
  uVar1 = FUN_00ed4748(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) != 0) {
    FUN_009bafe8(param_1);
  }
  FUN_00ec5d04();
  FUN_008fa130(0,0);
  FUN_008fa19c(0);
  FUN_009ba2b4(param_1,PTR_s_screen_match_confirm_02be36b0,0);
  return;
}




void FUN_009baf00(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00ed4b60(*(undefined8 *)(param_1 + 0x70));
  iVar2 = FUN_00ed4784(PTR_s_screen_char_select_02be3688);
  if (iVar1 == iVar2) {
    return;
  }
  FUN_009baadc(param_1,&DAT_0320ffa8);
  FUN_00ec5d04();
  FUN_008fa130(0,0);
  FUN_008fa19c(0);
  FUN_009ba2b4(param_1,PTR_s_screen_char_select_02be3688,1);
  return;
}




void FUN_009baf90(long param_1)

{
  FUN_00ed4748(*(undefined8 *)(param_1 + 0x90));
  return;
}




void FUN_009baf98(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ed4748(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    FUN_009ba2b4(param_1,PTR_s_screen_main_hub_02be3690,1);
    return;
  }
  return;
}




void FUN_009bafe0(long param_1)

{
  FUN_00ed4748(*(undefined8 *)(param_1 + 0x98));
  return;
}




void FUN_009bafe8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ed4748(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) != 0) {
    FUN_009ba2b4(param_1,PTR_s_screen_main_hub_02be3690,1);
    return;
  }
  return;
}




void thunk_FUN_009bae64(undefined8 param_1,int *param_2)

{
  if (*param_2 == 3) {
    FUN_009baf00();
    return;
  }
  if (*param_2 == 2) {
    FUN_009bae84();
    return;
  }
  return;
}

