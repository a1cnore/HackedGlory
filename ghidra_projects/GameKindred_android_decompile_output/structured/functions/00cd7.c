// functions/00cd7 — 22 functions
#include "libGameKindred.h"




undefined8 FUN_00cd702c(char *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*param_1 == '\0') || (iVar2 = FUN_00cd6e08(param_1), 0 < iVar2)) {
    bVar1 = param_1[0x50];
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) goto LAB_00cd708c;
    }
    else if (*(long *)(param_1 + 0x58) == 0) goto LAB_00cd708c;
    uVar3 = FUN_00cab8b4(param_1 + 0x68);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_00cabb6c(param_1 + 0x50);
      return uVar4;
    }
    uVar4 = 1;
  }
  else {
LAB_00cd708c:
    uVar4 = 0;
  }
  return uVar4;
}




undefined8 FUN_00cd70a4(char *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*param_1 == '\0') || (iVar2 = FUN_00cd6e08(param_1), 0 < iVar2)) {
    bVar1 = param_1[0x98];
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) goto LAB_00cd7104;
    }
    else if (*(long *)(param_1 + 0xa0) == 0) goto LAB_00cd7104;
    uVar3 = FUN_00cab8b4(param_1 + 0xb0);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_00cabb6c(param_1 + 0x98);
      return uVar4;
    }
    uVar4 = 1;
  }
  else {
LAB_00cd7104:
    uVar4 = 0;
  }
  return uVar4;
}




undefined8 FUN_00cd711c(long param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    return **(undefined8 **)(param_1 + 0x48);
  }
  return 0;
}




void FUN_00cd7138(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_008fce60(param_1 + 0x28);
  FUN_009697c8(local_60,param_2,".PRIMARY");
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  FUN_0099cfec(param_1 + 0xe0,pvVar1,0);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_009697c8(local_60,param_2,".ALTERNATE");
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  FUN_0099cfec(param_1 + 0x100,pvVar1,0);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00cd7228(char *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 == '\0') {
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_00cd7270(param_1);
    iVar1 = *(int *)(param_1 + 4);
    lVar3 = FUN_00e85318(0);
    lVar3 = (lVar2 + iVar1) - lVar3;
  }
  return lVar3;
}




long FUN_00cd7270(char *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*param_1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_00e85318(0);
    lVar3 = FUN_00e85318(0);
    lVar4 = (long)*(int *)(param_1 + 4);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar3 / lVar4;
    }
    lVar2 = lVar2 - (lVar3 - lVar1 * lVar4);
  }
  return lVar2;
}




void FUN_00cd72c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_00a99760();
  *param_1 = &PTR_FUN_0280df60;
  FUN_00cd7af0(param_1 + 3);
  *(undefined1 *)(param_1 + 0x180b) = 0;
  param_1[0x180a] = 0;
  param_1[0x180e] = 0;
  param_1[0x180d] = 0;
  param_1[0x180c] = 0;
  param_1[0x180f] = param_2;
  return;
}




void FUN_00cd732c(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_00940bbc();
  *(undefined1 *)(param_1 + 0xc058) = 0;
  *(undefined8 *)(param_1 + 0xc050) = 0;
  *(bool *)(param_1 + 0xc050) = *(char *)(lVar2 + 0xe) != '\0' && 0 < *(int *)(param_2 + 0x2c);
  uVar1 = 0;
  if (*(char *)(lVar2 + 0xf) != '\0') {
    uVar1 = *(undefined1 *)(param_2 + 0x85);
  }
  *(undefined1 *)(param_1 + 0xc051) = uVar1;
  uVar1 = 0;
  if (*(char *)(lVar2 + 0x10) != '\0') {
    uVar1 = *(undefined1 *)(param_2 + 0x86);
  }
  *(undefined1 *)(param_1 + 0xc052) = uVar1;
  uVar1 = 0;
  if (*(char *)(lVar2 + 0x11) != '\0') {
    uVar1 = *(undefined1 *)(param_2 + 0x87);
  }
  *(undefined1 *)(param_1 + 0xc053) = uVar1;
  if ((*(char *)(lVar2 + 0xd) != '\0') && (uVar3 = FUN_00cd73f4(), (uVar3 & 1) != 0)) {
    FUN_008fce60(param_1 + 0xc060,&DAT_0313e170);
  }
  return;
}




bool FUN_00cd73f4(char *param_1)

{
  if (((((*param_1 == '\0') && (param_1[1] == '\0')) && (param_1[2] == '\0')) &&
      ((param_1[3] == '\0' && (param_1[4] == '\0')))) &&
     ((param_1[5] == '\0' && ((param_1[6] == '\0' && (param_1[7] == '\0')))))) {
    return param_1[8] != '\0';
  }
  return true;
}




void FUN_00cd744c(void)

{
  return;
}




void FUN_00cd7450(long param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  
  lVar3 = FUN_00940bbc();
  *(undefined1 *)(param_1 + 0xc058) = 0;
  *(undefined8 *)(param_1 + 0xc050) = 0;
  if (*param_2 != 0) {
    uVar10 = 0;
    do {
      lVar7 = *(long *)(param_2 + 2);
      pbVar9 = (byte *)(lVar7 + uVar10 * 0x70);
      lVar4 = FUN_00cc771c(pbVar9);
      if (lVar4 == 0) {
        if ((*pbVar9 & 1) == 0) {
          pbVar8 = pbVar9 + 1;
          uVar5 = (ulong)(*pbVar9 >> 1);
        }
        else {
          lVar7 = lVar7 + uVar10 * 0x70;
          uVar5 = *(ulong *)(lVar7 + 8);
          pbVar8 = *(byte **)(lVar7 + 0x10);
        }
        if (8 < (long)uVar5) {
          pbVar1 = pbVar8 + uVar5;
          pbVar9 = pbVar8;
          do {
            if ((uVar5 - 8 == 0) || (pbVar9 = memchr(pbVar9,99,uVar5 - 8), pbVar9 == (byte *)0x0))
            break;
            iVar2 = memcmp(pbVar9,"card_hero",9);
            if (iVar2 == 0) {
              if ((pbVar9 != pbVar1) &&
                 (puVar6 = (undefined1 *)(param_1 + 0xc058), (long)pbVar9 - (long)pbVar8 != -1))
              goto LAB_00cd75cc;
              break;
            }
            pbVar9 = pbVar9 + 1;
            uVar5 = (long)pbVar1 - (long)pbVar9;
          } while (8 < (long)uVar5);
        }
      }
      else if (*(char *)(lVar4 + 0x35) == '\0') {
        iVar2 = *(int *)(lVar4 + 0x20);
        puVar6 = (undefined1 *)(param_1 + 0xc056);
        if (((iVar2 == 3) || (puVar6 = (undefined1 *)(param_1 + 0xc055), iVar2 == 2)) ||
           (puVar6 = (undefined1 *)(param_1 + 0xc054), iVar2 == 1)) {
LAB_00cd75cc:
          *puVar6 = 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xc057) = 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *param_2);
  }
  if ((*(char *)(lVar3 + 0xc) != '\0') &&
     (uVar10 = FUN_00cd73f4((undefined8 *)(param_1 + 0xc050)), (uVar10 & 1) != 0)) {
    FUN_008fce60(param_1 + 0xc060,&DAT_0313e188);
  }
  return;
}




void FUN_00cd762c(undefined8 param_1,undefined4 param_2)

{
  FUN_0093cab4(param_2);
  return;
}




void FUN_00cd7634(long param_1,undefined4 param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  byte local_80 [16];
  void *local_70;
  ulong local_68 [2];
  void *local_58;
  ulong local_50;
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_50 = 0;
  local_48 = 0;
  local_40 = (void *)0x0;
  uVar5 = FUN_0093cbe4();
  switch(uVar5) {
  case 0:
    FUN_008fce60(&local_50,&DAT_0320ffa8);
    goto switchD_00cd7684_default;
  case 1:
    pcVar7 = "happy";
    break;
  case 2:
    pcVar7 = "confused";
    break;
  case 3:
    pcVar7 = "unhappy";
    break;
  case 4:
    pcVar7 = "ask later";
    break;
  default:
    goto switchD_00cd7684_default;
  }
  FUN_008fa54c(local_68,pcVar7);
  FUN_008fce60(&local_50,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
switchD_00cd7684_default:
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  switch(param_2) {
  case 0:
    pcVar7 = "review";
    break;
  case 1:
    pcVar7 = "guides";
    break;
  case 2:
    pcVar7 = "contact";
    break;
  case 3:
    pcVar7 = "ask later";
    break;
  default:
    goto switchD_00cd7710_default;
  }
  FUN_008fa54c(local_80,pcVar7);
  FUN_008fce60(local_68,local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
switchD_00cd7710_default:
  uVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 != 0) {
    if ((*(byte *)(param_1 + 0xc060) & 1) == 0) {
      lVar6 = param_1 + 0xc061;
    }
    else {
      lVar6 = *(long *)(param_1 + 0xc070);
    }
    pvVar2 = (void *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      pvVar2 = local_40;
    }
    pvVar3 = (void *)((ulong)local_68 | 1);
    if ((local_68[0] & 1) != 0) {
      pvVar3 = local_58;
    }
    FUN_0090c6b4(lVar6,pvVar2,pvVar3,param_1 + 0xc050);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00cd781c(void)

{
  return 0;
}




void FUN_00cd7824(long param_1)

{
  FUN_00cd8e9c(param_1 + 0x18);
  return;
}




void FUN_00cd782c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280df60;
  if ((*(byte *)(param_1 + 0x180c) & 1) != 0) {
    operator_delete((void *)param_1[0x180e]);
  }
  FUN_00cd78d8(param_1 + 3);
  FUN_00a997e0(param_1);
  return;
}




void FUN_00cd787c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280df60;
  if ((*(byte *)(param_1 + 0x180c) & 1) != 0) {
    operator_delete((void *)param_1[0x180e]);
  }
  FUN_00cd78d8(param_1 + 3);
  FUN_00a997e0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cd78d4(void)

{
  return;
}




void FUN_00cd78d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280df88;
  FUN_009c7fa8(param_1 + 0x154f);
  FUN_00b1c1e4(param_1 + 0x14c5);
  FUN_00f13d08(param_1 + 0x14ae);
  FUN_009c7fa8(param_1 + 0x11f6);
  param_1[0xf1a] = &PTR_FUN_027d9188;
  if ((void *)param_1[0x11f4] != (void *)0x0) {
    operator_delete__((void *)param_1[0x11f4]);
    param_1[0x11f4] = 0;
    param_1[0x11f3] = 0;
  }
  if ((*(byte *)(param_1 + 0x11f0) & 1) != 0) {
    operator_delete((void *)param_1[0x11f2]);
  }
  param_1[0x11d2] = &PTR_FUN_028266f0;
  param_1[0x11e9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11ec);
  FUN_00f13d08(param_1 + 0x11d2);
  FUN_009c7fa8(param_1 + 0xf1a);
  param_1[0xc3e] = &PTR_FUN_027d9188;
  if ((void *)param_1[0xf18] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf18]);
    param_1[0xf18] = 0;
    param_1[0xf17] = 0;
  }
  if ((*(byte *)(param_1 + 0xf14) & 1) != 0) {
    operator_delete((void *)param_1[0xf16]);
  }
  param_1[0xef6] = &PTR_FUN_028266f0;
  param_1[0xf0d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf10);
  FUN_00f13d08(param_1 + 0xef6);
  FUN_009c7fa8(param_1 + 0xc3e);
  FUN_00f0d3a4(param_1 + 0xc18);
  FUN_00f13d08(param_1 + 0xc01);
  FUN_00f13d08(param_1 + 0xbe8);
  FUN_009c7fa8(param_1 + 0x930);
  FUN_00b1c1e4(param_1 + 0x8a6);
  FUN_00f13d08(param_1 + 0x88f);
  FUN_009c7fa8(param_1 + 0x5d7);
  FUN_009c7fa8(param_1 + 799);
  FUN_009c7fa8(param_1 + 0x67);
  FUN_00f0d3a4(param_1 + 0x41);
  FUN_00f13d08(param_1 + 0x2a);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00cd7acc(void *param_1)

{
  FUN_00cd78d8();
  operator_delete(param_1);
  return;
}




void FUN_00cd7af0(undefined8 *param_1)

{
  FUN_00f017e8();
  *param_1 = &PTR_FUN_0280df88;
  FUN_00f0bdbc(param_1 + 0x11,1);
  param_1[0x11] = &PTR_FUN_027ccd08;
  FUN_00f13ca4(param_1 + 0x2a);
  FUN_00f0d160(param_1 + 0x41);
  FUN_00ab6c24(param_1 + 0x67,0);
  FUN_00ab6c24(param_1 + 799,0);
  FUN_00ab6c24(param_1 + 0x5d7,0);
  FUN_00f13ca4(param_1 + 0x88f);
  FUN_00b1bda4(param_1 + 0x8a6);
  FUN_00ab6c24(param_1 + 0x930,0);
  FUN_00f0bdbc(param_1 + 0xbe8,1);
  param_1[0xbe8] = &PTR_FUN_027ccd08;
  FUN_00f13ca4(param_1 + 0xc01);
  FUN_00f0d160(param_1 + 0xc18);
  FUN_00aea298(param_1 + 0xc3e);
  FUN_00aea298(param_1 + 0xf1a);
  FUN_00ab6c24(param_1 + 0x11f6,0);
  FUN_00f13ca4(param_1 + 0x14ae);
  FUN_00b1bda4(param_1 + 0x14c5);
  FUN_00ab6c24(param_1 + 0x154f,0);
  FUN_00cd7c2c(param_1);
  return;
}




void FUN_00cd7c2c(long *param_1)

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
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined **ppuVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined4 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  char *pcVar24;
  ulong local_f8 [2];
  void *local_e8;
  code *local_e0;
  long *plStack_d8;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined4 local_b8;
  long local_b0;
  
  lVar19 = tpidr_el0;
  local_b0 = *(long *)(lVar19 + 0x28);
  plVar1 = param_1 + 0x11;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x2a,1);
  plVar2 = param_1 + 0x41;
  FUN_00f023ec(param_1 + 0x2a,plVar2,1);
  plVar3 = param_1 + 0x67;
  FUN_00f023ec(plVar1,plVar3,1);
  plVar4 = param_1 + 799;
  FUN_00f023ec(plVar1,plVar4,1);
  plVar5 = param_1 + 0x5d7;
  FUN_00f023ec(plVar1,plVar5,1);
  plVar6 = param_1 + 0x88f;
  FUN_00f023ec(plVar1,plVar6,1);
  plVar7 = param_1 + 0x8a6;
  FUN_00f023ec(plVar6,plVar7,1);
  plVar8 = param_1 + 0x930;
  FUN_00f023ec(plVar1,plVar8,1);
  plVar1 = param_1 + 0xbe8;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0xc01,1);
  plVar9 = param_1 + 0xc18;
  FUN_00f023ec(param_1 + 0xc01,plVar9,1);
  plVar10 = param_1 + 0xc3e;
  FUN_00f023ec(plVar1,plVar10,1);
  plVar11 = param_1 + 0xf1a;
  FUN_00f023ec(plVar1,plVar11,1);
  plVar12 = param_1 + 0x11f6;
  FUN_00f023ec(plVar1,plVar12,1);
  plVar13 = param_1 + 0x14ae;
  FUN_00f023ec(plVar1,plVar13,1);
  plVar14 = param_1 + 0x14c5;
  FUN_00f023ec(plVar13,plVar14,1);
  plVar15 = param_1 + 0x154f;
  FUN_00f023ec(plVar1,plVar15,1);
  uVar21 = FUN_0092ea9c();
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar21 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar2,*ppuVar16);
  uVar17 = *(uint *)((long)param_1 + 0x28c);
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x28c) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x3300;
    FUN_0091ada4(plVar2);
  }
  uVar22 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_LABEL",0);
  FUN_00f0d75c(plVar2,uVar22);
  FUN_00f0dad0(0x44a28000,plVar2,1);
  FUN_00f0dac8(plVar2,3);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar21 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar9,*ppuVar16);
  uVar17 = *(uint *)((long)param_1 + 0x6144);
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x6144) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x3300;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0dad0(0x44a28000,plVar9,1);
  FUN_00f0dac8(plVar9,3);
  FUN_00ab703c(0x42200000,0x44480000,0x44480000,plVar3,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  FUN_00ab7628(0x43020000,plVar3);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar21 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(param_1 + 0x14b,*ppuVar16);
  local_c8 = 0;
  local_c0 = (void *)0x0;
  uVar18 = DAT_03210c64;
  local_e0 = thunk_FUN_00cd8f10;
  local_d0 = (void *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar18;
  FUN_009693a0(param_1 + 0x68,&local_e0);
  uVar22 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_BUTTON_HAPPY",0);
  FUN_00ab7498(plVar3,uVar22);
  FUN_00ab7510(0x44340000,plVar3);
  FUN_00ab75b0(0x3e99999a,plVar3,&DAT_01bee7fa);
  uVar17 = *(uint *)((long)param_1 + 0x3bc);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x3bc) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_0091ada4(plVar3);
  }
  FUN_00ab703c(0x42200000,0x44480000,0x44480000,plVar4,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  FUN_00ab7628(0x43020000,plVar4);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar21 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(param_1 + 0x403,*ppuVar16);
  local_e0 = thunk_FUN_00cd8fd0;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = (void *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar18;
  FUN_009693a0(param_1 + 800,&local_e0);
  uVar22 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_BUTTON_CONFUSED",0);
  FUN_00ab7498(plVar4,uVar22);
  FUN_00ab7510(0x44340000,plVar4);
  FUN_00ab75b0(0x3e99999a,plVar4,&DAT_01bee7fa);
  uVar17 = *(uint *)((long)param_1 + 0x197c);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x197c) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_0091ada4(plVar4);
  }
  FUN_00ab703c(0x42200000,0x44480000,0x44480000,plVar5,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  FUN_00ab7628(0x43020000,plVar5);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar21 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(param_1 + 0x6bb,*ppuVar16);
  local_e0 = thunk_FUN_00cd9060;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = (void *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar18;
  FUN_009693a0(param_1 + 0x5d8,&local_e0);
  uVar22 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_BUTTON_UNHAPPY",0);
  FUN_00ab7498(plVar5,uVar22);
  FUN_00ab7510(0x44340000,plVar5);
  FUN_00ab75b0(0x3e99999a,plVar5,&DAT_01bee7fa);
  uVar17 = *(uint *)((long)param_1 + 0x2f3c);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x2f3c) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_0091ada4(plVar5);
  }
  FUN_00f13f08(0x44af0000,0x40000000,plVar7);
  uVar17 = *(uint *)((long)param_1 + 0x45b4);
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x45b4) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x3300;
    FUN_0091ada4(plVar7);
  }
  uVar22 = FUN_00f13e54(plVar7);
  FUN_00f13f08(uVar22,0x41f00000,plVar6);
  FUN_00ab703c(0x42200000,0x44480000,0x44480000,plVar8,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  FUN_00ab7628(0x43020000,plVar8);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar21 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(param_1 + 0xa14,*ppuVar16);
  local_e0 = thunk_FUN_00cd90f0;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = (void *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar18;
  FUN_009693a0(param_1 + 0x931,&local_e0);
  uVar22 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_BUTTON_LATER",0);
  FUN_00ab7498(plVar8,uVar22);
  FUN_00ab7510(0x44340000,plVar8);
  FUN_00ab75b0(0x3e99999a,plVar8,&DAT_01bee7fa);
  uVar17 = *(uint *)((long)param_1 + 0x4a04);
  if ((uVar17 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4a04) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar8);
  }
  FUN_00ab703c(0x42200000,0x44480000,0x44480000,plVar10,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               0);
  FUN_00ab7628(0x43020000,plVar10);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar21 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(param_1 + 0xd22,*ppuVar16);
  uVar22 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_BUTTON_GUIDES",0);
  FUN_008fcdb8(&local_e0,&DAT_0313e328);
  thunk_FUN_00e7051c(&local_c8,uVar22);
  local_b8 = 1;
  FUN_00aea30c(plVar10,&local_e0);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  FUN_00ab7510(0x44250000,plVar10);
  FUN_00ab75b0(0x3e99999a,plVar10,&DAT_01bee7fa);
  uVar17 = *(uint *)((long)param_1 + 0x6274);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x6274) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_0091ada4(plVar10);
  }
  local_b8 = FUN_00f048a4("UI::EVENT_LEAVE_APP");
  local_e0 = FUN_00cd8c6c;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_c0 = (void *)0x1;
  plStack_d8 = param_1;
  FUN_009693a0(param_1 + 0xc3f,&local_e0);
  FUN_00ab703c(0x42200000,0x44480000,0x44480000,plVar11,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               0);
  FUN_00ab7628(0x43020000,plVar11);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar21 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(param_1 + 0xffe,*ppuVar16);
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = (void *)0x0;
  uVar20 = FUN_0092ec00();
  switch(uVar20) {
  default:
    pcVar24 = "https://goo.gl/forms/on7G4V6zftpiZBBt1";
    break;
  case 1:
    pcVar24 = "https://goo.gl/forms/IkAsH5ekCSXmstff1";
    break;
  case 2:
    pcVar24 = "https://goo.gl/forms/PlUbvcgcEJh7RRlo2";
    break;
  case 3:
    pcVar24 = "https://goo.gl/forms/ALgkhhsbxZ5cls0B2";
    break;
  case 4:
    pcVar24 = "https://goo.gl/forms/5Jp8i47ycRMkPJeO2";
    break;
  case 5:
    pcVar24 = "https://goo.gl/forms/RLeCT7pizcP3XS9D3";
    break;
  case 6:
    pcVar24 = "https://goo.gl/forms/YRyzBMb9X12El7um1";
    break;
  case 8:
    pcVar24 = "https://goo.gl/forms/FKoiFLJDvAPVwhiw1";
    break;
  case 9:
  case 10:
    pcVar24 = "https://goo.gl/forms/UHyPpvgUGgWB3JQH2";
    break;
  case 0xb:
    pcVar24 = "https://goo.gl/forms/N8QAjNHHi8H4dVnw1";
    break;
  case 0xd:
    pcVar24 = "https://goo.gl/forms/H4Jka9DzF5c7lOFd2";
    break;
  case 0xe:
    pcVar24 = "https://goo.gl/forms/kSt0nCO3awZMBauj1";
    break;
  case 0x10:
    pcVar24 = "https://goo.gl/forms/WpQJhztHODVdp3VO2";
  }
  FUN_008fa54c(&local_e0,pcVar24);
  FUN_008fce60(local_f8,&local_e0);
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  uVar23 = FUN_00937f1c();
  if ((uVar23 & 1) != 0) {
    FUN_008fa54c(&local_e0,"http://vg.163.com/bbs");
    FUN_008fce60(local_f8,&local_e0);
    if (((ulong)local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
  }
  uVar22 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_BUTTON_CONTACT",0);
  FUN_008fcdb8(&local_e0,local_f8);
  thunk_FUN_00e7051c(&local_c8,uVar22);
  local_b8 = 1;
  FUN_00aea30c(plVar11,&local_e0);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  if (((ulong)local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  FUN_00ab7510(0x44250000,plVar11);
  FUN_00ab75b0(0x3e99999a,plVar11,&DAT_01bee7fa);
  uVar17 = *(uint *)((long)param_1 + 0x7954);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x7954) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_0091ada4(plVar11);
  }
  local_b8 = FUN_00f048a4("UI::EVENT_LEAVE_APP");
  local_e0 = FUN_00cd8c6c;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = (void *)0x0;
  plStack_d8 = param_1;
  FUN_009693a0(param_1 + 0xf1b,&local_e0);
  FUN_00ab703c(0x42200000,0x44480000,0x44480000,plVar12,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               0);
  FUN_00ab7628(0x43020000,plVar12);
  FUN_00ab75b0(0x3e99999a,plVar12,&DAT_01bee7fa);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar21 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(param_1 + 0x12da,*ppuVar16);
  uVar22 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_BUTTON_REVIEW",0);
  FUN_00ab7498(plVar12,uVar22);
  FUN_00ab7510(0x44340000,plVar12);
  uVar17 = *(uint *)((long)param_1 + 0x9034);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x9034) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_0091ada4(plVar12);
  }
  local_e0 = thunk_FUN_00cd9150;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = (void *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar18;
  FUN_009693a0(param_1 + 0x11f7,&local_e0);
  FUN_00ab703c(0x42200000,0x44480000,0x44480000,plVar15,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               0);
  FUN_00ab7628(0x43020000,plVar15);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar21 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(param_1 + 0x1633,*ppuVar16);
  local_e0 = FUN_00cd8c78;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = (void *)0x0;
  plStack_d8 = param_1;
  local_b8 = uVar18;
  FUN_009693a0(param_1 + 0x1550,&local_e0);
  uVar22 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_BUTTON_LATER",0);
  FUN_00ab7498(plVar15,uVar22);
  FUN_00ab7510(0x44340000,plVar15);
  FUN_00ab75b0(0x3e99999a,plVar15,&DAT_01bee7fa);
  uVar17 = *(uint *)((long)param_1 + 0xaafc);
  if ((uVar17 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xaafc) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar15);
  }
  FUN_00f13f08(0x44af0000,0x40000000,plVar14);
  uVar17 = *(uint *)((long)param_1 + 0xa6ac);
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xa6ac) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x3300;
    FUN_0091ada4(plVar14);
  }
  uVar22 = FUN_00f13e54(plVar14);
  FUN_00f13f08(uVar22,0x41f00000,plVar13);
  FUN_00cd8a0c(param_1);
  if ((local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  if (*(long *)(lVar19 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

