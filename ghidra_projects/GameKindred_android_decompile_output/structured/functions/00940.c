// functions/00940 — 34 functions
#include "libGameKindred.h"




void FUN_009403c0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  undefined1 auStack_68 [8];
  byte *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00941408(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 **)(param_1 + 8) = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (((int)param_2[2] == 3) && (uVar3 = (ulong)*(uint *)(param_2 + 1), *(uint *)(param_2 + 1) != 0)
     ) {
    lVar4 = *param_2;
    puVar5 = (undefined8 *)(lVar4 + 0x18);
    do {
      if ((*(uint *)(puVar5 + 2) >> 0x14 & 1) != 0) {
        puVar2 = puVar5;
        if ((*(uint *)(puVar5 + 2) >> 0x16 & 1) == 0) {
          puVar2 = (undefined8 *)*puVar5;
        }
        FUN_008fa54c(local_80,puVar2);
        if ((*(byte *)((long)puVar5 + -6) >> 6 & 1) == 0) {
          puVar2 = (undefined8 *)puVar5[-3];
        }
        else {
          puVar2 = puVar5 + -3;
        }
        FUN_008fa54c(local_98,puVar2);
        local_60 = local_98;
        lVar4 = FUN_00941474(param_1 + 8,local_98,&DAT_01b95ea5,&local_60,auStack_68);
        FUN_008fce60(lVar4 + 0x38,local_80);
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        lVar4 = *param_2;
        uVar3 = (ulong)*(uint *)(param_2 + 1);
      }
      puVar2 = puVar5 + 3;
      puVar5 = puVar5 + 6;
    } while (puVar2 != (undefined8 *)(lVar4 + uVar3 * 0x30));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00940504(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  undefined8 *puVar10;
  byte local_b0 [16];
  char *local_a0;
  byte local_98 [16];
  char *local_88;
  char *local_80;
  ulong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 0x28) == 0) {
    lVar6 = param_2 + 0x30;
    lVar3 = FUN_008fd190(lVar6,PTR_s_constants_02be30f8);
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar3) {
      pcVar8 = PTR_s_constants_02be30f8 + -1;
      do {
        pcVar8 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
      local_80 = PTR_s_constants_02be30f8;
      local_70 = 0x100005;
      local_78 = (ulong)(uint)((int)pcVar8 - (int)PTR_s_constants_02be30f8);
      FUN_008feca4(lVar6,&local_80);
    }
    lVar3 = FUN_008fd190(lVar6,PTR_s_constants_02be30f8);
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar3) {
      pcVar8 = PTR_s_constants_02be30f8 + -1;
      do {
        pcVar8 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
      local_80 = PTR_s_constants_02be30f8;
      local_70 = 0x100005;
      local_78 = (ulong)(uint)((int)pcVar8 - (int)PTR_s_constants_02be30f8);
      lVar3 = FUN_008feca4(lVar6,&local_80);
      if (*(int *)(lVar3 + 0x10) == 3) {
        pcVar8 = PTR_s_constants_02be30f8 + -1;
        do {
          pcVar8 = pcVar8 + 1;
        } while (*pcVar8 != '\0');
        local_80 = PTR_s_constants_02be30f8;
        local_70 = 0x100005;
        local_78 = (ulong)(uint)((int)pcVar8 - (int)PTR_s_constants_02be30f8);
        plVar4 = (long *)FUN_008feca4(lVar6,&local_80);
        if ((uint)DAT_02c7c1d0 != 0) {
          puVar10 = DAT_02c7c1d8;
          do {
            plVar9 = (long *)*puVar10;
            (**(code **)*plVar9)(local_98,plVar9);
            pcVar8 = (char *)((ulong)local_98 | 1);
            if ((local_98[0] & 1) != 0) {
              pcVar8 = local_88;
            }
            lVar3 = FUN_008fd190(plVar4,pcVar8);
            if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
              bVar2 = false;
            }
            else {
              (**(code **)*plVar9)(local_b0,plVar9);
              local_80 = (char *)((ulong)local_b0 | 1);
              if ((local_b0[0] & 1) != 0) {
                local_80 = local_a0;
              }
              pcVar8 = local_80 + -1;
              do {
                pcVar8 = pcVar8 + 1;
              } while (*pcVar8 != '\0');
              local_70 = 0x100005;
              local_78 = (ulong)(uint)((int)pcVar8 - (int)local_80);
              lVar3 = FUN_008feca4(plVar4,&local_80);
              bVar2 = *(int *)(lVar3 + 0x10) == 3;
              if ((local_b0[0] & 1) != 0) {
                operator_delete(local_a0);
              }
            }
            if ((local_98[0] & 1) != 0) {
              operator_delete(local_88);
            }
            if (bVar2) {
              (**(code **)*plVar9)(local_98,plVar9);
              local_80 = (char *)((ulong)local_98 | 1);
              if ((local_98[0] & 1) != 0) {
                local_80 = local_88;
              }
              pcVar8 = local_80 + -1;
              do {
                pcVar8 = pcVar8 + 1;
              } while (*pcVar8 != '\0');
              local_70 = 0x100005;
              local_78 = (ulong)(uint)((int)pcVar8 - (int)local_80);
              uVar5 = FUN_008feca4(plVar4,&local_80);
              (**(code **)(*plVar9 + 8))(plVar9,uVar5);
              pcVar8 = local_88;
              if ((local_98[0] & 1) != 0) {
LAB_009407b0:
                operator_delete(pcVar8);
              }
            }
            else {
              (**(code **)*plVar9)(&local_80,plVar9);
              if (((ulong)local_80 & 1) != 0) {
                pcVar8 = (char *)CONCAT44(uStack_6c,local_70);
                goto LAB_009407b0;
              }
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 != DAT_02c7c1d8 + (uint)DAT_02c7c1d0);
        }
      }
    }
    lVar3 = FUN_008fd190(lVar6,"experimentDetails");
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar3) {
      local_80 = "experimentDetails";
      local_70 = 0x100005;
      local_78 = 0x11;
      lVar3 = FUN_008feca4(lVar6,&local_80);
      if (*(int *)(lVar3 + 0x10) == 4) {
        local_80 = "experimentDetails";
        local_70 = 0x100005;
        local_78 = 0x11;
        plVar4 = (long *)FUN_008feca4(lVar6,&local_80);
        if ((int)plVar4[1] != 0) {
          plVar9 = (long *)*plVar4;
          do {
            lVar6 = FUN_008fd190(plVar9,"experimentId");
            if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 == lVar6) {
              pcVar8 = "";
            }
            else {
              local_80 = "experimentId";
              local_70 = 0x100005;
              local_78 = 0xc;
              lVar6 = FUN_008feca4(plVar9,&local_80);
              pcVar8 = "";
              if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
                local_80 = "experimentId";
                local_70 = 0x100005;
                local_78 = 0xc;
                pcVar8 = (char *)FUN_008feca4(plVar9,&local_80);
                if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                  pcVar8 = *(char **)pcVar8;
                }
              }
            }
            lVar6 = FUN_008fd190(plVar9,"variantString");
            if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 == lVar6) {
              pcVar7 = "";
            }
            else {
              local_80 = "variantString";
              local_70 = 0x100005;
              local_78 = 0xd;
              lVar6 = FUN_008feca4(plVar9,&local_80);
              pcVar7 = "";
              if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
                local_80 = "variantString";
                local_70 = 0x100005;
                local_78 = 0xd;
                pcVar7 = (char *)FUN_008feca4(plVar9,&local_80);
                if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
                  pcVar7 = *(char **)pcVar7;
                }
              }
            }
            lVar6 = FUN_008fd190(plVar9,"isActive");
            if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 == lVar6) {
LAB_009409ec:
              pcVar7 = "UNSET";
            }
            else {
              local_80 = "isActive";
              local_70 = 0x100005;
              local_78 = 8;
              lVar6 = FUN_008feca4(plVar9,&local_80);
              if ((*(byte *)(lVar6 + 0x11) & 1) == 0) goto LAB_009409ec;
              local_80 = "isActive";
              local_70 = 0x100005;
              local_78 = 8;
              lVar6 = FUN_008feca4(plVar9,&local_80);
              if (*(int *)(lVar6 + 0x10) != 0x102) goto LAB_009409ec;
            }
            FUN_008ffc4c(pcVar8,pcVar7,1);
            plVar9 = plVar9 + 3;
          } while (plVar9 != (long *)(*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x18));
        }
      }
    }
    FUN_00940aac();
    lVar6 = DAT_02c7c350;
    if (DAT_02c7c348 != 0) {
      do {
        if (*(code **)(lVar6 + 8) == (code *)0x0) {
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x10));
        }
        else {
          (**(code **)(lVar6 + 8))();
        }
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != DAT_02c7c350 + (ulong)DAT_02c7c348 * 0x20);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00940aac(void)

{
  int iVar1;
  
  if (((DAT_02c7c358 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02c7c358), iVar1 != 0)) {
    _DAT_02c7c348 = 0;
    DAT_02c7c350 = 0;
    __cxa_atexit(FUN_00940cbc,&DAT_02c7c348,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_02c7c358);
  }
  return &DAT_02c7c348;
}




void FUN_00940b14(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x20);
  FUN_00e83560();
  *(undefined1 *)(puVar1 + 3) = 0;
  *puVar1 = &PTR_FUN_027bac80;
  DAT_02c7c340 = puVar1;
  return;
}




void FUN_00940b58(void)

{
  if (DAT_02c7c340 != (long *)0x0) {
    (**(code **)(*DAT_02c7c340 + 8))();
  }
  DAT_02c7c340 = (long *)0x0;
  return;
}




undefined8 * FUN_00940b8c(void)

{
  return &DAT_02c7c1e0;
}




undefined8 * FUN_00940b98(void)

{
  return &DAT_02c7c220;
}




undefined8 * FUN_00940ba4(void)

{
  return &DAT_02c7c238;
}




undefined8 * FUN_00940bb0(void)

{
  return &DAT_02c7c248;
}




undefined8 * FUN_00940bbc(void)

{
  return &DAT_02c7c258;
}




undefined8 * FUN_00940bc8(void)

{
  return &DAT_02c7c270;
}




undefined8 * FUN_00940bd4(void)

{
  return &DAT_02c7c290;
}




undefined8 * FUN_00940be0(void)

{
  return &DAT_02c7c2a0;
}




undefined8 * FUN_00940bec(void)

{
  return &DAT_02c7c2b0;
}




undefined8 * FUN_00940bf8(void)

{
  return &DAT_02c7c2c0;
}




undefined8 * FUN_00940c04(void)

{
  return &DAT_02c7c2d0;
}




undefined8 * FUN_00940c10(void)

{
  return &DAT_02c7c2e0;
}




undefined8 * FUN_00940c1c(void)

{
  return &DAT_02c7c320;
}




undefined8 * FUN_00940c28(void)

{
  return &DAT_02c7c330;
}




void FUN_00940c34(uint *param_1,undefined8 *param_2)

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
    FUN_009416a8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00940cbc(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




undefined1 FUN_00940ce8(void)

{
  return *(undefined1 *)(DAT_02c7c340 + 0x18);
}




void FUN_00940cf8(undefined8 param_1)

{
  FUN_008fa54c(param_1,"localNotificationData");
  return;
}




void FUN_00940d08(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027ba9e0;
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
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    puVar1 = DAT_02c7c1d8;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        *puVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0];
        break;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_00940dc4(undefined8 param_1)

{
  FUN_008fa54c(param_1,"seasonalData");
  return;
}




void FUN_00940dd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    puVar1 = DAT_02c7c1d8;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        *puVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0];
        operator_delete(param_1);
        return;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_00940e34(undefined8 param_1)

{
  FUN_008fa54c(param_1,"presentationData");
  return;
}




void FUN_00940e44(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    puVar1 = DAT_02c7c1d8;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        *puVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0];
        operator_delete(param_1);
        return;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_00940ea4(undefined8 param_1)

{
  FUN_008fa54c(param_1,"hudDynamicData");
  return;
}




void FUN_00940eb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    puVar1 = DAT_02c7c1d8;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        *puVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0];
        operator_delete(param_1);
        return;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_00940f14(undefined8 param_1)

{
  FUN_008fa54c(param_1,"rateAppData");
  return;
}




void FUN_00940f24(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    puVar1 = DAT_02c7c1d8;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        *puVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0];
        operator_delete(param_1);
        return;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_00940f84(undefined8 param_1)

{
  FUN_008fa54c(param_1,"marketFeedExperiment");
  return;
}




void FUN_00940f94(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027baad0;
  FUN_00941408(param_1 + 1,param_1[2]);
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    puVar1 = DAT_02c7c1d8;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        *puVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0];
        break;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}

