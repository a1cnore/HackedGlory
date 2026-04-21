// functions/00aa4 — 17 functions
#include "libGameKindred.h"




void FUN_00aa404c(long *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  byte *__s2;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  byte local_150 [16];
  void *local_140;
  undefined **local_138 [5];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  ulong local_90;
  size_t local_88;
  byte *local_80;
  undefined1 local_78;
  undefined4 local_77;
  undefined1 local_73;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_00e84dac(local_138);
  local_138[0] = &PTR_FUN_027bbc28;
  memset(auStack_110,0,0x80);
  puVar7 = (undefined8 *)FUN_00cce724();
  plVar10 = (long *)*puVar7;
  if (*plVar10 != 0) {
    do {
      local_90 = 0;
      local_88 = 0;
      local_80 = (byte *)0x0;
      FUN_008fa54c(local_150,*(undefined8 *)*plVar10);
      FUN_008fce60(&local_90,local_150);
      if ((local_150[0] & 1) != 0) {
        operator_delete(local_140);
      }
      bVar2 = *param_2;
      uVar4 = local_90 >> 1 & 0x7f;
      __n = uVar4;
      if ((local_90 & 1) != 0) {
        __n = local_88;
      }
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
      }
      bVar5 = false;
      if (__n == sVar1) {
        pbVar9 = (byte *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          pbVar9 = local_80;
        }
        __s2 = param_2 + 1;
        if ((bVar2 & 1) != 0) {
          __s2 = *(byte **)(param_2 + 0x10);
        }
        if ((local_90 & 1) == 0) {
          if (__n != 0) {
            lVar8 = -uVar4;
            pbVar9 = (byte *)((ulong)&local_90 | 1);
            do {
              if (*pbVar9 != *__s2) {
                bVar5 = false;
                goto LAB_00aa41ac;
              }
              pbVar9 = pbVar9 + 1;
              lVar8 = lVar8 + 1;
              __s2 = __s2 + 1;
            } while (lVar8 != 0);
          }
        }
        else if (__n != 0) {
          iVar6 = memcmp(pbVar9,__s2,__n);
          bVar5 = iVar6 == 0;
          goto LAB_00aa41ac;
        }
        bVar5 = true;
      }
LAB_00aa41ac:
      local_78 = bVar5;
      local_73 = 1;
      local_77 = 0x1010101;
      FUN_00aa4d1c(auStack_110,&local_90);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      plVar10 = plVar10 + 1;
    } while (*plVar10 != 0);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_138);
  local_138[0] = &PTR_FUN_027bbc28;
  FUN_009577b8(auStack_a0,1);
  FUN_0095783c(auStack_b0,1);
  FUN_0095783c(auStack_c0,1);
  FUN_0095783c(auStack_d0,1);
  FUN_0095783c(auStack_e0,1);
  FUN_0095783c(auStack_f0,1);
  FUN_009578b4(auStack_100,1);
  FUN_00957938(auStack_110,1);
  FUN_00e84dd8(local_138);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00aa4294(long param_1,byte *param_2)

{
  ulong uVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  byte *pbVar4;
  
  __s = (char *)FUN_00aa4cb8();
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




void FUN_00aa4338(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  uint *puVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  void *pvVar16;
  byte local_e0 [16];
  void *local_d0;
  byte local_c8 [8];
  ulong local_c0;
  void *local_b8;
  byte local_b0 [8];
  ulong local_a8;
  void *local_a0;
  ulong local_98 [2];
  void *local_88;
  ulong local_80 [2];
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(param_1 + 0x460) = 0;
  uVar1 = *(uint *)(param_2 + 0x28);
  if (uVar1 == 0) {
    lVar14 = *(long *)(param_1 + 0x468);
  }
  else {
    lVar14 = *(long *)(param_2 + 0x30);
    puVar15 = (uint *)0x0;
    uVar13 = 0;
    do {
      lVar7 = lVar14 + uVar13 * 0x20;
      puVar5 = (uint *)FUN_00aa3c90(param_1,lVar7);
      if (puVar5 != (uint *)0x0) {
        if (*(char *)(lVar7 + 0x18) == '\0') {
          uVar2 = *puVar5;
          if (uVar2 == 0) {
            pcVar8 = (char *)(lVar14 + uVar13 * 0x20 + 0x19);
          }
          else {
            lVar10 = *(long *)(puVar5 + 2);
            lVar7 = lVar14 + uVar13 * 0x20;
            uVar9 = 0;
            pcVar8 = (char *)(lVar7 + 0x19);
            do {
              lVar11 = *(long *)(lVar10 + uVar9 * 8);
              pcVar12 = pcVar8;
              switch(*(undefined4 *)(lVar11 + 0x48)) {
              case 7:
                break;
              case 8:
                pcVar12 = (char *)(lVar7 + 0x1a);
                break;
              case 9:
                pcVar12 = (char *)(lVar7 + 0x1b);
                break;
              case 10:
                pcVar12 = (char *)(lVar7 + 0x1c);
                break;
              case 0xb:
                pcVar12 = (char *)(lVar7 + 0x1d);
                break;
              default:
                goto switchD_00aa4430_default;
              }
              *(char *)(lVar11 + 0x4c) = *pcVar12;
switchD_00aa4430_default:
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar2);
          }
          if ((((*pcVar8 == '\0') ||
               (lVar7 = lVar14 + uVar13 * 0x20, *(char *)(lVar7 + 0x1a) == '\0')) ||
              (*(char *)(lVar7 + 0x1b) == '\0')) ||
             ((lVar7 = lVar14 + uVar13 * 0x20, *(char *)(lVar7 + 0x1c) == '\0' ||
              (*(char *)(lVar7 + 0x1d) == '\0')))) {
            puVar5[0x10] = 3;
          }
          else {
            puVar5[0x10] = 2;
          }
        }
        else {
          *(uint **)(param_1 + 0x460) = puVar5;
          uVar2 = *puVar5;
          puVar5[0x10] = 0;
          puVar15 = puVar5;
          if (uVar2 != 0) {
            lVar7 = *(long *)(puVar5 + 2);
            uVar9 = 0;
            do {
              lVar10 = uVar9 * 8;
              uVar9 = uVar9 + 1;
              *(undefined1 *)(*(long *)(lVar7 + lVar10) + 0x4c) = 1;
            } while (uVar9 < uVar2);
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar1);
    lVar14 = *(long *)(param_1 + 0x468);
    if (puVar15 != (uint *)0x0) {
      uVar6 = 2;
      goto LAB_00aa44e4;
    }
  }
  uVar6 = 0;
  *(long *)(param_1 + 0x460) = lVar14;
LAB_00aa44e4:
  *(undefined4 *)(lVar14 + 0x40) = uVar6;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar14 = *(long *)(param_1 + 0x30);
    do {
      if (*(code **)(lVar14 + 8) == (code *)0x0) {
        (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x10));
      }
      else {
        (**(code **)(lVar14 + 8))();
      }
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x28) * 0x20);
  }
  local_80[0] = 0;
  local_80[1] = 0;
  local_70 = (void *)0x0;
  local_98[1] = 0;
  local_88 = (void *)0x0;
  local_98[0] = 0;
  uVar13 = (ulong)*(uint *)(param_1 + 0x450);
  if (*(uint *)(param_1 + 0x450) != 0) {
    uVar9 = 0;
    do {
      lVar14 = *(long *)(*(long *)(param_1 + 0x458) + uVar9 * 8);
      if ((*(uint *)(lVar14 + 0x40) | 2) == 2) {
        FUN_008fcdb8(local_b0,lVar14 + 0x10);
        uVar13 = (ulong)(local_b0[0] >> 1);
        pvVar16 = (void *)((ulong)local_b0 | 1);
        if ((local_b0[0] & 1) != 0) {
          uVar13 = local_a8;
          pvVar16 = local_a0;
        }
        FUN_0090de84(local_80,pvVar16,uVar13);
        FUN_0090de84(local_80,",",1);
        if ((local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        uVar13 = (ulong)*(uint *)(param_1 + 0x450);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar13);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar14 = 0;
    uVar13 = 0;
    pvVar16 = (void *)((ulong)local_c8 | 1);
    do {
      FUN_008fcdb8(local_b0,*(long *)(param_2 + 0x30) + lVar14);
      lVar7 = *(long *)(param_2 + 0x30);
      if (*(char *)(lVar7 + lVar14 + 0x19) != '\0') {
        FUN_009697c8(local_e0,local_b0,"_ThumbsUp,");
        FUN_008fcdb8(local_c8,local_e0);
        if ((local_e0[0] & 1) != 0) {
          operator_delete(local_d0);
        }
        uVar9 = (ulong)(local_c8[0] >> 1);
        pvVar4 = pvVar16;
        if ((local_c8[0] & 1) != 0) {
          uVar9 = local_c0;
          pvVar4 = local_b8;
        }
        FUN_0090de84(local_98,pvVar4,uVar9);
        if ((local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
        lVar7 = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(lVar7 + lVar14 + 0x1a) != '\0') {
        FUN_009697c8(local_e0,local_b0,"_Smile,");
        FUN_008fcdb8(local_c8,local_e0);
        if ((local_e0[0] & 1) != 0) {
          operator_delete(local_d0);
        }
        uVar9 = (ulong)(local_c8[0] >> 1);
        pvVar4 = pvVar16;
        if ((local_c8[0] & 1) != 0) {
          uVar9 = local_c0;
          pvVar4 = local_b8;
        }
        FUN_0090de84(local_98,pvVar4,uVar9);
        if ((local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
        lVar7 = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(lVar7 + lVar14 + 0x1b) != '\0') {
        FUN_009697c8(local_e0,local_b0,"_Frown,");
        FUN_008fcdb8(local_c8,local_e0);
        if ((local_e0[0] & 1) != 0) {
          operator_delete(local_d0);
        }
        uVar9 = (ulong)(local_c8[0] >> 1);
        pvVar4 = pvVar16;
        if ((local_c8[0] & 1) != 0) {
          uVar9 = local_c0;
          pvVar4 = local_b8;
        }
        FUN_0090de84(local_98,pvVar4,uVar9);
        if ((local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
        lVar7 = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(lVar7 + lVar14 + 0x1c) != '\0') {
        FUN_009697c8(local_e0,local_b0,"_Cheer,");
        FUN_008fcdb8(local_c8,local_e0);
        if ((local_e0[0] & 1) != 0) {
          operator_delete(local_d0);
        }
        uVar9 = (ulong)(local_c8[0] >> 1);
        pvVar4 = pvVar16;
        if ((local_c8[0] & 1) != 0) {
          uVar9 = local_c0;
          pvVar4 = local_b8;
        }
        FUN_0090de84(local_98,pvVar4,uVar9);
        if ((local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
        lVar7 = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(lVar7 + lVar14 + 0x1d) != '\0') {
        FUN_009697c8(local_e0,local_b0,"_Okay,");
        FUN_008fcdb8(local_c8,local_e0);
        if ((local_e0[0] & 1) != 0) {
          operator_delete(local_d0);
        }
        uVar9 = (ulong)(local_c8[0] >> 1);
        pvVar4 = pvVar16;
        if ((local_c8[0] & 1) != 0) {
          uVar9 = local_c0;
          pvVar4 = local_b8;
        }
        FUN_0090de84(local_98,pvVar4,uVar9);
        if ((local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
      }
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x20;
    } while (uVar13 < *(uint *)(param_2 + 0x28));
  }
  pvVar16 = (void *)((ulong)local_98 | 1);
  if ((local_98[0] & 1) != 0) {
    pvVar16 = local_88;
  }
  FUN_008ffc4c("SocialPingsOwned",pvVar16,1);
  pvVar16 = (void *)((ulong)local_80 | 1);
  if ((local_80[0] & 1) != 0) {
    pvVar16 = local_70;
  }
  FUN_008ffc4c("SocialPingPacksCompleted",pvVar16,1);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa48f8(void)

{
  uint uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009580b8();
  FUN_009620d8();
  return;
}




void FUN_00aa491c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_00aa3680(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00aa49a4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_00aa4e28(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00aa4a2c(long *param_1)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *__s2;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  byte local_168 [16];
  void *local_158;
  byte local_150 [8];
  size_t local_148;
  char *local_140;
  undefined **local_138 [5];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  ulong local_90;
  size_t local_88;
  void *local_80;
  undefined1 local_78;
  undefined4 local_77;
  undefined1 local_73;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_00e84dac(local_138);
  local_138[0] = &PTR_FUN_027bbc28;
  memset(auStack_110,0,0x80);
  uVar6 = FUN_00aa4cb8(param_1);
  FUN_008fa54c(local_150,uVar6);
  puVar7 = (undefined8 *)FUN_00cce724();
  plVar10 = (long *)*puVar7;
  if (*plVar10 != 0) {
    do {
      local_90 = 0;
      local_88 = 0;
      local_80 = (void *)0x0;
      FUN_008fa54c(local_168,*(undefined8 *)*plVar10);
      FUN_008fce60(&local_90,local_168);
      if ((local_168[0] & 1) != 0) {
        operator_delete(local_158);
      }
      __n = (ulong)(local_150[0] >> 1);
      if ((local_150[0] & 1) != 0) {
        __n = local_148;
      }
      if (__n == 0) {
        puVar7 = (undefined8 *)FUN_00cce724();
        bVar4 = *(long *)*puVar7 == *plVar10;
      }
      else {
        uVar3 = local_90 >> 1 & 0x7f;
        sVar1 = uVar3;
        if ((local_90 & 1) != 0) {
          sVar1 = local_88;
        }
        bVar4 = false;
        if (sVar1 == __n) {
          __s2 = (char *)((ulong)local_150 | 1);
          if ((local_150[0] & 1) != 0) {
            __s2 = local_140;
          }
          if ((local_90 & 1) == 0) {
            lVar8 = -uVar3;
            pcVar9 = (char *)((ulong)&local_90 | 1);
            do {
              if (*pcVar9 != *__s2) {
                bVar4 = false;
                goto LAB_00aa4bac;
              }
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
LAB_00aa4bac:
      local_78 = bVar4;
      local_73 = 1;
      local_77 = 0x1010101;
      if ((bool)local_78) {
        FUN_00aa4294(param_1,&local_90);
      }
      FUN_00aa4d1c(auStack_110,&local_90);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      plVar10 = plVar10 + 1;
    } while (*plVar10 != 0);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_138);
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  local_138[0] = &PTR_FUN_027bbc28;
  FUN_009577b8(auStack_a0,1);
  FUN_0095783c(auStack_b0,1);
  FUN_0095783c(auStack_c0,1);
  FUN_0095783c(auStack_d0,1);
  FUN_0095783c(auStack_e0,1);
  FUN_0095783c(auStack_f0,1);
  FUN_009578b4(auStack_100,1);
  FUN_00957938(auStack_110,1);
  FUN_00e84dd8(local_138);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00aa4cb8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar1 = param_1 + 0x39;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x48);
  }
  lVar2 = *(long *)(param_1 + 0x468);
  if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
    lVar2 = lVar2 + 0x11;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  FUN_009375d4(lVar1,param_1 + 0x50,0x400,lVar2);
  return param_1 + 0x50;
}




void FUN_00aa4d1c(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00957244(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined2 *)(lVar1 + -4) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




void FUN_00aa4db8(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x470);
  FUN_00aa3700();
  DAT_03133cc0 = pvVar1;
  return;
}




void FUN_00aa4de8(void)

{
  if (DAT_03133cc0 != (long *)0x0) {
    (**(code **)(*DAT_03133cc0 + 8))();
  }
  DAT_03133cc0 = (long *)0x0;
  return;
}




undefined8 FUN_00aa4e1c(void)

{
  return DAT_03133cc0;
}




void FUN_00aa4e28(uint *param_1,uint param_2)

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




void FUN_00aa4ea8(void *param_1)

{
  memset(param_1,0,0x60);
  *(undefined4 *)((long)param_1 + 0x60) = 3;
  *(undefined1 *)((long)param_1 + 100) = 0;
  return;
}




void FUN_00aa4edc(byte *param_1)

{
  if ((param_1[0x48] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  if ((param_1[0x30] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_00aa4f40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  FUN_008fce60();
  FUN_008fce60(param_1 + 0x18,param_3);
  FUN_008fce60(param_1 + 0x30,param_4);
  FUN_008fce60(param_1 + 0x48,param_5);
  *(byte *)(param_1 + 100) = param_6 & 1;
  return;
}




void FUN_00aa4fa8(undefined8 *param_1)

{
  FUN_00948cd8();
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_027d20b0;
  FUN_008fa54c(param_1 + 5,"CharmEquipedEmoji");
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  FUN_00aa5000(param_1);
  return;
}

