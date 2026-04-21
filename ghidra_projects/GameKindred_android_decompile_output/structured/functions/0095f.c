// functions/0095f — 15 functions
#include "libGameKindred.h"




void FUN_0095f02c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x70;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x38);
      do {
        if ((void *)puVar2[4] != (void *)0x0) {
          operator_delete__((void *)puVar2[4]);
          puVar2[3] = 0;
          puVar2[4] = 0;
        }
        if ((void *)puVar2[2] != (void *)0x0) {
          operator_delete__((void *)puVar2[2]);
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        if ((*(byte *)(puVar2 + -5) & 1) != 0) {
          operator_delete((void *)puVar2[-3]);
        }
        if ((void *)puVar2[-6] != (void *)0x0) {
          operator_delete__((void *)puVar2[-6]);
          puVar2[-7] = 0;
          puVar2[-6] = 0;
        }
        lVar1 = lVar1 + -0x70;
        puVar2 = puVar2 + 0xe;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_0095f0e8(long param_1,uint *param_2)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *__s2;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  byte *__s1;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  uVar6 = FUN_0093dbe8();
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_00e84e4c(param_1 + 0x3c00);
    if ((uVar6 & 1) == 0) {
      FUN_00e8334c(param_1 + 0x3c00,param_2);
      return;
    }
    uVar10 = *param_2;
    if (uVar10 != 0) {
      uVar6 = 0;
      do {
        uVar2 = *(uint *)(param_1 + 0x5440);
        if (uVar2 == 0) {
          lVar12 = *(long *)(param_2 + 2);
        }
        else {
          lVar12 = *(long *)(param_2 + 2);
          uVar13 = 0;
          pbVar7 = (byte *)(lVar12 + uVar6 * 0x18);
          bVar3 = *pbVar7;
          lVar11 = *(long *)(param_1 + 0x5448);
          __n = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            __n = *(size_t *)(pbVar7 + 8);
          }
          do {
            pbVar8 = (byte *)(lVar11 + uVar13 * 0x18);
            bVar4 = *pbVar8;
            sVar1 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar8 + 8);
            }
            if (sVar1 == __n) {
              __s1 = *(byte **)(lVar11 + uVar13 * 0x18 + 0x10);
              if ((bVar4 & 1) == 0) {
                __s1 = pbVar8 + 1;
              }
              __s2 = pbVar7 + 1;
              if ((bVar3 & 1) != 0) {
                __s2 = *(byte **)(pbVar7 + 0x10);
              }
              if ((bVar4 & 1) == 0) {
                if (__n == 0) goto LAB_0095f244;
                lVar9 = -(ulong)(bVar4 >> 1);
                while (pbVar8 = pbVar8 + 1, *pbVar8 == *__s2) {
                  lVar9 = lVar9 + 1;
                  __s2 = __s2 + 1;
                  if (lVar9 == 0) goto LAB_0095f244;
                }
              }
              else if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_0095f244;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar2);
        }
        FUN_0096204c((uint *)(param_1 + 0x5440),lVar12 + uVar6 * 0x18);
        uVar10 = *param_2;
LAB_0095f244:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar10);
    }
  }
  return;
}




bool FUN_0095f298(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  byte *__s1;
  void *__s1_00;
  byte *__s2_00;
  
  bVar2 = *(byte *)(param_1 + 0x5478);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1_00 = *(void **)(param_1 + 0x5488);
    if ((bVar2 & 1) == 0) {
      __s1_00 = (void *)(param_1 + 0x5479);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return false;
      }
      pcVar5 = (char *)(param_1 + 0x5479);
      lVar6 = -(ulong)(bVar2 >> 1);
      while (*pcVar5 == *__s2) {
        pcVar5 = pcVar5 + 1;
        lVar6 = lVar6 + 1;
        __s2 = __s2 + 1;
        if (lVar6 == 0) {
          return false;
        }
      }
    }
    else {
      if (__n == 0) {
        return false;
      }
      iVar4 = memcmp(__s1_00,__s2,__n);
      if (iVar4 == 0) {
        return false;
      }
    }
  }
  bVar3 = *param_2;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == __n) {
    __s1 = *(byte **)(param_2 + 0x10);
    __s2_00 = *(byte **)(param_1 + 0x5488);
    if ((bVar3 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      __s2_00 = (byte *)(param_1 + 0x5479);
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(bVar3 >> 1);
        do {
          param_2 = param_2 + 1;
          if (*param_2 != *__s2_00) {
            return false;
          }
          lVar6 = lVar6 + 1;
          __s2_00 = __s2_00 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2_00,__n), iVar4 != 0)) {
      return false;
    }
    if (*(uint *)(param_1 + 0x5634) == 0xffffffff) {
      return false;
    }
    return *(char *)(*(long *)(param_1 + 0x5268) + (ulong)*(uint *)(param_1 + 0x5634) * 0x108 +
                    0x100) != '\0';
  }
  return false;
}




bool FUN_0095f418(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  byte *__s1;
  void *__s1_00;
  byte *__s2_00;
  
  bVar2 = *(byte *)(param_1 + 0x5490);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x5498);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1_00 = *(void **)(param_1 + 0x54a0);
    if ((bVar2 & 1) == 0) {
      __s1_00 = (void *)(param_1 + 0x5491);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return false;
      }
      pcVar5 = (char *)(param_1 + 0x5491);
      lVar6 = -(ulong)(bVar2 >> 1);
      while (*pcVar5 == *__s2) {
        pcVar5 = pcVar5 + 1;
        lVar6 = lVar6 + 1;
        __s2 = __s2 + 1;
        if (lVar6 == 0) {
          return false;
        }
      }
    }
    else {
      if (__n == 0) {
        return false;
      }
      iVar4 = memcmp(__s1_00,__s2,__n);
      if (iVar4 == 0) {
        return false;
      }
    }
  }
  bVar3 = *param_2;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == __n) {
    __s1 = *(byte **)(param_2 + 0x10);
    __s2_00 = *(byte **)(param_1 + 0x54a0);
    if ((bVar3 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      __s2_00 = (byte *)(param_1 + 0x5491);
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(bVar3 >> 1);
        do {
          param_2 = param_2 + 1;
          if (*param_2 != *__s2_00) {
            return false;
          }
          lVar6 = lVar6 + 1;
          __s2_00 = __s2_00 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2_00,__n), iVar4 != 0)) {
      return false;
    }
    if (*(uint *)(param_1 + 0x5638) == 0xffffffff) {
      return false;
    }
    return *(char *)(*(long *)(param_1 + 0x5368) + (ulong)*(uint *)(param_1 + 0x5638) * 0x38 + 0x34)
           != '\0';
  }
  return false;
}




void FUN_0095f598(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  byte local_148 [16];
  void *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  byte local_118 [16];
  void *local_108;
  undefined1 auStack_100 [8];
  byte local_f8;
  void *local_e8;
  undefined1 auStack_d8 [8];
  byte local_d0;
  void *local_c0;
  byte local_b0 [16];
  void *local_a0;
  undefined1 auStack_98 [8];
  byte local_90;
  void *local_80;
  undefined1 auStack_70 [8];
  byte local_68;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x5508);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_0095f770;
  }
  else if (*(long *)(param_1 + 0x5510) == 0) goto LAB_0095f770;
  bVar1 = *(byte *)(param_1 + 0x5538);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_0095f770;
  }
  else if (*(long *)(param_1 + 0x5540) == 0) goto LAB_0095f770;
  uVar3 = FUN_00ec5404();
  if ((uVar3 & 1) == 0) {
    FUN_00ec5420();
    local_130 = &local_128;
    local_128 = 0;
    uStack_120 = 0;
    if ((*(byte *)(param_1 + 0x5538) & 1) == 0) {
      lVar5 = param_1 + 0x5539;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x5548);
    }
    FUN_00ec3db8(auStack_70,lVar5);
    FUN_008fa54c(local_b0,PTR_s_CONFIG_OFFERWALL_APP_ID_02bf2540);
    FUN_00ec3d7c(auStack_98,auStack_70);
    FUN_0091b028(&local_130,local_b0,local_b0);
    if ((*(byte *)(param_1 + 0x5508) & 1) == 0) {
      param_1 = param_1 + 0x5509;
    }
    else {
      param_1 = *(long *)(param_1 + 0x5518);
    }
    FUN_00ec3db8(auStack_d8,param_1);
    FUN_008fa54c(local_118,PTR_s_CONFIG_OFFERWALL_USER_ID_02bf2548);
    FUN_00ec3d7c(auStack_100,auStack_d8);
    FUN_0091b028(&local_130,local_118,local_118);
    uVar4 = FUN_00966db0();
    FUN_008fa54c(local_148,uVar4);
    FUN_00ec5430(local_148);
    if ((local_148[0] & 1) != 0) {
      operator_delete(local_138);
    }
    FUN_00ec541c(&local_130,0x73fbf);
    FUN_009b8d90();
    FUN_009b9c34();
    if ((local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
    if ((local_118[0] & 1) != 0) {
      operator_delete(local_108);
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    FUN_00910328(&local_130,local_128);
  }
LAB_0095f770:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0095f79c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_0095f814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f6c();
  if ((uVar2 & 1) == 0) {
    FUN_008fce60(param_3,&DAT_0320ffa8);
  }
  else {
    FUN_00948308(local_50,param_2);
    FUN_008fce60(param_3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_0095f8a8(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  bVar2 = *param_2;
  uVar4 = *(ulong *)(param_2 + 8);
  uVar5 = (ulong)(bVar2 >> 1);
  uVar1 = uVar5;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar4;
  }
  if (uVar1 == 5) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"party",5);
    if (iVar3 == 0) {
      return 5;
    }
    bVar2 = *param_2;
    uVar4 = *(ulong *)(param_2 + 8);
    uVar5 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar5;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0xf) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"partyInvitation",0xf);
    if (iVar3 == 0) {
      return 6;
    }
    bVar2 = *param_2;
    uVar4 = *(ulong *)(param_2 + 8);
    uVar5 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar5;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar4;
  }
  if (uVar1 == 7) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"friends",7);
    if (iVar3 == 0) {
      return 7;
    }
    bVar2 = *param_2;
    uVar4 = *(ulong *)(param_2 + 8);
    uVar5 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar5;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0xd) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"matchResponse",0xd);
    if (iVar3 == 0) {
      return 8;
    }
    bVar2 = *param_2;
    uVar4 = *(ulong *)(param_2 + 8);
    uVar5 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar5 = uVar4;
  }
  iVar3 = 0;
  if (uVar5 == 10) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"transition",10);
    iVar3 = (uint)(iVar3 == 0) << 2;
  }
  return iVar3;
}




void FUN_0095fa30(ulong param_1,undefined8 *param_2)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(undefined1 *)(param_1 + 0x5699) = 0;
  *(undefined8 *)(param_1 + 0x5691) = 0;
  plVar13 = (long *)param_2[3];
  uVar7 = param_1;
  while (plVar13 != param_2 + 4) {
    uVar7 = FUN_0095f8a8(uVar7,plVar13 + 4);
    uVar9 = uVar7 & 0xffffffff;
    if ((int)uVar7 != 0) {
      puVar1 = (uint *)(param_1 + uVar9 * 4 + 0x563c);
      uVar6 = *puVar1;
      uVar7 = (ulong)uVar6;
      iVar3 = (int)plVar13[7];
      if (iVar3 - uVar6 != 0 && (int)uVar6 <= iVar3) {
        *(undefined1 *)(param_1 + uVar9 + 0x5691) = 1;
        uVar7 = FUN_009483b4(uVar7,iVar3,iVar3 - uVar6);
        *puVar1 = *(uint *)(plVar13 + 7);
      }
    }
    plVar10 = (long *)plVar13[1];
    if ((long *)plVar13[1] == (long *)0x0) {
      plVar10 = plVar13 + 2;
      bVar5 = *(long **)*plVar10 != plVar13;
      plVar13 = (long *)*plVar10;
      if (bVar5) {
        do {
          lVar12 = *plVar10;
          plVar10 = (long *)(lVar12 + 0x10);
          plVar13 = (long *)*plVar10;
        } while (*plVar13 != lVar12);
      }
    }
    else {
      do {
        plVar13 = plVar10;
        plVar10 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
  }
  if ((long *)*param_2 != param_2 + 1) {
    plVar13 = (long *)*param_2;
    do {
      uVar6 = FUN_0095f8a8();
      if (uVar6 != 0) {
        plVar10 = (long *)(param_1 + (ulong)uVar6 * 8 + 0x53f8);
        lVar12 = *plVar10;
        FUN_008fcdb8(local_88,plVar13 + 7);
        pvVar2 = (void *)((ulong)local_88 | 1);
        if ((local_88[0] & 1) != 0) {
          pvVar2 = local_78;
        }
        lVar8 = FUN_00e6abf0(pvVar2,auStack_6c);
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (lVar12 < lVar8) {
          *(undefined1 *)(param_1 + uVar6 + 0x5691) = 1;
          FUN_008fcdb8(local_a0,plVar13 + 7);
          pvVar2 = (void *)((ulong)local_a0 | 1);
          if ((local_a0[0] & 1) != 0) {
            pvVar2 = local_90;
          }
          lVar12 = FUN_00e6abf0(pvVar2,auStack_6c);
          *plVar10 = lVar12;
          if ((local_a0[0] & 1) != 0) {
            operator_delete(local_90);
          }
        }
      }
      lVar12 = param_1 + (ulong)uVar6 * 4;
      *(int *)(lVar12 + 0x563c) = *(int *)(lVar12 + 0x563c) + 1;
      plVar10 = (long *)plVar13[1];
      if ((long *)plVar13[1] == (long *)0x0) {
        plVar10 = plVar13 + 2;
        plVar11 = (long *)*plVar10;
        if ((long *)*plVar11 != plVar13) {
          do {
            lVar12 = *plVar10;
            plVar10 = (long *)(lVar12 + 0x10);
            plVar11 = (long *)*plVar10;
          } while (*plVar11 != lVar12);
        }
      }
      else {
        do {
          plVar11 = plVar10;
          plVar10 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      plVar13 = plVar11;
    } while (plVar11 != param_2 + 1);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined1 FUN_0095fc98(long param_1,uint *param_2)

{
  return *(undefined1 *)(param_1 + (ulong)*param_2 + 0x5691);
}




void FUN_0095fcac(long param_1,long param_2)

{
  ulong uVar1;
  
  FUN_0095fa30();
  uVar1 = FUN_0093dbe8();
  if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x108) != 4)) {
    FUN_0094b540(param_2);
    return;
  }
  if (*(char *)(param_1 + 0x5695) != '\0') {
    FUN_00e829b4();
  }
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x5691 + uVar1) != '\0') {
      FUN_0094b504();
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 9);
  return;
}




void FUN_0095fd30(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e80f6c();
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_0093dbe8();
    if ((uVar3 & 1) != 0) {
      local_50[0] = 0;
      local_50[1] = 0;
      local_40 = (void *)0x0;
      FUN_00e70a24(param_2,local_50);
      pvVar1 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar1 = local_40;
      }
      FUN_0093727c("accountHandle",pvVar1);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
    FUN_00e813b0(param_2,param_1 + 0x318);
    FUN_0096589c(param_1 + 0x18,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_0095fdf0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_d0;
  void *local_c8;
  byte local_c0 [8];
  ulong local_b8;
  void *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_009375d4("accountHandle",auStack_a8,0x80,0);
  FUN_008fa54c(local_c0,auStack_a8);
  uVar1 = (ulong)(local_c0[0] >> 1);
  if ((local_c0[0] & 1) != 0) {
    uVar1 = local_b8;
  }
  if (uVar1 == 0) {
    FUN_00e705c8(&local_d0,"Guest");
    FUN_00910394(param_1 + 0x5468,&local_d0);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
      local_d0 = 0;
      local_c8 = (void *)0x0;
    }
    FUN_0093727c("accountHandle","Guest");
  }
  FUN_00e70570(&local_d0,local_c0);
  FUN_00910394(param_1 + 0x5468,&local_d0);
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_d0 = 0;
    local_c8 = (void *)0x0;
  }
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return param_1 + 0x5468;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0095fef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong local_60;
  void *local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e80f6c();
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_0093dbe8();
    if ((uVar3 & 1) != 0) {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_50 = (void *)0x0;
      FUN_00e70a24(param_3,&local_60);
      pvVar1 = (void *)((ulong)&local_60 | 1);
      if ((local_60 & 1) != 0) {
        pvVar1 = local_50;
      }
      FUN_0093727c("accountHandle",pvVar1);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
    }
    FUN_00e70570(&local_60,param_2);
    FUN_00e813e8(&local_60,param_3,param_1 + 0x378);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
      local_60 = 0;
      local_58 = (void *)0x0;
    }
    FUN_0096589c(param_1 + 0x18,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0095ffe4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_008fce60(param_1 + 0x54d8,param_2);
    FUN_008fce60(param_1 + 0x54f0,param_3);
    FUN_00e80fdc(param_2,param_3,param_4 & 1,param_1 + 0x3d8);
    return;
  }
  return;
}

