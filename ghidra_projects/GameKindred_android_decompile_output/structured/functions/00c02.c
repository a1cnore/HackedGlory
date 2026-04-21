// functions/00c02 — 24 functions
#include "libGameKindred.h"




byte FUN_00c02258(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  switch(*(undefined4 *)(param_2 + 0x2c)) {
  case 1:
    iVar6 = FUN_0092f28c();
    bVar4 = iVar6 == 1;
    break;
  case 2:
    iVar6 = FUN_0092f28c();
    bVar4 = iVar6 == 0;
    break;
  case 3:
    iVar6 = FUN_0092f2b8();
    bVar4 = 1 < iVar6;
    break;
  case 4:
    bVar4 = 0;
    break;
  case 5:
    iVar6 = FUN_0092f28c();
    bVar4 = 0;
    if (iVar6 == 1) {
      lVar7 = 0;
      do {
        lVar1 = param_1 + lVar7 * 0x10;
        uVar2 = *(uint *)(lVar1 + 0x85b8);
        if (uVar2 != 0) {
          lVar9 = (ulong)uVar2 << 3;
          plVar8 = *(long **)(lVar1 + 0x85c0);
          do {
            if (*(int *)(*plVar8 + 8) == 9) {
              bVar4 = *(byte *)(*plVar8 + 0xc) & 1;
              goto LAB_00c023b8;
            }
            lVar9 = lVar9 + -8;
            plVar8 = plVar8 + 1;
          } while (lVar9 != 0);
        }
        lVar7 = lVar7 + 1;
      } while( true );
    }
    break;
  case 6:
    iVar6 = FUN_0092f28c();
    bVar4 = 0;
    if (iVar6 == 0) {
      lVar7 = 0;
      do {
        lVar1 = param_1 + lVar7 * 0x10;
        uVar2 = *(uint *)(lVar1 + 0x85b8);
        if (uVar2 != 0) {
          lVar9 = (ulong)uVar2 << 3;
          plVar8 = *(long **)(lVar1 + 0x85c0);
          do {
            if (*(int *)(*plVar8 + 8) == 2) {
              local_40[0] = *(undefined4 *)(*plVar8 + 0xc);
              local_48[0] = 0;
              bVar4 = FUN_009f1b1c(local_40,local_48);
              goto LAB_00c023b8;
            }
            lVar9 = lVar9 + -8;
            plVar8 = plVar8 + 1;
          } while (lVar9 != 0);
        }
        lVar7 = lVar7 + 1;
      } while( true );
    }
    break;
  case 7:
    lVar7 = FUN_00940c1c();
    bVar4 = *(char *)(lVar7 + 0xc) != '\0';
    break;
  default:
    bVar4 = 1;
  }
LAB_00c023b8:
  if (*(int *)(param_2 + 0x24) != 0x23) {
    lVar7 = 0;
    do {
      lVar1 = param_1 + lVar7 * 0x10;
      uVar2 = *(uint *)(lVar1 + 0x85b8);
      if (uVar2 != 0) {
        lVar9 = (ulong)uVar2 << 3;
        plVar8 = *(long **)(lVar1 + 0x85c0);
        do {
          if (*(int *)(*plVar8 + 8) == *(int *)(param_2 + 0x24)) {
            local_50[0] = *(undefined4 *)(*plVar8 + 0xc);
            bVar5 = FUN_009f1b1c(local_50,param_2 + 0x28);
            bVar4 = bVar4 & bVar5;
            goto LAB_00c0241c;
          }
          lVar9 = lVar9 + -8;
          plVar8 = plVar8 + 1;
        } while (lVar9 != 0);
      }
      lVar7 = lVar7 + 1;
    } while( true );
  }
LAB_00c0241c:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return bVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00c02448(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar3 = 0;
  do {
    lVar1 = param_1 + uVar3 * 0x10;
    uVar2 = *(uint *)(lVar1 + 0x85b8);
    if (uVar2 != 0) {
      lVar5 = (ulong)uVar2 << 3;
      plVar4 = *(long **)(lVar1 + 0x85c0);
      do {
        if (*(int *)(*plVar4 + 8) == param_2) {
          return *plVar4;
        }
        lVar5 = lVar5 + -8;
        plVar4 = plVar4 + 1;
      } while (lVar5 != 0);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 9);
  return 0;
}




void FUN_00c02498(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    lVar1 = param_1 + lVar6 * 0x10;
    uVar2 = *(uint *)(lVar1 + 0x85b8);
    if (uVar2 != 0) {
      lVar5 = (ulong)uVar2 << 3;
      plVar4 = *(long **)(lVar1 + 0x85c0);
      do {
        plVar3 = (long *)*plVar4;
        if ((int)plVar3[1] == param_2) {
          (**(code **)(*plVar3 + 0x10))(plVar3,param_3);
          break;
        }
        lVar5 = lVar5 + -8;
        plVar4 = plVar4 + 1;
      } while (lVar5 != 0);
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 9) {
      return;
    }
  } while( true );
}




void FUN_00c02524(long param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x8750) == 0) {
    pvVar2 = operator_new(0xa48);
    FUN_00c93600(pvVar2,0);
    uVar3 = FUN_00e6ce7c("MENU_EXIT_GAME",0);
    FUN_00c938d4(pvVar2,uVar3);
    FUN_00c93864(pvVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
    FUN_00c938a4(pvVar2,&DAT_01bee7fa);
    FUN_00c928a0(0x42480000,0x41400000,pvVar2);
    FUN_00c93928(pvVar2);
    local_40 = DAT_03210c64;
    local_68 = FUN_00c02634;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0((long)pvVar2 + 8,&local_68);
    FUN_00f023ec(param_1 + 0xc0,pvVar2,1);
    *(long *)(param_1 + 0x8750) = (long)pvVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c02634(void)

{
  FUN_00e7d4c4();
  FUN_00e7d210();
  return;
}




void FUN_00c02648(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x8758) = param_2 & 1;
  return;
}




void FUN_00c02658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c01a7c(param_1,param_3);
  return;
}




void FUN_00c02664(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00f04924(param_2);
  (*(code *)**(undefined8 **)param_1[0x17])
            ((undefined8 *)param_1[0x17],*(undefined4 *)(param_3 + 8),*puVar1);
                    /* WARNING: Could not recover jumptable at 0x00c026b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00c026b4(void)

{
  FUN_00e7d4c4();
  FUN_00e7d210();
  return;
}




void FUN_00c026c8(undefined8 *param_1)

{
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027f5308;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00c02714(long param_1)

{
  FUN_00948d58();
  *(undefined ***)(param_1 + -0x10) = &PTR_FUN_027f5308;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_00c0275c(long param_1)

{
  FUN_00948d58();
  *(undefined8 *)(param_1 + -0x10) = &PTR_FUN_027f5308;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  operator_delete((undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_00c027a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f5308;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00c027e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f5308;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00c0282c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00c028ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  code *local_78;
  long *plStack_70;
  long *local_68;
  code *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027f5328;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x36;
  FUN_00f0e4a8(plVar2);
  param_1[0x54] = 0;
  FUN_00a49c7c(param_1 + 0x55);
  *(undefined4 *)(param_1 + 0xbe) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"global_closex");
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  *(uint *)((long)param_1 + 0x234) = *(uint *)((long)param_1 + 0x234) | 0x10;
  FUN_00f13f08(0x42c80000,0x42c80000,plVar1);
  local_50 = DAT_03210f58;
  local_78 = thunk_FUN_00c03174;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (long *)0x0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x19,&local_78);
  local_78 = thunk_FUN_00c03174;
  local_50 = DAT_03210f84;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (long *)0x0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x19,&local_78);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  uVar4 = FUN_009f1f64();
  local_78 = (code *)0x0;
  local_60 = thunk_FUN_00c032dc;
  plStack_70 = param_1;
  local_68 = param_1;
  FUN_009104f8(uVar4,&local_78);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c02a78(undefined8 *param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027f5328;
  puVar2 = (uint *)FUN_009f1f64();
  lVar4 = (ulong)*puVar2 << 5;
  lVar1 = *(long *)(puVar2 + 2);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00c02acc;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_0091064c(puVar2,lVar3);
LAB_00c02acc:
  FUN_00a49d70(param_1 + 0x55);
  param_1[0x36] = &PTR_FUN_028266f0;
  param_1[0x4d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x50);
  FUN_00f13d08(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c02b30(void *param_1)

{
  FUN_00c02a78();
  operator_delete(param_1);
  return;
}




void FUN_00c02b54(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *local_68;
  long *plStack_60;
  void *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[0x54] != 0) {
    FUN_00f01a4c(param_1[0x54],1);
  }
  param_1[0x54] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_00bfe7f8(param_1[0x54],1);
  lVar2 = param_1[0x54];
  FUN_008fa54c(&local_68,"white_background");
  FUN_00bfe70c(0x3f800000,lVar2,&local_68,0xff231919);
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00bfe7e4(param_1[0x54],1);
  local_40 = DAT_03210fc0;
  *(uint *)(param_1[0x54] + 0x114c) = *(uint *)(param_1[0x54] + 0x114c) | 8;
  local_68 = FUN_00c02cd0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = (void *)0x0;
  plStack_60 = param_1;
  FUN_009693a0(param_1[0x54] + 8,&local_68);
  local_40 = DAT_03210fbc;
  local_68 = thunk_FUN_00c03174;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = (void *)0x0;
  plStack_60 = param_1;
  FUN_009693a0(param_1[0x54] + 8,&local_68);
  local_40 = DAT_03210fb8;
  local_68 = FUN_00c02cdc;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = (void *)0x0;
  plStack_60 = param_1;
  FUN_009693a0(param_1[0x54] + 8,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c02cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c031f0(param_1,param_4);
  return;
}




void FUN_00c02cdc(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f1f94(0x20);
  if (iVar1 == 2) {
    FUN_00c03174(param_1);
    return;
  }
  return;
}




void FUN_00c02d18(long param_1)

{
  FUN_00a49df8(param_1 + 0x2a8);
  return;
}




void FUN_00c02d20(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_a0;
  float fStack_9c;
  void *local_90;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  iVar6 = FUN_009f1f94(0x20);
  uVar8 = FUN_00f00438("root-layer");
  FUN_00f0025c(&uStack_7c,&local_80);
  lVar1 = param_3 + 0x1b0;
  fVar13 = local_80;
  FUN_00f13f08(uStack_7c,lVar1);
  lVar2 = param_3 + 0x2a8;
  local_a0 = (float)FUN_00a49fe0(lVar2);
  fStack_9c = fVar13;
  FUN_00f13f18(lVar2,&local_a0);
  uVar7 = FUN_0092ea9c();
  fVar9 = (float)FUN_00a49ff0(lVar2,uVar7 & 1);
  fVar15 = 1.0;
  fVar16 = fVar15;
  fVar14 = fVar13;
  if (0.0 < fVar13) {
    fVar14 = param_2 * 0.5;
    fVar10 = param_2 - *(float *)(param_3 + 0x5f0);
    fVar16 = fVar14;
    if (fVar10 <= fVar14) {
      fVar16 = fVar10;
    }
    fVar16 = fVar16 / fVar13;
  }
  if (0.0 < fVar9) {
    fVar15 = (param_1 * 0.3) / fVar9;
  }
  local_88 = fVar9;
  fStack_84 = fVar13;
  FUN_00a49fe0(lVar2);
  if ((0.0 < fVar14) && (fVar10 = (float)FUN_00a49fe0(lVar2), 0.0 < fVar10)) {
    FUN_00a49fe0(lVar2);
    fVar11 = (float)FUN_00a49fe0(lVar2);
    fVar10 = fVar16 / fVar14;
    if (fVar15 / fVar11 <= fVar16 / fVar14) {
      fVar10 = fVar15 / fVar11;
    }
    local_88 = fVar9 * fVar10;
    fStack_84 = fVar13 * fVar10;
  }
  pfVar4 = (float *)&DAT_03218ef8;
  if (iVar6 != 2) {
    pfVar4 = &local_88;
  }
  fVar16 = *pfVar4;
  if ((*(float *)(param_3 + 0x2f0) != fVar16) ||
     (fVar16 = pfVar4[1], *(float *)(param_3 + 0x2f4) != fVar16)) {
    *(undefined8 *)(param_3 + 0x2f0) = *(undefined8 *)pfVar4;
    FUN_0091ada4(lVar2);
  }
  fVar14 = *(float *)(param_3 + 0x5f0);
  FUN_00f01c20(lVar2);
  FUN_00f07940(0x41a00000,((param_2 - fVar14) - fVar16) * 0.5,lVar2,0,param_3,0);
  lVar3 = param_3 + 0xc0;
  FUN_00f07940(0xc1a00000,0x41a00000,lVar3,1,param_3,1);
  if (*(long *)(param_3 + 0x2a0) != 0) {
    fVar16 = (float)FUN_00f080a0(lVar2,1,lVar3,0);
    fVar16 = fVar16 + -80.0 + -20.0;
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_00f01c20(lVar2);
      fVar14 = (float)FUN_00f0e700(lVar3);
      fVar16 = ((param_1 - fVar16) - fVar14) + -80.0 + -20.0;
    }
    local_a0 = fVar16;
    if (fVar16 <= 1.0) {
      local_a0 = 1.0;
    }
    fStack_9c = (param_2 - *(float *)(param_3 + 0x5f0)) + -40.0;
    FUN_00f13f18(*(undefined8 *)(param_3 + 0x2a0),&local_a0);
    FUN_00f07940(0xc2a00000,0,*(undefined8 *)(param_3 + 0x2a0),1,lVar3,0);
  }
  FUN_00f07940(0,0,lVar1,0,uVar8,0);
  FUN_00a49f5c(lVar2);
  iVar6 = FUN_009f1f94(0x20);
  if (iVar6 == 1) {
    *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) | 4;
    *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) | 4;
    *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) =
         *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) | 4;
    uVar7 = *(uint *)(param_3 + 0x32c);
    if ((uVar7 & 0x7f80) != 0x4c80) {
      *(uint *)(param_3 + 0x32c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
      FUN_0091ada4(lVar2);
    }
    uVar7 = *(uint *)(param_3 + 0x234);
    if ((uVar7 & 0x7f80) != 0x4c80) {
      *(uint *)(param_3 + 0x234) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
      FUN_0091ada4(lVar1);
    }
    uVar8 = *(undefined8 *)(param_3 + 0x2a0);
    FUN_008fa54c(&local_a0,"white_background");
    uVar12 = 0x3e99999a;
  }
  else {
    if (iVar6 == 2) {
      *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) & 0xfffffffb;
      *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) & 0xfffffffb;
      *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) =
           *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) & 0xfffffffb;
      goto LAB_00c03138;
    }
    *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) | 4;
    *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) | 4;
    *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) =
         *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) | 4;
    if ((~*(uint *)(param_3 + 0x32c) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) | 0x7f80;
      FUN_0091ada4(lVar2);
    }
    if ((~*(uint *)(param_3 + 0x234) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) | 0x7f80;
      FUN_0091ada4(lVar1);
    }
    uVar8 = *(undefined8 *)(param_3 + 0x2a0);
    FUN_008fa54c(&local_a0,"white_background");
    uVar12 = 0x3f800000;
  }
  FUN_00bfe70c(uVar12,uVar8,&local_a0,0xff231919);
  if (((uint)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
LAB_00c03138:
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c02d20(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_a0;
  float fStack_9c;
  void *pvStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  
  lVar5 = tpidr_el0;
  lStack_78 = *(long *)(lVar5 + 0x28);
  iVar6 = FUN_009f1f94(0x20);
  uVar8 = FUN_00f00438("root-layer");
  FUN_00f0025c(&uStack_7c,&fStack_80);
  lVar1 = param_3 + 0x1b0;
  fVar13 = fStack_80;
  FUN_00f13f08(uStack_7c,lVar1);
  lVar2 = param_3 + 0x2a8;
  fStack_a0 = (float)FUN_00a49fe0(lVar2);
  fStack_9c = fVar13;
  FUN_00f13f18(lVar2,&fStack_a0);
  uVar7 = FUN_0092ea9c();
  fVar9 = (float)FUN_00a49ff0(lVar2,uVar7 & 1);
  fVar15 = 1.0;
  fVar16 = fVar15;
  fVar14 = fVar13;
  if (0.0 < fVar13) {
    fVar14 = param_2 * 0.5;
    fVar10 = param_2 - *(float *)(param_3 + 0x5f0);
    fVar16 = fVar14;
    if (fVar10 <= fVar14) {
      fVar16 = fVar10;
    }
    fVar16 = fVar16 / fVar13;
  }
  if (0.0 < fVar9) {
    fVar15 = (param_1 * 0.3) / fVar9;
  }
  fStack_88 = fVar9;
  fStack_84 = fVar13;
  FUN_00a49fe0(lVar2);
  if ((0.0 < fVar14) && (fVar10 = (float)FUN_00a49fe0(lVar2), 0.0 < fVar10)) {
    FUN_00a49fe0(lVar2);
    fVar11 = (float)FUN_00a49fe0(lVar2);
    fVar10 = fVar16 / fVar14;
    if (fVar15 / fVar11 <= fVar16 / fVar14) {
      fVar10 = fVar15 / fVar11;
    }
    fStack_88 = fVar9 * fVar10;
    fStack_84 = fVar13 * fVar10;
  }
  pfVar4 = (float *)&DAT_03218ef8;
  if (iVar6 != 2) {
    pfVar4 = &fStack_88;
  }
  fVar16 = *pfVar4;
  if ((*(float *)(param_3 + 0x2f0) != fVar16) ||
     (fVar16 = pfVar4[1], *(float *)(param_3 + 0x2f4) != fVar16)) {
    *(undefined8 *)(param_3 + 0x2f0) = *(undefined8 *)pfVar4;
    FUN_0091ada4(lVar2);
  }
  fVar14 = *(float *)(param_3 + 0x5f0);
  FUN_00f01c20(lVar2);
  FUN_00f07940(0x41a00000,((param_2 - fVar14) - fVar16) * 0.5,lVar2,0,param_3,0);
  lVar3 = param_3 + 0xc0;
  FUN_00f07940(0xc1a00000,0x41a00000,lVar3,1,param_3,1);
  if (*(long *)(param_3 + 0x2a0) != 0) {
    fVar16 = (float)FUN_00f080a0(lVar2,1,lVar3,0);
    fVar16 = fVar16 + -80.0 + -20.0;
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_00f01c20(lVar2);
      fVar14 = (float)FUN_00f0e700(lVar3);
      fVar16 = ((param_1 - fVar16) - fVar14) + -80.0 + -20.0;
    }
    fStack_a0 = fVar16;
    if (fVar16 <= 1.0) {
      fStack_a0 = 1.0;
    }
    fStack_9c = (param_2 - *(float *)(param_3 + 0x5f0)) + -40.0;
    FUN_00f13f18(*(undefined8 *)(param_3 + 0x2a0),&fStack_a0);
    FUN_00f07940(0xc2a00000,0,*(undefined8 *)(param_3 + 0x2a0),1,lVar3,0);
  }
  FUN_00f07940(0,0,lVar1,0,uVar8,0);
  FUN_00a49f5c(lVar2);
  iVar6 = FUN_009f1f94(0x20);
  if (iVar6 == 1) {
    *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) | 4;
    *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) | 4;
    *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) =
         *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) | 4;
    uVar7 = *(uint *)(param_3 + 0x32c);
    if ((uVar7 & 0x7f80) != 0x4c80) {
      *(uint *)(param_3 + 0x32c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
      FUN_0091ada4(lVar2);
    }
    uVar7 = *(uint *)(param_3 + 0x234);
    if ((uVar7 & 0x7f80) != 0x4c80) {
      *(uint *)(param_3 + 0x234) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
      FUN_0091ada4(lVar1);
    }
    uVar8 = *(undefined8 *)(param_3 + 0x2a0);
    FUN_008fa54c(&fStack_a0,"white_background");
    uVar12 = 0x3e99999a;
  }
  else {
    if (iVar6 == 2) {
      *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) & 0xfffffffb;
      *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) & 0xfffffffb;
      *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) =
           *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) & 0xfffffffb;
      goto LAB_00c03138;
    }
    *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) | 4;
    *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) | 4;
    *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) =
         *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) | 4;
    if ((~*(uint *)(param_3 + 0x32c) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) | 0x7f80;
      FUN_0091ada4(lVar2);
    }
    if ((~*(uint *)(param_3 + 0x234) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) | 0x7f80;
      FUN_0091ada4(lVar1);
    }
    uVar8 = *(undefined8 *)(param_3 + 0x2a0);
    FUN_008fa54c(&fStack_a0,"white_background");
    uVar12 = 0x3f800000;
  }
  FUN_00bfe70c(uVar12,uVar8,&fStack_a0,0xff231919);
  if (((uint)fStack_a0 & 1) != 0) {
    operator_delete(pvStack_90);
  }
LAB_00c03138:
  if (*(long *)(lVar5 + 0x28) == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

