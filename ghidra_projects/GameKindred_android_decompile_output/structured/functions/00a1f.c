// functions/00a1f — 40 functions
#include "libGameKindred.h"




undefined1  [16]
FUN_00a1f068(undefined1 param_1 [16],undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 uVar8;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar7 = 15.0;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_5 + 1);
  uVar5 = 0;
  *param_3 = *param_5;
  auVar3 = param_1;
  do {
    uVar8 = auVar3._8_8_;
    local_80 = *(undefined4 *)(param_5 + 1);
    local_88 = *param_5;
    auVar6 = FUN_00a1f170(param_2,fVar7,&local_88,param_4);
    auVar4._8_8_ = uVar8;
    auVar4._0_8_ = auVar3._0_8_;
    auVar3 = auVar4;
    if (param_1._0_4_ < auVar6._0_4_) {
      *(undefined4 *)(param_3 + 1) = local_80;
      *param_3 = local_88;
      auVar3 = auVar6;
      if ((float)param_2 <= auVar6._0_4_) break;
    }
    uVar5 = uVar5 + 1;
    fVar2 = -0.0;
    if (fVar7 <= 0.0) {
      fVar2 = 15.0;
    }
    fVar7 = fVar2 - fVar7;
  } while (uVar5 < 10);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1f170(undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cac688(param_2 * 0.017453292);
  *param_4 = uVar1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  FUN_00a1ef58(param_5,0);
  return;
}




uint FUN_00a1f1c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_30 = DAT_03218f38;
  local_3c = 0;
  _local_38 = CONCAT44(0x41200000,(int)DAT_03218f30);
  uVar3 = FUN_00da2eb4();
  uVar2 = FUN_00ef0108(uVar3,param_2,&local_3c,0,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00a1f244(undefined8 param_1)

{
  FUN_00a1e794();
  return param_1;
}




void FUN_00a1f268(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a1f270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 FUN_00a1f274(void)

{
  long lVar1;
  
  lVar1 = FUN_00a114dc();
  return *(undefined8 *)(lVar1 + 0x150);
}




undefined8 FUN_00a1f28c(void)

{
  long lVar1;
  
  lVar1 = FUN_00a114dc();
  return *(undefined8 *)(lVar1 + 0x160);
}




undefined8 FUN_00a1f2a4(void)

{
  long lVar1;
  
  lVar1 = FUN_00a114dc();
  return *(undefined8 *)(lVar1 + 0x158);
}




long FUN_00a1f2bc(void)

{
  long lVar1;
  
  lVar1 = FUN_00a114dc();
  return lVar1 + 0x1b8;
}




long FUN_00a1f2d4(void)

{
  long lVar1;
  
  lVar1 = FUN_00a114dc();
  return lVar1 + 0x168;
}




long FUN_00a1f2ec(void)

{
  long lVar1;
  
  lVar1 = FUN_00a114dc();
  return lVar1 + 0x1f8;
}




void FUN_00a1f304(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a114dc();
  FUN_00a156d8(uVar1,param_1);
  return;
}




void FUN_00a1f328(void)

{
  FUN_00a114dc();
  FUN_00a156f4();
  return;
}




long FUN_00a1f33c(void)

{
  long lVar1;
  
  lVar1 = FUN_00a114dc();
  return lVar1 + 0x260;
}




long FUN_00a1f354(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00a114e8();
  lVar2 = 0;
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00a114dc(0);
    lVar2 = lVar2 + 0x260;
  }
  return lVar2;
}




undefined1 FUN_00a1f37c(void)

{
  long lVar1;
  
  lVar1 = FUN_00a114dc();
  return *(undefined1 *)(lVar1 + 0x37f);
}




undefined8 FUN_00a1f394(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(ushort *)(param_2 + 0x88) & 0x1f;
  if ((uVar1 != 0x1f) && (*(ushort *)(param_2 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
    return 0;
  }
  iVar2 = FUN_008ff0d4(param_3);
  if (iVar2 == 1) {
    lVar4 = FUN_00d9eb0c(param_2);
    if (lVar4 == 0) {
      return 0;
    }
    uVar3 = FUN_008ff0e4(param_3);
    uVar5 = FUN_00d73574(lVar4,uVar3);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar3 = FUN_008ff0e4(param_3);
    uVar5 = FUN_00d736e0(lVar4,uVar3);
  }
  else {
    iVar2 = FUN_008ff0d4(param_3);
    if (iVar2 != 0) {
      return 1;
    }
    uVar3 = FUN_008ff0dc(param_3);
    uVar5 = FUN_00d5867c(param_2,uVar3);
  }
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  return 0;
}




void FUN_00a1f46c(undefined8 *param_1,undefined8 param_2)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027c8898;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  return;
}




void FUN_00a1f488(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,"*PretargetModalSelector*");
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}




uint FUN_00a1f4b8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                 undefined8 *param_5,int param_6,int param_7)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char local_a4 [4];
  long local_a0 [5];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00a1bcec();
  uVar5 = 0;
  if ((uVar6 & 1) != 0) goto LAB_00a1f6f4;
  iVar3 = FUN_0092f28c();
  if (iVar3 == 1) {
    uVar6 = FUN_009f1f70(9);
    if ((uVar6 & 1) == 0) goto LAB_00a1f59c;
    bVar2 = 1;
    uVar7 = 10;
LAB_00a1f544:
    uVar6 = FUN_009f1f70(uVar7);
    if (((uVar6 & 1) == 0) || (!(bool)(param_7 == 0 | bVar2))) goto LAB_00a1f59c;
    if ((param_6 != 3 || param_7 != 1) && (param_7 != 4)) {
      uVar6 = FUN_00a1bd34();
      iVar3 = 3;
      if ((uVar6 & 1) == 0) {
        iVar3 = 1;
      }
      uVar5 = 0;
      if (iVar3 != param_6) goto LAB_00a1f6f4;
    }
  }
  else {
    iVar3 = FUN_0092f28c();
    if (iVar3 == 0) {
      bVar2 = 0;
      uVar7 = 0xb;
      goto LAB_00a1f544;
    }
LAB_00a1f59c:
    if ((param_7 != 4) &&
       ((*(long *)(param_3 + 0x28) != 0 && (uVar5 = 0, *(long *)(param_3 + 0x28) != param_4))))
    goto LAB_00a1f6f4;
    if (param_6 == 3) {
      *(undefined8 *)(param_3 + 0x28) = 0;
    }
    else if (param_6 == 1) {
      *(long *)(param_3 + 0x28) = param_4;
    }
  }
  local_a4[0] = '\0';
  local_b0 = param_5[2];
  uStack_b8 = param_5[1];
  local_c0 = *param_5;
  FUN_00a1fe78(param_1,param_2,&local_c0);
  FUN_00cac778(0,&local_c0,auStack_d0);
  uVar4 = FUN_01985cbc(*(undefined8 *)(param_3 + 0x10),local_a0,5,DAT_02e8b430);
  uVar6 = (ulong)uVar4;
  if (uVar4 != 0) {
    uVar11 = 0;
    do {
      if ((local_a0[uVar11] != 0) &&
         (uVar8 = FUN_00a0cbe8(local_a0[uVar11],auStack_d0), (uVar8 & 1) != 0)) goto LAB_00a1f698;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar6);
    if (uVar4 != 0) {
      uVar11 = 0;
      uVar8 = 0xffffffff;
      do {
        if ((local_a0[uVar11] != 0) &&
           (uVar9 = FUN_00a0ccd8(local_a0[uVar11],auStack_d0), (uVar9 & 1) != 0)) goto LAB_00a1f698;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
      uVar5 = 0;
      goto LAB_00a1f6c4;
    }
  }
  uVar5 = 0;
  goto LAB_00a1f6f4;
LAB_00a1f698:
  uVar8 = uVar11 & 0xffffffff;
  uVar5 = FUN_00a0c484(local_a0[uVar11 & 0xffffffff],&local_c0,auStack_d0,param_4,param_6,param_7,
                       local_a4);
LAB_00a1f6c4:
  if ((local_a4[0] != '\0') && (uVar4 != 0)) {
    plVar10 = local_a0;
    do {
      if ((uVar8 != 0) && (*plVar10 != 0)) {
        FUN_00a0c778();
      }
      uVar8 = uVar8 - 1;
      uVar6 = uVar6 - 1;
      plVar10 = plVar10 + 1;
    } while (uVar6 != 0);
  }
LAB_00a1f6f4:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}




bool FUN_00a1f730(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x28) == param_2;
}




void FUN_00a1f740(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  ulong uVar18;
  undefined4 local_140 [2];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [112];
  long local_b8 [5];
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 8) = param_3;
  FUN_008ff080(auStack_138);
  FUN_00a1fac8(param_1,auStack_138);
  uVar7 = FUN_008ff114(param_3,auStack_138);
  uVar8 = 0;
  if ((uVar7 & 1) != 0) goto LAB_00a1fa8c;
  uVar7 = FUN_008ff0f4(param_3);
  lVar14 = *(long *)(param_2 + 0x18);
  lVar15 = lVar14;
  if ((uVar7 & 1) == 0) {
    for (; lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x20)) {
      if (*(int *)(*(long *)(lVar14 + 8) + 0xa4) == DAT_03130aa8) goto LAB_00a1f83c;
    }
    lVar14 = 0;
LAB_00a1f83c:
    uVar2 = FUN_008ff0e4(param_3);
    pcVar9 = (char *)FUN_00d734c4(lVar14,uVar2);
    lVar15 = 0;
    if (pcVar9 == (char *)0x0) goto LAB_00a1f85c;
LAB_00a1f864:
    *(char **)(param_1 + 0x20) = pcVar9;
    iVar3 = FUN_00e6a474(*(undefined8 *)(pcVar9 + 0x20));
    if (iVar3 == 0) {
      uVar4 = 0;
      uVar5 = 1;
    }
    else {
      thunk_FUN_00d9ff34(local_b8,*(undefined8 *)(pcVar9 + 0x20));
      FUN_00d9ff84(local_140,(undefined4)local_b8[0]);
      FUN_00d4e934(auStack_128,local_140[0]);
      FUN_00d4e980(auStack_128,*(undefined4 *)(param_2 + 0x260));
      uVar4 = FUN_00d9e840(auStack_128,local_b8,5,0);
      uVar5 = uVar4;
      if ((int)uVar4 < 1) goto LAB_00a1f8c8;
    }
    uVar7 = 0;
    do {
      uVar8 = FUN_01985d44(*(undefined8 *)(param_1 + 0x10),DAT_02e8b430);
      fVar17 = *(float *)(pcVar9 + 0x40);
      uVar10 = FUN_008ff0f4(param_3);
      if ((uVar10 & 1) == 0) {
        uVar2 = FUN_008ff0e4(param_3);
        uVar10 = FUN_00d734d8(lVar14,uVar2);
      }
      else {
        uVar2 = FUN_008ff0dc(param_3);
        uVar10 = FUN_00d53b5c(lVar15,uVar2);
      }
      if (*pcVar9 == '\0') {
        uVar18 = (ulong)(uint)(fVar17 * 0.5);
        uVar11 = FUN_00a1bcec();
        if (((uVar11 & 1) != 0) && (pcVar9[0x58] == '\0')) goto LAB_00a1f958;
      }
      else {
LAB_00a1f958:
        uVar18 = uVar10;
      }
      lVar16 = param_2;
      if ((iVar3 != 0) && ((long)uVar7 < (long)(int)uVar4)) {
        lVar16 = local_b8[uVar7];
      }
      uVar11 = FUN_008ff0f4(param_3);
      if ((uVar11 & 1) == 0) {
        uVar2 = FUN_008ff0e4(param_3);
        uVar2 = FUN_00d73d84(lVar14,uVar2);
      }
      else {
        uVar2 = FUN_008ff0dc(param_3);
        uVar2 = FUN_00d54580(lVar15,uVar2);
      }
      uVar11 = FUN_008ff0f4(param_3);
      if ((uVar11 & 1) == 0) {
        uVar6 = FUN_008ff0e4(param_3);
        uVar12 = FUN_00d73d98(lVar14,uVar6);
      }
      else {
        uVar6 = FUN_008ff0dc(param_3);
        uVar12 = FUN_00d5459c(lVar15,uVar6);
      }
      FUN_00a0bdf8(uVar18,uVar10,uVar8,pcVar9,param_1,param_2,lVar16,param_3,uVar2,uVar12);
      uVar10 = FUN_00a1bcec();
      if ((uVar10 & 1) != 0) {
        uVar12 = FUN_00a1f2d4();
        uVar13 = FUN_00a1f274();
        FUN_00a0c190(uVar8,uVar12,uVar13);
      }
      FUN_00a0c1a0(uVar8,param_4 & 1);
      FUN_00a0d9a4(uVar8);
      FUN_00a1fdd4();
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    uVar8 = 1;
  }
  else {
    while ((lVar15 != 0 && (*(int *)(*(long *)(lVar15 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar15 = *(long *)(lVar15 + 0x20);
    }
    uVar2 = FUN_008ff0dc(param_3);
    pcVar9 = (char *)FUN_00d53900(lVar15,uVar2);
    lVar14 = 0;
    if (pcVar9 != (char *)0x0) goto LAB_00a1f864;
LAB_00a1f85c:
    pcVar9 = *(char **)(param_1 + 0x18);
    if (pcVar9 != (char *)0x0) goto LAB_00a1f864;
LAB_00a1f8c8:
    uVar8 = 0;
  }
LAB_00a1fa8c:
  if (*(long *)(lVar1 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}




void FUN_00a1fac8(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 auStack_80 [5];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_01985cbc(*(undefined8 *)(param_1 + 0x10),auStack_80,5,DAT_02e8b430);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    uVar5 = (ulong)(uVar2 - 1);
    puVar6 = auStack_80;
    do {
      if ((param_2 != (undefined8 *)0x0) && (uVar5 == 0)) {
        puVar3 = (undefined8 *)FUN_00a0d99c(auStack_80[uVar2 - 1]);
        *param_2 = *puVar3;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar3 + 1);
      }
      FUN_019888f4(*puVar6);
      uVar4 = uVar4 - 1;
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
    FUN_00a1fdc0();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1fb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_80 [56];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00a1f394();
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_008ff0f4(param_3);
    if ((uVar3 & 1) == 0) {
      uVar4 = *param_4;
      uVar5 = param_4[1];
      uVar6 = param_4[2];
      uVar2 = FUN_008ff0e4(param_3);
      FUN_00984d14(uVar4,uVar5,uVar6,auStack_80,uVar2);
    }
    else {
      uVar2 = FUN_008ff0dc(param_3);
      FUN_00cfe024(auStack_80,param_4,uVar2);
    }
    FUN_00ce20fc(auStack_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1fc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00a1f394();
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_008ff0f4(param_3);
    if ((uVar3 & 1) == 0) {
      uVar2 = FUN_008ff0e4(param_3);
      FUN_00984cdc(auStack_70,param_4,uVar2);
    }
    else {
      uVar2 = FUN_008ff0dc(param_3);
      FUN_00cfdfe8(auStack_70,param_4,uVar2);
    }
    FUN_00ce20fc(auStack_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00a1fcec(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00a15720(*(undefined8 *)(param_1 + 0x10));
  iVar1 = FUN_008ff0d4(*(undefined8 *)(param_1 + 8));
  if (iVar1 == 0) {
    uVar3 = FUN_00d9eb38(uVar3);
    uVar2 = FUN_008ff0dc(*(undefined8 *)(param_1 + 8));
    uVar4 = FUN_00d53914(uVar3,uVar2);
  }
  else {
    iVar1 = FUN_008ff0d4(*(undefined8 *)(param_1 + 8));
    uVar4 = 0;
    if (iVar1 == 1) {
      uVar3 = FUN_00d9eae0(uVar3);
      uVar2 = FUN_008ff0e4(*(undefined8 *)(param_1 + 8));
      uVar4 = FUN_00d73560(uVar3,uVar2);
    }
  }
  return uVar4;
}




void FUN_00a1fd84(void)

{
  FUN_009c1044();
  FUN_009c5700();
  return;
}




void FUN_00a1fd98(void)

{
  FUN_009c1044();
  FUN_009c5714();
  return;
}




void FUN_00a1fdac(void)

{
  FUN_009c1044();
  FUN_009c7514();
  return;
}




void FUN_00a1fdc0(void)

{
  FUN_009c1044();
  FUN_009c61b8();
  return;
}




void FUN_00a1fdd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009c1044();
  FUN_009c61b0(uVar1,param_1);
  return;
}




void FUN_00a1fdf8(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009c1044();
  FUN_009c4e3c(uVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_00a1fe4c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009c1044();
  FUN_009c62a8(uVar1,param_1,param_2);
  return;
}




void FUN_00a1fe78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009c1044();
  FUN_009c7480(param_1,param_2,uVar1,param_3);
  return;
}




bool FUN_00a1feb4(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = strcmp((char *)*param_1,PTR_s_Healing_Flask_02be3428);
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = strcmp((char *)*param_1,PTR_s_Vision_Totem_02be3430);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}




bool FUN_00a1ff04(char param_1)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  
  FUN_00ceace8();
  uVar3 = FUN_00ceb0a4();
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_00ceab64(), (uVar3 & 1) != 0)) {
    bVar1 = param_1 == '\x01';
  }
  else {
    cVar2 = FUN_00cedf10();
    bVar1 = cVar2 == param_1;
  }
  return !bVar1;
}




void FUN_00a1ff50(void)

{
  DAT_03131118 = operator_new(0x20);
  DAT_03131118[2] = 0;
  DAT_03131118[3] = 0;
  *DAT_03131118 = &PTR_FUN_02820520;
  DAT_03131118[1] = DAT_03131118 + 2;
  return;
}




void FUN_00a1ff8c(void)

{
  if (DAT_03131118 != (long *)0x0) {
    (**(code **)(*DAT_03131118 + 8))();
  }
  DAT_03131118 = (long *)0x0;
  return;
}




undefined8 FUN_00a1ffc0(void)

{
  return DAT_03131118;
}




void FUN_00a1ffcc(undefined8 param_1,char *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_008fa54c(local_50,"icon_hero_");
  sVar3 = strlen(param_2);
  FUN_0090de84(local_50,param_2,sVar3);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00f0e578(param_1,pvVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

