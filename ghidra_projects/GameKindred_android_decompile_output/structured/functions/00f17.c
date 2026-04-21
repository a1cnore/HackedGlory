// functions/00f17 — 28 functions
#include "libGameKindred.h"




void FUN_00f17064(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_a0 [8];
  float local_98;
  float local_94;
  ushort local_80;
  ushort local_7c;
  undefined8 local_78;
  uint local_70;
  uint uStack_6c;
  int local_68;
  uint uStack_64;
  byte local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar11 = 0;
    do {
      plVar10 = *(long **)(*(long *)(param_1 + 0x30) + uVar11 * 8);
      lVar4 = (**(code **)(*plVar10 + 0x40))(plVar10);
      if (lVar4 == 0) {
        pfVar7 = (float *)((long)&DAT_03218f00 + 4);
        pfVar6 = (float *)&DAT_03218f00;
      }
      else {
        lVar4 = (**(code **)(*plVar10 + 0x40))(plVar10);
        pfVar7 = (float *)(lVar4 + 0x4c);
        pfVar6 = (float *)(lVar4 + 0x48);
      }
      fVar12 = *pfVar7;
      fVar13 = *pfVar6;
      FUN_00f13bf8(auStack_a0);
      local_78 = (**(code **)(*plVar10 + 0x10))(plVar10);
      uVar5 = (**(code **)(*plVar10 + 0x18))(plVar10);
      local_70 = (uint)uVar5;
      uStack_6c = (uint)((ulong)uVar5 >> 0x20);
      uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10);
      local_68 = (int)uVar5;
      uStack_64 = (uint)((ulong)uVar5 >> 0x20);
      local_80 = (**(code **)(*plVar10 + 0x38))(plVar10);
      local_7c = *(ushort *)((long)plVar10 + 0xc) >> 5 & 0xf;
      lVar4 = (**(code **)(*plVar10 + 0x40))(plVar10);
      if (lVar4 == 0) {
LAB_00f17198:
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
        if ((*(uint *)(lVar4 + 0x84) >> 3 & 1) != 0) {
          if ((*(uint *)(lVar4 + 0x84) >> 2 & 1) != 0) goto LAB_00f17198;
          bVar3 = FUN_00f14094(lVar4);
        }
      }
      local_60 = (byte)((ushort)*(undefined2 *)((long)plVar10 + 0xc) >> 9) & 2 |
                 local_60 & 0xfc | ~bVar3 & 1;
      if ((local_80 & 0xf) == 0xd) {
        local_78 = local_78 & 0xffffffff00000000;
      }
      if ((local_80 & 0xf0) == 0xd0) {
        local_78 = local_78 & 0xffffffff;
      }
      if ((local_80 & 0xf | 2) == 3) {
        local_70 = (undefined4)local_78;
      }
      if ((local_80 >> 4 & 0xf | 2) == 3) {
        uStack_6c = local_78._4_4_;
      }
      if ((local_80 & 0xf) == 4) {
        local_68 = (undefined4)local_78;
      }
      if ((local_80 & 0xf0) == 0x40) {
        uStack_64 = local_78._4_4_;
      }
      fVar14 = (float)NEON_ucvtf((undefined4)local_78);
      uVar8 = (uint)(fVar13 * fVar14);
      uVar9 = (uint)(fVar12 * (float)local_78._4_4_);
      fVar14 = (float)NEON_ucvtf(local_70);
      local_70 = (uint)(fVar13 * fVar14);
      uVar5 = NEON_ucvtf(CONCAT44(local_68,uStack_6c),4);
      local_78 = CONCAT44(uVar9,uVar8);
      uVar1 = local_70;
      if (local_70 <= uVar8) {
        uVar1 = uVar8;
      }
      uStack_6c = (uint)(fVar12 * (float)uVar5);
      local_68 = (int)(fVar13 * (float)((ulong)uVar5 >> 0x20));
      uStack_64 = (uint)(fVar12 * (float)uStack_64);
      uVar8 = uStack_6c;
      if (uStack_6c <= uVar9) {
        uVar8 = uVar9;
      }
      if ((local_80 & 0xf) != 0) {
        uVar1 = local_70;
      }
      local_98 = (float)uVar1;
      if ((local_80 & 0xf0) != 0) {
        uVar8 = uStack_6c;
      }
      local_94 = (float)uVar8;
      uVar1 = *param_2;
      memcpy(param_2 + (ulong)uVar1 * 0x11 + 2,auStack_a0,0x44);
      *param_2 = uVar1 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x28));
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f1733c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar4 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar4 * 8) + 0x40))();
      if ((lVar1 != 0) && (lVar2 = FUN_00f14058(lVar1), lVar2 != 0)) {
        plVar3 = (long *)FUN_00f14058(lVar1);
        (**(code **)(*plVar3 + 0x30))();
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar4 * 8) + 0x30))();
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x200;
  return;
}




void FUN_00f173d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f13844(param_2,0,2);
  FUN_00f17470(param_1,uVar1);
  return;
}




void FUN_00f1740c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f13844(param_2,param_3,param_4);
  FUN_00f17470(param_1,uVar1);
  return;
}




void FUN_00f17440(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f13844(param_2,0);
  FUN_00f17470(param_1,uVar1);
  return;
}




void FUN_00f17470(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  FUN_00f1559c(param_1 + 0x28,&local_40);
  if ((((DAT_03210ce0 != '\0') &&
       (plVar2 = (long *)(**(code **)(*param_2 + 0x40))(param_2), plVar2 != (long *)0x0)) &&
      (lVar4 = plVar2[4], lVar3 = FUN_00f13b24(param_1), lVar4 == 0)) && (lVar3 != 0)) {
    (**(code **)(*plVar2 + 0x80))(plVar2,lVar3,1);
  }
  FUN_00f1733c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1752c(void)

{
  return;
}




void FUN_00f17530(void)

{
  return;
}




void FUN_00f17534(undefined8 param_1,long param_2,ushort param_3)

{
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xfe1f | (param_3 & 0xf) << 5;
  FUN_00f17470();
  return;
}




undefined8 FUN_00f1754c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  
  uVar3 = DAT_03211250;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar5 * 8) + 0x40))();
      if ((lVar1 == 0) ||
         (((*(uint *)(lVar1 + 0x84) >> 3 & 1) != 0 &&
          (((*(uint *)(lVar1 + 0x84) >> 2 & 1) != 0 || (uVar2 = FUN_00f14094(), (uVar2 & 1) != 0))))
         )) {
        uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar5 * 8) + 0x10))();
        fVar7 = (float)uVar6;
        if ((float)uVar6 <= (float)(uVar2 & 0xffffffff)) {
          fVar7 = (float)(uVar2 & 0xffffffff);
        }
        uVar6 = (uint)fVar7;
        fVar7 = (float)uVar4;
        if ((float)uVar4 <= (float)(uVar2 >> 0x20)) {
          fVar7 = (float)(uVar2 >> 0x20);
        }
        uVar4 = (uint)fVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = CONCAT44((ushort)((ulong)uVar3 >> 0x30) + uVar4 +
                     ((uint)((ulong)uVar3 >> 0x20) & 0xffff),
                     uVar6 + ((uint)uVar3 & 0xffff) + ((uint)uVar3 >> 0x10));
  }
  return uVar3;
}




undefined8 FUN_00f17630(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = DAT_03211250;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x10))();
      plVar4 = *(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8);
      lVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
      if (lVar3 == 0) {
        fVar9 = (float)uVar8;
LAB_00f176e4:
        fVar10 = (float)(uVar2 >> 0x20);
LAB_00f176e8:
        if (fVar9 <= fVar10) {
          fVar9 = fVar10;
        }
        uVar8 = (uint)fVar9;
        fVar9 = (float)(uVar2 & 0xffffffff);
        if ((float)param_2 <= (float)(uVar2 & 0xffffffff)) {
          fVar9 = (float)param_2;
        }
        fVar10 = (float)uVar7;
        if ((float)uVar7 <= fVar9) {
          fVar10 = fVar9;
        }
        uVar7 = (uint)fVar10;
      }
      else {
        plVar4 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x40))();
        if ((*(byte *)((long)plVar4 + 0x84) >> 2 & 1) != 0) {
          iVar1 = (**(code **)(*plVar4 + 0x100))(plVar4,param_2);
          fVar9 = (float)uVar8;
          if (iVar1 < 0) goto LAB_00f176e4;
          fVar10 = (float)iVar1;
          goto LAB_00f176e8;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = CONCAT44((ushort)((ulong)uVar5 >> 0x30) + uVar8 +
                     ((uint)((ulong)uVar5 >> 0x20) & 0xffff),
                     uVar7 + ((uint)uVar5 & 0xffff) + ((uint)uVar5 >> 0x10));
  }
  return uVar5;
}




undefined8 FUN_00f1776c(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = DAT_03211250;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = 0;
    do {
      uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar7 * 8) + 0x10))();
      plVar4 = *(long **)(*(long *)(param_1 + 0x30) + uVar7 * 8);
      lVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
      if (lVar3 == 0) {
        fVar9 = (float)uVar8;
LAB_00f17810:
        fVar10 = (float)(uVar2 & 0xffffffff);
LAB_00f17814:
        if (fVar9 <= fVar10) {
          fVar9 = fVar10;
        }
        uVar8 = (uint)fVar9;
        fVar9 = (float)uVar6;
        if ((float)uVar6 <= (float)(uVar2 >> 0x20)) {
          fVar9 = (float)(uVar2 >> 0x20);
        }
        uVar6 = (uint)fVar9;
      }
      else {
        plVar4 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar7 * 8) + 0x40))();
        if ((*(byte *)((long)plVar4 + 0x84) >> 2 & 1) != 0) {
          iVar1 = (**(code **)(*plVar4 + 0x110))(plVar4,param_2);
          fVar9 = (float)uVar8;
          if (iVar1 < 0) goto LAB_00f17810;
          fVar10 = (float)iVar1;
          goto LAB_00f17814;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = CONCAT44((ushort)((ulong)uVar5 >> 0x30) + uVar6 +
                     ((uint)((ulong)uVar5 >> 0x20) & 0xffff),
                     uVar8 + ((uint)uVar5 & 0xffff) + ((uint)uVar5 >> 0x10));
  }
  return uVar5;
}




undefined8 FUN_00f1788c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  
  uVar3 = DAT_03211250;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar5 * 8) + 0x40))();
      if ((lVar1 == 0) ||
         (((*(uint *)(lVar1 + 0x84) >> 3 & 1) != 0 &&
          (((*(uint *)(lVar1 + 0x84) >> 2 & 1) != 0 || (uVar2 = FUN_00f14094(), (uVar2 & 1) != 0))))
         )) {
        uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar5 * 8) + 0x18))();
        fVar7 = (float)uVar6;
        if ((float)uVar6 <= (float)(uVar2 & 0xffffffff)) {
          fVar7 = (float)(uVar2 & 0xffffffff);
        }
        uVar6 = (uint)fVar7;
        fVar7 = (float)uVar4;
        if ((float)uVar4 <= (float)(uVar2 >> 0x20)) {
          fVar7 = (float)(uVar2 >> 0x20);
        }
        uVar4 = (uint)fVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = CONCAT44((ushort)((ulong)uVar3 >> 0x30) + uVar4 +
                     ((uint)((ulong)uVar3 >> 0x20) & 0xffff),
                     uVar6 + ((uint)uVar3 & 0xffff) + ((uint)uVar3 >> 0x10));
  }
  return uVar3;
}




ulong FUN_00f17970(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = (ulong)DAT_03211258;
    uVar3 = (ulong)DAT_0321125c;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    uVar5 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x40))();
      if ((lVar1 == 0) ||
         (((*(uint *)(lVar1 + 0x84) >> 3 & 1) != 0 &&
          (((*(uint *)(lVar1 + 0x84) >> 2 & 1) != 0 || (uVar2 = FUN_00f14094(), (uVar2 & 1) != 0))))
         )) {
        uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x20))();
        uVar3 = uVar2 >> 0x20;
        if ((DAT_03211258 == (uint)uVar2) && (DAT_0321125c == (uint)(uVar2 >> 0x20)))
        goto LAB_00f17a64;
        fVar8 = (float)uVar7;
        if ((float)uVar7 <= (float)(uVar2 & 0xffffffff)) {
          fVar8 = (float)(uVar2 & 0xffffffff);
        }
        uVar7 = (uint)fVar8;
        fVar8 = (float)uVar5;
        if ((float)uVar5 <= (float)uVar3) {
          fVar8 = (float)uVar3;
        }
        uVar5 = (uint)fVar8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x28));
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = (ulong)(uVar7 + ((uint)uVar4 & 0xffff) + ((uint)uVar4 >> 0x10));
    uVar3 = (ulong)((ushort)((ulong)uVar4 >> 0x30) + uVar5 + ((uint)((ulong)uVar4 >> 0x20) & 0xffff)
                   );
  }
LAB_00f17a64:
  return uVar2 & 0xffffffff | uVar3 << 0x20;
}




undefined4 FUN_00f17a80(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




ulong FUN_00f17a88(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar2 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar2 * 8) + 0x40))();
      if (lVar1 == param_2) goto LAB_00f17adc;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x28));
  }
  uVar2 = 0xffffffff;
LAB_00f17adc:
  return uVar2 & 0xffffffff;
}




ulong FUN_00f17af0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(uint *)(param_1 + 0x28) != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x30) + uVar2 * 8) == param_2) {
        return uVar2;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x28));
  }
  return 0xffffffff;
}




undefined8 FUN_00f17b20(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8);
      lVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
      if (lVar1 == param_2) {
        *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)((long)plVar2 + 0xc);
        *(int *)(param_3 + 8) = (int)plVar2[1];
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x28));
  }
  return 0;
}




undefined8 FUN_00f17bac(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    do {
      lVar1 = (**(code **)(*(long *)*puVar2 + 0x40))();
      if (lVar1 == param_2) {
        FUN_00f13998(*puVar2);
        FUN_00f16a38((int *)(param_1 + 0x28),puVar2,puVar2 + 1);
        FUN_00f1733c(param_1);
        return 1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x28) * 8));
  }
  return 0;
}




undefined8 FUN_00f17c44(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)param_2 * 8);
  }
  return uVar1;
}




bool FUN_00f17c64(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 < uVar1) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)param_2 * 8);
    *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(lVar2 + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar2 + 8);
  }
  return param_2 < uVar1;
}




bool FUN_00f17c98(long param_1,uint param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  
  bVar2 = param_2 <= *(uint *)(param_1 + 0x28);
  if (bVar2) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)param_2 * 8);
    FUN_00f13998(*puVar1);
    FUN_00f16a38((uint *)(param_1 + 0x28),puVar1,puVar1 + 1);
    FUN_00f1733c(param_1);
  }
  return bVar2;
}




undefined8 FUN_00f17d00(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar3 * 8);
      if (*plVar1 == param_2) {
        FUN_00f16a38((uint *)(param_1 + 0x28),plVar1,plVar1 + 1);
        FUN_00f1733c(param_1);
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}




undefined8 FUN_00f17d68(long param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (((param_2 < *(uint *)(param_1 + 0x28)) &&
      (lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + (ulong)param_2 * 8) + 0x40))(),
      uVar1 = 0, lVar2 != 0)) && (lVar2 = FUN_00f14058(), uVar1 = 0, lVar2 != 0)) {
    *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(lVar2 + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar2 + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(param_3 + 0x10) = uVar1;
    *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)(lVar2 + 0x20);
    uVar1 = 1;
    *(undefined1 *)(param_3 + 0x22) = *(undefined1 *)(lVar2 + 0x22);
  }
  return uVar1;
}




undefined8 FUN_00f17de4(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar2 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar2 * 8) + 0x40))();
      if (lVar1 == param_2) {
        lVar1 = FUN_00f14058(param_2);
        if (lVar1 == 0) {
          return 0;
        }
        *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(lVar1 + 0xc);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar1 + 8);
        uVar3 = *(undefined8 *)(lVar1 + 0x10);
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
        *(undefined8 *)(param_3 + 0x10) = uVar3;
        *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)(lVar1 + 0x20);
        *(undefined1 *)(param_3 + 0x22) = *(undefined1 *)(lVar1 + 0x22);
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x28));
  }
  return 0;
}




void FUN_00f17e88(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    do {
      plVar1 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8) + 0x40))();
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8) + 0x48))();
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
        }
      }
      else {
        uVar2 = FUN_00f02540(plVar1);
        if (((uVar2 & 1) == 0) && (plVar1[4] != param_2)) {
          (**(code **)(*plVar1 + 0x80))(plVar1,param_2,1);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x28));
  }
  return;
}




void * FUN_00f17f44(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x10);
  FUN_00f17f70();
  return pvVar1;
}




void FUN_00f17f70(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_02828778;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (((DAT_03211058 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03211058), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03211040,PTR_s_NuoWebViewManager_02bf25b8,"createWebView",&DAT_01bef1c0);
    DAT_03211040 = &PTR_FUN_02828818;
    __cxa_atexit(FUN_00e748b8,&DAT_03211040,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03211058);
  }
  uVar3 = FUN_00e7368c(&DAT_03211040);
  uVar1 = FUN_00e73b34(&DAT_03211040,uVar3);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}

