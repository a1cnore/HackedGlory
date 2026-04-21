// functions/00f04 — 67 functions
#include "libGameKindred.h"




void thunk_FUN_00f04824(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00f04328(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  bool bVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_b8 [64];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  iVar5 = FUN_019807b8();
  if ((iVar5 != 0) &&
     (iVar5 = FUN_019807b8(), uVar4 = DAT_03210f8c, uVar3 = DAT_03210f88, uVar2 = DAT_03210f84,
     iVar5 != 0)) {
    uVar12 = 0;
    do {
      puVar6 = (uint *)FUN_019807cc(uVar12);
      uVar15 = puVar6[1];
      uVar16 = puVar6[2];
      uVar11 = 0;
      plVar14 = (long *)(param_1 + 0x1b8);
      do {
        if (*plVar14 == *(long *)(puVar6 + 6)) {
          if ((char)plVar14[2] != '\0') {
            puVar7 = (uint *)plVar14[1];
            bVar13 = true;
            puVar8 = puVar6;
            goto LAB_00f04414;
          }
          bVar13 = true;
          goto LAB_00f043fc;
        }
        uVar11 = uVar11 + 1;
        plVar14 = plVar14 + 3;
      } while (uVar11 < 0x20);
      bVar13 = false;
      plVar14 = (long *)0x0;
LAB_00f043fc:
      puVar7 = (uint *)FUN_00f112fc(uVar15,uVar16,param_1,1);
      puVar8 = puVar7;
LAB_00f04414:
      iVar5 = (int)*puVar6 >> 3;
      if (iVar5 == 1) {
        uVar9 = 1;
LAB_00f04438:
        if (bVar13 || (puVar7 != (uint *)0x0 & uVar9) != 1) goto LAB_00f04480;
        uVar11 = 0;
        plVar14 = (long *)(param_1 + 0x1b8);
        while (*plVar14 != 0) {
          uVar11 = uVar11 + 1;
          plVar14 = plVar14 + 3;
          if (0x1f < uVar11) goto LAB_00f04604;
        }
        *plVar14 = *(long *)(puVar6 + 6);
        puVar8 = (uint *)FUN_00f03784(puVar8,plVar14,puVar7);
joined_r0x00f044c0:
        bVar13 = true;
        if (puVar7 != (uint *)0x0) {
LAB_00f044c4:
          uVar9 = *puVar6;
          if (((int)uVar9 >> 3 == 1) ||
             ((uVar10 = uVar9, (int)uVar9 >> 3 == -1 && ((uVar9 & 1) != 0)))) {
            FUN_00f04944(uVar15,uVar16,0,0,auStack_b8,uVar2,0,0,0,*(undefined8 *)(puVar6 + 6),
                         uVar9 >> 1 & 1,0,0);
            puVar8 = (uint *)FUN_00f04760(puVar7,auStack_b8,1);
            uVar10 = *puVar6;
          }
          if ((0xf < (int)uVar10) && ((uVar10 & 1) != 0)) {
            FUN_00f04944(uVar15,uVar16,0,0,auStack_b8,uVar3,0,0,0,*(undefined8 *)(puVar6 + 6),
                         uVar9 >> 1 & 1,0,0);
            puVar8 = (uint *)FUN_00f04760(puVar7,auStack_b8,1);
            uVar10 = *puVar6;
          }
          if ((uVar10 & 1) == 0) {
            FUN_00f04944(uVar15,uVar16,0,0,auStack_b8,uVar4,0,0,0,*(undefined8 *)(puVar6 + 6),
                         uVar9 >> 1 & 1,0,0);
            puVar8 = (uint *)FUN_00f04760(puVar7,auStack_b8,1);
          }
        }
        if ((bVar13) && ((*puVar6 & 1) == 0)) {
          FUN_00f03784(puVar8,plVar14,0);
        }
      }
      else {
        if (iVar5 == -1) {
          uVar9 = *puVar6 & 1;
          goto LAB_00f04438;
        }
LAB_00f04480:
        if (plVar14 != (long *)0x0) {
          puVar8 = (uint *)FUN_00f03784(puVar8,plVar14,puVar7);
          goto joined_r0x00f044c0;
        }
        if (puVar7 != (uint *)0x0) {
          plVar14 = (long *)0x0;
          bVar13 = false;
          goto LAB_00f044c4;
        }
      }
      uVar12 = uVar12 + 1;
      uVar15 = FUN_019807b8();
    } while (uVar12 < uVar15);
  }
LAB_00f04604:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0463c(long param_1)

{
  if ((*(byte *)(param_1 + 0x84) >> 2 & 1) == 0) {
    return;
  }
  FUN_00f0ca4c();
  return;
}




long * FUN_00f0464c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = 0;
  plVar1 = (long *)(param_1 + 0x1b8);
  do {
    if (*plVar1 == 0) {
      *plVar1 = param_2;
      return plVar1;
    }
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 3;
  } while (uVar2 < 0x20);
  return (long *)0x0;
}




void FUN_00f0467c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_02825520;
  param_1[1] = 0;
  return;
}




void FUN_00f04694(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(int *)(param_1 + 8) - 1;
  if (-1 < (int)uVar2) {
    lVar3 = (long)(int)uVar2 * 0x30;
    do {
      if (*(int *)(*(long *)(param_1 + 0x10) + (ulong)uVar2 * 0x30 + 0x28) == param_2) {
        lVar1 = *(long *)(param_1 + 0x10) + lVar3;
        FUN_0099c2fc((int *)(param_1 + 8),lVar1,lVar1 + 0x30);
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + -0x30;
    } while (-1 < (int)uVar2);
  }
  return;
}




void FUN_00f04710(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




undefined8 FUN_00f04720(long param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 8) != 0) {
    uVar1 = 0;
    piVar2 = (int *)(*(long *)(param_1 + 0x10) + 0x28);
    do {
      if (*piVar2 == param_2) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0xc;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return 0;
}




void FUN_00f04760(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  do {
    uVar2 = (ulong)*(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar3);
        if (*(int *)(puVar1 + 5) == *(int *)(param_2 + 8)) {
          FUN_00f04900(param_2);
          (*(code *)*puVar1)(puVar1[1],puVar1[2],puVar1[3],param_2,puVar1[4]);
          uVar2 = (ulong)*(uint *)(param_1 + 8);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x30;
      } while (uVar4 < uVar2);
    }
  } while ((((param_3 & 1) != 0) && (uVar2 = FUN_00f04914(param_2), (uVar2 & 1) == 0)) &&
          (param_1 = *(long *)(param_1 + 0x18), param_1 != 0));
  return;
}




undefined8 FUN_00f04804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00f0480c(void)

{
  return 0;
}




undefined8 FUN_00f04814(void)

{
  return 1;
}




undefined8 FUN_00f0481c(void)

{
  return 1;
}




void FUN_00f04824(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00f0482c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02825520;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_00f04868(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02825520;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}




int FUN_00f048a4(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00e6a474();
  uVar2 = FUN_0091ed5c(param_1,uVar1,0x12345678);
  return (uVar2 & 0xffffff) + 0x80;
}




void FUN_00f048e0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_02825558;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_00f04900(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




void FUN_00f0490c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}




undefined1 FUN_00f04914(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}




void FUN_00f0491c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




undefined8 FUN_00f04924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




bool FUN_00f04930(undefined8 param_1,int param_2)

{
  return DAT_03210f50 == param_2;
}




void FUN_00f04944(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 param_6,ushort param_7,ushort param_8,ushort param_9
                 ,undefined8 param_10,ushort param_11,ushort param_12,byte param_13)

{
  FUN_00f048e0(param_5,param_6,0);
  *param_5 = &PTR_FUN_027c9ff8;
  param_5[4] = param_10;
  *(undefined4 *)(param_5 + 5) = param_1;
  *(undefined4 *)((long)param_5 + 0x2c) = param_2;
  *(undefined4 *)(param_5 + 6) = param_3;
  *(undefined4 *)((long)param_5 + 0x34) = param_4;
  *(ushort *)(param_5 + 7) =
       param_7 & 1 | (param_8 & 1) << 1 | (param_9 & 1) << 2 | (param_11 & 1) << 3 |
       (param_12 & 1) << 4 | (param_13 & 1) << 5 | *(ushort *)(param_5 + 7) & 0xf000;
  return;
}




void FUN_00f04a14(long param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                 ushort param_6,ushort param_7)

{
  *(ushort *)(param_1 + 0x38) =
       (param_2 & 1) << 6 | (param_3 & 1) << 7 | (param_4 & 1) << 8 | (param_5 & 1) << 9 |
       (param_6 & 1) << 10 | (param_7 & 1) << 0xb | *(ushort *)(param_1 + 0x38) & 0xf03f;
  return;
}




bool FUN_00f04a58(long param_1)

{
  return *(int *)(param_1 + 8) == DAT_03210f58;
}




ushort FUN_00f04a70(long param_1)

{
  return *(ushort *)(param_1 + 0x38) & 1;
}




bool FUN_00f04a7c(long param_1)

{
  return *(int *)(param_1 + 8) == DAT_03210f60;
}




byte FUN_00f04a94(long param_1)

{
  return *(byte *)(param_1 + 0x38) >> 3 & 1;
}




bool FUN_00f04aa0(long param_1)

{
  return *(int *)(param_1 + 8) == DAT_03210f64;
}




byte FUN_00f04ab8(long param_1)

{
  return *(byte *)(param_1 + 0x38) >> 1 & 1;
}




bool FUN_00f04ac4(long param_1)

{
  return *(int *)(param_1 + 8) == DAT_03210f6c;
}




byte FUN_00f04adc(long param_1)

{
  return *(byte *)(param_1 + 0x38) >> 4 & 1;
}




bool FUN_00f04ae8(long param_1)

{
  return *(int *)(param_1 + 8) == DAT_03210f70;
}




byte FUN_00f04b00(long param_1)

{
  return *(byte *)(param_1 + 0x38) >> 2 & 1;
}




bool FUN_00f04b0c(long param_1)

{
  return *(int *)(param_1 + 8) == DAT_03210f78;
}




byte FUN_00f04b24(long param_1)

{
  return *(byte *)(param_1 + 0x38) >> 5 & 1;
}




bool FUN_00f04b30(long param_1)

{
  return (*(byte *)(param_1 + 0x38) & 0xc0) != 0;
}




byte FUN_00f04b40(long param_1)

{
  return *(byte *)(param_1 + 0x38) >> 6 & 1;
}




byte FUN_00f04b4c(long param_1)

{
  return *(byte *)(param_1 + 0x38) >> 7;
}




bool FUN_00f04b58(long param_1)

{
  return (*(byte *)(param_1 + 0x39) & 3) != 0;
}




byte FUN_00f04b68(long param_1)

{
  return *(byte *)(param_1 + 0x39) & 1;
}




byte FUN_00f04b74(long param_1)

{
  return *(byte *)(param_1 + 0x39) >> 1 & 1;
}




bool FUN_00f04b80(long param_1)

{
  return (*(byte *)(param_1 + 0x39) & 0xc) != 0;
}




byte FUN_00f04b90(long param_1)

{
  return *(byte *)(param_1 + 0x39) >> 2 & 1;
}




byte FUN_00f04b9c(long param_1)

{
  return *(byte *)(param_1 + 0x39) >> 3 & 1;
}




void FUN_00f04ba8(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00f048e0(param_3,param_4,0);
  param_3[4] = param_5;
  *param_3 = &PTR_FUN_02825580;
  *(undefined4 *)(param_3 + 5) = param_1;
  *(undefined4 *)((long)param_3 + 0x2c) = param_2;
  return;
}




void FUN_00f04bf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00f048e0(param_1,param_2,0);
  *param_1 = &PTR_FUN_028255a8;
  param_1[4] = param_3;
  param_1[5] = param_4;
  return;
}




void FUN_00f04c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f048e0(param_1,param_2,0);
  *param_1 = &PTR_FUN_028255d0;
  param_1[4] = param_3;
  return;
}




void FUN_00f04c7c(undefined8 *param_1)

{
  FUN_00f048e0();
  *param_1 = &PTR_FUN_028255f8;
  return;
}




void FUN_00f04cac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_00f048e0(param_1,param_2,0);
  *param_1 = &PTR_FUN_02825620;
  param_1[4] = param_3;
  param_1[5] = *param_4;
  return;
}




undefined8 FUN_00f04cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




long FUN_00f04d04(long param_1)

{
  return param_1 + 0x28;
}




bool FUN_00f04d0c(long param_1)

{
  return *(float *)(param_1 + 0x2c) < 0.0;
}




bool FUN_00f04d1c(long param_1)

{
  return 0.0 < *(float *)(param_1 + 0x2c);
}




bool FUN_00f04d2c(long param_1)

{
  return *(float *)(param_1 + 0x28) < 0.0;
}




bool FUN_00f04d3c(long param_1)

{
  return 0.0 < *(float *)(param_1 + 0x28);
}




bool FUN_00f04d50(undefined8 param_1,int param_2)

{
  return DAT_03210fdc == param_2;
}




bool FUN_00f04d68(undefined8 param_1,int param_2)

{
  return DAT_03210fe0 == param_2;
}




bool FUN_00f04d80(undefined8 param_1,int param_2)

{
  return DAT_03210fe4 == param_2;
}




bool FUN_00f04d98(undefined8 param_1,int param_2)

{
  return DAT_03210fe8 == param_2;
}




bool FUN_00f04db0(undefined8 param_1,int param_2)

{
  return DAT_03210fec == param_2;
}




void FUN_00f04dc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_02825648;
  do {
    *(undefined4 *)puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)(puVar1 + 0x129) = 0;
    puVar1 = puVar1 + 0x12a;
  } while (puVar1 != param_1 + 0x2541);
  lVar2 = 0x2400;
  puVar1 = param_1 + 0x2549;
  do {
    puVar1[-3] = 0;
    puVar1[-2] = 0;
    *(undefined2 *)puVar1 = 0;
    lVar2 = lVar2 + -0x48;
    puVar1 = puVar1 + 9;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x29c1;
  do {
    FUN_00f19a8c(puVar1);
    *(undefined2 *)(puVar1 + 0xc) = 0;
    puVar1 = puVar1 + 0xd;
  } while (puVar1 != param_1 + 0x2b61);
  return;
}




void FUN_00f04e68(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = 0;
  *param_1 = &PTR_FUN_02825648;
  do {
    if ((*(int *)(param_1 + lVar5 * 0x12a + 1) != 0) &&
       (*(short *)(param_1 + lVar5 * 0x12a + 0x12a) != 0)) {
      do {
        FUN_00f04f94(param_1,lVar5);
      } while (*(short *)(param_1 + lVar5 * 0x12a + 0x12a) != 0);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x20);
  puVar4 = param_1 + 0x29be;
  lVar5 = -0x2400;
  do {
    if ((void *)*puVar4 != (void *)0x0) {
      operator_delete__((void *)*puVar4);
      puVar4[-1] = 0;
      *puVar4 = 0;
    }
    lVar5 = lVar5 + 0x48;
    puVar4 = puVar4 + -9;
  } while (lVar5 != 0);
  puVar4 = param_1 + 0x241b;
  puVar1 = param_1 + 0x2541;
  do {
    iVar2 = *(int *)(puVar1 + -0x127);
    if (iVar2 != 0) {
      piVar3 = (int *)(puVar4 + (ulong)(iVar2 - 1) * 0x12);
      do {
        if (*piVar3 != 0) {
          *piVar3 = 0;
        }
        iVar2 = iVar2 + -1;
        piVar3 = piVar3 + -0x24;
      } while (iVar2 != 0);
      *(int *)(puVar1 + -0x127) = 0;
    }
    puVar6 = puVar1 + -0x12a;
    if ((void *)puVar1[-0x128] != (void *)0x0) {
      operator_delete__((void *)puVar1[-0x128]);
      puVar1[-0x129] = 0;
      puVar1[-0x128] = 0;
    }
    puVar4 = puVar4 + -0x12a;
    puVar1 = puVar6;
  } while (puVar6 != param_1 + 1);
  return;
}




void FUN_00f04f94(long param_1,ulong param_2)

{
  short sVar1;
  long lVar2;
  
  lVar2 = param_1 + (param_2 & 0xff) * 0x950;
  sVar1 = *(short *)(lVar2 + 0x950) + -1;
  *(short *)(lVar2 + 0x950) = sVar1;
  if (sVar1 != 0) {
    return;
  }
  lVar2 = param_1 + (param_2 & 0xff) * 0x950;
  FUN_00f19eb0(lVar2 + 0x10,param_1);
  *(undefined4 *)(lVar2 + 8) = 0;
  return;
}




void FUN_00f04fec(void *param_1)

{
  FUN_00f04e68();
  operator_delete(param_1);
  return;
}

