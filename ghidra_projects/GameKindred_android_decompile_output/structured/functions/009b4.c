// functions/009b4 — 5 functions
#include "libGameKindred.h"




void FUN_009b4620(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar2 = FUN_00d9e390(param_2);
  if (lVar2 == 0) {
    uVar3 = FUN_00ceab64();
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  else {
    uVar3 = FUN_00ced270(*(undefined4 *)(lVar2 + 0x260));
    if ((uVar3 & 1) == 0) {
      FUN_00ceab64();
      return;
    }
  }
  puVar4 = (undefined8 *)FUN_009b47a0(param_1,param_4);
  uVar3 = FUN_00ceab64();
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00ced200(param_3);
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar3 = FUN_00ced270(param_3);
    if ((uVar3 & 1) == 0) {
      uVar7 = FUN_00cedce4();
      uVar3 = FUN_00ced50c(uVar7,param_3);
      if ((uVar3 & 1) == 0) {
        uVar7 = FUN_00cedce4();
        uVar3 = FUN_00ced3b4(uVar7,param_3);
        if ((uVar3 & 1) == 0) {
          return;
        }
        uVar6 = puVar4[6];
        uVar7 = *puVar4;
        uVar8 = puVar4[7];
        uVar5 = FUN_009b4b90(puVar4[5]);
        uVar9 = *(undefined4 *)(puVar4 + 8);
        uVar10 = *(undefined4 *)((long)puVar4 + 0x44);
      }
      else {
        uVar7 = *puVar4;
        uVar6 = puVar4[2];
        uVar8 = puVar4[3];
        uVar5 = FUN_009b4b90(puVar4[1]);
        uVar9 = *(undefined4 *)(puVar4 + 4);
        uVar10 = *(undefined4 *)((long)puVar4 + 0x24);
      }
    }
    else {
      uVar6 = puVar4[10];
      uVar7 = *puVar4;
      uVar8 = puVar4[0xb];
      uVar5 = FUN_009b4b90(puVar4[9]);
      uVar9 = *(undefined4 *)(puVar4 + 0xc);
      uVar10 = *(undefined4 *)((long)puVar4 + 100);
    }
  }
  else {
    iVar1 = FUN_00e6a474(puVar4[0xe]);
    if (iVar1 == 0) {
      return;
    }
    uVar6 = puVar4[0xe];
    uVar7 = *puVar4;
    uVar8 = puVar4[0xf];
    uVar5 = FUN_009b4b90(puVar4[0xd]);
    uVar9 = *(undefined4 *)(puVar4 + 0x10);
    uVar10 = *(undefined4 *)((long)puVar4 + 0x84);
  }
  FUN_009b4814(uVar9,uVar10,param_1,uVar7,uVar6,uVar8,uVar5,param_5,param_6,param_7);
  return;
}




long FUN_009b47a0(long param_1,int param_2)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = *(undefined8 **)**(long **)(param_1 + 0x28);
  plVar1 = (long *)**(long **)(param_1 + 0x28);
  while( true ) {
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    uVar5 = *puVar4;
    uVar2 = FUN_00e6a474(uVar5);
    iVar3 = FUN_0091ed5c(uVar5,uVar2,0x12345678);
    if (iVar3 == param_2) break;
    puVar4 = (undefined8 *)plVar1[1];
    plVar1 = plVar1 + 1;
  }
  return *plVar1;
}




void FUN_009b4814(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_3 + 0x308) < 10) {
    lVar7 = *(long *)(param_3 + 0x300);
    do {
      lVar5 = lVar7;
      if (lVar5 == 0) {
        bVar2 = false;
        goto LAB_009b489c;
      }
      lVar7 = *(long *)(lVar5 + 0x38);
    } while (*(long *)(lVar5 + 0x38) != 0);
    bVar2 = true;
LAB_009b489c:
    uVar6 = 0;
    lVar7 = param_3;
    do {
      if ((*(long *)(param_3 + 0x300) + -0x30 != lVar7) && (*(long *)(lVar7 + 0x70) == 0)) {
        puVar8 = (undefined8 *)(lVar7 + 0x30);
        goto LAB_009b48d4;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x48;
    } while (uVar6 < 10);
    puVar8 = (undefined8 *)0x0;
LAB_009b48d4:
    uVar3 = FUN_00e6ce7c(param_5,0);
    thunk_FUN_00e7051c(&local_88,uVar3);
    uVar3 = FUN_00e6ce7c(param_6,0);
    thunk_FUN_00e7051c(&local_98,uVar3);
    FUN_00e70510(&local_a8);
    FUN_00e70510(&local_b8);
    FUN_00e70510(&local_c8);
    FUN_00e70e18(&local_a8,&DAT_01bb6d43,param_8);
    FUN_00e70e18(&local_b8,&DAT_01bb6d43,param_9);
    FUN_00e70e18(&local_c8,&DAT_01bb6d43,param_10);
    FUN_00e705c8(&local_d8,"[VAR1]");
    FUN_00e71248(&local_88,0,&local_d8,&local_a8);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e705c8(&local_d8,"[VAR2]");
    FUN_00e71248(&local_88,0,&local_d8,&local_b8);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e705c8(&local_d8,"[VAR3]");
    FUN_00e71248(&local_88,0,&local_d8,&local_c8);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e705c8(&local_d8,"[VAR1]");
    FUN_00e71248(&local_98,0,&local_d8,&local_a8);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e705c8(&local_d8,"[VAR2]");
    FUN_00e71248(&local_98,0,&local_d8,&local_b8);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e705c8(&local_d8,"[VAR3]");
    FUN_00e71248(&local_98,0,&local_d8,&local_c8);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    *puVar8 = param_4;
    puVar8[7] = 0;
    puVar8[8] = lVar5;
    FUN_00910394(puVar8 + 1,&local_88);
    FUN_00910394(puVar8 + 3,&local_98);
    *(int *)(puVar8 + 6) = (int)param_1;
    *(undefined4 *)((long)puVar8 + 0x34) = param_2;
    puVar8[5] = param_7;
    if (bVar2) {
      *(undefined8 **)(lVar5 + 0x38) = puVar8;
    }
    iVar4 = *(int *)(param_3 + 0x308);
    if ((iVar4 == 0) && (*(float *)(param_3 + 0x30c) <= 0.0)) {
      *(undefined8 **)(param_3 + 0x300) = puVar8;
      *(int *)(param_3 + 0x30c) = (int)param_1;
      FUN_009b3fcc(param_1,param_3,puVar8 + 1,puVar8 + 3,param_7);
      iVar4 = *(int *)(param_3 + 0x308);
    }
    *(int *)(param_3 + 0x308) = iVar4 + 1;
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    if (local_b0 != (void *)0x0) {
      operator_delete__(local_b0);
      local_b8 = 0;
      local_b0 = (void *)0x0;
    }
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
      local_a8 = 0;
      local_a0 = (void *)0x0;
    }
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b4b90(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  iVar1 = FUN_0092ec00();
  if (iVar1 == 6) {
    puVar3 = &DAT_01b951f9;
  }
  else if (iVar1 == 0xf) {
    puVar3 = &DAT_01b95201;
  }
  else {
    if (iVar1 != 8) goto LAB_009b4bf4;
    puVar3 = &DAT_01b951fd;
  }
  lVar2 = FUN_009b5364(param_1,puVar3);
  if (lVar2 != 0) {
    return;
  }
LAB_009b4bf4:
  FUN_009b5364(param_1,"en");
  return;
}




void FUN_009b4c0c(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((*(uint *)(param_2 + 0x2f4) & 1) == 0) {
    if ((*(uint *)(param_2 + 0x2f4) >> 0xd & 1) == 0) {
      return;
    }
    FUN_009bbfb0();
    fVar14 = (float)FUN_009bc268();
    if (fVar14 <= 10.0) {
      return;
    }
    FUN_00ceace8();
    uVar3 = FUN_00ceaf84();
    if ((uVar3 & 1) == 0) {
      return;
    }
    puVar4 = (undefined8 *)FUN_009b50a8(param_1,"TurretDestroyed");
    uVar3 = FUN_00ceab64();
    if ((uVar3 & 1) != 0) {
      uVar13 = puVar4[0xe];
      uVar11 = *puVar4;
      uVar12 = puVar4[0xf];
      uVar5 = FUN_009b4b90(puVar4[0xd]);
      uVar15 = *(undefined4 *)(puVar4 + 0x10);
      iVar10 = (int)*(float *)((long)puVar4 + 0x84);
      uVar1 = FUN_00d5b3a8(param_2);
      uVar16 = uVar15;
      goto LAB_009b4fb0;
    }
    uVar11 = FUN_00cedce4();
    uVar3 = FUN_00ced398(uVar11,param_2);
    if ((uVar3 & 1) == 0) {
      uVar11 = FUN_00cedce4();
      uVar3 = FUN_00ced2e0(uVar11,param_2);
      if ((uVar3 & 1) == 0) {
        return;
      }
      uVar13 = puVar4[6];
      uVar11 = *puVar4;
      uVar12 = puVar4[7];
      uVar5 = FUN_009b4b90(puVar4[5]);
      uVar15 = *(undefined4 *)(puVar4 + 8);
      uVar16 = *(undefined4 *)((long)puVar4 + 0x44);
      goto LAB_009b4f38;
    }
    uVar11 = *puVar4;
    uVar13 = puVar4[2];
    uVar12 = puVar4[3];
    uVar5 = FUN_009b4b90(puVar4[1]);
    uVar15 = *(undefined4 *)(puVar4 + 4);
    uVar16 = *(undefined4 *)((long)puVar4 + 0x24);
    iVar10 = FUN_00d5b3a8(param_2);
    goto LAB_009b4f60;
  }
  lVar6 = FUN_00d9e390(param_3);
  if (lVar6 == 0) goto LAB_009b4e74;
  FUN_00d5cf60(lVar6);
  lVar7 = FUN_00d9e390();
  if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x2f4) & 1) != 0)) {
    param_3 = *(undefined4 *)(lVar7 + 0x260);
  }
  uVar3 = FUN_00ceab64();
  if ((uVar3 & 1) == 0) {
    uVar11 = FUN_00cedce4();
    uVar3 = FUN_00ced2e0(uVar11,param_2);
    if ((uVar3 & 1) == 0) goto LAB_009b4e74;
  }
  lVar8 = FUN_00d5bae0(lVar6);
  lVar7 = 0;
  if (lVar8 != 0) {
    lVar7 = lVar8 + -0x28;
  }
  iVar10 = FUN_009ada30(lVar7);
  switch(iVar10) {
  case 2:
    puVar9 = PTR_s_HeroKills_Double_Kill_02be3288;
    break;
  case 3:
    puVar9 = PTR_s_HeroKills_Triple_Kill_02be3290;
    break;
  case 4:
    puVar4 = (undefined8 *)FUN_009b50a8(param_1,PTR_s_HeroKills_Triple_Kill_02be3290);
    uVar11 = FUN_00ceace8();
    uVar16 = FUN_00d55870(lVar6);
    iVar2 = FUN_00ceb12c(uVar11,uVar16);
    puVar9 = PTR_s_HeroKills_Quadra_Kill_02be3298;
    if (3 < iVar2) {
LAB_009b4e04:
      puVar4 = (undefined8 *)FUN_009b50a8(param_1,puVar9);
    }
    goto LAB_009b4e10;
  case 5:
    puVar4 = (undefined8 *)FUN_009b50a8(param_1,PTR_s_HeroKills_Triple_Kill_02be3290);
    uVar11 = FUN_00ceace8();
    uVar16 = FUN_00d55870(lVar6);
    iVar2 = FUN_00ceb12c(uVar11,uVar16);
    puVar9 = PTR_s_HeroKills_Penta_Kill_02be32a0;
    if (4 < iVar2) goto LAB_009b4e04;
LAB_009b4e10:
    uVar13 = *puVar4;
    uVar11 = puVar4[9];
    goto LAB_009b4e18;
  default:
    goto switchD_009b4d50_default;
  }
  puVar4 = (undefined8 *)FUN_009b50a8(param_1,puVar9);
  uVar13 = *puVar4;
  uVar11 = puVar4[9];
LAB_009b4e18:
  uVar12 = puVar4[10];
  uVar5 = puVar4[0xb];
  uVar11 = FUN_009b4b90(uVar11);
  FUN_009b4814(*(undefined4 *)(puVar4 + 0xc),*(undefined4 *)((long)puVar4 + 100),param_1,uVar13,
               uVar12,uVar5,uVar11,0xffffffff,0xffffffff,0xffffffff);
switchD_009b4d50_default:
  uVar11 = FUN_00ceace8();
  uVar16 = FUN_00d55870(lVar6);
  iVar2 = FUN_00ceb12c(uVar11,uVar16);
  if (iVar2 <= iVar10) {
    FUN_009adae4(lVar7);
  }
LAB_009b4e74:
  uVar3 = FUN_00ced270(param_3);
  if ((uVar3 & 1) != 0) {
    uVar11 = FUN_00cedce4();
    uVar3 = FUN_00ced398(uVar11,param_2);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_009b50fc(param_1);
      if ((uVar3 & 1) != 0) {
        return;
      }
      puVar4 = (undefined8 *)FUN_009b50a8(param_1,PTR_s_YourKill_02be3278);
      uVar11 = *puVar4;
      uVar13 = puVar4[10];
      uVar12 = puVar4[0xb];
      uVar5 = FUN_009b4b90(puVar4[9]);
      uVar15 = *(undefined4 *)(puVar4 + 0xc);
      uVar16 = *(undefined4 *)((long)puVar4 + 100);
LAB_009b4f38:
      iVar10 = FUN_00d5b3a8(param_2);
LAB_009b4f60:
      uVar1 = 0xffffffff;
      goto LAB_009b4fb0;
    }
  }
  puVar4 = (undefined8 *)FUN_009b50a8(param_1,PTR_s_HeroKilled_02be3280);
  uVar3 = FUN_00ceab64();
  if ((uVar3 & 1) == 0) {
    uVar11 = FUN_00cedce4();
    uVar3 = FUN_00ced2e0(uVar11,param_2);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_00ced270(*(undefined4 *)(param_2 + 0x260));
      if ((uVar3 & 1) == 0) {
        uVar11 = FUN_00cedce4();
        uVar3 = FUN_00ced398(uVar11,param_2);
        if ((uVar3 & 1) == 0) {
          return;
        }
        uVar11 = *puVar4;
        uVar13 = puVar4[2];
        uVar12 = puVar4[3];
        uVar5 = FUN_009b4b90(puVar4[1]);
        uVar15 = *(undefined4 *)(puVar4 + 4);
        uVar16 = *(undefined4 *)((long)puVar4 + 0x24);
        iVar10 = -1;
        uVar1 = 0xffffffff;
        goto LAB_009b4fb0;
      }
      uVar13 = puVar4[10];
      uVar11 = *puVar4;
      uVar12 = puVar4[0xb];
      uVar5 = FUN_009b4b90(puVar4[9]);
      uVar15 = *(undefined4 *)(puVar4 + 0xc);
      uVar16 = *(undefined4 *)((long)puVar4 + 100);
    }
    else {
      uVar3 = FUN_009b50fc(param_1);
      if ((uVar3 & 1) != 0) {
        return;
      }
      uVar13 = puVar4[6];
      uVar11 = *puVar4;
      uVar12 = puVar4[7];
      uVar5 = FUN_009b4b90(puVar4[5]);
      uVar15 = *(undefined4 *)(puVar4 + 8);
      uVar16 = *(undefined4 *)((long)puVar4 + 0x44);
    }
  }
  else {
    uVar3 = FUN_009b50fc(param_1);
    if ((uVar3 & 1) != 0) {
      return;
    }
    uVar13 = puVar4[0xe];
    uVar11 = *puVar4;
    uVar12 = puVar4[0xf];
    uVar5 = FUN_009b4b90(puVar4[0xd]);
    uVar15 = *(undefined4 *)(puVar4 + 0x10);
    uVar16 = *(undefined4 *)((long)puVar4 + 0x84);
  }
  iVar10 = -1;
  uVar1 = 0xffffffff;
LAB_009b4fb0:
  FUN_009b4814(uVar15,uVar16,param_1,uVar11,uVar13,uVar12,uVar5,iVar10,uVar1,0xffffffff);
  return;
}

