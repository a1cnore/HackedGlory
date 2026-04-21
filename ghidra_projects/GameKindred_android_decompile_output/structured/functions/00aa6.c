// functions/00aa6 — 18 functions
#include "libGameKindred.h"




void FUN_00aa60a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_008fce60(param_1 + 0x20);
  FUN_008fce60(param_1 + 0x38,param_3);
  FUN_008fce60(param_1 + 0x50,param_4);
  FUN_00965324(param_1,param_6);
  FUN_008fce60(param_1 + 0x68,param_5);
  return;
}




byte * FUN_00aa6114(long param_1,byte *param_2)

{
  size_t __n;
  byte *__s2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *__s1;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18);
    uVar6 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar5 = *(byte **)(lVar7 + uVar6 * 8);
      bVar2 = *pbVar5;
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar5 + 8);
      }
      if (uVar4 == __n) {
        __s1 = *(byte **)(pbVar5 + 0x10);
        if ((bVar2 & 1) == 0) {
          __s1 = pbVar5 + 1;
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
            return pbVar5;
          }
          uVar4 = 0;
          while (pbVar5[uVar4 + 1] == __s2[uVar4]) {
            uVar4 = uVar4 + 1;
            if (bVar2 >> 1 == uVar4) {
              return pbVar5;
            }
          }
        }
        else {
          if (__n == 0) {
            return pbVar5;
          }
          iVar3 = memcmp(__s1,__s2,__n);
          if (iVar3 == 0) {
            return pbVar5;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return (byte *)0x0;
}




void FUN_00aa61e8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
      *(undefined2 *)(param_1 + 0x80) = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
  }
  else {
    FUN_00aa6280((undefined4 *)(param_1 + 0x10),param_3);
    FUN_008fce60(param_1 + 0x80,param_4);
  }
  return;
}




bool FUN_00aa6250(long param_1)

{
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    if (*(byte *)(param_1 + 0x80) >> 1 == 0) {
      return false;
    }
  }
  else if (*(long *)(param_1 + 0x88) == 0) {
    return false;
  }
  return *(int *)(param_1 + 0x10) != 0;
}




void FUN_00aa6280(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00aa62ec(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        lVar4 = lVar4 + -8;
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00aa62ec(uint *param_1,uint param_2)

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




void FUN_00aa636c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00948cd8();
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027d2448;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_008fa54c(param_1 + 7,"EquipedHat");
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  uVar2 = FUN_0093dbe8();
  if ((uVar2 & 1) == 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_008fa54c(local_50,"hat");
    FUN_0096204c(&local_38,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_008fa54c(local_50,"craftingmaterial");
    FUN_0096204c(&local_38,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = FUN_009580b8();
    FUN_0095f0e8(uVar3,&local_38);
    FUN_00951534(&local_38,1);
  }
  FUN_00aa6484(param_1);
  uVar2 = FUN_0093dbe8();
  if ((uVar2 & 1) != 0) {
    FUN_00aa6624(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa6484(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  byte local_d8 [16];
  void *local_c8;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00ccf868();
  plVar7 = (long *)*puVar2;
  if (*plVar7 != 0) {
    do {
      uVar3 = FUN_0093d7f8();
      if (((uVar3 & 1) == 0) || (*(char *)((undefined8 *)*plVar7 + 1) != '\0')) {
        FUN_008fa54c(local_60,*(undefined8 *)*plVar7);
        lVar4 = FUN_00ccf8d0(local_60);
        if (lVar4 != 0) {
          pvVar5 = operator_new(0xa0);
          FUN_00aa5fa4();
          local_78 = 0;
          uStack_70 = 0;
          local_68 = pvVar5;
          FUN_008fa54c(local_90,*(undefined8 *)(*plVar7 + 0x10));
          FUN_008fa54c(local_a8,*(undefined8 *)(*plVar7 + 0x18));
          FUN_008fa54c(local_c0,*(undefined8 *)(*plVar7 + 0x20));
          plVar6 = *(long **)(lVar4 + 0x28);
          if (plVar6 != (long *)0x0) {
            puVar2 = (undefined8 *)*plVar6;
            while (puVar2 != (undefined8 *)0x0) {
              plVar6 = plVar6 + 1;
              FUN_008fa54c(local_d8,*puVar2);
              FUN_0096204c(&local_78,local_d8);
              if ((local_d8[0] & 1) != 0) {
                operator_delete(local_c8);
              }
              puVar2 = (undefined8 *)*plVar6;
            }
          }
          FUN_00aa60a4(local_68,local_60,local_90,local_a8,local_c0,&local_78);
          FUN_00aa80a0(param_1 + 0x450,&local_68);
          if ((local_c0[0] & 1) != 0) {
            operator_delete(local_b0);
          }
          if ((local_a8[0] & 1) != 0) {
            operator_delete(local_98);
          }
          if ((local_90[0] & 1) != 0) {
            operator_delete(local_80);
          }
          FUN_00951534(&local_78,1);
        }
        if ((local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
      }
      plVar7 = plVar7 + 1;
    } while (*plVar7 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa6624(long *param_1)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  char *__s2;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  undefined **local_160 [5];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  byte local_b8 [8];
  size_t local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  size_t local_88;
  void *local_80;
  undefined1 local_78;
  undefined1 local_77;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00aa6b3c();
  FUN_008fa54c(local_b8,uVar6);
  FUN_00e84dac(local_160);
  local_160[0] = &PTR_FUN_027bbc28;
  memset(auStack_138,0,0x80);
  uVar7 = *(uint *)(param_1 + 0x8a);
  if (uVar7 != 0) {
    uVar10 = 0;
    do {
      if (*(long *)(param_1[0x8b] + uVar10 * 8) != 0) {
        local_80 = (void *)0x0;
        uStack_98 = 0;
        local_a0 = 0;
        local_88 = 0;
        local_90 = 0;
        FUN_008fce60(&local_90,*(long *)(param_1[0x8b] + uVar10 * 8) + 0x20);
        __n = (ulong)(local_b8[0] >> 1);
        if ((local_b8[0] & 1) != 0) {
          __n = local_b0;
        }
        if (__n == 0) {
LAB_00aa675c:
          bVar4 = false;
        }
        else {
          uVar3 = local_90 >> 1 & 0x7f;
          sVar1 = uVar3;
          if ((local_90 & 1) != 0) {
            sVar1 = local_88;
          }
          bVar4 = false;
          if (sVar1 == __n) {
            __s2 = (char *)((ulong)local_b8 | 1);
            if ((local_b8[0] & 1) != 0) {
              __s2 = local_a8;
            }
            if ((local_90 & 1) == 0) {
              lVar8 = -uVar3;
              pcVar9 = (char *)((long)&local_90 + 1);
              do {
                if (*pcVar9 != *__s2) goto LAB_00aa675c;
                pcVar9 = pcVar9 + 1;
                lVar8 = lVar8 + 1;
                __s2 = __s2 + 1;
              } while (lVar8 != 0);
              bVar4 = true;
            }
            else {
              iVar5 = memcmp(local_80,__s2,__n);
              bVar4 = iVar5 == 0;
            }
          }
        }
        local_78 = bVar4;
        local_77 = 1;
        FUN_00aa6fb8(auStack_128,&local_a0);
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        FUN_00957578(&local_a0,1);
        uVar7 = *(uint *)(param_1 + 0x8a);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_160);
  local_160[0] = &PTR_FUN_027bbc28;
  FUN_009577b8(auStack_c8,1);
  FUN_0095783c(auStack_d8,1);
  FUN_0095783c(auStack_e8,1);
  FUN_0095783c(auStack_f8,1);
  FUN_0095783c(auStack_108,1);
  FUN_0095783c(auStack_118,1);
  FUN_009578b4(auStack_128,1);
  FUN_00957938(auStack_138,1);
  FUN_00e84dd8(local_160);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00aa6888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d2448;
  FUN_00aa6918();
  param_1[0x8e] = 0;
  if ((void *)param_1[0x8d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8d]);
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
  }
  if ((void *)param_1[0x8b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8b]);
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
  }
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00948d58(param_1);
  return;
}




void FUN_00aa6918(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x450);
  if (*(uint *)(param_1 + 0x450) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      pvVar3 = *(void **)(*(long *)(param_1 + 0x458) + lVar4);
      if (pvVar3 == (void *)0x0) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x458) + uVar5 * 8);
      }
      else {
        FUN_00aa5fd4(pvVar3);
        operator_delete(pvVar3);
        uVar1 = (ulong)*(uint *)(param_1 + 0x450);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x458) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar2 = 0;
    } while (uVar5 < uVar1);
  }
  if (*(long *)(param_1 + 0x458) != 0) {
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}




void FUN_00aa699c(void *param_1)

{
  FUN_00aa6888();
  operator_delete(param_1);
  return;
}




long FUN_00aa69c0(long param_1,byte *param_2)

{
  size_t __n;
  byte *__s2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  void *__s1;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x450);
  if (uVar1 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar7 = *(long *)(param_1 + 0x458);
    uVar6 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = *(long *)(lVar7 + uVar6 * 8);
      bVar2 = *(byte *)(lVar5 + 0x20);
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(lVar5 + 0x28);
      }
      if (uVar4 == __n) {
        __s1 = *(void **)(lVar5 + 0x30);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar5 + 0x21);
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
            return lVar5;
          }
          uVar4 = 0;
          while (*(byte *)(lVar5 + uVar4 + 0x21) == __s2[uVar4]) {
            uVar4 = uVar4 + 1;
            if (bVar2 >> 1 == uVar4) {
              return lVar5;
            }
          }
        }
        else {
          if (__n == 0) {
            return lVar5;
          }
          iVar3 = memcmp(__s1,__s2,__n);
          if (iVar3 == 0) {
            return lVar5;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return 0;
}




void FUN_00aa6a98(long param_1,byte *param_2)

{
  ulong uVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  byte *pbVar4;
  
  __s = (char *)FUN_00aa6b3c();
  sVar3 = strlen(__s);
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if ((sVar3 == uVar1) && (iVar2 = FUN_0090d610(param_2,0,0xffffffffffffffff,__s,sVar3), iVar2 == 0)
     ) {
    return;
  }
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    param_1 = param_1 + 0x39;
  }
  else {
    param_1 = *(long *)(param_1 + 0x48);
  }
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  FUN_0093727c(param_1,pbVar4);
  return;
}




long FUN_00aa6b3c(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar2 = param_1 + 0x39;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x48);
  }
  puVar1 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    puVar1 = &DAT_0320ffa9;
  }
  FUN_009375d4(lVar2,param_1 + 0x50,0x400,puVar1);
  return param_1 + 0x50;
}




byte * FUN_00aa6b9c(long param_1,byte *param_2)

{
  size_t __n;
  byte *__s2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *__s1;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x460);
  if (uVar1 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar7 = *(long *)(param_1 + 0x468);
    uVar6 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar5 = *(byte **)(lVar7 + uVar6 * 8);
      bVar2 = *pbVar5;
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar5 + 8);
      }
      if (uVar4 == __n) {
        __s1 = *(byte **)(pbVar5 + 0x10);
        if ((bVar2 & 1) == 0) {
          __s1 = pbVar5 + 1;
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
            return pbVar5;
          }
          uVar4 = 0;
          while (pbVar5[uVar4 + 1] == __s2[uVar4]) {
            uVar4 = uVar4 + 1;
            if (bVar2 >> 1 == uVar4) {
              return pbVar5;
            }
          }
        }
        else {
          if (__n == 0) {
            return pbVar5;
          }
          iVar3 = memcmp(__s1,__s2,__n);
          if (iVar3 == 0) {
            return pbVar5;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return (byte *)0x0;
}




void FUN_00aa6c70(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  size_t sVar16;
  ulong uVar17;
  size_t sVar18;
  size_t sVar19;
  size_t sVar20;
  long lVar21;
  undefined **local_148 [5];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90 [2];
  void *local_80;
  undefined2 local_78;
  
  lVar6 = tpidr_el0;
  lVar10 = *(long *)(lVar6 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x8a);
  if (uVar3 != 0) {
    lVar14 = param_1[0x8b];
    uVar17 = 0;
    do {
      lVar21 = *(long *)(lVar14 + uVar17 * 8);
      if (lVar21 != 0) {
        bVar4 = *(byte *)(lVar21 + 0x20);
        if (*(uint *)(lVar21 + 0x98) < 2) {
          sVar19 = *(size_t *)(lVar21 + 0x28);
          bVar5 = *param_2;
          sVar18 = *(size_t *)(param_2 + 8);
          sVar20 = (size_t)(bVar4 >> 1);
          sVar2 = sVar20;
          if ((bVar4 & 1) != 0) {
            sVar2 = sVar19;
          }
          sVar16 = (size_t)(bVar5 >> 1);
          sVar1 = sVar16;
          if ((bVar5 & 1) != 0) {
            sVar1 = sVar18;
          }
          if (sVar2 != sVar1) {
LAB_00aa6e18:
            *(undefined4 *)(lVar21 + 0x98) = 2;
            goto LAB_00aa6e1c;
          }
          pvVar12 = *(void **)(lVar21 + 0x30);
          bVar15 = bVar5 & 1;
          if ((bVar4 & 1) == 0) {
            pvVar12 = (void *)(lVar21 + 0x21);
          }
          pbVar9 = param_2 + 1;
          if ((bVar5 & 1) != 0) {
            pbVar9 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 != 0) {
              pbVar11 = (byte *)(lVar21 + 0x21);
              lVar13 = -sVar20;
              do {
                if (*pbVar11 != *pbVar9) goto LAB_00aa6e18;
                pbVar11 = pbVar11 + 1;
                lVar13 = lVar13 + 1;
                pbVar9 = pbVar9 + 1;
              } while (lVar13 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar7 = memcmp(pvVar12,pbVar9,sVar2), iVar7 != 0))
          goto LAB_00aa6e18;
        }
        else {
          sVar19 = *(size_t *)(lVar21 + 0x28);
          sVar18 = *(size_t *)(param_2 + 8);
          sVar20 = (size_t)(bVar4 >> 1);
          bVar15 = *param_2 & 1;
          sVar16 = (size_t)(*param_2 >> 1);
        }
        sVar2 = sVar20;
        if ((bVar4 & 1) != 0) {
          sVar2 = sVar19;
        }
        if (bVar15 != 0) {
          sVar16 = sVar18;
        }
        if (sVar2 == sVar16) {
          pvVar12 = *(void **)(lVar21 + 0x30);
          if ((bVar4 & 1) == 0) {
            pvVar12 = (void *)(lVar21 + 0x21);
          }
          pbVar9 = param_2 + 1;
          if (bVar15 != 0) {
            pbVar9 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 != 0) {
              pbVar11 = (byte *)(lVar21 + 0x21);
              do {
                if (*pbVar11 != *pbVar9) goto LAB_00aa6e1c;
                sVar20 = sVar20 - 1;
                pbVar11 = pbVar11 + 1;
                pbVar9 = pbVar9 + 1;
              } while (sVar20 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar7 = memcmp(pvVar12,pbVar9,sVar2), iVar7 != 0))
          goto LAB_00aa6e1c;
          *(undefined4 *)(lVar21 + 0x98) = 1;
        }
      }
LAB_00aa6e1c:
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar3);
  }
  if ((int)param_1[3] != 0) {
    lVar14 = param_1[4];
    do {
      if (*(code **)(lVar14 + 8) == (code *)0x0) {
        (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x10));
      }
      else {
        (**(code **)(lVar14 + 8))();
      }
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != param_1[4] + (ulong)*(uint *)(param_1 + 3) * 0x20);
  }
  uVar17 = FUN_0093dbe8();
  if ((uVar17 & 1) == 0) {
    uVar8 = FUN_009580b8();
    FUN_00962710(uVar8,param_2);
  }
  else {
    FUN_00e84dac(local_148);
    local_148[0] = &PTR_FUN_027bbc28;
    memset(auStack_120,0,0x80);
    local_80 = (void *)0x0;
    uStack_98 = 0;
    local_a0 = 0;
    local_90[1] = 0;
    local_90[0] = 0;
    local_78 = 0x101;
    FUN_008fce60(local_90,param_2);
    FUN_00aa6fb8(auStack_110,&local_a0);
    (**(code **)(*param_1 + 0x50))(param_1,local_148);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    FUN_00957578(&local_a0,1);
    local_148[0] = &PTR_FUN_027bbc28;
    FUN_009577b8(auStack_b0,1);
    FUN_0095783c(auStack_c0,1);
    FUN_0095783c(auStack_d0,1);
    FUN_0095783c(auStack_e0,1);
    FUN_0095783c(auStack_f0,1);
    FUN_0095783c(auStack_100,1);
    FUN_009578b4(auStack_110,1);
    FUN_00957938(auStack_120,1);
    FUN_00e84dd8(local_148);
  }
  if (*(long *)(lVar6 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00aa6fb8(uint *param_1,long param_2)

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
    FUN_00957324(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_00957414(lVar4 + -0x30,param_2);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x10);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x28);
  return;
}

