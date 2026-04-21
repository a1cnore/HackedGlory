// functions/00a43 — 9 functions
#include "libGameKindred.h"




void FUN_00a43164(undefined8 param_1,float param_2,undefined8 param_3,float param_4,float param_5,
                 undefined8 param_6,undefined8 param_7,float *param_8,undefined8 param_9,
                 long param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *param_8;
  fVar4 = param_8[1];
  param_2 = fVar4 + fVar4 + param_2;
  FUN_00a419dc(param_1,param_2,param_3,param_4 - param_5,0x40000000,*(undefined4 *)(param_10 + 8));
  if (*(char *)(param_10 + 0xc) != '\0') {
    fVar5 = fVar5 * 6.0 + 2.0;
    fVar1 = fVar5 + (float)param_1;
    fVar5 = (float)param_3 - (fVar5 + fVar5);
    fVar2 = param_5 - (fVar4 + fVar4);
    fVar3 = fVar4 + param_2 + (param_4 - param_5) + param_8[1] + param_8[1];
    FUN_00a41fa0(fVar1,fVar3,fVar5,fVar2,*(undefined4 *)(param_10 + 0x10),param_6,param_7);
    FUN_00a42658(fVar1,fVar4 + fVar4 + fVar2 + fVar3,fVar5,fVar2,0,0,param_6,param_7,param_8,param_9
                );
    return;
  }
  return;
}




void FUN_00a432a8(float param_1,float param_2,float param_3,float param_4,long param_5,
                 undefined8 param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_5c = 0x80000000;
  fVar3 = *(float *)(param_7 + 4);
  lVar6 = FUN_00f0a7d4(param_5 + 0xa0,DAT_03132418);
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
  param_1 = param_1 - fVar4 * 0.0;
  fVar7 = (fVar3 + param_2) - fVar7 * 0.0;
  fVar9 = 1.0 / (float)(uVar1 & 0x3fff);
  FUN_00965b68(SUB42(param_1,0),fVar7,SUB42(param_1 + param_3,0),
               SUB42(fVar3 + fVar3 + param_4 + fVar7,0),0,fVar9 * fVar8,
               1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar5,(fVar8 + fVar4) * fVar9,param_6,
               &local_5c,0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a433d4(float param_1,float param_2,float param_3,float param_4,long param_5,
                 undefined8 param_6,float *param_7,long param_8)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char local_7c;
  char local_7b;
  char local_7a;
  undefined1 local_79;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar7 = param_5 + 0xa0;
  local_7c = -((byte)(((uint)*(byte *)(param_5 + 0x140) << 4) >> 7) & 1);
  local_79 = *(undefined1 *)(param_8 + 3);
  fVar10 = *param_7 * 8.0;
  local_7b = local_7c;
  local_7a = local_7c;
  lVar6 = FUN_00f0a7d4(lVar7,*(undefined4 *)(param_5 + 0x118));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
  fVar11 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar4 = param_1 - fVar3 * 0.0;
  fVar5 = param_2 - fVar5 * 0.0;
  FUN_00965b68(SUB42(fVar4,0),SUB42(fVar5,0),SUB42(fVar10 + fVar4,0),SUB42(fVar5 + param_4,0),0,
               fVar11 * fVar8,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar9,
               (fVar8 + fVar3) * fVar11,param_6,&local_7c,0);
  lVar6 = FUN_00f0a7d4(lVar7,*(undefined4 *)(param_5 + 0x11c));
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar4 = (fVar10 + param_1) - fVar3 * 0.0;
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
  fVar11 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar5 = param_2 - fVar5 * 0.0;
  FUN_00965b68(SUB42(fVar4,0),SUB42(fVar5,0),SUB42((param_3 - (fVar10 + fVar10)) + fVar4,0),
               SUB42(fVar5 + param_4,0),0,fVar11 * fVar8,
               1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar9,(fVar8 + fVar3) * fVar11,param_6
               ,&local_7c,0);
  lVar7 = FUN_00f0a7d4(lVar7,*(undefined4 *)(param_5 + 0x120));
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 4));
  fVar11 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar4 = ((param_1 + param_3) - fVar10) - fVar3 * 0.0;
  param_2 = param_2 - fVar5 * 0.0;
  FUN_00965b68(SUB42(fVar4,0),SUB42(param_2,0),SUB42(fVar10 + fVar4,0),SUB42(param_2 + param_4,0),0,
               fVar11 * fVar8,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar9,
               (fVar8 + fVar3) * fVar11,param_6,&local_7c,0);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00a43688(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = 0.0;
  if (0.0 < param_6) {
    fVar9 = (float)(int)((param_3 - (param_5 + param_5)) * param_6);
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (fVar9 == 0.0) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(param_6)) {
        bVar3 = param_6 < 0.0;
        bVar4 = param_6 == 0.0;
        bVar5 = false;
      }
    }
    fVar11 = 1.0;
    if (bVar4 || bVar3 != bVar5) {
      fVar11 = fVar9;
    }
    if ((fVar11 == 0.0) || (2.0 < fVar11)) {
      if (fVar11 <= 0.0) {
        return fVar11;
      }
    }
    else {
      fVar11 = 2.0;
    }
    lVar6 = FUN_00f0a7d4(param_7 + 0xa0,param_10);
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
    uVar1 = *(uint *)(*(long *)(*(long *)(param_7 + 0xa0) + 8) + 0x3c);
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
    fVar8 = (param_1 + param_5) - fVar7 * 0.0;
    param_2 = param_2 - fVar9 * 0.0;
    fVar9 = 1.0 / (float)(uVar1 & 0x3fff);
    FUN_00965b68(fVar8,param_2,SUB42(fVar11 + fVar8,0),SUB42(param_2 + param_4,0),0,fVar9 * fVar10,
                 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar2,(fVar10 + fVar7) * fVar9,
                 param_8,param_9,0);
  }
  return fVar11;
}




void FUN_00a437dc(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  FUN_00f0ac5c();
  param_1[0x29] = 0;
  *param_1 = (long)&PTR_FUN_027c9d60;
  uVar2 = DAT_03214ce8;
  plVar1 = param_1 + 0x2d;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  FUN_00b89cd8(plVar1);
  FUN_00f13ca4(param_1 + 0x46);
  lVar5 = 0;
  do {
    FUN_00f13ca4((long)param_1 + lVar5 + 0x2e8);
    lVar5 = lVar5 + 0xb8;
  } while (lVar5 != 0x170);
  FUN_00f13ca4(param_1 + 0x8b);
  plVar6 = param_1 + 0xa2;
  lVar5 = 0x2f70;
  do {
    FUN_00a45df0(plVar6);
    lVar5 = lVar5 + -0x7e8;
    plVar6 = plVar6 + 0xfd;
  } while (lVar5 != 0);
  lVar5 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar5 + 0x3480);
    lVar5 = lVar5 + 0xf0;
  } while (lVar5 != 0x2d0);
  *(undefined4 *)(param_1 + 0x6eb) = 0;
  param_1[0x6ea] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  lVar5 = 0;
  do {
    FUN_00f023ec(plVar1,(long)param_1 + lVar5 + 0x2e8,1);
    lVar5 = lVar5 + 0xb8;
  } while (lVar5 != 0x170);
  FUN_00f023ec(plVar1,param_1 + 0x8b,1);
  FUN_00f023ec(plVar1,param_1 + 0x46,1);
  lVar5 = 0;
  do {
    *(uint *)((long)param_1 + lVar5 + 0x36c) = *(uint *)((long)param_1 + lVar5 + 0x36c) | 4;
    lVar5 = lVar5 + 0xb8;
  } while (lVar5 != 0x170);
  *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) | 4;
  *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) | 4;
  uVar2 = FUN_00e6a474("HUD_Inventory");
  uVar3 = FUN_0091ed5c("HUD_Inventory",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar4 = FUN_00d7e3d0();
  FUN_00e6ea58(uVar4,param_1,0xe4cbad13,FUN_00a43998,0);
  return;
}




void FUN_00a43ab8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_027c9d60;
  uVar1 = FUN_00d7e3d0();
  FUN_00e6ec98(uVar1,param_1);
  lVar3 = -0x2d0;
  puVar2 = param_1 + 0x6cc;
  do {
    *puVar2 = &PTR_FUN_028266f0;
    puVar2[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar2 + 0x1a);
    FUN_00f13d08(puVar2);
    lVar3 = lVar3 + 0xf0;
    puVar2 = puVar2 + -0x1e;
  } while (lVar3 != 0);
  puVar2 = param_1 + 0x593;
  lVar3 = -0x2f70;
  do {
    FUN_00a463e0(puVar2);
    lVar3 = lVar3 + 0x7e8;
    puVar2 = puVar2 + -0xfd;
  } while (lVar3 != 0);
  FUN_00f13d08(param_1 + 0x8b);
  lVar3 = 0;
  do {
    FUN_00f13d08((long)param_1 + lVar3 + 0x3a0);
    lVar3 = lVar3 + -0xb8;
  } while (lVar3 != -0x170);
  FUN_00f13d08(param_1 + 0x46);
  FUN_00f13d08(param_1 + 0x2d);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a43ba8(void *param_1)

{
  FUN_00a43ab8();
  operator_delete(param_1);
  return;
}




void FUN_00a43bcc(long param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x148) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x150) = uVar3;
  lVar4 = FUN_00d9ea60(param_1 + 0x148);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x28;
  }
  puVar2 = &DAT_03214ce8;
  if (lVar4 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_1 + 0x158) = lVar1;
  *(undefined4 *)(param_1 + 0x160) = uVar3;
  FUN_00a43c2c(param_1);
  return;
}




void FUN_00a43c2c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  
  plVar6 = (long *)param_1[0x2b];
  if (plVar6 != (long *)0x0) {
    plVar1 = param_1 + 0x2b;
    plVar2 = param_1 + 0x2c;
    if ((int)param_1[0x2c] == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      if (lVar7 != 0) {
        uVar12 = 0;
        uVar11 = 0;
        plVar6 = param_1 + 0x6eb;
        while( true ) {
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72dac(uVar9);
          if (uVar3 <= uVar12) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72940(uVar9);
          if (uVar3 <= uVar12) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72940(uVar9);
          if ((5 < (int)uVar11) || (uVar3 <= uVar11)) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          iVar4 = FUN_00d72ed0(uVar9,uVar12);
          if (iVar4 != -1) {
            plVar8 = (long *)*plVar1;
            uVar9 = 0;
            if (plVar8 != (long *)0x0) {
              if ((int)*plVar2 == (int)plVar8[1]) {
                uVar9 = (**(code **)(*plVar8 + 0x10))();
              }
              else {
                *plVar1 = 0;
                uVar9 = 0;
                *(int *)plVar2 = DAT_03214ce8;
              }
            }
            FUN_00d73214(uVar9,iVar4);
            uVar10 = FUN_00a1feb4();
            if ((uVar10 & 1) == 0) {
              plVar8 = (long *)*plVar1;
              uVar9 = 0;
              if (plVar8 != (long *)0x0) {
                if ((int)*plVar2 == (int)plVar8[1]) {
                  uVar9 = (**(code **)(*plVar8 + 0x10))();
                }
                else {
                  *plVar1 = 0;
                  uVar9 = 0;
                  *(int *)plVar2 = DAT_03214ce8;
                }
              }
              uVar10 = FUN_00d73360(uVar9,iVar4);
              if ((uVar10 & 1) != 0) {
                if (((char)*plVar6 == '\0') && (*(char *)((long)param_1 + 0x3759) == '\0')) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = 1;
                }
                FUN_00a45bf4(param_1,uVar11,iVar4,0,uVar9);
                uVar11 = uVar11 + 1;
              }
            }
          }
          uVar12 = uVar12 + 1;
        }
        uVar12 = 0;
        while( true ) {
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72dac(uVar9);
          if (uVar3 <= uVar12) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72940(uVar9);
          if (uVar3 <= uVar12) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72940(uVar9);
          if ((5 < (int)uVar11) || (uVar3 <= uVar11)) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          iVar4 = FUN_00d72ed0(uVar9,uVar12);
          if (iVar4 != -1) {
            plVar8 = (long *)*plVar1;
            uVar9 = 0;
            if (plVar8 != (long *)0x0) {
              if ((int)*plVar2 == (int)plVar8[1]) {
                uVar9 = (**(code **)(*plVar8 + 0x10))();
              }
              else {
                *plVar1 = 0;
                uVar9 = 0;
                *(int *)plVar2 = DAT_03214ce8;
              }
            }
            uVar10 = FUN_00d73360(uVar9,iVar4);
            if ((uVar10 & 1) == 0) {
              plVar8 = (long *)*plVar1;
              if (plVar8 != (long *)0x0) {
                if ((int)*plVar2 == (int)plVar8[1]) {
                  (**(code **)(*plVar8 + 0x10))();
                }
                else {
                  *plVar1 = 0;
                  *(int *)plVar2 = DAT_03214ce8;
                }
              }
              if ((char)*plVar6 != '\0') {
                FUN_00a45bf4(param_1,uVar11,iVar4,0,1);
                uVar11 = uVar11 + 1;
              }
            }
          }
          uVar12 = uVar12 + 1;
        }
        uVar12 = 0;
        *(uint *)(param_1 + 0x6ea) = uVar11;
        while( true ) {
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72dac(uVar9);
          if (uVar3 <= uVar12) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72940(uVar9);
          if (uVar3 <= uVar12) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72940(uVar9);
          if ((5 < (int)uVar11) || (uVar3 <= uVar11)) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *plVar1 = 0;
              uVar9 = 0;
              *(int *)plVar2 = DAT_03214ce8;
            }
          }
          uVar5 = FUN_00d72ed0(uVar9,uVar12);
          plVar8 = (long *)*plVar1;
          if (plVar8 == (long *)0x0) {
            uVar9 = 0;
          }
          else if ((int)*plVar2 == (int)plVar8[1]) {
            uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
          }
          else {
            *plVar1 = 0;
            uVar9 = 0;
            *(int *)plVar2 = DAT_03214ce8;
          }
          uVar10 = FUN_00d73360(uVar9,uVar5);
          if ((uVar10 & 1) == 0) {
            plVar8 = (long *)*plVar1;
            if (plVar8 != (long *)0x0) {
              if ((int)*plVar2 == (int)plVar8[1]) {
                (**(code **)(*plVar8 + 0x10))();
              }
              else {
                *plVar1 = 0;
                *(int *)plVar2 = DAT_03214ce8;
              }
            }
            if ((char)*plVar6 == '\0') {
              FUN_00a45bf4(param_1,uVar11,uVar5,0,1);
              uVar11 = uVar11 + 1;
            }
          }
          uVar12 = uVar12 + 1;
        }
        if (uVar11 < 6) {
          plVar6 = param_1 + (ulong)uVar11 * 0xfd + 0xa2;
          lVar7 = 6 - (ulong)uVar11;
          do {
            FUN_00a466f4(plVar6);
            lVar7 = lVar7 + -1;
            plVar6 = plVar6 + 0xfd;
          } while (lVar7 != 0);
        }
      }
    }
    else {
      *plVar1 = 0;
      *(int *)plVar2 = DAT_03214ce8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00a44294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}

