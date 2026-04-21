// functions/019c0 — 20 functions
#include "libGameKindred.h"




undefined8 FUN_019c003c(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char local_38;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar3 = 1;
  }
  else {
    *param_1 = 0;
    plVar1 = (long *)FUN_019c21f8(param_1[0xc]);
    if (plVar1 != (long *)0x0) {
      do {
        lVar2 = param_1[0xd];
        *plVar1 = lVar2;
        FUN_019bf128(lVar2,&stack0xffffffffffffffa8);
        FUN_019cf8e8(plVar1,0);
        if (local_38 == '\0') {
          sigaction(0xd,(sigaction *)&stack0xffffffffffffffa8,(sigaction *)0x0);
        }
        plVar1 = (long *)FUN_019c21f8(param_1[0xc]);
      } while (plVar1 != (long *)0x0);
    }
    lVar2 = param_1[0xd];
    if (lVar2 != 0) {
      FUN_019bf128(lVar2,&stack0xffffffffffffffa8);
      *(long *)(param_1[0xd] + 0x50) = param_1[8];
      FUN_019c355c();
      FUN_019cac70(param_1[0xd]);
    }
    FUN_019dabfc(param_1[10]);
    FUN_019c1f40(param_1[0xc]);
    FUN_019da520(param_1[4],0);
    FUN_019da520(param_1[5],0);
    plVar1 = (long *)param_1[1];
    while (plVar1 != (long *)0x0) {
      lVar4 = *plVar1;
      if (*(int *)(plVar1 + 0xb) == 2) {
        FUN_019c355c(plVar1,plVar1[10]);
        plVar1[10] = 0;
        *(undefined4 *)(plVar1 + 0xb) = 0;
      }
      plVar1[0x120] = 0;
      plVar1[0xc] = 0;
      plVar1 = (long *)lVar4;
    }
    FUN_019dabfc(param_1[8]);
    FUN_019c2474(0,param_1 + 0x14);
    FUN_019c26ac(0,param_1 + 0x15);
    (*(code *)PTR_free_02bf74b0)(param_1);
    if ((lVar2 != 0) && (local_38 == '\0')) {
      sigaction(0xd,(sigaction *)&stack0xffffffffffffffa8,(sigaction *)0x0);
    }
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_019c01d8(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0xbab1e) {
      return 0;
    }
    lVar2 = FUN_019da578(param_1[4]);
    if (lVar2 != 0) {
      puVar3 = *(undefined8 **)param_1[4];
      uVar4 = *puVar3;
      FUN_019da474((undefined8 *)param_1[4],puVar3,0);
      FUN_019da578(param_1[4]);
      uVar1 = FUN_019c1e80();
      *param_2 = uVar1;
      return uVar4;
    }
  }
  return 0;
}




void FUN_019c025c(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_24;
  
  lVar2 = *(long *)(*param_1 + 0x60);
  if ((lVar2 != 0) &&
     (local_24 = param_2, lVar1 = FUN_019daa50(*(undefined8 *)(lVar2 + 0x50),&local_24,4),
     lVar1 != 0)) {
    if (*(code **)(lVar2 + 0x30) != (code *)0x0) {
      (**(code **)(lVar2 + 0x30))
                (*param_1,local_24,4,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar1 + 0x18));
    }
    FUN_019c02d4(*(undefined8 *)(lVar2 + 0x50),local_24);
  }
  return;
}




void FUN_019c02d4(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_14;
  
  local_14 = param_2;
  lVar1 = FUN_019daa50(param_1,&local_14,4);
  if (lVar1 != 0) {
    FUN_019da9b0(param_1,&local_14,4);
  }
  return;
}




int FUN_019c078c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_019c07d4(param_1,0,param_2,0,param_3);
  if (iVar1 < 1) {
    FUN_019be434(param_1);
  }
  return iVar1;
}




ulong FUN_019c07d4(long param_1,ulong param_2,int param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  char local_60;
  ulong local_58;
  int local_44;
  
  local_44 = param_3;
  auVar11 = FUN_019c338c();
  if ((param_2 & 1) == 0) {
    if (param_3 == -1) {
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
    }
    else {
      plVar6 = (long *)FUN_019daa50(*(undefined8 *)(param_1 + 0x50),&stack0xffffffffffffffbc,4);
      if (plVar6 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        lVar10 = *plVar6;
        if (*(int *)(lVar10 + 0x8c50) != -0x3f212453) {
          return 4;
        }
        lVar5 = *(long *)(lVar10 + 0x10);
        if (lVar5 != 0) {
          if ((((param_4 >> 1 & 1) == 0) || (*(long **)(lVar5 + 0x398) == (long *)0x0)) ||
             (plVar6 = (long *)**(long **)(lVar5 + 0x398), plVar6 == (long *)0x0)) {
            if ((((param_4 & 1) != 0) && (*(long **)(lVar5 + 0x3a0) != (long *)0x0)) &&
               (plVar6 = (long *)**(long **)(lVar5 + 0x3a0), plVar6 != (long *)0x0)) {
              lVar10 = *plVar6;
            }
          }
          else {
            lVar10 = *plVar6;
          }
        }
        lVar5 = *(long *)(lVar10 + 0x10);
        if ((lVar5 != 0) && ((*(byte *)(*(long *)(lVar5 + 800) + 0x7c) >> 3 & 1) == 0)) {
          *(uint *)(lVar5 + 0x698) = param_4;
        }
        FUN_019bf128(lVar10,&stack0xffffffffffffff80);
        do {
          uVar3 = FUN_019bf19c(param_1,auVar11._0_8_,auVar11._8_8_,lVar10);
          iVar2 = (int)uVar3;
        } while (iVar2 == -1);
        uVar9 = uVar3 & 0xffffffff;
        if (local_60 == '\0') {
          uVar1 = sigaction(0xd,(sigaction *)&stack0xffffffffffffff80,(sigaction *)0x0);
          uVar3 = (ulong)uVar1;
        }
        lVar5 = *(long *)(lVar10 + 0x10);
        if ((lVar5 != 0) && ((*(byte *)(*(long *)(lVar5 + 800) + 0x7c) >> 3 & 1) == 0)) {
          *(undefined4 *)(lVar5 + 0x698) = 0;
        }
        if (iVar2 < 1) {
          uVar3 = FUN_019be6c8(param_1,lVar10);
        }
        auVar11 = FUN_019c338c(uVar3);
      }
    }
    uVar8 = auVar11._8_8_;
    uVar7 = auVar11._0_8_;
    lVar10 = 0;
    do {
      if (lVar10 != 0) {
        FUN_019bf128(lVar10,&stack0xffffffffffffff80);
        do {
          uVar1 = FUN_019bf19c(param_1,uVar7,uVar8,lVar10);
        } while (uVar1 == 0xffffffff);
        uVar9 = (ulong)uVar1;
        if (local_60 == '\0') {
          sigaction(0xd,(sigaction *)&stack0xffffffffffffff80,(sigaction *)0x0);
        }
        if ((int)uVar1 < 1) {
          FUN_019be6c8(param_1,lVar10);
        }
      }
      uVar4 = FUN_019c1a80(uVar7,uVar8,*(undefined8 *)(param_1 + 0x48),&stack0xffffffffffffffa8);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      if (local_58 == 0) break;
      lVar10 = *(long *)(local_58 + 0x28);
      FUN_019bff64(uVar7,uVar8,param_1,lVar10);
    } while (local_58 != 0);
    *param_5 = *(undefined4 *)(param_1 + 0x1c);
  }
  else {
    uVar1 = FUN_019befa4(param_1,param_5);
    uVar9 = (ulong)uVar1;
    if (uVar1 != 1) {
      for (plVar6 = *(long **)(param_1 + 8); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        FUN_019be6c8(param_1,plVar6);
      }
    }
  }
  return uVar9;
}




int FUN_019c0a3c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_019c07d4(param_1,0,param_2,param_3,param_4);
  if (iVar1 < 1) {
    FUN_019be434(param_1);
  }
  return iVar1;
}




int FUN_019c0a84(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_019c07d4(param_1,1,0xffffffff,0,param_2);
  if (iVar1 < 1) {
    FUN_019be434(param_1);
  }
  return iVar1;
}




undefined8 FUN_019c0ae4(void)

{
  FUN_019bef04();
  return 0;
}




void FUN_019c0b0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)(*(code *)PTR_malloc_02bf74a8)(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar7 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar7;
    lVar4 = FUN_019da578(param_1);
    if ((lVar4 == 0) || ((undefined8 *)*param_1 == (undefined8 *)0x0)) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      puVar6 = (undefined8 *)0x0;
      do {
        puVar5 = puVar1;
        lVar4 = FUN_019c33ec(*(undefined8 *)*puVar5,((undefined8 *)*puVar5)[1],*puVar3,puVar3[1]);
        if (0 < lVar4) break;
        puVar1 = (undefined8 *)puVar5[2];
        puVar6 = puVar5;
      } while ((undefined8 *)puVar5[2] != (undefined8 *)0x0);
    }
    iVar2 = FUN_019da3c4(param_1,puVar6,puVar3);
    if (iVar2 == 0) {
      (*(code *)PTR_free_02bf74b0)(puVar3);
      return;
    }
  }
  return;
}




void FUN_019c0bd8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_019c338c();
  if (*(long *)(param_1 + 0x8a78) != 0 || *(long *)(param_1 + 0x8a80) != 0) {
    lVar2 = auVar3._8_8_ + (param_2 % 1000) * 1000;
    lVar1 = auVar3._0_8_ + param_2 / 1000;
    if (999999 < lVar2) {
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + -1000000;
    }
    lVar1 = FUN_019c33ec(lVar1,lVar2);
    if (0 < lVar1) {
      return;
    }
  }
  FUN_019be274(param_1,param_2);
  return;
}




undefined8 FUN_019c0cd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
  }
  return uVar1;
}




undefined8 FUN_019c0cdc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
  }
  return uVar1;
}




undefined8 FUN_019c0ce8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
  }
  return uVar1;
}




undefined8 FUN_019c0cf4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
  }
  return uVar1;
}




undefined8 FUN_019c0d00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
  }
  return uVar1;
}




undefined8 FUN_019c0d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}




undefined8 FUN_019c0d14(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}




void FUN_019c0d1c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)**(long **)(param_1 + 0x28);
  while (plVar1 = plVar3, plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar3 = (long *)plVar1[2];
    if (*(int *)(lVar2 + 0x18) == 1) {
      *(undefined4 *)(lVar2 + 0x18) = 2;
      FUN_019da474(*(undefined8 *)(param_1 + 0x28),plVar1,0);
      FUN_019c0bd8(lVar2,1);
    }
  }
  return;
}




void FUN_019c0dc8(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(code *)PTR_calloc_02bf74c8)(1,0x48);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *puVar1 | 2;
  }
  return;
}

