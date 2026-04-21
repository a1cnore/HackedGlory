// functions/00bc0 — 26 functions
#include "libGameKindred.h"




void FUN_00bc00b8(long param_1)

{
  long lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  undefined ***pppuVar13;
  int iVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auStack_d18 [24];
  undefined **local_d00 [200];
  long local_6c0 [200];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  FUN_00ceace8();
  iVar3 = FUN_00ceb0d0();
  local_6c0[0] = 0;
  FUN_019889cc(local_6c0,1,DAT_0312edf0,0);
  if (iVar3 != 0) {
    plVar15 = (long *)(local_6c0[0] + 0x28);
    iVar14 = 0;
    do {
      iVar7 = iVar14 + 1;
      iVar4 = FUN_00a1ff04(iVar7);
      FUN_00ceace8();
      uVar9 = FUN_00ceb054();
      if ((uVar9 & 1) == 0) {
        if (*(byte *)(param_1 + 0x1628) == 0) {
          uVar6 = 0;
        }
        else {
          uVar9 = 0;
          uVar6 = 0;
          do {
            if ((*(long *)(param_1 + 0x28 + uVar9 * 8) != 0) &&
               (uVar8 = FUN_00d55870(), (uVar8 & 0xff) - 1 == iVar14)) {
              lVar12 = *(long *)(*(long *)(param_1 + 0x28 + uVar9 * 8) + 0x40);
              fVar17 = (*(float *)(lVar12 + 0x244) + 1.0) *
                       (*(float *)(lVar12 + 0xdc) +
                       *(float *)(lVar12 + 400) * (*(float *)(lVar12 + 0x2f8) + 1.0));
              if (DAT_0313a564 <= fVar17) {
                fVar17 = DAT_0313a564;
              }
              fVar16 = DAT_0313a4a4;
              if (DAT_0313a4a4 <= fVar17) {
                fVar16 = fVar17;
              }
              uVar6 = (uint)(fVar16 + (float)uVar6);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(byte *)(param_1 + 0x1628));
        }
        if (iVar4 != 0) {
          if (iVar4 != 1) goto LAB_00bc0288;
          goto LAB_00bc0240;
        }
LAB_00bc026c:
        if (*(uint *)(param_1 + 0x16c0) != uVar6) {
          FUN_00c0b7e0(*(undefined8 *)(param_1 + 8),uVar6);
          *(uint *)(param_1 + 0x16c0) = uVar6;
        }
      }
      else {
        uVar5 = 1;
        if (iVar14 != 0) {
          uVar5 = 2;
        }
        uVar5 = FUN_00d704ac(uVar5);
        puVar10 = (uint *)(**(code **)(*plVar15 + 0x18))(plVar15,uVar5);
        uVar6 = *puVar10;
        if (iVar4 == 1) {
LAB_00bc0240:
          if (*(uint *)(param_1 + 0x16c4) != uVar6) {
            FUN_00c0b824(*(undefined8 *)(param_1 + 8),uVar6);
            *(uint *)(param_1 + 0x16c4) = uVar6;
          }
        }
        else if (iVar4 == 0) goto LAB_00bc026c;
      }
LAB_00bc0288:
      iVar14 = iVar7;
    } while (iVar7 != iVar3);
  }
  local_d00[0] = (undefined **)0x0;
  local_d00[1] = (undefined **)0x0;
  local_d00[2] = (undefined **)0x0;
  FUN_00d4d28c(local_d00);
  local_d00[0] = &PTR_FUN_0281d988;
  uVar6 = FUN_00d9e840(local_d00,local_6c0,200,0);
  if (uVar6 == 0) {
    iVar3 = 0;
    iVar14 = 0;
  }
  else {
    iVar14 = 0;
    iVar3 = 0;
    uVar9 = (ulong)uVar6;
    plVar15 = local_6c0;
    do {
      uVar6 = *(ushort *)(*plVar15 + 0x88) & 0x1f;
      if ((uVar6 != 0x1f) && (*(ushort *)(*plVar15 + (ulong)uVar6 * 0x38 + 0x90) - 3 < 2)) {
        FUN_00d55870();
        iVar7 = FUN_00a1ff04();
        if (iVar7 == 0) {
          iVar14 = iVar14 + 1;
        }
        else {
          iVar3 = iVar3 + 1;
        }
      }
      uVar9 = uVar9 - 1;
      plVar15 = plVar15 + 1;
    } while (uVar9 != 0);
  }
  if (*(int *)(param_1 + 0x16cc) != iVar3) {
    FUN_00c0ba94(*(undefined8 *)(param_1 + 8),iVar3);
    *(int *)(param_1 + 0x16cc) = iVar3;
  }
  if (*(int *)(param_1 + 0x16d0) != iVar14) {
    FUN_00c0badc(*(undefined8 *)(param_1 + 8),iVar14);
    *(int *)(param_1 + 0x16d0) = iVar14;
  }
  FUN_00d4d54c(auStack_d18);
  uVar6 = FUN_00d9e840(auStack_d18,local_d00,200,0);
  if (uVar6 == 0) {
    fVar17 = 0.0;
    fVar16 = 0.0;
  }
  else {
    uVar9 = (ulong)uVar6;
    fVar16 = 0.0;
    fVar17 = 0.0;
    pppuVar13 = local_d00;
    do {
      FUN_00d55870(*pppuVar13);
      iVar3 = FUN_00a1ff04();
      fVar2 = fVar16 + *(float *)((*pppuVar13)[8] + 0x324);
      if (iVar3 != 0) {
        fVar2 = fVar16;
        fVar17 = fVar17 + *(float *)((*pppuVar13)[8] + 0x324);
      }
      fVar16 = fVar2;
      uVar9 = uVar9 - 1;
      pppuVar13 = pppuVar13 + 1;
    } while (uVar9 != 0);
  }
  if (fVar16 != (float)*(int *)(param_1 + 0x16d4)) {
    FUN_00c0b86c(fVar16,*(undefined8 *)(param_1 + 8));
    *(int *)(param_1 + 0x16d4) = (int)fVar16;
  }
  if (fVar17 != (float)*(int *)(param_1 + 0x16d8)) {
    FUN_00c0b980(fVar17,*(undefined8 *)(param_1 + 8));
    *(int *)(param_1 + 0x16d8) = (int)fVar17;
  }
  FUN_009bbfb0();
  uVar18 = FUN_009bc268();
  iVar3 = (int)(float)uVar18 % 0x3c;
  if (*(int *)(param_1 + 0x16c8) != iVar3) {
    FUN_00c0bb24(uVar18,*(undefined8 *)(param_1 + 8));
    *(int *)(param_1 + 0x16c8) = iVar3;
  }
  FUN_00ceace8();
  uVar9 = FUN_00ceaf2c();
  if ((uVar9 & 1) == 0) {
    fVar17 = *(float *)(param_1 + 0x16e0);
  }
  else {
    fVar17 = 0.0;
    *(undefined4 *)(param_1 + 0x16e0) = 0;
  }
  iVar3 = (int)(fVar17 - (float)uVar18);
  if (*(int *)(param_1 + 0x16bc) != iVar3) {
    *(int *)(param_1 + 0x16bc) = iVar3;
    FUN_00c0bb9c(*(undefined8 *)(param_1 + 8));
  }
  if (*(byte *)(param_1 + 0x1628) != 0) {
    uVar9 = 0;
    lVar12 = param_1 + 0xa8;
    do {
      iVar3 = FUN_00bc2228(lVar12);
      uVar11 = FUN_00ced200();
      if (iVar3 == -1) {
        uVar6 = 0;
        uVar8 = 0;
      }
      else {
        uVar6 = 0;
        uVar8 = 0;
        if ((uVar11 & 1) != 0) {
          uVar6 = FUN_00cec480(iVar3);
          uVar8 = FUN_00cec7d0(iVar3);
        }
      }
      FUN_00bc3568(lVar12,uVar6 & 1,uVar8 & 1);
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x158;
    } while (uVar9 < *(byte *)(param_1 + 0x1628));
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 FUN_00bc0594(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1628);
}




void FUN_00bc05a0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(byte *)(param_1 + 0x1628) != 0) {
    uVar2 = 0;
    lVar1 = param_1 + 0xa8;
    do {
      if ((*(byte *)(param_1 + 0x16e8) >> 1 & 1) != 0) {
        return;
      }
      FUN_00bc295c(lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x158;
    } while (uVar2 < *(byte *)(param_1 + 0x1628));
  }
  return;
}




byte FUN_00bc0604(long param_1)

{
  return *(byte *)(param_1 + 0x16e8) >> 1 & 1;
}




void FUN_00bc0614(float param_1,long param_2)

{
  if ((param_1 != 0.0) && (param_1 <= *(float *)(param_2 + 0x16e0))) {
    return;
  }
  *(float *)(param_2 + 0x16e0) = param_1;
  return;
}




void FUN_00bc0634(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    FUN_00e70510(&local_38);
    FUN_00e70e18(&local_38,&DAT_01bb0650,param_2);
    uVar2 = FUN_00e6ce7c("HUD_SCOREBOARD_ALLIES_AFK_EXPLAIN",0);
    FUN_00e70c34(&local_38,uVar2);
    if (local_30 != (void *)0x0) {
      operator_delete__(local_30);
      local_38 = 0;
      local_30 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc06c4(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  
  iVar1 = FUN_00ced6f8();
  if (iVar1 != 0) {
    uVar6 = 0;
    do {
      uVar2 = FUN_00cedca4(uVar6);
      uVar4 = FUN_00cec840();
      uVar5 = FUN_00e70b34(uVar4,param_2);
      if ((uVar5 & 1) != 0) {
        FUN_00cec760(uVar2,param_3 - 1U < 5);
      }
      uVar6 = uVar6 + 1;
      uVar3 = FUN_00ced6f8();
    } while (uVar6 < uVar3);
  }
  return;
}




void FUN_00bc0748(long param_1)

{
  if ((*(byte *)(param_1 + 0x16e8) >> 1 & 1) == 0) {
    FUN_00bc0790();
    return;
  }
  FUN_00bc075c();
  return;
}




void FUN_00bc075c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_00ceace8();
  FUN_0090c5f4();
  FUN_00bc0da4(param_1);
  uVar1 = FUN_009188a4();
  FUN_0091a0e4(uVar1,1);
  return;
}




void FUN_00bc0790(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0094276c();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_009188a4();
    FUN_0091a0e4(uVar4,0);
    FUN_009bbfb0();
    FUN_009bd6fc();
    goto LAB_00bc0810;
  }
  FUN_00ceace8();
  uVar3 = FUN_00ceae90();
  if ((uVar3 & 1) == 0) {
    FUN_00ceace8();
    uVar3 = FUN_00ceae88();
    if ((uVar3 & 1) != 0) goto LAB_00bc07ec;
    uVar3 = FUN_00ceab64();
    if ((uVar3 & 1) == 0) {
      fVar6 = *(float *)(param_1 + 0x16e0);
      FUN_009bbfb0();
      fVar5 = (float)FUN_009bc268();
      if (fVar6 - (float)(int)fVar5 <= 0.0) {
        uVar2 = FUN_00f048a4("EVENT_SELECT_SURRENDER");
        FUN_00f048e0(auStack_58,uVar2,0);
        FUN_00f0491c(auStack_58,1);
        FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
        FUN_00ed8868(auStack_88,DAT_03210c64,0,0);
        FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_88,1);
      }
      goto LAB_00bc0810;
    }
    FUN_00985994(auStack_88);
  }
  else {
LAB_00bc07ec:
    FUN_00ceace8();
    uVar3 = FUN_00ceae88();
    if ((uVar3 & 1) != 0) {
      FUN_009076bc();
    }
    FUN_009858f4(auStack_88,1);
  }
  FUN_00ce20fc(auStack_88);
LAB_00bc0810:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc08d4(long param_1)

{
  if ((*(byte *)(param_1 + 0x16e8) >> 1 & 1) == 0) {
    FUN_00bc0934();
    return;
  }
  FUN_00bc08e8();
  return;
}




void FUN_00bc08e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009188a4();
  FUN_0091a0e4(uVar1,0);
  if (*(int *)(param_1 + 0x16b8) - 1U < 2) {
    FUN_00c0c004(*(undefined8 *)(param_1 + 8));
    return;
  }
  FUN_00bc0da4(param_1);
  return;
}




void FUN_00bc0934(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,0,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc09a4(long param_1)

{
  if ((*(byte *)(param_1 + 0x16e8) >> 1 & 1) == 0) {
    FUN_00bc0934();
    return;
  }
  return;
}




void FUN_00bc09b8(long param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = 5;
  while ((lVar5 = *(long *)(param_1 + lVar7 * 8), lVar5 == 0 || (*(int *)(lVar5 + 0x260) != param_2)
         )) {
    uVar6 = lVar7 - 4;
    lVar7 = lVar7 + 1;
    if (0xf < uVar6) {
      return;
    }
  }
  FUN_00cedce4();
  uVar3 = FUN_00d9e390();
  uVar4 = FUN_00cec840(param_2);
  cVar1 = FUN_00d55870(*(undefined8 *)(param_1 + lVar7 * 8));
  cVar2 = FUN_00d55870(uVar3);
  FUN_00bc0a5c(param_1,uVar4,0,cVar1 == cVar2);
  return;
}




void FUN_00bc0a5c(long param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_70;
  void *local_68;
  undefined4 local_60;
  byte local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x1630) != 0) {
    uVar4 = 0;
    lVar3 = 0x10;
    do {
      uVar2 = FUN_00e70b34(*(long *)(param_1 + 0x1638) + lVar3 + -0x10,param_2);
      if ((uVar2 & 1) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x1638) + lVar3) = param_3;
        goto LAB_00bc0b18;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x1630));
  }
  thunk_FUN_00e7051c(&local_70,param_2);
  local_60 = param_3;
  local_5c = param_4 & 1;
  FUN_00bc1124((uint *)(param_1 + 0x1630),&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
LAB_00bc0b18:
  FUN_00bc06c4();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bc0b58(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x1630) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_00e70b34(*(long *)(param_1 + 0x1638) + lVar3,param_2);
      if ((uVar1 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x1638) + lVar3;
        uVar2 = FUN_00bc19e0((uint *)(param_1 + 0x1630),lVar3,lVar3 + 0x18);
        FUN_00bc06c4(uVar2,param_2,6);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x1630));
  }
  return;
}




void FUN_00bc0b58(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x1630) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_00e70b34(*(long *)(param_1 + 0x1638) + lVar3,param_2);
      if ((uVar1 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x1638) + lVar3;
        uVar2 = FUN_00bc19e0((uint *)(param_1 + 0x1630),lVar3,lVar3 + 0x18);
        FUN_00bc06c4(uVar2,param_2,6);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x1630));
  }
  return;
}




void FUN_00bc0bf8(void)

{
  FUN_00bc0a5c();
  return;
}




void FUN_00bc0c00(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x16b8) = param_2;
  FUN_0091df90(param_2);
  return;
}




void FUN_00bc0c0c(long param_1,int param_2)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  byte local_68 [16];
  void *local_58;
  byte local_50 [8];
  size_t local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_008fcdb8(local_50,&DAT_0320ffa8);
  if (param_2 == 2) {
    pcVar7 = "trolling/rude behavior";
  }
  else if (param_2 == 1) {
    pcVar7 = "team frustration";
  }
  else if (param_2 == 0) {
    pcVar7 = "technical issue";
  }
  else {
    pcVar7 = "other";
  }
  FUN_008fa54c(local_68,pcVar7);
  FUN_008fce60(local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  pcVar7 = local_40;
  __n = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    __n = local_48;
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pcVar5 = (char *)((ulong)local_50 | 1);
    __s1 = pcVar5;
    if ((local_50[0] & 1) != 0) {
      __s1 = local_40;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((local_50[0] & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(local_50[0] >> 1);
        do {
          if (*pcVar5 != *__s2) goto LAB_00bc0d2c;
          pcVar5 = pcVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_00bc0d60;
    }
    if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00bc0d60;
  }
  else {
LAB_00bc0d2c:
    if ((local_50[0] & 1) == 0) {
      pcVar7 = (char *)((ulong)local_50 | 1);
    }
  }
  uVar4 = FUN_00ceace8();
  FUN_00909088(pcVar7,uVar4);
LAB_00bc0d60:
  FUN_00c0c0ec(*(undefined8 *)(param_1 + 8));
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bc0da4(long param_1)

{
  ulong uVar1;
  
  FUN_009188a4();
  uVar1 = FUN_0091a5a4();
  if ((uVar1 & 1) == 0) {
    FUN_00bc0e50(param_1);
    FUN_00bc1028(param_1);
  }
  *(byte *)(param_1 + 0x16e8) = *(byte *)(param_1 + 0x16e8) | 8;
  *(undefined4 *)(param_1 + 0x16e4) = 0x3ecccccd;
  FUN_00c0be90(0x3ecccccd,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc0da4(long param_1)

{
  ulong uVar1;
  
  FUN_009188a4();
  uVar1 = FUN_0091a5a4();
  if ((uVar1 & 1) == 0) {
    FUN_00bc0e50(param_1);
    FUN_00bc1028(param_1);
  }
  *(byte *)(param_1 + 0x16e8) = *(byte *)(param_1 + 0x16e8) | 8;
  *(undefined4 *)(param_1 + 0x16e4) = 0x3ecccccd;
  FUN_00c0be90(0x3ecccccd,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc0e04(void)

{
  return;
}




void FUN_00bc0e08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c("HUD_SCOREBOARD_SHARE_SCREENSHOT_OPTIONAL_TEXT",0);
  FUN_00c0bf14(*(undefined8 *)(param_1 + 8));
  FUN_00ec5a7c(param_1 + 0x10,uVar1);
  return;
}




void FUN_00bc0e50(long param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  byte local_98 [16];
  void *local_88;
  ulong local_80 [2];
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(int *)(param_1 + 0x1630) != 0) {
    lVar8 = 0;
    uVar9 = 0;
    lVar1 = param_1 + 0x16a0;
    do {
      local_80[1] = 0;
      local_70 = (void *)0x0;
      local_80[0] = 0;
      switch(*(undefined4 *)(*(long *)(param_1 + 0x1638) + lVar8 + 0x10)) {
      case 0:
        pcVar7 = "honor";
        break;
      case 1:
        pcVar7 = "report_afk";
        break;
      case 2:
        pcVar7 = "report_troll_losing";
        break;
      case 3:
        pcVar7 = "report_troll_pings";
        break;
      case 4:
        pcVar7 = "report_lowskill";
        break;
      case 5:
        pcVar7 = "report_offensive_name";
        break;
      default:
        pcVar7 = "report_unknown";
      }
      FUN_008fa54c(local_98,pcVar7);
      FUN_008fce60(local_80,local_98);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      uVar6 = FUN_009580b8();
      FUN_00961db4(uVar6,lVar1,*(long *)(param_1 + 0x1638) + lVar8,local_80);
      lVar2 = *(long *)(param_1 + 0x1638) + lVar8;
      if (*(int *)(lVar2 + 0x10) == 0) {
        uVar4 = *(undefined1 *)(lVar2 + 0x14);
        uVar6 = FUN_00ceace8();
        FUN_009063e8(uVar4,uVar6,lVar1);
      }
      else {
        uVar4 = *(undefined1 *)(lVar2 + 0x14);
        pvVar3 = (void *)((ulong)local_80 | 1);
        if ((local_80[0] & 1) != 0) {
          pvVar3 = local_70;
        }
        uVar6 = FUN_00ceace8();
        FUN_009065a8(pvVar3,uVar4,uVar6,lVar1);
      }
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar9 < *(uint *)(param_1 + 0x1630));
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

