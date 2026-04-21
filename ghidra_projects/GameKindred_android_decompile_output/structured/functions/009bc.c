// functions/009bc — 30 functions
#include "libGameKindred.h"




void FUN_009bc004(long param_1,ushort param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  param_2 = param_2 & 1;
  *(ushort *)(param_1 + 0x2c4) = *(ushort *)(param_1 + 0x2c4) & 0xfeff | param_2 << 8;
  FUN_00cedce4();
  lVar2 = FUN_00d9e390();
  if (lVar2 == 0) {
LAB_009bc0e4:
    FUN_00920ba0(param_2);
    return;
  }
  uVar5 = 0x10000;
  lVar3 = lVar2;
LAB_009bc088:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != lVar2) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0xe3e02dc), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,param_2);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_009bc088;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_009bc0e4;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) goto LAB_009bc0e4;
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_009bc0e4;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_009bc0e4;
    }
  } while( true );
}




undefined8 FUN_009bc0fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_0312ede8 != 0) {
    uVar1 = FUN_009bc11c(DAT_0312ede8,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_009bc11c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  FUN_00ceace8();
  iVar2 = FUN_00ceb0d0();
  if (-1 < iVar2) {
    uVar4 = 0;
    do {
      if (((*(uint *)(param_1 + 0x2c0) & 1 << (ulong)(uVar4 & 0x1f)) != 0) &&
         (uVar3 = FUN_00d7d0a0(*(undefined8 *)(param_2 + 0x80),uVar4), (uVar3 & 1) != 0)) {
        return 1;
      }
      uVar1 = uVar4 + 1;
      uVar4 = uVar1 & 0xff;
      FUN_00ceace8();
      iVar2 = FUN_00ceb0d0();
    } while ((int)(uVar1 & 0xff) <= iVar2);
  }
  return 0;
}




undefined8 FUN_009bc1a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_0312ede8 != 0) {
    uVar1 = FUN_009bc1c4(DAT_0312ede8,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_009bc1c4(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  FUN_00ceace8();
  iVar2 = FUN_00ceb0d0();
  if (-1 < iVar2) {
    uVar4 = 0;
    do {
      if (((*(uint *)(param_1 + 0x2c0) & 1 << (ulong)(uVar4 & 0x1f)) != 0) &&
         (uVar3 = FUN_00d7d0a0(param_2,uVar4), (uVar3 & 1) != 0)) {
        return 1;
      }
      uVar1 = uVar4 + 1;
      uVar4 = uVar1 & 0xff;
      FUN_00ceace8();
      iVar2 = FUN_00ceb0d0();
    } while ((int)(uVar1 & 0xff) <= iVar2);
  }
  return 0;
}




undefined4 FUN_009bc24c(void)

{
  if (DAT_0312ede8 != 0) {
    return *(undefined4 *)(DAT_0312ede8 + 700);
  }
  return 0;
}




undefined4 FUN_009bc268(long param_1)

{
  return *(undefined4 *)(param_1 + 700);
}




void FUN_009bc270(void)

{
  return;
}




void FUN_009bc274(void)

{
  return;
}




void FUN_009bc278(undefined8 *param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_027c2800;
  param_1[5] = &PTR_FUN_027c2830;
  puVar2 = (ushort *)(param_1 + 7);
  puVar1 = param_1 + 0x25;
  *(ushort *)(param_1 + 0x54) = *(ushort *)(param_1 + 0x54) & 0x8000 | 0x3ff;
  param_1[0x24] = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x53] = param_1;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x26] = 0;
  *puVar1 = 0;
  *(undefined4 *)((long)param_1 + 700) = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[10] = 0;
  param_1[9] = FUN_009bc540;
  param_1[0xc] = 0;
  param_1[0xb] = FUN_009bc5ac;
  param_1[0xe] = 0;
  param_1[0xd] = FUN_009bc5e0;
  param_1[0x11] = 0;
  param_1[0x10] = FUN_009bc620;
  param_1[0x13] = 0;
  param_1[0x12] = FUN_009bc680;
  param_1[0x15] = 0;
  param_1[0x14] = thunk_FUN_00944ce8;
  param_1[0x1a] = 0;
  param_1[0x19] = FUN_009bc6a8;
  *(undefined2 *)(param_1 + 0xf) = 1;
  *(undefined2 *)(param_1 + 0x16) = 2;
  *(undefined2 *)(param_1 + 0x1d) = 3;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = FUN_009bc97c;
  *(undefined2 *)((long)param_1 + 0xb2) = 0;
  *(undefined2 *)((long)param_1 + 0xea) = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(ushort *)((long)param_1 + 0x2c4) = *(ushort *)((long)param_1 + 0x2c4) & 0xf8ff;
  *puVar2 = *puVar2 & 0x8000 | 0x13ff;
  FUN_009bcad8(puVar2,0,1);
  FUN_009bcad8(puVar2,0,2);
  FUN_009bcad8(puVar2,1,0);
  FUN_009bcad8(puVar2,1,2);
  FUN_009bcad8(puVar2,1,3);
  FUN_009bcad8(puVar2,2,3);
  FUN_009bcb60(puVar1,0,0,0,FUN_009bcbb4,0,0,0);
  FUN_009bcb60(puVar1,1,0,0,thunk_FUN_0092754c,0,0,0);
  FUN_009bcb60(puVar1,2,0,0,0,0,0,0);
  FUN_009bcb60(puVar1,3,0,0,0,0,0,0);
  FUN_009bcbdc(puVar1,0,1);
  FUN_009bcbdc(puVar1,1,2);
  FUN_009bcbdc(puVar1,1,0);
  FUN_009bcbdc(puVar1,2,0);
  FUN_009bcbdc(puVar1,2,3);
  DAT_0312ede8 = param_1;
  return;
}




void FUN_009bc540(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ceab64();
  if ((uVar1 & 1) != 0) {
    FUN_009bd82c(param_1);
    return;
  }
  if (((*(byte *)(param_1 + 0x2c5) >> 1 & 1) == 0) &&
     (lVar2 = FUN_009b86e8(*(undefined8 *)(DAT_0312ede8 + 0x2b0)), lVar2 != 0)) {
    *(ushort *)(param_1 + 0x2c4) = *(ushort *)(param_1 + 0x2c4) | 0x200;
    FUN_00927678();
    FUN_00904fb8();
    return;
  }
  return;
}




void FUN_009bc5ac(long param_1)

{
  FUN_00941db0(*(undefined8 *)(param_1 + 0x2a8));
  FUN_008fa308();
  *(ushort *)(param_1 + 0x2c4) = *(ushort *)(param_1 + 0x2c4) & 0xfdff;
  return;
}




void FUN_009bc5e0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x2b0);
  uVar1 = FUN_009b81d4(uVar2);
  FUN_009b6ed8(0,uVar2,uVar1);
  FUN_00941e64(*(undefined8 *)(param_1 + 0x2a8));
  FUN_00905064();
  return;
}




void FUN_009bc620(long param_1)

{
  ulong uVar1;
  float fVar2;
  double dVar3;
  
  uVar1 = FUN_00ceab64();
  if ((uVar1 & 1) != 0) {
    FUN_009bd82c(param_1);
  }
  if ((*(byte *)(param_1 + 0x2c5) & 1) == 0) {
    fVar2 = (float)FUN_01988c78();
    dVar3 = (double)FUN_00ce2828();
    *(float *)(param_1 + 700) = (float)(dVar3 * (double)fVar2 + (double)*(float *)(param_1 + 700));
  }
  FUN_00944d5c();
  return;
}




void FUN_009bc680(void)

{
  FUN_00942a2c();
  FUN_00942a50(0xbf800000,0x3e99999a);
  FUN_00944c28();
  return;
}




void FUN_009bc6a8(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  char cVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  byte local_d8 [16];
  void *local_c8;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  undefined4 local_8c;
  ulong local_88 [2];
  void *local_78;
  ulong local_70 [2];
  void *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00cedce4();
  lVar9 = FUN_00d9e390();
  uVar10 = FUN_00ceab64();
  if ((uVar10 & 1) == 0) {
    lVar12 = *(long *)(lVar9 + 0x18);
    while ((lVar12 != 0 && (*(int *)(*(long *)(lVar12 + 8) + 0xa4) != DAT_02e3ef68))) {
      lVar12 = *(long *)(lVar12 + 0x20);
    }
    cVar3 = *(char *)(param_1 + 0x2c4);
    cVar5 = FUN_00d55870(lVar9);
    FUN_00a14c78(lVar12,cVar3 == cVar5,*(undefined4 *)(param_1 + 0x2b8));
    cVar3 = *(char *)(param_1 + 0x2c4);
    cVar5 = FUN_00d55870(lVar9);
    uVar7 = *(undefined4 *)(param_1 + 0x2b8);
    uVar10 = FUN_0092e920();
    uVar6 = 0;
    if ((uVar10 & 1) != 0) {
      uVar6 = thunk_FUN_00ec5f5c();
    }
    FUN_0091dfa0(cVar3 == cVar5,uVar7,uVar6 & 1);
    uVar10 = FUN_0092e920();
    if ((((uVar10 & 1) != 0) && (uVar10 = thunk_FUN_00ec5f5c(), (uVar10 & 1) != 0)) &&
       (uVar10 = FUN_00931d34(), (uVar10 & 1) != 0)) {
      lVar9 = FUN_009580b8();
      if ((*(byte *)(lVar9 + 0x54c0) & 1) == 0) {
        lVar9 = lVar9 + 0x54c1;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x54d0);
      }
      FUN_00931e5c(lVar9);
    }
  }
  else {
    lVar9 = *(long *)(param_1 + 0x18);
    while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_0312ee00))) {
      lVar9 = *(long *)(lVar9 + 0x20);
    }
    FUN_00a19008(lVar9,*(char *)(param_1 + 0x2c4) == '\x01',*(undefined4 *)(param_1 + 0x2b8));
  }
  uVar10 = FUN_00e80f58();
  if ((uVar10 & 1) != 0) {
    local_70[0] = 0;
    local_70[1] = 0;
    local_60 = (void *)0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_78 = (void *)0x0;
    local_8c = 0;
    FUN_00e82a5c(local_70,&local_8c);
    FUN_00e82a7c(local_88,&local_8c);
    FUN_00942a74(&local_4c,&local_58,&local_50,&local_54);
    lVar9 = FUN_00e829e0();
    FUN_008fcdb8(local_a8,lVar9 + 0xa8);
    uVar11 = FUN_00e70228(&DAT_0320ffc0);
    FUN_008fa54c(local_c0,uVar11);
    uVar11 = FUN_00e7027c(&DAT_0320ffc0);
    FUN_008fa54c(local_d8,uVar11);
    uVar7 = FUN_00ceacf4();
    FUN_00e832e0(local_4c,local_a8,uVar7,local_c0,local_d8,local_58);
    pvVar1 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
    pvVar2 = (void *)((ulong)local_88 | 1);
    if ((local_88[0] & 1) != 0) {
      pvVar2 = local_78;
    }
    FUN_00905304(local_4c,local_50,local_54,local_58,pvVar1,pvVar2);
    FUN_00e829b4();
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  FUN_00ceace8();
  uVar10 = FUN_00ceae70();
  if ((uVar10 & 1) != 0) {
    iVar8 = FUN_00ceacf4();
    if (iVar8 == 9) {
      FUN_008ff194();
    }
    else {
      iVar8 = FUN_00ceacf4();
      if (iVar8 == 0) {
        FUN_008ff1c4();
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bc97c(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 local_80 [2];
  ulong local_78 [2];
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined4 local_50;
  byte local_4c;
  byte local_4b;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00ceace8();
  uVar4 = FUN_00ceae78();
  if ((((uVar4 & 1) != 0) && (uVar4 = FUN_00ceab64(), (uVar4 & 1) == 0)) &&
     (iVar2 = FUN_00ced6f8(), iVar2 != 0)) {
    uVar6 = 0;
    do {
      iVar2 = FUN_00cedca4(uVar6);
      if (((iVar2 != -1) && (uVar4 = FUN_00ced270(iVar2), (uVar4 & 1) == 0)) &&
         (uVar4 = FUN_00ced190(iVar2), (uVar4 & 1) == 0)) {
        local_78[0] = 0;
        local_78[1] = 0;
        local_68 = (void *)0x0;
        FUN_00e70510(&local_60);
        local_80[0] = 0;
        uVar5 = FUN_00cece44(iVar2);
        FUN_008fce60(local_78,uVar5);
        uVar5 = FUN_00cec840(iVar2);
        FUN_00910394(&local_60,uVar5);
        local_50 = FUN_00cecbe0(iVar2);
        uVar5 = FUN_00cedce4();
        local_4c = FUN_00ced50c(uVar5,iVar2);
        local_4c = local_4c & 1;
        local_4b = FUN_00ced528(iVar2);
        local_4b = local_4b & 1;
        FUN_0091614c(local_80);
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
          local_60 = 0;
          local_58 = (void *)0x0;
        }
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
      }
      uVar6 = uVar6 + 1;
      uVar3 = FUN_00ced6f8();
    } while (uVar6 < uVar3);
  }
  FUN_009426d0();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bcad8(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_009bcb0c;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_009bcb0c:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_009bcb60(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)(*(ushort *)(param_1 + 0x178) >> 10 & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x50) = FUN_009bdd34;
  *(code **)(lVar1 + 0x48) = FUN_009bdd34;
  *(code **)(lVar1 + 0x58) = FUN_009bdd34;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x178) =
       *(ushort *)(param_1 + 0x178) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x178) & 0x83ff;
  return;
}




void FUN_009bcbb4(void)

{
  FUN_019889f0(DAT_02c09220);
  FUN_019889f0(DAT_0312ee00);
  return;
}




void FUN_009bcbdc(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x178) >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    piVar4 = (int *)(param_1 + 0x10);
    do {
      if (*piVar4 == param_2) goto LAB_009bcc10;
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 0x16;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_009bcc10:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      piVar4 = (int *)(param_1 + 0x10);
      do {
        if (*piVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1 = param_1 + (long)(int)uVar2 * 0x58;
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar3 & 0x1f);
          return;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 0x16;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_009bcc64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2800;
  param_1[5] = &PTR_FUN_027c2830;
  FUN_00944ce8();
  DAT_0312ede8 = 0;
  FUN_009bccbc(param_1 + 0x25);
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009bccbc(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x5e) & 0x1f;
  *(ushort *)(param_1 + 0x5e) = *(ushort *)(param_1 + 0x5e) | 0x3e0;
  if (uVar1 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x009bcd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
             *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar2);
  return;
}




void FUN_009bcd0c(long param_1)

{
  FUN_009bcc64(param_1 + -0x28);
  return;
}




void FUN_009bcd14(void *param_1)

{
  FUN_009bcc64();
  operator_delete(param_1);
  return;
}




void FUN_009bcd38(long param_1)

{
  FUN_009bcc64((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_009bcd60(long param_1)

{
  long lVar1;
  
  DAT_02c09250 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c09250 + 1;
  lVar1 = param_1 + (ulong)DAT_02c09250 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009bdd58;
  *(code **)(lVar1 + 0xb8) = FUN_009bdd7c;
  *(uint *)(lVar1 + 0xa4) = DAT_02c09250;
  *(undefined4 *)(lVar1 + 0xa8) = 0x2c8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,0,FUN_009bce18,0);
  FUN_01986780(param_1,1,FUN_009bcf3c,0);
  FUN_01986780(param_1,4,FUN_009bcf64,0);
  return;
}




void FUN_009bce18(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte local_50;
  undefined7 uStack_4f;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00904e60();
  FUN_00ce27e0(&local_50);
  pvVar1 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_019887c4(pvVar1,0,0xffffffff,param_1);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00904f0c();
  uVar3 = FUN_01985d44(param_1,DAT_0312edf0);
  FUN_00ceace8();
  uVar4 = FUN_00ceadd8();
  FUN_019887c4(uVar4,0,1,uVar3);
  FUN_00a1b960();
  uVar3 = FUN_01988738(DAT_0312edd0,param_1);
  *(undefined8 *)(param_1 + 0x2b0) = uVar3;
  FUN_009b7f88(0x44bb8000);
  FUN_019804cc();
  FUN_019889cc(&local_50,1,DAT_02e3ef88,0);
  lVar5 = FUN_00d70a78();
  FUN_00d9f964(*(undefined8 *)(lVar5 + 0x140),CONCAT71(uStack_4f,local_50));
  lVar5 = FUN_00d70a78();
  FUN_00d9f964(*(undefined8 *)(lVar5 + 0x148),CONCAT71(uStack_4f,local_50));
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bcf3c(void)

{
  FUN_00966aec();
  FUN_009bd2b0();
  FUN_01988724(0);
  FUN_00a1baa0();
  FUN_00ecb030();
  FUN_00d07ff4();
  return;
}




void FUN_009bcf64(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009b80cc(*(undefined8 *)(param_4 + 0x2b0));
  FUN_009d4294();
  FUN_009b806c(*(undefined8 *)(param_4 + 0x2b0));
  FUN_009d42c0();
  local_48 = FUN_009b8144(*(undefined8 *)(param_4 + 0x2b0));
  uStack_44 = param_2;
  local_40 = param_3;
  uVar2 = FUN_009b8164(*(undefined8 *)(param_4 + 0x2b0));
  uVar3 = FUN_009b8194(*(undefined8 *)(param_4 + 0x2b0));
  FUN_00ecb03c(&local_48,uVar2,uVar3);
  FUN_009bd5d0(param_4 + 0x38);
  FUN_009bd618(param_4 + 0x128);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

