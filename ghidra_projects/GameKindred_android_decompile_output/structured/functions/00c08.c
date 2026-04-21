// functions/00c08 — 11 functions
#include "libGameKindred.h"




void FUN_00c08000(void *param_1)

{
  FUN_00c07f14();
  operator_delete(param_1);
  return;
}




void FUN_00c08024(long *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_01980738(param_1 + 0xca,(long)param_1 + 0x654,0,0);
  *(undefined4 *)((long)param_1 + 0x65c) = param_2;
  uVar2 = FUN_00f00438("root-layer");
  lVar3 = FUN_00965ecc(param_1[4]);
  FUN_00f07940(*(float *)(param_1 + 0xca) / *(float *)(lVar3 + 0x10),
               *(float *)((long)param_1 + 0x654) / *(float *)(lVar3 + 0x14),param_1,8,uVar2,0);
  (**(code **)(*param_1 + 0x90))(param_1);
  pcStack_40 = thunk_FUN_00c08510;
  local_48 = param_1;
  FUN_00f02e98(0xbf800000,&local_48,0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c08100(long param_1)

{
  long lVar1;
  long lVar2;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcStack_40 = thunk_FUN_00c08510;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  if (*(char *)(param_1 + 0x660) == '\0') {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))
              (*(undefined8 **)(param_1 + 0xb8),param_1 + 0x650,*(undefined4 *)(param_1 + 0x65c));
  }
  else {
    if (*(int *)(param_1 + 0x658) != -1) {
      (**(code **)**(undefined8 **)(param_1 + 0xb8))
                (*(undefined8 **)(param_1 + 0xb8),param_1 + 0x650,
                 *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x658) * 4 + 0x540));
    }
    *(undefined1 *)(param_1 + 0x660) = 0;
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  }
  lVar2 = 0xc0;
  do {
    local_48 = CONCAT44(local_48._4_4_,0xff000000);
    FUN_00f0e670(param_1 + lVar2,&local_48,2);
    lVar2 = lVar2 + 0x120;
  } while (lVar2 != 0x540);
  *(undefined4 *)(param_1 + 0x658) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c081f4(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_3 & 1) == 0) {
    local_2c = 0xff000000;
  }
  else {
    local_2c = 0xff808080;
  }
  FUN_00f0e670(param_1 + (param_2 & 0xffffffff) * 0x120 + 0xc0,&local_2c,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0826c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar5 = (float)(**(code **)(*param_3 + 0x48))();
  uVar7 = NEON_fmov(0x3e800000,4);
  fVar6 = fVar5 * (float)uVar7;
  lVar4 = 0xc0;
  local_78 = CONCAT44(param_2 * (float)((ulong)uVar7 >> 0x20) * 1.4142135,fVar6 * 1.4142135);
  do {
    plVar2 = (long *)((long)param_3 + lVar4);
    FUN_00f0ef20(0x3f490fdb,plVar2);
    FUN_00f0ef70(0x3f000000,0x3f000000,plVar2);
    FUN_00f13f18(plVar2,&local_78);
    local_70 = 0x3f0000003f000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_70);
    lVar4 = lVar4 + 0x120;
  } while (lVar4 != 0x540);
  fVar6 = fVar6 + 4.0;
  fVar5 = fVar5 * 0.5;
  param_2 = param_2 * 0.5;
  fVar8 = fVar5 + 0.0;
  if ((*(float *)(param_3 + 0x20) != fVar8) ||
     (*(float *)((long)param_3 + 0x104) != param_2 - fVar6)) {
    *(float *)(param_3 + 0x20) = fVar8;
    *(float *)((long)param_3 + 0x104) = param_2 - fVar6;
    FUN_0091ada4(param_3 + 0x18);
  }
  fVar9 = param_2 + 0.0;
  if ((*(float *)(param_3 + 0x44) != fVar5 + fVar6) || (*(float *)((long)param_3 + 0x224) != fVar9))
  {
    *(float *)(param_3 + 0x44) = fVar5 + fVar6;
    *(float *)((long)param_3 + 0x224) = fVar9;
    FUN_0091ada4(param_3 + 0x3c);
  }
  if ((*(float *)(param_3 + 0x68) != fVar8) ||
     (*(float *)((long)param_3 + 0x344) != param_2 + fVar6)) {
    *(float *)(param_3 + 0x68) = fVar8;
    *(float *)((long)param_3 + 0x344) = param_2 + fVar6;
    FUN_0091ada4(param_3 + 0x60);
  }
  if ((*(float *)(param_3 + 0x8c) != fVar5 - fVar6) || (*(float *)((long)param_3 + 0x464) != fVar9))
  {
    *(float *)(param_3 + 0x8c) = fVar5 - fVar6;
    *(float *)((long)param_3 + 0x464) = fVar9;
    FUN_0091ada4(param_3 + 0x84);
  }
  fVar5 = (float)(**(code **)(**(long **)param_3[0xc9] + 0x48))();
  if ((int)param_3[200] != 0) {
    uVar7 = NEON_fmov(0x3fc00000,4);
    plVar2 = (long *)param_3[0xc9];
    do {
      lVar4 = *plVar2;
      if ((*(float *)(lVar4 + 0x520) != 1.5) || (*(float *)(lVar4 + 0x524) != 1.5)) {
        *(undefined8 *)(lVar4 + 0x520) = uVar7;
        FUN_0091ada4(lVar4 + 0x4d8);
        lVar4 = *plVar2;
      }
      FUN_00abb218(180.0 / fVar5,(180.0 / fVar5) * 1.25,lVar4);
      plVar3 = plVar2 + 1;
      FUN_00f07940(0,0,*plVar2,8,
                   param_3 + ((ulong)((long)plVar2 - param_3[0xc9]) >> 3 & 0xffffffff) * 0x24 + 0x18
                   ,8);
      plVar2 = plVar3;
    } while (plVar3 != (long *)(param_3[0xc9] + (ulong)*(uint *)(param_3 + 200) * 8));
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c08510(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar7;
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  long local_38;
  undefined8 *puVar6;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_01980738(auStack_48,(ulong)auStack_48 | 4,0,0);
  uVar3 = FUN_00c08658(param_1,auStack_48);
  uVar1 = *(uint *)(param_1 + 0x658);
  if (uVar3 != uVar1) {
    if (uVar1 < 4) {
      local_3c = 0xff000000;
      FUN_00f0e670(param_1 + (ulong)uVar1 * 0x120 + 0xc0,&local_3c,2);
    }
    if (uVar3 != 0xffffffff) {
      local_3c = 0xff808080;
      FUN_00f0e670(param_1 + (ulong)uVar3 * 0x120 + 0xc0,&local_3c,2);
      if (*(char *)(param_1 + 0x660) == '\0') {
        *(undefined1 *)(param_1 + 0x660) = 1;
        *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
      }
    }
    *(uint *)(param_1 + 0x658) = uVar3;
  }
  lVar4 = FUN_00a1ae38();
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00a1b610();
  }
  if (*(int *)(param_1 + 0x640) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x648);
    do {
      puVar6 = puVar5 + 1;
      FUN_00abb6ac(uVar7,*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)
                       (*(long *)(param_1 + 0x648) + (ulong)*(uint *)(param_1 + 0x640) * 8));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00c08658(long param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  float __x;
  float __x_00;
  float __y;
  
  __y = *param_2 - *(float *)(param_1 + 0x650);
  __x_00 = param_2[1] - *(float *)(param_1 + 0x654);
  __x = __y * __y + __x_00 * __x_00;
  fVar4 = SQRT(__x);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(__x);
  }
  if (fVar4 <= 50.0) {
    uVar3 = 0xffffffff;
  }
  else {
    fVar4 = atan2f(__y,__x_00);
    uVar3 = 0;
    if ((-2.3561945 < fVar4) && (uVar3 = 0, fVar4 <= 2.3561945)) {
      if ((2.3561945 < fVar4) || (fVar4 <= 0.7853982)) {
        bVar1 = false;
        bVar2 = true;
        if (-0.7853982 < fVar4) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar4)) {
            bVar1 = fVar4 == 0.7853982;
            bVar2 = 0.7853982 <= fVar4;
          }
        }
        uVar3 = 2;
        if (bVar2 && !bVar1) {
          uVar3 = 3;
        }
      }
      else {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}




void thunk_FUN_00c08510(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar7;
  undefined1 auStack_48 [12];
  undefined4 uStack_3c;
  long lStack_38;
  undefined8 *puVar6;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  FUN_01980738(auStack_48,(ulong)auStack_48 | 4,0,0);
  uVar3 = FUN_00c08658(param_1,auStack_48);
  uVar1 = *(uint *)(param_1 + 0x658);
  if (uVar3 != uVar1) {
    if (uVar1 < 4) {
      uStack_3c = 0xff000000;
      FUN_00f0e670(param_1 + (ulong)uVar1 * 0x120 + 0xc0,&uStack_3c,2);
    }
    if (uVar3 != 0xffffffff) {
      uStack_3c = 0xff808080;
      FUN_00f0e670(param_1 + (ulong)uVar3 * 0x120 + 0xc0,&uStack_3c,2);
      if (*(char *)(param_1 + 0x660) == '\0') {
        *(undefined1 *)(param_1 + 0x660) = 1;
        *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
      }
    }
    *(uint *)(param_1 + 0x658) = uVar3;
  }
  lVar4 = FUN_00a1ae38();
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00a1b610();
  }
  if (*(int *)(param_1 + 0x640) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x648);
    do {
      puVar6 = puVar5 + 1;
      FUN_00abb6ac(uVar7,*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)
                       (*(long *)(param_1 + 0x648) + (ulong)*(uint *)(param_1 + 0x640) * 8));
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c08738(undefined8 *param_1)

{
  FUN_00b89cd8();
  param_1[0x19] = 0;
  *param_1 = &PTR_FUN_027f5d00;
  FUN_00f0e4a8(param_1 + 0x1a);
  FUN_00f0e4a8(param_1 + 0x38);
  FUN_00f0ac5c(param_1 + 0x56);
  FUN_00f0ac5c(param_1 + 0x7f);
  FUN_00f13ca4(param_1 + 0xa8);
  FUN_00f0ac5c(param_1 + 0xbf);
  FUN_00f0ac5c(param_1 + 0xe8);
  FUN_00f0e4a8(param_1 + 0x111);
  FUN_00f0e4a8(param_1 + 0x12f);
  FUN_00f0e4a8(param_1 + 0x14d);
  FUN_00c88494(param_1 + 0x16b);
  FUN_00c88494(param_1 + 0x201);
  FUN_00f0d160(param_1 + 0x297);
  FUN_00f0d160(param_1 + 0x2bd);
  FUN_00c88494(param_1 + 0x2e3);
  FUN_00c88494(param_1 + 0x379);
  FUN_00c88494(param_1 + 0x40f);
  FUN_00c88494(param_1 + 0x4a5);
  FUN_00ab6c24(param_1 + 0x53b,1);
  FUN_00f13ca4(param_1 + 0x7f3);
  param_1[0x819] = 0;
  param_1[0x818] = 0;
  param_1[0x817] = 0;
  param_1[0x816] = 0;
  param_1[0x815] = 0;
  param_1[0x814] = 0;
  FUN_00ab6c24(param_1 + 0x81a,1);
  FUN_00ab6c24(param_1 + 0xad2,1);
  FUN_00ab6c24(param_1 + 0xd8a,1);
  FUN_00ab6c24(param_1 + 0x1042,1);
  FUN_00ab6c24(param_1 + 0x12fa,1);
  FUN_00f0e4a8(param_1 + 0x15b2);
  FUN_00f0d160(param_1 + 0x15d0);
  FUN_00c87014(param_1 + 0x15f6);
  FUN_00f017e8(param_1 + 0x24ff);
  param_1[0x24ff] = &PTR_FUN_027c1f80;
  FUN_00ab6c24(param_1 + 0x2510,1);
  FUN_00ab6c24(param_1 + 0x27c8,1);
  FUN_00a47988(param_1 + 0x2a80);
  FUN_00c87d20(param_1 + 0x2e53);
  param_1[0x317a] = 0;
  FUN_00e70510(param_1 + 0x317b);
  FUN_00e70510(param_1 + 0x317d);
  *(byte *)(param_1 + 0x317f) = *(byte *)(param_1 + 0x317f) & 0xe0 | 1;
  memset(param_1 + 0x80a,0,0x50);
  return;
}




void FUN_00c08980(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027f5d00;
  if ((void *)param_1[0x317e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x317e]);
    param_1[0x317e] = 0;
    param_1[0x317d] = 0;
  }
  if ((void *)param_1[0x317c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x317c]);
    param_1[0x317c] = 0;
    param_1[0x317b] = 0;
  }
  FUN_00c880c4(param_1 + 0x2e53);
  FUN_00a3af04(param_1 + 0x2a80);
  FUN_009c7fa8(param_1 + 0x27c8);
  FUN_009c7fa8(param_1 + 0x2510);
  FUN_00f01868(param_1 + 0x24ff);
  param_1[0x15f6] = &PTR_FUN_027f5e68;
  FUN_009c7fa8(param_1 + 0x2247);
  FUN_00f0d3a4(param_1 + 0x2221);
  FUN_00f13d08(param_1 + 0x220a);
  lVar4 = -0x5e00;
  puVar2 = param_1 + 0x1f1a;
  puVar3 = param_1 + 0x21e3;
  do {
    *puVar2 = &PTR_FUN_027f5fb0;
    FUN_00f0d3a4(puVar3);
    FUN_009c7fa8(puVar2 + 0x11);
    FUN_00f01868(puVar2);
    puVar2 = puVar2 + -0x2f0;
    lVar4 = lVar4 + 0x1780;
    puVar3 = puVar3 + -0x2f0;
  } while (lVar4 != 0);
  FUN_00f0d3a4(param_1 + 0x1624);
  FUN_00f13d08(param_1 + 0x160d);
  FUN_00f13d08(param_1 + 0x15f6);
  FUN_00f0d3a4(param_1 + 0x15d0);
  param_1[0x15b2] = &PTR_FUN_028266f0;
  param_1[0x15c9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15cc);
  FUN_00f13d08(param_1 + 0x15b2);
  FUN_009c7fa8(param_1 + 0x12fa);
  FUN_009c7fa8(param_1 + 0x1042);
  FUN_009c7fa8(param_1 + 0xd8a);
  FUN_009c7fa8(param_1 + 0xad2);
  FUN_009c7fa8(param_1 + 0x81a);
  pvVar1 = (void *)param_1[0x817];
  if (pvVar1 != (void *)0x0) {
    param_1[0x818] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x814];
  if (pvVar1 != (void *)0x0) {
    param_1[0x815] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00f13d08(param_1 + 0x7f3);
  FUN_009c7fa8(param_1 + 0x53b);
  param_1[0x4a5] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x514);
  FUN_00f0d3a4(param_1 + 0x4ee);
  param_1[0x4d0] = &PTR_FUN_028266f0;
  param_1[0x4e7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4ea);
  FUN_00f13d08(param_1 + 0x4d0);
  param_1[0x4a5] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x4bc);
  FUN_00f13d08(param_1 + 0x4a5);
  param_1[0x40f] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x47e);
  FUN_00f0d3a4(param_1 + 0x458);
  param_1[0x43a] = &PTR_FUN_028266f0;
  param_1[0x451] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x454);
  FUN_00f13d08(param_1 + 0x43a);
  param_1[0x40f] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x426);
  FUN_00f13d08(param_1 + 0x40f);
  param_1[0x379] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 1000);
  FUN_00f0d3a4(param_1 + 0x3c2);
  param_1[0x3a4] = &PTR_FUN_028266f0;
  param_1[0x3bb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3be);
  FUN_00f13d08(param_1 + 0x3a4);
  param_1[0x379] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x390);
  FUN_00f13d08(param_1 + 0x379);
  param_1[0x2e3] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x352);
  FUN_00f0d3a4(param_1 + 0x32c);
  param_1[0x30e] = &PTR_FUN_028266f0;
  param_1[0x325] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x328);
  FUN_00f13d08(param_1 + 0x30e);
  param_1[0x2e3] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2fa);
  FUN_00f13d08(param_1 + 0x2e3);
  FUN_00f0d3a4(param_1 + 0x2bd);
  FUN_00f0d3a4(param_1 + 0x297);
  param_1[0x201] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x270);
  FUN_00f0d3a4(param_1 + 0x24a);
  param_1[0x22c] = &PTR_FUN_028266f0;
  param_1[0x243] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x246);
  FUN_00f13d08(param_1 + 0x22c);
  param_1[0x201] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x218);
  FUN_00f13d08(param_1 + 0x201);
  param_1[0x16b] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x1da);
  FUN_00f0d3a4(param_1 + 0x1b4);
  param_1[0x196] = &PTR_FUN_028266f0;
  param_1[0x1ad] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b0);
  FUN_00f13d08(param_1 + 0x196);
  param_1[0x16b] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x182);
  FUN_00f13d08(param_1 + 0x16b);
  param_1[0x14d] = &PTR_FUN_028266f0;
  param_1[0x164] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x167);
  FUN_00f13d08(param_1 + 0x14d);
  param_1[0x12f] = &PTR_FUN_028266f0;
  param_1[0x146] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x149);
  FUN_00f13d08(param_1 + 0x12f);
  param_1[0x111] = &PTR_FUN_028266f0;
  param_1[0x128] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 299);
  FUN_00f13d08(param_1 + 0x111);
  param_1[0xe8] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xff);
  FUN_00f13d08(param_1 + 0xe8);
  param_1[0xbf] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xd6);
  FUN_00f13d08(param_1 + 0xbf);
  FUN_00f13d08(param_1 + 0xa8);
  param_1[0x7f] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x96);
  FUN_00f13d08(param_1 + 0x7f);
  param_1[0x56] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_028266f0;
  param_1[0x4f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x52);
  FUN_00f13d08(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_028266f0;
  param_1[0x31] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x34);
  FUN_00f13d08(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c08f44(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_027f5e68;
  FUN_009c7fa8(param_1 + 0xc51);
  FUN_00f0d3a4(param_1 + 0xc2b);
  FUN_00f13d08(param_1 + 0xc14);
  lVar3 = -0x5e00;
  puVar1 = param_1 + 0x924;
  puVar2 = param_1 + 0xbed;
  do {
    *puVar1 = &PTR_FUN_027f5fb0;
    FUN_00f0d3a4(puVar2);
    FUN_009c7fa8(puVar1 + 0x11);
    FUN_00f01868(puVar1);
    puVar1 = puVar1 + -0x2f0;
    lVar3 = lVar3 + 0x1780;
    puVar2 = puVar2 + -0x2f0;
  } while (lVar3 != 0);
  FUN_00f0d3a4(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

