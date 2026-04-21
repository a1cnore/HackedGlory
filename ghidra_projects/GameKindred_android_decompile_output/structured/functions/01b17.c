// functions/01b17 — 1 functions
#include "libGameKindred.h"




/* WARNING: Type propagation algorithm not settling */

void FUN_01b17c6c(undefined4 param_1,long *param_2,long *param_3,undefined4 *param_4,int param_5,
                 int param_6,int param_7,undefined4 param_8,undefined4 *param_9,uint *param_10,
                 undefined4 *param_11,uint *param_12,undefined8 param_13,long param_14,int *param_15
                 )

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  char *pcVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  long lVar16;
  short sVar17;
  char *__src;
  char *pcVar18;
  char *pcVar19;
  undefined1 local_e8 [8];
  long local_e0;
  long *local_d8;
  uint local_d0;
  uint local_cc;
  undefined4 *local_c8;
  undefined8 local_c0;
  char *local_b8;
  int local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  short local_90;
  undefined2 local_8e;
  char *local_88;
  char *local_80;
  undefined4 local_74;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  local_80 = (char *)*param_3;
  __src = (char *)*param_2;
  local_d8 = param_2;
  local_c8 = param_4;
  local_88 = __src;
  local_74 = param_1;
  if ((pcre_stack_guard == (code *)0x0) || (iVar9 = (*pcre_stack_guard)(), iVar9 == 0)) {
    lVar13 = *(long *)(param_14 + 0x40);
    lVar16 = *(long *)(param_14 + 0x20);
    local_ac = param_7 + 6;
    sVar17 = 0;
    if (*__src == -0x7b) {
      local_90 = CONCAT11(__src[3],__src[4]);
      local_98 = *(undefined8 *)(param_14 + 0x48);
      local_8e = 0;
      *(undefined8 **)(param_14 + 0x48) = &local_98;
      sVar17 = local_90;
    }
    local_e8 = (undefined1  [8])0x0;
    __src[1] = '\0';
    local_e0 = (long)param_7;
    local_88[2] = '\0';
    local_cc = 0xfffffffe;
    uVar12 = *(uint *)(param_14 + 0x70);
    pcVar18 = (char *)0x0;
    piVar4 = (int *)0x0;
    if (param_15 != (int *)0x0) {
      piVar4 = &local_ac;
    }
    local_d0 = 0xfffffffe;
    pcVar19 = __src;
    local_b8 = __src;
    local_88 = local_88 + (long)param_7 + 3;
    uVar11 = uVar12;
    local_c0 = param_13;
    do {
      if (param_6 != 0) {
        *(uint *)(param_14 + 0x70) = uVar12;
      }
      if (param_5 != 0) {
        pcVar18 = local_88 + 1;
        *local_88 = '|';
        *pcVar18 = '\0';
        local_88[2] = '\0';
        local_88 = local_88 + 3;
        local_ac = local_ac + 3;
      }
      uVar10 = FUN_01b18db8(&local_74,&local_88,&local_80,local_c8,&local_9c,&local_a4,&local_a0,
                            &local_a8,&local_c0,param_8,param_14,piVar4);
      if ((int)uVar10 == 0) {
LAB_01b181e8:
        *param_3 = (long)local_80;
        goto LAB_01b181f8;
      }
      uVar1 = *(uint *)(param_14 + 0x70);
      if (*(uint *)(param_14 + 0x70) <= uVar11) {
        uVar1 = uVar11;
      }
      if (param_15 == (int *)0x0) {
        if (*pcVar19 == 'w') {
          uVar11 = local_a4;
          if ((-1 < (int)local_cc) &&
             ((local_cc != local_a4 || (uVar11 = local_cc, local_e8._0_4_ != local_9c)))) {
            puVar15 = (undefined8 *)local_e8;
            if (-1 < (int)local_d0) {
              puVar15 = (undefined8 *)((long)local_e8 + 4);
            }
            local_e8._4_4_ = *(undefined4 *)puVar15;
            uVar2 = local_cc;
            if (-1 < (int)local_d0) {
              uVar2 = local_d0;
            }
            local_cc = 0xffffffff;
            uVar11 = local_a4;
            local_d0 = uVar2;
          }
          if ((-1 < (int)uVar11) && ((int)(local_a8 & local_cc) < 0)) {
            local_a0 = local_9c;
            local_a8 = uVar11;
          }
          if (((local_a8 ^ local_d0) & 0xfffffffd) == 0) {
            local_d0 = local_a8 | local_d0;
            if (local_e8._4_4_ != local_a0) {
              local_d0 = 0xffffffff;
            }
          }
          else {
            local_d0 = 0xffffffff;
          }
        }
        else {
          local_cc = local_a4;
          local_e8._4_4_ = local_a0;
          local_e8._0_4_ = local_9c;
          local_d0 = local_a8;
        }
        if (param_5 != 0) {
          *local_88 = '\0';
          iVar9 = FUN_01b1822c(pcVar19,0,param_14,0);
          if (iVar9 == -3) {
            *(undefined4 *)(param_14 + 0xa4) = 1;
          }
          else {
            if (iVar9 < 0) {
              uVar14 = 0x46;
              if (iVar9 != -4) {
                uVar14 = 0x19;
              }
              uVar3 = 0x24;
              if (iVar9 != -2) {
                uVar3 = uVar14;
              }
              uVar10 = 0;
              *local_c8 = uVar3;
              goto LAB_01b181e8;
            }
            if (*(int *)(param_14 + 0x78) < iVar9) {
              *(int *)(param_14 + 0x78) = iVar9;
            }
            *pcVar18 = (char)((uint)iVar9 >> 8);
            pcVar18[1] = (char)iVar9;
          }
        }
      }
      if (*local_80 != '|') goto LAB_01b18000;
      if (param_15 == (int *)0x0) {
        *local_88 = 'w';
        local_88[1] = (char)((uint)((int)local_88 - (int)pcVar19) >> 8);
        local_88[2] = (char)local_88 - (char)pcVar19;
        local_b8 = local_88;
        pcVar8 = local_88;
      }
      else {
        local_ac = local_ac + 3;
        local_88 = pcVar19;
        pcVar8 = (char *)(*local_d8 + local_e0);
      }
      local_80 = local_80 + 1;
      pcVar19 = local_88;
      local_88 = pcVar8 + 3;
      uVar11 = uVar1;
    } while( true );
  }
  uVar14 = 0x55;
LAB_01b17cec:
  uVar10 = 0;
  *local_c8 = uVar14;
LAB_01b181f8:
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
LAB_01b18000:
  if (param_15 == (int *)0x0) {
    uVar12 = (int)local_88 - (int)pcVar19;
    do {
      cVar5 = pcVar19[1];
      cVar6 = pcVar19[2];
      pcVar19[1] = (char)(uVar12 >> 8);
      pcVar19[2] = (char)uVar12;
      uVar12 = (uint)CONCAT11(cVar5,cVar6);
      pcVar19 = pcVar19 + -(ulong)uVar12;
    } while (uVar12 != 0);
  }
  *local_88 = 'x';
  iVar9 = (int)__src;
  local_88[1] = (char)((uint)((int)local_88 - iVar9) >> 8);
  cVar5 = (char)__src;
  local_88[2] = (char)local_88 - cVar5;
  local_88 = local_88 + 3;
  if (sVar17 != 0) {
    puVar15 = *(undefined8 **)(param_14 + 0x48);
    if (*(short *)((long)puVar15 + 10) != 0) {
      *local_88 = '\0';
      FUN_01b1c9a4(__src,3,param_14,lVar13 - lVar16);
      memmove(__src + 3,__src,(long)local_88 - (long)__src);
      *__src = -0x7f;
      pcVar18 = local_88 + 3;
      __src[1] = (char)((uint)((int)pcVar18 - iVar9) >> 8);
      __src[2] = (char)pcVar18 - cVar5;
      *pcVar18 = 'x';
      local_88[4] = (char)((uint)((int)pcVar18 - iVar9) >> 8);
      local_88[5] = (char)pcVar18 - cVar5;
      local_88 = local_88 + 6;
      local_ac = local_ac + 6;
      puVar15 = *(undefined8 **)(param_14 + 0x48);
    }
    *(undefined8 *)(param_14 + 0x48) = *puVar15;
  }
  *(uint *)(param_14 + 0x70) = uVar1;
  *local_d8 = (long)local_88;
  *param_3 = (long)local_80;
  *param_9 = local_e8._0_4_;
  *param_10 = local_cc;
  *param_11 = local_e8._4_4_;
  *param_12 = local_d0;
  if (param_15 != (int *)0x0) {
    if (0x7fffffeb - *param_15 < local_ac) {
      uVar14 = 0x14;
      goto LAB_01b17cec;
    }
    *param_15 = local_ac + *param_15;
  }
  uVar10 = 1;
  goto LAB_01b181f8;
}

