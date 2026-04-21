// functions/00c6d — 13 functions
#include "libGameKindred.h"




void FUN_00c6d0f0(long *param_1,long param_2,long param_3,long param_4,undefined4 param_5)

{
  param_1[0x33b] = param_2;
  param_1[0x33c] = param_4;
  *(undefined4 *)(param_1 + 0x33d) = param_5;
  *(float *)((long)param_1 + 0x19d4) = (float)param_3;
  *(undefined1 *)((long)param_1 + 0x19ec) = 1;
                    /* WARNING: Could not recover jumptable at 0x00c6d118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




undefined8 FUN_00c6d11c(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_1 + 200);
    uVar8 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = *(long *)(lVar9 + uVar8 * 8);
      pbVar6 = &DAT_0320ffa8;
      if (*(char *)(lVar5 + 0x19ed) != '\0') {
        pbVar6 = (byte *)(*(long *)(lVar5 + 0xa78) + 0x24b8);
      }
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      if (uVar1 == __n) {
        pbVar7 = *(byte **)(pbVar6 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar7 = pbVar6 + 1;
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
            return 1;
          }
          lVar5 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (pbVar6 = pbVar6 + 1, *pbVar6 == *pbVar7) {
            lVar5 = lVar5 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar5 == 0) {
              return 1;
            }
          }
        }
        else {
          if (__n == 0) {
            return 1;
          }
          iVar4 = memcmp(pbVar7,__s2,__n);
          if (iVar4 == 0) {
            return 1;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return 0;
}




void FUN_00c6d22c(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *__s2;
  byte *pbVar5;
  long lVar6;
  byte *__s1;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 0xc0);
  if (uVar9 != 0) {
    uVar8 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 200) + uVar8 * 8);
      pbVar5 = &DAT_0320ffa8;
      if (*(char *)(lVar7 + 0x19ed) != '\0') {
        pbVar5 = (byte *)(*(long *)(lVar7 + 0xa78) + 0x24b8);
      }
      bVar2 = *pbVar5;
      bVar3 = *param_2;
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(pbVar5 + 8);
      }
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
      }
      if (__n == sVar1) {
        __s1 = *(byte **)(pbVar5 + 0x10);
        if ((bVar2 & 1) == 0) {
          __s1 = pbVar5 + 1;
        }
        __s2 = param_2 + 1;
        if ((bVar3 & 1) != 0) {
          __s2 = *(byte **)(param_2 + 0x10);
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            lVar6 = -(ulong)(bVar2 >> 1);
            do {
              pbVar5 = pbVar5 + 1;
              if (*pbVar5 != *__s2) goto LAB_00c6d330;
              lVar6 = lVar6 + 1;
              __s2 = __s2 + 1;
            } while (lVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00c6d330;
        FUN_00c6d358(lVar7);
        FUN_00c6d4c0(*(undefined8 *)(*(long *)(param_1 + 200) + uVar8 * 8));
        uVar9 = *(uint *)(param_1 + 0xc0);
      }
LAB_00c6d330:
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  return;
}




void FUN_00c6d358(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  lVar1 = param_1 + 0xca8;
  FUN_00f01980(lVar1);
  uVar4 = *(uint *)(param_1 + 0xd2c);
  if ((uVar4 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0xd2c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3300;
    FUN_0091ada4(lVar1);
    uVar4 = *(uint *)(param_1 + 0xd2c);
  }
  *(uint *)(param_1 + 0xd2c) = uVar4 | 4;
  uVar3 = FUN_00efee28(0x3dcccccd,0x3e4ccccd,FUN_009a7608);
  FUN_00f022a0(lVar1,uVar3);
  uVar3 = FUN_00efee28(0,0x3e4ccccd,FUN_009a7608);
  FUN_00f022a0(lVar1,uVar3);
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar6);
  FUN_00b1b034(0,param_1 + 0xd98);
  return;
}




void FUN_00c6d4c0(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00cab978(param_1 + 0x11b0);
  FUN_008fa54c(local_50,uVar5);
  FUN_008fcdb8(local_68,*(long *)(param_1 + 0xa78) + 0x24b8);
  uVar4 = FUN_00b0d110(*(undefined8 *)(param_1 + 0xa78));
  pvVar1 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar1 = local_58;
  }
  pvVar2 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar2 = local_40;
  }
  FUN_00909670(pvVar1,pvVar2,uVar4,1,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6d5a0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xb80) = param_1;
  *(undefined4 *)(param_3 + 0xb84) = param_2;
  FUN_00c6c794();
  return;
}




void FUN_00c6d5ac(code *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  code *local_98;
  code *pcStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar13 = tpidr_el0;
  local_68 = *(long *)(lVar13 + 0x28);
  FUN_00f0ac5c();
  pcVar1 = param_1 + 0x148;
  *(undefined ***)param_1 = &PTR_FUN_02801150;
  FUN_00f0ac5c(pcVar1);
  pcVar2 = param_1 + 0x290;
  FUN_00f10d7c(pcVar2);
  pcVar3 = param_1 + 0x398;
  FUN_00f13ca4(pcVar3);
  pcVar4 = param_1 + 0x450;
  FUN_00f0e4a8();
  pcVar5 = param_1 + 0x540;
  FUN_00f0eda4(pcVar5);
  pcVar6 = param_1 + 0x640;
  FUN_00f0d160(pcVar6);
  pcVar7 = param_1 + 0x770;
  FUN_00f13ca4(pcVar7);
  pcVar8 = param_1 + 0x828;
  FUN_00b25254();
  pcVar9 = param_1 + 0x988;
  FUN_00f0e4a8(pcVar9);
  *(long *)(param_1 + 0xa78) = 0;
  FUN_00f11234(param_1 + 0xa80);
  pcVar10 = param_1 + 0xc20;
  FUN_00f017e8(pcVar10);
  *(undefined ***)(param_1 + 0xc20) = &PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  FUN_00b1ade8();
  FUN_00975578(param_1 + 0x1180);
  pcVar11 = param_1 + 0x1240;
  *(long *)(param_1 + 0x1238) = 0;
  *(long *)(param_1 + 0x1230) = 0;
  *(long *)(param_1 + 0x1228) = 0;
  *(long *)(param_1 + 0x1220) = 0;
  FUN_00abaee8(pcVar11,0);
  FUN_00b27c04(param_1 + 0x1838,0);
  FUN_00b26098(param_1 + 0x1920);
  *(undefined8 *)(param_1 + 0x19e6) = 0;
  *(long *)(param_1 + 0x19e0) = 0;
  *(long *)(param_1 + 0x19d8) = 0;
  *(long *)(param_1 + 0x19d0) = 0;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  FUN_00f0ad88(pcVar1,pcVar2,1);
  FUN_00f0ad88(pcVar1,pcVar3,1);
  FUN_00f023ec(pcVar3,pcVar4,1);
  FUN_00f023ec(pcVar3,pcVar5,1);
  FUN_00f0ad88(pcVar1,pcVar6,1);
  FUN_00f0ad88(pcVar1,pcVar11,1);
  FUN_00f0ad88(pcVar1,pcVar7,1);
  FUN_00f023ec(pcVar7,pcVar8,1);
  FUN_00f023ec(pcVar7,pcVar9,1);
  FUN_00f0ad88(pcVar1,pcVar10,1);
  FUN_00f023ec(pcVar10,param_1 + 0xca8,1);
  FUN_00f023ec(pcVar10,param_1 + 0xd98,1);
  FUN_00f0e540(pcVar2,"build://Boosts.png");
  FUN_00f10dc8(pcVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_large_circle");
  FUN_00f0e698(pcVar2,0xb);
  FUN_00f0e548(pcVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_deserter_icon_backdrop");
  uVar12 = *(uint *)(param_1 + 0x4d4);
  if ((uVar12 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x4d4) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x6600;
    FUN_0091ada4(pcVar4);
  }
  FUN_00f0e548(pcVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_fill");
  FUN_00f0e670(pcVar5,&DAT_01bee7f6,2);
  FUN_00f0eea0(pcVar5,FUN_00c6dac0,param_1);
  uVar12 = *(uint *)(param_1 + 0x5c4);
  if ((uVar12 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x5c4) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x5900;
    FUN_0091ada4(pcVar5);
  }
  FUN_00f0d92c(pcVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0d92c(pcVar8,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  uVar14 = FUN_00e6ce7c("MENU_MARKET_DAILY_CHEST_TIMER",0);
  FUN_00b252ac(pcVar8,uVar14,1,0);
  FUN_00f0e548(pcVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_timer");
  FUN_00f0e548(param_1 + 0xca8,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  *(uint *)(param_1 + 0xd2c) = *(uint *)(param_1 + 0xd2c) & 0xfffffffb;
  FUN_00f0e578(param_1 + 0x1718,"circle_button_question");
  uVar12 = *(uint *)(param_1 + 0x12c4);
  if ((uVar12 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x12c4) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x5f80;
    FUN_0091ada4(pcVar11);
  }
  if ((*(float *)(param_1 + 0x1288) != 1.0) || (*(float *)(param_1 + 0x128c) != 1.0)) {
    lVar15 = NEON_fmov(0x3f800000,4);
    *(long *)(param_1 + 0x1288) = lVar15;
    FUN_0091ada4(pcVar11);
  }
  FUN_00b09144(0xbf800000,pcVar11);
  local_70 = DAT_03210c64;
  *(uint *)(param_1 + 0x12c4) = *(uint *)(param_1 + 0x12c4) | 4;
  local_98 = FUN_00c6db30;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  pcStack_90 = param_1;
  FUN_009693a0(param_1 + 0x1248,&local_98);
  FUN_00b0914c(pcVar11,1);
  *(long *)(param_1 + 0x19a0) = 0x41a00000;
  *(code **)(param_1 + 0x1950) = pcVar11;
  *(undefined2 *)(param_1 + 0x19cc) = 0x101;
  *(undefined8 *)(param_1 + 0x19c4) = 0x300000000;
  *(long *)(param_1 + 0x19b0) = 0x447a00003d4ccccd;
  pcStack_90 = thunk_FUN_00c6df5c;
  local_98 = param_1;
  FUN_00f02e98(0x3f800000,&local_98,0,1);
  (**(code **)(*(long *)param_1 + 0x138))(param_1);
  if (*(long *)(lVar13 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6dac0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f0a7e0(param_3,"circle_button_fill");
  FUN_00cb74c4(*param_2,param_2[1],*(undefined4 *)(param_5 + 0x19d0),0,0,param_1,param_2,uVar1,
               param_3,param_4);
  return;
}




void FUN_00c6db30(long param_1)

{
  FUN_00b28094(param_1 + 0x1838,param_1 + 0x1220,param_1 + 0x1920);
  return;
}




void FUN_00c6db50(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_68;
  code *pcStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_02801150;
  if ((long *)param_1[0x14f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14f] + 8))();
  }
  param_1[0x14f] = 0;
  pcStack_60 = thunk_FUN_00c6df5c;
  local_68 = param_1;
  FUN_00f03390(&local_68);
  param_1[0x324] = &PTR_FUN_027de7f0;
  if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
    operator_delete((void *)param_1[0x332]);
  }
  if ((void *)param_1[0x32f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x32f]);
    param_1[0x32f] = 0;
    param_1[0x32e] = 0;
  }
  FUN_009c8464(param_1 + 0x325,1);
  FUN_00b27cec(param_1 + 0x307);
  param_1[0x248] = &PTR_FUN_027d5388;
  param_1[0x2e3] = &PTR_FUN_028266f0;
  param_1[0x2fa] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2fd);
  FUN_00f13d08(param_1 + 0x2e3);
  param_1[0x2c5] = &PTR_FUN_028266f0;
  param_1[0x2dc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2df);
  FUN_00f13d08(param_1 + 0x2c5);
  param_1[0x2a7] = &PTR_FUN_028266f0;
  param_1[0x2be] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2c1);
  FUN_00f13d08(param_1 + 0x2a7);
  FUN_00f01868(param_1 + 0x296);
  FUN_009c825c(param_1 + 0x248);
  if ((*(byte *)(param_1 + 0x244) & 1) != 0) {
    operator_delete((void *)param_1[0x246]);
  }
  param_1[0x230] = &PTR_FUN_027bca90;
  if ((void *)param_1[0x242] != (void *)0x0) {
    operator_delete__((void *)param_1[0x242]);
    param_1[0x242] = 0;
    param_1[0x241] = 0;
  }
  if ((void *)param_1[0x240] != (void *)0x0) {
    operator_delete__((void *)param_1[0x240]);
    param_1[0x240] = 0;
    param_1[0x23f] = 0;
  }
  if ((*(byte *)(param_1 + 0x23c) & 1) != 0) {
    operator_delete((void *)param_1[0x23e]);
  }
  if ((*(byte *)(param_1 + 0x233) & 1) != 0) {
    operator_delete((void *)param_1[0x235]);
  }
  FUN_00977ea0(param_1 + 0x231,1);
  param_1[0x211] = &PTR_FUN_028266f0;
  param_1[0x228] = &PTR_FUN_02826850;
  param_1[0x1b3] = &PTR_FUN_027d4cc0;
  FUN_00f0a79c(param_1 + 0x22b);
  FUN_00f13d08(param_1 + 0x211);
  param_1[499] = &PTR_FUN_028266f0;
  param_1[0x20a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x20d);
  FUN_00f13d08(param_1 + 499);
  FUN_00f01868(param_1 + 0x1e2);
  param_1[0x1c4] = &PTR_FUN_028266f0;
  param_1[0x1db] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1de);
  FUN_00f13d08(param_1 + 0x1c4);
  FUN_00f01868(param_1 + 0x1b3);
  param_1[0x195] = &PTR_FUN_028266f0;
  param_1[0x1ac] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1af);
  FUN_00f13d08(param_1 + 0x195);
  FUN_00f01868(param_1 + 0x184);
  FUN_00f13d08(param_1 + 0x150);
  param_1[0x131] = &PTR_FUN_028266f0;
  param_1[0x148] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x14b);
  FUN_00f13d08(param_1 + 0x131);
  param_1[0x105] = &PTR_FUN_027d3cc8;
  param_1[0x11c] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x12e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12e]);
    param_1[0x12e] = 0;
    param_1[0x12d] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x105);
  FUN_00f13d08(param_1 + 0xee);
  FUN_00f0d3a4(param_1 + 200);
  param_1[0xa8] = &PTR_FUN_028266f0;
  param_1[0xbf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc2);
  FUN_00f13d08(param_1 + 0xa8);
  param_1[0x8a] = &PTR_FUN_028266f0;
  param_1[0xa1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa4);
  FUN_00f13d08(param_1 + 0x8a);
  FUN_00f13d08(param_1 + 0x73);
  param_1[0x52] = &PTR_FUN_02827290;
  param_1[0x69] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x70);
  param_1[0x52] = &PTR_FUN_028266f0;
  param_1[0x69] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6c);
  FUN_00f13d08(param_1 + 0x52);
  param_1[0x29] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x40);
  FUN_00f13d08(param_1 + 0x29);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6df38(void *param_1)

{
  FUN_00c6db50();
  operator_delete(param_1);
  return;
}




void FUN_00c6df5c(float param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)((long)param_2 + 0x19d4);
  if (fVar5 <= 0.0) {
    if ((int)param_2[0x33d] < 1) {
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) & 0xfffffffb;
      *(uint *)((long)param_2 + 0x5c4) =
           *(uint *)((long)param_2 + 0x5c4) & 0xfffffff8 |
           *(uint *)((long)param_2 + 0x5c4) & 3 | (uint)(fVar5 != -1.0) << 2;
    }
    else {
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) | 4;
    }
  }
  else {
    fVar5 = fVar5 - param_1;
    *(float *)((long)param_2 + 0x19d4) = fVar5;
    fVar4 = (float)NEON_fminnm(1.0 - fVar5 / (float)param_2[0x33b],0x3f800000);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(param_2 + 0x33a) = fVar4;
    *(uint *)((long)param_2 + 0x5c4) =
         *(uint *)((long)param_2 + 0x5c4) & 0xfffffff8 |
         *(uint *)((long)param_2 + 0x5c4) & 3 | (uint)(0.025 < fVar4) << 2;
    if (fVar5 <= 0.0) {
      uVar3 = *(uint *)((long)param_2 + 0x7f4) & 0xfffffffb;
    }
    else {
      local_30 = (long)fVar5;
      FUN_00b25438(param_2 + 0x105,&local_30);
      fVar5 = *(float *)((long)param_2 + 0x19d4);
      uVar3 = *(uint *)((long)param_2 + 0x7f4) | 4;
    }
    *(uint *)((long)param_2 + 0x7f4) = uVar3;
    if (fVar5 <= 0.0) {
      *(undefined1 *)((long)param_2 + 0x19ec) = 0;
      (**(code **)(*param_2 + 0x138))(param_2);
      fVar5 = *(float *)((long)param_2 + 0x19d4);
    }
  }
  if ((0.01 < fVar5) || ((fVar5 == -1.0 && (param_2[0x33c] != 0)))) {
    bVar2 = true;
  }
  else {
    bVar2 = 0 < (int)param_2[0x33d];
  }
  *(bool *)((long)param_2 + 0x19ec) = bVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c6df5c(float param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  long lStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)((long)param_2 + 0x19d4);
  if (fVar5 <= 0.0) {
    if ((int)param_2[0x33d] < 1) {
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) & 0xfffffffb;
      *(uint *)((long)param_2 + 0x5c4) =
           *(uint *)((long)param_2 + 0x5c4) & 0xfffffff8 |
           *(uint *)((long)param_2 + 0x5c4) & 3 | (uint)(fVar5 != -1.0) << 2;
    }
    else {
      *(uint *)((long)param_2 + 0x7f4) = *(uint *)((long)param_2 + 0x7f4) | 4;
    }
  }
  else {
    fVar5 = fVar5 - param_1;
    *(float *)((long)param_2 + 0x19d4) = fVar5;
    fVar4 = (float)NEON_fminnm(1.0 - fVar5 / (float)param_2[0x33b],0x3f800000);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(param_2 + 0x33a) = fVar4;
    *(uint *)((long)param_2 + 0x5c4) =
         *(uint *)((long)param_2 + 0x5c4) & 0xfffffff8 |
         *(uint *)((long)param_2 + 0x5c4) & 3 | (uint)(0.025 < fVar4) << 2;
    if (fVar5 <= 0.0) {
      uVar3 = *(uint *)((long)param_2 + 0x7f4) & 0xfffffffb;
    }
    else {
      lStack_30 = (long)fVar5;
      FUN_00b25438(param_2 + 0x105,&lStack_30);
      fVar5 = *(float *)((long)param_2 + 0x19d4);
      uVar3 = *(uint *)((long)param_2 + 0x7f4) | 4;
    }
    *(uint *)((long)param_2 + 0x7f4) = uVar3;
    if (fVar5 <= 0.0) {
      *(undefined1 *)((long)param_2 + 0x19ec) = 0;
      (**(code **)(*param_2 + 0x138))(param_2);
      fVar5 = *(float *)((long)param_2 + 0x19d4);
    }
  }
  if ((0.01 < fVar5) || ((fVar5 == -1.0 && (param_2[0x33c] != 0)))) {
    bVar2 = true;
  }
  else {
    bVar2 = 0 < (int)param_2[0x33d];
  }
  *(bool *)((long)param_2 + 0x19ec) = bVar2;
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

