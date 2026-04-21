// functions/00f0e — 52 functions
#include "libGameKindred.h"




void thunk_FUN_00f0e578(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00f0a7e0(param_1 + 0xd0);
  if (lVar1 != *(long *)(param_1 + 0xe0)) {
    *(long *)(param_1 + 0xe0) = lVar1;
    FUN_0091ada4(param_1);
    return;
  }
  return;
}




void FUN_00f0e31c(long param_1)

{
  FUN_00f0de70(param_1 + -0xb8);
  return;
}




undefined8 FUN_00f0e324(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = *(char *)(param_1 + 0x128);
  if (cVar3 == DAT_02bf2590) {
    return 0;
  }
  if ((*(byte *)(param_1 + 299) & 3) != 0) {
    uVar1 = FUN_00f07398(0);
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_00f07474();
      goto LAB_00f0e384;
    }
    cVar3 = *(char *)(param_1 + 0x128);
  }
  uVar2 = FUN_00f057dc(DAT_03210cf0,cVar3);
LAB_00f0e384:
  *param_2 = uVar2;
  return 1;
}




void FUN_00f0e398(long param_1)

{
  FUN_00f0e324(param_1 + -0xb8);
  return;
}




undefined8 FUN_00f0e3a0(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x128) != DAT_02bf2590) {
    uVar2 = 2;
    if ((*(byte *)(param_1 + 299) & 0x10) != 0) {
      uVar2 = 9;
    }
    uVar1 = FUN_0199d9a4(uVar2);
  }
  return uVar1;
}




undefined8 FUN_00f0e3f8(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x70) != DAT_02bf2590) {
    uVar2 = 2;
    if ((*(byte *)(param_1 + 0x73) & 0x10) != 0) {
      uVar2 = 9;
    }
    uVar1 = FUN_0199d9a4(uVar2);
  }
  return uVar1;
}




undefined8 FUN_00f0e454(void)

{
  return 0;
}




undefined8 FUN_00f0e45c(void)

{
  return 0;
}




void FUN_00f0e464(long param_1)

{
  FUN_00f09c44(param_1 + 0xd0);
  return;
}




void FUN_00f0e46c(long param_1)

{
  ulong uVar1;
  
  FUN_00965d64();
  uVar1 = FUN_00f07398();
  if ((uVar1 & 1) != 0) {
    FUN_00f09fcc(param_1 + 0xd0,*(undefined1 *)(param_1 + 0x128));
    return;
  }
  return;
}




void FUN_00f0e4a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  uVar1 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x18) = 0x7000000;
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  param_1[0x19] = uVar1;
  FUN_00f0a784(param_1 + 0x1a);
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(ushort *)((long)param_1 + 0xec) = *(ushort *)((long)param_1 + 0xec) & 0xc000 | 0x2ff;
  FUN_00f14070(param_1,&DAT_03211038);
  uVar1 = NEON_fmov(0xbf800000,4);
  param_1[0x12] = uVar1;
  return;
}




void FUN_00f0e540(long param_1)

{
  FUN_00f0a814(param_1 + 0xd0);
  return;
}




void FUN_00f0e548(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0a814(param_1 + 0xd0);
  FUN_00f0e578(param_1,param_3);
  return;
}




void FUN_00f0e578(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00f0a7e0(param_1 + 0xd0);
  if (lVar1 != *(long *)(param_1 + 0xe0)) {
    *(long *)(param_1 + 0xe0) = lVar1;
    FUN_0091ada4(param_1);
    return;
  }
  return;
}




void FUN_00f0e5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0xd0);
  if (*plVar2 != 0) {
    lVar1 = FUN_00f0a7e0(plVar2,param_3);
    if (lVar1 == 0) {
      FUN_00f0a948(plVar2);
    }
    if (*plVar2 != 0) goto LAB_00f0e610;
  }
  FUN_00f0a814(plVar2,param_2);
LAB_00f0e610:
  FUN_00f0e578(param_1,param_3);
  return;
}




void FUN_00f0e628(long param_1)

{
  FUN_00f0a948(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}




undefined4 FUN_00f0e650(long param_1)

{
  if (*(undefined4 **)(param_1 + 0xe0) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 0xe0);
  }
  return 0;
}




undefined8 FUN_00f0e668(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}




void FUN_00f0e670(long param_1,undefined4 *param_2,ushort param_3)

{
  *(undefined4 *)(param_1 + 0xe8) = *param_2;
  *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) & 0xe0ff | (param_3 & 0x1f) << 8;
  return;
}




long FUN_00f0e690(long param_1)

{
  return param_1 + 0xe8;
}




void FUN_00f0e698(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) & 0xe0ff | (param_2 & 0x1f) << 8;
  return;
}




undefined4 FUN_00f0e6b0(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
  return uVar1;
}




void FUN_00f0e6bc(float param_1,long param_2)

{
  *(ushort *)(param_2 + 0xec) =
       *(ushort *)(param_2 + 0xec) & 0xe000 | (ushort)(int)(param_1 * 255.0) | 0x500;
  return;
}




void FUN_00f0e6e8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfb | (param_2 & 1) << 2;
  return;
}




undefined4 FUN_00f0e700(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  long lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  lVar3 = *(long *)(param_1 + 0xe0);
  if ((lVar3 != 0) && (*(long *)(param_1 + 0xd0) != 0)) {
    fVar1 = *(float *)(param_1 + 0x90);
    uVar4 = SUB42(fVar1,0);
    uVar5 = (undefined2)((uint)fVar1 >> 0x10);
    if (fVar1 < 0.0) {
      uVar2 = NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
      uVar4 = (undefined2)uVar2;
      uVar5 = (undefined2)((uint)uVar2 >> 0x10);
    }
    if (*(float *)(param_1 + 0x94) < 0.0) {
      NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
    }
    return CONCAT22(uVar5,uVar4);
  }
  return DAT_03218ef8;
}




int FUN_00f0e74c(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0.0;
  uVar2 = FUN_00f0e800(param_1,&local_3c);
  if ((uVar2 & 1) == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)((float)param_2 / local_3c);
    if ((1.0 <= ABS((float)param_2 - *(float *)(param_1 + 0x90))) ||
       (1.0 <= ABS((float)iVar3 - *(float *)(param_1 + 0x94)))) {
      FUN_00f13f08(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00f0e800(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  long lVar4;
  
  bVar3 = false;
  if ((*(byte *)(param_1 + 0xed) >> 5 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0);
    if ((lVar4 != 0) &&
       (fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10)), 1.1920929e-07 <= fVar1)) {
      fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
      *param_2 = fVar2 / fVar1;
      if ((*(byte *)(param_1 + 0xed) >> 5 & 1) == 0) {
        return false;
      }
    }
    bVar3 = *(long *)(param_1 + 0xe0) != 0;
  }
  return bVar3;
}




void FUN_00f0e860(undefined8 param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0.0;
  uVar3 = FUN_00f0e800(param_1,&local_2c);
  if ((uVar3 & 1) == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)((float)param_2 / local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




int FUN_00f0e8cc(undefined8 param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0.0;
  uVar2 = FUN_00f0e800(param_1,&local_3c);
  if ((uVar2 & 1) == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)(local_3c * (float)param_2);
    FUN_00f13f08((float)iVar3,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0e954(undefined8 param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0.0;
  uVar3 = FUN_00f0e800(param_1,&local_2c);
  if ((uVar3 & 1) == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)(local_2c * (float)param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_00f0e9c0(long param_1,ushort param_2)

{
  undefined *puVar1;
  
  if ((*(ushort *)(param_1 + 0xec) >> 0xd & 1) == (param_2 & 1)) {
    return;
  }
  puVar1 = &DAT_02bf25a8;
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_03211038;
  }
  *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) & 0xdfff | (param_2 & 1) << 0xd;
  FUN_00f14070(param_1,puVar1);
  return;
}




void FUN_00f0ea00(float param_1,float param_2,long *param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  if ((*(byte *)((long)param_3 + 0xed) >> 5 & 1) == 0) {
    return;
  }
  iVar2 = (int)param_1;
  iVar1 = (**(code **)(*param_3 + 0x100))(param_3,iVar2);
  if ((float)iVar1 <= param_2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0xf8);
  }
  else {
    iVar2 = (int)param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x108);
  }
                    /* WARNING: Could not recover jumptable at 0x00f0ea84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3,iVar2);
  return;
}




undefined8 FUN_00f0ea88(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  return CONCAT44((int)param_2,(int)fVar1);
}




undefined8 FUN_00f0eab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}




undefined8 FUN_00f0eab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}




float FUN_00f0eac0(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  return fVar1 * *(float *)(param_1 + 9);
}




undefined4 FUN_00f0eaf4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    uVar1 = NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
    return uVar1;
  }
  return 0;
}




undefined8 FUN_00f0eb1c(long param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)*(ushort *)(lVar1 + 4);
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)*(ushort *)(lVar1 + 6);
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)*(ushort *)(lVar1 + 8);
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)*(ushort *)(lVar1 + 10);
    }
    return 1;
  }
  return 0;
}




void FUN_00f0eb64(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  ushort uVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  float fVar18;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0xe0) != 0) {
    pfVar6 = (float *)FUN_00965ecc(param_1);
    local_40 = *(undefined2 *)(param_1 + 0xe8);
    local_3e = *(undefined1 *)(param_1 + 0xea);
    local_3d = (undefined1)(int)(pfVar6[6] * 255.0);
    if (*(char *)(param_1 + 0xec) != -1) {
      uVar5 = (ushort)local_40 >> 8;
      local_40 = CONCAT11((char)uVar5,*(char *)(param_1 + 0xec));
    }
    fVar8 = *(float *)(param_1 + 0x90);
    fVar11 = *(float *)(param_1 + 0x94);
    lVar7 = *(long *)(param_1 + 0xe0);
    if ((fVar8 < 0.0) || (fVar9 = fVar8, fVar12 = fVar11, fVar11 < 0.0)) {
      if (lVar7 == 0) {
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
      }
      else {
        uVar3 = NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
        uVar14 = (undefined2)uVar3;
        uVar15 = (undefined2)((uint)uVar3 >> 0x10);
        uVar3 = NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
        uVar16 = (undefined2)uVar3;
        uVar17 = (undefined2)((uint)uVar3 >> 0x10);
      }
      fVar9 = (float)CONCAT22(uVar15,uVar14);
      if (0.0 <= fVar8) {
        fVar9 = fVar8;
      }
      fVar12 = (float)CONCAT22(uVar17,uVar16);
      if (0.0 <= fVar11) {
        fVar12 = fVar11;
      }
    }
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 4));
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x3c);
    fVar8 = fVar4 + fVar10;
    if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
      fVar8 = fVar4;
      fVar4 = fVar4 + fVar10;
    }
    if ((*(byte *)(param_1 + 0xd8) & 2) != 0) {
      fVar11 = fVar11 + fVar13;
    }
    fVar10 = *pfVar6 - pfVar6[4] * fVar10 * 0.0;
    fVar18 = 1.0 / (float)(uVar1 & 0x3fff);
    fVar13 = pfVar6[1] - pfVar6[5] * fVar13 * 0.0;
    FUN_00965b68(fVar10,fVar13,SUB42(fVar9 * pfVar6[4] + fVar10,0),
                 SUB42(fVar12 * pfVar6[5] + fVar13,0),0,fVar18 * fVar4,
                 SUB42(1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar11,0),
                 SUB42(fVar18 * fVar8,0),param_2,&local_40,0);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f0ed34(long param_1)

{
  FUN_00f0eb64(param_1 + -0xb8);
  return;
}




undefined8 FUN_00f0ed3c(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_00f0ed54(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




void FUN_00f0ed6c(long param_1)

{
  FUN_0199d9a4(*(byte *)(param_1 + 0xed) & 0x1f);
  return;
}




void FUN_00f0ed88(long param_1)

{
  FUN_0199d9a4(*(byte *)(param_1 + 0x35) & 0x1f);
  return;
}




void FUN_00f0eda4(undefined8 *param_1)

{
  FUN_00f0e4a8();
  *param_1 = &PTR_FUN_02826898;
  param_1[0x17] = &PTR_FUN_028269f8;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return;
}




void FUN_00f0ede0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar2 = FUN_00965ecc(param_1);
    local_40 = *(undefined2 *)(param_1 + 0xe8);
    local_3e = *(undefined1 *)(param_1 + 0xea);
    fVar3 = (float)NEON_fminnm((int)(*(float *)(lVar2 + 0x18) * 255.0),0x437f0000);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    local_3d = (undefined1)(int)fVar3;
    if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
      (**(code **)(param_1 + 0xf0))
                (param_2,lVar2,param_1 + 0xd0,&local_40,*(undefined8 *)(param_1 + 0xf8));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0ee98(long param_1)

{
  FUN_00f0ede0(param_1 + -0xb8);
  return;
}




void FUN_00f0eea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0eea8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f0e4a8();
  *param_1 = &PTR_FUN_02826a40;
  param_1[0x17] = &PTR_FUN_02826ba0;
  uVar1 = DAT_03218f08;
  param_1[0x20] = 0x3f80000000000000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x1e] = uVar1;
  param_1[0x21] = _DAT_03218ef8;
  uVar1 = DAT_03218f00;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x22] = uVar1;
  return;
}




void FUN_00f0ef20(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  *(float *)(param_2 + 0x118) = param_1;
  fVar1 = sinf(param_1);
  fVar2 = cosf(param_1);
  *(float *)(param_2 + 0xf8) = fVar2;
  *(float *)(param_2 + 0xfc) = fVar1;
  *(float *)(param_2 + 0x100) = -fVar1;
  *(float *)(param_2 + 0x104) = fVar2;
  FUN_0091ada4(param_2);
  return;
}




void FUN_00f0ef70(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xf0) = param_1;
  *(undefined4 *)(param_3 + 0xf4) = param_2;
  FUN_0091ada4();
  return;
}




void FUN_00f0ef78(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  bool bVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  lVar7 = tpidr_el0;
  lVar10 = *(long *)(lVar7 + 0x28);
  if (*(long *)(param_1 + 0xe0) != 0) {
    pfVar9 = (float *)FUN_00965ecc(param_1);
    lVar11 = *(long *)(param_1 + 0xe0);
    bVar2 = *(byte *)(param_1 + 0xd8);
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x3c);
    fVar23 = (float)(uVar1 & 0x3fff);
    fVar13 = (float)*(ushort *)(lVar11 + 4) / fVar23;
    fVar23 = (float)((uint)*(ushort *)(lVar11 + 8) + (uint)*(ushort *)(lVar11 + 4)) / fVar23;
    fVar24 = (float)(uVar1 >> 0xe & 0x3fff);
    fVar15 = 1.0 - (float)(uint)*(ushort *)(lVar11 + 6) / fVar24;
    fVar19 = 1.0 - (float)((uint)*(ushort *)(lVar11 + 10) + (uint)*(ushort *)(lVar11 + 6)) / fVar24;
    fVar24 = fVar15;
    fVar14 = (float)FUN_00f0e700(param_1);
    fVar17 = *pfVar9;
    fVar20 = pfVar9[1];
    fVar25 = fVar14 * pfVar9[4] * *(float *)(param_1 + 0xf0) + fVar17;
    fVar26 = fVar24 * pfVar9[5] * *(float *)(param_1 + 0xf4) + fVar20;
    fVar14 = (fVar14 * pfVar9[4] + fVar17) - fVar25;
    fVar16 = (fVar24 * pfVar9[5] + fVar20) - fVar26;
    fVar27 = (fVar17 - fVar25) * *(float *)(param_1 + 0xf8);
    fVar18 = (fVar17 - fVar25) * *(float *)(param_1 + 0xfc);
    fVar29 = (fVar20 - fVar26) * *(float *)(param_1 + 0x100);
    fVar21 = (fVar20 - fVar26) * *(float *)(param_1 + 0x104);
    fVar31 = fVar14 * *(float *)(param_1 + 0xf8);
    fVar14 = fVar14 * *(float *)(param_1 + 0xfc);
    fVar32 = *(float *)(param_1 + 0x100) * fVar16;
    fVar16 = *(float *)(param_1 + 0x104) * fVar16;
    fVar30 = fVar25 + fVar31 + fVar29;
    fVar22 = fVar26 + fVar14 + fVar21;
    fVar28 = fVar25 + fVar27 + fVar32;
    fVar20 = fVar26 + fVar18 + fVar16;
    uVar3 = *(undefined1 *)(param_1 + 0xe8);
    pfVar12 = (float *)*param_2;
    uVar4 = *(undefined1 *)(param_1 + 0xe9);
    uVar5 = *(undefined1 *)(param_1 + 0xea);
    fVar17 = (float)NEON_fminnm((int)(pfVar9[6] * 255.0),0x437f0000);
    fVar24 = fVar23;
    if ((bVar2 & 1) == 0) {
      fVar24 = fVar13;
      fVar13 = fVar23;
    }
    bVar8 = (bVar2 & 2) == 0;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    fVar23 = fVar19;
    if (bVar8) {
      fVar23 = fVar15;
    }
    *pfVar12 = fVar25 + fVar27 + fVar29;
    pfVar12[1] = fVar26 + fVar18 + fVar21;
    pfVar12[2] = 0.0;
    *(undefined1 *)(pfVar12 + 3) = uVar3;
    *(undefined1 *)((long)pfVar12 + 0xd) = uVar4;
    *(undefined1 *)((long)pfVar12 + 0xe) = uVar5;
    pfVar12[4] = fVar24;
    pfVar12[5] = fVar23;
    uVar6 = (undefined1)(int)fVar17;
    *(undefined1 *)((long)pfVar12 + 0xf) = uVar6;
    lVar11 = *param_2;
    if (bVar8) {
      fVar15 = fVar19;
    }
    *param_2 = lVar11 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar11 + 0x18) = fVar28;
    *(float *)(lVar11 + 0x1c) = fVar20;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined1 *)(lVar11 + 0x24) = uVar3;
    *(undefined1 *)(lVar11 + 0x25) = uVar4;
    *(undefined1 *)(lVar11 + 0x26) = uVar5;
    *(undefined1 *)(lVar11 + 0x27) = uVar6;
    *(float *)(lVar11 + 0x28) = fVar24;
    *(float *)(lVar11 + 0x2c) = fVar15;
    lVar11 = *param_2;
    *param_2 = lVar11 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar11 + 0x18) = fVar30;
    *(float *)(lVar11 + 0x1c) = fVar22;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined1 *)(lVar11 + 0x24) = uVar3;
    *(undefined1 *)(lVar11 + 0x25) = uVar4;
    *(undefined1 *)(lVar11 + 0x26) = uVar5;
    *(undefined1 *)(lVar11 + 0x27) = uVar6;
    *(float *)(lVar11 + 0x28) = fVar13;
    *(float *)(lVar11 + 0x2c) = fVar23;
    lVar11 = *param_2;
    *param_2 = lVar11 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined1 *)(lVar11 + 0x24) = uVar3;
    *(undefined1 *)(lVar11 + 0x25) = uVar4;
    *(undefined1 *)(lVar11 + 0x26) = uVar5;
    *(undefined1 *)(lVar11 + 0x27) = uVar6;
    *(float *)(lVar11 + 0x28) = fVar24;
    *(float *)(lVar11 + 0x2c) = fVar15;
    *(ulong *)(lVar11 + 0x18) = CONCAT44(fVar20,fVar28);
    lVar11 = *param_2;
    *param_2 = lVar11 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined1 *)(lVar11 + 0x24) = uVar3;
    *(undefined1 *)(lVar11 + 0x25) = uVar4;
    *(undefined1 *)(lVar11 + 0x26) = uVar5;
    *(undefined1 *)(lVar11 + 0x27) = uVar6;
    *(float *)(lVar11 + 0x28) = fVar13;
    *(float *)(lVar11 + 0x2c) = fVar15;
    *(ulong *)(lVar11 + 0x18) = CONCAT44(fVar26 + fVar14 + fVar16,fVar25 + fVar31 + fVar32);
    lVar11 = *param_2;
    *param_2 = lVar11 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined1 *)(lVar11 + 0x24) = uVar3;
    *(undefined1 *)(lVar11 + 0x25) = uVar4;
    *(undefined1 *)(lVar11 + 0x26) = uVar5;
    *(undefined1 *)(lVar11 + 0x27) = uVar6;
    *(float *)(lVar11 + 0x28) = fVar13;
    *(float *)(lVar11 + 0x2c) = fVar23;
    *(ulong *)(lVar11 + 0x18) = CONCAT44(fVar22,fVar30);
    *param_2 = *param_2 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  if (*(long *)(lVar7 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

