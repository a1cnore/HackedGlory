// functions/00cb6 — 39 functions
#include "libGameKindred.h"




void FUN_00cb6178(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    FUN_00cb59f4();
    return;
  }
  FUN_00cb5d20();
  return;
}




void FUN_00cb6184(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6b698(param_2,param_3 & 1);
  FUN_00e6a8a8(auStack_68,"MENU_LOCALIZED_HOUR_%d",uVar2);
  uVar3 = FUN_00e6ce7c(auStack_68,0);
  thunk_FUN_00e7051c(param_1,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb61fc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(param_1);
  iVar5 = (int)((float)param_2 / 86400.0);
  if (iVar5 < 0x1f) {
    if (iVar5 < 0xe) {
      if (iVar5 < 4) {
        if (param_2 < 0x3f481) {
          uVar2 = FUN_00e6ce7c("MENU_GENERIC_REMAINING_COUNTDOWN",0);
          thunk_FUN_00e7051c(&local_48,uVar2);
          FUN_00e705c8(&local_58,"[TIME]");
          FUN_00e705c8(&local_68,
                       "[NUMBER_DAYS][TIME_UNIT_DAYS][NUMBER_HOURS][TIME_UNIT_HOURS][NUMBER_MINUTES][TIME_UNIT_MINUTES][NUMBER_SECONDS][TIME_UNIT_SECONDS]"
                      );
          FUN_00e71248(&local_48,0,&local_58,&local_68);
          if (local_60 != (void *)0x0) {
            operator_delete__(local_60);
            local_68 = 0;
            local_60 = (void *)0x0;
          }
          if (local_50 != (void *)0x0) {
            operator_delete__(local_50);
            local_58 = 0;
            local_50 = (void *)0x0;
          }
          FUN_00910394(param_1,&local_48);
        }
        else {
          uVar2 = FUN_00e6ce7c("MENU_GENERIC_X_HOURS_REMAINING",0);
          FUN_00910394(param_1,uVar2);
          FUN_00e70510(&local_48);
          FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2 / 0xe10 & 0xffffffff);
          FUN_00e705c8(&local_58,"[AMOUNT]");
          FUN_00e71248(param_1,0,&local_58,&local_48);
          if (local_50 != (void *)0x0) {
            operator_delete__(local_50);
            local_58 = 0;
            local_50 = (void *)0x0;
          }
        }
        if (local_40 != (void *)0x0) {
          operator_delete__(local_40);
          local_48 = 0;
          local_40 = (void *)0x0;
        }
        goto LAB_00cb62f0;
      }
      uVar2 = FUN_00e6ce7c("MENU_GENERIC_X_DAYS_REMAINING",0);
      pcVar3 = "MENU_GENERIC_1_DAY_REMAINING";
    }
    else {
      iVar5 = (int)((float)iVar5 / 7.0);
      uVar2 = FUN_00e6ce7c("MENU_GENERIC_X_WEEKS_REMAINING",0);
      pcVar3 = "MENU_GENERIC_1_WEEK_REMAINING";
    }
  }
  else {
    iVar5 = (int)((float)iVar5 / 30.0);
    uVar2 = FUN_00e6ce7c("MENU_GENERIC_X_MONTHS_REMAINING",0);
    pcVar3 = "MENU_GENERIC_1_MONTH_REMAINING";
  }
  uVar4 = FUN_00e6ce7c(pcVar3,0);
  FUN_00cb338c(param_1,uVar2,uVar4,iVar5);
LAB_00cb62f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb6444(undefined8 param_1)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e705c8(&local_38,&DAT_01bc2565);
  FUN_00e705c8(&local_48,"{235,113,82,255}");
  FUN_00e713f0(param_1,0,&local_38,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"[/WP]");
  FUN_00e705c8(&local_48,&DAT_01bd12d3);
  FUN_00e713f0(param_1,0,&local_38,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,&DAT_01bc2560);
  FUN_00e705c8(&local_48,"{118,224,250,255}");
  FUN_00e713f0(param_1,0,&local_38,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"[/CP]");
  FUN_00e705c8(&local_48,&DAT_01bd12d3);
  FUN_00e713f0(param_1,0,&local_38,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,&DAT_01bc4d91);
  FUN_00e705c8(&local_48,"{64,255,0,255}");
  FUN_00e713f0(param_1,0,&local_38,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"[/HP]");
  FUN_00e705c8(&local_48,&DAT_01bd12d3);
  FUN_00e713f0(param_1,0,&local_38,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,&DAT_01b9db64);
  FUN_00e705c8(&local_48,"{255,170,45,255}");
  FUN_00e713f0(param_1,0,&local_38,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"[/EM]");
  FUN_00e705c8(&local_48,&DAT_01bd12d3);
  FUN_00e713f0(param_1,0,&local_38,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb6728(float param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2;
  FUN_00f0dad0(param_3,1);
  FUN_00f0d548(param_3);
  fVar2 = fVar1;
  while( true ) {
    if (param_1 < param_2) {
      return;
    }
    param_1 = param_1 + -20.0;
    if (param_1 <= param_2) {
      param_1 = param_2;
    }
    FUN_00f0dad0(param_1,param_3,1);
    FUN_00f0d548(param_3);
    if (fVar1 < fVar2) break;
    if (param_1 <= param_2) {
      return;
    }
  }
  FUN_00f0dad0(param_1 + 20.0,param_3,1);
  return;
}




undefined8 * FUN_00cb67d4(uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  if (param_1 < 0x1e) {
    uVar1 = (int)param_1 % 3;
  }
  if (uVar1 < 3) {
    puVar2 = (undefined8 *)FUN_00e6ce7c((&PTR_s_SKILL_SUBTIER_BRONZE_02809610)[(int)uVar1],0);
    return puVar2;
  }
  return &DAT_03210450;
}




undefined * FUN_00cb6834(char param_1)

{
  if ((byte)(param_1 - 1U) < 8) {
    return (&PTR_s_Shift_02809630)[(char)(param_1 - 1U)];
  }
  return &DAT_01e277f2;
}




undefined8 FUN_00cb6864(int param_1)

{
  if (param_1 < 0x50) {
    if (param_1 - 0x4cU < 2) {
      return 1;
    }
    if (param_1 - 0x4eU < 2) {
      return 4;
    }
  }
  else {
    if (param_1 - 0x50U < 2) {
      return 2;
    }
    if (param_1 == 0x68) {
      return 8;
    }
  }
  return 0;
}




long FUN_00cb68c0(char *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strcmp(param_1,"Alt");
  if (iVar1 == 0) {
    lVar2 = 2;
  }
  else {
    iVar1 = strcmp(param_1,"Shift");
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = strcmp(param_1,"Control");
      if (iVar1 == 0) {
        lVar2 = 4;
      }
      else {
        iVar1 = strcmp(param_1,"Command");
        lVar2 = (ulong)(iVar1 == 0) << 3;
      }
    }
  }
  return lVar2;
}




void FUN_00cb6948(numpunct_byname<char> *param_1)

{
  std::__ndk1::numpunct_byname<char>::~numpunct_byname(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00cb696c(void)

{
  return 0x2c;
}




void FUN_00cb6974(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0x302;
  *(undefined1 *)((long)param_1 + 2) = 0;
  return;
}




void FUN_00cb698c(void)

{
  return;
}




void FUN_00cb6990(void)

{
  FUN_00cedce4();
  FUN_00d9e390();
  return;
}




void FUN_00cb69a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009cbc5c(*param_1);
  FUN_00d6edb8(uVar1,param_2);
  return;
}




void FUN_00cb69d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009cbc5c(*param_1);
  FUN_00d6edc8(uVar1,param_2);
  return;
}




void FUN_00cb69f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009cbc5c(*param_1);
  FUN_00d9facc(uVar1,param_2,param_3);
  return;
}




void FUN_00cb6a28(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009cbc5c(*param_1);
  FUN_00d9fb34(uVar1,param_2,param_3);
  return;
}




long FUN_00cb6a58(long *param_1)

{
  return *param_1 + 0x68;
}




void FUN_00cb6a64(void)

{
  FUN_00cedce4();
  FUN_00d9e390();
  return;
}




void FUN_00cb6a78(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = FUN_01985d44(param_1,DAT_02c7eb40);
  FUN_009cbb44(lVar1,param_1,*(undefined8 *)(param_2 + 8));
  if (param_3 != (long *)0x0) {
    *param_3 = lVar1 + 0x68;
  }
  return;
}




void FUN_00cb6acc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    FUN_00d55794(lVar1,param_3,0);
    return;
  }
  *(undefined4 *)(param_3 + 1) = DAT_03218f38;
  *param_3 = DAT_03218f30;
  return;
}




void FUN_00cb6b20(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    FUN_00d58198(lVar1,param_3);
    return;
  }
  param_3[1] = 0;
  *param_3 = 0x3f800000;
  param_3[3] = 0;
  param_3[2] = 0x3f80000000000000;
  param_3[5] = 0x3f800000;
  param_3[4] = 0;
  param_3[7] = 0x3f80000000000000;
  param_3[6] = 0;
  return;
}




void FUN_00cb6b80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_00d9da38(0x7f7fffff,lVar1,0);
  }
  *param_3 = uVar2;
  return;
}




void FUN_00cb6bc0(undefined8 param_1,undefined8 param_2)

{
  FUN_00cb6b80(param_1,param_2,param_2);
  return;
}




void FUN_00cb6bc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cb6b80(param_1,param_2,&local_30);
  if (local_30 == 0) {
    *(undefined4 *)(param_3 + 1) = DAT_03218f38;
    *param_3 = DAT_03218f30;
  }
  else {
    FUN_00d55794(local_30,param_3,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb6c44(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_2;
  uVar2 = FUN_009cbc5c(*param_1);
  uVar3 = FUN_00d9fb34(uVar2,local_30,param_3);
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(param_3 + 1) = DAT_03218f38;
    *param_3 = DAT_03218f30;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb6cbc(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_2;
  uVar2 = FUN_009cbc5c(*param_1);
  uVar3 = FUN_00d9fc50(uVar2,local_30,param_3);
  if ((uVar3 & 1) == 0) {
    param_3[1] = 0;
    *param_3 = 0x3f800000;
    param_3[3] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[5] = 0x3f800000;
    param_3[4] = 0;
    param_3[7] = 0x3f80000000000000;
    param_3[6] = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00cb6d44(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  FUN_00cedce4();
  lVar3 = FUN_00d9e390();
  if (lVar3 == 0) {
    return 4;
  }
  lVar4 = *(long *)(lVar3 + 0x18);
  while( true ) {
    if (lVar4 == 0) {
      return 4;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_03133530) break;
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  lVar5 = *(long *)(lVar3 + 0x38);
  iVar1 = FUN_00d787b0();
  lVar4 = *(long *)(lVar3 + 0x40);
  lVar3 = *(long *)(lVar3 + 0x18);
  fVar7 = (*(float *)(lVar4 + 0x240) + 1.0) *
          (*(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0))
  ;
  if (DAT_0313d950 <= fVar7) {
    fVar7 = DAT_0313d950;
  }
  fVar8 = DAT_0313d890;
  if (DAT_0313d890 <= fVar7) {
    fVar8 = fVar7;
  }
  if (lVar3 != 0) {
    uVar6 = (uint)fVar8;
    do {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02e3ef78) {
        if ((iVar1 == -1) || (uVar2 = FUN_00d54944(lVar3,iVar1), uVar6 < uVar2)) {
          uVar2 = FUN_00d54944(lVar3,*(undefined4 *)(lVar5 + 0xd8));
          if (uVar6 < uVar2) {
            uVar2 = FUN_00d54944(lVar3,*(undefined4 *)(lVar5 + 0xd4));
            if (uVar6 < uVar2) {
              uVar2 = FUN_00d54944(lVar3,*(undefined4 *)(lVar5 + 0xd0));
              if (uVar6 < uVar2) {
                return 4;
              }
              iVar1 = *(int *)(lVar5 + 0xd0);
              if (iVar1 < 0) {
                return 4;
              }
              goto LAB_00cb6e98;
            }
            iVar1 = *(int *)(lVar5 + 0xd4);
          }
          else {
            iVar1 = *(int *)(lVar5 + 0xd8);
          }
        }
        break;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
    } while (lVar3 != 0);
  }
  if (-1 < iVar1) {
LAB_00cb6e98:
    if (iVar1 != *(int *)(lVar5 + 0xd0)) {
      if (iVar1 == *(int *)(lVar5 + 0xd4)) {
        return 5;
      }
      if (iVar1 != *(int *)(lVar5 + 0xd8)) {
        return 4;
      }
      return 6;
    }
  }
  return 4;
}




undefined4 thunk_FUN_00cb6d44(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  FUN_00cedce4();
  lVar3 = FUN_00d9e390();
  if (lVar3 == 0) {
    return 4;
  }
  lVar4 = *(long *)(lVar3 + 0x18);
  while( true ) {
    if (lVar4 == 0) {
      return 4;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_03133530) break;
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  lVar5 = *(long *)(lVar3 + 0x38);
  iVar1 = FUN_00d787b0();
  lVar4 = *(long *)(lVar3 + 0x40);
  lVar3 = *(long *)(lVar3 + 0x18);
  fVar7 = (*(float *)(lVar4 + 0x240) + 1.0) *
          (*(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0))
  ;
  if (DAT_0313d950 <= fVar7) {
    fVar7 = DAT_0313d950;
  }
  fVar8 = DAT_0313d890;
  if (DAT_0313d890 <= fVar7) {
    fVar8 = fVar7;
  }
  if (lVar3 != 0) {
    uVar6 = (uint)fVar8;
    do {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02e3ef78) {
        if ((iVar1 == -1) || (uVar2 = FUN_00d54944(lVar3,iVar1), uVar6 < uVar2)) {
          uVar2 = FUN_00d54944(lVar3,*(undefined4 *)(lVar5 + 0xd8));
          if (uVar6 < uVar2) {
            uVar2 = FUN_00d54944(lVar3,*(undefined4 *)(lVar5 + 0xd4));
            if (uVar6 < uVar2) {
              uVar2 = FUN_00d54944(lVar3,*(undefined4 *)(lVar5 + 0xd0));
              if (uVar6 < uVar2) {
                return 4;
              }
              iVar1 = *(int *)(lVar5 + 0xd0);
              if (iVar1 < 0) {
                return 4;
              }
              goto LAB_00cb6e98;
            }
            iVar1 = *(int *)(lVar5 + 0xd4);
          }
          else {
            iVar1 = *(int *)(lVar5 + 0xd8);
          }
        }
        break;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
    } while (lVar3 != 0);
  }
  if (-1 < iVar1) {
LAB_00cb6e98:
    if (iVar1 != *(int *)(lVar5 + 0xd0)) {
      if (iVar1 == *(int *)(lVar5 + 0xd4)) {
        return 5;
      }
      if (iVar1 != *(int *)(lVar5 + 0xd8)) {
        return 4;
      }
      return 6;
    }
  }
  return 4;
}




void FUN_00cb6ee8(void)

{
  return;
}




void FUN_00cb6eec(void)

{
  return;
}




void FUN_00cb6ef0(void)

{
  return;
}




void FUN_00cb6ef4(void)

{
  return;
}




void FUN_00cb6ef8(void)

{
  return;
}




void FUN_00cb6efc(void)

{
  return;
}




void FUN_00cb6f00(void)

{
  return;
}




void FUN_00cb6f04(long param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if (((uVar1 == 0x1f) || (2 < *(ushort *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
     ((*(byte *)(param_1 + 0x2f8) >> 1 & 1) == 0)) {
    for (lVar3 = *(long *)(param_1 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02e3ef58) {
        local_30 = *param_2;
        uStack_2c = param_2[2];
        FUN_00a10c84(auStack_48);
        FUN_00a10b44(auStack_48,&local_30,param_1);
        break;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb6fcc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x18);
  do {
    if (lVar3 == 0) {
LAB_00cb7034:
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02e3ef58) {
      uVar2 = FUN_00a11244(lVar3);
      if ((uVar2 & 1) != 0) {
        FUN_00a10c84(auStack_40,lVar3);
        FUN_00a10b2c(auStack_40);
      }
      goto LAB_00cb7034;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}

