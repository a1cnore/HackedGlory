// functions/009ab — 41 functions
#include "libGameKindred.h"




void FUN_009ab230(long param_1)

{
  FUN_009aafe4(param_1 + -0x28);
  return;
}




void FUN_009ab238(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_009b2c64(*(long *)(param_1 + 0x58),&DAT_0312e8c4);
    uVar1 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8c8);
    uVar4 = FUN_00d9ef9c(uVar10);
    uVar2 = FUN_00d9ef60(uVar10);
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      if ((uVar1 & uVar2 & 1) == 0) {
        uVar3 = FUN_009b2c64(uVar10,&DAT_0312e8e0);
        uVar4 = FUN_009aaf84(param_1,&DAT_0312e8cc,&DAT_0312e8d0);
        if ((uVar3 & 1) == 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x58);
          FUN_009a9784(param_1);
          if ((uVar4 & 1) == 0) {
            puVar8 = &DAT_0312e8cc;
          }
          else {
            puVar8 = &DAT_0312e8d0;
          }
          FUN_009b2bec(uVar10,puVar8,1,0,&DAT_0312e8ac);
        }
        else {
          if (((uVar4 & 1) == 0) ||
             (uVar3 = FUN_009aaf84(param_1,&DAT_0312e8e0,&DAT_0312e8e4), (uVar3 & 1) == 0)) {
            uVar10 = *(undefined8 *)(param_1 + 0x58);
            FUN_009a9784(param_1);
            puVar7 = &DAT_0312e8e0;
            pcVar9 = "MoveStartToMove";
          }
          else {
            uVar10 = *(undefined8 *)(param_1 + 0x58);
            FUN_009a9784(param_1);
            puVar7 = &DAT_0312e8e4;
            pcVar9 = "MoveStartToMoveCombat";
          }
          FUN_009b28f0(uVar10,puVar7,0,0,pcVar9);
        }
        uVar3 = (ulong)*(uint *)(param_1 + 0x9c) & 0xffffffffffffffe7 |
                (ulong)*(ushort *)(param_1 + 0xa0) << 0x20;
      }
      else {
        FUN_009a9784(param_1);
        FUN_009b2bec(uVar10,&DAT_0312e8c8,1,0,&DAT_0312e8ac);
        uVar3 = (ulong)*(uint *)(param_1 + 0x9c) & 0xffffffffffffffe7 |
                (ulong)*(ushort *)(param_1 + 0xa0) << 0x20 | 8;
      }
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      FUN_009a9784(param_1);
      FUN_009b2bec(uVar10,&DAT_0312e8c4,1,0,&DAT_0312e8ac);
      uVar3 = (ulong)*(uint *)(param_1 + 0x9c) & 0xffffffffffffffe7 |
              (ulong)*(ushort *)(param_1 + 0xa0) << 0x20 | 0x10;
    }
    *(uint *)(param_1 + 0x9c) = (uint)uVar3;
    *(short *)(param_1 + 0xa0) = (short)(uVar3 >> 0x20);
    *(uint *)(param_1 + 0x9c) = (uint)uVar3 | 0x1000000;
  }
  uVar3 = FUN_009ab4f0(param_1);
  if (((uVar3 & 1) != 0) && (plVar5 = *(long **)(param_1 + 0x88), plVar5 != (long *)0x0)) {
    if (*(int *)(param_1 + 0x90) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        plVar5 = *(long **)(param_1 + 0x88);
        uVar10 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar5[1]) {
            uVar10 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x88) = 0;
            uVar10 = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
          }
        }
        FUN_009d33ec(uVar10);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
    }
  }
  return;
}




bool FUN_009ab4f0(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  fVar2 = (float)FUN_00d9ee8c(lVar1);
  fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0x80);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0x134);
  fVar4 = (float)FUN_00d775d4(lVar1,0);
  return fVar3 + fVar5 + fVar4 < fVar2;
}




void FUN_009ab548(long param_1)

{
  FUN_009ab238(param_1 + -0x28);
  return;
}




void FUN_009ab550(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined4 uVar8;
  
  lVar5 = param_1[2];
  if (param_1[8] != 0) {
    FUN_009d59fc();
  }
  (**(code **)(*param_1 + 0x110))(param_1);
  FUN_00d5bc5c(lVar5);
  lVar3 = FUN_00d9e390();
  if (lVar3 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00d5cf60(lVar3);
  }
  uVar4 = FUN_00ceab64();
  bVar7 = false;
  if ((uVar4 & 1) == 0) goto LAB_009ab5f0;
  if (iVar1 == -1) {
    if (lVar3 == 0) {
      bVar7 = false;
      goto LAB_009ab5f0;
    }
    bVar7 = false;
    if ((*(byte *)(lVar3 + 0x2f4) & 1) == 0) goto LAB_009ab5f0;
  }
  bVar7 = true;
LAB_009ab5f0:
  FUN_00d5bc5c(lVar5);
  uVar4 = FUN_00ced270();
  if (((((uVar4 & 1) != 0) || (uVar2 = FUN_00ced270(iVar1), bVar7 || (uVar2 & 1) != 0)) &&
      ((*(uint *)(lVar5 + 0x2f4) & 0x20100314) != 0)) &&
     ((iVar1 = FUN_00d5b3a8(lVar5), iVar1 != 0 && (lVar3 = FUN_01988738(DAT_0312e88c,0), lVar3 != 0)
      ))) {
    lVar6 = param_1[2];
    uVar8 = *(undefined4 *)(param_1[7] + 0x1a4);
    uVar2 = FUN_00d5b3a8(lVar5);
    FUN_009a7638(uVar8,(float)uVar2,lVar3,lVar6,1);
  }
  FUN_009ab690(param_1);
  return;
}




void FUN_009ab690(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ebf0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_019888f4();
  return;
}




void FUN_009ab6c0(long param_1)

{
  FUN_009ab550(param_1 + -0x28);
  return;
}




void FUN_009ab6c8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    FUN_009d6a28();
    if ((*(byte *)(lVar1 + 0x2fc) & 0x1f) != 0) {
      FUN_009d5dac(0x3f000000,*(undefined8 *)(param_1 + 0x40));
    }
  }
  FUN_009aaf04(param_1);
  return;
}




void FUN_009ab710(long param_1)

{
  FUN_009ab6c8(param_1 + -0x28);
  return;
}




void FUN_009ab718(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x8000000;
  FUN_009ab72c();
  return;
}




void FUN_009ab72c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_009d8c2c();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_009d8c2c();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_009d8c2c();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_009d8c2c();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_009d59a0(*(long *)(param_1 + 0x40),(*(uint *)(param_1 + 0x9c) & 0x30000000) != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x9c);
  if ((uVar1 >> 0x1d & 1) == 0) {
    if ((uVar1 >> 0x1c & 1) == 0) {
      if ((uVar1 >> 0x1b & 1) == 0) {
        return;
      }
      uVar2 = FUN_00d9e968(lVar3);
      if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x68) != 0)) goto LAB_009ab7f8;
      uVar2 = FUN_00d9e99c(lVar3);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x60);
    }
    else {
      uVar2 = FUN_00d9e968(lVar3);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x70);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x78);
  }
  if (lVar3 == 0) {
    return;
  }
LAB_009ab7f8:
  FUN_009d8bc4();
  return;
}




void FUN_009ab810(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x8000000;
  FUN_009ab72c(param_1 + -0x28);
  return;
}




void FUN_009ab820(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xf7ffffff;
  FUN_009ab72c();
  return;
}




void FUN_009ab83c(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xf7ffffff;
  FUN_009ab72c(param_1 + -0x28);
  return;
}




void FUN_009ab85c(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x10000000;
  FUN_009ab72c();
  return;
}




void FUN_009ab870(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x10000000;
  FUN_009ab72c(param_1 + -0x28);
  return;
}




void FUN_009ab880(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xefffffff;
  FUN_009ab72c();
  return;
}




void FUN_009ab89c(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xefffffff;
  FUN_009ab72c(param_1 + -0x28);
  return;
}




void FUN_009ab8bc(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x20000000;
  FUN_009ab72c();
  return;
}




void FUN_009ab8d0(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x20000000;
  FUN_009ab72c(param_1 + -0x28);
  return;
}




void FUN_009ab8e0(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xdfffffff;
  FUN_009ab72c();
  return;
}




void FUN_009ab8fc(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xdfffffff;
  FUN_009ab72c(param_1 + -0x28);
  return;
}




void FUN_009ab91c(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5
                 )

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_2 + 0x58);
  if (lVar4 != 0) {
    thunk_FUN_00d9ff34(auStack_50);
    FUN_009b28f0(param_1,lVar4,auStack_50,param_4 & 1,0,param_5);
  }
  plVar2 = *(long **)(param_2 + 0x88);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_2 + 0x90) == (int)plVar2[1]) {
      lVar4 = (**(code **)(*plVar2 + 0x10))();
      if (lVar4 != 0) {
        plVar2 = *(long **)(param_2 + 0x88);
        uVar3 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_2 + 0x90) == (int)plVar2[1]) {
            uVar3 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_2 + 0x88) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_2 + 0x90) = DAT_03214ce8;
          }
        }
        FUN_009d341c(uVar3);
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined4 *)(param_2 + 0x90) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009aba34(long param_1,undefined8 param_2,uint param_3)

{
  FUN_009ab91c(param_1 + -0x28,param_2,param_3 & 1);
  return;
}




void FUN_009aba40(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_009b2bec(*(long *)(param_1 + 0x58),param_2,param_3 & 1,0,param_4);
  }
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x88);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x88) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
          }
        }
        FUN_009d341c(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_009abafc(long param_1,undefined8 param_2,uint param_3)

{
  FUN_009aba40(param_1 + -0x28,param_2,param_3 & 1);
  return;
}




uint FUN_009abb08(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(auStack_30);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = FUN_009b2f10(*(long *)(param_1 + 0x58),auStack_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009abb68(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_009b2f10();
    return;
  }
  return;
}




void FUN_009abb78(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_009b2f18();
    return;
  }
  return;
}




void FUN_009abb88(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_009b2f18();
    return;
  }
  return;
}




void FUN_009abb98(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_009b2f84();
    return;
  }
  return;
}




void FUN_009abba8(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_009b2f84();
    return;
  }
  return;
}




void FUN_009abbb8(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_009b3264();
    return;
  }
  return;
}




void FUN_009abbc8(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_009b3264();
    return;
  }
  return;
}




uint FUN_009abbd8(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  local_30[0] = param_2;
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = FUN_009b3348(*(long *)(param_1 + 0x58),local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009abc30(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  local_30[0] = param_2;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_009b3348(*(long *)(param_1 + 0x30),local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009abc88(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  local_38[0] = param_3;
  local_30[0] = param_2;
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = FUN_009b3438(*(long *)(param_1 + 0x58),local_30,local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009abce8(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  local_38[0] = param_3;
  local_30[0] = param_2;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_009b3438(*(long *)(param_1 + 0x30),local_30,local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009abd48(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(char *)((long)param_2 + 0x67) != '\0') {
    FUN_009d3950(*(undefined4 *)((long)param_2 + 0x2c),param_1);
  }
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (param_2[2] != 0) {
      FUN_009d3db8(param_1);
    }
  }
  else if (param_2[1] == 0) {
    if (((int)param_2[6] == -0x7ee3623b) || ((int)param_2[6] == 0)) {
      FUN_009d3b70(param_1,lVar2);
    }
    else {
      FUN_009d3d8c(param_1,lVar2);
    }
  }
  else {
    uVar1 = FUN_01995208();
    FUN_009d3d6c(param_1,lVar2,uVar1);
  }
  if ((*(float *)(param_2 + 10) != 0.0) || (*(float *)((long)param_2 + 0x54) != 0.0)) {
    FUN_009d3e40(*(float *)(param_2 + 10),*(float *)((long)param_2 + 0x54),(int)param_2[0xb],param_1
                 ,(long)param_2 + 0x44);
  }
  FUN_009d3ebc(param_1,(long)param_2 + 0x34);
  FUN_009d3ec8((int)param_2[7],param_1);
  FUN_009d3ed0(param_1,(long)param_2 + 0x3c);
  FUN_009d33ec(param_1);
  return;
}




void FUN_009abe58(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_009abee4(*(undefined4 *)(param_2 + 0x24),param_1,param_2 + 0x20,
                       *(undefined1 *)(param_2 + 0x65),*(undefined4 *)(param_2 + 0x5c),
                       *(undefined1 *)(param_2 + 0x66),*(undefined4 *)(param_2 + 0x60),
                       *(undefined4 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
                       *(undefined1 *)(param_2 + 0x68));
  if (lVar1 != 0) {
    FUN_009d3654(lVar1,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_2 + 100));
    FUN_009abd48(lVar1,param_2);
    return;
  }
  return;
}




long FUN_009abee4(undefined8 param_1,long param_2,undefined4 *param_3,uint param_4,uint param_5,
                 byte param_6,undefined4 param_7,undefined4 param_8,long *param_9,byte param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_80 [2];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((param_4 & 1) == 0) {
    lVar2 = FUN_01988738(DAT_02e3ef98,0);
  }
  else {
    lVar2 = FUN_01985d44(param_2,DAT_02e3ef98);
  }
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_2 + 0x10);
    local_80[0] = *param_3;
    if (param_9 != (long *)0x0) {
      local_80[0] = (**(code **)(*param_9 + 8))(param_9);
    }
    FUN_009d3364(lVar2,local_80);
    FUN_009d33e4(lVar2,param_8);
    FUN_009d3440(param_1,lVar2);
    FUN_009d3464(lVar2,param_10 & 1);
    *(byte *)(lVar2 + 0x110) =
         (byte)(((ulong)(param_5 & 3) << 0x23) >> 0x20) | param_6 & 1 |
         *(byte *)(lVar2 + 0x110) & 0xe6;
    FUN_009d3e98(lVar2,param_7);
    if ((param_4 & 1) != 0) {
      FUN_009d3f48(lVar2,lVar3 + 0x2fc);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

