// functions/00d71 — 43 functions
#include "libGameKindred.h"




void FUN_00d71108(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x48);
    puVar4 = (undefined4 *)*puVar6;
    while (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar6 + 1;
      if ((float)puVar4[1] <= 0.0) {
        if (0.0 < (float)puVar4[2]) {
          lVar5 = *(long *)(param_1 + 0x10);
          uVar3 = 2;
          goto LAB_00d7118c;
        }
      }
      else {
        lVar5 = *(long *)(param_1 + 0x10);
        uVar3 = 1;
LAB_00d7118c:
        FUN_00d041e4(auStack_70,*(undefined4 *)(*(long *)(lVar5 + 0x10) + 0x260),*puVar4,uVar3,0,
                     0xffffffff);
        FUN_00ce20fc(auStack_70);
      }
      puVar4 = (undefined4 *)*puVar6;
    }
    FUN_00d711ec(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d711e0(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
}




void FUN_00d711ec(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_d0 [2];
  undefined4 local_c8 [2];
  undefined4 local_c0 [22];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x28) + 0x50);
    puVar6 = (undefined8 *)*plVar9;
    while (puVar6 != (undefined8 *)0x0) {
      uVar7 = *puVar6;
      thunk_FUN_00d9ff34(local_c0,uVar7);
      uVar4 = local_c0[0];
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
      while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar8 = *(long *)(lVar8 + 0x20);
      }
      FUN_00d9ff84(local_c8,local_c0[0]);
      uVar5 = FUN_00d6bbac(lVar8,local_c8[0],0);
      if ((uVar5 & 1) == 0) {
        uVar4 = FUN_00ceb350();
      }
      else {
        FUN_00d9ff84(local_d0,uVar4);
        uVar4 = FUN_00d6b630(lVar8,local_d0[0],0xffffffff);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
      FUN_00cfe864(0xbf800000,0,0,local_c0,uVar1,uVar1,uVar7,uVar4,1,0,0);
      FUN_00ce20fc(local_c0);
      *(undefined4 *)(param_1 + (ulong)(*(ushort *)(param_1 + 0x52) & 0x7fff) * 4 + 0x38) = uVar4;
      uVar2 = *(uint *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) =
           uVar2 & 0x80000000 | uVar2 & 0xffff | (uVar2 + 0x10000 >> 0x10 & 0x7fff) << 0x10;
      plVar9 = plVar9 + 1;
      puVar6 = (undefined8 *)*plVar9;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d71370(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 auStack_80 [56];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x48);
    puVar4 = (undefined4 *)*puVar6;
    while (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar6 + 1;
      fVar7 = (float)puVar4[1];
      if (fVar7 <= 0.0) {
        fVar7 = (float)puVar4[2];
        if (0.0 < fVar7) {
          lVar5 = *(long *)(param_1 + 0x10);
          uVar3 = 2;
          goto LAB_00d71404;
        }
      }
      else {
        lVar5 = *(long *)(param_1 + 0x10);
        uVar3 = 1;
LAB_00d71404:
        FUN_00d041e4(-fVar7,auStack_80,*(undefined4 *)(*(long *)(lVar5 + 0x10) + 0x260),*puVar4,
                     uVar3,0,0xffffffff);
        FUN_00ce20fc(auStack_80);
      }
      puVar4 = (undefined4 *)*puVar6;
    }
    if ((param_2 & 1) != 0) {
      FUN_00d71460(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d71460(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_b8 [40];
  int local_90 [10];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    lVar10 = *(long *)(lVar9 + 0x18);
    uVar1 = *(undefined4 *)(lVar9 + 0x260);
    lVar9 = lVar10;
    if (lVar10 == 0) {
      lVar9 = 0;
    }
    else {
      do {
        if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == DAT_02c7bf48) break;
        lVar9 = *(long *)(lVar9 + 0x20);
      } while (lVar9 != 0);
      do {
        if (*(int *)(*(long *)(lVar10 + 8) + 0xa4) == DAT_03130aa8) break;
        lVar10 = *(long *)(lVar10 + 0x20);
      } while (lVar10 != 0);
    }
    uVar4 = FUN_00d72940(lVar10);
    FUN_00d73b18(lVar10,local_90,uVar4);
    uVar8 = *(uint *)(param_1 + 0x50);
    if ((uVar8 & 0x7fff0000) != 0) {
      uVar6 = 0;
      do {
        uVar4 = *(undefined4 *)(param_1 + uVar6 * 4 + 0x38);
        iVar5 = FUN_00d72dac(lVar10);
        if (iVar5 != 0) {
          uVar11 = 0;
          do {
            if ((local_90[uVar11] != *(int *)(param_1 + 0x4c)) &&
               (uVar7 = FUN_00d73514(lVar10,local_90[uVar11],uVar4), (uVar7 & 1) != 0)) {
              bVar3 = 0;
              goto LAB_00d7157c;
            }
            uVar11 = uVar11 + 1;
            uVar7 = FUN_00d72dac(lVar10);
          } while (uVar11 < (uVar7 & 0xffffffff));
        }
        bVar3 = 1;
LAB_00d7157c:
        uVar11 = FUN_00d6c068(lVar9,uVar4);
        if ((uVar11 & 1) != 0) {
          iVar5 = FUN_00d6bb04(lVar9,uVar4);
          if (iVar5 == 1) {
            iVar5 = FUN_00d6bd30(lVar9,uVar4);
            if ((bool)(iVar5 == 1 & (bVar3 ^ 1))) goto LAB_00d715ec;
            FUN_00d009d0(auStack_b8,uVar1,uVar4);
          }
          else {
            FUN_00d0108c(auStack_b8,uVar1,uVar4,1);
          }
          FUN_00ce20fc(auStack_b8);
        }
LAB_00d715ec:
        uVar8 = *(uint *)(param_1 + 0x50);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uVar8 >> 0x10 & 0x7fff));
      if ((uVar8 & 0x7fff0000) != 0) {
        uVar6 = 0;
        do {
          *(undefined4 *)(param_1 + 0x38 + uVar6 * 4) = 0xffffffff;
          uVar8 = *(uint *)(param_1 + 0x50);
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uVar8 >> 0x10 & 0x7fff));
      }
    }
    *(uint *)(param_1 + 0x50) = uVar8 & 0x8000ffff;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00d71670(long param_1)

{
  return **(undefined8 **)(param_1 + 0x28);
}




undefined8 FUN_00d7167c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




bool FUN_00d71684(long param_1)

{
  return (int)(uint)*(ushort *)(param_1 + 0x50) < *(int *)(*(long *)(param_1 + 0x28) + 0x38);
}




undefined2 FUN_00d7169c(long param_1)

{
  return *(undefined2 *)(param_1 + 0x50);
}




undefined4 FUN_00d716a4(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x40);
}




void FUN_00d716b0(long param_1)

{
  FUN_00d50c44(*(undefined8 *)(param_1 + 0x30));
  return;
}




void FUN_00d716b8(long param_1)

{
  FUN_00d50c5c(*(undefined8 *)(param_1 + 0x30));
  return;
}




void FUN_00d716c0(long param_1)

{
  *(short *)(param_1 + 0x50) = (short)*(undefined4 *)(param_1 + 0x50) + 1;
  return;
}




void FUN_00d716d0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x50) != 0) {
    iVar1 = *(ushort *)(param_1 + 0x50) - 1;
  }
  FUN_00d0531c(auStack_50,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260),
               *(undefined4 *)(param_1 + 0x4c),iVar1);
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d71740(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_00d71748(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00d51a10(*(long *)(param_1 + 0x30),param_2,1);
    return;
  }
  return;
}




undefined4 FUN_00d7175c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}




undefined4 FUN_00d71764(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




bool FUN_00d7176c(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar2 = FUN_00d513f4();
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}




undefined8 FUN_00d71790(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_00d513f4();
    return uVar1;
  }
  return 0x400;
}




bool FUN_00d717a4(long param_1)

{
  return *(long *)(param_1 + 0x30) != 0;
}




void FUN_00d717b4(long param_1,int param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long local_90;
  undefined4 local_88;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((((uVar6 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
     (iVar5 = FUN_00d513f4(), iVar5 == 0)) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    if (param_2 == -1) {
      FUN_00d01a68(&local_90,*(undefined4 *)(lVar10 + 0x260),*(undefined4 *)(param_1 + 0x4c));
      FUN_00ce20fc(&local_90);
      FUN_00da9688(lVar10,**(undefined8 **)(param_1 + 0x28),0,0);
    }
    else {
      FUN_00d01aa4(&local_90,*(undefined4 *)(lVar10 + 0x260),*(undefined4 *)(param_1 + 0x4c),param_2
                  );
      FUN_00ce20fc(&local_90);
      uVar7 = FUN_00d9e390(param_2);
      FUN_00da9688(lVar10,**(undefined8 **)(param_1 + 0x28),uVar7,0);
      lVar8 = FUN_00d9e390(param_2);
      if (lVar8 == 0) goto LAB_00d719b4;
      local_90 = lVar8 + 0x28;
      local_88 = *(undefined4 *)(lVar8 + 0x30);
      thunk_FUN_00d51844(*(undefined8 *)(param_1 + 0x30),&local_90);
    }
    FUN_00d5084c(*(undefined8 *)(param_1 + 0x30));
    if ((*(char *)(*(long *)(param_1 + 0x28) + 0x34) != '\0') && ((param_3 & 1) != 0)) {
      FUN_00d738e0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x4c),1);
      FUN_00d00bd4(&local_90,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260),
                   *(undefined4 *)(param_1 + 0x4c),1);
      FUN_00ce20fc(&local_90);
    }
    uVar2 = *(undefined4 *)(lVar10 + 0x260);
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    uVar11 = 0xffff0000;
    lVar8 = lVar10;
LAB_00d71954:
    do {
      do {
        lVar9 = lVar8;
        if ((lVar9 != lVar10) &&
           (lVar8 = FUN_019865b4(*(undefined8 *)(lVar9 + 8),0x15af039a), lVar8 != 0)) {
          (**(code **)(lVar8 + 8))(lVar9,uVar2,uVar3);
        }
        if (((uVar11 & 0xffff) < uVar11 >> 0x10) && (lVar8 = *(long *)(lVar9 + 0x18), lVar8 != 0)) {
          uVar11 = uVar11 & 0xffff0000 | uVar11 + 1 & 0xffff;
          goto LAB_00d71954;
        }
        if ((uVar11 & 0xffff) == 0) goto LAB_00d719b4;
        lVar8 = *(long *)(lVar9 + 0x20);
      } while (*(long *)(lVar9 + 0x20) != 0);
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((lVar9 == 0) || (uVar1 = uVar11 - 1 & 0xffff, uVar1 == 0)) break;
      uVar11 = uVar1 | uVar11 & 0xffff0000;
      while (lVar8 = *(long *)(lVar9 + 0x20), lVar8 == 0) {
        if ((uVar11 - 1 & 0xffff) == 0) goto LAB_00d719b4;
        lVar9 = *(long *)(lVar9 + 0x10);
        uVar11 = uVar11 & 0xffff0000 | uVar11 - 1 & 0xffff;
        if (lVar9 == 0) goto LAB_00d719b4;
      }
    } while( true );
  }
LAB_00d719b4:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d719e4(long param_1,undefined4 *param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [56];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((((uVar6 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
     (iVar5 = FUN_00d513f4(), iVar5 == 0)) {
    local_c0 = *param_2;
    uStack_bc = param_2[2];
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    FUN_00d01ad0(auStack_90,*(undefined4 *)(lVar9 + 0x260),*(undefined4 *)(param_1 + 0x4c),&local_c0
                );
    FUN_00ce20fc(auStack_90);
    FUN_00da9688(lVar9,**(undefined8 **)(param_1 + 0x28),0,param_2);
    FUN_00d518d0(*(undefined8 *)(param_1 + 0x30),param_2);
    FUN_00d5084c(*(undefined8 *)(param_1 + 0x30));
    if ((*(char *)(*(long *)(param_1 + 0x28) + 0x34) != '\0') && ((param_3 & 1) != 0)) {
      FUN_00d738e0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x4c),1);
      FUN_00d00bd4(auStack_b8,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260),
                   *(undefined4 *)(param_1 + 0x4c),1);
      FUN_00ce20fc(auStack_b8);
    }
    uVar2 = *(undefined4 *)(lVar9 + 0x260);
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    uVar10 = 0xffff0000;
    lVar7 = lVar9;
LAB_00d71b24:
    do {
      do {
        lVar8 = lVar7;
        if ((lVar8 != lVar9) &&
           (lVar7 = FUN_019865b4(*(undefined8 *)(lVar8 + 8),0x15af039a), lVar7 != 0)) {
          (**(code **)(lVar7 + 8))(lVar8,uVar2,uVar3);
        }
        if (((uVar10 & 0xffff) < uVar10 >> 0x10) && (lVar7 = *(long *)(lVar8 + 0x18), lVar7 != 0)) {
          uVar10 = uVar10 & 0xffff0000 | uVar10 + 1 & 0xffff;
          goto LAB_00d71b24;
        }
        if ((uVar10 & 0xffff) == 0) goto LAB_00d71b84;
        lVar7 = *(long *)(lVar8 + 0x20);
      } while (*(long *)(lVar8 + 0x20) != 0);
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((lVar8 == 0) || (uVar1 = uVar10 - 1 & 0xffff, uVar1 == 0)) break;
      uVar10 = uVar1 | uVar10 & 0xffff0000;
      while (lVar7 = *(long *)(lVar8 + 0x20), lVar7 == 0) {
        if ((uVar10 - 1 & 0xffff) == 0) goto LAB_00d71b84;
        lVar8 = *(long *)(lVar8 + 0x10);
        uVar10 = uVar10 & 0xffff0000 | uVar10 - 1 & 0xffff;
        if (lVar8 == 0) goto LAB_00d71b84;
      }
    } while( true );
  }
LAB_00d71b84:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d71bb4(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00d509fc();
    return;
  }
  return;
}




void FUN_00d71bc4(long param_1)

{
  FUN_00d50a98(*(undefined8 *)(param_1 + 0x30));
  return;
}




uint FUN_00d71bdc(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = *(ushort *)(param_3 + 0x88) & 0x1f;
  if ((uVar4 == 0x1f) || (uVar5 = 0, 1 < *(ushort *)(param_3 + (ulong)uVar4 * 0x38 + 0x90) - 3)) {
    uVar4 = *(ushort *)(param_2 + 0x88) & 0x1f;
    if (uVar4 != 0x1f) {
      uVar5 = 0;
      if (*(ushort *)(param_2 + (ulong)uVar4 * 0x38 + 0x90) - 3 < 2) goto LAB_00d71cec;
    }
    uVar4 = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar4 = FUN_00d509fc();
    }
    if ((*(uint *)(param_3 + 0x2f4) & uVar4) == 0) {
      uVar5 = 0;
    }
    else {
      FUN_00d4d9e8(auStack_a8);
      lVar6 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x30));
      uVar1 = *(undefined1 *)(lVar6 + 0x9d);
      lVar6 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x30));
      uVar2 = *(undefined1 *)(lVar6 + 0x9e);
      lVar6 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x30));
      FUN_00d4daf4(auStack_a8,uVar1,uVar2,*(undefined1 *)(lVar6 + 0x9f),param_2);
      FUN_00d4d354(auStack_a8,0);
      uVar5 = FUN_00d4d280(auStack_a8,param_3);
    }
  }
LAB_00d71cec:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 FUN_00d71d1c(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x34);
}




void FUN_00d71d28(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00d50bfc();
    return;
  }
  return;
}




void FUN_00d71d38(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x34) != '\0') {
    if ((uVar1 & 0xffff) != 0) {
      uVar1 = uVar1 & 0xffff0000 | uVar1 - 1 & 0xffff;
      *(uint *)(param_1 + 0x50) = uVar1;
    }
    if ((uVar1 & 0xffff) != 0) {
      return;
    }
  }
  *(uint *)(param_1 + 0x50) = uVar1 | 0x80000000;
  return;
}




uint FUN_00d71d74(long param_1)

{
  return *(uint *)(param_1 + 0x50) >> 0x1f;
}




undefined1 FUN_00d71d80(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x1a4);
}




undefined8 FUN_00d71d8c(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x60) != '\0') {
    uVar1 = FUN_00d508f8(*(undefined8 *)(param_1 + 0x30));
    return uVar1;
  }
  return 0;
}




void FUN_00d71da8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x30));
  if (*(int *)(lVar1 + 0x80) == 4) {
    FUN_00d51aa0(*(undefined8 *)(param_1 + 0x30));
    FUN_00d5084c(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}




void FUN_00d71df0(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x30));
  if (*(int *)(lVar2 + 0x80) != 2) {
    lVar2 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x30));
    if (*(int *)(lVar2 + 0x80) != 1) {
      lVar2 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x30));
      if (*(int *)(lVar2 + 0x80) != 0) {
        lVar2 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x30));
        if (*(int *)(lVar2 + 0x80) != 4) goto LAB_00d71e9c;
      }
    }
  }
  lVar2 = FUN_00d9e390(param_2);
  if (lVar2 != 0) {
    local_48 = lVar2 + 0x28;
    local_40 = *(undefined4 *)(lVar2 + 0x30);
    thunk_FUN_00d51844(*(undefined8 *)(param_1 + 0x30),&local_48);
    FUN_00d51aa0(*(undefined8 *)(param_1 + 0x30));
    FUN_00d5084c(*(undefined8 *)(param_1 + 0x30));
  }
LAB_00d71e9c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d71ec4(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x30));
  if (*(int *)(lVar2 + 0x80) == 3) {
    local_48 = *param_2;
    local_40 = param_2[1];
    uStack_44 = 0;
    FUN_00d518d0(*(undefined8 *)(param_1 + 0x30),&local_48);
    FUN_00d51aa0(*(undefined8 *)(param_1 + 0x30));
    FUN_00d5084c(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d71f50(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00d508f8(*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 & 1) != 0) {
    FUN_00d5089c(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}




void FUN_00d71f88(long param_1)

{
  FUN_00d50838(*(undefined8 *)(param_1 + 0x30));
  return;
}




bool FUN_00d71f90(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d507f8(*(undefined8 *)(param_1 + 0x30));
  return iVar1 == 5;
}




void FUN_00d71fb0(long param_1)

{
  FUN_00d50af0(*(undefined8 *)(param_1 + 0x30));
  return;
}




undefined1  [16] FUN_00d71fb8(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00d50b40();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_00d71fcc(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00d50c5c();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




void FUN_00d71fe0(long param_1,uint param_2)

{
  FUN_00d519ac(*(undefined8 *)(param_1 + 0x30),param_2 & 1);
  return;
}




void FUN_00d71fec(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_00d5048c(*(undefined8 *)(param_2 + 0x30));
  uVar2 = FUN_00d50ad4(*(undefined8 *)(param_2 + 0x30));
  lVar3 = FUN_00d9f258(uVar1,uVar2);
  if (lVar3 != 0) {
    FUN_00d6d618(param_1,lVar3,param_3);
    return;
  }
  return;
}

