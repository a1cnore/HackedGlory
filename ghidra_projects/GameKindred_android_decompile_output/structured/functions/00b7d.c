// functions/00b7d — 54 functions
#include "libGameKindred.h"




void thunk_FUN_00b7d094(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  byte abStack_50 [8];
  size_t sStack_48;
  char *pcStack_40;
  long lStack_38;
  
  lVar4 = tpidr_el0;
  lStack_38 = *(long *)(lVar4 + 0x28);
  FUN_00b9d3d4(abStack_50,param_1 + 0x591);
  sVar1 = (ulong)(abStack_50[0] >> 1);
  if ((abStack_50[0] & 1) != 0) {
    sVar1 = sStack_48;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pcVar7 = (char *)((ulong)abStack_50 | 1);
    pcVar9 = pcVar7;
    if ((abStack_50[0] & 1) != 0) {
      pcVar9 = pcStack_40;
    }
    pcVar6 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar6 = &DAT_0320ffa9;
    }
    if ((abStack_50[0] & 1) == 0) {
      if (sVar1 != 0) {
        lVar8 = -(ulong)(abStack_50[0] >> 1);
        do {
          if (*pcVar7 != *pcVar6) goto LAB_00b7d15c;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00b7d228;
    }
    if ((sVar1 != 0) && (iVar5 = memcmp(pcVar9,pcVar6,sVar1), iVar5 != 0)) goto LAB_00b7d15c;
  }
  else {
LAB_00b7d15c:
    lVar8 = FUN_009580b8();
    bVar3 = *(byte *)(lVar8 + 0x5490);
    sVar1 = (ulong)(abStack_50[0] >> 1);
    if ((abStack_50[0] & 1) != 0) {
      sVar1 = sStack_48;
    }
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(lVar8 + 0x5498);
    }
    if (sVar1 == sVar2) {
      pcVar9 = *(char **)(lVar8 + 0x54a0);
      pcVar7 = (char *)((ulong)abStack_50 | 1);
      pcVar6 = pcVar7;
      if ((abStack_50[0] & 1) != 0) {
        pcVar6 = pcStack_40;
      }
      if ((bVar3 & 1) == 0) {
        pcVar9 = (char *)(lVar8 + 0x5491);
      }
      if ((abStack_50[0] & 1) == 0) {
        if (sVar1 != 0) {
          lVar8 = -(ulong)(abStack_50[0] >> 1);
          do {
            if (*pcVar7 != *pcVar9) goto LAB_00b7d228;
            pcVar7 = pcVar7 + 1;
            lVar8 = lVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (lVar8 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pcVar6,pcVar9,sVar1), iVar5 != 0)) goto LAB_00b7d220;
      (**(code **)(*param_1 + 0x178))(param_1,3,&DAT_0320ffa8);
    }
    if ((abStack_50[0] & 1) == 0) goto LAB_00b7d228;
  }
LAB_00b7d220:
  operator_delete(pcStack_40);
LAB_00b7d228:
  if (*(long *)(lVar4 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b7d094(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  byte local_50 [8];
  size_t local_48;
  char *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_00b9d3d4(local_50,param_1 + 0x591);
  sVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    sVar1 = local_48;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pcVar7 = (char *)((ulong)local_50 | 1);
    pcVar9 = pcVar7;
    if ((local_50[0] & 1) != 0) {
      pcVar9 = local_40;
    }
    pcVar6 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar6 = &DAT_0320ffa9;
    }
    if ((local_50[0] & 1) == 0) {
      if (sVar1 != 0) {
        lVar8 = -(ulong)(local_50[0] >> 1);
        do {
          if (*pcVar7 != *pcVar6) goto LAB_00b7d15c;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00b7d228;
    }
    if ((sVar1 != 0) && (iVar5 = memcmp(pcVar9,pcVar6,sVar1), iVar5 != 0)) goto LAB_00b7d15c;
  }
  else {
LAB_00b7d15c:
    lVar8 = FUN_009580b8();
    bVar3 = *(byte *)(lVar8 + 0x5490);
    sVar1 = (ulong)(local_50[0] >> 1);
    if ((local_50[0] & 1) != 0) {
      sVar1 = local_48;
    }
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(lVar8 + 0x5498);
    }
    if (sVar1 == sVar2) {
      pcVar9 = *(char **)(lVar8 + 0x54a0);
      pcVar7 = (char *)((ulong)local_50 | 1);
      pcVar6 = pcVar7;
      if ((local_50[0] & 1) != 0) {
        pcVar6 = local_40;
      }
      if ((bVar3 & 1) == 0) {
        pcVar9 = (char *)(lVar8 + 0x5491);
      }
      if ((local_50[0] & 1) == 0) {
        if (sVar1 != 0) {
          lVar8 = -(ulong)(local_50[0] >> 1);
          do {
            if (*pcVar7 != *pcVar9) goto LAB_00b7d228;
            pcVar7 = pcVar7 + 1;
            lVar8 = lVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (lVar8 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pcVar6,pcVar9,sVar1), iVar5 != 0)) goto LAB_00b7d220;
      (**(code **)(*param_1 + 0x178))(param_1,3,&DAT_0320ffa8);
    }
    if ((local_50[0] & 1) == 0) goto LAB_00b7d228;
  }
LAB_00b7d220:
  operator_delete(local_40);
LAB_00b7d228:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b7d250(void)

{
  return;
}




char * FUN_00b7d254(void)

{
  return "main_nav_social";
}




void FUN_00b7d260(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b7d26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,1);
  return;
}




void FUN_00b7d270(undefined8 param_1)

{
  FUN_00a9f780(param_1,1);
  return;
}




void FUN_00b7d278(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b7d284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,0);
  return;
}




void FUN_00b7d288(undefined8 param_1)

{
  FUN_00a9f780(param_1,0);
  return;
}




long FUN_00b7d290(long param_1)

{
  return param_1 + -0x2c50;
}




void FUN_00b7d29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b7d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c50) + 0x148))((long *)(param_1 + -0x2c50),1);
  return;
}




void FUN_00b7d2b4(long param_1)

{
  FUN_00a9f780(param_1 + -0x2c50,1);
  return;
}




void FUN_00b7d2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b7d2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c50) + 0x148))((long *)(param_1 + -0x2c50),0);
  return;
}




void FUN_00b7d2dc(long param_1)

{
  FUN_00a9f780(param_1 + -0x2c50,0);
  return;
}




char * FUN_00b7d2ec(void)

{
  return "main_nav_social";
}




void FUN_00b7d2f8(void)

{
  return;
}




void FUN_00b7d2fc(void)

{
  return;
}




void FUN_00b7d300(void)

{
  return;
}




void FUN_00b7d304(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x28;
        puVar2 = puVar2 + 5;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




undefined8 FUN_00b7d380(long *param_1)

{
  (**(code **)(*param_1 + 0x178))(param_1,2,&DAT_0320ffa8);
  return 0;
}




undefined8 FUN_00b7d3ac(long *param_1)

{
  (**(code **)(*param_1 + 0x178))(param_1,1,&DAT_0320ffa8);
  return 0;
}




undefined8 FUN_00b7d3d8(long *param_1)

{
  (**(code **)(*param_1 + 0x178))(param_1,3,&DAT_0320ffa8);
  return 0;
}




void FUN_00b7d404(undefined8 *param_1)

{
  long lVar1;
  code *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ed45a4();
  FUN_009e0878(param_1 + 0x1b);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_027e76d8;
  param_1[0x1b] = &PTR_FUN_027e7858;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_00ed2460(param_1 + 0x1f);
  local_40 = DAT_03210c7c;
  *(undefined1 *)(param_1 + 0x53) = 0;
  local_68 = FUN_00b7d4f8;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  local_40 = DAT_03210c80;
  local_68 = thunk_FUN_00b7d950;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  FUN_009e0894(param_1 + 0x1b);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7d4f8(long param_1)

{
  FUN_00aa1814(param_1 + 0xf8);
  FUN_00a9dbbc(0);
  FUN_00925894();
  return;
}




void thunk_FUN_00b7d950(long param_1)

{
  FUN_00b7d580();
  FUN_00a9dbbc(1);
  FUN_00ed2508(param_1 + 0xf8);
  FUN_00aa1814(0);
  return;
}




void FUN_00b7d51c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_027e76d8;
  puVar1 = param_1 + 0x1b;
  *puVar1 = &PTR_FUN_027e7858;
  FUN_00b7d580();
  FUN_009e08a0(puVar1);
  FUN_00ed24bc(param_1 + 0x1f);
  FUN_009e088c(puVar1);
  thunk_FUN_00f13d08(param_1);
  return;
}




void FUN_00b7d580(long param_1)

{
  long *plVar1;
  
  if (*(long **)(param_1 + 0xe8) == (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0xe0);
    if (plVar1 == (long *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))();
    plVar1 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if (plVar1 == (long *)0x0) goto LAB_00b7d5cc;
  }
  (**(code **)(*plVar1 + 0x68))();
LAB_00b7d5cc:
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_009e0894(param_1 + 0xd8);
  return;
}




void FUN_00b7d5ec(long param_1)

{
  FUN_00b7d51c(param_1 + -0xd8);
  return;
}




void FUN_00b7d5f4(void *param_1)

{
  FUN_00b7d51c();
  operator_delete(param_1);
  return;
}




void FUN_00b7d618(long param_1)

{
  FUN_00b7d51c((void *)(param_1 + -0xd8));
  operator_delete((void *)(param_1 + -0xd8));
  return;
}




void FUN_00b7d640(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_00ed4748();
  if ((uVar2 & 1) != 0) {
    lVar1 = FUN_00e829e0();
    if (((*(int *)(lVar1 + 0xa0) != 6) && (lVar1 = FUN_00e829e0(), *(int *)(lVar1 + 0xa0) != 7)) &&
       (*(char *)(param_1 + 0x298) == '\0')) {
      uVar3 = FUN_009b8d90();
      FUN_009ba2b4(uVar3,PTR_s_screen_main_hub_02be3690,0);
      return;
    }
  }
  return;
}




void FUN_00b7d6ac(long *param_1,int param_2,byte param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  
  *(int *)(param_1 + 0x1e) = param_2;
  *(byte *)(param_1 + 0x53) = param_3 & 1;
  if ((param_2 != 2) && (uVar1 = FUN_00ed4748(param_1), (uVar1 & 1) != 0)) {
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_character_lobby_entered.mp3",0,0);
    FUN_008fa2a8();
  }
  FUN_00b7d580(param_1);
  switch((int)param_1[0x1e]) {
  case 0:
  case 3:
    FUN_009e08a0(param_1 + 0x1b);
    pvVar2 = operator_new(0x1658);
    FUN_00bd3218(pvVar2,param_3 & 1);
    lVar3 = *param_1;
    param_1[0x1d] = (long)pvVar2;
    break;
  case 1:
  case 4:
    FUN_009e08a0(param_1 + 0x1b);
    pvVar2 = operator_new(0x1428);
    FUN_00bcb144(pvVar2,(int)param_1[0x1e],param_3 & 1);
    lVar3 = *param_1;
    param_1[0x1c] = (long)pvVar2;
    break;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b7d794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x78))(param_1,*(undefined8 *)((long)pvVar2 + 8),1);
  return;
}




void FUN_00b7d7a8(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,param_2 + 1);
  FUN_00cead10(local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_009188a4();
  FUN_0091a50c();
  switch(*param_2) {
  case 0:
    uVar3 = 0;
    break;
  case 1:
    FUN_00ceace8();
    uVar2 = FUN_00ceaf9c();
    if ((uVar2 & 1) == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 4;
    }
    break;
  case 2:
    uVar3 = 2;
    break;
  case 3:
  case 4:
    uVar3 = 3;
    break;
  default:
    goto switchD_00b7d818_default;
  }
  FUN_00b7d6ac(param_1,uVar3,0);
switchD_00b7d818_default:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b7d884(long param_1)

{
  FUN_00b7d7a8(param_1 + -0xd8);
  return;
}




void FUN_00b7d88c(void)

{
  return;
}




void FUN_00b7d890(void)

{
  return;
}




void FUN_00b7d894(void)

{
  return;
}




void FUN_00b7d898(void)

{
  return;
}




void FUN_00b7d89c(void)

{
  return;
}




void FUN_00b7d8a0(void)

{
  return;
}




void FUN_00b7d8a4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*(byte *)(param_1 + 0x84) >> 3 & 1) != 0) || (*(int *)(param_1 + 0xf0) == 2)) {
    FUN_00f048e0(auStack_48,DAT_03133754,0);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7d924(long param_1)

{
  FUN_00b7d8a4(param_1 + -0xd8);
  return;
}




void FUN_00b7d92c(long param_1)

{
  FUN_00aa1814(param_1 + 0xf8);
  FUN_00a9dbbc(0);
  FUN_00925894();
  return;
}




void FUN_00b7d950(long param_1)

{
  FUN_00b7d580();
  FUN_00a9dbbc(1);
  FUN_00ed2508(param_1 + 0xf8);
  FUN_00aa1814(0);
  return;
}




void FUN_00b7d984(void)

{
  return;
}




void FUN_00b7d988(void)

{
  return;
}




void FUN_00b7d98c(void)

{
  return;
}




void FUN_00b7d990(void)

{
  return;
}




void FUN_00b7d994(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027e78b0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0d160(plVar2);
  FUN_00b15e58(param_1 + 0x5b,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5b,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20,&DAT_01bee7fa);
  uVar3 = FUN_00e6ce7c("MENU_CONNECTING_TO_GAME",0);
  FUN_00f0d75c(plVar2,uVar3);
  return;
}




void FUN_00b7dab8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027e78b0;
  param_1[0x5b] = &PTR_FUN_027d47d0;
  lVar1 = 0x4b0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x2a0) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x358) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x370);
    FUN_00f13d08((long)param_1 + lVar1 + 0x2a0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != 0);
  FUN_00f13d08(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b7db7c(void *param_1)

{
  FUN_00b7dab8();
  operator_delete(param_1);
  return;
}




void FUN_00b7dba0(long param_1,ulong param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  if ((param_2 & 1) != 0) {
    FUN_00b16058();
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
    return;
  }
  FUN_00b16600(param_1 + 0x2d8);
  FUN_00f01980(param_1);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar3);
  FUN_00efcb24(puVar3,FUN_009a7608);
  FUN_00efddc4(0,puVar3);
  FUN_00f022a0(param_1,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f022a0(param_1,puVar3);
  return;
}




void FUN_00b7dd54(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00f0025c(&uStack_64,&local_68);
  FUN_00f13f08(uStack_64,local_68,param_1 + 0xb8);
  FUN_00f07a78(0,0,param_1 + 0xb8,0);
  fVar7 = *(float *)(param_1 + 800);
  lVar1 = param_1 + 0x2d8;
  if ((fVar7 != 3.0) || (fVar7 = *(float *)(param_1 + 0x324), fVar7 != 3.0)) {
    uVar6 = NEON_fmov(0x40400000,4);
    *(undefined8 *)(param_1 + 800) = uVar6;
    FUN_0091ada4(lVar1);
  }
  fVar4 = DAT_02be366c;
  FUN_00f13e54(lVar1);
  fVar7 = local_68 - fVar7;
  fVar5 = fVar7 - DAT_02be366c;
  if ((*(float *)(param_1 + 0x318) != fVar4) ||
     (fVar7 = *(float *)(param_1 + 0x31c), fVar7 != fVar5)) {
    *(float *)(param_1 + 0x318) = fVar4;
    *(float *)(param_1 + 0x31c) = fVar5;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x2d8) + 0x28))(lVar1,&local_60);
  fVar4 = DAT_02be366c;
  fVar5 = *(float *)(param_1 + 0x31c);
  plVar2 = (long *)(param_1 + 0x1a8);
  FUN_00f13e54(lVar1);
  fVar7 = (fVar5 - fVar7) + -20.0;
  if ((*(float *)(param_1 + 0x1e8) != fVar4) || (*(float *)(param_1 + 0x1ec) != fVar7)) {
    *(float *)(param_1 + 0x1e8) = fVar4;
    *(float *)(param_1 + 0x1ec) = fVar7;
    FUN_0091ada4(plVar2);
  }
  local_60 = 0x3f80000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_60);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7dedc(undefined8 *param_1)

{
  FUN_00b89cd8();
  *param_1 = &PTR_FUN_027e79f8;
  FUN_00f13ca4(param_1 + 0x19);
  FUN_00f13ca4(param_1 + 0x30);
  FUN_00f0e4a8(param_1 + 0x47);
  FUN_00f0e4a8(param_1 + 0x65);
  FUN_00f0e4a8(param_1 + 0x83);
  FUN_00f0e4a8(param_1 + 0xa1);
  FUN_00f0d160(param_1 + 0xbf);
  FUN_00f0d160(param_1 + 0xe5);
  FUN_00ab6c24(param_1 + 0x10b,0);
  FUN_00b7df64(param_1);
  FUN_00b7e2bc(param_1);
  return;
}




void FUN_00b7df64(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  plVar1 = param_1 + 0x30;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x65;
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,param_1 + 0x47,1);
  plVar3 = param_1 + 0x83;
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,param_1 + 0xa1,1);
  plVar4 = param_1 + 0xbf;
  FUN_00f023ec(plVar1,plVar4,1);
  plVar5 = param_1 + 0xe5;
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,param_1 + 0x10b,1);
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) | 0x10;
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_shadow");
  uVar6 = *(uint *)((long)param_1 + 0x3ac);
  if ((uVar6 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x3ac) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e670(plVar2,&DAT_01bee802,2);
  FUN_00f0e548(param_1 + 0x47,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_deserter_icon_backdrop");
  FUN_00f0e670(plVar3,&DAT_01bee7fa,2);
  if ((*(uint *)((long)param_1 + 0x49c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x49c) = *(uint *)((long)param_1 + 0x49c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(param_1 + 0xa1,PTR_s_build___Splash_GameOverLose_tga_02be3490,"Splash_GameOverLose");
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8);
  uVar8 = FUN_00e6ce7c("MAIN_DESERTER_TITLE",0);
  FUN_00f0d75c(plVar4,uVar8);
  uVar6 = *(uint *)((long)param_1 + 0x67c);
  if ((uVar6 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x67c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5280;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0d7fc(plVar4,&DAT_01bee802);
  uVar8 = FUN_00e6ce7c("MAIN_DESERTER_FULL_WARNING_TEXT",0);
  FUN_00f0d75c(plVar5,uVar8);
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  FUN_00f0dac8(plVar5,3);
  FUN_00f0dad0(0x44580000,plVar5,1);
  uVar8 = FUN_00e6ce7c("GENERIC_BUTTON_CONTINUE",0);
  FUN_00ab703c(0x42800000,0x42c80000,0x43c80000,param_1 + 0x10b,0,uVar8,&DAT_01bee7fa,&DAT_03218ef8,
               0);
  local_70 = DAT_03210c64;
  local_98 = FUN_00b7ea30;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x10c,&local_98);
  lVar9 = NEON_fmov(0x41c00000,4);
  param_1[0x116] = lVar9;
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

