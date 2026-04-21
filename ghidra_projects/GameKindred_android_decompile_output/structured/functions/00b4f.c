// functions/00b4f — 7 functions
#include "libGameKindred.h"




void FUN_00b4f678(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = FUN_00b50150(param_5);
  fVar3 = (float)NEON_fminnm(uVar2,0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"icon_achievement_prg_filled");
  FUN_00cb8428(*param_2,param_2[1],fVar3,0,0,param_1,param_2,uVar1,param_3,param_4);
  return;
}




void FUN_00b4f704(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027e2950;
  FUN_00b4f9d8();
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(local_60,"lowPriorityQueueInfo");
  FUN_009badcc(uVar2,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((*(byte *)(param_1 + 0x69c) & 1) != 0) {
    operator_delete((void *)param_1[0x69e]);
  }
  if ((void *)param_1[0x69b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x69b]);
    param_1[0x69b] = 0;
    param_1[0x69a] = 0;
  }
  FUN_009c7fa8(param_1 + 0x3e2);
  FUN_00f0d3a4(param_1 + 0x3bc);
  FUN_00f0d3a4(param_1 + 0x396);
  FUN_00f0d3a4(param_1 + 0x370);
  FUN_00f0d3a4(param_1 + 0x34a);
  FUN_00f0d3a4(param_1 + 0x324);
  FUN_00f0d3a4(param_1 + 0x2fe);
  param_1[0x2de] = &PTR_FUN_028266f0;
  param_1[0x2f5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2f8);
  FUN_00f13d08(param_1 + 0x2de);
  param_1[0x2c0] = &PTR_FUN_028266f0;
  param_1[0x2d7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2da);
  FUN_00f13d08(param_1 + 0x2c0);
  FUN_00f01868(param_1 + 0x2af);
  if ((void *)param_1[0x2ae] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2ae]);
    param_1[0x2ae] = 0;
    param_1[0x2ad] = 0;
  }
  FUN_00f01868(param_1 + 0x29c);
  param_1[0x278] = &PTR_FUN_028266f0;
  param_1[0x28f] = &PTR_FUN_02826850;
  param_1[0x1dd] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x292);
  FUN_00f13d08(param_1 + 0x278);
  param_1[0x25a] = &PTR_FUN_028266f0;
  param_1[0x271] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x274);
  FUN_00f13d08(param_1 + 0x25a);
  param_1[0x23c] = &PTR_FUN_028266f0;
  param_1[0x253] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x256);
  FUN_00f13d08(param_1 + 0x23c);
  FUN_00f01868(param_1 + 0x22b);
  FUN_009c825c(param_1 + 0x1dd);
  FUN_00f0d3a4(param_1 + 0x1b7);
  param_1[0x199] = &PTR_FUN_028266f0;
  param_1[0x1b0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b3);
  FUN_00f13d08(param_1 + 0x199);
  FUN_00ed00e0(param_1 + 0xf2);
  FUN_00f13d08(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_028266f0;
  param_1[0xb7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xba);
  FUN_00f13d08(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4f9d8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x1568);
  if (*(uint *)(param_1 + 0x1568) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x1570) + lVar4) != 0) {
        uVar2 = FUN_00f02540();
        if ((uVar2 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x1570) + lVar4),1);
        }
        plVar1 = *(long **)(*(long *)(param_1 + 0x1570) + lVar4);
        if (plVar1 == (long *)0x0) {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1570) + uVar5 * 8);
        }
        else {
          (**(code **)(*plVar1 + 8))();
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1570) + lVar4);
        }
        *puVar3 = 0;
        uVar2 = (ulong)*(uint *)(param_1 + 0x1568);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x1570) != 0) {
    *(undefined4 *)(param_1 + 0x1568) = 0;
  }
  return;
}




void FUN_00b4fa7c(void *param_1)

{
  FUN_00b4f704();
  operator_delete(param_1);
  return;
}




void FUN_00b4faa0(long *param_1,int param_2,long param_3,int param_4,int param_5,byte *param_6)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  byte *__s2;
  byte *pbVar10;
  float fVar11;
  undefined8 local_a8;
  void *local_a0;
  long *local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (((((int)param_1[0x6a4] == param_2) && (param_1[0x6a3] == param_3)) &&
      (*(int *)((long)param_1 + 0x3524) == param_4)) && ((int)param_1[0x6a5] == param_5))
  goto LAB_00b4fef4;
  FUN_00b4f9d8(param_1);
  *(int *)(param_1 + 0x6a4) = param_2;
  param_1[0x6a3] = param_3;
  lVar6 = FUN_00e85318(0);
  *(int *)((long)param_1 + 0x3524) = param_4;
  *(int *)(param_1 + 0x6a5) = param_5;
  param_1[0x6a2] = param_3 - lVar6 & (param_3 - lVar6 >> 0x3f ^ 0xffffffffffffffffU);
  bVar2 = *param_6;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_6 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar10 = *(byte **)(param_6 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar10 = param_6 + 1;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(bVar2 >> 1);
        pbVar10 = param_6;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *__s2) goto LAB_00b4fbd0;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar10,__s2,__n), iVar4 != 0)) goto LAB_00b4fbd0;
    *(uint *)((long)param_1 + 0x1d34) = *(uint *)((long)param_1 + 0x1d34) & 0xfffffffb;
  }
  else {
LAB_00b4fbd0:
    FUN_00e705c8(&local_88,"([PLAYER_NAME])");
    FUN_00e705c8(&local_98,"[PLAYER_NAME]");
    pbVar10 = param_6 + 1;
    if ((*param_6 & 1) != 0) {
      pbVar10 = *(byte **)(param_6 + 0x10);
    }
    FUN_00e705c8(&local_a8,pbVar10);
    FUN_00e71248(&local_88,0,&local_98,&local_a8);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
      local_a8 = 0;
      local_a0 = (void *)0x0;
    }
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = (long *)0x0;
      local_90 = (void *)0x0;
    }
    FUN_00f0d75c(param_1 + 0x396,&local_88);
    *(uint *)((long)param_1 + 0x1d34) = *(uint *)((long)param_1 + 0x1d34) | 4;
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    param_5 = (int)param_1[0x6a5];
  }
  if (0 < param_5) {
    iVar4 = 0;
    do {
      plVar7 = operator_new(0x268);
      FUN_00b4e83c();
      local_98 = plVar7;
      FUN_00b4ff2c(param_1 + 0x2ad,&local_98);
      FUN_00f023ec(param_1 + 0x29c,local_98,1);
      plVar7 = local_98;
      FUN_00f0e670(local_98 + 0x11,&DAT_01bee802,2);
      FUN_00f0e670(plVar7 + 0x2f,&DAT_01bee802,2);
      plVar7 = local_98;
      *(uint *)((long)local_98 + 0x1fc) =
           *(uint *)((long)local_98 + 0x1fc) & 0xfffffff8 |
           *(uint *)((long)local_98 + 0x1fc) & 3 |
           (uint)((int)param_1[0x6a5] - *(int *)((long)param_1 + 0x3524) <= iVar4) << 2;
      fVar11 = (float)(**(code **)(*local_98 + 0x58))(local_98,0,0,1,1);
      fVar11 = (fVar11 + 10.0) * (((float)iVar4 - (float)(int)param_1[0x6a5] * 0.5) + 0.5);
      if ((*(float *)(plVar7 + 8) != fVar11) || (*(float *)((long)plVar7 + 0x44) != 0.0)) {
        *(float *)(plVar7 + 8) = fVar11;
        *(undefined4 *)((long)plVar7 + 0x44) = 0;
        FUN_0091ada4(plVar7);
      }
      local_88 = 0x3f0000003f000000;
      (**(code **)(*plVar7 + 0x28))(plVar7,&local_88);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[0x6a5]);
  }
  switch((int)param_1[0x6a4]) {
  case 2:
    pcVar8 = "MENU_LPQ_NOTIFICATION_DESCRIPTION_2";
    break;
  case 3:
    pcVar8 = "MENU_LPQ_NOTIFICATION_DESCRIPTION_3";
    break;
  case 4:
    pcVar8 = "MENU_LPQ_NOTIFICATION_DESCRIPTION_4";
    break;
  case 5:
    pcVar8 = "MENU_LPQ_NOTIFICATION_DESCRIPTION_5";
    break;
  case 6:
    pcVar8 = "MENU_LPQ_NOTIFICATION_DESCRIPTION_6";
    break;
  case 7:
    pcVar8 = "MENU_LPQ_NOTIFICATION_DESCRIPTION_7";
    break;
  case 8:
    pcVar8 = "MENU_LPQ_NOTIFICATION_DESCRIPTION_8";
    break;
  case 9:
    pcVar8 = "MENU_LPQ_NOTIFICATION_DESCRIPTION_9";
    break;
  default:
    pcVar8 = "MENU_LPQ_NOTIFICATION_DESCRIPTION_1";
  }
  uVar9 = FUN_00e6ce7c(pcVar8,0);
  FUN_00f0d75c(param_1 + 0x34a,uVar9);
  (**(code **)(*param_1 + 0x150))(param_1);
  FUN_00e70570(&local_88,param_6);
  FUN_009580b8();
  uVar9 = FUN_0095fdf0();
  uVar5 = FUN_00e70b34(uVar9,&local_88);
  FUN_0090c240((int)param_1[0x6a4],uVar5 & 1);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
LAB_00b4fef4:
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b4ff2c(uint *param_1,undefined8 *param_2)

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
    FUN_00b51068(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b4ffb4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x3518);
  if (0 < lVar5) {
    lVar2 = FUN_00e85318(0);
    if (lVar5 < lVar2) {
      *(undefined8 *)(param_1 + 0x3518) = 0xffffffffffffffff;
      FUN_00b500b8(param_1);
      FUN_0090c400(*(undefined4 *)(param_1 + 0x3520));
      goto LAB_00b50090;
    }
    lVar5 = *(long *)(param_1 + 0x3518);
  }
  lVar2 = FUN_00e85318(0);
  if (lVar2 < lVar5) {
    lVar2 = *(long *)(param_1 + 0x3518);
    lVar5 = FUN_00e85318(0);
    uVar3 = lVar2 - lVar5;
    uVar4 = uVar3 & 0xffffffff;
    if ((int)uVar3 < 1) {
      uVar4 = 0;
    }
    FUN_00cb6178(&local_48,param_1 + 0x34d0,uVar4,1);
  }
  else {
    FUN_00e705c8(&local_48,&DAT_01bb47fe);
  }
  FUN_00f0d75c(param_1 + 0x17f0,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
LAB_00b50090:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

