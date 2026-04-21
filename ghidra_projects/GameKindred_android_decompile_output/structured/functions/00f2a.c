// functions/00f2a — 35 functions
#include "libGameKindred.h"




void FUN_00f2a010(undefined4 param_1,undefined4 param_2)

{
  FUN_00f2b358(DAT_032112e8,param_1,param_2);
  return;
}




void FUN_00f2a028(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00f2b3d8(DAT_032112e8,param_1,param_2,param_3,param_4);
  return;
}




void FUN_00f2a048(undefined4 param_1,undefined4 param_2,uint param_3)

{
  FUN_00f2b490(DAT_032112e8,param_1,param_2,param_3 & 1);
  return;
}




void FUN_00f2a068(undefined4 param_1,undefined4 param_2)

{
  FUN_00f2b4b8(DAT_032112e8,param_1,param_2);
  return;
}




void FUN_00f2a080(undefined4 param_1,undefined4 param_2)

{
  FUN_00f2b4d0(DAT_032112e8,param_1,param_2);
  return;
}




void FUN_00f2a098(undefined4 param_1)

{
  FUN_00f2ad7c(DAT_032112e8,param_1);
  return;
}




void FUN_00f2a0ac(undefined4 param_1,undefined4 param_2)

{
  FUN_00f2ae28(DAT_032112e8,param_1,param_2);
  return;
}




void FUN_00f2a0c4(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5)

{
  FUN_00f2aeac(DAT_032112e8,param_1,param_2,param_3,param_4,param_5 & 1);
  return;
}




void FUN_00f2a0ec(void)

{
  FUN_00e78608(&DAT_032112f0,1,"DispatchQueue_FogOfWar");
  FUN_00e78b80(&DAT_032112f0);
  return;
}




void FUN_00f2a124(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_032112f0);
  if ((uVar1 & 1) != 0) {
    FUN_00e78724(&DAT_032112f0);
    return;
  }
  return;
}




void FUN_00f2a154(void)

{
  FUN_00e78714(&DAT_032112f0);
  return;
}




void FUN_00f2a160(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_032112f0);
  if ((uVar1 & 1) != 0) {
    FUN_00e7893c(&DAT_032112f0);
    return;
  }
  return;
}




void FUN_00f2a190(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00e7825c();
  DAT_03212068 = FUN_00f2a92c(param_1,&DAT_032113e8,200);
  if (DAT_03212068 <= uVar1) {
    uVar1 = DAT_03212068;
  }
  DAT_0321206c = 0;
  DAT_03212070 = param_2;
  DAT_03212078 = param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      FUN_00e78ecc(&DAT_032112f0,FUN_00f2a260,&DAT_032113e8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  FUN_00e78f64(&DAT_032112f0,0,0);
  FUN_00e78ecc(&DAT_032112f0,FUN_00f2a398,&DAT_032113e8);
  return;
}




void FUN_00f2a260(long param_1)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = (uint *)(param_1 + 0xc84);
  do {
    uVar10 = *puVar2;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar8) {
      *puVar2 = uVar10 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (uVar10 < *(uint *)(param_1 + 0xc80)) {
    do {
      plVar1 = (long *)(param_1 + (ulong)uVar10 * 0x10);
      plVar3 = plVar1 + 1;
      uVar6 = *(uint *)(*(long *)(param_1 + 0xc90) + 0x9e84);
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar10 / uVar6;
      }
      if (uVar10 - uVar9 * uVar6 == *(int *)(*(long *)(param_1 + 0xc90) + 0x9e88)) {
        lVar11 = *plVar3;
        if ((*(byte *)(lVar11 + 0x26) & 2) != 0) {
          if (*(long *)(lVar11 + 0x10) != 0) {
            *(undefined4 *)(lVar11 + 8) = 0;
          }
          *(undefined2 *)(lVar11 + 0x24) = *(undefined2 *)(lVar11 + 0x24);
          *(byte *)(lVar11 + 0x26) = *(byte *)(lVar11 + 0x26) & 0xfd;
          lVar12 = *plVar3;
          lVar11 = *plVar1;
          FUN_00f2b86c(*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                       *(float *)(lVar12 + 0x20),*(float *)(lVar12 + 0x20) * 0.5,lVar11 + 0x2110,
                       *(undefined4 *)(lVar11 + 4),lVar11 + 0x2d10,lVar12 + 8);
        }
      }
      iVar5 = *(int *)(*plVar3 + 8);
      piVar4 = (int *)(*plVar1 + 0x9d14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = *piVar4 + iVar5;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      do {
        uVar10 = *puVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar8) {
          *puVar2 = uVar10 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    } while (uVar10 < *(uint *)(param_1 + 0xc80));
  }
  return;
}




void FUN_00f2a398(long param_1)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  
  uVar2 = *(uint *)(param_1 + 0xc80);
  if (uVar2 != 0) {
    __dest = *(void **)(param_1 + 0xc88);
    uVar3 = 0;
    uVar4 = 0;
    plVar5 = (long *)(param_1 + 8);
    do {
      uVar1 = *(uint *)(*plVar5 + 8);
      if (uVar1 != 0) {
        uVar4 = uVar1 + uVar4;
        if (0x3000 < uVar4) {
          return;
        }
        memmove(__dest,*(void **)(*plVar5 + 0x10),(ulong)(uVar1 * 0x18));
        uVar2 = *(uint *)(param_1 + 0xc80);
        __dest = (void *)((long)__dest + (ulong)uVar1 * 0x18);
      }
      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 2;
    } while (uVar3 < uVar2);
  }
  return;
}




void FUN_00f2a430(long param_1)

{
  long lVar1;
  
  lVar1 = 4;
  do {
    FUN_0199fb64(param_1 + lVar1);
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x34);
  lVar1 = 0x38;
  do {
    FUN_0199d248(param_1 + lVar1);
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x78);
  *(undefined8 *)(param_1 + 0xb0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0x3f80000000000000;
  *(undefined ***)(param_1 + 0xb8) = &PTR_FUN_02828f10;
  *(long *)(param_1 + 0xc0) = param_1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3f800000;
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfc | 2;
  return;
}




void FUN_00f2a4c4(long param_1,undefined4 param_2)

{
  FUN_00f01264(param_2,*(long *)(param_1 + 8) + 4);
  return;
}




void FUN_00f2a4d8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xfc;
  return;
}




void FUN_00f2a500(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  
  *(undefined1 *)(param_1 + 1) = 1;
  lVar1 = 0x10;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  do {
    *(undefined1 *)(param_1 + lVar1) = 0;
    lVar1 = lVar1 + 0xd0;
  } while (lVar1 != 0x1b0);
  lVar1 = 200;
  *(undefined4 *)(param_1 + 0x2100) = 0;
  puVar2 = (undefined1 *)(param_1 + 0x1c0);
  do {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 0x28;
  } while (lVar1 != 0);
  *(undefined4 *)(param_1 + 0x9d10) = 0;
  return;
}




void FUN_00f2a548(undefined1 *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x9d20) = 0;
  *param_1 = 0;
  do {
    FUN_019a033c(param_1 + lVar3 + 0x9d30);
    lVar3 = lVar3 + 0x70;
  } while (lVar3 != 0x150);
  lVar3 = 0;
  puVar1 = (uint *)(param_1 + 0x9e80);
  puVar1[0] = 0;
  puVar1[1] = 2;
  *(undefined4 *)(param_1 + 0x9e88) = 0;
  do {
    puVar2 = param_1 + lVar3 + 0x9d30;
    FUN_019a0440(puVar2,0x3000);
    FUN_019a044c(puVar2,0,0x48000,6,0);
    FUN_019a06a4(puVar2,0,0,4,4,0,1);
    FUN_019a06a4(puVar2,5,0,4,2,0x10,1);
    lVar3 = lVar3 + 0x70;
  } while (lVar3 != 0x150);
  FUN_019a0748(param_1 + (ulong)*puVar1 * 0x70 + 0x9d30,0x21,4);
  return;
}




void FUN_00f2a660(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  FUN_019a0844(param_1 + (ulong)*(uint *)(param_1 + 0x9e80) * 0x70 + 0x9d30,0xff,0xffffffff);
  lVar3 = 0;
  do {
    FUN_019a0378(param_1 + lVar3 + 0x9d30);
    lVar3 = lVar3 + 0x70;
  } while (lVar3 != 0x150);
  lVar3 = 0;
  do {
    FUN_019a0368(param_1 + lVar3 + 0x9e10);
    lVar3 = lVar3 + -0x70;
  } while (lVar3 != -0x150);
  if (*param_1 != '\0') {
    FUN_00f2b4f0(param_1 + 0x1c0);
    pcVar1 = param_1 + 0x10;
    lVar3 = 0;
    pcVar2 = pcVar1;
    do {
      if (*pcVar2 != '\0') {
        lVar4 = 0x68;
        do {
          FUN_0199d254(param_1 + lVar4);
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != 0x28);
        lVar4 = 0x2c;
        do {
          FUN_0199fb94(param_1 + lVar4);
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != -4);
      }
      lVar3 = lVar3 + 1;
      pcVar2 = pcVar1 + lVar3 * 0xd0;
      param_1 = param_1 + 0xd0;
    } while (lVar3 != 2);
  }
  return;
}




void FUN_00f2a754(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  void *local_d08;
  long local_d00 [400];
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  local_d08 = *(void **)(param_1 + (ulong)*(uint *)(param_1 + 0x9e80) * 0x70 + 0x9d48);
  uVar7 = FUN_00f2a154();
  if ((uVar7 & 1) == 0) {
    uVar6 = FUN_00f2a92c(param_1,local_d00,200);
    if (uVar6 != 0) {
      uVar7 = 0;
      uVar8 = 0;
      plVar9 = local_d00 + 1;
      do {
        uVar4 = *(uint *)(param_1 + 0x9e84);
        lVar1 = plVar9[-1];
        lVar2 = *plVar9;
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = (uint)uVar7 / uVar4;
        }
        if ((uint)uVar7 - uVar3 * uVar4 == *(int *)(param_1 + 0x9e88)) {
          if ((*(byte *)(lVar2 + 0x26) & 2) != 0) {
            if (*(long *)(lVar2 + 0x10) != 0) {
              *(undefined4 *)(lVar2 + 8) = 0;
            }
            *(undefined2 *)(lVar2 + 0x24) = *(undefined2 *)(lVar2 + 0x24);
            *(byte *)(lVar2 + 0x26) = *(byte *)(lVar2 + 0x26) & 0xfd;
            FUN_00f2b86c(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                         *(float *)(lVar2 + 0x20),*(float *)(lVar2 + 0x20) * 0.5,lVar1 + 0x2110,
                         *(undefined4 *)(lVar1 + 4),lVar1 + 0x2d10);
          }
        }
        uVar4 = *(uint *)(lVar2 + 8);
        if ((uVar4 != 0) && (uVar4 + uVar8 < 0x3001)) {
          memmove(local_d08,*(void **)(lVar2 + 0x10),(ulong)(uVar4 * 0x18));
          *(uint *)(lVar1 + 0x9d14) = *(int *)(lVar1 + 0x9d14) + uVar4;
          local_d08 = (void *)((long)local_d08 + (ulong)uVar4 * 0x18);
          uVar8 = uVar4 + uVar8;
        }
        uVar7 = uVar7 + 1;
        plVar9 = plVar9 + 2;
      } while (uVar6 != uVar7);
    }
  }
  else {
    FUN_00f2a190(param_1,local_d08);
  }
  uVar8 = *(uint *)(param_1 + 0x9e84);
  uVar6 = *(int *)(param_1 + 0x9e88) + 1;
  uVar4 = 0;
  if (uVar8 != 0) {
    uVar4 = uVar6 / uVar8;
  }
  *(uint *)(param_1 + 0x9e88) = uVar6 - uVar4 * uVar8;
  if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




uint FUN_00f2a92c(char *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x9d20) != 0) {
    param_1[0x9d14] = '\0';
    param_1[0x9d15] = '\0';
    param_1[0x9d16] = '\0';
    param_1[0x9d17] = '\0';
    uVar2 = 0;
    if (*param_1 != '\0') {
      uVar2 = 0;
      pcVar3 = param_1 + 0x1c0;
      lVar4 = 200;
      do {
        if (param_3 <= uVar2) {
          return uVar2;
        }
        if ((*pcVar3 != '\0') &&
           ((*(uint *)(param_1 + 0x9d10) & (int)*(short *)(pcVar3 + 0x24)) != 0)) {
          puVar1 = (undefined8 *)(param_2 + (ulong)uVar2 * 0x10);
          uVar2 = uVar2 + 1;
          *puVar1 = param_1;
          puVar1[1] = pcVar3;
        }
        lVar4 = lVar4 + -1;
        pcVar3 = pcVar3 + 0x28;
      } while (lVar4 != 0);
    }
  }
  return uVar2;
}




void thunk_FUN_00f2a160(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_032112f0);
  if ((uVar1 & 1) != 0) {
    FUN_00e7893c(&DAT_032112f0);
    return;
  }
  return;
}




void FUN_00f2a9a0(char *param_1,undefined8 param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined1 auStack_170 [48];
  undefined8 local_140 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  FUN_00f2a160();
  if (((*(int *)(param_1 + 0x9d20) != 0) && (*param_1 != '\0')) && (*(int *)(param_1 + 0x9d14) != 0)
     ) {
    puVar2 = (uint *)(param_1 + 0x9e80);
    uVar3 = (*puVar2 + 1) % 3;
    bVar5 = false;
    lVar7 = 0;
    do {
      pbVar9 = (byte *)(param_1 + lVar7 * 0xd0 + 0xd8);
      lVar8 = lVar7;
      while (pbVar9[-200] == 0) {
        pbVar9 = pbVar9 + 0xd0;
        bVar1 = 0 < lVar8;
        lVar8 = lVar8 + 1;
        if (bVar1) {
          if (!bVar5) goto LAB_00f2abac;
          goto LAB_00f2aba4;
        }
      }
      uVar10 = *(undefined8 *)(pbVar9 + -0x18);
      local_90 = *(undefined8 *)(pbVar9 + -0x20);
      uVar6 = (ulong)DAT_03212080;
      uStack_88 = uVar10;
      uStack_98 = *(undefined8 *)(pbVar9 + -0x28);
      local_a0 = *(undefined8 *)(pbVar9 + -0x30);
      uStack_a8 = *(undefined8 *)(pbVar9 + -0x38);
      local_b0 = *(undefined8 *)(pbVar9 + -0x40);
      uStack_b8 = *(undefined8 *)(pbVar9 + -0x48);
      local_c0 = *(undefined8 *)(pbVar9 + -0x50);
      local_140[1] = 0xbb23d70a3b23d70a;
      local_140[0] = 0x3b23d70abb23d70a;
      local_140[3] = 0x3b23d70a3b23d70a;
      local_140[2] = 0xbb23d70abb23d70a;
      DAT_03212080 = DAT_03212080 + 1 & 3;
      local_90 = CONCAT44((float)((ulong)local_140[uVar6] >> 0x20) +
                          (float)((ulong)local_90 >> 0x20),(float)local_140[uVar6] + (float)local_90
                         );
      uStack_88._0_4_ = (float)uVar10;
      uStack_88 = CONCAT44((int)((ulong)uVar10 >> 0x20),(float)uStack_88 + 0.0);
      FUN_00f2cd60(local_140,pbVar9 + -0x70,param_1 + (ulong)*puVar2 * 0x70 + 0x9d30,
                   param_1 + (ulong)uVar3 * 0x70 + 0x9d30,&local_c0,0,*(int *)(param_1 + 0x9d14),
                   (*pbVar9 & 2) == 0);
      FUN_0199c960(param_2,local_140,0);
      FUN_00f2cacc(0x3f733333,auStack_170,pbVar9 + -0x90,pbVar9 + -0xac,(*pbVar9 & 1) == 0);
      *pbVar9 = *pbVar9 | 1;
      FUN_0199c960(param_2,auStack_170,0);
      lVar7 = lVar8 + 1;
      bVar5 = true;
    } while (lVar8 < 1);
LAB_00f2aba4:
    *puVar2 = uVar3;
  }
LAB_00f2abac:
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00f2abe4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00f2ac24();
  if (lVar2 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)((ulong)(lVar2 - param_1) >> 5) * -0x2e06eca7;
  }
  return iVar1;
}




char * FUN_00f2ac24(char *param_1)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = (char *)0x0;
  if (*param_1 == '\0') {
    param_1[1] = '\x01';
    lVar2 = 0x10;
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0x1b0] = '\0';
    param_1[0x1b1] = '\0';
    param_1[0x1b2] = '\0';
    param_1[0x1b3] = '\0';
    do {
      param_1[lVar2] = '\0';
      lVar2 = lVar2 + 0xd0;
    } while (lVar2 != 0x1b0);
    lVar2 = 200;
    param_1[0x2100] = '\0';
    param_1[0x2101] = '\0';
    param_1[0x2102] = '\0';
    param_1[0x2103] = '\0';
    pcVar1 = param_1 + 0x1c0;
    do {
      lVar2 = lVar2 + -1;
      *pcVar1 = '\0';
      pcVar1 = pcVar1 + 0x28;
    } while (lVar2 != 0);
    param_1[0x9d10] = '\0';
    param_1[0x9d11] = '\0';
    param_1[0x9d12] = '\0';
    param_1[0x9d13] = '\0';
    *param_1 = '\x01';
    *(int *)(param_1 + 0x9d20) = *(int *)(param_1 + 0x9d20) + 1;
    pcVar1 = param_1;
  }
  return pcVar1;
}




void FUN_00f2ac98(long param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = param_1 + (long)param_2 * 0x9d20;
  FUN_00f2b4f0(lVar3 + 0x1c0);
  pcVar1 = (char *)(lVar3 + 0x10);
  lVar4 = 0;
  pcVar2 = pcVar1;
  do {
    if (*pcVar2 != '\0') {
      lVar5 = 0x68;
      do {
        FUN_0199d254(lVar3 + lVar5);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0x28);
      lVar5 = 0x2c;
      do {
        FUN_0199fb94(lVar3 + lVar5);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -4);
    }
    lVar4 = lVar4 + 1;
    pcVar2 = pcVar1 + lVar4 * 0xd0;
    lVar3 = lVar3 + 0xd0;
  } while (lVar4 != 2);
  *(undefined1 *)(param_1 + (long)param_2 * 0x9d20) = 0;
  *(int *)(param_1 + 0x9d20) = *(int *)(param_1 + 0x9d20) + 1;
  return;
}




void FUN_00f2ad54(long param_1,int param_2,byte param_3)

{
  *(byte *)(param_1 + (long)param_2 * 0x9d20 + 1) = param_3 & 1;
  return;
}




void FUN_00f2ad68(long param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + (long)param_2 * 0x9d20 + 0x9d10) = param_3;
  return;
}




int FUN_00f2ad7c(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = param_1 + (long)param_2 * 0x9d20 + 0x1c0;
  lVar3 = FUN_00f2adc8(lVar1);
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)((ulong)(lVar3 - lVar1) >> 3) * -0x33333333;
  }
  return iVar2;
}




char * FUN_00f2adc8(char *param_1)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = 200;
  pcVar1 = param_1;
  do {
    if (*pcVar1 == '\0') {
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x26] = pcVar1[0x26] & 0xfc;
      *pcVar1 = '\x01';
      *(int *)(param_1 + 8000) = *(int *)(param_1 + 8000) + 1;
      return pcVar1;
    }
    lVar2 = lVar2 + -1;
    pcVar1 = pcVar1 + 0x28;
  } while (lVar2 != 0);
  return (char *)0x0;
}




void FUN_00f2ae28(long param_1,int param_2,int param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = param_1 + (long)param_2 * 0x9d20 + 0x1c0;
  pvVar2 = *(void **)(lVar1 + (long)param_3 * 0x28 + 0x10);
  if (pvVar2 != (void *)0x0) {
    lVar3 = lVar1 + (long)param_3 * 0x28;
    operator_delete__(pvVar2);
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  *(undefined1 *)(lVar1 + (long)param_3 * 0x28) = 0;
  param_1 = param_1 + (long)param_2 * 0x9d20;
  *(int *)(param_1 + 0x2100) = *(int *)(param_1 + 0x2100) + 1;
  return;
}




void FUN_00f2aeac(float param_1,long param_2,int param_3,int param_4,float *param_5,int param_6,
                 byte param_7)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2 + (long)param_3 * 0x9d20 + 0x1c0;
  pfVar2 = (float *)(lVar1 + (long)param_4 * 0x28 + 0x18);
  lVar3 = (long)param_4;
  if ((((*pfVar2 != *param_5) || (*(float *)(lVar1 + lVar3 * 0x28 + 0x1c) != param_5[1])) ||
      (*(float *)(lVar1 + lVar3 * 0x28 + 0x20) != param_1)) ||
     ((lVar4 = lVar1 + lVar3 * 0x28, *(short *)(lVar4 + 0x24) != param_6 ||
      ((*(byte *)(lVar4 + 0x26) & 1) != (param_7 & 1))))) {
    lVar1 = lVar1 + lVar3 * 0x28;
    *(undefined8 *)pfVar2 = *(undefined8 *)param_5;
    *(float *)(lVar1 + 0x20) = param_1;
    *(short *)(lVar1 + 0x24) = (short)param_6;
    *(byte *)(lVar1 + 0x26) = *(byte *)(lVar1 + 0x26) & 0xfc | param_7 & 1 | 2;
  }
  return;
}




void FUN_00f2af6c(long param_1,int param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float __x;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (1 < param_4) {
    puVar14 = (uint *)(param_1 + (long)param_2 * 0x9d20 + 4);
    uVar7 = *puVar14;
    if (uVar7 + 1 < 0x81) {
      lVar10 = (long)param_2;
      puVar9 = (uint *)(param_1 + lVar10 * 0x9d20 + 8);
      uVar11 = *puVar9;
      if (uVar11 + param_4 < 0x401) {
        lVar13 = param_1 + lVar10 * 0x9d20;
        lVar12 = lVar13 + (ulong)uVar7 * 0x18;
        *(uint *)(lVar12 + 0x2110) = uVar11;
        fVar19 = *param_3;
        fVar18 = param_3[1];
        *(float *)(lVar12 + 0x2120) = fVar19;
        *(float *)(lVar12 + 0x2124) = fVar18;
        fVar17 = *param_3;
        fVar20 = param_3[1];
        pfVar1 = (float *)(lVar13 + (ulong)uVar11 * 0x1c + 0x2d10);
        *(float *)(lVar12 + 0x2118) = fVar17;
        *(float *)(lVar12 + 0x211c) = fVar20;
        pfVar16 = pfVar1;
        if (param_3 < param_3 + (ulong)param_4 * 2) {
          pfVar15 = param_3 + (ulong)param_4 * 2 + -2;
          while( true ) {
            pfVar2 = pfVar15 + -2;
            if (pfVar15 <= param_3) {
              pfVar2 = param_3 + (ulong)(param_4 - 1) * 2;
            }
            fVar3 = *pfVar15;
            fVar5 = pfVar15[1];
            fVar4 = *pfVar2;
            fVar6 = pfVar2[1];
            fVar24 = fVar4 - fVar3;
            fVar25 = fVar6 - fVar5;
            fVar22 = fVar5;
            if (fVar6 <= fVar5) {
              fVar22 = fVar6;
            }
            fVar23 = fVar5;
            if (fVar5 <= fVar6) {
              fVar23 = fVar6;
            }
            __x = fVar24 * fVar24 + fVar25 * fVar25;
            fVar26 = fVar3;
            if (fVar4 <= fVar3) {
              fVar26 = fVar4;
            }
            fVar21 = fVar3;
            if (fVar3 <= fVar4) {
              fVar21 = fVar4;
            }
            if (fVar26 <= fVar17) {
              fVar17 = fVar26;
            }
            if (fVar22 <= fVar20) {
              fVar20 = fVar22;
            }
            *(float *)(lVar12 + 0x2118) = fVar17;
            fVar17 = SQRT(__x);
            if (fVar19 <= fVar21) {
              fVar19 = fVar21;
            }
            if (fVar18 <= fVar23) {
              fVar18 = fVar23;
            }
            *(float *)(lVar12 + 0x211c) = fVar20;
            *(float *)(lVar12 + 0x2120) = fVar19;
            *(float *)(lVar12 + 0x2124) = fVar18;
            if (NAN(fVar17)) {
              fVar17 = sqrtf(__x);
            }
            if (0.0 < fVar17) {
              *pfVar16 = fVar3;
              pfVar16[1] = fVar5;
              pfVar16[2] = fVar4;
              pfVar16[3] = fVar6;
              pfVar16[4] = -(fVar25 / fVar17);
              pfVar16[5] = fVar24 / fVar17;
              pfVar16[6] = (fVar25 / fVar17) * fVar3 - (fVar24 / fVar17) * fVar5;
              pfVar16 = pfVar16 + 7;
            }
            if (pfVar15 <= param_3) break;
            fVar17 = *(float *)(lVar12 + 0x2118);
            fVar20 = *(float *)(lVar12 + 0x211c);
            fVar19 = *(float *)(lVar12 + 0x2120);
            fVar18 = *(float *)(lVar12 + 0x2124);
            pfVar15 = pfVar15 + -2;
          }
          uVar11 = *puVar9;
        }
        iVar8 = (int)((ulong)((long)pfVar16 - (long)pfVar1) >> 2) * -0x49249249;
        *(int *)(param_1 + lVar10 * 0x9d20 + (ulong)uVar7 * 0x18 + 0x2114) = iVar8;
        *puVar14 = uVar7 + 1;
        *puVar9 = uVar11 + iVar8;
      }
    }
  }
  return;
}

