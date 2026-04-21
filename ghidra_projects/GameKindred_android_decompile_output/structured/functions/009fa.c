// functions/009fa — 11 functions
#include "libGameKindred.h"




void FUN_009fa2b8(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_009f9a50(param_1,param_1 + 0x40,param_1 + 0x80,param_3);
  if (param_1 + 0xc0 != param_2) {
    lVar5 = 0;
    lVar6 = param_1 + 0xc0;
    lVar4 = param_1 + 0x80;
    do {
      lVar3 = lVar6;
      uVar2 = (*(code *)*param_3)(lVar3,lVar4);
      if ((uVar2 & 1) != 0) {
        thunk_FUN_00e7051c(&local_a8,lVar3);
        uStack_74 = *(undefined8 *)(lVar3 + 0x34);
        uStack_78 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x2c) >> 0x20);
        uStack_88 = *(undefined8 *)(lVar3 + 0x20);
        uStack_80 = (undefined4)*(undefined8 *)(lVar3 + 0x28);
        local_7c = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20);
        uStack_90 = *(undefined8 *)(lVar3 + 0x18);
        local_98 = *(undefined8 *)(lVar3 + 0x10);
        lVar6 = lVar5;
        do {
          lVar4 = param_1 + lVar6;
          FUN_00910394(lVar4 + 0xc0,lVar4 + 0x80);
          *(undefined8 *)(lVar4 + 0xf4) = *(undefined8 *)(lVar4 + 0xb4);
          *(undefined8 *)(lVar4 + 0xec) = *(undefined8 *)(lVar4 + 0xac);
          *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0x98);
          *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0x90);
          *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)(lVar4 + 0xa8);
          *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(lVar4 + 0xa0);
          if (lVar6 == -0x80) break;
          uVar2 = (*(code *)*param_3)(&local_a8,lVar4 + 0x40);
          lVar6 = lVar6 + -0x40;
        } while ((uVar2 & 1) != 0);
        FUN_00910394(lVar4 + 0x80,&local_a8);
        *(undefined8 *)(lVar4 + 0xb4) = uStack_74;
        *(ulong *)(lVar4 + 0xac) = CONCAT44(uStack_78,local_7c);
        *(ulong *)(lVar4 + 0xa8) = CONCAT44(local_7c,uStack_80);
        *(undefined8 *)(lVar4 + 0xa0) = uStack_88;
        *(undefined8 *)(lVar4 + 0x98) = uStack_90;
        *(undefined8 *)(lVar4 + 0x90) = local_98;
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
      }
      lVar5 = lVar5 + 0x40;
      lVar6 = lVar3 + 0x40;
      lVar4 = lVar3;
    } while (lVar3 + 0x40 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fa418(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  bVar2 = true;
  switch(param_2 - param_1 >> 6) {
  case 0:
  case 1:
    goto switchD_009fa474_caseD_0;
  case 2:
    lVar6 = param_2 + -0x40;
    uVar3 = (*(code *)*param_3)(lVar6,param_1);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_00e7051c(&local_a8,param_1);
      uStack_74 = *(undefined8 *)(param_1 + 0x34);
      uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      uStack_88 = *(undefined8 *)(param_1 + 0x20);
      uStack_80 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      local_7c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
      uStack_90 = *(undefined8 *)(param_1 + 0x18);
      local_98 = *(undefined8 *)(param_1 + 0x10);
      FUN_00910394(param_1,lVar6);
      uVar9 = *(undefined8 *)(param_2 + -0x14);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + -0xc);
      *(undefined8 *)(param_1 + 0x2c) = uVar9;
      uVar9 = *(undefined8 *)(param_2 + -0x20);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + -0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar9;
      uVar9 = *(undefined8 *)(param_2 + -0x30);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + -0x28);
      *(undefined8 *)(param_1 + 0x10) = uVar9;
      FUN_00910394(lVar6,&local_a8);
      *(undefined8 *)(param_2 + -0xc) = uStack_74;
      *(ulong *)(param_2 + -0x14) = CONCAT44(uStack_78,local_7c);
      *(ulong *)(param_2 + -0x18) = CONCAT44(local_7c,uStack_80);
      *(undefined8 *)(param_2 + -0x20) = uStack_88;
      *(undefined8 *)(param_2 + -0x28) = uStack_90;
      *(undefined8 *)(param_2 + -0x30) = local_98;
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
        local_a8 = 0;
        local_a0 = (void *)0x0;
      }
    }
    break;
  case 3:
    FUN_009f9a50(param_1,param_1 + 0x40,param_2 + -0x40,param_3);
    break;
  case 4:
    FUN_009f9d88(param_1,param_1 + 0x40,param_1 + 0x80,param_2 + -0x40,param_3);
    break;
  case 5:
    FUN_009f9fd0(param_1,param_1 + 0x40,param_1 + 0x80,param_1 + 0xc0,param_2 + -0x40,param_3);
    break;
  default:
    FUN_009f9a50(param_1,param_1 + 0x40,param_1 + 0x80,param_3);
    if (param_1 + 0xc0 != param_2) {
      lVar6 = 0;
      iVar8 = 0;
      lVar7 = param_1 + 0xc0;
      lVar5 = param_1 + 0x80;
      do {
        lVar4 = lVar7;
        uVar3 = (*(code *)*param_3)(lVar4,lVar5);
        if ((uVar3 & 1) != 0) {
          thunk_FUN_00e7051c(&local_a8,lVar4);
          uStack_74 = *(undefined8 *)(lVar4 + 0x34);
          uStack_78 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x2c) >> 0x20);
          uStack_88 = *(undefined8 *)(lVar4 + 0x20);
          uStack_80 = (undefined4)*(undefined8 *)(lVar4 + 0x28);
          local_7c = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x28) >> 0x20);
          uStack_90 = *(undefined8 *)(lVar4 + 0x18);
          local_98 = *(undefined8 *)(lVar4 + 0x10);
          lVar7 = lVar6;
          do {
            lVar5 = param_1 + lVar7;
            FUN_00910394(lVar5 + 0xc0,lVar5 + 0x80);
            *(undefined8 *)(lVar5 + 0xf4) = *(undefined8 *)(lVar5 + 0xb4);
            *(undefined8 *)(lVar5 + 0xec) = *(undefined8 *)(lVar5 + 0xac);
            *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(lVar5 + 0x98);
            *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0x90);
            *(undefined8 *)(lVar5 + 0xe8) = *(undefined8 *)(lVar5 + 0xa8);
            *(undefined8 *)(lVar5 + 0xe0) = *(undefined8 *)(lVar5 + 0xa0);
            if (lVar7 == -0x80) break;
            uVar3 = (*(code *)*param_3)(&local_a8,lVar5 + 0x40);
            lVar7 = lVar7 + -0x40;
          } while ((uVar3 & 1) != 0);
          FUN_00910394(lVar5 + 0x80,&local_a8);
          iVar8 = iVar8 + 1;
          *(undefined8 *)(lVar5 + 0xb4) = uStack_74;
          *(ulong *)(lVar5 + 0xac) = CONCAT44(uStack_78,local_7c);
          *(ulong *)(lVar5 + 0xa8) = CONCAT44(local_7c,uStack_80);
          *(undefined8 *)(lVar5 + 0xa0) = uStack_88;
          *(undefined8 *)(lVar5 + 0x98) = uStack_90;
          *(undefined8 *)(lVar5 + 0x90) = local_98;
          if (local_a0 != (void *)0x0) {
            operator_delete__(local_a0);
            local_a8 = 0;
            local_a0 = (void *)0x0;
          }
          if (iVar8 == 8) {
            bVar2 = lVar4 + 0x40 == param_2;
            goto switchD_009fa474_caseD_0;
          }
        }
        lVar6 = lVar6 + 0x40;
        lVar7 = lVar4 + 0x40;
        lVar5 = lVar4;
      } while (lVar4 + 0x40 != param_2);
      bVar2 = true;
      goto switchD_009fa474_caseD_0;
    }
  }
  bVar2 = true;
switchD_009fa474_caseD_0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}




void FUN_009fa6c0(void)

{
  void *pvVar1;
  
  if (DAT_031308b8 == (void *)0x0) {
    pvVar1 = operator_new(0xb8);
    FUN_009faf58();
    DAT_031308b8 = pvVar1;
  }
  return;
}




void FUN_009fa6f8(void)

{
  if (DAT_031308b8 != (long *)0x0) {
    (**(code **)(*DAT_031308b8 + 8))();
    DAT_031308b8 = (long *)0x0;
  }
  return;
}




undefined8 FUN_009fa72c(void)

{
  return DAT_031308b8;
}




void FUN_009fa738(void)

{
  FUN_009fa744(DAT_031308b8);
  return;
}




void FUN_009fa744(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = FUN_00e85318(0);
  if (lVar1 - *(long *)(param_1 + 0xa8) < 0x3c) {
    lVar1 = *(long *)(param_1 + 0xa8) + 0x3c;
  }
  else {
    uVar2 = FUN_00e80f6c();
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00940c1c();
      if (*(char *)(lVar3 + 10) != '\0') {
        uVar2 = FUN_00e84e4c(param_1 + 0x30);
        if ((uVar2 & 1) == 0) {
          FUN_00e8288c(param_1 + 0x30);
          lVar1 = lVar1 + 600;
          goto LAB_009fa7a4;
        }
      }
    }
    lVar1 = lVar1 + 10;
  }
LAB_009fa7a4:
  *(long *)(param_1 + 0xa0) = lVar1;
  return;
}




void FUN_009fa7c8(byte *param_1,byte *param_2,undefined8 param_3)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  size_t sVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  ulong local_d8;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  undefined1 auStack_88 [32];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if ((DAT_031308b8 != 0) && (*(int *)(DAT_031308b8 + 0x70) != 0)) {
    local_d8 = 0;
    do {
      bVar4 = *param_1;
      lVar12 = *(long *)(DAT_031308b8 + 0x78);
      sVar9 = *(size_t *)(param_1 + 8);
      sVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar1 = sVar9;
      }
      if (sVar1 != 0) {
        puVar14 = (uint *)(lVar12 + local_d8 * 0x98 + 0x58);
        uVar15 = *puVar14;
        if (uVar15 != 0) {
          uVar18 = 0;
          do {
            lVar17 = *(long *)(lVar12 + local_d8 * 0x98 + 0x60);
            pbVar13 = (byte *)(lVar17 + uVar18 * 0x28);
            bVar5 = *pbVar13;
            sVar1 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar13 + 8);
            }
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = sVar9;
            }
            if (sVar1 == sVar2) {
              pbVar10 = *(byte **)(lVar17 + uVar18 * 0x28 + 0x10);
              if ((bVar5 & 1) == 0) {
                pbVar10 = pbVar13 + 1;
              }
              pbVar8 = param_1 + 1;
              if ((bVar4 & 1) != 0) {
                pbVar8 = *(byte **)(param_1 + 0x10);
              }
              if ((bVar5 & 1) == 0) {
                if (sVar1 != 0) {
                  lVar11 = -(ulong)(bVar5 >> 1);
                  do {
                    pbVar13 = pbVar13 + 1;
                    if (*pbVar13 != *pbVar8) goto LAB_009fa9f0;
                    lVar11 = lVar11 + 1;
                    pbVar8 = pbVar8 + 1;
                  } while (lVar11 != 0);
                }
              }
              else if ((sVar1 != 0) && (iVar7 = memcmp(pbVar10,pbVar8,sVar1), iVar7 != 0))
              goto LAB_009fa9f0;
              if (-1 < *(int *)(lVar17 + uVar18 * 0x28 + 0x20)) {
                FUN_00968914(auStack_88,&DAT_01bb6d43);
                FUN_008fa54c(local_a0,"[EVENT_RANK]");
                FUN_008fa54c(local_b8,auStack_88);
                FUN_00937db8(param_3,local_a0,local_b8);
                if ((local_b8[0] & 1) != 0) {
                  operator_delete(local_a8);
                }
                if ((local_a0[0] & 1) != 0) {
                  operator_delete(local_90);
                }
              }
              if (-2 < (int)*(float *)(lVar17 + uVar18 * 0x28 + 0x1c)) {
                FUN_00968914(auStack_88,&DAT_01bb6d43);
                FUN_008fa54c(local_a0,"[EVENT_SCORE]");
                FUN_008fa54c(local_b8,auStack_88);
                FUN_00937db8(param_3,local_a0,local_b8);
                if ((local_b8[0] & 1) != 0) {
                  operator_delete(local_a8);
                }
                if ((local_a0[0] & 1) != 0) {
                  operator_delete(local_90);
                }
              }
              uVar15 = *puVar14;
            }
LAB_009fa9f0:
            uVar18 = uVar18 + 1;
            if (uVar15 <= uVar18) break;
            bVar4 = *param_1;
            sVar9 = *(size_t *)(param_1 + 8);
          } while( true );
        }
      }
      bVar4 = *param_2;
      sVar9 = *(size_t *)(param_2 + 8);
      sVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar1 = sVar9;
      }
      if (sVar1 != 0) {
        puVar14 = (uint *)(lVar12 + local_d8 * 0x98 + 0x68);
        uVar15 = *puVar14;
        if (uVar15 != 0) {
          uVar18 = 0;
          do {
            lVar17 = *(long *)(lVar12 + local_d8 * 0x98 + 0x70);
            pbVar13 = (byte *)(lVar17 + uVar18 * 0x28);
            bVar5 = *pbVar13;
            sVar1 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar13 + 8);
            }
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = sVar9;
            }
            if (sVar1 == sVar2) {
              pbVar10 = *(byte **)(lVar17 + uVar18 * 0x28 + 0x10);
              if ((bVar5 & 1) == 0) {
                pbVar10 = pbVar13 + 1;
              }
              pbVar8 = param_2 + 1;
              if ((bVar4 & 1) != 0) {
                pbVar8 = *(byte **)(param_2 + 0x10);
              }
              if ((bVar5 & 1) == 0) {
                if (sVar1 != 0) {
                  lVar11 = -(ulong)(bVar5 >> 1);
                  do {
                    pbVar13 = pbVar13 + 1;
                    if (*pbVar13 != *pbVar8) goto LAB_009fad54;
                    lVar11 = lVar11 + 1;
                    pbVar8 = pbVar8 + 1;
                  } while (lVar11 != 0);
                }
              }
              else if ((sVar1 != 0) && (iVar7 = memcmp(pbVar10,pbVar8,sVar1), iVar7 != 0))
              goto LAB_009fad54;
              puVar16 = (uint *)(lVar17 + uVar18 * 0x28 + 0x18);
              if (-1 < (int)*puVar16) {
                FUN_00968914(auStack_88,&DAT_01bb6d43);
                FUN_008fa54c(local_a0,"[EVENT_WINS]");
                FUN_008fa54c(local_b8,auStack_88);
                FUN_00937db8(param_3,local_a0,local_b8);
                if ((local_b8[0] & 1) != 0) {
                  operator_delete(local_a8);
                }
                if ((local_a0[0] & 1) != 0) {
                  operator_delete(local_90);
                }
              }
              puVar19 = (uint *)(lVar17 + uVar18 * 0x28 + 0x20);
              uVar15 = *puVar19;
              if (-1 < (int)uVar15) {
                FUN_00968914(auStack_88,&DAT_01bb6d43);
                FUN_008fa54c(local_a0,"[EVENT_MAX_WINS]");
                FUN_008fa54c(local_b8,auStack_88);
                FUN_00937db8(param_3,local_a0,local_b8);
                if ((local_b8[0] & 1) != 0) {
                  operator_delete(local_a8);
                }
                if ((local_a0[0] & 1) != 0) {
                  operator_delete(local_90);
                }
                uVar15 = *puVar19;
              }
              uVar3 = *puVar16;
              if (-1 < (int)(uVar3 | uVar15)) {
                uVar15 = uVar15 - uVar3;
                FUN_00968914(auStack_88,&DAT_01bb6d43,uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU));
                FUN_008fa54c(local_a0,"[EVENT_REMAINING_WINS]");
                FUN_008fa54c(local_b8,auStack_88);
                FUN_00937db8(param_3,local_a0,local_b8);
                if ((local_b8[0] & 1) != 0) {
                  operator_delete(local_a8);
                }
                if ((local_a0[0] & 1) != 0) {
                  operator_delete(local_90);
                }
              }
              puVar16 = (uint *)(lVar17 + uVar18 * 0x28 + 0x1c);
              if (-1 < (int)*puVar16) {
                FUN_00968914(auStack_88,&DAT_01bb6d43);
                FUN_008fa54c(local_a0,"[EVENT_LOSSES]");
                FUN_008fa54c(local_b8,auStack_88);
                FUN_00937db8(param_3,local_a0,local_b8);
                if ((local_b8[0] & 1) != 0) {
                  operator_delete(local_a8);
                }
                if ((local_a0[0] & 1) != 0) {
                  operator_delete(local_90);
                }
              }
              puVar19 = (uint *)(lVar17 + uVar18 * 0x28 + 0x24);
              uVar15 = *puVar19;
              if (-1 < (int)uVar15) {
                FUN_00968914(auStack_88,&DAT_01bb6d43);
                FUN_008fa54c(local_a0,"[EVENT_MAX_LOSSES]");
                FUN_008fa54c(local_b8,auStack_88);
                FUN_00937db8(param_3,local_a0,local_b8);
                if ((local_b8[0] & 1) != 0) {
                  operator_delete(local_a8);
                }
                if ((local_a0[0] & 1) != 0) {
                  operator_delete(local_90);
                }
                uVar15 = *puVar19;
              }
              uVar3 = *puVar16;
              if (-1 < (int)(uVar3 | uVar15)) {
                uVar15 = uVar15 - uVar3;
                FUN_00968914(auStack_88,&DAT_01bb6d43,uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU));
                FUN_008fa54c(local_a0,"[EVENT_REMAINING_LOSSES]");
                FUN_008fa54c(local_b8,auStack_88);
                FUN_00937db8(param_3,local_a0,local_b8);
                if ((local_b8[0] & 1) != 0) {
                  operator_delete(local_a8);
                }
                if ((local_a0[0] & 1) != 0) {
                  operator_delete(local_90);
                }
              }
              uVar15 = *puVar14;
            }
LAB_009fad54:
            uVar18 = uVar18 + 1;
            if (uVar15 <= uVar18) break;
            bVar4 = *param_2;
            sVar9 = *(size_t *)(param_2 + 8);
          } while( true );
        }
      }
      local_d8 = local_d8 + 1;
    } while (local_d8 < *(uint *)(DAT_031308b8 + 0x70));
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_009fadb8(long param_1)

{
  return param_1 + 0x70;
}




undefined8 FUN_009fadc0(byte *param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  byte *__s2;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  if (DAT_031308b8 != 0) {
    bVar4 = *param_1;
    __n = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      __n = *(size_t *)(param_1 + 8);
    }
    if ((__n != 0) && (uVar2 = *(uint *)(DAT_031308b8 + 0x70), uVar2 != 0)) {
      __s2 = *(byte **)(param_1 + 0x10);
      lVar11 = *(long *)(DAT_031308b8 + 0x78);
      uVar10 = 0;
      if ((bVar4 & 1) == 0) {
        __s2 = param_1 + 1;
      }
      do {
        uVar3 = *(uint *)(lVar11 + uVar10 * 0x98 + 0x78);
        if (uVar3 != 0) {
          lVar12 = *(long *)(lVar11 + uVar10 * 0x98 + 0x80);
          uVar9 = 0;
          do {
            pbVar6 = (byte *)(lVar12 + uVar9 * 0x28);
            bVar4 = *pbVar6;
            sVar1 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar6 + 8);
            }
            if (sVar1 == __n) {
              if ((bVar4 & 1) == 0) {
                lVar7 = -(ulong)(bVar4 >> 1);
                pbVar8 = __s2;
                while (pbVar6 = pbVar6 + 1, *pbVar6 == *pbVar8) {
                  lVar7 = lVar7 + 1;
                  pbVar8 = pbVar8 + 1;
                  if (lVar7 == 0) goto LAB_009faee4;
                }
              }
              else {
                iVar5 = memcmp(*(void **)(lVar12 + uVar9 * 0x28 + 0x10),__s2,__n);
                if (iVar5 == 0) {
LAB_009faee4:
                  uVar9 = uVar9 & 0xffffffff;
                  lVar11 = lVar12 + uVar9 * 0x28;
                  *param_2 = *(undefined4 *)(lVar11 + 0x18);
                  if (*(char *)(lVar11 + 0x24) != '\0') {
                    *param_4 = *(undefined4 *)(lVar12 + uVar9 * 0x28 + 0x1c);
                  }
                  if (*(char *)(lVar12 + uVar9 * 0x28 + 0x25) != '\0') {
                    *param_4 = *(undefined4 *)(lVar12 + uVar9 * 0x28 + 0x20);
                  }
                  return 1;
                }
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar3);
        }
        uVar10 = uVar10 + 1;
        if (uVar2 <= uVar10) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}




void FUN_009faf58(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  *param_1 = &PTR_FUN_027c5cb0;
  param_1[3] = &PTR_FUN_027c6050;
  FUN_00e84dac(param_1 + 6);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[6] = &PTR_FUN_027bbb98;
  memset(param_1 + 0xe,0,0x41);
  pcStack_30 = thunk_FUN_009fb14c;
  local_38 = param_1;
  FUN_00f02e98(0x3dcccccd,&local_38,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

