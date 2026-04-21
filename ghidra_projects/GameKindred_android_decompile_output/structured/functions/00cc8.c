// functions/00cc8 — 10 functions
#include "libGameKindred.h"




byte * FUN_00cc80a4(byte *param_1)

{
  size_t __n;
  byte *__s2;
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  byte *__s1;
  byte *pbVar6;
  uint uVar7;
  
  lVar3 = DAT_0313db80;
  uVar2 = (uint)DAT_0313db78;
  if ((uint)DAT_0313db78 != 0) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(byte **)(param_1 + 0x10);
    uVar7 = 0;
    if ((*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)(*param_1 >> 1);
    }
    do {
      pbVar6 = *(byte **)(lVar3 + (ulong)uVar7 * 8);
      if (pbVar6 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar1 = *pbVar6;
      uVar5 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)(pbVar6 + 8);
      }
      if (uVar5 == __n) {
        __s1 = *(byte **)(pbVar6 + 0x10);
        if ((bVar1 & 1) == 0) {
          __s1 = pbVar6 + 1;
        }
        if ((bVar1 & 1) == 0) {
          if (__n == 0) {
            return pbVar6;
          }
          uVar5 = 0;
          while (pbVar6[uVar5 + 1] == __s2[uVar5]) {
            uVar5 = uVar5 + 1;
            if (bVar1 >> 1 == uVar5) {
              return pbVar6;
            }
          }
        }
        else {
          if (__n == 0) {
            return pbVar6;
          }
          iVar4 = memcmp(__s1,__s2,__n);
          if (iVar4 == 0) {
            return pbVar6;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return (byte *)0x0;
}




byte * FUN_00cc8184(byte *param_1)

{
  size_t __n;
  byte *__s2;
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  byte *__s1;
  byte *pbVar6;
  uint uVar7;
  
  lVar3 = DAT_0313db90;
  uVar2 = (uint)DAT_0313db88;
  if ((DAT_0313dba0 != '\0') && ((uint)DAT_0313db88 != 0)) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(byte **)(param_1 + 0x10);
    uVar7 = 0;
    if ((*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)(*param_1 >> 1);
    }
    do {
      pbVar6 = *(byte **)(lVar3 + (ulong)uVar7 * 8);
      if (pbVar6 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar1 = *pbVar6;
      uVar5 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)(pbVar6 + 8);
      }
      if (uVar5 == __n) {
        __s1 = *(byte **)(pbVar6 + 0x10);
        if ((bVar1 & 1) == 0) {
          __s1 = pbVar6 + 1;
        }
        if ((bVar1 & 1) == 0) {
          if (__n == 0) {
            return pbVar6;
          }
          uVar5 = 0;
          while (pbVar6[uVar5 + 1] == __s2[uVar5]) {
            uVar5 = uVar5 + 1;
            if (bVar1 >> 1 == uVar5) {
              return pbVar6;
            }
          }
        }
        else {
          if (__n == 0) {
            return pbVar6;
          }
          iVar4 = memcmp(__s1,__s2,__n);
          if (iVar4 == 0) {
            return pbVar6;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return (byte *)0x0;
}




void FUN_00cc8270(byte *param_1,undefined8 param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *__s2;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  byte local_80 [8];
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_1;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  bVar5 = false;
  if (sVar1 == sVar2) {
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    pbVar8 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar8 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        lVar9 = -(ulong)(bVar3 >> 1);
        pbVar10 = param_1;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *pbVar8) {
            bVar5 = false;
            goto LAB_00cc8344;
          }
          lVar9 = lVar9 + 1;
          pbVar8 = pbVar8 + 1;
        } while (lVar9 != 0);
      }
    }
    else if (sVar1 != 0) {
      iVar6 = memcmp(pbVar10,pbVar8,sVar1);
      bVar5 = iVar6 == 0;
      goto LAB_00cc8344;
    }
  }
  else {
LAB_00cc8344:
    if (((uint)DAT_0313db88 != 0) && (!bVar5)) {
      uVar7 = 0;
      if (DAT_0313dba0 == '\0') goto LAB_00cc845c;
      uVar11 = 0;
      do {
        lVar9 = *(long *)(DAT_0313db90 + (ulong)uVar11 * 8);
        uVar7 = 0;
        if (lVar9 == 0) goto LAB_00cc845c;
        FUN_00cc7d60(local_80,lVar9,param_2);
        pbVar10 = local_70;
        bVar3 = *param_1;
        sVar1 = (ulong)(local_80[0] >> 1);
        if ((local_80[0] & 1) != 0) {
          sVar1 = local_78;
        }
        sVar2 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 8);
        }
        bVar5 = false;
        if (sVar1 == sVar2) {
          pbVar8 = (byte *)((ulong)local_80 | 1);
          if ((local_80[0] & 1) != 0) {
            pbVar8 = local_70;
          }
          __s2 = param_1 + 1;
          if ((bVar3 & 1) != 0) {
            __s2 = *(byte **)(param_1 + 0x10);
          }
          if ((local_80[0] & 1) == 0) {
            if (sVar1 != 0) {
              lVar9 = -(ulong)(local_80[0] >> 1);
              pbVar10 = (byte *)((ulong)local_80 | 1);
              do {
                if (*pbVar10 != *__s2) {
                  bVar5 = false;
                  if ((local_80[0] & 1) == 0) goto LAB_00cc8418;
                  goto LAB_00cc8410;
                }
                pbVar10 = pbVar10 + 1;
                lVar9 = lVar9 + 1;
                __s2 = __s2 + 1;
              } while (lVar9 != 0);
              bVar5 = true;
              goto LAB_00cc840c;
            }
          }
          else if (sVar1 == 0) {
            operator_delete(local_70);
          }
          else {
            iVar6 = memcmp(pbVar8,__s2,sVar1);
            operator_delete(pbVar10);
            if (iVar6 != 0) goto LAB_00cc8438;
          }
LAB_00cc8494:
          uVar7 = *(undefined8 *)(DAT_0313db90 + (ulong)uVar11 * 8);
          goto LAB_00cc845c;
        }
LAB_00cc840c:
        if ((local_80[0] & 1) != 0) {
LAB_00cc8410:
          operator_delete(local_70);
        }
LAB_00cc8418:
        if (bVar5) goto LAB_00cc8494;
LAB_00cc8438:
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)DAT_0313db88);
    }
  }
  uVar7 = 0;
LAB_00cc845c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}




bool FUN_00cc84a4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0xa5) == '\0') {
    bVar1 = false;
  }
  else {
    if ((0 < *(long *)(param_1 + 0x98)) &&
       (lVar2 = FUN_00e85318(0), lVar2 < *(long *)(param_1 + 0x98))) {
      return false;
    }
    if (*(long *)(param_1 + 0x90) < 1) {
      bVar1 = true;
    }
    else {
      lVar2 = FUN_00e85318(0);
      bVar1 = lVar2 < *(long *)(param_1 + 0x90);
    }
  }
  return bVar1;
}




bool FUN_00cc851c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x98) < 1) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_00e85318(0);
    bVar1 = lVar2 < *(long *)(param_1 + 0x98);
  }
  return bVar1;
}




bool FUN_00cc8560(long param_1)

{
  return 0 < *(long *)(param_1 + 0x90);
}




bool FUN_00cc8570(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x90) < 1) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_00e85318(0);
    bVar1 = lVar2 < *(long *)(param_1 + 0x90);
  }
  return bVar1;
}




bool FUN_00cc85b4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    uVar1 = FUN_00cc84a4(param_1);
    if ((uVar1 & 1) == 0) {
      return false;
    }
    if (*(int *)(param_1 + 200) != 0) {
      return *(char *)(param_1 + 0xa6) != '\0';
    }
  }
  return false;
}




bool FUN_00cc8608(long param_1,long param_2)

{
  return *(uint *)(param_1 + 0xa0) < *(uint *)(param_2 + 0xa0);
}




void FUN_00cc861c(long param_1,code *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  long *plVar16;
  int *piVar17;
  undefined8 *puVar18;
  void *pvVar19;
  long *plVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  bool bVar25;
  ulong uVar26;
  uint *puVar27;
  byte local_148 [16];
  void *local_138;
  byte local_130 [16];
  void *local_120;
  void *local_118;
  byte local_110 [16];
  void *local_100;
  long local_f8;
  ulong local_f0;
  int local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  void *local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  code *local_90;
  code *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  local_a8 = 0x400;
  local_a0 = 0;
  local_98 = 0;
  local_e0 = operator_new(0x28);
  local_e0[3] = 0;
  local_e0[4] = 0;
  local_e0[1] = 0x10000;
  local_e0[2] = 0;
  *local_e0 = 0;
  local_d8 = local_e0;
  local_90 = param_2;
  local_88 = param_2;
  FUN_008fd344(&local_f8,&local_90);
  if ((local_a0 == 0) && (FUN_00cc7458(param_1), local_e8 == 3)) {
    lVar11 = FUN_008fd190(&local_f8,"themes");
    if (local_f8 + (local_f0 & 0xffffffff) * 0x30 != lVar11) {
      local_90 = (code *)0x1bc5785;
      local_80 = 0x100005;
      local_88 = (code *)0x6;
      lVar11 = FUN_008feca4(&local_f8,&local_90);
      if (*(int *)(lVar11 + 0x10) == 4) {
        local_90 = (code *)0x1bc5785;
        local_80 = 0x100005;
        local_88 = (code *)0x6;
        plVar12 = (long *)FUN_008feca4(&local_f8,&local_90);
        if ((int)plVar12[1] != 0) {
          lVar11 = 0;
          uVar24 = 0;
          do {
            plVar16 = (long *)(*plVar12 + lVar11);
            lVar13 = FUN_008fd190(plVar16,"themeKey");
            if (*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 != lVar13) {
              local_90 = (code *)0x1bc578c;
              local_80 = 0x100005;
              local_88 = (code *)0x8;
              lVar13 = FUN_008feca4(plVar16,&local_90);
              if (((*(byte *)(lVar13 + 0x12) >> 4 & 1) != 0) &&
                 (lVar13 = FUN_008fd190(plVar16,"heroKey"),
                 *plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30 != lVar13)) {
                local_90 = (code *)0x1bc5795;
                local_80 = 0x100005;
                local_88 = (code *)0x7;
                lVar13 = FUN_008feca4(plVar16,&local_90);
                if ((*(byte *)(lVar13 + 0x12) >> 4 & 1) != 0) {
                  pcVar14 = operator_new(0x40);
                  local_90 = (code *)0x1bc578c;
                  local_80 = 0x100005;
                  local_88 = (code *)0x8;
                  plVar15 = (long *)FUN_008feca4(plVar16,&local_90);
                  if ((*(byte *)((long)plVar15 + 0x12) >> 6 & 1) == 0) {
                    plVar15 = (long *)*plVar15;
                  }
                  FUN_008fa54c(local_110,plVar15);
                  local_90 = (code *)0x1bc5795;
                  local_80 = 0x100005;
                  local_88 = (code *)0x7;
                  plVar16 = (long *)FUN_008feca4(plVar16,&local_90);
                  if ((*(byte *)((long)plVar16 + 0x12) >> 6 & 1) == 0) {
                    plVar16 = (long *)*plVar16;
                  }
                  FUN_008fa54c(&local_90,plVar16);
                  FUN_008fcdb8(pcVar14,local_110);
                  FUN_008fcdb8(pcVar14 + 0x18,&local_90);
                  *(undefined8 *)(pcVar14 + 0x30) = 0;
                  *(undefined8 *)(pcVar14 + 0x38) = 0;
                  if (((ulong)local_90 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_7c,local_80));
                  }
                  if ((local_110[0] & 1) != 0) {
                    operator_delete(local_100);
                  }
                  local_90 = pcVar14;
                  FUN_00cc95b0(param_1 + 0x10,&local_90);
                }
              }
            }
            uVar24 = uVar24 + 1;
            lVar11 = lVar11 + 0x18;
          } while (uVar24 < *(uint *)(plVar12 + 1));
        }
      }
    }
    lVar11 = FUN_008fd190(&local_f8,"skins");
    if (local_f8 + (local_f0 & 0xffffffff) * 0x30 != lVar11) {
      local_90 = (code *)0x1bb4895;
      local_80 = 0x100005;
      local_88 = (code *)0x5;
      lVar11 = FUN_008feca4(&local_f8,&local_90);
      if (*(int *)(lVar11 + 0x10) == 4) {
        local_90 = (code *)0x1bb4895;
        local_80 = 0x100005;
        local_88 = (code *)0x5;
        plVar12 = (long *)FUN_008feca4(&local_f8,&local_90);
        if ((int)plVar12[1] != 0) {
          uVar24 = 0;
          bVar25 = true;
          do {
            plVar16 = (long *)(*plVar12 + uVar24 * 0x18);
            lVar11 = FUN_008fd190(plVar16,"skinKey");
            puVar27 = (uint *)(plVar16 + 1);
            if (*plVar16 + (ulong)*puVar27 * 0x30 != lVar11) {
              local_90 = (code *)0x1b92378;
              local_80 = 0x100005;
              local_88 = (code *)0x7;
              lVar11 = FUN_008feca4(plVar16,&local_90);
              if (((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) &&
                 (lVar11 = FUN_008fd190(plVar16,"heroKey"),
                 *plVar16 + (ulong)*puVar27 * 0x30 != lVar11)) {
                local_90 = (code *)0x1bc5795;
                local_80 = 0x100005;
                local_88 = (code *)0x7;
                lVar11 = FUN_008feca4(plVar16,&local_90);
                if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                  FUN_008fa54c(local_110,&DAT_01e277f2);
                  lVar11 = FUN_008fd190(plVar16,"visible");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
LAB_00cc89dc:
                    bVar4 = true;
                  }
                  else {
                    local_90 = (code *)0x1bc579d;
                    local_80 = 0x100005;
                    local_88 = (code *)0x7;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    if ((*(byte *)(lVar11 + 0x11) & 1) == 0) goto LAB_00cc89dc;
                    local_90 = (code *)0x1bc579d;
                    local_80 = 0x100005;
                    local_88 = (code *)0x7;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    bVar4 = *(int *)(lVar11 + 0x10) == 0x102;
                  }
                  lVar11 = FUN_008fd190(plVar16,"obtainable");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
LAB_00cc8a58:
                    bVar5 = true;
                  }
                  else {
                    local_90 = (code *)0x1e3355c;
                    local_80 = 0x100005;
                    local_88 = (code *)0xa;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    if ((*(byte *)(lVar11 + 0x11) & 1) == 0) goto LAB_00cc8a58;
                    local_90 = (code *)0x1e3355c;
                    local_80 = 0x100005;
                    local_88 = (code *)0xa;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    bVar5 = *(int *)(lVar11 + 0x10) == 0x102;
                  }
                  lVar11 = FUN_008fd190(plVar16,"tier");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
                    iVar1 = 0;
                  }
                  else {
                    local_90 = (code *)0x1bf0b36;
                    local_80 = 0x100005;
                    local_88 = (code *)0x4;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    iVar1 = 0;
                    if ((*(byte *)(lVar11 + 0x11) >> 2 & 1) != 0) {
                      local_90 = (code *)0x1bf0b36;
                      local_80 = 0x100005;
                      local_88 = (code *)0x4;
                      piVar17 = (int *)FUN_008feca4(plVar16,&local_90);
                      iVar1 = *piVar17;
                    }
                  }
                  lVar11 = FUN_008fd190(plVar16,"limitedEditionEndEpoch");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
                    uVar22 = 0;
                  }
                  else {
                    local_90 = (code *)0x1bc57a5;
                    local_80 = 0x100005;
                    local_88 = (code *)0x16;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    uVar22 = 0;
                    if ((*(byte *)(lVar11 + 0x11) >> 4 & 1) != 0) {
                      local_90 = (code *)0x1bc57a5;
                      local_80 = 0x100005;
                      local_88 = (code *)0x16;
                      puVar18 = (undefined8 *)FUN_008feca4(plVar16,&local_90);
                      uVar22 = *puVar18;
                    }
                  }
                  lVar11 = FUN_008fd190(plVar16,"availableOnEpoch");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
                    uVar23 = 0;
                  }
                  else {
                    local_90 = (code *)0x1bc57bc;
                    local_80 = 0x100005;
                    local_88 = (code *)&DAT_00000010;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    uVar23 = 0;
                    if ((*(byte *)(lVar11 + 0x11) >> 4 & 1) != 0) {
                      local_90 = (code *)0x1bc57bc;
                      local_80 = 0x100005;
                      local_88 = (code *)&DAT_00000010;
                      puVar18 = (undefined8 *)FUN_008feca4(plVar16,&local_90);
                      uVar23 = *puVar18;
                    }
                  }
                  lVar11 = FUN_008fd190(plVar16,"imageName");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 != lVar11) {
                    local_90 = (code *)0x1b97305;
                    local_80 = 0x100005;
                    local_88 = (code *)0x9;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                      local_90 = (code *)0x1b97305;
                      local_80 = 0x100005;
                      local_88 = (code *)0x9;
                      plVar15 = (long *)FUN_008feca4(plVar16,&local_90);
                      if ((*(byte *)((long)plVar15 + 0x12) >> 6 & 1) == 0) {
                        plVar15 = (long *)*plVar15;
                      }
                      FUN_008fa54c(&local_90,plVar15);
                      FUN_008fce60(local_110,&local_90);
                      if (((ulong)local_90 & 1) != 0) {
                        operator_delete((void *)CONCAT44(uStack_7c,local_80));
                      }
                    }
                  }
                  lVar11 = FUN_008fd190(plVar16,"allowWeave");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
                    bVar6 = false;
                  }
                  else {
                    local_90 = (code *)0x1bc57cd;
                    local_80 = 0x100005;
                    local_88 = (code *)0xa;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    bVar6 = false;
                    if ((*(byte *)(lVar11 + 0x11) & 1) != 0) {
                      local_90 = (code *)0x1bc57cd;
                      local_80 = 0x100005;
                      local_88 = (code *)0xa;
                      lVar11 = FUN_008feca4(plVar16,&local_90);
                      bVar6 = *(int *)(lVar11 + 0x10) == 0x102;
                    }
                  }
                  lVar11 = FUN_008fd190(plVar16,"singleCard");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
                    bVar7 = false;
                  }
                  else {
                    local_90 = (code *)0x1bc57d8;
                    local_80 = 0x100005;
                    local_88 = (code *)0xa;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    bVar7 = false;
                    if ((*(byte *)(lVar11 + 0x11) & 1) != 0) {
                      local_90 = (code *)0x1bc57d8;
                      local_80 = 0x100005;
                      local_88 = (code *)0xa;
                      lVar11 = FUN_008feca4(plVar16,&local_90);
                      bVar7 = *(int *)(lVar11 + 0x10) == 0x102;
                    }
                  }
                  lVar11 = FUN_008fd190(plVar16,"canProrate");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
                    bVar8 = false;
                  }
                  else {
                    local_90 = (code *)0x1bc57e3;
                    local_80 = 0x100005;
                    local_88 = (code *)0xa;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    bVar8 = false;
                    if ((*(byte *)(lVar11 + 0x11) & 1) != 0) {
                      local_90 = (code *)0x1bc57e3;
                      local_80 = 0x100005;
                      local_88 = (code *)0xa;
                      lVar11 = FUN_008feca4(plVar16,&local_90);
                      bVar8 = *(int *)(lVar11 + 0x10) == 0x102;
                    }
                  }
                  lVar11 = FUN_008fd190(plVar16,"advertiseComingSoon");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
                    bVar9 = false;
                  }
                  else {
                    local_90 = (code *)0x1bc57ee;
                    local_80 = 0x100005;
                    local_88 = (code *)0x13;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    bVar9 = false;
                    if ((*(byte *)(lVar11 + 0x11) & 1) != 0) {
                      local_90 = (code *)0x1bc57ee;
                      local_80 = 0x100005;
                      local_88 = (code *)0x13;
                      lVar11 = FUN_008feca4(plVar16,&local_90);
                      bVar9 = *(int *)(lVar11 + 0x10) == 0x102;
                    }
                  }
                  lVar11 = FUN_008fd190(plVar16,"seasonChestUnlock");
                  if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
                    bVar10 = false;
                  }
                  else {
                    local_90 = (code *)0x1bc5802;
                    local_80 = 0x100005;
                    local_88 = (code *)0x11;
                    lVar11 = FUN_008feca4(plVar16,&local_90);
                    bVar10 = false;
                    if ((*(byte *)(lVar11 + 0x11) & 1) != 0) {
                      local_90 = (code *)0x1bc5802;
                      local_80 = 0x100005;
                      local_88 = (code *)0x11;
                      lVar11 = FUN_008feca4(plVar16,&local_90);
                      bVar10 = *(int *)(lVar11 + 0x10) == 0x102;
                    }
                  }
                  pvVar19 = operator_new(0xd8);
                  local_80 = 0x100005;
                  local_90 = (code *)0x1b92378;
                  local_88 = (code *)0x7;
                  plVar15 = (long *)FUN_008feca4(plVar16,&local_90);
                  if ((*(byte *)((long)plVar15 + 0x12) >> 6 & 1) == 0) {
                    plVar15 = (long *)*plVar15;
                  }
                  FUN_008fa54c(local_130,plVar15);
                  local_90 = (code *)0x1bc5795;
                  local_80 = 0x100005;
                  local_88 = (code *)0x7;
                  plVar15 = (long *)FUN_008feca4(plVar16,&local_90);
                  if ((*(byte *)((long)plVar15 + 0x12) >> 6 & 1) == 0) {
                    plVar15 = (long *)*plVar15;
                  }
                  FUN_008fa54c(&local_90,plVar15);
                  FUN_008fcdb8(local_148,local_110);
                  FUN_00cc98c4(pvVar19,local_130,&local_90,uVar22,iVar1,bVar4,bVar5,uVar23,local_148
                               ,bVar6,bVar7,bVar8,bVar10,bVar9);
                  if ((local_148[0] & 1) != 0) {
                    operator_delete(local_138);
                  }
                  if (((ulong)local_90 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_7c,local_80));
                  }
                  if ((local_130[0] & 1) != 0) {
                    operator_delete(local_120);
                  }
                  local_118 = pvVar19;
                  if (iVar1 == 0) {
LAB_00cc9324:
                    bVar4 = false;
                    if (bVar25) {
                      FUN_00cc9638(param_1 + 0x20,&local_118);
                      if ((iVar1 != 0) &&
                         (lVar11 = FUN_008fd190(plVar16,"themeKey"),
                         *plVar16 + (ulong)*puVar27 * 0x30 != lVar11)) {
                        local_90 = (code *)0x1bc578c;
                        local_80 = 0x100005;
                        local_88 = (code *)0x8;
                        lVar11 = FUN_008feca4(plVar16,&local_90);
                        if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                          local_90 = (code *)0x1bc578c;
                          local_80 = 0x100005;
                          local_88 = (code *)0x8;
                          plVar16 = (long *)FUN_008feca4(plVar16,&local_90);
                          if ((*(byte *)((long)plVar16 + 0x12) >> 6 & 1) == 0) {
                            plVar16 = (long *)*plVar16;
                          }
                          FUN_008fa54c(&local_90,plVar16);
                          lVar11 = FUN_00cc80a4(&local_90);
                          if (((ulong)local_90 & 1) != 0) {
                            operator_delete((void *)CONCAT44(uStack_7c,local_80));
                          }
                          if (lVar11 != 0) {
                            FUN_00cc9638(lVar11 + 0x30,&local_118);
                          }
                        }
                      }
                      bVar4 = true;
                    }
                  }
                  else {
                    lVar11 = FUN_008fd190(plVar16,"prereq");
                    if (*plVar16 + (ulong)*puVar27 * 0x30 != lVar11) {
                      local_90 = (code *)0x1bc5814;
                      local_80 = 0x100005;
                      local_88 = (code *)0x6;
                      lVar11 = FUN_008feca4(plVar16,&local_90);
                      if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                        local_90 = (code *)0x1bc5814;
                        local_80 = 0x100005;
                        local_88 = (code *)0x6;
                        plVar15 = (long *)FUN_008feca4(plVar16,&local_90);
                        if ((*(byte *)((long)plVar15 + 0x12) >> 6 & 1) == 0) {
                          plVar15 = (long *)*plVar15;
                        }
                        FUN_008fa54c(&local_90,plVar15);
                        FUN_008fce60((long)local_118 + 0x48,&local_90);
                        if (((ulong)local_90 & 1) != 0) {
                          operator_delete((void *)CONCAT44(uStack_7c,local_80));
                        }
                      }
                    }
                    lVar11 = FUN_008fd190(plVar16,"themeKey");
                    if (*plVar16 + (ulong)*puVar27 * 0x30 == lVar11) {
                      bVar4 = false;
                    }
                    else {
                      local_90 = (code *)0x1bc578c;
                      local_80 = 0x100005;
                      local_88 = (code *)0x8;
                      lVar11 = FUN_008feca4(plVar16,&local_90);
                      bVar4 = false;
                      if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                        local_90 = (code *)0x1bc578c;
                        local_80 = 0x100005;
                        local_88 = (code *)0x8;
                        plVar15 = (long *)FUN_008feca4(plVar16,&local_90);
                        if ((*(byte *)((long)plVar15 + 0x12) >> 6 & 1) == 0) {
                          plVar15 = (long *)*plVar15;
                        }
                        FUN_008fa54c(&local_90,plVar15);
                        FUN_008fce60((long)local_118 + 0xb0,&local_90);
                        if (((ulong)local_90 & 1) != 0) {
                          operator_delete((void *)CONCAT44(uStack_7c,local_80));
                        }
                        lVar11 = FUN_008fd190(plVar16,"cardCosts");
                        if (*plVar16 + (ulong)*puVar27 * 0x30 != lVar11) {
                          local_90 = (code *)0x1bc581b;
                          local_80 = 0x100005;
                          local_88 = (code *)0x9;
                          lVar11 = FUN_008feca4(plVar16,&local_90);
                          if (*(int *)(lVar11 + 0x10) == 4) {
                            local_90 = (code *)0x1bc581b;
                            local_80 = 0x100005;
                            local_88 = (code *)0x9;
                            plVar15 = (long *)FUN_008feca4(plVar16,&local_90);
                            if ((int)plVar15[1] != 0) {
                              lVar11 = 0;
                              uVar26 = 0;
                              do {
                                lVar13 = *plVar15;
                                local_80 = 0x100005;
                                local_90 = (code *)0x1bc5825;
                                local_88 = (code *)0x6;
                                plVar20 = (long *)FUN_008feca4(lVar13 + lVar11,&local_90);
                                if ((*(byte *)((long)plVar20 + 0x12) >> 6 & 1) == 0) {
                                  plVar20 = (long *)*plVar20;
                                }
                                FUN_008fa54c(local_130,plVar20);
                                local_90 = (code *)0x1e212c7;
                                local_80 = 0x100005;
                                local_88 = (code *)0x6;
                                puVar21 = (undefined4 *)FUN_008feca4(lVar13 + lVar11,&local_90);
                                uVar2 = *puVar21;
                                lVar13 = (long)local_118 + 200;
                                FUN_008fcdb8(&local_90,local_130);
                                local_78 = uVar2;
                                FUN_00a86a9c(lVar13,&local_90);
                                if (((ulong)local_90 & 1) != 0) {
                                  operator_delete((void *)CONCAT44(uStack_7c,local_80));
                                }
                                if ((local_130[0] & 1) != 0) {
                                  operator_delete(local_120);
                                }
                                uVar26 = uVar26 + 1;
                                lVar11 = lVar11 + 0x18;
                              } while (uVar26 < *(uint *)(plVar15 + 1));
                            }
                          }
                        }
                        goto LAB_00cc9324;
                      }
                    }
                  }
                  bVar25 = bVar4;
                  if ((local_110[0] & 1) != 0) {
                    operator_delete(local_100);
                  }
                }
              }
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < *(uint *)(plVar12 + 1));
        }
      }
    }
    if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      uVar22 = FUN_00e6b5e4();
      *(undefined8 *)(param_1 + 0x30) = uVar22;
      *(undefined1 *)(param_1 + 0x38) = 1;
      FUN_00cc96c0(param_1,param_1);
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar24 = 0;
        do {
          lVar13 = *(long *)(*(long *)(param_1 + 0x18) + uVar24 * 8);
          lVar11 = *(long *)(lVar13 + 0x38);
          local_90 = FUN_00cc8608;
          FUN_00ccff24(lVar11,lVar11 + (ulong)*(uint *)(lVar13 + 0x30) * 8,&local_90);
          uVar24 = uVar24 + 1;
        } while (uVar24 < *(uint *)(param_1 + 0x10));
      }
    }
  }
  puVar18 = local_d8;
  if (local_d8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_d8);
    operator_delete(puVar18);
  }
  free(local_c0);
  if (local_c8 != (void *)0x0) {
    operator_delete(local_c8);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

