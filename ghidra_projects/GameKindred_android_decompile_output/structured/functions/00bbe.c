// functions/00bbe — 30 functions
#include "libGameKindred.h"




void FUN_00bbe078(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027eb228;
  pcStack_30 = thunk_FUN_00bbea14;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  uVar3 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar3,param_1);
  puVar4 = (uint *)param_1[4];
  if (puVar4 != (uint *)0x0) {
    lVar6 = (ulong)*puVar4 << 5;
    puVar2 = *(undefined8 **)(puVar4 + 2);
    do {
      puVar5 = puVar2;
      if (lVar6 == 0) goto LAB_00bbe0fc;
      lVar6 = lVar6 + -0x20;
      puVar2 = puVar5 + 4;
    } while ((undefined8 *)*puVar5 != param_1);
    FUN_00910480(puVar4,puVar5);
    puVar4 = (uint *)param_1[4];
LAB_00bbe0fc:
    lVar6 = (ulong)puVar4[8] << 5;
    puVar2 = *(undefined8 **)(puVar4 + 10);
    do {
      puVar5 = puVar2;
      if (lVar6 == 0) goto LAB_00bbe130;
      lVar6 = lVar6 + -0x20;
      puVar2 = puVar5 + 4;
    } while ((undefined8 *)*puVar5 != param_1);
    FUN_00910480(puVar4 + 8,puVar5);
    puVar4 = (uint *)param_1[4];
LAB_00bbe130:
    lVar6 = (ulong)puVar4[4] << 5;
    puVar2 = *(undefined8 **)(puVar4 + 6);
    do {
      puVar5 = puVar2;
      if (lVar6 == 0) goto LAB_00bbe158;
      lVar6 = lVar6 + -0x20;
      puVar2 = puVar5 + 4;
    } while ((undefined8 *)*puVar5 != param_1);
    FUN_00910480(puVar4 + 4,puVar5);
  }
LAB_00bbe158:
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 0x28))();
  }
  *param_1 = &PTR___cxa_pure_virtual_027eb288;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbe1b8(void *param_1)

{
  FUN_00bbe078();
  operator_delete(param_1);
  return;
}




void FUN_00bbe1dc(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_78 [3];
  code *pcStack_60;
  long *local_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x20) = param_2;
  iVar2 = FUN_009df7c0(param_2);
  plVar5 = *(long **)(param_1 + 8);
  if (iVar2 == 0) {
    uVar3 = FUN_009df87c(*(undefined8 *)(param_1 + 0x20));
    FUN_009df7c8(&local_58,*(undefined8 *)(param_1 + 0x20));
    uVar4 = 0;
    if (local_58 != (long *)0x0) {
      if (local_50 == (int)local_58[1]) {
        uVar4 = (**(code **)(*local_58 + 0x10))();
      }
      else {
        uVar4 = 0;
        local_58 = (long *)0x0;
        local_50 = DAT_03214ce8;
      }
    }
    uVar4 = FUN_00d5bc38(uVar4);
    (**(code **)(*plVar5 + 0x138))(plVar5,uVar3,uVar4);
  }
  else {
    uVar4 = FUN_009df870(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*plVar5 + 0x140))(plVar5,uVar4);
  }
  local_78[1] = 0;
  pcStack_60 = thunk_FUN_00bbec00;
  local_78[0] = param_1;
  local_78[2] = param_1;
  FUN_009e4694(param_2,local_78);
  local_78[1] = 0;
  pcStack_60 = thunk_FUN_00bbed3c;
  local_78[0] = param_1;
  local_78[2] = param_1;
  FUN_009e4694(param_2 + 0x20,local_78);
  local_78[1] = 0;
  pcStack_60 = FUN_00bbefb4;
  local_78[0] = param_1;
  local_78[2] = param_1;
  FUN_009e4694(param_2 + 0x10,local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbe338(long param_1)

{
  long lVar1;
  
  FUN_00bbf3ac(*(undefined8 *)(param_1 + 0x28),1);
  FUN_00bbf3f8(*(undefined8 *)(param_1 + 0x28),1);
  FUN_00bbf428(*(undefined8 *)(param_1 + 0x28),1);
  FUN_00bbf410(*(undefined8 *)(param_1 + 0x28),1);
  FUN_00c0372c(*(undefined8 *)(param_1 + 8));
  FUN_00a1f2ec();
  lVar1 = FUN_00a1a744();
  if (*(int *)(lVar1 + 0x118) == 2) {
    FUN_00c0733c(0);
    return;
  }
  FUN_00c07344(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  return;
}




void FUN_00bbe3b8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00bbf3c0(*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) != 0) {
    FUN_00bbf3ac(*(undefined8 *)(param_1 + 0x28),0);
    FUN_00c03748(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}




void FUN_00bbe3fc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x30) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00bbe414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x1a0))(*(long **)(param_1 + 8));
  return;
}




void FUN_00bbe418(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_009e0314();
    uVar2 = FUN_009dff84(*(undefined8 *)(param_1 + 0x20));
    if (((uVar1 & 1) == 0) && ((uVar2 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00bbe460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 8) + 0x1c8))();
      return;
    }
  }
  return;
}




undefined8 FUN_00bbe470(void)

{
  return 1;
}




void FUN_00bbe478(void)

{
  return;
}




undefined8 FUN_00bbe47c(void)

{
  return 0;
}




void FUN_00bbe484(long param_1)

{
  ulong uVar1;
  
  if (((*(long *)(param_1 + 0x20) != 0) && (*(char *)(param_1 + 0x30) != '\0')) &&
     (uVar1 = FUN_009e03cc(), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00bbe4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x1d0))();
    return;
  }
  return;
}




void thunk_FUN_00bbe3b8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00bbf3c0(*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) != 0) {
    FUN_00bbf3ac(*(undefined8 *)(param_1 + 0x28),0);
    FUN_00c03748(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}




void thunk_FUN_00bbe3b8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00bbf3c0(*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) != 0) {
    FUN_00bbf3ac(*(undefined8 *)(param_1 + 0x28),0);
    FUN_00c03748(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}




void FUN_00bbe4d8(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  undefined8 uVar14;
  timespec local_88 [3];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    clock_gettime(1,local_88);
    lVar8 = local_88[0].tv_sec - *(long *)(param_1 + 0x10);
    lVar9 = local_88[0].tv_nsec - *(long *)(param_1 + 0x18);
    if (lVar9 < 0) {
      lVar8 = lVar8 + -1;
      lVar9 = (local_88[0].tv_nsec + 1000000000) - *(long *)(param_1 + 0x18);
    }
    uVar6 = 0;
    if ((double)(lVar9 + lVar8 * 1000000000) * 1e-09 < 2.0) goto LAB_00bbe618;
    lVar8 = FUN_00a114dc(0);
    if (lVar8 != 0) {
      FUN_00a1ae38();
      fVar13 = (float)FUN_00a1b610();
      uVar6 = 0;
      if (0.0 < fVar13) goto LAB_00bbe618;
    }
    uVar14 = FUN_009df97c(*(undefined8 *)(param_1 + 0x20));
    fVar13 = (float)FUN_009dfab4(*(undefined8 *)(param_1 + 0x20));
    if (10.0 <= fVar13) {
      uVar6 = 0;
      if (5.0 <= (float)uVar14) {
        iVar2 = FUN_009df7c0(*(undefined8 *)(param_1 + 0x20));
        if (iVar2 == 1) {
          uVar6 = FUN_00da414c();
          uVar3 = FUN_00da45fc(uVar6,2);
          uVar4 = FUN_009df7f4(*(undefined8 *)(param_1 + 0x20));
        }
        else {
          uVar6 = 0;
          if (iVar2 != 0) goto LAB_00bbe618;
          uVar6 = FUN_00da414c(0);
          uVar3 = FUN_00da45fc(uVar6,3);
          uVar4 = FUN_009df7dc(*(undefined8 *)(param_1 + 0x20));
        }
        uVar5 = FUN_00cedce4();
        FUN_009841dc(uVar14,local_88,uVar5,uVar3,0xffffffff,uVar4);
        FUN_00ce20fc(local_88);
        lVar8 = FUN_00a1ffc0();
        plVar7 = (long *)(lVar8 + 0x10);
        plVar10 = (long *)*plVar7;
        plVar11 = plVar7;
        if (plVar10 != (long *)0x0) {
          do {
            if (*(uint *)(plVar10 + 4) >= 0x2e4f13dd) {
              plVar11 = plVar10;
            }
            plVar10 = (long *)plVar10[*(uint *)(plVar10 + 4) < 0x2e4f13dd];
          } while (plVar10 != (long *)0x0);
          if (((plVar11 != plVar7) && (*(uint *)(plVar11 + 4) < 0x2e4f13de)) &&
             ((int)plVar11[5] != 0)) {
            lVar8 = 0;
            uVar12 = 0;
            do {
              (*(code *)((undefined8 *)(plVar11[6] + lVar8))[1])
                        (*(undefined8 *)(plVar11[6] + lVar8),uVar3 & 0xff);
              uVar12 = uVar12 + 1;
              lVar8 = lVar8 + 0x10;
            } while (uVar12 < *(uint *)(plVar11 + 5));
          }
        }
        FUN_00e70314((long *)(param_1 + 0x10));
        uVar6 = 1;
      }
      goto LAB_00bbe618;
    }
  }
  uVar6 = 0;
LAB_00bbe618:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




void FUN_00bbe728(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined **local_150;
  undefined1 auStack_148 [72];
  undefined8 local_100;
  void *local_f8;
  byte local_f0;
  void *local_e0;
  undefined8 local_a0;
  void *local_98;
  byte local_90 [16];
  void *local_80;
  undefined4 local_78;
  undefined8 local_74;
  long *local_68;
  int local_60;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  if (((*(long *)(param_1 + 0x20) != 0) && (iVar2 = FUN_009df7c0(), iVar2 == 0)) &&
     (puVar4 = (undefined8 *)FUN_009e02f0(*(undefined8 *)(param_1 + 0x20)),
     puVar4 != (undefined8 *)0x0)) {
    FUN_00b26098(&local_150);
    uVar5 = FUN_00e6ce7c(*puVar4,0);
    thunk_FUN_00e7051c(&local_160,uVar5);
    uVar5 = FUN_00e6ce7c(puVar4[5],0);
    thunk_FUN_00e7051c(&local_170,uVar5);
    FUN_009df7c8(&local_68,*(undefined8 *)(param_1 + 0x20));
    if (local_68 == (long *)0x0) {
      uVar5 = 0;
    }
    else if (local_60 == (int)local_68[1]) {
      uVar5 = (**(code **)(*local_68 + 0x10))();
    }
    else {
      uVar5 = 0;
      local_68 = (long *)0x0;
      local_60 = DAT_03214ce8;
    }
    FUN_00cb0ddc(&local_170,puVar4,uVar5);
    thunk_FUN_00e7051c(&local_a0,&local_160);
    FUN_008fcdb8(local_90,&DAT_0320ffa8);
    local_78 = 0;
    local_74 = 0x41a00000;
    FUN_009c82b4(auStack_148,&local_a0);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    thunk_FUN_00e7051c(&local_a0,&local_170);
    FUN_008fcdb8(local_90,&DAT_0320ffa8);
    local_78 = 1;
    local_74 = 0x41a00000;
    FUN_009c82b4(auStack_148,&local_a0);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    uVar3 = FUN_00f048a4("EVENT_REQUEST_SHOW_ABILITY_TOOLTIP");
    FUN_00f048e0(&local_a0,uVar3,&local_150);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),&local_a0,1);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
      local_170 = 0;
      local_168 = (void *)0x0;
    }
    if (local_158 != (void *)0x0) {
      operator_delete__(local_158);
      local_160 = 0;
      local_158 = (void *)0x0;
    }
    local_150 = &PTR_FUN_027de7f0;
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
    if (local_f8 != (void *)0x0) {
      operator_delete__(local_f8);
      local_100 = 0;
      local_f8 = (void *)0x0;
    }
    FUN_009c8464(auStack_148,1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbe988(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_REQUEST_HIDE_ABILITY_TOOLTIP");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbe9f8(long param_1)

{
  FUN_00c06634(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  return;
}




void FUN_00bbea14(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  iVar2 = FUN_009df8f8();
  plVar8 = *(long **)(param_1 + 8);
  uVar5 = FUN_009dfd50(*(undefined8 *)(param_1 + 0x20));
  bVar1 = false;
  if ((uVar5 & 1) != 0) {
    bVar1 = *(char *)(param_1 + 0x30) != '\0';
  }
  uVar3 = FUN_009dfec4(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(*plVar8 + 0x198))(plVar8,bVar1,uVar3 & 1);
  plVar8 = *(long **)(param_1 + 8);
  uVar4 = FUN_009df900(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(*plVar8 + 0x168))(plVar8,uVar4);
  uVar5 = FUN_009e0108(*(undefined8 *)(param_1 + 0x20));
  if ((uVar5 & 1) != 0) {
    plVar8 = *(long **)(param_1 + 8);
    FUN_009e0218(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*plVar8 + 0x1c0))(plVar8);
  }
  if (iVar2 == 1) {
    uVar5 = FUN_009dfc10(*(undefined8 *)(param_1 + 0x20));
    if (((uVar5 & 1) == 0) ||
       (fVar9 = (float)FUN_009dfa18(*(undefined8 *)(param_1 + 0x20)), fVar9 <= 0.0))
    goto LAB_00bbeb8c;
    plVar8 = *(long **)(param_1 + 8);
    fVar9 = (float)FUN_009dfa18(*(undefined8 *)(param_1 + 0x20));
    fVar10 = (float)FUN_009dfab4(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*plVar8 + 0x1b8))(fVar9 / fVar10,plVar8);
    plVar8 = *(long **)(param_1 + 8);
    uVar6 = 1;
  }
  else {
    if (iVar2 == 4) {
      plVar8 = *(long **)(param_1 + 8);
      FUN_009df97c(*(undefined8 *)(param_1 + 0x20));
      (**(code **)(*plVar8 + 0x170))(plVar8);
      plVar8 = *(long **)(param_1 + 8);
      fVar9 = (float)FUN_009df97c(*(undefined8 *)(param_1 + 0x20));
      fVar10 = (float)FUN_009dfab4(*(undefined8 *)(param_1 + 0x20));
      (**(code **)(*plVar8 + 0x1b0))(fVar9 / fVar10,plVar8);
      goto LAB_00bbeba0;
    }
LAB_00bbeb8c:
    plVar8 = *(long **)(param_1 + 8);
    uVar6 = 0;
  }
  (**(code **)(*plVar8 + 0x180))(plVar8,uVar6);
LAB_00bbeba0:
  uVar5 = FUN_009dfc10(*(undefined8 *)(param_1 + 0x20));
  plVar8 = *(long **)(param_1 + 8);
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    lVar7 = *plVar8;
  }
  else {
    uVar4 = FUN_009dfb50(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*plVar8 + 0x188))(plVar8,uVar4);
    plVar8 = *(long **)(param_1 + 8);
    lVar7 = *plVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00bbebfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 400))(plVar8,!bVar1);
  return;
}




void FUN_00bbec00(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  iVar1 = FUN_009df8f8();
  uVar4 = 0;
  switch(iVar1) {
  case 0:
    uVar4 = 2;
  default:
    goto switchD_00bbec44_caseD_1;
  case 3:
    break;
  case 4:
    FUN_00e70314(param_1 + 0x10);
    break;
  case 5:
    uVar2 = FUN_009e00d0(*(undefined8 *)(param_1 + 0x20));
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_009e00f0(*(undefined8 *)(param_1 + 0x20));
      if ((uVar2 & 1) != 0) {
        uVar4 = 1;
        (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),1);
        goto switchD_00bbec44_caseD_1;
      }
      uVar2 = FUN_009e0108(*(undefined8 *)(param_1 + 0x20));
      if ((uVar2 & 1) == 0) {
        uVar3 = 3;
      }
      else {
        uVar3 = 2;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),uVar3);
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),0);
    }
  }
  uVar4 = 1;
switchD_00bbec44_caseD_1:
  (**(code **)(**(long **)(param_1 + 8) + 0x160))(*(long **)(param_1 + 8),uVar4);
  if (iVar1 != 5) {
    (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),3);
  }
                    /* WARNING: Could not recover jumptable at 0x00bbed38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x178))(*(long **)(param_1 + 8),iVar1 == 4);
  return;
}




void FUN_00bbed3c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *local_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_009df87c(*(undefined8 *)(param_1 + 0x20));
  FUN_009df7c8(&local_48,*(undefined8 *)(param_1 + 0x20));
  uVar3 = 0;
  if (local_48 != (long *)0x0) {
    if (local_40 == (int)local_48[1]) {
      uVar3 = (**(code **)(*local_48 + 0x10))();
    }
    else {
      uVar3 = 0;
      local_48 = (long *)0x0;
      local_40 = DAT_03214ce8;
    }
  }
  uVar3 = FUN_00d5bc38(uVar3);
  (**(code **)(*plVar4 + 0x138))(plVar4,uVar2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbee04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bbee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x1d8))();
  return;
}




void FUN_00bbee14(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_009df7c0();
    if (iVar1 == 0) {
      iVar1 = FUN_009df7dc(*(undefined8 *)(param_1 + 0x20));
      iVar2 = FUN_008ff0dc(param_2);
      if (iVar1 == iVar2) goto LAB_00bbee84;
    }
    iVar1 = FUN_009df7c0(*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 1) {
      iVar1 = FUN_009df7ec(*(undefined8 *)(param_1 + 0x20));
      iVar2 = FUN_008ff0e4(param_2);
      if (iVar1 == iVar2) {
LAB_00bbee84:
        FUN_00c07350(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
        return;
      }
    }
  }
  return;
}




void FUN_00bbeeac(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    iVar1 = FUN_009df7c0();
    iVar2 = FUN_008ff0d4(param_2);
    if (iVar1 != iVar2) {
      return;
    }
    iVar1 = FUN_009df7c0(*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      iVar1 = FUN_009df7dc(*(undefined8 *)(param_1 + 0x20));
      iVar2 = FUN_008ff0dc(param_2);
      if (iVar1 == iVar2) goto LAB_00bbef3c;
    }
    iVar1 = FUN_009df7c0(*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 1) {
      iVar1 = FUN_009df7ec(*(undefined8 *)(param_1 + 0x20));
      iVar2 = FUN_008ff0e4(param_2);
      if (iVar1 == iVar2) {
LAB_00bbef3c:
        FUN_00bbe3b8(param_1);
        return;
      }
    }
  }
  return;
}




void FUN_00bbef60(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb288;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbefa4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbbefa8);
  (*pcVar1)();
}




void thunk_FUN_00bbea14(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  iVar2 = FUN_009df8f8();
  plVar8 = *(long **)(param_1 + 8);
  uVar5 = FUN_009dfd50(*(undefined8 *)(param_1 + 0x20));
  bVar1 = false;
  if ((uVar5 & 1) != 0) {
    bVar1 = *(char *)(param_1 + 0x30) != '\0';
  }
  uVar3 = FUN_009dfec4(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(*plVar8 + 0x198))(plVar8,bVar1,uVar3 & 1);
  plVar8 = *(long **)(param_1 + 8);
  uVar4 = FUN_009df900(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(*plVar8 + 0x168))(plVar8,uVar4);
  uVar5 = FUN_009e0108(*(undefined8 *)(param_1 + 0x20));
  if ((uVar5 & 1) != 0) {
    plVar8 = *(long **)(param_1 + 8);
    FUN_009e0218(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*plVar8 + 0x1c0))(plVar8);
  }
  if (iVar2 == 1) {
    uVar5 = FUN_009dfc10(*(undefined8 *)(param_1 + 0x20));
    if (((uVar5 & 1) == 0) ||
       (fVar9 = (float)FUN_009dfa18(*(undefined8 *)(param_1 + 0x20)), fVar9 <= 0.0))
    goto LAB_00bbeb8c;
    plVar8 = *(long **)(param_1 + 8);
    fVar9 = (float)FUN_009dfa18(*(undefined8 *)(param_1 + 0x20));
    fVar10 = (float)FUN_009dfab4(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*plVar8 + 0x1b8))(fVar9 / fVar10,plVar8);
    plVar8 = *(long **)(param_1 + 8);
    uVar6 = 1;
  }
  else {
    if (iVar2 == 4) {
      plVar8 = *(long **)(param_1 + 8);
      FUN_009df97c(*(undefined8 *)(param_1 + 0x20));
      (**(code **)(*plVar8 + 0x170))(plVar8);
      plVar8 = *(long **)(param_1 + 8);
      fVar9 = (float)FUN_009df97c(*(undefined8 *)(param_1 + 0x20));
      fVar10 = (float)FUN_009dfab4(*(undefined8 *)(param_1 + 0x20));
      (**(code **)(*plVar8 + 0x1b0))(fVar9 / fVar10,plVar8);
      goto LAB_00bbeba0;
    }
LAB_00bbeb8c:
    plVar8 = *(long **)(param_1 + 8);
    uVar6 = 0;
  }
  (**(code **)(*plVar8 + 0x180))(plVar8,uVar6);
LAB_00bbeba0:
  uVar5 = FUN_009dfc10(*(undefined8 *)(param_1 + 0x20));
  plVar8 = *(long **)(param_1 + 8);
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    lVar7 = *plVar8;
  }
  else {
    uVar4 = FUN_009dfb50(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*plVar8 + 0x188))(plVar8,uVar4);
    plVar8 = *(long **)(param_1 + 8);
    lVar7 = *plVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00bbebfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 400))(plVar8,!bVar1);
  return;
}




void thunk_FUN_00bbec00(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  iVar1 = FUN_009df8f8();
  uVar4 = 0;
  switch(iVar1) {
  case 0:
    uVar4 = 2;
  default:
    goto switchD_00bbec44_caseD_1;
  case 3:
    break;
  case 4:
    FUN_00e70314(param_1 + 0x10);
    break;
  case 5:
    uVar2 = FUN_009e00d0(*(undefined8 *)(param_1 + 0x20));
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_009e00f0(*(undefined8 *)(param_1 + 0x20));
      if ((uVar2 & 1) != 0) {
        uVar4 = 1;
        (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),1);
        goto switchD_00bbec44_caseD_1;
      }
      uVar2 = FUN_009e0108(*(undefined8 *)(param_1 + 0x20));
      if ((uVar2 & 1) == 0) {
        uVar3 = 3;
      }
      else {
        uVar3 = 2;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),uVar3);
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),0);
    }
  }
  uVar4 = 1;
switchD_00bbec44_caseD_1:
  (**(code **)(**(long **)(param_1 + 8) + 0x160))(*(long **)(param_1 + 8),uVar4);
  if (iVar1 != 5) {
    (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),3);
  }
                    /* WARNING: Could not recover jumptable at 0x00bbed38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x178))(*(long **)(param_1 + 8),iVar1 == 4);
  return;
}




void thunk_FUN_00bbed3c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plStack_48;
  int iStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_009df87c(*(undefined8 *)(param_1 + 0x20));
  FUN_009df7c8(&plStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar3 = 0;
  if (plStack_48 != (long *)0x0) {
    if (iStack_40 == (int)plStack_48[1]) {
      uVar3 = (**(code **)(*plStack_48 + 0x10))();
    }
    else {
      uVar3 = 0;
      plStack_48 = (long *)0x0;
      iStack_40 = DAT_03214ce8;
    }
  }
  uVar3 = FUN_00d5bc38(uVar3);
  (**(code **)(*plVar4 + 0x138))(plVar4,uVar2,uVar3);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbefb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bbefc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x1d8))();
  return;
}




void FUN_00bbefc4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027eb308;
  pvVar1 = operator_new(0x5f8);
  FUN_00c028ac();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027eb2e8;
  param_1[1] = pvVar1;
  FUN_00bbc8ac(param_1 + 2);
  *(uint *)(param_1[1] + 0x84) = *(uint *)(param_1[1] + 0x84) & 0xfffffff7;
  FUN_00c02b54(param_1[1],param_1[3]);
  return;
}

