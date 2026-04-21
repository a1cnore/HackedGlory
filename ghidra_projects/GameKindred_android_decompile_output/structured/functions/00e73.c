// functions/00e73 — 31 functions
#include "libGameKindred.h"




void Java_com_superevilmegacorp_nuogameentry_NuoApplicationJNI_mountDataPath
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t sVar4;
  char *__dest;
  undefined1 auStack_70 [16];
  byte local_60 [16];
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00e73e58(auStack_70,param_1,param_4);
  FUN_00e73ce8(local_60,auStack_70);
  pcVar1 = (char *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pcVar1 = local_50;
  }
  FUN_00e747f0(pcVar1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00e740f0(auStack_70);
  puVar3 = operator_new__(8);
  *puVar3 = 0;
  FUN_00e73e58(auStack_70,param_1,param_3);
  FUN_00e73ce8(local_60,auStack_70);
  FUN_00e740f0(auStack_70);
  pcVar1 = (char *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pcVar1 = local_50;
  }
  sVar4 = strlen(pcVar1);
  __dest = operator_new__(sVar4 + 1);
  *puVar3 = __dest;
  memset(__dest,0,sVar4 + 1);
  strcpy(__dest,pcVar1);
  FUN_00e7496c(&DAT_0320ffc0,1,puVar3);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void Java_com_superevilmegacorp_nuogameentry_PushNotifications_NotificationService_signalNative
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_3a0 [8];
  uint local_398;
  char *local_390;
  byte local_388 [8];
  uint local_380;
  char *local_378;
  byte local_370 [8];
  uint local_368;
  char *local_360;
  char acStack_358 [256];
  char acStack_258 [256];
  char acStack_158 [256];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00e73e58(acStack_358,param_1,param_4);
  FUN_00e73ce8(local_370,acStack_358);
  FUN_00e740f0(acStack_358);
  FUN_00e73e58(acStack_358,param_1,param_5);
  FUN_00e73ce8(local_388,acStack_358);
  FUN_00e740f0(acStack_358);
  FUN_00e73e58(acStack_358,param_1,param_6);
  FUN_00e73ce8(local_3a0,acStack_358);
  FUN_00e740f0(acStack_358);
  if (param_3 == 6) {
    pcVar2 = (char *)((ulong)local_370 | 1);
    if ((local_370[0] & 1) != 0) {
      pcVar2 = local_360;
    }
    strcpy(acStack_358,pcVar2);
    uVar4 = 6;
  }
  else if (param_3 == 5) {
    uVar1 = (uint)(local_370[0] >> 1);
    if ((local_370[0] & 1) != 0) {
      uVar1 = local_368;
    }
    if (0xfe < uVar1) {
      FUN_008f68f8(local_370,0xff,0);
    }
    uVar1 = (uint)(local_388[0] >> 1);
    if ((local_388[0] & 1) != 0) {
      uVar1 = local_380;
    }
    if (0xfe < uVar1) {
      FUN_008f68f8(local_388,0xff,0);
    }
    uVar1 = (uint)(local_3a0[0] >> 1);
    if ((local_3a0[0] & 1) != 0) {
      uVar1 = local_398;
    }
    if (0xfe < uVar1) {
      FUN_008f68f8(local_3a0,0xff,0);
    }
    pcVar2 = (char *)((ulong)local_370 | 1);
    if ((local_370[0] & 1) != 0) {
      pcVar2 = local_360;
    }
    strcpy(acStack_358,pcVar2);
    pcVar2 = (char *)((ulong)local_388 | 1);
    if ((local_388[0] & 1) != 0) {
      pcVar2 = local_378;
    }
    strcpy(acStack_258,pcVar2);
    pcVar2 = (char *)((ulong)local_3a0 | 1);
    if ((local_3a0[0] & 1) != 0) {
      pcVar2 = local_390;
    }
    strcpy(acStack_158,pcVar2);
    uVar4 = 5;
  }
  else {
    if (param_3 != 4) goto LAB_008f6898;
    pcVar2 = (char *)((ulong)local_388 | 1);
    if ((local_388[0] & 1) != 0) {
      pcVar2 = local_378;
    }
    strcpy(acStack_358,pcVar2);
    uVar4 = 4;
  }
  FUN_00e7d594(uVar4,acStack_358);
LAB_008f6898:
  if ((local_3a0[0] & 1) != 0) {
    operator_delete(local_390);
  }
  if ((local_388[0] & 1) != 0) {
    operator_delete(local_378);
  }
  if ((local_370[0] & 1) != 0) {
    operator_delete(local_360);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




char * FUN_00e73078(char *param_1,char *param_2,undefined8 *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    *param_1 = '[';
    FUN_00e721dc(param_1 + 1,param_2,0x3fc,0);
    pcVar3 = (char *)strlen(param_1);
    pcVar1 = param_1 + (long)pcVar3;
    *pcVar1 = ']';
    pcVar1[1] = '\n';
    pcVar1[2] = '\0';
    if (param_3 != (undefined8 *)0x0) {
      uVar2 = fputs(param_1,(FILE *)*param_3);
      return (char *)(ulong)uVar2;
    }
  }
  return pcVar3;
}




ulong FUN_00e730f0(char *param_1,undefined8 param_2,byte *param_3,undefined8 *param_4)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  ulong uVar5;
  byte *pbVar6;
  
  for (pbVar6 = param_3; uVar3 = (uint)*pbVar6, 1 < uVar3 - 0x22; pbVar6 = pbVar6 + 1) {
    if (uVar3 == 0) {
      bVar2 = false;
      if (param_3 < pbVar6) {
        bVar2 = pbVar6[-1] == 0x20;
      }
      goto LAB_00e73138;
    }
    if (uVar3 == 0x3b) break;
  }
  bVar2 = true;
LAB_00e73138:
  FUN_00e721dc(param_1,param_2,0x3fd,0);
  sVar4 = strlen(param_1);
  pcVar1 = param_1 + sVar4;
  *pcVar1 = '=';
  FUN_00e721dc(pcVar1 + 1,param_3,param_1 + (0x3fe - (long)(pcVar1 + 1)),bVar2);
  uVar5 = strlen(param_1);
  (param_1 + uVar5)[0] = '\n';
  (param_1 + uVar5)[1] = '\0';
  if (param_4 != (undefined8 *)0x0) {
    uVar3 = fputs(param_1,(FILE *)*param_4);
    return (ulong)uVar3;
  }
  return uVar5;
}




bool FUN_00e731c8(char *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,long *param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  fseek((FILE *)*param_3,*param_5,0);
  *param_1 = '\0';
  if (*param_2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    do {
      iVar3 = (int)lVar4;
      fgets(param_1 + iVar3,0x400 - iVar3,(FILE *)*param_3);
      iVar1 = *param_2;
      if (iVar3 < iVar1) {
        lVar4 = (long)iVar3;
        do {
          if (param_1[lVar4] == '\0') break;
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar1);
      }
      iVar3 = (int)lVar4;
    } while (iVar3 < iVar1);
    if (*param_1 != '\0') {
      iVar3 = iVar3 - (uint)(iVar3 == 0x400);
      param_1[iVar3] = '\0';
      fputs(param_1,(FILE *)*param_4);
    }
  }
  lVar4 = ftell((FILE *)*param_3);
  bVar2 = false;
  *param_5 = lVar4;
  *param_2 = 0;
  if (1 < iVar3) {
    iVar3 = strcmp(param_1 + (long)iVar3 + -1,"\n");
    bVar2 = iVar3 == 0;
  }
  return bVar2;
}




int FUN_00e732dc(undefined8 *param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  
  fclose((FILE *)*param_1);
  fclose((FILE *)*param_2);
  remove(param_3);
  FUN_00e721dc(param_4,param_3,0x400,0);
  sVar2 = strlen(param_4);
  param_4[sVar2 - 1] = '~';
  iVar1 = rename(param_4,param_3);
  return iVar1;
}




void FUN_00e73350(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  char local_68 [32];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar1 = 0;
  lVar9 = param_3;
  do {
    uVar7 = uVar1;
    uVar8 = lVar9 + 9;
    iVar4 = (int)lVar9 + (int)(lVar9 / 10) * -10;
    iVar2 = -iVar4;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    local_68[uVar7] = (char)iVar2 + '0';
    uVar1 = uVar7 + 1;
    lVar9 = lVar9 / 10;
  } while (0x12 < uVar8);
  uVar8 = uVar1;
  if (param_3 < 0) {
    uVar8 = uVar7 + 2;
    local_68[uVar1 & 0xffffffff] = '-';
  }
  local_68[(int)uVar8] = '\0';
  sVar6 = strlen(local_68);
  if (1 < (int)sVar6) {
    lVar9 = 0;
    lVar10 = (long)(int)sVar6 + -1;
    do {
      cVar3 = local_68[lVar9];
      local_68[lVar9] = local_68[lVar10];
      local_68[lVar10] = cVar3;
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar9 < lVar10);
  }
  FUN_00e729e0(param_1,param_2,local_68,param_4);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e73468(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char acStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sprintf(acStack_78,"%f",(double)param_1);
  FUN_00e729e0(param_2,param_3,acStack_78,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e734e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 uVar6;
  byte local_c0 [8];
  ulong local_b8;
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long *local_70 [2];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02820610;
  local_70[0] = (long *)0x0;
  (**(code **)(*DAT_03210498 + 0x20))(DAT_03210498,local_70,0);
  plVar4 = local_70[0];
  FUN_008fa54c(local_a8,"com/superevilmegacorp/nuogameentry/");
  FUN_008fa54c(local_c0,param_2);
  uVar1 = (ulong)(local_c0[0] >> 1);
  pvVar2 = (void *)((ulong)local_c0 | 1);
  if ((local_c0[0] & 1) != 0) {
    uVar1 = local_b8;
    pvVar2 = local_b0;
  }
  puVar5 = (ulong *)FUN_0090de84(local_a8,pvVar2,uVar1);
  local_80 = (void *)puVar5[2];
  uStack_88 = puVar5[1];
  local_90 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_008fcdb8(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  pvVar2 = (void *)((ulong)local_70 | 1);
  if (((ulong)local_70[0] & 1) != 0) {
    pvVar2 = local_60;
  }
  uVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,pvVar2);
  uVar6 = (**(code **)(*plVar4 + 0xa8))(plVar4,uVar6);
  param_1[1] = uVar6;
  uVar6 = (**(code **)(*plVar4 + 0x388))(plVar4,uVar6,param_3,param_4);
  param_1[2] = uVar6;
  if (((ulong)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e7368c(void)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  (**(code **)(*DAT_03210498 + 0x20))(DAT_03210498,&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}




void FUN_00e736f0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e736f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00e736fc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e73704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))();
  return;
}




void FUN_00e73708(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e7371c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x388))(param_2,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00e73720(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 uVar6;
  byte local_e0 [8];
  ulong local_d8;
  void *local_d0;
  byte local_c8 [16];
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long *local_70 [2];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02820610;
  local_70[0] = (long *)0x0;
  (**(code **)(*DAT_03210498 + 0x20))(DAT_03210498,local_70,0);
  plVar4 = local_70[0];
  FUN_008fa54c(local_c8,param_2);
  puVar5 = (ulong *)FUN_0090de84(local_c8,"/",1);
  local_a0 = (void *)puVar5[2];
  uStack_a8 = puVar5[1];
  local_b0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_008fa54c(local_e0,param_3);
  uVar1 = (ulong)(local_e0[0] >> 1);
  pvVar2 = (void *)((ulong)local_e0 | 1);
  if ((local_e0[0] & 1) != 0) {
    uVar1 = local_d8;
    pvVar2 = local_d0;
  }
  puVar5 = (ulong *)FUN_0090de84(&local_b0,pvVar2,uVar1);
  local_80 = (void *)puVar5[2];
  uStack_88 = puVar5[1];
  local_90 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_008fcdb8(local_70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  pvVar2 = (void *)((ulong)local_70 | 1);
  if (((ulong)local_70[0] & 1) != 0) {
    pvVar2 = local_60;
  }
  uVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,pvVar2);
  uVar6 = (**(code **)(*plVar4 + 0xa8))(plVar4,uVar6);
  param_1[1] = uVar6;
  uVar6 = (**(code **)(*plVar4 + 0x388))(plVar4,uVar6,param_4,param_5);
  param_1[2] = uVar6;
  if (((ulong)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e73904(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7390c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}




void FUN_00e73910(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e73934(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puStack_40 = &local_a0;
  puStack_48 = &stack0xffffffffffffff90;
  uStack_38 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  (**(code **)(*param_2 + 0x470))
            (param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e739d8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puStack_40 = &local_a0;
  puStack_48 = &stack0xffffffffffffff90;
  uStack_38 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  cVar2 = (**(code **)(*param_2 + 0x3b0))
                    (param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_50)
  ;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2 != '\0');
}




void FUN_00e73a84(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puStack_40 = &local_90;
  puStack_48 = &stack0xffffffffffffff90;
  uStack_38 = 0xffffff80ffffffe0;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  cVar2 = (**(code **)(*param_2 + 0x130))(param_2,param_3,param_4,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2 != '\0');
}




void FUN_00e73b34(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puStack_40 = &local_a0;
  puStack_48 = &stack0xffffffffffffff90;
  uStack_38 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  (**(code **)(*param_2 + 0x410))
            (param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e73bd8(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_70;
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_c0;
  plStack_68 = (long *)&stack0xffffffffffffff70;
  uStack_58 = 0xffffff80ffffffd0;
  local_c0 = param_4;
  uStack_b8 = param_5;
  local_b0 = param_6;
  uStack_a8 = param_7;
  local_a0 = param_8;
  uStack_98 = param_9;
  local_70 = (undefined1 *)register0x00000008;
  local_70 = (undefined1 *)
             (**(code **)(*param_3 + 0x398))
                       (param_3,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                        &local_70);
  plStack_68 = param_3;
  if (local_70 == (undefined1 *)0x0) {
    FUN_00e73ce8(param_1,&local_70,0);
  }
  else {
    puVar2 = (undefined1 *)(**(code **)(*param_3 + 0xa8))(param_3);
    local_70 = puVar2;
    FUN_00e73ce8(param_1,&local_70);
    if (puVar2 != (undefined1 *)0x0) {
      (**(code **)(*param_3 + 0xb0))(param_3,puVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e73ce8(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_2 == 0) {
    FUN_008fcdb8(param_1,&DAT_0320ffa8);
  }
  else {
    uVar2 = (**(code **)(*(long *)param_2[1] + 0x548))((long *)param_2[1],*param_2,0);
    FUN_008fa54c(local_50,uVar2);
    (**(code **)(*(long *)param_2[1] + 0x550))((long *)param_2[1],*param_2,uVar2);
    FUN_008fcdb8(param_1,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e73da8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puStack_40 = &local_a0;
  puStack_48 = &stack0xffffffffffffff90;
  uStack_38 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  (**(code **)(*param_2 + 0x440))
            (param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00e73e4c(void)

{
  return DAT_03210498;
}




void FUN_00e73e58(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  
  *param_1 = param_3;
  param_1[1] = (long)param_2;
  if (param_3 != 0) {
    lVar1 = (**(code **)(*param_2 + 0xa8))(param_2,param_3);
    *param_1 = lVar1;
  }
  return;
}




void FUN_00e73e94(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  ushort *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ushort *puVar7;
  byte *pbVar8;
  
  pbVar8 = &DAT_01e277f2;
  if (param_3 != (byte *)0x0) {
    pbVar8 = param_3;
  }
  *param_1 = 0;
  param_1[1] = param_2;
  uVar1 = FUN_00e6a474(pbVar8);
  puVar2 = operator_new__((ulong)(uVar1 + 1) << 1);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)uVar1;
    uVar6 = uVar5;
    puVar7 = puVar2;
    do {
      uVar6 = uVar6 - 1;
      *puVar7 = (ushort)*pbVar8;
      puVar7 = puVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (uVar6 != 0);
  }
  puVar2[uVar5] = 0;
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x518))((long *)param_1[1],puVar2,uVar1);
  uVar4 = (**(code **)(*(long *)param_1[1] + 0xa8))((long *)param_1[1],uVar3);
  *param_1 = uVar4;
  (**(code **)(*(long *)param_1[1] + 0xb8))((long *)param_1[1],uVar3);
  operator_delete__(puVar2);
  return;
}




void FUN_00e73f68(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e73f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x518))();
  return;
}




void FUN_00e73f74(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e73f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))();
  return;
}




void FUN_00e73f80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  void *__s;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = param_2;
  thunk_FUN_00e7051c(&local_58,param_3);
  uVar6 = FUN_00e70b04(&local_58);
  if ((uVar6 & 1) != 0) {
    FUN_00e705c8(&local_68,&DAT_01e277f2);
    FUN_00910394(&local_58,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  iVar3 = FUN_00e70b14(&local_58);
  uVar4 = iVar3 + 1;
  uVar6 = (long)(int)uVar4 + (long)(int)uVar4;
  if (CARRY8((long)(int)uVar4,(long)(int)uVar4)) {
    uVar6 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar6);
  memset(__s,0,-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1);
  uVar4 = FUN_00e70b14(&local_58);
  if (0 < (int)uVar4) {
    uVar6 = 0;
    do {
      uVar2 = FUN_00e70b28(&local_58,uVar6 & 0xffffffff);
      *(undefined2 *)((long)__s + uVar6 * 2) = uVar2;
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  plVar9 = (long *)param_1[1];
  uVar5 = FUN_00e70b14(&local_58);
  uVar7 = (**(code **)(*plVar9 + 0x518))(plVar9,__s,uVar5);
  uVar8 = (**(code **)(*(long *)param_1[1] + 0xa8))((long *)param_1[1],uVar7);
  *param_1 = uVar8;
  (**(code **)(*(long *)param_1[1] + 0xb8))((long *)param_1[1],uVar7);
  operator_delete__(__s);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void Java_com_superevilmegacorp_nuogameentry_google_NuoGoogleAdvertisingImpl_callbackGoogleAdvertisementID
               (undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_50 [16];
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e73e58(auStack_50,param_1);
  FUN_00e73ce8(local_40,auStack_50);
  FUN_008fce60(&DAT_032104c0,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_00e740f0(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void Java_com_superevilmegacorp_nuogameentry_TextField_keyboardTextEvent
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e73e58(auStack_58,param_1,param_4);
  FUN_00e7412c(&local_48,auStack_58);
  FUN_00910394(&DAT_03214458,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  uVar3 = FUN_00e740f0(auStack_58);
  if (param_3 == 3) {
    uVar3 = FUN_01984a0c(uVar3,&DAT_03214458);
  }
  else if (param_3 == 2) {
    uVar3 = FUN_019849b8(uVar3,&DAT_03214458);
  }
  else if (param_3 == 0) {
    __mutex = (pthread_mutex_t *)(DAT_03214470 + 0x18);
    pthread_mutex_lock(__mutex);
    *(byte *)(DAT_03214470 + 0x14) = *(byte *)(DAT_03214470 + 0x14) | 1;
    uVar2 = pthread_mutex_unlock(__mutex);
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

