// functions/0092e — 53 functions
#include "libGameKindred.h"




void FUN_0092e068(void)

{
  DAT_02c7bf84 = NEON_fmov(0x3f800000,4);
  DAT_02c7bf70 = 0x100;
  DAT_02c7bf7c = 0x100;
  DAT_02c7bf73 = 0x1010101;
  DAT_02c7bf9c = 1;
  DAT_02c7bf78 = 0x1010101;
  DAT_02c7bf72 = 0;
  DAT_02c7bf77 = 0;
  DAT_02c7bf7f = 0x1000101;
  DAT_02c7bf94 = 0;
  DAT_02c7bf8c = 0;
  DAT_02c7bfa4 = 0x200000000;
  return;
}




void FUN_0092e0c8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char acStack_138 [255];
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e6a584(acStack_138,param_1,0xff);
  local_39 = 0;
  pcVar4 = strtok(acStack_138," ");
  if (pcVar4 != (char *)0x0) {
    uVar2 = FUN_00e6a474("en");
    iVar3 = FUN_00e6a59c(pcVar4,"en",uVar2);
    if (iVar3 != 0) {
      uVar2 = FUN_00e6a474(&DAT_01b95216);
      iVar3 = FUN_00e6a59c(pcVar4,&DAT_01b95216,uVar2);
      if (iVar3 == 0) {
        DAT_02c7bf94._0_4_ = 1;
        goto LAB_0092e2d8;
      }
      uVar2 = FUN_00e6a474(&DAT_01b9521a);
      iVar3 = FUN_00e6a59c(pcVar4,&DAT_01b9521a,uVar2);
      if (iVar3 == 0) {
        DAT_02c7bf94._0_4_ = 2;
        goto LAB_0092e2d8;
      }
      uVar2 = FUN_00e6a474("fr");
      iVar3 = FUN_00e6a59c(pcVar4,"fr",uVar2);
      if (iVar3 == 0) {
        DAT_02c7bf94._0_4_ = 3;
        goto LAB_0092e2d8;
      }
      uVar2 = FUN_00e6a474(&DAT_01b951f9);
      iVar3 = FUN_00e6a59c(pcVar4,&DAT_01b951f9,uVar2);
      if (iVar3 == 0) {
        DAT_02c7bf94._0_4_ = 6;
        goto LAB_0092e2d8;
      }
      uVar2 = FUN_00e6a474(&DAT_01b951fd);
      iVar3 = FUN_00e6a59c(pcVar4,&DAT_01b951fd,uVar2);
      if (iVar3 == 0) {
        DAT_02c7bf94._0_4_ = 8;
        goto LAB_0092e2d8;
      }
      uVar2 = FUN_00e6a474(&DAT_01b9521e);
      iVar3 = FUN_00e6a59c(pcVar4,&DAT_01b9521e,uVar2);
      if (iVar3 == 0) {
        DAT_02c7bf94._0_4_ = 0xb;
        goto LAB_0092e2d8;
      }
      uVar2 = FUN_00e6a474(&DAT_01b9209e);
      iVar3 = FUN_00e6a59c(pcVar4,&DAT_01b9209e,uVar2);
      if (iVar3 == 0) {
        DAT_02c7bf94._0_4_ = 0xe;
        goto LAB_0092e2d8;
      }
      uVar2 = FUN_00e6a474("zh-Hans");
      iVar3 = FUN_00e6a59c(pcVar4,"zh-Hans",uVar2);
      if (iVar3 != 0) {
        uVar2 = FUN_00e6a474("zh-chs");
        iVar3 = FUN_00e6a59c(pcVar4,"zh-chs",uVar2);
        if (iVar3 != 0) {
          uVar2 = FUN_00e6a474("zh-cn");
          iVar3 = FUN_00e6a59c(pcVar4,"zh-cn",uVar2);
          if (iVar3 != 0) {
            uVar2 = FUN_00e6a474("zh-SG");
            iVar3 = FUN_00e6a59c(pcVar4,"zh-SG",uVar2);
            if (iVar3 != 0) {
              strtok((char *)0x0," ");
              goto LAB_0092e2d4;
            }
          }
        }
      }
      DAT_02c7bf94._0_4_ = 0xf;
      goto LAB_0092e2d8;
    }
  }
LAB_0092e2d4:
  DAT_02c7bf94._0_4_ = 0;
LAB_0092e2d8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0092e34c(char *param_1)

{
  int iVar1;
  
  iVar1 = strcasecmp(param_1,"high");
  if (iVar1 == 0) {
    DAT_02c7bf94._4_4_ = 1;
  }
  else {
    iVar1 = strcasecmp(param_1,"medium");
    if (iVar1 == 0) {
      DAT_02c7bf94._4_4_ = 2;
    }
    else {
      iVar1 = strcasecmp(param_1,"low");
      DAT_02c7bf94._4_4_ = 3;
      if (iVar1 != 0) {
        DAT_02c7bf94._4_4_ = 0;
      }
    }
  }
  return;
}




void FUN_0092e3c4(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcasecmp(param_1,"energy_savings");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcasecmp(param_1,"default");
    uVar2 = 1;
    if (iVar1 != 0) {
      iVar1 = strcasecmp(param_1,"best_performance");
      uVar2 = 1;
      if (iVar1 == 0) {
        uVar2 = 2;
      }
    }
  }
  DAT_02c7bf9c._0_4_ = uVar2;
  return;
}




void FUN_0092e434(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcasecmp(param_1,"default_layout");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcasecmp(param_1,"right_phone_items_and_abilities");
    if (iVar1 == 0) {
      uVar2 = 6;
    }
    else {
      iVar1 = strcasecmp(param_1,"right_phone_items_only");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcasecmp(param_1,"right_phone_abilities_only");
        if (iVar1 == 0) {
          uVar2 = 4;
        }
        else {
          iVar1 = FUN_00e70218(&DAT_0320ffc0);
          uVar2 = 0;
          if (iVar1 != 2) {
            iVar1 = FUN_00e70218(&DAT_0320ffc0);
            uVar2 = 0;
            if (iVar1 != 3) {
              uVar2 = 2;
            }
          }
        }
      }
    }
  }
  DAT_02c7bfa4._4_4_ = uVar2;
  return;
}




void FUN_0092e4f8(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = strcasecmp(param_1,"small");
  if (iVar1 == 0) {
    DAT_02c7bf9c._4_4_ = 0;
    return;
  }
  iVar1 = strcasecmp(param_1,"medium");
  if (iVar1 == 0) {
    DAT_02c7bf9c._4_4_ = 1;
    return;
  }
  iVar1 = strcasecmp(param_1,"large");
  if (iVar1 == 0) {
LAB_0092e588:
    DAT_02c7bf9c._4_4_ = 2;
  }
  else {
    iVar1 = strcasecmp(param_1,"huge");
    if (iVar1 != 0) {
      if (param_2 == 0) {
        iVar1 = FUN_00e70218(&DAT_0320ffc0);
        DAT_02c7bf9c._4_4_ = (uint)(iVar1 == 2);
        return;
      }
      if (param_2 == 1) goto LAB_0092e588;
      if (param_2 != 2) {
        DAT_02c7bf9c._4_4_ = 0;
        return;
      }
    }
    DAT_02c7bf9c._4_4_ = 3;
  }
  return;
}




undefined8 FUN_0092e5bc(void)

{
  return 1;
}




undefined1 FUN_0092e5c4(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return (undefined1)DAT_02c7bf70;
}




undefined1 FUN_0092e5ec(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf70._1_1_;
}




undefined1 FUN_0092e618(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf72;
}




undefined1 FUN_0092e644(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return (undefined1)DAT_02c7bf73;
}




undefined1 FUN_0092e670(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf73._1_1_;
}




undefined1 FUN_0092e69c(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf73._2_1_;
}




undefined1 FUN_0092e6c8(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf73._3_1_;
}




undefined1 FUN_0092e6f4(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf77;
}




byte FUN_0092e720(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bfa4._4_1_ >> 2 & 1;
}




byte FUN_0092e750(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bfa4._4_1_ >> 1 & 1;
}




undefined1 FUN_0092e780(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return (undefined1)DAT_02c7bf7f;
}




undefined1 FUN_0092e7ac(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf7f._1_1_;
}




undefined1 FUN_0092e7d8(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return (undefined1)DAT_02c7bf78;
}




undefined1 FUN_0092e804(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf78._1_1_;
}




undefined1 FUN_0092e830(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf78._3_1_;
}




undefined1 FUN_0092e85c(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return (undefined1)DAT_02c7bf7c;
}




undefined1 FUN_0092e888(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf7c._1_1_;
}




undefined1 FUN_0092e8b4(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf7e;
}




void FUN_0092e8e0(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  FUN_0093d4fc();
  return;
}




void FUN_0092e900(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  FUN_0093d504();
  return;
}




byte FUN_0092e920(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  
  if (((DAT_02c7bfb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02c7bfb8), iVar2 != 0)) {
    uVar3 = FUN_00ec5f3c();
    bVar1 = 0;
    if ((uVar3 & 1) != 0) {
      bVar1 = FUN_00ec5f44();
      bVar1 = bVar1 & 1;
    }
    DAT_02c7bfb0 = bVar1;
    __cxa_guard_release(&DAT_02c7bfb8);
  }
  bVar1 = FUN_00ec5f3c();
  return bVar1 & DAT_02c7bfb0 & 1;
}




undefined8 FUN_0092e990(void)

{
  return 1;
}




float FUN_0092e998(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return (float)DAT_02c7bf84 * 1.3333334;
}




float FUN_0092e9d0(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf84._4_4_ * 1.3333334;
}




bool FUN_0092ea08(void)

{
  int iVar1;
  
  iVar1 = FUN_0092ea24();
  return iVar1 == 1;
}




void FUN_0092ea24(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  if (DAT_02c7bf94._4_4_ != 0) {
    return;
  }
  FUN_0092eec4();
  return;
}




bool FUN_0092ea58(void)

{
  int iVar1;
  
  iVar1 = FUN_0092ea24();
  return iVar1 - 1U < 2;
}




bool FUN_0092ea78(void)

{
  return 0x80000000 < DAT_0320ffd8;
}




undefined8 FUN_0092ea94(void)

{
  return 0;
}




bool FUN_0092ea9c(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf9c._4_4_ == 0;
}




bool FUN_0092ead0(float param_1,float param_2)

{
  if (1.5 < param_1 / param_2) {
    return true;
  }
  return ABS(param_1 / param_2 + -1.5) < 0.05;
}




ulong FUN_0092eb08(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e70218(&DAT_0320ffc0);
  if ((int)uVar2 != 1) {
    iVar1 = FUN_00e70218(&DAT_0320ffc0);
    uVar2 = (ulong)(iVar1 == 4);
  }
  return uVar2;
}




bool FUN_0092eb40(void)

{
  int iVar1;
  
  iVar1 = FUN_00e70218(&DAT_0320ffc0);
  return iVar1 == 2;
}




undefined8 FUN_0092eb64(void)

{
  return 1;
}




undefined8 FUN_0092eb6c(undefined8 param_1)

{
  FUN_008fce60(param_1,&DAT_0320ffa8);
  return 0;
}




void FUN_0092eb8c(undefined4 *param_1,undefined4 *param_2)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  *param_1 = (undefined4)DAT_02c7bf8c;
  *param_2 = DAT_02c7bf8c._4_4_;
  return;
}




undefined1 FUN_0092ebd4(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf7f._3_1_;
}




undefined4 FUN_0092ec00(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return (undefined4)DAT_02c7bf94;
}




void FUN_0092ec2c(undefined8 param_1)

{
  char *pcVar1;
  
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  switch((undefined4)DAT_02c7bf94) {
  default:
    pcVar1 = "en";
    break;
  case 1:
    pcVar1 = "de";
    break;
  case 2:
    pcVar1 = "es";
    break;
  case 3:
    pcVar1 = "fr";
    break;
  case 4:
    pcVar1 = "id";
    break;
  case 5:
    pcVar1 = "it";
    break;
  case 6:
    pcVar1 = "ja";
    break;
  case 7:
    pcVar1 = "km";
    break;
  case 8:
    pcVar1 = "ko";
    break;
  case 9:
    pcVar1 = "pt";
    break;
  case 10:
    pcVar1 = "pt-BR";
    break;
  case 0xb:
    pcVar1 = "ru";
    break;
  case 0xc:
    pcVar1 = "th";
    break;
  case 0xd:
    pcVar1 = "tr";
    break;
  case 0xe:
    pcVar1 = "vn";
    break;
  case 0xf:
    pcVar1 = "zh-CN";
    break;
  case 0x10:
    pcVar1 = "zh-TW";
  }
  FUN_008fa54c(param_1,pcVar1);
  return;
}




char * FUN_0092ed4c(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  if ((uint)DAT_02c7bf94 < 0x11) {
    return (&PTR_s_English_027b9e30)[(int)(uint)DAT_02c7bf94];
  }
  return "languageUnknown";
}




void FUN_0092ed98(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  char *pcVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  bVar2 = DAT_02c7bfac;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((bVar2 & 1) == 0) {
    FUN_0092dba4();
  }
  switch((undefined4)DAT_02c7bf94) {
  case 1:
    pcVar3 = ".de";
    break;
  case 2:
    pcVar3 = ".es";
    break;
  case 3:
    pcVar3 = ".fr";
    break;
  default:
    goto switchD_0092edf8_caseD_4;
  case 5:
    pcVar3 = ".it";
    break;
  case 6:
    pcVar3 = ".ja";
    break;
  case 8:
    pcVar3 = ".ko";
    break;
  case 10:
    pcVar3 = ".pt";
    break;
  case 0xb:
    pcVar3 = ".ru";
    break;
  case 0xd:
    pcVar3 = ".tr";
    break;
  case 0xf:
    pcVar3 = ".zh";
    break;
  case 0x10:
    pcVar3 = ".zh-Hant";
  }
  FUN_008fa54c(local_40,pcVar3);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
switchD_0092edf8_caseD_4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_0092eec4(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  iVar3 = FUN_00e70218(&DAT_0320ffc0);
  iVar4 = FUN_00e70220(&DAT_0320ffc0);
  if ((iVar3 == 3) || (iVar4 == 0)) {
    return 1;
  }
  if (iVar4 == 0x19) {
    uVar5 = FUN_00e74f14(&DAT_0320ffc0);
    iVar3 = (int)uVar5;
    if (iVar3 == 1) {
      return uVar5;
    }
    if (0x31 < iVar3) {
      bVar1 = SBORROW4(iVar3,0x52);
      bVar2 = iVar3 + -0x52 < 0;
LAB_0092ef68:
      uVar6 = 1;
      if (bVar2 != bVar1) {
        uVar6 = 2;
      }
      return (ulong)uVar6;
    }
  }
  else if (iVar3 == 1) {
    if (3 < iVar4) {
      bVar1 = SBORROW4(iVar4,6);
      bVar2 = iVar4 + -6 < 0;
      goto LAB_0092ef68;
    }
  }
  else if (iVar3 == 4) {
    if (0xc < iVar4) {
      uVar6 = 1;
      if (iVar4 == 0xd) {
        uVar6 = 2;
      }
      return (ulong)uVar6;
    }
  }
  else {
    if (iVar3 != 2) {
      return 1;
    }
    if (0x11 < iVar4) {
      bVar1 = SBORROW4(iVar4,0x14);
      bVar2 = iVar4 + -0x14 < 0;
      goto LAB_0092ef68;
    }
  }
  return 3;
}




undefined4 FUN_0092ef90(void)

{
  return DAT_02c7bf94._4_4_;
}




undefined4 FUN_0092efa0(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return (undefined4)DAT_02c7bf9c;
}




float FUN_0092efcc(void)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  void *__s;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar6 = FUN_00e70220(&DAT_0320ffc0);
  if (iVar6 == 0x19) {
    iVar6 = FUN_0092ea24();
    if (2 < iVar6 - 1U) {
      FUN_008fa54c(local_70,&DAT_0320fff0);
      uVar9 = (ulong)(local_70[0] >> 1);
      pvVar4 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        uVar9 = local_68;
        pvVar4 = local_60;
      }
      pvVar1 = (void *)((long)pvVar4 + uVar9);
      uVar8 = uVar9;
      pvVar7 = pvVar4;
      while( true ) {
        __s = pvVar4;
        if ((((long)uVar8 < 0xd) || (uVar8 - 0xc == 0)) ||
           (pvVar7 = memchr(pvVar7,0x53,uVar8 - 0xc), pvVar7 == (void *)0x0))
        goto joined_r0x0092f0dc;
        iVar6 = memcmp(pvVar7,"SHIELD Tablet",0xd);
        if (iVar6 == 0) break;
        pvVar7 = (void *)((long)pvVar7 + 1);
        uVar8 = (long)pvVar1 - (long)pvVar7;
      }
      if ((pvVar7 != pvVar1) && ((long)pvVar7 - (long)pvVar4 != -1)) goto LAB_0092f1a8;
joined_r0x0092f0dc:
      do {
        if (((long)uVar9 < 7) ||
           ((uVar9 - 6 == 0 || (pvVar7 = memchr(__s,0x4e,uVar9 - 6), pvVar7 == (void *)0x0))))
        goto LAB_0092f140;
        iVar6 = memcmp(pvVar7,"Nexus 9",7);
        if (iVar6 == 0) goto LAB_0092f12c;
        uVar9 = (long)pvVar1 - ((long)pvVar7 + 1);
        __s = (void *)((long)pvVar7 + 1);
      } while( true );
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return *(float *)(&DAT_01b952e0 + (long)(int)(iVar6 - 1U) * 4);
    }
    goto LAB_0092f268;
  }
LAB_0092f234:
  fVar10 = 1.0;
  goto LAB_0092f238;
LAB_0092f12c:
  if ((pvVar7 != pvVar1) && ((long)pvVar7 - (long)pvVar4 != -1)) goto LAB_0092f1a8;
LAB_0092f140:
  iVar6 = FUN_00e70218(&DAT_0320ffc0);
  uVar2 = iVar6 - 1;
  fVar10 = 0.0;
  fVar12 = 0.0;
  if (uVar2 < 4) {
    fVar10 = *(float *)(&DAT_01b952ec + (long)(int)uVar2 * 4);
    fVar12 = *(float *)(&DAT_01b952fc + (long)(int)uVar2 * 4);
  }
  if (DAT_03210438 <= fVar12) {
LAB_0092f1a8:
    fVar10 = 1.0;
    bVar5 = true;
  }
  else {
    if (DAT_03210438 <= fVar10) {
      fVar10 = 1.0;
    }
    else {
      fVar10 = (float)NEON_fminnm(fVar10 / DAT_03210438,0x3f800000);
      if (fVar10 <= 0.5) {
        fVar10 = 0.5;
      }
    }
    iVar6 = FUN_00e74f14(&DAT_0320ffc0);
    fVar11 = fVar10;
    if (iVar6 != 1) {
      if (iVar6 < 0x19) {
        fVar11 = 0.5;
      }
      else {
        if (0x25 < iVar6) {
          fVar11 = fVar10 * 0.8;
          if (0x31 < iVar6) {
            fVar11 = fVar10;
          }
          goto LAB_0092f208;
        }
        fVar11 = 0.625;
      }
      fVar11 = fVar10 * fVar11;
    }
LAB_0092f208:
    bVar5 = false;
    fVar10 = fVar12 / DAT_03210438;
    if (fVar12 <= fVar11 * DAT_03210438) {
      fVar10 = fVar11;
    }
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (bVar5) goto LAB_0092f234;
LAB_0092f238:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return fVar10;
  }
LAB_0092f268:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 thunk_FUN_0092e85c(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return (undefined1)DAT_02c7bf7c;
}

