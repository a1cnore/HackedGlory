// functions/00a33 — 7 functions
#include "libGameKindred.h"




void FUN_00a330b8(float param_1,long param_2)

{
  long *plVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  
  uVar3 = (ulong)*(uint *)(param_2 + 0x180);
  if (*(uint *)(param_2 + 0x180) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    iVar5 = 0;
    do {
      lVar4 = *(long *)(param_2 + 0x188);
      plVar1 = *(long **)(lVar4 + lVar6);
      fVar8 = *(float *)(plVar1 + 0x2b) - ((float)((int)uVar3 - 1) * 0.3 + 1.0) * param_1;
      *(float *)(plVar1 + 0x2b) = fVar8;
      if (fVar8 <= 0.0) {
        if (plVar1 == (long *)0x0) {
          lVar4 = lVar4 + uVar7 * 8;
        }
        else {
          (**(code **)(*plVar1 + 8))();
          lVar4 = *(long *)(param_2 + 0x188) + lVar6;
        }
        FUN_00a34f0c((uint *)(param_2 + 0x180),lVar4,lVar4 + 8);
        uVar3 = (ulong)*(uint *)(param_2 + 0x180);
        iVar5 = iVar5 + 1;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar7 < uVar3);
    if (0 < iVar5) {
      FUN_00a33210(param_2);
    }
  }
  pfVar2 = (float *)FUN_00d70a78();
  if ((((*(byte *)(param_2 + 0x191) & 1) == 0) && (0.0 < *pfVar2)) &&
     (fVar8 = (float)FUN_009bc24c(), 0.0 < fVar8 - *pfVar2)) {
    *(ushort *)(param_2 + 400) = *(ushort *)(param_2 + 400) | 0x100;
    FUN_00ceace8();
    uVar3 = FUN_00ceb05c();
    if ((uVar3 & 1) != 0) {
      FUN_00a31614(param_2);
      FUN_00a31734(param_2);
      return;
    }
  }
  return;
}




void FUN_00a33210(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 local_b8;
  float fStack_b4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  long local_a8;
  
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_ac,auStack_b0);
  uVar3 = FUN_00a1bcec();
  iVar6 = (int)param_3[0x30];
  uVar7 = iVar6 - 5;
  if (0 < (int)uVar7) {
    lVar5 = param_3[0x31];
    uVar12 = 0;
    do {
      plVar4 = *(long **)(lVar5 + uVar12 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
        *(undefined8 *)(param_3[0x31] + uVar12 * 8) = 0;
        lVar5 = param_3[0x31];
      }
      uVar12 = uVar12 + 1;
    } while (uVar7 != uVar12);
    FUN_00a34f0c(param_3 + 0x30,lVar5,lVar5 + (long)(int)uVar7 * 8);
    iVar6 = (int)param_3[0x30];
  }
  if (iVar6 != 0) {
    uVar13 = 0;
    if ((uVar3 & 1) == 0) {
      uVar13 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    (**(code **)(**(long **)param_3[0x31] + 0x50))();
    uVar7 = *(uint *)(param_3 + 0x30);
    if (uVar7 != 0) {
      lVar5 = param_3[0x31];
      uVar3 = 0;
      fVar15 = param_2 * 0.5;
      do {
        lVar2 = DAT_03210d00;
        if (*(long *)(lVar5 + uVar3 * 8) != 0) {
          uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
          if ((ulong)uVar8 == 0xffff) {
            puVar9 = (ushort *)0x0;
          }
          else {
            puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
            if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
              uVar8 = 0xffff;
            }
            else {
              uVar8 = *puVar9;
            }
            *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
            *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
            FUN_00efdc08(puVar9);
            *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
          }
          local_b8 = uVar13;
          fStack_b4 = fVar15;
          FUN_00efdc50(puVar9,&local_b8);
          FUN_00efcac4(0x3dcccccd,puVar9);
          lVar5 = DAT_03210d00;
          uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
          if ((ulong)uVar8 == 0xffff) {
            puVar10 = (ushort *)0x0;
          }
          else {
            puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
            if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
              uVar8 = 0xffff;
            }
            else {
              uVar8 = *puVar10;
            }
            *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
            *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
            FUN_00efdd74(puVar10);
            *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
          }
          FUN_00efddc4(0x3f800000,puVar10);
          fVar14 = ((float)(*(uint *)(*(long *)(param_3[0x31] + uVar3 * 8) + 0x84) >> 7 & 0xff) /
                    -255.0 + 1.0) * 0.2;
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          FUN_00efcac4(fVar14,puVar10);
          lVar5 = DAT_03210d00;
          uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
          if ((ulong)uVar8 == 0xffff) {
            puVar11 = (ushort *)0x0;
          }
          else {
            puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
            if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
              uVar8 = 0xffff;
            }
            else {
              uVar8 = *puVar11;
            }
            *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
            *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
            FUN_00efcd98(puVar11);
            *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
          }
          FUN_00efcea4(puVar11,puVar9,puVar10,0);
          FUN_00f01980(*(undefined8 *)(param_3[0x31] + uVar3 * 8));
          FUN_00f02308(*(undefined8 *)(param_3[0x31] + uVar3 * 8),puVar11,0);
          (**(code **)(**(long **)(param_3[0x31] + uVar3 * 8) + 0x48))();
          lVar5 = param_3[0x31];
          uVar7 = *(uint *)(param_3 + 0x30);
          fVar15 = fVar15 + param_2 * *(float *)(*(long *)(lVar5 + uVar3 * 8) + 0x4c) + 0.0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar7);
    }
  }
  FUN_00f13f08(0x43a50000,0x44228000,param_3);
  if (*(long *)(lVar1 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a33210(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  long lStack_a8;
  
  lVar1 = tpidr_el0;
  lStack_a8 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_ac,auStack_b0);
  uVar3 = FUN_00a1bcec();
  iVar6 = (int)param_3[0x30];
  uVar7 = iVar6 - 5;
  if (0 < (int)uVar7) {
    lVar5 = param_3[0x31];
    uVar12 = 0;
    do {
      plVar4 = *(long **)(lVar5 + uVar12 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
        *(undefined8 *)(param_3[0x31] + uVar12 * 8) = 0;
        lVar5 = param_3[0x31];
      }
      uVar12 = uVar12 + 1;
    } while (uVar7 != uVar12);
    FUN_00a34f0c(param_3 + 0x30,lVar5,lVar5 + (long)(int)uVar7 * 8);
    iVar6 = (int)param_3[0x30];
  }
  if (iVar6 != 0) {
    uVar13 = 0;
    if ((uVar3 & 1) == 0) {
      uVar13 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    (**(code **)(**(long **)param_3[0x31] + 0x50))();
    uVar7 = *(uint *)(param_3 + 0x30);
    if (uVar7 != 0) {
      lVar5 = param_3[0x31];
      uVar3 = 0;
      fVar15 = param_2 * 0.5;
      do {
        lVar2 = DAT_03210d00;
        if (*(long *)(lVar5 + uVar3 * 8) != 0) {
          uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
          if ((ulong)uVar8 == 0xffff) {
            puVar9 = (ushort *)0x0;
          }
          else {
            puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
            if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
              uVar8 = 0xffff;
            }
            else {
              uVar8 = *puVar9;
            }
            *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
            *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
            FUN_00efdc08(puVar9);
            *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
          }
          uStack_b8 = uVar13;
          fStack_b4 = fVar15;
          FUN_00efdc50(puVar9,&uStack_b8);
          FUN_00efcac4(0x3dcccccd,puVar9);
          lVar5 = DAT_03210d00;
          uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
          if ((ulong)uVar8 == 0xffff) {
            puVar10 = (ushort *)0x0;
          }
          else {
            puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
            if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
              uVar8 = 0xffff;
            }
            else {
              uVar8 = *puVar10;
            }
            *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
            *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
            FUN_00efdd74(puVar10);
            *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
          }
          FUN_00efddc4(0x3f800000,puVar10);
          fVar14 = ((float)(*(uint *)(*(long *)(param_3[0x31] + uVar3 * 8) + 0x84) >> 7 & 0xff) /
                    -255.0 + 1.0) * 0.2;
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          FUN_00efcac4(fVar14,puVar10);
          lVar5 = DAT_03210d00;
          uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
          if ((ulong)uVar8 == 0xffff) {
            puVar11 = (ushort *)0x0;
          }
          else {
            puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
            if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
              uVar8 = 0xffff;
            }
            else {
              uVar8 = *puVar11;
            }
            *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
            *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
            FUN_00efcd98(puVar11);
            *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
          }
          FUN_00efcea4(puVar11,puVar9,puVar10,0);
          FUN_00f01980(*(undefined8 *)(param_3[0x31] + uVar3 * 8));
          FUN_00f02308(*(undefined8 *)(param_3[0x31] + uVar3 * 8),puVar11,0);
          (**(code **)(**(long **)(param_3[0x31] + uVar3 * 8) + 0x48))();
          lVar5 = param_3[0x31];
          uVar7 = *(uint *)(param_3 + 0x30);
          fVar15 = fVar15 + param_2 * *(float *)(*(long *)(lVar5 + uVar3 * 8) + 0x4c) + 0.0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar7);
    }
  }
  FUN_00f13f08(0x43a50000,0x44228000,param_3);
  if (*(long *)(lVar1 + 0x28) == lStack_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a335d4(ulong param_1,long param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  char *__s;
  size_t sVar11;
  undefined8 uVar12;
  long lVar13;
  void *pvVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_d8;
  void *local_d0;
  byte local_c8 [16];
  void *local_b8;
  ulong local_b0;
  void *local_a8;
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  undefined1 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar6 = FUN_00a1ae38();
  if (lVar6 != 0) {
    uVar7 = FUN_00a1ae38();
    uVar8 = FUN_00a1b2f0(uVar7,param_3);
    if ((uVar8 & 1) != 0) goto LAB_00a33c54;
  }
  uVar7 = FUN_00da414c();
  puVar9 = (undefined4 *)FUN_00da428c(uVar7,param_4);
  cVar3 = FUN_00cecb68(param_3);
  FUN_00cedce4();
  cVar4 = FUN_00cecb68();
  uVar8 = FUN_00ceab64();
  if ((((((uVar8 & 1) == 0) && (cVar3 != cVar4)) && (*(char *)(puVar9 + 7) == '\0')) ||
      ((uVar8 = FUN_00ceab64(), (uVar8 & 1) != 0 && (*(char *)(puVar9 + 7) == '\0')))) ||
     ((param_5 != -1 &&
      ((iVar5 = FUN_00cedce4(), iVar5 != param_5 && (iVar5 = FUN_00cedce4(), iVar5 != param_3))))))
  goto LAB_00a33c54;
  if ((uint)puVar9[6] < 10) {
    puVar10 = (&PTR_s_build___Sounds_UI_assetbundle_sf_027c9580)[(int)puVar9[6]];
  }
  else {
    puVar10 = &DAT_01e277f2;
  }
  FUN_00a57398(0x3f800000,puVar10);
  FUN_008fa54c(local_c8,"icon_hero_");
  FUN_00d9e390(param_3);
  __s = (char *)FUN_00d5bc38();
  sVar11 = strlen(__s);
  FUN_0090de84(local_c8,__s,sVar11);
  switch(*puVar9) {
  case 0:
    cVar3 = FUN_00cecb68(param_3);
    FUN_00cedce4();
    cVar4 = FUN_00cecb68();
    bVar2 = cVar3 == cVar4;
    uVar7 = FUN_00da414c();
    lVar6 = FUN_00da428c(uVar7,param_4);
    uVar12 = FUN_00e6ce7c(*(undefined8 *)(lVar6 + 8),0);
    thunk_FUN_00e7051c(&local_b0,uVar12);
    FUN_00da429c(param_1,uVar7,param_4,&local_b0,param_6);
    pvVar14 = (void *)((ulong)local_c8 | 1);
    if ((local_c8[0] & 1) != 0) {
      pvVar14 = local_b8;
    }
    goto LAB_00a33bf0;
  case 1:
    if (param_6 != 0xffff) {
      uVar7 = FUN_00d6eb50();
      lVar6 = FUN_00d6eb88(uVar7,param_6);
      uVar7 = FUN_00da414c();
      lVar13 = FUN_00da428c(uVar7,param_4);
      uVar7 = FUN_00e6ce7c(*(undefined8 *)(lVar13 + 8),0);
      thunk_FUN_00e7051c(&local_d8,uVar7);
      uVar7 = *(undefined8 *)(lVar6 + 8);
      pvVar14 = (void *)((ulong)local_c8 | 1);
      if ((local_c8[0] & 1) != 0) {
        pvVar14 = local_b8;
      }
      FUN_008fa54c(&local_b0,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
      FUN_008fa54c(local_98,uVar7);
      local_80 = 0;
      uVar8 = FUN_00a32d10(param_2,pvVar14,0,&local_d8,&local_b0,1,1,cVar3 == cVar4,cVar3 == cVar4,
                           0xffffffff,0xffffffff,0);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((uVar8 & 1) != 0) {
        lVar6 = *(long *)(*(long *)(param_2 + 0x188) + (ulong)(*(int *)(param_2 + 0x180) - 1) * 8);
        *(undefined4 *)(lVar6 + 0x158) = 0x40600000;
        *(uint *)(lVar6 + 0x96c) = *(uint *)(lVar6 + 0x96c) | 4;
        *(uint *)(lVar6 + 0xc3c) = *(uint *)(lVar6 + 0xc3c) | 4;
        *(byte *)(lVar6 + 0xf58) = *(byte *)(lVar6 + 0xf58) & 0xfb;
      }
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
    }
    break;
  case 2:
    uVar12 = FUN_00da414c();
    lVar6 = FUN_00da428c(uVar12,param_4);
    uVar7 = FUN_00e6ce7c(*(undefined8 *)(lVar6 + 8),0);
    thunk_FUN_00e7051c(&local_b0,uVar7);
    goto LAB_00a33b28;
  case 3:
    uVar7 = FUN_00da414c();
    lVar6 = FUN_00da428c(uVar7,param_4);
    uVar12 = FUN_00e6ce7c(*(undefined8 *)(lVar6 + 8),0);
    thunk_FUN_00e7051c(&local_b0,uVar12);
    lVar6 = FUN_00d9e390(param_3);
    lVar6 = *(long *)(lVar6 + 0x38);
    uVar12 = 1;
    if (*(int *)(lVar6 + 0xd0) == param_6) {
LAB_00a33b8c:
      FUN_00da429c(param_1,uVar7,param_4,&local_b0,uVar12);
      pvVar14 = (void *)((ulong)local_c8 | 1);
      if ((local_c8[0] & 1) != 0) {
        pvVar14 = local_b8;
      }
      goto LAB_00a33be8;
    }
    if (*(int *)(lVar6 + 0xd4) == param_6) {
      uVar12 = 2;
      goto LAB_00a33b8c;
    }
    if (*(int *)(lVar6 + 0xd8) == param_6) {
      uVar12 = 3;
      goto LAB_00a33b8c;
    }
    goto LAB_00a33c34;
  case 4:
    uVar12 = FUN_00da414c();
    lVar6 = FUN_00da428c(uVar12,param_4);
    uVar7 = FUN_00e6ce7c(*(undefined8 *)(lVar6 + 8),0);
    thunk_FUN_00e7051c(&local_b0,uVar7);
    lVar6 = FUN_00d9e390(param_3);
    lVar6 = *(long *)(lVar6 + 0x40);
    fVar16 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
             (*(float *)(lVar6 + 0x38) +
             *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0));
    fVar18 = (*(float *)(lVar6 + 0x1a8) + 1.0) *
             (*(float *)(lVar6 + 0x40) +
             *(float *)(lVar6 + 0xf4) * (*(float *)(lVar6 + 0x25c) + 1.0));
    if (DAT_03132150 <= fVar16) {
      fVar16 = DAT_03132150;
    }
    fVar17 = DAT_03132090;
    if (DAT_03132090 <= fVar16) {
      fVar17 = fVar16;
    }
    if (DAT_03132158 <= fVar18) {
      fVar18 = DAT_03132158;
    }
    fVar16 = DAT_03132098;
    if (DAT_03132098 <= fVar18) {
      fVar16 = fVar18;
    }
    if (fVar16 == 0.0) {
      fVar18 = (*(float *)(lVar6 + 0x24c) + 1.0) *
               (*(float *)(lVar6 + 0xe4) +
               *(float *)(lVar6 + 0x198) * (*(float *)(lVar6 + 0x300) + 1.0));
      if (DAT_031321fc <= fVar18) {
        fVar18 = DAT_031321fc;
      }
      fVar16 = DAT_03132138._4_4_;
      if (DAT_03132138._4_4_ <= fVar18) {
        fVar16 = fVar18;
      }
      fVar18 = 0.0;
      if (0.0 < fVar16) {
        pfVar15 = (float *)(lVar6 + 0x314);
        goto LAB_00a33af4;
      }
    }
    else {
      pfVar15 = (float *)(lVar6 + 0x310);
LAB_00a33af4:
      fVar18 = (*pfVar15 / fVar16) * 100.0;
    }
    param_6 = (int)fVar18;
    param_1 = (ulong)(uint)(int)((*(float *)(lVar6 + 0x308) / fVar17) * 100.0);
LAB_00a33b28:
    FUN_00da429c(param_1,uVar12,param_4,&local_b0,param_6);
    pvVar14 = (void *)((ulong)local_c8 | 1);
    if ((local_c8[0] & 1) != 0) {
      pvVar14 = local_b8;
    }
LAB_00a33be8:
    bVar2 = true;
LAB_00a33bf0:
    uVar8 = FUN_00a329e4(param_2,pvVar14,0,&local_b0,&DAT_01e277f2,1,1,bVar2,bVar2,0xffffffff,
                         0xffffffff,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *(long *)(*(long *)(param_2 + 0x188) + (ulong)(*(int *)(param_2 + 0x180) - 1) * 8);
      *(undefined4 *)(lVar6 + 0x158) = 0x40600000;
      *(uint *)(lVar6 + 0x96c) = *(uint *)(lVar6 + 0x96c) | 4;
      *(uint *)(lVar6 + 0xc3c) = *(uint *)(lVar6 + 0xc3c) & 0xfffffffb;
      *(byte *)(lVar6 + 0xf58) = *(byte *)(lVar6 + 0xf58) & 0xfb;
    }
LAB_00a33c34:
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
  }
  if ((local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
LAB_00a33c54:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined * FUN_00a33c8c(long param_1)

{
  if (*(uint *)(param_1 + 0x18) < 10) {
    return (&PTR_s_build___Sounds_UI_assetbundle_sf_027c9580)[(int)*(uint *)(param_1 + 0x18)];
  }
  return &DAT_01e277f2;
}




void FUN_00a33cb4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xf58) = *(byte *)(param_1 + 0xf58) & 0xfb | (param_2 & 1) << 2;
  return;
}




void FUN_00a33ccc(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 undefined4 param_6,undefined4 param_7,byte param_8,byte param_9,undefined4 param_10
                 ,undefined4 param_11,byte param_12)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined4 *puVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 local_80;
  void *local_78;
  long local_70;
  
  lVar16 = tpidr_el0;
  local_70 = *(long *)(lVar16 + 0x28);
  FUN_00f1306c();
  plVar1 = param_1 + 0x2d;
  *(undefined4 *)((long)param_1 + 0x15c) = param_6;
  *(undefined4 *)(param_1 + 0x2c) = param_7;
  *(undefined4 *)(param_1 + 0x2b) = 0x40a00000;
  *param_1 = (long)&PTR_FUN_027c9438;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x3e;
  param_1[0x2d] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x5c;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x7a;
  FUN_00f0e4a8();
  plVar5 = param_1 + 0x98;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xb6;
  FUN_00f0e4a8();
  plVar7 = param_1 + 0xd4;
  FUN_00f0e4a8();
  plVar8 = param_1 + 0xf2;
  FUN_00f1306c(plVar8);
  plVar9 = param_1 + 0x11d;
  FUN_00f0e4a8();
  plVar10 = param_1 + 0x13b;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar11 = param_1 + 0x177;
  FUN_00f0e4a8();
  plVar12 = param_1 + 0x195;
  FUN_00f10d7c();
  plVar13 = param_1 + 0x1b6;
  FUN_00f0d160(plVar13);
  if (param_2 == 0) {
    FUN_008fcdb8(param_1 + 0x1dc,&DAT_0320ffa8);
  }
  else {
    FUN_008fa54c(param_1 + 0x1dc,param_2);
  }
  if (param_3 == 0) {
    FUN_008fcdb8(param_1 + 0x1df,&DAT_0320ffa8);
  }
  else {
    FUN_008fa54c();
  }
  FUN_008fcdb8(param_1 + 0x1e2,param_5);
  FUN_008fcdb8();
  uVar15 = *(undefined1 *)(param_5 + 0x30);
  param_1[0x1ea] = 0xff000000;
  *(undefined1 *)(param_1 + 0x1e8) = uVar15;
  *(undefined4 *)(param_1 + 0x1e9) = param_10;
  *(undefined4 *)((long)param_1 + 0xf4c) = param_11;
  *(byte *)(param_1 + 0x1eb) =
       param_8 & 1 | (param_9 & 1) << 1 | (param_12 & 1) << 3 | *(byte *)(param_1 + 0x1eb) & 0xf0 |
       4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  if ((*(byte *)(param_1 + 0x1eb) >> 3 & 1) != 0) {
    FUN_00f023ec(plVar1,plVar6,1);
    FUN_00f023ec(plVar1,plVar7,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_00f133a4(plVar8,param_1 + 0x159,1);
  FUN_00f133a4(plVar8,plVar13,1);
  FUN_00f133a4(plVar8,plVar9,1);
  FUN_00f133a4(plVar8,plVar10,1);
  FUN_00f133a4(plVar8,plVar11,1);
  FUN_00f133a4(plVar8,plVar12,1);
  *(uint *)((long)param_1 + 0x96c) = *(uint *)((long)param_1 + 0x96c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xc3c) = *(uint *)((long)param_1 + 0xc3c) & 0xfffffffb;
  uVar19 = (*(uint *)(param_1 + 0x1e9) & 0xff00ff00) >> 8 |
           (*(uint *)(param_1 + 0x1e9) & 0xff00ff) << 8;
  if ((uVar19 >> 0x10 | uVar19 << 0x10) != 0xffffffff) {
    FUN_00f0e670(plVar10,param_1 + 0x1e9,2);
  }
  uVar19 = (*(uint *)((long)param_1 + 0xf4c) & 0xff00ff00) >> 8 |
           (*(uint *)((long)param_1 + 0xf4c) & 0xff00ff) << 8;
  if ((uVar19 >> 0x10 | uVar19 << 0x10) != 0xffffffff) {
    FUN_00f0e670(plVar12,(long)param_1 + 0xf4c,2);
  }
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"capsule_button_fill_left");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar19 = *(uint *)((long)param_1 + 0x274);
  if ((uVar19 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x274) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2c80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"capsule_button_fill_left");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  uVar19 = *(uint *)((long)param_1 + 0x634);
  if ((uVar19 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x634) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2c80;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"capsule_button_left");
  FUN_00f0e670(plVar4,&DAT_01bee7fa,2);
  uVar19 = *(uint *)((long)param_1 + 0x454);
  if ((uVar19 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x454) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_1 + 0x83) != *(float *)(param_1 + 0x47)) ||
     (*(float *)((long)param_1 + 0x41c) != *(float *)((long)param_1 + 0x23c))) {
    *(float *)(param_1 + 0x83) = *(float *)(param_1 + 0x47);
    *(float *)((long)param_1 + 0x41c) = *(float *)((long)param_1 + 0x23c);
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"capsule_button_left");
  FUN_00f0e670(plVar7,&DAT_01bee7fa,2);
  uVar19 = *(uint *)((long)param_1 + 0x724);
  if ((uVar19 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x724) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2600;
    FUN_0091ada4(plVar7);
  }
  if ((*(float *)(param_1 + 0xdd) != *(float *)(param_1 + 0x47)) ||
     (*(float *)((long)param_1 + 0x6ec) != *(float *)((long)param_1 + 0x23c))) {
    *(float *)(param_1 + 0xdd) = *(float *)(param_1 + 0x47);
    *(float *)((long)param_1 + 0x6ec) = *(float *)((long)param_1 + 0x23c);
    FUN_0091ada4(plVar7);
  }
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar19 = *(uint *)((long)param_1 + 0x364);
  if ((uVar19 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x364) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2c80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"capsule_button_middle");
  FUN_00f0e670(plVar5,&DAT_01bee7fa,2);
  uVar19 = *(uint *)((long)param_1 + 0x544);
  if ((uVar19 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x544) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2600;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0d92c(plVar13,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_01bee7fa);
  FUN_00f0da30(plVar13,1);
  FUN_00f0da80(plVar13,&DAT_01bee7f6);
  *(uint *)((long)param_1 + 0xe34) = *(uint *)((long)param_1 + 0xe34) & 0xfffffffb;
  FUN_00f0e548(plVar11,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  puVar14 = &DAT_03131f24;
  if ((*(byte *)(param_1 + 0x1eb) & 2) != 0) {
    puVar14 = &DAT_03131f20;
  }
  FUN_00f0e670(plVar11,puVar14,2);
  if ((*(byte *)(param_5 + 0x18) & 1) == 0) {
    uVar20 = (ulong)(*(byte *)(param_5 + 0x18) >> 1);
  }
  else {
    uVar20 = *(ulong *)(param_5 + 0x20);
  }
  if (uVar20 == 0) {
    *(uint *)((long)param_1 + 0xd2c) = *(uint *)((long)param_1 + 0xd2c) & 0xfffffffb;
    uVar19 = *(uint *)((long)param_1 + 0xc3c) & 0xfffffffb;
  }
  else {
    if ((*(byte *)(param_1 + 0x1e2) & 1) == 0) {
      lVar17 = (long)param_1 + 0xf11;
    }
    else {
      lVar17 = param_1[0x1e4];
    }
    FUN_00f0e540(plVar12,lVar17);
    if ((*(byte *)(param_1 + 0x1e5) & 1) == 0) {
      lVar17 = (long)param_1 + 0xf29;
    }
    else {
      lVar17 = param_1[0x1e7];
    }
    thunk_FUN_00f0e578(plVar12,lVar17);
    if ((char)param_1[0x1e8] == '\0') {
      pcVar18 = "white_background";
    }
    else {
      pcVar18 = "circle_button_fill";
    }
    FUN_00f10dc8(plVar12,PTR_s_build___HUDPartsCommon_atlas_02be3440,pcVar18);
    FUN_00f0e698(plVar12,0xb);
    *(uint *)((long)param_1 + 0xd2c) = *(uint *)((long)param_1 + 0xd2c) | 4;
    uVar19 = *(uint *)((long)param_1 + 0xc3c) | 4;
  }
  *(uint *)((long)param_1 + 0xc3c) = uVar19;
  if (param_3 != 0) {
    FUN_00f0e548(param_1 + 0x159,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  }
  uVar20 = FUN_00e70b88(param_4,&DAT_03210450);
  if ((uVar20 & 1) != 0) {
    FUN_00a34528(param_1,param_4);
  }
  if (1 < (int)param_1[0x2c]) {
    FUN_00e70510(&local_80);
    FUN_00e70e18(&local_80,&DAT_01b95634,(int)param_1[0x2c]);
    FUN_00a34528(param_1,&local_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
  }
  if (param_2 == 0) {
    *(uint *)((long)param_1 + 0xa5c) = *(uint *)((long)param_1 + 0xa5c) & 0xfffffffb;
    uVar19 = *(uint *)((long)param_1 + 0x96c) & 0xfffffffb;
  }
  else {
    FUN_00f0e548(plVar9,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
    puVar14 = &DAT_03131f24;
    if ((*(byte *)(param_1 + 0x1eb) & 1) != 0) {
      puVar14 = &DAT_03131f20;
    }
    FUN_00f0e670(plVar9,puVar14,2);
    FUN_00f0e540(plVar10,PTR_s_build___HUDPartsCommon_atlas_02be3440);
    thunk_FUN_00f0e578(plVar10,param_2);
    *(uint *)((long)param_1 + 0xa5c) = *(uint *)((long)param_1 + 0xa5c) | 4;
    uVar19 = *(uint *)((long)param_1 + 0x96c) | 4;
  }
  *(uint *)((long)param_1 + 0x96c) = uVar19;
  (**(code **)(*param_1 + 0x138))(param_1);
  if (*(long *)(lVar16 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

