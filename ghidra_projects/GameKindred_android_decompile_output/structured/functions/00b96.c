// functions/00b96 — 12 functions
#include "libGameKindred.h"




void FUN_00b9653c(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  piVar1 = (int *)(param_1 + 0x12550);
  FUN_00914e9c(piVar1,0);
  iVar3 = FUN_00916120();
  if (iVar3 != 0) {
    uVar6 = 0;
    do {
      uVar5 = FUN_00916130(uVar6);
      FUN_00b9666c(piVar1,uVar5);
      uVar6 = uVar6 + 1;
      uVar4 = FUN_00916120();
    } while (uVar6 < uVar4);
  }
  FUN_00b9d400(param_1);
  FUN_00b92674(param_1);
  FUN_00b9e9bc(param_1);
  if (*piVar1 != 0) {
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_RECENTS_TITLE",0);
    thunk_FUN_00e7051c(&local_48,uVar5);
    thunk_FUN_00e7051c(&local_58,&DAT_03210450);
    FUN_00e70e18(&local_58," (%d)",*piVar1);
    FUN_00e70c34(&local_48,&local_58);
    FUN_00f0d75c(param_1 + 0x46c8,&local_48);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b9666c(uint *param_1,undefined4 *param_2)

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
    FUN_00ba15ac(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  *(undefined4 *)(lVar4 + -0x38) = *param_2;
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 2);
  thunk_FUN_00e7051c(lVar4 + -0x18,param_2 + 8);
  *(undefined2 *)(lVar4 + -4) = *(undefined2 *)(param_2 + 0xd);
  *(undefined4 *)(lVar4 + -8) = param_2[0xc];
  return;
}




void FUN_00b96720(long param_1)

{
  FUN_00b9653c(param_1 + -0x3b8);
  return;
}




void FUN_00b96728(long param_1)

{
  if ((*(byte *)(param_1 + 0x360) >> 1 & 1) == 0) {
    FUN_00ac1e04(param_1 + 0xdf40);
    return;
  }
  return;
}




int FUN_00b96740(long param_1,byte *param_2)

{
  uint *puVar1;
  size_t sVar2;
  void *pvVar3;
  size_t sVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong *puVar10;
  char *pcVar11;
  byte *__s2;
  char *pcVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  ulong __n;
  uint uVar17;
  ulong uVar18;
  char *pcVar19;
  byte local_f8 [16];
  void *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  byte local_c0 [16];
  void *local_b0;
  byte local_a0 [16];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  bVar6 = *param_2;
  sVar2 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  sVar4 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar4 = DAT_0320ffb0;
  }
  if (sVar2 == sVar4) {
    pbVar15 = *(byte **)(param_2 + 0x10);
    if ((bVar6 & 1) == 0) {
      pbVar15 = param_2 + 1;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar6 & 1) == 0) {
      if (sVar2 != 0) {
        lVar14 = -(ulong)(bVar6 >> 1);
        pbVar15 = param_2;
        do {
          pbVar15 = pbVar15 + 1;
          if (*pbVar15 != *__s2) goto LAB_00b96804;
          lVar14 = lVar14 + 1;
          __s2 = __s2 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar9 = memcmp(pbVar15,__s2,sVar2), iVar9 != 0)) goto LAB_00b96804;
    iVar9 = -1;
  }
  else {
LAB_00b96804:
    iVar9 = FUN_00b943e0(param_1,param_2);
    if (iVar9 == -1) {
      puVar1 = (uint *)(param_1 + 0x12570);
      FUN_0099ce88(local_c0);
      FUN_008fcdb8(local_a0,param_2);
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0x1e;
      local_74 = 0;
      FUN_00b9fbc4(puVar1,local_c0);
      FUN_00ba1488(&local_88,1);
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      FUN_0099cedc(local_c0);
      FUN_008fa54c(local_f8,"FRIENDS.PENDING_CHATS.");
      uVar18 = *(ulong *)(param_2 + 8);
      pbVar15 = *(byte **)(param_2 + 0x10);
      if ((*param_2 & 1) == 0) {
        pbVar15 = param_2 + 1;
        uVar18 = (ulong)(*param_2 >> 1);
      }
      puVar10 = (ulong *)FUN_0090de84(local_f8,pbVar15,uVar18);
      local_d0 = (void *)puVar10[2];
      uStack_d8 = puVar10[1];
      local_e0 = *puVar10;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      FUN_008fcdb8(local_c0,&local_e0);
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      if ((local_f8[0] & 1) != 0) {
        operator_delete(local_e8);
      }
      pvVar3 = (void *)((ulong)local_c0 | 1);
      if ((local_c0[0] & 1) != 0) {
        pvVar3 = local_b0;
      }
      FUN_0099cfec(*(long *)(param_1 + 0x12578) + (ulong)(*puVar1 - 1) * 0x50,pvVar3,1);
      uVar17 = *puVar1;
      if ((*(uint *)(param_1 + 0x12658) < uVar17) && (uVar17 != 0)) {
        bVar6 = *(byte *)(param_1 + 0x125c8);
        lVar14 = *(long *)(param_1 + 0x12578);
        uVar18 = 0;
        sVar2 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 0x125d0);
        }
        do {
          lVar13 = lVar14 + uVar18 * 0x50;
          bVar5 = *(byte *)(lVar13 + 0x20);
          __n = *(size_t *)(lVar13 + 0x28);
          uVar8 = (ulong)(bVar5 >> 1);
          sVar4 = uVar8;
          if ((bVar5 & 1) != 0) {
            sVar4 = __n;
          }
          if (sVar4 != sVar2) {
LAB_00b96a1c:
            if ((bVar5 & 1) == 0) {
              pcVar19 = (char *)(lVar13 + 0x21);
              __n = uVar8;
            }
            else {
              pcVar19 = *(char **)(lVar14 + uVar18 * 0x50 + 0x30);
            }
LAB_00b96a48:
            if (0 < (long)__n) {
              pcVar12 = pcVar19 + __n;
              pcVar11 = pcVar19;
              while( true ) {
                pcVar11 = memchr(pcVar11,0x23,__n);
                if (pcVar11 == (char *)0x0) goto LAB_00b96ab0;
                if (*pcVar11 == '#') break;
                pcVar11 = pcVar11 + 1;
                __n = (long)pcVar12 - (long)pcVar11;
                if ((long)__n < 1) goto LAB_00b96ab0;
              }
              if ((pcVar11 != pcVar12) && (pcVar11 == pcVar19)) goto LAB_00b96a98;
            }
LAB_00b96ab0:
            lVar14 = lVar14 + (uVar18 & 0xffffffff) * 0x50;
            FUN_00ba2038(puVar1,lVar14,lVar14 + 0x50);
            uVar17 = *puVar1;
            break;
          }
          pcVar19 = *(char **)(lVar14 + uVar18 * 0x50 + 0x30);
          pcVar11 = pcVar19;
          if ((bVar5 & 1) == 0) {
            pcVar11 = (char *)(lVar13 + 0x21);
          }
          pcVar12 = (char *)(param_1 + 0x125c9);
          if ((bVar6 & 1) != 0) {
            pcVar12 = *(char **)(param_1 + 0x125d8);
          }
          if ((bVar5 & 1) == 0) {
            if (sVar2 != 0) {
              pcVar19 = (char *)(lVar13 + 0x21);
              lVar16 = -uVar8;
              do {
                if (*pcVar19 != *pcVar12) goto LAB_00b96a1c;
                pcVar19 = pcVar19 + 1;
                lVar16 = lVar16 + 1;
                pcVar12 = pcVar12 + 1;
              } while (lVar16 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar9 = memcmp(pcVar11,pcVar12,sVar2), iVar9 != 0))
          goto LAB_00b96a48;
LAB_00b96a98:
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar17);
      }
      iVar9 = uVar17 - 1;
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b96b18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 ,uint param_6)

{
  long lVar1;
  byte local_178 [16];
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined **local_150 [23];
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  byte local_78;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00e705c8(&local_160,param_3);
  FUN_008fa54c(local_178,param_4);
  FUN_00b9991c(local_150,param_2,&local_160,local_178,param_5 & 1,param_6 & 1);
  FUN_00b999dc(param_1 + 0x38,local_150);
  local_150[0] = &PTR_FUN_027e8d50;
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  FUN_00f13d08(local_150);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if (local_158 != (void *)0x0) {
    operator_delete__(local_158);
    local_160 = 0;
    local_158 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b96c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ba11d4(param_1,param_4,param_5);
  return;
}




void FUN_00b96c38(void)

{
  return;
}




undefined8
FUN_00b96c3c(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,byte param_6)

{
  long lVar1;
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
  byte local_60;
  undefined1 local_5f;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    memset(local_c0,0,0x60);
    FUN_008fa54c(local_d8,param_2);
    FUN_008fce60(local_c0,local_d8);
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
    FUN_008fa54c(local_d8,param_3);
    FUN_008fce60(local_a8,local_d8);
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
    FUN_008fa54c(local_d8,param_4);
    FUN_008fce60(local_90,local_d8);
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
    FUN_008fa54c(local_d8,param_5);
    FUN_008fce60(local_78,local_d8);
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
    local_5f = 0;
    local_60 = param_6 & 1;
    FUN_00b96ddc(param_1 + 0x12560,local_c0);
    FUN_00b95350(param_1);
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
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b96ddc(uint *param_1,long param_2)

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
    FUN_00ba1824(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x68;
  FUN_008fcdb8(lVar4 + -0x68,param_2);
  FUN_008fcdb8(lVar4 + -0x50,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x48);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x60);
  return;
}




undefined8 FUN_00b96e9c(long param_1)

{
  FUN_00b96c3c(param_1 + -0x398);
  return 1;
}




undefined8 FUN_00b96ebc(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  char *__s2;
  undefined8 local_188;
  void *local_180;
  ulong local_178;
  size_t local_170;
  char *local_168;
  undefined8 local_160;
  void *local_158;
  long local_150;
  byte local_148 [16];
  void *local_138;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_150 = param_3;
  uVar6 = FUN_00e70b34(param_2,&DAT_03210450);
  if (((param_4 == 0) || (param_3 == 0)) || ((uVar6 & 1) != 0)) goto LAB_00b97168;
  FUN_00e70510(&local_160);
  local_178 = 0;
  local_170 = 0;
  local_168 = (char *)0x0;
  lVar7 = FUN_00b97198(param_1 + 0x24b0,&local_150);
  if (lVar7 == 0) {
    FUN_008fa54c(local_148,local_150);
    FUN_008fce60(&local_178,local_148);
    if ((local_148[0] & 1) != 0) {
      operator_delete(local_138);
    }
    FUN_008fa54c(local_148,local_150);
    (**(code **)(*param_1 + 0x1d8))(param_1,local_148,&local_160);
    if ((local_148[0] & 1) != 0) {
      operator_delete(local_138);
    }
  }
  else {
    FUN_008fce60(&local_178,lVar7);
    FUN_00910394(&local_160,lVar7 + 0x18);
  }
  uVar4 = FUN_00b943e0(param_1,&local_178);
  if (uVar4 == 0xffffffff) {
    uVar4 = FUN_00b96740(param_1,&local_178);
  }
  if ((-1 < (int)uVar4) && (uVar4 < *(uint *)(param_1 + 0x24ae))) {
    local_148[0] = 0;
    if (((long *)param_1[0x23f6] != (long *)0x0) &&
       (iVar5 = (**(code **)(*(long *)param_1[0x23f6] + 0x40))(), iVar5 == 2)) {
      lVar7 = FUN_00e85318(0);
      FUN_00e6c2cc((double)lVar7,local_148,0x100);
    }
    FUN_00b96b18(param_1[0x24af] + (ulong)uVar4 * 0x50,param_2,param_4,local_148,1,0);
    bVar2 = *(byte *)(param_1 + 0x24b9);
    uVar6 = local_178 >> 1 & 0x7f;
    __n = uVar6;
    if ((local_178 & 1) != 0) {
      __n = local_170;
    }
    sVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      sVar1 = param_1[0x24ba];
    }
    if (__n == sVar1) {
      __s2 = (char *)param_1[0x24bb];
      pcVar8 = (char *)((ulong)&local_178 | 1);
      __s1 = pcVar8;
      if ((local_178 & 1) != 0) {
        __s1 = local_168;
      }
      if ((bVar2 & 1) == 0) {
        __s2 = (char *)((long)param_1 + 0x125c9);
      }
      if ((local_178 & 1) == 0) {
        if (__n != 0) {
          lVar7 = -uVar6;
          do {
            if (*pcVar8 != *__s2) goto LAB_00b97148;
            pcVar8 = pcVar8 + 1;
            lVar7 = lVar7 + 1;
            __s2 = __s2 + 1;
          } while (lVar7 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00b97148;
      FUN_00e705c8(&local_188,param_4);
      FUN_00ac1474(param_1 + 0x1be8,param_2,&local_188,local_148,1,0);
      if (local_180 != (void *)0x0) {
        operator_delete__(local_180);
        local_188 = 0;
        local_180 = (void *)0x0;
      }
    }
  }
LAB_00b97148:
  if ((local_178 & 1) != 0) {
    operator_delete(local_168);
  }
  if (local_158 != (void *)0x0) {
    operator_delete__(local_158);
    local_160 = 0;
    local_158 = (void *)0x0;
  }
LAB_00b97168:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

