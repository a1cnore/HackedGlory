// functions/00c4e — 24 functions
#include "libGameKindred.h"




void FUN_00c4e038(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined2 local_50 [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar5 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fd788;
  FUN_00c4cf8c(plVar5);
  plVar1 = param_1 + 0x496;
  FUN_00c4c668(plVar1);
  plVar2 = param_1 + 0x580;
  FUN_00c4cf8c(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar4 = (long *)FUN_00f13624();
  FUN_00f13fd8(param_1,plVar4);
  (**(code **)(*plVar4 + 0x58))(plVar4,plVar5);
  (**(code **)(*plVar4 + 0x58))(plVar4,plVar1);
  (**(code **)(*plVar4 + 0x58))(plVar4,plVar2);
  local_50[0] = 0x10;
  FUN_00f14070(param_1,local_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00c4e178(long param_1)

{
  return param_1 + 0xb8;
}




long FUN_00c4e180(long param_1)

{
  return param_1 + 0x24b0;
}




long FUN_00c4e18c(long param_1)

{
  return param_1 + 0x2c00;
}




void FUN_00c4e198(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 local_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar5 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fd108;
  FUN_00f0e4a8(plVar5);
  plVar1 = param_1 + 0x35;
  FUN_00c4ddd8(plVar1);
  plVar2 = param_1 + 0xdc;
  FUN_00ed66ec(plVar2);
  FUN_00f0e4a8(param_1 + 0x221);
  *(undefined1 *)(param_1 + 0x245) = 0;
  param_1[0x244] = 0;
  param_1[0x243] = 0;
  param_1[0x242] = 0;
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  param_1[0x23f] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar5,&DAT_0313bb04,2);
  local_50[0] = 9;
  FUN_00ed5ab0(plVar2,local_50);
  uVar4 = FUN_00f136e0();
  FUN_00ed59f4(plVar2,uVar4);
  uVar4 = FUN_00f136e0();
  FUN_00f13fd8(param_1,uVar4);
  FUN_00f1515c(uVar4,plVar1,0,2);
  FUN_00f1515c(uVar4,plVar2,1,2);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4e32c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f13db0();
  FUN_00f13f08(param_1,param_2,param_3 + 0x17);
  FUN_00f13f08(param_1,0x43480000,param_3 + 0x221);
  uVar2 = 0;
  FUN_00f07a18(0,param_3 + 0x221,3);
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = uVar2;
  FUN_00f13f18(param_3 + 0x17,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4e3f0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00ed5aa8(param_1 + 0x6e0);
  lVar1 = *(long *)(lVar1 + 0x28);
  if (lVar1 != 0) {
    FUN_00f07b18(0xc1a00000,param_1 + 0x350,1,lVar1 + 0xb8,1);
    FUN_00f07b18(0,param_1 + 0x480,4,lVar1 + 0x24b0,4);
    FUN_00f07b18(0x41a00000,param_1 + 0x5b0,3,lVar1 + 0x2c00,3);
    return;
  }
  return;
}




void FUN_00c4e474(long *param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (0 < param_3) {
    plVar1 = (long *)(param_4 + 8);
    plVar2 = (long *)(param_5 + 8);
    iVar9 = 1;
    do {
      pvVar6 = operator_new(0x4ff8);
      FUN_00c4e038();
      *(uint *)((long)pvVar6 + 0x84) = *(uint *)((long)pvVar6 + 0x84) | 0x20;
      local_70 = (long)pvVar6 + 0xb8;
      FUN_00c4e708(param_1 + 0x23f,&local_70);
      local_70 = (long)pvVar6 + 0x24b0;
      FUN_00c4e790(param_1 + 0x241,&local_70);
      local_70 = (long)pvVar6 + 0x2c00;
      FUN_00c4e708(param_1 + 0x243,&local_70);
      FUN_00c4c7c4((long)pvVar6 + 0x24b0,iVar9);
      plVar8 = (long *)*plVar1;
      plVar7 = plVar1;
      if (plVar8 == (long *)0x0) {
LAB_00c4e598:
        plVar8 = (long *)0x0;
      }
      else {
        do {
          if (iVar9 <= (int)plVar8[4]) {
            plVar7 = plVar8;
          }
          plVar8 = (long *)plVar8[(int)plVar8[4] < iVar9];
        } while (plVar8 != (long *)0x0);
        if (plVar7 == plVar1) goto LAB_00c4e598;
        plVar8 = (long *)0x0;
        if ((int)plVar7[4] <= iVar9) {
          plVar8 = plVar7 + 5;
        }
      }
      FUN_00c4d8d8((long)pvVar6 + 0xb8,plVar8,param_2,iVar9,1);
      plVar8 = (long *)*plVar2;
      plVar7 = plVar2;
      if (plVar8 == (long *)0x0) {
LAB_00c4e5f4:
        plVar8 = (long *)0x0;
      }
      else {
        do {
          if (iVar9 <= (int)plVar8[4]) {
            plVar7 = plVar8;
          }
          plVar8 = (long *)plVar8[(int)plVar8[4] < iVar9];
        } while (plVar8 != (long *)0x0);
        if (plVar7 == plVar2) goto LAB_00c4e5f4;
        plVar8 = (long *)0x0;
        if ((int)plVar7[4] <= iVar9) {
          plVar8 = plVar7 + 5;
        }
      }
      FUN_00c4d8d8((long)pvVar6 + 0x2c00,plVar8,param_2,iVar9,0);
      FUN_00ed5664(param_1 + 0xdc,pvVar6,1);
      plVar7 = (long *)FUN_00ed59fc(param_1 + 0xdc);
      (**(code **)(*plVar7 + 0x58))(plVar7,pvVar6);
      bVar5 = iVar9 != param_3;
      iVar9 = iVar9 + 1;
    } while (bVar5);
  }
  plVar1 = param_1 + 0x221;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0x23c) = *(byte *)(param_1 + 0x23c) | 2;
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_1 + 0x118c);
  if ((uVar3 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x118c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x3300;
    FUN_0091ada4(plVar1);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c4e708(uint *param_1,undefined8 *param_2)

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
    FUN_00c509d8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c4e790(uint *param_1,undefined8 *param_2)

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
    FUN_00c50a58(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c4e818(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ed5688(param_1 + 0x6e0);
  fVar3 = 0.0;
  if (((0 < (int)param_2) && (param_2 <= *(uint *)(param_1 + 0x1218))) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x1220) + (ulong)(param_2 - 1) * 8), lVar2 != 0)) {
    fVar3 = *(float *)(*(long *)(lVar2 + 0x20) + 0x44);
  }
  if (*(char *)(param_1 + 0x1228) == '\0') {
    local_3c = -fVar3;
    local_40 = 0;
    FUN_00ed5a14(param_1 + 0x6e0,&local_40);
  }
  *(char *)(param_1 + 0x1228) = '\x01';
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00c4e8d0(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  
  puVar1 = (uint *)(param_1 + 0x11f8);
  if ((param_3 & 1) == 0) {
    puVar1 = (uint *)(param_1 + 0x1218);
  }
  if (0 < (int)param_2) {
    uVar2 = 0;
    if (param_2 <= *puVar1) {
      uVar2 = *(undefined8 *)(*(long *)(puVar1 + 2) + (ulong)(param_2 - 1) * 8);
    }
    return uVar2;
  }
  return 0;
}




undefined8 FUN_00c4e914(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (0 < (int)param_2) {
    uVar1 = 0;
    if (param_2 <= *(uint *)(param_1 + 0x1208)) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x1210) + (ulong)(param_2 - 1) * 8);
    }
    return uVar1;
  }
  return 0;
}




void FUN_00c4e944(long *param_1)

{
  long *plVar1;
  
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027fd250;
  FUN_00ca2b40(param_1 + 0x17,0);
  plVar1 = param_1 + 0x9f;
  FUN_00b1571c(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x17,1);
  FUN_00b12b64(0x3f800000,plVar1,&DAT_0313bb1c);
  return;
}




void FUN_00c4e9d0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_00b1574c(param_1,0x42480000,0x40800000,param_2 + 0x4f8);
  FUN_00f13f08((float)param_1 + -8.0,0x42280000,param_2 + 0xb8);
  if ((*(float *)(param_2 + 0xf8) == 4.0) && (*(float *)(param_2 + 0xfc) == 4.0)) {
    return;
  }
  uVar1 = NEON_fmov(0x40800000,4);
  *(undefined8 *)(param_2 + 0xf8) = uVar1;
  FUN_0091ada4(param_2 + 0xb8);
  return;
}




void FUN_00c4ea60(long param_1,int param_2,int param_3,int param_4)

{
  FUN_00ca2d44((float)(param_4 - param_2) / (float)(param_3 - param_2),param_1 + 0xb8);
  return;
}




void FUN_00c4ea7c(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027fd398;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}




void FUN_00c4eab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fd398;
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c4eaf0(void *param_1)

{
  FUN_00c4eab0();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00c4eb18(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = *(int *)(param_1 + 0xb8) - 1;
  if (-1 < (int)uVar3) {
    iVar4 = 4 - *(int *)(param_1 + 0xb8);
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)uVar3 * 8);
      if (lVar1 == 0) goto switchD_00c4ebd8_default;
      iVar2 = iVar4;
      switch(*(undefined4 *)(param_1 + 0xb8)) {
      case 1:
switchD_00c4ebd8_caseD_1:
        uVar5 = 0;
        uVar6 = 0;
        iVar2 = 0;
        break;
      case 2:
        uVar5 = *(undefined4 *)(&DAT_01bbd768 + (ulong)(iVar4 == 3) * 4);
        uVar6 = 0;
        break;
      case 3:
        if (iVar4 == 1) goto switchD_00c4ebd8_caseD_1;
        if (uVar3 < 2) {
          if ((*(float *)(lVar1 + 0x48) == 0.6) && (*(float *)(lVar1 + 0x4c) == 0.6)) {
            iVar2 = 3;
          }
          else {
            *(undefined8 *)(lVar1 + 0x48) = 0x3f19999a3f19999a;
            FUN_0091ada4();
            iVar2 = *(int *)(param_1 + 0xb8);
            lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)uVar3 * 8);
          }
          uVar5 = *(undefined4 *)(&DAT_01bbd760 + (ulong)(iVar4 == 2) * 4);
          uVar6 = 0;
          iVar2 = iVar4 + iVar2 + -2;
          break;
        }
        goto switchD_00c4ebd8_default;
      case 4:
        if ((uVar3 | 1) == 3) {
          uVar5 = *(undefined4 *)(&DAT_01bbd758 + (ulong)(iVar4 == 1) * 4);
          uVar6 = 0x42200000;
        }
        else {
          if (1 < uVar3) goto switchD_00c4ebd8_default;
          if ((*(float *)(lVar1 + 0x48) == 0.6) && (*(float *)(lVar1 + 0x4c) == 0.6)) {
            iVar2 = 4;
          }
          else {
            *(undefined8 *)(lVar1 + 0x48) = 0x3f19999a3f19999a;
            FUN_0091ada4();
            iVar2 = *(int *)(param_1 + 0xb8);
            lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)uVar3 * 8);
          }
          uVar5 = *(undefined4 *)(&DAT_01bbd750 + (ulong)(iVar4 == 3) * 4);
          uVar6 = 0xc3200000;
          iVar2 = iVar4 + iVar2 + -2;
        }
        break;
      default:
        goto switchD_00c4ebd8_default;
      }
      FUN_00c4ca40(uVar5,uVar6,lVar1,iVar2);
switchD_00c4ebd8_default:
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + 1;
    } while (-1 < (int)uVar3);
  }
  return;
}




void FUN_00c4eb18(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = *(int *)(param_1 + 0xb8) - 1;
  if (-1 < (int)uVar3) {
    iVar4 = 4 - *(int *)(param_1 + 0xb8);
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)uVar3 * 8);
      if (lVar1 == 0) goto switchD_00c4ebd8_default;
      iVar2 = iVar4;
      switch(*(undefined4 *)(param_1 + 0xb8)) {
      case 1:
switchD_00c4ebd8_caseD_1:
        uVar5 = 0;
        uVar6 = 0;
        iVar2 = 0;
        break;
      case 2:
        uVar5 = *(undefined4 *)(&DAT_01bbd768 + (ulong)(iVar4 == 3) * 4);
        uVar6 = 0;
        break;
      case 3:
        if (iVar4 == 1) goto switchD_00c4ebd8_caseD_1;
        if (uVar3 < 2) {
          if ((*(float *)(lVar1 + 0x48) == 0.6) && (*(float *)(lVar1 + 0x4c) == 0.6)) {
            iVar2 = 3;
          }
          else {
            *(undefined8 *)(lVar1 + 0x48) = 0x3f19999a3f19999a;
            FUN_0091ada4();
            iVar2 = *(int *)(param_1 + 0xb8);
            lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)uVar3 * 8);
          }
          uVar5 = *(undefined4 *)(&DAT_01bbd760 + (ulong)(iVar4 == 2) * 4);
          uVar6 = 0;
          iVar2 = iVar4 + iVar2 + -2;
          break;
        }
        goto switchD_00c4ebd8_default;
      case 4:
        if ((uVar3 | 1) == 3) {
          uVar5 = *(undefined4 *)(&DAT_01bbd758 + (ulong)(iVar4 == 1) * 4);
          uVar6 = 0x42200000;
        }
        else {
          if (1 < uVar3) goto switchD_00c4ebd8_default;
          if ((*(float *)(lVar1 + 0x48) == 0.6) && (*(float *)(lVar1 + 0x4c) == 0.6)) {
            iVar2 = 4;
          }
          else {
            *(undefined8 *)(lVar1 + 0x48) = 0x3f19999a3f19999a;
            FUN_0091ada4();
            iVar2 = *(int *)(param_1 + 0xb8);
            lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)uVar3 * 8);
          }
          uVar5 = *(undefined4 *)(&DAT_01bbd750 + (ulong)(iVar4 == 3) * 4);
          uVar6 = 0xc3200000;
          iVar2 = iVar4 + iVar2 + -2;
        }
        break;
      default:
        goto switchD_00c4ebd8_default;
      }
      FUN_00c4ca40(uVar5,uVar6,lVar1,iVar2);
switchD_00c4ebd8_default:
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + 1;
    } while (-1 < (int)uVar3);
  }
  return;
}




void FUN_00c4ecfc(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(int *)(param_1 + 0xb8) - 1;
  uVar3 = (ulong)uVar2;
  if (-1 < (int)uVar2) {
    uVar4 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar3 << 3;
    do {
      FUN_00c4ccb0(*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar3 * 8));
      lVar1 = *(long *)(param_1 + 0xc0) + uVar4;
      FUN_00c50ad8((int *)(param_1 + 0xb8),lVar1,lVar1 + 8);
      uVar2 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar2;
      uVar4 = uVar4 - 8;
    } while (-1 < (int)uVar2);
  }
  return;
}




void FUN_00c4ed60(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00c4ecfc();
  if (*(int *)(param_2 + 0x60) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      plVar2 = (long *)FUN_00c508f0(param_1,1);
      local_70 = (long *)0x3f0000003f000000;
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_70);
      FUN_00c4c980(plVar2,*(long *)(param_2 + 0x68) + lVar3,0x208,0x208,1);
      FUN_00f13f08(0x44020000,0x44020000,plVar2);
      local_70 = plVar2;
      FUN_00c4db88(param_1 + 0xb8,&local_70);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x38;
    } while (uVar4 < *(uint *)(param_2 + 0x60));
  }
  FUN_00c4eb18(param_1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4ee68(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  long lVar17;
  float fVar18;
  code *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar13 = tpidr_el0;
  local_68 = *(long *)(lVar13 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fd4e0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0e4a8();
  plVar4 = param_1 + 0x71;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0x88;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0xae;
  FUN_00f13ca4();
  plVar7 = param_1 + 0xc5;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0xeb;
  FUN_00abaee8(plVar8,0);
  plVar9 = param_1 + 0x1aa;
  FUN_00c4e944(plVar9);
  plVar10 = param_1 + 0x2f6;
  FUN_00c4c28c(plVar10);
  FUN_00c4c4bc();
  plVar11 = param_1 + 0x398;
  FUN_00f13ca4(plVar11);
  param_1[0x398] = (long)&PTR_FUN_027fd398;
  *(undefined1 *)(param_1 + 0x3b1) = 0;
  param_1[0x3b0] = 0;
  param_1[0x3af] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,plVar8,1);
  FUN_00f023ec(plVar4,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x35a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar2,&DAT_0313bb1c,2);
  FUN_00f0e548(plVar3,"build://MenuHomepageCommon.atlas","battlepass_shield_large");
  if ((*(float *)(param_1 + 0x5c) != 1.0) || (*(float *)((long)param_1 + 0x2e4) != 1.0)) {
    lVar17 = NEON_fmov(0x3f800000,4);
    param_1[0x5c] = lVar17;
    FUN_0091ada4(plVar3);
  }
  uVar12 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar12 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0x31c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x1e80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d92c(plVar5,DAT_0313bb78,&DAT_01bee7fa);
  FUN_00e705c8(&local_98,"0");
  FUN_00f0d75c(plVar5,&local_98);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = (code *)0x0;
    local_90 = (void *)0x0;
  }
  FUN_00f0d92c(plVar7,DAT_0313bb80,&DAT_01bee7fa);
  uVar14 = FUN_00e6ce7c("MENU_BATTLE_PASS_DESC_BATTLE_PASS_LEVEL",0);
  FUN_00f0d75c(plVar7,uVar14);
  FUN_00f0d9b0(plVar7,0);
  FUN_00f0e578(param_1 + 0x186,"circle_button_question");
  FUN_00b09144(0xbf800000,plVar8);
  fVar18 = *(float *)(param_1 + 0xf4);
  if ((fVar18 != 0.6) || (fVar18 = *(float *)((long)param_1 + 0x7a4), fVar18 != 0.6)) {
    param_1[0xf4] = 0x3f19999a3f19999a;
    FUN_0091ada4(plVar8);
  }
  fVar16 = (float)FUN_00f0eaf4(param_1 + 0x14a);
  local_70 = DAT_03210c64;
  param_1[0xf6] =
       CONCAT44(fVar18 * (float)((ulong)param_1[0xf4] >> 0x20),fVar16 * (float)param_1[0xf4]);
  local_80 = 0;
  uStack_78 = 0;
  local_98 = thunk_FUN_00c4f6dc;
  local_88 = 0;
  local_90 = param_1;
  FUN_009693a0(param_1 + 0xec,&local_98);
  *(uint *)((long)param_1 + 0x1834) = *(uint *)((long)param_1 + 0x1834) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1b54) = *(uint *)((long)param_1 + 0x1b54) & 0xfffffffb;
  uVar14 = FUN_00f136e0();
  FUN_00f13fd8(plVar4,uVar14);
  FUN_00f15134(uVar14,plVar5);
  FUN_00f15134(uVar14,plVar6);
  FUN_00f15134(uVar14,plVar9);
  uVar14 = FUN_00f136e0();
  FUN_00f15198(uVar14,0x3c);
  FUN_00f15134(uVar14,plVar4);
  FUN_00f15198(uVar14,0x50);
  FUN_00f15134(uVar14,param_1 + 0x35a);
  FUN_00f15134(uVar14,plVar10);
  FUN_00f1521c(uVar14,0,1);
  FUN_00f1515c(uVar14,plVar11,2,2);
  FUN_00f15198(uVar14,0x28);
  uVar15 = FUN_00f13624();
  FUN_00f13fd8(param_1,uVar15);
  FUN_00f15198(uVar15,0x32);
  FUN_00f15480(uVar15,uVar14,0);
  FUN_00f15198(uVar15,0x32);
  if (*(long *)(lVar13 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

