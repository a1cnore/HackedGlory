// functions/00984 — 48 functions
#include "libGameKindred.h"




void FUN_00984020(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be188;
  *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)(param_1 + 0x29);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00984098(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6,undefined1 param_7)

{
  param_6[1] = 0;
  param_6[2] = 0;
  *(undefined1 *)(param_6 + 3) = 0;
  *(undefined4 *)((long)param_6 + 0x1c) = param_1;
  *(undefined4 *)(param_6 + 4) = param_2;
  *(undefined4 *)((long)param_6 + 0x24) = param_3;
  *(undefined4 *)(param_6 + 5) = param_4;
  *(undefined4 *)((long)param_6 + 0x2c) = param_5;
  *param_6 = &PTR_FUN_027be1c0;
  *(undefined1 *)(param_6 + 6) = param_7;
  return;
}




void FUN_009840c4(void)

{
  return;
}




void FUN_009840c8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008ff584(*(undefined1 *)(param_1 + 0x30));
  if (lVar2 != 0) {
    for (lVar2 = *(long *)(lVar2 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef58) {
        FUN_00a10ef8(auStack_40,lVar2,param_1 + 0x1c);
        FUN_00a10bb0(*(undefined4 *)(param_1 + 0x2c),auStack_40,param_1 + 0x24);
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00984164(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be1c0;
  *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)(param_1 + 0x29);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_009841dc(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined1 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_5;
  *(undefined4 *)(param_2 + 5) = param_1;
  *param_2 = &PTR_FUN_027be1f8;
  *(undefined4 *)((long)param_2 + 0x2c) = param_6;
  return;
}




void FUN_0098420c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_00ce8e88(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c),
               *(undefined1 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x2c));
  uVar1 = FUN_00da414c();
  lVar2 = FUN_00da428c(uVar1,*(undefined1 *)(param_1 + 0x20));
  FUN_00908ae4(*(undefined8 *)(lVar2 + 8));
  return;
}




void FUN_00984250(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  
  lVar5 = FUN_00a1ffc0();
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined1 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  fVar10 = *(float *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  plVar6 = (long *)(lVar5 + 0x10);
  plVar7 = (long *)*plVar6;
  plVar8 = plVar6;
  if (plVar7 != (long *)0x0) {
    do {
      if (*(uint *)(plVar7 + 4) >= 0x3c29fe0) {
        plVar8 = plVar7;
      }
      plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < 0x3c29fe0];
    } while (plVar7 != (long *)0x0);
    if (((plVar8 != plVar6) && (*(uint *)(plVar8 + 4) < 0x3c29fe1)) && ((int)plVar8[5] != 0)) {
      lVar5 = 0;
      uVar9 = 0;
      do {
        (*(code *)((undefined8 *)(plVar8[6] + lVar5))[1])
                  ((double)fVar10,*(undefined8 *)(plVar8[6] + lVar5),uVar1,uVar4,uVar2,uVar3);
        uVar9 = uVar9 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar9 < *(uint *)(plVar8 + 5));
    }
  }
  return;
}




void FUN_00984334(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be1f8;
  *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_009843ac(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be230;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_009843cc(void)

{
  return;
}




void FUN_009843d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef68) {
        uVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
        FUN_00a14cd0(lVar1,uVar2);
        return;
      }
    }
  }
  return;
}




void FUN_00984440(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be230;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_009844b0(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined1 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_027be268;
  *(undefined1 *)((long)param_1 + 0x21) = param_4;
  return;
}




void FUN_009844d8(void)

{
  return;
}




void FUN_009844dc(long param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x20);
  cVar2 = FUN_00cedf10();
  if (cVar1 == cVar2) {
    FUN_00920a7c(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x21);
    return;
  }
  return;
}




void FUN_00984520(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be268;
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_1 + 0x20);
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00984598(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be2a0;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *(undefined8 *)((long)param_1 + 0x1c) = *param_3;
  *(undefined8 *)((long)param_1 + 0x24) = *param_4;
  return;
}




void FUN_009845c8(void)

{
  return;
}




void FUN_009845cc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if ((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0x18), lVar5 = lVar4, lVar4 != 0)) {
    do {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_02e3ef58) {
        FUN_00a10ef8(&local_50,lVar5,param_1 + 0x1c);
        FUN_00a10b44(&local_50,param_1 + 0x24,lVar3);
        lVar4 = *(long *)(lVar3 + 0x18);
        break;
      }
      plVar1 = (long *)(lVar5 + 0x20);
      lVar5 = *plVar1;
    } while (*plVar1 != 0);
    lVar5 = lVar4;
    if (lVar4 != 0) {
      do {
        if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_02c7bf48) {
          FUN_00d6c6d8(lVar5,PTR_s_onActorMoveName_02bed558);
          local_50 = *(undefined4 *)(param_1 + 0x24);
          local_48 = *(undefined4 *)(param_1 + 0x28);
          uStack_4c = 0;
          FUN_00d6c5e0(lVar5,&local_50);
          lVar4 = *(long *)(lVar3 + 0x18);
          break;
        }
        plVar1 = (long *)(lVar5 + 0x20);
        lVar5 = *plVar1;
      } while (*plVar1 != 0);
      do {
        if (lVar4 == 0) break;
        if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02e3ef78) {
          FUN_00d53688();
          break;
        }
        lVar4 = *(long *)(lVar4 + 0x20);
      } while( true );
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00984710(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be2a0;
  *(undefined1 *)((long)puVar1 + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
  uVar2 = *(undefined8 *)(param_1 + 0x19);
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x19) = uVar2;
  *(undefined2 *)((long)puVar1 + 0x29) = *(undefined2 *)(param_1 + 0x29);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00984790(undefined8 *param_1,undefined1 param_2,undefined8 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be2d8;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *(undefined8 *)((long)param_1 + 0x1c) = *param_3;
  return;
}




void FUN_009847b8(void)

{
  return;
}




void FUN_009847bc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if ((lVar3 != 0) &&
     (((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
       (*(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) != 5)) &&
      ((*(byte *)(lVar3 + 0x2f8) >> 1 & 1) == 0)))) {
    for (lVar4 = *(long *)(lVar3 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02e3ef58) {
        FUN_00a10c84(auStack_50);
        FUN_00a10b44(auStack_50,param_1 + 0x1c,lVar3);
        break;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00984890(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be2d8;
  *(undefined1 *)((long)puVar1 + 0x23) = *(undefined1 *)(param_1 + 0x23);
  *(undefined8 *)((long)puVar1 + 0x19) = *(undefined8 *)(param_1 + 0x19);
  *(undefined2 *)((long)puVar1 + 0x21) = *(undefined2 *)(param_1 + 0x21);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00984910(undefined4 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_027be310;
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  *(undefined4 *)((long)param_2 + 0x2c) = param_1;
  *(undefined4 *)(param_2 + 6) = param_4;
  param_2[4] = uVar2;
  uVar3 = (uint)*param_3;
  uVar1 = 0x811c9dc5;
  if (*param_3 != 0) {
    do {
      param_3 = param_3 + 1;
      uVar1 = (uVar1 ^ uVar3) * 0x1000193;
      uVar3 = (uint)*param_3;
    } while (*param_3 != 0);
  }
  *(uint *)((long)param_2 + 0x1c) = uVar1;
  return;
}




void FUN_00984978(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *param_2 = &PTR_FUN_027be310;
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_5 + 1);
  uVar1 = *param_5;
  *(undefined4 *)((long)param_2 + 0x2c) = param_1;
  *(undefined4 *)(param_2 + 6) = param_4;
  param_2[4] = uVar1;
  return;
}




void FUN_009849b0(void)

{
  return;
}




void FUN_009849b4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  local_88[0] = uVar1;
  lVar6 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x30));
  if ((lVar6 != 0) && (lVar7 = FUN_00d5babc(lVar6), lVar7 != 0)) {
    plVar8 = (long *)FUN_00d5babc(lVar6);
    local_88[0] = (**(code **)(*plVar8 + 8))(plVar8,uVar1);
  }
  local_90 = 0;
  FUN_019889cc(&local_90,1,DAT_02e3ef88,0);
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined4 *)(param_1 + 0x28);
  uStack_78 = 0;
  local_80 = 0x3f800000;
  uStack_68 = 0;
  uStack_70 = 0x3f80000000000000;
  uStack_58 = 0x3f800000;
  local_60 = 0;
  uStack_44 = 0x3f800000;
  lVar7 = FUN_01985d44(local_90,DAT_02e3ef98);
  if (lVar7 != 0) {
    FUN_009d3364(lVar7,local_88);
    FUN_009d34d4(lVar7,&local_80);
    FUN_009d3950(*(undefined4 *)(param_1 + 0x2c),lVar7);
    FUN_009d33ec(lVar7);
    FUN_009d3440(0,lVar7);
    if (lVar6 == 0) {
      bVar3 = true;
    }
    else {
      cVar4 = FUN_00cedf10();
      cVar5 = FUN_00d55870(lVar6);
      bVar3 = cVar4 != cVar5;
    }
    FUN_009d3e98(lVar7,bVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00984b10(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be310;
  *(undefined8 *)((long)puVar1 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00984b88(void)

{
  return;
}




void FUN_00984b8c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_00d7e3d0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0x2a9a0b2) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x2a9a0b2];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x2a9a0b3)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_00984c28(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be348;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00984c90(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be380;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  *(undefined4 *)(param_1 + 6) = 3;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  return;
}




void FUN_00984cdc(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_027be380;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = DAT_03218f38;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = DAT_03218f30;
  return;
}




void FUN_00984d14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  param_4[2] = 0;
  *(undefined1 *)(param_4 + 3) = 0;
  *(undefined4 *)((long)param_4 + 0x24) = param_1;
  *(undefined4 *)(param_4 + 5) = param_2;
  *(undefined4 *)((long)param_4 + 0x2c) = param_3;
  *param_4 = &PTR_FUN_027be380;
  param_4[1] = 0;
  *(undefined4 *)((long)param_4 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_4 + 4) = param_5;
  *(undefined4 *)(param_4 + 6) = 1;
  return;
}




void FUN_00984d50(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 3) {
    FUN_00ce869c(*(undefined4 *)(param_1 + 0x20));
    iVar1 = *(int *)(param_1 + 0x30);
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      FUN_00ce87d0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
      return;
    }
    return;
  }
  FUN_00ce890c(param_1 + 0x24,*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00984db4(void)

{
  return;
}




void FUN_00984dbc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be380;
  *(undefined8 *)((long)puVar1 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00984e34(undefined8 *param_1,undefined1 param_2,byte param_3)

{
  long lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *param_1 = &PTR_FUN_027be3b8;
  *(byte *)((long)param_1 + 0x1a) = param_3 & 1;
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    FUN_00d5378c(lVar1,param_2,param_3 & 1);
    return;
  }
  return;
}




void FUN_00984ec0(long param_1)

{
  FUN_00927418(*(undefined1 *)(param_1 + 0x19),*(undefined1 *)(param_1 + 0x1a));
  return;
}




void FUN_00984ecc(void)

{
  return;
}




void FUN_00984ed4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be3b8;
  *(undefined2 *)((long)puVar1 + 0x19) = *(undefined2 *)(param_1 + 0x19);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00984f44(undefined8 *param_1,undefined1 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be3f0;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  return;
}




void FUN_00984f64(long param_1)

{
  FUN_00ce7790(*(undefined1 *)(param_1 + 0x19));
  return;
}




void FUN_00984f6c(void)

{
  return;
}




void FUN_00984f74(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be3f0;
  *(undefined1 *)((long)puVar1 + 0x19) = *(undefined1 *)(param_1 + 0x19);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00984fe4(undefined8 *param_1,undefined4 param_2)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027be428;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}

