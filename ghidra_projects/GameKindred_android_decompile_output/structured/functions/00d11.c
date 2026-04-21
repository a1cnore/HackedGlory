// functions/00d11 — 52 functions
#include "libGameKindred.h"




void FUN_00d11040(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d11048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}




ulong FUN_00d1104c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 == 2) {
    uVar2 = 1;
  }
  else {
    if (iVar1 == 1) {
      uVar2 = FUN_00d11120(param_1);
      return uVar2;
    }
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_1 + 0x24) = 1;
      FUN_00d10f30(param_1);
      uVar2 = (**(code **)(*param_1 + 0xd8))(param_1);
      uVar3 = 2;
      if ((uVar2 & 1) != 0) {
        uVar3 = 3;
      }
      uVar2 = (ulong)uVar3;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}




undefined4 FUN_00d110cc(long *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (*(int *)((long)param_1 + 0x24) != 1) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    FUN_00d10f30(param_1);
  }
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1);
  uVar2 = 2;
  if ((uVar1 & 1) != 0) {
    uVar2 = 3;
  }
  return uVar2;
}




undefined4 FUN_00d11120(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d25570(param_2);
  FUN_00d55794(lVar3,auStack_58,0);
  uVar4 = (**(code **)(*param_1 + 0xd8))(param_1);
  if ((uVar4 & 1) == 0) {
    uVar5 = 2;
    goto LAB_00d11314;
  }
  uVar4 = (**(code **)(*param_1 + 0x80))(param_1,auStack_58);
  if ((uVar4 & 1) != 0) {
    uVar5 = 2;
    if (*(int *)((long)param_1 + 0x24) != 2) {
      *(undefined4 *)((long)param_1 + 0x24) = 2;
      (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3);
    }
    goto LAB_00d11314;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3);
  uVar4 = (**(code **)(*param_1 + 0x88))(param_1,auStack_58);
  if ((uVar4 & 1) != 0) {
    (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_3);
  }
  uVar4 = (**(code **)(*param_1 + 0xe0))(param_1);
  if ((uVar4 & 1) != 0) {
    *(float *)((long)param_1 + 0x2c) = *(float *)((long)param_1 + 0x2c) - *(float *)(param_2 + 0x6c)
    ;
  }
  uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
  if (((uVar1 == 0x1f) || (2 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
     ((*(byte *)(lVar3 + 0x2f8) >> 1 & 1) == 0)) {
    if ((uVar1 == 0x1f) || (*(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) != 2)) {
      pcVar6 = *(code **)(*param_1 + 0xd0);
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0xe0))(param_1);
      if (((uVar4 & 1) == 0) || (0.0 < *(float *)((long)param_1 + 0x2c))) goto LAB_00d112f8;
      pcVar6 = *(code **)(*param_1 + 200);
    }
    (*pcVar6)(param_1,param_2,param_3);
    uVar4 = (**(code **)(*param_1 + 0xd8))(param_1);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*param_1 + 0x98))(param_1,param_2);
    }
  }
LAB_00d112f8:
  uVar4 = (**(code **)(*param_1 + 0xd8))(param_1);
  uVar5 = 2;
  if ((uVar4 & 1) != 0) {
    uVar5 = 3;
  }
LAB_00d11314:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d11344(void)

{
  return 1;
}




void FUN_00d1134c(long param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




void FUN_00d11354(long param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




bool FUN_00d1135c(undefined1 param_1 [16],float param_2,float param_3,long *param_4,float *param_5)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_4 + 0x78))();
  return (*param_5 - fVar1) * (*param_5 - fVar1) + (param_5[1] - param_2) * (param_5[1] - param_2) +
         (param_5[2] - param_3) * (param_5[2] - param_3) < 0.0625;
}




bool FUN_00d113bc(undefined1 param_1 [16],float param_2,float param_3,long *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)(**(code **)(*param_4 + 0x78))();
  fVar4 = *param_5;
  fVar5 = param_5[1];
  fVar6 = param_5[2];
  fVar2 = (float)(**(code **)(*param_4 + 0x90))(param_4);
  fVar3 = (float)(**(code **)(*param_4 + 0x90))(param_4);
  return (fVar4 - fVar1) * (fVar4 - fVar1) + (fVar5 - param_2) * (fVar5 - param_2) +
         (fVar6 - param_3) * (fVar6 - param_3) < fVar2 * fVar3;
}




undefined1  [16] FUN_00d11448(void)

{
  return ZEXT816(0x3f800000);
}




void FUN_00d11450(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
                 undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d25570(param_5);
  local_48 = (**(code **)(*param_4 + 0x78))(param_4);
  uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
  uStack_44 = param_2;
  local_40 = param_3;
  if (((uVar1 == 0x1f) || (2 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
     ((*(byte *)(lVar3 + 0x2f8) >> 1 & 1) == 0)) {
    FUN_00d4c8d4(&DAT_02bebbe8,*(undefined4 *)(lVar3 + 0x260));
    FUN_00cb6ef4(lVar3,&local_48);
    FUN_00d2568c(param_5,&local_48);
    *(int *)((long)param_4 + 0x2c) = (int)param_4[5];
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d11528(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[6] = param_2;
  param_1[7] = param_3;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_028131d8;
  param_1[5] = 0x40400000;
  *(undefined4 *)((long)param_1 + 0x4c) = DAT_03218f38;
  *(undefined8 *)((long)param_1 + 0x44) = DAT_03218f30;
  return;
}




void FUN_00d11598(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}




undefined4 FUN_00d115a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}




void FUN_00d115ac(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(param_1 + 0x30))(param_2,*(undefined8 *)(param_1 + 0x38),param_1 + 0x44);
  *(byte *)(param_1 + 0x40) = bVar1 & 1;
  return;
}




void FUN_00d115e4(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(param_1 + 0x30))(param_2,*(undefined8 *)(param_1 + 0x38),param_1 + 0x44);
  *(byte *)(param_1 + 0x40) = bVar1 & 1;
  return;
}




void FUN_00d1161c(void)

{
  return;
}




void FUN_00d11620(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_028132d8;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  param_1[6] = DAT_03218f30;
  return;
}




undefined4 FUN_00d11678(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void thunk_FUN_00d11688(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,&fStack_68,0);
  if (*(int *)(param_2 + 0x378) != 0) {
    uVar5 = 0;
    pfVar4 = (float *)(param_2 + 0x288);
    do {
      if (((((uint)pfVar4[0xb] & 1) != 0) &&
          (uVar3 = FUN_00e0b8e8(param_2,pfVar4,0), (uVar3 & 1) == 0)) &&
         (fVar6 = fStack_64 - (float)*(undefined8 *)(pfVar4 + 1),
         fVar7 = fStack_60 - (float)((ulong)*(undefined8 *)(pfVar4 + 1) >> 0x20),
         9.0 < (fStack_68 - *pfVar4) * (fStack_68 - *pfVar4) + fVar6 * fVar6 + fVar7 * fVar7))
      goto LAB_00d117b8;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 0x10;
    } while (uVar5 < *(uint *)(param_2 + 0x378));
  }
  if (*(long *)(param_2 + 0x14b8) == 0) {
LAB_00d117dc:
    if (*(long *)(param_2 + 0x1478) != 0) {
      if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x1488);
        fVar6 = *(float *)(param_2 + 0x1490);
        goto LAB_00d11800;
      }
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
    *(float *)(param_1 + 0x38) = fStack_60;
    *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_64,fStack_68);
  }
  else {
    if (*(int *)(param_2 + 0x14c0) != *(int *)(*(long *)(param_2 + 0x14b8) + 8)) {
      *(undefined8 *)(param_2 + 0x14b8) = 0;
      *(undefined4 *)(param_2 + 0x14c0) = DAT_03214ce8;
      goto LAB_00d117dc;
    }
    pfVar4 = (float *)(param_2 + 0x14c8);
    uVar5 = FUN_00e0b8e8(param_2,pfVar4,0);
    if (((uVar5 & 1) != 0) ||
       (fVar6 = fStack_68 - *(float *)(param_2 + 0x14c8),
       fVar7 = fStack_64 - (float)*(undefined8 *)(param_2 + 0x14cc),
       fVar8 = fStack_60 - (float)((ulong)*(undefined8 *)(param_2 + 0x14cc) >> 0x20),
       fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 <= 9.0)) goto LAB_00d117dc;
LAB_00d117b8:
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)pfVar4;
    fVar6 = pfVar4[2];
LAB_00d11800:
    *(float *)(param_1 + 0x38) = fVar6;
    uStack_88 = 0x4000000040000000;
    uStack_80 = 0x40000000;
    uVar2 = FUN_00da2eb4(uVar2);
    uVar5 = FUN_00ef00a0(uVar2,(undefined8 *)(param_1 + 0x30),&uStack_78,&uStack_88);
    if ((uVar5 & 1) == 0) {
      *(float *)(param_1 + 0x38) = fStack_60;
      uStack_78 = CONCAT44(fStack_64,fStack_68);
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = uStack_70;
    }
    *(undefined8 *)(param_1 + 0x30) = uStack_78;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d11688(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,&local_68,0);
  if (*(int *)(param_2 + 0x378) != 0) {
    uVar5 = 0;
    pfVar4 = (float *)(param_2 + 0x288);
    do {
      if (((((uint)pfVar4[0xb] & 1) != 0) &&
          (uVar3 = FUN_00e0b8e8(param_2,pfVar4,0), (uVar3 & 1) == 0)) &&
         (fVar6 = fStack_64 - (float)*(undefined8 *)(pfVar4 + 1),
         fVar7 = fStack_60 - (float)((ulong)*(undefined8 *)(pfVar4 + 1) >> 0x20),
         9.0 < (local_68 - *pfVar4) * (local_68 - *pfVar4) + fVar6 * fVar6 + fVar7 * fVar7))
      goto LAB_00d117b8;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 0x10;
    } while (uVar5 < *(uint *)(param_2 + 0x378));
  }
  if (*(long *)(param_2 + 0x14b8) == 0) {
LAB_00d117dc:
    if (*(long *)(param_2 + 0x1478) != 0) {
      if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x1488);
        fVar6 = *(float *)(param_2 + 0x1490);
        goto LAB_00d11800;
      }
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
    *(float *)(param_1 + 0x38) = fStack_60;
    *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_64,local_68);
  }
  else {
    if (*(int *)(param_2 + 0x14c0) != *(int *)(*(long *)(param_2 + 0x14b8) + 8)) {
      *(undefined8 *)(param_2 + 0x14b8) = 0;
      *(undefined4 *)(param_2 + 0x14c0) = DAT_03214ce8;
      goto LAB_00d117dc;
    }
    pfVar4 = (float *)(param_2 + 0x14c8);
    uVar5 = FUN_00e0b8e8(param_2,pfVar4,0);
    if (((uVar5 & 1) != 0) ||
       (fVar6 = local_68 - *(float *)(param_2 + 0x14c8),
       fVar7 = fStack_64 - (float)*(undefined8 *)(param_2 + 0x14cc),
       fVar8 = fStack_60 - (float)((ulong)*(undefined8 *)(param_2 + 0x14cc) >> 0x20),
       fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 <= 9.0)) goto LAB_00d117dc;
LAB_00d117b8:
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)pfVar4;
    fVar6 = pfVar4[2];
LAB_00d11800:
    *(float *)(param_1 + 0x38) = fVar6;
    local_88 = 0x4000000040000000;
    local_80 = 0x40000000;
    uVar2 = FUN_00da2eb4(uVar2);
    uVar5 = FUN_00ef00a0(uVar2,(undefined8 *)(param_1 + 0x30),&local_78,&local_88);
    if ((uVar5 & 1) == 0) {
      *(float *)(param_1 + 0x38) = fStack_60;
      local_78 = CONCAT44(fStack_64,local_68);
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = local_70;
    }
    *(undefined8 *)(param_1 + 0x30) = local_78;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00d11688(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,&fStack_68,0);
  if (*(int *)(param_2 + 0x378) != 0) {
    uVar5 = 0;
    pfVar4 = (float *)(param_2 + 0x288);
    do {
      if (((((uint)pfVar4[0xb] & 1) != 0) &&
          (uVar3 = FUN_00e0b8e8(param_2,pfVar4,0), (uVar3 & 1) == 0)) &&
         (fVar6 = fStack_64 - (float)*(undefined8 *)(pfVar4 + 1),
         fVar7 = fStack_60 - (float)((ulong)*(undefined8 *)(pfVar4 + 1) >> 0x20),
         9.0 < (fStack_68 - *pfVar4) * (fStack_68 - *pfVar4) + fVar6 * fVar6 + fVar7 * fVar7))
      goto LAB_00d117b8;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 0x10;
    } while (uVar5 < *(uint *)(param_2 + 0x378));
  }
  if (*(long *)(param_2 + 0x14b8) == 0) {
LAB_00d117dc:
    if (*(long *)(param_2 + 0x1478) != 0) {
      if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x1488);
        fVar6 = *(float *)(param_2 + 0x1490);
        goto LAB_00d11800;
      }
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
    *(float *)(param_1 + 0x38) = fStack_60;
    *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_64,fStack_68);
  }
  else {
    if (*(int *)(param_2 + 0x14c0) != *(int *)(*(long *)(param_2 + 0x14b8) + 8)) {
      *(undefined8 *)(param_2 + 0x14b8) = 0;
      *(undefined4 *)(param_2 + 0x14c0) = DAT_03214ce8;
      goto LAB_00d117dc;
    }
    pfVar4 = (float *)(param_2 + 0x14c8);
    uVar5 = FUN_00e0b8e8(param_2,pfVar4,0);
    if (((uVar5 & 1) != 0) ||
       (fVar6 = fStack_68 - *(float *)(param_2 + 0x14c8),
       fVar7 = fStack_64 - (float)*(undefined8 *)(param_2 + 0x14cc),
       fVar8 = fStack_60 - (float)((ulong)*(undefined8 *)(param_2 + 0x14cc) >> 0x20),
       fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 <= 9.0)) goto LAB_00d117dc;
LAB_00d117b8:
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)pfVar4;
    fVar6 = pfVar4[2];
LAB_00d11800:
    *(float *)(param_1 + 0x38) = fVar6;
    uStack_88 = 0x4000000040000000;
    uStack_80 = 0x40000000;
    uVar2 = FUN_00da2eb4(uVar2);
    uVar5 = FUN_00ef00a0(uVar2,(undefined8 *)(param_1 + 0x30),&uStack_78,&uStack_88);
    if ((uVar5 & 1) == 0) {
      *(float *)(param_1 + 0x38) = fStack_60;
      uStack_78 = CONCAT44(fStack_64,fStack_68);
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = uStack_70;
    }
    *(undefined8 *)(param_1 + 0x30) = uStack_78;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d118ac(void)

{
  return;
}




void thunk_FUN_00d11688(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,&fStack_68,0);
  if (*(int *)(param_2 + 0x378) != 0) {
    uVar5 = 0;
    pfVar4 = (float *)(param_2 + 0x288);
    do {
      if (((((uint)pfVar4[0xb] & 1) != 0) &&
          (uVar3 = FUN_00e0b8e8(param_2,pfVar4,0), (uVar3 & 1) == 0)) &&
         (fVar6 = fStack_64 - (float)*(undefined8 *)(pfVar4 + 1),
         fVar7 = fStack_60 - (float)((ulong)*(undefined8 *)(pfVar4 + 1) >> 0x20),
         9.0 < (fStack_68 - *pfVar4) * (fStack_68 - *pfVar4) + fVar6 * fVar6 + fVar7 * fVar7))
      goto LAB_00d117b8;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 0x10;
    } while (uVar5 < *(uint *)(param_2 + 0x378));
  }
  if (*(long *)(param_2 + 0x14b8) == 0) {
LAB_00d117dc:
    if (*(long *)(param_2 + 0x1478) != 0) {
      if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x1488);
        fVar6 = *(float *)(param_2 + 0x1490);
        goto LAB_00d11800;
      }
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
    *(float *)(param_1 + 0x38) = fStack_60;
    *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_64,fStack_68);
  }
  else {
    if (*(int *)(param_2 + 0x14c0) != *(int *)(*(long *)(param_2 + 0x14b8) + 8)) {
      *(undefined8 *)(param_2 + 0x14b8) = 0;
      *(undefined4 *)(param_2 + 0x14c0) = DAT_03214ce8;
      goto LAB_00d117dc;
    }
    pfVar4 = (float *)(param_2 + 0x14c8);
    uVar5 = FUN_00e0b8e8(param_2,pfVar4,0);
    if (((uVar5 & 1) != 0) ||
       (fVar6 = fStack_68 - *(float *)(param_2 + 0x14c8),
       fVar7 = fStack_64 - (float)*(undefined8 *)(param_2 + 0x14cc),
       fVar8 = fStack_60 - (float)((ulong)*(undefined8 *)(param_2 + 0x14cc) >> 0x20),
       fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 <= 9.0)) goto LAB_00d117dc;
LAB_00d117b8:
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)pfVar4;
    fVar6 = pfVar4[2];
LAB_00d11800:
    *(float *)(param_1 + 0x38) = fVar6;
    uStack_88 = 0x4000000040000000;
    uStack_80 = 0x40000000;
    uVar2 = FUN_00da2eb4(uVar2);
    uVar5 = FUN_00ef00a0(uVar2,(undefined8 *)(param_1 + 0x30),&uStack_78,&uStack_88);
    if ((uVar5 & 1) == 0) {
      *(float *)(param_1 + 0x38) = fStack_60;
      uStack_78 = CONCAT44(fStack_64,fStack_68);
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = uStack_70;
    }
    *(undefined8 *)(param_1 + 0x30) = uStack_78;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d118b4(void)

{
  return;
}




void FUN_00d118b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_028133d8;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[6] = uVar1;
  return;
}




undefined4 FUN_00d11914(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




undefined1 FUN_00d11920(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}




void thunk_FUN_00d1192c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar3 = FUN_00d25570(param_2);
  FUN_00d55794(uVar3,&fStack_48,0);
  if (*(uint *)(param_2 + 0x1020) != 0) {
    fVar8 = 1e+08;
    uVar6 = 0;
    plVar7 = (long *)(param_2 + 0xd20);
    plVar5 = (long *)0x0;
    do {
      uVar6 = uVar6 + 1;
      fVar9 = fStack_44 - (float)*(undefined8 *)((long)plVar7 + 0x14);
      fVar10 = fStack_40 - (float)((ulong)*(undefined8 *)((long)plVar7 + 0x14) >> 0x20);
      fVar9 = (fStack_48 - *(float *)(plVar7 + 2)) * (fStack_48 - *(float *)(plVar7 + 2)) +
              fVar9 * fVar9 + fVar10 * fVar10;
      plVar1 = plVar7;
      if (fVar8 <= fVar9) {
        plVar1 = plVar5;
        fVar9 = fVar8;
      }
      fVar8 = fVar9;
      plVar7 = plVar7 + 8;
      plVar5 = plVar1;
    } while (uVar6 < *(uint *)(param_2 + 0x1020));
    if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
      if ((int)plVar1[1] == *(int *)(*plVar1 + 8)) {
        plVar7 = (long *)(param_1 + 0x30);
        *plVar7 = plVar1[2];
        *(int *)(param_1 + 0x38) = (int)plVar1[3];
        FUN_00d082b0(0x40c00000,uVar3,plVar7,&uStack_60);
        uStack_80 = NEON_fmov(0x40400000,4);
        uStack_78 = 0x40400000;
        uVar3 = FUN_00da2eb4(uVar3);
        uStack_90 = uStack_60;
        uStack_8c = 0;
        uStack_88 = uStack_5c;
        uVar6 = FUN_00ef00a0(uVar3,&uStack_90,&lStack_70,&uStack_80);
        bVar4 = (uVar6 & 1) == 0;
        if (bVar4) {
          *(float *)(param_1 + 0x38) = fStack_40;
          *plVar7 = CONCAT44(fStack_44,fStack_48);
        }
        else {
          *(undefined4 *)(param_1 + 0x38) = uStack_68;
          *plVar7 = lStack_70;
        }
        bVar4 = !bVar4;
        *(bool *)(param_1 + 0x3c) = bVar4;
        goto LAB_00d11a94;
      }
      *plVar1 = 0;
      *(undefined4 *)(plVar1 + 1) = DAT_03214ce8;
    }
  }
  bVar4 = false;
  *(float *)(param_1 + 0x38) = fStack_40;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_44,fStack_48);
LAB_00d11a94:
  if (*(long *)(lVar2 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}




void FUN_00d1192c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  float local_48;
  float fStack_44;
  float fStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar3 = FUN_00d25570(param_2);
  FUN_00d55794(uVar3,&local_48,0);
  if (*(uint *)(param_2 + 0x1020) != 0) {
    fVar8 = 1e+08;
    uVar6 = 0;
    plVar7 = (long *)(param_2 + 0xd20);
    plVar5 = (long *)0x0;
    do {
      uVar6 = uVar6 + 1;
      fVar9 = fStack_44 - (float)*(undefined8 *)((long)plVar7 + 0x14);
      fVar10 = fStack_40 - (float)((ulong)*(undefined8 *)((long)plVar7 + 0x14) >> 0x20);
      fVar9 = (local_48 - *(float *)(plVar7 + 2)) * (local_48 - *(float *)(plVar7 + 2)) +
              fVar9 * fVar9 + fVar10 * fVar10;
      plVar1 = plVar7;
      if (fVar8 <= fVar9) {
        plVar1 = plVar5;
        fVar9 = fVar8;
      }
      fVar8 = fVar9;
      plVar7 = plVar7 + 8;
      plVar5 = plVar1;
    } while (uVar6 < *(uint *)(param_2 + 0x1020));
    if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
      if ((int)plVar1[1] == *(int *)(*plVar1 + 8)) {
        plVar7 = (long *)(param_1 + 0x30);
        *plVar7 = plVar1[2];
        *(int *)(param_1 + 0x38) = (int)plVar1[3];
        FUN_00d082b0(0x40c00000,uVar3,plVar7,&local_60);
        local_80 = NEON_fmov(0x40400000,4);
        local_78 = 0x40400000;
        uVar3 = FUN_00da2eb4(uVar3);
        local_90 = local_60;
        uStack_8c = 0;
        local_88 = uStack_5c;
        uVar6 = FUN_00ef00a0(uVar3,&local_90,&local_70,&local_80);
        bVar4 = (uVar6 & 1) == 0;
        if (bVar4) {
          *(float *)(param_1 + 0x38) = fStack_40;
          *plVar7 = CONCAT44(fStack_44,local_48);
        }
        else {
          *(undefined4 *)(param_1 + 0x38) = local_68;
          *plVar7 = local_70;
        }
        bVar4 = !bVar4;
        *(bool *)(param_1 + 0x3c) = bVar4;
        goto LAB_00d11a94;
      }
      *plVar1 = 0;
      *(undefined4 *)(plVar1 + 1) = DAT_03214ce8;
    }
  }
  bVar4 = false;
  *(float *)(param_1 + 0x38) = fStack_40;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_44,local_48);
LAB_00d11a94:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}




void FUN_00d11ae0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d25570(param_2);
  FUN_00cb6ef0();
  FUN_00d1192c(param_1,param_2);
  return;
}




void FUN_00d11b14(void)

{
  return;
}




void thunk_FUN_00d1192c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar3 = FUN_00d25570(param_2);
  FUN_00d55794(uVar3,&fStack_48,0);
  if (*(uint *)(param_2 + 0x1020) != 0) {
    fVar8 = 1e+08;
    uVar6 = 0;
    plVar7 = (long *)(param_2 + 0xd20);
    plVar5 = (long *)0x0;
    do {
      uVar6 = uVar6 + 1;
      fVar9 = fStack_44 - (float)*(undefined8 *)((long)plVar7 + 0x14);
      fVar10 = fStack_40 - (float)((ulong)*(undefined8 *)((long)plVar7 + 0x14) >> 0x20);
      fVar9 = (fStack_48 - *(float *)(plVar7 + 2)) * (fStack_48 - *(float *)(plVar7 + 2)) +
              fVar9 * fVar9 + fVar10 * fVar10;
      plVar1 = plVar7;
      if (fVar8 <= fVar9) {
        plVar1 = plVar5;
        fVar9 = fVar8;
      }
      fVar8 = fVar9;
      plVar7 = plVar7 + 8;
      plVar5 = plVar1;
    } while (uVar6 < *(uint *)(param_2 + 0x1020));
    if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
      if ((int)plVar1[1] == *(int *)(*plVar1 + 8)) {
        plVar7 = (long *)(param_1 + 0x30);
        *plVar7 = plVar1[2];
        *(int *)(param_1 + 0x38) = (int)plVar1[3];
        FUN_00d082b0(0x40c00000,uVar3,plVar7,&uStack_60);
        uStack_80 = NEON_fmov(0x40400000,4);
        uStack_78 = 0x40400000;
        uVar3 = FUN_00da2eb4(uVar3);
        uStack_90 = uStack_60;
        uStack_8c = 0;
        uStack_88 = uStack_5c;
        uVar6 = FUN_00ef00a0(uVar3,&uStack_90,&lStack_70,&uStack_80);
        bVar4 = (uVar6 & 1) == 0;
        if (bVar4) {
          *(float *)(param_1 + 0x38) = fStack_40;
          *plVar7 = CONCAT44(fStack_44,fStack_48);
        }
        else {
          *(undefined4 *)(param_1 + 0x38) = uStack_68;
          *plVar7 = lStack_70;
        }
        bVar4 = !bVar4;
        *(bool *)(param_1 + 0x3c) = bVar4;
        goto LAB_00d11a94;
      }
      *plVar1 = 0;
      *(undefined4 *)(plVar1 + 1) = DAT_03214ce8;
    }
  }
  bVar4 = false;
  *(float *)(param_1 + 0x38) = fStack_40;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_44,fStack_48);
LAB_00d11a94:
  if (*(long *)(lVar2 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}




void FUN_00d11b1c(void)

{
  return;
}




void FUN_00d11b20(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_028134d8;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  param_1[6] = DAT_03218f30;
  return;
}




undefined4 FUN_00d11b78(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void thunk_FUN_00d11b88(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_bc;
  undefined1 auStack_b8 [8];
  float fStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  long lStack_78;
  
  lVar1 = tpidr_el0;
  lStack_78 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  fStack_80 = *(float *)(param_2 + 0x1444);
  fStack_88 = (float)*(undefined8 *)(param_2 + 0x143c);
  fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x143c) >> 0x20);
  FUN_00d55794(lVar2,&fStack_88,0);
  if (*(int *)(param_2 + 0x270) != 0) {
    fVar6 = *(float *)(lVar2 + 0x2e8);
    uVar4 = 0;
    pfVar5 = (float *)(param_2 + 0x80);
    fVar8 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
    fVar11 = *(float *)(*(long *)(lVar2 + 0x38) + 0x68);
    do {
      if ((*(byte *)(pfVar5 + 0xb) >> 1 & 1) != 0) {
        fVar9 = fStack_84 - (float)*(undefined8 *)(pfVar5 + 1);
        fVar10 = fStack_80 - (float)((ulong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
        fVar10 = (fStack_88 - *pfVar5) * (fStack_88 - *pfVar5) + fVar9 * fVar9 + fVar10 * fVar10;
        fVar9 = SQRT(fVar10);
        if (NAN(fVar9)) {
          fVar9 = sqrtf(fVar10);
        }
        fVar9 = fVar9 - (fVar11 * (fVar8 + fVar6)) / fVar8;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar9 = (pfVar5[9] + 0.25) - fVar9;
        if (0.01 < fVar9) {
          fVar13 = fStack_88 - (float)*(undefined8 *)pfVar5;
          fVar14 = fStack_84 - (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
          fVar12 = fStack_80 - pfVar5[2];
          fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar12 * fVar12;
          if (0.01 < fVar10) {
            fVar7 = SQRT(fVar10);
            if (NAN(fVar7)) {
              fVar7 = sqrtf(fVar10);
            }
            fStack_88 = fStack_88 + (fVar13 / fVar7) * fVar9;
            fStack_84 = fStack_84 + (fVar14 / fVar7) * fVar9;
            fStack_80 = fVar9 * (fVar12 / fVar7) + fStack_80;
          }
        }
      }
      uVar4 = uVar4 + 1;
      pfVar5 = pfVar5 + 0x10;
    } while (uVar4 < *(uint *)(param_2 + 0x270));
  }
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      fStack_88 = fStack_88 + (float)*(undefined8 *)(param_2 + 0x1488);
      fStack_84 = fStack_84 + (float)((ulong)*(undefined8 *)(param_2 + 0x1488) >> 0x20);
      fStack_80 = fStack_80 + *(float *)(param_2 + 0x1490);
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  uStack_a8 = 0x4000000040000000;
  uStack_a0 = 0x40000000;
  uVar3 = FUN_00da2eb4(lVar2);
  uVar4 = FUN_00ef00a0(uVar3,&fStack_88,&uStack_98,&uStack_a8);
  if ((uVar4 & 1) == 0) {
    FUN_00d55794(lVar2,auStack_b8,0);
    uVar3 = FUN_00da2eb4(lVar2);
    FUN_00ef01b8(uVar3,auStack_b8,&fStack_88,&fStack_bc,0,0);
    *(ulong *)(param_1 + 0x30) =
         CONCAT44(auStack_b8._4_4_ + (fStack_84 - auStack_b8._4_4_) * fStack_bc,
                  auStack_b8._0_4_ + (fStack_88 - auStack_b8._0_4_) * fStack_bc);
    *(float *)(param_1 + 0x38) = fStack_b0 + fStack_bc * (fStack_80 - fStack_b0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = uStack_90;
    *(undefined8 *)(param_1 + 0x30) = uStack_98;
  }
  if (*(long *)(lVar1 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d11b88(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_bc;
  undefined1 local_b8 [8];
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  local_80 = *(float *)(param_2 + 0x1444);
  local_88 = (float)*(undefined8 *)(param_2 + 0x143c);
  fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x143c) >> 0x20);
  FUN_00d55794(lVar2,&local_88,0);
  if (*(int *)(param_2 + 0x270) != 0) {
    fVar6 = *(float *)(lVar2 + 0x2e8);
    uVar4 = 0;
    pfVar5 = (float *)(param_2 + 0x80);
    fVar8 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
    fVar11 = *(float *)(*(long *)(lVar2 + 0x38) + 0x68);
    do {
      if ((*(byte *)(pfVar5 + 0xb) >> 1 & 1) != 0) {
        fVar9 = fStack_84 - (float)*(undefined8 *)(pfVar5 + 1);
        fVar10 = local_80 - (float)((ulong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
        fVar10 = (local_88 - *pfVar5) * (local_88 - *pfVar5) + fVar9 * fVar9 + fVar10 * fVar10;
        fVar9 = SQRT(fVar10);
        if (NAN(fVar9)) {
          fVar9 = sqrtf(fVar10);
        }
        fVar9 = fVar9 - (fVar11 * (fVar8 + fVar6)) / fVar8;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar9 = (pfVar5[9] + 0.25) - fVar9;
        if (0.01 < fVar9) {
          fVar13 = local_88 - (float)*(undefined8 *)pfVar5;
          fVar14 = fStack_84 - (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
          fVar12 = local_80 - pfVar5[2];
          fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar12 * fVar12;
          if (0.01 < fVar10) {
            fVar7 = SQRT(fVar10);
            if (NAN(fVar7)) {
              fVar7 = sqrtf(fVar10);
            }
            local_88 = local_88 + (fVar13 / fVar7) * fVar9;
            fStack_84 = fStack_84 + (fVar14 / fVar7) * fVar9;
            local_80 = fVar9 * (fVar12 / fVar7) + local_80;
          }
        }
      }
      uVar4 = uVar4 + 1;
      pfVar5 = pfVar5 + 0x10;
    } while (uVar4 < *(uint *)(param_2 + 0x270));
  }
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      local_88 = local_88 + (float)*(undefined8 *)(param_2 + 0x1488);
      fStack_84 = fStack_84 + (float)((ulong)*(undefined8 *)(param_2 + 0x1488) >> 0x20);
      local_80 = local_80 + *(float *)(param_2 + 0x1490);
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  local_a8 = 0x4000000040000000;
  local_a0 = 0x40000000;
  uVar3 = FUN_00da2eb4(lVar2);
  uVar4 = FUN_00ef00a0(uVar3,&local_88,&local_98,&local_a8);
  if ((uVar4 & 1) == 0) {
    FUN_00d55794(lVar2,local_b8,0);
    uVar3 = FUN_00da2eb4(lVar2);
    FUN_00ef01b8(uVar3,local_b8,&local_88,&local_bc,0,0);
    *(ulong *)(param_1 + 0x30) =
         CONCAT44(local_b8._4_4_ + (fStack_84 - local_b8._4_4_) * local_bc,
                  local_b8._0_4_ + (local_88 - local_b8._0_4_) * local_bc);
    *(float *)(param_1 + 0x38) = local_b0 + local_bc * (local_80 - local_b0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = local_90;
    *(undefined8 *)(param_1 + 0x30) = local_98;
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00d11b88(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_bc;
  undefined1 auStack_b8 [8];
  float fStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  long lStack_78;
  
  lVar1 = tpidr_el0;
  lStack_78 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  fStack_80 = *(float *)(param_2 + 0x1444);
  fStack_88 = (float)*(undefined8 *)(param_2 + 0x143c);
  fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x143c) >> 0x20);
  FUN_00d55794(lVar2,&fStack_88,0);
  if (*(int *)(param_2 + 0x270) != 0) {
    fVar6 = *(float *)(lVar2 + 0x2e8);
    uVar4 = 0;
    pfVar5 = (float *)(param_2 + 0x80);
    fVar8 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
    fVar11 = *(float *)(*(long *)(lVar2 + 0x38) + 0x68);
    do {
      if ((*(byte *)(pfVar5 + 0xb) >> 1 & 1) != 0) {
        fVar9 = fStack_84 - (float)*(undefined8 *)(pfVar5 + 1);
        fVar10 = fStack_80 - (float)((ulong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
        fVar10 = (fStack_88 - *pfVar5) * (fStack_88 - *pfVar5) + fVar9 * fVar9 + fVar10 * fVar10;
        fVar9 = SQRT(fVar10);
        if (NAN(fVar9)) {
          fVar9 = sqrtf(fVar10);
        }
        fVar9 = fVar9 - (fVar11 * (fVar8 + fVar6)) / fVar8;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar9 = (pfVar5[9] + 0.25) - fVar9;
        if (0.01 < fVar9) {
          fVar13 = fStack_88 - (float)*(undefined8 *)pfVar5;
          fVar14 = fStack_84 - (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
          fVar12 = fStack_80 - pfVar5[2];
          fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar12 * fVar12;
          if (0.01 < fVar10) {
            fVar7 = SQRT(fVar10);
            if (NAN(fVar7)) {
              fVar7 = sqrtf(fVar10);
            }
            fStack_88 = fStack_88 + (fVar13 / fVar7) * fVar9;
            fStack_84 = fStack_84 + (fVar14 / fVar7) * fVar9;
            fStack_80 = fVar9 * (fVar12 / fVar7) + fStack_80;
          }
        }
      }
      uVar4 = uVar4 + 1;
      pfVar5 = pfVar5 + 0x10;
    } while (uVar4 < *(uint *)(param_2 + 0x270));
  }
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      fStack_88 = fStack_88 + (float)*(undefined8 *)(param_2 + 0x1488);
      fStack_84 = fStack_84 + (float)((ulong)*(undefined8 *)(param_2 + 0x1488) >> 0x20);
      fStack_80 = fStack_80 + *(float *)(param_2 + 0x1490);
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  uStack_a8 = 0x4000000040000000;
  uStack_a0 = 0x40000000;
  uVar3 = FUN_00da2eb4(lVar2);
  uVar4 = FUN_00ef00a0(uVar3,&fStack_88,&uStack_98,&uStack_a8);
  if ((uVar4 & 1) == 0) {
    FUN_00d55794(lVar2,auStack_b8,0);
    uVar3 = FUN_00da2eb4(lVar2);
    FUN_00ef01b8(uVar3,auStack_b8,&fStack_88,&fStack_bc,0,0);
    *(ulong *)(param_1 + 0x30) =
         CONCAT44(auStack_b8._4_4_ + (fStack_84 - auStack_b8._4_4_) * fStack_bc,
                  auStack_b8._0_4_ + (fStack_88 - auStack_b8._0_4_) * fStack_bc);
    *(float *)(param_1 + 0x38) = fStack_b0 + fStack_bc * (fStack_80 - fStack_b0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = uStack_90;
    *(undefined8 *)(param_1 + 0x30) = uStack_98;
  }
  if (*(long *)(lVar1 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d11e44(void)

{
  return;
}




void thunk_FUN_00d11b88(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_bc;
  undefined1 auStack_b8 [8];
  float fStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  long lStack_78;
  
  lVar1 = tpidr_el0;
  lStack_78 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  fStack_80 = *(float *)(param_2 + 0x1444);
  fStack_88 = (float)*(undefined8 *)(param_2 + 0x143c);
  fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x143c) >> 0x20);
  FUN_00d55794(lVar2,&fStack_88,0);
  if (*(int *)(param_2 + 0x270) != 0) {
    fVar6 = *(float *)(lVar2 + 0x2e8);
    uVar4 = 0;
    pfVar5 = (float *)(param_2 + 0x80);
    fVar8 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
    fVar11 = *(float *)(*(long *)(lVar2 + 0x38) + 0x68);
    do {
      if ((*(byte *)(pfVar5 + 0xb) >> 1 & 1) != 0) {
        fVar9 = fStack_84 - (float)*(undefined8 *)(pfVar5 + 1);
        fVar10 = fStack_80 - (float)((ulong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
        fVar10 = (fStack_88 - *pfVar5) * (fStack_88 - *pfVar5) + fVar9 * fVar9 + fVar10 * fVar10;
        fVar9 = SQRT(fVar10);
        if (NAN(fVar9)) {
          fVar9 = sqrtf(fVar10);
        }
        fVar9 = fVar9 - (fVar11 * (fVar8 + fVar6)) / fVar8;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar9 = (pfVar5[9] + 0.25) - fVar9;
        if (0.01 < fVar9) {
          fVar13 = fStack_88 - (float)*(undefined8 *)pfVar5;
          fVar14 = fStack_84 - (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
          fVar12 = fStack_80 - pfVar5[2];
          fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar12 * fVar12;
          if (0.01 < fVar10) {
            fVar7 = SQRT(fVar10);
            if (NAN(fVar7)) {
              fVar7 = sqrtf(fVar10);
            }
            fStack_88 = fStack_88 + (fVar13 / fVar7) * fVar9;
            fStack_84 = fStack_84 + (fVar14 / fVar7) * fVar9;
            fStack_80 = fVar9 * (fVar12 / fVar7) + fStack_80;
          }
        }
      }
      uVar4 = uVar4 + 1;
      pfVar5 = pfVar5 + 0x10;
    } while (uVar4 < *(uint *)(param_2 + 0x270));
  }
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      fStack_88 = fStack_88 + (float)*(undefined8 *)(param_2 + 0x1488);
      fStack_84 = fStack_84 + (float)((ulong)*(undefined8 *)(param_2 + 0x1488) >> 0x20);
      fStack_80 = fStack_80 + *(float *)(param_2 + 0x1490);
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  uStack_a8 = 0x4000000040000000;
  uStack_a0 = 0x40000000;
  uVar3 = FUN_00da2eb4(lVar2);
  uVar4 = FUN_00ef00a0(uVar3,&fStack_88,&uStack_98,&uStack_a8);
  if ((uVar4 & 1) == 0) {
    FUN_00d55794(lVar2,auStack_b8,0);
    uVar3 = FUN_00da2eb4(lVar2);
    FUN_00ef01b8(uVar3,auStack_b8,&fStack_88,&fStack_bc,0,0);
    *(ulong *)(param_1 + 0x30) =
         CONCAT44(auStack_b8._4_4_ + (fStack_84 - auStack_b8._4_4_) * fStack_bc,
                  auStack_b8._0_4_ + (fStack_88 - auStack_b8._0_4_) * fStack_bc);
    *(float *)(param_1 + 0x38) = fStack_b0 + fStack_bc * (fStack_80 - fStack_b0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = uStack_90;
    *(undefined8 *)(param_1 + 0x30) = uStack_98;
  }
  if (*(long *)(lVar1 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d11e4c(void)

{
  return;
}




void FUN_00d11e50(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_028135d8;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  param_1[6] = DAT_03218f30;
  return;
}




undefined4 FUN_00d11ea8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void thunk_FUN_00d11eb8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,&uStack_48,0);
  if (*(long *)(param_2 + 0x14f8) != 0) {
    if (*(int *)(param_2 + 0x1500) == *(int *)(*(long *)(param_2 + 0x14f8) + 8)) {
      puVar4 = (undefined8 *)(param_1 + 0x30);
      *puVar4 = *(undefined8 *)(param_2 + 0x1508);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1510);
      uStack_68 = 0x4000000040000000;
      uStack_60 = 0x40000000;
      uVar2 = FUN_00da2eb4(uVar2);
      uVar3 = FUN_00ef00a0(uVar2,puVar4,&uStack_58,&uStack_68);
      if ((uVar3 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x38) = uStack_40;
        uStack_58 = uStack_48;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = uStack_50;
      }
      *puVar4 = uStack_58;
      goto LAB_00d11f94;
    }
    *(undefined8 *)(param_2 + 0x14f8) = 0;
    *(undefined4 *)(param_2 + 0x1500) = DAT_03214ce8;
  }
  *(undefined4 *)(param_1 + 0x38) = uStack_40;
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
LAB_00d11f94:
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d11eb8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,&local_48,0);
  if (*(long *)(param_2 + 0x14f8) != 0) {
    if (*(int *)(param_2 + 0x1500) == *(int *)(*(long *)(param_2 + 0x14f8) + 8)) {
      puVar4 = (undefined8 *)(param_1 + 0x30);
      *puVar4 = *(undefined8 *)(param_2 + 0x1508);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1510);
      local_68 = 0x4000000040000000;
      local_60 = 0x40000000;
      uVar2 = FUN_00da2eb4(uVar2);
      uVar3 = FUN_00ef00a0(uVar2,puVar4,&local_58,&local_68);
      if ((uVar3 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x38) = local_40;
        local_58 = local_48;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = local_50;
      }
      *puVar4 = local_58;
      goto LAB_00d11f94;
    }
    *(undefined8 *)(param_2 + 0x14f8) = 0;
    *(undefined4 *)(param_2 + 0x1500) = DAT_03214ce8;
  }
  *(undefined4 *)(param_1 + 0x38) = local_40;
  *(undefined8 *)(param_1 + 0x30) = local_48;
LAB_00d11f94:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d11fbc(undefined8 param_1,undefined8 param_2)

{
  FUN_00d25570(param_2);
  FUN_00cb6ef0();
  FUN_00d11eb8(param_1,param_2);
  return;
}




void FUN_00d11ff0(void)

{
  return;
}




void thunk_FUN_00d11eb8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,&uStack_48,0);
  if (*(long *)(param_2 + 0x14f8) != 0) {
    if (*(int *)(param_2 + 0x1500) == *(int *)(*(long *)(param_2 + 0x14f8) + 8)) {
      puVar4 = (undefined8 *)(param_1 + 0x30);
      *puVar4 = *(undefined8 *)(param_2 + 0x1508);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1510);
      uStack_68 = 0x4000000040000000;
      uStack_60 = 0x40000000;
      uVar2 = FUN_00da2eb4(uVar2);
      uVar3 = FUN_00ef00a0(uVar2,puVar4,&uStack_58,&uStack_68);
      if ((uVar3 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x38) = uStack_40;
        uStack_58 = uStack_48;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = uStack_50;
      }
      *puVar4 = uStack_58;
      goto LAB_00d11f94;
    }
    *(undefined8 *)(param_2 + 0x14f8) = 0;
    *(undefined4 *)(param_2 + 0x1500) = DAT_03214ce8;
  }
  *(undefined4 *)(param_1 + 0x38) = uStack_40;
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
LAB_00d11f94:
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d11ff8(void)

{
  return;
}




void FUN_00d11ffc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_028136d8;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[6] = uVar1;
  return;
}




ulong thunk_FUN_00d1104c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 == 2) {
    uVar2 = 1;
  }
  else {
    if (iVar1 == 1) {
      uVar2 = FUN_00d11120(param_1);
      return uVar2;
    }
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_1 + 0x24) = 1;
      FUN_00d10f30(param_1);
      uVar2 = (**(code **)(*param_1 + 0xd8))(param_1);
      uVar3 = 2;
      if ((uVar2 & 1) != 0) {
        uVar3 = 3;
      }
      uVar2 = (ulong)uVar3;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}

