// functions/0198c — 23 functions
#include "libGameKindred.h"




void FUN_0198c000(undefined8 *param_1)

{
  FUN_0198f048(*param_1,1);
  FUN_0198f0bc(*param_1);
  return;
}




void FUN_0198c030(void *param_1)

{
  FUN_00e7a3d4();
  operator_delete(param_1);
  return;
}




void FUN_0198c05c(undefined8 *param_1)

{
  FUN_0198f048(*param_1,1);
  FUN_0198f0bc(*param_1);
  return;
}




undefined8 * FUN_0198c088(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_00e7a7e4(0x1e8);
  FUN_00e7a3c0();
  lVar3 = 0x10;
  do {
    puVar1 = (undefined8 *)((long)puVar2 + lVar3);
    lVar3 = lVar3 + 0x18;
    *puVar1 = 0;
    puVar1[1] = 0;
  } while (lVar3 != 0xd0);
  memset(puVar2 + 2,0,0x1d8);
  *puVar2 = &PTR_FUN_02baf148;
  return puVar2;
}




void FUN_0198c0ec(void *param_1)

{
  FUN_00e7a3d4();
  operator_delete(param_1);
  return;
}




void FUN_0198c110(long param_1)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x50);
  local_30 = *(undefined4 *)(param_1 + 0x58);
  FUN_00f2e380(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198c16c(long param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 auStack_968 [288];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_0198c8f0();
  uVar9 = 0;
  do {
    if ((float)(&DAT_03215478)[uVar9] != *(float *)(param_1 + 0x20 + uVar9 * 4)) {
      DAT_0321561c = DAT_0321561c | 0x38;
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  lVar10 = 0;
  do {
    *(undefined4 *)((long)&DAT_03215478 + lVar10) = *(undefined4 *)(param_1 + 0x20 + lVar10);
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x40);
  lVar10 = *(long *)(param_1 + 0x68);
  if (*(char *)(lVar10 + 0x98) == '\0') {
    FUN_0198cb7c(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x70),lVar10 + 0x10,
                 *(undefined8 *)(param_1 + 0x80));
    FUN_00f013dc(*(long *)(param_1 + 0x68) + 0x10,0x830,0);
    puVar11 = *(uint **)(param_1 + 0x60);
    uVar14 = *(undefined8 *)(param_1 + 0x80);
    uVar5 = *puVar11;
    uVar3 = puVar11[4];
    uVar4 = puVar11[5];
    puVar11 = (uint *)(*(long *)(param_1 + 0x68) + 8);
    if (DAT_03215638 != puVar11) {
      glBindBuffer(0x8893,*puVar11 & 0x3fff);
      DAT_03215638 = puVar11;
    }
    FUN_00f013dc(uVar14,63999,0x830);
    FUN_00f01570(DAT_032157d0);
    uVar9 = FUN_0199d23c(puVar11);
    uVar6 = *(undefined4 *)(&DAT_01e1bb2c + (uVar9 & 0xffffffff) * 4);
    uVar9 = FUN_0199d23c(puVar11);
    glDrawElements(*(undefined4 *)(&DAT_01e1bb44 + (ulong)uVar5 * 4),uVar4,uVar6,
                   (ulong)*(uint *)(&DAT_01e1bb38 + (uVar9 & 0xffffffff) * 4) * (ulong)uVar3);
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x60);
    if ((char)puVar11[0xc] == '\0') {
      DAT_03215378 = *(undefined8 **)(param_1 + 0x78);
      uVar9 = (ulong)*(ushort *)(*(long *)(param_1 + 0x70) + 2);
    }
    else {
      uVar12 = 0;
      puVar13 = auStack_968;
      do {
        lVar8 = uVar12 + 0x31;
        uVar12 = uVar12 + 1;
        puVar2 = (undefined8 *)
                 (*(long *)(param_1 + 0x78) + (ulong)*(byte *)((long)puVar11 + lVar8) * 0x40);
        uVar14 = puVar2[6];
        puVar13[7] = puVar2[7];
        puVar13[6] = uVar14;
        uVar14 = puVar2[4];
        puVar13[5] = puVar2[5];
        puVar13[4] = uVar14;
        uVar14 = puVar2[2];
        puVar13[3] = puVar2[3];
        puVar13[2] = uVar14;
        uVar14 = *puVar2;
        puVar13[1] = puVar2[1];
        *puVar13 = uVar14;
        uVar9 = (ulong)(byte)puVar11[0xc];
        puVar13 = puVar13 + 8;
      } while (uVar12 < uVar9);
      DAT_03215378 = auStack_968;
    }
    puVar1 = (uint *)(lVar10 + 8);
    DAT_03215380 = (undefined4)uVar9;
    uVar5 = *puVar11;
    uVar3 = puVar11[4];
    uVar4 = puVar11[5];
    if (DAT_03215638 != puVar1) {
      glBindBuffer(0x8893,*puVar1 & 0x3fff);
      DAT_03215638 = puVar1;
    }
    FUN_00f013dc(lVar10 + 0x10,0xe3f,0);
    FUN_00f01570(DAT_032157d0);
    uVar9 = FUN_0199d23c(puVar1);
    uVar6 = *(undefined4 *)(&DAT_01e1bb2c + (uVar9 & 0xffffffff) * 4);
    uVar9 = FUN_0199d23c(puVar1);
    glDrawElements(*(undefined4 *)(&DAT_01e1bb44 + (ulong)uVar5 * 4),uVar4,uVar6,
                   (ulong)*(uint *)(&DAT_01e1bb38 + (uVar9 & 0xffffffff) * 4) * (ulong)uVar3);
    DAT_03215380 = 0;
    DAT_03215378 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198c418(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  FUN_0199b638();
  param_1[2] = param_3;
  param_1[3] = param_2;
  puVar1 = param_1 + 4;
  *param_1 = &PTR_FUN_02baf168;
  FUN_019a033c(puVar1);
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfa | param_4 & 1;
  if ((param_4 & 1) != 0) {
    FUN_019a0440(puVar1,20000);
    uVar2 = FUN_019a044c(puVar1,0,960000,6,0);
    FUN_019a06a4(puVar1,0,uVar2,4,3,0,1);
    FUN_019a06a4(puVar1,1,uVar2,4,3,0xc,1);
    FUN_019a06a4(puVar1,2,uVar2,4,4,0x18,1);
    FUN_019a06a4(puVar1,3,uVar2,4,3,0x28,1);
    return;
  }
  return;
}




void FUN_0198c53c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baf168;
  FUN_019a0368(param_1 + 4);
  FUN_0199b65c(param_1);
  return;
}




void FUN_0198c570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baf168;
  FUN_019a0368(param_1 + 4);
  FUN_0199b65c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_0198c5ac(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5,
                 undefined8 param_6)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long local_78;
  
  plVar15 = (long *)(param_5 + -8);
  lVar4 = (**(code **)(*plVar15 + 0x10))(plVar15);
  puVar5 = (undefined8 *)(**(code **)(*plVar15 + 0x18))(plVar15);
  plVar15 = (long *)FUN_0198b210(*(undefined8 *)(param_1 + 0x18),lVar4);
  if (plVar15 != (long *)0x0) {
    puVar6 = (undefined8 *)FUN_0198ac00(lVar4);
    plVar9 = DAT_03214fe0;
    uVar11 = *puVar6;
    do {
      while ((int)*plVar9 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = 100;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(uint *)(plVar9 + 0x801) != 0) {
      uVar13 = 0;
      plVar12 = plVar9;
      do {
        plVar12 = plVar12 + 2;
        if ((undefined8 *)plVar9[(ulong)uVar13 * 2 + 1] == puVar6) {
          local_78 = *plVar12;
          *(int *)plVar9 = 0;
          if (local_78 == 0) goto LAB_0198c690;
          goto LAB_0198c70c;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(plVar9 + 0x801));
    }
    *(int *)plVar9 = 0;
LAB_0198c690:
    if (((*(byte *)(param_1 + 0x90) >> 2 & 1) == 0) || (uVar7 = FUN_0198c8e4(), (uVar7 & 1) == 0)) {
      local_78 = FUN_0198ca98(puVar6,*(undefined8 *)(param_1 + 0x10));
      plVar9 = DAT_03214fe0;
    }
    else {
      local_78 = FUN_0198c930(puVar6,*(undefined8 *)(param_1 + 0x10));
      plVar9 = DAT_03214fe0;
    }
    do {
      while ((int)*plVar9 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = 100;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar13 = *(uint *)(plVar9 + 0x801);
    if (uVar13 < 0x400) {
      plVar9[(ulong)uVar13 * 2 + 1] = (long)puVar6;
      plVar9[(ulong)uVar13 * 2 + 2] = local_78;
      *(uint *)(plVar9 + 0x801) = uVar13 + 1;
    }
    *(int *)plVar9 = 0;
LAB_0198c70c:
    lVar16 = *plVar15;
    if (lVar16 != 0) {
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar1 = *(undefined1 *)(param_5 + 3);
      do {
        uVar17 = *(undefined8 *)(param_1 + 0x10);
        if (lVar4 == 0) {
          uVar8 = *(undefined8 *)(lVar16 + 8);
        }
        else {
          uVar8 = FUN_0198bca4(lVar4,lVar16);
        }
        plVar9 = (long *)(**(code **)(*param_3 + 0x10))(param_3,uVar17,uVar8,uVar1);
        if (plVar9 != (long *)0x0) {
          piVar14 = *(int **)(param_1 + 0x10);
          do {
            while (*piVar14 != 0) {
              ClearExclusiveLocal();
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = 100;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar10 = FUN_00f016d4(piVar14 + (ulong)(uint)piVar14[10] * 4 + 2,0x8f);
          *piVar14 = 0;
          puVar6 = (undefined8 *)(lVar10 + 7U & 0xfffffffffffffff8);
          puVar6[2] = 0;
          puVar6[3] = 0;
          *puVar6 = &PTR_FUN_02baf1e0;
          puVar6[1] = plVar9;
          uVar17 = (**(code **)(*plVar9 + 0x10))(plVar9);
          puVar6[3] = uVar17;
          *puVar6 = &PTR_FUN_02baf1b0;
          uVar17 = puVar5[6];
          puVar6[0xb] = puVar5[7];
          puVar6[10] = uVar17;
          uVar17 = puVar5[4];
          puVar6[9] = puVar5[5];
          puVar6[8] = uVar17;
          uVar17 = puVar5[2];
          puVar6[7] = puVar5[3];
          puVar6[6] = uVar17;
          uVar8 = puVar5[1];
          uVar17 = *puVar5;
          puVar6[0xc] = lVar16;
          puVar6[0xd] = plVar15;
          puVar6[0xe] = uVar11;
          puVar6[5] = uVar8;
          puVar6[4] = uVar17;
          puVar6[0xf] = local_78;
          puVar6[0x10] = param_1 + 0x20;
          FUN_0199bb10(param_6,puVar6);
        }
        lVar16 = *(long *)(lVar16 + 0x58);
      } while (lVar16 != 0);
    }
  }
  return;
}




void FUN_0198c870(void)

{
  return;
}




void FUN_0198c874(void)

{
  return;
}




void FUN_0198c878(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x198c87c);
  (*pcVar1)();
}




void FUN_0198c87c(void)

{
  FUN_00e78608(&DAT_03214e38,1,"DispatchQueue_AnimSample");
  FUN_00e78b80(&DAT_03214e38);
  return;
}




void FUN_0198c8b4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03214e38);
  if ((uVar1 & 1) != 0) {
    FUN_00e78724(&DAT_03214e38);
    return;
  }
  return;
}




void FUN_0198c8e4(void)

{
  FUN_00e78714(&DAT_03214e38);
  return;
}




void FUN_0198c8f0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03214e38);
  if ((DAT_03214f30 != '\0') && ((uVar1 & 1) != 0)) {
    DAT_03214f30 = 0;
    FUN_00e7893c(&DAT_03214e38);
    return;
  }
  return;
}




ulong FUN_0198c930(long *param_1,int *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(*param_1 + 2);
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,(uint)uVar1 << 6 | 3);
  uVar6 = lVar4 + 3U & 0xfffffffffffffffc;
  *param_2 = 0;
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x17);
  puVar5 = (undefined8 *)(lVar4 + 7U & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar5 = param_1;
  puVar5[1] = uVar6;
  DAT_03214f30 = 1;
  FUN_00e78ecc(&DAT_03214e38,FUN_0198ca04);
  return uVar6;
}




void FUN_0198ca04(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)*param_1;
  puVar3 = auStack_40 + -(ulong)((uint)*(ushort *)(lVar2 + 2) * 0x30);
  FUN_0198f6ac((long *)*param_1,puVar3);
  FUN_01990f10(puVar3,puVar3,lVar2);
  FUN_01990fa0(param_1[1],puVar3,lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_0198ca98(long *param_1,int *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar6 = *param_1;
  uVar1 = *(ushort *)(lVar6 + 2);
  puVar7 = auStack_50 + -(ulong)((uint)uVar1 * 0x30);
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar5 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,(uint)uVar1 << 6 | 3);
  uVar8 = lVar5 + 3U & 0xfffffffffffffffc;
  *param_2 = 0;
  FUN_0198f6ac(param_1,puVar7);
  FUN_01990f10(puVar7,puVar7,lVar6);
  FUN_01990fa0(uVar8,puVar7,lVar6);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198cb7c(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  uVar1 = *(undefined4 *)(param_3 + 0x60);
  FUN_019a0748(param_3,0x60f,1);
  FUN_019a0748(param_4,0x60f,6);
  uVar5 = *(ushort *)(param_3 + 100);
  lVar17 = 0;
  if ((uVar5 & 1) != 0) {
    lVar17 = *(long *)(param_3 + (ulong)(param_3[1] >> 6) * 0x18 + 0x18) + (ulong)*param_3;
  }
  uVar6 = *(ushort *)(param_4 + 100);
  lVar13 = 0;
  if ((uVar6 & 1) != 0) {
    lVar13 = *(long *)(param_4 + (ulong)(param_4[1] >> 6) * 0x18 + 0x18) + (ulong)*param_4;
  }
  lVar12 = 0;
  if ((uVar5 >> 1 & 1) != 0) {
    lVar12 = *(long *)(param_3 + (ulong)(param_3[3] >> 6) * 0x18 + 0x18) + (ulong)param_3[2];
  }
  lVar14 = 0;
  if ((uVar5 >> 2 & 1) != 0) {
    lVar14 = *(long *)(param_3 + (ulong)(param_3[5] >> 6) * 0x18 + 0x18) + (ulong)param_3[4];
  }
  lVar10 = 0;
  if ((uVar5 >> 3 & 1) != 0) {
    lVar10 = *(long *)(param_3 + (ulong)(param_3[7] >> 6) * 0x18 + 0x18) + (ulong)param_3[6];
  }
  lVar8 = 0;
  if ((uVar6 >> 1 & 1) != 0) {
    lVar8 = *(long *)(param_4 + (ulong)(param_4[3] >> 6) * 0x18 + 0x18) + (ulong)param_4[2];
  }
  lVar9 = 0;
  if ((uVar6 >> 2 & 1) != 0) {
    lVar9 = *(long *)(param_4 + (ulong)(param_4[5] >> 6) * 0x18 + 0x18) + (ulong)param_4[4];
  }
  lVar11 = 0;
  if ((uVar6 >> 3 & 1) != 0) {
    lVar11 = *(long *)(param_4 + (ulong)(param_4[7] >> 6) * 0x18 + 0x18) + (ulong)param_4[6];
  }
  lVar16 = 0;
  if ((uVar5 >> 9 & 1) != 0) {
    lVar16 = *(long *)(param_3 + (ulong)(param_3[0x13] >> 6) * 0x18 + 0x18) + (ulong)param_3[0x12];
  }
  lVar15 = 0;
  if ((uVar5 >> 10 & 1) != 0) {
    lVar15 = *(long *)(param_3 + (ulong)(param_3[0x15] >> 6) * 0x18 + 0x18) + (ulong)param_3[0x14];
  }
  bVar7 = lVar12 == 0;
  bVar2 = param_3[(ulong)(param_3[0x13] >> 6) * 0x18 + 0x2b];
  bVar3 = param_3[(ulong)(param_3[1] >> 6) * 0x18 + 0x2b];
  bVar4 = param_4[(ulong)(param_4[1] >> 6) * 0x18 + 0x2b];
  if ((!bVar7 && lVar14 != 0) && (lVar10 != 0)) {
    FUN_0198ce94(param_1,lVar9,lVar16,lVar15,bVar2,uVar1,bVar3,bVar4,lVar17,lVar13,lVar12,lVar8,
                 lVar14,lVar9,lVar10,lVar11,lVar9,lVar12,param_4,lVar8);
  }
  if (bVar7 || lVar14 == 0) {
    if (lVar12 == 0) {
      FUN_0198d72c(param_1,lVar9,lVar16,lVar15);
    }
    else {
      FUN_0198d498(param_1,lVar9,lVar16,lVar15,bVar2,uVar1,bVar3,bVar4,lVar17,lVar13,lVar12,lVar8);
    }
  }
  else {
    FUN_0198d1bc(param_1,lVar9,lVar16,lVar15,bVar2,uVar1,bVar3,bVar4,lVar17,lVar13,lVar12,lVar8,
                 lVar14,lVar9);
  }
  FUN_019a0844(param_3,0x60f,0xffffffff);
  FUN_019a0844(param_4,0x60f,0xffffffff);
  return;
}




void FUN_0198ce94(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                 int param_6,ulong param_7,ulong param_8,long param_9,long param_10,long param_11,
                 long param_12,long param_13,long param_14,long param_15,long param_16)

{
  ushort *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  
  if (param_6 != 0) {
    lVar9 = 0;
    lVar10 = 0;
    lVar11 = 0;
    do {
      puVar1 = (ushort *)(param_4 + 4 + lVar10);
      pfVar2 = (float *)(param_3 + 8 + lVar10);
      fVar13 = pfVar2[-2];
      fVar12 = pfVar2[-1];
      fVar14 = *pfVar2;
      fVar16 = pfVar2[1];
      puVar3 = (undefined8 *)(param_1 + (ulong)puVar1[-2] * 0x40);
      uVar29 = puVar3[6];
      puVar4 = (undefined8 *)(param_1 + (ulong)puVar1[-1] * 0x40);
      puVar5 = (undefined8 *)(param_1 + (ulong)*puVar1 * 0x40);
      uVar38 = puVar4[6];
      uVar25 = puVar5[6];
      puVar6 = (undefined8 *)(param_1 + (ulong)puVar1[1] * 0x40);
      uVar26 = puVar6[6];
      pfVar2 = (float *)(param_9 + lVar9);
      fVar32 = pfVar2[2];
      fVar28 = *pfVar2;
      fVar31 = pfVar2[1];
      pfVar2 = (float *)(param_11 + 8 + lVar9);
      pfVar7 = (float *)(param_13 + 8 + lVar9);
      pfVar8 = (float *)(param_15 + 8 + lVar9);
      fVar17 = (float)*puVar3 * fVar13 + (float)*puVar4 * fVar12 + (float)*puVar5 * fVar14 +
               (float)*puVar6 * fVar16;
      fVar18 = (float)((ulong)*puVar3 >> 0x20) * fVar13 + (float)((ulong)*puVar4 >> 0x20) * fVar12 +
               (float)((ulong)*puVar5 >> 0x20) * fVar14 + (float)((ulong)*puVar6 >> 0x20) * fVar16;
      fVar19 = fVar13 * *(float *)(puVar3 + 1) + fVar12 * *(float *)(puVar4 + 1) +
               fVar14 * *(float *)(puVar5 + 1) + fVar16 * *(float *)(puVar6 + 1);
      fVar20 = (float)puVar3[2] * fVar13 + (float)puVar4[2] * fVar12 + (float)puVar5[2] * fVar14 +
               (float)puVar6[2] * fVar16;
      fVar21 = (float)((ulong)puVar3[2] >> 0x20) * fVar13 +
               (float)((ulong)puVar4[2] >> 0x20) * fVar12 +
               (float)((ulong)puVar5[2] >> 0x20) * fVar14 +
               (float)((ulong)puVar6[2] >> 0x20) * fVar16;
      fVar22 = fVar13 * *(float *)(puVar3 + 3) + fVar12 * *(float *)(puVar4 + 3) +
               fVar14 * *(float *)(puVar5 + 3) + fVar16 * *(float *)(puVar6 + 3);
      fVar33 = pfVar2[-2];
      fVar34 = pfVar2[-1];
      fVar35 = pfVar7[-2];
      fVar36 = pfVar7[-1];
      fVar23 = (float)puVar3[4] * fVar13 + (float)puVar4[4] * fVar12 + (float)puVar5[4] * fVar14 +
               (float)puVar6[4] * fVar16;
      fVar24 = (float)((ulong)puVar3[4] >> 0x20) * fVar13 +
               (float)((ulong)puVar4[4] >> 0x20) * fVar12 +
               (float)((ulong)puVar5[4] >> 0x20) * fVar14 +
               (float)((ulong)puVar6[4] >> 0x20) * fVar16;
      fVar30 = pfVar8[-2];
      fVar40 = pfVar8[-1];
      fVar27 = fVar13 * *(float *)(puVar3 + 5) + fVar12 * *(float *)(puVar4 + 5) +
               fVar14 * *(float *)(puVar5 + 5) + fVar16 * *(float *)(puVar6 + 5);
      fVar15 = *pfVar2;
      fVar37 = *pfVar7;
      fVar39 = *pfVar8;
      *(float *)((undefined8 *)(param_10 + lVar11) + 1) =
           fVar13 * *(float *)(puVar3 + 7) + fVar12 * *(float *)(puVar4 + 7) +
           fVar14 * *(float *)(puVar5 + 7) + fVar16 * *(float *)(puVar6 + 7) +
           fVar19 * fVar28 + fVar22 * fVar31 + fVar27 * fVar32;
      *(undefined8 *)(param_10 + lVar11) =
           CONCAT44((float)((ulong)uVar29 >> 0x20) * fVar13 +
                    (float)((ulong)uVar38 >> 0x20) * fVar12 +
                    (float)((ulong)uVar25 >> 0x20) * fVar14 +
                    (float)((ulong)uVar26 >> 0x20) * fVar16 +
                    fVar18 * fVar28 + fVar21 * fVar31 + fVar24 * fVar32,
                    (float)uVar29 * fVar13 + (float)uVar38 * fVar12 + (float)uVar25 * fVar14 +
                    (float)uVar26 * fVar16 + fVar17 * fVar28 + fVar20 * fVar31 + fVar23 * fVar32);
      puVar3 = (undefined8 *)(param_12 + lVar11);
      puVar4 = (undefined8 *)(param_14 + lVar11);
      puVar5 = (undefined8 *)(param_16 + lVar11);
      param_6 = param_6 + -1;
      lVar11 = lVar11 + (param_8 & 0xffffffff);
      lVar10 = lVar10 + (param_5 & 0xffffffff);
      lVar9 = lVar9 + (param_7 & 0xffffffff);
      *(float *)(puVar3 + 1) = fVar19 * fVar33 + fVar22 * fVar34 + fVar27 * fVar15;
      *puVar3 = CONCAT44(fVar18 * fVar33 + fVar21 * fVar34 + fVar24 * fVar15,
                         fVar17 * fVar33 + fVar20 * fVar34 + fVar23 * fVar15);
      *(float *)(puVar4 + 1) = fVar19 * fVar35 + fVar22 * fVar36 + fVar27 * fVar37;
      *puVar4 = CONCAT44(fVar18 * fVar35 + fVar21 * fVar36 + fVar24 * fVar37,
                         fVar17 * fVar35 + fVar20 * fVar36 + fVar23 * fVar37);
      *(float *)(puVar5 + 1) = fVar19 * fVar30 + fVar22 * fVar40 + fVar27 * fVar39;
      *puVar5 = CONCAT44(fVar18 * fVar30 + fVar21 * fVar40 + fVar24 * fVar39,
                         fVar17 * fVar30 + fVar20 * fVar40 + fVar23 * fVar39);
    } while (param_6 != 0);
  }
  return;
}

