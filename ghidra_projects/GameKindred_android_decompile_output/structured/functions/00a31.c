// functions/00a31 — 18 functions
#include "libGameKindred.h"




void FUN_00a3102c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
     ((uVar1 = FUN_00f04a94(param_2), (uVar1 & 1) == 0 ||
      (uVar1 = FUN_00a310b8(param_1), (uVar1 & 1) == 0)))) {
    FUN_00a30f2c(param_1);
    return;
  }
  return;
}




void FUN_00a310b8(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  timespec local_88 [3];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  clock_gettime(1,local_88);
  lVar8 = local_88[0].tv_nsec - *(long *)(param_1 + 0x768);
  lVar7 = local_88[0].tv_sec - *(long *)(param_1 + 0x760);
  if (lVar8 < 0) {
    lVar7 = lVar7 + -1;
    lVar8 = (local_88[0].tv_nsec + 1000000000) - *(long *)(param_1 + 0x768);
  }
  uVar5 = 0;
  if (2.0 <= (double)(lVar8 + lVar7 * 1000000000) * 1e-09) {
    lVar7 = FUN_00a114dc(0);
    if (lVar7 != 0) {
      FUN_00a1ae38();
      fVar12 = (float)FUN_00a1b610();
      uVar5 = 0;
      if (0.0 < fVar12) goto LAB_00a312a8;
    }
    uVar5 = FUN_00da414c(0);
    uVar2 = FUN_00da45fc(uVar5,2);
    if (*(long *)(param_1 + 0x758) != 0) {
      uVar13 = FUN_00d734b0(*(long *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770));
      fVar12 = (float)FUN_00d7349c(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770)
                                  );
      uVar3 = FUN_00d72f48(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770));
      if (10.0 <= fVar12) {
        uVar5 = 0;
        if (5.0 <= (float)uVar13) {
          uVar4 = FUN_00cedce4(0);
          FUN_009841dc(uVar13,local_88,uVar4,uVar2,0xffffffff,uVar3);
          FUN_00ce20fc(local_88);
          lVar7 = FUN_00a1ffc0();
          plVar6 = (long *)(lVar7 + 0x10);
          plVar9 = (long *)*plVar6;
          plVar10 = plVar6;
          if (plVar9 != (long *)0x0) {
            do {
              if (*(uint *)(plVar9 + 4) >= 0x2e4f13dd) {
                plVar10 = plVar9;
              }
              plVar9 = (long *)plVar9[*(uint *)(plVar9 + 4) < 0x2e4f13dd];
            } while (plVar9 != (long *)0x0);
            if (((plVar10 != plVar6) && (*(uint *)(plVar10 + 4) < 0x2e4f13de)) &&
               ((int)plVar10[5] != 0)) {
              lVar7 = 0;
              uVar11 = 0;
              do {
                (*(code *)((undefined8 *)(plVar10[6] + lVar7))[1])
                          (*(undefined8 *)(plVar10[6] + lVar7),uVar2 & 0xff);
                uVar11 = uVar11 + 1;
                lVar7 = lVar7 + 0x10;
              } while (uVar11 < *(uint *)(plVar10 + 5));
            }
          }
          FUN_00e70314(param_1 + 0x760);
          uVar5 = 1;
        }
        goto LAB_00a312a8;
      }
    }
    uVar5 = 0;
  }
LAB_00a312a8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00a312d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x770) != -1) {
    uVar2 = FUN_00a1f33c();
    FUN_00a19d20(local_40,*(undefined1 *)(param_1 + 0x778));
    local_40[0] = &PTR_FUN_027c84d0;
    FUN_00a1a334(uVar2,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a31368(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027c92f0;
  FUN_00b89cd8(param_1 + 0x17);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(ushort *)(param_1 + 0x32) = *(ushort *)(param_1 + 0x32) & 0xfc00 | 1;
  uVar1 = FUN_00e6a474("HUD_BattleLog");
  uVar2 = FUN_0091ed5c("HUD_BattleLog",uVar1,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  uVar3 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar3,param_1,0x3c29fe0,FUN_00a31420,0);
                    /* WARNING: Could not recover jumptable at 0x00a3141c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  return;
}




void FUN_00a315bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_027c92f0;
  FUN_00a31614();
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar1,param_1);
  if ((void *)param_1[0x31] != (void *)0x0) {
    operator_delete__((void *)param_1[0x31]);
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a31614(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x180);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x188) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x188) + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0x180);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x188) != 0) {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  return;
}




void FUN_00a31678(void *param_1)

{
  FUN_00a315bc();
  operator_delete(param_1);
  return;
}




void FUN_00a3169c(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    uVar2 = 0;
  }
  else if ((int)param_2[1] == (int)plVar3[1]) {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  else {
    *param_2 = 0;
    uVar2 = 0;
    *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
  }
  uVar1 = FUN_00d55870(uVar2);
  *(undefined1 *)(param_1 + 400) = uVar1;
  return;
}




void FUN_00a3170c(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0xb8,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a3171c(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 400) = *(ushort *)(param_1 + 400) & 0xfdff | (param_2 & 1) << 9;
  return;
}




void FUN_00a31734(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_6e8 [96];
  undefined8 local_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_6e8);
  FUN_00d4dabc(auStack_6e8,1);
  FUN_00d4d364(auStack_6e8,1);
  FUN_00d4dad4(auStack_6e8,*(undefined1 *)(param_1 + 400));
  uVar2 = FUN_00d9e840(auStack_6e8,local_688,200,0);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    puVar5 = local_688;
    do {
      lVar3 = FUN_00d5a41c(*puVar5);
      if (lVar3 != 0) {
        FUN_00a317fc(param_1,*puVar5,lVar3);
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a317fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte local_140 [16];
  void *local_130;
  byte local_128 [16];
  void *local_118;
  undefined1 local_110;
  undefined1 auStack_108 [128];
  undefined1 auStack_88 [32];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  cVar5 = FUN_00d55870(param_2);
  cVar2 = *(char *)(param_1 + 400);
  uVar6 = FUN_00d5bc38(param_2);
  FUN_00e6a8a8(auStack_88,"icon_hero_%s",uVar6);
  lVar7 = FUN_00d7ade4(param_3);
  puVar4 = PTR_s_build___HUDPartsHero__s_png_02be3470;
  uVar9 = *(undefined8 *)(lVar7 + 0x10);
  uVar6 = FUN_00d5bc38(param_2);
  FUN_00e6a8a8(auStack_108,puVar4,uVar6);
  FUN_008fa54c(local_140,auStack_108);
  FUN_008fa54c(local_128,uVar9);
  local_110 = 1;
  uVar8 = FUN_00a32d10(param_1,auStack_88,0,&DAT_03210450,local_140,1,1,cVar5 == cVar2,
                       cVar5 == cVar2,0xffffffff,0xffffffff,0);
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118);
  }
  if ((local_140[0] & 1) != 0) {
    operator_delete(local_130);
  }
  if (((uVar8 & 1) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8),
     lVar7 != 0)) {
    puVar1 = &DAT_03131f20;
    if (cVar5 != cVar2) {
      puVar1 = &DAT_03131f24;
    }
    *(uint *)(lVar7 + 0x96c) = *(uint *)(lVar7 + 0x96c) | 4;
    *(uint *)(lVar7 + 0xc3c) = *(uint *)(lVar7 + 0xc3c) | 4;
    FUN_00f0e670(lVar7 + 0xac8,puVar1,2);
    if ((*(float *)(lVar7 + 0xb10) != 1.2) || (*(float *)(lVar7 + 0xb14) != 1.2)) {
      *(undefined8 *)(lVar7 + 0xb10) = 0x3f99999a3f99999a;
      FUN_0091ada4(lVar7 + 0xac8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a319e4(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  char *__s;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_008fa54c(local_70,"icon_hero_");
  lVar4 = FUN_00d9e390(param_2);
  if (lVar4 != 0) {
    cVar3 = FUN_00d55870(lVar4);
    if (cVar3 == *(char *)(param_1 + 400)) {
      __s = (char *)FUN_00d5bc38(lVar4);
      sVar5 = strlen(__s);
      FUN_0090de84(local_70,__s,sVar5);
      FUN_00ced928(param_2);
      lVar6 = FUN_00cce8a4();
      if ((*(int *)(param_1 + 0x180) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8)
         , lVar8 != 0)) {
        pvVar1 = (void *)((ulong)local_70 | 1);
        if ((local_70[0] & 1) != 0) {
          pvVar1 = local_60;
        }
        uVar7 = FUN_00a31b68(lVar8,pvVar1,param_4);
        if ((uVar7 & 1) != 0) {
          FUN_00a31c60(lVar8,param_5,lVar6);
          *(undefined4 *)(lVar8 + 0x158) = 0x40a00000;
          goto LAB_00a31b28;
        }
      }
      if (lVar6 != 0) {
        uVar7 = FUN_00ceabcc(param_4);
        if ((uVar7 & 1) == 0) {
          uVar7 = FUN_00ceabdc(param_4);
          if ((uVar7 & 1) != 0) {
            FUN_00a31e20(param_1,lVar4,lVar6,param_4,param_5);
          }
        }
        else {
          FUN_00a31d1c(param_1,lVar4,param_4);
        }
      }
    }
  }
LAB_00a31b28:
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00a31b68(long param_1,char *param_2,int param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  void *__s1;
  
  bVar2 = *(byte *)(param_1 + 0xee0);
  if (param_2 == (char *)0x0) {
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0xee8);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n != sVar1) {
      return false;
    }
    __s1 = *(void **)(param_1 + 0xef0);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0xee1);
    }
    pcVar5 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar5 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)(param_1 + 0xee1);
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar4 != *pcVar5) {
            return false;
          }
          pcVar4 = pcVar4 + 1;
          lVar6 = lVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_00a31c34;
    }
    if (__n == 0) goto LAB_00a31c34;
    iVar3 = memcmp(__s1,pcVar5,__n);
  }
  else {
    if ((bVar2 & 1) == 0) {
      pcVar5 = (char *)(param_1 + 0xee1);
    }
    else {
      pcVar5 = *(char **)(param_1 + 0xef0);
    }
    iVar3 = strcmp(param_2,pcVar5);
  }
  if (iVar3 != 0) {
    return false;
  }
LAB_00a31c34:
  return *(int *)(param_1 + 0xf54) == param_3;
}




void FUN_00a31c60(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_2 = *(int *)(param_1 + 0x15c) + param_2;
  *(int *)(param_1 + 0x15c) = param_2;
  *(int *)(param_1 + 0x160) = param_2;
  if (*(int *)(param_1 + 0xf54) != 0) {
    uVar2 = FUN_00920c38(*(int *)(param_1 + 0xf54),param_3,param_1 + 0x160);
    FUN_00f0e578(param_1 + 0xca8,uVar2);
    param_2 = *(int *)(param_1 + 0x160);
  }
  if (1 < param_2) {
    FUN_00e70510(&local_38);
    FUN_00e70e18(&local_38,&DAT_01b95634,*(undefined4 *)(param_1 + 0x160));
    FUN_00a34528(param_1,&local_38);
    if (local_30 != (void *)0x0) {
      operator_delete__(local_30);
      local_38 = 0;
      local_30 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a31d1c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_5c;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5bc38(param_2);
  FUN_00e6a8a8(auStack_58,"icon_hero_%s",uVar2);
  local_5c = 1;
  uVar2 = FUN_00920c38(param_3,0,&local_5c);
  uVar3 = FUN_00a329e4(param_1,auStack_58,0,&DAT_03210450,uVar2,1,local_5c,1,0,0xffffffff,0xffffffff
                       ,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8);
    *(uint *)(lVar4 + 0x96c) = *(uint *)(lVar4 + 0x96c) | 4;
    *(uint *)(lVar4 + 0xc3c) = *(uint *)(lVar4 + 0xc3c) & 0xfffffffb;
    *(undefined4 *)
     (*(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8) + 0xf54) =
         param_3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a31e20(long param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined4 param_5
                 )

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  byte local_d0 [16];
  void *local_c0;
  undefined4 local_b4;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  undefined1 local_80;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00d5bc38(param_2);
  FUN_00e6a8a8(auStack_78,"icon_hero_%s",uVar3);
  local_b4 = param_5;
  uVar3 = FUN_00920c38(param_4,param_3,&local_b4);
  FUN_00cac438(local_d0,*(undefined8 *)(param_3 + 8));
  pvVar1 = (void *)((ulong)local_d0 | 1);
  if ((local_d0[0] & 1) != 0) {
    pvVar1 = local_c0;
  }
  FUN_008fa54c(local_b0,pvVar1);
  FUN_008fa54c(local_98,uVar3);
  local_80 = 0;
  uVar4 = FUN_00a32d10(param_1,auStack_78,0,&DAT_03210450,local_b0,param_5,local_b4,1,1,0xffffffff,
                       0xffffffff,param_3);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((uVar4 & 1) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8),
     lVar5 != 0)) {
    *(undefined4 *)(lVar5 + 0xf54) = param_4;
    *(uint *)(lVar5 + 0x96c) = *(uint *)(lVar5 + 0x96c) | 4;
    *(uint *)(lVar5 + 0xc3c) = *(uint *)(lVar5 + 0xc3c) & 0xfffffffb;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a31fac(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = *param_4;
  FUN_00920c38(param_1,param_2,&local_3c);
  uVar2 = NEON_fmov(0x3f800000,4);
  *param_4 = local_3c;
  *param_3 = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

