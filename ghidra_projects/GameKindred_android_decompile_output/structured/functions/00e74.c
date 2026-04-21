// functions/00e74 — 29 functions
#include "libGameKindred.h"




void FUN_00e740f0(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e74104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 0xb0))();
    return;
  }
  return;
}




undefined8 FUN_00e7410c(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00e74114(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7411c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x548))();
  return;
}




void FUN_00e74120(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e74128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x550))();
  return;
}




void FUN_00e7412c(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*param_2 == 0) {
    thunk_FUN_00e7051c(param_1,&DAT_03210450);
  }
  else {
    uVar3 = (**(code **)(*(long *)param_2[1] + 0x520))();
    puVar4 = (undefined2 *)(**(code **)(*(long *)param_2[1] + 0x528))((long *)param_2[1],*param_2,0)
    ;
    iVar1 = uVar3 + 1;
    uVar6 = (long)iVar1 + (long)iVar1;
    if (CARRY8((long)iVar1,(long)iVar1)) {
      uVar6 = 0xffffffffffffffff;
    }
    puVar5 = operator_new__(uVar6);
    if (0 < (int)uVar3) {
      uVar6 = (ulong)uVar3;
      puVar7 = puVar4;
      puVar8 = puVar5;
      do {
        uVar6 = uVar6 - 1;
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar6 != 0);
    }
    puVar5[(int)uVar3] = 0;
    FUN_00e707d0(&local_58,puVar5);
    operator_delete__(puVar5);
    (**(code **)(*(long *)param_2[1] + 0x530))((long *)param_2[1],*param_2,puVar4);
    thunk_FUN_00e7051c(param_1,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e74254(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7425c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x520))();
  return;
}




void FUN_00e74260(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e74268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x528))();
  return;
}




void FUN_00e7426c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e74274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x530))();
  return;
}




void FUN_00e74278(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = FUN_00e70b14();
  if (iVar1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = FUN_00e70b1c(param_2,uVar4);
      FUN_0093de70(param_1,uVar2);
      uVar4 = uVar4 + 1;
      uVar3 = FUN_00e70b14(param_2);
    } while (uVar4 < uVar3);
  }
  return;
}




void FUN_00e742e0(undefined8 *param_1,undefined8 param_2)

{
  FUN_00e734e4(param_1,"GL2JNILib",param_2,&DAT_01beef0d);
  *param_1 = &PTR_FUN_02820630;
  return;
}




void FUN_00e74324(undefined8 param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  (**(code **)(*DAT_03210498 + 0x20))(DAT_03210498,&local_30,0);
  FUN_00e73934(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e74398(undefined8 *param_1,undefined8 param_2)

{
  FUN_00e734e4(param_1,"GL2JNILib",param_2,&DAT_01beef11);
  *param_1 = &PTR_FUN_02820650;
  return;
}




void FUN_00e743dc(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  (**(code **)(*DAT_03210498 + 0x20))(DAT_03210498,&local_40,0);
  FUN_00e73934(param_1,local_40,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e74460(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (DAT_03210478 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Integer");
    DAT_03210478 = (**(code **)(*param_1 + 0xa8))(param_1,uVar1);
    DAT_03210480 = (**(code **)(*param_1 + 0x108))(param_1,DAT_03210478,"<init>",&DAT_01beef11);
    (**(code **)(*param_1 + 0xb8))(param_1,uVar1);
  }
  FUN_00e74528(param_1,DAT_03210478,DAT_03210480,param_2);
  return;
}




void FUN_00e7451c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e74524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))();
  return;
}




void FUN_00e74528(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0xe8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e745c0(float param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (DAT_03210488 == 0) {
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2,"java/lang/Float");
    DAT_03210488 = (**(code **)(*param_2 + 0xa8))(param_2,uVar1);
    DAT_03210490 = (**(code **)(*param_2 + 0x108))(param_2,DAT_03210488,"<init>",&DAT_01beef3f);
    (**(code **)(*param_2 + 0xb8))(param_2,uVar1);
  }
  FUN_00e74528((double)param_1,param_2,DAT_03210488,DAT_03210490);
  return;
}




void FUN_00e74684(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7468c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))();
  return;
}




void FUN_00e74690(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x118))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e74728(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e74730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x558))();
  return;
}




void FUN_00e74734(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x558))();
  uVar4 = (ulong)uVar2;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x5d8))(param_1,param_2,0);
  if (0 < (int)uVar2) {
    do {
      local_4c = *puVar3;
      FUN_00933c34(param_3,&local_4c);
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e747e4(undefined8 param_1)

{
  DAT_03210498 = param_1;
  return;
}




void FUN_00e747f0(undefined8 param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,param_1);
  FUN_008fce60(&DAT_03210460,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_00e6a50c(&DAT_03210337,0x100,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined * FUN_00e74878(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_03210470;
  if ((DAT_03210460 & 1) == 0) {
    puVar1 = &DAT_03210461;
  }
  return puVar1;
}




void FUN_00e74894(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e748b8(undefined8 *param_1)

{
  long lVar1;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_02820610;
  if (param_1[1] != 0) {
    local_30 = (long *)0x0;
    (**(code **)(*DAT_03210498 + 0x20))(DAT_03210498,&local_30,0);
    (**(code **)(*local_30 + 0xb0))(local_30,param_1[1]);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e74948(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e7496c(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *__s1;
  long lVar10;
  undefined4 uVar11;
  undefined **local_f0 [3];
  sysinfo local_d8;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  local_d8.uptime = 0;
  local_d8.loads[0] = 0;
  iVar4 = socket(2,1,0);
  if ((-1 < iVar4) && (iVar5 = ioctl(iVar4,0x8912,&local_d8), -1 < iVar5)) {
    pcVar7 = malloc((long)(int)local_d8.uptime);
    if (pcVar7 != (char *)0x0) {
      local_d8.loads[0] = (ulong)pcVar7;
      iVar5 = ioctl(iVar4,0x8912,&local_d8);
      if (-1 < iVar5) {
        iVar5 = (int)((ulong)(long)(int)local_d8.uptime / 0x28);
        if (0 < iVar5) {
          lVar10 = 0;
          __s1 = pcVar7;
          do {
            iVar6 = strcmp(__s1,"en0");
            if (iVar6 != 0) {
              iVar6 = ioctl(iVar4,0x8927,__s1);
              if (iVar6 < 0) goto LAB_00e74aa4;
              FUN_00e6a8a8(param_1 + 0xb0,"%02x:%02x:%02x:%02x:%02x:%02x",__s1[0x12],__s1[0x13],
                           __s1[0x14],__s1[0x15],__s1[0x16],__s1[0x17]);
            }
            lVar10 = lVar10 + 1;
            __s1 = __s1 + 0x28;
          } while (lVar10 < iVar5);
        }
        close(iVar4);
        free(pcVar7);
        goto LAB_00e74ab0;
      }
LAB_00e74aa4:
      free(pcVar7);
    }
  }
  param_1[0xb0] = 0;
LAB_00e74ab0:
  lVar10 = sysconf(0x61);
  *(int *)(param_1 + 0x10) = (int)lVar10;
  memset(&local_d8,0,0x70);
  sysinfo(&local_d8);
  *(ulong *)(param_1 + 0x18) = local_d8.totalram * local_d8.mem_unit;
  *(undefined4 *)(param_1 + 0x2c) = 0x19;
  FUN_00e734e4(local_f0,"NuoHelpers","getHardwareName","()Ljava/lang/String;");
  local_f0[0] = &PTR_FUN_02820670;
  uVar8 = FUN_00e7368c(local_f0);
  FUN_00e73bd8(&local_d8,local_f0,uVar8);
  FUN_00e748b8(local_f0);
  pcVar7 = (char *)((ulong)&local_d8 | 1);
  uVar2 = (uint)((byte)local_d8.uptime >> 1);
  if ((local_d8.uptime & 1U) != 0) {
    pcVar7 = (char *)local_d8.loads[1];
    uVar2 = (uint)local_d8.loads[0];
  }
  if (0x3f < uVar2) {
    pcVar7[0x3f] = '\0';
  }
  strcpy(param_1 + 0x30,pcVar7);
  if ((local_d8.uptime & 1U) != 0) {
    operator_delete((void *)local_d8.loads[1]);
  }
  FUN_00e734e4(local_f0,"NuoHelpers","getOsVersionName","()Ljava/lang/String;");
  local_f0[0] = &PTR_FUN_02820690;
  uVar8 = FUN_00e7368c(local_f0);
  FUN_00e73bd8(&local_d8,local_f0,uVar8);
  FUN_00e748b8(local_f0);
  if (((local_d8.uptime & 1U) != 0) && (0x7f < (uint)local_d8.loads[0])) {
    *(char *)(local_d8.loads[1] + 0x7f) = '\0';
  }
  pcVar7 = (char *)((ulong)&local_d8 | 1);
  if ((local_d8.uptime & 1U) != 0) {
    pcVar7 = (char *)local_d8.loads[1];
  }
  strcpy(param_1 + 0x1b0,pcVar7);
  if ((local_d8.uptime & 1U) != 0) {
    operator_delete((void *)local_d8.loads[1]);
  }
  FUN_00e734e4(local_f0,"NuoHelpers","getOsVersionNumber","()Ljava/lang/String;");
  local_f0[0] = &PTR_FUN_028206b0;
  uVar8 = FUN_00e7368c(local_f0);
  FUN_00e73bd8(&local_d8,local_f0,uVar8);
  FUN_00e748b8(local_f0);
  pcVar7 = (char *)((ulong)local_d8.uptime >> 1 & 0x7f);
  if ((local_d8.uptime & 1U) != 0) {
    pcVar7 = (char *)local_d8.loads[0];
  }
  if (pcVar7 != (char *)0x0) {
    pcVar7 = (char *)((ulong)&local_d8 | 1);
    if ((local_d8.uptime & 1U) != 0) {
      pcVar7 = (char *)local_d8.loads[1];
    }
    pcVar7 = strtok(pcVar7,".");
    if (pcVar7 != (char *)0x0) {
      lVar10 = 0x230;
      do {
        iVar4 = atoi(pcVar7);
        param_1[lVar10] = (char)iVar4;
        pcVar7 = strtok((char *)0x0,".");
        if (pcVar7 == (char *)0x0) break;
        uVar9 = lVar10 - 0x22f;
        lVar10 = lVar10 + 1;
      } while (uVar9 < 3);
    }
  }
  if ((local_d8.uptime & 1U) != 0) {
    operator_delete((void *)local_d8.loads[1]);
  }
  FUN_00e734e4(&local_d8,"NuoHelpers","isHighDPI",&DAT_01bef1a3);
  local_d8.uptime = (long)&PTR_FUN_028206d0;
  uVar8 = FUN_00e7368c(&local_d8);
  bVar3 = FUN_00e739d8(&local_d8,uVar8);
  param_1[0x477] = param_1[0x477] & 0xfe | bVar3 & 1;
  FUN_00e748b8(&local_d8);
  FUN_00e734e4(&local_d8,"NuoHelpers","getDPI",&DAT_01bef1ae);
  local_d8.uptime = (long)&PTR_FUN_028206f0;
  uVar8 = FUN_00e7368c(&local_d8);
  uVar11 = FUN_00e73da8(&local_d8,uVar8);
  *(undefined4 *)(param_1 + 0x478) = uVar11;
  FUN_00e748b8(&local_d8);
  FUN_00e734e4(&local_d8,"NuoHelpers","getDeviceType",&DAT_01bef1c0);
  local_d8.uptime = (long)&PTR_FUN_02820710;
  uVar8 = FUN_00e7368c(&local_d8);
  uVar11 = FUN_00e73b34(&local_d8,uVar8);
  *(undefined4 *)(param_1 + 0x28) = uVar11;
  FUN_00e748b8(&local_d8);
  FUN_00e734e4(local_f0,"NuoHelpers","getLanguageCode","()Ljava/lang/String;");
  local_f0[0] = &PTR_FUN_02820730;
  uVar8 = FUN_00e7368c(local_f0);
  FUN_00e73bd8(&local_d8,local_f0,uVar8);
  pcVar7 = (char *)((ulong)&local_d8 | 1);
  if ((local_d8.uptime & 1U) != 0) {
    pcVar7 = (char *)local_d8.loads[1];
  }
  strcpy(param_1 + 0x237,pcVar7);
  if ((local_d8.uptime & 1U) != 0) {
    operator_delete((void *)local_d8.loads[1]);
  }
  FUN_00e748b8(local_f0);
  FUN_00e734e4(local_f0,"NuoHelpers","getCountryCode","()Ljava/lang/String;");
  local_f0[0] = &PTR_FUN_02820750;
  uVar8 = FUN_00e7368c(local_f0);
  FUN_00e73bd8(&local_d8,local_f0,uVar8);
  pcVar7 = (char *)((ulong)&local_d8 | 1);
  if ((local_d8.uptime & 1U) != 0) {
    pcVar7 = (char *)local_d8.loads[1];
  }
  strcpy(param_1 + 0x233,pcVar7);
  if ((local_d8.uptime & 1U) != 0) {
    operator_delete((void *)local_d8.loads[1]);
  }
  FUN_00e748b8(local_f0);
  *param_1 = 1;
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00e74f14(long param_1)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  void *__s;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined **local_98 [3];
  byte local_80 [8];
  ulong local_78;
  void *pvStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar6 = *(int *)(param_1 + 0x47c);
  if (iVar6 != 0) goto LAB_00e77294;
  FUN_00e734e4(local_98,"NuoHelpers","getDeviceGpuID","()Ljava/lang/String;");
  local_98[0] = &PTR_FUN_02820770;
  uVar7 = FUN_00e7368c(local_98);
  FUN_00e73bd8(local_80,local_98,uVar7);
  FUN_00e748b8(local_98);
  uVar13 = (ulong)(local_80[0] >> 1);
  pvVar4 = (void *)((ulong)local_80 | 1);
  if ((local_80[0] & 1) != 0) {
    uVar13 = local_78;
    pvVar4 = pvStack_70;
  }
  piVar2 = (int *)((long)pvVar4 + uVar13);
  pvVar10 = pvVar4;
  uVar11 = uVar13;
  if ((long)uVar13 < 5) {
LAB_00e75048:
    bVar1 = true;
  }
  else {
    do {
      if ((uVar11 - 4 == 0) || (piVar8 = memchr(pvVar10,0x54,uVar11 - 4), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"Tegra",5);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x51;
          goto LAB_00e77284;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (4 < (long)uVar11);
    bVar1 = (long)uVar13 < 6;
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((long)uVar13 < 6) goto LAB_00e75048;
    do {
      if ((uVar11 - 5 == 0) || (piVar8 = memchr(pvVar10,0x41,uVar11 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"Adreno",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          pvVar10 = pvVar4;
          uVar11 = uVar13;
          if ((long)uVar13 < 3) goto LAB_00e77278;
          goto LAB_00e751d8;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar11);
  }
  pvVar10 = pvVar4;
  uVar11 = uVar13;
  if (3 < (long)uVar13) {
    do {
      if ((uVar11 - 3 == 0) || (piVar8 = memchr(pvVar10,0x4d,uVar11 - 3), piVar8 == (int *)0x0))
      break;
      if (*piVar8 == 0x696c614d) {
        if ((piVar8 != piVar2) &&
           (uVar11 = uVar13, pvVar10 = pvVar4, (long)piVar8 - (long)pvVar4 != -1))
        goto joined_r0x00e75100;
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (3 < (long)uVar11);
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if (6 < (long)uVar13) {
      do {
        uVar12 = uVar13;
        pvVar9 = pvVar4;
        if ((uVar11 - 6 == 0) || (piVar8 = memchr(pvVar10,0x50,uVar11 - 6), piVar8 == (int *)0x0))
        break;
        iVar6 = memcmp(piVar8,"PowerVR",7);
        if (iVar6 == 0) {
          if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
            pvVar10 = pvVar4;
            uVar11 = uVar13;
            if ((long)uVar13 < 5) goto LAB_00e76190;
            goto LAB_00e75244;
          }
          break;
        }
        uVar11 = (long)piVar2 - ((long)piVar8 + 1);
        pvVar10 = (void *)((long)piVar8 + 1);
      } while (6 < (long)uVar11);
      do {
        if ((((long)uVar12 < 7) || (uVar12 - 6 == 0)) ||
           (piVar8 = memchr(pvVar9,0x56,uVar12 - 6), piVar8 == (int *)0x0)) break;
        iVar6 = memcmp(piVar8,"Vivante",7);
        if (iVar6 == 0) {
          if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
            pvVar10 = pvVar4;
            uVar11 = uVar13;
            if ((long)uVar13 < 5) goto LAB_00e76904;
            goto LAB_00e75308;
          }
          break;
        }
        uVar12 = (long)piVar2 - ((long)piVar8 + 1);
        pvVar9 = (void *)((long)piVar8 + 1);
      } while( true );
    }
  }
  goto LAB_00e77278;
  while( true ) {
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
    if ((long)uVar11 < 3) break;
LAB_00e751d8:
    if ((uVar11 - 2 == 0) || (piVar8 = memchr(pvVar10,0x31,uVar11 - 2), piVar8 == (int *)0x0))
    break;
    iVar6 = memcmp(piVar8,"130",3);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 8;
        goto LAB_00e77284;
      }
      break;
    }
  }
  pvVar10 = pvVar4;
  uVar11 = uVar13;
  if (2 < (long)uVar13) {
    do {
      if ((uVar11 - 2 == 0) || (piVar8 = memchr(pvVar10,0x32,uVar11 - 2), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,&DAT_01beefc7,3);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 9;
          goto LAB_00e77284;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (2 < (long)uVar11);
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if (2 < (long)uVar13) {
      do {
        if ((uVar11 - 2 == 0) || (piVar8 = memchr(pvVar10,0x32,uVar11 - 2), piVar8 == (int *)0x0))
        break;
        iVar6 = memcmp(piVar8,&DAT_01beef85,3);
        if (iVar6 == 0) {
          if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
            iVar6 = 10;
            goto LAB_00e77284;
          }
          break;
        }
        uVar11 = (long)piVar2 - ((long)piVar8 + 1);
        pvVar10 = (void *)((long)piVar8 + 1);
      } while (2 < (long)uVar11);
      pvVar10 = pvVar4;
      uVar11 = uVar13;
      if (2 < (long)uVar13) {
        do {
          if ((uVar11 - 2 == 0) || (piVar8 = memchr(pvVar10,0x32,uVar11 - 2), piVar8 == (int *)0x0))
          break;
          iVar6 = memcmp(piVar8,&DAT_01beef89,3);
          if (iVar6 == 0) {
            if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
              iVar6 = 0xb;
              goto LAB_00e77284;
            }
            break;
          }
          uVar11 = (long)piVar2 - ((long)piVar8 + 1);
          pvVar10 = (void *)((long)piVar8 + 1);
        } while (2 < (long)uVar11);
        pvVar10 = pvVar4;
        uVar11 = uVar13;
        if (2 < (long)uVar13) {
          do {
            if ((uVar11 - 2 == 0) ||
               (piVar8 = memchr(pvVar10,0x32,uVar11 - 2), piVar8 == (int *)0x0)) break;
            iVar6 = memcmp(piVar8,&DAT_01beef8d,3);
            if (iVar6 == 0) {
              if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                iVar6 = 0xc;
                goto LAB_00e77284;
              }
              break;
            }
            uVar11 = (long)piVar2 - ((long)piVar8 + 1);
            pvVar10 = (void *)((long)piVar8 + 1);
          } while (2 < (long)uVar11);
          pvVar10 = pvVar4;
          uVar11 = uVar13;
          if (2 < (long)uVar13) {
            do {
              if ((uVar11 - 2 == 0) ||
                 (piVar8 = memchr(pvVar10,0x32,uVar11 - 2), piVar8 == (int *)0x0)) break;
              iVar6 = memcmp(piVar8,"225",3);
              if (iVar6 == 0) {
                if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                  iVar6 = 0x1a;
                  goto LAB_00e77284;
                }
                break;
              }
              uVar11 = (long)piVar2 - ((long)piVar8 + 1);
              pvVar10 = (void *)((long)piVar8 + 1);
            } while (2 < (long)uVar11);
            pvVar10 = pvVar4;
            uVar11 = uVar13;
            if (2 < (long)uVar13) {
              do {
                if ((uVar11 - 2 == 0) ||
                   (piVar8 = memchr(pvVar10,0x33,uVar11 - 2), piVar8 == (int *)0x0)) break;
                iVar6 = memcmp(piVar8,&DAT_01beef91,3);
                if (iVar6 == 0) {
                  if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                    iVar6 = 0x1b;
                    goto LAB_00e77284;
                  }
                  break;
                }
                uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                pvVar10 = (void *)((long)piVar8 + 1);
              } while (2 < (long)uVar11);
              pvVar10 = pvVar4;
              uVar11 = uVar13;
              if (2 < (long)uVar13) {
                do {
                  if ((uVar11 - 2 == 0) ||
                     (piVar8 = memchr(pvVar10,0x33,uVar11 - 2), piVar8 == (int *)0x0)) break;
                  iVar6 = memcmp(piVar8,&DAT_01beef95,3);
                  if (iVar6 == 0) {
                    if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                      iVar6 = 0x1c;
                      goto LAB_00e77284;
                    }
                    break;
                  }
                  uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                  pvVar10 = (void *)((long)piVar8 + 1);
                } while (2 < (long)uVar11);
                pvVar10 = pvVar4;
                uVar11 = uVar13;
                if (2 < (long)uVar13) {
                  do {
                    if ((uVar11 - 2 == 0) ||
                       (piVar8 = memchr(pvVar10,0x33,uVar11 - 2), piVar8 == (int *)0x0)) break;
                    iVar6 = memcmp(piVar8,&DAT_01beef99,3);
                    if (iVar6 == 0) {
                      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                        iVar6 = 0x1d;
                        goto LAB_00e77284;
                      }
                      break;
                    }
                    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                    pvVar10 = (void *)((long)piVar8 + 1);
                  } while (2 < (long)uVar11);
                  pvVar10 = pvVar4;
                  uVar11 = uVar13;
                  if (2 < (long)uVar13) {
                    do {
                      if ((uVar11 - 2 == 0) ||
                         (piVar8 = memchr(pvVar10,0x33,uVar11 - 2), piVar8 == (int *)0x0)) break;
                      iVar6 = memcmp(piVar8,&DAT_01beef9d,3);
                      if (iVar6 == 0) {
                        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                          iVar6 = 0x1e;
                          goto LAB_00e77284;
                        }
                        break;
                      }
                      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                      pvVar10 = (void *)((long)piVar8 + 1);
                    } while (2 < (long)uVar11);
                    pvVar10 = pvVar4;
                    uVar11 = uVar13;
                    if (2 < (long)uVar13) {
                      do {
                        if ((uVar11 - 2 == 0) ||
                           (piVar8 = memchr(pvVar10,0x34,uVar11 - 2), piVar8 == (int *)0x0)) break;
                        iVar6 = memcmp(piVar8,&DAT_01beefa1,3);
                        if (iVar6 == 0) {
                          if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                            iVar6 = 0x27;
                            goto LAB_00e77284;
                          }
                          break;
                        }
                        uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                        pvVar10 = (void *)((long)piVar8 + 1);
                      } while (2 < (long)uVar11);
                      pvVar10 = pvVar4;
                      uVar11 = uVar13;
                      if (2 < (long)uVar13) {
                        do {
                          if ((uVar11 - 2 == 0) ||
                             (piVar8 = memchr(pvVar10,0x33,uVar11 - 2), piVar8 == (int *)0x0))
                          break;
                          iVar6 = memcmp(piVar8,&DAT_01beefa5,3);
                          if (iVar6 == 0) {
                            if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                              iVar6 = 0x28;
                              goto LAB_00e77284;
                            }
                            break;
                          }
                          uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                          pvVar10 = (void *)((long)piVar8 + 1);
                        } while (2 < (long)uVar11);
                        pvVar10 = pvVar4;
                        uVar11 = uVar13;
                        if (2 < (long)uVar13) {
                          do {
                            if ((uVar11 - 2 == 0) ||
                               (piVar8 = memchr(pvVar10,0x33,uVar11 - 2), piVar8 == (int *)0x0))
                            break;
                            iVar6 = memcmp(piVar8,&DAT_01beefa9,3);
                            if (iVar6 == 0) {
                              if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                                iVar6 = 0x33;
                                goto LAB_00e77284;
                              }
                              break;
                            }
                            uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                            pvVar10 = (void *)((long)piVar8 + 1);
                          } while (2 < (long)uVar11);
                          pvVar10 = pvVar4;
                          uVar11 = uVar13;
                          if (2 < (long)uVar13) {
                            do {
                              if ((uVar11 - 2 == 0) ||
                                 (piVar8 = memchr(pvVar10,0x34,uVar11 - 2), piVar8 == (int *)0x0))
                              break;
                              iVar6 = memcmp(piVar8,&DAT_01beefad,3);
                              if (iVar6 == 0) {
                                if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                                  iVar6 = 0x34;
                                  goto LAB_00e77284;
                                }
                                break;
                              }
                              uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                              pvVar10 = (void *)((long)piVar8 + 1);
                            } while (2 < (long)uVar11);
                            pvVar10 = pvVar4;
                            uVar11 = uVar13;
                            if (2 < (long)uVar13) {
                              do {
                                if ((uVar11 - 2 == 0) ||
                                   (piVar8 = memchr(pvVar10,0x34,uVar11 - 2), piVar8 == (int *)0x0))
                                break;
                                iVar6 = memcmp(piVar8,&DAT_01beefb1,3);
                                if (iVar6 == 0) {
                                  if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                                    iVar6 = 0x35;
                                    goto LAB_00e77284;
                                  }
                                  break;
                                }
                                uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                                pvVar10 = (void *)((long)piVar8 + 1);
                              } while (2 < (long)uVar11);
                              pvVar10 = pvVar4;
                              uVar11 = uVar13;
                              if (2 < (long)uVar13) {
                                do {
                                  if ((uVar11 - 2 == 0) ||
                                     (piVar8 = memchr(pvVar10,0x34,uVar11 - 2), piVar8 == (int *)0x0
                                     )) break;
                                  iVar6 = memcmp(piVar8,&DAT_01bef02b,3);
                                  if (iVar6 == 0) {
                                    if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                                      iVar6 = 0x36;
                                      goto LAB_00e77284;
                                    }
                                    break;
                                  }
                                  uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                                  pvVar10 = (void *)((long)piVar8 + 1);
                                } while (2 < (long)uVar11);
                                pvVar10 = pvVar4;
                                uVar11 = uVar13;
                                if (2 < (long)uVar13) {
                                  do {
                                    if ((uVar11 - 2 == 0) ||
                                       (piVar8 = memchr(pvVar10,0x35,uVar11 - 2),
                                       piVar8 == (int *)0x0)) break;
                                    iVar6 = memcmp(piVar8,&DAT_01beefb5,3);
                                    if (iVar6 == 0) {
                                      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1))
                                      {
                                        iVar6 = 0x37;
                                        goto LAB_00e77284;
                                      }
                                      break;
                                    }
                                    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                                    pvVar10 = (void *)((long)piVar8 + 1);
                                  } while (2 < (long)uVar11);
                                  pvVar10 = pvVar4;
                                  uVar11 = uVar13;
                                  if (2 < (long)uVar13) {
                                    do {
                                      if ((uVar11 - 2 == 0) ||
                                         (piVar8 = memchr(pvVar10,0x35,uVar11 - 2),
                                         piVar8 == (int *)0x0)) break;
                                      iVar6 = memcmp(piVar8,&DAT_01e46b23,3);
                                      if (iVar6 == 0) {
                                        if ((piVar8 != piVar2) &&
                                           ((long)piVar8 - (long)pvVar4 != -1)) {
                                          iVar6 = 0x29;
                                          goto LAB_00e77284;
                                        }
                                        break;
                                      }
                                      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                                      pvVar10 = (void *)((long)piVar8 + 1);
                                    } while (2 < (long)uVar11);
                                    pvVar10 = pvVar4;
                                    uVar11 = uVar13;
                                    if (2 < (long)uVar13) {
                                      do {
                                        if ((uVar11 - 2 == 0) ||
                                           (piVar8 = memchr(pvVar10,0x35,uVar11 - 2),
                                           piVar8 == (int *)0x0)) break;
                                        iVar6 = memcmp(piVar8,&DAT_01beefb9,3);
                                        if (iVar6 == 0) {
                                          if ((piVar8 != piVar2) &&
                                             ((long)piVar8 - (long)pvVar4 != -1)) {
                                            iVar6 = 0x38;
                                            goto LAB_00e77284;
                                          }
                                          break;
                                        }
                                        uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                                        pvVar10 = (void *)((long)piVar8 + 1);
                                      } while (2 < (long)uVar11);
                                      pvVar10 = pvVar4;
                                      uVar11 = uVar13;
                                      if (2 < (long)uVar13) {
                                        do {
                                          pvVar9 = pvVar4;
                                          if ((uVar11 - 2 == 0) ||
                                             (piVar8 = memchr(pvVar10,0x35,uVar11 - 2),
                                             piVar8 == (int *)0x0)) break;
                                          iVar6 = memcmp(piVar8,&DAT_01bef0a4,3);
                                          if (iVar6 == 0) {
                                            if ((piVar8 != piVar2) &&
                                               ((long)piVar8 - (long)pvVar4 != -1)) {
                                              iVar6 = 0x39;
                                              goto LAB_00e77284;
                                            }
                                            break;
                                          }
                                          uVar11 = (long)piVar2 - ((long)piVar8 + 1);
                                          pvVar10 = (void *)((long)piVar8 + 1);
                                        } while (2 < (long)uVar11);
                                        do {
                                          if ((((long)uVar13 < 3) || (uVar13 - 2 == 0)) ||
                                             (piVar8 = memchr(pvVar9,0x35,uVar13 - 2),
                                             piVar8 == (int *)0x0)) break;
                                          iVar6 = memcmp(piVar8,&DAT_01bef0bc,3);
                                          if (iVar6 == 0) {
                                            if ((piVar8 != piVar2) &&
                                               ((long)piVar8 - (long)pvVar4 != -1)) {
                                              iVar6 = 0x53;
                                              goto LAB_00e77284;
                                            }
                                            break;
                                          }
                                          uVar13 = (long)piVar2 - ((long)piVar8 + 1);
                                          pvVar9 = (void *)((long)piVar8 + 1);
                                        } while( true );
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_00e77278;
joined_r0x00e75100:
  pvVar9 = pvVar4;
  uVar12 = uVar13;
  if (((long)uVar11 < 3) ||
     ((uVar11 - 2 == 0 || (piVar8 = memchr(pvVar10,0x2d,uVar11 - 2), piVar8 == (int *)0x0))))
  goto LAB_00e75374;
  iVar6 = memcmp(piVar8,&DAT_01beefc2,3);
  if (iVar6 == 0) {
    if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
      iVar6 = 3;
      goto LAB_00e77284;
    }
    goto LAB_00e75374;
  }
  uVar11 = (long)piVar2 - ((long)piVar8 + 1);
  pvVar10 = (void *)((long)piVar8 + 1);
  goto joined_r0x00e75100;
  while( true ) {
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
    if ((long)uVar12 < 4) break;
LAB_00e75374:
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 3 == 0) || (piVar8 = memchr(pvVar9,0x2d,uVar12 - 3), piVar8 == (int *)0x0)) break;
    if (*piVar8 == 0x3030322d) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 4;
        goto LAB_00e77284;
      }
      break;
    }
  }
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 3 == 0) || (piVar8 = memchr(pvVar10,0x2d,uVar11 - 3), piVar8 == (int *)0x0))
    break;
    if (*piVar8 == 0x3030332d) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 5;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 3 == 0) || (piVar8 = memchr(pvVar9,0x2d,uVar12 - 3), piVar8 == (int *)0x0)) break;
    if (*piVar8 == 0x3030342d) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 6;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar12);
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 3 == 0) || (piVar8 = memchr(pvVar10,0x2d,uVar11 - 3), piVar8 == (int *)0x0))
    break;
    if (*piVar8 == 0x3035342d) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 7;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 3 == 0) || (piVar8 = memchr(pvVar9,0x54,uVar12 - 3), piVar8 == (int *)0x0)) break;
    if (*piVar8 == 0x34303654) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x1f;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar12);
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 3 == 0) || (piVar8 = memchr(pvVar10,0x54,uVar11 - 3), piVar8 == (int *)0x0))
    break;
    if (*piVar8 == 0x38353654) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x20;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 3 == 0) || (piVar8 = memchr(pvVar9,0x54,uVar12 - 3), piVar8 == (int *)0x0)) break;
    if (*piVar8 == 0x32323654) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x2a;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar12);
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 3 == 0) || (piVar8 = memchr(pvVar10,0x54,uVar11 - 3), piVar8 == (int *)0x0))
    break;
    if (*piVar8 == 0x34323654) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x2b;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 3 == 0) || (piVar8 = memchr(pvVar9,0x54,uVar12 - 3), piVar8 == (int *)0x0)) break;
    if (*piVar8 == 0x38323654) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x2c;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar12);
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 3 == 0) || (piVar8 = memchr(pvVar10,0x54,uVar11 - 3), piVar8 == (int *)0x0))
    break;
    if (*piVar8 == 0x38373654) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x3a;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 3 == 0) || (piVar8 = memchr(pvVar9,0x54,uVar12 - 3), piVar8 == (int *)0x0)) break;
    if (*piVar8 == 0x30323754) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x3b;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar12);
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 3 == 0) || (piVar8 = memchr(pvVar10,0x54,uVar11 - 3), piVar8 == (int *)0x0))
    break;
    if (*piVar8 == 0x30363754) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x3c;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 3 == 0) || (piVar8 = memchr(pvVar9,0x54,uVar12 - 3), piVar8 == (int *)0x0)) break;
    if (*piVar8 == 0x30323854) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x3d;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar12);
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 3 == 0) || (piVar8 = memchr(pvVar10,0x54,uVar11 - 3), piVar8 == (int *)0x0))
    break;
    if (*piVar8 == 0x30333854) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x3e;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 3 == 0) || (piVar8 = memchr(pvVar9,0x54,uVar12 - 3), piVar8 == (int *)0x0)) break;
    if (*piVar8 == 0x30363854) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x3f;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar12);
  do {
    pvVar9 = pvVar4;
    if ((uVar11 - 3 == 0) || (piVar8 = memchr(pvVar10,0x54,uVar11 - 3), piVar8 == (int *)0x0))
    break;
    if (*piVar8 == 0x30383854) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x40;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar11);
  do {
    if ((uVar13 - 3 == 0) || (piVar8 = memchr(pvVar9,0x2d,uVar13 - 3), piVar8 == (int *)0x0)) break;
    if (*piVar8 == 0x3137472d) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x41;
        goto LAB_00e77284;
      }
      break;
    }
    uVar13 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (3 < (long)uVar13);
  goto LAB_00e77278;
  while( true ) {
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
    if ((long)uVar11 < 5) break;
LAB_00e75244:
    if ((uVar11 - 4 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0))
    break;
    iVar6 = memcmp(piVar8,"G6400",5);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x42;
        goto LAB_00e77284;
      }
      break;
    }
  }
  pvVar10 = pvVar4;
  uVar11 = uVar13;
  if (4 < (long)uVar13) {
    do {
      if ((uVar11 - 4 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,&DAT_01bef029,5);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x43;
          goto LAB_00e77284;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (4 < (long)uVar11);
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if (4 < (long)uVar13) {
      do {
        if ((uVar11 - 4 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0))
        break;
        iVar6 = memcmp(piVar8,"G6630",5);
        if (iVar6 == 0) {
          if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
            iVar6 = 0x44;
            goto LAB_00e77284;
          }
          break;
        }
        uVar11 = (long)piVar2 - ((long)piVar8 + 1);
        pvVar10 = (void *)((long)piVar8 + 1);
      } while (4 < (long)uVar11);
      pvVar10 = pvVar4;
      uVar11 = uVar13;
      if (4 < (long)uVar13) {
        do {
          if ((uVar11 - 4 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0))
          break;
          iVar6 = memcmp(piVar8,"G6050",5);
          if (iVar6 == 0) {
            if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
              iVar6 = 0x45;
              goto LAB_00e77284;
            }
            break;
          }
          uVar11 = (long)piVar2 - ((long)piVar8 + 1);
          pvVar10 = (void *)((long)piVar8 + 1);
        } while (4 < (long)uVar11);
        pvVar10 = pvVar4;
        uVar11 = uVar13;
        if (4 < (long)uVar13) {
          do {
            if ((uVar11 - 4 == 0) ||
               (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0)) break;
            iVar6 = memcmp(piVar8,"G6060",5);
            if (iVar6 == 0) {
              if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                iVar6 = 0x46;
                goto LAB_00e77284;
              }
              break;
            }
            uVar11 = (long)piVar2 - ((long)piVar8 + 1);
            pvVar10 = (void *)((long)piVar8 + 1);
          } while (4 < (long)uVar11);
          do {
            uVar11 = uVar13;
            pvVar10 = pvVar4;
            if ((((long)uVar12 < 10) || (uVar12 - 9 == 0)) ||
               (piVar8 = memchr(pvVar9,0x47,uVar12 - 9), piVar8 == (int *)0x0))
            goto joined_r0x00e76120;
            iVar6 = memcmp(piVar8,"G6100 (XE)",10);
            if (iVar6 == 0) {
              if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                iVar6 = 0x47;
                goto LAB_00e77284;
              }
              goto joined_r0x00e76120;
            }
            uVar12 = (long)piVar2 - ((long)piVar8 + 1);
            pvVar9 = (void *)((long)piVar8 + 1);
          } while( true );
        }
      }
    }
  }
LAB_00e76190:
  pvVar10 = pvVar4;
  uVar11 = uVar13;
  if (!bVar1) {
    do {
      pvVar9 = pvVar4;
      uVar12 = uVar13;
      if ((uVar11 - 5 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GX6240",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x49;
          goto LAB_00e77284;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar11);
    do {
      pvVar10 = pvVar4;
      uVar11 = uVar13;
      if ((uVar12 - 5 == 0) || (piVar8 = memchr(pvVar9,0x47,uVar12 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GX6250",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x4a;
          goto LAB_00e77284;
        }
        break;
      }
      uVar12 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar9 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar12);
    do {
      pvVar9 = pvVar4;
      uVar12 = uVar13;
      if ((uVar11 - 5 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GX6450",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x4b;
          goto LAB_00e77284;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar11);
    do {
      if ((uVar12 - 5 == 0) || (piVar8 = memchr(pvVar9,0x47,uVar12 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GX6650",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x4c;
          goto LAB_00e77284;
        }
        break;
      }
      uVar12 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar9 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar12);
  }
  pvVar10 = pvVar4;
  pvVar9 = pvVar4;
  uVar11 = uVar13;
  uVar12 = uVar13;
  if (4 < (long)uVar13) {
    do {
      if ((uVar12 - 4 == 0) || (piVar8 = memchr(pvVar9,0x47,uVar12 - 4), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"G6100",5);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x2d;
          goto LAB_00e77284;
        }
        break;
      }
      uVar12 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar9 = (void *)((long)piVar8 + 1);
    } while (4 < (long)uVar12);
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if (4 < (long)uVar13) {
      do {
        uVar5 = uVar13;
        __s = pvVar4;
        if ((uVar12 - 4 == 0) || (piVar8 = memchr(pvVar9,0x47,uVar12 - 4), piVar8 == (int *)0x0))
        break;
        iVar6 = memcmp(piVar8,"G6200",5);
        if (iVar6 == 0) {
          if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
            iVar6 = 0x2e;
            goto LAB_00e77284;
          }
          break;
        }
        uVar12 = (long)piVar2 - ((long)piVar8 + 1);
        pvVar9 = (void *)((long)piVar8 + 1);
      } while (4 < (long)uVar12);
      do {
        if ((((long)uVar5 < 5) || (uVar5 - 4 == 0)) ||
           (piVar8 = memchr(__s,0x47,uVar5 - 4), piVar8 == (int *)0x0)) break;
        iVar6 = memcmp(piVar8,"G6230",5);
        if (iVar6 == 0) {
          if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
            iVar6 = 0x2f;
            goto LAB_00e77284;
          }
          break;
        }
        uVar5 = (long)piVar2 - ((long)piVar8 + 1);
        __s = (void *)((long)piVar8 + 1);
      } while( true );
    }
  }
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 6 == 0) || (piVar8 = memchr(pvVar10,0x53,uVar11 - 6), piVar8 == (int *)0x0))
    break;
    iVar6 = memcmp(piVar8,"SGX 543",7);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x21;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (6 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 6 == 0) || (piVar8 = memchr(pvVar9,0x53,uVar12 - 6), piVar8 == (int *)0x0)) break;
    iVar6 = memcmp(piVar8,"SGX 544",7);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x22;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (6 < (long)uVar12);
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 6 == 0) || (piVar8 = memchr(pvVar10,0x53,uVar11 - 6), piVar8 == (int *)0x0))
    break;
    iVar6 = memcmp(piVar8,"SGX 554",7);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x23;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (6 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 6 == 0) || (piVar8 = memchr(pvVar9,0x53,uVar12 - 6), piVar8 == (int *)0x0)) break;
    iVar6 = memcmp(piVar8,"SGX 520",7);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0xd;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (6 < (long)uVar12);
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 6 == 0) || (piVar8 = memchr(pvVar10,0x53,uVar11 - 6), piVar8 == (int *)0x0))
    break;
    iVar6 = memcmp(piVar8,&DAT_01bef0a0,7);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0xe;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (6 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if ((uVar12 - 6 == 0) || (piVar8 = memchr(pvVar9,0x53,uVar12 - 6), piVar8 == (int *)0x0)) break;
    iVar6 = memcmp(piVar8,"SGX 531",7);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0xf;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (6 < (long)uVar12);
  do {
    pvVar9 = pvVar4;
    uVar12 = uVar13;
    if ((uVar11 - 6 == 0) || (piVar8 = memchr(pvVar10,0x53,uVar11 - 6), piVar8 == (int *)0x0))
    break;
    iVar6 = memcmp(piVar8,"SGX 535",7);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x10;
        goto LAB_00e77284;
      }
      break;
    }
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (6 < (long)uVar11);
  do {
    pvVar10 = pvVar4;
    if ((uVar12 - 6 == 0) || (piVar8 = memchr(pvVar9,0x53,uVar12 - 6), piVar8 == (int *)0x0)) break;
    iVar6 = memcmp(piVar8,&DAT_01bef0b8,7);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x11;
        goto LAB_00e77284;
      }
      break;
    }
    uVar12 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar9 = (void *)((long)piVar8 + 1);
  } while (6 < (long)uVar12);
  do {
    if ((uVar13 - 6 == 0) || (piVar8 = memchr(pvVar10,0x53,uVar13 - 6), piVar8 == (int *)0x0))
    break;
    iVar6 = memcmp(piVar8,"SGX 545",7);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x12;
        goto LAB_00e77284;
      }
      break;
    }
    uVar13 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
  } while (6 < (long)uVar13);
  goto LAB_00e77278;
joined_r0x00e76120:
  if ((((long)uVar11 < 5) || (uVar11 - 4 == 0)) ||
     (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0)) goto LAB_00e76190;
  iVar6 = memcmp(piVar8,"G6110",5);
  if (iVar6 == 0) {
    if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
      iVar6 = 0x48;
      goto LAB_00e77284;
    }
    goto LAB_00e76190;
  }
  uVar11 = (long)piVar2 - ((long)piVar8 + 1);
  pvVar10 = (void *)((long)piVar8 + 1);
  goto joined_r0x00e76120;
  while( true ) {
    uVar11 = (long)piVar2 - ((long)piVar8 + 1);
    pvVar10 = (void *)((long)piVar8 + 1);
    if ((long)uVar11 < 5) break;
LAB_00e75308:
    if ((uVar11 - 4 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0))
    break;
    iVar6 = memcmp(piVar8,"GC200",5);
    if (iVar6 == 0) {
      if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
        iVar6 = 0x13;
        goto LAB_00e77284;
      }
      break;
    }
  }
  pvVar10 = pvVar4;
  uVar11 = uVar13;
  if (4 < (long)uVar13) {
    do {
      if ((uVar11 - 4 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GC400",5);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x14;
          goto LAB_00e77284;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (4 < (long)uVar11);
    pvVar10 = pvVar4;
    uVar11 = uVar13;
    if (4 < (long)uVar13) {
      do {
        if ((uVar11 - 4 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0))
        break;
        iVar6 = memcmp(piVar8,"GC600",5);
        if (iVar6 == 0) {
          if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
            iVar6 = 0x15;
            goto LAB_00e77284;
          }
          break;
        }
        uVar11 = (long)piVar2 - ((long)piVar8 + 1);
        pvVar10 = (void *)((long)piVar8 + 1);
      } while (4 < (long)uVar11);
      pvVar10 = pvVar4;
      uVar11 = uVar13;
      if (4 < (long)uVar13) {
        do {
          if ((uVar11 - 4 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0))
          break;
          iVar6 = memcmp(piVar8,"GC800",5);
          if (iVar6 == 0) {
            if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
              iVar6 = 0x16;
              goto LAB_00e77284;
            }
            break;
          }
          uVar11 = (long)piVar2 - ((long)piVar8 + 1);
          pvVar10 = (void *)((long)piVar8 + 1);
        } while (4 < (long)uVar11);
        pvVar10 = pvVar4;
        uVar11 = uVar13;
        if (4 < (long)uVar13) {
          do {
            uVar12 = uVar13;
            pvVar9 = pvVar4;
            if ((uVar11 - 4 == 0) ||
               (piVar8 = memchr(pvVar10,0x47,uVar11 - 4), piVar8 == (int *)0x0)) break;
            iVar6 = memcmp(piVar8,"GC860",5);
            if (iVar6 == 0) {
              if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                iVar6 = 0x17;
                goto LAB_00e77284;
              }
              break;
            }
            uVar11 = (long)piVar2 - ((long)piVar8 + 1);
            pvVar10 = (void *)((long)piVar8 + 1);
          } while (4 < (long)uVar11);
          do {
            if ((((long)uVar12 < 5) || (uVar12 - 4 == 0)) ||
               (piVar8 = memchr(pvVar9,0x47,uVar12 - 4), piVar8 == (int *)0x0)) break;
            iVar6 = memcmp(piVar8,"GC880",5);
            if (iVar6 == 0) {
              if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
                iVar6 = 0x18;
                goto LAB_00e77284;
              }
              break;
            }
            uVar12 = (long)piVar2 - ((long)piVar8 + 1);
            pvVar9 = (void *)((long)piVar8 + 1);
          } while( true );
        }
      }
    }
  }
LAB_00e76904:
  pvVar10 = pvVar4;
  uVar11 = uVar13;
  if (!bVar1) {
    do {
      pvVar9 = pvVar4;
      uVar12 = uVar13;
      if ((uVar11 - 5 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,&DAT_01bef0f4,6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x24;
          goto LAB_00e77284;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar11);
    do {
      pvVar10 = pvVar4;
      uVar11 = uVar13;
      if ((uVar12 - 5 == 0) || (piVar8 = memchr(pvVar9,0x47,uVar12 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GC2000",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x25;
          goto LAB_00e77284;
        }
        break;
      }
      uVar12 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar9 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar12);
    do {
      pvVar9 = pvVar4;
      uVar12 = uVar13;
      if ((uVar11 - 5 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GC3000",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x30;
          goto LAB_00e77284;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar11);
    do {
      pvVar10 = pvVar4;
      uVar11 = uVar13;
      if ((uVar12 - 5 == 0) || (piVar8 = memchr(pvVar9,0x47,uVar12 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GC4000",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x31;
          goto LAB_00e77284;
        }
        break;
      }
      uVar12 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar9 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar12);
    do {
      pvVar9 = pvVar4;
      uVar12 = uVar13;
      if ((uVar11 - 5 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GC5000",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x4d;
          goto LAB_00e77284;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar11);
    do {
      pvVar10 = pvVar4;
      uVar11 = uVar13;
      if ((uVar12 - 5 == 0) || (piVar8 = memchr(pvVar9,0x47,uVar12 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GC6000",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x4e;
          goto LAB_00e77284;
        }
        break;
      }
      uVar12 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar9 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar12);
    do {
      pvVar9 = pvVar4;
      if ((uVar11 - 5 == 0) || (piVar8 = memchr(pvVar10,0x47,uVar11 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GC7000",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x4f;
          goto LAB_00e77284;
        }
        break;
      }
      uVar11 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar10 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar11);
    do {
      if ((uVar13 - 5 == 0) || (piVar8 = memchr(pvVar9,0x47,uVar13 - 5), piVar8 == (int *)0x0))
      break;
      iVar6 = memcmp(piVar8,"GC8000",6);
      if (iVar6 == 0) {
        if ((piVar8 != piVar2) && ((long)piVar8 - (long)pvVar4 != -1)) {
          iVar6 = 0x50;
          goto LAB_00e77284;
        }
        break;
      }
      uVar13 = (long)piVar2 - ((long)piVar8 + 1);
      pvVar9 = (void *)((long)piVar8 + 1);
    } while (5 < (long)uVar13);
  }
LAB_00e77278:
  iVar6 = *(int *)(param_1 + 0x47c);
  if (iVar6 == 0) {
    iVar6 = 1;
LAB_00e77284:
    *(int *)(param_1 + 0x47c) = iVar6;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(pvStack_70);
  }
LAB_00e77294:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

