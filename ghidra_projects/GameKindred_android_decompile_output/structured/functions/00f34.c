// functions/00f34 — 30 functions
#include "libGameKindred.h"




void FUN_00f34094(undefined8 *param_1)

{
  FUN_00f31114(*param_1,param_1[10],param_1[1],param_1 + 2);
  return;
}




void FUN_00f340a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00e7a7e4(0x18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  FUN_00e78ecc(&DAT_03212090,FUN_00f340f8);
  return;
}




void FUN_00f340f8(undefined8 *param_1)

{
  FUN_00f32bc4(*param_1,param_1[1],param_1[2]);
  FUN_00e7a864(param_1);
  return;
}




void FUN_00f34124(undefined8 param_1)

{
  DAT_0321218c = 1;
  FUN_00e78f64(&DAT_03212090,FUN_00f34148,param_1);
  return;
}




void FUN_00f34148(undefined8 param_1)

{
  FUN_019a0844(param_1,0x31,0xffffffff);
  return;
}




void FUN_00f34154(undefined8 param_1,undefined8 param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  
  pvVar1 = operator_new(0x1c60f0);
  FUN_00f31a70(pvVar1,param_2,param_3 & 1);
  DAT_032142b0 = pvVar1;
  pvVar2 = operator_new(0x188);
  FUN_00f346a8(pvVar2,pvVar1,param_1);
  DAT_032142b8 = pvVar2;
  uVar3 = FUN_00e78248();
  if ((uVar3 & 1) != 0) {
    FUN_00f33d28();
  }
  FUN_00f32a48(DAT_032142b0,1);
  *(undefined1 *)((long)DAT_032142b8 + 0x184) = 1;
  return;
}




void FUN_00f341e8(void)

{
  void *pvVar1;
  
  FUN_00f33d60();
  if (DAT_032142b8 != (long *)0x0) {
    (**(code **)(*DAT_032142b8 + 8))();
  }
  pvVar1 = DAT_032142b0;
  DAT_032142b8 = (long *)0x0;
  if (DAT_032142b0 != (void *)0x0) {
    FUN_00f31c0c(DAT_032142b0);
    operator_delete(pvVar1);
  }
  DAT_032142b0 = (void *)0x0;
  return;
}




void FUN_00f34248(undefined8 param_1,undefined8 param_2)

{
  FUN_00f3272c(DAT_032142b0,param_1,param_2);
  return;
}




void FUN_00f3425c(void)

{
  FUN_00f32000(DAT_032142b0);
  return;
}




void FUN_00f34268(long param_1)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 0x200;
  return;
}




void FUN_00f34278(void)

{
  return;
}




void FUN_00f3427c(void)

{
  return;
}




undefined8 FUN_00f34280(void)

{
  return DAT_032142b8;
}




undefined8 FUN_00f3428c(void)

{
  return DAT_032142b0;
}




ulong FUN_00f34298(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_1 + (ulong)(uint)param_1[10] * 4 + 2,param_2 << 4 | 7);
  *param_1 = 0;
  return lVar3 + 7U & 0xfffffffffffffff8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f342f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  long lVar9;
  undefined2 uVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    plVar13 = *(long **)(param_1 + 0x68);
    uVar12 = 0;
    do {
      if (*(short *)((long)plVar13 + 10) != 0) {
        lVar9 = *plVar13;
        uVar4 = *(uint *)(lVar9 + 0x220) >> 8 & 3;
        uVar1 = DAT_032142d8;
        if (((uVar4 == 2) || (uVar1 = DAT_032142d0, uVar4 == 1)) ||
           (uVar1 = DAT_032142c8, uVar4 == 0)) {
          FUN_00f01040(uVar1);
        }
        uVar15 = *(undefined4 *)(lVar9 + 0x21c);
        uVar4 = *(uint *)(lVar9 + 0x220) & 0x10000000;
        if ((*(uint *)(lVar9 + 0x220) >> 0x1c & 1) == (uint)DAT_03215628) {
          if (uVar4 != 0) {
            glPolygonOffset(0x3f800000,uVar15);
          }
        }
        else {
          if (uVar4 == 0) {
            glDisable(0x8037);
          }
          else {
            glEnable(0x8037);
            glPolygonOffset(0x3f800000,uVar15);
          }
          DAT_03215628 = (byte)(uVar4 >> 0x1c);
        }
        uVar4 = *(uint *)(lVar9 + 0x220);
        if (((uVar4 >> 0x1d & 1) == 0) && ((~(uint)DAT_03215620 & 0x380) != 0)) {
          glDisable(0xb71);
          DAT_03215620 = DAT_03215620 | 0x380;
          uVar4 = *(uint *)(lVar9 + 0x220);
        }
        if ((uVar4 & 0xc00) == 0) {
          uVar5 = 0;
          do {
            if ((float)(&DAT_03215478)[uVar5] != (float)(&DAT_01e632b0)[uVar5]) {
              DAT_0321561c = DAT_0321561c | 0x38;
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 0x10);
          uRam00000000032154a0 = 0x3f800000;
          _DAT_03215498 = 0;
          uRam00000000032154b0 = 0x3f80000000000000;
          _DAT_032154a8 = 0;
          uRam0000000003215480 = 0;
          _DAT_03215478 = 0x3f800000;
          uRam0000000003215490 = 0;
          _DAT_03215488 = 0x3f80000000000000;
        }
        else {
          uVar5 = 0;
          do {
            if ((float)(&DAT_03215478)[uVar5] != *(float *)(param_1 + 0x20 + uVar5 * 4)) {
              DAT_0321561c = DAT_0321561c | 0x38;
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 0x10);
          lVar6 = 0;
          do {
            *(undefined4 *)((long)&DAT_03215478 + lVar6) = *(undefined4 *)(param_1 + 0x20 + lVar6);
            lVar6 = lVar6 + 4;
          } while (lVar6 != 0x40);
        }
        plVar11 = *(long **)(lVar9 + 0x208);
        if (plVar11 == (long *)0x0) {
          FUN_0199d974(0);
        }
        else {
          puVar14 = *(undefined8 **)(*plVar11 + (ulong)DAT_032142c0 * 8 + 8);
          if (puVar14 == (undefined8 *)0x0) {
            FUN_00e6a2fc(0);
          }
          puVar7 = (undefined4 *)*puVar14;
          if (DAT_032157d0 != puVar7) {
            DAT_032157d0 = puVar7;
            glUseProgram(*puVar7);
          }
          lVar2 = plVar11[1];
          lVar6 = puVar14[1];
          lVar3 = lVar2;
          if (puVar14[1] == 0) {
            if (lVar2 == 0) goto LAB_00f34554;
            lVar3 = 0;
            lVar6 = lVar2;
          }
          FUN_01996f20(lVar6,lVar3);
        }
LAB_00f34554:
        uVar4 = *(uint *)(lVar9 + 0x220) & 0xf;
        if (uVar4 < 9) {
          if ((1 << (ulong)uVar4 & 0x183U) == 0) {
            if ((1 << (ulong)uVar4 & 0x70U) == 0) {
              if (uVar4 != 2) goto LAB_00f345d4;
              uVar8 = (undefined2)plVar13[1];
              uVar10 = *(undefined2 *)((long)plVar13 + 10);
              FUN_00f013dc(*(undefined8 *)(param_1 + 0x60),0x11,0);
              FUN_00f01570(DAT_032157d0);
              uVar1 = 0;
            }
            else {
              uVar8 = (undefined2)plVar13[1];
              uVar10 = *(undefined2 *)((long)plVar13 + 10);
              FUN_00f013dc(*(undefined8 *)(param_1 + 0x60),0x31,0);
              FUN_00f01570(DAT_032157d0);
              uVar1 = 5;
            }
          }
          else {
            uVar8 = (undefined2)plVar13[1];
            uVar10 = *(undefined2 *)((long)plVar13 + 10);
            FUN_00f013dc(*(undefined8 *)(param_1 + 0x60),0x31,0);
            FUN_00f01570(DAT_032157d0);
            uVar1 = 4;
          }
          glDrawArrays(uVar1,uVar8,uVar10);
        }
      }
LAB_00f345d4:
      uVar12 = uVar12 + 1;
      plVar13 = plVar13 + 2;
    } while (uVar12 < *(uint *)(param_1 + 0x70));
  }
  return;
}




void FUN_00f34608(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_1 + (ulong)(uint)param_1[10] * 4 + 2,0x7f);
  puVar4 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  *param_1 = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR_FUN_028292d0;
  puVar4[1] = 0;
  uVar5 = param_2[6];
  puVar4[0xb] = param_2[7];
  puVar4[10] = uVar5;
  uVar5 = param_2[4];
  puVar4[9] = param_2[5];
  puVar4[8] = uVar5;
  uVar5 = param_2[2];
  puVar4[7] = param_2[3];
  puVar4[6] = uVar5;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  puVar4[0xc] = param_3;
  puVar4[5] = uVar6;
  puVar4[4] = uVar5;
  return;
}




void FUN_00f346a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_0199b638();
  param_1[2] = param_3;
  param_1[3] = param_2;
  lVar4 = 0x20;
  *param_1 = &PTR_FUN_02829288;
  do {
    FUN_019a033c((long)param_1 + lVar4);
    lVar4 = lVar4 + 0x70;
  } while (lVar4 != 0x170);
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((long)param_1 + 0x184) = 0;
  uVar3 = DAT_032142c8 & 0xffffffff0000ff9c;
  DAT_032142c8 = uVar3 | 0x320000;
  DAT_032142d0 = uVar3 | 0x120000;
  DAT_032142d8 = uVar3 | 0x310000;
  DAT_032142c0 = FUN_00f335bc(param_2);
  lVar4 = 0x20;
  do {
    lVar1 = (long)param_1 + lVar4;
    FUN_019a0440(lVar1,0x6000);
    uVar2 = FUN_019a044c(lVar1,0,0xd8000,6,0);
    FUN_019a06a4(lVar1,0,uVar2,4,3,0,1);
    FUN_019a06a4(lVar1,4,uVar2,4,4,0xc,1);
    FUN_019a06a4(lVar1,5,uVar2,4,2,0x1c,1);
    lVar4 = lVar4 + 0x70;
  } while (lVar4 != 0x170);
  return;
}




void FUN_00f34800(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  *param_1 = &PTR_FUN_02829288;
  do {
    FUN_019a0378((long)param_1 + lVar1);
    lVar1 = lVar1 + 0x70;
  } while (lVar1 != 0x170);
  lVar1 = 0x100;
  do {
    FUN_019a0368((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x70;
  } while (lVar1 != -0x50);
  FUN_0199b65c(param_1);
  return;
}




void FUN_00f34860(void *param_1)

{
  FUN_00f34800();
  operator_delete(param_1);
  return;
}




void FUN_00f34884(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long in_x4;
  undefined8 in_x5;
  uint uVar10;
  long *plVar11;
  
  uVar4 = FUN_00f328b0(*(undefined8 *)(param_1 + 0x18));
  if ((uVar4 & 1) != 0) {
    FUN_00f33d9c();
  }
  plVar11 = (long *)(in_x4 + -8);
  uVar5 = (**(code **)(*plVar11 + 0x10))(plVar11);
  uVar6 = (**(code **)(*plVar11 + 0x18))(plVar11);
  iVar3 = FUN_00f3198c(uVar5);
  if (iVar3 == 0) {
    return;
  }
  lVar7 = FUN_00f34608(*(undefined8 *)(param_1 + 0x10),uVar6,
                       param_1 + (ulong)*(uint *)(param_1 + 0x180) * 0x70 + 0x20);
  plVar11 = (long *)FUN_00f34298(*(undefined8 *)(param_1 + 0x10),iVar3);
  *(long **)(lVar7 + 0x68) = plVar11;
  *(int *)(lVar7 + 0x70) = iVar3;
  iVar3 = *(int *)(param_1 + 0x170);
  lVar8 = FUN_00f31964(uVar5);
  do {
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_1 + 0x178) + (ulong)(uint)(iVar3 * 0x24);
      uVar6 = FUN_00f32a64(*(undefined8 *)(param_1 + 0x18));
      uVar9 = FUN_00f32a5c(*(undefined8 *)(param_1 + 0x18));
      if ((*(char *)(param_1 + 0x184) == '\0') || (uVar4 = FUN_00f33d90(), (uVar4 & 1) == 0)) {
        FUN_00f31114(uVar5,uVar9,lVar8,uVar6);
      }
      else {
        FUN_00f33fd8(uVar5,uVar9,lVar8,uVar6,*(undefined8 *)(param_1 + 0x10));
      }
      FUN_0199bb10(in_x5,lVar7);
      return;
    }
    uVar1 = *(uint *)(lVar8 + 0x200);
    uVar10 = uVar1;
    if (uVar1 == 0) goto switchD_00f3496c_caseD_2;
    switch(*(uint *)(lVar8 + 0x220) & 0xf) {
    case 0:
    case 1:
      iVar2 = uVar1 * 3;
      goto LAB_00f349ac;
    case 2:
    case 3:
      break;
    case 4:
      uVar10 = 0;
      if (1 < uVar1) {
        uVar10 = uVar1 << 1;
      }
      break;
    case 5:
    case 6:
      uVar10 = ((*(uint *)(lVar8 + 0x220) >> 0xb & 0xfffe) + 4) * uVar1 - 2;
      break;
    case 7:
      iVar2 = uVar1 * 9;
LAB_00f349ac:
      uVar10 = iVar2 << 1;
      break;
    case 8:
      uVar10 = uVar1 * 0x30;
      break;
    default:
      uVar10 = 0;
    }
switchD_00f3496c_caseD_2:
    iVar2 = *(int *)(param_1 + 0x170);
    uVar1 = iVar2 + uVar10;
    if (0x6000 < uVar1) {
      return;
    }
    *plVar11 = lVar8;
    *(short *)(plVar11 + 1) = (short)iVar2;
    *(short *)((long)plVar11 + 10) = (short)uVar10;
    *(uint *)(param_1 + 0x170) = uVar1;
    lVar8 = FUN_00f31978(uVar5);
    plVar11 = plVar11 + 2;
  } while( true );
}




void FUN_00f34a94(long param_1)

{
  uint uVar1;
  
  uVar1 = (*(int *)(param_1 + 0x180) + 1U) % 3;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(uint *)(param_1 + 0x180) = uVar1;
  FUN_019a0748(param_1 + 0x20 + (ulong)uVar1 * 0x70,0x31,6);
  *(undefined8 *)(param_1 + 0x178) =
       *(undefined8 *)(param_1 + 0x20 + (ulong)*(uint *)(param_1 + 0x180) * 0x70 + 0x18);
  return;
}




void FUN_00f34b10(long param_1)

{
  *(undefined8 *)(param_1 + 0x178) = 0;
  FUN_00f33ddc();
  FUN_019a0844(param_1 + (ulong)*(uint *)(param_1 + 0x180) * 0x70 + 0x20,0x31,
               *(int *)(param_1 + 0x170) * 0x24);
  return;
}




void FUN_00f34b58(long param_1)

{
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x248) = 1;
  *(undefined8 *)(param_1 + 0x24c) = 0xbf80000000000000;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  memset((void *)(param_1 + 600),0,0x44);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x22c) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0x224) = DAT_03218f30;
  *(undefined4 *)(param_1 + 0x238) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0x230) = DAT_03218f30;
  *(undefined4 *)(param_1 + 0x244) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0x23c) = DAT_03218f30;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) & 0xe0000000 | 0x1000;
  return;
}




void FUN_00f34c14(long param_1)

{
  if (*(void **)(param_1 + 0x2b8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    operator_delete__(*(void **)(param_1 + 0x2b8));
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  return;
}




undefined4 FUN_00f34c54(float param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(param_2 + 0x248) == '\0') &&
     ((*(float *)(param_2 + 0x250) <= 0.0 ||
      (uVar1 = 0, *(float *)(param_2 + 0x250) <= param_1 - *(float *)(param_2 + 0x24c))))) {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00f34c8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  local_30 = param_2;
  FUN_00f34ce8(param_1 + 0x2b0,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f34ce8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00f35fc8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00f34d70(long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined4 local_68 [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar9 = *(long *)(param_1 + 0x208);
  if (lVar9 != 0) {
    uVar2 = *(uint *)(param_1 + 0x2b0);
    if (*(char *)(param_1 + 0x2a8) == '\0') {
      if (uVar2 != 0) {
        uVar8 = 0;
        do {
          lVar9 = *(long *)(*(long *)(param_1 + 0x2b8) + uVar8 * 8);
          uVar3 = *(undefined4 *)(lVar9 + 0x10);
          uVar1 = *(ushort *)(lVar9 + 0x14) & 7;
          FUN_00f36170(lVar9,local_68,uVar1);
          switch(uVar1) {
          case 1:
            FUN_0199712c(local_68[0],*(undefined8 *)(param_1 + 0x2a0),uVar3);
            break;
          case 2:
            FUN_019971b0(*(undefined8 *)(param_1 + 0x2a0),uVar3,local_68);
            break;
          case 3:
            FUN_01997200(*(undefined8 *)(param_1 + 0x2a0),uVar3,local_68);
            break;
          case 4:
            FUN_01997250(*(undefined8 *)(param_1 + 0x2a0),uVar3,local_68);
          }
          uVar8 = uVar8 + 1;
        } while (uVar2 != uVar8);
      }
    }
    else {
      FUN_01995ebc(auStack_70);
      if (*(long *)(param_1 + 0x2a0) != 0) {
        pvVar7 = *(void **)(lVar9 + 8);
        if (pvVar7 != (void *)0x0) {
          FUN_01996dbc(pvVar7);
          operator_delete(pvVar7);
        }
        *(undefined8 *)(lVar9 + 8) = 0;
        *(undefined8 *)(param_1 + 0x2a0) = 0;
      }
      *(undefined1 *)(param_1 + 0x2a8) = 0;
      if (uVar2 != 0) {
        uVar8 = 0;
        do {
          lVar5 = *(long *)(*(long *)(param_1 + 0x2b8) + uVar8 * 8);
          uVar3 = *(undefined4 *)(lVar5 + 0x10);
          uVar1 = *(ushort *)(lVar5 + 0x14) & 7;
          FUN_00f36170(lVar5,local_68,uVar1);
          switch(uVar1) {
          case 1:
            uVar6 = 1;
            break;
          case 2:
            uVar6 = 2;
            break;
          case 3:
            uVar6 = 3;
            break;
          case 4:
            uVar6 = 4;
            break;
          default:
            goto switchD_00f34e28_default;
          }
          FUN_01996184(auStack_70,uVar8 & 0xffffffff,local_68,uVar6,1,uVar3);
switchD_00f34e28_default:
          uVar8 = uVar8 + 1;
        } while (uVar2 != uVar8);
        uVar6 = FUN_019962e8(auStack_70);
        *(undefined8 *)(param_1 + 0x2a0) = uVar6;
        *(undefined8 *)(lVar9 + 8) = uVar6;
      }
      FUN_01995ef4(auStack_70);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f34f70(float param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  FUN_00f34d70();
  if (*(char *)(param_3 + 0x248) == '\0') {
    fVar4 = param_1 - *(float *)(param_3 + 0x24c);
joined_r0x00f35000:
    bVar2 = false;
  }
  else {
    fVar4 = 0.0;
    if (*(float *)(param_3 + 0x24c) <= param_1) {
      *(undefined1 *)(param_3 + 0x248) = 0;
      goto joined_r0x00f35000;
    }
    bVar2 = true;
  }
  if (((param_5 & 1) == 0) || (bVar2)) {
    FUN_00f351f4(fVar4,param_3,param_4);
  }
  else {
    fVar5 = *(float *)(param_3 + 0x250);
    if (fVar5 <= 0.0) {
      FUN_00f351f4(fVar4,param_3,param_4);
    }
    else {
      FUN_00f351f4(fVar4,param_3,param_4);
      if (fVar5 < fVar4) goto LAB_00f35024;
    }
    if ((*(uint *)(param_3 + 0x220) & 0xc00) != 0) {
      param_6 = 0;
    }
    FUN_00f352b8(fVar4,param_2,param_3,param_4,param_6,param_8);
  }
LAB_00f35024:
  if (*(int *)(param_3 + 0x200) == 0) {
    return;
  }
  if (*(long *)(param_3 + 600) != 0) {
    FUN_00f35424(fVar4,param_2,param_3,param_4,param_8);
  }
  if (*(long *)(param_3 + 0x260) != 0) {
    FUN_00f35574(fVar4,param_2,param_3,param_4,param_8);
  }
  FUN_00f356f0(param_2,param_3,param_4);
  if (*(long *)(param_3 + 0x268) != 0) {
    FUN_00f3574c(fVar4,param_2,param_3,param_4,param_8);
  }
  if (*(long *)(param_3 + 0x270) != 0) {
    FUN_00f358a8(fVar4,param_2,param_3,param_4,param_8);
  }
  if (*(long *)(param_3 + 0x278) != 0) {
    FUN_00f359e0(fVar4,param_2,param_3,param_4,param_8);
  }
  if (*(long *)(param_3 + 0x280) != 0) {
    FUN_00f35b00(fVar4,param_3,param_4,param_8);
  }
  uVar1 = *(uint *)(param_3 + 0x220) & 0xf;
  if (uVar1 == 6) {
    uVar3 = FUN_00f30afc(param_7,"beam_target");
    FUN_00f30c6c(param_7,uVar3,param_3 + 0x224,3);
    uVar3 = FUN_00f30afc(param_7,"beam_target_tangent");
    FUN_00f30c6c(param_7,uVar3,param_3 + 0x230,3);
    uVar3 = FUN_00f30afc(param_7,"beam_source_tangent");
    param_3 = param_3 + 0x23c;
  }
  else {
    if (uVar1 != 5) {
      return;
    }
    uVar3 = FUN_00f30afc(param_7,"beam_target");
    param_3 = param_3 + 0x224;
  }
  FUN_00f30c6c(param_7,uVar3,param_3,3);
  return;
}

