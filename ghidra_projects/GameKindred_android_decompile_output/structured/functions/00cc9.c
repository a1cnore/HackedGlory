// functions/00cc9 — 12 functions
#include "libGameKindred.h"




void FUN_00cc95b0(uint *param_1,undefined8 *param_2)

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
    FUN_00ccfe24(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00cc9638(uint *param_1,undefined8 *param_2)

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
    FUN_00ccfea4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00cc96c0(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_00cc972c(byte *param_1)

{
  FUN_00a87ef4(param_1 + 200,1);
  if ((param_1[0xb0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xc0));
  }
  if ((param_1[0x78] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if ((param_1[0x60] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
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




int FUN_00cc97cc(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    iVar5 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + uVar4 * 8);
      if (lVar6 == 0) {
        return iVar5;
      }
      uVar3 = FUN_009580b8();
      uVar1 = FUN_00961744(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x28) + uVar4 * 8));
      uVar2 = FUN_00cc9850(lVar6,uVar1 & 1);
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      iVar5 = iVar5 + (uVar2 & 1);
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  return iVar5;
}




bool FUN_00cc9850(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + 0xa5) == '\0') || (*(char *)(param_1 + 0xa4) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + 0x90) < 1;
    if ((*(long *)(param_1 + 0x90) < 1) && ((param_2 & 1) == 0)) {
      if (*(long *)(param_1 + 0x98) < 1) {
        bVar1 = true;
      }
      else {
        lVar2 = FUN_00e85318(0);
        bVar1 = *(long *)(param_1 + 0x98) <= lVar2;
      }
    }
  }
  return bVar1;
}




void FUN_00cc98c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,byte param_6,byte param_7,undefined8 param_8,undefined8 param_9,
                 byte param_10,byte param_11,byte param_12,byte param_13,byte param_14)

{
  FUN_008fcdb8();
  FUN_008fcdb8(param_1 + 0x18,param_9);
  FUN_008fcdb8(param_1 + 0x30,param_3);
  memset((void *)(param_1 + 0x48),0,0x48);
  *(byte *)(param_1 + 0xa4) = param_6 & 1;
  *(byte *)(param_1 + 0xa5) = param_7 & 1;
  *(byte *)(param_1 + 0xa6) = param_10 & 1;
  *(undefined8 *)(param_1 + 0x90) = param_4;
  *(byte *)(param_1 + 0xa7) = param_11 & 1;
  *(byte *)(param_1 + 0xa8) = param_12 & 1;
  *(byte *)(param_1 + 0xa9) = param_13 & 1;
  *(undefined8 *)(param_1 + 0x98) = param_8;
  *(byte *)(param_1 + 0xaa) = param_14 & 1;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = param_5;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}




ulong FUN_00cc99b8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x90) < 1) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    lVar1 = FUN_00e85318(0);
    uVar2 = *(long *)(param_1 + 0x90) - lVar1;
    uVar2 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  }
  return uVar2;
}




undefined1 FUN_00cc99fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xaa);
}




void FUN_00cc9a04(long param_1,ulong param_2,undefined1 *param_3,uint *param_4)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  void *__s1;
  char *pcVar8;
  long lVar9;
  char *__s2;
  timespec local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    lVar9 = param_1 + 0x79;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x88);
  }
  uVar5 = FUN_00e6a474(lVar9);
  __s1 = (void *)FUN_0091ed5c(lVar9,uVar5,0x12345678);
  uVar7 = (uint)__s1;
  *param_3 = 0;
  *param_4 = 0;
  if (((ulong)__s1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x78);
    __n = (ulong)((byte)DAT_0313dc10 >> 1);
    if (((byte)DAT_0313dc10 & 1) != 0) {
      __n = DAT_0313dc18;
    }
    sVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x80);
    }
    bVar4 = false;
    if (__n == sVar1) {
      __s2 = *(char **)(param_1 + 0x88);
      __s1 = DAT_0313dc20;
      if (((byte)DAT_0313dc10 & 1) == 0) {
        __s1 = (void *)((long)&DAT_0313dc10 + 1);
      }
      if ((bVar2 & 1) == 0) {
        __s2 = (char *)(param_1 + 0x79);
      }
      if (((byte)DAT_0313dc10 & 1) == 0) {
        if (__n != 0) {
          lVar9 = -(ulong)((byte)DAT_0313dc10 >> 1);
          pcVar8 = (char *)((long)&DAT_0313dc10 + 1);
          do {
            if (*pcVar8 != *__s2) {
              bVar4 = false;
              goto joined_r0x00cc9b18;
            }
            pcVar8 = pcVar8 + 1;
            lVar9 = lVar9 + 1;
            __s2 = __s2 + 1;
          } while (lVar9 != 0);
        }
      }
      else if (__n != 0) {
        uVar6 = memcmp(__s1,__s2,__n);
        __s1 = (void *)(ulong)uVar6;
        bVar4 = uVar6 == 0;
        goto joined_r0x00cc9b18;
      }
      bVar4 = true;
      if ((param_2 & 1) == 0) goto joined_r0x00cc9b40;
LAB_00cc9b1c:
      if (0.0 < DAT_0313dc38) goto joined_r0x00cc9b40;
    }
    else {
joined_r0x00cc9b18:
      if ((param_2 & 1) != 0) goto LAB_00cc9b1c;
joined_r0x00cc9b40:
      if (bVar4) {
        if (0.0 < DAT_0313dc38) {
          uVar7 = clock_gettime(1,&local_68);
          __s1 = (void *)(ulong)uVar7;
          lVar9 = local_68.tv_nsec - DAT_0313dc30;
          local_68.tv_sec = local_68.tv_sec - DAT_0313dc28;
          if (lVar9 < 0) {
            local_68.tv_sec = local_68.tv_sec + -1;
            lVar9 = (local_68.tv_nsec + 1000000000) - DAT_0313dc30;
          }
          DAT_0313dc38 = DAT_0313dc38 + (double)(lVar9 + local_68.tv_sec * 1000000000) * -1e-09;
          goto LAB_00cc9c0c;
        }
        goto LAB_00cc9bbc;
      }
    }
    DAT_0313dc38 = 0.2;
    FUN_00e70314(&DAT_0313dc28);
    __s1 = (void *)FUN_008fce60(&DAT_0313dc10,(byte *)(param_1 + 0x78));
  }
  else {
LAB_00cc9bbc:
    *param_3 = 1;
    if ((uVar7 >> 1 & 1) == 0) {
      *param_4 = uVar7 >> 8 & 0xff;
    }
    else {
      *param_4 = 0;
    }
  }
LAB_00cc9c0c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__s1);
}




void FUN_00cc9c48(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  lVar1 = FUN_00e6b5e4();
  *(long *)(param_1 + 0x20) = lVar1 * 0x708;
  return;
}




void FUN_00cc9c80(uint *param_1,void *param_2)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  bool bVar17;
  uint *puVar18;
  char *pcVar19;
  ulong local_280;
  long local_268;
  ulong local_220;
  long local_218;
  char *local_210;
  ulong local_208;
  int local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  void *local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  int local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined1 local_188;
  undefined1 uStack_187;
  timespec local_180;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [16];
  long local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_210 = (char *)0x0;
  local_208 = 0;
  local_200 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = (void *)0x0;
  local_1d8 = (void *)0x0;
  local_1e8 = 0;
  local_1c0 = 0x400;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1f8 = operator_new(0x28);
  local_1f8[3] = 0;
  local_1f8[4] = 0;
  local_1f8[1] = 0x10000;
  local_1f8[2] = 0;
  *local_1f8 = 0;
  local_1f0 = local_1f8;
  local_180.tv_sec = (__time_t)param_2;
  local_180.tv_nsec = (long)param_2;
  FUN_008fd344(&local_210,&local_180);
  if (local_1b8 != 0) goto LAB_00ccb0c0;
  FUN_00cc7548(param_1);
  FUN_00e6b5e4();
  if (local_200 == 3) {
    local_220 = 0;
    local_218 = 0;
    if ((int)local_208 == 0) {
      uVar14 = 0;
LAB_00ccaf74:
      local_180.tv_sec = 0;
      local_180.tv_nsec = 0;
      FUN_00ccb728(&local_180,uVar14,0);
      if ((int)local_220 != 0) {
        lVar7 = 0;
        uVar14 = 0;
        do {
          *(long *)(local_180.tv_nsec + uVar14 * 8) = local_218 + lVar7;
          uVar14 = uVar14 + 1;
          lVar7 = lVar7 + 0xf8;
        } while (uVar14 < (local_220 & 0xffffffff));
      }
      if ((int)local_180.tv_sec != 0) {
        qsort((void *)local_180.tv_nsec,local_180.tv_sec & 0xffffffff,8,FUN_00ccb7a8);
      }
      lVar7 = *(long *)(param_1 + 2);
      if (lVar7 != 0) {
        if (*param_1 != 0) {
          lVar11 = (ulong)*param_1 * 0xf8;
          do {
            FUN_00ccb680(lVar7);
            lVar11 = lVar11 + -0xf8;
            lVar7 = lVar7 + 0xf8;
          } while (lVar11 != 0);
        }
        *param_1 = 0;
      }
      if ((int)local_180.tv_sec != 0) {
        uVar14 = 0;
        do {
          FUN_00ccb56c(param_1,*(undefined8 *)(local_180.tv_nsec + uVar14 * 8));
          uVar14 = uVar14 + 1;
        } while (uVar14 < (local_180.tv_sec & 0xffffffffU));
      }
      if ((void *)local_180.tv_nsec != (void *)0x0) {
        operator_delete__((void *)local_180.tv_nsec);
        local_180.tv_sec = 0;
        local_180.tv_nsec = 0;
      }
    }
    else {
      bVar17 = true;
      pcVar19 = local_210;
      do {
        if (!bVar17) goto LAB_00ccb03c;
        uVar13 = *(uint *)(pcVar19 + 0x28);
        pcVar1 = pcVar19 + 0x18;
        if ((uVar13 >> 0xc & 1) == 0) {
LAB_00cc9e08:
          bVar17 = false;
          if (uVar13 == 3) {
            FUN_00ccb120(&local_180);
            lVar7 = FUN_008fd190(pcVar1,&DAT_01bc5849);
            if (*(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7) {
LAB_00ccaf20:
              bVar17 = true;
            }
            else {
              local_1a8 = "sku";
              local_198 = 0x100005;
              local_1a0 = 3;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"boxText"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "boxText";
              local_198 = 0x100005;
              local_1a0 = 7;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"boxTitle"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "boxTitle";
              local_198 = 0x100005;
              local_1a0 = 8;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"imagePath"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "imagePath";
              local_198 = 0x100005;
              local_1a0 = 9;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"currencyType"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "currencyType";
              local_198 = 0x100005;
              local_1a0 = 0xc;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"revealCurrencyType"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "revealCurrencyType";
              local_198 = 0x100005;
              local_1a0 = 0x12;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"endEpoch"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "endEpoch";
              local_198 = 0x100005;
              local_1a0 = 8;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) >> 5 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"startEpoch"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "startEpoch";
              local_198 = 0x100005;
              local_1a0 = 10;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) >> 5 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"cardsPerPack"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "cardsPerPack";
              local_198 = 0x100005;
              local_1a0 = 0xc;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) >> 3 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,&DAT_01bc58a9),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "cost";
              local_198 = 0x100005;
              local_1a0 = 4;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) >> 3 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"revealCost"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "revealCost";
              local_198 = 0x100005;
              local_1a0 = 10;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) >> 3 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"revealCount"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "revealCount";
              local_198 = 0x100005;
              local_1a0 = 0xb;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) >> 3 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"isDiscountWasValue"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "isDiscountWasValue";
              local_198 = 0x100005;
              local_1a0 = 0x12;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) >> 2 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"storePriority"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "storePriority";
              local_198 = 0x100005;
              local_1a0 = 0xd;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) >> 2 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"isDiscount"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "isDiscount";
              local_198 = 0x100005;
              local_1a0 = 10;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"isLarge"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "isLarge";
              local_198 = 0x100005;
              local_1a0 = 7;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"isLimited"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "isLimited";
              local_198 = 0x100005;
              local_1a0 = 9;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"isSpecial"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "isSpecial";
              local_198 = 0x100005;
              local_1a0 = 9;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (((*(byte *)(lVar7 + 0x11) & 1) == 0) ||
                 (lVar7 = FUN_008fd190(pcVar1,"contentSet"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "contentSet";
              local_198 = 0x100005;
              local_1a0 = 10;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if ((*(int *)(lVar7 + 0x10) != 3) ||
                 (lVar7 = FUN_008fd190(pcVar1,"playerRemaining"),
                 *(long *)(pcVar19 + 0x18) + (ulong)*(uint *)(pcVar19 + 0x20) * 0x30 == lVar7))
              goto LAB_00ccaf20;
              local_1a8 = "playerRemaining";
              local_198 = 0x100005;
              local_1a0 = 0xf;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              if (*(int *)(lVar7 + 0x10) != 3) goto LAB_00ccaf20;
              local_1a8 = "sku";
              local_198 = 0x100005;
              local_1a0 = 3;
              plVar8 = (long *)FUN_008feca4(pcVar1,&local_1a8);
              if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
                plVar8 = (long *)*plVar8;
              }
              FUN_008fa54c(&local_1a8,plVar8);
              FUN_008fce60(&local_180,&local_1a8);
              if (((ulong)local_1a8 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_194,local_198));
              }
              local_1a8 = "boxText";
              local_198 = 0x100005;
              local_1a0 = 7;
              plVar8 = (long *)FUN_008feca4(pcVar1,&local_1a8);
              if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
                plVar8 = (long *)*plVar8;
              }
              FUN_008fa54c(&local_1a8,plVar8);
              FUN_008fce60(auStack_168,&local_1a8);
              if (((ulong)local_1a8 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_194,local_198));
              }
              local_1a8 = "boxTitle";
              local_198 = 0x100005;
              local_1a0 = 8;
              plVar8 = (long *)FUN_008feca4(pcVar1,&local_1a8);
              if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
                plVar8 = (long *)*plVar8;
              }
              FUN_008fa54c(&local_1a8,plVar8);
              FUN_008fce60(auStack_150,&local_1a8);
              if (((ulong)local_1a8 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_194,local_198));
              }
              local_1a8 = "imagePath";
              local_198 = 0x100005;
              local_1a0 = 9;
              plVar8 = (long *)FUN_008feca4(pcVar1,&local_1a8);
              if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
                plVar8 = (long *)*plVar8;
              }
              FUN_008fa54c(&local_1a8,plVar8);
              FUN_008fce60(auStack_138,&local_1a8);
              if (((ulong)local_1a8 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_194,local_198));
              }
              local_1a8 = "currencyType";
              local_198 = 0x100005;
              local_1a0 = 0xc;
              plVar8 = (long *)FUN_008feca4(pcVar1,&local_1a8);
              if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
                plVar8 = (long *)*plVar8;
              }
              FUN_008fa54c(&local_1a8,plVar8);
              FUN_008fce60(auStack_120,&local_1a8);
              if (((ulong)local_1a8 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_194,local_198));
              }
              local_1a8 = "revealCurrencyType";
              local_198 = 0x100005;
              local_1a0 = 0x12;
              plVar8 = (long *)FUN_008feca4(pcVar1,&local_1a8);
              if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
                plVar8 = (long *)*plVar8;
              }
              FUN_008fa54c(&local_1a8,plVar8);
              FUN_008fce60(auStack_108,&local_1a8);
              if (((ulong)local_1a8 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_194,local_198));
              }
              local_1a8 = "endEpoch";
              local_198 = 0x100005;
              local_1a0 = 8;
              plVar8 = (long *)FUN_008feca4(pcVar1,&local_1a8);
              local_c0 = *plVar8;
              local_198 = 0x100005;
              local_1a8 = "startEpoch";
              local_1a0 = 10;
              puVar9 = (undefined8 *)FUN_008feca4(pcVar1,&local_1a8);
              local_b8 = *puVar9;
              local_198 = 0x100005;
              local_1a8 = "cardsPerPack";
              local_1a0 = 0xc;
              puVar9 = (undefined8 *)FUN_008feca4(pcVar1,&local_1a8);
              local_b0 = (undefined4)*puVar9;
              local_198 = 0x100005;
              local_1a8 = "cost";
              local_1a0 = 4;
              puVar10 = (undefined4 *)FUN_008feca4(pcVar1,&local_1a8);
              local_ac = *puVar10;
              local_198 = 0x100005;
              local_1a8 = "revealCost";
              local_1a0 = 10;
              puVar10 = (undefined4 *)FUN_008feca4(pcVar1,&local_1a8);
              local_a8 = *puVar10;
              local_198 = 0x100005;
              local_1a8 = "revealCount";
              local_1a0 = 0xb;
              puVar10 = (undefined4 *)FUN_008feca4(pcVar1,&local_1a8);
              local_a4 = *puVar10;
              local_198 = 0x100005;
              local_1a8 = "isDiscountWasValue";
              local_1a0 = 0x12;
              puVar10 = (undefined4 *)FUN_008feca4(pcVar1,&local_1a8);
              local_9c = *puVar10;
              local_198 = 0x100005;
              local_1a8 = "storePriority";
              local_1a0 = 0xd;
              puVar10 = (undefined4 *)FUN_008feca4(pcVar1,&local_1a8);
              local_98 = *puVar10;
              local_198 = 0x100005;
              local_1a8 = "isDiscount";
              local_1a0 = 10;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              local_94 = *(int *)(lVar7 + 0x10) == 0x102;
              local_198 = 0x100005;
              local_1a8 = "isLarge";
              local_1a0 = 7;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              local_93 = *(int *)(lVar7 + 0x10) == 0x102;
              local_198 = 0x100005;
              local_1a8 = "isLimited";
              local_1a0 = 9;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              local_92 = *(int *)(lVar7 + 0x10) == 0x102;
              local_198 = 0x100005;
              local_1a8 = "isSpecial";
              local_1a0 = 9;
              lVar7 = FUN_008feca4(pcVar1,&local_1a8);
              local_91 = *(int *)(lVar7 + 0x10) == 0x102;
              local_198 = 0x100005;
              local_1a8 = "contentSet";
              local_1a0 = 10;
              plVar8 = (long *)FUN_008feca4(pcVar1,&local_1a8);
              lVar7 = FUN_008fd190(plVar8,"cards");
              if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
LAB_00ccac30:
                bVar4 = true;
              }
              else {
                local_1a8 = "cards";
                local_198 = 0x100005;
                local_1a0 = 5;
                lVar7 = FUN_008feca4(plVar8,&local_1a8);
                if (*(int *)(lVar7 + 0x10) != 4) goto LAB_00ccac30;
                local_1a8 = "cards";
                local_198 = 0x100005;
                local_1a0 = 5;
                plVar8 = (long *)FUN_008feca4(plVar8,&local_1a8);
                if ((int)plVar8[1] == 0) goto LAB_00ccac30;
                uVar14 = 0;
                do {
                  lVar7 = *plVar8;
                  plVar15 = (long *)(lVar7 + uVar14 * 0x18);
                  if ((int)plVar15[2] != 3) {
LAB_00ccaf50:
                    FUN_00ccb244(auStack_f0,0);
                    bVar4 = false;
                    break;
                  }
                  lVar11 = FUN_008fd190(plVar15,&DAT_01bc5849);
                  puVar18 = (uint *)(lVar7 + uVar14 * 0x18 + 8);
                  if (*plVar15 + (ulong)*puVar18 * 0x30 == lVar11) goto LAB_00ccaf50;
                  local_1a8 = "sku";
                  local_198 = 0x100005;
                  local_1a0 = 3;
                  lVar7 = FUN_008feca4(plVar15,&local_1a8);
                  if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) ||
                     (lVar7 = FUN_008fd190(plVar15,"amount"),
                     *plVar15 + (ulong)*puVar18 * 0x30 == lVar7)) goto LAB_00ccaf50;
                  local_1a8 = "amount";
                  local_198 = 0x100005;
                  local_1a0 = 6;
                  lVar7 = FUN_008feca4(plVar15,&local_1a8);
                  if (((*(byte *)(lVar7 + 0x11) >> 2 & 1) == 0) ||
                     (lVar7 = FUN_008fd190(plVar15,"guaranteed"),
                     *plVar15 + (ulong)*puVar18 * 0x30 == lVar7)) goto LAB_00ccaf50;
                  local_1a8 = "guaranteed";
                  local_198 = 0x100005;
                  local_1a0 = 10;
                  lVar7 = FUN_008feca4(plVar15,&local_1a8);
                  if (((*(byte *)(lVar7 + 0x11) & 1) == 0) ||
                     (lVar7 = FUN_008fd190(plVar15,"isMystery"),
                     *plVar15 + (ulong)*puVar18 * 0x30 == lVar7)) goto LAB_00ccaf50;
                  local_1a8 = "isMystery";
                  local_198 = 0x100005;
                  local_1a0 = 9;
                  lVar7 = FUN_008feca4(plVar15,&local_1a8);
                  if ((*(byte *)(lVar7 + 0x11) & 1) == 0) goto LAB_00ccaf50;
                  FUN_008fa54c(&local_1a8,&DAT_01e277f2);
                  local_88 = "sku";
                  uStack_187 = 0;
                  local_188 = 0;
                  local_190 = 0;
                  local_78 = 0x100005;
                  local_80 = 3;
                  plVar12 = (long *)FUN_008feca4(plVar15,&local_88);
                  if ((*(byte *)((long)plVar12 + 0x12) >> 6 & 1) == 0) {
                    plVar12 = (long *)*plVar12;
                  }
                  FUN_008fa54c(&local_88,plVar12);
                  FUN_008fce60(&local_1a8,&local_88);
                  if (((ulong)local_88 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_74,local_78));
                  }
                  local_88 = "amount";
                  local_78 = 0x100005;
                  local_80 = 6;
                  puVar10 = (undefined4 *)FUN_008feca4(plVar15,&local_88);
                  local_190 = *puVar10;
                  local_78 = 0x100005;
                  local_88 = "guaranteed";
                  local_80 = 10;
                  lVar7 = FUN_008feca4(plVar15,&local_88);
                  local_188 = *(int *)(lVar7 + 0x10) == 0x102;
                  local_78 = 0x100005;
                  local_88 = "isMystery";
                  local_80 = 9;
                  lVar7 = FUN_008feca4(plVar15,&local_88);
                  uStack_187 = *(int *)(lVar7 + 0x10) == 0x102;
                  FUN_00ccb1a0(auStack_f0,&local_1a8);
                  if (((ulong)local_1a8 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_194,local_198));
                  }
                  uVar13 = (int)uVar14 + 1;
                  uVar14 = (ulong)uVar13;
                  bVar4 = true;
                } while (uVar13 < *(uint *)(plVar8 + 1));
              }
              local_1a8 = "playerRemaining";
              local_198 = 0x100005;
              local_1a0 = 0xf;
              plVar8 = (long *)FUN_008feca4(pcVar1,&local_1a8);
              lVar7 = FUN_008fd190(plVar8,"cards");
              if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
                local_1a8 = "cards";
                local_198 = 0x100005;
                local_1a0 = 5;
                lVar7 = FUN_008feca4(plVar8,&local_1a8);
                if (*(int *)(lVar7 + 0x10) == 4) {
                  local_1a8 = "cards";
                  local_198 = 0x100005;
                  local_1a0 = 5;
                  plVar8 = (long *)FUN_008feca4(plVar8,&local_1a8);
                  if ((int)plVar8[1] != 0) {
                    local_268 = 0;
                    local_280 = 0;
                    do {
                      plVar15 = (long *)(*plVar8 + local_268);
                      if (((int)plVar15[2] == 3) &&
                         (lVar7 = FUN_008fd190(plVar15,&DAT_01bc5849),
                         *plVar15 + (ulong)*(uint *)(plVar15 + 1) * 0x30 != lVar7)) {
                        local_1a8 = "sku";
                        local_198 = 0x100005;
                        local_1a0 = 3;
                        lVar7 = FUN_008feca4(plVar15,&local_1a8);
                        if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                          local_1a8 = "sku";
                          local_198 = 0x100005;
                          local_1a0 = 3;
                          plVar12 = (long *)FUN_008feca4(plVar15,&local_1a8);
                          if ((*(byte *)((long)plVar12 + 0x12) >> 6 & 1) == 0) {
                            plVar12 = (long *)*plVar12;
                          }
                          FUN_008fa54c(&local_1a8,plVar12);
                          lVar7 = FUN_00ccb2c0(&local_180,&local_1a8);
                          if (((ulong)local_1a8 & 1) != 0) {
                            operator_delete((void *)CONCAT44(uStack_194,local_198));
                          }
                          if ((lVar7 != 0) &&
                             (lVar11 = FUN_008fd190(plVar15,"amount"),
                             *plVar15 + (ulong)*(uint *)(plVar15 + 1) * 0x30 != lVar11)) {
                            local_1a8 = "amount";
                            local_198 = 0x100005;
                            local_1a0 = 6;
                            lVar11 = FUN_008feca4(plVar15,&local_1a8);
                            if ((*(byte *)(lVar11 + 0x11) >> 2 & 1) != 0) {
                              local_1a8 = "amount";
                              local_198 = 0x100005;
                              local_1a0 = 6;
                              puVar10 = (undefined4 *)FUN_008feca4(plVar15,&local_1a8);
                              *(undefined4 *)(lVar7 + 0x1c) = *puVar10;
                            }
                          }
                        }
                      }
                      local_280 = local_280 + 1;
                      local_268 = local_268 + 0x18;
                    } while (local_280 < *(uint *)(plVar8 + 1));
                  }
                }
              }
              local_1a8 = "featuredSkinThemes";
              local_198 = 0x100005;
              local_1a0 = 0x12;
              plVar8 = (long *)FUN_008feca4(pcVar1,&local_1a8);
              if ((int)plVar8[1] != 0) {
                uVar13 = 0;
                do {
                  uVar2 = *(uint *)(*plVar8 + (ulong)uVar13 * 0x18 + 0x10);
                  if ((uVar2 >> 0x14 & 1) == 0) {
                    bVar17 = false;
                    goto LAB_00ccaf24;
                  }
                  plVar15 = (long *)(*plVar8 + (ulong)uVar13 * 0x18);
                  if ((uVar2 >> 0x16 & 1) == 0) {
                    plVar15 = (long *)*plVar15;
                  }
                  FUN_008fa54c(&local_1a8,plVar15);
                  FUN_0096204c(auStack_d0,&local_1a8);
                  if (((ulong)local_1a8 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_194,local_198));
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < *(uint *)(plVar8 + 1));
              }
              bVar17 = false;
              if (bVar4) {
                if ((*(long *)(param_1 + 8) == 0) || (local_c0 < *(long *)(param_1 + 8))) {
                  *(long *)(param_1 + 8) = local_c0;
                }
                FUN_00ccb3ac(&local_180);
                FUN_00ccb56c(&local_220,&local_180);
                goto LAB_00ccaf20;
              }
            }
LAB_00ccaf24:
            FUN_00ccb680(&local_180);
          }
        }
        else {
          pcVar6 = pcVar19;
          if (((byte)pcVar19[0x12] >> 6 & 1) == 0) {
            pcVar6 = *(char **)pcVar19;
          }
          iVar5 = strcmp(pcVar6,"platformTime");
          if (iVar5 != 0) {
            uVar13 = *(uint *)(pcVar19 + 0x28);
            if ((uVar13 >> 0xc & 1) != 0) {
              pcVar6 = pcVar19;
              if (((byte)pcVar19[0x12] >> 6 & 1) == 0) {
                pcVar6 = *(char **)pcVar19;
              }
              iVar5 = strcmp(pcVar6,"nextCardboxTime");
              if (iVar5 == 0) goto LAB_00ccac28;
              uVar13 = *(uint *)(pcVar19 + 0x28);
            }
            goto LAB_00cc9e08;
          }
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)pcVar1;
LAB_00ccac28:
          bVar17 = true;
        }
        pcVar19 = pcVar19 + 0x30;
      } while (pcVar19 != local_210 + (local_208 & 0xffffffff) * 0x30);
      if (bVar17) {
        uVar14 = local_220 & 0xffffffff;
        goto LAB_00ccaf74;
      }
    }
LAB_00ccb03c:
    FUN_00ccb850(&local_220,1);
  }
  lVar16 = *(long *)(param_1 + 0xc);
  clock_gettime(1,&local_180);
  lVar11 = local_180.tv_nsec - *(long *)(param_1 + 6);
  lVar7 = local_180.tv_sec - *(long *)(param_1 + 4);
  if (lVar11 < 0) {
    lVar7 = lVar7 + -1;
    lVar11 = local_180.tv_nsec + (1000000000 - *(long *)(param_1 + 6));
  }
  *(long *)(param_1 + 10) = lVar16 + (long)((double)(lVar11 + lVar7 * 1000000000) * 1e-09);
  *(undefined1 *)(param_1 + 0xe) = 1;
  if (*(long *)(param_1 + 8) == 0) {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 0xc) + 0x708;
  }
LAB_00ccb0c0:
  puVar9 = local_1f0;
  if (local_1f0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_1f0);
    operator_delete(puVar9);
  }
  free(local_1d8);
  if (local_1e0 != (void *)0x0) {
    operator_delete(local_1e0);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

