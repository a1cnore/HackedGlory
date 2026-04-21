// functions/00bc3 — 16 functions
#include "libGameKindred.h"




bool FUN_00bc33c8(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  iVar2 = FUN_00bc22a4();
  bVar1 = false;
  if ((lVar3 != 0) && (-1 < iVar2)) {
    iVar2 = FUN_00d535a4(lVar3);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




void FUN_00bc342c(long param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  
  *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
  lVar3 = *(long *)(param_1 + 8);
  iVar7 = 0;
  *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0xfe | param_2 & 1;
  *(byte *)(lVar3 + 0x924d) = param_2 & 1;
  do {
    FUN_00c11fa8(lVar3,iVar7,0);
    lVar3 = *(long *)(param_1 + 8);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 10);
  FUN_00c11e28(lVar3,0,1);
  if ((param_2 & 1) != 0) {
    FUN_00ceace8();
    uVar4 = FUN_00ceb05c();
    if ((((uVar4 & 1) == 0) && ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) != 0)) &&
       (plVar5 = *(long **)(param_1 + 0x18), plVar5 != (long *)0x0)) {
      if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
        lVar3 = (**(code **)(*plVar5 + 0x10))();
        if (lVar3 != 0) {
          lVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          uVar2 = *(undefined4 *)(lVar3 + 0x260);
          uVar6 = *(undefined8 *)(param_1 + 8);
          uVar1 = FUN_00ced0c8(uVar2);
          uVar2 = FUN_00ced12c(uVar2);
          FUN_00c12090(uVar6,uVar1,uVar2);
          return;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
      }
    }
  }
  return;
}




void FUN_00bc3558(long param_1,uint param_2)

{
  FUN_00c12390(*(undefined8 *)(param_1 + 8),~param_2 & 1);
  return;
}




void FUN_00bc3568(long param_1,uint param_2,uint param_3)

{
  *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
  *(byte *)(param_1 + 0x152) =
       (byte)(((param_2 & 1) << 0x12) >> 0x10) | (byte)(((param_3 & 1) << 0x13) >> 0x10) |
       *(byte *)(param_1 + 0x152) & 0xf3;
  FUN_00c12414(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc35a4(long param_1,uint param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  
  lVar1 = param_1 + (ulong)param_2 * 0x28;
  piVar2 = (int *)(lVar1 + 0x58);
  piVar3 = (int *)(lVar1 + 0x44);
  if (*piVar3 != *piVar2) {
    lVar1 = FUN_00bc3698(param_1,param_2);
    FUN_00c11ff0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(lVar1 + 8));
    *piVar3 = *piVar2;
  }
  return;
}




void FUN_00bc3610(long param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  short *psVar4;
  
  lVar3 = param_1 + (ulong)param_2 * 0x28;
  psVar4 = (short *)(lVar3 + 0x50);
  iVar2 = (int)(*(float *)(lVar3 + 0x60) + 0.99);
  if (*psVar4 != iVar2) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (0 < iVar2) {
      FUN_00c11f4c(uVar1,param_2,iVar2);
      uVar1 = *(undefined8 *)(param_1 + 8);
    }
    FUN_00c11fa8(uVar1,param_2,0 < iVar2);
    *psVar4 = (short)iVar2;
  }
  return;
}




undefined8 FUN_00bc3698(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  plVar1 = *(long **)(param_1 + 0x28);
  param_2 = param_2 & 0xffffffff;
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      uVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  puVar4 = (undefined4 *)(param_1 + param_2 * 0x28 + 0x58);
  uVar3 = FUN_00d73574(uVar2,*puVar4);
  if ((uVar3 & 1) == 0) {
    lVar5 = param_1 + param_2 * 0x28;
    piVar6 = (int *)(lVar5 + 0x40);
    piVar7 = (int *)(lVar5 + 0x54);
    if (*piVar6 == *piVar7) {
      uVar2 = *(undefined8 *)(param_1 + param_2 * 0x28 + 0x48);
    }
    else {
      uVar2 = FUN_00d6eb50();
      uVar2 = FUN_00d6eb88(uVar2,*piVar7);
      *(undefined8 *)(param_1 + param_2 * 0x28 + 0x48) = uVar2;
      *piVar6 = *piVar7;
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 0x28);
    uVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
        uVar2 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x28) = 0;
        uVar2 = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      }
    }
    uVar2 = FUN_00d73214(uVar2,*puVar4);
  }
  return uVar2;
}




undefined8 FUN_00bc37ac(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) != (int)plVar4[1]) {
LAB_00bc38b8:
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
            goto LAB_00bc3888;
          }
          (**(code **)(*plVar4 + 0x10))();
          plVar4 = *(long **)(param_1 + 0x28);
          if (plVar4 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) != (int)plVar4[1]) goto LAB_00bc38b8;
            lVar5 = (**(code **)(*plVar4 + 0x10))();
            if (lVar5 != 0) {
              plVar4 = *(long **)(param_1 + 0x28);
              uVar6 = 0;
              if (plVar4 != (long *)0x0) {
                if (*(int *)(param_1 + 0x30) == (int)plVar4[1]) {
                  uVar6 = (**(code **)(*plVar4 + 0x10))();
                }
                else {
                  *(undefined8 *)(param_1 + 0x28) = 0;
                  uVar6 = 0;
                  *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
                }
              }
              uVar2 = FUN_00d72dac(uVar6);
              uVar6 = 0;
              if (param_2 < uVar2) {
                uVar6 = 0;
                if (*(int *)(param_1 + (long)(int)param_2 * 0x28 + 0x58) != -1) {
                  uVar6 = FUN_00bc3698(param_1,param_2);
                  uVar3 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_FROM_TAP");
                  FUN_00f048e0(auStack_58,uVar3,uVar6);
                  uVar6 = 1;
                  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
                  uVar3 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_SIDE");
                  FUN_00f048e0(auStack_78,uVar3,*(undefined1 *)(param_1 + 0x3c));
                  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_78,1);
                }
              }
              goto LAB_00bc3888;
            }
          }
        }
        uVar6 = 0;
        goto LAB_00bc3888;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
  }
  uVar6 = 1;
LAB_00bc3888:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00bc3998(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) != (int)plVar4[1]) {
LAB_00bc3aa4:
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
            goto LAB_00bc3a74;
          }
          (**(code **)(*plVar4 + 0x10))();
          plVar4 = *(long **)(param_1 + 0x28);
          if (plVar4 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) != (int)plVar4[1]) goto LAB_00bc3aa4;
            lVar5 = (**(code **)(*plVar4 + 0x10))();
            if (lVar5 != 0) {
              plVar4 = *(long **)(param_1 + 0x28);
              uVar6 = 0;
              if (plVar4 != (long *)0x0) {
                if (*(int *)(param_1 + 0x30) == (int)plVar4[1]) {
                  uVar6 = (**(code **)(*plVar4 + 0x10))();
                }
                else {
                  *(undefined8 *)(param_1 + 0x28) = 0;
                  uVar6 = 0;
                  *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
                }
              }
              uVar2 = FUN_00d72dac(uVar6);
              uVar6 = 0;
              if (param_2 < uVar2) {
                uVar6 = 0;
                if (*(int *)(param_1 + (long)(int)param_2 * 0x28 + 0x58) != -1) {
                  uVar6 = FUN_00bc3698(param_1,param_2);
                  uVar3 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_FROM_HOVER");
                  FUN_00f048e0(auStack_58,uVar3,uVar6);
                  uVar6 = 1;
                  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
                  uVar3 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_SIDE");
                  FUN_00f048e0(auStack_78,uVar3,*(undefined1 *)(param_1 + 0x3c));
                  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_78,1);
                }
              }
              goto LAB_00bc3a74;
            }
          }
        }
        uVar6 = 0;
        goto LAB_00bc3a74;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
  }
  uVar6 = 1;
LAB_00bc3a74:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00bc3b84(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        plVar3 = *(long **)(param_1 + 0x28);
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
            (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
          }
        }
        uVar2 = FUN_00f048a4("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP");
        FUN_00f048e0(auStack_48,uVar2,0);
        FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
        uVar2 = FUN_00f048a4("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP_SIDE");
        FUN_00f048e0(auStack_68,uVar2,*(undefined1 *)(param_1 + 0x3c));
        FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_68,1);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc3ca0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x18);
  uVar4 = 0;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar3[1]) {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
  }
  FUN_00d9eb90(uVar4);
  lVar5 = FUN_00d7b53c();
  if (lVar5 != 0) {
    uVar2 = FUN_00f048a4("UI::EVENT_HUD_SHOW_TALENT_TOOLTIP_FROM_TAP");
    FUN_00f048e0(auStack_58,uVar2,lVar5);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
    uVar2 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_SIDE");
    FUN_00f048e0(auStack_78,uVar2,*(undefined1 *)(param_1 + 0x3c));
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_78,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc3d94(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x18);
  uVar4 = 0;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar3[1]) {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
  }
  FUN_00d9eb90(uVar4);
  lVar5 = FUN_00d7b53c();
  if (lVar5 != 0) {
    uVar2 = FUN_00f048a4("UI::EVENT_HUD_SHOW_TALENT_TOOLTIP_FROM_HOVER");
    FUN_00f048e0(auStack_58,uVar2,lVar5);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
    uVar2 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_SIDE");
    FUN_00f048e0(auStack_78,uVar2,*(undefined1 *)(param_1 + 0x3c));
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_78,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc3e88(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_HUD_HIDE_TALENT_TOOLTIP");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  uVar2 = FUN_00f048a4("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP_SIDE");
  FUN_00f048e0(auStack_68,uVar2,*(undefined1 *)(param_1 + 0x3c));
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_68,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc3f24(long param_1,short param_2)

{
  *(undefined1 *)(param_1 + 0x152) = *(undefined1 *)(param_1 + 0x152);
  *(ushort *)(param_1 + 0x150) = *(ushort *)(param_1 + 0x150) & 0x7fff | param_2 << 0xf;
  return;
}




void FUN_00bc3f44(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_00f048a4("EVENT_CLEAR_REPORT");
    FUN_00bc2228(param_1);
    uVar3 = FUN_00cec840();
  }
  else {
    uVar2 = FUN_00f048a4("EVENT_SELECT_THUMBS_UP");
    uVar3 = FUN_00bc2228(param_1);
    uVar3 = uVar3 & 0xffffffff;
  }
  FUN_00f048e0(auStack_58,uVar2,uVar3);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc3ff0(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_00f048a4("EVENT_CLEAR_REPORT");
    FUN_00bc2228(param_1);
    uVar4 = FUN_00cec840();
  }
  else {
    uVar2 = FUN_00f048a4("EVENT_SELECT_THUMBS_DOWN");
    lVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18));
    uVar4 = (ulong)*(uint *)(lVar3 + 0x260);
  }
  FUN_00f048e0(auStack_58,uVar2,uVar4);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

