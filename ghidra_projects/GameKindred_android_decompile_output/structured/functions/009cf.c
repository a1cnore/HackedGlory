// functions/009cf — 23 functions
#include "libGameKindred.h"




void FUN_009cf04c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0xf8;
  uVar2 = FUN_00f0a7e0(lVar1,"white_background");
  *(undefined8 *)(param_1 + 0x628) = uVar2;
  uVar2 = FUN_00f0a7e0(lVar1,"recall_swoop");
  *(undefined8 *)(param_1 + 0x630) = uVar2;
  uVar2 = FUN_00f0a7e0(lVar1,"hud_minimap_timer_circle");
  *(undefined8 *)(param_1 + 0x638) = uVar2;
  uVar2 = FUN_00f0a7e0(lVar1,"hud_minimap_timer_circle_empty");
  *(undefined8 *)(param_1 + 0x640) = uVar2;
  return;
}




void FUN_009cf0bc(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x888) = param_1;
  *(undefined4 *)(param_3 + 0x88c) = param_2;
  FUN_009cf0c8();
  return;
}




void FUN_009cf0c8(long param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00965ecc(param_1 + 0x28);
  fVar2 = (float)puVar1[2] * (float)*(undefined8 *)(param_1 + 0x85c) *
          (float)*(undefined8 *)(param_1 + 0x888);
  fVar3 = (float)((ulong)puVar1[2] >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_1 + 0x85c) >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_1 + 0x888) >> 0x20);
  uVar4 = *puVar1;
  *(ulong *)(param_1 + 0x864) = CONCAT44(fVar3,fVar2);
  *(ulong *)(param_1 + 0x86c) =
       CONCAT44((float)((ulong)uVar4 >> 0x20) +
                fVar3 * (float)((ulong)*(undefined8 *)(param_1 + 0x844) >> 0x20),
                (float)uVar4 + fVar2 * (float)*(undefined8 *)(param_1 + 0x844));
  *(float *)(param_1 + 0x874) = (fVar2 / *(float *)(param_1 + 0x83c)) / *(float *)(param_1 + 0x834);
  return;
}




void FUN_009cf13c(long param_1,int param_2,long *param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  
  uVar2 = 0;
  fVar6 = 3.4028235e+38;
  plVar5 = (long *)(param_1 + 0x128);
  do {
    if ((char)plVar5[7] == '\0') goto LAB_009cf1b4;
    uVar2 = uVar2 + 1;
    plVar5 = plVar5 + 8;
  } while (uVar2 < 0x14);
  lVar4 = 0;
  plVar5 = (long *)0x0;
  do {
    lVar1 = param_1 + lVar4;
    if ((*(char *)(lVar1 + 0x160) != '\0') && (*(float *)(lVar1 + 0x15c) < fVar6)) {
      plVar5 = (long *)(lVar1 + 0x128);
      fVar6 = *(float *)(lVar1 + 0x15c);
    }
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x500);
LAB_009cf1b4:
  if (param_2 == -1) {
LAB_009cf200:
    lVar4 = 0;
    iVar3 = DAT_03214ce8;
  }
  else {
    lVar1 = FUN_00d9e390(param_2);
    lVar4 = lVar1 + 0x28;
    if (lVar1 == 0) goto LAB_009cf200;
    iVar3 = *(int *)(lVar1 + 0x30);
    if (iVar3 != DAT_03214ce8) {
      *plVar5 = lVar4;
      goto LAB_009cf214;
    }
  }
  *plVar5 = lVar4;
LAB_009cf214:
  *(int *)(plVar5 + 1) = iVar3;
  *(int *)(plVar5 + 5) = (int)param_3[1];
  lVar4 = *param_3;
  uVar7 = 0x41000000;
  if (param_4 != 3) {
    uVar7 = 0x40800000;
  }
  *(undefined1 *)(plVar5 + 7) = 1;
  *(undefined4 *)((long)plVar5 + 0x34) = uVar7;
  plVar5[4] = lVar4;
  *(int *)((long)plVar5 + 0x3c) = param_4;
  return;
}




void FUN_009cf260(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x898) = param_2;
  *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 1;
  return;
}




void FUN_009cf274(long param_1)

{
  *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) & 0xfe;
  return;
}




float FUN_009cf284(float param_1,float param_2,long param_3)

{
  float fVar1;
  
  fVar1 = (param_1 - *(float *)(param_3 + 0x86c)) / *(float *)(param_3 + 0x874);
  if (*(float *)(param_3 + 0x830) != 0.0) {
    fVar1 = fVar1 * *(float *)(param_3 + 0x84c) -
            ((param_2 - *(float *)(param_3 + 0x870)) / *(float *)(param_3 + 0x874)) *
            *(float *)(param_3 + 0x854);
  }
  if ((*(byte *)(param_3 + 0x100) & 1) != 0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}




uint FUN_009cf2f8(void)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_009cf370(auStack_40);
  uVar3 = FUN_00cac778(0,auStack_40,auStack_50);
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_00cac868(auStack_40,0,auStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009cf370(float *param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float __x;
  
  fVar4 = (float)FUN_009cf284();
  FUN_009bbfb0();
  FUN_009bd5c8();
  lVar3 = FUN_009b80cc();
  fVar1 = *(float *)(lVar3 + 0x34);
  fVar2 = *(float *)(lVar3 + 0x38);
  fVar4 = fVar4 - *(float *)(lVar3 + 0x30);
  param_3 = param_3 - fVar1;
  param_4 = param_4 - fVar2;
  __x = fVar4 * fVar4 + param_3 * param_3 + param_4 * param_4;
  fVar5 = SQRT(__x);
  *param_1 = *(float *)(lVar3 + 0x30);
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  if (NAN(fVar5)) {
    fVar5 = sqrtf(__x);
  }
  param_1[3] = fVar4 / fVar5;
  param_1[4] = param_3 / fVar5;
  param_1[5] = param_4 / fVar5;
  return;
}




void FUN_009cf41c(void)

{
  return;
}




void FUN_009cf434(void)

{
  return;
}




void FUN_009cf44c(long param_1)

{
  FUN_00f02914(param_1 + 0x28);
  FUN_009cf0c8(param_1);
  return;
}




void FUN_009cf474(long param_1)

{
  FUN_00f02914();
  FUN_009cf0c8(param_1 + -0x28);
  return;
}




void FUN_009cf498(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_70;
  float local_68;
  undefined8 local_60;
  float local_58;
  long local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  pfVar6 = (float *)&local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x8a0) >> 4 & 1) == 0) {
    uVar3 = FUN_00ceab64();
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x828) + 0x18);
      while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02e3ef68))) {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      FUN_00a14894(lVar4,1);
    }
    else {
      lVar4 = FUN_009bbfb0();
      lVar4 = *(long *)(lVar4 + 0x18);
      while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_0312ee00))) {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      FUN_00a18f90(lVar4,1);
    }
    *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 0x10;
    FUN_009bbfb0();
    uVar5 = FUN_009bd5c8();
    FUN_009b81dc(uVar5,1);
  }
  uVar3 = FUN_00cac778(0,param_2,&local_48);
  if ((uVar3 & 1) != 0) {
    local_50 = 0;
    uVar2 = 1;
    FUN_019889cc(&local_50,1,DAT_02e3ef88,0);
    local_60 = CONCAT44(fStack_44,local_48);
    local_58 = local_40;
    uVar3 = FUN_00cac9c4(&local_60);
    if ((*(byte *)(param_1 + 0x8a0) >> 2 & 1) != 0) {
      uVar2 = FUN_00f04b30(param_3);
      uVar2 = ~uVar2 & 1;
    }
    FUN_009bbfb0();
    lVar4 = FUN_009bd5c8();
    fStack_44 = *(float *)(lVar4 + 0x74);
    if ((uVar3 & 1) == 0) {
      fVar8 = ((float)local_60 - local_48) * ((float)local_60 - local_48) +
              (local_60._4_4_ - fStack_44) * (local_60._4_4_ - fStack_44) +
              (local_58 - local_40) * (local_58 - local_40);
      fVar7 = SQRT(fVar8);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar8);
      }
      fVar9 = *(float *)(*(long *)(local_50 + 0x290) + 0xd0);
      fVar9 = fVar9 - fVar9 / (fVar7 / 20.0 + 1.0);
      fVar8 = fVar7;
      if (fVar9 <= fVar7) {
        fVar8 = fVar9;
      }
      fVar8 = fVar8 / fVar7;
      fVar7 = 1.0 - fVar8;
      local_68 = fVar7 * local_58 + fVar8 * local_40;
      local_70 = CONCAT44(fStack_44 * fVar8 + (float)((ulong)local_60 >> 0x20) * fVar7,
                          local_48 * fVar8 + (float)local_60 * fVar7);
      FUN_009bbfb0();
      uVar5 = FUN_009bd5c8();
    }
    else {
      FUN_009bbfb0();
      uVar5 = FUN_009bd5c8();
      pfVar6 = &local_48;
    }
    FUN_009b81fc(uVar5,pfVar6,uVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_009cf6d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_1 + 0x828);
  if (lVar4 != 0) {
    for (lVar7 = *(long *)(lVar4 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
      if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_02e3ef68) {
        uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
        if (((uVar1 != 0x1f) && (uVar6 = 0, *(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)
            ) || (uVar6 = 0, (*(byte *)(lVar4 + 0x2f8) >> 1 & 1) != 0)) goto LAB_009cf72c;
        uVar3 = FUN_00da2eb4();
        uVar5 = FUN_00cac868(param_2,uVar3,&local_68);
        if ((uVar5 & 1) != 0) {
          FUN_00a19bec(0x3f800000,auStack_58,&local_68,0);
          uVar5 = FUN_00a1a334(lVar7 + 0x260,auStack_58);
          if ((uVar5 & 1) != 0) {
            if (param_3 != (undefined8 *)0x0) {
              *(undefined4 *)(param_3 + 1) = local_60;
              *param_3 = local_68;
            }
            uVar6 = 1;
            goto LAB_009cf72c;
          }
        }
        break;
      }
    }
  }
  uVar6 = 0;
LAB_009cf72c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009cf7f0(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 0xe;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    lVar2 = param_2[4];
    *(long *)(param_1 + 0x890) = lVar2;
    FUN_00f0044c(lVar2,param_1 + 0x28);
    uVar3 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]),4);
    *(undefined8 *)(param_1 + 0x878) = uVar3;
  }
  return;
}




void thunk_FUN_009cf7f0(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 0xe;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    lVar2 = param_2[4];
    *(long *)(param_1 + 0x890) = lVar2;
    FUN_00f0044c(lVar2,param_1 + 0x28);
    uVar3 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]),4);
    *(undefined8 *)(param_1 + 0x878) = uVar3;
  }
  return;
}




void FUN_009cf880(long param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_009cf7f0();
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
      (uVar2 = FUN_00ceab64(), (uVar2 & 1) == 0)) && (*(long *)(param_1 + 0x828) != 0)) {
    for (lVar3 = *(long *)(*(long *)(param_1 + 0x828) + 0x18); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02e3ef68) {
        cVar1 = FUN_00a14968((float)(int)*(float *)(param_2 + 5),
                             (float)(int)*(float *)((long)param_2 + 0x2c),lVar3,param_2[4]);
        *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) & 0x7f | cVar1 << 7;
        return;
      }
    }
  }
  return;
}




void FUN_009cf948(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_68;
  float fStack_64;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    fVar4 = (float)(int)*(float *)((long)param_2 + 0x2c);
    FUN_009cf370(auStack_60,(float)(int)*(float *)(param_2 + 5),param_1);
    FUN_009cf6d0(param_1,auStack_60,auStack_48);
    local_68 = FUN_009cdd60(param_1,auStack_48);
    fStack_64 = fVar4;
    fVar3 = (float)FUN_00f08664(&local_68,param_1 + 0x28);
    if ((*(float *)(param_1 + 0x688) != fVar3) || (*(float *)(param_1 + 0x68c) != fVar4)) {
      *(float *)(param_1 + 0x688) = fVar3;
      *(float *)(param_1 + 0x68c) = fVar4;
      FUN_0091ada4(param_1 + 0x648);
    }
    *(uint *)(param_1 + 0x6cc) = *(uint *)(param_1 + 0x6cc) | 4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009cfa50(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_98;
  undefined4 local_94;
  float local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x8a0) >> 1 & 1) == 0) goto LAB_009cfdb0;
  *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 8;
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar2 & 1) == 0) && (DAT_03210fd8 != DAT_03210f50)) goto LAB_009cfdb0;
  FUN_009cf370(auStack_80,(float)(int)*(float *)(param_2 + 5),
               (float)(int)*(float *)((long)param_2 + 0x2c),param_1);
  uVar6 = (uint)*(byte *)(param_1 + 0x8a0);
  fVar10 = *(float *)(param_1 + 0x89c);
  if ((*(byte *)(param_1 + 0x8a0) & 1) == 0) {
    uVar2 = FUN_009f1f70(0x15);
    if ((((uVar2 & 1) == 0) && (uVar2 = FUN_00ceab64(), fVar10 <= 0.11)) && ((uVar2 & 1) == 0)) {
      uVar6 = (uint)*(byte *)(param_1 + 0x8a0);
      goto LAB_009cfb5c;
    }
LAB_009cfb34:
    uVar6 = (uint)*(byte *)(param_1 + 0x8a0);
    if ((*(byte *)(param_1 + 0x8a0) >> 5 & 1) != 0) goto LAB_009cfb5c;
    FUN_009cf498(param_1,auStack_80,param_2);
LAB_009cfb4c:
    bVar5 = *(byte *)(param_1 + 0x8a0);
  }
  else {
    if (0.11 < fVar10) goto LAB_009cfb34;
LAB_009cfb5c:
    if ((((uVar6 >> 4 & 1) != 0) || (uVar2 = FUN_00ceab64(), (uVar2 & 1) != 0)) ||
       ((uVar2 = FUN_009f1f70(0x15), (uVar2 & 1) != 0 || (uVar2 = FUN_00a1bd68(), (uVar2 & 1) == 0))
       )) goto LAB_009cfdb0;
    uVar8 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]),4);
    FUN_009bbfb0();
    lVar3 = FUN_009bd5c8();
    lVar4 = FUN_009b8134();
    fVar11 = *(float *)(lVar4 + 4) * 0.017453292;
    uVar2 = FUN_00a1bd68();
    fVar10 = (float)((ulong)uVar8 >> 0x20);
    if (((uVar2 & 1) != 0) && ((*(byte *)(param_1 + 0x8a0) >> 5 & 1) == 0)) {
      fVar7 = (float)uVar8 - (float)*(undefined8 *)(param_1 + 0x878);
      fVar9 = fVar10 - (float)((ulong)*(undefined8 *)(param_1 + 0x878) >> 0x20);
      fVar9 = fVar7 * fVar7 + fVar9 * fVar9;
      fVar7 = SQRT(fVar9);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar9);
      }
      if (20.0 < fVar7) {
        *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 0x20;
        fVar12 = *(float *)(lVar3 + 0x420);
        fVar13 = *(float *)(lVar3 + 0x428);
        fVar7 = cosf(fVar11);
        fVar9 = sinf(fVar11);
        *(float *)(param_1 + 0x880) = fVar12 * fVar7 + fVar13 * fVar9;
        fVar7 = sinf(fVar11);
        fVar9 = cosf(fVar11);
        *(float *)(param_1 + 0x884) = fVar13 * fVar9 - fVar12 * fVar7;
      }
    }
    bVar5 = *(byte *)(param_1 + 0x8a0);
    if ((bVar5 >> 5 & 1) != 0) {
      uVar2 = FUN_00a1bd68();
      if ((uVar2 & 1) == 0) goto LAB_009cfb4c;
      fVar7 = *(float *)(param_1 + 0x878);
      fVar12 = *(float *)(param_1 + 0x87c);
      FUN_00f00298(&uStack_84,&local_88);
      uVar2 = FUN_0092ead0(uStack_84,local_88);
      fVar9 = 11.0;
      if ((uVar2 & 1) == 0) {
        fVar9 = 9.0;
      }
      fVar7 = ((float)uVar8 - fVar7) * 0.015 + *(float *)(param_1 + 0x880);
      if (fVar9 <= fVar7) {
        fVar7 = fVar9;
      }
      fVar12 = (float)NEON_fminnm((fVar10 - fVar12) * 0.015 + *(float *)(param_1 + 0x884),0x40c00000
                                 );
      fVar10 = -fVar9;
      if (-fVar9 <= fVar7) {
        fVar10 = fVar7;
      }
      if (fVar12 <= -5.0) {
        fVar12 = -5.0;
      }
      fVar7 = cosf(fVar11);
      fVar9 = sinf(-fVar11);
      fVar9 = fVar7 * fVar10 + fVar9 * fVar12;
      local_98 = fVar9;
      fVar7 = sinf(-fVar11);
      fVar11 = cosf(fVar11);
      fVar10 = fVar12 * fVar11 - fVar10 * fVar7;
      local_90 = fVar10;
      FUN_009bbfb0();
      lVar4 = FUN_009bd5c8();
      local_94 = *(undefined4 *)(lVar4 + 0x424);
      uVar6 = *(ushort *)(*(long *)(param_1 + 0x828) + 0x88) & 0x1f;
      if ((uVar6 == 0x1f) ||
         (1 < *(ushort *)(*(long *)(param_1 + 0x828) + (ulong)uVar6 * 0x38 + 0x90) - 3)) {
        local_90 = 1.0;
        local_98 = 1.0;
        if ((*(byte *)(param_1 + 0x100) & 1) != 0) {
          local_98 = -1.0;
        }
        if ((*(byte *)(param_1 + 0x100) & 2) != 0) {
          local_90 = -1.0;
        }
        local_98 = fVar9 * local_98;
        local_90 = fVar10 * local_90;
        FUN_009b8248(lVar3,&local_98);
      }
      bVar5 = *(byte *)(param_1 + 0x8a0) | 0x40;
      *(byte *)(param_1 + 0x8a0) = bVar5;
    }
  }
  *(byte *)(param_1 + 0x8a0) = bVar5 & 0xfb;
LAB_009cfdb0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009cfde4(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x8a0) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 8;
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
    if (((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
      FUN_009cf370(auStack_50,(float)(int)*(float *)(param_2 + 5),
                   (float)(int)*(float *)((long)param_2 + 0x2c),param_1);
      bVar3 = *(byte *)(param_1 + 0x8a0);
      if ((bVar3 & 0x81) == 0) {
        FUN_009cf498(param_1,auStack_50,param_2);
        bVar3 = *(byte *)(param_1 + 0x8a0);
      }
      *(byte *)(param_1 + 0x8a0) = bVar3 & 0xfb;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009cfec4(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*(byte *)(param_1 + 0x8a0) >> 1 & 1) != 0) &&
     (((uVar3 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8), (uVar3 & 1) != 0 ||
       (DAT_03210fd8 == DAT_03210f50)) && (*(long *)(param_1 + 0x890) == param_2[4])))) {
    uVar3 = FUN_00ceab64();
    if (((uVar3 & 1) == 0) && (*(long *)(param_1 + 0x828) != 0)) {
      for (lVar7 = *(long *)(*(long *)(param_1 + 0x828) + 0x18); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 0x20)) {
        if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_02e3ef68) {
          FUN_00a14894(lVar7,0);
          FUN_009cf370(auStack_50,(float)(int)*(float *)(param_2 + 5),
                       (float)(int)*(float *)((long)param_2 + 0x2c),param_1);
          if ((*(byte *)(param_1 + 0x8a0) & 1) == 0) {
            if ((*(byte *)(param_1 + 0x8a0) & 0x60) != 0x40) {
              FUN_009bbfb0();
              lVar5 = FUN_009bd5c8();
              FUN_009bbfb0();
              lVar6 = FUN_009bd5c8();
              if (((*(float *)(lVar5 + 0x420) == *(float *)(lVar6 + 0x70)) &&
                  (*(float *)(lVar5 + 0x424) == *(float *)(lVar6 + 0x74))) &&
                 (*(float *)(lVar5 + 0x428) == *(float *)(lVar6 + 0x78))) {
                FUN_009bbfb0();
                lVar5 = FUN_009bd5c8();
                if ((*(byte *)(lVar5 + 0x7c) >> 4 & 1) == 0) {
                  if (*(byte *)(param_1 + 0x8a0) < 0x10) {
                    FUN_009cf6d0(param_1,auStack_50,0);
                  }
                  break;
                }
              }
              if ((*(byte *)(param_1 + 0x8a0) >> 4 & 1) == 0) {
                FUN_00a14b98(lVar7);
              }
              break;
            }
            uVar3 = FUN_00ceab64();
            if ((uVar3 & 1) == 0) {
              FUN_009bbfb0();
              uVar4 = FUN_009bd5c8();
              FUN_009bbfb0();
              lVar7 = FUN_009bd5c8();
              FUN_009b8248(uVar4,lVar7 + 0x70);
            }
            bVar2 = *(byte *)(param_1 + 0x8a0) & 0xbf;
          }
          else {
            bVar2 = FUN_00a1472c(lVar7,auStack_50,*(undefined4 *)(param_1 + 0x898));
            bVar2 = *(byte *)(param_1 + 0x8a0) & 0xfe | ~bVar2 & 1;
          }
          *(byte *)(param_1 + 0x8a0) = bVar2;
          break;
        }
      }
    }
    else {
      uVar3 = FUN_00ceab64();
      if ((uVar3 & 1) != 0) {
        lVar7 = FUN_009bbfb0();
        for (lVar7 = *(long *)(lVar7 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
          if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_0312ee00) {
            FUN_00a18f90(lVar7,0);
            break;
          }
        }
      }
    }
  }
  FUN_009d010c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_009cfec4(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if (((*(byte *)(param_1 + 0x8a0) >> 1 & 1) != 0) &&
     (((uVar3 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8), (uVar3 & 1) != 0 ||
       (DAT_03210fd8 == DAT_03210f50)) && (*(long *)(param_1 + 0x890) == param_2[4])))) {
    uVar3 = FUN_00ceab64();
    if (((uVar3 & 1) == 0) && (*(long *)(param_1 + 0x828) != 0)) {
      for (lVar7 = *(long *)(*(long *)(param_1 + 0x828) + 0x18); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 0x20)) {
        if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_02e3ef68) {
          FUN_00a14894(lVar7,0);
          FUN_009cf370(auStack_50,(float)(int)*(float *)(param_2 + 5),
                       (float)(int)*(float *)((long)param_2 + 0x2c),param_1);
          if ((*(byte *)(param_1 + 0x8a0) & 1) == 0) {
            if ((*(byte *)(param_1 + 0x8a0) & 0x60) != 0x40) {
              FUN_009bbfb0();
              lVar5 = FUN_009bd5c8();
              FUN_009bbfb0();
              lVar6 = FUN_009bd5c8();
              if (((*(float *)(lVar5 + 0x420) == *(float *)(lVar6 + 0x70)) &&
                  (*(float *)(lVar5 + 0x424) == *(float *)(lVar6 + 0x74))) &&
                 (*(float *)(lVar5 + 0x428) == *(float *)(lVar6 + 0x78))) {
                FUN_009bbfb0();
                lVar5 = FUN_009bd5c8();
                if ((*(byte *)(lVar5 + 0x7c) >> 4 & 1) == 0) {
                  if (*(byte *)(param_1 + 0x8a0) < 0x10) {
                    FUN_009cf6d0(param_1,auStack_50,0);
                  }
                  break;
                }
              }
              if ((*(byte *)(param_1 + 0x8a0) >> 4 & 1) == 0) {
                FUN_00a14b98(lVar7);
              }
              break;
            }
            uVar3 = FUN_00ceab64();
            if ((uVar3 & 1) == 0) {
              FUN_009bbfb0();
              uVar4 = FUN_009bd5c8();
              FUN_009bbfb0();
              lVar7 = FUN_009bd5c8();
              FUN_009b8248(uVar4,lVar7 + 0x70);
            }
            bVar2 = *(byte *)(param_1 + 0x8a0) & 0xbf;
          }
          else {
            bVar2 = FUN_00a1472c(lVar7,auStack_50,*(undefined4 *)(param_1 + 0x898));
            bVar2 = *(byte *)(param_1 + 0x8a0) & 0xfe | ~bVar2 & 1;
          }
          *(byte *)(param_1 + 0x8a0) = bVar2;
          break;
        }
      }
    }
    else {
      uVar3 = FUN_00ceab64();
      if ((uVar3 & 1) != 0) {
        lVar7 = FUN_009bbfb0();
        for (lVar7 = *(long *)(lVar7 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
          if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_0312ee00) {
            FUN_00a18f90(lVar7,0);
            break;
          }
        }
      }
    }
  }
  FUN_009d010c(param_1);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

